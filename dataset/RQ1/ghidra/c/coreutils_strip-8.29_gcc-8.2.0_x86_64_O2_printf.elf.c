
void switchD_00403320::caseD_b(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401775(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_0040177a(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_0040177f(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401784(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void switchD_004051ba::caseD_0(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void switchD_00406b6c::caseD_5(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Could not reconcile some variable overlaps */

undefined4 FUN_004017a0(int param_1,undefined8 *param_2)

{
  byte *pbVar1;
  bool bVar2;
  bool bVar3;
  _IO_FILE *__stream;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  byte *pbVar9;
  ulong uVar10;
  void *pvVar11;
  int *piVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  byte *pbVar15;
  long lVar16;
  byte *pbVar17;
  char extraout_DL;
  char cVar18;
  uint uVar19;
  byte *__n;
  byte *pbVar20;
  uint uVar21;
  undefined uVar22;
  ulong uVar23;
  char cVar24;
  undefined8 *puVar25;
  byte *pbVar26;
  byte *pbVar27;
  undefined8 uVar28;
  byte bVar29;
  byte **ppbVar30;
  byte *pbVar31;
  byte *pbVar32;
  byte bVar33;
  byte **local_1b0;
  int local_1a4;
  byte *local_1a0;
  byte *local_190;
  undefined4 local_158;
  undefined8 local_140;
  undefined8 local_138 [8];
  undefined local_f7;
  undefined local_f3;
  undefined2 local_f2;
  undefined local_e0;
  undefined local_d7;
  undefined local_d5;
  uint local_d4;
  byte local_cf;
  undefined local_c9;
  undefined local_c5;
  byte local_c3;
  undefined local_c0;
  
  bVar33 = 0;
  FUN_00403130(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils",
                 "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale"
                );
  textdomain("coreutils");
  FUN_00408ed0(FUN_00403090);
  DAT_0060d29c = 0;
  pcVar6 = getenv("POSIXLY_CORRECT");
  DAT_0060d298 = pcVar6 != (char *)0x0;
  if (param_1 == 2) {
    pcVar6 = (char *)param_2[1];
    iVar4 = strcmp(pcVar6,"--help");
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00402c40(0);
    }
    iVar4 = strcmp(pcVar6,"--version");
    if (iVar4 == 0) {
      FUN_00405590(stdout,"printf","GNU coreutils",PTR_DAT_0060d1f0,"David MacKenzie",0);
      return 0;
    }
    iVar4 = strcmp(pcVar6,"--");
    if (iVar4 == 0) goto LAB_0040181c;
  }
  else {
    if (param_1 < 2) {
LAB_0040181c:
      uVar7 = dcgettext(0,"missing operand",5);
      error(0,0,uVar7);
                    /* WARNING: Subroutine does not return */
      FUN_00402c40(1);
    }
    iVar4 = strcmp((char *)param_2[1],"--");
    if (iVar4 == 0) {
      param_1 = param_1 + -1;
      param_2 = param_2 + 1;
    }
  }
  pbVar1 = (byte *)param_2[1];
  local_1b0 = (byte **)(param_2 + 2);
  local_1a4 = param_1 + -2;
LAB_00401880:
  bVar29 = *pbVar1;
  if (bVar29 != 0) {
    local_190 = (byte *)0x0;
    local_158 = 0;
    pbVar9 = pbVar1;
    ppbVar30 = local_1b0;
    iVar4 = local_1a4;
LAB_004018ec:
    while (__stream = stdout, bVar29 == 0x25) {
      bVar29 = pbVar9[1];
      pbVar20 = pbVar9 + 1;
      pbVar32 = pbVar9 + 2;
      if (bVar29 == 0x25) {
        pcVar6 = stdout->_IO_write_ptr;
        if (pcVar6 < stdout->_IO_write_end) {
          stdout->_IO_write_ptr = pcVar6 + 1;
          *pcVar6 = '%';
        }
        else {
          __overflow(stdout,0x25);
        }
        goto LAB_004018e0;
      }
      if (bVar29 == 0x62) {
        if (iVar4 != 0) {
          pbVar9 = *ppbVar30;
          bVar29 = *pbVar9;
          while (bVar29 != 0) {
            if (bVar29 == 0x5c) {
              iVar5 = FUN_004025f0(pbVar9,1);
              pbVar9 = pbVar9 + iVar5;
            }
            else {
              pbVar27 = (byte *)stdout->_IO_write_ptr;
              if (pbVar27 < stdout->_IO_write_end) {
                stdout->_IO_write_ptr = (char *)(pbVar27 + 1);
                *pbVar27 = bVar29;
              }
              else {
                __overflow(stdout,(uint)bVar29);
              }
            }
            pbVar27 = pbVar9 + 1;
            pbVar9 = pbVar9 + 1;
            bVar29 = *pbVar27;
          }
          goto LAB_00401a17;
        }
      }
      else {
        if (bVar29 != 0x71) {
          pbVar27 = (byte *)0x0;
          uVar7 = 0;
          local_1a0 = (byte *)0x0;
          cVar18 = '\0';
          puVar25 = local_138;
          for (lVar16 = 0x20; lVar16 != 0; lVar16 = lVar16 + -1) {
            *puVar25 = 0;
            puVar25 = puVar25 + (ulong)bVar33 * -2 + 1;
          }
          local_e0 = 1;
          uVar8 = 1;
          local_f2 = 0x101;
          cVar24 = '\0';
          uVar28 = 0;
          local_c0 = 1;
          uVar22 = 1;
          pbVar26 = (byte *)0x1;
          pbVar17 = (byte *)0x1;
          local_c3 = 1;
          local_c5 = 1;
          local_c9 = 1;
          local_cf = 1;
          local_f3 = 1;
          local_d5 = 1;
          local_d4 = 0x1010101;
          local_f7 = 1;
          local_d7 = 1;
          pbVar15 = pbVar20;
          do {
            uVar21 = (uint)bVar29;
            switch(bVar29) {
            case 0x20:
            case 0x2b:
            case 0x2d:
              break;
            default:
              if ((char)uVar28 == '\0') goto LAB_004024f9;
              local_e0 = (char)pbVar26;
              local_c0 = (char)pbVar26;
              if (cVar18 != '\0') goto LAB_00401bcb;
LAB_00401dc0:
              local_c9 = SUB81(pbVar26,0);
              local_f3 = local_c9;
              local_d4._0_2_ = CONCAT11(local_c9,(undefined)local_d4);
              local_d4 = local_d4 & 0xffff0000 | (uint)(ushort)local_d4;
              if (cVar24 != '\0') goto LAB_00401be1;
              do {
                local_f7 = (char)pbVar26;
                local_d7 = (char)pbVar26;
                do {
                  do {
                    bVar29 = (byte)uVar8;
                    if ((char)uVar7 != '\0') {
                      local_c3 = bVar29;
                    }
                    if ((char)pbVar27 != '\0') {
                      local_cf = bVar29;
                    }
                    if ((char)local_1a0 != '\0') {
                      local_d4 = local_d4 & 0xffffff00 | (uint)bVar29;
                    }
                    pbVar32 = pbVar15 + 1;
                    if ((char)uVar21 == '*') {
                      pbVar17 = pbVar17 + 1;
                      if (iVar4 == 0) {
                        local_158 = 0;
                        uVar21 = (uint)pbVar15[1];
                        pbVar20 = pbVar15 + 2;
                        bVar3 = true;
                        pbVar15 = pbVar32;
                        pbVar32 = pbVar20;
LAB_00401c5a:
                        __n = pbVar17;
                        pbVar20 = pbVar15;
                        pbVar27 = pbVar32;
                        if ((char)uVar21 == '.') goto LAB_00401c64;
LAB_004020cb:
                        bVar2 = false;
                        goto LAB_00401cd8;
                      }
                      lVar16 = FUN_00402bb0(*ppbVar30);
                      local_1a0 = pbVar17;
                      if (lVar16 + 0x80000000U < 0x100000000) {
                        uVar21 = (uint)pbVar15[1];
                        pbVar20 = pbVar15 + 2;
                        local_158 = (undefined4)lVar16;
                        ppbVar30 = ppbVar30 + 1;
                        iVar4 = iVar4 + -1;
                        bVar3 = true;
                        pbVar15 = pbVar32;
                        pbVar32 = pbVar20;
                        goto LAB_00401c5a;
                      }
LAB_00402499:
                      uVar13 = FUN_00404d50(*ppbVar30);
                      uVar14 = dcgettext(0,"invalid field width: %s",5);
                      error(1,0,uVar14,uVar13);
                    }
                    else {
                      pbVar20 = pbVar15;
                      if (9 < (int)(char)uVar21 - 0x30U) {
                        bVar3 = false;
                        goto LAB_00401c5a;
                      }
                      do {
                        pbVar31 = pbVar20;
                        uVar21 = (uint)(char)pbVar31[1];
                        pbVar20 = pbVar31 + 1;
                        __n = pbVar20 + (long)pbVar17 + -(long)pbVar15;
                      } while (uVar21 - 0x30 < 10);
                      pbVar32 = pbVar31 + 2;
                      bVar3 = false;
                      pbVar17 = __n;
                      pbVar27 = pbVar32;
                      if (pbVar31[1] != 0x2e) goto LAB_004020cb;
LAB_00401c64:
                      bVar29 = pbVar20[1];
                      uVar21 = (uint)bVar29;
                      local_d5 = 0;
                      if (bVar29 != 0x2a) {
                        __n = pbVar17 + 1;
                        pbVar15 = pbVar27;
                        if ((int)(char)bVar29 - 0x30U < 10) {
                          do {
                            pbVar32 = pbVar15 + 2;
                            pbVar20 = pbVar15 + 1;
                            uVar21 = (uint)(char)pbVar15[1];
                            __n = pbVar32 + (long)pbVar17 + -(long)pbVar27;
                            pbVar15 = pbVar20;
                          } while (uVar21 - 0x30 < 10);
                          bVar2 = false;
                        }
                        else {
                          pbVar32 = pbVar27 + 1;
                          bVar2 = false;
                          pbVar20 = pbVar27;
                        }
LAB_00401cd8:
                        if (((byte)(uVar21 - 0x4c) < 0x2f) &&
                           ((0x410150000001U >> ((ulong)(uVar21 - 0x4c) & 0x3f) & 1) != 0)) {
                          do {
                            pbVar32 = pbVar20;
                            uVar21 = (uint)pbVar32[1];
                            pbVar20 = pbVar32 + 1;
                            if (0x2e < (byte)(uVar21 - 0x4c)) break;
                          } while ((0x410150000001U >> ((ulong)(uVar21 - 0x4c) & 0x3f) & 1) != 0);
                          pbVar32 = pbVar32 + 2;
                        }
                        if (*(char *)((long)local_138 + (ulong)(uVar21 & 0xff)) == '\0') {
                          uVar13 = dcgettext(0,"%.*s: invalid conversion specification",5);
                          pbVar26 = pbVar9;
                          error(1,0,uVar13,(long)pbVar32 - (long)pbVar9);
                          pbVar27 = pbVar32;
                          goto LAB_00402499;
                        }
                        pbVar27 = (byte *)0x40ab22;
                        if (iVar4 != 0) {
                          pbVar27 = *ppbVar30;
                          iVar4 = iVar4 + -1;
                          ppbVar30 = ppbVar30 + 1;
                        }
                        cVar18 = (char)uVar21;
                        if (0x37 < (byte)(cVar18 + 0xbfU)) {
                          local_1a0 = (byte *)FUN_004056d0(__n + 2);
                          pcVar6 = (char *)mempcpy(local_1a0,pbVar9,(size_t)__n);
                          *pcVar6 = cVar18;
                          pcVar6[1] = '\0';
                          goto switchD_00401f12_caseD_1;
                        }
                        uVar10 = 1L << (cVar18 + 0xbfU & 0x3f);
                        if ((uVar10 & 0x90410800800000) == 0) {
                          uVar10 = uVar10 & 0x7100000071;
                          pbVar17 = &DAT_00409830;
                          if (uVar10 == 0) {
                            pbVar17 = pbVar9;
                          }
                          uVar10 = (ulong)(uVar10 != 0);
                        }
                        else {
                          uVar10 = 1;
                          pbVar17 = &DAT_0040982d;
                        }
                        local_1a0 = (byte *)FUN_004056d0(__n + 2 + uVar10);
                        pvVar11 = mempcpy(local_1a0,pbVar9,(size_t)__n);
                        if ((uint)uVar10 != 0) {
                          uVar19 = 0;
                          do {
                            uVar23 = (ulong)uVar19;
                            uVar19 = uVar19 + 1;
                            *(byte *)((long)pvVar11 + uVar23) = pbVar17[uVar23];
                          } while (uVar19 < (uint)uVar10);
                        }
                        goto LAB_00401ef7;
                      }
                      pbVar15 = pbVar20 + 2;
                      __n = pbVar17 + 2;
                      if (iVar4 == 0) {
                        uVar21 = (uint)pbVar20[2];
                        pbVar32 = pbVar20 + 3;
                        bVar2 = true;
                        local_190 = (byte *)0x0;
                        pbVar20 = pbVar15;
                        goto LAB_00401cd8;
                      }
                      uVar10 = FUN_00402bb0(*ppbVar30);
                      local_1a0 = __n;
                      if ((long)uVar10 < 0) {
                        local_190 = (byte *)0xffffffff;
LAB_00401cc0:
                        uVar21 = (uint)pbVar20[2];
                        pbVar32 = pbVar20 + 3;
                        bVar2 = true;
                        ppbVar30 = ppbVar30 + 1;
                        iVar4 = iVar4 + -1;
                        pbVar20 = pbVar15;
                        goto LAB_00401cd8;
                      }
                      local_190 = pbVar15;
                      if ((long)uVar10 < 0x80000000) {
                        local_190 = (byte *)(uVar10 & 0xffffffff);
                        goto LAB_00401cc0;
                      }
                    }
                    pbVar15 = (byte *)FUN_00404d50(*ppbVar30);
                    uVar13 = dcgettext(0,"invalid precision: %s",5);
                    uVar22 = 0;
                    cVar24 = '\x01';
                    pbVar17 = pbVar15;
                    error(1,0,uVar13);
                    cVar18 = extraout_DL;
LAB_004024f9:
                    if (cVar18 != '\0') {
LAB_00401bcb:
                      local_c5 = uVar22;
                      if ((char)uVar28 != '\0') goto LAB_00401dc0;
                    }
                  } while (cVar24 == '\0');
LAB_00401be1:
                  local_d5 = uVar22;
                } while ((char)uVar28 == '\0');
              } while( true );
            case 0x23:
              local_1a0 = (byte *)0x1;
              pbVar27 = (byte *)0x1;
              uVar7 = 1;
              uVar8 = 0;
            case 0x30:
              cVar24 = '\x01';
              cVar18 = '\x01';
              uVar22 = 0;
              break;
            case 0x27:
            case 0x49:
              cVar24 = '\x01';
              cVar18 = '\x01';
              uVar22 = 0;
              pbVar26 = (byte *)0x0;
              uVar28 = 1;
            }
            pbVar15 = pbVar15 + 1;
            bVar29 = *pbVar15;
            pbVar17 = pbVar17 + 1;
          } while( true );
        }
        if (iVar4 != 0) {
          pcVar6 = (char *)FUN_00404b00(3,*ppbVar30);
          fputs_unlocked(pcVar6,__stream);
LAB_00401a17:
          ppbVar30 = ppbVar30 + 1;
          iVar4 = iVar4 + -1;
          goto LAB_004018e0;
        }
      }
      bVar29 = pbVar9[2];
      if (bVar29 == 0) {
        return DAT_0060d29c;
      }
      iVar4 = 0;
      pbVar9 = pbVar32;
    }
    if (bVar29 != 0x5c) {
      pbVar32 = pbVar9 + 1;
      pbVar27 = (byte *)stdout->_IO_write_ptr;
      pbVar20 = pbVar9;
      if (pbVar27 < stdout->_IO_write_end) {
        stdout->_IO_write_ptr = (char *)(pbVar27 + 1);
        *pbVar27 = bVar29;
      }
      else {
        __overflow(stdout,(uint)bVar29);
      }
      goto LAB_004018e0;
    }
    iVar5 = FUN_004025f0(pbVar9,0);
    bVar29 = pbVar9[(long)iVar5 + 1];
    pbVar32 = pbVar9 + (long)iVar5 + 1;
    goto joined_r0x004018e7;
  }
LAB_00401943:
  if (local_1a4 != 0) {
    uVar7 = FUN_00404d50(*local_1b0);
    uVar8 = dcgettext(0,"warning: ignoring excess arguments, starting with %s",5);
    error(0,0,uVar8,uVar7);
  }
  return DAT_0060d29c;
LAB_00401ef7:
  *(char *)((long)pvVar11 + uVar10) = cVar18;
  ((char *)((long)pvVar11 + uVar10))[1] = '\0';
  switch(uVar21 - 0x41 & 0xff) {
  case 0:
  case 4:
  case 5:
  case 6:
  case 0x20:
  case 0x24:
  case 0x25:
  case 0x26:
    if (((*pbVar27 == 0x22) || (*pbVar27 == 0x27)) && (pbVar27[1] != 0)) {
      if ((pbVar27[2] != 0) && (DAT_0060d298 == '\0')) {
        uVar7 = dcgettext(0,
                          "warning: %s: character(s) following character constant have been ignored"
                          ,5);
        error(0,0,uVar7,pbVar27 + 2);
      }
    }
    else {
      piVar12 = __errno_location();
      *piVar12 = 0;
      FUN_00402ff0(pbVar27,&local_140);
      FUN_00402b00(pbVar27);
    }
    if (bVar3) {
      if (bVar2) {
        FUN_004059c0(local_1a0,local_158,(ulong)local_190 & 0xffffffff);
      }
      else {
        FUN_004059c0(local_1a0,local_158);
      }
    }
    else if (bVar2) {
      FUN_004059c0(local_1a0,(ulong)local_190 & 0xffffffff);
    }
    else {
      FUN_004059c0(local_1a0);
    }
  default:
    goto switchD_00401f12_caseD_1;
  case 0x17:
  case 0x2e:
  case 0x34:
  case 0x37:
    if (((*pbVar27 == 0x22) || (*pbVar27 == 0x27)) &&
       (pbVar9 = (byte *)(ulong)pbVar27[1], pbVar27[1] != 0)) {
      if ((pbVar27[2] != 0) && (DAT_0060d298 == '\0')) {
        uVar7 = dcgettext(0,
                          "warning: %s: character(s) following character constant have been ignored"
                          ,5);
        error(0,0,uVar7,pbVar27 + 2);
      }
    }
    else {
      piVar12 = __errno_location();
      *piVar12 = 0;
      pbVar9 = (byte *)__strtoul_internal(pbVar27,&local_140,0,0);
      FUN_00402b00(pbVar27,local_140);
    }
    pbVar27 = pbVar9;
    if (!bVar3) {
      if (bVar2) {
        FUN_004059c0(local_1a0,(ulong)local_190 & 0xffffffff,pbVar27);
      }
      else {
        FUN_004059c0(local_1a0,pbVar27);
      }
      goto switchD_00401f12_caseD_1;
    }
    if (!bVar2) {
      FUN_004059c0(local_1a0,local_158,pbVar27);
      goto switchD_00401f12_caseD_1;
    }
    break;
  case 0x22:
    if (bVar3) {
      FUN_004059c0(local_1a0,local_158);
    }
    else {
      FUN_004059c0(local_1a0,(int)(char)*pbVar27);
    }
    goto switchD_00401f12_caseD_1;
  case 0x23:
  case 0x28:
    pbVar27 = (byte *)FUN_00402bb0(pbVar27);
    if (!bVar3) {
      if (bVar2) {
        FUN_004059c0(local_1a0,(ulong)local_190 & 0xffffffff,pbVar27);
      }
      else {
        FUN_004059c0(local_1a0,pbVar27);
      }
      goto switchD_00401f12_caseD_1;
    }
    if (!bVar2) {
      FUN_004059c0(local_1a0,local_158,pbVar27);
      goto switchD_00401f12_caseD_1;
    }
    break;
  case 0x32:
    if (!bVar3) {
      if (bVar2) {
        FUN_004059c0(local_1a0,(ulong)local_190 & 0xffffffff,pbVar27);
      }
      else {
        FUN_004059c0(local_1a0,pbVar27);
      }
      goto switchD_00401f12_caseD_1;
    }
    if (!bVar2) {
      FUN_004059c0(local_1a0,local_158,pbVar27);
      goto switchD_00401f12_caseD_1;
    }
  }
  FUN_004059c0(local_1a0,local_158,(ulong)local_190 & 0xffffffff,pbVar27);
switchD_00401f12_caseD_1:
  free(local_1a0);
LAB_004018e0:
  bVar29 = pbVar20[1];
joined_r0x004018e7:
  pbVar9 = pbVar32;
  if (bVar29 == 0) goto LAB_00401919;
  goto LAB_004018ec;
LAB_00401919:
  iVar5 = local_1a4 - iVar4;
  local_1b0 = local_1b0 + iVar5;
  local_1a4 = iVar4;
  if ((iVar5 < 1) || (iVar4 < 1)) goto LAB_00401943;
  goto LAB_00401880;
}


void FUN_00402510(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_retaddr;
  undefined auStack_8 [8];
  
  (*(code *)PTR___libc_start_main_0060cff0)
            (FUN_004017a0,unaff_retaddr,&stack0x00000008,FUN_00408e60,FUN_00408ec0,param_3,auStack_8
            );
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* WARNING: Removing unreachable block (ram,0x00402548) */
/* WARNING: Removing unreachable block (ram,0x00402552) */

void FUN_0040253b(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00402589) */

void FUN_0040255a(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x004025c6) */

void FUN_00402591(void)

{
  if (DAT_0060d288 != '\0') {
    return;
  }
  FUN_0040253b();
  DAT_0060d288 = 1;
  return;
}


/* WARNING: Removing unreachable block (ram,0x00402589) */

void thunk_FUN_0040255a(void)

{
  return;
}


int * FUN_004025f0(long param_1,ulong param_2)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  char *pcVar6;
  ushort **ppuVar7;
  undefined8 uVar8;
  int *piVar9;
  undefined8 uVar10;
  byte bVar11;
  int iVar12;
  char cVar13;
  byte *pbVar14;
  uint uVar15;
  _IO_FILE *p_Var16;
  char *pcVar17;
  byte *pbVar18;
  
  bVar2 = *(byte *)(param_1 + 1);
  if (bVar2 == 0x78) {
    pbVar18 = (byte *)(param_1 + 2);
    ppuVar7 = __ctype_b_loc();
    bVar4 = false;
    bVar11 = 0;
    while (bVar2 = *pbVar18, (*(byte *)((long)*ppuVar7 + (ulong)bVar2 * 2 + 1) & 0x10) != 0) {
      if ((byte)(bVar2 + 0x9f) < 6) {
        cVar13 = bVar2 + 0xa9;
      }
      else {
        cVar13 = bVar2 - 0x37;
        if (5 < (byte)(bVar2 + 0xbf)) {
          cVar13 = bVar2 - 0x30;
        }
      }
      bVar11 = bVar11 * '\x10' + cVar13;
      pbVar18 = pbVar18 + 1;
      if (bVar4) goto LAB_00402649;
      bVar4 = true;
    }
    if (bVar4) goto LAB_00402649;
LAB_004029f8:
    uVar8 = dcgettext(0,"missing hexadecimal number in escape",5);
    p_Var16 = (_IO_FILE *)0x1;
    error(1,0,uVar8);
LAB_00402a20:
    __overflow(p_Var16,0x5c);
  }
  else {
    if ((byte)(bVar2 - 0x30) < 8) {
      bVar11 = 0;
      pbVar14 = (byte *)(param_1 + 1 + (param_2 & bVar2 == 0x30));
      pbVar1 = pbVar14 + 3;
      do {
        bVar2 = *pbVar14;
        pbVar18 = pbVar14;
        if (7 < (byte)(bVar2 - 0x30)) break;
        pbVar14 = pbVar14 + 1;
        bVar11 = (bVar2 - 0x30) + bVar11 * '\b';
        pbVar18 = pbVar1;
      } while (pbVar14 != pbVar1);
LAB_00402649:
      uVar15 = ((int)pbVar18 - (int)param_1) - 1;
      pbVar18 = (byte *)stdout->_IO_write_ptr;
      if (pbVar18 < stdout->_IO_write_end) {
        stdout->_IO_write_ptr = (char *)(pbVar18 + 1);
        *pbVar18 = bVar11;
      }
      else {
        __overflow(stdout,(uint)bVar11);
      }
      goto LAB_0040266e;
    }
    if (bVar2 != 0) {
      pcVar6 = strchr("\"\\abcefnrtv",(int)(char)bVar2);
      if (pcVar6 != (char *)0x0) {
        switch(bVar2) {
        case 0x61:
          uVar15 = 1;
          pcVar6 = stdout->_IO_write_ptr;
          if (pcVar6 < stdout->_IO_write_end) {
            stdout->_IO_write_ptr = pcVar6 + 1;
            *pcVar6 = '\a';
          }
          else {
            __overflow(stdout,7);
          }
          break;
        case 0x62:
          uVar15 = 1;
          pcVar6 = stdout->_IO_write_ptr;
          if (pcVar6 < stdout->_IO_write_end) {
            stdout->_IO_write_ptr = pcVar6 + 1;
            *pcVar6 = '\b';
          }
          else {
            __overflow(stdout,8);
          }
          break;
        case 99:
                    /* WARNING: Subroutine does not return */
          exit(0);
        default:
          uVar15 = 1;
          pbVar18 = (byte *)stdout->_IO_write_ptr;
          if (pbVar18 < stdout->_IO_write_end) {
            stdout->_IO_write_ptr = (char *)(pbVar18 + 1);
            *pbVar18 = bVar2;
          }
          else {
            __overflow(stdout,(uint)bVar2);
          }
          break;
        case 0x65:
          uVar15 = 1;
          pcVar6 = stdout->_IO_write_ptr;
          if (pcVar6 < stdout->_IO_write_end) {
            stdout->_IO_write_ptr = pcVar6 + 1;
            *pcVar6 = '\x1b';
          }
          else {
            __overflow(stdout,0x1b);
          }
          break;
        case 0x66:
          uVar15 = 1;
          pcVar6 = stdout->_IO_write_ptr;
          if (pcVar6 < stdout->_IO_write_end) {
            stdout->_IO_write_ptr = pcVar6 + 1;
            *pcVar6 = '\f';
          }
          else {
            __overflow(stdout,0xc);
          }
          break;
        case 0x6e:
          uVar15 = 1;
          pcVar6 = stdout->_IO_write_ptr;
          if (pcVar6 < stdout->_IO_write_end) {
            stdout->_IO_write_ptr = pcVar6 + 1;
            *pcVar6 = '\n';
          }
          else {
            __overflow(stdout,10);
          }
          break;
        case 0x72:
          uVar15 = 1;
          pcVar6 = stdout->_IO_write_ptr;
          if (pcVar6 < stdout->_IO_write_end) {
            stdout->_IO_write_ptr = pcVar6 + 1;
            *pcVar6 = '\r';
          }
          else {
            __overflow(stdout,0xd);
          }
          break;
        case 0x74:
          uVar15 = 1;
          pcVar6 = stdout->_IO_write_ptr;
          if (pcVar6 < stdout->_IO_write_end) {
            stdout->_IO_write_ptr = pcVar6 + 1;
            *pcVar6 = '\t';
          }
          else {
            __overflow(stdout,9);
          }
          break;
        case 0x76:
          uVar15 = 1;
          pcVar6 = stdout->_IO_write_ptr;
          if (pcVar6 < stdout->_IO_write_end) {
            stdout->_IO_write_ptr = pcVar6 + 1;
            *pcVar6 = '\v';
          }
          else {
            __overflow(stdout,0xb);
          }
        }
        goto LAB_0040266e;
      }
      if ((bVar2 & 0xdf) == 0x55) {
        pbVar18 = (byte *)(param_1 + 2);
        ppuVar7 = __ctype_b_loc();
        iVar3 = (uint)(bVar2 != 0x75) * 4;
        uVar15 = 0;
        pbVar1 = (byte *)(param_1 + 3 + (ulong)(iVar3 + 3));
        do {
          while( true ) {
            bVar11 = *pbVar18;
            iVar12 = (int)(char)bVar11;
            if ((*(byte *)((long)*ppuVar7 + (ulong)bVar11 * 2 + 1) & 0x10) == 0) goto LAB_004029f8;
            if ((byte)(bVar11 + 0x9f) < 6) break;
            iVar5 = iVar12 + -0x37;
            if (5 < (byte)(bVar11 + 0xbf)) {
              iVar5 = iVar12 + -0x30;
            }
            pbVar18 = pbVar18 + 1;
            uVar15 = uVar15 * 0x10 + iVar5;
            if (pbVar18 == pbVar1) goto LAB_004027fd;
          }
          pbVar18 = pbVar18 + 1;
          uVar15 = uVar15 * 0x10 + iVar12 + -0x57;
        } while (pbVar18 != pbVar1);
LAB_004027fd:
        if ((((0x9f < uVar15) || (uVar15 == 0x24)) || ((uVar15 & 0xffffffdf) == 0x40)) &&
           (0x7ff < uVar15 - 0xd800)) {
          FUN_00405060(stdout,uVar15,0);
          return (int *)(ulong)(iVar3 + 5);
        }
        uVar8 = dcgettext(0,"invalid universal character name \\%c%0*x",5);
        pcVar6 = (char *)0x0;
        pcVar17 = (char *)0x1;
        error(1,0,uVar8,(int)(char)bVar2,iVar3 + 4,uVar15);
        piVar9 = __errno_location();
        if (*piVar9 == 0) {
          if (*pcVar6 != '\0') {
            if (pcVar17 == pcVar6) {
              uVar8 = FUN_00404d50(pcVar17);
              pcVar6 = "%s: expected a numeric value";
            }
            else {
              uVar8 = FUN_00404d50(pcVar17);
              pcVar6 = "%s: value not completely converted";
            }
            uVar10 = dcgettext(0,pcVar6,5);
            piVar9 = (int *)error(0,0,uVar10,uVar8);
            DAT_0060d29c = 1;
          }
          return piVar9;
        }
        uVar8 = FUN_00404d50(pcVar17);
        piVar9 = (int *)error(0,*piVar9,"%s",uVar8);
        DAT_0060d29c = 1;
        return piVar9;
      }
    }
    pcVar6 = stdout->_IO_write_ptr;
    p_Var16 = stdout;
    if (stdout->_IO_write_end <= pcVar6) goto LAB_00402a20;
    stdout->_IO_write_ptr = pcVar6 + 1;
    *pcVar6 = '\\';
  }
  bVar2 = *(byte *)(param_1 + 1);
  uVar15 = 0;
  if (bVar2 != 0) {
    pbVar18 = (byte *)stdout->_IO_write_ptr;
    if (pbVar18 < stdout->_IO_write_end) {
      stdout->_IO_write_ptr = (char *)(pbVar18 + 1);
      *pbVar18 = bVar2;
    }
    else {
      __overflow(stdout,(uint)bVar2);
    }
    uVar15 = 1;
  }
LAB_0040266e:
  return (int *)(ulong)uVar15;
}


void FUN_00402b00(char *param_1,char *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char *pcVar4;
  
  piVar1 = __errno_location();
  if (*piVar1 == 0) {
    if (*param_2 != '\0') {
      if (param_1 == param_2) {
        uVar2 = FUN_00404d50(param_1);
        pcVar4 = "%s: expected a numeric value";
      }
      else {
        uVar2 = FUN_00404d50(param_1);
        pcVar4 = "%s: value not completely converted";
      }
      uVar3 = dcgettext(0,pcVar4,5);
      error(0,0,uVar3,uVar2);
      DAT_0060d29c = 1;
    }
    return;
  }
  uVar2 = FUN_00404d50(param_1);
  error(0,*piVar1,"%s",uVar2);
  DAT_0060d29c = 1;
  return;
}


ulong FUN_00402bb0(char *param_1)

{
  int *piVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 local_20 [2];
  
  if (((*param_1 == '\"') || (*param_1 == '\'')) &&
     (uVar2 = (ulong)(byte)param_1[1], param_1[1] != 0)) {
    if ((param_1[2] != '\0') && (DAT_0060d298 == '\0')) {
      uVar3 = dcgettext(0,"warning: %s: character(s) following character constant have been ignored"
                        ,5);
      error(0,0,uVar3,param_1 + 2);
    }
  }
  else {
    piVar1 = __errno_location();
    *piVar1 = 0;
    uVar2 = __strtol_internal(param_1,local_20,0,0);
    FUN_00402b00(param_1,local_20[0]);
  }
  return uVar2;
}


void FUN_00402c40(int param_1)

{
  FILE *pFVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 uVar5;
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
  undefined8 local_28;
  undefined8 local_20;
  byte **ppbVar7;
  
  uVar5 = DAT_0060d2b8;
  bVar14 = 0;
  if (param_1 != 0) {
    uVar3 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(stderr,1,uVar3,uVar5);
    goto LAB_00402c7f;
  }
  uVar3 = dcgettext(0,"Usage: %s FORMAT [ARGUMENT]...\n  or:  %s OPTION\n",5);
  __printf_chk(1,uVar3,uVar5,uVar5);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "Print ARGUMENT(s) according to FORMAT, or execute according to OPTION:\n\n"
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
                             "\nFORMAT controls the output as in C printf.  Interpreted sequences are:\n\n  \\\"      double quote\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  \\\\      backslash\n  \\a      alert (BEL)\n  \\b      backspace\n  \\c      produce no further output\n  \\e      escape\n  \\f      form feed\n  \\n      new line\n  \\r      carriage return\n  \\t      horizontal tab\n  \\v      vertical tab\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  \\NNN    byte with octal value NNN (1 to 3 digits)\n  \\xHH    byte with hexadecimal value HH (1 to 2 digits)\n  \\uHHHH  Unicode (ISO/IEC 10646) character with hex value HHHH (4 digits)\n  \\UHHHHHHHH  Unicode character with hex value HHHHHHHH (8 digits)\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  %%      a single %\n  %b      ARGUMENT as a string with \'\\\' escapes interpreted,\n          except that octal escapes are of the form \\0 or \\0NNN\n  %q      ARGUMENT is printed in a format that can be reused as shell input,\n          escaping non-printable characters with the proposed POSIX $\'\' syntax.\n\nand all C format specifications ending with one of diouxXfeEgGcs, with\nARGUMENTs converted to proper type first.  Variable widths are handled.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  uVar5 = dcgettext(0,
                    "\nNOTE: your shell may have its own version of %s, which usually supersedes\nthe version described here.  Please refer to your shell\'s documentation\nfor details about the options it supports.\n"
                    ,5);
  __printf_chk(1,uVar5,"printf");
  local_88 = &DAT_004097a5;
  local_80 = "test invocation";
  local_78[0] = (byte *)0x40981f;
  local_78[1] = (byte *)0x4097b7;
  local_78[2] = (byte *)0x4097cd;
  local_78[3] = (byte *)0x4097d7;
  local_78[4] = (byte *)0x4097e6;
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
    lVar9 = 7;
    pbVar10 = (byte *)"printf";
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
        pcVar4 = "printf";
        goto LAB_00402fbb;
      }
    }
    pcVar4 = "printf";
    uVar5 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    pcVar8 = " invocation";
    __printf_chk(1,uVar5,"https://www.gnu.org/software/coreutils/","printf");
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar8 = setlocale(5,(char *)0x0);
    if (pcVar8 != (char *)0x0) {
      iVar2 = strncmp(pcVar8,"en_",3);
      if (iVar2 != 0) {
LAB_00402fbb:
        uVar5 = dcgettext(0,"Report %s translation bugs to <https://translationproject.org/team/>\n"
                          ,5);
        __printf_chk(1,uVar5,"printf");
      }
    }
    pcVar8 = " invocation";
    uVar5 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    __printf_chk(1,uVar5,"https://www.gnu.org/software/coreutils/","printf");
    if (pcVar4 != "printf") {
      pcVar8 = "";
    }
  }
  uVar5 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(1,uVar5,pcVar4,pcVar8);
LAB_00402c7f:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}


void FUN_00402ff0(char *param_1,char **param_2)

{
  if (DAT_0060d2a0 == (__locale_t)0x0) {
    DAT_0060d2a0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
  }
  if (DAT_0060d2a0 == (__locale_t)0x0) {
    if (param_2 != (char **)0x0) {
      *param_2 = param_1;
    }
    return;
  }
  strtold_l(param_1,param_2,DAT_0060d2a0);
  return;
}


void FUN_00403070(undefined8 param_1)

{
  DAT_0060d2b0 = param_1;
  return;
}


void FUN_00403080(undefined param_1)

{
  DAT_0060d2a8 = param_1;
  return;
}


void FUN_00403090(void)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  iVar1 = FUN_00405cb0(stdout);
  if (iVar1 != 0) {
    piVar2 = __errno_location();
    if ((DAT_0060d2a8 == '\0') || (*piVar2 != 0x20)) {
      uVar3 = dcgettext(0,"write error",5);
      if (DAT_0060d2b0 == 0) {
        error(0,*piVar2,"%s",uVar3);
      }
      else {
        uVar4 = FUN_00404ba0();
        error(0,*piVar2,"%s: %s",uVar4,uVar3);
      }
      goto LAB_0040310e;
    }
  }
  iVar1 = FUN_00405cb0(stderr);
  if (iVar1 == 0) {
    return;
  }
LAB_0040310e:
                    /* WARNING: Subroutine does not return */
  _exit(DAT_0060d1f8);
}


void FUN_00403130(byte *param_1)

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
        pbVar6 = &DAT_00409cc8;
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


char * FUN_004031d0(char *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  byte *pbVar3;
  
  pcVar2 = (char *)dcgettext(0,param_1,5);
  if (param_1 == pcVar2) {
    pbVar3 = (byte *)FUN_00405d70();
    if ((*pbVar3 & 0xdf) == 0x55) {
      if (((((pbVar3[1] & 0xdf) != 0x54) || ((pbVar3[2] & 0xdf) != 0x46)) || (pbVar3[3] != 0x2d)) ||
         ((pbVar3[4] != 0x38 || (pbVar3[5] != 0)))) {
LAB_004032a8:
        pcVar2 = "\"";
        if (param_2 != 9) {
          pcVar2 = "\'";
        }
        return pcVar2;
      }
      cVar1 = *pcVar2;
      pcVar2 = &DAT_00409cd9;
      if (cVar1 != '`') {
        pcVar2 = &DAT_00409cce;
      }
    }
    else {
      if (((((*pbVar3 & 0xdf) != 0x47) || ((pbVar3[1] & 0xdf) != 0x42)) || (pbVar3[2] != 0x31)) ||
         (((pbVar3[3] != 0x38 || (pbVar3[4] != 0x30)) ||
          ((pbVar3[5] != 0x33 || ((pbVar3[6] != 0x30 || (pbVar3[7] != 0)))))))) goto LAB_004032a8;
      cVar1 = *pcVar2;
      pcVar2 = &DAT_00409cd5;
      if (cVar1 != '`') {
        pcVar2 = &DAT_00409cd2;
      }
    }
  }
  return pcVar2;
}


ulong FUN_004032d0(undefined *param_1,ulong param_2,char *param_3,ulong param_4,int param_5,
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
LAB_00403f21:
    if (param_2 != 0) {
      bVar3 = false;
      local_5b = false;
      bVar2 = true;
      local_70 = 0;
      goto LAB_00403b56;
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
      goto LAB_00403f21;
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
      param_8 = (char *)FUN_004031d0(&DAT_00409cdf,param_5);
      param_9 = (char *)FUN_004031d0(&DAT_00409cdd);
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
LAB_00403368:
  uVar22 = 0;
  bVar5 = local_5b;
LAB_00403378:
  bVar23 = param_4 != uVar22;
  if (param_4 == 0xffffffffffffffff) {
    bVar23 = param_3[uVar22] != '\0';
  }
  bVar26 = bVar6;
  if (!bVar23) goto LAB_00403af8;
  bVar20 = (bool)(param_5 != 2 & bVar6);
  __s1 = (byte *)(param_3 + uVar22);
  uVar16 = uVar15;
  bVar4 = bVar3;
  if (bVar20) {
    if (local_a0 == 0) {
LAB_00403a70:
      uVar19 = (ulong)*__s1;
      switch(uVar19) {
      case 0:
        goto switchD_00403a82_caseD_0;
      default:
        bVar20 = false;
        goto switchD_004038ee_caseD_1;
      case 7:
        bVar17 = 0x61;
        goto LAB_00403785;
      case 8:
        bVar17 = 0x62;
        break;
      case 9:
switchD_00403a82_caseD_9:
        bVar17 = 0x74;
        break;
      case 10:
switchD_00403a82_caseD_a:
        bVar17 = 0x6e;
        break;
      case 0xb:
switchD_00403a82_caseD_b:
        bVar17 = 0x76;
        goto LAB_00403785;
      case 0xc:
switchD_00403a82_caseD_c:
        bVar17 = 0x66;
LAB_00403785:
        if (local_5c) {
          bVar25 = false;
          goto LAB_004036d8;
        }
LAB_00403790:
        bVar23 = false;
        goto LAB_0040354b;
      case 0xd:
        bVar20 = false;
switchD_00403468_caseD_d:
        bVar25 = param_5 == 2;
        uVar19 = 0xd;
        bVar13 = 0x72;
        goto LAB_004036a0;
      case 0x20:
        bVar25 = false;
LAB_00403aca:
        uVar19 = 0x20;
        goto LAB_00403a92;
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
switchD_00403468_caseD_21:
        bVar25 = false;
        goto LAB_004036ab;
      case 0x23:
      case 0x7e:
        bVar26 = false;
LAB_00403aaa:
        if (uVar22 == 0) {
          bVar25 = false;
          bVar23 = bVar20;
          bVar20 = bVar26;
          goto LAB_004034b8;
        }
        bVar23 = false;
        goto LAB_004034cf;
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
LAB_00403a92:
        bVar24 = false;
        bVar23 = bVar20;
        bVar20 = bVar25;
        goto LAB_004034d1;
      case 0x27:
        bVar20 = false;
        goto switchD_004038ee_caseD_27;
      case 0x3f:
        bVar20 = false;
        goto switchD_004038ee_caseD_3f;
      case 0x5c:
        bVar20 = false;
        goto switchD_00403468_caseD_5c;
      case 0x7b:
      case 0x7d:
        bVar20 = false;
        goto switchD_004038ee_caseD_7b;
      }
      bVar25 = false;
      bVar23 = false;
      goto joined_r0x004036c7;
    }
    if ((param_4 == 0xffffffffffffffff) && (1 < local_a0)) {
      param_4 = strlen(param_3);
    }
    if ((param_4 < uVar22 + local_a0) || (iVar7 = memcmp(__s1,local_78,local_a0), iVar7 != 0))
    goto LAB_00403a70;
    if (!local_5c) {
      uVar19 = (ulong)*__s1;
      bVar25 = bVar20;
      switch(uVar19) {
      case 0:
        goto switchD_00403468_caseD_0;
      default:
        goto switchD_004038ee_caseD_1;
      case 7:
        bVar17 = 0x61;
        goto LAB_00403790;
      case 8:
        bVar25 = false;
        bVar23 = false;
        bVar17 = 0x62;
        break;
      case 9:
        goto switchD_00403a82_caseD_9;
      case 10:
        goto switchD_00403a82_caseD_a;
      case 0xb:
        goto switchD_00403a82_caseD_b;
      case 0xc:
        goto switchD_00403a82_caseD_c;
      case 0xd:
        goto switchD_00403468_caseD_d;
      case 0x20:
        goto LAB_00403aca;
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
        goto switchD_00403468_caseD_21;
      case 0x23:
      case 0x7e:
        bVar26 = bVar20;
        goto LAB_00403aaa;
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
        goto LAB_00403a92;
      case 0x27:
        goto switchD_004038ee_caseD_27;
      case 0x3f:
        goto switchD_004038ee_caseD_3f;
      case 0x5c:
        goto switchD_00403468_caseD_5c;
      case 0x7b:
      case 0x7d:
        goto switchD_004038ee_caseD_7b;
      }
      goto LAB_00403512;
    }
    goto LAB_004036ea;
  }
  uVar19 = (ulong)*__s1;
  switch(uVar19) {
  case 0:
    if (bVar6) {
switchD_00403a82_caseD_0:
      if (!local_5c) {
        bVar20 = false;
switchD_00403468_caseD_0:
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
            goto LAB_004035c8;
          }
LAB_0040380a:
          param_1[uVar16] = 0x5c;
          uVar15 = uVar16;
        }
        else if (uVar15 < uVar9) goto LAB_0040380a;
        uVar16 = uVar15 + 1;
        bVar24 = bVar23;
        if (param_5 == 2) {
          bVar17 = 0x30;
          bVar23 = false;
          bVar4 = bVar3;
          goto LAB_004035c8;
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
LAB_00403849:
        bVar17 = (byte)uVar19;
        bVar23 = false;
        uVar15 = uVar16;
        bVar4 = bVar3;
        if ((bool)(bVar6 ^ 1U | bVar26)) goto LAB_004035c8;
        goto LAB_004034d1;
      }
      bVar26 = param_5 == 2;
      goto LAB_004036dc;
    }
    if ((param_6 & 1) == 0) {
      bVar25 = param_5 == 2;
      uVar19 = 0;
      bVar23 = false;
      bVar20 = false;
      goto LAB_004034b8;
    }
    uVar22 = uVar22 + 1;
    goto LAB_00403378;
  default:
switchD_004038ee_caseD_1:
    bVar25 = bVar6;
    if (sVar8 != 1) {
      local_40[0] = (mbstate_t)0x0;
      if (param_4 == 0xffffffffffffffff) {
        param_4 = strlen(param_3);
      }
      uVar21 = 0;
      do {
        uVar1 = uVar22 + uVar21;
        lVar11 = FUN_00405b50(&local_44,param_3 + uVar1,param_4 - uVar1,local_40);
        if (lVar11 == 0) break;
        if (lVar11 == -1) {
          bVar23 = false;
          goto LAB_004041fa;
        }
        if (lVar11 == -2) {
          if ((param_4 <= uVar1) || (param_3[uVar1] == '\0')) goto LAB_00404337;
          goto LAB_00404327;
        }
        if (((param_5 == 2) && (local_5c)) && (lVar11 != 1)) {
          pcVar12 = param_3 + uVar1 + 1;
          do {
            if (((byte)(*pcVar12 + 0xa5U) < 0x22) &&
               ((1L << (*pcVar12 + 0xa5U & 0x3f) & 0x20000002bU) != 0)) {
              param_5 = 2;
              goto LAB_004036dc;
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
      goto LAB_004041fa;
    }
    ppuVar10 = __ctype_b_loc();
    uVar21 = 1;
    bVar25 = ((*ppuVar10)[uVar19] & 0x4000) == 0;
    bVar23 = !bVar25;
    bVar25 = (bool)(bVar25 & bVar6);
    goto LAB_004038c4;
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
    goto LAB_00403902;
  case 10:
    uVar19 = 10;
    bVar13 = 0x6e;
    goto LAB_00403902;
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
LAB_00403902:
    bVar25 = param_5 == 2;
    bVar20 = (bool)(local_5c & bVar25);
    if (bVar20) {
LAB_0040391a:
      param_5 = 2;
      goto LAB_004036dc;
    }
    break;
  case 0x20:
    uVar19 = 0x20;
    goto LAB_004034a6;
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
LAB_004034a6:
    bVar25 = param_5 == 2;
    if ((local_5c) && (bVar25)) goto LAB_0040391a;
    goto LAB_004034b8;
  case 0x23:
  case 0x7e:
LAB_0040349d:
    bVar25 = param_5 == 2;
    if (uVar22 == 0) goto LAB_004034a6;
    goto LAB_004036ab;
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
    goto switchD_004038ee_caseD_25;
  case 0x27:
switchD_004038ee_caseD_27:
    bVar5 = bVar23;
    if (param_5 != 2) {
      bVar25 = false;
      uVar19 = 0x27;
      goto LAB_004034b8;
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
      goto LAB_004035c8;
    }
    goto LAB_004036dc;
  case 0x3f:
switchD_004038ee_caseD_3f:
    if (param_5 == 2) {
      if (!local_5c) {
        bVar17 = 0x3f;
        bVar24 = false;
        bVar23 = false;
        goto LAB_004035c8;
      }
      goto LAB_004036dc;
    }
    if (param_5 != 5) {
      bVar25 = param_5 == 2;
      uVar19 = 0x3f;
      bVar23 = false;
      goto LAB_004034b8;
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
        goto LAB_00403849;
      }
      goto LAB_004036ea;
    }
    bVar25 = false;
    uVar19 = 0x3f;
    bVar23 = false;
    goto LAB_004034b8;
  case 0x5c:
    if (param_5 != 2) {
switchD_00403468_caseD_5c:
      uVar19 = 0x5c;
      bVar17 = 0x5c;
      bVar13 = 0x5c;
      bVar25 = (bool)(bVar6 & local_5c & local_a0 != 0);
      if (!bVar25) break;
      uVar22 = uVar22 + 1;
      bVar23 = false;
      goto LAB_004035e4;
    }
    if (local_5c) goto LAB_004036dc;
    uVar22 = uVar22 + 1;
    bVar23 = false;
    bVar17 = 0x5c;
    goto LAB_004035e4;
  case 0x7b:
  case 0x7d:
switchD_004038ee_caseD_7b:
    bVar24 = param_4 != 1;
    if (param_4 == 0xffffffffffffffff) {
      bVar24 = param_3[1] != '\0';
    }
    bVar25 = param_5 == 2;
    if (!bVar24) goto LAB_0040349d;
    goto LAB_004036ab;
  }
LAB_004036a0:
  if (!bVar6) {
LAB_004036ab:
    bVar23 = false;
    goto LAB_004034b8;
  }
  bVar23 = false;
  bVar17 = bVar13;
  goto joined_r0x004036c7;
LAB_00403af8:
  if ((uVar15 == 0) && ((bool)(local_5c & param_5 == 2))) {
    param_5 = 2;
LAB_004036dc:
    if (bVar26) {
      param_5 = 4;
    }
LAB_004036ea:
    uVar9 = FUN_004032d0(param_1,uVar9,param_3,param_4,param_5,param_6 & 0xfffffffd,0,param_8,
                         param_9);
    return uVar9;
  }
  bVar26 = (bool)(param_5 == 2 & (local_5c ^ 1U));
  bVar23 = (bool)(local_5c ^ 1U);
  if ((!bVar26) || (bVar23 = bVar26, !bVar5)) {
LAB_004043cd:
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
    uVar9 = FUN_004032d0(param_1,local_70,param_3,param_4,5,param_6,param_7,param_8,param_9);
    return uVar9;
  }
  local_5b = uVar9 == 0 && local_70 != 0;
  param_2 = local_70;
  bVar23 = bVar5;
  if (uVar9 != 0 || local_70 == 0) goto LAB_004043cd;
LAB_00403b56:
  *param_1 = 0x27;
  param_5 = 2;
  uVar15 = 1;
  local_78 = "\'";
  local_a0 = 1;
  local_5c = false;
  uVar9 = param_2;
  goto LAB_00403368;
  while (__s1[uVar21] != 0) {
LAB_00404327:
    uVar21 = uVar21 + 1;
    if (param_4 <= uVar22 + uVar21) break;
  }
LAB_00404337:
  bVar23 = false;
LAB_004041fa:
  if (1 < uVar21) {
LAB_00403dbe:
    bVar26 = false;
    uVar21 = uVar21 + uVar22;
    uVar16 = uVar22;
    do {
      bVar17 = (byte)uVar19;
      if (bVar25) {
        bVar26 = param_5 == 2;
        if (local_5c) goto LAB_004036dc;
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
        if (uVar21 <= uVar22) goto LAB_0040355d;
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
        if (uVar21 <= uVar22) goto LAB_004035e4;
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
LAB_004038c4:
  if (bVar25) {
    bVar23 = false;
    bVar25 = bVar6;
    goto LAB_00403dbe;
  }
switchD_004038ee_caseD_25:
  bVar25 = param_5 == 2;
LAB_004034b8:
  bVar17 = (byte)uVar19;
  bVar24 = (bool)((bVar6 ^ 1U | bVar25) ^ 1 | local_5c);
  bVar26 = bVar20;
  if (bVar24) {
LAB_004034cf:
    bVar24 = false;
    bVar20 = bVar26;
LAB_004034d1:
    bVar17 = (byte)uVar19;
    uVar16 = uVar15;
    bVar4 = bVar3;
    if ((param_7 == 0) || ((*(uint *)(param_7 + (uVar19 >> 5) * 4) >> (bVar17 & 0x1f) & 1) == 0))
    goto LAB_004035c8;
    bVar25 = param_5 == 2;
  }
  else {
LAB_004035c8:
    bVar25 = param_5 == 2;
    uVar15 = uVar16;
    bVar3 = bVar4;
    if (!bVar20) {
      uVar22 = uVar22 + 1;
      bVar3 = (bool)((bVar24 ^ 1U) & bVar4);
LAB_004035e4:
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
      goto LAB_0040355d;
    }
  }
joined_r0x004036c7:
  if (local_5c) {
LAB_004036d8:
    bVar26 = (bool)(bVar6 & bVar25);
    goto LAB_004036dc;
  }
LAB_00403512:
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
LAB_0040354b:
  if (uVar15 < uVar9) {
    param_1[uVar15] = 0x5c;
  }
  uVar15 = uVar15 + 1;
  uVar22 = uVar22 + 1;
  bVar4 = bVar3;
LAB_0040355d:
  bVar3 = bVar4;
  if (uVar15 < uVar9) {
    param_1[uVar15] = bVar17;
  }
  uVar15 = uVar15 + 1;
  if (!bVar23) {
    bVar2 = false;
  }
  goto LAB_00403378;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00404500(int param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

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
      FUN_00405920();
    }
    if (PTR_DAT_0060d238 == &DAT_0060d240) {
      puVar8 = (undefined4 *)FUN_00405730(0);
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
      puVar8 = (undefined4 *)FUN_00405730(PTR_DAT_0060d238);
      PTR_DAT_0060d238 = (undefined *)puVar8;
    }
    memset(puVar8 + (long)DAT_0060d250 * 4,0,(long)((param_1 + 1) - DAT_0060d250) << 4);
    DAT_0060d250 = param_1 + 1;
  }
  uVar2 = param_4[1];
  puVar10 = (ulong *)(puVar8 + (long)param_1 * 4);
  uVar4 = *puVar10;
  __ptr = (undefined *)puVar10[1];
  uVar9 = FUN_004032d0(__ptr,uVar4,param_2,param_3,*param_4,uVar2 | 1,param_4 + 2,
                       *(undefined8 *)(param_4 + 10),*(undefined8 *)(param_4 + 0xc));
  if (uVar4 <= uVar9) {
    uVar9 = uVar9 + 1;
    *puVar10 = uVar9;
    if (__ptr != &DAT_0060d2c0) {
      free(__ptr);
    }
    __ptr = (undefined *)FUN_004056d0(uVar9);
    uVar3 = *param_4;
    puVar10[1] = (ulong)__ptr;
    FUN_004032d0(__ptr,uVar9,param_2,param_3,uVar3,uVar2 | 1,param_4 + 2,
                 *(undefined8 *)(param_4 + 10),*(undefined8 *)(param_4 + 0xc));
  }
  *piVar7 = iVar1;
  return __ptr;
}


void FUN_004046a0(undefined *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_0060d3c0;
  }
  FUN_004058d0(param_1,0x38);
  *piVar2 = iVar1;
  return;
}


undefined4 FUN_004046e0(undefined4 *param_1)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)&DAT_0060d3c0;
  }
  return *param_1;
}


void FUN_004046f0(undefined4 *param_1,undefined4 param_2)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)&DAT_0060d3c0;
  }
  *param_1 = param_2;
  return;
}


uint FUN_00404700(undefined *param_1,byte param_2,uint param_3)

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


undefined4 FUN_00404740(undefined *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_0060d3c0;
  }
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_1 + 4) = param_2;
  return uVar1;
}


void FUN_00404760(undefined4 *param_1,long param_2,long param_3)

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


void FUN_00404790(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 *param_5)

{
  int iVar1;
  int *piVar2;
  
  if (param_5 == (undefined4 *)0x0) {
    param_5 = (undefined4 *)&DAT_0060d3c0;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  FUN_004032d0(param_1,param_2,param_3,param_4,*param_5,param_5[1],param_5 + 2,
               *(undefined8 *)(param_5 + 10),*(undefined8 *)(param_5 + 0xc));
  *piVar2 = iVar1;
  return;
}


undefined8 FUN_00404810(undefined8 param_1,undefined8 param_2,long *param_3,undefined4 *param_4)

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
  lVar3 = FUN_004032d0(0,0,param_1,param_2,*param_4,uVar5,param_4 + 2,*(undefined8 *)(param_4 + 10),
                       *(undefined8 *)(param_4 + 0xc));
  uVar4 = FUN_004056d0(lVar3 + 1);
  FUN_004032d0(uVar4,lVar3 + 1,param_1,param_2,*param_4,uVar5,param_4 + 2,
               *(undefined8 *)(param_4 + 10),*(undefined8 *)(param_4 + 0xc));
  *piVar2 = iVar1;
  if (param_3 != (long *)0x0) {
    *param_3 = lVar3;
  }
  return uVar4;
}


void FUN_00404900(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00404810(param_1,param_2,0,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404910(void)

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


void FUN_004049b0(undefined8 param_1,undefined8 param_2)

{
  FUN_00404500(param_1,param_2,0xffffffffffffffff,&DAT_0060d3c0);
  return;
}


void FUN_004049d0(void)

{
  FUN_00404500();
  return;
}


void FUN_004049e0(undefined8 param_1)

{
  FUN_00404500(0,param_1,0xffffffffffffffff,&DAT_0060d3c0);
  return;
}


void FUN_00404a00(undefined8 param_1,undefined8 param_2)

{
  FUN_00404500(0,param_1,param_2,&DAT_0060d3c0);
  return;
}


void FUN_00404a20(undefined8 param_1,int param_2,undefined8 param_3)

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
    FUN_00404500(param_1,param_3,0xffffffffffffffff,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00404a90(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

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
    FUN_00404500(param_1,param_3,param_4,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00404b00(undefined4 param_1,undefined8 param_2)

{
  FUN_00404a20(0,param_1,param_2);
  return;
}


void FUN_00404b10(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00404a90(0,param_1,param_2,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404b20(undefined8 param_1,undefined8 param_2,byte param_3)

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
  FUN_00404500(0,param_1,param_2,&local_48);
  return;
}


void FUN_00404b90(undefined8 param_1,char param_2)

{
  FUN_00404b20(param_1,0xffffffffffffffff,(int)param_2);
  return;
}


void FUN_00404ba0(undefined8 param_1)

{
  FUN_00404b20(param_1,0xffffffffffffffff,0x3a);
  return;
}


void FUN_00404bc0(undefined8 param_1,undefined8 param_2)

{
  FUN_00404b20(param_1,param_2,0x3a);
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
    local_40 = 0x400000000000000;
    local_44 = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    local_48 = param_2;
    FUN_00404500(param_1,param_3,0xffffffffffffffff,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404c40(undefined8 param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5
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
    FUN_00404500(param_1,param_4,param_5,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00404cb0(void)

{
  FUN_00404c40();
  return;
}


void FUN_00404cc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00404c40(0,param_1,param_2,param_3,0xffffffffffffffff);
  return;
}


void FUN_00404ce0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00404c40(0,param_1,param_2,param_3,param_4);
  return;
}


void FUN_00404d00(void)

{
  FUN_00404500();
  return;
}


void FUN_00404d10(undefined8 param_1,undefined8 param_2)

{
  FUN_00404500(0,param_1,param_2,&DAT_0060d200);
  return;
}


void FUN_00404d30(undefined8 param_1,undefined8 param_2)

{
  FUN_00404500(param_1,param_2,0xffffffffffffffff,&DAT_0060d200);
  return;
}


void FUN_00404d50(undefined8 param_1)

{
  FUN_00404500(0,param_1,0xffffffffffffffff,&DAT_0060d200);
  return;
}


undefined8 FUN_00404d70(void *param_1,size_t param_2,FILE *param_3)

{
  fwrite(param_1,1,param_2,param_3);
  return 0;
}


undefined8 FUN_00404d90(uint param_1,undefined8 param_2,undefined8 param_3)

{
  if (param_1 < 0x10000) {
    __fprintf_chk(param_3,1,"\\u%04X");
    return 0xffffffffffffffff;
  }
  __fprintf_chk(param_3,1,"\\U%08X");
  return 0xffffffffffffffff;
}


undefined8 FUN_00404de0(undefined4 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_2 != 0) {
    uVar1 = dcgettext(0,param_2,5);
    uVar2 = dcgettext(0,"cannot convert U+%04X to local character set: %s",5);
    error(1,0,uVar2,param_1,uVar1);
    return 0xffffffffffffffff;
  }
  uVar1 = dcgettext(0,"cannot convert U+%04X to local character set",5);
  error(1,0,uVar1,param_1);
  return 0xffffffffffffffff;
}


void FUN_00404e70(uint param_1,code *param_2,code *param_3,undefined8 param_4)

{
  int iVar1;
  byte *__tocode;
  size_t sVar2;
  long lVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined uVar6;
  undefined uVar7;
  bool bVar8;
  byte bVar9;
  char local_6e [6];
  char *local_68;
  size_t local_60;
  char *local_58;
  size_t local_50;
  char local_48 [32];
  
  bVar9 = 0;
  uVar6 = 0;
  uVar7 = DAT_0060d404 == 0;
  if ((bool)uVar7) {
    __tocode = (byte *)FUN_00405d70();
    lVar3 = 6;
    pbVar4 = __tocode;
    pbVar5 = (byte *)"UTF-8";
    do {
      if (lVar3 == 0) break;
      lVar3 = lVar3 + -1;
      uVar6 = *pbVar4 < *pbVar5;
      uVar7 = *pbVar4 == *pbVar5;
      pbVar4 = pbVar4 + (ulong)bVar9 * -2 + 1;
      pbVar5 = pbVar5 + (ulong)bVar9 * -2 + 1;
    } while ((bool)uVar7);
    bVar8 = (!(bool)uVar6 && !(bool)uVar7) == (bool)uVar6;
    DAT_0060d400 = (uint)bVar8;
    if ((!bVar8) &&
       (DAT_0060d3f8 = iconv_open((char *)__tocode,"UTF-8"),
       DAT_0060d3f8 == (iconv_t)0xffffffffffffffff)) {
      DAT_0060d3f8 = iconv_open("ASCII","UTF-8");
    }
    DAT_0060d404 = 1;
  }
  if ((DAT_0060d400 == 0) && (DAT_0060d3f8 == (iconv_t)0xffffffffffffffff)) {
    (*param_3)(param_1,"iconv function not usable",param_4);
  }
  else {
    if (param_1 < 0x80) {
      local_6e[0] = (char)param_1;
      local_60 = 1;
    }
    else {
      iVar1 = FUN_00405080(local_6e,param_1,6);
      local_60 = (size_t)iVar1;
      if (iVar1 < 0) {
        (*param_3)(param_1,"character out of range",param_4);
        return;
      }
    }
    local_68 = local_6e;
    if (DAT_0060d400 == 0) {
      local_50 = 0x19;
      local_58 = local_48;
      sVar2 = iconv(DAT_0060d3f8,&local_68,&local_60,&local_58,&local_50);
      if (((local_60 != 0) || (sVar2 == 0xffffffffffffffff)) ||
         (sVar2 = iconv(DAT_0060d3f8,(char **)0x0,(size_t *)0x0,&local_58,&local_50),
         sVar2 == 0xffffffffffffffff)) {
        (*param_3)(param_1,0,param_4);
        return;
      }
      (*param_2)(local_48,(long)local_58 - (long)local_48,param_4);
    }
    else {
      (*param_2)(local_68,local_60,param_4);
    }
  }
  return;
}


void FUN_00405060(undefined8 param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  
  pcVar1 = FUN_00404de0;
  if (param_3 == 0) {
    pcVar1 = FUN_00404d90;
  }
  FUN_00404e70(param_2,FUN_00404d70,pcVar1,param_1);
  return;
}


undefined8 FUN_00405080(byte *param_1,uint param_2,int param_3)

{
  byte bVar1;
  undefined8 uVar2;
  
  if (param_2 < 0x80) {
    return 0xfffffffe;
  }
  if (param_2 < 0x800) {
    if (param_3 < 2) {
      return 0xfffffffe;
    }
    uVar2 = 2;
  }
  else {
    if (param_2 < 0x10000) {
      if (param_2 - 0xd800 < 0x800) {
        return 0xffffffff;
      }
      if (param_3 < 3) {
        return 0xfffffffe;
      }
      uVar2 = 3;
    }
    else {
      if (0x10ffff < param_2) {
        return 0xffffffff;
      }
      if (param_3 < 4) {
        return 0xfffffffe;
      }
      bVar1 = (byte)param_2;
      param_2 = param_2 >> 6 | 0x10000;
      param_1[3] = bVar1 & 0x3f | 0x80;
      uVar2 = 4;
    }
    bVar1 = (byte)param_2;
    param_2 = param_2 >> 6 | 0x800;
    param_1[2] = bVar1 & 0x3f | 0x80;
  }
  *param_1 = (byte)(param_2 >> 6) | 0xc0;
  param_1[1] = (byte)param_2 & 0x3f | 0x80;
  return uVar2;
}


undefined8
FUN_00405130(FILE *param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5,
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
  uVar1 = dcgettext(0,&DAT_0040aadc,5);
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
    goto LAB_004053ac;
  case 5:
    uVar1 = param_5[3];
    uVar4 = param_5[2];
    uVar5 = param_5[1];
    uVar6 = *param_5;
    uVar7 = dcgettext(0,"Written by %s, %s, %s,\n%s, and %s.\n",5);
LAB_004053ac:
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
    goto LAB_00405449;
  case 7:
    uVar1 = param_5[2];
    uVar4 = param_5[5];
    uVar5 = param_5[4];
    uVar6 = param_5[3];
    local_58 = param_5[1];
    uVar7 = *param_5;
    uVar3 = dcgettext(0,"Written by %s, %s, %s,\n%s, %s, %s, and %s.\n",5);
LAB_00405449:
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
    goto LAB_0040522a;
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
LAB_0040522a:
  uVar1 = __fprintf_chk(param_1,1,uVar3,uVar7,local_50,local_58,uVar6,uVar5,uVar4,uVar1,local_48);
  return uVar1;
}


void FUN_00405510(void)

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
  FUN_00405130();
  return;
}


void FUN_00405530(void)

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
  FUN_00405130();
  return;
}


void FUN_00405590(void)

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
  FUN_00405130();
  return;
}


void FUN_00405650(void)

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


void FUN_004056d0(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00405920();
  }
  return;
}


void FUN_004056f0(ulong param_1,ulong param_2)

{
  if ((-1 < SUB168(ZEXT816(param_1) * ZEXT816(param_2),0)) &&
     (SUB168(ZEXT816(param_1) * ZEXT816(param_2) >> 0x40,0) == 0)) {
    FUN_004056d0();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00405920();
}


void thunk_FUN_004056d0(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00405920();
  }
  return;
}


void * FUN_00405730(void *param_1,size_t param_2)

{
  void *pvVar1;
  
  if ((param_2 == 0) && (param_1 != (void *)0x0)) {
    free(param_1);
    return (void *)0x0;
  }
  pvVar1 = realloc(param_1,param_2);
  if ((pvVar1 == (void *)0x0) && (param_2 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00405920();
  }
  return pvVar1;
}


void FUN_00405770(undefined8 param_1,ulong param_2,ulong param_3)

{
  if ((-1 < SUB168(ZEXT816(param_2) * ZEXT816(param_3),0)) &&
     (SUB168(ZEXT816(param_2) * ZEXT816(param_3) >> 0x40,0) == 0)) {
    FUN_00405730();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00405920();
}


void FUN_004057a0(long param_1,ulong *param_2,ulong param_3)

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
    if ((SUB168(ZEXT816(uVar2) * ZEXT816(param_3),0) < 0) || (uVar3 != 0)) goto LAB_004057fb;
  }
  else {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x5555555555555554);
    uVar3 = SUB168(auVar1 % ZEXT816(param_3),0);
    if (SUB168(auVar1 / ZEXT816(param_3),0) <= uVar2) {
LAB_004057fb:
                    /* WARNING: Subroutine does not return */
      FUN_00405920(param_1,param_2,uVar3);
    }
    uVar2 = (uVar2 >> 1) + 1 + uVar2;
  }
  *param_2 = uVar2;
  FUN_00405730(param_1,uVar2 * param_3);
  return;
}


void FUN_00405830(long param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (param_1 == 0) {
    if (uVar1 == 0) {
      *param_2 = 0x80;
      FUN_00405730(0,0x80);
      return;
    }
    if ((long)uVar1 < 0) goto LAB_0040587a;
  }
  else {
    if (0x5555555555555553 < uVar1) {
LAB_0040587a:
                    /* WARNING: Subroutine does not return */
      FUN_00405920();
    }
    uVar1 = (uVar1 >> 1) + 1 + uVar1;
  }
  *param_2 = uVar1;
  FUN_00405730(param_1,uVar1);
  return;
}


void FUN_00405880(size_t param_1)

{
  void *__s;
  
  __s = (void *)FUN_004056d0();
  memset(__s,0,param_1);
  return;
}


void FUN_004058a0(size_t param_1,ulong param_2)

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
  FUN_00405920();
}


void FUN_004058d0(void *param_1,size_t param_2)

{
  void *__dest;
  
  __dest = (void *)FUN_004056d0(param_2);
  memcpy(__dest,param_1,param_2);
  return;
}


void FUN_00405900(char *param_1)

{
  void *__dest;
  size_t sVar1;
  
  sVar1 = strlen(param_1);
  __dest = (void *)FUN_004056d0(sVar1 + 1);
  memcpy(__dest,param_1,sVar1 + 1);
  return;
}


void FUN_00405920(void)

{
  undefined8 uVar1;
  
  uVar1 = dcgettext(0,"memory exhausted",5);
  error(DAT_0060d1f8,0,"%s",uVar1);
                    /* WARNING: Subroutine does not return */
  abort();
}


int FUN_00405960(void)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  
  iVar1 = FUN_00405c90();
  if (iVar1 < 0) {
    iVar2 = ferror(stdout);
    if (iVar2 == 0) {
      uVar3 = dcgettext(0,"cannot perform formatted output",5);
      piVar4 = __errno_location();
      error(DAT_0060d1f8,*piVar4,uVar3);
    }
  }
  return iVar1;
}


void FUN_004059c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
  local_d0 = 8;
  local_c0 = local_b8;
  local_cc = 0x30;
  local_b0 = param_10;
  local_a8 = param_11;
  local_a0 = param_12;
  local_98 = param_13;
  local_90 = param_14;
  FUN_00405960(param_9,&local_d0);
  return;
}


int FUN_00405a60(FILE *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  
  iVar1 = FUN_00405bd0();
  if (iVar1 < 0) {
    iVar2 = ferror(param_1);
    if (iVar2 == 0) {
      uVar3 = dcgettext(0,"cannot perform formatted output",5);
      piVar4 = __errno_location();
      error(DAT_0060d1f8,*piVar4,uVar3);
    }
  }
  return iVar1;
}


void FUN_00405ac0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 undefined8 param_13,undefined8 param_14)

{
  char in_AL;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined *local_c8;
  undefined *local_c0;
  undefined local_b8 [16];
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
  local_d0 = 0x10;
  local_c0 = local_b8;
  local_cc = 0x30;
  local_a8 = param_11;
  local_a0 = param_12;
  local_98 = param_13;
  local_90 = param_14;
  FUN_00405a60(param_9,param_10,&local_d0);
  return;
}


size_t FUN_00405b50(wchar_t *param_1,byte *param_2,size_t param_3,mbstate_t *param_4)

{
  char cVar1;
  size_t sVar2;
  wchar_t local_1c;
  
  if (param_2 == (byte *)0x0) {
    param_3 = 1;
    param_2 = (byte *)0x40ab22;
  }
  else {
    if (param_3 == 0) {
      return 0xfffffffffffffffe;
    }
    if (param_1 != (wchar_t *)0x0) goto LAB_00405b74;
  }
  param_1 = &local_1c;
LAB_00405b74:
  sVar2 = mbrtowc(param_1,(char *)param_2,param_3,param_4);
  if ((0xfffffffffffffffd < sVar2) && (cVar1 = FUN_00405d10(0), cVar1 == '\0')) {
    sVar2 = 1;
    *param_1 = (uint)*param_2;
  }
  return sVar2;
}


ulong FUN_00405bd0(FILE *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined *__ptr;
  size_t sVar2;
  int *piVar3;
  size_t sVar4;
  size_t local_800;
  undefined local_7f8 [2008];
  
  local_800 = 2000;
  __ptr = (undefined *)FUN_00406410(local_7f8,&local_800,param_2,param_3);
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
      goto LAB_00405c3c;
    }
    if (__ptr != local_7f8) {
      free(__ptr);
    }
    if (sVar4 < 0x80000000) goto LAB_00405c3c;
    piVar3 = __errno_location();
    *piVar3 = 0x4b;
  }
  sVar4 = 0xffffffff;
  FUN_00406400(param_1);
LAB_00405c3c:
  return sVar4 & 0xffffffff;
}


void FUN_00405c90(undefined8 param_1,undefined8 param_2)

{
  FUN_00405bd0(stdout,param_1,param_2);
  return;
}


ulong FUN_00405cb0(uint *param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  
  lVar2 = __fpending();
  uVar1 = *param_1;
  uVar3 = FUN_004062e0(param_1);
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


bool FUN_00405d10(int param_1)

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
    pbVar5 = &DAT_00409c6d;
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

char * FUN_00405d70(void)

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
  if (DAT_0060d408 != (char *)0x0) goto LAB_00405daa;
  pcVar7 = getenv("CHARSETALIASDIR");
  if ((pcVar7 == (char *)0x0) || (*pcVar7 == '\0')) {
    sVar6 = 0x73;
    sVar5 = 0x65;
    __n = 100;
    pcVar7 = 
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib"
    ;
LAB_00405e95:
    __file = (char *)malloc(sVar6);
    if (__file != (char *)0x0) {
      memcpy(__file,pcVar7,__n);
      __file[__n] = '/';
      goto LAB_00405eb6;
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
        goto LAB_00405e95;
      }
      sVar6 = __n + 0xe;
    }
    __file = (char *)malloc(sVar6);
    if (__file != (char *)0x0) {
      memcpy(__file,pcVar7,__n);
      sVar5 = __n;
LAB_00405eb6:
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
LAB_00405f50:
          pbVar8 = (byte *)__stream->_IO_read_ptr;
          if (__stream->_IO_read_end <= pbVar8) goto LAB_004060dc;
          do {
            __stream->_IO_read_ptr = (char *)(pbVar8 + 1);
            uVar4 = (uint)*pbVar8;
            __ptr = pcVar7;
            while( true ) {
              pcVar7 = __ptr;
              if ((uVar4 - 9 < 2) || (uVar4 == 0x20)) goto LAB_00405f50;
              if (uVar4 == 0x23) goto LAB_00406141;
              ungetc(uVar4,__stream);
              iVar2 = fscanf(__stream,"%50s %50s",&local_b8,&local_78);
              puVar13 = &local_b8;
              if (iVar2 < 2) goto LAB_004060ef;
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
                FUN_004062e0(__stream);
                goto LAB_00405ef4;
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
LAB_004060dc:
              uVar4 = __uflow(__stream);
              __ptr = pcVar7;
              if (uVar4 == 0xffffffff) goto LAB_004060ef;
            }
          } while( true );
        }
        close(iVar2);
      }
      goto LAB_00405eee;
    }
  }
  DAT_0060d408 = "";
LAB_00405daa:
  cVar1 = *DAT_0060d408;
  pcVar7 = DAT_0060d408;
  do {
    if (cVar1 == '\0') {
LAB_00405e04:
      if (*__s1 == '\0') {
        __s1 = "ASCII";
      }
      return __s1;
    }
    iVar2 = strcmp(__s1,pcVar7);
    if ((iVar2 == 0) || ((cVar1 == '*' && (pcVar7[1] == '\0')))) {
      sVar6 = strlen(pcVar7);
      __s1 = pcVar7 + sVar6 + 1;
      goto LAB_00405e04;
    }
    sVar6 = strlen(pcVar7);
    sVar5 = strlen(pcVar7 + sVar6 + 1);
    pcVar7 = pcVar7 + sVar6 + 1 + sVar5 + 1;
    cVar1 = *pcVar7;
  } while( true );
LAB_00406141:
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
  if (uVar4 == 0xffffffff) goto LAB_004060ef;
  goto LAB_00405f50;
LAB_004060ef:
  FUN_004062e0(__stream);
  if (local_d0 == 0) {
LAB_00405eee:
    pcVar7 = "";
  }
  else {
    pcVar7[local_d0] = '\0';
  }
LAB_00405ef4:
  free(__file);
  DAT_0060d408 = pcVar7;
  goto LAB_00405daa;
}


int FUN_004062e0(FILE *param_1)

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
      if (_Var4 == -1) goto LAB_00406347;
    }
    iVar1 = FUN_00406360(param_1);
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
LAB_00406347:
  iVar1 = fclose(param_1);
  return iVar1;
}


void FUN_00406360(FILE *param_1)

{
  int iVar1;
  
  if (param_1 != (FILE *)0x0) {
    iVar1 = __freading();
    if ((iVar1 != 0) && ((param_1->_flags & 0x100U) != 0)) {
      FUN_004063a0(param_1,0,1);
      fflush(param_1);
      return;
    }
  }
  fflush(param_1);
  return;
}


ulong FUN_004063a0(FILE *param_1,__off_t param_2,int param_3)

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


void FUN_00406400(uint *param_1)

{
  *param_1 = *param_1 | 0x20;
  return;
}


/* WARNING: Removing unreachable block (ram,0x00407c4c) */
/* WARNING: Removing unreachable block (ram,0x00407d8d) */
/* WARNING: Removing unreachable block (ram,0x00407c60) */
/* WARNING: Removing unreachable block (ram,0x00407134) */
/* WARNING: Removing unreachable block (ram,0x00406700) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Could not reconcile some variable overlaps */

undefined2 *
FUN_00406410(undefined2 *param_1,undefined8 *param_2,undefined2 *param_3,undefined8 param_4)

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
  iVar10 = FUN_00408150(param_3,&local_588,local_678);
  if (iVar10 < 0) {
    return (undefined2 *)0x0;
  }
  iVar10 = FUN_00407f30(param_4,local_678);
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
LAB_004064d4:
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
      if (puVar24 == param_3) goto LAB_00406688;
      do {
        puVar24 = (undefined2 *)((long)puVar24 - (long)_local_6a8);
        __n = puVar14 + (long)puVar24;
        puVar13 = puVar20;
        if (CARRY8((ulong)puVar14,(ulong)puVar24)) {
          if (puVar31 != (undefined *)0xffffffffffffffff) goto LAB_00406a00;
          __n = (undefined *)0xffffffffffffffff;
        }
        else if (puVar31 < __n) {
          if (puVar31 == (undefined *)0x0) {
            if (__n < (undefined *)0xd) {
              puVar31 = (undefined *)0xc;
            }
            else {
LAB_0040661e:
              puVar31 = __n;
              if (__n == (undefined *)0xffffffffffffffff) goto LAB_00406a00;
            }
          }
          else {
            if ((long)puVar31 < 0) goto LAB_00406a00;
            puVar31 = (undefined *)((long)puVar31 * 2);
            if (puVar31 < __n) goto LAB_0040661e;
          }
          if ((puVar20 == (undefined2 *)0x0) || (puVar20 == local_690)) {
            local_6b8 = (undefined2 *)_local_6a8;
            _local_6a8 = (float10)CONCAT91(stack0xfffffffffffff959,puVar20 == local_690);
            local_698 = puVar24;
            *(undefined8 *)(puVar27 + -8) = 0x40657c;
            puVar13 = (undefined2 *)malloc((size_t)puVar31);
            if (puVar13 == (undefined2 *)0x0) goto LAB_00406a00;
            puVar24 = local_698;
            _local_6a8 = (int *)local_6b8;
            if ((puVar14 != (undefined *)0x0) && (local_6a8[0] != '\0')) {
              _local_6a8 = (float10)CONCAT28(auStack_6a4._4_2_,local_6b8);
              *(undefined8 *)(puVar27 + -8) = 0x4065ca;
              puVar13 = (undefined2 *)memcpy(puVar13,puVar20,(size_t)puVar14);
              puVar24 = local_698;
            }
          }
          else {
            local_698 = puVar24;
            *(undefined8 *)(puVar27 + -8) = 0x40665f;
            puVar13 = (undefined2 *)realloc(puVar20,(size_t)puVar31);
            if (puVar13 == (undefined2 *)0x0) {
LAB_00406c15:
              *(undefined8 *)(puVar27 + -8) = 0x406c1a;
              piVar16 = __errno_location();
              _local_6a8 = (float10)CONCAT28(auStack_6a4._4_2_,piVar16);
              goto LAB_00406c28;
            }
            puVar24 = local_698;
          }
        }
        *(undefined8 *)(puVar27 + -8) = 0x406688;
        memcpy((undefined *)((long)puVar13 + (long)puVar14),_local_6a8,(size_t)puVar24);
        puVar20 = puVar13;
LAB_00406688:
        do {
          if (local_588 == local_6c0) {
            puVar14 = __n + 1;
            puVar24 = puVar20;
            if ((undefined *)0xfffffffffffffffe < __n) {
              if (puVar31 == (undefined *)0xffffffffffffffff) goto LAB_00407812;
              goto LAB_00406a00;
            }
            if (puVar14 <= puVar31) goto LAB_00407812;
            if (puVar31 == (undefined *)0x0) {
              if (puVar14 < (undefined *)0xd) {
                puVar31 = (undefined *)0xc;
              }
              else {
LAB_00407def:
                puVar31 = puVar14;
                if (puVar14 == (undefined *)0xffffffffffffffff) goto LAB_00406a00;
              }
            }
            else {
              if ((long)puVar31 < 0) goto LAB_00406a00;
              puVar31 = (undefined *)((long)puVar31 * 2);
              if (puVar31 < puVar14) goto LAB_00407def;
            }
            bVar33 = puVar20 == local_690;
            if ((puVar20 == (undefined2 *)0x0) || (bVar33)) {
              *(undefined8 *)(puVar27 + -8) = 0x407da9;
              puVar24 = (undefined2 *)malloc((size_t)puVar31);
              if (puVar24 == (undefined2 *)0x0) goto LAB_00406a00;
              if ((__n != (undefined *)0x0) && (bVar33)) {
                *(undefined8 *)(puVar27 + -8) = 0x407dd5;
                puVar24 = (undefined2 *)memcpy(puVar24,puVar20,(size_t)__n);
              }
            }
            else {
              *(undefined8 *)(puVar27 + -8) = 0x407806;
              puVar24 = (undefined2 *)realloc(puVar20,(size_t)puVar31);
              if (puVar24 == (undefined2 *)0x0) goto LAB_00406c15;
            }
LAB_00407812:
            *(undefined *)((long)puVar24 + (long)__n) = 0;
            if ((puVar14 < puVar31) && (puVar24 != local_690)) {
              *(undefined8 *)(puVar27 + -8) = 0x407830;
              puVar20 = (undefined2 *)realloc(puVar24,(size_t)puVar14);
              if (puVar20 != (undefined2 *)0x0) {
                puVar24 = puVar20;
              }
            }
            puVar31 = local_6e0;
            if (local_6e0 != (undefined *)0x0) {
              *(undefined8 *)(puVar27 + -8) = 0x40784b;
              free(puVar31);
            }
            if (local_580 != auStack_568) {
              *(undefined8 *)(puVar27 + -8) = 0x407867;
              free(local_580);
            }
            if (local_670 != auStack_668) {
              *(undefined8 *)(puVar27 + -8) = 0x407883;
              free(local_670);
            }
            *local_6d8 = __n;
            return puVar24;
          }
          bVar8 = *(byte *)(puVar32 + 9);
          lVar30 = puVar32[10];
          if (bVar8 == 0x25) {
            if (lVar30 != -1) goto LAB_0040713c;
            puVar14 = __n + 1;
            puVar24 = puVar20;
            if (__n < (undefined *)0xffffffffffffffff) {
              if (puVar31 < puVar14) {
                if (puVar31 == (undefined *)0x0) {
                  if (puVar14 < (undefined *)0xd) {
                    puVar31 = (undefined *)0xc;
                  }
                  else {
LAB_004073b2:
                    puVar31 = puVar14;
                    if (puVar14 == (undefined *)0xffffffffffffffff) goto LAB_00406a00;
                  }
                }
                else {
                  if ((long)puVar31 < 0) goto LAB_00406a00;
                  puVar31 = (undefined *)((long)puVar31 * 2);
                  if (puVar31 < puVar14) goto LAB_004073b2;
                }
                if ((puVar20 == (undefined2 *)0x0) || (puVar20 == local_690)) {
                  local_698 = (undefined2 *)
                              ((ulong)local_698 & 0xffffffffffffff00 | (ulong)(puVar20 == local_690)
                              );
                  *(undefined8 *)(puVar27 + -8) = 0x4072fe;
                  puVar24 = (undefined2 *)malloc((size_t)puVar31);
                  if (puVar24 == (undefined2 *)0x0) goto LAB_00406a00;
                  if ((__n != (undefined *)0x0) && ((char)local_698 != '\0')) {
                    *(undefined8 *)(puVar27 + -8) = 0x407330;
                    puVar24 = (undefined2 *)memcpy(puVar24,puVar20,(size_t)__n);
                  }
                }
                else {
                  *(undefined8 *)(puVar27 + -8) = 0x406af6;
                  puVar24 = (undefined2 *)realloc(puVar20,(size_t)puVar31);
                  if (puVar24 == (undefined2 *)0x0) goto LAB_00406c15;
                }
              }
            }
            else {
              if (puVar31 != (undefined *)0xffffffffffffffff) goto LAB_00406a00;
              puVar14 = (undefined *)0xffffffffffffffff;
            }
            *(undefined *)((long)puVar24 + (long)__n) = 0x25;
            puVar20 = puVar24;
            __n = puVar14;
            goto LAB_00406b07;
          }
          if (lVar30 == -1) goto LAB_0040713c;
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
switchD_00406b6c_caseD_5:
                    /* WARNING: Subroutine does not return */
              *(undefined8 *)(puVar27 + -8) = 0x401793;
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
                        if (pcVar21 == pcVar6) goto LAB_00406990;
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
                  if (*(int *)(local_670 + (long)puVar13 * 0x10) != 5) goto LAB_0040713c;
                  iVar10 = *(int *)((long)(local_670 + (long)puVar13 * 0x10) + 0x10);
                  puVar24 = (undefined2 *)(long)iVar10;
                  if (iVar10 < 0) {
                    local_6b8._0_4_ = (uint)local_6b8 | 2;
                    puVar24 = (undefined2 *)-(long)(undefined2 *)(long)iVar10;
                  }
                }
              }
LAB_00406990:
              pcVar21 = (char *)puVar32[7];
              if ((char *)puVar32[6] == pcVar21) {
LAB_00407040:
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
                          if (pcVar21 == pcVar6) goto LAB_00406a00;
                          pcVar26 = pcVar6 + 1;
                          cVar9 = *pcVar6;
                          pcVar6 = pcVar26;
                        } while (cVar9 != '0');
                        puVar13 = (undefined2 *)0xffffffffffffffff;
                      }
                      pcVar25 = pcVar26;
                    } while (pcVar21 != pcVar26);
                    goto LAB_004069cc;
                  }
                }
                else {
                  if (*(int *)(local_670 + puVar32[8] * 0x10) != 5) goto LAB_0040713c;
                  iVar10 = *(int *)((long)(local_670 + puVar32[8] * 0x10) + 0x10);
                  puVar13 = (undefined2 *)(long)iVar10;
                  if (iVar10 < 0) goto LAB_00407040;
LAB_004069cc:
                  if (puVar13 != (undefined2 *)0x0) {
                    puVar18 = puVar13 + 6;
                    if (puVar13 < (undefined2 *)0xfffffffffffffff4) goto LAB_0040705e;
                    goto LAB_00406a00;
                  }
                }
                puVar18 = (undefined2 *)0xc;
              }
LAB_0040705e:
              if (puVar18 <= puVar24) {
                puVar18 = puVar24;
              }
              puVar17 = (undefined2 *)((long)puVar18 + 1);
              local_698 = puVar17;
              if (puVar18 == (undefined2 *)0xffffffffffffffff) goto LAB_00406a00;
              if (puVar17 < (undefined2 *)0x2bd) {
                puVar18 = local_2f8;
              }
              else {
                local_6d0 = puVar24;
                local_6c8 = puVar13;
                local_6b8 = (undefined2 *)
                            ((ulong)local_6b8 & 0xffffffff00000000 | (ulong)(uint)local_6b8);
                _local_6a8 = fVar34;
                if (puVar17 == (undefined2 *)0xffffffffffffffff) goto LAB_00406a00;
                *(undefined8 *)(puVar27 + -8) = 0x4070b2;
                puVar18 = (undefined2 *)malloc((size_t)puVar17);
                puVar13 = local_6c8;
                puVar24 = local_6d0;
                fVar34 = _local_6a8;
                if (puVar18 == (undefined2 *)0x0) goto LAB_00406a00;
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
                if (fVar34 != (float10)0) goto LAB_0040713c;
                bVar8 = *(byte *)(puVar32 + 9) & 0xdf;
                if (bVar8 == 0x46) {
                  *(undefined *)puVar17 = 0x30;
                  if ((((uint)local_6b8 & 0x10) == 0) && (puVar13 == (undefined2 *)0x0)) {
LAB_00407587:
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
                    *(undefined8 *)(puVar27 + -8) = 0x407ac1;
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
                    *(undefined8 *)(puVar27 + -8) = 0x407d1f;
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
                  if (((uint)local_6b8 & 0x10) == 0) goto LAB_00407587;
                  if (puVar13 == (undefined2 *)0x0) {
                    local_6e8 = (undefined2 *)
                                ((ulong)local_6e8 & 0xffffffff00000000 |
                                (ulong)uVar7 & 0xffffffff0000ffff);
                    local_6d0 = puVar24;
                    local_6c8 = puVar17 + 1;
                    local_6b8 = puVar18;
                    _local_6a8 = (float10)CONCAT64(auStack_6a4._0_6_,(uint)local_6b8);
                    *(undefined8 *)(puVar27 + -8) = 0x407ed7;
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
                    *(undefined8 *)(puVar27 + -8) = 0x4079ed;
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
                  if (bVar8 != 0x41) goto LAB_0040713c;
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
                    *(undefined8 *)(puVar27 + -8) = 0x407e39;
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
                if (fVar34 + fVar34 != fVar34) goto LAB_0040713c;
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
LAB_0040713c:
                    /* WARNING: Subroutine does not return */
                *(undefined **)(puVar27 + -8) = &UNK_00407141;
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
LAB_00407c3a:
                        puVar31 = puVar14;
                        if (puVar14 == (undefined *)0xffffffffffffffff) goto LAB_00406a00;
                      }
                    }
                    else {
                      if ((long)puVar31 < 0) goto LAB_00406a00;
                      puVar31 = (undefined *)((long)puVar31 * 2);
                      if (puVar31 < puVar14) goto LAB_00407c3a;
                    }
                    if ((puVar20 == (undefined2 *)0x0) || (puVar20 == local_690)) {
                      local_6b8 = (undefined2 *)
                                  ((ulong)local_6b8 & 0xffffffffffffff00 |
                                  (ulong)(puVar20 == local_690));
                      local_698 = puVar18;
                      *(undefined8 *)(puVar27 + -8) = 0x407927;
                      puVar24 = (undefined2 *)malloc((size_t)puVar31);
                      if (puVar24 == (undefined2 *)0x0) goto LAB_00406a00;
                      puVar18 = local_698;
                      if ((__n != (undefined *)0x0) && ((char)local_6b8 != '\0')) {
                        *(undefined8 *)(puVar27 + -8) = 0x407975;
                        puVar24 = (undefined2 *)memcpy(puVar24,puVar20,(size_t)__n);
                        puVar18 = local_698;
                      }
                    }
                    else {
                      local_698 = puVar18;
                      *(undefined8 *)(puVar27 + -8) = 0x4076a2;
                      puVar24 = (undefined2 *)realloc(puVar20,(size_t)puVar31);
                      if (puVar24 == (undefined2 *)0x0) goto LAB_00406a00;
                      puVar18 = local_698;
                    }
                  }
                }
                else if (puVar31 != (undefined *)0xffffffffffffffff) goto LAB_00406a00;
              }
              local_698 = puVar18;
              *(undefined8 *)(puVar27 + -8) = 0x4076d6;
              memcpy((undefined *)((long)puVar24 + (long)__n),puVar18,(size_t)_local_6a8);
              puVar13 = local_698;
              puVar20 = puVar24;
              __n = puVar14;
              if (local_698 != local_2f8) {
                *(undefined8 *)(puVar27 + -8) = 0x4076f5;
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
                *(undefined8 *)(puVar27 + -8) = 0x4067a9;
                memcpy(puVar24,pvVar5,sVar28);
                puVar24 = (undefined2 *)((long)puVar24 + (long)_local_6a8);
                puVar13 = local_6b8;
              }
              pvVar5 = (void *)puVar32[6];
              if (pvVar5 != (void *)puVar32[7]) {
                local_6b8 = puVar13;
                sVar28 = (long)(void *)puVar32[7] - (long)pvVar5;
                _local_6a8 = (float10)CONCAT28(auStack_6a4._4_2_,sVar28);
                *(undefined8 *)(puVar27 + -8) = 0x4067e6;
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
                      goto LAB_00406c08;
                    }
                  }
                  else {
                    *(undefined *)puVar24 = 0x4c;
                    puVar24 = (undefined2 *)((long)puVar24 + 1);
                  }
                }
                else {
LAB_00406c08:
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
                if (*(int *)(puVar13 + puVar32[5] * 0x10) != 5) goto LAB_0040713c;
                local_6b8 = (undefined2 *)CONCAT44(local_6b8._4_4_,1);
                local_680 = *(uint *)((long)(puVar13 + puVar32[5] * 0x10) + 0x10);
              }
              if (puVar32[8] != -1) {
                if (*(int *)(puVar13 + puVar32[8] * 0x10) != 5) goto LAB_0040713c;
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
LAB_00406ff2:
                      puVar31 = puVar14;
                      if (puVar14 == (undefined *)0xffffffffffffffff) goto LAB_00406a00;
                    }
                  }
                  else {
                    if ((long)puVar31 < 0) goto LAB_00406a00;
                    puVar31 = (undefined *)((long)puVar31 * 2);
                    if (puVar31 < puVar14) goto LAB_00406ff2;
                  }
                  if ((puVar20 == (undefined2 *)0x0) || (puVar20 == local_690)) {
                    _local_6a8 = (float10)CONCAT91(stack0xfffffffffffff959,puVar20 == local_690);
                    *(undefined8 *)(puVar27 + -8) = 0x40729e;
                    puVar13 = (undefined2 *)malloc((size_t)puVar31);
                    if (puVar13 == (undefined2 *)0x0) goto LAB_00406a00;
                    if ((__n != (undefined *)0x0) && (local_6a8[0] != '\0')) {
                      *(undefined8 *)(puVar27 + -8) = 0x4072d0;
                      puVar13 = (undefined2 *)memcpy(puVar13,puVar20,(size_t)__n);
                    }
                  }
                  else {
                    *(undefined8 *)(puVar27 + -8) = 0x4068f8;
                    puVar13 = (undefined2 *)realloc(puVar20,(size_t)puVar31);
                    if (puVar13 == (undefined2 *)0x0) goto LAB_00406a00;
                  }
                }
              }
              else if (puVar31 != (undefined *)0xffffffffffffffff) goto LAB_00406a00;
              *(undefined *)((long)puVar13 + (long)__n) = 0;
              local_6c8 = puVar13;
              *(undefined8 *)(puVar27 + -8) = 0x406915;
              puVar15 = (uint *)__errno_location();
              puVar13 = local_6c8;
              local_6c8 = puVar24;
              _local_6a8 = (float10)CONCAT28(auStack_6a4._4_2_,puVar15);
              local_6e8 = (undefined2 *)((ulong)local_6e8 & 0xffffffff00000000 | (ulong)*puVar15);
LAB_00406938:
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
                goto switchD_00406b6c_caseD_5;
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
                  goto LAB_00407212;
                }
                if ((uint)local_6b8 != 2) {
                  *(int **)(puVar27 + -0x10) = &local_684;
LAB_00406c7a:
                  puVar14 = local_6b0;
                  *(undefined8 *)(puVar27 + -0x18) = 0x406c97;
                  iVar10 = __snprintf_chk((undefined *)((long)puVar13 + (long)__n),uVar11,1,
                                          0xffffffffffffffff,puVar14,piVar16);
                  goto LAB_00406ca0;
                }
                *(int **)(puVar27 + -0x10) = &local_684;
                *(int **)(puVar27 + -0x18) = piVar16;
                goto LAB_004071c6;
              case 0xb:
                local_6d0 = puVar13;
                uVar1 = *(undefined8 *)(local_670 + puVar32[10] * 0x10 + 8);
                if ((uint)local_6b8 == 1) {
                  *(int **)(puVar27 + -0x10) = &local_684;
                }
                else {
                  if ((uint)local_6b8 != 2) {
                    *(undefined8 *)(puVar27 + -8) = 0x406f6e;
                    iVar10 = __snprintf_chk(uVar1,(undefined *)((long)puVar13 + (long)__n),uVar11,1,
                                            0xffffffffffffffff,puVar14,&local_684);
                    goto LAB_00406ca0;
                  }
                  *(int **)(puVar27 + -8) = &local_684;
                  *(ulong *)(puVar27 + -0x10) = (ulong)local_67c;
                }
                uVar4 = local_680;
                puVar14 = local_6b0;
                *(undefined8 *)(puVar27 + -0x18) = 0x40740e;
                iVar10 = __snprintf_chk(uVar1,(undefined *)((long)puVar13 + (long)__n),uVar11,1,
                                        0xffffffffffffffff,puVar14,uVar4);
                goto LAB_00406ca0;
              case 0xc:
                local_6d0 = puVar13;
                Var2 = *(unkbyte10 *)(local_670 + puVar32[10] * 0x10 + 8);
                if ((uint)local_6b8 != 1) {
                  if ((uint)local_6b8 != 2) {
                    piVar16 = &local_684;
                    *(unkbyte10 *)(puVar27 + -0x10) = Var2;
                    goto LAB_00406c7a;
                  }
                  *(int **)(puVar27 + -0x10) = &local_684;
                  uVar19 = (ulong)local_67c;
                  *(unkbyte10 *)(puVar27 + -0x20) = Var2;
                  *(ulong *)(puVar27 + -0x30) = uVar19;
                  *(undefined8 *)(puVar27 + -0x38) = 0x40746f;
                  iVar10 = __snprintf_chk((undefined *)((long)puVar13 + (long)__n),uVar11,1,
                                          0xffffffffffffffff,puVar14,uVar4);
                  goto LAB_00406ca0;
                }
                *(int **)(puVar27 + -0x10) = &local_684;
                *(unkbyte10 *)(puVar27 + -0x20) = Var2;
                goto LAB_004071cd;
              }
              local_6d0 = puVar13;
              if ((uint)local_6b8 == 1) {
                *(int **)(puVar27 + -8) = &local_684;
                *(ulong *)(puVar27 + -0x10) = uVar19;
LAB_00407212:
                uVar19 = (ulong)local_680;
LAB_00406dba:
                puVar14 = local_6b0;
                *(undefined8 *)(puVar27 + -0x18) = 0x406dd7;
                iVar10 = __snprintf_chk((undefined *)((long)puVar13 + (long)__n),uVar11,1,
                                        0xffffffffffffffff,puVar14,uVar19);
                if (-1 < local_684) goto LAB_00406cae;
LAB_00406dee:
                puVar24 = local_6d0;
                if (*(char *)((long)local_6c8 + 1) == '\0') {
                  if (iVar10 < 0) {
                    iVar10 = *_local_6a8;
                    if ((iVar10 == 0) && (iVar10 = 0x54, (*(byte *)(puVar32 + 9) & 0xef) != 99)) {
                      iVar10 = 0x16;
                    }
                    if ((local_6d0 != local_690) && (local_6d0 != (undefined2 *)0x0)) {
                      *(undefined8 *)(puVar27 + -8) = 0x406e44;
                      free(puVar24);
                    }
                    puVar31 = local_6e0;
                    if (local_6e0 != (undefined *)0x0) {
                      *(undefined8 *)(puVar27 + -8) = 0x406e58;
                      free(puVar31);
                    }
                    if (local_580 != auStack_568) {
                      *(undefined8 *)(puVar27 + -8) = 0x406e74;
                      free(local_580);
                    }
                    if (local_670 != auStack_668) {
                      *(undefined8 *)(puVar27 + -8) = 0x406e90;
                      free(local_670);
                    }
                    *_local_6a8 = iVar10;
                    return (undefined2 *)0x0;
                  }
                  goto LAB_00406cc8;
                }
                *(undefined *)((long)local_6c8 + 1) = 0;
                puVar13 = local_6d0;
                goto LAB_00406938;
              }
              if ((uint)local_6b8 != 2) {
                *(int **)(puVar27 + -0x10) = &local_684;
                goto LAB_00406dba;
              }
              *(int **)(puVar27 + -0x10) = &local_684;
              *(ulong *)(puVar27 + -0x18) = uVar19;
LAB_004071c6:
              *(ulong *)(puVar27 + -0x20) = (ulong)local_67c;
LAB_004071cd:
              uVar4 = local_680;
              puVar14 = local_6b0;
              *(undefined8 *)(puVar27 + -0x28) = 0x4071f1;
              iVar10 = __snprintf_chk((undefined *)((long)puVar13 + (long)__n),uVar11,1,
                                      0xffffffffffffffff,puVar14,uVar4);
LAB_00406ca0:
              if (local_684 < 0) goto LAB_00406dee;
LAB_00406cae:
              if (((ulong)(long)local_684 < uVar11) &&
                 (((undefined *)((long)local_684 + (long)local_6d0))[(long)__n] != '\0'))
              goto LAB_0040713c;
              if (local_684 < iVar10) {
LAB_00406cc8:
                local_684 = iVar10;
              }
              puVar24 = local_6d0;
              puVar20 = local_6d0;
              if (uVar11 <= local_684 + 1) {
                if (0x7ffffffe < uVar12) {
                  if ((local_6d0 != local_690) && (local_6d0 != (undefined2 *)0x0)) {
                    *(undefined8 *)(puVar27 + -8) = 0x4074d6;
                    free(puVar24);
                  }
                  puVar31 = local_6e0;
                  if (local_6e0 != (undefined *)0x0) {
                    *(undefined8 *)(puVar27 + -8) = 0x4074ea;
                    free(puVar31);
                  }
                  if (local_580 != auStack_568) {
                    *(undefined8 *)(puVar27 + -8) = 0x407506;
                    free(local_580);
                  }
                  if (local_670 != auStack_668) {
                    *(undefined8 *)(puVar27 + -8) = 0x407522;
                    free(local_670);
                  }
                  *_local_6a8 = 0x4b;
                  return (undefined2 *)0x0;
                }
                puVar13 = local_6d0;
                if ((long)puVar31 < 0) {
                  if (puVar31 != (undefined *)0xffffffffffffffff) goto LAB_00406a0f;
                }
                else {
                  if (CARRY8((ulong)(local_684 + 2),(ulong)__n) != false) goto LAB_00406a0f;
                  puVar14 = __n + (local_684 + 2);
                  if (__n + (local_684 + 2) <= (undefined *)((long)puVar31 * 2)) {
                    puVar14 = (undefined *)((long)puVar31 * 2);
                  }
                  if (puVar31 < puVar14) {
                    puVar31 = (undefined *)((long)puVar31 * 2);
                    if ((puVar31 < puVar14) &&
                       (puVar31 = puVar14, puVar14 == (undefined *)0xffffffffffffffff))
                    goto LAB_00406a0f;
                    bVar33 = local_6d0 == local_690;
                    if ((local_6d0 == (undefined2 *)0x0) || (bVar33)) {
                      *(undefined8 *)(puVar27 + -8) = 0x40716f;
                      puVar13 = (undefined2 *)malloc((size_t)puVar31);
                      puVar24 = local_6d0;
                      puVar20 = local_6d0;
                      if (puVar13 == (undefined2 *)0x0) goto LAB_00406a0f;
                      if ((__n != (undefined *)0x0) && (bVar33)) {
                        *(undefined8 *)(puVar27 + -8) = 0x40719d;
                        puVar13 = (undefined2 *)memcpy(puVar13,puVar24,(size_t)__n);
                      }
                    }
                    else {
                      *(undefined8 *)(puVar27 + -8) = 0x406d5d;
                      puVar13 = (undefined2 *)realloc(puVar24,(size_t)puVar31);
                      puVar20 = local_6d0;
                      if (puVar13 == (undefined2 *)0x0) goto LAB_00406a0f;
                    }
                  }
                }
                goto LAB_00406938;
              }
              __n = __n + local_684;
              *_local_6a8 = local_6e8._0_4_;
            }
          }
LAB_00406b07:
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
        goto LAB_004064d4;
      }
    }
  }
  goto LAB_00406b30;
LAB_00406a00:
  *(undefined8 *)(puVar27 + -8) = 0x406a05;
  piVar16 = __errno_location();
  _local_6a8 = (float10)CONCAT28(auStack_6a4._4_2_,piVar16);
LAB_00406a0f:
  if ((puVar20 != local_690) && (puVar20 != (undefined2 *)0x0)) {
LAB_00406c28:
    *(undefined8 *)(puVar27 + -8) = 0x406c30;
    free(puVar20);
  }
  puVar31 = local_6e0;
  if (local_6e0 != (undefined *)0x0) {
    *(undefined8 *)(puVar27 + -8) = 0x406a39;
    free(puVar31);
    goto LAB_00406a39;
  }
LAB_00406b30:
  *(undefined8 *)(puVar27 + -8) = 0x406b35;
  piVar16 = __errno_location();
  _local_6a8 = (float10)CONCAT28(auStack_6a4._4_2_,piVar16);
LAB_00406a39:
  if (local_580 != auStack_568) {
    *(undefined8 *)(puVar27 + -8) = 0x406a55;
    free(local_580);
  }
  if (local_670 != auStack_668) {
    *(undefined8 *)(puVar27 + -8) = 0x406a71;
    free(local_670);
  }
  *_local_6a8 = 0xc;
  return (undefined2 *)0x0;
}


undefined8 FUN_00407f30(uint *param_1,ulong *param_2)

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
          puVar4 = &DAT_0040b090;
        }
        *(undefined **)(puVar2 + 4) = puVar4;
      }
      uVar6 = uVar6 + 1;
      puVar2 = puVar2 + 8;
    } while (uVar6 <= *param_2 && *param_2 != uVar6);
  }
  return 0;
}


undefined8 FUN_00408150(byte *param_1,ulong *param_2,byte **param_3)

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
LAB_004081cb:
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
LAB_00408296:
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
        if (bVar17 != 0x49) goto LAB_004082f8;
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
  if (bVar4 != 0x24) goto LAB_00408296;
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
      if (9 < (byte)(bVar17 - 0x30)) goto switchD_004084d7_caseD_26;
    }
  } while ((byte)(bVar17 - 0x30) < 10);
  if (pbVar11 + -1 < (byte *)0xfffffffffffffffe) {
    param_1 = pbVar18 + 2;
    bVar17 = pbVar18[2];
    pbVar18 = pbVar11 + -1;
    goto LAB_00408296;
  }
  goto switchD_004084d7_caseD_26;
LAB_004082f8:
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
joined_r0x0040840a:
    uVar8 = local_70;
    local_68 = pbVar12;
    if (bVar17 != 0x2e) goto LAB_00408311;
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
      goto LAB_00408311;
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
      if (bVar17 != 0x24) goto LAB_0040844f;
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
          if (9 < bVar17) goto switchD_004084d7_caseD_26;
        }
      } while (bVar17 < 10);
      pbVar14 = (byte *)(uVar16 - 1);
      if ((byte *)0xfffffffffffffffd < pbVar14) goto switchD_004084d7_caseD_26;
      ppbVar3[8] = pbVar14;
      pbVar11 = pbVar12 + 2;
    }
    else {
LAB_0040844f:
      pbVar14 = ppbVar3[8];
      if (ppbVar3[8] == (byte *)0xffffffffffffffff) {
        local_68 = pbVar12 + 1;
        ppbVar3[8] = pbVar12;
        pbVar14 = pbVar12;
        if (pbVar12 == (byte *)0xffffffffffffffff) goto switchD_004084d7_caseD_26;
      }
    }
    __ptr = (byte **)param_3[1];
    if (pbVar14 < pbVar19) {
      pbVar12 = *param_3;
      __dest_00 = __ptr;
LAB_0040846e:
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
LAB_00408311:
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
               (bVar17 != 0x74)) goto code_r0x004084d4;
            uVar5 = uVar5 + 8;
          }
          bVar17 = *param_1;
        } while( true );
      }
      if (iVar6 == 5) {
        bVar17 = *pbVar11;
        goto LAB_00408311;
      }
      goto LAB_0040891c;
    }
    pbVar19 = (byte *)((long)pbVar19 * 2);
    if (pbVar19 <= pbVar14) {
      pbVar19 = pbVar14 + 1;
    }
    if (pbVar19 < (byte *)0x800000000000000) {
      if (ppbVar2 == __ptr) {
        __dest_00 = (byte **)malloc((long)pbVar19 << 5);
        if (__dest_00 == (byte **)0x0) goto LAB_00408b09;
        pbVar12 = *param_3;
        __ptr = ppbVar2;
LAB_00408dbb:
        memcpy(__dest_00,__ptr,(long)pbVar12 << 5);
        pbVar12 = *param_3;
      }
      else {
        __dest_00 = (byte **)realloc(__ptr,(long)pbVar19 << 5);
        __ptr = (byte **)param_3[1];
        if (__dest_00 == (byte **)0x0) goto LAB_00408af0;
        pbVar12 = *param_3;
        if (ppbVar2 == __ptr) goto LAB_00408dbb;
      }
      param_3[1] = (byte *)__dest_00;
      goto LAB_0040846e;
    }
    goto LAB_00408af0;
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
    if (bVar17 != 0x24) goto LAB_0040839d;
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
        if (9 < bVar17) goto switchD_004084d7_caseD_26;
      }
    } while (bVar17 < 10);
    pbVar14 = pbVar14 + -1;
    if ((byte *)0xfffffffffffffffd < pbVar14) goto switchD_004084d7_caseD_26;
    ppbVar3[5] = pbVar14;
    pbVar11 = pbVar10 + 2;
  }
  else {
LAB_0040839d:
    pbVar14 = ppbVar3[5];
    if (ppbVar3[5] == (byte *)0xffffffffffffffff) {
      ppbVar3[5] = local_68;
      bVar21 = local_68 == (byte *)0xffffffffffffffff;
      pbVar14 = local_68;
      local_68 = local_68 + 1;
      if (bVar21) goto switchD_004084d7_caseD_26;
    }
  }
  __ptr = (byte **)param_3[1];
  if (pbVar14 < pbVar19) {
    pbVar12 = *param_3;
    __dest_00 = __ptr;
LAB_004083bc:
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
      if (iVar6 != 5) goto LAB_0040891c;
      bVar17 = *pbVar11;
      pbVar11 = pbVar11 + 1;
    }
    goto joined_r0x0040840a;
  }
  pbVar19 = (byte *)((long)pbVar19 * 2);
  if (pbVar19 <= pbVar14) {
    pbVar19 = pbVar14 + 1;
  }
  if ((byte *)0x7ffffffffffffff < pbVar19) goto LAB_00408af0;
  if (ppbVar2 != __ptr) {
    __dest_00 = (byte **)realloc(__ptr,(long)pbVar19 << 5);
    __ptr = (byte **)param_3[1];
    if (__dest_00 != (byte **)0x0) {
      pbVar12 = *param_3;
      if (ppbVar2 == __ptr) goto LAB_00408c09;
      goto LAB_004086dd;
    }
    goto LAB_00408af0;
  }
  __dest_00 = (byte **)malloc((long)pbVar19 << 5);
  if (__dest_00 != (byte **)0x0) {
    pbVar12 = *param_3;
    __ptr = ppbVar2;
LAB_00408c09:
    memcpy(__dest_00,__ptr,(long)pbVar12 << 5);
    pbVar12 = *param_3;
LAB_004086dd:
    param_3[1] = (byte *)__dest_00;
    goto LAB_004083bc;
  }
  goto LAB_00408b09;
code_r0x004084d4:
  switch(bVar17) {
  case 0x25:
    goto switchD_004084d7_caseD_25;
  default:
    goto switchD_004084d7_caseD_26;
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
switchD_004084d7_caseD_26:
      __dest_00 = (byte **)param_3[1];
      goto LAB_0040891c;
    }
  }
  else {
    ppbVar3[10] = pbVar18;
  }
  __ptr = (byte **)param_3[1];
  __dest_00 = __ptr;
  if (pbVar18 < pbVar19) {
LAB_00408505:
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
LAB_0040891c:
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
switchD_004084d7_caseD_25:
    *(byte *)(ppbVar3 + 9) = bVar17;
    uVar8 = *param_2;
    ppbVar3[1] = param_1;
    uVar8 = uVar8 + 1;
    *param_2 = uVar8;
    if (uVar8 < uVar20) {
      __dest = (ulong *)param_2[1];
      goto LAB_004081cb;
    }
    if (((long)uVar20 < 0) || (0x2e8ba2e8ba2e8ba < uVar20 * 2)) {
LAB_00408e43:
      __ptr = (byte **)param_3[1];
      goto LAB_00408af0;
    }
    __ptr_00 = (ulong *)param_2[1];
    if (puVar1 != __ptr_00) {
      __dest = (ulong *)realloc(__ptr_00,uVar20 * 0xb0);
      if (__dest == (ulong *)0x0) goto LAB_00408e43;
      __ptr_00 = (ulong *)param_2[1];
      uVar8 = *param_2;
      if (puVar1 != __ptr_00) goto LAB_004085df;
LAB_00408704:
      __dest = (ulong *)memcpy(__dest,__ptr_00,uVar8 * 0x58);
      uVar8 = *param_2;
LAB_004085df:
      param_2[1] = (ulong)__dest;
      uVar20 = uVar20 * 2;
      goto LAB_004081cb;
    }
    __dest = (ulong *)malloc(uVar20 * 0xb0);
    if (__dest != (ulong *)0x0) goto LAB_00408704;
    __ptr = (byte **)param_3[1];
    if (ppbVar2 == __ptr) goto LAB_00408b19;
  }
  else {
    pbVar19 = (byte *)((long)pbVar19 * 2);
    if (pbVar19 <= pbVar18) {
      pbVar19 = pbVar18 + 1;
    }
    if (pbVar19 < (byte *)0x800000000000000) {
      if (ppbVar2 == __ptr) {
        __dest_00 = (byte **)malloc((long)pbVar19 << 5);
        if (__dest_00 == (byte **)0x0) goto LAB_00408b09;
LAB_00408aa6:
        memcpy(__dest_00,__ptr,(long)*param_3 << 5);
LAB_004089eb:
        param_3[1] = (byte *)__dest_00;
        goto LAB_00408505;
      }
      __dest_00 = (byte **)realloc(__ptr,(long)pbVar19 << 5);
      if (__dest_00 != (byte **)0x0) {
        __ptr = ppbVar2;
        if (ppbVar2 == (byte **)param_3[1]) goto LAB_00408aa6;
        goto LAB_004089eb;
      }
      goto LAB_00408e43;
    }
LAB_00408af0:
    if (ppbVar2 == __ptr) goto LAB_00408b09;
  }
  free(__ptr);
LAB_00408b09:
  if (puVar1 != (ulong *)param_2[1]) {
    free((ulong *)param_2[1]);
  }
LAB_00408b19:
  piVar9 = __errno_location();
  *piVar9 = 0xc;
  return 0xffffffff;
}


/* WARNING: Removing unreachable block (ram,0x00408e93) */
/* WARNING: Removing unreachable block (ram,0x00408e98) */

void FUN_00408e60(void)

{
  __DT_INIT();
  return;
}


void FUN_00408ec0(void)

{
  return;
}


void FUN_00408ed0(undefined8 param_1)

{
  __cxa_atexit(param_1,0,DAT_0060d1e8);
  return;
}


undefined8 FUN_00408ee8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  FUN_00402591();
  return;
}

