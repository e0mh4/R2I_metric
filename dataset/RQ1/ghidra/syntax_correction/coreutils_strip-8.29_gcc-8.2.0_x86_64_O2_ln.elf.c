
#include "decompile_ghidra.h"
#define __int64 long long
#define __int32 int
#define __int16 short
#define __int8 char

void FUN_004021d0(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_004021d5(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_004021da(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_004021df(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void switchD_00406450caseD_b(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_004021e9(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_004021ee(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_004021f3(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_004021f8(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void switchD_0040853acaseD_0(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Could not reconcile some variable overlaps */

byte FUN_00402210(ulong param_1,undefined *param_2)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  undefined uVar6;
  void *__ptr;
  char *pcVar7;
  uint *puVar8;
  undefined uVar9;
  int *piVar10;
  uint uVar11;
  undefined *puVar12;
  undefined *puVar13;
  char *pcVar14;
  ulong uVar15;
  char *__filename;
  char *pcVar16;
  undefined auVar17 [16];
  undefined uStack_e8;
  char *local_e0;
  char **local_d8;
  uint local_d0;
  byte local_c9;
  stat local_c8;
  
  bVar4 = 0;
  bVar2 = false;
  uVar15 = 0;
  param_1 = param_1 & 0xffffffff;
  FUN_00406260(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils",
                 "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale"
                );
  textdomain("coreutils");
  FUN_0040bb40(FUN_00404960);
  DAT_006113e0 = 0;
  DAT_006113e1 = 0;
  DAT_006113e3 = 0;
  DAT_006113e2 = '\0';
  DAT_006113e6 = '\0';
  local_e0 = (char *)0x0;
  __filename = (char *)0x0;
  pcVar16 = (char *)0x0;
LAB_004022a0:
  iVar5 = FUN_0040a1b0(param_1 & 0xffffffff,param_2,"bdfinrst:vFLPS:T",&PTR_s_backup_0040cc00,0);
  if (iVar5 == -1) {
    uVar11 = (int)param_1 - DAT_0061137c;
    param_1 = (ulong)uVar11;
    param_2 = param_2 + DAT_0061137c;
    if ((int)uVar11 < 1) goto LAB_00402823;
    if ((char)uVar15 == '\0') {
      if ((__filename != (char *)0x0) || (__filename = ".", uVar11 == 1)) goto LAB_00402524;
      local_d8 = (char **)(param_2 + (long)(int)uVar11 + -1);
      __filename = *local_d8;
      pcVar7 = (char *)FUN_00404ca0(__filename);
      uVar15 = 0xffffffffffffffff;
      pcVar14 = pcVar7;
      goto code_r0x004026a5;
    }
    if (__filename == (char *)0x0) {
      if (uVar11 == 2) goto LAB_004025bd;
      if (uVar11 == 1) goto LAB_004028a6;
      param_1 = FUN_00407c30(4,param_2[2]);
      pcVar14 = "extra operand %s";
    }
    else {
      uVar6 = dcgettext(0,"cannot combine --target-directory and --no-target-directory",5);
      error(1,0,uVar6);
LAB_004028a6:
      param_1 = FUN_00407c30(4,*param_2);
      pcVar14 = "missing destination file operand after %s";
    }
    uVar6 = dcgettext(0,pcVar14,5);
    error(0,0,uVar6,param_1);
  }
  else {
    if (iVar5 == 0x62) {
      bVar2 = true;
      if (DAT_006115a0 != (char *)0x0) {
        pcVar16 = DAT_006115a0;
      }
      goto LAB_004022a0;
    }
    if (iVar5 < 99) {
LAB_00402370:
      if (iVar5 == 0x4c) {
        DAT_006113e4 = 1;
      }
      else {
        if (iVar5 < 0x4d) goto LAB_004023c8;
        if (iVar5 == 0x53) {
          local_e0 = DAT_006115a0;
          bVar2 = true;
        }
        else if (iVar5 == 0x54) {
          uVar15 = 1;
        }
        else {
          if (iVar5 != 0x50) goto LAB_004023b9;
          DAT_006113e4 = 0;
        }
      }
      goto LAB_004022a0;
    }
    if (iVar5 == 0x6e) {
      DAT_006112f0 = '\0';
      goto LAB_004022a0;
    }
    if (iVar5 < 0x6f) {
      if (iVar5 == 0x66) {
        DAT_006113e2 = '\x01';
        DAT_006113e3 = 0;
      }
      else {
        if (iVar5 != 0x69) {
          if (iVar5 != 100) goto LAB_004023b9;
          goto LAB_00402461;
        }
        DAT_006113e2 = '\0';
        DAT_006113e3 = 1;
      }
      goto LAB_004022a0;
    }
    if (iVar5 == 0x73) {
      DAT_006113e6 = '\x01';
      goto LAB_004022a0;
    }
    if (iVar5 < 0x74) {
      if (iVar5 != 0x72) goto LAB_004023b9;
      DAT_006113e5 = '\x01';
      goto LAB_004022a0;
    }
    if (iVar5 == 0x74) {
      if (__filename != (char *)0x0) goto LAB_00402926;
      iVar5 = __xstat(1,DAT_006115a0,&local_c8);
      __filename = DAT_006115a0;
      if (iVar5 == 0) {
        if ((local_c8.st_mode & 0xf000) != 0x4000) {
          param_1 = FUN_00407c30(4,DAT_006115a0);
          uVar6 = dcgettext(0,"target %s is not a directory",5);
          iVar5 = error(1,0,uVar6,param_1);
          goto LAB_00402370;
        }
        goto LAB_004022a0;
      }
      goto LAB_004028e5;
    }
    if (iVar5 == 0x76) {
      DAT_006113e1 = 1;
      goto LAB_004022a0;
    }
  }
LAB_004023b9:
  while( true ) {
    while( true ) {
      iVar5 = FUN_004032b0(1);
LAB_004023c8:
      if (iVar5 != -0x82) break;
      FUN_004032b0(0);
LAB_004027b4:
      uVar6 = FUN_00407c30(4,__filename);
      uVar9 = dcgettext(0,"failed to access %s",5);
      error(1,uVar15,uVar9,uVar6);
LAB_004027ea:
      uVar15 = 0;
LAB_004027ed:
      param_1 = FUN_00407c30(4,__filename);
      uVar6 = dcgettext(0,"target %s is not a directory",5);
      error(1,uVar15,uVar6,param_1);
LAB_00402823:
      uVar6 = dcgettext(0,"missing file operand",5);
      error(0,0,uVar6);
    }
    if (iVar5 == 0x46) break;
    if (iVar5 == -0x83) {
      FUN_00408910(stdout,&DAT_0040bc39,"GNU coreutils",PTR_DAT_006112f8,"Mike Parker",
                   "David MacKenzie",0);
                    /* WARNING: Subroutine does not return */
      exit(0);
    }
  }
LAB_00402461:
  DAT_006113e0 = 1;
  goto LAB_004022a0;
  while( true ) {
    uVar15 = uVar15 - 1;
    cVar1 = *pcVar14;
    pcVar14 = pcVar14 + (ulong)bVar4 * -2 + 1;
    if (cVar1 == '\0') break;
code_r0x004026a5:
    if (uVar15 == 0) break;
  }
  local_d0 = 1;
  if (~uVar15 != 1) {
    local_d0 = (uint)(pcVar7[~uVar15 - 2] == '/');
  }
  local_c9 = (byte)local_d0;
  if (DAT_006112f0 == '\0') {
    iVar5 = __lxstat(1,__filename,&local_c8);
  }
  else {
    iVar5 = __xstat(1,__filename,&local_c8);
  }
  if (iVar5 == 0) goto LAB_00402775;
  puVar8 = (uint *)__errno_location();
  uVar11 = *puVar8;
  uVar15 = (ulong)uVar11;
  if (uVar11 == 0) goto LAB_00402775;
  if (0x28 < uVar11) goto LAB_004027b4;
  if ((0x11000100004U >> (uVar15 & 0x3f) & 1) == 0) goto LAB_004027b4;
  if (local_d0 != 0) goto LAB_004027ed;
  do {
    if ((int)param_1 == 2) goto LAB_004025bd;
    param_1 = FUN_00407c30(4,*local_d8);
    uVar6 = dcgettext(0,"target %s is not a directory",5);
    error(1,0,uVar6,param_1);
LAB_00402775:
    if (((local_c8.st_mode & 0xf000) == 0x4000) < local_c9) goto LAB_004027ea;
  } while ((local_c8.st_mode & 0xf000) != 0x4000);
  uVar11 = (int)param_1 - 1;
  __filename = (char *)param_2[(int)uVar11];
LAB_00402524:
  iVar5 = 0;
  if (bVar2) {
    uVar6 = dcgettext(0,"backup type",5);
    iVar5 = FUN_00404280(uVar6,pcVar16);
  }
  DAT_006113e8 = iVar5;
  FUN_00403ce0(local_e0);
  if ((DAT_006113e5 == '\0') || (DAT_006113e6 != '\0')) {
    if (__filename == (char *)0x0) {
      bVar4 = FUN_00402a30(*param_2,param_2[1]);
    }
    else {
      if ((((uVar11 != 1) && (DAT_006113e2 != '\0')) && (DAT_006113e6 == '\0')) &&
         ((DAT_006113e8 != 3 &&
          (DAT_006113d8 = FUN_004057d0(0x3d,0,FUN_00406190,FUN_004061d0,FUN_00406240),
          DAT_006113d8 == 0)))) {
                    /* WARNING: Subroutine does not return */
        FUN_00408ca0();
      }
      bVar4 = 1;
      puVar12 = param_2;
      do {
        puVar13 = puVar12 + 1;
        uVar6 = FUN_00404ca0(*puVar12);
        __ptr = (void *)FUN_00404e40(__filename,uVar6,&local_c8);
        FUN_00404d30(local_c8.st_dev);
        bVar3 = FUN_00402a30(*puVar12,__ptr);
        bVar4 = bVar4 & bVar3;
        free(__ptr);
        puVar12 = puVar13;
      } while (puVar13 != param_2 + (ulong)(uVar11 - 1) + 1);
    }
    return bVar4 ^ 1;
  }
  uVar6 = dcgettext(0,"cannot do --relative without --symbolic",5);
  error(1,0,uVar6);
LAB_004028e5:
  uVar6 = FUN_00407c30(4,DAT_006115a0);
  uVar9 = dcgettext(0,"failed to access %s",5);
  piVar10 = __errno_location();
  error(1,*piVar10,uVar9,uVar6);
LAB_00402926:
  uVar6 = dcgettext(0,"multiple target directories specified",5);
  auVar17 = error(1,0,uVar6);
  uVar6 = uStack_e8;
  uStack_e8 = SUB168(auVar17,0);
  (*(code *)PTR___libc_start_main_00610ff0)
            (FUN_00402210,uVar6,&local_e0,FUN_0040bad0,FUN_0040bb30,SUB168(auVar17 >> 0x40,0),
             &uStack_e8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
LAB_004025bd:
  uVar11 = 2;
  __filename = (char *)0x0;
  goto LAB_00402524;
}


void FUN_00402950(undefined param_1,undefined param_2,undefined param_3)

{
  undefined unaff_retaddr;
  undefined auStack_8 [8];
  
  (*(code *)PTR___libc_start_main_00610ff0)
            (FUN_00402210,unaff_retaddr,&stack0x00000008,FUN_0040bad0,FUN_0040bb30,param_3,auStack_8
            );
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* WARNING: Removing unreachable block (ram,0x00402988) */
/* WARNING: Removing unreachable block (ram,0x00402992) */

void FUN_0040297b(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x004029c9) */

void FUN_0040299a(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00402a06) */

void FUN_004029d1(void)

{
  if (DAT_006113c8 != '\0') {
    return;
  }
  FUN_0040297b();
  DAT_006113c8 = 1;
  return;
}


/* WARNING: Removing unreachable block (ram,0x004029c9) */

void thunk_FUN_0040299a(void)

{
  return;
}


uint FUN_00402a30(char *param_1,char *param_2)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  undefined uVar6;
  undefined uVar7;
  char *pcVar8;
  uint *puVar9;
  undefined uVar10;
  void *__ptr;
  void *__ptr_00;
  void *__ptr_01;
  char *__ptr_02;
  undefined uVar11;
  uint uVar12;
  byte bVar13;
  char *__ptr_03;
  char cVar14;
  bool bVar15;
  stat local_158;
  stat local_c8;
  
  bVar2 = DAT_006113e6;
  uVar12 = (uint)DAT_006113e6;
  if (DAT_006113e6 == 0) {
    if (DAT_006113e4 == '\0') {
      iVar4 = __lxstat(1,param_1,&local_158);
    }
    else {
      iVar4 = __xstat(1,param_1,&local_158);
    }
    if (iVar4 != 0) {
      uVar6 = FUN_00407c30(4,param_1);
      uVar7 = dcgettext(0,"failed to access %s",5);
      piVar5 = __errno_location();
      error(0,*piVar5,uVar7,uVar6);
      return uVar12;
    }
    if ((local_158.st_mode & 0xf000) != 0x4000) goto LAB_00402a92;
    cVar14 = DAT_006113e0;
    if (DAT_006113e0 == '\0') {
      uVar6 = FUN_00407d00(0,3,param_1);
      pcVar8 = "%s: hard link not allowed for directory";
      goto LAB_00402f2d;
    }
  }
  else {
LAB_00402a92:
    cVar14 = '\0';
  }
  bVar13 = DAT_006113e2;
  if (((DAT_006113e2 == 0) && (DAT_006113e3 == 0)) && (DAT_006113e8 == 0)) {
LAB_00402ae6:
    bVar15 = false;
    pcVar8 = (char *)0x0;
  }
  else {
    iVar4 = __lxstat(1,param_2,&local_c8);
    if (iVar4 != 0) {
      piVar5 = __errno_location();
      if (*piVar5 != 2) {
        uVar6 = FUN_00407c30(4,param_2);
        uVar7 = dcgettext(0,"failed to access %s",5);
        error(0,*piVar5,uVar7,uVar6);
        return 0;
      }
      if (((bVar13 == 0) && ((bVar2 != 0 || (DAT_006113e8 == 0)))) && (iVar4 == 0))
      goto LAB_00402c70;
      goto LAB_00402ae6;
    }
    if ((DAT_006113d8 != 0) &&
       (cVar3 = FUN_00404e00(DAT_006113d8,param_2,&local_c8), bVar13 = DAT_006113e2, cVar3 != '\0'))
    {
      uVar6 = FUN_00407b50(1,4,param_1);
      uVar7 = FUN_00407b50(0,4,param_2);
      uVar10 = dcgettext(0,"will not overwrite just-created %s with %s",5);
      goto LAB_00402ff0;
    }
    if (bVar13 == 0) {
      if ((DAT_006113e6 == 0) && (DAT_006113e8 != 0)) goto LAB_00402f6b;
    }
    else if (DAT_006113e8 == 0) {
      if ((DAT_006113e6 == 0) || (iVar4 = __xstat(1,param_1,&local_158), iVar4 == 0)) {
LAB_00402f6b:
        if (((local_158.st_ino == local_c8.st_ino) && (local_158.st_dev == local_c8.st_dev)) &&
           ((local_158.st_nlink == 1 || (cVar3 = FUN_004080f0(param_1,param_2), cVar3 != '\0')))) {
          uVar6 = FUN_00407b50(1,4,param_2);
          uVar7 = FUN_00407b50(0,4,param_1);
          uVar10 = dcgettext(0,"%s and %s are the same file",5);
LAB_00402ff0:
          error(0,0,uVar10,uVar7,uVar6);
          return 0;
        }
      }
    }
    else if (DAT_006113e6 == 0) goto LAB_00402f6b;
LAB_00402c70:
    if ((local_c8.st_mode & 0xf000) == 0x4000) {
      uVar6 = FUN_00407d00(0,3,param_2);
      pcVar8 = "%s: cannot overwrite directory";
LAB_00402f2d:
      uVar7 = dcgettext(0,pcVar8,5);
      error(0,0,uVar7,uVar6);
      return 0;
    }
    uVar12 = (uint)DAT_006113e3;
    if (DAT_006113e3 != 0) {
      uVar7 = FUN_00407c30(4,param_2);
      uVar6 = DAT_00611410;
      uVar10 = dcgettext(0,"%s: replace %s? ",5);
      __fprintf_chk(stderr,1,uVar10,uVar6,uVar7);
      cVar3 = FUN_00408d10();
      if (cVar3 == '\0') {
        return uVar12;
      }
      DAT_006113e2 = 1;
    }
    if (DAT_006113e8 == 0) goto LAB_00402ae6;
    pcVar8 = (char *)FUN_00404240(param_2);
    iVar4 = rename(param_2,pcVar8);
    if (iVar4 != 0) {
      piVar5 = __errno_location();
      iVar4 = *piVar5;
      free(pcVar8);
      if (iVar4 != 2) {
        uVar6 = FUN_00407c30(4,param_2);
        uVar7 = dcgettext(0,"cannot backup %s",5);
        error(0,iVar4,uVar7,uVar6);
        return 0;
      }
      goto LAB_00402ae6;
    }
    bVar15 = pcVar8 != (char *)0x0;
  }
  __ptr_02 = param_1;
  __ptr_03 = (char *)0x0;
  if (DAT_006113e5 != '\0') {
    __ptr = (void *)FUN_00404bc0(param_2);
    __ptr_00 = (void *)FUN_004042d0(__ptr,2);
    __ptr_01 = (void *)FUN_004042d0(param_1,2);
    if ((__ptr_00 == (void *)0x0) || (__ptr_01 == (void *)0x0)) {
LAB_00403060:
      free(__ptr);
      free(__ptr_00);
      free(__ptr_01);
    }
    else {
      __ptr_02 = (char *)FUN_00408a50(0x1000);
      cVar3 = FUN_00403a10(__ptr_01,__ptr_00,__ptr_02,0x1000);
      if (cVar3 == '\0') {
        free(__ptr_02);
        goto LAB_00403060;
      }
      free(__ptr);
      free(__ptr_00);
      free(__ptr_01);
      __ptr_03 = __ptr_02;
      if (__ptr_02 != (char *)0x0) goto LAB_00402afb;
    }
    __ptr_02 = (char *)FUN_00408c80(param_1);
    __ptr_03 = __ptr_02;
  }
LAB_00402afb:
  if (DAT_006113e6 == 0) {
    uVar12 = FUN_00403750(0xffffff9c,__ptr_02,0xffffff9c,param_2,(ulong)(DAT_006113e4 != '\0') << 10
                         );
  }
  else {
    uVar12 = FUN_00403890(__ptr_02,0xffffff9c,param_2,bVar15 | DAT_006113e2);
  }
  if (-1 < (int)uVar12) {
    if (DAT_006113e6 == 0) {
      FUN_00404d70(DAT_006113d8,param_2,&local_158);
    }
    if (DAT_006113e1 != '\0') {
      if (pcVar8 != (char *)0x0) {
        uVar6 = FUN_00407c30(4,pcVar8);
        __printf_chk(1,"%s ~ ",uVar6);
      }
      uVar6 = FUN_00407b50(1,4,__ptr_02);
      uVar11 = 0x3d;
      if (DAT_006113e6 != 0) {
        uVar11 = 0x2d;
      }
      uVar7 = FUN_00407b50(0,4,param_2);
      __printf_chk(1,"%s %c> %s\n",uVar7,uVar11,uVar6);
    }
    goto LAB_00402bd5;
  }
  uVar6 = FUN_00407b50(1,4,__ptr_02);
  uVar7 = FUN_00407b50(0,4,param_2);
  puVar9 = (uint *)__errno_location();
  if (DAT_006113e6 == 0) {
    uVar1 = *puVar9;
    if (uVar1 == 0x1f) {
      if (cVar14 != '\0') goto LAB_00403038;
      uVar10 = dcgettext(0,"failed to create hard link to %.0s%s",5);
    }
    else if (((uVar1 == 0x7a) || (uVar1 == 0x11)) || ((uVar1 & 0xfffffffd) == 0x1c)) {
      uVar10 = dcgettext(0,"failed to create hard link %s",5);
    }
    else {
LAB_00403038:
      uVar10 = dcgettext(0,"failed to create hard link %s => %s",5);
    }
  }
  else if ((*puVar9 == 0x24) || (*__ptr_02 == '\0')) {
    uVar10 = dcgettext(0,"failed to create symbolic link %s -> %s",5);
  }
  else {
    uVar10 = dcgettext(0,"failed to create symbolic link %s",5);
  }
  error(0,*puVar9,uVar10,uVar7,uVar6);
  if ((pcVar8 != (char *)0x0) && (iVar4 = rename(pcVar8,param_2), iVar4 != 0)) {
    uVar6 = FUN_00407c30(4,param_2);
    uVar7 = dcgettext(0,"cannot un-backup %s",5);
    error(0,*puVar9,uVar7,uVar6);
  }
LAB_00402bd5:
  free(pcVar8);
  free(__ptr_03);
  return ~uVar12 >> 0x1f;
}


void FUN_004032b0(int param_1)

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
  
  uVar5 = DAT_00611410;
  bVar13 = 0;
  if (param_1 != 0) {
    uVar3 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(stderr,1,uVar3,uVar5);
    goto LAB_004032ef;
  }
  uVar3 = dcgettext(0,
                    "Usage: %s [OPTION]... [-T] TARGET LINK_NAME   (1st form)\n  or:  %s [OPTION]... TARGET                  (2nd form)\n  or:  %s [OPTION]... TARGET... DIRECTORY     (3rd form)\n  or:  %s [OPTION]... -t DIRECTORY TARGET...  (4th form)\n"
                    ,5);
  __printf_chk(1,uVar3,uVar5,uVar5,uVar5,uVar5);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "In the 1st form, create a link to TARGET with the name LINK_NAME.\nIn the 2nd form, create a link to TARGET in the current directory.\nIn the 3rd and 4th forms, create links to each TARGET in DIRECTORY.\nCreate hard links by default, symbolic links with --symbolic.\nBy default, each destination (name of new link) should not already exist.\nWhen creating hard links, each TARGET must exist.  Symbolic links\ncan hold arbitrary text; if later resolved, a relative link is\ninterpreted in relation to its parent directory.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nMandatory arguments to long options are mandatory for short options too.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --backup[=CONTROL]      make a backup of each existing destination file\n  -b                          like --backup but does not accept an argument\n  -d, -F, --directory         allow the superuser to attempt to hard link\n                                directories (note: will probably fail due to\n                                system restrictions, even for the superuser)\n  -f, --force                 remove existing destination files\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -i, --interactive           prompt whether to remove destinations\n  -L, --logical               dereference TARGETs that are symbolic links\n  -n, --no-dereference        treat LINK_NAME as a normal file if\n                                it is a symbolic link to a directory\n  -P, --physical              make hard links directly to symbolic links\n  -r, --relative              create symbolic links relative to link location\n  -s, --symbolic              make symbolic links instead of hard links\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -S, --suffix=SUFFIX         override the usual backup suffix\n  -t, --target-directory=DIRECTORY  specify the DIRECTORY in which to create\n                                the links\n  -T, --no-target-directory   treat LINK_NAME as a normal file always\n  -v, --verbose               print name of each linked file\n"
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
  uVar5 = dcgettext(0,
                    "\nUsing -s ignores -L and -P.  Otherwise, the last option specified controls\nbehavior when a TARGET is a symbolic link, defaulting to %s.\n"
                    ,5);
  __printf_chk(1,uVar5,&DAT_0040bc3c);
  local_88 = &DAT_0040bc3f;
  local_80 = "test invocation";
  local_78[0] = (byte *)0x40bcb9;
  local_78[1] = (byte *)0x40bc51;
  local_78[2] = (byte *)0x40bc67;
  local_78[3] = (byte *)0x40bc71;
  local_78[4] = (byte *)0x40bc80;
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
    pbVar10 = &DAT_0040bc39;
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
        pbVar9 = &DAT_0040bc39;
        goto LAB_00403673;
      }
    }
    pbVar9 = &DAT_0040bc39;
    uVar5 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    pcVar4 = " invocation";
    __printf_chk(1,uVar5,"https://www.gnu.org/software/coreutils/",&DAT_0040bc39);
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
      iVar2 = strncmp(pcVar4,"en_",3);
      if (iVar2 != 0) {
LAB_00403673:
        uVar5 = dcgettext(0,"Report %s translation bugs to <https://translationproject.org/team/>\n"
                          ,5);
        __printf_chk(1,uVar5,&DAT_0040bc39);
      }
    }
    pcVar4 = " invocation";
    uVar5 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    __printf_chk(1,uVar5,"https://www.gnu.org/software/coreutils/",&DAT_0040bc39);
    if (pbVar9 != &DAT_0040bc39) {
      pcVar4 = "";
    }
  }
  uVar5 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(1,uVar5,pbVar9,pcVar4);
LAB_004032ef:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}


void FUN_004036a0(char *param_1,int *param_2)

{
  linkat(*param_2,*(char **)(param_2 + 2),param_2[4],param_1,param_2[5]);
  return;
}


void * FUN_004036c0(void *param_1,void *param_2)

{
  ulong __size;
  long lVar1;
  undefined *puVar2;
  
  lVar1 = FUN_00404ca0();
  __size = (lVar1 - (long)param_1) + 9;
  if ((0x100 < __size) && (param_2 = malloc(__size), param_2 == (void *)0x0)) {
    return (void *)0x0;
  }
  puVar2 = (undefined *)mempcpy(param_2,param_1,lVar1 - (long)param_1);
  *puVar2 = DAT_0040ce00;
  *(undefined *)(puVar2 + 1) = DAT_0040ce08;
  return param_2;
}


void FUN_00403730(char *param_1,char **param_2)

{
  symlinkat(*param_2,*(int *)(param_2 + 1),param_1);
  return;
}


int FUN_00403750(int param_1,char *param_2,int param_3,char *param_4,int param_5,char param_6)

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
      __old = (char *)FUN_004036c0(param_4,local_138);
      if (__old == (char *)0x0) {
        iVar1 = -1;
      }
      else {
        local_158[0] = param_1;
        local_150 = param_2;
        local_148 = param_3;
        local_144 = param_5;
        iVar1 = FUN_004082d0(__old,0,local_158,FUN_004036a0,6);
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


int FUN_00403890(char *param_1,int param_2,char *param_3,char param_4)

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
  __old = (char *)FUN_004036c0(param_3,local_138);
  if (__old != (char *)0x0) {
    local_148 = param_1;
    local_140 = param_2;
    iVar1 = FUN_004082d0(__old,0,&local_148,FUN_00403730,6);
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


undefined FUN_00403990(char *param_1,void **param_2,ulong *param_3)

{
  void *__dest;
  size_t sVar1;
  
  __dest = *param_2;
  if (__dest == (void *)0x0) {
    fputs_unlocked(param_1,stdout);
    return 0;
  }
  sVar1 = strlen(param_1);
  if (*param_3 < sVar1 || *param_3 == sVar1) {
    return 1;
  }
  memcpy(__dest,param_1,sVar1 + 1);
  *param_2 = (void *)((long)*param_2 + sVar1);
  *param_3 = *param_3 - sVar1;
  return 0;
}


uint FUN_00403a10(char *param_1,char *param_2,undefined param_3,undefined param_4)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined uVar8;
  long lVar9;
  int iVar10;
  char *pcVar11;
  char cVar12;
  int iVar13;
  bool bVar14;
  undefined local_28;
  undefined local_20;
  
  cVar4 = param_1[1];
  uVar5 = 0;
  if ((param_2[1] == '/') == (cVar4 == '/')) {
    cVar12 = *param_2;
    if (cVar12 != '\0') {
      bVar3 = cVar12 != *param_1 || *param_1 == '\0';
      if (bVar3) {
        uVar5 = 0;
      }
      else {
        lVar9 = 2;
        iVar10 = 0;
        cVar2 = param_2[1];
        while( true ) {
          cVar1 = cVar2;
          iVar13 = (int)lVar9 + -1;
          if (cVar12 == '/') {
            iVar10 = iVar13;
          }
          bVar14 = cVar4 == '\0';
          if (cVar1 == '\0') {
            if ((cVar4 == '/') || (bVar14)) goto LAB_00403ac5;
            goto LAB_00403ac1;
          }
          if ((cVar1 != cVar4) || (bVar14)) break;
          pcVar11 = param_2 + lVar9;
          cVar4 = param_1[lVar9];
          lVar9 = lVar9 + 1;
          cVar2 = *pcVar11;
          cVar12 = cVar1;
        }
        if ((cVar1 != '/') || (!bVar14)) {
LAB_00403ac1:
          iVar13 = iVar10;
          if (iVar10 == 0) {
            return (uint)bVar3;
          }
        }
LAB_00403ac5:
        param_2 = param_2 + iVar13;
        cVar4 = *param_2;
        if (cVar4 == '/') {
          cVar4 = param_2[1];
          param_2 = param_2 + 1;
        }
        pcVar11 = param_1 + iVar13 + (param_1[iVar13] == '/');
        local_28 = param_4;
        local_20 = param_3;
        if (cVar4 == '\0') {
          if (*pcVar11 == '\0') {
            pcVar11 = ".";
          }
          uVar5 = FUN_00403990(pcVar11,&local_20,&local_28);
        }
        else {
          uVar5 = FUN_00403990(&DAT_0040ce0a,&local_20,&local_28);
          cVar4 = *param_2;
          while (cVar4 != '\0') {
            if (cVar4 == '/') {
              uVar6 = FUN_00403990(&DAT_0040ce09,&local_20,&local_28);
              uVar5 = uVar5 | uVar6;
            }
            param_2 = param_2 + 1;
            cVar4 = *param_2;
          }
          if (*pcVar11 != '\0') {
            uVar6 = FUN_00403990(&DAT_0040d01e,&local_20,&local_28);
            uVar7 = FUN_00403990(pcVar11,&local_20,&local_28);
            uVar5 = uVar5 | uVar6 | uVar7;
          }
        }
        if ((char)uVar5 != '\0') {
          uVar8 = dcgettext(0,"generating relative path",5);
          error(0,0x24,&DAT_0040e363,uVar8);
        }
        uVar5 = uVar5 ^ 1;
      }
    }
  }
  return uVar5;
}


void FUN_00403c10(char *param_1,long param_2)

{
  undefined uVar1;
  undefined *puVar2;
  ulong uVar3;
  int *piVar4;
  ulong uVar5;
  ulong uVar6;
  
  puVar2 = (undefined *)FUN_00404ca0();
  uVar3 = FUN_00404d00(puVar2);
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


void FUN_00403ce0(char *param_1)

{
  char *pcVar1;
  
  if ((((param_1 != (char *)0x0) ||
       (param_1 = getenv("SIMPLE_BACKUP_SUFFIX"), param_1 != (char *)0x0)) && (*param_1 != '\0')) &&
     (pcVar1 = (char *)FUN_00404ca0(param_1), pcVar1 == param_1)) {
    DAT_006113f0 = param_1;
    return;
  }
  DAT_006113f0 = &DAT_0040ce2b;
  return;
}


void * FUN_00403d40(void *param_1,int param_2,char param_3)

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
  
  pcVar6 = (char *)FUN_00404ca0();
  sVar7 = strlen(pcVar6);
  lVar17 = (long)pcVar6 - (long)param_1;
  lVar8 = sVar7 + lVar17;
  if (DAT_006113f0 == (char *)0x0) {
    FUN_00403ce0();
  }
  sVar7 = strlen(DAT_006113f0);
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
        memcpy((void *)((long)__dest + lVar8),DAT_006113f0,__n);
      }
      else {
        puVar13 = (undefined *)((long)__dest + lVar17);
        lVar10 = FUN_00404d00(puVar13);
        if (__dirp == (DIR *)0x0) {
          uVar4 = *puVar13;
          *puVar13 = 0x2e;
          __dirp = (DIR *)FUN_00404b20(__dest);
          puVar1 = (undefined *)((long)puVar13 + lVar10);
          if (__dirp != (DIR *)0x0) {
            *puVar13 = uVar4;
            *puVar1 = 0x7e317e2e;
            *(undefined *)(puVar1 + 1) = 0;
            goto LAB_00403e11;
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
LAB_00403e11:
          bVar16 = 2;
          local_78 = 1;
          local_70 = sVar7;
LAB_00403e38:
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
                if (__dest == (void *)0x0) goto LAB_00404168;
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
              if (pdVar11 == (dirent *)0x0) goto LAB_00404010;
            }
            goto LAB_00403e38;
          }
        }
LAB_00404010:
        if (bVar18 == 2) {
          if (local_58 == 2) {
            memcpy((void *)((long)__dest + lVar8),DAT_006113f0,__n);
            local_58 = 1;
          }
        }
        else {
          pvVar9 = __dest;
          if (bVar18 == 3) {
LAB_00404168:
            free(pvVar9);
            piVar14 = __errno_location();
            *piVar14 = 0xc;
            return (void *)0x0;
          }
          if (bVar18 != 1) goto LAB_0040402b;
        }
        FUN_00403c10(__dest,lVar8);
      }
LAB_0040402b:
      if (param_3 == '\0') goto LAB_004041d8;
      if (__dirp == (DIR *)0x0) {
LAB_004040b0:
        iVar5 = -100;
        lVar17 = 0;
        pvVar9 = __dest;
      }
      else {
        iVar5 = dirfd(__dirp);
        pvVar9 = (void *)((long)__dest + lVar17);
        if (iVar5 < 0) goto LAB_004040b0;
      }
      iVar5 = FUN_00407ea0(0xffffff9c,param_1,iVar5,pvVar9,local_58 != 1);
      if (iVar5 == 0) {
LAB_004041d8:
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


undefined FUN_00404210(undefined param_1,undefined param_2)

{
  long lVar1;
  
  lVar1 = FUN_0040a670(param_1,param_2,&PTR_DAT_0040cec0,&DAT_0040cea0,4,PTR_FUN_00611380);
  return *(undefined *)(&DAT_0040cea0 + lVar1 * 4);
}


void FUN_00404240(undefined param_1,undefined param_2)

{
  long lVar1;
  
  lVar1 = FUN_00403d40(param_1,param_2,0);
  if (lVar1 != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00408ca0();
}


undefined FUN_00404260(undefined param_1,char *param_2)

{
  undefined uVar1;
  
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    uVar1 = FUN_00404210();
    return uVar1;
  }
  return 2;
}


undefined FUN_00404280(char *param_1,char *param_2)

{
  undefined uVar1;
  
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    param_2 = getenv("VERSION_CONTROL");
    if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
      return 2;
    }
    param_1 = "$VERSION_CONTROL";
  }
  uVar1 = FUN_00404210(param_1,param_2);
  return uVar1;
}


char * FUN_004042d0(char *param_1,uint param_2)

{
  ulong uVar1;
  bool bVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  char *__s;
  size_t sVar6;
  char *pcVar7;
  size_t sVar8;
  int *piVar9;
  uint uVar10;
  char cVar11;
  char *pcVar12;
  char *pcVar13;
  long lVar14;
  char *pcVar15;
  char *pcVar16;
  long local_f0;
  char *local_e8;
  void *local_e0;
  ulong local_d8;
  stat local_c8;
  
  uVar10 = param_2 & 3;
  if (((uVar10 & uVar10 - 1) == 0) && (param_1 != (char *)0x0)) {
    if (*param_1 == '\0') {
      piVar9 = __errno_location();
      __s = (char *)0x0;
      *piVar9 = 2;
    }
    else {
      if (*param_1 == '/') {
        __s = (char *)FUN_00408a50(0x1000);
        pcVar15 = __s + 0x1000;
        pcVar12 = __s + 1;
        *__s = '/';
      }
      else {
        __s = (char *)FUN_00408ce0();
        if (__s == (char *)0x0) {
          return (char *)0x0;
        }
        sVar6 = strlen(__s);
        if (sVar6 < 0x1000) {
          __s = (char *)FUN_00408ab0(__s,0x1000);
          pcVar12 = __s + sVar6;
          pcVar15 = __s + 0x1000;
        }
        else {
          pcVar12 = __s + sVar6;
          pcVar15 = pcVar12;
        }
      }
      cVar4 = *param_1;
      local_f0 = 0;
      local_d8 = 0;
      local_e0 = (void *)0x0;
      local_e8 = param_1;
LAB_00404378:
      while (pcVar13 = pcVar12, cVar4 != '\0') {
        pcVar7 = param_1;
        cVar11 = cVar4;
        if (cVar4 == '/') {
          do {
            param_1 = param_1 + 1;
            cVar11 = *param_1;
          } while (cVar11 == '/');
          pcVar7 = param_1;
          if (cVar11 == '\0') break;
        }
        do {
          pcVar16 = param_1;
          cVar4 = pcVar16[1];
          param_1 = pcVar16 + 1;
          if (cVar4 == '\0') break;
        } while (cVar4 != '/');
        if (param_1 == pcVar7) break;
        sVar6 = (long)param_1 - (long)pcVar7;
        pcVar12 = pcVar13;
        if (sVar6 == 1) goto LAB_00404568;
        if (((cVar11 != '.') || (sVar6 != 2)) || (pcVar7[1] != '.')) goto LAB_004043ec;
        if (((__s + 1 < pcVar13) && (pcVar12 = pcVar13 + -1, __s < pcVar12)) && (pcVar13[-2] != '/')
           ) {
          for (pcVar12 = pcVar13 + -2; (__s != pcVar12 && (pcVar12[-1] != '/'));
              pcVar12 = pcVar12 + -1) {
          }
        }
      }
      if ((__s + 1 < pcVar13) && (pcVar13[-1] == '/')) {
        pcVar7 = pcVar13 + -1;
        pcVar12 = pcVar13;
      }
      else {
        pcVar12 = pcVar13 + 1;
        pcVar7 = pcVar13;
      }
      *pcVar7 = '\0';
      if (pcVar15 != pcVar12) {
        __s = (char *)FUN_00408ab0(__s,pcVar7 + (1 - (long)__s));
      }
      free(local_e0);
      if (local_f0 != 0) {
        FUN_00405a10(local_f0);
      }
    }
  }
  else {
    piVar9 = __errno_location();
    __s = (char *)0x0;
    *piVar9 = 0x16;
  }
  return __s;
LAB_00404568:
  if (cVar11 == '.') goto LAB_00404378;
LAB_004043ec:
  if (pcVar13[-1] != '/') {
    *pcVar13 = '/';
    pcVar13 = pcVar13 + 1;
  }
  if (pcVar15 <= pcVar13 + sVar6) {
    lVar14 = (long)pcVar13 - (long)__s;
    lVar3 = 0x1000 - (long)__s;
    if (0xfff < (long)sVar6) {
      lVar3 = (sVar6 + 1) - (long)__s;
    }
    __s = (char *)FUN_00408ab0(__s,pcVar15 + lVar3);
    pcVar15 = __s + (long)(pcVar15 + lVar3);
    pcVar13 = __s + lVar14;
  }
  memcpy(pcVar13,pcVar7,sVar6);
  pcVar12 = pcVar13 + sVar6;
  *pcVar12 = '\0';
  pcVar13 = pcVar12;
  if ((uVar10 == 2) && ((param_2 & 4) != 0)) {
LAB_0040446b:
    local_c8.st_mode = 0;
LAB_00404473:
    if ((*param_1 == '\0') || (uVar10 == 2)) {
LAB_00404484:
      cVar4 = *param_1;
      pcVar12 = pcVar13;
      goto LAB_00404378;
    }
    piVar9 = __errno_location();
    iVar5 = 0x14;
LAB_004047d5:
    free(local_e0);
    free(__s);
    if (local_f0 == 0) goto LAB_00404731;
  }
  else {
    if ((param_2 & 4) == 0) {
      iVar5 = __lxstat(1,__s,&local_c8);
    }
    else {
      iVar5 = __xstat(1,__s,&local_c8);
    }
    if (iVar5 != 0) {
      piVar9 = __errno_location();
      iVar5 = *piVar9;
      if (uVar10 != 0) {
        if (uVar10 != 1) goto LAB_0040446b;
        sVar6 = strspn(param_1,"/");
        if ((param_1[sVar6] == '\0') && (iVar5 == 2)) goto LAB_00404529;
      }
      goto LAB_004047d5;
    }
    if ((local_c8.st_mode & 0xf000) != 0xa000) {
      if ((local_c8.st_mode & 0xf000) == 0x4000) goto LAB_00404484;
      goto LAB_00404473;
    }
    if ((local_f0 == 0) &&
       (local_f0 = FUN_004057d0(7,0,FUN_00406190,FUN_00406200,FUN_00406240), local_f0 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00408ca0();
    }
    cVar4 = FUN_00404e00(local_f0,local_e8,&local_c8);
    if (cVar4 == '\0') {
      FUN_00404d70(local_f0,local_e8,&local_c8);
      pcVar7 = (char *)FUN_0040a2b0(__s,local_c8.st_size);
      if (pcVar7 != (char *)0x0) {
        sVar6 = strlen(pcVar7);
        sVar8 = strlen(param_1);
        uVar1 = sVar6 + 1 + sVar8;
        if (local_d8 == 0) {
          local_d8 = 0x1000;
          if (0xfff < uVar1) {
            local_d8 = uVar1;
          }
          local_e0 = (void *)FUN_00408a50(local_d8);
        }
        else if (local_d8 < uVar1) {
          local_e0 = (void *)FUN_00408ab0(local_e0,uVar1);
          local_d8 = uVar1;
        }
        memmove((void *)((long)local_e0 + sVar6),param_1,sVar8 + 1);
        param_1 = (char *)memcpy(local_e0,pcVar7,sVar6);
        pcVar13 = __s + 1;
        if (*pcVar7 == '/') {
          *__s = '/';
        }
        else {
          bVar2 = pcVar13 < pcVar12;
          pcVar13 = pcVar12;
          if ((bVar2) && (pcVar13 = pcVar12 + -1, __s < pcVar13)) {
            cVar4 = pcVar12[-2];
            pcVar12 = pcVar13;
            while ((pcVar13 = pcVar12, cVar4 != '/' && (pcVar13 = pcVar12 + -1, __s != pcVar13))) {
              cVar4 = pcVar12[-2];
              pcVar12 = pcVar13;
            }
          }
        }
        free(pcVar7);
        local_e8 = param_1;
        goto LAB_00404484;
      }
      piVar9 = __errno_location();
      iVar5 = *piVar9;
      if ((uVar10 == 2) && (iVar5 != 0xc)) goto LAB_00404529;
    }
    else {
      if (uVar10 == 2) {
LAB_00404529:
        cVar4 = pcVar16[1];
        goto LAB_00404378;
      }
      piVar9 = __errno_location();
      iVar5 = 0x28;
    }
    free(local_e0);
    free(__s);
  }
  FUN_00405a10(local_f0);
LAB_00404731:
  *piVar9 = iVar5;
  return (char *)0x0;
}


void FUN_00404950(undefined param_1)

{
  DAT_006113f8 = param_1;
  return;
}


void FUN_00404960(void)

{
  int iVar1;
  long lVar2;
  undefined uVar3;
  int *piVar4;
  undefined uVar5;
  
  uVar3 = stdin;
  lVar2 = FUN_00408f00(stdin);
  if (lVar2 == 0) {
    iVar1 = FUN_0040a730(uVar3);
    if (iVar1 == 0) {
      FUN_00404a80();
      return;
    }
  }
  else {
    iVar1 = FUN_00408f30(uVar3,0,1);
    if (iVar1 == 0) {
      iVar1 = FUN_00408ec0(stdin);
      if (iVar1 != 0) {
        FUN_0040a730(stdin);
        goto LAB_004049b8;
      }
    }
    iVar1 = FUN_0040a730(stdin);
    if (iVar1 == 0) {
      FUN_00404a80();
      return;
    }
  }
LAB_004049b8:
  uVar3 = dcgettext(0,"error closing file",5);
  lVar2 = DAT_006113f8;
  piVar4 = __errno_location();
  if (lVar2 == 0) {
    error(0,*piVar4,&DAT_0040e363,uVar3);
  }
  else {
    uVar5 = FUN_00407cd0(lVar2);
    error(0,*piVar4,"%s: %s",uVar5,uVar3);
  }
  FUN_00404a80();
                    /* WARNING: Subroutine does not return */
  _exit(DAT_00611300);
}


void FUN_00404a60(undefined param_1)

{
  DAT_00611408 = param_1;
  return;
}


void FUN_00404a70(undefined param_1)

{
  DAT_00611400 = param_1;
  return;
}


void FUN_00404a80(void)

{
  int iVar1;
  int *piVar2;
  undefined uVar3;
  undefined uVar4;
  
  iVar1 = FUN_0040a730(stdout);
  if (iVar1 != 0) {
    piVar2 = __errno_location();
    if ((DAT_00611400 == '\0') || (*piVar2 != 0x20)) {
      uVar3 = dcgettext(0,"write error",5);
      if (DAT_00611408 == 0) {
        error(0,*piVar2,&DAT_0040e363,uVar3);
      }
      else {
        uVar4 = FUN_00407cd0();
        error(0,*piVar2,"%s: %s",uVar4,uVar3);
      }
      goto LAB_00404afe;
    }
  }
  iVar1 = FUN_0040a730(stderr);
  if (iVar1 == 0) {
    return;
  }
LAB_00404afe:
                    /* WARNING: Subroutine does not return */
  _exit(DAT_00611300);
}


DIR * FUN_00404b20(char *param_1)

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
      __fd = FUN_00408d80(uVar1,0x406,3);
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


void FUN_00404bc0(void)

{
  long lVar1;
  
  lVar1 = FUN_00404c40();
  if (lVar1 != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00408ca0();
}


ulong FUN_00404be0(char *param_1)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  cVar1 = *param_1;
  lVar2 = FUN_00404ca0();
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


undefined * FUN_00404c40(void *param_1)

{
  size_t __n;
  undefined *__dest;
  
  __n = FUN_00404be0();
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


char * FUN_00404ca0(char *param_1)

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


void FUN_00404d00(char *param_1)

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


bool FUN_00404d30(char *param_1)

{
  char cVar1;
  long lVar2;
  char *pcVar3;
  
  pcVar3 = (char *)FUN_00404ca0();
  if (*pcVar3 == '\0') {
    pcVar3 = param_1;
  }
  lVar2 = FUN_00404d00(pcVar3);
  cVar1 = pcVar3[lVar2];
  pcVar3[lVar2] = '\0';
  return cVar1 != '\0';
}


void FUN_00404d70(long param_1,undefined param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined uVar2;
  undefined *puVar3;
  
  if (param_1 == 0) {
    return;
  }
  puVar1 = (undefined *)FUN_00408a50(0x18);
  uVar2 = FUN_00408c80(param_2);
  *puVar1 = uVar2;
  puVar1[1] = param_3[1];
  puVar1[2] = *param_3;
  puVar3 = (undefined *)FUN_00405f70(param_1,puVar1);
  if (puVar3 != (undefined *)0x0) {
    if (puVar1 != puVar3) {
      FUN_00406240(puVar1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00408ca0();
}


ulong FUN_00404e00(long param_1,undefined param_2,undefined *param_3)

{
  ulong uVar1;
  undefined local_28;
  undefined local_20;
  undefined local_18;
  
  if (param_1 != 0) {
    local_20 = param_3[1];
    local_18 = *param_3;
    local_28 = param_2;
    uVar1 = FUN_00405560(param_1,&local_28);
    return uVar1 & 0xffffffffffffff00 | (ulong)(uVar1 != 0);
  }
  return 0;
}


void FUN_00404e40(void)

{
  long lVar1;
  
  lVar1 = FUN_00404e60();
  if (lVar1 != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00408ca0();
}


void * FUN_00404e60(void *param_1,char *param_2,long *param_3)

{
  char cVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  size_t __n;
  void *__dest;
  undefined *puVar5;
  size_t __n_00;
  
  lVar3 = FUN_00404ca0();
  uVar4 = FUN_00404d00(lVar3);
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


ulong FUN_00404f40(ulong param_1)

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
LAB_00404fc0:
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
        if (uVar3 <= uVar4) goto LAB_00404fc0;
        lVar5 = lVar5 + 8;
      } while (uVar1 != 0);
    }
    uVar3 = uVar3 + 2;
  } while( true );
}


ulong FUN_00404fe0(ulong param_1,ulong param_2)

{
  return (param_1 >> 3 | param_1 << 0x3d) % param_2;
}


bool FUN_00404ff0(long param_1,long param_2)

{
  return param_1 == param_2;
}


long FUN_00405000(long *param_1,undefined param_2)

{
  ulong uVar1;
  
  uVar1 = (*(code *)param_1[6])(param_2,param_1[2]);
  if (uVar1 <= (ulong)param_1[2] && param_1[2] != uVar1) {
    return uVar1 * 0x10 + *param_1;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


long FUN_00405030(long param_1,long param_2,long **param_3,char param_4)

{
  undefined *puVar1;
  undefined uVar2;
  undefined uVar3;
  undefined uVar4;
  char cVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  
  plVar6 = (long *)FUN_00405000();
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
LAB_004050bc:
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
          goto LAB_004050bc;
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

undefined FUN_00405150(float **param_1)

{
  float fVar1;
  float *pfVar2;
  float fVar3;
  
  pfVar2 = *param_1;
  if (pfVar2 == (float *)&DAT_0040cfa0) {
    return 1;
  }
  fVar1 = pfVar2[2];
  if ((((_DAT_0040cfb4 < fVar1) && (fVar1 < DAT_0040cfb8)) && (_DAT_0040cfbc < pfVar2[3])) &&
     (_DAT_0040cfc0 <= *pfVar2)) {
    fVar3 = *pfVar2 + _DAT_0040cfb4;
    if (((fVar3 < pfVar2[1]) && (pfVar2[1] <= DAT_0040cfc4)) && (fVar3 < fVar1)) {
      return 1;
    }
  }
  *param_1 = (float *)&DAT_0040cfa0;
  return 0;
}


undefined FUN_004051d0(long param_1,long **param_2,char param_3)

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
LAB_004051f8:
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
          plVar2 = (long *)FUN_00405000(param_1,lVar6);
          plVar4 = (long *)plVar3[1];
          if (*plVar2 != 0) break;
          *plVar2 = lVar6;
          *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
          *plVar3 = 0;
          plVar3[1] = *(long *)(param_1 + 0x48);
          *(long **)(param_1 + 0x48) = plVar3;
          plVar3 = plVar4;
          if (plVar4 == (long *)0x0) goto LAB_0040526f;
        }
        plVar3[1] = plVar2[1];
        plVar2[1] = (long)plVar3;
        plVar3 = plVar4;
      } while (plVar4 != (long *)0x0);
LAB_0040526f:
      lVar6 = *plVar5;
    }
    plVar5[1] = 0;
    if (param_3 != '\0') goto LAB_004051f8;
    plVar3 = (long *)FUN_00405000(param_1,lVar6);
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


undefined FUN_00405320(long param_1)

{
  return *(undefined *)(param_1 + 0x10);
}


undefined FUN_00405330(long param_1)

{
  return *(undefined *)(param_1 + 0x18);
}


undefined FUN_00405340(long param_1)

{
  return *(undefined *)(param_1 + 0x20);
}


void FUN_00405350(long **param_1)

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


bool FUN_004053a0(long **param_1)

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
LAB_004053b8:
      plVar2 = plVar2 + 2;
    }
    lVar1 = plVar2[1];
    plVar4 = (long *)((long)plVar4 + 1);
    plVar3 = (long *)((long)plVar3 + 1);
    if (lVar1 == 0) goto LAB_004053b8;
    do {
      lVar1 = *(long *)(lVar1 + 8);
      plVar3 = (long *)((long)plVar3 + 1);
    } while (lVar1 != 0);
    plVar2 = plVar2 + 2;
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405410(long **param_1,undefined param_2)

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
      if (param_1[1] <= plVar6) goto LAB_0040547d;
    }
  }
LAB_0040547d:
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
  __fprintf_chk((dVar7 * _DAT_0040cfd8) / dVar8,param_2,1,"# buckets used:    %lu (%.2f%%)\n",plVar2
               );
  __fprintf_chk(param_2,1,"max bucket length: %lu\n",uVar5);
  return;
}


long FUN_00405560(long param_1,long param_2)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)FUN_00405000();
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


long FUN_004055c0(long **param_1)

{
  long lVar1;
  long *plVar2;
  
  if (param_1[4] == (long *)0x0) {
    return 0;
  }
  plVar2 = *param_1;
  if (param_1[1] <= plVar2) {
    lVar1 = FUN_004021d5();
    return lVar1;
  }
  do {
    if (*plVar2 != 0) {
      return *plVar2;
    }
    plVar2 = plVar2 + 2;
  } while (plVar2 < param_1[1]);
  lVar1 = FUN_004021d5();
  return lVar1;
}


long FUN_00405610(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = (long *)FUN_00405000();
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


ulong FUN_00405680(long **param_1,long param_2,ulong param_3)

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


long FUN_004056f0(long **param_1,code *param_2,undefined param_3)

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


ulong FUN_00405770(byte *param_1,ulong param_2)

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


void FUN_004057b0(undefined *param_1)

{
  *(undefined *)(param_1 + 2) = 0;
  *param_1 = 0x3f80000000000000;
  param_1[1] = 0x3fb4fdf43f4ccccd;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ** FUN_004057d0(ulong param_1,void *param_2,code *param_3,code *param_4,void *param_5)

{
  char cVar1;
  void **__ptr;
  void *__nmemb;
  void *pvVar2;
  float fVar3;
  float fVar4;
  
  if (param_3 == (code *)0x0) {
    param_3 = FUN_00404fe0;
  }
  if (param_4 == (code *)0x0) {
    param_4 = FUN_00404ff0;
  }
  __ptr = (void **)malloc(0x50);
  if (__ptr == (void **)0x0) {
    return (void **)0x0;
  }
  if (param_2 == (void *)0x0) {
    __ptr[5] = &DAT_0040cfa0;
    cVar1 = FUN_00405150(__ptr + 5);
    if (cVar1 == '\0') goto LAB_004058b0;
    fVar4 = DAT_0040cfc8;
    if ((long)param_1 < 0) goto LAB_00405933;
LAB_004058ee:
    fVar3 = (float)param_1;
LAB_004058f7:
    fVar3 = fVar3 / fVar4;
    if (_DAT_0040cfcc <= fVar3) goto LAB_004058b0;
    if (fVar3 < _DAT_0040cfd0) {
      param_1 = (ulong)fVar3;
    }
    else {
      param_1 = (long)(fVar3 - _DAT_0040cfd0) ^ 0x8000000000000000;
    }
  }
  else {
    __ptr[5] = param_2;
    cVar1 = FUN_00405150(__ptr + 5);
    if (cVar1 == '\0') goto LAB_004058b0;
    if (*(char *)((long)param_2 + 0x10) == '\0') {
      fVar4 = *(float *)((long)param_2 + 8);
      if (-1 < (long)param_1) goto LAB_004058ee;
LAB_00405933:
      fVar3 = (float)(param_1 >> 1 | (ulong)((uint)param_1 & 1));
      fVar3 = fVar3 + fVar3;
      goto LAB_004058f7;
    }
  }
  __nmemb = (void *)FUN_00404f40(param_1);
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
LAB_004058b0:
  free(__ptr);
  return (void **)0x0;
}


void FUN_00405960(long **param_1)

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
        if (param_1[1] < plVar4 || param_1[1] == plVar4) goto LAB_004059f3;
      }
      plVar5 = plVar5 + 2;
    } while (plVar5 <= param_1[1] && param_1[1] != plVar5);
  }
LAB_004059f3:
  param_1[3] = (long *)0x0;
  param_1[4] = (long *)0x0;
  return;
}


void FUN_00405a10(long **param_1)

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
    if (plVar2 <= plVar4) goto LAB_00405aac;
    do {
      while (lVar5 = *plVar4, plVar3 = plVar4, lVar5 == 0) {
        plVar4 = plVar4 + 2;
        if (plVar2 <= plVar4) goto LAB_00405a6f;
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
LAB_00405a6f:
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
LAB_00405aac:
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

undefined FUN_00405af0(void **param_1,ulong param_2)

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
    if (_DAT_0040cfcc <= fVar3) {
      return 0;
    }
    if (fVar3 < _DAT_0040cfd0) {
      param_2 = (ulong)fVar3;
    }
    else {
      param_2 = (long)(fVar3 - _DAT_0040cfd0) ^ 0x8000000000000000;
    }
  }
  local_58 = (void *)FUN_00404f40(param_2);
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
      uVar2 = FUN_004051d0(&local_68,param_1,0);
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
      cVar1 = FUN_004051d0(param_1,&local_68,1);
      if ((cVar1 != '\0') && (cVar1 = FUN_004051d0(param_1,&local_68,0), cVar1 != '\0')) {
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

undefined FUN_00405cf0(long param_1,long param_2,long *param_3)

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
  lVar2 = FUN_00405030(param_1,param_2,&local_20,0);
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
    if ((long)uVar3 < 0) goto LAB_00405dea;
LAB_00405d5b:
    if (fVar7 <= (float)uVar3 * *(float *)(lVar2 + 8)) goto LAB_00405d72;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x28);
    fVar7 = (float)uVar6;
    uVar3 = *(ulong *)(param_1 + 0x10);
    if (-1 < (long)uVar3) goto LAB_00405d5b;
LAB_00405dea:
    fVar8 = (float)(uVar3 >> 1 | (ulong)((uint)uVar3 & 1));
    if (fVar7 <= (fVar8 + fVar8) * *(float *)(lVar2 + 8)) goto LAB_00405d72;
  }
  FUN_00405150(param_1 + 0x28);
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
    if (_DAT_0040cfcc <= fVar7) {
      return 0xffffffff;
    }
    if (_DAT_0040cfd0 <= fVar7) {
      uVar6 = (long)(fVar7 - _DAT_0040cfd0) ^ 0x8000000000000000;
    }
    else {
      uVar6 = (ulong)fVar7;
    }
    cVar1 = FUN_00405af0(param_1,uVar6);
    if (cVar1 == '\0') {
      return 0xffffffff;
    }
    lVar2 = FUN_00405030(param_1,param_2,&local_20,0);
    if (lVar2 != 0) {
      uVar5 = FUN_004021df();
      return uVar5;
    }
  }
LAB_00405d72:
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


undefined FUN_00405f70(undefined param_1,undefined param_2)

{
  int iVar1;
  undefined local_10;
  
  iVar1 = FUN_00405cf0(param_1,param_2,&local_10);
  if (iVar1 != -1) {
    if (iVar1 == 0) {
      param_2 = local_10;
    }
    return param_2;
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_00405fb0(long param_1,undefined param_2)

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
  
  lVar5 = FUN_00405030(param_1,param_2,&local_20,1);
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
      FUN_00405150(param_1 + 0x28);
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
        if (_DAT_0040cfd0 <= fVar7) {
          uVar6 = (long)(fVar7 - _DAT_0040cfd0) ^ 0x8000000000000000;
        }
        else {
          uVar6 = (ulong)fVar7;
        }
        cVar4 = FUN_00405af0(param_1,uVar6);
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


ulong FUN_00406190(undefined *param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_0040a7f0(*param_1);
  return (uVar1 ^ param_1[1]) % param_2;
}


ulong FUN_004061c0(long param_1,ulong param_2)

{
  return *(ulong *)(param_1 + 8) % param_2;
}


undefined FUN_004061d0(undefined *param_1,undefined *param_2)

{
  undefined uVar1;
  
  if ((param_1[1] == param_2[1]) && (param_1[2] == param_2[2])) {
    uVar1 = FUN_004080f0(*param_1,*param_2);
    return uVar1;
  }
  return 0;
}


ulong FUN_00406200(char **param_1,char **param_2)

{
  int iVar1;
  undefined extraout_var;
  
  if ((param_1[1] == param_2[1]) && (param_1[2] == param_2[2])) {
    iVar1 = strcmp(*param_1,*param_2);
    return CONCAT44(extraout_var,iVar1) & 0xffffffffffffff00 | (ulong)(iVar1 == 0);
  }
  return 0;
}


void FUN_00406240(void **param_1)

{
  free(*param_1);
  free(param_1);
  return;
}


void FUN_00406260(byte *param_1)

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
      pbVar6 = &DAT_0040d018;
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
        pbVar6 = &DAT_0040d020;
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
  DAT_00611410 = param_1;
  program_invocation_name = param_1;
  return;
}


char * FUN_00406300(char *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  byte *pbVar3;
  
  pcVar2 = (char *)dcgettext(0,param_1,5);
  if (param_1 == pcVar2) {
    pbVar3 = (byte *)FUN_0040a830();
    if ((*pbVar3 & 0xdf) == 0x55) {
      if (((((pbVar3[1] & 0xdf) != 0x54) || ((pbVar3[2] & 0xdf) != 0x46)) || (pbVar3[3] != 0x2d)) ||
         ((pbVar3[4] != 0x38 || (pbVar3[5] != 0)))) {
LAB_004063d8:
        pcVar2 = "\"";
        if (param_2 != 9) {
          pcVar2 = "\'";
        }
        return pcVar2;
      }
      cVar1 = *pcVar2;
      pcVar2 = &DAT_0040d031;
      if (cVar1 != '`') {
        pcVar2 = &DAT_0040d026;
      }
    }
    else {
      if (((((*pbVar3 & 0xdf) != 0x47) || ((pbVar3[1] & 0xdf) != 0x42)) || (pbVar3[2] != 0x31)) ||
         (((pbVar3[3] != 0x38 || (pbVar3[4] != 0x30)) ||
          ((pbVar3[5] != 0x33 || ((pbVar3[6] != 0x30 || (pbVar3[7] != 0)))))))) goto LAB_004063d8;
      cVar1 = *pcVar2;
      pcVar2 = &DAT_0040d02d;
      if (cVar1 != '`') {
        pcVar2 = &DAT_0040d02a;
      }
    }
  }
  return pcVar2;
}


ulong FUN_00406400(undefined *param_1,ulong param_2,char *param_3,ulong param_4,int param_5,
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
LAB_00407051:
    if (param_2 != 0) {
      bVar3 = false;
      local_5b = false;
      bVar2 = true;
      local_70 = 0;
      goto LAB_00406c86;
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
      goto LAB_00407051;
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
      param_8 = (char *)FUN_00406300(&DAT_0040d035,param_5);
      param_9 = (char *)FUN_00406300(&DAT_0040e2d7);
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
LAB_00406498:
  uVar22 = 0;
  bVar5 = local_5b;
LAB_004064a8:
  bVar23 = param_4 != uVar22;
  if (param_4 == 0xffffffffffffffff) {
    bVar23 = param_3[uVar22] != '\0';
  }
  bVar26 = bVar6;
  if (!bVar23) goto LAB_00406c28;
  bVar20 = (bool)(param_5 != 2 & bVar6);
  __s1 = (byte *)(param_3 + uVar22);
  uVar16 = uVar15;
  bVar4 = bVar3;
  if (bVar20) {
    if (local_a0 == 0) {
LAB_00406ba0:
      uVar19 = (ulong)*__s1;
      switch(uVar19) {
      case 0:
        goto switchD_00406bb2_caseD_0;
      default:
        bVar20 = false;
        goto switchD_00406a1e_caseD_1;
      case 7:
        bVar17 = 0x61;
        goto LAB_004068b5;
      case 8:
        bVar17 = 0x62;
        break;
      case 9:
switchD_00406bb2_caseD_9:
        bVar17 = 0x74;
        break;
      case 10:
switchD_00406bb2_caseD_a:
        bVar17 = 0x6e;
        break;
      case 0xb:
switchD_00406bb2_caseD_b:
        bVar17 = 0x76;
        goto LAB_004068b5;
      case 0xc:
switchD_00406bb2_caseD_c:
        bVar17 = 0x66;
LAB_004068b5:
        if (local_5c) {
          bVar25 = false;
          goto LAB_00406808;
        }
LAB_004068c0:
        bVar23 = false;
        goto LAB_0040667b;
      case 0xd:
        bVar20 = false;
switchD_00406598_caseD_d:
        bVar25 = param_5 == 2;
        uVar19 = 0xd;
        bVar13 = 0x72;
        goto LAB_004067d0;
      case 0x20:
        bVar25 = false;
LAB_00406bfa:
        uVar19 = 0x20;
        goto LAB_00406bc2;
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
switchD_00406598_caseD_21:
        bVar25 = false;
        goto LAB_004067db;
      case 0x23:
      case 0x7e:
        bVar26 = false;
LAB_00406bda:
        if (uVar22 == 0) {
          bVar25 = false;
          bVar23 = bVar20;
          bVar20 = bVar26;
          goto LAB_004065e8;
        }
        bVar23 = false;
        goto LAB_004065ff;
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
LAB_00406bc2:
        bVar24 = false;
        bVar23 = bVar20;
        bVar20 = bVar25;
        goto LAB_00406601;
      case 0x27:
        bVar20 = false;
        goto switchD_00406a1e_caseD_27;
      case 0x3f:
        bVar20 = false;
        goto switchD_00406a1e_caseD_3f;
      case 0x5c:
        bVar20 = false;
        goto switchD_00406598_caseD_5c;
      case 0x7b:
      case 0x7d:
        bVar20 = false;
        goto switchD_00406a1e_caseD_7b;
      }
      bVar25 = false;
      bVar23 = false;
      goto joined_r0x004067f7;
    }
    if ((param_4 == 0xffffffffffffffff) && (1 < local_a0)) {
      param_4 = strlen(param_3);
    }
    if ((param_4 < uVar22 + local_a0) || (iVar7 = memcmp(__s1,local_78,local_a0), iVar7 != 0))
    goto LAB_00406ba0;
    if (!local_5c) {
      uVar19 = (ulong)*__s1;
      bVar25 = bVar20;
      switch(uVar19) {
      case 0:
        goto switchD_00406598_caseD_0;
      default:
        goto switchD_00406a1e_caseD_1;
      case 7:
        bVar17 = 0x61;
        goto LAB_004068c0;
      case 8:
        bVar25 = false;
        bVar23 = false;
        bVar17 = 0x62;
        break;
      case 9:
        goto switchD_00406bb2_caseD_9;
      case 10:
        goto switchD_00406bb2_caseD_a;
      case 0xb:
        goto switchD_00406bb2_caseD_b;
      case 0xc:
        goto switchD_00406bb2_caseD_c;
      case 0xd:
        goto switchD_00406598_caseD_d;
      case 0x20:
        goto LAB_00406bfa;
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
        goto switchD_00406598_caseD_21;
      case 0x23:
      case 0x7e:
        bVar26 = bVar20;
        goto LAB_00406bda;
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
        goto LAB_00406bc2;
      case 0x27:
        goto switchD_00406a1e_caseD_27;
      case 0x3f:
        goto switchD_00406a1e_caseD_3f;
      case 0x5c:
        goto switchD_00406598_caseD_5c;
      case 0x7b:
      case 0x7d:
        goto switchD_00406a1e_caseD_7b;
      }
      goto LAB_00406642;
    }
    goto LAB_0040681a;
  }
  uVar19 = (ulong)*__s1;
  switch(uVar19) {
  case 0:
    if (bVar6) {
switchD_00406bb2_caseD_0:
      if (!local_5c) {
        bVar20 = false;
switchD_00406598_caseD_0:
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
            goto LAB_004066f8;
          }
LAB_0040693a:
          param_1[uVar16] = 0x5c;
          uVar15 = uVar16;
        }
        else if (uVar15 < uVar9) goto LAB_0040693a;
        uVar16 = uVar15 + 1;
        bVar24 = bVar23;
        if (param_5 == 2) {
          bVar17 = 0x30;
          bVar23 = false;
          bVar4 = bVar3;
          goto LAB_004066f8;
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
LAB_00406979:
        bVar17 = (byte)uVar19;
        bVar23 = false;
        uVar15 = uVar16;
        bVar4 = bVar3;
        if ((bool)(bVar6 ^ 1U | bVar26)) goto LAB_004066f8;
        goto LAB_00406601;
      }
      bVar26 = param_5 == 2;
      goto LAB_0040680c;
    }
    if ((param_6 & 1) == 0) {
      bVar25 = param_5 == 2;
      uVar19 = 0;
      bVar23 = false;
      bVar20 = false;
      goto LAB_004065e8;
    }
    uVar22 = uVar22 + 1;
    goto LAB_004064a8;
  default:
switchD_00406a1e_caseD_1:
    bVar25 = bVar6;
    if (sVar8 != 1) {
      local_40[0] = (mbstate_t)0x0;
      if (param_4 == 0xffffffffffffffff) {
        param_4 = strlen(param_3);
      }
      uVar21 = 0;
      do {
        uVar1 = uVar22 + uVar21;
        lVar11 = FUN_0040a230(&local_44,param_3 + uVar1,param_4 - uVar1,local_40);
        if (lVar11 == 0) break;
        if (lVar11 == -1) {
          bVar23 = false;
          goto LAB_0040732a;
        }
        if (lVar11 == -2) {
          if ((param_4 <= uVar1) || (param_3[uVar1] == '\0')) goto LAB_00407467;
          goto LAB_00407457;
        }
        if (((param_5 == 2) && (local_5c)) && (lVar11 != 1)) {
          pcVar12 = param_3 + uVar1 + 1;
          do {
            if (((byte)(*pcVar12 + 0xa5U) < 0x22) &&
               ((1L << (*pcVar12 + 0xa5U & 0x3f) & 0x20000002bU) != 0)) {
              param_5 = 2;
              goto LAB_0040680c;
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
      goto LAB_0040732a;
    }
    ppuVar10 = __ctype_b_loc();
    uVar21 = 1;
    bVar25 = ((*ppuVar10)[uVar19] & 0x4000) == 0;
    bVar23 = !bVar25;
    bVar25 = (bool)(bVar25 & bVar6);
    goto LAB_004069f4;
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
    goto LAB_00406a32;
  case 10:
    uVar19 = 10;
    bVar13 = 0x6e;
    goto LAB_00406a32;
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
LAB_00406a32:
    bVar25 = param_5 == 2;
    bVar20 = (bool)(local_5c & bVar25);
    if (bVar20) {
LAB_00406a4a:
      param_5 = 2;
      goto LAB_0040680c;
    }
    break;
  case 0x20:
    uVar19 = 0x20;
    goto LAB_004065d6;
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
LAB_004065d6:
    bVar25 = param_5 == 2;
    if ((local_5c) && (bVar25)) goto LAB_00406a4a;
    goto LAB_004065e8;
  case 0x23:
  case 0x7e:
LAB_004065cd:
    bVar25 = param_5 == 2;
    if (uVar22 == 0) goto LAB_004065d6;
    goto LAB_004067db;
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
    goto switchD_00406a1e_caseD_25;
  case 0x27:
switchD_00406a1e_caseD_27:
    bVar5 = bVar23;
    if (param_5 != 2) {
      bVar25 = false;
      uVar19 = 0x27;
      goto LAB_004065e8;
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
      goto LAB_004066f8;
    }
    goto LAB_0040680c;
  case 0x3f:
switchD_00406a1e_caseD_3f:
    if (param_5 == 2) {
      if (!local_5c) {
        bVar17 = 0x3f;
        bVar24 = false;
        bVar23 = false;
        goto LAB_004066f8;
      }
      goto LAB_0040680c;
    }
    if (param_5 != 5) {
      bVar25 = param_5 == 2;
      uVar19 = 0x3f;
      bVar23 = false;
      goto LAB_004065e8;
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
        goto LAB_00406979;
      }
      goto LAB_0040681a;
    }
    bVar25 = false;
    uVar19 = 0x3f;
    bVar23 = false;
    goto LAB_004065e8;
  case 0x5c:
    if (param_5 != 2) {
switchD_00406598_caseD_5c:
      uVar19 = 0x5c;
      bVar17 = 0x5c;
      bVar13 = 0x5c;
      bVar25 = (bool)(bVar6 & local_5c & local_a0 != 0);
      if (!bVar25) break;
      uVar22 = uVar22 + 1;
      bVar23 = false;
      goto LAB_00406714;
    }
    if (local_5c) goto LAB_0040680c;
    uVar22 = uVar22 + 1;
    bVar23 = false;
    bVar17 = 0x5c;
    goto LAB_00406714;
  case 0x7b:
  case 0x7d:
switchD_00406a1e_caseD_7b:
    bVar24 = param_4 != 1;
    if (param_4 == 0xffffffffffffffff) {
      bVar24 = param_3[1] != '\0';
    }
    bVar25 = param_5 == 2;
    if (!bVar24) goto LAB_004065cd;
    goto LAB_004067db;
  }
LAB_004067d0:
  if (!bVar6) {
LAB_004067db:
    bVar23 = false;
    goto LAB_004065e8;
  }
  bVar23 = false;
  bVar17 = bVar13;
  goto joined_r0x004067f7;
LAB_00406c28:
  if ((uVar15 == 0) && ((bool)(local_5c & param_5 == 2))) {
    param_5 = 2;
LAB_0040680c:
    if (bVar26) {
      param_5 = 4;
    }
LAB_0040681a:
    uVar9 = FUN_00406400(param_1,uVar9,param_3,param_4,param_5,param_6 & 0xfffffffd,0,param_8,
                         param_9);
    return uVar9;
  }
  bVar26 = (bool)(param_5 == 2 & (local_5c ^ 1U));
  bVar23 = (bool)(local_5c ^ 1U);
  if ((!bVar26) || (bVar23 = bVar26, !bVar5)) {
LAB_004074fd:
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
    uVar9 = FUN_00406400(param_1,local_70,param_3,param_4,5,param_6,param_7,param_8,param_9);
    return uVar9;
  }
  local_5b = uVar9 == 0 && local_70 != 0;
  param_2 = local_70;
  bVar23 = bVar5;
  if (uVar9 != 0 || local_70 == 0) goto LAB_004074fd;
LAB_00406c86:
  *param_1 = 0x27;
  param_5 = 2;
  uVar15 = 1;
  local_78 = "\'";
  local_a0 = 1;
  local_5c = false;
  uVar9 = param_2;
  goto LAB_00406498;
  while (__s1[uVar21] != 0) {
LAB_00407457:
    uVar21 = uVar21 + 1;
    if (param_4 <= uVar22 + uVar21) break;
  }
LAB_00407467:
  bVar23 = false;
LAB_0040732a:
  if (1 < uVar21) {
LAB_00406eee:
    bVar26 = false;
    uVar21 = uVar21 + uVar22;
    uVar16 = uVar22;
    do {
      bVar17 = (byte)uVar19;
      if (bVar25) {
        bVar26 = param_5 == 2;
        if (local_5c) goto LAB_0040680c;
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
        if (uVar21 <= uVar22) goto LAB_0040668d;
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
        if (uVar21 <= uVar22) goto LAB_00406714;
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
LAB_004069f4:
  if (bVar25) {
    bVar23 = false;
    bVar25 = bVar6;
    goto LAB_00406eee;
  }
switchD_00406a1e_caseD_25:
  bVar25 = param_5 == 2;
LAB_004065e8:
  bVar17 = (byte)uVar19;
  bVar24 = (bool)((bVar6 ^ 1U | bVar25) ^ 1 | local_5c);
  bVar26 = bVar20;
  if (bVar24) {
LAB_004065ff:
    bVar24 = false;
    bVar20 = bVar26;
LAB_00406601:
    bVar17 = (byte)uVar19;
    uVar16 = uVar15;
    bVar4 = bVar3;
    if ((param_7 == 0) || ((*(uint *)(param_7 + (uVar19 >> 5) * 4) >> (bVar17 & 0x1f) & 1) == 0))
    goto LAB_004066f8;
    bVar25 = param_5 == 2;
  }
  else {
LAB_004066f8:
    bVar25 = param_5 == 2;
    uVar15 = uVar16;
    bVar3 = bVar4;
    if (!bVar20) {
      uVar22 = uVar22 + 1;
      bVar3 = (bool)((bVar24 ^ 1U) & bVar4);
LAB_00406714:
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
      goto LAB_0040668d;
    }
  }
joined_r0x004067f7:
  if (local_5c) {
LAB_00406808:
    bVar26 = (bool)(bVar6 & bVar25);
    goto LAB_0040680c;
  }
LAB_00406642:
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
LAB_0040667b:
  if (uVar15 < uVar9) {
    param_1[uVar15] = 0x5c;
  }
  uVar15 = uVar15 + 1;
  uVar22 = uVar22 + 1;
  bVar4 = bVar3;
LAB_0040668d:
  bVar3 = bVar4;
  if (uVar15 < uVar9) {
    param_1[uVar15] = bVar17;
  }
  uVar15 = uVar15 + 1;
  if (!bVar23) {
    bVar2 = false;
  }
  goto LAB_004064a8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00407630(int param_1,undefined param_2,undefined param_3,undefined *param_4)

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
  puVar8 = (undefined *)PTR_DAT_00611358;
  if (DAT_00611370 <= param_1) {
    if (param_1 == 0x7fffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_00408ca0();
    }
    if (PTR_DAT_00611358 == &DAT_00611360) {
      puVar8 = (undefined *)FUN_00408ab0(0);
      uVar6 = PTR_DAT_00611368._4_4_;
      uVar5 = PTR_DAT_00611368._0_4_;
      uVar3 = _UNK_00611364;
      PTR_DAT_00611358 = (undefined *)puVar8;
      *puVar8 = _DAT_00611360;
      puVar8[1] = uVar3;
      puVar8[2] = uVar5;
      puVar8[3] = uVar6;
    }
    else {
      puVar8 = (undefined *)FUN_00408ab0(PTR_DAT_00611358);
      PTR_DAT_00611358 = (undefined *)puVar8;
    }
    memset(puVar8 + (long)DAT_00611370 * 4,0,(long)((param_1 + 1) - DAT_00611370) << 4);
    DAT_00611370 = param_1 + 1;
  }
  uVar2 = param_4[1];
  puVar10 = (ulong *)(puVar8 + (long)param_1 * 4);
  uVar4 = *puVar10;
  __ptr = (undefined *)puVar10[1];
  uVar9 = FUN_00406400(__ptr,uVar4,param_2,param_3,*param_4,uVar2 | 1,param_4 + 2,
                       *(undefined *)(param_4 + 10),*(undefined *)(param_4 + 0xc));
  if (uVar4 <= uVar9) {
    uVar9 = uVar9 + 1;
    *puVar10 = uVar9;
    if (__ptr != &DAT_00611420) {
      free(__ptr);
    }
    __ptr = (undefined *)FUN_00408a50(uVar9);
    uVar3 = *param_4;
    puVar10[1] = (ulong)__ptr;
    FUN_00406400(__ptr,uVar9,param_2,param_3,uVar3,uVar2 | 1,param_4 + 2,
                 *(undefined *)(param_4 + 10),*(undefined *)(param_4 + 0xc));
  }
  *piVar7 = iVar1;
  return __ptr;
}


void FUN_004077d0(undefined *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_00611520;
  }
  FUN_00408c50(param_1,0x38);
  *piVar2 = iVar1;
  return;
}


undefined FUN_00407810(undefined *param_1)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = (undefined *)&DAT_00611520;
  }
  return *param_1;
}


void FUN_00407820(undefined *param_1,undefined param_2)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = (undefined *)&DAT_00611520;
  }
  *param_1 = param_2;
  return;
}


uint FUN_00407830(undefined *param_1,byte param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_00611520;
  }
  uVar1 = *(uint *)(param_1 + (ulong)(param_2 >> 5) * 4 + 8);
  uVar2 = uVar1 >> (param_2 & 0x1f);
  *(uint *)(param_1 + (ulong)(param_2 >> 5) * 4 + 8) =
       ((param_3 ^ uVar2) & 1) << (param_2 & 0x1f) ^ uVar1;
  return uVar2 & 1;
}


undefined FUN_00407870(undefined *param_1,undefined param_2)

{
  undefined uVar1;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_00611520;
  }
  uVar1 = *(undefined *)(param_1 + 4);
  *(undefined *)(param_1 + 4) = param_2;
  return uVar1;
}


void FUN_00407890(undefined *param_1,long param_2,long param_3)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = (undefined *)&DAT_00611520;
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


void FUN_004078c0(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                 undefined *param_5)

{
  int iVar1;
  int *piVar2;
  
  if (param_5 == (undefined *)0x0) {
    param_5 = (undefined *)&DAT_00611520;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  FUN_00406400(param_1,param_2,param_3,param_4,*param_5,param_5[1],param_5 + 2,
               *(undefined *)(param_5 + 10),*(undefined *)(param_5 + 0xc));
  *piVar2 = iVar1;
  return;
}


undefined FUN_00407940(undefined param_1,undefined param_2,long *param_3,undefined *param_4)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined uVar4;
  uint uVar5;
  
  if (param_4 == (undefined *)0x0) {
    param_4 = (undefined *)&DAT_00611520;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  uVar5 = (uint)(param_3 == (long *)0x0) | param_4[1];
  lVar3 = FUN_00406400(0,0,param_1,param_2,*param_4,uVar5,param_4 + 2,*(undefined *)(param_4 + 10),
                       *(undefined *)(param_4 + 0xc));
  uVar4 = FUN_00408a50(lVar3 + 1);
  FUN_00406400(uVar4,lVar3 + 1,param_1,param_2,*param_4,uVar5,param_4 + 2,
               *(undefined *)(param_4 + 10),*(undefined *)(param_4 + 0xc));
  *piVar2 = iVar1;
  if (param_3 != (long *)0x0) {
    *param_3 = lVar3;
  }
  return uVar4;
}


void FUN_00407a30(undefined param_1,undefined param_2,undefined param_3)

{
  FUN_00407940(param_1,param_2,0,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407a40(void)

{
  void **ppvVar1;
  void *__ptr;
  undefined *__ptr_00;
  void **ppvVar2;
  
  __ptr_00 = PTR_DAT_00611358;
  if (1 < DAT_00611370) {
    ppvVar2 = (void **)(PTR_DAT_00611358 + 0x18);
    ppvVar1 = (void **)(PTR_DAT_00611358 + (ulong)(DAT_00611370 - 2) * 0x10 + 0x28);
    do {
      __ptr = *ppvVar2;
      ppvVar2 = ppvVar2 + 2;
      free(__ptr);
    } while (ppvVar2 != ppvVar1);
  }
  if (*(undefined **)(__ptr_00 + 8) != &DAT_00611420) {
    free(*(undefined **)(__ptr_00 + 8));
    _DAT_00611360 = 0x100;
    PTR_DAT_00611368 = &DAT_00611420;
  }
  if (__ptr_00 != &DAT_00611360) {
    free(__ptr_00);
    PTR_DAT_00611358 = &DAT_00611360;
  }
  DAT_00611370 = 1;
  return;
}


void FUN_00407ae0(undefined param_1,undefined param_2)

{
  FUN_00407630(param_1,param_2,0xffffffffffffffff,&DAT_00611520);
  return;
}


void FUN_00407b00(void)

{
  FUN_00407630();
  return;
}


void FUN_00407b10(undefined param_1)

{
  FUN_00407630(0,param_1,0xffffffffffffffff,&DAT_00611520);
  return;
}


void FUN_00407b30(undefined param_1,undefined param_2)

{
  FUN_00407630(0,param_1,param_2,&DAT_00611520);
  return;
}


void FUN_00407b50(undefined param_1,int param_2,undefined param_3)

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
    FUN_00407630(param_1,param_3,0xffffffffffffffff,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00407bc0(undefined param_1,int param_2,undefined param_3,undefined param_4)

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
    FUN_00407630(param_1,param_3,param_4,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00407c30(undefined param_1,undefined param_2)

{
  FUN_00407b50(0,param_1,param_2);
  return;
}


void FUN_00407c40(undefined param_1,undefined param_2,undefined param_3)

{
  FUN_00407bc0(0,param_1,param_2,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407c50(undefined param_1,undefined param_2,byte param_3)

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
  
  local_18 = DAT_00611550;
  local_48 = _DAT_00611520;
  uStack_40 = uRam0000000000611528;
  local_38 = _DAT_00611530;
  uStack_30 = uRam0000000000611538;
  puVar1 = (uint *)((long)&uStack_40 + (ulong)(param_3 >> 5) * 4);
  local_28 = _DAT_00611540;
  uStack_20 = uRam0000000000611548;
  uVar2 = *puVar1;
  *puVar1 = (~(uVar2 >> (param_3 & 0x1f)) & 1) << (param_3 & 0x1f) ^ uVar2;
  FUN_00407630(0,param_1,param_2,&local_48);
  return;
}


void FUN_00407cc0(undefined param_1,char param_2)

{
  FUN_00407c50(param_1,0xffffffffffffffff,(int)param_2);
  return;
}


void FUN_00407cd0(undefined param_1)

{
  FUN_00407c50(param_1,0xffffffffffffffff,0x3a);
  return;
}


void FUN_00407cf0(undefined param_1,undefined param_2)

{
  FUN_00407c50(param_1,param_2,0x3a);
  return;
}


void FUN_00407d00(undefined param_1,int param_2,undefined param_3)

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
    FUN_00407630(param_1,param_3,0xffffffffffffffff,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407d70(undefined param_1,long param_2,long param_3,undefined param_4,undefined param_5
                 )

{
  undefined local_48;
  undefined uStack_40;
  undefined local_38;
  undefined uStack_30;
  undefined local_28;
  long lStack_20;
  long local_18;
  
  uStack_40 = uRam0000000000611528;
  local_38 = _DAT_00611530;
  uStack_30 = uRam0000000000611538;
  local_28 = _DAT_00611540;
  lStack_20 = uRam0000000000611548;
  local_18 = DAT_00611550;
  local_48 = CONCAT44((int)((ulong)_DAT_00611520 >> 0x20),10);
  if ((param_2 != 0) && (param_3 != 0)) {
    lStack_20 = param_2;
    local_18 = param_3;
    FUN_00407630(param_1,param_4,param_5,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00407de0(void)

{
  FUN_00407d70();
  return;
}


void FUN_00407df0(undefined param_1,undefined param_2,undefined param_3)

{
  FUN_00407d70(0,param_1,param_2,param_3,0xffffffffffffffff);
  return;
}


void FUN_00407e10(undefined param_1,undefined param_2,undefined param_3,undefined param_4)

{
  FUN_00407d70(0,param_1,param_2,param_3,param_4);
  return;
}


void FUN_00407e30(void)

{
  FUN_00407630();
  return;
}


void FUN_00407e40(undefined param_1,undefined param_2)

{
  FUN_00407630(0,param_1,param_2,&DAT_00611320);
  return;
}


void FUN_00407e60(undefined param_1,undefined param_2)

{
  FUN_00407630(param_1,param_2,0xffffffffffffffff,&DAT_00611320);
  return;
}


void FUN_00407e80(undefined param_1)

{
  FUN_00407630(0,param_1,0xffffffffffffffff,&DAT_00611320);
  return;
}


ulong FUN_00407ea0(uint param_1,char *param_2,uint param_3,char *param_4,uint param_5)

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


bool FUN_004080f0(undefined param_1,undefined param_2)

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
  __s1 = (void *)FUN_00404ca0();
  __s2 = (void *)FUN_00404ca0(param_2);
  __n = FUN_00404d00(__s1);
  sVar2 = FUN_00404d00(__s2);
  if ((__n == sVar2) && (iVar1 = memcmp(__s1,__s2,__n), iVar1 == 0)) {
    __filename = (char *)FUN_00404bc0(param_1);
    __filename_00 = (char *)FUN_00404bc0(param_2);
    iVar1 = __xstat(1,__filename,&local_158);
    if (iVar1 != 0) {
      piVar3 = __errno_location();
      error(1,*piVar3,&DAT_0040e363,__filename);
    }
    iVar1 = __xstat(1,__filename_00,&local_c8);
    if (iVar1 != 0) {
      piVar3 = __errno_location();
      error(1,*piVar3,&DAT_0040e363,__filename_00);
    }
    bVar4 = local_158.st_ino == local_c8.st_ino && local_158.st_dev == local_c8.st_dev;
    free(__filename);
    free(__filename_00);
  }
  return bVar4;
}


int FUN_00408220(char *param_1)

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


void FUN_00408280(char *param_1)

{
  mkdir(param_1,0x1c0);
  return;
}


void FUN_00408290(char *param_1,uint *param_2)

{
  open(param_1,*param_2 & 0xffffff3c | 0xc2,0x180);
  return;
}


void FUN_004082b0(void)

{
                    /* WARNING: Subroutine does not return */
  __assert_fail("! \"invalid KIND in __gen_tempname\"","lib/tempname.c",0x147,"gen_tempname_len");
}


int FUN_004082d0(char *param_1,int param_2,undefined param_3,code *param_4,ulong param_5)

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
      lVar5 = FUN_0040add0(0,param_5);
      if (lVar5 == 0) {
        return -1;
      }
      iVar8 = 0x3a2f8;
      while( true ) {
        pcVar9 = param_1 + lVar4;
        if (param_5 != 0) {
          do {
            pcVar10 = pcVar9 + 1;
            lVar6 = FUN_0040ae10(lVar5,0x3d);
            *pcVar9 = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"[lVar6];
            pcVar9 = pcVar10;
          } while (pcVar10 != param_1 + lVar4 + param_5);
        }
        iVar1 = (*param_4)(param_1,param_3);
        if (-1 < iVar1) break;
        if (*piVar2 != 0x11) {
          iVar1 = -1;
          iVar7 = *piVar2;
          goto LAB_004083e5;
        }
        iVar8 = iVar8 + -1;
        if (iVar8 == 0) {
          FUN_0040af30(lVar5);
          *piVar2 = 0x11;
          return -1;
        }
      }
      *piVar2 = iVar7;
LAB_004083e5:
      FUN_0040af30(lVar5);
      *piVar2 = iVar7;
      return iVar1;
    }
  }
  *piVar2 = 0x16;
  return -1;
}


ulong FUN_00408430(char *param_1,undefined param_2,undefined param_3,code *param_4)

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
    uVar7 = FUN_004082d0(param_1,param_2,local_c,(&PTR_FUN_0040ddc0)[(ulong)param_4 & 0xffffffff]);
    return uVar7;
  }
  FUN_004082b0();
  iVar9 = (int)param_2;
  if ((uint)param_4 < 3) {
    uVar7 = FUN_004082d0();
    return uVar7;
  }
  FUN_004082b0();
  piVar2 = __errno_location();
  iVar8 = *piVar2;
  sVar3 = strlen(param_1);
  if ((long)iVar9 + 6U <= sVar3) {
    lVar4 = sVar3 - ((long)iVar9 + 6U);
    __s = param_1 + lVar4;
    sVar3 = strspn(__s,"X");
    if (5 < sVar3) {
      lVar5 = FUN_0040add0(0,6);
      if (lVar5 == 0) {
        uVar1 = 0xffffffff;
      }
      else {
        iVar9 = 0x3a2f8;
        pcVar10 = __s;
        do {
          do {
            pcVar11 = pcVar10 + 1;
            lVar6 = FUN_0040ae10(lVar5,0x3d);
            *pcVar10 = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"[lVar6];
            pcVar10 = pcVar11;
          } while (pcVar11 != param_1 + lVar4 + 6);
          uVar1 = (*param_4)(param_1,extraout_RDX);
          if (-1 < (int)uVar1) {
            *piVar2 = iVar8;
LAB_004083e5:
            FUN_0040af30(lVar5);
            *piVar2 = iVar8;
            goto LAB_00408400;
          }
          if (*piVar2 != 0x11) {
            uVar1 = 0xffffffff;
            iVar8 = *piVar2;
            goto LAB_004083e5;
          }
          iVar9 = iVar9 + -1;
          pcVar10 = __s;
        } while (iVar9 != 0);
        FUN_0040af30(lVar5);
        *piVar2 = 0x11;
        uVar1 = 0xffffffff;
      }
      goto LAB_00408400;
    }
  }
  *piVar2 = 0x16;
  uVar1 = 0xffffffff;
LAB_00408400:
  return (ulong)uVar1;
}


ulong FUN_00408460(char *param_1,undefined param_2,undefined param_3,code *param_4)

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
    uVar7 = FUN_004082d0(param_1,param_2,local_c,(&PTR_FUN_0040ddc0)[(ulong)param_4 & 0xffffffff],6)
    ;
    return uVar7;
  }
  FUN_004082b0();
  piVar2 = __errno_location();
  iVar8 = *piVar2;
  sVar3 = strlen(param_1);
  uVar7 = (long)(int)param_2 + 6;
  if (uVar7 <= sVar3) {
    lVar4 = sVar3 - uVar7;
    __s = param_1 + lVar4;
    sVar3 = strspn(__s,"X");
    if (5 < sVar3) {
      lVar5 = FUN_0040add0(0,6);
      if (lVar5 == 0) {
        uVar1 = 0xffffffff;
      }
      else {
        iVar9 = 0x3a2f8;
        pcVar10 = __s;
        do {
          do {
            pcVar11 = pcVar10 + 1;
            lVar6 = FUN_0040ae10(lVar5,0x3d);
            *pcVar10 = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"[lVar6];
            pcVar10 = pcVar11;
          } while (pcVar11 != param_1 + lVar4 + 6);
          uVar1 = (*param_4)(param_1,extraout_RDX);
          if (-1 < (int)uVar1) {
            *piVar2 = iVar8;
LAB_004083e5:
            FUN_0040af30(lVar5);
            *piVar2 = iVar8;
            goto LAB_00408400;
          }
          if (*piVar2 != 0x11) {
            uVar1 = 0xffffffff;
            iVar8 = *piVar2;
            goto LAB_004083e5;
          }
          iVar9 = iVar9 + -1;
          pcVar10 = __s;
        } while (iVar9 != 0);
        FUN_0040af30(lVar5);
        *piVar2 = 0x11;
        uVar1 = 0xffffffff;
      }
      goto LAB_00408400;
    }
  }
  *piVar2 = 0x16;
  uVar1 = 0xffffffff;
LAB_00408400:
  return (ulong)uVar1;
}


int FUN_004084a0(char *param_1,int param_2,undefined param_3,code *param_4)

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
      lVar5 = FUN_0040add0(0,6);
      if (lVar5 == 0) {
        return -1;
      }
      iVar8 = 0x3a2f8;
      pcVar9 = __s;
      while( true ) {
        do {
          pcVar10 = pcVar9 + 1;
          lVar6 = FUN_0040ae10(lVar5,0x3d);
          *pcVar9 = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"[lVar6];
          pcVar9 = pcVar10;
        } while (pcVar10 != param_1 + lVar4 + 6);
        iVar1 = (*param_4)(param_1,param_3);
        if (-1 < iVar1) break;
        if (*piVar2 != 0x11) {
          iVar1 = -1;
          iVar7 = *piVar2;
          goto LAB_004083e5;
        }
        iVar8 = iVar8 + -1;
        pcVar9 = __s;
        if (iVar8 == 0) {
          FUN_0040af30(lVar5);
          *piVar2 = 0x11;
          return -1;
        }
      }
      *piVar2 = iVar7;
LAB_004083e5:
      FUN_0040af30(lVar5);
      *piVar2 = iVar7;
      return iVar1;
    }
  }
  *piVar2 = 0x16;
  return -1;
}


undefined
FUN_004084b0(FILE *param_1,long param_2,undefined param_3,undefined param_4,undefined *param_5,
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
  uVar1 = dcgettext(0,&DAT_0040de52,5);
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
    goto LAB_0040872c;
  case 5:
    uVar1 = param_5[3];
    uVar4 = param_5[2];
    uVar5 = param_5[1];
    uVar6 = *param_5;
    uVar7 = dcgettext(0,"Written by %s, %s, %s,\n%s, and %s.\n",5);
LAB_0040872c:
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
    goto LAB_004087c9;
  case 7:
    uVar1 = param_5[2];
    uVar4 = param_5[5];
    uVar5 = param_5[4];
    uVar6 = param_5[3];
    local_58 = param_5[1];
    uVar7 = *param_5;
    uVar3 = dcgettext(0,"Written by %s, %s, %s,\n%s, %s, %s, and %s.\n",5);
LAB_004087c9:
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
    goto LAB_004085aa;
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
LAB_004085aa:
  uVar1 = __fprintf_chk(param_1,1,uVar3,uVar7,local_50,local_58,uVar6,uVar5,uVar4,uVar1,local_48);
  return uVar1;
}


void FUN_00408890(void)

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
  FUN_004084b0();
  return;
}


void FUN_004088b0(void)

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
  FUN_004084b0();
  return;
}


void FUN_00408910(void)

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
  FUN_004084b0();
  return;
}


void FUN_004089d0(void)

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


void FUN_00408a50(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00408ca0();
  }
  return;
}


void FUN_00408a70(ulong param_1,ulong param_2)

{
  if ((-1 < SUB168(ZEXT816(param_1) * ZEXT816(param_2),0)) &&
     (SUB168(ZEXT816(param_1) * ZEXT816(param_2) >> 0x40,0) == 0)) {
    FUN_00408a50();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00408ca0();
}


void thunk_FUN_00408a50(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00408ca0();
  }
  return;
}


void * FUN_00408ab0(void *param_1,size_t param_2)

{
  void *pvVar1;
  
  if ((param_2 == 0) && (param_1 != (void *)0x0)) {
    free(param_1);
    return (void *)0x0;
  }
  pvVar1 = realloc(param_1,param_2);
  if ((pvVar1 == (void *)0x0) && (param_2 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00408ca0();
  }
  return pvVar1;
}


void FUN_00408af0(undefined param_1,ulong param_2,ulong param_3)

{
  if ((-1 < SUB168(ZEXT816(param_2) * ZEXT816(param_3),0)) &&
     (SUB168(ZEXT816(param_2) * ZEXT816(param_3) >> 0x40,0) == 0)) {
    FUN_00408ab0();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00408ca0();
}


void FUN_00408b20(long param_1,ulong *param_2,ulong param_3)

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
    if ((SUB168(ZEXT816(uVar2) * ZEXT816(param_3),0) < 0) || (uVar3 != 0)) goto LAB_00408b7b;
  }
  else {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x5555555555555554);
    uVar3 = SUB168(auVar1 % ZEXT816(param_3),0);
    if (SUB168(auVar1 / ZEXT816(param_3),0) <= uVar2) {
LAB_00408b7b:
                    /* WARNING: Subroutine does not return */
      FUN_00408ca0(param_1,param_2,uVar3);
    }
    uVar2 = (uVar2 >> 1) + 1 + uVar2;
  }
  *param_2 = uVar2;
  FUN_00408ab0(param_1,uVar2 * param_3);
  return;
}


void FUN_00408bb0(long param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (param_1 == 0) {
    if (uVar1 == 0) {
      *param_2 = 0x80;
      FUN_00408ab0(0,0x80);
      return;
    }
    if ((long)uVar1 < 0) goto LAB_00408bfa;
  }
  else {
    if (0x5555555555555553 < uVar1) {
LAB_00408bfa:
                    /* WARNING: Subroutine does not return */
      FUN_00408ca0();
    }
    uVar1 = (uVar1 >> 1) + 1 + uVar1;
  }
  *param_2 = uVar1;
  FUN_00408ab0(param_1,uVar1);
  return;
}


void FUN_00408c00(size_t param_1)

{
  void *__s;
  
  __s = (void *)FUN_00408a50();
  memset(__s,0,param_1);
  return;
}


void FUN_00408c20(size_t param_1,ulong param_2)

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
  FUN_00408ca0();
}


void FUN_00408c50(void *param_1,size_t param_2)

{
  void *__dest;
  
  __dest = (void *)FUN_00408a50(param_2);
  memcpy(__dest,param_1,param_2);
  return;
}


void FUN_00408c80(char *param_1)

{
  void *__dest;
  size_t sVar1;
  
  sVar1 = strlen(param_1);
  __dest = (void *)FUN_00408a50(sVar1 + 1);
  memcpy(__dest,param_1,sVar1 + 1);
  return;
}


void FUN_00408ca0(void)

{
  undefined uVar1;
  
  uVar1 = dcgettext(0,"memory exhausted",5);
  error(DAT_00611300,0,&DAT_0040e363,uVar1);
                    /* WARNING: Subroutine does not return */
  abort();
}


long FUN_00408ce0(void)

{
  long lVar1;
  int *piVar2;
  
  lVar1 = FUN_00408f90(0,0);
  if (lVar1 == 0) {
    piVar2 = __errno_location();
    if (*piVar2 == 0xc) {
                    /* WARNING: Subroutine does not return */
      FUN_00408ca0();
    }
  }
  return lVar1;
}


bool FUN_00408d10(void)

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

int FUN_00408d80(ulong param_1,int param_2,ulong param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  
  if (param_2 != 0x406) {
    iVar1 = fcntl((int)param_1,param_2,param_3);
    return iVar1;
  }
  if (DAT_00611558 < 0) {
    iVar1 = FUN_00408d80(param_1,0,param_3 & 0xffffffff);
    if (iVar1 < 0) {
      return iVar1;
    }
    if (DAT_00611558 != -1) {
      return iVar1;
    }
  }
  else {
    iVar1 = fcntl((int)param_1,0x406);
    if ((-1 < iVar1) || (piVar4 = __errno_location(), *piVar4 != 0x16)) {
      DAT_00611558 = 1;
      return iVar1;
    }
    iVar1 = FUN_00408d80(param_1 & 0xffffffff,0,param_3 & 0xffffffff);
    if (iVar1 < 0) {
      return iVar1;
    }
    DAT_00611558 = -1;
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


void FUN_00408ec0(FILE *param_1)

{
  int iVar1;
  
  if (param_1 != (FILE *)0x0) {
    iVar1 = __freading();
    if ((iVar1 != 0) && ((param_1->_flags & 0x100U) != 0)) {
      FUN_00408f30(param_1,0,1);
      fflush(param_1);
      return;
    }
  }
  fflush(param_1);
  return;
}


long FUN_00408f00(uint *param_1)

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


ulong FUN_00408f30(FILE *param_1,__off_t param_2,int param_3)

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


void * FUN_00408f90(void *param_1,size_t param_2)

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
LAB_00408fc2:
    local_110 = malloc(local_100);
    if (local_110 == (void *)0x0) {
      return (void *)0x0;
    }
  }
  else {
    local_110 = param_1;
    local_100 = param_2;
    if (param_1 == (void *)0x0) goto LAB_00408fc2;
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
LAB_004092a8:
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
          if (__dirp != (DIR *)0x0) goto LAB_00409361;
          goto joined_r0x0040936f;
        }
        iVar7 = __fxstat(1,iVar6,&local_c8);
        if (iVar7 != 0) {
          iVar7 = *piVar8;
          if (__dirp != (DIR *)0x0) {
            closedir(__dirp);
          }
LAB_004093cd:
          close(iVar6);
          goto joined_r0x0040936f;
        }
        if (((__dirp != (DIR *)0x0) && (iVar7 = closedir(__dirp), iVar7 != 0)) ||
           (_Var5 = local_c8.st_ino, _Var2 = local_c8.st_dev, __dirp = fdopendir(iVar6),
           bVar1 = bVar16 || bVar17, __dirp == (DIR *)0x0)) {
          iVar7 = *piVar8;
          goto LAB_004093cd;
        }
LAB_00409120:
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
                  if (pdVar9->d_name[0] == '.') goto LAB_00409330;
                  break;
                }
                iVar7 = *piVar8;
              }
              if (iVar7 == 0) {
                *piVar8 = 2;
                iVar7 = 2;
              }
              goto LAB_00409361;
            }
            if (pdVar9->d_name[0] == '.') {
LAB_00409330:
              if ((pdVar9->d_name[1] == '\0') || (*(short *)(pdVar9->d_name + 1) == 0x2e))
              goto LAB_00409120;
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
              goto LAB_0040923f;
            }
            *piVar8 = 0xc;
            iVar7 = 0xc;
          }
          else {
            *piVar8 = 0x22;
            iVar7 = 0x22;
          }
LAB_00409361:
          closedir(__dirp);
          goto joined_r0x0040936f;
        }
LAB_0040923f:
        pvVar10 = memcpy((void *)((long)local_e8 - __n),__filename,__n);
        local_e8 = (void *)((long)pvVar10 + -1);
        local_120 = _Var2;
        *(undefined *)((long)pvVar10 + -1) = 0x2f;
        _Var15 = _Var5;
      } while ((_Var3 != _Var2) || (_Var4 != _Var5));
      iVar6 = closedir(__dirp);
      if (iVar6 == 0) {
        lVar13 = (long)local_110 + local_100;
        goto LAB_004092a8;
      }
      goto LAB_00409390;
    }
  }
  piVar8 = __errno_location();
LAB_00409390:
  iVar7 = *piVar8;
joined_r0x0040936f:
  if (param_1 == (void *)0x0) {
    free(local_110);
  }
  *piVar8 = iVar7;
  return (void *)0x0;
}


void FUN_00409460(long param_1,int *param_2)

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
      if (iVar3 <= iVar8) goto LAB_004094dc;
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
      if (iVar9 <= iVar3) goto LAB_004094dc;
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
LAB_004094dc:
  param_2[0xc] = iVar2;
  param_2[0xb] = iVar1 + (iVar2 - iVar3);
  return;
}


int FUN_00409540(int param_1,undefined *param_2,char *param_3,char **param_4,undefined *param_5,
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
      if ((iVar5 == 0) && (sVar7 = strlen(__s1_00), sVar7 == sVar15)) goto LAB_00409760;
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
            if (local_70 == (char *)0x0) goto LAB_004096a0;
          }
          else if (local_70 == (char *)0x0) {
            local_70 = (char *)calloc((long)iVar5,1);
            if (local_70 == (char *)0x0) {
              bVar3 = true;
              goto LAB_004096a0;
            }
            bVar4 = true;
            local_70[(int)local_44] = '\x01';
          }
          local_70[lVar16] = '\x01';
        }
      }
LAB_004096a0:
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
              __fprintf_chk(__stream,1,&DAT_0040e2d1,param_9,*param_4);
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
LAB_00409760:
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


uint FUN_00409b60(uint param_1,undefined *param_2,char *param_3,long param_4,undefined param_5,
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
LAB_00409baa:
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
          goto LAB_00409cad;
        }
        pbVar8 = *(byte **)(param_7 + 8);
      }
      param_7[10] = 0;
    }
LAB_00409cad:
    param_7[6] = 1;
    cVar2 = *param_3;
LAB_00409cb8:
    if (cVar2 == ':') {
      uVar3 = 0;
    }
    if (pbVar8 == (byte *)0x0) goto LAB_00409c28;
LAB_00409ccc:
    if (*pbVar8 == 0) goto LAB_00409c28;
  }
  else {
    if (param_7[6] == 0) goto LAB_00409baa;
    cVar2 = *param_3;
    pbVar8 = *(byte **)(param_7 + 8);
    if ((cVar2 - 0x2bU & 0xfd) != 0) goto LAB_00409cb8;
    pcVar4 = param_3 + 1;
    param_3 = param_3 + 1;
    if (*pcVar4 == ':') {
      uVar3 = 0;
    }
    if (pbVar8 != (byte *)0x0) goto LAB_00409ccc;
LAB_00409c28:
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
        FUN_00409460(param_2,param_7);
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
LAB_00409d96:
      if (uVar11 != param_1) {
        *param_7 = uVar11;
      }
      return 0xffffffff;
    }
    lVar6 = 3;
    pbVar8 = (byte *)param_2[(int)uVar11];
    pbVar9 = pbVar8;
    pbVar10 = &DAT_0040e2e9;
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
          FUN_00409460(param_2,param_7);
          uVar11 = param_7[0xb];
        }
      }
      param_7[0xc] = param_1;
      *param_7 = param_1;
      goto LAB_00409d96;
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
        puVar15 = &DAT_0040e2e9;
        goto LAB_00409ef5;
      }
      if ((int)param_6 != 0) {
        if (pbVar8[2] == 0) {
          pcVar4 = strchr(param_3,(int)(char)bVar14);
          param_6 = param_6 & 0xffffffff;
          if (pcVar4 != (char *)0x0) goto LAB_00409ea0;
        }
        *(byte **)(param_7 + 8) = pbVar8 + 1;
        uVar11 = FUN_00409540(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar3,
                              &DAT_0040e2ea);
        if (uVar11 != 0xffffffff) {
          return uVar11;
        }
        pbVar8 = (byte *)param_2[(int)*param_7];
      }
    }
LAB_00409ea0:
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
  puVar15 = &DAT_0040e308;
LAB_00409ef5:
  uVar3 = FUN_00409540(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar3,puVar15);
  return uVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040a130(void)

{
  DAT_00611560 = DAT_0061137c;
  _DAT_00611564 = DAT_00611378;
  FUN_00409b60();
  DAT_0061137c = DAT_00611560;
  DAT_006115a0 = DAT_00611570;
  _DAT_00611374 = DAT_00611568;
  return;
}


void FUN_0040a190(void)

{
  FUN_0040a130();
  return;
}


void FUN_0040a1b0(void)

{
  FUN_0040a130();
  return;
}


void FUN_0040a1d0(void)

{
  FUN_00409b60();
  return;
}


void FUN_0040a1f0(void)

{
  FUN_0040a130();
  return;
}


void FUN_0040a210(void)

{
  FUN_00409b60();
  return;
}


size_t FUN_0040a230(wchar_t *param_1,byte *param_2,size_t param_3,mbstate_t *param_4)

{
  char cVar1;
  size_t sVar2;
  wchar_t local_1c;
  
  if (param_2 == (byte *)0x0) {
    param_3 = 1;
    param_2 = (byte *)0x40e307;
  }
  else {
    if (param_3 == 0) {
      return 0xfffffffffffffffe;
    }
    if (param_1 != (wchar_t *)0x0) goto LAB_0040a254;
  }
  param_1 = &local_1c;
LAB_0040a254:
  sVar2 = mbrtowc(param_1,(char *)param_2,param_3,param_4);
  if ((0xfffffffffffffffd < sVar2) && (cVar1 = FUN_0040a790(0), cVar1 == '\0')) {
    sVar2 = 1;
    *param_1 = (uint)*param_2;
  }
  return sVar2;
}


char * FUN_0040a2b0(char *param_1,ulong param_2)

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


void FUN_0040a3a0(void)

{
  FUN_004032b0(1);
  return;
}


long FUN_0040a3b0(char *param_1,char **param_2,void *param_3,size_t param_4)

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
LAB_0040a447:
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
          goto LAB_0040a447;
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


void FUN_0040a4d0(undefined param_1,undefined param_2,long param_3)

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
  uVar2 = FUN_00407e60(1,param_1);
  uVar3 = FUN_00407b50(0,8,param_2);
  error(0,0,uVar1,uVar3,uVar2);
  return;
}


void FUN_0040a550(long *param_1,void *param_2,size_t param_3)

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
      uVar3 = FUN_00407e80(lVar5);
      __fprintf_chk(stderr,1,"\n  - %s",uVar3);
      lVar5 = param_1[lVar4];
      param_2 = (void *)((long)__s2 + param_3);
      __s1 = __s2;
      if (lVar5 == 0) goto LAB_0040a620;
    }
    lVar4 = lVar4 + 1;
    param_2 = (void *)((long)__s2 + param_3);
    uVar3 = FUN_00407e80(lVar5);
    __fprintf_chk(stderr,1,&DAT_0040e361,uVar3);
    lVar5 = param_1[lVar4];
  }
LAB_0040a620:
  pcVar2 = stderr->_IO_write_ptr;
  if (pcVar2 < stderr->_IO_write_end) {
    stderr->_IO_write_ptr = pcVar2 + 1;
    *pcVar2 = '\n';
    return;
  }
  __overflow(stderr,10);
  return;
}


long FUN_0040a670(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                 undefined param_5,code *param_6)

{
  long lVar1;
  
  lVar1 = FUN_0040a3b0(param_2,param_3,param_4,param_5);
  if (lVar1 < 0) {
    FUN_0040a4d0(param_1,param_2,lVar1);
    FUN_0040a550(param_3,param_4,param_5);
    (*param_6)();
    lVar1 = -1;
  }
  return lVar1;
}


long FUN_0040a6e0(void *param_1,long *param_2,void *param_3,size_t param_4)

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


ulong FUN_0040a730(uint *param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  
  lVar2 = __fpending();
  uVar1 = *param_1;
  uVar3 = FUN_0040b9a0(param_1);
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


bool FUN_0040a790(int param_1)

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
    pbVar5 = &DAT_0040e366;
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


ulong FUN_0040a7f0(char *param_1,ulong param_2)

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

char * FUN_0040a830(void)

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
  if (DAT_00611598 != (char *)0x0) goto LAB_0040a86a;
  pcVar7 = getenv("CHARSETALIASDIR");
  if ((pcVar7 == (char *)0x0) || (*pcVar7 == '\0')) {
    sVar6 = 0x73;
    sVar5 = 0x65;
    __n = 100;
    pcVar7 = 
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib"
    ;
LAB_0040a955:
    __file = (char *)malloc(sVar6);
    if (__file != (char *)0x0) {
      memcpy(__file,pcVar7,__n);
      __file[__n] = '/';
      goto LAB_0040a976;
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
        goto LAB_0040a955;
      }
      sVar6 = __n + 0xe;
    }
    __file = (char *)malloc(sVar6);
    if (__file != (char *)0x0) {
      memcpy(__file,pcVar7,__n);
      sVar5 = __n;
LAB_0040a976:
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
LAB_0040aa10:
          pbVar8 = (byte *)__stream->_IO_read_ptr;
          if (__stream->_IO_read_end <= pbVar8) goto LAB_0040ab9c;
          do {
            __stream->_IO_read_ptr = (char *)(pbVar8 + 1);
            uVar4 = (uint)*pbVar8;
            __ptr = pcVar7;
            while( true ) {
              pcVar7 = __ptr;
              if ((uVar4 - 9 < 2) || (uVar4 == 0x20)) goto LAB_0040aa10;
              if (uVar4 == 0x23) goto LAB_0040ac01;
              ungetc(uVar4,__stream);
              iVar2 = fscanf(__stream,"%50s %50s",&local_b8,&local_78);
              puVar13 = &local_b8;
              if (iVar2 < 2) goto LAB_0040abaf;
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
                FUN_0040b9a0(__stream);
                goto LAB_0040a9b4;
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
LAB_0040ab9c:
              uVar4 = __uflow(__stream);
              __ptr = pcVar7;
              if (uVar4 == 0xffffffff) goto LAB_0040abaf;
            }
          } while( true );
        }
        close(iVar2);
      }
      goto LAB_0040a9ae;
    }
  }
  DAT_00611598 = "";
LAB_0040a86a:
  cVar1 = *DAT_00611598;
  pcVar7 = DAT_00611598;
  do {
    if (cVar1 == '\0') {
LAB_0040a8c4:
      if (*__s1 == '\0') {
        __s1 = "ASCII";
      }
      return __s1;
    }
    iVar2 = strcmp(__s1,pcVar7);
    if ((iVar2 == 0) || ((cVar1 == '*' && (pcVar7[1] == '\0')))) {
      sVar6 = strlen(pcVar7);
      __s1 = pcVar7 + sVar6 + 1;
      goto LAB_0040a8c4;
    }
    sVar6 = strlen(pcVar7);
    sVar5 = strlen(pcVar7 + sVar6 + 1);
    pcVar7 = pcVar7 + sVar6 + 1 + sVar5 + 1;
    cVar1 = *pcVar7;
  } while( true );
LAB_0040ac01:
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
  if (uVar4 == 0xffffffff) goto LAB_0040abaf;
  goto LAB_0040aa10;
LAB_0040abaf:
  FUN_0040b9a0(__stream);
  if (local_d0 == 0) {
LAB_0040a9ae:
    pcVar7 = "";
  }
  else {
    pcVar7[local_d0] = '\0';
  }
LAB_0040a9b4:
  free(__file);
  DAT_00611598 = pcVar7;
  goto LAB_0040a86a;
}


void FUN_0040ada0(undefined param_1)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)FUN_00408a50(0x18);
  *puVar1 = param_1;
  puVar1[2] = 0;
  puVar1[1] = 0;
  return;
}


long * FUN_0040add0(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_0040aff0();
  plVar2 = (long *)0x0;
  if (lVar1 != 0) {
    plVar2 = (long *)FUN_00408a50(0x18);
    *plVar2 = lVar1;
    plVar2[2] = 0;
    plVar2[1] = 0;
  }
  return plVar2;
}


undefined FUN_0040ae00(undefined *param_1)

{
  return *param_1;
}


ulong FUN_0040ae10(undefined *param_1,ulong param_2)

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
      FUN_0040b300(uVar3,local_40,lVar7);
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


void FUN_0040af10(void *param_1)

{
  __explicit_bzero_chk(param_1,0x18,0xffffffffffffffff);
  free(param_1);
  return;
}


undefined FUN_0040af30(undefined *param_1)

{
  int iVar1;
  undefined uVar2;
  int *piVar3;
  
  uVar2 = FUN_0040b460(*param_1);
  piVar3 = __errno_location();
  iVar1 = *piVar3;
  __explicit_bzero_chk(param_1,0x18,0xffffffffffffffff);
  free(param_1);
  *piVar3 = iVar1;
  return uVar2;
}


void FUN_0040af90(long param_1)

{
  undefined uVar1;
  int *piVar2;
  undefined uVar3;
  
  if (param_1 != 0) {
    uVar1 = FUN_00407e80();
    piVar2 = __errno_location();
    if (*piVar2 == 0) {
      uVar3 = dcgettext(0,"%s: end of file",5);
    }
    else {
      uVar3 = dcgettext(0,"%s: read error",5);
    }
    error(DAT_00611300,*piVar2,uVar3,uVar1);
                    /* WARNING: Subroutine does not return */
    abort();
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


FILE ** FUN_0040aff0(FILE *param_1,ulong param_2)

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
    ppFVar3 = (FILE **)FUN_00408a50(0x1038);
    *ppFVar3 = (FILE *)0x0;
    ppFVar3[1] = (FILE *)FUN_0040af90;
    ppFVar3[2] = (FILE *)0x0;
    return ppFVar3;
  }
  if (param_1 != (FILE *)0x0) {
    pFVar2 = (FILE *)FUN_0040ba20(param_1,&DAT_0040e424);
    if (pFVar2 != (FILE *)0x0) {
      ppFVar3 = (FILE **)FUN_00408a50(0x1038);
      *ppFVar3 = pFVar2;
      __n = 0x1000;
      if (param_2 < 0x1001) {
        __n = param_2;
      }
      ppFVar3[1] = (FILE *)FUN_0040af90;
      ppFVar3[2] = param_1;
      setvbuf(pFVar2,(char *)(ppFVar3 + 3),0,__n);
      return ppFVar3;
    }
    return (FILE **)0x0;
  }
  ppFVar4 = (FILE **)FUN_00408a50(0x1038);
  *ppFVar4 = (FILE *)0x0;
  ppFVar3 = ppFVar4 + 4;
  ppFVar4[1] = (FILE *)FUN_0040af90;
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
    if (0x7ff < (long)pFVar2) goto LAB_0040b0f8;
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
    if (0x7ff < lVar7) goto LAB_0040b0f8;
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
    if (0x7ff < uVar5) goto LAB_0040b0f8;
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
LAB_0040b0f8:
  FUN_0040b760(ppFVar3);
  return ppFVar4;
}


void FUN_0040b2e0(long param_1,undefined param_2)

{
  *(undefined *)(param_1 + 8) = param_2;
  return;
}


void FUN_0040b2f0(long param_1,undefined param_2)

{
  *(undefined *)(param_1 + 0x10) = param_2;
  return;
}


void FUN_0040b300(FILE **param_1,void *param_2,FILE *param_3)

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
    goto LAB_0040b415;
  }
  do {
    param_2 = (void *)((long)__dest + (long)pFVar5);
    param_3 = (FILE *)((long)param_3 - (long)pFVar5);
    memcpy(__dest,(void *)((0x800 - (long)pFVar5) + (long)__src),(size_t)pFVar5);
    if (((ulong)param_2 & 7) == 0) goto LAB_0040b3fb;
    pFVar5 = (FILE *)0x800;
    FUN_0040b4b0(ppFVar1,__src);
    __dest = param_2;
  } while ((FILE *)0x800 < param_3);
  goto LAB_0040b40f;
LAB_0040b3fb:
  while ((FILE *)0x7ff < param_3) {
    FUN_0040b4b0(ppFVar1,param_2);
    param_3 = (FILE *)&param_3[-10]._fileno;
    param_2 = (void *)((long)param_2 + 0x800);
    if (param_3 == (FILE *)0x0) {
      param_1[3] = (FILE *)0x0;
      return;
    }
  }
  FUN_0040b4b0(ppFVar1,__src);
LAB_0040b40f:
  pFVar5 = (FILE *)0x800;
LAB_0040b415:
  memcpy(param_2,__src,(size_t)param_3);
  param_1[3] = (FILE *)((long)pFVar5 - (long)param_3);
  return;
}


undefined FUN_0040b460(long *param_1)

{
  long lVar1;
  undefined uVar2;
  
  lVar1 = *param_1;
  __explicit_bzero_chk(param_1,0x1038,0xffffffffffffffff);
  free(param_1);
  if (lVar1 != 0) {
    uVar2 = FUN_0040b9a0(lVar1);
    return uVar2;
  }
  return 0;
}


void FUN_0040b4b0(long *param_1,long *param_2)

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


void FUN_0040b760(ulong *param_1)

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


int FUN_0040b9a0(FILE *param_1)

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
      if (_Var4 == -1) goto LAB_0040ba07;
    }
    iVar1 = FUN_00408ec0(param_1);
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
LAB_0040ba07:
  iVar1 = fclose(param_1);
  return iVar1;
}


FILE * FUN_0040ba20(char *param_1,char *param_2)

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
    iVar2 = FUN_0040bac0(uVar1);
    if (iVar2 < 0) {
      piVar5 = __errno_location();
      pFVar4 = (FILE *)0x0;
      iVar2 = *piVar5;
      FUN_0040b9a0(__stream);
      *piVar5 = iVar2;
    }
    else {
      iVar3 = FUN_0040b9a0(__stream);
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


void FUN_0040bac0(undefined param_1)

{
  FUN_00408d80(param_1,0,3);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040bb03) */
/* WARNING: Removing unreachable block (ram,0x0040bb08) */

void FUN_0040bad0(void)

{
  __DT_INIT();
  return;
}


void FUN_0040bb30(void)

{
  return;
}


void FUN_0040bb40(undefined param_1)

{
  __cxa_atexit(param_1,0,DAT_006112e8);
  return;
}


undefined FUN_0040bb58(undefined param_1,undefined param_2,undefined param_3)

{
  code **ppcVar1;
  
  for (ppcVar1 = (code **)&DAT_00610e30; *ppcVar1 != (code *)0xffffffffffffffff;
      ppcVar1 = ppcVar1 + -1) {
    (**ppcVar1)();
  }
  return param_3;
}


void __DT_FINI(void)

{
  FUN_004029d1();
  return;
}

