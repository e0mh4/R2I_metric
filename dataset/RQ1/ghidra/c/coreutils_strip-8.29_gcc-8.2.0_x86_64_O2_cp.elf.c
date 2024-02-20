
void FUN_00402a50(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00402a55(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00402a5a(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00402a5f(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00402a64(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void switchD_0040c5f0::caseD_b(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00402a6e(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00402a73(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00402a78(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00402a7d(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void switchD_0040fb8a::caseD_0(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Could not reconcile some variable overlaps */

byte FUN_00402a90(int param_1,undefined8 *param_2)

{
  bool bVar1;
  ulong uVar2;
  byte bVar3;
  int iVar4;
  char *pcVar5;
  long lVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  undefined local_122;
  undefined local_121;
  char *local_120;
  undefined4 local_118;
  int local_114;
  int local_110;
  int iStack_10c;
  undefined8 local_108;
  undefined2 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined local_e8;
  int local_e4;
  undefined8 local_e0;
  undefined8 local_d8;
  stat local_c8;
  
  FUN_0040c3a0(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils",
                 "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale"
                );
  textdomain("coreutils");
  FUN_004128f0(FUN_0040a800);
  DAT_0061b4ca = '\0';
  FUN_00405170(&local_118);
  local_110 = 4;
  iStack_10c = 2;
  local_e4 = 0;
  local_114 = 1;
  local_108 = 0x100000000;
  local_100 = 0;
  local_fc = 0;
  local_f8 = 0x1000000;
  local_f0 = 0;
  pcVar5 = getenv("POSIXLY_CORRECT");
  local_122 = 0;
  local_e0 = 0;
  local_e8 = pcVar5 != (char *)0x0;
  local_d8 = 0;
  local_120 = (char *)0x0;
  local_121 = 0;
  bVar1 = false;
  pcVar5 = (char *)0x0;
  pcVar11 = (char *)0x0;
  pcVar12 = (char *)0x0;
  pcVar10 = local_120;
LAB_00402b88:
  do {
    local_120 = pcVar10;
    iVar4 = FUN_00411340(param_1,param_2,"abdfHilLnprst:uvxPRS:TZ",&PTR_s_archive_00413540,0);
    uVar2 = local_f8;
    if (iVar4 == -1) {
      if ((local_108._7_1_ != '\0') && (local_f0._4_1_ != '\0')) goto LAB_004030ab;
      if (bVar1) {
        pcVar10 = "options --backup and --no-clobber are mutually exclusive";
        if (local_110 == 2) goto LAB_004030b5;
        if ((local_e4 == 2) && (iStack_10c != 2)) {
LAB_00403098:
          pcVar10 = "--reflink can be used only with --sparse=auto";
          goto LAB_004030b5;
        }
        uVar8 = dcgettext(0,"backup type",5);
        local_118 = FUN_0040a730(uVar8,pcVar11);
      }
      else if (local_e4 == 2) {
        if (iStack_10c != 2) goto LAB_00403098;
        local_118 = 0;
      }
      else {
        local_118 = 0;
      }
      FUN_0040a180(pcVar12);
      if (local_114 == 1) {
        if ((local_f0._2_1_ == '\0') || (local_108._7_1_ != '\0')) {
          local_114 = 4;
          goto LAB_00402f43;
        }
        local_114 = 2;
LAB_0040302d:
        local_108._0_5_ = CONCAT14(local_121,(undefined4)local_108);
        local_108 = local_108 & 0xffffff0000000000 | (ulong)(uint5)local_108;
      }
      else {
LAB_00402f43:
        if (local_f0._2_1_ != '\0') goto LAB_0040302d;
      }
      if ((local_f8._1_1_ == '\0') && (local_120 == (char *)0x0)) {
        if ((local_f8._6_1_ != '\0') && (DAT_0061b4ca == '\0')) {
LAB_00402ff5:
          uVar8 = dcgettext(0,"cannot preserve security context without an SELinux-enabled kernel",5
                           );
                    /* WARNING: Subroutine does not return */
          error(1,0,uVar8);
        }
      }
      else {
        if (local_f8._6_1_ == '\0') {
          local_f8 = local_f8 & 0xffff00ffffffffff;
        }
        else {
          if (local_f8._5_1_ != '\0') {
            uVar8 = dcgettext(0,"cannot set target context and preserve it",5);
                    /* WARNING: Subroutine does not return */
            error(1,0,uVar8);
          }
          if (DAT_0061b4ca == '\0') goto LAB_00402ff5;
        }
        if (local_120 != (char *)0x0) {
LAB_004030d4:
          piVar7 = __errno_location();
          *piVar7 = 0x5f;
          uVar8 = FUN_0040e020(local_120);
          uVar9 = dcgettext(0,"failed to set default file creation context to %s",5);
                    /* WARNING: Subroutine does not return */
          error(1,*piVar7,uVar9,uVar8);
        }
      }
      if ((char)local_f0 == '\0') {
        FUN_00409500();
        bVar3 = FUN_004041b0(param_1 - DAT_0061b43c,param_2 + DAT_0061b43c,pcVar5,local_122,
                             &local_118);
        return bVar3 ^ 1;
      }
      uVar8 = dcgettext(0,"cannot preserve extended attributes, cp is built without xattr support",5
                       );
                    /* WARNING: Subroutine does not return */
      error(1,0,uVar8);
    }
    pcVar10 = local_120;
    switch(iVar4) {
    case 0x48:
      local_114 = 3;
      break;
    case 0x4c:
      local_114 = 4;
      break;
    case 0x50:
      local_114 = 2;
      break;
    case 0x52:
    case 0x72:
      local_f0._0_3_ = CONCAT12(1,(undefined2)local_f0);
      local_f0 = local_f0 & 0xffffffffff000000 | (ulong)(uint3)local_f0;
      break;
    case 0x53:
      bVar1 = true;
      pcVar12 = DAT_0061bae0;
      break;
    case 0x54:
      local_122 = 1;
      break;
    case 0x5a:
      if (DAT_0061b4ca == '\0') {
        if (DAT_0061bae0 != (char *)0x0) {
          uVar8 = dcgettext(0,"warning: ignoring --context; it requires an SELinux-enabled kernel",5
                           );
                    /* WARNING: Subroutine does not return */
          error(0,0,uVar8);
        }
      }
      else {
        pcVar10 = DAT_0061bae0;
        if (DAT_0061bae0 == (char *)0x0) {
          local_f8._0_2_ = CONCAT11(1,(undefined)local_f8);
          local_f8 = local_f8 & 0xffffffffffff0000 | (ulong)(ushort)local_f8;
          pcVar10 = local_120;
        }
      }
      break;
    case 0x61:
      local_114 = 2;
      local_f8._0_3_ = CONCAT12(1,(ushort)local_f8);
      local_f8._0_4_ = (uint)local_f8 & 0xff000000 | (uint)(uint3)local_f8;
      local_fc._0_2_ = CONCAT11(1,(undefined)local_fc);
      local_fc = CONCAT22(0x101,(undefined2)local_fc);
      local_f8._0_5_ = CONCAT14(1,(uint)local_f8);
      local_f8 = local_f8 & 0xffffff0000000000 | (ulong)(uint5)local_f8;
      if (DAT_0061b4ca != '\0') {
        local_f8._0_6_ = CONCAT15(1,(uint5)local_f8);
        local_f8 = uVar2 & 0xffff000000000000 | (ulong)(uint6)local_f8;
      }
      local_f8 = CONCAT17(1,(undefined7)local_f8);
      local_f0._0_3_ = CONCAT21(0x101,(char)local_f0);
      local_f0 = local_f0 & 0xffffffffff000000 | (ulong)(uint3)local_f0;
      break;
    case 0x62:
      bVar1 = true;
      if (DAT_0061bae0 != (char *)0x0) {
        pcVar11 = DAT_0061bae0;
      }
      break;
    case 100:
      local_f8._0_3_ = CONCAT12(1,(ushort)local_f8);
      local_f8 = local_f8 & 0xffffffffff000000 | (ulong)(uint3)local_f8;
      local_114 = 2;
      break;
    case 0x66:
      local_108._0_7_ = CONCAT16(1,(uint6)local_108);
      local_108 = local_108 & 0xff00000000000000 | (ulong)(uint7)local_108;
      break;
    case 0x69:
      local_110 = 3;
      break;
    case 0x6c:
      local_108 = CONCAT17(1,(uint7)local_108);
      break;
    case 0x6e:
      local_110 = 2;
      break;
    case 0x73:
      local_f0._0_5_ = CONCAT14(1,(undefined4)local_f0);
      local_f0 = local_f0 & 0xffffff0000000000 | (ulong)(uint5)local_f0;
      break;
    case 0x74:
      goto switchD_00402bb8_caseD_74;
    case 0x75:
      local_f0._0_6_ = CONCAT15(1,(uint5)local_f0);
      local_f0 = local_f0 & 0xffff000000000000 | (ulong)(uint6)local_f0;
      break;
    case 0x76:
      local_f0._0_7_ = CONCAT16(1,(uint6)local_f0);
      local_f0 = local_f0 & 0xff00000000000000 | (ulong)(uint7)local_f0;
      break;
    case 0x78:
      local_fc = CONCAT31(local_fc._1_3_,1);
      break;
    case 0x80:
      local_f8 = local_f8 & 0xffffffff00ffffff;
      break;
    case 0x81:
      local_121 = 1;
      break;
    case 0x82:
      FUN_00403280(DAT_0061bae0,&local_118,0);
      break;
    case 0x83:
      DAT_0061b4c9 = 1;
      break;
    case 0x84:
      if (DAT_0061bae0 != (char *)0x0) {
        FUN_00403280(DAT_0061bae0,&local_118,1);
        local_f8._0_5_ = CONCAT14(1,(uint)local_f8);
        local_f8 = local_f8 & 0xffffff0000000000 | (ulong)(uint5)local_f8;
        break;
      }
    case 0x70:
      local_fc._0_2_ = CONCAT11(1,(undefined)local_fc);
      local_fc = CONCAT22(0x101,(undefined2)local_fc);
      local_f8._0_5_ = CONCAT14(1,(uint)local_f8);
      local_f8 = local_f8 & 0xffffff0000000000 | (ulong)(uint5)local_f8;
      break;
    case 0x85:
      if (DAT_0061bae0 == (char *)0x0) {
        local_e4 = 2;
      }
      else {
        lVar6 = FUN_00409ff0("--reflink",DAT_0061bae0,&PTR_DAT_00413910,&DAT_00413900,4,
                             PTR_FUN_0061b3c8);
        local_e4 = *(int *)(&DAT_00413900 + lVar6 * 4);
      }
      break;
    case 0x86:
      lVar6 = FUN_00409ff0("--sparse",DAT_0061bae0,&PTR_s_never_00413940,&DAT_00413928,4,
                           PTR_FUN_0061b3c8);
      iStack_10c = *(int *)(&DAT_00413928 + lVar6 * 4);
      break;
    case 0x87:
      DAT_0061b4c8 = 1;
      break;
    case 0x88:
      local_108._0_6_ = CONCAT15(1,(uint5)local_108);
      local_108 = local_108 & 0xffff000000000000 | (ulong)(uint6)local_108;
      break;
    case -0x83:
      FUN_0040ff60(stdout,&DAT_004129a5,"GNU coreutils",PTR_DAT_0061b3c0,"Torbjorn Granlund",
                   "David MacKenzie","Jim Meyering",0);
                    /* WARNING: Subroutine does not return */
      exit(0);
    case -0x82:
      FUN_00403c80(0);
LAB_004030ab:
      pcVar10 = "cannot make both hard and symbolic links";
LAB_004030b5:
      uVar8 = dcgettext(0,pcVar10,5);
                    /* WARNING: Subroutine does not return */
      error(0,0,uVar8);
    default:
      FUN_00403c80(1);
      goto LAB_004030d4;
    }
  } while( true );
switchD_00402bb8_caseD_74:
  if (pcVar5 != (char *)0x0) {
    uVar8 = dcgettext(0,"multiple target directories specified",5);
                    /* WARNING: Subroutine does not return */
    error(1,0,uVar8);
  }
  iVar4 = __xstat(1,DAT_0061bae0,&local_c8);
  if (iVar4 != 0) {
    uVar8 = FUN_0040ddd0(4,DAT_0061bae0);
    uVar9 = dcgettext(0,"failed to access %s",5);
    piVar7 = __errno_location();
                    /* WARNING: Subroutine does not return */
    error(1,*piVar7,uVar9,uVar8);
  }
  pcVar5 = DAT_0061bae0;
  if ((local_c8.st_mode & 0xf000) != 0x4000) {
    uVar8 = FUN_0040ddd0(4,DAT_0061bae0);
    uVar9 = dcgettext(0,"target %s is not a directory",5);
                    /* WARNING: Subroutine does not return */
    error(1,0,uVar9,uVar8);
  }
  goto LAB_00402b88;
}


void FUN_004031a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_retaddr;
  undefined auStack_8 [8];
  
  (*(code *)PTR___libc_start_main_0061aff0)
            (FUN_00402a90,unaff_retaddr,&stack0x00000008,FUN_00412880,FUN_004128e0,param_3,auStack_8
            );
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* WARNING: Removing unreachable block (ram,0x004031d8) */
/* WARNING: Removing unreachable block (ram,0x004031e2) */

void FUN_004031cb(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00403219) */

void FUN_004031ea(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00403256) */

void FUN_00403221(void)

{
  if (DAT_0061b468 != '\0') {
    return;
  }
  FUN_004031cb();
  DAT_0061b468 = 1;
  return;
}


/* WARNING: Removing unreachable block (ram,0x00403219) */

void thunk_FUN_004031ea(void)

{
  return;
}


void FUN_00403280(undefined8 param_1,undefined8 param_2,char param_3)

{
  char *__s;
  char *pcVar1;
  long lVar2;
  char *pcVar3;
  
  pcVar3 = "--preserve";
  __s = (char *)FUN_00410310();
  if (param_3 == '\0') {
    pcVar3 = "--no-preserve";
  }
  pcVar1 = strchr(__s,0x2c);
  if (pcVar1 != (char *)0x0) {
    *pcVar1 = '\0';
  }
  lVar2 = FUN_00409ff0(pcVar3,__s,&PTR_DAT_00413500,&DAT_004134e0,4,PTR_FUN_0061b3c8);
  if (*(uint *)(&DAT_004134e0 + lVar2 * 4) < 7) {
                    /* WARNING: Could not recover jumptable at 0x0040330b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&PTR_LAB_00412c40)[*(uint *)(&DAT_004134e0 + lVar2 * 4)])();
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


uint FUN_004033e0(char *param_1,stat *param_2,undefined *param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = __xstat(1,param_1,param_2);
  if (uVar2 == 0) {
    if ((param_2->st_mode & 0xf000) == 0x4000) {
      return 1;
    }
  }
  else {
    piVar3 = __errno_location();
    iVar1 = *piVar3;
    if (iVar1 != 0) {
      if (iVar1 == 2) {
        *param_3 = 1;
        return 0;
      }
      uVar4 = FUN_0040ddd0(4,param_1);
      uVar5 = dcgettext(0,"failed to access %s",5);
                    /* WARNING: Subroutine does not return */
      error(1,iVar1,uVar5,uVar4);
    }
    uVar2 = (uint)((param_2->st_mode & 0xf000) == 0x4000);
  }
  return uVar2 & 1;
}


undefined8
FUN_004034a0(char *param_1,long param_2,long param_3,long *param_4,char *param_5,long param_6)

{
  undefined uVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  size_t sVar10;
  char *pcVar11;
  char *pcVar12;
  uint *puVar13;
  undefined4 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  int *piVar17;
  uint uVar18;
  char *pcVar19;
  ulong uVar20;
  uint uVar21;
  long alStack_180 [2];
  long *local_170;
  char *local_168;
  char *local_160;
  stat local_158;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  __nlink_t local_b8;
  uint uStack_b0;
  __uid_t _Stack_ac;
  undefined8 local_a8;
  __dev_t _Stack_a0;
  __off_t local_98;
  __blksize_t _Stack_90;
  __blkcnt_t local_88;
  __time_t _Stack_80;
  long local_78;
  __time_t _Stack_70;
  long local_68;
  __time_t _Stack_60;
  long local_58;
  long lStack_50;
  long local_48;
  long lStack_40;
  
  alStack_180[0] = 0x4034d7;
  alStack_180[1] = param_3;
  local_170 = param_4;
  local_168 = param_5;
  sVar10 = strlen(param_1);
  lVar4 = -(sVar10 + 0x18 & 0xfffffffffffffff0);
  *(undefined8 *)((long)alStack_180 + lVar4) = 0x4034f7;
  pcVar11 = (char *)memcpy((void *)((long)&local_170 + lVar4),param_1,sVar10 + 1);
  *(undefined8 *)((long)alStack_180 + lVar4) = 0x403502;
  sVar10 = FUN_0040aa80(pcVar11);
  lVar5 = -(sVar10 + 0x18 & 0xfffffffffffffff0);
  pcVar19 = (char *)((long)&local_170 + lVar5 + lVar4);
  *(undefined8 *)((long)alStack_180 + lVar5 + lVar4) = 0x403527;
  memcpy(pcVar19,pcVar11,sVar10);
  pcVar19[sVar10] = '\0';
  *local_170 = 0;
  *(undefined8 *)((long)alStack_180 + lVar5 + lVar4) = 0x40354e;
  iVar7 = __xstat(1,pcVar19,&local_158);
  if (iVar7 == 0) {
    pcVar11 = pcVar19;
    if ((local_158.st_mode & 0xf000) != 0x4000) {
LAB_0040397b:
      *(undefined8 *)((long)alStack_180 + lVar5 + lVar4) = 0x403985;
      uVar15 = FUN_0040ddd0(4,pcVar11);
      *(undefined8 *)((long)alStack_180 + lVar5 + lVar4) = 0x403999;
      uVar16 = dcgettext(0,"%s exists but is not a directory",5);
                    /* WARNING: Subroutine does not return */
      *(undefined **)((long)alStack_180 + lVar5 + lVar4) = &UNK_004039aa;
      error(0,0,uVar16,uVar15);
    }
    *local_168 = '\0';
  }
  else {
    pcVar19 = pcVar11 + param_2;
    cVar6 = *pcVar19;
    local_160 = pcVar19;
    while (cVar6 == '/') {
      pcVar19 = pcVar19 + 1;
      cVar6 = *pcVar19;
    }
    while( true ) {
      *(undefined8 *)((long)alStack_180 + lVar5 + lVar4) = 0x40358a;
      pcVar12 = strchr(pcVar19,0x2f);
      if (pcVar12 == (char *)0x0) break;
      *pcVar12 = '\0';
      *(undefined8 *)((long)alStack_180 + lVar5 + lVar4) = 0x4035ad;
      iVar7 = __xstat(1,pcVar11,&local_158);
      pcVar19 = local_160;
      if ((iVar7 == 0) && ((*(uint *)(param_6 + 0x1c) & 0xffffff00) == 0)) {
LAB_004035c2:
        pcVar19 = local_160;
        *(undefined8 *)((long)alStack_180 + lVar5 + lVar4) = 0x4035d8;
        cVar6 = FUN_00404fc0(pcVar19,pcVar11,0,0,param_6);
        if (cVar6 == '\0') {
          return 0;
        }
        if ((local_158.st_mode & 0xf000) != 0x4000) goto LAB_0040397b;
        *local_168 = '\0';
LAB_00403600:
        if ((*(ulong *)(param_6 + 0x20) & 0xff000000ff00) != 0) {
          uVar1 = *(undefined *)(param_6 + 0x25);
          *(undefined8 *)((long)alStack_180 + lVar5 + lVar4) = 0x4038ea;
          cVar6 = FUN_00405090(pcVar11,uVar1,0);
          if ((cVar6 == '\0') && (*(char *)(param_6 + 0x26) != '\0')) {
            return 0;
          }
        }
      }
      else {
        *(undefined8 *)((long)alStack_180 + lVar5 + lVar4) = 0x403658;
        iVar8 = __xstat(1,pcVar19,(stat *)&local_c8);
        if (iVar8 == 0) {
          if ((uStack_b0 & 0xf000) != 0x4000) {
            uVar18 = 0x14;
            goto LAB_0040385c;
          }
        }
        else {
          *(undefined8 *)((long)alStack_180 + lVar5 + lVar4) = 0x403665;
          puVar13 = (uint *)__errno_location();
          uVar18 = *puVar13;
          if (uVar18 != 0) {
LAB_0040385c:
            pcVar11 = local_160;
            local_168 = (char *)((ulong)local_168 & 0xffffffff00000000 | (ulong)uVar18);
            *(undefined8 *)((long)alStack_180 + lVar5 + lVar4) = 0x403874;
            uVar15 = FUN_0040ddd0(4,pcVar11);
            *(undefined8 *)((long)alStack_180 + lVar5 + lVar4) = 0x403888;
            uVar16 = dcgettext(0,"failed to get attributes of %s",5);
            uVar20 = (ulong)local_168 & 0xffffffff;
                    /* WARNING: Subroutine does not return */
            *(undefined **)((long)alStack_180 + lVar5 + lVar4) = &UNK_004038a1;
            error(0,uVar20,uVar16,uVar15);
          }
        }
        *(undefined8 *)((long)alStack_180 + lVar5 + lVar4) = 0x40367b;
        puVar14 = (undefined4 *)FUN_004100e0(0xa8);
        pcVar19 = local_160;
        *puVar14 = local_c8;
        puVar14[1] = uStack_c4;
        puVar14[2] = uStack_c0;
        puVar14[3] = uStack_bc;
        *(__nlink_t *)(puVar14 + 4) = local_b8;
        *(ulong *)(puVar14 + 6) = CONCAT44(_Stack_ac,uStack_b0);
        *(undefined8 *)(puVar14 + 8) = local_a8;
        *(__dev_t *)(puVar14 + 10) = _Stack_a0;
        *(__off_t *)(puVar14 + 0xc) = local_98;
        *(__blksize_t *)(puVar14 + 0xe) = _Stack_90;
        *(__blkcnt_t *)(puVar14 + 0x10) = local_88;
        *(__time_t *)(puVar14 + 0x12) = _Stack_80;
        *(long *)(puVar14 + 0x14) = local_78;
        *(__time_t *)(puVar14 + 0x16) = _Stack_70;
        *(long *)(puVar14 + 0x18) = local_68;
        *(__time_t *)(puVar14 + 0x1a) = _Stack_60;
        *(long *)(puVar14 + 0x1c) = local_58;
        *(long *)(puVar14 + 0x1e) = lStack_50;
        *(long *)(puVar14 + 0x20) = local_48;
        *(long *)(puVar14 + 0x22) = lStack_40;
        *(undefined *)(puVar14 + 0x24) = 0;
        *(long *)(puVar14 + 0x26) = (long)pcVar12 - (long)pcVar11;
        lVar3 = *local_170;
        *local_170 = (long)puVar14;
        *(long *)(puVar14 + 0x28) = lVar3;
        if (iVar7 == 0) goto LAB_004035c2;
        uVar2 = puVar14[6];
        *(undefined8 *)((long)alStack_180 + lVar5 + lVar4) = 0x40372a;
        cVar6 = FUN_00404fc0(pcVar19,pcVar11,uVar2,1,param_6);
        if (cVar6 == '\0') {
          return 0;
        }
        uVar18 = puVar14[6];
        *local_168 = '\x01';
        if (*(char *)(param_6 + 0x1d) == '\0') {
          uVar21 = 0;
          uVar9 = 0xffffffff;
          if (*(char *)(param_6 + 0x1e) != '\0') {
            uVar21 = uVar18 & 0x12;
            uVar9 = ~uVar21;
          }
        }
        else {
          uVar21 = uVar18 & 0x3f;
          uVar9 = ~uVar21;
        }
        if (*(char *)(param_6 + 0x20) != '\0') {
          uVar18 = 0x1ff;
        }
        *(undefined8 *)((long)alStack_180 + lVar5 + lVar4) = 0x403774;
        iVar7 = mkdir(pcVar11,uVar18 & uVar9 & 0xfff);
        pcVar19 = local_160;
        lVar3 = alStack_180[1];
        if (iVar7 != 0) {
          *(undefined8 *)((long)alStack_180 + lVar5 + lVar4) = 0x403a1a;
          uVar15 = FUN_0040ddd0(4,pcVar11);
          pcVar11 = "cannot make directory %s";
          goto LAB_004039dc;
        }
        if (alStack_180[1] != 0) {
          *(undefined8 *)((long)alStack_180 + lVar5 + lVar4) = 0x4037a1;
          __printf_chk(1,lVar3,pcVar19,pcVar11);
        }
        *(undefined8 *)((long)alStack_180 + lVar5 + lVar4) = 0x4037b5;
        iVar7 = __lxstat(1,pcVar11,&local_158);
        if (iVar7 != 0) {
          *(undefined8 *)((long)alStack_180 + lVar5 + lVar4) = 0x4039cf;
          uVar15 = FUN_0040ddd0(4,pcVar11);
          pcVar11 = "failed to get attributes of %s";
          goto LAB_004039dc;
        }
        if (*(char *)(param_6 + 0x1e) == '\0') {
          if ((~local_158.st_mode & uVar21) != 0) {
            *(undefined8 *)((long)alStack_180 + lVar5 + lVar4) = 0x403913;
            uVar18 = FUN_004053d0();
            uVar21 = uVar21 & ~uVar18;
            if ((~local_158.st_mode & uVar21) != 0) {
              *(undefined *)(puVar14 + 0x24) = 1;
              puVar14[6] = uVar21 | local_158.st_mode;
              goto LAB_00403800;
            }
          }
          if ((local_158.st_mode & 0x1c0) != 0x1c0) {
            *(undefined *)(puVar14 + 0x24) = 1;
            puVar14[6] = uVar21 | local_158.st_mode;
            goto LAB_00403800;
          }
        }
        else {
LAB_00403800:
          if ((local_158.st_mode & 0x1c0) != 0x1c0) {
            uVar18 = local_158.st_mode | 0x1c0;
            *(undefined8 *)((long)alStack_180 + lVar5 + lVar4) = 0x40381c;
            iVar7 = chmod(pcVar11,uVar18);
            if (iVar7 != 0) {
              *(undefined8 *)((long)alStack_180 + lVar5 + lVar4) = 0x403a36;
              uVar15 = FUN_0040ddd0(4,pcVar11);
              pcVar11 = "setting permissions for %s";
LAB_004039dc:
              *(undefined8 *)((long)alStack_180 + lVar5 + lVar4) = 0x4039e3;
              uVar16 = dcgettext(0,pcVar11,5);
              *(undefined8 *)((long)alStack_180 + lVar5 + lVar4) = 0x4039eb;
              piVar17 = __errno_location();
              iVar7 = *piVar17;
                    /* WARNING: Subroutine does not return */
              *(undefined **)((long)alStack_180 + lVar5 + lVar4) = &UNK_004039fc;
              error(0,iVar7,uVar16,uVar15);
            }
          }
        }
        if (*local_168 == '\0') goto LAB_00403600;
      }
      cVar6 = pcVar12[1];
      pcVar19 = pcVar12 + 1;
      *pcVar12 = '/';
      while (cVar6 == '/') {
        pcVar19 = pcVar19 + 1;
        cVar6 = *pcVar19;
      }
    }
  }
  return 1;
}


undefined8 FUN_00403a50(char *param_1,long param_2,long param_3,long param_4)

{
  __gid_t _Var1;
  __uid_t __owner;
  undefined4 uVar2;
  __mode_t __mode;
  long lVar3;
  char cVar4;
  int iVar5;
  size_t sVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int *piVar10;
  undefined8 auStack_60 [2];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  auStack_60[0] = 0x403a72;
  sVar6 = strlen(param_1);
  lVar3 = -(sVar6 + 0x18 & 0xfffffffffffffff0);
  *(undefined8 *)((long)auStack_60 + lVar3) = 0x403a92;
  pcVar7 = (char *)memcpy((void *)((long)&local_50 + lVar3),param_1,sVar6 + 1);
  if (param_3 != 0) {
    do {
      cVar4 = *(char *)(param_4 + 0x1f);
      pcVar7[*(long *)(param_3 + 0x98)] = '\0';
      if (cVar4 != '\0') {
        auStack_60[1] = *(undefined8 *)(param_3 + 0x48);
        local_50 = *(undefined8 *)(param_3 + 0x50);
        local_48 = *(undefined8 *)(param_3 + 0x58);
        local_40 = *(undefined8 *)(param_3 + 0x60);
        *(undefined8 *)((long)auStack_60 + lVar3) = 0x403b29;
        iVar5 = FUN_0040f8a0(pcVar7,auStack_60 + 1);
        if (iVar5 != 0) {
          *(undefined8 *)((long)auStack_60 + lVar3) = 0x403b41;
          uVar8 = FUN_0040ddd0(4,pcVar7);
          *(undefined8 *)((long)auStack_60 + lVar3) = 0x403b55;
          uVar9 = dcgettext(0,"failed to preserve times for %s",5);
          *(undefined8 *)((long)auStack_60 + lVar3) = 0x403b5d;
          piVar10 = __errno_location();
          iVar5 = *piVar10;
                    /* WARNING: Subroutine does not return */
          *(undefined **)((long)auStack_60 + lVar3) = &UNK_00403b6e;
          error(0,iVar5,uVar9,uVar8);
        }
      }
      if (*(char *)(param_4 + 0x1d) == '\0') {
LAB_00403ab3:
        if (*(char *)(param_4 + 0x1e) == '\0') goto LAB_00403ac1;
LAB_00403bc0:
        uVar2 = *(undefined4 *)(param_3 + 0x18);
        *(undefined8 *)((long)auStack_60 + lVar3) = 0x403bd6;
        iVar5 = FUN_00409b40(pcVar7 + param_2,0xffffffff,pcVar7,0xffffffff,uVar2);
        if (iVar5 != 0) {
          return 0;
        }
      }
      else {
        _Var1 = *(__gid_t *)(param_3 + 0x20);
        __owner = *(__uid_t *)(param_3 + 0x1c);
        *(undefined8 *)((long)auStack_60 + lVar3) = 0x403b86;
        iVar5 = lchown(pcVar7,__owner,_Var1);
        if (iVar5 == 0) goto LAB_00403ab3;
        *(undefined8 *)((long)auStack_60 + lVar3) = 0x403b96;
        cVar4 = FUN_004051b0(param_4);
        if (cVar4 == '\0') {
          *(undefined8 *)((long)auStack_60 + lVar3) = 0x403c65;
          uVar8 = FUN_0040ddd0(4,pcVar7);
          pcVar7 = "failed to preserve ownership for %s";
          goto LAB_00403c15;
        }
        _Var1 = *(__gid_t *)(param_3 + 0x20);
        *(undefined8 *)((long)auStack_60 + lVar3) = 0x403bb1;
        lchown(pcVar7,0xffffffff,_Var1);
        if (*(char *)(param_4 + 0x1e) != '\0') goto LAB_00403bc0;
LAB_00403ac1:
        if (*(char *)(param_3 + 0x90) != '\0') {
          __mode = *(__mode_t *)(param_3 + 0x18);
          *(undefined8 *)((long)auStack_60 + lVar3) = 0x403bf3;
          iVar5 = chmod(pcVar7,__mode);
          if (iVar5 != 0) {
            *(undefined8 *)((long)auStack_60 + lVar3) = 0x403c08;
            uVar8 = FUN_0040ddd0(4,pcVar7);
            pcVar7 = "failed to preserve permissions for %s";
LAB_00403c15:
            *(undefined8 *)((long)auStack_60 + lVar3) = 0x403c1c;
            uVar9 = dcgettext(0,pcVar7,5);
            *(undefined8 *)((long)auStack_60 + lVar3) = 0x403c24;
            piVar10 = __errno_location();
            iVar5 = *piVar10;
                    /* WARNING: Subroutine does not return */
            *(undefined **)((long)auStack_60 + lVar3) = &UNK_00403c35;
            error(0,iVar5,uVar9,uVar8);
          }
        }
      }
      pcVar7[*(long *)(param_3 + 0x98)] = '/';
      param_3 = *(long *)(param_3 + 0xa0);
    } while (param_3 != 0);
  }
  return 1;
}


void FUN_00403c80(int param_1)

{
  FILE *pFVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  byte **ppbVar5;
  undefined8 uVar7;
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
  undefined8 local_28;
  undefined8 local_20;
  byte **ppbVar6;
  
  uVar7 = DAT_0061b920;
  bVar13 = 0;
  if (param_1 != 0) {
    uVar3 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(stderr,1,uVar3,uVar7);
    goto LAB_00403cbf;
  }
  uVar3 = dcgettext(0,
                    "Usage: %s [OPTION]... [-T] SOURCE DEST\n  or:  %s [OPTION]... SOURCE... DIRECTORY\n  or:  %s [OPTION]... -t DIRECTORY SOURCE...\n"
                    ,5);
  __printf_chk(1,uVar3,uVar7,uVar7,uVar7);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"Copy SOURCE to DEST, or multiple SOURCE(s) to DIRECTORY.\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nMandatory arguments to long options are mandatory for short options too.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -a, --archive                same as -dR --preserve=all\n      --attributes-only        don\'t copy the file data, just the attributes\n      --backup[=CONTROL]       make a backup of each existing destination file\n  -b                           like --backup but does not accept an argument\n      --copy-contents          copy contents of special files when recursive\n  -d                           same as --no-dereference --preserve=links\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -f, --force                  if an existing destination file cannot be\n                                 opened, remove it and try again (this option\n                                 is ignored when the -n option is also used)\n  -i, --interactive            prompt before overwrite (overrides a previous -n\n                                  option)\n  -H                           follow command-line symbolic links in SOURCE\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -l, --link                   hard link files instead of copying\n  -L, --dereference            always follow symbolic links in SOURCE\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -n, --no-clobber             do not overwrite an existing file (overrides\n                                 a previous -i option)\n  -P, --no-dereference         never follow symbolic links in SOURCE\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -p                           same as --preserve=mode,ownership,timestamps\n      --preserve[=ATTR_LIST]   preserve the specified attributes (default:\n                                 mode,ownership,timestamps), if possible\n                                 additional attributes: context, links, xattr,\n                                 all\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --no-preserve=ATTR_LIST  don\'t preserve the specified attributes\n      --parents                use full source file name under DIRECTORY\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -R, -r, --recursive          copy directories recursively\n      --reflink[=WHEN]         control clone/CoW copies. See below\n      --remove-destination     remove each existing destination file before\n                                 attempting to open it (contrast with --force)\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --sparse=WHEN            control creation of sparse files. See below\n      --strip-trailing-slashes  remove any trailing slashes from each SOURCE\n                                 argument\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -s, --symbolic-link          make symbolic links instead of copying\n  -S, --suffix=SUFFIX          override the usual backup suffix\n  -t, --target-directory=DIRECTORY  copy all SOURCE arguments into DIRECTORY\n  -T, --no-target-directory    treat DEST as a normal file\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -u, --update                 copy only when the SOURCE file is newer\n                                 than the destination file or when the\n                                 destination file is missing\n  -v, --verbose                explain what is being done\n  -x, --one-file-system        stay on this file system\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -Z                           set SELinux security context of destination\n                                 file to default type\n      --context[=CTX]          like -Z, or if CTX is specified then set the\n                                 SELinux or SMACK security context to CTX\n"
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
                             "\nBy default, sparse SOURCE files are detected by a crude heuristic and the\ncorresponding DEST file is made sparse as well.  That is the behavior\nselected by --sparse=auto.  Specify --sparse=always to create a sparse DEST\nfile whenever the SOURCE file contains a long enough sequence of zero bytes.\nUse --sparse=never to inhibit creation of sparse files.\n\nWhen --reflink[=always] is specified, perform a lightweight copy, where the\ndata blocks are copied only when modified.  If this is not possible the copy\nfails, or if --reflink=auto is specified, fall back to a standard copy.\n"
                             ,5);
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
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nAs a special case, cp makes a backup of SOURCE when the force and backup\noptions are given and SOURCE and DEST are the same name for an existing,\nregular file.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  local_88 = &DAT_004129a8;
  local_80 = "test invocation";
  local_78[0] = (byte *)0x412a22;
  local_78[1] = (byte *)0x4129ba;
  local_78[2] = (byte *)0x4129d0;
  local_78[3] = (byte *)0x4129da;
  local_78[4] = (byte *)0x4129e9;
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
    lVar8 = 3;
    pbVar10 = &DAT_004129a5;
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
        pbVar9 = &DAT_004129a5;
        goto LAB_0040417b;
      }
    }
    pbVar9 = &DAT_004129a5;
    uVar7 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    pcVar4 = " invocation";
    __printf_chk(1,uVar7,"https://www.gnu.org/software/coreutils/",&DAT_004129a5);
  }
  else {
    uVar7 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar7,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
      iVar2 = strncmp(pcVar4,"en_",3);
      if (iVar2 != 0) {
LAB_0040417b:
        uVar7 = dcgettext(0,"Report %s translation bugs to <https://translationproject.org/team/>\n"
                          ,5);
        __printf_chk(1,uVar7,&DAT_004129a5);
      }
    }
    pcVar4 = " invocation";
    uVar7 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    __printf_chk(1,uVar7,"https://www.gnu.org/software/coreutils/",&DAT_004129a5);
    if (pbVar9 != &DAT_004129a5) {
      pcVar4 = "";
    }
  }
  uVar7 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(1,uVar7,pbVar9,pcVar4);
LAB_00403cbf:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}


uint FUN_004041b0(int param_1,char **param_2,char *param_3,char param_4,int *param_5)

{
  int iVar1;
  void *pvVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  size_t sVar6;
  ulong uVar7;
  void *pvVar8;
  byte *pbVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  char *pcVar13;
  char ***pppcVar14;
  undefined *puVar15;
  byte *pbVar16;
  long lVar17;
  char *pcVar18;
  byte *pbVar19;
  int *piVar20;
  uint uVar21;
  undefined uVar22;
  undefined uVar23;
  byte bVar24;
  char **local_f8;
  char *local_f0;
  char local_da;
  undefined local_d9;
  void *local_d8;
  long local_d0;
  undefined local_c8 [24];
  uint local_b0;
  
  bVar24 = 0;
  local_f0 = param_3;
  local_da = '\0';
  if ((int)(uint)(param_3 == (char *)0x0) < param_1) {
    if (param_4 == '\0') {
      if (param_3 != (char *)0x0) {
LAB_00404202:
        if (param_1 != 1) {
          FUN_00405110(param_5);
          FUN_00405140(param_5);
        }
        uVar21 = 1;
        local_f8 = param_2 + (ulong)(param_1 - 1) + 1;
        pppcVar14 = &local_f8;
        do {
          pcVar18 = *param_2;
          local_d0 = 0;
          if (DAT_0061b4c8 != '\0') {
            *(undefined8 *)((long)pppcVar14 + -8) = 0x4044a8;
            FUN_0040abd0(pcVar18);
          }
          *(undefined8 *)((long)pppcVar14 + -8) = 0x4042fc;
          sVar6 = strlen(pcVar18);
          uVar7 = sVar6 + 0x18 & 0xfffffffffffffff0;
          if (DAT_0061b4c9 == '\0') {
            lVar17 = -uVar7;
            puVar15 = (undefined *)((long)pppcVar14 + lVar17);
            uVar22 = 0;
            uVar23 = (void *)((ulong)((long)pppcVar14 + lVar17 + 0xf) & 0xfffffffffffffff0) ==
                     (void *)0x0;
            *(undefined8 *)((long)pppcVar14 + lVar17 + -8) = 0x404329;
            pvVar8 = memcpy((void *)((ulong)((long)pppcVar14 + lVar17 + 0xf) & 0xfffffffffffffff0),
                            pcVar18,sVar6 + 1);
            *(undefined8 *)((long)pppcVar14 + lVar17 + -8) = 0x404331;
            pbVar9 = (byte *)FUN_0040ab40(pvVar8);
            *(undefined8 *)((long)pppcVar14 + lVar17 + -8) = 0x40433c;
            FUN_0040abd0(pbVar9);
            pcVar13 = local_f0;
            lVar12 = 3;
            pbVar16 = pbVar9;
            pbVar19 = &DAT_00412a7d;
            do {
              if (lVar12 == 0) break;
              lVar12 = lVar12 + -1;
              uVar22 = *pbVar16 < *pbVar19;
              uVar23 = *pbVar16 == *pbVar19;
              pbVar16 = pbVar16 + (ulong)bVar24 * -2 + 1;
              pbVar19 = pbVar19 + (ulong)bVar24 * -2 + 1;
            } while ((bool)uVar23);
            if ((!(bool)uVar22 && !(bool)uVar23) == (bool)uVar22) {
              *(undefined8 *)((long)pppcVar14 + lVar17 + -8) = 0x404364;
              pvVar8 = (void *)FUN_00410310(pcVar13);
              puVar15 = (undefined *)((long)pppcVar14 + lVar17);
            }
            else {
              *(undefined8 *)((long)pppcVar14 + lVar17 + -8) = 0x4044f9;
              pvVar8 = (void *)FUN_0040af00(pcVar13,pbVar9,0);
            }
LAB_00404367:
            cVar3 = local_da;
            *(undefined8 *)(puVar15 + -8) = 0x404386;
            uVar4 = FUN_00409280(pcVar18,pvVar8,cVar3,param_5,&local_d9,0);
            pvVar2 = local_d8;
            uVar21 = uVar21 & uVar4;
            if (DAT_0061b4c9 != '\0') {
              lVar17 = local_d0 - (long)pvVar8;
              *(undefined8 *)(puVar15 + -8) = 0x4043b2;
              uVar4 = FUN_00403a50(pvVar8,lVar17,pvVar2,param_5);
              uVar21 = uVar21 & uVar4;
              goto LAB_004042b8;
            }
          }
          else {
            lVar17 = -uVar7;
            puVar15 = (undefined *)((long)pppcVar14 + lVar17);
            *(undefined8 *)((long)pppcVar14 + lVar17 + -8) = 0x40424c;
            pvVar8 = memcpy((void *)((ulong)((long)pppcVar14 + lVar17 + 0xf) & 0xfffffffffffffff0),
                            pcVar18,sVar6 + 1);
            *(undefined8 *)((long)pppcVar14 + lVar17 + -8) = 0x404257;
            FUN_0040abd0(pvVar8);
            pcVar13 = local_f0;
            *(undefined8 *)((long)pppcVar14 + lVar17 + -8) = 0x40426d;
            pvVar8 = (void *)FUN_0040af00(pcVar13,pvVar8,&local_d0);
            pcVar13 = "%s -> %s\n";
            if (*(char *)((long)param_5 + 0x2e) == '\0') {
              pcVar13 = (char *)0x0;
            }
            lVar12 = local_d0 - (long)pvVar8;
            *(undefined8 *)((long)pppcVar14 + lVar17 + -8) = 0x4042a6;
            cVar3 = FUN_004034a0(pvVar8,lVar12,pcVar13,&local_d8,&local_da,param_5);
            if (cVar3 != '\0') goto LAB_00404367;
            uVar21 = 0;
            puVar15 = (undefined *)((long)pppcVar14 + lVar17);
LAB_004042b8:
            pvVar2 = local_d8;
            if (DAT_0061b4c9 != '\0') {
              while (local_d8 = pvVar2, pvVar2 != (void *)0x0) {
                local_d8 = *(void **)((long)pvVar2 + 0xa0);
                *(undefined8 *)(puVar15 + -8) = 0x4044d3;
                free(pvVar2);
                pvVar2 = local_d8;
              }
            }
          }
          param_2 = param_2 + 1;
          *(undefined8 *)(puVar15 + -8) = 0x4042cc;
          free(pvVar8);
          pppcVar14 = (char ***)puVar15;
          if (local_f8 == param_2) {
            return uVar21;
          }
        } while( true );
      }
      if (param_1 != 1) {
        cVar3 = FUN_004033e0(param_2[(long)param_1 + -1],local_c8,&local_da);
        if (cVar3 == '\0') {
          if (param_1 != 2) {
            uVar10 = FUN_0040ddd0(4,param_2[(long)param_1 + -1]);
            uVar11 = dcgettext(0,"target %s is not a directory",5);
                    /* WARNING: Subroutine does not return */
            error(1,0,uVar11,uVar10);
          }
        }
        else {
          param_1 = param_1 + -1;
          local_f0 = param_2[param_1];
          if (param_2[param_1] != (char *)0x0) goto LAB_00404202;
        }
      }
    }
    else {
      if (param_3 != (char *)0x0) {
        uVar10 = dcgettext(0,"cannot combine --target-directory (-t) and --no-target-directory (-T)"
                           ,5);
                    /* WARNING: Subroutine does not return */
        error(1,0,uVar10);
      }
      if (2 < param_1) {
        uVar10 = FUN_0040ddd0(4,param_2[2]);
        pcVar18 = "extra operand %s";
        goto LAB_004045cb;
      }
      FUN_004033e0(param_2[(long)param_1 + -1],local_c8,&local_da);
    }
    pcVar18 = *param_2;
    pcVar13 = param_2[1];
    if (DAT_0061b4c9 == '\0') {
      if ((((*(char *)((long)param_5 + 0x16) != '\0') && (iVar1 = *param_5, iVar1 != 0)) &&
          (iVar5 = strcmp(pcVar18,pcVar13), iVar5 == 0)) &&
         ((local_da == '\0' && ((local_b0 & 0xf000) == 0x8000)))) {
        pcVar13 = (char *)FUN_0040a6f0(pcVar13,iVar1);
        piVar20 = &DAT_0061b480;
        for (lVar17 = 0x12; lVar17 != 0; lVar17 = lVar17 + -1) {
          *piVar20 = *param_5;
          param_5 = param_5 + (ulong)bVar24 * -2 + 1;
          piVar20 = piVar20 + (ulong)bVar24 * -2 + 1;
        }
        param_5 = &DAT_0061b480;
        DAT_0061b480 = 0;
      }
      uVar21 = FUN_00409280(pcVar18,pcVar13,0,param_5,&local_d0,0);
      return uVar21;
    }
    pcVar18 = "with --parents, the destination must be a directory";
  }
  else {
    if (param_1 == 1) {
      uVar10 = FUN_0040ddd0(4,*param_2);
      pcVar18 = "missing destination file operand after %s";
LAB_004045cb:
      uVar11 = dcgettext(0,pcVar18,5);
                    /* WARNING: Subroutine does not return */
      error(0,0,uVar11,uVar10);
    }
    pcVar18 = "missing file operand";
  }
  uVar10 = dcgettext(0,pcVar18,5);
                    /* WARNING: Subroutine does not return */
  error(0,0,uVar10);
}


ulong FUN_00404640(char *param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  undefined4 extraout_var;
  
  if ((param_2 & 0xf000) == 0xa000) {
    return 1;
  }
  cVar1 = FUN_004100a0();
  if (cVar1 != '\0') {
    return 1;
  }
  iVar2 = euidaccess(param_1,2);
  return CONCAT44(extraout_var,iVar2) & 0xffffffffffffff00 | (ulong)(iVar2 == 0);
}


undefined8 FUN_00404690(undefined4 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if ((DAT_0061b8e0 == (undefined *)0x0) &&
     (DAT_0061b8e0 = (undefined *)calloc(DAT_0061b3b8,1), DAT_0061b8e0 == (undefined *)0x0)) {
    DAT_0061b8e0 = &DAT_0061b4e0;
    DAT_0061b3b8 = 0x400;
  }
  if (param_2 != 0) {
    do {
      uVar2 = param_2;
      if (DAT_0061b3b8 <= param_2) {
        uVar2 = DAT_0061b3b8;
      }
      uVar1 = FUN_0040b000(param_1,DAT_0061b8e0,uVar2);
      if (uVar1 != uVar2) {
        return 0;
      }
      param_2 = param_2 - uVar1;
    } while (param_2 != 0);
  }
  return 1;
}


int FUN_00404740(int param_1,__off_t param_2,__off_t param_3)

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


void FUN_00404780(int param_1,char *param_2,__mode_t param_3)

{
  if (param_1 < 0) {
    chmod(param_2,param_3);
    return;
  }
  fchmod(param_1,param_3);
  return;
}


void FUN_004047a0(void)

{
  int *piVar1;
  undefined8 uVar2;
  
  piVar1 = __errno_location();
  *piVar1 = 0x5f;
  uVar2 = dcgettext(0,"failed to restore the default file creation context",5);
                    /* WARNING: Subroutine does not return */
  error(1,*piVar1,uVar2);
}


void FUN_004047e0(undefined8 param_1,undefined8 param_2,long param_3)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_0040dcf0(1,4,param_2);
  uVar3 = FUN_0040dcf0(0,4,param_1);
  __printf_chk(1,"%s -> %s",uVar3,uVar2);
  if (param_3 != 0) {
    uVar2 = FUN_0040ddd0(4,param_3);
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


void FUN_00404890(long param_1,undefined8 param_2,uint *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined local_34;
  undefined local_33 [9];
  undefined local_2a;
  
  cVar3 = FUN_00404640(param_2,*param_3);
  if (cVar3 == '\0') {
    FUN_0040ad70(*param_3,&local_34);
    uVar1 = *param_3;
    local_2a = 0;
    uVar4 = FUN_0040ddd0(4,param_2);
    uVar2 = DAT_0061b920;
    if ((*(char *)(param_1 + 0x18) == '\0') && ((*(uint *)(param_1 + 0x14) & 0xffff00) == 0)) {
      uVar5 = dcgettext(0,"%s: unwritable %s (mode %04lo, %s); try anyway? ",5);
    }
    else {
      uVar5 = dcgettext(0,"%s: replace %s, overriding mode %04lo (%s)? ",5);
    }
    __fprintf_chk(stderr,1,uVar5,uVar2,uVar4,uVar1 & 0xfff,local_33);
    FUN_00410370();
    return;
  }
  uVar4 = FUN_0040ddd0(4,param_2);
  uVar2 = DAT_0061b920;
  uVar5 = dcgettext(0,"%s: overwrite %s? ",5);
  __fprintf_chk(stderr,1,uVar5,uVar2,uVar4);
  FUN_00410370();
  return;
}


ulong FUN_004049c0(ulong param_1,undefined8 param_2,undefined param_3,byte param_4,char param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int *piVar5;
  
  iVar1 = FUN_00409900(0xffffff9c,param_1,0xffffff9c,param_2,(ulong)(param_5 != '\0') << 10,param_3)
  ;
  if (iVar1 < 0) {
    uVar2 = FUN_0040dcf0(1,4,param_1);
    uVar3 = FUN_0040dcf0(0,4,param_2);
    uVar4 = dcgettext(0,"cannot create hard link %s to %s",5);
    piVar5 = __errno_location();
                    /* WARNING: Subroutine does not return */
    error(0,*piVar5,uVar4,uVar3,uVar2);
  }
  param_4 = 0 < iVar1 & param_4;
  if (param_4 == 0) {
    return 1;
  }
  uVar2 = FUN_0040ddd0(4,param_2);
  uVar3 = dcgettext(0,"removed %s\n",5);
  __printf_chk(1,uVar3,uVar2);
  return param_1 & 0xffffff00 | (ulong)param_4;
}


undefined8 FUN_00404ad0(int param_1,undefined8 param_2,char param_3,long param_4)

{
  int iVar1;
  __off_t _Var2;
  undefined8 uVar3;
  undefined8 uVar4;
  int *piVar5;
  char *pcVar6;
  
  _Var2 = lseek(param_1,param_4,1);
  if (_Var2 < 0) {
    uVar3 = FUN_0040ddd0(4,param_2);
    pcVar6 = "cannot lseek %s";
LAB_00404b5a:
    uVar4 = dcgettext(0,pcVar6,5);
    piVar5 = __errno_location();
                    /* WARNING: Subroutine does not return */
    error(0,*piVar5,uVar4,uVar3);
  }
  if (param_3 != '\0') {
    iVar1 = FUN_00404740(param_1,_Var2 - param_4,param_4);
    if (iVar1 < 0) {
      uVar3 = FUN_0040ddd0(4,param_2);
      pcVar6 = "error deallocating %s";
      goto LAB_00404b5a;
    }
  }
  return 1;
}


ulong FUN_00404b90(int param_1,undefined4 param_2,char *param_3,ulong param_4,ulong param_5,
                  undefined param_6,undefined8 param_7,undefined8 param_8,ulong param_9,
                  long *param_10,undefined *param_11)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  size_t __n;
  ulong uVar12;
  bool bVar13;
  char *__s2;
  char *pcVar14;
  ulong uVar15;
  char *__s1;
  bool bVar16;
  ulong uVar17;
  byte local_8a;
  ulong local_80;
  
  *param_11 = 0;
  local_80 = param_9;
  *param_10 = 0;
  if (param_9 != 0) {
    uVar11 = param_5;
    if (param_5 == 0) {
      uVar11 = param_4;
    }
    uVar17 = 0;
    bVar13 = false;
    do {
      while( true ) {
        uVar6 = local_80;
        if (param_4 <= local_80) {
          uVar6 = param_4;
        }
        uVar6 = read(param_1,param_3,uVar6);
        if (-1 < (long)uVar6) break;
        piVar7 = __errno_location();
        if (*piVar7 != 4) {
          uVar8 = FUN_0040ddd0(4,param_7);
          uVar9 = dcgettext(0,"error reading %s",5);
                    /* WARNING: Subroutine does not return */
          error(0,*piVar7,uVar9,uVar8);
        }
      }
      if (uVar6 == 0) break;
      *param_10 = *param_10 + uVar6;
      uVar12 = uVar11;
      pcVar14 = param_3;
      uVar15 = uVar6;
      __s1 = param_3;
      bVar16 = bVar13;
LAB_00404ce0:
      do {
        if (uVar15 < uVar12) {
          uVar12 = uVar15;
        }
        bVar13 = uVar12 != 0 && param_5 != 0;
        __n = uVar12;
        __s2 = __s1;
        if (uVar12 != 0 && param_5 != 0) {
          do {
            if (*__s2 != '\0') {
              bVar1 = bVar16;
              bVar3 = false;
              bVar2 = bVar13;
              goto LAB_00404d3d;
            }
            __s2 = __s2 + 1;
            __n = __n - 1;
            if (__n == 0) {
              local_8a = uVar17 != 0 & (bVar16 ^ 1U);
              goto LAB_00404e40;
            }
          } while ((__n & 0xf) != 0);
          iVar4 = memcmp(__s1,__s2,__n);
          bVar1 = (bool)(iVar4 == 0 ^ bVar16);
          bVar3 = iVar4 == 0;
          bVar2 = iVar4 != 0;
LAB_00404d3d:
          bVar13 = bVar3;
          local_8a = uVar17 != 0 & bVar1;
          if ((uVar12 == uVar15) && (bVar2)) {
            if (local_8a == 0) {
              bVar13 = false;
              goto LAB_00404de0;
            }
            bVar1 = true;
            bVar13 = false;
          }
          else {
LAB_00404e40:
            if (local_8a == 0) goto LAB_00404e49;
            bVar1 = false;
          }
joined_r0x00404df6:
          if (bVar16 == false) {
            uVar10 = FUN_0040b000(param_2,pcVar14,uVar17);
            if (uVar17 != uVar10) {
              uVar8 = FUN_0040ddd0(4,param_8);
              uVar9 = dcgettext(0,"error writing %s",5);
              piVar7 = __errno_location();
                    /* WARNING: Subroutine does not return */
              error(0,*piVar7,uVar9,uVar8);
            }
          }
          else {
            uVar5 = FUN_00404ad0(param_2,param_8,param_6,uVar17);
            if ((char)uVar5 == '\0') {
              return (ulong)uVar5;
            }
          }
          pcVar14 = __s1;
          uVar17 = uVar12;
          if (bVar1) {
            if (uVar12 == 0) {
              uVar17 = 0;
              break;
            }
            if (local_8a != 0) {
              uVar12 = 0;
              bVar16 = bVar13;
              goto LAB_00404ce0;
            }
            uVar15 = uVar15 - uVar12;
            uVar17 = 0;
          }
          else {
            uVar15 = uVar15 - uVar12;
          }
        }
        else {
          bVar13 = bVar16;
          if (((uVar12 == uVar15 & (bVar16 ^ 1U)) != 0) || (uVar12 == 0)) {
LAB_00404de0:
            uVar17 = uVar17 + uVar12;
            bVar1 = true;
            local_8a = 0;
            goto joined_r0x00404df6;
          }
LAB_00404e49:
          if (0x7fffffffffffffff - uVar12 < uVar17) {
            uVar8 = FUN_0040ddd0(4,param_7);
            uVar9 = dcgettext(0,"overflow reading %s",5);
                    /* WARNING: Subroutine does not return */
            error(0,0,uVar9,uVar8);
          }
          uVar17 = uVar17 + uVar12;
          uVar15 = uVar15 - uVar12;
        }
        __s1 = __s1 + uVar12;
        bVar16 = bVar13;
      } while (uVar15 != 0);
      local_80 = local_80 - uVar6;
      *param_11 = bVar13;
    } while (local_80 != 0);
    if (bVar13 != false) {
      uVar11 = FUN_00404ad0(param_2,param_8,param_6,uVar17);
      return uVar11;
    }
  }
  return 1;
}


uint FUN_00404fc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4,long param_5
                 )

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  
  if (*(char *)(param_5 + 0x25) == '\0') {
    bVar4 = (byte)param_4 & *(byte *)(param_5 + 0x21);
    if (bVar4 == 0) {
      return 1;
    }
    piVar1 = __errno_location();
    *piVar1 = 0x5f;
    return param_4 & 0xffffff00 | (uint)bVar4;
  }
  piVar1 = __errno_location();
  if ((*(char *)(param_5 + 0x23) != '\0') && (bVar4 = *(byte *)(param_5 + 0x26), bVar4 == 0)) {
    *piVar1 = 0x5f;
    return bVar4 ^ 1;
  }
  *piVar1 = 0x5f;
  uVar2 = FUN_0040ddd0(4,param_1);
  uVar3 = dcgettext(0,"failed to get security context of %s",5);
                    /* WARNING: Subroutine does not return */
  error(0,*piVar1,uVar3,uVar2);
}


undefined8 FUN_00405090(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  piVar1 = __errno_location();
  if ((*(char *)(param_4 + 0x23) != '\0') && (*(char *)(param_4 + 0x26) == '\0')) {
    *piVar1 = 0x5f;
    return 0;
  }
  *piVar1 = 0x5f;
  uVar2 = FUN_0040dcf0(0,4,param_1);
  uVar3 = dcgettext(0,"failed to set the security context of %s",5);
                    /* WARNING: Subroutine does not return */
  error(0,*piVar1,uVar3,uVar2);
}


void FUN_00405110(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0040b910(0x3d,0,FUN_0040c2d0,FUN_0040c310,FUN_0040c380);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  return;
}


void FUN_00405140(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0040b910(0x3d,0,FUN_0040c300,FUN_0040c310,FUN_0040c380);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  return;
}


void FUN_00405170(undefined (*param_1) [16])

{
  __uid_t _Var1;
  
  *(undefined8 *)param_1[4] = 0;
  *param_1 = (undefined  [16])0x0;
  param_1[1] = (undefined  [16])0x0;
  param_1[2] = (undefined  [16])0x0;
  param_1[3] = (undefined  [16])0x0;
  _Var1 = geteuid();
  param_1[1][0xb] = _Var1 == 0;
  param_1[1][10] = _Var1 == 0;
  return;
}


ulong FUN_004051b0(long param_1)

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


int FUN_004051e0(long param_1,char *param_2,int param_3,long param_4,char param_5,long param_6)

{
  __uid_t __owner;
  __gid_t __group;
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  
  __owner = *(__uid_t *)(param_4 + 0x1c);
  __group = *(__gid_t *)(param_4 + 0x20);
  if (param_5 == '\0') {
    if ((*(ulong *)(param_1 + 0x18) & 0xff0000000000ff) == 0) {
      if (*(char *)(param_1 + 0x2b) == '\0') goto LAB_00405250;
      uVar7 = *(uint *)(param_6 + 0x18);
      uVar6 = *(uint *)(param_1 + 0x10);
    }
    else {
      uVar7 = *(uint *)(param_6 + 0x18);
      uVar6 = *(uint *)(param_4 + 0x18);
    }
    if ((((ushort)(~(ushort)uVar6 | 0xe00) & uVar7 & 0xfff) != 0) &&
       (iVar2 = FUN_0040c480(param_2,param_3,uVar6 & uVar7 & 0x1c0), iVar2 != 0)) {
      piVar3 = __errno_location();
      if (((*piVar3 == 1) || (*piVar3 == 0x16)) && (*(char *)(param_1 + 0x1b) == '\0')) {
        return -(uint)*(byte *)(param_1 + 0x24);
      }
      uVar4 = FUN_0040ddd0(4,param_2);
      uVar5 = dcgettext(0,"clearing permissions for %s",5);
                    /* WARNING: Subroutine does not return */
      error(0,*piVar3,uVar5,uVar4);
    }
  }
LAB_00405250:
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
  cVar1 = FUN_004051b0(param_1);
  if (cVar1 == '\0') {
    uVar4 = FUN_0040ddd0(4,param_2);
    uVar5 = dcgettext(0,"failed to preserve ownership for %s",5);
    piVar3 = __errno_location();
                    /* WARNING: Subroutine does not return */
    error(0,*piVar3,uVar5,uVar4);
  }
  return 0;
}


__mode_t FUN_004053d0(void)

{
  __mode_t __mask;
  
  if (DAT_0061b3b0 != 0xffffffff) {
    return DAT_0061b3b0;
  }
  __mask = umask(0);
  DAT_0061b3b0 = __mask;
  umask(__mask);
  return __mask;
}


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Could not reconcile some variable overlaps */

uint FUN_00405400(byte **param_1,byte **param_2,byte param_3,stat *param_4,byte **param_5,
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
  uint uVar12;
  int iVar13;
  __uid_t _Var14;
  int *piVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  byte *__filename;
  size_t sVar19;
  void *pvVar20;
  void *__ptr;
  stat *psVar21;
  uint *puVar22;
  byte **ppbVar23;
  byte *pbVar24;
  __off_t _Var25;
  char *pcVar26;
  char cVar27;
  long lVar28;
  ulong uVar29;
  ulong uVar30;
  stat *psVar31;
  ulong uVar32;
  undefined8 extraout_RDX;
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
  undefined *local_380;
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
  undefined8 local_300;
  stat *local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  stat *local_2e0;
  undefined8 local_2d8;
  uint local_2d0;
  uint local_2cc;
  undefined8 local_2c8;
  byte **local_2c0;
  byte local_2b1;
  char local_2b0;
  undefined7 uStack_2af;
  undefined local_2a8 [32];
  char local_288;
  char local_287;
  void *local_280;
  stat local_278;
  stat local_1e8;
  uint local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  __mode_t _Stack_140;
  __uid_t _Stack_13c;
  __gid_t local_138;
  int iStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined local_c8 [28];
  __uid_t _Stack_ac;
  byte *local_a8;
  byte *pbStack_a0;
  byte *local_98;
  byte **ppbStack_90;
  byte *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  bVar8 = 0;
  puVar41 = auStack_378;
  puVar38 = auStack_378;
  puVar40 = auStack_378;
  puVar34 = auStack_378;
  puVar39 = auStack_378;
  puVar37 = auStack_378;
  puVar35 = auStack_378;
  local_2c8 = (int *)((ulong)local_2c8 & 0xffffffffffffff00 | (ulong)(param_10 != (undefined *)0x0))
  ;
  uVar30 = (ulong)param_7;
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
    local_380 = (undefined *)0x405c95;
    iVar9 = __lxstat(1,(char *)param_1,local_2e0);
    bVar48 = iVar9 != 0;
    uVar10 = unaff_R15D & 0xffffff00 | (uint)bVar48;
  }
  else {
    local_380 = (undefined *)0x40548a;
    iVar9 = __xstat(1,(char *)param_1,local_2e0);
    bVar48 = iVar9 != 0;
    uVar10 = unaff_R15D & 0xffffff00 | (uint)bVar48;
  }
  puVar36 = auStack_378;
  if (bVar48) goto LAB_00405ca7;
  local_2d0 = local_278.st_mode;
  local_2cc = local_278.st_mode & 0xf000;
  bVar5 = (byte)param_7;
  if ((local_278.st_mode & 0xf000) == 0x4000) {
    if (*(char *)((long)param_6 + 0x2a) != '\0') {
      if (bVar5 != 0) goto LAB_0040610f;
      goto LAB_004054e2;
    }
    local_380 = (undefined *)0x40672a;
    uVar30 = FUN_0040ddd0(4,param_1);
    uVar16 = 5;
    if (*(char *)((long)param_6 + 0x19) != '\0') {
      pcVar42 = "omitting directory %s";
LAB_00406742:
      local_380 = (undefined *)0x406749;
      uVar16 = dcgettext(0,pcVar42,5);
      goto LAB_00406749;
    }
  }
  else {
    if (bVar5 != 0) {
      if (*(int *)param_6 == 0) {
        local_380 = (undefined *)0x406107;
        bVar7 = FUN_0040ad30(param_6[8],param_1,local_2e0);
        if (bVar7 != 0) {
          local_2c0 = (byte **)((ulong)local_2c0 & 0xffffffffffffff00 | (ulong)bVar7);
          local_380 = (undefined *)0x4070f3;
          uVar16 = FUN_0040ddd0(4,param_1);
          local_380 = (undefined *)0x407107;
          uVar17 = dcgettext(0,"warning: source file %s specified more than once",5);
                    /* WARNING: Subroutine does not return */
          local_380 = &UNK_00407118;
          error(0,0,uVar17,uVar16);
        }
LAB_0040610f:
        local_380 = (undefined *)0x406122;
        FUN_0040aca0(param_6[8],param_1,local_2e0);
      }
      else {
        local_380 = (undefined *)0x4054e2;
        FUN_0040aca0(param_6[8],param_1,local_2e0);
      }
    }
LAB_004054e2:
    pcVar42 = (char *)local_2e8;
    local_2e8 = (byte **)CONCAT44(local_2e8._4_4_,1);
    if (*(int *)((long)param_6 + 4) != 4) {
      local_2e8 = (byte **)((ulong)pcVar42 & 0xffffffff00000000 |
                           (ulong)(*(int *)((long)param_6 + 4) == 3 & param_7));
    }
    if (param_3 == 0) {
      if ((((local_2cc == 0x8000) ||
           (((*(char *)((long)param_6 + 0x14) != '\0' && (local_2cc != 0x4000)) &&
            (local_2cc != 0xa000)))) &&
          (((*(char *)(param_6 + 3) == '\0' && (*(char *)((long)param_6 + 0x2c) == '\0')) &&
           (*(char *)((long)param_6 + 0x17) == '\0')))) &&
         ((*(int *)param_6 == 0 && (*(char *)((long)param_6 + 0x15) == '\0')))) {
        local_2f8 = &local_1e8;
        local_380 = (undefined *)0x405598;
        iVar9 = __xstat(1,(char *)local_2c0,local_2f8);
        local_308._0_1_ = 1;
        bVar48 = iVar9 != 0;
        local_2d8 = (stat *)((ulong)local_2d8 & 0xffffffffffffff00 | (ulong)bVar48);
      }
      else {
        local_2f8 = &local_1e8;
        local_380 = (undefined *)0x405fd2;
        iVar9 = __lxstat(1,(char *)local_2c0,local_2f8);
        bVar48 = iVar9 != 0;
        local_2d8 = (stat *)((ulong)local_2d8 & 0xffffffffffffff00 | (ulong)bVar48);
        local_308._0_1_ = param_3;
      }
      if (bVar48) {
        local_380 = (undefined *)0x405ff0;
        piVar15 = __errno_location();
        if (*piVar15 != 2) {
          local_380 = (undefined *)0x406014;
          local_2c8 = piVar15;
          uVar16 = FUN_0040ddd0(4,local_2c0);
          local_380 = (undefined *)0x406028;
          uVar17 = dcgettext(0,"cannot stat %s",5);
                    /* WARNING: Subroutine does not return */
          local_380 = &UNK_00406041;
          error(0,*local_2c8,uVar17,uVar16);
        }
        goto LAB_00405840;
      }
      if ((local_278.st_ino != local_1e8.st_ino) || (local_278.st_dev != local_1e8.st_dev)) {
        if (*(int *)((long)param_6 + 4) != 2) goto LAB_004055d3;
        cVar4 = '\0';
        uVar12 = 0;
LAB_004068a5:
        psVar21 = local_2e0;
        psVar46 = local_2f8;
        if (((local_278.st_mode & 0xf000) == 0xa000) && ((local_1e8.st_mode & 0xf000) == 0xa000)) {
          local_310 = (stat *)((ulong)local_310 & 0xffffffff00000000 | (ulong)uVar12);
          local_308 = (stat *)((ulong)local_308 & 0xffffffffffffff00 | (ulong)(byte)local_308);
          local_380 = (undefined *)0x407672;
          cVar4 = FUN_0040e2f0(param_1,local_2c0);
          if (cVar4 == '\0') {
            if ((*(int *)param_6 == 0) && ((uint)local_310 != 0)) {
              bVar7 = 1;
              bVar6 = *(byte *)(param_6 + 3) ^ 1;
              goto LAB_004076ab;
            }
            goto LAB_004055d3;
          }
        }
        else {
LAB_004068c9:
          if (*(int *)param_6 == 0) {
            cVar27 = *(char *)(param_6 + 3);
            if ((cVar27 == '\0') && (*(char *)((long)param_6 + 0x15) == '\0')) {
              if ((psVar21->st_mode & 0xf000) != 0xa000) {
LAB_00406f37:
                if ((psVar46->st_mode & 0xf000) != 0xa000) {
LAB_004072b7:
                  if ((psVar21->st_ino != psVar46->st_ino) || (psVar21->st_dev != psVar46->st_dev))
                  goto LAB_004055d3;
                  if (*(char *)((long)param_6 + 0x17) != '\0') goto LAB_004070d0;
                }
LAB_00406f4b:
                cVar27 = *(char *)(param_6 + 3);
                goto LAB_00406f50;
              }
            }
            else {
              if ((psVar46->st_mode & 0xf000) == 0xa000) goto LAB_004055d3;
              if ((cVar4 != '\0') && (1 < psVar46->st_nlink)) {
                local_318 = (stat *)((ulong)local_318 & 0xffffffffffffff00 | (ulong)(byte)local_308)
                ;
                local_380 = (undefined *)0x407d95;
                local_310 = psVar46;
                local_308 = psVar21;
                bVar7 = FUN_0040e2f0(param_1,local_2c0);
                local_308._0_1_ = (byte)local_318;
                if (bVar7 != 0) {
                  psVar21 = local_308;
                  psVar46 = local_310;
                  if ((local_308->st_mode & 0xf000) != 0xa000) goto LAB_00406f37;
                  goto LAB_00406f4b;
                }
                bVar6 = *(byte *)(param_6 + 3) ^ 1;
                goto LAB_004076ab;
              }
              if ((psVar21->st_mode & 0xf000) != 0xa000) goto LAB_004072b7;
LAB_00406f50:
              if (((cVar27 != '\0') && ((local_278.st_mode & 0xf000) == 0xa000)) &&
                 (1 < psVar46->st_nlink)) {
                local_318 = (stat *)((ulong)local_318 & 0xffffffffffffff00 | (ulong)(byte)local_308)
                ;
                local_380 = (undefined *)0x407e7c;
                local_310 = psVar46;
                local_308 = psVar21;
                pcVar42 = canonicalize_file_name((char *)param_1);
                psVar21 = local_308;
                psVar46 = local_310;
                local_308._0_1_ = (byte)local_318;
                if (pcVar42 != (char *)0x0) {
                  local_308 = (stat *)((ulong)local_308 & 0xffffffffffffff00 |
                                      (ulong)local_318 & 0xff);
                  local_380 = (undefined *)0x407eb8;
                  local_2d8 = (stat *)pcVar42;
                  bVar6 = FUN_0040e2f0(pcVar42,local_2c0);
                  bVar6 = bVar6 ^ 1;
                  local_380 = (undefined *)0x407ecd;
                  free(local_2d8);
                  bVar7 = 0;
                  goto LAB_004076ab;
                }
              }
            }
            if ((*(char *)((long)param_6 + 0x2c) == '\0') &&
               (((*(uint *)((long)param_6 + 0x14) & 0xff00ff00) == 0 ||
                ((psVar46->st_mode & 0xf000) != 0xa000)))) {
              if (*(int *)((long)param_6 + 4) == 2) {
                if ((psVar21->st_mode & 0xf000) == 0xa000) {
                  local_310 = (stat *)((ulong)local_310 & 0xffffffffffffff00 |
                                      (ulong)(byte)local_308);
                  local_380 = (undefined *)0x408749;
                  local_308 = psVar46;
                  iVar9 = __xstat(1,(char *)param_1,(stat *)local_c8);
                  psVar46 = local_308;
                  local_308._0_1_ = (byte)local_310;
                  if (iVar9 != 0) goto LAB_004055d3;
                }
                else {
                  local_c8._0_8_ = (byte *)psVar21->st_dev;
                  local_c8._8_8_ = (byte *)psVar21->st_ino;
                  local_c8._16_8_ = (byte *)psVar21->st_nlink;
                  stack0xffffffffffffff50 = *(byte **)&psVar21->st_mode;
                  local_a8 = *(byte **)&psVar21->st_gid;
                  pbStack_a0 = (byte *)psVar21->st_rdev;
                  local_98 = (byte *)psVar21->st_size;
                  ppbStack_90 = (byte **)psVar21->st_blksize;
                  local_88 = (byte *)psVar21->st_blocks;
                  uStack_80 = *(undefined4 *)&(psVar21->st_atim).tv_sec;
                  uStack_7c = *(undefined4 *)((long)&(psVar21->st_atim).tv_sec + 4);
                  local_78 = *(undefined4 *)&(psVar21->st_atim).tv_nsec;
                  uStack_74 = *(undefined4 *)((long)&(psVar21->st_atim).tv_nsec + 4);
                  uStack_70 = *(undefined4 *)&(psVar21->st_mtim).tv_sec;
                  uStack_6c = *(undefined4 *)((long)&(psVar21->st_mtim).tv_sec + 4);
                  local_68 = *(undefined4 *)&(psVar21->st_mtim).tv_nsec;
                  uStack_64 = *(undefined4 *)((long)&(psVar21->st_mtim).tv_nsec + 4);
                  uStack_60 = *(undefined4 *)&(psVar21->st_ctim).tv_sec;
                  uStack_5c = *(undefined4 *)((long)&(psVar21->st_ctim).tv_sec + 4);
                  local_58 = *(undefined4 *)&(psVar21->st_ctim).tv_nsec;
                  uStack_54 = *(undefined4 *)((long)&(psVar21->st_ctim).tv_nsec + 4);
                  uStack_50 = *(undefined4 *)psVar21->__unused;
                  uStack_4c = *(undefined4 *)((long)psVar21->__unused + 4);
                  local_48 = *(undefined4 *)(psVar21->__unused + 1);
                  uStack_44 = *(undefined4 *)((long)psVar21->__unused + 0xc);
                  uStack_40 = *(undefined4 *)(psVar21->__unused + 2);
                  uStack_3c = *(undefined4 *)((long)psVar21->__unused + 0x14);
                }
                if ((psVar46->st_mode & 0xf000) == 0xa000) {
                  local_308 = (stat *)((ulong)local_308 & 0xffffffffffffff00 |
                                      (ulong)(byte)local_308);
                  local_380 = (undefined *)0x40870f;
                  iVar9 = __xstat(1,(char *)local_2c0,(stat *)&local_158);
                  if (iVar9 != 0) goto LAB_004055d3;
                }
                else {
                  local_158 = *(uint *)&psVar46->st_dev;
                  uStack_154 = *(undefined4 *)((long)&psVar46->st_dev + 4);
                  uStack_150 = *(undefined4 *)&psVar46->st_ino;
                  uStack_14c = *(undefined4 *)((long)&psVar46->st_ino + 4);
                  local_148 = *(undefined4 *)&psVar46->st_nlink;
                  uStack_144 = *(undefined4 *)((long)&psVar46->st_nlink + 4);
                  _Stack_140 = psVar46->st_mode;
                  _Stack_13c = psVar46->st_uid;
                  local_138 = psVar46->st_gid;
                  iStack_134 = psVar46->__pad0;
                  uStack_130 = *(undefined4 *)&psVar46->st_rdev;
                  uStack_12c = *(undefined4 *)((long)&psVar46->st_rdev + 4);
                  local_128 = *(undefined4 *)&psVar46->st_size;
                  uStack_124 = *(undefined4 *)((long)&psVar46->st_size + 4);
                  uStack_120 = *(undefined4 *)&psVar46->st_blksize;
                  uStack_11c = *(undefined4 *)((long)&psVar46->st_blksize + 4);
                  local_118 = *(undefined4 *)&psVar46->st_blocks;
                  uStack_114 = *(undefined4 *)((long)&psVar46->st_blocks + 4);
                  uStack_110 = *(undefined4 *)&(psVar46->st_atim).tv_sec;
                  uStack_10c = *(undefined4 *)((long)&(psVar46->st_atim).tv_sec + 4);
                  local_108 = *(undefined4 *)&(psVar46->st_atim).tv_nsec;
                  uStack_104 = *(undefined4 *)((long)&(psVar46->st_atim).tv_nsec + 4);
                  uStack_100 = *(undefined4 *)&(psVar46->st_mtim).tv_sec;
                  uStack_fc = *(undefined4 *)((long)&(psVar46->st_mtim).tv_sec + 4);
                  local_f8 = *(undefined4 *)&(psVar46->st_mtim).tv_nsec;
                  uStack_f4 = *(undefined4 *)((long)&(psVar46->st_mtim).tv_nsec + 4);
                  uStack_f0 = *(undefined4 *)&(psVar46->st_ctim).tv_sec;
                  uStack_ec = *(undefined4 *)((long)&(psVar46->st_ctim).tv_sec + 4);
                  local_e8 = *(undefined4 *)&(psVar46->st_ctim).tv_nsec;
                  uStack_e4 = *(undefined4 *)((long)&(psVar46->st_ctim).tv_nsec + 4);
                  uStack_e0 = *(undefined4 *)psVar46->__unused;
                  uStack_dc = *(undefined4 *)((long)psVar46->__unused + 4);
                  local_d8 = *(undefined4 *)(psVar46->__unused + 1);
                  uStack_d4 = *(undefined4 *)((long)psVar46->__unused + 0xc);
                  uStack_d0 = *(undefined4 *)(psVar46->__unused + 2);
                  uStack_cc = *(undefined4 *)((long)psVar46->__unused + 0x14);
                }
                if ((local_c8._8_8_ != (byte *)CONCAT44(uStack_14c,uStack_150)) ||
                   (local_c8._0_8_ != (byte *)CONCAT44(uStack_154,local_158))) goto LAB_004055d3;
                if (*(char *)((long)param_6 + 0x17) != '\0') goto LAB_004070d0;
              }
              goto LAB_00406920;
            }
            bVar6 = psVar46->st_dev == psVar21->st_dev;
            bVar7 = 0;
          }
          else {
            if (cVar4 == '\0') {
              if ((((*(char *)(param_6 + 3) == '\0') && (*(int *)((long)param_6 + 4) != 2)) &&
                  ((psVar21->st_mode & 0xf000) == 0xa000)) &&
                 ((psVar46->st_mode & 0xf000) != 0xa000)) goto LAB_00406920;
              goto LAB_004055d3;
            }
            local_2d8 = (stat *)((ulong)local_2d8 & 0xffffffffffffff00 | (ulong)(byte)local_308);
            local_380 = (undefined *)0x407b8b;
            bVar6 = FUN_0040e2f0(param_1,local_2c0);
            bVar6 = bVar6 ^ 1;
            bVar7 = 0;
            local_308._0_1_ = (byte)local_2d8;
          }
LAB_004076ab:
          if (bVar6 != 0) {
            local_2d8 = (stat *)((ulong)local_2d8 & 0xffffffffffffff00 | (ulong)bVar7);
            goto LAB_004055d3;
          }
        }
LAB_00406920:
        local_380 = (undefined *)0x406936;
        uVar16 = FUN_0040dcf0(1,4,local_2c0);
        local_380 = (undefined *)0x406948;
        uVar17 = FUN_0040dcf0(0,4,param_1);
        pcVar42 = "%s and %s are the same file";
        puVar35 = auStack_378;
LAB_00405818:
        *(undefined8 *)(puVar35 + -8) = 0x40581f;
        uVar18 = dcgettext(0,pcVar42,5);
LAB_00405828:
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)(puVar35 + -8) = 0x405833;
        error(0,0,uVar18,uVar17,uVar16);
      }
      cVar4 = *(char *)((long)param_6 + 0x17);
      if (cVar4 == '\0') {
        if (*(int *)((long)param_6 + 4) == 2) {
          cVar4 = '\x01';
          uVar12 = 1;
          goto LAB_004068a5;
        }
        local_318 = (stat *)&local_158;
        local_308 = (stat *)((ulong)local_308 & 0xffffffffffffff00 | (ulong)(byte)local_308);
        local_380 = (undefined *)0x406ace;
        iVar9 = __lxstat(1,(char *)local_2c0,local_318);
        if (iVar9 == 0) {
          local_328 = (stat *)local_c8;
          local_380 = (undefined *)0x406afc;
          iVar9 = __lxstat(1,(char *)param_1,local_328);
          if (iVar9 == 0) {
            if (local_c8._8_8_ == (byte *)CONCAT44(uStack_14c,uStack_150)) {
              cVar4 = local_c8._0_8_ == (byte *)CONCAT44(uStack_154,local_158);
            }
            psVar21 = local_328;
            psVar46 = local_318;
            if ((((local_c8._24_4_ & 0xf000) != 0xa000) || ((_Stack_140 & 0xf000) != 0xa000)) ||
               (*(char *)((long)param_6 + 0x15) == '\0')) goto LAB_004068c9;
          }
        }
      }
      else {
LAB_004070d0:
        local_2d8 = (stat *)CONCAT71(local_2d8._1_7_,1);
      }
LAB_004055d3:
      if (local_2cc == 0x4000) {
        if (*(char *)(param_6 + 3) != '\0') {
          iVar9 = *(int *)(param_6 + 1);
LAB_00406b8f:
          if (iVar9 == 2) goto LAB_00406c10;
          if (iVar9 == 3) {
LAB_00406bd6:
            local_308 = (stat *)((ulong)local_308 & 0xffffffffffffff00 | (ulong)(byte)local_308);
            local_380 = (undefined *)0x406bf7;
            cVar4 = FUN_00404890(param_6,local_2c0,&local_2f8->st_mode);
            if (cVar4 == '\0') {
LAB_00406c10:
              if (param_10 == (undefined *)0x0) {
                return 1;
              }
              *param_10 = 1;
              return 1;
            }
          }
          else if ((iVar9 == 4) && (*(char *)((long)param_6 + 0x2f) != '\0')) {
            local_308 = (stat *)((ulong)local_308 & 0xffffffffffffff00 | (ulong)(byte)local_308);
            local_380 = (undefined *)0x406bc6;
            cVar4 = FUN_00404640(local_2c0,local_1e8.st_mode);
            if (cVar4 == '\0') goto LAB_00406bd6;
          }
        }
LAB_0040560f:
        if ((byte)local_2d8 != '\0') {
          return 1;
        }
        local_2f8._0_1_ = (byte)local_308 ^ 1;
        if ((local_1e8.st_mode & 0xf000) != 0x4000) {
          if (local_2cc == 0x4000) {
            if ((*(char *)(param_6 + 3) == '\0') || (iVar9 = *(int *)param_6, iVar9 == 0)) {
              local_380 = (undefined *)0x407bc3;
              uVar16 = FUN_0040dcf0(1,4,param_1);
              local_380 = (undefined *)0x407bd9;
              uVar17 = FUN_0040dcf0(0,4,local_2c0);
              pcVar42 = "cannot overwrite non-directory %s with directory %s";
              puVar35 = auStack_378;
              goto LAB_00405818;
            }
            if (bVar5 != 0) goto LAB_00405654;
            goto LAB_00407398;
          }
          iVar9 = *(int *)param_6;
          if (bVar5 == 0) goto LAB_004056b4;
LAB_00405654:
          if (iVar9 != 3) {
            local_308 = (stat *)(((ulong)local_308 & 0xffffffffffffff00 | (ulong)(byte)local_308) ^
                                1);
            local_380 = (undefined *)0x40567b;
            cVar4 = FUN_0040ad30(param_6[7],local_2c0,local_2f8);
            if (cVar4 != '\0') {
              local_380 = (undefined *)0x407fb5;
              uVar16 = FUN_0040dcf0(1,4,param_1);
              local_380 = (undefined *)0x407fcb;
              uVar17 = FUN_0040dcf0(0,4,local_2c0);
              pcVar42 = "will not overwrite just-created %s with %s";
              puVar35 = auStack_378;
              goto LAB_00405818;
            }
            local_2f8._0_1_ = (byte)local_308;
            if ((local_2cc != 0x4000) && ((local_1e8.st_mode & 0xf000) == 0x4000))
            goto LAB_00407380;
            goto LAB_004056b0;
          }
          if (*(char *)(param_6 + 3) != '\0') goto LAB_00407398;
LAB_00407918:
          local_2f8 = (stat *)((ulong)local_2f8 & 0xffffffffffffff00 | (ulong)(byte)local_2f8);
          local_380 = (undefined *)0x407926;
          psVar21 = (stat *)FUN_0040ab40(param_1);
          if (*(char *)&psVar21->st_dev == '.') {
            bVar7 = 0;
LAB_00407d43:
            cVar4 = *(char *)((long)psVar21->__unused +
                             ((ulong)(*(char *)((long)&psVar21->st_dev + 1) == '.') - 0x77));
            if ((cVar4 == '\0') || (cVar4 == '/')) goto LAB_004056ca;
            if (bVar7 != 0) goto LAB_004073d1;
          }
          if ((local_1e8.st_mode & 0xf000) == 0x4000) {
LAB_0040794f:
            local_308 = (stat *)0x0;
            puVar35 = auStack_378;
            goto LAB_00405854;
          }
LAB_004073d1:
          if (iVar9 != 3) {
            local_2f8 = (stat *)((ulong)local_2f8 & 0xffffffffffffff00 | (ulong)(byte)local_2f8);
            local_380 = (undefined *)0x4073f0;
            local_310 = psVar21;
            local_2d8 = (stat *)strlen((char *)psVar21);
            local_380 = (undefined *)0x407403;
            local_308 = (stat *)FUN_0040ab40(local_2c0);
            local_380 = (undefined *)0x407412;
            sVar19 = strlen((char *)local_308);
            local_318 = DAT_0061b900;
            local_380 = (undefined *)0x40742b;
            local_320 = (byte **)strlen((char *)DAT_0061b900);
            if (local_2d8 == (stat *)(sVar19 + (long)local_320)) {
              local_2d8 = (stat *)((ulong)local_2d8 & 0xffffffffffffff00 | (ulong)local_2f8 & 0xff);
              local_2f8 = local_310;
              local_380 = (undefined *)0x407473;
              iVar9 = memcmp(local_310,local_308,sVar19);
              local_2f8._0_1_ = (byte)local_2d8;
              if (iVar9 == 0) {
                local_380 = (undefined *)0x407499;
                iVar9 = strcmp((char *)((long)local_2f8->__unused + (sVar19 - 0x78)),
                               (char *)local_318);
                local_2f8._0_1_ = (byte)local_2d8;
                if (iVar9 == 0) {
                  local_308 = (stat *)((ulong)local_308 & 0xffffffffffffff00 |
                                      (ulong)local_2d8 & 0xff);
                  local_380 = (undefined *)0x4074ba;
                  local_2f8 = (stat *)strlen((char *)local_2c0);
                  local_380 = (undefined *)0x4074d2;
                  pcVar42 = (char *)FUN_004100e0((undefined *)
                                                 ((long)local_320 +
                                                 (long)((long)local_2f8->__unused + -0x77)));
                  local_2d8 = DAT_0061b900;
                  local_380 = (undefined *)0x4074f9;
                  pcVar26 = (char *)mempcpy(pcVar42,local_2c0,(size_t)local_2f8);
                  local_380 = (undefined *)0x407508;
                  strcpy(pcVar26,(char *)local_2d8);
                  local_380 = (undefined *)0x40751f;
                  uVar12 = __xstat(1,pcVar42,(stat *)local_c8);
                  local_2d8 = (stat *)((ulong)local_2d8 & 0xffffffff00000000 | (ulong)uVar12);
                  local_380 = (undefined *)0x40752d;
                  free(pcVar42);
                  local_2f8._0_1_ = (byte)local_308;
                  if ((((int)local_2d8 == 0) && ((byte *)local_278.st_ino == local_c8._8_8_)) &&
                     ((byte *)local_278.st_dev == local_c8._0_8_)) {
                    if (*(char *)(param_6 + 3) == '\0') {
                      local_380 = (undefined *)0x408c4a;
                      uVar18 = dcgettext(0,"backing up %s might destroy source;  %s not copied",5);
                    }
                    else {
                      local_380 = (undefined *)0x408c00;
                      uVar18 = dcgettext(0,"backing up %s might destroy source;  %s not moved",5);
                    }
                    local_380 = (undefined *)0x408c15;
                    uVar16 = FUN_0040dcf0(1,4,param_1);
                    local_380 = (undefined *)0x408c2b;
                    uVar17 = FUN_0040dcf0(0,4,local_2c0);
                    goto LAB_00405828;
                  }
                }
              }
            }
          }
          local_2d8 = (stat *)((ulong)local_2d8 & 0xffffffffffffff00 | (ulong)(byte)local_2f8);
          local_380 = (undefined *)0x40756e;
          psVar21 = (stat *)FUN_0040a6b0(local_2c0,*(undefined4 *)param_6);
          local_2f8 = (stat *)((ulong)local_2f8 & 0xffffffffffffff00 | (ulong)local_2d8 & 0xff);
          local_308 = psVar21;
          if (psVar21 == (stat *)0x0) {
            local_380 = (undefined *)0x407c3b;
            piVar15 = __errno_location();
            local_2d8 = (stat *)CONCAT71(local_2d8._1_7_,1);
            puVar35 = auStack_378;
            if (*piVar15 != 2) {
              local_380 = (undefined *)0x407c66;
              uVar16 = FUN_0040ddd0(4,local_2c0);
              pcVar42 = "cannot backup %s";
LAB_00407c73:
              local_380 = (undefined *)0x407c7d;
              uVar17 = dcgettext(0,pcVar42,5);
                    /* WARNING: Subroutine does not return */
              local_380 = &UNK_00407c90;
              error(0,*piVar15,uVar17,uVar16);
            }
          }
          else {
            local_380 = (undefined *)0x407596;
            sVar19 = strlen((char *)psVar21);
            lVar28 = -(sVar19 + 0x18 & 0xfffffffffffffff0);
            *(undefined8 *)(auStack_378 + lVar28 + -8) = 0x4075b6;
            psVar46 = (stat *)memcpy((void *)((long)&local_370 + lVar28),psVar21,sVar19 + 1);
            psVar21 = local_308;
            *(undefined8 *)(auStack_378 + lVar28 + -8) = 0x4075c5;
            free(psVar21);
            local_308 = psVar46;
            local_2d8 = (stat *)CONCAT71(local_2d8._1_7_,1);
            puVar35 = auStack_378 + lVar28;
          }
          goto LAB_00405854;
        }
        if (local_2cc != 0x4000) {
LAB_00407380:
          if ((*(char *)(param_6 + 3) == '\0') || (iVar9 = *(int *)param_6, iVar9 == 0)) {
            local_380 = (undefined *)0x407ca6;
            uVar30 = FUN_0040ddd0(4,local_2c0);
            pcVar42 = "cannot overwrite directory %s with non-directory";
            goto LAB_00406742;
          }
LAB_00407398:
          if ((local_278.st_mode & 0xf000) == 0x4000) {
LAB_00407ad8:
            if ((local_1e8.st_mode & 0xf000) == 0x4000) goto LAB_00407975;
            if (iVar9 == 0) {
              local_380 = (undefined *)0x407b04;
              uVar16 = FUN_0040dea0(0,3,local_2c0);
              local_380 = (undefined *)0x407b16;
              uVar17 = FUN_0040dea0(0,3,param_1);
              pcVar42 = "cannot move directory onto non-directory: %s -> %s";
              puVar35 = auStack_378;
              goto LAB_00405818;
            }
          }
LAB_004073b0:
          local_2f8 = (stat *)((ulong)local_2f8 & 0xffffffffffffff00 | (ulong)(byte)local_2f8);
          local_380 = (undefined *)0x4073be;
          psVar21 = (stat *)FUN_0040ab40(param_1);
          if (*(char *)&psVar21->st_dev == '.') {
            bVar7 = 1;
            goto LAB_00407d43;
          }
          goto LAB_004073d1;
        }
LAB_004056b0:
        iVar9 = *(int *)param_6;
LAB_004056b4:
        bVar7 = *(byte *)(param_6 + 3);
        if (bVar7 != 0) {
          if ((local_278.st_mode & 0xf000) == 0x4000) goto LAB_00407ad8;
LAB_00407975:
          if (iVar9 != 0) goto LAB_004073b0;
          goto LAB_0040794f;
        }
        if (iVar9 != 0) goto LAB_00407918;
LAB_004056ca:
        local_308 = (stat *)0x0;
        puVar35 = auStack_378;
        if (((local_1e8.st_mode & 0xf000) == 0x4000 | bVar7) != 0) goto LAB_00405854;
        uVar32 = (ulong)local_2d8 & 0xffffffffffffff00;
        local_2d8 = (stat *)(uVar32 | *(byte *)((long)param_6 + 0x15));
        if (((*(byte *)((long)param_6 + 0x15) == 0) &&
            ((*(char *)((long)param_6 + 0x22) == '\0' || (local_1e8.st_nlink < 2)))) &&
           ((local_308 = (stat *)0x0, puVar35 = auStack_378, *(int *)((long)param_6 + 4) != 2 ||
            (puVar35 = auStack_378, (local_278.st_mode & 0xf000) == 0x8000)))) goto LAB_00405854;
        local_308 = (stat *)0x0;
        local_2d8 = (stat *)(uVar32 | (byte)local_2f8);
        local_380 = (undefined *)0x40572c;
        iVar9 = unlink((char *)local_2c0);
        local_2f8._0_1_ = (byte)local_2d8;
        if (iVar9 != 0) {
          local_380 = (undefined *)0x40573c;
          piVar15 = __errno_location();
          local_2f8._0_1_ = (byte)local_2d8;
          if (*piVar15 != 2) {
            local_380 = (undefined *)0x4085a0;
            uVar16 = FUN_0040ddd0(4,local_2c0);
            pcVar42 = "cannot remove %s";
            goto LAB_00407c73;
          }
        }
        uVar32 = (ulong)local_2d8 & 0xffffffffffffff00;
        local_2d8 = (stat *)(uVar32 | *(byte *)((long)param_6 + 0x2e));
        if (*(byte *)((long)param_6 + 0x2e) != 0) {
          local_2f8 = (stat *)((ulong)local_2f8 & 0xffffffffffffff00 | (ulong)(byte)local_2f8);
          local_380 = (undefined *)0x408028;
          uVar16 = FUN_0040ddd0(4,local_2c0);
          local_380 = (undefined *)0x40803c;
          uVar17 = dcgettext(0,"removed %s\n",5);
          local_380 = (undefined *)0x40804e;
          __printf_chk(1,uVar17,uVar16);
          local_308 = (stat *)0x0;
          puVar35 = auStack_378;
          goto LAB_00405854;
        }
        if (bVar5 != 0) {
          local_2d8 = (stat *)(uVar32 | bVar5);
          local_308 = (stat *)0x0;
          puVar37 = auStack_378;
          if (param_6[7] != (byte *)0x0) goto LAB_00405790;
          goto LAB_00405d20;
        }
        bVar7 = local_2cc == 0x4000 & *(byte *)((long)param_6 + 0x2a);
        local_2d8 = (stat *)(uVar32 | bVar7);
        if (bVar7 == 0) {
          local_2d8._1_7_ = (undefined7)(uVar32 >> 8);
          local_2d8 = (stat *)CONCAT71(local_2d8._1_7_,1);
          local_308 = (stat *)0x0;
          goto LAB_00405898;
        }
        local_308 = (stat *)0x0;
LAB_00406780:
        pbVar44 = (byte *)local_278.st_ino;
        pbVar24 = (byte *)local_278.st_dev;
        *(undefined8 *)(puVar39 + -8) = 0x406788;
        local_2f8 = (stat *)FUN_00409440(pbVar44,pbVar24);
        puVar40 = puVar39;
        goto LAB_00405d67;
      }
      if (*(char *)((long)param_6 + 0x2d) == '\0') {
LAB_004055ee:
        iVar9 = *(int *)(param_6 + 1);
        if (*(char *)(param_6 + 3) != '\0') goto LAB_00406b8f;
        if (iVar9 == 2) {
          return 1;
        }
        if (iVar9 == 3) {
          local_308 = (stat *)((ulong)local_308 & 0xffffffffffffff00 | (ulong)(byte)local_308);
          local_380 = (undefined *)0x407a4a;
          cVar4 = FUN_00404890(param_6,local_2c0,&local_2f8->st_mode);
          if (cVar4 == '\0') {
            return 1;
          }
        }
        goto LAB_0040560f;
      }
      bVar48 = false;
      if ((*(char *)((long)param_6 + 0x1f) != '\0') &&
         (bVar48 = true, *(char *)(param_6 + 3) != '\0')) {
        bVar48 = local_1e8.st_dev != local_278.st_dev;
      }
      local_308 = (stat *)((ulong)local_308 & 0xffffffffffffff00 | (ulong)(byte)local_308);
      local_380 = (undefined *)0x406809;
      iVar9 = FUN_0040eb60(local_2c0,local_2f8,local_2e0,bVar48);
      if (iVar9 < 0) goto LAB_004055ee;
      if (param_10 != (undefined *)0x0) {
        *param_10 = 1;
      }
      local_380 = (undefined *)0x406841;
      lVar28 = FUN_00409480(local_2c0,local_278.st_ino,local_278.st_dev);
      if (lVar28 == 0) {
        return 1;
      }
      local_380 = (undefined *)0x40686a;
      cVar4 = FUN_004049c0(lVar28,local_2c0,1,*(undefined *)((long)param_6 + 0x2e),
                           (ulong)local_2e8 & 0xffffffff);
      if (cVar4 != '\0') {
        return 1;
      }
      if (*(char *)((long)param_6 + 0x25) == '\0') {
        return uVar10;
      }
    }
    else {
LAB_00405840:
      local_2d8 = (stat *)CONCAT71(local_2d8._1_7_,1);
      local_2f8._0_1_ = 0;
      local_308 = (stat *)0x0;
      puVar35 = auStack_378;
LAB_00405854:
      if ((bVar5 == 0) || (puVar34 = puVar35, param_6[7] == (byte *)0x0)) {
LAB_0040585c:
        puVar37 = puVar35;
        if (*(char *)((long)param_6 + 0x2e) == '\0') {
LAB_00405d20:
          if ((*(char *)((long)param_6 + 0x2a) == '\0') || (puVar39 = puVar37, local_2cc != 0x4000))
          {
LAB_00405898:
            puVar40 = puVar37;
            if (*(char *)(param_6 + 3) == '\0') goto LAB_004058a3;
            goto LAB_00405ef7;
          }
LAB_00405d3b:
          pbVar24 = (byte *)local_278.st_ino;
          ppbVar23 = local_2c0;
          if (bVar5 == 0) goto LAB_00406780;
          *(undefined8 *)(puVar39 + -8) = 0x405d60;
          local_2f8 = (stat *)FUN_00409480(ppbVar23,pbVar24);
          puVar40 = puVar39;
LAB_00405d67:
          if (local_2f8 != (stat *)0x0) {
LAB_00405d75:
            psVar21 = local_2f8;
            *(undefined8 *)(puVar40 + -8) = 0x405d84;
            cVar4 = FUN_0040e2f0(param_1,psVar21);
            ppbVar23 = local_2c0;
            psVar21 = local_2f8;
            if (cVar4 != '\0') {
              *(undefined8 *)(puVar40 + -8) = 0x407146;
              uVar16 = FUN_0040dcf0(1,4,DAT_0061b8e8);
              *(undefined8 *)(puVar40 + -8) = 0x40715c;
              uVar17 = FUN_0040dcf0(0,4,DAT_0061b8f0);
              *(undefined8 *)(puVar40 + -8) = 0x407170;
              uVar18 = dcgettext(0,"cannot copy a directory, %s, into itself, %s",5);
                    /* WARNING: Subroutine does not return */
              *(undefined **)(puVar40 + -8) = &UNK_00407184;
              error(0,0,uVar18,uVar17,uVar16);
            }
            *(undefined8 *)(puVar40 + -8) = 0x405d9f;
            cVar4 = FUN_0040e2f0(ppbVar23,psVar21);
            psVar21 = local_2f8;
            if (cVar4 != '\0') {
              *(undefined8 *)(puVar40 + -8) = 0x407991;
              uVar16 = FUN_0040ddd0(4,DAT_0061b8f0);
              *(undefined8 *)(puVar40 + -8) = 0x4079a5;
              uVar17 = dcgettext(0,"warning: source directory %s specified more than once",5);
                    /* WARNING: Subroutine does not return */
              *(undefined **)(puVar40 + -8) = &UNK_004079b6;
              error(0,0,uVar17,uVar16);
            }
            if ((*(int *)((long)param_6 + 4) != 4) &&
               ((*(int *)((long)param_6 + 4) != 3 || (bVar5 == 0)))) {
              *(undefined8 *)(puVar40 + -8) = 0x405dd7;
              uVar16 = FUN_0040dcf0(1,4,psVar21);
              ppbVar23 = local_2c0;
              *(undefined8 *)(puVar40 + -8) = 0x405ded;
              uVar17 = FUN_0040dcf0(0,4,ppbVar23);
              *(undefined8 *)(puVar40 + -8) = 0x405e01;
              uVar18 = dcgettext(0,"will not create hard link %s to directory %s",5);
                    /* WARNING: Subroutine does not return */
              *(undefined8 *)(puVar40 + -8) = 0x405e15;
              error(0,0,uVar18,uVar17,uVar16);
            }
          }
LAB_00405ec6:
          if (*(char *)(param_6 + 3) == '\0') {
            local_2c8 = (int *)((ulong)local_2c8 & 0xffffffff00000000 | (ulong)local_2d8 & 0xff);
            goto LAB_004058c6;
          }
        }
        else {
          puVar34 = puVar35;
          if (*(char *)(param_6 + 3) == '\0') {
LAB_00405872:
            ppbVar23 = local_2c0;
            psVar21 = local_308;
            puVar34 = puVar37;
            if (local_2cc == 0x4000) {
LAB_00406260:
              puVar40 = puVar34;
              puVar39 = puVar34;
              if (*(char *)((long)param_6 + 0x2a) == '\0') goto LAB_004058a3;
              goto LAB_00405d3b;
            }
            *(undefined8 *)(puVar37 + -8) = 0x405898;
            FUN_004047e0(param_1,ppbVar23,psVar21);
            goto LAB_00405898;
          }
LAB_00405ee0:
          puVar40 = puVar34;
          if ((local_2cc == 0x4000) && (puVar39 = puVar34, *(char *)((long)param_6 + 0x2a) != '\0'))
          goto LAB_00405d3b;
LAB_00405ef7:
          pbVar44 = (byte *)local_278.st_ino;
          pbVar24 = (byte *)local_278.st_dev;
          if (local_278.st_nlink == 1) {
            *(undefined8 *)(puVar40 + -8) = 0x4067ab;
            local_2f8 = (stat *)FUN_00409440(pbVar44,pbVar24);
LAB_0040609c:
            ppbVar23 = local_2c0;
            psVar21 = local_2f8;
            if (local_2f8 != (stat *)0x0) {
              if (local_2cc == 0x4000) goto LAB_00405d75;
              uVar47 = *(undefined *)((long)param_6 + 0x2e);
              uVar32 = (ulong)local_2e8 & 0xffffffff;
              *(undefined8 *)(puVar40 + -8) = 0x4060de;
              cVar4 = FUN_004049c0(psVar21,ppbVar23,1,uVar47,uVar32);
              if (cVar4 != '\0') {
                return 1;
              }
              if (*(char *)((long)param_6 + 0x25) == '\0') goto LAB_00405e23;
              goto LAB_0040687d;
            }
            goto LAB_00405ec6;
          }
          if (*(char *)((long)param_6 + 0x22) != '\0') goto LAB_00405eb0;
          local_2f8 = (stat *)0x0;
        }
        ppbVar23 = local_2c0;
        *(undefined8 *)(puVar40 + -8) = 0x405f26;
        iVar9 = rename((char *)param_1,(char *)ppbVar23);
        if (iVar9 == 0) {
          if (*(char *)((long)param_6 + 0x2e) != '\0') {
            *(undefined8 *)(puVar40 + -8) = 0x407319;
            uVar16 = dcgettext(0,"renamed ",5);
            *(undefined8 *)(puVar40 + -8) = 0x407328;
            __printf_chk(1,uVar16);
            ppbVar23 = local_2c0;
            psVar21 = local_308;
            *(undefined8 *)(puVar40 + -8) = 0x40733e;
            FUN_004047e0(param_1,ppbVar23,psVar21);
          }
          ppbVar23 = local_2c0;
          if (*(char *)((long)param_6 + 0x21) != '\0') {
            *(undefined8 *)(puVar40 + -8) = 0x4072fe;
            FUN_00405090(ppbVar23,0,1,param_6);
          }
          ppbVar23 = local_2c0;
          psVar21 = local_2e0;
          if (param_10 != (undefined *)0x0) {
            *param_10 = 1;
          }
          if (bVar5 == 0) {
            return 1;
          }
          pbVar24 = param_6[7];
          *(undefined8 *)(puVar40 + -8) = 0x406a6e;
          FUN_0040aca0(pbVar24,ppbVar23,psVar21);
          return param_7;
        }
        *(undefined8 *)(puVar40 + -8) = 0x405f33;
        piVar15 = __errno_location();
        ppbVar23 = local_2c0;
        if (*piVar15 == 0x16) {
          *(undefined8 *)(puVar40 + -8) = 0x407724;
          uVar16 = FUN_0040dcf0(1,4,DAT_0061b8e8);
          *(undefined8 *)(puVar40 + -8) = 0x40773a;
          uVar17 = FUN_0040dcf0(0,4,DAT_0061b8f0);
          *(undefined8 *)(puVar40 + -8) = 0x40774e;
          uVar18 = dcgettext(0,"cannot move %s to a subdirectory of itself, %s",5);
                    /* WARNING: Subroutine does not return */
          *(undefined **)(puVar40 + -8) = &UNK_00407762;
          error(0,0,uVar18,uVar17,uVar16);
        }
        if (*piVar15 != 0x12) {
          *(undefined8 *)(puVar40 + -8) = 0x406c8e;
          uVar16 = FUN_0040dcf0(1,4,ppbVar23);
          *(undefined8 *)(puVar40 + -8) = 0x406ca0;
          uVar17 = FUN_0040dcf0(0,4,param_1);
          pcVar42 = "cannot move %s to %s";
          goto LAB_004069ed;
        }
        if (local_2cc == 0x4000) {
          *(undefined8 *)(puVar40 + -8) = 0x4069a5;
          iVar9 = rmdir((char *)ppbVar23);
          if ((iVar9 != 0) && (*piVar15 != 2)) goto LAB_004069b8;
        }
        else {
          *(undefined8 *)(puVar40 + -8) = 0x405f66;
          iVar9 = unlink((char *)ppbVar23);
          if ((iVar9 != 0) && (*piVar15 != 2)) {
LAB_004069b8:
            ppbVar23 = local_2c0;
            *(undefined8 *)(puVar40 + -8) = 0x4069ce;
            uVar16 = FUN_0040dcf0(1,4,ppbVar23);
            *(undefined8 *)(puVar40 + -8) = 0x4069e0;
            uVar17 = FUN_0040dcf0(0,4,param_1);
            pcVar42 = "inter-device move failed: %s to %s; unable to remove target";
LAB_004069ed:
            *(undefined8 *)(puVar40 + -8) = 0x4069f4;
            uVar18 = dcgettext(0,pcVar42,5);
            iVar9 = *piVar15;
                    /* WARNING: Subroutine does not return */
            *(undefined **)(puVar40 + -8) = &UNK_00406a0a;
            error(0,iVar9,uVar18,uVar17,uVar16);
          }
          bVar5 = local_2cc != 0x4000 & *(byte *)((long)param_6 + 0x2e);
          local_2d8 = (stat *)((ulong)local_2d8 & 0xffffffffffffff00 | (ulong)bVar5);
          if (bVar5 != 0) {
            *(undefined8 *)(puVar40 + -8) = 0x4076d1;
            uVar16 = dcgettext(0,"copied ",5);
            *(undefined8 *)(puVar40 + -8) = 0x4076e0;
            __printf_chk(1,uVar16);
            ppbVar23 = local_2c0;
            psVar21 = local_308;
            *(undefined8 *)(puVar40 + -8) = 0x4076f6;
            FUN_004047e0(param_1,ppbVar23,psVar21);
            local_2c8 = (int *)CONCAT44(local_2c8._4_4_,1);
            goto LAB_004058c6;
          }
        }
        local_2c8 = (int *)CONCAT44(local_2c8._4_4_,1);
        local_2d8 = (stat *)CONCAT71(local_2d8._1_7_,1);
      }
      else {
LAB_00405790:
        ppbVar23 = local_2c0;
        puVar37 = puVar34;
        if (*(char *)(param_6 + 3) != '\0') {
          if (*(char *)((long)param_6 + 0x2e) != '\0') goto LAB_00405ee0;
          goto LAB_00405d20;
        }
        if (*(int *)param_6 == 0) {
          psVar21 = &local_1e8;
          puVar35 = puVar34;
          if ((byte)local_2f8 == 0) {
            psVar21 = (stat *)local_c8;
            *(undefined8 *)(puVar34 + -8) = 0x4071c6;
            iVar9 = __lxstat(1,(char *)ppbVar23,psVar21);
            if (iVar9 != 0) goto LAB_0040585c;
          }
          ppbVar23 = local_2c0;
          if ((psVar21->st_mode & 0xf000) == 0xa000) {
            pbVar24 = param_6[7];
            *(undefined8 *)(puVar34 + -8) = 0x4057d9;
            cVar4 = FUN_0040ad30(pbVar24,ppbVar23);
            ppbVar23 = local_2c0;
            if (cVar4 != '\0') {
              *(undefined8 *)(puVar34 + -8) = 0x4057f3;
              uVar16 = FUN_0040dcf0(1,4,ppbVar23);
              *(undefined8 *)(puVar34 + -8) = 0x405805;
              uVar17 = FUN_0040dcf0(0,4,param_1);
              pcVar42 = "will not copy %s through just-created symlink %s";
              goto LAB_00405818;
            }
          }
          goto LAB_0040585c;
        }
        if (*(char *)((long)param_6 + 0x2e) != '\0') goto LAB_00405872;
        puVar40 = puVar34;
        if (local_2cc == 0x4000) goto LAB_00406260;
LAB_004058a3:
        if (*(char *)((long)param_6 + 0x22) != '\0') {
LAB_00405eb0:
          pbVar44 = (byte *)local_278.st_ino;
          pbVar24 = (byte *)local_278.st_dev;
          ppbVar23 = local_2c0;
          if (*(char *)((long)param_6 + 0x17) == '\0') {
            if ((1 < local_278.st_nlink) ||
               (((bVar5 != 0 && (*(int *)((long)param_6 + 4) == 3)) ||
                (local_2f8 = (stat *)0x0, *(int *)((long)param_6 + 4) == 4)))) {
              *(undefined8 *)(puVar40 + -8) = 0x406095;
              local_2f8 = (stat *)FUN_00409480(ppbVar23,pbVar44,pbVar24);
              goto LAB_0040609c;
            }
          }
          else {
            local_2f8 = (stat *)0x0;
          }
          goto LAB_00405ec6;
        }
        local_2f8 = (stat *)0x0;
        local_2c8 = (int *)((ulong)local_2c8 & 0xffffffff00000000 | (ulong)local_2d8 & 0xff);
      }
LAB_004058c6:
      ppbVar23 = local_2c0;
      uVar11 = local_2d0;
      uVar12 = local_2d0;
      if (*(char *)((long)param_6 + 0x2b) != '\0') {
        uVar12 = *(uint *)(param_6 + 2);
      }
      if (*(char *)((long)param_6 + 0x1d) != '\0') {
        *(undefined8 *)(puVar40 + -8) = 0x40619e;
        cVar4 = FUN_00404fc0(param_1,ppbVar23,uVar11);
        if (cVar4 == '\0') {
          return uVar10;
        }
        local_310 = (stat *)((ulong)local_310 & 0xffffffff00000000 |
                            (ulong)uVar12 & 0xffffffff0000003f);
        ppbVar23 = local_2f0;
        if (local_2cc == 0x4000) goto joined_r0x004061df;
LAB_00405931:
        ppbVar23 = local_2c0;
        local_2f0 = (byte **)((ulong)local_2f0 & 0xffffffffffffff00 |
                             (ulong)*(byte *)((long)param_6 + 0x2c));
        puVar36 = puVar40;
        if (*(byte *)((long)param_6 + 0x2c) == 0) {
          local_329 = *(byte *)((long)param_6 + 0x17);
          if (*(byte *)((long)param_6 + 0x17) == 0) {
            puVar35 = puVar40;
            if ((local_2cc != 0x8000) &&
               ((local_2cc != 0xa000 & *(byte *)((long)param_6 + 0x14)) == 0)) {
              local_2c8 = (int *)((ulong)local_2c8 & 0xffffffffffffff00);
              if (local_2cc == 0x1000) {
                local_c8._0_8_ = (byte *)0x0;
                uVar12 = ~(uint)local_310 & local_2d0;
                *(undefined8 *)(puVar40 + -8) = 0x407aa8;
                iVar9 = __xmknod(0,(char *)ppbVar23,uVar12,(__dev_t *)local_c8);
                ppbVar23 = local_2c0;
                if (iVar9 != 0) {
                  *(undefined8 *)(puVar40 + -8) = 0x407ef1;
                  iVar9 = mkfifo((char *)ppbVar23,uVar12 & 0xffffefff);
                  ppbVar23 = local_2c0;
                  if (iVar9 != 0) {
                    *(undefined8 *)(puVar40 + -8) = 0x407f12;
                    uVar16 = FUN_0040ddd0(4,ppbVar23);
                    pcVar42 = "cannot create fifo %s";
                    goto LAB_00406360;
                  }
                }
                local_2f0 = (byte **)((ulong)local_2f0 & 0xffffffffffffff00 | (ulong)(byte)local_2c8
                                     );
                local_329 = (byte)local_2c8;
                local_2e8 = (byte **)CONCAT71(local_2e8._1_7_,1);
              }
              else {
                bVar48 = (local_2d0 & 0xb000) == 0x2000;
                local_2e8 = (byte **)((ulong)local_2e8 & 0xffffffffffffff00 |
                                     (ulong)(bVar48 || local_2cc == 0xc000));
                if (bVar48 || local_2cc == 0xc000) {
                  local_c8._0_8_ = (byte *)local_278.st_rdev;
                  uVar12 = ~(uint)local_310 & local_2d0;
                  *(undefined8 *)(puVar40 + -8) = 0x40631e;
                  iVar9 = __xmknod(0,(char *)ppbVar23,uVar12,(__dev_t *)local_c8);
                  ppbVar23 = local_2c0;
                  local_2f0 = (byte **)((ulong)local_2f0 & 0xffffffffffffff00 |
                                       (ulong)local_2c8 & 0xff);
                  local_329 = (byte)local_2c8;
                  if (iVar9 != 0) {
                    *(undefined8 *)(puVar40 + -8) = 0x40634d;
                    uVar16 = FUN_0040ddd0(4,ppbVar23);
                    pcVar42 = "cannot create special file %s";
LAB_00406360:
                    *(undefined8 *)(puVar35 + -8) = 0x406367;
                    uVar17 = dcgettext(0,pcVar42,5);
                    *(undefined8 *)(puVar35 + -8) = 0x40636f;
                    piVar15 = __errno_location();
                    iVar9 = *piVar15;
                    /* WARNING: Subroutine does not return */
                    *(undefined8 *)(puVar35 + -8) = 0x406380;
                    error(0,iVar9,uVar17,uVar16);
                  }
                }
                else {
                  if (local_2cc != 0xa000) {
                    *(undefined8 *)(puVar40 + -8) = 0x407b35;
                    uVar16 = FUN_0040ddd0(4,param_1);
                    pcVar42 = "%s has unknown file type";
                    goto LAB_00406222;
                  }
                  *(undefined8 *)(puVar40 + -8) = 0x4077ea;
                  pcVar42 = (char *)FUN_00409c30(param_1,local_278.st_size);
                  ppbVar23 = local_2c0;
                  if (pcVar42 == (char *)0x0) {
                    *(undefined8 *)(puVar40 + -8) = 0x40857d;
                    uVar16 = FUN_0040ddd0(4,param_1);
                    pcVar42 = "cannot read symbolic link %s";
                    goto LAB_00406360;
                  }
                  *(undefined8 *)(puVar40 + -8) = 0x40780f;
                  iVar9 = FUN_00409a40(pcVar42,0xffffff9c,ppbVar23);
                  if (iVar9 < 0) {
                    *(undefined8 *)(puVar40 + -8) = 0x407f29;
                    puVar22 = (uint *)__errno_location();
                    ppbVar23 = local_2c0;
                    local_2c8 = (int *)((ulong)local_2c8 & 0xffffffff00000000 | (ulong)*puVar22);
                    if (*puVar22 != 0) {
                      if (((*(char *)((long)param_6 + 0x2d) != '\x01') || ((byte)local_2d8 != '\0'))
                         || ((local_1e8.st_mode & 0xf000) != 0xa000)) {
LAB_00407f4d:
                        *(undefined8 *)(puVar40 + -8) = 0x407f55;
                        free(pcVar42);
                        ppbVar23 = local_2c0;
                        *(undefined8 *)(puVar40 + -8) = 0x407f66;
                        uVar16 = FUN_0040ddd0(4,ppbVar23);
                        *(undefined8 *)(puVar40 + -8) = 0x407f7a;
                        uVar17 = dcgettext(0,"cannot create symbolic link %s",5);
                        uVar30 = (ulong)local_2c8 & 0xffffffff;
                    /* WARNING: Subroutine does not return */
                        *(undefined **)(puVar40 + -8) = &UNK_00407f8f;
                        error(0,uVar30,uVar17,uVar16);
                      }
                      uVar32 = 0xffffffffffffffff;
                      pcVar26 = pcVar42;
                      do {
                        if (uVar32 == 0) break;
                        uVar32 = uVar32 - 1;
                        cVar4 = *pcVar26;
                        pcVar26 = pcVar26 + (ulong)bVar8 * -2 + 1;
                      } while (cVar4 != '\0');
                      if (local_1e8.st_size != ~uVar32 - 1) goto LAB_00407f4d;
                      *(undefined8 *)(puVar40 + -8) = 0x408e8e;
                      pcVar26 = (char *)FUN_00409c30(ppbVar23);
                      if (pcVar26 == (char *)0x0) goto LAB_00407f4d;
                      local_2e8 = (byte **)pcVar26;
                      *(undefined8 *)(puVar40 + -8) = 0x408ea9;
                      iVar9 = strcmp(pcVar26,pcVar42);
                      pcVar26 = (char *)local_2e8;
                      if (iVar9 != 0) {
                        *(undefined8 *)(puVar40 + -8) = 0x409215;
                        free(pcVar26);
                        goto LAB_00407f4d;
                      }
                      *(undefined8 *)(puVar40 + -8) = 0x408ec0;
                      free(pcVar26);
                    }
                  }
                  *(undefined8 *)(puVar40 + -8) = 0x40781f;
                  free(pcVar42);
                  __group = local_278.st_gid;
                  _Var14 = local_278.st_uid;
                  ppbVar23 = local_2c0;
                  local_329 = *(byte *)((long)param_6 + 0x25);
                  if (*(byte *)((long)param_6 + 0x25) != 0) goto LAB_0040687d;
                  local_2c8._0_1_ = *(byte *)((long)param_6 + 0x1d);
                  if ((byte)local_2c8 == 0) {
                    local_329 = (byte)local_2c8;
                    local_2f0 = (byte **)CONCAT71(local_2f0._1_7_,1);
                    local_2e8 = (byte **)CONCAT71(local_2e8._1_7_,1);
                  }
                  else {
                    local_2c8 = (int *)((ulong)local_2c8 & 0xffffffffffffff00 |
                                       (ulong)(byte)local_2c8);
                    *(undefined8 *)(puVar40 + -8) = 0x40843f;
                    iVar9 = lchown((char *)ppbVar23,_Var14,__group);
                    if (iVar9 == 0) {
                      local_2f0 = (byte **)((ulong)local_2f0 & 0xffffffffffffff00 |
                                           (ulong)local_2c8 & 0xff);
                      local_2e8 = (byte **)((ulong)local_2e8 & 0xffffffffffffff00 |
                                           (ulong)local_2c8 & 0xff);
                      local_2c8._0_1_ = 0;
                    }
                    else {
                      *(undefined8 *)(puVar40 + -8) = 0x408457;
                      bVar8 = FUN_004051b0(param_6);
                      local_2f0 = (byte **)((ulong)local_2f0 & 0xffffffffffffff00 | (ulong)bVar8);
                      if (bVar8 == 0) {
                        *(undefined8 *)(puVar40 + -8) = 0x408df7;
                        uVar16 = dcgettext(0,"failed to preserve ownership for %s",5);
                        *(undefined8 *)(puVar40 + -8) = 0x408dff;
                        piVar15 = __errno_location();
                        ppbVar23 = local_2c0;
                        iVar9 = *piVar15;
                    /* WARNING: Subroutine does not return */
                        *(undefined **)(puVar40 + -8) = &UNK_00408e14;
                        error(0,iVar9,uVar16,ppbVar23);
                      }
                      local_2c8._0_1_ = 0;
                      local_2e8 = (byte **)((ulong)local_2e8 & 0xffffffffffffff00 | (ulong)bVar8);
                    }
                  }
                }
              }
              goto LAB_004059b5;
            }
            iVar9 = *(int *)((long)param_6 + 4);
            local_320 = (byte **)((ulong)local_320 & 0xffffffff00000000 | (ulong)local_278.st_mode);
            local_318 = (stat *)((ulong)local_318 & 0xffffffffffffff00 |
                                (ulong)*(byte *)((long)param_6 + 0x23));
            *(undefined8 *)(puVar40 + -8) = 0x406ce7;
            uVar11 = FUN_0040ac50(param_1,(ulong)(iVar9 == 2) << 0x11);
            local_2c8 = (int *)((ulong)local_2c8 & 0xffffffff00000000 | (ulong)uVar11);
            if ((int)uVar11 < 0) {
              *(undefined8 *)(puVar40 + -8) = 0x407a03;
              uVar16 = FUN_0040ddd0(4,param_1);
              pcVar42 = "cannot open %s for reading";
              goto LAB_00406360;
            }
            *(undefined8 *)(puVar40 + -8) = 0x406d0c;
            iVar9 = __fxstat(1,uVar11,(stat *)&local_158);
            ppbVar23 = local_2c0;
            if (iVar9 != 0) {
              *(undefined8 *)(puVar40 + -8) = 0x407cdc;
              local_2e8 = (byte **)FUN_0040ddd0(4,param_1);
              *(undefined8 *)(puVar40 + -8) = 0x407cf4;
              uVar16 = dcgettext(0,"cannot fstat %s",5);
              *(undefined8 *)(puVar40 + -8) = 0x407cfc;
              piVar15 = __errno_location();
              iVar9 = *piVar15;
              pcVar42 = (char *)local_2e8;
              goto LAB_00406ea0;
            }
            if (((byte *)local_278.st_ino != (byte *)CONCAT44(uStack_14c,uStack_150)) ||
               ((byte *)local_278.st_dev != (byte *)CONCAT44(uStack_154,local_158))) {
              *(undefined8 *)(puVar40 + -8) = 0x40788c;
              pcVar42 = (char *)FUN_0040ddd0(4,param_1);
              *(undefined8 *)(puVar40 + -8) = 0x4078a0;
              uVar16 = dcgettext(0,"skipping file %s, as it was replaced while being copied",5);
              iVar9 = 0;
              goto LAB_00406ea0;
            }
            local_35c = uVar12 & 0x1ff;
            if ((byte)local_2d8 != '\0') {
LAB_00407e43:
              local_350 = (uint)local_310;
LAB_00406df0:
              ppbVar23 = local_2c0;
              uVar12 = ~local_350 & local_35c;
              local_2e8 = (byte **)((ulong)local_2e8 & 0xffffffff00000000 | (ulong)uVar12);
              *(undefined8 *)(puVar40 + -8) = 0x406e1e;
              uVar12 = FUN_0040ac50(ppbVar23,0xc1,uVar12);
              local_2f0 = (byte **)((ulong)local_2f0 & 0xffffffff00000000 | (ulong)uVar12);
              *(undefined8 *)(puVar40 + -8) = 0x406e29;
              local_300 = (stat *)__errno_location();
              ppbVar23 = local_2c0;
              iVar9 = *(int *)&local_300->st_dev;
              bVar5 = iVar9 == 0x11 & (byte)((ulong)local_2f0 >> 0x18) >> 7;
              local_328 = (stat *)((ulong)local_328 & 0xffffffffffffff00 | (ulong)bVar5);
              if (bVar5 == 0) {
LAB_004084f8:
                bVar5 = iVar9 == 0x15 & (byte)((ulong)local_2f0 >> 0x18) >> 7;
                uVar32 = (ulong)local_2d8 & 0xffffffffffffff00;
                local_2d8 = (stat *)(uVar32 | bVar5);
                if (bVar5 == 0) {
                  local_2d8._1_7_ = (undefined7)(uVar32 >> 8);
                  local_2d8 = (stat *)CONCAT71(local_2d8._1_7_,1);
                  if (-1 < (int)local_2f0) {
LAB_0040807d:
                    local_328 = (stat *)local_c8;
                    *(undefined8 *)(puVar40 + -8) = 0x40809e;
                    uVar12 = __fxstat(1,(int)local_2f0,(stat *)local_c8);
                    ppbVar23 = local_2c0;
                    local_300 = (stat *)((ulong)local_300 & 0xffffffff00000000 | (ulong)uVar12);
                    if (uVar12 != 0) {
                      *(undefined8 *)(puVar40 + -8) = 0x408776;
                      local_2e8 = (byte **)FUN_0040ddd0(4,ppbVar23);
                      *(undefined8 *)(puVar40 + -8) = 0x40878e;
                      uVar17 = dcgettext(0,"cannot fstat %s",5);
                      *(undefined8 *)(puVar40 + -8) = 0x408796;
                      piVar15 = __errno_location();
                      uVar16 = local_2e8;
                      iVar9 = *piVar15;
                    /* WARNING: Subroutine does not return */
                      *(undefined **)(puVar40 + -8) = &UNK_004087ab;
                      error(0,iVar9,uVar17,uVar16);
                    }
                    if ((byte)local_318 == '\0') {
LAB_00408560:
                      local_2e8 = (byte **)0x0;
                      goto LAB_004082ef;
                    }
                    if (*(int *)((long)param_6 + 0x34) != 0) {
                      uVar32 = (ulong)local_2c8 & 0xffffffff;
                      *(undefined8 *)(puVar40 + -8) = 0x408d58;
                      iVar9 = ioctl((int)local_2f0,0x40049409,uVar32);
                      if (iVar9 == 0) goto LAB_00408560;
                      if (*(int *)((long)param_6 + 0x34) == 2) {
                        *(undefined8 *)(puVar40 + -8) = 0x408d7d;
                        local_300 = (stat *)FUN_0040dcf0(1,4,param_1);
                        ppbVar23 = local_2c0;
                        *(undefined8 *)(puVar40 + -8) = 0x408d97;
                        uVar18 = FUN_0040dcf0(0,4,ppbVar23);
                        *(undefined8 *)(puVar40 + -8) = 0x408dab;
                        local_2e8 = (byte **)dcgettext(0,"failed to clone %s from %s",5);
                        *(undefined8 *)(puVar40 + -8) = 0x408db7;
                        piVar15 = __errno_location();
                        uVar17 = local_2e8;
                        uVar16 = local_300;
                        iVar9 = *piVar15;
                    /* WARNING: Subroutine does not return */
                        *(undefined **)(puVar40 + -8) = &UNK_00408dd3;
                        error(0,iVar9,uVar17,uVar18,uVar16);
                      }
                    }
                    *(undefined8 *)(puVar40 + -8) = 0x4080c9;
                    iVar9 = getpagesize();
                    uVar32 = (ulong)iVar9;
                    local_348 = ppbStack_90;
                    local_338 = ppbStack_90;
                    if ((byte **)0x1ffffffffffe0000 < ppbStack_90 + -0x4000) {
                      local_338 = (byte **)0x20000;
                      local_348 = (byte **)0x200;
                      if ((long)ppbStack_90 - 1U < 0x2000000000000000) {
                        local_348 = ppbStack_90;
                      }
                    }
                    *(undefined8 *)(puVar40 + -8) = 0x40813e;
                    posix_fadvise((int)local_2c8,0,0,2);
                    ppbVar23 = local_338;
                    if ((_Stack_140 & 0xf000) == 0x8000) {
                      local_300 = (stat *)((ulong)local_300 & 0xffffffff00000000 |
                                          (ulong)(CONCAT44(uStack_114,local_118) <
                                                 CONCAT44(uStack_124,local_128) / 0x200));
                    }
                    local_2e8 = (byte **)(uVar32 - 1);
                    if ((local_c8._24_4_ & 0xf000) == 0x8000) {
                      if (*(int *)((long)param_6 + 0xc) != 3) {
                        if ((*(int *)((long)param_6 + 0xc) == 2) && (((ulong)local_300 & 1) != 0)) {
                          lVar28 = (long)local_338 + uVar32;
                          *(undefined8 *)(puVar40 + -8) = 0x408d03;
                          local_2e8 = (byte **)FUN_004100e0(lVar28);
                          uVar30 = (uVar32 - 1) + (long)local_2e8;
                          local_358 = uVar30 - uVar30 % uVar32;
                          goto LAB_00408d24;
                        }
                        goto LAB_0040819b;
                      }
                      lVar28 = (long)local_338 + uVar32;
                      *(undefined8 *)(puVar40 + -8) = 0x408f0d;
                      local_2e8 = (byte **)FUN_004100e0(lVar28);
                      uVar29 = (uVar32 - 1) + (long)local_2e8;
                      uVar32 = uVar29 % uVar32;
                      local_358 = uVar29 - uVar32;
                      if ((int)local_300 != 0) {
LAB_00408d24:
                        local_330 = *(uint *)((long)param_6 + 0xc);
                        local_32b = (byte)local_318;
                        goto LAB_00408839;
                      }
                      bVar48 = *(int *)((long)param_6 + 0xc) == 3;
                      local_300 = (stat *)local_2a8;
LAB_00408297:
                      *(ulong *)(puVar40 + -8) = uVar32;
                      ppbVar3 = local_338;
                      ppbVar23 = local_348;
                      lVar28 = local_358;
                      *(char **)(puVar40 + -0x10) = &local_2b0;
                      *(stat **)(puVar40 + -0x18) = local_300;
                      uVar32 = (ulong)local_2f0 & 0xffffffff;
                      uVar29 = (ulong)local_2c8 & 0xffffffff;
                      *(undefined8 *)(puVar40 + -0x20) = 0xffffffffffffffff;
                      *(byte ***)(puVar40 + -0x28) = local_2c0;
                      *(byte ***)(puVar40 + -0x30) = param_1;
                      *(undefined8 *)(puVar40 + -0x38) = 0x4082d6;
                      cVar4 = FUN_00404b90(uVar29,uVar32,lVar28,ppbVar3,ppbVar23,bVar48);
                      pbVar24 = local_2a8._0_8_;
                      if (cVar4 != '\0') {
                        if (local_2b0 != '\0') {
                          *(undefined8 *)(puVar40 + -8) = 0x408f6c;
                          iVar9 = ftruncate((int)local_2f0,(__off_t)pbVar24);
                          if (iVar9 < 0) goto LAB_00408f74;
                        }
                        goto LAB_004082ef;
                      }
LAB_0040869e:
                      local_300._0_1_ = 0;
                    }
                    else {
LAB_0040819b:
                      lVar28 = CONCAT44(uStack_11c,uStack_120);
                      local_340 = (byte **)((ulong)local_340 & 0xffffffff00000000 |
                                           (ulong)_Stack_140 & 0xffffffff0000f000);
                      local_2e8 = (byte **)(0x7fffffffffffffff - uVar32);
                      if (0x1ffffffffffe0000 < lVar28 - 0x20000U) {
                        lVar28 = 0x20000;
                      }
                      *(undefined8 *)(puVar40 + -8) = 0x4081e9;
                      ppbVar23 = (byte **)FUN_0040a780(lVar28,ppbVar23,
                                                       (byte **)(0x7fffffffffffffff - uVar32));
                      if (((int)local_340 == 0x8000) &&
                         ((byte **)CONCAT44(uStack_124,local_128) < local_338)) {
                        local_338 = (byte **)((long)(byte **)CONCAT44(uStack_124,local_128) + 1);
                      }
                      uVar29 = (long)ppbVar23 + -1 + (long)local_338;
                      local_338 = (byte **)(uVar29 - uVar29 % (ulong)ppbVar23);
                      if ((local_338 == (byte **)0x0) || (local_2e8 < local_338)) {
                        local_338 = ppbVar23;
                      }
                      lVar28 = uVar32 + (long)local_338;
                      *(undefined8 *)(puVar40 + -8) = 0x408244;
                      local_2e8 = (byte **)FUN_004100e0(lVar28);
                      uVar29 = (uVar32 - 1) + (long)local_2e8;
                      uVar32 = uVar29 % uVar32;
                      local_358 = uVar29 - uVar32;
                      if ((int)local_300 == 0) {
                        bVar48 = *(int *)((long)param_6 + 0xc) == 3;
                        local_348 = (byte **)0x0;
                        local_300 = (stat *)local_2a8;
                        goto LAB_00408297;
                      }
                      local_32b = '\0';
                      local_330 = 1;
LAB_00408839:
                      uVar30 = (ulong)local_2c8 & 0xffffffff;
                      psVar21 = (stat *)0x0;
                      local_300 = (stat *)local_2a8;
                      local_370 = (stat *)CONCAT44(uStack_124,local_128);
                      *(undefined8 *)(puVar40 + -8) = 0x408866;
                      FUN_00409550(uVar30,(stat *)local_2a8);
                      psVar2 = local_370;
                      psVar46 = (stat *)0x0;
                      local_360 = param_7;
                      local_368 = param_6;
                      local_32a = (byte)uVar10;
                      uVar30 = (ulong)local_318 & 0xff;
                      local_340 = param_1;
                      local_318 = (stat *)0x0;
                      do {
                        psVar31 = local_300;
                        *(undefined8 *)(puVar40 + -8) = 0x4088ab;
                        cVar4 = FUN_00409580(psVar31);
                        psVar31 = local_318;
                        ppbVar23 = local_340;
                        if (cVar4 == '\0') {
                          local_318 = (stat *)((ulong)local_318 & 0xffffffffffffff00 | uVar30 & 0xff
                                              );
                          uVar10 = (uint)local_32a;
                          uVar30 = (ulong)local_360;
                          if (local_287 != '\0') goto LAB_00408aca;
                          if (local_288 == '\0') {
                            *(undefined8 *)(puVar40 + -8) = 0x4091d8;
                            local_300 = (stat *)FUN_0040dea0(0,3,ppbVar23);
                            pcVar42 = "%s: failed to get extents info";
                            goto LAB_00408b71;
                          }
                          bVar48 = *(int *)((long)local_368 + 0xc) == 3;
                          ppbVar23 = (byte **)0x0;
                          if (local_32b != '\0') {
                            ppbVar23 = local_348;
                          }
                          local_348 = ppbVar23;
                          uVar32 = extraout_RDX_00;
                          param_6 = local_368;
                          param_1 = local_340;
                          goto LAB_00408297;
                        }
                        if (local_2a8._24_8_ != (byte *)0x0) {
                          pbVar24 = (byte *)0x0;
                          psVar33 = psVar46;
                          psVar43 = psVar21;
                          do {
                            ppsVar1 = (stat **)((long)local_280 + (long)pbVar24 * 0x18);
                            psVar21 = *ppsVar1;
                            psVar46 = ppsVar1[1];
                            if ((long)psVar2 <
                                (long)(((stat *)(((stat *)(psVar46->__unused + -0xf))->__unused +
                                                -0xf))->__unused + 0xfffffffffffffff1) +
                                (long)((stat *)(((stat *)(((stat *)(psVar21->__unused + -0xf))->
                                                          __unused + -0xf))->__unused + -0xf))->
                                      __unused + 0xffffffffffffff88U) {
                              if ((long)psVar2 < (long)psVar21) {
                                psVar21 = psVar2;
                              }
                              psVar46 = (stat *)((long)psVar2 - (long)psVar21);
                            }
                            uVar30 = 0;
                            psVar31 = (stat *)((long)psVar21 + (-(long)psVar33 - (long)psVar43));
                            if (psVar31 != (stat *)0x0) {
                              local_318 = psVar31;
                              *(undefined8 *)(puVar40 + -8) = 0x4089d8;
                              _Var25 = lseek((int)local_2c8,(__off_t)psVar21,0);
                              ppbVar3 = local_2c0;
                              psVar31 = local_318;
                              ppbVar23 = local_340;
                              if (_Var25 < 0) {
                                *(undefined8 *)(puVar40 + -8) = 0x409000;
                                local_300 = (stat *)FUN_0040ddd0(4,ppbVar23);
                                pcVar42 = "cannot lseek %s";
LAB_00409011:
                                *(undefined8 *)(puVar40 + -8) = 0x409018;
                                uVar17 = dcgettext(0,pcVar42,5);
                                *(undefined8 *)(puVar40 + -8) = 0x409020;
                                piVar15 = __errno_location();
                                uVar16 = local_300;
                                iVar9 = *piVar15;
                    /* WARNING: Subroutine does not return */
                                *(undefined **)(puVar40 + -8) = &UNK_00409035;
                                error(0,iVar9,uVar17,uVar16);
                              }
                              if (local_330 == 1) {
                                uVar32 = (ulong)local_2f0 & 0xffffffff;
                                *(undefined8 *)(puVar40 + -8) = 0x408a53;
                                cVar4 = FUN_00404690(uVar32,psVar31);
                                ppbVar23 = local_2c0;
                                if (cVar4 == '\0') {
                                  *(undefined8 *)(puVar40 + -8) = 0x4091b3;
                                  local_300 = (stat *)FUN_0040dea0(0,3,ppbVar23);
                                  pcVar42 = "%s: write failed";
                                  goto LAB_00409011;
                                }
                                ppbVar23 = (byte **)0x0;
                                goto LAB_004088f5;
                              }
                              bVar48 = local_330 == 3;
                              uVar30 = (ulong)local_2f0 & 0xffffffff;
                              *(undefined8 *)(puVar40 + -8) = 0x408a0d;
                              uVar10 = FUN_00404ad0(uVar30,ppbVar3,bVar48);
                              uVar30 = (ulong)uVar10;
                              if ((char)uVar10 != '\0') goto LAB_004088e0;
LAB_00408a18:
                              pvVar20 = local_280;
                              param_1 = local_340;
                              param_6 = local_368;
                              uVar10 = (uint)local_32a;
                              uVar30 = (ulong)local_360;
                              *(undefined8 *)(puVar40 + -8) = 0x408a40;
                              free(pvVar20);
                              goto LAB_0040869e;
                            }
LAB_004088e0:
                            ppbVar23 = (byte **)0x0;
                            if (local_330 == 3) {
                              ppbVar23 = local_348;
                            }
LAB_004088f5:
                            ppbVar3 = local_338;
                            lVar28 = local_358;
                            *(byte **)(puVar40 + -0x10) = &local_2b1;
                            uVar32 = (ulong)local_2f0 & 0xffffffff;
                            *(char **)(puVar40 + -0x18) = &local_2b0;
                            uVar29 = (ulong)local_2c8 & 0xffffffff;
                            *(stat **)(puVar40 + -0x20) = psVar46;
                            *(byte ***)(puVar40 + -0x28) = local_2c0;
                            *(byte ***)(puVar40 + -0x30) = local_340;
                            *(undefined8 *)(puVar40 + -0x38) = 0x40893c;
                            cVar4 = FUN_00404b90(uVar29,uVar32,lVar28,ppbVar3,ppbVar23,1);
                            if (cVar4 == '\0') goto LAB_00408a18;
                            psVar31 = (stat *)((long)psVar21->__unused +
                                              CONCAT71(uStack_2af,local_2b0) + -0x78);
                            if (CONCAT71(uStack_2af,local_2b0) != 0) {
                              uVar30 = (ulong)local_2b1;
                            }
                            if (psVar2 == psVar31) {
                              local_287 = '\x01';
                              break;
                            }
                            pbVar24 = (byte *)(ulong)((int)pbVar24 + 1);
                            psVar33 = psVar46;
                            psVar43 = psVar21;
                          } while (pbVar24 < local_2a8._24_8_);
                        }
                        pvVar20 = local_280;
                        local_318 = psVar31;
                        *(undefined8 *)(puVar40 + -8) = 0x408a7d;
                        free(pvVar20);
                        psVar31 = local_318;
                        local_280 = (void *)0x0;
                        local_2a8._24_8_ = (byte *)0x0;
                      } while (local_287 == '\0');
                      local_318 = (stat *)((ulong)local_318 & 0xffffffffffffff00 | uVar30 & 0xff);
                      uVar10 = (uint)local_32a;
                      uVar30 = (ulong)local_360;
LAB_00408aca:
                      param_1 = local_340;
                      param_6 = local_368;
                      psVar21 = local_370;
                      if (((long)psVar31 < (long)local_370) || ((byte)local_318 != '\0')) {
                        if (local_330 == 1) {
                          uVar32 = (ulong)local_2f0 & 0xffffffff;
                          lVar28 = (long)local_370 - (long)psVar31;
                          *(undefined8 *)(puVar40 + -8) = 0x409203;
                          cVar4 = FUN_00404690(uVar32,lVar28);
                          if (cVar4 == '\0') goto LAB_00408f74;
                          goto LAB_004082ef;
                        }
                        local_300 = psVar31;
                        *(undefined8 *)(puVar40 + -8) = 0x408b0a;
                        iVar9 = ftruncate((int)local_2f0,(__off_t)psVar21);
                        psVar46 = local_300;
                        if (iVar9 == 0) {
                          if ((local_330 == 3) && ((long)psVar31 < (long)psVar21)) {
                            uVar32 = (ulong)local_2f0 & 0xffffffff;
                            lVar28 = (long)local_370 - (long)local_300;
                            *(undefined8 *)(puVar40 + -8) = 0x408b47;
                            iVar9 = FUN_00404740(uVar32,psVar46,lVar28);
                            ppbVar23 = local_2c0;
                            if (iVar9 < 0) {
                              *(undefined8 *)(puVar40 + -8) = 0x408b60;
                              local_300 = (stat *)FUN_0040ddd0(4,ppbVar23);
                              pcVar42 = "error deallocating %s";
                              goto LAB_00408b71;
                            }
                          }
                          goto LAB_004082ef;
                        }
LAB_00408f74:
                        ppbVar23 = local_2c0;
                        *(undefined8 *)(puVar40 + -8) = 0x408f85;
                        local_300 = (stat *)FUN_0040ddd0(4,ppbVar23);
                        pcVar42 = "failed to extend %s";
LAB_00408b71:
                        *(undefined8 *)(puVar40 + -8) = 0x408b78;
                        uVar17 = dcgettext(0,pcVar42,5);
                        *(undefined8 *)(puVar40 + -8) = 0x408b80;
                        piVar15 = __errno_location();
                        uVar16 = local_300;
                        iVar9 = *piVar15;
                    /* WARNING: Subroutine does not return */
                        *(undefined **)(puVar40 + -8) = &UNK_00408b95;
                        error(0,iVar9,uVar17,uVar16);
                      }
LAB_004082ef:
                      ppbVar23 = local_2c0;
                      if (*(char *)((long)param_6 + 0x1f) != '\0') {
                        uVar32 = (ulong)local_2f0 & 0xffffffff;
                        local_2a8._0_8_ = (byte *)local_278.st_atim.tv_sec;
                        local_2a8._8_8_ = (byte *)local_278.st_atim.tv_nsec;
                        local_2a8._16_8_ = (byte *)local_278.st_mtim.tv_sec;
                        local_2a8._24_8_ = (byte *)local_278.st_mtim.tv_nsec;
                        *(undefined8 *)(puVar40 + -8) = 0x408645;
                        iVar9 = FUN_0040f460(uVar32,ppbVar23,local_2a8);
                        ppbVar23 = local_2c0;
                        if (iVar9 != 0) {
                          *(undefined8 *)(puVar40 + -8) = 0x40865e;
                          local_300 = (stat *)FUN_0040ddd0(4,ppbVar23);
                          *(undefined8 *)(puVar40 + -8) = 0x408676;
                          uVar17 = dcgettext(0,"preserving times for %s",5);
                          *(undefined8 *)(puVar40 + -8) = 0x40867e;
                          piVar15 = __errno_location();
                          uVar16 = local_300;
                          iVar9 = *piVar15;
                    /* WARNING: Subroutine does not return */
                          *(undefined **)(puVar40 + -8) = &UNK_00408693;
                          error(0,iVar9,uVar17,uVar16);
                        }
                      }
                      ppbVar23 = local_2c0;
                      psVar46 = local_2e0;
                      psVar21 = local_328;
                      if ((*(char *)((long)param_6 + 0x1d) != '\0') &&
                         ((local_278.st_uid != _Stack_ac || (local_278.st_gid != (__gid_t)local_a8))
                         )) {
                        uVar29 = (ulong)local_2d8 & 0xff;
                        uVar32 = (ulong)local_2f0 & 0xffffffff;
                        *(undefined8 *)(puVar40 + -8) = 0x408348;
                        iVar9 = FUN_004051e0(param_6,ppbVar23,uVar32,psVar46,uVar29,psVar21);
                        if (iVar9 == -1) goto LAB_0040869e;
                        if (iVar9 == 0) {
                          local_320 = (byte **)((ulong)local_320 & 0xfffffffffffff1ff);
                        }
                      }
                      if ((*(char *)((long)param_6 + 0x27) != '\0') &&
                         (((ulong)stack0xffffffffffffff50 & 0x80) == 0)) {
                        *(undefined8 *)(puVar40 + -8) = 0x408c54;
                        _Var14 = geteuid();
                        ppbVar23 = local_2c0;
                        if (_Var14 != 0) {
                          uVar32 = (ulong)local_2f0 & 0xffffffff;
                          *(undefined8 *)(puVar40 + -8) = 0x408c73;
                          iVar9 = FUN_00404780(uVar32,ppbVar23,0x180);
                          ppbVar23 = local_2c0;
                          if (iVar9 == 0) {
                            uVar32 = (ulong)local_2f0 & 0xffffffff;
                            uVar12 = ~local_350 & local_35c;
                            *(undefined8 *)(puVar40 + -8) = 0x408c9b;
                            FUN_00404780(uVar32,ppbVar23,uVar12);
                          }
                        }
                      }
                      ppbVar23 = local_2c0;
                      if (((ulong)param_6[3] & 0xff0000000000ff) == 0) {
                        if (*(char *)((long)param_6 + 0x2b) == '\0') {
                          if (*(char *)(param_6 + 4) == '\0') {
                            local_300._0_1_ = 1;
                            if (local_350 != 0) {
                              local_300 = (stat *)CONCAT71(local_300._1_7_,1);
                              *(undefined8 *)(puVar40 + -8) = 0x409082;
                              uVar11 = FUN_004053d0();
                              ppbVar23 = local_2c0;
                              uVar12 = local_35c;
                              if ((local_350 & ~uVar11) != 0) {
                                uVar32 = (ulong)local_2f0 & 0xffffffff;
                                *(undefined8 *)(puVar40 + -8) = 0x4090b0;
                                iVar9 = FUN_00404780(uVar32,ppbVar23,uVar12);
                                ppbVar23 = local_2c0;
                                if (iVar9 != 0) {
                                  *(undefined8 *)(puVar40 + -8) = 0x4090d1;
                                  local_300 = (stat *)FUN_0040ddd0(4,ppbVar23);
                                  *(undefined8 *)(puVar40 + -8) = 0x4090e9;
                                  uVar17 = dcgettext(0,"preserving permissions for %s",5);
                                  *(undefined8 *)(puVar40 + -8) = 0x4090f1;
                                  piVar15 = __errno_location();
                                  uVar16 = local_300;
                                  iVar9 = *piVar15;
                    /* WARNING: Subroutine does not return */
                                  *(undefined **)(puVar40 + -8) = &UNK_00409106;
                                  error(0,iVar9,uVar17,uVar16);
                                }
                              }
                            }
                            goto LAB_004083b0;
                          }
                          *(undefined8 *)(puVar40 + -8) = 0x409110;
                          uVar12 = FUN_004053d0();
                          uVar12 = ~uVar12 & 0x1b6;
                        }
                        else {
                          uVar12 = *(uint *)(param_6 + 2);
                        }
                        ppbVar23 = local_2c0;
                        uVar32 = (ulong)local_2f0 & 0xffffffff;
                        *(undefined8 *)(puVar40 + -8) = 0x408bc9;
                        iVar9 = FUN_00409bd0(ppbVar23,uVar32,uVar12);
                        local_300._0_1_ = iVar9 == 0;
                      }
                      else {
                        uVar45 = (ulong)local_320 & 0xffffffff;
                        uVar32 = (ulong)local_2f0 & 0xffffffff;
                        uVar29 = (ulong)local_2c8 & 0xffffffff;
                        *(undefined8 *)(puVar40 + -8) = 0x4087e0;
                        iVar9 = FUN_00409b40(param_1,uVar29,ppbVar23,uVar32,uVar45);
                        local_300._0_1_ = 1;
                        if (iVar9 != 0) {
                          local_300._0_1_ = *(byte *)((long)param_6 + 0x24) ^ 1;
                        }
                      }
                    }
LAB_004083b0:
                    local_300 = (stat *)((ulong)local_300 & 0xffffffffffffff00 |
                                        (ulong)(byte)local_300);
                    *(undefined8 *)(puVar40 + -8) = 0x4083c2;
                    iVar9 = close((int)local_2f0);
                    ppbVar23 = local_2c0;
                    bVar5 = (byte)local_300;
                    if (iVar9 < 0) {
                      *(undefined8 *)(puVar40 + -8) = 0x4083e3;
                      local_2f0 = (byte **)FUN_0040ddd0(4,ppbVar23);
                      *(undefined8 *)(puVar40 + -8) = 0x4083fb;
                      uVar17 = dcgettext(0,"failed to close %s",5);
                      *(undefined8 *)(puVar40 + -8) = 0x408403;
                      piVar15 = __errno_location();
                      uVar16 = local_2f0;
                      iVar9 = *piVar15;
                    /* WARNING: Subroutine does not return */
                      *(undefined **)(puVar40 + -8) = &UNK_00408418;
                      error(0,iVar9,uVar17,uVar16);
                    }
                    goto LAB_00406eb7;
                  }
                }
                else {
                  iVar9 = 0x15;
                  if (*(byte *)local_2c0 != 0) {
                    uVar30 = 0xffffffffffffffff;
                    ppbVar23 = local_2c0;
                    do {
                      if (uVar30 == 0) break;
                      uVar30 = uVar30 - 1;
                      bVar5 = *(byte *)ppbVar23;
                      ppbVar23 = (byte **)((long)ppbVar23 + (ulong)bVar8 * -2 + 1);
                    } while (bVar5 != 0);
                    iVar9 = (*(byte *)((long)local_2c0 + (~uVar30 - 2)) != 0x2f) + 0x14;
                  }
                }
              }
              else {
                iVar9 = 0x11;
                local_2d8 = (stat *)((ulong)local_2d8 & 0xffffffffffffff00 |
                                    (ulong)*(byte *)(param_6 + 3));
                if (*(byte *)(param_6 + 3) == 0) {
                  *(undefined8 *)(puVar40 + -8) = 0x4084ab;
                  iVar13 = __lxstat(1,(char *)ppbVar23,(stat *)local_c8);
                  ppbVar23 = local_2c0;
                  if ((iVar13 == 0) && ((local_c8._24_4_ & 0xf000) == 0xa000)) {
                    if (*(char *)(param_6 + 6) == '\0') {
                      local_2f0 = (byte **)((ulong)local_2f0 & 0xffffffffffffff00);
                      *(undefined8 *)(puVar40 + -8) = 0x409232;
                      uVar16 = FUN_0040ddd0(4,ppbVar23);
                      *(undefined8 *)(puVar40 + -8) = 0x409246;
                      uVar17 = dcgettext(0,"not writing through dangling symlink %s",5);
                    /* WARNING: Subroutine does not return */
                      *(undefined **)(puVar40 + -8) = &UNK_00409257;
                      error(0,0,uVar17,uVar16);
                    }
                    uVar32 = (ulong)local_2e8 & 0xffffffff;
                    *(undefined8 *)(puVar40 + -8) = 0x4084e8;
                    uVar12 = FUN_0040ac50(ppbVar23,0x41,uVar32);
                    local_2f0 = (byte **)((ulong)local_2f0 & 0xffffffff00000000 | (ulong)uVar12);
                    iVar9 = *(int *)&local_300->st_dev;
                  }
                  goto LAB_004084f8;
                }
              }
LAB_00406e6a:
              ppbVar23 = local_2c0;
              *(undefined8 *)(puVar40 + -8) = 0x406e7b;
              local_2e8 = (byte **)FUN_0040ddd0(4,ppbVar23);
              *(undefined8 *)(puVar40 + -8) = 0x406e93;
              uVar16 = dcgettext(0,"cannot create regular file %s",5);
              pcVar42 = (char *)local_2e8;
LAB_00406ea0:
                    /* WARNING: Subroutine does not return */
              *(undefined **)(puVar40 + -8) = &UNK_00406ea9;
              error(0,iVar9,uVar16,pcVar42);
            }
            cVar4 = *(char *)((long)param_6 + 0x23);
            *(undefined8 *)(puVar40 + -8) = 0x406d7b;
            uVar12 = FUN_0040ac50(ppbVar23,(-(uint)(cVar4 == '\0') & 0xfffffe00) + 0x201);
            local_2f0 = (byte **)((ulong)local_2f0 & 0xffffffff00000000 | (ulong)uVar12);
            if (((ulong)param_6[4] & 0xff000000ff00) != 0) {
              if ((int)uVar12 < 0) goto LAB_00406d9f;
              uVar47 = *(undefined *)((long)param_6 + 0x25);
              *(undefined8 *)(puVar40 + -8) = 0x4086b8;
              local_300._0_1_ = FUN_00405090(ppbVar23,uVar47,0,param_6);
              if ((byte)local_300 != 0) {
LAB_00408073:
                local_350 = 0;
                goto LAB_0040807d;
              }
              pcVar42 = (char *)((ulong)local_2d8 & 0xffffffffffffff00);
              local_2d8 = (stat *)((ulong)pcVar42 | (ulong)*(byte *)((long)param_6 + 0x26));
              if (*(byte *)((long)param_6 + 0x26) == 0) goto LAB_00408073;
              local_2d8 = (stat *)pcVar42;
              local_2e8 = (byte **)0x0;
              goto LAB_004083b0;
            }
            if (-1 < (int)uVar12) goto LAB_00408073;
LAB_00406d9f:
            *(undefined8 *)(puVar40 + -8) = 0x406da4;
            piVar15 = __errno_location();
            ppbVar23 = local_2c0;
            if (*(char *)((long)param_6 + 0x16) == '\0') {
              iVar9 = *piVar15;
              if ((iVar9 == 2) && (*(char *)(param_6 + 3) == '\0')) {
                local_350 = 0;
                goto LAB_00406df0;
              }
              local_2d8 = (stat *)((ulong)local_2d8 & 0xffffffffffffff00);
              goto LAB_00406e6a;
            }
            *(undefined8 *)(puVar40 + -8) = 0x406dbe;
            iVar9 = unlink((char *)ppbVar23);
            ppbVar23 = local_2c0;
            if (iVar9 != 0) {
              *(undefined8 *)(puVar40 + -8) = 0x40904b;
              local_2e8 = (byte **)FUN_0040ddd0(4,ppbVar23);
              *(undefined8 *)(puVar40 + -8) = 0x409063;
              uVar16 = dcgettext(0,"cannot remove %s",5);
              iVar9 = *piVar15;
              pcVar42 = (char *)local_2e8;
              goto LAB_00406ea0;
            }
            if (*(char *)((long)param_6 + 0x2e) != '\0') {
              *(undefined8 *)(puVar40 + -8) = 0x408fac;
              uVar16 = FUN_0040ddd0(4,ppbVar23);
              *(undefined8 *)(puVar40 + -8) = 0x408fc0;
              uVar17 = dcgettext(0,"removed %s\n",5);
              *(undefined8 *)(puVar40 + -8) = 0x408fd2;
              __printf_chk(1,uVar17,uVar16);
            }
            ppbVar23 = local_2c0;
            uVar12 = local_35c;
            local_2d8 = (stat *)((ulong)local_2d8 & 0xffffffffffffff00 |
                                (ulong)*(byte *)((long)param_6 + 0x21));
            local_350 = (uint)local_310;
            if (*(byte *)((long)param_6 + 0x21) == 0) goto LAB_00406df0;
            *(undefined8 *)(puVar40 + -8) = 0x408ee2;
            bVar5 = FUN_00404fc0(param_1,ppbVar23,uVar12,1,param_6);
            if (bVar5 != 0) goto LAB_00407e43;
            local_2e8 = (byte **)0x0;
LAB_00406eb7:
            local_2f0 = (byte **)((ulong)local_2f0 & 0xffffffffffffff00 | (ulong)bVar5);
            *(undefined8 *)(puVar40 + -8) = 0x406ec9;
            iVar9 = close((int)local_2c8);
            pvVar20 = local_2e8;
            if (iVar9 < 0) {
              *(undefined8 *)(puVar40 + -8) = 0x407bf8;
              uVar16 = FUN_0040ddd0(4,param_1);
              *(undefined8 *)(puVar40 + -8) = 0x407c0c;
              uVar17 = dcgettext(0,"failed to close %s",5);
              *(undefined8 *)(puVar40 + -8) = 0x407c14;
              piVar15 = __errno_location();
              iVar9 = *piVar15;
                    /* WARNING: Subroutine does not return */
              *(undefined **)(puVar40 + -8) = &UNK_00407c25;
              error(0,iVar9,uVar17,uVar16);
            }
            local_2c8 = (int *)((ulong)local_2c8 & 0xffffffffffffff00 | (ulong)local_2f0 & 0xff);
            *(undefined8 *)(puVar40 + -8) = 0x406eec;
            free(pvVar20);
            local_2f0 = (byte **)((ulong)local_2f0 & 0xffffffffffffff00);
            local_2e8 = (byte **)((ulong)local_2e8 & 0xffffffffffffff00 | (ulong)local_2c8 & 0xff);
            bVar8 = (byte)local_2c8;
          }
          else {
            uVar47 = *(undefined *)((long)param_6 + 0x16);
            *(undefined8 *)(puVar40 + -8) = 0x40697d;
            bVar8 = FUN_004049c0(param_1,ppbVar23,uVar47,0);
            local_2c8._0_1_ = 0;
            local_329 = 0;
            local_2e8 = (byte **)((ulong)local_2e8 & 0xffffffffffffff00 | (ulong)bVar8);
          }
          puVar35 = puVar40;
          if (bVar8 == 0) goto LAB_00406380;
        }
        else {
          uVar47 = *(byte *)param_1 < 0x2f;
          uVar49 = *(byte *)param_1 == 0x2f;
          if (!(bool)uVar49) {
            *(undefined8 *)(puVar40 + -8) = 0x405956;
            __filename = (byte *)FUN_0040aa60(ppbVar23);
            lVar28 = 2;
            pbVar24 = &DAT_00412a7e;
            pbVar44 = __filename;
            do {
              if (lVar28 == 0) break;
              lVar28 = lVar28 + -1;
              uVar47 = *pbVar24 < *pbVar44;
              uVar49 = *pbVar24 == *pbVar44;
              pbVar24 = pbVar24 + (ulong)bVar8 * -2 + 1;
              pbVar44 = pbVar44 + (ulong)bVar8 * -2 + 1;
            } while ((bool)uVar49);
            if ((!(bool)uVar47 && !(bool)uVar49) != (bool)uVar47) {
              *(undefined8 *)(puVar40 + -8) = 0x407216;
              iVar9 = __xstat(1,".",(stat *)&local_158);
              if (iVar9 == 0) {
                *(undefined8 *)(puVar40 + -8) = 0x407232;
                iVar9 = __xstat(1,(char *)__filename,(stat *)local_c8);
                if ((iVar9 == 0) &&
                   (((byte *)CONCAT44(uStack_14c,uStack_150) != local_c8._8_8_ ||
                    ((byte *)CONCAT44(uStack_154,local_158) != local_c8._0_8_)))) {
                  *(undefined8 *)(puVar40 + -8) = 0x407256;
                  free(__filename);
                  ppbVar23 = local_2c0;
                  *(undefined8 *)(puVar40 + -8) = 0x407269;
                  uVar16 = FUN_0040dea0(0,3,ppbVar23);
                  pcVar42 = "%s: can make relative symbolic links only in current directory";
LAB_00406222:
                  *(undefined8 *)(puVar40 + -8) = 0x406229;
                  uVar17 = dcgettext(0,pcVar42,5);
                    /* WARNING: Subroutine does not return */
                  *(undefined **)(puVar40 + -8) = &UNK_0040623a;
                  error(0,0,uVar17,uVar16);
                }
              }
            }
            *(undefined8 *)(puVar40 + -8) = 0x40597d;
            free(__filename);
          }
          ppbVar23 = local_2c0;
          uVar47 = *(undefined *)((long)param_6 + 0x16);
          *(undefined8 *)(puVar40 + -8) = 0x405996;
          iVar9 = FUN_00409a40(param_1,0xffffff9c,ppbVar23,uVar47);
          if (iVar9 < 0) {
            *(undefined8 *)(puVar40 + -8) = 0x407780;
            uVar16 = FUN_0040dcf0(1,4,param_1);
            ppbVar23 = local_2c0;
            *(undefined8 *)(puVar40 + -8) = 0x407796;
            uVar17 = FUN_0040dcf0(0,4,ppbVar23);
            *(undefined8 *)(puVar40 + -8) = 0x4077aa;
            uVar18 = dcgettext(0,"cannot create symbolic link %s to %s",5);
            *(undefined8 *)(puVar40 + -8) = 0x4077b2;
            piVar15 = __errno_location();
            iVar9 = *piVar15;
                    /* WARNING: Subroutine does not return */
            *(undefined **)(puVar40 + -8) = &UNK_004077c6;
            error(0,iVar9,uVar18,uVar17,uVar16);
          }
          local_329 = 0;
          local_2c8._0_1_ = 0;
          local_2e8 = (byte **)((ulong)local_2e8 & 0xffffffffffffff00 | (ulong)local_2f0 & 0xff);
        }
LAB_004059b5:
        ppbVar23 = local_2c0;
        bVar48 = local_2cc != 0x4000;
        if (((((byte)local_2d8 == '\0') && (*(char *)((long)param_6 + 0x14) != '\x01')) && (bVar48))
           && (((ulong)param_6[4] & 0xff000000ff00) != 0)) {
          uVar47 = *(undefined *)((long)param_6 + 0x25);
          local_2c8 = (int *)((ulong)local_2c8 & 0xffffffffffffff00 | (ulong)(byte)local_2c8);
          *(undefined8 *)(puVar36 + -8) = 0x405a05;
          cVar4 = FUN_00405090(ppbVar23,uVar47,0,param_6);
          if ((cVar4 == '\0') && (puVar35 = puVar36, *(char *)((long)param_6 + 0x26) != '\0'))
          goto LAB_00406380;
        }
        ppbVar23 = local_2c0;
        if (((char)uVar30 != '\0') && (param_6[7] != (byte *)0x0)) {
          local_2c8 = (int *)((ulong)local_2c8 & 0xffffffffffffff00 | (ulong)(byte)local_2c8);
          *(undefined8 *)(puVar36 + -8) = 0x405a4a;
          iVar9 = __lxstat(1,(char *)ppbVar23,(stat *)local_c8);
          ppbVar23 = local_2c0;
          if (iVar9 == 0) {
            pbVar24 = param_6[7];
            *(undefined8 *)(puVar36 + -8) = 0x405a6d;
            FUN_0040aca0(pbVar24,ppbVar23,local_c8);
          }
        }
        ppbVar23 = local_2c0;
        if (((*(char *)((long)param_6 + 0x17) != '\0') && (bVar48)) || ((byte)local_2c8 != 0))
        goto LAB_00406170;
        if (*(char *)((long)param_6 + 0x1f) == '\0') {
LAB_00405b50:
          if ((char)local_2f0 != '\0') goto LAB_00406170;
        }
        else {
          local_c8._0_8_ = (byte *)local_278.st_atim.tv_sec;
          local_c8._8_8_ = (byte *)local_278.st_atim.tv_nsec;
          local_c8._16_8_ = (byte *)local_278.st_mtim.tv_sec;
          stack0xffffffffffffff50 = (byte *)local_278.st_mtim.tv_nsec;
          if ((char)local_2f0 != '\0') {
            *(undefined8 *)(puVar36 + -8) = 0x405af4;
            iVar9 = FUN_0040f8b0();
            if (iVar9 != 0) {
              *(undefined8 *)(puVar36 + -8) = 0x405afd;
              piVar15 = __errno_location();
              if (*piVar15 != 0x26) goto LAB_00405b02;
            }
            goto LAB_00405b50;
          }
          *(undefined8 *)(puVar36 + -8) = 0x407195;
          iVar9 = FUN_0040f8a0(ppbVar23,local_c8);
          if (iVar9 != 0) {
LAB_00405b02:
            ppbVar23 = local_2c0;
            *(undefined8 *)(puVar36 + -8) = 0x405b13;
            uVar16 = FUN_0040ddd0(4,ppbVar23);
            *(undefined8 *)(puVar36 + -8) = 0x405b27;
            uVar17 = dcgettext(0,"preserving times for %s",5);
            *(undefined8 *)(puVar36 + -8) = 0x405b2f;
            piVar15 = __errno_location();
            iVar9 = *piVar15;
                    /* WARNING: Subroutine does not return */
            *(undefined **)(puVar36 + -8) = &UNK_00405b40;
            error(0,iVar9,uVar17,uVar16);
          }
        }
        ppbVar23 = local_2c0;
        psVar21 = local_2e0;
        if ((*(char *)((long)param_6 + 0x1d) != '\0') &&
           ((((byte)local_2d8 != '\0' || (local_278.st_uid != local_1e8.st_uid)) ||
            (local_278.st_gid != local_1e8.st_gid)))) {
          uVar30 = (ulong)local_2d8 & 0xff;
          *(undefined8 *)(puVar36 + -8) = 0x405ba9;
          iVar9 = FUN_004051e0(param_6,ppbVar23,0xffffffff,psVar21,uVar30,&local_1e8);
          if (iVar9 == -1) {
            return 0;
          }
          uVar12 = local_2d0 & 0xfffff1ff;
          if (iVar9 != 0) {
            uVar12 = local_2d0;
          }
          local_2d0 = uVar12;
        }
        ppbVar23 = local_2c0;
        uVar12 = local_2d0;
        if (((ulong)param_6[3] & 0xff0000000000ff) != 0) {
          *(undefined8 *)(puVar36 + -8) = 0x40762d;
          iVar9 = FUN_00409b40(param_1,0xffffffff,ppbVar23,0xffffffff,uVar12);
          if (iVar9 != 0) {
            if (*(char *)((long)param_6 + 0x24) != '\0') {
              return uVar10;
            }
            return (uint)(byte)local_2e8;
          }
          goto LAB_00406170;
        }
        if (*(char *)((long)param_6 + 0x2b) != '\0') {
          uVar12 = *(uint *)(param_6 + 2);
LAB_004078b1:
          ppbVar23 = local_2c0;
          *(undefined8 *)(puVar36 + -8) = 0x4078c2;
          iVar9 = FUN_00409bd0(ppbVar23,0xffffffff,uVar12);
          if (iVar9 != 0) {
            return uVar10;
          }
          return (uint)(byte)local_2e8;
        }
        if (*(char *)(param_6 + 4) != '\0') {
          *(undefined8 *)(puVar36 + -8) = 0x407a1a;
          uVar12 = FUN_004053d0();
          uVar12 = ~uVar12 & 0x1ff;
          goto LAB_004078b1;
        }
        if ((uint)local_310 == 0) {
LAB_00405c00:
          if (local_329 == 0) goto LAB_00406170;
        }
        else {
          *(undefined8 *)(puVar36 + -8) = 0x40612c;
          uVar10 = FUN_004053d0();
          ppbVar23 = local_2c0;
          local_310 = (stat *)((ulong)local_310 & 0xffffffff00000000 |
                              (ulong)((uint)local_310 & ~uVar10));
          if (((uint)local_310 & ~uVar10) == 0) goto LAB_00405c00;
          if (local_329 != 1) {
            if ((byte)local_2d8 != '\0') {
              *(undefined8 *)(puVar36 + -8) = 0x4085ca;
              iVar9 = __lxstat(1,(char *)ppbVar23,&local_1e8);
              param_1 = local_2c0;
              if (iVar9 != 0) {
LAB_00405ca7:
                *(undefined8 *)(puVar36 + -8) = 0x405cb4;
                uVar16 = FUN_0040ddd0(4,param_1);
                *(undefined8 *)(puVar36 + -8) = 0x405cc8;
                uVar17 = dcgettext(0,"cannot stat %s",5);
                *(undefined8 *)(puVar36 + -8) = 0x405cd0;
                piVar15 = __errno_location();
                iVar9 = *piVar15;
                    /* WARNING: Subroutine does not return */
                *(undefined8 *)(puVar36 + -8) = 0x405ce1;
                error(0,iVar9,uVar17,uVar16);
              }
            }
            local_34c = local_1e8.st_mode;
            if (((uint)local_310 & ~local_1e8.st_mode) == 0) goto LAB_00406170;
          }
        }
        ppbVar23 = local_2c0;
        local_310._0_4_ = local_34c | (uint)local_310;
        *(undefined8 *)(puVar36 + -8) = 0x405c25;
        iVar9 = chmod((char *)ppbVar23,(uint)local_310);
        ppbVar23 = local_2c0;
        if (iVar9 != 0) {
          *(undefined8 *)(puVar36 + -8) = 0x405c3e;
          uVar16 = FUN_0040ddd0(4,ppbVar23);
          *(undefined8 *)(puVar36 + -8) = 0x405c52;
          uVar17 = dcgettext(0,"preserving permissions for %s",5);
          *(undefined8 *)(puVar36 + -8) = 0x405c5a;
          piVar15 = __errno_location();
          iVar9 = *piVar15;
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)(puVar36 + -8) = 0x405c6b;
          error(0,iVar9,uVar17,uVar16);
        }
LAB_00406170:
        return (uint)(byte)local_2e8;
      }
      if (local_2cc != 0x4000) {
        *(undefined8 *)(puVar40 + -8) = 0x40591f;
        cVar4 = FUN_00404fc0(param_1,ppbVar23,uVar11);
        local_310 = (stat *)((ulong)local_310 & 0xffffffff00000000);
        if (cVar4 == '\0') {
          return uVar10;
        }
        goto LAB_00405931;
      }
      uVar32 = (ulong)local_2c8 & 0xffffffff;
      *(undefined8 *)(puVar40 + -8) = 0x4066fe;
      cVar4 = FUN_00404fc0(param_1,ppbVar23,uVar11,uVar32);
      if (cVar4 == '\0') {
        return uVar10;
      }
      local_310 = (stat *)((ulong)local_310 & 0xffffffff00000000 |
                          (ulong)uVar12 & 0xffffffff00000012);
      ppbVar23 = local_2f0;
joined_r0x004061df:
      for (; uVar16 = local_2c0, ppbVar23 != (byte **)0x0; ppbVar23 = (byte **)*ppbVar23) {
        if ((ppbVar23[1] == (byte *)local_278.st_ino) && (ppbVar23[2] == (byte *)local_278.st_dev))
        {
          *(undefined8 *)(puVar40 + -8) = 0x406215;
          uVar16 = FUN_0040ddd0(4,param_1);
          pcVar42 = "cannot copy cyclic symbolic link %s";
          goto LAB_00406222;
        }
      }
      puVar35 = puVar40 + -0x20;
      puVar36 = puVar40 + -0x20;
      local_320 = (byte **)((ulong)(puVar40 + -0x11) & 0xfffffffffffffff0);
      *local_320 = (byte *)local_2f0;
      local_320[1] = (byte *)local_278.st_ino;
      local_320[2] = (byte *)local_278.st_dev;
      if (((byte)local_2d8 != '\0') || ((local_1e8.st_mode & 0xf000) != 0x4000)) {
        *(undefined8 *)(puVar40 + -0x28) = 0x406414;
        iVar9 = mkdir((char *)uVar16,~(uint)local_310 & uVar12 & 0xfff);
        ppbVar23 = local_2c0;
        if (iVar9 != 0) {
          *(undefined8 *)(puVar40 + -0x28) = 0x407359;
          uVar16 = FUN_0040ddd0(4,ppbVar23);
          pcVar42 = "cannot create directory %s";
          goto LAB_00406360;
        }
        *(undefined8 *)(puVar40 + -0x28) = 0x406434;
        iVar9 = __lxstat(1,(char *)ppbVar23,&local_1e8);
        uVar12 = local_1e8.st_mode;
        ppbVar23 = local_2c0;
        if (iVar9 != 0) {
          *(undefined8 *)(puVar40 + -0x28) = 0x4079e4;
          uVar16 = FUN_0040ddd0(4,ppbVar23);
          pcVar42 = "cannot stat %s";
          puVar35 = puVar40 + -0x20;
          goto LAB_00406360;
        }
        local_329 = 0;
        if ((local_1e8.st_mode & 0x1c0) != 0x1c0) {
          uVar11 = local_1e8.st_mode | 0x1c0;
          *(undefined8 *)(puVar40 + -0x28) = 0x40646e;
          iVar9 = chmod((char *)ppbVar23,uVar11);
          ppbVar23 = local_2c0;
          local_34c = uVar12;
          local_329 = 1;
          if (iVar9 != 0) {
            *(undefined8 *)(puVar40 + -0x28) = 0x407e31;
            uVar16 = FUN_0040ddd0(4,ppbVar23);
            pcVar42 = "setting permissions for %s";
            puVar35 = puVar40 + -0x20;
            goto LAB_00406360;
          }
        }
        ppbVar23 = local_2c0;
        if (*param_8 == 0) {
          *(undefined8 *)(puVar40 + -0x28) = 0x407901;
          FUN_00409480(ppbVar23,local_1e8.st_ino,local_1e8.st_dev);
          *param_8 = 1;
        }
        ppbVar23 = local_2c0;
        if (*(char *)((long)param_6 + 0x2e) != '\0') {
          if (*(char *)(param_6 + 3) == '\0') {
            *(undefined8 *)(puVar40 + -0x28) = 0x407a70;
            FUN_004047e0(param_1,ppbVar23,0);
          }
          else {
            *(undefined8 *)(puVar40 + -0x28) = 0x4064b4;
            uVar16 = FUN_0040ddd0(4,ppbVar23);
            *(undefined8 *)(puVar40 + -0x28) = 0x4064c8;
            uVar17 = dcgettext(0,"created directory %s\n",5);
            *(undefined8 *)(puVar40 + -0x28) = 0x4064da;
            __printf_chk(1,uVar17,uVar16);
          }
        }
LAB_004064e0:
        bVar8 = local_300 != (stat *)0x0 & *(byte *)((long)param_6 + 0x1c);
        local_2e8 = (byte **)((ulong)local_2e8 & 0xffffffffffffff00 | (ulong)bVar8);
        if (bVar8 == 0) {
LAB_004064ff:
          local_c8._0_8_ = *param_6;
          local_c8._8_8_ = param_6[1];
          local_c8._16_8_ = param_6[2];
          stack0xffffffffffffff50 = param_6[3];
          local_a8 = param_6[4];
          pbStack_a0 = param_6[5];
          local_98 = param_6[6];
          ppbStack_90 = (byte **)param_6[7];
          local_88 = param_6[8];
          *(undefined8 *)(puVar40 + -0x28) = 0x406548;
          ppbVar23 = (byte **)FUN_0040e7f0(param_1,2);
          local_338 = ppbVar23;
          if (ppbVar23 == (byte **)0x0) {
            *(undefined8 *)(puVar40 + -0x28) = 0x407ddf;
            local_2c8 = (int *)FUN_0040ddd0(4,param_1);
            *(undefined8 *)(puVar40 + -0x28) = 0x407df7;
            uVar17 = dcgettext(0,"cannot access %s",5);
            *(undefined8 *)(puVar40 + -0x28) = 0x407dff;
            piVar15 = __errno_location();
            uVar16 = local_2c8;
            iVar9 = *piVar15;
                    /* WARNING: Subroutine does not return */
            *(undefined **)(puVar40 + -0x28) = &UNK_00407e14;
            error(0,iVar9,uVar17,uVar16);
          }
          if (*(int *)((long)param_6 + 4) == 3) {
            local_c8._0_8_ = (byte *)CONCAT44(2,local_c8._0_4_);
          }
          if (*(char *)ppbVar23 == '\0') {
            bVar8 = 0;
            local_2e8 = (byte **)CONCAT71(local_2e8._1_7_,1);
          }
          else {
            local_340 = (byte **)((ulong)local_340 & 0xffffffffffffff00 | (ulong)(byte)uVar10);
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
              *(undefined8 *)(puVar40 + -0x28) = 0x406610;
              pvVar20 = (void *)FUN_0040af00(ppbVar3,ppbVar23,0);
              ppbVar3 = local_2c0;
              *(undefined8 *)(puVar40 + -0x28) = 0x406624;
              __ptr = (void *)FUN_0040af00(ppbVar3,ppbVar23,0);
              psVar46 = local_2e0;
              ppbVar3 = local_320;
              psVar21 = local_328;
              uVar30 = (ulong)local_2c8 & 0xffffffff;
              bVar5 = *param_8;
              *(undefined8 *)(puVar40 + -0x28) = 0;
              *(stat **)(puVar40 + -0x30) = local_300;
              *(stat **)(puVar40 + -0x38) = local_318;
              *(undefined8 *)(puVar40 + -0x40) = 0;
              local_158 = local_158 & 0xffffff00 | (uint)bVar5;
              *(undefined8 *)(puVar40 + -0x48) = 0x40666a;
              bVar5 = FUN_00405400(pvVar20,__ptr,uVar30,psVar46,ppbVar3,psVar21);
              local_2e8 = (byte **)((ulong)local_2e8 & 0xffffffffffffff00 |
                                   (ulong)((byte)local_2e8 & bVar5));
              *param_9 = *param_9 | local_2a8[0];
              *(undefined8 *)(puVar40 + -0x28) = 0x406687;
              free(__ptr);
              *(undefined8 *)(puVar40 + -0x28) = 0x40668f;
              free(pvVar20);
              if (local_2a8[0] != '\0') break;
              bVar8 = bVar8 | (byte)local_158;
              *(undefined8 *)(puVar40 + -0x28) = 0x4065ef;
              sVar19 = strlen((char *)ppbVar23);
              ppbVar23 = (byte **)((long)ppbVar23 + sVar19 + 1);
            } while (*(char *)ppbVar23 != '\0');
            uVar10 = (uint)(byte)local_340;
            uVar30 = (ulong)local_330;
            param_6 = local_348;
            param_1 = local_2f0;
          }
          ppbVar23 = local_338;
          *(undefined8 *)(puVar40 + -0x28) = 0x4066c7;
          free(ppbVar23);
          *param_8 = bVar8;
          local_2f0 = (byte **)((ulong)local_2f0 & 0xffffffffffffff00);
          local_2c8._0_1_ = 0;
          puVar36 = puVar40 + -0x20;
        }
        else {
          local_2f0 = (byte **)((ulong)local_2f0 & 0xffffffffffffff00);
          local_2c8._0_1_ = 0;
          if ((byte *)local_300->st_dev == (byte *)local_278.st_dev) goto LAB_004064ff;
        }
        goto LAB_004059b5;
      }
      if (((ulong)param_6[4] & 0xff000000ff00) == 0) {
LAB_004075f4:
        local_329 = 0;
        local_310 = (stat *)((ulong)local_310 & 0xffffffff00000000);
        goto LAB_004064e0;
      }
      uVar47 = *(undefined *)((long)param_6 + 0x25);
      *(undefined8 *)(puVar40 + -0x28) = 0x407b5d;
      cVar4 = FUN_00405090(uVar16,uVar47,0);
      if ((cVar4 != '\0') || (puVar35 = puVar40 + -0x20, *(char *)((long)param_6 + 0x26) == '\0'))
      goto LAB_004075f4;
LAB_00406380:
      puVar40 = puVar35;
      if (*(char *)((long)param_6 + 0x25) == '\0') {
        if (local_2f8 == (stat *)0x0) {
          *(undefined8 *)(puVar40 + -8) = 0x4063ac;
          FUN_004093f0(local_278.st_ino,local_278.st_dev);
        }
LAB_00405e23:
        ppbVar23 = local_2c0;
        psVar21 = local_308;
        if (local_308 != (stat *)0x0) {
          *(undefined8 *)(puVar40 + -8) = 0x405e3f;
          iVar9 = rename((char *)psVar21,(char *)ppbVar23);
          ppbVar23 = local_2c0;
          if (iVar9 != 0) {
            *(undefined8 *)(puVar40 + -8) = 0x406c41;
            uVar16 = FUN_0040ddd0(4,ppbVar23);
            *(undefined8 *)(puVar40 + -8) = 0x406c55;
            uVar17 = dcgettext(0,"cannot un-backup %s",5);
            *(undefined8 *)(puVar40 + -8) = 0x406c5d;
            piVar15 = __errno_location();
            iVar9 = *piVar15;
                    /* WARNING: Subroutine does not return */
            *(undefined **)(puVar40 + -8) = &UNK_00406c6e;
            error(0,iVar9,uVar17,uVar16);
          }
          if (*(char *)((long)param_6 + 0x2e) != '\0') {
            *(undefined8 *)(puVar40 + -8) = 0x405e68;
            uVar16 = FUN_0040dcf0(1,4,ppbVar23);
            psVar21 = local_308;
            *(undefined8 *)(puVar40 + -8) = 0x405e7e;
            uVar17 = FUN_0040dcf0(0,4,psVar21);
            *(undefined8 *)(puVar40 + -8) = 0x405e92;
            uVar18 = dcgettext(0,"%s -> %s (unbackup)\n",5);
            *(undefined8 *)(puVar40 + -8) = 0x405ea7;
            __printf_chk(1,uVar18,uVar17,uVar16);
          }
        }
        return uVar10;
      }
    }
LAB_0040687d:
    *(undefined8 *)(puVar40 + -8) = 0x406882;
    FUN_004047a0();
    uVar16 = extraout_RDX;
    puVar41 = puVar40;
  }
  *(undefined8 *)(puVar41 + -8) = 0x406894;
  uVar16 = dcgettext(0,"-r not specified; omitting directory %s",uVar16);
  puVar38 = puVar41;
LAB_00406749:
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar38 + -8) = &UNK_0040675d;
  error(0,0,uVar16,uVar30);
}


void FUN_00409280(undefined8 param_1,undefined8 param_2,undefined param_3,uint *param_4,
                 undefined8 param_5,undefined8 param_6)

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
    DAT_0061b8e8 = param_2;
    DAT_0061b8f0 = param_1;
    FUN_00405400(param_1,param_2,param_3,0,0,param_4,1,local_9,param_5,param_6);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("VALID_REFLINK_MODE (co->reflink_mode)","src/copy.c",0xb63,"valid_options");
}


ulong FUN_004093a0(ulong *param_1,ulong param_2)

{
  return *param_1 % param_2;
}


ulong FUN_004093b0(long *param_1,long *param_2)

{
  if (*param_1 != *param_2) {
    return 0;
  }
  return param_2[1] & 0xffffffffffffff00U | (ulong)(param_1[1] == param_2[1]);
}


void FUN_004093d0(void *param_1)

{
  free(*(void **)((long)param_1 + 0x10));
  free(param_1);
  return;
}


void FUN_004093f0(undefined8 param_1,undefined8 param_2)

{
  void *__ptr;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  local_28 = param_1;
  local_20 = param_2;
  __ptr = (void *)FUN_0040c0f0(DAT_0061b8f8,&local_28);
  if (__ptr != (void *)0x0) {
    free(*(void **)((long)__ptr + 0x10));
    free(__ptr);
  }
  return;
}


undefined8 FUN_00409440(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 local_28;
  undefined8 local_20;
  
  local_28 = param_1;
  local_20 = param_2;
  lVar1 = FUN_0040b6a0(DAT_0061b8f8,&local_28);
  if (lVar1 != 0) {
    return *(undefined8 *)(lVar1 + 0x10);
  }
  return 0;
}


undefined8 FUN_00409480(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *__ptr;
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  __ptr = (undefined8 *)FUN_004100e0(0x18);
  uVar1 = FUN_00410310(param_1);
  uVar3 = DAT_0061b8f8;
  *__ptr = param_2;
  __ptr[2] = uVar1;
  __ptr[1] = param_3;
  puVar2 = (undefined8 *)FUN_0040c0b0(uVar3,__ptr);
  if (puVar2 != (undefined8 *)0x0) {
    uVar3 = 0;
    if (__ptr != puVar2) {
      free((void *)__ptr[2]);
      free(__ptr);
      uVar3 = puVar2[2];
    }
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00410330();
}


void FUN_00409500(void)

{
  DAT_0061b8f8 = FUN_0040b910(0x67,0,FUN_004093a0,FUN_004093b0,FUN_004093d0);
  if (DAT_0061b8f8 != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00410330();
}


void FUN_00409540(void)

{
  FUN_0040bb50(DAT_0061b8f8);
  return;
}


void FUN_00409550(undefined4 param_1,undefined4 *param_2)

{
  *param_2 = param_1;
  *(undefined8 *)(param_2 + 10) = 0;
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined2 *)(param_2 + 8) = 0;
  param_2[4] = 1;
  return;
}


bool FUN_00409580(int *param_1)

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
  undefined4 local_1020;
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
LAB_004097a0:
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
      FUN_00410330();
    }
    lVar2 = FUN_00410140(lVar3,uVar4 * 0x18);
    *(long *)(param_1 + 10) = lVar2;
    puVar7 = (ulong *)((long)puVar7 + (lVar2 - lVar3));
    if (local_1024 != 0) {
      if (0x7fffffffffffffff - local_1018[2] < local_1018[0]) {
LAB_004096f6:
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
          if (uVar6 < uVar8) goto LAB_004096b2;
          uVar10 = *(uint *)(puVar5 + 5);
LAB_0040971e:
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
            if (uVar8 <= uVar6) goto LAB_0040971e;
LAB_004096b2:
            if (uVar8 - uVar6 < uVar4) goto LAB_004097a0;
            *puVar5 = uVar8;
            puVar5[2] = (uVar6 + uVar4) - uVar8;
          }
        }
        if (local_1024 <= uVar9) break;
        puVar5 = local_1018 + (ulong)uVar9 * 7;
        uVar4 = local_1018[(ulong)uVar9 * 7 + 2];
        uVar6 = *puVar5;
        if (0x7fffffffffffffff - uVar4 < uVar6) goto LAB_004096f6;
      } while( true );
    }
    if ((*(byte *)(puVar7 + 2) & 1) != 0) {
      *(undefined *)((long)param_1 + 0x21) = 1;
LAB_00409806:
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
      goto LAB_00409806;
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


void FUN_00409850(char *param_1,int *param_2)

{
  linkat(*param_2,*(char **)(param_2 + 2),param_2[4],param_1,param_2[5]);
  return;
}


void * FUN_00409870(void *param_1,void *param_2)

{
  ulong __size;
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_0040ab40();
  __size = (lVar1 - (long)param_1) + 9;
  if ((0x100 < __size) && (param_2 = malloc(__size), param_2 == (void *)0x0)) {
    return (void *)0x0;
  }
  puVar2 = (undefined8 *)mempcpy(param_2,param_1,lVar1 - (long)param_1);
  *puVar2 = DAT_00415a38;
  *(undefined *)(puVar2 + 1) = DAT_00415a40;
  return param_2;
}


void FUN_004098e0(char *param_1,char **param_2)

{
  symlinkat(*param_2,*(int *)(param_2 + 1),param_1);
  return;
}


int FUN_00409900(int param_1,char *param_2,int param_3,char *param_4,int param_5,char param_6)

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
      __old = (char *)FUN_00409870(param_4,local_138);
      if (__old == (char *)0x0) {
        iVar1 = -1;
      }
      else {
        local_158[0] = param_1;
        local_150 = param_2;
        local_148 = param_3;
        local_144 = param_5;
        iVar1 = FUN_0040e910(__old,0,local_158,FUN_00409850,6);
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


int FUN_00409a40(char *param_1,int param_2,char *param_3,char param_4)

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
  __old = (char *)FUN_00409870(param_3,local_138);
  if (__old != (char *)0x0) {
    local_148 = param_1;
    local_140 = param_2;
    iVar1 = FUN_0040e910(__old,0,&local_148,FUN_004098e0,6);
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


int FUN_00409b40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int *piVar4;
  
  iVar1 = FUN_0040c440();
  if (iVar1 == -2) {
    uVar2 = FUN_0040e020(param_1);
    piVar4 = __errno_location();
                    /* WARNING: Subroutine does not return */
    error(0,*piVar4,&DAT_00415a9d,uVar2);
  }
  if (iVar1 == -1) {
    uVar2 = FUN_0040e020(param_3);
    uVar3 = dcgettext(0,"preserving permissions for %s",5);
    piVar4 = __errno_location();
                    /* WARNING: Subroutine does not return */
    error(0,*piVar4,uVar3,uVar2);
  }
  return iVar1;
}


undefined4 FUN_00409bd0(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int *piVar4;
  
  iVar1 = FUN_0040c480();
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_0040e020(param_1);
  uVar3 = dcgettext(0,"setting permissions for %s",5);
  piVar4 = __errno_location();
                    /* WARNING: Subroutine does not return */
  error(0,*piVar4,uVar3,uVar2);
}


char * FUN_00409c30(char *param_1,ulong param_2)

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


void FUN_00409d20(void)

{
  FUN_00403c80(1);
  return;
}


long FUN_00409d30(char *param_1,char **param_2,void *param_3,size_t param_4)

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
LAB_00409dc7:
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
          goto LAB_00409dc7;
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


void FUN_00409e50(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_3 == -1) {
    uVar1 = dcgettext(0,"invalid argument %s for %s",5);
  }
  else {
    uVar1 = dcgettext(0,"ambiguous argument %s for %s",5);
  }
  uVar2 = FUN_0040e000(1,param_1);
  uVar3 = FUN_0040dcf0(0,8,param_2);
                    /* WARNING: Subroutine does not return */
  error(0,0,uVar1,uVar3,uVar2);
}


void FUN_00409ed0(long *param_1,void *param_2,size_t param_3)

{
  FILE *__stream;
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
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
      uVar3 = FUN_0040e020(lVar5);
      __fprintf_chk(stderr,1,"\n  - %s",uVar3);
      lVar5 = param_1[lVar4];
      param_2 = (void *)((long)__s2 + param_3);
      __s1 = __s2;
      if (lVar5 == 0) goto LAB_00409fa0;
    }
    lVar4 = lVar4 + 1;
    param_2 = (void *)((long)__s2 + param_3);
    uVar3 = FUN_0040e020(lVar5);
    __fprintf_chk(stderr,1,&DAT_00415a9b,uVar3);
    lVar5 = param_1[lVar4];
  }
LAB_00409fa0:
  pcVar2 = stderr->_IO_write_ptr;
  if (pcVar2 < stderr->_IO_write_end) {
    stderr->_IO_write_ptr = pcVar2 + 1;
    *pcVar2 = '\n';
    return;
  }
  __overflow(stderr,10);
  return;
}


long FUN_00409ff0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,code *param_6)

{
  long lVar1;
  
  lVar1 = FUN_00409d30(param_2,param_3,param_4,param_5);
  if (lVar1 < 0) {
    FUN_00409e50(param_1,param_2,lVar1);
    FUN_00409ed0(param_3,param_4,param_5);
    (*param_6)();
    lVar1 = -1;
  }
  return lVar1;
}


long FUN_0040a060(void *param_1,long *param_2,void *param_3,size_t param_4)

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


void FUN_0040a0b0(char *param_1,long param_2)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  ulong uVar3;
  int *piVar4;
  ulong uVar5;
  ulong uVar6;
  
  puVar2 = (undefined2 *)FUN_0040ab40();
  uVar3 = FUN_0040aba0(puVar2);
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


void FUN_0040a180(char *param_1)

{
  char *pcVar1;
  
  if ((((param_1 != (char *)0x0) ||
       (param_1 = getenv("SIMPLE_BACKUP_SUFFIX"), param_1 != (char *)0x0)) && (*param_1 != '\0')) &&
     (pcVar1 = (char *)FUN_0040ab40(param_1), pcVar1 == param_1)) {
    DAT_0061b900 = param_1;
    return;
  }
  DAT_0061b900 = &DAT_00415aa0;
  return;
}


void * FUN_0040a1e0(void *param_1,int param_2,char param_3)

{
  undefined4 *puVar1;
  ulong uVar2;
  char cVar3;
  undefined2 uVar4;
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
  undefined2 *puVar13;
  int *piVar14;
  DIR *__dirp;
  ulong uVar15;
  byte bVar16;
  long lVar17;
  byte bVar18;
  ulong local_78;
  size_t local_70;
  int local_58;
  
  pcVar6 = (char *)FUN_0040ab40();
  sVar7 = strlen(pcVar6);
  lVar17 = (long)pcVar6 - (long)param_1;
  lVar8 = sVar7 + lVar17;
  if (DAT_0061b900 == (char *)0x0) {
    FUN_0040a180();
  }
  sVar7 = strlen(DAT_0061b900);
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
        memcpy((void *)((long)__dest + lVar8),DAT_0061b900,__n);
      }
      else {
        puVar13 = (undefined2 *)((long)__dest + lVar17);
        lVar10 = FUN_0040aba0(puVar13);
        if (__dirp == (DIR *)0x0) {
          uVar4 = *puVar13;
          *puVar13 = 0x2e;
          __dirp = (DIR *)FUN_0040a9c0(__dest);
          puVar1 = (undefined4 *)((long)puVar13 + lVar10);
          if (__dirp != (DIR *)0x0) {
            *puVar13 = uVar4;
            *puVar1 = 0x7e317e2e;
            *(undefined *)(puVar1 + 1) = 0;
            goto LAB_0040a2b1;
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
LAB_0040a2b1:
          bVar16 = 2;
          local_78 = 1;
          local_70 = sVar7;
LAB_0040a2d8:
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
                if (__dest == (void *)0x0) goto LAB_0040a608;
              }
              puVar13 = (undefined2 *)(lVar8 + (long)__dest);
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
              if (pdVar11 == (dirent *)0x0) goto LAB_0040a4b0;
            }
            goto LAB_0040a2d8;
          }
        }
LAB_0040a4b0:
        if (bVar18 == 2) {
          if (local_58 == 2) {
            memcpy((void *)((long)__dest + lVar8),DAT_0061b900,__n);
            local_58 = 1;
          }
        }
        else {
          pvVar9 = __dest;
          if (bVar18 == 3) {
LAB_0040a608:
            free(pvVar9);
            piVar14 = __errno_location();
            *piVar14 = 0xc;
            return (void *)0x0;
          }
          if (bVar18 != 1) goto LAB_0040a4cb;
        }
        FUN_0040a0b0(__dest,lVar8);
      }
LAB_0040a4cb:
      if (param_3 == '\0') goto LAB_0040a678;
      if (__dirp == (DIR *)0x0) {
LAB_0040a550:
        iVar5 = -100;
        lVar17 = 0;
        pvVar9 = __dest;
      }
      else {
        iVar5 = dirfd(__dirp);
        pvVar9 = (void *)((long)__dest + lVar17);
        if (iVar5 < 0) goto LAB_0040a550;
      }
      iVar5 = FUN_0040e040(0xffffff9c,param_1,iVar5,pvVar9,local_58 != 1);
      if (iVar5 == 0) {
LAB_0040a678:
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


void FUN_0040a6b0(undefined8 param_1,undefined8 param_2)

{
  FUN_0040a1e0(param_1,param_2,1);
  return;
}


undefined4 FUN_0040a6c0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = FUN_00409ff0(param_1,param_2,&PTR_DAT_00415b20,&DAT_00415b00,4,PTR_FUN_0061b3c8);
  return *(undefined4 *)(&DAT_00415b00 + lVar1 * 4);
}


void FUN_0040a6f0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = FUN_0040a1e0(param_1,param_2,0);
  if (lVar1 != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00410330();
}


undefined8 FUN_0040a710(undefined8 param_1,char *param_2)

{
  undefined8 uVar1;
  
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    uVar1 = FUN_0040a6c0();
    return uVar1;
  }
  return 2;
}


undefined8 FUN_0040a730(char *param_1,char *param_2)

{
  undefined8 uVar1;
  
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    param_2 = getenv("VERSION_CONTROL");
    if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
      return 2;
    }
    param_1 = "$VERSION_CONTROL";
  }
  uVar1 = FUN_0040a6c0(param_1,param_2);
  return uVar1;
}


ulong FUN_0040a780(ulong param_1,ulong param_2,ulong param_3)

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


void FUN_0040a7f0(undefined8 param_1)

{
  DAT_0061b908 = param_1;
  return;
}


void FUN_0040a800(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  int *piVar4;
  undefined8 uVar5;
  
  uVar3 = stdin;
  lVar2 = FUN_00410560(stdin);
  if (lVar2 == 0) {
    iVar1 = FUN_004114a0(uVar3);
    if (iVar1 == 0) {
      FUN_0040a920();
      return;
    }
  }
  else {
    iVar1 = FUN_00410590(uVar3,0,1);
    if (iVar1 == 0) {
      iVar1 = FUN_00410520(stdin);
      if (iVar1 != 0) {
        FUN_004114a0(stdin);
        goto LAB_0040a858;
      }
    }
    iVar1 = FUN_004114a0(stdin);
    if (iVar1 == 0) {
      FUN_0040a920();
      return;
    }
  }
LAB_0040a858:
  uVar3 = dcgettext(0,"error closing file",5);
  lVar2 = DAT_0061b908;
  piVar4 = __errno_location();
  if (lVar2 != 0) {
    uVar5 = FUN_0040de70(lVar2);
                    /* WARNING: Subroutine does not return */
    error(0,*piVar4,"%s: %s",uVar5,uVar3);
  }
                    /* WARNING: Subroutine does not return */
  error(0,*piVar4,&DAT_00415a9d,uVar3);
}


void FUN_0040a900(undefined8 param_1)

{
  DAT_0061b918 = param_1;
  return;
}


void FUN_0040a910(undefined param_1)

{
  DAT_0061b910 = param_1;
  return;
}


void FUN_0040a920(void)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  iVar1 = FUN_004114a0(stdout);
  if (iVar1 != 0) {
    piVar2 = __errno_location();
    if ((DAT_0061b910 == '\0') || (*piVar2 != 0x20)) {
      uVar3 = dcgettext(0,"write error",5);
      if (DAT_0061b918 != 0) {
        uVar4 = FUN_0040de70();
                    /* WARNING: Subroutine does not return */
        error(0,*piVar2,"%s: %s",uVar4,uVar3);
      }
                    /* WARNING: Subroutine does not return */
      error(0,*piVar2,&DAT_00415a9d,uVar3);
    }
  }
  iVar1 = FUN_004114a0(stderr);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  _exit(DAT_0061b3d0);
}


DIR * FUN_0040a9c0(char *param_1)

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
      __fd = FUN_004103e0(uVar1,0x406,3);
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


void FUN_0040aa60(void)

{
  long lVar1;
  
  lVar1 = FUN_0040aae0();
  if (lVar1 != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00410330();
}


ulong FUN_0040aa80(char *param_1)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  cVar1 = *param_1;
  lVar2 = FUN_0040ab40();
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


undefined * FUN_0040aae0(void *param_1)

{
  size_t __n;
  undefined *__dest;
  
  __n = FUN_0040aa80();
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


char * FUN_0040ab40(char *param_1)

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


void FUN_0040aba0(char *param_1)

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


bool FUN_0040abd0(char *param_1)

{
  char cVar1;
  long lVar2;
  char *pcVar3;
  
  pcVar3 = (char *)FUN_0040ab40();
  if (*pcVar3 == '\0') {
    pcVar3 = param_1;
  }
  lVar2 = FUN_0040aba0(pcVar3);
  cVar1 = pcVar3[lVar2];
  pcVar3[lVar2] = '\0';
  return cVar1 != '\0';
}


void FUN_0040ac20(FILE *param_1,int param_2)

{
  int __fd;
  
  if (param_1 != (FILE *)0x0) {
    __fd = fileno(param_1);
    posix_fadvise(__fd,0,0,param_2);
    return;
  }
  return;
}


void FUN_0040ac50(char *param_1,uint param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 & 0x40) != 0) {
    uVar2 = param_3 & 0xffffffff;
  }
  iVar1 = open(param_1,param_2,uVar2);
  FUN_0040eaf0(iVar1);
  return;
}


void FUN_0040aca0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_1 == 0) {
    return;
  }
  puVar1 = (undefined8 *)FUN_004100e0(0x18);
  uVar2 = FUN_00410310(param_2);
  *puVar1 = uVar2;
  puVar1[1] = param_3[1];
  puVar1[2] = *param_3;
  puVar3 = (undefined8 *)FUN_0040c0b0(param_1,puVar1);
  if (puVar3 != (undefined8 *)0x0) {
    if (puVar1 != puVar3) {
      FUN_0040c380(puVar1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00410330();
}


ulong FUN_0040ad30(long param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  if (param_1 != 0) {
    local_20 = param_3[1];
    local_18 = *param_3;
    local_28 = param_2;
    uVar1 = FUN_0040b6a0(param_1,&local_28);
    return uVar1 & 0xffffffffffffff00 | (ulong)(uVar1 != 0);
  }
  return 0;
}


void FUN_0040ad70(uint param_1,undefined *param_2)

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
    *(undefined2 *)(param_2 + 10) = 0x20;
    return;
  }
  param_2[9] = (bVar1 & 0xb5) + 0x78;
  *(undefined2 *)(param_2 + 10) = 0x20;
  return;
}


void FUN_0040aef0(long param_1)

{
  FUN_0040ad70(*(undefined4 *)(param_1 + 0x18));
  return;
}


void FUN_0040af00(void)

{
  long lVar1;
  
  lVar1 = FUN_0040af20();
  if (lVar1 != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00410330();
}


void * FUN_0040af20(void *param_1,char *param_2,long *param_3)

{
  char cVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  size_t __n;
  void *__dest;
  undefined *puVar5;
  size_t __n_00;
  
  lVar3 = FUN_0040ab40();
  uVar4 = FUN_0040aba0(lVar3);
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


long FUN_0040b000(undefined4 param_1,long param_2,long param_3)

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
      lVar1 = FUN_0040e290(param_1,param_2,param_3);
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


ulong FUN_0040b080(ulong param_1)

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
LAB_0040b100:
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
        if (uVar3 <= uVar4) goto LAB_0040b100;
        lVar5 = lVar5 + 8;
      } while (uVar1 != 0);
    }
    uVar3 = uVar3 + 2;
  } while( true );
}


ulong FUN_0040b120(ulong param_1,ulong param_2)

{
  return (param_1 >> 3 | param_1 << 0x3d) % param_2;
}


bool FUN_0040b130(long param_1,long param_2)

{
  return param_1 == param_2;
}


long FUN_0040b140(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = (*(code *)param_1[6])(param_2,param_1[2]);
  if (uVar1 <= (ulong)param_1[2] && param_1[2] != uVar1) {
    return uVar1 * 0x10 + *param_1;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


long FUN_0040b170(long param_1,long param_2,long **param_3,char param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  
  plVar6 = (long *)FUN_0040b140();
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
LAB_0040b1fc:
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
          goto LAB_0040b1fc;
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
    puVar1 = (undefined8 *)plVar6[1];
    if (puVar1 != (undefined8 *)0x0) {
      uVar2 = *(undefined4 *)((long)puVar1 + 4);
      uVar3 = *(undefined4 *)(puVar1 + 1);
      uVar4 = *(undefined4 *)((long)puVar1 + 0xc);
      *(undefined4 *)plVar6 = *(undefined4 *)puVar1;
      *(undefined4 *)((long)plVar6 + 4) = uVar2;
      *(undefined4 *)(plVar6 + 1) = uVar3;
      *(undefined4 *)((long)plVar6 + 0xc) = uVar4;
      *puVar1 = 0;
      puVar1[1] = *(undefined8 *)(param_1 + 0x48);
      *(undefined8 **)(param_1 + 0x48) = puVar1;
      return lVar8;
    }
    *plVar6 = 0;
  }
  return lVar8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0040b290(float **param_1)

{
  float fVar1;
  float *pfVar2;
  float fVar3;
  
  pfVar2 = *param_1;
  if (pfVar2 == (float *)&DAT_00415c00) {
    return 1;
  }
  fVar1 = pfVar2[2];
  if ((((_DAT_00415c14 < fVar1) && (fVar1 < DAT_00415c18)) && (_DAT_00415c1c < pfVar2[3])) &&
     (_DAT_00415c20 <= *pfVar2)) {
    fVar3 = *pfVar2 + _DAT_00415c14;
    if (((fVar3 < pfVar2[1]) && (pfVar2[1] <= DAT_00415c24)) && (fVar3 < fVar1)) {
      return 1;
    }
  }
  *param_1 = (float *)&DAT_00415c00;
  return 0;
}


undefined8 FUN_0040b310(long param_1,long **param_2,char param_3)

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
LAB_0040b338:
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
          plVar2 = (long *)FUN_0040b140(param_1,lVar6);
          plVar4 = (long *)plVar3[1];
          if (*plVar2 != 0) break;
          *plVar2 = lVar6;
          *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
          *plVar3 = 0;
          plVar3[1] = *(long *)(param_1 + 0x48);
          *(long **)(param_1 + 0x48) = plVar3;
          plVar3 = plVar4;
          if (plVar4 == (long *)0x0) goto LAB_0040b3af;
        }
        plVar3[1] = plVar2[1];
        plVar2[1] = (long)plVar3;
        plVar3 = plVar4;
      } while (plVar4 != (long *)0x0);
LAB_0040b3af:
      lVar6 = *plVar5;
    }
    plVar5[1] = 0;
    if (param_3 != '\0') goto LAB_0040b338;
    plVar3 = (long *)FUN_0040b140(param_1,lVar6);
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


undefined8 FUN_0040b460(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


undefined8 FUN_0040b470(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


undefined8 FUN_0040b480(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}


void FUN_0040b490(long **param_1)

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


bool FUN_0040b4e0(long **param_1)

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
LAB_0040b4f8:
      plVar2 = plVar2 + 2;
    }
    lVar1 = plVar2[1];
    plVar4 = (long *)((long)plVar4 + 1);
    plVar3 = (long *)((long)plVar3 + 1);
    if (lVar1 == 0) goto LAB_0040b4f8;
    do {
      lVar1 = *(long *)(lVar1 + 8);
      plVar3 = (long *)((long)plVar3 + 1);
    } while (lVar1 != 0);
    plVar2 = plVar2 + 2;
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040b550(long **param_1,undefined8 param_2)

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
      if (param_1[1] <= plVar6) goto LAB_0040b5bd;
    }
  }
LAB_0040b5bd:
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
  __fprintf_chk((dVar7 * _DAT_00415c38) / dVar8,param_2,1,"# buckets used:    %lu (%.2f%%)\n",plVar2
               );
  __fprintf_chk(param_2,1,"max bucket length: %lu\n",uVar5);
  return;
}


long FUN_0040b6a0(long param_1,long param_2)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)FUN_0040b140();
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


long FUN_0040b700(long **param_1)

{
  long lVar1;
  long *plVar2;
  
  if (param_1[4] == (long *)0x0) {
    return 0;
  }
  plVar2 = *param_1;
  if (param_1[1] <= plVar2) {
    lVar1 = FUN_00402a5a();
    return lVar1;
  }
  do {
    if (*plVar2 != 0) {
      return *plVar2;
    }
    plVar2 = plVar2 + 2;
  } while (plVar2 < param_1[1]);
  lVar1 = FUN_00402a5a();
  return lVar1;
}


long FUN_0040b750(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = (long *)FUN_0040b140();
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


ulong FUN_0040b7c0(long **param_1,long param_2,ulong param_3)

{
  undefined8 *puVar1;
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
      for (puVar1 = (undefined8 *)plVar3[1]; puVar1 != (undefined8 *)0x0;
          puVar1 = (undefined8 *)puVar1[1]) {
        if (param_3 == uVar2) {
          return param_3;
        }
        uVar2 = uVar2 + 1;
        *(undefined8 *)(param_2 + -8 + uVar2 * 8) = *puVar1;
      }
    }
    plVar3 = plVar3 + 2;
  } while (plVar3 <= param_1[1] && param_1[1] != plVar3);
  return uVar2;
}


long FUN_0040b830(long **param_1,code *param_2,undefined8 param_3)

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


ulong FUN_0040b8b0(byte *param_1,ulong param_2)

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


void FUN_0040b8f0(undefined8 *param_1)

{
  *(undefined *)(param_1 + 2) = 0;
  *param_1 = 0x3f80000000000000;
  param_1[1] = 0x3fb4fdf43f4ccccd;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ** FUN_0040b910(ulong param_1,void *param_2,code *param_3,code *param_4,void *param_5)

{
  char cVar1;
  void **__ptr;
  void *__nmemb;
  void *pvVar2;
  float fVar3;
  float fVar4;
  
  if (param_3 == (code *)0x0) {
    param_3 = FUN_0040b120;
  }
  if (param_4 == (code *)0x0) {
    param_4 = FUN_0040b130;
  }
  __ptr = (void **)malloc(0x50);
  if (__ptr == (void **)0x0) {
    return (void **)0x0;
  }
  if (param_2 == (void *)0x0) {
    __ptr[5] = &DAT_00415c00;
    cVar1 = FUN_0040b290(__ptr + 5);
    if (cVar1 == '\0') goto LAB_0040b9f0;
    fVar4 = DAT_00415c28;
    if ((long)param_1 < 0) goto LAB_0040ba73;
LAB_0040ba2e:
    fVar3 = (float)param_1;
LAB_0040ba37:
    fVar3 = fVar3 / fVar4;
    if (_DAT_00415c2c <= fVar3) goto LAB_0040b9f0;
    if (fVar3 < _DAT_00415c30) {
      param_1 = (ulong)fVar3;
    }
    else {
      param_1 = (long)(fVar3 - _DAT_00415c30) ^ 0x8000000000000000;
    }
  }
  else {
    __ptr[5] = param_2;
    cVar1 = FUN_0040b290(__ptr + 5);
    if (cVar1 == '\0') goto LAB_0040b9f0;
    if (*(char *)((long)param_2 + 0x10) == '\0') {
      fVar4 = *(float *)((long)param_2 + 8);
      if (-1 < (long)param_1) goto LAB_0040ba2e;
LAB_0040ba73:
      fVar3 = (float)(param_1 >> 1 | (ulong)((uint)param_1 & 1));
      fVar3 = fVar3 + fVar3;
      goto LAB_0040ba37;
    }
  }
  __nmemb = (void *)FUN_0040b080(param_1);
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
LAB_0040b9f0:
  free(__ptr);
  return (void **)0x0;
}


void FUN_0040baa0(long **param_1)

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
        if (param_1[1] < plVar4 || param_1[1] == plVar4) goto LAB_0040bb33;
      }
      plVar5 = plVar5 + 2;
    } while (plVar5 <= param_1[1] && param_1[1] != plVar5);
  }
LAB_0040bb33:
  param_1[3] = (long *)0x0;
  param_1[4] = (long *)0x0;
  return;
}


void FUN_0040bb50(long **param_1)

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
    if (plVar2 <= plVar4) goto LAB_0040bbec;
    do {
      while (lVar5 = *plVar4, plVar3 = plVar4, lVar5 == 0) {
        plVar4 = plVar4 + 2;
        if (plVar2 <= plVar4) goto LAB_0040bbaf;
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
LAB_0040bbaf:
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
LAB_0040bbec:
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

undefined4 FUN_0040bc30(void **param_1,ulong param_2)

{
  char cVar1;
  undefined4 uVar2;
  float fVar3;
  void *local_68;
  void *local_60;
  void *local_58;
  void *local_50;
  undefined8 local_48;
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
    if (_DAT_00415c2c <= fVar3) {
      return 0;
    }
    if (fVar3 < _DAT_00415c30) {
      param_2 = (ulong)fVar3;
    }
    else {
      param_2 = (long)(fVar3 - _DAT_00415c30) ^ 0x8000000000000000;
    }
  }
  local_58 = (void *)FUN_0040b080(param_2);
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
      uVar2 = FUN_0040b310(&local_68,param_1,0);
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
      cVar1 = FUN_0040b310(param_1,&local_68,1);
      if ((cVar1 != '\0') && (cVar1 = FUN_0040b310(param_1,&local_68,0), cVar1 != '\0')) {
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

undefined8 FUN_0040be30(long param_1,long param_2,long *param_3)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  long *local_20;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar2 = FUN_0040b170(param_1,param_2,&local_20,0);
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
    if ((long)uVar3 < 0) goto LAB_0040bf2a;
LAB_0040be9b:
    if (fVar7 <= (float)uVar3 * *(float *)(lVar2 + 8)) goto LAB_0040beb2;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x28);
    fVar7 = (float)uVar6;
    uVar3 = *(ulong *)(param_1 + 0x10);
    if (-1 < (long)uVar3) goto LAB_0040be9b;
LAB_0040bf2a:
    fVar8 = (float)(uVar3 >> 1 | (ulong)((uint)uVar3 & 1));
    if (fVar7 <= (fVar8 + fVar8) * *(float *)(lVar2 + 8)) goto LAB_0040beb2;
  }
  FUN_0040b290(param_1 + 0x28);
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
    if (_DAT_00415c2c <= fVar7) {
      return 0xffffffff;
    }
    if (_DAT_00415c30 <= fVar7) {
      uVar6 = (long)(fVar7 - _DAT_00415c30) ^ 0x8000000000000000;
    }
    else {
      uVar6 = (ulong)fVar7;
    }
    cVar1 = FUN_0040bc30(param_1,uVar6);
    if (cVar1 == '\0') {
      return 0xffffffff;
    }
    lVar2 = FUN_0040b170(param_1,param_2,&local_20,0);
    if (lVar2 != 0) {
      uVar5 = FUN_00402a64();
      return uVar5;
    }
  }
LAB_0040beb2:
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


undefined8 FUN_0040c0b0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_10;
  
  iVar1 = FUN_0040be30(param_1,param_2,&local_10);
  if (iVar1 != -1) {
    if (iVar1 == 0) {
      param_2 = local_10;
    }
    return param_2;
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_0040c0f0(long param_1,undefined8 param_2)

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
  
  lVar5 = FUN_0040b170(param_1,param_2,&local_20,1);
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
      FUN_0040b290(param_1 + 0x28);
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
        if (_DAT_00415c30 <= fVar7) {
          uVar6 = (long)(fVar7 - _DAT_00415c30) ^ 0x8000000000000000;
        }
        else {
          uVar6 = (ulong)fVar7;
        }
        cVar4 = FUN_0040bc30(param_1,uVar6);
        if (cVar4 == '\0') {
          __ptr = *(void **)(param_1 + 0x48);
          while (__ptr != (void *)0x0) {
            pvVar3 = *(void **)((long)__ptr + 8);
            free(__ptr);
            __ptr = pvVar3;
          }
          *(undefined8 *)(param_1 + 0x48) = 0;
        }
      }
    }
    return lVar5;
  }
  return lVar5;
}


ulong FUN_0040c2d0(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_004115a0(*param_1);
  return (uVar1 ^ param_1[1]) % param_2;
}


ulong FUN_0040c300(long param_1,ulong param_2)

{
  return *(ulong *)(param_1 + 8) % param_2;
}


undefined8 FUN_0040c310(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if ((param_1[1] == param_2[1]) && (param_1[2] == param_2[2])) {
    uVar1 = FUN_0040e2f0(*param_1,*param_2);
    return uVar1;
  }
  return 0;
}


ulong FUN_0040c340(char **param_1,char **param_2)

{
  int iVar1;
  undefined4 extraout_var;
  
  if ((param_1[1] == param_2[1]) && (param_1[2] == param_2[2])) {
    iVar1 = strcmp(*param_1,*param_2);
    return CONCAT44(extraout_var,iVar1) & 0xffffffffffffff00 | (ulong)(iVar1 == 0);
  }
  return 0;
}


void FUN_0040c380(void **param_1)

{
  free(*param_1);
  free(param_1);
  return;
}


void FUN_0040c3a0(byte *param_1)

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
        pbVar6 = &DAT_00415c80;
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
  DAT_0061b920 = param_1;
  program_invocation_name = param_1;
  return;
}


undefined8
FUN_0040c440(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined local_1c [12];
  
  iVar1 = FUN_00411440(param_1,param_2,param_5,local_1c);
  if (iVar1 == 0) {
    uVar2 = FUN_00411470(local_1c,param_3,param_4);
  }
  else {
    uVar2 = 0xfffffffe;
  }
  return uVar2;
}


void FUN_0040c480(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_c [3];
  
  local_c[0] = param_3;
  FUN_00411470(local_c,param_1,param_2);
  return;
}


char * FUN_0040c4a0(char *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  byte *pbVar3;
  
  pcVar2 = (char *)dcgettext(0,param_1,5);
  if (param_1 == pcVar2) {
    pbVar3 = (byte *)FUN_004115e0();
    if ((*pbVar3 & 0xdf) == 0x55) {
      if (((((pbVar3[1] & 0xdf) != 0x54) || ((pbVar3[2] & 0xdf) != 0x46)) || (pbVar3[3] != 0x2d)) ||
         ((pbVar3[4] != 0x38 || (pbVar3[5] != 0)))) {
LAB_0040c578:
        pcVar2 = "\"";
        if (param_2 != 9) {
          pcVar2 = "\'";
        }
        return pcVar2;
      }
      cVar1 = *pcVar2;
      pcVar2 = &DAT_00415c91;
      if (cVar1 != '`') {
        pcVar2 = &DAT_00415c86;
      }
    }
    else {
      if (((((*pbVar3 & 0xdf) != 0x47) || ((pbVar3[1] & 0xdf) != 0x42)) || (pbVar3[2] != 0x31)) ||
         (((pbVar3[3] != 0x38 || (pbVar3[4] != 0x30)) ||
          ((pbVar3[5] != 0x33 || ((pbVar3[6] != 0x30 || (pbVar3[7] != 0)))))))) goto LAB_0040c578;
      cVar1 = *pcVar2;
      pcVar2 = &DAT_00415c8d;
      if (cVar1 != '`') {
        pcVar2 = &DAT_00415c8a;
      }
    }
  }
  return pcVar2;
}


ulong FUN_0040c5a0(undefined *param_1,ulong param_2,char *param_3,ulong param_4,int param_5,
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
LAB_0040d1f1:
    if (param_2 != 0) {
      bVar3 = false;
      local_5b = false;
      bVar2 = true;
      local_70 = 0;
      goto LAB_0040ce26;
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
      goto LAB_0040d1f1;
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
      param_8 = (char *)FUN_0040c4a0(&DAT_00415c95,param_5);
      param_9 = (char *)FUN_0040c4a0(&DAT_00416f57);
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
LAB_0040c638:
  uVar22 = 0;
  bVar5 = local_5b;
LAB_0040c648:
  bVar23 = param_4 != uVar22;
  if (param_4 == 0xffffffffffffffff) {
    bVar23 = param_3[uVar22] != '\0';
  }
  bVar26 = bVar6;
  if (!bVar23) goto LAB_0040cdc8;
  bVar20 = (bool)(param_5 != 2 & bVar6);
  __s1 = (byte *)(param_3 + uVar22);
  uVar16 = uVar15;
  bVar4 = bVar3;
  if (bVar20) {
    if (local_a0 == 0) {
LAB_0040cd40:
      uVar19 = (ulong)*__s1;
      switch(uVar19) {
      case 0:
        goto switchD_0040cd52_caseD_0;
      default:
        bVar20 = false;
        goto switchD_0040cbbe_caseD_1;
      case 7:
        bVar17 = 0x61;
        goto LAB_0040ca55;
      case 8:
        bVar17 = 0x62;
        break;
      case 9:
switchD_0040cd52_caseD_9:
        bVar17 = 0x74;
        break;
      case 10:
switchD_0040cd52_caseD_a:
        bVar17 = 0x6e;
        break;
      case 0xb:
switchD_0040cd52_caseD_b:
        bVar17 = 0x76;
        goto LAB_0040ca55;
      case 0xc:
switchD_0040cd52_caseD_c:
        bVar17 = 0x66;
LAB_0040ca55:
        if (local_5c) {
          bVar25 = false;
          goto LAB_0040c9a8;
        }
LAB_0040ca60:
        bVar23 = false;
        goto LAB_0040c81b;
      case 0xd:
        bVar20 = false;
switchD_0040c738_caseD_d:
        bVar25 = param_5 == 2;
        uVar19 = 0xd;
        bVar13 = 0x72;
        goto LAB_0040c970;
      case 0x20:
        bVar25 = false;
LAB_0040cd9a:
        uVar19 = 0x20;
        goto LAB_0040cd62;
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
switchD_0040c738_caseD_21:
        bVar25 = false;
        goto LAB_0040c97b;
      case 0x23:
      case 0x7e:
        bVar26 = false;
LAB_0040cd7a:
        if (uVar22 == 0) {
          bVar25 = false;
          bVar23 = bVar20;
          bVar20 = bVar26;
          goto LAB_0040c788;
        }
        bVar23 = false;
        goto LAB_0040c79f;
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
LAB_0040cd62:
        bVar24 = false;
        bVar23 = bVar20;
        bVar20 = bVar25;
        goto LAB_0040c7a1;
      case 0x27:
        bVar20 = false;
        goto switchD_0040cbbe_caseD_27;
      case 0x3f:
        bVar20 = false;
        goto switchD_0040cbbe_caseD_3f;
      case 0x5c:
        bVar20 = false;
        goto switchD_0040c738_caseD_5c;
      case 0x7b:
      case 0x7d:
        bVar20 = false;
        goto switchD_0040cbbe_caseD_7b;
      }
      bVar25 = false;
      bVar23 = false;
      goto joined_r0x0040c997;
    }
    if ((param_4 == 0xffffffffffffffff) && (1 < local_a0)) {
      param_4 = strlen(param_3);
    }
    if ((param_4 < uVar22 + local_a0) || (iVar7 = memcmp(__s1,local_78,local_a0), iVar7 != 0))
    goto LAB_0040cd40;
    if (!local_5c) {
      uVar19 = (ulong)*__s1;
      bVar25 = bVar20;
      switch(uVar19) {
      case 0:
        goto switchD_0040c738_caseD_0;
      default:
        goto switchD_0040cbbe_caseD_1;
      case 7:
        bVar17 = 0x61;
        goto LAB_0040ca60;
      case 8:
        bVar25 = false;
        bVar23 = false;
        bVar17 = 0x62;
        break;
      case 9:
        goto switchD_0040cd52_caseD_9;
      case 10:
        goto switchD_0040cd52_caseD_a;
      case 0xb:
        goto switchD_0040cd52_caseD_b;
      case 0xc:
        goto switchD_0040cd52_caseD_c;
      case 0xd:
        goto switchD_0040c738_caseD_d;
      case 0x20:
        goto LAB_0040cd9a;
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
        goto switchD_0040c738_caseD_21;
      case 0x23:
      case 0x7e:
        bVar26 = bVar20;
        goto LAB_0040cd7a;
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
        goto LAB_0040cd62;
      case 0x27:
        goto switchD_0040cbbe_caseD_27;
      case 0x3f:
        goto switchD_0040cbbe_caseD_3f;
      case 0x5c:
        goto switchD_0040c738_caseD_5c;
      case 0x7b:
      case 0x7d:
        goto switchD_0040cbbe_caseD_7b;
      }
      goto LAB_0040c7e2;
    }
    goto LAB_0040c9ba;
  }
  uVar19 = (ulong)*__s1;
  switch(uVar19) {
  case 0:
    if (bVar6) {
switchD_0040cd52_caseD_0:
      if (!local_5c) {
        bVar20 = false;
switchD_0040c738_caseD_0:
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
            goto LAB_0040c898;
          }
LAB_0040cada:
          param_1[uVar16] = 0x5c;
          uVar15 = uVar16;
        }
        else if (uVar15 < uVar9) goto LAB_0040cada;
        uVar16 = uVar15 + 1;
        bVar24 = bVar23;
        if (param_5 == 2) {
          bVar17 = 0x30;
          bVar23 = false;
          bVar4 = bVar3;
          goto LAB_0040c898;
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
LAB_0040cb19:
        bVar17 = (byte)uVar19;
        bVar23 = false;
        uVar15 = uVar16;
        bVar4 = bVar3;
        if ((bool)(bVar6 ^ 1U | bVar26)) goto LAB_0040c898;
        goto LAB_0040c7a1;
      }
      bVar26 = param_5 == 2;
      goto LAB_0040c9ac;
    }
    if ((param_6 & 1) == 0) {
      bVar25 = param_5 == 2;
      uVar19 = 0;
      bVar23 = false;
      bVar20 = false;
      goto LAB_0040c788;
    }
    uVar22 = uVar22 + 1;
    goto LAB_0040c648;
  default:
switchD_0040cbbe_caseD_1:
    bVar25 = bVar6;
    if (sVar8 != 1) {
      local_40[0] = (mbstate_t)0x0;
      if (param_4 == 0xffffffffffffffff) {
        param_4 = strlen(param_3);
      }
      uVar21 = 0;
      do {
        uVar1 = uVar22 + uVar21;
        lVar11 = FUN_004113c0(&local_44,param_3 + uVar1,param_4 - uVar1,local_40);
        if (lVar11 == 0) break;
        if (lVar11 == -1) {
          bVar23 = false;
          goto LAB_0040d4ca;
        }
        if (lVar11 == -2) {
          if ((param_4 <= uVar1) || (param_3[uVar1] == '\0')) goto LAB_0040d607;
          goto LAB_0040d5f7;
        }
        if (((param_5 == 2) && (local_5c)) && (lVar11 != 1)) {
          pcVar12 = param_3 + uVar1 + 1;
          do {
            if (((byte)(*pcVar12 + 0xa5U) < 0x22) &&
               ((1L << (*pcVar12 + 0xa5U & 0x3f) & 0x20000002bU) != 0)) {
              param_5 = 2;
              goto LAB_0040c9ac;
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
      goto LAB_0040d4ca;
    }
    ppuVar10 = __ctype_b_loc();
    uVar21 = 1;
    bVar25 = ((*ppuVar10)[uVar19] & 0x4000) == 0;
    bVar23 = !bVar25;
    bVar25 = (bool)(bVar25 & bVar6);
    goto LAB_0040cb94;
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
    goto LAB_0040cbd2;
  case 10:
    uVar19 = 10;
    bVar13 = 0x6e;
    goto LAB_0040cbd2;
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
LAB_0040cbd2:
    bVar25 = param_5 == 2;
    bVar20 = (bool)(local_5c & bVar25);
    if (bVar20) {
LAB_0040cbea:
      param_5 = 2;
      goto LAB_0040c9ac;
    }
    break;
  case 0x20:
    uVar19 = 0x20;
    goto LAB_0040c776;
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
LAB_0040c776:
    bVar25 = param_5 == 2;
    if ((local_5c) && (bVar25)) goto LAB_0040cbea;
    goto LAB_0040c788;
  case 0x23:
  case 0x7e:
LAB_0040c76d:
    bVar25 = param_5 == 2;
    if (uVar22 == 0) goto LAB_0040c776;
    goto LAB_0040c97b;
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
    goto switchD_0040cbbe_caseD_25;
  case 0x27:
switchD_0040cbbe_caseD_27:
    bVar5 = bVar23;
    if (param_5 != 2) {
      bVar25 = false;
      uVar19 = 0x27;
      goto LAB_0040c788;
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
      goto LAB_0040c898;
    }
    goto LAB_0040c9ac;
  case 0x3f:
switchD_0040cbbe_caseD_3f:
    if (param_5 == 2) {
      if (!local_5c) {
        bVar17 = 0x3f;
        bVar24 = false;
        bVar23 = false;
        goto LAB_0040c898;
      }
      goto LAB_0040c9ac;
    }
    if (param_5 != 5) {
      bVar25 = param_5 == 2;
      uVar19 = 0x3f;
      bVar23 = false;
      goto LAB_0040c788;
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
        goto LAB_0040cb19;
      }
      goto LAB_0040c9ba;
    }
    bVar25 = false;
    uVar19 = 0x3f;
    bVar23 = false;
    goto LAB_0040c788;
  case 0x5c:
    if (param_5 != 2) {
switchD_0040c738_caseD_5c:
      uVar19 = 0x5c;
      bVar17 = 0x5c;
      bVar13 = 0x5c;
      bVar25 = (bool)(bVar6 & local_5c & local_a0 != 0);
      if (!bVar25) break;
      uVar22 = uVar22 + 1;
      bVar23 = false;
      goto LAB_0040c8b4;
    }
    if (local_5c) goto LAB_0040c9ac;
    uVar22 = uVar22 + 1;
    bVar23 = false;
    bVar17 = 0x5c;
    goto LAB_0040c8b4;
  case 0x7b:
  case 0x7d:
switchD_0040cbbe_caseD_7b:
    bVar24 = param_4 != 1;
    if (param_4 == 0xffffffffffffffff) {
      bVar24 = param_3[1] != '\0';
    }
    bVar25 = param_5 == 2;
    if (!bVar24) goto LAB_0040c76d;
    goto LAB_0040c97b;
  }
LAB_0040c970:
  if (!bVar6) {
LAB_0040c97b:
    bVar23 = false;
    goto LAB_0040c788;
  }
  bVar23 = false;
  bVar17 = bVar13;
  goto joined_r0x0040c997;
LAB_0040cdc8:
  if ((uVar15 == 0) && ((bool)(local_5c & param_5 == 2))) {
    param_5 = 2;
LAB_0040c9ac:
    if (bVar26) {
      param_5 = 4;
    }
LAB_0040c9ba:
    uVar9 = FUN_0040c5a0(param_1,uVar9,param_3,param_4,param_5,param_6 & 0xfffffffd,0,param_8,
                         param_9);
    return uVar9;
  }
  bVar26 = (bool)(param_5 == 2 & (local_5c ^ 1U));
  bVar23 = (bool)(local_5c ^ 1U);
  if ((!bVar26) || (bVar23 = bVar26, !bVar5)) {
LAB_0040d69d:
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
    uVar9 = FUN_0040c5a0(param_1,local_70,param_3,param_4,5,param_6,param_7,param_8,param_9);
    return uVar9;
  }
  local_5b = uVar9 == 0 && local_70 != 0;
  param_2 = local_70;
  bVar23 = bVar5;
  if (uVar9 != 0 || local_70 == 0) goto LAB_0040d69d;
LAB_0040ce26:
  *param_1 = 0x27;
  param_5 = 2;
  uVar15 = 1;
  local_78 = "\'";
  local_a0 = 1;
  local_5c = false;
  uVar9 = param_2;
  goto LAB_0040c638;
  while (__s1[uVar21] != 0) {
LAB_0040d5f7:
    uVar21 = uVar21 + 1;
    if (param_4 <= uVar22 + uVar21) break;
  }
LAB_0040d607:
  bVar23 = false;
LAB_0040d4ca:
  if (1 < uVar21) {
LAB_0040d08e:
    bVar26 = false;
    uVar21 = uVar21 + uVar22;
    uVar16 = uVar22;
    do {
      bVar17 = (byte)uVar19;
      if (bVar25) {
        bVar26 = param_5 == 2;
        if (local_5c) goto LAB_0040c9ac;
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
        if (uVar21 <= uVar22) goto LAB_0040c82d;
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
        if (uVar21 <= uVar22) goto LAB_0040c8b4;
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
LAB_0040cb94:
  if (bVar25) {
    bVar23 = false;
    bVar25 = bVar6;
    goto LAB_0040d08e;
  }
switchD_0040cbbe_caseD_25:
  bVar25 = param_5 == 2;
LAB_0040c788:
  bVar17 = (byte)uVar19;
  bVar24 = (bool)((bVar6 ^ 1U | bVar25) ^ 1 | local_5c);
  bVar26 = bVar20;
  if (bVar24) {
LAB_0040c79f:
    bVar24 = false;
    bVar20 = bVar26;
LAB_0040c7a1:
    bVar17 = (byte)uVar19;
    uVar16 = uVar15;
    bVar4 = bVar3;
    if ((param_7 == 0) || ((*(uint *)(param_7 + (uVar19 >> 5) * 4) >> (bVar17 & 0x1f) & 1) == 0))
    goto LAB_0040c898;
    bVar25 = param_5 == 2;
  }
  else {
LAB_0040c898:
    bVar25 = param_5 == 2;
    uVar15 = uVar16;
    bVar3 = bVar4;
    if (!bVar20) {
      uVar22 = uVar22 + 1;
      bVar3 = (bool)((bVar24 ^ 1U) & bVar4);
LAB_0040c8b4:
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
      goto LAB_0040c82d;
    }
  }
joined_r0x0040c997:
  if (local_5c) {
LAB_0040c9a8:
    bVar26 = (bool)(bVar6 & bVar25);
    goto LAB_0040c9ac;
  }
LAB_0040c7e2:
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
LAB_0040c81b:
  if (uVar15 < uVar9) {
    param_1[uVar15] = 0x5c;
  }
  uVar15 = uVar15 + 1;
  uVar22 = uVar22 + 1;
  bVar4 = bVar3;
LAB_0040c82d:
  bVar3 = bVar4;
  if (uVar15 < uVar9) {
    param_1[uVar15] = bVar17;
  }
  uVar15 = uVar15 + 1;
  if (!bVar23) {
    bVar2 = false;
  }
  goto LAB_0040c648;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_0040d7d0(int param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  ulong uVar9;
  undefined *__ptr;
  ulong *puVar10;
  
  piVar7 = __errno_location();
  iVar1 = *piVar7;
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  puVar8 = (undefined4 *)PTR_DAT_0061b418;
  if (DAT_0061b430 <= param_1) {
    if (param_1 == 0x7fffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_00410330();
    }
    if (PTR_DAT_0061b418 == &DAT_0061b420) {
      puVar8 = (undefined4 *)FUN_00410140(0);
      uVar6 = PTR_DAT_0061b428._4_4_;
      uVar5 = PTR_DAT_0061b428._0_4_;
      uVar3 = _UNK_0061b424;
      PTR_DAT_0061b418 = (undefined *)puVar8;
      *puVar8 = _DAT_0061b420;
      puVar8[1] = uVar3;
      puVar8[2] = uVar5;
      puVar8[3] = uVar6;
    }
    else {
      puVar8 = (undefined4 *)FUN_00410140(PTR_DAT_0061b418);
      PTR_DAT_0061b418 = (undefined *)puVar8;
    }
    memset(puVar8 + (long)DAT_0061b430 * 4,0,(long)((param_1 + 1) - DAT_0061b430) << 4);
    DAT_0061b430 = param_1 + 1;
  }
  uVar2 = param_4[1];
  puVar10 = (ulong *)(puVar8 + (long)param_1 * 4);
  uVar4 = *puVar10;
  __ptr = (undefined *)puVar10[1];
  uVar9 = FUN_0040c5a0(__ptr,uVar4,param_2,param_3,*param_4,uVar2 | 1,param_4 + 2,
                       *(undefined8 *)(param_4 + 10),*(undefined8 *)(param_4 + 0xc));
  if (uVar4 <= uVar9) {
    uVar9 = uVar9 + 1;
    *puVar10 = uVar9;
    if (__ptr != &DAT_0061b940) {
      free(__ptr);
    }
    __ptr = (undefined *)FUN_004100e0(uVar9);
    uVar3 = *param_4;
    puVar10[1] = (ulong)__ptr;
    FUN_0040c5a0(__ptr,uVar9,param_2,param_3,uVar3,uVar2 | 1,param_4 + 2,
                 *(undefined8 *)(param_4 + 10),*(undefined8 *)(param_4 + 0xc));
  }
  *piVar7 = iVar1;
  return __ptr;
}


void FUN_0040d970(undefined *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_0061ba40;
  }
  FUN_004102e0(param_1,0x38);
  *piVar2 = iVar1;
  return;
}


undefined4 FUN_0040d9b0(undefined4 *param_1)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)&DAT_0061ba40;
  }
  return *param_1;
}


void FUN_0040d9c0(undefined4 *param_1,undefined4 param_2)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)&DAT_0061ba40;
  }
  *param_1 = param_2;
  return;
}


uint FUN_0040d9d0(undefined *param_1,byte param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_0061ba40;
  }
  uVar1 = *(uint *)(param_1 + (ulong)(param_2 >> 5) * 4 + 8);
  uVar2 = uVar1 >> (param_2 & 0x1f);
  *(uint *)(param_1 + (ulong)(param_2 >> 5) * 4 + 8) =
       ((param_3 ^ uVar2) & 1) << (param_2 & 0x1f) ^ uVar1;
  return uVar2 & 1;
}


undefined4 FUN_0040da10(undefined *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_0061ba40;
  }
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_1 + 4) = param_2;
  return uVar1;
}


void FUN_0040da30(undefined4 *param_1,long param_2,long param_3)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)&DAT_0061ba40;
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


void FUN_0040da60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 *param_5)

{
  int iVar1;
  int *piVar2;
  
  if (param_5 == (undefined4 *)0x0) {
    param_5 = (undefined4 *)&DAT_0061ba40;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  FUN_0040c5a0(param_1,param_2,param_3,param_4,*param_5,param_5[1],param_5 + 2,
               *(undefined8 *)(param_5 + 10),*(undefined8 *)(param_5 + 0xc));
  *piVar2 = iVar1;
  return;
}


undefined8 FUN_0040dae0(undefined8 param_1,undefined8 param_2,long *param_3,undefined4 *param_4)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  
  if (param_4 == (undefined4 *)0x0) {
    param_4 = (undefined4 *)&DAT_0061ba40;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  uVar5 = (uint)(param_3 == (long *)0x0) | param_4[1];
  lVar3 = FUN_0040c5a0(0,0,param_1,param_2,*param_4,uVar5,param_4 + 2,*(undefined8 *)(param_4 + 10),
                       *(undefined8 *)(param_4 + 0xc));
  uVar4 = FUN_004100e0(lVar3 + 1);
  FUN_0040c5a0(uVar4,lVar3 + 1,param_1,param_2,*param_4,uVar5,param_4 + 2,
               *(undefined8 *)(param_4 + 10),*(undefined8 *)(param_4 + 0xc));
  *piVar2 = iVar1;
  if (param_3 != (long *)0x0) {
    *param_3 = lVar3;
  }
  return uVar4;
}


void FUN_0040dbd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0040dae0(param_1,param_2,0,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040dbe0(void)

{
  void **ppvVar1;
  void *__ptr;
  undefined *__ptr_00;
  void **ppvVar2;
  
  __ptr_00 = PTR_DAT_0061b418;
  if (1 < DAT_0061b430) {
    ppvVar2 = (void **)(PTR_DAT_0061b418 + 0x18);
    ppvVar1 = (void **)(PTR_DAT_0061b418 + (ulong)(DAT_0061b430 - 2) * 0x10 + 0x28);
    do {
      __ptr = *ppvVar2;
      ppvVar2 = ppvVar2 + 2;
      free(__ptr);
    } while (ppvVar2 != ppvVar1);
  }
  if (*(undefined **)(__ptr_00 + 8) != &DAT_0061b940) {
    free(*(undefined **)(__ptr_00 + 8));
    _DAT_0061b420 = 0x100;
    PTR_DAT_0061b428 = &DAT_0061b940;
  }
  if (__ptr_00 != &DAT_0061b420) {
    free(__ptr_00);
    PTR_DAT_0061b418 = &DAT_0061b420;
  }
  DAT_0061b430 = 1;
  return;
}


void FUN_0040dc80(undefined8 param_1,undefined8 param_2)

{
  FUN_0040d7d0(param_1,param_2,0xffffffffffffffff,&DAT_0061ba40);
  return;
}


void FUN_0040dca0(void)

{
  FUN_0040d7d0();
  return;
}


void FUN_0040dcb0(undefined8 param_1)

{
  FUN_0040d7d0(0,param_1,0xffffffffffffffff,&DAT_0061ba40);
  return;
}


void FUN_0040dcd0(undefined8 param_1,undefined8 param_2)

{
  FUN_0040d7d0(0,param_1,param_2,&DAT_0061ba40);
  return;
}


void FUN_0040dcf0(undefined8 param_1,int param_2,undefined8 param_3)

{
  int local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  if (param_2 != 10) {
    local_44 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    local_48 = param_2;
    FUN_0040d7d0(param_1,param_3,0xffffffffffffffff,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_0040dd60(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  int local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  if (param_2 != 10) {
    local_44 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    local_48 = param_2;
    FUN_0040d7d0(param_1,param_3,param_4,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_0040ddd0(undefined4 param_1,undefined8 param_2)

{
  FUN_0040dcf0(0,param_1,param_2);
  return;
}


void FUN_0040dde0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0040dd60(0,param_1,param_2,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040ddf0(undefined8 param_1,undefined8 param_2,byte param_3)

{
  uint *puVar1;
  uint uVar2;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_18 = DAT_0061ba70;
  local_48 = _DAT_0061ba40;
  uStack_40 = uRam000000000061ba48;
  local_38 = _DAT_0061ba50;
  uStack_30 = uRam000000000061ba58;
  puVar1 = (uint *)((long)&uStack_40 + (ulong)(param_3 >> 5) * 4);
  local_28 = _DAT_0061ba60;
  uStack_20 = uRam000000000061ba68;
  uVar2 = *puVar1;
  *puVar1 = (~(uVar2 >> (param_3 & 0x1f)) & 1) << (param_3 & 0x1f) ^ uVar2;
  FUN_0040d7d0(0,param_1,param_2,&local_48);
  return;
}


void FUN_0040de60(undefined8 param_1,char param_2)

{
  FUN_0040ddf0(param_1,0xffffffffffffffff,(int)param_2);
  return;
}


void FUN_0040de70(undefined8 param_1)

{
  FUN_0040ddf0(param_1,0xffffffffffffffff,0x3a);
  return;
}


void FUN_0040de90(undefined8 param_1,undefined8 param_2)

{
  FUN_0040ddf0(param_1,param_2,0x3a);
  return;
}


void FUN_0040dea0(undefined8 param_1,int param_2,undefined8 param_3)

{
  int local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  if (param_2 != 10) {
    local_40 = 0x400000000000000;
    local_44 = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    local_48 = param_2;
    FUN_0040d7d0(param_1,param_3,0xffffffffffffffff,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040df10(undefined8 param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5
                 )

{
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  long lStack_20;
  long local_18;
  
  uStack_40 = uRam000000000061ba48;
  local_38 = _DAT_0061ba50;
  uStack_30 = uRam000000000061ba58;
  local_28 = _DAT_0061ba60;
  lStack_20 = uRam000000000061ba68;
  local_18 = DAT_0061ba70;
  local_48 = CONCAT44((int)((ulong)_DAT_0061ba40 >> 0x20),10);
  if ((param_2 != 0) && (param_3 != 0)) {
    lStack_20 = param_2;
    local_18 = param_3;
    FUN_0040d7d0(param_1,param_4,param_5,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_0040df80(void)

{
  FUN_0040df10();
  return;
}


void FUN_0040df90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0040df10(0,param_1,param_2,param_3,0xffffffffffffffff);
  return;
}


void FUN_0040dfb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_0040df10(0,param_1,param_2,param_3,param_4);
  return;
}


void FUN_0040dfd0(void)

{
  FUN_0040d7d0();
  return;
}


void FUN_0040dfe0(undefined8 param_1,undefined8 param_2)

{
  FUN_0040d7d0(0,param_1,param_2,&DAT_0061b3e0);
  return;
}


void FUN_0040e000(undefined8 param_1,undefined8 param_2)

{
  FUN_0040d7d0(param_1,param_2,0xffffffffffffffff,&DAT_0061b3e0);
  return;
}


void FUN_0040e020(undefined8 param_1)

{
  FUN_0040d7d0(0,param_1,0xffffffffffffffff,&DAT_0061b3e0);
  return;
}


ulong FUN_0040e040(uint param_1,char *param_2,uint param_3,char *param_4,uint param_5)

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


ssize_t FUN_0040e290(int param_1,void *param_2,ulong param_3)

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


bool FUN_0040e2f0(undefined8 param_1,undefined8 param_2)

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
  __s1 = (void *)FUN_0040ab40();
  __s2 = (void *)FUN_0040ab40(param_2);
  __n = FUN_0040aba0(__s1);
  sVar2 = FUN_0040aba0(__s2);
  if ((__n == sVar2) && (iVar1 = memcmp(__s1,__s2,__n), iVar1 == 0)) {
    __filename = (char *)FUN_0040aa60(param_1);
    __filename_00 = (char *)FUN_0040aa60(param_2);
    iVar1 = __xstat(1,__filename,&local_158);
    if (iVar1 != 0) {
      piVar3 = __errno_location();
                    /* WARNING: Subroutine does not return */
      error(1,*piVar3,&DAT_00415a9d,__filename);
    }
    iVar1 = __xstat(1,__filename_00,&local_c8);
    if (iVar1 != 0) {
      piVar3 = __errno_location();
                    /* WARNING: Subroutine does not return */
      error(1,*piVar3,&DAT_00415a9d,__filename_00);
    }
    bVar4 = local_158.st_ino == local_c8.st_ino && local_158.st_dev == local_c8.st_dev;
    free(__filename);
    free(__filename_00);
  }
  return bVar4;
}


ulong FUN_0040e420(long param_1,long param_2)

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


void FUN_0040e440(char **param_1,char **param_2)

{
  strcmp(*param_1,*param_2);
  return;
}


undefined * FUN_0040e450(DIR *param_1,uint param_2)

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
  
  __compar = *(__compar_fn_t *)(&DAT_004169e0 + (ulong)param_2 * 8);
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
LAB_0040e4ac:
    while( true ) {
      *piVar3 = 0;
      pdVar4 = readdir(param_1);
      if (pdVar4 == (dirent *)0x0) break;
      pcVar6 = pdVar4->d_name;
      cVar2 = pdVar4->d_name[0];
      if (cVar2 != '.') goto LAB_0040e4a8;
      if (pdVar4->d_name[1] == '.') {
        cVar2 = pdVar4->d_name[2];
        goto LAB_0040e4a8;
      }
      if (pdVar4->d_name[1] != '\0') goto LAB_0040e4e5;
    }
    iVar1 = *piVar3;
    if (iVar1 == 0) {
      if (__compar == (__compar_fn_t)0x0) {
        if (local_68 == uVar13) {
          __ptr = (undefined *)FUN_00410140(__ptr,local_68 + 1);
          puVar7 = __ptr + local_68;
        }
        else {
          puVar7 = __ptr + uVar13;
        }
      }
      else {
        if (__nmemb == 0) {
          puVar7 = (undefined *)FUN_004100e0(uVar13 + 1);
          __ptr = puVar7;
        }
        else {
          pcVar6 = (char *)0x0;
          qsort(__ptr_00,__nmemb,0x10,__compar);
          __ptr = (undefined *)FUN_004100e0(uVar13 + 1);
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
LAB_0040e4a8:
  if (cVar2 == '\0') goto LAB_0040e4ac;
LAB_0040e4e5:
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
          if ((lVar12 < 0) || (__nmemb >> 0x3c != 0)) goto LAB_0040e788;
        }
      }
      else {
        if (0x555555555555554 < __nmemb) goto LAB_0040e788;
        local_58 = (__nmemb >> 1) + local_60;
        lVar12 = local_58 * 0x10;
      }
      __ptr_00 = (char **)FUN_00410140(__ptr_00,lVar12);
    }
    pcVar6 = (char *)FUN_00410310(pcVar6);
    __ptr_00[__nmemb * 2] = pcVar6;
    (__ptr_00 + __nmemb * 2)[1] = (char *)pdVar4->d_ino;
    __nmemb = local_60;
    uVar13 = uVar13 + __n;
    goto LAB_0040e4ac;
  }
  uVar11 = uVar13 + __n;
  if (local_68 - uVar13 <= __n) {
    if (CARRY8(uVar13,__n) != false) {
LAB_0040e788:
                    /* WARNING: Subroutine does not return */
      FUN_00410330();
    }
    if (__ptr == (undefined *)0x0) {
      if (uVar11 == 0) {
        local_68 = 0x80;
      }
      else {
        local_68 = uVar11;
        if ((long)uVar11 < 0) goto LAB_0040e788;
      }
    }
    else {
      if (0x5555555555555553 < uVar11) goto LAB_0040e788;
      local_68 = uVar11 + 1 + (uVar11 >> 1);
    }
    __ptr = (undefined *)FUN_00410140(__ptr,local_68);
  }
  memcpy(__ptr + uVar13,pcVar6,__n);
  uVar13 = uVar11;
  goto LAB_0040e4ac;
}


void * FUN_0040e7f0(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  DIR *__dirp;
  void *__ptr;
  int *piVar2;
  
  __dirp = (DIR *)FUN_0040a9c0();
  if (__dirp == (DIR *)0x0) {
    return (void *)0x0;
  }
  __ptr = (void *)FUN_0040e450(__dirp,param_2);
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


int FUN_0040e860(char *param_1)

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


void FUN_0040e8c0(char *param_1)

{
  mkdir(param_1,0x1c0);
  return;
}


void FUN_0040e8d0(char *param_1,uint *param_2)

{
  open(param_1,*param_2 & 0xffffff3c | 0xc2,0x180);
  return;
}


void FUN_0040e8f0(void)

{
                    /* WARNING: Subroutine does not return */
  __assert_fail("! \"invalid KIND in __gen_tempname\"","lib/tempname.c",0x147,"gen_tempname_len");
}


int FUN_0040e910(char *param_1,int param_2,undefined8 param_3,code *param_4,ulong param_5)

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
      lVar5 = FUN_00411b80(0,param_5);
      if (lVar5 == 0) {
        return -1;
      }
      iVar8 = 0x3a2f8;
      while( true ) {
        pcVar9 = param_1 + lVar4;
        if (param_5 != 0) {
          do {
            pcVar10 = pcVar9 + 1;
            lVar6 = FUN_00411bc0(lVar5,0x3d);
            *pcVar9 = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"[lVar6];
            pcVar9 = pcVar10;
          } while (pcVar10 != param_1 + lVar4 + param_5);
        }
        iVar1 = (*param_4)(param_1,param_3);
        if (-1 < iVar1) break;
        if (*piVar2 != 0x11) {
          iVar1 = -1;
          iVar7 = *piVar2;
          goto LAB_0040ea25;
        }
        iVar8 = iVar8 + -1;
        if (iVar8 == 0) {
          FUN_00411ce0(lVar5);
          *piVar2 = 0x11;
          return -1;
        }
      }
      *piVar2 = iVar7;
LAB_0040ea25:
      FUN_00411ce0(lVar5);
      *piVar2 = iVar7;
      return iVar1;
    }
  }
  *piVar2 = 0x16;
  return -1;
}


ulong FUN_0040ea70(char *param_1,undefined8 param_2,undefined4 param_3,code *param_4)

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
  undefined8 extraout_RDX;
  int iVar9;
  char *pcVar10;
  char *pcVar11;
  undefined4 local_c [3];
  
  local_c[0] = param_3;
  if ((uint)param_4 < 3) {
    uVar7 = FUN_0040e910(param_1,param_2,local_c,(&PTR_FUN_00416a40)[(ulong)param_4 & 0xffffffff]);
    return uVar7;
  }
  FUN_0040e8f0();
  iVar9 = (int)param_2;
  if ((uint)param_4 < 3) {
    uVar7 = FUN_0040e910();
    return uVar7;
  }
  FUN_0040e8f0();
  piVar2 = __errno_location();
  iVar8 = *piVar2;
  sVar3 = strlen(param_1);
  if ((long)iVar9 + 6U <= sVar3) {
    lVar4 = sVar3 - ((long)iVar9 + 6U);
    __s = param_1 + lVar4;
    sVar3 = strspn(__s,"X");
    if (5 < sVar3) {
      lVar5 = FUN_00411b80(0,6);
      if (lVar5 == 0) {
        uVar1 = 0xffffffff;
      }
      else {
        iVar9 = 0x3a2f8;
        pcVar10 = __s;
        do {
          do {
            pcVar11 = pcVar10 + 1;
            lVar6 = FUN_00411bc0(lVar5,0x3d);
            *pcVar10 = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"[lVar6];
            pcVar10 = pcVar11;
          } while (pcVar11 != param_1 + lVar4 + 6);
          uVar1 = (*param_4)(param_1,extraout_RDX);
          if (-1 < (int)uVar1) {
            *piVar2 = iVar8;
LAB_0040ea25:
            FUN_00411ce0(lVar5);
            *piVar2 = iVar8;
            goto LAB_0040ea40;
          }
          if (*piVar2 != 0x11) {
            uVar1 = 0xffffffff;
            iVar8 = *piVar2;
            goto LAB_0040ea25;
          }
          iVar9 = iVar9 + -1;
          pcVar10 = __s;
        } while (iVar9 != 0);
        FUN_00411ce0(lVar5);
        *piVar2 = 0x11;
        uVar1 = 0xffffffff;
      }
      goto LAB_0040ea40;
    }
  }
  *piVar2 = 0x16;
  uVar1 = 0xffffffff;
LAB_0040ea40:
  return (ulong)uVar1;
}


ulong FUN_0040eaa0(char *param_1,undefined8 param_2,undefined4 param_3,code *param_4)

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
  undefined8 extraout_RDX;
  int iVar9;
  char *pcVar10;
  char *pcVar11;
  undefined4 local_c [3];
  
  local_c[0] = param_3;
  if ((uint)param_4 < 3) {
    uVar7 = FUN_0040e910(param_1,param_2,local_c,(&PTR_FUN_00416a40)[(ulong)param_4 & 0xffffffff],6)
    ;
    return uVar7;
  }
  FUN_0040e8f0();
  piVar2 = __errno_location();
  iVar8 = *piVar2;
  sVar3 = strlen(param_1);
  uVar7 = (long)(int)param_2 + 6;
  if (uVar7 <= sVar3) {
    lVar4 = sVar3 - uVar7;
    __s = param_1 + lVar4;
    sVar3 = strspn(__s,"X");
    if (5 < sVar3) {
      lVar5 = FUN_00411b80(0,6);
      if (lVar5 == 0) {
        uVar1 = 0xffffffff;
      }
      else {
        iVar9 = 0x3a2f8;
        pcVar10 = __s;
        do {
          do {
            pcVar11 = pcVar10 + 1;
            lVar6 = FUN_00411bc0(lVar5,0x3d);
            *pcVar10 = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"[lVar6];
            pcVar10 = pcVar11;
          } while (pcVar11 != param_1 + lVar4 + 6);
          uVar1 = (*param_4)(param_1,extraout_RDX);
          if (-1 < (int)uVar1) {
            *piVar2 = iVar8;
LAB_0040ea25:
            FUN_00411ce0(lVar5);
            *piVar2 = iVar8;
            goto LAB_0040ea40;
          }
          if (*piVar2 != 0x11) {
            uVar1 = 0xffffffff;
            iVar8 = *piVar2;
            goto LAB_0040ea25;
          }
          iVar9 = iVar9 + -1;
          pcVar10 = __s;
        } while (iVar9 != 0);
        FUN_00411ce0(lVar5);
        *piVar2 = 0x11;
        uVar1 = 0xffffffff;
      }
      goto LAB_0040ea40;
    }
  }
  *piVar2 = 0x16;
  uVar1 = 0xffffffff;
LAB_0040ea40:
  return (ulong)uVar1;
}


int FUN_0040eae0(char *param_1,int param_2,undefined8 param_3,code *param_4)

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
      lVar5 = FUN_00411b80(0,6);
      if (lVar5 == 0) {
        return -1;
      }
      iVar8 = 0x3a2f8;
      pcVar9 = __s;
      while( true ) {
        do {
          pcVar10 = pcVar9 + 1;
          lVar6 = FUN_00411bc0(lVar5,0x3d);
          *pcVar9 = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"[lVar6];
          pcVar9 = pcVar10;
        } while (pcVar10 != param_1 + lVar4 + 6);
        iVar1 = (*param_4)(param_1,param_3);
        if (-1 < iVar1) break;
        if (*piVar2 != 0x11) {
          iVar1 = -1;
          iVar7 = *piVar2;
          goto LAB_0040ea25;
        }
        iVar8 = iVar8 + -1;
        pcVar9 = __s;
        if (iVar8 == 0) {
          FUN_00411ce0(lVar5);
          *piVar2 = 0x11;
          return -1;
        }
      }
      *piVar2 = iVar7;
LAB_0040ea25:
      FUN_00411ce0(lVar5);
      *piVar2 = iVar7;
      return iVar1;
    }
  }
  *piVar2 = 0x16;
  return -1;
}


uint FUN_0040eaf0(uint param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  if (2 < param_1) {
    return param_1;
  }
  uVar2 = FUN_00412750();
  piVar3 = __errno_location();
  iVar1 = *piVar3;
  close(param_1);
  *piVar3 = iVar1;
  return uVar2;
}


ulong FUN_0040eb40(ulong *param_1,ulong param_2)

{
  return *param_1 % param_2;
}


ulong FUN_0040eb50(ulong *param_1,ulong *param_2)

{
  return *param_2 & 0xffffffffffffff00 | (ulong)(*param_1 == *param_2);
}


uint FUN_0040eb60(char *param_1,undefined8 *param_2,long param_3,uint param_4,undefined8 param_5,
                 undefined8 param_6)

{
  ulong uVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
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
  undefined8 local_f8;
  undefined4 local_f0;
  undefined local_ec;
  ulong local_e8;
  long local_e0;
  ulong local_d8;
  ulong local_d0;
  stat local_c8;
  
  uVar1 = param_2[0xb];
  uVar8 = *(ulong *)(param_3 + 0x58);
  iVar15 = (int)*(undefined8 *)(param_3 + 0x60);
  param_4 = param_4 & 1;
  iVar14 = (int)param_2[0xc];
  if (param_4 == 0) goto LAB_0040ec50;
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
  if (DAT_0061ba80 == 0) {
    DAT_0061ba80 = FUN_0040b910(0x10,0,FUN_0040eb40,FUN_0040eb50,free,param_6,uVar6,uVar18);
    cVar17 = (char)uVar6;
    if (DAT_0061ba80 != 0) goto LAB_0040ebe1;
LAB_0040ece4:
    puVar5 = &local_f8;
    local_f0 = 2000000000;
    local_ec = 0;
    iVar4 = 2000000000;
  }
  else {
LAB_0040ebe1:
    lVar2 = DAT_0061ba80;
    cVar17 = (char)uVar6;
    puVar5 = DAT_0061ba78;
    if (DAT_0061ba78 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)malloc(0x10);
      DAT_0061ba78 = puVar5;
      if (puVar5 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar5 + 1) = 2000000000;
        *(undefined *)((long)puVar5 + 0xc) = 0;
        goto LAB_0040ebf1;
      }
LAB_0040f190:
      local_f8 = *param_2;
      puVar5 = (undefined8 *)FUN_0040b6a0(DAT_0061ba80,&local_f8);
      if (puVar5 == (undefined8 *)0x0) goto LAB_0040ece4;
    }
    else {
LAB_0040ebf1:
      *puVar5 = *param_2;
      puVar5 = (undefined8 *)FUN_0040c0b0(lVar2);
      if (puVar5 == (undefined8 *)0x0) {
        if (DAT_0061ba80 == 0) goto LAB_0040ece4;
        goto LAB_0040f190;
      }
      if (DAT_0061ba78 == puVar5) {
        DAT_0061ba78 = (undefined8 *)0x0;
      }
    }
    iVar4 = *(int *)(puVar5 + 1);
    if (*(char *)((long)puVar5 + 0xc) != '\0') {
      uVar8 = uVar8 & (long)(int)~(uint)(iVar4 == 2000000000);
      iVar15 = iVar15 - iVar15 % iVar4;
      goto LAB_0040ec50;
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
      *(undefined4 *)(puVar5 + 1) = 10;
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
            goto LAB_0040eef5;
          }
          iVar16 = iVar16 + -1;
        } while (iVar16 != 0);
        if (((local_e8 | uVar1 | param_2[0xd]) & 1) == 0) {
          *(undefined4 *)(puVar5 + 1) = 2000000000;
          uVar13 = 2000000000;
          uVar18 = 1;
          uVar6 = uVar8 & 0xfffffffffffffffe;
        }
        else {
          *(undefined4 *)(puVar5 + 1) = 1000000000;
          uVar13 = 1000000000;
        }
      }
      else {
        *(undefined4 *)(puVar5 + 1) = 10;
      }
    }
LAB_0040eef5:
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
      iVar4 = FUN_0040f8b0(param_1,puVar19);
    }
    else {
      iVar4 = FUN_0040f8a0();
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
        FUN_0040f8b0(param_1,puVar19);
      }
      else {
        FUN_0040f8a0();
      }
      if (iVar4 != 0) {
        return 0xfffffffe;
      }
    }
    iVar4 = (int)local_c8.st_mtim.tv_nsec + ((uint)local_c8.st_mtim.tv_sec & 1) * 1000000000;
    if (iVar4 == (iVar4 / 10) * 10) {
      if (uVar12 == 10) {
        param_4 = 10;
        goto LAB_0040f2c0;
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
          goto LAB_0040f118;
        }
        param_4 = param_4 * 10;
      } while (param_4 != uVar12);
      uVar6 = (ulong)(int)~(uint)(param_4 == 2000000000);
    }
    else {
LAB_0040f2c0:
      uVar6 = 0xffffffffffffffff;
    }
LAB_0040f118:
    uVar8 = uVar8 & uVar6;
    iVar15 = iVar15 - iVar15 % (int)param_4;
  }
  *(uint *)(puVar5 + 1) = param_4;
  *(undefined *)((long)puVar5 + 0xc) = 1;
LAB_0040ec50:
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


undefined8 FUN_0040f2d0(long param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = (undefined8 *)*param_2;
  lVar3 = puVar1[3];
  if (puVar1[1] == 0x3ffffffe) {
    if (lVar3 == 0x3ffffffe) {
      return 1;
    }
    uVar2 = *(undefined8 *)(param_1 + 0x50);
    *puVar1 = *(undefined8 *)(param_1 + 0x48);
    puVar1[1] = uVar2;
  }
  else {
    if (puVar1[1] == 0x3fffffff) {
      if (lVar3 == 0x3fffffff) {
        *param_2 = 0;
        return 0;
      }
      FUN_00411500(puVar1);
      lVar3 = puVar1[3];
    }
    if (lVar3 == 0x3ffffffe) {
      uVar2 = *(undefined8 *)(param_1 + 0x60);
      puVar1[2] = *(undefined8 *)(param_1 + 0x58);
      puVar1[3] = uVar2;
      return 0;
    }
  }
  if (lVar3 != 0x3fffffff) {
    return 0;
  }
  FUN_00411500(puVar1 + 2);
  return 0;
}


int FUN_0040f3a0(undefined8 *param_1)

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


void FUN_0040f450(int param_1,char *param_2,timespec *param_3)

{
  utimensat(param_1,param_2,param_3,0x100);
  return;
}


/* WARNING: Type propagation algorithm not settling */

int FUN_0040f460(int param_1,char *param_2,__time_t *param_3)

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
  undefined4 local_c8;
  undefined4 uStack_c4;
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
    iVar6 = FUN_0040f3a0();
    if (iVar6 < 0) {
      return -1;
    }
  }
  if ((param_1 < 0) && (param_2 == (char *)0x0)) {
    piVar8 = __errno_location();
    *piVar8 = 9;
    return -1;
  }
  if (-1 < DAT_0061ba8c) {
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
        DAT_0061ba8c = 1;
        return iVar7;
      }
    }
    else {
      piVar8 = __errno_location();
      *piVar8 = 0x26;
    }
  }
  DAT_0061ba8c = 0xffffffff;
  DAT_0061ba88 = 0xffffffff;
  if (iVar6 == 0) {
LAB_0040f560:
    if (local_120 == (timespec *)0x0) goto LAB_0040f630;
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
      cVar5 = FUN_0040f2d0(&local_b8,&local_120);
      if (cVar5 != '\0') {
        return 0;
      }
      goto LAB_0040f560;
    }
LAB_0040f630:
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
  local_c8 = *(undefined4 *)&__tvp[1].tv_sec;
  uStack_c4 = *(undefined4 *)((long)&__tvp[1].tv_sec + 4);
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
    if ((bVar2 || bVar9) || (local_b8.st_mtim.tv_nsec != 0)) goto LAB_0040f7e7;
  }
  _Stack_c0 = 0;
LAB_0040f7e7:
  futimesat(param_1,(char *)0x0,(timeval *)&local_d8);
  return 0;
}


void FUN_0040f8a0(undefined8 param_1,undefined8 param_2)

{
  FUN_0040f460(0xffffffff,param_1,param_2);
  return;
}


int FUN_0040f8b0(char *param_1,__time_t *param_2)

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
    if (-1 < DAT_0061ba88) goto LAB_0040f90b;
  }
  else {
    local_c8.tv_sec = *param_2;
    local_c8.tv_nsec = param_2[1];
    local_b8 = param_2[2];
    _Stack_b0 = param_2[3];
    local_d0 = &local_c8;
    iVar2 = FUN_0040f3a0();
    if (iVar2 < 0) {
      return -1;
    }
    if (-1 < DAT_0061ba88) {
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
LAB_0040f90b:
      iVar3 = utimensat(-100,param_1,__times,0x100);
      if (iVar3 < 1) {
        if ((iVar3 == 0) || (piVar4 = __errno_location(), *piVar4 != 0x26)) {
          DAT_0061ba8c = 1;
          DAT_0061ba88 = 1;
          return iVar3;
        }
      }
      else {
        piVar4 = __errno_location();
        *piVar4 = 0x26;
      }
    }
    DAT_0061ba88 = 0xffffffff;
    if (iVar2 != 0) {
      if ((iVar2 != 3) && (iVar2 = __lxstat(1,param_1,&local_a8), iVar2 != 0)) {
        return -1;
      }
      if ((local_d0 != (timespec *)0x0) &&
         (cVar1 = FUN_0040f2d0(&local_a8,&local_d0), cVar1 != '\0')) {
        return 0;
      }
      goto LAB_0040f96a;
    }
  }
  DAT_0061ba88 = 0xffffffff;
  iVar2 = __lxstat(1,param_1,&local_a8);
  if (iVar2 != 0) {
    return -1;
  }
LAB_0040f96a:
  if ((local_a8.st_mode & 0xf000) == 0xa000) {
    piVar4 = __errno_location();
    *piVar4 = 0x26;
    return -1;
  }
  iVar2 = FUN_0040f460(0xffffffff,param_1,local_d0);
  return iVar2;
}


undefined8
FUN_0040fb00(FILE *param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5,
            undefined8 param_6)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  if (param_2 == 0) {
    __fprintf_chk(param_1,1,"%s %s\n",param_3,param_4);
  }
  else {
    __fprintf_chk(param_1,1,"%s (%s) %s\n",param_2,param_3,param_4);
  }
  uVar1 = dcgettext(0,&DAT_00416ad2,5);
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
    goto LAB_0040fd7c;
  case 5:
    uVar1 = param_5[3];
    uVar4 = param_5[2];
    uVar5 = param_5[1];
    uVar6 = *param_5;
    uVar7 = dcgettext(0,"Written by %s, %s, %s,\n%s, and %s.\n",5);
LAB_0040fd7c:
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
    goto LAB_0040fe19;
  case 7:
    uVar1 = param_5[2];
    uVar4 = param_5[5];
    uVar5 = param_5[4];
    uVar6 = param_5[3];
    local_58 = param_5[1];
    uVar7 = *param_5;
    uVar3 = dcgettext(0,"Written by %s, %s, %s,\n%s, %s, %s, and %s.\n",5);
LAB_0040fe19:
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
    goto LAB_0040fbfa;
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
LAB_0040fbfa:
  uVar1 = __fprintf_chk(param_1,1,uVar3,uVar7,local_50,local_58,uVar6,uVar5,uVar4,uVar1,local_48);
  return uVar1;
}


void FUN_0040fee0(void)

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
  FUN_0040fb00();
  return;
}


void FUN_0040ff00(void)

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
  FUN_0040fb00();
  return;
}


void FUN_0040ff60(void)

{
  long lVar1;
  undefined8 in_R8;
  ulong uVar2;
  undefined8 in_R9;
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
  FUN_0040fb00();
  return;
}


void FUN_00410020(void)

{
  FILE *__stream;
  undefined8 uVar1;
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


ulong FUN_004100a0(void)

{
  __uid_t _Var1;
  undefined4 extraout_var;
  
  if (DAT_0061ba91 != '\0') {
    return (ulong)DAT_0061ba90;
  }
  _Var1 = geteuid();
  DAT_0061ba91 = 1;
  DAT_0061ba90 = _Var1 == 0;
  return CONCAT44(extraout_var,_Var1) & 0xffffffffffffff00 | (ulong)(_Var1 == 0);
}


void FUN_004100e0(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00410330();
  }
  return;
}


void FUN_00410100(ulong param_1,ulong param_2)

{
  if ((-1 < SUB168(ZEXT816(param_1) * ZEXT816(param_2),0)) &&
     (SUB168(ZEXT816(param_1) * ZEXT816(param_2) >> 0x40,0) == 0)) {
    FUN_004100e0();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00410330();
}


void thunk_FUN_004100e0(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00410330();
  }
  return;
}


void * FUN_00410140(void *param_1,size_t param_2)

{
  void *pvVar1;
  
  if ((param_2 == 0) && (param_1 != (void *)0x0)) {
    free(param_1);
    return (void *)0x0;
  }
  pvVar1 = realloc(param_1,param_2);
  if ((pvVar1 == (void *)0x0) && (param_2 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00410330();
  }
  return pvVar1;
}


void FUN_00410180(undefined8 param_1,ulong param_2,ulong param_3)

{
  if ((-1 < SUB168(ZEXT816(param_2) * ZEXT816(param_3),0)) &&
     (SUB168(ZEXT816(param_2) * ZEXT816(param_3) >> 0x40,0) == 0)) {
    FUN_00410140();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00410330();
}


void FUN_004101b0(long param_1,ulong *param_2,ulong param_3)

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
    if ((SUB168(ZEXT816(uVar2) * ZEXT816(param_3),0) < 0) || (uVar3 != 0)) goto LAB_0041020b;
  }
  else {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x5555555555555554);
    uVar3 = SUB168(auVar1 % ZEXT816(param_3),0);
    if (SUB168(auVar1 / ZEXT816(param_3),0) <= uVar2) {
LAB_0041020b:
                    /* WARNING: Subroutine does not return */
      FUN_00410330(param_1,param_2,uVar3);
    }
    uVar2 = (uVar2 >> 1) + 1 + uVar2;
  }
  *param_2 = uVar2;
  FUN_00410140(param_1,uVar2 * param_3);
  return;
}


void FUN_00410240(long param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (param_1 == 0) {
    if (uVar1 == 0) {
      *param_2 = 0x80;
      FUN_00410140(0,0x80);
      return;
    }
    if ((long)uVar1 < 0) goto LAB_0041028a;
  }
  else {
    if (0x5555555555555553 < uVar1) {
LAB_0041028a:
                    /* WARNING: Subroutine does not return */
      FUN_00410330();
    }
    uVar1 = (uVar1 >> 1) + 1 + uVar1;
  }
  *param_2 = uVar1;
  FUN_00410140(param_1,uVar1);
  return;
}


void FUN_00410290(size_t param_1)

{
  void *__s;
  
  __s = (void *)FUN_004100e0();
  memset(__s,0,param_1);
  return;
}


void FUN_004102b0(size_t param_1,ulong param_2)

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
  FUN_00410330();
}


void FUN_004102e0(void *param_1,size_t param_2)

{
  void *__dest;
  
  __dest = (void *)FUN_004100e0(param_2);
  memcpy(__dest,param_1,param_2);
  return;
}


void FUN_00410310(char *param_1)

{
  void *__dest;
  size_t sVar1;
  
  sVar1 = strlen(param_1);
  __dest = (void *)FUN_004100e0(sVar1 + 1);
  memcpy(__dest,param_1,sVar1 + 1);
  return;
}


void FUN_00410330(void)

{
  undefined8 uVar1;
  
  uVar1 = dcgettext(0,"memory exhausted",5);
                    /* WARNING: Subroutine does not return */
  error(DAT_0061b3d0,0,&DAT_00415a9d,uVar1);
}


bool FUN_00410370(void)

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

int FUN_004103e0(ulong param_1,int param_2,ulong param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  
  if (param_2 != 0x406) {
    iVar1 = fcntl((int)param_1,param_2,param_3);
    return iVar1;
  }
  if (DAT_0061ba94 < 0) {
    iVar1 = FUN_004103e0(param_1,0,param_3 & 0xffffffff);
    if (iVar1 < 0) {
      return iVar1;
    }
    if (DAT_0061ba94 != -1) {
      return iVar1;
    }
  }
  else {
    iVar1 = fcntl((int)param_1,0x406);
    if ((-1 < iVar1) || (piVar4 = __errno_location(), *piVar4 != 0x16)) {
      DAT_0061ba94 = 1;
      return iVar1;
    }
    iVar1 = FUN_004103e0(param_1 & 0xffffffff,0,param_3 & 0xffffffff);
    if (iVar1 < 0) {
      return iVar1;
    }
    DAT_0061ba94 = -1;
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


void FUN_00410520(FILE *param_1)

{
  int iVar1;
  
  if (param_1 != (FILE *)0x0) {
    iVar1 = __freading();
    if ((iVar1 != 0) && ((param_1->_flags & 0x100U) != 0)) {
      FUN_00410590(param_1,0,1);
      fflush(param_1);
      return;
    }
  }
  fflush(param_1);
  return;
}


long FUN_00410560(uint *param_1)

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


ulong FUN_00410590(FILE *param_1,__off_t param_2,int param_3)

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


void FUN_004105f0(long param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
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
      if (iVar3 <= iVar8) goto LAB_0041066c;
      iVar10 = iVar9 - iVar3;
      iVar7 = iVar3 - iVar8;
      if (iVar10 <= iVar7) break;
      lVar6 = (long)iVar8;
      iVar9 = iVar9 - iVar7;
      puVar5 = (undefined8 *)(param_1 + lVar6 * 8);
      do {
        uVar4 = *puVar5;
        *puVar5 = puVar5[iVar9 - lVar6];
        puVar5[iVar9 - lVar6] = uVar4;
        puVar5 = puVar5 + 1;
      } while ((undefined8 *)(param_1 + 8 + ((ulong)(iVar7 - 1) + lVar6) * 8) != puVar5);
      if (iVar9 <= iVar3) goto LAB_0041066c;
    }
    lVar6 = (long)iVar8;
    puVar5 = (undefined8 *)(param_1 + lVar6 * 8);
    do {
      uVar4 = *puVar5;
      *puVar5 = puVar5[iVar3 - lVar6];
      puVar5[iVar3 - lVar6] = uVar4;
      puVar5 = puVar5 + 1;
    } while (puVar5 != (undefined8 *)(param_1 + 8 + ((ulong)(iVar10 - 1) + lVar6) * 8));
    iVar8 = iVar8 + iVar10;
  }
LAB_0041066c:
  param_2[0xc] = iVar2;
  param_2[0xb] = iVar1 + (iVar2 - iVar3);
  return;
}


int FUN_004106d0(int param_1,undefined8 *param_2,char *param_3,char **param_4,undefined4 *param_5,
                int param_6,int *param_7,int param_8,undefined8 param_9)

{
  char cVar1;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  size_t sVar7;
  undefined8 uVar8;
  undefined8 uVar9;
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
      if ((iVar5 == 0) && (sVar7 = strlen(__s1_00), sVar7 == sVar15)) goto LAB_004108f0;
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
            if (local_70 == (char *)0x0) goto LAB_00410830;
          }
          else if (local_70 == (char *)0x0) {
            local_70 = (char *)calloc((long)iVar5,1);
            if (local_70 == (char *)0x0) {
              bVar3 = true;
              goto LAB_00410830;
            }
            bVar4 = true;
            local_70[(int)local_44] = '\x01';
          }
          local_70[lVar16] = '\x01';
        }
      }
LAB_00410830:
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
          uVar2 = *(undefined8 *)(param_7 + 8);
          uVar8 = *param_2;
          uVar9 = dcgettext(0,"%s: option \'%s%s\' is ambiguous; possibilities:",5);
          __fprintf_chk(stderr,1,uVar9,uVar8,param_9,uVar2);
          pcVar13 = local_70;
          __stream = stderr;
          do {
            if (*pcVar13 != '\0') {
              __fprintf_chk(__stream,1,&DAT_00416f51,param_9,*param_4);
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
LAB_004108f0:
      iVar6 = *param_7;
      *(undefined8 *)(param_7 + 8) = 0;
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
          *(undefined8 *)(param_7 + 4) = param_2[iVar5];
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
      if (param_5 != (undefined4 *)0x0) {
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
  *(undefined8 *)(param_7 + 8) = 0;
  *param_7 = *param_7 + 1;
  param_7[2] = 0;
  return 0x3f;
}


uint FUN_00410cf0(uint param_1,undefined8 *param_2,char *param_3,long param_4,undefined8 param_5,
                 ulong param_6,uint *param_7,int param_8)

{
  undefined8 uVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  uint uVar11;
  bool bVar12;
  bool bVar13;
  byte bVar14;
  undefined1 *puVar15;
  
  bVar14 = 0;
  uVar3 = param_7[1];
  if ((int)param_1 < 1) {
    return 0xffffffff;
  }
  uVar11 = *param_7;
  *(undefined8 *)(param_7 + 4) = 0;
  if (uVar11 == 0) {
    *param_7 = 1;
    uVar11 = 1;
LAB_00410d3a:
    param_7[0xc] = uVar11;
    param_7[0xb] = uVar11;
    *(undefined8 *)(param_7 + 8) = 0;
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
          goto LAB_00410e3d;
        }
        pbVar8 = *(byte **)(param_7 + 8);
      }
      param_7[10] = 0;
    }
LAB_00410e3d:
    param_7[6] = 1;
    cVar2 = *param_3;
LAB_00410e48:
    if (cVar2 == ':') {
      uVar3 = 0;
    }
    if (pbVar8 == (byte *)0x0) goto LAB_00410db8;
LAB_00410e5c:
    if (*pbVar8 == 0) goto LAB_00410db8;
  }
  else {
    if (param_7[6] == 0) goto LAB_00410d3a;
    cVar2 = *param_3;
    pbVar8 = *(byte **)(param_7 + 8);
    if ((cVar2 - 0x2bU & 0xfd) != 0) goto LAB_00410e48;
    pcVar4 = param_3 + 1;
    param_3 = param_3 + 1;
    if (*pcVar4 == ':') {
      uVar3 = 0;
    }
    if (pbVar8 != (byte *)0x0) goto LAB_00410e5c;
LAB_00410db8:
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
        FUN_004105f0(param_2,param_7);
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
LAB_00410f26:
      if (uVar11 != param_1) {
        *param_7 = uVar11;
      }
      return 0xffffffff;
    }
    lVar6 = 3;
    pbVar8 = (byte *)param_2[(int)uVar11];
    pbVar9 = pbVar8;
    pbVar10 = &DAT_00416f59;
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
          FUN_004105f0(param_2,param_7);
          uVar11 = param_7[0xb];
        }
      }
      param_7[0xc] = param_1;
      *param_7 = param_1;
      goto LAB_00410f26;
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
        puVar15 = &DAT_00416f59;
        goto LAB_00411085;
      }
      if ((int)param_6 != 0) {
        if (pbVar8[2] == 0) {
          pcVar4 = strchr(param_3,(int)(char)bVar14);
          param_6 = param_6 & 0xffffffff;
          if (pcVar4 != (char *)0x0) goto LAB_00411030;
        }
        *(byte **)(param_7 + 8) = pbVar8 + 1;
        uVar11 = FUN_004106d0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar3,
                              &DAT_00416f5a);
        if (uVar11 != 0xffffffff) {
          return uVar11;
        }
        pbVar8 = (byte *)param_2[(int)*param_7];
      }
    }
LAB_00411030:
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
          *(undefined8 *)(param_7 + 4) = 0;
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
            *(undefined8 *)(param_7 + 4) = uVar1;
          }
        }
        else {
          *(byte **)(param_7 + 4) = pbVar9;
          *param_7 = uVar7 + 1;
        }
      }
      *(undefined8 *)(param_7 + 8) = 0;
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
  *(undefined8 *)(param_7 + 4) = 0;
  puVar15 = &DAT_00416f78;
LAB_00411085:
  uVar3 = FUN_004106d0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar3,puVar15);
  return uVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004112c0(void)

{
  DAT_0061baa0 = DAT_0061b43c;
  _DAT_0061baa4 = DAT_0061b438;
  FUN_00410cf0();
  DAT_0061b43c = DAT_0061baa0;
  DAT_0061bae0 = DAT_0061bab0;
  _DAT_0061b434 = DAT_0061baa8;
  return;
}


void FUN_00411320(void)

{
  FUN_004112c0();
  return;
}


void FUN_00411340(void)

{
  FUN_004112c0();
  return;
}


void FUN_00411360(void)

{
  FUN_00410cf0();
  return;
}


void FUN_00411380(void)

{
  FUN_004112c0();
  return;
}


void FUN_004113a0(void)

{
  FUN_00410cf0();
  return;
}


size_t FUN_004113c0(wchar_t *param_1,byte *param_2,size_t param_3,mbstate_t *param_4)

{
  char cVar1;
  size_t sVar2;
  wchar_t local_1c;
  
  if (param_2 == (byte *)0x0) {
    param_3 = 1;
    param_2 = (byte *)0x416f77;
  }
  else {
    if (param_3 == 0) {
      return 0xfffffffffffffffe;
    }
    if (param_1 != (wchar_t *)0x0) goto LAB_004113e4;
  }
  param_1 = &local_1c;
LAB_004113e4:
  sVar2 = mbrtowc(param_1,(char *)param_2,param_3,param_4);
  if ((0xfffffffffffffffd < sVar2) && (cVar1 = FUN_00411540(0), cVar1 == '\0')) {
    sVar2 = 1;
    *param_1 = (uint)*param_2;
  }
  return sVar2;
}


undefined8
FUN_00411440(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4)

{
  *param_4 = param_3;
  return 0;
}


void FUN_00411450(char *param_1,int param_2,__mode_t param_3)

{
  if (param_2 != -1) {
    fchmod(param_2,param_3);
    return;
  }
  chmod(param_1,param_3);
  return;
}


int FUN_00411470(undefined4 *param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00411450(param_2,param_3,*param_1);
  return -(uint)(iVar1 != 0);
}


ulong FUN_004114a0(uint *param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  
  lVar2 = __fpending();
  uVar1 = *param_1;
  uVar3 = FUN_00412760(param_1);
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


void FUN_00411500(timespec *param_1)

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


bool FUN_00411540(int param_1)

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
    pbVar5 = &DAT_00416f7c;
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


ulong FUN_004115a0(char *param_1,ulong param_2)

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

char * FUN_004115e0(void)

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
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  char *__ptr;
  bool bVar14;
  long local_d0;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined auStack_80 [8];
  undefined8 local_78;
  
  __s1 = nl_langinfo(0xe);
  if (__s1 == (char *)0x0) {
    __s1 = "";
  }
  if (DAT_0061bad8 != (char *)0x0) goto LAB_0041161a;
  pcVar7 = getenv("CHARSETALIASDIR");
  if ((pcVar7 == (char *)0x0) || (*pcVar7 == '\0')) {
    sVar6 = 0x73;
    sVar5 = 0x65;
    __n = 100;
    pcVar7 = 
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib"
    ;
LAB_00411705:
    __file = (char *)malloc(sVar6);
    if (__file != (char *)0x0) {
      memcpy(__file,pcVar7,__n);
      __file[__n] = '/';
      goto LAB_00411726;
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
        goto LAB_00411705;
      }
      sVar6 = __n + 0xe;
    }
    __file = (char *)malloc(sVar6);
    if (__file != (char *)0x0) {
      memcpy(__file,pcVar7,__n);
      sVar5 = __n;
LAB_00411726:
      puVar13 = (undefined8 *)(__file + sVar5);
      *puVar13 = 0x2e74657372616863;
      *(undefined2 *)((long)puVar13 + 0xc) = 0x73;
      *(undefined4 *)(puVar13 + 1) = 0x61696c61;
      iVar2 = open(__file,0);
      if (-1 < iVar2) {
        __stream = fdopen(iVar2,"r");
        local_d0 = 0;
        if (__stream != (FILE *)0x0) {
          pcVar7 = (char *)0x0;
LAB_004117c0:
          pbVar8 = (byte *)__stream->_IO_read_ptr;
          if (__stream->_IO_read_end <= pbVar8) goto LAB_0041194c;
          do {
            __stream->_IO_read_ptr = (char *)(pbVar8 + 1);
            uVar4 = (uint)*pbVar8;
            __ptr = pcVar7;
            while( true ) {
              pcVar7 = __ptr;
              if ((uVar4 - 9 < 2) || (uVar4 == 0x20)) goto LAB_004117c0;
              if (uVar4 == 0x23) goto LAB_004119b1;
              ungetc(uVar4,__stream);
              iVar2 = fscanf(__stream,"%50s %50s",&local_b8,&local_78);
              puVar13 = &local_b8;
              if (iVar2 < 2) goto LAB_0041195f;
              do {
                puVar10 = puVar13;
                uVar3 = *(uint *)puVar10 + 0xfefefeff & ~*(uint *)puVar10;
                uVar4 = uVar3 & 0x80808080;
                puVar13 = (undefined8 *)((long)puVar10 + 4);
              } while (uVar4 == 0);
              bVar14 = (uVar3 & 0x8080) == 0;
              if (bVar14) {
                uVar4 = uVar4 >> 0x10;
              }
              if (bVar14) {
                puVar13 = (undefined8 *)((long)puVar10 + 6);
              }
              lVar11 = (long)puVar13 +
                       ((-3 - (ulong)CARRY1((byte)uVar4,(byte)uVar4)) - (long)&local_b8);
              puVar13 = &local_78;
              do {
                puVar10 = puVar13;
                uVar3 = *(uint *)puVar10 + 0xfefefeff & ~*(uint *)puVar10;
                uVar4 = uVar3 & 0x80808080;
                puVar13 = (undefined8 *)((long)puVar10 + 4);
              } while (uVar4 == 0);
              bVar14 = (uVar3 & 0x8080) == 0;
              if (bVar14) {
                uVar4 = uVar4 >> 0x10;
              }
              if (bVar14) {
                puVar13 = (undefined8 *)((long)puVar10 + 6);
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
                FUN_00412760(__stream);
                goto LAB_00411764;
              }
              uVar12 = lVar11 + 1;
              puVar13 = (undefined8 *)(pcVar7 + (-2 - lVar11) + (local_d0 - local_c0));
              uVar4 = (uint)uVar12;
              if (uVar4 < 8) {
                if ((uVar12 & 4) == 0) {
                  if (uVar4 != 0) {
                    *(undefined *)puVar13 = (undefined)local_b8;
                    if ((uVar12 & 2) != 0) {
                      *(undefined2 *)((long)puVar13 + ((uVar12 & 0xffffffff) - 2)) =
                           *(undefined2 *)((long)&local_b8 + ((uVar12 & 0xffffffff) - 2));
                    }
                  }
                }
                else {
                  *(undefined4 *)puVar13 = (undefined4)local_b8;
                  *(undefined4 *)((long)puVar13 + ((uVar12 & 0xffffffff) - 4)) =
                       *(undefined4 *)((long)&local_b8 + ((uVar12 & 0xffffffff) - 4));
                }
              }
              else {
                *puVar13 = CONCAT44(local_b8._4_4_,(undefined4)local_b8);
                *(undefined8 *)((long)puVar13 + ((uVar12 & 0xffffffff) - 8)) =
                     *(undefined8 *)((long)&local_b8 + ((uVar12 & 0xffffffff) - 8));
                lVar11 = (long)puVar13 - ((ulong)(puVar13 + 1) & 0xfffffffffffffff8);
                uVar4 = uVar4 + (int)lVar11 & 0xfffffff8;
                if (7 < uVar4) {
                  uVar3 = 0;
                  do {
                    uVar12 = (ulong)uVar3;
                    uVar3 = uVar3 + 8;
                    *(undefined8 *)(((ulong)(puVar13 + 1) & 0xfffffffffffffff8) + uVar12) =
                         *(undefined8 *)((long)&local_b8 + (uVar12 - lVar11));
                  } while (uVar3 < uVar4);
                }
              }
              uVar12 = local_c0 + 1;
              puVar13 = (undefined8 *)(pcVar7 + (local_d0 - local_c0) + -1);
              uVar4 = (uint)uVar12;
              if (uVar4 < 8) {
                if ((uVar12 & 4) == 0) {
                  if (uVar4 != 0) {
                    *(undefined *)puVar13 = (undefined)local_78;
                    if ((uVar12 & 2) != 0) {
                      *(undefined2 *)((long)puVar13 + ((uVar12 & 0xffffffff) - 2)) =
                           *(undefined2 *)((long)auStack_80 + (uVar12 & 0xffffffff) + 6);
                    }
                  }
                }
                else {
                  *(undefined4 *)puVar13 = (undefined4)local_78;
                  *(undefined4 *)((long)puVar13 + ((uVar12 & 0xffffffff) - 4)) =
                       *(undefined4 *)((long)auStack_80 + (uVar12 & 0xffffffff) + 4);
                }
              }
              else {
                *puVar13 = CONCAT44(local_78._4_4_,(undefined4)local_78);
                *(undefined8 *)((long)puVar13 + ((uVar12 & 0xffffffff) - 8)) =
                     *(undefined8 *)((long)auStack_80 + (uVar12 & 0xffffffff));
                lVar11 = (long)puVar13 - ((ulong)(puVar13 + 1) & 0xfffffffffffffff8);
                uVar4 = uVar4 + (int)lVar11 & 0xfffffff8;
                if (7 < uVar4) {
                  uVar3 = 0;
                  do {
                    uVar12 = (ulong)uVar3;
                    uVar3 = uVar3 + 8;
                    *(undefined8 *)(((ulong)(puVar13 + 1) & 0xfffffffffffffff8) + uVar12) =
                         *(undefined8 *)((long)&local_78 + (uVar12 - lVar11));
                  } while (uVar3 < uVar4);
                }
              }
              pbVar8 = (byte *)__stream->_IO_read_ptr;
              if (pbVar8 < __stream->_IO_read_end) break;
LAB_0041194c:
              uVar4 = __uflow(__stream);
              __ptr = pcVar7;
              if (uVar4 == 0xffffffff) goto LAB_0041195f;
            }
          } while( true );
        }
        close(iVar2);
      }
      goto LAB_0041175e;
    }
  }
  DAT_0061bad8 = "";
LAB_0041161a:
  cVar1 = *DAT_0061bad8;
  pcVar7 = DAT_0061bad8;
  do {
    if (cVar1 == '\0') {
LAB_00411674:
      if (*__s1 == '\0') {
        __s1 = "ASCII";
      }
      return __s1;
    }
    iVar2 = strcmp(__s1,pcVar7);
    if ((iVar2 == 0) || ((cVar1 == '*' && (pcVar7[1] == '\0')))) {
      sVar6 = strlen(pcVar7);
      __s1 = pcVar7 + sVar6 + 1;
      goto LAB_00411674;
    }
    sVar6 = strlen(pcVar7);
    sVar5 = strlen(pcVar7 + sVar6 + 1);
    pcVar7 = pcVar7 + sVar6 + 1 + sVar5 + 1;
    cVar1 = *pcVar7;
  } while( true );
LAB_004119b1:
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
  if (uVar4 == 0xffffffff) goto LAB_0041195f;
  goto LAB_004117c0;
LAB_0041195f:
  FUN_00412760(__stream);
  if (local_d0 == 0) {
LAB_0041175e:
    pcVar7 = "";
  }
  else {
    pcVar7[local_d0] = '\0';
  }
LAB_00411764:
  free(__file);
  DAT_0061bad8 = pcVar7;
  goto LAB_0041161a;
}


void FUN_00411b50(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_004100e0(0x18);
  *puVar1 = param_1;
  puVar1[2] = 0;
  puVar1[1] = 0;
  return;
}


long * FUN_00411b80(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00411da0();
  plVar2 = (long *)0x0;
  if (lVar1 != 0) {
    plVar2 = (long *)FUN_004100e0(0x18);
    *plVar2 = lVar1;
    plVar2[2] = 0;
    plVar2[1] = 0;
  }
  return plVar2;
}


undefined8 FUN_00411bb0(undefined8 *param_1)

{
  return *param_1;
}


ulong FUN_00411bc0(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  byte bVar2;
  undefined8 uVar3;
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
      FUN_004120b0(uVar3,local_40,lVar7);
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


void FUN_00411cc0(void *param_1)

{
  __explicit_bzero_chk(param_1,0x18,0xffffffffffffffff);
  free(param_1);
  return;
}


undefined4 FUN_00411ce0(undefined8 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  uVar2 = FUN_00412210(*param_1);
  piVar3 = __errno_location();
  iVar1 = *piVar3;
  __explicit_bzero_chk(param_1,0x18,0xffffffffffffffff);
  free(param_1);
  *piVar3 = iVar1;
  return uVar2;
}


void FUN_00411d40(long param_1)

{
  undefined8 uVar1;
  int *piVar2;
  undefined8 uVar3;
  
  if (param_1 != 0) {
    uVar1 = FUN_0040e020();
    piVar2 = __errno_location();
    if (*piVar2 == 0) {
      uVar3 = dcgettext(0,"%s: end of file",5);
    }
    else {
      uVar3 = dcgettext(0,"%s: read error",5);
    }
                    /* WARNING: Subroutine does not return */
    error(DAT_0061b3d0,*piVar2,uVar3,uVar1);
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


FILE ** FUN_00411da0(FILE *param_1,ulong param_2)

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
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  bVar11 = 0;
  if (param_2 == 0) {
    ppFVar3 = (FILE **)FUN_004100e0(0x1038);
    *ppFVar3 = (FILE *)0x0;
    ppFVar3[1] = (FILE *)FUN_00411d40;
    ppFVar3[2] = (FILE *)0x0;
    return ppFVar3;
  }
  if (param_1 != (FILE *)0x0) {
    pFVar2 = (FILE *)FUN_004127e0(param_1,&DAT_0041703c);
    if (pFVar2 != (FILE *)0x0) {
      ppFVar3 = (FILE **)FUN_004100e0(0x1038);
      *ppFVar3 = pFVar2;
      __n = 0x1000;
      if (param_2 < 0x1001) {
        __n = param_2;
      }
      ppFVar3[1] = (FILE *)FUN_00411d40;
      ppFVar3[2] = param_1;
      setvbuf(pFVar2,(char *)(ppFVar3 + 3),0,__n);
      return ppFVar3;
    }
    return (FILE **)0x0;
  }
  ppFVar4 = (FILE **)FUN_004100e0(0x1038);
  *ppFVar4 = (FILE *)0x0;
  ppFVar3 = ppFVar4 + 4;
  ppFVar4[1] = (FILE *)FUN_00411d40;
  ppFVar4[2] = (FILE *)0x0;
  ppFVar4[3] = (FILE *)0x0;
  __fd = open("/dev/urandom",0);
  if (__fd < 0) {
    uVar5 = 0x14;
    gettimeofday((timeval *)&local_48,(__timezone_ptr_t)0x0);
    *(__uid_t *)(ppFVar4 + 4) = local_48;
    *(undefined4 *)((long)ppFVar4 + 0x24) = uStack_44;
    *(undefined4 *)(ppFVar4 + 5) = uStack_40;
    *(undefined4 *)((long)ppFVar4 + 0x2c) = uStack_3c;
    local_48 = getpid();
    *(__uid_t *)(ppFVar4 + 6) = local_48;
  }
  else {
    if (0x800 < param_2) {
      param_2 = 0x800;
    }
    pFVar2 = (FILE *)__read_chk(__fd,ppFVar3,param_2,0x1018);
    close(__fd);
    if (0x7ff < (long)pFVar2) goto LAB_00411ea8;
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
    if (0x7ff < lVar7) goto LAB_00411ea8;
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
    if (0x7ff < uVar5) goto LAB_00411ea8;
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
LAB_00411ea8:
  FUN_00412510(ppFVar3);
  return ppFVar4;
}


void FUN_00412090(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 8) = param_2;
  return;
}


void FUN_004120a0(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}


void FUN_004120b0(FILE **param_1,void *param_2,FILE *param_3)

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
    goto LAB_004121c5;
  }
  do {
    param_2 = (void *)((long)__dest + (long)pFVar5);
    param_3 = (FILE *)((long)param_3 - (long)pFVar5);
    memcpy(__dest,(void *)((0x800 - (long)pFVar5) + (long)__src),(size_t)pFVar5);
    if (((ulong)param_2 & 7) == 0) goto LAB_004121ab;
    pFVar5 = (FILE *)0x800;
    FUN_00412260(ppFVar1,__src);
    __dest = param_2;
  } while ((FILE *)0x800 < param_3);
  goto LAB_004121bf;
LAB_004121ab:
  while ((FILE *)0x7ff < param_3) {
    FUN_00412260(ppFVar1,param_2);
    param_3 = (FILE *)&param_3[-10]._fileno;
    param_2 = (void *)((long)param_2 + 0x800);
    if (param_3 == (FILE *)0x0) {
      param_1[3] = (FILE *)0x0;
      return;
    }
  }
  FUN_00412260(ppFVar1,__src);
LAB_004121bf:
  pFVar5 = (FILE *)0x800;
LAB_004121c5:
  memcpy(param_2,__src,(size_t)param_3);
  param_1[3] = (FILE *)((long)pFVar5 - (long)param_3);
  return;
}


undefined8 FUN_00412210(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  __explicit_bzero_chk(param_1,0x1038,0xffffffffffffffff);
  free(param_1);
  if (lVar1 != 0) {
    uVar2 = FUN_00412760(lVar1);
    return uVar2;
  }
  return 0;
}


void FUN_00412260(long *param_1,long *param_2)

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


void FUN_00412510(ulong *param_1)

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


void FUN_00412750(undefined8 param_1)

{
  FUN_004103e0(param_1,0,3);
  return;
}


int FUN_00412760(FILE *param_1)

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
      if (_Var4 == -1) goto LAB_004127c7;
    }
    iVar1 = FUN_00410520(param_1);
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
LAB_004127c7:
  iVar1 = fclose(param_1);
  return iVar1;
}


FILE * FUN_004127e0(char *param_1,char *param_2)

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
    iVar2 = FUN_00412750(uVar1);
    if (iVar2 < 0) {
      piVar5 = __errno_location();
      pFVar4 = (FILE *)0x0;
      iVar2 = *piVar5;
      FUN_00412760(__stream);
      *piVar5 = iVar2;
    }
    else {
      iVar3 = FUN_00412760(__stream);
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


/* WARNING: Removing unreachable block (ram,0x004128b3) */
/* WARNING: Removing unreachable block (ram,0x004128b8) */

void FUN_00412880(void)

{
  __DT_INIT();
  return;
}


void FUN_004128e0(void)

{
  return;
}


void FUN_004128f0(undefined8 param_1)

{
  __cxa_atexit(param_1,0,DAT_0061b3a8);
  return;
}


undefined8 FUN_00412908(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code **ppcVar1;
  
  for (ppcVar1 = (code **)&DAT_0061ae30; *ppcVar1 != (code *)0xffffffffffffffff;
      ppcVar1 = ppcVar1 + -1) {
    (**ppcVar1)();
  }
  return param_3;
}


void __DT_FINI(void)

{
  FUN_00403221();
  return;
}

