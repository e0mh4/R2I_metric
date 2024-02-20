
void FUN_004016d0(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void switchD_004034d0::caseD_b(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_004016da(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_004016df(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_004016e4(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_004016e9(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void switchD_004052da::caseD_0(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void switchD_00406bcc::caseD_5(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


byte FUN_00401700(int param_1,undefined8 *param_2)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  
  FUN_004032e0(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils",
                 "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale"
                );
  textdomain("coreutils");
  DAT_0060d1f8 = 2;
  FUN_00408f30(FUN_004031f0);
  DAT_0060d298 = param_2;
  if (param_1 == 2) {
    pcVar5 = (char *)param_2[1];
    iVar2 = strcmp(pcVar5,"--help");
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00402e30(0);
    }
    iVar2 = strcmp(pcVar5,"--version");
    if (iVar2 == 0) {
      FUN_004056b0(stdout,"[","GNU coreutils",PTR_DAT_0060d1f0,"Kevin Braunsdorf","Matthew Bradburn"
                   ,0,0);
      return 0;
    }
    iVar2 = strcmp(pcVar5,"]");
    if (iVar2 == 0) {
      DAT_0060d2a0 = 1;
      DAT_0060d2a4 = 1;
      return 1;
    }
  }
  else if ((1 < param_1) && (iVar2 = strcmp((char *)param_2[(long)param_1 + -1],"]"), iVar2 == 0)) {
    DAT_0060d2a4 = 1;
    DAT_0060d2a0 = param_1 + -1;
    bVar1 = FUN_00402790(param_1 + -2);
    if (DAT_0060d2a4 == DAT_0060d2a0) {
      return bVar1 ^ 1;
    }
    uVar4 = FUN_00404f00(DAT_0060d298[DAT_0060d2a4]);
    pcVar5 = "extra argument %s";
    goto LAB_0040185f;
  }
  uVar4 = FUN_00404f00(&DAT_0040911b);
  pcVar5 = "missing %s";
LAB_0040185f:
  uVar3 = dcgettext(0,pcVar5,5);
                    /* WARNING: Subroutine does not return */
  FUN_00401b10(uVar3,uVar4);
}


void FUN_004018a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_retaddr;
  undefined auStack_8 [8];
  
  (*(code *)PTR___libc_start_main_0060cff0)
            (FUN_00401700,unaff_retaddr,&stack0x00000008,FUN_00408ec0,FUN_00408f20,param_3,auStack_8
            );
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* WARNING: Removing unreachable block (ram,0x004018d8) */
/* WARNING: Removing unreachable block (ram,0x004018e2) */

void FUN_004018cb(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00401919) */

void FUN_004018ea(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00401956) */

void FUN_00401921(void)

{
  if (DAT_0060d288 != '\0') {
    return;
  }
  FUN_004018cb();
  DAT_0060d288 = 1;
  return;
}


/* WARNING: Removing unreachable block (ram,0x00401919) */

void thunk_FUN_004018ea(void)

{
  return;
}


ulong FUN_00401980(byte *param_1)

{
  int iVar1;
  undefined4 extraout_var;
  long lVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined in_CF;
  bool bVar5;
  bool bVar6;
  undefined in_ZF;
  bool bVar7;
  
  lVar2 = 2;
  pbVar3 = param_1;
  pbVar4 = &DAT_00408f85;
  do {
    if (lVar2 == 0) break;
    lVar2 = lVar2 + -1;
    in_CF = *pbVar3 < *pbVar4;
    in_ZF = *pbVar3 == *pbVar4;
    pbVar3 = pbVar3 + 1;
    pbVar4 = pbVar4 + 1;
  } while ((bool)in_ZF);
  bVar5 = false;
  bVar7 = (!(bool)in_CF && !(bool)in_ZF) == (bool)in_CF;
  if (!bVar7) {
    lVar2 = 3;
    pbVar3 = param_1;
    pbVar4 = &DAT_00408f84;
    do {
      if (lVar2 == 0) break;
      lVar2 = lVar2 + -1;
      bVar5 = *pbVar3 < *pbVar4;
      bVar7 = *pbVar3 == *pbVar4;
      pbVar3 = pbVar3 + 1;
      pbVar4 = pbVar4 + 1;
    } while (bVar7);
    bVar6 = false;
    bVar5 = (!bVar5 && !bVar7) == bVar5;
    if (!bVar5) {
      lVar2 = 3;
      pbVar3 = param_1;
      pbVar4 = &DAT_00408f87;
      do {
        if (lVar2 == 0) break;
        lVar2 = lVar2 + -1;
        bVar6 = *pbVar3 < *pbVar4;
        bVar5 = *pbVar3 == *pbVar4;
        pbVar3 = pbVar3 + 1;
        pbVar4 = pbVar4 + 1;
      } while (bVar5);
      bVar7 = false;
      bVar5 = (!bVar6 && !bVar5) == bVar6;
      if (!bVar5) {
        lVar2 = 4;
        pbVar3 = param_1;
        pbVar4 = &DAT_00408f8a;
        do {
          if (lVar2 == 0) break;
          lVar2 = lVar2 + -1;
          bVar7 = *pbVar3 < *pbVar4;
          bVar5 = *pbVar3 == *pbVar4;
          pbVar3 = pbVar3 + 1;
          pbVar4 = pbVar4 + 1;
        } while (bVar5);
        bVar6 = false;
        bVar5 = (!bVar7 && !bVar5) == bVar7;
        if (!bVar5) {
          lVar2 = 4;
          pbVar3 = param_1;
          pbVar4 = &DAT_00408f8e;
          do {
            if (lVar2 == 0) break;
            lVar2 = lVar2 + -1;
            bVar6 = *pbVar3 < *pbVar4;
            bVar5 = *pbVar3 == *pbVar4;
            pbVar3 = pbVar3 + 1;
            pbVar4 = pbVar4 + 1;
          } while (bVar5);
          bVar7 = false;
          bVar5 = (!bVar6 && !bVar5) == bVar6;
          if (!bVar5) {
            lVar2 = 4;
            pbVar3 = param_1;
            pbVar4 = &DAT_00408f92;
            do {
              if (lVar2 == 0) break;
              lVar2 = lVar2 + -1;
              bVar7 = *pbVar3 < *pbVar4;
              bVar5 = *pbVar3 == *pbVar4;
              pbVar3 = pbVar3 + 1;
              pbVar4 = pbVar4 + 1;
            } while (bVar5);
            bVar6 = false;
            bVar5 = (!bVar7 && !bVar5) == bVar7;
            if (!bVar5) {
              lVar2 = 4;
              pbVar3 = param_1;
              pbVar4 = &DAT_00408f96;
              do {
                if (lVar2 == 0) break;
                lVar2 = lVar2 + -1;
                bVar6 = *pbVar3 < *pbVar4;
                bVar5 = *pbVar3 == *pbVar4;
                pbVar3 = pbVar3 + 1;
                pbVar4 = pbVar4 + 1;
              } while (bVar5);
              bVar7 = false;
              bVar5 = (!bVar6 && !bVar5) == bVar6;
              if (!bVar5) {
                lVar2 = 4;
                pbVar3 = param_1;
                pbVar4 = &DAT_00408f9a;
                do {
                  if (lVar2 == 0) break;
                  lVar2 = lVar2 + -1;
                  bVar7 = *pbVar3 < *pbVar4;
                  bVar5 = *pbVar3 == *pbVar4;
                  pbVar3 = pbVar3 + 1;
                  pbVar4 = pbVar4 + 1;
                } while (bVar5);
                bVar6 = false;
                bVar5 = (!bVar7 && !bVar5) == bVar7;
                if (!bVar5) {
                  lVar2 = 4;
                  pbVar3 = param_1;
                  pbVar4 = &DAT_00408f9e;
                  do {
                    if (lVar2 == 0) break;
                    lVar2 = lVar2 + -1;
                    bVar6 = *pbVar3 < *pbVar4;
                    bVar5 = *pbVar3 == *pbVar4;
                    pbVar3 = pbVar3 + 1;
                    pbVar4 = pbVar4 + 1;
                  } while (bVar5);
                  bVar7 = false;
                  bVar5 = (!bVar6 && !bVar5) == bVar6;
                  if (!bVar5) {
                    lVar2 = 4;
                    pbVar3 = param_1;
                    pbVar4 = &DAT_00408fa2;
                    do {
                      if (lVar2 == 0) break;
                      lVar2 = lVar2 + -1;
                      bVar7 = *pbVar3 < *pbVar4;
                      bVar5 = *pbVar3 == *pbVar4;
                      pbVar3 = pbVar3 + 1;
                      pbVar4 = pbVar4 + 1;
                    } while (bVar5);
                    if ((!bVar7 && !bVar5) != bVar7) {
                      iVar1 = strcmp((char *)param_1,"-gt");
                      if (iVar1 != 0) {
                        iVar1 = strcmp((char *)param_1,"-ge");
                        return CONCAT44(extraout_var,iVar1) & 0xffffffffffffff00 |
                               (ulong)(iVar1 == 0);
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
  return 1;
}


uint FUN_00401ad0(char *param_1,__time_t *param_2)

{
  uint uVar1;
  stat sStack_98;
  
  uVar1 = __xstat(1,param_1,&sStack_98);
  if (uVar1 == 0) {
    *param_2 = sStack_98.st_mtim.tv_sec;
    param_2[1] = sStack_98.st_mtim.tv_nsec;
  }
  return uVar1 & 0xffffff00 | (uint)(uVar1 == 0);
}


void FUN_00401b10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 undefined8 param_13,undefined8 param_14)

{
  char in_AL;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined *local_c8;
  undefined *local_c0;
  undefined local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_78;
  undefined4 local_68;
  undefined4 local_58;
  undefined4 local_48;
  undefined4 local_38;
  undefined4 local_28;
  undefined4 local_18;
  
  if (in_AL != '\0') {
    local_88 = param_1;
    local_78 = param_2;
    local_68 = param_3;
    local_58 = param_4;
    local_48 = param_5;
    local_38 = param_6;
    local_28 = param_7;
    local_18 = param_8;
  }
  local_c8 = &stack0x00000008;
  local_c0 = local_b8;
  local_d0 = 8;
  local_cc = 0x30;
  local_b0 = param_10;
  local_a8 = param_11;
  local_a0 = param_12;
  local_98 = param_13;
  local_90 = param_14;
  FUN_00405240(0,0,param_9,&local_d0);
                    /* WARNING: Subroutine does not return */
  exit(2);
}


byte * FUN_00401bb0(byte *param_1)

{
  byte bVar1;
  byte bVar2;
  ushort *puVar3;
  ushort **ppuVar4;
  byte *pbVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte *pbVar8;
  byte *pbVar9;
  
  ppuVar4 = __ctype_b_loc();
  puVar3 = *ppuVar4;
  pbVar5 = param_1;
  while (bVar1 = *pbVar5, (*(byte *)(puVar3 + bVar1) & 1) != 0) {
    pbVar5 = pbVar5 + 1;
  }
  if (bVar1 == 0x2b) {
    pbVar5 = pbVar5 + 1;
    pbVar8 = pbVar5;
  }
  else {
    pbVar8 = pbVar5 + (bVar1 == 0x2d);
  }
  pbVar9 = pbVar8 + 1;
  if ((int)(char)*pbVar8 - 0x30U < 10) {
    bVar1 = pbVar8[1];
    while ((int)(char)bVar1 - 0x30U < 10) {
      pbVar9 = pbVar9 + 1;
      bVar1 = *pbVar9;
    }
    bVar2 = *(byte *)(puVar3 + ((ulong)(uint)(int)(char)bVar1 & 0xff));
    while ((bVar2 & 1) != 0) {
      pbVar9 = pbVar9 + 1;
      bVar1 = *pbVar9;
      bVar2 = *(byte *)(puVar3 + bVar1);
    }
    if (bVar1 == 0) {
      return pbVar5;
    }
  }
  uVar6 = FUN_00404f00(param_1);
  uVar7 = dcgettext(0,"invalid integer %s",5);
                    /* WARNING: Subroutine does not return */
  FUN_00401b10(uVar7,uVar6);
}


void FUN_00401c90(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00404f00(*(undefined8 *)(DAT_0060d298 + -8 + (long)DAT_0060d2a0 * 8));
  uVar2 = dcgettext(0,"missing argument after %s",5);
                    /* WARNING: Subroutine does not return */
  FUN_00401b10(uVar2,uVar1);
}


void FUN_00401cd0(void)

{
  if (DAT_0060d2a4 + 1 < DAT_0060d2a0) {
    DAT_0060d2a4 = DAT_0060d2a4 + 2;
    return;
  }
  DAT_0060d2a4 = DAT_0060d2a4 + 1;
                    /* WARNING: Subroutine does not return */
  FUN_00401c90();
}


ulong FUN_00401d00(void)

{
  long lVar1;
  int iVar2;
  __uid_t _Var3;
  __gid_t _Var4;
  char *__nptr;
  int *piVar5;
  ulong uVar6;
  ulong extraout_RDX;
  ulong extraout_RDX_00;
  ulong extraout_RDX_01;
  ulong extraout_RDX_02;
  ulong uVar7;
  ulong extraout_RDX_03;
  ulong extraout_RDX_04;
  ulong extraout_RDX_05;
  ulong extraout_RDX_06;
  ulong extraout_RDX_07;
  stat sStack_a8;
  
  lVar1 = DAT_0060d298;
  switch(*(undefined *)(*(long *)(DAT_0060d298 + (long)DAT_0060d2a4 * 8) + 1)) {
  case 0x47:
    FUN_00401cd0();
    iVar2 = __xstat(1,*(char **)(lVar1 + -8 + (long)DAT_0060d2a4 * 8),&sStack_a8);
    if (iVar2 == 0) {
      piVar5 = __errno_location();
      *piVar5 = 0;
      _Var4 = getegid();
      uVar6 = extraout_RDX_07;
      if (_Var4 == 0xffffffff) {
        uVar6 = 0;
        uVar7 = 0;
        if (*piVar5 != 0) break;
      }
      uVar7 = uVar6 & 0xffffffffffffff00 | (ulong)(sStack_a8.st_gid == _Var4);
      break;
    }
  default:
switchD_00401d29_caseD_48:
    uVar7 = 0;
    break;
  case 0x4c:
  case 0x68:
    FUN_00401cd0();
    iVar2 = __lxstat(1,*(char **)(lVar1 + -8 + (long)DAT_0060d2a4 * 8),&sStack_a8);
    uVar7 = 0;
    if (iVar2 == 0) {
      uVar7 = (ulong)((sStack_a8.st_mode & 0xf000) == 0xa000);
    }
    break;
  case 0x4f:
    FUN_00401cd0();
    iVar2 = __xstat(1,*(char **)(lVar1 + -8 + (long)DAT_0060d2a4 * 8),&sStack_a8);
    if (iVar2 == 0) {
      piVar5 = __errno_location();
      *piVar5 = 0;
      _Var3 = geteuid();
      uVar6 = extraout_RDX_06;
      if (_Var3 == 0xffffffff) {
        uVar6 = 0;
        uVar7 = 0;
        if (*piVar5 != 0) break;
      }
      uVar7 = uVar6 & 0xffffffffffffff00 | (ulong)(sStack_a8.st_uid == _Var3);
      break;
    }
    goto switchD_00401d29_caseD_48;
  case 0x53:
    FUN_00401cd0();
    iVar2 = __xstat(1,*(char **)(lVar1 + -8 + (long)DAT_0060d2a4 * 8),&sStack_a8);
    uVar7 = 0;
    if (iVar2 == 0) {
      uVar7 = (ulong)((sStack_a8.st_mode & 0xf000) == 0xc000);
    }
    break;
  case 0x61:
  case 0x65:
    FUN_00401cd0();
    iVar2 = __xstat(1,*(char **)(lVar1 + -8 + (long)DAT_0060d2a4 * 8),&sStack_a8);
    uVar7 = extraout_RDX_05 & 0xffffffffffffff00 | (ulong)(iVar2 == 0);
    break;
  case 0x62:
    FUN_00401cd0();
    iVar2 = __xstat(1,*(char **)(lVar1 + -8 + (long)DAT_0060d2a4 * 8),&sStack_a8);
    uVar7 = 0;
    if (iVar2 == 0) {
      uVar7 = (ulong)((sStack_a8.st_mode & 0xf000) == 0x6000);
    }
    break;
  case 99:
    FUN_00401cd0();
    iVar2 = __xstat(1,*(char **)(lVar1 + -8 + (long)DAT_0060d2a4 * 8),&sStack_a8);
    uVar7 = 0;
    if (iVar2 == 0) {
      uVar7 = (ulong)((sStack_a8.st_mode & 0xf000) == 0x2000);
    }
    break;
  case 100:
    FUN_00401cd0();
    iVar2 = __xstat(1,*(char **)(lVar1 + -8 + (long)DAT_0060d2a4 * 8),&sStack_a8);
    uVar7 = 0;
    if (iVar2 == 0) {
      uVar7 = (ulong)((sStack_a8.st_mode & 0xf000) == 0x4000);
    }
    break;
  case 0x66:
    FUN_00401cd0();
    iVar2 = __xstat(1,*(char **)(lVar1 + -8 + (long)DAT_0060d2a4 * 8),&sStack_a8);
    uVar7 = 0;
    if (iVar2 == 0) {
      uVar7 = (ulong)((sStack_a8.st_mode & 0xf000) == 0x8000);
    }
    break;
  case 0x67:
    FUN_00401cd0();
    iVar2 = __xstat(1,*(char **)(lVar1 + -8 + (long)DAT_0060d2a4 * 8),&sStack_a8);
    uVar7 = 0;
    if (iVar2 == 0) {
      uVar7 = (ulong)(sStack_a8.st_mode >> 10 & 1);
    }
    break;
  case 0x6b:
    FUN_00401cd0();
    iVar2 = __xstat(1,*(char **)(lVar1 + -8 + (long)DAT_0060d2a4 * 8),&sStack_a8);
    uVar7 = 0;
    if (iVar2 == 0) {
      uVar7 = (ulong)(sStack_a8.st_mode >> 9 & 1);
    }
    break;
  case 0x6e:
    FUN_00401cd0();
    uVar7 = extraout_RDX_04 & 0xffffffffffffff00 |
            (ulong)(**(char **)(lVar1 + -8 + (long)DAT_0060d2a4 * 8) != '\0');
    break;
  case 0x70:
    FUN_00401cd0();
    iVar2 = __xstat(1,*(char **)(lVar1 + -8 + (long)DAT_0060d2a4 * 8),&sStack_a8);
    uVar7 = 0;
    if (iVar2 == 0) {
      uVar7 = (ulong)((sStack_a8.st_mode & 0xf000) == 0x1000);
    }
    break;
  case 0x72:
    FUN_00401cd0();
    iVar2 = euidaccess(*(char **)(lVar1 + -8 + (long)DAT_0060d2a4 * 8),4);
    uVar7 = extraout_RDX_03 & 0xffffffffffffff00 | (ulong)(iVar2 == 0);
    break;
  case 0x73:
    FUN_00401cd0();
    iVar2 = __xstat(1,*(char **)(lVar1 + -8 + (long)DAT_0060d2a4 * 8),&sStack_a8);
    uVar7 = 0;
    if (iVar2 == 0) {
      uVar7 = (ulong)(0 < sStack_a8.st_size);
    }
    break;
  case 0x74:
    FUN_00401cd0();
    __nptr = (char *)FUN_00401bb0(*(undefined8 *)(lVar1 + -8 + (long)DAT_0060d2a4 * 8));
    piVar5 = __errno_location();
    *piVar5 = 0;
    uVar6 = strtol(__nptr,(char **)0x0,10);
    uVar7 = 0;
    if ((*piVar5 != 0x22) && (uVar7 = 0, uVar6 < 0x80000000)) {
      iVar2 = isatty((int)uVar6);
      uVar7 = extraout_RDX_02 & 0xffffffffffffff00 | (ulong)(iVar2 != 0);
    }
    break;
  case 0x75:
    FUN_00401cd0();
    iVar2 = __xstat(1,*(char **)(lVar1 + -8 + (long)DAT_0060d2a4 * 8),&sStack_a8);
    uVar7 = 0;
    if (iVar2 == 0) {
      uVar7 = (ulong)(sStack_a8.st_mode >> 0xb & 1);
    }
    break;
  case 0x77:
    FUN_00401cd0();
    iVar2 = euidaccess(*(char **)(lVar1 + -8 + (long)DAT_0060d2a4 * 8),2);
    uVar7 = extraout_RDX_01 & 0xffffffffffffff00 | (ulong)(iVar2 == 0);
    break;
  case 0x78:
    FUN_00401cd0();
    iVar2 = euidaccess(*(char **)(lVar1 + -8 + (long)DAT_0060d2a4 * 8),1);
    uVar7 = extraout_RDX_00 & 0xffffffffffffff00 | (ulong)(iVar2 == 0);
    break;
  case 0x7a:
    FUN_00401cd0();
    uVar7 = extraout_RDX & 0xffffffffffffff00 |
            (ulong)(**(char **)(lVar1 + -8 + (long)DAT_0060d2a4 * 8) == '\0');
  }
  return uVar7 & 0xffffffff;
}


uint FUN_00402210(byte param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  size_t sVar5;
  undefined8 uVar6;
  byte bVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  byte bVar11;
  long lVar12;
  byte bVar13;
  byte *pbVar14;
  char *pcVar15;
  byte *pbVar16;
  bool bVar17;
  bool bVar18;
  undefined local_148 [8];
  __ino_t local_140;
  undefined local_b8 [8];
  __ino_t local_b0;
  
  lVar10 = DAT_0060d298;
  uVar3 = DAT_0060d2a4 + 1;
  if (param_1 != 0) {
    uVar3 = DAT_0060d2a4 + 2;
    DAT_0060d2a4 = DAT_0060d2a4 + 1;
  }
  lVar12 = (long)(int)uVar3;
  bVar13 = 0;
  uVar8 = DAT_0060d2a0 - 2;
  bVar17 = uVar8 < uVar3;
  bVar18 = uVar8 == uVar3;
  if ((int)uVar3 < (int)uVar8) {
    lVar9 = 3;
    pbVar14 = *(byte **)(DAT_0060d298 + 8 + lVar12 * 8);
    pbVar16 = (byte *)0x409006;
    do {
      if (lVar9 == 0) break;
      lVar9 = lVar9 + -1;
      bVar17 = *pbVar14 < *pbVar16;
      bVar18 = *pbVar14 == *pbVar16;
      pbVar14 = pbVar14 + 1;
      pbVar16 = pbVar16 + 1;
    } while (bVar18);
    if ((!bVar17 && !bVar18) == bVar17) {
      bVar13 = 1;
      DAT_0060d2a4 = uVar3;
    }
  }
  uVar3 = DAT_0060d2a4;
  pbVar14 = *(byte **)(DAT_0060d298 + lVar12 * 8);
  lVar9 = lVar12 * 8;
  bVar11 = *pbVar14;
  if (bVar11 != 0x2d) {
    bVar17 = bVar11 < 0x3d;
    bVar18 = bVar11 == 0x3d;
    if (bVar18) {
      bVar13 = pbVar14[1];
      if (bVar13 == 0) {
LAB_00402308:
        iVar2 = strcmp(*(char **)(DAT_0060d298 + -0x10 + ((long)(int)DAT_0060d2a4 + 2) * 8),
                       *(char **)(DAT_0060d298 + ((long)(int)DAT_0060d2a4 + 2) * 8));
        DAT_0060d2a4 = uVar3 + 3;
        return (uint)(iVar2 == 0);
      }
      bVar17 = bVar13 < 0x3d;
      bVar18 = bVar13 == 0x3d;
      if (bVar18) {
        bVar17 = false;
        bVar18 = pbVar14[2] == 0;
        if (bVar18) goto LAB_00402308;
      }
    }
    lVar10 = 3;
    pbVar16 = &DAT_00408f84;
    do {
      if (lVar10 == 0) break;
      lVar10 = lVar10 + -1;
      bVar17 = *pbVar14 < *pbVar16;
      bVar18 = *pbVar14 == *pbVar16;
      pbVar14 = pbVar14 + 1;
      pbVar16 = pbVar16 + 1;
    } while (bVar18);
    if ((!bVar17 && !bVar18) == bVar17) {
      iVar2 = strcmp(*(char **)(DAT_0060d298 + -0x10 + ((long)(int)DAT_0060d2a4 + 2) * 8),
                     *(char **)(DAT_0060d298 + ((long)(int)DAT_0060d2a4 + 2) * 8));
      DAT_0060d2a4 = uVar3 + 3;
      return (uint)(iVar2 != 0);
    }
                    /* WARNING: Subroutine does not return */
    abort();
  }
  bVar11 = pbVar14[1];
  if (((bVar11 == 0x6c) || (bVar11 == 0x67)) &&
     ((bVar7 = pbVar14[2], bVar7 == 0x65 || (bVar7 == 0x74)))) {
    if (pbVar14[3] == 0) goto LAB_0040259b;
    if (bVar11 == 0x6e) {
LAB_004024bd:
      if ((bVar7 != 0x74) || (pbVar14[3] != 0)) goto LAB_00402559;
      DAT_0060d2a4 = DAT_0060d2a4 + 3;
      if ((bVar13 | param_1) == 0) {
        uVar3 = FUN_00401ad0(*(undefined8 *)(DAT_0060d298 + -8 + lVar9),local_148);
        uVar8 = FUN_00401ad0(*(undefined8 *)(lVar10 + 8 + lVar9),local_b8);
        if ((char)uVar3 == '\0') {
          return uVar3;
        }
        if ((char)uVar8 == '\0') {
          return uVar3;
        }
        if ((long)local_148 < (long)local_b8) {
          return 0;
        }
        if ((long)local_b8 < (long)local_148) {
          return uVar8;
        }
        return uVar8 & 0xffffff00 | (uint)(0 < (int)local_140 - (int)local_b0);
      }
      pcVar15 = "-nt does not accept -l";
      goto LAB_00402689;
    }
LAB_00402360:
    if (bVar11 == 0x6f) {
      if ((pbVar14[2] != 0x74) || (pbVar14[3] != 0)) goto LAB_00402559;
      DAT_0060d2a4 = DAT_0060d2a4 + 3;
      if ((bVar13 | param_1) == 0) {
        uVar3 = FUN_00401ad0(*(undefined8 *)(DAT_0060d298 + -8 + lVar9),local_148);
        uVar8 = FUN_00401ad0(*(undefined8 *)(lVar10 + 8 + lVar9),local_b8);
        if ((char)uVar8 == '\0') {
          return uVar8;
        }
        if ((char)uVar3 == '\0') {
          return uVar8;
        }
        if ((long)local_148 < (long)local_b8) {
          return uVar3;
        }
        if ((long)local_148 <= (long)local_b8) {
          return (uint)((int)local_140 - (int)local_b0) >> 0x1f;
        }
        return (uint)(bVar13 | param_1);
      }
      pcVar15 = "-ot does not accept -l";
      goto LAB_00402689;
    }
    if (bVar11 != 0x65) goto LAB_00402559;
    bVar11 = pbVar14[2];
  }
  else {
    if (bVar11 != 0x65) {
      if (bVar11 == 0x6e) {
        bVar7 = pbVar14[2];
        if (bVar7 != 0x65) goto LAB_004024bd;
LAB_00402595:
        if (pbVar14[3] == 0) {
LAB_0040259b:
          if (param_1 == 0) {
            uVar6 = FUN_00401bb0();
          }
          else {
            sVar5 = strlen(*(char **)(DAT_0060d298 + -8 + lVar9));
            uVar6 = FUN_00403290(sVar5,local_148);
          }
          if (bVar13 == 0) {
            uVar4 = FUN_00401bb0(*(undefined8 *)(DAT_0060d298 + 8 + lVar9));
          }
          else {
            sVar5 = strlen(*(char **)(DAT_0060d298 + 0x10 + lVar9));
            uVar4 = FUN_00403290(sVar5,local_b8);
          }
          iVar2 = FUN_00404f20(uVar6,uVar4);
          lVar10 = *(long *)(DAT_0060d298 + lVar12 * 8);
          bVar17 = *(char *)(lVar10 + 2) == 'e';
          cVar1 = *(char *)(lVar10 + 1);
          DAT_0060d2a4 = DAT_0060d2a4 + 3;
          if (cVar1 != 'l') {
            if (cVar1 != 'g') {
              return (uint)((iVar2 != 0) == bVar17);
            }
            return (uint)((int)-(uint)bVar17 < iVar2);
          }
          return (uint)(iVar2 < (int)(uint)bVar17);
        }
        goto LAB_00402559;
      }
      goto LAB_00402360;
    }
    bVar11 = pbVar14[2];
    if (bVar11 == 0x71) goto LAB_00402595;
  }
  if ((bVar11 != 0x66) || (pbVar14[3] != 0)) {
LAB_00402559:
    uVar6 = FUN_00404f00(pbVar14);
    uVar4 = dcgettext(0,"%s: unknown binary operator",5);
                    /* WARNING: Subroutine does not return */
    FUN_00401b10(uVar4,uVar6);
  }
  DAT_0060d2a4 = DAT_0060d2a4 + 3;
  uVar8 = (uint)(bVar13 | param_1);
  if ((bVar13 | param_1) == 0) {
    iVar2 = __xstat(1,*(char **)(DAT_0060d298 + -8 + lVar9),(stat *)local_148);
    if (iVar2 != 0) {
      return uVar8;
    }
    iVar2 = __xstat(1,*(char **)(lVar10 + 8 + lVar9),(stat *)local_b8);
    if (iVar2 != 0) {
      return uVar8;
    }
    if (local_148 != local_b8) {
      return uVar8;
    }
    return (uint)(local_140 == local_b0);
  }
  pcVar15 = "-ef does not accept -l";
LAB_00402689:
  DAT_0060d2a4 = uVar3 + 3;
  uVar6 = dcgettext(0,pcVar15,5);
                    /* WARNING: Subroutine does not return */
  FUN_00401b10(uVar6,0);
}


ulong FUN_004026c0(long param_1)

{
  ulong uVar1;
  byte bVar2;
  
  uVar1 = 0;
  bVar2 = *(char *)(param_1 + 1) + 0xb9;
  if (bVar2 < 0x34) {
    uVar1 = 1L << (bVar2 & 0x3f);
    uVar1 = uVar1 & 0xffffffffffffff00 | (ulong)((uVar1 & 0xb7b93fc0011a1) != 0);
  }
  return uVar1;
}


ulong FUN_004026f0(void)

{
  byte *pbVar1;
  char cVar2;
  int iVar3;
  __uid_t _Var4;
  __gid_t _Var5;
  char *pcVar6;
  int *piVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  ulong extraout_RDX;
  ulong extraout_RDX_00;
  ulong extraout_RDX_01;
  ulong extraout_RDX_02;
  ulong uVar12;
  ulong extraout_RDX_03;
  ulong extraout_RDX_04;
  ulong extraout_RDX_05;
  ulong extraout_RDX_06;
  ulong extraout_RDX_07;
  byte *pbVar13;
  byte *pbVar14;
  undefined in_CF;
  undefined in_ZF;
  stat sStack_a8;
  code *pcStack_10;
  
  lVar11 = 2;
  pbVar1 = *(byte **)(DAT_0060d298 + (long)DAT_0060d2a4 * 8);
  pbVar13 = pbVar1;
  pbVar14 = &DAT_0040903c;
  do {
    if (lVar11 == 0) break;
    lVar11 = lVar11 + -1;
    in_CF = *pbVar13 < *pbVar14;
    in_ZF = *pbVar13 == *pbVar14;
    pbVar13 = pbVar13 + 1;
    pbVar14 = pbVar14 + 1;
  } while ((bool)in_ZF);
  if ((!(bool)in_CF && !(bool)in_ZF) == (bool)in_CF) {
    pcVar6 = *(char **)(DAT_0060d298 + 8 + (long)DAT_0060d2a4 * 8);
    DAT_0060d2a4 = DAT_0060d2a4 + 2;
    return (ulong)pcVar6 & 0xffffffffffffff00 | (ulong)(*pcVar6 == '\0');
  }
  if (((*pbVar1 != 0x2d) || (pbVar1[1] == 0)) || (pbVar1[2] != 0)) {
                    /* WARNING: Subroutine does not return */
    pcStack_10 = (code *)0x40276a;
    FUN_00401c90();
  }
  pcStack_10 = (code *)0x402742;
  cVar2 = FUN_004026c0(pbVar1);
  lVar11 = DAT_0060d298;
  if (cVar2 == '\0') {
    pcStack_10 = (code *)0x40276f;
    uVar9 = FUN_00404f00();
    pcStack_10 = (code *)0x402783;
    uVar10 = dcgettext(0,"%s: unary operator expected",5);
                    /* WARNING: Subroutine does not return */
    pcStack_10 = FUN_00402790;
    FUN_00401b10(uVar10,uVar9);
  }
  switch(*(undefined *)(*(long *)(DAT_0060d298 + (long)DAT_0060d2a4 * 8) + 1)) {
  case 0x47:
    FUN_00401cd0();
    iVar3 = __xstat(1,*(char **)(lVar11 + -8 + (long)DAT_0060d2a4 * 8),&sStack_a8);
    if (iVar3 == 0) {
      piVar7 = __errno_location();
      *piVar7 = 0;
      _Var5 = getegid();
      uVar8 = extraout_RDX_07;
      if (_Var5 == 0xffffffff) {
        uVar8 = 0;
        uVar12 = 0;
        if (*piVar7 != 0) break;
      }
      uVar12 = uVar8 & 0xffffffffffffff00 | (ulong)(sStack_a8.st_gid == _Var5);
      break;
    }
  default:
switchD_00401d29_caseD_48:
    uVar12 = 0;
    break;
  case 0x4c:
  case 0x68:
    FUN_00401cd0();
    iVar3 = __lxstat(1,*(char **)(lVar11 + -8 + (long)DAT_0060d2a4 * 8),&sStack_a8);
    uVar12 = 0;
    if (iVar3 == 0) {
      uVar12 = (ulong)((sStack_a8.st_mode & 0xf000) == 0xa000);
    }
    break;
  case 0x4f:
    FUN_00401cd0();
    iVar3 = __xstat(1,*(char **)(lVar11 + -8 + (long)DAT_0060d2a4 * 8),&sStack_a8);
    if (iVar3 == 0) {
      piVar7 = __errno_location();
      *piVar7 = 0;
      _Var4 = geteuid();
      uVar8 = extraout_RDX_06;
      if (_Var4 == 0xffffffff) {
        uVar8 = 0;
        uVar12 = 0;
        if (*piVar7 != 0) break;
      }
      uVar12 = uVar8 & 0xffffffffffffff00 | (ulong)(sStack_a8.st_uid == _Var4);
      break;
    }
    goto switchD_00401d29_caseD_48;
  case 0x53:
    FUN_00401cd0();
    iVar3 = __xstat(1,*(char **)(lVar11 + -8 + (long)DAT_0060d2a4 * 8),&sStack_a8);
    uVar12 = 0;
    if (iVar3 == 0) {
      uVar12 = (ulong)((sStack_a8.st_mode & 0xf000) == 0xc000);
    }
    break;
  case 0x61:
  case 0x65:
    FUN_00401cd0();
    iVar3 = __xstat(1,*(char **)(lVar11 + -8 + (long)DAT_0060d2a4 * 8),&sStack_a8);
    uVar12 = extraout_RDX_05 & 0xffffffffffffff00 | (ulong)(iVar3 == 0);
    break;
  case 0x62:
    FUN_00401cd0();
    iVar3 = __xstat(1,*(char **)(lVar11 + -8 + (long)DAT_0060d2a4 * 8),&sStack_a8);
    uVar12 = 0;
    if (iVar3 == 0) {
      uVar12 = (ulong)((sStack_a8.st_mode & 0xf000) == 0x6000);
    }
    break;
  case 99:
    FUN_00401cd0();
    iVar3 = __xstat(1,*(char **)(lVar11 + -8 + (long)DAT_0060d2a4 * 8),&sStack_a8);
    uVar12 = 0;
    if (iVar3 == 0) {
      uVar12 = (ulong)((sStack_a8.st_mode & 0xf000) == 0x2000);
    }
    break;
  case 100:
    FUN_00401cd0();
    iVar3 = __xstat(1,*(char **)(lVar11 + -8 + (long)DAT_0060d2a4 * 8),&sStack_a8);
    uVar12 = 0;
    if (iVar3 == 0) {
      uVar12 = (ulong)((sStack_a8.st_mode & 0xf000) == 0x4000);
    }
    break;
  case 0x66:
    FUN_00401cd0();
    iVar3 = __xstat(1,*(char **)(lVar11 + -8 + (long)DAT_0060d2a4 * 8),&sStack_a8);
    uVar12 = 0;
    if (iVar3 == 0) {
      uVar12 = (ulong)((sStack_a8.st_mode & 0xf000) == 0x8000);
    }
    break;
  case 0x67:
    FUN_00401cd0();
    iVar3 = __xstat(1,*(char **)(lVar11 + -8 + (long)DAT_0060d2a4 * 8),&sStack_a8);
    uVar12 = 0;
    if (iVar3 == 0) {
      uVar12 = (ulong)(sStack_a8.st_mode >> 10 & 1);
    }
    break;
  case 0x6b:
    FUN_00401cd0();
    iVar3 = __xstat(1,*(char **)(lVar11 + -8 + (long)DAT_0060d2a4 * 8),&sStack_a8);
    uVar12 = 0;
    if (iVar3 == 0) {
      uVar12 = (ulong)(sStack_a8.st_mode >> 9 & 1);
    }
    break;
  case 0x6e:
    FUN_00401cd0();
    uVar12 = extraout_RDX_04 & 0xffffffffffffff00 |
             (ulong)(**(char **)(lVar11 + -8 + (long)DAT_0060d2a4 * 8) != '\0');
    break;
  case 0x70:
    FUN_00401cd0();
    iVar3 = __xstat(1,*(char **)(lVar11 + -8 + (long)DAT_0060d2a4 * 8),&sStack_a8);
    uVar12 = 0;
    if (iVar3 == 0) {
      uVar12 = (ulong)((sStack_a8.st_mode & 0xf000) == 0x1000);
    }
    break;
  case 0x72:
    FUN_00401cd0();
    iVar3 = euidaccess(*(char **)(lVar11 + -8 + (long)DAT_0060d2a4 * 8),4);
    uVar12 = extraout_RDX_03 & 0xffffffffffffff00 | (ulong)(iVar3 == 0);
    break;
  case 0x73:
    FUN_00401cd0();
    iVar3 = __xstat(1,*(char **)(lVar11 + -8 + (long)DAT_0060d2a4 * 8),&sStack_a8);
    uVar12 = 0;
    if (iVar3 == 0) {
      uVar12 = (ulong)(0 < sStack_a8.st_size);
    }
    break;
  case 0x74:
    FUN_00401cd0();
    pcVar6 = (char *)FUN_00401bb0(*(undefined8 *)(lVar11 + -8 + (long)DAT_0060d2a4 * 8));
    piVar7 = __errno_location();
    *piVar7 = 0;
    uVar8 = strtol(pcVar6,(char **)0x0,10);
    uVar12 = 0;
    if ((*piVar7 != 0x22) && (uVar12 = 0, uVar8 < 0x80000000)) {
      iVar3 = isatty((int)uVar8);
      uVar12 = extraout_RDX_02 & 0xffffffffffffff00 | (ulong)(iVar3 != 0);
    }
    break;
  case 0x75:
    FUN_00401cd0();
    iVar3 = __xstat(1,*(char **)(lVar11 + -8 + (long)DAT_0060d2a4 * 8),&sStack_a8);
    uVar12 = 0;
    if (iVar3 == 0) {
      uVar12 = (ulong)(sStack_a8.st_mode >> 0xb & 1);
    }
    break;
  case 0x77:
    FUN_00401cd0();
    iVar3 = euidaccess(*(char **)(lVar11 + -8 + (long)DAT_0060d2a4 * 8),2);
    uVar12 = extraout_RDX_01 & 0xffffffffffffff00 | (ulong)(iVar3 == 0);
    break;
  case 0x78:
    FUN_00401cd0();
    iVar3 = euidaccess(*(char **)(lVar11 + -8 + (long)DAT_0060d2a4 * 8),1);
    uVar12 = extraout_RDX_00 & 0xffffffffffffff00 | (ulong)(iVar3 == 0);
    break;
  case 0x7a:
    FUN_00401cd0();
    uVar12 = extraout_RDX & 0xffffffffffffff00 |
             (ulong)(**(char **)(lVar11 + -8 + (long)DAT_0060d2a4 * 8) == '\0');
  }
  return uVar12 & 0xffffffff;
}


ulong FUN_00402790(uint param_1)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  byte *pbVar14;
  byte *pbVar15;
  char *pcVar16;
  byte *pbVar17;
  byte **ppbVar18;
  byte bVar19;
  byte bVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  byte bVar24;
  byte bStack_3a;
  byte bStack_39;
  
  bVar24 = 0;
  if (param_1 == 2) {
    uVar5 = FUN_004026f0();
    return uVar5;
  }
  if ((int)param_1 < 3) {
    if (param_1 == 1) {
      lVar9 = (long)(int)DAT_0060d2a4;
      DAT_0060d2a4 = DAT_0060d2a4 + 1;
      pcVar16 = *(char **)(DAT_0060d298 + lVar9 * 8);
      return (ulong)pcVar16 & 0xffffffffffffff00 | (ulong)(*pcVar16 != '\0');
    }
  }
  else {
    if (param_1 == 3) {
      uVar5 = FUN_00402cd0();
      return uVar5;
    }
    bVar21 = param_1 < 4;
    bVar23 = param_1 == 4;
    if (bVar23) {
      lVar9 = 2;
      pbVar14 = *(byte **)(DAT_0060d298 + (long)(int)DAT_0060d2a4 * 8);
      pbVar15 = pbVar14;
      pbVar17 = &DAT_0040903c;
      do {
        if (lVar9 == 0) break;
        lVar9 = lVar9 + -1;
        bVar21 = *pbVar15 < *pbVar17;
        bVar23 = *pbVar15 == *pbVar17;
        pbVar15 = pbVar15 + 1;
        pbVar17 = pbVar17 + 1;
      } while (bVar23);
      bVar22 = false;
      bVar21 = (!bVar21 && !bVar23) == bVar21;
      if (bVar21) {
        DAT_0060d2a4 = DAT_0060d2a4 + 1;
        if ((int)DAT_0060d2a4 < (int)DAT_0060d2a0) {
          uVar4 = FUN_00402cd0();
          return (ulong)(uVar4 ^ 1);
        }
        goto LAB_004028c6;
      }
      lVar9 = 2;
      pbVar15 = &DAT_0040905a;
      do {
        if (lVar9 == 0) break;
        lVar9 = lVar9 + -1;
        bVar22 = *pbVar14 < *pbVar15;
        bVar21 = *pbVar14 == *pbVar15;
        pbVar14 = pbVar14 + 1;
        pbVar15 = pbVar15 + 1;
      } while (bVar21);
      bVar23 = false;
      bVar21 = (!bVar22 && !bVar21) == bVar22;
      if (bVar21) {
        lVar9 = 2;
        pbVar14 = *(byte **)(DAT_0060d298 + 0x18 + (long)(int)DAT_0060d2a4 * 8);
        pbVar15 = &DAT_0040ae8d;
        do {
          if (lVar9 == 0) break;
          lVar9 = lVar9 + -1;
          bVar23 = *pbVar14 < *pbVar15;
          bVar21 = *pbVar14 == *pbVar15;
          pbVar14 = pbVar14 + 1;
          pbVar15 = pbVar15 + 1;
        } while (bVar21);
        if ((!bVar23 && !bVar21) == bVar23) {
          DAT_0060d2a4 = DAT_0060d2a4 + 1;
          uVar5 = FUN_004026f0();
          DAT_0060d2a4 = DAT_0060d2a4 + 1;
          return uVar5;
        }
      }
    }
  }
  if ((int)DAT_0060d2a4 < (int)DAT_0060d2a0) {
    bStack_39 = 0;
    uVar4 = DAT_0060d2a0;
LAB_004028f0:
    bStack_3a = 1;
    if ((int)uVar4 <= (int)DAT_0060d2a4) {
LAB_00402aa4:
                    /* WARNING: Subroutine does not return */
      FUN_00401c90();
    }
    do {
      lVar9 = DAT_0060d298;
      lVar13 = (long)(int)DAT_0060d2a4;
      pbVar14 = *(byte **)(DAT_0060d298 + lVar13 * 8);
      bVar2 = *pbVar14;
      uVar12 = DAT_0060d2a4;
      if (bVar2 == 0x21) {
        if (pbVar14[1] == 0) {
          uVar11 = DAT_0060d2a4 + 1;
          DAT_0060d2a4 = uVar11;
          if ((int)uVar11 < (int)uVar4) {
            lVar13 = (long)(int)uVar11;
            bVar21 = false;
            bVar19 = 1;
            while( true ) {
              pbVar14 = *(byte **)(DAT_0060d298 + lVar13 * 8);
              uVar12 = (uint)lVar13;
              bVar20 = *pbVar14;
              if (bVar20 != 0x21) break;
              if (pbVar14[1] != 0) {
                DAT_0060d2a4 = uVar11;
                if (bVar21) {
                  DAT_0060d2a4 = uVar12;
                }
                goto LAB_00402aba;
              }
              lVar13 = lVar13 + 1;
              DAT_0060d2a4 = uVar12 + 1;
              if ((int)uVar4 <= (int)lVar13) {
                    /* WARNING: Subroutine does not return */
                FUN_00401c90();
              }
              bVar19 = bVar19 ^ 1;
              bVar21 = true;
            }
            DAT_0060d2a4 = uVar11;
            if (bVar21) {
              DAT_0060d2a4 = uVar12;
            }
            goto LAB_00402993;
          }
          goto LAB_00402aa4;
        }
        bVar19 = 0;
LAB_00402aba:
        uVar11 = uVar4 - uVar12;
        bVar21 = uVar11 < 3;
        bVar23 = uVar11 == 3;
        if (3 < (int)uVar11) {
          lVar10 = 3;
          pbVar15 = pbVar14;
          pbVar17 = (byte *)0x409006;
          do {
            if (lVar10 == 0) break;
            lVar10 = lVar10 + -1;
            bVar21 = *pbVar15 < *pbVar17;
            bVar23 = *pbVar15 == *pbVar17;
            pbVar15 = pbVar15 + (ulong)bVar24 * -2 + 1;
            pbVar17 = pbVar17 + (ulong)bVar24 * -2 + 1;
          } while (bVar23);
          if (((!bVar21 && !bVar23) != bVar21) ||
             (cVar3 = FUN_00401980(*(undefined8 *)(DAT_0060d298 + 0x10 + lVar13 * 8)), cVar3 == '\0'
             )) goto LAB_00402afa;
          bVar2 = FUN_00402210(1);
          goto LAB_00402a58;
        }
        if (bVar23) {
LAB_00402afa:
          cVar3 = FUN_00401980(*(undefined8 *)(lVar9 + 8 + lVar13 * 8));
          if (cVar3 != '\0') {
            bVar2 = FUN_00402210(0);
            goto LAB_00402a58;
          }
        }
        if (((bVar2 == 0x2d) && (pbVar14[1] != 0)) && (pbVar14[2] == 0)) {
          cVar3 = FUN_004026c0(pbVar14);
          if (cVar3 == '\0') {
            uVar6 = FUN_00404f00();
            pcVar16 = "%s: unary operator expected";
LAB_00402c9f:
            uVar7 = dcgettext(0,pcVar16,5);
                    /* WARNING: Subroutine does not return */
            FUN_00401b10(uVar7,uVar6);
          }
          bVar2 = FUN_00401d00();
          goto LAB_00402a58;
        }
        DAT_0060d2a4 = uVar12 + 1;
        bStack_3a = bStack_3a & (bVar2 != 0 ^ bVar19);
        bVar21 = uVar4 < DAT_0060d2a4;
        bVar23 = uVar4 == DAT_0060d2a4;
        if ((int)uVar4 <= (int)DAT_0060d2a4) goto LAB_00402b31;
      }
      else {
        bVar19 = 0;
        bVar20 = bVar2;
LAB_00402993:
        bVar2 = bVar20;
        if ((bVar20 != 0x28) || (pbVar14[1] != 0)) goto LAB_00402aba;
        DAT_0060d2a4 = uVar12 + 1;
        if ((int)uVar4 <= (int)DAT_0060d2a4) goto LAB_00402aa4;
        if ((int)(uVar12 + 2) < (int)uVar4) {
          uVar1 = uVar4 - 1;
          ppbVar18 = (byte **)(DAT_0060d298 + (long)(int)(uVar12 + 2) * 8);
          bVar21 = uVar1 < uVar12;
          bVar23 = uVar1 == uVar12;
          uVar11 = 1;
          do {
            lVar9 = 2;
            pbVar14 = *ppbVar18;
            pbVar15 = &DAT_0040ae8d;
            do {
              if (lVar9 == 0) break;
              lVar9 = lVar9 + -1;
              bVar21 = *pbVar14 < *pbVar15;
              bVar23 = *pbVar14 == *pbVar15;
              pbVar14 = pbVar14 + (ulong)bVar24 * -2 + 1;
              pbVar15 = pbVar15 + (ulong)bVar24 * -2 + 1;
            } while (bVar23);
            if ((!bVar21 && !bVar23) == bVar21) break;
            if (uVar11 == 4) {
              uVar11 = uVar4 - DAT_0060d2a4;
              break;
            }
            uVar11 = uVar11 + 1;
            ppbVar18 = ppbVar18 + 1;
            bVar21 = uVar11 < uVar1 - uVar12;
            bVar23 = uVar11 == uVar1 - uVar12;
          } while (!bVar23);
        }
        else {
          uVar11 = 1;
        }
        bVar2 = FUN_00402790(uVar11);
        pcVar16 = *(char **)(DAT_0060d298 + (long)(int)DAT_0060d2a4 * 8);
        if (pcVar16 == (char *)0x0) {
          uVar6 = FUN_00404f00(&DAT_0040ae8d);
          pcVar16 = "%s expected";
          goto LAB_00402c9f;
        }
        if ((*pcVar16 != ')') || (pcVar16[1] != '\0')) {
          uVar6 = FUN_00404ee0(1);
          uVar7 = FUN_00404ee0(0,&DAT_0040ae8d);
          uVar8 = dcgettext(0,"%s expected, found %s",5);
                    /* WARNING: Subroutine does not return */
          FUN_00401b10(uVar8,uVar7,uVar6);
        }
        DAT_0060d2a4 = DAT_0060d2a4 + 1;
LAB_00402a58:
        bStack_3a = bStack_3a & (bVar2 ^ bVar19);
        bVar21 = DAT_0060d2a0 < DAT_0060d2a4;
        bVar23 = DAT_0060d2a0 == DAT_0060d2a4;
        uVar4 = DAT_0060d2a0;
        if ((int)DAT_0060d2a0 <= (int)DAT_0060d2a4) {
LAB_00402b31:
          bStack_39 = bStack_39 | bStack_3a;
          goto LAB_00402b3a;
        }
      }
      pbVar14 = *(byte **)(DAT_0060d298 + (long)(int)DAT_0060d2a4 * 8);
      lVar9 = 3;
      pbVar15 = pbVar14;
      pbVar17 = &DAT_0040907e;
      do {
        if (lVar9 == 0) break;
        lVar9 = lVar9 + -1;
        bVar21 = *pbVar15 < *pbVar17;
        bVar23 = *pbVar15 == *pbVar17;
        pbVar15 = pbVar15 + (ulong)bVar24 * -2 + 1;
        pbVar17 = pbVar17 + (ulong)bVar24 * -2 + 1;
      } while (bVar23);
      if ((!bVar21 && !bVar23) != bVar21) goto LAB_00402bc0;
      DAT_0060d2a4 = DAT_0060d2a4 + 1;
      if ((int)uVar4 <= (int)DAT_0060d2a4) goto LAB_00402aa4;
    } while( true );
  }
LAB_004028c6:
                    /* WARNING: Subroutine does not return */
  FUN_00401c90();
LAB_00402bc0:
  lVar9 = 3;
  bVar21 = false;
  bStack_39 = bStack_39 | bStack_3a;
  bVar23 = bStack_39 == 0;
  pbVar15 = &DAT_00409081;
  do {
    if (lVar9 == 0) break;
    lVar9 = lVar9 + -1;
    bVar21 = *pbVar14 < *pbVar15;
    bVar23 = *pbVar14 == *pbVar15;
    pbVar14 = pbVar14 + (ulong)bVar24 * -2 + 1;
    pbVar15 = pbVar15 + (ulong)bVar24 * -2 + 1;
  } while (bVar23);
  if ((!bVar21 && !bVar23) != bVar21) {
LAB_00402b3a:
    return (ulong)bStack_39;
  }
  DAT_0060d2a4 = DAT_0060d2a4 + 1;
  goto LAB_004028f0;
}


byte FUN_004028d0(void)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  byte *pbVar12;
  byte *pbVar13;
  char *pcVar14;
  byte *pbVar15;
  byte **ppbVar16;
  byte bVar17;
  byte bVar18;
  uint uVar19;
  bool bVar20;
  bool bVar21;
  byte bVar22;
  byte local_3a;
  byte local_39;
  
  bVar22 = 0;
  local_39 = 0;
  uVar19 = DAT_0060d2a0;
LAB_004028f0:
  local_3a = 1;
  if ((int)uVar19 <= (int)DAT_0060d2a4) {
LAB_00402aa4:
                    /* WARNING: Subroutine does not return */
    FUN_00401c90();
  }
  do {
    lVar7 = DAT_0060d298;
    lVar11 = (long)(int)DAT_0060d2a4;
    pbVar12 = *(byte **)(DAT_0060d298 + lVar11 * 8);
    bVar2 = *pbVar12;
    uVar10 = DAT_0060d2a4;
    if (bVar2 == 0x21) {
      if (pbVar12[1] == 0) {
        uVar9 = DAT_0060d2a4 + 1;
        DAT_0060d2a4 = uVar9;
        if ((int)uVar9 < (int)uVar19) {
          lVar11 = (long)(int)uVar9;
          bVar20 = false;
          bVar17 = 1;
          while( true ) {
            pbVar12 = *(byte **)(DAT_0060d298 + lVar11 * 8);
            uVar10 = (uint)lVar11;
            bVar18 = *pbVar12;
            if (bVar18 != 0x21) break;
            if (pbVar12[1] != 0) {
              DAT_0060d2a4 = uVar9;
              if (bVar20) {
                DAT_0060d2a4 = uVar10;
              }
              goto LAB_00402aba;
            }
            lVar11 = lVar11 + 1;
            DAT_0060d2a4 = uVar10 + 1;
            if ((int)uVar19 <= (int)lVar11) {
                    /* WARNING: Subroutine does not return */
              FUN_00401c90();
            }
            bVar17 = bVar17 ^ 1;
            bVar20 = true;
          }
          DAT_0060d2a4 = uVar9;
          if (bVar20) {
            DAT_0060d2a4 = uVar10;
          }
          goto LAB_00402993;
        }
        goto LAB_00402aa4;
      }
      bVar17 = 0;
LAB_00402aba:
      uVar9 = uVar19 - uVar10;
      bVar20 = uVar9 < 3;
      bVar21 = uVar9 == 3;
      if (3 < (int)uVar9) {
        lVar8 = 3;
        pbVar13 = pbVar12;
        pbVar15 = (byte *)0x409006;
        do {
          if (lVar8 == 0) break;
          lVar8 = lVar8 + -1;
          bVar20 = *pbVar13 < *pbVar15;
          bVar21 = *pbVar13 == *pbVar15;
          pbVar13 = pbVar13 + (ulong)bVar22 * -2 + 1;
          pbVar15 = pbVar15 + (ulong)bVar22 * -2 + 1;
        } while (bVar21);
        if (((!bVar20 && !bVar21) != bVar20) ||
           (cVar3 = FUN_00401980(*(undefined8 *)(DAT_0060d298 + 0x10 + lVar11 * 8)), cVar3 == '\0'))
        goto LAB_00402afa;
        bVar2 = FUN_00402210(1);
        goto LAB_00402a58;
      }
      if (bVar21) {
LAB_00402afa:
        cVar3 = FUN_00401980(*(undefined8 *)(lVar7 + 8 + lVar11 * 8));
        if (cVar3 != '\0') {
          bVar2 = FUN_00402210(0);
          goto LAB_00402a58;
        }
      }
      if (((bVar2 == 0x2d) && (pbVar12[1] != 0)) && (pbVar12[2] == 0)) {
        cVar3 = FUN_004026c0(pbVar12);
        if (cVar3 == '\0') {
          uVar4 = FUN_00404f00();
          pcVar14 = "%s: unary operator expected";
LAB_00402c9f:
          uVar5 = dcgettext(0,pcVar14,5);
                    /* WARNING: Subroutine does not return */
          FUN_00401b10(uVar5,uVar4);
        }
        bVar2 = FUN_00401d00();
        goto LAB_00402a58;
      }
      DAT_0060d2a4 = uVar10 + 1;
      local_3a = local_3a & (bVar2 != 0 ^ bVar17);
      bVar20 = uVar19 < DAT_0060d2a4;
      bVar21 = uVar19 == DAT_0060d2a4;
      if ((int)uVar19 <= (int)DAT_0060d2a4) goto LAB_00402b31;
    }
    else {
      bVar17 = 0;
      bVar18 = bVar2;
LAB_00402993:
      bVar2 = bVar18;
      if ((bVar18 != 0x28) || (pbVar12[1] != 0)) goto LAB_00402aba;
      DAT_0060d2a4 = uVar10 + 1;
      if ((int)uVar19 <= (int)DAT_0060d2a4) goto LAB_00402aa4;
      if ((int)(uVar10 + 2) < (int)uVar19) {
        uVar1 = uVar19 - 1;
        ppbVar16 = (byte **)(DAT_0060d298 + (long)(int)(uVar10 + 2) * 8);
        bVar20 = uVar1 < uVar10;
        bVar21 = uVar1 == uVar10;
        uVar9 = 1;
        do {
          lVar7 = 2;
          pbVar12 = *ppbVar16;
          pbVar13 = &DAT_0040ae8d;
          do {
            if (lVar7 == 0) break;
            lVar7 = lVar7 + -1;
            bVar20 = *pbVar12 < *pbVar13;
            bVar21 = *pbVar12 == *pbVar13;
            pbVar12 = pbVar12 + (ulong)bVar22 * -2 + 1;
            pbVar13 = pbVar13 + (ulong)bVar22 * -2 + 1;
          } while (bVar21);
          if ((!bVar20 && !bVar21) == bVar20) break;
          if (uVar9 == 4) {
            uVar9 = uVar19 - DAT_0060d2a4;
            break;
          }
          uVar9 = uVar9 + 1;
          ppbVar16 = ppbVar16 + 1;
          bVar20 = uVar9 < uVar1 - uVar10;
          bVar21 = uVar9 == uVar1 - uVar10;
        } while (!bVar21);
      }
      else {
        uVar9 = 1;
      }
      bVar2 = FUN_00402790(uVar9);
      pcVar14 = *(char **)(DAT_0060d298 + (long)(int)DAT_0060d2a4 * 8);
      if (pcVar14 == (char *)0x0) {
        uVar4 = FUN_00404f00(&DAT_0040ae8d);
        pcVar14 = "%s expected";
        goto LAB_00402c9f;
      }
      if ((*pcVar14 != ')') || (pcVar14[1] != '\0')) {
        uVar4 = FUN_00404ee0(1);
        uVar5 = FUN_00404ee0(0,&DAT_0040ae8d);
        uVar6 = dcgettext(0,"%s expected, found %s",5);
                    /* WARNING: Subroutine does not return */
        FUN_00401b10(uVar6,uVar5,uVar4);
      }
      DAT_0060d2a4 = DAT_0060d2a4 + 1;
LAB_00402a58:
      local_3a = local_3a & (bVar2 ^ bVar17);
      bVar20 = DAT_0060d2a0 < DAT_0060d2a4;
      bVar21 = DAT_0060d2a0 == DAT_0060d2a4;
      uVar19 = DAT_0060d2a0;
      if ((int)DAT_0060d2a0 <= (int)DAT_0060d2a4) {
LAB_00402b31:
        return local_39 | local_3a;
      }
    }
    pbVar12 = *(byte **)(DAT_0060d298 + (long)(int)DAT_0060d2a4 * 8);
    lVar7 = 3;
    pbVar13 = pbVar12;
    pbVar15 = &DAT_0040907e;
    do {
      if (lVar7 == 0) break;
      lVar7 = lVar7 + -1;
      bVar20 = *pbVar13 < *pbVar15;
      bVar21 = *pbVar13 == *pbVar15;
      pbVar13 = pbVar13 + (ulong)bVar22 * -2 + 1;
      pbVar15 = pbVar15 + (ulong)bVar22 * -2 + 1;
    } while (bVar21);
    if ((!bVar20 && !bVar21) != bVar20) break;
    DAT_0060d2a4 = DAT_0060d2a4 + 1;
    if ((int)uVar19 <= (int)DAT_0060d2a4) goto LAB_00402aa4;
  } while( true );
  lVar7 = 3;
  bVar20 = false;
  local_39 = local_39 | local_3a;
  bVar21 = local_39 == 0;
  pbVar13 = &DAT_00409081;
  do {
    if (lVar7 == 0) break;
    lVar7 = lVar7 + -1;
    bVar20 = *pbVar12 < *pbVar13;
    bVar21 = *pbVar12 == *pbVar13;
    pbVar12 = pbVar12 + (ulong)bVar22 * -2 + 1;
    pbVar13 = pbVar13 + (ulong)bVar22 * -2 + 1;
  } while (bVar21);
  if ((!bVar20 && !bVar21) != bVar20) {
    return local_39;
  }
  DAT_0060d2a4 = DAT_0060d2a4 + 1;
  goto LAB_004028f0;
}


ulong FUN_00402cd0(void)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  byte *pbVar14;
  byte *pbVar15;
  char *pcVar16;
  byte *pbVar17;
  byte *pbVar18;
  byte **ppbVar19;
  byte bVar20;
  byte bVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  byte bVar25;
  byte bStack_3a;
  byte bStack_39;
  
  uVar4 = DAT_0060d2a4;
  lVar13 = DAT_0060d298;
  bVar25 = 0;
  pbVar14 = *(byte **)(DAT_0060d298 + ((long)(int)DAT_0060d2a4 + 1) * 8);
  lVar10 = ((long)(int)DAT_0060d2a4 + 1) * 8;
  uVar8 = FUN_00401980(pbVar14);
  bVar22 = false;
  bVar24 = (char)uVar8 == '\0';
  if (!bVar24) {
    uVar8 = FUN_00402210(0);
    return uVar8;
  }
  pbVar15 = *(byte **)(lVar13 + -8 + lVar10);
  lVar9 = 2;
  pbVar17 = pbVar15;
  pbVar18 = &DAT_0040903c;
  do {
    if (lVar9 == 0) break;
    lVar9 = lVar9 + -1;
    bVar22 = *pbVar17 < *pbVar18;
    bVar24 = *pbVar17 == *pbVar18;
    pbVar17 = pbVar17 + (ulong)bVar25 * -2 + 1;
    pbVar18 = pbVar18 + (ulong)bVar25 * -2 + 1;
  } while (bVar24);
  bVar23 = false;
  bVar22 = (!bVar22 && !bVar24) == bVar22;
  if (bVar22) {
    DAT_0060d2a4 = uVar4 + 1;
    if ((int)DAT_0060d2a4 < (int)DAT_0060d2a0) {
      uVar4 = FUN_004026f0();
      return (ulong)(uVar4 ^ 1);
    }
  }
  else {
    lVar9 = 2;
    pbVar17 = &DAT_0040905a;
    do {
      if (lVar9 == 0) break;
      lVar9 = lVar9 + -1;
      bVar23 = *pbVar15 < *pbVar17;
      bVar22 = *pbVar15 == *pbVar17;
      pbVar15 = pbVar15 + (ulong)bVar25 * -2 + 1;
      pbVar17 = pbVar17 + (ulong)bVar25 * -2 + 1;
    } while (bVar22);
    bVar24 = false;
    bVar22 = (!bVar23 && !bVar22) == bVar23;
    if (bVar22) {
      lVar9 = 2;
      pbVar15 = *(byte **)(lVar13 + 8 + lVar10);
      pbVar17 = &DAT_0040ae8d;
      do {
        if (lVar9 == 0) break;
        lVar9 = lVar9 + -1;
        bVar24 = *pbVar15 < *pbVar17;
        bVar22 = *pbVar15 == *pbVar17;
        pbVar15 = pbVar15 + (ulong)bVar25 * -2 + 1;
        pbVar17 = pbVar17 + (ulong)bVar25 * -2 + 1;
      } while (bVar22);
      bVar22 = (!bVar24 && !bVar22) == bVar24;
      if (bVar22) {
        DAT_0060d2a4 = uVar4 + 3;
        return uVar8 & 0xffffffffffffff00 | (ulong)(*pbVar14 != 0);
      }
    }
    bVar24 = false;
    lVar10 = 3;
    pbVar15 = pbVar14;
    pbVar17 = &DAT_0040907e;
    do {
      if (lVar10 == 0) break;
      lVar10 = lVar10 + -1;
      bVar24 = *pbVar15 < *pbVar17;
      bVar22 = *pbVar15 == *pbVar17;
      pbVar15 = pbVar15 + (ulong)bVar25 * -2 + 1;
      pbVar17 = pbVar17 + (ulong)bVar25 * -2 + 1;
    } while (bVar22);
    bVar23 = false;
    bVar22 = (!bVar24 && !bVar22) == bVar24;
    if (!bVar22) {
      lVar10 = 3;
      pbVar15 = pbVar14;
      pbVar17 = &DAT_00409081;
      do {
        if (lVar10 == 0) break;
        lVar10 = lVar10 + -1;
        bVar23 = *pbVar15 < *pbVar17;
        bVar22 = *pbVar15 == *pbVar17;
        pbVar15 = pbVar15 + (ulong)bVar25 * -2 + 1;
        pbVar17 = pbVar17 + (ulong)bVar25 * -2 + 1;
      } while (bVar22);
      if ((!bVar23 && !bVar22) != bVar23) {
        uVar5 = FUN_00404f00(pbVar14);
        uVar6 = dcgettext(0,"%s: binary operator expected",5);
                    /* WARNING: Subroutine does not return */
        FUN_00401b10(uVar6,uVar5);
      }
    }
    if ((int)uVar4 < (int)DAT_0060d2a0) {
      bStack_39 = 0;
      uVar4 = DAT_0060d2a0;
LAB_004028f0:
      bStack_3a = 1;
      if ((int)uVar4 <= (int)DAT_0060d2a4) {
LAB_00402aa4:
                    /* WARNING: Subroutine does not return */
        FUN_00401c90();
      }
      do {
        lVar10 = DAT_0060d298;
        lVar13 = (long)(int)DAT_0060d2a4;
        pbVar14 = *(byte **)(DAT_0060d298 + lVar13 * 8);
        bVar2 = *pbVar14;
        uVar12 = DAT_0060d2a4;
        if (bVar2 == 0x21) {
          if (pbVar14[1] == 0) {
            uVar11 = DAT_0060d2a4 + 1;
            DAT_0060d2a4 = uVar11;
            if ((int)uVar11 < (int)uVar4) {
              lVar13 = (long)(int)uVar11;
              bVar22 = false;
              bVar20 = 1;
              while( true ) {
                pbVar14 = *(byte **)(DAT_0060d298 + lVar13 * 8);
                uVar12 = (uint)lVar13;
                bVar21 = *pbVar14;
                if (bVar21 != 0x21) break;
                if (pbVar14[1] != 0) {
                  DAT_0060d2a4 = uVar11;
                  if (bVar22) {
                    DAT_0060d2a4 = uVar12;
                  }
                  goto LAB_00402aba;
                }
                lVar13 = lVar13 + 1;
                DAT_0060d2a4 = uVar12 + 1;
                if ((int)uVar4 <= (int)lVar13) {
                    /* WARNING: Subroutine does not return */
                  FUN_00401c90();
                }
                bVar20 = bVar20 ^ 1;
                bVar22 = true;
              }
              DAT_0060d2a4 = uVar11;
              if (bVar22) {
                DAT_0060d2a4 = uVar12;
              }
              goto LAB_00402993;
            }
            goto LAB_00402aa4;
          }
          bVar20 = 0;
LAB_00402aba:
          uVar11 = uVar4 - uVar12;
          bVar22 = uVar11 < 3;
          bVar24 = uVar11 == 3;
          if (3 < (int)uVar11) {
            lVar9 = 3;
            pbVar15 = pbVar14;
            pbVar17 = (byte *)0x409006;
            do {
              if (lVar9 == 0) break;
              lVar9 = lVar9 + -1;
              bVar22 = *pbVar15 < *pbVar17;
              bVar24 = *pbVar15 == *pbVar17;
              pbVar15 = pbVar15 + (ulong)bVar25 * -2 + 1;
              pbVar17 = pbVar17 + (ulong)bVar25 * -2 + 1;
            } while (bVar24);
            if (((!bVar22 && !bVar24) != bVar22) ||
               (cVar3 = FUN_00401980(*(undefined8 *)(DAT_0060d298 + 0x10 + lVar13 * 8)),
               cVar3 == '\0')) goto LAB_00402afa;
            bVar2 = FUN_00402210(1);
            goto LAB_00402a58;
          }
          if (bVar24) {
LAB_00402afa:
            cVar3 = FUN_00401980(*(undefined8 *)(lVar10 + 8 + lVar13 * 8));
            if (cVar3 != '\0') {
              bVar2 = FUN_00402210(0);
              goto LAB_00402a58;
            }
          }
          if (((bVar2 == 0x2d) && (pbVar14[1] != 0)) && (pbVar14[2] == 0)) {
            cVar3 = FUN_004026c0(pbVar14);
            if (cVar3 == '\0') {
              uVar5 = FUN_00404f00();
              pcVar16 = "%s: unary operator expected";
LAB_00402c9f:
              uVar6 = dcgettext(0,pcVar16,5);
                    /* WARNING: Subroutine does not return */
              FUN_00401b10(uVar6,uVar5);
            }
            bVar2 = FUN_00401d00();
            goto LAB_00402a58;
          }
          DAT_0060d2a4 = uVar12 + 1;
          bStack_3a = bStack_3a & (bVar2 != 0 ^ bVar20);
          bVar22 = uVar4 < DAT_0060d2a4;
          bVar24 = uVar4 == DAT_0060d2a4;
          if ((int)uVar4 <= (int)DAT_0060d2a4) goto LAB_00402b31;
        }
        else {
          bVar20 = 0;
          bVar21 = bVar2;
LAB_00402993:
          bVar2 = bVar21;
          if ((bVar21 != 0x28) || (pbVar14[1] != 0)) goto LAB_00402aba;
          DAT_0060d2a4 = uVar12 + 1;
          if ((int)uVar4 <= (int)DAT_0060d2a4) goto LAB_00402aa4;
          if ((int)(uVar12 + 2) < (int)uVar4) {
            uVar1 = uVar4 - 1;
            ppbVar19 = (byte **)(DAT_0060d298 + (long)(int)(uVar12 + 2) * 8);
            bVar22 = uVar1 < uVar12;
            bVar24 = uVar1 == uVar12;
            uVar11 = 1;
            do {
              lVar10 = 2;
              pbVar14 = *ppbVar19;
              pbVar15 = &DAT_0040ae8d;
              do {
                if (lVar10 == 0) break;
                lVar10 = lVar10 + -1;
                bVar22 = *pbVar14 < *pbVar15;
                bVar24 = *pbVar14 == *pbVar15;
                pbVar14 = pbVar14 + (ulong)bVar25 * -2 + 1;
                pbVar15 = pbVar15 + (ulong)bVar25 * -2 + 1;
              } while (bVar24);
              if ((!bVar22 && !bVar24) == bVar22) break;
              if (uVar11 == 4) {
                uVar11 = uVar4 - DAT_0060d2a4;
                break;
              }
              uVar11 = uVar11 + 1;
              ppbVar19 = ppbVar19 + 1;
              bVar22 = uVar11 < uVar1 - uVar12;
              bVar24 = uVar11 == uVar1 - uVar12;
            } while (!bVar24);
          }
          else {
            uVar11 = 1;
          }
          bVar2 = FUN_00402790(uVar11);
          pcVar16 = *(char **)(DAT_0060d298 + (long)(int)DAT_0060d2a4 * 8);
          if (pcVar16 == (char *)0x0) {
            uVar5 = FUN_00404f00(&DAT_0040ae8d);
            pcVar16 = "%s expected";
            goto LAB_00402c9f;
          }
          if ((*pcVar16 != ')') || (pcVar16[1] != '\0')) {
            uVar5 = FUN_00404ee0(1);
            uVar6 = FUN_00404ee0(0,&DAT_0040ae8d);
            uVar7 = dcgettext(0,"%s expected, found %s",5);
                    /* WARNING: Subroutine does not return */
            FUN_00401b10(uVar7,uVar6,uVar5);
          }
          DAT_0060d2a4 = DAT_0060d2a4 + 1;
LAB_00402a58:
          bStack_3a = bStack_3a & (bVar2 ^ bVar20);
          bVar22 = DAT_0060d2a0 < DAT_0060d2a4;
          bVar24 = DAT_0060d2a0 == DAT_0060d2a4;
          uVar4 = DAT_0060d2a0;
          if ((int)DAT_0060d2a0 <= (int)DAT_0060d2a4) {
LAB_00402b31:
            bStack_39 = bStack_39 | bStack_3a;
            goto LAB_00402b3a;
          }
        }
        pbVar14 = *(byte **)(DAT_0060d298 + (long)(int)DAT_0060d2a4 * 8);
        lVar10 = 3;
        pbVar15 = pbVar14;
        pbVar17 = &DAT_0040907e;
        do {
          if (lVar10 == 0) break;
          lVar10 = lVar10 + -1;
          bVar22 = *pbVar15 < *pbVar17;
          bVar24 = *pbVar15 == *pbVar17;
          pbVar15 = pbVar15 + (ulong)bVar25 * -2 + 1;
          pbVar17 = pbVar17 + (ulong)bVar25 * -2 + 1;
        } while (bVar24);
        if ((!bVar22 && !bVar24) != bVar22) goto LAB_00402bc0;
        DAT_0060d2a4 = DAT_0060d2a4 + 1;
        if ((int)uVar4 <= (int)DAT_0060d2a4) goto LAB_00402aa4;
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00401c90();
LAB_00402bc0:
  lVar10 = 3;
  bVar22 = false;
  bStack_39 = bStack_39 | bStack_3a;
  bVar24 = bStack_39 == 0;
  pbVar15 = &DAT_00409081;
  do {
    if (lVar10 == 0) break;
    lVar10 = lVar10 + -1;
    bVar22 = *pbVar14 < *pbVar15;
    bVar24 = *pbVar14 == *pbVar15;
    pbVar14 = pbVar14 + (ulong)bVar25 * -2 + 1;
    pbVar15 = pbVar15 + (ulong)bVar25 * -2 + 1;
  } while (bVar24);
  if ((!bVar22 && !bVar24) != bVar22) {
LAB_00402b3a:
    return (ulong)bStack_39;
  }
  DAT_0060d2a4 = DAT_0060d2a4 + 1;
  goto LAB_004028f0;
}


/* WARNING: Removing unreachable block (ram,0x00403175) */

void FUN_00402e30(int param_1)

{
  FILE *pFVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  
  uVar5 = DAT_0060d2b8;
  pFVar1 = stdout;
  if (param_1 == 0) {
    pcVar4 = (char *)dcgettext(0,
                               "Usage: test EXPRESSION\n  or:  test\n  or:  [ EXPRESSION ]\n  or:  [ ]\n  or:  [ OPTION\n"
                               ,5);
    fputs_unlocked(pcVar4,pFVar1);
    pFVar1 = stdout;
    pcVar4 = (char *)dcgettext(0,"Exit with the status determined by EXPRESSION.\n\n",5);
    fputs_unlocked(pcVar4,pFVar1);
    pFVar1 = stdout;
    pcVar4 = (char *)dcgettext(0,"      --help     display this help and exit\n",5);
    fputs_unlocked(pcVar4,pFVar1);
    pFVar1 = stdout;
    pcVar4 = (char *)dcgettext(0,"      --version  output version information and exit\n",5);
    fputs_unlocked(pcVar4,pFVar1);
    pFVar1 = stdout;
    pcVar4 = (char *)dcgettext(0,
                               "\nAn omitted EXPRESSION defaults to false.  Otherwise,\nEXPRESSION is true or false and sets exit status.  It is one of:\n"
                               ,5);
    fputs_unlocked(pcVar4,pFVar1);
    pFVar1 = stdout;
    pcVar4 = (char *)dcgettext(0,
                               "\n  ( EXPRESSION )               EXPRESSION is true\n  ! EXPRESSION                 EXPRESSION is false\n  EXPRESSION1 -a EXPRESSION2   both EXPRESSION1 and EXPRESSION2 are true\n  EXPRESSION1 -o EXPRESSION2   either EXPRESSION1 or EXPRESSION2 is true\n"
                               ,5);
    fputs_unlocked(pcVar4,pFVar1);
    pFVar1 = stdout;
    pcVar4 = (char *)dcgettext(0,
                               "\n  -n STRING            the length of STRING is nonzero\n  STRING               equivalent to -n STRING\n  -z STRING            the length of STRING is zero\n  STRING1 = STRING2    the strings are equal\n  STRING1 != STRING2   the strings are not equal\n"
                               ,5);
    fputs_unlocked(pcVar4,pFVar1);
    pFVar1 = stdout;
    pcVar4 = (char *)dcgettext(0,
                               "\n  INTEGER1 -eq INTEGER2   INTEGER1 is equal to INTEGER2\n  INTEGER1 -ge INTEGER2   INTEGER1 is greater than or equal to INTEGER2\n  INTEGER1 -gt INTEGER2   INTEGER1 is greater than INTEGER2\n  INTEGER1 -le INTEGER2   INTEGER1 is less than or equal to INTEGER2\n  INTEGER1 -lt INTEGER2   INTEGER1 is less than INTEGER2\n  INTEGER1 -ne INTEGER2   INTEGER1 is not equal to INTEGER2\n"
                               ,5);
    fputs_unlocked(pcVar4,pFVar1);
    pFVar1 = stdout;
    pcVar4 = (char *)dcgettext(0,
                               "\n  FILE1 -ef FILE2   FILE1 and FILE2 have the same device and inode numbers\n  FILE1 -nt FILE2   FILE1 is newer (modification date) than FILE2\n  FILE1 -ot FILE2   FILE1 is older than FILE2\n"
                               ,5);
    fputs_unlocked(pcVar4,pFVar1);
    pFVar1 = stdout;
    pcVar4 = (char *)dcgettext(0,
                               "\n  -b FILE     FILE exists and is block special\n  -c FILE     FILE exists and is character special\n  -d FILE     FILE exists and is a directory\n  -e FILE     FILE exists\n"
                               ,5);
    fputs_unlocked(pcVar4,pFVar1);
    pFVar1 = stdout;
    pcVar4 = (char *)dcgettext(0,
                               "  -f FILE     FILE exists and is a regular file\n  -g FILE     FILE exists and is set-group-ID\n  -G FILE     FILE exists and is owned by the effective group ID\n  -h FILE     FILE exists and is a symbolic link (same as -L)\n  -k FILE     FILE exists and has its sticky bit set\n"
                               ,5);
    fputs_unlocked(pcVar4,pFVar1);
    pFVar1 = stdout;
    pcVar4 = (char *)dcgettext(0,
                               "  -L FILE     FILE exists and is a symbolic link (same as -h)\n  -O FILE     FILE exists and is owned by the effective user ID\n  -p FILE     FILE exists and is a named pipe\n  -r FILE     FILE exists and read permission is granted\n  -s FILE     FILE exists and has a size greater than zero\n"
                               ,5);
    fputs_unlocked(pcVar4,pFVar1);
    pFVar1 = stdout;
    pcVar4 = (char *)dcgettext(0,
                               "  -S FILE     FILE exists and is a socket\n  -t FD       file descriptor FD is opened on a terminal\n  -u FILE     FILE exists and its set-user-ID bit is set\n  -w FILE     FILE exists and write permission is granted\n  -x FILE     FILE exists and execute (or search) permission is granted\n"
                               ,5);
    fputs_unlocked(pcVar4,pFVar1);
    pFVar1 = stdout;
    pcVar4 = (char *)dcgettext(0,
                               "\nExcept for -h and -L, all FILE-related tests dereference symbolic links.\nBeware that parentheses need to be escaped (e.g., by backslashes) for shells.\nINTEGER may also be -l STRING, which evaluates to the length of STRING.\n"
                               ,5);
    fputs_unlocked(pcVar4,pFVar1);
    pFVar1 = stdout;
    pcVar4 = (char *)dcgettext(0,
                               "\nNOTE: Binary -a and -o are inherently ambiguous.  Use \'test EXPR1 && test\nEXPR2\' or \'test EXPR1 || test EXPR2\' instead.\n"
                               ,5);
    fputs_unlocked(pcVar4,pFVar1);
    pFVar1 = stdout;
    pcVar4 = (char *)dcgettext(0,
                               "\nNOTE: [ honors the --help and --version options, but test does not.\ntest treats each of those as it treats any other nonempty STRING.\n"
                               ,5);
    fputs_unlocked(pcVar4,pFVar1);
    uVar5 = dcgettext(0,"test and/or [",5);
    uVar3 = dcgettext(0,
                      "\nNOTE: your shell may have its own version of %s, which usually supersedes\nthe version described here.  Please refer to your shell\'s documentation\nfor details about the options it supports.\n"
                      ,5);
    __printf_chk(1,uVar3,uVar5);
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if ((pcVar4 != (char *)0x0) && (iVar2 = strncmp(pcVar4,"en_",3), iVar2 != 0)) {
      uVar5 = dcgettext(0,"Report %s translation bugs to <https://translationproject.org/team/>\n",5
                       );
      __printf_chk(1,uVar5,"[");
    }
    uVar5 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    __printf_chk(1,uVar5,"https://www.gnu.org/software/coreutils/","[");
    uVar5 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
    __printf_chk(1,uVar5,"test invocation","");
  }
  else {
    uVar3 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(stderr,1,uVar3,uVar5);
  }
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}


void FUN_004031d0(undefined8 param_1)

{
  DAT_0060d2b0 = param_1;
  return;
}


void FUN_004031e0(undefined param_1)

{
  DAT_0060d2a8 = param_1;
  return;
}


void FUN_004031f0(void)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  iVar1 = FUN_00405d20(stdout);
  if (iVar1 != 0) {
    piVar2 = __errno_location();
    if ((DAT_0060d2a8 == '\0') || (*piVar2 != 0x20)) {
      uVar3 = dcgettext(0,"write error",5);
      if (DAT_0060d2b0 == 0) {
        error(0,*piVar2,"%s",uVar3);
      }
      else {
        uVar4 = FUN_00404d50();
        error(0,*piVar2,"%s: %s",uVar4,uVar3);
      }
      goto LAB_0040326e;
    }
  }
  iVar1 = FUN_00405d20(stderr);
  if (iVar1 == 0) {
    return;
  }
LAB_0040326e:
                    /* WARNING: Subroutine does not return */
  _exit(DAT_0060d1f8);
}


char * FUN_00403290(ulong param_1,long param_2)

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


void FUN_004032e0(byte *param_1)

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
        pbVar6 = &DAT_0040a100;
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
  DAT_0060d2b8 = param_1;
  program_invocation_name = param_1;
  return;
}


char * FUN_00403380(char *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  byte *pbVar3;
  
  pcVar2 = (char *)dcgettext(0,param_1,5);
  if (param_1 == pcVar2) {
    pbVar3 = (byte *)FUN_00405de0();
    if ((*pbVar3 & 0xdf) == 0x55) {
      if (((((pbVar3[1] & 0xdf) != 0x54) || ((pbVar3[2] & 0xdf) != 0x46)) || (pbVar3[3] != 0x2d)) ||
         ((pbVar3[4] != 0x38 || (pbVar3[5] != 0)))) {
LAB_00403458:
        pcVar2 = "\"";
        if (param_2 != 9) {
          pcVar2 = "\'";
        }
        return pcVar2;
      }
      cVar1 = *pcVar2;
      pcVar2 = &DAT_0040a111;
      if (cVar1 != '`') {
        pcVar2 = &DAT_0040a106;
      }
    }
    else {
      if (((((*pbVar3 & 0xdf) != 0x47) || ((pbVar3[1] & 0xdf) != 0x42)) || (pbVar3[2] != 0x31)) ||
         (((pbVar3[3] != 0x38 || (pbVar3[4] != 0x30)) ||
          ((pbVar3[5] != 0x33 || ((pbVar3[6] != 0x30 || (pbVar3[7] != 0)))))))) goto LAB_00403458;
      cVar1 = *pcVar2;
      pcVar2 = &DAT_0040a10d;
      if (cVar1 != '`') {
        pcVar2 = &DAT_0040a10a;
      }
    }
  }
  return pcVar2;
}


ulong FUN_00403480(undefined *param_1,ulong param_2,char *param_3,ulong param_4,int param_5,
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
LAB_004040d1:
    if (param_2 != 0) {
      bVar3 = false;
      local_5b = false;
      bVar2 = true;
      local_70 = 0;
      goto LAB_00403d06;
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
      goto LAB_004040d1;
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
      param_8 = (char *)FUN_00403380(&DAT_0040a117,param_5);
      param_9 = (char *)FUN_00403380(&DAT_0040a115);
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
LAB_00403518:
  uVar22 = 0;
  bVar5 = local_5b;
LAB_00403528:
  bVar23 = param_4 != uVar22;
  if (param_4 == 0xffffffffffffffff) {
    bVar23 = param_3[uVar22] != '\0';
  }
  bVar26 = bVar6;
  if (!bVar23) goto LAB_00403ca8;
  bVar20 = (bool)(param_5 != 2 & bVar6);
  __s1 = (byte *)(param_3 + uVar22);
  uVar16 = uVar15;
  bVar4 = bVar3;
  if (bVar20) {
    if (local_a0 == 0) {
LAB_00403c20:
      uVar19 = (ulong)*__s1;
      switch(uVar19) {
      case 0:
        goto switchD_00403c32_caseD_0;
      default:
        bVar20 = false;
        goto switchD_00403a9e_caseD_1;
      case 7:
        bVar17 = 0x61;
        goto LAB_00403935;
      case 8:
        bVar17 = 0x62;
        break;
      case 9:
switchD_00403c32_caseD_9:
        bVar17 = 0x74;
        break;
      case 10:
switchD_00403c32_caseD_a:
        bVar17 = 0x6e;
        break;
      case 0xb:
switchD_00403c32_caseD_b:
        bVar17 = 0x76;
        goto LAB_00403935;
      case 0xc:
switchD_00403c32_caseD_c:
        bVar17 = 0x66;
LAB_00403935:
        if (local_5c) {
          bVar25 = false;
          goto LAB_00403888;
        }
LAB_00403940:
        bVar23 = false;
        goto LAB_004036fb;
      case 0xd:
        bVar20 = false;
switchD_00403618_caseD_d:
        bVar25 = param_5 == 2;
        uVar19 = 0xd;
        bVar13 = 0x72;
        goto LAB_00403850;
      case 0x20:
        bVar25 = false;
LAB_00403c7a:
        uVar19 = 0x20;
        goto LAB_00403c42;
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
switchD_00403618_caseD_21:
        bVar25 = false;
        goto LAB_0040385b;
      case 0x23:
      case 0x7e:
        bVar26 = false;
LAB_00403c5a:
        if (uVar22 == 0) {
          bVar25 = false;
          bVar23 = bVar20;
          bVar20 = bVar26;
          goto LAB_00403668;
        }
        bVar23 = false;
        goto LAB_0040367f;
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
LAB_00403c42:
        bVar24 = false;
        bVar23 = bVar20;
        bVar20 = bVar25;
        goto LAB_00403681;
      case 0x27:
        bVar20 = false;
        goto switchD_00403a9e_caseD_27;
      case 0x3f:
        bVar20 = false;
        goto switchD_00403a9e_caseD_3f;
      case 0x5c:
        bVar20 = false;
        goto switchD_00403618_caseD_5c;
      case 0x7b:
      case 0x7d:
        bVar20 = false;
        goto switchD_00403a9e_caseD_7b;
      }
      bVar25 = false;
      bVar23 = false;
      goto joined_r0x00403877;
    }
    if ((param_4 == 0xffffffffffffffff) && (1 < local_a0)) {
      param_4 = strlen(param_3);
    }
    if ((param_4 < uVar22 + local_a0) || (iVar7 = memcmp(__s1,local_78,local_a0), iVar7 != 0))
    goto LAB_00403c20;
    if (!local_5c) {
      uVar19 = (ulong)*__s1;
      bVar25 = bVar20;
      switch(uVar19) {
      case 0:
        goto switchD_00403618_caseD_0;
      default:
        goto switchD_00403a9e_caseD_1;
      case 7:
        bVar17 = 0x61;
        goto LAB_00403940;
      case 8:
        bVar25 = false;
        bVar23 = false;
        bVar17 = 0x62;
        break;
      case 9:
        goto switchD_00403c32_caseD_9;
      case 10:
        goto switchD_00403c32_caseD_a;
      case 0xb:
        goto switchD_00403c32_caseD_b;
      case 0xc:
        goto switchD_00403c32_caseD_c;
      case 0xd:
        goto switchD_00403618_caseD_d;
      case 0x20:
        goto LAB_00403c7a;
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
        goto switchD_00403618_caseD_21;
      case 0x23:
      case 0x7e:
        bVar26 = bVar20;
        goto LAB_00403c5a;
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
        goto LAB_00403c42;
      case 0x27:
        goto switchD_00403a9e_caseD_27;
      case 0x3f:
        goto switchD_00403a9e_caseD_3f;
      case 0x5c:
        goto switchD_00403618_caseD_5c;
      case 0x7b:
      case 0x7d:
        goto switchD_00403a9e_caseD_7b;
      }
      goto LAB_004036c2;
    }
    goto LAB_0040389a;
  }
  uVar19 = (ulong)*__s1;
  switch(uVar19) {
  case 0:
    if (bVar6) {
switchD_00403c32_caseD_0:
      if (!local_5c) {
        bVar20 = false;
switchD_00403618_caseD_0:
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
            goto LAB_00403778;
          }
LAB_004039ba:
          param_1[uVar16] = 0x5c;
          uVar15 = uVar16;
        }
        else if (uVar15 < uVar9) goto LAB_004039ba;
        uVar16 = uVar15 + 1;
        bVar24 = bVar23;
        if (param_5 == 2) {
          bVar17 = 0x30;
          bVar23 = false;
          bVar4 = bVar3;
          goto LAB_00403778;
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
LAB_004039f9:
        bVar17 = (byte)uVar19;
        bVar23 = false;
        uVar15 = uVar16;
        bVar4 = bVar3;
        if ((bool)(bVar6 ^ 1U | bVar26)) goto LAB_00403778;
        goto LAB_00403681;
      }
      bVar26 = param_5 == 2;
      goto LAB_0040388c;
    }
    if ((param_6 & 1) == 0) {
      bVar25 = param_5 == 2;
      uVar19 = 0;
      bVar23 = false;
      bVar20 = false;
      goto LAB_00403668;
    }
    uVar22 = uVar22 + 1;
    goto LAB_00403528;
  default:
switchD_00403a9e_caseD_1:
    bVar25 = bVar6;
    if (sVar8 != 1) {
      local_40[0] = (mbstate_t)0x0;
      if (param_4 == 0xffffffffffffffff) {
        param_4 = strlen(param_3);
      }
      uVar21 = 0;
      do {
        uVar1 = uVar22 + uVar21;
        lVar11 = FUN_00405c40(&local_44,param_3 + uVar1,param_4 - uVar1,local_40);
        if (lVar11 == 0) break;
        if (lVar11 == -1) {
          bVar23 = false;
          goto LAB_004043aa;
        }
        if (lVar11 == -2) {
          if ((param_4 <= uVar1) || (param_3[uVar1] == '\0')) goto LAB_004044e7;
          goto LAB_004044d7;
        }
        if (((param_5 == 2) && (local_5c)) && (lVar11 != 1)) {
          pcVar12 = param_3 + uVar1 + 1;
          do {
            if (((byte)(*pcVar12 + 0xa5U) < 0x22) &&
               ((1L << (*pcVar12 + 0xa5U & 0x3f) & 0x20000002bU) != 0)) {
              param_5 = 2;
              goto LAB_0040388c;
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
      goto LAB_004043aa;
    }
    ppuVar10 = __ctype_b_loc();
    uVar21 = 1;
    bVar25 = ((*ppuVar10)[uVar19] & 0x4000) == 0;
    bVar23 = !bVar25;
    bVar25 = (bool)(bVar25 & bVar6);
    goto LAB_00403a74;
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
    goto LAB_00403ab2;
  case 10:
    uVar19 = 10;
    bVar13 = 0x6e;
    goto LAB_00403ab2;
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
LAB_00403ab2:
    bVar25 = param_5 == 2;
    bVar20 = (bool)(local_5c & bVar25);
    if (bVar20) {
LAB_00403aca:
      param_5 = 2;
      goto LAB_0040388c;
    }
    break;
  case 0x20:
    uVar19 = 0x20;
    goto LAB_00403656;
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
LAB_00403656:
    bVar25 = param_5 == 2;
    if ((local_5c) && (bVar25)) goto LAB_00403aca;
    goto LAB_00403668;
  case 0x23:
  case 0x7e:
LAB_0040364d:
    bVar25 = param_5 == 2;
    if (uVar22 == 0) goto LAB_00403656;
    goto LAB_0040385b;
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
    goto switchD_00403a9e_caseD_25;
  case 0x27:
switchD_00403a9e_caseD_27:
    bVar5 = bVar23;
    if (param_5 != 2) {
      bVar25 = false;
      uVar19 = 0x27;
      goto LAB_00403668;
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
      goto LAB_00403778;
    }
    goto LAB_0040388c;
  case 0x3f:
switchD_00403a9e_caseD_3f:
    if (param_5 == 2) {
      if (!local_5c) {
        bVar17 = 0x3f;
        bVar24 = false;
        bVar23 = false;
        goto LAB_00403778;
      }
      goto LAB_0040388c;
    }
    if (param_5 != 5) {
      bVar25 = param_5 == 2;
      uVar19 = 0x3f;
      bVar23 = false;
      goto LAB_00403668;
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
        goto LAB_004039f9;
      }
      goto LAB_0040389a;
    }
    bVar25 = false;
    uVar19 = 0x3f;
    bVar23 = false;
    goto LAB_00403668;
  case 0x5c:
    if (param_5 != 2) {
switchD_00403618_caseD_5c:
      uVar19 = 0x5c;
      bVar17 = 0x5c;
      bVar13 = 0x5c;
      bVar25 = (bool)(bVar6 & local_5c & local_a0 != 0);
      if (!bVar25) break;
      uVar22 = uVar22 + 1;
      bVar23 = false;
      goto LAB_00403794;
    }
    if (local_5c) goto LAB_0040388c;
    uVar22 = uVar22 + 1;
    bVar23 = false;
    bVar17 = 0x5c;
    goto LAB_00403794;
  case 0x7b:
  case 0x7d:
switchD_00403a9e_caseD_7b:
    bVar24 = param_4 != 1;
    if (param_4 == 0xffffffffffffffff) {
      bVar24 = param_3[1] != '\0';
    }
    bVar25 = param_5 == 2;
    if (!bVar24) goto LAB_0040364d;
    goto LAB_0040385b;
  }
LAB_00403850:
  if (!bVar6) {
LAB_0040385b:
    bVar23 = false;
    goto LAB_00403668;
  }
  bVar23 = false;
  bVar17 = bVar13;
  goto joined_r0x00403877;
LAB_00403ca8:
  if ((uVar15 == 0) && ((bool)(local_5c & param_5 == 2))) {
    param_5 = 2;
LAB_0040388c:
    if (bVar26) {
      param_5 = 4;
    }
LAB_0040389a:
    uVar9 = FUN_00403480(param_1,uVar9,param_3,param_4,param_5,param_6 & 0xfffffffd,0,param_8,
                         param_9);
    return uVar9;
  }
  bVar26 = (bool)(param_5 == 2 & (local_5c ^ 1U));
  bVar23 = (bool)(local_5c ^ 1U);
  if ((!bVar26) || (bVar23 = bVar26, !bVar5)) {
LAB_0040457d:
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
    uVar9 = FUN_00403480(param_1,local_70,param_3,param_4,5,param_6,param_7,param_8,param_9);
    return uVar9;
  }
  local_5b = uVar9 == 0 && local_70 != 0;
  param_2 = local_70;
  bVar23 = bVar5;
  if (uVar9 != 0 || local_70 == 0) goto LAB_0040457d;
LAB_00403d06:
  *param_1 = 0x27;
  param_5 = 2;
  uVar15 = 1;
  local_78 = "\'";
  local_a0 = 1;
  local_5c = false;
  uVar9 = param_2;
  goto LAB_00403518;
  while (__s1[uVar21] != 0) {
LAB_004044d7:
    uVar21 = uVar21 + 1;
    if (param_4 <= uVar22 + uVar21) break;
  }
LAB_004044e7:
  bVar23 = false;
LAB_004043aa:
  if (1 < uVar21) {
LAB_00403f6e:
    bVar26 = false;
    uVar21 = uVar21 + uVar22;
    uVar16 = uVar22;
    do {
      bVar17 = (byte)uVar19;
      if (bVar25) {
        bVar26 = param_5 == 2;
        if (local_5c) goto LAB_0040388c;
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
        if (uVar21 <= uVar22) goto LAB_0040370d;
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
        if (uVar21 <= uVar22) goto LAB_00403794;
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
LAB_00403a74:
  if (bVar25) {
    bVar23 = false;
    bVar25 = bVar6;
    goto LAB_00403f6e;
  }
switchD_00403a9e_caseD_25:
  bVar25 = param_5 == 2;
LAB_00403668:
  bVar17 = (byte)uVar19;
  bVar24 = (bool)((bVar6 ^ 1U | bVar25) ^ 1 | local_5c);
  bVar26 = bVar20;
  if (bVar24) {
LAB_0040367f:
    bVar24 = false;
    bVar20 = bVar26;
LAB_00403681:
    bVar17 = (byte)uVar19;
    uVar16 = uVar15;
    bVar4 = bVar3;
    if ((param_7 == 0) || ((*(uint *)(param_7 + (uVar19 >> 5) * 4) >> (bVar17 & 0x1f) & 1) == 0))
    goto LAB_00403778;
    bVar25 = param_5 == 2;
  }
  else {
LAB_00403778:
    bVar25 = param_5 == 2;
    uVar15 = uVar16;
    bVar3 = bVar4;
    if (!bVar20) {
      uVar22 = uVar22 + 1;
      bVar3 = (bool)((bVar24 ^ 1U) & bVar4);
LAB_00403794:
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
      goto LAB_0040370d;
    }
  }
joined_r0x00403877:
  if (local_5c) {
LAB_00403888:
    bVar26 = (bool)(bVar6 & bVar25);
    goto LAB_0040388c;
  }
LAB_004036c2:
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
LAB_004036fb:
  if (uVar15 < uVar9) {
    param_1[uVar15] = 0x5c;
  }
  uVar15 = uVar15 + 1;
  uVar22 = uVar22 + 1;
  bVar4 = bVar3;
LAB_0040370d:
  bVar3 = bVar4;
  if (uVar15 < uVar9) {
    param_1[uVar15] = bVar17;
  }
  uVar15 = uVar15 + 1;
  if (!bVar23) {
    bVar2 = false;
  }
  goto LAB_00403528;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_004046b0(int param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

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
  puVar8 = (undefined4 *)PTR_DAT_0060d238;
  if (DAT_0060d250 <= param_1) {
    if (param_1 == 0x7fffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_00405a40();
    }
    if (PTR_DAT_0060d238 == &DAT_0060d240) {
      puVar8 = (undefined4 *)FUN_00405850(0);
      uVar6 = PTR_DAT_0060d248._4_4_;
      uVar5 = PTR_DAT_0060d248._0_4_;
      uVar3 = _UNK_0060d244;
      PTR_DAT_0060d238 = (undefined *)puVar8;
      *puVar8 = _DAT_0060d240;
      puVar8[1] = uVar3;
      puVar8[2] = uVar5;
      puVar8[3] = uVar6;
    }
    else {
      puVar8 = (undefined4 *)FUN_00405850(PTR_DAT_0060d238);
      PTR_DAT_0060d238 = (undefined *)puVar8;
    }
    memset(puVar8 + (long)DAT_0060d250 * 4,0,(long)((param_1 + 1) - DAT_0060d250) << 4);
    DAT_0060d250 = param_1 + 1;
  }
  uVar2 = param_4[1];
  puVar10 = (ulong *)(puVar8 + (long)param_1 * 4);
  uVar4 = *puVar10;
  __ptr = (undefined *)puVar10[1];
  uVar9 = FUN_00403480(__ptr,uVar4,param_2,param_3,*param_4,uVar2 | 1,param_4 + 2,
                       *(undefined8 *)(param_4 + 10),*(undefined8 *)(param_4 + 0xc));
  if (uVar4 <= uVar9) {
    uVar9 = uVar9 + 1;
    *puVar10 = uVar9;
    if (__ptr != &DAT_0060d2c0) {
      free(__ptr);
    }
    __ptr = (undefined *)FUN_004057f0(uVar9);
    uVar3 = *param_4;
    puVar10[1] = (ulong)__ptr;
    FUN_00403480(__ptr,uVar9,param_2,param_3,uVar3,uVar2 | 1,param_4 + 2,
                 *(undefined8 *)(param_4 + 10),*(undefined8 *)(param_4 + 0xc));
  }
  *piVar7 = iVar1;
  return __ptr;
}


void FUN_00404850(undefined *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_0060d3c0;
  }
  FUN_004059f0(param_1,0x38);
  *piVar2 = iVar1;
  return;
}


undefined4 FUN_00404890(undefined4 *param_1)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)&DAT_0060d3c0;
  }
  return *param_1;
}


void FUN_004048a0(undefined4 *param_1,undefined4 param_2)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)&DAT_0060d3c0;
  }
  *param_1 = param_2;
  return;
}


uint FUN_004048b0(undefined *param_1,byte param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_0060d3c0;
  }
  uVar1 = *(uint *)(param_1 + (ulong)(param_2 >> 5) * 4 + 8);
  uVar2 = uVar1 >> (param_2 & 0x1f);
  *(uint *)(param_1 + (ulong)(param_2 >> 5) * 4 + 8) =
       ((param_3 ^ uVar2) & 1) << (param_2 & 0x1f) ^ uVar1;
  return uVar2 & 1;
}


undefined4 FUN_004048f0(undefined *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_0060d3c0;
  }
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_1 + 4) = param_2;
  return uVar1;
}


void FUN_00404910(undefined4 *param_1,long param_2,long param_3)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)&DAT_0060d3c0;
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


void FUN_00404940(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 *param_5)

{
  int iVar1;
  int *piVar2;
  
  if (param_5 == (undefined4 *)0x0) {
    param_5 = (undefined4 *)&DAT_0060d3c0;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  FUN_00403480(param_1,param_2,param_3,param_4,*param_5,param_5[1],param_5 + 2,
               *(undefined8 *)(param_5 + 10),*(undefined8 *)(param_5 + 0xc));
  *piVar2 = iVar1;
  return;
}


undefined8 FUN_004049c0(undefined8 param_1,undefined8 param_2,long *param_3,undefined4 *param_4)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  
  if (param_4 == (undefined4 *)0x0) {
    param_4 = (undefined4 *)&DAT_0060d3c0;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  uVar5 = (uint)(param_3 == (long *)0x0) | param_4[1];
  lVar3 = FUN_00403480(0,0,param_1,param_2,*param_4,uVar5,param_4 + 2,*(undefined8 *)(param_4 + 10),
                       *(undefined8 *)(param_4 + 0xc));
  uVar4 = FUN_004057f0(lVar3 + 1);
  FUN_00403480(uVar4,lVar3 + 1,param_1,param_2,*param_4,uVar5,param_4 + 2,
               *(undefined8 *)(param_4 + 10),*(undefined8 *)(param_4 + 0xc));
  *piVar2 = iVar1;
  if (param_3 != (long *)0x0) {
    *param_3 = lVar3;
  }
  return uVar4;
}


void FUN_00404ab0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_004049c0(param_1,param_2,0,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404ac0(void)

{
  void **ppvVar1;
  void *__ptr;
  undefined *__ptr_00;
  void **ppvVar2;
  
  __ptr_00 = PTR_DAT_0060d238;
  if (1 < DAT_0060d250) {
    ppvVar2 = (void **)(PTR_DAT_0060d238 + 0x18);
    ppvVar1 = (void **)(PTR_DAT_0060d238 + (ulong)(DAT_0060d250 - 2) * 0x10 + 0x28);
    do {
      __ptr = *ppvVar2;
      ppvVar2 = ppvVar2 + 2;
      free(__ptr);
    } while (ppvVar2 != ppvVar1);
  }
  if (*(undefined **)(__ptr_00 + 8) != &DAT_0060d2c0) {
    free(*(undefined **)(__ptr_00 + 8));
    _DAT_0060d240 = 0x100;
    PTR_DAT_0060d248 = &DAT_0060d2c0;
  }
  if (__ptr_00 != &DAT_0060d240) {
    free(__ptr_00);
    PTR_DAT_0060d238 = &DAT_0060d240;
  }
  DAT_0060d250 = 1;
  return;
}


void FUN_00404b60(undefined8 param_1,undefined8 param_2)

{
  FUN_004046b0(param_1,param_2,0xffffffffffffffff,&DAT_0060d3c0);
  return;
}


void FUN_00404b80(void)

{
  FUN_004046b0();
  return;
}


void FUN_00404b90(undefined8 param_1)

{
  FUN_004046b0(0,param_1,0xffffffffffffffff,&DAT_0060d3c0);
  return;
}


void FUN_00404bb0(undefined8 param_1,undefined8 param_2)

{
  FUN_004046b0(0,param_1,param_2,&DAT_0060d3c0);
  return;
}


void FUN_00404bd0(undefined8 param_1,int param_2,undefined8 param_3)

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
    FUN_004046b0(param_1,param_3,0xffffffffffffffff,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00404c40(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

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
    FUN_004046b0(param_1,param_3,param_4,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00404cb0(undefined4 param_1,undefined8 param_2)

{
  FUN_00404bd0(0,param_1,param_2);
  return;
}


void FUN_00404cc0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00404c40(0,param_1,param_2,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404cd0(undefined8 param_1,undefined8 param_2,byte param_3)

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
  
  local_18 = DAT_0060d3f0;
  local_48 = _DAT_0060d3c0;
  uStack_40 = uRam000000000060d3c8;
  local_38 = _DAT_0060d3d0;
  uStack_30 = uRam000000000060d3d8;
  puVar1 = (uint *)((long)&uStack_40 + (ulong)(param_3 >> 5) * 4);
  local_28 = _DAT_0060d3e0;
  uStack_20 = uRam000000000060d3e8;
  uVar2 = *puVar1;
  *puVar1 = (~(uVar2 >> (param_3 & 0x1f)) & 1) << (param_3 & 0x1f) ^ uVar2;
  FUN_004046b0(0,param_1,param_2,&local_48);
  return;
}


void FUN_00404d40(undefined8 param_1,char param_2)

{
  FUN_00404cd0(param_1,0xffffffffffffffff,(int)param_2);
  return;
}


void FUN_00404d50(undefined8 param_1)

{
  FUN_00404cd0(param_1,0xffffffffffffffff,0x3a);
  return;
}


void FUN_00404d70(undefined8 param_1,undefined8 param_2)

{
  FUN_00404cd0(param_1,param_2,0x3a);
  return;
}


void FUN_00404d80(undefined8 param_1,int param_2,undefined8 param_3)

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
    FUN_004046b0(param_1,param_3,0xffffffffffffffff,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404df0(undefined8 param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5
                 )

{
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  long lStack_20;
  long local_18;
  
  uStack_40 = uRam000000000060d3c8;
  local_38 = _DAT_0060d3d0;
  uStack_30 = uRam000000000060d3d8;
  local_28 = _DAT_0060d3e0;
  lStack_20 = uRam000000000060d3e8;
  local_18 = DAT_0060d3f0;
  local_48 = CONCAT44((int)((ulong)_DAT_0060d3c0 >> 0x20),10);
  if ((param_2 != 0) && (param_3 != 0)) {
    lStack_20 = param_2;
    local_18 = param_3;
    FUN_004046b0(param_1,param_4,param_5,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00404e60(void)

{
  FUN_00404df0();
  return;
}


void FUN_00404e70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00404df0(0,param_1,param_2,param_3,0xffffffffffffffff);
  return;
}


void FUN_00404e90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00404df0(0,param_1,param_2,param_3,param_4);
  return;
}


void FUN_00404eb0(void)

{
  FUN_004046b0();
  return;
}


void FUN_00404ec0(undefined8 param_1,undefined8 param_2)

{
  FUN_004046b0(0,param_1,param_2,&DAT_0060d200);
  return;
}


void FUN_00404ee0(undefined8 param_1,undefined8 param_2)

{
  FUN_004046b0(param_1,param_2,0xffffffffffffffff,&DAT_0060d200);
  return;
}


void FUN_00404f00(undefined8 param_1)

{
  FUN_004046b0(0,param_1,0xffffffffffffffff,&DAT_0060d200);
  return;
}


uint FUN_00404f20(byte *param_1,byte *param_2)

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
          goto LAB_00405160;
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
LAB_00405160:
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
          goto LAB_00405142;
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
LAB_00405142:
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


void FUN_00405180(undefined4 param_1,undefined4 param_2,long param_3,undefined4 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  void *__ptr;
  undefined8 uVar1;
  int *piVar2;
  
  __ptr = (void *)FUN_00405bb0(param_5,param_6);
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


void FUN_00405240(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00405180(param_1,param_2,0,0,param_3,param_4);
  return;
}


undefined8
FUN_00405250(FILE *param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5,
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
  uVar1 = dcgettext(0,&DAT_0040ae8b,5);
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
    goto LAB_004054cc;
  case 5:
    uVar1 = param_5[3];
    uVar4 = param_5[2];
    uVar5 = param_5[1];
    uVar6 = *param_5;
    uVar7 = dcgettext(0,"Written by %s, %s, %s,\n%s, and %s.\n",5);
LAB_004054cc:
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
    goto LAB_00405569;
  case 7:
    uVar1 = param_5[2];
    uVar4 = param_5[5];
    uVar5 = param_5[4];
    uVar6 = param_5[3];
    local_58 = param_5[1];
    uVar7 = *param_5;
    uVar3 = dcgettext(0,"Written by %s, %s, %s,\n%s, %s, %s, and %s.\n",5);
LAB_00405569:
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
    goto LAB_0040534a;
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
LAB_0040534a:
  uVar1 = __fprintf_chk(param_1,1,uVar3,uVar7,local_50,local_58,uVar6,uVar5,uVar4,uVar1,local_48);
  return uVar1;
}


void FUN_00405630(void)

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
  FUN_00405250();
  return;
}


void FUN_00405650(void)

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
  FUN_00405250();
  return;
}


void FUN_004056b0(void)

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
  FUN_00405250();
  return;
}


void FUN_00405770(void)

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


void FUN_004057f0(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00405a40();
  }
  return;
}


void FUN_00405810(ulong param_1,ulong param_2)

{
  if ((-1 < SUB168(ZEXT816(param_1) * ZEXT816(param_2),0)) &&
     (SUB168(ZEXT816(param_1) * ZEXT816(param_2) >> 0x40,0) == 0)) {
    FUN_004057f0();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00405a40();
}


void thunk_FUN_004057f0(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00405a40();
  }
  return;
}


void * FUN_00405850(void *param_1,size_t param_2)

{
  void *pvVar1;
  
  if ((param_2 == 0) && (param_1 != (void *)0x0)) {
    free(param_1);
    return (void *)0x0;
  }
  pvVar1 = realloc(param_1,param_2);
  if ((pvVar1 == (void *)0x0) && (param_2 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00405a40();
  }
  return pvVar1;
}


void FUN_00405890(undefined8 param_1,ulong param_2,ulong param_3)

{
  if ((-1 < SUB168(ZEXT816(param_2) * ZEXT816(param_3),0)) &&
     (SUB168(ZEXT816(param_2) * ZEXT816(param_3) >> 0x40,0) == 0)) {
    FUN_00405850();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00405a40();
}


void FUN_004058c0(long param_1,ulong *param_2,ulong param_3)

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
    if ((SUB168(ZEXT816(uVar2) * ZEXT816(param_3),0) < 0) || (uVar3 != 0)) goto LAB_0040591b;
  }
  else {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x5555555555555554);
    uVar3 = SUB168(auVar1 % ZEXT816(param_3),0);
    if (SUB168(auVar1 / ZEXT816(param_3),0) <= uVar2) {
LAB_0040591b:
                    /* WARNING: Subroutine does not return */
      FUN_00405a40(param_1,param_2,uVar3);
    }
    uVar2 = (uVar2 >> 1) + 1 + uVar2;
  }
  *param_2 = uVar2;
  FUN_00405850(param_1,uVar2 * param_3);
  return;
}


void FUN_00405950(long param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (param_1 == 0) {
    if (uVar1 == 0) {
      *param_2 = 0x80;
      FUN_00405850(0,0x80);
      return;
    }
    if ((long)uVar1 < 0) goto LAB_0040599a;
  }
  else {
    if (0x5555555555555553 < uVar1) {
LAB_0040599a:
                    /* WARNING: Subroutine does not return */
      FUN_00405a40();
    }
    uVar1 = (uVar1 >> 1) + 1 + uVar1;
  }
  *param_2 = uVar1;
  FUN_00405850(param_1,uVar1);
  return;
}


void FUN_004059a0(size_t param_1)

{
  void *__s;
  
  __s = (void *)FUN_004057f0();
  memset(__s,0,param_1);
  return;
}


void FUN_004059c0(size_t param_1,ulong param_2)

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
  FUN_00405a40();
}


void FUN_004059f0(void *param_1,size_t param_2)

{
  void *__dest;
  
  __dest = (void *)FUN_004057f0(param_2);
  memcpy(__dest,param_1,param_2);
  return;
}


void FUN_00405a20(char *param_1)

{
  void *__dest;
  size_t sVar1;
  
  sVar1 = strlen(param_1);
  __dest = (void *)FUN_004057f0(sVar1 + 1);
  memcpy(__dest,param_1,sVar1 + 1);
  return;
}


void FUN_00405a40(void)

{
  undefined8 uVar1;
  
  uVar1 = dcgettext(0,"memory exhausted",5);
  error(DAT_0060d1f8,0,"%s",uVar1);
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Could not reconcile some variable overlaps */

undefined * FUN_00405a80(long param_1,ulong *param_2)

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
    __dest = (undefined *)FUN_004057f0(1);
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
    puVar5 = (undefined *)FUN_004057f0(uVar8 + 1);
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


undefined8 FUN_00405bb0(char *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  int *piVar4;
  undefined8 local_10 [2];
  
  if (*param_1 != '\0') {
    if ((*param_1 == '%') && (param_1[1] == 's')) {
      lVar2 = 0;
      do {
        lVar2 = lVar2 + 1;
        if (param_1[lVar2 * 2] == '\0') goto LAB_00405be8;
      } while ((param_1[lVar2 * 2] == '%') && (param_1[lVar2 * 2 + 1] == 's'));
    }
    iVar1 = FUN_00405cc0(local_10,param_1,param_2);
    if (-1 < iVar1) {
      return local_10[0];
    }
    piVar4 = __errno_location();
    if (*piVar4 != 0xc) {
      return 0;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00405a40();
  }
  lVar2 = 0;
LAB_00405be8:
  uVar3 = FUN_00405a80(lVar2);
  return uVar3;
}


size_t FUN_00405c40(wchar_t *param_1,byte *param_2,size_t param_3,mbstate_t *param_4)

{
  char cVar1;
  size_t sVar2;
  wchar_t local_1c;
  
  if (param_2 == (byte *)0x0) {
    param_3 = 1;
    param_2 = (byte *)0x40aed1;
  }
  else {
    if (param_3 == 0) {
      return 0xfffffffffffffffe;
    }
    if (param_1 != (wchar_t *)0x0) goto LAB_00405c64;
  }
  param_1 = &local_1c;
LAB_00405c64:
  sVar2 = mbrtowc(param_1,(char *)param_2,param_3,param_4);
  if ((0xfffffffffffffffd < sVar2) && (cVar1 = FUN_00405d80(0), cVar1 == '\0')) {
    sVar2 = 1;
    *param_1 = (uint)*param_2;
  }
  return sVar2;
}


ulong FUN_00405cc0(void **param_1,undefined8 param_2,undefined8 param_3)

{
  void *__ptr;
  int *piVar1;
  ulong local_10;
  
  __ptr = (void *)FUN_00406470(0,&local_10,param_2,param_3);
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


ulong FUN_00405d20(uint *param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  
  lVar2 = __fpending();
  uVar1 = *param_1;
  uVar3 = FUN_00406350(param_1);
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


bool FUN_00405d80(int param_1)

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
    pbVar5 = &DAT_0040b220;
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

char * FUN_00405de0(void)

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
  if (DAT_0060d3f8 != (char *)0x0) goto LAB_00405e1a;
  pcVar7 = getenv("CHARSETALIASDIR");
  if ((pcVar7 == (char *)0x0) || (*pcVar7 == '\0')) {
    sVar6 = 0x73;
    sVar5 = 0x65;
    __n = 100;
    pcVar7 = 
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib"
    ;
LAB_00405f05:
    __file = (char *)malloc(sVar6);
    if (__file != (char *)0x0) {
      memcpy(__file,pcVar7,__n);
      __file[__n] = '/';
      goto LAB_00405f26;
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
        goto LAB_00405f05;
      }
      sVar6 = __n + 0xe;
    }
    __file = (char *)malloc(sVar6);
    if (__file != (char *)0x0) {
      memcpy(__file,pcVar7,__n);
      sVar5 = __n;
LAB_00405f26:
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
LAB_00405fc0:
          pbVar8 = (byte *)__stream->_IO_read_ptr;
          if (__stream->_IO_read_end <= pbVar8) goto LAB_0040614c;
          do {
            __stream->_IO_read_ptr = (char *)(pbVar8 + 1);
            uVar4 = (uint)*pbVar8;
            __ptr = pcVar7;
            while( true ) {
              pcVar7 = __ptr;
              if ((uVar4 - 9 < 2) || (uVar4 == 0x20)) goto LAB_00405fc0;
              if (uVar4 == 0x23) goto LAB_004061b1;
              ungetc(uVar4,__stream);
              iVar2 = fscanf(__stream,"%50s %50s",&local_b8,&local_78);
              puVar13 = &local_b8;
              if (iVar2 < 2) goto LAB_0040615f;
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
                FUN_00406350(__stream);
                goto LAB_00405f64;
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
LAB_0040614c:
              uVar4 = __uflow(__stream);
              __ptr = pcVar7;
              if (uVar4 == 0xffffffff) goto LAB_0040615f;
            }
          } while( true );
        }
        close(iVar2);
      }
      goto LAB_00405f5e;
    }
  }
  DAT_0060d3f8 = "";
LAB_00405e1a:
  cVar1 = *DAT_0060d3f8;
  pcVar7 = DAT_0060d3f8;
  do {
    if (cVar1 == '\0') {
LAB_00405e74:
      if (*__s1 == '\0') {
        __s1 = "ASCII";
      }
      return __s1;
    }
    iVar2 = strcmp(__s1,pcVar7);
    if ((iVar2 == 0) || ((cVar1 == '*' && (pcVar7[1] == '\0')))) {
      sVar6 = strlen(pcVar7);
      __s1 = pcVar7 + sVar6 + 1;
      goto LAB_00405e74;
    }
    sVar6 = strlen(pcVar7);
    sVar5 = strlen(pcVar7 + sVar6 + 1);
    pcVar7 = pcVar7 + sVar6 + 1 + sVar5 + 1;
    cVar1 = *pcVar7;
  } while( true );
LAB_004061b1:
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
  if (uVar4 == 0xffffffff) goto LAB_0040615f;
  goto LAB_00405fc0;
LAB_0040615f:
  FUN_00406350(__stream);
  if (local_d0 == 0) {
LAB_00405f5e:
    pcVar7 = "";
  }
  else {
    pcVar7[local_d0] = '\0';
  }
LAB_00405f64:
  free(__file);
  DAT_0060d3f8 = pcVar7;
  goto LAB_00405e1a;
}


int FUN_00406350(FILE *param_1)

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
      if (_Var4 == -1) goto LAB_004063b7;
    }
    iVar1 = FUN_004063d0(param_1);
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
LAB_004063b7:
  iVar1 = fclose(param_1);
  return iVar1;
}


void FUN_004063d0(FILE *param_1)

{
  int iVar1;
  
  if (param_1 != (FILE *)0x0) {
    iVar1 = __freading();
    if ((iVar1 != 0) && ((param_1->_flags & 0x100U) != 0)) {
      FUN_00406410(param_1,0,1);
      fflush(param_1);
      return;
    }
  }
  fflush(param_1);
  return;
}


ulong FUN_00406410(FILE *param_1,__off_t param_2,int param_3)

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


/* WARNING: Removing unreachable block (ram,0x00407cac) */
/* WARNING: Removing unreachable block (ram,0x00407ded) */
/* WARNING: Removing unreachable block (ram,0x00407cc0) */
/* WARNING: Removing unreachable block (ram,0x00407194) */
/* WARNING: Removing unreachable block (ram,0x00406760) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Could not reconcile some variable overlaps */

undefined2 *
FUN_00406470(undefined2 *param_1,undefined8 *param_2,undefined2 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
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
  undefined2 *puVar13;
  undefined *puVar14;
  uint *puVar15;
  int *piVar16;
  undefined2 *puVar17;
  undefined2 *puVar18;
  ulong uVar19;
  undefined2 *puVar20;
  char *pcVar21;
  undefined2 *puVar22;
  undefined *puVar23;
  undefined2 *puVar24;
  char *pcVar25;
  char *pcVar26;
  undefined *puVar27;
  size_t sVar28;
  uint uVar29;
  long lVar30;
  undefined *puVar31;
  undefined8 *puVar32;
  bool bVar33;
  ushort in_FPUControlWord;
  float10 fVar34;
  undefined auStack_6f8 [4];
  uint local_6f4;
  undefined2 *local_6f0;
  undefined2 *local_6e8;
  undefined *local_6e0;
  undefined8 *local_6d8;
  undefined2 *local_6d0;
  undefined2 *local_6c8;
  long local_6c0;
  undefined8 local_6b8;
  undefined *local_6b0;
  undefined local_6a8 [4];
  undefined auStack_6a4 [12];
  undefined2 *local_698;
  undefined2 *local_690;
  int local_684;
  undefined4 local_680;
  uint local_67c;
  undefined local_678 [8];
  undefined2 *local_670;
  undefined2 auStack_668 [112];
  long local_588;
  undefined8 *local_580;
  long local_578;
  ulong local_570;
  undefined8 auStack_568 [78];
  undefined2 local_2f8 [356];
  
  local_6d8 = param_2;
  local_690 = param_1;
  iVar10 = FUN_004081b0(param_3,&local_588,local_678);
  if (iVar10 < 0) {
    return (undefined2 *)0x0;
  }
  iVar10 = FUN_00407f90(param_4,local_678);
  if (iVar10 < 0) {
    if (local_580 != auStack_568) {
      free(local_580);
    }
    if (local_670 != auStack_668) {
      free(local_670);
    }
    piVar16 = __errno_location();
    *piVar16 = 0x16;
    return (undefined2 *)0x0;
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
LAB_00406534:
      puVar31 = (undefined *)0x0;
      if (local_690 != (undefined2 *)0x0) {
        puVar31 = (undefined *)*local_6d8;
      }
      __n = (undefined *)0x0;
      local_6c0 = 0;
      puVar24 = (undefined2 *)*local_580;
      puVar20 = local_690;
      _local_6a8 = (int *)param_3;
      puVar32 = local_580;
      puVar14 = __n;
      if (puVar24 == param_3) goto LAB_004066e8;
      do {
        puVar24 = (undefined2 *)((long)puVar24 - (long)_local_6a8);
        __n = puVar14 + (long)puVar24;
        puVar13 = puVar20;
        if (CARRY8((ulong)puVar14,(ulong)puVar24)) {
          if (puVar31 != (undefined *)0xffffffffffffffff) goto LAB_00406a60;
          __n = (undefined *)0xffffffffffffffff;
        }
        else if (puVar31 < __n) {
          if (puVar31 == (undefined *)0x0) {
            if (__n < (undefined *)0xd) {
              puVar31 = (undefined *)0xc;
            }
            else {
LAB_0040667e:
              puVar31 = __n;
              if (__n == (undefined *)0xffffffffffffffff) goto LAB_00406a60;
            }
          }
          else {
            if ((long)puVar31 < 0) goto LAB_00406a60;
            puVar31 = (undefined *)((long)puVar31 * 2);
            if (puVar31 < __n) goto LAB_0040667e;
          }
          if ((puVar20 == (undefined2 *)0x0) || (puVar20 == local_690)) {
            local_6b8 = (undefined2 *)_local_6a8;
            _local_6a8 = (float10)CONCAT91(stack0xfffffffffffff959,puVar20 == local_690);
            local_698 = puVar24;
            *(undefined8 *)(puVar27 + -8) = 0x4065dc;
            puVar13 = (undefined2 *)malloc((size_t)puVar31);
            if (puVar13 == (undefined2 *)0x0) goto LAB_00406a60;
            puVar24 = local_698;
            _local_6a8 = (int *)local_6b8;
            if ((puVar14 != (undefined *)0x0) && (local_6a8[0] != '\0')) {
              _local_6a8 = (float10)CONCAT28(auStack_6a4._4_2_,local_6b8);
              *(undefined8 *)(puVar27 + -8) = 0x40662a;
              puVar13 = (undefined2 *)memcpy(puVar13,puVar20,(size_t)puVar14);
              puVar24 = local_698;
            }
          }
          else {
            local_698 = puVar24;
            *(undefined8 *)(puVar27 + -8) = 0x4066bf;
            puVar13 = (undefined2 *)realloc(puVar20,(size_t)puVar31);
            if (puVar13 == (undefined2 *)0x0) {
LAB_00406c75:
              *(undefined8 *)(puVar27 + -8) = 0x406c7a;
              piVar16 = __errno_location();
              _local_6a8 = (float10)CONCAT28(auStack_6a4._4_2_,piVar16);
              goto LAB_00406c88;
            }
            puVar24 = local_698;
          }
        }
        *(undefined8 *)(puVar27 + -8) = 0x4066e8;
        memcpy((undefined *)((long)puVar13 + (long)puVar14),_local_6a8,(size_t)puVar24);
        puVar20 = puVar13;
LAB_004066e8:
        do {
          if (local_588 == local_6c0) {
            puVar14 = __n + 1;
            puVar24 = puVar20;
            if ((undefined *)0xfffffffffffffffe < __n) {
              if (puVar31 == (undefined *)0xffffffffffffffff) goto LAB_00407872;
              goto LAB_00406a60;
            }
            if (puVar14 <= puVar31) goto LAB_00407872;
            if (puVar31 == (undefined *)0x0) {
              if (puVar14 < (undefined *)0xd) {
                puVar31 = (undefined *)0xc;
              }
              else {
LAB_00407e4f:
                puVar31 = puVar14;
                if (puVar14 == (undefined *)0xffffffffffffffff) goto LAB_00406a60;
              }
            }
            else {
              if ((long)puVar31 < 0) goto LAB_00406a60;
              puVar31 = (undefined *)((long)puVar31 * 2);
              if (puVar31 < puVar14) goto LAB_00407e4f;
            }
            bVar33 = puVar20 == local_690;
            if ((puVar20 == (undefined2 *)0x0) || (bVar33)) {
              *(undefined8 *)(puVar27 + -8) = 0x407e09;
              puVar24 = (undefined2 *)malloc((size_t)puVar31);
              if (puVar24 == (undefined2 *)0x0) goto LAB_00406a60;
              if ((__n != (undefined *)0x0) && (bVar33)) {
                *(undefined8 *)(puVar27 + -8) = 0x407e35;
                puVar24 = (undefined2 *)memcpy(puVar24,puVar20,(size_t)__n);
              }
            }
            else {
              *(undefined8 *)(puVar27 + -8) = 0x407866;
              puVar24 = (undefined2 *)realloc(puVar20,(size_t)puVar31);
              if (puVar24 == (undefined2 *)0x0) goto LAB_00406c75;
            }
LAB_00407872:
            *(undefined *)((long)puVar24 + (long)__n) = 0;
            if ((puVar14 < puVar31) && (puVar24 != local_690)) {
              *(undefined8 *)(puVar27 + -8) = 0x407890;
              puVar20 = (undefined2 *)realloc(puVar24,(size_t)puVar14);
              if (puVar20 != (undefined2 *)0x0) {
                puVar24 = puVar20;
              }
            }
            puVar31 = local_6e0;
            if (local_6e0 != (undefined *)0x0) {
              *(undefined8 *)(puVar27 + -8) = 0x4078ab;
              free(puVar31);
            }
            if (local_580 != auStack_568) {
              *(undefined8 *)(puVar27 + -8) = 0x4078c7;
              free(local_580);
            }
            if (local_670 != auStack_668) {
              *(undefined8 *)(puVar27 + -8) = 0x4078e3;
              free(local_670);
            }
            *local_6d8 = __n;
            return puVar24;
          }
          bVar8 = *(byte *)(puVar32 + 9);
          lVar30 = puVar32[10];
          if (bVar8 == 0x25) {
            if (lVar30 != -1) goto LAB_0040719c;
            puVar14 = __n + 1;
            puVar24 = puVar20;
            if (__n < (undefined *)0xffffffffffffffff) {
              if (puVar31 < puVar14) {
                if (puVar31 == (undefined *)0x0) {
                  if (puVar14 < (undefined *)0xd) {
                    puVar31 = (undefined *)0xc;
                  }
                  else {
LAB_00407412:
                    puVar31 = puVar14;
                    if (puVar14 == (undefined *)0xffffffffffffffff) goto LAB_00406a60;
                  }
                }
                else {
                  if ((long)puVar31 < 0) goto LAB_00406a60;
                  puVar31 = (undefined *)((long)puVar31 * 2);
                  if (puVar31 < puVar14) goto LAB_00407412;
                }
                if ((puVar20 == (undefined2 *)0x0) || (puVar20 == local_690)) {
                  local_698 = (undefined2 *)
                              ((ulong)local_698 & 0xffffffffffffff00 | (ulong)(puVar20 == local_690)
                              );
                  *(undefined8 *)(puVar27 + -8) = 0x40735e;
                  puVar24 = (undefined2 *)malloc((size_t)puVar31);
                  if (puVar24 == (undefined2 *)0x0) goto LAB_00406a60;
                  if ((__n != (undefined *)0x0) && ((char)local_698 != '\0')) {
                    *(undefined8 *)(puVar27 + -8) = 0x407390;
                    puVar24 = (undefined2 *)memcpy(puVar24,puVar20,(size_t)__n);
                  }
                }
                else {
                  *(undefined8 *)(puVar27 + -8) = 0x406b56;
                  puVar24 = (undefined2 *)realloc(puVar20,(size_t)puVar31);
                  if (puVar24 == (undefined2 *)0x0) goto LAB_00406c75;
                }
              }
            }
            else {
              if (puVar31 != (undefined *)0xffffffffffffffff) goto LAB_00406a60;
              puVar14 = (undefined *)0xffffffffffffffff;
            }
            *(undefined *)((long)puVar24 + (long)__n) = 0x25;
            puVar20 = puVar24;
            __n = puVar14;
            goto LAB_00406b67;
          }
          if (lVar30 == -1) goto LAB_0040719c;
          puVar15 = (uint *)(local_670 + lVar30 * 0x10);
          uVar4 = *puVar15;
          local_698 = (undefined2 *)((ulong)local_698 & 0xffffffff00000000 | (ulong)uVar4);
          if (bVar8 == 0x6e) {
            switch(uVar4) {
            case 0x12:
              **(undefined **)(puVar15 + 4) = (char)__n;
              break;
            case 0x13:
              **(undefined2 **)(puVar15 + 4) = (short)__n;
              break;
            case 0x14:
              **(undefined4 **)(puVar15 + 4) = (int)__n;
              break;
            case 0x15:
            case 0x16:
              **(undefined8 **)(puVar15 + 4) = __n;
              break;
            default:
switchD_00406bcc_caseD_5:
                    /* WARNING: Subroutine does not return */
              *(undefined8 *)(puVar27 + -8) = 0x4016f8;
              abort();
            }
          }
          else {
            bVar8 = bVar8 & 0xdf;
            if (((((byte)(bVar8 + 0xbb) < 3) || (bVar8 == 0x41)) && (uVar4 == 0xc)) &&
               (fVar34 = *(float10 *)(puVar15 + 4), fVar34 == fVar34 + fVar34)) {
              pcVar21 = (char *)puVar32[4];
              local_6b8._0_4_ = *(uint *)(puVar32 + 2);
              if ((char *)puVar32[3] == pcVar21) {
                puVar24 = (undefined2 *)0x0;
              }
              else {
                puVar13 = (undefined2 *)puVar32[5];
                if (puVar13 == (undefined2 *)0xffffffffffffffff) {
                  puVar24 = (undefined2 *)0x0;
                  local_698 = puVar13;
                  pcVar25 = (char *)puVar32[3];
                  do {
                    pcVar26 = pcVar25 + 1;
                    uVar11 = 0xffffffffffffffff;
                    if (puVar24 < (undefined2 *)0x199999999999999a) {
                      uVar11 = (long)puVar24 * 10;
                    }
                    puVar24 = (undefined2 *)((long)(*pcVar25 + -0x30) + uVar11);
                    pcVar6 = pcVar26;
                    if (CARRY8((long)(*pcVar25 + -0x30),uVar11)) {
                      do {
                        puVar24 = local_698;
                        if (pcVar21 == pcVar6) goto LAB_004069f0;
                        pcVar26 = pcVar6 + 1;
                        cVar9 = *pcVar6;
                        pcVar6 = pcVar26;
                      } while (cVar9 != '0');
                      puVar24 = (undefined2 *)0xffffffffffffffff;
                    }
                    pcVar25 = pcVar26;
                  } while (pcVar21 != pcVar26);
                }
                else {
                  if (*(int *)(local_670 + (long)puVar13 * 0x10) != 5) goto LAB_0040719c;
                  iVar10 = *(int *)((long)(local_670 + (long)puVar13 * 0x10) + 0x10);
                  puVar24 = (undefined2 *)(long)iVar10;
                  if (iVar10 < 0) {
                    local_6b8._0_4_ = (uint)local_6b8 | 2;
                    puVar24 = (undefined2 *)-(long)(undefined2 *)(long)iVar10;
                  }
                }
              }
LAB_004069f0:
              pcVar21 = (char *)puVar32[7];
              if ((char *)puVar32[6] == pcVar21) {
LAB_004070a0:
                puVar18 = (undefined2 *)0xc;
                if (bVar8 != 0x41) {
                  puVar18 = (undefined2 *)0x12;
                }
                puVar13 = (undefined2 *)0x0;
                if (bVar8 != 0x41) {
                  puVar13 = (undefined2 *)0x6;
                }
              }
              else {
                if (puVar32[8] == -1) {
                  pcVar25 = (char *)puVar32[6] + 1;
                  puVar13 = (undefined2 *)0x0;
                  if (pcVar21 != pcVar25) {
                    do {
                      pcVar26 = pcVar25 + 1;
                      uVar11 = 0xffffffffffffffff;
                      if (puVar13 < (undefined2 *)0x199999999999999a) {
                        uVar11 = (long)puVar13 * 10;
                      }
                      puVar13 = (undefined2 *)((long)(*pcVar25 + -0x30) + uVar11);
                      pcVar6 = pcVar26;
                      if (CARRY8((long)(*pcVar25 + -0x30),uVar11)) {
                        do {
                          if (pcVar21 == pcVar6) goto LAB_00406a60;
                          pcVar26 = pcVar6 + 1;
                          cVar9 = *pcVar6;
                          pcVar6 = pcVar26;
                        } while (cVar9 != '0');
                        puVar13 = (undefined2 *)0xffffffffffffffff;
                      }
                      pcVar25 = pcVar26;
                    } while (pcVar21 != pcVar26);
                    goto LAB_00406a2c;
                  }
                }
                else {
                  if (*(int *)(local_670 + puVar32[8] * 0x10) != 5) goto LAB_0040719c;
                  iVar10 = *(int *)((long)(local_670 + puVar32[8] * 0x10) + 0x10);
                  puVar13 = (undefined2 *)(long)iVar10;
                  if (iVar10 < 0) goto LAB_004070a0;
LAB_00406a2c:
                  if (puVar13 != (undefined2 *)0x0) {
                    puVar18 = puVar13 + 6;
                    if (puVar13 < (undefined2 *)0xfffffffffffffff4) goto LAB_004070be;
                    goto LAB_00406a60;
                  }
                }
                puVar18 = (undefined2 *)0xc;
              }
LAB_004070be:
              if (puVar18 <= puVar24) {
                puVar18 = puVar24;
              }
              puVar17 = (undefined2 *)((long)puVar18 + 1);
              local_698 = puVar17;
              if (puVar18 == (undefined2 *)0xffffffffffffffff) goto LAB_00406a60;
              if (puVar17 < (undefined2 *)0x2bd) {
                puVar18 = local_2f8;
              }
              else {
                local_6d0 = puVar24;
                local_6c8 = puVar13;
                local_6b8 = (undefined2 *)
                            ((ulong)local_6b8 & 0xffffffff00000000 | (ulong)(uint)local_6b8);
                _local_6a8 = fVar34;
                if (puVar17 == (undefined2 *)0xffffffffffffffff) goto LAB_00406a60;
                *(undefined8 *)(puVar27 + -8) = 0x407112;
                puVar18 = (undefined2 *)malloc((size_t)puVar17);
                puVar13 = local_6c8;
                puVar24 = local_6d0;
                fVar34 = _local_6a8;
                if (puVar18 == (undefined2 *)0x0) goto LAB_00406a60;
              }
              uVar4 = local_680 & 0xffff0000;
              uVar29 = (uint)in_FPUControlWord;
              local_680 = uVar4 | uVar29;
              uVar7 = local_680;
              local_680 = local_680 | 0x300;
              if ((float10)0 <= fVar34) {
                if (((uint)local_6b8 & 4) == 0) {
                  puVar17 = puVar18;
                  if (((uint)local_6b8 & 8) != 0) {
                    puVar17 = (undefined2 *)((long)puVar18 + 1);
                    *(undefined *)puVar18 = 0x20;
                  }
                }
                else {
                  *(undefined *)puVar18 = 0x2b;
                  puVar17 = (undefined2 *)((long)puVar18 + 1);
                }
              }
              else {
                *(undefined *)puVar18 = 0x2d;
                fVar34 = -fVar34;
                puVar17 = (undefined2 *)((long)puVar18 + 1);
              }
              local_680._2_2_ = (undefined2)(uVar4 >> 0x10);
              if (fVar34 <= (float10)0) {
                if (fVar34 != (float10)0) goto LAB_0040719c;
                bVar8 = *(byte *)(puVar32 + 9) & 0xdf;
                if (bVar8 == 0x46) {
                  *(undefined *)puVar17 = 0x30;
                  if ((((uint)local_6b8 & 0x10) == 0) && (puVar13 == (undefined2 *)0x0)) {
LAB_004075e7:
                    puVar13 = (undefined2 *)((long)puVar17 + 1);
                  }
                  else {
                    local_6f0 = (undefined2 *)
                                ((ulong)local_6f0 & 0xffffffff00000000 |
                                (ulong)uVar7 & 0xffffffff0000ffff);
                    local_6e8 = puVar24;
                    local_6d0 = puVar18;
                    local_6c8 = puVar13;
                    local_6b8 = (undefined2 *)
                                ((ulong)local_6b8 & 0xffffffff00000000 | (ulong)(uint)local_6b8);
                    _local_6a8 = (float10)CONCAT28(auStack_6a4._4_2_,puVar17 + 1);
                    *(undefined8 *)(puVar27 + -8) = 0x407b21;
                    pcVar21 = nl_langinfo(0x10000);
                    cVar9 = *pcVar21;
                    in_FPUControlWord = (ushort)local_6f0;
                    if (cVar9 == '\0') {
                      cVar9 = '.';
                    }
                    *(char *)((long)puVar17 + 1) = cVar9;
                    puVar18 = local_6d0;
                    puVar13 = (undefined2 *)_local_6a8;
                    puVar24 = local_6e8;
                    if (local_6c8 != (undefined2 *)0x0) {
                      do {
                        puVar22 = (undefined2 *)((long)puVar13 + 1);
                        *(undefined *)puVar13 = 0x30;
                        puVar13 = puVar22;
                      } while (puVar22 != (undefined2 *)((long)(puVar17 + 1) + (long)local_6c8));
                      puVar13 = (undefined2 *)((long)_local_6a8 + (long)local_6c8);
                    }
                  }
                }
                else if (bVar8 == 0x45) {
                  *(undefined *)puVar17 = 0x30;
                  if ((((uint)local_6b8 & 0x10) != 0) ||
                     (_local_6a8 = (int *)((long)puVar17 + 1), puVar13 != (undefined2 *)0x0)) {
                    local_6f0 = (undefined2 *)
                                ((ulong)local_6f0 & 0xffffffff00000000 |
                                (ulong)uVar7 & 0xffffffff0000ffff);
                    local_6e8 = puVar24;
                    local_6d0 = puVar18;
                    local_6c8 = puVar13;
                    local_6b8 = (undefined2 *)
                                ((ulong)local_6b8 & 0xffffffff00000000 | (ulong)(uint)local_6b8);
                    _local_6a8 = (float10)CONCAT28(auStack_6a4._4_2_,puVar17 + 1);
                    *(undefined8 *)(puVar27 + -8) = 0x407d7f;
                    pcVar21 = nl_langinfo(0x10000);
                    cVar9 = *pcVar21;
                    if (cVar9 == '\0') {
                      cVar9 = '.';
                    }
                    *(char *)((long)puVar17 + 1) = cVar9;
                    puVar18 = local_6d0;
                    puVar24 = local_6e8;
                    in_FPUControlWord = (ushort)local_6f0;
                    if (local_6c8 != (undefined2 *)0x0) {
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
                  puVar13 = (undefined2 *)((long)_local_6a8 + 4);
                  *(undefined *)((long)_local_6a8 + 3) = 0x30;
                  *(undefined *)_local_6a8 = uVar3;
                  *(undefined2 *)((long)_local_6a8 + 1) = 0x302b;
                }
                else if (bVar8 == 0x47) {
                  *(undefined *)puVar17 = 0x30;
                  if (((uint)local_6b8 & 0x10) == 0) goto LAB_004075e7;
                  if (puVar13 == (undefined2 *)0x0) {
                    local_6e8 = (undefined2 *)
                                ((ulong)local_6e8 & 0xffffffff00000000 |
                                (ulong)uVar7 & 0xffffffff0000ffff);
                    local_6d0 = puVar24;
                    local_6c8 = puVar17 + 1;
                    local_6b8 = puVar18;
                    _local_6a8 = (float10)CONCAT64(auStack_6a4._0_6_,(uint)local_6b8);
                    *(undefined8 *)(puVar27 + -8) = 0x407f37;
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
                    local_6c8 = (undefined2 *)
                                ((ulong)local_6c8 & 0xffffffff00000000 | (ulong)(uint)local_6b8);
                    local_6b8 = puVar13;
                    _local_6a8 = (float10)CONCAT28(auStack_6a4._4_2_,
                                                   (undefined *)((long)puVar13 + -1));
                    *(undefined8 *)(puVar27 + -8) = 0x407a4d;
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
                        puVar22 = (undefined2 *)((long)puVar13 + 1);
                        *(undefined *)puVar13 = 0x30;
                        puVar13 = puVar22;
                      } while (puVar22 !=
                               (undefined2 *)((undefined *)((long)puVar17 + 1) + (long)local_6b8));
                      puVar13 = (undefined2 *)((long)local_6e8 + (long)_local_6a8);
                    }
                  }
                }
                else {
                  if (bVar8 != 0x41) goto LAB_0040719c;
                  *(undefined *)puVar17 = 0x30;
                  _local_6a8 = (float10)CONCAT28(auStack_6a4._4_2_,puVar17 + 1);
                  cVar9 = *(char *)(puVar32 + 9);
                  *(undefined *)(puVar17 + 1) = 0x30;
                  *(char *)((long)puVar17 + 1) = cVar9 + '\x17';
                  if ((((uint)local_6b8 & 0x10) != 0) ||
                     (puVar22 = (undefined2 *)((long)puVar17 + 3), puVar13 != (undefined2 *)0x0)) {
                    local_6f4 = uVar29;
                    local_6f0 = puVar24;
                    local_6e8 = puVar18;
                    local_6d0 = puVar13;
                    local_6c8 = (undefined2 *)
                                ((ulong)local_6c8 & 0xffffffff00000000 | (ulong)(uint)local_6b8);
                    local_6b8 = puVar17 + 2;
                    *(undefined8 *)(puVar27 + -8) = 0x407e99;
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
                    if (local_6d0 != (undefined2 *)0x0) {
                      puVar13 = local_6b8;
                      do {
                        puVar22 = (undefined2 *)((long)puVar13 + 1);
                        *(undefined *)puVar13 = 0x30;
                        puVar13 = puVar22;
                      } while (puVar22 != (undefined2 *)((long)(puVar17 + 2) + (long)local_6d0));
                      puVar22 = (undefined2 *)((long)local_6b8 + (long)local_6d0);
                    }
                  }
                  in_FPUControlWord = (ushort)uVar29;
                  cVar9 = *(char *)(puVar32 + 9);
                  puVar13 = (undefined2 *)((long)puVar22 + 3);
                  *(undefined2 *)((long)puVar22 + 1) = 0x302b;
                  *(char *)puVar22 = cVar9 + '\x0f';
                  puVar17 = (undefined2 *)_local_6a8;
                }
              }
              else {
                if (fVar34 + fVar34 != fVar34) goto LAB_0040719c;
                puVar13 = (undefined2 *)((long)puVar17 + 3);
                if ((byte)(*(char *)(puVar32 + 9) + 0xbfU) < 0x1a) {
                  *(undefined *)(puVar17 + 1) = 0x46;
                  *puVar17 = 0x4e49;
                  puVar17 = (undefined2 *)0x0;
                }
                else {
                  *(undefined *)(puVar17 + 1) = 0x66;
                  *puVar17 = 0x6e69;
                  puVar17 = (undefined2 *)0x0;
                }
              }
              local_680 = CONCAT22(local_680._2_2_,in_FPUControlWord);
              _local_6a8 = (int *)((long)puVar13 - (long)puVar18);
              if (_local_6a8 < puVar24) {
                lVar30 = (long)puVar24 - (long)_local_6a8;
                puVar24 = (undefined2 *)((long)puVar13 + lVar30);
                _local_6a8 = (int *)((long)puVar24 - (long)puVar18);
                if (((uint)local_6b8 & 2) == 0) {
                  if ((((uint)local_6b8 & 0x20) == 0) || (puVar17 == (undefined2 *)0x0)) {
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
                        puVar13 = (undefined2 *)((long)puVar24 + 1);
                        *(undefined *)puVar24 = 0x20;
                        puVar24 = puVar13;
                      } while (puVar13 != (undefined2 *)(lVar30 + (long)puVar17));
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
                        puVar13 = (undefined2 *)((long)puVar24 + 1);
                        *(undefined *)puVar24 = 0x30;
                        puVar24 = puVar13;
                      } while (puVar13 != (undefined2 *)(lVar30 + (long)puVar22));
                    }
                  }
                }
                else if (lVar30 != 0) {
                  do {
                    puVar17 = (undefined2 *)((long)puVar13 + 1);
                    *(undefined *)puVar13 = 0x20;
                    puVar13 = puVar17;
                  } while (puVar24 != puVar17);
                }
              }
              if (local_698 <= _local_6a8) {
LAB_0040719c:
                    /* WARNING: Subroutine does not return */
                *(undefined **)(puVar27 + -8) = &UNK_004071a1;
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
LAB_00407c9a:
                        puVar31 = puVar14;
                        if (puVar14 == (undefined *)0xffffffffffffffff) goto LAB_00406a60;
                      }
                    }
                    else {
                      if ((long)puVar31 < 0) goto LAB_00406a60;
                      puVar31 = (undefined *)((long)puVar31 * 2);
                      if (puVar31 < puVar14) goto LAB_00407c9a;
                    }
                    if ((puVar20 == (undefined2 *)0x0) || (puVar20 == local_690)) {
                      local_6b8 = (undefined2 *)
                                  ((ulong)local_6b8 & 0xffffffffffffff00 |
                                  (ulong)(puVar20 == local_690));
                      local_698 = puVar18;
                      *(undefined8 *)(puVar27 + -8) = 0x407987;
                      puVar24 = (undefined2 *)malloc((size_t)puVar31);
                      if (puVar24 == (undefined2 *)0x0) goto LAB_00406a60;
                      puVar18 = local_698;
                      if ((__n != (undefined *)0x0) && ((char)local_6b8 != '\0')) {
                        *(undefined8 *)(puVar27 + -8) = 0x4079d5;
                        puVar24 = (undefined2 *)memcpy(puVar24,puVar20,(size_t)__n);
                        puVar18 = local_698;
                      }
                    }
                    else {
                      local_698 = puVar18;
                      *(undefined8 *)(puVar27 + -8) = 0x407702;
                      puVar24 = (undefined2 *)realloc(puVar20,(size_t)puVar31);
                      if (puVar24 == (undefined2 *)0x0) goto LAB_00406a60;
                      puVar18 = local_698;
                    }
                  }
                }
                else if (puVar31 != (undefined *)0xffffffffffffffff) goto LAB_00406a60;
              }
              local_698 = puVar18;
              *(undefined8 *)(puVar27 + -8) = 0x407736;
              memcpy((undefined *)((long)puVar24 + (long)__n),puVar18,(size_t)_local_6a8);
              puVar13 = local_698;
              puVar20 = puVar24;
              __n = puVar14;
              if (local_698 != local_2f8) {
                *(undefined8 *)(puVar27 + -8) = 0x407755;
                free(puVar13);
              }
            }
            else {
              uVar4 = *(uint *)(puVar32 + 2);
              puVar24 = (undefined2 *)(local_6b0 + 1);
              *local_6b0 = 0x25;
              if ((uVar4 & 1) != 0) {
                local_6b0[1] = 0x27;
                puVar24 = (undefined2 *)(local_6b0 + 2);
              }
              if ((uVar4 & 2) != 0) {
                *(undefined *)puVar24 = 0x2d;
                puVar24 = (undefined2 *)((long)puVar24 + 1);
              }
              if ((uVar4 & 4) != 0) {
                *(undefined *)puVar24 = 0x2b;
                puVar24 = (undefined2 *)((long)puVar24 + 1);
              }
              if ((uVar4 & 8) != 0) {
                *(undefined *)puVar24 = 0x20;
                puVar24 = (undefined2 *)((long)puVar24 + 1);
              }
              if ((uVar4 & 0x10) != 0) {
                *(undefined *)puVar24 = 0x23;
                puVar24 = (undefined2 *)((long)puVar24 + 1);
              }
              if ((uVar4 & 0x40) != 0) {
                *(undefined *)puVar24 = 0x49;
                puVar24 = (undefined2 *)((long)puVar24 + 1);
              }
              if ((uVar4 & 0x20) != 0) {
                *(undefined *)puVar24 = 0x30;
                puVar24 = (undefined2 *)((long)puVar24 + 1);
              }
              pvVar5 = (void *)puVar32[3];
              puVar13 = local_670;
              if (pvVar5 != (void *)puVar32[4]) {
                local_6b8 = local_670;
                sVar28 = (long)(void *)puVar32[4] - (long)pvVar5;
                _local_6a8 = (float10)CONCAT28(auStack_6a4._4_2_,sVar28);
                *(undefined8 *)(puVar27 + -8) = 0x406809;
                memcpy(puVar24,pvVar5,sVar28);
                puVar24 = (undefined2 *)((long)puVar24 + (long)_local_6a8);
                puVar13 = local_6b8;
              }
              pvVar5 = (void *)puVar32[6];
              if (pvVar5 != (void *)puVar32[7]) {
                local_6b8 = puVar13;
                sVar28 = (long)(void *)puVar32[7] - (long)pvVar5;
                _local_6a8 = (float10)CONCAT28(auStack_6a4._4_2_,sVar28);
                *(undefined8 *)(puVar27 + -8) = 0x406846;
                memcpy(puVar24,pvVar5,sVar28);
                puVar24 = (undefined2 *)((long)puVar24 + (long)_local_6a8);
                puVar13 = local_6b8;
              }
              if ((uint)local_698 < 0x11) {
                uVar11 = 1L << ((byte)local_698 & 0x3f);
                if ((uVar11 & 0x14180) == 0) {
                  if ((uVar11 & 0x1000) == 0) {
                    if ((uVar11 & 0x600) != 0) {
                      *(undefined *)puVar24 = 0x6c;
                      puVar24 = (undefined2 *)((long)puVar24 + 1);
                      goto LAB_00406c68;
                    }
                  }
                  else {
                    *(undefined *)puVar24 = 0x4c;
                    puVar24 = (undefined2 *)((long)puVar24 + 1);
                  }
                }
                else {
LAB_00406c68:
                  *(undefined *)puVar24 = 0x6c;
                  puVar24 = (undefined2 *)((long)puVar24 + 1);
                }
              }
              uVar3 = *(undefined *)(puVar32 + 9);
              *(undefined *)((long)puVar24 + 1) = 0;
              *(undefined *)puVar24 = uVar3;
              if (puVar32[5] == -1) {
                local_6b8 = (undefined2 *)((ulong)local_6b8._4_4_ << 0x20);
              }
              else {
                if (*(int *)(puVar13 + puVar32[5] * 0x10) != 5) goto LAB_0040719c;
                local_6b8 = (undefined2 *)CONCAT44(local_6b8._4_4_,1);
                local_680 = *(uint *)((long)(puVar13 + puVar32[5] * 0x10) + 0x10);
              }
              if (puVar32[8] != -1) {
                if (*(int *)(puVar13 + puVar32[8] * 0x10) != 5) goto LAB_0040719c;
                (&local_680)[(ulong)local_6b8 & 0xffffffff] =
                     *(int *)((long)(puVar13 + puVar32[8] * 0x10) + 0x10);
                local_6b8 = (undefined2 *)
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
LAB_00407052:
                      puVar31 = puVar14;
                      if (puVar14 == (undefined *)0xffffffffffffffff) goto LAB_00406a60;
                    }
                  }
                  else {
                    if ((long)puVar31 < 0) goto LAB_00406a60;
                    puVar31 = (undefined *)((long)puVar31 * 2);
                    if (puVar31 < puVar14) goto LAB_00407052;
                  }
                  if ((puVar20 == (undefined2 *)0x0) || (puVar20 == local_690)) {
                    _local_6a8 = (float10)CONCAT91(stack0xfffffffffffff959,puVar20 == local_690);
                    *(undefined8 *)(puVar27 + -8) = 0x4072fe;
                    puVar13 = (undefined2 *)malloc((size_t)puVar31);
                    if (puVar13 == (undefined2 *)0x0) goto LAB_00406a60;
                    if ((__n != (undefined *)0x0) && (local_6a8[0] != '\0')) {
                      *(undefined8 *)(puVar27 + -8) = 0x407330;
                      puVar13 = (undefined2 *)memcpy(puVar13,puVar20,(size_t)__n);
                    }
                  }
                  else {
                    *(undefined8 *)(puVar27 + -8) = 0x406958;
                    puVar13 = (undefined2 *)realloc(puVar20,(size_t)puVar31);
                    if (puVar13 == (undefined2 *)0x0) goto LAB_00406a60;
                  }
                }
              }
              else if (puVar31 != (undefined *)0xffffffffffffffff) goto LAB_00406a60;
              *(undefined *)((long)puVar13 + (long)__n) = 0;
              local_6c8 = puVar13;
              *(undefined8 *)(puVar27 + -8) = 0x406975;
              puVar15 = (uint *)__errno_location();
              puVar13 = local_6c8;
              local_6c8 = puVar24;
              _local_6a8 = (float10)CONCAT28(auStack_6a4._4_2_,puVar15);
              local_6e8 = (undefined2 *)((ulong)local_6e8 & 0xffffffff00000000 | (ulong)*puVar15);
LAB_00406998:
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
                goto switchD_00406bcc_caseD_5;
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
                  goto LAB_00407272;
                }
                if ((uint)local_6b8 != 2) {
                  *(int **)(puVar27 + -0x10) = &local_684;
LAB_00406cda:
                  puVar14 = local_6b0;
                  *(undefined8 *)(puVar27 + -0x18) = 0x406cf7;
                  iVar10 = __snprintf_chk((undefined *)((long)puVar13 + (long)__n),uVar11,1,
                                          0xffffffffffffffff,puVar14,piVar16);
                  goto LAB_00406d00;
                }
                *(int **)(puVar27 + -0x10) = &local_684;
                *(int **)(puVar27 + -0x18) = piVar16;
                goto LAB_00407226;
              case 0xb:
                local_6d0 = puVar13;
                uVar1 = *(undefined8 *)(local_670 + puVar32[10] * 0x10 + 8);
                if ((uint)local_6b8 == 1) {
                  *(int **)(puVar27 + -0x10) = &local_684;
                }
                else {
                  if ((uint)local_6b8 != 2) {
                    *(undefined8 *)(puVar27 + -8) = 0x406fce;
                    iVar10 = __snprintf_chk(uVar1,(undefined *)((long)puVar13 + (long)__n),uVar11,1,
                                            0xffffffffffffffff,puVar14,&local_684);
                    goto LAB_00406d00;
                  }
                  *(int **)(puVar27 + -8) = &local_684;
                  *(ulong *)(puVar27 + -0x10) = (ulong)local_67c;
                }
                uVar4 = local_680;
                puVar14 = local_6b0;
                *(undefined8 *)(puVar27 + -0x18) = 0x40746e;
                iVar10 = __snprintf_chk(uVar1,(undefined *)((long)puVar13 + (long)__n),uVar11,1,
                                        0xffffffffffffffff,puVar14,uVar4);
                goto LAB_00406d00;
              case 0xc:
                local_6d0 = puVar13;
                Var2 = *(unkbyte10 *)(local_670 + puVar32[10] * 0x10 + 8);
                if ((uint)local_6b8 != 1) {
                  if ((uint)local_6b8 != 2) {
                    piVar16 = &local_684;
                    *(unkbyte10 *)(puVar27 + -0x10) = Var2;
                    goto LAB_00406cda;
                  }
                  *(int **)(puVar27 + -0x10) = &local_684;
                  uVar19 = (ulong)local_67c;
                  *(unkbyte10 *)(puVar27 + -0x20) = Var2;
                  *(ulong *)(puVar27 + -0x30) = uVar19;
                  *(undefined8 *)(puVar27 + -0x38) = 0x4074cf;
                  iVar10 = __snprintf_chk((undefined *)((long)puVar13 + (long)__n),uVar11,1,
                                          0xffffffffffffffff,puVar14,uVar4);
                  goto LAB_00406d00;
                }
                *(int **)(puVar27 + -0x10) = &local_684;
                *(unkbyte10 *)(puVar27 + -0x20) = Var2;
                goto LAB_0040722d;
              }
              local_6d0 = puVar13;
              if ((uint)local_6b8 == 1) {
                *(int **)(puVar27 + -8) = &local_684;
                *(ulong *)(puVar27 + -0x10) = uVar19;
LAB_00407272:
                uVar19 = (ulong)local_680;
LAB_00406e1a:
                puVar14 = local_6b0;
                *(undefined8 *)(puVar27 + -0x18) = 0x406e37;
                iVar10 = __snprintf_chk((undefined *)((long)puVar13 + (long)__n),uVar11,1,
                                        0xffffffffffffffff,puVar14,uVar19);
                if (-1 < local_684) goto LAB_00406d0e;
LAB_00406e4e:
                puVar24 = local_6d0;
                if (*(char *)((long)local_6c8 + 1) == '\0') {
                  if (iVar10 < 0) {
                    iVar10 = *_local_6a8;
                    if ((iVar10 == 0) && (iVar10 = 0x54, (*(byte *)(puVar32 + 9) & 0xef) != 99)) {
                      iVar10 = 0x16;
                    }
                    if ((local_6d0 != local_690) && (local_6d0 != (undefined2 *)0x0)) {
                      *(undefined8 *)(puVar27 + -8) = 0x406ea4;
                      free(puVar24);
                    }
                    puVar31 = local_6e0;
                    if (local_6e0 != (undefined *)0x0) {
                      *(undefined8 *)(puVar27 + -8) = 0x406eb8;
                      free(puVar31);
                    }
                    if (local_580 != auStack_568) {
                      *(undefined8 *)(puVar27 + -8) = 0x406ed4;
                      free(local_580);
                    }
                    if (local_670 != auStack_668) {
                      *(undefined8 *)(puVar27 + -8) = 0x406ef0;
                      free(local_670);
                    }
                    *_local_6a8 = iVar10;
                    return (undefined2 *)0x0;
                  }
                  goto LAB_00406d28;
                }
                *(undefined *)((long)local_6c8 + 1) = 0;
                puVar13 = local_6d0;
                goto LAB_00406998;
              }
              if ((uint)local_6b8 != 2) {
                *(int **)(puVar27 + -0x10) = &local_684;
                goto LAB_00406e1a;
              }
              *(int **)(puVar27 + -0x10) = &local_684;
              *(ulong *)(puVar27 + -0x18) = uVar19;
LAB_00407226:
              *(ulong *)(puVar27 + -0x20) = (ulong)local_67c;
LAB_0040722d:
              uVar4 = local_680;
              puVar14 = local_6b0;
              *(undefined8 *)(puVar27 + -0x28) = 0x407251;
              iVar10 = __snprintf_chk((undefined *)((long)puVar13 + (long)__n),uVar11,1,
                                      0xffffffffffffffff,puVar14,uVar4);
LAB_00406d00:
              if (local_684 < 0) goto LAB_00406e4e;
LAB_00406d0e:
              if (((ulong)(long)local_684 < uVar11) &&
                 (((undefined *)((long)local_684 + (long)local_6d0))[(long)__n] != '\0'))
              goto LAB_0040719c;
              if (local_684 < iVar10) {
LAB_00406d28:
                local_684 = iVar10;
              }
              puVar24 = local_6d0;
              puVar20 = local_6d0;
              if (uVar11 <= local_684 + 1) {
                if (0x7ffffffe < uVar12) {
                  if ((local_6d0 != local_690) && (local_6d0 != (undefined2 *)0x0)) {
                    *(undefined8 *)(puVar27 + -8) = 0x407536;
                    free(puVar24);
                  }
                  puVar31 = local_6e0;
                  if (local_6e0 != (undefined *)0x0) {
                    *(undefined8 *)(puVar27 + -8) = 0x40754a;
                    free(puVar31);
                  }
                  if (local_580 != auStack_568) {
                    *(undefined8 *)(puVar27 + -8) = 0x407566;
                    free(local_580);
                  }
                  if (local_670 != auStack_668) {
                    *(undefined8 *)(puVar27 + -8) = 0x407582;
                    free(local_670);
                  }
                  *_local_6a8 = 0x4b;
                  return (undefined2 *)0x0;
                }
                puVar13 = local_6d0;
                if ((long)puVar31 < 0) {
                  if (puVar31 != (undefined *)0xffffffffffffffff) goto LAB_00406a6f;
                }
                else {
                  if (CARRY8((ulong)(local_684 + 2),(ulong)__n) != false) goto LAB_00406a6f;
                  puVar14 = __n + (local_684 + 2);
                  if (__n + (local_684 + 2) <= (undefined *)((long)puVar31 * 2)) {
                    puVar14 = (undefined *)((long)puVar31 * 2);
                  }
                  if (puVar31 < puVar14) {
                    puVar31 = (undefined *)((long)puVar31 * 2);
                    if ((puVar31 < puVar14) &&
                       (puVar31 = puVar14, puVar14 == (undefined *)0xffffffffffffffff))
                    goto LAB_00406a6f;
                    bVar33 = local_6d0 == local_690;
                    if ((local_6d0 == (undefined2 *)0x0) || (bVar33)) {
                      *(undefined8 *)(puVar27 + -8) = 0x4071cf;
                      puVar13 = (undefined2 *)malloc((size_t)puVar31);
                      puVar24 = local_6d0;
                      puVar20 = local_6d0;
                      if (puVar13 == (undefined2 *)0x0) goto LAB_00406a6f;
                      if ((__n != (undefined *)0x0) && (bVar33)) {
                        *(undefined8 *)(puVar27 + -8) = 0x4071fd;
                        puVar13 = (undefined2 *)memcpy(puVar13,puVar24,(size_t)__n);
                      }
                    }
                    else {
                      *(undefined8 *)(puVar27 + -8) = 0x406dbd;
                      puVar13 = (undefined2 *)realloc(puVar24,(size_t)puVar31);
                      puVar20 = local_6d0;
                      if (puVar13 == (undefined2 *)0x0) goto LAB_00406a6f;
                    }
                  }
                }
                goto LAB_00406998;
              }
              __n = __n + local_684;
              *_local_6a8 = local_6e8._0_4_;
            }
          }
LAB_00406b67:
          _local_6a8 = (int *)puVar32[1];
          puVar32 = puVar32 + 0xb;
          puVar24 = (undefined2 *)*puVar32;
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
        goto LAB_00406534;
      }
    }
  }
  goto LAB_00406b90;
LAB_00406a60:
  *(undefined8 *)(puVar27 + -8) = 0x406a65;
  piVar16 = __errno_location();
  _local_6a8 = (float10)CONCAT28(auStack_6a4._4_2_,piVar16);
LAB_00406a6f:
  if ((puVar20 != local_690) && (puVar20 != (undefined2 *)0x0)) {
LAB_00406c88:
    *(undefined8 *)(puVar27 + -8) = 0x406c90;
    free(puVar20);
  }
  puVar31 = local_6e0;
  if (local_6e0 != (undefined *)0x0) {
    *(undefined8 *)(puVar27 + -8) = 0x406a99;
    free(puVar31);
    goto LAB_00406a99;
  }
LAB_00406b90:
  *(undefined8 *)(puVar27 + -8) = 0x406b95;
  piVar16 = __errno_location();
  _local_6a8 = (float10)CONCAT28(auStack_6a4._4_2_,piVar16);
LAB_00406a99:
  if (local_580 != auStack_568) {
    *(undefined8 *)(puVar27 + -8) = 0x406ab5;
    free(local_580);
  }
  if (local_670 != auStack_668) {
    *(undefined8 *)(puVar27 + -8) = 0x406ad1;
    free(local_670);
  }
  *_local_6a8 = 0xc;
  return (undefined2 *)0x0;
}


undefined8 FUN_00407f90(uint *param_1,ulong *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  unkbyte10 *pVar3;
  undefined *puVar4;
  char *pcVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  char **ppcVar9;
  
  puVar2 = (undefined4 *)param_2[1];
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
          puVar8 = (undefined4 *)((ulong)uVar1 + *(long *)(param_1 + 4));
          *param_1 = uVar1 + 8;
        }
        else {
          puVar8 = *(undefined4 **)(param_1 + 2);
          *(undefined4 **)(param_1 + 2) = puVar8 + 2;
        }
        *(char *)(puVar2 + 4) = (char)*puVar8;
        break;
      case 3:
      case 4:
        uVar1 = *param_1;
        if (uVar1 < 0x30) {
          puVar8 = (undefined4 *)((ulong)uVar1 + *(long *)(param_1 + 4));
          *param_1 = uVar1 + 8;
        }
        else {
          puVar8 = *(undefined4 **)(param_1 + 2);
          *(undefined4 **)(param_1 + 2) = puVar8 + 2;
        }
        *(short *)(puVar2 + 4) = (short)*puVar8;
        break;
      case 5:
      case 6:
      case 0xd:
      case 0xe:
        uVar1 = *param_1;
        if (uVar1 < 0x30) {
          puVar8 = (undefined4 *)((ulong)uVar1 + *(long *)(param_1 + 4));
          *param_1 = uVar1 + 8;
        }
        else {
          puVar8 = *(undefined4 **)(param_1 + 2);
          *(undefined4 **)(param_1 + 2) = puVar8 + 2;
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
          puVar7 = (undefined8 *)((ulong)uVar1 + *(long *)(param_1 + 4));
          *param_1 = uVar1 + 8;
        }
        else {
          puVar7 = *(undefined8 **)(param_1 + 2);
          *(undefined8 **)(param_1 + 2) = puVar7 + 1;
        }
        *(undefined8 *)(puVar2 + 4) = *puVar7;
        break;
      case 0xb:
        uVar1 = param_1[1];
        if (uVar1 < 0xb0) {
          puVar7 = (undefined8 *)((ulong)uVar1 + *(long *)(param_1 + 4));
          param_1[1] = uVar1 + 0x10;
        }
        else {
          puVar7 = *(undefined8 **)(param_1 + 2);
          *(undefined8 **)(param_1 + 2) = puVar7 + 1;
        }
        *(undefined8 *)(puVar2 + 4) = *puVar7;
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
          puVar7 = (undefined8 *)((ulong)uVar1 + *(long *)(param_1 + 4));
          *param_1 = uVar1 + 8;
        }
        else {
          puVar7 = *(undefined8 **)(param_1 + 2);
          *(undefined8 **)(param_1 + 2) = puVar7 + 1;
        }
        puVar4 = (undefined *)*puVar7;
        if (puVar4 == (undefined *)0x0) {
          puVar4 = &DAT_0040b430;
        }
        *(undefined **)(puVar2 + 4) = puVar4;
      }
      uVar6 = uVar6 + 1;
      puVar2 = puVar2 + 8;
    } while (uVar6 <= *param_2 && *param_2 != uVar6);
  }
  return 0;
}


undefined8 FUN_004081b0(byte *param_1,ulong *param_2,byte **param_3)

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
LAB_0040822b:
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
  *(undefined4 *)(ppbVar3 + 2) = 0;
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
LAB_004082f6:
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
        if (bVar17 != 0x49) goto LAB_00408358;
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
  if (bVar4 != 0x24) goto LAB_004082f6;
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
      if (9 < (byte)(bVar17 - 0x30)) goto switchD_00408537_caseD_26;
    }
  } while ((byte)(bVar17 - 0x30) < 10);
  if (pbVar11 + -1 < (byte *)0xfffffffffffffffe) {
    param_1 = pbVar18 + 2;
    bVar17 = pbVar18[2];
    pbVar18 = pbVar11 + -1;
    goto LAB_004082f6;
  }
  goto switchD_00408537_caseD_26;
LAB_00408358:
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
joined_r0x0040846a:
    uVar8 = local_70;
    local_68 = pbVar12;
    if (bVar17 != 0x2e) goto LAB_00408371;
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
      goto LAB_00408371;
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
      if (bVar17 != 0x24) goto LAB_004084af;
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
          if (9 < bVar17) goto switchD_00408537_caseD_26;
        }
      } while (bVar17 < 10);
      pbVar14 = (byte *)(uVar16 - 1);
      if ((byte *)0xfffffffffffffffd < pbVar14) goto switchD_00408537_caseD_26;
      ppbVar3[8] = pbVar14;
      pbVar11 = pbVar12 + 2;
    }
    else {
LAB_004084af:
      pbVar14 = ppbVar3[8];
      if (ppbVar3[8] == (byte *)0xffffffffffffffff) {
        local_68 = pbVar12 + 1;
        ppbVar3[8] = pbVar12;
        pbVar14 = pbVar12;
        if (pbVar12 == (byte *)0xffffffffffffffff) goto switchD_00408537_caseD_26;
      }
    }
    __ptr = (byte **)param_3[1];
    if (pbVar14 < pbVar19) {
      pbVar12 = *param_3;
      __dest_00 = __ptr;
LAB_004084ce:
      if (pbVar12 <= pbVar14) {
        do {
          pbVar12 = pbVar12 + 1;
          *(undefined4 *)(__dest_00 + (long)pbVar12 * 4 + -4) = 0;
        } while (pbVar12 <= pbVar14);
        *param_3 = pbVar12;
      }
      iVar6 = *(int *)(__dest_00 + (long)pbVar14 * 4);
      param_1 = pbVar11;
      if (iVar6 == 0) {
        *(undefined4 *)(__dest_00 + (long)pbVar14 * 4) = 5;
        bVar17 = *pbVar11;
LAB_00408371:
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
               (bVar17 != 0x74)) goto code_r0x00408534;
            uVar5 = uVar5 + 8;
          }
          bVar17 = *param_1;
        } while( true );
      }
      if (iVar6 == 5) {
        bVar17 = *pbVar11;
        goto LAB_00408371;
      }
      goto LAB_0040897c;
    }
    pbVar19 = (byte *)((long)pbVar19 * 2);
    if (pbVar19 <= pbVar14) {
      pbVar19 = pbVar14 + 1;
    }
    if (pbVar19 < (byte *)0x800000000000000) {
      if (ppbVar2 == __ptr) {
        __dest_00 = (byte **)malloc((long)pbVar19 << 5);
        if (__dest_00 == (byte **)0x0) goto LAB_00408b69;
        pbVar12 = *param_3;
        __ptr = ppbVar2;
LAB_00408e1b:
        memcpy(__dest_00,__ptr,(long)pbVar12 << 5);
        pbVar12 = *param_3;
      }
      else {
        __dest_00 = (byte **)realloc(__ptr,(long)pbVar19 << 5);
        __ptr = (byte **)param_3[1];
        if (__dest_00 == (byte **)0x0) goto LAB_00408b50;
        pbVar12 = *param_3;
        if (ppbVar2 == __ptr) goto LAB_00408e1b;
      }
      param_3[1] = (byte *)__dest_00;
      goto LAB_004084ce;
    }
    goto LAB_00408b50;
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
    if (bVar17 != 0x24) goto LAB_004083fd;
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
        if (9 < bVar17) goto switchD_00408537_caseD_26;
      }
    } while (bVar17 < 10);
    pbVar14 = pbVar14 + -1;
    if ((byte *)0xfffffffffffffffd < pbVar14) goto switchD_00408537_caseD_26;
    ppbVar3[5] = pbVar14;
    pbVar11 = pbVar10 + 2;
  }
  else {
LAB_004083fd:
    pbVar14 = ppbVar3[5];
    if (ppbVar3[5] == (byte *)0xffffffffffffffff) {
      ppbVar3[5] = local_68;
      bVar21 = local_68 == (byte *)0xffffffffffffffff;
      pbVar14 = local_68;
      local_68 = local_68 + 1;
      if (bVar21) goto switchD_00408537_caseD_26;
    }
  }
  __ptr = (byte **)param_3[1];
  if (pbVar14 < pbVar19) {
    pbVar12 = *param_3;
    __dest_00 = __ptr;
LAB_0040841c:
    if (pbVar12 <= pbVar14) {
      do {
        pbVar12 = pbVar12 + 1;
        *(undefined4 *)(__dest_00 + (long)pbVar12 * 4 + -4) = 0;
      } while (pbVar12 <= pbVar14);
      *param_3 = pbVar12;
    }
    iVar6 = *(int *)(__dest_00 + (long)pbVar14 * 4);
    param_1 = pbVar11;
    local_78 = uVar8;
    pbVar12 = local_68;
    if (iVar6 == 0) {
      *(undefined4 *)(__dest_00 + (long)pbVar14 * 4) = 5;
      bVar17 = *pbVar11;
      pbVar11 = pbVar11 + 1;
    }
    else {
      if (iVar6 != 5) goto LAB_0040897c;
      bVar17 = *pbVar11;
      pbVar11 = pbVar11 + 1;
    }
    goto joined_r0x0040846a;
  }
  pbVar19 = (byte *)((long)pbVar19 * 2);
  if (pbVar19 <= pbVar14) {
    pbVar19 = pbVar14 + 1;
  }
  if ((byte *)0x7ffffffffffffff < pbVar19) goto LAB_00408b50;
  if (ppbVar2 != __ptr) {
    __dest_00 = (byte **)realloc(__ptr,(long)pbVar19 << 5);
    __ptr = (byte **)param_3[1];
    if (__dest_00 != (byte **)0x0) {
      pbVar12 = *param_3;
      if (ppbVar2 == __ptr) goto LAB_00408c69;
      goto LAB_0040873d;
    }
    goto LAB_00408b50;
  }
  __dest_00 = (byte **)malloc((long)pbVar19 << 5);
  if (__dest_00 != (byte **)0x0) {
    pbVar12 = *param_3;
    __ptr = ppbVar2;
LAB_00408c69:
    memcpy(__dest_00,__ptr,(long)pbVar12 << 5);
    pbVar12 = *param_3;
LAB_0040873d:
    param_3[1] = (byte *)__dest_00;
    goto LAB_0040841c;
  }
  goto LAB_00408b69;
code_r0x00408534:
  switch(bVar17) {
  case 0x25:
    goto switchD_00408537_caseD_25;
  default:
    goto switchD_00408537_caseD_26;
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
switchD_00408537_caseD_26:
      __dest_00 = (byte **)param_3[1];
      goto LAB_0040897c;
    }
  }
  else {
    ppbVar3[10] = pbVar18;
  }
  __ptr = (byte **)param_3[1];
  __dest_00 = __ptr;
  if (pbVar18 < pbVar19) {
LAB_00408565:
    pbVar11 = *param_3;
    if (pbVar11 <= pbVar18) {
      do {
        pbVar11 = pbVar11 + 1;
        *(undefined4 *)(__dest_00 + (long)pbVar11 * 4 + -4) = 0;
      } while (pbVar11 <= pbVar18);
      *param_3 = pbVar11;
    }
    iVar7 = *(int *)(__dest_00 + (long)pbVar18 * 4);
    if (iVar7 == 0) {
      *(int *)(__dest_00 + (long)pbVar18 * 4) = iVar6;
    }
    else if (iVar7 != iVar6) {
LAB_0040897c:
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
switchD_00408537_caseD_25:
    *(byte *)(ppbVar3 + 9) = bVar17;
    uVar8 = *param_2;
    ppbVar3[1] = param_1;
    uVar8 = uVar8 + 1;
    *param_2 = uVar8;
    if (uVar8 < uVar20) {
      __dest = (ulong *)param_2[1];
      goto LAB_0040822b;
    }
    if (((long)uVar20 < 0) || (0x2e8ba2e8ba2e8ba < uVar20 * 2)) {
LAB_00408ea3:
      __ptr = (byte **)param_3[1];
      goto LAB_00408b50;
    }
    __ptr_00 = (ulong *)param_2[1];
    if (puVar1 != __ptr_00) {
      __dest = (ulong *)realloc(__ptr_00,uVar20 * 0xb0);
      if (__dest == (ulong *)0x0) goto LAB_00408ea3;
      __ptr_00 = (ulong *)param_2[1];
      uVar8 = *param_2;
      if (puVar1 != __ptr_00) goto LAB_0040863f;
LAB_00408764:
      __dest = (ulong *)memcpy(__dest,__ptr_00,uVar8 * 0x58);
      uVar8 = *param_2;
LAB_0040863f:
      param_2[1] = (ulong)__dest;
      uVar20 = uVar20 * 2;
      goto LAB_0040822b;
    }
    __dest = (ulong *)malloc(uVar20 * 0xb0);
    if (__dest != (ulong *)0x0) goto LAB_00408764;
    __ptr = (byte **)param_3[1];
    if (ppbVar2 == __ptr) goto LAB_00408b79;
  }
  else {
    pbVar19 = (byte *)((long)pbVar19 * 2);
    if (pbVar19 <= pbVar18) {
      pbVar19 = pbVar18 + 1;
    }
    if (pbVar19 < (byte *)0x800000000000000) {
      if (ppbVar2 == __ptr) {
        __dest_00 = (byte **)malloc((long)pbVar19 << 5);
        if (__dest_00 == (byte **)0x0) goto LAB_00408b69;
LAB_00408b06:
        memcpy(__dest_00,__ptr,(long)*param_3 << 5);
LAB_00408a4b:
        param_3[1] = (byte *)__dest_00;
        goto LAB_00408565;
      }
      __dest_00 = (byte **)realloc(__ptr,(long)pbVar19 << 5);
      if (__dest_00 != (byte **)0x0) {
        __ptr = ppbVar2;
        if (ppbVar2 == (byte **)param_3[1]) goto LAB_00408b06;
        goto LAB_00408a4b;
      }
      goto LAB_00408ea3;
    }
LAB_00408b50:
    if (ppbVar2 == __ptr) goto LAB_00408b69;
  }
  free(__ptr);
LAB_00408b69:
  if (puVar1 != (ulong *)param_2[1]) {
    free((ulong *)param_2[1]);
  }
LAB_00408b79:
  piVar9 = __errno_location();
  *piVar9 = 0xc;
  return 0xffffffff;
}


/* WARNING: Removing unreachable block (ram,0x00408ef3) */
/* WARNING: Removing unreachable block (ram,0x00408ef8) */

void FUN_00408ec0(void)

{
  __DT_INIT();
  return;
}


void FUN_00408f20(void)

{
  return;
}


void FUN_00408f30(undefined8 param_1)

{
  __cxa_atexit(param_1,0,DAT_0060d1e8);
  return;
}


undefined8 FUN_00408f48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code **ppcVar1;
  
  for (ppcVar1 = (code **)&DAT_0060ce30; *ppcVar1 != (code *)0xffffffffffffffff;
      ppcVar1 = ppcVar1 + -1) {
    (**ppcVar1)();
  }
  return param_3;
}


void __DT_FINI(void)

{
  FUN_00401921();
  return;
}

