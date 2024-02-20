
void switchD_00405590::caseD_b(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401e85(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401e8a(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401e8f(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401e94(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void switchD_0040717a::caseD_0(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Could not reconcile some variable overlaps */

undefined8 FUN_00401ea0(int param_1,undefined8 *param_2)

{
  char cVar1;
  char *pcVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  size_t sVar9;
  ushort **ppuVar10;
  byte *pbVar11;
  __off_t _Var12;
  void *pvVar13;
  long lVar14;
  size_t sVar15;
  long lVar16;
  __sighandler_t p_Var17;
  undefined8 uVar18;
  undefined8 uVar19;
  int *piVar20;
  ulong uVar21;
  undefined8 *puVar22;
  __sighandler_t p_Var23;
  char *pcVar24;
  __sighandler_t p_Var25;
  ulong in_R10;
  __sighandler_t in_R11;
  uint uVar26;
  uint uVar27;
  __sighandler_t p_Var28;
  int iVar29;
  __sighandler_t p_Var30;
  __sighandler_t p_Var31;
  byte *pbVar32;
  ulong uVar33;
  bool bVar34;
  bool bVar35;
  bool bVar36;
  __sighandler_t local_140;
  __sighandler_t local_138;
  __sighandler_t local_130;
  __sighandler_t local_128;
  __sighandler_t local_120;
  undefined8 *local_108;
  __sighandler_t local_100;
  __sighandler_t local_f8;
  __sighandler_t local_e8;
  byte local_d9;
  sigaction local_d8;
  
  bVar3 = 0;
  p_Var30 = (__sighandler_t)0x0;
  p_Var28 = (__sighandler_t)0x1;
  iVar6 = getpagesize();
  local_138 = (__sighandler_t)(long)iVar6;
  FUN_004053a0(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils",
                 "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale"
                );
  textdomain("coreutils");
  FUN_00409900(FUN_004050e0);
  DAT_0060e5f0 = "-";
  DAT_0060e620 = "x";
  local_140 = (__sighandler_t)0x0;
  local_100 = (__sighandler_t)0x0;
  local_120 = (__sighandler_t)0x0;
  uVar27 = 0;
  iVar6 = DAT_0060e290;
  pbVar32 = DAT_0060e5f8;
  p_Var17 = local_140;
LAB_00401f40:
  local_140 = p_Var17;
  DAT_0060e5f8 = pbVar32;
  DAT_0060e290 = iVar6;
  uVar26 = DAT_0060e31c;
  if (DAT_0060e31c == 0) {
    uVar26 = 1;
  }
  p_Var31 = (__sighandler_t)(ulong)uVar26;
  uVar7 = FUN_00408cd0(param_1,param_2,"0123456789C:a:b:del:n:t:ux",&PTR_s_bytes_0040aaa0,0);
  pbVar11 = DAT_0060e908;
  iVar29 = (int)p_Var30;
  if (uVar7 == 0xffffffff) {
    if ((local_100 != (__sighandler_t)0x0) && (DAT_0060e760 != (byte *)0x0)) {
      pcVar24 = "--filter does not process a chunk extracted to stdout";
      goto LAB_00403780;
    }
    if (iVar29 == 0) {
      local_140 = (__sighandler_t)0x3e8;
      p_Var30 = (__sighandler_t)0x3;
    }
    else if (local_140 == (__sighandler_t)0x0) {
      uVar18 = FUN_00406fc0(&DAT_00409bea);
      uVar19 = dcgettext(0,"invalid number of lines",5);
                    /* WARNING: Subroutine does not return */
      error(0,0,"%s: %s",uVar19,uVar18);
    }
    if (DAT_0060e290 < 0) {
      DAT_0060e290 = 10;
    }
    uVar27 = (int)p_Var30 - 5;
    p_Var28 = local_140;
    if (DAT_0060e600 == (byte *)0x0) {
      if (uVar27 < 3) goto LAB_0040277e;
    }
    else {
      DAT_0060e2a0 = 0;
      if (uVar27 < 3) {
        iVar6 = FUN_00407a20(DAT_0060e600,0,10,&local_d8,"");
        if (((iVar6 == 0) &&
            (local_d8.__sigaction_handler.sa_handler <= (__sighandler_t)~(ulong)local_140)) &&
           (local_d8.__sigaction_handler.sa_handler < local_140)) {
          p_Var28 = local_d8.__sigaction_handler.sa_handler + (long)local_140;
        }
LAB_0040277e:
        uVar21 = 0xffffffffffffffff;
        pcVar24 = PTR_s_abcdefghijklmnopqrstuvwxyz_0060e298;
        goto code_r0x0040278d;
      }
    }
    uVar21 = 0;
    if (DAT_0060e608 != 0) goto LAB_004027f4;
    goto LAB_0040253e;
  }
  iVar6 = DAT_0060e290;
  pbVar32 = DAT_0060e5f8;
  p_Var17 = local_140;
  if (uVar7 == 0x65) {
    DAT_0060e541 = '\x01';
    goto LAB_00401f40;
  }
  if ((int)uVar7 < 0x66) {
    if ((int)uVar7 < 0x3a) {
      if ((int)uVar7 < 0x30) {
        if (uVar7 == 0xffffff7d) {
          FUN_00407550(stdout,"split","GNU coreutils",PTR_DAT_0060e2a8,"Torbjorn Granlund",
                       "Richard M. Stallman",0);
                    /* WARNING: Subroutine does not return */
          exit(0);
        }
        if (uVar7 != 0xffffff7e) goto LAB_00403795;
        FUN_00404cf0(0);
      }
      iVar6 = DAT_0060e290;
      pbVar32 = DAT_0060e5f8;
      if (iVar29 == 0) {
LAB_00402301:
        p_Var30 = (__sighandler_t)0x4;
        uVar27 = uVar26;
        p_Var17 = (__sighandler_t)(long)(int)(uVar7 - 0x30);
      }
      else {
        if (iVar29 != 4) goto LAB_0040384f;
        if ((uVar27 != 0) && (uVar27 != uVar26)) goto LAB_00402301;
        if (((__sighandler_t)0x1999999999999999 < local_140) ||
           (p_Var17 = (__sighandler_t)((long)local_140 * 10 + (long)(int)(uVar7 - 0x30)),
           uVar27 = uVar26, p_Var17 < local_140)) {
          uVar18 = FUN_00405350(local_140,&local_d8);
          uVar19 = dcgettext(0,"line count option -%s%c... is too large",5);
                    /* WARNING: Subroutine does not return */
          error(1,0,uVar19,uVar18,uVar7);
        }
      }
      goto LAB_00401f40;
    }
    if (uVar7 == 0x61) {
      uVar18 = dcgettext(0,"invalid suffix length",5);
      DAT_0060e608 = FUN_004079f0(DAT_0060e908,0,0x1fffffffffffffff,"",uVar18,0);
      iVar6 = DAT_0060e290;
      pbVar32 = DAT_0060e5f8;
      goto LAB_00401f40;
    }
    if ((int)uVar7 < 0x62) {
      if (uVar7 == 0x43) {
        if (iVar29 != 0) goto LAB_0040384f;
        p_Var30 = (__sighandler_t)0x2;
        uVar18 = dcgettext(0,"invalid number of bytes",5);
        p_Var17 = (__sighandler_t)
                  FUN_004079f0(DAT_0060e908,1,0x7fffffffffffffff,"bEGKkMmPTYZ0",uVar18,0);
        iVar6 = DAT_0060e290;
        pbVar32 = DAT_0060e5f8;
        goto LAB_00401f40;
      }
    }
    else {
      if (uVar7 == 0x62) {
        if (iVar29 != 0) {
LAB_0040384f:
          pcVar24 = "cannot split in more than one way";
          goto LAB_00403780;
        }
        p_Var30 = (__sighandler_t)0x1;
        uVar18 = dcgettext(0,"invalid number of bytes",5);
        p_Var17 = (__sighandler_t)
                  FUN_004079f0(DAT_0060e908,1,0x7fffffffffffffff,"bEGKkMmPTYZ0",uVar18,0);
        iVar6 = DAT_0060e290;
        pbVar32 = DAT_0060e5f8;
        goto LAB_00401f40;
      }
      if (uVar7 == 100) {
        pcVar24 = "0123456789";
        goto LAB_0040219e;
      }
    }
  }
  else {
    if (uVar7 == 0x78) {
      pcVar24 = "0123456789abcdef";
LAB_0040219e:
      local_130 = (__sighandler_t)((ulong)local_130 & 0xffffffff00000000 | (ulong)uVar7);
      PTR_s_abcdefghijklmnopqrstuvwxyz_0060e298 = pcVar24;
      if (DAT_0060e908 != (byte *)0x0) {
        uVar21 = 0xffffffffffffffff;
        pbVar32 = DAT_0060e908;
        do {
          if (uVar21 == 0) break;
          uVar21 = uVar21 - 1;
          bVar4 = *pbVar32;
          pbVar32 = pbVar32 + (ulong)bVar3 * -2 + 1;
        } while (bVar4 != 0);
        sVar9 = strspn((char *)DAT_0060e908,pcVar24);
        if (~uVar21 - 1 != sVar9) {
          uVar18 = FUN_00406fc0(pbVar11);
          pcVar24 = "%s: invalid start value for hexadecimal suffix";
          if (uVar7 != 100) goto LAB_00403883;
          uVar19 = dcgettext(0,"%s: invalid start value for numerical suffix",5);
          goto LAB_0040388a;
        }
        iVar6 = DAT_0060e290;
        pbVar32 = DAT_0060e5f8;
        DAT_0060e600 = pbVar11;
        if (*pbVar11 == 0x30) {
          bVar4 = pbVar11[1];
          pbVar11 = pbVar11 + 1;
          while ((bVar4 != 0 && (DAT_0060e600 = pbVar11, DAT_0060e908 = pbVar11, *pbVar11 == 0x30)))
          {
            bVar4 = pbVar11[1];
            pbVar11 = pbVar11 + 1;
          }
        }
      }
      goto LAB_00401f40;
    }
    if ((int)uVar7 < 0x79) {
      if (uVar7 == 0x6e) {
        if (iVar29 != 0) goto LAB_0040384f;
        ppuVar10 = __ctype_b_loc();
        pbVar32 = DAT_0060e908;
        do {
          DAT_0060e908 = pbVar32;
          pbVar11 = DAT_0060e908;
          bVar34 = false;
          bVar35 = (*(byte *)((long)*ppuVar10 + (ulong)*DAT_0060e908 * 2 + 1) & 0x20) == 0;
          pbVar32 = DAT_0060e908 + 1;
        } while (!bVar35);
        lVar14 = 2;
        pbVar32 = DAT_0060e908;
        pbVar8 = &DAT_00409b9e;
        do {
          if (lVar14 == 0) break;
          lVar14 = lVar14 + -1;
          bVar34 = *pbVar32 < *pbVar8;
          bVar35 = *pbVar32 == *pbVar8;
          pbVar32 = pbVar32 + (ulong)bVar3 * -2 + 1;
          pbVar8 = pbVar8 + (ulong)bVar3 * -2 + 1;
        } while (bVar35);
        if ((!bVar34 && !bVar35) == bVar34) {
          DAT_0060e908 = DAT_0060e908 + 2;
          p_Var30 = (__sighandler_t)0x7;
        }
        else {
          p_Var30 = (__sighandler_t)0x5;
          iVar6 = strncmp((char *)DAT_0060e908,"l/",2);
          if (iVar6 == 0) {
            DAT_0060e908 = pbVar11 + 2;
            p_Var30 = (__sighandler_t)0x6;
          }
        }
        pbVar11 = (byte *)strchr((char *)DAT_0060e908,0x2f);
        if (pbVar11 == (byte *)0x0) {
          uVar18 = dcgettext(0,"invalid number of chunks",5);
          p_Var17 = (__sighandler_t)FUN_004079f0(DAT_0060e908,1,0xffffffffffffffff,"",uVar18,0);
          iVar6 = DAT_0060e290;
          pbVar32 = DAT_0060e5f8;
        }
        else {
          uVar18 = dcgettext(0,"invalid number of chunks",5);
          p_Var17 = (__sighandler_t)FUN_004079f0(pbVar11 + 1,1,0xffffffffffffffff,"",uVar18,0);
          iVar6 = DAT_0060e290;
          pbVar32 = DAT_0060e5f8;
          if (pbVar11 != DAT_0060e908) {
            *pbVar11 = 0;
            uVar18 = dcgettext(0,"invalid chunk number",5);
            local_100 = (__sighandler_t)FUN_004079f0(DAT_0060e908,1,p_Var17,"",uVar18,0);
            iVar6 = DAT_0060e290;
            pbVar32 = DAT_0060e5f8;
          }
        }
        goto LAB_00401f40;
      }
      if ((int)uVar7 < 0x6f) {
        if (uVar7 != 0x6c) goto LAB_00403795;
        if (iVar29 != 0) goto LAB_0040384f;
        p_Var30 = (__sighandler_t)0x3;
        uVar18 = dcgettext(0,"invalid number of lines",5);
        p_Var17 = (__sighandler_t)FUN_004079f0(DAT_0060e908,1,0xffffffffffffffff,"",uVar18,0);
        iVar6 = DAT_0060e290;
        pbVar32 = DAT_0060e5f8;
        goto LAB_00401f40;
      }
      if (uVar7 == 0x74) {
        iVar6 = (int)(char)*DAT_0060e908;
        if (*DAT_0060e908 == 0) {
          uVar18 = dcgettext(0,"empty record separator",5);
                    /* WARNING: Subroutine does not return */
          error(1,0,uVar18);
        }
        if (DAT_0060e908[1] != 0) {
          iVar6 = strcmp((char *)DAT_0060e908,"\\0");
          if (iVar6 != 0) {
            uVar18 = FUN_00406fc0(pbVar11);
            uVar19 = dcgettext(0,"multi-character separator %s",5);
                    /* WARNING: Subroutine does not return */
            error(1,0,uVar19,uVar18);
          }
          iVar6 = 0;
        }
        pbVar32 = DAT_0060e5f8;
        if ((-1 < DAT_0060e290) && (DAT_0060e290 != iVar6)) {
          uVar18 = dcgettext(0,"multiple separator characters specified",5);
                    /* WARNING: Subroutine does not return */
          error(1,0,uVar18);
        }
        goto LAB_00401f40;
      }
      if (uVar7 == 0x75) {
        DAT_0060e540 = '\x01';
        goto LAB_00401f40;
      }
    }
    else {
      if (uVar7 == 0x81) {
        DAT_0060e760 = DAT_0060e908;
        goto LAB_00401f40;
      }
      if ((int)uVar7 < 0x82) {
        if (uVar7 == 0x80) {
          DAT_0060e542 = 1;
          goto LAB_00401f40;
        }
      }
      else {
        if (uVar7 == 0x82) {
          uVar18 = dcgettext(0,"invalid IO block size",5);
          local_120 = (__sighandler_t)
                      FUN_004079f0(DAT_0060e908,1,~(ulong)local_138,"bEGKkMmPTYZ0",uVar18,0);
          iVar6 = DAT_0060e290;
          pbVar32 = DAT_0060e5f8;
          goto LAB_00401f40;
        }
        if (uVar7 == 0x83) {
          pbVar32 = DAT_0060e908;
          pbVar8 = (byte *)FUN_00405180(DAT_0060e908);
          iVar6 = DAT_0060e290;
          if (pbVar11 != pbVar8) {
            uVar18 = FUN_00406fc0(pbVar11);
            pcVar24 = "invalid suffix %s, contains directory separator";
            goto LAB_00403883;
          }
          goto LAB_00401f40;
        }
      }
    }
  }
LAB_00403795:
  p_Var17 = (__sighandler_t)FUN_00404cf0();
LAB_0040379f:
  local_128._0_1_ = (byte)param_2;
LAB_00402bee:
  if ((long)local_138 <= (long)local_130) goto LAB_004037b0;
  if ((p_Var17 == (__sighandler_t)0xffffffffffffffff) &&
     (p_Var17 = (__sighandler_t)FUN_00406fe0(0,local_f8,local_120),
     p_Var17 == (__sighandler_t)0xffffffffffffffff)) {
    uVar18 = FUN_00406e40(0,3,DAT_0060e5f0);
    piVar20 = __errno_location();
                    /* WARNING: Subroutine does not return */
    error(1,*piVar20,"%s",uVar18);
  }
  if (p_Var17 == (__sighandler_t)0x0) goto LAB_004037b0;
  local_d9 = 0;
  local_e8 = p_Var17;
  if (local_138 + -(long)local_130 <= p_Var17) {
    local_e8 = local_138 + -(long)local_130;
  }
  p_Var25 = local_f8 + (long)local_e8;
  p_Var23 = local_f8;
  while( true ) {
    param_2 = (undefined8 *)(ulong)(byte)local_128;
    p_Var17 = (__sighandler_t)0xffffffffffffffff;
    if (p_Var25 == p_Var23) break;
    p_Var17 = p_Var30 + -(long)local_130;
    if ((long)p_Var17 < 0) {
      p_Var17 = (__sighandler_t)0x0;
    }
    if (local_e8 < p_Var17) {
      p_Var17 = local_e8;
    }
    lVar14 = FUN_00408dd0(p_Var23 + (long)p_Var17,DAT_0060e290,(long)local_e8 - (long)p_Var17);
    local_128._0_1_ = lVar14 != 0;
    p_Var17 = p_Var25;
    if ((bool)(byte)local_128) {
      p_Var17 = (__sighandler_t)(lVar14 + 1);
    }
    lVar14 = (long)p_Var17 - (long)p_Var23;
    if (p_Var28 == p_Var31) {
      lVar16 = FUN_004052d0(1,p_Var23,lVar14);
      if (lVar14 != lVar16) {
        uVar18 = dcgettext(0,"write error",5);
        piVar20 = __errno_location();
                    /* WARNING: Subroutine does not return */
        error(1,*piVar20,"%s",uVar18);
      }
    }
    else if (p_Var31 == (__sighandler_t)0x0) {
      FUN_004049a0(param_2,p_Var23,lVar14);
    }
    local_130 = local_130 + lVar14;
    bVar34 = (bool)(byte)local_128;
    while ((((long)p_Var30 < (long)local_130 || (bVar3 = local_d9, bVar34 != false)) &&
           (bVar3 = (bVar34 ^ 1U) & p_Var25 == p_Var17, bVar3 == 0))) {
      p_Var28 = p_Var28 + 1;
      if (p_Var31 != (__sighandler_t)0x0 && p_Var31 < p_Var28) goto LAB_00402fc5;
      p_Var30 = p_Var30 + in_R10;
      if (p_Var28 == local_140) {
        p_Var30 = in_R11;
      }
      if ((long)p_Var30 < (long)local_130) {
        if (p_Var31 == (__sighandler_t)0x0) {
          FUN_004049a0(1,0,0);
        }
      }
      else {
        bVar34 = false;
      }
    }
    local_d9 = bVar3;
    local_e8 = local_e8 + -lVar14;
    p_Var23 = p_Var17;
  }
  goto LAB_0040379f;
LAB_004037b0:
  p_Var28 = p_Var28 + (local_d9 != 0);
  if (local_100 == (__sighandler_t)0x0) {
    for (; p_Var28 <= local_140; p_Var28 = p_Var28 + 1) {
      FUN_004049a0(1,0,0);
    }
  }
  goto LAB_00402fc5;
  while( true ) {
    uVar21 = uVar21 - 1;
    cVar1 = *pcVar24;
    pcVar24 = pcVar24 + (ulong)bVar3 * -2 + 1;
    if (cVar1 == '\0') break;
code_r0x0040278d:
    if (uVar21 == 0) break;
  }
  p_Var17 = (__sighandler_t)(~uVar21 - 1);
  uVar21 = (ulong)p_Var28 % (ulong)p_Var17;
  lVar14 = 0;
  for (; p_Var17 <= p_Var28; p_Var28 = (__sighandler_t)((ulong)p_Var28 / (ulong)p_Var17)) {
    lVar14 = lVar14 + 1;
  }
  DAT_0060e2a0 = 0;
  uVar21 = (ulong)(uVar21 != 0) + lVar14;
  if (DAT_0060e608 == 0) {
LAB_0040253e:
    DAT_0060e608 = 2;
    if (1 < uVar21) {
      DAT_0060e608 = uVar21;
    }
  }
  else {
    if (DAT_0060e608 < uVar21) {
      uVar18 = dcgettext(0,"the suffix length needs to be at least %lu",5);
                    /* WARNING: Subroutine does not return */
      error(1,0,uVar18,uVar21);
    }
LAB_004027f4:
    DAT_0060e2a0 = 0;
  }
  uVar26 = DAT_0060e31c;
  if ((int)DAT_0060e31c < param_1) {
    lVar14 = (long)(int)DAT_0060e31c;
    DAT_0060e5f0 = (char *)param_2[lVar14];
    uVar26 = DAT_0060e31c + 1;
    if ((int)(DAT_0060e31c + 1) < param_1) {
      DAT_0060e620 = (char *)param_2[lVar14 + 1];
      DAT_0060e31c = DAT_0060e31c + 2;
      uVar26 = DAT_0060e31c;
      if ((int)DAT_0060e31c < param_1) {
        uVar18 = FUN_00406fc0(param_2[lVar14 + 2]);
        pcVar24 = "extra operand %s";
LAB_00403883:
        uVar19 = dcgettext(0,pcVar24,5);
LAB_0040388a:
                    /* WARNING: Subroutine does not return */
        error(0,0,uVar19,uVar18);
      }
    }
  }
  DAT_0060e31c = uVar26;
  pcVar2 = DAT_0060e5f0;
  if (DAT_0060e600 != (byte *)0x0) {
    uVar21 = 0xffffffffffffffff;
    pcVar24 = "numerical suffix start value is too large for the suffix length";
    pbVar32 = DAT_0060e600;
    do {
      if (uVar21 == 0) break;
      uVar21 = uVar21 - 1;
      bVar4 = *pbVar32;
      pbVar32 = pbVar32 + (ulong)bVar3 * -2 + 1;
    } while (bVar4 != 0);
    if (DAT_0060e608 < ~uVar21 - 1) {
LAB_00403780:
      uVar18 = dcgettext(0,pcVar24,5);
                    /* WARNING: Subroutine does not return */
      error(0,0,uVar18);
    }
  }
  iVar6 = strcmp(DAT_0060e5f0,"-");
  if ((iVar6 != 0) && (iVar6 = FUN_00405260(0,pcVar2,0,0), iVar6 < 0)) {
    uVar18 = FUN_00406d70(4,DAT_0060e5f0);
    uVar19 = dcgettext(0,"cannot open %s for reading",5);
    piVar20 = __errno_location();
                    /* WARNING: Subroutine does not return */
    error(1,*piVar20,uVar19,uVar18);
  }
  iVar6 = __fxstat(1,0,(stat *)&DAT_0060e560);
  if (iVar6 != 0) {
    uVar18 = FUN_00406e40(0,3,DAT_0060e5f0);
    piVar20 = __errno_location();
                    /* WARNING: Subroutine does not return */
    error(1,*piVar20,"%s",uVar18);
  }
  if ((local_120 == (__sighandler_t)0x0) &&
     (local_120 = (__sighandler_t)0x20000, DAT_0060e598 + -0x20000 < (code *)0x1ffffffffffe0001)) {
    local_120 = DAT_0060e598;
  }
  p_Var17 = (__sighandler_t)0xffffffffffffffff;
  lVar14 = FUN_00407690();
  p_Var28 = local_138 + lVar14 + -1;
  uVar21 = (ulong)p_Var28 % (ulong)local_138;
  local_138 = (__sighandler_t)0x7fffffffffffffff;
  local_f8 = p_Var28 + -uVar21;
  if (1 < uVar27) {
LAB_0040268d:
    if (DAT_0060e760 != (byte *)0x0) {
      sigemptyset((sigset_t *)&DAT_0060e640);
      sigaction(0xd,(sigaction *)0x0,&local_d8);
      if (local_d8.__sigaction_handler.sa_handler != (__sighandler_t)0x1) {
        sigaddset((sigset_t *)&DAT_0060e640,0xd);
      }
      sigprocmask(0,(sigset_t *)&DAT_0060e640,(sigset_t *)&DAT_0060e6c0);
    }
    switch((int)p_Var30) {
    case 2:
      bVar34 = false;
      p_Var30 = (__sighandler_t)0x0;
      p_Var28 = (__sighandler_t)0x0;
      local_128 = (__sighandler_t)0x0;
      local_130 = (__sighandler_t)0x0;
      do {
        uVar21 = FUN_00406fe0(0,local_f8,local_120);
        if (uVar21 == 0xffffffffffffffff) {
          uVar18 = FUN_00406e40(0,3,DAT_0060e5f0);
          piVar20 = __errno_location();
                    /* WARNING: Subroutine does not return */
          error(1,*piVar20,"%s",uVar18);
        }
        p_Var17 = local_f8;
        if (uVar21 == 0) {
          if (p_Var30 != (__sighandler_t)0x0) {
            FUN_004049a0(p_Var28 == (__sighandler_t)0x0,local_130,p_Var30);
          }
          free(local_130);
          break;
        }
        do {
          p_Var31 = p_Var30 + (long)p_Var28;
          uVar33 = (long)local_140 - (long)p_Var31;
          if (uVar21 < uVar33) {
            p_Var23 = (__sighandler_t)0x0;
            uVar33 = 0;
            pvVar13 = memrchr(p_Var17,DAT_0060e290,uVar21);
            if (p_Var30 == (__sighandler_t)0x0) goto LAB_00402a8c;
LAB_004029fc:
            if ((pvVar13 == (void *)0x0) && (p_Var28 != (__sighandler_t)0x0)) goto LAB_00402a15;
            FUN_004049a0(p_Var28 == (__sighandler_t)0x0,local_130,p_Var30);
            local_128 = local_120;
            p_Var28 = p_Var31;
            if (p_Var30 <= local_120) goto LAB_00402a8c;
            local_130 = (__sighandler_t)FUN_004076f0(local_130,local_120);
            if (pvVar13 == (void *)0x0) goto LAB_00403130;
LAB_00402a95:
            lVar14 = (long)pvVar13 + (1 - (long)p_Var17);
            p_Var28 = p_Var31 + lVar14;
            uVar21 = uVar21 - lVar14;
            p_Var25 = p_Var17 + lVar14;
            FUN_004049a0(p_Var31 == (__sighandler_t)0x0,p_Var17,lVar14);
            if (p_Var23 != (__sighandler_t)0x0) {
              bVar34 = uVar33 - lVar14 != 0;
              uVar33 = uVar33 - lVar14;
              if (bVar34) goto LAB_00402ad0;
              bVar34 = true;
              p_Var30 = (__sighandler_t)0x0;
              goto LAB_00402b2e;
            }
            bVar34 = uVar21 != 0;
            uVar33 = uVar21;
            if (bVar34) {
LAB_00402ad0:
              p_Var30 = (__sighandler_t)0x0;
              p_Var17 = p_Var25;
              goto LAB_00402ad3;
            }
            p_Var30 = (__sighandler_t)0x0;
            bVar34 = true;
          }
          else {
            p_Var23 = p_Var17 + (uVar33 - 1);
            pvVar13 = memrchr(p_Var17,DAT_0060e290,uVar33);
            if (p_Var30 != (__sighandler_t)0x0) goto LAB_004029fc;
LAB_00402a8c:
            p_Var31 = p_Var28;
            if (pvVar13 != (void *)0x0) goto LAB_00402a95;
LAB_00403130:
            p_Var30 = (__sighandler_t)0x0;
            p_Var28 = p_Var31;
LAB_00402a15:
            if (!bVar34) {
              bVar35 = p_Var28 == (__sighandler_t)0x0;
              if (p_Var23 != (__sighandler_t)0x0) {
                uVar21 = uVar21 - uVar33;
                p_Var25 = p_Var17 + uVar33;
                FUN_004049a0(bVar35,p_Var17,uVar33);
                p_Var28 = (__sighandler_t)0x0;
                goto LAB_00402a46;
              }
              p_Var28 = p_Var28 + uVar21;
              FUN_004049a0(bVar35,p_Var17,uVar21);
              break;
            }
            if (((p_Var23 == (__sighandler_t)0x0) || (uVar33 == 0)) &&
               ((p_Var25 = p_Var17, p_Var23 != (__sighandler_t)0x0 || (uVar33 = uVar21, uVar21 == 0)
                ))) goto LAB_00402b2e;
LAB_00402ad3:
            if ((ulong)((long)local_128 - (long)p_Var30) < uVar33) {
              if ((__sighandler_t)~(ulong)local_120 < local_128) goto LAB_004037ab;
              local_128 = local_128 + (long)local_120;
              local_130 = (__sighandler_t)FUN_004076f0(local_130,local_128);
            }
            uVar21 = uVar21 - uVar33;
            p_Var31 = (__sighandler_t)((long)local_130 + (long)p_Var30);
            p_Var30 = p_Var30 + uVar33;
            memcpy(p_Var31,p_Var17,uVar33);
            p_Var25 = p_Var17 + uVar33;
LAB_00402b2e:
            if (p_Var23 != (__sighandler_t)0x0) {
              bVar34 = false;
              p_Var28 = (__sighandler_t)0x0;
            }
          }
LAB_00402a46:
          p_Var17 = p_Var25;
        } while (uVar21 != 0);
      } while( true );
    case 3:
    case 4:
      p_Var28 = (__sighandler_t)0x0;
      uVar18 = 1;
      do {
        lVar14 = FUN_00406fe0(0,local_f8,local_120);
        iVar6 = DAT_0060e290;
        if (lVar14 == -1) {
          uVar18 = FUN_00406e40(0,3,DAT_0060e5f0);
          piVar20 = __errno_location();
                    /* WARNING: Subroutine does not return */
          error(1,*piVar20,"%s",uVar18);
        }
        p_Var31 = local_f8 + lVar14;
        *p_Var31 = (__sighandler_t)(char)DAT_0060e290;
        p_Var30 = local_f8;
        uVar19 = uVar18;
        p_Var17 = local_f8;
        while (p_Var30 = (__sighandler_t)FUN_00408dd0(p_Var30,iVar6,p_Var31 + (1 - (long)p_Var30)),
              p_Var31 != p_Var30) {
          p_Var28 = p_Var28 + 1;
          p_Var30 = p_Var30 + 1;
          if (local_140 <= p_Var28) {
            p_Var28 = (__sighandler_t)0x0;
            FUN_004049a0(uVar19,p_Var17,(long)p_Var30 - (long)p_Var17);
            uVar19 = 1;
            p_Var17 = p_Var30;
            iVar6 = DAT_0060e290;
          }
        }
        uVar18 = uVar19;
        if (p_Var31 != p_Var17) {
          uVar18 = 0;
          FUN_004049a0(uVar19,p_Var17,(long)p_Var31 - (long)p_Var17);
        }
      } while (lVar14 != 0);
      break;
    case 5:
      if (local_100 == (__sighandler_t)0x0) {
        FUN_00404ab0((ulong)local_138 / (ulong)local_140,local_f8,local_120,p_Var17);
      }
      else {
        if ((local_140 < local_100) || (local_138 < local_140)) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("k && n && k <= n && n <= file_size","src/split.c",0x3df,
                        "bytes_chunk_extract");
        }
        p_Var28 = (__sighandler_t)((long)(local_100 + -1) * ((ulong)local_138 / (ulong)local_140));
        if (local_100 != local_140) {
          local_138 = (__sighandler_t)(((ulong)local_138 / (ulong)local_140) * (long)local_100);
        }
        if (p_Var28 < p_Var17) {
          uVar21 = (long)p_Var17 - (long)p_Var28;
          memmove(local_f8,p_Var28 + (long)local_f8,uVar21);
        }
        else {
          uVar21 = 0xffffffffffffffff;
          _Var12 = lseek(0,(__off_t)p_Var28,1);
          if (_Var12 < 0) {
            uVar18 = FUN_00406e40(0,3,DAT_0060e5f0);
            piVar20 = __errno_location();
                    /* WARNING: Subroutine does not return */
            error(1,*piVar20,"%s",uVar18);
          }
        }
        for (; (long)p_Var28 < (long)local_138; p_Var28 = p_Var28 + uVar33) {
          if ((uVar21 == 0xffffffffffffffff) &&
             (uVar21 = FUN_00406fe0(0,local_f8,local_120), uVar21 == 0xffffffffffffffff)) {
            uVar18 = FUN_00406e40(0,3,DAT_0060e5f0);
            piVar20 = __errno_location();
                    /* WARNING: Subroutine does not return */
            error(1,*piVar20,"%s",uVar18);
          }
          if (uVar21 == 0) break;
          uVar33 = (long)local_138 - (long)p_Var28;
          if (uVar21 < (ulong)((long)local_138 - (long)p_Var28)) {
            uVar33 = uVar21;
          }
          uVar21 = FUN_004052d0(1,local_f8,uVar33);
          if ((uVar33 != uVar21) &&
             ((piVar20 = __errno_location(), DAT_0060e760 == (byte *)0x0 || (*piVar20 != 0x20)))) {
            uVar18 = FUN_00406e40(0,3,&DAT_0040c282);
                    /* WARNING: Subroutine does not return */
            error(1,*piVar20,"%s",uVar18);
          }
          uVar21 = 0xffffffffffffffff;
        }
      }
      break;
    case 6:
      if ((local_100 <= local_140) && (local_140 <= local_138)) {
        in_R10 = (ulong)local_138 / (ulong)local_140;
        if (local_100 < (__sighandler_t)0x2) {
          p_Var30 = (__sighandler_t)(in_R10 - 1);
          p_Var28 = (__sighandler_t)0x1;
          local_130 = (__sighandler_t)0x0;
        }
        else {
          p_Var28 = local_100 + -1;
          p_Var30 = (__sighandler_t)(in_R10 * (long)p_Var28 - 1);
          local_130 = p_Var30;
          if (p_Var30 < p_Var17) {
            p_Var17 = p_Var17 + -(long)p_Var30;
            memmove(local_f8,local_f8 + (long)p_Var30,(size_t)p_Var17);
          }
          else {
            lVar14 = (long)p_Var30 - (long)p_Var17;
            p_Var17 = (__sighandler_t)0xffffffffffffffff;
            _Var12 = lseek(0,lVar14,1);
            if (_Var12 < 0) {
              uVar18 = FUN_00406e40(0,3,DAT_0060e5f0);
              piVar20 = __errno_location();
                    /* WARNING: Subroutine does not return */
              error(1,*piVar20,"%s",uVar18);
            }
          }
        }
        local_d9 = 0;
        local_128._0_1_ = 1;
        in_R11 = local_138 + -1;
        p_Var31 = local_100;
        goto LAB_00402bee;
      }
                    /* WARNING: Subroutine does not return */
      __assert_fail("n && k <= n && n <= file_size","src/split.c",0x361,"lines_chunk_split");
    case 7:
      if (local_100 == (__sighandler_t)0x0) {
        if ((SUB168(ZEXT816(0x20) * ZEXT816(local_140),0) < 0) ||
           (SUB168(ZEXT816(0x20) * ZEXT816(local_140) >> 0x40,0) != 0)) {
LAB_004037ab:
                    /* WARNING: Subroutine does not return */
          FUN_004078e0();
        }
        p_Var28 = (__sighandler_t)0x0;
        local_108 = (undefined8 *)FUN_00407690((long)local_140 << 5);
        puVar22 = local_108;
        do {
          FUN_00403cc0();
          p_Var28 = p_Var28 + 1;
          uVar18 = FUN_004078c0();
          *(undefined4 *)(puVar22 + 1) = 0xffffffff;
          *puVar22 = uVar18;
          puVar22[2] = 0;
          *(undefined4 *)(puVar22 + 3) = 0;
          puVar22 = puVar22 + 4;
        } while (p_Var28 != local_140);
      }
      local_130 = (__sighandler_t)0x0;
      p_Var28 = (__sighandler_t)0x1;
      bVar3 = 0;
      bVar34 = false;
      bVar35 = false;
      while( true ) {
        lVar14 = FUN_00406fe0(0,local_f8,local_120);
        if (lVar14 == -1) {
          uVar18 = FUN_00406e40(0,3,DAT_0060e5f0);
          piVar20 = __errno_location();
                    /* WARNING: Subroutine does not return */
          error(1,*piVar20,"%s",uVar18);
        }
        if (lVar14 == 0) break;
        p_Var17 = local_f8 + lVar14;
        p_Var30 = local_f8;
        bVar5 = bVar34;
        while (bVar34 = bVar5, p_Var30 != p_Var17) {
          sVar9 = (long)p_Var17 - (long)p_Var30;
          lVar14 = FUN_00408dd0(p_Var30,DAT_0060e290,sVar9);
          bVar36 = lVar14 != 0;
          p_Var31 = p_Var17;
          if (bVar36) {
            sVar9 = (long)(__sighandler_t)(lVar14 + 1) - (long)p_Var30;
            p_Var31 = (__sighandler_t)(lVar14 + 1);
          }
          if (local_100 == (__sighandler_t)0x0) {
            bVar4 = FUN_00404500(local_108,local_130,local_140);
            puVar22 = local_108 + (long)local_130 * 4;
            bVar3 = bVar3 | bVar4;
            piVar20 = __errno_location();
            if (DAT_0060e540 == '\0') {
              sVar9 = fwrite_unlocked(p_Var30,sVar9,1,(FILE *)puVar22[2]);
              if (sVar9 == 1) {
                bVar5 = DAT_0060e760 != (byte *)0x0 && *piVar20 == 0x20;
LAB_00402f31:
                if (!bVar5) {
                  bVar34 = true;
                }
              }
              else if ((*piVar20 != 0x20) || (DAT_0060e760 == (byte *)0x0)) {
                uVar18 = FUN_00406e40(0,3,*puVar22);
                    /* WARNING: Subroutine does not return */
                error(1,*piVar20,"%s",uVar18);
              }
            }
            else {
              sVar15 = FUN_004052d0(*(undefined4 *)(puVar22 + 1),p_Var30,sVar9);
              if (sVar9 == sVar15) {
                bVar5 = *piVar20 == 0x20 && DAT_0060e760 != (byte *)0x0;
                goto LAB_00402f31;
              }
              if ((*piVar20 != 0x20) || (DAT_0060e760 == (byte *)0x0)) {
                uVar18 = FUN_00406e40(0,3,*puVar22);
                    /* WARNING: Subroutine does not return */
                error(1,*piVar20,"%s",uVar18);
              }
            }
            if (bVar3 != 0) {
              iVar6 = FUN_00407e60();
              if (iVar6 != 0) {
                uVar18 = FUN_00406e40(0,3,*puVar22);
                    /* WARNING: Subroutine does not return */
                error(1,*piVar20,"%s",uVar18);
              }
              puVar22[2] = 0;
              *(undefined4 *)(puVar22 + 1) = 0xfffffffe;
            }
            p_Var30 = p_Var31;
            bVar5 = bVar34;
            if ((bVar36) && (local_130 = local_130 + 1, local_130 == local_140)) {
              if (!bVar34) goto LAB_004033ba;
              local_130 = (__sighandler_t)0x0;
              bVar5 = false;
              bVar35 = bVar34;
            }
          }
          else {
            if (local_100 == p_Var28) {
              if (DAT_0060e540 == '\0') {
                sVar9 = fwrite_unlocked(p_Var30,sVar9,1,stdout);
                if (sVar9 != 1) {
                  clearerr_unlocked(stdout);
                  uVar18 = dcgettext(0,"write error",5);
                  piVar20 = __errno_location();
                    /* WARNING: Subroutine does not return */
                  error(1,*piVar20,"%s",uVar18);
                }
              }
              else {
                sVar15 = FUN_004052d0(1,p_Var30,sVar9);
                if (sVar9 != sVar15) {
                  uVar18 = dcgettext(0,"write error",5);
                  piVar20 = __errno_location();
                    /* WARNING: Subroutine does not return */
                  error(1,*piVar20,"%s",uVar18);
                }
              }
            }
            p_Var30 = p_Var31;
            bVar5 = bVar34;
            if (bVar36) {
              p_Var23 = p_Var28 + 1;
              bVar34 = local_140 != p_Var28;
              p_Var28 = (__sighandler_t)0x1;
              if (bVar34) {
                p_Var28 = p_Var23;
              }
            }
          }
        }
      }
      if (local_100 == (__sighandler_t)0x0) {
        if (bVar35) {
LAB_004033ba:
        }
        else {
          local_140._0_4_ = (int)local_130;
        }
        p_Var28 = (__sighandler_t)0x0;
        puVar22 = local_108;
        do {
          if (((__sighandler_t)(long)(int)local_140 <= p_Var28) && (DAT_0060e541 == '\0')) {
            FUN_00404500(local_108,p_Var28,local_140);
          }
          if (-1 < *(int *)(puVar22 + 1)) {
            FUN_004046f0(puVar22[2],*(int *)(puVar22 + 1),*(undefined4 *)(puVar22 + 3),*puVar22);
          }
          p_Var28 = p_Var28 + 1;
          *(undefined4 *)(puVar22 + 1) = 0xfffffffe;
          puVar22 = puVar22 + 4;
        } while (p_Var28 != local_140);
      }
      break;
    default:
      FUN_00404ab0(local_140,local_f8,local_120,0xffffffffffffffff,0);
    }
LAB_00402fc5:
    iVar6 = close(0);
    if (iVar6 != 0) {
      uVar18 = FUN_00406e40(0,3,DAT_0060e5f0);
      piVar20 = __errno_location();
                    /* WARNING: Subroutine does not return */
      error(1,*piVar20,"%s",uVar18);
    }
    FUN_004046f0(0,DAT_0060e294,DAT_0060e758,DAT_0060e618);
    return 0;
  }
  local_138 = (__sighandler_t)0x0;
  _Var12 = lseek(0,0,1);
  if (_Var12 < 0) {
    piVar20 = __errno_location();
    if (*piVar20 == 0x1d) {
      *piVar20 = 0;
    }
    goto LAB_004035fe;
  }
  do {
    lVar14 = FUN_00406fe0(0,local_f8 + (long)local_138,(long)local_120 - (long)local_138);
    if (lVar14 == 0) goto LAB_004028a2;
    if (lVar14 == -1) goto LAB_004035fe;
    local_138 = local_138 + lVar14;
  } while (local_138 < local_120);
  if (DAT_0060e590 != (__sighandler_t)0x0) {
    p_Var28 = local_138 + _Var12;
    if (((DAT_0060e578 & 0xd000) != 0x8000) ||
       (p_Var17 = DAT_0060e590, (long)DAT_0060e590 < (long)p_Var28)) {
      p_Var17 = (__sighandler_t)lseek(0,0,2);
      if ((long)p_Var17 < 0) goto LAB_004035fe;
      if (p_Var28 != p_Var17) {
        _Var12 = lseek(0,(__off_t)p_Var28,0);
        if (_Var12 < 0) goto LAB_004035fe;
        if ((long)p_Var17 < (long)p_Var28) {
          p_Var17 = p_Var28;
        }
      }
    }
    local_138 = local_138 + ((long)p_Var17 - (long)p_Var28);
    if (local_138 != (__sighandler_t)0x7fffffffffffffff) {
LAB_004028a2:
      if ((long)local_138 < 0) goto LAB_004035fe;
      p_Var17 = local_120;
      if (local_138 <= local_120) {
        p_Var17 = local_138;
      }
      if ((long)local_140 < 0) {
        uVar18 = FUN_00405350(local_140,&local_d8);
        uVar18 = FUN_00406fc0(uVar18);
        uVar19 = dcgettext(0,"invalid number of chunks",5);
                    /* WARNING: Subroutine does not return */
        error(1,0x4b,"%s: %s",uVar19,uVar18);
      }
      if (local_138 < local_140) {
        local_138 = local_140;
      }
      goto LAB_0040268d;
    }
  }
  piVar20 = __errno_location();
  *piVar20 = 0x4b;
LAB_004035fe:
  uVar18 = FUN_00406e40(0,3,DAT_0060e5f0);
  uVar19 = dcgettext(0,"%s: cannot determine file size",5);
  piVar20 = __errno_location();
                    /* WARNING: Subroutine does not return */
  error(1,*piVar20,uVar19,uVar18);
}


void FUN_00403be0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_retaddr;
  undefined auStack_8 [8];
  
  (*(code *)PTR___libc_start_main_0060dff0)
            (FUN_00401ea0,unaff_retaddr,&stack0x00000008,FUN_00409890,FUN_004098f0,param_3,auStack_8
            );
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* WARNING: Removing unreachable block (ram,0x00403c18) */
/* WARNING: Removing unreachable block (ram,0x00403c22) */

void FUN_00403c0b(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00403c59) */

void FUN_00403c2a(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00403c96) */

void FUN_00403c61(void)

{
  if (DAT_0060e508 != '\0') {
    return;
  }
  FUN_00403c0b();
  DAT_0060e508 = 1;
  return;
}


/* WARNING: Removing unreachable block (ram,0x00403c59) */

void thunk_FUN_00403c2a(void)

{
  return;
}


void FUN_00403cc0(void)

{
  ulong uVar1;
  undefined *puVar2;
  char cVar3;
  char cVar4;
  size_t sVar5;
  size_t sVar6;
  void *__dest;
  char *pcVar7;
  void *pvVar8;
  long lVar9;
  size_t sVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  
  lVar9 = (long)DAT_0060e618;
  pcVar7 = DAT_0060e610;
  sVar10 = DAT_0060e608;
  plVar15 = DAT_0060e520;
  cVar4 = DAT_0060e2a0;
  puVar2 = PTR_s_abcdefghijklmnopqrstuvwxyz_0060e298;
  if (DAT_0060e618 != (void *)0x0) {
    lVar13 = DAT_0060e608 - 1;
    if (DAT_0060e608 != 0) {
      plVar12 = DAT_0060e520 + (DAT_0060e608 - 1);
      do {
        lVar14 = *plVar12 + 1;
        *plVar12 = lVar14;
        if ((lVar13 == 0) && (cVar4 != '\0')) {
          if (puVar2[*plVar15 + 1] == '\0') goto LAB_00403d80;
          cVar4 = puVar2[lVar14];
          *pcVar7 = cVar4;
          if (cVar4 != '\0') {
            return;
          }
          *plVar12 = 0;
          *pcVar7 = *puVar2;
          break;
        }
        cVar3 = puVar2[lVar14];
        pcVar7[lVar13] = cVar3;
        if (cVar3 != '\0') {
          return;
        }
        *plVar12 = 0;
        plVar12 = plVar12 + -1;
        pcVar7[lVar13] = *puVar2;
        lVar13 = lVar13 + -1;
      } while (lVar13 != -1);
    }
    uVar11 = dcgettext(0,"output file suffixes exhausted",5);
                    /* WARNING: Subroutine does not return */
    error(1,0,uVar11);
  }
LAB_00403d80:
  lVar13 = DAT_0060e538;
  if (DAT_0060e538 == 0) {
    sVar5 = strlen(DAT_0060e620);
    sVar6 = 0;
    DAT_0060e530 = sVar5;
    if (DAT_0060e5f8 != (char *)0x0) {
      sVar6 = strlen(DAT_0060e5f8);
    }
    DAT_0060e538 = sVar6 + sVar10 + sVar5;
    DAT_0060e528 = sVar6;
    if (DAT_0060e538 + 1U < sVar5) {
LAB_00403f6d:
                    /* WARNING: Subroutine does not return */
      FUN_004078e0();
    }
    __dest = (void *)FUN_004076f0(lVar9);
    sVar10 = DAT_0060e530;
    DAT_0060e618 = __dest;
    memcpy(__dest,DAT_0060e620,DAT_0060e530);
    pcVar7 = PTR_s_abcdefghijklmnopqrstuvwxyz_0060e298;
    plVar15 = DAT_0060e520;
  }
  else {
    DAT_0060e608 = sVar10 + 1;
    lVar14 = DAT_0060e538 + 2;
    uVar1 = DAT_0060e538 + 3;
    DAT_0060e538 = lVar14;
    if (uVar1 < DAT_0060e530) goto LAB_00403f6d;
    __dest = (void *)FUN_004076f0(lVar9);
    plVar15 = DAT_0060e520;
    pcVar7 = PTR_s_abcdefghijklmnopqrstuvwxyz_0060e298;
    sVar10 = DAT_0060e530 + 1;
    puVar2 = (undefined *)((long)__dest + DAT_0060e530);
    DAT_0060e530 = sVar10;
    DAT_0060e618 = __dest;
    *puVar2 = PTR_s_abcdefghijklmnopqrstuvwxyz_0060e298[*DAT_0060e520];
  }
  sVar5 = DAT_0060e608;
  DAT_0060e610 = (char *)((long)__dest + sVar10);
  pvVar8 = memset(DAT_0060e610,(int)*pcVar7,DAT_0060e608);
  if (DAT_0060e5f8 != (char *)0x0) {
    memcpy((void *)((long)pvVar8 + sVar5),DAT_0060e5f8,DAT_0060e528);
  }
  *(undefined *)((long)__dest + DAT_0060e538) = 0;
  free(plVar15);
  lVar9 = FUN_00407860(sVar5,8);
  pcVar7 = DAT_0060e600;
  DAT_0060e520 = (long *)lVar9;
  if (DAT_0060e600 != (char *)0x0) {
    if (lVar13 != 0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("! widen","src/split.c",0x198,"next_file_name");
    }
    sVar10 = strlen(DAT_0060e600);
    lVar14 = DAT_0060e608 * 8;
    memcpy((void *)((DAT_0060e608 - sVar10) + (long)DAT_0060e610),pcVar7,sVar10);
    lVar13 = sVar10 - 1;
    if (sVar10 != 0) {
      do {
        *(long *)(lVar14 + sVar10 * -8 + lVar9 + lVar13 * 8) = (long)(pcVar7[lVar13] + -0x30);
        lVar13 = lVar13 + -1;
      } while (lVar13 != -1);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00403fc0(char *param_1)

{
  int iVar1;
  __pid_t _Var2;
  int iVar3;
  char *__path;
  char *__arg;
  undefined8 uVar4;
  undefined8 uVar5;
  int *piVar6;
  ulong uVar7;
  long lVar8;
  undefined local_a8 [8];
  __ino_t local_a0;
  
  if (DAT_0060e760 == 0) {
    if (DAT_0060e542 != '\0') {
      uVar5 = FUN_00406d70(4,param_1);
      uVar4 = dcgettext(0,"creating file %s\n",5);
      __fprintf_chk(stdout,1,uVar4,uVar5);
    }
    iVar1 = FUN_00405210(param_1,0x41,0x1b6);
    if (-1 < iVar1) {
      iVar3 = __fxstat(1,iVar1,(stat *)local_a8);
      if (iVar3 != 0) {
        uVar5 = FUN_00406d70(4,param_1);
        uVar4 = dcgettext(0,"failed to stat %s",5);
        piVar6 = __errno_location();
                    /* WARNING: Subroutine does not return */
        error(1,*piVar6,uVar4,uVar5);
      }
      if ((_DAT_0060e568 == local_a0) && (_DAT_0060e560 == CONCAT44(local_a8._4_4_,local_a8._0_4_)))
      {
        uVar5 = FUN_00406d70(4,param_1);
        uVar4 = dcgettext(0,"%s would overwrite input; aborting",5);
                    /* WARNING: Subroutine does not return */
        error(1,0,uVar4,uVar5);
      }
      iVar3 = ftruncate(iVar1,0);
      if (iVar3 != 0) {
        uVar5 = FUN_00406e40(0,3,param_1);
        uVar4 = dcgettext(0,"%s: error truncating",5);
        piVar6 = __errno_location();
                    /* WARNING: Subroutine does not return */
        error(1,*piVar6,uVar4,uVar5);
      }
    }
  }
  else {
    __path = getenv("SHELL");
    if (__path == (char *)0x0) {
      __path = "/bin/sh";
    }
    iVar1 = setenv("FILE",param_1,1);
    if (iVar1 != 0) {
      uVar5 = dcgettext(0,"failed to set FILE environment variable",5);
      piVar6 = __errno_location();
                    /* WARNING: Subroutine does not return */
      error(1,*piVar6,uVar5);
    }
    if (DAT_0060e542 != '\0') {
      uVar5 = FUN_00406e40(0,3,param_1);
      uVar4 = dcgettext(0,"executing with FILE=%s\n",5);
      __fprintf_chk(stdout,1,uVar4,uVar5);
    }
    iVar1 = pipe((int *)local_a8);
    if (iVar1 != 0) {
      uVar5 = dcgettext(0,"failed to create pipe",5);
      piVar6 = __errno_location();
                    /* WARNING: Subroutine does not return */
      error(1,*piVar6,uVar5);
    }
    _Var2 = fork();
    if (_Var2 == 0) {
      uVar7 = 0;
      if (DAT_0060e740 != 0) {
        do {
          iVar1 = close(*(int *)(DAT_0060e750 + uVar7 * 4));
          if (iVar1 != 0) {
            uVar5 = dcgettext(0,"closing prior pipe",5);
            piVar6 = __errno_location();
                    /* WARNING: Subroutine does not return */
            error(1,*piVar6,uVar5);
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < DAT_0060e740);
      }
      iVar1 = close(local_a8._4_4_);
      piVar6 = __errno_location();
      if (iVar1 != 0) {
        uVar5 = dcgettext(0,"closing output pipe",5);
                    /* WARNING: Subroutine does not return */
        error(1,*piVar6,uVar5);
      }
      if (local_a8._0_4_ != 0) {
        iVar1 = dup2(local_a8._0_4_,0);
        if (iVar1 != 0) {
          uVar5 = dcgettext(0,"moving input pipe",5);
                    /* WARNING: Subroutine does not return */
          error(1,*piVar6,uVar5);
        }
        iVar1 = close(local_a8._0_4_);
        if (iVar1 != 0) {
          uVar5 = dcgettext(0,"closing input pipe",5);
                    /* WARNING: Subroutine does not return */
          error(1,*piVar6,uVar5);
        }
      }
      sigprocmask(2,(sigset_t *)&DAT_0060e6c0,(sigset_t *)0x0);
      lVar8 = DAT_0060e760;
      __arg = (char *)FUN_00405180(__path);
      execl(__path,__arg,&DAT_00409a3e,lVar8,0);
      uVar5 = dcgettext(0,"failed to run command: \"%s -c %s\"",5);
                    /* WARNING: Subroutine does not return */
      error(1,*piVar6,uVar5,__path,lVar8);
    }
    if (_Var2 == -1) {
      uVar5 = dcgettext(0,"fork system call failed",5);
      piVar6 = __errno_location();
                    /* WARNING: Subroutine does not return */
      error(1,*piVar6,uVar5);
    }
    iVar1 = close(local_a8._0_4_);
    if (iVar1 != 0) {
      uVar5 = dcgettext(0,"failed to close input pipe",5);
      piVar6 = __errno_location();
                    /* WARNING: Subroutine does not return */
      error(1,*piVar6,uVar5);
    }
    DAT_0060e758 = _Var2;
    if (DAT_0060e740 == DAT_0060e748) {
      if (DAT_0060e750 == 0) {
        if (DAT_0060e748 == 0) {
          lVar8 = 0x80;
          DAT_0060e748 = 0x20;
        }
        else {
          lVar8 = DAT_0060e748 << 2;
          if ((lVar8 < 0) || (DAT_0060e748 >> 0x3e != 0)) goto LAB_00404358;
        }
      }
      else {
        if (0x1555555555555554 < DAT_0060e748) {
LAB_00404358:
                    /* WARNING: Subroutine does not return */
          FUN_004078e0();
        }
        DAT_0060e748 = DAT_0060e748 + 1 + (DAT_0060e748 >> 1);
        lVar8 = DAT_0060e748 * 4;
      }
      DAT_0060e750 = FUN_004076f0(DAT_0060e750,lVar8);
    }
    lVar8 = DAT_0060e740 * 4;
    DAT_0060e740 = DAT_0060e740 + 1;
    *(int *)(DAT_0060e750 + lVar8) = local_a8._4_4_;
    iVar1 = local_a8._4_4_;
  }
  return iVar1;
}


undefined8 FUN_00404500(long param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  FILE *pFVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  bool bVar10;
  
  puVar9 = (undefined8 *)(param_2 * 0x20 + param_1);
  uVar6 = 0;
  if (-1 < *(int *)(puVar9 + 1)) {
    return 0;
  }
  lVar4 = param_2 + -1;
  if (param_2 == 0) {
    lVar4 = param_3 + -1;
  }
  uVar8 = *puVar9;
  if (*(int *)(puVar9 + 1) == -1) goto LAB_004045eb;
  do {
    iVar2 = FUN_00405210(uVar8,0xc01);
    while( true ) {
      if (-1 < iVar2) {
        *(int *)(puVar9 + 1) = iVar2;
        pFVar5 = fdopen(iVar2,"a");
        puVar9[2] = pFVar5;
        uVar1 = DAT_0060e758;
        if (pFVar5 != (FILE *)0x0) {
          DAT_0060e758 = 0;
          *(undefined4 *)(puVar9 + 3) = uVar1;
          return uVar6;
        }
        uVar6 = FUN_00406e40(0,3,*puVar9);
        piVar3 = __errno_location();
                    /* WARNING: Subroutine does not return */
        error(1,*piVar3,"%s",uVar6);
      }
      piVar3 = __errno_location();
      if (1 < *piVar3 - 0x17U) {
        uVar6 = FUN_00406e40(0,3,*puVar9);
                    /* WARNING: Subroutine does not return */
        error(1,*piVar3,"%s",uVar6);
      }
      while (puVar7 = (undefined8 *)(lVar4 * 0x20 + param_1), *(int *)(puVar7 + 1) < 0) {
        bVar10 = lVar4 == 0;
        lVar4 = lVar4 + -1;
        if (bVar10) {
          lVar4 = param_3 + -1;
        }
        if (lVar4 == param_2) {
          uVar6 = FUN_00406e40(0,3,*puVar9);
                    /* WARNING: Subroutine does not return */
          error(1,*piVar3,"%s",uVar6);
        }
      }
      iVar2 = FUN_00407e60(puVar7[2]);
      if (iVar2 != 0) {
        uVar6 = FUN_00406e40(0,3,*puVar7);
                    /* WARNING: Subroutine does not return */
        error(1,*piVar3,"%s",uVar6);
      }
      *(undefined4 *)(puVar7 + 1) = 0xfffffffe;
      iVar2 = *(int *)(puVar9 + 1);
      puVar7[2] = 0;
      uVar8 = *puVar9;
      uVar6 = 1;
      if (iVar2 != -1) break;
LAB_004045eb:
      iVar2 = FUN_00403fc0();
    }
  } while( true );
}


void FUN_004046f0(long param_1,int param_2,int param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  __pid_t _Var3;
  int *piVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  char cVar8;
  uint uVar9;
  uint local_4c;
  undefined local_48 [40];
  
  if (param_1 == 0) {
    if (param_2 < 0) goto LAB_004047a0;
    iVar2 = close(param_2);
    if (iVar2 < 0) {
      uVar5 = FUN_00406e40(0,3,param_4);
      piVar4 = __errno_location();
                    /* WARNING: Subroutine does not return */
      error(1,*piVar4,"%s",uVar5);
    }
  }
  else {
    iVar2 = FUN_00407e60();
    if ((iVar2 != 0) && ((piVar4 = __errno_location(), DAT_0060e760 == 0 || (*piVar4 != 0x20)))) {
      uVar5 = FUN_00406e40(0,3,param_4);
                    /* WARNING: Subroutine does not return */
      error(1,*piVar4,"%s",uVar5);
    }
    if (param_2 < 0) goto LAB_004047a0;
  }
  if (DAT_0060e740 != 0) {
    piVar4 = DAT_0060e750;
    if (param_2 != *DAT_0060e750) {
      lVar6 = 0;
      do {
        piVar4 = piVar4 + 1;
        if (DAT_0060e740 + -1 == lVar6) goto LAB_004047a0;
        lVar6 = lVar6 + 1;
      } while (*piVar4 != param_2);
    }
    DAT_0060e740 = DAT_0060e740 + -1;
    *piVar4 = DAT_0060e750[DAT_0060e740];
  }
LAB_004047a0:
  if (0 < param_3) {
    local_4c = 0;
    _Var3 = waitpid(param_3,(int *)&local_4c,0);
    if ((_Var3 == -1) && (piVar4 = __errno_location(), *piVar4 != 10)) {
      uVar5 = dcgettext(0,"waiting for child process",5);
                    /* WARNING: Subroutine does not return */
      error(1,*piVar4,uVar5);
    }
    uVar1 = local_4c;
    lVar6 = DAT_0060e760;
    uVar9 = local_4c & 0x7f;
    if ((char)((char)uVar9 + '\x01') < '\x02') {
      if (uVar9 != 0) {
        uVar5 = dcgettext(0,"unknown status from command (0x%X)",5);
                    /* WARNING: Subroutine does not return */
        error(1,0,uVar5,uVar1);
      }
      cVar8 = (char)(local_4c >> 8);
      if (cVar8 != '\0') {
        uVar5 = FUN_00406e40(0,3,param_4);
        uVar7 = dcgettext(0,"with FILE=%s, exit %d from command: %s",5);
                    /* WARNING: Subroutine does not return */
        error(cVar8,0,uVar7,uVar5,cVar8,lVar6);
      }
    }
    else if (uVar9 != 0xd) {
      iVar2 = FUN_00409040(uVar9,local_48);
      if (iVar2 != 0) {
        __sprintf_chk(local_48,1,0x13,&DAT_00409a90,uVar9);
      }
      lVar6 = DAT_0060e760;
      uVar5 = FUN_00406e40(0,3,param_4);
      uVar7 = dcgettext(0,"with FILE=%s, signal %s from command: %s",5);
                    /* WARNING: Subroutine does not return */
      error(uVar9 + 0x80,0,uVar7,uVar5,local_48,lVar6);
    }
  }
  return;
}


undefined8 FUN_004049a0(char param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  int *piVar2;
  undefined8 uVar3;
  
  if (param_1 != '\0') {
    if (((param_2 | param_3) == 0) && (DAT_0060e541 != '\0')) {
      return 1;
    }
    FUN_004046f0(0,DAT_0060e294,DAT_0060e758,DAT_0060e618);
    FUN_00403cc0();
    DAT_0060e294 = FUN_00403fc0(DAT_0060e618);
    if (DAT_0060e294 < 0) {
      uVar3 = FUN_00406e40(0,3,DAT_0060e618);
      piVar2 = __errno_location();
                    /* WARNING: Subroutine does not return */
      error(1,*piVar2,"%s",uVar3);
    }
  }
  uVar1 = FUN_004052d0(DAT_0060e294,param_2,param_3);
  if (uVar1 == param_3) {
    return 1;
  }
  piVar2 = __errno_location();
  if ((DAT_0060e760 != 0) && (*piVar2 == 0x20)) {
    return 0;
  }
  uVar3 = FUN_00406e40(0,3,DAT_0060e618);
                    /* WARNING: Subroutine does not return */
  error(1,*piVar2,"%s",uVar3);
}


void FUN_00404ab0(ulong param_1,long param_2,ulong param_3,ulong param_4,ulong param_5)

{
  __off_t _Var1;
  undefined8 uVar2;
  int *piVar3;
  bool bVar4;
  byte bVar5;
  long lVar6;
  ulong __offset;
  ulong uVar7;
  bool bVar8;
  
  uVar7 = 0;
  bVar5 = 1;
  bVar4 = true;
  __offset = param_1;
  if (param_4 == 0xffffffffffffffff) goto LAB_00404b84;
  bVar8 = param_4 < param_3;
  if (param_4 < param_1) goto LAB_00404bc6;
  do {
    lVar6 = param_2;
    do {
      bVar5 = bVar5 | bVar4;
      if (bVar5 != 0) {
        bVar5 = FUN_004049a0(bVar4,lVar6,__offset);
      }
      uVar7 = uVar7 + bVar4;
      bVar4 = uVar7 < param_5 || param_5 == 0;
      if ((uVar7 >= param_5 && param_5 != 0) && (bVar5 == 0)) {
        return;
      }
      param_4 = param_4 - __offset;
      lVar6 = lVar6 + __offset;
      __offset = param_1;
    } while (param_1 <= param_4);
    if (param_4 != 0) goto LAB_00404c00;
    while( true ) {
      if (bVar8) {
        if (param_5 <= uVar7) {
          return;
        }
        do {
          uVar7 = uVar7 + 1;
          FUN_004049a0(1,0,0);
        } while (param_5 != uVar7);
        return;
      }
LAB_00404b84:
      if ((bVar5 == 0) && (_Var1 = lseek(0,__offset,1), _Var1 != -1)) {
        bVar4 = true;
        __offset = param_1;
      }
      param_4 = FUN_00406fe0(0,param_2,param_3);
      if (param_4 == 0xffffffffffffffff) {
        uVar2 = FUN_00406e40(0,3,DAT_0060e5f0);
        piVar3 = __errno_location();
                    /* WARNING: Subroutine does not return */
        error(1,*piVar3,"%s",uVar2);
      }
      bVar8 = param_4 == 0;
      if (__offset <= param_4) break;
LAB_00404bc6:
      if (param_4 != 0) {
        lVar6 = param_2;
        if ((bVar5 | bVar4) == 0) {
          bVar5 = 0;
          bVar4 = param_5 == uVar7;
          if (bVar4) {
            return;
          }
        }
        else {
LAB_00404c00:
          bVar5 = FUN_004049a0(bVar4,lVar6,param_4);
          uVar7 = uVar7 + bVar4;
          bVar4 = (bool)(param_5 == uVar7 & (bVar5 ^ 1));
          if (bVar4 != false) {
            return;
          }
        }
        __offset = __offset - param_4;
      }
    }
  } while( true );
}


void FUN_00404cf0(int param_1)

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
  
  uVar5 = DAT_0060e778;
  bVar14 = 0;
  if (param_1 != 0) {
    uVar3 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(stderr,1,uVar3,uVar5);
    goto LAB_00404d2f;
  }
  uVar3 = dcgettext(0,"Usage: %s [OPTION]... [FILE [PREFIX]]\n",5);
  __printf_chk(1,uVar3,uVar5);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "Output pieces of FILE to PREFIXaa, PREFIXab, ...;\ndefault size is 1000 lines, and default PREFIX is \'x\'.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"\nWith no FILE, or when FILE is -, read standard input.\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nMandatory arguments to long options are mandatory for short options too.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  uVar5 = dcgettext(0,
                    "  -a, --suffix-length=N   generate suffixes of length N (default %d)\n      --additional-suffix=SUFFIX  append an additional SUFFIX to file names\n  -b, --bytes=SIZE        put SIZE bytes per output file\n  -C, --line-bytes=SIZE   put at most SIZE bytes of records per output file\n  -d                      use numeric suffixes starting at 0, not alphabetic\n      --numeric-suffixes[=FROM]  same as -d, but allow setting the start value\n  -x                      use hex suffixes starting at 0, not alphabetic\n      --hex-suffixes[=FROM]  same as -x, but allow setting the start value\n  -e, --elide-empty-files  do not generate empty output files with \'-n\'\n      --filter=COMMAND    write to shell COMMAND; file name is $FILE\n  -l, --lines=NUMBER      put NUMBER lines/records per output file\n  -n, --number=CHUNKS     generate CHUNKS output files; see explanation below\n  -t, --separator=SEP     use SEP instead of newline as the record separator;\n                            \'\\0\' (zero) specifies the NUL character\n  -u, --unbuffered        immediately copy input to output with \'-n r/...\'\n"
                    ,5);
  __fprintf_chk(stdout,1,uVar5,2);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --verbose           print a diagnostic just before each\n                            output file is opened\n"
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
                             "\nThe SIZE argument is an integer and optional unit (example: 10K is 10*1024).\nUnits are K,M,G,T,P,E,Z,Y (powers of 1024) or KB,MB,... (powers of 1000).\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nCHUNKS may be:\n  N       split into N files based on size of input\n  K/N     output Kth of N to stdout\n  l/N     split into N files without splitting lines/records\n  l/K/N   output Kth of N to stdout without splitting lines/records\n  r/N     like \'l\' but use round robin distribution\n  r/K/N   likewise but only output Kth of N to stdout\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  local_88 = &DAT_00409a99;
  local_80 = "test invocation";
  local_78[0] = (byte *)0x409b13;
  local_78[1] = (byte *)0x409aab;
  local_78[2] = (byte *)0x409ac1;
  local_78[3] = (byte *)0x409acb;
  local_78[4] = (byte *)0x409ada;
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
    pbVar10 = (byte *)"split";
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
        pcVar4 = "split";
        goto LAB_00405093;
      }
    }
    pcVar4 = "split";
    uVar5 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    pcVar8 = " invocation";
    __printf_chk(1,uVar5,"https://www.gnu.org/software/coreutils/","split");
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar8 = setlocale(5,(char *)0x0);
    if (pcVar8 != (char *)0x0) {
      iVar2 = strncmp(pcVar8,"en_",3);
      if (iVar2 != 0) {
LAB_00405093:
        uVar5 = dcgettext(0,"Report %s translation bugs to <https://translationproject.org/team/>\n"
                          ,5);
        __printf_chk(1,uVar5,"split");
      }
    }
    pcVar8 = " invocation";
    uVar5 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    __printf_chk(1,uVar5,"https://www.gnu.org/software/coreutils/","split");
    if (pcVar4 != "split") {
      pcVar8 = "";
    }
  }
  uVar5 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(1,uVar5,pcVar4,pcVar8);
LAB_00404d2f:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}


void FUN_004050c0(undefined8 param_1)

{
  DAT_0060e770 = param_1;
  return;
}


void FUN_004050d0(undefined param_1)

{
  DAT_0060e768 = param_1;
  return;
}


void FUN_004050e0(void)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  iVar1 = FUN_00409110(stdout);
  if (iVar1 != 0) {
    piVar2 = __errno_location();
    if ((DAT_0060e768 == '\0') || (*piVar2 != 0x20)) {
      uVar3 = dcgettext(0,"write error",5);
      if (DAT_0060e770 != 0) {
        uVar4 = FUN_00406e10();
                    /* WARNING: Subroutine does not return */
        error(0,*piVar2,"%s: %s",uVar4,uVar3);
      }
                    /* WARNING: Subroutine does not return */
      error(0,*piVar2,"%s",uVar3);
    }
  }
  iVar1 = FUN_00409110(stderr);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  _exit(DAT_0060e2b0);
}


char * FUN_00405180(char *param_1)

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


void FUN_004051e0(char *param_1)

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


void FUN_00405210(char *param_1,uint param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 & 0x40) != 0) {
    uVar2 = param_3 & 0xffffffff;
  }
  iVar1 = open(param_1,param_2,uVar2);
  FUN_004070a0(iVar1);
  return;
}


int FUN_00405260(int param_1,char *param_2,int param_3,uint param_4)

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


long FUN_004052d0(undefined4 param_1,long param_2,long param_3)

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
      lVar1 = FUN_00407040(param_1,param_2,param_3);
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


char * FUN_00405350(ulong param_1,long param_2)

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


void FUN_004053a0(byte *param_1)

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
        pbVar6 = &DAT_0040ad08;
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
  DAT_0060e778 = param_1;
  program_invocation_name = param_1;
  return;
}


char * FUN_00405440(char *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  byte *pbVar3;
  
  pcVar2 = (char *)dcgettext(0,param_1,5);
  if (param_1 == pcVar2) {
    pbVar3 = (byte *)FUN_004091d0();
    if ((*pbVar3 & 0xdf) == 0x55) {
      if (((((pbVar3[1] & 0xdf) != 0x54) || ((pbVar3[2] & 0xdf) != 0x46)) || (pbVar3[3] != 0x2d)) ||
         ((pbVar3[4] != 0x38 || (pbVar3[5] != 0)))) {
LAB_00405518:
        pcVar2 = "\"";
        if (param_2 != 9) {
          pcVar2 = "\'";
        }
        return pcVar2;
      }
      cVar1 = *pcVar2;
      pcVar2 = &DAT_0040ad19;
      if (cVar1 != '`') {
        pcVar2 = &DAT_0040ad0e;
      }
    }
    else {
      if (((((*pbVar3 & 0xdf) != 0x47) || ((pbVar3[1] & 0xdf) != 0x42)) || (pbVar3[2] != 0x31)) ||
         (((pbVar3[3] != 0x38 || (pbVar3[4] != 0x30)) ||
          ((pbVar3[5] != 0x33 || ((pbVar3[6] != 0x30 || (pbVar3[7] != 0)))))))) goto LAB_00405518;
      cVar1 = *pcVar2;
      pcVar2 = &DAT_0040ad15;
      if (cVar1 != '`') {
        pcVar2 = &DAT_0040ad12;
      }
    }
  }
  return pcVar2;
}


ulong FUN_00405540(undefined *param_1,ulong param_2,char *param_3,ulong param_4,int param_5,
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
LAB_00406191:
    if (param_2 != 0) {
      bVar3 = false;
      local_5b = false;
      bVar2 = true;
      local_70 = 0;
      goto LAB_00405dc6;
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
      goto LAB_00406191;
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
      param_8 = (char *)FUN_00405440(&DAT_0040ad1d,param_5);
      param_9 = (char *)FUN_00405440(&DAT_0040c26f);
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
LAB_004055d8:
  uVar22 = 0;
  bVar5 = local_5b;
LAB_004055e8:
  bVar23 = param_4 != uVar22;
  if (param_4 == 0xffffffffffffffff) {
    bVar23 = param_3[uVar22] != '\0';
  }
  bVar26 = bVar6;
  if (!bVar23) goto LAB_00405d68;
  bVar20 = (bool)(param_5 != 2 & bVar6);
  __s1 = (byte *)(param_3 + uVar22);
  uVar16 = uVar15;
  bVar4 = bVar3;
  if (bVar20) {
    if (local_a0 == 0) {
LAB_00405ce0:
      uVar19 = (ulong)*__s1;
      switch(uVar19) {
      case 0:
        goto switchD_00405cf2_caseD_0;
      default:
        bVar20 = false;
        goto switchD_00405b5e_caseD_1;
      case 7:
        bVar17 = 0x61;
        goto LAB_004059f5;
      case 8:
        bVar17 = 0x62;
        break;
      case 9:
switchD_00405cf2_caseD_9:
        bVar17 = 0x74;
        break;
      case 10:
switchD_00405cf2_caseD_a:
        bVar17 = 0x6e;
        break;
      case 0xb:
switchD_00405cf2_caseD_b:
        bVar17 = 0x76;
        goto LAB_004059f5;
      case 0xc:
switchD_00405cf2_caseD_c:
        bVar17 = 0x66;
LAB_004059f5:
        if (local_5c) {
          bVar25 = false;
          goto LAB_00405948;
        }
LAB_00405a00:
        bVar23 = false;
        goto LAB_004057bb;
      case 0xd:
        bVar20 = false;
switchD_004056d8_caseD_d:
        bVar25 = param_5 == 2;
        uVar19 = 0xd;
        bVar13 = 0x72;
        goto LAB_00405910;
      case 0x20:
        bVar25 = false;
LAB_00405d3a:
        uVar19 = 0x20;
        goto LAB_00405d02;
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
switchD_004056d8_caseD_21:
        bVar25 = false;
        goto LAB_0040591b;
      case 0x23:
      case 0x7e:
        bVar26 = false;
LAB_00405d1a:
        if (uVar22 == 0) {
          bVar25 = false;
          bVar23 = bVar20;
          bVar20 = bVar26;
          goto LAB_00405728;
        }
        bVar23 = false;
        goto LAB_0040573f;
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
LAB_00405d02:
        bVar24 = false;
        bVar23 = bVar20;
        bVar20 = bVar25;
        goto LAB_00405741;
      case 0x27:
        bVar20 = false;
        goto switchD_00405b5e_caseD_27;
      case 0x3f:
        bVar20 = false;
        goto switchD_00405b5e_caseD_3f;
      case 0x5c:
        bVar20 = false;
        goto switchD_004056d8_caseD_5c;
      case 0x7b:
      case 0x7d:
        bVar20 = false;
        goto switchD_00405b5e_caseD_7b;
      }
      bVar25 = false;
      bVar23 = false;
      goto joined_r0x00405937;
    }
    if ((param_4 == 0xffffffffffffffff) && (1 < local_a0)) {
      param_4 = strlen(param_3);
    }
    if ((param_4 < uVar22 + local_a0) || (iVar7 = memcmp(__s1,local_78,local_a0), iVar7 != 0))
    goto LAB_00405ce0;
    if (!local_5c) {
      uVar19 = (ulong)*__s1;
      bVar25 = bVar20;
      switch(uVar19) {
      case 0:
        goto switchD_004056d8_caseD_0;
      default:
        goto switchD_00405b5e_caseD_1;
      case 7:
        bVar17 = 0x61;
        goto LAB_00405a00;
      case 8:
        bVar25 = false;
        bVar23 = false;
        bVar17 = 0x62;
        break;
      case 9:
        goto switchD_00405cf2_caseD_9;
      case 10:
        goto switchD_00405cf2_caseD_a;
      case 0xb:
        goto switchD_00405cf2_caseD_b;
      case 0xc:
        goto switchD_00405cf2_caseD_c;
      case 0xd:
        goto switchD_004056d8_caseD_d;
      case 0x20:
        goto LAB_00405d3a;
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
        goto switchD_004056d8_caseD_21;
      case 0x23:
      case 0x7e:
        bVar26 = bVar20;
        goto LAB_00405d1a;
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
        goto LAB_00405d02;
      case 0x27:
        goto switchD_00405b5e_caseD_27;
      case 0x3f:
        goto switchD_00405b5e_caseD_3f;
      case 0x5c:
        goto switchD_004056d8_caseD_5c;
      case 0x7b:
      case 0x7d:
        goto switchD_00405b5e_caseD_7b;
      }
      goto LAB_00405782;
    }
    goto LAB_0040595a;
  }
  uVar19 = (ulong)*__s1;
  switch(uVar19) {
  case 0:
    if (bVar6) {
switchD_00405cf2_caseD_0:
      if (!local_5c) {
        bVar20 = false;
switchD_004056d8_caseD_0:
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
            goto LAB_00405838;
          }
LAB_00405a7a:
          param_1[uVar16] = 0x5c;
          uVar15 = uVar16;
        }
        else if (uVar15 < uVar9) goto LAB_00405a7a;
        uVar16 = uVar15 + 1;
        bVar24 = bVar23;
        if (param_5 == 2) {
          bVar17 = 0x30;
          bVar23 = false;
          bVar4 = bVar3;
          goto LAB_00405838;
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
LAB_00405ab9:
        bVar17 = (byte)uVar19;
        bVar23 = false;
        uVar15 = uVar16;
        bVar4 = bVar3;
        if ((bool)(bVar6 ^ 1U | bVar26)) goto LAB_00405838;
        goto LAB_00405741;
      }
      bVar26 = param_5 == 2;
      goto LAB_0040594c;
    }
    if ((param_6 & 1) == 0) {
      bVar25 = param_5 == 2;
      uVar19 = 0;
      bVar23 = false;
      bVar20 = false;
      goto LAB_00405728;
    }
    uVar22 = uVar22 + 1;
    goto LAB_004055e8;
  default:
switchD_00405b5e_caseD_1:
    bVar25 = bVar6;
    if (sVar8 != 1) {
      local_40[0] = (mbstate_t)0x0;
      if (param_4 == 0xffffffffffffffff) {
        param_4 = strlen(param_3);
      }
      uVar21 = 0;
      do {
        uVar1 = uVar22 + uVar21;
        lVar11 = FUN_00408d50(&local_44,param_3 + uVar1,param_4 - uVar1,local_40);
        if (lVar11 == 0) break;
        if (lVar11 == -1) {
          bVar23 = false;
          goto LAB_0040646a;
        }
        if (lVar11 == -2) {
          if ((param_4 <= uVar1) || (param_3[uVar1] == '\0')) goto LAB_004065a7;
          goto LAB_00406597;
        }
        if (((param_5 == 2) && (local_5c)) && (lVar11 != 1)) {
          pcVar12 = param_3 + uVar1 + 1;
          do {
            if (((byte)(*pcVar12 + 0xa5U) < 0x22) &&
               ((1L << (*pcVar12 + 0xa5U & 0x3f) & 0x20000002bU) != 0)) {
              param_5 = 2;
              goto LAB_0040594c;
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
      goto LAB_0040646a;
    }
    ppuVar10 = __ctype_b_loc();
    uVar21 = 1;
    bVar25 = ((*ppuVar10)[uVar19] & 0x4000) == 0;
    bVar23 = !bVar25;
    bVar25 = (bool)(bVar25 & bVar6);
    goto LAB_00405b34;
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
    goto LAB_00405b72;
  case 10:
    uVar19 = 10;
    bVar13 = 0x6e;
    goto LAB_00405b72;
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
LAB_00405b72:
    bVar25 = param_5 == 2;
    bVar20 = (bool)(local_5c & bVar25);
    if (bVar20) {
LAB_00405b8a:
      param_5 = 2;
      goto LAB_0040594c;
    }
    break;
  case 0x20:
    uVar19 = 0x20;
    goto LAB_00405716;
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
LAB_00405716:
    bVar25 = param_5 == 2;
    if ((local_5c) && (bVar25)) goto LAB_00405b8a;
    goto LAB_00405728;
  case 0x23:
  case 0x7e:
LAB_0040570d:
    bVar25 = param_5 == 2;
    if (uVar22 == 0) goto LAB_00405716;
    goto LAB_0040591b;
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
    goto switchD_00405b5e_caseD_25;
  case 0x27:
switchD_00405b5e_caseD_27:
    bVar5 = bVar23;
    if (param_5 != 2) {
      bVar25 = false;
      uVar19 = 0x27;
      goto LAB_00405728;
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
      goto LAB_00405838;
    }
    goto LAB_0040594c;
  case 0x3f:
switchD_00405b5e_caseD_3f:
    if (param_5 == 2) {
      if (!local_5c) {
        bVar17 = 0x3f;
        bVar24 = false;
        bVar23 = false;
        goto LAB_00405838;
      }
      goto LAB_0040594c;
    }
    if (param_5 != 5) {
      bVar25 = param_5 == 2;
      uVar19 = 0x3f;
      bVar23 = false;
      goto LAB_00405728;
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
        goto LAB_00405ab9;
      }
      goto LAB_0040595a;
    }
    bVar25 = false;
    uVar19 = 0x3f;
    bVar23 = false;
    goto LAB_00405728;
  case 0x5c:
    if (param_5 != 2) {
switchD_004056d8_caseD_5c:
      uVar19 = 0x5c;
      bVar17 = 0x5c;
      bVar13 = 0x5c;
      bVar25 = (bool)(bVar6 & local_5c & local_a0 != 0);
      if (!bVar25) break;
      uVar22 = uVar22 + 1;
      bVar23 = false;
      goto LAB_00405854;
    }
    if (local_5c) goto LAB_0040594c;
    uVar22 = uVar22 + 1;
    bVar23 = false;
    bVar17 = 0x5c;
    goto LAB_00405854;
  case 0x7b:
  case 0x7d:
switchD_00405b5e_caseD_7b:
    bVar24 = param_4 != 1;
    if (param_4 == 0xffffffffffffffff) {
      bVar24 = param_3[1] != '\0';
    }
    bVar25 = param_5 == 2;
    if (!bVar24) goto LAB_0040570d;
    goto LAB_0040591b;
  }
LAB_00405910:
  if (!bVar6) {
LAB_0040591b:
    bVar23 = false;
    goto LAB_00405728;
  }
  bVar23 = false;
  bVar17 = bVar13;
  goto joined_r0x00405937;
LAB_00405d68:
  if ((uVar15 == 0) && ((bool)(local_5c & param_5 == 2))) {
    param_5 = 2;
LAB_0040594c:
    if (bVar26) {
      param_5 = 4;
    }
LAB_0040595a:
    uVar9 = FUN_00405540(param_1,uVar9,param_3,param_4,param_5,param_6 & 0xfffffffd,0,param_8,
                         param_9);
    return uVar9;
  }
  bVar26 = (bool)(param_5 == 2 & (local_5c ^ 1U));
  bVar23 = (bool)(local_5c ^ 1U);
  if ((!bVar26) || (bVar23 = bVar26, !bVar5)) {
LAB_0040663d:
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
    uVar9 = FUN_00405540(param_1,local_70,param_3,param_4,5,param_6,param_7,param_8,param_9);
    return uVar9;
  }
  local_5b = uVar9 == 0 && local_70 != 0;
  param_2 = local_70;
  bVar23 = bVar5;
  if (uVar9 != 0 || local_70 == 0) goto LAB_0040663d;
LAB_00405dc6:
  *param_1 = 0x27;
  param_5 = 2;
  uVar15 = 1;
  local_78 = "\'";
  local_a0 = 1;
  local_5c = false;
  uVar9 = param_2;
  goto LAB_004055d8;
  while (__s1[uVar21] != 0) {
LAB_00406597:
    uVar21 = uVar21 + 1;
    if (param_4 <= uVar22 + uVar21) break;
  }
LAB_004065a7:
  bVar23 = false;
LAB_0040646a:
  if (1 < uVar21) {
LAB_0040602e:
    bVar26 = false;
    uVar21 = uVar21 + uVar22;
    uVar16 = uVar22;
    do {
      bVar17 = (byte)uVar19;
      if (bVar25) {
        bVar26 = param_5 == 2;
        if (local_5c) goto LAB_0040594c;
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
        if (uVar21 <= uVar22) goto LAB_004057cd;
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
        if (uVar21 <= uVar22) goto LAB_00405854;
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
LAB_00405b34:
  if (bVar25) {
    bVar23 = false;
    bVar25 = bVar6;
    goto LAB_0040602e;
  }
switchD_00405b5e_caseD_25:
  bVar25 = param_5 == 2;
LAB_00405728:
  bVar17 = (byte)uVar19;
  bVar24 = (bool)((bVar6 ^ 1U | bVar25) ^ 1 | local_5c);
  bVar26 = bVar20;
  if (bVar24) {
LAB_0040573f:
    bVar24 = false;
    bVar20 = bVar26;
LAB_00405741:
    bVar17 = (byte)uVar19;
    uVar16 = uVar15;
    bVar4 = bVar3;
    if ((param_7 == 0) || ((*(uint *)(param_7 + (uVar19 >> 5) * 4) >> (bVar17 & 0x1f) & 1) == 0))
    goto LAB_00405838;
    bVar25 = param_5 == 2;
  }
  else {
LAB_00405838:
    bVar25 = param_5 == 2;
    uVar15 = uVar16;
    bVar3 = bVar4;
    if (!bVar20) {
      uVar22 = uVar22 + 1;
      bVar3 = (bool)((bVar24 ^ 1U) & bVar4);
LAB_00405854:
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
      goto LAB_004057cd;
    }
  }
joined_r0x00405937:
  if (local_5c) {
LAB_00405948:
    bVar26 = (bool)(bVar6 & bVar25);
    goto LAB_0040594c;
  }
LAB_00405782:
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
LAB_004057bb:
  if (uVar15 < uVar9) {
    param_1[uVar15] = 0x5c;
  }
  uVar15 = uVar15 + 1;
  uVar22 = uVar22 + 1;
  bVar4 = bVar3;
LAB_004057cd:
  bVar3 = bVar4;
  if (uVar15 < uVar9) {
    param_1[uVar15] = bVar17;
  }
  uVar15 = uVar15 + 1;
  if (!bVar23) {
    bVar2 = false;
  }
  goto LAB_004055e8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00406770(int param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

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
  puVar8 = (undefined4 *)PTR_DAT_0060e2f8;
  if (DAT_0060e310 <= param_1) {
    if (param_1 == 0x7fffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_004078e0();
    }
    if (PTR_DAT_0060e2f8 == &DAT_0060e300) {
      puVar8 = (undefined4 *)FUN_004076f0(0);
      uVar6 = PTR_DAT_0060e308._4_4_;
      uVar5 = PTR_DAT_0060e308._0_4_;
      uVar3 = _UNK_0060e304;
      PTR_DAT_0060e2f8 = (undefined *)puVar8;
      *puVar8 = _DAT_0060e300;
      puVar8[1] = uVar3;
      puVar8[2] = uVar5;
      puVar8[3] = uVar6;
    }
    else {
      puVar8 = (undefined4 *)FUN_004076f0(PTR_DAT_0060e2f8);
      PTR_DAT_0060e2f8 = (undefined *)puVar8;
    }
    memset(puVar8 + (long)DAT_0060e310 * 4,0,(long)((param_1 + 1) - DAT_0060e310) << 4);
    DAT_0060e310 = param_1 + 1;
  }
  uVar2 = param_4[1];
  puVar10 = (ulong *)(puVar8 + (long)param_1 * 4);
  uVar4 = *puVar10;
  __ptr = (undefined *)puVar10[1];
  uVar9 = FUN_00405540(__ptr,uVar4,param_2,param_3,*param_4,uVar2 | 1,param_4 + 2,
                       *(undefined8 *)(param_4 + 10),*(undefined8 *)(param_4 + 0xc));
  if (uVar4 <= uVar9) {
    uVar9 = uVar9 + 1;
    *puVar10 = uVar9;
    if (__ptr != &DAT_0060e780) {
      free(__ptr);
    }
    __ptr = (undefined *)FUN_00407690(uVar9);
    uVar3 = *param_4;
    puVar10[1] = (ulong)__ptr;
    FUN_00405540(__ptr,uVar9,param_2,param_3,uVar3,uVar2 | 1,param_4 + 2,
                 *(undefined8 *)(param_4 + 10),*(undefined8 *)(param_4 + 0xc));
  }
  *piVar7 = iVar1;
  return __ptr;
}


void FUN_00406910(undefined *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_0060e880;
  }
  FUN_00407890(param_1,0x38);
  *piVar2 = iVar1;
  return;
}


undefined4 FUN_00406950(undefined4 *param_1)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)&DAT_0060e880;
  }
  return *param_1;
}


void FUN_00406960(undefined4 *param_1,undefined4 param_2)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)&DAT_0060e880;
  }
  *param_1 = param_2;
  return;
}


uint FUN_00406970(undefined *param_1,byte param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_0060e880;
  }
  uVar1 = *(uint *)(param_1 + (ulong)(param_2 >> 5) * 4 + 8);
  uVar2 = uVar1 >> (param_2 & 0x1f);
  *(uint *)(param_1 + (ulong)(param_2 >> 5) * 4 + 8) =
       ((param_3 ^ uVar2) & 1) << (param_2 & 0x1f) ^ uVar1;
  return uVar2 & 1;
}


undefined4 FUN_004069b0(undefined *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_0060e880;
  }
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_1 + 4) = param_2;
  return uVar1;
}


void FUN_004069d0(undefined4 *param_1,long param_2,long param_3)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)&DAT_0060e880;
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


void FUN_00406a00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 *param_5)

{
  int iVar1;
  int *piVar2;
  
  if (param_5 == (undefined4 *)0x0) {
    param_5 = (undefined4 *)&DAT_0060e880;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  FUN_00405540(param_1,param_2,param_3,param_4,*param_5,param_5[1],param_5 + 2,
               *(undefined8 *)(param_5 + 10),*(undefined8 *)(param_5 + 0xc));
  *piVar2 = iVar1;
  return;
}


undefined8 FUN_00406a80(undefined8 param_1,undefined8 param_2,long *param_3,undefined4 *param_4)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  
  if (param_4 == (undefined4 *)0x0) {
    param_4 = (undefined4 *)&DAT_0060e880;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  uVar5 = (uint)(param_3 == (long *)0x0) | param_4[1];
  lVar3 = FUN_00405540(0,0,param_1,param_2,*param_4,uVar5,param_4 + 2,*(undefined8 *)(param_4 + 10),
                       *(undefined8 *)(param_4 + 0xc));
  uVar4 = FUN_00407690(lVar3 + 1);
  FUN_00405540(uVar4,lVar3 + 1,param_1,param_2,*param_4,uVar5,param_4 + 2,
               *(undefined8 *)(param_4 + 10),*(undefined8 *)(param_4 + 0xc));
  *piVar2 = iVar1;
  if (param_3 != (long *)0x0) {
    *param_3 = lVar3;
  }
  return uVar4;
}


void FUN_00406b70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00406a80(param_1,param_2,0,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406b80(void)

{
  void **ppvVar1;
  void *__ptr;
  undefined *__ptr_00;
  void **ppvVar2;
  
  __ptr_00 = PTR_DAT_0060e2f8;
  if (1 < DAT_0060e310) {
    ppvVar2 = (void **)(PTR_DAT_0060e2f8 + 0x18);
    ppvVar1 = (void **)(PTR_DAT_0060e2f8 + (ulong)(DAT_0060e310 - 2) * 0x10 + 0x28);
    do {
      __ptr = *ppvVar2;
      ppvVar2 = ppvVar2 + 2;
      free(__ptr);
    } while (ppvVar2 != ppvVar1);
  }
  if (*(undefined **)(__ptr_00 + 8) != &DAT_0060e780) {
    free(*(undefined **)(__ptr_00 + 8));
    _DAT_0060e300 = 0x100;
    PTR_DAT_0060e308 = &DAT_0060e780;
  }
  if (__ptr_00 != &DAT_0060e300) {
    free(__ptr_00);
    PTR_DAT_0060e2f8 = &DAT_0060e300;
  }
  DAT_0060e310 = 1;
  return;
}


void FUN_00406c20(undefined8 param_1,undefined8 param_2)

{
  FUN_00406770(param_1,param_2,0xffffffffffffffff,&DAT_0060e880);
  return;
}


void FUN_00406c40(void)

{
  FUN_00406770();
  return;
}


void FUN_00406c50(undefined8 param_1)

{
  FUN_00406770(0,param_1,0xffffffffffffffff,&DAT_0060e880);
  return;
}


void FUN_00406c70(undefined8 param_1,undefined8 param_2)

{
  FUN_00406770(0,param_1,param_2,&DAT_0060e880);
  return;
}


void FUN_00406c90(undefined8 param_1,int param_2,undefined8 param_3)

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
    FUN_00406770(param_1,param_3,0xffffffffffffffff,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00406d00(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

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
    FUN_00406770(param_1,param_3,param_4,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00406d70(undefined4 param_1,undefined8 param_2)

{
  FUN_00406c90(0,param_1,param_2);
  return;
}


void FUN_00406d80(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00406d00(0,param_1,param_2,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406d90(undefined8 param_1,undefined8 param_2,byte param_3)

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
  
  local_18 = DAT_0060e8b0;
  local_48 = _DAT_0060e880;
  uStack_40 = uRam000000000060e888;
  local_38 = _DAT_0060e890;
  uStack_30 = uRam000000000060e898;
  puVar1 = (uint *)((long)&uStack_40 + (ulong)(param_3 >> 5) * 4);
  local_28 = _DAT_0060e8a0;
  uStack_20 = uRam000000000060e8a8;
  uVar2 = *puVar1;
  *puVar1 = (~(uVar2 >> (param_3 & 0x1f)) & 1) << (param_3 & 0x1f) ^ uVar2;
  FUN_00406770(0,param_1,param_2,&local_48);
  return;
}


void FUN_00406e00(undefined8 param_1,char param_2)

{
  FUN_00406d90(param_1,0xffffffffffffffff,(int)param_2);
  return;
}


void FUN_00406e10(undefined8 param_1)

{
  FUN_00406d90(param_1,0xffffffffffffffff,0x3a);
  return;
}


void FUN_00406e30(undefined8 param_1,undefined8 param_2)

{
  FUN_00406d90(param_1,param_2,0x3a);
  return;
}


void FUN_00406e40(undefined8 param_1,int param_2,undefined8 param_3)

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
    FUN_00406770(param_1,param_3,0xffffffffffffffff,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406eb0(undefined8 param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5
                 )

{
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  long lStack_20;
  long local_18;
  
  uStack_40 = uRam000000000060e888;
  local_38 = _DAT_0060e890;
  uStack_30 = uRam000000000060e898;
  local_28 = _DAT_0060e8a0;
  lStack_20 = uRam000000000060e8a8;
  local_18 = DAT_0060e8b0;
  local_48 = CONCAT44((int)((ulong)_DAT_0060e880 >> 0x20),10);
  if ((param_2 != 0) && (param_3 != 0)) {
    lStack_20 = param_2;
    local_18 = param_3;
    FUN_00406770(param_1,param_4,param_5,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00406f20(void)

{
  FUN_00406eb0();
  return;
}


void FUN_00406f30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00406eb0(0,param_1,param_2,param_3,0xffffffffffffffff);
  return;
}


void FUN_00406f50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00406eb0(0,param_1,param_2,param_3,param_4);
  return;
}


void FUN_00406f70(void)

{
  FUN_00406770();
  return;
}


void FUN_00406f80(undefined8 param_1,undefined8 param_2)

{
  FUN_00406770(0,param_1,param_2,&DAT_0060e2c0);
  return;
}


void FUN_00406fa0(undefined8 param_1,undefined8 param_2)

{
  FUN_00406770(param_1,param_2,0xffffffffffffffff,&DAT_0060e2c0);
  return;
}


void FUN_00406fc0(undefined8 param_1)

{
  FUN_00406770(0,param_1,0xffffffffffffffff,&DAT_0060e2c0);
  return;
}


ssize_t FUN_00406fe0(int param_1,void *param_2,ulong param_3)

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


ssize_t FUN_00407040(int param_1,void *param_2,ulong param_3)

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


uint FUN_004070a0(uint param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  if (2 < param_1) {
    return param_1;
  }
  uVar2 = FUN_00409740();
  piVar3 = __errno_location();
  iVar1 = *piVar3;
  close(param_1);
  *piVar3 = iVar1;
  return uVar2;
}


undefined8
FUN_004070f0(FILE *param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5,
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
  uVar1 = dcgettext(0,&DAT_0040ba6b,5);
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
    goto LAB_0040736c;
  case 5:
    uVar1 = param_5[3];
    uVar4 = param_5[2];
    uVar5 = param_5[1];
    uVar6 = *param_5;
    uVar7 = dcgettext(0,"Written by %s, %s, %s,\n%s, and %s.\n",5);
LAB_0040736c:
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
    goto LAB_00407409;
  case 7:
    uVar1 = param_5[2];
    uVar4 = param_5[5];
    uVar5 = param_5[4];
    uVar6 = param_5[3];
    local_58 = param_5[1];
    uVar7 = *param_5;
    uVar3 = dcgettext(0,"Written by %s, %s, %s,\n%s, %s, %s, and %s.\n",5);
LAB_00407409:
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
    goto LAB_004071ea;
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
LAB_004071ea:
  uVar1 = __fprintf_chk(param_1,1,uVar3,uVar7,local_50,local_58,uVar6,uVar5,uVar4,uVar1,local_48);
  return uVar1;
}


void FUN_004074d0(void)

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
  FUN_004070f0();
  return;
}


void FUN_004074f0(void)

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
  FUN_004070f0();
  return;
}


void FUN_00407550(void)

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
  FUN_004070f0();
  return;
}


void FUN_00407610(void)

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


void FUN_00407690(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_004078e0();
  }
  return;
}


void FUN_004076b0(ulong param_1,ulong param_2)

{
  if ((-1 < SUB168(ZEXT816(param_1) * ZEXT816(param_2),0)) &&
     (SUB168(ZEXT816(param_1) * ZEXT816(param_2) >> 0x40,0) == 0)) {
    FUN_00407690();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004078e0();
}


void thunk_FUN_00407690(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_004078e0();
  }
  return;
}


void * FUN_004076f0(void *param_1,size_t param_2)

{
  void *pvVar1;
  
  if ((param_2 == 0) && (param_1 != (void *)0x0)) {
    free(param_1);
    return (void *)0x0;
  }
  pvVar1 = realloc(param_1,param_2);
  if ((pvVar1 == (void *)0x0) && (param_2 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_004078e0();
  }
  return pvVar1;
}


void FUN_00407730(undefined8 param_1,ulong param_2,ulong param_3)

{
  if ((-1 < SUB168(ZEXT816(param_2) * ZEXT816(param_3),0)) &&
     (SUB168(ZEXT816(param_2) * ZEXT816(param_3) >> 0x40,0) == 0)) {
    FUN_004076f0();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004078e0();
}


void FUN_00407760(long param_1,ulong *param_2,ulong param_3)

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
    if ((SUB168(ZEXT816(uVar2) * ZEXT816(param_3),0) < 0) || (uVar3 != 0)) goto LAB_004077bb;
  }
  else {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x5555555555555554);
    uVar3 = SUB168(auVar1 % ZEXT816(param_3),0);
    if (SUB168(auVar1 / ZEXT816(param_3),0) <= uVar2) {
LAB_004077bb:
                    /* WARNING: Subroutine does not return */
      FUN_004078e0(param_1,param_2,uVar3);
    }
    uVar2 = (uVar2 >> 1) + 1 + uVar2;
  }
  *param_2 = uVar2;
  FUN_004076f0(param_1,uVar2 * param_3);
  return;
}


void FUN_004077f0(long param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (param_1 == 0) {
    if (uVar1 == 0) {
      *param_2 = 0x80;
      FUN_004076f0(0,0x80);
      return;
    }
    if ((long)uVar1 < 0) goto LAB_0040783a;
  }
  else {
    if (0x5555555555555553 < uVar1) {
LAB_0040783a:
                    /* WARNING: Subroutine does not return */
      FUN_004078e0();
    }
    uVar1 = (uVar1 >> 1) + 1 + uVar1;
  }
  *param_2 = uVar1;
  FUN_004076f0(param_1,uVar1);
  return;
}


void FUN_00407840(size_t param_1)

{
  void *__s;
  
  __s = (void *)FUN_00407690();
  memset(__s,0,param_1);
  return;
}


void FUN_00407860(size_t param_1,ulong param_2)

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
  FUN_004078e0();
}


void FUN_00407890(void *param_1,size_t param_2)

{
  void *__dest;
  
  __dest = (void *)FUN_00407690(param_2);
  memcpy(__dest,param_1,param_2);
  return;
}


void FUN_004078c0(char *param_1)

{
  void *__dest;
  size_t sVar1;
  
  sVar1 = strlen(param_1);
  __dest = (void *)FUN_00407690(sVar1 + 1);
  memcpy(__dest,param_1,sVar1 + 1);
  return;
}


void FUN_004078e0(void)

{
  undefined8 uVar1;
  
  uVar1 = dcgettext(0,"memory exhausted",5);
                    /* WARNING: Subroutine does not return */
  error(DAT_0060e2b0,0,"%s",uVar1);
}


ulong FUN_00407920(undefined8 param_1,undefined4 param_2,ulong param_3,ulong param_4,
                  undefined8 param_5,undefined8 param_6,int param_7)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  ulong local_40 [2];
  
  iVar1 = FUN_00407a20(param_1,0,param_2,local_40);
  if (iVar1 == 0) {
    if ((param_3 <= local_40[0]) && (local_40[0] <= param_4)) {
      return local_40[0];
    }
    piVar2 = __errno_location();
    *piVar2 = (-(uint)(local_40[0] < 0x40000000) & 0xffffffd7) + 0x4b;
  }
  else {
    piVar2 = __errno_location();
    if (iVar1 == 1) {
      *piVar2 = 0x4b;
    }
    else if (iVar1 == 3) {
      *piVar2 = 0;
    }
  }
  uVar3 = FUN_00406fc0(param_1);
  iVar1 = *piVar2;
  if (iVar1 == 0x16) {
    iVar1 = 0;
  }
  if (param_7 == 0) {
    param_7 = 1;
  }
                    /* WARNING: Subroutine does not return */
  error(param_7,iVar1,"%s: %s",param_6,uVar3);
}


void FUN_004079f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  FUN_00407920(param_1,10,param_2,param_3,param_4,param_5,param_6);
  return;
}


ulong FUN_00407a20(byte *param_1,byte **param_2,uint param_3,ulong *param_4,char *param_5)

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
    if ((param_5 == (char *)0x0) || (bVar12 = *pbVar5, bVar12 == 0)) goto LAB_00407ac2;
    pcVar7 = strchr(param_5,(int)(char)bVar12);
    if (pcVar7 == (char *)0x0) goto switchD_00407bac_caseD_1;
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
        goto LAB_00407b9a;
      }
      if (bVar1 != 0x42) {
                    /* WARNING: Could not recover jumptable at 0x00407b81. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar6 = (*(code *)(&PTR_LAB_0040be38)[bVar8])();
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
LAB_00407b9a:
  iVar10 = (int)uVar11;
  switch(bVar12 - 0x42 & 0xff) {
  case 0:
    if (uVar6 >> 0x36 == 0) {
      uVar6 = uVar6 << 10;
      break;
    }
    goto LAB_00407c07;
  default:
switchD_00407bac_caseD_1:
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
    goto LAB_00407c94;
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
    goto joined_r0x00407bcc;
  case 0xb:
  case 0x2b:
    auVar2 = ZEXT816(uVar6) * ZEXT816((ulong)(long)iVar10);
    if (SUB168(auVar2 >> 0x40,0) != 0) goto LAB_00407c07;
    auVar2 = (auVar2 & (undefined  [16])0xffffffffffffffff) * ZEXT816((ulong)(long)iVar10);
joined_r0x00407bcc:
    uVar6 = SUB168(auVar2,0);
    if (SUB168(auVar2 >> 0x40,0) != 0) {
LAB_00407c07:
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
    goto LAB_00407c94;
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
    goto LAB_00407c94;
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
    goto LAB_00407c94;
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
LAB_00407c94:
    uVar14 = (ulong)(uVar13 | uVar9);
    break;
  case 0x20:
    if (uVar6 >> 0x37 != 0) goto LAB_00407c07;
    uVar6 = uVar6 << 9;
    break;
  case 0x21:
    break;
  case 0x35:
    if ((long)uVar6 < 0) goto LAB_00407c07;
    uVar6 = uVar6 * 2;
  }
  *param_2 = pbVar5 + iVar15;
  if (pbVar5[iVar15] != 0) {
    uVar14 = (ulong)((uint)uVar14 | 2);
  }
LAB_00407ac2:
  *param_4 = uVar6;
  return uVar14;
}


int FUN_00407e60(FILE *param_1)

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
      if (_Var4 == -1) goto LAB_00407ec7;
    }
    iVar1 = FUN_00407ee0(param_1);
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
LAB_00407ec7:
  iVar1 = fclose(param_1);
  return iVar1;
}


void FUN_00407ee0(FILE *param_1)

{
  int iVar1;
  
  if (param_1 != (FILE *)0x0) {
    iVar1 = __freading();
    if ((iVar1 != 0) && ((param_1->_flags & 0x100U) != 0)) {
      FUN_00407f20(param_1,0,1);
      fflush(param_1);
      return;
    }
  }
  fflush(param_1);
  return;
}


ulong FUN_00407f20(FILE *param_1,__off_t param_2,int param_3)

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


void FUN_00407f80(long param_1,int *param_2)

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
      if (iVar3 <= iVar8) goto LAB_00407ffc;
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
      if (iVar9 <= iVar3) goto LAB_00407ffc;
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
LAB_00407ffc:
  param_2[0xc] = iVar2;
  param_2[0xb] = iVar1 + (iVar2 - iVar3);
  return;
}


int FUN_00408060(int param_1,undefined8 *param_2,char *param_3,char **param_4,undefined4 *param_5,
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
      if ((iVar5 == 0) && (sVar7 = strlen(__s1_00), sVar7 == sVar15)) goto LAB_00408280;
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
            if (local_70 == (char *)0x0) goto LAB_004081c0;
          }
          else if (local_70 == (char *)0x0) {
            local_70 = (char *)calloc((long)iVar5,1);
            if (local_70 == (char *)0x0) {
              bVar3 = true;
              goto LAB_004081c0;
            }
            bVar4 = true;
            local_70[(int)local_44] = '\x01';
          }
          local_70[lVar16] = '\x01';
        }
      }
LAB_004081c0:
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
              __fprintf_chk(__stream,1,&DAT_0040c269,param_9,*param_4);
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
LAB_00408280:
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


uint FUN_00408680(uint param_1,undefined8 *param_2,char *param_3,long param_4,undefined8 param_5,
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
LAB_004086ca:
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
          goto LAB_004087cd;
        }
        pbVar8 = *(byte **)(param_7 + 8);
      }
      param_7[10] = 0;
    }
LAB_004087cd:
    param_7[6] = 1;
    cVar2 = *param_3;
LAB_004087d8:
    if (cVar2 == ':') {
      uVar3 = 0;
    }
    if (pbVar8 == (byte *)0x0) goto LAB_00408748;
LAB_004087ec:
    if (*pbVar8 == 0) goto LAB_00408748;
  }
  else {
    if (param_7[6] == 0) goto LAB_004086ca;
    cVar2 = *param_3;
    pbVar8 = *(byte **)(param_7 + 8);
    if ((cVar2 - 0x2bU & 0xfd) != 0) goto LAB_004087d8;
    pcVar4 = param_3 + 1;
    param_3 = param_3 + 1;
    if (*pcVar4 == ':') {
      uVar3 = 0;
    }
    if (pbVar8 != (byte *)0x0) goto LAB_004087ec;
LAB_00408748:
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
        FUN_00407f80(param_2,param_7);
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
LAB_004088b6:
      if (uVar11 != param_1) {
        *param_7 = uVar11;
      }
      return 0xffffffff;
    }
    lVar6 = 3;
    pbVar8 = (byte *)param_2[(int)uVar11];
    pbVar9 = pbVar8;
    pbVar10 = &DAT_0040c281;
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
          FUN_00407f80(param_2,param_7);
          uVar11 = param_7[0xb];
        }
      }
      param_7[0xc] = param_1;
      *param_7 = param_1;
      goto LAB_004088b6;
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
        puVar15 = &DAT_0040c281;
        goto LAB_00408a15;
      }
      if ((int)param_6 != 0) {
        if (pbVar8[2] == 0) {
          pcVar4 = strchr(param_3,(int)(char)bVar14);
          param_6 = param_6 & 0xffffffff;
          if (pcVar4 != (char *)0x0) goto LAB_004089c0;
        }
        *(byte **)(param_7 + 8) = pbVar8 + 1;
        uVar11 = FUN_00408060(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar3,
                              &DAT_0040c282);
        if (uVar11 != 0xffffffff) {
          return uVar11;
        }
        pbVar8 = (byte *)param_2[(int)*param_7];
      }
    }
LAB_004089c0:
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
  puVar15 = &DAT_0040c2a0;
LAB_00408a15:
  uVar3 = FUN_00408060(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar3,puVar15);
  return uVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408c50(void)

{
  DAT_0060e8c0 = DAT_0060e31c;
  _DAT_0060e8c4 = DAT_0060e318;
  FUN_00408680();
  DAT_0060e31c = DAT_0060e8c0;
  DAT_0060e908 = DAT_0060e8d0;
  _DAT_0060e314 = DAT_0060e8c8;
  return;
}


void FUN_00408cb0(void)

{
  FUN_00408c50();
  return;
}


void FUN_00408cd0(void)

{
  FUN_00408c50();
  return;
}


void FUN_00408cf0(void)

{
  FUN_00408680();
  return;
}


void FUN_00408d10(void)

{
  FUN_00408c50();
  return;
}


void FUN_00408d30(void)

{
  FUN_00408680();
  return;
}


size_t FUN_00408d50(wchar_t *param_1,byte *param_2,size_t param_3,mbstate_t *param_4)

{
  char cVar1;
  size_t sVar2;
  wchar_t local_1c;
  
  if (param_2 == (byte *)0x0) {
    param_3 = 1;
    param_2 = (byte *)0x40c29f;
  }
  else {
    if (param_3 == 0) {
      return 0xfffffffffffffffe;
    }
    if (param_1 != (wchar_t *)0x0) goto LAB_00408d74;
  }
  param_1 = &local_1c;
LAB_00408d74:
  sVar2 = mbrtowc(param_1,(char *)param_2,param_3,param_4);
  if ((0xfffffffffffffffd < sVar2) && (cVar1 = FUN_00409170(0), cVar1 == '\0')) {
    sVar2 = 1;
    *param_1 = (uint)*param_2;
  }
  return sVar2;
}


ulong * FUN_00408dd0(ulong *param_1,char param_2,ulong param_3)

{
  char cVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  
  if (param_3 == 0) {
    return (ulong *)0x0;
  }
  if (((ulong)param_1 & 7) == 0) {
LAB_00408e10:
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
      if (((ulong)param_1 & 7) == 0) goto LAB_00408e10;
      cVar1 = *(char *)param_1;
    }
  }
  return param_1;
}


int FUN_00408ee0(byte *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  char *__s1;
  bool bVar8;
  bool bVar9;
  byte bVar10;
  char *local_30 [2];
  
  bVar10 = 0;
  __s1 = "HUP";
  uVar3 = 0;
  if ((int)(char)*param_1 - 0x30U < 10) {
    uVar3 = strtol((char *)param_1,local_30,10);
    if ((*local_30[0] == '\0') && ((long)uVar3 < 0x41)) {
LAB_00408f2e:
      *param_2 = (int)uVar3;
      return (int)uVar3 >> 0x1f;
    }
  }
  else {
    do {
      iVar1 = strcmp(__s1,(char *)param_1);
      if (iVar1 == 0) {
        uVar3 = (ulong)(uint)(&DAT_0060e320)[uVar3 * 3];
        goto LAB_00408f2e;
      }
      uVar5 = (int)uVar3 + 1;
      uVar3 = (ulong)uVar5;
      __s1 = __s1 + 0xc;
    } while (uVar5 != 0x23);
    iVar1 = __libc_current_sigrtmin();
    iVar2 = __libc_current_sigrtmax();
    bVar8 = false;
    bVar9 = iVar1 == 0;
    if (0 < iVar1) {
      lVar4 = 5;
      pbVar6 = param_1;
      pbVar7 = (byte *)"RTMIN";
      do {
        if (lVar4 == 0) break;
        lVar4 = lVar4 + -1;
        bVar8 = *pbVar6 < *pbVar7;
        bVar9 = *pbVar6 == *pbVar7;
        pbVar6 = pbVar6 + (ulong)bVar10 * -2 + 1;
        pbVar7 = pbVar7 + (ulong)bVar10 * -2 + 1;
      } while (bVar9);
      if ((!bVar8 && !bVar9) == bVar8) {
        lVar4 = strtol((char *)(param_1 + 5),local_30,10);
        if (((*local_30[0] == '\0') && (-1 < lVar4)) && (lVar4 <= iVar2 - iVar1)) {
          uVar3 = (ulong)(uint)((int)lVar4 + iVar1);
          goto LAB_00408f2e;
        }
        goto LAB_00408f60;
      }
    }
    bVar8 = false;
    bVar9 = iVar2 == 0;
    if (0 < iVar2) {
      lVar4 = 5;
      pbVar6 = param_1;
      pbVar7 = (byte *)"RTMAX";
      do {
        if (lVar4 == 0) break;
        lVar4 = lVar4 + -1;
        bVar8 = *pbVar6 < *pbVar7;
        bVar9 = *pbVar6 == *pbVar7;
        pbVar6 = pbVar6 + (ulong)bVar10 * -2 + 1;
        pbVar7 = pbVar7 + (ulong)bVar10 * -2 + 1;
      } while (bVar9);
      if ((((!bVar8 && !bVar9) == bVar8) &&
          (lVar4 = strtol((char *)(param_1 + 5),local_30,10), *local_30[0] == '\0')) &&
         ((iVar1 - iVar2 <= lVar4 && (lVar4 < 1)))) {
        uVar3 = (ulong)(uint)((int)lVar4 + iVar2);
        goto LAB_00408f2e;
      }
    }
  }
LAB_00408f60:
  *param_2 = -1;
  return -1;
}


int FUN_00409040(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  ulong uVar5;
  
  piVar3 = &DAT_0060e320;
  uVar5 = 0;
  do {
    if (*piVar3 == param_1) {
      strcpy((char *)param_2,&DAT_0060e324 + uVar5 * 0xc);
      return 0;
    }
    uVar4 = (int)uVar5 + 1;
    uVar5 = (ulong)uVar4;
    piVar3 = piVar3 + 3;
  } while (uVar4 != 0x23);
  iVar1 = __libc_current_sigrtmin();
  iVar2 = __libc_current_sigrtmax();
  if ((param_1 < iVar1) || (iVar2 < param_1)) {
    param_1 = -1;
  }
  else {
    if ((iVar2 - iVar1 >> 1) + iVar1 < param_1) {
      *param_2 = 0x414d5452;
      *(undefined2 *)(param_2 + 1) = 0x58;
      iVar1 = iVar2;
    }
    else {
      *param_2 = 0x494d5452;
      *(undefined2 *)(param_2 + 1) = 0x4e;
    }
    param_1 = param_1 - iVar1;
    if (param_1 != 0) {
      __sprintf_chk((long)param_2 + 5,1,0xffffffffffffffff,&DAT_0040c2b0,param_1);
      return 0;
    }
  }
  return param_1;
}


ulong FUN_00409110(uint *param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  
  lVar2 = __fpending();
  uVar1 = *param_1;
  uVar3 = FUN_00407e60(param_1);
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


bool FUN_00409170(int param_1)

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
    pbVar5 = &DAT_0040c2b4;
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

char * FUN_004091d0(void)

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
  if (DAT_0060e8f8 != (char *)0x0) goto LAB_0040920a;
  pcVar7 = getenv("CHARSETALIASDIR");
  if ((pcVar7 == (char *)0x0) || (*pcVar7 == '\0')) {
    sVar6 = 0x73;
    sVar5 = 0x65;
    __n = 100;
    pcVar7 = 
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib"
    ;
LAB_004092f5:
    __file = (char *)malloc(sVar6);
    if (__file != (char *)0x0) {
      memcpy(__file,pcVar7,__n);
      __file[__n] = '/';
      goto LAB_00409316;
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
        goto LAB_004092f5;
      }
      sVar6 = __n + 0xe;
    }
    __file = (char *)malloc(sVar6);
    if (__file != (char *)0x0) {
      memcpy(__file,pcVar7,__n);
      sVar5 = __n;
LAB_00409316:
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
LAB_004093b0:
          pbVar8 = (byte *)__stream->_IO_read_ptr;
          if (__stream->_IO_read_end <= pbVar8) goto LAB_0040953c;
          do {
            __stream->_IO_read_ptr = (char *)(pbVar8 + 1);
            uVar4 = (uint)*pbVar8;
            __ptr = pcVar7;
            while( true ) {
              pcVar7 = __ptr;
              if ((uVar4 - 9 < 2) || (uVar4 == 0x20)) goto LAB_004093b0;
              if (uVar4 == 0x23) goto LAB_004095a1;
              ungetc(uVar4,__stream);
              iVar2 = fscanf(__stream,"%50s %50s",&local_b8,&local_78);
              puVar13 = &local_b8;
              if (iVar2 < 2) goto LAB_0040954f;
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
                FUN_00407e60(__stream);
                goto LAB_00409354;
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
LAB_0040953c:
              uVar4 = __uflow(__stream);
              __ptr = pcVar7;
              if (uVar4 == 0xffffffff) goto LAB_0040954f;
            }
          } while( true );
        }
        close(iVar2);
      }
      goto LAB_0040934e;
    }
  }
  DAT_0060e8f8 = "";
LAB_0040920a:
  cVar1 = *DAT_0060e8f8;
  pcVar7 = DAT_0060e8f8;
  do {
    if (cVar1 == '\0') {
LAB_00409264:
      if (*__s1 == '\0') {
        __s1 = "ASCII";
      }
      return __s1;
    }
    iVar2 = strcmp(__s1,pcVar7);
    if ((iVar2 == 0) || ((cVar1 == '*' && (pcVar7[1] == '\0')))) {
      sVar6 = strlen(pcVar7);
      __s1 = pcVar7 + sVar6 + 1;
      goto LAB_00409264;
    }
    sVar6 = strlen(pcVar7);
    sVar5 = strlen(pcVar7 + sVar6 + 1);
    pcVar7 = pcVar7 + sVar6 + 1 + sVar5 + 1;
    cVar1 = *pcVar7;
  } while( true );
LAB_004095a1:
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
  if (uVar4 == 0xffffffff) goto LAB_0040954f;
  goto LAB_004093b0;
LAB_0040954f:
  FUN_00407e60(__stream);
  if (local_d0 == 0) {
LAB_0040934e:
    pcVar7 = "";
  }
  else {
    pcVar7[local_d0] = '\0';
  }
LAB_00409354:
  free(__file);
  DAT_0060e8f8 = pcVar7;
  goto LAB_0040920a;
}


void FUN_00409740(undefined8 param_1)

{
  FUN_00409750(param_1,0,3);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_00409750(ulong param_1,int param_2,ulong param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  
  if (param_2 != 0x406) {
    iVar1 = fcntl((int)param_1,param_2,param_3);
    return iVar1;
  }
  if (DAT_0060e900 < 0) {
    iVar1 = FUN_00409750(param_1,0,param_3 & 0xffffffff);
    if (iVar1 < 0) {
      return iVar1;
    }
    if (DAT_0060e900 != -1) {
      return iVar1;
    }
  }
  else {
    iVar1 = fcntl((int)param_1,0x406);
    if ((-1 < iVar1) || (piVar4 = __errno_location(), *piVar4 != 0x16)) {
      DAT_0060e900 = 1;
      return iVar1;
    }
    iVar1 = FUN_00409750(param_1 & 0xffffffff,0,param_3 & 0xffffffff);
    if (iVar1 < 0) {
      return iVar1;
    }
    DAT_0060e900 = -1;
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


/* WARNING: Removing unreachable block (ram,0x004098c3) */
/* WARNING: Removing unreachable block (ram,0x004098c8) */

void FUN_00409890(void)

{
  __DT_INIT();
  return;
}


void FUN_004098f0(void)

{
  return;
}


void FUN_00409900(undefined8 param_1)

{
  __cxa_atexit(param_1,0,DAT_0060e288);
  return;
}


undefined8 FUN_00409918(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code **ppcVar1;
  
  for (ppcVar1 = (code **)&DAT_0060de30; *ppcVar1 != (code *)0xffffffffffffffff;
      ppcVar1 = ppcVar1 + -1) {
    (**ppcVar1)();
  }
  return param_3;
}


void __DT_FINI(void)

{
  FUN_00403c61();
  return;
}

