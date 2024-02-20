
void switchD_004057e0::caseD_b(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401bb5(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401bba(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401bbf(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401bc4(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void switchD_004072ba::caseD_0(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401bce(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void switchD_00409f0c::caseD_5(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00401be0(uint param_1,undefined8 *param_2)

{
  char *pcVar1;
  bool bVar2;
  byte *pbVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  byte *pbVar10;
  ushort **ppuVar11;
  int *piVar12;
  undefined8 uVar13;
  ulong uVar14;
  uint *puVar15;
  char extraout_DL;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  byte *pbVar19;
  uint *puVar20;
  uint *puVar21;
  byte *pbVar22;
  ulong uVar23;
  byte *pbVar24;
  byte *unaff_R15;
  uint local_64;
  byte *local_60;
  undefined8 local_50;
  byte *local_48 [3];
  
  uVar23 = (ulong)param_1;
  FUN_004055f0(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils",
                 "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale"
                );
  textdomain("coreutils");
  FUN_0040c270(FUN_004051b0);
  lVar9 = 0;
  do {
    (&DAT_006123a0)[lVar9] = 0;
    lVar9 = lVar9 + 1;
  } while (lVar9 != 9);
  DAT_006123b0 = 3;
  DAT_006123c0 = 5;
  _DAT_006123a4 = 0x200000001;
  lVar9 = 0;
  do {
    (&DAT_00612340)[lVar9] = 0;
    lVar9 = lVar9 + 1;
  } while (lVar9 != 0x11);
  DAT_00612350 = 6;
  uVar18 = 1;
  pbVar10 = (byte *)0x0;
  bVar2 = false;
  DAT_00612380 = 8;
  DAT_00612360 = 7;
  DAT_006123f0 = 0;
  DAT_006123e8 = 0;
  DAT_006123f8 = 0;
  DAT_00612420 = FUN_00402d50;
  DAT_00612444 = 8;
  DAT_00612440 = 7;
  DAT_00612432 = 0;
LAB_00401cf8:
  local_50 = (byte *)CONCAT44(local_50._4_4_,0xffffffff);
  iVar6 = FUN_00408f90(uVar23,param_2,"A:aBbcDdeFfHhIij:LlN:OoS:st:vw::Xx",
                       &PTR_s_skip_bytes_0040cf80,&local_50);
  if (iVar6 != -1) {
    uVar7 = (uint)uVar18;
    switch(iVar6) {
    case 0x41:
      cVar4 = *DAT_006125e0;
      if (cVar4 != 'n') {
        if (cVar4 < 'o') {
          if (cVar4 == 'd') {
            DAT_00612444 = 10;
            bVar2 = true;
            DAT_00612420 = FUN_00402d50;
            DAT_00612440 = 7;
            goto LAB_00401cf8;
          }
        }
        else {
          if (cVar4 == 'o') {
            DAT_00612444 = 8;
            bVar2 = true;
            DAT_00612420 = FUN_00402d50;
            DAT_00612440 = 7;
            goto LAB_00401cf8;
          }
          if (cVar4 == 'x') {
            DAT_00612444 = 0x10;
            bVar2 = true;
            DAT_00612420 = FUN_00402d50;
            DAT_00612440 = 6;
            goto LAB_00401cf8;
          }
        }
        uVar13 = dcgettext(0,
                           "invalid output address radix \'%c\'; it must be one character from [doxn]"
                           ,5);
        error(1,0,uVar13,(int)cVar4);
        goto LAB_00402c0e;
      }
      DAT_00612440 = 0;
      bVar2 = true;
      DAT_00612420 = FUN_00402d40;
      goto LAB_00401cf8;
    case 0x42:
    case 0x6f:
      uVar16 = FUN_004040c0(&DAT_0040c45a);
      uVar18 = (ulong)(uVar7 & uVar16);
      goto LAB_00401cf8;
    case 0x44:
      uVar16 = FUN_004040c0(&DAT_0040c442);
      uVar18 = (ulong)(uVar7 & uVar16);
      goto LAB_00401cf8;
    case 0x46:
    case 0x65:
      uVar16 = FUN_004040c0(&DAT_0040c448);
      uVar18 = (ulong)(uVar7 & uVar16);
      goto LAB_00401cf8;
    case 0x48:
    case 0x58:
      uVar16 = FUN_004040c0(&DAT_0040c44e);
      uVar18 = (ulong)(uVar7 & uVar16);
      goto LAB_00401cf8;
    case 0x49:
    case 0x4c:
    case 0x6c:
      uVar16 = FUN_004040c0(&DAT_0040c454);
      uVar18 = (ulong)(uVar7 & uVar16);
      goto LAB_00401cf8;
    case 0x4e:
      DAT_00612410 = 1;
      iVar6 = FUN_00407ce0(DAT_006125e0,0,0,&DAT_00612408,"bEGKkMmPTYZ0");
      if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00407c50(iVar6,(ulong)local_50 & 0xffffffff,0x4e,&PTR_s_skip_bytes_0040cf80,DAT_006125e0
                    );
      }
      break;
    case 0x4f:
      uVar16 = FUN_004040c0(&DAT_0040c457);
      uVar18 = (ulong)(uVar7 & uVar16);
      goto LAB_00401cf8;
    case 0x53:
      if (DAT_006125e0 == (char *)0x0) {
        DAT_00612438 = (byte *)0x3;
      }
      else {
        iVar6 = FUN_00407ce0(DAT_006125e0,0,0,local_48,"bEGKkMmPTYZ0");
        if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00407c50(iVar6,(ulong)local_50 & 0xffffffff,0x53,&PTR_s_skip_bytes_0040cf80,
                       DAT_006125e0);
        }
        DAT_00612438 = local_48[0];
      }
      DAT_00612432 = 1;
      bVar2 = true;
      goto LAB_00401cf8;
    case 0x61:
      uVar16 = FUN_004040c0(&DAT_0040c2fe);
      uVar18 = (ulong)(uVar7 & uVar16);
      goto LAB_00401cf8;
    case 0x62:
      uVar16 = FUN_004040c0(&DAT_0040c43f);
      uVar18 = (ulong)(uVar7 & uVar16);
      goto LAB_00401cf8;
    case 99:
      uVar16 = FUN_004040c0(&DAT_0040c2e1);
      uVar18 = (ulong)(uVar7 & uVar16);
      goto LAB_00401cf8;
    case 100:
      uVar16 = FUN_004040c0(&DAT_0040c445);
      uVar18 = (ulong)(uVar7 & uVar16);
      goto LAB_00401cf8;
    case 0x66:
      uVar16 = FUN_004040c0(&DAT_0040c44b);
      uVar18 = (ulong)(uVar7 & uVar16);
      goto LAB_00401cf8;
    case 0x68:
    case 0x78:
      uVar16 = FUN_004040c0(&DAT_0040c460);
      uVar18 = (ulong)(uVar7 & uVar16);
      goto LAB_00401cf8;
    case 0x69:
      uVar16 = FUN_004040c0(&DAT_0040c451);
      uVar18 = (ulong)(uVar7 & uVar16);
      goto LAB_00401cf8;
    case 0x6a:
      iVar6 = FUN_00407ce0(DAT_006125e0,0,0,&DAT_00612418,"bEGKkMmPTYZ0");
      if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00407c50(iVar6,(ulong)local_50 & 0xffffffff,0x6a,&PTR_s_skip_bytes_0040cf80,DAT_006125e0
                    );
      }
      break;
    case 0x73:
      uVar16 = FUN_004040c0(&DAT_0040c45d);
      uVar18 = (ulong)(uVar7 & uVar16);
      goto LAB_00401cf8;
    case 0x74:
      if (DAT_006125e0 == (char *)0x0) {
LAB_00402c0e:
                    /* WARNING: Subroutine does not return */
        __assert_fail("s != NULL","src/od.c",0x3d7,"decode_format_string");
      }
      uVar16 = FUN_004040c0();
      bVar2 = true;
      uVar18 = (ulong)(uVar7 & uVar16);
      goto LAB_00401cf8;
    case 0x76:
      DAT_00612251 = 0;
      bVar2 = true;
      goto LAB_00401cf8;
    case 0x77:
      if (DAT_006125e0 == (char *)0x0) {
        pbVar10 = (byte *)0x1;
        bVar2 = true;
        unaff_R15 = &DAT_00000020;
      }
      else {
        iVar6 = FUN_00407ce0(DAT_006125e0,0,10,local_48,"");
        if (iVar6 != 0) goto LAB_00402bcc;
        pbVar10 = (byte *)0x1;
        bVar2 = true;
        unaff_R15 = local_48[0];
      }
      goto LAB_00401cf8;
    case 0x80:
      DAT_00612431 = '\x01';
      goto LAB_00401cf8;
    case 0x81:
      goto switchD_00401d33_caseD_81;
    case -0x83:
      FUN_00407690(stdout,&DAT_0040c3a1,"GNU coreutils",PTR_DAT_00612258,"Jim Meyering",0);
                    /* WARNING: Subroutine does not return */
      exit(0);
    case -0x82:
      FUN_00404960(0);
      goto LAB_0040268d;
    default:
      goto switchD_00401d33_caseD_ffffff7f;
    }
    bVar2 = true;
    goto LAB_00401cf8;
  }
  if ((char)uVar18 == '\0') {
    return 1;
  }
  if ((DAT_00612432 != 0) && (DAT_006123f0 != 0)) {
    uVar13 = dcgettext(0,"no type may be specified when dumping strings",5);
    iVar6 = error(1,0,uVar13);
LAB_00402bcc:
                    /* WARNING: Subroutine does not return */
    FUN_00407c50(iVar6,(ulong)local_50 & 0xffffffff,0x77,&PTR_s_skip_bytes_0040cf80,DAT_006125e0);
  }
  lVar9 = (long)DAT_006122d8._4_4_;
  param_1 = param_1 - DAT_006122d8._4_4_;
  cVar4 = DAT_00612431;
  if (bVar2) {
    if (DAT_00612431 == '\0') goto LAB_004020ff;
    if (param_1 == 2) goto LAB_00402657;
    if (param_1 == 3) goto LAB_00402613;
    if (param_1 == 1) goto LAB_00402481;
  }
  else {
    if (param_1 == 2) {
LAB_00402657:
      if (((DAT_00612431 == '\0') && (cVar4 = *(char *)param_2[lVar9 + 1], cVar4 != '+')) &&
         (9 < (int)cVar4 - 0x30U)) {
        param_1 = 2;
      }
      else {
        cVar4 = FUN_00402e40((char *)param_2[lVar9 + 1],local_48);
        if (cVar4 == '\0') {
          param_1 = 2;
          goto LAB_0040263e;
        }
        if ((DAT_00612431 == '\0') ||
           (cVar4 = FUN_00402e40(param_2[DAT_006122d8._4_4_],&local_50), cVar4 == '\0')) {
          param_1 = 1;
          DAT_00612418 = local_48[0];
          param_2[(long)DAT_006122d8._4_4_ + 1] = param_2[DAT_006122d8._4_4_];
          param_2 = param_2 + 1;
        }
        else {
          DAT_00612430 = '\x01';
          param_2 = param_2 + 2;
          param_1 = 0;
          DAT_00612418 = local_50;
          local_60 = local_48[0];
        }
      }
      goto LAB_004020ff;
    }
    if (param_1 == 3) goto LAB_00402613;
    if (param_1 == 1) {
      if ((DAT_00612431 != '\0') || (*(char *)param_2[lVar9] == '+')) {
LAB_00402481:
        cVar4 = FUN_00402e40(param_2[lVar9],&local_50);
        if (cVar4 != '\0') {
          DAT_00612418 = local_50;
          param_2 = param_2 + 1;
          param_1 = 0;
          goto LAB_004020ff;
        }
      }
      param_1 = 1;
      goto LAB_004020ff;
    }
  }
  if ((1 < (int)param_1) && (DAT_00612431 != '\0')) {
    while( true ) {
      uVar18 = FUN_00407210(param_2[lVar9 + 1]);
      uVar13 = dcgettext(0,"extra operand %s",5);
      error(0,0,uVar13,uVar18);
      uVar13 = dcgettext(0,"compatibility mode supports at most one file",5);
      error(0,0,&DAT_0040e4cc,uVar13);
switchD_00401d33_caseD_ffffff7f:
      lVar9 = FUN_00404960(1);
      cVar4 = extraout_DL;
LAB_00402613:
      param_1 = 3;
      if (cVar4 == '\0') goto LAB_004020ff;
      cVar4 = FUN_00402e40(param_2[lVar9 + 1],&local_50);
      if ((cVar4 != '\0') &&
         (cVar4 = FUN_00402e40(param_2[(long)DAT_006122d8._4_4_ + 2],local_48), cVar4 != '\0'))
      break;
      param_1 = 3;
LAB_0040263e:
      if (DAT_00612431 == '\0') goto LAB_004020ff;
      lVar9 = (long)DAT_006122d8._4_4_;
    }
    DAT_00612430 = '\x01';
    param_1 = 1;
    DAT_00612418 = local_50;
    local_60 = local_48[0];
    param_2[(long)DAT_006122d8._4_4_ + 2] = param_2[DAT_006122d8._4_4_];
    param_2 = param_2 + 2;
  }
LAB_004020ff:
  if (DAT_00612430 != '\0') {
    if (DAT_00612420 == FUN_00402d40) {
      DAT_00612444 = 8;
      DAT_00612440 = 7;
      DAT_00612420 = FUN_00404010;
    }
    else {
      DAT_00612420 = FUN_00404090;
    }
  }
  if ((DAT_00612410 != 0) &&
     (DAT_00612400 = DAT_00612418 + DAT_00612408, CARRY8(DAT_00612408,(ulong)DAT_00612418))) {
    uVar13 = dcgettext(0,"skip-bytes + read-bytes is too large",5);
    error(1,0,uVar13);
LAB_00402b73:
                    /* WARNING: Subroutine does not return */
    __assert_fail("n_bytes_read == bytes_per_block","src/od.c",0x575,"dump");
  }
  if (DAT_006123f0 == 0) goto LAB_004024f9;
LAB_00402156:
  DAT_006123d0 = &PTR_DAT_0040d170;
  if (0 < (int)param_1) {
    DAT_006123d0 = (undefined **)(param_2 + DAT_006122d8._4_4_);
  }
  param_1 = FUN_00403a50();
  if (DAT_006123c8 != 0) {
    uVar7 = FUN_00403b50();
    param_1 = param_1 & uVar7;
    local_64 = param_1 & 0xff;
    if (DAT_006123c8 == 0) goto LAB_004023ed;
    _DAT_00612428 = 0;
    if (DAT_00612430 != '\0') {
      _DAT_00612428 = (long)local_60 - (long)DAT_00612418;
    }
    if (DAT_006123f0 == 0) {
      uVar7 = 1;
      if ((char)pbVar10 == '\0') {
LAB_00402593:
        pbVar10 = (byte *)(long)(int)((int)(0x10 / (long)(int)uVar7) * uVar7);
      }
      else {
        pbVar10 = unaff_R15;
        if (unaff_R15 == (byte *)0x0) {
          pbVar24 = (byte *)0x1;
          uVar7 = 1;
          goto LAB_0040225f;
        }
      }
LAB_00402299:
      DAT_006123e0 = pbVar10;
      if (DAT_006123f0 != 0) goto LAB_004022a5;
    }
    else {
      uVar7 = 1;
      puVar21 = (uint *)(DAT_006123f8 + 4);
      do {
        uVar16 = *puVar21;
        uVar23 = (long)(int)uVar7;
        uVar17 = (long)*(int *)(&DAT_0040d220 + (ulong)uVar16 * 4);
        do {
          uVar14 = uVar17;
          uVar17 = uVar23 % uVar14;
          uVar23 = uVar14;
        } while (uVar17 != 0);
        puVar21 = puVar21 + 10;
        uVar7 = uVar7 * (int)((ulong)(long)*(int *)(&DAT_0040d220 + (ulong)uVar16 * 4) / uVar14);
      } while ((uint *)(DAT_006123f8 + 4 + DAT_006123f0 * 0x28) != puVar21);
      if ((char)pbVar10 != '\0') {
        pbVar24 = (byte *)(long)(int)uVar7;
        if ((unaff_R15 == (byte *)0x0) ||
           (pbVar10 = unaff_R15, (ulong)unaff_R15 % (ulong)pbVar24 != 0)) {
LAB_0040225f:
          local_60 = (byte *)((ulong)local_60 & 0xffffffff00000000 | (ulong)uVar7);
          uVar13 = dcgettext(0,"warning: invalid width %lu; using %d instead",5);
          error(0,0,uVar13,unaff_R15,(ulong)uVar7);
          pbVar10 = pbVar24;
        }
        goto LAB_00402299;
      }
      if ((int)uVar7 < 0x10) goto LAB_00402593;
      DAT_006123e0 = (byte *)(long)(int)uVar7;
LAB_004022a5:
      pbVar10 = DAT_006123e0;
      uVar7 = 0;
      puVar21 = (uint *)(DAT_006123f8 + 4 + DAT_006123f0 * 0x28);
      puVar20 = (uint *)(DAT_006123f8 + 4);
      do {
        uVar16 = (puVar20[6] + 1) *
                 (int)((ulong)DAT_006123e0 /
                      (ulong)(long)*(int *)(&DAT_0040d220 + (ulong)*puVar20 * 4));
        if (uVar7 < uVar16) {
          uVar7 = uVar16;
        }
        puVar20 = puVar20 + 10;
        puVar15 = (uint *)(DAT_006123f8 + 4);
      } while (puVar21 != puVar20);
      do {
        puVar20 = puVar15 + 10;
        puVar15[7] = uVar7 - (int)((ulong)pbVar10 /
                                  (ulong)(long)*(int *)(&DAT_0040d220 + (ulong)*puVar15 * 4)) *
                             puVar15[6];
        puVar15 = puVar20;
      } while (puVar21 != puVar20);
    }
    uVar23 = (ulong)DAT_00612432;
    if (DAT_00612432 != 0) {
      local_48[0] = (byte *)0x64;
      if ((byte *)0x63 < DAT_00612438) {
        local_48[0] = DAT_00612438;
      }
      pbVar10 = (byte *)FUN_004077d0();
      pbVar22 = DAT_00612438;
      pbVar24 = DAT_00612418;
LAB_00402357:
      do {
        pbVar19 = pbVar22;
        if ((DAT_00612410 != 0) &&
           ((DAT_00612400 < pbVar19 || (DAT_00612400 + -(long)pbVar19 <= pbVar24)))) {
          free(pbVar10);
          bVar5 = FUN_004038f0(0);
          bVar5 = (byte)uVar23 & bVar5;
          goto LAB_004023db;
        }
        if (pbVar19 != (byte *)0x0) {
          pbVar19 = (byte *)0x0;
          unaff_R15 = pbVar24 + 1;
          do {
            pbVar24 = unaff_R15 + (long)pbVar19;
            uVar7 = FUN_00403d20(&local_50);
            pbVar3 = local_50;
            uVar7 = (uint)uVar23 & uVar7;
            uVar23 = (ulong)uVar7;
            bVar5 = (byte)uVar7;
            if ((int)local_50 < 0) goto LAB_004023d3;
            ppuVar11 = __ctype_b_loc();
            pbVar22 = DAT_00612438;
            if ((*(byte *)((long)*ppuVar11 + (long)(int)local_50 * 2 + 1) & 0x40) == 0)
            goto LAB_00402357;
            pbVar10[(long)pbVar19] = (byte)pbVar3;
            pbVar19 = pbVar19 + 1;
          } while (pbVar19 < pbVar22);
        }
        while ((DAT_00612410 == 0 || (pbVar24 < DAT_00612400))) {
          if (local_48[0] == pbVar19) {
            pbVar10 = (byte *)FUN_00407930(pbVar10,local_48);
          }
          pbVar24 = pbVar24 + 1;
          uVar7 = FUN_00403d20(&local_50);
          pbVar3 = local_50;
          unaff_R15 = (byte *)((ulong)local_50 & 0xffffffff);
          uVar7 = (uint)uVar23 & uVar7;
          uVar23 = (ulong)uVar7;
          bVar5 = (byte)uVar7;
          if ((int)local_50 < 0) goto LAB_004023d3;
          if ((int)local_50 == 0) break;
          ppuVar11 = __ctype_b_loc();
          pbVar22 = DAT_00612438;
          if ((*(byte *)((long)*ppuVar11 + (long)(int)local_50 * 2 + 1) & 0x40) == 0)
          goto LAB_00402357;
          pbVar10[(long)pbVar19] = (byte)pbVar3;
          pbVar19 = pbVar19 + 1;
        }
        pbVar10[(long)pbVar19] = 0;
        (*DAT_00612420)(pbVar24 + ~(ulong)pbVar19,0x20);
        pbVar19 = pbVar10;
        while( true ) {
          pbVar22 = DAT_00612438;
          bVar5 = *pbVar19;
          local_50 = (byte *)((ulong)local_50 & 0xffffffff00000000 | (ulong)(uint)(int)(char)bVar5);
          if (bVar5 == 0) break;
          switch(bVar5) {
          case 7:
            fwrite_unlocked(&DAT_0040c2fd,1,2,stdout);
            break;
          case 8:
            fwrite_unlocked(&DAT_0040c2eb,1,2,stdout);
            break;
          case 9:
            fwrite_unlocked(&DAT_0040c2f7,1,2,stdout);
            break;
          case 10:
            fwrite_unlocked(&DAT_0040c2f1,1,2,stdout);
            break;
          case 0xb:
            fwrite_unlocked(&DAT_0040c2fa,1,2,stdout);
            break;
          case 0xc:
            fwrite_unlocked(&DAT_0040c2ee,1,2,stdout);
            break;
          case 0xd:
            fwrite_unlocked(&DAT_0040c2f4,1,2,stdout);
            break;
          default:
            pbVar22 = (byte *)stdout->_IO_write_ptr;
            if (pbVar22 < stdout->_IO_write_end) {
              stdout->_IO_write_ptr = (char *)(pbVar22 + 1);
              *pbVar22 = bVar5;
            }
            else {
              __overflow(stdout,(uint)bVar5);
            }
          }
          pbVar19 = pbVar19 + 1;
        }
        pcVar1 = stdout->_IO_write_ptr;
        if (pcVar1 < stdout->_IO_write_end) {
          stdout->_IO_write_ptr = pcVar1 + 1;
          *pcVar1 = '\n';
        }
        else {
          __overflow(stdout,10);
          pbVar22 = DAT_00612438;
        }
      } while( true );
    }
LAB_0040268d:
    if ((SUB168(ZEXT816(2) * ZEXT816(DAT_006123e0),0) < 0) ||
       (SUB168(ZEXT816(2) * ZEXT816(DAT_006123e0) >> 0x40,0) != 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00407a20();
    }
    local_48[0] = (byte *)FUN_004077d0((long)DAT_006123e0 * 2);
    uVar7 = (uint)DAT_00612410;
    local_48[1] = local_48[0] + (long)DAT_006123e0;
    pbVar10 = DAT_00612418;
    if (DAT_00612410 == 0) {
      unaff_R15 = (byte *)0x0;
      while( true ) {
        uVar16 = (uint)uVar23;
        pbVar24 = local_48[(int)unaff_R15];
        uVar7 = FUN_004048a0(DAT_006123e0,pbVar24,&local_50);
        uVar7 = uVar7 & (uint)uVar18;
        uVar18 = (ulong)uVar7;
        if (local_50 < DAT_006123e0) break;
        if (local_50 != DAT_006123e0) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("n_bytes_read == bytes_per_block","src/od.c",0x583,"dump");
        }
        uVar23 = (ulong)(uVar16 ^ 1);
        unaff_R15 = (byte *)(uVar23 & 0xff);
        FUN_00403d80(pbVar10,local_50,local_48[(long)unaff_R15],pbVar24);
        pbVar10 = pbVar10 + (long)local_50;
      }
LAB_00402745:
      pbVar24 = local_50;
      if (local_50 != (byte *)0x0) {
        iVar6 = 1;
        for (lVar9 = 0; uVar23 = (ulong)iVar6, lVar9 != DAT_006123f0; lVar9 = lVar9 + 1) {
          uVar18 = (long)*(int *)(&DAT_0040d220 +
                                 (ulong)*(uint *)(DAT_006123f8 + 4 + lVar9 * 0x28) * 4);
          do {
            uVar17 = uVar18;
            uVar18 = uVar23 % uVar17;
            uVar23 = uVar17;
          } while (uVar18 != 0);
          iVar6 = iVar6 * (int)((ulong)(long)*(int *)(&DAT_0040d220 +
                                                     (ulong)*(uint *)(DAT_006123f8 + 4 +
                                                                     lVar9 * 0x28) * 4) / uVar17);
        }
        unaff_R15 = local_48[(long)unaff_R15];
        memset(unaff_R15 + (long)local_50,0,
               ((ulong)(local_50 + (uVar23 - 1)) / uVar23) * uVar23 - (long)local_50);
        FUN_00403d80(pbVar10,pbVar24,local_48[(uVar16 ^ 1) & 0xff],unaff_R15);
        pbVar10 = pbVar10 + (long)local_50;
      }
    }
    else {
      for (; uVar16 = (uint)uVar23, pbVar10 < DAT_00612400; pbVar10 = pbVar10 + (long)local_50) {
        unaff_R15 = (byte *)(uVar23 & 0xff);
        pbVar24 = local_48[(long)unaff_R15];
        pbVar22 = DAT_00612400 + -(long)pbVar10;
        if (DAT_006123e0 < DAT_00612400 + -(long)pbVar10) {
          pbVar22 = DAT_006123e0;
        }
        uVar8 = FUN_004048a0(pbVar22,pbVar24,&local_50);
        uVar7 = uVar7 & uVar8;
        if (local_50 < DAT_006123e0) goto LAB_00402745;
        if (local_50 != DAT_006123e0) goto LAB_00402b73;
        uVar23 = (ulong)(uVar16 ^ 1);
        FUN_00403d80(pbVar10,local_50,local_48[uVar23 & 0xff],pbVar24);
      }
      local_50 = (byte *)0x0;
    }
    (*DAT_00612420)(pbVar10,10);
    if ((DAT_00612410 != 0) && (DAT_00612400 <= pbVar10)) {
      uVar16 = FUN_004038f0(0);
      uVar7 = uVar7 & uVar16;
    }
    uVar7 = uVar7 & 0xff;
    free(local_48[0]);
    goto LAB_004023df;
  }
  goto LAB_004023ed;
switchD_00401d33_caseD_81:
  lVar9 = FUN_004050d0("--endian",DAT_006125e0,&PTR_s_little_0040d110,&DAT_0040d100,4,
                       PTR_FUN_00612260);
  if (*(int *)(&DAT_0040d100 + lVar9 * 4) == 0) {
    DAT_00612321 = 0;
  }
  else if (*(int *)(&DAT_0040d100 + lVar9 * 4) == 1) {
    DAT_00612321 = 1;
  }
  goto LAB_00401cf8;
LAB_004023d3:
  free(pbVar10);
LAB_004023db:
  uVar7 = (uint)bVar5;
LAB_004023df:
  param_2 = (undefined8 *)(ulong)(local_64 & uVar7);
  param_1 = local_64 & uVar7 & 1;
LAB_004023ed:
  if ((DAT_006123c4 == '\0') || (iVar6 = FUN_00408120(stdin), iVar6 != -1)) {
    return (param_1 ^ 1) & 0xff;
  }
  uVar18 = dcgettext(0,"standard input",5);
  piVar12 = __errno_location();
  error(1,*piVar12,uVar18);
LAB_004024f9:
  FUN_004040c0(&DAT_0040c481);
  goto LAB_00402156;
}


void FUN_00402c60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_retaddr;
  undefined auStack_8 [8];
  
  (*(code *)PTR___libc_start_main_00611ff0)
            (FUN_00401be0,unaff_retaddr,&stack0x00000008,FUN_0040c200,FUN_0040c260,param_3,auStack_8
            );
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* WARNING: Removing unreachable block (ram,0x00402c98) */
/* WARNING: Removing unreachable block (ram,0x00402ca2) */

void FUN_00402c8b(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00402cd9) */

void FUN_00402caa(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00402d16) */

void FUN_00402ce1(void)

{
  if (DAT_00612308 != '\0') {
    return;
  }
  FUN_00402c8b();
  DAT_00612308 = 1;
  return;
}


/* WARNING: Removing unreachable block (ram,0x00402cd9) */

void thunk_FUN_00402caa(void)

{
  return;
}


void FUN_00402d40(void)

{
  return;
}


void FUN_00402d50(ulong param_1,undefined param_2)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  char *__s;
  char local_12 [18];
  
  pcVar4 = local_12 + 1;
  local_12[2] = 0;
  pcVar5 = pcVar4 + -(long)DAT_00612440;
  if (DAT_00612444 == 10) {
    do {
      pcVar4 = pcVar4 + -1;
      *pcVar4 = (char)param_1 + (char)(param_1 / 10) * -10 + '0';
      bVar1 = 9 < param_1;
      param_1 = param_1 / 10;
    } while (bVar1);
  }
  else if (DAT_00612444 == 0x10) {
    do {
      pcVar4 = pcVar4 + -1;
      uVar3 = (uint)param_1;
      param_1 = param_1 >> 4;
      *pcVar4 = "0123456789abcdef"[uVar3 & 0xf];
    } while (param_1 != 0);
  }
  else if (DAT_00612444 == 8) {
    do {
      pcVar4 = pcVar4 + -1;
      bVar2 = (byte)param_1;
      param_1 = param_1 >> 3;
      *pcVar4 = (bVar2 & 7) + 0x30;
    } while (param_1 != 0);
  }
  __s = pcVar4;
  if (pcVar5 < pcVar4) {
    do {
      pcVar4 = pcVar4 + -1;
      *pcVar4 = '0';
      __s = pcVar5;
    } while (pcVar5 != pcVar4);
  }
  local_12[1] = param_2;
  fputs_unlocked(__s,stdout);
  return;
}


undefined  [16] FUN_00402e40(char *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  ulong uVar2;
  char cVar3;
  
  if (*param_1 != '\0') {
    if (*param_1 == '+') {
      param_1 = param_1 + 1;
    }
    pcVar1 = strchr(param_1,0x2e);
    cVar3 = '\n';
    if ((pcVar1 == (char *)0x0) && (cVar3 = '\b', *param_1 == '0')) {
      cVar3 = ((param_1[1] & 0xdfU) == 0x58) * '\b' + '\b';
    }
    uVar2 = FUN_00407ce0(param_1,0,cVar3,param_2,&DAT_0040c2d5);
    return CONCAT88(param_4,uVar2 & 0xffffffffffffff00 | (ulong)((int)uVar2 == 0));
  }
  return ZEXT116(0) << 0x40;
}


void FUN_00402ec0(ulong param_1,ulong param_2,byte *param_3,undefined8 param_4,int param_5,
                 int param_6)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  ulong uVar7;
  byte local_3a;
  undefined local_39;
  
  if (param_2 < param_1) {
    uVar7 = (param_1 - 1) * (long)param_6;
    pbVar5 = param_3;
    iVar4 = param_6;
    do {
      pbVar6 = pbVar5 + 1;
      pbVar2 = &DAT_0040c2d8;
      bVar1 = (byte)(*pbVar5 & 0x7f);
      if (bVar1 != 0x7f) {
        if (bVar1 < 0x21) {
          pbVar2 = &DAT_0040d180 + (ulong)(*pbVar5 & 0x7f) * 4;
        }
        else {
          pbVar2 = &local_3a;
          local_39 = 0;
          local_3a = bVar1;
        }
      }
      iVar3 = (int)(uVar7 / param_1);
      uVar7 = uVar7 - (long)param_6;
      FUN_00407ac0(&DAT_0040c2dc,(iVar4 - iVar3) + param_5,pbVar2);
      pbVar5 = pbVar6;
      iVar4 = iVar3;
    } while (pbVar6 != param_3 + (param_1 - param_2));
    return;
  }
  return;
}


void FUN_00402f80(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4,int param_5,
                 int param_6)

{
  undefined uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  int iVar8;
  ulong uVar9;
  undefined8 local_40;
  undefined8 local_38;
  
  if (param_2 < param_1) {
    uVar5 = (param_1 - 1) * (long)param_6;
    uVar9 = param_1;
    iVar8 = param_6;
    do {
      uVar9 = uVar9 - 1;
      iVar2 = (int)(uVar5 / param_1);
      if (DAT_00612321 == '\0') {
        uVar6 = *param_3;
      }
      else {
        puVar7 = (undefined *)((long)param_3 + 7);
        puVar3 = &local_40;
        do {
          uVar1 = *puVar7;
          puVar4 = (undefined8 *)((long)puVar3 + 1);
          puVar7 = puVar7 + -1;
          *(undefined *)puVar3 = uVar1;
          puVar3 = puVar4;
          uVar6 = local_40;
        } while (&local_38 != puVar4);
      }
      param_3 = param_3 + 1;
      FUN_00407ac0(param_4,(iVar8 - iVar2) + param_5,uVar6);
      uVar5 = uVar5 - (long)param_6;
      iVar8 = iVar2;
    } while (uVar9 != param_2);
  }
  return;
}


void FUN_00403050(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4,int param_5,
                 int param_6)

{
  undefined uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  int iVar8;
  ulong uVar9;
  undefined8 local_40;
  undefined8 local_38;
  
  if (param_2 < param_1) {
    uVar5 = (param_1 - 1) * (long)param_6;
    uVar9 = param_1;
    iVar8 = param_6;
    do {
      uVar9 = uVar9 - 1;
      iVar2 = (int)(uVar5 / param_1);
      if (DAT_00612321 == '\0') {
        uVar6 = *param_3;
      }
      else {
        puVar7 = (undefined *)((long)param_3 + 7);
        puVar3 = &local_40;
        do {
          uVar1 = *puVar7;
          puVar4 = (undefined8 *)((long)puVar3 + 1);
          puVar7 = puVar7 + -1;
          *(undefined *)puVar3 = uVar1;
          puVar3 = puVar4;
          uVar6 = local_40;
        } while (&local_38 != puVar4);
      }
      param_3 = param_3 + 1;
      FUN_00407ac0(param_4,(iVar8 - iVar2) + param_5,uVar6);
      uVar5 = uVar5 - (long)param_6;
      iVar8 = iVar2;
    } while (uVar9 != param_2);
  }
  return;
}


void FUN_00403120(ulong param_1,ulong param_2,long param_3,undefined8 param_4,int param_5,
                 int param_6)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  
  if (param_2 < param_1) {
    uVar2 = (param_1 - 1) * (long)param_6;
    lVar5 = 0;
    iVar3 = param_6;
    do {
      iVar1 = (int)(uVar2 / param_1);
      if (DAT_00612321 == '\0') {
        uVar4 = *(undefined4 *)(param_3 + lVar5 * 4);
      }
      else {
        uVar4 = CONCAT13(*(undefined *)(param_3 + lVar5 * 4),
                         CONCAT12(*(undefined *)(param_3 + 1 + lVar5 * 4),
                                  CONCAT11(*(undefined *)(param_3 + 2 + lVar5 * 4),
                                           *(undefined *)(param_3 + 3 + lVar5 * 4))));
      }
      lVar5 = lVar5 + 1;
      FUN_00407ac0(param_4,(iVar3 - iVar1) + param_5,uVar4);
      uVar2 = uVar2 - (long)param_6;
      iVar3 = iVar1;
    } while (param_1 - param_2 != lVar5);
  }
  return;
}


void FUN_00403200(ulong param_1,ulong param_2,long param_3,undefined8 param_4,int param_5,
                 int param_6)

{
  int iVar1;
  undefined2 uVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  
  if (param_2 < param_1) {
    uVar3 = (param_1 - 1) * (long)param_6;
    lVar5 = 0;
    iVar4 = param_6;
    do {
      iVar1 = (int)(uVar3 / param_1);
      if (DAT_00612321 == '\0') {
        uVar2 = *(undefined2 *)(param_3 + lVar5 * 2);
      }
      else {
        uVar2 = CONCAT11(*(undefined *)(param_3 + lVar5 * 2),*(undefined *)(param_3 + 1 + lVar5 * 2)
                        );
      }
      lVar5 = lVar5 + 1;
      FUN_00407ac0(param_4,(iVar4 - iVar1) + param_5,uVar2);
      uVar3 = uVar3 - (long)param_6;
      iVar4 = iVar1;
    } while (param_1 - param_2 != lVar5);
  }
  return;
}


void FUN_004032c0(ulong param_1,ulong param_2,long param_3,undefined8 param_4,int param_5,
                 int param_6)

{
  int iVar1;
  short sVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  
  if (param_2 < param_1) {
    uVar3 = (param_1 - 1) * (long)param_6;
    lVar5 = 0;
    iVar4 = param_6;
    do {
      iVar1 = (int)(uVar3 / param_1);
      if (DAT_00612321 == '\0') {
        sVar2 = *(short *)(param_3 + lVar5 * 2);
      }
      else {
        sVar2 = CONCAT11(*(undefined *)(param_3 + lVar5 * 2),*(undefined *)(param_3 + 1 + lVar5 * 2)
                        );
      }
      lVar5 = lVar5 + 1;
      FUN_00407ac0(param_4,(iVar4 - iVar1) + param_5,(int)sVar2);
      uVar3 = uVar3 - (long)param_6;
      iVar4 = iVar1;
    } while (param_1 - param_2 != lVar5);
  }
  return;
}


void FUN_00403380(ulong param_1,ulong param_2,undefined *param_3,undefined8 param_4,int param_5,
                 int param_6)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  if (param_2 < param_1) {
    uVar3 = (param_1 - 1) * (long)param_6;
    puVar5 = param_3;
    iVar4 = param_6;
    do {
      puVar6 = puVar5 + 1;
      uVar1 = uVar3 / param_1;
      uVar3 = uVar3 - (long)param_6;
      iVar2 = (int)uVar1;
      FUN_00407ac0(param_4,(iVar4 - iVar2) + param_5,*puVar5);
      puVar5 = puVar6;
      iVar4 = iVar2;
    } while (puVar6 != param_3 + (param_1 - param_2));
  }
  return;
}


void FUN_00403410(ulong param_1,ulong param_2,char *param_3,undefined8 param_4,int param_5,
                 int param_6)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  
  if (param_2 < param_1) {
    uVar3 = (param_1 - 1) * (long)param_6;
    pcVar5 = param_3;
    iVar4 = param_6;
    do {
      pcVar6 = pcVar5 + 1;
      uVar1 = uVar3 / param_1;
      uVar3 = uVar3 - (long)param_6;
      iVar2 = (int)uVar1;
      FUN_00407ac0(param_4,(iVar4 - iVar2) + param_5,(int)*pcVar5);
      pcVar5 = pcVar6;
      iVar4 = iVar2;
    } while (pcVar6 != param_3 + (param_1 - param_2));
  }
  return;
}


void FUN_004034a0(ulong param_1,ulong param_2,long param_3,undefined8 param_4,int param_5,
                 int param_6)

{
  undefined uVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  undefined local_68 [16];
  undefined local_58 [40];
  
  if (param_2 < param_1) {
    uVar7 = (param_1 - 1) * (long)param_6;
    uVar8 = param_1;
    iVar6 = param_6;
    do {
      uVar8 = uVar8 - 1;
      iVar2 = (int)(uVar7 / param_1);
      if (DAT_00612321 != '\0') {
        puVar5 = (undefined *)(param_3 + 0xf);
        puVar3 = local_68;
        do {
          uVar1 = *puVar5;
          puVar4 = puVar3 + 1;
          puVar5 = puVar5 + -1;
          *puVar3 = uVar1;
          puVar3 = puVar4;
        } while (local_58 != puVar4);
      }
      param_3 = param_3 + 0x10;
      FUN_004054d0(local_68,0x2d,0,0);
      FUN_00407ac0(&DAT_0040c2dc,(iVar6 - iVar2) + param_5,local_68);
      uVar7 = uVar7 - (long)param_6;
      iVar6 = iVar2;
    } while (uVar8 != param_2);
  }
  return;
}


void FUN_00403590(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4,int param_5,
                 int param_6)

{
  undefined uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 local_68;
  undefined8 local_60 [6];
  
  if (param_2 < param_1) {
    uVar7 = (param_1 - 1) * (long)param_6;
    uVar8 = param_1;
    iVar6 = param_6;
    do {
      uVar8 = uVar8 - 1;
      iVar2 = (int)(uVar7 / param_1);
      if (DAT_00612321 == '\0') {
        uVar9 = *param_3;
      }
      else {
        puVar5 = (undefined *)((long)param_3 + 7);
        puVar3 = &local_68;
        do {
          uVar1 = *puVar5;
          puVar4 = (undefined8 *)((long)puVar3 + 1);
          puVar5 = puVar5 + -1;
          *(undefined *)puVar3 = uVar1;
          puVar3 = puVar4;
          uVar9 = local_68;
        } while (local_60 != puVar4);
      }
      param_3 = param_3 + 1;
      FUN_00405250(uVar9,&local_68,0x28,0,0);
      FUN_00407ac0(&DAT_0040c2dc,(iVar6 - iVar2) + param_5,&local_68);
      uVar7 = uVar7 - (long)param_6;
      iVar6 = iVar2;
    } while (uVar8 != param_2);
  }
  return;
}


void FUN_00403680(ulong param_1,ulong param_2,long param_3,undefined8 param_4,int param_5,
                 int param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  undefined local_58 [40];
  
  if (param_2 < param_1) {
    lVar5 = 0;
    uVar4 = (param_1 - 1) * (long)param_6;
    iVar2 = param_6;
    do {
      iVar1 = (int)(uVar4 / param_1);
      if (DAT_00612321 == '\0') {
        uVar3 = *(undefined4 *)(param_3 + lVar5 * 4);
      }
      else {
        uVar3 = CONCAT13(*(undefined *)(param_3 + lVar5 * 4),
                         CONCAT12(*(undefined *)(param_3 + 1 + lVar5 * 4),
                                  CONCAT11(*(undefined *)(param_3 + 2 + lVar5 * 4),
                                           *(undefined *)(param_3 + 3 + lVar5 * 4))));
      }
      lVar5 = lVar5 + 1;
      FUN_00405390(uVar3,local_58,0x1f,0,0);
      FUN_00407ac0(&DAT_0040c2dc,(iVar2 - iVar1) + param_5,local_58);
      uVar4 = uVar4 - (long)param_6;
      iVar2 = iVar1;
    } while (param_1 - param_2 != lVar5);
  }
  return;
}


void FUN_00403780(ulong param_1,ulong param_2,byte *param_3,undefined8 param_4,int param_5,
                 int param_6)

{
  byte bVar1;
  ushort **ppuVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  ulong uVar8;
  undefined local_3c [12];
  
  if (param_2 < param_1) {
    uVar8 = (param_1 - 1) * (long)param_6;
    pbVar6 = param_3;
    iVar4 = param_6;
    do {
      pbVar7 = pbVar6 + 1;
      bVar1 = *pbVar6;
      switch((ulong)bVar1) {
      case 0:
        puVar3 = &DAT_0040c2e8;
        break;
      default:
        ppuVar2 = __ctype_b_loc();
        puVar3 = &DAT_0040c2e0;
        if ((*(byte *)((long)*ppuVar2 + (ulong)bVar1 * 2 + 1) & 0x40) == 0) {
          puVar3 = &DAT_0040c2e3;
        }
        __sprintf_chk(local_3c,1,4,puVar3,bVar1);
        puVar3 = local_3c;
        break;
      case 7:
        puVar3 = &DAT_0040c2fd;
        break;
      case 8:
        puVar3 = &DAT_0040c2eb;
        break;
      case 9:
        puVar3 = &DAT_0040c2f7;
        break;
      case 10:
        puVar3 = &DAT_0040c2f1;
        break;
      case 0xb:
        puVar3 = &DAT_0040c2fa;
        break;
      case 0xc:
        puVar3 = &DAT_0040c2ee;
        break;
      case 0xd:
        puVar3 = &DAT_0040c2f4;
      }
      iVar5 = (int)(uVar8 / param_1);
      uVar8 = uVar8 - (long)param_6;
      FUN_00407ac0(&DAT_0040c2dc,(iVar4 - iVar5) + param_5,puVar3);
      pbVar6 = pbVar7;
      iVar4 = iVar5;
    } while (pbVar7 != param_3 + (param_1 - param_2));
  }
  return;
}


undefined8 FUN_004038f0(undefined4 param_1)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  long lVar4;
  undefined8 uVar5;
  byte *pbVar6;
  byte *pbVar7;
  bool bVar8;
  undefined uVar9;
  bool bVar10;
  undefined uVar11;
  byte bVar12;
  
  bVar12 = 0;
  uVar5 = 1;
  if (DAT_006123c8 == (byte *)0x0) goto LAB_00403943;
  bVar8 = false;
  bVar10 = (*DAT_006123c8 & 0x20) == 0;
  if (bVar10) {
    lVar4 = 2;
    pbVar6 = *(byte **)(DAT_006123d0 + -8);
    pbVar7 = &DAT_0040f681;
    do {
      if (lVar4 == 0) break;
      lVar4 = lVar4 + -1;
      bVar8 = *pbVar6 < *pbVar7;
      bVar10 = *pbVar6 == *pbVar7;
      pbVar6 = pbVar6 + 1;
      pbVar7 = pbVar7 + 1;
    } while (bVar10);
    if ((!bVar8 && !bVar10) != bVar8) {
      iVar1 = FUN_00408120(DAT_006123c8);
      if (iVar1 != 0) {
        uVar2 = FUN_00407090(0,3,DAT_006123d8);
        piVar3 = __errno_location();
        uVar5 = 0;
        error(0,*piVar3,&DAT_0040e4cc,uVar2);
        goto LAB_00403938;
      }
    }
    uVar5 = 1;
  }
  else {
    uVar5 = FUN_00407090(0,3,DAT_006123d8);
    uVar2 = dcgettext(0,"%s: read error",5);
    uVar9 = 0;
    uVar11 = 1;
    error(0,param_1,uVar2,uVar5);
    lVar4 = 2;
    pbVar6 = *(byte **)(DAT_006123d0 + -8);
    pbVar7 = &DAT_0040f681;
    do {
      if (lVar4 == 0) break;
      lVar4 = lVar4 + -1;
      uVar9 = *pbVar6 < *pbVar7;
      uVar11 = *pbVar6 == *pbVar7;
      pbVar6 = pbVar6 + (ulong)bVar12 * -2 + 1;
      pbVar7 = pbVar7 + (ulong)bVar12 * -2 + 1;
    } while ((bool)uVar11);
    uVar5 = 0;
    if ((!(bool)uVar9 && !(bool)uVar11) != (bool)uVar9) {
      FUN_00408120(DAT_006123c8);
    }
  }
LAB_00403938:
  DAT_006123c8 = (byte *)0x0;
LAB_00403943:
  if ((*stdout & 0x20) == 0) {
    return uVar5;
  }
  uVar5 = dcgettext(0,"write error",5);
  error(0,0,uVar5);
  return 0;
}


undefined8 FUN_00403a50(void)

{
  int *piVar1;
  long lVar2;
  undefined8 uVar3;
  byte *pbVar4;
  byte *pbVar5;
  bool bVar6;
  bool bVar7;
  byte bVar8;
  
  bVar8 = 0;
  uVar3 = 1;
  do {
    DAT_006123d8 = *DAT_006123d0;
    if (DAT_006123d8 == (byte *)0x0) {
      return uVar3;
    }
    lVar2 = 2;
    bVar6 = (byte **)0xfffffffffffffff7 < DAT_006123d0;
    DAT_006123d0 = DAT_006123d0 + 1;
    bVar7 = DAT_006123d0 == (byte **)0x0;
    pbVar4 = DAT_006123d8;
    pbVar5 = &DAT_0040f681;
    do {
      if (lVar2 == 0) break;
      lVar2 = lVar2 + -1;
      bVar6 = *pbVar4 < *pbVar5;
      bVar7 = *pbVar4 == *pbVar5;
      pbVar4 = pbVar4 + (ulong)bVar8 * -2 + 1;
      pbVar5 = pbVar5 + (ulong)bVar8 * -2 + 1;
    } while (bVar7);
    if ((!bVar6 && !bVar7) == bVar6) {
      DAT_006123d8 = (byte *)dcgettext(0,"standard input",5);
      DAT_006123c4 = 1;
      DAT_006123c8 = stdin;
    }
    else {
      DAT_006123c8 = fopen((char *)DAT_006123d8,"r");
      if (DAT_006123c8 != (FILE *)0x0) break;
      FUN_00407090(0,3,DAT_006123d8);
      piVar1 = __errno_location();
      uVar3 = 0;
      error(0,*piVar1,&DAT_0040e4cc);
    }
  } while (DAT_006123c8 == (FILE *)0x0);
  if ((DAT_00612410 != '\0') && (DAT_00612432 == '\0')) {
    setvbuf(DAT_006123c8,(char *)0x0,2,0);
  }
  return uVar3;
}


uint FUN_00403b50(ulong param_1)

{
  FILE *pFVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  int *piVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  stat sStack_20b8;
  undefined local_2028 [8192];
  
  if (param_1 != 0) {
    if (DAT_006123c8 != (FILE *)0x0) {
      uVar10 = 1;
LAB_00403bf8:
      pFVar1 = DAT_006123c8;
      iVar4 = fileno(DAT_006123c8);
      iVar4 = __fxstat(1,iVar4,&sStack_20b8);
      if (iVar4 == 0) {
        if ((sStack_20b8.st_mode & 0xd000) != 0x8000) {
LAB_00403c50:
          uVar9 = 0x2000;
          do {
            if (param_1 < uVar9) {
              uVar9 = param_1;
            }
            uVar8 = __fread_unlocked_chk(local_2028,0x2000,1,uVar9,DAT_006123c8);
            param_1 = param_1 - uVar8;
            if (uVar8 != uVar9) {
              if ((DAT_006123c8->_flags & 0x20U) != 0) {
                return 0;
              }
              if ((DAT_006123c8->_flags & 0x10U) != 0) goto LAB_00403cb8;
            }
            if (param_1 == 0) {
              return uVar10;
            }
          } while( true );
        }
        lVar5 = sStack_20b8.st_blksize;
        if (0x1fffffffffffffff < sStack_20b8.st_blksize - 1U) {
          lVar5 = 0x200;
        }
        if (sStack_20b8.st_size <= lVar5) goto LAB_00403c50;
        if (param_1 <= (ulong)sStack_20b8.st_size) {
          iVar4 = FUN_004081e0(pFVar1,param_1,1);
          if (iVar4 == 0) {
            return uVar10;
          }
          return 0;
        }
        param_1 = param_1 - sStack_20b8.st_size;
      }
      else {
        uVar10 = 0;
        uVar6 = FUN_00407090(0,3,DAT_006123d8);
        piVar7 = __errno_location();
        error(0,*piVar7,&DAT_0040e4cc,uVar6);
      }
      goto LAB_00403bd6;
    }
LAB_00403cea:
    uVar6 = dcgettext(0,"cannot skip past end of combined input",5);
    error(1,0,uVar6);
  }
  return 1;
LAB_00403cb8:
  if (param_1 == 0) {
    return uVar10;
  }
LAB_00403bd6:
  uVar2 = FUN_004038f0(0);
  uVar3 = FUN_00403a50();
  uVar10 = uVar10 & uVar2 & uVar3;
  if (DAT_006123c8 == (FILE *)0x0) goto LAB_00403cea;
  goto LAB_00403bf8;
}


uint FUN_00403d20(int *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  
  uVar5 = 1;
  *param_1 = -1;
  while( true ) {
    if (DAT_006123c8 == (FILE *)0x0) {
      return uVar5;
    }
    iVar3 = fgetc(DAT_006123c8);
    *param_1 = iVar3;
    if (iVar3 != -1) break;
    piVar4 = __errno_location();
    uVar1 = FUN_004038f0(*piVar4);
    uVar2 = FUN_00403a50();
    uVar5 = uVar5 & uVar1 & uVar2;
  }
  return uVar5;
}


void FUN_00403d80(undefined8 param_1,size_t param_2,void *param_3,byte *param_4)

{
  char *pcVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  ushort **ppuVar5;
  ulong uVar6;
  long lVar7;
  byte *pbVar8;
  ulong uVar10;
  uint uVar11;
  int iVar12;
  ulong uVar13;
  byte *pbVar9;
  
  if ((((DAT_00612251 != '\0') && (DAT_00612250 == '\0')) && (DAT_006123e0 == param_2)) &&
     (iVar3 = memcmp(param_3,param_4,param_2), iVar3 == 0)) {
    if (DAT_00612320 != '\0') {
      DAT_00612250 = 0;
      return;
    }
    puts("*");
    DAT_00612250 = 0;
    DAT_00612320 = 1;
    return;
  }
  DAT_00612320 = 0;
  if (DAT_006123f0 != 0) {
    uVar10 = 0;
    do {
      lVar7 = uVar10 * 0x28;
      uVar6 = (ulong)*(int *)(&DAT_0040d220 + (ulong)*(uint *)(DAT_006123f8 + 4 + lVar7) * 4);
      uVar13 = DAT_006123e0 - param_2;
      iVar3 = (int)(DAT_006123e0 / uVar6);
      if (uVar10 == 0) {
        (*DAT_00612420)(param_1,0,uVar13 % uVar6);
      }
      else {
        __printf_chk(1,&DAT_0040c2dc,DAT_00612440,"");
      }
      iVar12 = (int)(uVar13 / uVar6);
      lVar4 = DAT_006123f8 + lVar7;
      (**(code **)(lVar4 + 8))
                ((long)iVar3,(long)iVar12,param_4,lVar4 + 0x10,*(undefined4 *)(lVar4 + 0x1c),
                 *(undefined4 *)(lVar4 + 0x20));
      lVar7 = lVar7 + DAT_006123f8;
      if (*(char *)(lVar7 + 0x18) != '\0') {
        __printf_chk(1,&DAT_0040c2dc,
                     (*(int *)(lVar7 + 0x20) * iVar12) / iVar3 + iVar12 * *(int *)(lVar7 + 0x1c),"")
        ;
        fwrite_unlocked(&DAT_0040c32c,1,3,stdout);
        if (param_2 != 0) {
          ppuVar5 = __ctype_b_loc();
          pbVar9 = param_4;
          do {
            pbVar8 = pbVar9 + 1;
            bVar2 = *pbVar9;
            uVar11 = (uint)bVar2;
            if ((*(byte *)((long)*ppuVar5 + (ulong)bVar2 * 2 + 1) & 0x40) == 0) {
              uVar11 = 0x2e;
              bVar2 = 0x2e;
            }
            pbVar9 = (byte *)stdout->_IO_write_ptr;
            if (pbVar9 < stdout->_IO_write_end) {
              stdout->_IO_write_ptr = (char *)(pbVar9 + 1);
              *pbVar9 = bVar2;
            }
            else {
              __overflow(stdout,uVar11);
            }
            pbVar9 = pbVar8;
          } while (pbVar8 != param_4 + param_2);
        }
        pcVar1 = stdout->_IO_write_ptr;
        if (pcVar1 < stdout->_IO_write_end) {
          stdout->_IO_write_ptr = pcVar1 + 1;
          *pcVar1 = '<';
        }
        else {
          __overflow(stdout,0x3c);
        }
      }
      pcVar1 = stdout->_IO_write_ptr;
      if (pcVar1 < stdout->_IO_write_end) {
        stdout->_IO_write_ptr = pcVar1 + 1;
        *pcVar1 = '\n';
      }
      else {
        __overflow(stdout,10);
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < DAT_006123f0);
  }
  DAT_00612250 = 0;
  return;
}


void FUN_00404010(undefined8 param_1,byte param_2)

{
  char *pcVar1;
  byte *pbVar2;
  
  pcVar1 = stdout->_IO_write_ptr;
  if (pcVar1 < stdout->_IO_write_end) {
    stdout->_IO_write_ptr = pcVar1 + 1;
    *pcVar1 = '(';
  }
  else {
    __overflow(stdout,0x28);
  }
  FUN_00402d50(param_1,0x29);
  if (param_2 != 0) {
    pbVar2 = (byte *)stdout->_IO_write_ptr;
    if (stdout->_IO_write_end <= pbVar2) {
      __overflow(stdout,(uint)param_2);
      return;
    }
    stdout->_IO_write_ptr = (char *)(pbVar2 + 1);
    *pbVar2 = param_2;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404090(long param_1,char param_2)

{
  FUN_00402d50(param_1,0x20);
  FUN_00404010(param_1 + _DAT_00612428,(int)param_2);
  return;
}


undefined8 FUN_004040c0(char *param_1)

{
  undefined4 *puVar1;
  char cVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  lconv *plVar7;
  size_t sVar8;
  code *pcVar9;
  char *pcVar10;
  long lVar11;
  char *pcVar12;
  ulong uVar13;
  undefined *puVar14;
  char *pcVar15;
  int iVar16;
  int iVar17;
  bool bVar18;
  ulong local_40;
  
  pcVar12 = param_1;
  if (*param_1 == '\0') {
    return 1;
  }
  do {
    if (DAT_006123e8 <= DAT_006123f0) {
      if (DAT_006123f8 == 0) {
        if (DAT_006123e8 != 0) {
          if ((SUB168(ZEXT816(0x28) * ZEXT816(DAT_006123e8),0) < 0) ||
             (SUB168(ZEXT816(0x28) * ZEXT816(DAT_006123e8) >> 0x40,0) != 0)) goto LAB_00404578;
          goto LAB_004043d7;
        }
        lVar11 = 0x78;
        DAT_006123e8 = 3;
      }
      else {
        if (0x222222222222221 < DAT_006123e8) {
LAB_00404578:
                    /* WARNING: Subroutine does not return */
          FUN_00407a20();
        }
        DAT_006123e8 = DAT_006123e8 + 1 + (DAT_006123e8 >> 1);
LAB_004043d7:
        lVar11 = DAT_006123e8 * 0x28;
      }
      DAT_006123f8 = FUN_00407830(DAT_006123f8,lVar11);
    }
    puVar1 = (undefined4 *)(DAT_006123f8 + DAT_006123f0 * 0x28);
    if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("tspec != NULL","src/od.c",0x285,"decode_one_format");
    }
    cVar2 = *pcVar12;
    switch(cVar2) {
    case 'a':
      pcVar10 = pcVar12 + 1;
      iVar16 = 3;
      pcVar9 = FUN_00402ec0;
      uVar4 = 5;
      iVar17 = 1;
      break;
    default:
      uVar5 = FUN_00407210(param_1);
      cVar2 = *pcVar12;
      uVar6 = dcgettext(0,"invalid character \'%c\' in type string %s",5);
      error(0,0,uVar6,(int)cVar2,uVar5);
      return 0;
    case 'c':
      pcVar10 = pcVar12 + 1;
      iVar16 = 3;
      pcVar9 = FUN_00403780;
      uVar4 = 6;
      iVar17 = 1;
      break;
    case 'd':
    case 'o':
    case 'u':
    case 'x':
      cVar3 = pcVar12[1];
      iVar17 = DAT_006123b0;
      if (cVar3 == 'I') {
        pcVar10 = pcVar12 + 2;
        local_40 = 4;
LAB_00404254:
        if (cVar2 != 'o') goto LAB_0040425d;
LAB_0040442a:
        iVar16 = *(int *)(&UNK_0040d380 + local_40 * 4);
        puVar14 = &DAT_0040c333;
        if (1 < iVar17 - 4U) {
          puVar14 = &DAT_0040c2e6;
        }
        __sprintf_chk(puVar1 + 4,1,8,"%%*.%d%s",iVar16,puVar14);
        uVar4 = 2;
LAB_004042b3:
        switch(iVar17) {
        default:
switchD_00404540_caseD_0:
                    /* WARNING: Subroutine does not return */
          abort();
        case 1:
          pcVar9 = FUN_00403380;
          break;
        case 2:
          pcVar9 = FUN_00403200;
          break;
        case 3:
          pcVar9 = FUN_00403120;
          break;
        case 4:
          pcVar9 = FUN_00403050;
          break;
        case 5:
          pcVar9 = FUN_00402f80;
        }
      }
      else {
        if ('I' < cVar3) {
          if (cVar3 == 'L') {
            pcVar10 = pcVar12 + 2;
            local_40 = 8;
            iVar17 = DAT_006123c0;
          }
          else {
            if (cVar3 != 'S') goto LAB_00404660;
            local_40 = 2;
            pcVar10 = pcVar12 + 2;
            iVar17 = DAT_006123a8;
          }
          goto LAB_00404254;
        }
        if (cVar3 != 'C') {
LAB_00404660:
          pcVar10 = pcVar12 + 1;
          if ((int)cVar3 - 0x30U < 10) {
            pcVar15 = pcVar12 + 2;
            uVar13 = (ulong)(int)((int)cVar3 - 0x30U);
            local_40 = 0;
            while( true ) {
              local_40 = uVar13 + local_40 * 10;
              if (9 < (int)*pcVar15 - 0x30U) break;
              uVar13 = (ulong)(int)((int)*pcVar15 - 0x30U);
              pcVar15 = pcVar15 + 1;
              if (~uVar13 / 10 < local_40) {
LAB_00404770:
                uVar5 = FUN_00407210(param_1);
                uVar6 = dcgettext(0,"invalid type string %s",5);
                error(0,0,uVar6,uVar5);
                return 0;
              }
            }
            if (pcVar15 == pcVar10) {
              local_40 = 4;
              pcVar10 = pcVar15;
            }
            else if ((8 < local_40) ||
                    (iVar17 = (&DAT_006123a0)[local_40], pcVar10 = pcVar15, iVar17 == 0)) {
              uVar5 = FUN_00407210(param_1);
              pcVar12 = 
              "invalid type string %s;\nthis system doesn\'t provide a %lu-byte integral type";
LAB_004041ec:
              uVar6 = dcgettext(0,pcVar12,5);
              error(0,0,uVar6,uVar5,local_40);
              return 0;
            }
          }
          else {
            local_40 = 4;
          }
          goto LAB_00404254;
        }
        pcVar10 = pcVar12 + 2;
        local_40 = 1;
        iVar17 = DAT_006123a4;
        if (cVar2 == 'o') goto LAB_0040442a;
LAB_0040425d:
        if (cVar2 < 'p') {
          if (cVar2 != 'd') goto switchD_00404540_caseD_0;
          iVar16 = *(int *)(&UNK_0040d320 + local_40 * 4);
          __sprintf_chk(puVar1 + 4,1,8,"%%*%s");
          switch(iVar17) {
          default:
            goto switchD_00404540_caseD_0;
          case 1:
            pcVar9 = FUN_00403410;
            uVar4 = 0;
            break;
          case 2:
            pcVar9 = FUN_004032c0;
            uVar4 = 0;
            break;
          case 3:
            pcVar9 = FUN_00403120;
            uVar4 = 0;
            break;
          case 4:
            pcVar9 = FUN_00403050;
            uVar4 = 0;
            break;
          case 5:
            pcVar9 = FUN_00402f80;
            uVar4 = 0;
          }
        }
        else {
          if (cVar2 == 'u') {
            iVar16 = *(int *)(&UNK_0040d2c0 + local_40 * 4);
            __sprintf_chk(puVar1 + 4,1,8,"%%*%s");
            uVar4 = 1;
            goto LAB_004042b3;
          }
          if (cVar2 != 'x') goto switchD_00404540_caseD_0;
          iVar16 = *(int *)(&UNK_0040d260 + local_40 * 4);
          pcVar15 = "lx";
          if (1 < iVar17 - 4U) {
            pcVar15 = "x";
          }
          __sprintf_chk(puVar1 + 4,1,8,"%%*.%d%s",iVar16,pcVar15);
          switch(iVar17) {
          default:
            goto switchD_00404540_caseD_0;
          case 1:
            pcVar9 = FUN_00403380;
            uVar4 = 3;
            break;
          case 2:
            pcVar9 = FUN_00403200;
            uVar4 = 3;
            break;
          case 3:
            pcVar9 = FUN_00403120;
            uVar4 = 3;
            break;
          case 4:
            pcVar9 = FUN_00403050;
            uVar4 = 3;
            break;
          case 5:
            pcVar9 = FUN_00402f80;
            uVar4 = 3;
          }
        }
      }
      break;
    case 'f':
      cVar2 = pcVar12[1];
      if (cVar2 == 'F') {
        pcVar10 = pcVar12 + 2;
        iVar17 = DAT_00612350;
      }
      else if (cVar2 == 'L') {
        pcVar10 = pcVar12 + 2;
        iVar17 = DAT_00612380;
      }
      else {
        iVar17 = DAT_00612360;
        if (cVar2 == 'D') {
          pcVar10 = pcVar12 + 2;
        }
        else {
          pcVar10 = pcVar12 + 1;
          if ((int)cVar2 - 0x30U < 10) {
            pcVar15 = pcVar12 + 2;
            uVar13 = (ulong)(int)((int)cVar2 - 0x30U);
            local_40 = 0;
            while( true ) {
              local_40 = uVar13 + local_40 * 10;
              if (9 < (int)*pcVar15 - 0x30U) break;
              uVar13 = (ulong)(int)((int)*pcVar15 - 0x30U);
              pcVar15 = pcVar15 + 1;
              if (~uVar13 / 10 < local_40) goto LAB_00404770;
            }
            bVar18 = pcVar10 != pcVar15;
            pcVar10 = pcVar15;
            if ((bVar18) &&
               ((0x10 < local_40 ||
                (iVar17 = (&DAT_00612340)[local_40], (&DAT_00612340)[local_40] == 0)))) {
              uVar5 = FUN_00407210(param_1);
              pcVar12 = 
              "invalid type string %s;\nthis system doesn\'t provide a %lu-byte floating point type"
              ;
              goto LAB_004041ec;
            }
          }
        }
      }
      plVar7 = localeconv();
      iVar16 = 1;
      if (*plVar7->decimal_point != '\0') {
        sVar8 = strlen(plVar7->decimal_point);
        iVar16 = (int)sVar8;
      }
      if (iVar17 == 7) {
        iVar16 = iVar16 + 0x17;
        pcVar9 = FUN_00403590;
        uVar4 = 4;
      }
      else if (iVar17 == 8) {
        iVar16 = iVar16 + 0x1c;
        pcVar9 = FUN_004034a0;
        uVar4 = 4;
      }
      else {
        if (iVar17 != 6) goto switchD_00404540_caseD_0;
        iVar16 = iVar16 + 0xe;
        pcVar9 = FUN_00403680;
        uVar4 = 4;
      }
    }
    *puVar1 = uVar4;
    puVar1[1] = iVar17;
    *(code **)(puVar1 + 2) = pcVar9;
    puVar1[7] = iVar16;
    cVar2 = *pcVar10;
    *(bool *)(puVar1 + 6) = cVar2 == 'z';
    pcVar10 = pcVar10 + (cVar2 == 'z');
    if (pcVar10 == pcVar12) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("s != next","src/od.c",0x3e3,"decode_format_string");
    }
    DAT_006123f0 = DAT_006123f0 + 1;
    pcVar12 = pcVar10;
    if (*pcVar10 == '\0') {
      return 1;
    }
  } while( true );
}


uint FUN_004048a0(ulong param_1,long param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  size_t sVar4;
  FILE *__stream;
  uint uVar5;
  long lVar6;
  
  __stream = DAT_006123c8;
  if ((param_1 != 0) && (param_1 <= DAT_006123e0)) {
    *param_3 = 0;
    if (__stream == (FILE *)0x0) {
      uVar5 = 1;
    }
    else {
      lVar6 = 0;
      uVar5 = 1;
      while( true ) {
        sVar4 = fread_unlocked((void *)(lVar6 + param_2),1,param_1 - lVar6,__stream);
        *param_3 = *param_3 + sVar4;
        if (param_1 - lVar6 == sVar4) break;
        piVar3 = __errno_location();
        uVar1 = FUN_004038f0(*piVar3);
        uVar2 = FUN_00403a50();
        uVar5 = uVar5 & uVar1 & uVar2;
        if (DAT_006123c8 == (FILE *)0x0) {
          return uVar5;
        }
        lVar6 = *param_3;
        __stream = DAT_006123c8;
      }
    }
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("0 < n && n <= bytes_per_block","src/od.c",0x507,"read_block");
}


void FUN_00404960(int param_1)

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
  
  uVar7 = DAT_00612458;
  bVar13 = 0;
  if (param_1 != 0) {
    uVar3 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(stderr,1,uVar3,uVar7);
    goto LAB_0040499f;
  }
  uVar3 = dcgettext(0,
                    "Usage: %s [OPTION]... [FILE]...\n  or:  %s [-abcdfilosx]... [FILE] [[+]OFFSET[.][b]]\n  or:  %s --traditional [OPTION]... [FILE] [[+]OFFSET[.][b] [+][LABEL][.][b]]\n"
                    ,5);
  __printf_chk(1,uVar3,uVar7,uVar7,uVar7);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nWrite an unambiguous representation, octal bytes by default,\nof FILE to standard output.  With more than one FILE argument,\nconcatenate them in the listed order to form the input.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"\nWith no FILE, or when FILE is -, read standard input.\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nIf first and second call formats both apply, the second format is assumed\nif the last operand begins with + or (if there are 2 operands) a digit.\nAn OFFSET operand means -j OFFSET.  LABEL is the pseudo-address\nat first byte printed, incremented when dump is progressing.\nFor OFFSET and LABEL, a 0x or 0X prefix indicates hexadecimal;\nsuffixes may be . for octal and b for multiply by 512.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nMandatory arguments to long options are mandatory for short options too.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -A, --address-radix=RADIX   output format for file offsets; RADIX is one\n                                of [doxn], for Decimal, Octal, Hex or None\n      --endian={big|little}   swap input bytes according the specified order\n  -j, --skip-bytes=BYTES      skip BYTES input bytes first\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -N, --read-bytes=BYTES      limit dump to BYTES input bytes\n  -S BYTES, --strings[=BYTES]  output strings of at least BYTES graphic chars;\n                                3 is implied when BYTES is not specified\n  -t, --format=TYPE           select output format or formats\n  -v, --output-duplicates     do not use * to mark line suppression\n  -w[BYTES], --width[=BYTES]  output BYTES bytes per output line;\n                                32 is implied when BYTES is not specified\n      --traditional           accept arguments in third form above\n"
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
                             "\n\nTraditional format specifications may be intermixed; they accumulate:\n  -a   same as -t a,  select named characters, ignoring high-order bit\n  -b   same as -t o1, select octal bytes\n  -c   same as -t c,  select printable characters or backslash escapes\n  -d   same as -t u2, select unsigned decimal 2-byte units\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -f   same as -t fF, select floats\n  -i   same as -t dI, select decimal ints\n  -l   same as -t dL, select decimal longs\n  -o   same as -t o2, select octal 2-byte units\n  -s   same as -t d2, select decimal 2-byte units\n  -x   same as -t x2, select hexadecimal 2-byte units\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\n\nTYPE is made up of one or more of these specifications:\n  a          named character, ignoring high-order bit\n  c          printable character or backslash escape\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  d[SIZE]    signed decimal, SIZE bytes per integer\n  f[SIZE]    floating point, SIZE bytes per float\n  o[SIZE]    octal, SIZE bytes per integer\n  u[SIZE]    unsigned decimal, SIZE bytes per integer\n  x[SIZE]    hexadecimal, SIZE bytes per integer\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nSIZE is a number.  For TYPE in [doux], SIZE may also be C for\nsizeof(char), S for sizeof(short), I for sizeof(int) or L for\nsizeof(long).  If TYPE is f, SIZE may also be F for sizeof(float), D\nfor sizeof(double) or L for sizeof(long double).\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nAdding a z suffix to any type displays printable characters at the end of\neach output line.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\n\nBYTES is hex with 0x or 0X prefix, and may have a multiplier suffix:\n  b    512\n  KB   1000\n  K    1024\n  MB   1000*1000\n  M    1024*1024\nand so on for G, T, P, E, Z, Y.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  local_88 = &DAT_0040c3a4;
  local_80 = "test invocation";
  local_78[0] = (byte *)0x40c41e;
  local_78[1] = (byte *)0x40c3b6;
  local_78[2] = (byte *)0x40c3cc;
  local_78[3] = (byte *)0x40c3d6;
  local_78[4] = (byte *)0x40c3e5;
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
    pbVar10 = &DAT_0040c3a1;
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
        pbVar9 = &DAT_0040c3a1;
        goto LAB_00404dd3;
      }
    }
    pbVar9 = &DAT_0040c3a1;
    uVar7 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    pcVar4 = " invocation";
    __printf_chk(1,uVar7,"https://www.gnu.org/software/coreutils/",&DAT_0040c3a1);
  }
  else {
    uVar7 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar7,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
      iVar2 = strncmp(pcVar4,"en_",3);
      if (iVar2 != 0) {
LAB_00404dd3:
        uVar7 = dcgettext(0,"Report %s translation bugs to <https://translationproject.org/team/>\n"
                          ,5);
        __printf_chk(1,uVar7,&DAT_0040c3a1);
      }
    }
    pcVar4 = " invocation";
    uVar7 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    __printf_chk(1,uVar7,"https://www.gnu.org/software/coreutils/",&DAT_0040c3a1);
    if (pbVar9 != &DAT_0040c3a1) {
      pcVar4 = "";
    }
  }
  uVar7 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(1,uVar7,pbVar9,pcVar4);
LAB_0040499f:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}


/* WARNING: Removing unreachable block (ram,0x004049a6) */
/* WARNING: Removing unreachable block (ram,0x00404c60) */
/* WARNING: Removing unreachable block (ram,0x00404c6c) */
/* WARNING: Removing unreachable block (ram,0x00404c76) */
/* WARNING: Removing unreachable block (ram,0x00404c78) */
/* WARNING: Removing unreachable block (ram,0x00404c82) */
/* WARNING: Removing unreachable block (ram,0x00404d4f) */
/* WARNING: Removing unreachable block (ram,0x00404d7e) */
/* WARNING: Removing unreachable block (ram,0x00404dce) */
/* WARNING: Removing unreachable block (ram,0x00404d94) */
/* WARNING: Removing unreachable block (ram,0x00404c9b) */
/* WARNING: Removing unreachable block (ram,0x00404cca) */
/* WARNING: Removing unreachable block (ram,0x00404dd3) */
/* WARNING: Removing unreachable block (ram,0x00404ce4) */
/* WARNING: Removing unreachable block (ram,0x00404d20) */
/* WARNING: Removing unreachable block (ram,0x00404d24) */

void FUN_00404e00(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = DAT_00612458;
  uVar2 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
  __fprintf_chk(stderr,1,uVar2,uVar1);
                    /* WARNING: Subroutine does not return */
  exit(1);
}


long FUN_00404e10(char *param_1,char **param_2,void *param_3,size_t param_4)

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
LAB_00404ea7:
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
          goto LAB_00404ea7;
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


void FUN_00404f30(undefined8 param_1,undefined8 param_2,long param_3)

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
  uVar2 = FUN_004071f0(1,param_1);
  uVar3 = FUN_00406ee0(0,8,param_2);
  error(0,0,uVar1,uVar3,uVar2);
  return;
}


void FUN_00404fb0(long *param_1,void *param_2,size_t param_3)

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
      uVar3 = FUN_00407210(lVar5);
      __fprintf_chk(stderr,1,"\n  - %s",uVar3);
      lVar5 = param_1[lVar4];
      param_2 = (void *)((long)__s2 + param_3);
      __s1 = __s2;
      if (lVar5 == 0) goto LAB_00405080;
    }
    lVar4 = lVar4 + 1;
    param_2 = (void *)((long)__s2 + param_3);
    uVar3 = FUN_00407210(lVar5);
    __fprintf_chk(stderr,1,&DAT_0040e4ca,uVar3);
    lVar5 = param_1[lVar4];
  }
LAB_00405080:
  pcVar2 = stderr->_IO_write_ptr;
  if (pcVar2 < stderr->_IO_write_end) {
    stderr->_IO_write_ptr = pcVar2 + 1;
    *pcVar2 = '\n';
    return;
  }
  __overflow(stderr,10);
  return;
}


long FUN_004050d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,code *param_6)

{
  long lVar1;
  
  lVar1 = FUN_00404e10(param_2,param_3,param_4,param_5);
  if (lVar1 < 0) {
    FUN_00404f30(param_1,param_2,lVar1);
    FUN_00404fb0(param_3,param_4,param_5);
    (*param_6)();
    lVar1 = -1;
  }
  return lVar1;
}


long FUN_00405140(void *param_1,long *param_2,void *param_3,size_t param_4)

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


void FUN_00405190(undefined8 param_1)

{
  DAT_00612450 = param_1;
  return;
}


void FUN_004051a0(undefined param_1)

{
  DAT_00612448 = param_1;
  return;
}


void FUN_004051b0(void)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  iVar1 = FUN_00409170(stdout);
  if (iVar1 != 0) {
    piVar2 = __errno_location();
    if ((DAT_00612448 == '\0') || (*piVar2 != 0x20)) {
      uVar3 = dcgettext(0,"write error",5);
      if (DAT_00612450 == 0) {
        error(0,*piVar2,&DAT_0040e4cc,uVar3);
      }
      else {
        uVar4 = FUN_00407060();
        error(0,*piVar2,"%s: %s",uVar4,uVar3);
      }
      goto LAB_0040522e;
    }
  }
  iVar1 = FUN_00409170(stderr);
  if (iVar1 == 0) {
    return;
  }
LAB_0040522e:
                    /* WARNING: Subroutine does not return */
  _exit(DAT_00612268);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00405250(double param_1,char *param_2,ulong param_3,uint param_4,undefined4 param_5)

{
  undefined *puVar1;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  double dVar5;
  undefined local_43 [4];
  char acStack_3f [15];
  
  local_43._0_2_ = 0x2d25;
  puVar1 = local_43 + (ulong)(param_4 & 1) + 1;
  *puVar1 = 0x2b;
  puVar1 = puVar1 + (param_4 >> 1 & 1);
  *puVar1 = 0x20;
  puVar1[param_4 >> 2 & 1] = 0x30;
  puVar3 = (undefined2 *)(puVar1 + (param_4 >> 2 & 1) + (param_4 >> 3 & 1));
  *puVar3 = 0x2e2a;
  *(undefined *)(puVar3 + 1) = 0x2a;
  *(undefined *)(puVar3 + 2) = 0;
  *(byte *)((long)puVar3 + 3) = (-((param_4 & 0x10) == 0) & 0x20U) + 0x47;
  iVar4 = 1;
  if (DAT_0040e4f0 <=
      (double)(((ulong)param_1 ^ _DAT_0040e4e0) & -(ulong)(param_1 < 0.0) |
              ~-(ulong)(param_1 < 0.0) & (ulong)param_1)) {
    iVar4 = 0xf;
  }
  while (((iVar2 = __snprintf_chk(param_1,param_2,param_3,1,0xffffffffffffffff,local_43,param_5,
                                  iVar4), -1 < iVar2 && (iVar4 < 0x11)) &&
         ((param_3 <= (ulong)(long)iVar2 || (dVar5 = strtod(param_2,(char **)0x0), dVar5 != param_1)
          )))) {
    iVar4 = iVar4 + 1;
  }
  return iVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00405390(float param_1,char *param_2,ulong param_3,uint param_4,undefined4 param_5)

{
  undefined *puVar1;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  float fVar5;
  undefined local_43 [4];
  char acStack_3f [15];
  
  local_43._0_2_ = 0x2d25;
  puVar1 = local_43 + (ulong)(param_4 & 1) + 1;
  *puVar1 = 0x2b;
  puVar1 = puVar1 + (param_4 >> 1 & 1);
  *puVar1 = 0x20;
  puVar1[param_4 >> 2 & 1] = 0x30;
  puVar3 = (undefined2 *)(puVar1 + (param_4 >> 2 & 1) + (param_4 >> 3 & 1));
  *puVar3 = 0x2e2a;
  *(undefined *)(puVar3 + 1) = 0x2a;
  *(undefined *)(puVar3 + 2) = 0;
  *(byte *)((long)puVar3 + 3) = (-((param_4 & 0x10) == 0) & 0x20U) + 0x47;
  iVar4 = (uint)(DAT_0040e510 <=
                (float)(((uint)param_1 ^ _DAT_0040e500) & -(uint)(param_1 < 0.0) |
                       ~-(uint)(param_1 < 0.0) & (uint)param_1)) * 5;
  while( true ) {
    iVar4 = iVar4 + 1;
    iVar2 = __snprintf_chk((double)param_1,param_2,param_3,1,0xffffffffffffffff,local_43,param_5,
                           iVar4);
    if (iVar2 < 0) {
      return iVar2;
    }
    if (8 < iVar4) break;
    if (((ulong)(long)iVar2 < param_3) && (fVar5 = strtof(param_2,(char **)0x0), fVar5 == param_1))
    {
      return iVar2;
    }
  }
  return iVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004054d0(char *param_1,ulong param_2,uint param_3,undefined4 param_4,undefined8 param_5,
                undefined8 param_6,undefined8 param_7,undefined2 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  float10 in_ST0;
  float10 fVar6;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  float10 in_ST4;
  float10 fVar7;
  float10 fVar8;
  undefined local_43 [6];
  undefined auStack_3d [13];
  
  local_43._0_2_ = 0x2d25;
  fVar6 = (float10)CONCAT28(param_8,param_7);
  if (fVar6 <= (float10)0 || (float10)0 != fVar6) {
    fVar6 = -(float10)CONCAT28(param_8,param_7);
  }
  puVar2 = local_43 + (ulong)(param_3 & 1) + 1;
  puVar1 = puVar2 + (param_3 >> 1 & 1);
  *puVar2 = 0x2b;
  *puVar1 = 0x20;
  puVar1[param_3 >> 2 & 1] = 0x30;
  puVar4 = (undefined4 *)(puVar1 + (param_3 >> 2 & 1) + (param_3 >> 3 & 1));
  *puVar4 = 0x4c2a2e2a;
  *(undefined *)((long)puVar4 + 5) = 0;
  *(byte *)(puVar4 + 1) = (-((param_3 & 0x10) == 0) & 0x20U) + 0x47;
  iVar5 = 1;
  fVar7 = in_ST4;
  fVar8 = in_ST4;
  if (_DAT_0040e520 <= fVar6) {
    iVar5 = 0x12;
  }
  while (((iVar3 = __snprintf_chk(param_1,param_2,1,0xffffffffffffffff,local_43,param_4,iVar5),
          -1 < iVar3 && (iVar5 < 0x15)) &&
         ((fVar6 = in_ST0, param_2 <= (ulong)(long)iVar3 ||
          (fVar6 = in_ST1, in_ST1 = in_ST2, in_ST2 = in_ST3, in_ST3 = in_ST4, in_ST4 = fVar7,
          fVar7 = fVar8, strtold(param_1,(char **)0x0), fVar8 = fVar7,
          in_ST0 != (float10)CONCAT28(param_8,param_7)))))) {
    iVar5 = iVar5 + 1;
    in_ST0 = fVar6;
  }
  return iVar3;
}


void FUN_004055f0(byte *param_1)

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
        pbVar6 = &DAT_0040e570;
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
  DAT_00612458 = param_1;
  program_invocation_name = param_1;
  return;
}


char * FUN_00405690(char *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  byte *pbVar3;
  
  pcVar2 = (char *)dcgettext(0,param_1,5);
  if (param_1 == pcVar2) {
    pbVar3 = (byte *)FUN_00409230();
    if ((*pbVar3 & 0xdf) == 0x55) {
      if (((((pbVar3[1] & 0xdf) != 0x54) || ((pbVar3[2] & 0xdf) != 0x46)) || (pbVar3[3] != 0x2d)) ||
         ((pbVar3[4] != 0x38 || (pbVar3[5] != 0)))) {
LAB_00405768:
        pcVar2 = "\"";
        if (param_2 != 9) {
          pcVar2 = "\'";
        }
        return pcVar2;
      }
      cVar1 = *pcVar2;
      pcVar2 = &DAT_0040e581;
      if (cVar1 != '`') {
        pcVar2 = &DAT_0040e576;
      }
    }
    else {
      if (((((*pbVar3 & 0xdf) != 0x47) || ((pbVar3[1] & 0xdf) != 0x42)) || (pbVar3[2] != 0x31)) ||
         (((pbVar3[3] != 0x38 || (pbVar3[4] != 0x30)) ||
          ((pbVar3[5] != 0x33 || ((pbVar3[6] != 0x30 || (pbVar3[7] != 0)))))))) goto LAB_00405768;
      cVar1 = *pcVar2;
      pcVar2 = &DAT_0040e57d;
      if (cVar1 != '`') {
        pcVar2 = &DAT_0040e57a;
      }
    }
  }
  return pcVar2;
}


ulong FUN_00405790(undefined *param_1,ulong param_2,char *param_3,ulong param_4,int param_5,
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
LAB_004063e1:
    if (param_2 != 0) {
      bVar3 = false;
      local_5b = false;
      bVar2 = true;
      local_70 = 0;
      goto LAB_00406016;
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
      goto LAB_004063e1;
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
      param_8 = (char *)FUN_00405690(&DAT_0040e585,param_5);
      param_9 = (char *)FUN_00405690("\'");
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
LAB_00405828:
  uVar22 = 0;
  bVar5 = local_5b;
LAB_00405838:
  bVar23 = param_4 != uVar22;
  if (param_4 == 0xffffffffffffffff) {
    bVar23 = param_3[uVar22] != '\0';
  }
  bVar26 = bVar6;
  if (!bVar23) goto LAB_00405fb8;
  bVar20 = (bool)(param_5 != 2 & bVar6);
  __s1 = (byte *)(param_3 + uVar22);
  uVar16 = uVar15;
  bVar4 = bVar3;
  if (bVar20) {
    if (local_a0 == 0) {
LAB_00405f30:
      uVar19 = (ulong)*__s1;
      switch(uVar19) {
      case 0:
        goto switchD_00405f42_caseD_0;
      default:
        bVar20 = false;
        goto switchD_00405dae_caseD_1;
      case 7:
        bVar17 = 0x61;
        goto LAB_00405c45;
      case 8:
        bVar17 = 0x62;
        break;
      case 9:
switchD_00405f42_caseD_9:
        bVar17 = 0x74;
        break;
      case 10:
switchD_00405f42_caseD_a:
        bVar17 = 0x6e;
        break;
      case 0xb:
switchD_00405f42_caseD_b:
        bVar17 = 0x76;
        goto LAB_00405c45;
      case 0xc:
switchD_00405f42_caseD_c:
        bVar17 = 0x66;
LAB_00405c45:
        if (local_5c) {
          bVar25 = false;
          goto LAB_00405b98;
        }
LAB_00405c50:
        bVar23 = false;
        goto LAB_00405a0b;
      case 0xd:
        bVar20 = false;
switchD_00405928_caseD_d:
        bVar25 = param_5 == 2;
        uVar19 = 0xd;
        bVar13 = 0x72;
        goto LAB_00405b60;
      case 0x20:
        bVar25 = false;
LAB_00405f8a:
        uVar19 = 0x20;
        goto LAB_00405f52;
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
switchD_00405928_caseD_21:
        bVar25 = false;
        goto LAB_00405b6b;
      case 0x23:
      case 0x7e:
        bVar26 = false;
LAB_00405f6a:
        if (uVar22 == 0) {
          bVar25 = false;
          bVar23 = bVar20;
          bVar20 = bVar26;
          goto LAB_00405978;
        }
        bVar23 = false;
        goto LAB_0040598f;
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
LAB_00405f52:
        bVar24 = false;
        bVar23 = bVar20;
        bVar20 = bVar25;
        goto LAB_00405991;
      case 0x27:
        bVar20 = false;
        goto switchD_00405dae_caseD_27;
      case 0x3f:
        bVar20 = false;
        goto switchD_00405dae_caseD_3f;
      case 0x5c:
        bVar20 = false;
        goto switchD_00405928_caseD_5c;
      case 0x7b:
      case 0x7d:
        bVar20 = false;
        goto switchD_00405dae_caseD_7b;
      }
      bVar25 = false;
      bVar23 = false;
      goto joined_r0x00405b87;
    }
    if ((param_4 == 0xffffffffffffffff) && (1 < local_a0)) {
      param_4 = strlen(param_3);
    }
    if ((param_4 < uVar22 + local_a0) || (iVar7 = memcmp(__s1,local_78,local_a0), iVar7 != 0))
    goto LAB_00405f30;
    if (!local_5c) {
      uVar19 = (ulong)*__s1;
      bVar25 = bVar20;
      switch(uVar19) {
      case 0:
        goto switchD_00405928_caseD_0;
      default:
        goto switchD_00405dae_caseD_1;
      case 7:
        bVar17 = 0x61;
        goto LAB_00405c50;
      case 8:
        bVar25 = false;
        bVar23 = false;
        bVar17 = 0x62;
        break;
      case 9:
        goto switchD_00405f42_caseD_9;
      case 10:
        goto switchD_00405f42_caseD_a;
      case 0xb:
        goto switchD_00405f42_caseD_b;
      case 0xc:
        goto switchD_00405f42_caseD_c;
      case 0xd:
        goto switchD_00405928_caseD_d;
      case 0x20:
        goto LAB_00405f8a;
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
        goto switchD_00405928_caseD_21;
      case 0x23:
      case 0x7e:
        bVar26 = bVar20;
        goto LAB_00405f6a;
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
        goto LAB_00405f52;
      case 0x27:
        goto switchD_00405dae_caseD_27;
      case 0x3f:
        goto switchD_00405dae_caseD_3f;
      case 0x5c:
        goto switchD_00405928_caseD_5c;
      case 0x7b:
      case 0x7d:
        goto switchD_00405dae_caseD_7b;
      }
      goto LAB_004059d2;
    }
    goto LAB_00405baa;
  }
  uVar19 = (ulong)*__s1;
  switch(uVar19) {
  case 0:
    if (bVar6) {
switchD_00405f42_caseD_0:
      if (!local_5c) {
        bVar20 = false;
switchD_00405928_caseD_0:
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
            goto LAB_00405a88;
          }
LAB_00405cca:
          param_1[uVar16] = 0x5c;
          uVar15 = uVar16;
        }
        else if (uVar15 < uVar9) goto LAB_00405cca;
        uVar16 = uVar15 + 1;
        bVar24 = bVar23;
        if (param_5 == 2) {
          bVar17 = 0x30;
          bVar23 = false;
          bVar4 = bVar3;
          goto LAB_00405a88;
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
LAB_00405d09:
        bVar17 = (byte)uVar19;
        bVar23 = false;
        uVar15 = uVar16;
        bVar4 = bVar3;
        if ((bool)(bVar6 ^ 1U | bVar26)) goto LAB_00405a88;
        goto LAB_00405991;
      }
      bVar26 = param_5 == 2;
      goto LAB_00405b9c;
    }
    if ((param_6 & 1) == 0) {
      bVar25 = param_5 == 2;
      uVar19 = 0;
      bVar23 = false;
      bVar20 = false;
      goto LAB_00405978;
    }
    uVar22 = uVar22 + 1;
    goto LAB_00405838;
  default:
switchD_00405dae_caseD_1:
    bVar25 = bVar6;
    if (sVar8 != 1) {
      local_40[0] = (mbstate_t)0x0;
      if (param_4 == 0xffffffffffffffff) {
        param_4 = strlen(param_3);
      }
      uVar21 = 0;
      do {
        uVar1 = uVar22 + uVar21;
        lVar11 = FUN_00409010(&local_44,param_3 + uVar1,param_4 - uVar1,local_40);
        if (lVar11 == 0) break;
        if (lVar11 == -1) {
          bVar23 = false;
          goto LAB_004066ba;
        }
        if (lVar11 == -2) {
          if ((param_4 <= uVar1) || (param_3[uVar1] == '\0')) goto LAB_004067f7;
          goto LAB_004067e7;
        }
        if (((param_5 == 2) && (local_5c)) && (lVar11 != 1)) {
          pcVar12 = param_3 + uVar1 + 1;
          do {
            if (((byte)(*pcVar12 + 0xa5U) < 0x22) &&
               ((1L << (*pcVar12 + 0xa5U & 0x3f) & 0x20000002bU) != 0)) {
              param_5 = 2;
              goto LAB_00405b9c;
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
      goto LAB_004066ba;
    }
    ppuVar10 = __ctype_b_loc();
    uVar21 = 1;
    bVar25 = ((*ppuVar10)[uVar19] & 0x4000) == 0;
    bVar23 = !bVar25;
    bVar25 = (bool)(bVar25 & bVar6);
    goto LAB_00405d84;
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
    goto LAB_00405dc2;
  case 10:
    uVar19 = 10;
    bVar13 = 0x6e;
    goto LAB_00405dc2;
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
LAB_00405dc2:
    bVar25 = param_5 == 2;
    bVar20 = (bool)(local_5c & bVar25);
    if (bVar20) {
LAB_00405dda:
      param_5 = 2;
      goto LAB_00405b9c;
    }
    break;
  case 0x20:
    uVar19 = 0x20;
    goto LAB_00405966;
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
LAB_00405966:
    bVar25 = param_5 == 2;
    if ((local_5c) && (bVar25)) goto LAB_00405dda;
    goto LAB_00405978;
  case 0x23:
  case 0x7e:
LAB_0040595d:
    bVar25 = param_5 == 2;
    if (uVar22 == 0) goto LAB_00405966;
    goto LAB_00405b6b;
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
    goto switchD_00405dae_caseD_25;
  case 0x27:
switchD_00405dae_caseD_27:
    bVar5 = bVar23;
    if (param_5 != 2) {
      bVar25 = false;
      uVar19 = 0x27;
      goto LAB_00405978;
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
      goto LAB_00405a88;
    }
    goto LAB_00405b9c;
  case 0x3f:
switchD_00405dae_caseD_3f:
    if (param_5 == 2) {
      if (!local_5c) {
        bVar17 = 0x3f;
        bVar24 = false;
        bVar23 = false;
        goto LAB_00405a88;
      }
      goto LAB_00405b9c;
    }
    if (param_5 != 5) {
      bVar25 = param_5 == 2;
      uVar19 = 0x3f;
      bVar23 = false;
      goto LAB_00405978;
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
        goto LAB_00405d09;
      }
      goto LAB_00405baa;
    }
    bVar25 = false;
    uVar19 = 0x3f;
    bVar23 = false;
    goto LAB_00405978;
  case 0x5c:
    if (param_5 != 2) {
switchD_00405928_caseD_5c:
      uVar19 = 0x5c;
      bVar17 = 0x5c;
      bVar13 = 0x5c;
      bVar25 = (bool)(bVar6 & local_5c & local_a0 != 0);
      if (!bVar25) break;
      uVar22 = uVar22 + 1;
      bVar23 = false;
      goto LAB_00405aa4;
    }
    if (local_5c) goto LAB_00405b9c;
    uVar22 = uVar22 + 1;
    bVar23 = false;
    bVar17 = 0x5c;
    goto LAB_00405aa4;
  case 0x7b:
  case 0x7d:
switchD_00405dae_caseD_7b:
    bVar24 = param_4 != 1;
    if (param_4 == 0xffffffffffffffff) {
      bVar24 = param_3[1] != '\0';
    }
    bVar25 = param_5 == 2;
    if (!bVar24) goto LAB_0040595d;
    goto LAB_00405b6b;
  }
LAB_00405b60:
  if (!bVar6) {
LAB_00405b6b:
    bVar23 = false;
    goto LAB_00405978;
  }
  bVar23 = false;
  bVar17 = bVar13;
  goto joined_r0x00405b87;
LAB_00405fb8:
  if ((uVar15 == 0) && ((bool)(local_5c & param_5 == 2))) {
    param_5 = 2;
LAB_00405b9c:
    if (bVar26) {
      param_5 = 4;
    }
LAB_00405baa:
    uVar9 = FUN_00405790(param_1,uVar9,param_3,param_4,param_5,param_6 & 0xfffffffd,0,param_8,
                         param_9);
    return uVar9;
  }
  bVar26 = (bool)(param_5 == 2 & (local_5c ^ 1U));
  bVar23 = (bool)(local_5c ^ 1U);
  if ((!bVar26) || (bVar23 = bVar26, !bVar5)) {
LAB_0040688d:
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
    uVar9 = FUN_00405790(param_1,local_70,param_3,param_4,5,param_6,param_7,param_8,param_9);
    return uVar9;
  }
  local_5b = uVar9 == 0 && local_70 != 0;
  param_2 = local_70;
  bVar23 = bVar5;
  if (uVar9 != 0 || local_70 == 0) goto LAB_0040688d;
LAB_00406016:
  *param_1 = 0x27;
  param_5 = 2;
  uVar15 = 1;
  local_78 = "\'";
  local_a0 = 1;
  local_5c = false;
  uVar9 = param_2;
  goto LAB_00405828;
  while (__s1[uVar21] != 0) {
LAB_004067e7:
    uVar21 = uVar21 + 1;
    if (param_4 <= uVar22 + uVar21) break;
  }
LAB_004067f7:
  bVar23 = false;
LAB_004066ba:
  if (1 < uVar21) {
LAB_0040627e:
    bVar26 = false;
    uVar21 = uVar21 + uVar22;
    uVar16 = uVar22;
    do {
      bVar17 = (byte)uVar19;
      if (bVar25) {
        bVar26 = param_5 == 2;
        if (local_5c) goto LAB_00405b9c;
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
        if (uVar21 <= uVar22) goto LAB_00405a1d;
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
        if (uVar21 <= uVar22) goto LAB_00405aa4;
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
LAB_00405d84:
  if (bVar25) {
    bVar23 = false;
    bVar25 = bVar6;
    goto LAB_0040627e;
  }
switchD_00405dae_caseD_25:
  bVar25 = param_5 == 2;
LAB_00405978:
  bVar17 = (byte)uVar19;
  bVar24 = (bool)((bVar6 ^ 1U | bVar25) ^ 1 | local_5c);
  bVar26 = bVar20;
  if (bVar24) {
LAB_0040598f:
    bVar24 = false;
    bVar20 = bVar26;
LAB_00405991:
    bVar17 = (byte)uVar19;
    uVar16 = uVar15;
    bVar4 = bVar3;
    if ((param_7 == 0) || ((*(uint *)(param_7 + (uVar19 >> 5) * 4) >> (bVar17 & 0x1f) & 1) == 0))
    goto LAB_00405a88;
    bVar25 = param_5 == 2;
  }
  else {
LAB_00405a88:
    bVar25 = param_5 == 2;
    uVar15 = uVar16;
    bVar3 = bVar4;
    if (!bVar20) {
      uVar22 = uVar22 + 1;
      bVar3 = (bool)((bVar24 ^ 1U) & bVar4);
LAB_00405aa4:
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
      goto LAB_00405a1d;
    }
  }
joined_r0x00405b87:
  if (local_5c) {
LAB_00405b98:
    bVar26 = (bool)(bVar6 & bVar25);
    goto LAB_00405b9c;
  }
LAB_004059d2:
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
LAB_00405a0b:
  if (uVar15 < uVar9) {
    param_1[uVar15] = 0x5c;
  }
  uVar15 = uVar15 + 1;
  uVar22 = uVar22 + 1;
  bVar4 = bVar3;
LAB_00405a1d:
  bVar3 = bVar4;
  if (uVar15 < uVar9) {
    param_1[uVar15] = bVar17;
  }
  uVar15 = uVar15 + 1;
  if (!bVar23) {
    bVar2 = false;
  }
  goto LAB_00405838;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_004069c0(int param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

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
  puVar8 = (undefined4 *)PTR_DAT_006122b8;
  if (DAT_006122d0 <= param_1) {
    if (param_1 == 0x7fffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_00407a20();
    }
    if (PTR_DAT_006122b8 == &DAT_006122c0) {
      puVar8 = (undefined4 *)FUN_00407830(0);
      uVar6 = PTR_DAT_006122c8._4_4_;
      uVar5 = PTR_DAT_006122c8._0_4_;
      uVar3 = _UNK_006122c4;
      PTR_DAT_006122b8 = (undefined *)puVar8;
      *puVar8 = _DAT_006122c0;
      puVar8[1] = uVar3;
      puVar8[2] = uVar5;
      puVar8[3] = uVar6;
    }
    else {
      puVar8 = (undefined4 *)FUN_00407830(PTR_DAT_006122b8);
      PTR_DAT_006122b8 = (undefined *)puVar8;
    }
    memset(puVar8 + (long)DAT_006122d0 * 4,0,(long)((param_1 + 1) - DAT_006122d0) << 4);
    DAT_006122d0 = param_1 + 1;
  }
  uVar2 = param_4[1];
  puVar10 = (ulong *)(puVar8 + (long)param_1 * 4);
  uVar4 = *puVar10;
  __ptr = (undefined *)puVar10[1];
  uVar9 = FUN_00405790(__ptr,uVar4,param_2,param_3,*param_4,uVar2 | 1,param_4 + 2,
                       *(undefined8 *)(param_4 + 10),*(undefined8 *)(param_4 + 0xc));
  if (uVar4 <= uVar9) {
    uVar9 = uVar9 + 1;
    *puVar10 = uVar9;
    if (__ptr != &DAT_00612460) {
      free(__ptr);
    }
    __ptr = (undefined *)FUN_004077d0(uVar9);
    uVar3 = *param_4;
    puVar10[1] = (ulong)__ptr;
    FUN_00405790(__ptr,uVar9,param_2,param_3,uVar3,uVar2 | 1,param_4 + 2,
                 *(undefined8 *)(param_4 + 10),*(undefined8 *)(param_4 + 0xc));
  }
  *piVar7 = iVar1;
  return __ptr;
}


void FUN_00406b60(undefined *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_00612560;
  }
  FUN_004079d0(param_1,0x38);
  *piVar2 = iVar1;
  return;
}


undefined4 FUN_00406ba0(undefined4 *param_1)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)&DAT_00612560;
  }
  return *param_1;
}


void FUN_00406bb0(undefined4 *param_1,undefined4 param_2)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)&DAT_00612560;
  }
  *param_1 = param_2;
  return;
}


uint FUN_00406bc0(undefined *param_1,byte param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_00612560;
  }
  uVar1 = *(uint *)(param_1 + (ulong)(param_2 >> 5) * 4 + 8);
  uVar2 = uVar1 >> (param_2 & 0x1f);
  *(uint *)(param_1 + (ulong)(param_2 >> 5) * 4 + 8) =
       ((param_3 ^ uVar2) & 1) << (param_2 & 0x1f) ^ uVar1;
  return uVar2 & 1;
}


undefined4 FUN_00406c00(undefined *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_00612560;
  }
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_1 + 4) = param_2;
  return uVar1;
}


void FUN_00406c20(undefined4 *param_1,long param_2,long param_3)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)&DAT_00612560;
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


void FUN_00406c50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 *param_5)

{
  int iVar1;
  int *piVar2;
  
  if (param_5 == (undefined4 *)0x0) {
    param_5 = (undefined4 *)&DAT_00612560;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  FUN_00405790(param_1,param_2,param_3,param_4,*param_5,param_5[1],param_5 + 2,
               *(undefined8 *)(param_5 + 10),*(undefined8 *)(param_5 + 0xc));
  *piVar2 = iVar1;
  return;
}


undefined8 FUN_00406cd0(undefined8 param_1,undefined8 param_2,long *param_3,undefined4 *param_4)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  
  if (param_4 == (undefined4 *)0x0) {
    param_4 = (undefined4 *)&DAT_00612560;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  uVar5 = (uint)(param_3 == (long *)0x0) | param_4[1];
  lVar3 = FUN_00405790(0,0,param_1,param_2,*param_4,uVar5,param_4 + 2,*(undefined8 *)(param_4 + 10),
                       *(undefined8 *)(param_4 + 0xc));
  uVar4 = FUN_004077d0(lVar3 + 1);
  FUN_00405790(uVar4,lVar3 + 1,param_1,param_2,*param_4,uVar5,param_4 + 2,
               *(undefined8 *)(param_4 + 10),*(undefined8 *)(param_4 + 0xc));
  *piVar2 = iVar1;
  if (param_3 != (long *)0x0) {
    *param_3 = lVar3;
  }
  return uVar4;
}


void FUN_00406dc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00406cd0(param_1,param_2,0,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406dd0(void)

{
  void **ppvVar1;
  void *__ptr;
  undefined *__ptr_00;
  void **ppvVar2;
  
  __ptr_00 = PTR_DAT_006122b8;
  if (1 < DAT_006122d0) {
    ppvVar2 = (void **)(PTR_DAT_006122b8 + 0x18);
    ppvVar1 = (void **)(PTR_DAT_006122b8 + (ulong)(DAT_006122d0 - 2) * 0x10 + 0x28);
    do {
      __ptr = *ppvVar2;
      ppvVar2 = ppvVar2 + 2;
      free(__ptr);
    } while (ppvVar2 != ppvVar1);
  }
  if (*(undefined **)(__ptr_00 + 8) != &DAT_00612460) {
    free(*(undefined **)(__ptr_00 + 8));
    _DAT_006122c0 = 0x100;
    PTR_DAT_006122c8 = &DAT_00612460;
  }
  if (__ptr_00 != &DAT_006122c0) {
    free(__ptr_00);
    PTR_DAT_006122b8 = &DAT_006122c0;
  }
  DAT_006122d0 = 1;
  return;
}


void FUN_00406e70(undefined8 param_1,undefined8 param_2)

{
  FUN_004069c0(param_1,param_2,0xffffffffffffffff,&DAT_00612560);
  return;
}


void FUN_00406e90(void)

{
  FUN_004069c0();
  return;
}


void FUN_00406ea0(undefined8 param_1)

{
  FUN_004069c0(0,param_1,0xffffffffffffffff,&DAT_00612560);
  return;
}


void FUN_00406ec0(undefined8 param_1,undefined8 param_2)

{
  FUN_004069c0(0,param_1,param_2,&DAT_00612560);
  return;
}


void FUN_00406ee0(undefined8 param_1,int param_2,undefined8 param_3)

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
    FUN_004069c0(param_1,param_3,0xffffffffffffffff,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00406f50(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

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
    FUN_004069c0(param_1,param_3,param_4,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00406fc0(undefined4 param_1,undefined8 param_2)

{
  FUN_00406ee0(0,param_1,param_2);
  return;
}


void FUN_00406fd0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00406f50(0,param_1,param_2,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406fe0(undefined8 param_1,undefined8 param_2,byte param_3)

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
  
  local_18 = DAT_00612590;
  local_48 = _DAT_00612560;
  uStack_40 = uRam0000000000612568;
  local_38 = _DAT_00612570;
  uStack_30 = uRam0000000000612578;
  puVar1 = (uint *)((long)&uStack_40 + (ulong)(param_3 >> 5) * 4);
  local_28 = _DAT_00612580;
  uStack_20 = uRam0000000000612588;
  uVar2 = *puVar1;
  *puVar1 = (~(uVar2 >> (param_3 & 0x1f)) & 1) << (param_3 & 0x1f) ^ uVar2;
  FUN_004069c0(0,param_1,param_2,&local_48);
  return;
}


void FUN_00407050(undefined8 param_1,char param_2)

{
  FUN_00406fe0(param_1,0xffffffffffffffff,(int)param_2);
  return;
}


void FUN_00407060(undefined8 param_1)

{
  FUN_00406fe0(param_1,0xffffffffffffffff,0x3a);
  return;
}


void FUN_00407080(undefined8 param_1,undefined8 param_2)

{
  FUN_00406fe0(param_1,param_2,0x3a);
  return;
}


void FUN_00407090(undefined8 param_1,int param_2,undefined8 param_3)

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
    FUN_004069c0(param_1,param_3,0xffffffffffffffff,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407100(undefined8 param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5
                 )

{
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  long lStack_20;
  long local_18;
  
  uStack_40 = uRam0000000000612568;
  local_38 = _DAT_00612570;
  uStack_30 = uRam0000000000612578;
  local_28 = _DAT_00612580;
  lStack_20 = uRam0000000000612588;
  local_18 = DAT_00612590;
  local_48 = CONCAT44((int)((ulong)_DAT_00612560 >> 0x20),10);
  if ((param_2 != 0) && (param_3 != 0)) {
    lStack_20 = param_2;
    local_18 = param_3;
    FUN_004069c0(param_1,param_4,param_5,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00407170(void)

{
  FUN_00407100();
  return;
}


void FUN_00407180(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00407100(0,param_1,param_2,param_3,0xffffffffffffffff);
  return;
}


void FUN_004071a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00407100(0,param_1,param_2,param_3,param_4);
  return;
}


void FUN_004071c0(void)

{
  FUN_004069c0();
  return;
}


void FUN_004071d0(undefined8 param_1,undefined8 param_2)

{
  FUN_004069c0(0,param_1,param_2,&DAT_00612280);
  return;
}


void FUN_004071f0(undefined8 param_1,undefined8 param_2)

{
  FUN_004069c0(param_1,param_2,0xffffffffffffffff,&DAT_00612280);
  return;
}


void FUN_00407210(undefined8 param_1)

{
  FUN_004069c0(0,param_1,0xffffffffffffffff,&DAT_00612280);
  return;
}


undefined8
FUN_00407230(FILE *param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5,
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
  uVar1 = dcgettext(0,&DAT_0040f2cb,5);
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
    goto LAB_004074ac;
  case 5:
    uVar1 = param_5[3];
    uVar4 = param_5[2];
    uVar5 = param_5[1];
    uVar6 = *param_5;
    uVar7 = dcgettext(0,"Written by %s, %s, %s,\n%s, and %s.\n",5);
LAB_004074ac:
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
    goto LAB_00407549;
  case 7:
    uVar1 = param_5[2];
    uVar4 = param_5[5];
    uVar5 = param_5[4];
    uVar6 = param_5[3];
    local_58 = param_5[1];
    uVar7 = *param_5;
    uVar3 = dcgettext(0,"Written by %s, %s, %s,\n%s, %s, %s, and %s.\n",5);
LAB_00407549:
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
    goto LAB_0040732a;
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
LAB_0040732a:
  uVar1 = __fprintf_chk(param_1,1,uVar3,uVar7,local_50,local_58,uVar6,uVar5,uVar4,uVar1,local_48);
  return uVar1;
}


void FUN_00407610(void)

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
  FUN_00407230();
  return;
}


void FUN_00407630(void)

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
  FUN_00407230();
  return;
}


void FUN_00407690(void)

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
  FUN_00407230();
  return;
}


void FUN_00407750(void)

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


void FUN_004077d0(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00407a20();
  }
  return;
}


void FUN_004077f0(ulong param_1,ulong param_2)

{
  if ((-1 < SUB168(ZEXT816(param_1) * ZEXT816(param_2),0)) &&
     (SUB168(ZEXT816(param_1) * ZEXT816(param_2) >> 0x40,0) == 0)) {
    FUN_004077d0();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00407a20();
}


void thunk_FUN_004077d0(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00407a20();
  }
  return;
}


void * FUN_00407830(void *param_1,size_t param_2)

{
  void *pvVar1;
  
  if ((param_2 == 0) && (param_1 != (void *)0x0)) {
    free(param_1);
    return (void *)0x0;
  }
  pvVar1 = realloc(param_1,param_2);
  if ((pvVar1 == (void *)0x0) && (param_2 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00407a20();
  }
  return pvVar1;
}


void FUN_00407870(undefined8 param_1,ulong param_2,ulong param_3)

{
  if ((-1 < SUB168(ZEXT816(param_2) * ZEXT816(param_3),0)) &&
     (SUB168(ZEXT816(param_2) * ZEXT816(param_3) >> 0x40,0) == 0)) {
    FUN_00407830();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00407a20();
}


void FUN_004078a0(long param_1,ulong *param_2,ulong param_3)

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
    if ((SUB168(ZEXT816(uVar2) * ZEXT816(param_3),0) < 0) || (uVar3 != 0)) goto LAB_004078fb;
  }
  else {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x5555555555555554);
    uVar3 = SUB168(auVar1 % ZEXT816(param_3),0);
    if (SUB168(auVar1 / ZEXT816(param_3),0) <= uVar2) {
LAB_004078fb:
                    /* WARNING: Subroutine does not return */
      FUN_00407a20(param_1,param_2,uVar3);
    }
    uVar2 = (uVar2 >> 1) + 1 + uVar2;
  }
  *param_2 = uVar2;
  FUN_00407830(param_1,uVar2 * param_3);
  return;
}


void FUN_00407930(long param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (param_1 == 0) {
    if (uVar1 == 0) {
      *param_2 = 0x80;
      FUN_00407830(0,0x80);
      return;
    }
    if ((long)uVar1 < 0) goto LAB_0040797a;
  }
  else {
    if (0x5555555555555553 < uVar1) {
LAB_0040797a:
                    /* WARNING: Subroutine does not return */
      FUN_00407a20();
    }
    uVar1 = (uVar1 >> 1) + 1 + uVar1;
  }
  *param_2 = uVar1;
  FUN_00407830(param_1,uVar1);
  return;
}


void FUN_00407980(size_t param_1)

{
  void *__s;
  
  __s = (void *)FUN_004077d0();
  memset(__s,0,param_1);
  return;
}


void FUN_004079a0(size_t param_1,ulong param_2)

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
  FUN_00407a20();
}


void FUN_004079d0(void *param_1,size_t param_2)

{
  void *__dest;
  
  __dest = (void *)FUN_004077d0(param_2);
  memcpy(__dest,param_1,param_2);
  return;
}


void FUN_00407a00(char *param_1)

{
  void *__dest;
  size_t sVar1;
  
  sVar1 = strlen(param_1);
  __dest = (void *)FUN_004077d0(sVar1 + 1);
  memcpy(__dest,param_1,sVar1 + 1);
  return;
}


void FUN_00407a20(void)

{
  undefined8 uVar1;
  
  uVar1 = dcgettext(0,"memory exhausted",5);
  error(DAT_00612268,0,&DAT_0040e4cc,uVar1);
                    /* WARNING: Subroutine does not return */
  abort();
}


int FUN_00407a60(void)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  
  iVar1 = FUN_00409150();
  if (iVar1 < 0) {
    iVar2 = ferror(stdout);
    if (iVar2 == 0) {
      uVar3 = dcgettext(0,"cannot perform formatted output",5);
      piVar4 = __errno_location();
      error(DAT_00612268,*piVar4,uVar3);
    }
  }
  return iVar1;
}


void FUN_00407ac0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
  FUN_00407a60(param_9,&local_d0);
  return;
}


int FUN_00407b60(FILE *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  
  iVar1 = FUN_00409090();
  if (iVar1 < 0) {
    iVar2 = ferror(param_1);
    if (iVar2 == 0) {
      uVar3 = dcgettext(0,"cannot perform formatted output",5);
      piVar4 = __errno_location();
      error(DAT_00612268,*piVar4,uVar3);
    }
  }
  return iVar1;
}


void FUN_00407bc0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
  FUN_00407b60(param_9,param_10,&local_d0);
  return;
}


void FUN_00407c50(int param_1,int param_2,undefined param_3,long param_4,undefined8 param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined local_2a;
  undefined local_29;
  
  uVar1 = DAT_00612268;
  if (param_1 - 1U < 4) {
    if (param_2 < 0) {
      puVar4 = &local_2a;
      puVar3 = &DAT_0040f680 + -(long)param_2;
      local_29 = 0;
      local_2a = param_3;
    }
    else {
      puVar3 = &DAT_0040f680;
      puVar4 = *(undefined **)(param_4 + (long)param_2 * 0x20);
    }
    uVar2 = dcgettext(0,(&PTR_s__s_s_argument___s__too_large_0040f700)[param_1 - 1U],5);
    error(uVar1,0,uVar2,puVar3,puVar4,param_5);
                    /* WARNING: Subroutine does not return */
    abort();
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


ulong FUN_00407ce0(byte *param_1,byte **param_2,uint param_3,ulong *param_4,char *param_5)

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
    if ((param_5 == (char *)0x0) || (bVar12 = *pbVar5, bVar12 == 0)) goto LAB_00407d82;
    pcVar7 = strchr(param_5,(int)(char)bVar12);
    if (pcVar7 == (char *)0x0) goto switchD_00407e6c_caseD_1;
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
        goto LAB_00407e5a;
      }
      if (bVar1 != 0x42) {
                    /* WARNING: Could not recover jumptable at 0x00407e41. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar6 = (*(code *)(&PTR_LAB_0040f758)[bVar8])();
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
LAB_00407e5a:
  iVar10 = (int)uVar11;
  switch(bVar12 - 0x42 & 0xff) {
  case 0:
    if (uVar6 >> 0x36 == 0) {
      uVar6 = uVar6 << 10;
      break;
    }
    goto LAB_00407ec7;
  default:
switchD_00407e6c_caseD_1:
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
    goto LAB_00407f54;
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
    goto joined_r0x00407e8c;
  case 0xb:
  case 0x2b:
    auVar2 = ZEXT816(uVar6) * ZEXT816((ulong)(long)iVar10);
    if (SUB168(auVar2 >> 0x40,0) != 0) goto LAB_00407ec7;
    auVar2 = (auVar2 & (undefined  [16])0xffffffffffffffff) * ZEXT816((ulong)(long)iVar10);
joined_r0x00407e8c:
    uVar6 = SUB168(auVar2,0);
    if (SUB168(auVar2 >> 0x40,0) != 0) {
LAB_00407ec7:
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
    goto LAB_00407f54;
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
    goto LAB_00407f54;
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
    goto LAB_00407f54;
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
LAB_00407f54:
    uVar14 = (ulong)(uVar13 | uVar9);
    break;
  case 0x20:
    if (uVar6 >> 0x37 != 0) goto LAB_00407ec7;
    uVar6 = uVar6 << 9;
    break;
  case 0x21:
    break;
  case 0x35:
    if ((long)uVar6 < 0) goto LAB_00407ec7;
    uVar6 = uVar6 * 2;
  }
  *param_2 = pbVar5 + iVar15;
  if (pbVar5[iVar15] != 0) {
    uVar14 = (ulong)((uint)uVar14 | 2);
  }
LAB_00407d82:
  *param_4 = uVar6;
  return uVar14;
}


int FUN_00408120(FILE *param_1)

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
      if (_Var4 == -1) goto LAB_00408187;
    }
    iVar1 = FUN_004081a0(param_1);
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
LAB_00408187:
  iVar1 = fclose(param_1);
  return iVar1;
}


void FUN_004081a0(FILE *param_1)

{
  int iVar1;
  
  if (param_1 != (FILE *)0x0) {
    iVar1 = __freading();
    if ((iVar1 != 0) && ((param_1->_flags & 0x100U) != 0)) {
      FUN_004081e0(param_1,0,1);
      fflush(param_1);
      return;
    }
  }
  fflush(param_1);
  return;
}


ulong FUN_004081e0(FILE *param_1,__off_t param_2,int param_3)

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


void FUN_00408240(long param_1,int *param_2)

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
      if (iVar3 <= iVar8) goto LAB_004082bc;
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
      if (iVar9 <= iVar3) goto LAB_004082bc;
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
LAB_004082bc:
  param_2[0xc] = iVar2;
  param_2[0xb] = iVar1 + (iVar2 - iVar3);
  return;
}


int FUN_00408320(int param_1,undefined8 *param_2,char *param_3,char **param_4,undefined4 *param_5,
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
      if ((iVar5 == 0) && (sVar7 = strlen(__s1_00), sVar7 == sVar15)) goto LAB_00408540;
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
            if (local_70 == (char *)0x0) goto LAB_00408480;
          }
          else if (local_70 == (char *)0x0) {
            local_70 = (char *)calloc((long)iVar5,1);
            if (local_70 == (char *)0x0) {
              bVar3 = true;
              goto LAB_00408480;
            }
            bVar4 = true;
            local_70[(int)local_44] = '\x01';
          }
          local_70[lVar16] = '\x01';
        }
      }
LAB_00408480:
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
              __fprintf_chk(__stream,1," \'%s%s\'",param_9,*param_4);
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
LAB_00408540:
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


uint FUN_00408940(uint param_1,undefined8 *param_2,char *param_3,long param_4,undefined8 param_5,
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
LAB_0040898a:
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
          goto LAB_00408a8d;
        }
        pbVar8 = *(byte **)(param_7 + 8);
      }
      param_7[10] = 0;
    }
LAB_00408a8d:
    param_7[6] = 1;
    cVar2 = *param_3;
LAB_00408a98:
    if (cVar2 == ':') {
      uVar3 = 0;
    }
    if (pbVar8 == (byte *)0x0) goto LAB_00408a08;
LAB_00408aac:
    if (*pbVar8 == 0) goto LAB_00408a08;
  }
  else {
    if (param_7[6] == 0) goto LAB_0040898a;
    cVar2 = *param_3;
    pbVar8 = *(byte **)(param_7 + 8);
    if ((cVar2 - 0x2bU & 0xfd) != 0) goto LAB_00408a98;
    pcVar4 = param_3 + 1;
    param_3 = param_3 + 1;
    if (*pcVar4 == ':') {
      uVar3 = 0;
    }
    if (pbVar8 != (byte *)0x0) goto LAB_00408aac;
LAB_00408a08:
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
        FUN_00408240(param_2,param_7);
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
LAB_00408b76:
      if (uVar11 != param_1) {
        *param_7 = uVar11;
      }
      return 0xffffffff;
    }
    lVar6 = 3;
    pbVar8 = (byte *)param_2[(int)uVar11];
    pbVar9 = pbVar8;
    pbVar10 = &DAT_0040f680;
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
          FUN_00408240(param_2,param_7);
          uVar11 = param_7[0xb];
        }
      }
      param_7[0xc] = param_1;
      *param_7 = param_1;
      goto LAB_00408b76;
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
        puVar15 = &DAT_0040f680;
        goto LAB_00408cd5;
      }
      if ((int)param_6 != 0) {
        if (pbVar8[2] == 0) {
          pcVar4 = strchr(param_3,(int)(char)bVar14);
          param_6 = param_6 & 0xffffffff;
          if (pcVar4 != (char *)0x0) goto LAB_00408c80;
        }
        *(byte **)(param_7 + 8) = pbVar8 + 1;
        uVar11 = FUN_00408320(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar3,
                              &DAT_0040f681);
        if (uVar11 != 0xffffffff) {
          return uVar11;
        }
        pbVar8 = (byte *)param_2[(int)*param_7];
      }
    }
LAB_00408c80:
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
  puVar15 = &DAT_0040fbbd;
LAB_00408cd5:
  uVar3 = FUN_00408320(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar3,puVar15);
  return uVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408f10(void)

{
  DAT_006125a0 = DAT_006122d8._4_4_;
  _DAT_006125a4 = (undefined4)DAT_006122d8;
  FUN_00408940();
  DAT_006122d8._4_4_ = DAT_006125a0;
  DAT_006125e0 = DAT_006125b0;
  _DAT_006122d4 = DAT_006125a8;
  return;
}


void FUN_00408f70(void)

{
  FUN_00408f10();
  return;
}


void FUN_00408f90(void)

{
  FUN_00408f10();
  return;
}


void FUN_00408fb0(void)

{
  FUN_00408940();
  return;
}


void FUN_00408fd0(void)

{
  FUN_00408f10();
  return;
}


void FUN_00408ff0(void)

{
  FUN_00408940();
  return;
}


size_t FUN_00409010(wchar_t *param_1,byte *param_2,size_t param_3,mbstate_t *param_4)

{
  char cVar1;
  size_t sVar2;
  wchar_t local_1c;
  
  if (param_2 == (byte *)0x0) {
    param_3 = 1;
    param_2 = (byte *)0x40fbbc;
  }
  else {
    if (param_3 == 0) {
      return 0xfffffffffffffffe;
    }
    if (param_1 != (wchar_t *)0x0) goto LAB_00409034;
  }
  param_1 = &local_1c;
LAB_00409034:
  sVar2 = mbrtowc(param_1,(char *)param_2,param_3,param_4);
  if ((0xfffffffffffffffd < sVar2) && (cVar1 = FUN_004091d0(0), cVar1 == '\0')) {
    sVar2 = 1;
    *param_1 = (uint)*param_2;
  }
  return sVar2;
}


ulong FUN_00409090(FILE *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined *__ptr;
  size_t sVar2;
  int *piVar3;
  size_t sVar4;
  size_t local_800;
  undefined local_7f8 [2008];
  
  local_800 = 2000;
  __ptr = (undefined *)FUN_004097b0(local_7f8,&local_800,param_2,param_3);
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
      goto LAB_004090fc;
    }
    if (__ptr != local_7f8) {
      free(__ptr);
    }
    if (sVar4 < 0x80000000) goto LAB_004090fc;
    piVar3 = __errno_location();
    *piVar3 = 0x4b;
  }
  sVar4 = 0xffffffff;
  FUN_004097a0(param_1);
LAB_004090fc:
  return sVar4 & 0xffffffff;
}


void FUN_00409150(undefined8 param_1,undefined8 param_2)

{
  FUN_00409090(stdout,param_1,param_2);
  return;
}


ulong FUN_00409170(uint *param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  
  lVar2 = __fpending();
  uVar1 = *param_1;
  uVar3 = FUN_00408120(param_1);
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


bool FUN_004091d0(int param_1)

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
    pbVar5 = &DAT_0040fbc1;
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

char * FUN_00409230(void)

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
  if (DAT_006125d8 != (char *)0x0) goto LAB_0040926a;
  pcVar7 = getenv("CHARSETALIASDIR");
  if ((pcVar7 == (char *)0x0) || (*pcVar7 == '\0')) {
    sVar6 = 0x73;
    sVar5 = 0x65;
    __n = 100;
    pcVar7 = 
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib"
    ;
LAB_00409355:
    __file = (char *)malloc(sVar6);
    if (__file != (char *)0x0) {
      memcpy(__file,pcVar7,__n);
      __file[__n] = '/';
      goto LAB_00409376;
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
        goto LAB_00409355;
      }
      sVar6 = __n + 0xe;
    }
    __file = (char *)malloc(sVar6);
    if (__file != (char *)0x0) {
      memcpy(__file,pcVar7,__n);
      sVar5 = __n;
LAB_00409376:
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
LAB_00409410:
          pbVar8 = (byte *)__stream->_IO_read_ptr;
          if (__stream->_IO_read_end <= pbVar8) goto LAB_0040959c;
          do {
            __stream->_IO_read_ptr = (char *)(pbVar8 + 1);
            uVar4 = (uint)*pbVar8;
            __ptr = pcVar7;
            while( true ) {
              pcVar7 = __ptr;
              if ((uVar4 - 9 < 2) || (uVar4 == 0x20)) goto LAB_00409410;
              if (uVar4 == 0x23) goto LAB_00409601;
              ungetc(uVar4,__stream);
              iVar2 = fscanf(__stream,"%50s %50s",&local_b8,&local_78);
              puVar13 = &local_b8;
              if (iVar2 < 2) goto LAB_004095af;
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
                FUN_00408120(__stream);
                goto LAB_004093b4;
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
LAB_0040959c:
              uVar4 = __uflow(__stream);
              __ptr = pcVar7;
              if (uVar4 == 0xffffffff) goto LAB_004095af;
            }
          } while( true );
        }
        close(iVar2);
      }
      goto LAB_004093ae;
    }
  }
  DAT_006125d8 = "";
LAB_0040926a:
  cVar1 = *DAT_006125d8;
  pcVar7 = DAT_006125d8;
  do {
    if (cVar1 == '\0') {
LAB_004092c4:
      if (*__s1 == '\0') {
        __s1 = "ASCII";
      }
      return __s1;
    }
    iVar2 = strcmp(__s1,pcVar7);
    if ((iVar2 == 0) || ((cVar1 == '*' && (pcVar7[1] == '\0')))) {
      sVar6 = strlen(pcVar7);
      __s1 = pcVar7 + sVar6 + 1;
      goto LAB_004092c4;
    }
    sVar6 = strlen(pcVar7);
    sVar5 = strlen(pcVar7 + sVar6 + 1);
    pcVar7 = pcVar7 + sVar6 + 1 + sVar5 + 1;
    cVar1 = *pcVar7;
  } while( true );
LAB_00409601:
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
  if (uVar4 == 0xffffffff) goto LAB_004095af;
  goto LAB_00409410;
LAB_004095af:
  FUN_00408120(__stream);
  if (local_d0 == 0) {
LAB_004093ae:
    pcVar7 = "";
  }
  else {
    pcVar7[local_d0] = '\0';
  }
LAB_004093b4:
  free(__file);
  DAT_006125d8 = pcVar7;
  goto LAB_0040926a;
}


void FUN_004097a0(uint *param_1)

{
  *param_1 = *param_1 | 0x20;
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040afec) */
/* WARNING: Removing unreachable block (ram,0x0040b12d) */
/* WARNING: Removing unreachable block (ram,0x0040b000) */
/* WARNING: Removing unreachable block (ram,0x0040a4d4) */
/* WARNING: Removing unreachable block (ram,0x00409aa0) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Could not reconcile some variable overlaps */

undefined2 *
FUN_004097b0(undefined2 *param_1,undefined8 *param_2,undefined2 *param_3,undefined8 param_4)

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
  iVar10 = FUN_0040b4f0(param_3,&local_588,local_678);
  if (iVar10 < 0) {
    return (undefined2 *)0x0;
  }
  iVar10 = FUN_0040b2d0(param_4,local_678);
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
LAB_00409874:
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
      if (puVar24 == param_3) goto LAB_00409a28;
      do {
        puVar24 = (undefined2 *)((long)puVar24 - (long)_local_6a8);
        __n = puVar14 + (long)puVar24;
        puVar13 = puVar20;
        if (CARRY8((ulong)puVar14,(ulong)puVar24)) {
          if (puVar31 != (undefined *)0xffffffffffffffff) goto LAB_00409da0;
          __n = (undefined *)0xffffffffffffffff;
        }
        else if (puVar31 < __n) {
          if (puVar31 == (undefined *)0x0) {
            if (__n < (undefined *)0xd) {
              puVar31 = (undefined *)0xc;
            }
            else {
LAB_004099be:
              puVar31 = __n;
              if (__n == (undefined *)0xffffffffffffffff) goto LAB_00409da0;
            }
          }
          else {
            if ((long)puVar31 < 0) goto LAB_00409da0;
            puVar31 = (undefined *)((long)puVar31 * 2);
            if (puVar31 < __n) goto LAB_004099be;
          }
          if ((puVar20 == (undefined2 *)0x0) || (puVar20 == local_690)) {
            local_6b8 = (undefined2 *)_local_6a8;
            _local_6a8 = (float10)CONCAT91(stack0xfffffffffffff959,puVar20 == local_690);
            local_698 = puVar24;
            *(undefined8 *)(puVar27 + -8) = 0x40991c;
            puVar13 = (undefined2 *)malloc((size_t)puVar31);
            if (puVar13 == (undefined2 *)0x0) goto LAB_00409da0;
            puVar24 = local_698;
            _local_6a8 = (int *)local_6b8;
            if ((puVar14 != (undefined *)0x0) && (local_6a8[0] != '\0')) {
              _local_6a8 = (float10)CONCAT28(auStack_6a4._4_2_,local_6b8);
              *(undefined8 *)(puVar27 + -8) = 0x40996a;
              puVar13 = (undefined2 *)memcpy(puVar13,puVar20,(size_t)puVar14);
              puVar24 = local_698;
            }
          }
          else {
            local_698 = puVar24;
            *(undefined8 *)(puVar27 + -8) = 0x4099ff;
            puVar13 = (undefined2 *)realloc(puVar20,(size_t)puVar31);
            if (puVar13 == (undefined2 *)0x0) {
LAB_00409fb5:
              *(undefined8 *)(puVar27 + -8) = 0x409fba;
              piVar16 = __errno_location();
              _local_6a8 = (float10)CONCAT28(auStack_6a4._4_2_,piVar16);
              goto LAB_00409fc8;
            }
            puVar24 = local_698;
          }
        }
        *(undefined8 *)(puVar27 + -8) = 0x409a28;
        memcpy((undefined *)((long)puVar13 + (long)puVar14),_local_6a8,(size_t)puVar24);
        puVar20 = puVar13;
LAB_00409a28:
        do {
          if (local_588 == local_6c0) {
            puVar14 = __n + 1;
            puVar24 = puVar20;
            if ((undefined *)0xfffffffffffffffe < __n) {
              if (puVar31 == (undefined *)0xffffffffffffffff) goto LAB_0040abb2;
              goto LAB_00409da0;
            }
            if (puVar14 <= puVar31) goto LAB_0040abb2;
            if (puVar31 == (undefined *)0x0) {
              if (puVar14 < (undefined *)0xd) {
                puVar31 = (undefined *)0xc;
              }
              else {
LAB_0040b18f:
                puVar31 = puVar14;
                if (puVar14 == (undefined *)0xffffffffffffffff) goto LAB_00409da0;
              }
            }
            else {
              if ((long)puVar31 < 0) goto LAB_00409da0;
              puVar31 = (undefined *)((long)puVar31 * 2);
              if (puVar31 < puVar14) goto LAB_0040b18f;
            }
            bVar33 = puVar20 == local_690;
            if ((puVar20 == (undefined2 *)0x0) || (bVar33)) {
              *(undefined8 *)(puVar27 + -8) = 0x40b149;
              puVar24 = (undefined2 *)malloc((size_t)puVar31);
              if (puVar24 == (undefined2 *)0x0) goto LAB_00409da0;
              if ((__n != (undefined *)0x0) && (bVar33)) {
                *(undefined8 *)(puVar27 + -8) = 0x40b175;
                puVar24 = (undefined2 *)memcpy(puVar24,puVar20,(size_t)__n);
              }
            }
            else {
              *(undefined8 *)(puVar27 + -8) = 0x40aba6;
              puVar24 = (undefined2 *)realloc(puVar20,(size_t)puVar31);
              if (puVar24 == (undefined2 *)0x0) goto LAB_00409fb5;
            }
LAB_0040abb2:
            *(undefined *)((long)puVar24 + (long)__n) = 0;
            if ((puVar14 < puVar31) && (puVar24 != local_690)) {
              *(undefined8 *)(puVar27 + -8) = 0x40abd0;
              puVar20 = (undefined2 *)realloc(puVar24,(size_t)puVar14);
              if (puVar20 != (undefined2 *)0x0) {
                puVar24 = puVar20;
              }
            }
            puVar31 = local_6e0;
            if (local_6e0 != (undefined *)0x0) {
              *(undefined8 *)(puVar27 + -8) = 0x40abeb;
              free(puVar31);
            }
            if (local_580 != auStack_568) {
              *(undefined8 *)(puVar27 + -8) = 0x40ac07;
              free(local_580);
            }
            if (local_670 != auStack_668) {
              *(undefined8 *)(puVar27 + -8) = 0x40ac23;
              free(local_670);
            }
            *local_6d8 = __n;
            return puVar24;
          }
          bVar8 = *(byte *)(puVar32 + 9);
          lVar30 = puVar32[10];
          if (bVar8 == 0x25) {
            if (lVar30 != -1) goto LAB_0040a4dc;
            puVar14 = __n + 1;
            puVar24 = puVar20;
            if (__n < (undefined *)0xffffffffffffffff) {
              if (puVar31 < puVar14) {
                if (puVar31 == (undefined *)0x0) {
                  if (puVar14 < (undefined *)0xd) {
                    puVar31 = (undefined *)0xc;
                  }
                  else {
LAB_0040a752:
                    puVar31 = puVar14;
                    if (puVar14 == (undefined *)0xffffffffffffffff) goto LAB_00409da0;
                  }
                }
                else {
                  if ((long)puVar31 < 0) goto LAB_00409da0;
                  puVar31 = (undefined *)((long)puVar31 * 2);
                  if (puVar31 < puVar14) goto LAB_0040a752;
                }
                if ((puVar20 == (undefined2 *)0x0) || (puVar20 == local_690)) {
                  local_698 = (undefined2 *)
                              ((ulong)local_698 & 0xffffffffffffff00 | (ulong)(puVar20 == local_690)
                              );
                  *(undefined8 *)(puVar27 + -8) = 0x40a69e;
                  puVar24 = (undefined2 *)malloc((size_t)puVar31);
                  if (puVar24 == (undefined2 *)0x0) goto LAB_00409da0;
                  if ((__n != (undefined *)0x0) && ((char)local_698 != '\0')) {
                    *(undefined8 *)(puVar27 + -8) = 0x40a6d0;
                    puVar24 = (undefined2 *)memcpy(puVar24,puVar20,(size_t)__n);
                  }
                }
                else {
                  *(undefined8 *)(puVar27 + -8) = 0x409e96;
                  puVar24 = (undefined2 *)realloc(puVar20,(size_t)puVar31);
                  if (puVar24 == (undefined2 *)0x0) goto LAB_00409fb5;
                }
              }
            }
            else {
              if (puVar31 != (undefined *)0xffffffffffffffff) goto LAB_00409da0;
              puVar14 = (undefined *)0xffffffffffffffff;
            }
            *(undefined *)((long)puVar24 + (long)__n) = 0x25;
            puVar20 = puVar24;
            __n = puVar14;
            goto LAB_00409ea7;
          }
          if (lVar30 == -1) goto LAB_0040a4dc;
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
switchD_00409f0c_caseD_5:
                    /* WARNING: Subroutine does not return */
              *(undefined8 *)(puVar27 + -8) = 0x401bd8;
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
                        if (pcVar21 == pcVar6) goto LAB_00409d30;
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
                  if (*(int *)(local_670 + (long)puVar13 * 0x10) != 5) goto LAB_0040a4dc;
                  iVar10 = *(int *)((long)(local_670 + (long)puVar13 * 0x10) + 0x10);
                  puVar24 = (undefined2 *)(long)iVar10;
                  if (iVar10 < 0) {
                    local_6b8._0_4_ = (uint)local_6b8 | 2;
                    puVar24 = (undefined2 *)-(long)(undefined2 *)(long)iVar10;
                  }
                }
              }
LAB_00409d30:
              pcVar21 = (char *)puVar32[7];
              if ((char *)puVar32[6] == pcVar21) {
LAB_0040a3e0:
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
                          if (pcVar21 == pcVar6) goto LAB_00409da0;
                          pcVar26 = pcVar6 + 1;
                          cVar9 = *pcVar6;
                          pcVar6 = pcVar26;
                        } while (cVar9 != '0');
                        puVar13 = (undefined2 *)0xffffffffffffffff;
                      }
                      pcVar25 = pcVar26;
                    } while (pcVar21 != pcVar26);
                    goto LAB_00409d6c;
                  }
                }
                else {
                  if (*(int *)(local_670 + puVar32[8] * 0x10) != 5) goto LAB_0040a4dc;
                  iVar10 = *(int *)((long)(local_670 + puVar32[8] * 0x10) + 0x10);
                  puVar13 = (undefined2 *)(long)iVar10;
                  if (iVar10 < 0) goto LAB_0040a3e0;
LAB_00409d6c:
                  if (puVar13 != (undefined2 *)0x0) {
                    puVar18 = puVar13 + 6;
                    if (puVar13 < (undefined2 *)0xfffffffffffffff4) goto LAB_0040a3fe;
                    goto LAB_00409da0;
                  }
                }
                puVar18 = (undefined2 *)0xc;
              }
LAB_0040a3fe:
              if (puVar18 <= puVar24) {
                puVar18 = puVar24;
              }
              puVar17 = (undefined2 *)((long)puVar18 + 1);
              local_698 = puVar17;
              if (puVar18 == (undefined2 *)0xffffffffffffffff) goto LAB_00409da0;
              if (puVar17 < (undefined2 *)0x2bd) {
                puVar18 = local_2f8;
              }
              else {
                local_6d0 = puVar24;
                local_6c8 = puVar13;
                local_6b8 = (undefined2 *)
                            ((ulong)local_6b8 & 0xffffffff00000000 | (ulong)(uint)local_6b8);
                _local_6a8 = fVar34;
                if (puVar17 == (undefined2 *)0xffffffffffffffff) goto LAB_00409da0;
                *(undefined8 *)(puVar27 + -8) = 0x40a452;
                puVar18 = (undefined2 *)malloc((size_t)puVar17);
                puVar13 = local_6c8;
                puVar24 = local_6d0;
                fVar34 = _local_6a8;
                if (puVar18 == (undefined2 *)0x0) goto LAB_00409da0;
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
                if (fVar34 != (float10)0) goto LAB_0040a4dc;
                bVar8 = *(byte *)(puVar32 + 9) & 0xdf;
                if (bVar8 == 0x46) {
                  *(undefined *)puVar17 = 0x30;
                  if ((((uint)local_6b8 & 0x10) == 0) && (puVar13 == (undefined2 *)0x0)) {
LAB_0040a927:
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
                    *(undefined8 *)(puVar27 + -8) = 0x40ae61;
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
                    *(undefined8 *)(puVar27 + -8) = 0x40b0bf;
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
                  if (((uint)local_6b8 & 0x10) == 0) goto LAB_0040a927;
                  if (puVar13 == (undefined2 *)0x0) {
                    local_6e8 = (undefined2 *)
                                ((ulong)local_6e8 & 0xffffffff00000000 |
                                (ulong)uVar7 & 0xffffffff0000ffff);
                    local_6d0 = puVar24;
                    local_6c8 = puVar17 + 1;
                    local_6b8 = puVar18;
                    _local_6a8 = (float10)CONCAT64(auStack_6a4._0_6_,(uint)local_6b8);
                    *(undefined8 *)(puVar27 + -8) = 0x40b277;
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
                    *(undefined8 *)(puVar27 + -8) = 0x40ad8d;
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
                  if (bVar8 != 0x41) goto LAB_0040a4dc;
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
                    *(undefined8 *)(puVar27 + -8) = 0x40b1d9;
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
                if (fVar34 + fVar34 != fVar34) goto LAB_0040a4dc;
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
LAB_0040a4dc:
                    /* WARNING: Subroutine does not return */
                *(undefined **)(puVar27 + -8) = &UNK_0040a4e1;
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
LAB_0040afda:
                        puVar31 = puVar14;
                        if (puVar14 == (undefined *)0xffffffffffffffff) goto LAB_00409da0;
                      }
                    }
                    else {
                      if ((long)puVar31 < 0) goto LAB_00409da0;
                      puVar31 = (undefined *)((long)puVar31 * 2);
                      if (puVar31 < puVar14) goto LAB_0040afda;
                    }
                    if ((puVar20 == (undefined2 *)0x0) || (puVar20 == local_690)) {
                      local_6b8 = (undefined2 *)
                                  ((ulong)local_6b8 & 0xffffffffffffff00 |
                                  (ulong)(puVar20 == local_690));
                      local_698 = puVar18;
                      *(undefined8 *)(puVar27 + -8) = 0x40acc7;
                      puVar24 = (undefined2 *)malloc((size_t)puVar31);
                      if (puVar24 == (undefined2 *)0x0) goto LAB_00409da0;
                      puVar18 = local_698;
                      if ((__n != (undefined *)0x0) && ((char)local_6b8 != '\0')) {
                        *(undefined8 *)(puVar27 + -8) = 0x40ad15;
                        puVar24 = (undefined2 *)memcpy(puVar24,puVar20,(size_t)__n);
                        puVar18 = local_698;
                      }
                    }
                    else {
                      local_698 = puVar18;
                      *(undefined8 *)(puVar27 + -8) = 0x40aa42;
                      puVar24 = (undefined2 *)realloc(puVar20,(size_t)puVar31);
                      if (puVar24 == (undefined2 *)0x0) goto LAB_00409da0;
                      puVar18 = local_698;
                    }
                  }
                }
                else if (puVar31 != (undefined *)0xffffffffffffffff) goto LAB_00409da0;
              }
              local_698 = puVar18;
              *(undefined8 *)(puVar27 + -8) = 0x40aa76;
              memcpy((undefined *)((long)puVar24 + (long)__n),puVar18,(size_t)_local_6a8);
              puVar13 = local_698;
              puVar20 = puVar24;
              __n = puVar14;
              if (local_698 != local_2f8) {
                *(undefined8 *)(puVar27 + -8) = 0x40aa95;
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
                *(undefined8 *)(puVar27 + -8) = 0x409b49;
                memcpy(puVar24,pvVar5,sVar28);
                puVar24 = (undefined2 *)((long)puVar24 + (long)_local_6a8);
                puVar13 = local_6b8;
              }
              pvVar5 = (void *)puVar32[6];
              if (pvVar5 != (void *)puVar32[7]) {
                local_6b8 = puVar13;
                sVar28 = (long)(void *)puVar32[7] - (long)pvVar5;
                _local_6a8 = (float10)CONCAT28(auStack_6a4._4_2_,sVar28);
                *(undefined8 *)(puVar27 + -8) = 0x409b86;
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
                      goto LAB_00409fa8;
                    }
                  }
                  else {
                    *(undefined *)puVar24 = 0x4c;
                    puVar24 = (undefined2 *)((long)puVar24 + 1);
                  }
                }
                else {
LAB_00409fa8:
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
                if (*(int *)(puVar13 + puVar32[5] * 0x10) != 5) goto LAB_0040a4dc;
                local_6b8 = (undefined2 *)CONCAT44(local_6b8._4_4_,1);
                local_680 = *(uint *)((long)(puVar13 + puVar32[5] * 0x10) + 0x10);
              }
              if (puVar32[8] != -1) {
                if (*(int *)(puVar13 + puVar32[8] * 0x10) != 5) goto LAB_0040a4dc;
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
LAB_0040a392:
                      puVar31 = puVar14;
                      if (puVar14 == (undefined *)0xffffffffffffffff) goto LAB_00409da0;
                    }
                  }
                  else {
                    if ((long)puVar31 < 0) goto LAB_00409da0;
                    puVar31 = (undefined *)((long)puVar31 * 2);
                    if (puVar31 < puVar14) goto LAB_0040a392;
                  }
                  if ((puVar20 == (undefined2 *)0x0) || (puVar20 == local_690)) {
                    _local_6a8 = (float10)CONCAT91(stack0xfffffffffffff959,puVar20 == local_690);
                    *(undefined8 *)(puVar27 + -8) = 0x40a63e;
                    puVar13 = (undefined2 *)malloc((size_t)puVar31);
                    if (puVar13 == (undefined2 *)0x0) goto LAB_00409da0;
                    if ((__n != (undefined *)0x0) && (local_6a8[0] != '\0')) {
                      *(undefined8 *)(puVar27 + -8) = 0x40a670;
                      puVar13 = (undefined2 *)memcpy(puVar13,puVar20,(size_t)__n);
                    }
                  }
                  else {
                    *(undefined8 *)(puVar27 + -8) = 0x409c98;
                    puVar13 = (undefined2 *)realloc(puVar20,(size_t)puVar31);
                    if (puVar13 == (undefined2 *)0x0) goto LAB_00409da0;
                  }
                }
              }
              else if (puVar31 != (undefined *)0xffffffffffffffff) goto LAB_00409da0;
              *(undefined *)((long)puVar13 + (long)__n) = 0;
              local_6c8 = puVar13;
              *(undefined8 *)(puVar27 + -8) = 0x409cb5;
              puVar15 = (uint *)__errno_location();
              puVar13 = local_6c8;
              local_6c8 = puVar24;
              _local_6a8 = (float10)CONCAT28(auStack_6a4._4_2_,puVar15);
              local_6e8 = (undefined2 *)((ulong)local_6e8 & 0xffffffff00000000 | (ulong)*puVar15);
LAB_00409cd8:
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
                goto switchD_00409f0c_caseD_5;
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
                  goto LAB_0040a5b2;
                }
                if ((uint)local_6b8 != 2) {
                  *(int **)(puVar27 + -0x10) = &local_684;
LAB_0040a01a:
                  puVar14 = local_6b0;
                  *(undefined8 *)(puVar27 + -0x18) = 0x40a037;
                  iVar10 = __snprintf_chk((undefined *)((long)puVar13 + (long)__n),uVar11,1,
                                          0xffffffffffffffff,puVar14,piVar16);
                  goto LAB_0040a040;
                }
                *(int **)(puVar27 + -0x10) = &local_684;
                *(int **)(puVar27 + -0x18) = piVar16;
                goto LAB_0040a566;
              case 0xb:
                local_6d0 = puVar13;
                uVar1 = *(undefined8 *)(local_670 + puVar32[10] * 0x10 + 8);
                if ((uint)local_6b8 == 1) {
                  *(int **)(puVar27 + -0x10) = &local_684;
                }
                else {
                  if ((uint)local_6b8 != 2) {
                    *(undefined8 *)(puVar27 + -8) = 0x40a30e;
                    iVar10 = __snprintf_chk(uVar1,(undefined *)((long)puVar13 + (long)__n),uVar11,1,
                                            0xffffffffffffffff,puVar14,&local_684);
                    goto LAB_0040a040;
                  }
                  *(int **)(puVar27 + -8) = &local_684;
                  *(ulong *)(puVar27 + -0x10) = (ulong)local_67c;
                }
                uVar4 = local_680;
                puVar14 = local_6b0;
                *(undefined8 *)(puVar27 + -0x18) = 0x40a7ae;
                iVar10 = __snprintf_chk(uVar1,(undefined *)((long)puVar13 + (long)__n),uVar11,1,
                                        0xffffffffffffffff,puVar14,uVar4);
                goto LAB_0040a040;
              case 0xc:
                local_6d0 = puVar13;
                Var2 = *(unkbyte10 *)(local_670 + puVar32[10] * 0x10 + 8);
                if ((uint)local_6b8 != 1) {
                  if ((uint)local_6b8 != 2) {
                    piVar16 = &local_684;
                    *(unkbyte10 *)(puVar27 + -0x10) = Var2;
                    goto LAB_0040a01a;
                  }
                  *(int **)(puVar27 + -0x10) = &local_684;
                  uVar19 = (ulong)local_67c;
                  *(unkbyte10 *)(puVar27 + -0x20) = Var2;
                  *(ulong *)(puVar27 + -0x30) = uVar19;
                  *(undefined8 *)(puVar27 + -0x38) = 0x40a80f;
                  iVar10 = __snprintf_chk((undefined *)((long)puVar13 + (long)__n),uVar11,1,
                                          0xffffffffffffffff,puVar14,uVar4);
                  goto LAB_0040a040;
                }
                *(int **)(puVar27 + -0x10) = &local_684;
                *(unkbyte10 *)(puVar27 + -0x20) = Var2;
                goto LAB_0040a56d;
              }
              local_6d0 = puVar13;
              if ((uint)local_6b8 == 1) {
                *(int **)(puVar27 + -8) = &local_684;
                *(ulong *)(puVar27 + -0x10) = uVar19;
LAB_0040a5b2:
                uVar19 = (ulong)local_680;
LAB_0040a15a:
                puVar14 = local_6b0;
                *(undefined8 *)(puVar27 + -0x18) = 0x40a177;
                iVar10 = __snprintf_chk((undefined *)((long)puVar13 + (long)__n),uVar11,1,
                                        0xffffffffffffffff,puVar14,uVar19);
                if (-1 < local_684) goto LAB_0040a04e;
LAB_0040a18e:
                puVar24 = local_6d0;
                if (*(char *)((long)local_6c8 + 1) == '\0') {
                  if (iVar10 < 0) {
                    iVar10 = *_local_6a8;
                    if ((iVar10 == 0) && (iVar10 = 0x54, (*(byte *)(puVar32 + 9) & 0xef) != 99)) {
                      iVar10 = 0x16;
                    }
                    if ((local_6d0 != local_690) && (local_6d0 != (undefined2 *)0x0)) {
                      *(undefined8 *)(puVar27 + -8) = 0x40a1e4;
                      free(puVar24);
                    }
                    puVar31 = local_6e0;
                    if (local_6e0 != (undefined *)0x0) {
                      *(undefined8 *)(puVar27 + -8) = 0x40a1f8;
                      free(puVar31);
                    }
                    if (local_580 != auStack_568) {
                      *(undefined8 *)(puVar27 + -8) = 0x40a214;
                      free(local_580);
                    }
                    if (local_670 != auStack_668) {
                      *(undefined8 *)(puVar27 + -8) = 0x40a230;
                      free(local_670);
                    }
                    *_local_6a8 = iVar10;
                    return (undefined2 *)0x0;
                  }
                  goto LAB_0040a068;
                }
                *(undefined *)((long)local_6c8 + 1) = 0;
                puVar13 = local_6d0;
                goto LAB_00409cd8;
              }
              if ((uint)local_6b8 != 2) {
                *(int **)(puVar27 + -0x10) = &local_684;
                goto LAB_0040a15a;
              }
              *(int **)(puVar27 + -0x10) = &local_684;
              *(ulong *)(puVar27 + -0x18) = uVar19;
LAB_0040a566:
              *(ulong *)(puVar27 + -0x20) = (ulong)local_67c;
LAB_0040a56d:
              uVar4 = local_680;
              puVar14 = local_6b0;
              *(undefined8 *)(puVar27 + -0x28) = 0x40a591;
              iVar10 = __snprintf_chk((undefined *)((long)puVar13 + (long)__n),uVar11,1,
                                      0xffffffffffffffff,puVar14,uVar4);
LAB_0040a040:
              if (local_684 < 0) goto LAB_0040a18e;
LAB_0040a04e:
              if (((ulong)(long)local_684 < uVar11) &&
                 (((undefined *)((long)local_684 + (long)local_6d0))[(long)__n] != '\0'))
              goto LAB_0040a4dc;
              if (local_684 < iVar10) {
LAB_0040a068:
                local_684 = iVar10;
              }
              puVar24 = local_6d0;
              puVar20 = local_6d0;
              if (uVar11 <= local_684 + 1) {
                if (0x7ffffffe < uVar12) {
                  if ((local_6d0 != local_690) && (local_6d0 != (undefined2 *)0x0)) {
                    *(undefined8 *)(puVar27 + -8) = 0x40a876;
                    free(puVar24);
                  }
                  puVar31 = local_6e0;
                  if (local_6e0 != (undefined *)0x0) {
                    *(undefined8 *)(puVar27 + -8) = 0x40a88a;
                    free(puVar31);
                  }
                  if (local_580 != auStack_568) {
                    *(undefined8 *)(puVar27 + -8) = 0x40a8a6;
                    free(local_580);
                  }
                  if (local_670 != auStack_668) {
                    *(undefined8 *)(puVar27 + -8) = 0x40a8c2;
                    free(local_670);
                  }
                  *_local_6a8 = 0x4b;
                  return (undefined2 *)0x0;
                }
                puVar13 = local_6d0;
                if ((long)puVar31 < 0) {
                  if (puVar31 != (undefined *)0xffffffffffffffff) goto LAB_00409daf;
                }
                else {
                  if (CARRY8((ulong)(local_684 + 2),(ulong)__n) != false) goto LAB_00409daf;
                  puVar14 = __n + (local_684 + 2);
                  if (__n + (local_684 + 2) <= (undefined *)((long)puVar31 * 2)) {
                    puVar14 = (undefined *)((long)puVar31 * 2);
                  }
                  if (puVar31 < puVar14) {
                    puVar31 = (undefined *)((long)puVar31 * 2);
                    if ((puVar31 < puVar14) &&
                       (puVar31 = puVar14, puVar14 == (undefined *)0xffffffffffffffff))
                    goto LAB_00409daf;
                    bVar33 = local_6d0 == local_690;
                    if ((local_6d0 == (undefined2 *)0x0) || (bVar33)) {
                      *(undefined8 *)(puVar27 + -8) = 0x40a50f;
                      puVar13 = (undefined2 *)malloc((size_t)puVar31);
                      puVar24 = local_6d0;
                      puVar20 = local_6d0;
                      if (puVar13 == (undefined2 *)0x0) goto LAB_00409daf;
                      if ((__n != (undefined *)0x0) && (bVar33)) {
                        *(undefined8 *)(puVar27 + -8) = 0x40a53d;
                        puVar13 = (undefined2 *)memcpy(puVar13,puVar24,(size_t)__n);
                      }
                    }
                    else {
                      *(undefined8 *)(puVar27 + -8) = 0x40a0fd;
                      puVar13 = (undefined2 *)realloc(puVar24,(size_t)puVar31);
                      puVar20 = local_6d0;
                      if (puVar13 == (undefined2 *)0x0) goto LAB_00409daf;
                    }
                  }
                }
                goto LAB_00409cd8;
              }
              __n = __n + local_684;
              *_local_6a8 = local_6e8._0_4_;
            }
          }
LAB_00409ea7:
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
        goto LAB_00409874;
      }
    }
  }
  goto LAB_00409ed0;
LAB_00409da0:
  *(undefined8 *)(puVar27 + -8) = 0x409da5;
  piVar16 = __errno_location();
  _local_6a8 = (float10)CONCAT28(auStack_6a4._4_2_,piVar16);
LAB_00409daf:
  if ((puVar20 != local_690) && (puVar20 != (undefined2 *)0x0)) {
LAB_00409fc8:
    *(undefined8 *)(puVar27 + -8) = 0x409fd0;
    free(puVar20);
  }
  puVar31 = local_6e0;
  if (local_6e0 != (undefined *)0x0) {
    *(undefined8 *)(puVar27 + -8) = 0x409dd9;
    free(puVar31);
    goto LAB_00409dd9;
  }
LAB_00409ed0:
  *(undefined8 *)(puVar27 + -8) = 0x409ed5;
  piVar16 = __errno_location();
  _local_6a8 = (float10)CONCAT28(auStack_6a4._4_2_,piVar16);
LAB_00409dd9:
  if (local_580 != auStack_568) {
    *(undefined8 *)(puVar27 + -8) = 0x409df5;
    free(local_580);
  }
  if (local_670 != auStack_668) {
    *(undefined8 *)(puVar27 + -8) = 0x409e11;
    free(local_670);
  }
  *_local_6a8 = 0xc;
  return (undefined2 *)0x0;
}


undefined8 FUN_0040b2d0(uint *param_1,ulong *param_2)

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
          puVar4 = &DAT_0040fde0;
        }
        *(undefined **)(puVar2 + 4) = puVar4;
      }
      uVar6 = uVar6 + 1;
      puVar2 = puVar2 + 8;
    } while (uVar6 <= *param_2 && *param_2 != uVar6);
  }
  return 0;
}


undefined8 FUN_0040b4f0(byte *param_1,ulong *param_2,byte **param_3)

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
LAB_0040b56b:
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
LAB_0040b636:
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
        if (bVar17 != 0x49) goto LAB_0040b698;
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
  if (bVar4 != 0x24) goto LAB_0040b636;
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
      if (9 < (byte)(bVar17 - 0x30)) goto switchD_0040b877_caseD_26;
    }
  } while ((byte)(bVar17 - 0x30) < 10);
  if (pbVar11 + -1 < (byte *)0xfffffffffffffffe) {
    param_1 = pbVar18 + 2;
    bVar17 = pbVar18[2];
    pbVar18 = pbVar11 + -1;
    goto LAB_0040b636;
  }
  goto switchD_0040b877_caseD_26;
LAB_0040b698:
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
joined_r0x0040b7aa:
    uVar8 = local_70;
    local_68 = pbVar12;
    if (bVar17 != 0x2e) goto LAB_0040b6b1;
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
      goto LAB_0040b6b1;
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
      if (bVar17 != 0x24) goto LAB_0040b7ef;
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
          if (9 < bVar17) goto switchD_0040b877_caseD_26;
        }
      } while (bVar17 < 10);
      pbVar14 = (byte *)(uVar16 - 1);
      if ((byte *)0xfffffffffffffffd < pbVar14) goto switchD_0040b877_caseD_26;
      ppbVar3[8] = pbVar14;
      pbVar11 = pbVar12 + 2;
    }
    else {
LAB_0040b7ef:
      pbVar14 = ppbVar3[8];
      if (ppbVar3[8] == (byte *)0xffffffffffffffff) {
        local_68 = pbVar12 + 1;
        ppbVar3[8] = pbVar12;
        pbVar14 = pbVar12;
        if (pbVar12 == (byte *)0xffffffffffffffff) goto switchD_0040b877_caseD_26;
      }
    }
    __ptr = (byte **)param_3[1];
    if (pbVar14 < pbVar19) {
      pbVar12 = *param_3;
      __dest_00 = __ptr;
LAB_0040b80e:
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
LAB_0040b6b1:
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
               (bVar17 != 0x74)) goto code_r0x0040b874;
            uVar5 = uVar5 + 8;
          }
          bVar17 = *param_1;
        } while( true );
      }
      if (iVar6 == 5) {
        bVar17 = *pbVar11;
        goto LAB_0040b6b1;
      }
      goto LAB_0040bcbc;
    }
    pbVar19 = (byte *)((long)pbVar19 * 2);
    if (pbVar19 <= pbVar14) {
      pbVar19 = pbVar14 + 1;
    }
    if (pbVar19 < (byte *)0x800000000000000) {
      if (ppbVar2 == __ptr) {
        __dest_00 = (byte **)malloc((long)pbVar19 << 5);
        if (__dest_00 == (byte **)0x0) goto LAB_0040bea9;
        pbVar12 = *param_3;
        __ptr = ppbVar2;
LAB_0040c15b:
        memcpy(__dest_00,__ptr,(long)pbVar12 << 5);
        pbVar12 = *param_3;
      }
      else {
        __dest_00 = (byte **)realloc(__ptr,(long)pbVar19 << 5);
        __ptr = (byte **)param_3[1];
        if (__dest_00 == (byte **)0x0) goto LAB_0040be90;
        pbVar12 = *param_3;
        if (ppbVar2 == __ptr) goto LAB_0040c15b;
      }
      param_3[1] = (byte *)__dest_00;
      goto LAB_0040b80e;
    }
    goto LAB_0040be90;
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
    if (bVar17 != 0x24) goto LAB_0040b73d;
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
        if (9 < bVar17) goto switchD_0040b877_caseD_26;
      }
    } while (bVar17 < 10);
    pbVar14 = pbVar14 + -1;
    if ((byte *)0xfffffffffffffffd < pbVar14) goto switchD_0040b877_caseD_26;
    ppbVar3[5] = pbVar14;
    pbVar11 = pbVar10 + 2;
  }
  else {
LAB_0040b73d:
    pbVar14 = ppbVar3[5];
    if (ppbVar3[5] == (byte *)0xffffffffffffffff) {
      ppbVar3[5] = local_68;
      bVar21 = local_68 == (byte *)0xffffffffffffffff;
      pbVar14 = local_68;
      local_68 = local_68 + 1;
      if (bVar21) goto switchD_0040b877_caseD_26;
    }
  }
  __ptr = (byte **)param_3[1];
  if (pbVar14 < pbVar19) {
    pbVar12 = *param_3;
    __dest_00 = __ptr;
LAB_0040b75c:
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
      if (iVar6 != 5) goto LAB_0040bcbc;
      bVar17 = *pbVar11;
      pbVar11 = pbVar11 + 1;
    }
    goto joined_r0x0040b7aa;
  }
  pbVar19 = (byte *)((long)pbVar19 * 2);
  if (pbVar19 <= pbVar14) {
    pbVar19 = pbVar14 + 1;
  }
  if ((byte *)0x7ffffffffffffff < pbVar19) goto LAB_0040be90;
  if (ppbVar2 != __ptr) {
    __dest_00 = (byte **)realloc(__ptr,(long)pbVar19 << 5);
    __ptr = (byte **)param_3[1];
    if (__dest_00 != (byte **)0x0) {
      pbVar12 = *param_3;
      if (ppbVar2 == __ptr) goto LAB_0040bfa9;
      goto LAB_0040ba7d;
    }
    goto LAB_0040be90;
  }
  __dest_00 = (byte **)malloc((long)pbVar19 << 5);
  if (__dest_00 != (byte **)0x0) {
    pbVar12 = *param_3;
    __ptr = ppbVar2;
LAB_0040bfa9:
    memcpy(__dest_00,__ptr,(long)pbVar12 << 5);
    pbVar12 = *param_3;
LAB_0040ba7d:
    param_3[1] = (byte *)__dest_00;
    goto LAB_0040b75c;
  }
  goto LAB_0040bea9;
code_r0x0040b874:
  switch(bVar17) {
  case 0x25:
    goto switchD_0040b877_caseD_25;
  default:
    goto switchD_0040b877_caseD_26;
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
switchD_0040b877_caseD_26:
      __dest_00 = (byte **)param_3[1];
      goto LAB_0040bcbc;
    }
  }
  else {
    ppbVar3[10] = pbVar18;
  }
  __ptr = (byte **)param_3[1];
  __dest_00 = __ptr;
  if (pbVar18 < pbVar19) {
LAB_0040b8a5:
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
LAB_0040bcbc:
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
switchD_0040b877_caseD_25:
    *(byte *)(ppbVar3 + 9) = bVar17;
    uVar8 = *param_2;
    ppbVar3[1] = param_1;
    uVar8 = uVar8 + 1;
    *param_2 = uVar8;
    if (uVar8 < uVar20) {
      __dest = (ulong *)param_2[1];
      goto LAB_0040b56b;
    }
    if (((long)uVar20 < 0) || (0x2e8ba2e8ba2e8ba < uVar20 * 2)) {
LAB_0040c1e3:
      __ptr = (byte **)param_3[1];
      goto LAB_0040be90;
    }
    __ptr_00 = (ulong *)param_2[1];
    if (puVar1 != __ptr_00) {
      __dest = (ulong *)realloc(__ptr_00,uVar20 * 0xb0);
      if (__dest == (ulong *)0x0) goto LAB_0040c1e3;
      __ptr_00 = (ulong *)param_2[1];
      uVar8 = *param_2;
      if (puVar1 != __ptr_00) goto LAB_0040b97f;
LAB_0040baa4:
      __dest = (ulong *)memcpy(__dest,__ptr_00,uVar8 * 0x58);
      uVar8 = *param_2;
LAB_0040b97f:
      param_2[1] = (ulong)__dest;
      uVar20 = uVar20 * 2;
      goto LAB_0040b56b;
    }
    __dest = (ulong *)malloc(uVar20 * 0xb0);
    if (__dest != (ulong *)0x0) goto LAB_0040baa4;
    __ptr = (byte **)param_3[1];
    if (ppbVar2 == __ptr) goto LAB_0040beb9;
  }
  else {
    pbVar19 = (byte *)((long)pbVar19 * 2);
    if (pbVar19 <= pbVar18) {
      pbVar19 = pbVar18 + 1;
    }
    if (pbVar19 < (byte *)0x800000000000000) {
      if (ppbVar2 == __ptr) {
        __dest_00 = (byte **)malloc((long)pbVar19 << 5);
        if (__dest_00 == (byte **)0x0) goto LAB_0040bea9;
LAB_0040be46:
        memcpy(__dest_00,__ptr,(long)*param_3 << 5);
LAB_0040bd8b:
        param_3[1] = (byte *)__dest_00;
        goto LAB_0040b8a5;
      }
      __dest_00 = (byte **)realloc(__ptr,(long)pbVar19 << 5);
      if (__dest_00 != (byte **)0x0) {
        __ptr = ppbVar2;
        if (ppbVar2 == (byte **)param_3[1]) goto LAB_0040be46;
        goto LAB_0040bd8b;
      }
      goto LAB_0040c1e3;
    }
LAB_0040be90:
    if (ppbVar2 == __ptr) goto LAB_0040bea9;
  }
  free(__ptr);
LAB_0040bea9:
  if (puVar1 != (ulong *)param_2[1]) {
    free((ulong *)param_2[1]);
  }
LAB_0040beb9:
  piVar9 = __errno_location();
  *piVar9 = 0xc;
  return 0xffffffff;
}


/* WARNING: Removing unreachable block (ram,0x0040c233) */
/* WARNING: Removing unreachable block (ram,0x0040c238) */

void FUN_0040c200(void)

{
  __DT_INIT();
  return;
}


void FUN_0040c260(void)

{
  return;
}


void FUN_0040c270(undefined8 param_1)

{
  __cxa_atexit(param_1,0,DAT_00612248);
  return;
}


undefined8 FUN_0040c288(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code **ppcVar1;
  
  for (ppcVar1 = (code **)&DAT_00611e30; *ppcVar1 != (code *)0xffffffffffffffff;
      ppcVar1 = ppcVar1 + -1) {
    (**ppcVar1)();
  }
  return param_3;
}


void __DT_FINI(void)

{
  FUN_00402ce1();
  return;
}

