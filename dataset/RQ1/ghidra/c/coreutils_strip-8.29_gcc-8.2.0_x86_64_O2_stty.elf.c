
void switchD_0040275f::caseD_5(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void switchD_00404c40::caseD_b(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401a7a(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401a7f(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401a84(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401a89(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void switchD_0040671a::caseD_0(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void switchD_004099ec::caseD_5(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00401aa0(int param_1,undefined8 *param_2)

{
  char cVar1;
  char *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  uint *puVar12;
  char *pcVar13;
  int *piVar14;
  undefined8 uVar15;
  uint uVar16;
  long lVar17;
  undefined *puVar18;
  undefined **ppuVar19;
  int iVar20;
  long lVar21;
  byte *pbVar22;
  undefined4 *puVar23;
  byte *pbVar24;
  _IO_FILE *p_Var25;
  char *in_R9;
  uint uVar26;
  bool bVar27;
  bool bVar28;
  byte bVar29;
  long local_58;
  char local_3a;
  char local_39 [9];
  
  bVar29 = 0;
  iVar9 = 0;
  uVar26 = 0;
  lVar21 = 0;
  FUN_00404a50(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils",
                 "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale"
                );
  textdomain("coreutils");
  FUN_0040bd50(FUN_00404940);
  bVar4 = true;
  DAT_006132b8 = 0;
  local_58 = 0;
  bVar3 = false;
  bVar5 = false;
  uVar8 = 1;
LAB_00401b27:
  uVar10 = FUN_004089e0(param_1 - uVar26,param_2 + lVar21,"-agF:",&PTR_DAT_0040c720,0);
  uVar6 = DAT_006132bc;
  iVar7 = (int)uVar10;
  if (iVar7 != -1) {
    if (iVar7 == 0x46) {
      if (local_58 != 0) goto LAB_00402407;
      local_58 = DAT_00613580;
    }
    else {
      if (iVar7 < 0x47) {
        if (iVar7 == -0x83) {
          FUN_00406af0(stdout,&DAT_0040bdfd,"GNU coreutils",PTR_DAT_00613238,"David MacKenzie",0);
                    /* WARNING: Subroutine does not return */
          exit(0);
        }
        if (iVar7 == -0x82) {
          p_Var25 = (_IO_FILE *)0x0;
          FUN_00402d90();
          goto LAB_004023ce;
        }
LAB_00401c0b:
        bVar27 = CARRY4(uVar26,uVar8);
        uVar26 = uVar26 + uVar8;
        bVar28 = uVar26 == 0;
        lVar17 = 7;
        lVar21 = (long)(int)uVar26;
        pbVar22 = (byte *)param_2[lVar21];
        pbVar24 = (byte *)"-drain";
        do {
          if (lVar17 == 0) break;
          lVar17 = lVar17 + -1;
          bVar27 = *pbVar22 < *pbVar24;
          bVar28 = *pbVar22 == *pbVar24;
          pbVar22 = pbVar22 + (ulong)bVar29 * -2 + 1;
          pbVar24 = pbVar24 + (ulong)bVar29 * -2 + 1;
        } while (bVar28);
        if (((!bVar27 && !bVar28) != bVar27) &&
           (iVar7 = strcmp((char *)(byte *)param_2[lVar21],"drain"), iVar7 != 0)) {
          bVar4 = false;
        }
        DAT_006132bc = 0;
        uVar8 = 1;
        goto LAB_00401b27;
      }
      if (iVar7 == 0x61) {
        bVar5 = true;
        iVar9 = 1;
      }
      else {
        if (iVar7 != 0x67) goto LAB_00401c0b;
        bVar3 = true;
        iVar9 = 2;
      }
    }
    if ((int)uVar8 < (int)DAT_006132bc) {
      lVar17 = (long)(int)uVar8;
      uVar16 = (DAT_006132bc - 1) - uVar8;
      puVar11 = param_2 + lVar17 + lVar21;
      do {
        *puVar11 = 0;
        puVar11 = puVar11 + 1;
        uVar8 = uVar6;
      } while (puVar11 != param_2 + (ulong)uVar16 + lVar17 + lVar21 + 1);
    }
    goto LAB_00401b27;
  }
  if ((bool)(bVar5 & bVar3)) {
    uVar10 = dcgettext(0,
                       "the options for verbose and stty-readable output styles are\nmutually exclusive"
                       ,5);
    error(1,0,uVar10);
LAB_00402407:
    uVar10 = dcgettext(0,"only one device may be specified",5);
    error(1,0,uVar10);
LAB_00402429:
    uVar10 = FUN_004064f0(0,3,local_58);
    piVar14 = __errno_location();
    error(1,*piVar14,"%s",uVar10);
LAB_00402458:
    uVar10 = dcgettext(0,"when specifying an output style, modes may not be set",5);
    error(1,0,uVar10);
LAB_0040247a:
    uVar10 = FUN_004064f0(0,3,local_58);
    uVar15 = dcgettext(0,"%s: couldn\'t reset non-blocking mode",5);
    piVar14 = __errno_location();
    error(1,*piVar14,uVar15,uVar10);
LAB_004024bb:
    uVar10 = FUN_004064f0(0,3,local_58);
    piVar14 = __errno_location();
    p_Var25 = (_IO_FILE *)0x1;
    error(1,*piVar14,"%s",uVar10);
LAB_004024ea:
    __overflow(p_Var25,10);
  }
  else {
    if (!bVar4) {
      if ((!bVar5) && (!bVar3)) {
        if (local_58 == 0) goto LAB_00401f9e;
        FUN_00403bd0(1,local_58,param_2,param_1,&DAT_006133a0,local_39,&local_3a,uVar10);
        goto LAB_00401d02;
      }
      goto LAB_00402458;
    }
    if (local_58 != 0) {
LAB_00401d02:
      iVar7 = FUN_004049e0(0,local_58,0x800,0);
      if (-1 < iVar7) {
        uVar8 = FUN_00407b50(0,3);
        if ((uVar8 != 0xffffffff) && (iVar7 = FUN_00407b50(0,4,uVar8 & 0xfffff7ff), -1 < iVar7)) {
          puVar23 = &DAT_00613360;
          iVar7 = tcgetattr(0,(termios *)&DAT_00613360);
          if (iVar7 == 0) {
            if (((bool)(bVar3 | bVar4)) || (bVar5)) goto LAB_00401e03;
            do {
              in_R9 = local_39;
              local_39[0] = '\0';
              local_3a = '\0';
              FUN_00403bd0(0,local_58,param_2,param_1,&DAT_00613360,in_R9,&local_3a,puVar23);
              if (local_3a == '\0') {
                return 0;
              }
              iVar9 = tcsetattr(0,DAT_00613230,(termios *)&DAT_00613360);
              if (iVar9 != 0) {
                uVar10 = FUN_004064f0(0,3,local_58);
                piVar14 = __errno_location();
                p_Var25 = (_IO_FILE *)0x1;
                error(1,*piVar14,"%s",uVar10);
                goto LAB_00402587;
              }
              iVar9 = tcgetattr(0,(termios *)&DAT_00613320);
              if (iVar9 != 0) goto LAB_00402429;
              iVar9 = memcmp(&DAT_00613360,&DAT_00613320,0x3c);
              if (iVar9 == 0) {
                return 0;
              }
              _DAT_00613328 = _DAT_00613328 & 0xeff0ffff;
              if ((local_39[0] == '\0') &&
                 (iVar9 = memcmp(&DAT_00613360,&DAT_00613320,0x3c), iVar9 == 0)) {
                return 0;
              }
              param_2 = (undefined8 *)FUN_004064f0(0,3,local_58);
              uVar10 = dcgettext(0,"%s: unable to perform all requested operations",5);
              error(1,0,uVar10,param_2);
LAB_00401f9e:
              local_58 = dcgettext(0,"standard input",5);
              FUN_00403bd0(1,local_58,param_2,param_1,&DAT_006133a0,local_39,&local_3a,in_R9);
              puVar23 = &DAT_00613360;
              iVar9 = tcgetattr(0,(termios *)&DAT_00613360);
            } while (iVar9 == 0);
          }
          goto LAB_00401ff5;
        }
        goto LAB_0040247a;
      }
      goto LAB_004024bb;
    }
    local_58 = dcgettext(0,"standard input",5);
    iVar7 = tcgetattr(0,(termios *)&DAT_00613360);
    if (iVar7 != 0) {
LAB_00401ff5:
      uVar10 = FUN_004064f0(0,3,local_58);
      piVar14 = __errno_location();
      error(1,*piVar14,"%s",uVar10);
LAB_00402024:
      __printf_chk(1,"%lx:%lx:%lx:%lx",DAT_00613360,DAT_00613364,DAT_00613368,DAT_0061336c);
      lVar21 = 0;
      do {
        lVar17 = lVar21 + 1;
        __printf_chk(1,":%lx",(&DAT_00613371)[lVar21]);
        lVar21 = lVar17;
      } while (lVar17 != 0x20);
      pcVar2 = stdout->_IO_write_ptr;
      if (stdout->_IO_write_end <= pcVar2) {
        __overflow(stdout,10);
        return 0;
      }
      stdout->_IO_write_ptr = pcVar2 + 1;
      *pcVar2 = '\n';
      return 0;
    }
LAB_00401e03:
    DAT_006133e0 = FUN_004026e0();
    DAT_006133dc = 0;
    if (iVar9 != 1) {
      if (iVar9 == 2) goto LAB_00402024;
      FUN_00402930(&DAT_00613360,1);
      FUN_004027c0("line = %d;",DAT_00613370);
      pcVar2 = stdout->_IO_write_ptr;
      p_Var25 = stdout;
      if (pcVar2 < stdout->_IO_write_end) {
        stdout->_IO_write_ptr = pcVar2 + 1;
        *pcVar2 = '\n';
      }
      else {
LAB_00402587:
        __overflow(p_Var25,10);
      }
      DAT_006133dc = 0;
      ppuVar19 = &PTR_DAT_0040c7e0;
      bVar3 = true;
      while( true ) {
        pcVar2 = *ppuVar19;
        iVar9 = strcmp(pcVar2,"min");
        if (iVar9 == 0) break;
        cVar1 = ppuVar19[2][0x613371];
        if ((cVar1 != *(char *)(ppuVar19 + 1)) && (iVar9 = strcmp(pcVar2,"flush"), iVar9 != 0)) {
          if (cVar1 == '\0') {
            pcVar13 = "<undef>";
          }
          else {
            pcVar13 = (char *)FUN_00402b00(cVar1);
          }
          FUN_004027c0("%s = %s;",pcVar2,pcVar13);
          bVar3 = false;
        }
        ppuVar19 = ppuVar19 + 3;
      }
      if ((DAT_0061336c & 2) == 0) {
        FUN_004027c0("min = %lu; time = %lu;\n",DAT_00613377,DAT_00613376);
      }
      else if (!bVar3) {
        pcVar2 = stdout->_IO_write_ptr;
        p_Var25 = stdout;
        if (pcVar2 < stdout->_IO_write_end) {
          stdout->_IO_write_ptr = pcVar2 + 1;
          *pcVar2 = '\n';
        }
        else {
LAB_004023ce:
          __overflow(p_Var25,10);
        }
      }
      iVar9 = 0;
      bVar3 = true;
      DAT_006133dc = 0;
      for (ppuVar19 = &PTR_s_parenb_0040c9c0; *ppuVar19 != (undefined *)0x0; ppuVar19 = ppuVar19 + 4
          ) {
        if ((*(byte *)((long)ppuVar19 + 0xc) & 8) == 0) {
          if (*(int *)(ppuVar19 + 1) != iVar9) {
            if (!bVar3) {
              pcVar2 = stdout->_IO_write_ptr;
              if (pcVar2 < stdout->_IO_write_end) {
                stdout->_IO_write_ptr = pcVar2 + 1;
                *pcVar2 = '\n';
              }
              else {
                __overflow(stdout,10);
              }
              DAT_006133dc = 0;
            }
            iVar9 = *(int *)(ppuVar19 + 1);
            bVar3 = true;
          }
          puVar12 = (uint *)FUN_00402750(iVar9,&DAT_00613360);
          puVar18 = ppuVar19[3];
          if (puVar18 == (undefined *)0x0) {
            puVar18 = ppuVar19[2];
          }
          if (puVar12 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
            __assert_fail("bitsp","src/stty.c",0x7a2,"display_changed");
          }
          if ((undefined *)(ulong)((uint)puVar18 & *puVar12) == ppuVar19[2]) {
            if ((*(byte *)((long)ppuVar19 + 0xc) & 2) != 0) {
              bVar3 = false;
              FUN_004027c0("%s",*ppuVar19);
            }
          }
          else if ((*(byte *)((long)ppuVar19 + 0xc) & 5) == 5) {
            bVar3 = false;
            FUN_004027c0(&DAT_0040c0a1,*ppuVar19);
          }
        }
      }
      if (bVar3) {
        DAT_006133dc = 0;
        return 0;
      }
      goto LAB_004021b0;
    }
    FUN_00402930(&DAT_00613360,1);
    FUN_00402ca0(1,local_58);
    FUN_004027c0("line = %d;",DAT_00613370);
    pcVar2 = stdout->_IO_write_ptr;
    p_Var25 = stdout;
    if (stdout->_IO_write_end <= pcVar2) goto LAB_004024ea;
    stdout->_IO_write_ptr = pcVar2 + 1;
    *pcVar2 = '\n';
  }
  DAT_006133dc = 0;
  ppuVar19 = &PTR_DAT_0040c7e0;
  while( true ) {
    pcVar2 = *ppuVar19;
    iVar9 = strcmp(pcVar2,"min");
    if (iVar9 == 0) break;
    iVar9 = strcmp(pcVar2,"flush");
    if (iVar9 != 0) {
      if (ppuVar19[2][0x613371] == '\0') {
        pcVar13 = "<undef>";
      }
      else {
        pcVar13 = (char *)FUN_00402b00(ppuVar19[2][0x613371]);
      }
      FUN_004027c0("%s = %s;",pcVar2,pcVar13);
    }
    ppuVar19 = ppuVar19 + 3;
  }
  FUN_004027c0("min = %lu; time = %lu;",DAT_00613377,DAT_00613376);
  if (DAT_006133dc != 0) {
    pcVar2 = stdout->_IO_write_ptr;
    if (pcVar2 < stdout->_IO_write_end) {
      stdout->_IO_write_ptr = pcVar2 + 1;
      *pcVar2 = '\n';
    }
    else {
      __overflow(stdout,10);
    }
  }
  DAT_006133dc = 0;
  iVar9 = 0;
  for (ppuVar19 = &PTR_s_parenb_0040c9c0; *ppuVar19 != (undefined *)0x0; ppuVar19 = ppuVar19 + 4) {
    if ((*(byte *)((long)ppuVar19 + 0xc) & 8) == 0) {
      iVar7 = *(int *)(ppuVar19 + 1);
      iVar20 = iVar7;
      if (iVar7 != iVar9) {
        pcVar2 = stdout->_IO_write_ptr;
        if (pcVar2 < stdout->_IO_write_end) {
          stdout->_IO_write_ptr = pcVar2 + 1;
          *pcVar2 = '\n';
        }
        else {
          __overflow(stdout,10);
        }
        DAT_006133dc = 0;
        iVar20 = *(int *)(ppuVar19 + 1);
        iVar9 = iVar7;
      }
      puVar12 = (uint *)FUN_00402750(iVar20,&DAT_00613360);
      puVar18 = ppuVar19[3];
      if (puVar18 == (undefined *)0x0) {
        puVar18 = ppuVar19[2];
      }
      if (puVar12 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("bitsp","src/stty.c",0x7f6,"display_all");
      }
      if ((undefined *)(ulong)((uint)puVar18 & *puVar12) == ppuVar19[2]) {
        FUN_004027c0("%s",*ppuVar19);
      }
      else if ((*(byte *)((long)ppuVar19 + 0xc) & 4) != 0) {
        FUN_004027c0(&DAT_0040c0a1,*ppuVar19);
      }
    }
  }
LAB_004021b0:
  pcVar2 = stdout->_IO_write_ptr;
  if (pcVar2 < stdout->_IO_write_end) {
    stdout->_IO_write_ptr = pcVar2 + 1;
    *pcVar2 = '\n';
  }
  else {
    __overflow(stdout,10);
  }
  DAT_006133dc = 0;
  return 0;
}


void FUN_004025a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_retaddr;
  undefined auStack_8 [8];
  
  (*(code *)PTR___libc_start_main_00612ff0)
            (FUN_00401aa0,unaff_retaddr,&stack0x00000008,FUN_0040bce0,FUN_0040bd40,param_3,auStack_8
            );
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* WARNING: Removing unreachable block (ram,0x004025d8) */
/* WARNING: Removing unreachable block (ram,0x004025e2) */

void FUN_004025cb(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00402619) */

void FUN_004025ea(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00402656) */

void FUN_00402621(void)

{
  if (DAT_006132e8 != '\0') {
    return;
  }
  FUN_004025cb();
  DAT_006132e8 = 1;
  return;
}


/* WARNING: Removing unreachable block (ram,0x00402619) */

void thunk_FUN_004025ea(void)

{
  return;
}


undefined4 FUN_00402680(char *param_1)

{
  int iVar1;
  char **ppcVar2;
  int iVar3;
  char *__s2;
  
  __s2 = "0";
  iVar3 = 0;
  ppcVar2 = &PTR_DAT_0040c3d8;
  do {
    iVar1 = strcmp(param_1,__s2);
    if (iVar1 == 0) {
      return (&DAT_0040c3c8)[(long)iVar3 * 6];
    }
    __s2 = *ppcVar2;
    iVar3 = iVar3 + 1;
    ppcVar2 = ppcVar2 + 3;
  } while (__s2 != (char *)0x0);
  return 0xffffffff;
}


ulong FUN_004026e0(void)

{
  int iVar1;
  char *pcVar2;
  ulong uVar3;
  ulong local_18;
  undefined local_10 [2];
  ushort local_e;
  
  iVar1 = ioctl(1,0x5413,local_10);
  if ((iVar1 != 0) || (uVar3 = (ulong)local_e, local_e == 0)) {
    pcVar2 = getenv("COLUMNS");
    if ((pcVar2 != (char *)0x0) &&
       ((iVar1 = FUN_00406fc0(pcVar2,0,0,&local_18,""), iVar1 == 0 && (local_18 - 1 < 0x7fffffff))))
    {
      return local_18;
    }
    uVar3 = 0x50;
  }
  return uVar3;
}


long FUN_00402750(undefined4 param_1,long param_2)

{
  switch(param_1) {
  case 0:
    return param_2 + 8;
  case 1:
    return param_2;
  case 2:
    return param_2 + 4;
  case 3:
    return param_2 + 0xc;
  case 4:
    return 0;
  default:
                    /* WARNING: Subroutine does not return */
    abort();
  }
}


void FUN_004027c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 undefined8 param_13,undefined8 param_14)

{
  char *pcVar1;
  char in_AL;
  int iVar2;
  char *local_d8;
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
  iVar2 = FUN_00408ae0(&local_d8,param_9,&local_d0);
  if (-1 < iVar2) {
    if (0 < DAT_006133dc) {
      pcVar1 = stdout->_IO_write_ptr;
      if (DAT_006133e0 - DAT_006133dc < iVar2) {
        if (pcVar1 < stdout->_IO_write_end) {
          stdout->_IO_write_ptr = pcVar1 + 1;
          *pcVar1 = '\n';
        }
        else {
          __overflow(stdout,10);
        }
        DAT_006133dc = 0;
      }
      else {
        if (pcVar1 < stdout->_IO_write_end) {
          stdout->_IO_write_ptr = pcVar1 + 1;
          *pcVar1 = ' ';
        }
        else {
          __overflow(stdout,0x20);
        }
        DAT_006133dc = DAT_006133dc + 1;
      }
    }
    fputs_unlocked(local_d8,stdout);
    free(local_d8);
    DAT_006133dc = DAT_006133dc + iVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00406e80();
}


void FUN_00402930(termios *param_1,char param_2)

{
  speed_t sVar1;
  speed_t sVar2;
  int iVar3;
  speed_t *psVar4;
  undefined *puVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined8 uVar8;
  
  sVar1 = cfgetispeed(param_1);
  if (sVar1 != 0) {
    sVar1 = cfgetispeed(param_1);
    sVar2 = cfgetospeed(param_1);
    if (sVar1 != sVar2) {
      sVar1 = cfgetospeed(param_1);
      if (sVar1 != 0) {
        iVar3 = 0;
        puVar5 = &DAT_0040c0de;
        psVar4 = &DAT_0040c3e0;
        while (iVar3 = iVar3 + 1, puVar5 != (undefined *)0x0) {
          if (sVar1 == *psVar4) {
            uVar8 = *(undefined8 *)(&UNK_0040c3d0 + (long)iVar3 * 0x18);
            goto LAB_00402a04;
          }
          puVar5 = *(undefined **)(psVar4 + 4);
          psVar4 = psVar4 + 6;
        }
      }
      uVar8 = 0;
LAB_00402a04:
      sVar1 = cfgetispeed(param_1);
      if (sVar1 != 0) {
        iVar3 = 0;
        puVar5 = &DAT_0040c0de;
        psVar4 = &DAT_0040c3e0;
        while (iVar3 = iVar3 + 1, puVar5 != (undefined *)0x0) {
          if (sVar1 == *psVar4) {
            uVar6 = *(undefined8 *)(&UNK_0040c3d0 + (long)iVar3 * 0x18);
            goto LAB_00402a37;
          }
          puVar5 = *(undefined **)(psVar4 + 4);
          psVar4 = psVar4 + 6;
        }
      }
      uVar6 = 0;
LAB_00402a37:
      pcVar7 = "ispeed %lu baud; ospeed %lu baud;";
      if (param_2 == '\0') {
        pcVar7 = "%lu %lu\n";
      }
      FUN_004027c0(pcVar7,uVar6,uVar8);
      goto LAB_004029b0;
    }
  }
  sVar1 = cfgetospeed(param_1);
  if (sVar1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    iVar3 = 0;
    puVar5 = &DAT_0040c0de;
    psVar4 = &DAT_0040c3e0;
    while (iVar3 = iVar3 + 1, puVar5 != (undefined *)0x0) {
      if (sVar1 == *psVar4) {
        puVar5 = *(undefined **)(&UNK_0040c3d0 + (long)iVar3 * 0x18);
        break;
      }
      puVar5 = *(undefined **)(psVar4 + 4);
      psVar4 = psVar4 + 6;
    }
  }
  pcVar7 = "speed %lu baud;";
  if (param_2 == '\0') {
    pcVar7 = "%lu\n";
  }
  FUN_004027c0(pcVar7,puVar5);
LAB_004029b0:
  if (param_2 == '\0') {
    DAT_006133dc = 0;
  }
  return;
}


void FUN_00402ab0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = dcgettext(0,"invalid integer argument",5);
  FUN_00406ec0(param_1,0,0,param_2,&DAT_0040bdde,uVar1,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00402b00(byte param_1)

{
  undefined *puVar1;
  
  if (0x1f < param_1) {
    if (param_1 < 0x7f) {
      _DAT_00613300 = _DAT_00613300 & 0xff00 | (ushort)param_1;
      puVar1 = &DAT_00613301;
    }
    else if (param_1 == 0x7f) {
      puVar1 = &DAT_00613302;
      _DAT_00613300 = 0x3f5e;
    }
    else {
      _DAT_00613300 = 0x2d4d;
      if (param_1 < 0xa0) {
        puVar1 = &DAT_00613304;
        _DAT_00613302 = CONCAT11(param_1 - 0x40,0x5e);
      }
      else if (param_1 == 0xff) {
        _DAT_00613302 = 0x3f5e;
        puVar1 = &DAT_00613304;
      }
      else {
        puVar1 = &DAT_00613303;
        _DAT_00613302 = _DAT_00613302 & 0xff00 | (ushort)(byte)(param_1 + 0x80);
      }
    }
    *puVar1 = 0;
    return &DAT_00613300;
  }
  _DAT_00613300 = CONCAT11(param_1 + 0x40,0x5e);
  _DAT_00613302 = _DAT_00613302 & 0xff00;
  return &DAT_00613300;
}


/* WARNING: Could not reconcile some variable overlaps */

void FUN_00402bd0(ulong param_1,int param_2,undefined8 param_3)

{
  FILE *pFVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char *pcVar8;
  byte **ppbVar9;
  long lVar11;
  byte *pbVar12;
  byte *pbVar13;
  char cVar14;
  bool bVar15;
  bool bVar16;
  byte bVar17;
  byte *pbStack_e8;
  char *pcStack_e0;
  byte *apbStack_d8 [5];
  char *pcStack_b0;
  char *pcStack_a8;
  char *pcStack_a0;
  char *pcStack_98;
  char *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  int *piStack_68;
  undefined2 uStack_58;
  undefined2 uStack_56;
  undefined8 uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  ulong local_30 [2];
  byte **ppbVar10;
  
  bVar17 = 0;
  uStack_48 = param_1 & 0xffffffff;
  uStack_40 = 0x402bf4;
  iVar2 = ioctl(0,0x5413,local_30);
  if (iVar2 == 0) {
LAB_00402c0e:
    if (-1 < (int)uStack_48) {
      local_30[0] = local_30[0] & 0xffffffffffff0000 | param_1 & 0xffff;
    }
    if (-1 < param_2) {
      local_30[0]._0_4_ = CONCAT22((short)param_2,(undefined2)local_30[0]);
      local_30[0] = local_30[0] & 0xffffffff00000000 | (ulong)(uint)local_30[0];
    }
    uStack_40 = 0x402c33;
    iVar2 = ioctl(0,0x5414,local_30);
    if (iVar2 == 0) {
      return;
    }
  }
  else {
    uStack_40 = 0x402bfd;
    piVar4 = __errno_location();
    if (*piVar4 == 0x16) {
      local_30[0] = 0;
      goto LAB_00402c0e;
    }
    uStack_40 = 0x402c51;
    uVar6 = FUN_004064f0(0,3,param_3);
    uStack_40 = 0x402c69;
    error(1,*piVar4,"%s",uVar6);
  }
  uStack_40 = 0x402c78;
  uStack_50 = FUN_004064f0(0,3,param_3);
  uStack_40 = 0x402c80;
  puVar5 = (uint *)__errno_location();
  cVar14 = '\x01';
  uStack_70 = (ulong)*puVar5;
  uStack_40 = 0x402c96;
  error(1,uStack_70,"%s",uStack_50);
  piStack_68 = (int *)0x402cc0;
  uStack_40 = param_3;
  iVar2 = ioctl(0,0x5413,&uStack_58);
  if (iVar2 == 0) {
    if (cVar14 == '\0') {
      piStack_68 = (int *)0x402cfa;
      FUN_004027c0("%d %d\n",uStack_58,uStack_56);
      DAT_006133dc = 0;
      return;
    }
    piStack_68 = (int *)0x402d1c;
    FUN_004027c0("rows %d; columns %d;",uStack_58,uStack_56);
    return;
  }
  piStack_68 = (int *)0x402cc9;
  piVar4 = __errno_location();
  if (*piVar4 == 0x16) {
    if (cVar14 != '\0') {
      return;
    }
  }
  else {
    piStack_68 = (int *)0x402d34;
    uVar6 = FUN_004064f0(0,3,uStack_70);
    piStack_68 = (int *)0x402d4c;
    error(1,*piVar4,"%s",uVar6);
  }
  piStack_68 = (int *)0x402d5b;
  uStack_78 = FUN_004064f0(0,3,uStack_70);
  piStack_68 = (int *)0x402d6f;
  uVar6 = dcgettext(0,"%s: no size information for this device",5);
  iVar2 = 1;
  piStack_68 = (int *)0x402d83;
  error(1,0,uVar6,uStack_78);
  uVar6 = DAT_006133f8;
  piStack_68 = piVar4;
  if (iVar2 != 0) {
    uVar7 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(stderr,1,uVar7,uVar6);
    goto LAB_00402dcf;
  }
  uVar7 = dcgettext(0,
                    "Usage: %s [-F DEVICE | --file=DEVICE] [SETTING]...\n  or:  %s [-F DEVICE | --file=DEVICE] [-a|--all]\n  or:  %s [-F DEVICE | --file=DEVICE] [-g|--save]\n"
                    ,5);
  __printf_chk(1,uVar7,uVar6,uVar6,uVar6);
  pFVar1 = stdout;
  pcVar8 = (char *)dcgettext(0,"Print or change terminal characteristics.\n",5);
  fputs_unlocked(pcVar8,pFVar1);
  pFVar1 = stdout;
  pcVar8 = (char *)dcgettext(0,
                             "\nMandatory arguments to long options are mandatory for short options too.\n"
                             ,5);
  fputs_unlocked(pcVar8,pFVar1);
  pFVar1 = stdout;
  pcVar8 = (char *)dcgettext(0,
                             "  -a, --all          print all current settings in human-readable form\n  -g, --save         print all current settings in a stty-readable form\n  -F, --file=DEVICE  open and use the specified DEVICE instead of stdin\n"
                             ,5);
  fputs_unlocked(pcVar8,pFVar1);
  pFVar1 = stdout;
  pcVar8 = (char *)dcgettext(0,"      --help     display this help and exit\n",5);
  fputs_unlocked(pcVar8,pFVar1);
  pFVar1 = stdout;
  pcVar8 = (char *)dcgettext(0,"      --version  output version information and exit\n",5);
  fputs_unlocked(pcVar8,pFVar1);
  pFVar1 = stdout;
  pcVar8 = (char *)dcgettext(0,
                             "\nOptional - before SETTING indicates negation.  An * marks non-POSIX\nsettings.  The underlying system defines which settings are available.\n"
                             ,5);
  fputs_unlocked(pcVar8,pFVar1);
  pFVar1 = stdout;
  pcVar8 = (char *)dcgettext(0,"\nSpecial characters:\n",5);
  fputs_unlocked(pcVar8,pFVar1);
  pFVar1 = stdout;
  pcVar8 = (char *)dcgettext(0," * discard CHAR  CHAR will toggle discarding of output\n",5);
  fputs_unlocked(pcVar8,pFVar1);
  pFVar1 = stdout;
  pcVar8 = (char *)dcgettext(0,
                             "   eof CHAR      CHAR will send an end of file (terminate the input)\n   eol CHAR      CHAR will end the line\n"
                             ,5);
  fputs_unlocked(pcVar8,pFVar1);
  pFVar1 = stdout;
  pcVar8 = (char *)dcgettext(0," * eol2 CHAR     alternate CHAR for ending the line\n",5);
  fputs_unlocked(pcVar8,pFVar1);
  pFVar1 = stdout;
  pcVar8 = (char *)dcgettext(0,
                             "   erase CHAR    CHAR will erase the last character typed\n   intr CHAR     CHAR will send an interrupt signal\n   kill CHAR     CHAR will erase the current line\n"
                             ,5);
  fputs_unlocked(pcVar8,pFVar1);
  pFVar1 = stdout;
  pcVar8 = (char *)dcgettext(0," * lnext CHAR    CHAR will enter the next character quoted\n",5);
  fputs_unlocked(pcVar8,pFVar1);
  pFVar1 = stdout;
  pcVar8 = (char *)dcgettext(0,"   quit CHAR     CHAR will send a quit signal\n",5);
  fputs_unlocked(pcVar8,pFVar1);
  pFVar1 = stdout;
  pcVar8 = (char *)dcgettext(0," * rprnt CHAR    CHAR will redraw the current line\n",5);
  fputs_unlocked(pcVar8,pFVar1);
  pFVar1 = stdout;
  pcVar8 = (char *)dcgettext(0,
                             "   start CHAR    CHAR will restart the output after stopping it\n   stop CHAR     CHAR will stop the output\n   susp CHAR     CHAR will send a terminal stop signal\n"
                             ,5);
  fputs_unlocked(pcVar8,pFVar1);
  pFVar1 = stdout;
  pcVar8 = (char *)dcgettext(0," * swtch CHAR    CHAR will switch to a different shell layer\n",5);
  fputs_unlocked(pcVar8,pFVar1);
  pFVar1 = stdout;
  pcVar8 = (char *)dcgettext(0," * werase CHAR   CHAR will erase the last word typed\n",5);
  fputs_unlocked(pcVar8,pFVar1);
  pFVar1 = stdout;
  pcVar8 = (char *)dcgettext(0,
                             "\nSpecial settings:\n   N             set the input and output speeds to N bauds\n"
                             ,5);
  fputs_unlocked(pcVar8,pFVar1);
  pFVar1 = stdout;
  pcVar8 = (char *)dcgettext(0,
                             " * cols N        tell the kernel that the terminal has N columns\n * columns N     same as cols N\n"
                             ,5);
  fputs_unlocked(pcVar8,pFVar1);
  if (DAT_00613230 == 1) {
    uVar6 = dcgettext(0,"on",5);
  }
  else {
    uVar6 = dcgettext(0,&DAT_0040c256,5);
  }
  uVar7 = dcgettext(0,
                    " * [-]drain      wait for transmission before applying settings (%s by default)\n"
                    ,5);
  __printf_chk(1,uVar7,uVar6);
  pFVar1 = stdout;
  pcVar8 = (char *)dcgettext(0,"   ispeed N      set the input speed to N\n",5);
  fputs_unlocked(pcVar8,pFVar1);
  pFVar1 = stdout;
  pcVar8 = (char *)dcgettext(0," * line N        use line discipline N\n",5);
  fputs_unlocked(pcVar8,pFVar1);
  pFVar1 = stdout;
  pcVar8 = (char *)dcgettext(0,
                             "   min N         with -icanon, set N characters minimum for a completed read\n   ospeed N      set the output speed to N\n"
                             ,5);
  fputs_unlocked(pcVar8,pFVar1);
  pFVar1 = stdout;
  pcVar8 = (char *)dcgettext(0,
                             " * rows N        tell the kernel that the terminal has N rows\n * size          print the number of rows and columns according to the kernel\n"
                             ,5);
  fputs_unlocked(pcVar8,pFVar1);
  pFVar1 = stdout;
  pcVar8 = (char *)dcgettext(0,
                             "   speed         print the terminal speed\n   time N        with -icanon, set read timeout of N tenths of a second\n"
                             ,5);
  fputs_unlocked(pcVar8,pFVar1);
  pFVar1 = stdout;
  pcVar8 = (char *)dcgettext(0,
                             "\nControl settings:\n   [-]clocal     disable modem control signals\n   [-]cread      allow input to be received\n"
                             ,5);
  fputs_unlocked(pcVar8,pFVar1);
  pFVar1 = stdout;
  pcVar8 = (char *)dcgettext(0," * [-]crtscts    enable RTS/CTS handshaking\n",5);
  fputs_unlocked(pcVar8,pFVar1);
  pFVar1 = stdout;
  pcVar8 = (char *)dcgettext(0,"   csN           set character size to N bits, N in [5..8]\n",5);
  fputs_unlocked(pcVar8,pFVar1);
  pFVar1 = stdout;
  pcVar8 = (char *)dcgettext(0,
                             "   [-]cstopb     use two stop bits per character (one with \'-\')\n   [-]hup        send a hangup signal when the last process closes the tty\n   [-]hupcl      same as [-]hup\n   [-]parenb     generate parity bit in output and expect parity bit in input\n   [-]parodd     set odd parity (or even parity with \'-\')\n"
                             ,5);
  fputs_unlocked(pcVar8,pFVar1);
  pFVar1 = stdout;
  pcVar8 = (char *)dcgettext(0," * [-]cmspar     use \"stick\" (mark/space) parity\n",5);
  fputs_unlocked(pcVar8,pFVar1);
  pFVar1 = stdout;
  pcVar8 = (char *)dcgettext(0,
                             "\nInput settings:\n   [-]brkint     breaks cause an interrupt signal\n   [-]icrnl      translate carriage return to newline\n   [-]ignbrk     ignore break characters\n   [-]igncr      ignore carriage return\n   [-]ignpar     ignore characters with parity errors\n"
                             ,5);
  fputs_unlocked(pcVar8,pFVar1);
  pFVar1 = stdout;
  pcVar8 = (char *)dcgettext(0,
                             " * [-]imaxbel    beep and do not flush a full input buffer on a character\n"
                             ,5);
  fputs_unlocked(pcVar8,pFVar1);
  pFVar1 = stdout;
  pcVar8 = (char *)dcgettext(0,
                             "   [-]inlcr      translate newline to carriage return\n   [-]inpck      enable input parity checking\n   [-]istrip     clear high (8th) bit of input characters\n"
                             ,5);
  fputs_unlocked(pcVar8,pFVar1);
  pFVar1 = stdout;
  pcVar8 = (char *)dcgettext(0," * [-]iutf8      assume input characters are UTF-8 encoded\n",5);
  fputs_unlocked(pcVar8,pFVar1);
  pFVar1 = stdout;
  pcVar8 = (char *)dcgettext(0," * [-]iuclc      translate uppercase characters to lowercase\n",5);
  fputs_unlocked(pcVar8,pFVar1);
  pFVar1 = stdout;
  pcVar8 = (char *)dcgettext(0,
                             " * [-]ixany      let any character restart output, not only start character\n"
                             ,5);
  fputs_unlocked(pcVar8,pFVar1);
  pFVar1 = stdout;
  pcVar8 = (char *)dcgettext(0,
                             "   [-]ixoff      enable sending of start/stop characters\n   [-]ixon       enable XON/XOFF flow control\n   [-]parmrk     mark parity errors (with a 255-0-character sequence)\n   [-]tandem     same as [-]ixoff\n"
                             ,5);
  fputs_unlocked(pcVar8,pFVar1);
  pFVar1 = stdout;
  pcVar8 = (char *)dcgettext(0,"\nOutput settings:\n",5);
  fputs_unlocked(pcVar8,pFVar1);
  pFVar1 = stdout;
  pcVar8 = (char *)dcgettext(0," * bsN           backspace delay style, N in [0..1]\n",5);
  fputs_unlocked(pcVar8,pFVar1);
  pFVar1 = stdout;
  pcVar8 = (char *)dcgettext(0," * crN           carriage return delay style, N in [0..3]\n",5);
  fputs_unlocked(pcVar8,pFVar1);
  pFVar1 = stdout;
  pcVar8 = (char *)dcgettext(0," * ffN           form feed delay style, N in [0..1]\n",5);
  fputs_unlocked(pcVar8,pFVar1);
  pFVar1 = stdout;
  pcVar8 = (char *)dcgettext(0," * nlN           newline delay style, N in [0..1]\n",5);
  fputs_unlocked(pcVar8,pFVar1);
  pFVar1 = stdout;
  pcVar8 = (char *)dcgettext(0," * [-]ocrnl      translate carriage return to newline\n",5);
  fputs_unlocked(pcVar8,pFVar1);
  pFVar1 = stdout;
  pcVar8 = (char *)dcgettext(0,
                             " * [-]ofdel      use delete characters for fill instead of NUL characters\n"
                             ,5);
  fputs_unlocked(pcVar8,pFVar1);
  pFVar1 = stdout;
  pcVar8 = (char *)dcgettext(0,
                             " * [-]ofill      use fill (padding) characters instead of timing for delays\n"
                             ,5);
  fputs_unlocked(pcVar8,pFVar1);
  pFVar1 = stdout;
  pcVar8 = (char *)dcgettext(0," * [-]olcuc      translate lowercase characters to uppercase\n",5);
  fputs_unlocked(pcVar8,pFVar1);
  pFVar1 = stdout;
  pcVar8 = (char *)dcgettext(0," * [-]onlcr      translate newline to carriage return-newline\n",5);
  fputs_unlocked(pcVar8,pFVar1);
  pFVar1 = stdout;
  pcVar8 = (char *)dcgettext(0," * [-]onlret     newline performs a carriage return\n",5);
  fputs_unlocked(pcVar8,pFVar1);
  pFVar1 = stdout;
  pcVar8 = (char *)dcgettext(0,
                             " * [-]onocr      do not print carriage returns in the first column\n",
                             5);
  fputs_unlocked(pcVar8,pFVar1);
  pFVar1 = stdout;
  pcVar8 = (char *)dcgettext(0,"   [-]opost      postprocess output\n",5);
  fputs_unlocked(pcVar8,pFVar1);
  pFVar1 = stdout;
  pcVar8 = (char *)dcgettext(0,
                             " * tabN          horizontal tab delay style, N in [0..3]\n * tabs          same as tab0\n * -tabs         same as tab3\n"
                             ,5);
  fputs_unlocked(pcVar8,pFVar1);
  pFVar1 = stdout;
  pcVar8 = (char *)dcgettext(0," * vtN           vertical tab delay style, N in [0..1]\n",5);
  fputs_unlocked(pcVar8,pFVar1);
  pFVar1 = stdout;
  pcVar8 = (char *)dcgettext(0,
                             "\nLocal settings:\n   [-]crterase   echo erase characters as backspace-space-backspace\n"
                             ,5);
  fputs_unlocked(pcVar8,pFVar1);
  pFVar1 = stdout;
  pcVar8 = (char *)dcgettext(0,
                             " * crtkill       kill all line by obeying the echoprt and echoe settings\n * -crtkill      kill all line by obeying the echoctl and echok settings\n"
                             ,5);
  fputs_unlocked(pcVar8,pFVar1);
  pFVar1 = stdout;
  pcVar8 = (char *)dcgettext(0," * [-]ctlecho    echo control characters in hat notation (\'^c\')\n"
                             ,5);
  fputs_unlocked(pcVar8,pFVar1);
  pFVar1 = stdout;
  pcVar8 = (char *)dcgettext(0,"   [-]echo       echo input characters\n",5);
  fputs_unlocked(pcVar8,pFVar1);
  pFVar1 = stdout;
  pcVar8 = (char *)dcgettext(0," * [-]echoctl    same as [-]ctlecho\n",5);
  fputs_unlocked(pcVar8,pFVar1);
  pFVar1 = stdout;
  pcVar8 = (char *)dcgettext(0,
                             "   [-]echoe      same as [-]crterase\n   [-]echok      echo a newline after a kill character\n"
                             ,5);
  fputs_unlocked(pcVar8,pFVar1);
  pFVar1 = stdout;
  pcVar8 = (char *)dcgettext(0," * [-]echoke     same as [-]crtkill\n",5);
  fputs_unlocked(pcVar8,pFVar1);
  pFVar1 = stdout;
  pcVar8 = (char *)dcgettext(0,
                             "   [-]echonl     echo newline even if not echoing other characters\n",
                             5);
  fputs_unlocked(pcVar8,pFVar1);
  pFVar1 = stdout;
  pcVar8 = (char *)dcgettext(0,
                             " * [-]echoprt    echo erased characters backward, between \'\\\' and \'/\'\n"
                             ,5);
  fputs_unlocked(pcVar8,pFVar1);
  pFVar1 = stdout;
  pcVar8 = (char *)dcgettext(0,
                             " * [-]extproc    enable \"LINEMODE\"; useful with high latency links\n"
                             ,5);
  fputs_unlocked(pcVar8,pFVar1);
  pFVar1 = stdout;
  pcVar8 = (char *)dcgettext(0," * [-]flusho     discard output\n",5);
  fputs_unlocked(pcVar8,pFVar1);
  uVar6 = dcgettext(0,
                    "   [-]icanon     enable special characters: %s\n   [-]iexten     enable non-POSIX special characters\n"
                    ,5);
  __printf_chk(1,uVar6,"erase, kill, werase, rprnt");
  pFVar1 = stdout;
  pcVar8 = (char *)dcgettext(0,
                             "   [-]isig       enable interrupt, quit, and suspend special characters\n   [-]noflsh     disable flushing after interrupt and quit special characters\n"
                             ,5);
  fputs_unlocked(pcVar8,pFVar1);
  pFVar1 = stdout;
  pcVar8 = (char *)dcgettext(0," * [-]prterase   same as [-]echoprt\n",5);
  fputs_unlocked(pcVar8,pFVar1);
  pFVar1 = stdout;
  pcVar8 = (char *)dcgettext(0,
                             " * [-]tostop     stop background jobs that try to write to the terminal\n"
                             ,5);
  fputs_unlocked(pcVar8,pFVar1);
  pFVar1 = stdout;
  pcVar8 = (char *)dcgettext(0,
                             " * [-]xcase      with icanon, escape with \'\\\' for uppercase characters\n"
                             ,5);
  fputs_unlocked(pcVar8,pFVar1);
  pFVar1 = stdout;
  pcVar8 = (char *)dcgettext(0,"\nCombination settings:\n",5);
  fputs_unlocked(pcVar8,pFVar1);
  pFVar1 = stdout;
  pcVar8 = (char *)dcgettext(0," * [-]LCASE      same as [-]lcase\n",5);
  fputs_unlocked(pcVar8,pFVar1);
  pFVar1 = stdout;
  pcVar8 = (char *)dcgettext(0,"   cbreak        same as -icanon\n   -cbreak       same as icanon\n"
                             ,5);
  fputs_unlocked(pcVar8,pFVar1);
  pFVar1 = stdout;
  pcVar8 = (char *)dcgettext(0,
                             "   cooked        same as brkint ignpar istrip icrnl ixon opost isig\n                 icanon, eof and eol characters to their default values\n   -cooked       same as raw\n"
                             ,5);
  fputs_unlocked(pcVar8,pFVar1);
  uVar6 = dcgettext(0,"   crt           same as %s\n",5);
  __printf_chk(1,uVar6,"echoe echoctl echoke");
  uVar6 = dcgettext(0,"   dec           same as %s intr ^c erase 0177\n                 kill ^u\n",5
                   );
  __printf_chk(1,uVar6,"echoe echoctl echoke -ixany");
  pFVar1 = stdout;
  pcVar8 = (char *)dcgettext(0," * [-]decctlq    same as [-]ixany\n",5);
  fputs_unlocked(pcVar8,pFVar1);
  pFVar1 = stdout;
  pcVar8 = (char *)dcgettext(0,
                             "   ek            erase and kill characters to their default values\n   evenp         same as parenb -parodd cs7\n   -evenp        same as -parenb cs8\n"
                             ,5);
  fputs_unlocked(pcVar8,pFVar1);
  pFVar1 = stdout;
  pcVar8 = (char *)dcgettext(0," * [-]lcase      same as xcase iuclc olcuc\n",5);
  fputs_unlocked(pcVar8,pFVar1);
  pFVar1 = stdout;
  pcVar8 = (char *)dcgettext(0,
                             "   litout        same as -parenb -istrip -opost cs8\n   -litout       same as parenb istrip opost cs7\n"
                             ,5);
  fputs_unlocked(pcVar8,pFVar1);
  uVar6 = dcgettext(0,"   nl            same as %s\n   -nl           same as %s\n",5);
  __printf_chk(1,uVar6,"-icrnl -onlcr","icrnl -inlcr -igncr onlcr -ocrnl -onlret");
  pFVar1 = stdout;
  pcVar8 = (char *)dcgettext(0,
                             "   oddp          same as parenb parodd cs7\n   -oddp         same as -parenb cs8\n   [-]parity     same as [-]evenp\n   pass8         same as -parenb -istrip cs8\n   -pass8        same as parenb istrip cs7\n"
                             ,5);
  fputs_unlocked(pcVar8,pFVar1);
  uVar6 = dcgettext(0,
                    "   raw           same as -ignbrk -brkint -ignpar -parmrk -inpck -istrip\n                 -inlcr -igncr -icrnl -ixon -ixoff -icanon -opost\n                 -isig%s min 1 time 0\n   -raw          same as cooked\n"
                    ,5);
  __printf_chk(1,uVar6," -iuclc -ixany -imaxbel -xcase");
  uVar6 = dcgettext(0,
                    "   sane          same as cread -ignbrk brkint -inlcr -igncr icrnl\n                 icanon iexten echo echoe echok -echonl -noflsh\n                 %s\n                 %s\n                 %s,\n                 all special characters to their default values\n"
                    ,5);
  __printf_chk(1,uVar6,"-ixoff -iutf8 -iuclc -ixany imaxbel -xcase -olcuc -ocrnl",
               "opost -ofill onlcr -onocr -onlret nl0 cr0 tab0 bs0 vt0 ff0",
               "isig -tostop -ofdel -echoprt echoctl echoke -extproc -flusho");
  pFVar1 = stdout;
  pcVar8 = (char *)dcgettext(0,
                             "\nHandle the tty line connected to standard input.  Without arguments,\nprints baud rate, line discipline, and deviations from stty sane.  In\nsettings, CHAR is taken literally, or coded as in ^c, 0x37, 0177 or\n127; special values ^- or undef used to disable special characters.\n"
                             ,5);
  fputs_unlocked(pcVar8,pFVar1);
  pbStack_e8 = &DAT_0040beba;
  pcStack_e0 = "test invocation";
  apbStack_d8[0] = (byte *)0x40bf34;
  apbStack_d8[1] = (byte *)0x40becc;
  apbStack_d8[2] = (byte *)0x40bee2;
  apbStack_d8[3] = (byte *)0x40beec;
  apbStack_d8[4] = (byte *)0x40befb;
  pcStack_b0 = "sha2 utilities";
  pcStack_a8 = "sha384sum";
  pcStack_a0 = "sha2 utilities";
  pcStack_98 = "sha512sum";
  pcStack_90 = "sha2 utilities";
  uStack_88 = 0;
  uStack_80 = 0;
  ppbVar9 = &pbStack_e8;
  do {
    ppbVar10 = ppbVar9;
    ppbVar9 = ppbVar10 + 2;
    pbVar12 = *ppbVar9;
    bVar15 = false;
    bVar16 = pbVar12 == (byte *)0x0;
    if (bVar16) break;
    lVar11 = 5;
    pbVar13 = &DAT_0040bdfd;
    do {
      if (lVar11 == 0) break;
      lVar11 = lVar11 + -1;
      bVar15 = *pbVar13 < *pbVar12;
      bVar16 = *pbVar13 == *pbVar12;
      pbVar13 = pbVar13 + (ulong)bVar17 * -2 + 1;
      pbVar12 = pbVar12 + (ulong)bVar17 * -2 + 1;
    } while (bVar16);
  } while ((!bVar15 && !bVar16) != bVar15);
  pbVar12 = ppbVar10[3];
  if (pbVar12 == (byte *)0x0) {
    uVar6 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar6,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar8 = setlocale(5,(char *)0x0);
    if (pcVar8 != (char *)0x0) {
      iVar3 = strncmp(pcVar8,"en_",3);
      if (iVar3 != 0) {
        pbVar12 = &DAT_0040bdfd;
        goto LAB_00403b18;
      }
    }
    pbVar12 = &DAT_0040bdfd;
    uVar6 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    pcVar8 = " invocation";
    __printf_chk(1,uVar6,"https://www.gnu.org/software/coreutils/",&DAT_0040bdfd);
  }
  else {
    uVar6 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar6,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar8 = setlocale(5,(char *)0x0);
    if (pcVar8 != (char *)0x0) {
      iVar3 = strncmp(pcVar8,"en_",3);
      if (iVar3 != 0) {
LAB_00403b18:
        uVar6 = dcgettext(0,"Report %s translation bugs to <https://translationproject.org/team/>\n"
                          ,5);
        __printf_chk(1,uVar6,&DAT_0040bdfd);
      }
    }
    pcVar8 = " invocation";
    uVar6 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    __printf_chk(1,uVar6,"https://www.gnu.org/software/coreutils/",&DAT_0040bdfd);
    if (pbVar12 != &DAT_0040bdfd) {
      pcVar8 = "";
    }
  }
  uVar6 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(1,uVar6,pbVar12,pcVar8);
LAB_00402dcf:
                    /* WARNING: Subroutine does not return */
  exit(iVar2);
}


void FUN_00402ca0(char param_1,undefined8 param_2)

{
  FILE *pFVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  byte **ppbVar8;
  long lVar10;
  byte *pbVar11;
  byte *pbVar12;
  bool bVar13;
  bool bVar14;
  byte bVar15;
  byte *pbStack_b0;
  char *pcStack_a8;
  byte *apbStack_a0 [5];
  char *pcStack_78;
  char *pcStack_70;
  char *pcStack_68;
  char *pcStack_60;
  char *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  int *piStack_30;
  undefined2 local_20;
  undefined2 local_1e;
  byte **ppbVar9;
  
  bVar15 = 0;
  piStack_30 = (int *)0x402cc0;
  iVar2 = ioctl(0,0x5413,&local_20);
  if (iVar2 == 0) {
    if (param_1 == '\0') {
      piStack_30 = (int *)0x402cfa;
      FUN_004027c0("%d %d\n",local_20,local_1e);
      DAT_006133dc = 0;
      return;
    }
    piStack_30 = (int *)0x402d1c;
    FUN_004027c0("rows %d; columns %d;",local_20,local_1e);
    return;
  }
  piStack_30 = (int *)0x402cc9;
  piVar4 = __errno_location();
  if (*piVar4 == 0x16) {
    if (param_1 != '\0') {
      return;
    }
  }
  else {
    piStack_30 = (int *)0x402d34;
    uVar5 = FUN_004064f0(0,3,param_2);
    piStack_30 = (int *)0x402d4c;
    error(1,*piVar4,"%s",uVar5);
  }
  piStack_30 = (int *)0x402d5b;
  uStack_40 = FUN_004064f0(0,3,param_2);
  piStack_30 = (int *)0x402d6f;
  uVar5 = dcgettext(0,"%s: no size information for this device",5);
  iVar2 = 1;
  piStack_30 = (int *)0x402d83;
  error(1,0,uVar5,uStack_40);
  uVar5 = DAT_006133f8;
  uStack_38 = param_2;
  piStack_30 = piVar4;
  if (iVar2 != 0) {
    uVar6 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(stderr,1,uVar6,uVar5);
    goto LAB_00402dcf;
  }
  uVar6 = dcgettext(0,
                    "Usage: %s [-F DEVICE | --file=DEVICE] [SETTING]...\n  or:  %s [-F DEVICE | --file=DEVICE] [-a|--all]\n  or:  %s [-F DEVICE | --file=DEVICE] [-g|--save]\n"
                    ,5);
  __printf_chk(1,uVar6,uVar5,uVar5,uVar5);
  pFVar1 = stdout;
  pcVar7 = (char *)dcgettext(0,"Print or change terminal characteristics.\n",5);
  fputs_unlocked(pcVar7,pFVar1);
  pFVar1 = stdout;
  pcVar7 = (char *)dcgettext(0,
                             "\nMandatory arguments to long options are mandatory for short options too.\n"
                             ,5);
  fputs_unlocked(pcVar7,pFVar1);
  pFVar1 = stdout;
  pcVar7 = (char *)dcgettext(0,
                             "  -a, --all          print all current settings in human-readable form\n  -g, --save         print all current settings in a stty-readable form\n  -F, --file=DEVICE  open and use the specified DEVICE instead of stdin\n"
                             ,5);
  fputs_unlocked(pcVar7,pFVar1);
  pFVar1 = stdout;
  pcVar7 = (char *)dcgettext(0,"      --help     display this help and exit\n",5);
  fputs_unlocked(pcVar7,pFVar1);
  pFVar1 = stdout;
  pcVar7 = (char *)dcgettext(0,"      --version  output version information and exit\n",5);
  fputs_unlocked(pcVar7,pFVar1);
  pFVar1 = stdout;
  pcVar7 = (char *)dcgettext(0,
                             "\nOptional - before SETTING indicates negation.  An * marks non-POSIX\nsettings.  The underlying system defines which settings are available.\n"
                             ,5);
  fputs_unlocked(pcVar7,pFVar1);
  pFVar1 = stdout;
  pcVar7 = (char *)dcgettext(0,"\nSpecial characters:\n",5);
  fputs_unlocked(pcVar7,pFVar1);
  pFVar1 = stdout;
  pcVar7 = (char *)dcgettext(0," * discard CHAR  CHAR will toggle discarding of output\n",5);
  fputs_unlocked(pcVar7,pFVar1);
  pFVar1 = stdout;
  pcVar7 = (char *)dcgettext(0,
                             "   eof CHAR      CHAR will send an end of file (terminate the input)\n   eol CHAR      CHAR will end the line\n"
                             ,5);
  fputs_unlocked(pcVar7,pFVar1);
  pFVar1 = stdout;
  pcVar7 = (char *)dcgettext(0," * eol2 CHAR     alternate CHAR for ending the line\n",5);
  fputs_unlocked(pcVar7,pFVar1);
  pFVar1 = stdout;
  pcVar7 = (char *)dcgettext(0,
                             "   erase CHAR    CHAR will erase the last character typed\n   intr CHAR     CHAR will send an interrupt signal\n   kill CHAR     CHAR will erase the current line\n"
                             ,5);
  fputs_unlocked(pcVar7,pFVar1);
  pFVar1 = stdout;
  pcVar7 = (char *)dcgettext(0," * lnext CHAR    CHAR will enter the next character quoted\n",5);
  fputs_unlocked(pcVar7,pFVar1);
  pFVar1 = stdout;
  pcVar7 = (char *)dcgettext(0,"   quit CHAR     CHAR will send a quit signal\n",5);
  fputs_unlocked(pcVar7,pFVar1);
  pFVar1 = stdout;
  pcVar7 = (char *)dcgettext(0," * rprnt CHAR    CHAR will redraw the current line\n",5);
  fputs_unlocked(pcVar7,pFVar1);
  pFVar1 = stdout;
  pcVar7 = (char *)dcgettext(0,
                             "   start CHAR    CHAR will restart the output after stopping it\n   stop CHAR     CHAR will stop the output\n   susp CHAR     CHAR will send a terminal stop signal\n"
                             ,5);
  fputs_unlocked(pcVar7,pFVar1);
  pFVar1 = stdout;
  pcVar7 = (char *)dcgettext(0," * swtch CHAR    CHAR will switch to a different shell layer\n",5);
  fputs_unlocked(pcVar7,pFVar1);
  pFVar1 = stdout;
  pcVar7 = (char *)dcgettext(0," * werase CHAR   CHAR will erase the last word typed\n",5);
  fputs_unlocked(pcVar7,pFVar1);
  pFVar1 = stdout;
  pcVar7 = (char *)dcgettext(0,
                             "\nSpecial settings:\n   N             set the input and output speeds to N bauds\n"
                             ,5);
  fputs_unlocked(pcVar7,pFVar1);
  pFVar1 = stdout;
  pcVar7 = (char *)dcgettext(0,
                             " * cols N        tell the kernel that the terminal has N columns\n * columns N     same as cols N\n"
                             ,5);
  fputs_unlocked(pcVar7,pFVar1);
  if (DAT_00613230 == 1) {
    uVar5 = dcgettext(0,"on",5);
  }
  else {
    uVar5 = dcgettext(0,&DAT_0040c256,5);
  }
  uVar6 = dcgettext(0,
                    " * [-]drain      wait for transmission before applying settings (%s by default)\n"
                    ,5);
  __printf_chk(1,uVar6,uVar5);
  pFVar1 = stdout;
  pcVar7 = (char *)dcgettext(0,"   ispeed N      set the input speed to N\n",5);
  fputs_unlocked(pcVar7,pFVar1);
  pFVar1 = stdout;
  pcVar7 = (char *)dcgettext(0," * line N        use line discipline N\n",5);
  fputs_unlocked(pcVar7,pFVar1);
  pFVar1 = stdout;
  pcVar7 = (char *)dcgettext(0,
                             "   min N         with -icanon, set N characters minimum for a completed read\n   ospeed N      set the output speed to N\n"
                             ,5);
  fputs_unlocked(pcVar7,pFVar1);
  pFVar1 = stdout;
  pcVar7 = (char *)dcgettext(0,
                             " * rows N        tell the kernel that the terminal has N rows\n * size          print the number of rows and columns according to the kernel\n"
                             ,5);
  fputs_unlocked(pcVar7,pFVar1);
  pFVar1 = stdout;
  pcVar7 = (char *)dcgettext(0,
                             "   speed         print the terminal speed\n   time N        with -icanon, set read timeout of N tenths of a second\n"
                             ,5);
  fputs_unlocked(pcVar7,pFVar1);
  pFVar1 = stdout;
  pcVar7 = (char *)dcgettext(0,
                             "\nControl settings:\n   [-]clocal     disable modem control signals\n   [-]cread      allow input to be received\n"
                             ,5);
  fputs_unlocked(pcVar7,pFVar1);
  pFVar1 = stdout;
  pcVar7 = (char *)dcgettext(0," * [-]crtscts    enable RTS/CTS handshaking\n",5);
  fputs_unlocked(pcVar7,pFVar1);
  pFVar1 = stdout;
  pcVar7 = (char *)dcgettext(0,"   csN           set character size to N bits, N in [5..8]\n",5);
  fputs_unlocked(pcVar7,pFVar1);
  pFVar1 = stdout;
  pcVar7 = (char *)dcgettext(0,
                             "   [-]cstopb     use two stop bits per character (one with \'-\')\n   [-]hup        send a hangup signal when the last process closes the tty\n   [-]hupcl      same as [-]hup\n   [-]parenb     generate parity bit in output and expect parity bit in input\n   [-]parodd     set odd parity (or even parity with \'-\')\n"
                             ,5);
  fputs_unlocked(pcVar7,pFVar1);
  pFVar1 = stdout;
  pcVar7 = (char *)dcgettext(0," * [-]cmspar     use \"stick\" (mark/space) parity\n",5);
  fputs_unlocked(pcVar7,pFVar1);
  pFVar1 = stdout;
  pcVar7 = (char *)dcgettext(0,
                             "\nInput settings:\n   [-]brkint     breaks cause an interrupt signal\n   [-]icrnl      translate carriage return to newline\n   [-]ignbrk     ignore break characters\n   [-]igncr      ignore carriage return\n   [-]ignpar     ignore characters with parity errors\n"
                             ,5);
  fputs_unlocked(pcVar7,pFVar1);
  pFVar1 = stdout;
  pcVar7 = (char *)dcgettext(0,
                             " * [-]imaxbel    beep and do not flush a full input buffer on a character\n"
                             ,5);
  fputs_unlocked(pcVar7,pFVar1);
  pFVar1 = stdout;
  pcVar7 = (char *)dcgettext(0,
                             "   [-]inlcr      translate newline to carriage return\n   [-]inpck      enable input parity checking\n   [-]istrip     clear high (8th) bit of input characters\n"
                             ,5);
  fputs_unlocked(pcVar7,pFVar1);
  pFVar1 = stdout;
  pcVar7 = (char *)dcgettext(0," * [-]iutf8      assume input characters are UTF-8 encoded\n",5);
  fputs_unlocked(pcVar7,pFVar1);
  pFVar1 = stdout;
  pcVar7 = (char *)dcgettext(0," * [-]iuclc      translate uppercase characters to lowercase\n",5);
  fputs_unlocked(pcVar7,pFVar1);
  pFVar1 = stdout;
  pcVar7 = (char *)dcgettext(0,
                             " * [-]ixany      let any character restart output, not only start character\n"
                             ,5);
  fputs_unlocked(pcVar7,pFVar1);
  pFVar1 = stdout;
  pcVar7 = (char *)dcgettext(0,
                             "   [-]ixoff      enable sending of start/stop characters\n   [-]ixon       enable XON/XOFF flow control\n   [-]parmrk     mark parity errors (with a 255-0-character sequence)\n   [-]tandem     same as [-]ixoff\n"
                             ,5);
  fputs_unlocked(pcVar7,pFVar1);
  pFVar1 = stdout;
  pcVar7 = (char *)dcgettext(0,"\nOutput settings:\n",5);
  fputs_unlocked(pcVar7,pFVar1);
  pFVar1 = stdout;
  pcVar7 = (char *)dcgettext(0," * bsN           backspace delay style, N in [0..1]\n",5);
  fputs_unlocked(pcVar7,pFVar1);
  pFVar1 = stdout;
  pcVar7 = (char *)dcgettext(0," * crN           carriage return delay style, N in [0..3]\n",5);
  fputs_unlocked(pcVar7,pFVar1);
  pFVar1 = stdout;
  pcVar7 = (char *)dcgettext(0," * ffN           form feed delay style, N in [0..1]\n",5);
  fputs_unlocked(pcVar7,pFVar1);
  pFVar1 = stdout;
  pcVar7 = (char *)dcgettext(0," * nlN           newline delay style, N in [0..1]\n",5);
  fputs_unlocked(pcVar7,pFVar1);
  pFVar1 = stdout;
  pcVar7 = (char *)dcgettext(0," * [-]ocrnl      translate carriage return to newline\n",5);
  fputs_unlocked(pcVar7,pFVar1);
  pFVar1 = stdout;
  pcVar7 = (char *)dcgettext(0,
                             " * [-]ofdel      use delete characters for fill instead of NUL characters\n"
                             ,5);
  fputs_unlocked(pcVar7,pFVar1);
  pFVar1 = stdout;
  pcVar7 = (char *)dcgettext(0,
                             " * [-]ofill      use fill (padding) characters instead of timing for delays\n"
                             ,5);
  fputs_unlocked(pcVar7,pFVar1);
  pFVar1 = stdout;
  pcVar7 = (char *)dcgettext(0," * [-]olcuc      translate lowercase characters to uppercase\n",5);
  fputs_unlocked(pcVar7,pFVar1);
  pFVar1 = stdout;
  pcVar7 = (char *)dcgettext(0," * [-]onlcr      translate newline to carriage return-newline\n",5);
  fputs_unlocked(pcVar7,pFVar1);
  pFVar1 = stdout;
  pcVar7 = (char *)dcgettext(0," * [-]onlret     newline performs a carriage return\n",5);
  fputs_unlocked(pcVar7,pFVar1);
  pFVar1 = stdout;
  pcVar7 = (char *)dcgettext(0,
                             " * [-]onocr      do not print carriage returns in the first column\n",
                             5);
  fputs_unlocked(pcVar7,pFVar1);
  pFVar1 = stdout;
  pcVar7 = (char *)dcgettext(0,"   [-]opost      postprocess output\n",5);
  fputs_unlocked(pcVar7,pFVar1);
  pFVar1 = stdout;
  pcVar7 = (char *)dcgettext(0,
                             " * tabN          horizontal tab delay style, N in [0..3]\n * tabs          same as tab0\n * -tabs         same as tab3\n"
                             ,5);
  fputs_unlocked(pcVar7,pFVar1);
  pFVar1 = stdout;
  pcVar7 = (char *)dcgettext(0," * vtN           vertical tab delay style, N in [0..1]\n",5);
  fputs_unlocked(pcVar7,pFVar1);
  pFVar1 = stdout;
  pcVar7 = (char *)dcgettext(0,
                             "\nLocal settings:\n   [-]crterase   echo erase characters as backspace-space-backspace\n"
                             ,5);
  fputs_unlocked(pcVar7,pFVar1);
  pFVar1 = stdout;
  pcVar7 = (char *)dcgettext(0,
                             " * crtkill       kill all line by obeying the echoprt and echoe settings\n * -crtkill      kill all line by obeying the echoctl and echok settings\n"
                             ,5);
  fputs_unlocked(pcVar7,pFVar1);
  pFVar1 = stdout;
  pcVar7 = (char *)dcgettext(0," * [-]ctlecho    echo control characters in hat notation (\'^c\')\n"
                             ,5);
  fputs_unlocked(pcVar7,pFVar1);
  pFVar1 = stdout;
  pcVar7 = (char *)dcgettext(0,"   [-]echo       echo input characters\n",5);
  fputs_unlocked(pcVar7,pFVar1);
  pFVar1 = stdout;
  pcVar7 = (char *)dcgettext(0," * [-]echoctl    same as [-]ctlecho\n",5);
  fputs_unlocked(pcVar7,pFVar1);
  pFVar1 = stdout;
  pcVar7 = (char *)dcgettext(0,
                             "   [-]echoe      same as [-]crterase\n   [-]echok      echo a newline after a kill character\n"
                             ,5);
  fputs_unlocked(pcVar7,pFVar1);
  pFVar1 = stdout;
  pcVar7 = (char *)dcgettext(0," * [-]echoke     same as [-]crtkill\n",5);
  fputs_unlocked(pcVar7,pFVar1);
  pFVar1 = stdout;
  pcVar7 = (char *)dcgettext(0,
                             "   [-]echonl     echo newline even if not echoing other characters\n",
                             5);
  fputs_unlocked(pcVar7,pFVar1);
  pFVar1 = stdout;
  pcVar7 = (char *)dcgettext(0,
                             " * [-]echoprt    echo erased characters backward, between \'\\\' and \'/\'\n"
                             ,5);
  fputs_unlocked(pcVar7,pFVar1);
  pFVar1 = stdout;
  pcVar7 = (char *)dcgettext(0,
                             " * [-]extproc    enable \"LINEMODE\"; useful with high latency links\n"
                             ,5);
  fputs_unlocked(pcVar7,pFVar1);
  pFVar1 = stdout;
  pcVar7 = (char *)dcgettext(0," * [-]flusho     discard output\n",5);
  fputs_unlocked(pcVar7,pFVar1);
  uVar5 = dcgettext(0,
                    "   [-]icanon     enable special characters: %s\n   [-]iexten     enable non-POSIX special characters\n"
                    ,5);
  __printf_chk(1,uVar5,"erase, kill, werase, rprnt");
  pFVar1 = stdout;
  pcVar7 = (char *)dcgettext(0,
                             "   [-]isig       enable interrupt, quit, and suspend special characters\n   [-]noflsh     disable flushing after interrupt and quit special characters\n"
                             ,5);
  fputs_unlocked(pcVar7,pFVar1);
  pFVar1 = stdout;
  pcVar7 = (char *)dcgettext(0," * [-]prterase   same as [-]echoprt\n",5);
  fputs_unlocked(pcVar7,pFVar1);
  pFVar1 = stdout;
  pcVar7 = (char *)dcgettext(0,
                             " * [-]tostop     stop background jobs that try to write to the terminal\n"
                             ,5);
  fputs_unlocked(pcVar7,pFVar1);
  pFVar1 = stdout;
  pcVar7 = (char *)dcgettext(0,
                             " * [-]xcase      with icanon, escape with \'\\\' for uppercase characters\n"
                             ,5);
  fputs_unlocked(pcVar7,pFVar1);
  pFVar1 = stdout;
  pcVar7 = (char *)dcgettext(0,"\nCombination settings:\n",5);
  fputs_unlocked(pcVar7,pFVar1);
  pFVar1 = stdout;
  pcVar7 = (char *)dcgettext(0," * [-]LCASE      same as [-]lcase\n",5);
  fputs_unlocked(pcVar7,pFVar1);
  pFVar1 = stdout;
  pcVar7 = (char *)dcgettext(0,"   cbreak        same as -icanon\n   -cbreak       same as icanon\n"
                             ,5);
  fputs_unlocked(pcVar7,pFVar1);
  pFVar1 = stdout;
  pcVar7 = (char *)dcgettext(0,
                             "   cooked        same as brkint ignpar istrip icrnl ixon opost isig\n                 icanon, eof and eol characters to their default values\n   -cooked       same as raw\n"
                             ,5);
  fputs_unlocked(pcVar7,pFVar1);
  uVar5 = dcgettext(0,"   crt           same as %s\n",5);
  __printf_chk(1,uVar5,"echoe echoctl echoke");
  uVar5 = dcgettext(0,"   dec           same as %s intr ^c erase 0177\n                 kill ^u\n",5
                   );
  __printf_chk(1,uVar5,"echoe echoctl echoke -ixany");
  pFVar1 = stdout;
  pcVar7 = (char *)dcgettext(0," * [-]decctlq    same as [-]ixany\n",5);
  fputs_unlocked(pcVar7,pFVar1);
  pFVar1 = stdout;
  pcVar7 = (char *)dcgettext(0,
                             "   ek            erase and kill characters to their default values\n   evenp         same as parenb -parodd cs7\n   -evenp        same as -parenb cs8\n"
                             ,5);
  fputs_unlocked(pcVar7,pFVar1);
  pFVar1 = stdout;
  pcVar7 = (char *)dcgettext(0," * [-]lcase      same as xcase iuclc olcuc\n",5);
  fputs_unlocked(pcVar7,pFVar1);
  pFVar1 = stdout;
  pcVar7 = (char *)dcgettext(0,
                             "   litout        same as -parenb -istrip -opost cs8\n   -litout       same as parenb istrip opost cs7\n"
                             ,5);
  fputs_unlocked(pcVar7,pFVar1);
  uVar5 = dcgettext(0,"   nl            same as %s\n   -nl           same as %s\n",5);
  __printf_chk(1,uVar5,"-icrnl -onlcr","icrnl -inlcr -igncr onlcr -ocrnl -onlret");
  pFVar1 = stdout;
  pcVar7 = (char *)dcgettext(0,
                             "   oddp          same as parenb parodd cs7\n   -oddp         same as -parenb cs8\n   [-]parity     same as [-]evenp\n   pass8         same as -parenb -istrip cs8\n   -pass8        same as parenb istrip cs7\n"
                             ,5);
  fputs_unlocked(pcVar7,pFVar1);
  uVar5 = dcgettext(0,
                    "   raw           same as -ignbrk -brkint -ignpar -parmrk -inpck -istrip\n                 -inlcr -igncr -icrnl -ixon -ixoff -icanon -opost\n                 -isig%s min 1 time 0\n   -raw          same as cooked\n"
                    ,5);
  __printf_chk(1,uVar5," -iuclc -ixany -imaxbel -xcase");
  uVar5 = dcgettext(0,
                    "   sane          same as cread -ignbrk brkint -inlcr -igncr icrnl\n                 icanon iexten echo echoe echok -echonl -noflsh\n                 %s\n                 %s\n                 %s,\n                 all special characters to their default values\n"
                    ,5);
  __printf_chk(1,uVar5,"-ixoff -iutf8 -iuclc -ixany imaxbel -xcase -olcuc -ocrnl",
               "opost -ofill onlcr -onocr -onlret nl0 cr0 tab0 bs0 vt0 ff0",
               "isig -tostop -ofdel -echoprt echoctl echoke -extproc -flusho");
  pFVar1 = stdout;
  pcVar7 = (char *)dcgettext(0,
                             "\nHandle the tty line connected to standard input.  Without arguments,\nprints baud rate, line discipline, and deviations from stty sane.  In\nsettings, CHAR is taken literally, or coded as in ^c, 0x37, 0177 or\n127; special values ^- or undef used to disable special characters.\n"
                             ,5);
  fputs_unlocked(pcVar7,pFVar1);
  pbStack_b0 = &DAT_0040beba;
  pcStack_a8 = "test invocation";
  apbStack_a0[0] = (byte *)0x40bf34;
  apbStack_a0[1] = (byte *)0x40becc;
  apbStack_a0[2] = (byte *)0x40bee2;
  apbStack_a0[3] = (byte *)0x40beec;
  apbStack_a0[4] = (byte *)0x40befb;
  pcStack_78 = "sha2 utilities";
  pcStack_70 = "sha384sum";
  pcStack_68 = "sha2 utilities";
  pcStack_60 = "sha512sum";
  pcStack_58 = "sha2 utilities";
  uStack_50 = 0;
  uStack_48 = 0;
  ppbVar8 = &pbStack_b0;
  do {
    ppbVar9 = ppbVar8;
    ppbVar8 = ppbVar9 + 2;
    pbVar11 = *ppbVar8;
    bVar13 = false;
    bVar14 = pbVar11 == (byte *)0x0;
    if (bVar14) break;
    lVar10 = 5;
    pbVar12 = &DAT_0040bdfd;
    do {
      if (lVar10 == 0) break;
      lVar10 = lVar10 + -1;
      bVar13 = *pbVar12 < *pbVar11;
      bVar14 = *pbVar12 == *pbVar11;
      pbVar12 = pbVar12 + (ulong)bVar15 * -2 + 1;
      pbVar11 = pbVar11 + (ulong)bVar15 * -2 + 1;
    } while (bVar14);
  } while ((!bVar13 && !bVar14) != bVar13);
  pbVar11 = ppbVar9[3];
  if (pbVar11 == (byte *)0x0) {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar7 = setlocale(5,(char *)0x0);
    if (pcVar7 != (char *)0x0) {
      iVar3 = strncmp(pcVar7,"en_",3);
      if (iVar3 != 0) {
        pbVar11 = &DAT_0040bdfd;
        goto LAB_00403b18;
      }
    }
    pbVar11 = &DAT_0040bdfd;
    uVar5 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    pcVar7 = " invocation";
    __printf_chk(1,uVar5,"https://www.gnu.org/software/coreutils/",&DAT_0040bdfd);
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar7 = setlocale(5,(char *)0x0);
    if (pcVar7 != (char *)0x0) {
      iVar3 = strncmp(pcVar7,"en_",3);
      if (iVar3 != 0) {
LAB_00403b18:
        uVar5 = dcgettext(0,"Report %s translation bugs to <https://translationproject.org/team/>\n"
                          ,5);
        __printf_chk(1,uVar5,&DAT_0040bdfd);
      }
    }
    pcVar7 = " invocation";
    uVar5 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    __printf_chk(1,uVar5,"https://www.gnu.org/software/coreutils/",&DAT_0040bdfd);
    if (pbVar11 != &DAT_0040bdfd) {
      pcVar7 = "";
    }
  }
  uVar5 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(1,uVar5,pbVar11,pcVar7);
LAB_00402dcf:
                    /* WARNING: Subroutine does not return */
  exit(iVar2);
}


void FUN_00402d90(int param_1)

{
  FILE *pFVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 uVar5;
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
  undefined8 local_28;
  undefined8 local_20;
  byte **ppbVar7;
  
  uVar5 = DAT_006133f8;
  bVar13 = 0;
  if (param_1 != 0) {
    uVar3 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(stderr,1,uVar3,uVar5);
    goto LAB_00402dcf;
  }
  uVar3 = dcgettext(0,
                    "Usage: %s [-F DEVICE | --file=DEVICE] [SETTING]...\n  or:  %s [-F DEVICE | --file=DEVICE] [-a|--all]\n  or:  %s [-F DEVICE | --file=DEVICE] [-g|--save]\n"
                    ,5);
  __printf_chk(1,uVar3,uVar5,uVar5,uVar5);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"Print or change terminal characteristics.\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nMandatory arguments to long options are mandatory for short options too.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -a, --all          print all current settings in human-readable form\n  -g, --save         print all current settings in a stty-readable form\n  -F, --file=DEVICE  open and use the specified DEVICE instead of stdin\n"
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
                             "\nOptional - before SETTING indicates negation.  An * marks non-POSIX\nsettings.  The underlying system defines which settings are available.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"\nSpecial characters:\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0," * discard CHAR  CHAR will toggle discarding of output\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "   eof CHAR      CHAR will send an end of file (terminate the input)\n   eol CHAR      CHAR will end the line\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0," * eol2 CHAR     alternate CHAR for ending the line\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "   erase CHAR    CHAR will erase the last character typed\n   intr CHAR     CHAR will send an interrupt signal\n   kill CHAR     CHAR will erase the current line\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0," * lnext CHAR    CHAR will enter the next character quoted\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"   quit CHAR     CHAR will send a quit signal\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0," * rprnt CHAR    CHAR will redraw the current line\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "   start CHAR    CHAR will restart the output after stopping it\n   stop CHAR     CHAR will stop the output\n   susp CHAR     CHAR will send a terminal stop signal\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0," * swtch CHAR    CHAR will switch to a different shell layer\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0," * werase CHAR   CHAR will erase the last word typed\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nSpecial settings:\n   N             set the input and output speeds to N bauds\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             " * cols N        tell the kernel that the terminal has N columns\n * columns N     same as cols N\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  if (DAT_00613230 == 1) {
    uVar5 = dcgettext(0,"on",5);
  }
  else {
    uVar5 = dcgettext(0,&DAT_0040c256,5);
  }
  uVar3 = dcgettext(0,
                    " * [-]drain      wait for transmission before applying settings (%s by default)\n"
                    ,5);
  __printf_chk(1,uVar3,uVar5);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"   ispeed N      set the input speed to N\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0," * line N        use line discipline N\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "   min N         with -icanon, set N characters minimum for a completed read\n   ospeed N      set the output speed to N\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             " * rows N        tell the kernel that the terminal has N rows\n * size          print the number of rows and columns according to the kernel\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "   speed         print the terminal speed\n   time N        with -icanon, set read timeout of N tenths of a second\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nControl settings:\n   [-]clocal     disable modem control signals\n   [-]cread      allow input to be received\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0," * [-]crtscts    enable RTS/CTS handshaking\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"   csN           set character size to N bits, N in [5..8]\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "   [-]cstopb     use two stop bits per character (one with \'-\')\n   [-]hup        send a hangup signal when the last process closes the tty\n   [-]hupcl      same as [-]hup\n   [-]parenb     generate parity bit in output and expect parity bit in input\n   [-]parodd     set odd parity (or even parity with \'-\')\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0," * [-]cmspar     use \"stick\" (mark/space) parity\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nInput settings:\n   [-]brkint     breaks cause an interrupt signal\n   [-]icrnl      translate carriage return to newline\n   [-]ignbrk     ignore break characters\n   [-]igncr      ignore carriage return\n   [-]ignpar     ignore characters with parity errors\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             " * [-]imaxbel    beep and do not flush a full input buffer on a character\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "   [-]inlcr      translate newline to carriage return\n   [-]inpck      enable input parity checking\n   [-]istrip     clear high (8th) bit of input characters\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0," * [-]iutf8      assume input characters are UTF-8 encoded\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0," * [-]iuclc      translate uppercase characters to lowercase\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             " * [-]ixany      let any character restart output, not only start character\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "   [-]ixoff      enable sending of start/stop characters\n   [-]ixon       enable XON/XOFF flow control\n   [-]parmrk     mark parity errors (with a 255-0-character sequence)\n   [-]tandem     same as [-]ixoff\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"\nOutput settings:\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0," * bsN           backspace delay style, N in [0..1]\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0," * crN           carriage return delay style, N in [0..3]\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0," * ffN           form feed delay style, N in [0..1]\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0," * nlN           newline delay style, N in [0..1]\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0," * [-]ocrnl      translate carriage return to newline\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             " * [-]ofdel      use delete characters for fill instead of NUL characters\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             " * [-]ofill      use fill (padding) characters instead of timing for delays\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0," * [-]olcuc      translate lowercase characters to uppercase\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0," * [-]onlcr      translate newline to carriage return-newline\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0," * [-]onlret     newline performs a carriage return\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             " * [-]onocr      do not print carriage returns in the first column\n",
                             5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"   [-]opost      postprocess output\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             " * tabN          horizontal tab delay style, N in [0..3]\n * tabs          same as tab0\n * -tabs         same as tab3\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0," * vtN           vertical tab delay style, N in [0..1]\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nLocal settings:\n   [-]crterase   echo erase characters as backspace-space-backspace\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             " * crtkill       kill all line by obeying the echoprt and echoe settings\n * -crtkill      kill all line by obeying the echoctl and echok settings\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0," * [-]ctlecho    echo control characters in hat notation (\'^c\')\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"   [-]echo       echo input characters\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0," * [-]echoctl    same as [-]ctlecho\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "   [-]echoe      same as [-]crterase\n   [-]echok      echo a newline after a kill character\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0," * [-]echoke     same as [-]crtkill\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "   [-]echonl     echo newline even if not echoing other characters\n",
                             5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             " * [-]echoprt    echo erased characters backward, between \'\\\' and \'/\'\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             " * [-]extproc    enable \"LINEMODE\"; useful with high latency links\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0," * [-]flusho     discard output\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  uVar5 = dcgettext(0,
                    "   [-]icanon     enable special characters: %s\n   [-]iexten     enable non-POSIX special characters\n"
                    ,5);
  __printf_chk(1,uVar5,"erase, kill, werase, rprnt");
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "   [-]isig       enable interrupt, quit, and suspend special characters\n   [-]noflsh     disable flushing after interrupt and quit special characters\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0," * [-]prterase   same as [-]echoprt\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             " * [-]tostop     stop background jobs that try to write to the terminal\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             " * [-]xcase      with icanon, escape with \'\\\' for uppercase characters\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"\nCombination settings:\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0," * [-]LCASE      same as [-]lcase\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"   cbreak        same as -icanon\n   -cbreak       same as icanon\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "   cooked        same as brkint ignpar istrip icrnl ixon opost isig\n                 icanon, eof and eol characters to their default values\n   -cooked       same as raw\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  uVar5 = dcgettext(0,"   crt           same as %s\n",5);
  __printf_chk(1,uVar5,"echoe echoctl echoke");
  uVar5 = dcgettext(0,"   dec           same as %s intr ^c erase 0177\n                 kill ^u\n",5
                   );
  __printf_chk(1,uVar5,"echoe echoctl echoke -ixany");
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0," * [-]decctlq    same as [-]ixany\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "   ek            erase and kill characters to their default values\n   evenp         same as parenb -parodd cs7\n   -evenp        same as -parenb cs8\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0," * [-]lcase      same as xcase iuclc olcuc\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "   litout        same as -parenb -istrip -opost cs8\n   -litout       same as parenb istrip opost cs7\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  uVar5 = dcgettext(0,"   nl            same as %s\n   -nl           same as %s\n",5);
  __printf_chk(1,uVar5,"-icrnl -onlcr","icrnl -inlcr -igncr onlcr -ocrnl -onlret");
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "   oddp          same as parenb parodd cs7\n   -oddp         same as -parenb cs8\n   [-]parity     same as [-]evenp\n   pass8         same as -parenb -istrip cs8\n   -pass8        same as parenb istrip cs7\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  uVar5 = dcgettext(0,
                    "   raw           same as -ignbrk -brkint -ignpar -parmrk -inpck -istrip\n                 -inlcr -igncr -icrnl -ixon -ixoff -icanon -opost\n                 -isig%s min 1 time 0\n   -raw          same as cooked\n"
                    ,5);
  __printf_chk(1,uVar5," -iuclc -ixany -imaxbel -xcase");
  uVar5 = dcgettext(0,
                    "   sane          same as cread -ignbrk brkint -inlcr -igncr icrnl\n                 icanon iexten echo echoe echok -echonl -noflsh\n                 %s\n                 %s\n                 %s,\n                 all special characters to their default values\n"
                    ,5);
  __printf_chk(1,uVar5,"-ixoff -iutf8 -iuclc -ixany imaxbel -xcase -olcuc -ocrnl",
               "opost -ofill onlcr -onocr -onlret nl0 cr0 tab0 bs0 vt0 ff0",
               "isig -tostop -ofdel -echoprt echoctl echoke -extproc -flusho");
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nHandle the tty line connected to standard input.  Without arguments,\nprints baud rate, line discipline, and deviations from stty sane.  In\nsettings, CHAR is taken literally, or coded as in ^c, 0x37, 0177 or\n127; special values ^- or undef used to disable special characters.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  local_88 = &DAT_0040beba;
  local_80 = "test invocation";
  local_78[0] = (byte *)0x40bf34;
  local_78[1] = (byte *)0x40becc;
  local_78[2] = (byte *)0x40bee2;
  local_78[3] = (byte *)0x40beec;
  local_78[4] = (byte *)0x40befb;
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
    lVar8 = 5;
    pbVar10 = &DAT_0040bdfd;
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
        pbVar9 = &DAT_0040bdfd;
        goto LAB_00403b18;
      }
    }
    pbVar9 = &DAT_0040bdfd;
    uVar5 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    pcVar4 = " invocation";
    __printf_chk(1,uVar5,"https://www.gnu.org/software/coreutils/",&DAT_0040bdfd);
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
      iVar2 = strncmp(pcVar4,"en_",3);
      if (iVar2 != 0) {
LAB_00403b18:
        uVar5 = dcgettext(0,"Report %s translation bugs to <https://translationproject.org/team/>\n"
                          ,5);
        __printf_chk(1,uVar5,&DAT_0040bdfd);
      }
    }
    pcVar4 = " invocation";
    uVar5 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    __printf_chk(1,uVar5,"https://www.gnu.org/software/coreutils/",&DAT_0040bdfd);
    if (pbVar9 != &DAT_0040bdfd) {
      pcVar4 = "";
    }
  }
  uVar5 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(1,uVar5,pbVar9,pcVar4);
LAB_00402dcf:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}


void FUN_00403bd0(char param_1,undefined8 param_2,long param_3,int param_4,termios *param_5,
                 undefined *param_6,undefined *param_7)

{
  long *plVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  speed_t sVar5;
  int iVar6;
  undefined4 uVar7;
  uint *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int *piVar12;
  long lVar13;
  byte *pbVar14;
  undefined **ppuVar15;
  uint uVar16;
  uint uVar17;
  byte *pbVar18;
  byte *pbVar19;
  long lVar20;
  byte *pbVar21;
  long lVar22;
  char *pcVar23;
  byte **ppbVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  byte bVar28;
  byte bVar29;
  byte *local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  bVar29 = 0;
  if (param_4 < 2) {
    return;
  }
  uVar17 = 1;
LAB_00403c2c:
  lVar22 = (long)(int)uVar17 * 8;
  pbVar14 = *(byte **)(param_3 + (long)(int)uVar17 * 8);
  uVar16 = uVar17;
  if (pbVar14 != (byte *)0x0) {
    bVar25 = *pbVar14 < 0x2d;
    bVar26 = *pbVar14 == 0x2d;
    bVar27 = bVar26;
    if (bVar26) {
      bVar25 = (byte *)0xfffffffffffffffe < pbVar14;
      pbVar14 = pbVar14 + 1;
      bVar27 = pbVar14 == (byte *)0x0;
    }
    lVar13 = 6;
    pbVar21 = pbVar14;
    pbVar19 = (byte *)0x40c054;
    do {
      if (lVar13 == 0) break;
      lVar13 = lVar13 + -1;
      bVar25 = *pbVar21 < *pbVar19;
      bVar27 = *pbVar21 == *pbVar19;
      pbVar21 = pbVar21 + (ulong)bVar29 * -2 + 1;
      pbVar19 = pbVar19 + (ulong)bVar29 * -2 + 1;
    } while (bVar27);
    if ((!bVar25 && !bVar27) != bVar25) {
      lVar13 = 0;
      pcVar23 = "parenb";
LAB_00403c9b:
      lVar20 = (long)(int)lVar13;
      iVar4 = strcmp((char *)pbVar14,pcVar23);
      if (iVar4 != 0) goto LAB_00403c80;
      bVar27 = ((&DAT_0040c9cc)[lVar20 * 0x20] & 0x10) == 0;
      if (!bVar27) goto LAB_00403cc6;
      if (bVar26) {
        if (((&DAT_0040c9cc)[lVar20 * 0x20] & 4) == 0) {
          *param_7 = 1;
          goto LAB_0040421b;
        }
        puVar8 = (uint *)FUN_00402750((&DAT_0040c9c8)[lVar20 * 8],param_5);
        if (puVar8 != (uint *)0x0) {
          *puVar8 = *puVar8 & ~((uint)(&DAT_0040c9d0)[lVar20 * 4] |
                               *(uint *)(&DAT_0040c9d8 + lVar20 * 4));
          *param_7 = 1;
          goto LAB_00403c1f;
        }
        iVar4 = strcmp(pcVar23,"evenp");
        if (((iVar4 == 0) || (iVar4 = strcmp(pcVar23,"parity"), iVar4 == 0)) ||
           (iVar4 = strcmp(pcVar23,"oddp"), iVar4 == 0)) {
          param_5->c_cflag = param_5->c_cflag & 0xfffffecf | 0x30;
          goto LAB_00403eb1;
        }
      }
      else {
        puVar8 = (uint *)FUN_00402750((&DAT_0040c9c8)[lVar20 * 8],param_5);
        if (puVar8 != (uint *)0x0) {
          *puVar8 = ~*(uint *)(&DAT_0040c9d8 + lVar20 * 4) & *puVar8 |
                    *(uint *)(&DAT_0040c9d0 + lVar20 * 4);
          *param_7 = 1;
          goto LAB_00403c1f;
        }
        iVar4 = strcmp(pcVar23,"evenp");
        if ((iVar4 == 0) || (iVar4 = strcmp(pcVar23,"parity"), iVar4 == 0)) {
          param_5->c_cflag = param_5->c_cflag & 0xfffffccf | 0x120;
          *param_7 = 1;
          goto LAB_00403c1f;
        }
        iVar4 = strcmp(pcVar23,"oddp");
        if (iVar4 == 0) {
          param_5->c_cflag = param_5->c_cflag & 0xfffffccf | 800;
          goto LAB_00403eb1;
        }
      }
      iVar4 = strcmp(pcVar23,"nl");
      if (iVar4 == 0) {
        if (bVar26) {
          param_5->c_oflag = param_5->c_oflag & 0xffffffd3 | 4;
          param_5->c_iflag = param_5->c_iflag & 0xfffffe3f | 0x100;
          *param_7 = 1;
        }
        else {
          *(ulong *)param_5 = *(ulong *)param_5 & 0xfffffffbfffffeff;
          *param_7 = 1;
        }
        goto LAB_00403c1f;
      }
      iVar4 = strcmp(pcVar23,"ek");
      if (iVar4 == 0) {
        *(undefined2 *)(param_5->c_cc + 2) = 0x157f;
        *param_7 = 1;
        goto LAB_00403c1f;
      }
      iVar4 = strcmp(pcVar23,"sane");
      if (iVar4 == 0) {
        ppuVar15 = &PTR_DAT_0040c7e0;
        while (*ppuVar15 != (undefined *)0x0) {
          param_5->c_cc[(long)ppuVar15[2]] = *(cc_t *)(ppuVar15 + 1);
          ppuVar15 = ppuVar15 + 3;
        }
        for (ppuVar15 = &PTR_s_parenb_0040c9c0; *ppuVar15 != (undefined *)0x0;
            ppuVar15 = ppuVar15 + 4) {
          bVar28 = *(byte *)((long)ppuVar15 + 0xc);
          if ((bVar28 & 0x10) == 0) {
            if ((bVar28 & 1) == 0) {
              if ((bVar28 & 2) != 0) {
                puVar8 = (uint *)FUN_00402750(*(undefined4 *)(ppuVar15 + 1),param_5);
                if (puVar8 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
                  __assert_fail("bitsp","src/stty.c",0x8d1,"sane_mode");
                }
                *puVar8 = *puVar8 & ~((uint)ppuVar15[2] | *(uint *)(ppuVar15 + 3));
              }
            }
            else {
              puVar8 = (uint *)FUN_00402750(*(undefined4 *)(ppuVar15 + 1),param_5);
              if (puVar8 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
                __assert_fail("bitsp","src/stty.c",0x8cb,"sane_mode");
              }
              *puVar8 = ~*(uint *)(ppuVar15 + 3) & *puVar8 | *(uint *)(ppuVar15 + 2);
            }
          }
        }
        goto LAB_00403eb1;
      }
      iVar4 = strcmp(pcVar23,"cbreak");
      if (iVar4 == 0) {
        uVar17 = param_5->c_lflag;
        if (!bVar26) goto LAB_00404431;
        param_5->c_lflag = uVar17 | 2;
        *param_7 = 1;
        goto LAB_00403c1f;
      }
      iVar4 = strcmp(pcVar23,"pass8");
      if (iVar4 == 0) {
        uVar17 = param_5->c_cflag & 0xfffffecf;
        if (bVar26) {
          param_5->c_cflag = uVar17 | 0x120;
          param_5->c_iflag = param_5->c_iflag | 0x20;
          *param_7 = 1;
        }
        else {
          param_5->c_cflag = uVar17 | 0x30;
          param_5->c_iflag = param_5->c_iflag & 0xffffffdf;
          *param_7 = 1;
        }
        goto LAB_00403c1f;
      }
      iVar4 = strcmp(pcVar23,"litout");
      if (iVar4 == 0) {
        uVar17 = param_5->c_cflag & 0xfffffecf;
        if (bVar26) {
          *(ulong *)param_5 = *(ulong *)param_5 | 0x100000020;
          param_5->c_cflag = uVar17 | 0x120;
          *param_7 = 1;
        }
        else {
          param_5->c_cflag = uVar17 | 0x30;
          *(ulong *)param_5 = *(ulong *)param_5 & 0xfffffffeffffffdf;
          *param_7 = 1;
        }
        goto LAB_00403c1f;
      }
      iVar4 = strcmp(pcVar23,"raw");
      if ((iVar4 == 0) || (iVar4 = strcmp(pcVar23,"cooked"), iVar4 == 0)) {
        if (*pcVar23 == 'r') {
          if (bVar26) goto LAB_00404791;
        }
        else if ((*pcVar23 == 'c') && (!bVar26)) {
LAB_00404791:
          param_5->c_lflag = param_5->c_lflag | 3;
          *(ulong *)param_5 = *(ulong *)param_5 | 0x100000526;
          *param_7 = 1;
          goto LAB_00403c1f;
        }
        param_5->c_iflag = 0;
        param_5->c_oflag = param_5->c_oflag & 0xfffffffe;
        param_5->c_lflag = param_5->c_lflag & 0xfffffff8;
        *(undefined2 *)(param_5->c_cc + 5) = 0x100;
        *param_7 = 1;
        goto LAB_00403c1f;
      }
      iVar4 = strcmp(pcVar23,"decctlq");
      if (iVar4 == 0) {
        if (bVar26) {
          param_5->c_iflag = param_5->c_iflag | 0x800;
          *param_7 = 1;
        }
        else {
          param_5->c_iflag = param_5->c_iflag & 0xfffff7ff;
          *param_7 = 1;
        }
        goto LAB_00403c1f;
      }
      iVar4 = strcmp(pcVar23,"tabs");
      if (iVar4 == 0) {
        if (bVar26) {
          param_5->c_oflag = param_5->c_oflag | 0x1800;
          *param_7 = 1;
        }
        else {
          param_5->c_oflag = param_5->c_oflag & 0xffffe7ff;
          *param_7 = 1;
        }
        goto LAB_00403c1f;
      }
      iVar4 = strcmp(pcVar23,"lcase");
      if ((iVar4 == 0) || (iVar4 = strcmp(pcVar23,"LCASE"), iVar4 == 0)) {
        if (bVar26) {
          *(ulong *)param_5 = *(ulong *)param_5 & 0xfffffffdfffffdff;
          param_5->c_lflag = param_5->c_lflag & 0xfffffffb;
          *param_7 = 1;
        }
        else {
          param_5->c_lflag = param_5->c_lflag | 4;
          *(ulong *)param_5 = *(ulong *)param_5 | 0x200000200;
          *param_7 = 1;
        }
      }
      else {
        iVar4 = strcmp(pcVar23,"crt");
        if (iVar4 == 0) {
          param_5->c_lflag = param_5->c_lflag | 0xa10;
          *param_7 = 1;
        }
        else {
          iVar4 = strcmp(pcVar23,"dec");
          if (iVar4 != 0) goto LAB_00403eb1;
          param_5->c_iflag = param_5->c_iflag & 0xfffff7ff;
          param_5->c_cc[0] = '\x03';
          *(undefined2 *)(param_5->c_cc + 2) = 0x157f;
          param_5->c_lflag = param_5->c_lflag | 0xa10;
          *param_7 = 1;
        }
      }
      goto LAB_00403c1f;
    }
    DAT_00613230 = bVar26 ^ 1;
  }
  goto LAB_00403c1f;
LAB_00403c80:
  lVar13 = lVar13 + 1;
  pcVar23 = (&PTR_s_parenb_0040c9c0)[lVar13 * 4];
  if (pcVar23 == (char *)0x0) goto LAB_00403d60;
  goto LAB_00403c9b;
LAB_00403d60:
  if (bVar26) {
LAB_0040421b:
    uVar10 = FUN_00406670(pbVar14 + -1);
    pcVar23 = "invalid argument %s";
LAB_0040440f:
    uVar11 = dcgettext(0,pcVar23,5);
    error(0,0,uVar11,uVar10);
    uVar17 = FUN_00402d90(1);
LAB_00404431:
    param_5->c_lflag = uVar17 & 0xfffffffd;
    *param_7 = 1;
  }
  else {
    iVar4 = 0;
    pbVar21 = &DAT_0040bf49;
    ppbVar24 = &PTR_DAT_0040c7f8;
    do {
      iVar6 = strcmp((char *)pbVar14,(char *)pbVar21);
      if (iVar6 == 0) {
        if ((param_4 - 1U == uVar17) ||
           (pbVar19 = *(byte **)(param_3 + 8 + lVar22), pbVar19 == (byte *)0x0)) goto LAB_004043fa;
        lVar22 = 4;
        bVar27 = 0xfffffffe < uVar17;
        bVar25 = uVar17 + 1 == 0;
        pbVar14 = pbVar21;
        pbVar18 = &DAT_0040bfd2;
        goto code_r0x00403dda;
      }
      pbVar21 = *ppbVar24;
      iVar4 = iVar4 + 1;
      bVar27 = pbVar21 == (byte *)0x0;
      ppbVar24 = ppbVar24 + 3;
    } while (!bVar27);
LAB_00403cc6:
    bVar25 = false;
    lVar13 = 7;
    pbVar21 = pbVar14;
    pbVar19 = (byte *)"ispeed";
    do {
      if (lVar13 == 0) break;
      lVar13 = lVar13 + -1;
      bVar25 = *pbVar21 < *pbVar19;
      bVar27 = *pbVar21 == *pbVar19;
      pbVar21 = pbVar21 + (ulong)bVar29 * -2 + 1;
      pbVar19 = pbVar19 + (ulong)bVar29 * -2 + 1;
    } while (bVar27);
    bVar26 = false;
    bVar27 = (!bVar25 && !bVar27) == bVar25;
    if (bVar27) {
      if ((param_4 - 1U == uVar17) || (*(long *)(param_3 + 8 + lVar22) == 0)) {
LAB_004043fa:
        uVar10 = FUN_00406670(pbVar14);
        pcVar23 = "missing argument to %s";
        goto LAB_0040440f;
      }
      uVar16 = uVar17 + 1;
      if (param_1 == '\0') {
        sVar5 = FUN_00402680();
        uVar17 = uVar17 + 2;
        cfsetispeed(param_5,sVar5);
        *param_6 = 1;
        *param_7 = 1;
        goto joined_r0x00403c26;
      }
    }
    else {
      lVar13 = 7;
      pbVar21 = pbVar14;
      pbVar19 = (byte *)"ospeed";
      do {
        if (lVar13 == 0) break;
        lVar13 = lVar13 + -1;
        bVar26 = *pbVar21 < *pbVar19;
        bVar27 = *pbVar21 == *pbVar19;
        pbVar21 = pbVar21 + (ulong)bVar29 * -2 + 1;
        pbVar19 = pbVar19 + (ulong)bVar29 * -2 + 1;
      } while (bVar27);
      bVar25 = false;
      bVar27 = (!bVar26 && !bVar27) == bVar26;
      if (bVar27) {
        if ((param_4 - 1U == uVar17) || (*(long *)(param_3 + 8 + lVar22) == 0)) goto LAB_004043fa;
        uVar17 = uVar17 + 1;
        uVar16 = uVar17;
        if (param_1 == '\0') {
          sVar5 = FUN_00402680();
LAB_00403ea4:
          cfsetospeed(param_5,sVar5);
          *param_6 = 1;
LAB_00403eb1:
          *param_7 = 1;
          uVar16 = uVar17;
        }
      }
      else {
        lVar13 = 5;
        pbVar21 = pbVar14;
        pbVar19 = &DAT_0040bfeb;
        do {
          if (lVar13 == 0) break;
          lVar13 = lVar13 + -1;
          bVar25 = *pbVar21 < *pbVar19;
          bVar27 = *pbVar21 == *pbVar19;
          pbVar21 = pbVar21 + (ulong)bVar29 * -2 + 1;
          pbVar19 = pbVar19 + (ulong)bVar29 * -2 + 1;
        } while (bVar27);
        bVar26 = false;
        bVar27 = (!bVar25 && !bVar27) == bVar25;
        if (bVar27) {
          if ((param_4 - 1U == uVar17) || (lVar22 = *(long *)(param_3 + 8 + lVar22), lVar22 == 0))
          goto LAB_004043fa;
          uVar16 = uVar17 + 1;
          if (param_1 == '\0') {
            uVar7 = FUN_00402ab0(lVar22,0x7fffffff);
            FUN_00402bd0(uVar7,0xffffffff,param_2);
          }
        }
        else {
          lVar13 = 5;
          pbVar21 = pbVar14;
          pbVar19 = &DAT_0040bff0;
          do {
            if (lVar13 == 0) break;
            lVar13 = lVar13 + -1;
            bVar26 = *pbVar21 < *pbVar19;
            bVar27 = *pbVar21 == *pbVar19;
            pbVar21 = pbVar21 + (ulong)bVar29 * -2 + 1;
            pbVar19 = pbVar19 + (ulong)bVar29 * -2 + 1;
          } while (bVar27);
          if (((!bVar26 && !bVar27) == bVar26) ||
             (iVar4 = strcmp((char *)pbVar14,"columns"), iVar4 == 0)) {
            if ((param_4 - 1U == uVar17) || (lVar22 = *(long *)(param_3 + 8 + lVar22), lVar22 == 0))
            goto LAB_004043fa;
            uVar16 = uVar17 + 1;
            if (param_1 == '\0') {
              uVar7 = FUN_00402ab0(lVar22,0x7fffffff);
              FUN_00402bd0(0xffffffff,uVar7,param_2);
            }
          }
          else {
            iVar4 = strcmp((char *)pbVar14,"size");
            if (iVar4 == 0) {
              if (param_1 == '\0') {
                DAT_006133e0 = FUN_004026e0();
                DAT_006133dc = 0;
                FUN_00402ca0(0,param_2);
              }
            }
            else {
              iVar4 = strcmp((char *)pbVar14,"line");
              if (iVar4 == 0) {
                if (param_4 - 1U != uVar17) {
                  plVar1 = (long *)(param_3 + 8 + lVar22);
                  lVar22 = *plVar1;
                  if (lVar22 != 0) {
                    uVar17 = uVar17 + 1;
                    uVar9 = FUN_00402ab0(lVar22,0xffffffffffffffff);
                    param_5->c_line = (cc_t)uVar9;
                    if ((uVar9 & 0xffffffffffffff00) != 0) {
                      uVar10 = FUN_00406670(*plVar1);
                      uVar11 = dcgettext(0,"invalid line discipline %s",5);
                      error(0,0,uVar11,uVar10);
                    }
                    goto LAB_00403eb1;
                  }
                }
                goto LAB_004043fa;
              }
              iVar4 = strcmp((char *)pbVar14,"speed");
              if (iVar4 == 0) {
                if (param_1 == '\0') {
                  DAT_006133e0 = FUN_004026e0();
                  FUN_00402930(param_5,0);
                }
              }
              else {
                sVar5 = FUN_00402680(pbVar14);
                if (sVar5 == 0xffffffff) {
                  piVar12 = __errno_location();
                  lVar22 = 0;
                  pbVar21 = pbVar14;
                  do {
                    *piVar12 = 0;
                    uVar9 = strtoul((char *)pbVar21,(char **)&local_50,0x10);
                    if ((((*piVar12 != 0) || (*local_50 != 0x3a)) || (local_50 == pbVar21)) ||
                       (uVar9 != (uVar9 & 0xffffffff))) goto LAB_00404631;
                    *(int *)((long)&local_48 + lVar22 * 4) = (int)uVar9;
                    lVar22 = lVar22 + 1;
                    pbVar21 = local_50 + 1;
                  } while (lVar22 != 4);
                  lVar22 = 0;
                  bVar28 = 0x3a;
                  *(undefined8 *)param_5 = local_48;
                  *(undefined8 *)&param_5->c_cflag = local_40;
                  while( true ) {
                    *piVar12 = 0;
                    uVar9 = strtoul((char *)pbVar21,(char **)&local_50,0x10);
                    if (((*piVar12 != 0) || (*local_50 != bVar28)) ||
                       ((bVar28 = pbVar21 == local_50, (bool)bVar28 ||
                        ((uVar9 & 0xffffffffffffff00) != 0)))) break;
                    pbVar21 = local_50 + 1;
                    param_5->c_cc[lVar22] = (cc_t)uVar9;
                    lVar22 = lVar22 + 1;
                    if (lVar22 == 0x20) goto LAB_00403eb1;
                    if (lVar22 != 0x1f) {
                      bVar28 = 0x3a;
                    }
                  }
LAB_00404631:
                  uVar10 = FUN_00406670(pbVar14);
                  pcVar23 = "invalid argument %s";
                  goto LAB_0040440f;
                }
                if (param_1 == '\0') {
                  cfsetispeed(param_5,sVar5);
                  goto LAB_00403ea4;
                }
              }
            }
          }
        }
      }
    }
  }
  goto LAB_00403c1f;
  while( true ) {
    lVar22 = lVar22 + -1;
    bVar27 = *pbVar14 < *pbVar18;
    bVar25 = *pbVar14 == *pbVar18;
    pbVar14 = pbVar14 + (ulong)bVar29 * -2 + 1;
    pbVar18 = pbVar18 + (ulong)bVar29 * -2 + 1;
    if (!bVar25) break;
code_r0x00403dda:
    if (lVar22 == 0) break;
  }
  bVar26 = false;
  bVar27 = (!bVar27 && !bVar25) == bVar27;
  if (bVar27) {
LAB_00403f7e:
    bVar3 = FUN_00402ab0(pbVar19,0xff);
  }
  else {
    lVar22 = 5;
    pbVar14 = &DAT_0040bfd6;
    do {
      if (lVar22 == 0) break;
      lVar22 = lVar22 + -1;
      bVar26 = *pbVar21 < *pbVar14;
      bVar27 = *pbVar21 == *pbVar14;
      pbVar21 = pbVar21 + (ulong)bVar29 * -2 + 1;
      pbVar14 = pbVar14 + (ulong)bVar29 * -2 + 1;
    } while (bVar27);
    if ((!bVar26 && !bVar27) == bVar26) goto LAB_00403f7e;
    bVar28 = *pbVar19;
    bVar3 = bVar28;
    if ((bVar28 != 0) && (bVar2 = pbVar19[1], bVar2 != 0)) {
      iVar6 = strcmp((char *)pbVar19,"^-");
      bVar3 = 0;
      if ((iVar6 != 0) && (iVar6 = strcmp((char *)pbVar19,"undef"), iVar6 != 0)) {
        if (bVar28 != 0x5e) goto LAB_00403f7e;
        if (bVar2 == 0x3f) {
          bVar3 = 0x7f;
        }
        else {
          bVar3 = bVar2 & 0x9f;
        }
      }
    }
  }
  param_5->c_cc[(&DAT_0040c7f0)[(long)iVar4 * 3]] = bVar3;
  *param_7 = 1;
  uVar16 = uVar17 + 1;
LAB_00403c1f:
  uVar17 = uVar16 + 1;
joined_r0x00403c26:
  if (param_4 <= (int)uVar17) {
    return;
  }
  goto LAB_00403c2c;
}


void FUN_00404920(undefined8 param_1)

{
  DAT_006133f0 = param_1;
  return;
}


void FUN_00404930(undefined param_1)

{
  DAT_006133e8 = param_1;
  return;
}


void FUN_00404940(void)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  iVar1 = FUN_00408b40(stdout);
  if (iVar1 != 0) {
    piVar2 = __errno_location();
    if ((DAT_006133e8 == '\0') || (*piVar2 != 0x20)) {
      uVar3 = dcgettext(0,"write error",5);
      if (DAT_006133f0 == 0) {
        error(0,*piVar2,"%s",uVar3);
      }
      else {
        uVar4 = FUN_004064c0();
        error(0,*piVar2,"%s: %s",uVar4,uVar3);
      }
      goto LAB_004049be;
    }
  }
  iVar1 = FUN_00408b40(stderr);
  if (iVar1 == 0) {
    return;
  }
LAB_004049be:
                    /* WARNING: Subroutine does not return */
  _exit(DAT_00613240);
}


int FUN_004049e0(int param_1,char *param_2,int param_3,uint param_4)

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


void FUN_00404a50(byte *param_1)

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
        pbVar6 = &DAT_0040f760;
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
  DAT_006133f8 = param_1;
  program_invocation_name = param_1;
  return;
}


char * FUN_00404af0(char *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  byte *pbVar3;
  
  pcVar2 = (char *)dcgettext(0,param_1,5);
  if (param_1 == pcVar2) {
    pbVar3 = (byte *)FUN_00408c00();
    if ((*pbVar3 & 0xdf) == 0x55) {
      if (((((pbVar3[1] & 0xdf) != 0x54) || ((pbVar3[2] & 0xdf) != 0x46)) || (pbVar3[3] != 0x2d)) ||
         ((pbVar3[4] != 0x38 || (pbVar3[5] != 0)))) {
LAB_00404bc8:
        pcVar2 = "\"";
        if (param_2 != 9) {
          pcVar2 = "\'";
        }
        return pcVar2;
      }
      cVar1 = *pcVar2;
      pcVar2 = &DAT_0040f771;
      if (cVar1 != '`') {
        pcVar2 = &DAT_0040f766;
      }
    }
    else {
      if (((((*pbVar3 & 0xdf) != 0x47) || ((pbVar3[1] & 0xdf) != 0x42)) || (pbVar3[2] != 0x31)) ||
         (((pbVar3[3] != 0x38 || (pbVar3[4] != 0x30)) ||
          ((pbVar3[5] != 0x33 || ((pbVar3[6] != 0x30 || (pbVar3[7] != 0)))))))) goto LAB_00404bc8;
      cVar1 = *pcVar2;
      pcVar2 = &DAT_0040f76d;
      if (cVar1 != '`') {
        pcVar2 = &DAT_0040f76a;
      }
    }
  }
  return pcVar2;
}


ulong FUN_00404bf0(undefined *param_1,ulong param_2,char *param_3,ulong param_4,int param_5,
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
LAB_00405841:
    if (param_2 != 0) {
      bVar3 = false;
      local_5b = false;
      bVar2 = true;
      local_70 = 0;
      goto LAB_00405476;
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
      goto LAB_00405841;
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
      param_8 = (char *)FUN_00404af0(&DAT_0040f775,param_5);
      param_9 = (char *)FUN_00404af0(&DAT_00411007);
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
LAB_00404c88:
  uVar22 = 0;
  bVar5 = local_5b;
LAB_00404c98:
  bVar23 = param_4 != uVar22;
  if (param_4 == 0xffffffffffffffff) {
    bVar23 = param_3[uVar22] != '\0';
  }
  bVar26 = bVar6;
  if (!bVar23) goto LAB_00405418;
  bVar20 = (bool)(param_5 != 2 & bVar6);
  __s1 = (byte *)(param_3 + uVar22);
  uVar16 = uVar15;
  bVar4 = bVar3;
  if (bVar20) {
    if (local_a0 == 0) {
LAB_00405390:
      uVar19 = (ulong)*__s1;
      switch(uVar19) {
      case 0:
        goto switchD_004053a2_caseD_0;
      default:
        bVar20 = false;
        goto switchD_0040520e_caseD_1;
      case 7:
        bVar17 = 0x61;
        goto LAB_004050a5;
      case 8:
        bVar17 = 0x62;
        break;
      case 9:
switchD_004053a2_caseD_9:
        bVar17 = 0x74;
        break;
      case 10:
switchD_004053a2_caseD_a:
        bVar17 = 0x6e;
        break;
      case 0xb:
switchD_004053a2_caseD_b:
        bVar17 = 0x76;
        goto LAB_004050a5;
      case 0xc:
switchD_004053a2_caseD_c:
        bVar17 = 0x66;
LAB_004050a5:
        if (local_5c) {
          bVar25 = false;
          goto LAB_00404ff8;
        }
LAB_004050b0:
        bVar23 = false;
        goto LAB_00404e6b;
      case 0xd:
        bVar20 = false;
switchD_00404d88_caseD_d:
        bVar25 = param_5 == 2;
        uVar19 = 0xd;
        bVar13 = 0x72;
        goto LAB_00404fc0;
      case 0x20:
        bVar25 = false;
LAB_004053ea:
        uVar19 = 0x20;
        goto LAB_004053b2;
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
switchD_00404d88_caseD_21:
        bVar25 = false;
        goto LAB_00404fcb;
      case 0x23:
      case 0x7e:
        bVar26 = false;
LAB_004053ca:
        if (uVar22 == 0) {
          bVar25 = false;
          bVar23 = bVar20;
          bVar20 = bVar26;
          goto LAB_00404dd8;
        }
        bVar23 = false;
        goto LAB_00404def;
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
LAB_004053b2:
        bVar24 = false;
        bVar23 = bVar20;
        bVar20 = bVar25;
        goto LAB_00404df1;
      case 0x27:
        bVar20 = false;
        goto switchD_0040520e_caseD_27;
      case 0x3f:
        bVar20 = false;
        goto switchD_0040520e_caseD_3f;
      case 0x5c:
        bVar20 = false;
        goto switchD_00404d88_caseD_5c;
      case 0x7b:
      case 0x7d:
        bVar20 = false;
        goto switchD_0040520e_caseD_7b;
      }
      bVar25 = false;
      bVar23 = false;
      goto joined_r0x00404fe7;
    }
    if ((param_4 == 0xffffffffffffffff) && (1 < local_a0)) {
      param_4 = strlen(param_3);
    }
    if ((param_4 < uVar22 + local_a0) || (iVar7 = memcmp(__s1,local_78,local_a0), iVar7 != 0))
    goto LAB_00405390;
    if (!local_5c) {
      uVar19 = (ulong)*__s1;
      bVar25 = bVar20;
      switch(uVar19) {
      case 0:
        goto switchD_00404d88_caseD_0;
      default:
        goto switchD_0040520e_caseD_1;
      case 7:
        bVar17 = 0x61;
        goto LAB_004050b0;
      case 8:
        bVar25 = false;
        bVar23 = false;
        bVar17 = 0x62;
        break;
      case 9:
        goto switchD_004053a2_caseD_9;
      case 10:
        goto switchD_004053a2_caseD_a;
      case 0xb:
        goto switchD_004053a2_caseD_b;
      case 0xc:
        goto switchD_004053a2_caseD_c;
      case 0xd:
        goto switchD_00404d88_caseD_d;
      case 0x20:
        goto LAB_004053ea;
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
        goto switchD_00404d88_caseD_21;
      case 0x23:
      case 0x7e:
        bVar26 = bVar20;
        goto LAB_004053ca;
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
        goto LAB_004053b2;
      case 0x27:
        goto switchD_0040520e_caseD_27;
      case 0x3f:
        goto switchD_0040520e_caseD_3f;
      case 0x5c:
        goto switchD_00404d88_caseD_5c;
      case 0x7b:
      case 0x7d:
        goto switchD_0040520e_caseD_7b;
      }
      goto LAB_00404e32;
    }
    goto LAB_0040500a;
  }
  uVar19 = (ulong)*__s1;
  switch(uVar19) {
  case 0:
    if (bVar6) {
switchD_004053a2_caseD_0:
      if (!local_5c) {
        bVar20 = false;
switchD_00404d88_caseD_0:
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
            goto LAB_00404ee8;
          }
LAB_0040512a:
          param_1[uVar16] = 0x5c;
          uVar15 = uVar16;
        }
        else if (uVar15 < uVar9) goto LAB_0040512a;
        uVar16 = uVar15 + 1;
        bVar24 = bVar23;
        if (param_5 == 2) {
          bVar17 = 0x30;
          bVar23 = false;
          bVar4 = bVar3;
          goto LAB_00404ee8;
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
LAB_00405169:
        bVar17 = (byte)uVar19;
        bVar23 = false;
        uVar15 = uVar16;
        bVar4 = bVar3;
        if ((bool)(bVar6 ^ 1U | bVar26)) goto LAB_00404ee8;
        goto LAB_00404df1;
      }
      bVar26 = param_5 == 2;
      goto LAB_00404ffc;
    }
    if ((param_6 & 1) == 0) {
      bVar25 = param_5 == 2;
      uVar19 = 0;
      bVar23 = false;
      bVar20 = false;
      goto LAB_00404dd8;
    }
    uVar22 = uVar22 + 1;
    goto LAB_00404c98;
  default:
switchD_0040520e_caseD_1:
    bVar25 = bVar6;
    if (sVar8 != 1) {
      local_40[0] = (mbstate_t)0x0;
      if (param_4 == 0xffffffffffffffff) {
        param_4 = strlen(param_3);
      }
      uVar21 = 0;
      do {
        uVar1 = uVar22 + uVar21;
        lVar11 = FUN_00408a60(&local_44,param_3 + uVar1,param_4 - uVar1,local_40);
        if (lVar11 == 0) break;
        if (lVar11 == -1) {
          bVar23 = false;
          goto LAB_00405b1a;
        }
        if (lVar11 == -2) {
          if ((param_4 <= uVar1) || (param_3[uVar1] == '\0')) goto LAB_00405c57;
          goto LAB_00405c47;
        }
        if (((param_5 == 2) && (local_5c)) && (lVar11 != 1)) {
          pcVar12 = param_3 + uVar1 + 1;
          do {
            if (((byte)(*pcVar12 + 0xa5U) < 0x22) &&
               ((1L << (*pcVar12 + 0xa5U & 0x3f) & 0x20000002bU) != 0)) {
              param_5 = 2;
              goto LAB_00404ffc;
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
      goto LAB_00405b1a;
    }
    ppuVar10 = __ctype_b_loc();
    uVar21 = 1;
    bVar25 = ((*ppuVar10)[uVar19] & 0x4000) == 0;
    bVar23 = !bVar25;
    bVar25 = (bool)(bVar25 & bVar6);
    goto LAB_004051e4;
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
    goto LAB_00405222;
  case 10:
    uVar19 = 10;
    bVar13 = 0x6e;
    goto LAB_00405222;
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
LAB_00405222:
    bVar25 = param_5 == 2;
    bVar20 = (bool)(local_5c & bVar25);
    if (bVar20) {
LAB_0040523a:
      param_5 = 2;
      goto LAB_00404ffc;
    }
    break;
  case 0x20:
    uVar19 = 0x20;
    goto LAB_00404dc6;
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
LAB_00404dc6:
    bVar25 = param_5 == 2;
    if ((local_5c) && (bVar25)) goto LAB_0040523a;
    goto LAB_00404dd8;
  case 0x23:
  case 0x7e:
LAB_00404dbd:
    bVar25 = param_5 == 2;
    if (uVar22 == 0) goto LAB_00404dc6;
    goto LAB_00404fcb;
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
    goto switchD_0040520e_caseD_25;
  case 0x27:
switchD_0040520e_caseD_27:
    bVar5 = bVar23;
    if (param_5 != 2) {
      bVar25 = false;
      uVar19 = 0x27;
      goto LAB_00404dd8;
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
      goto LAB_00404ee8;
    }
    goto LAB_00404ffc;
  case 0x3f:
switchD_0040520e_caseD_3f:
    if (param_5 == 2) {
      if (!local_5c) {
        bVar17 = 0x3f;
        bVar24 = false;
        bVar23 = false;
        goto LAB_00404ee8;
      }
      goto LAB_00404ffc;
    }
    if (param_5 != 5) {
      bVar25 = param_5 == 2;
      uVar19 = 0x3f;
      bVar23 = false;
      goto LAB_00404dd8;
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
        goto LAB_00405169;
      }
      goto LAB_0040500a;
    }
    bVar25 = false;
    uVar19 = 0x3f;
    bVar23 = false;
    goto LAB_00404dd8;
  case 0x5c:
    if (param_5 != 2) {
switchD_00404d88_caseD_5c:
      uVar19 = 0x5c;
      bVar17 = 0x5c;
      bVar13 = 0x5c;
      bVar25 = (bool)(bVar6 & local_5c & local_a0 != 0);
      if (!bVar25) break;
      uVar22 = uVar22 + 1;
      bVar23 = false;
      goto LAB_00404f04;
    }
    if (local_5c) goto LAB_00404ffc;
    uVar22 = uVar22 + 1;
    bVar23 = false;
    bVar17 = 0x5c;
    goto LAB_00404f04;
  case 0x7b:
  case 0x7d:
switchD_0040520e_caseD_7b:
    bVar24 = param_4 != 1;
    if (param_4 == 0xffffffffffffffff) {
      bVar24 = param_3[1] != '\0';
    }
    bVar25 = param_5 == 2;
    if (!bVar24) goto LAB_00404dbd;
    goto LAB_00404fcb;
  }
LAB_00404fc0:
  if (!bVar6) {
LAB_00404fcb:
    bVar23 = false;
    goto LAB_00404dd8;
  }
  bVar23 = false;
  bVar17 = bVar13;
  goto joined_r0x00404fe7;
LAB_00405418:
  if ((uVar15 == 0) && ((bool)(local_5c & param_5 == 2))) {
    param_5 = 2;
LAB_00404ffc:
    if (bVar26) {
      param_5 = 4;
    }
LAB_0040500a:
    uVar9 = FUN_00404bf0(param_1,uVar9,param_3,param_4,param_5,param_6 & 0xfffffffd,0,param_8,
                         param_9);
    return uVar9;
  }
  bVar26 = (bool)(param_5 == 2 & (local_5c ^ 1U));
  bVar23 = (bool)(local_5c ^ 1U);
  if ((!bVar26) || (bVar23 = bVar26, !bVar5)) {
LAB_00405ced:
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
    uVar9 = FUN_00404bf0(param_1,local_70,param_3,param_4,5,param_6,param_7,param_8,param_9);
    return uVar9;
  }
  local_5b = uVar9 == 0 && local_70 != 0;
  param_2 = local_70;
  bVar23 = bVar5;
  if (uVar9 != 0 || local_70 == 0) goto LAB_00405ced;
LAB_00405476:
  *param_1 = 0x27;
  param_5 = 2;
  uVar15 = 1;
  local_78 = "\'";
  local_a0 = 1;
  local_5c = false;
  uVar9 = param_2;
  goto LAB_00404c88;
  while (__s1[uVar21] != 0) {
LAB_00405c47:
    uVar21 = uVar21 + 1;
    if (param_4 <= uVar22 + uVar21) break;
  }
LAB_00405c57:
  bVar23 = false;
LAB_00405b1a:
  if (1 < uVar21) {
LAB_004056de:
    bVar26 = false;
    uVar21 = uVar21 + uVar22;
    uVar16 = uVar22;
    do {
      bVar17 = (byte)uVar19;
      if (bVar25) {
        bVar26 = param_5 == 2;
        if (local_5c) goto LAB_00404ffc;
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
        if (uVar21 <= uVar22) goto LAB_00404e7d;
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
        if (uVar21 <= uVar22) goto LAB_00404f04;
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
LAB_004051e4:
  if (bVar25) {
    bVar23 = false;
    bVar25 = bVar6;
    goto LAB_004056de;
  }
switchD_0040520e_caseD_25:
  bVar25 = param_5 == 2;
LAB_00404dd8:
  bVar17 = (byte)uVar19;
  bVar24 = (bool)((bVar6 ^ 1U | bVar25) ^ 1 | local_5c);
  bVar26 = bVar20;
  if (bVar24) {
LAB_00404def:
    bVar24 = false;
    bVar20 = bVar26;
LAB_00404df1:
    bVar17 = (byte)uVar19;
    uVar16 = uVar15;
    bVar4 = bVar3;
    if ((param_7 == 0) || ((*(uint *)(param_7 + (uVar19 >> 5) * 4) >> (bVar17 & 0x1f) & 1) == 0))
    goto LAB_00404ee8;
    bVar25 = param_5 == 2;
  }
  else {
LAB_00404ee8:
    bVar25 = param_5 == 2;
    uVar15 = uVar16;
    bVar3 = bVar4;
    if (!bVar20) {
      uVar22 = uVar22 + 1;
      bVar3 = (bool)((bVar24 ^ 1U) & bVar4);
LAB_00404f04:
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
      goto LAB_00404e7d;
    }
  }
joined_r0x00404fe7:
  if (local_5c) {
LAB_00404ff8:
    bVar26 = (bool)(bVar6 & bVar25);
    goto LAB_00404ffc;
  }
LAB_00404e32:
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
LAB_00404e6b:
  if (uVar15 < uVar9) {
    param_1[uVar15] = 0x5c;
  }
  uVar15 = uVar15 + 1;
  uVar22 = uVar22 + 1;
  bVar4 = bVar3;
LAB_00404e7d:
  bVar3 = bVar4;
  if (uVar15 < uVar9) {
    param_1[uVar15] = bVar17;
  }
  uVar15 = uVar15 + 1;
  if (!bVar23) {
    bVar2 = false;
  }
  goto LAB_00404c98;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00405e20(int param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

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
  puVar8 = (undefined4 *)PTR_DAT_00613298;
  if (DAT_006132b0 <= param_1) {
    if (param_1 == 0x7fffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_00406e80();
    }
    if (PTR_DAT_00613298 == &DAT_006132a0) {
      puVar8 = (undefined4 *)FUN_00406c90(0);
      uVar6 = PTR_DAT_006132a8._4_4_;
      uVar5 = PTR_DAT_006132a8._0_4_;
      uVar3 = _UNK_006132a4;
      PTR_DAT_00613298 = (undefined *)puVar8;
      *puVar8 = _DAT_006132a0;
      puVar8[1] = uVar3;
      puVar8[2] = uVar5;
      puVar8[3] = uVar6;
    }
    else {
      puVar8 = (undefined4 *)FUN_00406c90(PTR_DAT_00613298);
      PTR_DAT_00613298 = (undefined *)puVar8;
    }
    memset(puVar8 + (long)DAT_006132b0 * 4,0,(long)((param_1 + 1) - DAT_006132b0) << 4);
    DAT_006132b0 = param_1 + 1;
  }
  uVar2 = param_4[1];
  puVar10 = (ulong *)(puVar8 + (long)param_1 * 4);
  uVar4 = *puVar10;
  __ptr = (undefined *)puVar10[1];
  uVar9 = FUN_00404bf0(__ptr,uVar4,param_2,param_3,*param_4,uVar2 | 1,param_4 + 2,
                       *(undefined8 *)(param_4 + 10),*(undefined8 *)(param_4 + 0xc));
  if (uVar4 <= uVar9) {
    uVar9 = uVar9 + 1;
    *puVar10 = uVar9;
    if (__ptr != &DAT_00613400) {
      free(__ptr);
    }
    __ptr = (undefined *)FUN_00406c30(uVar9);
    uVar3 = *param_4;
    puVar10[1] = (ulong)__ptr;
    FUN_00404bf0(__ptr,uVar9,param_2,param_3,uVar3,uVar2 | 1,param_4 + 2,
                 *(undefined8 *)(param_4 + 10),*(undefined8 *)(param_4 + 0xc));
  }
  *piVar7 = iVar1;
  return __ptr;
}


void FUN_00405fc0(undefined *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_00613500;
  }
  FUN_00406e30(param_1,0x38);
  *piVar2 = iVar1;
  return;
}


undefined4 FUN_00406000(undefined4 *param_1)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)&DAT_00613500;
  }
  return *param_1;
}


void FUN_00406010(undefined4 *param_1,undefined4 param_2)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)&DAT_00613500;
  }
  *param_1 = param_2;
  return;
}


uint FUN_00406020(undefined *param_1,byte param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_00613500;
  }
  uVar1 = *(uint *)(param_1 + (ulong)(param_2 >> 5) * 4 + 8);
  uVar2 = uVar1 >> (param_2 & 0x1f);
  *(uint *)(param_1 + (ulong)(param_2 >> 5) * 4 + 8) =
       ((param_3 ^ uVar2) & 1) << (param_2 & 0x1f) ^ uVar1;
  return uVar2 & 1;
}


undefined4 FUN_00406060(undefined *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_00613500;
  }
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_1 + 4) = param_2;
  return uVar1;
}


void FUN_00406080(undefined4 *param_1,long param_2,long param_3)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)&DAT_00613500;
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


void FUN_004060b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 *param_5)

{
  int iVar1;
  int *piVar2;
  
  if (param_5 == (undefined4 *)0x0) {
    param_5 = (undefined4 *)&DAT_00613500;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  FUN_00404bf0(param_1,param_2,param_3,param_4,*param_5,param_5[1],param_5 + 2,
               *(undefined8 *)(param_5 + 10),*(undefined8 *)(param_5 + 0xc));
  *piVar2 = iVar1;
  return;
}


undefined8 FUN_00406130(undefined8 param_1,undefined8 param_2,long *param_3,undefined4 *param_4)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  
  if (param_4 == (undefined4 *)0x0) {
    param_4 = (undefined4 *)&DAT_00613500;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  uVar5 = (uint)(param_3 == (long *)0x0) | param_4[1];
  lVar3 = FUN_00404bf0(0,0,param_1,param_2,*param_4,uVar5,param_4 + 2,*(undefined8 *)(param_4 + 10),
                       *(undefined8 *)(param_4 + 0xc));
  uVar4 = FUN_00406c30(lVar3 + 1);
  FUN_00404bf0(uVar4,lVar3 + 1,param_1,param_2,*param_4,uVar5,param_4 + 2,
               *(undefined8 *)(param_4 + 10),*(undefined8 *)(param_4 + 0xc));
  *piVar2 = iVar1;
  if (param_3 != (long *)0x0) {
    *param_3 = lVar3;
  }
  return uVar4;
}


void FUN_00406220(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00406130(param_1,param_2,0,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406230(void)

{
  void **ppvVar1;
  void *__ptr;
  undefined *__ptr_00;
  void **ppvVar2;
  
  __ptr_00 = PTR_DAT_00613298;
  if (1 < DAT_006132b0) {
    ppvVar2 = (void **)(PTR_DAT_00613298 + 0x18);
    ppvVar1 = (void **)(PTR_DAT_00613298 + (ulong)(DAT_006132b0 - 2) * 0x10 + 0x28);
    do {
      __ptr = *ppvVar2;
      ppvVar2 = ppvVar2 + 2;
      free(__ptr);
    } while (ppvVar2 != ppvVar1);
  }
  if (*(undefined **)(__ptr_00 + 8) != &DAT_00613400) {
    free(*(undefined **)(__ptr_00 + 8));
    _DAT_006132a0 = 0x100;
    PTR_DAT_006132a8 = &DAT_00613400;
  }
  if (__ptr_00 != &DAT_006132a0) {
    free(__ptr_00);
    PTR_DAT_00613298 = &DAT_006132a0;
  }
  DAT_006132b0 = 1;
  return;
}


void FUN_004062d0(undefined8 param_1,undefined8 param_2)

{
  FUN_00405e20(param_1,param_2,0xffffffffffffffff,&DAT_00613500);
  return;
}


void FUN_004062f0(void)

{
  FUN_00405e20();
  return;
}


void FUN_00406300(undefined8 param_1)

{
  FUN_00405e20(0,param_1,0xffffffffffffffff,&DAT_00613500);
  return;
}


void FUN_00406320(undefined8 param_1,undefined8 param_2)

{
  FUN_00405e20(0,param_1,param_2,&DAT_00613500);
  return;
}


void FUN_00406340(undefined8 param_1,int param_2,undefined8 param_3)

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
    FUN_00405e20(param_1,param_3,0xffffffffffffffff,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_004063b0(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

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
    FUN_00405e20(param_1,param_3,param_4,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00406420(undefined4 param_1,undefined8 param_2)

{
  FUN_00406340(0,param_1,param_2);
  return;
}


void FUN_00406430(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_004063b0(0,param_1,param_2,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406440(undefined8 param_1,undefined8 param_2,byte param_3)

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
  
  local_18 = DAT_00613530;
  local_48 = _DAT_00613500;
  uStack_40 = uRam0000000000613508;
  local_38 = _DAT_00613510;
  uStack_30 = uRam0000000000613518;
  puVar1 = (uint *)((long)&uStack_40 + (ulong)(param_3 >> 5) * 4);
  local_28 = _DAT_00613520;
  uStack_20 = uRam0000000000613528;
  uVar2 = *puVar1;
  *puVar1 = (~(uVar2 >> (param_3 & 0x1f)) & 1) << (param_3 & 0x1f) ^ uVar2;
  FUN_00405e20(0,param_1,param_2,&local_48);
  return;
}


void FUN_004064b0(undefined8 param_1,char param_2)

{
  FUN_00406440(param_1,0xffffffffffffffff,(int)param_2);
  return;
}


void FUN_004064c0(undefined8 param_1)

{
  FUN_00406440(param_1,0xffffffffffffffff,0x3a);
  return;
}


void FUN_004064e0(undefined8 param_1,undefined8 param_2)

{
  FUN_00406440(param_1,param_2,0x3a);
  return;
}


void FUN_004064f0(undefined8 param_1,int param_2,undefined8 param_3)

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
    FUN_00405e20(param_1,param_3,0xffffffffffffffff,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406560(undefined8 param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5
                 )

{
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  long lStack_20;
  long local_18;
  
  uStack_40 = uRam0000000000613508;
  local_38 = _DAT_00613510;
  uStack_30 = uRam0000000000613518;
  local_28 = _DAT_00613520;
  lStack_20 = uRam0000000000613528;
  local_18 = DAT_00613530;
  local_48 = CONCAT44((int)((ulong)_DAT_00613500 >> 0x20),10);
  if ((param_2 != 0) && (param_3 != 0)) {
    lStack_20 = param_2;
    local_18 = param_3;
    FUN_00405e20(param_1,param_4,param_5,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_004065d0(void)

{
  FUN_00406560();
  return;
}


void FUN_004065e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00406560(0,param_1,param_2,param_3,0xffffffffffffffff);
  return;
}


void FUN_00406600(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00406560(0,param_1,param_2,param_3,param_4);
  return;
}


void FUN_00406620(void)

{
  FUN_00405e20();
  return;
}


void FUN_00406630(undefined8 param_1,undefined8 param_2)

{
  FUN_00405e20(0,param_1,param_2,&DAT_00613260);
  return;
}


void FUN_00406650(undefined8 param_1,undefined8 param_2)

{
  FUN_00405e20(param_1,param_2,0xffffffffffffffff,&DAT_00613260);
  return;
}


void FUN_00406670(undefined8 param_1)

{
  FUN_00405e20(0,param_1,0xffffffffffffffff,&DAT_00613260);
  return;
}


undefined8
FUN_00406690(FILE *param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5,
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
  uVar1 = dcgettext(0,&DAT_004104cb,5);
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
    goto LAB_0040690c;
  case 5:
    uVar1 = param_5[3];
    uVar4 = param_5[2];
    uVar5 = param_5[1];
    uVar6 = *param_5;
    uVar7 = dcgettext(0,"Written by %s, %s, %s,\n%s, and %s.\n",5);
LAB_0040690c:
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
    goto LAB_004069a9;
  case 7:
    uVar1 = param_5[2];
    uVar4 = param_5[5];
    uVar5 = param_5[4];
    uVar6 = param_5[3];
    local_58 = param_5[1];
    uVar7 = *param_5;
    uVar3 = dcgettext(0,"Written by %s, %s, %s,\n%s, %s, %s, and %s.\n",5);
LAB_004069a9:
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
    goto LAB_0040678a;
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
LAB_0040678a:
  uVar1 = __fprintf_chk(param_1,1,uVar3,uVar7,local_50,local_58,uVar6,uVar5,uVar4,uVar1,local_48);
  return uVar1;
}


void FUN_00406a70(void)

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
  FUN_00406690();
  return;
}


void FUN_00406a90(void)

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
  FUN_00406690();
  return;
}


void FUN_00406af0(void)

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
  FUN_00406690();
  return;
}


void FUN_00406bb0(void)

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


void FUN_00406c30(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00406e80();
  }
  return;
}


void FUN_00406c50(ulong param_1,ulong param_2)

{
  if ((-1 < SUB168(ZEXT816(param_1) * ZEXT816(param_2),0)) &&
     (SUB168(ZEXT816(param_1) * ZEXT816(param_2) >> 0x40,0) == 0)) {
    FUN_00406c30();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00406e80();
}


void thunk_FUN_00406c30(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00406e80();
  }
  return;
}


void * FUN_00406c90(void *param_1,size_t param_2)

{
  void *pvVar1;
  
  if ((param_2 == 0) && (param_1 != (void *)0x0)) {
    free(param_1);
    return (void *)0x0;
  }
  pvVar1 = realloc(param_1,param_2);
  if ((pvVar1 == (void *)0x0) && (param_2 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00406e80();
  }
  return pvVar1;
}


void FUN_00406cd0(undefined8 param_1,ulong param_2,ulong param_3)

{
  if ((-1 < SUB168(ZEXT816(param_2) * ZEXT816(param_3),0)) &&
     (SUB168(ZEXT816(param_2) * ZEXT816(param_3) >> 0x40,0) == 0)) {
    FUN_00406c90();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00406e80();
}


void FUN_00406d00(long param_1,ulong *param_2,ulong param_3)

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
    if ((SUB168(ZEXT816(uVar2) * ZEXT816(param_3),0) < 0) || (uVar3 != 0)) goto LAB_00406d5b;
  }
  else {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x5555555555555554);
    uVar3 = SUB168(auVar1 % ZEXT816(param_3),0);
    if (SUB168(auVar1 / ZEXT816(param_3),0) <= uVar2) {
LAB_00406d5b:
                    /* WARNING: Subroutine does not return */
      FUN_00406e80(param_1,param_2,uVar3);
    }
    uVar2 = (uVar2 >> 1) + 1 + uVar2;
  }
  *param_2 = uVar2;
  FUN_00406c90(param_1,uVar2 * param_3);
  return;
}


void FUN_00406d90(long param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (param_1 == 0) {
    if (uVar1 == 0) {
      *param_2 = 0x80;
      FUN_00406c90(0,0x80);
      return;
    }
    if ((long)uVar1 < 0) goto LAB_00406dda;
  }
  else {
    if (0x5555555555555553 < uVar1) {
LAB_00406dda:
                    /* WARNING: Subroutine does not return */
      FUN_00406e80();
    }
    uVar1 = (uVar1 >> 1) + 1 + uVar1;
  }
  *param_2 = uVar1;
  FUN_00406c90(param_1,uVar1);
  return;
}


void FUN_00406de0(size_t param_1)

{
  void *__s;
  
  __s = (void *)FUN_00406c30();
  memset(__s,0,param_1);
  return;
}


void FUN_00406e00(size_t param_1,ulong param_2)

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
  FUN_00406e80();
}


void FUN_00406e30(void *param_1,size_t param_2)

{
  void *__dest;
  
  __dest = (void *)FUN_00406c30(param_2);
  memcpy(__dest,param_1,param_2);
  return;
}


void FUN_00406e60(char *param_1)

{
  void *__dest;
  size_t sVar1;
  
  sVar1 = strlen(param_1);
  __dest = (void *)FUN_00406c30(sVar1 + 1);
  memcpy(__dest,param_1,sVar1 + 1);
  return;
}


void FUN_00406e80(void)

{
  undefined8 uVar1;
  
  uVar1 = dcgettext(0,"memory exhausted",5);
  error(DAT_00613240,0,"%s",uVar1);
                    /* WARNING: Subroutine does not return */
  abort();
}


ulong FUN_00406ec0(undefined8 param_1,undefined4 param_2,ulong param_3,ulong param_4,
                  undefined8 param_5,undefined8 param_6,int param_7)

{
  ulong uVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  ulong local_40 [2];
  
  iVar2 = FUN_00407710(param_1,0,param_2,local_40);
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
  uVar4 = FUN_00406670(param_1);
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


void FUN_00406f90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  FUN_00406ec0(param_1,10,param_2,param_3,param_4,param_5,param_6);
  return;
}


ulong FUN_00406fc0(byte *param_1,byte **param_2,uint param_3,long *param_4,char *param_5)

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
    if ((param_5 == (char *)0x0) || (bVar1 = *pbVar3, bVar1 == 0)) goto LAB_00407035;
    pcVar7 = strchr(param_5,(int)(char)bVar1);
    if (pcVar7 == (char *)0x0) goto switchD_004070c2_caseD_1;
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
        goto LAB_004070b0;
      }
      if (bVar2 != 0x42) {
                    /* WARNING: Could not recover jumptable at 0x00407118. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar6 = (*(code *)(&PTR_LAB_00410a48)[bVar11])();
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
LAB_004070b0:
  switch(bVar1 - 0x42 & 0xff) {
  case 0:
    if (lVar5 < -0x20000000000000) goto LAB_00407258;
    if (lVar5 < 0x20000000000000) {
      lVar5 = lVar5 << 10;
    }
    else {
LAB_00407610:
      lVar5 = 0x7fffffffffffffff;
      uVar6 = 1;
    }
    break;
  default:
switchD_004070c2_caseD_1:
    *param_4 = lVar5;
    return (ulong)(uVar15 | 2);
  case 3:
    lVar10 = (long)iVar14;
    iVar14 = 6;
    uVar12 = 0;
    do {
      if (lVar5 < SUB168((SEXT816(-0x8000000000000000) & (undefined  [16])0xffffffffffffffff |
                         ZEXT816(0x8000000000000000)) / SEXT816(lVar10),0)) {
        lVar5 = -0x8000000000000000;
        uVar12 = 1;
      }
      else if (SUB168((SEXT816(0x7fffffffffffffff) & (undefined  [16])0xffffffffffffffff |
                      ZEXT816(0x7fffffffffffffff)) / SEXT816(lVar10),0) < lVar5) {
        lVar5 = 0x7fffffffffffffff;
        uVar12 = 1;
      }
      else {
        lVar5 = lVar5 * lVar10;
      }
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
    goto LAB_00407600;
  case 5:
  case 0x25:
    lVar10 = (long)iVar14;
    iVar14 = 3;
    uVar12 = 0;
    do {
      if (lVar5 < SUB168((SEXT816(-0x8000000000000000) & (undefined  [16])0xffffffffffffffff |
                         ZEXT816(0x8000000000000000)) / SEXT816(lVar10),0)) {
        lVar5 = -0x8000000000000000;
        uVar12 = 1;
      }
      else if (SUB168((SEXT816(0x7fffffffffffffff) & (undefined  [16])0xffffffffffffffff |
                      ZEXT816(0x7fffffffffffffff)) / SEXT816(lVar10),0) < lVar5) {
        lVar5 = 0x7fffffffffffffff;
        uVar12 = 1;
      }
      else {
        lVar5 = lVar5 * lVar10;
      }
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
    goto LAB_00407600;
  case 9:
  case 0x29:
    if (lVar5 < SUB168((SEXT816(-0x8000000000000000) & (undefined  [16])0xffffffffffffffff |
                       ZEXT816(0x8000000000000000)) / SEXT816((long)iVar14),0)) goto LAB_00407258;
    lVar8 = SUB168((SEXT816(0x7fffffffffffffff) & (undefined  [16])0xffffffffffffffff |
                   ZEXT816(0x7fffffffffffffff)) / SEXT816((long)iVar14),0);
LAB_004071fc:
    if (lVar8 < lVar5) goto LAB_00407610;
    lVar5 = lVar5 * iVar14;
    break;
  case 0xb:
  case 0x2b:
    lVar9 = (long)iVar14;
    lVar10 = SUB168((SEXT816(-0x8000000000000000) & (undefined  [16])0xffffffffffffffff |
                    ZEXT816(0x8000000000000000)) / SEXT816(lVar9),0);
    if (lVar10 <= lVar5) {
      lVar8 = SUB168((SEXT816(0x7fffffffffffffff) & (undefined  [16])0xffffffffffffffff |
                     ZEXT816(0x7fffffffffffffff)) / SEXT816(lVar9),0);
      if (lVar8 < lVar5) goto LAB_00407610;
      lVar5 = lVar5 * lVar9;
      if (lVar10 <= lVar5) goto LAB_004071fc;
    }
LAB_00407258:
    lVar5 = -0x8000000000000000;
    uVar6 = 1;
    break;
  case 0xe:
    lVar10 = (long)iVar14;
    iVar14 = 5;
    uVar12 = 0;
    do {
      if (lVar5 < SUB168((SEXT816(-0x8000000000000000) & (undefined  [16])0xffffffffffffffff |
                         ZEXT816(0x8000000000000000)) / SEXT816(lVar10),0)) {
        lVar5 = -0x8000000000000000;
        uVar12 = 1;
      }
      else if (SUB168((SEXT816(0x7fffffffffffffff) & (undefined  [16])0xffffffffffffffff |
                      ZEXT816(0x7fffffffffffffff)) / SEXT816(lVar10),0) < lVar5) {
        lVar5 = 0x7fffffffffffffff;
        uVar12 = 1;
      }
      else {
        lVar5 = lVar5 * lVar10;
      }
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
    goto LAB_00407600;
  case 0x12:
  case 0x32:
    lVar10 = (long)iVar14;
    iVar14 = 4;
    uVar12 = 0;
    do {
      if (lVar5 < SUB168((SEXT816(-0x8000000000000000) & (undefined  [16])0xffffffffffffffff |
                         ZEXT816(0x8000000000000000)) / SEXT816(lVar10),0)) {
        lVar5 = -0x8000000000000000;
        uVar12 = 1;
      }
      else if (SUB168((SEXT816(0x7fffffffffffffff) & (undefined  [16])0xffffffffffffffff |
                      ZEXT816(0x7fffffffffffffff)) / SEXT816(lVar10),0) < lVar5) {
        lVar5 = 0x7fffffffffffffff;
        uVar12 = 1;
      }
      else {
        lVar5 = lVar5 * lVar10;
      }
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
    goto LAB_00407600;
  case 0x17:
    lVar10 = (long)iVar14;
    iVar14 = 8;
    uVar12 = 0;
    do {
      if (lVar5 < SUB168((SEXT816(-0x8000000000000000) & (undefined  [16])0xffffffffffffffff |
                         ZEXT816(0x8000000000000000)) / SEXT816(lVar10),0)) {
        lVar5 = -0x8000000000000000;
        uVar12 = 1;
      }
      else if (SUB168((SEXT816(0x7fffffffffffffff) & (undefined  [16])0xffffffffffffffff |
                      ZEXT816(0x7fffffffffffffff)) / SEXT816(lVar10),0) < lVar5) {
        lVar5 = 0x7fffffffffffffff;
        uVar12 = 1;
      }
      else {
        lVar5 = lVar5 * lVar10;
      }
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
    goto LAB_00407600;
  case 0x18:
    lVar10 = (long)iVar14;
    iVar14 = 7;
    uVar12 = 0;
    do {
      if (lVar5 < SUB168((SEXT816(-0x8000000000000000) & (undefined  [16])0xffffffffffffffff |
                         ZEXT816(0x8000000000000000)) / SEXT816(lVar10),0)) {
        lVar5 = -0x8000000000000000;
        uVar12 = 1;
      }
      else if (SUB168((SEXT816(0x7fffffffffffffff) & (undefined  [16])0xffffffffffffffff |
                      ZEXT816(0x7fffffffffffffff)) / SEXT816(lVar10),0) < lVar5) {
        lVar5 = 0x7fffffffffffffff;
        uVar12 = 1;
      }
      else {
        lVar5 = lVar5 * lVar10;
      }
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
LAB_00407600:
    uVar6 = (ulong)(uVar15 | uVar12);
    break;
  case 0x20:
    if (lVar5 < -0x40000000000000) goto LAB_00407258;
    if (0x3fffffffffffff < lVar5) goto LAB_00407610;
    lVar5 = lVar5 << 9;
    break;
  case 0x21:
    break;
  case 0x35:
    if (lVar5 < -0x4000000000000000) goto LAB_00407258;
    if (0x3fffffffffffffff < lVar5) goto LAB_00407610;
    lVar5 = lVar5 * 2;
  }
  *param_2 = pbVar3 + iVar13;
  if (pbVar3[iVar13] != 0) {
    uVar6 = (ulong)((uint)uVar6 | 2);
  }
LAB_00407035:
  *param_4 = lVar5;
  return uVar6;
}


ulong FUN_00407710(byte *param_1,byte **param_2,uint param_3,ulong *param_4,char *param_5)

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
    if ((param_5 == (char *)0x0) || (bVar12 = *pbVar5, bVar12 == 0)) goto LAB_004077b2;
    pcVar7 = strchr(param_5,(int)(char)bVar12);
    if (pcVar7 == (char *)0x0) goto switchD_0040789c_caseD_1;
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
        goto LAB_0040788a;
      }
      if (bVar1 != 0x42) {
                    /* WARNING: Could not recover jumptable at 0x00407871. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar6 = (*(code *)(&PTR_LAB_00410bd0)[bVar8])();
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
LAB_0040788a:
  iVar10 = (int)uVar11;
  switch(bVar12 - 0x42 & 0xff) {
  case 0:
    if (uVar6 >> 0x36 == 0) {
      uVar6 = uVar6 << 10;
      break;
    }
    goto LAB_004078f7;
  default:
switchD_0040789c_caseD_1:
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
    goto LAB_00407984;
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
    goto joined_r0x004078bc;
  case 0xb:
  case 0x2b:
    auVar2 = ZEXT816(uVar6) * ZEXT816((ulong)(long)iVar10);
    if (SUB168(auVar2 >> 0x40,0) != 0) goto LAB_004078f7;
    auVar2 = (auVar2 & (undefined  [16])0xffffffffffffffff) * ZEXT816((ulong)(long)iVar10);
joined_r0x004078bc:
    uVar6 = SUB168(auVar2,0);
    if (SUB168(auVar2 >> 0x40,0) != 0) {
LAB_004078f7:
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
    goto LAB_00407984;
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
    goto LAB_00407984;
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
    goto LAB_00407984;
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
LAB_00407984:
    uVar14 = (ulong)(uVar13 | uVar9);
    break;
  case 0x20:
    if (uVar6 >> 0x37 != 0) goto LAB_004078f7;
    uVar6 = uVar6 << 9;
    break;
  case 0x21:
    break;
  case 0x35:
    if ((long)uVar6 < 0) goto LAB_004078f7;
    uVar6 = uVar6 * 2;
  }
  *param_2 = pbVar5 + iVar15;
  if (pbVar5[iVar15] != 0) {
    uVar14 = (ulong)((uint)uVar14 | 2);
  }
LAB_004077b2:
  *param_4 = uVar6;
  return uVar14;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_00407b50(ulong param_1,int param_2,ulong param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  
  if (param_2 != 0x406) {
    iVar1 = fcntl((int)param_1,param_2,param_3);
    return iVar1;
  }
  if (DAT_00613538 < 0) {
    iVar1 = FUN_00407b50(param_1,0,param_3 & 0xffffffff);
    if (iVar1 < 0) {
      return iVar1;
    }
    if (DAT_00613538 != -1) {
      return iVar1;
    }
  }
  else {
    iVar1 = fcntl((int)param_1,0x406);
    if ((-1 < iVar1) || (piVar4 = __errno_location(), *piVar4 != 0x16)) {
      DAT_00613538 = 1;
      return iVar1;
    }
    iVar1 = FUN_00407b50(param_1 & 0xffffffff,0,param_3 & 0xffffffff);
    if (iVar1 < 0) {
      return iVar1;
    }
    DAT_00613538 = -1;
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


void FUN_00407c90(long param_1,int *param_2)

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
      if (iVar3 <= iVar8) goto LAB_00407d0c;
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
      if (iVar9 <= iVar3) goto LAB_00407d0c;
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
LAB_00407d0c:
  param_2[0xc] = iVar2;
  param_2[0xb] = iVar1 + (iVar2 - iVar3);
  return;
}


int FUN_00407d70(int param_1,undefined8 *param_2,char *param_3,char **param_4,undefined4 *param_5,
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
      if ((iVar5 == 0) && (sVar7 = strlen(__s1_00), sVar7 == sVar15)) goto LAB_00407f90;
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
            if (local_70 == (char *)0x0) goto LAB_00407ed0;
          }
          else if (local_70 == (char *)0x0) {
            local_70 = (char *)calloc((long)iVar5,1);
            if (local_70 == (char *)0x0) {
              bVar3 = true;
              goto LAB_00407ed0;
            }
            bVar4 = true;
            local_70[(int)local_44] = '\x01';
          }
          local_70[lVar16] = '\x01';
        }
      }
LAB_00407ed0:
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
              __fprintf_chk(__stream,1,&DAT_00411001,param_9,*param_4);
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
LAB_00407f90:
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


uint FUN_00408390(uint param_1,undefined8 *param_2,char *param_3,long param_4,undefined8 param_5,
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
LAB_004083da:
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
          goto LAB_004084dd;
        }
        pbVar8 = *(byte **)(param_7 + 8);
      }
      param_7[10] = 0;
    }
LAB_004084dd:
    param_7[6] = 1;
    cVar2 = *param_3;
LAB_004084e8:
    if (cVar2 == ':') {
      uVar3 = 0;
    }
    if (pbVar8 == (byte *)0x0) goto LAB_00408458;
LAB_004084fc:
    if (*pbVar8 == 0) goto LAB_00408458;
  }
  else {
    if (param_7[6] == 0) goto LAB_004083da;
    cVar2 = *param_3;
    pbVar8 = *(byte **)(param_7 + 8);
    if ((cVar2 - 0x2bU & 0xfd) != 0) goto LAB_004084e8;
    pcVar4 = param_3 + 1;
    param_3 = param_3 + 1;
    if (*pcVar4 == ':') {
      uVar3 = 0;
    }
    if (pbVar8 != (byte *)0x0) goto LAB_004084fc;
LAB_00408458:
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
        FUN_00407c90(param_2,param_7);
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
LAB_004085c6:
      if (uVar11 != param_1) {
        *param_7 = uVar11;
      }
      return 0xffffffff;
    }
    lVar6 = 3;
    pbVar8 = (byte *)param_2[(int)uVar11];
    pbVar9 = pbVar8;
    pbVar10 = &DAT_00411019;
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
          FUN_00407c90(param_2,param_7);
          uVar11 = param_7[0xb];
        }
      }
      param_7[0xc] = param_1;
      *param_7 = param_1;
      goto LAB_004085c6;
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
        puVar15 = &DAT_00411019;
        goto LAB_00408725;
      }
      if ((int)param_6 != 0) {
        if (pbVar8[2] == 0) {
          pcVar4 = strchr(param_3,(int)(char)bVar14);
          param_6 = param_6 & 0xffffffff;
          if (pcVar4 != (char *)0x0) goto LAB_004086d0;
        }
        *(byte **)(param_7 + 8) = pbVar8 + 1;
        uVar11 = FUN_00407d70(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar3,
                              &DAT_0041101a);
        if (uVar11 != 0xffffffff) {
          return uVar11;
        }
        pbVar8 = (byte *)param_2[(int)*param_7];
      }
    }
LAB_004086d0:
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
  puVar15 = &DAT_00411038;
LAB_00408725:
  uVar3 = FUN_00407d70(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar3,puVar15);
  return uVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408960(void)

{
  DAT_00613540 = DAT_006132bc;
  _DAT_00613544 = DAT_006132b8;
  FUN_00408390();
  DAT_006132bc = DAT_00613540;
  DAT_00613580 = DAT_00613550;
  _DAT_006132b4 = DAT_00613548;
  return;
}


void FUN_004089c0(void)

{
  FUN_00408960();
  return;
}


void FUN_004089e0(void)

{
  FUN_00408960();
  return;
}


void FUN_00408a00(void)

{
  FUN_00408390();
  return;
}


void FUN_00408a20(void)

{
  FUN_00408960();
  return;
}


void FUN_00408a40(void)

{
  FUN_00408390();
  return;
}


size_t FUN_00408a60(wchar_t *param_1,byte *param_2,size_t param_3,mbstate_t *param_4)

{
  char cVar1;
  size_t sVar2;
  wchar_t local_1c;
  
  if (param_2 == (byte *)0x0) {
    param_3 = 1;
    param_2 = (byte *)0x411037;
  }
  else {
    if (param_3 == 0) {
      return 0xfffffffffffffffe;
    }
    if (param_1 != (wchar_t *)0x0) goto LAB_00408a84;
  }
  param_1 = &local_1c;
LAB_00408a84:
  sVar2 = mbrtowc(param_1,(char *)param_2,param_3,param_4);
  if ((0xfffffffffffffffd < sVar2) && (cVar1 = FUN_00408ba0(0), cVar1 == '\0')) {
    sVar2 = 1;
    *param_1 = (uint)*param_2;
  }
  return sVar2;
}


ulong FUN_00408ae0(void **param_1,undefined8 param_2,undefined8 param_3)

{
  void *__ptr;
  int *piVar1;
  ulong local_10;
  
  __ptr = (void *)FUN_00409290(0,&local_10,param_2,param_3);
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


ulong FUN_00408b40(uint *param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  
  lVar2 = __fpending();
  uVar1 = *param_1;
  uVar3 = FUN_00409170(param_1);
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


bool FUN_00408ba0(int param_1)

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
    pbVar5 = &DAT_0041103c;
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

char * FUN_00408c00(void)

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
  if (DAT_00613578 != (char *)0x0) goto LAB_00408c3a;
  pcVar7 = getenv("CHARSETALIASDIR");
  if ((pcVar7 == (char *)0x0) || (*pcVar7 == '\0')) {
    sVar6 = 0x73;
    sVar5 = 0x65;
    __n = 100;
    pcVar7 = 
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib"
    ;
LAB_00408d25:
    __file = (char *)malloc(sVar6);
    if (__file != (char *)0x0) {
      memcpy(__file,pcVar7,__n);
      __file[__n] = '/';
      goto LAB_00408d46;
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
        goto LAB_00408d25;
      }
      sVar6 = __n + 0xe;
    }
    __file = (char *)malloc(sVar6);
    if (__file != (char *)0x0) {
      memcpy(__file,pcVar7,__n);
      sVar5 = __n;
LAB_00408d46:
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
LAB_00408de0:
          pbVar8 = (byte *)__stream->_IO_read_ptr;
          if (__stream->_IO_read_end <= pbVar8) goto LAB_00408f6c;
          do {
            __stream->_IO_read_ptr = (char *)(pbVar8 + 1);
            uVar4 = (uint)*pbVar8;
            __ptr = pcVar7;
            while( true ) {
              pcVar7 = __ptr;
              if ((uVar4 - 9 < 2) || (uVar4 == 0x20)) goto LAB_00408de0;
              if (uVar4 == 0x23) goto LAB_00408fd1;
              ungetc(uVar4,__stream);
              iVar2 = fscanf(__stream,"%50s %50s",&local_b8,&local_78);
              puVar13 = &local_b8;
              if (iVar2 < 2) goto LAB_00408f7f;
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
                FUN_00409170(__stream);
                goto LAB_00408d84;
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
LAB_00408f6c:
              uVar4 = __uflow(__stream);
              __ptr = pcVar7;
              if (uVar4 == 0xffffffff) goto LAB_00408f7f;
            }
          } while( true );
        }
        close(iVar2);
      }
      goto LAB_00408d7e;
    }
  }
  DAT_00613578 = "";
LAB_00408c3a:
  cVar1 = *DAT_00613578;
  pcVar7 = DAT_00613578;
  do {
    if (cVar1 == '\0') {
LAB_00408c94:
      if (*__s1 == '\0') {
        __s1 = "ASCII";
      }
      return __s1;
    }
    iVar2 = strcmp(__s1,pcVar7);
    if ((iVar2 == 0) || ((cVar1 == '*' && (pcVar7[1] == '\0')))) {
      sVar6 = strlen(pcVar7);
      __s1 = pcVar7 + sVar6 + 1;
      goto LAB_00408c94;
    }
    sVar6 = strlen(pcVar7);
    sVar5 = strlen(pcVar7 + sVar6 + 1);
    pcVar7 = pcVar7 + sVar6 + 1 + sVar5 + 1;
    cVar1 = *pcVar7;
  } while( true );
LAB_00408fd1:
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
  if (uVar4 == 0xffffffff) goto LAB_00408f7f;
  goto LAB_00408de0;
LAB_00408f7f:
  FUN_00409170(__stream);
  if (local_d0 == 0) {
LAB_00408d7e:
    pcVar7 = "";
  }
  else {
    pcVar7[local_d0] = '\0';
  }
LAB_00408d84:
  free(__file);
  DAT_00613578 = pcVar7;
  goto LAB_00408c3a;
}


int FUN_00409170(FILE *param_1)

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
      if (_Var4 == -1) goto LAB_004091d7;
    }
    iVar1 = FUN_004091f0(param_1);
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
LAB_004091d7:
  iVar1 = fclose(param_1);
  return iVar1;
}


void FUN_004091f0(FILE *param_1)

{
  int iVar1;
  
  if (param_1 != (FILE *)0x0) {
    iVar1 = __freading();
    if ((iVar1 != 0) && ((param_1->_flags & 0x100U) != 0)) {
      FUN_00409230(param_1,0,1);
      fflush(param_1);
      return;
    }
  }
  fflush(param_1);
  return;
}


ulong FUN_00409230(FILE *param_1,__off_t param_2,int param_3)

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


/* WARNING: Removing unreachable block (ram,0x0040aacc) */
/* WARNING: Removing unreachable block (ram,0x0040ac0d) */
/* WARNING: Removing unreachable block (ram,0x0040aae0) */
/* WARNING: Removing unreachable block (ram,0x00409fb4) */
/* WARNING: Removing unreachable block (ram,0x00409580) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Could not reconcile some variable overlaps */

undefined2 *
FUN_00409290(undefined2 *param_1,undefined8 *param_2,undefined2 *param_3,undefined8 param_4)

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
  iVar10 = FUN_0040afd0(param_3,&local_588,local_678);
  if (iVar10 < 0) {
    return (undefined2 *)0x0;
  }
  iVar10 = FUN_0040adb0(param_4,local_678);
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
LAB_00409354:
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
      if (puVar24 == param_3) goto LAB_00409508;
      do {
        puVar24 = (undefined2 *)((long)puVar24 - (long)_local_6a8);
        __n = puVar14 + (long)puVar24;
        puVar13 = puVar20;
        if (CARRY8((ulong)puVar14,(ulong)puVar24)) {
          if (puVar31 != (undefined *)0xffffffffffffffff) goto LAB_00409880;
          __n = (undefined *)0xffffffffffffffff;
        }
        else if (puVar31 < __n) {
          if (puVar31 == (undefined *)0x0) {
            if (__n < (undefined *)0xd) {
              puVar31 = (undefined *)0xc;
            }
            else {
LAB_0040949e:
              puVar31 = __n;
              if (__n == (undefined *)0xffffffffffffffff) goto LAB_00409880;
            }
          }
          else {
            if ((long)puVar31 < 0) goto LAB_00409880;
            puVar31 = (undefined *)((long)puVar31 * 2);
            if (puVar31 < __n) goto LAB_0040949e;
          }
          if ((puVar20 == (undefined2 *)0x0) || (puVar20 == local_690)) {
            local_6b8 = (undefined2 *)_local_6a8;
            _local_6a8 = (float10)CONCAT91(stack0xfffffffffffff959,puVar20 == local_690);
            local_698 = puVar24;
            *(undefined8 *)(puVar27 + -8) = 0x4093fc;
            puVar13 = (undefined2 *)malloc((size_t)puVar31);
            if (puVar13 == (undefined2 *)0x0) goto LAB_00409880;
            puVar24 = local_698;
            _local_6a8 = (int *)local_6b8;
            if ((puVar14 != (undefined *)0x0) && (local_6a8[0] != '\0')) {
              _local_6a8 = (float10)CONCAT28(auStack_6a4._4_2_,local_6b8);
              *(undefined8 *)(puVar27 + -8) = 0x40944a;
              puVar13 = (undefined2 *)memcpy(puVar13,puVar20,(size_t)puVar14);
              puVar24 = local_698;
            }
          }
          else {
            local_698 = puVar24;
            *(undefined8 *)(puVar27 + -8) = 0x4094df;
            puVar13 = (undefined2 *)realloc(puVar20,(size_t)puVar31);
            if (puVar13 == (undefined2 *)0x0) {
LAB_00409a95:
              *(undefined8 *)(puVar27 + -8) = 0x409a9a;
              piVar16 = __errno_location();
              _local_6a8 = (float10)CONCAT28(auStack_6a4._4_2_,piVar16);
              goto LAB_00409aa8;
            }
            puVar24 = local_698;
          }
        }
        *(undefined8 *)(puVar27 + -8) = 0x409508;
        memcpy((undefined *)((long)puVar13 + (long)puVar14),_local_6a8,(size_t)puVar24);
        puVar20 = puVar13;
LAB_00409508:
        do {
          if (local_588 == local_6c0) {
            puVar14 = __n + 1;
            puVar24 = puVar20;
            if ((undefined *)0xfffffffffffffffe < __n) {
              if (puVar31 == (undefined *)0xffffffffffffffff) goto LAB_0040a692;
              goto LAB_00409880;
            }
            if (puVar14 <= puVar31) goto LAB_0040a692;
            if (puVar31 == (undefined *)0x0) {
              if (puVar14 < (undefined *)0xd) {
                puVar31 = (undefined *)0xc;
              }
              else {
LAB_0040ac6f:
                puVar31 = puVar14;
                if (puVar14 == (undefined *)0xffffffffffffffff) goto LAB_00409880;
              }
            }
            else {
              if ((long)puVar31 < 0) goto LAB_00409880;
              puVar31 = (undefined *)((long)puVar31 * 2);
              if (puVar31 < puVar14) goto LAB_0040ac6f;
            }
            bVar33 = puVar20 == local_690;
            if ((puVar20 == (undefined2 *)0x0) || (bVar33)) {
              *(undefined8 *)(puVar27 + -8) = 0x40ac29;
              puVar24 = (undefined2 *)malloc((size_t)puVar31);
              if (puVar24 == (undefined2 *)0x0) goto LAB_00409880;
              if ((__n != (undefined *)0x0) && (bVar33)) {
                *(undefined8 *)(puVar27 + -8) = 0x40ac55;
                puVar24 = (undefined2 *)memcpy(puVar24,puVar20,(size_t)__n);
              }
            }
            else {
              *(undefined8 *)(puVar27 + -8) = 0x40a686;
              puVar24 = (undefined2 *)realloc(puVar20,(size_t)puVar31);
              if (puVar24 == (undefined2 *)0x0) goto LAB_00409a95;
            }
LAB_0040a692:
            *(undefined *)((long)puVar24 + (long)__n) = 0;
            if ((puVar14 < puVar31) && (puVar24 != local_690)) {
              *(undefined8 *)(puVar27 + -8) = 0x40a6b0;
              puVar20 = (undefined2 *)realloc(puVar24,(size_t)puVar14);
              if (puVar20 != (undefined2 *)0x0) {
                puVar24 = puVar20;
              }
            }
            puVar31 = local_6e0;
            if (local_6e0 != (undefined *)0x0) {
              *(undefined8 *)(puVar27 + -8) = 0x40a6cb;
              free(puVar31);
            }
            if (local_580 != auStack_568) {
              *(undefined8 *)(puVar27 + -8) = 0x40a6e7;
              free(local_580);
            }
            if (local_670 != auStack_668) {
              *(undefined8 *)(puVar27 + -8) = 0x40a703;
              free(local_670);
            }
            *local_6d8 = __n;
            return puVar24;
          }
          bVar8 = *(byte *)(puVar32 + 9);
          lVar30 = puVar32[10];
          if (bVar8 == 0x25) {
            if (lVar30 != -1) goto LAB_00409fbc;
            puVar14 = __n + 1;
            puVar24 = puVar20;
            if (__n < (undefined *)0xffffffffffffffff) {
              if (puVar31 < puVar14) {
                if (puVar31 == (undefined *)0x0) {
                  if (puVar14 < (undefined *)0xd) {
                    puVar31 = (undefined *)0xc;
                  }
                  else {
LAB_0040a232:
                    puVar31 = puVar14;
                    if (puVar14 == (undefined *)0xffffffffffffffff) goto LAB_00409880;
                  }
                }
                else {
                  if ((long)puVar31 < 0) goto LAB_00409880;
                  puVar31 = (undefined *)((long)puVar31 * 2);
                  if (puVar31 < puVar14) goto LAB_0040a232;
                }
                if ((puVar20 == (undefined2 *)0x0) || (puVar20 == local_690)) {
                  local_698 = (undefined2 *)
                              ((ulong)local_698 & 0xffffffffffffff00 | (ulong)(puVar20 == local_690)
                              );
                  *(undefined8 *)(puVar27 + -8) = 0x40a17e;
                  puVar24 = (undefined2 *)malloc((size_t)puVar31);
                  if (puVar24 == (undefined2 *)0x0) goto LAB_00409880;
                  if ((__n != (undefined *)0x0) && ((char)local_698 != '\0')) {
                    *(undefined8 *)(puVar27 + -8) = 0x40a1b0;
                    puVar24 = (undefined2 *)memcpy(puVar24,puVar20,(size_t)__n);
                  }
                }
                else {
                  *(undefined8 *)(puVar27 + -8) = 0x409976;
                  puVar24 = (undefined2 *)realloc(puVar20,(size_t)puVar31);
                  if (puVar24 == (undefined2 *)0x0) goto LAB_00409a95;
                }
              }
            }
            else {
              if (puVar31 != (undefined *)0xffffffffffffffff) goto LAB_00409880;
              puVar14 = (undefined *)0xffffffffffffffff;
            }
            *(undefined *)((long)puVar24 + (long)__n) = 0x25;
            puVar20 = puVar24;
            __n = puVar14;
            goto LAB_00409987;
          }
          if (lVar30 == -1) goto LAB_00409fbc;
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
switchD_004099ec_caseD_5:
                    /* WARNING: Subroutine does not return */
              *(undefined8 *)(puVar27 + -8) = 0x401a98;
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
                        if (pcVar21 == pcVar6) goto LAB_00409810;
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
                  if (*(int *)(local_670 + (long)puVar13 * 0x10) != 5) goto LAB_00409fbc;
                  iVar10 = *(int *)((long)(local_670 + (long)puVar13 * 0x10) + 0x10);
                  puVar24 = (undefined2 *)(long)iVar10;
                  if (iVar10 < 0) {
                    local_6b8._0_4_ = (uint)local_6b8 | 2;
                    puVar24 = (undefined2 *)-(long)(undefined2 *)(long)iVar10;
                  }
                }
              }
LAB_00409810:
              pcVar21 = (char *)puVar32[7];
              if ((char *)puVar32[6] == pcVar21) {
LAB_00409ec0:
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
                          if (pcVar21 == pcVar6) goto LAB_00409880;
                          pcVar26 = pcVar6 + 1;
                          cVar9 = *pcVar6;
                          pcVar6 = pcVar26;
                        } while (cVar9 != '0');
                        puVar13 = (undefined2 *)0xffffffffffffffff;
                      }
                      pcVar25 = pcVar26;
                    } while (pcVar21 != pcVar26);
                    goto LAB_0040984c;
                  }
                }
                else {
                  if (*(int *)(local_670 + puVar32[8] * 0x10) != 5) goto LAB_00409fbc;
                  iVar10 = *(int *)((long)(local_670 + puVar32[8] * 0x10) + 0x10);
                  puVar13 = (undefined2 *)(long)iVar10;
                  if (iVar10 < 0) goto LAB_00409ec0;
LAB_0040984c:
                  if (puVar13 != (undefined2 *)0x0) {
                    puVar18 = puVar13 + 6;
                    if (puVar13 < (undefined2 *)0xfffffffffffffff4) goto LAB_00409ede;
                    goto LAB_00409880;
                  }
                }
                puVar18 = (undefined2 *)0xc;
              }
LAB_00409ede:
              if (puVar18 <= puVar24) {
                puVar18 = puVar24;
              }
              puVar17 = (undefined2 *)((long)puVar18 + 1);
              local_698 = puVar17;
              if (puVar18 == (undefined2 *)0xffffffffffffffff) goto LAB_00409880;
              if (puVar17 < (undefined2 *)0x2bd) {
                puVar18 = local_2f8;
              }
              else {
                local_6d0 = puVar24;
                local_6c8 = puVar13;
                local_6b8 = (undefined2 *)
                            ((ulong)local_6b8 & 0xffffffff00000000 | (ulong)(uint)local_6b8);
                _local_6a8 = fVar34;
                if (puVar17 == (undefined2 *)0xffffffffffffffff) goto LAB_00409880;
                *(undefined8 *)(puVar27 + -8) = 0x409f32;
                puVar18 = (undefined2 *)malloc((size_t)puVar17);
                puVar13 = local_6c8;
                puVar24 = local_6d0;
                fVar34 = _local_6a8;
                if (puVar18 == (undefined2 *)0x0) goto LAB_00409880;
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
                if (fVar34 != (float10)0) goto LAB_00409fbc;
                bVar8 = *(byte *)(puVar32 + 9) & 0xdf;
                if (bVar8 == 0x46) {
                  *(undefined *)puVar17 = 0x30;
                  if ((((uint)local_6b8 & 0x10) == 0) && (puVar13 == (undefined2 *)0x0)) {
LAB_0040a407:
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
                    *(undefined8 *)(puVar27 + -8) = 0x40a941;
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
                    *(undefined8 *)(puVar27 + -8) = 0x40ab9f;
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
                  if (((uint)local_6b8 & 0x10) == 0) goto LAB_0040a407;
                  if (puVar13 == (undefined2 *)0x0) {
                    local_6e8 = (undefined2 *)
                                ((ulong)local_6e8 & 0xffffffff00000000 |
                                (ulong)uVar7 & 0xffffffff0000ffff);
                    local_6d0 = puVar24;
                    local_6c8 = puVar17 + 1;
                    local_6b8 = puVar18;
                    _local_6a8 = (float10)CONCAT64(auStack_6a4._0_6_,(uint)local_6b8);
                    *(undefined8 *)(puVar27 + -8) = 0x40ad57;
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
                    *(undefined8 *)(puVar27 + -8) = 0x40a86d;
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
                  if (bVar8 != 0x41) goto LAB_00409fbc;
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
                    *(undefined8 *)(puVar27 + -8) = 0x40acb9;
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
                if (fVar34 + fVar34 != fVar34) goto LAB_00409fbc;
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
LAB_00409fbc:
                    /* WARNING: Subroutine does not return */
                *(undefined **)(puVar27 + -8) = &UNK_00409fc1;
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
LAB_0040aaba:
                        puVar31 = puVar14;
                        if (puVar14 == (undefined *)0xffffffffffffffff) goto LAB_00409880;
                      }
                    }
                    else {
                      if ((long)puVar31 < 0) goto LAB_00409880;
                      puVar31 = (undefined *)((long)puVar31 * 2);
                      if (puVar31 < puVar14) goto LAB_0040aaba;
                    }
                    if ((puVar20 == (undefined2 *)0x0) || (puVar20 == local_690)) {
                      local_6b8 = (undefined2 *)
                                  ((ulong)local_6b8 & 0xffffffffffffff00 |
                                  (ulong)(puVar20 == local_690));
                      local_698 = puVar18;
                      *(undefined8 *)(puVar27 + -8) = 0x40a7a7;
                      puVar24 = (undefined2 *)malloc((size_t)puVar31);
                      if (puVar24 == (undefined2 *)0x0) goto LAB_00409880;
                      puVar18 = local_698;
                      if ((__n != (undefined *)0x0) && ((char)local_6b8 != '\0')) {
                        *(undefined8 *)(puVar27 + -8) = 0x40a7f5;
                        puVar24 = (undefined2 *)memcpy(puVar24,puVar20,(size_t)__n);
                        puVar18 = local_698;
                      }
                    }
                    else {
                      local_698 = puVar18;
                      *(undefined8 *)(puVar27 + -8) = 0x40a522;
                      puVar24 = (undefined2 *)realloc(puVar20,(size_t)puVar31);
                      if (puVar24 == (undefined2 *)0x0) goto LAB_00409880;
                      puVar18 = local_698;
                    }
                  }
                }
                else if (puVar31 != (undefined *)0xffffffffffffffff) goto LAB_00409880;
              }
              local_698 = puVar18;
              *(undefined8 *)(puVar27 + -8) = 0x40a556;
              memcpy((undefined *)((long)puVar24 + (long)__n),puVar18,(size_t)_local_6a8);
              puVar13 = local_698;
              puVar20 = puVar24;
              __n = puVar14;
              if (local_698 != local_2f8) {
                *(undefined8 *)(puVar27 + -8) = 0x40a575;
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
                *(undefined8 *)(puVar27 + -8) = 0x409629;
                memcpy(puVar24,pvVar5,sVar28);
                puVar24 = (undefined2 *)((long)puVar24 + (long)_local_6a8);
                puVar13 = local_6b8;
              }
              pvVar5 = (void *)puVar32[6];
              if (pvVar5 != (void *)puVar32[7]) {
                local_6b8 = puVar13;
                sVar28 = (long)(void *)puVar32[7] - (long)pvVar5;
                _local_6a8 = (float10)CONCAT28(auStack_6a4._4_2_,sVar28);
                *(undefined8 *)(puVar27 + -8) = 0x409666;
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
                      goto LAB_00409a88;
                    }
                  }
                  else {
                    *(undefined *)puVar24 = 0x4c;
                    puVar24 = (undefined2 *)((long)puVar24 + 1);
                  }
                }
                else {
LAB_00409a88:
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
                if (*(int *)(puVar13 + puVar32[5] * 0x10) != 5) goto LAB_00409fbc;
                local_6b8 = (undefined2 *)CONCAT44(local_6b8._4_4_,1);
                local_680 = *(uint *)((long)(puVar13 + puVar32[5] * 0x10) + 0x10);
              }
              if (puVar32[8] != -1) {
                if (*(int *)(puVar13 + puVar32[8] * 0x10) != 5) goto LAB_00409fbc;
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
LAB_00409e72:
                      puVar31 = puVar14;
                      if (puVar14 == (undefined *)0xffffffffffffffff) goto LAB_00409880;
                    }
                  }
                  else {
                    if ((long)puVar31 < 0) goto LAB_00409880;
                    puVar31 = (undefined *)((long)puVar31 * 2);
                    if (puVar31 < puVar14) goto LAB_00409e72;
                  }
                  if ((puVar20 == (undefined2 *)0x0) || (puVar20 == local_690)) {
                    _local_6a8 = (float10)CONCAT91(stack0xfffffffffffff959,puVar20 == local_690);
                    *(undefined8 *)(puVar27 + -8) = 0x40a11e;
                    puVar13 = (undefined2 *)malloc((size_t)puVar31);
                    if (puVar13 == (undefined2 *)0x0) goto LAB_00409880;
                    if ((__n != (undefined *)0x0) && (local_6a8[0] != '\0')) {
                      *(undefined8 *)(puVar27 + -8) = 0x40a150;
                      puVar13 = (undefined2 *)memcpy(puVar13,puVar20,(size_t)__n);
                    }
                  }
                  else {
                    *(undefined8 *)(puVar27 + -8) = 0x409778;
                    puVar13 = (undefined2 *)realloc(puVar20,(size_t)puVar31);
                    if (puVar13 == (undefined2 *)0x0) goto LAB_00409880;
                  }
                }
              }
              else if (puVar31 != (undefined *)0xffffffffffffffff) goto LAB_00409880;
              *(undefined *)((long)puVar13 + (long)__n) = 0;
              local_6c8 = puVar13;
              *(undefined8 *)(puVar27 + -8) = 0x409795;
              puVar15 = (uint *)__errno_location();
              puVar13 = local_6c8;
              local_6c8 = puVar24;
              _local_6a8 = (float10)CONCAT28(auStack_6a4._4_2_,puVar15);
              local_6e8 = (undefined2 *)((ulong)local_6e8 & 0xffffffff00000000 | (ulong)*puVar15);
LAB_004097b8:
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
                goto switchD_004099ec_caseD_5;
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
                  goto LAB_0040a092;
                }
                if ((uint)local_6b8 != 2) {
                  *(int **)(puVar27 + -0x10) = &local_684;
LAB_00409afa:
                  puVar14 = local_6b0;
                  *(undefined8 *)(puVar27 + -0x18) = 0x409b17;
                  iVar10 = __snprintf_chk((undefined *)((long)puVar13 + (long)__n),uVar11,1,
                                          0xffffffffffffffff,puVar14,piVar16);
                  goto LAB_00409b20;
                }
                *(int **)(puVar27 + -0x10) = &local_684;
                *(int **)(puVar27 + -0x18) = piVar16;
                goto LAB_0040a046;
              case 0xb:
                local_6d0 = puVar13;
                uVar1 = *(undefined8 *)(local_670 + puVar32[10] * 0x10 + 8);
                if ((uint)local_6b8 == 1) {
                  *(int **)(puVar27 + -0x10) = &local_684;
                }
                else {
                  if ((uint)local_6b8 != 2) {
                    *(undefined8 *)(puVar27 + -8) = 0x409dee;
                    iVar10 = __snprintf_chk(uVar1,(undefined *)((long)puVar13 + (long)__n),uVar11,1,
                                            0xffffffffffffffff,puVar14,&local_684);
                    goto LAB_00409b20;
                  }
                  *(int **)(puVar27 + -8) = &local_684;
                  *(ulong *)(puVar27 + -0x10) = (ulong)local_67c;
                }
                uVar4 = local_680;
                puVar14 = local_6b0;
                *(undefined8 *)(puVar27 + -0x18) = 0x40a28e;
                iVar10 = __snprintf_chk(uVar1,(undefined *)((long)puVar13 + (long)__n),uVar11,1,
                                        0xffffffffffffffff,puVar14,uVar4);
                goto LAB_00409b20;
              case 0xc:
                local_6d0 = puVar13;
                Var2 = *(unkbyte10 *)(local_670 + puVar32[10] * 0x10 + 8);
                if ((uint)local_6b8 != 1) {
                  if ((uint)local_6b8 != 2) {
                    piVar16 = &local_684;
                    *(unkbyte10 *)(puVar27 + -0x10) = Var2;
                    goto LAB_00409afa;
                  }
                  *(int **)(puVar27 + -0x10) = &local_684;
                  uVar19 = (ulong)local_67c;
                  *(unkbyte10 *)(puVar27 + -0x20) = Var2;
                  *(ulong *)(puVar27 + -0x30) = uVar19;
                  *(undefined8 *)(puVar27 + -0x38) = 0x40a2ef;
                  iVar10 = __snprintf_chk((undefined *)((long)puVar13 + (long)__n),uVar11,1,
                                          0xffffffffffffffff,puVar14,uVar4);
                  goto LAB_00409b20;
                }
                *(int **)(puVar27 + -0x10) = &local_684;
                *(unkbyte10 *)(puVar27 + -0x20) = Var2;
                goto LAB_0040a04d;
              }
              local_6d0 = puVar13;
              if ((uint)local_6b8 == 1) {
                *(int **)(puVar27 + -8) = &local_684;
                *(ulong *)(puVar27 + -0x10) = uVar19;
LAB_0040a092:
                uVar19 = (ulong)local_680;
LAB_00409c3a:
                puVar14 = local_6b0;
                *(undefined8 *)(puVar27 + -0x18) = 0x409c57;
                iVar10 = __snprintf_chk((undefined *)((long)puVar13 + (long)__n),uVar11,1,
                                        0xffffffffffffffff,puVar14,uVar19);
                if (-1 < local_684) goto LAB_00409b2e;
LAB_00409c6e:
                puVar24 = local_6d0;
                if (*(char *)((long)local_6c8 + 1) == '\0') {
                  if (iVar10 < 0) {
                    iVar10 = *_local_6a8;
                    if ((iVar10 == 0) && (iVar10 = 0x54, (*(byte *)(puVar32 + 9) & 0xef) != 99)) {
                      iVar10 = 0x16;
                    }
                    if ((local_6d0 != local_690) && (local_6d0 != (undefined2 *)0x0)) {
                      *(undefined8 *)(puVar27 + -8) = 0x409cc4;
                      free(puVar24);
                    }
                    puVar31 = local_6e0;
                    if (local_6e0 != (undefined *)0x0) {
                      *(undefined8 *)(puVar27 + -8) = 0x409cd8;
                      free(puVar31);
                    }
                    if (local_580 != auStack_568) {
                      *(undefined8 *)(puVar27 + -8) = 0x409cf4;
                      free(local_580);
                    }
                    if (local_670 != auStack_668) {
                      *(undefined8 *)(puVar27 + -8) = 0x409d10;
                      free(local_670);
                    }
                    *_local_6a8 = iVar10;
                    return (undefined2 *)0x0;
                  }
                  goto LAB_00409b48;
                }
                *(undefined *)((long)local_6c8 + 1) = 0;
                puVar13 = local_6d0;
                goto LAB_004097b8;
              }
              if ((uint)local_6b8 != 2) {
                *(int **)(puVar27 + -0x10) = &local_684;
                goto LAB_00409c3a;
              }
              *(int **)(puVar27 + -0x10) = &local_684;
              *(ulong *)(puVar27 + -0x18) = uVar19;
LAB_0040a046:
              *(ulong *)(puVar27 + -0x20) = (ulong)local_67c;
LAB_0040a04d:
              uVar4 = local_680;
              puVar14 = local_6b0;
              *(undefined8 *)(puVar27 + -0x28) = 0x40a071;
              iVar10 = __snprintf_chk((undefined *)((long)puVar13 + (long)__n),uVar11,1,
                                      0xffffffffffffffff,puVar14,uVar4);
LAB_00409b20:
              if (local_684 < 0) goto LAB_00409c6e;
LAB_00409b2e:
              if (((ulong)(long)local_684 < uVar11) &&
                 (((undefined *)((long)local_684 + (long)local_6d0))[(long)__n] != '\0'))
              goto LAB_00409fbc;
              if (local_684 < iVar10) {
LAB_00409b48:
                local_684 = iVar10;
              }
              puVar24 = local_6d0;
              puVar20 = local_6d0;
              if (uVar11 <= local_684 + 1) {
                if (0x7ffffffe < uVar12) {
                  if ((local_6d0 != local_690) && (local_6d0 != (undefined2 *)0x0)) {
                    *(undefined8 *)(puVar27 + -8) = 0x40a356;
                    free(puVar24);
                  }
                  puVar31 = local_6e0;
                  if (local_6e0 != (undefined *)0x0) {
                    *(undefined8 *)(puVar27 + -8) = 0x40a36a;
                    free(puVar31);
                  }
                  if (local_580 != auStack_568) {
                    *(undefined8 *)(puVar27 + -8) = 0x40a386;
                    free(local_580);
                  }
                  if (local_670 != auStack_668) {
                    *(undefined8 *)(puVar27 + -8) = 0x40a3a2;
                    free(local_670);
                  }
                  *_local_6a8 = 0x4b;
                  return (undefined2 *)0x0;
                }
                puVar13 = local_6d0;
                if ((long)puVar31 < 0) {
                  if (puVar31 != (undefined *)0xffffffffffffffff) goto LAB_0040988f;
                }
                else {
                  if (CARRY8((ulong)(local_684 + 2),(ulong)__n) != false) goto LAB_0040988f;
                  puVar14 = __n + (local_684 + 2);
                  if (__n + (local_684 + 2) <= (undefined *)((long)puVar31 * 2)) {
                    puVar14 = (undefined *)((long)puVar31 * 2);
                  }
                  if (puVar31 < puVar14) {
                    puVar31 = (undefined *)((long)puVar31 * 2);
                    if ((puVar31 < puVar14) &&
                       (puVar31 = puVar14, puVar14 == (undefined *)0xffffffffffffffff))
                    goto LAB_0040988f;
                    bVar33 = local_6d0 == local_690;
                    if ((local_6d0 == (undefined2 *)0x0) || (bVar33)) {
                      *(undefined8 *)(puVar27 + -8) = 0x409fef;
                      puVar13 = (undefined2 *)malloc((size_t)puVar31);
                      puVar24 = local_6d0;
                      puVar20 = local_6d0;
                      if (puVar13 == (undefined2 *)0x0) goto LAB_0040988f;
                      if ((__n != (undefined *)0x0) && (bVar33)) {
                        *(undefined8 *)(puVar27 + -8) = 0x40a01d;
                        puVar13 = (undefined2 *)memcpy(puVar13,puVar24,(size_t)__n);
                      }
                    }
                    else {
                      *(undefined8 *)(puVar27 + -8) = 0x409bdd;
                      puVar13 = (undefined2 *)realloc(puVar24,(size_t)puVar31);
                      puVar20 = local_6d0;
                      if (puVar13 == (undefined2 *)0x0) goto LAB_0040988f;
                    }
                  }
                }
                goto LAB_004097b8;
              }
              __n = __n + local_684;
              *_local_6a8 = local_6e8._0_4_;
            }
          }
LAB_00409987:
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
        goto LAB_00409354;
      }
    }
  }
  goto LAB_004099b0;
LAB_00409880:
  *(undefined8 *)(puVar27 + -8) = 0x409885;
  piVar16 = __errno_location();
  _local_6a8 = (float10)CONCAT28(auStack_6a4._4_2_,piVar16);
LAB_0040988f:
  if ((puVar20 != local_690) && (puVar20 != (undefined2 *)0x0)) {
LAB_00409aa8:
    *(undefined8 *)(puVar27 + -8) = 0x409ab0;
    free(puVar20);
  }
  puVar31 = local_6e0;
  if (local_6e0 != (undefined *)0x0) {
    *(undefined8 *)(puVar27 + -8) = 0x4098b9;
    free(puVar31);
    goto LAB_004098b9;
  }
LAB_004099b0:
  *(undefined8 *)(puVar27 + -8) = 0x4099b5;
  piVar16 = __errno_location();
  _local_6a8 = (float10)CONCAT28(auStack_6a4._4_2_,piVar16);
LAB_004098b9:
  if (local_580 != auStack_568) {
    *(undefined8 *)(puVar27 + -8) = 0x4098d5;
    free(local_580);
  }
  if (local_670 != auStack_668) {
    *(undefined8 *)(puVar27 + -8) = 0x4098f1;
    free(local_670);
  }
  *_local_6a8 = 0xc;
  return (undefined2 *)0x0;
}


undefined8 FUN_0040adb0(uint *param_1,ulong *param_2)

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
          puVar4 = &DAT_00411250;
        }
        *(undefined **)(puVar2 + 4) = puVar4;
      }
      uVar6 = uVar6 + 1;
      puVar2 = puVar2 + 8;
    } while (uVar6 <= *param_2 && *param_2 != uVar6);
  }
  return 0;
}


undefined8 FUN_0040afd0(byte *param_1,ulong *param_2,byte **param_3)

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
LAB_0040b04b:
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
LAB_0040b116:
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
        if (bVar17 != 0x49) goto LAB_0040b178;
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
  if (bVar4 != 0x24) goto LAB_0040b116;
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
      if (9 < (byte)(bVar17 - 0x30)) goto switchD_0040b357_caseD_26;
    }
  } while ((byte)(bVar17 - 0x30) < 10);
  if (pbVar11 + -1 < (byte *)0xfffffffffffffffe) {
    param_1 = pbVar18 + 2;
    bVar17 = pbVar18[2];
    pbVar18 = pbVar11 + -1;
    goto LAB_0040b116;
  }
  goto switchD_0040b357_caseD_26;
LAB_0040b178:
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
joined_r0x0040b28a:
    uVar8 = local_70;
    local_68 = pbVar12;
    if (bVar17 != 0x2e) goto LAB_0040b191;
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
      goto LAB_0040b191;
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
      if (bVar17 != 0x24) goto LAB_0040b2cf;
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
          if (9 < bVar17) goto switchD_0040b357_caseD_26;
        }
      } while (bVar17 < 10);
      pbVar14 = (byte *)(uVar16 - 1);
      if ((byte *)0xfffffffffffffffd < pbVar14) goto switchD_0040b357_caseD_26;
      ppbVar3[8] = pbVar14;
      pbVar11 = pbVar12 + 2;
    }
    else {
LAB_0040b2cf:
      pbVar14 = ppbVar3[8];
      if (ppbVar3[8] == (byte *)0xffffffffffffffff) {
        local_68 = pbVar12 + 1;
        ppbVar3[8] = pbVar12;
        pbVar14 = pbVar12;
        if (pbVar12 == (byte *)0xffffffffffffffff) goto switchD_0040b357_caseD_26;
      }
    }
    __ptr = (byte **)param_3[1];
    if (pbVar14 < pbVar19) {
      pbVar12 = *param_3;
      __dest_00 = __ptr;
LAB_0040b2ee:
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
LAB_0040b191:
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
               (bVar17 != 0x74)) goto code_r0x0040b354;
            uVar5 = uVar5 + 8;
          }
          bVar17 = *param_1;
        } while( true );
      }
      if (iVar6 == 5) {
        bVar17 = *pbVar11;
        goto LAB_0040b191;
      }
      goto LAB_0040b79c;
    }
    pbVar19 = (byte *)((long)pbVar19 * 2);
    if (pbVar19 <= pbVar14) {
      pbVar19 = pbVar14 + 1;
    }
    if (pbVar19 < (byte *)0x800000000000000) {
      if (ppbVar2 == __ptr) {
        __dest_00 = (byte **)malloc((long)pbVar19 << 5);
        if (__dest_00 == (byte **)0x0) goto LAB_0040b989;
        pbVar12 = *param_3;
        __ptr = ppbVar2;
LAB_0040bc3b:
        memcpy(__dest_00,__ptr,(long)pbVar12 << 5);
        pbVar12 = *param_3;
      }
      else {
        __dest_00 = (byte **)realloc(__ptr,(long)pbVar19 << 5);
        __ptr = (byte **)param_3[1];
        if (__dest_00 == (byte **)0x0) goto LAB_0040b970;
        pbVar12 = *param_3;
        if (ppbVar2 == __ptr) goto LAB_0040bc3b;
      }
      param_3[1] = (byte *)__dest_00;
      goto LAB_0040b2ee;
    }
    goto LAB_0040b970;
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
    if (bVar17 != 0x24) goto LAB_0040b21d;
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
        if (9 < bVar17) goto switchD_0040b357_caseD_26;
      }
    } while (bVar17 < 10);
    pbVar14 = pbVar14 + -1;
    if ((byte *)0xfffffffffffffffd < pbVar14) goto switchD_0040b357_caseD_26;
    ppbVar3[5] = pbVar14;
    pbVar11 = pbVar10 + 2;
  }
  else {
LAB_0040b21d:
    pbVar14 = ppbVar3[5];
    if (ppbVar3[5] == (byte *)0xffffffffffffffff) {
      ppbVar3[5] = local_68;
      bVar21 = local_68 == (byte *)0xffffffffffffffff;
      pbVar14 = local_68;
      local_68 = local_68 + 1;
      if (bVar21) goto switchD_0040b357_caseD_26;
    }
  }
  __ptr = (byte **)param_3[1];
  if (pbVar14 < pbVar19) {
    pbVar12 = *param_3;
    __dest_00 = __ptr;
LAB_0040b23c:
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
      if (iVar6 != 5) goto LAB_0040b79c;
      bVar17 = *pbVar11;
      pbVar11 = pbVar11 + 1;
    }
    goto joined_r0x0040b28a;
  }
  pbVar19 = (byte *)((long)pbVar19 * 2);
  if (pbVar19 <= pbVar14) {
    pbVar19 = pbVar14 + 1;
  }
  if ((byte *)0x7ffffffffffffff < pbVar19) goto LAB_0040b970;
  if (ppbVar2 != __ptr) {
    __dest_00 = (byte **)realloc(__ptr,(long)pbVar19 << 5);
    __ptr = (byte **)param_3[1];
    if (__dest_00 != (byte **)0x0) {
      pbVar12 = *param_3;
      if (ppbVar2 == __ptr) goto LAB_0040ba89;
      goto LAB_0040b55d;
    }
    goto LAB_0040b970;
  }
  __dest_00 = (byte **)malloc((long)pbVar19 << 5);
  if (__dest_00 != (byte **)0x0) {
    pbVar12 = *param_3;
    __ptr = ppbVar2;
LAB_0040ba89:
    memcpy(__dest_00,__ptr,(long)pbVar12 << 5);
    pbVar12 = *param_3;
LAB_0040b55d:
    param_3[1] = (byte *)__dest_00;
    goto LAB_0040b23c;
  }
  goto LAB_0040b989;
code_r0x0040b354:
  switch(bVar17) {
  case 0x25:
    goto switchD_0040b357_caseD_25;
  default:
    goto switchD_0040b357_caseD_26;
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
switchD_0040b357_caseD_26:
      __dest_00 = (byte **)param_3[1];
      goto LAB_0040b79c;
    }
  }
  else {
    ppbVar3[10] = pbVar18;
  }
  __ptr = (byte **)param_3[1];
  __dest_00 = __ptr;
  if (pbVar18 < pbVar19) {
LAB_0040b385:
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
LAB_0040b79c:
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
switchD_0040b357_caseD_25:
    *(byte *)(ppbVar3 + 9) = bVar17;
    uVar8 = *param_2;
    ppbVar3[1] = param_1;
    uVar8 = uVar8 + 1;
    *param_2 = uVar8;
    if (uVar8 < uVar20) {
      __dest = (ulong *)param_2[1];
      goto LAB_0040b04b;
    }
    if (((long)uVar20 < 0) || (0x2e8ba2e8ba2e8ba < uVar20 * 2)) {
LAB_0040bcc3:
      __ptr = (byte **)param_3[1];
      goto LAB_0040b970;
    }
    __ptr_00 = (ulong *)param_2[1];
    if (puVar1 != __ptr_00) {
      __dest = (ulong *)realloc(__ptr_00,uVar20 * 0xb0);
      if (__dest == (ulong *)0x0) goto LAB_0040bcc3;
      __ptr_00 = (ulong *)param_2[1];
      uVar8 = *param_2;
      if (puVar1 != __ptr_00) goto LAB_0040b45f;
LAB_0040b584:
      __dest = (ulong *)memcpy(__dest,__ptr_00,uVar8 * 0x58);
      uVar8 = *param_2;
LAB_0040b45f:
      param_2[1] = (ulong)__dest;
      uVar20 = uVar20 * 2;
      goto LAB_0040b04b;
    }
    __dest = (ulong *)malloc(uVar20 * 0xb0);
    if (__dest != (ulong *)0x0) goto LAB_0040b584;
    __ptr = (byte **)param_3[1];
    if (ppbVar2 == __ptr) goto LAB_0040b999;
  }
  else {
    pbVar19 = (byte *)((long)pbVar19 * 2);
    if (pbVar19 <= pbVar18) {
      pbVar19 = pbVar18 + 1;
    }
    if (pbVar19 < (byte *)0x800000000000000) {
      if (ppbVar2 == __ptr) {
        __dest_00 = (byte **)malloc((long)pbVar19 << 5);
        if (__dest_00 == (byte **)0x0) goto LAB_0040b989;
LAB_0040b926:
        memcpy(__dest_00,__ptr,(long)*param_3 << 5);
LAB_0040b86b:
        param_3[1] = (byte *)__dest_00;
        goto LAB_0040b385;
      }
      __dest_00 = (byte **)realloc(__ptr,(long)pbVar19 << 5);
      if (__dest_00 != (byte **)0x0) {
        __ptr = ppbVar2;
        if (ppbVar2 == (byte **)param_3[1]) goto LAB_0040b926;
        goto LAB_0040b86b;
      }
      goto LAB_0040bcc3;
    }
LAB_0040b970:
    if (ppbVar2 == __ptr) goto LAB_0040b989;
  }
  free(__ptr);
LAB_0040b989:
  if (puVar1 != (ulong *)param_2[1]) {
    free((ulong *)param_2[1]);
  }
LAB_0040b999:
  piVar9 = __errno_location();
  *piVar9 = 0xc;
  return 0xffffffff;
}


/* WARNING: Removing unreachable block (ram,0x0040bd13) */
/* WARNING: Removing unreachable block (ram,0x0040bd18) */

void FUN_0040bce0(void)

{
  __DT_INIT();
  return;
}


void FUN_0040bd40(void)

{
  return;
}


void FUN_0040bd50(undefined8 param_1)

{
  __cxa_atexit(param_1,0,DAT_00613228);
  return;
}


undefined8 FUN_0040bd68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code **ppcVar1;
  
  for (ppcVar1 = (code **)&DAT_00612e30; *ppcVar1 != (code *)0xffffffffffffffff;
      ppcVar1 = ppcVar1 + -1) {
    (**ppcVar1)();
  }
  return param_3;
}


void __DT_FINI(void)

{
  FUN_00402621();
  return;
}

