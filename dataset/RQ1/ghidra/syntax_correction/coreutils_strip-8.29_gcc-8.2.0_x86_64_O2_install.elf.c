
#include "decompile_ghidra.h"
#define __int64 long long
#define __int32 int
#define __int16 short
#define __int8 char

void FUN_00403010(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00403015(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_0040301a(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_0040301f(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void switchD_0040d220caseD_b(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00403029(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_0040302e(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00403033(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00403038(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void switchD_00410d8acaseD_0(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00403042(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void switchD_00414bcccaseD_5(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Could not reconcile some variable overlaps */

ulong FUN_00403050(ulong param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined uVar9;
  passwd *ppVar10;
  group *pgVar11;
  char *pcVar12;
  int *piVar13;
  undefined uVar14;
  void *__ptr;
  undefined uVar15;
  int *piVar16;
  ulong uVar17;
  int iVar18;
  uint uVar19;
  char *pcVar20;
  undefined *__filename;
  long lVar21;
  undefined *puVar22;
  undefined auVar23 [16];
  undefined uStack_148;
  undefined *local_140;
  undefined local_138;
  undefined *local_130;
  char local_121;
  undefined *local_120;
  ulong local_118;
  undefined local_110;
  undefined local_108;
  undefined local_100;
  undefined local_fc;
  undefined local_f8;
  ulong local_f0;
  undefined local_e8;
  undefined local_e4;
  undefined local_e0;
  undefined local_d8;
  stat local_c8;
  
  bVar5 = 0;
  puVar22 = (undefined *)0x0;
  iVar8 = 0;
  uVar15 = 0;
  piVar16 = (int *)(param_1 & 0xffffffff);
  DAT_00621560 = 0;
  FUN_0040cfd0(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils",
                 "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale"
                );
  textdomain("coreutils");
  FUN_00416fd0(FUN_0040aa00);
  FUN_00405700();
  local_118 = 0x400000000;
  local_110 = 0x200000004;
  local_e4 = 0;
  local_108 = 0x10100000180;
  local_100 = 0x100;
  local_fc = 0;
  local_f8 = 0x1000000;
  local_f0 = 0x1000000;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  DAT_00621558 = (undefined *)0x0;
  DAT_00621548 = (undefined *)0x0;
  DAT_00621541 = '\0';
  DAT_00621540 = 0;
  umask(0);
  local_121 = '\0';
  local_120 = (undefined *)0x0;
  local_140 = (undefined *)0x0;
  local_138 = (undefined *)0x0;
  local_130 = (undefined *)0x0;
  puVar1 = (undefined *)0x0;
  puVar2 = local_140;
  puVar3 = local_120;
LAB_00403188:
  local_120 = puVar3;
  local_140 = puVar2;
  __filename = puVar1;
  iVar18 = (int)piVar16;
  iVar6 = FUN_00412970((ulong)piVar16 & 0xffffffff,param_2,"bcCsDdg:m:o:pt:TvS:Z",
                       &PTR_s_backup_00418380,0);
  if (iVar6 == -1) {
    if (DAT_00621540 == 0) {
      if (__filename == (undefined *)0x0) goto LAB_004034bd;
      iVar6 = __xstat(1,(char *)__filename,&local_c8);
      if (((char)uVar15 != '\0') || (iVar6 == 0)) {
        if ((iVar6 != 0) || ((local_c8.st_mode & 0xf000) == 0x4000)) goto LAB_004034bd;
LAB_00403abd:
        uVar15 = FUN_0040ea00(4,__filename);
        uVar9 = dcgettext(0,"target %s is not a directory",5);
        error(1,0,uVar9,uVar15);
      }
      uVar15 = FUN_0040ea00(4,__filename);
      uVar9 = dcgettext(0,"failed to access %s",5);
      piVar16 = __errno_location();
      error(1,*piVar16,uVar9,uVar15);
LAB_00403b2f:
      piVar16 = (int *)FUN_0040ea00(4,local_140[2]);
      pcVar20 = "extra operand %s";
LAB_00403b4f:
      uVar9 = dcgettext(0,pcVar20,5);
      error(0,0,uVar9,piVar16);
    }
    else {
      if (DAT_00621541 != '\0') {
LAB_00403c38:
        uVar15 = dcgettext(0,"the strip option may not be used when installing a directory",5);
        error(1,0,uVar15);
LAB_00403c5a:
        uVar15 = FUN_0040ea00(4,__filename);
        uVar9 = dcgettext(0,"failed to access %s",5);
        error(1,iVar8,uVar9,uVar15);
LAB_00403c90:
        uVar15 = FUN_0040ea00(4,__filename);
        uVar9 = dcgettext(0,"target %s is not a directory",5);
        auVar23 = error(1,iVar8,uVar9,uVar15);
        uVar15 = uStack_148;
        uStack_148 = SUB168(auVar23,0);
        (*(code *)PTR___libc_start_main_0061eff0)
                  (FUN_00403050,uVar15,&local_140,FUN_00416f60,FUN_00416fc0,
                   SUB168(auVar23 >> 0x40,0),&uStack_148);
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      if (__filename != (undefined *)0x0) {
        uVar9 = dcgettext(0,"target directory not allowed when installing a directory",5);
        cVar4 = error(1,0,uVar9);
        goto LAB_004036b9;
      }
LAB_004034bd:
      uVar7 = 0;
      if ((char)puVar22 != '\0') {
        uVar9 = dcgettext(0,"backup type",5);
        uVar7 = FUN_0040a930(uVar9,local_140);
      }
      local_118 = local_118 & 0xffffffff00000000 | (ulong)uVar7;
      FUN_0040a380(local_138);
      if (local_f8._5_1_ == '\0') goto LAB_00403797;
      if ((local_f8._1_1_ == '\0') && (local_120 == (undefined *)0x0)) {
        while( true ) {
          uVar19 = (int)piVar16 - DAT_0061f4dc;
          piVar16 = (int *)(ulong)uVar19;
          local_140 = param_2 + DAT_0061f4dc;
          uVar7 = (DAT_00621540 ^ 1) & (uint)(__filename == (undefined *)0x0);
          cVar4 = (char)uVar7;
          if ((int)uVar19 <= (int)uVar7) break;
          if ((char)iVar8 != '\0') {
            if (__filename == (undefined *)0x0) {
              if (2 < (int)uVar19) goto LAB_00403b2f;
              goto LAB_00403543;
            }
            uVar9 = dcgettext(0,
                              "cannot combine --target-directory (-t) and --no-target-directory (-T)"
                              ,5);
            error(1,0,uVar9);
            break;
          }
LAB_004036b9:
          iVar18 = (int)piVar16;
          if ((cVar4 == '\0') || (__filename = (undefined *)0x0, iVar18 == 1)) goto LAB_00403543;
          param_2 = (undefined *)0x1;
          puVar22 = local_140 + (long)iVar18 + -1;
          __filename = (undefined *)*puVar22;
          pcVar12 = (char *)FUN_0040ad40(__filename);
          uVar17 = 0xffffffffffffffff;
          pcVar20 = pcVar12;
          do {
            if (uVar17 == 0) break;
            uVar17 = uVar17 - 1;
            cVar4 = *pcVar20;
            pcVar20 = pcVar20 + (ulong)bVar5 * -2 + 1;
          } while ((char)iVar8 != cVar4);
          if (~uVar17 != 1) {
            param_2 = (undefined *)(ulong)(pcVar12[~uVar17 - 2] == '/');
          }
          iVar6 = __xstat(1,(char *)__filename,&local_c8);
          if (iVar6 == 0) {
LAB_00403a65:
            if ((local_c8.st_mode & 0xf000) == 0x4000) goto LAB_00403a87;
            iVar8 = 0;
          }
          else {
            piVar13 = __errno_location();
            iVar8 = *piVar13;
            if (iVar8 == 0) goto LAB_00403a65;
            if (iVar8 != 2) goto LAB_00403c5a;
          }
          if ((int)param_2 != 0) goto LAB_00403c90;
          __filename = (undefined *)0x0;
          if (iVar18 == 2) goto LAB_00403543;
          piVar16 = (int *)FUN_0040ea00(4,*puVar22);
          uVar9 = dcgettext(0,"target %s is not a directory",5);
          error(1,0,uVar9,piVar16);
LAB_00403797:
          if (local_120 != (undefined *)0x0) {
            piVar16 = __errno_location();
            *piVar16 = 0x5f;
            uVar15 = FUN_0040ec50(local_120);
            uVar9 = dcgettext(0,"failed to set default file creation context to %s",5);
            error(1,*piVar16,uVar9,uVar15);
            goto LAB_004037e3;
          }
        }
        piVar16 = (int *)(ulong)(uVar19 - 1);
        if (uVar19 - 1 == 0) {
          piVar16 = (int *)FUN_0040ea00(4,*local_140);
          pcVar20 = "missing destination file operand after %s";
          goto LAB_00403b4f;
        }
      }
      else {
        uVar9 = dcgettext(0,"cannot set target context and preserve it",5);
        error(1,0,uVar9);
      }
      pcVar20 = "missing file operand";
LAB_00403be0:
      uVar9 = dcgettext(0,pcVar20,5);
      error(0,0,uVar9);
    }
  }
  else {
    puVar1 = __filename;
    puVar2 = local_140;
    puVar3 = local_120;
    if (iVar6 == 100) {
      DAT_00621540 = 1;
      goto LAB_00403188;
    }
    if (iVar6 < 0x65) {
      if (iVar6 == 0x53) {
        local_138 = DAT_00621b80;
        puVar22 = (undefined *)0x1;
        goto LAB_00403188;
      }
      if (0x53 < iVar6) {
        if (iVar6 == 0x5a) {
          if (DAT_00621560 == 0) {
            if (DAT_00621b80 != (undefined *)0x0) {
              pcVar20 = "warning: ignoring --context; it requires an SELinux-enabled kernel";
LAB_00403454:
              uVar9 = dcgettext(0,pcVar20,5);
              error(0,0,uVar9);
              puVar2 = local_140;
              puVar3 = local_120;
            }
          }
          else {
            DAT_0061f44c = 0;
            puVar3 = DAT_00621b80;
            if (DAT_00621b80 == (undefined *)0x0) {
              local_f8._0_2_ = CONCAT11(1,(undefined)local_f8);
              local_f8 = local_f8 & 0xffffffffffff0000 | (ulong)(ushort)local_f8;
              puVar3 = local_120;
            }
          }
        }
        else {
          if (iVar6 < 0x5b) goto LAB_00403258;
          if (iVar6 == 0x62) {
            puVar22 = (undefined *)0x1;
            puVar2 = DAT_00621b80;
            if (DAT_00621b80 == (undefined *)0x0) {
              puVar2 = local_140;
            }
          }
          else if (iVar6 != 99) goto LAB_00403249;
        }
        goto LAB_00403188;
      }
      if (iVar6 == -0x82) {
        FUN_004046f0(0);
LAB_00403a87:
        piVar16 = (int *)(ulong)(iVar18 - 1U);
        __filename = (undefined *)local_140[(int)(iVar18 - 1U)];
LAB_00403543:
        if (local_130 != (undefined *)0x0) {
          param_2 = (undefined *)FUN_0040ca80(local_130);
          if (param_2 == (undefined *)0x0) {
            uVar15 = FUN_0040ec50(local_130);
            uVar9 = dcgettext(0,"invalid mode %s",5);
            error(1,0,uVar9,uVar15);
            goto LAB_00403c38;
          }
          DAT_0061f448 = FUN_0040ce50(0,0,0,param_2,0);
          DAT_0061f444 = FUN_0040ce50(0,1,0,param_2);
          free(param_2);
        }
        if ((local_121 != '\0') && (DAT_00621541 == '\0')) {
          uVar9 = dcgettext(0,
                            "WARNING: ignoring --strip-program option as -s option was not specified"
                            ,5);
          error(0,0,uVar9);
        }
        if (DAT_00621542 != '\0') {
          if (local_fc._3_1_ == '\0') {
            pcVar20 = "options --compare (-C) and --strip are mutually exclusive";
            if (DAT_00621541 == '\0') {
              if ((DAT_0061f448 & 0xffff0e00) != 0) {
                uVar9 = dcgettext(0,
                                  "the --compare (-C) option is ignored when you specify a mode with non-permission bits"
                                  ,5);
                error(0,0,uVar9);
              }
              goto LAB_004035ec;
            }
          }
          else {
            pcVar20 = "options --compare (-C) and --preserve-timestamps are mutually exclusive";
          }
          goto LAB_00403be0;
        }
LAB_004035ec:
        if (DAT_00621558 == (undefined *)0x0) {
          DAT_00621550 = 0xffffffff;
LAB_00403618:
          if (DAT_00621548 != (undefined *)0x0) {
            pgVar11 = getgrnam((char *)DAT_00621548);
            if (pgVar11 == (group *)0x0) goto LAB_004039e4;
            local_c8.st_dev = (__dev_t)pgVar11->gr_gid;
            goto LAB_00403639;
          }
          DAT_00621544 = 0xffffffff;
LAB_00403644:
          if (DAT_00621540 != 0) {
            uVar7 = FUN_0040f910((ulong)piVar16 & 0xffffffff,local_140,FUN_00403f50,&local_118);
            local_138 = (undefined *)(ulong)uVar7;
            goto LAB_0040366b;
          }
LAB_004037e3:
          FUN_00409a90();
          if (__filename != (undefined *)0x0) {
            lVar21 = 0;
            FUN_004056a0(&local_118);
            local_138 = (undefined *)((ulong)local_138 & 0xffffffff00000000);
            local_130 = (undefined *)
                        ((ulong)local_130 & 0xffffffff00000000 | (ulong)piVar16 & 0xffffffff);
            do {
              uVar9 = local_140[lVar21];
              uVar14 = FUN_0040ad40(uVar9);
              __ptr = (void *)FUN_0040b0c0(__filename,uVar14,0);
              if (((((int)lVar21 == 0 & (byte)uVar15) == 0) ||
                  (cVar4 = FUN_00403db0(uVar9,__ptr,&local_118,1), cVar4 != '\0')) &&
                 (cVar4 = FUN_00404090(uVar9,__ptr,&local_118), cVar4 != '\0')) {
                free(__ptr);
              }
              else {
                free(__ptr);
                local_138 = (undefined *)CONCAT44(local_138._4_4_,1);
              }
              lVar21 = lVar21 + 1;
            } while ((int)lVar21 < (int)local_130);
LAB_0040366b:
            return (ulong)local_138 & 0xffffffff;
          }
          __filename = (undefined *)local_140[1];
          uVar9 = *local_140;
          if ((byte)uVar15 != 0) {
            cVar4 = FUN_00403db0(uVar9,__filename,&local_118,0);
            uVar7 = 0;
            if (cVar4 != '\0') goto LAB_00403a4d;
            goto LAB_0040390a;
          }
          uVar7 = FUN_00404090(uVar9,__filename,&local_118);
        }
        else {
          ppVar10 = getpwnam((char *)DAT_00621558);
          if (ppVar10 != (passwd *)0x0) {
            uVar17 = (ulong)ppVar10->pw_uid;
LAB_0040360d:
            DAT_00621550 = (undefined)uVar17;
            endpwent();
            goto LAB_00403618;
          }
          iVar8 = FUN_00411570(DAT_00621558,0,0,&local_c8,0);
          if ((iVar8 == 0) && (uVar17 = local_c8.st_dev, local_c8.st_dev < 0x100000000))
          goto LAB_0040360d;
          piVar16 = (int *)FUN_0040ec50(DAT_00621558);
          uVar9 = dcgettext(0,"invalid user %s",5);
          error(1,0,uVar9,piVar16);
LAB_004039e4:
          iVar8 = FUN_00411570(DAT_00621548,0,0,&local_c8,0);
          if ((iVar8 == 0) && (local_c8.st_dev < 0x100000000)) {
LAB_00403639:
            DAT_00621544 = (undefined)local_c8.st_dev;
            endgrent();
            goto LAB_00403644;
          }
          uVar9 = FUN_0040ec50(DAT_00621548);
          uVar15 = dcgettext(0,"invalid group %s",5);
          error(1,0,uVar15,uVar9);
LAB_00403a4d:
          bVar5 = FUN_00404090(uVar9,__filename,&local_118);
          uVar7 = (uint)bVar5;
LAB_0040390a:
          uVar7 = uVar7 & 1;
        }
        local_138 = (undefined *)(ulong)((uVar7 ^ 1) & 0xff);
        goto LAB_0040366b;
      }
      if (iVar6 < -0x81) {
        if (iVar6 == -0x83) {
          FUN_00411160(stdout,"install","GNU coreutils",PTR_DAT_0061f460,"David MacKenzie",0);
                    /* WARNING: Subroutine does not return */
          exit(0);
        }
        goto LAB_00403249;
      }
      if (iVar6 == 0x43) {
        DAT_00621542 = '\x01';
        goto LAB_00403188;
      }
      if (iVar6 == 0x44) {
        uVar15 = 1;
        goto LAB_00403188;
      }
    }
    else {
      if (iVar6 == 0x73) {
        DAT_00621541 = '\x01';
        signal(0x11,(__sighandler_t)0x0);
        puVar2 = local_140;
        puVar3 = local_120;
        goto LAB_00403188;
      }
      if (iVar6 < 0x74) {
        if (iVar6 == 0x6d) {
          local_130 = DAT_00621b80;
          goto LAB_00403188;
        }
        if (iVar6 < 0x6e) {
          if (iVar6 != 0x67) goto LAB_00403249;
          DAT_00621548 = DAT_00621b80;
          goto LAB_00403188;
        }
        if (iVar6 == 0x6f) {
          DAT_00621558 = DAT_00621b80;
          goto LAB_00403188;
        }
        if (iVar6 == 0x70) {
          local_fc = CONCAT13(1,(undefined)local_fc);
          goto LAB_00403188;
        }
      }
      else {
        if (iVar6 == 0x76) {
          local_f0._0_7_ = CONCAT16(1,(undefined)local_f0);
          local_f0 = local_f0 & 0xff00000000000000 | (ulong)(uint)local_f0;
          goto LAB_00403188;
        }
        if (iVar6 < 0x77) {
          if (iVar6 == 0x74) {
            puVar1 = DAT_00621b80;
            if (__filename != (undefined *)0x0) {
              uVar15 = dcgettext(0,"multiple target directories specified",5);
              error(1,0,uVar15);
              goto LAB_00403abd;
            }
            goto LAB_00403188;
          }
        }
        else {
          if (iVar6 == 0x80) {
            pcVar20 = "WARNING: ignoring --preserve-context; this kernel is not SELinux-enabled";
            if (DAT_00621560 == 0) goto LAB_00403454;
            local_f8._0_6_ = CONCAT15(1,(undefined)local_f8);
            local_f8 = local_f8 & 0xffff000000000000 | (ulong)(uint)local_f8;
            DAT_0061f44c = 0;
            goto LAB_00403188;
          }
          if (iVar6 == 0x81) {
            PTR_s_strip_0061f438 = (undefined *)FUN_00411510(DAT_00621b80);
            local_121 = '\x01';
            puVar2 = local_140;
            puVar3 = local_120;
            goto LAB_00403188;
          }
        }
      }
    }
  }
LAB_00403249:
  do {
    iVar6 = FUN_004046f0(1);
 INVALID_JUMP; //LAB_00403258:
  } while (iVar6 != 0x54);
  iVar8 = 1;
  puVar1 = __filename;
  puVar2 = local_140;
  puVar3 = local_120;
  goto LAB_00403188;
}


void FUN_00403cd0(undefined param_1,undefined param_2,undefined param_3)

{
  undefined unaff_retaddr;
  undefined auStack_8 [8];
  
  (*(code *)PTR___libc_start_main_0061eff0)
            (FUN_00403050,unaff_retaddr,&stack0x00000008,FUN_00416f60,FUN_00416fc0,param_3,auStack_8
            );
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* WARNING: Removing unreachable block (ram,0x00403d08) */
/* WARNING: Removing unreachable block (ram,0x00403d12) */

void FUN_00403cfb(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00403d49) */

void FUN_00403d1a(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00403d86) */

void FUN_00403d51(void)

{
  if (DAT_0061f528 != '\0') {
    return;
  }
  FUN_00403cfb();
  DAT_0061f528 = 1;
  return;
}


/* WARNING: Removing unreachable block (ram,0x00403d49) */

void thunk_FUN_00403d1a(void)

{
  return;
}


undefined FUN_00403db0(char *param_1,char *param_2,undefined param_3,char param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  undefined uVar5;
  undefined uVar6;
  undefined local_20 [2];
  
  if (((param_4 == '\0') && (*param_1 == '/')) && (*param_2 == '/')) {
    local_20[0] = 0;
    FUN_0040f8a0(local_20);
    lVar3 = FUN_0040c5e0(param_2,local_20,FUN_00404020,param_3);
    if (lVar3 == -1) {
      uVar5 = FUN_0040ea00(4,param_2);
      uVar6 = dcgettext(0,"cannot create directory %s",5);
      piVar4 = __errno_location();
      error(0,*piVar4,uVar6,uVar5);
      return 0;
    }
  }
  else {
    local_20[0] = 0;
    lVar3 = FUN_0040c5e0(param_2,local_20,FUN_00404020,param_3);
    piVar4 = __errno_location();
    if (lVar3 == -1) {
      uVar5 = FUN_0040ea00(4,param_2);
      uVar6 = dcgettext(0,"cannot create directory %s",5);
      error(0,*piVar4,uVar6,uVar5);
      FUN_0040f770(local_20,1);
      FUN_0040f8a0(local_20);
      return 0;
    }
    iVar2 = FUN_0040f770(local_20,0);
    iVar1 = *piVar4;
    FUN_0040f8a0(local_20);
    if (0 < iVar2) {
      return 0;
    }
    if (iVar2 != 0) {
      uVar5 = FUN_0040ea00(4,param_2);
      uVar6 = dcgettext(0,"cannot create directory %s",5);
      error(0,iVar1,uVar6,uVar5);
      return 0;
    }
  }
  return 1;
}


byte FUN_00403f50(undefined param_1,undefined param_2,long param_3)

{
  byte bVar1;
  int *piVar2;
  
  bVar1 = FUN_0040c770(param_1,param_2,FUN_00404020,param_3,DAT_0061f444,FUN_00404000,DAT_0061f440,
                       DAT_00621550,DAT_00621544,0);
  if (((bVar1 ^ 1) == 0) && (*(char *)(param_3 + 0x21) != '\0')) {
    piVar2 = __errno_location();
    *piVar2 = 0x5f;
  }
  return bVar1 ^ 1;
}


void FUN_00403fc0(undefined param_1)

{
  undefined uVar1;
  undefined uVar2;
  
  uVar1 = FUN_0040ea00(4,param_1);
  uVar2 = dcgettext(0,"creating directory %s",5);
  FUN_00404ae0(stdout,uVar2,uVar1);
  return;
}


void FUN_00404000(undefined param_1,long param_2)

{
  if (*(char *)(param_2 + 0x2e) == '\0') {
    return;
  }
  FUN_00403fc0();
  return;
}


int FUN_00404020(undefined param_1,char *param_2,long param_3)

{
  int iVar1;
  int *piVar2;
  
  if (*(char *)(param_3 + 0x21) != '\0') {
    piVar2 = __errno_location();
    *piVar2 = 0x5f;
  }
  iVar1 = mkdir(param_2,0x1ed);
  if ((iVar1 == 0) && (*(char *)(param_3 + 0x2e) != '\0')) {
    FUN_00403fc0(param_1);
    return 0;
  }
  return iVar1;
}


/* WARNING: Could not reconcile some variable overlaps */

undefined FUN_00404090(char *param_1,char *param_2,long param_3)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  int __fd;
  int iVar4;
  __pid_t _Var5;
  uint uVar6;
  size_t __n;
  size_t sVar7;
  int *piVar8;
  undefined uVar9;
  undefined uVar10;
  char *__dest;
  undefined *puVar11;
  char *pcVar12;
  undefined uVar13;
  stat local_1e8;
  stat local_158;
  stat local_c8;
  
  if ((*(char *)(param_3 + 0x1f) != '\0') && (iVar3 = __xstat(1,param_1,&local_1e8), iVar3 != 0)) {
LAB_00404430:
    uVar13 = FUN_0040ea00(4,param_1);
    pcVar12 = "cannot stat %s";
    goto LAB_0040444a;
  }
  uVar6 = DAT_0061f448;
  if ((DAT_00621542 != '\0') && ((DAT_0061f448 & 0xffff0e00) == 0)) {
    iVar3 = __lxstat(1,param_1,&local_158);
    if ((((((iVar3 == 0) && (iVar3 = __lxstat(1,param_2,&local_c8), iVar3 == 0)) &&
          ((local_158.st_mode & 0xf000) == 0x8000)) &&
         (((local_c8.st_mode & 0xf000) == 0x8000 &&
          (((local_158.st_mode | local_c8.st_mode) & 0xffff0e00) == 0)))) &&
        (local_158.st_size == local_c8.st_size)) && (uVar6 == (local_c8.st_mode & 0xfff))) {
      uVar6 = DAT_00621550;
      if (DAT_00621550 == 0xffffffff) {
        piVar8 = __errno_location();
        *piVar8 = 0;
        uVar6 = getuid();
        if ((uVar6 == 0xffffffff) && (*piVar8 != 0)) goto LAB_00404378;
      }
      if (uVar6 == local_c8.st_uid) {
        uVar6 = DAT_00621544;
        if (DAT_00621544 == 0xffffffff) {
          piVar8 = __errno_location();
          *piVar8 = 0;
          uVar6 = getgid();
          if ((uVar6 == 0xffffffff) && (*piVar8 != 0)) goto LAB_00404378;
        }
        if (uVar6 == local_c8.st_gid) {
          if ((DAT_00621560 != 0) && (*(char *)(param_3 + 0x25) != '\0')) goto LAB_004046c6;
          iVar3 = open(param_1,0);
          if (-1 < iVar3) {
            __fd = open(param_2,0);
            if (__fd < 0) {
              close(iVar3);
            }
            else {
              do {
                sVar7 = FUN_0040b1c0(iVar3,&DAT_0061f540,0x1000);
                if (sVar7 == 0) {
                  close(iVar3);
                  close(__fd);
                  goto LAB_00404279;
                }
                __n = FUN_0040b1c0(__fd,&DAT_00620540,0x1000);
              } while ((__n == sVar7) &&
                      (iVar4 = memcmp(&DAT_0061f540,&DAT_00620540,__n), iVar4 == 0));
              close(iVar3);
              close(__fd);
            }
          }
        }
      }
    }
  }
LAB_00404378:
  while( true ) {
    cVar2 = FUN_00409810(param_1,param_2,0,param_3,&local_c8,0);
    if (cVar2 == '\0') {
      return 0;
    }
LAB_00404279:
    if (DAT_00621541 == '\0') break;
    _Var5 = fork();
    puVar1 = PTR_s_strip_0061f438;
    if (_Var5 == -1) {
      pcVar12 = "fork system call failed";
LAB_004043c8:
      uVar13 = dcgettext(0,pcVar12,5);
      piVar8 = __errno_location();
      error(0,*piVar8,uVar13);
LAB_004043e5:
      iVar3 = unlink(param_2);
      if (iVar3 == 0) {
        return 0;
      }
      uVar13 = FUN_0040ea00(4,param_2);
      uVar10 = dcgettext(0,"cannot unlink %s",5);
      piVar8 = __errno_location();
      error(1,*piVar8,uVar10,uVar13);
      goto LAB_00404430;
    }
    if (_Var5 != 0) {
      _Var5 = waitpid(_Var5,(int *)&local_c8,0);
      if (_Var5 < 0) {
        pcVar12 = "waiting for strip";
        goto LAB_004043c8;
      }
      if (((uint)local_c8.st_dev >> 8 & 0xff | (uint)local_c8.st_dev & 0x7f) == 0) {
        if (*(char *)(param_3 + 0x1f) != '\0') {
          if (DAT_00621541 == '\0') goto LAB_0040428c;
          goto LAB_0040429c;
        }
        goto LAB_004042e3;
      }
      uVar13 = dcgettext(0,"strip process terminated abnormally",5);
      error(0,0,uVar13);
      goto LAB_004043e5;
    }
    execlp(PTR_s_strip_0061f438,PTR_s_strip_0061f438,param_2,0);
    param_3 = FUN_0040ea00(4,puVar1);
    param_2 = (char *)dcgettext(0,"cannot run %s",5);
    piVar8 = __errno_location();
    error(1,*piVar8,param_2,param_3);
LAB_004046c6:
    piVar8 = __errno_location();
    *piVar8 = 0x5f;
  }
  if (*(char *)(param_3 + 0x1f) != '\0') {
LAB_0040428c:
    if ((local_1e8.st_mode & 0xf000) != 0x8000) {
LAB_0040429c:
      local_c8.st_dev = local_1e8.st_atim.tv_sec;
      local_c8.st_ino = local_1e8.st_atim.tv_nsec;
      local_c8.st_nlink = local_1e8.st_mtim.tv_sec;
      local_c8._24_8_ = local_1e8.st_mtim.tv_nsec;
      iVar3 = FUN_00410aa0(param_2,&local_c8);
      if (iVar3 != 0) {
        uVar13 = FUN_0040ea00(4,param_2);
        pcVar12 = "cannot set timestamps for %s";
LAB_0040444a:
        uVar10 = dcgettext(0,pcVar12,5);
        piVar8 = __errno_location();
        error(0,*piVar8,uVar10,uVar13);
        return 0;
      }
    }
  }
LAB_004042e3:
  if (((DAT_00621550 & DAT_00621544) == 0xffffffff) ||
     (iVar3 = lchown(param_2,DAT_00621550,DAT_00621544), iVar3 == 0)) {
    uVar13 = 1;
    iVar3 = chmod(param_2,DAT_0061f448);
    if (iVar3 != 0) {
      uVar10 = FUN_0040ea00(4,param_2);
      pcVar12 = "cannot change permissions of %s";
      goto LAB_004044da;
    }
  }
  else {
    uVar10 = FUN_0040ea00(4,param_2);
    pcVar12 = "cannot change ownership of %s";
LAB_004044da:
    uVar9 = dcgettext(0,pcVar12,5);
    piVar8 = __errno_location();
    uVar13 = 0;
    error(0,*piVar8,uVar9,uVar10);
  }
  if (DAT_0061f44c == '\0') {
    return uVar13;
  }
  if (DAT_00621560 != 1) {
    return uVar13;
  }
  iVar3 = __lxstat(1,param_2,&local_c8);
  if (iVar3 != 0) {
    return uVar13;
  }
  if ((DAT_0061f430 != '\0') && (*param_2 == '/')) {
    cVar2 = param_2[1];
    while (pcVar12 = param_2 + 1, cVar2 == '/') {
      param_2 = pcVar12;
      cVar2 = pcVar12[1];
    }
    if (cVar2 != '\0') {
      do {
        pcVar12 = pcVar12 + 1;
        if (*pcVar12 == '\0') break;
      } while (*pcVar12 != '/');
      __dest = (char *)malloc(((long)pcVar12 - (long)param_2) + 2);
      if (__dest != (char *)0x0) {
        puVar11 = (undefined *)stpncpy(__dest,param_2,(long)pcVar12 - (long)param_2);
        *puVar11 = 0x2f;
        free(__dest);
      }
    }
  }
  DAT_0061f430 = 0;
  piVar8 = __errno_location();
  *piVar8 = 0x5f;
  return uVar13;
}


void FUN_004046f0(int param_1)

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
  
  uVar7 = DAT_006219c0;
  bVar14 = 0;
  if (param_1 != 0) {
    uVar3 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(stderr,1,uVar3,uVar7);
    goto LAB_0040472f;
  }
  uVar3 = dcgettext(0,
                    "Usage: %s [OPTION]... [-T] SOURCE DEST\n  or:  %s [OPTION]... SOURCE... DIRECTORY\n  or:  %s [OPTION]... -t DIRECTORY SOURCE...\n  or:  %s [OPTION]... -d DIRECTORY...\n"
                    ,5);
  __printf_chk(1,uVar3,uVar7,uVar7,uVar7,uVar7);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nThis install program copies files (often just compiled) into destination\nlocations you choose.  If you want to download and install a ready-to-use\npackage on a GNU/Linux system, you should instead be using a package manager\nlike yum(1) or apt-get(1).\n\nIn the first three forms, copy SOURCE to DEST or multiple SOURCE(s) to\nthe existing DIRECTORY, while setting permission modes and owner/group.\nIn the 4th form, create all components of the given DIRECTORY(ies).\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nMandatory arguments to long options are mandatory for short options too.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --backup[=CONTROL]  make a backup of each existing destination file\n  -b                  like --backup but does not accept an argument\n  -c                  (ignored)\n  -C, --compare       compare each pair of source and destination files, and\n                        in some cases, do not modify the destination at all\n  -d, --directory     treat all arguments as directory names; create all\n                        components of the specified directories\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -D                  create all leading components of DEST except the last,\n                        or all components of --target-directory,\n                        then copy SOURCE to DEST\n  -g, --group=GROUP   set group ownership, instead of process\' current group\n  -m, --mode=MODE     set permission mode (as in chmod), instead of rwxr-xr-x\n  -o, --owner=OWNER   set ownership (super-user only)\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -p, --preserve-timestamps   apply access/modification times of SOURCE files\n                        to corresponding destination files\n  -s, --strip         strip symbol tables\n      --strip-program=PROGRAM  program used to strip binaries\n  -S, --suffix=SUFFIX  override the usual backup suffix\n  -t, --target-directory=DIRECTORY  copy all SOURCE arguments into DIRECTORY\n  -T, --no-target-directory  treat DEST as a normal file\n  -v, --verbose       print the name of each directory as it is created\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --preserve-context  preserve SELinux security context\n  -Z                      set SELinux security context of destination\n                            file and each created directory to default type\n      --context[=CTX]     like -Z, or if CTX is specified then set the\n                            SELinux or SMACK security context to CTX\n"
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
                             "\nThe backup suffix is \'~\', unless set with --suffix or SIMPLE_BACKUP_SUFFIX.\nThe version control method may be selected via the --backup option or through\nthe VERSION_CONTROL environment variable.  Here are the values:\n\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  none, off       never make backups (even if --backup is given)\n  numbered, t     make numbered backups\n  existing, nil   numbered if numbered backups exist, simple otherwise\n  simple, never   always make simple backups\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  local_88 = &DAT_004170f0;
  local_80 = "test invocation";
  local_78[0] = (byte *)0x41716a;
  local_78[1] = (byte *)0x417102;
  local_78[2] = (byte *)0x417118;
  local_78[3] = (byte *)0x417122;
  local_78[4] = (byte *)0x417131;
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
    pbVar10 = (byte *)"install";
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
        pcVar4 = "install";
        goto LAB_00404ab3;
      }
    }
    pcVar4 = "install";
    uVar7 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    pcVar8 = " invocation";
    __printf_chk(1,uVar7,"https://www.gnu.org/software/coreutils/","install");
  }
  else {
    uVar7 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar7,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar8 = setlocale(5,(char *)0x0);
    if (pcVar8 != (char *)0x0) {
      iVar2 = strncmp(pcVar8,"en_",3);
      if (iVar2 != 0) {
LAB_00404ab3:
        uVar7 = dcgettext(0,"Report %s translation bugs to <https://translationproject.org/team/>\n"
                          ,5);
        __printf_chk(1,uVar7,"install");
      }
    }
    pcVar8 = " invocation";
    uVar7 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    __printf_chk(1,uVar7,"https://www.gnu.org/software/coreutils/","install");
    if (pcVar4 != "install") {
      pcVar8 = "";
    }
  }
  uVar7 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(1,uVar7,pcVar4,pcVar8);
LAB_0040472f:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}


void FUN_00404ae0(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                 undefined param_5,undefined param_6,undefined param_7,undefined param_8,
                 FILE *param_9,undefined param_10,undefined param_11,undefined param_12,
                 undefined param_13,undefined param_14)

{
  char *pcVar1;
  char in_AL;
  undefined local_e0;
  undefined local_dc;
  undefined *local_d8;
  undefined *local_d0;
  undefined local_c8 [16];
  undefined local_b8;
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
  local_b8 = param_11;
  local_b0 = param_12;
  local_a8 = param_13;
  local_a0 = param_14;
  fputs_unlocked(DAT_006219c0,param_9);
  fwrite_unlocked(&DAT_004185c0,1,2,param_9);
  local_d8 = &stack0x00000008;
  local_e0 = 0x10;
  local_d0 = local_c8;
  local_dc = 0x30;
  FUN_00412a70(param_9,param_10,&local_e0);
  pcVar1 = param_9->_IO_write_ptr;
  if (pcVar1 < param_9->_IO_write_end) {
    param_9->_IO_write_ptr = pcVar1 + 1;
    *pcVar1 = '\n';
  }
  else {
    __overflow(param_9,10);
  }
  return;
}


ulong FUN_00404bd0(char *param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  undefined extraout_var;
  
  if ((param_2 & 0xf000) == 0xa000) {
    return 1;
  }
  cVar1 = FUN_004112a0();
  if (cVar1 != '\0') {
    return 1;
  }
  iVar2 = euidaccess(param_1,2);
  return CONCAT44(extraout_var,iVar2) & 0xffffffffffffff00 | (ulong)(iVar2 == 0);
}


undefined FUN_00404c20(undefined param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if ((DAT_00621980 == (undefined *)0x0) &&
     (DAT_00621980 = (undefined *)calloc(DAT_0061f458,1), DAT_00621980 == (undefined *)0x0)) {
    DAT_00621980 = &DAT_00621580;
    DAT_0061f458 = 0x400;
  }
  if (param_2 != 0) {
    do {
      uVar2 = param_2;
      if (DAT_0061f458 <= param_2) {
        uVar2 = DAT_0061f458;
      }
      uVar1 = FUN_0040b240(param_1,DAT_00621980,uVar2);
      if (uVar1 != uVar2) {
        return 0;
      }
      param_2 = param_2 - uVar1;
    } while (param_2 != 0);
  }
  return 1;
}


int FUN_00404cd0(int param_1,__off_t param_2,__off_t param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = fallocate(param_1,3,param_2,param_3);
  if (iVar1 < 0) {
    piVar2 = __errno_location();
    if ((*piVar2 == 0x26) || (*piVar2 == 0x5f)) {
      return 0;
    }
  }
  return iVar1;
}


void FUN_00404d10(int param_1,char *param_2,__mode_t param_3)

{
  if (param_1 < 0) {
    chmod(param_2,param_3);
    return;
  }
  fchmod(param_1,param_3);
  return;
}


void FUN_00404d30(void)

{
  char *pcVar1;
  uint *puVar2;
  undefined uVar3;
  long extraout_RDX;
  ulong uVar4;
  undefined uVar5;
  undefined in_R8;
  undefined in_R9;
  
  puVar2 = (uint *)__errno_location();
  *puVar2 = 0x5f;
  uVar3 = dcgettext(0,"failed to restore the default file creation context",5);
  uVar4 = (ulong)*puVar2;
  uVar5 = 1;
  error(1,uVar4,uVar3);
  uVar3 = FUN_0040e920(1,4,uVar4);
  uVar5 = FUN_0040e920(0,4,uVar5);
  __printf_chk(1,"%s -> %s",uVar5,uVar3,in_R8,in_R9,puVar2);
  if (extraout_RDX != 0) {
    uVar3 = FUN_0040ea00(4,extraout_RDX);
    uVar5 = dcgettext(0," (backup: %s)",5);
    __printf_chk(1,uVar5,uVar3);
  }
  pcVar1 = stdout->_IO_write_ptr;
  if (pcVar1 < stdout->_IO_write_end) {
    stdout->_IO_write_ptr = pcVar1 + 1;
    *pcVar1 = '\n';
    return;
  }
  __overflow(stdout,10);
  return;
}


void FUN_00404d70(undefined param_1,undefined param_2,long param_3)

{
  char *pcVar1;
  undefined uVar2;
  undefined uVar3;
  
  uVar2 = FUN_0040e920(1,4,param_2);
  uVar3 = FUN_0040e920(0,4,param_1);
  __printf_chk(1,"%s -> %s",uVar3,uVar2);
  if (param_3 != 0) {
    uVar2 = FUN_0040ea00(4,param_3);
    uVar3 = dcgettext(0," (backup: %s)",5);
    __printf_chk(1,uVar3,uVar2);
  }
  pcVar1 = stdout->_IO_write_ptr;
  if (pcVar1 < stdout->_IO_write_end) {
    stdout->_IO_write_ptr = pcVar1 + 1;
    *pcVar1 = '\n';
    return;
  }
  __overflow(stdout,10);
  return;
}


void FUN_00404e20(long param_1,undefined param_2,uint *param_3)

{
  uint uVar1;
  undefined uVar2;
  char cVar3;
  undefined uVar4;
  undefined uVar5;
  undefined local_34;
  undefined local_33 [9];
  undefined local_2a;
  
  cVar3 = FUN_00404bd0(param_2,*param_3);
  if (cVar3 == '\0') {
    FUN_0040af30(*param_3,&local_34);
    uVar1 = *param_3;
    local_2a = 0;
    uVar4 = FUN_0040ea00(4,param_2);
    uVar2 = DAT_006219c0;
    if ((*(char *)(param_1 + 0x18) == '\0') && ((*(uint *)(param_1 + 0x14) & 0xffff00) == 0)) {
      uVar5 = dcgettext(0,"%s: unwritable %s (mode %04lo, %s); try anyway? ",5);
    }
    else {
      uVar5 = dcgettext(0,"%s: replace %s, overriding mode %04lo (%s)? ",5);
    }
    __fprintf_chk(stderr,1,uVar5,uVar2,uVar4,uVar1 & 0xfff,local_33);
    FUN_004119a0();
    return;
  }
  uVar4 = FUN_0040ea00(4,param_2);
  uVar2 = DAT_006219c0;
  uVar5 = dcgettext(0,"%s: overwrite %s? ",5);
  __fprintf_chk(stderr,1,uVar5,uVar2,uVar4);
  FUN_004119a0();
  return;
}


ulong FUN_00404f50(ulong param_1,undefined param_2,undefined param_3,byte param_4,char param_5)

{
  int iVar1;
  undefined uVar2;
  undefined uVar3;
  undefined uVar4;
  int *piVar5;
  
  iVar1 = FUN_00409e90(0xffffff9c,param_1,0xffffff9c,param_2,(ulong)(param_5 != '\0') << 10,param_3)
  ;
  if (iVar1 < 0) {
    uVar2 = FUN_0040e920(1,4,param_1);
    uVar3 = FUN_0040e920(0,4,param_2);
    uVar4 = dcgettext(0,"cannot create hard link %s to %s",5);
    piVar5 = __errno_location();
    error(0,*piVar5,uVar4,uVar3,uVar2);
    return 0;
  }
  param_4 = 0 < iVar1 & param_4;
  if (param_4 == 0) {
    return 1;
  }
  uVar2 = FUN_0040ea00(4,param_2);
  uVar3 = dcgettext(0,"removed %s\n",5);
  __printf_chk(1,uVar3,uVar2);
  return param_1 & 0xffffff00 | (ulong)param_4;
}


undefined FUN_00405060(int param_1,undefined param_2,char param_3,long param_4)

{
  int iVar1;
  __off_t _Var2;
  undefined uVar3;
  undefined uVar4;
  int *piVar5;
  char *pcVar6;
  
  _Var2 = lseek(param_1,param_4,1);
  if (_Var2 < 0) {
    uVar3 = FUN_0040ea00(4,param_2);
    pcVar6 = "cannot lseek %s";
LAB_004050ea:
    uVar4 = dcgettext(0,pcVar6,5);
    piVar5 = __errno_location();
    error(0,*piVar5,uVar4,uVar3);
    return 0;
  }
  if (param_3 != '\0') {
    iVar1 = FUN_00404cd0(param_1,_Var2 - param_4,param_4);
    if (iVar1 < 0) {
      uVar3 = FUN_0040ea00(4,param_2);
      pcVar6 = "error deallocating %s";
      goto LAB_004050ea;
    }
  }
  return 1;
}


ulong FUN_00405120(int param_1,undefined param_2,char *param_3,ulong param_4,ulong param_5,
                  undefined param_6,undefined param_7,undefined param_8,ulong param_9,
                  long *param_10,undefined *param_11)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  int *piVar5;
  undefined uVar6;
  undefined uVar7;
  ulong uVar8;
  ulong uVar9;
  size_t __n;
  ulong uVar10;
  bool bVar11;
  uint unaff_EBP;
  uint uVar12;
  char *__s2;
  char *pcVar13;
  ulong uVar14;
  char *__s1;
  byte bVar15;
  ulong uVar16;
  byte local_8a;
  ulong local_80;
  
  *param_11 = 0;
  local_80 = param_9;
  *param_10 = 0;
  if (param_9 != 0) {
    uVar9 = param_5;
    if (param_5 == 0) {
      uVar9 = param_4;
    }
    uVar16 = 0;
    uVar3 = 0;
    do {
      while( true ) {
        uVar4 = local_80;
        if (param_4 <= local_80) {
          uVar4 = param_4;
        }
        uVar4 = read(param_1,param_3,uVar4);
        if (-1 < (long)uVar4) break;
        piVar5 = __errno_location();
        if (*piVar5 != 4) {
          uVar6 = FUN_0040ea00(4,param_7);
          uVar7 = dcgettext(0,"error reading %s",5);
          error(0,*piVar5,uVar7,uVar6);
          return 0;
        }
      }
      if (uVar4 == 0) break;
      *param_10 = *param_10 + uVar4;
      uVar10 = uVar9;
      pcVar13 = param_3;
      uVar14 = uVar4;
      __s1 = param_3;
LAB_00405270:
      do {
        if (uVar14 < uVar10) {
          uVar10 = uVar14;
        }
        bVar11 = uVar10 != 0 && param_5 != 0;
        uVar12 = unaff_EBP & 0xffffff00 | (uint)bVar11;
        bVar15 = (byte)uVar3;
        __n = uVar10;
        __s2 = __s1;
        if (uVar10 != 0 && param_5 != 0) {
          do {
            if (*__s2 != '\0') {
              uVar12 = 0;
              uVar1 = uVar3;
              goto LAB_004052cd;
            }
            __s2 = __s2 + 1;
            __n = __n - 1;
            if (__n == 0) {
              local_8a = (bVar15 ^ 1) & uVar16 != 0;
              goto LAB_004053d0;
            }
          } while ((__n & 0xf) != 0);
          iVar2 = memcmp(__s1,__s2,__n);
          uVar12 = unaff_EBP & 0xffffff00 | (uint)(iVar2 == 0);
          bVar11 = iVar2 != 0;
          uVar1 = uVar12 ^ uVar3;
LAB_004052cd:
          local_8a = uVar16 != 0 & (byte)uVar1;
          if ((uVar10 == uVar14) && (bVar11)) {
            if (local_8a == 0) {
              uVar12 = 0;
              goto LAB_00405370;
            }
            bVar11 = true;
            uVar12 = 0;
          }
          else {
LAB_004053d0:
            if (local_8a == 0) goto LAB_004053d9;
            bVar11 = false;
          }
joined_r0x00405386:
          if (bVar15 == 0) {
            uVar8 = FUN_0040b240(param_2,pcVar13,uVar16);
            if (uVar16 != uVar8) {
              uVar6 = FUN_0040ea00(4,param_8);
              uVar7 = dcgettext(0,"error writing %s",5);
              piVar5 = __errno_location();
              error(0,*piVar5,uVar7,uVar6);
              return (ulong)uVar3;
            }
          }
          else {
            uVar3 = FUN_00405060(param_2,param_8,param_6,uVar16);
            if ((char)uVar3 == '\0') {
              return (ulong)uVar3;
            }
          }
          pcVar13 = __s1;
          uVar16 = uVar10;
          uVar3 = uVar12;
          if (bVar11) {
            if (uVar10 == 0) {
              uVar16 = 0;
              break;
            }
            if (local_8a != 0) {
              uVar10 = 0;
              unaff_EBP = uVar12;
              goto LAB_00405270;
            }
            uVar14 = uVar14 - uVar10;
            uVar16 = 0;
          }
          else {
            uVar14 = uVar14 - uVar10;
          }
        }
        else {
          uVar12 = uVar3;
          if (((uVar10 == uVar14 & (bVar15 ^ 1)) != 0) || (uVar10 == 0)) {
LAB_00405370:
            uVar16 = uVar16 + uVar10;
            bVar11 = true;
            local_8a = 0;
            goto joined_r0x00405386;
          }
LAB_004053d9:
          uVar3 = uVar12;
          if (0x7fffffffffffffff - uVar10 < uVar16) {
            uVar6 = FUN_0040ea00(4,param_7);
            uVar7 = dcgettext(0,"overflow reading %s",5);
            error(0,0,uVar7,uVar6);
            return 0;
          }
          uVar16 = uVar16 + uVar10;
          uVar14 = uVar14 - uVar10;
        }
        __s1 = __s1 + uVar10;
        unaff_EBP = uVar3;
      } while (uVar14 != 0);
      local_80 = local_80 - uVar4;
      *param_11 = (char)uVar3;
      unaff_EBP = uVar3;
    } while (local_80 != 0);
    if ((char)uVar3 != '\0') {
      uVar9 = FUN_00405060(param_2,param_8,param_6,uVar16);
      return uVar9;
    }
  }
  return 1;
}


uint FUN_00405550(undefined param_1,undefined param_2,undefined param_3,uint param_4,long param_5
                 )

{
  int *piVar1;
  undefined uVar2;
  undefined uVar3;
  byte bVar4;
  
  if (*(char *)(param_5 + 0x25) != '\0') {
    piVar1 = __errno_location();
    if ((*(char *)(param_5 + 0x23) == '\0') || (bVar4 = *(byte *)(param_5 + 0x26), bVar4 != 0)) {
      *piVar1 = 0x5f;
      uVar2 = FUN_0040ea00(4,param_1);
      uVar3 = dcgettext(0,"failed to get security context of %s",5);
      error(0,*piVar1,uVar3,uVar2);
      bVar4 = *(byte *)(param_5 + 0x26);
    }
    else {
      *piVar1 = 0x5f;
    }
    return bVar4 ^ 1;
  }
  bVar4 = (byte)param_4 & *(byte *)(param_5 + 0x21);
  if (bVar4 == 0) {
    return 1;
  }
  piVar1 = __errno_location();
  *piVar1 = 0x5f;
  return param_4 & 0xffffff00 | (uint)bVar4;
}


undefined FUN_00405620(undefined param_1,undefined param_2,undefined param_3,long param_4)

{
  int *piVar1;
  undefined uVar2;
  undefined uVar3;
  
  piVar1 = __errno_location();
  if ((*(char *)(param_4 + 0x23) != '\0') && (*(char *)(param_4 + 0x26) == '\0')) {
    *piVar1 = 0x5f;
    return 0;
  }
  *piVar1 = 0x5f;
  uVar2 = FUN_0040e920(0,4,param_1);
  uVar3 = dcgettext(0,"failed to set the security context of %s",5);
  error(0,*piVar1,uVar3,uVar2);
  return 0;
}


void FUN_004056a0(long param_1)

{
  undefined uVar1;
  
  uVar1 = FUN_0040bb50(0x3d,0,FUN_0040c510,FUN_0040c550,FUN_0040c5c0);
  *(undefined *)(param_1 + 0x38) = uVar1;
  return;
}


void FUN_004056d0(long param_1)

{
  undefined uVar1;
  
  uVar1 = FUN_0040bb50(0x3d,0,FUN_0040c540,FUN_0040c550,FUN_0040c5c0);
  *(undefined *)(param_1 + 0x40) = uVar1;
  return;
}


void FUN_00405700(undefined (*param_1) [16])

{
  __uid_t _Var1;
  
  *(undefined *)param_1[4] = 0;
  *param_1 = (undefined)0x0;
  param_1[1] = (undefined)0x0;
  param_1[2] = (undefined)0x0;
  param_1[3] = (undefined)0x0;
  _Var1 = geteuid();
  param_1[1][0xb] = _Var1 == 0;
  param_1[1][10] = _Var1 == 0;
  return;
}


ulong FUN_00405740(long param_1)

{
  bool bVar1;
  int *piVar2;
  ulong uVar3;
  
  piVar2 = __errno_location();
  bVar1 = *piVar2 == 1 || *piVar2 == 0x16;
  uVar3 = (ulong)piVar2 & 0xffffffffffffff00 | (ulong)bVar1;
  if (bVar1) {
    uVar3 = (ulong)(*(byte *)(param_1 + 0x1a) ^ 1);
  }
  return uVar3;
}


int FUN_00405770(long param_1,char *param_2,int param_3,long param_4,char param_5,long param_6)

{
  __uid_t __owner;
  __gid_t __group;
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined uVar4;
  undefined uVar5;
  uint uVar6;
  uint uVar7;
  
  __owner = *(__uid_t *)(param_4 + 0x1c);
  __group = *(__gid_t *)(param_4 + 0x20);
  if (param_5 == '\0') {
    if ((*(ulong *)(param_1 + 0x18) & 0xff0000000000ff) == 0) {
      if (*(char *)(param_1 + 0x2b) == '\0') goto LAB_004057e0;
      uVar7 = *(uint *)(param_6 + 0x18);
      uVar6 = *(uint *)(param_1 + 0x10);
    }
    else {
      uVar7 = *(uint *)(param_6 + 0x18);
      uVar6 = *(uint *)(param_4 + 0x18);
    }
    if ((((ushort)(~(ushort)uVar6 | 0xe00) & uVar7 & 0xfff) != 0) &&
       (iVar2 = FUN_0040d0b0(param_2,param_3,uVar6 & uVar7 & 0x1c0), iVar2 != 0)) {
      piVar3 = __errno_location();
      if (((*piVar3 != 1) && (*piVar3 != 0x16)) || (*(char *)(param_1 + 0x1b) != '\0')) {
        uVar4 = FUN_0040ea00(4,param_2);
        uVar5 = dcgettext(0,"clearing permissions for %s",5);
        error(0,*piVar3,uVar5,uVar4);
      }
      goto LAB_004058d2;
    }
  }
LAB_004057e0:
  if (param_3 == -1) {
    iVar2 = lchown(param_2,__owner,__group);
    if (iVar2 == 0) {
      return 1;
    }
    piVar3 = __errno_location();
    iVar2 = *piVar3;
    if ((iVar2 == 1) || (iVar2 == 0x16)) {
      lchown(param_2,0xffffffff,__group);
      *piVar3 = iVar2;
    }
  }
  else {
    iVar2 = fchown(param_3,__owner,__group);
    if (iVar2 == 0) {
      return 1;
    }
    piVar3 = __errno_location();
    iVar2 = *piVar3;
    if ((iVar2 == 1) || (iVar2 == 0x16)) {
      fchown(param_3,0xffffffff,__group);
      *piVar3 = iVar2;
    }
  }
  cVar1 = FUN_00405740(param_1);
  if (cVar1 != '\0') {
    return 0;
  }
  uVar4 = FUN_0040ea00(4,param_2);
  uVar5 = dcgettext(0,"failed to preserve ownership for %s",5);
  piVar3 = __errno_location();
  error(0,*piVar3,uVar5,uVar4);
LAB_004058d2:
  return -(uint)*(byte *)(param_1 + 0x24);
}


__mode_t FUN_00405960(void)

{
  __mode_t __mask;
  
  if (DAT_0061f450 != 0xffffffff) {
    return DAT_0061f450;
  }
  __mask = umask(0);
  DAT_0061f450 = __mask;
  umask(__mask);
  return __mask;
}


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Could not reconcile some variable overlaps */

uint FUN_00405990(byte **param_1,byte **param_2,uint param_3,stat *param_4,byte **param_5,
                 byte **param_6,uint param_7,byte *param_8,byte *param_9,undefined *param_10)

{
  stat **ppsVar1;
  stat *psVar2;
  byte **ppbVar3;
  __gid_t __group;
  char cVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  __uid_t _Var14;
  int *piVar15;
  undefined uVar16;
  undefined uVar17;
  undefined uVar18;
  byte *__filename;
  size_t sVar19;
  void *pvVar20;
  void *__ptr;
  ulong uVar21;
  stat *psVar22;
  uint *puVar23;
  byte **ppbVar24;
  byte *pbVar25;
  __off_t _Var26;
  char *pcVar27;
  char cVar28;
  long lVar29;
  stat *psVar30;
  ulong uVar31;
  undefined extraout_RDX;
  ulong uVar32;
  ulong extraout_RDX_00;
  stat *psVar33;
  undefined *puVar34;
  undefined *puVar35;
  undefined *puVar36;
  undefined *puVar37;
  undefined *puVar38;
  undefined *puVar39;
  undefined *puVar40;
  undefined *puVar41;
  char *pcVar42;
  stat *psVar43;
  byte *pbVar44;
  ulong uVar45;
  stat *psVar46;
  uint unaff_R15D;
  undefined uVar47;
  bool bVar48;
  undefined uVar49;
  undefined local_380;
  undefined auStack_378 [8];
  stat *local_370;
  byte **local_368;
  uint local_360;
  uint local_35c;
  long local_358;
  uint local_350;
  uint local_34c;
  byte **local_348;
  byte **local_340;
  byte **local_338;
  uint local_330;
  char local_32b;
  byte local_32a;
  byte local_329;
  stat *local_328;
  byte **local_320;
  stat *local_318;
  stat *local_310;
  stat *local_308;
  undefined local_300;
  stat *local_2f8;
  undefined local_2f0;
  undefined local_2e8;
  stat *local_2e0;
  undefined local_2d8;
  uint local_2d0;
  uint local_2cc;
  undefined local_2c8;
  byte **local_2c0;
  byte local_2b1;
  char local_2b0;
  undefined uStack_2af;
  undefined local_2a8 [32];
  char local_288;
  char local_287;
  void *local_280;
  stat local_278;
  stat local_1e8;
  uint local_158;
  undefined uStack_154;
  undefined uStack_150;
  undefined uStack_14c;
  undefined local_148;
  undefined uStack_144;
  __mode_t _Stack_140;
  __uid_t _Stack_13c;
  __gid_t local_138;
  int iStack_134;
  undefined uStack_130;
  undefined uStack_12c;
  undefined local_128;
  undefined uStack_124;
  undefined uStack_120;
  undefined uStack_11c;
  undefined local_118;
  undefined uStack_114;
  undefined uStack_110;
  undefined uStack_10c;
  undefined local_108;
  undefined uStack_104;
  undefined uStack_100;
  undefined uStack_fc;
  undefined local_f8;
  undefined uStack_f4;
  undefined uStack_f0;
  undefined uStack_ec;
  undefined local_e8;
  undefined uStack_e4;
  undefined uStack_e0;
  undefined uStack_dc;
  undefined local_d8;
  undefined uStack_d4;
  undefined uStack_d0;
  undefined uStack_cc;
  undefined local_c8 [28];
  __uid_t _Stack_ac;
  byte *local_a8;
  byte *pbStack_a0;
  byte *local_98;
  byte **ppbStack_90;
  byte *local_88;
  undefined uStack_80;
  undefined uStack_7c;
  undefined local_78;
  undefined uStack_74;
  undefined uStack_70;
  undefined uStack_6c;
  undefined local_68;
  undefined uStack_64;
  undefined uStack_60;
  undefined uStack_5c;
  undefined local_58;
  undefined uStack_54;
  undefined uStack_50;
  undefined uStack_4c;
  undefined local_48;
  undefined uStack_44;
  undefined uStack_40;
  undefined uStack_3c;
  
  bVar8 = 0;
  puVar41 = auStack_378;
  puVar38 = auStack_378;
  puVar40 = auStack_378;
  puVar36 = auStack_378;
  puVar39 = auStack_378;
  puVar35 = auStack_378;
  puVar37 = auStack_378;
  local_2c8 = (int *)((ulong)local_2c8 & 0xffffffffffffff00 | (ulong)(param_10 != (undefined *)0x0))
  ;
  uVar21 = (ulong)param_7;
  if ((*(char *)(param_6 + 3) != '\0') && (param_10 != (undefined *)0x0)) {
    *param_10 = 0;
  }
  iVar9 = *(int *)((long)param_6 + 4);
  *param_9 = 0;
  local_2e0 = &local_278;
  local_300 = param_4;
  local_2f0 = param_5;
  local_2c0 = param_2;
  if (iVar9 == 2) {
    local_380 = 0x406225;
    iVar9 = __lxstat(1,(char *)param_1,local_2e0);
    bVar48 = iVar9 != 0;
    uVar13 = unaff_R15D & 0xffffff00 | (uint)bVar48;
  }
  else {
    local_380 = 0x405a1a;
    iVar9 = __xstat(1,(char *)param_1,local_2e0);
    bVar48 = iVar9 != 0;
    uVar13 = unaff_R15D & 0xffffff00 | (uint)bVar48;
  }
  puVar34 = auStack_378;
  if (bVar48) goto LAB_00406237;
  local_2d0 = local_278.st_mode;
  local_2cc = local_278.st_mode & 0xf000;
  bVar5 = (byte)param_7;
  if ((local_278.st_mode & 0xf000) == 0x4000) {
    if (*(char *)((long)param_6 + 0x2a) != '\0') {
      if (bVar5 != 0) goto LAB_0040669f;
      goto LAB_00405a72;
    }
    local_380 = 0x406cba;
    uVar21 = FUN_0040ea00(4,param_1);
    uVar16 = 5;
    if (*(char *)((long)param_6 + 0x19) != '\0') {
      pcVar42 = "omitting directory %s";
LAB_00406cd2:
      local_380 = 0x406cd9;
      uVar16 = dcgettext(0,pcVar42,5);
      goto LAB_00406cd9;
    }
  }
  else {
    if (bVar5 != 0) {
      if (*(int *)param_6 == 0) {
        local_380 = 0x406697;
        bVar7 = FUN_0040aef0(param_6[8],param_1,local_2e0);
        if (bVar7 != 0) {
          local_2c0 = (byte **)((ulong)local_2c0 & 0xffffffffffffff00 | (ulong)bVar7);
          local_380 = 0x407683;
          uVar16 = FUN_0040ea00(4,param_1);
          local_380 = 0x407697;
          uVar17 = dcgettext(0,"warning: source file %s specified more than once",5);
          local_380 = 0x4076a8;
          error(0,0,uVar17,uVar16);
          return (uint)(byte)local_2c0;
        }
LAB_0040669f:
        local_380 = 0x4066b2;
        FUN_0040ae60(param_6[8],param_1,local_2e0);
      }
      else {
        local_380 = 0x405a72;
        FUN_0040ae60(param_6[8],param_1,local_2e0);
      }
    }
LAB_00405a72:
    pcVar42 = (char *)local_2e8;
    local_2e8 = (byte **)CONCAT44(local_2e8._4_4_,1);
    if (*(int *)((long)param_6 + 4) != 4) {
      local_2e8 = (byte **)((ulong)pcVar42 & 0xffffffff00000000 |
                           (ulong)(*(int *)((long)param_6 + 4) == 3 & param_7));
    }
    if ((char)param_3 == '\0') {
      if ((((local_2cc == 0x8000) ||
           (((*(char *)((long)param_6 + 0x14) != '\0' && (local_2cc != 0x4000)) &&
            (local_2cc != 0xa000)))) &&
          (((*(char *)(param_6 + 3) == '\0' && (*(char *)((long)param_6 + 0x2c) == '\0')) &&
           (*(char *)((long)param_6 + 0x17) == '\0')))) &&
         ((*(int *)param_6 == 0 && (*(char *)((long)param_6 + 0x15) == '\0')))) {
        local_2f8 = &local_1e8;
        local_380 = 0x405b28;
        iVar9 = __xstat(1,(char *)local_2c0,local_2f8);
        uVar10 = 1;
        bVar48 = iVar9 != 0;
        local_2d8 = (stat *)((ulong)local_2d8 & 0xffffffffffffff00 | (ulong)bVar48);
      }
      else {
        local_2f8 = &local_1e8;
        local_380 = 0x406562;
        iVar9 = __lxstat(1,(char *)local_2c0,local_2f8);
        bVar48 = iVar9 != 0;
        local_2d8 = (stat *)((ulong)local_2d8 & 0xffffffffffffff00 | (ulong)bVar48);
        uVar10 = param_3;
      }
      local_308._0_1_ = (byte)uVar10;
      if (bVar48) {
        local_380 = 0x406580;
        piVar15 = __errno_location();
        if (*piVar15 != 2) {
          local_380 = 0x4065a4;
          local_2c8 = piVar15;
          uVar16 = FUN_0040ea00(4,local_2c0);
          local_380 = 0x4065b8;
          uVar17 = dcgettext(0,"cannot stat %s",5);
          local_380 = 0x4065d1;
          error(0,*local_2c8,uVar17,uVar16);
          return param_3;
        }
        goto LAB_00405dd0;
      }
      if ((local_278.st_ino != local_1e8.st_ino) || (local_278.st_dev != local_1e8.st_dev)) {
        if (*(int *)((long)param_6 + 4) != 2) goto LAB_00405b63;
        cVar4 = '\0';
        uVar10 = 0;
LAB_00406e35:
        psVar22 = local_2e0;
        psVar46 = local_2f8;
        if (((local_278.st_mode & 0xf000) == 0xa000) && ((local_1e8.st_mode & 0xf000) == 0xa000)) {
          local_310 = (stat *)((ulong)local_310 & 0xffffffff00000000 | (ulong)uVar10);
          local_308 = (stat *)((ulong)local_308 & 0xffffffffffffff00 | (ulong)(byte)local_308);
          local_380 = 0x407c02;
          cVar4 = FUN_0040ef80(param_1,local_2c0);
          if (cVar4 == '\0') {
            if ((*(int *)param_6 == 0) && ((uint)local_310 != 0)) {
              bVar7 = 1;
              bVar6 = *(byte *)(param_6 + 3) ^ 1;
              goto LAB_00407c3b;
            }
            goto LAB_00405b63;
          }
        }
        else {
LAB_00406e59:
          if (*(int *)param_6 == 0) {
            cVar28 = *(char *)(param_6 + 3);
            if ((cVar28 == '\0') && (*(char *)((long)param_6 + 0x15) == '\0')) {
              if ((psVar22->st_mode & 0xf000) != 0xa000) {
LAB_004074c7:
                if ((psVar46->st_mode & 0xf000) != 0xa000) {
LAB_00407847:
                  if ((psVar22->st_ino != psVar46->st_ino) || (psVar22->st_dev != psVar46->st_dev))
                  goto LAB_00405b63;
                  if (*(char *)((long)param_6 + 0x17) != '\0') goto LAB_00407660;
                }
LAB_004074db:
                cVar28 = *(char *)(param_6 + 3);
                goto LAB_004074e0;
              }
            }
            else {
              if ((psVar46->st_mode & 0xf000) == 0xa000) goto LAB_00405b63;
              if ((cVar4 != '\0') && (1 < psVar46->st_nlink)) {
                local_318 = (stat *)((ulong)local_318 & 0xffffffffffffff00 | (ulong)(byte)local_308)
                ;
                local_380 = 0x408325;
                local_310 = psVar46;
                local_308 = psVar22;
                bVar7 = FUN_0040ef80(param_1,local_2c0);
                local_308._0_1_ = (byte)local_318;
                if (bVar7 != 0) {
                  psVar22 = local_308;
                  psVar46 = local_310;
                  if ((local_308->st_mode & 0xf000) != 0xa000) goto LAB_004074c7;
                  goto LAB_004074db;
                }
                bVar6 = *(byte *)(param_6 + 3) ^ 1;
                goto LAB_00407c3b;
              }
              if ((psVar22->st_mode & 0xf000) != 0xa000) goto LAB_00407847;
LAB_004074e0:
              if (((cVar28 != '\0') && ((local_278.st_mode & 0xf000) == 0xa000)) &&
                 (1 < psVar46->st_nlink)) {
                local_318 = (stat *)((ulong)local_318 & 0xffffffffffffff00 | (ulong)(byte)local_308)
                ;
                local_380 = 0x40840c;
                local_310 = psVar46;
                local_308 = psVar22;
                pcVar42 = canonicalize_file_name((char *)param_1);
                psVar22 = local_308;
                psVar46 = local_310;
                local_308._0_1_ = (byte)local_318;
                if (pcVar42 != (char *)0x0) {
                  local_308 = (stat *)((ulong)local_308 & 0xffffffffffffff00 |
                                      (ulong)local_318 & 0xff);
                  local_380 = 0x408448;
                  local_2d8 = (stat *)pcVar42;
                  bVar6 = FUN_0040ef80(pcVar42,local_2c0);
                  bVar6 = bVar6 ^ 1;
                  local_380 = 0x40845d;
                  free(local_2d8);
                  bVar7 = 0;
                  goto LAB_00407c3b;
                }
              }
            }
            if ((*(char *)((long)param_6 + 0x2c) == '\0') &&
               (((*(uint *)((long)param_6 + 0x14) & 0xff00ff00) == 0 ||
                ((psVar46->st_mode & 0xf000) != 0xa000)))) {
              if (*(int *)((long)param_6 + 4) == 2) {
                if ((psVar22->st_mode & 0xf000) == 0xa000) {
                  local_310 = (stat *)((ulong)local_310 & 0xffffffffffffff00 |
                                      (ulong)(byte)local_308);
                  local_380 = 0x408cd9;
                  local_308 = psVar46;
                  iVar9 = __xstat(1,(char *)param_1,(stat *)local_c8);
                  psVar46 = local_308;
                  local_308._0_1_ = (byte)local_310;
                  if (iVar9 != 0) goto LAB_00405b63;
                }
                else {
                  local_c8._0_8_ = (byte *)psVar22->st_dev;
                  local_c8._8_8_ = (byte *)psVar22->st_ino;
                  local_c8._16_8_ = (byte *)psVar22->st_nlink;
                  stack0xffffffffffffff50 = *(byte **)&psVar22->st_mode;
                  local_a8 = *(byte **)&psVar22->st_gid;
                  pbStack_a0 = (byte *)psVar22->st_rdev;
                  local_98 = (byte *)psVar22->st_size;
                  ppbStack_90 = (byte **)psVar22->st_blksize;
                  local_88 = (byte *)psVar22->st_blocks;
                  uStack_80 = *(undefined *)&(psVar22->st_atim).tv_sec;
                  uStack_7c = *(undefined *)((long)&(psVar22->st_atim).tv_sec + 4);
                  local_78 = *(undefined *)&(psVar22->st_atim).tv_nsec;
                  uStack_74 = *(undefined *)((long)&(psVar22->st_atim).tv_nsec + 4);
                  uStack_70 = *(undefined *)&(psVar22->st_mtim).tv_sec;
                  uStack_6c = *(undefined *)((long)&(psVar22->st_mtim).tv_sec + 4);
                  local_68 = *(undefined *)&(psVar22->st_mtim).tv_nsec;
                  uStack_64 = *(undefined *)((long)&(psVar22->st_mtim).tv_nsec + 4);
                  uStack_60 = *(undefined *)&(psVar22->st_ctim).tv_sec;
                  uStack_5c = *(undefined *)((long)&(psVar22->st_ctim).tv_sec + 4);
                  local_58 = *(undefined *)&(psVar22->st_ctim).tv_nsec;
                  uStack_54 = *(undefined *)((long)&(psVar22->st_ctim).tv_nsec + 4);
                  uStack_50 = *(undefined *)psVar22->__unused;
                  uStack_4c = *(undefined *)((long)psVar22->__unused + 4);
                  local_48 = *(undefined *)(psVar22->__unused + 1);
                  uStack_44 = *(undefined *)((long)psVar22->__unused + 0xc);
                  uStack_40 = *(undefined *)(psVar22->__unused + 2);
                  uStack_3c = *(undefined *)((long)psVar22->__unused + 0x14);
                }
                if ((psVar46->st_mode & 0xf000) == 0xa000) {
                  local_308 = (stat *)((ulong)local_308 & 0xffffffffffffff00 |
                                      (ulong)(byte)local_308);
                  local_380 = 0x408c9f;
                  iVar9 = __xstat(1,(char *)local_2c0,(stat *)&local_158);
                  if (iVar9 != 0) goto LAB_00405b63;
                }
                else {
                  local_158 = *(uint *)&psVar46->st_dev;
                  uStack_154 = *(undefined *)((long)&psVar46->st_dev + 4);
                  uStack_150 = *(undefined *)&psVar46->st_ino;
                  uStack_14c = *(undefined *)((long)&psVar46->st_ino + 4);
                  local_148 = *(undefined *)&psVar46->st_nlink;
                  uStack_144 = *(undefined *)((long)&psVar46->st_nlink + 4);
                  _Stack_140 = psVar46->st_mode;
                  _Stack_13c = psVar46->st_uid;
                  local_138 = psVar46->st_gid;
                  iStack_134 = psVar46->__pad0;
                  uStack_130 = *(undefined *)&psVar46->st_rdev;
                  uStack_12c = *(undefined *)((long)&psVar46->st_rdev + 4);
                  local_128 = *(undefined *)&psVar46->st_size;
                  uStack_124 = *(undefined *)((long)&psVar46->st_size + 4);
                  uStack_120 = *(undefined *)&psVar46->st_blksize;
                  uStack_11c = *(undefined *)((long)&psVar46->st_blksize + 4);
                  local_118 = *(undefined *)&psVar46->st_blocks;
                  uStack_114 = *(undefined *)((long)&psVar46->st_blocks + 4);
                  uStack_110 = *(undefined *)&(psVar46->st_atim).tv_sec;
                  uStack_10c = *(undefined *)((long)&(psVar46->st_atim).tv_sec + 4);
                  local_108 = *(undefined *)&(psVar46->st_atim).tv_nsec;
                  uStack_104 = *(undefined *)((long)&(psVar46->st_atim).tv_nsec + 4);
                  uStack_100 = *(undefined *)&(psVar46->st_mtim).tv_sec;
                  uStack_fc = *(undefined *)((long)&(psVar46->st_mtim).tv_sec + 4);
                  local_f8 = *(undefined *)&(psVar46->st_mtim).tv_nsec;
                  uStack_f4 = *(undefined *)((long)&(psVar46->st_mtim).tv_nsec + 4);
                  uStack_f0 = *(undefined *)&(psVar46->st_ctim).tv_sec;
                  uStack_ec = *(undefined *)((long)&(psVar46->st_ctim).tv_sec + 4);
                  local_e8 = *(undefined *)&(psVar46->st_ctim).tv_nsec;
                  uStack_e4 = *(undefined *)((long)&(psVar46->st_ctim).tv_nsec + 4);
                  uStack_e0 = *(undefined *)psVar46->__unused;
                  uStack_dc = *(undefined *)((long)psVar46->__unused + 4);
                  local_d8 = *(undefined *)(psVar46->__unused + 1);
                  uStack_d4 = *(undefined *)((long)psVar46->__unused + 0xc);
                  uStack_d0 = *(undefined *)(psVar46->__unused + 2);
                  uStack_cc = *(undefined *)((long)psVar46->__unused + 0x14);
                }
                if ((local_c8._8_8_ != (byte *)CONCAT44(uStack_14c,uStack_150)) ||
                   (local_c8._0_8_ != (byte *)CONCAT44(uStack_154,local_158))) goto LAB_00405b63;
                if (*(char *)((long)param_6 + 0x17) != '\0') goto LAB_00407660;
              }
              goto LAB_00406eb0;
            }
            bVar6 = psVar46->st_dev == psVar22->st_dev;
            bVar7 = 0;
          }
          else {
            if (cVar4 == '\0') {
              if (((*(char *)(param_6 + 3) == '\0') && (*(int *)((long)param_6 + 4) != 2)) &&
                 (((psVar22->st_mode & 0xf000) == 0xa000 && ((psVar46->st_mode & 0xf000) != 0xa000))
                 )) goto LAB_00406eb0;
              goto LAB_00405b63;
            }
            local_2d8 = (stat *)((ulong)local_2d8 & 0xffffffffffffff00 | (ulong)(byte)local_308);
            local_380 = 0x40811b;
            bVar6 = FUN_0040ef80(param_1,local_2c0);
            bVar6 = bVar6 ^ 1;
            bVar7 = 0;
            local_308._0_1_ = (byte)local_2d8;
          }
LAB_00407c3b:
          if (bVar6 != 0) {
            local_2d8 = (stat *)((ulong)local_2d8 & 0xffffffffffffff00 | (ulong)bVar7);
            goto LAB_00405b63;
          }
        }
LAB_00406eb0:
        local_380 = 0x406ec6;
        uVar16 = FUN_0040e920(1,4,local_2c0);
        local_380 = 0x406ed8;
        uVar17 = FUN_0040e920(0,4,param_1);
        pcVar42 = "%s and %s are the same file";
        puVar37 = auStack_378;
LAB_00405da8:
        *(undefined *)(puVar37 + -8) = 0x405daf;
        uVar18 = dcgettext(0,pcVar42,5);
LAB_00405db8:
        *(undefined *)(puVar37 + -8) = 0x405dc3;
        error(0,0,uVar18,uVar17,uVar16);
        return 0;
      }
      cVar4 = *(char *)((long)param_6 + 0x17);
      if (cVar4 == '\0') {
        if (*(int *)((long)param_6 + 4) == 2) {
          cVar4 = '\x01';
          uVar10 = 1;
          goto LAB_00406e35;
        }
        local_318 = (stat *)&local_158;
        local_308 = (stat *)((ulong)local_308 & 0xffffffffffffff00 | (ulong)(byte)local_308);
        local_380 = 0x40705e;
        iVar9 = __lxstat(1,(char *)local_2c0,local_318);
        if (iVar9 == 0) {
          local_328 = (stat *)local_c8;
          local_380 = 0x40708c;
          iVar9 = __lxstat(1,(char *)param_1,local_328);
          if (iVar9 == 0) {
            if (local_c8._8_8_ == (byte *)CONCAT44(uStack_14c,uStack_150)) {
              cVar4 = local_c8._0_8_ == (byte *)CONCAT44(uStack_154,local_158);
            }
            psVar22 = local_328;
            psVar46 = local_318;
            if ((((local_c8._24_4_ & 0xf000) != 0xa000) || ((_Stack_140 & 0xf000) != 0xa000)) ||
               (*(char *)((long)param_6 + 0x15) == '\0')) goto LAB_00406e59;
          }
        }
      }
      else {
LAB_00407660:
        local_2d8 = (stat *)CONCAT71(local_2d8._1_7_,1);
      }
LAB_00405b63:
      if (local_2cc == 0x4000) {
        if (*(char *)(param_6 + 3) != '\0') {
          iVar9 = *(int *)(param_6 + 1);
LAB_0040711f:
          if (iVar9 == 2) {
LAB_004071a0:
            if (param_10 == (undefined *)0x0) {
              return 1;
            }
            goto LAB_004071ab;
          }
          if (iVar9 == 3) {
LAB_00407166:
            local_308 = (stat *)((ulong)local_308 & 0xffffffffffffff00 | (ulong)(byte)local_308);
            local_380 = 0x407187;
            cVar4 = FUN_00404e20(param_6,local_2c0,&local_2f8->st_mode);
            if (cVar4 == '\0') goto LAB_004071a0;
          }
          else if ((iVar9 == 4) && (*(char *)((long)param_6 + 0x2f) != '\0')) {
            local_308 = (stat *)((ulong)local_308 & 0xffffffffffffff00 | (ulong)(byte)local_308);
            local_380 = 0x407156;
            cVar4 = FUN_00404bd0(local_2c0,local_1e8.st_mode);
            if (cVar4 == '\0') goto LAB_00407166;
          }
        }
LAB_00405b9f:
        if ((byte)local_2d8 != '\0') {
          return 1;
        }
        local_2d8._0_1_ = (byte)local_308 ^ 1;
        if ((local_1e8.st_mode & 0xf000) != 0x4000) {
          if (local_2cc == 0x4000) {
            if ((*(char *)(param_6 + 3) == '\0') || (iVar9 = *(int *)param_6, iVar9 == 0)) {
              local_380 = 0x408153;
              uVar16 = FUN_0040e920(1,4,param_1);
              local_380 = 0x408169;
              uVar17 = FUN_0040e920(0,4,local_2c0);
              pcVar42 = "cannot overwrite non-directory %s with directory %s";
              puVar37 = auStack_378;
              goto LAB_00405da8;
            }
            if (bVar5 != 0) goto LAB_00405be4;
            goto LAB_00407928;
          }
          iVar9 = *(int *)param_6;
          if (bVar5 == 0) goto LAB_00405c44;
LAB_00405be4:
          if (iVar9 != 3) {
            local_308 = (stat *)((ulong)local_308 & 0xffffffffffffff00 | (ulong)(byte)local_2d8);
            local_380 = 0x405c0b;
            cVar4 = FUN_0040aef0(param_6[7],local_2c0,local_2f8);
            if (cVar4 != '\0') {
              local_380 = 0x408545;
              uVar16 = FUN_0040e920(1,4,param_1);
              local_380 = 0x40855b;
              uVar17 = FUN_0040e920(0,4,local_2c0);
              pcVar42 = "will not overwrite just-created %s with %s";
              puVar37 = auStack_378;
              goto LAB_00405da8;
            }
            local_2d8._0_1_ = (byte)local_308;
            if ((local_2cc != 0x4000) && ((local_1e8.st_mode & 0xf000) == 0x4000))
            goto LAB_00407910;
            goto LAB_00405c40;
          }
          if (*(char *)(param_6 + 3) != '\0') goto LAB_00407928;
LAB_00407ea8:
          local_2f8 = (stat *)((ulong)local_2f8 & 0xffffffffffffff00 | (ulong)(byte)local_2d8);
          local_380 = 0x407eb6;
          psVar22 = (stat *)FUN_0040ad40(param_1);
          if (*(char *)&psVar22->st_dev == '.') {
            bVar7 = 0;
LAB_004082d3:
            cVar4 = *(char *)((long)psVar22->__unused +
                             ((ulong)(*(char *)((long)&psVar22->st_dev + 1) == '.') - 0x77));
            local_2d8._0_1_ = (byte)local_2f8;
            if ((cVar4 == '\0') || (cVar4 == '/')) goto LAB_00405c5a;
            if (bVar7 != 0) goto LAB_00407961;
          }
          local_2d8._0_1_ = (byte)local_2f8;
          if ((local_1e8.st_mode & 0xf000) == 0x4000) {
LAB_00407edf:
            local_308 = (stat *)0x0;
            puVar40 = auStack_378;
            goto LAB_00405de4;
          }
LAB_00407961:
          if (iVar9 != 3) {
            local_2f8 = (stat *)((ulong)local_2f8 & 0xffffffffffffff00 | (ulong)(byte)local_2f8);
            local_380 = 0x407980;
            local_310 = psVar22;
            local_2d8 = (stat *)strlen((char *)psVar22);
            local_380 = 0x407993;
            local_308 = (stat *)FUN_0040ad40(local_2c0);
            local_380 = 0x4079a2;
            sVar19 = strlen((char *)local_308);
            local_318 = DAT_006219a0;
            local_380 = 0x4079bb;
            local_320 = (byte **)strlen((char *)DAT_006219a0);
            if (local_2d8 == (stat *)(sVar19 + (long)local_320)) {
              local_2d8 = (stat *)((ulong)local_2d8 & 0xffffffffffffff00 | (ulong)local_2f8 & 0xff);
              local_2f8 = local_310;
              local_380 = 0x407a03;
              iVar9 = memcmp(local_310,local_308,sVar19);
              local_2f8._0_1_ = (byte)local_2d8;
              if (iVar9 == 0) {
                local_380 = 0x407a29;
                iVar9 = strcmp((char *)((long)local_2f8->__unused + (sVar19 - 0x78)),
                               (char *)local_318);
                local_2f8._0_1_ = (byte)local_2d8;
                if (iVar9 == 0) {
                  local_308 = (stat *)((ulong)local_308 & 0xffffffffffffff00 |
                                      (ulong)local_2d8 & 0xff);
                  local_380 = 0x407a4a;
                  local_2f8 = (stat *)strlen((char *)local_2c0);
                  local_380 = 0x407a62;
                  pcVar42 = (char *)FUN_004112e0((undefined *)
                                                 ((long)local_320 +
                                                 (long)((long)local_2f8->__unused + -0x77)));
                  local_2d8 = DAT_006219a0;
                  local_380 = 0x407a89;
                  pcVar27 = (char *)mempcpy(pcVar42,local_2c0,(size_t)local_2f8);
                  local_380 = 0x407a98;
                  strcpy(pcVar27,(char *)local_2d8);
                  local_380 = 0x407aaf;
                  uVar10 = __xstat(1,pcVar42,(stat *)local_c8);
                  local_2d8 = (stat *)((ulong)local_2d8 & 0xffffffff00000000 | (ulong)uVar10);
                  local_380 = 0x407abd;
                  free(pcVar42);
                  local_2f8._0_1_ = (byte)local_308;
                  if ((((int)local_2d8 == 0) && ((byte *)local_278.st_ino == local_c8._8_8_)) &&
                     ((byte *)local_278.st_dev == local_c8._0_8_)) {
                    if (*(char *)(param_6 + 3) == '\0') {
                      local_380 = 0x4091da;
                      uVar18 = dcgettext(0,"backing up %s might destroy source;  %s not copied",5);
                    }
                    else {
                      local_380 = 0x409190;
                      uVar18 = dcgettext(0,"backing up %s might destroy source;  %s not moved",5);
                    }
                    local_380 = 0x4091a5;
                    uVar16 = FUN_0040e920(1,4,param_1);
                    local_380 = 0x4091bb;
                    uVar17 = FUN_0040e920(0,4,local_2c0);
                    goto LAB_00405db8;
                  }
                }
              }
            }
          }
          local_2d8 = (stat *)((ulong)local_2d8 & 0xffffffffffffff00 | (ulong)(byte)local_2f8);
          local_380 = 0x407afe;
          psVar22 = (stat *)FUN_0040a8b0(local_2c0,*(undefined *)param_6);
          local_2f8 = (stat *)((ulong)local_2f8 & 0xffffffffffffff00 | (ulong)local_2d8 & 0xff);
          local_308 = psVar22;
          if (psVar22 == (stat *)0x0) {
            local_380 = 0x4081cb;
            piVar15 = __errno_location();
            local_2d8 = (stat *)CONCAT71(local_2d8._1_7_,1);
            puVar40 = auStack_378;
            local_2d8._0_1_ = (byte)local_2f8;
            if (*piVar15 != 2) {
              local_380 = 0x4081f6;
              uVar16 = FUN_0040ea00(4,local_2c0);
              pcVar42 = "cannot backup %s";
LAB_00408203:
              local_380 = 0x40820d;
              uVar17 = dcgettext(0,pcVar42,5);
              local_380 = 0x408220;
              error(0,*piVar15,uVar17,uVar16);
              return 0;
            }
          }
          else {
            local_380 = 0x407b26;
            sVar19 = strlen((char *)psVar22);
            lVar29 = -(sVar19 + 0x18 & 0xfffffffffffffff0);
            *(undefined *)(auStack_378 + lVar29 + -8) = 0x407b46;
            psVar46 = (stat *)memcpy((void *)((long)&local_370 + lVar29),psVar22,sVar19 + 1);
            psVar22 = local_308;
            *(undefined *)(auStack_378 + lVar29 + -8) = 0x407b55;
            free(psVar22);
            local_308 = psVar46;
            local_2d8 = (stat *)CONCAT71(local_2d8._1_7_,1);
            puVar40 = auStack_378 + lVar29;
            local_2d8._0_1_ = (byte)local_2f8;
          }
          goto LAB_00405de4;
        }
        if (local_2cc != 0x4000) {
LAB_00407910:
          if ((*(char *)(param_6 + 3) == '\0') || (iVar9 = *(int *)param_6, iVar9 == 0)) {
            local_380 = 0x408236;
            uVar21 = FUN_0040ea00(4,local_2c0);
            pcVar42 = "cannot overwrite directory %s with non-directory";
            goto LAB_00406cd2;
          }
LAB_00407928:
          if ((local_278.st_mode & 0xf000) == 0x4000) {
LAB_00408068:
            if ((local_1e8.st_mode & 0xf000) == 0x4000) goto LAB_00407f05;
            if (iVar9 == 0) {
              local_380 = 0x408094;
              uVar16 = FUN_0040ead0(0,3,local_2c0);
              local_380 = 0x4080a6;
              uVar17 = FUN_0040ead0(0,3,param_1);
              pcVar42 = "cannot move directory onto non-directory: %s -> %s";
              puVar37 = auStack_378;
              goto LAB_00405da8;
            }
          }
LAB_00407940:
          local_2f8 = (stat *)((ulong)local_2f8 & 0xffffffffffffff00 | (ulong)(byte)local_2d8);
          local_380 = 0x40794e;
          psVar22 = (stat *)FUN_0040ad40(param_1);
          if (*(char *)&psVar22->st_dev == '.') {
            bVar7 = 1;
            goto LAB_004082d3;
          }
          goto LAB_00407961;
        }
LAB_00405c40:
        iVar9 = *(int *)param_6;
LAB_00405c44:
        bVar7 = *(byte *)(param_6 + 3);
        if (bVar7 != 0) {
          if ((local_278.st_mode & 0xf000) == 0x4000) goto LAB_00408068;
LAB_00407f05:
          if (iVar9 != 0) goto LAB_00407940;
          goto LAB_00407edf;
        }
        if (iVar9 != 0) goto LAB_00407ea8;
LAB_00405c5a:
        local_308 = (stat *)0x0;
        puVar40 = auStack_378;
        if (((local_1e8.st_mode & 0xf000) == 0x4000 | bVar7) != 0) goto LAB_00405de4;
        uVar31 = (ulong)local_2d8 & 0xffffffffffffff00;
        local_2d8 = (stat *)(uVar31 | *(byte *)((long)param_6 + 0x15));
        if (((*(byte *)((long)param_6 + 0x15) == 0) &&
            ((*(char *)((long)param_6 + 0x22) == '\0' || (local_1e8.st_nlink < 2)))) &&
           ((local_308 = (stat *)0x0, puVar40 = auStack_378, *(int *)((long)param_6 + 4) != 2 ||
            (puVar40 = auStack_378, (local_278.st_mode & 0xf000) == 0x8000)))) goto LAB_00405de4;
        local_308 = (stat *)0x0;
        local_2d8 = (stat *)(uVar31 | (byte)local_2d8);
        local_380 = 0x405cbc;
        iVar9 = unlink((char *)local_2c0);
        if (iVar9 != 0) {
          local_380 = 0x405ccc;
          piVar15 = __errno_location();
          if (*piVar15 != 2) {
            local_380 = 0x408b30;
            uVar16 = FUN_0040ea00(4,local_2c0);
            pcVar42 = "cannot remove %s";
            goto LAB_00408203;
          }
        }
        uVar31 = (ulong)local_2d8 & 0xffffffffffffff00;
        local_2d8 = (stat *)(uVar31 | *(byte *)((long)param_6 + 0x2e));
        if (*(byte *)((long)param_6 + 0x2e) != 0) {
          local_2f8 = (stat *)((ulong)local_2f8 & 0xffffffffffffff00 | (ulong)(byte)local_2d8);
          local_380 = 0x4085b8;
          uVar16 = FUN_0040ea00(4,local_2c0);
          local_380 = 0x4085cc;
          uVar17 = dcgettext(0,"removed %s\n",5);
          local_380 = 0x4085de;
          __printf_chk(1,uVar17,uVar16);
          local_308 = (stat *)0x0;
          puVar40 = auStack_378;
          local_2d8._0_1_ = (byte)local_2f8;
          goto LAB_00405de4;
        }
        if (bVar5 != 0) {
          local_2d8 = (stat *)(uVar31 | bVar5);
          local_308 = (stat *)0x0;
          puVar35 = auStack_378;
          if (param_6[7] != (byte *)0x0) goto LAB_00405d20;
          goto LAB_004062b0;
        }
        bVar7 = local_2cc == 0x4000 & *(byte *)((long)param_6 + 0x2a);
        local_2d8 = (stat *)(uVar31 | bVar7);
        if (bVar7 == 0) {
          local_2d8._1_7_ = (undefined)(uVar31 >> 8);
          local_2d8 = (stat *)CONCAT71(local_2d8._1_7_,1);
          local_308 = (stat *)0x0;
          goto LAB_00405e28;
        }
        local_308 = (stat *)0x0;
LAB_00406d10:
        pbVar44 = (byte *)local_278.st_ino;
        pbVar25 = (byte *)local_278.st_dev;
        *(undefined *)(puVar39 + -8) = 0x406d18;
        local_2f8 = (stat *)FUN_004099d0(pbVar44,pbVar25);
        puVar40 = puVar39;
        goto LAB_004062f7;
      }
      if (*(char *)((long)param_6 + 0x2d) == '\0') {
LAB_00405b7e:
        iVar9 = *(int *)(param_6 + 1);
        if (*(char *)(param_6 + 3) != '\0') goto LAB_0040711f;
        if (iVar9 == 2) {
          return 1;
        }
        if (iVar9 == 3) {
          local_308 = (stat *)((ulong)local_308 & 0xffffffffffffff00 | (ulong)(byte)local_308);
          local_380 = 0x407fda;
          cVar4 = FUN_00404e20(param_6,local_2c0,&local_2f8->st_mode);
          if (cVar4 == '\0') {
            return 1;
          }
        }
        goto LAB_00405b9f;
      }
      bVar48 = false;
      if ((*(char *)((long)param_6 + 0x1f) != '\0') &&
         (bVar48 = true, *(char *)(param_6 + 3) != '\0')) {
        bVar48 = local_1e8.st_dev != local_278.st_dev;
      }
      local_308 = (stat *)((ulong)local_308 & 0xffffffffffffff00 | (ulong)(byte)local_308);
      local_380 = 0x406d99;
      iVar9 = FUN_0040fd60(local_2c0,local_2f8,local_2e0,bVar48);
      if (iVar9 < 0) goto LAB_00405b7e;
      if (param_10 != (undefined *)0x0) {
        *param_10 = 1;
      }
      local_380 = 0x406dd1;
      lVar29 = FUN_00409a10(local_2c0,local_278.st_ino,local_278.st_dev);
      if (lVar29 == 0) {
        return 1;
      }
      local_380 = 0x406dfa;
      cVar4 = FUN_00404f50(lVar29,local_2c0,1,*(undefined *)((long)param_6 + 0x2e),
                           (ulong)local_2e8 & 0xffffffff);
      if (cVar4 != '\0') {
        return 1;
      }
      if (*(char *)((long)param_6 + 0x25) == '\0') {
        return uVar13;
      }
    }
    else {
LAB_00405dd0:
      local_2d8 = (stat *)CONCAT71(local_2d8._1_7_,1);
      local_2d8._0_1_ = 0;
      local_308 = (stat *)0x0;
      puVar40 = auStack_378;
LAB_00405de4:
      if ((bVar5 == 0) || (puVar36 = puVar40, param_6[7] == (byte *)0x0)) {
LAB_00405dec:
        puVar35 = puVar40;
        if (*(char *)((long)param_6 + 0x2e) == '\0') {
LAB_004062b0:
          if ((*(char *)((long)param_6 + 0x2a) == '\0') || (puVar39 = puVar35, local_2cc != 0x4000))
          {
LAB_00405e28:
            puVar40 = puVar35;
            if (*(char *)(param_6 + 3) != '\0') goto LAB_00406487;
            goto LAB_00405e33;
          }
LAB_004062cb:
          pbVar25 = (byte *)local_278.st_ino;
          ppbVar24 = local_2c0;
          if (bVar5 == 0) goto LAB_00406d10;
          *(undefined *)(puVar39 + -8) = 0x4062f0;
          local_2f8 = (stat *)FUN_00409a10(ppbVar24,pbVar25);
          puVar40 = puVar39;
LAB_004062f7:
          if (local_2f8 != (stat *)0x0) {
LAB_00406305:
            psVar22 = local_2f8;
            *(undefined *)(puVar40 + -8) = 0x406314;
            cVar4 = FUN_0040ef80(param_1,psVar22);
            ppbVar24 = local_2c0;
            psVar22 = local_2f8;
            if (cVar4 == '\0') {
              *(undefined *)(puVar40 + -8) = 0x40632f;
              cVar4 = FUN_0040ef80(ppbVar24,psVar22);
              psVar22 = local_2f8;
              if (cVar4 != '\0') {
                *(undefined *)(puVar40 + -8) = 0x407f21;
                uVar16 = FUN_0040ea00(4,DAT_00621990);
                *(undefined *)(puVar40 + -8) = 0x407f35;
                uVar17 = dcgettext(0,"warning: source directory %s specified more than once",5);
                *(undefined *)(puVar40 + -8) = 0x407f46;
                error(0,0,uVar17,uVar16);
                if (*(char *)(param_6 + 3) == '\0') {
                  return 1;
                }
                if ((byte)local_2c8 == '\0') {
                  return 1;
                }
LAB_004071ab:
                *param_10 = 1;
                return 1;
              }
              if ((*(int *)((long)param_6 + 4) == 4) ||
                 ((*(int *)((long)param_6 + 4) == 3 && (bVar5 != 0)))) goto LAB_00406456;
              *(undefined *)(puVar40 + -8) = 0x406367;
              uVar16 = FUN_0040e920(1,4,psVar22);
              ppbVar24 = local_2c0;
              *(undefined *)(puVar40 + -8) = 0x40637d;
              uVar21 = FUN_0040e920(0,4,ppbVar24);
              *(undefined *)(puVar40 + -8) = 0x406391;
              uVar17 = dcgettext(0,"will not create hard link %s to directory %s",5);
              *(undefined *)(puVar40 + -8) = 0x4063a5;
              error(0,0,uVar17,uVar21,uVar16);
            }
            else {
              *(undefined *)(puVar40 + -8) = 0x4076d6;
              uVar21 = FUN_0040e920(1,4,DAT_00621988);
              *(undefined *)(puVar40 + -8) = 0x4076ec;
              uVar16 = FUN_0040e920(0,4,DAT_00621990);
              *(undefined *)(puVar40 + -8) = 0x407700;
              uVar17 = dcgettext(0,"cannot copy a directory, %s, into itself, %s",5);
              *(undefined *)(puVar40 + -8) = 0x407714;
              error(0,0,uVar17,uVar16,uVar21);
              *param_9 = 1;
            }
LAB_004063a8:
            if (*(char *)((long)param_6 + 0x25) == '\0') goto LAB_004063b3;
            goto LAB_00406e0d;
          }
LAB_00406456:
          if (*(char *)(param_6 + 3) == '\0') {
            local_2c8 = (int *)((ulong)local_2c8 & 0xffffffff00000000 | (ulong)local_2d8 & 0xff);
            goto LAB_00405e56;
          }
        }
        else {
          puVar36 = puVar40;
          if (*(char *)(param_6 + 3) == '\0') {
LAB_00405e02:
            ppbVar24 = local_2c0;
            psVar22 = local_308;
            puVar36 = puVar35;
            if (local_2cc != 0x4000) {
              *(undefined *)(puVar35 + -8) = 0x405e28;
              FUN_00404d70(param_1,ppbVar24,psVar22);
              goto LAB_00405e28;
            }
LAB_004067f0:
            puVar40 = puVar36;
            puVar39 = puVar36;
            if (*(char *)((long)param_6 + 0x2a) == '\0') goto LAB_00405e33;
            goto LAB_004062cb;
          }
LAB_00406470:
          puVar40 = puVar36;
          if ((local_2cc == 0x4000) && (puVar39 = puVar36, *(char *)((long)param_6 + 0x2a) != '\0'))
          goto LAB_004062cb;
LAB_00406487:
          pbVar44 = (byte *)local_278.st_ino;
          pbVar25 = (byte *)local_278.st_dev;
          if (local_278.st_nlink == 1) {
            *(undefined *)(puVar40 + -8) = 0x406d3b;
            local_2f8 = (stat *)FUN_004099d0(pbVar44,pbVar25);
            goto LAB_0040662c;
          }
          if (*(char *)((long)param_6 + 0x22) != '\0') goto LAB_00406440;
          local_2f8 = (stat *)0x0;
        }
        ppbVar24 = local_2c0;
        *(undefined *)(puVar40 + -8) = 0x4064b6;
        iVar9 = rename((char *)param_1,(char *)ppbVar24);
        if (iVar9 == 0) {
          if (*(char *)((long)param_6 + 0x2e) != '\0') {
            *(undefined *)(puVar40 + -8) = 0x4078a9;
            uVar16 = dcgettext(0,"renamed ",5);
            *(undefined *)(puVar40 + -8) = 0x4078b8;
            __printf_chk(1,uVar16);
            ppbVar24 = local_2c0;
            psVar22 = local_308;
            *(undefined *)(puVar40 + -8) = 0x4078ce;
            FUN_00404d70(param_1,ppbVar24,psVar22);
          }
          ppbVar24 = local_2c0;
          if (*(char *)((long)param_6 + 0x21) != '\0') {
            *(undefined *)(puVar40 + -8) = 0x40788e;
            FUN_00405620(ppbVar24,0,1,param_6);
          }
          ppbVar24 = local_2c0;
          psVar22 = local_2e0;
          if (param_10 != (undefined *)0x0) {
            *param_10 = 1;
          }
          if (bVar5 == 0) {
            return 1;
          }
          pbVar25 = param_6[7];
          *(undefined *)(puVar40 + -8) = 0x406ffe;
          FUN_0040ae60(pbVar25,ppbVar24,psVar22);
          return param_7;
        }
        *(undefined *)(puVar40 + -8) = 0x4064c3;
        piVar15 = __errno_location();
        ppbVar24 = local_2c0;
        if (*piVar15 == 0x16) {
          *(undefined *)(puVar40 + -8) = 0x407cb4;
          uVar16 = FUN_0040e920(1,4,DAT_00621988);
          *(undefined *)(puVar40 + -8) = 0x407cca;
          uVar17 = FUN_0040e920(0,4,DAT_00621990);
          *(undefined *)(puVar40 + -8) = 0x407cde;
          uVar18 = dcgettext(0,"cannot move %s to a subdirectory of itself, %s",5);
          *(undefined *)(puVar40 + -8) = 0x407cf2;
          error(0,0,uVar18,uVar17,uVar16);
          *param_9 = 1;
          return 1;
        }
        if (*piVar15 != 0x12) {
          *(undefined *)(puVar40 + -8) = 0x40721e;
          uVar16 = FUN_0040e920(1,4,ppbVar24);
          *(undefined *)(puVar40 + -8) = 0x407230;
          uVar17 = FUN_0040e920(0,4,param_1);
          pcVar42 = "cannot move %s to %s";
          goto LAB_00406f7d;
        }
        if (local_2cc == 0x4000) {
          *(undefined *)(puVar40 + -8) = 0x406f35;
          iVar9 = rmdir((char *)ppbVar24);
          if ((iVar9 != 0) && (*piVar15 != 2)) goto LAB_00406f48;
        }
        else {
          *(undefined *)(puVar40 + -8) = 0x4064f6;
          iVar9 = unlink((char *)ppbVar24);
          if ((iVar9 != 0) && (*piVar15 != 2)) {
LAB_00406f48:
            ppbVar24 = local_2c0;
            *(undefined *)(puVar40 + -8) = 0x406f5e;
            uVar16 = FUN_0040e920(1,4,ppbVar24);
            *(undefined *)(puVar40 + -8) = 0x406f70;
            uVar17 = FUN_0040e920(0,4,param_1);
            pcVar42 = "inter-device move failed: %s to %s; unable to remove target";
LAB_00406f7d:
            *(undefined *)(puVar40 + -8) = 0x406f84;
            uVar18 = dcgettext(0,pcVar42,5);
            iVar9 = *piVar15;
            *(undefined *)(puVar40 + -8) = 0x406f9a;
            error(0,iVar9,uVar18,uVar17,uVar16);
            *(undefined *)(puVar40 + -8) = 0x406fad;
            FUN_00409980(local_278.st_ino,local_278.st_dev);
            return uVar13;
          }
          bVar5 = local_2cc != 0x4000 & *(byte *)((long)param_6 + 0x2e);
          local_2d8 = (stat *)((ulong)local_2d8 & 0xffffffffffffff00 | (ulong)bVar5);
          if (bVar5 != 0) {
            *(undefined *)(puVar40 + -8) = 0x407c61;
            uVar16 = dcgettext(0,"copied ",5);
            *(undefined *)(puVar40 + -8) = 0x407c70;
            __printf_chk(1,uVar16);
            ppbVar24 = local_2c0;
            psVar22 = local_308;
            *(undefined *)(puVar40 + -8) = 0x407c86;
            FUN_00404d70(param_1,ppbVar24,psVar22);
            local_2c8 = (int *)CONCAT44(local_2c8._4_4_,1);
            goto LAB_00405e56;
          }
        }
        local_2c8 = (int *)CONCAT44(local_2c8._4_4_,1);
        local_2d8 = (stat *)CONCAT71(local_2d8._1_7_,1);
      }
      else {
LAB_00405d20:
        ppbVar24 = local_2c0;
        puVar35 = puVar36;
        if (*(char *)(param_6 + 3) != '\0') {
          if (*(char *)((long)param_6 + 0x2e) != '\0') goto LAB_00406470;
          goto LAB_004062b0;
        }
        if (*(int *)param_6 == 0) {
          psVar22 = &local_1e8;
          puVar40 = puVar36;
          if ((byte)local_2d8 == 0) {
            psVar22 = (stat *)local_c8;
            *(undefined *)(puVar36 + -8) = 0x407756;
            iVar9 = __lxstat(1,(char *)ppbVar24,psVar22);
            if (iVar9 != 0) goto LAB_00405dec;
          }
          ppbVar24 = local_2c0;
          if ((psVar22->st_mode & 0xf000) == 0xa000) {
            pbVar25 = param_6[7];
            *(undefined *)(puVar36 + -8) = 0x405d69;
            cVar4 = FUN_0040aef0(pbVar25,ppbVar24);
            ppbVar24 = local_2c0;
            if (cVar4 != '\0') {
              *(undefined *)(puVar36 + -8) = 0x405d83;
              uVar16 = FUN_0040e920(1,4,ppbVar24);
              *(undefined *)(puVar36 + -8) = 0x405d95;
              uVar17 = FUN_0040e920(0,4,param_1);
              pcVar42 = "will not copy %s through just-created symlink %s";
              puVar37 = puVar36;
              goto LAB_00405da8;
            }
          }
          goto LAB_00405dec;
        }
        if (*(char *)((long)param_6 + 0x2e) != '\0') goto LAB_00405e02;
        puVar40 = puVar36;
        if (local_2cc == 0x4000) goto LAB_004067f0;
LAB_00405e33:
        if (*(char *)((long)param_6 + 0x22) != '\0') {
LAB_00406440:
          pbVar44 = (byte *)local_278.st_ino;
          pbVar25 = (byte *)local_278.st_dev;
          ppbVar24 = local_2c0;
          if (*(char *)((long)param_6 + 0x17) == '\0') {
            if ((1 < local_278.st_nlink) ||
               (((bVar5 != 0 && (*(int *)((long)param_6 + 4) == 3)) ||
                (local_2f8 = (stat *)0x0, *(int *)((long)param_6 + 4) == 4)))) {
              *(undefined *)(puVar40 + -8) = 0x406625;
              local_2f8 = (stat *)FUN_00409a10(ppbVar24,pbVar44,pbVar25);
LAB_0040662c:
              ppbVar24 = local_2c0;
              psVar22 = local_2f8;
              if (local_2f8 != (stat *)0x0) {
                if (local_2cc == 0x4000) goto LAB_00406305;
                uVar47 = *(undefined *)((long)param_6 + 0x2e);
                uVar31 = (ulong)local_2e8 & 0xffffffff;
                *(undefined *)(puVar40 + -8) = 0x40666e;
                cVar4 = FUN_00404f50(psVar22,ppbVar24,1,uVar47,uVar31);
                if (cVar4 != '\0') {
                  return 1;
                }
                goto LAB_004063a8;
              }
            }
          }
          else {
            local_2f8 = (stat *)0x0;
          }
          goto LAB_00406456;
        }
        local_2f8 = (stat *)0x0;
        local_2c8 = (int *)((ulong)local_2c8 & 0xffffffff00000000 | (ulong)local_2d8 & 0xff);
      }
LAB_00405e56:
      ppbVar24 = local_2c0;
      uVar11 = local_2d0;
      uVar10 = local_2d0;
      if (*(char *)((long)param_6 + 0x2b) != '\0') {
        uVar10 = *(uint *)(param_6 + 2);
      }
      puVar37 = puVar40;
      if (*(char *)((long)param_6 + 0x1d) == '\0') {
        if (local_2cc == 0x4000) {
          uVar31 = (ulong)local_2c8 & 0xffffffff;
          *(undefined *)(puVar40 + -8) = 0x406c8e;
          cVar4 = FUN_00405550(param_1,ppbVar24,uVar11,uVar31);
          if (cVar4 == '\0') {
            return uVar13;
          }
          local_310 = (stat *)((ulong)local_310 & 0xffffffff00000000 |
                              (ulong)uVar10 & 0xffffffff00000012);
          ppbVar24 = local_2f0;
          goto joined_r0x0040676f;
        }
        *(undefined *)(puVar40 + -8) = 0x405eaf;
        cVar4 = FUN_00405550(param_1,ppbVar24,uVar11);
        local_310 = (stat *)((ulong)local_310 & 0xffffffff00000000);
        if (cVar4 == '\0') {
          return uVar13;
        }
LAB_00405ec1:
        ppbVar24 = local_2c0;
        local_2f0 = (byte **)((ulong)local_2f0 & 0xffffffffffffff00 |
                             (ulong)*(byte *)((long)param_6 + 0x2c));
        puVar34 = puVar40;
        if (*(byte *)((long)param_6 + 0x2c) != 0) {
          uVar47 = *(byte *)param_1 < 0x2f;
          uVar49 = *(byte *)param_1 == 0x2f;
          if (!(bool)uVar49) {
            *(undefined *)(puVar40 + -8) = 0x405ee6;
            __filename = (byte *)FUN_0040ac60(ppbVar24);
            lVar29 = 2;
            pbVar25 = &DAT_00418d7b;
            pbVar44 = __filename;
            do {
              if (lVar29 == 0) break;
              lVar29 = lVar29 + -1;
              uVar47 = *pbVar25 < *pbVar44;
              uVar49 = *pbVar25 == *pbVar44;
              pbVar25 = pbVar25 + (ulong)bVar8 * -2 + 1;
              pbVar44 = pbVar44 + (ulong)bVar8 * -2 + 1;
            } while ((bool)uVar49);
            if ((!(bool)uVar47 && !(bool)uVar49) != (bool)uVar47) {
              *(undefined *)(puVar40 + -8) = 0x4077a6;
              iVar9 = __xstat(1,".",(stat *)&local_158);
              if (iVar9 == 0) {
                *(undefined *)(puVar40 + -8) = 0x4077c2;
                iVar9 = __xstat(1,(char *)__filename,(stat *)local_c8);
                if ((iVar9 == 0) &&
                   (((byte *)CONCAT44(uStack_14c,uStack_150) != local_c8._8_8_ ||
                    ((byte *)CONCAT44(uStack_154,local_158) != local_c8._0_8_)))) {
                  *(undefined *)(puVar40 + -8) = 0x4077e6;
                  free(__filename);
                  ppbVar24 = local_2c0;
                  *(undefined *)(puVar40 + -8) = 0x4077f9;
                  uVar21 = FUN_0040ead0(0,3,ppbVar24);
                  pcVar42 = "%s: can make relative symbolic links only in current directory";
LAB_004067b2:
                  *(undefined *)(puVar40 + -8) = 0x4067b9;
                  uVar16 = dcgettext(0,pcVar42,5);
                  *(undefined *)(puVar40 + -8) = 0x4067ca;
                  error(0,0,uVar16,uVar21);
                  goto LAB_00406910;
                }
              }
            }
            *(undefined *)(puVar40 + -8) = 0x405f0d;
            free(__filename);
          }
          ppbVar24 = local_2c0;
          uVar47 = *(undefined *)((long)param_6 + 0x16);
          *(undefined *)(puVar40 + -8) = 0x405f26;
          iVar9 = FUN_00409fd0(param_1,0xffffff9c,ppbVar24,uVar47);
          if (iVar9 < 0) {
            *(undefined *)(puVar40 + -8) = 0x407d10;
            uVar21 = FUN_0040e920(1,4,param_1);
            ppbVar24 = local_2c0;
            *(undefined *)(puVar40 + -8) = 0x407d26;
            uVar16 = FUN_0040e920(0,4,ppbVar24);
            *(undefined *)(puVar40 + -8) = 0x407d3a;
            uVar17 = dcgettext(0,"cannot create symbolic link %s to %s",5);
            *(undefined *)(puVar40 + -8) = 0x407d42;
            piVar15 = __errno_location();
            iVar9 = *piVar15;
            *(undefined *)(puVar40 + -8) = 0x407d56;
            error(0,iVar9,uVar17,uVar16,uVar21);
            goto LAB_00406910;
          }
          local_329 = 0;
          local_2c8._0_1_ = 0;
          local_2e8 = (byte **)((ulong)local_2e8 & 0xffffffffffffff00 | (ulong)local_2f0 & 0xff);
LAB_00405f45:
          ppbVar24 = local_2c0;
          bVar48 = local_2cc != 0x4000;
          if ((((byte)local_2d8 == '\0') && (*(char *)((long)param_6 + 0x14) != '\x01')) &&
             ((bVar48 && (((ulong)param_6[4] & 0xff000000ff00) != 0)))) {
            uVar47 = *(undefined *)((long)param_6 + 0x25);
            local_2c8 = (int *)((ulong)local_2c8 & 0xffffffffffffff00 | (ulong)(byte)local_2c8);
            *(undefined *)(puVar34 + -8) = 0x405f95;
            cVar4 = FUN_00405620(ppbVar24,uVar47,0,param_6);
            if ((cVar4 == '\0') && (puVar37 = puVar34, *(char *)((long)param_6 + 0x26) != '\0'))
            goto LAB_00406910;
          }
          ppbVar24 = local_2c0;
          if (((char)uVar21 != '\0') && (param_6[7] != (byte *)0x0)) {
            local_2c8 = (int *)((ulong)local_2c8 & 0xffffffffffffff00 | (ulong)(byte)local_2c8);
            *(undefined *)(puVar34 + -8) = 0x405fda;
            iVar9 = __lxstat(1,(char *)ppbVar24,(stat *)local_c8);
            ppbVar24 = local_2c0;
            if (iVar9 == 0) {
              pbVar25 = param_6[7];
              *(undefined *)(puVar34 + -8) = 0x405ffd;
              FUN_0040ae60(pbVar25,ppbVar24,local_c8);
            }
          }
          ppbVar24 = local_2c0;
          if (((*(char *)((long)param_6 + 0x17) != '\0') && (bVar48)) || ((byte)local_2c8 != 0))
          goto LAB_00406700;
          if (*(char *)((long)param_6 + 0x1f) == '\0') {
LAB_004060e0:
            if ((char)local_2f0 != '\0') goto LAB_00406700;
          }
          else {
            local_c8._0_8_ = (byte *)local_278.st_atim.tv_sec;
            local_c8._8_8_ = (byte *)local_278.st_atim.tv_nsec;
            local_c8._16_8_ = (byte *)local_278.st_mtim.tv_sec;
            stack0xffffffffffffff50 = (byte *)local_278.st_mtim.tv_nsec;
            if ((char)local_2f0 != '\0') {
              *(undefined *)(puVar34 + -8) = 0x406084;
              iVar9 = FUN_00410ab0();
              if (iVar9 != 0) {
                *(undefined *)(puVar34 + -8) = 0x40608d;
                piVar15 = __errno_location();
                if (*piVar15 != 0x26) goto LAB_00406092;
              }
              goto LAB_004060e0;
            }
            *(undefined *)(puVar34 + -8) = 0x407725;
            iVar9 = FUN_00410aa0(ppbVar24,local_c8);
            if (iVar9 != 0) {
LAB_00406092:
              ppbVar24 = local_2c0;
              *(undefined *)(puVar34 + -8) = 0x4060a3;
              uVar16 = FUN_0040ea00(4,ppbVar24);
              *(undefined *)(puVar34 + -8) = 0x4060b7;
              uVar17 = dcgettext(0,"preserving times for %s",5);
              *(undefined *)(puVar34 + -8) = 0x4060bf;
              piVar15 = __errno_location();
              iVar9 = *piVar15;
              *(undefined *)(puVar34 + -8) = 0x4060d0;
              error(0,iVar9,uVar17,uVar16);
              if (*(char *)((long)param_6 + 0x24) != '\0') {
                return 0;
              }
              goto LAB_004060e0;
            }
          }
          ppbVar24 = local_2c0;
          psVar22 = local_2e0;
          if ((*(char *)((long)param_6 + 0x1d) != '\0') &&
             ((((byte)local_2d8 != '\0' || (local_278.st_uid != local_1e8.st_uid)) ||
              (local_278.st_gid != local_1e8.st_gid)))) {
            uVar21 = (ulong)local_2d8 & 0xff;
            *(undefined *)(puVar34 + -8) = 0x406139;
            iVar9 = FUN_00405770(param_6,ppbVar24,0xffffffff,psVar22,uVar21,&local_1e8);
            if (iVar9 == -1) {
              return 0;
            }
            uVar10 = local_2d0 & 0xfffff1ff;
            if (iVar9 != 0) {
              uVar10 = local_2d0;
            }
            local_2d0 = uVar10;
          }
          ppbVar24 = local_2c0;
          uVar10 = local_2d0;
          if (((ulong)param_6[3] & 0xff0000000000ff) != 0) {
            *(undefined *)(puVar34 + -8) = 0x407bbd;
            iVar9 = FUN_0040a0d0(param_1,0xffffffff,ppbVar24,0xffffffff,uVar10);
            if (iVar9 != 0) goto LAB_004061fb;
            goto LAB_00406700;
          }
          if (*(char *)((long)param_6 + 0x2b) != '\0') {
            uVar10 = *(uint *)(param_6 + 2);
LAB_00407e41:
            ppbVar24 = local_2c0;
            *(undefined *)(puVar34 + -8) = 0x407e52;
            iVar9 = FUN_0040a160(ppbVar24,0xffffffff,uVar10);
            if (iVar9 != 0) {
              return uVar13;
            }
            return (uint)(byte)local_2e8;
          }
          if (*(char *)(param_6 + 4) != '\0') {
            *(undefined *)(puVar34 + -8) = 0x407faa;
            uVar10 = FUN_00405960();
            uVar10 = ~uVar10 & 0x1ff;
            goto LAB_00407e41;
          }
          if ((uint)local_310 == 0) {
LAB_00406190:
            if (local_329 == 0) goto LAB_00406700;
          }
          else {
            *(undefined *)(puVar34 + -8) = 0x4066bc;
            uVar10 = FUN_00405960();
            ppbVar24 = local_2c0;
            local_310 = (stat *)((ulong)local_310 & 0xffffffff00000000 |
                                (ulong)((uint)local_310 & ~uVar10));
            if (((uint)local_310 & ~uVar10) == 0) goto LAB_00406190;
            if (local_329 != 1) {
              if ((byte)local_2d8 != '\0') {
                *(undefined *)(puVar34 + -8) = 0x408b5a;
                iVar9 = __lxstat(1,(char *)ppbVar24,&local_1e8);
                param_1 = local_2c0;
                if (iVar9 != 0) {
LAB_00406237:
                  *(undefined *)(puVar34 + -8) = 0x406244;
                  uVar16 = FUN_0040ea00(4,param_1);
                  *(undefined *)(puVar34 + -8) = 0x406258;
                  uVar17 = dcgettext(0,"cannot stat %s",5);
                  *(undefined *)(puVar34 + -8) = 0x406260;
                  piVar15 = __errno_location();
                  iVar9 = *piVar15;
                  *(undefined *)(puVar34 + -8) = 0x406271;
                  error(0,iVar9,uVar17,uVar16);
                  return 0;
                }
              }
              local_34c = local_1e8.st_mode;
              if (((uint)local_310 & ~local_1e8.st_mode) == 0) goto LAB_00406700;
            }
          }
          ppbVar24 = local_2c0;
          local_310._0_4_ = local_34c | (uint)local_310;
          *(undefined *)(puVar34 + -8) = 0x4061b5;
          iVar9 = chmod((char *)ppbVar24,(uint)local_310);
          ppbVar24 = local_2c0;
          if (iVar9 != 0) {
            *(undefined *)(puVar34 + -8) = 0x4061ce;
            uVar16 = FUN_0040ea00(4,ppbVar24);
            *(undefined *)(puVar34 + -8) = 0x4061e2;
            uVar17 = dcgettext(0,"preserving permissions for %s",5);
            *(undefined *)(puVar34 + -8) = 0x4061ea;
            piVar15 = __errno_location();
            iVar9 = *piVar15;
            *(undefined *)(puVar34 + -8) = 0x4061fb;
            error(0,iVar9,uVar17,uVar16);
LAB_004061fb:
            if (*(char *)((long)param_6 + 0x24) != '\0') {
              return uVar13;
            }
            return (uint)(byte)local_2e8;
          }
LAB_00406700:
          return (uint)(byte)local_2e8;
        }
        local_329 = *(byte *)((long)param_6 + 0x17);
        if (*(byte *)((long)param_6 + 0x17) == 0) {
          puVar36 = puVar40;
          if ((local_2cc == 0x8000) ||
             ((local_2cc != 0xa000 & *(byte *)((long)param_6 + 0x14)) != 0)) {
            iVar9 = *(int *)((long)param_6 + 4);
            local_320 = (byte **)((ulong)local_320 & 0xffffffff00000000 | (ulong)local_278.st_mode);
            local_318 = (stat *)((ulong)local_318 & 0xffffffffffffff00 |
                                (ulong)*(byte *)((long)param_6 + 0x23));
            *(undefined *)(puVar40 + -8) = 0x407277;
            uVar11 = FUN_0040ae10(param_1,(ulong)(iVar9 == 2) << 0x11);
            local_2c8 = (int *)((ulong)local_2c8 & 0xffffffff00000000 | (ulong)uVar11);
            if (-1 < (int)uVar11) {
              *(undefined *)(puVar40 + -8) = 0x40729c;
              iVar9 = __fxstat(1,uVar11,(stat *)&local_158);
              ppbVar24 = local_2c0;
              if (iVar9 == 0) {
                if (((byte *)local_278.st_ino != (byte *)CONCAT44(uStack_14c,uStack_150)) ||
                   ((byte *)local_278.st_dev != (byte *)CONCAT44(uStack_154,local_158))) {
                  *(undefined *)(puVar40 + -8) = 0x407e1c;
                  pcVar42 = (char *)FUN_0040ea00(4,param_1);
                  *(undefined *)(puVar40 + -8) = 0x407e30;
                  uVar16 = dcgettext(0,"skipping file %s, as it was replaced while being copied",5);
                  iVar9 = 0;
                  goto LAB_00407430;
                }
                local_35c = uVar10 & 0x1ff;
                if ((byte)local_2d8 != '\0') {
LAB_004083d3:
                  local_350 = (uint)local_310;
LAB_00407380:
                  ppbVar24 = local_2c0;
                  uVar10 = ~local_350 & local_35c;
                  local_2e8 = (byte **)((ulong)local_2e8 & 0xffffffff00000000 | (ulong)uVar10);
                  *(undefined *)(puVar40 + -8) = 0x4073ae;
                  uVar10 = FUN_0040ae10(ppbVar24,0xc1,uVar10);
                  local_2f0 = (byte **)((ulong)local_2f0 & 0xffffffff00000000 | (ulong)uVar10);
                  *(undefined *)(puVar40 + -8) = 0x4073b9;
                  local_300 = (stat *)__errno_location();
                  ppbVar24 = local_2c0;
                  iVar9 = *(int *)&local_300->st_dev;
                  bVar5 = iVar9 == 0x11 & (byte)((ulong)local_2f0 >> 0x18) >> 7;
                  local_328 = (stat *)((ulong)local_328 & 0xffffffffffffff00 | (ulong)bVar5);
                  if (bVar5 == 0) {
LAB_00408a88:
                    bVar5 = iVar9 == 0x15 & (byte)((ulong)local_2f0 >> 0x18) >> 7;
                    uVar31 = (ulong)local_2d8 & 0xffffffffffffff00;
                    local_2d8 = (stat *)(uVar31 | bVar5);
                    if (bVar5 == 0) {
                      local_2d8._1_7_ = (undefined)(uVar31 >> 8);
                      local_2d8 = (stat *)CONCAT71(local_2d8._1_7_,1);
                      if (-1 < (int)local_2f0) {
LAB_0040860d:
                        local_328 = (stat *)local_c8;
                        *(undefined *)(puVar40 + -8) = 0x40862e;
                        uVar10 = __fxstat(1,(int)local_2f0,(stat *)local_c8);
                        ppbVar24 = local_2c0;
                        local_300 = (stat *)((ulong)local_300 & 0xffffffff00000000 | (ulong)uVar10);
                        if (uVar10 != 0) {
                          *(undefined *)(puVar40 + -8) = 0x408d06;
                          local_2e8 = (byte **)FUN_0040ea00(4,ppbVar24);
                          *(undefined *)(puVar40 + -8) = 0x408d1e;
                          uVar17 = dcgettext(0,"cannot fstat %s",5);
                          *(undefined *)(puVar40 + -8) = 0x408d26;
                          piVar15 = __errno_location();
                          uVar16 = local_2e8;
                          iVar9 = *piVar15;
                          *(undefined *)(puVar40 + -8) = 0x408d3b;
                          error(0,iVar9,uVar17,uVar16);
                          local_300._0_1_ = 0;
                          local_2e8 = (byte **)0x0;
                          goto LAB_00408940;
                        }
                        if ((byte)local_318 == '\0') {
LAB_00408af0:
                          local_2e8 = (byte **)0x0;
                          goto LAB_0040887f;
                        }
                        if (*(int *)((long)param_6 + 0x34) != 0) {
                          uVar31 = (ulong)local_2c8 & 0xffffffff;
                          *(undefined *)(puVar40 + -8) = 0x4092e8;
                          iVar9 = ioctl((int)local_2f0,0x40049409,uVar31);
                          if (iVar9 == 0) goto LAB_00408af0;
                          if (*(int *)((long)param_6 + 0x34) == 2) {
                            *(undefined *)(puVar40 + -8) = 0x40930d;
                            local_300 = (stat *)FUN_0040e920(1,4,param_1);
                            ppbVar24 = local_2c0;
                            *(undefined *)(puVar40 + -8) = 0x409327;
                            uVar17 = FUN_0040e920(0,4,ppbVar24);
                            *(undefined *)(puVar40 + -8) = 0x40933b;
                            local_2e8 = (byte **)dcgettext(0,"failed to clone %s from %s",5);
                            *(undefined *)(puVar40 + -8) = 0x409347;
                            piVar15 = __errno_location();
                            uVar16 = local_2e8;
                            iVar9 = *piVar15;
                            *(undefined *)(puVar40 + -8) = 0x409363;
                            error(0,iVar9,uVar16,uVar17);
                            local_300._0_1_ = 0;
                            local_2e8 = (byte **)0x0;
                            goto LAB_00408940;
                          }
                        }
                        *(undefined *)(puVar40 + -8) = 0x408659;
                        iVar9 = getpagesize();
                        uVar31 = (ulong)iVar9;
                        local_348 = ppbStack_90;
                        local_338 = ppbStack_90;
                        if ((byte **)0x1ffffffffffe0000 < ppbStack_90 + -0x4000) {
                          local_338 = (byte **)0x20000;
                          local_348 = (byte **)0x200;
                          if ((long)ppbStack_90 - 1U < 0x2000000000000000) {
                            local_348 = ppbStack_90;
                          }
                        }
                        *(undefined *)(puVar40 + -8) = 0x4086ce;
                        posix_fadvise((int)local_2c8,0,0,2);
                        ppbVar24 = local_338;
                        if ((_Stack_140 & 0xf000) == 0x8000) {
                          local_300 = (stat *)((ulong)local_300 & 0xffffffff00000000 |
                                              (ulong)(CONCAT44(uStack_114,local_118) <
                                                     CONCAT44(uStack_124,local_128) / 0x200));
                        }
                        local_2e8 = (byte **)(uVar31 - 1);
                        if ((local_c8._24_4_ & 0xf000) == 0x8000) {
                          if (*(int *)((long)param_6 + 0xc) != 3) {
                            if ((*(int *)((long)param_6 + 0xc) == 2) &&
                               (((ulong)local_300 & 1) != 0)) {
                              lVar29 = (long)local_338 + uVar31;
                              *(undefined *)(puVar40 + -8) = 0x409293;
                              local_2e8 = (byte **)FUN_004112e0(lVar29);
                              local_358 = (long)(char *)((long)local_2e8 + (uVar31 - 1)) -
                                          (ulong)(char *)((long)local_2e8 + (uVar31 - 1)) % uVar31;
                              goto LAB_004092b4;
                            }
                            goto LAB_0040872b;
                          }
                          lVar29 = (long)local_338 + uVar31;
                          *(undefined *)(puVar40 + -8) = 0x40949d;
                          local_2e8 = (byte **)FUN_004112e0(lVar29);
                          uVar32 = (ulong)(char *)((long)local_2e8 + (uVar31 - 1)) % uVar31;
                          local_358 = (long)(char *)((long)local_2e8 + (uVar31 - 1)) - uVar32;
                          if ((int)local_300 != 0) {
LAB_004092b4:
                            local_330 = *(uint *)((long)param_6 + 0xc);
                            local_32b = (byte)local_318;
                            goto LAB_00408dc9;
                          }
                          bVar48 = *(int *)((long)param_6 + 0xc) == 3;
                          local_300 = (stat *)local_2a8;
LAB_00408827:
                          *(ulong *)(puVar40 + -8) = uVar32;
                          ppbVar3 = local_338;
                          ppbVar24 = local_348;
                          lVar29 = local_358;
                          *(char **)(puVar40 + -0x10) = &local_2b0;
                          *(stat **)(puVar40 + -0x18) = local_300;
                          uVar31 = (ulong)local_2f0 & 0xffffffff;
                          uVar32 = (ulong)local_2c8 & 0xffffffff;
                          *(undefined *)(puVar40 + -0x20) = 0xffffffffffffffff;
                          *(byte ***)(puVar40 + -0x28) = local_2c0;
                          *(byte ***)(puVar40 + -0x30) = param_1;
                          *(undefined *)(puVar40 + -0x38) = 0x408866;
                          cVar4 = FUN_00405120(uVar32,uVar31,lVar29,ppbVar3,ppbVar24,bVar48);
                          pbVar25 = local_2a8._0_8_;
                          if (cVar4 == '\0') goto LAB_00408c2e;
                          if (local_2b0 != '\0') {
                            *(undefined *)(puVar40 + -8) = 0x4094fc;
                            iVar9 = ftruncate((int)local_2f0,(__off_t)pbVar25);
                            if (iVar9 < 0) {
LAB_00409504:
                              ppbVar24 = local_2c0;
                              *(undefined *)(puVar40 + -8) = 0x409515;
                              local_300 = (stat *)FUN_0040ea00(4,ppbVar24);
                              pcVar42 = "failed to extend %s";
                              goto LAB_00409101;
                            }
                          }
LAB_0040887f:
                          ppbVar24 = local_2c0;
                          if (*(char *)((long)param_6 + 0x1f) != '\0') {
                            uVar31 = (ulong)local_2f0 & 0xffffffff;
                            local_2a8._0_8_ = (byte *)local_278.st_atim.tv_sec;
                            local_2a8._8_8_ = (byte *)local_278.st_atim.tv_nsec;
                            local_2a8._16_8_ = (byte *)local_278.st_mtim.tv_sec;
                            local_2a8._24_8_ = (byte *)local_278.st_mtim.tv_nsec;
                            *(undefined *)(puVar40 + -8) = 0x408bd5;
                            iVar9 = FUN_00410660(uVar31,ppbVar24,local_2a8);
                            ppbVar24 = local_2c0;
                            if (iVar9 != 0) {
                              *(undefined *)(puVar40 + -8) = 0x408bee;
                              local_300 = (stat *)FUN_0040ea00(4,ppbVar24);
                              *(undefined *)(puVar40 + -8) = 0x408c06;
                              uVar16 = dcgettext(0,"preserving times for %s",5);
                              *(undefined *)(puVar40 + -8) = 0x408c0e;
                              piVar15 = __errno_location();
                              psVar22 = local_300;
                              iVar9 = *piVar15;
                              *(undefined *)(puVar40 + -8) = 0x408c23;
                              error(0,iVar9,uVar16,psVar22);
                              if (*(char *)((long)param_6 + 0x24) != '\0') goto LAB_00408c2e;
                            }
                          }
                          ppbVar24 = local_2c0;
                          psVar46 = local_2e0;
                          psVar22 = local_328;
                          if ((*(char *)((long)param_6 + 0x1d) != '\0') &&
                             ((local_278.st_uid != _Stack_ac ||
                              (local_278.st_gid != (__gid_t)local_a8)))) {
                            uVar32 = (ulong)local_2d8 & 0xff;
                            uVar31 = (ulong)local_2f0 & 0xffffffff;
                            *(undefined *)(puVar40 + -8) = 0x4088d8;
                            iVar9 = FUN_00405770(param_6,ppbVar24,uVar31,psVar46,uVar32,psVar22);
                            if (iVar9 == -1) goto LAB_00408c2e;
                            if (iVar9 == 0) {
                              local_320 = (byte **)((ulong)local_320 & 0xfffffffffffff1ff);
                            }
                          }
                          if ((*(char *)((long)param_6 + 0x27) != '\0') &&
                             (((ulong)stack0xffffffffffffff50 & 0x80) == 0)) {
                            *(undefined *)(puVar40 + -8) = 0x4091e4;
                            _Var14 = geteuid();
                            ppbVar24 = local_2c0;
                            if (_Var14 != 0) {
                              uVar31 = (ulong)local_2f0 & 0xffffffff;
                              *(undefined *)(puVar40 + -8) = 0x409203;
                              iVar9 = FUN_00404d10(uVar31,ppbVar24,0x180);
                              ppbVar24 = local_2c0;
                              if (iVar9 == 0) {
                                uVar31 = (ulong)local_2f0 & 0xffffffff;
                                uVar10 = ~local_350 & local_35c;
                                *(undefined *)(puVar40 + -8) = 0x40922b;
                                FUN_00404d10(uVar31,ppbVar24,uVar10);
                              }
                            }
                          }
                          ppbVar24 = local_2c0;
                          if (((ulong)param_6[3] & 0xff0000000000ff) == 0) {
                            if (*(char *)((long)param_6 + 0x2b) == '\0') {
                              if (*(char *)(param_6 + 4) == '\0') {
                                local_300._0_1_ = 1;
                                if (local_350 != 0) {
                                  local_300 = (stat *)CONCAT71(local_300._1_7_,1);
                                  *(undefined *)(puVar40 + -8) = 0x409612;
                                  uVar11 = FUN_00405960();
                                  ppbVar24 = local_2c0;
                                  uVar10 = local_35c;
                                  if ((local_350 & ~uVar11) != 0) {
                                    uVar31 = (ulong)local_2f0 & 0xffffffff;
                                    *(undefined *)(puVar40 + -8) = 0x409640;
                                    iVar9 = FUN_00404d10(uVar31,ppbVar24,uVar10);
                                    ppbVar24 = local_2c0;
                                    if (iVar9 != 0) {
                                      *(undefined *)(puVar40 + -8) = 0x409661;
                                      local_300 = (stat *)FUN_0040ea00(4,ppbVar24);
                                      *(undefined *)(puVar40 + -8) = 0x409679;
                                      uVar16 = dcgettext(0,"preserving permissions for %s",5);
                                      *(undefined *)(puVar40 + -8) = 0x409681;
                                      piVar15 = __errno_location();
                                      psVar22 = local_300;
                                      iVar9 = *piVar15;
                                      *(undefined *)(puVar40 + -8) = 0x409696;
                                      error(0,iVar9,uVar16,psVar22);
                                      goto LAB_00408d7e;
                                    }
                                  }
                                }
                                goto LAB_00408940;
                              }
                              *(undefined *)(puVar40 + -8) = 0x4096a0;
                              uVar10 = FUN_00405960();
                              uVar10 = ~uVar10 & 0x1b6;
                            }
                            else {
                              uVar10 = *(uint *)(param_6 + 2);
                            }
                            ppbVar24 = local_2c0;
                            uVar31 = (ulong)local_2f0 & 0xffffffff;
                            *(undefined *)(puVar40 + -8) = 0x409159;
                            iVar9 = FUN_0040a160(ppbVar24,uVar31,uVar10);
                            local_300._0_1_ = iVar9 == 0;
                          }
                          else {
                            uVar45 = (ulong)local_320 & 0xffffffff;
                            uVar31 = (ulong)local_2f0 & 0xffffffff;
                            uVar32 = (ulong)local_2c8 & 0xffffffff;
                            *(undefined *)(puVar40 + -8) = 0x408d70;
                            iVar9 = FUN_0040a0d0(param_1,uVar32,ppbVar24,uVar31,uVar45);
                            local_300._0_1_ = 1;
                            if (iVar9 != 0) {
LAB_00408d7e:
                              local_300._0_1_ = *(byte *)((long)param_6 + 0x24) ^ 1;
                            }
                          }
                        }
                        else {
LAB_0040872b:
                          lVar29 = CONCAT44(uStack_11c,uStack_120);
                          local_340 = (byte **)((ulong)local_340 & 0xffffffff00000000 |
                                               (ulong)_Stack_140 & 0xffffffff0000f000);
                          local_2e8 = (byte **)(0x7fffffffffffffff - uVar31);
                          if (0x1ffffffffffe0000 < lVar29 - 0x20000U) {
                            lVar29 = 0x20000;
                          }
                          *(undefined *)(puVar40 + -8) = 0x408779;
                          ppbVar24 = (byte **)FUN_0040a980(lVar29,ppbVar24,
                                                           (byte **)(0x7fffffffffffffff - uVar31));
                          if (((int)local_340 == 0x8000) &&
                             ((byte **)CONCAT44(uStack_124,local_128) < local_338)) {
                            local_338 = (byte **)((long)(byte **)CONCAT44(uStack_124,local_128) + 1)
                            ;
                          }
                          uVar32 = (long)ppbVar24 + -1 + (long)local_338;
                          local_338 = (byte **)(uVar32 - uVar32 % (ulong)ppbVar24);
                          if ((local_338 == (byte **)0x0) || (local_2e8 < local_338)) {
                            local_338 = ppbVar24;
                          }
                          lVar29 = uVar31 + (long)local_338;
                          *(undefined *)(puVar40 + -8) = 0x4087d4;
                          local_2e8 = (byte **)FUN_004112e0(lVar29);
                          uVar32 = (ulong)(char *)((long)local_2e8 + (uVar31 - 1)) % uVar31;
                          local_358 = (long)(char *)((long)local_2e8 + (uVar31 - 1)) - uVar32;
                          if ((int)local_300 == 0) {
                            bVar48 = *(int *)((long)param_6 + 0xc) == 3;
                            local_348 = (byte **)0x0;
                            local_300 = (stat *)local_2a8;
                            goto LAB_00408827;
                          }
                          local_32b = '\0';
                          local_330 = 1;
LAB_00408dc9:
                          uVar21 = (ulong)local_2c8 & 0xffffffff;
                          psVar22 = (stat *)0x0;
                          local_300 = (stat *)local_2a8;
                          local_370 = (stat *)CONCAT44(uStack_124,local_128);
                          *(undefined *)(puVar40 + -8) = 0x408df6;
                          FUN_00409ae0(uVar21,(stat *)local_2a8);
                          psVar2 = local_370;
                          psVar46 = (stat *)0x0;
                          local_360 = param_7;
                          local_368 = param_6;
                          local_32a = (byte)uVar13;
                          uVar21 = (ulong)local_318 & 0xff;
                          local_340 = param_1;
                          local_318 = (stat *)0x0;
                          do {
                            psVar30 = local_300;
                            *(undefined *)(puVar40 + -8) = 0x408e3b;
                            cVar4 = FUN_00409b10(psVar30);
                            psVar30 = local_318;
                            param_1 = local_340;
                            param_6 = local_368;
                            if (cVar4 == '\0') {
                              local_318 = (stat *)((ulong)local_318 & 0xffffffffffffff00 |
                                                  uVar21 & 0xff);
                              uVar13 = (uint)local_32a;
                              uVar21 = (ulong)local_360;
                              if (local_287 != '\0') goto LAB_0040905a;
                              if (local_288 == '\0') {
                                *(undefined *)(puVar40 + -8) = 0x409768;
                                local_300 = (stat *)FUN_0040ead0(0,3,param_1);
                                pcVar42 = "%s: failed to get extents info";
                                goto LAB_00409101;
                              }
                              bVar48 = *(int *)((long)local_368 + 0xc) == 3;
                              ppbVar24 = (byte **)0x0;
                              if (local_32b != '\0') {
                                ppbVar24 = local_348;
                              }
                              local_348 = ppbVar24;
                              uVar32 = extraout_RDX_00;
                              goto LAB_00408827;
                            }
                            if (local_2a8._24_8_ != (byte *)0x0) {
                              pbVar25 = (byte *)0x0;
                              psVar33 = psVar46;
                              psVar43 = psVar22;
                              do {
                                ppsVar1 = (stat **)((long)local_280 + (long)pbVar25 * 0x18);
                                psVar22 = *ppsVar1;
                                psVar46 = ppsVar1[1];
                                if ((long)psVar2 <
                                    (long)(((stat *)(((stat *)(psVar46->__unused + -0xf))->__unused
                                                    + -0xf))->__unused + 0xfffffffffffffff1) +
                                    (long)((stat *)(((stat *)(((stat *)(psVar22->__unused + -0xf))->
                                                              __unused + -0xf))->__unused + -0xf))->
                                          __unused + 0xffffffffffffff88U) {
                                  if ((long)psVar2 < (long)psVar22) {
                                    psVar22 = psVar2;
                                  }
                                  psVar46 = (stat *)((long)psVar2 - (long)psVar22);
                                }
                                uVar21 = 0;
                                psVar30 = (stat *)((long)psVar22 + (-(long)psVar33 - (long)psVar43))
                                ;
                                if (psVar30 != (stat *)0x0) {
                                  local_318 = psVar30;
                                  *(undefined *)(puVar40 + -8) = 0x408f68;
                                  _Var26 = lseek((int)local_2c8,(__off_t)psVar22,0);
                                  ppbVar24 = local_2c0;
                                  psVar30 = local_318;
                                  bVar8 = local_32a;
                                  param_1 = local_340;
                                  uVar10 = local_360;
                                  param_6 = local_368;
                                  if (_Var26 < 0) {
                                    *(undefined *)(puVar40 + -8) = 0x409590;
                                    local_300 = (stat *)FUN_0040ea00(4,param_1);
                                    pcVar42 = "cannot lseek %s";
                                  }
                                  else {
                                    if (local_330 != 1) {
                                      bVar48 = local_330 == 3;
                                      uVar21 = (ulong)local_2f0 & 0xffffffff;
                                      *(undefined *)(puVar40 + -8) = 0x408f9d;
                                      uVar13 = FUN_00405060(uVar21,ppbVar24,bVar48);
                                      uVar21 = (ulong)uVar13;
                                      param_6 = local_368;
                                      param_1 = local_340;
                                      uVar10 = local_360;
                                      bVar8 = local_32a;
                                      if ((char)uVar13 != '\0') goto LAB_00408e70;
                                      goto LAB_00408fc4;
                                    }
                                    uVar31 = (ulong)local_2f0 & 0xffffffff;
                                    *(undefined *)(puVar40 + -8) = 0x408fe3;
                                    cVar4 = FUN_00404c20(uVar31,psVar30);
                                    ppbVar24 = local_2c0;
                                    bVar8 = local_32a;
                                    param_1 = local_340;
                                    uVar10 = local_360;
                                    param_6 = local_368;
                                    if (cVar4 != '\0') {
                                      ppbVar24 = (byte **)0x0;
                                      goto LAB_00408e85;
                                    }
                                    *(undefined *)(puVar40 + -8) = 0x409743;
                                    local_300 = (stat *)FUN_0040ead0(0,3,ppbVar24);
                                    pcVar42 = "%s: write failed";
                                  }
                                  *(undefined *)(puVar40 + -8) = 0x4095a8;
                                  uVar16 = dcgettext(0,pcVar42,5);
                                  *(undefined *)(puVar40 + -8) = 0x4095b0;
                                  piVar15 = __errno_location();
                                  psVar22 = local_300;
                                  iVar9 = *piVar15;
                                  *(undefined *)(puVar40 + -8) = 0x4095c5;
                                  error(0,iVar9,uVar16,psVar22);
LAB_00408fc4:
                                  pvVar20 = local_280;
                                  uVar13 = (uint)bVar8;
                                  uVar21 = (ulong)uVar10;
                                  *(undefined *)(puVar40 + -8) = 0x408fd0;
                                  free(pvVar20);
                                  goto LAB_00408c2e;
                                }
LAB_00408e70:
                                ppbVar24 = (byte **)0x0;
                                if (local_330 == 3) {
                                  ppbVar24 = local_348;
                                }
LAB_00408e85:
                                ppbVar3 = local_338;
                                lVar29 = local_358;
                                *(byte **)(puVar40 + -0x10) = &local_2b1;
                                uVar31 = (ulong)local_2f0 & 0xffffffff;
                                *(char **)(puVar40 + -0x18) = &local_2b0;
                                uVar32 = (ulong)local_2c8 & 0xffffffff;
                                *(stat **)(puVar40 + -0x20) = psVar46;
                                *(byte ***)(puVar40 + -0x28) = local_2c0;
                                *(byte ***)(puVar40 + -0x30) = local_340;
                                *(undefined *)(puVar40 + -0x38) = 0x408ecc;
                                cVar4 = FUN_00405120(uVar32,uVar31,lVar29,ppbVar3,ppbVar24,1);
                                param_6 = local_368;
                                param_1 = local_340;
                                uVar10 = local_360;
                                bVar8 = local_32a;
                                if (cVar4 == '\0') goto LAB_00408fc4;
                                psVar30 = (stat *)((long)psVar22->__unused +
                                                  CONCAT71(uStack_2af,local_2b0) + -0x78);
                                if (CONCAT71(uStack_2af,local_2b0) != 0) {
                                  uVar21 = (ulong)local_2b1;
                                }
                                if (psVar2 == psVar30) {
                                  local_287 = '\x01';
                                  break;
                                }
                                pbVar25 = (byte *)(ulong)((int)pbVar25 + 1);
                                psVar33 = psVar46;
                                psVar43 = psVar22;
                              } while (pbVar25 < local_2a8._24_8_);
                            }
                            pvVar20 = local_280;
                            local_318 = psVar30;
                            *(undefined *)(puVar40 + -8) = 0x40900d;
                            free(pvVar20);
                            psVar30 = local_318;
                            local_280 = (void *)0x0;
                            local_2a8._24_8_ = (byte *)0x0;
                          } while (local_287 == '\0');
                          local_318 = (stat *)((ulong)local_318 & 0xffffffffffffff00 | uVar21 & 0xff
                                              );
                          uVar13 = (uint)local_32a;
                          uVar21 = (ulong)local_360;
LAB_0040905a:
                          param_1 = local_340;
                          param_6 = local_368;
                          psVar22 = local_370;
                          if (((long)local_370 <= (long)psVar30) && ((byte)local_318 == '\0'))
                          goto LAB_0040887f;
                          if (local_330 == 1) {
                            uVar31 = (ulong)local_2f0 & 0xffffffff;
                            lVar29 = (long)local_370 - (long)psVar30;
                            *(undefined *)(puVar40 + -8) = 0x409793;
                            cVar4 = FUN_00404c20(uVar31,lVar29);
                            if (cVar4 == '\0') goto LAB_00409504;
                            goto LAB_0040887f;
                          }
                          local_300 = psVar30;
                          *(undefined *)(puVar40 + -8) = 0x40909a;
                          iVar9 = ftruncate((int)local_2f0,(__off_t)psVar22);
                          psVar46 = local_300;
                          if (iVar9 != 0) goto LAB_00409504;
                          if ((local_330 != 3) || ((long)psVar22 <= (long)psVar30))
                          goto LAB_0040887f;
                          uVar31 = (ulong)local_2f0 & 0xffffffff;
                          lVar29 = (long)local_370 - (long)local_300;
                          *(undefined *)(puVar40 + -8) = 0x4090d7;
                          iVar9 = FUN_00404cd0(uVar31,psVar46,lVar29);
                          ppbVar24 = local_2c0;
                          if (-1 < iVar9) goto LAB_0040887f;
                          *(undefined *)(puVar40 + -8) = 0x4090f0;
                          local_300 = (stat *)FUN_0040ea00(4,ppbVar24);
                          pcVar42 = "error deallocating %s";
LAB_00409101:
                          *(undefined *)(puVar40 + -8) = 0x409108;
                          uVar16 = dcgettext(0,pcVar42,5);
                          *(undefined *)(puVar40 + -8) = 0x409110;
                          piVar15 = __errno_location();
                          psVar22 = local_300;
                          iVar9 = *piVar15;
                          *(undefined *)(puVar40 + -8) = 0x409125;
                          error(0,iVar9,uVar16,psVar22);
LAB_00408c2e:
                          local_300._0_1_ = 0;
                        }
LAB_00408940:
                        local_300 = (stat *)((ulong)local_300 & 0xffffffffffffff00 |
                                            (ulong)(byte)local_300);
                        *(undefined *)(puVar40 + -8) = 0x408952;
                        iVar9 = close((int)local_2f0);
                        ppbVar24 = local_2c0;
                        bVar5 = (byte)local_300;
                        if (iVar9 < 0) {
                          *(undefined *)(puVar40 + -8) = 0x408973;
                          local_2f0 = (byte **)FUN_0040ea00(4,ppbVar24);
                          *(undefined *)(puVar40 + -8) = 0x40898b;
                          uVar16 = dcgettext(0,"failed to close %s",5);
                          *(undefined *)(puVar40 + -8) = 0x408993;
                          piVar15 = __errno_location();
                          ppbVar24 = local_2f0;
                          iVar9 = *piVar15;
                          *(undefined *)(puVar40 + -8) = 0x4089a8;
                          error(0,iVar9,uVar16,ppbVar24);
                          bVar5 = 0;
                        }
                        goto LAB_00407447;
                      }
                    }
                    else {
                      iVar9 = 0x15;
                      if (*(byte *)local_2c0 != 0) {
                        uVar31 = 0xffffffffffffffff;
                        ppbVar24 = local_2c0;
                        do {
                          if (uVar31 == 0) break;
                          uVar31 = uVar31 - 1;
                          bVar5 = *(byte *)ppbVar24;
                          ppbVar24 = (byte **)((long)ppbVar24 + (ulong)bVar8 * -2 + 1);
                        } while (bVar5 != 0);
                        iVar9 = (*(byte *)((long)local_2c0 + (~uVar31 - 2)) != 0x2f) + 0x14;
                      }
                    }
                  }
                  else {
                    iVar9 = 0x11;
                    local_2d8 = (stat *)((ulong)local_2d8 & 0xffffffffffffff00 |
                                        (ulong)*(byte *)(param_6 + 3));
                    if (*(byte *)(param_6 + 3) == 0) {
                      *(undefined *)(puVar40 + -8) = 0x408a3b;
                      iVar12 = __lxstat(1,(char *)ppbVar24,(stat *)local_c8);
                      ppbVar24 = local_2c0;
                      if ((iVar12 == 0) && ((local_c8._24_4_ & 0xf000) == 0xa000)) {
                        if (*(char *)(param_6 + 6) == '\0') {
                          local_2f0 = (byte **)((ulong)local_2f0 & 0xffffffffffffff00);
                          *(undefined *)(puVar40 + -8) = 0x4097c2;
                          uVar16 = FUN_0040ea00(4,ppbVar24);
                          *(undefined *)(puVar40 + -8) = 0x4097d6;
                          uVar17 = dcgettext(0,"not writing through dangling symlink %s",5);
                          *(undefined *)(puVar40 + -8) = 0x4097e7;
                          error(0,0,uVar17,uVar16);
                          local_2e8 = (byte **)0x0;
                          bVar5 = (byte)local_2f0;
                          local_2d8 = (stat *)((ulong)local_2d8 & 0xffffffffffffff00 |
                                              (ulong)local_328 & 0xff);
                          goto LAB_00407447;
                        }
                        uVar31 = (ulong)local_2e8 & 0xffffffff;
                        *(undefined *)(puVar40 + -8) = 0x408a78;
                        uVar10 = FUN_0040ae10(ppbVar24,0x41,uVar31);
                        local_2f0 = (byte **)((ulong)local_2f0 & 0xffffffff00000000 | (ulong)uVar10)
                        ;
                        iVar9 = *(int *)&local_300->st_dev;
                      }
                      goto LAB_00408a88;
                    }
                  }
LAB_004073fa:
                  ppbVar24 = local_2c0;
                  *(undefined *)(puVar40 + -8) = 0x40740b;
                  local_2e8 = (byte **)FUN_0040ea00(4,ppbVar24);
                  *(undefined *)(puVar40 + -8) = 0x407423;
                  uVar16 = dcgettext(0,"cannot create regular file %s",5);
                  pcVar42 = (char *)local_2e8;
                  goto LAB_00407430;
                }
                cVar4 = *(char *)((long)param_6 + 0x23);
                *(undefined *)(puVar40 + -8) = 0x40730b;
                uVar10 = FUN_0040ae10(ppbVar24,(-(uint)(cVar4 == '\0') & 0xfffffe00) + 0x201);
                local_2f0 = (byte **)((ulong)local_2f0 & 0xffffffff00000000 | (ulong)uVar10);
                if (((ulong)param_6[4] & 0xff000000ff00) != 0) {
                  if ((int)uVar10 < 0) goto LAB_0040732f;
                  uVar47 = *(undefined *)((long)param_6 + 0x25);
                  *(undefined *)(puVar40 + -8) = 0x408c48;
                  local_300._0_1_ = FUN_00405620(ppbVar24,uVar47,0,param_6);
                  if ((byte)local_300 != 0) {
LAB_00408603:
                    local_350 = 0;
                    goto LAB_0040860d;
                  }
                  pcVar42 = (char *)((ulong)local_2d8 & 0xffffffffffffff00);
                  local_2d8 = (stat *)((ulong)pcVar42 | (ulong)*(byte *)((long)param_6 + 0x26));
                  if (*(byte *)((long)param_6 + 0x26) == 0) goto LAB_00408603;
                  local_2d8 = (stat *)pcVar42;
                  local_2e8 = (byte **)0x0;
                  goto LAB_00408940;
                }
                if (-1 < (int)uVar10) goto LAB_00408603;
LAB_0040732f:
                *(undefined *)(puVar40 + -8) = 0x407334;
                piVar15 = __errno_location();
                ppbVar24 = local_2c0;
                if (*(char *)((long)param_6 + 0x16) == '\0') {
                  iVar9 = *piVar15;
                  if ((iVar9 == 2) && (*(char *)(param_6 + 3) == '\0')) {
                    local_350 = 0;
                    goto LAB_00407380;
                  }
                  local_2d8 = (stat *)((ulong)local_2d8 & 0xffffffffffffff00);
                  goto LAB_004073fa;
                }
                *(undefined *)(puVar40 + -8) = 0x40734e;
                iVar9 = unlink((char *)ppbVar24);
                ppbVar24 = local_2c0;
                if (iVar9 != 0) {
                  *(undefined *)(puVar40 + -8) = 0x4095db;
                  local_2e8 = (byte **)FUN_0040ea00(4,ppbVar24);
                  *(undefined *)(puVar40 + -8) = 0x4095f3;
                  uVar16 = dcgettext(0,"cannot remove %s",5);
                  iVar9 = *piVar15;
                  pcVar42 = (char *)local_2e8;
                  goto LAB_00407430;
                }
                if (*(char *)((long)param_6 + 0x2e) != '\0') {
                  *(undefined *)(puVar40 + -8) = 0x40953c;
                  uVar16 = FUN_0040ea00(4,ppbVar24);
                  *(undefined *)(puVar40 + -8) = 0x409550;
                  uVar17 = dcgettext(0,"removed %s\n",5);
                  *(undefined *)(puVar40 + -8) = 0x409562;
                  __printf_chk(1,uVar17,uVar16);
                }
                ppbVar24 = local_2c0;
                uVar10 = local_35c;
                local_2d8 = (stat *)((ulong)local_2d8 & 0xffffffffffffff00 |
                                    (ulong)*(byte *)((long)param_6 + 0x21));
                local_350 = (uint)local_310;
                if (*(byte *)((long)param_6 + 0x21) == 0) goto LAB_00407380;
                *(undefined *)(puVar40 + -8) = 0x409472;
                bVar5 = FUN_00405550(param_1,ppbVar24,uVar10,1,param_6);
                if (bVar5 != 0) goto LAB_004083d3;
                local_2e8 = (byte **)0x0;
              }
              else {
                *(undefined *)(puVar40 + -8) = 0x40826c;
                local_2e8 = (byte **)FUN_0040ea00(4,param_1);
                *(undefined *)(puVar40 + -8) = 0x408284;
                uVar16 = dcgettext(0,"cannot fstat %s",5);
                *(undefined *)(puVar40 + -8) = 0x40828c;
                piVar15 = __errno_location();
                iVar9 = *piVar15;
                pcVar42 = (char *)local_2e8;
LAB_00407430:
                *(undefined *)(puVar40 + -8) = 0x407439;
                error(0,iVar9,uVar16,pcVar42);
                bVar5 = 0;
                local_2e8 = (byte **)0x0;
              }
LAB_00407447:
              local_2f0 = (byte **)((ulong)local_2f0 & 0xffffffffffffff00 | (ulong)bVar5);
              *(undefined *)(puVar40 + -8) = 0x407459;
              iVar9 = close((int)local_2c8);
              pcVar42 = (char *)local_2e8;
              if (iVar9 < 0) {
                *(undefined *)(puVar40 + -8) = 0x408188;
                uVar21 = FUN_0040ea00(4,param_1);
                *(undefined *)(puVar40 + -8) = 0x40819c;
                uVar16 = dcgettext(0,"failed to close %s",5);
                *(undefined *)(puVar40 + -8) = 0x4081a4;
                piVar15 = __errno_location();
                iVar9 = *piVar15;
                *(undefined *)(puVar40 + -8) = 0x4081b5;
                error(0,iVar9,uVar16,uVar21);
                pcVar42 = (char *)local_2e8;
                *(undefined *)(puVar40 + -8) = 0x4081c1;
                free(pcVar42);
                goto LAB_00406910;
              }
              local_2c8 = (int *)((ulong)local_2c8 & 0xffffffffffffff00 | (ulong)local_2f0 & 0xff);
              *(undefined *)(puVar40 + -8) = 0x40747c;
              free(pcVar42);
              local_2f0 = (byte **)((ulong)local_2f0 & 0xffffffffffffff00);
              local_2e8 = (byte **)((ulong)local_2e8 & 0xffffffffffffff00 | (ulong)local_2c8 & 0xff)
              ;
              bVar8 = (byte)local_2c8;
              goto joined_r0x00406f1f;
            }
            *(undefined *)(puVar40 + -8) = 0x407f93;
            uVar21 = FUN_0040ea00(4,param_1);
            pcVar42 = "cannot open %s for reading";
          }
          else {
            local_2c8 = (int *)((ulong)local_2c8 & 0xffffffffffffff00);
            if (local_2cc == 0x1000) {
              local_c8._0_8_ = (byte *)0x0;
              uVar10 = ~(uint)local_310 & local_2d0;
              *(undefined *)(puVar40 + -8) = 0x408038;
              iVar9 = __xmknod(0,(char *)ppbVar24,uVar10,(__dev_t *)local_c8);
              ppbVar24 = local_2c0;
              if (iVar9 != 0) {
                *(undefined *)(puVar40 + -8) = 0x408481;
                iVar9 = mkfifo((char *)ppbVar24,uVar10 & 0xffffefff);
                ppbVar24 = local_2c0;
                if (iVar9 != 0) {
                  *(undefined *)(puVar40 + -8) = 0x4084a2;
                  uVar21 = FUN_0040ea00(4,ppbVar24);
                  pcVar42 = "cannot create fifo %s";
                  goto LAB_004068f0;
                }
              }
              local_2f0 = (byte **)((ulong)local_2f0 & 0xffffffffffffff00 | (ulong)(byte)local_2c8);
              local_329 = (byte)local_2c8;
              local_2e8 = (byte **)CONCAT71(local_2e8._1_7_,1);
              goto LAB_00405f45;
            }
            bVar48 = (local_2d0 & 0xb000) == 0x2000;
            local_2e8 = (byte **)((ulong)local_2e8 & 0xffffffffffffff00 |
                                 (ulong)(bVar48 || local_2cc == 0xc000));
            if (bVar48 || local_2cc == 0xc000) {
              local_c8._0_8_ = (byte *)local_278.st_rdev;
              uVar10 = ~(uint)local_310 & local_2d0;
              *(undefined *)(puVar40 + -8) = 0x4068ae;
              iVar9 = __xmknod(0,(char *)ppbVar24,uVar10,(__dev_t *)local_c8);
              ppbVar24 = local_2c0;
              local_2f0 = (byte **)((ulong)local_2f0 & 0xffffffffffffff00 | (ulong)local_2c8 & 0xff)
              ;
              local_329 = (byte)local_2c8;
              if (iVar9 == 0) goto LAB_00405f45;
              *(undefined *)(puVar40 + -8) = 0x4068dd;
              uVar21 = FUN_0040ea00(4,ppbVar24);
              pcVar42 = "cannot create special file %s";
            }
            else {
              if (local_2cc != 0xa000) {
                *(undefined *)(puVar40 + -8) = 0x4080c5;
                uVar21 = FUN_0040ea00(4,param_1);
                pcVar42 = "%s has unknown file type";
                goto LAB_004067b2;
              }
              *(undefined *)(puVar40 + -8) = 0x407d7a;
              pcVar42 = (char *)FUN_0040a1c0(param_1,local_278.st_size);
              ppbVar24 = local_2c0;
              if (pcVar42 != (char *)0x0) {
                *(undefined *)(puVar40 + -8) = 0x407d9f;
                iVar9 = FUN_00409fd0(pcVar42,0xffffff9c,ppbVar24);
                if (iVar9 < 0) {
                  *(undefined *)(puVar40 + -8) = 0x4084b9;
                  puVar23 = (uint *)__errno_location();
                  ppbVar24 = local_2c0;
                  local_2c8 = (int *)((ulong)local_2c8 & 0xffffffff00000000 | (ulong)*puVar23);
                  if (*puVar23 != 0) {
                    if (((*(char *)((long)param_6 + 0x2d) == '\x01') && ((byte)local_2d8 == '\0'))
                       && ((local_1e8.st_mode & 0xf000) == 0xa000)) {
                      uVar31 = 0xffffffffffffffff;
                      pcVar27 = pcVar42;
                      do {
                        if (uVar31 == 0) break;
                        uVar31 = uVar31 - 1;
                        cVar4 = *pcVar27;
                        pcVar27 = pcVar27 + (ulong)bVar8 * -2 + 1;
                      } while (cVar4 != '\0');
                      if (local_1e8.st_size == ~uVar31 - 1) {
                        *(undefined *)(puVar40 + -8) = 0x40941e;
                        pcVar27 = (char *)FUN_0040a1c0(ppbVar24);
                        if (pcVar27 != (char *)0x0) {
                          local_2e8 = (byte **)pcVar27;
                          *(undefined *)(puVar40 + -8) = 0x409439;
                          iVar9 = strcmp(pcVar27,pcVar42);
                          pcVar27 = (char *)local_2e8;
                          if (iVar9 == 0) {
                            *(undefined *)(puVar40 + -8) = 0x409450;
                            free(pcVar27);
                            goto LAB_00407da7;
                          }
                          *(undefined *)(puVar40 + -8) = 0x4097a5;
                          free(pcVar27);
                        }
                      }
                    }
                    *(undefined *)(puVar40 + -8) = 0x4084e5;
                    free(pcVar42);
                    ppbVar24 = local_2c0;
                    *(undefined *)(puVar40 + -8) = 0x4084f6;
                    uVar16 = FUN_0040ea00(4,ppbVar24);
                    *(undefined *)(puVar40 + -8) = 0x40850a;
                    uVar17 = dcgettext(0,"cannot create symbolic link %s",5);
                    uVar31 = (ulong)local_2c8 & 0xffffffff;
                    *(undefined *)(puVar40 + -8) = 0x40851f;
                    error(0,uVar31,uVar17,uVar16);
                    goto LAB_00406910;
                  }
                }
LAB_00407da7:
                *(undefined *)(puVar40 + -8) = 0x407daf;
                free(pcVar42);
                __group = local_278.st_gid;
                _Var14 = local_278.st_uid;
                ppbVar24 = local_2c0;
                local_329 = *(byte *)((long)param_6 + 0x25);
                if (*(byte *)((long)param_6 + 0x25) != 0) goto LAB_00406e0d;
                local_2c8._0_1_ = *(byte *)((long)param_6 + 0x1d);
                if ((byte)local_2c8 == 0) {
                  local_329 = (byte)local_2c8;
                  local_2f0 = (byte **)CONCAT71(local_2f0._1_7_,1);
                  local_2e8 = (byte **)CONCAT71(local_2e8._1_7_,1);
                }
                else {
                  local_2c8 = (int *)((ulong)local_2c8 & 0xffffffffffffff00 | (ulong)(byte)local_2c8
                                     );
                  *(undefined *)(puVar40 + -8) = 0x4089cf;
                  iVar9 = lchown((char *)ppbVar24,_Var14,__group);
                  if (iVar9 == 0) {
                    local_2f0 = (byte **)((ulong)local_2f0 & 0xffffffffffffff00 |
                                         (ulong)local_2c8 & 0xff);
                    local_2e8 = (byte **)((ulong)local_2e8 & 0xffffffffffffff00 |
                                         (ulong)local_2c8 & 0xff);
                    local_2c8._0_1_ = 0;
                  }
                  else {
                    *(undefined *)(puVar40 + -8) = 0x4089e7;
                    bVar8 = FUN_00405740(param_6);
                    local_2f0 = (byte **)((ulong)local_2f0 & 0xffffffffffffff00 | (ulong)bVar8);
                    if (bVar8 == 0) {
                      *(undefined *)(puVar40 + -8) = 0x409387;
                      uVar16 = dcgettext(0,"failed to preserve ownership for %s",5);
                      *(undefined *)(puVar40 + -8) = 0x40938f;
                      piVar15 = __errno_location();
                      ppbVar24 = local_2c0;
                      iVar9 = *piVar15;
                      *(undefined *)(puVar40 + -8) = 0x4093a4;
                      error(0,iVar9,uVar16,ppbVar24);
                      local_329 = *(byte *)((long)param_6 + 0x24);
                      if (*(byte *)((long)param_6 + 0x24) != 0) goto LAB_00406910;
                      local_2f0 = (byte **)((ulong)local_2f0 & 0xffffffffffffff00 |
                                           (ulong)local_2c8 & 0xff);
                      local_2e8 = (byte **)((ulong)local_2e8 & 0xffffffffffffff00 |
                                           (ulong)local_2c8 & 0xff);
                      local_2c8._0_1_ = 0;
                    }
                    else {
                      local_2c8._0_1_ = 0;
                      local_2e8 = (byte **)((ulong)local_2e8 & 0xffffffffffffff00 | (ulong)bVar8);
                    }
                  }
                }
                goto LAB_00405f45;
              }
              *(undefined *)(puVar40 + -8) = 0x408b0d;
              uVar21 = FUN_0040ea00(4,param_1);
              pcVar42 = "cannot read symbolic link %s";
            }
          }
LAB_004068f0:
          *(undefined *)(puVar36 + -8) = 0x4068f7;
          uVar16 = dcgettext(0,pcVar42,5);
          *(undefined *)(puVar36 + -8) = 0x4068ff;
          piVar15 = __errno_location();
          iVar9 = *piVar15;
          *(undefined *)(puVar36 + -8) = 0x406910;
          error(0,iVar9,uVar16,uVar21);
          puVar37 = puVar36;
        }
        else {
          uVar47 = *(undefined *)((long)param_6 + 0x16);
          *(undefined *)(puVar40 + -8) = 0x406f0d;
          bVar8 = FUN_00404f50(param_1,ppbVar24,uVar47,0);
          local_2c8._0_1_ = 0;
          local_329 = 0;
          local_2e8 = (byte **)((ulong)local_2e8 & 0xffffffffffffff00 | (ulong)bVar8);
joined_r0x00406f1f:
          if (bVar8 != 0) goto LAB_00405f45;
        }
      }
      else {
        *(undefined *)(puVar40 + -8) = 0x40672e;
        cVar4 = FUN_00405550(param_1,ppbVar24,uVar11);
        if (cVar4 == '\0') {
          return uVar13;
        }
        local_310 = (stat *)((ulong)local_310 & 0xffffffff00000000 |
                            (ulong)uVar10 & 0xffffffff0000003f);
        ppbVar24 = local_2f0;
        if (local_2cc != 0x4000) goto LAB_00405ec1;
joined_r0x0040676f:
        for (; uVar16 = local_2c0, ppbVar24 != (byte **)0x0; ppbVar24 = (byte **)*ppbVar24) {
          if ((ppbVar24[1] == (byte *)local_278.st_ino) && (ppbVar24[2] == (byte *)local_278.st_dev)
             ) {
            *(undefined *)(puVar40 + -8) = 0x4067a5;
            uVar21 = FUN_0040ea00(4,param_1);
            pcVar42 = "cannot copy cyclic symbolic link %s";
            goto LAB_004067b2;
          }
        }
        puVar34 = puVar40 + -0x20;
        puVar36 = puVar40 + -0x20;
        puVar37 = puVar40 + -0x20;
        local_320 = (byte **)((ulong)(puVar40 + -0x11) & 0xfffffffffffffff0);
        *local_320 = (byte *)local_2f0;
        local_320[1] = (byte *)local_278.st_ino;
        local_320[2] = (byte *)local_278.st_dev;
        if (((byte)local_2d8 != '\0') || ((local_1e8.st_mode & 0xf000) != 0x4000)) {
          *(undefined *)(puVar40 + -0x28) = 0x4069a4;
          iVar9 = mkdir((char *)uVar16,~(uint)local_310 & uVar10 & 0xfff);
          ppbVar24 = local_2c0;
          if (iVar9 == 0) {
            *(undefined *)(puVar40 + -0x28) = 0x4069c4;
            iVar9 = __lxstat(1,(char *)ppbVar24,&local_1e8);
            uVar10 = local_1e8.st_mode;
            ppbVar24 = local_2c0;
            if (iVar9 == 0) {
              local_329 = 0;
              if ((local_1e8.st_mode & 0x1c0) != 0x1c0) {
                uVar11 = local_1e8.st_mode | 0x1c0;
                *(undefined *)(puVar40 + -0x28) = 0x4069fe;
                iVar9 = chmod((char *)ppbVar24,uVar11);
                ppbVar24 = local_2c0;
                local_34c = uVar10;
                local_329 = 1;
                if (iVar9 != 0) {
                  *(undefined *)(puVar40 + -0x28) = 0x4083c1;
                  uVar21 = FUN_0040ea00(4,ppbVar24);
                  pcVar42 = "setting permissions for %s";
                  puVar36 = puVar40 + -0x20;
                  goto LAB_004068f0;
                }
              }
              ppbVar24 = local_2c0;
              if (*param_8 == 0) {
                *(undefined *)(puVar40 + -0x28) = 0x407e91;
                FUN_00409a10(ppbVar24,local_1e8.st_ino,local_1e8.st_dev);
                *param_8 = 1;
              }
              ppbVar24 = local_2c0;
              if (*(char *)((long)param_6 + 0x2e) != '\0') {
                if (*(char *)(param_6 + 3) == '\0') {
                  *(undefined *)(puVar40 + -0x28) = 0x408000;
                  FUN_00404d70(param_1,ppbVar24,0);
                }
                else {
                  *(undefined *)(puVar40 + -0x28) = 0x406a44;
                  uVar16 = FUN_0040ea00(4,ppbVar24);
                  *(undefined *)(puVar40 + -0x28) = 0x406a58;
                  uVar17 = dcgettext(0,"created directory %s\n",5);
                  *(undefined *)(puVar40 + -0x28) = 0x406a6a;
                  __printf_chk(1,uVar17,uVar16);
                }
              }
              goto LAB_00406a70;
            }
            *(undefined *)(puVar40 + -0x28) = 0x407f74;
            uVar21 = FUN_0040ea00(4,ppbVar24);
            pcVar42 = "cannot stat %s";
            puVar36 = puVar40 + -0x20;
          }
          else {
            *(undefined *)(puVar40 + -0x28) = 0x4078e9;
            uVar21 = FUN_0040ea00(4,ppbVar24);
            pcVar42 = "cannot create directory %s";
          }
          goto LAB_004068f0;
        }
        if (((ulong)param_6[4] & 0xff000000ff00) == 0) {
LAB_00407b84:
          local_329 = 0;
          local_310 = (stat *)((ulong)local_310 & 0xffffffff00000000);
LAB_00406a70:
          bVar8 = local_300 != (stat *)0x0 & *(byte *)((long)param_6 + 0x1c);
          local_2e8 = (byte **)((ulong)local_2e8 & 0xffffffffffffff00 | (ulong)bVar8);
          if (bVar8 == 0) {
LAB_00406a8f:
            local_c8._0_8_ = *param_6;
            local_c8._8_8_ = param_6[1];
            local_c8._16_8_ = param_6[2];
            stack0xffffffffffffff50 = param_6[3];
            local_a8 = param_6[4];
            pbStack_a0 = param_6[5];
            local_98 = param_6[6];
            ppbStack_90 = (byte **)param_6[7];
            local_88 = param_6[8];
            *(undefined *)(puVar40 + -0x28) = 0x406ad8;
            ppbVar24 = (byte **)FUN_0040f480(param_1,2);
            local_338 = ppbVar24;
            if (ppbVar24 == (byte **)0x0) {
              *(undefined *)(puVar40 + -0x28) = 0x40836f;
              local_2c8 = (int *)FUN_0040ea00(4,param_1);
              *(undefined *)(puVar40 + -0x28) = 0x408387;
              uVar16 = dcgettext(0,"cannot access %s",5);
              *(undefined *)(puVar40 + -0x28) = 0x40838f;
              piVar15 = __errno_location();
              uVar31 = (ulong)local_2c8;
              iVar9 = *piVar15;
              *(undefined *)(puVar40 + -0x28) = 0x4083a4;
              error(0,iVar9,uVar16,uVar31);
              local_2e8 = (byte **)((ulong)local_2e8 & 0xffffffffffffff00);
            }
            else {
              if (*(int *)((long)param_6 + 4) == 3) {
                local_c8._0_8_ = (byte *)CONCAT44(2,local_c8._0_4_);
              }
              if (*(char *)ppbVar24 == '\0') {
                bVar8 = 0;
                local_2e8 = (byte **)CONCAT71(local_2e8._1_7_,1);
              }
              else {
                local_340 = (byte **)((ulong)local_340 & 0xffffffffffffff00 | (ulong)(byte)uVar13);
                local_318 = (stat *)&local_158;
                bVar8 = 0;
                local_328 = (stat *)local_c8;
                local_348 = param_6;
                local_2e8 = (byte **)CONCAT71(local_2e8._1_7_,1);
                local_300 = (stat *)local_2a8;
                local_2f0 = param_1;
                local_330 = param_7;
                do {
                  ppbVar3 = local_2f0;
                  *(undefined *)(puVar40 + -0x28) = 0x406ba0;
                  pvVar20 = (void *)FUN_0040b0c0(ppbVar3,ppbVar24,0);
                  ppbVar3 = local_2c0;
                  *(undefined *)(puVar40 + -0x28) = 0x406bb4;
                  __ptr = (void *)FUN_0040b0c0(ppbVar3,ppbVar24,0);
                  psVar46 = local_2e0;
                  ppbVar3 = local_320;
                  psVar22 = local_328;
                  uVar21 = (ulong)local_2c8 & 0xffffffff;
                  bVar5 = *param_8;
                  *(undefined *)(puVar40 + -0x28) = 0;
                  *(stat **)(puVar40 + -0x30) = local_300;
                  *(stat **)(puVar40 + -0x38) = local_318;
                  *(undefined *)(puVar40 + -0x40) = 0;
                  local_158 = local_158 & 0xffffff00 | (uint)bVar5;
                  *(undefined *)(puVar40 + -0x48) = 0x406bfa;
                  bVar5 = FUN_00405990(pvVar20,__ptr,uVar21,psVar46,ppbVar3,psVar22);
                  local_2e8 = (byte **)((ulong)local_2e8 & 0xffffffffffffff00 |
                                       (ulong)((byte)local_2e8 & bVar5));
                  *param_9 = *param_9 | local_2a8[0];
                  *(undefined *)(puVar40 + -0x28) = 0x406c17;
                  free(__ptr);
                  *(undefined *)(puVar40 + -0x28) = 0x406c1f;
                  free(pvVar20);
                  if (local_2a8[0] != '\0') break;
                  bVar8 = bVar8 | (byte)local_158;
                  *(undefined *)(puVar40 + -0x28) = 0x406b7f;
                  sVar19 = strlen((char *)ppbVar24);
                  ppbVar24 = (byte **)((long)ppbVar24 + sVar19 + 1);
                } while (*(char *)ppbVar24 != '\0');
                uVar13 = (uint)(byte)local_340;
                uVar21 = (ulong)local_330;
                param_6 = local_348;
                param_1 = local_2f0;
              }
              ppbVar24 = local_338;
              *(undefined *)(puVar40 + -0x28) = 0x406c57;
              free(ppbVar24);
              *param_8 = bVar8;
            }
            local_2f0 = (byte **)((ulong)local_2f0 & 0xffffffffffffff00);
            local_2c8._0_1_ = 0;
            puVar34 = puVar40 + -0x20;
          }
          else {
            local_2f0 = (byte **)((ulong)local_2f0 & 0xffffffffffffff00);
            local_2c8._0_1_ = 0;
            if ((byte *)local_300->st_dev == (byte *)local_278.st_dev) goto LAB_00406a8f;
          }
          goto LAB_00405f45;
        }
        uVar47 = *(undefined *)((long)param_6 + 0x25);
        *(undefined *)(puVar40 + -0x28) = 0x4080ed;
        cVar4 = FUN_00405620(uVar16,uVar47,0);
        if ((cVar4 != '\0') || (*(char *)((long)param_6 + 0x26) == '\0')) goto LAB_00407b84;
      }
LAB_00406910:
      puVar40 = puVar37;
      if (*(char *)((long)param_6 + 0x25) == '\0') {
        if (local_2f8 == (stat *)0x0) {
          *(undefined *)(puVar37 + -8) = 0x40693c;
          FUN_00409980(local_278.st_ino,local_278.st_dev);
        }
LAB_004063b3:
        ppbVar24 = local_2c0;
        psVar22 = local_308;
        if (local_308 != (stat *)0x0) {
          *(undefined *)(puVar40 + -8) = 0x4063cf;
          iVar9 = rename((char *)psVar22,(char *)ppbVar24);
          ppbVar24 = local_2c0;
          if (iVar9 == 0) {
            if (*(char *)((long)param_6 + 0x2e) != '\0') {
              *(undefined *)(puVar40 + -8) = 0x4063f8;
              uVar16 = FUN_0040e920(1,4,ppbVar24);
              psVar22 = local_308;
              *(undefined *)(puVar40 + -8) = 0x40640e;
              uVar17 = FUN_0040e920(0,4,psVar22);
              *(undefined *)(puVar40 + -8) = 0x406422;
              uVar18 = dcgettext(0,"%s -> %s (unbackup)\n",5);
              *(undefined *)(puVar40 + -8) = 0x406437;
              __printf_chk(1,uVar18,uVar17,uVar16);
            }
          }
          else {
            *(undefined *)(puVar40 + -8) = 0x4071d1;
            uVar16 = FUN_0040ea00(4,ppbVar24);
            *(undefined *)(puVar40 + -8) = 0x4071e5;
            uVar17 = dcgettext(0,"cannot un-backup %s",5);
            *(undefined *)(puVar40 + -8) = 0x4071ed;
            piVar15 = __errno_location();
            iVar9 = *piVar15;
            *(undefined *)(puVar40 + -8) = 0x4071fe;
            error(0,iVar9,uVar17,uVar16);
          }
        }
        return uVar13;
      }
    }
LAB_00406e0d:
    *(undefined *)(puVar40 + -8) = 0x406e12;
    FUN_00404d30();
    uVar16 = extraout_RDX;
    puVar41 = puVar40;
  }
  *(undefined *)(puVar41 + -8) = 0x406e24;
  uVar16 = dcgettext(0,"-r not specified; omitting directory %s",uVar16);
  puVar38 = puVar41;
LAB_00406cd9:
  *(undefined *)(puVar38 + -8) = 0x406ced;
  error(0,0,uVar16,uVar21);
  return 0;
}


void FUN_00409810(undefined param_1,undefined param_2,undefined param_3,uint *param_4,
                 undefined param_5,undefined param_6)

{
  undefined local_9 [9];
  
  if (param_4 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("co != NULL","src/copy.c",0xb60,"valid_options");
  }
  if (3 < *param_4) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("VALID_BACKUP_TYPE (co->backup_type)","src/copy.c",0xb61,"valid_options");
  }
  if (2 < param_4[3] - 1) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("VALID_SPARSE_MODE (co->sparse_mode)","src/copy.c",0xb62,"valid_options");
  }
  if (param_4[0xd] < 3) {
    if ((*(char *)((long)param_4 + 0x17) != '\0') && (*(char *)(param_4 + 0xb) != '\0')) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("!(co->hard_link && co->symbolic_link)","src/copy.c",0xb64,"valid_options");
    }
    if ((param_4[3] != 2) && (param_4[0xd] == 2)) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("! (co->reflink_mode == REFLINK_ALWAYS && co->sparse_mode != SPARSE_AUTO)",
                    "src/copy.c",0xb67,"valid_options");
    }
    local_9[0] = 0;
    DAT_00621988 = param_2;
    DAT_00621990 = param_1;
    FUN_00405990(param_1,param_2,param_3,0,0,param_4,1,local_9,param_5,param_6);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("VALID_REFLINK_MODE (co->reflink_mode)","src/copy.c",0xb63,"valid_options");
}


ulong FUN_00409930(ulong *param_1,ulong param_2)

{
  return *param_1 % param_2;
}


ulong FUN_00409940(long *param_1,long *param_2)

{
  if (*param_1 != *param_2) {
    return 0;
  }
  return param_2[1] & 0xffffffffffffff00U | (ulong)(param_1[1] == param_2[1]);
}


void FUN_00409960(void *param_1)

{
  free(*(void **)((long)param_1 + 0x10));
  free(param_1);
  return;
}


void FUN_00409980(undefined param_1,undefined param_2)

{
  void *__ptr;
  undefined local_28;
  undefined local_20;
  undefined local_18;
  
  local_18 = 0;
  local_28 = param_1;
  local_20 = param_2;
  __ptr = (void *)FUN_0040c330(DAT_00621998,&local_28);
  if (__ptr != (void *)0x0) {
    free(*(void **)((long)__ptr + 0x10));
    free(__ptr);
  }
  return;
}


undefined FUN_004099d0(undefined param_1,undefined param_2)

{
  long lVar1;
  undefined local_28;
  undefined local_20;
  
  local_28 = param_1;
  local_20 = param_2;
  lVar1 = FUN_0040b8e0(DAT_00621998,&local_28);
  if (lVar1 != 0) {
    return *(undefined *)(lVar1 + 0x10);
  }
  return 0;
}


undefined FUN_00409a10(undefined param_1,undefined param_2,undefined param_3)

{
  undefined *__ptr;
  undefined uVar1;
  undefined *puVar2;
  undefined uVar3;
  
  __ptr = (undefined *)FUN_004112e0(0x18);
  uVar1 = FUN_00411510(param_1);
  uVar3 = DAT_00621998;
  *__ptr = param_2;
  __ptr[2] = uVar1;
  __ptr[1] = param_3;
  puVar2 = (undefined *)FUN_0040c2f0(uVar3,__ptr);
  if (puVar2 != (undefined *)0x0) {
    uVar3 = 0;
    if (__ptr != puVar2) {
      free((void *)__ptr[2]);
      free(__ptr);
      uVar3 = puVar2[2];
    }
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00411530();
}


void FUN_00409a90(void)

{
  DAT_00621998 = FUN_0040bb50(0x67,0,FUN_00409930,FUN_00409940,FUN_00409960);
  if (DAT_00621998 != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00411530();
}


void FUN_00409ad0(void)

{
  FUN_0040bd90(DAT_00621998);
  return;
}


void FUN_00409ae0(undefined param_1,undefined *param_2)

{
  *param_2 = param_1;
  *(undefined *)(param_2 + 10) = 0;
  *(undefined *)(param_2 + 2) = 0;
  *(undefined *)(param_2 + 6) = 0;
  *(undefined *)(param_2 + 8) = 0;
  param_2[4] = 1;
  return;
}


bool FUN_00409b10(int *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  byte bVar12;
  ulong local_1038;
  ulong local_1030;
  int local_1028;
  uint local_1024;
  undefined local_1020;
  ulong local_1018 [509];
  
  bVar12 = 0;
  uVar11 = 0;
  puVar7 = *(ulong **)(param_1 + 10);
  local_1038 = *(ulong *)(param_1 + 2);
  do {
    puVar5 = &local_1038;
    for (lVar3 = 0x200; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + (ulong)bVar12 * -2 + 1;
    }
    local_1028 = param_1[4];
    local_1030 = ~local_1038;
    local_1020 = 0x48;
    iVar1 = ioctl(*param_1,0xc020660b,&local_1038);
    if (iVar1 < 0) {
LAB_00409d30:
      if (*(long *)(param_1 + 2) == 0) {
        *(undefined *)(param_1 + 8) = 1;
        return false;
      }
      return false;
    }
    if (local_1024 == 0) {
      *(undefined *)((long)param_1 + 0x21) = 1;
      return *(long *)(param_1 + 2) != 0;
    }
    if (~(ulong)local_1024 < *(ulong *)(param_1 + 6)) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("scan->ei_count <= SIZE_MAX - fiemap->fm_mapped_extents","src/extent-scan.c",
                    0x7e,"extent_scan_read");
    }
    lVar3 = *(long *)(param_1 + 10);
    uVar4 = *(ulong *)(param_1 + 6) + (ulong)local_1024;
    *(ulong *)(param_1 + 6) = uVar4;
    if ((SUB168(ZEXT816(0x18) * ZEXT816(uVar4),0) < 0) ||
       (SUB168(ZEXT816(0x18) * ZEXT816(uVar4) >> 0x40,0) != 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00411530();
    }
    lVar2 = FUN_00411340(lVar3,uVar4 * 0x18);
    *(long *)(param_1 + 10) = lVar2;
    puVar7 = (ulong *)((long)puVar7 + (lVar2 - lVar3));
    if (local_1024 != 0) {
      if (0x7fffffffffffffff - local_1018[2] < local_1018[0]) {
LAB_00409c86:
                    /* WARNING: Subroutine does not return */
        __assert_fail("fm_extents[i].fe_logical <= OFF_T_MAX - fm_extents[i].fe_length",
                      "src/extent-scan.c",0x8d,"extent_scan_read");
      }
      uVar9 = 0;
      uVar4 = local_1018[2];
      puVar5 = local_1018;
      uVar6 = local_1018[0];
      do {
        if (uVar11 == 0) {
          uVar8 = *(ulong *)(param_1 + 2);
          if (uVar6 < uVar8) goto LAB_00409c42;
          uVar10 = *(uint *)(puVar5 + 5);
LAB_00409cae:
          uVar8 = (ulong)uVar11;
          uVar9 = uVar9 + 1;
          uVar11 = uVar11 + 1;
          puVar7 = (ulong *)(*(long *)(param_1 + 10) + uVar8 * 0x18);
          *puVar7 = uVar6;
          puVar7[1] = uVar4;
          *(uint *)(puVar7 + 2) = uVar10;
        }
        else {
          uVar10 = *(uint *)(puVar5 + 5);
          uVar8 = *puVar7 + puVar7[1];
          if ((*(uint *)(puVar7 + 2) == (uVar10 & 0xfffffffe)) && (uVar6 == uVar8)) {
            *(uint *)(puVar7 + 2) = uVar10;
            uVar9 = uVar9 + 1;
            puVar7[1] = uVar4 + puVar7[1];
          }
          else {
            if (uVar8 <= uVar6) goto LAB_00409cae;
LAB_00409c42:
            if (uVar8 - uVar6 < uVar4) goto LAB_00409d30;
            *puVar5 = uVar8;
            puVar5[2] = (uVar6 + uVar4) - uVar8;
          }
        }
        if (local_1024 <= uVar9) break;
        puVar5 = local_1018 + (ulong)uVar9 * 7;
        uVar4 = local_1018[(ulong)uVar9 * 7 + 2];
        uVar6 = *puVar5;
        if (0x7fffffffffffffff - uVar4 < uVar6) goto LAB_00409c86;
      } while( true );
    }
    if ((*(byte *)(puVar7 + 2) & 1) != 0) {
      *(undefined *)((long)param_1 + 0x21) = 1;
LAB_00409d96:
      *(ulong *)(param_1 + 6) = (ulong)uVar11;
      return true;
    }
    if (0x48 < uVar11) {
      if (*(char *)((long)param_1 + 0x21) == '\0') {
        uVar4 = (ulong)(uVar11 - 1);
        *(ulong *)(param_1 + 6) = uVar4;
        *(long *)(param_1 + 2) =
             *(long *)(*(long *)(param_1 + 10) + -0x10 + uVar4 * 0x18) +
             *(long *)(*(long *)(param_1 + 10) + -0x18 + uVar4 * 0x18);
        return true;
      }
      goto LAB_00409d96;
    }
    *(ulong *)(param_1 + 6) = (ulong)uVar11;
    if (*(char *)((long)param_1 + 0x21) != '\0') {
      return true;
    }
    local_1038 = puVar7[1] + *puVar7;
    *(ulong *)(param_1 + 2) = local_1038;
    if (uVar11 == 0x48) {
      return true;
    }
  } while( true );
}


void FUN_00409de0(char *param_1,int *param_2)

{
  linkat(*param_2,*(char **)(param_2 + 2),param_2[4],param_1,param_2[5]);
  return;
}


void * FUN_00409e00(void *param_1,void *param_2)

{
  ulong __size;
  long lVar1;
  undefined *puVar2;
  
  lVar1 = FUN_0040ad40();
  __size = (lVar1 - (long)param_1) + 9;
  if ((0x100 < __size) && (param_2 = malloc(__size), param_2 == (void *)0x0)) {
    return (void *)0x0;
  }
  puVar2 = (undefined *)mempcpy(param_2,param_1,lVar1 - (long)param_1);
  *puVar2 = DAT_00418fa8;
  *(undefined *)(puVar2 + 1) = DAT_00418fb0;
  return param_2;
}


void FUN_00409e70(char *param_1,char **param_2)

{
  symlinkat(*param_2,*(int *)(param_2 + 1),param_1);
  return;
}


int FUN_00409e90(int param_1,char *param_2,int param_3,char *param_4,int param_5,char param_6)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  char *__old;
  int local_158 [2];
  char *local_150;
  int local_148;
  int local_144;
  char local_138 [264];
  
  iVar1 = linkat(param_1,param_2,param_3,param_4,param_5);
  if ((param_6 == '\x01') && (iVar1 != 0)) {
    piVar3 = __errno_location();
    if (*piVar3 == 0x11) {
      __old = (char *)FUN_00409e00(param_4,local_138);
      if (__old == (char *)0x0) {
        iVar1 = -1;
      }
      else {
        local_158[0] = param_1;
        local_150 = param_2;
        local_148 = param_3;
        local_144 = param_5;
        iVar1 = FUN_0040fb10(__old,0,local_158,FUN_00409de0,6);
        if (iVar1 == 0) {
          iVar2 = renameat(param_3,__old,param_3,param_4);
          if (iVar2 != 0) {
            iVar2 = *piVar3;
          }
          unlinkat(param_3,__old,0);
        }
        else {
          iVar2 = *piVar3;
        }
        if (__old != local_138) {
          free(__old);
        }
        iVar1 = 1;
        if (iVar2 != 0) {
          *piVar3 = iVar2;
          iVar1 = -1;
        }
      }
    }
  }
  return iVar1;
}


int FUN_00409fd0(char *param_1,int param_2,char *param_3,char param_4)

{
  int iVar1;
  int *piVar2;
  char *__old;
  char *local_148;
  int local_140;
  char local_138 [264];
  
  iVar1 = symlinkat(param_1,param_2,param_3);
  if (param_4 != '\x01') {
    return iVar1;
  }
  if (iVar1 == 0) {
    return 0;
  }
  piVar2 = __errno_location();
  if (*piVar2 != 0x11) {
    return iVar1;
  }
  __old = (char *)FUN_00409e00(param_3,local_138);
  if (__old != (char *)0x0) {
    local_148 = param_1;
    local_140 = param_2;
    iVar1 = FUN_0040fb10(__old,0,&local_148,FUN_00409e70,6);
    if (iVar1 == 0) {
      iVar1 = renameat(param_2,__old,param_2,param_3);
      if (iVar1 == 0) {
        if (__old == local_138) {
          return 1;
        }
        free(__old);
        return 1;
      }
      iVar1 = *piVar2;
      unlinkat(param_2,__old,0);
    }
    else {
      iVar1 = *piVar2;
    }
    if (__old != local_138) {
      free(__old);
    }
    if (iVar1 == 0) {
      return 1;
    }
    *piVar2 = iVar1;
    return -1;
  }
  return -1;
}


int FUN_0040a0d0(undefined param_1,undefined param_2,undefined param_3)

{
  int iVar1;
  undefined uVar2;
  undefined uVar3;
  int *piVar4;
  
  iVar1 = FUN_0040d070();
  if (iVar1 != -2) {
    if (iVar1 == -1) {
      uVar2 = FUN_0040ec50(param_3);
      uVar3 = dcgettext(0,"preserving permissions for %s",5);
      piVar4 = __errno_location();
      error(0,*piVar4,uVar3,uVar2);
    }
    return iVar1;
  }
  uVar2 = FUN_0040ec50(param_1);
  piVar4 = __errno_location();
  error(0,*piVar4,&DAT_0041aa9b,uVar2);
  return -2;
}


int FUN_0040a160(undefined param_1)

{
  int iVar1;
  undefined uVar2;
  undefined uVar3;
  int *piVar4;
  
  iVar1 = FUN_0040d0b0();
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_0040ec50(param_1);
  uVar3 = dcgettext(0,"setting permissions for %s",5);
  piVar4 = __errno_location();
  error(0,*piVar4,uVar3,uVar2);
  return iVar1;
}


char * FUN_0040a1c0(char *param_1,ulong param_2)

{
  char *__buf;
  ulong uVar1;
  int *piVar2;
  size_t __size;
  
  __size = param_2 + 1;
  if (0x400 < param_2) {
    __size = 0x401;
  }
  do {
    __buf = (char *)malloc(__size);
    while( true ) {
      if (__buf == (char *)0x0) {
        return (char *)0x0;
      }
      uVar1 = readlink(param_1,__buf,__size);
      if (((long)uVar1 < 0) && (piVar2 = __errno_location(), *piVar2 != 0x22)) {
        free(__buf);
        return (char *)0x0;
      }
      if (uVar1 < __size) {
        __buf[uVar1] = '\0';
        return __buf;
      }
      free(__buf);
      if (0x3fffffffffffffff < __size) break;
      __size = __size * 2;
      __buf = (char *)malloc(__size);
    }
    if (0x7ffffffffffffffe < __size) {
      piVar2 = __errno_location();
      *piVar2 = 0xc;
      return (char *)0x0;
    }
    __size = 0x7fffffffffffffff;
  } while( true );
}


void FUN_0040a2b0(char *param_1,long param_2)

{
  undefined uVar1;
  undefined *puVar2;
  ulong uVar3;
  int *piVar4;
  ulong uVar5;
  ulong uVar6;
  
  puVar2 = (undefined *)FUN_0040ad40();
  uVar3 = FUN_0040ada0(puVar2);
  if (0xe < uVar3) {
    uVar1 = *puVar2;
    *puVar2 = 0x2e;
    piVar4 = __errno_location();
    *piVar4 = 0;
    uVar5 = pathconf(param_1,3);
    if ((-1 < (long)uVar5) || (uVar6 = 0xff, *piVar4 == 0)) {
      uVar6 = uVar5;
    }
    *puVar2 = uVar1;
    if (uVar6 < uVar3) {
      param_1 = param_1 + param_2;
      if ((ulong)((long)param_1 - (long)puVar2) < uVar6) {
        uVar6 = ((long)param_1 - (long)puVar2) + 1;
      }
      else {
        param_1 = (char *)((long)puVar2 + (uVar6 - 1));
      }
      *param_1 = '~';
      *(undefined *)((long)puVar2 + uVar6) = 0;
      return;
    }
  }
  return;
}


void FUN_0040a380(char *param_1)

{
  char *pcVar1;
  
  if ((((param_1 != (char *)0x0) ||
       (param_1 = getenv("SIMPLE_BACKUP_SUFFIX"), param_1 != (char *)0x0)) && (*param_1 != '\0')) &&
     (pcVar1 = (char *)FUN_0040ad40(param_1), pcVar1 == param_1)) {
    DAT_006219a0 = param_1;
    return;
  }
  DAT_006219a0 = &DAT_00418fb6;
  return;
}


void * FUN_0040a3e0(void *param_1,int param_2,char param_3)

{
  undefined *puVar1;
  ulong uVar2;
  char cVar3;
  undefined uVar4;
  int iVar5;
  char *pcVar6;
  size_t sVar7;
  long lVar8;
  ulong __n;
  void *pvVar9;
  long lVar10;
  dirent *pdVar11;
  size_t sVar12;
  void *__dest;
  undefined *puVar13;
  int *piVar14;
  DIR *__dirp;
  ulong uVar15;
  byte bVar16;
  long lVar17;
  byte bVar18;
  ulong local_78;
  size_t local_70;
  int local_58;
  
  pcVar6 = (char *)FUN_0040ad40();
  sVar7 = strlen(pcVar6);
  lVar17 = (long)pcVar6 - (long)param_1;
  lVar8 = sVar7 + lVar17;
  if (DAT_006219a0 == (char *)0x0) {
    FUN_0040a380();
  }
  sVar7 = strlen(DAT_006219a0);
  __n = sVar7 + 1;
  uVar15 = 9;
  if (8 < __n) {
    uVar15 = __n;
  }
  sVar7 = uVar15 + lVar8 + 1U;
  pvVar9 = malloc(sVar7);
  if (pvVar9 != (void *)0x0) {
    __dirp = (DIR *)0x0;
    __dest = pvVar9;
    local_58 = param_2;
    do {
      memcpy(__dest,param_1,lVar8 + 1U);
      if (local_58 == 1) {
        memcpy((void *)((long)__dest + lVar8),DAT_006219a0,__n);
      }
      else {
        puVar13 = (undefined *)((long)__dest + lVar17);
        lVar10 = FUN_0040ada0(puVar13);
        if (__dirp == (DIR *)0x0) {
          uVar4 = *puVar13;
          *puVar13 = 0x2e;
          __dirp = (DIR *)FUN_0040abc0(__dest);
          puVar1 = (undefined *)((long)puVar13 + lVar10);
          if (__dirp != (DIR *)0x0) {
            *puVar13 = uVar4;
            *puVar1 = 0x7e317e2e;
            *(undefined *)(puVar1 + 1) = 0;
            goto LAB_0040a4b1;
          }
          piVar14 = __errno_location();
          iVar5 = *piVar14;
          *puVar13 = uVar4;
          bVar18 = (iVar5 == 0xc) + 2;
          *puVar1 = 0x7e317e2e;
          *(undefined *)(puVar1 + 1) = 0;
        }
        else {
          rewinddir(__dirp);
LAB_0040a4b1:
          bVar16 = 2;
          local_78 = 1;
          local_70 = sVar7;
LAB_0040a4d8:
          pdVar11 = readdir(__dirp);
          pvVar9 = __dest;
          bVar18 = bVar16;
          if (pdVar11 != (dirent *)0x0) {
            while( true ) {
              pcVar6 = pdVar11->d_name;
              sVar12 = strlen(pcVar6);
              __dest = pvVar9;
              if (sVar12 < lVar10 + 4U) break;
              iVar5 = memcmp((void *)((long)pvVar9 + lVar17),pcVar6,lVar10 + 2U);
              if (iVar5 != 0) break;
              pcVar6 = pcVar6 + lVar10 + 2U;
              if (8 < (byte)(*pcVar6 - 0x31U)) break;
              bVar18 = *pcVar6 == '9';
              uVar15 = 1;
              cVar3 = pcVar6[1];
              while ((int)cVar3 - 0x30U < 10) {
                uVar15 = uVar15 + 1;
                bVar18 = cVar3 == '9' & bVar18;
                cVar3 = pcVar6[uVar15];
              }
              if (((cVar3 != '~') || (pcVar6[uVar15 + 1] != '\0')) ||
                 ((uVar15 <= local_78 &&
                  ((local_78 != uVar15 ||
                   (iVar5 = memcmp((void *)((long)pvVar9 + lVar8 + 2),pcVar6,local_78), 0 < iVar5)))
                  ))) break;
              local_78 = bVar18 + uVar15;
              uVar2 = lVar8 + 4 + local_78;
              if (local_70 < uVar2) {
                local_70 = uVar2;
                if ((-1 < (long)(uVar2 * 2)) && (-1 < (long)uVar2)) {
                  local_70 = uVar2 * 2;
                }
                __dest = realloc(pvVar9,local_70);
                if (__dest == (void *)0x0) goto LAB_0040a808;
              }
              puVar13 = (undefined *)(lVar8 + (long)__dest);
              *puVar13 = 0x7e2e;
              *(undefined *)(puVar13 + 1) = 0x30;
              pvVar9 = memcpy((void *)((long)puVar13 + (ulong)bVar18 + 2),pcVar6,uVar15 + 2);
              pcVar6 = (char *)((long)pvVar9 + (uVar15 - 1));
              cVar3 = *(char *)((long)pvVar9 + (uVar15 - 1));
              while (cVar3 == '9') {
                *pcVar6 = '0';
                pcVar6 = pcVar6 + -1;
                cVar3 = *pcVar6;
              }
              *pcVar6 = cVar3 + '\x01';
              pdVar11 = readdir(__dirp);
              pvVar9 = __dest;
              bVar16 = bVar18;
              if (pdVar11 == (dirent *)0x0) goto LAB_0040a6b0;
            }
            goto LAB_0040a4d8;
          }
        }
LAB_0040a6b0:
        if (bVar18 == 2) {
          if (local_58 == 2) {
            memcpy((void *)((long)__dest + lVar8),DAT_006219a0,__n);
            local_58 = 1;
          }
        }
        else {
          pvVar9 = __dest;
          if (bVar18 == 3) {
LAB_0040a808:
            free(pvVar9);
            piVar14 = __errno_location();
            *piVar14 = 0xc;
            return (void *)0x0;
          }
          if (bVar18 != 1) goto LAB_0040a6cb;
        }
        FUN_0040a2b0(__dest,lVar8);
      }
LAB_0040a6cb:
      if (param_3 == '\0') goto LAB_0040a878;
      if (__dirp == (DIR *)0x0) {
LAB_0040a750:
        iVar5 = -100;
        lVar17 = 0;
        pvVar9 = __dest;
      }
      else {
        iVar5 = dirfd(__dirp);
        pvVar9 = (void *)((long)__dest + lVar17);
        if (iVar5 < 0) goto LAB_0040a750;
      }
      iVar5 = FUN_0040ec70(0xffffff9c,param_1,iVar5,pvVar9,local_58 != 1);
      if (iVar5 == 0) {
LAB_0040a878:
        if (__dirp == (DIR *)0x0) {
          return __dest;
        }
        closedir(__dirp);
        return __dest;
      }
      piVar14 = __errno_location();
      iVar5 = *piVar14;
    } while (iVar5 == 0x11);
    if (__dirp != (DIR *)0x0) {
      closedir(__dirp);
    }
    pvVar9 = (void *)0x0;
    free(__dest);
    *piVar14 = iVar5;
  }
  return pvVar9;
}


void FUN_0040a8b0(undefined param_1,undefined param_2)

{
  FUN_0040a3e0(param_1,param_2,1);
  return;
}


undefined FUN_0040a8c0(undefined param_1,undefined param_2)

{
  long lVar1;
  
  lVar1 = FUN_00412e60(param_1,param_2,&PTR_DAT_00419040,&DAT_00419020,4,PTR_FUN_0061f4e0);
  return *(undefined *)(&DAT_00419020 + lVar1 * 4);
}


void FUN_0040a8f0(undefined param_1,undefined param_2)

{
  long lVar1;
  
  lVar1 = FUN_0040a3e0(param_1,param_2,0);
  if (lVar1 != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00411530();
}


undefined FUN_0040a910(undefined param_1,char *param_2)

{
  undefined uVar1;
  
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    uVar1 = FUN_0040a8c0();
    return uVar1;
  }
  return 2;
}


undefined FUN_0040a930(char *param_1,char *param_2)

{
  undefined uVar1;
  
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    param_2 = getenv("VERSION_CONTROL");
    if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
      return 2;
    }
    param_1 = "$VERSION_CONTROL";
  }
  uVar1 = FUN_0040a8c0(param_1,param_2);
  return uVar1;
}


ulong FUN_0040a980(ulong param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (param_1 == 0) {
    param_1 = 0x2000;
    if (param_2 != 0) {
      param_1 = param_2;
    }
  }
  else {
    uVar3 = param_1;
    uVar1 = param_2;
    if (param_2 != 0) {
      do {
        uVar2 = uVar1;
        uVar1 = uVar3 % uVar2;
        uVar3 = uVar2;
      } while (uVar1 != 0);
      uVar3 = param_2 * (param_1 / uVar2);
      if ((uVar3 < param_3 || uVar3 - param_3 == 0) && (uVar3 / param_2 == param_1 / uVar2)) {
        return uVar3;
      }
    }
  }
  if (param_1 <= param_3) {
    param_3 = param_1;
  }
  return param_3;
}


void FUN_0040a9f0(undefined param_1)

{
  DAT_006219a8 = param_1;
  return;
}


void FUN_0040aa00(void)

{
  int iVar1;
  long lVar2;
  undefined uVar3;
  int *piVar4;
  undefined uVar5;
  
  uVar3 = stdin;
  lVar2 = FUN_00411b90(stdin);
  if (lVar2 == 0) {
    iVar1 = FUN_00412f20(uVar3);
    if (iVar1 == 0) {
      FUN_0040ab20();
      return;
    }
  }
  else {
    iVar1 = FUN_00411bc0(uVar3,0,1);
    if (iVar1 == 0) {
      iVar1 = FUN_00411b50(stdin);
      if (iVar1 != 0) {
        FUN_00412f20(stdin);
        goto LAB_0040aa58;
      }
    }
    iVar1 = FUN_00412f20(stdin);
    if (iVar1 == 0) {
      FUN_0040ab20();
      return;
    }
  }
LAB_0040aa58:
  uVar3 = dcgettext(0,"error closing file",5);
  lVar2 = DAT_006219a8;
  piVar4 = __errno_location();
  if (lVar2 == 0) {
    error(0,*piVar4,&DAT_0041aa9b,uVar3);
  }
  else {
    uVar5 = FUN_0040eaa0(lVar2);
    error(0,*piVar4,"%s: %s",uVar5,uVar3);
  }
  FUN_0040ab20();
                    /* WARNING: Subroutine does not return */
  _exit(DAT_0061f468);
}


void FUN_0040ab00(undefined param_1)

{
  DAT_006219b8 = param_1;
  return;
}


void FUN_0040ab10(undefined param_1)

{
  DAT_006219b0 = param_1;
  return;
}


void FUN_0040ab20(void)

{
  int iVar1;
  int *piVar2;
  undefined uVar3;
  undefined uVar4;
  
  iVar1 = FUN_00412f20(stdout);
  if (iVar1 != 0) {
    piVar2 = __errno_location();
    if ((DAT_006219b0 == '\0') || (*piVar2 != 0x20)) {
      uVar3 = dcgettext(0,"write error",5);
      if (DAT_006219b8 == 0) {
        error(0,*piVar2,&DAT_0041aa9b,uVar3);
      }
      else {
        uVar4 = FUN_0040eaa0();
        error(0,*piVar2,"%s: %s",uVar4,uVar3);
      }
      goto LAB_0040ab9e;
    }
  }
  iVar1 = FUN_00412f20(stderr);
  if (iVar1 == 0) {
    return;
  }
LAB_0040ab9e:
                    /* WARNING: Subroutine does not return */
  _exit(DAT_0061f468);
}


DIR * FUN_0040abc0(char *param_1)

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
      __fd = FUN_00411a10(uVar1,0x406,3);
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


void FUN_0040ac60(void)

{
  long lVar1;
  
  lVar1 = FUN_0040ace0();
  if (lVar1 != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00411530();
}


ulong FUN_0040ac80(char *param_1)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  cVar1 = *param_1;
  lVar2 = FUN_0040ad40();
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


undefined * FUN_0040ace0(void *param_1)

{
  size_t __n;
  undefined *__dest;
  
  __n = FUN_0040ac80();
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


char * FUN_0040ad40(char *param_1)

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


void FUN_0040ada0(char *param_1)

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


void FUN_0040ade0(FILE *param_1,int param_2)

{
  int __fd;
  
  if (param_1 != (FILE *)0x0) {
    __fd = fileno(param_1);
    posix_fadvise(__fd,0,0,param_2);
    return;
  }
  return;
}


void FUN_0040ae10(char *param_1,uint param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 & 0x40) != 0) {
    uVar2 = param_3 & 0xffffffff;
  }
  iVar1 = open(param_1,param_2,uVar2);
  FUN_0040fcf0(iVar1);
  return;
}


void FUN_0040ae60(long param_1,undefined param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined uVar2;
  undefined *puVar3;
  
  if (param_1 == 0) {
    return;
  }
  puVar1 = (undefined *)FUN_004112e0(0x18);
  uVar2 = FUN_00411510(param_2);
  *puVar1 = uVar2;
  puVar1[1] = param_3[1];
  puVar1[2] = *param_3;
  puVar3 = (undefined *)FUN_0040c2f0(param_1,puVar1);
  if (puVar3 != (undefined *)0x0) {
    if (puVar1 != puVar3) {
      FUN_0040c5c0(puVar1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00411530();
}


ulong FUN_0040aef0(long param_1,undefined param_2,undefined *param_3)

{
  ulong uVar1;
  undefined local_28;
  undefined local_20;
  undefined local_18;
  
  if (param_1 != 0) {
    local_20 = param_3[1];
    local_18 = *param_3;
    local_28 = param_2;
    uVar1 = FUN_0040b8e0(param_1,&local_28);
    return uVar1 & 0xffffffffffffff00 | (ulong)(uVar1 != 0);
  }
  return 0;
}


void FUN_0040af30(uint param_1,undefined *param_2)

{
  byte bVar1;
  undefined uVar2;
  char cVar3;
  uint uVar4;
  
  uVar2 = 0x2d;
  uVar4 = param_1 & 0xf000;
  if ((((uVar4 != 0x8000) && (uVar2 = 100, uVar4 != 0x4000)) && (uVar2 = 0x62, uVar4 != 0x6000)) &&
     (((uVar2 = 99, uVar4 != 0x2000 && (uVar2 = 0x6c, uVar4 != 0xa000)) &&
      ((uVar2 = 0x70, uVar4 != 0x1000 && (uVar2 = 0x73, uVar4 != 0xc000)))))) {
    uVar2 = 0x3f;
  }
  *param_2 = uVar2;
  param_2[1] = (-((param_1 & 0x100) == 0) & 0xbbU) + 0x72;
  param_2[2] = (-((param_1 & 0x80) == 0) & 0xb6U) + 0x77;
  bVar1 = -((param_1 & 0x40) == 0);
  if ((param_1 & 0x800) == 0) {
    cVar3 = (bVar1 & 0xb5) + 0x78;
  }
  else {
    cVar3 = (bVar1 & 0xe0) + 0x73;
  }
  param_2[3] = cVar3;
  param_2[4] = (-((param_1 & 0x20) == 0) & 0xbbU) + 0x72;
  param_2[5] = (-((param_1 & 0x10) == 0) & 0xb6U) + 0x77;
  bVar1 = -((param_1 & 8) == 0);
  if ((param_1 & 0x400) == 0) {
    cVar3 = (bVar1 & 0xb5) + 0x78;
  }
  else {
    cVar3 = (bVar1 & 0xe0) + 0x73;
  }
  param_2[6] = cVar3;
  param_2[7] = (-((param_1 & 4) == 0) & 0xbbU) + 0x72;
  param_2[8] = (-((param_1 & 2) == 0) & 0xb6U) + 0x77;
  bVar1 = -((param_1 & 1) == 0);
  if ((param_1 & 0x200) != 0) {
    param_2[9] = (bVar1 & 0xe0) + 0x74;
    *(undefined *)(param_2 + 10) = 0x20;
    return;
  }
  param_2[9] = (bVar1 & 0xb5) + 0x78;
  *(undefined *)(param_2 + 10) = 0x20;
  return;
}


void FUN_0040b0b0(long param_1)

{
  FUN_0040af30(*(undefined *)(param_1 + 0x18));
  return;
}


void FUN_0040b0c0(void)

{
  long lVar1;
  
  lVar1 = FUN_0040b0e0();
  if (lVar1 != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00411530();
}


void * FUN_0040b0e0(void *param_1,char *param_2,long *param_3)

{
  char cVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  size_t __n;
  void *__dest;
  undefined *puVar5;
  size_t __n_00;
  
  lVar3 = FUN_0040ad40();
  uVar4 = FUN_0040ada0(lVar3);
  __n_00 = (lVar3 - (long)param_1) + uVar4;
  if (uVar4 != 0) {
    uVar4 = (ulong)(*(char *)(lVar3 + -1 + uVar4) != '/');
  }
  cVar1 = *param_2;
  cVar2 = cVar1;
  while (cVar2 == '/') {
    param_2 = param_2 + 1;
    cVar2 = *param_2;
  }
  __n = strlen(param_2);
  __dest = malloc(uVar4 + 1 + __n_00 + __n);
  if (__dest != (void *)0x0) {
    puVar5 = (undefined *)mempcpy(__dest,param_1,__n_00);
    *puVar5 = 0x2f;
    if (param_3 != (long *)0x0) {
      *param_3 = (long)(puVar5 + uVar4) - (ulong)(cVar1 == '/');
    }
    puVar5 = (undefined *)mempcpy(puVar5 + uVar4,param_2,__n);
    *puVar5 = 0;
  }
  return __dest;
}


long FUN_0040b1c0(undefined param_1,long param_2,long param_3)

{
  long lVar1;
  int *piVar2;
  long lVar3;
  
  if (param_3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    do {
      lVar1 = FUN_0040eec0(param_1,param_2,param_3);
      if (lVar1 == -1) {
        return lVar3;
      }
      if (lVar1 == 0) {
        piVar2 = __errno_location();
        *piVar2 = 0;
        return lVar3;
      }
      lVar3 = lVar3 + lVar1;
      param_2 = param_2 + lVar1;
      param_3 = param_3 - lVar1;
    } while (param_3 != 0);
  }
  return lVar3;
}


long FUN_0040b240(undefined param_1,long param_2,long param_3)

{
  long lVar1;
  int *piVar2;
  long lVar3;
  
  if (param_3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    do {
      lVar1 = FUN_0040ef20(param_1,param_2,param_3);
      if (lVar1 == -1) {
        return lVar3;
      }
      if (lVar1 == 0) {
        piVar2 = __errno_location();
        *piVar2 = 0x1c;
        return lVar3;
      }
      lVar3 = lVar3 + lVar1;
      param_2 = param_2 + lVar1;
      param_3 = param_3 - lVar1;
    } while (param_3 != 0);
  }
  return lVar3;
}


ulong FUN_0040b2c0(ulong param_1)

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
LAB_0040b340:
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
        if (uVar3 <= uVar4) goto LAB_0040b340;
        lVar5 = lVar5 + 8;
      } while (uVar1 != 0);
    }
    uVar3 = uVar3 + 2;
  } while( true );
}


ulong FUN_0040b360(ulong param_1,ulong param_2)

{
  return (param_1 >> 3 | param_1 << 0x3d) % param_2;
}


bool FUN_0040b370(long param_1,long param_2)

{
  return param_1 == param_2;
}


long FUN_0040b380(long *param_1,undefined param_2)

{
  ulong uVar1;
  
  uVar1 = (*(code *)param_1[6])(param_2,param_1[2]);
  if (uVar1 <= (ulong)param_1[2] && param_1[2] != uVar1) {
    return uVar1 * 0x10 + *param_1;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


long FUN_0040b3b0(long param_1,long param_2,long **param_3,char param_4)

{
  undefined *puVar1;
  undefined uVar2;
  undefined uVar3;
  undefined uVar4;
  char cVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  
  plVar6 = (long *)FUN_0040b380();
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
LAB_0040b43c:
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
          goto LAB_0040b43c;
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

undefined FUN_0040b4d0(float **param_1)

{
  float fVar1;
  float *pfVar2;
  float fVar3;
  
  pfVar2 = *param_1;
  if (pfVar2 == (float *)&DAT_00419120) {
    return 1;
  }
  fVar1 = pfVar2[2];
  if ((((_DAT_00419134 < fVar1) && (fVar1 < DAT_00419138)) && (_DAT_0041913c < pfVar2[3])) &&
     (_DAT_00419140 <= *pfVar2)) {
    fVar3 = *pfVar2 + _DAT_00419134;
    if (((fVar3 < pfVar2[1]) && (pfVar2[1] <= DAT_00419144)) && (fVar3 < fVar1)) {
      return 1;
    }
  }
  *param_1 = (float *)&DAT_00419120;
  return 0;
}


undefined FUN_0040b550(long param_1,long **param_2,char param_3)

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
LAB_0040b578:
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
          plVar2 = (long *)FUN_0040b380(param_1,lVar6);
          plVar4 = (long *)plVar3[1];
          if (*plVar2 != 0) break;
          *plVar2 = lVar6;
          *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
          *plVar3 = 0;
          plVar3[1] = *(long *)(param_1 + 0x48);
          *(long **)(param_1 + 0x48) = plVar3;
          plVar3 = plVar4;
          if (plVar4 == (long *)0x0) goto LAB_0040b5ef;
        }
        plVar3[1] = plVar2[1];
        plVar2[1] = (long)plVar3;
        plVar3 = plVar4;
      } while (plVar4 != (long *)0x0);
LAB_0040b5ef:
      lVar6 = *plVar5;
    }
    plVar5[1] = 0;
    if (param_3 != '\0') goto LAB_0040b578;
    plVar3 = (long *)FUN_0040b380(param_1,lVar6);
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


undefined FUN_0040b6a0(long param_1)

{
  return *(undefined *)(param_1 + 0x10);
}


undefined FUN_0040b6b0(long param_1)

{
  return *(undefined *)(param_1 + 0x18);
}


undefined FUN_0040b6c0(long param_1)

{
  return *(undefined *)(param_1 + 0x20);
}


void FUN_0040b6d0(long **param_1)

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


bool FUN_0040b720(long **param_1)

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
LAB_0040b738:
      plVar2 = plVar2 + 2;
    }
    lVar1 = plVar2[1];
    plVar4 = (long *)((long)plVar4 + 1);
    plVar3 = (long *)((long)plVar3 + 1);
    if (lVar1 == 0) goto LAB_0040b738;
    do {
      lVar1 = *(long *)(lVar1 + 8);
      plVar3 = (long *)((long)plVar3 + 1);
    } while (lVar1 != 0);
    plVar2 = plVar2 + 2;
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040b790(long **param_1,undefined param_2)

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
      if (param_1[1] <= plVar6) goto LAB_0040b7fd;
    }
  }
LAB_0040b7fd:
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
  __fprintf_chk((dVar7 * _DAT_00419158) / dVar8,param_2,1,"# buckets used:    %lu (%.2f%%)\n",plVar2
               );
  __fprintf_chk(param_2,1,"max bucket length: %lu\n",uVar5);
  return;
}


long FUN_0040b8e0(long param_1,long param_2)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)FUN_0040b380();
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


long FUN_0040b940(long **param_1)

{
  long lVar1;
  long *plVar2;
  
  if (param_1[4] == (long *)0x0) {
    return 0;
  }
  plVar2 = *param_1;
  if (param_1[1] <= plVar2) {
    lVar1 = FUN_00403015();
    return lVar1;
  }
  do {
    if (*plVar2 != 0) {
      return *plVar2;
    }
    plVar2 = plVar2 + 2;
  } while (plVar2 < param_1[1]);
  lVar1 = FUN_00403015();
  return lVar1;
}


long FUN_0040b990(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = (long *)FUN_0040b380();
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


ulong FUN_0040ba00(long **param_1,long param_2,ulong param_3)

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


long FUN_0040ba70(long **param_1,code *param_2,undefined param_3)

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


ulong FUN_0040baf0(byte *param_1,ulong param_2)

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


void FUN_0040bb30(undefined *param_1)

{
  *(undefined *)(param_1 + 2) = 0;
  *param_1 = 0x3f80000000000000;
  param_1[1] = 0x3fb4fdf43f4ccccd;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ** FUN_0040bb50(ulong param_1,void *param_2,code *param_3,code *param_4,void *param_5)

{
  char cVar1;
  void **__ptr;
  void *__nmemb;
  void *pvVar2;
  float fVar3;
  float fVar4;
  
  if (param_3 == (code *)0x0) {
    param_3 = FUN_0040b360;
  }
  if (param_4 == (code *)0x0) {
    param_4 = FUN_0040b370;
  }
  __ptr = (void **)malloc(0x50);
  if (__ptr == (void **)0x0) {
    return (void **)0x0;
  }
  if (param_2 == (void *)0x0) {
    __ptr[5] = &DAT_00419120;
    cVar1 = FUN_0040b4d0(__ptr + 5);
    if (cVar1 == '\0') goto LAB_0040bc30;
    fVar4 = DAT_00419148;
    if ((long)param_1 < 0) goto LAB_0040bcb3;
LAB_0040bc6e:
    fVar3 = (float)param_1;
LAB_0040bc77:
    fVar3 = fVar3 / fVar4;
    if (_DAT_0041914c <= fVar3) goto LAB_0040bc30;
    if (fVar3 < _DAT_00419150) {
      param_1 = (ulong)fVar3;
    }
    else {
      param_1 = (long)(fVar3 - _DAT_00419150) ^ 0x8000000000000000;
    }
  }
  else {
    __ptr[5] = param_2;
    cVar1 = FUN_0040b4d0(__ptr + 5);
    if (cVar1 == '\0') goto LAB_0040bc30;
    if (*(char *)((long)param_2 + 0x10) == '\0') {
      fVar4 = *(float *)((long)param_2 + 8);
      if (-1 < (long)param_1) goto LAB_0040bc6e;
LAB_0040bcb3:
      fVar3 = (float)(param_1 >> 1 | (ulong)((uint)param_1 & 1));
      fVar3 = fVar3 + fVar3;
      goto LAB_0040bc77;
    }
  }
  __nmemb = (void *)FUN_0040b2c0(param_1);
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
LAB_0040bc30:
  free(__ptr);
  return (void **)0x0;
}


void FUN_0040bce0(long **param_1)

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
        if (param_1[1] < plVar4 || param_1[1] == plVar4) goto LAB_0040bd73;
      }
      plVar5 = plVar5 + 2;
    } while (plVar5 <= param_1[1] && param_1[1] != plVar5);
  }
LAB_0040bd73:
  param_1[3] = (long *)0x0;
  param_1[4] = (long *)0x0;
  return;
}


void FUN_0040bd90(long **param_1)

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
    if (plVar2 <= plVar4) goto LAB_0040be2c;
    do {
      while (lVar5 = *plVar4, plVar3 = plVar4, lVar5 == 0) {
        plVar4 = plVar4 + 2;
        if (plVar2 <= plVar4) goto LAB_0040bdef;
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
LAB_0040bdef:
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
LAB_0040be2c:
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

undefined FUN_0040be70(void **param_1,ulong param_2)

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
    if (_DAT_0041914c <= fVar3) {
      return 0;
    }
    if (fVar3 < _DAT_00419150) {
      param_2 = (ulong)fVar3;
    }
    else {
      param_2 = (long)(fVar3 - _DAT_00419150) ^ 0x8000000000000000;
    }
  }
  local_58 = (void *)FUN_0040b2c0(param_2);
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
      uVar2 = FUN_0040b550(&local_68,param_1,0);
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
      cVar1 = FUN_0040b550(param_1,&local_68,1);
      if ((cVar1 != '\0') && (cVar1 = FUN_0040b550(param_1,&local_68,0), cVar1 != '\0')) {
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

undefined FUN_0040c070(long param_1,long param_2,long *param_3)

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
  lVar2 = FUN_0040b3b0(param_1,param_2,&local_20,0);
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
    if ((long)uVar3 < 0) goto LAB_0040c16a;
LAB_0040c0db:
    if (fVar7 <= (float)uVar3 * *(float *)(lVar2 + 8)) goto LAB_0040c0f2;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x28);
    fVar7 = (float)uVar6;
    uVar3 = *(ulong *)(param_1 + 0x10);
    if (-1 < (long)uVar3) goto LAB_0040c0db;
LAB_0040c16a:
    fVar8 = (float)(uVar3 >> 1 | (ulong)((uint)uVar3 & 1));
    if (fVar7 <= (fVar8 + fVar8) * *(float *)(lVar2 + 8)) goto LAB_0040c0f2;
  }
  FUN_0040b4d0(param_1 + 0x28);
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
    if (_DAT_0041914c <= fVar7) {
      return 0xffffffff;
    }
    if (_DAT_00419150 <= fVar7) {
      uVar6 = (long)(fVar7 - _DAT_00419150) ^ 0x8000000000000000;
    }
    else {
      uVar6 = (ulong)fVar7;
    }
    cVar1 = FUN_0040be70(param_1,uVar6);
    if (cVar1 == '\0') {
      return 0xffffffff;
    }
    lVar2 = FUN_0040b3b0(param_1,param_2,&local_20,0);
    if (lVar2 != 0) {
      uVar5 = FUN_0040301f();
      return uVar5;
    }
  }
LAB_0040c0f2:
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


undefined FUN_0040c2f0(undefined param_1,undefined param_2)

{
  int iVar1;
  undefined local_10;
  
  iVar1 = FUN_0040c070(param_1,param_2,&local_10);
  if (iVar1 != -1) {
    if (iVar1 == 0) {
      param_2 = local_10;
    }
    return param_2;
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_0040c330(long param_1,undefined param_2)

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
  
  lVar5 = FUN_0040b3b0(param_1,param_2,&local_20,1);
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
      FUN_0040b4d0(param_1 + 0x28);
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
        if (_DAT_00419150 <= fVar7) {
          uVar6 = (long)(fVar7 - _DAT_00419150) ^ 0x8000000000000000;
        }
        else {
          uVar6 = (ulong)fVar7;
        }
        cVar4 = FUN_0040be70(param_1,uVar6);
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


ulong FUN_0040c510(undefined *param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00413020(*param_1);
  return (uVar1 ^ param_1[1]) % param_2;
}


ulong FUN_0040c540(long param_1,ulong param_2)

{
  return *(ulong *)(param_1 + 8) % param_2;
}


undefined FUN_0040c550(undefined *param_1,undefined *param_2)

{
  undefined uVar1;
  
  if ((param_1[1] == param_2[1]) && (param_1[2] == param_2[2])) {
    uVar1 = FUN_0040ef80(*param_1,*param_2);
    return uVar1;
  }
  return 0;
}


ulong FUN_0040c580(char **param_1,char **param_2)

{
  int iVar1;
  undefined extraout_var;
  
  if ((param_1[1] == param_2[1]) && (param_1[2] == param_2[2])) {
    iVar1 = strcmp(*param_1,*param_2);
    return CONCAT44(extraout_var,iVar1) & 0xffffffffffffff00 | (ulong)(iVar1 == 0);
  }
  return 0;
}


void FUN_0040c5c0(void **param_1)

{
  free(*param_1);
  free(param_1);
  return;
}


long FUN_0040c5e0(char *param_1,undefined param_2,code *param_3,undefined param_4)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  bool bVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  
  bVar3 = false;
  pcVar8 = (char *)0x0;
  pcVar9 = param_1;
  pcVar10 = param_1;
LAB_0040c610:
  do {
    cVar1 = *pcVar9;
    while( true ) {
      if (cVar1 == '\0') {
        return (long)pcVar10 - (long)param_1;
      }
      pcVar9 = pcVar9 + 1;
      cVar2 = *pcVar9;
      if (cVar2 == '/') break;
      if ((cVar1 != '/' || cVar2 == '\0') || (pcVar8 == (char *)0x0)) goto LAB_0040c610;
      if ((long)pcVar8 - (long)pcVar10 == 1) {
        if (*pcVar10 != '.') {
          *pcVar8 = '\0';
          goto LAB_0040c663;
        }
      }
      else {
        *pcVar8 = '\0';
        if ((((long)pcVar8 - (long)pcVar10 == 2) && (*pcVar10 == '.')) && (pcVar10[1] == '.')) {
          iVar4 = 0;
          bVar3 = false;
          bVar7 = false;
        }
        else {
LAB_0040c663:
          iVar4 = (*param_3)(param_1,pcVar10,param_4);
          if (iVar4 < 0) {
            piVar6 = __errno_location();
            iVar4 = *piVar6;
            bVar7 = bVar3;
          }
          else {
            iVar4 = 0;
            bVar3 = cVar1 == '/' && cVar2 != '\0';
            bVar7 = true;
          }
        }
        iVar5 = FUN_0040f520(param_2,pcVar10,bVar7,0);
        if ((iVar5 == -1) || (*pcVar8 = '/', iVar5 != 0)) {
          if ((iVar4 != 0) && (piVar6 = __errno_location(), *piVar6 == 2)) {
            *piVar6 = iVar4;
          }
          return (long)iVar5;
        }
      }
      cVar1 = *pcVar9;
      pcVar10 = pcVar9;
    }
    if (cVar1 != '/') {
      pcVar8 = pcVar9;
    }
  } while( true );
}


/* WARNING: Type propagation algorithm not settling */

undefined
FUN_0040c770(char *param_1,int *param_2,long param_3,undefined param_4,uint param_5,code *param_6,
            uint param_7,uint param_8,uint param_9,char param_10)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  undefined uVar5;
  undefined uVar6;
  char *pcVar7;
  uint local_dc;
  stat local_c8;
  
  if (((*param_1 == '/') || (*param_2 != 4)) || (iVar1 = param_2[1], iVar1 == 0)) {
    pcVar7 = param_1;
    if (param_3 != 0) {
      lVar3 = FUN_0040c5e0(param_1,param_2,param_3,param_4);
      if (lVar3 < 0) {
        if (lVar3 != -1) {
          return 1;
        }
        piVar4 = __errno_location();
        iVar1 = *piVar4;
        goto LAB_0040c870;
      }
      pcVar7 = param_1 + lVar3;
    }
    if ((param_8 & param_9) == 0xffffffff) {
      if ((param_7 & 0xc00 | param_5 & 0x200) != 0) {
        local_dc = param_5 & 0xffffffed;
        goto LAB_0040c815;
      }
      iVar1 = mkdir(pcVar7,param_5);
      if (iVar1 != 0) goto LAB_0040c82c;
      (*param_6)(param_1,param_4);
      if ((param_7 & param_5 & 0x1ff) != 0) {
        uVar5 = 3;
        local_dc = param_5;
        goto LAB_0040c95d;
      }
    }
    else {
      local_dc = param_5 & 0xffffffc0;
LAB_0040c815:
      iVar1 = mkdir(pcVar7,local_dc);
      if (iVar1 == 0) {
        (*param_6)(param_1,param_4);
        uVar5 = 3;
      }
      else {
LAB_0040c82c:
        piVar4 = __errno_location();
        iVar1 = *piVar4;
        if (param_10 != '\0') {
          if ((iVar1 != 0) &&
             (((iVar1 == 2 || (param_3 == 0)) ||
              ((iVar2 = __xstat(1,pcVar7,&local_c8), iVar2 != 0 ||
               ((local_c8.st_mode & 0xf000) != 0x4000)))))) goto LAB_0040c870;
          goto LAB_0040c915;
        }
        local_dc = 0xffffffff;
        uVar5 = 2;
      }
LAB_0040c95d:
      iVar2 = FUN_0040f520(param_2,pcVar7,uVar5,&local_c8);
      if (-2 < iVar2) {
        if (iVar2 == 0) {
          pcVar7 = ".";
        }
        iVar2 = FUN_004135d0((undefined)local_c8.st_dev,pcVar7,local_dc,param_8,param_9,param_5,
                             param_7);
        if (iVar2 != 0) {
          if ((iVar1 == 0) ||
             (((iVar1 != 2 && (param_3 != 0)) && (piVar4 = __errno_location(), *piVar4 != 0x14)))) {
            piVar4 = __errno_location();
            uVar5 = FUN_0040ec50(param_1);
            pcVar7 = "cannot change permissions of %s";
            if ((param_8 & param_9) != 0xffffffff) {
              pcVar7 = "cannot change owner and permissions of %s";
            }
            uVar6 = dcgettext(0,pcVar7,5);
            error(0,*piVar4,uVar6,uVar5);
            return 0;
          }
          goto LAB_0040c870;
        }
      }
    }
LAB_0040c915:
    uVar5 = 1;
  }
  else {
LAB_0040c870:
    uVar5 = FUN_0040ec50(param_1);
    uVar6 = dcgettext(0,"cannot create directory %s",5);
    error(0,iVar1,uVar6,uVar5);
    uVar5 = 0;
  }
  return uVar5;
}


undefined * FUN_0040ca80(byte *param_1)

{
  byte bVar1;
  undefined *puVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined uVar8;
  byte bVar9;
  ulong uVar10;
  undefined uVar11;
  undefined *puVar12;
  long lVar13;
  
  bVar9 = *param_1;
  uVar5 = (uint)(char)bVar9;
  if ((byte)(bVar9 - 0x30) < 8) {
    uVar7 = 0;
    pbVar4 = param_1;
    do {
      uVar7 = (uVar5 - 0x30) + uVar7 * 8;
      pbVar4 = pbVar4 + 1;
      if (0xfff < uVar7) {
        return (undefined *)0x0;
      }
      bVar9 = *pbVar4;
      uVar5 = (uint)(char)bVar9;
    } while ((byte)(bVar9 - 0x30) < 8);
    if (bVar9 != 0) {
      return (undefined *)0x0;
    }
    uVar5 = uVar7 & 0xc00 | 0x3ff;
    if (4 < (long)pbVar4 - (long)param_1) {
      uVar5 = 0xfff;
    }
    puVar2 = (undefined *)FUN_004112e0(0x20);
    *puVar2 = 0x13d;
    *(undefined *)(puVar2 + 2) = 0xfff;
    *(uint *)(puVar2 + 4) = uVar7;
    *(uint *)(puVar2 + 6) = uVar5;
    *(undefined *)((long)puVar2 + 0x11) = 0;
    return puVar2;
  }
  uVar10 = 1;
  pbVar4 = param_1;
  if (bVar9 != 0) {
    do {
      bVar1 = (byte)uVar5;
      bVar9 = pbVar4[1];
      uVar5 = (uint)bVar9;
      uVar10 = uVar10 + ((bVar1 & 0xef) == 0x2d || bVar1 == 0x2b);
      pbVar4 = pbVar4 + 1;
    } while (bVar9 != 0);
    if (((long)(uVar10 * 0x10) < 0) || (uVar10 >> 0x3c != 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00411530();
    }
  }
  puVar2 = (undefined *)FUN_004112e0();
  lVar13 = 0;
LAB_0040cafb:
  uVar5 = 0;
  do {
    bVar9 = *param_1;
    uVar7 = (uint)bVar9;
    if (bVar9 == 0x61) {
      uVar5 = 0xfff;
    }
    else {
      if ((char)bVar9 < 'b') break;
      if (bVar9 == 0x6f) {
        uVar5 = uVar5 | 0x207;
      }
      else if (bVar9 == 0x75) {
        uVar5 = uVar5 | 0x9c0;
      }
      else {
        if (bVar9 != 0x67) goto LAB_0040cb2b;
        uVar5 = uVar5 | 0x438;
      }
    }
    param_1 = param_1 + 1;
  } while( true );
  if (((bVar9 != 0x2d) && (bVar9 != 0x3d)) && (bVar9 != 0x2b)) goto LAB_0040cb2b;
  puVar12 = puVar2 + lVar13 * 8;
  do {
    lVar13 = lVar13 + 1;
    bVar9 = param_1[1];
    uVar6 = (uint)(char)bVar9;
    uVar11 = (undefined)uVar7;
    if (bVar9 == 0x67) {
      uVar3 = 0x38;
LAB_0040cb9e:
      *(undefined *)((long)puVar12 + 1) = 3;
      *(uint *)(puVar12 + 2) = uVar5;
      *(uint *)(puVar12 + 4) = uVar3;
      *(undefined *)puVar12 = uVar11;
      param_1 = param_1 + 2;
      uVar7 = (uint)*param_1;
LAB_0040cbb6:
      if (uVar5 != 0) {
        uVar3 = uVar3 & uVar5;
      }
    }
    else {
      uVar7 = uVar6;
      if ('g' < (char)bVar9) {
        if (bVar9 == 0x6f) {
          uVar3 = 7;
        }
        else {
          uVar3 = 0x1c0;
          if (bVar9 != 0x75) goto LAB_0040cc80;
        }
        goto LAB_0040cb9e;
      }
      if (7 < (byte)(bVar9 - 0x30)) {
LAB_0040cc80:
        uVar6 = uVar6 - 0x58;
        uVar8 = 1;
        uVar3 = 0;
        bVar9 = (byte)uVar6;
        param_1 = param_1 + 1;
        while (bVar9 < 0x21) {
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch(uVar6 & 0xff) {
          case 0:
            uVar8 = 2;
            break;
          default:
            goto switchD_0040cc94_caseD_1;
          case 0x1a:
            uVar3 = uVar3 | 0x124;
            break;
          case 0x1b:
            uVar3 = uVar3 | 0xc00;
            break;
          case 0x1c:
            uVar3 = uVar3 | 0x200;
            break;
          case 0x1f:
            uVar3 = uVar3 | 0x92;
            break;
          case 0x20:
            uVar3 = uVar3 | 0x49;
          }
          param_1 = param_1 + 1;
          uVar7 = (uint)*param_1;
          uVar6 = uVar7 - 0x58;
          bVar9 = (byte)uVar6;
        }
switchD_0040cc94_caseD_1:
        *(undefined *)puVar12 = uVar11;
        *(undefined *)((long)puVar12 + 1) = uVar8;
        *(uint *)(puVar12 + 2) = uVar5;
        *(uint *)(puVar12 + 4) = uVar3;
        goto LAB_0040cbb6;
      }
      uVar6 = 0;
      param_1 = param_1 + 1;
      do {
        uVar6 = (uVar7 - 0x30) + uVar6 * 8;
        param_1 = param_1 + 1;
        if (0xfff < uVar6) goto LAB_0040cb2b;
        bVar9 = *param_1;
        uVar7 = (uint)(char)bVar9;
      } while ((byte)(bVar9 - 0x30) < 8);
      if ((uVar5 != 0) || ((bVar9 != 0 && (bVar9 != 0x2c)))) goto LAB_0040cb2b;
      *(undefined *)puVar12 = uVar11;
      uVar5 = 0xfff;
      *(uint *)(puVar12 + 4) = uVar6;
      uVar3 = 0xfff;
      *(undefined *)((long)puVar12 + 1) = 1;
      *(undefined *)(puVar12 + 2) = 0xfff;
    }
    *(uint *)(puVar12 + 6) = uVar3;
    puVar12 = puVar12 + 8;
    bVar9 = (byte)uVar7;
  } while (((bVar9 & 0xef) == 0x2d) || (bVar9 == 0x2b));
  if (bVar9 != 0x2c) {
    if (bVar9 == 0) {
      *(undefined *)((long)puVar2 + lVar13 * 0x10 + 1) = 0;
      return puVar2;
    }
LAB_0040cb2b:
    free(puVar2);
    return (undefined *)0x0;
  }
  param_1 = param_1 + 1;
  goto LAB_0040cafb;
}


undefined * FUN_0040cdf0(char *param_1)

{
  int iVar1;
  undefined *puVar2;
  stat sStack_98;
  
  iVar1 = __xstat(1,param_1,&sStack_98);
  puVar2 = (undefined *)0x0;
  if (iVar1 == 0) {
    puVar2 = (undefined *)FUN_004112e0(0x20);
    *puVar2 = 0x13d;
    *(undefined *)(puVar2 + 2) = 0xfff;
    *(__mode_t *)(puVar2 + 4) = sStack_98.st_mode;
    *(undefined *)(puVar2 + 6) = 0xfff;
    *(undefined *)((long)puVar2 + 0x11) = 0;
  }
  return puVar2;
}


void FUN_0040ce50(uint param_1,char param_2,uint param_3,char *param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  uint uVar8;
  
  cVar7 = param_4[1];
  param_1 = param_1 & 0xfff;
  uVar2 = 0;
  if (cVar7 != '\0') {
    do {
      while( true ) {
        uVar1 = *(uint *)(param_4 + 4);
        uVar4 = *(uint *)(param_4 + 8);
        if (param_2 != '\0') break;
        uVar6 = 0xffffffff;
        uVar5 = 0xffffffff;
        uVar3 = 0;
        uVar8 = 0;
        if (cVar7 != '\x02') goto LAB_0040ce8f;
        if ((param_1 & 0x49) != 0) goto LAB_0040cf3c;
LAB_0040ced4:
        cVar7 = *param_4;
        uVar4 = uVar4 & uVar6;
        if (uVar1 != 0) goto LAB_0040cf50;
LAB_0040cee0:
        uVar4 = uVar4 & ~param_3;
        if (cVar7 != '-') {
          if (cVar7 == '=') goto LAB_0040cf6b;
          goto LAB_0040cef3;
        }
LAB_0040cfa0:
        uVar2 = uVar2 | uVar4;
        param_1 = param_1 & ~uVar4;
LAB_0040cefd:
        cVar7 = param_4[0x11];
        param_4 = param_4 + 0x10;
        if (cVar7 == '\0') goto LAB_0040cf88;
      }
      uVar5 = *(uint *)(param_4 + 0xc) | 0xfffff3ff;
      uVar3 = ~*(uint *)(param_4 + 0xc) & 0xc00;
      uVar8 = uVar3;
      if (cVar7 != '\x02') {
LAB_0040ce8f:
        uVar3 = uVar8;
        uVar6 = uVar5;
        if (cVar7 == '\x03') {
          uVar4 = uVar4 & param_1;
          uVar8 = ~-(uint)((uVar4 & 0x124) == 0) & 0x124;
          if ((uVar4 & 0x92) != 0) {
            uVar8 = uVar8 | 0x92;
          }
          if ((uVar4 & 0x49) != 0) {
            uVar8 = uVar8 | 0x49;
          }
          uVar4 = uVar4 | uVar8;
        }
        goto LAB_0040ced4;
      }
LAB_0040cf3c:
      cVar7 = *param_4;
      uVar4 = (uVar4 | 0x49) & uVar5;
      uVar6 = uVar5;
      if (uVar1 == 0) goto LAB_0040cee0;
LAB_0040cf50:
      uVar4 = uVar4 & uVar1;
      if (cVar7 == '-') goto LAB_0040cfa0;
      if (cVar7 != '=') {
LAB_0040cef3:
        if (cVar7 == '+') {
          uVar2 = uVar2 | uVar4;
          param_1 = param_1 | uVar4;
        }
        goto LAB_0040cefd;
      }
      uVar3 = uVar3 | ~uVar1;
      uVar6 = ~uVar3;
LAB_0040cf6b:
      cVar7 = param_4[0x11];
      uVar2 = uVar2 | uVar6 & 0xfff;
      param_1 = param_1 & uVar3 | uVar4;
      param_4 = param_4 + 0x10;
    } while (cVar7 != '\0');
  }
LAB_0040cf88:
  if (param_5 != (uint *)0x0) {
    *param_5 = uVar2;
  }
  return;
}


void FUN_0040cfd0(byte *param_1)

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
        pbVar6 = &DAT_004192d8;
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
  DAT_006219c0 = param_1;
  program_invocation_name = param_1;
  return;
}


undefined
FUN_0040d070(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
            undefined param_5)

{
  int iVar1;
  undefined uVar2;
  undefined local_1c [12];
  
  iVar1 = FUN_00412b30(param_1,param_2,param_5,local_1c);
  if (iVar1 == 0) {
    uVar2 = FUN_00412b60(local_1c,param_3,param_4);
  }
  else {
    uVar2 = 0xfffffffe;
  }
  return uVar2;
}


void FUN_0040d0b0(undefined param_1,undefined param_2,undefined param_3)

{
  undefined local_c [3];
  
  local_c[0] = param_3;
  FUN_00412b60(local_c,param_1,param_2);
  return;
}


char * FUN_0040d0d0(char *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  byte *pbVar3;
  
  pcVar2 = (char *)dcgettext(0,param_1,5);
  if (param_1 == pcVar2) {
    pbVar3 = (byte *)FUN_00413060();
    if ((*pbVar3 & 0xdf) == 0x55) {
      if (((((pbVar3[1] & 0xdf) != 0x54) || ((pbVar3[2] & 0xdf) != 0x46)) || (pbVar3[3] != 0x2d)) ||
         ((pbVar3[4] != 0x38 || (pbVar3[5] != 0)))) {
LAB_0040d1a8:
        pcVar2 = "\"";
        if (param_2 != 9) {
          pcVar2 = "\'";
        }
        return pcVar2;
      }
      cVar1 = *pcVar2;
      pcVar2 = &DAT_004192e9;
      if (cVar1 != '`') {
        pcVar2 = &DAT_004192de;
      }
    }
    else {
      if (((((*pbVar3 & 0xdf) != 0x47) || ((pbVar3[1] & 0xdf) != 0x42)) || (pbVar3[2] != 0x31)) ||
         (((pbVar3[3] != 0x38 || (pbVar3[4] != 0x30)) ||
          ((pbVar3[5] != 0x33 || ((pbVar3[6] != 0x30 || (pbVar3[7] != 0)))))))) goto LAB_0040d1a8;
      cVar1 = *pcVar2;
      pcVar2 = &DAT_004192e5;
      if (cVar1 != '`') {
        pcVar2 = &DAT_004192e2;
      }
    }
  }
  return pcVar2;
}


ulong FUN_0040d1d0(undefined *param_1,ulong param_2,char *param_3,ulong param_4,int param_5,
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
LAB_0040de21:
    if (param_2 != 0) {
      bVar3 = false;
      local_5b = false;
      bVar2 = true;
      local_70 = 0;
      goto LAB_0040da56;
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
      goto LAB_0040de21;
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
      param_8 = (char *)FUN_0040d0d0(&DAT_004192ed,param_5);
      param_9 = (char *)FUN_0040d0d0(&DAT_0041aa0f);
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
LAB_0040d268:
  uVar22 = 0;
  bVar5 = local_5b;
LAB_0040d278:
  bVar23 = param_4 != uVar22;
  if (param_4 == 0xffffffffffffffff) {
    bVar23 = param_3[uVar22] != '\0';
  }
  bVar26 = bVar6;
  if (!bVar23) goto LAB_0040d9f8;
  bVar20 = (bool)(param_5 != 2 & bVar6);
  __s1 = (byte *)(param_3 + uVar22);
  uVar16 = uVar15;
  bVar4 = bVar3;
  if (bVar20) {
    if (local_a0 == 0) {
LAB_0040d970:
      uVar19 = (ulong)*__s1;
      switch(uVar19) {
      case 0:
        goto switchD_0040d982_caseD_0;
      default:
        bVar20 = false;
        goto switchD_0040d7ee_caseD_1;
      case 7:
        bVar17 = 0x61;
        goto LAB_0040d685;
      case 8:
        bVar17 = 0x62;
        break;
      case 9:
switchD_0040d982_caseD_9:
        bVar17 = 0x74;
        break;
      case 10:
switchD_0040d982_caseD_a:
        bVar17 = 0x6e;
        break;
      case 0xb:
switchD_0040d982_caseD_b:
        bVar17 = 0x76;
        goto LAB_0040d685;
      case 0xc:
switchD_0040d982_caseD_c:
        bVar17 = 0x66;
LAB_0040d685:
        if (local_5c) {
          bVar25 = false;
          goto LAB_0040d5d8;
        }
LAB_0040d690:
        bVar23 = false;
        goto LAB_0040d44b;
      case 0xd:
        bVar20 = false;
switchD_0040d368_caseD_d:
        bVar25 = param_5 == 2;
        uVar19 = 0xd;
        bVar13 = 0x72;
        goto LAB_0040d5a0;
      case 0x20:
        bVar25 = false;
LAB_0040d9ca:
        uVar19 = 0x20;
        goto LAB_0040d992;
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
switchD_0040d368_caseD_21:
        bVar25 = false;
        goto LAB_0040d5ab;
      case 0x23:
      case 0x7e:
        bVar26 = false;
LAB_0040d9aa:
        if (uVar22 == 0) {
          bVar25 = false;
          bVar23 = bVar20;
          bVar20 = bVar26;
          goto LAB_0040d3b8;
        }
        bVar23 = false;
        goto LAB_0040d3cf;
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
LAB_0040d992:
        bVar24 = false;
        bVar23 = bVar20;
        bVar20 = bVar25;
        goto LAB_0040d3d1;
      case 0x27:
        bVar20 = false;
        goto switchD_0040d7ee_caseD_27;
      case 0x3f:
        bVar20 = false;
        goto switchD_0040d7ee_caseD_3f;
      case 0x5c:
        bVar20 = false;
        goto switchD_0040d368_caseD_5c;
      case 0x7b:
      case 0x7d:
        bVar20 = false;
        goto switchD_0040d7ee_caseD_7b;
      }
      bVar25 = false;
      bVar23 = false;
      goto joined_r0x0040d5c7;
    }
    if ((param_4 == 0xffffffffffffffff) && (1 < local_a0)) {
      param_4 = strlen(param_3);
    }
    if ((param_4 < uVar22 + local_a0) || (iVar7 = memcmp(__s1,local_78,local_a0), iVar7 != 0))
    goto LAB_0040d970;
    if (!local_5c) {
      uVar19 = (ulong)*__s1;
      bVar25 = bVar20;
      switch(uVar19) {
      case 0:
        goto switchD_0040d368_caseD_0;
      default:
        goto switchD_0040d7ee_caseD_1;
      case 7:
        bVar17 = 0x61;
        goto LAB_0040d690;
      case 8:
        bVar25 = false;
        bVar23 = false;
        bVar17 = 0x62;
        break;
      case 9:
        goto switchD_0040d982_caseD_9;
      case 10:
        goto switchD_0040d982_caseD_a;
      case 0xb:
        goto switchD_0040d982_caseD_b;
      case 0xc:
        goto switchD_0040d982_caseD_c;
      case 0xd:
        goto switchD_0040d368_caseD_d;
      case 0x20:
        goto LAB_0040d9ca;
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
        goto switchD_0040d368_caseD_21;
      case 0x23:
      case 0x7e:
        bVar26 = bVar20;
        goto LAB_0040d9aa;
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
        goto LAB_0040d992;
      case 0x27:
        goto switchD_0040d7ee_caseD_27;
      case 0x3f:
        goto switchD_0040d7ee_caseD_3f;
      case 0x5c:
        goto switchD_0040d368_caseD_5c;
      case 0x7b:
      case 0x7d:
        goto switchD_0040d7ee_caseD_7b;
      }
      goto LAB_0040d412;
    }
    goto LAB_0040d5ea;
  }
  uVar19 = (ulong)*__s1;
  switch(uVar19) {
  case 0:
    if (bVar6) {
switchD_0040d982_caseD_0:
      if (!local_5c) {
        bVar20 = false;
switchD_0040d368_caseD_0:
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
            goto LAB_0040d4c8;
          }
LAB_0040d70a:
          param_1[uVar16] = 0x5c;
          uVar15 = uVar16;
        }
        else if (uVar15 < uVar9) goto LAB_0040d70a;
        uVar16 = uVar15 + 1;
        bVar24 = bVar23;
        if (param_5 == 2) {
          bVar17 = 0x30;
          bVar23 = false;
          bVar4 = bVar3;
          goto LAB_0040d4c8;
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
LAB_0040d749:
        bVar17 = (byte)uVar19;
        bVar23 = false;
        uVar15 = uVar16;
        bVar4 = bVar3;
        if ((bool)(bVar6 ^ 1U | bVar26)) goto LAB_0040d4c8;
        goto LAB_0040d3d1;
      }
      bVar26 = param_5 == 2;
      goto LAB_0040d5dc;
    }
    if ((param_6 & 1) == 0) {
      bVar25 = param_5 == 2;
      uVar19 = 0;
      bVar23 = false;
      bVar20 = false;
      goto LAB_0040d3b8;
    }
    uVar22 = uVar22 + 1;
    goto LAB_0040d278;
  default:
switchD_0040d7ee_caseD_1:
    bVar25 = bVar6;
    if (sVar8 != 1) {
      local_40[0] = (mbstate_t)0x0;
      if (param_4 == 0xffffffffffffffff) {
        param_4 = strlen(param_3);
      }
      uVar21 = 0;
      do {
        uVar1 = uVar22 + uVar21;
        lVar11 = FUN_004129f0(&local_44,param_3 + uVar1,param_4 - uVar1,local_40);
        if (lVar11 == 0) break;
        if (lVar11 == -1) {
          bVar23 = false;
          goto LAB_0040e0fa;
        }
        if (lVar11 == -2) {
          if ((param_4 <= uVar1) || (param_3[uVar1] == '\0')) goto LAB_0040e237;
          goto LAB_0040e227;
        }
        if (((param_5 == 2) && (local_5c)) && (lVar11 != 1)) {
          pcVar12 = param_3 + uVar1 + 1;
          do {
            if (((byte)(*pcVar12 + 0xa5U) < 0x22) &&
               ((1L << (*pcVar12 + 0xa5U & 0x3f) & 0x20000002bU) != 0)) {
              param_5 = 2;
              goto LAB_0040d5dc;
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
      goto LAB_0040e0fa;
    }
    ppuVar10 = __ctype_b_loc();
    uVar21 = 1;
    bVar25 = ((*ppuVar10)[uVar19] & 0x4000) == 0;
    bVar23 = !bVar25;
    bVar25 = (bool)(bVar25 & bVar6);
    goto LAB_0040d7c4;
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
    goto LAB_0040d802;
  case 10:
    uVar19 = 10;
    bVar13 = 0x6e;
    goto LAB_0040d802;
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
LAB_0040d802:
    bVar25 = param_5 == 2;
    bVar20 = (bool)(local_5c & bVar25);
    if (bVar20) {
LAB_0040d81a:
      param_5 = 2;
      goto LAB_0040d5dc;
    }
    break;
  case 0x20:
    uVar19 = 0x20;
    goto LAB_0040d3a6;
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
LAB_0040d3a6:
    bVar25 = param_5 == 2;
    if ((local_5c) && (bVar25)) goto LAB_0040d81a;
    goto LAB_0040d3b8;
  case 0x23:
  case 0x7e:
LAB_0040d39d:
    bVar25 = param_5 == 2;
    if (uVar22 == 0) goto LAB_0040d3a6;
    goto LAB_0040d5ab;
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
    goto switchD_0040d7ee_caseD_25;
  case 0x27:
switchD_0040d7ee_caseD_27:
    bVar5 = bVar23;
    if (param_5 != 2) {
      bVar25 = false;
      uVar19 = 0x27;
      goto LAB_0040d3b8;
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
      goto LAB_0040d4c8;
    }
    goto LAB_0040d5dc;
  case 0x3f:
switchD_0040d7ee_caseD_3f:
    if (param_5 == 2) {
      if (!local_5c) {
        bVar17 = 0x3f;
        bVar24 = false;
        bVar23 = false;
        goto LAB_0040d4c8;
      }
      goto LAB_0040d5dc;
    }
    if (param_5 != 5) {
      bVar25 = param_5 == 2;
      uVar19 = 0x3f;
      bVar23 = false;
      goto LAB_0040d3b8;
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
        goto LAB_0040d749;
      }
      goto LAB_0040d5ea;
    }
    bVar25 = false;
    uVar19 = 0x3f;
    bVar23 = false;
    goto LAB_0040d3b8;
  case 0x5c:
    if (param_5 != 2) {
switchD_0040d368_caseD_5c:
      uVar19 = 0x5c;
      bVar17 = 0x5c;
      bVar13 = 0x5c;
      bVar25 = (bool)(bVar6 & local_5c & local_a0 != 0);
      if (!bVar25) break;
      uVar22 = uVar22 + 1;
      bVar23 = false;
      goto LAB_0040d4e4;
    }
    if (local_5c) goto LAB_0040d5dc;
    uVar22 = uVar22 + 1;
    bVar23 = false;
    bVar17 = 0x5c;
    goto LAB_0040d4e4;
  case 0x7b:
  case 0x7d:
switchD_0040d7ee_caseD_7b:
    bVar24 = param_4 != 1;
    if (param_4 == 0xffffffffffffffff) {
      bVar24 = param_3[1] != '\0';
    }
    bVar25 = param_5 == 2;
    if (!bVar24) goto LAB_0040d39d;
    goto LAB_0040d5ab;
  }
LAB_0040d5a0:
  if (!bVar6) {
LAB_0040d5ab:
    bVar23 = false;
    goto LAB_0040d3b8;
  }
  bVar23 = false;
  bVar17 = bVar13;
  goto joined_r0x0040d5c7;
LAB_0040d9f8:
  if ((uVar15 == 0) && ((bool)(local_5c & param_5 == 2))) {
    param_5 = 2;
LAB_0040d5dc:
    if (bVar26) {
      param_5 = 4;
    }
LAB_0040d5ea:
    uVar9 = FUN_0040d1d0(param_1,uVar9,param_3,param_4,param_5,param_6 & 0xfffffffd,0,param_8,
                         param_9);
    return uVar9;
  }
  bVar26 = (bool)(param_5 == 2 & (local_5c ^ 1U));
  bVar23 = (bool)(local_5c ^ 1U);
  if ((!bVar26) || (bVar23 = bVar26, !bVar5)) {
LAB_0040e2cd:
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
    uVar9 = FUN_0040d1d0(param_1,local_70,param_3,param_4,5,param_6,param_7,param_8,param_9);
    return uVar9;
  }
  local_5b = uVar9 == 0 && local_70 != 0;
  param_2 = local_70;
  bVar23 = bVar5;
  if (uVar9 != 0 || local_70 == 0) goto LAB_0040e2cd;
LAB_0040da56:
  *param_1 = 0x27;
  param_5 = 2;
  uVar15 = 1;
  local_78 = "\'";
  local_a0 = 1;
  local_5c = false;
  uVar9 = param_2;
  goto LAB_0040d268;
  while (__s1[uVar21] != 0) {
LAB_0040e227:
    uVar21 = uVar21 + 1;
    if (param_4 <= uVar22 + uVar21) break;
  }
LAB_0040e237:
  bVar23 = false;
LAB_0040e0fa:
  if (1 < uVar21) {
LAB_0040dcbe:
    bVar26 = false;
    uVar21 = uVar21 + uVar22;
    uVar16 = uVar22;
    do {
      bVar17 = (byte)uVar19;
      if (bVar25) {
        bVar26 = param_5 == 2;
        if (local_5c) goto LAB_0040d5dc;
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
        if (uVar21 <= uVar22) goto LAB_0040d45d;
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
        if (uVar21 <= uVar22) goto LAB_0040d4e4;
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
LAB_0040d7c4:
  if (bVar25) {
    bVar23 = false;
    bVar25 = bVar6;
    goto LAB_0040dcbe;
  }
switchD_0040d7ee_caseD_25:
  bVar25 = param_5 == 2;
LAB_0040d3b8:
  bVar17 = (byte)uVar19;
  bVar24 = (bool)((bVar6 ^ 1U | bVar25) ^ 1 | local_5c);
  bVar26 = bVar20;
  if (bVar24) {
LAB_0040d3cf:
    bVar24 = false;
    bVar20 = bVar26;
LAB_0040d3d1:
    bVar17 = (byte)uVar19;
    uVar16 = uVar15;
    bVar4 = bVar3;
    if ((param_7 == 0) || ((*(uint *)(param_7 + (uVar19 >> 5) * 4) >> (bVar17 & 0x1f) & 1) == 0))
    goto LAB_0040d4c8;
    bVar25 = param_5 == 2;
  }
  else {
LAB_0040d4c8:
    bVar25 = param_5 == 2;
    uVar15 = uVar16;
    bVar3 = bVar4;
    if (!bVar20) {
      uVar22 = uVar22 + 1;
      bVar3 = (bool)((bVar24 ^ 1U) & bVar4);
LAB_0040d4e4:
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
      goto LAB_0040d45d;
    }
  }
joined_r0x0040d5c7:
  if (local_5c) {
LAB_0040d5d8:
    bVar26 = (bool)(bVar6 & bVar25);
    goto LAB_0040d5dc;
  }
LAB_0040d412:
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
LAB_0040d44b:
  if (uVar15 < uVar9) {
    param_1[uVar15] = 0x5c;
  }
  uVar15 = uVar15 + 1;
  uVar22 = uVar22 + 1;
  bVar4 = bVar3;
LAB_0040d45d:
  bVar3 = bVar4;
  if (uVar15 < uVar9) {
    param_1[uVar15] = bVar17;
  }
  uVar15 = uVar15 + 1;
  if (!bVar23) {
    bVar2 = false;
  }
  goto LAB_0040d278;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_0040e400(int param_1,undefined param_2,undefined param_3,undefined *param_4)

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
  puVar8 = (undefined *)PTR_DAT_0061f4b8;
  if (DAT_0061f4d0 <= param_1) {
    if (param_1 == 0x7fffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_00411530();
    }
    if (PTR_DAT_0061f4b8 == &DAT_0061f4c0) {
      puVar8 = (undefined *)FUN_00411340(0);
      uVar6 = PTR_DAT_0061f4c8._4_4_;
      uVar5 = PTR_DAT_0061f4c8._0_4_;
      uVar3 = _UNK_0061f4c4;
      PTR_DAT_0061f4b8 = (undefined *)puVar8;
      *puVar8 = _DAT_0061f4c0;
      puVar8[1] = uVar3;
      puVar8[2] = uVar5;
      puVar8[3] = uVar6;
    }
    else {
      puVar8 = (undefined *)FUN_00411340(PTR_DAT_0061f4b8);
      PTR_DAT_0061f4b8 = (undefined *)puVar8;
    }
    memset(puVar8 + (long)DAT_0061f4d0 * 4,0,(long)((param_1 + 1) - DAT_0061f4d0) << 4);
    DAT_0061f4d0 = param_1 + 1;
  }
  uVar2 = param_4[1];
  puVar10 = (ulong *)(puVar8 + (long)param_1 * 4);
  uVar4 = *puVar10;
  __ptr = (undefined *)puVar10[1];
  uVar9 = FUN_0040d1d0(__ptr,uVar4,param_2,param_3,*param_4,uVar2 | 1,param_4 + 2,
                       *(undefined *)(param_4 + 10),*(undefined *)(param_4 + 0xc));
  if (uVar4 <= uVar9) {
    uVar9 = uVar9 + 1;
    *puVar10 = uVar9;
    if (__ptr != &DAT_006219e0) {
      free(__ptr);
    }
    __ptr = (undefined *)FUN_004112e0(uVar9);
    uVar3 = *param_4;
    puVar10[1] = (ulong)__ptr;
    FUN_0040d1d0(__ptr,uVar9,param_2,param_3,uVar3,uVar2 | 1,param_4 + 2,
                 *(undefined *)(param_4 + 10),*(undefined *)(param_4 + 0xc));
  }
  *piVar7 = iVar1;
  return __ptr;
}


void FUN_0040e5a0(undefined *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_00621ae0;
  }
  FUN_004114e0(param_1,0x38);
  *piVar2 = iVar1;
  return;
}


undefined FUN_0040e5e0(undefined *param_1)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = (undefined *)&DAT_00621ae0;
  }
  return *param_1;
}


void FUN_0040e5f0(undefined *param_1,undefined param_2)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = (undefined *)&DAT_00621ae0;
  }
  *param_1 = param_2;
  return;
}


uint FUN_0040e600(undefined *param_1,byte param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_00621ae0;
  }
  uVar1 = *(uint *)(param_1 + (ulong)(param_2 >> 5) * 4 + 8);
  uVar2 = uVar1 >> (param_2 & 0x1f);
  *(uint *)(param_1 + (ulong)(param_2 >> 5) * 4 + 8) =
       ((param_3 ^ uVar2) & 1) << (param_2 & 0x1f) ^ uVar1;
  return uVar2 & 1;
}


undefined FUN_0040e640(undefined *param_1,undefined param_2)

{
  undefined uVar1;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_00621ae0;
  }
  uVar1 = *(undefined *)(param_1 + 4);
  *(undefined *)(param_1 + 4) = param_2;
  return uVar1;
}


void FUN_0040e660(undefined *param_1,long param_2,long param_3)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = (undefined *)&DAT_00621ae0;
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


void FUN_0040e690(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                 undefined *param_5)

{
  int iVar1;
  int *piVar2;
  
  if (param_5 == (undefined *)0x0) {
    param_5 = (undefined *)&DAT_00621ae0;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  FUN_0040d1d0(param_1,param_2,param_3,param_4,*param_5,param_5[1],param_5 + 2,
               *(undefined *)(param_5 + 10),*(undefined *)(param_5 + 0xc));
  *piVar2 = iVar1;
  return;
}


undefined FUN_0040e710(undefined param_1,undefined param_2,long *param_3,undefined *param_4)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined uVar4;
  uint uVar5;
  
  if (param_4 == (undefined *)0x0) {
    param_4 = (undefined *)&DAT_00621ae0;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  uVar5 = (uint)(param_3 == (long *)0x0) | param_4[1];
  lVar3 = FUN_0040d1d0(0,0,param_1,param_2,*param_4,uVar5,param_4 + 2,*(undefined *)(param_4 + 10),
                       *(undefined *)(param_4 + 0xc));
  uVar4 = FUN_004112e0(lVar3 + 1);
  FUN_0040d1d0(uVar4,lVar3 + 1,param_1,param_2,*param_4,uVar5,param_4 + 2,
               *(undefined *)(param_4 + 10),*(undefined *)(param_4 + 0xc));
  *piVar2 = iVar1;
  if (param_3 != (long *)0x0) {
    *param_3 = lVar3;
  }
  return uVar4;
}


void FUN_0040e800(undefined param_1,undefined param_2,undefined param_3)

{
  FUN_0040e710(param_1,param_2,0,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040e810(void)

{
  void **ppvVar1;
  void *__ptr;
  undefined *__ptr_00;
  void **ppvVar2;
  
  __ptr_00 = PTR_DAT_0061f4b8;
  if (1 < DAT_0061f4d0) {
    ppvVar2 = (void **)(PTR_DAT_0061f4b8 + 0x18);
    ppvVar1 = (void **)(PTR_DAT_0061f4b8 + (ulong)(DAT_0061f4d0 - 2) * 0x10 + 0x28);
    do {
      __ptr = *ppvVar2;
      ppvVar2 = ppvVar2 + 2;
      free(__ptr);
    } while (ppvVar2 != ppvVar1);
  }
  if (*(undefined **)(__ptr_00 + 8) != &DAT_006219e0) {
    free(*(undefined **)(__ptr_00 + 8));
    _DAT_0061f4c0 = 0x100;
    PTR_DAT_0061f4c8 = &DAT_006219e0;
  }
  if (__ptr_00 != &DAT_0061f4c0) {
    free(__ptr_00);
    PTR_DAT_0061f4b8 = &DAT_0061f4c0;
  }
  DAT_0061f4d0 = 1;
  return;
}


void FUN_0040e8b0(undefined param_1,undefined param_2)

{
  FUN_0040e400(param_1,param_2,0xffffffffffffffff,&DAT_00621ae0);
  return;
}


void FUN_0040e8d0(void)

{
  FUN_0040e400();
  return;
}


void FUN_0040e8e0(undefined param_1)

{
  FUN_0040e400(0,param_1,0xffffffffffffffff,&DAT_00621ae0);
  return;
}


void FUN_0040e900(undefined param_1,undefined param_2)

{
  FUN_0040e400(0,param_1,param_2,&DAT_00621ae0);
  return;
}


void FUN_0040e920(undefined param_1,int param_2,undefined param_3)

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
    FUN_0040e400(param_1,param_3,0xffffffffffffffff,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_0040e990(undefined param_1,int param_2,undefined param_3,undefined param_4)

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
    FUN_0040e400(param_1,param_3,param_4,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_0040ea00(undefined param_1,undefined param_2)

{
  FUN_0040e920(0,param_1,param_2);
  return;
}


void FUN_0040ea10(undefined param_1,undefined param_2,undefined param_3)

{
  FUN_0040e990(0,param_1,param_2,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040ea20(undefined param_1,undefined param_2,byte param_3)

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
  
  local_18 = DAT_00621b10;
  local_48 = _DAT_00621ae0;
  uStack_40 = uRam0000000000621ae8;
  local_38 = _DAT_00621af0;
  uStack_30 = uRam0000000000621af8;
  puVar1 = (uint *)((long)&uStack_40 + (ulong)(param_3 >> 5) * 4);
  local_28 = _DAT_00621b00;
  uStack_20 = uRam0000000000621b08;
  uVar2 = *puVar1;
  *puVar1 = (~(uVar2 >> (param_3 & 0x1f)) & 1) << (param_3 & 0x1f) ^ uVar2;
  FUN_0040e400(0,param_1,param_2,&local_48);
  return;
}


void FUN_0040ea90(undefined param_1,char param_2)

{
  FUN_0040ea20(param_1,0xffffffffffffffff,(int)param_2);
  return;
}


void FUN_0040eaa0(undefined param_1)

{
  FUN_0040ea20(param_1,0xffffffffffffffff,0x3a);
  return;
}


void FUN_0040eac0(undefined param_1,undefined param_2)

{
  FUN_0040ea20(param_1,param_2,0x3a);
  return;
}


void FUN_0040ead0(undefined param_1,int param_2,undefined param_3)

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
    FUN_0040e400(param_1,param_3,0xffffffffffffffff,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040eb40(undefined param_1,long param_2,long param_3,undefined param_4,undefined param_5
                 )

{
  undefined local_48;
  undefined uStack_40;
  undefined local_38;
  undefined uStack_30;
  undefined local_28;
  long lStack_20;
  long local_18;
  
  uStack_40 = uRam0000000000621ae8;
  local_38 = _DAT_00621af0;
  uStack_30 = uRam0000000000621af8;
  local_28 = _DAT_00621b00;
  lStack_20 = uRam0000000000621b08;
  local_18 = DAT_00621b10;
  local_48 = CONCAT44((int)((ulong)_DAT_00621ae0 >> 0x20),10);
  if ((param_2 != 0) && (param_3 != 0)) {
    lStack_20 = param_2;
    local_18 = param_3;
    FUN_0040e400(param_1,param_4,param_5,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_0040ebb0(void)

{
  FUN_0040eb40();
  return;
}


void FUN_0040ebc0(undefined param_1,undefined param_2,undefined param_3)

{
  FUN_0040eb40(0,param_1,param_2,param_3,0xffffffffffffffff);
  return;
}


void FUN_0040ebe0(undefined param_1,undefined param_2,undefined param_3,undefined param_4)

{
  FUN_0040eb40(0,param_1,param_2,param_3,param_4);
  return;
}


void FUN_0040ec00(void)

{
  FUN_0040e400();
  return;
}


void FUN_0040ec10(undefined param_1,undefined param_2)

{
  FUN_0040e400(0,param_1,param_2,&DAT_0061f480);
  return;
}


void FUN_0040ec30(undefined param_1,undefined param_2)

{
  FUN_0040e400(param_1,param_2,0xffffffffffffffff,&DAT_0061f480);
  return;
}


void FUN_0040ec50(undefined param_1)

{
  FUN_0040e400(0,param_1,0xffffffffffffffff,&DAT_0061f480);
  return;
}


ulong FUN_0040ec70(uint param_1,char *param_2,uint param_3,char *param_4,uint param_5)

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


ssize_t FUN_0040eec0(int param_1,void *param_2,ulong param_3)

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
    if (param_3 < 0x7fffe001) break;
    if (*piVar2 != 0x16) {
      return sVar1;
    }
    param_3 = 0x7fffe000;
  }
  return sVar1;
}


ssize_t FUN_0040ef20(int param_1,void *param_2,ulong param_3)

{
  ssize_t sVar1;
  int *piVar2;
  
  while( true ) {
    do {
      sVar1 = write(param_1,param_2,param_3);
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


bool FUN_0040ef80(undefined param_1,undefined param_2)

{
  int iVar1;
  void *__s1;
  void *__s2;
  size_t __n;
  size_t sVar2;
  char *__filename;
  char *__filename_00;
  int *piVar3;
  bool bVar4;
  stat local_158;
  stat local_c8;
  
  bVar4 = false;
  __s1 = (void *)FUN_0040ad40();
  __s2 = (void *)FUN_0040ad40(param_2);
  __n = FUN_0040ada0(__s1);
  sVar2 = FUN_0040ada0(__s2);
  if ((__n == sVar2) && (iVar1 = memcmp(__s1,__s2,__n), iVar1 == 0)) {
    __filename = (char *)FUN_0040ac60(param_1);
    __filename_00 = (char *)FUN_0040ac60(param_2);
    iVar1 = __xstat(1,__filename,&local_158);
    if (iVar1 != 0) {
      piVar3 = __errno_location();
      error(1,*piVar3,&DAT_0041aa9b,__filename);
    }
    iVar1 = __xstat(1,__filename_00,&local_c8);
    if (iVar1 != 0) {
      piVar3 = __errno_location();
      error(1,*piVar3,&DAT_0041aa9b,__filename_00);
    }
    bVar4 = local_158.st_ino == local_c8.st_ino && local_158.st_dev == local_c8.st_dev;
    free(__filename);
    free(__filename_00);
  }
  return bVar4;
}


ulong FUN_0040f0b0(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  
  uVar2 = 0xffffffff;
  uVar1 = *(ulong *)(param_2 + 8);
  bVar3 = uVar1 <= *(ulong *)(param_1 + 8);
  if (bVar3) {
    uVar2 = (ulong)(bVar3 && *(ulong *)(param_1 + 8) != uVar1);
  }
  return uVar2;
}


void FUN_0040f0d0(char **param_1,char **param_2)

{
  strcmp(*param_1,*param_2);
  return;
}


undefined * FUN_0040f0e0(DIR *param_1,uint param_2)

{
  ulong __n;
  int iVar1;
  __compar_fn_t __compar;
  char cVar2;
  int *piVar3;
  dirent *pdVar4;
  size_t sVar5;
  char *pcVar6;
  undefined *puVar7;
  char *pcVar8;
  undefined *__ptr;
  char **__ptr_00;
  char **ppcVar9;
  char **ppcVar10;
  ulong uVar11;
  long lVar12;
  ulong __nmemb;
  ulong uVar13;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  
  __compar = *(__compar_fn_t *)(&DAT_0041a020 + (ulong)param_2 * 8);
  if (param_1 == (DIR *)0x0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    __ptr_00 = (char **)0x0;
    piVar3 = __errno_location();
    __ptr = (undefined *)0x0;
    local_58 = 0;
    local_68 = 0;
    __nmemb = 0;
    uVar13 = 0;
LAB_0040f13c:
    while( true ) {
      *piVar3 = 0;
      pdVar4 = readdir(param_1);
      if (pdVar4 == (dirent *)0x0) break;
      pcVar6 = pdVar4->d_name;
      cVar2 = pdVar4->d_name[0];
      if (cVar2 != '.') goto LAB_0040f138;
      if (pdVar4->d_name[1] == '.') {
        cVar2 = pdVar4->d_name[2];
        goto LAB_0040f138;
      }
      if (pdVar4->d_name[1] != '\0') goto LAB_0040f175;
    }
    iVar1 = *piVar3;
    if (iVar1 == 0) {
      if (__compar == (__compar_fn_t)0x0) {
        if (local_68 == uVar13) {
          __ptr = (undefined *)FUN_00411340(__ptr,local_68 + 1);
          puVar7 = __ptr + local_68;
        }
        else {
          puVar7 = __ptr + uVar13;
        }
      }
      else {
        if (__nmemb == 0) {
          puVar7 = (undefined *)FUN_004112e0(uVar13 + 1);
          __ptr = puVar7;
        }
        else {
          pcVar6 = (char *)0x0;
          qsort(__ptr_00,__nmemb,0x10,__compar);
          __ptr = (undefined *)FUN_004112e0(uVar13 + 1);
          ppcVar9 = __ptr_00;
          do {
            ppcVar10 = ppcVar9 + 2;
            pcVar8 = stpcpy(__ptr + (long)pcVar6,*ppcVar9);
            pcVar6 = pcVar8 + (long)(pcVar6 + (1 - (long)(__ptr + (long)pcVar6)));
            free(*ppcVar9);
            ppcVar9 = ppcVar10;
          } while (ppcVar10 != __ptr_00 + __nmemb * 2);
          puVar7 = __ptr + (long)pcVar6;
        }
        free(__ptr_00);
      }
      *puVar7 = 0;
      puVar7 = __ptr;
    }
    else {
      free(__ptr_00);
      puVar7 = (undefined *)0x0;
      free(__ptr);
      *piVar3 = iVar1;
    }
  }
  return puVar7;
LAB_0040f138:
  if (cVar2 == '\0') goto LAB_0040f13c;
LAB_0040f175:
  sVar5 = strlen(pcVar6);
  __n = sVar5 + 1;
  if (__compar != (__compar_fn_t)0x0) {
    local_60 = __nmemb + 1;
    if (__nmemb == local_58) {
      if (__ptr_00 == (char **)0x0) {
        if (__nmemb == 0) {
          local_58 = 8;
          lVar12 = 0x80;
          local_60 = 1;
        }
        else {
          lVar12 = __nmemb << 4;
          if ((lVar12 < 0) || (__nmemb >> 0x3c != 0)) goto LAB_0040f418;
        }
      }
      else {
        if (0x555555555555554 < __nmemb) goto LAB_0040f418;
        local_58 = (__nmemb >> 1) + local_60;
        lVar12 = local_58 * 0x10;
      }
      __ptr_00 = (char **)FUN_00411340(__ptr_00,lVar12);
    }
    pcVar6 = (char *)FUN_00411510(pcVar6);
    __ptr_00[__nmemb * 2] = pcVar6;
    (__ptr_00 + __nmemb * 2)[1] = (char *)pdVar4->d_ino;
    __nmemb = local_60;
    uVar13 = uVar13 + __n;
    goto LAB_0040f13c;
  }
  uVar11 = uVar13 + __n;
  if (local_68 - uVar13 <= __n) {
    if (CARRY8(uVar13,__n) != false) {
LAB_0040f418:
                    /* WARNING: Subroutine does not return */
      FUN_00411530();
    }
    if (__ptr == (undefined *)0x0) {
      if (uVar11 == 0) {
        local_68 = 0x80;
      }
      else {
        local_68 = uVar11;
        if ((long)uVar11 < 0) goto LAB_0040f418;
      }
    }
    else {
      if (0x5555555555555553 < uVar11) goto LAB_0040f418;
      local_68 = uVar11 + 1 + (uVar11 >> 1);
    }
    __ptr = (undefined *)FUN_00411340(__ptr,local_68);
  }
  memcpy(__ptr + uVar13,pcVar6,__n);
  uVar13 = uVar11;
  goto LAB_0040f13c;
}


void * FUN_0040f480(undefined param_1,undefined param_2)

{
  int iVar1;
  DIR *__dirp;
  void *__ptr;
  int *piVar2;
  
  __dirp = (DIR *)FUN_0040abc0();
  if (__dirp == (DIR *)0x0) {
    return (void *)0x0;
  }
  __ptr = (void *)FUN_0040f0e0(__dirp,param_2);
  iVar1 = closedir(__dirp);
  if (iVar1 == 0) {
    return __ptr;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  free(__ptr);
  *piVar2 = iVar1;
  return (void *)0x0;
}


void FUN_0040f4f0(undefined *param_1)

{
  *param_1 = 0;
  return;
}


int FUN_0040f500(int *param_1)

{
  if (*param_1 != 4) {
    return 0;
  }
  return param_1[1];
}


int FUN_0040f520(undefined *param_1,char *param_2,uint param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  int __fd;
  int iVar3;
  __pid_t _Var4;
  int *piVar5;
  ulong uVar6;
  bool bVar7;
  
  if (param_4 == (int *)0x0) {
    __fd = -1;
  }
  else {
    __fd = __open_2(param_2,(param_3 & 1) << 0x11 | 0x10900);
    *param_4 = __fd;
    piVar5 = __errno_location();
    iVar3 = *piVar5;
    param_4[1] = iVar3;
    if (__fd < 0) {
      if (iVar3 != 0xd) {
        return -1;
      }
    }
    else if ((param_3 & 2) != 0) {
      return 0;
    }
  }
  uVar1 = *(uint *)param_1;
  if (5 < uVar1) {
LAB_0040f750:
                    /* WARNING: Subroutine does not return */
    __assert_fail("0","lib/savewd.c",99,"savewd_save");
  }
  uVar6 = 1L << ((byte)uVar1 & 0x3f);
  if ((uVar6 & 0x36) == 0) {
    if ((uVar6 & 8) == 0) {
      if (uVar1 != 0) goto LAB_0040f750;
      iVar3 = FUN_0040ae10(&DAT_00418d7b,0);
      if (iVar3 < 0) {
        piVar5 = __errno_location();
        iVar3 = *piVar5;
        if ((iVar3 == 0xd) || (iVar3 == 0x74)) {
          *param_1 = 0xffffffff00000003;
          goto LAB_0040f68b;
        }
        *(undefined *)param_1 = 4;
        *(int *)((long)param_1 + 4) = iVar3;
      }
      else {
        *(undefined *)param_1 = 1;
        *(int *)((long)param_1 + 4) = iVar3;
      }
    }
    else if (*(int *)((long)param_1 + 4) < 0) {
LAB_0040f68b:
      _Var4 = fork();
      *(__pid_t *)((long)param_1 + 4) = _Var4;
      if (_Var4 != 0) {
        if (0 < _Var4) {
          bVar7 = true;
          iVar3 = -2;
          goto LAB_0040f640;
        }
        *(undefined *)param_1 = 4;
        piVar5 = __errno_location();
        *(int *)((long)param_1 + 4) = *piVar5;
      }
    }
  }
  if (__fd < 0) {
    iVar3 = chdir(param_2);
    if (iVar3 != 0) {
      return iVar3;
    }
  }
  else {
    iVar3 = fchdir(__fd);
    if (iVar3 != 0) {
      bVar7 = param_4 == (int *)0x0;
      goto LAB_0040f640;
    }
  }
  switch(*(undefined *)param_1) {
  default:
                    /* WARNING: Subroutine does not return */
    __assert_fail("0","lib/savewd.c",0x9f,"savewd_chdir");
  case 1:
    *(undefined *)param_1 = 2;
    break;
  case 2:
  case 4:
  case 5:
    break;
  case 3:
    if (*(int *)((long)param_1 + 4) != 0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("wd->val.child == 0","lib/savewd.c",0x9b,"savewd_chdir");
    }
  }
  bVar7 = param_4 == (int *)0x0;
  iVar3 = 0;
LAB_0040f640:
  if ((-1 < __fd) && (bVar7)) {
    piVar5 = __errno_location();
    iVar2 = *piVar5;
    close(__fd);
    *piVar5 = iVar2;
    return iVar3;
  }
  return iVar3;
}


uint FUN_0040f770(uint *param_1,int param_2)

{
  __pid_t _Var1;
  uint uVar2;
  uint *puVar3;
  int *piVar4;
  uint local_1c;
  
  if (4 < *param_1) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("0","lib/savewd.c",0xe2,"savewd_restore");
  }
  switch(*param_1) {
  default:
    return 0;
  case 2:
    uVar2 = fchdir(param_1[1]);
    if (uVar2 == 0) {
      *param_1 = 1;
      return uVar2;
    }
    puVar3 = (uint *)__errno_location();
    uVar2 = *puVar3;
    close(param_1[1]);
    *param_1 = 4;
    param_1[1] = uVar2;
    break;
  case 3:
    uVar2 = param_1[1];
    if (uVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      _exit(param_2);
    }
    if ((int)uVar2 < 1) {
      return 0;
    }
    do {
      _Var1 = waitpid(uVar2,(int *)&local_1c,0);
      if (-1 < _Var1) {
        param_1[1] = 0xffffffff;
        if ((local_1c & 0x7f) != 0) {
          raise(local_1c & 0x7f);
        }
        return local_1c >> 8 & 0xff;
      }
      piVar4 = __errno_location();
    } while (*piVar4 == 4);
                    /* WARNING: Subroutine does not return */
    __assert_fail("(*__errno_location ()) == 4","lib/savewd.c",0xd8,"savewd_restore");
  case 4:
    uVar2 = param_1[1];
    puVar3 = (uint *)__errno_location();
  }
  *puVar3 = uVar2;
  return 0xffffffff;
}


void FUN_0040f8a0(uint *param_1)

{
  if (4 < *param_1) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("0","lib/savewd.c",0xfb,"savewd_finish");
  }
  switch(*param_1) {
  case 1:
  case 2:
    close(param_1[1]);
    break;
  case 3:
    if (-1 < (int)param_1[1]) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("wd->val.child < 0","lib/savewd.c",0xf7,"savewd_finish");
    }
  }
  *param_1 = 5;
  return;
}


int FUN_0040f910(int param_1,undefined *param_2,code *param_3,undefined param_4)

{
  char **ppcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  undefined *puVar7;
  int local_40;
  int local_3c;
  
  iVar2 = param_1 + -1;
  local_40 = 0;
  if (-1 < iVar2) {
    iVar3 = iVar2;
    if (*(char *)param_2[iVar2] == '/') {
      lVar5 = (long)(param_1 + -2);
      do {
        iVar3 = (int)lVar5;
        if (iVar3 < 0) break;
        ppcVar1 = (char **)(param_2 + lVar5);
        lVar5 = lVar5 + -1;
      } while (**ppcVar1 == '/');
    }
    if (0 < iVar3) {
      iVar6 = 0;
      puVar7 = param_2;
      do {
        if (((local_40 != 3) || (local_3c < 1)) &&
           (iVar4 = (*param_3)(*puVar7,&local_40,param_4), iVar6 < iVar4)) {
          iVar6 = iVar4;
        }
        if ((*(char *)puVar7[1] != '/') && (iVar4 = FUN_0040f770(&local_40,iVar6), iVar6 < iVar4)) {
          iVar6 = iVar4;
        }
        puVar7 = puVar7 + 1;
      } while (puVar7 != param_2 + (ulong)(iVar3 - 1) + 1);
      goto LAB_0040fa00;
    }
  }
  iVar6 = 0;
  iVar3 = 0;
LAB_0040fa00:
  FUN_0040f8a0(&local_40);
  if (iVar3 < param_1) {
    puVar7 = param_2 + iVar3;
    do {
      iVar4 = (*param_3)(*puVar7,&local_40,param_4);
      if (iVar6 < iVar4) {
        iVar6 = iVar4;
      }
      puVar7 = puVar7 + 1;
    } while (puVar7 != param_2 + (ulong)(uint)(iVar2 - iVar3) + (long)iVar3 + 1);
  }
  return iVar6;
}


int FUN_0040fa60(char *param_1)

{
  int iVar1;
  int *piVar2;
  stat sStack_98;
  
  iVar1 = __lxstat(1,param_1,&sStack_98);
  piVar2 = __errno_location();
  if ((iVar1 != 0) && (*piVar2 != 0x4b)) {
    return -(uint)(*piVar2 != 2);
  }
  *piVar2 = 0x11;
  return -1;
}


void FUN_0040fac0(char *param_1)

{
  mkdir(param_1,0x1c0);
  return;
}


void FUN_0040fad0(char *param_1,uint *param_2)

{
  open(param_1,*param_2 & 0xffffff3c | 0xc2,0x180);
  return;
}


void FUN_0040faf0(void)

{
                    /* WARNING: Subroutine does not return */
  __assert_fail("! \"invalid KIND in __gen_tempname\"","lib/tempname.c",0x147,"gen_tempname_len");
}


int FUN_0040fb10(char *param_1,int param_2,undefined param_3,code *param_4,ulong param_5)

{
  int iVar1;
  int *piVar2;
  size_t sVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  
  piVar2 = __errno_location();
  iVar7 = *piVar2;
  sVar3 = strlen(param_1);
  if ((long)param_2 + param_5 <= sVar3) {
    lVar4 = sVar3 - ((long)param_2 + param_5);
    sVar3 = strspn(param_1 + lVar4,"X");
    if (param_5 <= sVar3) {
      lVar5 = FUN_00413800(0,param_5);
      if (lVar5 == 0) {
        return -1;
      }
      iVar8 = 0x3a2f8;
      while( true ) {
        pcVar9 = param_1 + lVar4;
        if (param_5 != 0) {
          do {
            pcVar10 = pcVar9 + 1;
            lVar6 = FUN_00413840(lVar5,0x3d);
            *pcVar9 = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"[lVar6];
            pcVar9 = pcVar10;
          } while (pcVar10 != param_1 + lVar4 + param_5);
        }
        iVar1 = (*param_4)(param_1,param_3);
        if (-1 < iVar1) break;
        if (*piVar2 != 0x11) {
          iVar1 = -1;
          iVar7 = *piVar2;
          goto LAB_0040fc25;
        }
        iVar8 = iVar8 + -1;
        if (iVar8 == 0) {
          FUN_00413960(lVar5);
          *piVar2 = 0x11;
          return -1;
        }
      }
      *piVar2 = iVar7;
LAB_0040fc25:
      FUN_00413960(lVar5);
      *piVar2 = iVar7;
      return iVar1;
    }
  }
  *piVar2 = 0x16;
  return -1;
}


ulong FUN_0040fc70(char *param_1,undefined param_2,undefined param_3,code *param_4)

{
  char *__s;
  uint uVar1;
  int *piVar2;
  size_t sVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  undefined extraout_RDX;
  int iVar9;
  char *pcVar10;
  char *pcVar11;
  undefined local_c [3];
  
  local_c[0] = param_3;
  if ((uint)param_4 < 3) {
    uVar7 = FUN_0040fb10(param_1,param_2,local_c,(&PTR_FUN_0041a180)[(ulong)param_4 & 0xffffffff]);
    return uVar7;
  }
  FUN_0040faf0();
  iVar9 = (int)param_2;
  if ((uint)param_4 < 3) {
    uVar7 = FUN_0040fb10();
    return uVar7;
  }
  FUN_0040faf0();
  piVar2 = __errno_location();
  iVar8 = *piVar2;
  sVar3 = strlen(param_1);
  if ((long)iVar9 + 6U <= sVar3) {
    lVar4 = sVar3 - ((long)iVar9 + 6U);
    __s = param_1 + lVar4;
    sVar3 = strspn(__s,"X");
    if (5 < sVar3) {
      lVar5 = FUN_00413800(0,6);
      if (lVar5 == 0) {
        uVar1 = 0xffffffff;
      }
      else {
        iVar9 = 0x3a2f8;
        pcVar10 = __s;
        do {
          do {
            pcVar11 = pcVar10 + 1;
            lVar6 = FUN_00413840(lVar5,0x3d);
            *pcVar10 = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"[lVar6];
            pcVar10 = pcVar11;
          } while (pcVar11 != param_1 + lVar4 + 6);
          uVar1 = (*param_4)(param_1,extraout_RDX);
          if (-1 < (int)uVar1) {
            *piVar2 = iVar8;
LAB_0040fc25:
            FUN_00413960(lVar5);
            *piVar2 = iVar8;
            goto LAB_0040fc40;
          }
          if (*piVar2 != 0x11) {
            uVar1 = 0xffffffff;
            iVar8 = *piVar2;
            goto LAB_0040fc25;
          }
          iVar9 = iVar9 + -1;
          pcVar10 = __s;
        } while (iVar9 != 0);
        FUN_00413960(lVar5);
        *piVar2 = 0x11;
        uVar1 = 0xffffffff;
      }
      goto LAB_0040fc40;
    }
  }
  *piVar2 = 0x16;
  uVar1 = 0xffffffff;
LAB_0040fc40:
  return (ulong)uVar1;
}


ulong FUN_0040fca0(char *param_1,undefined param_2,undefined param_3,code *param_4)

{
  char *__s;
  uint uVar1;
  int *piVar2;
  size_t sVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  undefined extraout_RDX;
  int iVar9;
  char *pcVar10;
  char *pcVar11;
  undefined local_c [3];
  
  local_c[0] = param_3;
  if ((uint)param_4 < 3) {
    uVar7 = FUN_0040fb10(param_1,param_2,local_c,(&PTR_FUN_0041a180)[(ulong)param_4 & 0xffffffff],6)
    ;
    return uVar7;
  }
  FUN_0040faf0();
  piVar2 = __errno_location();
  iVar8 = *piVar2;
  sVar3 = strlen(param_1);
  uVar7 = (long)(int)param_2 + 6;
  if (uVar7 <= sVar3) {
    lVar4 = sVar3 - uVar7;
    __s = param_1 + lVar4;
    sVar3 = strspn(__s,"X");
    if (5 < sVar3) {
      lVar5 = FUN_00413800(0,6);
      if (lVar5 == 0) {
        uVar1 = 0xffffffff;
      }
      else {
        iVar9 = 0x3a2f8;
        pcVar10 = __s;
        do {
          do {
            pcVar11 = pcVar10 + 1;
            lVar6 = FUN_00413840(lVar5,0x3d);
            *pcVar10 = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"[lVar6];
            pcVar10 = pcVar11;
          } while (pcVar11 != param_1 + lVar4 + 6);
          uVar1 = (*param_4)(param_1,extraout_RDX);
          if (-1 < (int)uVar1) {
            *piVar2 = iVar8;
LAB_0040fc25:
            FUN_00413960(lVar5);
            *piVar2 = iVar8;
            goto LAB_0040fc40;
          }
          if (*piVar2 != 0x11) {
            uVar1 = 0xffffffff;
            iVar8 = *piVar2;
            goto LAB_0040fc25;
          }
          iVar9 = iVar9 + -1;
          pcVar10 = __s;
        } while (iVar9 != 0);
        FUN_00413960(lVar5);
        *piVar2 = 0x11;
        uVar1 = 0xffffffff;
      }
      goto LAB_0040fc40;
    }
  }
  *piVar2 = 0x16;
  uVar1 = 0xffffffff;
LAB_0040fc40:
  return (ulong)uVar1;
}


int FUN_0040fce0(char *param_1,int param_2,undefined param_3,code *param_4)

{
  char *__s;
  int iVar1;
  int *piVar2;
  size_t sVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  
  piVar2 = __errno_location();
  iVar7 = *piVar2;
  sVar3 = strlen(param_1);
  if ((long)param_2 + 6U <= sVar3) {
    lVar4 = sVar3 - ((long)param_2 + 6U);
    __s = param_1 + lVar4;
    sVar3 = strspn(__s,"X");
    if (5 < sVar3) {
      lVar5 = FUN_00413800(0,6);
      if (lVar5 == 0) {
        return -1;
      }
      iVar8 = 0x3a2f8;
      pcVar9 = __s;
      while( true ) {
        do {
          pcVar10 = pcVar9 + 1;
          lVar6 = FUN_00413840(lVar5,0x3d);
          *pcVar9 = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"[lVar6];
          pcVar9 = pcVar10;
        } while (pcVar10 != param_1 + lVar4 + 6);
        iVar1 = (*param_4)(param_1,param_3);
        if (-1 < iVar1) break;
        if (*piVar2 != 0x11) {
          iVar1 = -1;
          iVar7 = *piVar2;
          goto LAB_0040fc25;
        }
        iVar8 = iVar8 + -1;
        pcVar9 = __s;
        if (iVar8 == 0) {
          FUN_00413960(lVar5);
          *piVar2 = 0x11;
          return -1;
        }
      }
      *piVar2 = iVar7;
LAB_0040fc25:
      FUN_00413960(lVar5);
      *piVar2 = iVar7;
      return iVar1;
    }
  }
  *piVar2 = 0x16;
  return -1;
}


uint FUN_0040fcf0(uint param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  if (2 < param_1) {
    return param_1;
  }
  uVar2 = FUN_004143d0();
  piVar3 = __errno_location();
  iVar1 = *piVar3;
  close(param_1);
  *piVar3 = iVar1;
  return uVar2;
}


ulong FUN_0040fd40(ulong *param_1,ulong param_2)

{
  return *param_1 % param_2;
}


ulong FUN_0040fd50(ulong *param_1,ulong *param_2)

{
  return *param_2 & 0xffffffffffffff00 | (ulong)(*param_1 == *param_2);
}


uint FUN_0040fd60(char *param_1,undefined *param_2,long param_3,uint param_4,undefined param_5,
                 undefined param_6)

{
  ulong uVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  undefined *puVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  ulong uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  char cVar17;
  ulong in_stack_fffffffffffffeb8;
  ulong in_stack_fffffffffffffec0;
  ulong uVar18;
  ulong *puVar19;
  undefined local_f8;
  undefined local_f0;
  undefined local_ec;
  ulong local_e8;
  long local_e0;
  ulong local_d8;
  ulong local_d0;
  stat local_c8;
  
  uVar1 = param_2[0xb];
  uVar8 = *(ulong *)(param_3 + 0x58);
  iVar15 = (int)*(undefined *)(param_3 + 0x60);
  param_4 = param_4 & 1;
  iVar14 = (int)param_2[0xc];
  if (param_4 == 0) goto LAB_0040fe50;
  uVar6 = in_stack_fffffffffffffeb8 & 0xffffffffffffff00 | (ulong)(uVar1 == uVar8);
  bVar3 = iVar14 == iVar15 && uVar1 == uVar8;
  uVar18 = in_stack_fffffffffffffec0 & 0xffffffffffffff00 | (ulong)bVar3;
  if (bVar3) {
    return 0;
  }
  if ((long)uVar1 < (long)(uVar8 - 1)) {
    return 0xffffffff;
  }
  if ((long)uVar8 < (long)(uVar1 - 1)) {
    return param_4;
  }
  if (DAT_00621b20 == 0) {
    DAT_00621b20 = FUN_0040bb50(0x10,0,FUN_0040fd40,FUN_0040fd50,free,param_6,uVar6,uVar18);
    cVar17 = (char)uVar6;
    if (DAT_00621b20 != 0) goto LAB_0040fde1;
LAB_0040fee4:
    puVar5 = &local_f8;
    local_f0 = 2000000000;
    local_ec = 0;
    iVar4 = 2000000000;
  }
  else {
LAB_0040fde1:
    lVar2 = DAT_00621b20;
    cVar17 = (char)uVar6;
    puVar5 = DAT_00621b18;
    if (DAT_00621b18 == (undefined *)0x0) {
      puVar5 = (undefined *)malloc(0x10);
      DAT_00621b18 = puVar5;
      if (puVar5 != (undefined *)0x0) {
        *(undefined *)(puVar5 + 1) = 2000000000;
        *(undefined *)((long)puVar5 + 0xc) = 0;
        goto LAB_0040fdf1;
      }
LAB_00410390:
      local_f8 = *param_2;
      puVar5 = (undefined *)FUN_0040b8e0(DAT_00621b20,&local_f8);
      if (puVar5 == (undefined *)0x0) goto LAB_0040fee4;
    }
    else {
LAB_0040fdf1:
      *puVar5 = *param_2;
      puVar5 = (undefined *)FUN_0040c2f0(lVar2);
      if (puVar5 == (undefined *)0x0) {
        if (DAT_00621b20 == 0) goto LAB_0040fee4;
        goto LAB_00410390;
      }
      if (DAT_00621b18 == puVar5) {
        DAT_00621b18 = (undefined *)0x0;
      }
    }
    iVar4 = *(int *)(puVar5 + 1);
    if (*(char *)((long)puVar5 + 0xc) != '\0') {
      uVar8 = uVar8 & (long)(int)~(uint)(iVar4 == 2000000000);
      iVar15 = iVar15 - iVar15 % iVar4;
      goto LAB_0040fe50;
    }
  }
  iVar10 = (int)param_2[10];
  iVar7 = iVar10 / 10;
  iVar9 = (int)param_2[0xe] / 10;
  iVar11 = iVar14 / 10;
  if (((int)param_2[0xe] % 10 | iVar10 % 10 | iVar14 % 10) == 0) {
    local_e8 = param_2[9];
    uVar6 = uVar8;
    if (iVar4 < 0xb) {
      *(undefined *)(puVar5 + 1) = 10;
      uVar13 = 10;
    }
    else {
      uVar13 = 10;
      if ((iVar7 % 10 | iVar9 % 10 | iVar11 % 10) == 0) {
        iVar16 = 8;
        do {
          uVar12 = (int)uVar13 * 10;
          uVar13 = (ulong)uVar12;
          iVar7 = iVar7 / 10;
          iVar9 = iVar9 / 10;
          iVar11 = iVar11 / 10;
          if ((iVar4 <= (int)uVar12) || ((iVar7 % 10 | iVar9 % 10 | iVar11 % 10) != 0)) {
            uVar18 = (ulong)(uVar12 == 2000000000);
            *(uint *)(puVar5 + 1) = uVar12;
            uVar6 = (long)(int)~(uint)(uVar12 == 2000000000) & uVar8;
            goto LAB_004100f5;
          }
          iVar16 = iVar16 + -1;
        } while (iVar16 != 0);
        if (((local_e8 | uVar1 | param_2[0xd]) & 1) == 0) {
          *(undefined *)(puVar5 + 1) = 2000000000;
          uVar13 = 2000000000;
          uVar18 = 1;
          uVar6 = uVar8 & 0xfffffffffffffffe;
        }
        else {
          *(undefined *)(puVar5 + 1) = 1000000000;
          uVar13 = 1000000000;
        }
      }
      else {
        *(undefined *)(puVar5 + 1) = 10;
      }
    }
LAB_004100f5:
    if ((long)uVar8 < (long)uVar1) {
      return param_4;
    }
    if ((iVar15 <= iVar14) && (cVar17 != '\0')) {
      return param_4;
    }
    if ((long)uVar1 < (long)uVar6) {
      return 0xffffffff;
    }
    uVar12 = (uint)uVar13;
    if ((uVar1 == uVar6) && (iVar14 < iVar15 - iVar15 % (int)uVar12)) {
      return 0xffffffff;
    }
    local_e0 = (long)iVar10;
    local_d8 = uVar18 & 0xff | uVar1;
    local_d0 = (ulong)((int)(uVar13 / 9) + iVar14);
    puVar19 = &local_e8;
    if ((*(uint *)(param_2 + 3) & 0xf000) == 0xa000) {
      iVar4 = FUN_00410ab0(param_1,puVar19);
    }
    else {
      iVar4 = FUN_00410aa0();
    }
    if (iVar4 != 0) {
      return 0xfffffffe;
    }
    if ((*(uint *)(param_2 + 3) & 0xf000) == 0xa000) {
      iVar4 = __lxstat(1,param_1,&local_c8);
    }
    else {
      iVar4 = __xstat(1,param_1,&local_c8);
    }
    local_d0 = (ulong)iVar14;
    if ((local_d0 ^ local_c8.st_mtim.tv_nsec | local_c8.st_mtim.tv_sec ^ uVar1 | (long)iVar4) != 0)
    {
      local_d8 = uVar1;
      if ((*(uint *)(param_2 + 3) & 0xf000) == 0xa000) {
        FUN_00410ab0(param_1,puVar19);
      }
      else {
        FUN_00410aa0();
      }
      if (iVar4 != 0) {
        return 0xfffffffe;
      }
    }
    iVar4 = (int)local_c8.st_mtim.tv_nsec + ((uint)local_c8.st_mtim.tv_sec & 1) * 1000000000;
    if (iVar4 == (iVar4 / 10) * 10) {
      if (uVar12 == 10) {
        param_4 = 10;
        goto LAB_004104c0;
      }
      iVar10 = 9;
      param_4 = 10;
      do {
        iVar4 = iVar4 / 10;
        if (iVar4 != (iVar4 / 10) * 10) break;
        iVar10 = iVar10 + -1;
        if (iVar10 == 0) {
          uVar6 = 0xfffffffffffffffe;
          param_4 = 2000000000;
          goto LAB_00410318;
        }
        param_4 = param_4 * 10;
      } while (param_4 != uVar12);
      uVar6 = (ulong)(int)~(uint)(param_4 == 2000000000);
    }
    else {
LAB_004104c0:
      uVar6 = 0xffffffffffffffff;
    }
LAB_00410318:
    uVar8 = uVar8 & uVar6;
    iVar15 = iVar15 - iVar15 % (int)param_4;
  }
  *(uint *)(puVar5 + 1) = param_4;
  *(undefined *)((long)puVar5 + 0xc) = 1;
LAB_0040fe50:
  if ((long)uVar8 <= (long)uVar1) {
    if (uVar8 != uVar1) {
      return 1;
    }
    if (iVar15 <= iVar14) {
      return (uint)(iVar15 < iVar14);
    }
  }
  return 0xffffffff;
}


undefined FUN_004104d0(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined uVar2;
  long lVar3;
  
  puVar1 = (undefined *)*param_2;
  lVar3 = puVar1[3];
  if (puVar1[1] == 0x3ffffffe) {
    if (lVar3 == 0x3ffffffe) {
      return 1;
    }
    uVar2 = *(undefined *)(param_1 + 0x50);
    *puVar1 = *(undefined *)(param_1 + 0x48);
    puVar1[1] = uVar2;
  }
  else {
    if (puVar1[1] == 0x3fffffff) {
      if (lVar3 == 0x3fffffff) {
        *param_2 = 0;
        return 0;
      }
      FUN_00412f80(puVar1);
      lVar3 = puVar1[3];
    }
    if (lVar3 == 0x3ffffffe) {
      uVar2 = *(undefined *)(param_1 + 0x60);
      puVar1[2] = *(undefined *)(param_1 + 0x58);
      puVar1[3] = uVar2;
      return 0;
    }
  }
  if (lVar3 != 0x3fffffff) {
    return 0;
  }
  FUN_00412f80(puVar1 + 2);
  return 0;
}


int FUN_004105a0(undefined *param_1)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  int *piVar4;
  char cVar5;
  uint uVar6;
  
  uVar1 = param_1[1];
  if ((uVar1 - 0x3ffffffe < 2) || (uVar1 < 1000000000)) {
    uVar2 = param_1[3];
    if ((uVar2 - 0x3ffffffe < 2) || (uVar2 < 1000000000)) {
      bVar3 = uVar1 - 0x3ffffffe < 2;
      if (bVar3) {
        *param_1 = 0;
      }
      cVar5 = bVar3 && uVar1 == 0x3ffffffe;
      uVar6 = (uint)bVar3;
      if (uVar2 - 0x3ffffffe < 2) {
        param_1[2] = 0;
        uVar6 = 1;
        cVar5 = cVar5 + (uVar2 == 0x3ffffffe);
      }
      return (cVar5 == '\x01') + uVar6;
    }
  }
  piVar4 = __errno_location();
  *piVar4 = 0x16;
  return -1;
}


void FUN_00410650(int param_1,char *param_2,timespec *param_3)

{
  utimensat(param_1,param_2,param_3,0x100);
  return;
}


/* WARNING: Type propagation algorithm not settling */

int FUN_00410660(int param_1,char *param_2,__time_t *param_3)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  __time_t _Var4;
  char cVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  utimbuf *__file_times;
  timeval *__tvp;
  bool bVar9;
  timespec *local_120;
  timespec local_118;
  __time_t local_108;
  __time_t _Stack_100;
  timeval local_f8;
  __time_t local_e8;
  long lStack_e0;
  utimbuf local_d8;
  undefined local_c8;
  undefined uStack_c4;
  __suseconds_t _Stack_c0;
  stat local_b8;
  
  if (param_3 == (__time_t *)0x0) {
    local_120 = (timespec *)0x0;
    iVar6 = 0;
  }
  else {
    local_118.tv_sec = *param_3;
    local_118.tv_nsec = param_3[1];
    local_108 = param_3[2];
    _Stack_100 = param_3[3];
    local_120 = &local_118;
    iVar6 = FUN_004105a0();
    if (iVar6 < 0) {
      return -1;
    }
  }
  if ((param_1 < 0) && (param_2 == (char *)0x0)) {
    piVar8 = __errno_location();
    *piVar8 = 9;
    return -1;
  }
  if (-1 < DAT_00621b2c) {
    if (iVar6 == 2) {
      if (param_1 < 0) {
        iVar6 = __xstat(1,param_2,&local_b8);
      }
      else {
        iVar6 = __fxstat(1,param_1,&local_b8);
      }
      _Var4 = local_b8.st_mtim.tv_sec;
      lVar3 = local_b8.st_atim.tv_nsec;
      if (iVar6 != 0) {
        return -1;
      }
      if (local_120->tv_nsec == 0x3ffffffe) {
        iVar6 = 3;
        local_120->tv_sec = local_b8.st_atim.tv_sec;
        local_120->tv_nsec = lVar3;
      }
      else {
        iVar6 = 3;
        if (local_120[1].tv_nsec == 0x3ffffffe) {
          local_120[1].tv_nsec = local_b8.st_mtim.tv_nsec;
          local_120[1].tv_sec = _Var4;
        }
      }
    }
    if (param_1 < 0) {
      iVar7 = utimensat(-100,param_2,local_120,0);
    }
    else {
      iVar7 = futimens(param_1,local_120);
    }
    if (iVar7 < 1) {
      if ((iVar7 == 0) || (piVar8 = __errno_location(), *piVar8 != 0x26)) {
        DAT_00621b2c = 1;
        return iVar7;
      }
    }
    else {
      piVar8 = __errno_location();
      *piVar8 = 0x26;
    }
  }
  DAT_00621b2c = 0xffffffff;
  DAT_00621b28 = 0xffffffff;
  if (iVar6 == 0) {
LAB_00410760:
    if (local_120 == (timespec *)0x0) goto LAB_00410830;
    local_f8.tv_sec = local_120->tv_sec;
    __tvp = &local_f8;
    local_e8 = local_120[1].tv_sec;
    local_f8.tv_usec = local_120->tv_nsec / 1000;
    lStack_e0 = local_120[1].tv_nsec / 1000;
  }
  else {
    if (iVar6 != 3) {
      if (param_1 < 0) {
        iVar6 = __xstat(1,param_2,&local_b8);
      }
      else {
        iVar6 = __fxstat(1,param_1,&local_b8);
      }
      if (iVar6 != 0) {
        return -1;
      }
    }
    if (local_120 != (timespec *)0x0) {
      cVar5 = FUN_004104d0(&local_b8,&local_120);
      if (cVar5 != '\0') {
        return 0;
      }
      goto LAB_00410760;
    }
LAB_00410830:
    __tvp = (timeval *)0x0;
  }
  if (param_1 < 0) {
    iVar6 = futimesat(-100,param_2,__tvp);
    return iVar6;
  }
  iVar6 = futimesat(param_1,(char *)0x0,__tvp);
  if (iVar6 != 0) {
    if (param_2 != (char *)0x0) {
      __file_times = (utimbuf *)0x0;
      if (local_120 != (timespec *)0x0) {
        local_d8.actime = local_120->tv_sec;
        local_d8.modtime = local_120[1].tv_sec;
        __file_times = &local_d8;
      }
      iVar6 = utime(param_2,__file_times);
      return iVar6;
    }
    return -1;
  }
  if (__tvp == (timeval *)0x0) {
    return 0;
  }
  bVar1 = __tvp->tv_usec < 500000;
  bVar2 = __tvp[1].tv_usec < 500000;
  if ((bVar1) && (bVar2)) {
    return 0;
  }
  iVar6 = __fxstat(1,param_1,&local_b8);
  if (iVar6 != 0) {
    return 0;
  }
  local_d8.actime = __tvp->tv_sec;
  local_d8.modtime = __tvp->tv_usec;
  local_c8 = *(undefined *)&__tvp[1].tv_sec;
  uStack_c4 = *(undefined *)((long)&__tvp[1].tv_sec + 4);
  _Stack_c0 = __tvp[1].tv_usec;
  bVar9 = local_b8.st_mtim.tv_sec - __tvp[1].tv_sec != 1;
  if (((local_b8.st_atim.tv_sec - __tvp->tv_sec != 1) || (bVar1)) || (local_b8.st_atim.tv_nsec != 0)
     ) {
    if (bVar2 || bVar9) {
      return 0;
    }
    if (local_b8.st_mtim.tv_nsec != 0) {
      return 0;
    }
  }
  else {
    local_d8.modtime = 0;
    if ((bVar2 || bVar9) || (local_b8.st_mtim.tv_nsec != 0)) goto LAB_004109e7;
  }
  _Stack_c0 = 0;
LAB_004109e7:
  futimesat(param_1,(char *)0x0,(timeval *)&local_d8);
  return 0;
}


void FUN_00410aa0(undefined param_1,undefined param_2)

{
  FUN_00410660(0xffffffff,param_1,param_2);
  return;
}


int FUN_00410ab0(char *param_1,__time_t *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  timespec *__times;
  timespec *local_d0;
  timespec local_c8;
  __time_t local_b8;
  __time_t _Stack_b0;
  stat local_a8;
  
  if (param_2 == (__time_t *)0x0) {
    iVar2 = 0;
    local_d0 = (timespec *)0x0;
    __times = (timespec *)0x0;
    if (-1 < DAT_00621b28) goto LAB_00410b0b;
  }
  else {
    local_c8.tv_sec = *param_2;
    local_c8.tv_nsec = param_2[1];
    local_b8 = param_2[2];
    _Stack_b0 = param_2[3];
    local_d0 = &local_c8;
    iVar2 = FUN_004105a0();
    if (iVar2 < 0) {
      return -1;
    }
    if (-1 < DAT_00621b28) {
      __times = local_d0;
      if (iVar2 == 2) {
        iVar2 = __lxstat(1,param_1,&local_a8);
        __times = local_d0;
        if (iVar2 != 0) {
          return -1;
        }
        if (local_d0->tv_nsec == 0x3ffffffe) {
          iVar2 = 3;
          local_d0->tv_sec = local_a8.st_atim.tv_sec;
          __times->tv_nsec = local_a8.st_atim.tv_nsec;
        }
        else {
          iVar2 = 3;
          if (local_d0[1].tv_nsec == 0x3ffffffe) {
            local_d0[1].tv_nsec = local_a8.st_mtim.tv_nsec;
            __times[1].tv_sec = local_a8.st_mtim.tv_sec;
          }
        }
      }
LAB_00410b0b:
      iVar3 = utimensat(-100,param_1,__times,0x100);
      if (iVar3 < 1) {
        if ((iVar3 == 0) || (piVar4 = __errno_location(), *piVar4 != 0x26)) {
          DAT_00621b2c = 1;
          DAT_00621b28 = 1;
          return iVar3;
        }
      }
      else {
        piVar4 = __errno_location();
        *piVar4 = 0x26;
      }
    }
    DAT_00621b28 = 0xffffffff;
    if (iVar2 != 0) {
      if ((iVar2 != 3) && (iVar2 = __lxstat(1,param_1,&local_a8), iVar2 != 0)) {
        return -1;
      }
      if ((local_d0 != (timespec *)0x0) &&
         (cVar1 = FUN_004104d0(&local_a8,&local_d0), cVar1 != '\0')) {
        return 0;
      }
      goto LAB_00410b6a;
    }
  }
  DAT_00621b28 = 0xffffffff;
  iVar2 = __lxstat(1,param_1,&local_a8);
  if (iVar2 != 0) {
    return -1;
  }
LAB_00410b6a:
  if ((local_a8.st_mode & 0xf000) == 0xa000) {
    piVar4 = __errno_location();
    *piVar4 = 0x26;
    return -1;
  }
  iVar2 = FUN_00410660(0xffffffff,param_1,local_d0);
  return iVar2;
}


undefined
FUN_00410d00(FILE *param_1,long param_2,undefined param_3,undefined param_4,undefined *param_5,
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
  uVar1 = dcgettext(0,&DAT_0041a212,5);
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
    goto LAB_00410f7c;
  case 5:
    uVar1 = param_5[3];
    uVar4 = param_5[2];
    uVar5 = param_5[1];
    uVar6 = *param_5;
    uVar7 = dcgettext(0,"Written by %s, %s, %s,\n%s, and %s.\n",5);
LAB_00410f7c:
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
    goto LAB_00411019;
  case 7:
    uVar1 = param_5[2];
    uVar4 = param_5[5];
    uVar5 = param_5[4];
    uVar6 = param_5[3];
    local_58 = param_5[1];
    uVar7 = *param_5;
    uVar3 = dcgettext(0,"Written by %s, %s, %s,\n%s, %s, %s, and %s.\n",5);
LAB_00411019:
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
    goto LAB_00410dfa;
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
LAB_00410dfa:
  uVar1 = __fprintf_chk(param_1,1,uVar3,uVar7,local_50,local_58,uVar6,uVar5,uVar4,uVar1,local_48);
  return uVar1;
}


void FUN_004110e0(void)

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
  FUN_00410d00();
  return;
}


void FUN_00411100(void)

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
  FUN_00410d00();
  return;
}


void FUN_00411160(void)

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
  FUN_00410d00();
  return;
}


void FUN_00411220(void)

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


ulong FUN_004112a0(void)

{
  __uid_t _Var1;
  undefined extraout_var;
  
  if (DAT_00621b31 != '\0') {
    return (ulong)DAT_00621b30;
  }
  _Var1 = geteuid();
  DAT_00621b31 = 1;
  DAT_00621b30 = _Var1 == 0;
  return CONCAT44(extraout_var,_Var1) & 0xffffffffffffff00 | (ulong)(_Var1 == 0);
}


void FUN_004112e0(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00411530();
  }
  return;
}


void FUN_00411300(ulong param_1,ulong param_2)

{
  if ((-1 < SUB168(ZEXT816(param_1) * ZEXT816(param_2),0)) &&
     (SUB168(ZEXT816(param_1) * ZEXT816(param_2) >> 0x40,0) == 0)) {
    FUN_004112e0();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00411530();
}


void thunk_FUN_004112e0(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00411530();
  }
  return;
}


void * FUN_00411340(void *param_1,size_t param_2)

{
  void *pvVar1;
  
  if ((param_2 == 0) && (param_1 != (void *)0x0)) {
    free(param_1);
    return (void *)0x0;
  }
  pvVar1 = realloc(param_1,param_2);
  if ((pvVar1 == (void *)0x0) && (param_2 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00411530();
  }
  return pvVar1;
}


void FUN_00411380(undefined param_1,ulong param_2,ulong param_3)

{
  if ((-1 < SUB168(ZEXT816(param_2) * ZEXT816(param_3),0)) &&
     (SUB168(ZEXT816(param_2) * ZEXT816(param_3) >> 0x40,0) == 0)) {
    FUN_00411340();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00411530();
}


void FUN_004113b0(long param_1,ulong *param_2,ulong param_3)

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
    if ((SUB168(ZEXT816(uVar2) * ZEXT816(param_3),0) < 0) || (uVar3 != 0)) goto LAB_0041140b;
  }
  else {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x5555555555555554);
    uVar3 = SUB168(auVar1 % ZEXT816(param_3),0);
    if (SUB168(auVar1 / ZEXT816(param_3),0) <= uVar2) {
LAB_0041140b:
                    /* WARNING: Subroutine does not return */
      FUN_00411530(param_1,param_2,uVar3);
    }
    uVar2 = (uVar2 >> 1) + 1 + uVar2;
  }
  *param_2 = uVar2;
  FUN_00411340(param_1,uVar2 * param_3);
  return;
}


void FUN_00411440(long param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (param_1 == 0) {
    if (uVar1 == 0) {
      *param_2 = 0x80;
      FUN_00411340(0,0x80);
      return;
    }
    if ((long)uVar1 < 0) goto LAB_0041148a;
  }
  else {
    if (0x5555555555555553 < uVar1) {
LAB_0041148a:
                    /* WARNING: Subroutine does not return */
      FUN_00411530();
    }
    uVar1 = (uVar1 >> 1) + 1 + uVar1;
  }
  *param_2 = uVar1;
  FUN_00411340(param_1,uVar1);
  return;
}


void FUN_00411490(size_t param_1)

{
  void *__s;
  
  __s = (void *)FUN_004112e0();
  memset(__s,0,param_1);
  return;
}


void FUN_004114b0(size_t param_1,ulong param_2)

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
  FUN_00411530();
}


void FUN_004114e0(void *param_1,size_t param_2)

{
  void *__dest;
  
  __dest = (void *)FUN_004112e0(param_2);
  memcpy(__dest,param_1,param_2);
  return;
}


void FUN_00411510(char *param_1)

{
  void *__dest;
  size_t sVar1;
  
  sVar1 = strlen(param_1);
  __dest = (void *)FUN_004112e0(sVar1 + 1);
  memcpy(__dest,param_1,sVar1 + 1);
  return;
}


void FUN_00411530(void)

{
  undefined uVar1;
  
  uVar1 = dcgettext(0,"memory exhausted",5);
  error(DAT_0061f468,0,&DAT_0041aa9b,uVar1);
                    /* WARNING: Subroutine does not return */
  abort();
}


ulong FUN_00411570(byte *param_1,byte **param_2,uint param_3,ulong *param_4,char *param_5)

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
    __assert_fail("0 <= strtol_base && strtol_base <= 36","lib/xstrtol.c",0x60,"xstrtoul");
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
  uVar6 = strtoul((char *)param_1,(char **)param_2,param_3);
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
    if ((param_5 == (char *)0x0) || (bVar12 = *pbVar5, bVar12 == 0)) goto LAB_00411610;
    pcVar7 = strchr(param_5,(int)(char)bVar12);
    if (pcVar7 == (char *)0x0) goto switchD_004116ec_caseD_1;
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
        goto LAB_004116da;
      }
      if (bVar1 != 0x42) {
                    /* WARNING: Could not recover jumptable at 0x004116c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar6 = (*(code *)(&PTR_LAB_0041a5d8)[bVar8])();
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
LAB_004116da:
  iVar10 = (int)uVar11;
  switch(bVar12 - 0x42 & 0xff) {
  case 0:
    if (uVar6 >> 0x36 == 0) {
      uVar6 = uVar6 << 10;
      break;
    }
    goto LAB_00411747;
  default:
switchD_004116ec_caseD_1:
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
    goto LAB_004117d4;
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
    goto joined_r0x0041170c;
  case 0xb:
  case 0x2b:
    auVar2 = ZEXT816(uVar6) * ZEXT816((ulong)(long)iVar10);
    if (SUB168(auVar2 >> 0x40,0) != 0) goto LAB_00411747;
    auVar2 = (auVar2 & (undefined)0xffffffffffffffff) * ZEXT816((ulong)(long)iVar10);
joined_r0x0041170c:
    uVar6 = SUB168(auVar2,0);
    if (SUB168(auVar2 >> 0x40,0) != 0) {
LAB_00411747:
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
    goto LAB_004117d4;
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
    goto LAB_004117d4;
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
    goto LAB_004117d4;
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
LAB_004117d4:
    uVar14 = (ulong)(uVar13 | uVar9);
    break;
  case 0x20:
    if (uVar6 >> 0x37 != 0) goto LAB_00411747;
    uVar6 = uVar6 << 9;
    break;
  case 0x21:
    break;
  case 0x35:
    if ((long)uVar6 < 0) goto LAB_00411747;
    uVar6 = uVar6 * 2;
  }
  *param_2 = pbVar5 + iVar15;
  if (pbVar5[iVar15] != 0) {
    uVar14 = (ulong)((uint)uVar14 | 2);
  }
LAB_00411610:
  *param_4 = uVar6;
  return uVar14;
}


bool FUN_004119a0(void)

{
  int iVar1;
  __ssize_t _Var2;
  bool bVar3;
  char *local_18;
  size_t local_10;
  
  bVar3 = false;
  local_18 = (char *)0x0;
  local_10 = 0;
  _Var2 = __getdelim(&local_18,&local_10,10,stdin);
  if (0 < _Var2) {
    if (local_18[_Var2 + -1] == '\n') {
      local_18[_Var2 + -1] = '\0';
    }
    iVar1 = rpmatch(local_18);
    bVar3 = 0 < iVar1;
  }
  free(local_18);
  return bVar3;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_00411a10(ulong param_1,int param_2,ulong param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  
  if (param_2 != 0x406) {
    iVar1 = fcntl((int)param_1,param_2,param_3);
    return iVar1;
  }
  if (DAT_00621b34 < 0) {
    iVar1 = FUN_00411a10(param_1,0,param_3 & 0xffffffff);
    if (iVar1 < 0) {
      return iVar1;
    }
    if (DAT_00621b34 != -1) {
      return iVar1;
    }
  }
  else {
    iVar1 = fcntl((int)param_1,0x406);
    if ((-1 < iVar1) || (piVar4 = __errno_location(), *piVar4 != 0x16)) {
      DAT_00621b34 = 1;
      return iVar1;
    }
    iVar1 = FUN_00411a10(param_1 & 0xffffffff,0,param_3 & 0xffffffff);
    if (iVar1 < 0) {
      return iVar1;
    }
    DAT_00621b34 = -1;
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


void FUN_00411b50(FILE *param_1)

{
  int iVar1;
  
  if (param_1 != (FILE *)0x0) {
    iVar1 = __freading();
    if ((iVar1 != 0) && ((param_1->_flags & 0x100U) != 0)) {
      FUN_00411bc0(param_1,0,1);
      fflush(param_1);
      return;
    }
  }
  fflush(param_1);
  return;
}


long FUN_00411b90(uint *param_1)

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


ulong FUN_00411bc0(FILE *param_1,__off_t param_2,int param_3)

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


void FUN_00411c20(long param_1,int *param_2)

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
      if (iVar3 <= iVar8) goto LAB_00411c9c;
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
      if (iVar9 <= iVar3) goto LAB_00411c9c;
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
LAB_00411c9c:
  param_2[0xc] = iVar2;
  param_2[0xb] = iVar1 + (iVar2 - iVar3);
  return;
}


int FUN_00411d00(int param_1,undefined *param_2,char *param_3,char **param_4,undefined *param_5,
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
      if ((iVar5 == 0) && (sVar7 = strlen(__s1_00), sVar7 == sVar15)) goto LAB_00411f20;
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
            if (local_70 == (char *)0x0) goto LAB_00411e60;
          }
          else if (local_70 == (char *)0x0) {
            local_70 = (char *)calloc((long)iVar5,1);
            if (local_70 == (char *)0x0) {
              bVar3 = true;
              goto LAB_00411e60;
            }
            bVar4 = true;
            local_70[(int)local_44] = '\x01';
          }
          local_70[lVar16] = '\x01';
        }
      }
LAB_00411e60:
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
              __fprintf_chk(__stream,1,&DAT_0041aa09,param_9,*param_4);
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
LAB_00411f20:
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


uint FUN_00412320(uint param_1,undefined *param_2,char *param_3,long param_4,undefined param_5,
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
LAB_0041236a:
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
          goto LAB_0041246d;
        }
        pbVar8 = *(byte **)(param_7 + 8);
      }
      param_7[10] = 0;
    }
LAB_0041246d:
    param_7[6] = 1;
    cVar2 = *param_3;
LAB_00412478:
    if (cVar2 == ':') {
      uVar3 = 0;
    }
    if (pbVar8 == (byte *)0x0) goto LAB_004123e8;
LAB_0041248c:
    if (*pbVar8 == 0) goto LAB_004123e8;
  }
  else {
    if (param_7[6] == 0) goto LAB_0041236a;
    cVar2 = *param_3;
    pbVar8 = *(byte **)(param_7 + 8);
    if ((cVar2 - 0x2bU & 0xfd) != 0) goto LAB_00412478;
    pcVar4 = param_3 + 1;
    param_3 = param_3 + 1;
    if (*pcVar4 == ':') {
      uVar3 = 0;
    }
    if (pbVar8 != (byte *)0x0) goto LAB_0041248c;
LAB_004123e8:
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
        FUN_00411c20(param_2,param_7);
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
LAB_00412556:
      if (uVar11 != param_1) {
        *param_7 = uVar11;
      }
      return 0xffffffff;
    }
    lVar6 = 3;
    pbVar8 = (byte *)param_2[(int)uVar11];
    pbVar9 = pbVar8;
    pbVar10 = &DAT_0041aa21;
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
          FUN_00411c20(param_2,param_7);
          uVar11 = param_7[0xb];
        }
      }
      param_7[0xc] = param_1;
      *param_7 = param_1;
      goto LAB_00412556;
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
        puVar15 = &DAT_0041aa21;
        goto LAB_004126b5;
      }
      if ((int)param_6 != 0) {
        if (pbVar8[2] == 0) {
          pcVar4 = strchr(param_3,(int)(char)bVar14);
          param_6 = param_6 & 0xffffffff;
          if (pcVar4 != (char *)0x0) goto LAB_00412660;
        }
        *(byte **)(param_7 + 8) = pbVar8 + 1;
        uVar11 = FUN_00411d00(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar3,
                              &DAT_0041aa22);
        if (uVar11 != 0xffffffff) {
          return uVar11;
        }
        pbVar8 = (byte *)param_2[(int)*param_7];
      }
    }
LAB_00412660:
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
  puVar15 = &DAT_0041aa40;
LAB_004126b5:
  uVar3 = FUN_00411d00(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar3,puVar15);
  return uVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004128f0(void)

{
  DAT_00621b40 = DAT_0061f4dc;
  _DAT_00621b44 = DAT_0061f4d8;
  FUN_00412320();
  DAT_0061f4dc = DAT_00621b40;
  DAT_00621b80 = DAT_00621b50;
  _DAT_0061f4d4 = DAT_00621b48;
  return;
}


void FUN_00412950(void)

{
  FUN_004128f0();
  return;
}


void FUN_00412970(void)

{
  FUN_004128f0();
  return;
}


void FUN_00412990(void)

{
  FUN_00412320();
  return;
}


void FUN_004129b0(void)

{
  FUN_004128f0();
  return;
}


void FUN_004129d0(void)

{
  FUN_00412320();
  return;
}


size_t FUN_004129f0(wchar_t *param_1,byte *param_2,size_t param_3,mbstate_t *param_4)

{
  char cVar1;
  size_t sVar2;
  wchar_t local_1c;
  
  if (param_2 == (byte *)0x0) {
    param_3 = 1;
    param_2 = (byte *)0x41aa3f;
  }
  else {
    if (param_3 == 0) {
      return 0xfffffffffffffffe;
    }
    if (param_1 != (wchar_t *)0x0) goto LAB_00412a14;
  }
  param_1 = &local_1c;
LAB_00412a14:
  sVar2 = mbrtowc(param_1,(char *)param_2,param_3,param_4);
  if ((0xfffffffffffffffd < sVar2) && (cVar1 = FUN_00412fc0(0), cVar1 == '\0')) {
    sVar2 = 1;
    *param_1 = (uint)*param_2;
  }
  return sVar2;
}


ulong FUN_00412a70(FILE *param_1,undefined param_2,undefined param_3)

{
  int iVar1;
  undefined *__ptr;
  size_t sVar2;
  int *piVar3;
  size_t sVar4;
  size_t local_800;
  undefined local_7f8 [2008];
  
  local_800 = 2000;
  __ptr = (undefined *)FUN_00414470(local_7f8,&local_800,param_2,param_3);
  sVar4 = local_800;
  if (__ptr != (undefined *)0x0) {
    sVar2 = fwrite(__ptr,1,local_800,param_1);
    if (sVar2 < sVar4) {
      sVar4 = 0xffffffff;
      if (__ptr != local_7f8) {
        piVar3 = __errno_location();
        iVar1 = *piVar3;
        free(__ptr);
        *piVar3 = iVar1;
      }
      goto LAB_00412adc;
    }
    if (__ptr != local_7f8) {
      free(__ptr);
    }
    if (sVar4 < 0x80000000) goto LAB_00412adc;
    piVar3 = __errno_location();
    *piVar3 = 0x4b;
  }
  sVar4 = 0xffffffff;
  FUN_00414460(param_1);
LAB_00412adc:
  return sVar4 & 0xffffffff;
}


undefined
FUN_00412b30(undefined param_1,undefined param_2,undefined param_3,undefined *param_4)

{
  *param_4 = param_3;
  return 0;
}


void FUN_00412b40(char *param_1,int param_2,__mode_t param_3)

{
  if (param_2 != -1) {
    fchmod(param_2,param_3);
    return;
  }
  chmod(param_1,param_3);
  return;
}


int FUN_00412b60(undefined *param_1,undefined param_2,undefined param_3)

{
  int iVar1;
  
  iVar1 = FUN_00412b40(param_2,param_3,*param_1);
  return -(uint)(iVar1 != 0);
}


void FUN_00412b90(void)

{
  FUN_004046f0(1);
  return;
}


long FUN_00412ba0(char *param_1,char **param_2,void *param_3,size_t param_4)

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
LAB_00412c37:
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
          goto LAB_00412c37;
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


void FUN_00412cc0(undefined param_1,undefined param_2,long param_3)

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
  uVar2 = FUN_0040ec30(1,param_1);
  uVar3 = FUN_0040e920(0,8,param_2);
  error(0,0,uVar1,uVar3,uVar2);
  return;
}


void FUN_00412d40(long *param_1,void *param_2,size_t param_3)

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
      uVar3 = FUN_0040ec50(lVar5);
      __fprintf_chk(stderr,1,"\n  - %s",uVar3);
      lVar5 = param_1[lVar4];
      param_2 = (void *)((long)__s2 + param_3);
      __s1 = __s2;
      if (lVar5 == 0) goto LAB_00412e10;
    }
    lVar4 = lVar4 + 1;
    param_2 = (void *)((long)__s2 + param_3);
    uVar3 = FUN_0040ec50(lVar5);
    __fprintf_chk(stderr,1,&DAT_0041aa99,uVar3);
    lVar5 = param_1[lVar4];
  }
LAB_00412e10:
  pcVar2 = stderr->_IO_write_ptr;
  if (pcVar2 < stderr->_IO_write_end) {
    stderr->_IO_write_ptr = pcVar2 + 1;
    *pcVar2 = '\n';
    return;
  }
  __overflow(stderr,10);
  return;
}


long FUN_00412e60(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                 undefined param_5,code *param_6)

{
  long lVar1;
  
  lVar1 = FUN_00412ba0(param_2,param_3,param_4,param_5);
  if (lVar1 < 0) {
    FUN_00412cc0(param_1,param_2,lVar1);
    FUN_00412d40(param_3,param_4,param_5);
    (*param_6)();
    lVar1 = -1;
  }
  return lVar1;
}


long FUN_00412ed0(void *param_1,long *param_2,void *param_3,size_t param_4)

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


ulong FUN_00412f20(uint *param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  
  lVar2 = __fpending();
  uVar1 = *param_1;
  uVar3 = FUN_004143e0(param_1);
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


void FUN_00412f80(timespec *param_1)

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


bool FUN_00412fc0(int param_1)

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
    pbVar5 = &DAT_0041aa9e;
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


ulong FUN_00413020(char *param_1,ulong param_2)

{
  char cVar1;
  ulong uVar2;
  
  cVar1 = *param_1;
  if (cVar1 != '\0') {
    uVar2 = 0;
    do {
      param_1 = param_1 + 1;
      uVar2 = (uVar2 << 9 | uVar2 >> 0x37) + (long)cVar1;
      cVar1 = *param_1;
    } while (cVar1 != '\0');
    return uVar2 % param_2;
  }
  return 0;
}


/* WARNING: Could not reconcile some variable overlaps */

char * FUN_00413060(void)

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
  if (DAT_00621b78 != (char *)0x0) goto LAB_0041309a;
  pcVar7 = getenv("CHARSETALIASDIR");
  if ((pcVar7 == (char *)0x0) || (*pcVar7 == '\0')) {
    sVar6 = 0x73;
    sVar5 = 0x65;
    __n = 100;
    pcVar7 = 
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib"
    ;
LAB_00413185:
    __file = (char *)malloc(sVar6);
    if (__file != (char *)0x0) {
      memcpy(__file,pcVar7,__n);
      __file[__n] = '/';
      goto LAB_004131a6;
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
        goto LAB_00413185;
      }
      sVar6 = __n + 0xe;
    }
    __file = (char *)malloc(sVar6);
    if (__file != (char *)0x0) {
      memcpy(__file,pcVar7,__n);
      sVar5 = __n;
LAB_004131a6:
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
LAB_00413240:
          pbVar8 = (byte *)__stream->_IO_read_ptr;
          if (__stream->_IO_read_end <= pbVar8) goto LAB_004133cc;
          do {
            __stream->_IO_read_ptr = (char *)(pbVar8 + 1);
            uVar4 = (uint)*pbVar8;
            __ptr = pcVar7;
            while( true ) {
              pcVar7 = __ptr;
              if ((uVar4 - 9 < 2) || (uVar4 == 0x20)) goto LAB_00413240;
              if (uVar4 == 0x23) goto LAB_00413431;
              ungetc(uVar4,__stream);
              iVar2 = fscanf(__stream,"%50s %50s",&local_b8,&local_78);
              puVar13 = &local_b8;
              if (iVar2 < 2) goto LAB_004133df;
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
                FUN_004143e0(__stream);
                goto LAB_004131e4;
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
LAB_004133cc:
              uVar4 = __uflow(__stream);
              __ptr = pcVar7;
              if (uVar4 == 0xffffffff) goto LAB_004133df;
            }
          } while( true );
        }
        close(iVar2);
      }
      goto LAB_004131de;
    }
  }
  DAT_00621b78 = "";
LAB_0041309a:
  cVar1 = *DAT_00621b78;
  pcVar7 = DAT_00621b78;
  do {
    if (cVar1 == '\0') {
LAB_004130f4:
      if (*__s1 == '\0') {
        __s1 = "ASCII";
      }
      return __s1;
    }
    iVar2 = strcmp(__s1,pcVar7);
    if ((iVar2 == 0) || ((cVar1 == '*' && (pcVar7[1] == '\0')))) {
      sVar6 = strlen(pcVar7);
      __s1 = pcVar7 + sVar6 + 1;
      goto LAB_004130f4;
    }
    sVar6 = strlen(pcVar7);
    sVar5 = strlen(pcVar7 + sVar6 + 1);
    pcVar7 = pcVar7 + sVar6 + 1 + sVar5 + 1;
    cVar1 = *pcVar7;
  } while( true );
LAB_00413431:
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
  if (uVar4 == 0xffffffff) goto LAB_004133df;
  goto LAB_00413240;
LAB_004133df:
  FUN_004143e0(__stream);
  if (local_d0 == 0) {
LAB_004131de:
    pcVar7 = "";
  }
  else {
    pcVar7[local_d0] = '\0';
  }
LAB_004131e4:
  free(__file);
  DAT_00621b78 = pcVar7;
  goto LAB_0041309a;
}


int FUN_004135d0(int param_1,char *param_2,int param_3,__uid_t param_4,__gid_t param_5,uint param_6,
                uint param_7)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  stat local_c8;
  
  if (param_1 < 0) {
    iVar1 = __xstat(1,param_2,&local_c8);
    if (iVar1 != 0) {
      return iVar1;
    }
    if ((local_c8.st_mode & 0xf000) != 0x4000) {
      piVar2 = __errno_location();
      *piVar2 = 0x14;
      return -1;
    }
LAB_0041362d:
    if (((param_4 == 0xffffffff) || (local_c8.st_uid == param_4)) &&
       ((param_5 == 0xffffffff || (local_c8.st_gid == param_5)))) {
LAB_004136f1:
      uVar3 = 0;
    }
    else {
      if (param_1 < 0) {
        if (param_3 == -1) {
          iVar1 = chown(param_2,param_4,param_5);
        }
        else {
          iVar1 = lchown(param_2,param_4,param_5);
        }
        if (iVar1 != 0) {
          return iVar1;
        }
      }
      else {
        iVar1 = fchown(param_1,param_4,param_5);
        if (iVar1 != 0) goto LAB_00413750;
      }
      if ((local_c8.st_mode & 0x49) == 0) goto LAB_004136f1;
      uVar3 = local_c8.st_mode & 0xc00;
    }
    if ((param_7 & (local_c8.st_mode ^ param_6 | uVar3)) == 0) {
      if (param_1 < 0) {
        return 0;
      }
    }
    else {
      param_6 = ~param_7 & local_c8.st_mode & 0xfff | param_6;
      if (param_1 < 0) {
        iVar1 = chmod(param_2,param_6);
        return iVar1;
      }
      iVar1 = fchmod(param_1,param_6);
      if (iVar1 != 0) goto LAB_00413750;
    }
    iVar1 = close(param_1);
  }
  else {
    iVar1 = __fxstat(1,param_1,&local_c8);
    if (iVar1 == 0) {
      if ((local_c8.st_mode & 0xf000) == 0x4000) goto LAB_0041362d;
      piVar2 = __errno_location();
      iVar4 = 0x14;
      iVar1 = -1;
      *piVar2 = 0x14;
    }
    else {
LAB_00413750:
      piVar2 = __errno_location();
      iVar4 = *piVar2;
    }
    close(param_1);
    *piVar2 = iVar4;
  }
  return iVar1;
}


void FUN_004137d0(undefined param_1)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)FUN_004112e0(0x18);
  *puVar1 = param_1;
  puVar1[2] = 0;
  puVar1[1] = 0;
  return;
}


long * FUN_00413800(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00413a20();
  plVar2 = (long *)0x0;
  if (lVar1 != 0) {
    plVar2 = (long *)FUN_004112e0(0x18);
    *plVar2 = lVar1;
    plVar2[2] = 0;
    plVar2[1] = 0;
  }
  return plVar2;
}


undefined FUN_00413830(undefined *param_1)

{
  return *param_1;
}


ulong FUN_00413840(undefined *param_1,ulong param_2)

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
      FUN_00413d30(uVar3,local_40,lVar7);
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


void FUN_00413940(void *param_1)

{
  __explicit_bzero_chk(param_1,0x18,0xffffffffffffffff);
  free(param_1);
  return;
}


undefined FUN_00413960(undefined *param_1)

{
  int iVar1;
  undefined uVar2;
  int *piVar3;
  
  uVar2 = FUN_00413e90(*param_1);
  piVar3 = __errno_location();
  iVar1 = *piVar3;
  __explicit_bzero_chk(param_1,0x18,0xffffffffffffffff);
  free(param_1);
  *piVar3 = iVar1;
  return uVar2;
}


void FUN_004139c0(long param_1)

{
  undefined uVar1;
  int *piVar2;
  undefined uVar3;
  
  if (param_1 != 0) {
    uVar1 = FUN_0040ec50();
    piVar2 = __errno_location();
    if (*piVar2 == 0) {
      uVar3 = dcgettext(0,"%s: end of file",5);
    }
    else {
      uVar3 = dcgettext(0,"%s: read error",5);
    }
    error(DAT_0061f468,*piVar2,uVar3,uVar1);
    FUN_00403042();
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


FILE ** FUN_00413a20(FILE *param_1,ulong param_2)

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
    ppFVar3 = (FILE **)FUN_004112e0(0x1038);
    *ppFVar3 = (FILE *)0x0;
    ppFVar3[1] = (FILE *)FUN_004139c0;
    ppFVar3[2] = (FILE *)0x0;
    return ppFVar3;
  }
  if (param_1 != (FILE *)0x0) {
    pFVar2 = (FILE *)FUN_00415f90(param_1,&DAT_0041ab5c);
    if (pFVar2 != (FILE *)0x0) {
      ppFVar3 = (FILE **)FUN_004112e0(0x1038);
      *ppFVar3 = pFVar2;
      __n = 0x1000;
      if (param_2 < 0x1001) {
        __n = param_2;
      }
      ppFVar3[1] = (FILE *)FUN_004139c0;
      ppFVar3[2] = param_1;
      setvbuf(pFVar2,(char *)(ppFVar3 + 3),0,__n);
      return ppFVar3;
    }
    return (FILE **)0x0;
  }
  ppFVar4 = (FILE **)FUN_004112e0(0x1038);
  *ppFVar4 = (FILE *)0x0;
  ppFVar3 = ppFVar4 + 4;
  ppFVar4[1] = (FILE *)FUN_004139c0;
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
    if (0x7ff < (long)pFVar2) goto LAB_00413b28;
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
    if (0x7ff < lVar7) goto LAB_00413b28;
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
    if (0x7ff < uVar5) goto LAB_00413b28;
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
LAB_00413b28:
  FUN_00414190(ppFVar3);
  return ppFVar4;
}


void FUN_00413d10(long param_1,undefined param_2)

{
  *(undefined *)(param_1 + 8) = param_2;
  return;
}


void FUN_00413d20(long param_1,undefined param_2)

{
  *(undefined *)(param_1 + 0x10) = param_2;
  return;
}


void FUN_00413d30(FILE **param_1,void *param_2,FILE *param_3)

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
    goto LAB_00413e45;
  }
  do {
    param_2 = (void *)((long)__dest + (long)pFVar5);
    param_3 = (FILE *)((long)param_3 - (long)pFVar5);
    memcpy(__dest,(void *)((0x800 - (long)pFVar5) + (long)__src),(size_t)pFVar5);
    if (((ulong)param_2 & 7) == 0) goto LAB_00413e2b;
    pFVar5 = (FILE *)0x800;
    FUN_00413ee0(ppFVar1,__src);
    __dest = param_2;
  } while ((FILE *)0x800 < param_3);
  goto LAB_00413e3f;
LAB_00413e2b:
  while ((FILE *)0x7ff < param_3) {
    FUN_00413ee0(ppFVar1,param_2);
    param_3 = (FILE *)&param_3[-10]._fileno;
    param_2 = (void *)((long)param_2 + 0x800);
    if (param_3 == (FILE *)0x0) {
      param_1[3] = (FILE *)0x0;
      return;
    }
  }
  FUN_00413ee0(ppFVar1,__src);
LAB_00413e3f:
  pFVar5 = (FILE *)0x800;
LAB_00413e45:
  memcpy(param_2,__src,(size_t)param_3);
  param_1[3] = (FILE *)((long)pFVar5 - (long)param_3);
  return;
}


undefined FUN_00413e90(long *param_1)

{
  long lVar1;
  undefined uVar2;
  
  lVar1 = *param_1;
  __explicit_bzero_chk(param_1,0x1038,0xffffffffffffffff);
  free(param_1);
  if (lVar1 != 0) {
    uVar2 = FUN_004143e0(lVar1);
    return uVar2;
  }
  return 0;
}


void FUN_00413ee0(long *param_1,long *param_2)

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


void FUN_00414190(ulong *param_1)

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


void FUN_004143d0(undefined param_1)

{
  FUN_00411a10(param_1,0,3);
  return;
}


int FUN_004143e0(FILE *param_1)

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
      if (_Var4 == -1) goto LAB_00414447;
    }
    iVar1 = FUN_00411b50(param_1);
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
LAB_00414447:
  iVar1 = fclose(param_1);
  return iVar1;
}


void FUN_00414460(uint *param_1)

{
  *param_1 = *param_1 | 0x20;
  return;
}


/* WARNING: Removing unreachable block (ram,0x00415cac) */
/* WARNING: Removing unreachable block (ram,0x00415ded) */
/* WARNING: Removing unreachable block (ram,0x00415cc0) */
/* WARNING: Removing unreachable block (ram,0x00415194) */
/* WARNING: Removing unreachable block (ram,0x00414760) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Could not reconcile some variable overlaps */

undefined *
FUN_00414470(undefined *param_1,undefined *param_2,undefined *param_3,undefined param_4)

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
  iVar10 = FUN_00416250(param_3,&local_588,local_678);
  if (iVar10 < 0) {
    return (undefined *)0x0;
  }
  iVar10 = FUN_00416030(param_4,local_678);
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
LAB_00414534:
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
      if (puVar24 == param_3) goto LAB_004146e8;
      do {
        puVar24 = (undefined *)((long)puVar24 - (long)_local_6a8);
        __n = puVar14 + (long)puVar24;
        puVar13 = puVar20;
        if (CARRY8((ulong)puVar14,(ulong)puVar24)) {
          if (puVar31 != (undefined *)0xffffffffffffffff) goto LAB_00414a60;
          __n = (undefined *)0xffffffffffffffff;
        }
        else if (puVar31 < __n) {
          if (puVar31 == (undefined *)0x0) {
            if (__n < (undefined *)0xd) {
              puVar31 = (undefined *)0xc;
            }
            else {
LAB_0041467e:
              puVar31 = __n;
              if (__n == (undefined *)0xffffffffffffffff) goto LAB_00414a60;
            }
          }
          else {
            if ((long)puVar31 < 0) goto LAB_00414a60;
            puVar31 = (undefined *)((long)puVar31 * 2);
            if (puVar31 < __n) goto LAB_0041467e;
          }
          if ((puVar20 == (undefined *)0x0) || (puVar20 == local_690)) {
            local_6b8 = (undefined *)_local_6a8;
            _local_6a8 = (float)CONCAT91(stack0xfffffffffffff959,puVar20 == local_690);
            local_698 = puVar24;
            *(undefined *)(puVar27 + -8) = 0x4145dc;
            puVar13 = (undefined *)malloc((size_t)puVar31);
            if (puVar13 == (undefined *)0x0) goto LAB_00414a60;
            puVar24 = local_698;
            _local_6a8 = (int *)local_6b8;
            if ((puVar14 != (undefined *)0x0) && (local_6a8[0] != '\0')) {
              _local_6a8 = (float)CONCAT28(auStack_6a4._4_2_,local_6b8);
              *(undefined *)(puVar27 + -8) = 0x41462a;
              puVar13 = (undefined *)memcpy(puVar13,puVar20,(size_t)puVar14);
              puVar24 = local_698;
            }
          }
          else {
            local_698 = puVar24;
            *(undefined *)(puVar27 + -8) = 0x4146bf;
            puVar13 = (undefined *)realloc(puVar20,(size_t)puVar31);
            if (puVar13 == (undefined *)0x0) {
LAB_00414c75:
              *(undefined *)(puVar27 + -8) = 0x414c7a;
              piVar16 = __errno_location();
              _local_6a8 = (float)CONCAT28(auStack_6a4._4_2_,piVar16);
              goto LAB_00414c88;
            }
            puVar24 = local_698;
          }
        }
        *(undefined *)(puVar27 + -8) = 0x4146e8;
        memcpy((undefined *)((long)puVar13 + (long)puVar14),_local_6a8,(size_t)puVar24);
        puVar20 = puVar13;
LAB_004146e8:
        do {
          if (local_588 == local_6c0) {
            puVar14 = __n + 1;
            puVar24 = puVar20;
            if ((undefined *)0xfffffffffffffffe < __n) {
              if (puVar31 == (undefined *)0xffffffffffffffff) goto LAB_00415872;
              goto LAB_00414a60;
            }
            if (puVar14 <= puVar31) goto LAB_00415872;
            if (puVar31 == (undefined *)0x0) {
              if (puVar14 < (undefined *)0xd) {
                puVar31 = (undefined *)0xc;
              }
              else {
LAB_00415e4f:
                puVar31 = puVar14;
                if (puVar14 == (undefined *)0xffffffffffffffff) goto LAB_00414a60;
              }
            }
            else {
              if ((long)puVar31 < 0) goto LAB_00414a60;
              puVar31 = (undefined *)((long)puVar31 * 2);
              if (puVar31 < puVar14) goto LAB_00415e4f;
            }
            bVar33 = puVar20 == local_690;
            if ((puVar20 == (undefined *)0x0) || (bVar33)) {
              *(undefined *)(puVar27 + -8) = 0x415e09;
              puVar24 = (undefined *)malloc((size_t)puVar31);
              if (puVar24 == (undefined *)0x0) goto LAB_00414a60;
              if ((__n != (undefined *)0x0) && (bVar33)) {
                *(undefined *)(puVar27 + -8) = 0x415e35;
                puVar24 = (undefined *)memcpy(puVar24,puVar20,(size_t)__n);
              }
            }
            else {
              *(undefined *)(puVar27 + -8) = 0x415866;
              puVar24 = (undefined *)realloc(puVar20,(size_t)puVar31);
              if (puVar24 == (undefined *)0x0) goto LAB_00414c75;
            }
LAB_00415872:
            *(undefined *)((long)puVar24 + (long)__n) = 0;
            if ((puVar14 < puVar31) && (puVar24 != local_690)) {
              *(undefined *)(puVar27 + -8) = 0x415890;
              puVar20 = (undefined *)realloc(puVar24,(size_t)puVar14);
              if (puVar20 != (undefined *)0x0) {
                puVar24 = puVar20;
              }
            }
            puVar31 = local_6e0;
            if (local_6e0 != (undefined *)0x0) {
              *(undefined *)(puVar27 + -8) = 0x4158ab;
              free(puVar31);
            }
            if (local_580 != auStack_568) {
              *(undefined *)(puVar27 + -8) = 0x4158c7;
              free(local_580);
            }
            if (local_670 != auStack_668) {
              *(undefined *)(puVar27 + -8) = 0x4158e3;
              free(local_670);
            }
            *local_6d8 = __n;
            return puVar24;
          }
          bVar8 = *(byte *)(puVar32 + 9);
          lVar30 = puVar32[10];
          if (bVar8 == 0x25) {
            if (lVar30 != -1) goto LAB_0041519c;
            puVar14 = __n + 1;
            puVar24 = puVar20;
            if (__n < (undefined *)0xffffffffffffffff) {
              if (puVar31 < puVar14) {
                if (puVar31 == (undefined *)0x0) {
                  if (puVar14 < (undefined *)0xd) {
                    puVar31 = (undefined *)0xc;
                  }
                  else {
LAB_00415412:
                    puVar31 = puVar14;
                    if (puVar14 == (undefined *)0xffffffffffffffff) goto LAB_00414a60;
                  }
                }
                else {
                  if ((long)puVar31 < 0) goto LAB_00414a60;
                  puVar31 = (undefined *)((long)puVar31 * 2);
                  if (puVar31 < puVar14) goto LAB_00415412;
                }
                if ((puVar20 == (undefined *)0x0) || (puVar20 == local_690)) {
                  local_698 = (undefined *)
                              ((ulong)local_698 & 0xffffffffffffff00 | (ulong)(puVar20 == local_690)
                              );
                  *(undefined *)(puVar27 + -8) = 0x41535e;
                  puVar24 = (undefined *)malloc((size_t)puVar31);
                  if (puVar24 == (undefined *)0x0) goto LAB_00414a60;
                  if ((__n != (undefined *)0x0) && ((char)local_698 != '\0')) {
                    *(undefined *)(puVar27 + -8) = 0x415390;
                    puVar24 = (undefined *)memcpy(puVar24,puVar20,(size_t)__n);
                  }
                }
                else {
                  *(undefined *)(puVar27 + -8) = 0x414b56;
                  puVar24 = (undefined *)realloc(puVar20,(size_t)puVar31);
                  if (puVar24 == (undefined *)0x0) goto LAB_00414c75;
                }
              }
            }
            else {
              if (puVar31 != (undefined *)0xffffffffffffffff) goto LAB_00414a60;
              puVar14 = (undefined *)0xffffffffffffffff;
            }
            *(undefined *)((long)puVar24 + (long)__n) = 0x25;
            puVar20 = puVar24;
            __n = puVar14;
            goto LAB_00414b67;
          }
          if (lVar30 == -1) goto LAB_0041519c;
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
switchD_00414bcc_caseD_5:
                    /* WARNING: Subroutine does not return */
              *(undefined *)(puVar27 + -8) = 0x40304c;
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
                        if (pcVar21 == pcVar6) goto LAB_004149f0;
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
                  if (*(int *)(local_670 + (long)puVar13 * 0x10) != 5) goto LAB_0041519c;
                  iVar10 = *(int *)((long)(local_670 + (long)puVar13 * 0x10) + 0x10);
                  puVar24 = (undefined *)(long)iVar10;
                  if (iVar10 < 0) {
                    local_6b8._0_4_ = (uint)local_6b8 | 2;
                    puVar24 = (undefined *)-(long)(undefined *)(long)iVar10;
                  }
                }
              }
LAB_004149f0:
              pcVar21 = (char *)puVar32[7];
              if ((char *)puVar32[6] == pcVar21) {
LAB_004150a0:
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
                          if (pcVar21 == pcVar6) goto LAB_00414a60;
                          pcVar26 = pcVar6 + 1;
                          cVar9 = *pcVar6;
                          pcVar6 = pcVar26;
                        } while (cVar9 != '0');
                        puVar13 = (undefined *)0xffffffffffffffff;
                      }
                      pcVar25 = pcVar26;
                    } while (pcVar21 != pcVar26);
                    goto LAB_00414a2c;
                  }
                }
                else {
                  if (*(int *)(local_670 + puVar32[8] * 0x10) != 5) goto LAB_0041519c;
                  iVar10 = *(int *)((long)(local_670 + puVar32[8] * 0x10) + 0x10);
                  puVar13 = (undefined *)(long)iVar10;
                  if (iVar10 < 0) goto LAB_004150a0;
LAB_00414a2c:
                  if (puVar13 != (undefined *)0x0) {
                    puVar18 = puVar13 + 6;
                    if (puVar13 < (undefined *)0xfffffffffffffff4) goto LAB_004150be;
                    goto LAB_00414a60;
                  }
                }
                puVar18 = (undefined *)0xc;
              }
LAB_004150be:
              if (puVar18 <= puVar24) {
                puVar18 = puVar24;
              }
              puVar17 = (undefined *)((long)puVar18 + 1);
              local_698 = puVar17;
              if (puVar18 == (undefined *)0xffffffffffffffff) goto LAB_00414a60;
              if (puVar17 < (undefined *)0x2bd) {
                puVar18 = local_2f8;
              }
              else {
                local_6d0 = puVar24;
                local_6c8 = puVar13;
                local_6b8 = (undefined *)
                            ((ulong)local_6b8 & 0xffffffff00000000 | (ulong)(uint)local_6b8);
                _local_6a8 = fVar34;
                if (puVar17 == (undefined *)0xffffffffffffffff) goto LAB_00414a60;
                *(undefined *)(puVar27 + -8) = 0x415112;
                puVar18 = (undefined *)malloc((size_t)puVar17);
                puVar13 = local_6c8;
                puVar24 = local_6d0;
                fVar34 = _local_6a8;
                if (puVar18 == (undefined *)0x0) goto LAB_00414a60;
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
                if (fVar34 != (float)0) goto LAB_0041519c;
                bVar8 = *(byte *)(puVar32 + 9) & 0xdf;
                if (bVar8 == 0x46) {
                  *(undefined *)puVar17 = 0x30;
                  if ((((uint)local_6b8 & 0x10) == 0) && (puVar13 == (undefined *)0x0)) {
LAB_004155e7:
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
                    *(undefined *)(puVar27 + -8) = 0x415b21;
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
                    *(undefined *)(puVar27 + -8) = 0x415d7f;
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
                  if (((uint)local_6b8 & 0x10) == 0) goto LAB_004155e7;
                  if (puVar13 == (undefined *)0x0) {
                    local_6e8 = (undefined *)
                                ((ulong)local_6e8 & 0xffffffff00000000 |
                                (ulong)uVar7 & 0xffffffff0000ffff);
                    local_6d0 = puVar24;
                    local_6c8 = puVar17 + 1;
                    local_6b8 = puVar18;
                    _local_6a8 = (float)CONCAT64(auStack_6a4._0_6_,(uint)local_6b8);
                    *(undefined *)(puVar27 + -8) = 0x415f37;
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
                    *(undefined *)(puVar27 + -8) = 0x415a4d;
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
                  if (bVar8 != 0x41) goto LAB_0041519c;
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
                    *(undefined *)(puVar27 + -8) = 0x415e99;
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
                if (fVar34 + fVar34 != fVar34) goto LAB_0041519c;
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
LAB_0041519c:
                    /* WARNING: Subroutine does not return */
                *(undefined **)(puVar27 + -8) = &UNK_004151a1;
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
LAB_00415c9a:
                        puVar31 = puVar14;
                        if (puVar14 == (undefined *)0xffffffffffffffff) goto LAB_00414a60;
                      }
                    }
                    else {
                      if ((long)puVar31 < 0) goto LAB_00414a60;
                      puVar31 = (undefined *)((long)puVar31 * 2);
                      if (puVar31 < puVar14) goto LAB_00415c9a;
                    }
                    if ((puVar20 == (undefined *)0x0) || (puVar20 == local_690)) {
                      local_6b8 = (undefined *)
                                  ((ulong)local_6b8 & 0xffffffffffffff00 |
                                  (ulong)(puVar20 == local_690));
                      local_698 = puVar18;
                      *(undefined *)(puVar27 + -8) = 0x415987;
                      puVar24 = (undefined *)malloc((size_t)puVar31);
                      if (puVar24 == (undefined *)0x0) goto LAB_00414a60;
                      puVar18 = local_698;
                      if ((__n != (undefined *)0x0) && ((char)local_6b8 != '\0')) {
                        *(undefined *)(puVar27 + -8) = 0x4159d5;
                        puVar24 = (undefined *)memcpy(puVar24,puVar20,(size_t)__n);
                        puVar18 = local_698;
                      }
                    }
                    else {
                      local_698 = puVar18;
                      *(undefined *)(puVar27 + -8) = 0x415702;
                      puVar24 = (undefined *)realloc(puVar20,(size_t)puVar31);
                      if (puVar24 == (undefined *)0x0) goto LAB_00414a60;
                      puVar18 = local_698;
                    }
                  }
                }
                else if (puVar31 != (undefined *)0xffffffffffffffff) goto LAB_00414a60;
              }
              local_698 = puVar18;
              *(undefined *)(puVar27 + -8) = 0x415736;
              memcpy((undefined *)((long)puVar24 + (long)__n),puVar18,(size_t)_local_6a8);
              puVar13 = local_698;
              puVar20 = puVar24;
              __n = puVar14;
              if (local_698 != local_2f8) {
                *(undefined *)(puVar27 + -8) = 0x415755;
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
                *(undefined *)(puVar27 + -8) = 0x414809;
                memcpy(puVar24,pvVar5,sVar28);
                puVar24 = (undefined *)((long)puVar24 + (long)_local_6a8);
                puVar13 = local_6b8;
              }
              pvVar5 = (void *)puVar32[6];
              if (pvVar5 != (void *)puVar32[7]) {
                local_6b8 = puVar13;
                sVar28 = (long)(void *)puVar32[7] - (long)pvVar5;
                _local_6a8 = (float)CONCAT28(auStack_6a4._4_2_,sVar28);
                *(undefined *)(puVar27 + -8) = 0x414846;
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
                      goto LAB_00414c68;
                    }
                  }
                  else {
                    *(undefined *)puVar24 = 0x4c;
                    puVar24 = (undefined *)((long)puVar24 + 1);
                  }
                }
                else {
LAB_00414c68:
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
                if (*(int *)(puVar13 + puVar32[5] * 0x10) != 5) goto LAB_0041519c;
                local_6b8 = (undefined *)CONCAT44(local_6b8._4_4_,1);
                local_680 = *(uint *)((long)(puVar13 + puVar32[5] * 0x10) + 0x10);
              }
              if (puVar32[8] != -1) {
                if (*(int *)(puVar13 + puVar32[8] * 0x10) != 5) goto LAB_0041519c;
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
LAB_00415052:
                      puVar31 = puVar14;
                      if (puVar14 == (undefined *)0xffffffffffffffff) goto LAB_00414a60;
                    }
                  }
                  else {
                    if ((long)puVar31 < 0) goto LAB_00414a60;
                    puVar31 = (undefined *)((long)puVar31 * 2);
                    if (puVar31 < puVar14) goto LAB_00415052;
                  }
                  if ((puVar20 == (undefined *)0x0) || (puVar20 == local_690)) {
                    _local_6a8 = (float)CONCAT91(stack0xfffffffffffff959,puVar20 == local_690);
                    *(undefined *)(puVar27 + -8) = 0x4152fe;
                    puVar13 = (undefined *)malloc((size_t)puVar31);
                    if (puVar13 == (undefined *)0x0) goto LAB_00414a60;
                    if ((__n != (undefined *)0x0) && (local_6a8[0] != '\0')) {
                      *(undefined *)(puVar27 + -8) = 0x415330;
                      puVar13 = (undefined *)memcpy(puVar13,puVar20,(size_t)__n);
                    }
                  }
                  else {
                    *(undefined *)(puVar27 + -8) = 0x414958;
                    puVar13 = (undefined *)realloc(puVar20,(size_t)puVar31);
                    if (puVar13 == (undefined *)0x0) goto LAB_00414a60;
                  }
                }
              }
              else if (puVar31 != (undefined *)0xffffffffffffffff) goto LAB_00414a60;
              *(undefined *)((long)puVar13 + (long)__n) = 0;
              local_6c8 = puVar13;
              *(undefined *)(puVar27 + -8) = 0x414975;
              puVar15 = (uint *)__errno_location();
              puVar13 = local_6c8;
              local_6c8 = puVar24;
              _local_6a8 = (float)CONCAT28(auStack_6a4._4_2_,puVar15);
              local_6e8 = (undefined *)((ulong)local_6e8 & 0xffffffff00000000 | (ulong)*puVar15);
LAB_00414998:
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
                goto switchD_00414bcc_caseD_5;
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
                  goto LAB_00415272;
                }
                if ((uint)local_6b8 != 2) {
                  *(int **)(puVar27 + -0x10) = &local_684;
LAB_00414cda:
                  puVar14 = local_6b0;
                  *(undefined *)(puVar27 + -0x18) = 0x414cf7;
                  iVar10 = __snprintf_chk((undefined *)((long)puVar13 + (long)__n),uVar11,1,
                                          0xffffffffffffffff,puVar14,piVar16);
                  goto LAB_00414d00;
                }
                *(int **)(puVar27 + -0x10) = &local_684;
                *(int **)(puVar27 + -0x18) = piVar16;
                goto LAB_00415226;
              case 0xb:
                local_6d0 = puVar13;
                uVar1 = *(undefined *)(local_670 + puVar32[10] * 0x10 + 8);
                if ((uint)local_6b8 == 1) {
                  *(int **)(puVar27 + -0x10) = &local_684;
                }
                else {
                  if ((uint)local_6b8 != 2) {
                    *(undefined *)(puVar27 + -8) = 0x414fce;
                    iVar10 = __snprintf_chk(uVar1,(undefined *)((long)puVar13 + (long)__n),uVar11,1,
                                            0xffffffffffffffff,puVar14,&local_684);
                    goto LAB_00414d00;
                  }
                  *(int **)(puVar27 + -8) = &local_684;
                  *(ulong *)(puVar27 + -0x10) = (ulong)local_67c;
                }
                uVar4 = local_680;
                puVar14 = local_6b0;
                *(undefined *)(puVar27 + -0x18) = 0x41546e;
                iVar10 = __snprintf_chk(uVar1,(undefined *)((long)puVar13 + (long)__n),uVar11,1,
                                        0xffffffffffffffff,puVar14,uVar4);
                goto LAB_00414d00;
              case 0xc:
                local_6d0 = puVar13;
                Var2 = *(unkbyte10 *)(local_670 + puVar32[10] * 0x10 + 8);
                if ((uint)local_6b8 != 1) {
                  if ((uint)local_6b8 != 2) {
                    piVar16 = &local_684;
                    *(unkbyte10 *)(puVar27 + -0x10) = Var2;
                    goto LAB_00414cda;
                  }
                  *(int **)(puVar27 + -0x10) = &local_684;
                  uVar19 = (ulong)local_67c;
                  *(unkbyte10 *)(puVar27 + -0x20) = Var2;
                  *(ulong *)(puVar27 + -0x30) = uVar19;
                  *(undefined *)(puVar27 + -0x38) = 0x4154cf;
                  iVar10 = __snprintf_chk((undefined *)((long)puVar13 + (long)__n),uVar11,1,
                                          0xffffffffffffffff,puVar14,uVar4);
                  goto LAB_00414d00;
                }
                *(int **)(puVar27 + -0x10) = &local_684;
                *(unkbyte10 *)(puVar27 + -0x20) = Var2;
                goto LAB_0041522d;
              }
              local_6d0 = puVar13;
              if ((uint)local_6b8 == 1) {
                *(int **)(puVar27 + -8) = &local_684;
                *(ulong *)(puVar27 + -0x10) = uVar19;
LAB_00415272:
                uVar19 = (ulong)local_680;
LAB_00414e1a:
                puVar14 = local_6b0;
                *(undefined *)(puVar27 + -0x18) = 0x414e37;
                iVar10 = __snprintf_chk((undefined *)((long)puVar13 + (long)__n),uVar11,1,
                                        0xffffffffffffffff,puVar14,uVar19);
                if (-1 < local_684) goto LAB_00414d0e;
LAB_00414e4e:
                puVar24 = local_6d0;
                if (*(char *)((long)local_6c8 + 1) == '\0') {
                  if (iVar10 < 0) {
                    iVar10 = *_local_6a8;
                    if ((iVar10 == 0) && (iVar10 = 0x54, (*(byte *)(puVar32 + 9) & 0xef) != 99)) {
                      iVar10 = 0x16;
                    }
                    if ((local_6d0 != local_690) && (local_6d0 != (undefined *)0x0)) {
                      *(undefined *)(puVar27 + -8) = 0x414ea4;
                      free(puVar24);
                    }
                    puVar31 = local_6e0;
                    if (local_6e0 != (undefined *)0x0) {
                      *(undefined *)(puVar27 + -8) = 0x414eb8;
                      free(puVar31);
                    }
                    if (local_580 != auStack_568) {
                      *(undefined *)(puVar27 + -8) = 0x414ed4;
                      free(local_580);
                    }
                    if (local_670 != auStack_668) {
                      *(undefined *)(puVar27 + -8) = 0x414ef0;
                      free(local_670);
                    }
                    *_local_6a8 = iVar10;
                    return (undefined *)0x0;
                  }
                  goto LAB_00414d28;
                }
                *(undefined *)((long)local_6c8 + 1) = 0;
                puVar13 = local_6d0;
                goto LAB_00414998;
              }
              if ((uint)local_6b8 != 2) {
                *(int **)(puVar27 + -0x10) = &local_684;
                goto LAB_00414e1a;
              }
              *(int **)(puVar27 + -0x10) = &local_684;
              *(ulong *)(puVar27 + -0x18) = uVar19;
LAB_00415226:
              *(ulong *)(puVar27 + -0x20) = (ulong)local_67c;
LAB_0041522d:
              uVar4 = local_680;
              puVar14 = local_6b0;
              *(undefined *)(puVar27 + -0x28) = 0x415251;
              iVar10 = __snprintf_chk((undefined *)((long)puVar13 + (long)__n),uVar11,1,
                                      0xffffffffffffffff,puVar14,uVar4);
LAB_00414d00:
              if (local_684 < 0) goto LAB_00414e4e;
LAB_00414d0e:
              if (((ulong)(long)local_684 < uVar11) &&
                 (((undefined *)((long)local_684 + (long)local_6d0))[(long)__n] != '\0'))
              goto LAB_0041519c;
              if (local_684 < iVar10) {
LAB_00414d28:
                local_684 = iVar10;
              }
              puVar24 = local_6d0;
              puVar20 = local_6d0;
              if (uVar11 <= local_684 + 1) {
                if (0x7ffffffe < uVar12) {
                  if ((local_6d0 != local_690) && (local_6d0 != (undefined *)0x0)) {
                    *(undefined *)(puVar27 + -8) = 0x415536;
                    free(puVar24);
                  }
                  puVar31 = local_6e0;
                  if (local_6e0 != (undefined *)0x0) {
                    *(undefined *)(puVar27 + -8) = 0x41554a;
                    free(puVar31);
                  }
                  if (local_580 != auStack_568) {
                    *(undefined *)(puVar27 + -8) = 0x415566;
                    free(local_580);
                  }
                  if (local_670 != auStack_668) {
                    *(undefined *)(puVar27 + -8) = 0x415582;
                    free(local_670);
                  }
                  *_local_6a8 = 0x4b;
                  return (undefined *)0x0;
                }
                puVar13 = local_6d0;
                if ((long)puVar31 < 0) {
                  if (puVar31 != (undefined *)0xffffffffffffffff) goto LAB_00414a6f;
                }
                else {
                  if (CARRY8((ulong)(local_684 + 2),(ulong)__n) != false) goto LAB_00414a6f;
                  puVar14 = __n + (local_684 + 2);
                  if (__n + (local_684 + 2) <= (undefined *)((long)puVar31 * 2)) {
                    puVar14 = (undefined *)((long)puVar31 * 2);
                  }
                  if (puVar31 < puVar14) {
                    puVar31 = (undefined *)((long)puVar31 * 2);
                    if ((puVar31 < puVar14) &&
                       (puVar31 = puVar14, puVar14 == (undefined *)0xffffffffffffffff))
                    goto LAB_00414a6f;
                    bVar33 = local_6d0 == local_690;
                    if ((local_6d0 == (undefined *)0x0) || (bVar33)) {
                      *(undefined *)(puVar27 + -8) = 0x4151cf;
                      puVar13 = (undefined *)malloc((size_t)puVar31);
                      puVar24 = local_6d0;
                      puVar20 = local_6d0;
                      if (puVar13 == (undefined *)0x0) goto LAB_00414a6f;
                      if ((__n != (undefined *)0x0) && (bVar33)) {
                        *(undefined *)(puVar27 + -8) = 0x4151fd;
                        puVar13 = (undefined *)memcpy(puVar13,puVar24,(size_t)__n);
                      }
                    }
                    else {
                      *(undefined *)(puVar27 + -8) = 0x414dbd;
                      puVar13 = (undefined *)realloc(puVar24,(size_t)puVar31);
                      puVar20 = local_6d0;
                      if (puVar13 == (undefined *)0x0) goto LAB_00414a6f;
                    }
                  }
                }
                goto LAB_00414998;
              }
              __n = __n + local_684;
              *_local_6a8 = local_6e8._0_4_;
            }
          }
LAB_00414b67:
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
        goto LAB_00414534;
      }
    }
  }
  goto LAB_00414b90;
LAB_00414a60:
  *(undefined *)(puVar27 + -8) = 0x414a65;
  piVar16 = __errno_location();
  _local_6a8 = (float)CONCAT28(auStack_6a4._4_2_,piVar16);
LAB_00414a6f:
  if ((puVar20 != local_690) && (puVar20 != (undefined *)0x0)) {
LAB_00414c88:
    *(undefined *)(puVar27 + -8) = 0x414c90;
    free(puVar20);
  }
  puVar31 = local_6e0;
  if (local_6e0 != (undefined *)0x0) {
    *(undefined *)(puVar27 + -8) = 0x414a99;
    free(puVar31);
    goto LAB_00414a99;
  }
LAB_00414b90:
  *(undefined *)(puVar27 + -8) = 0x414b95;
  piVar16 = __errno_location();
  _local_6a8 = (float)CONCAT28(auStack_6a4._4_2_,piVar16);
LAB_00414a99:
  if (local_580 != auStack_568) {
    *(undefined *)(puVar27 + -8) = 0x414ab5;
    free(local_580);
  }
  if (local_670 != auStack_668) {
    *(undefined *)(puVar27 + -8) = 0x414ad1;
    free(local_670);
  }
  *_local_6a8 = 0xc;
  return (undefined *)0x0;
}


FILE * FUN_00415f90(char *param_1,char *param_2)

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
    iVar2 = FUN_004143d0(uVar1);
    if (iVar2 < 0) {
      piVar5 = __errno_location();
      pFVar4 = (FILE *)0x0;
      iVar2 = *piVar5;
      FUN_004143e0(__stream);
      *piVar5 = iVar2;
    }
    else {
      iVar3 = FUN_004143e0(__stream);
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


undefined FUN_00416030(uint *param_1,ulong *param_2)

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
          puVar4 = &DAT_0041ace0;
        }
        *(undefined **)(puVar2 + 4) = puVar4;
      }
      uVar6 = uVar6 + 1;
      puVar2 = puVar2 + 8;
    } while (uVar6 <= *param_2 && *param_2 != uVar6);
  }
  return 0;
}


undefined FUN_00416250(byte *param_1,ulong *param_2,byte **param_3)

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
LAB_004162cb:
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
LAB_00416396:
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
        if (bVar17 != 0x49) goto LAB_004163f8;
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
  if (bVar4 != 0x24) goto LAB_00416396;
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
      if (9 < (byte)(bVar17 - 0x30)) goto switchD_004165d7_caseD_26;
    }
  } while ((byte)(bVar17 - 0x30) < 10);
  if (pbVar11 + -1 < (byte *)0xfffffffffffffffe) {
    param_1 = pbVar18 + 2;
    bVar17 = pbVar18[2];
    pbVar18 = pbVar11 + -1;
    goto LAB_00416396;
  }
  goto switchD_004165d7_caseD_26;
LAB_004163f8:
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
joined_r0x0041650a:
    uVar8 = local_70;
    local_68 = pbVar12;
    if (bVar17 != 0x2e) goto LAB_00416411;
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
      goto LAB_00416411;
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
      if (bVar17 != 0x24) goto LAB_0041654f;
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
          if (9 < bVar17) goto switchD_004165d7_caseD_26;
        }
      } while (bVar17 < 10);
      pbVar14 = (byte *)(uVar16 - 1);
      if ((byte *)0xfffffffffffffffd < pbVar14) goto switchD_004165d7_caseD_26;
      ppbVar3[8] = pbVar14;
      pbVar11 = pbVar12 + 2;
    }
    else {
LAB_0041654f:
      pbVar14 = ppbVar3[8];
      if (ppbVar3[8] == (byte *)0xffffffffffffffff) {
        local_68 = pbVar12 + 1;
        ppbVar3[8] = pbVar12;
        pbVar14 = pbVar12;
        if (pbVar12 == (byte *)0xffffffffffffffff) goto switchD_004165d7_caseD_26;
      }
    }
    __ptr = (byte **)param_3[1];
    if (pbVar14 < pbVar19) {
      pbVar12 = *param_3;
      __dest_00 = __ptr;
LAB_0041656e:
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
LAB_00416411:
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
               (bVar17 != 0x74)) goto code_r0x004165d4;
            uVar5 = uVar5 + 8;
          }
          bVar17 = *param_1;
        } while( true );
      }
      if (iVar6 == 5) {
        bVar17 = *pbVar11;
        goto LAB_00416411;
      }
      goto LAB_00416a1c;
    }
    pbVar19 = (byte *)((long)pbVar19 * 2);
    if (pbVar19 <= pbVar14) {
      pbVar19 = pbVar14 + 1;
    }
    if (pbVar19 < (byte *)0x800000000000000) {
      if (ppbVar2 == __ptr) {
        __dest_00 = (byte **)malloc((long)pbVar19 << 5);
        if (__dest_00 == (byte **)0x0) goto LAB_00416c09;
        pbVar12 = *param_3;
        __ptr = ppbVar2;
LAB_00416ebb:
        memcpy(__dest_00,__ptr,(long)pbVar12 << 5);
        pbVar12 = *param_3;
      }
      else {
        __dest_00 = (byte **)realloc(__ptr,(long)pbVar19 << 5);
        __ptr = (byte **)param_3[1];
        if (__dest_00 == (byte **)0x0) goto LAB_00416bf0;
        pbVar12 = *param_3;
        if (ppbVar2 == __ptr) goto LAB_00416ebb;
      }
      param_3[1] = (byte *)__dest_00;
      goto LAB_0041656e;
    }
    goto LAB_00416bf0;
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
    if (bVar17 != 0x24) goto LAB_0041649d;
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
        if (9 < bVar17) goto switchD_004165d7_caseD_26;
      }
    } while (bVar17 < 10);
    pbVar14 = pbVar14 + -1;
    if ((byte *)0xfffffffffffffffd < pbVar14) goto switchD_004165d7_caseD_26;
    ppbVar3[5] = pbVar14;
    pbVar11 = pbVar10 + 2;
  }
  else {
LAB_0041649d:
    pbVar14 = ppbVar3[5];
    if (ppbVar3[5] == (byte *)0xffffffffffffffff) {
      ppbVar3[5] = local_68;
      bVar21 = local_68 == (byte *)0xffffffffffffffff;
      pbVar14 = local_68;
      local_68 = local_68 + 1;
      if (bVar21) goto switchD_004165d7_caseD_26;
    }
  }
  __ptr = (byte **)param_3[1];
  if (pbVar14 < pbVar19) {
    pbVar12 = *param_3;
    __dest_00 = __ptr;
LAB_004164bc:
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
      if (iVar6 != 5) goto LAB_00416a1c;
      bVar17 = *pbVar11;
      pbVar11 = pbVar11 + 1;
    }
    goto joined_r0x0041650a;
  }
  pbVar19 = (byte *)((long)pbVar19 * 2);
  if (pbVar19 <= pbVar14) {
    pbVar19 = pbVar14 + 1;
  }
  if ((byte *)0x7ffffffffffffff < pbVar19) goto LAB_00416bf0;
  if (ppbVar2 != __ptr) {
    __dest_00 = (byte **)realloc(__ptr,(long)pbVar19 << 5);
    __ptr = (byte **)param_3[1];
    if (__dest_00 != (byte **)0x0) {
      pbVar12 = *param_3;
      if (ppbVar2 == __ptr) goto LAB_00416d09;
      goto LAB_004167dd;
    }
    goto LAB_00416bf0;
  }
  __dest_00 = (byte **)malloc((long)pbVar19 << 5);
  if (__dest_00 != (byte **)0x0) {
    pbVar12 = *param_3;
    __ptr = ppbVar2;
LAB_00416d09:
    memcpy(__dest_00,__ptr,(long)pbVar12 << 5);
    pbVar12 = *param_3;
LAB_004167dd:
    param_3[1] = (byte *)__dest_00;
    goto LAB_004164bc;
  }
  goto LAB_00416c09;
code_r0x004165d4:
  switch(bVar17) {
  case 0x25:
    goto switchD_004165d7_caseD_25;
  default:
    goto switchD_004165d7_caseD_26;
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
switchD_004165d7_caseD_26:
      __dest_00 = (byte **)param_3[1];
      goto LAB_00416a1c;
    }
  }
  else {
    ppbVar3[10] = pbVar18;
  }
  __ptr = (byte **)param_3[1];
  __dest_00 = __ptr;
  if (pbVar18 < pbVar19) {
LAB_00416605:
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
LAB_00416a1c:
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
switchD_004165d7_caseD_25:
    *(byte *)(ppbVar3 + 9) = bVar17;
    uVar8 = *param_2;
    ppbVar3[1] = param_1;
    uVar8 = uVar8 + 1;
    *param_2 = uVar8;
    if (uVar8 < uVar20) {
      __dest = (ulong *)param_2[1];
      goto LAB_004162cb;
    }
    if (((long)uVar20 < 0) || (0x2e8ba2e8ba2e8ba < uVar20 * 2)) {
LAB_00416f43:
      __ptr = (byte **)param_3[1];
      goto LAB_00416bf0;
    }
    __ptr_00 = (ulong *)param_2[1];
    if (puVar1 != __ptr_00) {
      __dest = (ulong *)realloc(__ptr_00,uVar20 * 0xb0);
      if (__dest == (ulong *)0x0) goto LAB_00416f43;
      __ptr_00 = (ulong *)param_2[1];
      uVar8 = *param_2;
      if (puVar1 != __ptr_00) goto LAB_004166df;
LAB_00416804:
      __dest = (ulong *)memcpy(__dest,__ptr_00,uVar8 * 0x58);
      uVar8 = *param_2;
LAB_004166df:
      param_2[1] = (ulong)__dest;
      uVar20 = uVar20 * 2;
      goto LAB_004162cb;
    }
    __dest = (ulong *)malloc(uVar20 * 0xb0);
    if (__dest != (ulong *)0x0) goto LAB_00416804;
    __ptr = (byte **)param_3[1];
    if (ppbVar2 == __ptr) goto LAB_00416c19;
  }
  else {
    pbVar19 = (byte *)((long)pbVar19 * 2);
    if (pbVar19 <= pbVar18) {
      pbVar19 = pbVar18 + 1;
    }
    if (pbVar19 < (byte *)0x800000000000000) {
      if (ppbVar2 == __ptr) {
        __dest_00 = (byte **)malloc((long)pbVar19 << 5);
        if (__dest_00 == (byte **)0x0) goto LAB_00416c09;
LAB_00416ba6:
        memcpy(__dest_00,__ptr,(long)*param_3 << 5);
LAB_00416aeb:
        param_3[1] = (byte *)__dest_00;
        goto LAB_00416605;
      }
      __dest_00 = (byte **)realloc(__ptr,(long)pbVar19 << 5);
      if (__dest_00 != (byte **)0x0) {
        __ptr = ppbVar2;
        if (ppbVar2 == (byte **)param_3[1]) goto LAB_00416ba6;
        goto LAB_00416aeb;
      }
      goto LAB_00416f43;
    }
LAB_00416bf0:
    if (ppbVar2 == __ptr) goto LAB_00416c09;
  }
  free(__ptr);
LAB_00416c09:
  if (puVar1 != (ulong *)param_2[1]) {
    free((ulong *)param_2[1]);
  }
LAB_00416c19:
  piVar9 = __errno_location();
  *piVar9 = 0xc;
  return 0xffffffff;
}


/* WARNING: Removing unreachable block (ram,0x00416f93) */
/* WARNING: Removing unreachable block (ram,0x00416f98) */

void FUN_00416f60(void)

{
  __DT_INIT();
  return;
}


void FUN_00416fc0(void)

{
  return;
}


void FUN_00416fd0(undefined param_1)

{
  __cxa_atexit(param_1,0,DAT_0061f428);
  return;
}


undefined FUN_00416fe8(undefined param_1,undefined param_2,undefined param_3)

{
  code **ppcVar1;
  
  for (ppcVar1 = (code **)&DAT_0061ee30; *ppcVar1 != (code *)0xffffffffffffffff;
      ppcVar1 = ppcVar1 + -1) {
    (**ppcVar1)();
  }
  return param_3;
}


void __DT_FINI(void)

{
  FUN_00403d51();
  return;
}

