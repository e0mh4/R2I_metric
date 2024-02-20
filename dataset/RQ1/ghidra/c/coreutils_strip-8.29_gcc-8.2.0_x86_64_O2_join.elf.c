
void switchD_00403fd0::caseD_b(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401925(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_0040192a(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_0040192f(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401934(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void switchD_00405aba::caseD_0(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_00401940(int param_1,undefined8 *param_2)

{
  long *plVar1;
  byte bVar2;
  long lVar3;
  char *pcVar4;
  char cVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int *piVar12;
  long lVar13;
  undefined *puVar14;
  byte *pbVar15;
  undefined *puVar16;
  byte *pbVar17;
  ulong uVar18;
  ulong uVar19;
  bool bVar20;
  bool bVar21;
  byte bVar22;
  int local_9c;
  int local_98;
  int local_94;
  void *local_90;
  undefined local_88 [8];
  undefined8 local_80;
  ulong local_78;
  undefined8 local_70;
  long *local_68 [2];
  long local_58;
  undefined8 local_50;
  long *local_48 [3];
  
  bVar22 = 0;
  local_98 = 0;
  local_80 = 0;
  local_94 = 0;
  FUN_00403de0(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils",
                 "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale"
                );
  textdomain("coreutils");
  DAT_0060d37e = FUN_00403be0(3);
  FUN_004081f0(FUN_00403a60);
  FUN_004081f0(FUN_00402af0);
  DAT_0060d37b = '\x01';
  DAT_0060d37a = 0;
  _DAT_0060d378 = 0;
  DAT_0060d330 = 0;
LAB_00401a04:
  do {
    uVar7 = FUN_004077c0(param_1,param_2,"-a:e:i1:2:j:o:t:v:z",&PTR_s_ignore_case_00408ec0,0);
    pbVar17 = DAT_0060d560;
    if (uVar7 == 0xffffffff) break;
    local_9c = 0;
    if (uVar7 != 0x69) {
      if ((int)uVar7 < 0x6a) {
        if (uVar7 == 0x31) {
          uVar10 = FUN_00402910(DAT_0060d560);
          FUN_004028c0(&DAT_0060d228,uVar10);
          local_98 = local_9c;
          goto LAB_00401a04;
        }
        if ((int)uVar7 < 0x32) goto LAB_00401b48;
        if (uVar7 != 0x61) {
          if (uVar7 == 0x65) {
            if ((DAT_0060d370 != (byte *)0x0) &&
               (iVar8 = strcmp((char *)DAT_0060d370,(char *)DAT_0060d560), iVar8 != 0)) {
              uVar10 = dcgettext(0,"conflicting empty-field replacement strings",5);
                    /* WARNING: Subroutine does not return */
              error(1,0,uVar10);
            }
            local_98 = 0;
            DAT_0060d370 = pbVar17;
          }
          else {
            if (uVar7 != 0x32) goto LAB_00401b39;
            uVar10 = FUN_00402910(DAT_0060d560);
            FUN_004028c0(&DAT_0060d220,uVar10);
            local_98 = local_9c;
          }
          goto LAB_00401a04;
        }
      }
      else {
        if (uVar7 != 0x76) {
          if ((int)uVar7 < 0x77) {
            bVar20 = uVar7 < 0x6f;
            bVar21 = uVar7 == 0x6f;
            if (bVar21) {
              lVar13 = 5;
              pbVar15 = &DAT_00408dea;
              do {
                if (lVar13 == 0) break;
                lVar13 = lVar13 + -1;
                bVar20 = *pbVar17 < *pbVar15;
                bVar21 = *pbVar17 == *pbVar15;
                pbVar17 = pbVar17 + (ulong)bVar22 * -2 + 1;
                pbVar15 = pbVar15 + (ulong)bVar22 * -2 + 1;
              } while (bVar21);
              cVar5 = (!bVar20 && !bVar21) - bVar20;
              if (cVar5 == '\0') {
                DAT_0060d368 = '\x01';
                local_98 = (int)cVar5;
              }
              else {
                FUN_00402990(DAT_0060d560);
                local_9c = 3;
                local_98 = 3;
              }
              goto LAB_00401a04;
            }
            if (uVar7 == 0x74) {
              uVar7 = (uint)*DAT_0060d560;
              if (*DAT_0060d560 == 0) {
                uVar7 = 10;
              }
              else if (DAT_0060d560[1] != 0) {
                iVar8 = strcmp((char *)DAT_0060d560,"\\0");
                if (iVar8 != 0) {
                  uVar10 = FUN_00405a00(pbVar17);
                  uVar11 = dcgettext(0,"multi-character tab %s",5);
                    /* WARNING: Subroutine does not return */
                  error(1,0,uVar11,uVar10);
                }
                uVar7 = 0;
              }
              if ((-1 < (int)DAT_0060d214) && (DAT_0060d214 != uVar7)) {
                uVar10 = dcgettext(0,"incompatible tabs",5);
                    /* WARNING: Subroutine does not return */
                error(1,0,uVar10);
              }
              DAT_0060d214 = uVar7;
              local_98 = 0;
              goto LAB_00401a04;
            }
            if (uVar7 == 0x6a) {
              bVar2 = *DAT_0060d560;
              if ((((byte)(bVar2 - 0x31) < 2) && (DAT_0060d560[1] == 0)) &&
                 (DAT_0060d560 == (byte *)(param_2[(long)DAT_0060d29c + -1] + 2))) {
                piVar12 = (int *)((long)&local_80 + (ulong)(bVar2 == 0x32) * 4);
                *piVar12 = *piVar12 + 1;
                local_9c = (bVar2 == 0x32) + 1;
                local_98 = local_9c;
              }
              else {
                uVar10 = FUN_00402910();
                FUN_004028c0(&DAT_0060d228,uVar10);
                FUN_004028c0(&DAT_0060d220,DAT_0060d228);
                local_98 = local_9c;
              }
              goto LAB_00401a04;
            }
          }
          else {
            if (uVar7 == 0x80) {
              DAT_0060d330 = 1;
              local_98 = 0;
              goto LAB_00401a04;
            }
            if ((int)uVar7 < 0x81) {
              if (uVar7 == 0x7a) {
                DAT_0060d210 = 0;
                local_98 = 0;
                goto LAB_00401a04;
              }
            }
            else {
              if (uVar7 == 0x81) {
                DAT_0060d330 = 2;
                local_98 = 0;
                goto LAB_00401a04;
              }
              if (uVar7 == 0x82) {
                DAT_0060d2e0 = '\x01';
                local_98 = 0;
                goto LAB_00401a04;
              }
            }
          }
LAB_00401b39:
          while( true ) {
            uVar7 = FUN_004034f0(1);
LAB_00401b48:
            if (uVar7 == 0xffffff7e) {
              FUN_004034f0(0);
              goto LAB_004025e5;
            }
            if (uVar7 == 1) break;
            if (uVar7 == 0xffffff7d) {
              FUN_00405e90(stdout,&DAT_00408d4c,"GNU coreutils",PTR_DAT_0060d230,"Mike Haertel",0);
                    /* WARNING: Subroutine does not return */
              exit(0);
            }
          }
          FUN_004038b0(DAT_0060d560,local_88,&local_80,&local_94);
          local_98 = local_9c;
          goto LAB_00401a04;
        }
        DAT_0060d37b = '\0';
      }
      iVar8 = FUN_004063e0(DAT_0060d560,0,10,&local_58);
      if ((iVar8 != 0) || (1 < local_58 - 1U)) {
LAB_004025e5:
        uVar10 = FUN_00405a00(DAT_0060d560);
        uVar11 = dcgettext(0,"invalid field number: %s",5);
                    /* WARNING: Subroutine does not return */
        error(1,0,uVar11,uVar10);
      }
      local_98 = local_9c;
      if (local_58 == 1) {
        DAT_0060d37d = '\x01';
      }
      else {
        DAT_0060d37c = '\x01';
      }
      goto LAB_00401a04;
    }
    DAT_0060d2e1 = 1;
    local_98 = 0;
  } while( true );
  local_98 = 0;
  if (DAT_0060d29c < param_1) {
    do {
      lVar13 = (long)DAT_0060d29c;
      DAT_0060d29c = DAT_0060d29c + 1;
      FUN_004038b0(param_2[lVar13],local_88,&local_80,&local_94,&local_98,&local_9c);
    } while (DAT_0060d29c < param_1);
  }
  if (local_94 != 2) {
    if (local_94 != 0) {
      uVar10 = FUN_00405a00(param_2[(long)param_1 + -1]);
      uVar11 = dcgettext(0,"missing operand after %s",5);
                    /* WARNING: Subroutine does not return */
      error(0,0,uVar11,uVar10);
    }
    uVar10 = dcgettext(0,"missing operand",5);
                    /* WARNING: Subroutine does not return */
    error(0,0,uVar10);
  }
  if ((int)local_80 != 0) {
    FUN_004028c0(&DAT_0060d228,0);
    FUN_004028c0(&DAT_0060d220,0);
  }
  if (local_80._4_4_ != 0) {
    FUN_004028c0(&DAT_0060d228,1);
    FUN_004028c0(&DAT_0060d220,1);
  }
  pcVar4 = DAT_0060d390;
  if (DAT_0060d228 == -1) {
    DAT_0060d228 = 0;
  }
  if (DAT_0060d220 == -1) {
    DAT_0060d220 = 0;
  }
  iVar8 = strcmp(DAT_0060d390,"-");
  lVar13 = stdin;
  if (iVar8 != 0) {
    lVar13 = FUN_00403b40(pcVar4,"r");
  }
  pcVar4 = DAT_0060d398;
  if (lVar13 == 0) {
    uVar10 = FUN_00405880(0,3,DAT_0060d390);
    piVar12 = __errno_location();
                    /* WARNING: Subroutine does not return */
    error(1,*piVar12,"%s",uVar10);
  }
  iVar8 = strcmp(DAT_0060d398,"-");
  lVar9 = stdin;
  if (iVar8 != 0) {
    lVar9 = FUN_00403b40(pcVar4,"r");
  }
  if (lVar9 == 0) {
    uVar10 = FUN_00405880(0,3,DAT_0060d398);
    piVar12 = __errno_location();
                    /* WARNING: Subroutine does not return */
    error(1,*piVar12,"%s",uVar10);
  }
  if (lVar13 == lVar9) {
    uVar10 = dcgettext(0,"both files cannot be standard input",5);
    piVar12 = __errno_location();
                    /* WARNING: Subroutine does not return */
    error(1,*piVar12,uVar10);
  }
  FUN_00403b10(lVar13,2);
  FUN_00403b10(lVar9,2);
  local_78 = 0;
  local_70 = 0;
  local_68[0] = (long *)0x0;
  FUN_00403400(lVar13,&local_78,1);
  local_58 = 0;
  local_50 = 0;
  local_48[0] = (long *)0x0;
  FUN_00403400(lVar9,&local_58,2);
  if (DAT_0060d368 != '\0') {
    DAT_0060d360 = local_78;
    if (local_78 != 0) {
      DAT_0060d360 = *(ulong *)(*local_68[0] + 0x18);
    }
    DAT_0060d358 = local_58;
    if (local_58 != 0) {
      DAT_0060d358 = *(long *)(*local_48[0] + 0x18);
    }
  }
  if (DAT_0060d2e0 == '\0') {
LAB_00401f50:
    if (local_78 != 0) {
      while( true ) {
        uVar18 = local_78;
        if (local_58 == 0) goto LAB_00401fea;
        iVar8 = FUN_00402b90(*(undefined8 *)(*local_68[0] + 0x18),*local_68[0] + 0x28,
                             *(undefined8 *)(*local_48[0] + 0x18),*local_48[0] + 0x28,DAT_0060d228,
                             DAT_0060d220);
        if (iVar8 < 0) {
          if (DAT_0060d37d != '\0') {
            FUN_00402e10(*local_68[0],&DAT_0060d300);
          }
          local_78 = 0;
          FUN_00403400(lVar13,&local_78,1);
          DAT_0060d37a = 1;
          goto LAB_00401f50;
        }
        if (iVar8 == 0) break;
        if (DAT_0060d37c != '\0') {
          FUN_00402e10(&DAT_0060d300,*local_48[0]);
        }
        local_58 = 0;
        FUN_00403400(lVar9,&local_58,2);
        DAT_0060d37a = 1;
        if (local_78 == 0) goto LAB_00401fe8;
      }
      do {
        cVar5 = FUN_00403400(lVar13,&local_78,1);
        if (cVar5 == '\0') {
          local_78 = local_78 + 1;
          bVar20 = true;
          goto LAB_00402162;
        }
        iVar8 = FUN_00402b90(*(undefined8 *)(local_68[0][local_78 - 1] + 0x18),
                             local_68[0][local_78 - 1] + 0x28,*(undefined8 *)(*local_48[0] + 0x18),
                             *local_48[0] + 0x28,DAT_0060d228,DAT_0060d220);
      } while (iVar8 == 0);
      bVar20 = false;
LAB_00402162:
      do {
        cVar5 = FUN_00403400(lVar9,&local_58,2);
        if (cVar5 == '\0') {
          local_58 = local_58 + 1;
          bVar21 = true;
          goto LAB_00402183;
        }
        iVar8 = FUN_00402b90(*(undefined8 *)(*local_68[0] + 0x18),*local_68[0] + 0x28,
                             *(undefined8 *)(local_48[0][local_58 + -1] + 0x18),
                             local_48[0][local_58 + -1] + 0x28,DAT_0060d228,DAT_0060d220);
      } while (iVar8 == 0);
      bVar21 = false;
LAB_00402183:
      if ((DAT_0060d37b != '\0') && (uVar18 = 0, local_78 != 1)) {
        do {
          uVar19 = 0;
          if (local_58 != 1) {
            do {
              plVar1 = local_48[0] + uVar19;
              uVar19 = uVar19 + 1;
              FUN_00402e10(local_68[0][uVar18],*plVar1);
            } while (uVar19 < local_58 - 1U);
          }
          uVar18 = uVar18 + 1;
        } while (uVar18 < local_78 - 1);
      }
      if (!bVar20) {
        lVar3 = *local_68[0];
        *local_68[0] = local_68[0][local_78 - 1];
        local_68[0][local_78 - 1] = lVar3;
      }
      local_78 = (ulong)!bVar20;
      if (bVar21) {
        local_58 = 0;
      }
      else {
        lVar3 = *local_48[0];
        *local_48[0] = local_48[0][local_58 + -1];
        local_48[0][local_58 + -1] = lVar3;
        local_58 = 1;
      }
      goto LAB_00401f50;
    }
  }
  else {
    if (local_78 != 0) {
      puVar14 = &DAT_0060d300;
      puVar16 = (undefined *)*local_68[0];
      if (local_58 != 0) goto LAB_00402285;
LAB_0040228d:
      FUN_00402e10(puVar16,puVar14);
      _DAT_0060d3b0 = 0;
      _DAT_0060d3b8 = 0;
      if (local_78 != 0) {
        local_78 = 0;
        FUN_00403400(lVar13,&local_78,1);
      }
      if (local_58 != 0) {
        local_58 = 0;
        FUN_00403400(lVar9,&local_58,2);
      }
      goto LAB_00401f50;
    }
    if (local_58 != 0) {
      puVar16 = &DAT_0060d300;
LAB_00402285:
      puVar14 = (undefined *)*local_48[0];
      goto LAB_0040228d;
    }
  }
LAB_00401fe8:
  uVar18 = 0;
LAB_00401fea:
  local_90 = (void *)0x0;
  if ((DAT_0060d330 == 2) || ((DAT_0060d378 != '\0' && (DAT_0060d379 != '\0')))) {
    if ((DAT_0060d37d != '\0') && (uVar18 != 0)) {
      cVar5 = '\0';
LAB_00402579:
      FUN_00402e10(*local_68[0],&DAT_0060d300);
      goto LAB_004023a5;
    }
    if (DAT_0060d37c == '\0') goto LAB_00402037;
LAB_004024a7:
    if (local_58 == 0) goto LAB_00402037;
LAB_004024b8:
    if (DAT_0060d37c != '\0') {
      FUN_00402e10(&DAT_0060d300,*local_48[0]);
    }
    if (local_78 != 0) {
      DAT_0060d37a = 1;
    }
LAB_004024d0:
    do {
      cVar5 = FUN_00403040(lVar9,&local_90,2);
      if (cVar5 == '\0') break;
      if (DAT_0060d37c == '\0') {
      }
      else {
        FUN_00402e10(&DAT_0060d300,local_90);
        bVar20 = DAT_0060d379 == '\0';
        DAT_0060d379 = DAT_0060d37c;
        if (bVar20) goto LAB_004024d0;
      }
    } while (DAT_0060d379 != '\0');
  }
  else {
    if (uVar18 == 0) goto LAB_004024a7;
    cVar5 = DAT_0060d37d;
    if (DAT_0060d37d != '\0') goto LAB_00402579;
    cVar5 = '\x01';
LAB_004023a5:
    if (local_58 != 0) {
      DAT_0060d37a = 1;
    }
LAB_004023c0:
    do {
      cVar6 = FUN_00403040(lVar13,&local_90,1);
      if (cVar6 == '\0') break;
      if (DAT_0060d37d == '\0') {
      }
      else {
        FUN_00402e10(local_90,&DAT_0060d300);
        bVar20 = DAT_0060d378 == '\0';
        DAT_0060d378 = DAT_0060d37d;
        if (bVar20) goto LAB_004023c0;
      }
    } while (DAT_0060d378 != '\0');
    if (((DAT_0060d37c != '\0') || (cVar5 != '\0')) && (local_58 != 0)) goto LAB_004024b8;
  }
  if (local_90 != (void *)0x0) {
    FUN_00402ac0();
  }
LAB_00402037:
  free(local_90);
  FUN_00402b40(&local_70,local_68);
  FUN_00402b40(&local_50,local_48);
  iVar8 = FUN_00406810(lVar13);
  if (iVar8 != 0) {
    uVar10 = FUN_00405880(0,3,DAT_0060d390);
    piVar12 = __errno_location();
                    /* WARNING: Subroutine does not return */
    error(1,*piVar12,"%s",uVar10);
  }
  iVar8 = FUN_00406810(lVar9);
  if (iVar8 != 0) {
    uVar10 = FUN_00405880(0,3,DAT_0060d398);
    piVar12 = __errno_location();
                    /* WARNING: Subroutine does not return */
    error(1,*piVar12,"%s",uVar10);
  }
  if (DAT_0060d378 == '\0') {
  }
  else {
    DAT_0060d379 = 1;
  }
  return DAT_0060d379;
}


void FUN_004027e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_retaddr;
  undefined auStack_8 [8];
  
  (*(code *)PTR___libc_start_main_0060cff0)
            (FUN_00401940,unaff_retaddr,&stack0x00000008,FUN_00408180,FUN_004081e0,param_3,auStack_8
            );
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* WARNING: Removing unreachable block (ram,0x00402818) */
/* WARNING: Removing unreachable block (ram,0x00402822) */

void FUN_0040280b(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00402859) */

void FUN_0040282a(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00402896) */

void FUN_00402861(void)

{
  if (DAT_0060d2c8 != '\0') {
    return;
  }
  FUN_0040280b();
  DAT_0060d2c8 = 1;
  return;
}


/* WARNING: Removing unreachable block (ram,0x00402859) */

void thunk_FUN_0040282a(void)

{
  return;
}


void FUN_004028c0(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  if ((lVar1 != -1) && (lVar1 != param_2)) {
    uVar2 = dcgettext(0,"incompatible join fields %lu, %lu",5);
                    /* WARNING: Subroutine does not return */
    error(1,0,uVar2,lVar1 + 1,param_2 + 1);
  }
  *param_1 = param_2;
  return;
}


long FUN_00402910(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long local_10;
  
  iVar1 = FUN_004063e0(param_1,0,10,&local_10,&DAT_00408d08);
  if (iVar1 == 1) {
    return -2;
  }
  if ((iVar1 == 0) && (local_10 != 0)) {
    return local_10 + -1;
  }
  uVar2 = FUN_00405a00(param_1);
  uVar3 = dcgettext(0,"invalid field number: %s",5);
                    /* WARNING: Subroutine does not return */
  error(1,0,uVar3,uVar2);
}


void FUN_00402990(char *param_1)

{
  int **ppiVar1;
  char cVar2;
  int *piVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  char *pcVar8;
  
  do {
    pcVar8 = (char *)0x0;
    pcVar4 = strpbrk(param_1,", \t");
    if (pcVar4 != (char *)0x0) {
      *pcVar4 = '\0';
      pcVar8 = pcVar4 + 1;
    }
    cVar2 = *param_1;
    if (cVar2 == '0') {
      if (param_1[1] != '\0') {
        uVar5 = FUN_00405a00(param_1);
        uVar6 = dcgettext(0,"invalid field specifier: %s",5);
                    /* WARNING: Subroutine does not return */
        error(1,0,uVar6,uVar5);
      }
      uVar5 = 0;
      iVar7 = 0;
    }
    else {
      if ((cVar2 < '0') || ('2' < cVar2)) {
        uVar5 = FUN_00405a00(param_1);
        uVar6 = dcgettext(0,"invalid file number in field spec: %s",5);
                    /* WARNING: Subroutine does not return */
        error(1,0,uVar6,uVar5);
      }
      if (param_1[1] != '.') {
        uVar5 = FUN_00405a00(param_1);
        uVar6 = dcgettext(0,"invalid field specifier: %s",5);
                    /* WARNING: Subroutine does not return */
        error(1,0,uVar6,uVar5);
      }
      iVar7 = cVar2 + -0x30;
      uVar5 = FUN_00402910(param_1 + 2);
    }
    piVar3 = (int *)FUN_00405fd0(0x18);
    *piVar3 = iVar7;
    *(undefined8 *)(piVar3 + 2) = uVar5;
    *(undefined8 *)(piVar3 + 4) = 0;
    ppiVar1 = (int **)(PTR_DAT_0060d218 + 0x10);
    PTR_DAT_0060d218 = (undefined *)piVar3;
    *ppiVar1 = piVar3;
    param_1 = pcVar8;
    if (pcVar8 == (char *)0x0) {
      return;
    }
  } while( true );
}


void FUN_00402ac0(long param_1)

{
  free(*(void **)(param_1 + 0x28));
  *(undefined8 *)(param_1 + 0x28) = 0;
  free(*(void **)(param_1 + 0x10));
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}


void FUN_00402af0(void)

{
  void *pvVar1;
  
  pvVar1 = DAT_0060d380;
  if (DAT_0060d380 != (void *)0x0) {
    FUN_00402ac0(DAT_0060d380);
    free(pvVar1);
  }
  pvVar1 = DAT_0060d388;
  if (DAT_0060d388 != (void *)0x0) {
    FUN_00402ac0(DAT_0060d388);
    free(pvVar1);
    return;
  }
  return;
}


void FUN_00402b40(ulong *param_1,void **param_2)

{
  ulong uVar1;
  void *__ptr;
  
  uVar1 = 0;
  if (*param_1 != 0) {
    do {
      __ptr = *(void **)((long)*param_2 + uVar1 * 8);
      if (__ptr != (void *)0x0) {
        FUN_00402ac0();
        __ptr = *(void **)((long)*param_2 + uVar1 * 8);
      }
      free(__ptr);
      uVar1 = uVar1 + 1;
    } while (uVar1 < *param_1);
  }
  free(*param_2);
  return;
}


uint FUN_00402b90(ulong param_1,long *param_2,ulong param_3,long *param_4,ulong param_5,
                 ulong param_6)

{
  void *__s1;
  void *pvVar1;
  void *__s2;
  uint uVar2;
  void *pvVar3;
  void *pvVar4;
  void **ppvVar5;
  
  if (param_5 < param_1) {
    ppvVar5 = (void **)(param_5 * 0x10 + *param_2);
    __s1 = *ppvVar5;
    pvVar1 = ppvVar5[1];
    if (param_6 < param_3) {
      ppvVar5 = (void **)(param_6 * 0x10 + *param_4);
      __s2 = *ppvVar5;
      pvVar4 = ppvVar5[1];
      if (pvVar1 == (void *)0x0) goto LAB_00402bd0;
      if (pvVar4 == (void *)0x0) {
        uVar2 = 1;
      }
      else {
        if (DAT_0060d2e1 == '\0') {
          if (DAT_0060d37e != '\0') {
            uVar2 = FUN_00406320(__s1,pvVar1,__s2,pvVar4);
            return uVar2;
          }
          pvVar3 = pvVar4;
          if (pvVar1 <= pvVar4) {
            pvVar3 = pvVar1;
          }
          uVar2 = memcmp(__s1,__s2,(size_t)pvVar3);
        }
        else {
          pvVar3 = pvVar4;
          if (pvVar1 <= pvVar4) {
            pvVar3 = pvVar1;
          }
          uVar2 = FUN_00403d90(__s1,__s2,pvVar3);
        }
        if (uVar2 == 0) {
          if (pvVar4 <= pvVar1) {
            return (uint)(pvVar1 != pvVar4);
          }
          uVar2 = 0xffffffff;
        }
      }
    }
    else {
      uVar2 = (uint)(pvVar1 != (void *)0x0);
    }
    return uVar2;
  }
  if (param_3 <= param_6) {
    return 0;
  }
  pvVar4 = *(void **)(param_6 * 0x10 + *param_4 + 8);
LAB_00402bd0:
  return -(uint)(pvVar4 != (void *)0x0);
}


void FUN_00402c90(ulong param_1,ulong param_2,long *param_3)

{
  void *__n;
  void **ppvVar1;
  
  if (param_1 < param_2) {
    ppvVar1 = (void **)(param_1 * 0x10 + *param_3);
    __n = ppvVar1[1];
    if (__n != (void *)0x0) {
      fwrite_unlocked(*ppvVar1,1,(size_t)__n,stdout);
      return;
    }
  }
  if (DAT_0060d370 != (char *)0x0) {
    fputs_unlocked(DAT_0060d370,stdout);
    return;
  }
  return;
}


void FUN_00402cf0(long param_1,ulong param_2,ulong param_3)

{
  char *pcVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  char cVar6;
  
  if (DAT_0060d368 == '\0') {
    param_3 = *(ulong *)(param_1 + 0x18);
  }
  iVar2 = DAT_0060d214;
  if (DAT_0060d214 < 0) {
    iVar2 = 0x20;
  }
  cVar6 = (char)iVar2;
  uVar4 = param_2;
  if (param_3 <= param_2) {
    uVar4 = param_3;
  }
  uVar5 = 0;
  if (uVar4 != 0) {
    do {
      pcVar1 = stdout->_IO_write_ptr;
      if (pcVar1 < stdout->_IO_write_end) {
        stdout->_IO_write_ptr = pcVar1 + 1;
        *pcVar1 = cVar6;
      }
      else {
        __overflow(stdout,(int)cVar6 & 0xff);
      }
      uVar3 = uVar5 + 1;
      FUN_00402c90(uVar5,*(undefined8 *)(param_1 + 0x18),param_1 + 0x28);
      uVar5 = uVar3;
    } while (uVar3 != uVar4);
  }
  uVar4 = param_2 + 1;
  if (param_2 + 1 < param_3) {
    do {
      pcVar1 = stdout->_IO_write_ptr;
      if (pcVar1 < stdout->_IO_write_end) {
        stdout->_IO_write_ptr = pcVar1 + 1;
        *pcVar1 = cVar6;
      }
      else {
        __overflow(stdout,(int)cVar6 & 0xff);
      }
      uVar5 = uVar4 + 1;
      FUN_00402c90(uVar4,*(undefined8 *)(param_1 + 0x18),param_1 + 0x28);
      uVar4 = uVar5;
    } while (param_3 != uVar5);
  }
  return;
}


void FUN_00402e10(undefined *param_1,undefined *param_2)

{
  char *pcVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  undefined *puVar5;
  int *piVar6;
  undefined8 uVar7;
  
  uVar4 = DAT_0060d214;
  if ((int)DAT_0060d214 < 0) {
    uVar4 = 0x20;
  }
  piVar6 = DAT_0060d350;
  if (DAT_0060d350 == (int *)0x0) {
    puVar5 = param_1;
    uVar7 = DAT_0060d228;
    if (param_1 == &DAT_0060d300) {
      puVar5 = param_2;
      uVar7 = DAT_0060d220;
    }
    FUN_00402c90(uVar7,*(undefined8 *)(puVar5 + 0x18),puVar5 + 0x28);
    FUN_00402cf0(param_1,DAT_0060d228,DAT_0060d360);
    FUN_00402cf0(param_2,DAT_0060d220,DAT_0060d358);
  }
  else {
    while( true ) {
      if (*piVar6 == 0) {
        puVar5 = param_1;
        uVar7 = DAT_0060d228;
        if (param_1 == &DAT_0060d300) {
          puVar5 = param_2;
          uVar7 = DAT_0060d220;
        }
      }
      else {
        uVar7 = *(undefined8 *)(piVar6 + 2);
        puVar5 = param_2;
        if (*piVar6 == 1) {
          puVar5 = param_1;
        }
      }
      FUN_00402c90(uVar7,*(undefined8 *)(puVar5 + 0x18),puVar5 + 0x28);
      piVar6 = *(int **)(piVar6 + 4);
      if (piVar6 == (int *)0x0) break;
      pcVar1 = stdout->_IO_write_ptr;
      if (pcVar1 < stdout->_IO_write_end) {
        stdout->_IO_write_ptr = pcVar1 + 1;
        *pcVar1 = (char)uVar4;
      }
      else {
        __overflow(stdout,uVar4 & 0xff);
      }
    }
  }
  bVar3 = DAT_0060d210;
  pbVar2 = (byte *)stdout->_IO_write_ptr;
  if (stdout->_IO_write_end <= pbVar2) {
    __overflow(stdout,(uint)DAT_0060d210);
    return;
  }
  stdout->_IO_write_ptr = (char *)(pbVar2 + 1);
  *pbVar2 = bVar3;
  return;
}


void FUN_00402f80(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  uVar3 = *(ulong *)(param_1 + 0x18);
  uVar5 = *(ulong *)(param_1 + 0x20);
  lVar2 = *(long *)(param_1 + 0x28);
  if (uVar5 <= uVar3) {
    if (lVar2 == 0) {
      if (uVar5 == 0) {
        lVar4 = 0x80;
        uVar5 = 8;
      }
      else {
        lVar4 = uVar5 << 4;
        if ((lVar4 < 0) || (uVar5 >> 0x3c != 0)) goto LAB_00403020;
      }
    }
    else {
      if (0x555555555555554 < uVar5) {
LAB_00403020:
                    /* WARNING: Subroutine does not return */
        FUN_00406220();
      }
      uVar5 = uVar5 + 1 + (uVar5 >> 1);
      lVar4 = uVar5 * 0x10;
    }
    *(ulong *)(param_1 + 0x20) = uVar5;
    lVar2 = FUN_00406030(lVar2,lVar4);
    uVar3 = *(ulong *)(param_1 + 0x18);
    *(long *)(param_1 + 0x28) = lVar2;
  }
  puVar1 = (undefined8 *)(lVar2 + uVar3 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(ulong *)(param_1 + 0x18) = uVar3 + 1;
  return;
}


undefined8 FUN_00403040(byte *param_1,long *param_2,int param_3)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  ulong uVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  ushort **ppuVar11;
  undefined8 uVar12;
  int *piVar13;
  ushort *puVar14;
  undefined4 uVar15;
  byte *pbVar16;
  byte *pbVar17;
  ulong uVar18;
  long lVar19;
  byte *pbVar20;
  
  lVar19 = (long)(param_3 + -1);
  lVar7 = *param_2;
  if (*(long *)(&DAT_0060d3b0 + lVar19 * 8) == lVar7) {
    lVar10 = (&DAT_0060d380)[lVar19];
    (&DAT_0060d380)[lVar19] = lVar7;
    *param_2 = lVar10;
    if (lVar10 == 0) goto LAB_0040327f;
LAB_00403078:
    *(undefined8 *)(lVar10 + 0x18) = 0;
  }
  else {
    lVar10 = lVar7;
    if (lVar7 != 0) goto LAB_00403078;
LAB_0040327f:
    lVar10 = FUN_004061a0(1,0x30);
    *param_2 = lVar10;
  }
  lVar7 = FUN_00403c50(lVar10,param_1,(int)DAT_0060d210);
  if (lVar7 == 0) {
    if ((*param_1 & 0x20) != 0) {
      uVar12 = dcgettext(0,"read error",5);
      piVar13 = __errno_location();
                    /* WARNING: Subroutine does not return */
      error(1,*piVar13,uVar12);
    }
    if (lVar10 == 0) {
      return 0;
    }
    FUN_00402ac0(lVar10);
    return 0;
  }
  lVar7 = *(long *)(lVar10 + 8);
  pbVar17 = *(byte **)(lVar10 + 0x10);
  *(long *)(&DAT_0060d3a0 + lVar19 * 8) = *(long *)(&DAT_0060d3a0 + lVar19 * 8) + 1;
  lVar7 = lVar7 + -1;
  pbVar1 = pbVar17 + lVar7;
  if (pbVar17 == pbVar1) goto LAB_00403121;
  if ((DAT_0060d214 < 0) || (DAT_0060d214 == 10)) {
    if (DAT_0060d214 < 0) {
      ppuVar11 = __ctype_b_loc();
      puVar14 = *ppuVar11;
      pbVar16 = pbVar17;
      do {
        pbVar20 = pbVar16 + 1;
        if (((*(byte *)(puVar14 + *pbVar16) & 1) == 0) && (*pbVar16 != 10)) goto LAB_004032d3;
        pbVar16 = pbVar20;
      } while (pbVar1 != pbVar20);
      goto LAB_00403121;
    }
  }
  else {
    while( true ) {
      lVar7 = (long)pbVar1 - (long)pbVar17;
      lVar8 = FUN_004078c0(pbVar17,DAT_0060d214,lVar7);
      if (lVar8 == 0) break;
      FUN_00402f80(lVar10,pbVar17,lVar8 - (long)pbVar17);
      pbVar17 = (byte *)(lVar8 + 1);
    }
  }
  goto LAB_00403116;
LAB_004032d3:
  pbVar17 = pbVar16;
  if (pbVar1 == pbVar20) goto LAB_004033a0;
  if (((*(byte *)(puVar14 + pbVar16[1]) & 1) == 0) && (pbVar16[1] != 10)) {
    do {
      pbVar20 = pbVar20 + 1;
      if (pbVar1 == pbVar20) {
        lVar7 = (long)pbVar1 - (long)pbVar16;
        goto LAB_00403116;
      }
    } while (((*(byte *)(puVar14 + *pbVar20) & 1) == 0) && (*pbVar20 != 10));
    lVar7 = (long)pbVar20 - (long)pbVar16;
  }
  else {
    lVar7 = 1;
  }
  pbVar17 = pbVar20 + 1;
  FUN_00402f80(lVar10,pbVar16,lVar7);
  if (pbVar1 == pbVar17) {
LAB_00403390:
    lVar7 = 0;
    goto LAB_00403116;
  }
  bVar2 = pbVar20[1];
  puVar14 = *ppuVar11;
  bVar3 = *(byte *)(puVar14 + bVar2);
  pbVar16 = pbVar17;
  while (((bVar3 & 1) != 0 || (bVar2 == 10))) {
    pbVar17 = pbVar16 + 1;
    if (pbVar1 == pbVar17) goto LAB_00403390;
    bVar2 = *pbVar17;
    bVar3 = *(byte *)(puVar14 + bVar2);
    pbVar16 = pbVar17;
  }
  pbVar20 = pbVar16 + 1;
  goto LAB_004032d3;
LAB_004033a0:
  lVar7 = 1;
LAB_00403116:
  FUN_00402f80(lVar10,pbVar17,lVar7);
LAB_00403121:
  lVar7 = *(long *)(&DAT_0060d3b0 + lVar19 * 8);
  if ((((lVar7 != 0) && (DAT_0060d330 != 2)) && ((DAT_0060d330 == 1 || (DAT_0060d37a != '\0')))) &&
     ((&DAT_0060d378)[lVar19] == '\0')) {
    uVar12 = DAT_0060d228;
    if (param_3 != 1) {
      uVar12 = DAT_0060d220;
    }
    iVar6 = FUN_00402b90(*(undefined8 *)(lVar7 + 0x18),lVar7 + 0x28,*(undefined8 *)(lVar10 + 0x18),
                         lVar10 + 0x28,uVar12,uVar12);
    if (0 < iVar6) {
      uVar4 = *(ulong *)(lVar10 + 8);
      lVar7 = *(long *)(lVar10 + 0x10);
      uVar15 = 0;
      if (uVar4 != 0) {
        uVar18 = uVar4 - 1;
        if (*(char *)(lVar7 + -1 + uVar4) == '\n') {
          if (0x7fffffff < uVar18) {
            uVar18 = 0x7fffffff;
          }
          uVar15 = (undefined4)uVar18;
        }
        else {
          uVar15 = 0x7fffffff;
          if (uVar4 < 0x80000000) {
            uVar15 = (undefined4)uVar4;
          }
        }
      }
      uVar12 = *(undefined8 *)(&DAT_0060d3a0 + lVar19 * 8);
      uVar5 = (&DAT_0060d390)[lVar19];
      uVar9 = dcgettext(0,"%s:%lu: is not sorted: %.*s",5);
                    /* WARNING: Subroutine does not return */
      error(DAT_0060d330 == 1,0,uVar9,uVar5,uVar12,uVar15,lVar7);
    }
  }
  *(long *)(&DAT_0060d3b0 + lVar19 * 8) = lVar10;
  return 1;
}


void FUN_00403400(undefined8 param_1,ulong *param_2,ulong param_3)

{
  char cVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  uVar5 = *param_2;
  uVar4 = param_2[1];
  uVar2 = param_2[2];
  if (uVar5 == uVar4) {
    if (uVar2 == 0) {
      if (uVar4 == 0) {
        lVar6 = 0x80;
        uVar4 = 0x10;
      }
      else {
        lVar6 = uVar4 << 3;
        if ((lVar6 < 0) || (uVar4 >> 0x3d != 0)) goto LAB_004034d2;
      }
    }
    else {
      if (0xaaaaaaaaaaaaaa9 < uVar4) {
LAB_004034d2:
                    /* WARNING: Subroutine does not return */
        FUN_00406220();
      }
      uVar4 = uVar4 + 1 + (uVar4 >> 1);
      lVar6 = uVar4 * 8;
    }
    param_2[1] = uVar4;
    uVar2 = FUN_00406030(uVar2,lVar6);
    uVar5 = *param_2;
    uVar4 = param_2[1];
    param_2[2] = uVar2;
    param_3 = param_3 & 0xffffffff;
    if (uVar5 < uVar4) {
      puVar3 = (undefined8 *)(uVar2 + uVar5 * 8);
      do {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      } while ((undefined8 *)(uVar2 + uVar4 * 8) != puVar3);
    }
  }
  cVar1 = FUN_00403040(param_1,uVar2 + uVar5 * 8,param_3);
  if (cVar1 != '\0') {
    *param_2 = *param_2 + 1;
  }
  return;
}


void FUN_004034f0(int param_1)

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
  
  uVar7 = DAT_0060d3d0;
  bVar13 = 0;
  if (param_1 != 0) {
    uVar3 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(stderr,1,uVar3,uVar7);
    goto LAB_0040352f;
  }
  uVar3 = dcgettext(0,"Usage: %s [OPTION]... FILE1 FILE2\n",5);
  __printf_chk(1,uVar3,uVar7);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "For each pair of input lines with identical join fields, write a line to\nstandard output.  The default join field is the first, delimited by blanks.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"\nWhen FILE1 or FILE2 (not both) is -, read standard input.\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\n  -a FILENUM        also print unpairable lines from file FILENUM, where\n                      FILENUM is 1 or 2, corresponding to FILE1 or FILE2\n  -e EMPTY          replace missing input fields with EMPTY\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -i, --ignore-case  ignore differences in case when comparing fields\n  -j FIELD          equivalent to \'-1 FIELD -2 FIELD\'\n  -o FORMAT         obey FORMAT while constructing output line\n  -t CHAR           use CHAR as input and output field separator\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -v FILENUM        like -a FILENUM, but suppress joined output lines\n  -1 FIELD          join on this FIELD of file 1\n  -2 FIELD          join on this FIELD of file 2\n  --check-order     check that the input is correctly sorted, even\n                      if all input lines are pairable\n  --nocheck-order   do not check that the input is correctly sorted\n  --header          treat the first line in each file as field headers,\n                      print them without trying to pair them\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"  -z, --zero-terminated     line delimiter is NUL, not newline\n",5)
  ;
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"      --help     display this help and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"      --version  output version information and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nUnless -t CHAR is given, leading blanks separate fields and are ignored,\nelse fields are separated by CHAR.  Any FIELD is a field number counted\nfrom 1.  FORMAT is one or more comma or blank separated specifications,\neach being \'FILENUM.FIELD\' or \'0\'.  Default FORMAT outputs the join field,\nthe remaining fields from FILE1, the remaining fields from FILE2, all\nseparated by CHAR.  If FORMAT is the keyword \'auto\', then the first\nline of each file determines the number of fields output for each line.\n\nImportant: FILE1 and FILE2 must be sorted on the join fields.\nE.g., use \"sort -k 1b,1\" if \'join\' has no options,\nor use \"join -t \'\'\" if \'sort\' has no options.\nNote, comparisons honor the rules specified by \'LC_COLLATE\'.\nIf the input is not sorted and some lines cannot be joined, a\nwarning message will be given.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  local_88 = &DAT_00408d51;
  local_80 = "test invocation";
  local_78[0] = (byte *)0x408dcb;
  local_78[1] = (byte *)0x408d63;
  local_78[2] = (byte *)0x408d79;
  local_78[3] = (byte *)0x408d83;
  local_78[4] = (byte *)0x408d92;
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
    pbVar10 = &DAT_00408d4c;
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
        pbVar9 = &DAT_00408d4c;
        goto LAB_00403883;
      }
    }
    pbVar9 = &DAT_00408d4c;
    uVar7 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    pcVar4 = " invocation";
    __printf_chk(1,uVar7,"https://www.gnu.org/software/coreutils/",&DAT_00408d4c);
  }
  else {
    uVar7 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar7,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
      iVar2 = strncmp(pcVar4,"en_",3);
      if (iVar2 != 0) {
LAB_00403883:
        uVar7 = dcgettext(0,"Report %s translation bugs to <https://translationproject.org/team/>\n"
                          ,5);
        __printf_chk(1,uVar7,&DAT_00408d4c);
      }
    }
    pcVar4 = " invocation";
    uVar7 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    __printf_chk(1,uVar7,"https://www.gnu.org/software/coreutils/",&DAT_00408d4c);
    if (pbVar9 != &DAT_00408d4c) {
      pcVar4 = "";
    }
  }
  uVar7 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(1,uVar7,pbVar9,pcVar4);
LAB_0040352f:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}


void FUN_004038b0(undefined8 param_1,int *param_2,int *param_3,int *param_4,int *param_5,
                 undefined4 *param_6)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  
  iVar7 = *param_4;
  if (iVar7 == 2) {
    iVar1 = *param_2;
    uVar5 = (&DAT_0060d390)[iVar1 == 0];
    iVar2 = param_2[iVar1 == 0];
    if (iVar2 == 1) {
      *param_3 = *param_3 + -1;
      uVar5 = FUN_00402910(uVar5);
      FUN_004028c0(&DAT_0060d228,uVar5);
    }
    else if (iVar2 < 2) {
      if (iVar2 == 0) {
        uVar5 = FUN_004057b0(4,param_1);
        uVar4 = dcgettext(0,"extra operand %s",5);
                    /* WARNING: Subroutine does not return */
        error(0,0,uVar4,uVar5);
      }
    }
    else if (iVar2 == 2) {
      param_3[1] = param_3[1] + -1;
      uVar5 = FUN_00402910(uVar5);
      FUN_004028c0(&DAT_0060d220,uVar5);
    }
    else if (iVar2 == 3) {
      FUN_00402990();
    }
    if (iVar1 == 0) {
      lVar3 = 8;
      lVar6 = 4;
    }
    else {
      lVar6 = 4;
      *param_2 = param_2[1];
      DAT_0060d390 = DAT_0060d398;
      lVar3 = 8;
    }
  }
  else {
    lVar3 = (long)iVar7;
    iVar7 = iVar7 + 1;
    lVar6 = lVar3 * 4;
    lVar3 = lVar3 << 3;
  }
  *(int *)((long)param_2 + lVar6) = *param_5;
  *(undefined8 *)((long)&DAT_0060d390 + lVar3) = param_1;
  *param_4 = iVar7;
  if (*param_5 == 3) {
    *param_6 = 3;
  }
  return;
}


void FUN_00403a40(undefined8 param_1)

{
  DAT_0060d3c8 = param_1;
  return;
}


void FUN_00403a50(undefined param_1)

{
  DAT_0060d3c0 = param_1;
  return;
}


void FUN_00403a60(void)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  iVar1 = FUN_004079d0(stdout);
  if (iVar1 != 0) {
    piVar2 = __errno_location();
    if ((DAT_0060d3c0 == '\0') || (*piVar2 != 0x20)) {
      uVar3 = dcgettext(0,"write error",5);
      if (DAT_0060d3c8 != 0) {
        uVar4 = FUN_00405850();
                    /* WARNING: Subroutine does not return */
        error(0,*piVar2,"%s: %s",uVar4,uVar3);
      }
                    /* WARNING: Subroutine does not return */
      error(0,*piVar2,"%s",uVar3);
    }
  }
  iVar1 = FUN_004079d0(stderr);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  _exit(DAT_0060d238);
}


void FUN_00403b00(void)

{
  (*(code *)PTR_posix_fadvise_0060d0f0)();
  return;
}


void FUN_00403b10(FILE *param_1,int param_2)

{
  int __fd;
  
  if (param_1 != (FILE *)0x0) {
    __fd = fileno(param_1);
    posix_fadvise(__fd,0,0,param_2);
    return;
  }
  return;
}


FILE * FUN_00403b40(char *param_1,char *param_2)

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
    iVar2 = FUN_00405a20(uVar1);
    if (iVar2 < 0) {
      piVar5 = __errno_location();
      pFVar4 = (FILE *)0x0;
      iVar2 = *piVar5;
      FUN_00406810(__stream);
      *piVar5 = iVar2;
    }
    else {
      iVar3 = FUN_00406810(__stream);
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


bool FUN_00403be0(int param_1)

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
    pbVar5 = &DAT_00408fd8;
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


void FUN_00403c40(undefined (*param_1) [16])

{
  *(undefined8 *)param_1[1] = 0;
  *param_1 = (undefined  [16])0x0;
  return;
}


long * FUN_00403c50(long *param_1,_IO_FILE *param_2,uint param_3)

{
  byte *pbVar1;
  long lVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char cVar7;
  uint uVar8;
  char *pcVar9;
  
  cVar7 = (char)param_3;
  pcVar5 = (char *)param_1[2];
  pcVar9 = pcVar5 + *param_1;
  pcVar6 = pcVar5;
  if ((*(byte *)&param_2->_flags & 0x10) != 0) {
    return (long *)0x0;
  }
  do {
    pbVar1 = (byte *)param_2->_IO_read_ptr;
    if (pbVar1 < param_2->_IO_read_end) {
      param_2->_IO_read_ptr = (char *)(pbVar1 + 1);
      uVar3 = (uint)*pbVar1;
LAB_00403c9b:
      pcVar4 = pcVar6;
      uVar8 = uVar3;
      if (pcVar6 == pcVar9) goto LAB_00403cf7;
    }
    else {
      uVar3 = __uflow(param_2);
      if (uVar3 != 0xffffffff) goto LAB_00403c9b;
      if (pcVar5 == pcVar6) {
        return (long *)0x0;
      }
      if ((*(byte *)&param_2->_flags & 0x20) != 0) {
        return (long *)0x0;
      }
      if (pcVar6[-1] == cVar7) goto LAB_00403d4c;
      if (pcVar6 != pcVar9) {
        *pcVar6 = cVar7;
        pcVar6 = pcVar6 + 1;
        goto LAB_00403d4c;
      }
      uVar3 = (int)cVar7;
      uVar8 = param_3 & 0xff;
LAB_00403cf7:
      lVar2 = *param_1;
      pcVar5 = (char *)FUN_00406130(pcVar5,param_1);
      param_1[2] = (long)pcVar5;
      pcVar9 = pcVar5 + *param_1;
      pcVar4 = pcVar5 + lVar2;
      uVar8 = uVar8 & 0xff;
    }
    pcVar6 = pcVar4 + 1;
    *pcVar4 = (char)uVar8;
    if (uVar3 == (int)cVar7) {
LAB_00403d4c:
      param_1[1] = (long)pcVar6 - (long)pcVar5;
      return param_1;
    }
  } while( true );
}


void FUN_00403d70(undefined8 param_1,undefined8 param_2)

{
  FUN_00403c50(param_1,param_2,10);
  return;
}


void FUN_00403d80(long param_1)

{
  free(*(void **)(param_1 + 0x10));
  return;
}


int FUN_00403d90(long param_1,long param_2,long param_3)

{
  int iVar1;
  __int32_t **pp_Var2;
  long lVar3;
  
  if (param_3 == 0) {
    return 0;
  }
  pp_Var2 = __ctype_toupper_loc();
  lVar3 = 0;
  do {
    iVar1 = (*pp_Var2)[*(byte *)(param_1 + lVar3)] - (*pp_Var2)[*(byte *)(param_2 + lVar3)];
    if (iVar1 != 0) {
      return iVar1;
    }
    lVar3 = lVar3 + 1;
  } while (lVar3 != param_3);
  return iVar1;
}


void FUN_00403de0(byte *param_1)

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
        pbVar6 = &DAT_00409020;
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
  DAT_0060d3d0 = param_1;
  program_invocation_name = param_1;
  return;
}


char * FUN_00403e80(char *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  byte *pbVar3;
  
  pcVar2 = (char *)dcgettext(0,param_1,5);
  if (param_1 == pcVar2) {
    pbVar3 = (byte *)FUN_00407a30();
    if ((*pbVar3 & 0xdf) == 0x55) {
      if (((((pbVar3[1] & 0xdf) != 0x54) || ((pbVar3[2] & 0xdf) != 0x46)) || (pbVar3[3] != 0x2d)) ||
         ((pbVar3[4] != 0x38 || (pbVar3[5] != 0)))) {
LAB_00403f58:
        pcVar2 = "\"";
        if (param_2 != 9) {
          pcVar2 = "\'";
        }
        return pcVar2;
      }
      cVar1 = *pcVar2;
      pcVar2 = &DAT_00409031;
      if (cVar1 != '`') {
        pcVar2 = &DAT_00409026;
      }
    }
    else {
      if (((((*pbVar3 & 0xdf) != 0x47) || ((pbVar3[1] & 0xdf) != 0x42)) || (pbVar3[2] != 0x31)) ||
         (((pbVar3[3] != 0x38 || (pbVar3[4] != 0x30)) ||
          ((pbVar3[5] != 0x33 || ((pbVar3[6] != 0x30 || (pbVar3[7] != 0)))))))) goto LAB_00403f58;
      cVar1 = *pcVar2;
      pcVar2 = &DAT_0040902d;
      if (cVar1 != '`') {
        pcVar2 = &DAT_0040902a;
      }
    }
  }
  return pcVar2;
}


ulong FUN_00403f80(undefined *param_1,ulong param_2,char *param_3,ulong param_4,int param_5,
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
LAB_00404bd1:
    if (param_2 != 0) {
      bVar3 = false;
      local_5b = false;
      bVar2 = true;
      local_70 = 0;
      goto LAB_00404806;
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
      goto LAB_00404bd1;
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
      param_8 = (char *)FUN_00403e80(&DAT_00409035,param_5);
      param_9 = (char *)FUN_00403e80(&DAT_0040a607);
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
LAB_00404018:
  uVar22 = 0;
  bVar5 = local_5b;
LAB_00404028:
  bVar23 = param_4 != uVar22;
  if (param_4 == 0xffffffffffffffff) {
    bVar23 = param_3[uVar22] != '\0';
  }
  bVar26 = bVar6;
  if (!bVar23) goto LAB_004047a8;
  bVar20 = (bool)(param_5 != 2 & bVar6);
  __s1 = (byte *)(param_3 + uVar22);
  uVar16 = uVar15;
  bVar4 = bVar3;
  if (bVar20) {
    if (local_a0 == 0) {
LAB_00404720:
      uVar19 = (ulong)*__s1;
      switch(uVar19) {
      case 0:
        goto switchD_00404732_caseD_0;
      default:
        bVar20 = false;
        goto switchD_0040459e_caseD_1;
      case 7:
        bVar17 = 0x61;
        goto LAB_00404435;
      case 8:
        bVar17 = 0x62;
        break;
      case 9:
switchD_00404732_caseD_9:
        bVar17 = 0x74;
        break;
      case 10:
switchD_00404732_caseD_a:
        bVar17 = 0x6e;
        break;
      case 0xb:
switchD_00404732_caseD_b:
        bVar17 = 0x76;
        goto LAB_00404435;
      case 0xc:
switchD_00404732_caseD_c:
        bVar17 = 0x66;
LAB_00404435:
        if (local_5c) {
          bVar25 = false;
          goto LAB_00404388;
        }
LAB_00404440:
        bVar23 = false;
        goto LAB_004041fb;
      case 0xd:
        bVar20 = false;
switchD_00404118_caseD_d:
        bVar25 = param_5 == 2;
        uVar19 = 0xd;
        bVar13 = 0x72;
        goto LAB_00404350;
      case 0x20:
        bVar25 = false;
LAB_0040477a:
        uVar19 = 0x20;
        goto LAB_00404742;
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
switchD_00404118_caseD_21:
        bVar25 = false;
        goto LAB_0040435b;
      case 0x23:
      case 0x7e:
        bVar26 = false;
LAB_0040475a:
        if (uVar22 == 0) {
          bVar25 = false;
          bVar23 = bVar20;
          bVar20 = bVar26;
          goto LAB_00404168;
        }
        bVar23 = false;
        goto LAB_0040417f;
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
LAB_00404742:
        bVar24 = false;
        bVar23 = bVar20;
        bVar20 = bVar25;
        goto LAB_00404181;
      case 0x27:
        bVar20 = false;
        goto switchD_0040459e_caseD_27;
      case 0x3f:
        bVar20 = false;
        goto switchD_0040459e_caseD_3f;
      case 0x5c:
        bVar20 = false;
        goto switchD_00404118_caseD_5c;
      case 0x7b:
      case 0x7d:
        bVar20 = false;
        goto switchD_0040459e_caseD_7b;
      }
      bVar25 = false;
      bVar23 = false;
      goto joined_r0x00404377;
    }
    if ((param_4 == 0xffffffffffffffff) && (1 < local_a0)) {
      param_4 = strlen(param_3);
    }
    if ((param_4 < uVar22 + local_a0) || (iVar7 = memcmp(__s1,local_78,local_a0), iVar7 != 0))
    goto LAB_00404720;
    if (!local_5c) {
      uVar19 = (ulong)*__s1;
      bVar25 = bVar20;
      switch(uVar19) {
      case 0:
        goto switchD_00404118_caseD_0;
      default:
        goto switchD_0040459e_caseD_1;
      case 7:
        bVar17 = 0x61;
        goto LAB_00404440;
      case 8:
        bVar25 = false;
        bVar23 = false;
        bVar17 = 0x62;
        break;
      case 9:
        goto switchD_00404732_caseD_9;
      case 10:
        goto switchD_00404732_caseD_a;
      case 0xb:
        goto switchD_00404732_caseD_b;
      case 0xc:
        goto switchD_00404732_caseD_c;
      case 0xd:
        goto switchD_00404118_caseD_d;
      case 0x20:
        goto LAB_0040477a;
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
        goto switchD_00404118_caseD_21;
      case 0x23:
      case 0x7e:
        bVar26 = bVar20;
        goto LAB_0040475a;
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
        goto LAB_00404742;
      case 0x27:
        goto switchD_0040459e_caseD_27;
      case 0x3f:
        goto switchD_0040459e_caseD_3f;
      case 0x5c:
        goto switchD_00404118_caseD_5c;
      case 0x7b:
      case 0x7d:
        goto switchD_0040459e_caseD_7b;
      }
      goto LAB_004041c2;
    }
    goto LAB_0040439a;
  }
  uVar19 = (ulong)*__s1;
  switch(uVar19) {
  case 0:
    if (bVar6) {
switchD_00404732_caseD_0:
      if (!local_5c) {
        bVar20 = false;
switchD_00404118_caseD_0:
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
            goto LAB_00404278;
          }
LAB_004044ba:
          param_1[uVar16] = 0x5c;
          uVar15 = uVar16;
        }
        else if (uVar15 < uVar9) goto LAB_004044ba;
        uVar16 = uVar15 + 1;
        bVar24 = bVar23;
        if (param_5 == 2) {
          bVar17 = 0x30;
          bVar23 = false;
          bVar4 = bVar3;
          goto LAB_00404278;
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
LAB_004044f9:
        bVar17 = (byte)uVar19;
        bVar23 = false;
        uVar15 = uVar16;
        bVar4 = bVar3;
        if ((bool)(bVar6 ^ 1U | bVar26)) goto LAB_00404278;
        goto LAB_00404181;
      }
      bVar26 = param_5 == 2;
      goto LAB_0040438c;
    }
    if ((param_6 & 1) == 0) {
      bVar25 = param_5 == 2;
      uVar19 = 0;
      bVar23 = false;
      bVar20 = false;
      goto LAB_00404168;
    }
    uVar22 = uVar22 + 1;
    goto LAB_00404028;
  default:
switchD_0040459e_caseD_1:
    bVar25 = bVar6;
    if (sVar8 != 1) {
      local_40[0] = (mbstate_t)0x0;
      if (param_4 == 0xffffffffffffffff) {
        param_4 = strlen(param_3);
      }
      uVar21 = 0;
      do {
        uVar1 = uVar22 + uVar21;
        lVar11 = FUN_00407840(&local_44,param_3 + uVar1,param_4 - uVar1,local_40);
        if (lVar11 == 0) break;
        if (lVar11 == -1) {
          bVar23 = false;
          goto LAB_00404eaa;
        }
        if (lVar11 == -2) {
          if ((param_4 <= uVar1) || (param_3[uVar1] == '\0')) goto LAB_00404fe7;
          goto LAB_00404fd7;
        }
        if (((param_5 == 2) && (local_5c)) && (lVar11 != 1)) {
          pcVar12 = param_3 + uVar1 + 1;
          do {
            if (((byte)(*pcVar12 + 0xa5U) < 0x22) &&
               ((1L << (*pcVar12 + 0xa5U & 0x3f) & 0x20000002bU) != 0)) {
              param_5 = 2;
              goto LAB_0040438c;
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
      goto LAB_00404eaa;
    }
    ppuVar10 = __ctype_b_loc();
    uVar21 = 1;
    bVar25 = ((*ppuVar10)[uVar19] & 0x4000) == 0;
    bVar23 = !bVar25;
    bVar25 = (bool)(bVar25 & bVar6);
    goto LAB_00404574;
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
    goto LAB_004045b2;
  case 10:
    uVar19 = 10;
    bVar13 = 0x6e;
    goto LAB_004045b2;
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
LAB_004045b2:
    bVar25 = param_5 == 2;
    bVar20 = (bool)(local_5c & bVar25);
    if (bVar20) {
LAB_004045ca:
      param_5 = 2;
      goto LAB_0040438c;
    }
    break;
  case 0x20:
    uVar19 = 0x20;
    goto LAB_00404156;
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
LAB_00404156:
    bVar25 = param_5 == 2;
    if ((local_5c) && (bVar25)) goto LAB_004045ca;
    goto LAB_00404168;
  case 0x23:
  case 0x7e:
LAB_0040414d:
    bVar25 = param_5 == 2;
    if (uVar22 == 0) goto LAB_00404156;
    goto LAB_0040435b;
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
    goto switchD_0040459e_caseD_25;
  case 0x27:
switchD_0040459e_caseD_27:
    bVar5 = bVar23;
    if (param_5 != 2) {
      bVar25 = false;
      uVar19 = 0x27;
      goto LAB_00404168;
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
      goto LAB_00404278;
    }
    goto LAB_0040438c;
  case 0x3f:
switchD_0040459e_caseD_3f:
    if (param_5 == 2) {
      if (!local_5c) {
        bVar17 = 0x3f;
        bVar24 = false;
        bVar23 = false;
        goto LAB_00404278;
      }
      goto LAB_0040438c;
    }
    if (param_5 != 5) {
      bVar25 = param_5 == 2;
      uVar19 = 0x3f;
      bVar23 = false;
      goto LAB_00404168;
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
        goto LAB_004044f9;
      }
      goto LAB_0040439a;
    }
    bVar25 = false;
    uVar19 = 0x3f;
    bVar23 = false;
    goto LAB_00404168;
  case 0x5c:
    if (param_5 != 2) {
switchD_00404118_caseD_5c:
      uVar19 = 0x5c;
      bVar17 = 0x5c;
      bVar13 = 0x5c;
      bVar25 = (bool)(bVar6 & local_5c & local_a0 != 0);
      if (!bVar25) break;
      uVar22 = uVar22 + 1;
      bVar23 = false;
      goto LAB_00404294;
    }
    if (local_5c) goto LAB_0040438c;
    uVar22 = uVar22 + 1;
    bVar23 = false;
    bVar17 = 0x5c;
    goto LAB_00404294;
  case 0x7b:
  case 0x7d:
switchD_0040459e_caseD_7b:
    bVar24 = param_4 != 1;
    if (param_4 == 0xffffffffffffffff) {
      bVar24 = param_3[1] != '\0';
    }
    bVar25 = param_5 == 2;
    if (!bVar24) goto LAB_0040414d;
    goto LAB_0040435b;
  }
LAB_00404350:
  if (!bVar6) {
LAB_0040435b:
    bVar23 = false;
    goto LAB_00404168;
  }
  bVar23 = false;
  bVar17 = bVar13;
  goto joined_r0x00404377;
LAB_004047a8:
  if ((uVar15 == 0) && ((bool)(local_5c & param_5 == 2))) {
    param_5 = 2;
LAB_0040438c:
    if (bVar26) {
      param_5 = 4;
    }
LAB_0040439a:
    uVar9 = FUN_00403f80(param_1,uVar9,param_3,param_4,param_5,param_6 & 0xfffffffd,0,param_8,
                         param_9);
    return uVar9;
  }
  bVar26 = (bool)(param_5 == 2 & (local_5c ^ 1U));
  bVar23 = (bool)(local_5c ^ 1U);
  if ((!bVar26) || (bVar23 = bVar26, !bVar5)) {
LAB_0040507d:
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
    uVar9 = FUN_00403f80(param_1,local_70,param_3,param_4,5,param_6,param_7,param_8,param_9);
    return uVar9;
  }
  local_5b = uVar9 == 0 && local_70 != 0;
  param_2 = local_70;
  bVar23 = bVar5;
  if (uVar9 != 0 || local_70 == 0) goto LAB_0040507d;
LAB_00404806:
  *param_1 = 0x27;
  param_5 = 2;
  uVar15 = 1;
  local_78 = "\'";
  local_a0 = 1;
  local_5c = false;
  uVar9 = param_2;
  goto LAB_00404018;
  while (__s1[uVar21] != 0) {
LAB_00404fd7:
    uVar21 = uVar21 + 1;
    if (param_4 <= uVar22 + uVar21) break;
  }
LAB_00404fe7:
  bVar23 = false;
LAB_00404eaa:
  if (1 < uVar21) {
LAB_00404a6e:
    bVar26 = false;
    uVar21 = uVar21 + uVar22;
    uVar16 = uVar22;
    do {
      bVar17 = (byte)uVar19;
      if (bVar25) {
        bVar26 = param_5 == 2;
        if (local_5c) goto LAB_0040438c;
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
        if (uVar21 <= uVar22) goto LAB_0040420d;
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
        if (uVar21 <= uVar22) goto LAB_00404294;
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
LAB_00404574:
  if (bVar25) {
    bVar23 = false;
    bVar25 = bVar6;
    goto LAB_00404a6e;
  }
switchD_0040459e_caseD_25:
  bVar25 = param_5 == 2;
LAB_00404168:
  bVar17 = (byte)uVar19;
  bVar24 = (bool)((bVar6 ^ 1U | bVar25) ^ 1 | local_5c);
  bVar26 = bVar20;
  if (bVar24) {
LAB_0040417f:
    bVar24 = false;
    bVar20 = bVar26;
LAB_00404181:
    bVar17 = (byte)uVar19;
    uVar16 = uVar15;
    bVar4 = bVar3;
    if ((param_7 == 0) || ((*(uint *)(param_7 + (uVar19 >> 5) * 4) >> (bVar17 & 0x1f) & 1) == 0))
    goto LAB_00404278;
    bVar25 = param_5 == 2;
  }
  else {
LAB_00404278:
    bVar25 = param_5 == 2;
    uVar15 = uVar16;
    bVar3 = bVar4;
    if (!bVar20) {
      uVar22 = uVar22 + 1;
      bVar3 = (bool)((bVar24 ^ 1U) & bVar4);
LAB_00404294:
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
      goto LAB_0040420d;
    }
  }
joined_r0x00404377:
  if (local_5c) {
LAB_00404388:
    bVar26 = (bool)(bVar6 & bVar25);
    goto LAB_0040438c;
  }
LAB_004041c2:
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
LAB_004041fb:
  if (uVar15 < uVar9) {
    param_1[uVar15] = 0x5c;
  }
  uVar15 = uVar15 + 1;
  uVar22 = uVar22 + 1;
  bVar4 = bVar3;
LAB_0040420d:
  bVar3 = bVar4;
  if (uVar15 < uVar9) {
    param_1[uVar15] = bVar17;
  }
  uVar15 = uVar15 + 1;
  if (!bVar23) {
    bVar2 = false;
  }
  goto LAB_00404028;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_004051b0(int param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

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
  puVar8 = (undefined4 *)PTR_DAT_0060d278;
  if (DAT_0060d290 <= param_1) {
    if (param_1 == 0x7fffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_00406220();
    }
    if (PTR_DAT_0060d278 == &DAT_0060d280) {
      puVar8 = (undefined4 *)FUN_00406030(0);
      uVar6 = PTR_DAT_0060d288._4_4_;
      uVar5 = PTR_DAT_0060d288._0_4_;
      uVar3 = _UNK_0060d284;
      PTR_DAT_0060d278 = (undefined *)puVar8;
      *puVar8 = _DAT_0060d280;
      puVar8[1] = uVar3;
      puVar8[2] = uVar5;
      puVar8[3] = uVar6;
    }
    else {
      puVar8 = (undefined4 *)FUN_00406030(PTR_DAT_0060d278);
      PTR_DAT_0060d278 = (undefined *)puVar8;
    }
    memset(puVar8 + (long)DAT_0060d290 * 4,0,(long)((param_1 + 1) - DAT_0060d290) << 4);
    DAT_0060d290 = param_1 + 1;
  }
  uVar2 = param_4[1];
  puVar10 = (ulong *)(puVar8 + (long)param_1 * 4);
  uVar4 = *puVar10;
  __ptr = (undefined *)puVar10[1];
  uVar9 = FUN_00403f80(__ptr,uVar4,param_2,param_3,*param_4,uVar2 | 1,param_4 + 2,
                       *(undefined8 *)(param_4 + 10),*(undefined8 *)(param_4 + 0xc));
  if (uVar4 <= uVar9) {
    uVar9 = uVar9 + 1;
    *puVar10 = uVar9;
    if (__ptr != &DAT_0060d3e0) {
      free(__ptr);
    }
    __ptr = (undefined *)FUN_00405fd0(uVar9);
    uVar3 = *param_4;
    puVar10[1] = (ulong)__ptr;
    FUN_00403f80(__ptr,uVar9,param_2,param_3,uVar3,uVar2 | 1,param_4 + 2,
                 *(undefined8 *)(param_4 + 10),*(undefined8 *)(param_4 + 0xc));
  }
  *piVar7 = iVar1;
  return __ptr;
}


void FUN_00405350(undefined *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_0060d4e0;
  }
  FUN_004061d0(param_1,0x38);
  *piVar2 = iVar1;
  return;
}


undefined4 FUN_00405390(undefined4 *param_1)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)&DAT_0060d4e0;
  }
  return *param_1;
}


void FUN_004053a0(undefined4 *param_1,undefined4 param_2)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)&DAT_0060d4e0;
  }
  *param_1 = param_2;
  return;
}


uint FUN_004053b0(undefined *param_1,byte param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_0060d4e0;
  }
  uVar1 = *(uint *)(param_1 + (ulong)(param_2 >> 5) * 4 + 8);
  uVar2 = uVar1 >> (param_2 & 0x1f);
  *(uint *)(param_1 + (ulong)(param_2 >> 5) * 4 + 8) =
       ((param_3 ^ uVar2) & 1) << (param_2 & 0x1f) ^ uVar1;
  return uVar2 & 1;
}


undefined4 FUN_004053f0(undefined *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_0060d4e0;
  }
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_1 + 4) = param_2;
  return uVar1;
}


void FUN_00405410(undefined4 *param_1,long param_2,long param_3)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)&DAT_0060d4e0;
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


void FUN_00405440(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 *param_5)

{
  int iVar1;
  int *piVar2;
  
  if (param_5 == (undefined4 *)0x0) {
    param_5 = (undefined4 *)&DAT_0060d4e0;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  FUN_00403f80(param_1,param_2,param_3,param_4,*param_5,param_5[1],param_5 + 2,
               *(undefined8 *)(param_5 + 10),*(undefined8 *)(param_5 + 0xc));
  *piVar2 = iVar1;
  return;
}


undefined8 FUN_004054c0(undefined8 param_1,undefined8 param_2,long *param_3,undefined4 *param_4)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  
  if (param_4 == (undefined4 *)0x0) {
    param_4 = (undefined4 *)&DAT_0060d4e0;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  uVar5 = (uint)(param_3 == (long *)0x0) | param_4[1];
  lVar3 = FUN_00403f80(0,0,param_1,param_2,*param_4,uVar5,param_4 + 2,*(undefined8 *)(param_4 + 10),
                       *(undefined8 *)(param_4 + 0xc));
  uVar4 = FUN_00405fd0(lVar3 + 1);
  FUN_00403f80(uVar4,lVar3 + 1,param_1,param_2,*param_4,uVar5,param_4 + 2,
               *(undefined8 *)(param_4 + 10),*(undefined8 *)(param_4 + 0xc));
  *piVar2 = iVar1;
  if (param_3 != (long *)0x0) {
    *param_3 = lVar3;
  }
  return uVar4;
}


void FUN_004055b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_004054c0(param_1,param_2,0,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004055c0(void)

{
  void **ppvVar1;
  void *__ptr;
  undefined *__ptr_00;
  void **ppvVar2;
  
  __ptr_00 = PTR_DAT_0060d278;
  if (1 < DAT_0060d290) {
    ppvVar2 = (void **)(PTR_DAT_0060d278 + 0x18);
    ppvVar1 = (void **)(PTR_DAT_0060d278 + (ulong)(DAT_0060d290 - 2) * 0x10 + 0x28);
    do {
      __ptr = *ppvVar2;
      ppvVar2 = ppvVar2 + 2;
      free(__ptr);
    } while (ppvVar2 != ppvVar1);
  }
  if (*(undefined **)(__ptr_00 + 8) != &DAT_0060d3e0) {
    free(*(undefined **)(__ptr_00 + 8));
    _DAT_0060d280 = 0x100;
    PTR_DAT_0060d288 = &DAT_0060d3e0;
  }
  if (__ptr_00 != &DAT_0060d280) {
    free(__ptr_00);
    PTR_DAT_0060d278 = &DAT_0060d280;
  }
  DAT_0060d290 = 1;
  return;
}


void FUN_00405660(undefined8 param_1,undefined8 param_2)

{
  FUN_004051b0(param_1,param_2,0xffffffffffffffff,&DAT_0060d4e0);
  return;
}


void FUN_00405680(void)

{
  FUN_004051b0();
  return;
}


void FUN_00405690(undefined8 param_1)

{
  FUN_004051b0(0,param_1,0xffffffffffffffff,&DAT_0060d4e0);
  return;
}


void FUN_004056b0(undefined8 param_1,undefined8 param_2)

{
  FUN_004051b0(0,param_1,param_2,&DAT_0060d4e0);
  return;
}


void FUN_004056d0(undefined8 param_1,int param_2,undefined8 param_3)

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
    FUN_004051b0(param_1,param_3,0xffffffffffffffff,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00405740(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

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
    FUN_004051b0(param_1,param_3,param_4,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_004057b0(undefined4 param_1,undefined8 param_2)

{
  FUN_004056d0(0,param_1,param_2);
  return;
}


void FUN_004057c0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00405740(0,param_1,param_2,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004057d0(undefined8 param_1,undefined8 param_2,byte param_3)

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
  
  local_18 = DAT_0060d510;
  local_48 = _DAT_0060d4e0;
  uStack_40 = uRam000000000060d4e8;
  local_38 = _DAT_0060d4f0;
  uStack_30 = uRam000000000060d4f8;
  puVar1 = (uint *)((long)&uStack_40 + (ulong)(param_3 >> 5) * 4);
  local_28 = _DAT_0060d500;
  uStack_20 = uRam000000000060d508;
  uVar2 = *puVar1;
  *puVar1 = (~(uVar2 >> (param_3 & 0x1f)) & 1) << (param_3 & 0x1f) ^ uVar2;
  FUN_004051b0(0,param_1,param_2,&local_48);
  return;
}


void FUN_00405840(undefined8 param_1,char param_2)

{
  FUN_004057d0(param_1,0xffffffffffffffff,(int)param_2);
  return;
}


void FUN_00405850(undefined8 param_1)

{
  FUN_004057d0(param_1,0xffffffffffffffff,0x3a);
  return;
}


void FUN_00405870(undefined8 param_1,undefined8 param_2)

{
  FUN_004057d0(param_1,param_2,0x3a);
  return;
}


void FUN_00405880(undefined8 param_1,int param_2,undefined8 param_3)

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
    FUN_004051b0(param_1,param_3,0xffffffffffffffff,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004058f0(undefined8 param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5
                 )

{
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  long lStack_20;
  long local_18;
  
  uStack_40 = uRam000000000060d4e8;
  local_38 = _DAT_0060d4f0;
  uStack_30 = uRam000000000060d4f8;
  local_28 = _DAT_0060d500;
  lStack_20 = uRam000000000060d508;
  local_18 = DAT_0060d510;
  local_48 = CONCAT44((int)((ulong)_DAT_0060d4e0 >> 0x20),10);
  if ((param_2 != 0) && (param_3 != 0)) {
    lStack_20 = param_2;
    local_18 = param_3;
    FUN_004051b0(param_1,param_4,param_5,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00405960(void)

{
  FUN_004058f0();
  return;
}


void FUN_00405970(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_004058f0(0,param_1,param_2,param_3,0xffffffffffffffff);
  return;
}


void FUN_00405990(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_004058f0(0,param_1,param_2,param_3,param_4);
  return;
}


void FUN_004059b0(void)

{
  FUN_004051b0();
  return;
}


void FUN_004059c0(undefined8 param_1,undefined8 param_2)

{
  FUN_004051b0(0,param_1,param_2,&DAT_0060d240);
  return;
}


void FUN_004059e0(undefined8 param_1,undefined8 param_2)

{
  FUN_004051b0(param_1,param_2,0xffffffffffffffff,&DAT_0060d240);
  return;
}


void FUN_00405a00(undefined8 param_1)

{
  FUN_004051b0(0,param_1,0xffffffffffffffff,&DAT_0060d240);
  return;
}


void FUN_00405a20(undefined8 param_1)

{
  FUN_00406890(param_1,0,3);
  return;
}


undefined8
FUN_00405a30(FILE *param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5,
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
  uVar1 = dcgettext(0,&DAT_00409d8b,5);
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
    goto LAB_00405cac;
  case 5:
    uVar1 = param_5[3];
    uVar4 = param_5[2];
    uVar5 = param_5[1];
    uVar6 = *param_5;
    uVar7 = dcgettext(0,"Written by %s, %s, %s,\n%s, and %s.\n",5);
LAB_00405cac:
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
    goto LAB_00405d49;
  case 7:
    uVar1 = param_5[2];
    uVar4 = param_5[5];
    uVar5 = param_5[4];
    uVar6 = param_5[3];
    local_58 = param_5[1];
    uVar7 = *param_5;
    uVar3 = dcgettext(0,"Written by %s, %s, %s,\n%s, %s, %s, and %s.\n",5);
LAB_00405d49:
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
    goto LAB_00405b2a;
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
LAB_00405b2a:
  uVar1 = __fprintf_chk(param_1,1,uVar3,uVar7,local_50,local_58,uVar6,uVar5,uVar4,uVar1,local_48);
  return uVar1;
}


void FUN_00405e10(void)

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
  FUN_00405a30();
  return;
}


void FUN_00405e30(void)

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
  FUN_00405a30();
  return;
}


void FUN_00405e90(void)

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
  FUN_00405a30();
  return;
}


void FUN_00405f50(void)

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


void FUN_00405fd0(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00406220();
  }
  return;
}


void FUN_00405ff0(ulong param_1,ulong param_2)

{
  if ((-1 < SUB168(ZEXT816(param_1) * ZEXT816(param_2),0)) &&
     (SUB168(ZEXT816(param_1) * ZEXT816(param_2) >> 0x40,0) == 0)) {
    FUN_00405fd0();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00406220();
}


void thunk_FUN_00405fd0(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00406220();
  }
  return;
}


void * FUN_00406030(void *param_1,size_t param_2)

{
  void *pvVar1;
  
  if ((param_2 == 0) && (param_1 != (void *)0x0)) {
    free(param_1);
    return (void *)0x0;
  }
  pvVar1 = realloc(param_1,param_2);
  if ((pvVar1 == (void *)0x0) && (param_2 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00406220();
  }
  return pvVar1;
}


void FUN_00406070(undefined8 param_1,ulong param_2,ulong param_3)

{
  if ((-1 < SUB168(ZEXT816(param_2) * ZEXT816(param_3),0)) &&
     (SUB168(ZEXT816(param_2) * ZEXT816(param_3) >> 0x40,0) == 0)) {
    FUN_00406030();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00406220();
}


void FUN_004060a0(long param_1,ulong *param_2,ulong param_3)

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
    if ((SUB168(ZEXT816(uVar2) * ZEXT816(param_3),0) < 0) || (uVar3 != 0)) goto LAB_004060fb;
  }
  else {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x5555555555555554);
    uVar3 = SUB168(auVar1 % ZEXT816(param_3),0);
    if (SUB168(auVar1 / ZEXT816(param_3),0) <= uVar2) {
LAB_004060fb:
                    /* WARNING: Subroutine does not return */
      FUN_00406220(param_1,param_2,uVar3);
    }
    uVar2 = (uVar2 >> 1) + 1 + uVar2;
  }
  *param_2 = uVar2;
  FUN_00406030(param_1,uVar2 * param_3);
  return;
}


void FUN_00406130(long param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (param_1 == 0) {
    if (uVar1 == 0) {
      *param_2 = 0x80;
      FUN_00406030(0,0x80);
      return;
    }
    if ((long)uVar1 < 0) goto LAB_0040617a;
  }
  else {
    if (0x5555555555555553 < uVar1) {
LAB_0040617a:
                    /* WARNING: Subroutine does not return */
      FUN_00406220();
    }
    uVar1 = (uVar1 >> 1) + 1 + uVar1;
  }
  *param_2 = uVar1;
  FUN_00406030(param_1,uVar1);
  return;
}


void FUN_00406180(size_t param_1)

{
  void *__s;
  
  __s = (void *)FUN_00405fd0();
  memset(__s,0,param_1);
  return;
}


void FUN_004061a0(size_t param_1,ulong param_2)

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
  FUN_00406220();
}


void FUN_004061d0(void *param_1,size_t param_2)

{
  void *__dest;
  
  __dest = (void *)FUN_00405fd0(param_2);
  memcpy(__dest,param_1,param_2);
  return;
}


void FUN_00406200(char *param_1)

{
  void *__dest;
  size_t sVar1;
  
  sVar1 = strlen(param_1);
  __dest = (void *)FUN_00405fd0(sVar1 + 1);
  memcpy(__dest,param_1,sVar1 + 1);
  return;
}


void FUN_00406220(void)

{
  undefined8 uVar1;
  
  uVar1 = dcgettext(0,"memory exhausted",5);
                    /* WARNING: Subroutine does not return */
  error(DAT_0060d238,0,"%s",uVar1);
}


void FUN_00406260(undefined4 param_1)

{
  undefined8 uVar1;
  
  uVar1 = dcgettext(0,"string comparison failed",5);
                    /* WARNING: Subroutine does not return */
  error(0,param_1,uVar1);
}


undefined4 FUN_00406320(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  int *piVar2;
  
  uVar1 = FUN_00408060();
  piVar2 = __errno_location();
  if (*piVar2 == 0) {
    return uVar1;
  }
  FUN_00406260(*piVar2,param_1,param_2,param_3,param_4);
  return uVar1;
}


undefined4 FUN_00406380(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined4 uVar1;
  int *piVar2;
  
  uVar1 = FUN_00408110();
  piVar2 = __errno_location();
  if (*piVar2 == 0) {
    return uVar1;
  }
  FUN_00406260(*piVar2,param_1,param_2 + -1,param_3,param_4 + -1);
  return uVar1;
}


ulong FUN_004063e0(byte *param_1,byte **param_2,uint param_3,ulong *param_4,char *param_5)

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
    if ((param_5 == (char *)0x0) || (bVar12 = *pbVar5, bVar12 == 0)) goto LAB_00406480;
    pcVar7 = strchr(param_5,(int)(char)bVar12);
    if (pcVar7 == (char *)0x0) goto switchD_0040655c_caseD_1;
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
        goto LAB_0040654a;
      }
      if (bVar1 != 0x42) {
                    /* WARNING: Could not recover jumptable at 0x00406539. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar6 = (*(code *)(&PTR_LAB_0040a1d0)[bVar8])();
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
LAB_0040654a:
  iVar10 = (int)uVar11;
  switch(bVar12 - 0x42 & 0xff) {
  case 0:
    if (uVar6 >> 0x36 == 0) {
      uVar6 = uVar6 << 10;
      break;
    }
    goto LAB_004065b7;
  default:
switchD_0040655c_caseD_1:
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
    goto LAB_00406644;
  case 5:
  case 0x25:
    uVar11 = (ulong)iVar10;
    if (((SUB168(ZEXT816(uVar6) * ZEXT816(uVar11) >> 0x40,0) != 0) ||
        (auVar2 = (ZEXT816(uVar6) * ZEXT816(uVar11) & (undefined  [16])0xffffffffffffffff) *
                  ZEXT816(uVar11), SUB168(auVar2 >> 0x40,0) != 0)) ||
       (auVar2 = (auVar2 & (undefined  [16])0xffffffffffffffff) * ZEXT816(uVar11),
       uVar6 = SUB168(auVar2,0), SUB168(auVar2 >> 0x40,0) != 0)) {
      uVar6 = 0xffffffffffffffff;
      uVar14 = 1;
    }
    break;
  case 9:
  case 0x29:
    auVar2 = ZEXT816(uVar6) * ZEXT816(uVar11);
    goto joined_r0x0040657c;
  case 0xb:
  case 0x2b:
    auVar2 = ZEXT816(uVar6) * ZEXT816((ulong)(long)iVar10);
    if (SUB168(auVar2 >> 0x40,0) != 0) goto LAB_004065b7;
    auVar2 = (auVar2 & (undefined  [16])0xffffffffffffffff) * ZEXT816((ulong)(long)iVar10);
joined_r0x0040657c:
    uVar6 = SUB168(auVar2,0);
    if (SUB168(auVar2 >> 0x40,0) != 0) {
LAB_004065b7:
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
    goto LAB_00406644;
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
    goto LAB_00406644;
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
    goto LAB_00406644;
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
LAB_00406644:
    uVar14 = (ulong)(uVar13 | uVar9);
    break;
  case 0x20:
    if (uVar6 >> 0x37 != 0) goto LAB_004065b7;
    uVar6 = uVar6 << 9;
    break;
  case 0x21:
    break;
  case 0x35:
    if ((long)uVar6 < 0) goto LAB_004065b7;
    uVar6 = uVar6 * 2;
  }
  *param_2 = pbVar5 + iVar15;
  if (pbVar5[iVar15] != 0) {
    uVar14 = (ulong)((uint)uVar14 | 2);
  }
LAB_00406480:
  *param_4 = uVar6;
  return uVar14;
}


int FUN_00406810(FILE *param_1)

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
      if (_Var4 == -1) goto LAB_00406877;
    }
    iVar1 = FUN_004069d0(param_1);
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
LAB_00406877:
  iVar1 = fclose(param_1);
  return iVar1;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_00406890(ulong param_1,int param_2,ulong param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  
  if (param_2 != 0x406) {
    iVar1 = fcntl((int)param_1,param_2,param_3);
    return iVar1;
  }
  if (DAT_0060d518 < 0) {
    iVar1 = FUN_00406890(param_1,0,param_3 & 0xffffffff);
    if (iVar1 < 0) {
      return iVar1;
    }
    if (DAT_0060d518 != -1) {
      return iVar1;
    }
  }
  else {
    iVar1 = fcntl((int)param_1,0x406);
    if ((-1 < iVar1) || (piVar4 = __errno_location(), *piVar4 != 0x16)) {
      DAT_0060d518 = 1;
      return iVar1;
    }
    iVar1 = FUN_00406890(param_1 & 0xffffffff,0,param_3 & 0xffffffff);
    if (iVar1 < 0) {
      return iVar1;
    }
    DAT_0060d518 = -1;
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


void FUN_004069d0(FILE *param_1)

{
  int iVar1;
  
  if (param_1 != (FILE *)0x0) {
    iVar1 = __freading();
    if ((iVar1 != 0) && ((param_1->_flags & 0x100U) != 0)) {
      FUN_00406a10(param_1,0,1);
      fflush(param_1);
      return;
    }
  }
  fflush(param_1);
  return;
}


ulong FUN_00406a10(FILE *param_1,__off_t param_2,int param_3)

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


void FUN_00406a70(long param_1,int *param_2)

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
      if (iVar3 <= iVar8) goto LAB_00406aec;
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
      if (iVar9 <= iVar3) goto LAB_00406aec;
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
LAB_00406aec:
  param_2[0xc] = iVar2;
  param_2[0xb] = iVar1 + (iVar2 - iVar3);
  return;
}


int FUN_00406b50(int param_1,undefined8 *param_2,char *param_3,char **param_4,undefined4 *param_5,
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
      if ((iVar5 == 0) && (sVar7 = strlen(__s1_00), sVar7 == sVar15)) goto LAB_00406d70;
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
            if (local_70 == (char *)0x0) goto LAB_00406cb0;
          }
          else if (local_70 == (char *)0x0) {
            local_70 = (char *)calloc((long)iVar5,1);
            if (local_70 == (char *)0x0) {
              bVar3 = true;
              goto LAB_00406cb0;
            }
            bVar4 = true;
            local_70[(int)local_44] = '\x01';
          }
          local_70[lVar16] = '\x01';
        }
      }
LAB_00406cb0:
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
              __fprintf_chk(__stream,1,&DAT_0040a601,param_9,*param_4);
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
LAB_00406d70:
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


uint FUN_00407170(uint param_1,undefined8 *param_2,char *param_3,long param_4,undefined8 param_5,
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
LAB_004071ba:
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
          goto LAB_004072bd;
        }
        pbVar8 = *(byte **)(param_7 + 8);
      }
      param_7[10] = 0;
    }
LAB_004072bd:
    param_7[6] = 1;
    cVar2 = *param_3;
LAB_004072c8:
    if (cVar2 == ':') {
      uVar3 = 0;
    }
    if (pbVar8 == (byte *)0x0) goto LAB_00407238;
LAB_004072dc:
    if (*pbVar8 == 0) goto LAB_00407238;
  }
  else {
    if (param_7[6] == 0) goto LAB_004071ba;
    cVar2 = *param_3;
    pbVar8 = *(byte **)(param_7 + 8);
    if ((cVar2 - 0x2bU & 0xfd) != 0) goto LAB_004072c8;
    pcVar4 = param_3 + 1;
    param_3 = param_3 + 1;
    if (*pcVar4 == ':') {
      uVar3 = 0;
    }
    if (pbVar8 != (byte *)0x0) goto LAB_004072dc;
LAB_00407238:
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
        FUN_00406a70(param_2,param_7);
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
LAB_004073a6:
      if (uVar11 != param_1) {
        *param_7 = uVar11;
      }
      return 0xffffffff;
    }
    lVar6 = 3;
    pbVar8 = (byte *)param_2[(int)uVar11];
    pbVar9 = pbVar8;
    pbVar10 = &DAT_0040a619;
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
          FUN_00406a70(param_2,param_7);
          uVar11 = param_7[0xb];
        }
      }
      param_7[0xc] = param_1;
      *param_7 = param_1;
      goto LAB_004073a6;
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
        puVar15 = &DAT_0040a619;
        goto LAB_00407505;
      }
      if ((int)param_6 != 0) {
        if (pbVar8[2] == 0) {
          pcVar4 = strchr(param_3,(int)(char)bVar14);
          param_6 = param_6 & 0xffffffff;
          if (pcVar4 != (char *)0x0) goto LAB_004074b0;
        }
        *(byte **)(param_7 + 8) = pbVar8 + 1;
        uVar11 = FUN_00406b50(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar3,
                              &DAT_0040a61a);
        if (uVar11 != 0xffffffff) {
          return uVar11;
        }
        pbVar8 = (byte *)param_2[(int)*param_7];
      }
    }
LAB_004074b0:
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
  puVar15 = &DAT_0040a638;
LAB_00407505:
  uVar3 = FUN_00406b50(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar3,puVar15);
  return uVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407740(void)

{
  DAT_0060d520 = DAT_0060d29c;
  _DAT_0060d524 = DAT_0060d298;
  FUN_00407170();
  DAT_0060d29c = DAT_0060d520;
  DAT_0060d560 = DAT_0060d530;
  _DAT_0060d294 = DAT_0060d528;
  return;
}


void FUN_004077a0(void)

{
  FUN_00407740();
  return;
}


void FUN_004077c0(void)

{
  FUN_00407740();
  return;
}


void FUN_004077e0(void)

{
  FUN_00407170();
  return;
}


void FUN_00407800(void)

{
  FUN_00407740();
  return;
}


void FUN_00407820(void)

{
  FUN_00407170();
  return;
}


size_t FUN_00407840(wchar_t *param_1,byte *param_2,size_t param_3,mbstate_t *param_4)

{
  char cVar1;
  size_t sVar2;
  wchar_t local_1c;
  
  if (param_2 == (byte *)0x0) {
    param_3 = 1;
    param_2 = &DAT_00408d08;
  }
  else {
    if (param_3 == 0) {
      return 0xfffffffffffffffe;
    }
    if (param_1 != (wchar_t *)0x0) goto LAB_00407864;
  }
  param_1 = &local_1c;
LAB_00407864:
  sVar2 = mbrtowc(param_1,(char *)param_2,param_3,param_4);
  if ((0xfffffffffffffffd < sVar2) && (cVar1 = FUN_00403be0(0), cVar1 == '\0')) {
    sVar2 = 1;
    *param_1 = (uint)*param_2;
  }
  return sVar2;
}


ulong * FUN_004078c0(ulong *param_1,char param_2,ulong param_3)

{
  char cVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  
  if (param_3 == 0) {
    return (ulong *)0x0;
  }
  if (((ulong)param_1 & 7) == 0) {
LAB_00407900:
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
      if (((ulong)param_1 & 7) == 0) goto LAB_00407900;
      cVar1 = *(char *)param_1;
    }
  }
  return param_1;
}


ulong FUN_004079d0(uint *param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  
  lVar2 = __fpending();
  uVar1 = *param_1;
  uVar3 = FUN_00406810(param_1);
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


/* WARNING: Could not reconcile some variable overlaps */

char * FUN_00407a30(void)

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
  if (DAT_0060d558 != (char *)0x0) goto LAB_00407a6a;
  pcVar7 = getenv("CHARSETALIASDIR");
  if ((pcVar7 == (char *)0x0) || (*pcVar7 == '\0')) {
    sVar6 = 0x73;
    sVar5 = 0x65;
    __n = 100;
    pcVar7 = 
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib"
    ;
LAB_00407b55:
    __file = (char *)malloc(sVar6);
    if (__file != (char *)0x0) {
      memcpy(__file,pcVar7,__n);
      __file[__n] = '/';
      goto LAB_00407b76;
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
        goto LAB_00407b55;
      }
      sVar6 = __n + 0xe;
    }
    __file = (char *)malloc(sVar6);
    if (__file != (char *)0x0) {
      memcpy(__file,pcVar7,__n);
      sVar5 = __n;
LAB_00407b76:
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
LAB_00407c10:
          pbVar8 = (byte *)__stream->_IO_read_ptr;
          if (__stream->_IO_read_end <= pbVar8) goto LAB_00407d9c;
          do {
            __stream->_IO_read_ptr = (char *)(pbVar8 + 1);
            uVar4 = (uint)*pbVar8;
            __ptr = pcVar7;
            while( true ) {
              pcVar7 = __ptr;
              if ((uVar4 - 9 < 2) || (uVar4 == 0x20)) goto LAB_00407c10;
              if (uVar4 == 0x23) goto LAB_00407e01;
              ungetc(uVar4,__stream);
              iVar2 = fscanf(__stream,"%50s %50s",&local_b8,&local_78);
              puVar13 = &local_b8;
              if (iVar2 < 2) goto LAB_00407daf;
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
                FUN_00406810(__stream);
                goto LAB_00407bb4;
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
LAB_00407d9c:
              uVar4 = __uflow(__stream);
              __ptr = pcVar7;
              if (uVar4 == 0xffffffff) goto LAB_00407daf;
            }
          } while( true );
        }
        close(iVar2);
      }
      goto LAB_00407bae;
    }
  }
  DAT_0060d558 = "";
LAB_00407a6a:
  cVar1 = *DAT_0060d558;
  pcVar7 = DAT_0060d558;
  do {
    if (cVar1 == '\0') {
LAB_00407ac4:
      if (*__s1 == '\0') {
        __s1 = "ASCII";
      }
      return __s1;
    }
    iVar2 = strcmp(__s1,pcVar7);
    if ((iVar2 == 0) || ((cVar1 == '*' && (pcVar7[1] == '\0')))) {
      sVar6 = strlen(pcVar7);
      __s1 = pcVar7 + sVar6 + 1;
      goto LAB_00407ac4;
    }
    sVar6 = strlen(pcVar7);
    sVar5 = strlen(pcVar7 + sVar6 + 1);
    pcVar7 = pcVar7 + sVar6 + 1 + sVar5 + 1;
    cVar1 = *pcVar7;
  } while( true );
LAB_00407e01:
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
  if (uVar4 == 0xffffffff) goto LAB_00407daf;
  goto LAB_00407c10;
LAB_00407daf:
  FUN_00406810(__stream);
  if (local_d0 == 0) {
LAB_00407bae:
    pcVar7 = "";
  }
  else {
    pcVar7[local_d0] = '\0';
  }
LAB_00407bb4:
  free(__file);
  DAT_0060d558 = pcVar7;
  goto LAB_00407a6a;
}


int FUN_00407fa0(char *param_1,long param_2,char *param_3,long param_4)

{
  int iVar1;
  int *piVar2;
  size_t sVar3;
  size_t sVar4;
  
  piVar2 = __errno_location();
  while( true ) {
    *piVar2 = 0;
    iVar1 = strcoll(param_1,param_3);
    if (iVar1 != 0) {
      return iVar1;
    }
    sVar3 = strlen(param_1);
    sVar4 = strlen(param_3);
    param_1 = param_1 + sVar3 + 1;
    param_3 = param_3 + sVar4 + 1;
    param_4 = param_4 - (sVar4 + 1);
    param_2 = param_2 - (sVar3 + 1);
    if (param_2 == 0) break;
    if (param_4 == 0) {
      return 1;
    }
  }
  return -(uint)(param_4 != 0);
}


undefined4 FUN_00408060(void *param_1,size_t param_2,void *param_3,size_t param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined uVar3;
  undefined uVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  
  if ((param_2 == param_4) && (iVar5 = memcmp(param_1,param_3,param_2), iVar5 == 0)) {
    piVar7 = __errno_location();
    *piVar7 = 0;
    return 0;
  }
  puVar1 = (undefined *)((long)param_1 + param_2);
  puVar2 = (undefined *)((long)param_3 + param_4);
  uVar3 = *puVar1;
  uVar4 = *puVar2;
  *puVar1 = 0;
  *puVar2 = 0;
  uVar6 = FUN_00407fa0(param_1,param_2 + 1,param_3,param_4 + 1);
  *puVar1 = uVar3;
  *puVar2 = uVar4;
  return uVar6;
}


undefined8 FUN_00408110(void *param_1,size_t param_2,void *param_3,size_t param_4)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  
  if (param_2 == param_4) {
    iVar1 = memcmp(param_1,param_3,param_2);
    if (iVar1 == 0) {
      piVar2 = __errno_location();
      *piVar2 = 0;
      return 0;
    }
  }
  uVar3 = FUN_00407fa0(param_1,param_2,param_3,param_4);
  return uVar3;
}


/* WARNING: Removing unreachable block (ram,0x004081b3) */
/* WARNING: Removing unreachable block (ram,0x004081b8) */

void FUN_00408180(void)

{
  __DT_INIT();
  return;
}


void FUN_004081e0(void)

{
  return;
}


void FUN_004081f0(undefined8 param_1)

{
  __cxa_atexit(param_1,0,DAT_0060d208);
  return;
}


undefined8 FUN_00408208(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  FUN_00402861();
  return;
}

