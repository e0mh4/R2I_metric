
void FUN_00401e20(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401e25(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401e2a(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401e2f(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void switchD_00407d30::caseD_b(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401e39(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401e3e(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401e43(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401e48(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void switchD_004098ba::caseD_0(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_00401e60(int param_1,undefined8 *param_2)

{
  byte **ppbVar1;
  __dev_t _Var2;
  ulong uVar3;
  undefined uVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  char *pcVar11;
  byte **ppbVar12;
  byte *pbVar13;
  size_t __n;
  void *__ptr;
  void *pvVar14;
  __off_t _Var15;
  __ino_t _Var16;
  char *pcVar17;
  stat *psVar18;
  stat *psVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  int *piVar22;
  long lVar23;
  uint *puVar24;
  stat *psVar25;
  timeval *__timeout;
  stat *psVar26;
  stat *psVar27;
  long lVar28;
  ulong uVar29;
  char cVar30;
  char *pcVar31;
  uint uVar32;
  undefined **ppuVar33;
  __ino_t _Var34;
  byte *pbVar35;
  byte *pbVar36;
  undefined8 *puVar37;
  uint uVar38;
  stat *unaff_R13;
  stat *unaff_R14;
  void *pvVar39;
  stat *unaff_R15;
  bool bVar40;
  bool bVar41;
  bool bVar42;
  byte bVar43;
  stat *local_208;
  timeval *local_200;
  stat *local_1f8;
  undefined8 local_1f0;
  stat *local_1e8;
  stat *local_1e0;
  uint32_t local_1d4;
  double local_1d0;
  ulong local_1c8;
  stat *local_1c0;
  stat *local_1b8;
  char *local_1b0;
  stat *local_1a8;
  ulong local_1a0;
  stat *local_198;
  byte local_17d;
  stat *local_178;
  undefined *local_170;
  timeval local_168;
  stat local_158;
  undefined local_c8 [88];
  __nlink_t local_70;
  long local_68;
  
  bVar43 = 0;
  local_178 = (stat *)0xa;
  FUN_00407b40(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils",
                 "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale"
                );
  textdomain("coreutils");
  FUN_0040c180(FUN_00406590);
  DAT_0061237a = '\0';
  DAT_00612385 = 1;
  DAT_00612381 = '\0';
  DAT_00612382 = 0;
  DAT_00612384 = 0;
  DAT_00612380 = '\n';
  if (param_1 == 2) {
LAB_00401f0b:
    iVar6 = FUN_00407ac0();
    pcVar31 = (char *)param_2[1];
    pcVar17 = pcVar31 + 1;
    if (*pcVar31 == '+') {
      bVar5 = 1;
      if (0x2b8 < iVar6 - 0x30db0U) goto LAB_004022f5;
      goto LAB_00401f2d;
    }
    if ((*pcVar31 != '-') ||
       ((0x30daf < iVar6 && (pcVar31[(ulong)(pcVar31[1] == 'c') + 1] == '\0')))) goto LAB_00401f2d;
    bVar5 = 0;
LAB_004022f5:
    cVar30 = pcVar31[1];
    pcVar31 = pcVar17;
    while ((int)cVar30 - 0x30U < 10) {
      pcVar31 = pcVar31 + 1;
      cVar30 = *pcVar31;
    }
    if (cVar30 == 'c') {
      unaff_R13 = (stat *)0x0;
      psVar27 = (stat *)0xa;
LAB_00402e78:
      pcVar11 = pcVar31 + 1;
    }
    else {
      if (cVar30 == 'l') {
        unaff_R13 = (stat *)0x1;
        psVar27 = (stat *)0xa;
        goto LAB_00402e78;
      }
      if (cVar30 == 'b') {
        unaff_R13 = (stat *)0x0;
        psVar27 = (stat *)0x1400;
        goto LAB_00402e78;
      }
      unaff_R13 = (stat *)0x1;
      psVar27 = (stat *)0xa;
      pcVar11 = pcVar31;
    }
    bVar40 = *pcVar11 == 'f';
    if (bVar40) {
      pcVar11 = pcVar11 + 1;
    }
    unaff_R14 = (stat *)(ulong)bVar40;
    if (*pcVar11 != '\0') goto LAB_00401f2d;
    if ((pcVar17 != pcVar31) &&
       (uVar32 = FUN_0040a260(pcVar17,0,10,&local_178), psVar27 = local_178,
       (uVar32 & 0xfffffffd) != 0)) {
      uVar10 = FUN_00409760(param_2[1]);
      psVar27 = (stat *)dcgettext(0,"invalid number",5);
      piVar22 = __errno_location();
      error(1,*piVar22,"%s: %s",psVar27,uVar10);
      goto LAB_00403efd;
    }
    local_178 = psVar27;
    lVar28 = 1;
    DAT_00612385 = (byte)unaff_R13;
    DAT_00612382 = bVar5;
    DAT_00612384 = bVar40;
  }
  else {
    if (param_1 == 3) {
      pcVar17 = (char *)param_2[2];
      if ((*pcVar17 == '-') && (pcVar17[1] != '\0')) goto LAB_00401efd;
      goto LAB_00401f0b;
    }
    if (param_1 == 4) {
      pcVar17 = (char *)param_2[2];
LAB_00401efd:
      iVar6 = strcmp(pcVar17,"--");
      if (iVar6 == 0) goto LAB_00401f0b;
    }
LAB_00401f2d:
    lVar28 = 0;
  }
  uVar20 = 0;
  uVar32 = param_1 - (int)lVar28;
  __ptr = (void *)(ulong)uVar32;
  local_1d0 = DAT_0040d788;
LAB_00401f50:
  uVar10 = FUN_0040b530(uVar32,param_2 + lVar28,"c:n:fFqs:vz0123456789",&PTR_s_bytes_0040d560);
  iVar6 = (int)uVar10;
  if (iVar6 != -1) {
    if (iVar6 == 0x71) {
      uVar20 = 2;
      goto LAB_00401f50;
    }
    if (iVar6 < 0x72) {
      if (iVar6 < 0x3a) {
        unaff_R14 = (stat *)(uVar10 & 0xffffffff);
        if (0x2f < iVar6) {
          uVar20 = dcgettext(0,"option used in invalid context -- %c",5);
          error(1,0,uVar20,unaff_R14);
          goto LAB_00403ad7;
        }
        if (iVar6 == -0x83) {
          FUN_00409c90(stdout,&DAT_0040c2fa,"GNU coreutils",PTR_DAT_006122b0,"Paul Rubin",
                       "David MacKenzie","Ian Lance Taylor","Jim Meyering",0);
                    /* WARNING: Subroutine does not return */
          exit(0);
        }
        if (iVar6 != -0x82) goto LAB_00403ad7;
        FUN_00405d10(0);
        goto LAB_00402208;
      }
      if (iVar6 == 99) {
LAB_00402151:
        DAT_00612385 = iVar6 == 0x6e;
        if (*DAT_00612540 == '+') {
          DAT_00612382 = 1;
        }
        else if (*DAT_00612540 == '-') {
          DAT_00612540 = DAT_00612540 + 1;
        }
        if (iVar6 == 0x6e) {
          uVar21 = dcgettext(0,"invalid number of lines",5);
        }
        else {
          uVar21 = dcgettext(0,"invalid number of bytes",5);
        }
        local_178 = (stat *)FUN_0040a130(DAT_00612540,0,0xffffffffffffffff,"bkKmMGTPEZY0",uVar21,0);
      }
      else {
        if (99 < iVar6) {
          if (iVar6 != 0x66) goto LAB_00402148;
          goto LAB_00402019;
        }
        if (iVar6 != 0x46) goto LAB_00403ad7;
        DAT_00612384 = 1;
        DAT_006122a8 = 1;
        DAT_00612386 = 1;
      }
      goto LAB_00401f50;
    }
    if (iVar6 == 0x81) {
      uVar21 = dcgettext(0,"invalid maximum number of unchanged stats between opens",5);
      _DAT_006122a0 = FUN_0040a130(DAT_00612540,0,0xffffffffffffffff,"",uVar21,0);
    }
    else if (iVar6 < 0x82) {
      if (iVar6 == 0x76) {
LAB_00402208:
        uVar20 = 1;
        goto LAB_00401f50;
      }
      if (iVar6 < 0x77) {
        if (iVar6 != 0x73) goto LAB_00403ad7;
        cVar30 = FUN_0040a1c0(DAT_00612540,0,local_c8,FUN_00406500);
        if (cVar30 != '\0') {
          local_1d0 = local_c8._0_8_;
          if (_DAT_0040d790 <= local_c8._0_8_) goto LAB_00401f50;
        }
        uVar20 = FUN_00409760(DAT_00612540);
        uVar21 = dcgettext(0,"invalid number of seconds: %s",5);
        iVar6 = error(1,0,uVar21,uVar20);
LAB_00402148:
        if (iVar6 != 0x6e) {
LAB_00403ad7:
          FUN_00405d10(1);
          goto LAB_00403ae1;
        }
        goto LAB_00402151;
      }
      if (iVar6 == 0x7a) {
        DAT_00612380 = '\0';
      }
      else {
        if (iVar6 != 0x80) goto LAB_00403ad7;
        DAT_00612386 = 1;
      }
    }
    else if (iVar6 == 0x83) {
      DAT_00612379 = '\x01';
    }
    else if (iVar6 < 0x83) {
      uVar21 = dcgettext(0,"invalid PID",5);
      DAT_0061237c = FUN_0040a130(DAT_00612540,0,0x7fffffff,"",uVar21,0);
    }
    else if (iVar6 == 0x84) {
LAB_00402019:
      DAT_00612384 = 1;
      if (DAT_00612540 == (char *)0x0) {
        DAT_006122a8 = 2;
      }
      else {
        lVar23 = FUN_00406440("--follow",DAT_00612540,&PTR_s_descriptor_0040d770,&DAT_0040d760);
        DAT_006122a8 = *(int *)(&DAT_0040d760 + lVar23 * 4);
      }
    }
    else {
      if (iVar6 != 0x85) goto LAB_00403ad7;
      DAT_00612378 = '\x01';
    }
    goto LAB_00401f50;
  }
  if (DAT_00612386 == 0) {
LAB_004027f1:
    if (DAT_0061237c != 0) {
      if (DAT_00612384 == 0) {
        uVar21 = dcgettext(0,"warning: PID ignored; --pid=PID is useful only when following",5);
        error(0,0,uVar21);
      }
      else {
LAB_00402427:
        iVar6 = kill(DAT_0061237c,0);
        if ((iVar6 != 0) && (piVar22 = __errno_location(), *piVar22 == 0x26)) {
          uVar21 = dcgettext(0,"warning: --pid=PID is not supported on this system",5);
          error(0,0,uVar21);
          DAT_0061237c = 0;
        }
      }
    }
  }
  else {
    if (DAT_00612384 == 0) {
      DAT_00612386 = 0;
      pcVar17 = "warning: --retry ignored; --retry is useful only when following";
LAB_004027dc:
      uVar21 = dcgettext(0,pcVar17,5);
      error(0,0,uVar21);
      goto LAB_004027f1;
    }
    if (DAT_006122a8 == 2) {
      pcVar17 = "warning: --retry only effective for the initial open";
      goto LAB_004027dc;
    }
    if (DAT_0061237c != 0) goto LAB_00402427;
  }
  if ((DAT_00612382 != 0) && (local_178 != (stat *)0x0)) {
    local_178 = (stat *)((long)local_178[-1].__unused + 0x17);
  }
  if (DAT_0061233c < (int)uVar32) {
    local_208 = (stat *)(long)(int)(uVar32 - DAT_0061233c);
    ppuVar33 = (undefined **)(param_2 + lVar28 + DAT_0061233c);
  }
  else {
    ppuVar33 = &PTR_DAT_00612298;
    local_208 = (stat *)0x1;
  }
  bVar42 = false;
  bVar40 = false;
  bVar41 = true;
  ppbVar1 = ppuVar33 + (long)local_208;
  ppbVar12 = ppuVar33;
  do {
    lVar28 = 2;
    pbVar13 = *ppbVar12;
    pbVar35 = &DAT_0040c38a;
    do {
      if (lVar28 == 0) break;
      lVar28 = lVar28 + -1;
      bVar42 = *pbVar13 < *pbVar35;
      bVar41 = *pbVar13 == *pbVar35;
      pbVar13 = pbVar13 + (ulong)bVar43 * -2 + 1;
      pbVar35 = pbVar35 + (ulong)bVar43 * -2 + 1;
    } while (bVar41);
    if ((!bVar42 && !bVar41) == bVar42) {
      bVar40 = true;
    }
    ppbVar12 = ppbVar12 + 1;
    bVar42 = ppbVar12 < ppbVar1;
    bVar41 = ppbVar12 == ppbVar1;
  } while (!bVar41);
  if (bVar40) {
    if (DAT_006122a8 == 1) {
      uVar20 = FUN_00409510(4,&DAT_0040c38a);
      uVar21 = dcgettext(0,"cannot follow %s by name",5);
      error(1,0,uVar21,uVar20);
LAB_00403e46:
                    /* WARNING: Subroutine does not return */
      __assert_fail("beg","src/tail.c",0x2c9,"pipe_lines");
    }
    if (DAT_00612384 != 0) {
      if (((((DAT_0061237c != 0) || (local_208 != (stat *)0x1)) || (DAT_006122a8 != 2)) ||
          ((iVar6 = __fxstat(1,0,(stat *)local_c8), iVar6 != 0 ||
           ((local_c8._24_4_ & 0xf000) == 0x8000)))) && (iVar6 = isatty(0), iVar6 != 0)) {
        uVar21 = dcgettext(0,"warning: following standard input indefinitely is ineffective",5);
        error(0,0,uVar21);
      }
      goto LAB_0040252c;
    }
    if (local_178 != (stat *)0x0) goto LAB_00402544;
  }
  else {
LAB_0040252c:
    if ((local_178 != (stat *)0x0) || (DAT_00612384 != 0)) goto LAB_00402544;
  }
  if (DAT_00612382 == 0) {
    return 0;
  }
LAB_00402544:
  local_1a0 = (long)local_208 * 0x60;
  unaff_R14 = (stat *)FUN_00409dd0(local_1a0);
  psVar27 = unaff_R14;
  do {
    pbVar13 = *ppuVar33;
    ppuVar33 = ppuVar33 + 1;
    psVar27->st_dev = (__dev_t)pbVar13;
    psVar27 = (stat *)&(psVar27->st_mtim).tv_nsec;
  } while (ppuVar33 != ppbVar1);
  if (((int)uVar20 == 1) || (((int)uVar20 == 0 && (local_208 != (stat *)0x1)))) {
    DAT_00612381 = '\x01';
  }
  local_198 = (stat *)(uVar10 & 0xffffffff);
  local_17d = 1;
  bVar40 = CARRY8(local_1a0,(ulong)unaff_R14);
  local_1c0 = (stat *)(unaff_R14->__unused + (long)local_208 * 0xc + -0xf);
  bVar42 = local_1c0 == (stat *)0x0;
  psVar27 = unaff_R13;
  unaff_R15 = unaff_R14;
  local_1b8 = unaff_R14;
  do {
    unaff_R13 = local_178;
    pcVar17 = local_1f0;
    lVar28 = 2;
    local_1e0 = local_178;
    pbVar13 = (byte *)unaff_R14->st_dev;
    pbVar35 = pbVar13;
    pbVar36 = &DAT_0040c38a;
    do {
      if (lVar28 == 0) break;
      lVar28 = lVar28 + -1;
      bVar40 = *pbVar35 < *pbVar36;
      bVar42 = *pbVar35 == *pbVar36;
      pbVar35 = pbVar35 + (ulong)bVar43 * -2 + 1;
      pbVar36 = pbVar36 + (ulong)bVar43 * -2 + 1;
    } while (bVar42);
    cVar30 = (!bVar40 && !bVar42) - bVar40;
    local_1d4 = (uint32_t)cVar30;
    if (cVar30 == '\0') {
      DAT_0061237a = '\x01';
      local_200 = (timeval *)((ulong)local_200 & 0xffffffff00000000);
LAB_004025f3:
      *(undefined *)((long)&unaff_R14->st_size + 6) = 1;
LAB_004025f8:
      if (DAT_00612381 != '\0') {
        uVar20 = FUN_004047e0(pbVar13);
        pcVar31 = "";
        if (DAT_00612290 == '\0') {
          pcVar31 = "\n";
        }
        __printf_chk(1,"%s==> %s <==\n",pcVar31,uVar20);
        DAT_00612290 = '\0';
      }
      local_1c8 = FUN_004047e0(unaff_R14->st_dev);
      local_158.st_dev = 0;
      uVar10 = (ulong)local_1f0 & 0xffffffffffffff00;
      uVar29 = (ulong)DAT_00612385;
      local_1f0 = (char *)(uVar10 | uVar29);
      if (DAT_00612385 == 0) {
        iVar6 = __fxstat(1,(int)local_200,(stat *)local_c8);
        if (iVar6 == 0) {
          local_1f0 = (char *)(uVar10 | DAT_00612382);
          local_1f0._1_7_ = (undefined7)(uVar10 >> 8);
          if (DAT_00612382 == 0) {
            if ((DAT_00612379 == '\0') && (-1 < (long)unaff_R13)) {
              if ((local_c8._24_4_ & 0xd000) == 0x8000) {
                _Var16 = 0xffffffffffffffff;
                _Var34 = local_c8._48_8_;
              }
              else {
                _Var16 = lseek((int)local_200,-(long)unaff_R13,2);
                if (_Var16 == 0xffffffffffffffff) goto LAB_00402d56;
                _Var34 = (long)unaff_R13->__unused + (_Var16 - 0x78);
                unaff_R15 = unaff_R13;
              }
              lVar28 = local_c8._56_8_;
              if (0x1fffffffffffffff < local_c8._56_8_ - 1U) {
                lVar28 = 0x200;
              }
              if (lVar28 < (long)_Var34) {
                if (_Var16 == 0xffffffffffffffff) {
                  _Var16 = FUN_00404c20((ulong)local_200 & 0xffffffff,0,1,local_1c8);
                }
                if (((long)_Var16 < (long)_Var34) && (unaff_R13 < (stat *)(_Var34 - _Var16))) {
                  FUN_00404c20((ulong)local_200 & 0xffffffff,_Var34 - (long)unaff_R13,0,local_1c8);
                  _Var16 = _Var34 - (long)unaff_R13;
                }
                goto LAB_00402a3c;
              }
            }
LAB_00402d56:
            __ptr = (void *)FUN_00409dd0(0x2010);
            *(undefined8 *)((long)__ptr + 0x2000) = 0;
            *(undefined8 *)((long)__ptr + 0x2008) = 0;
            pvVar14 = (void *)FUN_00409dd0(0x2010);
            unaff_R15 = (stat *)((ulong)local_200 & 0xffffffff);
            psVar27 = (stat *)0x0;
            pvVar39 = __ptr;
            while (local_1e8 = (stat *)FUN_00409780(unaff_R15,pvVar14,0x2000),
                  (undefined *)((long)local_1e8[-1].__unused + 0x17U) <
                  (undefined *)0xfffffffffffffffe) {
              local_158.st_dev = (long)local_1e8->__unused + (local_158.st_dev - 0x78);
              psVar27 = (stat *)((long)(((stat *)(((stat *)(local_1e8->__unused + -0xf))->__unused +
                                                 -0xf))->__unused + 0xfffffffffffffff1) +
                                (long)((stat *)(((stat *)(((stat *)(psVar27->__unused + -0xf))->
                                                          __unused + -0xf))->__unused + -0xf))->
                                      __unused + 0xffffffffffffff88U);
              *(stat **)((long)pvVar14 + 0x2000) = local_1e8;
              lVar28 = *(long *)((long)pvVar39 + 0x2000);
              *(undefined8 *)((long)pvVar14 + 0x2008) = 0;
              if ((ulong)((long)local_1e8->__unused + lVar28 + -0x78) < 0x2000) {
                memcpy((void *)((long)pvVar39 + lVar28),pvVar14,(size_t)local_1e8);
                *(long *)((long)pvVar39 + 0x2000) =
                     *(long *)((long)pvVar39 + 0x2000) + *(long *)((long)pvVar14 + 0x2000);
              }
              else {
                psVar25 = (stat *)((long)psVar27 - *(long *)((long)__ptr + 0x2000));
                *(void **)((long)pvVar39 + 0x2008) = pvVar14;
                pvVar39 = pvVar14;
                if (unaff_R13 < psVar25) {
                  pvVar14 = __ptr;
                  __ptr = *(void **)((long)__ptr + 0x2008);
                  psVar27 = psVar25;
                }
                else {
                  pvVar14 = (void *)FUN_00409dd0(0x2010);
                }
              }
            }
            free(pvVar14);
            pvVar14 = __ptr;
            local_1f8 = unaff_R14;
            if (local_1e8 == (stat *)0xffffffffffffffff) {
LAB_00403ae1:
              uVar20 = FUN_00409510(4,local_1c8);
              uVar21 = dcgettext(0,"error reading %s",5);
              piVar22 = __errno_location();
              error(0,*piVar22,uVar21,uVar20);
            }
            else {
              while( true ) {
                psVar25 = (stat *)((long)psVar27 - *(long *)((long)pvVar14 + 0x2000));
                if (psVar25 <= unaff_R13) break;
                pvVar14 = *(void **)((long)pvVar14 + 0x2008);
                psVar27 = psVar25;
              }
              lVar28 = 0;
              if (unaff_R13 < psVar27) {
                lVar28 = (long)psVar27 - (long)unaff_R13;
              }
              if (*(long *)((long)pvVar14 + 0x2000) != lVar28) {
                FUN_004048a0((long)pvVar14 + lVar28);
              }
              while (pvVar14 = *(void **)((long)pvVar14 + 0x2008), pvVar14 != (void *)0x0) {
                if (*(long *)((long)pvVar14 + 0x2000) != 0) {
                  FUN_004048a0(pvVar14);
                }
              }
              local_1f0 = (char *)CONCAT71(local_1f0._1_7_,1);
            }
            while (__ptr != (void *)0x0) {
              pvVar14 = *(void **)((long)__ptr + 0x2008);
              free(__ptr);
              __ptr = pvVar14;
            }
          }
          else {
            if (((DAT_00612379 == '\0') && (-1 < (long)unaff_R13)) &&
               ((((local_c8._24_4_ & 0xf000) == 0x8000 &&
                 (lVar28 = FUN_00404c20((ulong)local_200 & 0xffffffff,unaff_R13,1,local_1c8),
                 -1 < lVar28)) ||
                (_Var15 = lseek((int)local_200,(__off_t)unaff_R13,1), _Var15 != -1)))) {
              local_1e0 = (stat *)0xffffffffffffffff;
              _Var16 = (long)unaff_R13->__unused + (local_158.st_dev - 0x78);
            }
            else {
              uVar32 = FUN_00404b40(local_1c8,(ulong)local_200 & 0xffffffff,unaff_R13,&local_158);
              local_1e0 = (stat *)0xffffffffffffffff;
              _Var16 = local_158.st_dev;
              if (uVar32 != 0) {
                local_1f0 = (char *)((ulong)pcVar17 & 0xffffffff00000000 | (ulong)(uVar32 >> 0x1f));
                unaff_R13 = psVar27;
                goto LAB_00402a5e;
              }
            }
LAB_00402a3c:
            local_158.st_dev = _Var16;
            lVar28 = FUN_00404a20(0,local_1c8,(ulong)local_200 & 0xffffffff,local_1e0);
            local_158.st_dev = local_158.st_dev + lVar28;
            local_1f0 = (char *)CONCAT71(local_1f0._1_7_,1);
            unaff_R13 = psVar27;
          }
        }
        else {
          uVar20 = FUN_00409510(4,local_1c8);
          uVar21 = dcgettext(0,"cannot fstat %s",5);
          piVar22 = __errno_location();
          error(0,*piVar22,uVar21,uVar20);
          unaff_R13 = psVar27;
        }
      }
      else {
        iVar6 = __fxstat(1,(int)local_200,(stat *)local_c8);
        if (iVar6 == 0) {
          uVar3 = (ulong)local_1b0 & 0xffffffffffffff00;
          local_1b0 = (char *)(uVar3 | DAT_00612382);
          if (DAT_00612382 == 0) {
            if ((DAT_00612379 == '\0') && ((local_c8._24_4_ & 0xf000) == 0x8000)) {
              unaff_R15 = (stat *)((ulong)local_200 & 0xffffffff);
              _Var15 = lseek((int)local_200,0,1);
              if (_Var15 != -1) {
                _Var16 = lseek((int)local_200,0,2);
                if (_Var15 < (long)_Var16) {
                  local_1b0 = (char *)(uVar3 | uVar29);
                  local_158.st_dev = _Var16;
                  if (_Var16 != 0) {
                    bVar5 = FUN_00404cd0(local_1c8,(ulong)local_200 & 0xffffffff,unaff_R13,_Var15,
                                         _Var16,&local_158);
                    local_1b0 = (char *)(uVar3 | bVar5);
                  }
                  goto LAB_00402cc4;
                }
                FUN_00404c20((ulong)local_200 & 0xffffffff,_Var15,0,local_1c8);
              }
            }
            local_1f8 = (stat *)FUN_00409dd0(0x2018);
            local_1f8[0x38].__unused[2] = 0;
            local_1f8[0x38].__unused[1] = 0;
            local_1f8[0x39].st_dev = 0;
            psVar25 = (stat *)FUN_00409dd0(0x2018);
            local_1e8 = (stat *)0x0;
            psVar19 = local_1f8;
            while (unaff_R15 = psVar25, psVar25 = psVar19,
                  __n = FUN_00409780((ulong)local_200 & 0xffffffff,unaff_R15,0x2000),
                  __n - 1 < 0xfffffffffffffffe) {
              unaff_R15[0x38].__unused[1] = __n;
              psVar27 = (stat *)((long)unaff_R15->__unused + (__n - 0x78));
              local_158.st_dev = local_158.st_dev + __n;
              iVar6 = (int)DAT_00612380;
              unaff_R15[0x38].__unused[2] = 0;
              unaff_R15[0x39].st_dev = 0;
              lVar28 = 0;
              psVar19 = unaff_R15;
              while( true ) {
                lVar23 = FUN_0040b730(psVar19,iVar6,(long)psVar27 - (long)psVar19);
                if (lVar23 == 0) break;
                unaff_R15[0x38].__unused[2] = lVar28 + 1;
                psVar19 = (stat *)(lVar23 + 1);
                lVar28 = lVar28 + 1;
              }
              local_1e8 = (stat *)((long)local_1e8->__unused + lVar28 + -0x78);
              psVar19 = psVar25;
              if (__n + local_1f8[0x38].__unused[1] < 0x2000) {
                memcpy((void *)((long)local_1f8->__unused + local_1f8[0x38].__unused[1] + -0x78),
                       unaff_R15,__n);
                local_1f8[0x38].__unused[1] =
                     local_1f8[0x38].__unused[1] + unaff_R15[0x38].__unused[1];
                local_1f8[0x38].__unused[2] =
                     local_1f8[0x38].__unused[2] + unaff_R15[0x38].__unused[2];
                psVar25 = unaff_R15;
              }
              else {
                local_1f8[0x39].st_dev = (__dev_t)unaff_R15;
                psVar18 = (stat *)((long)local_1e8 - psVar25[0x38].__unused[2]);
                local_1f8 = unaff_R15;
                if (unaff_R13 < psVar18) {
                  psVar19 = (stat *)psVar25[0x39].st_dev;
                  local_1e8 = psVar18;
                }
                else {
                  psVar25 = (stat *)FUN_00409dd0(0x2018);
                }
              }
            }
            free(unaff_R15);
            local_1a8 = unaff_R14;
            if (__n == 0xffffffffffffffff) {
              uVar20 = FUN_00409510(4,local_1c8);
              uVar21 = dcgettext(0,"error reading %s",5);
              piVar22 = __errno_location();
              error(0,*piVar22,uVar21,uVar20);
LAB_00402ca1:
              if (psVar25 == (stat *)0x0) goto LAB_00402cc4;
            }
            else {
              bVar40 = local_1f8[0x38].__unused[1] == 0 || unaff_R13 == (stat *)0x0;
              local_1b0 = (char *)(uVar3 | bVar40);
              if (bVar40) goto LAB_00402ca1;
              iVar6 = (int)DAT_00612380;
              if (*(char *)((long)local_1f8->__unused + local_1f8[0x38].__unused[1] + -0x79) !=
                  DAT_00612380) {
                local_1f8[0x38].__unused[2] = local_1f8[0x38].__unused[2] + 1;
                local_1e8 = (stat *)((long)&local_1e8->st_dev + 1);
              }
              psVar19 = (stat *)((long)local_1e8 - psVar25[0x38].__unused[2]);
              psVar27 = psVar25;
              while (psVar18 = psVar19, unaff_R13 < psVar18) {
                psVar27 = (stat *)psVar27[0x39].st_dev;
                local_1e8 = psVar18;
                psVar19 = (stat *)((long)psVar18 - psVar27[0x38].__unused[2]);
              }
              lVar28 = psVar27[0x38].__unused[1];
              psVar19 = psVar27;
              unaff_R15 = local_1e8;
              if (unaff_R13 < local_1e8) {
                unaff_R15 = (stat *)((long)local_1e8 - (long)unaff_R13);
                do {
                  lVar23 = FUN_0040b730(psVar19,iVar6,(long)psVar27 + (lVar28 - (long)psVar19));
                  if (lVar23 == 0) goto LAB_00403e46;
                  psVar19 = (stat *)(lVar23 + 1);
                  unaff_R15 = (stat *)((long)unaff_R15[-1].__unused + 0x17);
                } while (unaff_R15 != (stat *)0x0);
              }
              lVar28 = (long)psVar27 + (lVar28 - (long)psVar19);
              if (lVar28 != 0) {
                FUN_004048a0(psVar19,lVar28);
              }
              for (_Var2 = psVar27[0x39].st_dev; _Var2 != 0; _Var2 = *(__dev_t *)(_Var2 + 0x2010)) {
                if (*(long *)(_Var2 + 0x2000) != 0) {
                  FUN_004048a0(_Var2);
                }
              }
              local_1b0 = (char *)(uVar3 | uVar29);
            }
            do {
              psVar19 = (stat *)psVar25[0x39].st_dev;
              free(psVar25);
              psVar25 = psVar19;
            } while (psVar19 != (stat *)0x0);
          }
          else {
            uVar32 = FUN_00404920(local_1c8,(ulong)local_200 & 0xffffffff,unaff_R13,&local_158);
            if (uVar32 == 0) {
              lVar28 = FUN_00404a20(0,local_1c8,(ulong)local_200 & 0xffffffff,0xffffffffffffffff);
              local_158.st_dev = local_158.st_dev + lVar28;
            }
            else {
              local_1b0 = (char *)(ulong)(uVar32 >> 0x1f);
            }
          }
        }
        else {
          uVar20 = FUN_00409510(4,local_1c8);
          uVar21 = dcgettext(0,"cannot fstat %s",5);
          piVar22 = __errno_location();
          error(0,*piVar22,uVar21,uVar20);
          local_1b0 = (char *)((ulong)local_1b0 & 0xffffffffffffff00);
        }
LAB_00402cc4:
        local_1f0 = (char *)(uVar10 | (ulong)local_1b0 & 0xff);
        unaff_R13 = psVar27;
      }
LAB_00402a5e:
      if (DAT_00612384 == 0) {
        if ((local_1d4 != 0) && (iVar6 = close((int)local_200), iVar6 != 0)) {
          uVar20 = FUN_004047e0(unaff_R14->st_dev);
          uVar20 = FUN_00409510(4,uVar20);
          uVar21 = dcgettext(0,"error reading %s",5);
          piVar22 = __errno_location();
          error(0,*piVar22,uVar21,uVar20);
          local_1f0 = (char *)((ulong)local_1f0 & 0xffffffffffffff00);
        }
      }
      else {
        *(uint *)((long)&unaff_R14->st_blksize + 4) = (byte)local_1f0 - 1;
        iVar6 = __fxstat(1,(int)local_200,(stat *)local_c8);
        if (iVar6 < 0) {
          piVar22 = __errno_location();
          _Var2 = unaff_R14->st_dev;
          *(int *)((long)&unaff_R14->st_blksize + 4) = *piVar22;
          uVar20 = FUN_004047e0(_Var2);
          uVar20 = FUN_00409510(4,uVar20);
          uVar21 = dcgettext(0,"error reading %s",5);
          error(0,*piVar22,uVar21,uVar20);
          goto LAB_00402d1a;
        }
        if ((((local_c8._24_4_ & 0xf000) - 0x1000 & 0xffffe000) != 0) &&
           ((local_c8._24_4_ & 0xb000) != 0x8000)) goto LAB_00403492;
        if ((byte)local_1f0 == 0) goto LAB_00402d1a;
        _Var2 = unaff_R14->st_dev;
        *(uint *)&unaff_R14->st_size = local_c8._24_4_;
        *(undefined *)((long)&unaff_R14->st_size + 4) = 0;
        local_198._0_4_ = 1;
        if (local_1d4 == 0) {
        }
        *(int *)&unaff_R14->st_blksize = (int)local_200;
        unaff_R14->st_ino = local_158.st_dev;
        *(undefined4 *)&unaff_R14->st_blocks = local_198._0_4_;
        unaff_R14->st_nlink = local_70;
        (unaff_R14->st_mtim).tv_sec = 0;
        *(long *)&unaff_R14->st_mode = local_68;
        *(double *)&unaff_R14->st_gid = local_c8._0_8_;
        unaff_R14->st_rdev = local_c8._8_8_;
        uVar20 = FUN_004047e0(_Var2);
        uVar4 = FUN_00405090((ulong)local_200 & 0xffffffff,uVar20);
        *(undefined *)((long)&unaff_R14->st_size + 5) = uVar4;
      }
    }
    else {
      uVar32 = FUN_00406780(pbVar13,0);
      bVar5 = DAT_00612386;
      local_200 = (timeval *)((ulong)local_200 & 0xffffffff00000000 | (ulong)uVar32);
      if (DAT_00612386 == 0) {
        *(undefined *)((long)&unaff_R14->st_size + 6) = 1;
        if (uVar32 != 0xffffffff) {
          pbVar13 = (byte *)unaff_R14->st_dev;
          goto LAB_004025f8;
        }
      }
      else {
        if (uVar32 != 0xffffffff) {
          pbVar13 = (byte *)unaff_R14->st_dev;
          goto LAB_004025f3;
        }
        *(undefined *)((long)&unaff_R14->st_size + 6) = 0;
      }
      piVar22 = __errno_location();
      if (DAT_00612384 != 0) {
        iVar6 = *piVar22;
        *(undefined4 *)&unaff_R14->st_blksize = 0xffffffff;
        *(byte *)((long)&unaff_R14->st_size + 4) = bVar5 ^ 1;
        *(int *)((long)&unaff_R14->st_blksize + 4) = iVar6;
        unaff_R14->st_rdev = 0;
        *(undefined8 *)&unaff_R14->st_gid = 0;
      }
      uVar20 = FUN_004047e0(unaff_R14->st_dev);
      uVar20 = FUN_00409510(4,uVar20);
      uVar21 = dcgettext(0,"cannot open %s for reading",5);
      error(0,*piVar22,uVar21,uVar20);
      local_1f0 = (char *)((ulong)local_1f0 & 0xffffffffffffff00);
      unaff_R13 = psVar27;
    }
    while( true ) {
      unaff_R14 = (stat *)&(unaff_R14->st_mtim).tv_nsec;
      local_17d = local_17d & (byte)local_1f0;
      bVar40 = local_1c0 < unaff_R14;
      bVar42 = local_1c0 == unaff_R14;
      psVar27 = unaff_R13;
      if (!bVar42) break;
      local_1c8 = (ulong)DAT_00612384;
      if (DAT_00612384 != 0) {
        lVar28 = 0;
        psVar27 = local_1b8;
        do {
          iVar6 = strcmp((char *)psVar27->st_dev,"-");
          if ((((iVar6 == 0) && (*(char *)((long)&psVar27->st_size + 4) == '\0')) &&
              (-1 < *(int *)&psVar27->st_blksize)) &&
             (((*(uint *)&psVar27->st_size & 0xf000) == 0x1000 ||
              (iVar6 = FUN_0040b5b0(), iVar6 != 0)))) {
            *(undefined4 *)&psVar27->st_blksize = 0xffffffff;
            *(undefined *)((long)&psVar27->st_size + 4) = 1;
          }
          else {
            lVar28 = lVar28 + 1;
          }
          psVar27 = (stat *)&(psVar27->st_mtim).tv_nsec;
        } while (local_1c0 != psVar27);
        if (lVar28 != 0) {
          iVar6 = __fxstat(1,1,&local_158);
          if (iVar6 < 0) {
            uVar20 = dcgettext(0,"standard output",5);
            piVar22 = __errno_location();
            error(1,*piVar22,uVar20);
            goto LAB_00403e89;
          }
          bVar40 = true;
          if ((local_158.st_mode & 0xf000) != 0x1000) {
            iVar6 = FUN_0040b5b0();
            bVar40 = iVar6 != 0;
          }
          DAT_00612383 = bVar40;
          psVar25 = local_1b8;
          if (DAT_00612378 == '\0') {
            do {
              psVar27 = local_1c0;
              if ((*(char *)((long)&psVar25->st_size + 4) == '\0') &&
                 (iVar6 = strcmp((char *)psVar25->st_dev,"-"), iVar6 == 0)) goto LAB_004032ae;
              psVar25 = (stat *)&(psVar25->st_mtim).tv_nsec;
            } while (local_1c0 != psVar25);
            uVar10 = 0;
            do {
              if ((-1 < *(int *)((long)local_1b8->__unused + (uVar10 - 0x40))) &&
                 (*(char *)((long)local_1b8->__unused + (uVar10 - 0x43)) != '\0'))
              goto LAB_004032ae;
              uVar10 = uVar10 + 0x60;
            } while (local_1a0 != uVar10);
            uVar10 = 0;
            do {
              if ((-1 < *(int *)((long)local_1b8->__unused + (uVar10 - 0x40))) &&
                 (bVar5 = *(byte *)((long)local_1b8->__unused + (uVar10 - 0x43)),
                 psVar25 = local_1c0, bVar5 == 0)) goto LAB_00403b91;
              uVar10 = uVar10 + 0x60;
            } while (local_1a0 != uVar10);
          }
LAB_004032ae:
          do {
            do {
              DAT_00612378 = '\x01';
              if ((((DAT_0061237c == 0) && (DAT_006122a8 == 2)) && (local_208 == (stat *)0x1)) &&
                 (*(int *)&local_1b8->st_blksize != -1)) {
                local_200 = (timeval *)
                            ((ulong)local_200 & 0xffffffff00000000 |
                            (ulong)*(uint *)&local_1b8->st_size);
                unaff_R15 = (stat *)(ulong)((*(uint *)&local_1b8->st_size & 0xf000) != 0x8000);
              }
              else {
                unaff_R15 = (stat *)0x0;
              }
              local_1d4 = local_1d4 & 0xffffff00;
              local_1e8 = (stat *)((ulong)local_1e8 & 0xffffffffffffff00 | (ulong)unaff_R15);
              local_1f8 = (stat *)((long)local_208[-1].__unused + 0x17);
              local_1f0 = (char *)((long)local_1b8->__unused + (local_1a0 - 0x44));
LAB_00403305:
              local_200 = (timeval *)((ulong)local_200 & 0xffffffffffffff00);
              psVar19 = (stat *)0x0;
              unaff_R14 = local_1b8;
              while( true ) {
                if (*(char *)((long)&unaff_R14->st_size + 4) != '\0') goto LAB_004033a7;
                uVar32 = *(uint *)&unaff_R14->st_blksize;
                psVar27 = (stat *)(ulong)uVar32;
                iVar6 = (int)unaff_R15;
                if (-1 < (int)uVar32) break;
                psVar19 = (stat *)((long)&psVar19->st_dev + 1);
                unaff_R14 = (stat *)&(unaff_R14->st_mtim).tv_nsec;
                FUN_004056e0();
                if (local_208 == psVar19) {
                  do {
                    if ((DAT_00612386 == 0) || (DAT_006122a8 != 1)) {
                      pcVar17 = (char *)((long)&local_1b8->st_size + 4);
                      while ((*(int *)(pcVar17 + 4) < 0 &&
                             ((*pcVar17 == '\x01' || (DAT_00612386 == 0))))) {
                        pcVar17 = pcVar17 + 0x60;
                        if (local_1f0 == pcVar17) {
                          uVar20 = dcgettext(0,"no files remaining",5);
                          error(0,0,uVar20);
                          goto LAB_00402988;
                        }
                      }
                    }
                    if (((byte)local_200 == '\x01') && ((char)local_1e8 == '\0')) {
                      if (DAT_00612383 == '\0') goto LAB_00403305;
LAB_004037bb:
                      local_168.tv_usec = 0;
                      local_168.tv_sec = 0;
                      bVar43 = 0;
                      puVar37 = (undefined8 *)local_c8;
                      for (lVar28 = 0x10; lVar28 != 0; lVar28 = lVar28 + -1) {
                        *puVar37 = 0;
                        puVar37 = puVar37 + 1;
                      }
                      local_c8._0_8_ = (double)((ulong)local_c8._0_8_ | 2);
                      iVar6 = select(2,(fd_set *)local_c8,(fd_set *)0x0,(fd_set *)0x0,&local_168);
                      if (iVar6 == 1) {
                        raise(0xd);
                      }
LAB_00403816:
                      if ((byte)local_200 != '\0') goto LAB_00403305;
                      if ((char)local_1d4 != '\0') goto LAB_00402988;
                      if (((DAT_0061237c != 0) && (iVar6 = kill(DAT_0061237c,0), iVar6 != 0)) &&
                         (piVar22 = __errno_location(), *piVar22 != 1)) {
                        local_1d4 = local_1d4 & 0xffffff00 | (uint)(byte)local_1c8;
                        goto LAB_00403305;
                      }
                      iVar6 = FUN_0040a160(local_1d0);
                      if (iVar6 == 0) goto LAB_00403305;
                      psVar19 = (stat *)dcgettext(0,"cannot read realtime clock",5);
                      piVar22 = __errno_location();
                      error(1,*piVar22,psVar19);
LAB_00403877:
                      *(undefined4 *)&unaff_R14->st_blksize = 0xffffffff;
                      piVar22 = __errno_location();
                      *(int *)((long)&unaff_R14->st_blksize + 4) = *piVar22;
                      uVar20 = FUN_004095e0(0,3,unaff_R13);
                      error(0,*piVar22,&DAT_0040d7fc,uVar20);
                      close((int)psVar27);
                    }
                    else {
                      iVar6 = fflush_unlocked(stdout);
                      if (iVar6 == 0) {
                        if (DAT_00612383 != '\0') goto LAB_004037bb;
                        goto LAB_00403816;
                      }
LAB_00403e89:
                      psVar19 = (stat *)dcgettext(0,"write error",5);
                      piVar22 = __errno_location();
                      error(1,*piVar22,psVar19);
LAB_00403eb3:
                      lVar28 = -2;
LAB_0040338d:
                      lVar28 = FUN_00404a20(0,unaff_R13,(ulong)psVar27 & 0xffffffff,lVar28);
                      unaff_R14->st_ino = unaff_R14->st_ino + lVar28;
                      local_200 = (timeval *)
                                  ((ulong)local_200 & 0xffffffffffffff00 |
                                  (ulong)((byte)local_200 | lVar28 != 0));
                    }
LAB_004033a7:
                    psVar19 = (stat *)((long)&psVar19->st_dev + 1);
                    unaff_R14 = (stat *)&(unaff_R14->st_mtim).tv_nsec;
                  } while (local_208 == psVar19);
                }
              }
              unaff_R13 = (stat *)FUN_004047e0();
              uVar38 = *(uint *)&unaff_R14->st_size;
              psVar25 = (stat *)(ulong)uVar38;
              iVar8 = *(int *)&unaff_R14->st_blocks;
              if (iVar6 == *(int *)&unaff_R14->st_blocks) goto LAB_0040337e;
              uVar7 = FUN_0040a6a0(psVar27,3);
              if (iVar6 == 0) {
                if ((-1 < (int)uVar7) &&
                   ((uVar7 == (uVar7 | 0x800) || (iVar8 = FUN_0040a6a0(psVar27,4), iVar8 != -1)))) {
LAB_00403377:
                  *(int *)&unaff_R14->st_blocks = iVar6;
                  iVar8 = iVar6;
                  goto LAB_0040337e;
                }
              }
              else if (-1 < (int)uVar7) goto LAB_00403377;
              psVar18 = (stat *)__errno_location();
              if (((*(uint *)&unaff_R14->st_size & 0xf000) == 0x8000) &&
                 (*(int *)&psVar18->st_dev == 1)) {
                iVar8 = *(int *)&unaff_R14->st_blocks;
LAB_0040337e:
                lVar28 = -2;
                if (iVar8 != 0) goto LAB_0040338d;
                iVar6 = __fxstat(1,uVar32,(stat *)local_c8);
                if (iVar6 != 0) goto LAB_00403877;
                if (((*(uint *)&unaff_R14->st_size == local_c8._24_4_) &&
                    ((((local_c8._24_4_ & 0xf000) != 0x8000 ||
                      (unaff_R14->st_ino == local_c8._48_8_)) && (unaff_R14->st_nlink == local_70)))
                    ) && (unaff_R14->st_mode == (__mode_t)local_68)) {
                  uVar10 = (unaff_R14->st_mtim).tv_sec;
                  bVar40 = uVar10 < _DAT_006122a0;
                  (unaff_R14->st_mtim).tv_sec = uVar10 + 1;
                  if (bVar40) goto LAB_004033a7;
                  if (DAT_006122a8 != 1) goto LAB_004033a7;
                  FUN_004056e0();
                  (unaff_R14->st_mtim).tv_sec = 0;
                  goto LAB_004033a7;
                }
                uVar38 = uVar38 & 0xf000;
                unaff_R14->st_nlink = local_70;
                *(long *)&unaff_R14->st_mode = local_68;
                *(uint *)&unaff_R14->st_size = local_c8._24_4_;
                (unaff_R14->st_mtim).tv_sec = 0;
                if ((uVar38 == 0x8000) && ((long)local_c8._48_8_ < (long)unaff_R14->st_ino)) {
                  local_1e0 = (stat *)FUN_004095e0(0,3,unaff_R13);
                  uVar20 = dcgettext(0,"%s: file truncated",5);
                  error(0,0,uVar20,local_1e0);
                  FUN_00404c20(uVar32,0,0,unaff_R13);
                  unaff_R14->st_ino = 0;
                }
                if ((psVar19 != local_1f8) && (local_1f8 = psVar19, DAT_00612381 != '\0')) {
                  pcVar17 = "\n";
                  if (DAT_00612290 != '\0') {
                    pcVar17 = "";
                  }
                  __printf_chk(1,"%s==> %s <==\n",pcVar17,unaff_R13);
                  DAT_00612290 = '\0';
                }
                if (*(int *)&unaff_R14->st_blocks != 0) goto LAB_00403eb3;
                lVar28 = -1;
                if (uVar38 != 0x8000) goto LAB_0040338d;
                if (*(char *)((long)&unaff_R14->st_size + 5) == '\0') goto LAB_0040338d;
                lVar28 = local_c8._48_8_ - unaff_R14->st_ino;
                goto LAB_0040338d;
              }
              bVar5 = FUN_004095e0(0,3,unaff_R13);
              uVar20 = dcgettext(0,"%s: cannot change nonblocking mode",5);
              error(1,*(undefined4 *)&psVar18->st_dev,uVar20);
              local_208 = psVar18;
LAB_00403b91:
              local_1f8 = (stat *)(ulong)bVar5;
              psVar19 = (stat *)local_c8;
              psVar18 = local_1b8;
              do {
                iVar6 = __lxstat(1,(char *)psVar18->st_dev,psVar19);
                if ((iVar6 == 0) && ((local_c8._24_4_ & 0xf000) == 0xa000)) goto LAB_004032ae;
                psVar18 = (stat *)&(psVar18->st_mtim).tv_nsec;
              } while (local_1c0 != psVar18);
              uVar10 = 0;
              do {
                if (((-1 < *(int *)((long)local_1b8->__unused + (uVar10 - 0x40))) &&
                    (uVar32 = *(uint *)((long)local_1b8->__unused + (uVar10 - 0x48)) & 0xf000,
                    uVar32 != 0x8000)) && (uVar32 != 0x1000)) goto LAB_004032ae;
                uVar10 = uVar10 + 0x60;
              } while (local_1a0 != uVar10);
            } while ((local_17d == 0) && (DAT_006122a8 == 2));
            uVar32 = inotify_init();
            unaff_R13 = (stat *)(ulong)uVar32;
            if (-1 < (int)uVar32) {
              iVar6 = fflush_unlocked(stdout);
              if (iVar6 != 0) {
                psVar18 = (stat *)dcgettext(0,"write error",5);
                piVar22 = __errno_location();
                psVar26 = (stat *)error(1,*piVar22,psVar18);
                goto LAB_00404654;
              }
              local_1f0 = (char *)FUN_00407060(local_208,0,FUN_004047c0,FUN_004047d0,0);
              if (local_1f0 == (char *)0x0) {
LAB_004045da:
                    /* WARNING: Subroutine does not return */
                FUN_0040a020();
              }
              local_1d4 = 0xc06;
              if (DAT_006122a8 != 1) {
                local_1d4 = 2;
              }
              local_200 = (timeval *)((ulong)local_200 & 0xffffffffffffff00);
              bVar5 = 0;
              uVar10 = 0;
              psVar27 = local_1b8;
              local_1e0 = psVar19;
              do {
                if (*(char *)((long)&psVar27->st_size + 4) == '\0') {
                  pcVar17 = (char *)psVar27->st_dev;
                  uVar29 = 0xffffffffffffffff;
                  pcVar31 = pcVar17;
                  do {
                    if (uVar29 == 0) break;
                    uVar29 = uVar29 - 1;
                    cVar30 = *pcVar31;
                    pcVar31 = pcVar31 + (ulong)bVar43 * -2 + 1;
                  } while (cVar30 != '\0');
                  *(undefined4 *)((long)&psVar27->st_blocks + 4) = 0xffffffff;
                  if (uVar10 < ~uVar29 - 1) {
                    uVar10 = ~uVar29 - 1;
                  }
                  if (DAT_006122a8 == 1) {
                    lVar28 = FUN_00406630(pcVar17);
                    local_1b0 = pcVar17 + lVar28;
                    cVar30 = *local_1b0;
                    local_1e8 = (stat *)((ulong)local_1e8 & 0xffffffffffffff00);
                    lVar23 = FUN_004066f0(pcVar17);
                    (psVar27->st_atim).tv_nsec = lVar23 - (long)pcVar17;
                    *local_1b0 = '\0';
                    pcVar17 = ".";
                    if (lVar28 != 0) {
                      pcVar17 = (char *)psVar27->st_dev;
                    }
                    iVar6 = inotify_add_watch((int)unaff_R13,pcVar17,0x784);
                    *(int *)&(psVar27->st_atim).tv_sec = iVar6;
                    *(char *)(psVar27->st_dev + lVar28) = cVar30;
                    if (-1 < *(int *)&(psVar27->st_atim).tv_sec) goto LAB_00403d3d;
                    piVar22 = __errno_location();
                    if (*piVar22 == 0x1c) {
LAB_00403d7c:
                      uVar20 = dcgettext(0,"inotify resources exhausted",5);
                      error(0,0,uVar20);
                    }
                    else {
                      uVar20 = FUN_00409510(4,psVar27->st_dev);
                      uVar21 = dcgettext(0,"cannot watch parent directory of %s",5);
                      error(0,*piVar22,uVar21,uVar20);
                    }
                    goto LAB_00403d9b;
                  }
LAB_00403d3d:
                  iVar6 = inotify_add_watch((int)unaff_R13,(char *)psVar27->st_dev,local_1d4);
                  *(int *)((long)&psVar27->st_blocks + 4) = iVar6;
                  if (iVar6 < 0) {
                    if (*(int *)&psVar27->st_blksize != -1) {
                      bVar5 = (byte)local_1c8;
                    }
                    puVar24 = (uint *)__errno_location();
                    if ((*puVar24 & 0xffffffef) == 0xc) goto LAB_00403d7c;
                    if (*puVar24 != *(uint *)((long)&psVar27->st_blksize + 4)) {
                      local_1e8 = (stat *)FUN_00409510(4,psVar27->st_dev);
                      uVar20 = dcgettext(0,"cannot watch %s",5);
                      error(0,*puVar24,uVar20);
                    }
                  }
                  else {
LAB_00403efd:
                    lVar28 = FUN_00407800(local_1f0);
                    if (lVar28 == 0) goto LAB_004045da;
                    local_200 = (timeval *)
                                ((ulong)local_200 & 0xffffffffffffff00 | local_1c8 & 0xff);
                  }
                }
                psVar27 = (stat *)&(psVar27->st_mtim).tv_nsec;
              } while (local_1c0 != psVar27);
              if (DAT_006122a8 != 2) {
LAB_00403f3d:
                local_170 = (undefined *)((long)local_1b8 + (local_1a0 - 0x60));
                psVar27 = local_1b8;
                do {
                  if (*(char *)((long)&psVar27->st_size + 4) == '\0') {
                    if (DAT_006122a8 == 1) {
                      FUN_004056e0(psVar27,0);
                    }
                    else if (((*(int *)&psVar27->st_blksize != -1) &&
                             (iVar6 = __xstat(1,(char *)psVar27->st_dev,local_1e0), iVar6 == 0)) &&
                            ((*(double *)&psVar27->st_gid != local_c8._0_8_ ||
                             (psVar27->st_rdev != local_c8._8_8_)))) {
                      uVar20 = FUN_004047e0(psVar27->st_dev);
                      uVar20 = FUN_00409510(4,uVar20);
                      uVar21 = dcgettext(0,"%s was replaced",5);
                      piVar22 = __errno_location();
                      error(0,*piVar22,uVar21,uVar20);
                      FUN_004072a0();
                      *piVar22 = 0;
                      goto LAB_00403db0;
                    }
                    FUN_00404f00(psVar27);
                  }
                  psVar27 = (stat *)&(psVar27->st_mtim).tv_nsec;
                } while (local_1c0 != psVar27);
                unaff_R14 = (stat *)0x0;
                psVar27 = (stat *)0x0;
                local_1e8 = (stat *)FUN_00409dd0((stat *)(uVar10 + 0x11));
                local_1b0 = (char *)0x3;
                psVar25 = (stat *)(1L << ((byte)unaff_R13 & 0x3f));
                local_200 = (timeval *)(long)(int)unaff_R13;
                psVar19 = local_1e0;
                local_1e0 = (stat *)(uVar10 + 0x11);
LAB_0040404b:
                do {
                  if (((DAT_006122a8 == 1) && (DAT_00612386 == 0)) &&
                     (lVar28 = FUN_00406bd0(local_1f0), lVar28 == 0)) {
                    uVar20 = dcgettext(0,"no files remaining",5);
                    error(0,0,uVar20);
                    return 1;
                  }
                  while (iVar6 = (int)unaff_R13, unaff_R14 <= psVar27) {
                    if (DAT_0061237c != 0) {
                      if ((char)local_1f8 != '\0') {
                    /* WARNING: Subroutine does not return */
                        exit(0);
                      }
                      iVar8 = kill(DAT_0061237c,0);
                      if ((iVar8 == 0) || (piVar22 = __errno_location(), *piVar22 == 1)) {
                        local_168.tv_sec = (__time_t)local_1d0;
                        local_168.tv_usec =
                             (__suseconds_t)(DAT_0040d798 * (local_1d0 - (double)local_168.tv_sec));
                      }
                      else {
                        local_168.tv_usec = 0;
                        local_168.tv_sec = 0;
                        local_1f8 = (stat *)(local_1c8 & 0xff);
                      }
                    }
                    bVar43 = 0;
                    psVar18 = psVar19;
                    for (lVar28 = 0x10; lVar28 != 0; lVar28 = lVar28 + -1) {
                      psVar18->st_dev = 0;
                      psVar18 = (stat *)&psVar18->st_ino;
                    }
                    lVar28 = __fdelt_chk(local_200);
                    *(ulong *)(local_c8 + lVar28 * 8) =
                         *(ulong *)(local_c8 + lVar28 * 8) | (ulong)psVar25;
                    if (DAT_00612383 != '\0') {
                      local_c8._0_8_ = (double)((ulong)local_c8._0_8_ | 2);
                    }
                    __timeout = (timeval *)0x0;
                    if (DAT_0061237c != 0) {
                      __timeout = &local_168;
                    }
                    psVar18 = (stat *)0x1;
                    if (0 < iVar6) {
                      psVar18 = unaff_R13;
                    }
                    iVar8 = select((int)psVar18 + 1,(fd_set *)psVar19,(fd_set *)0x0,(fd_set *)0x0,
                                   __timeout);
                    if (iVar8 != 0) {
                      if (iVar8 == -1) {
                        uVar20 = dcgettext(0,"error waiting for inotify and output events",5);
                        piVar22 = __errno_location();
                        error(1,*piVar22,uVar20);
                        goto LAB_00404697;
                      }
                      if (((ulong)local_c8._0_8_ & 2) == 0) {
                        unaff_R14 = (stat *)FUN_00409780(unaff_R13,local_1e8,local_1e0);
                        if (unaff_R14 == (stat *)0x0) {
LAB_004043aa:
                          if ((int)local_1b0 != 0) {
                            unaff_R14 = (stat *)0x0;
                            psVar27 = (stat *)0x0;
                            local_1b0 = (char *)(ulong)((int)local_1b0 - 1);
                            local_1e0 = (stat *)((long)local_1e0 * 2);
                            local_1e8 = (stat *)FUN_00409e30(local_1e8);
                            goto LAB_0040404b;
                          }
                        }
                        else {
                          psVar27 = (stat *)0x0;
                          if (unaff_R14 != (stat *)0xffffffffffffffff) break;
                          piVar22 = __errno_location();
                          if (*piVar22 == 0x16) goto LAB_004043aa;
                        }
                        psVar18 = (stat *)dcgettext(0,"error reading inotify event",5);
                        piVar22 = __errno_location();
                        error(1,*piVar22,psVar18);
                        goto LAB_00404360;
                      }
                      raise(0xd);
                    }
                  }
                  local_1a8 = (stat *)((long)(((stat *)(((stat *)(psVar27->__unused + -0xf))->
                                                        __unused + -0xf))->__unused +
                                             0xfffffffffffffff1) +
                                      (long)((stat *)(((stat *)(((stat *)(local_1e8->__unused + -0xf
                                                                         ))->__unused + -0xf))->
                                                      __unused + -0xf))->__unused +
                                      0xffffffffffffff88U);
                  uVar32 = *(uint *)((long)&local_1a8->st_ino + 4);
                  uVar38 = *(uint *)((long)&local_1a8->st_dev + 4);
                  iVar8 = *(int *)&local_1a8->st_dev;
                  psVar27 = (stat *)((long)psVar27->__unused + ((ulong)uVar32 - 0x68));
                  if ((uVar38 & 0x400) == 0) {
                    if (uVar32 != 0) goto LAB_004041b7;
                  }
                  else {
                    if (uVar32 != 0) {
LAB_004041b7:
                      psVar26 = (stat *)0x0;
                      psVar18 = local_1b8;
LAB_004041fc:
                      local_198 = psVar27;
                      if ((*(int *)&(psVar18->st_atim).tv_sec != iVar8) ||
                         (iVar9 = strcmp((char *)&local_1a8->st_nlink,
                                         (char *)((psVar18->st_atim).tv_nsec + psVar18->st_dev)),
                         iVar9 != 0)) goto LAB_004041ea;
                      psVar18 = (stat *)(local_1b8->__unused + (long)psVar26 * 0xc + -0xf);
                      if ((uVar38 & 0x200) != 0) {
                        if (DAT_006122a8 == 1) goto LAB_00404571;
                        goto LAB_00404264;
                      }
                      uVar32 = inotify_add_watch(iVar6,(char *)psVar18->st_dev,local_1d4);
                      local_198 = (stat *)(ulong)uVar32;
                      if ((int)uVar32 < 0) {
                        __timeout = (timeval *)__errno_location();
                        if ((*(uint *)&__timeout->tv_sec & 0xffffffef) == 0xc) goto LAB_00404697;
                        uVar20 = FUN_00409510(4,psVar18->st_dev);
                        uVar21 = dcgettext(0,"cannot watch %s",5);
                        error(0,*(int *)&__timeout->tv_sec,uVar21,uVar20);
                      }
                      uVar38 = *(uint *)((long)&psVar18->st_blocks + 4);
                      if ((-1 < (int)uVar38) && (uVar32 == uVar38)) goto LAB_00404564;
                      if (-1 < (int)uVar38) {
                        inotify_rm_watch(iVar6,uVar38);
                        FUN_00407840(local_1f0);
                      }
                      *(uint *)((long)&psVar18->st_blocks + 4) = uVar32;
                      if (uVar32 != 0xffffffff) {
                        psVar26 = (stat *)FUN_00407840(local_1f0,psVar18);
                        if ((psVar26 != (stat *)0x0) && (psVar18 != psVar26)) {
                          if (DAT_006122a8 == 1) {
LAB_00404654:
                            FUN_004056e0(psVar26,0);
                          }
                          *(undefined4 *)((long)&psVar26->st_blocks + 4) = 0xffffffff;
                          uVar20 = FUN_004047e0(psVar26->st_dev);
                          FUN_00404820(*(undefined4 *)&psVar26->st_blksize,uVar20);
                          local_198 = psVar26;
                        }
                        lVar28 = FUN_00407800(local_1f0);
                        if (lVar28 == 0) goto LAB_004045da;
LAB_00404564:
                        if (DAT_006122a8 != 1) goto LAB_0040426d;
LAB_00404571:
                        FUN_004056e0(psVar18);
                        goto LAB_00404264;
                      }
                      goto LAB_0040404b;
                    }
                    psVar18 = (stat *)0x0;
                    do {
                      if (*(int *)(local_1b8->__unused + (long)psVar18 * 0xc + -6) == iVar8) {
                        FUN_004072a0();
                        uVar20 = dcgettext(0,"directory containing watched file was removed",5);
                        error(0,0,uVar20);
                        piVar22 = __errno_location();
                        *piVar22 = 0;
                        goto LAB_00403db0;
                      }
                      psVar18 = (stat *)((long)&psVar18->st_dev + 1);
                    } while (local_208 != psVar18);
                  }
                  local_c8._68_4_ = iVar8;
                  psVar18 = (stat *)FUN_00406df0(local_1f0);
LAB_00404264:
                  if (psVar18 != (stat *)0x0) {
LAB_0040426d:
                    uVar32 = *(uint *)((long)&local_1a8->st_dev + 4);
                    if ((uVar32 & 0xe04) == 0) {
LAB_00404360:
                      FUN_00404f00(psVar18);
                    }
                    else {
                      if ((uVar32 & 0x400) != 0) {
                        inotify_rm_watch((int)unaff_R13,*(int *)((long)&psVar18->st_blocks + 4));
                        FUN_00407840(local_1f0);
                      }
                      FUN_004056e0(psVar18);
                    }
                  }
                } while( true );
              }
              if (bVar5 == 0) {
                if ((byte)local_200 == '\0') {
                  return 1;
                }
                goto LAB_00403f3d;
              }
LAB_00403d9b:
              FUN_004072a0();
              piVar22 = __errno_location();
              *piVar22 = 0;
            }
LAB_00403db0:
            uVar20 = dcgettext(0,"inotify cannot be used, reverting to polling",5);
            piVar22 = __errno_location();
            error(0,*piVar22,uVar20);
            psVar25 = local_1b8;
            do {
              iVar6 = *(int *)((long)&psVar25->st_blocks + 4);
              if (iVar6 != -1) {
                inotify_rm_watch((int)unaff_R13,iVar6);
              }
              iVar6 = *(int *)&(psVar25->st_atim).tv_sec;
              if (iVar6 != -1) {
                inotify_rm_watch((int)unaff_R13,iVar6);
              }
              psVar25 = (stat *)&(psVar25->st_mtim).tv_nsec;
              psVar27 = local_1c0;
            } while (local_1c0 != psVar25);
          } while( true );
        }
      }
LAB_00402988:
      if ((DAT_0061237a == '\0') || (iVar6 = close(0), -1 < iVar6)) {
        return local_17d ^ 1;
      }
      piVar22 = __errno_location();
      error(1,*piVar22,&DAT_0040c38a);
LAB_00403492:
      bVar5 = DAT_00612386;
      *(undefined *)((long)&unaff_R14->st_size + 6) = 0;
      *(undefined4 *)((long)&unaff_R14->st_blksize + 4) = 0xffffffff;
      *(byte *)((long)&unaff_R14->st_size + 4) = bVar5 ^ 1;
      if ((bVar5 ^ 1) != 0) {
        dcgettext(0,"; giving up on this name",5);
      }
      uVar20 = FUN_004047e0(unaff_R14->st_dev);
      uVar20 = FUN_004095e0(0,3,uVar20);
      uVar21 = dcgettext(0,"%s: cannot follow end of this type of file%s",5);
      error(0,0,uVar21,uVar20);
LAB_00402d1a:
      _Var2 = unaff_R14->st_dev;
      *(byte *)((long)&unaff_R14->st_size + 4) = DAT_00612386 ^ 1;
      uVar20 = FUN_004047e0(_Var2);
      FUN_00404820((ulong)local_200 & 0xffffffff,uVar20);
      *(undefined4 *)&unaff_R14->st_blksize = 0xffffffff;
      local_1f0 = (char *)((ulong)local_1f0 & 0xffffffffffffff00);
    }
  } while( true );
LAB_004041ea:
  psVar26 = (stat *)((long)&psVar26->st_dev + 1);
  psVar18 = (stat *)&(psVar18->st_mtim).tv_nsec;
  if (local_208 == psVar26) goto LAB_0040404b;
  goto LAB_004041fc;
LAB_00404697:
  uVar20 = dcgettext(0,"inotify resources exhausted",5);
  error(0,0,uVar20);
  FUN_004072a0();
  *(int *)&__timeout->tv_sec = 0;
  local_200 = __timeout;
  goto LAB_00403db0;
}


void FUN_004046e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_retaddr;
  undefined auStack_8 [8];
  
  (*(code *)PTR___libc_start_main_00611ff0)
            (FUN_00401e60,unaff_retaddr,&stack0x00000008,FUN_0040c110,FUN_0040c170,param_3,auStack_8
            );
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* WARNING: Removing unreachable block (ram,0x00404718) */
/* WARNING: Removing unreachable block (ram,0x00404722) */

void FUN_0040470b(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00404759) */

void FUN_0040472a(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00404796) */

void FUN_00404761(void)

{
  if (DAT_00612368 != '\0') {
    return;
  }
  FUN_0040470b();
  DAT_00612368 = 1;
  return;
}


/* WARNING: Removing unreachable block (ram,0x00404759) */

void thunk_FUN_0040472a(void)

{
  return;
}


ulong FUN_004047c0(long param_1,ulong param_2)

{
  return (ulong)(long)*(int *)(param_1 + 0x44) % param_2;
}


uint FUN_004047d0(long param_1,long param_2)

{
  return *(uint *)(param_2 + 0x44) & 0xffffff00 |
         (uint)(*(uint *)(param_1 + 0x44) == *(uint *)(param_2 + 0x44));
}


void FUN_004047e0(byte *param_1)

{
  long lVar1;
  byte *pbVar2;
  undefined in_CF;
  undefined in_ZF;
  
  lVar1 = 2;
  pbVar2 = &DAT_0040c38a;
  do {
    if (lVar1 == 0) break;
    lVar1 = lVar1 + -1;
    in_CF = *param_1 < *pbVar2;
    in_ZF = *param_1 == *pbVar2;
    param_1 = param_1 + 1;
    pbVar2 = pbVar2 + 1;
  } while ((bool)in_ZF);
  if ((!(bool)in_CF && !(bool)in_ZF) != (bool)in_CF) {
    return;
  }
  dcgettext(0,"standard input",5);
  return;
}


void FUN_00404820(int param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int *piVar4;
  
  if (param_1 + 1U < 2) {
    return;
  }
  iVar1 = close(param_1);
  if (iVar1 == 0) {
    return;
  }
  uVar2 = FUN_00409510(4,param_2);
  uVar3 = dcgettext(0,"closing %s (fd=%d)",5);
  piVar4 = __errno_location();
  error(0,*piVar4,uVar3,uVar2,param_1);
  return;
}


size_t FUN_004048a0(void *param_1,ulong param_2)

{
  undefined *puVar1;
  size_t sVar2;
  int *piVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long extraout_RDX;
  long lVar7;
  int iVar8;
  undefined8 uVar9;
  undefined *puVar10;
  int iVar11;
  undefined auStack_2051 [8201];
  undefined8 uStack_48;
  long *plStack_40;
  
  sVar2 = fwrite_unlocked(param_1,1,param_2,stdout);
  if (param_2 <= sVar2) {
    return sVar2;
  }
  clearerr_unlocked(stdout);
  plStack_40 = (long *)FUN_00409510(4,"standard output");
  uStack_48 = dcgettext(0,"error writing %s",5);
  piVar3 = __errno_location();
  uVar9 = 1;
  iVar8 = *piVar3;
  plVar6 = plStack_40;
  error(1,iVar8,uStack_48);
  lVar7 = extraout_RDX;
  if (extraout_RDX == 0) {
    return 0;
  }
  do {
    lVar4 = FUN_00409780(iVar8,(undefined *)((long)register0x00000020 + -0x2050),0x2000);
    if (lVar4 == 0) {
      return 0xffffffff;
    }
    if (lVar4 == -1) {
      uVar9 = FUN_00409510(4,uVar9);
      uVar5 = dcgettext(0,"error reading %s",5);
      piVar3 = __errno_location();
      error(0,*piVar3,uVar5,uVar9);
      return 1;
    }
    *plVar6 = *plVar6 + lVar4;
    puVar10 = (undefined *)((long)register0x00000020 + -0x2050);
    iVar11 = (int)DAT_00612380;
    puVar1 = puVar10 + lVar4;
    while (lVar4 = FUN_0040b730(puVar10,iVar11,(long)puVar1 - (long)puVar10), lVar4 != 0) {
      puVar10 = (undefined *)(lVar4 + 1);
      lVar7 = lVar7 + -1;
      if (lVar7 == 0) {
        if (puVar1 <= puVar10) {
          return 0;
        }
        if ((long)puVar1 - (long)puVar10 == 0) {
          return 0;
        }
        FUN_004048a0(puVar10,(long)puVar1 - (long)puVar10);
        return 0;
      }
    }
  } while( true );
}


undefined4 FUN_00404920(undefined8 param_1,undefined4 param_2,long param_3,long *param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int *piVar5;
  undefined *puVar6;
  int iVar7;
  undefined auStack_2039 [8201];
  
  if (param_3 == 0) {
    return 0;
  }
  do {
    lVar2 = FUN_00409780(param_2,(undefined *)((long)register0x00000020 + -0x2038),0x2000);
    if (lVar2 == 0) {
      return 0xffffffff;
    }
    if (lVar2 == -1) {
      uVar3 = FUN_00409510(4,param_1);
      uVar4 = dcgettext(0,"error reading %s",5);
      piVar5 = __errno_location();
      error(0,*piVar5,uVar4,uVar3);
      return 1;
    }
    *param_4 = *param_4 + lVar2;
    puVar6 = (undefined *)((long)register0x00000020 + -0x2038);
    iVar7 = (int)DAT_00612380;
    puVar1 = puVar6 + lVar2;
    while (lVar2 = FUN_0040b730(puVar6,iVar7,(long)puVar1 - (long)puVar6), lVar2 != 0) {
      puVar6 = (undefined *)(lVar2 + 1);
      param_3 = param_3 + -1;
      if (param_3 == 0) {
        if (puVar1 <= puVar6) {
          return 0;
        }
        if ((long)puVar1 - (long)puVar6 == 0) {
          return 0;
        }
        FUN_004048a0(puVar6,(long)puVar1 - (long)puVar6);
        return 0;
      }
    }
  } while( true );
}


long FUN_00404a20(char param_1,undefined8 param_2,undefined4 param_3,ulong param_4)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  char *pcVar6;
  ulong extraout_RDX;
  ulong uVar7;
  int iVar8;
  undefined8 uVar9;
  undefined auStack_4070 [8200];
  int *piStack_2068;
  long *plStack_2060;
  long lStack_2058;
  ulong uStack_2050;
  undefined8 local_2040;
  undefined local_2038 [8200];
  
  lStack_2058 = 0;
  uVar7 = param_4;
  local_2040 = param_2;
  do {
    uVar3 = 0x2000;
    if (uVar7 < 0x2001) {
      uVar3 = uVar7;
    }
    uStack_2050 = 0x404a65;
    lVar1 = FUN_00409780(param_3,local_2038,uVar3);
    if (lVar1 == -1) {
      uStack_2050 = 0x404add;
      piStack_2068 = __errno_location();
      if (*piStack_2068 == 0xb) {
        return lStack_2058;
      }
      uStack_2050 = 0x404b09;
      plStack_2060 = (long *)FUN_00409510(4,local_2040);
      uStack_2050 = 0x404b1d;
      uVar2 = dcgettext(0,"error reading %s",5);
      iVar8 = *piStack_2068;
      uVar9 = 1;
      uStack_2050 = 0x404b31;
      plVar5 = plStack_2060;
      error(1,iVar8,uVar2);
      if (extraout_RDX == 0) {
        return 0;
      }
      uVar7 = extraout_RDX;
      uStack_2050 = param_4;
      do {
        uVar3 = FUN_00409780(iVar8,auStack_4070,0x2000);
        if (uVar3 == 0) {
          return 0xffffffff;
        }
        if (uVar3 == 0xffffffffffffffff) {
          uVar2 = FUN_00409510(4,uVar9);
          uVar9 = dcgettext(0,"error reading %s",5);
          piVar4 = __errno_location();
          error(0,*piVar4,uVar9,uVar2);
          return 1;
        }
        *plVar5 = *plVar5 + uVar3;
        if (uVar7 < uVar3) {
          FUN_004048a0(auStack_4070 + uVar7,uVar3 - uVar7);
          return 0;
        }
        uVar7 = uVar7 - uVar3;
      } while (uVar7 != 0);
      return 0;
    }
    if (lVar1 == 0) {
      return lStack_2058;
    }
    if (param_1 != '\0') {
      pcVar6 = "";
      if (DAT_00612290 == '\0') {
        pcVar6 = "\n";
      }
      uStack_2050 = 0x404aa3;
      __printf_chk(1,"%s==> %s <==\n",pcVar6,local_2040);
      DAT_00612290 = '\0';
    }
    lStack_2058 = lStack_2058 + lVar1;
    uStack_2050 = 0x404aba;
    FUN_004048a0(local_2038,lVar1);
    if (param_4 != 0xffffffffffffffff) {
      uVar7 = uVar7 - lVar1;
      if (uVar7 == 0) {
        return lStack_2058;
      }
      if (param_4 == 0xfffffffffffffffe) {
        return lStack_2058;
      }
    }
    param_1 = '\0';
  } while( true );
}


undefined8 FUN_00404b40(undefined8 param_1,undefined4 param_2,ulong param_3,long *param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int *piVar4;
  undefined auStack_2028 [8200];
  
  if (param_3 == 0) {
    return 0;
  }
  do {
    uVar1 = FUN_00409780(param_2,auStack_2028,0x2000);
    if (uVar1 == 0) {
      return 0xffffffff;
    }
    if (uVar1 == 0xffffffffffffffff) {
      uVar2 = FUN_00409510(4,param_1);
      uVar3 = dcgettext(0,"error reading %s",5);
      piVar4 = __errno_location();
      error(0,*piVar4,uVar3,uVar2);
      return 1;
    }
    *param_4 = *param_4 + uVar1;
    if (param_3 < uVar1) {
      FUN_004048a0(auStack_2028 + param_3,uVar1 - param_3);
      return 0;
    }
    param_3 = param_3 - uVar1;
  } while (param_3 != 0);
  return 0;
}


void FUN_00404c20(int param_1,__off_t param_2,int param_3,undefined8 param_4)

{
  __off_t _Var1;
  undefined8 uVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined auStack_48 [40];
  
  _Var1 = lseek(param_1,param_2,param_3);
  if (-1 < _Var1) {
    return;
  }
  uVar2 = FUN_00407a20(param_2,auStack_48);
  piVar3 = __errno_location();
  if (param_3 == 1) {
    uVar4 = FUN_004095e0(0,3,param_4);
    pcVar6 = "%s: cannot seek to relative offset %s";
  }
  else {
    uVar4 = FUN_004095e0(0,3,param_4);
    pcVar6 = "%s: cannot seek to offset %s";
  }
  uVar5 = dcgettext(0,pcVar6,5);
  error(0,*piVar3,uVar5,uVar4,uVar2);
                    /* WARNING: Subroutine does not return */
  exit(1);
}


undefined8
FUN_00404cd0(undefined8 param_1,undefined4 param_2,long param_3,long param_4,long param_5,
            long *param_6)

{
  size_t sVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int *piVar5;
  size_t __n;
  int __c;
  long lVar6;
  long lVar7;
  undefined8 local_2040;
  undefined local_2038 [8200];
  
  if (param_3 != 0) {
    lVar6 = (param_5 - param_4) % 0x2000;
    if (lVar6 == 0) {
      lVar6 = 0x2000;
    }
    lVar7 = param_5 - lVar6;
    local_2040 = param_5;
    FUN_00404c20(param_2,lVar7,0,param_1);
    sVar1 = FUN_00409780(param_2,local_2038,lVar6);
    if (sVar1 == 0xffffffffffffffff) {
LAB_00404eaf:
      uVar3 = FUN_00409510(4,param_1);
      uVar4 = dcgettext(0,"error reading %s",5);
      piVar5 = __errno_location();
      error(0,*piVar5,uVar4,uVar3);
      return 0;
    }
    *param_6 = lVar7 + sVar1;
    if (sVar1 != 0) {
      param_3 = param_3 - (ulong)(local_2038[sVar1 - 1] != DAT_00612380);
      goto LAB_00404dd3;
    }
LAB_00404d7d:
    if (lVar7 != param_4) {
      lVar7 = lVar7 + -0x2000;
      FUN_00404c20(param_2,lVar7,0,param_1);
      sVar1 = FUN_00409780(param_2,local_2038,0x2000);
      if (sVar1 == 0xffffffffffffffff) goto LAB_00404eaf;
      *param_6 = lVar7 + sVar1;
      if (sVar1 == 0) {
        return 1;
      }
LAB_00404dd3:
      __c = (int)DAT_00612380;
      __n = sVar1;
      lVar6 = param_3;
      do {
        pvVar2 = memrchr(local_2038,__c,__n);
        param_3 = lVar6;
        if (pvVar2 == (void *)0x0) break;
        param_3 = lVar6 + -1;
        __n = (long)pvVar2 - (long)local_2038;
        if (lVar6 == 0) {
          if (sVar1 - 1 != __n) {
            FUN_004048a0((long)pvVar2 + 1,(sVar1 - 1) - __n);
          }
          lVar6 = FUN_00404a20(0,param_1,param_2,(local_2040 - sVar1) - lVar7);
          *param_6 = *param_6 + lVar6;
          return 1;
        }
        lVar6 = param_3;
      } while (__n != 0);
      goto LAB_00404d7d;
    }
    FUN_00404c20(param_2,lVar7,0,param_1);
    lVar6 = FUN_00404a20(0,param_1,param_2,local_2040);
    *param_6 = lVar7 + lVar6;
  }
  return 1;
}


void FUN_00404f00(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined auStack_b8 [144];
  
  if (*(int *)(param_1 + 7) == -1) {
    return;
  }
  uVar3 = FUN_004047e0(*param_1);
  uVar1 = __fxstat(1,*(int *)(param_1 + 7),(stat *)auStack_b8);
  if (uVar1 == 0) {
    if ((*(uint *)(param_1 + 6) & 0xf000) == 0x8000) {
      if (auStack_b8._48_8_ < (long)param_1[1]) {
        uVar6 = FUN_004095e0(0,3,uVar3);
        uVar7 = dcgettext(0,"%s: file truncated",5);
        error(0,0,uVar7,uVar6);
        FUN_00404c20(*(undefined4 *)(param_1 + 7),0,0,uVar3);
        param_1[1] = 0;
      }
      else if (((auStack_b8._48_8_ == param_1[1]) && (param_1[2] == auStack_b8._88_8_)) &&
              (*(int *)(param_1 + 3) == auStack_b8._96_4_)) {
        return;
      }
    }
    if (DAT_00612381 != '\0') {
      uVar1 = (uint)((undefined8 *)*param_2 != param_1);
    }
    lVar4 = FUN_00404a20(uVar1,uVar3,*(undefined4 *)(param_1 + 7),0xffffffffffffffff);
    param_1[1] = param_1[1] + lVar4;
    if (lVar4 != 0) {
      *param_2 = param_1;
      iVar2 = fflush_unlocked(stdout);
      if (iVar2 != 0) {
        param_1 = (undefined8 *)dcgettext(0,"write error",5);
        piVar5 = __errno_location();
        error(1,*piVar5,param_1);
        goto LAB_00405010;
      }
    }
    return;
  }
LAB_00405010:
  piVar5 = __errno_location();
  *(int *)((long)param_1 + 0x3c) = *piVar5;
  FUN_00404820(*(undefined4 *)(param_1 + 7),uVar3);
  *(undefined4 *)(param_1 + 7) = 0xffffffff;
  return;
}


uint FUN_00405090(int param_1,undefined8 param_2)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint unaff_EBX;
  statfs local_98;
  
  iVar1 = fstatfs(param_1,&local_98);
  if (iVar1 != 0) {
    piVar2 = __errno_location();
    if (*piVar2 == 0x26) {
      return 1;
    }
    uVar3 = FUN_00409510(4,param_2);
    uVar4 = dcgettext(0,"cannot determine location of %s. reverting to polling",5);
    error(0,*piVar2,uVar4,uVar3);
    return 1;
  }
  if (local_98.f_type != 0x15013346) {
    if (local_98.f_type < 0x15013347) {
      if (local_98.f_type != 0x72b6) {
        if (local_98.f_type < 0x72b7) {
          if (local_98.f_type != 0x3434) {
            if (local_98.f_type < 0x3435) {
              if (local_98.f_type != 0x137d) {
                if (local_98.f_type < 0x137e) {
                  if (local_98.f_type != 0x187) {
                    if (local_98.f_type < 0x188) {
                      return unaff_EBX & 0xffffff00 | (uint)(local_98.f_type != 0x2f);
                    }
                    if (local_98.f_type != 0x7c0) {
                      return unaff_EBX & 0xffffff00 | (uint)(local_98.f_type != 0x1373);
                    }
                  }
                }
                else if (local_98.f_type != 0x1cd1) {
                  if (local_98.f_type < 0x1cd2) {
                    if (local_98.f_type != 0x137f) {
                      return unaff_EBX & 0xffffff00 | (uint)(local_98.f_type != 0x138f);
                    }
                  }
                  else if (local_98.f_type != 0x2468) {
                    return unaff_EBX & 0xffffff00 | (uint)(local_98.f_type != 0x2478);
                  }
                }
              }
            }
            else if (local_98.f_type != 0x482b) {
              if (local_98.f_type < 0x482c) {
                if (local_98.f_type != 0x4004) {
                  if (local_98.f_type < 0x4005) {
                    return unaff_EBX & 0xffffff00 | (uint)(local_98.f_type != 0x4000);
                  }
                  if (local_98.f_type != 0x4006) {
                    return unaff_EBX & 0xffffff00 | (uint)(local_98.f_type != 0x4244);
                  }
                }
              }
              else if (local_98.f_type != 0x4d5a) {
                if (local_98.f_type < 0x4d5b) {
                  if (local_98.f_type != 0x4858) {
                    return unaff_EBX & 0xffffff00 | (uint)(local_98.f_type != 0x4d44);
                  }
                }
                else if (local_98.f_type != 0x5df5) {
                  return unaff_EBX & 0xffffff00 | (uint)(local_98.f_type != 0x7275);
                }
              }
            }
          }
        }
        else if (local_98.f_type != 0x414a53) {
          if (local_98.f_type < 0x414a54) {
            if (local_98.f_type != 0xadff) {
              if (local_98.f_type < 0xae00) {
                if (0x9fa2 < local_98.f_type) {
                  return unaff_EBX & 0xffffff00 | (uint)(local_98.f_type != 0xadf5);
                }
                if (local_98.f_type < 0x9fa0) {
                  return unaff_EBX & 0xffffff00 | (uint)(local_98.f_type != 0x9660);
                }
              }
              else if (local_98.f_type != 0xf15f) {
                if (local_98.f_type < 0xf160) {
                  if (local_98.f_type != 0xef51) {
                    return unaff_EBX & 0xffffff00 | (uint)(local_98.f_type != 0xef53);
                  }
                }
                else if (local_98.f_type != 0x11954) {
                  return unaff_EBX & 0xffffff00 | (uint)(local_98.f_type != 0x27e0eb);
                }
              }
            }
          }
          else if (local_98.f_type < 0x12ff7b8) {
            if ((local_98.f_type < 0x12ff7b4) && (local_98.f_type != 0x1021994)) {
              if (local_98.f_type < 0x1021995) {
                return unaff_EBX & 0xffffff00 | (uint)(local_98.f_type != 0xc0ffee);
              }
              if (local_98.f_type != 0x1021997) {
                return unaff_EBX & 0xffffff00 | (uint)(local_98.f_type != 0x12fd16d);
              }
            }
          }
          else if (local_98.f_type != 0xbad1dea) {
            if (local_98.f_type < 0xbad1deb) {
              if (local_98.f_type != 0x7655821) {
                return unaff_EBX & 0xffffff00 | (uint)(local_98.f_type != 0x9041934);
              }
            }
            else if (local_98.f_type != 0x11307854) {
              return unaff_EBX & 0xffffff00 | (uint)(local_98.f_type != 0x13661366);
            }
          }
        }
      }
    }
    else if (local_98.f_type != 0x62646576) {
      if (local_98.f_type < 0x62646577) {
        if (local_98.f_type != 0x453dcd28) {
          if (local_98.f_type < 0x453dcd29) {
            if (local_98.f_type != 0x2bad1dea) {
              if (local_98.f_type < 0x2bad1deb) {
                if (local_98.f_type != 0x1badface) {
                  if (local_98.f_type < 0x1badfacf) {
                    return unaff_EBX & 0xffffff00 | (uint)(local_98.f_type != 0x19800202);
                  }
                  if (local_98.f_type != 0x24051905) {
                    return unaff_EBX & 0xffffff00 | (uint)(local_98.f_type != 0x28cd3d45);
                  }
                }
              }
              else if (local_98.f_type != 0x42465331) {
                if (local_98.f_type < 0x42465332) {
                  if (local_98.f_type != 0x2fc12fc1) {
                    return unaff_EBX & 0xffffff00 | (uint)(local_98.f_type != 0x3153464a);
                  }
                }
                else if (local_98.f_type != 0x42494e4d) {
                  return unaff_EBX & 0xffffff00 | (uint)(local_98.f_type != 0x43415d53);
                }
              }
            }
          }
          else if (local_98.f_type != 0x54190100) {
            if (local_98.f_type < 0x54190101) {
              if (local_98.f_type != 0x53464846) {
                if (local_98.f_type < 0x53464847) {
                  if (local_98.f_type != 0x52654973) {
                    return unaff_EBX & 0xffffff00 | (uint)(local_98.f_type != 0x5346314d);
                  }
                }
                else if (local_98.f_type != 0x5346544e) {
                  return unaff_EBX & 0xffffff00 | (uint)(local_98.f_type != 0x534f434b);
                }
              }
            }
            else if (local_98.f_type != 0x58465342) {
              if (local_98.f_type < 0x58465343) {
                if (local_98.f_type != 0x565a4653) {
                  return unaff_EBX & 0xffffff00 | (uint)(local_98.f_type != 0x58295829);
                }
              }
              else if (local_98.f_type != 0x5a3c69f0) {
                return unaff_EBX & 0xffffff00 | (uint)(local_98.f_type != 0x6165676c);
              }
            }
          }
        }
      }
      else if (local_98.f_type != 0x73727279) {
        if (local_98.f_type < 0x7372727a) {
          if (local_98.f_type != 0x64646178) {
            if (local_98.f_type < 0x64646179) {
              if (local_98.f_type != 0x62656572) {
                if (local_98.f_type < 0x62656573) {
                  return unaff_EBX & 0xffffff00 | (uint)(local_98.f_type != 0x62656570);
                }
                if (local_98.f_type != 0x63677270) {
                  return unaff_EBX & 0xffffff00 | (uint)(local_98.f_type != 0x64626720);
                }
              }
            }
            else if (local_98.f_type != 0x6e736673) {
              if (local_98.f_type < 0x6e736674) {
                if (local_98.f_type != 0x67596969) {
                  return unaff_EBX & 0xffffff00 | (uint)(local_98.f_type != 0x68191122);
                }
              }
              else if (local_98.f_type != 0x73636673) {
                return unaff_EBX & 0xffffff00 | (uint)(local_98.f_type != 0x73717368);
              }
            }
          }
        }
        else if (local_98.f_type != 0xc97e8168) {
          if (local_98.f_type < 0xc97e8169) {
            if (local_98.f_type != 0x9123683e) {
              if (local_98.f_type < 0x9123683f) {
                if (local_98.f_type != 0x74726163) {
                  return unaff_EBX & 0xffffff00 | (uint)(local_98.f_type != 0x858458f6);
                }
              }
              else if (local_98.f_type != 0x958458f6) {
                return unaff_EBX & 0xffffff00 | (uint)(local_98.f_type != 0xabba1974);
              }
            }
          }
          else if (local_98.f_type != 0xf2f52010) {
            if (local_98.f_type < 0xf2f52011) {
              if (local_98.f_type != 0xcafe4a11) {
                return unaff_EBX & 0xffffff00 | (uint)(local_98.f_type != 0xde5e81e4);
              }
            }
            else if (local_98.f_type != 0xf97cff8c) {
              return unaff_EBX & 0xffffff00 | (uint)(local_98.f_type != 0xf995e849);
            }
          }
        }
      }
    }
  }
  return 0;
}


void FUN_004056e0(byte **param_1,byte param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  int __fildes;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  undefined8 uVar7;
  int *piVar8;
  undefined8 uVar9;
  long lVar10;
  byte *pbVar11;
  char *pcVar12;
  byte *pbVar13;
  uint uVar14;
  bool bVar15;
  bool bVar16;
  stat local_c8;
  
  lVar10 = 2;
  bVar15 = &stack0xffffffffffffffd0 < (undefined *)0xa8;
  bVar16 = &stack0x00000000 == (undefined *)0xd8;
  uVar14 = *(uint *)((long)param_1 + 0x3c);
  pbVar11 = *param_1;
  pbVar13 = &DAT_0040c38a;
  do {
    if (lVar10 == 0) break;
    lVar10 = lVar10 + -1;
    bVar15 = *pbVar11 < *pbVar13;
    bVar16 = *pbVar11 == *pbVar13;
    pbVar11 = pbVar11 + 1;
    pbVar13 = pbVar13 + 1;
  } while (bVar16);
  cVar3 = *(char *)((long)param_1 + 0x36);
  if ((!bVar15 && !bVar16) == bVar15) {
    __fildes = 0;
    uVar4 = uVar14;
  }
  else {
    __fildes = FUN_00406780(*param_1,(ulong)(param_2 == 0) << 0xb);
    uVar4 = *(uint *)((long)param_1 + 0x3c);
  }
  cVar2 = DAT_00612386;
  cVar1 = DAT_00612378;
  if ((*(int *)(param_1 + 7) == -1) == (uVar4 == 0)) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("valid_file_spec (f)","src/tail.c",0x3c7,"recheck");
  }
  if (DAT_00612386 == '\0') {
    *(undefined *)((long)param_1 + 0x36) = 1;
    if ((cVar1 == '\0') &&
       ((iVar5 = __lxstat(1,(char *)*param_1,&local_c8), iVar5 == 0 &&
        ((local_c8.st_mode & 0xf000) == 0xa000)))) goto LAB_00405bf0;
    if (__fildes != -1) {
LAB_0040581b:
      iVar5 = __fxstat(1,__fildes,&local_c8);
      if (-1 < iVar5) {
        if ((((local_c8.st_mode & 0xf000) - 0x1000 & 0xffffe000) == 0) ||
           ((local_c8.st_mode & 0xb000) == 0x8000)) {
          uVar7 = FUN_004047e0(*param_1);
          cVar3 = FUN_00405090(__fildes,uVar7);
          *(char *)((long)param_1 + 0x35) = cVar3;
          if ((cVar3 == '\0') || (DAT_00612378 != '\0')) {
            *(undefined4 *)((long)param_1 + 0x3c) = 0;
            if ((uVar14 & 0xfffffffd) == 0) {
              pbVar11 = *param_1;
              if (*(int *)(param_1 + 7) != -1) {
                if ((param_1[5] == (byte *)local_c8.st_ino) &&
                   (param_1[4] == (byte *)local_c8.st_dev)) {
                  uVar7 = FUN_004047e0(pbVar11);
                  FUN_00404820(__fildes,uVar7);
                  return;
                }
                uVar7 = FUN_004047e0(pbVar11);
                uVar7 = FUN_00409510(4,uVar7);
                uVar9 = dcgettext(0,"%s has been replaced;  following new file",5);
                error(0,0,uVar9,uVar7);
                uVar7 = FUN_004047e0(*param_1);
                FUN_00404820(*(undefined4 *)(param_1 + 7),uVar7);
                goto LAB_004058da;
              }
              uVar7 = FUN_004047e0(pbVar11);
              uVar7 = FUN_00409510(4,uVar7);
              pcVar12 = "%s has appeared;  following new file";
            }
            else {
              if (*(int *)(param_1 + 7) != -1) {
                    /* WARNING: Subroutine does not return */
                __assert_fail("f->fd == -1","src/tail.c",0x414,"recheck");
              }
              uVar7 = FUN_004047e0(*param_1);
              uVar7 = FUN_00409510(4,uVar7);
              pcVar12 = "%s has become accessible";
            }
            uVar9 = dcgettext(0,pcVar12,5);
            error(0,0,uVar9,uVar7);
LAB_004058da:
            uVar14 = (uint)param_2;
            *(int *)(param_1 + 7) = __fildes;
            if ((!bVar15 && !bVar16) == bVar15) {
              uVar14 = 0xffffffff;
            }
            *(undefined *)((long)param_1 + 0x34) = 0;
            param_1[1] = (byte *)0x0;
            param_1[2] = (byte *)local_c8.st_mtim.tv_sec;
            *(uint *)(param_1 + 8) = uVar14;
            param_1[3] = (byte *)local_c8.st_mtim.tv_nsec;
            param_1[0xb] = (byte *)0x0;
            param_1[4] = (byte *)local_c8.st_dev;
            param_1[5] = (byte *)local_c8.st_ino;
            *(__mode_t *)(param_1 + 6) = local_c8.st_mode;
            uVar7 = FUN_004047e0(*param_1);
            FUN_00404c20(__fildes,0,0,uVar7);
            return;
          }
          *(undefined4 *)((long)param_1 + 0x3c) = 0xffffffff;
          uVar7 = FUN_004047e0(*param_1);
          uVar7 = FUN_00409510(4,uVar7);
          uVar9 = dcgettext(0,"%s has been replaced with an untailable remote file",5);
          error(0,0,uVar9,uVar7);
          pbVar11 = *param_1;
          *(undefined2 *)((long)param_1 + 0x34) = 0x101;
          goto LAB_004057ae;
        }
        *(undefined4 *)((long)param_1 + 0x3c) = 0xffffffff;
        *(undefined *)((long)param_1 + 0x36) = 0;
        if ((cVar2 == '\0') || (DAT_006122a8 != 1)) {
          *(undefined *)((long)param_1 + 0x34) = 1;
          if ((cVar3 != '\0') || (uVar14 != 0xffffffff)) {
            pcVar12 = (char *)dcgettext(0,"; giving up on this name",5);
            pbVar11 = *param_1;
            goto LAB_00405b70;
          }
        }
        else {
          pbVar11 = *param_1;
          *(undefined *)((long)param_1 + 0x34) = 0;
          if (cVar3 == '\0') {
            pcVar12 = "";
            if (uVar14 == 0xffffffff) goto LAB_004057ae;
          }
          else {
            pcVar12 = "";
          }
LAB_00405b70:
          uVar7 = FUN_004047e0(pbVar11);
          uVar7 = FUN_00409510(4,uVar7);
          uVar9 = dcgettext(0,"%s has been replaced with an untailable file%s",5);
          error(0,0,uVar9,uVar7,pcVar12);
        }
        pbVar11 = *param_1;
        goto LAB_004057ae;
      }
    }
LAB_00405787:
    puVar6 = (uint *)__errno_location();
    pbVar11 = *param_1;
    uVar4 = *puVar6;
    *(uint *)((long)param_1 + 0x3c) = uVar4;
    if (*(char *)((long)param_1 + 0x36) != '\0') {
      if (uVar4 != uVar14) {
        uVar7 = FUN_004047e0(pbVar11);
        uVar7 = FUN_004095e0(0,3,uVar7);
        error(0,*puVar6,&DAT_0040d7fc,uVar7);
        pbVar11 = *param_1;
      }
      goto LAB_004057ae;
    }
LAB_00405969:
    if (cVar3 != '\0') {
      uVar7 = FUN_004047e0(pbVar11);
      uVar7 = FUN_00409510(4,uVar7);
      uVar9 = dcgettext(0,"%s has become inaccessible",5);
      error(0,*(undefined4 *)((long)param_1 + 0x3c),uVar9,uVar7);
      pbVar11 = *param_1;
    }
  }
  else {
    if (__fildes == -1) {
      *(undefined *)((long)param_1 + 0x36) = 0;
      pbVar11 = *param_1;
      if (cVar1 != '\0') {
        piVar8 = __errno_location();
        *(int *)((long)param_1 + 0x3c) = *piVar8;
        goto LAB_00405969;
      }
      iVar5 = __lxstat(1,(char *)pbVar11,&local_c8);
      if ((iVar5 != 0) || ((local_c8.st_mode & 0xf000) != 0xa000)) goto LAB_00405787;
    }
    else {
      *(undefined *)((long)param_1 + 0x36) = 1;
      if ((cVar1 != '\0') ||
         ((iVar5 = __lxstat(1,(char *)*param_1,&local_c8), iVar5 != 0 ||
          ((local_c8.st_mode & 0xf000) != 0xa000)))) goto LAB_0040581b;
    }
LAB_00405bf0:
    *(undefined4 *)((long)param_1 + 0x3c) = 0xffffffff;
    *(undefined *)((long)param_1 + 0x34) = 1;
    uVar7 = FUN_004047e0(*param_1);
    uVar7 = FUN_00409510(4,uVar7);
    uVar9 = dcgettext(0,"%s has been replaced with an untailable symbolic link",5);
    error(0,0,uVar9,uVar7);
    pbVar11 = *param_1;
  }
LAB_004057ae:
  uVar7 = FUN_004047e0(pbVar11);
  FUN_00404820(__fildes,uVar7);
  uVar7 = FUN_004047e0(*param_1);
  FUN_00404820(*(undefined4 *)(param_1 + 7),uVar7);
  *(undefined4 *)(param_1 + 7) = 0xffffffff;
  return;
}


void FUN_00405d10(int param_1)

{
  FILE *pFVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *pcVar5;
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
  
  uVar4 = DAT_006123a0;
  bVar13 = 0;
  if (param_1 != 0) {
    uVar3 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(stderr,1,uVar3,uVar4);
    goto LAB_00405d4f;
  }
  uVar3 = dcgettext(0,"Usage: %s [OPTION]... [FILE]...\n",5);
  __printf_chk(1,uVar3,uVar4);
  uVar4 = dcgettext(0,
                    "Print the last %d lines of each FILE to standard output.\nWith more than one FILE, precede each with a header giving the file name.\n"
                    ,5);
  __printf_chk(1,uVar4,10);
  pFVar1 = stdout;
  pcVar5 = (char *)dcgettext(0,"\nWith no FILE, or when FILE is -, read standard input.\n",5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = stdout;
  pcVar5 = (char *)dcgettext(0,
                             "\nMandatory arguments to long options are mandatory for short options too.\n"
                             ,5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = stdout;
  pcVar5 = (char *)dcgettext(0,
                             "  -c, --bytes=[+]NUM       output the last NUM bytes; or use -c +NUM to\n                             output starting with byte NUM of each file\n"
                             ,5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = stdout;
  pcVar5 = (char *)dcgettext(0,
                             "  -f, --follow[={name|descriptor}]\n                           output appended data as the file grows;\n                             an absent option argument means \'descriptor\'\n  -F                       same as --follow=name --retry\n"
                             ,5);
  fputs_unlocked(pcVar5,pFVar1);
  uVar4 = dcgettext(0,
                    "  -n, --lines=[+]NUM       output the last NUM lines, instead of the last %d;\n                             or use -n +NUM to output starting with line NUM\n      --max-unchanged-stats=N\n                           with --follow=name, reopen a FILE which has not\n                             changed size after N (default %d) iterations\n                             to see if it has been unlinked or renamed\n                             (this is the usual case of rotated log files);\n                             with inotify, this option is rarely useful\n"
                    ,5);
  __printf_chk(1,uVar4,10,5);
  pFVar1 = stdout;
  pcVar5 = (char *)dcgettext(0,
                             "      --pid=PID            with -f, terminate after process ID, PID dies\n  -q, --quiet, --silent    never output headers giving file names\n      --retry              keep trying to open a file if it is inaccessible\n"
                             ,5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = stdout;
  pcVar5 = (char *)dcgettext(0,
                             "  -s, --sleep-interval=N   with -f, sleep for approximately N seconds\n                             (default 1.0) between iterations;\n                             with inotify and --pid=P, check process P at\n                             least once every N seconds\n  -v, --verbose            always output headers giving file names\n"
                             ,5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = stdout;
  pcVar5 = (char *)dcgettext(0,"  -z, --zero-terminated    line delimiter is NUL, not newline\n",5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = stdout;
  pcVar5 = (char *)dcgettext(0,"      --help     display this help and exit\n",5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = stdout;
  pcVar5 = (char *)dcgettext(0,"      --version  output version information and exit\n",5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = stdout;
  pcVar5 = (char *)dcgettext(0,
                             "\nNUM may have a multiplier suffix:\nb 512, kB 1000, K 1024, MB 1000*1000, M 1024*1024,\nGB 1000*1000*1000, G 1024*1024*1024, and so on for T, P, E, Z, Y.\n\n"
                             ,5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = stdout;
  pcVar5 = (char *)dcgettext(0,
                             "With --follow (-f), tail defaults to following the file descriptor, which\nmeans that even if a tail\'ed file is renamed, tail will continue to track\nits end.  This default behavior is not desirable when you really want to\ntrack the actual name of the file, not the file descriptor (e.g., log\nrotation).  Use --follow=name in that case.  That causes tail to track the\nnamed file in a way that accommodates renaming, removal and creation.\n"
                             ,5);
  fputs_unlocked(pcVar5,pFVar1);
  local_88 = &DAT_0040c2ff;
  local_80 = "test invocation";
  local_78[0] = (byte *)0x40c379;
  local_78[1] = (byte *)0x40c311;
  local_78[2] = (byte *)0x40c327;
  local_78[3] = (byte *)0x40c331;
  local_78[4] = (byte *)0x40c340;
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
    pbVar10 = &DAT_0040c2fa;
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
    uVar4 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar4,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar5 = setlocale(5,(char *)0x0);
    if (pcVar5 != (char *)0x0) {
      iVar2 = strncmp(pcVar5,"en_",3);
      if (iVar2 != 0) {
        pbVar9 = &DAT_0040c2fa;
        goto LAB_0040613b;
      }
    }
    pbVar9 = &DAT_0040c2fa;
    uVar4 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    pcVar5 = " invocation";
    __printf_chk(1,uVar4,"https://www.gnu.org/software/coreutils/",&DAT_0040c2fa);
  }
  else {
    uVar4 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar4,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar5 = setlocale(5,(char *)0x0);
    if (pcVar5 != (char *)0x0) {
      iVar2 = strncmp(pcVar5,"en_",3);
      if (iVar2 != 0) {
LAB_0040613b:
        uVar4 = dcgettext(0,"Report %s translation bugs to <https://translationproject.org/team/>\n"
                          ,5);
        __printf_chk(1,uVar4,&DAT_0040c2fa);
      }
    }
    pcVar5 = " invocation";
    uVar4 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    __printf_chk(1,uVar4,"https://www.gnu.org/software/coreutils/",&DAT_0040c2fa);
    if (pbVar9 != &DAT_0040c2fa) {
      pcVar5 = "";
    }
  }
  uVar4 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(1,uVar4,pbVar9,pcVar5);
LAB_00405d4f:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}


void FUN_00406170(void)

{
  FUN_00405d10(1);
  return;
}


long FUN_00406180(char *param_1,char **param_2,void *param_3,size_t param_4)

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
LAB_00406217:
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
          goto LAB_00406217;
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


void FUN_004062a0(undefined8 param_1,undefined8 param_2,long param_3)

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
  uVar2 = FUN_00409740(1,param_1);
  uVar3 = FUN_00409430(0,8,param_2);
  error(0,0,uVar1,uVar3,uVar2);
  return;
}


void FUN_00406320(long *param_1,void *param_2,size_t param_3)

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
      uVar3 = FUN_00409760(lVar5);
      __fprintf_chk(stderr,1,"\n  - %s",uVar3);
      lVar5 = param_1[lVar4];
      param_2 = (void *)((long)__s2 + param_3);
      __s1 = __s2;
      if (lVar5 == 0) goto LAB_004063f0;
    }
    lVar4 = lVar4 + 1;
    param_2 = (void *)((long)__s2 + param_3);
    uVar3 = FUN_00409760(lVar5);
    __fprintf_chk(stderr,1,&DAT_0040d7fa,uVar3);
    lVar5 = param_1[lVar4];
  }
LAB_004063f0:
  pcVar2 = stderr->_IO_write_ptr;
  if (pcVar2 < stderr->_IO_write_end) {
    stderr->_IO_write_ptr = pcVar2 + 1;
    *pcVar2 = '\n';
    return;
  }
  __overflow(stderr,10);
  return;
}


long FUN_00406440(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,code *param_6)

{
  long lVar1;
  
  lVar1 = FUN_00406180(param_2,param_3,param_4,param_5);
  if (lVar1 < 0) {
    FUN_004062a0(param_1,param_2,lVar1);
    FUN_00406320(param_3,param_4,param_5);
    (*param_6)();
    lVar1 = -1;
  }
  return lVar1;
}


long FUN_004064b0(void *param_1,long *param_2,void *param_3,size_t param_4)

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


double FUN_00406500(char *param_1,char **param_2)

{
  double dVar1;
  
  if (DAT_00612388 == (__locale_t)0x0) {
    DAT_00612388 = newlocale(0x1fbf,"C",(__locale_t)0x0);
  }
  if (DAT_00612388 != (__locale_t)0x0) {
    dVar1 = strtod_l(param_1,param_2,DAT_00612388);
    return dVar1;
  }
  if (param_2 != (char **)0x0) {
    *param_2 = param_1;
  }
  return 0.0;
}


void FUN_00406570(undefined8 param_1)

{
  DAT_00612398 = param_1;
  return;
}


void FUN_00406580(undefined param_1)

{
  DAT_00612390 = param_1;
  return;
}


void FUN_00406590(void)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  iVar1 = FUN_0040b8f0(stdout);
  if (iVar1 != 0) {
    piVar2 = __errno_location();
    if ((DAT_00612390 == '\0') || (*piVar2 != 0x20)) {
      uVar3 = dcgettext(0,"write error",5);
      if (DAT_00612398 == 0) {
        error(0,*piVar2,&DAT_0040d7fc,uVar3);
      }
      else {
        uVar4 = FUN_004095b0();
        error(0,*piVar2,"%s: %s",uVar4,uVar3);
      }
      goto LAB_0040660e;
    }
  }
  iVar1 = FUN_0040b8f0(stderr);
  if (iVar1 == 0) {
    return;
  }
LAB_0040660e:
                    /* WARNING: Subroutine does not return */
  _exit(DAT_006122c0);
}


ulong FUN_00406630(char *param_1)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  cVar1 = *param_1;
  lVar2 = FUN_004066f0();
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


undefined * FUN_00406690(void *param_1)

{
  size_t __n;
  undefined *__dest;
  
  __n = FUN_00406630();
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


char * FUN_004066f0(char *param_1)

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


void FUN_00406750(char *param_1)

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


void FUN_00406780(char *param_1,uint param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 & 0x40) != 0) {
    uVar2 = param_3 & 0xffffffff;
  }
  iVar1 = open(param_1,param_2,uVar2);
  FUN_004097e0(iVar1);
  return;
}


ulong FUN_004067d0(ulong param_1)

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
LAB_00406850:
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
        if (uVar3 <= uVar4) goto LAB_00406850;
        lVar5 = lVar5 + 8;
      } while (uVar1 != 0);
    }
    uVar3 = uVar3 + 2;
  } while( true );
}


ulong FUN_00406870(ulong param_1,ulong param_2)

{
  return (param_1 >> 3 | param_1 << 0x3d) % param_2;
}


bool FUN_00406880(long param_1,long param_2)

{
  return param_1 == param_2;
}


long FUN_00406890(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = (*(code *)param_1[6])(param_2,param_1[2]);
  if (uVar1 <= (ulong)param_1[2] && param_1[2] != uVar1) {
    return uVar1 * 0x10 + *param_1;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


long FUN_004068c0(long param_1,long param_2,long **param_3,char param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  
  plVar6 = (long *)FUN_00406890();
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
LAB_0040694c:
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
          goto LAB_0040694c;
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

undefined8 FUN_004069e0(float **param_1)

{
  float fVar1;
  float *pfVar2;
  float fVar3;
  
  pfVar2 = *param_1;
  if (pfVar2 == (float *)&DAT_0040d880) {
    return 1;
  }
  fVar1 = pfVar2[2];
  if ((((_DAT_0040d894 < fVar1) && (fVar1 < DAT_0040d898)) && (_DAT_0040d89c < pfVar2[3])) &&
     (_DAT_0040d8a0 <= *pfVar2)) {
    fVar3 = *pfVar2 + _DAT_0040d894;
    if (((fVar3 < pfVar2[1]) && (pfVar2[1] <= DAT_0040d8a4)) && (fVar3 < fVar1)) {
      return 1;
    }
  }
  *param_1 = (float *)&DAT_0040d880;
  return 0;
}


undefined8 FUN_00406a60(long param_1,long **param_2,char param_3)

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
LAB_00406a88:
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
          plVar2 = (long *)FUN_00406890(param_1,lVar6);
          plVar4 = (long *)plVar3[1];
          if (*plVar2 != 0) break;
          *plVar2 = lVar6;
          *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
          *plVar3 = 0;
          plVar3[1] = *(long *)(param_1 + 0x48);
          *(long **)(param_1 + 0x48) = plVar3;
          plVar3 = plVar4;
          if (plVar4 == (long *)0x0) goto LAB_00406aff;
        }
        plVar3[1] = plVar2[1];
        plVar2[1] = (long)plVar3;
        plVar3 = plVar4;
      } while (plVar4 != (long *)0x0);
LAB_00406aff:
      lVar6 = *plVar5;
    }
    plVar5[1] = 0;
    if (param_3 != '\0') goto LAB_00406a88;
    plVar3 = (long *)FUN_00406890(param_1,lVar6);
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


undefined8 FUN_00406bb0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


undefined8 FUN_00406bc0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


undefined8 FUN_00406bd0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}


void FUN_00406be0(long **param_1)

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


bool FUN_00406c30(long **param_1)

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
LAB_00406c48:
      plVar2 = plVar2 + 2;
    }
    lVar1 = plVar2[1];
    plVar4 = (long *)((long)plVar4 + 1);
    plVar3 = (long *)((long)plVar3 + 1);
    if (lVar1 == 0) goto LAB_00406c48;
    do {
      lVar1 = *(long *)(lVar1 + 8);
      plVar3 = (long *)((long)plVar3 + 1);
    } while (lVar1 != 0);
    plVar2 = plVar2 + 2;
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406ca0(long **param_1,undefined8 param_2)

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
      if (param_1[1] <= plVar6) goto LAB_00406d0d;
    }
  }
LAB_00406d0d:
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
  __fprintf_chk((dVar7 * _DAT_0040d8b8) / dVar8,param_2,1,"# buckets used:    %lu (%.2f%%)\n",plVar2
               );
  __fprintf_chk(param_2,1,"max bucket length: %lu\n",uVar5);
  return;
}


long FUN_00406df0(long param_1,long param_2)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)FUN_00406890();
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


long FUN_00406e50(long **param_1)

{
  long lVar1;
  long *plVar2;
  
  if (param_1[4] == (long *)0x0) {
    return 0;
  }
  plVar2 = *param_1;
  if (param_1[1] <= plVar2) {
    lVar1 = FUN_00401e25();
    return lVar1;
  }
  do {
    if (*plVar2 != 0) {
      return *plVar2;
    }
    plVar2 = plVar2 + 2;
  } while (plVar2 < param_1[1]);
  lVar1 = FUN_00401e25();
  return lVar1;
}


long FUN_00406ea0(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = (long *)FUN_00406890();
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


ulong FUN_00406f10(long **param_1,long param_2,ulong param_3)

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


long FUN_00406f80(long **param_1,code *param_2,undefined8 param_3)

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


ulong FUN_00407000(byte *param_1,ulong param_2)

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


void FUN_00407040(undefined8 *param_1)

{
  *(undefined *)(param_1 + 2) = 0;
  *param_1 = 0x3f80000000000000;
  param_1[1] = 0x3fb4fdf43f4ccccd;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ** FUN_00407060(ulong param_1,void *param_2,code *param_3,code *param_4,void *param_5)

{
  char cVar1;
  void **__ptr;
  void *__nmemb;
  void *pvVar2;
  float fVar3;
  float fVar4;
  
  if (param_3 == (code *)0x0) {
    param_3 = FUN_00406870;
  }
  if (param_4 == (code *)0x0) {
    param_4 = FUN_00406880;
  }
  __ptr = (void **)malloc(0x50);
  if (__ptr == (void **)0x0) {
    return (void **)0x0;
  }
  if (param_2 == (void *)0x0) {
    __ptr[5] = &DAT_0040d880;
    cVar1 = FUN_004069e0(__ptr + 5);
    if (cVar1 == '\0') goto LAB_00407140;
    fVar4 = DAT_0040d8a8;
    if ((long)param_1 < 0) goto LAB_004071c3;
LAB_0040717e:
    fVar3 = (float)param_1;
LAB_00407187:
    fVar3 = fVar3 / fVar4;
    if (_DAT_0040d8ac <= fVar3) goto LAB_00407140;
    if (fVar3 < _DAT_0040d8b0) {
      param_1 = (ulong)fVar3;
    }
    else {
      param_1 = (long)(fVar3 - _DAT_0040d8b0) ^ 0x8000000000000000;
    }
  }
  else {
    __ptr[5] = param_2;
    cVar1 = FUN_004069e0(__ptr + 5);
    if (cVar1 == '\0') goto LAB_00407140;
    if (*(char *)((long)param_2 + 0x10) == '\0') {
      fVar4 = *(float *)((long)param_2 + 8);
      if (-1 < (long)param_1) goto LAB_0040717e;
LAB_004071c3:
      fVar3 = (float)(param_1 >> 1 | (ulong)((uint)param_1 & 1));
      fVar3 = fVar3 + fVar3;
      goto LAB_00407187;
    }
  }
  __nmemb = (void *)FUN_004067d0(param_1);
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
LAB_00407140:
  free(__ptr);
  return (void **)0x0;
}


void FUN_004071f0(long **param_1)

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
        if (param_1[1] < plVar4 || param_1[1] == plVar4) goto LAB_00407283;
      }
      plVar5 = plVar5 + 2;
    } while (plVar5 <= param_1[1] && param_1[1] != plVar5);
  }
LAB_00407283:
  param_1[3] = (long *)0x0;
  param_1[4] = (long *)0x0;
  return;
}


void FUN_004072a0(long **param_1)

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
    if (plVar2 <= plVar4) goto LAB_0040733c;
    do {
      while (lVar5 = *plVar4, plVar3 = plVar4, lVar5 == 0) {
        plVar4 = plVar4 + 2;
        if (plVar2 <= plVar4) goto LAB_004072ff;
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
LAB_004072ff:
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
LAB_0040733c:
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

undefined4 FUN_00407380(void **param_1,ulong param_2)

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
    if (_DAT_0040d8ac <= fVar3) {
      return 0;
    }
    if (fVar3 < _DAT_0040d8b0) {
      param_2 = (ulong)fVar3;
    }
    else {
      param_2 = (long)(fVar3 - _DAT_0040d8b0) ^ 0x8000000000000000;
    }
  }
  local_58 = (void *)FUN_004067d0(param_2);
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
      uVar2 = FUN_00406a60(&local_68,param_1,0);
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
      cVar1 = FUN_00406a60(param_1,&local_68,1);
      if ((cVar1 != '\0') && (cVar1 = FUN_00406a60(param_1,&local_68,0), cVar1 != '\0')) {
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

undefined8 FUN_00407580(long param_1,long param_2,long *param_3)

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
  lVar2 = FUN_004068c0(param_1,param_2,&local_20,0);
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
    if ((long)uVar3 < 0) goto LAB_0040767a;
LAB_004075eb:
    if (fVar7 <= (float)uVar3 * *(float *)(lVar2 + 8)) goto LAB_00407602;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x28);
    fVar7 = (float)uVar6;
    uVar3 = *(ulong *)(param_1 + 0x10);
    if (-1 < (long)uVar3) goto LAB_004075eb;
LAB_0040767a:
    fVar8 = (float)(uVar3 >> 1 | (ulong)((uint)uVar3 & 1));
    if (fVar7 <= (fVar8 + fVar8) * *(float *)(lVar2 + 8)) goto LAB_00407602;
  }
  FUN_004069e0(param_1 + 0x28);
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
    if (_DAT_0040d8ac <= fVar7) {
      return 0xffffffff;
    }
    if (_DAT_0040d8b0 <= fVar7) {
      uVar6 = (long)(fVar7 - _DAT_0040d8b0) ^ 0x8000000000000000;
    }
    else {
      uVar6 = (ulong)fVar7;
    }
    cVar1 = FUN_00407380(param_1,uVar6);
    if (cVar1 == '\0') {
      return 0xffffffff;
    }
    lVar2 = FUN_004068c0(param_1,param_2,&local_20,0);
    if (lVar2 != 0) {
      uVar5 = FUN_00401e2f();
      return uVar5;
    }
  }
LAB_00407602:
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


undefined8 FUN_00407800(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_10;
  
  iVar1 = FUN_00407580(param_1,param_2,&local_10);
  if (iVar1 != -1) {
    if (iVar1 == 0) {
      param_2 = local_10;
    }
    return param_2;
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_00407840(long param_1,undefined8 param_2)

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
  
  lVar5 = FUN_004068c0(param_1,param_2,&local_20,1);
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
      FUN_004069e0(param_1 + 0x28);
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
        if (_DAT_0040d8b0 <= fVar7) {
          uVar6 = (long)(fVar7 - _DAT_0040d8b0) ^ 0x8000000000000000;
        }
        else {
          uVar6 = (ulong)fVar7;
        }
        cVar4 = FUN_00407380(param_1,uVar6);
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


char * FUN_00407a20(ulong param_1,long param_2)

{
  char *pcVar1;
  char *pcVar2;
  ulong uVar3;
  
  pcVar1 = (char *)(param_2 + 0x14);
  *(undefined *)(param_2 + 0x14) = 0;
  if ((long)param_1 < 0) {
    do {
      pcVar2 = pcVar1;
      uVar3 = (long)param_1 / 10;
      pcVar2[-1] = ((char)uVar3 * '\n' + '0') - (char)param_1;
      pcVar1 = pcVar2 + -1;
      param_1 = uVar3;
    } while (uVar3 != 0);
    pcVar2[-2] = '-';
    return pcVar2 + -2;
  }
  do {
    pcVar1 = pcVar1 + -1;
    uVar3 = param_1 / 10;
    *pcVar1 = (char)param_1 + (char)uVar3 * -10 + '0';
    param_1 = uVar3;
  } while (uVar3 != 0);
  return pcVar1;
}


ulong FUN_00407ac0(void)

{
  char *__nptr;
  ulong uVar1;
  ulong uVar2;
  char *local_10;
  
  uVar2 = 0x31069;
  __nptr = getenv("_POSIX2_VERSION");
  if ((__nptr != (char *)0x0) && (*__nptr != '\0')) {
    uVar1 = strtol(__nptr,&local_10,10);
    if (*local_10 == '\0') {
      if (-0x80000001 < (long)uVar1) {
        uVar2 = 0x7fffffff;
        if ((long)uVar1 < 0x80000000) {
          uVar2 = uVar1;
        }
        return uVar2 & 0xffffffff;
      }
      uVar2 = 0x80000000;
    }
  }
  return uVar2;
}


void FUN_00407b40(byte *param_1)

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
        pbVar6 = &DAT_0040d910;
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
  DAT_006123a0 = param_1;
  program_invocation_name = param_1;
  return;
}


char * FUN_00407be0(char *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  byte *pbVar3;
  
  pcVar2 = (char *)dcgettext(0,param_1,5);
  if (param_1 == pcVar2) {
    pbVar3 = (byte *)FUN_0040ba70();
    if ((*pbVar3 & 0xdf) == 0x55) {
      if (((((pbVar3[1] & 0xdf) != 0x54) || ((pbVar3[2] & 0xdf) != 0x46)) || (pbVar3[3] != 0x2d)) ||
         ((pbVar3[4] != 0x38 || (pbVar3[5] != 0)))) {
LAB_00407cb8:
        pcVar2 = "\"";
        if (param_2 != 9) {
          pcVar2 = "\'";
        }
        return pcVar2;
      }
      cVar1 = *pcVar2;
      pcVar2 = &DAT_0040d921;
      if (cVar1 != '`') {
        pcVar2 = &DAT_0040d916;
      }
    }
    else {
      if (((((*pbVar3 & 0xdf) != 0x47) || ((pbVar3[1] & 0xdf) != 0x42)) || (pbVar3[2] != 0x31)) ||
         (((pbVar3[3] != 0x38 || (pbVar3[4] != 0x30)) ||
          ((pbVar3[5] != 0x33 || ((pbVar3[6] != 0x30 || (pbVar3[7] != 0)))))))) goto LAB_00407cb8;
      cVar1 = *pcVar2;
      pcVar2 = &DAT_0040d91d;
      if (cVar1 != '`') {
        pcVar2 = &DAT_0040d91a;
      }
    }
  }
  return pcVar2;
}


ulong FUN_00407ce0(undefined *param_1,ulong param_2,char *param_3,ulong param_4,int param_5,
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
LAB_00408931:
    if (param_2 != 0) {
      bVar3 = false;
      local_5b = false;
      bVar2 = true;
      local_70 = 0;
      goto LAB_00408566;
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
      goto LAB_00408931;
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
      param_8 = (char *)FUN_00407be0(&DAT_0040d925,param_5);
      param_9 = (char *)FUN_00407be0(&DAT_0040ee6f);
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
LAB_00407d78:
  uVar22 = 0;
  bVar5 = local_5b;
LAB_00407d88:
  bVar23 = param_4 != uVar22;
  if (param_4 == 0xffffffffffffffff) {
    bVar23 = param_3[uVar22] != '\0';
  }
  bVar26 = bVar6;
  if (!bVar23) goto LAB_00408508;
  bVar20 = (bool)(param_5 != 2 & bVar6);
  __s1 = (byte *)(param_3 + uVar22);
  uVar16 = uVar15;
  bVar4 = bVar3;
  if (bVar20) {
    if (local_a0 == 0) {
LAB_00408480:
      uVar19 = (ulong)*__s1;
      switch(uVar19) {
      case 0:
        goto switchD_00408492_caseD_0;
      default:
        bVar20 = false;
        goto switchD_004082fe_caseD_1;
      case 7:
        bVar17 = 0x61;
        goto LAB_00408195;
      case 8:
        bVar17 = 0x62;
        break;
      case 9:
switchD_00408492_caseD_9:
        bVar17 = 0x74;
        break;
      case 10:
switchD_00408492_caseD_a:
        bVar17 = 0x6e;
        break;
      case 0xb:
switchD_00408492_caseD_b:
        bVar17 = 0x76;
        goto LAB_00408195;
      case 0xc:
switchD_00408492_caseD_c:
        bVar17 = 0x66;
LAB_00408195:
        if (local_5c) {
          bVar25 = false;
          goto LAB_004080e8;
        }
LAB_004081a0:
        bVar23 = false;
        goto LAB_00407f5b;
      case 0xd:
        bVar20 = false;
switchD_00407e78_caseD_d:
        bVar25 = param_5 == 2;
        uVar19 = 0xd;
        bVar13 = 0x72;
        goto LAB_004080b0;
      case 0x20:
        bVar25 = false;
LAB_004084da:
        uVar19 = 0x20;
        goto LAB_004084a2;
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
switchD_00407e78_caseD_21:
        bVar25 = false;
        goto LAB_004080bb;
      case 0x23:
      case 0x7e:
        bVar26 = false;
LAB_004084ba:
        if (uVar22 == 0) {
          bVar25 = false;
          bVar23 = bVar20;
          bVar20 = bVar26;
          goto LAB_00407ec8;
        }
        bVar23 = false;
        goto LAB_00407edf;
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
LAB_004084a2:
        bVar24 = false;
        bVar23 = bVar20;
        bVar20 = bVar25;
        goto LAB_00407ee1;
      case 0x27:
        bVar20 = false;
        goto switchD_004082fe_caseD_27;
      case 0x3f:
        bVar20 = false;
        goto switchD_004082fe_caseD_3f;
      case 0x5c:
        bVar20 = false;
        goto switchD_00407e78_caseD_5c;
      case 0x7b:
      case 0x7d:
        bVar20 = false;
        goto switchD_004082fe_caseD_7b;
      }
      bVar25 = false;
      bVar23 = false;
      goto joined_r0x004080d7;
    }
    if ((param_4 == 0xffffffffffffffff) && (1 < local_a0)) {
      param_4 = strlen(param_3);
    }
    if ((param_4 < uVar22 + local_a0) || (iVar7 = memcmp(__s1,local_78,local_a0), iVar7 != 0))
    goto LAB_00408480;
    if (!local_5c) {
      uVar19 = (ulong)*__s1;
      bVar25 = bVar20;
      switch(uVar19) {
      case 0:
        goto switchD_00407e78_caseD_0;
      default:
        goto switchD_004082fe_caseD_1;
      case 7:
        bVar17 = 0x61;
        goto LAB_004081a0;
      case 8:
        bVar25 = false;
        bVar23 = false;
        bVar17 = 0x62;
        break;
      case 9:
        goto switchD_00408492_caseD_9;
      case 10:
        goto switchD_00408492_caseD_a;
      case 0xb:
        goto switchD_00408492_caseD_b;
      case 0xc:
        goto switchD_00408492_caseD_c;
      case 0xd:
        goto switchD_00407e78_caseD_d;
      case 0x20:
        goto LAB_004084da;
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
        goto switchD_00407e78_caseD_21;
      case 0x23:
      case 0x7e:
        bVar26 = bVar20;
        goto LAB_004084ba;
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
        goto LAB_004084a2;
      case 0x27:
        goto switchD_004082fe_caseD_27;
      case 0x3f:
        goto switchD_004082fe_caseD_3f;
      case 0x5c:
        goto switchD_00407e78_caseD_5c;
      case 0x7b:
      case 0x7d:
        goto switchD_004082fe_caseD_7b;
      }
      goto LAB_00407f22;
    }
    goto LAB_004080fa;
  }
  uVar19 = (ulong)*__s1;
  switch(uVar19) {
  case 0:
    if (bVar6) {
switchD_00408492_caseD_0:
      if (!local_5c) {
        bVar20 = false;
switchD_00407e78_caseD_0:
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
            goto LAB_00407fd8;
          }
LAB_0040821a:
          param_1[uVar16] = 0x5c;
          uVar15 = uVar16;
        }
        else if (uVar15 < uVar9) goto LAB_0040821a;
        uVar16 = uVar15 + 1;
        bVar24 = bVar23;
        if (param_5 == 2) {
          bVar17 = 0x30;
          bVar23 = false;
          bVar4 = bVar3;
          goto LAB_00407fd8;
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
LAB_00408259:
        bVar17 = (byte)uVar19;
        bVar23 = false;
        uVar15 = uVar16;
        bVar4 = bVar3;
        if ((bool)(bVar6 ^ 1U | bVar26)) goto LAB_00407fd8;
        goto LAB_00407ee1;
      }
      bVar26 = param_5 == 2;
      goto LAB_004080ec;
    }
    if ((param_6 & 1) == 0) {
      bVar25 = param_5 == 2;
      uVar19 = 0;
      bVar23 = false;
      bVar20 = false;
      goto LAB_00407ec8;
    }
    uVar22 = uVar22 + 1;
    goto LAB_00407d88;
  default:
switchD_004082fe_caseD_1:
    bVar25 = bVar6;
    if (sVar8 != 1) {
      local_40[0] = (mbstate_t)0x0;
      if (param_4 == 0xffffffffffffffff) {
        param_4 = strlen(param_3);
      }
      uVar21 = 0;
      do {
        uVar1 = uVar22 + uVar21;
        lVar11 = FUN_0040b6b0(&local_44,param_3 + uVar1,param_4 - uVar1,local_40);
        if (lVar11 == 0) break;
        if (lVar11 == -1) {
          bVar23 = false;
          goto LAB_00408c0a;
        }
        if (lVar11 == -2) {
          if ((param_4 <= uVar1) || (param_3[uVar1] == '\0')) goto LAB_00408d47;
          goto LAB_00408d37;
        }
        if (((param_5 == 2) && (local_5c)) && (lVar11 != 1)) {
          pcVar12 = param_3 + uVar1 + 1;
          do {
            if (((byte)(*pcVar12 + 0xa5U) < 0x22) &&
               ((1L << (*pcVar12 + 0xa5U & 0x3f) & 0x20000002bU) != 0)) {
              param_5 = 2;
              goto LAB_004080ec;
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
      goto LAB_00408c0a;
    }
    ppuVar10 = __ctype_b_loc();
    uVar21 = 1;
    bVar25 = ((*ppuVar10)[uVar19] & 0x4000) == 0;
    bVar23 = !bVar25;
    bVar25 = (bool)(bVar25 & bVar6);
    goto LAB_004082d4;
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
    goto LAB_00408312;
  case 10:
    uVar19 = 10;
    bVar13 = 0x6e;
    goto LAB_00408312;
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
LAB_00408312:
    bVar25 = param_5 == 2;
    bVar20 = (bool)(local_5c & bVar25);
    if (bVar20) {
LAB_0040832a:
      param_5 = 2;
      goto LAB_004080ec;
    }
    break;
  case 0x20:
    uVar19 = 0x20;
    goto LAB_00407eb6;
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
LAB_00407eb6:
    bVar25 = param_5 == 2;
    if ((local_5c) && (bVar25)) goto LAB_0040832a;
    goto LAB_00407ec8;
  case 0x23:
  case 0x7e:
LAB_00407ead:
    bVar25 = param_5 == 2;
    if (uVar22 == 0) goto LAB_00407eb6;
    goto LAB_004080bb;
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
    goto switchD_004082fe_caseD_25;
  case 0x27:
switchD_004082fe_caseD_27:
    bVar5 = bVar23;
    if (param_5 != 2) {
      bVar25 = false;
      uVar19 = 0x27;
      goto LAB_00407ec8;
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
      goto LAB_00407fd8;
    }
    goto LAB_004080ec;
  case 0x3f:
switchD_004082fe_caseD_3f:
    if (param_5 == 2) {
      if (!local_5c) {
        bVar17 = 0x3f;
        bVar24 = false;
        bVar23 = false;
        goto LAB_00407fd8;
      }
      goto LAB_004080ec;
    }
    if (param_5 != 5) {
      bVar25 = param_5 == 2;
      uVar19 = 0x3f;
      bVar23 = false;
      goto LAB_00407ec8;
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
        goto LAB_00408259;
      }
      goto LAB_004080fa;
    }
    bVar25 = false;
    uVar19 = 0x3f;
    bVar23 = false;
    goto LAB_00407ec8;
  case 0x5c:
    if (param_5 != 2) {
switchD_00407e78_caseD_5c:
      uVar19 = 0x5c;
      bVar17 = 0x5c;
      bVar13 = 0x5c;
      bVar25 = (bool)(bVar6 & local_5c & local_a0 != 0);
      if (!bVar25) break;
      uVar22 = uVar22 + 1;
      bVar23 = false;
      goto LAB_00407ff4;
    }
    if (local_5c) goto LAB_004080ec;
    uVar22 = uVar22 + 1;
    bVar23 = false;
    bVar17 = 0x5c;
    goto LAB_00407ff4;
  case 0x7b:
  case 0x7d:
switchD_004082fe_caseD_7b:
    bVar24 = param_4 != 1;
    if (param_4 == 0xffffffffffffffff) {
      bVar24 = param_3[1] != '\0';
    }
    bVar25 = param_5 == 2;
    if (!bVar24) goto LAB_00407ead;
    goto LAB_004080bb;
  }
LAB_004080b0:
  if (!bVar6) {
LAB_004080bb:
    bVar23 = false;
    goto LAB_00407ec8;
  }
  bVar23 = false;
  bVar17 = bVar13;
  goto joined_r0x004080d7;
LAB_00408508:
  if ((uVar15 == 0) && ((bool)(local_5c & param_5 == 2))) {
    param_5 = 2;
LAB_004080ec:
    if (bVar26) {
      param_5 = 4;
    }
LAB_004080fa:
    uVar9 = FUN_00407ce0(param_1,uVar9,param_3,param_4,param_5,param_6 & 0xfffffffd,0,param_8,
                         param_9);
    return uVar9;
  }
  bVar26 = (bool)(param_5 == 2 & (local_5c ^ 1U));
  bVar23 = (bool)(local_5c ^ 1U);
  if ((!bVar26) || (bVar23 = bVar26, !bVar5)) {
LAB_00408ddd:
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
    uVar9 = FUN_00407ce0(param_1,local_70,param_3,param_4,5,param_6,param_7,param_8,param_9);
    return uVar9;
  }
  local_5b = uVar9 == 0 && local_70 != 0;
  param_2 = local_70;
  bVar23 = bVar5;
  if (uVar9 != 0 || local_70 == 0) goto LAB_00408ddd;
LAB_00408566:
  *param_1 = 0x27;
  param_5 = 2;
  uVar15 = 1;
  local_78 = "\'";
  local_a0 = 1;
  local_5c = false;
  uVar9 = param_2;
  goto LAB_00407d78;
  while (__s1[uVar21] != 0) {
LAB_00408d37:
    uVar21 = uVar21 + 1;
    if (param_4 <= uVar22 + uVar21) break;
  }
LAB_00408d47:
  bVar23 = false;
LAB_00408c0a:
  if (1 < uVar21) {
LAB_004087ce:
    bVar26 = false;
    uVar21 = uVar21 + uVar22;
    uVar16 = uVar22;
    do {
      bVar17 = (byte)uVar19;
      if (bVar25) {
        bVar26 = param_5 == 2;
        if (local_5c) goto LAB_004080ec;
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
        if (uVar21 <= uVar22) goto LAB_00407f6d;
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
        if (uVar21 <= uVar22) goto LAB_00407ff4;
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
LAB_004082d4:
  if (bVar25) {
    bVar23 = false;
    bVar25 = bVar6;
    goto LAB_004087ce;
  }
switchD_004082fe_caseD_25:
  bVar25 = param_5 == 2;
LAB_00407ec8:
  bVar17 = (byte)uVar19;
  bVar24 = (bool)((bVar6 ^ 1U | bVar25) ^ 1 | local_5c);
  bVar26 = bVar20;
  if (bVar24) {
LAB_00407edf:
    bVar24 = false;
    bVar20 = bVar26;
LAB_00407ee1:
    bVar17 = (byte)uVar19;
    uVar16 = uVar15;
    bVar4 = bVar3;
    if ((param_7 == 0) || ((*(uint *)(param_7 + (uVar19 >> 5) * 4) >> (bVar17 & 0x1f) & 1) == 0))
    goto LAB_00407fd8;
    bVar25 = param_5 == 2;
  }
  else {
LAB_00407fd8:
    bVar25 = param_5 == 2;
    uVar15 = uVar16;
    bVar3 = bVar4;
    if (!bVar20) {
      uVar22 = uVar22 + 1;
      bVar3 = (bool)((bVar24 ^ 1U) & bVar4);
LAB_00407ff4:
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
      goto LAB_00407f6d;
    }
  }
joined_r0x004080d7:
  if (local_5c) {
LAB_004080e8:
    bVar26 = (bool)(bVar6 & bVar25);
    goto LAB_004080ec;
  }
LAB_00407f22:
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
LAB_00407f5b:
  if (uVar15 < uVar9) {
    param_1[uVar15] = 0x5c;
  }
  uVar15 = uVar15 + 1;
  uVar22 = uVar22 + 1;
  bVar4 = bVar3;
LAB_00407f6d:
  bVar3 = bVar4;
  if (uVar15 < uVar9) {
    param_1[uVar15] = bVar17;
  }
  uVar15 = uVar15 + 1;
  if (!bVar23) {
    bVar2 = false;
  }
  goto LAB_00407d88;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00408f10(int param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

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
  puVar8 = (undefined4 *)PTR_DAT_00612318;
  if (DAT_00612330 <= param_1) {
    if (param_1 == 0x7fffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_0040a020();
    }
    if (PTR_DAT_00612318 == &DAT_00612320) {
      puVar8 = (undefined4 *)FUN_00409e30(0);
      uVar6 = PTR_DAT_00612328._4_4_;
      uVar5 = PTR_DAT_00612328._0_4_;
      uVar3 = _UNK_00612324;
      PTR_DAT_00612318 = (undefined *)puVar8;
      *puVar8 = _DAT_00612320;
      puVar8[1] = uVar3;
      puVar8[2] = uVar5;
      puVar8[3] = uVar6;
    }
    else {
      puVar8 = (undefined4 *)FUN_00409e30(PTR_DAT_00612318);
      PTR_DAT_00612318 = (undefined *)puVar8;
    }
    memset(puVar8 + (long)DAT_00612330 * 4,0,(long)((param_1 + 1) - DAT_00612330) << 4);
    DAT_00612330 = param_1 + 1;
  }
  uVar2 = param_4[1];
  puVar10 = (ulong *)(puVar8 + (long)param_1 * 4);
  uVar4 = *puVar10;
  __ptr = (undefined *)puVar10[1];
  uVar9 = FUN_00407ce0(__ptr,uVar4,param_2,param_3,*param_4,uVar2 | 1,param_4 + 2,
                       *(undefined8 *)(param_4 + 10),*(undefined8 *)(param_4 + 0xc));
  if (uVar4 <= uVar9) {
    uVar9 = uVar9 + 1;
    *puVar10 = uVar9;
    if (__ptr != &DAT_006123c0) {
      free(__ptr);
    }
    __ptr = (undefined *)FUN_00409dd0(uVar9);
    uVar3 = *param_4;
    puVar10[1] = (ulong)__ptr;
    FUN_00407ce0(__ptr,uVar9,param_2,param_3,uVar3,uVar2 | 1,param_4 + 2,
                 *(undefined8 *)(param_4 + 10),*(undefined8 *)(param_4 + 0xc));
  }
  *piVar7 = iVar1;
  return __ptr;
}


void FUN_004090b0(undefined *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_006124c0;
  }
  FUN_00409fd0(param_1,0x38);
  *piVar2 = iVar1;
  return;
}


undefined4 FUN_004090f0(undefined4 *param_1)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)&DAT_006124c0;
  }
  return *param_1;
}


void FUN_00409100(undefined4 *param_1,undefined4 param_2)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)&DAT_006124c0;
  }
  *param_1 = param_2;
  return;
}


uint FUN_00409110(undefined *param_1,byte param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_006124c0;
  }
  uVar1 = *(uint *)(param_1 + (ulong)(param_2 >> 5) * 4 + 8);
  uVar2 = uVar1 >> (param_2 & 0x1f);
  *(uint *)(param_1 + (ulong)(param_2 >> 5) * 4 + 8) =
       ((param_3 ^ uVar2) & 1) << (param_2 & 0x1f) ^ uVar1;
  return uVar2 & 1;
}


undefined4 FUN_00409150(undefined *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_006124c0;
  }
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_1 + 4) = param_2;
  return uVar1;
}


void FUN_00409170(undefined4 *param_1,long param_2,long param_3)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)&DAT_006124c0;
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


void FUN_004091a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 *param_5)

{
  int iVar1;
  int *piVar2;
  
  if (param_5 == (undefined4 *)0x0) {
    param_5 = (undefined4 *)&DAT_006124c0;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  FUN_00407ce0(param_1,param_2,param_3,param_4,*param_5,param_5[1],param_5 + 2,
               *(undefined8 *)(param_5 + 10),*(undefined8 *)(param_5 + 0xc));
  *piVar2 = iVar1;
  return;
}


undefined8 FUN_00409220(undefined8 param_1,undefined8 param_2,long *param_3,undefined4 *param_4)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  
  if (param_4 == (undefined4 *)0x0) {
    param_4 = (undefined4 *)&DAT_006124c0;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  uVar5 = (uint)(param_3 == (long *)0x0) | param_4[1];
  lVar3 = FUN_00407ce0(0,0,param_1,param_2,*param_4,uVar5,param_4 + 2,*(undefined8 *)(param_4 + 10),
                       *(undefined8 *)(param_4 + 0xc));
  uVar4 = FUN_00409dd0(lVar3 + 1);
  FUN_00407ce0(uVar4,lVar3 + 1,param_1,param_2,*param_4,uVar5,param_4 + 2,
               *(undefined8 *)(param_4 + 10),*(undefined8 *)(param_4 + 0xc));
  *piVar2 = iVar1;
  if (param_3 != (long *)0x0) {
    *param_3 = lVar3;
  }
  return uVar4;
}


void FUN_00409310(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00409220(param_1,param_2,0,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409320(void)

{
  void **ppvVar1;
  void *__ptr;
  undefined *__ptr_00;
  void **ppvVar2;
  
  __ptr_00 = PTR_DAT_00612318;
  if (1 < DAT_00612330) {
    ppvVar2 = (void **)(PTR_DAT_00612318 + 0x18);
    ppvVar1 = (void **)(PTR_DAT_00612318 + (ulong)(DAT_00612330 - 2) * 0x10 + 0x28);
    do {
      __ptr = *ppvVar2;
      ppvVar2 = ppvVar2 + 2;
      free(__ptr);
    } while (ppvVar2 != ppvVar1);
  }
  if (*(undefined **)(__ptr_00 + 8) != &DAT_006123c0) {
    free(*(undefined **)(__ptr_00 + 8));
    _DAT_00612320 = 0x100;
    PTR_DAT_00612328 = &DAT_006123c0;
  }
  if (__ptr_00 != &DAT_00612320) {
    free(__ptr_00);
    PTR_DAT_00612318 = &DAT_00612320;
  }
  DAT_00612330 = 1;
  return;
}


void FUN_004093c0(undefined8 param_1,undefined8 param_2)

{
  FUN_00408f10(param_1,param_2,0xffffffffffffffff,&DAT_006124c0);
  return;
}


void FUN_004093e0(void)

{
  FUN_00408f10();
  return;
}


void FUN_004093f0(undefined8 param_1)

{
  FUN_00408f10(0,param_1,0xffffffffffffffff,&DAT_006124c0);
  return;
}


void FUN_00409410(undefined8 param_1,undefined8 param_2)

{
  FUN_00408f10(0,param_1,param_2,&DAT_006124c0);
  return;
}


void FUN_00409430(undefined8 param_1,int param_2,undefined8 param_3)

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
    FUN_00408f10(param_1,param_3,0xffffffffffffffff,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_004094a0(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

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
    FUN_00408f10(param_1,param_3,param_4,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00409510(undefined4 param_1,undefined8 param_2)

{
  FUN_00409430(0,param_1,param_2);
  return;
}


void FUN_00409520(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_004094a0(0,param_1,param_2,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409530(undefined8 param_1,undefined8 param_2,byte param_3)

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
  
  local_18 = DAT_006124f0;
  local_48 = _DAT_006124c0;
  uStack_40 = uRam00000000006124c8;
  local_38 = _DAT_006124d0;
  uStack_30 = uRam00000000006124d8;
  puVar1 = (uint *)((long)&uStack_40 + (ulong)(param_3 >> 5) * 4);
  local_28 = _DAT_006124e0;
  uStack_20 = uRam00000000006124e8;
  uVar2 = *puVar1;
  *puVar1 = (~(uVar2 >> (param_3 & 0x1f)) & 1) << (param_3 & 0x1f) ^ uVar2;
  FUN_00408f10(0,param_1,param_2,&local_48);
  return;
}


void FUN_004095a0(undefined8 param_1,char param_2)

{
  FUN_00409530(param_1,0xffffffffffffffff,(int)param_2);
  return;
}


void FUN_004095b0(undefined8 param_1)

{
  FUN_00409530(param_1,0xffffffffffffffff,0x3a);
  return;
}


void FUN_004095d0(undefined8 param_1,undefined8 param_2)

{
  FUN_00409530(param_1,param_2,0x3a);
  return;
}


void FUN_004095e0(undefined8 param_1,int param_2,undefined8 param_3)

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
    FUN_00408f10(param_1,param_3,0xffffffffffffffff,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409650(undefined8 param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5
                 )

{
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  long lStack_20;
  long local_18;
  
  uStack_40 = uRam00000000006124c8;
  local_38 = _DAT_006124d0;
  uStack_30 = uRam00000000006124d8;
  local_28 = _DAT_006124e0;
  lStack_20 = uRam00000000006124e8;
  local_18 = DAT_006124f0;
  local_48 = CONCAT44((int)((ulong)_DAT_006124c0 >> 0x20),10);
  if ((param_2 != 0) && (param_3 != 0)) {
    lStack_20 = param_2;
    local_18 = param_3;
    FUN_00408f10(param_1,param_4,param_5,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_004096c0(void)

{
  FUN_00409650();
  return;
}


void FUN_004096d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00409650(0,param_1,param_2,param_3,0xffffffffffffffff);
  return;
}


void FUN_004096f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00409650(0,param_1,param_2,param_3,param_4);
  return;
}


void FUN_00409710(void)

{
  FUN_00408f10();
  return;
}


void FUN_00409720(undefined8 param_1,undefined8 param_2)

{
  FUN_00408f10(0,param_1,param_2,&DAT_006122e0);
  return;
}


void FUN_00409740(undefined8 param_1,undefined8 param_2)

{
  FUN_00408f10(param_1,param_2,0xffffffffffffffff,&DAT_006122e0);
  return;
}


void FUN_00409760(undefined8 param_1)

{
  FUN_00408f10(0,param_1,0xffffffffffffffff,&DAT_006122e0);
  return;
}


ssize_t FUN_00409780(int param_1,void *param_2,ulong param_3)

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


uint FUN_004097e0(uint param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  if (2 < param_1) {
    return param_1;
  }
  uVar2 = FUN_0040bfe0();
  piVar3 = __errno_location();
  iVar1 = *piVar3;
  close(param_1);
  *piVar3 = iVar1;
  return uVar2;
}


undefined8
FUN_00409830(FILE *param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5,
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
  uVar1 = dcgettext(0,&DAT_0040e66b,5);
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
    goto LAB_00409aac;
  case 5:
    uVar1 = param_5[3];
    uVar4 = param_5[2];
    uVar5 = param_5[1];
    uVar6 = *param_5;
    uVar7 = dcgettext(0,"Written by %s, %s, %s,\n%s, and %s.\n",5);
LAB_00409aac:
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
    goto LAB_00409b49;
  case 7:
    uVar1 = param_5[2];
    uVar4 = param_5[5];
    uVar5 = param_5[4];
    uVar6 = param_5[3];
    local_58 = param_5[1];
    uVar7 = *param_5;
    uVar3 = dcgettext(0,"Written by %s, %s, %s,\n%s, %s, %s, and %s.\n",5);
LAB_00409b49:
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
    goto LAB_0040992a;
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
LAB_0040992a:
  uVar1 = __fprintf_chk(param_1,1,uVar3,uVar7,local_50,local_58,uVar6,uVar5,uVar4,uVar1,local_48);
  return uVar1;
}


void FUN_00409c10(void)

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
  FUN_00409830();
  return;
}


void FUN_00409c30(void)

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
  FUN_00409830();
  return;
}


void FUN_00409c90(void)

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
  FUN_00409830();
  return;
}


void FUN_00409d50(void)

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


void FUN_00409dd0(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_0040a020();
  }
  return;
}


void FUN_00409df0(ulong param_1,ulong param_2)

{
  if ((-1 < SUB168(ZEXT816(param_1) * ZEXT816(param_2),0)) &&
     (SUB168(ZEXT816(param_1) * ZEXT816(param_2) >> 0x40,0) == 0)) {
    FUN_00409dd0();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0040a020();
}


void thunk_FUN_00409dd0(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_0040a020();
  }
  return;
}


void * FUN_00409e30(void *param_1,size_t param_2)

{
  void *pvVar1;
  
  if ((param_2 == 0) && (param_1 != (void *)0x0)) {
    free(param_1);
    return (void *)0x0;
  }
  pvVar1 = realloc(param_1,param_2);
  if ((pvVar1 == (void *)0x0) && (param_2 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_0040a020();
  }
  return pvVar1;
}


void FUN_00409e70(undefined8 param_1,ulong param_2,ulong param_3)

{
  if ((-1 < SUB168(ZEXT816(param_2) * ZEXT816(param_3),0)) &&
     (SUB168(ZEXT816(param_2) * ZEXT816(param_3) >> 0x40,0) == 0)) {
    FUN_00409e30();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0040a020();
}


void FUN_00409ea0(long param_1,ulong *param_2,ulong param_3)

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
    if ((SUB168(ZEXT816(uVar2) * ZEXT816(param_3),0) < 0) || (uVar3 != 0)) goto LAB_00409efb;
  }
  else {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x5555555555555554);
    uVar3 = SUB168(auVar1 % ZEXT816(param_3),0);
    if (SUB168(auVar1 / ZEXT816(param_3),0) <= uVar2) {
LAB_00409efb:
                    /* WARNING: Subroutine does not return */
      FUN_0040a020(param_1,param_2,uVar3);
    }
    uVar2 = (uVar2 >> 1) + 1 + uVar2;
  }
  *param_2 = uVar2;
  FUN_00409e30(param_1,uVar2 * param_3);
  return;
}


void FUN_00409f30(long param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (param_1 == 0) {
    if (uVar1 == 0) {
      *param_2 = 0x80;
      FUN_00409e30(0,0x80);
      return;
    }
    if ((long)uVar1 < 0) goto LAB_00409f7a;
  }
  else {
    if (0x5555555555555553 < uVar1) {
LAB_00409f7a:
                    /* WARNING: Subroutine does not return */
      FUN_0040a020();
    }
    uVar1 = (uVar1 >> 1) + 1 + uVar1;
  }
  *param_2 = uVar1;
  FUN_00409e30(param_1,uVar1);
  return;
}


void FUN_00409f80(size_t param_1)

{
  void *__s;
  
  __s = (void *)FUN_00409dd0();
  memset(__s,0,param_1);
  return;
}


void FUN_00409fa0(size_t param_1,ulong param_2)

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
  FUN_0040a020();
}


void FUN_00409fd0(void *param_1,size_t param_2)

{
  void *__dest;
  
  __dest = (void *)FUN_00409dd0(param_2);
  memcpy(__dest,param_1,param_2);
  return;
}


void FUN_0040a000(char *param_1)

{
  void *__dest;
  size_t sVar1;
  
  sVar1 = strlen(param_1);
  __dest = (void *)FUN_00409dd0(sVar1 + 1);
  memcpy(__dest,param_1,sVar1 + 1);
  return;
}


void FUN_0040a020(void)

{
  undefined8 uVar1;
  
  uVar1 = dcgettext(0,"memory exhausted",5);
  error(DAT_006122c0,0,&DAT_0040d7fc,uVar1);
                    /* WARNING: Subroutine does not return */
  abort();
}


ulong FUN_0040a060(undefined8 param_1,undefined4 param_2,ulong param_3,ulong param_4,
                  undefined8 param_5,undefined8 param_6,int param_7)

{
  ulong uVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  ulong local_40 [2];
  
  iVar2 = FUN_0040a260(param_1,0,param_2,local_40);
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
  uVar4 = FUN_00409760(param_1);
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


void FUN_0040a130(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  FUN_0040a060(param_1,10,param_2,param_3,param_4,param_5,param_6);
  return;
}


/* WARNING: Could not reconcile some variable overlaps */

undefined8 FUN_0040a160(void)

{
  uint *puVar1;
  undefined8 uVar2;
  undefined local_18 [16];
  
  local_18 = FUN_0040b950();
  puVar1 = (uint *)__errno_location();
  do {
    *puVar1 = 0;
    uVar2 = FUN_0040b840(local_18,0);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
  } while ((*puVar1 & 0xfffffffb) == 0);
  return 0xffffffff;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0040a1c0(char *param_1,char **param_2,double *param_3,code *param_4)

{
  int *piVar1;
  bool bVar2;
  double dVar3;
  char *local_30;
  
  piVar1 = __errno_location();
  *piVar1 = 0;
  dVar3 = (double)(*param_4)(param_1,&local_30);
  if (local_30 == param_1) {
    bVar2 = false;
LAB_0040a219:
    if (param_2 == (char **)0x0) goto LAB_0040a222;
  }
  else {
    if (param_2 == (char **)0x0) {
      bVar2 = false;
      if (*local_30 != '\0') goto LAB_0040a222;
      if (dVar3 == _DAT_0040d790) {
        bVar2 = true;
        goto LAB_0040a222;
      }
LAB_0040a211:
      bVar2 = *piVar1 != 0x22;
      goto LAB_0040a219;
    }
    bVar2 = true;
    if (dVar3 != _DAT_0040d790) goto LAB_0040a211;
  }
  *param_2 = local_30;
LAB_0040a222:
  *param_3 = dVar3;
  return bVar2;
}


ulong FUN_0040a260(byte *param_1,byte **param_2,uint param_3,ulong *param_4,char *param_5)

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
    if ((param_5 == (char *)0x0) || (bVar12 = *pbVar5, bVar12 == 0)) goto LAB_0040a302;
    pcVar7 = strchr(param_5,(int)(char)bVar12);
    if (pcVar7 == (char *)0x0) goto switchD_0040a3ec_caseD_1;
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
        goto LAB_0040a3da;
      }
      if (bVar1 != 0x42) {
                    /* WARNING: Could not recover jumptable at 0x0040a3c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar6 = (*(code *)(&PTR_LAB_0040ea38)[bVar8])();
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
LAB_0040a3da:
  iVar10 = (int)uVar11;
  switch(bVar12 - 0x42 & 0xff) {
  case 0:
    if (uVar6 >> 0x36 == 0) {
      uVar6 = uVar6 << 10;
      break;
    }
    goto LAB_0040a447;
  default:
switchD_0040a3ec_caseD_1:
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
    goto LAB_0040a4d4;
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
    goto joined_r0x0040a40c;
  case 0xb:
  case 0x2b:
    auVar2 = ZEXT816(uVar6) * ZEXT816((ulong)(long)iVar10);
    if (SUB168(auVar2 >> 0x40,0) != 0) goto LAB_0040a447;
    auVar2 = (auVar2 & (undefined  [16])0xffffffffffffffff) * ZEXT816((ulong)(long)iVar10);
joined_r0x0040a40c:
    uVar6 = SUB168(auVar2,0);
    if (SUB168(auVar2 >> 0x40,0) != 0) {
LAB_0040a447:
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
    goto LAB_0040a4d4;
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
    goto LAB_0040a4d4;
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
    goto LAB_0040a4d4;
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
LAB_0040a4d4:
    uVar14 = (ulong)(uVar13 | uVar9);
    break;
  case 0x20:
    if (uVar6 >> 0x37 != 0) goto LAB_0040a447;
    uVar6 = uVar6 << 9;
    break;
  case 0x21:
    break;
  case 0x35:
    if ((long)uVar6 < 0) goto LAB_0040a447;
    uVar6 = uVar6 * 2;
  }
  *param_2 = pbVar5 + iVar15;
  if (pbVar5[iVar15] != 0) {
    uVar14 = (ulong)((uint)uVar14 | 2);
  }
LAB_0040a302:
  *param_4 = uVar6;
  return uVar14;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_0040a6a0(ulong param_1,int param_2,ulong param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  
  if (param_2 != 0x406) {
    iVar1 = fcntl((int)param_1,param_2,param_3);
    return iVar1;
  }
  if (DAT_006124f8 < 0) {
    iVar1 = FUN_0040a6a0(param_1,0,param_3 & 0xffffffff);
    if (iVar1 < 0) {
      return iVar1;
    }
    if (DAT_006124f8 != -1) {
      return iVar1;
    }
  }
  else {
    iVar1 = fcntl((int)param_1,0x406);
    if ((-1 < iVar1) || (piVar4 = __errno_location(), *piVar4 != 0x16)) {
      DAT_006124f8 = 1;
      return iVar1;
    }
    iVar1 = FUN_0040a6a0(param_1 & 0xffffffff,0,param_3 & 0xffffffff);
    if (iVar1 < 0) {
      return iVar1;
    }
    DAT_006124f8 = -1;
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


void FUN_0040a7e0(long param_1,int *param_2)

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
      if (iVar3 <= iVar8) goto LAB_0040a85c;
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
      if (iVar9 <= iVar3) goto LAB_0040a85c;
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
LAB_0040a85c:
  param_2[0xc] = iVar2;
  param_2[0xb] = iVar1 + (iVar2 - iVar3);
  return;
}


int FUN_0040a8c0(int param_1,undefined8 *param_2,char *param_3,char **param_4,undefined4 *param_5,
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
      if ((iVar5 == 0) && (sVar7 = strlen(__s1_00), sVar7 == sVar15)) goto LAB_0040aae0;
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
            if (local_70 == (char *)0x0) goto LAB_0040aa20;
          }
          else if (local_70 == (char *)0x0) {
            local_70 = (char *)calloc((long)iVar5,1);
            if (local_70 == (char *)0x0) {
              bVar3 = true;
              goto LAB_0040aa20;
            }
            bVar4 = true;
            local_70[(int)local_44] = '\x01';
          }
          local_70[lVar16] = '\x01';
        }
      }
LAB_0040aa20:
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
              __fprintf_chk(__stream,1,&DAT_0040ee69,param_9,*param_4);
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
LAB_0040aae0:
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


uint FUN_0040aee0(uint param_1,undefined8 *param_2,char *param_3,long param_4,undefined8 param_5,
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
LAB_0040af2a:
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
          goto LAB_0040b02d;
        }
        pbVar8 = *(byte **)(param_7 + 8);
      }
      param_7[10] = 0;
    }
LAB_0040b02d:
    param_7[6] = 1;
    cVar2 = *param_3;
LAB_0040b038:
    if (cVar2 == ':') {
      uVar3 = 0;
    }
    if (pbVar8 == (byte *)0x0) goto LAB_0040afa8;
LAB_0040b04c:
    if (*pbVar8 == 0) goto LAB_0040afa8;
  }
  else {
    if (param_7[6] == 0) goto LAB_0040af2a;
    cVar2 = *param_3;
    pbVar8 = *(byte **)(param_7 + 8);
    if ((cVar2 - 0x2bU & 0xfd) != 0) goto LAB_0040b038;
    pcVar4 = param_3 + 1;
    param_3 = param_3 + 1;
    if (*pcVar4 == ':') {
      uVar3 = 0;
    }
    if (pbVar8 != (byte *)0x0) goto LAB_0040b04c;
LAB_0040afa8:
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
        FUN_0040a7e0(param_2,param_7);
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
LAB_0040b116:
      if (uVar11 != param_1) {
        *param_7 = uVar11;
      }
      return 0xffffffff;
    }
    lVar6 = 3;
    pbVar8 = (byte *)param_2[(int)uVar11];
    pbVar9 = pbVar8;
    pbVar10 = &DAT_0040c389;
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
          FUN_0040a7e0(param_2,param_7);
          uVar11 = param_7[0xb];
        }
      }
      param_7[0xc] = param_1;
      *param_7 = param_1;
      goto LAB_0040b116;
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
        puVar15 = &DAT_0040c389;
        goto LAB_0040b275;
      }
      if ((int)param_6 != 0) {
        if (pbVar8[2] == 0) {
          pcVar4 = strchr(param_3,(int)(char)bVar14);
          param_6 = param_6 & 0xffffffff;
          if (pcVar4 != (char *)0x0) goto LAB_0040b220;
        }
        *(byte **)(param_7 + 8) = pbVar8 + 1;
        uVar11 = FUN_0040a8c0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar3,
                              &DAT_0040c38a);
        if (uVar11 != 0xffffffff) {
          return uVar11;
        }
        pbVar8 = (byte *)param_2[(int)*param_7];
      }
    }
LAB_0040b220:
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
  puVar15 = &DAT_0040ee9d;
LAB_0040b275:
  uVar3 = FUN_0040a8c0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar3,puVar15);
  return uVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040b4b0(void)

{
  DAT_00612500 = DAT_0061233c;
  _DAT_00612504 = DAT_00612338;
  FUN_0040aee0();
  DAT_0061233c = DAT_00612500;
  DAT_00612540 = DAT_00612510;
  _DAT_00612334 = DAT_00612508;
  return;
}


void FUN_0040b510(void)

{
  FUN_0040b4b0();
  return;
}


void FUN_0040b530(void)

{
  FUN_0040b4b0();
  return;
}


void FUN_0040b550(void)

{
  FUN_0040aee0();
  return;
}


void FUN_0040b570(void)

{
  FUN_0040b4b0();
  return;
}


void FUN_0040b590(void)

{
  FUN_0040aee0();
  return;
}


uint FUN_0040b5b0(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  bool bVar4;
  int local_140;
  int local_13c;
  stat local_138;
  stat local_a8;
  
  uVar2 = __fxstat(1,param_1,&local_138);
  if (uVar2 != 0) {
    return uVar2;
  }
  bVar4 = (local_138.st_mode & 0xf000) == 0x1000 || (local_138.st_mode & 0xf000) == 0xc000;
  if (bVar4) {
    uVar2 = pipe(&local_140);
    if (uVar2 != 0) {
      return uVar2;
    }
    uVar2 = __fxstat(1,local_140,&local_a8);
    piVar3 = __errno_location();
    iVar1 = *piVar3;
    close(local_140);
    close(local_13c);
    if (uVar2 != 0) {
      *piVar3 = iVar1;
      return uVar2;
    }
    if (local_a8.st_nlink < local_138.st_nlink) {
      return 0;
    }
    if ((local_a8.st_mode & 0xf000) == 0x1000) {
      return (uint)((local_138.st_mode & 0xf000) == 0x1000);
    }
    bVar4 = (local_138.st_mode & 0xf000) == 0xc000;
  }
  return (uint)bVar4;
}


size_t FUN_0040b6b0(wchar_t *param_1,byte *param_2,size_t param_3,mbstate_t *param_4)

{
  char cVar1;
  size_t sVar2;
  wchar_t local_1c;
  
  if (param_2 == (byte *)0x0) {
    param_3 = 1;
    param_2 = (byte *)0x40ee9c;
  }
  else {
    if (param_3 == 0) {
      return 0xfffffffffffffffe;
    }
    if (param_1 != (wchar_t *)0x0) goto LAB_0040b6d4;
  }
  param_1 = &local_1c;
LAB_0040b6d4:
  sVar2 = mbrtowc(param_1,(char *)param_2,param_3,param_4);
  if ((0xfffffffffffffffd < sVar2) && (cVar1 = FUN_0040ba10(0), cVar1 == '\0')) {
    sVar2 = 1;
    *param_1 = (uint)*param_2;
  }
  return sVar2;
}


ulong * FUN_0040b730(ulong *param_1,char param_2,ulong param_3)

{
  char cVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  
  if (param_3 == 0) {
    return (ulong *)0x0;
  }
  if (((ulong)param_1 & 7) == 0) {
LAB_0040b770:
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
      if (((ulong)param_1 & 7) == 0) goto LAB_0040b770;
      cVar1 = *(char *)param_1;
    }
  }
  return param_1;
}


int FUN_0040b840(long *param_1,timespec *param_2)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  timespec local_28;
  
  local_28.tv_nsec = param_1[1];
  if ((ulong)local_28.tv_nsec < 1000000000) {
    lVar3 = *param_1;
    while (0x1fa400 < lVar3) {
      local_28.tv_sec = 0x1fa400;
      lVar3 = lVar3 + -0x1fa400;
      iVar1 = nanosleep(&local_28,param_2);
      if (iVar1 != 0) {
        if (param_2 == (timespec *)0x0) {
          return iVar1;
        }
        param_2->tv_sec = param_2->tv_sec + lVar3;
        return iVar1;
      }
      local_28.tv_nsec = 0;
    }
    local_28.tv_sec = lVar3;
    iVar1 = nanosleep(&local_28,param_2);
  }
  else {
    piVar2 = __errno_location();
    *piVar2 = 0x16;
    iVar1 = -1;
  }
  return iVar1;
}


ulong FUN_0040b8f0(uint *param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  
  lVar2 = __fpending();
  uVar1 = *param_1;
  uVar3 = FUN_0040bff0(param_1);
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined  [16] FUN_0040b950(double param_1)

{
  long lVar1;
  long lVar2;
  double dVar3;
  
  if (param_1 <= _DAT_0040eea8) {
    return ZEXT816(0x8000000000000000);
  }
  if (DAT_0040eeb0 <= param_1) {
    return CONCAT88(999999999,0x7fffffffffffffff);
  }
  dVar3 = (param_1 - (double)(long)param_1) * _DAT_0040eeb8;
  lVar2 = (long)dVar3;
  lVar2 = (ulong)((double)lVar2 < dVar3) + lVar2;
  lVar1 = lVar2 / 1000000000 + (long)param_1;
  lVar2 = lVar2 % 1000000000;
  if (-1 < lVar2) {
    return CONCAT88(lVar2,lVar1);
  }
  return CONCAT88(lVar2 + 1000000000,lVar1 + -1);
}


bool FUN_0040ba10(int param_1)

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
    pbVar5 = &DAT_0040d7ff;
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
      pbVar4 = (byte *)0x40eec0;
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

char * FUN_0040ba70(void)

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
  if (DAT_00612538 != (char *)0x0) goto LAB_0040baaa;
  pcVar7 = getenv("CHARSETALIASDIR");
  if ((pcVar7 == (char *)0x0) || (*pcVar7 == '\0')) {
    sVar6 = 0x73;
    sVar5 = 0x65;
    __n = 100;
    pcVar7 = 
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib"
    ;
LAB_0040bb95:
    __file = (char *)malloc(sVar6);
    if (__file != (char *)0x0) {
      memcpy(__file,pcVar7,__n);
      __file[__n] = '/';
      goto LAB_0040bbb6;
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
        goto LAB_0040bb95;
      }
      sVar6 = __n + 0xe;
    }
    __file = (char *)malloc(sVar6);
    if (__file != (char *)0x0) {
      memcpy(__file,pcVar7,__n);
      sVar5 = __n;
LAB_0040bbb6:
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
LAB_0040bc50:
          pbVar8 = (byte *)__stream->_IO_read_ptr;
          if (__stream->_IO_read_end <= pbVar8) goto LAB_0040bddc;
          do {
            __stream->_IO_read_ptr = (char *)(pbVar8 + 1);
            uVar4 = (uint)*pbVar8;
            __ptr = pcVar7;
            while( true ) {
              pcVar7 = __ptr;
              if ((uVar4 - 9 < 2) || (uVar4 == 0x20)) goto LAB_0040bc50;
              if (uVar4 == 0x23) goto LAB_0040be41;
              ungetc(uVar4,__stream);
              iVar2 = fscanf(__stream,"%50s %50s",&local_b8,&local_78);
              puVar13 = &local_b8;
              if (iVar2 < 2) goto LAB_0040bdef;
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
                FUN_0040bff0(__stream);
                goto LAB_0040bbf4;
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
LAB_0040bddc:
              uVar4 = __uflow(__stream);
              __ptr = pcVar7;
              if (uVar4 == 0xffffffff) goto LAB_0040bdef;
            }
          } while( true );
        }
        close(iVar2);
      }
      goto LAB_0040bbee;
    }
  }
  DAT_00612538 = "";
LAB_0040baaa:
  cVar1 = *DAT_00612538;
  pcVar7 = DAT_00612538;
  do {
    if (cVar1 == '\0') {
LAB_0040bb04:
      if (*__s1 == '\0') {
        __s1 = "ASCII";
      }
      return __s1;
    }
    iVar2 = strcmp(__s1,pcVar7);
    if ((iVar2 == 0) || ((cVar1 == '*' && (pcVar7[1] == '\0')))) {
      sVar6 = strlen(pcVar7);
      __s1 = pcVar7 + sVar6 + 1;
      goto LAB_0040bb04;
    }
    sVar6 = strlen(pcVar7);
    sVar5 = strlen(pcVar7 + sVar6 + 1);
    pcVar7 = pcVar7 + sVar6 + 1 + sVar5 + 1;
    cVar1 = *pcVar7;
  } while( true );
LAB_0040be41:
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
  if (uVar4 == 0xffffffff) goto LAB_0040bdef;
  goto LAB_0040bc50;
LAB_0040bdef:
  FUN_0040bff0(__stream);
  if (local_d0 == 0) {
LAB_0040bbee:
    pcVar7 = "";
  }
  else {
    pcVar7[local_d0] = '\0';
  }
LAB_0040bbf4:
  free(__file);
  DAT_00612538 = pcVar7;
  goto LAB_0040baaa;
}


/* WARNING: Removing unreachable block (ram,0x0040a6dc) */
/* WARNING: Removing unreachable block (ram,0x0040a720) */
/* WARNING: Removing unreachable block (ram,0x0040a72f) */
/* WARNING: Removing unreachable block (ram,0x0040a6f5) */
/* WARNING: Removing unreachable block (ram,0x0040a7a0) */
/* WARNING: Removing unreachable block (ram,0x0040a7ae) */
/* WARNING: Removing unreachable block (ram,0x0040a7c6) */
/* WARNING: Removing unreachable block (ram,0x0040a738) */
/* WARNING: Removing unreachable block (ram,0x0040a74a) */
/* WARNING: Removing unreachable block (ram,0x0040a762) */
/* WARNING: Removing unreachable block (ram,0x0040a706) */
/* WARNING: Removing unreachable block (ram,0x0040a710) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_0040bfe0(int param_1)

{
  int iVar1;
  
  iVar1 = fcntl(param_1,0,3);
  return iVar1;
}


int FUN_0040bff0(FILE *param_1)

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
      if (_Var4 == -1) goto LAB_0040c057;
    }
    iVar1 = FUN_0040c070(param_1);
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
LAB_0040c057:
  iVar1 = fclose(param_1);
  return iVar1;
}


void FUN_0040c070(FILE *param_1)

{
  int iVar1;
  
  if (param_1 != (FILE *)0x0) {
    iVar1 = __freading();
    if ((iVar1 != 0) && ((param_1->_flags & 0x100U) != 0)) {
      FUN_0040c0b0(param_1,0,1);
      fflush(param_1);
      return;
    }
  }
  fflush(param_1);
  return;
}


ulong FUN_0040c0b0(FILE *param_1,__off_t param_2,int param_3)

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


/* WARNING: Removing unreachable block (ram,0x0040c143) */
/* WARNING: Removing unreachable block (ram,0x0040c148) */

void FUN_0040c110(void)

{
  __DT_INIT();
  return;
}


void FUN_0040c170(void)

{
  return;
}


void FUN_0040c180(undefined8 param_1)

{
  __cxa_atexit(param_1,0,DAT_00612288);
  return;
}


undefined8 FUN_0040c198(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  FUN_00404761();
  return;
}

