
void FUN_00402f00(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00402f05(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00402f0a(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00402f0f(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void switchD_0040de50::caseD_b(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00402f19(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00402f1e(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00402f23(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00402f28(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00402f2d(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void switchD_00410cfa::caseD_0(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00402f37(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00402f50(ulong param_1,undefined8 *param_2)

{
  ushort uVar1;
  __int32_t *p_Var2;
  FILE *pFVar3;
  pthread_mutex_t *ppVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  lconv *plVar10;
  ushort **ppuVar11;
  __int32_t **pp_Var12;
  pthread_mutex_t *ppVar13;
  size_t sVar14;
  undefined *puVar15;
  long **__ptr;
  char *pcVar16;
  undefined8 *puVar17;
  ulong uVar18;
  long **pplVar19;
  undefined *puVar20;
  undefined8 uVar21;
  long *plVar22;
  _union_1454 _Var23;
  undefined8 uVar24;
  undefined8 uVar25;
  ulong uVar26;
  undefined **ppuVar27;
  long lVar28;
  pthread_mutex_t *ppVar29;
  void *__n;
  undefined **ppuVar30;
  pthread_mutex_t *ppVar31;
  pthread_mutex_t *extraout_RDX;
  long *plVar32;
  long **pplVar33;
  void **ppvVar34;
  long **pplVar35;
  byte bVar36;
  ulong *puVar37;
  byte *pbVar38;
  undefined *puVar39;
  pthread_mutex_t *in_R10;
  ushort *in_R11;
  ulong unaff_R12;
  void *pvVar40;
  void *pvVar41;
  long lVar42;
  long **pplVar43;
  void **ppvVar44;
  bool bVar45;
  undefined uVar46;
  bool bVar47;
  undefined uVar48;
  byte bVar49;
  double dVar50;
  double dVar51;
  undefined auVar52 [16];
  undefined8 local_388;
  long *local_380;
  pthread_mutex_t *local_378;
  pthread_mutex_t *local_370;
  pthread_mutex_t *local_368;
  _union_1454 local_360;
  undefined8 local_358;
  char *local_350;
  long *local_348;
  undefined8 local_340;
  _union_1454 local_338;
  pthread_mutex_t *local_330;
  long **local_328;
  byte *local_320;
  undefined local_2f8 [48];
  undefined local_2c8 [16];
  ulong local_2b8;
  long **local_2b0;
  void *local_2a8;
  char local_298;
  ulong local_288;
  ulong local_280;
  long local_278;
  long local_270 [4];
  undefined local_24f;
  undefined8 local_238;
  undefined local_230 [16];
  undefined local_220 [16];
  undefined local_210 [16];
  undefined local_200 [16];
  undefined local_1e8 [16];
  __nlink_t local_1d8;
  uint local_1d0;
  __uid_t _Stack_1cc;
  ulong local_1b8;
  undefined local_158 [12];
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined local_100 [16];
  undefined local_f0 [16];
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  int local_d0;
  
  bVar49 = 0;
  puVar15 = (undefined *)(param_1 & 0xffffffff);
  local_350 = getenv("POSIXLY_CORRECT");
  uVar18 = unaff_R12 & 0xffffffffffffff00 | (ulong)(local_350 != (char *)0x0);
  iVar7 = FUN_0040dbe0();
  local_380 = (long *)((ulong)local_380 & 0xffffffffffffff00 | (ulong)(0x2b8 < iVar7 - 0x30db0U));
  FUN_0040dc60(*param_2);
  local_360.sa_handler = (__sighandler_t)setlocale(6,"");
  bindtextdomain("coreutils",
                 "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale"
                );
  textdomain("coreutils");
  DAT_0061c518 = 2;
  DAT_0061cba1 = FUN_0040bd10(3);
  cVar5 = FUN_0040bd10(2);
  DAT_0061cba0 = cVar5;
  plVar10 = localeconv();
  bVar36 = *plVar10->decimal_point;
  DAT_0061cba8 = (uint)bVar36;
  if ((bVar36 == 0) || (plVar10->decimal_point[1] != 0)) {
    DAT_0061cba8 = 0x2e;
  }
  bVar36 = *plVar10->thousands_sep;
  DAT_0061cba4 = (uint)bVar36;
  if ((bVar36 == 0) || (plVar10->thousands_sep[1] != 0)) {
    DAT_0061cba4 = 0xffffffff;
  }
  DAT_0061c758 = '\0';
  ppuVar11 = __ctype_b_loc();
  pp_Var12 = __ctype_toupper_loc();
  puVar39 = (undefined *)0x1;
  lVar42 = 0;
LAB_004030bd:
  do {
    uVar46 = 1;
    uVar1 = (*ppuVar11)[lVar42];
    if ((uVar1 & 1) == 0) {
      if (lVar42 == 10) {
        DAT_0061ca8a = 1;
        DAT_0061c88a = 0;
        DAT_0061c98a = ((byte)((*ppuVar11)[10] >> 0xe) ^ 1) & 1;
        DAT_0061c78a = (undefined)(*pp_Var12)[10];
        lVar42 = 0xb;
        goto LAB_004030bd;
      }
      uVar46 = 0;
    }
    (&DAT_0061ca80)[lVar42] = uVar46;
    (&DAT_0061c980)[lVar42] = ((byte)(uVar1 >> 0xe) ^ 1) & 1;
    bVar36 = 0;
    if ((uVar1 & 8) == 0) {
      bVar36 = ((byte)uVar1 & 1 | lVar42 == 10) ^ 1;
    }
    p_Var2 = *pp_Var12;
    (&DAT_0061c880)[lVar42] = bVar36;
    lVar28 = lVar42 + 1;
    (&DAT_0061c780)[lVar42] = (char)p_Var2[lVar42];
    lVar42 = lVar28;
  } while (lVar28 != 0x100);
  if (cVar5 != '\0') {
    local_388 = (FILE *)((ulong)local_388 & 0xffffffff00000000 | (ulong)puVar15);
    lVar42 = 1;
    do {
      ppVar13 = (pthread_mutex_t *)nl_langinfo((int)lVar42 + 0x2000d);
      sVar14 = strlen(ppVar13->__size);
      puVar15 = (undefined *)FUN_00411210(sVar14 + 1);
      *(undefined **)(&UNK_0061c430 + lVar42 * 0x10) = puVar15;
      *(int *)(&UNK_0061c438 + lVar42 * 0x10) = (int)lVar42;
      puVar39 = puVar15;
      if (sVar14 != 0) {
        in_R11 = *ppuVar11;
        in_R10 = (pthread_mutex_t *)(ppVar13->__size + sVar14);
        lVar28 = 0;
        do {
          if ((*(byte *)(in_R11 + (byte)ppVar13->__size[0]) & 1) == 0) {
            lVar28 = lVar28 + 1;
            *puVar39 = (&DAT_0061c780)[(byte)ppVar13->__size[0]];
            puVar39 = puVar15 + lVar28;
          }
          ppVar13 = (pthread_mutex_t *)((long)&(ppVar13->__data).__lock + 1);
        } while (in_R10 != ppVar13);
      }
      lVar42 = lVar42 + 1;
      *puVar39 = 0;
    } while (lVar42 != 0xd);
    puVar15 = (undefined *)((ulong)local_388 & 0xffffffff);
    qsort(&PTR_DAT_0061c440,0xc,0x10,FUN_00405cf0);
  }
  iVar7 = 0xe;
  lVar42 = 0;
  sigemptyset((sigset_t *)&DAT_0061c6c0);
  while( true ) {
    sigaction(iVar7,(sigaction *)0x0,(sigaction *)local_158);
    if (local_158._0_8_ != (__sighandler_t)0x1) {
      sigaddset((sigset_t *)&DAT_0061c6c0,iVar7);
    }
    lVar42 = lVar42 + 1;
    if (lVar42 == 0xb) break;
    iVar7 = *(int *)(&UNK_00414980 + lVar42 * 4);
  }
  local_158._0_8_ = FUN_00405d80;
  iVar7 = 0xe;
  local_d0 = 0;
  lVar42 = 0;
  local_158._8_4_ = _DAT_0061c6c0;
  uStack_14c = uRam000000000061c6c4;
  uStack_148 = uRam000000000061c6c8;
  uStack_144 = uRam000000000061c6cc;
  local_140 = _DAT_0061c6d0;
  uStack_13c = uRam000000000061c6d4;
  uStack_138 = uRam000000000061c6d8;
  uStack_134 = uRam000000000061c6dc;
  local_130 = _DAT_0061c6e0;
  uStack_12c = uRam000000000061c6e4;
  uStack_128 = uRam000000000061c6e8;
  uStack_124 = uRam000000000061c6ec;
  local_120 = _DAT_0061c6f0;
  uStack_11c = uRam000000000061c6f4;
  uStack_118 = uRam000000000061c6f8;
  uStack_114 = uRam000000000061c6fc;
  local_110 = _DAT_0061c700;
  uStack_10c = uRam000000000061c704;
  uStack_108 = uRam000000000061c708;
  uStack_104 = uRam000000000061c70c;
  local_100 = _DAT_0061c710;
  local_f0 = _DAT_0061c720;
  local_e0 = _DAT_0061c730;
  uStack_dc = uRam000000000061c734;
  uStack_d8 = uRam000000000061c738;
  uStack_d4 = uRam000000000061c73c;
  auVar52 = _DAT_0061c720;
  while( true ) {
    iVar8 = sigismember((sigset_t *)&DAT_0061c6c0,iVar7);
    if (iVar8 != 0) {
      sigaction(iVar7,(sigaction *)local_158,(sigaction *)0x0);
    }
    if (lVar42 == 10) break;
    lVar42 = lVar42 + 1;
    iVar7 = *(int *)(&UNK_00414980 + lVar42 * 4);
  }
  signal(0x11,(__sighandler_t)0x0);
  FUN_00413f20(FUN_00407890);
  local_238 = 0xffffffffffffffff;
  local_230 = ZEXT816(0xffffffffffffffff) << 0x40;
  local_220 = (undefined  [16])0x0;
  local_210 = (undefined  [16])0x0;
  local_200 = (undefined  [16])0x0;
  if (((long)(int)puVar15 << 3 < 0) || ((ulong)(long)(int)puVar15 >> 0x3d != 0)) {
LAB_004057e1:
                    /* WARNING: Subroutine does not return */
    FUN_00411460();
  }
  __ptr = (long **)FUN_00411210();
  pplVar43 = (long **)0x0;
  local_358 = (long **)((ulong)local_358 & 0xffffffffffffff00);
  pplVar19 = (long **)0x0;
  local_388 = (FILE *)((ulong)local_388 & 0xffffffffffffff00);
  local_348 = &local_278;
  local_368 = (pthread_mutex_t *)0x0;
  local_378 = (pthread_mutex_t *)0x0;
  local_338.sa_handler = (__sighandler_t)0x0;
  local_370 = (pthread_mutex_t *)0x0;
  iVar7 = DAT_0061c424;
  ppVar13 = DAT_0061c748;
LAB_0040344f:
  DAT_0061c748 = ppVar13;
  DAT_0061c424 = iVar7;
  local_2f8._0_8_ = CONCAT44(local_2f8._4_4_,0xffffffff);
  iVar8 = (int)puVar15;
  if ((int)pplVar19 == -1) {
LAB_00403460:
    lVar42 = (long)DAT_0061c578._4_4_;
    goto LAB_00403430;
  }
  if ((pplVar43 != (long **)0x0) && ((char)uVar18 != '\0')) {
    lVar42 = (long)DAT_0061c578._4_4_;
    if (((byte)local_380 == '\x01') && ((char)local_388 == '\0')) {
      if (DAT_0061c578._4_4_ != iVar8) {
        pcVar16 = (char *)param_2[DAT_0061c578._4_4_];
        if (((*pcVar16 == '-') && (pcVar16[1] == 'o')) &&
           ((pcVar16[2] != '\0' || (DAT_0061c578._4_4_ + 1 != iVar8)))) goto LAB_00403488;
        goto LAB_00403430;
      }
      if (local_378 != (pthread_mutex_t *)0x0) goto LAB_004052df;
      local_388 = (FILE *)((ulong)local_388 & 0xffffffffffffff00);
    }
    else {
LAB_00403430:
      if ((int)lVar42 < iVar8) {
        DAT_0061c578._4_4_ = (int)lVar42 + 1;
        __ptr[(long)pplVar43] = (long *)param_2[lVar42];
        pplVar43 = (long **)((long)pplVar43 + 1);
        iVar7 = DAT_0061c424;
        ppVar13 = DAT_0061c748;
        goto LAB_0040344f;
      }
      if (local_378 != (pthread_mutex_t *)0x0) {
        if (pplVar43 != (long **)0x0) {
LAB_004052df:
          uVar24 = FUN_0040f630(4,*__ptr);
          uVar25 = dcgettext(0,"extra operand %s",5);
                    /* WARNING: Subroutine does not return */
          error(0,0,uVar25,uVar24);
        }
        lVar42 = FUN_00407cd0(local_378,"r");
        if (lVar42 == 0) {
          FUN_00407dd0(local_378);
LAB_00405778:
          uVar24 = FUN_0040f630(4,local_378);
          uVar25 = dcgettext(0,"no input from %s",5);
                    /* WARNING: Subroutine does not return */
          error(2,0,uVar25,uVar24);
        }
        FUN_004103a0(local_158);
        cVar5 = FUN_00410440(lVar42,local_158);
        if (cVar5 == '\0') {
          uVar24 = FUN_0040f630(4,local_378);
          uVar25 = dcgettext(0,"cannot read file names from %s",5);
                    /* WARNING: Subroutine does not return */
          error(2,0,uVar25,uVar24);
        }
        FUN_00407df0(lVar42);
        _Var23 = (_union_1454)local_158._0_8_;
        uVar46 = 0;
        uVar48 = (long **)local_158._0_8_ == (long **)0x0;
        if ((bool)uVar48) goto LAB_00405778;
        free(__ptr);
        __ptr = (long **)CONCAT44(uStack_14c,local_158._8_4_);
        do {
          plVar32 = __ptr[(long)pplVar43];
          lVar42 = 2;
          plVar22 = plVar32;
          pbVar38 = &DAT_0041814a;
          do {
            if (lVar42 == 0) break;
            lVar42 = lVar42 + -1;
            uVar46 = *(byte *)plVar22 < *pbVar38;
            uVar48 = *(byte *)plVar22 == *pbVar38;
            plVar22 = (long *)((long)plVar22 + (ulong)bVar49 * -2 + 1);
            pbVar38 = pbVar38 + (ulong)bVar49 * -2 + 1;
          } while ((bool)uVar48);
          if ((!(bool)uVar46 && !(bool)uVar48) == (bool)uVar46) {
            uVar24 = FUN_0040f630(4,plVar32);
            uVar25 = dcgettext(0,"when reading file names from stdin, no file name of %s allowed",5)
            ;
                    /* WARNING: Subroutine does not return */
            error(2,0,uVar25,uVar24);
          }
          pplVar43 = (long **)((long)pplVar43 + 1);
          if (*(char *)plVar32 == '\0') {
            uVar24 = FUN_0040f700(0,3,local_378);
            uVar25 = dcgettext(0,"%s:%lu: invalid zero-length file name",5);
                    /* WARNING: Subroutine does not return */
            error(2,0,uVar25,uVar24,pplVar43);
          }
          uVar46 = _Var23.sa_handler < pplVar43;
          uVar48 = (long **)_Var23.sa_handler == pplVar43;
        } while (!(bool)uVar48);
      }
    }
    if (DAT_0061c750 != (undefined **)0x0) {
      puVar15 = (undefined *)0x0;
      ppuVar27 = DAT_0061c750;
      ppuVar30 = DAT_0061c750;
      do {
        while( true ) {
          cVar5 = FUN_00405af0(ppuVar30);
          if ((cVar5 != '\0') && (*(char *)((long)ppuVar30 + 0x37) == '\0')) break;
          pbVar38 = (byte *)((long)ppuVar30 + 0x33);
          ppuVar30 = (undefined **)ppuVar30[8];
          puVar15 = (undefined *)(ulong)((uint)puVar15 | (uint)*pbVar38);
          if (ppuVar30 == (undefined **)0x0) goto LAB_0040365f;
        }
        ppuVar30[4] = local_220._8_8_;
        ppuVar30[5] = local_210._0_8_;
        *(undefined *)(ppuVar30 + 6) = local_210[8];
        *(undefined *)((long)ppuVar30 + 0x31) = local_210[9];
        *(undefined *)((long)ppuVar30 + 0x36) = local_210[14];
        *(undefined *)((long)ppuVar30 + 0x32) = local_210[10];
        *(undefined *)((long)ppuVar30 + 0x34) = local_210[12];
        *(undefined *)((long)ppuVar30 + 0x35) = local_210[13];
        *(undefined *)((long)ppuVar30 + 0x37) = local_210[15];
        *(undefined *)(ppuVar30 + 7) = local_200[0];
        *(byte *)((long)ppuVar30 + 0x33) = local_210[11];
        ppuVar30 = (undefined **)ppuVar30[8];
        puVar15 = (undefined *)(ulong)((uint)puVar15 | (uint)local_210[11]);
      } while (ppuVar30 != (undefined **)0x0);
LAB_0040365f:
      uVar18 = 0;
LAB_00403662:
      uVar9 = (uint)*(byte *)((long)ppuVar27 + 0x32) + (uint)*(byte *)((long)ppuVar27 + 0x34) +
              (uint)*(byte *)((long)ppuVar27 + 0x35) + (uint)*(byte *)((long)ppuVar27 + 0x36) +
              ((uint)*(byte *)((long)ppuVar27 + 0x33) | *(uint *)(ppuVar27 + 7) & 0xff |
              (uint)(ppuVar27[4] != (undefined *)0x0));
      while (uVar9 < 2) {
        ppuVar27 = (undefined **)ppuVar27[8];
        if (ppuVar27 == (undefined **)0x0) goto LAB_004036df;
        uVar9 = (uint)(byte)(*(byte *)(ppuVar27 + 7) | *(byte *)((long)ppuVar27 + 0x33) |
                            ppuVar27[4] != (undefined *)0x0) +
                (uint)*(byte *)((long)ppuVar27 + 0x36) +
                (uint)*(byte *)((long)ppuVar27 + 0x32) + (uint)*(byte *)((long)ppuVar27 + 0x34) +
                (uint)*(byte *)((long)ppuVar27 + 0x35);
      }
LAB_00405348:
      *(undefined *)((long)ppuVar27 + 0x37) = 0;
      *(undefined2 *)(ppuVar27 + 6) = 0;
      FUN_00405b50(ppuVar27,local_1e8);
      dVar51 = (double)FUN_00405d00(local_1e8);
LAB_0040536f:
      local_1e8._0_8_ = (undefined *)((long)(dVar51 - SUB168(auVar52,0)) ^ 0x8000000000000000);
LAB_00403f7f:
      iVar7 = DAT_0061c424;
      ppVar13 = DAT_0061c748;
      if ((DAT_0061c778 <= local_1e8._0_8_) &&
         (DAT_0061c778 = (undefined *)((ulong)DAT_0061c420 * 0x22), DAT_0061c778 < local_1e8._0_8_))
      {
        DAT_0061c778 = local_1e8._0_8_;
      }
      goto LAB_0040344f;
    }
    cVar5 = FUN_00405af0(&local_238);
    if (cVar5 == '\0') {
      puVar15 = (undefined *)FUN_00411410(&local_238,0x48);
      ppuVar27 = (undefined **)&DAT_0061c750;
      for (ppuVar30 = DAT_0061c750; ppuVar30 != (undefined **)0x0;
          ppuVar30 = (undefined **)ppuVar30[8]) {
        ppuVar27 = ppuVar30 + 8;
      }
      *ppuVar27 = puVar15;
      ppuVar27 = DAT_0061c750;
      uVar18 = 1;
      *(undefined8 *)(puVar15 + 0x40) = 0;
      puVar15 = (undefined *)(ulong)local_210[11];
      if (ppuVar27 != (undefined **)0x0) goto LAB_00403662;
LAB_004036df:
      if (DAT_0061c740 != '\0') goto LAB_004036ec;
      DAT_0061c75b = local_210[15];
      if ((char)puVar15 != '\0') {
        lVar42 = FUN_0040f900(local_370,0x10);
        pcVar16 = "open failed";
        if (lVar42 == 0) {
LAB_0040543a:
          uVar24 = dcgettext(0,pcVar16,5);
                    /* WARNING: Subroutine does not return */
          FUN_00405dd0(uVar24,local_370);
        }
        local_380 = (long *)local_1e8;
        FUN_0040fc10(lVar42,local_380,0x10);
        iVar7 = FUN_0040fd70(lVar42);
        if (iVar7 != 0) {
          pcVar16 = "close failed";
          goto LAB_0040543a;
        }
        FUN_0040aa90(&DAT_0061c600);
        FUN_0040b360(local_380,0x10,&DAT_0061c600);
      }
    }
    else {
      if (DAT_0061c740 != '\0') {
LAB_004036ec:
        if (((char)local_388 == '\0') && (local_368 == (pthread_mutex_t *)0x0)) {
          if (((long **)local_360.sa_handler != (long **)0x0) &&
             (pcVar16 = setlocale(3,""), pcVar16 != (char *)0x0)) {
            if (DAT_0061cba1 == '\0') {
              uVar24 = dcgettext(0,"using simple byte comparison",5);
                    /* WARNING: Subroutine does not return */
              error(0,0,&DAT_00416abc,uVar24);
            }
            pcVar16 = setlocale(3,(char *)0x0);
            uVar24 = FUN_0040f880(pcVar16);
            uVar25 = dcgettext(0,"using %s sorting rules",5);
                    /* WARNING: Subroutine does not return */
            error(0,0,uVar25,uVar24);
          }
          uVar24 = dcgettext(0,"failed to set locale",5);
                    /* WARNING: Subroutine does not return */
          error(0,0,&DAT_00416abc,uVar24);
        }
        if ((char)local_388 == '\0') {
          local_388 = (FILE *)CONCAT71(local_388._1_7_,0x6f);
        }
        s_X___debug_0061c408[0] = (char)local_388;
        FUN_00405d00(s_X___debug_0061c408);
        goto LAB_00405524;
      }
      DAT_0061c75b = local_210[15];
    }
    if (DAT_0061c768 == 0) {
      pcVar16 = getenv("TMPDIR");
      if (pcVar16 == (char *)0x0) {
        pcVar16 = "/tmp";
      }
      FUN_0040a010(pcVar16);
    }
    if (pplVar43 == (long **)0x0) {
      pplVar43 = (long **)0x1;
      free(__ptr);
      __ptr = (long **)FUN_00411210(8);
      *__ptr = (long *)&DAT_0041814a;
    }
    puVar15 = DAT_0061c778;
    if ((DAT_0061c778 != (undefined *)0x0) &&
       (puVar15 = (undefined *)((ulong)DAT_0061c420 * 0x22),
       (undefined *)((ulong)DAT_0061c420 * 0x22) < DAT_0061c778)) {
      puVar15 = DAT_0061c778;
    }
    DAT_0061c778 = puVar15;
    if ((char)local_388 != '\0') {
      if ((long **)0x1 < pplVar43) {
        uVar24 = FUN_0040f630(4,__ptr[1]);
        uVar25 = dcgettext(0,"extra operand %s not allowed with -%c",5);
                    /* WARNING: Subroutine does not return */
        error(2,0,uVar25,uVar24,(int)(char)local_388);
      }
      if (local_368 == (pthread_mutex_t *)0x0) {
        __ptr = (long **)*__ptr;
        lVar42 = FUN_00407cd0(__ptr,"r");
        if (lVar42 != 0) {
          uVar9 = (uint)DAT_0061c759;
          local_370 = (pthread_mutex_t *)DAT_0061c750;
          puVar15 = DAT_0061c428;
          if (DAT_0061c428 <= DAT_0061c778) {
            puVar15 = DAT_0061c778;
          }
          pvVar40 = (void *)0x0;
          local_380 = (long *)local_1e8;
          FUN_00405e30(local_380,0x20,puVar15);
          local_2c8._0_8_ = (void *)0x0;
          local_378 = (pthread_mutex_t *)0x0;
          do {
            cVar5 = FUN_004074d0(local_380,lVar42,__ptr);
            if (cVar5 == '\0') {
              uVar9 = 1;
LAB_004042b7:
              FUN_00407df0(lVar42,__ptr);
              free(local_1e8._0_8_);
              free(local_2c8._0_8_);
              return uVar9 ^ 1;
            }
            ppvVar44 = (void **)(local_1e8._0_8_ + CONCAT44(_Stack_1cc,local_1d0) + -0x20);
            ppvVar34 = (void **)(local_1e8._0_8_ +
                                local_1d8 * -0x20 + CONCAT44(_Stack_1cc,local_1d0));
            if (pvVar40 != (void *)0x0) {
              iVar7 = FUN_004082a0(local_2c8,ppvVar44);
              goto joined_r0x004042a5;
            }
            while (ppvVar34 < ppvVar44) {
              iVar7 = FUN_004082a0(ppvVar44,ppvVar44 + -4);
              ppvVar44 = ppvVar44 + -4;
joined_r0x004042a5:
              if ((int)(uVar9 ^ 1) <= iVar7) {
                uVar9 = 0;
                if ((char)local_388 == 'c') {
                  uVar25 = FUN_0040d370(((long)(local_1e8._0_8_ +
                                               (CONCAT44(_Stack_1cc,local_1d0) - (long)ppvVar44)) >>
                                        5) + (long)local_378,local_2f8);
                  uVar24 = DAT_0061cbc8;
                  uVar21 = dcgettext(0,"%s: %s:%s: disorder: ",5);
                  __fprintf_chk(stderr,1,uVar21,uVar24,__ptr,uVar25);
                  uVar24 = dcgettext(0,"standard error",5);
                  FUN_00407e70(ppvVar44,stderr,uVar24);
                }
                goto LAB_004042b7;
              }
            }
            __n = ppvVar44[1];
            local_378 = (pthread_mutex_t *)((long)local_378 + local_1d8);
            pvVar41 = pvVar40;
            if (pvVar40 < __n) {
              do {
                pvVar41 = (void *)((long)pvVar41 * 2);
                pvVar40 = __n;
                if (pvVar41 == (void *)0x0) break;
                pvVar40 = pvVar41;
              } while (pvVar41 < __n);
              free(local_2c8._0_8_);
              local_2c8._0_8_ = (void *)FUN_00411210(pvVar40);
              __n = ppvVar44[1];
            }
            memcpy(local_2c8._0_8_,*ppvVar44,(size_t)__n);
            local_2c8._8_8_ = ppvVar44[1];
            if (local_370 != (pthread_mutex_t *)0x0) {
              local_2b8 = ((long)ppvVar44[2] + (long)local_2c8._0_8_) - (long)*ppvVar44;
              local_2b0 = (long **)(((long)local_2c8._0_8_ + (long)ppvVar44[3]) - (long)*ppvVar44);
            }
          } while( true );
        }
      }
      else {
LAB_00405800:
        DAT_0061c400 = (char)local_388;
        FUN_00405d00(&DAT_0061c400);
      }
      FUN_00407dd0(__ptr);
LAB_0040581c:
      auVar52 = FUN_00405d30(DAT_0061cd60,"stray character in field spec");
      pFVar3 = local_388;
      local_388 = SUB168(auVar52,0);
      (*(code *)PTR___libc_start_main_0061bff0)
                (FUN_00402f50,pFVar3,&local_380,FUN_00413eb0,FUN_00413f10,SUB168(auVar52 >> 0x40,0),
                 &local_388);
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    bVar45 = false;
    bVar47 = true;
    local_320 = &DAT_0041814a;
    pplVar19 = (long **)0x0;
    pplVar35 = __ptr;
    do {
      pplVar33 = pplVar19;
      lVar42 = 2;
      plVar32 = *pplVar35;
      pbVar38 = &DAT_0041814a;
      do {
        if (lVar42 == 0) break;
        lVar42 = lVar42 + -1;
        bVar45 = *(byte *)plVar32 < *pbVar38;
        bVar47 = *(byte *)plVar32 == *pbVar38;
        plVar32 = (long *)((long)plVar32 + (ulong)bVar49 * -2 + 1);
        pbVar38 = pbVar38 + (ulong)bVar49 * -2 + 1;
      } while (bVar47);
      if (((!bVar45 && !bVar47) != bVar45) && (iVar7 = euidaccess((char *)*pplVar35,4), iVar7 != 0))
      {
        plVar32 = *pplVar35;
        pcVar16 = "cannot read";
LAB_0040541e:
        uVar24 = dcgettext(0,pcVar16,5);
                    /* WARNING: Subroutine does not return */
        FUN_00405dd0(uVar24,plVar32);
      }
      pplVar19 = (long **)((long)pplVar33 + 1);
      pplVar35 = pplVar35 + 1;
      bVar45 = pplVar43 < pplVar19;
      bVar47 = pplVar43 == pplVar19;
    } while (!bVar47);
    if (local_368 != (pthread_mutex_t *)0x0) {
      iVar7 = open(local_368->__size,0x80041,0x1b6);
      if (iVar7 < 0) {
        uVar24 = dcgettext(0,"open failed",5);
                    /* WARNING: Subroutine does not return */
        FUN_00405dd0(uVar24,local_368);
      }
      if (iVar7 != 1) {
        FUN_00408e10(iVar7,1);
      }
    }
    if ((char)local_358 != '\0') {
      lVar42 = FUN_004113e0(pplVar19,0x10);
      pplVar43 = (long **)0x0;
      do {
        *(long **)(lVar42 + (long)pplVar43 * 0x10) = __ptr[(long)pplVar43];
        bVar45 = pplVar43 != pplVar33;
        pplVar43 = (long **)((long)pplVar43 + 1);
      } while (bVar45);
      FUN_00409330(lVar42,0,pplVar19,local_368);
      goto LAB_00404b19;
    }
    if ((long **)local_338.sa_handler == (long **)0x0) {
LAB_00405199:
      _Var23.sa_handler = (__sighandler_t)FUN_0040d6f0(2);
      local_338 = (_union_1454)0x8;
      if (_Var23.sa_handler < (long **)0x9) {
        local_338.sa_handler = _Var23.sa_handler;
      }
    }
    local_2b0 = (long **)0x0;
    local_360 = (_union_1454)0xffffffffffffff;
    if (local_338.sa_handler < (long **)0x100000000000000) {
      local_360 = local_338;
    }
    ppVar13 = (pthread_mutex_t *)0x0;
    local_348 = (long *)((long)local_360.sa_handler * 2);
    local_350 = (char *)((long)local_360.sa_handler << 8);
    local_340 = (pthread_mutex_t *)(local_1e8 + 8);
    local_358 = pplVar19;
    local_328 = __ptr;
LAB_00404732:
    local_380 = *local_328;
    local_388 = (FILE *)FUN_00407cd0(local_380,"r");
    if (local_388 != (FILE *)0x0) {
      local_330 = (pthread_mutex_t *)0x30;
      if ((long **)0x1 < local_338.sa_handler) {
        lVar42 = 1;
        pplVar19 = (long **)0x1;
        do {
          pplVar19 = (long **)((long)pplVar19 * 2);
          lVar42 = lVar42 + 1;
        } while (pplVar19 < local_360.sa_handler);
        local_330 = (pthread_mutex_t *)(lVar42 * 0x20);
      }
      local_370 = (pthread_mutex_t *)local_2c8;
      if (local_2b0 == (long **)0x0) {
        param_2 = (undefined8 *)((long)&(local_330->__data).__lock + 1);
        puVar15 = (undefined *)((long)&(local_330->__data).__lock + 2);
        __ptr = local_358;
        pplVar43 = local_2b0;
        local_370 = ppVar13;
        do {
          bVar45 = false;
          bVar47 = pplVar43 == (long **)0x0;
          if (bVar47) {
            iVar7 = fileno(local_388);
            iVar7 = __fxstat(1,iVar7,(stat *)local_1e8);
            bVar45 = iVar7 != 0;
          }
          else {
            lVar42 = 2;
            plVar32 = local_328[(long)pplVar43];
            pbVar38 = local_320;
            do {
              if (lVar42 == 0) break;
              lVar42 = lVar42 + -1;
              bVar45 = *(byte *)plVar32 < *pbVar38;
              bVar47 = *(byte *)plVar32 == *pbVar38;
              plVar32 = (long *)((long)plVar32 + (ulong)bVar49 * -2 + 1);
              pbVar38 = pbVar38 + (ulong)bVar49 * -2 + 1;
            } while (bVar47);
            if ((!bVar45 && !bVar47) == bVar45) {
              iVar7 = __fxstat(1,0,(stat *)local_1e8);
              bVar45 = iVar7 != 0;
            }
            else {
              iVar7 = __xstat(1,(char *)local_328[(long)pplVar43],(stat *)local_1e8);
              bVar45 = iVar7 != 0;
            }
          }
          if (bVar45) {
            pcVar16 = "stat failed";
            plVar32 = local_328[(long)pplVar43];
            goto LAB_0040541e;
          }
          if ((local_1d0 & 0xf000) == 0x8000) {
            uVar18 = local_1b8;
            puVar39 = DAT_0061c778;
            if (DAT_0061c5e0 == (undefined *)0x0) goto joined_r0x00404bce;
          }
          else {
            puVar39 = DAT_0061c778;
            ppVar13 = local_370;
            if (DAT_0061c778 != (undefined *)0x0) goto LAB_00404f99;
            uVar18 = 0x20000;
            puVar39 = DAT_0061c5e0;
joined_r0x00404bce:
            DAT_0061c5e0 = puVar39;
            if (DAT_0061c5e0 == (undefined *)0x0) {
              iVar7 = getrlimit(RLIMIT_DATA,(rlimit *)local_2f8);
              uVar26 = 0xffffffffffffffff;
              if (iVar7 == 0) {
                uVar26 = local_2f8._0_8_;
              }
              iVar7 = getrlimit(RLIMIT_AS,(rlimit *)local_2f8);
              if ((iVar7 == 0) && (local_2f8._0_8_ < uVar26)) {
                uVar26 = local_2f8._0_8_;
              }
              puVar39 = (undefined *)(uVar26 >> 1);
              iVar7 = getrlimit(__RLIMIT_RSS,(rlimit *)local_2f8);
              if ((iVar7 == 0) &&
                 (puVar20 = (undefined *)((local_2f8._0_8_ >> 4) * 0xf), puVar20 < puVar39)) {
                puVar39 = puVar20;
              }
              local_378 = (pthread_mutex_t *)FUN_0040d900();
              dVar51 = (double)FUN_0040d840();
              dVar50 = dVar51 * _DAT_00416a58;
              ppVar13 = local_378;
              if ((double)local_378 <= (double)(pthread_mutex_t *)(DAT_00416a50 * dVar51)) {
                ppVar13 = (pthread_mutex_t *)(DAT_00416a50 * dVar51);
              }
              if (dVar50 < (double)(long)puVar39) {
                if (dVar50 < DAT_00416a48) {
                  puVar39 = (undefined *)(long)dVar50;
                }
                else {
                  puVar39 = (undefined *)((long)(dVar50 - DAT_00416a48) ^ 0x8000000000000000);
                }
              }
              if ((long)puVar39 < 0) {
                dVar51 = (double)((ulong)puVar39 >> 1 | (ulong)((uint)puVar39 & 1));
                dVar51 = dVar51 + dVar51;
              }
              else {
                dVar51 = (double)(long)puVar39;
              }
              if ((double)ppVar13 < dVar51) {
                if ((double)ppVar13 < DAT_00416a48) {
LAB_004050ca:
                  puVar39 = (undefined *)(long)(double)ppVar13;
                }
                else {
                  puVar39 = (undefined *)
                            ((long)((double)ppVar13 - DAT_00416a48) ^ 0x8000000000000000);
                }
              }
              DAT_0061c5e0 = (undefined *)((ulong)DAT_0061c420 * 0x22);
              if ((undefined *)((ulong)DAT_0061c420 * 0x22) < puVar39) {
                DAT_0061c5e0 = puVar39;
              }
            }
          }
          uVar26 = (long)param_2 * uVar18 + 1;
          puVar39 = DAT_0061c5e0;
          ppVar13 = local_370;
          if ((uVar18 != uVar26 / (ulong)param_2) ||
             ((ulong)((long)DAT_0061c5e0 - (long)puVar15) <= uVar26)) goto LAB_00404f99;
          pplVar43 = (long **)((long)pplVar43 + 1);
          puVar15 = puVar15 + uVar26;
          puVar39 = puVar15;
          if (__ptr <= pplVar43) goto LAB_00404f99;
        } while( true );
      }
      goto LAB_0040478c;
    }
    goto LAB_00405558;
  }
LAB_00403488:
  ppuVar27 = &PTR_s_ignore_leading_blanks_00414b40;
  puVar17 = param_2;
  uVar9 = FUN_00412f30(puVar15,param_2,"-bcCdfghik:mMno:rRsS:t:T:uVy:z",
                       &PTR_s_ignore_leading_blanks_00414b40,local_2f8);
  ppVar4 = local_340;
  ppVar31 = local_368;
  ppVar29 = local_370;
  pplVar19 = (long **)(ulong)uVar9;
  if (uVar9 == 0xffffffff) goto LAB_00403460;
  iVar7 = DAT_0061c424;
  ppVar13 = DAT_0061c748;
  switch(uVar9) {
  case 1:
    if (DAT_0061cd60->__size[0] != '+') {
LAB_00403ef7:
      __ptr[(long)pplVar43] = (long *)DAT_0061cd60;
      pplVar43 = (long **)((long)pplVar43 + 1);
      iVar7 = DAT_0061c424;
      ppVar13 = DAT_0061c748;
      goto LAB_0040344f;
    }
    if (DAT_0061c578._4_4_ == iVar8) {
      local_340 = (pthread_mutex_t *)((ulong)local_340._4_4_ << 0x20);
    }
    else {
      local_340 = (pthread_mutex_t *)((ulong)local_340._4_4_ << 0x20);
      if (*(char *)param_2[DAT_0061c578._4_4_] == '-') {
        local_340 = (pthread_mutex_t *)
                    ((ulong)ppVar4 & 0xffffffff00000000 |
                    (ulong)((int)((char *)param_2[DAT_0061c578._4_4_])[1] - 0x30U < 10));
      }
    }
    local_380._0_1_ = (byte)local_380 | local_350 == (char *)0x0 & (byte)local_340;
    local_380 = (long *)((ulong)local_380 & 0xffffffffffffff00 | (ulong)(byte)local_380);
    if ((byte)local_380 == 0) goto LAB_00403ef7;
    puVar37 = &local_288;
    for (lVar42 = 0x12; lVar42 != 0; lVar42 = lVar42 + -1) {
      *(undefined4 *)puVar37 = 0;
      puVar37 = (ulong *)((long)puVar37 + (ulong)bVar49 * -8 + 4);
    }
    local_278 = -1;
    pcVar16 = (char *)FUN_00407c00((undefined *)((long)&(DAT_0061cd60->__data).__lock + 1),
                                   &local_288,0);
    if (pcVar16 == (char *)0x0) {
      if ((local_288 | local_280) == 0) {
        local_288 = 0xffffffffffffffff;
      }
      goto LAB_00403ef7;
    }
    if (*pcVar16 == '.') {
      pcVar16 = (char *)FUN_00407c00(pcVar16 + 1,&local_280,0);
      if ((local_288 | local_280) == 0) goto LAB_00404473;
LAB_0040447f:
      if (pcVar16 == (char *)0x0) goto LAB_00403ef7;
    }
    else if ((local_288 | local_280) == 0) {
LAB_00404473:
      local_288 = 0xffffffffffffffff;
      goto LAB_0040447f;
    }
    pcVar16 = (char *)FUN_00405c00(pcVar16,&local_288,0);
    if (*pcVar16 != '\0') goto LAB_00403ef7;
    if ((int)local_340 != 0) {
      lVar42 = (long)DAT_0061c578._4_4_;
      DAT_0061c578._4_4_ = DAT_0061c578._4_4_ + 1;
      local_340 = (pthread_mutex_t *)param_2[lVar42];
      pcVar16 = (char *)FUN_00407c00((undefined *)((long)&(local_340->__data).__lock + 1),local_348,
                                     "invalid number after \'-\'");
      if (pcVar16 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("s","src/sort.c",0x110d,"main");
      }
      if (*pcVar16 == '.') {
        pcVar16 = (char *)FUN_00407c00(pcVar16 + 1,local_270,"invalid number after \'.\'");
      }
      if ((local_270[0] == 0) && (local_278 != 0)) {
        local_278 = local_278 + -1;
      }
      pcVar16 = (char *)FUN_00405c00(pcVar16,&local_288,1);
      if (*pcVar16 != '\0') goto LAB_00405549;
    }
    local_24f = 1;
    puVar20 = (undefined *)FUN_00411410(&local_288,0x48);
    ppuVar27 = (undefined **)&DAT_0061c750;
    for (ppuVar30 = DAT_0061c750; ppuVar30 != (undefined **)0x0;
        ppuVar30 = (undefined **)ppuVar30[8]) {
      ppuVar27 = ppuVar30 + 8;
    }
LAB_004042f4:
    *ppuVar27 = puVar20;
    *(undefined8 *)(puVar20 + 0x40) = 0;
    iVar7 = DAT_0061c424;
    ppVar13 = DAT_0061c748;
    goto LAB_0040344f;
  case 0x43:
  case 99:
    goto switchD_004034bd_caseD_43;
  case 0x4d:
  case 0x52:
  case 0x56:
  case 0x62:
  case 100:
  case 0x66:
  case 0x67:
  case 0x68:
  case 0x69:
  case 0x6e:
  case 0x72:
    goto switchD_004034bd_caseD_4d;
  case 0x53:
    local_340 = DAT_0061cd60;
    local_330 = (pthread_mutex_t *)
                ((ulong)local_330 & 0xffffffff00000000 | local_2f8._0_8_ & 0xffffffff);
    iVar7 = FUN_00411b40(DAT_0061cd60,local_158,10,local_1e8,"EgGkKmMPtTYZ");
    if (iVar7 != 0) {
      if (((iVar7 != 2) || (9 < (int)(char)local_158._0_8_[-1] - 0x30U)) ||
         (local_158._0_8_[1] != (code)0x0)) {
LAB_0040438e:
        FUN_00411ab0(iVar7,(ulong)local_330 & 0xffffffff,0x53,&PTR_s_ignore_leading_blanks_00414b40,
                     local_340);
        goto LAB_004043a8;
      }
      if (*local_158._0_8_ != (code)0x25) {
        if (*local_158._0_8_ == (code)0x62) goto LAB_00403f7f;
        goto LAB_0040438e;
      }
      dVar51 = (double)FUN_0040d840();
      if ((long)local_1e8._0_8_ < 0) {
        dVar50 = (double)((ulong)local_1e8._0_8_ >> 1 | (ulong)((uint)local_1e8._0_8_ & 1));
        dVar50 = dVar50 + dVar50;
      }
      else {
        dVar50 = (double)(long)local_1e8._0_8_;
      }
      auVar52 = ZEXT816((ulong)DAT_00416a40);
      dVar51 = (dVar51 * dVar50) / _DAT_00416a38;
      if (DAT_00416a40 <= dVar51) goto LAB_0040514b;
      auVar52 = ZEXT816((ulong)DAT_00416a48);
      if (dVar51 < DAT_00416a48) {
        local_1e8._0_8_ = (undefined *)(long)dVar51;
        goto LAB_00403f7f;
      }
      goto LAB_0040536f;
    }
    if ((int)(char)local_158._0_8_[-1] - 0x30U < 10) {
      if ((undefined *)0x3fffffffffffff < local_1e8._0_8_) {
LAB_0040514b:
        iVar7 = 1;
        goto LAB_0040438e;
      }
      local_1e8._0_8_ = (undefined *)((long)local_1e8._0_8_ << 10);
    }
    goto LAB_00403f7f;
  case 0x54:
    FUN_0040a010(DAT_0061cd60);
    iVar7 = DAT_0061c424;
    ppVar13 = DAT_0061c748;
    goto LAB_0040344f;
  case 0x6b:
    puVar37 = &local_288;
    for (lVar42 = 0x12; lVar42 != 0; lVar42 = lVar42 + -1) {
      *(undefined4 *)puVar37 = 0;
      puVar37 = (ulong *)((long)puVar37 + (ulong)bVar49 * -8 + 4);
    }
    local_278 = -1;
    pcVar16 = (char *)FUN_00407c00(DAT_0061cd60,&local_288,"invalid number at field start");
    uVar26 = local_288 - 1;
    bVar45 = local_288 != 0;
    local_288 = uVar26;
    if (bVar45) {
      if (*pcVar16 == '.') {
        pcVar16 = (char *)FUN_00407c00(pcVar16 + 1,&local_280,"invalid number after \'.\'");
        ppVar13 = SUB168(auVar52,0);
        uVar26 = local_280 - 1;
        bVar45 = local_280 == 0;
        local_280 = uVar26;
        if (bVar45) {
          FUN_00405d30(DAT_0061cd60,"character offset is zero");
          goto LAB_004050ca;
        }
      }
      if ((local_288 | local_280) == 0) goto LAB_004043cb;
      goto LAB_00403dff;
    }
LAB_00405524:
    FUN_00405d30(DAT_0061cd60,"field number is zero");
    goto LAB_00405535;
  case 0x6d:
    local_358 = (long **)CONCAT71(local_358._1_7_,1);
    goto LAB_0040344f;
  case 0x6f:
    bVar45 = local_368 != (pthread_mutex_t *)0x0;
    local_368 = DAT_0061cd60;
    if (bVar45) {
      iVar8 = strcmp(ppVar31->__size,DAT_0061cd60->__size);
      iVar7 = DAT_0061c424;
      ppVar13 = DAT_0061c748;
      if (iVar8 != 0) {
        uVar24 = dcgettext(0,"multiple output files specified",5);
                    /* WARNING: Subroutine does not return */
        error(2,0,uVar24);
      }
    }
    goto LAB_0040344f;
  case 0x73:
    DAT_0061c75a = 1;
    goto LAB_0040344f;
  case 0x74:
    iVar7 = (int)DAT_0061cd60->__size[0];
    if (DAT_0061cd60->__size[0] == '\0') {
      uVar24 = dcgettext(0,"empty tab",5);
                    /* WARNING: Subroutine does not return */
      error(2,0,uVar24);
    }
    if (DAT_0061cd60->__size[1] != '\0') {
      local_340 = DAT_0061cd60;
      iVar7 = strcmp(DAT_0061cd60->__size,"\\0");
      if (iVar7 != 0) {
        uVar24 = FUN_0040f880(local_340);
        uVar25 = dcgettext(0,"multi-character tab %s",5);
                    /* WARNING: Subroutine does not return */
        error(2,0,uVar25,uVar24);
      }
      iVar7 = 0;
    }
    ppVar13 = DAT_0061c748;
    if ((DAT_0061c424 != 0x80) && (DAT_0061c424 != iVar7)) {
      uVar24 = dcgettext(0,"incompatible tabs",5);
                    /* WARNING: Subroutine does not return */
      error(2,0,uVar24);
    }
    goto LAB_0040344f;
  case 0x75:
    DAT_0061c759 = 1;
    goto LAB_0040344f;
  case 0x79:
    ppVar29 = DAT_0061cd60;
    if ((pthread_mutex_t *)param_2[(long)DAT_0061c578._4_4_ + -1] == DAT_0061cd60) {
      for (; (int)ppVar29->__size[0] - 0x30U < 10;
          ppVar29 = (pthread_mutex_t *)((long)&(ppVar29->__data).__lock + 1)) {
      }
      DAT_0061c578._4_4_ = DAT_0061c578._4_4_ - (uint)(ppVar29->__size[0] != '\0');
    }
    goto LAB_0040344f;
  case 0x7a:
    DAT_0061c500 = 0;
    goto LAB_0040344f;
  case 0x80:
    pplVar19 = (long **)0x63;
    if (DAT_0061cd60 != (pthread_mutex_t *)0x0) {
      puVar39 = PTR_FUN_0061c510;
      lVar42 = FUN_0040a910("--check",DAT_0061cd60,&PTR_s_quiet_00414b20,&DAT_00414b18,1);
      pplVar19 = (long **)(ulong)(uint)(int)(char)(&DAT_00414b18)[lVar42];
    }
switchD_004034bd_caseD_43:
    if (((char)local_388 != '\0') && ((int)(char)local_388 != (int)pplVar19)) {
LAB_00405535:
      FUN_00405d00(&DAT_0041667f);
LAB_0040553f:
      FUN_00407dd0(local_368);
LAB_00405549:
      FUN_00405d30(local_340,"stray character in field spec");
LAB_00405558:
      FUN_00407dd0(local_380);
LAB_00405562:
      uVar24 = FUN_0040f880(in_R10);
      puVar15 = (&PTR_s_ignore_leading_blanks_00414b40)[(long)(int)local_328 * 4];
      uVar25 = dcgettext(0,"invalid --%s argument %s",5);
                    /* WARNING: Subroutine does not return */
      error(0,0,uVar25,puVar15,uVar24);
    }
    local_388 = (FILE *)((ulong)local_388 & 0xffffffffffffff00 | (ulong)pplVar19 & 0xff);
    iVar7 = DAT_0061c424;
    ppVar13 = DAT_0061c748;
    goto LAB_0040344f;
  case 0x81:
    ppVar13 = DAT_0061cd60;
    if (DAT_0061c748 != (pthread_mutex_t *)0x0) {
      local_340 = DAT_0061cd60;
      iVar8 = strcmp(DAT_0061c748->__size,DAT_0061cd60->__size);
      iVar7 = DAT_0061c424;
      ppVar13 = local_340;
      if (iVar8 != 0) {
        uVar24 = dcgettext(0,"multiple compress programs specified",5);
                    /* WARNING: Subroutine does not return */
        error(2,0,uVar24);
      }
    }
    goto LAB_0040344f;
  case 0x82:
    DAT_0061c740 = '\x01';
    goto LAB_0040344f;
  case 0x83:
    local_378 = DAT_0061cd60;
    goto LAB_0040344f;
  case 0x84:
    goto switchD_004034bd_caseD_84;
  case 0x85:
    bVar45 = local_370 != (pthread_mutex_t *)0x0;
    local_370 = DAT_0061cd60;
    if (bVar45) {
      iVar8 = strcmp(ppVar29->__size,DAT_0061cd60->__size);
      iVar7 = DAT_0061c424;
      ppVar13 = DAT_0061c748;
      if (iVar8 != 0) {
        uVar24 = dcgettext(0,"multiple random sources specified",5);
                    /* WARNING: Subroutine does not return */
        error(2,0,uVar24);
      }
    }
    goto LAB_0040344f;
  case 0x86:
    puVar39 = PTR_FUN_0061c510;
    lVar42 = FUN_0040a910("--sort",DAT_0061cd60,&PTR_s_general_numeric_00414ae0,"ghMnRV",1);
    pplVar19 = (long **)(ulong)(uint)(int)"ghMnRV"[lVar42];
switchD_004034bd_caseD_4d:
    local_158._0_8_ = (code *)((ulong)local_158._0_8_ & 0xffffffffffff0000 | (ulong)pplVar19 & 0xff)
    ;
    FUN_00405c00(local_158,&local_238,2);
    iVar7 = DAT_0061c424;
    ppVar13 = DAT_0061c748;
    goto LAB_0040344f;
  case 0x87:
    local_340 = DAT_0061cd60;
    local_338.sa_handler =
         (__sighandler_t)
         ((ulong)local_338.sa_handler & 0xffffffff00000000 | local_2f8._0_8_ & 0xffffffff);
    iVar8 = FUN_00411680(DAT_0061cd60,0,10,local_158,"");
    iVar7 = DAT_0061c424;
    ppVar13 = DAT_0061c748;
    if (iVar8 == 1) {
      local_338 = (_union_1454)0xffffffffffffffff;
    }
    else {
      if (iVar8 != 0) {
        FUN_00411ab0(iVar8,(ulong)local_338.sa_handler & 0xffffffff,0xffffff87,
                     &PTR_s_ignore_leading_blanks_00414b40,local_340);
        goto LAB_00405800;
      }
      local_338.sa_handler = local_158._0_8_;
      if ((long **)local_158._0_8_ == (long **)0x0) {
        uVar24 = dcgettext(0,"number in parallel must be nonzero",5);
                    /* WARNING: Subroutine does not return */
        error(2,0,uVar24);
      }
    }
    goto LAB_0040344f;
  case 0xffffff7d:
    FUN_004110d0(stdout,"sort","GNU coreutils",PTR_DAT_0061c508,"Mike Haertel","Paul Eggert",0,
                 puVar17);
                    /* WARNING: Subroutine does not return */
    exit(0);
  case 0xffffff7e:
    FUN_0040a0d0(0);
    goto LAB_00405199;
  default:
    FUN_0040a0d0(2);
    goto LAB_00405348;
  }
LAB_00404f99:
  local_370 = (pthread_mutex_t *)local_2c8;
  FUN_00405e30(local_370,local_330,puVar39);
LAB_0040478c:
  local_298 = '\0';
  local_358 = (long **)((long)local_358 + -1);
  while (cVar6 = FUN_004074d0(local_370,local_388,local_380), cVar5 = local_298,
        pplVar19 = local_2b0, pvVar40 = local_2c8._0_8_, cVar6 != '\0') {
    if (local_298 == '\0') {
LAB_00404923:
      _DAT_0061cb80 = 0;
      ppVar13 = (pthread_mutex_t *)((long)&(ppVar13->__data).__lock + 1);
      cVar5 = '\0';
      lVar42 = FUN_004090c0(local_2f8,0);
      ppVar29 = (pthread_mutex_t *)(lVar42 + 0xd);
    }
    else {
      if (local_358 != (long **)0x0) {
        if ((undefined *)
            ((long)local_2b0 + (-((long)local_330 * local_2b8) - (long)local_2c8._8_8_)) <=
            (undefined *)((long)&(local_330->__data).__lock + 1U)) goto LAB_00404923;
        local_2a8 = local_2c8._8_8_;
        FUN_00407df0(local_388,local_380);
        goto LAB_00404ae0;
      }
      _DAT_0061cb80 = 0;
      if (((ulong)ppVar13 | (ulong)local_2a8) != 0) goto LAB_00404923;
      FUN_00407df0(local_388,local_380);
      uVar18 = FUN_00407cd0(local_368,&DAT_0041655c);
      if (uVar18 == 0) goto LAB_0040553f;
      ppVar13 = (pthread_mutex_t *)0x0;
      ppVar29 = local_368;
      local_2f8._0_8_ = uVar18;
    }
    lVar42 = (long)pplVar19 + (long)pvVar40;
    if (local_2b8 < 2) {
      FUN_004085d0(lVar42 + -0x20,local_2f8._0_8_,ppVar29);
      ppVar31 = extraout_RDX;
    }
    else {
      local_1e8._0_8_ = (undefined *)FUN_0040cfd0(FUN_00407850);
      pthread_mutex_init(local_340,(pthread_mutexattr_t *)0x0);
      pthread_cond_init((pthread_cond_t *)&local_1b8,(pthread_condattr_t *)0x0);
      uVar18 = local_2b8;
      puVar17 = (undefined8 *)FUN_00411210(local_350);
      puVar17[6] = uVar18;
      puVar17[5] = uVar18;
      puVar17[3] = 0;
      puVar17[2] = 0;
      puVar17[1] = 0;
      *puVar17 = 0;
      puVar17[4] = 0;
      puVar17[7] = 0;
      *(undefined4 *)(puVar17 + 10) = 0;
      *(undefined *)((long)puVar17 + 0x54) = 0;
      pthread_mutex_init((pthread_mutex_t *)(puVar17 + 0xb),(pthread_mutexattr_t *)0x0);
      _Var23 = local_360;
      local_378 = (pthread_mutex_t *)(puVar17 + 0x10);
      FUN_004061f0(puVar17,local_378,lVar42,local_360.sa_handler,uVar18,0);
      in_R10 = local_378;
      ppVar31 = ppVar29;
      FUN_00409880(lVar42,_Var23.sa_handler,local_2b8,local_378,local_1e8);
    }
    FUN_00407df0(local_2f8._0_8_,ppVar29,ppVar31);
    if (cVar5 != '\0') {
      free(local_2c8._0_8_);
      goto joined_r0x00404b02;
    }
  }
  FUN_00407df0(local_388,local_380);
  if (local_358 == (long **)0x0) {
    free(local_2c8._0_8_);
    puVar17 = DAT_0061c6a8;
    if ((-1 < SUB168(ZEXT816(0x10) * ZEXT816(ppVar13),0)) &&
       (SUB168(ZEXT816(0x10) * ZEXT816(ppVar13) >> 0x40,0) == 0)) {
      plVar22 = (long *)FUN_00411210((long)ppVar13 << 4);
      plVar32 = plVar22;
      while (puVar17 != (undefined8 *)0x0) {
        lVar42 = (long)puVar17 + 0xd;
        plVar32[1] = (long)puVar17;
        puVar17 = (undefined8 *)*puVar17;
        *plVar32 = lVar42;
        plVar32 = plVar32 + 2;
      }
      FUN_00409330(plVar22,ppVar13,ppVar13,local_368);
      free(plVar22);
joined_r0x00404b02:
      while (0 < DAT_0061c69c) {
        FUN_00405fb0(0xffffffff);
      }
LAB_00404b19:
      if ((DAT_0061c758 != '\0') && (iVar7 = FUN_00411f80(stdin), iVar7 == -1)) {
        uVar24 = dcgettext(0,"close failed",5);
                    /* WARNING: Subroutine does not return */
        FUN_00405dd0(uVar24,&DAT_0041814a);
      }
      return 0;
    }
    goto LAB_004057e1;
  }
LAB_00404ae0:
  local_328 = local_328 + 1;
  goto LAB_00404732;
switchD_004034bd_caseD_84:
  local_330 = DAT_0061cd60;
  local_328 = (long **)((ulong)local_328 & 0xffffffff00000000 | local_2f8._0_8_ & 0xffffffff);
  uVar9 = FUN_00411b40(DAT_0061cd60,0,10,local_2c8,0);
  local_340 = (pthread_mutex_t *)((ulong)local_340 & 0xffffffff00000000 | (ulong)uVar9);
  iVar7 = getrlimit(RLIMIT_NOFILE,(rlimit *)local_158);
  in_R11 = (ushort *)0x11;
  puVar39 = (undefined *)((ulong)local_340 & 0xffffffff);
  if (iVar7 == 0) {
    in_R11 = (ushort *)(ulong)(local_158._0_4_ - 3);
  }
  uVar9 = (uint)in_R11;
  in_R10 = local_330;
  if ((int)local_340 == 0) {
    DAT_0061c420 = (uint)local_2c8._0_8_;
    if (local_2c8._0_8_ == (void *)((ulong)local_2c8._0_8_ & 0xffffffff)) {
      if (DAT_0061c420 < 2) goto LAB_00405562;
      iVar7 = DAT_0061c424;
      ppVar13 = DAT_0061c748;
      if (uVar9 < DAT_0061c420) goto LAB_00403bea;
      goto LAB_0040344f;
    }
  }
  else {
LAB_004043a8:
    uVar9 = (uint)in_R11;
    if ((int)puVar39 != 1) {
      pcVar16 = (char *)FUN_00411ab0((ulong)puVar39 & 0xffffffff,(ulong)local_328 & 0xffffffff,
                                     0xffffff84,&PTR_s_ignore_leading_blanks_00414b40,in_R10);
LAB_004043cb:
      local_288 = 0xffffffffffffffff;
LAB_00403dff:
      pcVar16 = (char *)FUN_00405c00(pcVar16,&local_288,0);
      if (*pcVar16 == ',') {
        pcVar16 = (char *)FUN_00407c00(pcVar16 + 1,local_348,"invalid number after \',\'");
        lVar42 = local_278 + -1;
        bVar45 = local_278 == 0;
        local_278 = lVar42;
        if (bVar45) goto LAB_00405524;
        if (*pcVar16 == '.') {
          pcVar16 = (char *)FUN_00407c00(pcVar16 + 1,local_270,"invalid number after \'.\'");
        }
        pcVar16 = (char *)FUN_00405c00(pcVar16,&local_288,1);
      }
      else {
        local_278 = -1;
        local_270[0] = 0;
      }
      if (*pcVar16 != '\0') goto LAB_0040581c;
      puVar20 = (undefined *)FUN_00411410(&local_288,0x48);
      ppuVar27 = (undefined **)&DAT_0061c750;
      for (ppuVar30 = DAT_0061c750; ppuVar30 != (undefined **)0x0;
          ppuVar30 = (undefined **)ppuVar30[8]) {
        ppuVar27 = ppuVar30 + 8;
      }
      goto LAB_004042f4;
    }
  }
LAB_00403bea:
  local_388 = (FILE *)((ulong)local_388 & 0xffffffff00000000 | (ulong)uVar9);
  uVar24 = FUN_0040f880(in_R10);
  puVar15 = (&PTR_s_ignore_leading_blanks_00414b40)[(long)(int)local_328 * 4];
  uVar25 = dcgettext(0,"--%s argument %s too large",5);
                    /* WARNING: Subroutine does not return */
  error(0,0,uVar25,puVar15,uVar24);
}


void FUN_00405830(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_retaddr;
  undefined auStack_8 [8];
  
  (*(code *)PTR___libc_start_main_0061bff0)
            (FUN_00402f50,unaff_retaddr,&stack0x00000008,FUN_00413eb0,FUN_00413f10,param_3,auStack_8
            );
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* WARNING: Removing unreachable block (ram,0x00405868) */
/* WARNING: Removing unreachable block (ram,0x00405872) */

void FUN_0040585b(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x004058a9) */

void FUN_0040587a(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x004058e6) */

void FUN_004058b1(void)

{
  if (DAT_0061c5c8 != '\0') {
    return;
  }
  FUN_0040585b();
  DAT_0061c5c8 = 1;
  return;
}


/* WARNING: Removing unreachable block (ram,0x004058a9) */

void thunk_FUN_0040587a(void)

{
  return;
}


ulong FUN_00405910(long param_1,ulong param_2)

{
  return (ulong)(long)*(int *)(param_1 + 8) % param_2;
}


uint FUN_00405920(long param_1,long param_2)

{
  return *(uint *)(param_2 + 8) & 0xffffff00 |
         (uint)(*(uint *)(param_1 + 8) == *(uint *)(param_2 + 8));
}


void FUN_00405930(byte **param_1)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  bool bVar7;
  
  bVar7 = false;
  uVar3 = 0;
  pbVar5 = *param_1;
  uVar6 = (uint)**param_1;
  while( true ) {
    pbVar4 = pbVar5;
    if (9 < (uVar6 & 0xff) - 0x30) break;
    if ((byte)uVar3 < (byte)uVar6) {
      uVar3 = uVar6;
    }
    bVar7 = (int)(char)pbVar4[1] == DAT_0061cba4;
    pbVar5 = pbVar4 + 1;
    uVar6 = (int)(char)pbVar4[1];
    if (bVar7) {
      uVar6 = (uint)pbVar4[2];
      pbVar5 = pbVar4 + 2;
    }
  }
  if (bVar7) {
    *param_1 = pbVar4 + -1;
    return;
  }
  pbVar5 = pbVar4;
  if ((uVar6 & 0xff) == DAT_0061cba8) {
    pbVar2 = pbVar4 + 2;
    pbVar5 = pbVar4 + 1;
    bVar1 = pbVar4[1];
    if (pbVar4[1] - 0x30 < 10) {
      do {
        pbVar5 = pbVar2;
        if ((byte)uVar3 < bVar1) {
          uVar3 = (uint)bVar1;
        }
        pbVar2 = pbVar5 + 1;
        bVar1 = *pbVar5;
      } while (*pbVar5 - 0x30 < 10);
      *param_1 = pbVar5;
      return;
    }
  }
  *param_1 = pbVar5;
  return;
}


int FUN_004059f0(char *param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  byte *local_10;
  
  cVar1 = *param_1;
  local_10 = (byte *)(param_1 + (cVar1 == '-'));
  bVar2 = FUN_00405930(&local_10);
  iVar3 = 0;
  if (0x30 < bVar2) {
    iVar3 = (int)(char)(&DAT_004149c0)[*local_10];
    if (cVar1 == '-') {
      iVar3 = -(int)(char)(&DAT_004149c0)[*local_10];
    }
  }
  return iVar3;
}


undefined4 thunk_FUN_00405a4c(byte *param_1,byte **param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  bool bVar7;
  
  while ((&DAT_0061ca80)[*param_1] != '\0') {
    param_1 = param_1 + 1;
  }
  uVar5 = 0;
  uVar6 = 0xc;
  while( true ) {
    uVar4 = uVar5 + uVar6 >> 1;
    pbVar2 = (&PTR_DAT_0061c440)[uVar5 + uVar6 & 0xfffffffffffffffe];
    bVar1 = *pbVar2;
    pbVar3 = param_1;
    if (bVar1 == 0) break;
    bVar7 = (byte)(&DAT_0061c780)[*param_1] < bVar1;
    if (!bVar7) {
      if (bVar7 || (&DAT_0061c780)[*param_1] == bVar1) {
        do {
          pbVar2 = pbVar2 + 1;
          bVar1 = *pbVar2;
          pbVar3 = pbVar3 + 1;
          if (bVar1 == 0) goto LAB_00405aae;
          bVar7 = (byte)(&DAT_0061c780)[*pbVar3] < bVar1;
          if (bVar7) goto LAB_00405acb;
        } while (bVar7 || (&DAT_0061c780)[*pbVar3] == bVar1);
      }
      uVar5 = uVar4 + 1;
      uVar4 = uVar6;
    }
LAB_00405acb:
    uVar6 = uVar4;
    if (uVar4 <= uVar5) {
      return 0;
    }
  }
LAB_00405aae:
  if (param_2 != (byte **)0x0) {
    *param_2 = pbVar3;
  }
  return (&DAT_0061c448)[uVar4 * 4];
}


undefined4 FUN_00405a4c(byte *param_1,byte **param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  bool bVar7;
  
  while ((&DAT_0061ca80)[*param_1] != '\0') {
    param_1 = param_1 + 1;
  }
  uVar5 = 0;
  uVar6 = 0xc;
  while( true ) {
    uVar4 = uVar5 + uVar6 >> 1;
    pbVar2 = (&PTR_DAT_0061c440)[uVar5 + uVar6 & 0xfffffffffffffffe];
    bVar1 = *pbVar2;
    pbVar3 = param_1;
    if (bVar1 == 0) break;
    bVar7 = (byte)(&DAT_0061c780)[*param_1] < bVar1;
    if (!bVar7) {
      if (bVar7 || (&DAT_0061c780)[*param_1] == bVar1) {
        do {
          pbVar2 = pbVar2 + 1;
          bVar1 = *pbVar2;
          pbVar3 = pbVar3 + 1;
          if (bVar1 == 0) goto LAB_00405aae;
          bVar7 = (byte)(&DAT_0061c780)[*pbVar3] < bVar1;
          if (bVar7) goto LAB_00405acb;
        } while (bVar7 || (&DAT_0061c780)[*pbVar3] == bVar1);
      }
      uVar5 = uVar4 + 1;
      uVar4 = uVar6;
    }
LAB_00405acb:
    uVar6 = uVar4;
    if (uVar4 <= uVar5) {
      return 0;
    }
  }
LAB_00405aae:
  if (param_2 != (byte **)0x0) {
    *param_2 = pbVar3;
  }
  return (&DAT_0061c448)[uVar4 * 4];
}


byte FUN_00405af0(long param_1)

{
  byte bVar1;
  
  bVar1 = 0;
  if ((*(long *)(param_1 + 0x20) == 0) && (*(long *)(param_1 + 0x28) == 0)) {
    bVar1 = *(byte *)(param_1 + 0x30);
    if (bVar1 != 0) {
      return 0;
    }
    if ((*(char *)(param_1 + 0x31) == '\0') && ((*(ulong *)(param_1 + 0x30) & 0xffff00ff0000) == 0))
    {
      bVar1 = *(byte *)(param_1 + 0x36);
      if (bVar1 != 0) {
        return 0;
      }
      if (*(char *)(param_1 + 0x38) == '\0') {
        return *(byte *)(param_1 + 0x33) ^ 1;
      }
    }
  }
  return bVar1;
}


void FUN_00405b50(long param_1,undefined *param_2)

{
  if (*(short *)(param_1 + 0x30) != 0) {
    *param_2 = 0x62;
    param_2 = param_2 + 1;
  }
  if (*(undefined1 **)(param_1 + 0x20) == &DAT_0061c880) {
    *param_2 = 100;
    param_2 = param_2 + 1;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    *param_2 = 0x66;
    param_2 = param_2 + 1;
  }
  if (*(char *)(param_1 + 0x34) != '\0') {
    *param_2 = 0x67;
    param_2 = param_2 + 1;
  }
  if (*(char *)(param_1 + 0x35) != '\0') {
    *param_2 = 0x68;
    param_2 = param_2 + 1;
  }
  if (*(undefined1 **)(param_1 + 0x20) == &DAT_0061c980) {
    *param_2 = 0x69;
    param_2 = param_2 + 1;
  }
  if (*(char *)(param_1 + 0x36) != '\0') {
    *param_2 = 0x4d;
    param_2 = param_2 + 1;
  }
  if (*(char *)(param_1 + 0x32) != '\0') {
    *param_2 = 0x6e;
    param_2 = param_2 + 1;
  }
  if (*(char *)(param_1 + 0x33) != '\0') {
    *param_2 = 0x52;
    param_2 = param_2 + 1;
  }
  if (*(char *)(param_1 + 0x37) != '\0') {
    *param_2 = 0x72;
    param_2 = param_2 + 1;
  }
  if (*(char *)(param_1 + 0x38) != '\0') {
    *param_2 = 0x56;
    param_2 = param_2 + 1;
  }
  *param_2 = 0;
  return;
}


char * FUN_00405c00(char *param_1,long param_2,uint param_3)

{
  char cVar1;
  
  cVar1 = *param_1;
  if (cVar1 != '\0') {
    do {
      switch(cVar1) {
      case 'M':
        *(undefined *)(param_2 + 0x36) = 1;
        break;
      default:
        goto switchD_00405c1b_caseD_4e;
      case 'R':
        *(undefined *)(param_2 + 0x33) = 1;
        break;
      case 'V':
        *(undefined *)(param_2 + 0x38) = 1;
        break;
      case 'b':
        if ((param_3 & 0xfffffffd) == 0) {
          *(undefined *)(param_2 + 0x30) = 1;
        }
        if (param_3 - 1 < 2) {
          *(undefined *)(param_2 + 0x31) = 1;
        }
        break;
      case 'd':
        *(undefined1 **)(param_2 + 0x20) = &DAT_0061c880;
        break;
      case 'f':
        *(undefined1 **)(param_2 + 0x28) = &DAT_0061c780;
        break;
      case 'g':
        *(undefined *)(param_2 + 0x34) = 1;
        break;
      case 'h':
        *(undefined *)(param_2 + 0x35) = 1;
        break;
      case 'i':
        if (*(long *)(param_2 + 0x20) == 0) {
          *(undefined1 **)(param_2 + 0x20) = &DAT_0061c980;
        }
        break;
      case 'n':
        *(undefined *)(param_2 + 0x32) = 1;
        break;
      case 'r':
        *(undefined *)(param_2 + 0x37) = 1;
      }
      param_1 = param_1 + 1;
      cVar1 = *param_1;
    } while (cVar1 != '\0');
  }
switchD_00405c1b_caseD_4e:
  return param_1;
}


void FUN_00405cf0(char **param_1,char **param_2)

{
  strcmp(*param_1,*param_2);
  return;
}


void FUN_00405d00(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = dcgettext(0,"options \'-%s\' are incompatible",5);
                    /* WARNING: Subroutine does not return */
  error(2,0,uVar1,param_1);
}


void FUN_00405d30(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_0040f880();
  uVar2 = dcgettext(0,param_2,5);
  uVar3 = dcgettext(0,"%s: invalid field specification %s",5);
                    /* WARNING: Subroutine does not return */
  error(2,0,uVar3,uVar2,uVar1);
}


void FUN_00405d80(int param_1)

{
  long *plVar1;
  
  plVar1 = DAT_0061c6a8;
  if (DAT_0061c6a8 != (long *)0x0) {
    do {
      unlink((char *)((long)plVar1 + 0xd));
      plVar1 = (long *)*plVar1;
    } while (plVar1 != (long *)0x0);
  }
  DAT_0061c6a8 = (long *)0x0;
  signal(param_1,(__sighandler_t)0x0);
  raise(param_1);
  return;
}


void FUN_00405dd0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  int *piVar2;
  
  if (param_2 == 0) {
    param_2 = dcgettext(0,"standard output",5);
  }
  uVar1 = FUN_0040f700(0,3,param_2);
  piVar2 = __errno_location();
                    /* WARNING: Subroutine does not return */
  error(2,*piVar2,"%s: %s",param_1,uVar1);
}


void FUN_00405e30(void **param_1,void *param_2,ulong param_3)

{
  void *pvVar1;
  void *__size;
  
  do {
    __size = (void *)((param_3 & 0xffffffffffffffe0) + 0x20);
    pvVar1 = malloc((size_t)__size);
    *param_1 = pvVar1;
    if (pvVar1 != (void *)0x0) {
      param_1[5] = param_2;
      param_1[3] = __size;
      param_1[2] = (void *)0x0;
      param_1[4] = (void *)0x0;
      param_1[1] = (void *)0x0;
      *(undefined *)(param_1 + 6) = 0;
      return;
    }
    param_3 = (ulong)__size >> 1;
  } while ((long)param_2 + 1U < param_3);
                    /* WARNING: Subroutine does not return */
  FUN_00411460();
}


long FUN_00405eb0(char *param_1,char *param_2)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  
  iVar1 = FUN_0040d3c0(param_1,(long)param_2 - (long)param_1,0);
  lVar2 = (long)iVar1;
  if (param_1 < param_2) {
    do {
      pcVar3 = param_1 + 1;
      lVar2 = lVar2 + (ulong)(*param_1 == '\t');
      param_1 = pcVar3;
    } while (param_2 != pcVar3);
  }
  return lVar2;
}


void FUN_00405ef0(char *param_1,char *param_2,size_t param_3)

{
  int *piVar1;
  undefined8 uVar2;
  
  piVar1 = __errno_location();
  *piVar1 = 0;
  strxfrm(param_1,param_2,param_3);
  if (*piVar1 == 0) {
    return;
  }
  uVar2 = dcgettext(0,"string transformation failed",5);
                    /* WARNING: Subroutine does not return */
  error(0,*piVar1,uVar2);
}


__pid_t FUN_00405fb0(int param_1)

{
  __pid_t _Var1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int *piVar5;
  uint local_2c;
  undefined local_28 [8];
  __pid_t local_20;
  
  _Var1 = -1;
  if (param_1 != 0) {
    _Var1 = param_1;
  }
  _Var1 = waitpid(_Var1,(int *)&local_2c,(uint)(param_1 == 0));
  if (_Var1 < 0) {
    uVar3 = FUN_0040f630(4,DAT_0061c748);
    uVar4 = dcgettext(0,"waiting for %s [-d]",5);
    piVar5 = __errno_location();
                    /* WARNING: Subroutine does not return */
    error(2,*piVar5,uVar4,uVar3);
  }
  if (_Var1 != 0) {
    if (param_1 < 1) {
      local_20 = _Var1;
      lVar2 = FUN_0040cde0(DAT_0061c6a0,local_28);
      if (lVar2 == 0) {
        return _Var1;
      }
      *(undefined *)(lVar2 + 0xc) = 2;
    }
    if ((local_2c >> 8 & 0xff | local_2c & 0x7f) != 0) {
      uVar3 = FUN_0040f630(4,DAT_0061c748);
      uVar4 = dcgettext(0,"%s [-d] terminated abnormally",5);
                    /* WARNING: Subroutine does not return */
      error(2,0,uVar4,uVar3);
    }
    DAT_0061c69c = DAT_0061c69c + -1;
  }
  return _Var1;
}


void FUN_004060a0(undefined4 param_1)

{
  long lVar1;
  undefined auStack_18 [8];
  undefined4 local_10;
  
  local_10 = param_1;
  lVar1 = FUN_0040cde0(DAT_0061c6a0,auStack_18);
  if (lVar1 != 0) {
    *(undefined *)(lVar1 + 0xc) = 2;
    FUN_00405fb0(param_1);
  }
  return;
}


void FUN_004060d0(int param_1,uint *param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *__buf;
  ulong uVar4;
  uint *puVar5;
  uint *puVar6;
  char *pcVar7;
  bool bVar8;
  byte bVar9;
  undefined local_14 [12];
  
  bVar9 = 0;
  puVar6 = param_2;
  do {
    puVar5 = puVar6;
    uVar2 = *puVar5 + 0xfefefeff & ~*puVar5;
    uVar3 = uVar2 & 0x80808080;
    puVar6 = puVar5 + 1;
  } while (uVar3 == 0);
  bVar8 = (uVar2 & 0x8080) == 0;
  if (bVar8) {
    uVar3 = uVar3 >> 0x10;
  }
  if (bVar8) {
    puVar6 = (uint *)((long)puVar5 + 6);
  }
  write(2,param_2,(long)puVar6 + ((-3 - (ulong)CARRY1((byte)uVar3,(byte)uVar3)) - (long)param_2));
  if (param_1 != 0) {
    __buf = (char *)FUN_0040d2b0(param_1,local_14);
    write(2,": errno ",8);
    uVar4 = 0xffffffffffffffff;
    pcVar7 = __buf;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + (ulong)bVar9 * -2 + 1;
    } while (cVar1 != '\0');
    write(2,__buf,~uVar4 - 1);
  }
  write(2,"\n",1);
                    /* WARNING: Subroutine does not return */
  _exit(2);
}


void FUN_00406190(long param_1)

{
  long lVar1;
  
  if (DAT_0061c6a0 == 0) {
    DAT_0061c6a0 = FUN_0040c600(0x2f,0,FUN_00405910,FUN_00405920,0);
    if (DAT_0061c6a0 == 0) goto LAB_004061e0;
  }
  lVar1 = DAT_0061c6a0;
  *(undefined *)(param_1 + 0xc) = 1;
  lVar1 = FUN_0040cda0(lVar1,param_1);
  if (lVar1 != 0) {
    return;
  }
LAB_004061e0:
                    /* WARNING: Subroutine does not return */
  FUN_00411460();
}


long * FUN_004061f0(long *param_1,long *param_2,long param_3,ulong param_4,long param_5,char param_6
                   )

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  
  while( true ) {
    plVar7 = param_2;
    lVar5 = param_3 + param_5 * -0x20;
    if (param_6 == '\0') {
      uVar6 = (ulong)param_1[6] >> 1;
      lVar3 = param_1[6] - uVar6;
      plVar4 = param_1 + 3;
    }
    else {
      uVar6 = (ulong)param_1[5] >> 1;
      lVar3 = param_1[5] - uVar6;
      plVar4 = param_1 + 2;
    }
    param_3 = lVar5 + uVar6 * -0x20;
    plVar7[6] = lVar3;
    iVar2 = *(int *)(param_1 + 10);
    plVar1 = plVar7 + 0x10;
    plVar7[7] = (long)param_1;
    plVar7[2] = lVar5;
    *plVar7 = lVar5;
    plVar7[3] = param_3;
    plVar7[1] = param_3;
    plVar7[4] = (long)plVar4;
    plVar7[5] = uVar6;
    *(int *)(plVar7 + 10) = iVar2 + 1;
    *(undefined *)((long)plVar7 + 0x54) = 0;
    pthread_mutex_init((pthread_mutex_t *)(plVar7 + 0xb),(pthread_mutexattr_t *)0x0);
    if (param_4 < 2) break;
    plVar7[8] = (long)plVar1;
    uVar6 = param_4 >> 1;
    param_4 = param_4 - uVar6;
    param_2 = (long *)FUN_004061f0(plVar7,plVar1,lVar5,uVar6,param_5);
    plVar7[9] = (long)param_2;
    param_6 = '\0';
    param_1 = plVar7;
  }
  plVar7[8] = 0;
  plVar7[9] = 0;
  return plVar1;
}


void FUN_00406320(undefined8 *param_1,long param_2)

{
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 1));
  FUN_0040d070(*param_1,param_2);
  *(undefined *)(param_2 + 0x54) = 1;
  pthread_cond_signal((pthread_cond_t *)(param_1 + 6));
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 1));
  return;
}


byte * FUN_00406360(byte *param_1,long param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  byte *pbVar3;
  char cVar4;
  byte *pbVar5;
  long lVar6;
  
  pbVar3 = param_1 + param_2 + -1;
  lVar1 = *param_3;
  lVar2 = param_3[1];
  pbVar5 = param_1;
  if (DAT_0061c424 == 0x80) {
    if (pbVar3 <= param_1) goto LAB_004063a0;
    lVar6 = lVar1 + -1;
    if (lVar1 != 0) {
      do {
        cVar4 = (&DAT_0061ca80)[*param_1];
        while (cVar4 == '\0') {
          pbVar5 = param_1;
          if (pbVar3 <= param_1) goto LAB_004063a0;
          do {
            param_1 = param_1 + 1;
            pbVar5 = pbVar3;
            if (pbVar3 == param_1) goto LAB_004063a0;
            cVar4 = (&DAT_0061ca80)[*param_1];
          } while (cVar4 == '\0');
          lVar6 = lVar6 + -1;
          pbVar5 = param_1;
          if (lVar6 == -1) goto LAB_004063c8;
        }
        param_1 = param_1 + 1;
        if (pbVar3 <= param_1) {
          if (param_1 + lVar2 < pbVar3) {
            pbVar3 = param_1 + lVar2;
          }
          return pbVar3;
        }
      } while( true );
    }
  }
  else {
    if (pbVar3 <= param_1) goto LAB_004063a0;
    lVar6 = lVar1 + -1;
    if (lVar1 != 0) {
      do {
        while (DAT_0061c424 == (char)*param_1) {
          pbVar5 = param_1;
          if ((pbVar3 <= param_1) || (param_1 = param_1 + 1, pbVar5 = param_1, pbVar3 <= param_1))
          goto LAB_004063a0;
          lVar6 = lVar6 + -1;
          if (lVar6 == -1) goto LAB_004063c8;
        }
        param_1 = param_1 + 1;
        pbVar5 = param_1;
      } while (param_1 < pbVar3);
      goto LAB_004063a0;
    }
  }
LAB_004063c8:
  if (*(char *)(param_3 + 6) != '\0') {
    do {
      if ((&DAT_0061ca80)[*pbVar5] == '\0') {
        if (pbVar5 + lVar2 < pbVar3) {
          pbVar3 = pbVar5 + lVar2;
        }
        return pbVar3;
      }
      pbVar5 = pbVar5 + 1;
    } while (pbVar5 < pbVar3);
  }
LAB_004063a0:
  if (pbVar5 + lVar2 < pbVar3) {
    pbVar3 = pbVar5 + lVar2;
  }
  return pbVar3;
}


byte * FUN_00406470(byte *param_1,long param_2,long param_3)

{
  byte *pbVar1;
  ulong uVar2;
  byte *pbVar3;
  char cVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  uVar2 = *(ulong *)(param_3 + 0x18);
  pbVar1 = param_1 + param_2 + -1;
  lVar5 = *(long *)(param_3 + 0x10) + (ulong)(uVar2 == 0);
  if (DAT_0061c424 == 0x80) {
    if ((param_1 < pbVar1) && (lVar6 = lVar5 + -1, pbVar3 = param_1, lVar5 != 0)) {
      do {
        cVar4 = (&DAT_0061ca80)[*pbVar3];
        while (cVar4 == '\0') {
          param_1 = pbVar3;
          if (pbVar1 <= pbVar3) goto LAB_004064c0;
          do {
            pbVar3 = pbVar3 + 1;
            param_1 = pbVar1;
            if (pbVar1 == pbVar3) goto LAB_004064c0;
            cVar4 = (&DAT_0061ca80)[*pbVar3];
          } while (cVar4 == '\0');
          lVar6 = lVar6 + -1;
          param_1 = pbVar3;
          if (lVar6 == -1) goto LAB_004064c0;
        }
        param_1 = pbVar3 + 1;
        pbVar3 = param_1;
      } while (param_1 < pbVar1);
    }
  }
  else if ((param_1 < pbVar1) && (uVar7 = lVar5 - 1, lVar5 != 0)) {
    do {
      while (DAT_0061c424 == (char)*param_1) {
        if (pbVar1 <= param_1) goto LAB_004064c0;
        if ((uVar2 | uVar7) == 0) {
          return param_1;
        }
        param_1 = param_1 + 1;
        if ((pbVar1 <= param_1) || (uVar7 = uVar7 - 1, uVar7 == 0xffffffffffffffff))
        goto LAB_004064c0;
      }
      param_1 = param_1 + 1;
    } while (param_1 < pbVar1);
  }
LAB_004064c0:
  if (uVar2 == 0) {
    return param_1;
  }
  if ((*(char *)(param_3 + 0x31) != '\0') && (param_1 < pbVar1)) {
    while ((&DAT_0061ca80)[*param_1] != '\0') {
      param_1 = param_1 + 1;
      if (pbVar1 == param_1) {
        pbVar3 = pbVar1 + uVar2;
        if (pbVar1 <= pbVar1 + uVar2) {
          pbVar3 = pbVar1;
        }
        return pbVar3;
      }
    }
  }
  pbVar3 = param_1 + uVar2;
  if (pbVar1 <= param_1 + uVar2) {
    pbVar3 = pbVar1;
  }
  return pbVar3;
}


/* WARNING: Removing unreachable block (ram,0x00406a03) */
/* WARNING: Removing unreachable block (ram,0x00406a12) */
/* WARNING: Removing unreachable block (ram,0x00406a1a) */
/* WARNING: Removing unreachable block (ram,0x00406a20) */
/* WARNING: Removing unreachable block (ram,0x0040741c) */
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004065b0(byte **param_1,byte **param_2)

{
  char cVar1;
  ulong uVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *__nptr;
  byte *pbVar9;
  size_t sVar10;
  long lVar11;
  ulong __n;
  ulong uVar12;
  ulong uVar13;
  ulong __n_00;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  ulong __n_01;
  byte *pbVar17;
  byte *pbVar18;
  byte *pbVar19;
  size_t __size;
  float10 in_ST0;
  float10 fVar20;
  float10 fVar21;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  float10 in_ST4;
  float10 in_ST5;
  float10 in_ST6;
  float10 in_ST7;
  undefined local_2188 [8];
  undefined2 uStack_2180;
  byte local_2162;
  byte local_2161;
  byte *local_2160;
  byte *local_2138;
  byte *local_2130;
  byte *local_2128;
  byte *local_20e0;
  byte *local_20d8 [2];
  undefined local_20c8 [16];
  undefined4 local_20b8;
  undefined4 uStack_20b4;
  undefined2 uStack_20b0;
  undefined2 uStack_20ae;
  undefined4 uStack_20ac;
  undefined8 local_20a8;
  undefined8 uStack_20a0;
  undefined8 local_2098;
  undefined8 uStack_2090;
  undefined8 local_2088;
  undefined8 uStack_2080;
  undefined8 local_2078;
  undefined8 uStack_2070;
  undefined8 local_2068;
  undefined8 uStack_2060;
  undefined8 local_2058;
  undefined8 uStack_2050;
  undefined8 local_2048;
  undefined8 uStack_2040;
  undefined8 local_2038;
  undefined8 uStack_2030;
  undefined8 local_2028;
  undefined4 local_2020;
  undefined4 local_201c;
  undefined4 uStack_2018;
  undefined4 uStack_2014;
  undefined4 uStack_2010;
  undefined8 local_200c;
  undefined8 uStack_2004;
  undefined8 local_1ffc;
  undefined8 uStack_1ff4;
  undefined8 local_1fec;
  undefined8 uStack_1fe4;
  undefined8 local_1fdc;
  undefined8 uStack_1fd4;
  undefined8 local_1fcc;
  undefined8 uStack_1fc4;
  undefined8 local_1fbc;
  undefined8 uStack_1fb4;
  undefined8 local_1fac;
  undefined8 uStack_1fa4;
  undefined8 local_1f9c;
  undefined8 uStack_1f94;
  undefined8 local_1f8c;
  undefined4 local_1f84;
  byte local_1f78;
  byte local_1f77 [3999];
  byte local_fd8 [4008];
  
  __nptr = param_1[2];
  pbVar7 = param_1[3];
  pbVar8 = param_2[3];
  plVar16 = DAT_0061c750;
  pbVar9 = param_2[2];
LAB_004065f8:
  uVar13 = plVar16[5];
  uVar2 = plVar16[4];
  if (pbVar7 <= __nptr) {
    pbVar7 = __nptr;
  }
  if (pbVar8 <= pbVar9) {
    pbVar8 = pbVar9;
  }
  uVar15 = (long)pbVar7 - (long)__nptr;
  uVar14 = (long)pbVar8 - (long)pbVar9;
  if (((DAT_0061cba1 == '\0') && ((plVar16[6] & 0xffffffffff0000U) == 0)) &&
     (*(char *)(plVar16 + 7) == '\0')) {
    if (uVar2 != 0) {
      if (uVar13 == 0) {
        do {
          if ((pbVar7 <= __nptr) || (*(char *)(uVar2 + *__nptr) == '\0')) {
            pbVar19 = pbVar9;
            if (pbVar8 <= pbVar9) goto LAB_00406bee;
            while (*(char *)(uVar2 + *pbVar9) != '\0') {
              pbVar9 = pbVar9 + 1;
              pbVar19 = pbVar8;
              if (pbVar8 == pbVar9) goto LAB_00406bee;
            }
            pbVar19 = pbVar9;
            if ((pbVar7 <= __nptr) || (pbVar8 <= pbVar9)) goto LAB_00406bee;
            iVar6 = (uint)*__nptr - (uint)*pbVar9;
            if (iVar6 != 0) goto LAB_00407384;
            pbVar9 = pbVar9 + 1;
          }
          __nptr = __nptr + 1;
        } while( true );
      }
      do {
        if ((pbVar7 <= __nptr) || (*(char *)(uVar2 + *__nptr) == '\0')) {
          pbVar19 = pbVar9;
          if (pbVar8 <= pbVar9) goto LAB_00406bee;
          while (*(char *)(uVar2 + *pbVar9) != '\0') {
            pbVar9 = pbVar9 + 1;
            pbVar19 = pbVar8;
            if (pbVar8 == pbVar9) goto LAB_00406bee;
          }
          pbVar19 = pbVar9;
          if ((pbVar7 <= __nptr) || (pbVar8 <= pbVar9)) goto LAB_00406bee;
          iVar6 = (uint)*(byte *)(uVar13 + *__nptr) - (uint)*(byte *)(uVar13 + *pbVar9);
          if (iVar6 != 0) goto LAB_00407384;
          pbVar9 = pbVar9 + 1;
        }
        __nptr = __nptr + 1;
      } while( true );
    }
    if (uVar15 == 0) {
      _local_2188 = (float10)CONCAT64(stack0xffffffffffffde7c,-(uint)(uVar14 != 0));
      goto LAB_004066f6;
    }
    if (uVar14 != 0) {
      if (uVar13 != 0) {
        while ((__nptr < pbVar7 && (pbVar9 < pbVar8))) {
          iVar6 = (uint)*(byte *)(uVar13 + *__nptr) - (uint)*(byte *)(uVar13 + *pbVar9);
          __nptr = __nptr + 1;
          pbVar9 = pbVar9 + 1;
          if (iVar6 != 0) goto LAB_00407384;
        }
LAB_00407409:
        if (uVar14 <= uVar15) {
          _local_2188 = (float10)CONCAT64(stack0xffffffffffffde7c,(uint)(uVar15 != uVar14));
          goto LAB_004066f6;
        }
        _local_2188 = (float10)CONCAT64(stack0xffffffffffffde7c,0xffffffff);
        goto LAB_0040738a;
      }
      uVar13 = uVar14;
      if (uVar15 <= uVar14) {
        uVar13 = uVar15;
      }
      iVar6 = memcmp(__nptr,pbVar9,uVar13);
      _local_2188 = (float10)CONCAT64(stack0xffffffffffffde7c,iVar6);
      if (iVar6 == 0) goto LAB_00407409;
      goto LAB_0040680d;
    }
    _local_2188 = (float10)CONCAT64(stack0xffffffffffffde7c,1);
    goto LAB_0040738a;
  }
  if ((uVar13 | uVar2) == 0) {
    local_2162 = *pbVar7;
    *pbVar7 = 0;
    local_2161 = *pbVar8;
    *pbVar8 = 0;
    pbVar7 = pbVar9;
    fVar20 = in_ST0;
    fVar21 = in_ST1;
  }
  else {
    if (uVar15 + 2 + uVar14 < 0xfa1) {
      pbVar8 = &local_1f78;
      local_2128 = (byte *)0x0;
      pbVar7 = local_1f77 + uVar15;
      if (uVar15 == 0) goto LAB_00406c75;
LAB_004068d1:
      pbVar19 = __nptr + uVar15;
      uVar15 = 0;
      do {
        bVar3 = *__nptr;
        if (uVar2 == 0) {
LAB_00406909:
          bVar3 = *(byte *)(uVar13 + bVar3);
LAB_004068ec:
          pbVar8[uVar15] = bVar3;
          uVar15 = uVar15 + 1;
        }
        else if (*(char *)(uVar2 + bVar3) == '\0') {
          if (uVar13 != 0) goto LAB_00406909;
          goto LAB_004068ec;
        }
        __nptr = __nptr + 1;
      } while (pbVar19 != __nptr);
      pbVar8[uVar15] = 0;
      __nptr = pbVar8;
      fVar20 = in_ST0;
      fVar21 = in_ST1;
    }
    else {
      _local_2188 = (float10)CONCAT28(uStack_2180,uVar15);
      pbVar8 = (byte *)FUN_00411210();
      pbVar7 = pbVar8 + uVar15 + 1;
      local_2128 = pbVar8;
      if (uVar15 != 0) goto LAB_004068d1;
LAB_00406c75:
      *pbVar8 = 0;
      __nptr = pbVar8;
      fVar20 = in_ST0;
      fVar21 = in_ST1;
    }
    pbVar8 = pbVar7;
    if (uVar14 != 0) {
      pbVar8 = pbVar9 + uVar14;
      uVar14 = 0;
      do {
        bVar3 = *pbVar9;
        if (uVar2 == 0) {
LAB_00406961:
          bVar3 = *(byte *)(uVar13 + bVar3);
LAB_00406944:
          pbVar7[uVar14] = bVar3;
          uVar14 = uVar14 + 1;
        }
        else if (*(char *)(uVar2 + bVar3) == '\0') {
          if (uVar13 != 0) goto LAB_00406961;
          goto LAB_00406944;
        }
        pbVar9 = pbVar9 + 1;
      } while (pbVar8 != pbVar9);
      pbVar8 = pbVar7 + uVar14;
    }
    *pbVar8 = 0;
  }
  if (*(char *)((long)plVar16 + 0x32) == '\0') {
    if (*(char *)((long)plVar16 + 0x34) == '\0') {
      if (*(char *)((long)plVar16 + 0x35) == '\0') {
        if (*(char *)((long)plVar16 + 0x36) == '\0') {
          if (*(char *)((long)plVar16 + 0x33) == '\0') {
            if (*(char *)(plVar16 + 7) == '\0') {
              in_ST0 = fVar20;
              in_ST1 = fVar21;
              if (uVar15 == 0) {
                _local_2188 = (float10)CONCAT64(stack0xffffffffffffde7c,-(uint)(uVar14 != 0));
              }
              else {
                _local_2188 = (float10)CONCAT64(stack0xffffffffffffde7c,1);
                if (uVar14 != 0) {
                  uVar4 = FUN_004115c0(__nptr,uVar15 + 1,pbVar7,uVar14 + 1);
                  _local_2188 = (float10)CONCAT64(stack0xffffffffffffde7c,uVar4);
                  in_ST0 = fVar20;
                  in_ST1 = fVar21;
                }
              }
            }
            else {
              uVar4 = FUN_0040b900(__nptr);
              _local_2188 = (float10)CONCAT64(stack0xffffffffffffde7c,uVar4);
              in_ST0 = fVar20;
              in_ST1 = fVar21;
            }
          }
          else {
            local_201c = _DAT_0061c600;
            uStack_2018 = uRam000000000061c604;
            uStack_2014 = uRam000000000061c608;
            uStack_2010 = uRam000000000061c60c;
            local_200c = _DAT_0061c610;
            uStack_2004 = uRam000000000061c618;
            local_1ffc = _DAT_0061c620;
            uStack_1ff4 = uRam000000000061c628;
            local_1fec = _DAT_0061c630;
            uStack_1fe4 = uRam000000000061c638;
            local_1fdc = _DAT_0061c640;
            uStack_1fd4 = uRam000000000061c648;
            local_1fcc = _DAT_0061c650;
            uStack_1fc4 = uRam000000000061c658;
            local_1fbc = _DAT_0061c660;
            uStack_1fb4 = uRam000000000061c668;
            local_1fac = _DAT_0061c670;
            uStack_1fa4 = uRam000000000061c678;
            local_1f9c = _DAT_0061c680;
            uStack_1f94 = uRam000000000061c688;
            local_1f8c = DAT_0061c690;
            local_1f84 = DAT_0061c698;
            local_20b8 = _DAT_0061c600;
            uStack_20b4 = uRam000000000061c604;
            uStack_20b0 = (undefined2)uRam000000000061c608;
            uStack_20ae = (undefined2)((uint)uRam000000000061c608 >> 0x10);
            uStack_20ac = uRam000000000061c60c;
            local_20a8 = _DAT_0061c610;
            uStack_20a0 = uRam000000000061c618;
            local_2098 = _DAT_0061c620;
            uStack_2090 = uRam000000000061c628;
            local_2088 = _DAT_0061c630;
            uStack_2080 = uRam000000000061c638;
            local_2078 = _DAT_0061c640;
            uStack_2070 = uRam000000000061c648;
            local_2068 = _DAT_0061c650;
            uStack_2060 = uRam000000000061c658;
            local_2058 = _DAT_0061c660;
            uStack_2050 = uRam000000000061c668;
            local_2048 = _DAT_0061c670;
            uStack_2040 = uRam000000000061c678;
            local_2038 = _DAT_0061c680;
            uStack_2030 = uRam000000000061c688;
            local_2028 = DAT_0061c690;
            local_2020 = DAT_0061c698;
            if (DAT_0061cba1 != '\0') {
              pbVar8 = __nptr + uVar15;
              _local_2188 = (float10)((unkuint10)stack0xffffffffffffde7c << 0x20);
              pbVar18 = local_fd8;
              pbVar9 = pbVar7 + uVar14;
              uVar12 = (uVar15 + uVar14) * 3 + 2;
              local_2138 = (byte *)0x0;
              __size = 4000;
              pbVar19 = __nptr;
              local_2160 = pbVar7;
LAB_00406e30:
              if (__size < uVar12) goto LAB_00406f13;
LAB_00406e3b:
              pbVar17 = pbVar18;
              sVar10 = __size;
              if (pbVar19 < pbVar8) goto LAB_00406f66;
LAB_00406e46:
              sVar10 = __size;
              if (local_2160 < pbVar9) {
                __n_00 = 0;
                pbVar17 = pbVar18;
                goto LAB_00406f95;
              }
              __n_01 = 0;
              __n_00 = 0;
LAB_00406e5b:
              __size = sVar10;
              local_2130 = pbVar18 + __n_00;
              if (pbVar19 < pbVar8) {
                sVar10 = strlen((char *)pbVar19);
                pbVar19 = pbVar19 + sVar10 + 1;
                if (pbVar9 <= local_2160) goto LAB_00406e90;
              }
              else if (pbVar9 <= local_2160) {
LAB_0040703a:
                local_2160 = (byte *)__n_01;
                FUN_0040b360(pbVar18,__n_00,&local_20b8);
                FUN_0040b250(&local_20b8,local_20d8);
                FUN_0040b360(local_2130,local_2160,&local_201c);
                FUN_0040b250(&local_201c,local_20c8);
                iVar6 = memcmp(local_20d8,local_20c8,0x10);
                if (iVar6 != 0) goto LAB_00407315;
                if (local_2188._0_4_ != 0) goto LAB_00407318;
                goto LAB_004072d3;
              }
LAB_004070fa:
              sVar10 = strlen((char *)local_2160);
              local_2160 = local_2160 + sVar10 + 1;
LAB_00406e90:
              do {
                if ((pbVar8 <= pbVar19) && (pbVar9 <= local_2160)) goto LAB_0040703a;
                FUN_0040b360(pbVar18,__n_00,&local_20b8);
                FUN_0040b360(local_2130,__n_01,&local_201c);
                if (local_2188._0_4_ != 0) goto LAB_00406e30;
                __n = __n_01;
                if (__n_00 <= __n_01) {
                  __n = __n_00;
                }
                iVar6 = memcmp(pbVar18,local_2130,__n);
                _local_2188 = (float10)CONCAT64(stack0xffffffffffffde7c,iVar6);
                if (iVar6 != 0) goto LAB_00406e30;
                _local_2188 = (float10)CONCAT64(stack0xffffffffffffde7c,
                                                (uint)(__n_01 < __n_00) - (uint)(__n_00 < __n_01));
                if (uVar12 <= __size) goto LAB_00406e3b;
LAB_00406f13:
                __size = __size * 3 >> 1;
                if (__size <= uVar12) {
                  __size = uVar12;
                }
                free(local_2138);
                local_2138 = (byte *)malloc(__size);
                pbVar18 = local_2138;
                if (local_2138 == (byte *)0x0) {
                  __size = 4000;
                  pbVar18 = local_fd8;
                }
                pbVar17 = pbVar18;
                sVar10 = __size;
                if (pbVar8 <= pbVar19) goto LAB_00406e46;
LAB_00406f66:
                lVar11 = FUN_00405ef0(pbVar17,pbVar19,sVar10);
                __n_00 = lVar11 + 1;
                if (local_2160 < pbVar9) {
                  if (sVar10 < __n_00) {
                    __size = 0;
                    pbVar18 = (byte *)0x0;
                  }
                  else {
                    pbVar18 = pbVar17 + __n_00;
                    __size = sVar10 - __n_00;
                  }
LAB_00406f95:
                  lVar11 = FUN_00405ef0(pbVar18,local_2160,__size);
                  __n_01 = lVar11 + 1;
                  __size = __n_01 + __n_00;
                  if (__n_00 <= sVar10) {
LAB_004073ac:
                    pbVar18 = pbVar17;
                    if (__size <= sVar10) goto LAB_00406e5b;
                  }
                }
                else {
                  __n_01 = 0;
                  __size = __n_00;
                  if (__n_00 <= sVar10) goto LAB_004073ac;
                }
                if (__size < 0x5555555555555555) {
                  __size = __size * 3 >> 1;
                }
                free(local_2138);
                pbVar18 = (byte *)FUN_00411210(__size);
                if (pbVar19 < pbVar8) {
                  strxfrm((char *)pbVar18,(char *)pbVar19,__n_00);
                }
                local_2130 = pbVar18 + __n_00;
                local_2138 = pbVar18;
                if (local_2160 < pbVar9) goto LAB_004070d0;
                if (pbVar8 <= pbVar19) goto LAB_0040703a;
                sVar10 = strlen((char *)pbVar19);
                pbVar19 = pbVar19 + sVar10 + 1;
              } while( true );
            }
            _local_2188 = (float10)CONCAT28(uStack_2180,uVar14);
            FUN_0040b360(__nptr,uVar15,&local_20b8);
            FUN_0040b250(&local_20b8,local_20d8);
            FUN_0040b360(pbVar7,uVar14,&local_201c);
            FUN_0040b250(&local_201c,local_20c8);
            iVar6 = memcmp(local_20d8,local_20c8,0x10);
            _local_2188 = (float10)CONCAT64(stack0xffffffffffffde7c,iVar6);
            if (iVar6 == 0) {
              local_2138 = (byte *)0x0;
              __n_00 = uVar15;
              pbVar18 = __nptr;
              local_2160 = (byte *)uVar14;
              local_2130 = pbVar7;
LAB_004072d3:
              uVar12 = (ulong)local_2160;
              if (__n_00 <= local_2160) {
                uVar12 = __n_00;
              }
              iVar6 = memcmp(pbVar18,local_2130,uVar12);
              _local_2188 = (float10)CONCAT64(stack0xffffffffffffde7c,iVar6);
              if (iVar6 == 0) {
                iVar6 = (uint)(local_2160 < __n_00) - (uint)(__n_00 < local_2160);
LAB_00407315:
                _local_2188 = (float10)CONCAT64(stack0xffffffffffffde7c,iVar6);
              }
            }
            else {
              local_2138 = (byte *)0x0;
            }
LAB_00407318:
            free(local_2138);
            in_ST0 = fVar20;
            in_ST1 = fVar21;
          }
        }
        else {
          iVar6 = thunk_FUN_00405a4c(__nptr,0);
          iVar5 = thunk_FUN_00405a4c(pbVar7);
          _local_2188 = (float10)CONCAT64(stack0xffffffffffffde7c,iVar6 - iVar5);
          in_ST0 = fVar20;
          in_ST1 = fVar21;
        }
      }
      else {
        cVar1 = (&DAT_0061ca80)[*__nptr];
        pbVar8 = __nptr;
        while (cVar1 != '\0') {
          pbVar8 = pbVar8 + 1;
          cVar1 = (&DAT_0061ca80)[*pbVar8];
        }
        cVar1 = (&DAT_0061ca80)[*pbVar7];
        pbVar9 = pbVar7;
        while (cVar1 != '\0') {
          pbVar9 = pbVar9 + 1;
          cVar1 = (&DAT_0061ca80)[*pbVar9];
        }
        iVar6 = FUN_004059f0(pbVar8);
        iVar5 = FUN_004059f0(pbVar9);
        _local_2188 = (float10)CONCAT64(stack0xffffffffffffde7c,iVar6 - iVar5);
        in_ST0 = fVar20;
        in_ST1 = fVar21;
        if (iVar6 - iVar5 == 0) {
          uVar4 = FUN_004106a0(pbVar8,pbVar9,DAT_0061cba8,DAT_0061cba4);
          _local_2188 = (float10)CONCAT64(stack0xffffffffffffde7c,uVar4);
          in_ST0 = fVar20;
          in_ST1 = fVar21;
        }
      }
    }
    else {
      in_ST0 = in_ST2;
      in_ST1 = in_ST3;
      in_ST2 = in_ST4;
      in_ST3 = in_ST5;
      in_ST4 = in_ST6;
      in_ST5 = in_ST7;
      strtold((char *)__nptr,(char **)&local_20e0);
      strtold((char *)pbVar7,(char **)local_20d8);
      stack0xffffffffffffde7c = (uint6)((unkuint10)fVar20 >> 0x20);
      in_ST6 = in_ST5;
      in_ST7 = in_ST5;
      if (__nptr == local_20e0) {
        _local_2188 = (float10)CONCAT64(stack0xffffffffffffde7c,-(uint)(local_20d8[0] != pbVar7));
      }
      else if (pbVar7 == local_20d8[0]) {
        _local_2188 = (float10)CONCAT64(stack0xffffffffffffde7c,1);
      }
      else {
        _local_2188 = fVar20;
        if (fVar20 < fVar21) {
LAB_0040749d:
          _local_2188 = (float10)CONCAT64(stack0xffffffffffffde7c,0xffffffff);
        }
        else {
          _local_2188 = (float10)CONCAT64(stack0xffffffffffffde7c,1);
          if (fVar20 <= fVar21) {
            if (fVar20 != fVar21) goto LAB_0040749d;
            _local_2188 = (float10)((unkuint10)stack0xffffffffffffde7c << 0x20);
          }
        }
      }
    }
  }
  else {
    cVar1 = (&DAT_0061ca80)[*__nptr];
    pbVar8 = __nptr;
    while (cVar1 != '\0') {
      pbVar8 = pbVar8 + 1;
      cVar1 = (&DAT_0061ca80)[*pbVar8];
    }
    cVar1 = (&DAT_0061ca80)[*pbVar7];
    pbVar9 = pbVar7;
    while (cVar1 != '\0') {
      pbVar9 = pbVar9 + 1;
      cVar1 = (&DAT_0061ca80)[*pbVar9];
    }
    uVar4 = FUN_004106a0(pbVar8,pbVar9,DAT_0061cba8,DAT_0061cba4);
    _local_2188 = (float10)CONCAT64(stack0xffffffffffffde7c,uVar4);
    in_ST0 = fVar20;
    in_ST1 = fVar21;
  }
  if ((uVar13 | uVar2) == 0) {
    __nptr[uVar15] = local_2162;
    pbVar7[uVar14] = local_2161;
    goto LAB_004066f6;
  }
  free(local_2128);
  if (local_2188._0_4_ != 0) goto LAB_0040680d;
  goto LAB_00406701;
LAB_00407384:
  _local_2188 = (float10)CONCAT64(stack0xffffffffffffde7c,iVar6);
LAB_0040738a:
  cVar1 = *(char *)((long)plVar16 + 0x37);
  goto joined_r0x0040738f;
LAB_004070d0:
  strxfrm((char *)local_2130,(char *)local_2160,__n_01);
  if (pbVar19 < pbVar8) {
    sVar10 = strlen((char *)pbVar19);
    pbVar19 = pbVar19 + sVar10 + 1;
  }
  goto LAB_004070fa;
LAB_00406bee:
  _local_2188 = (float10)CONCAT64(stack0xffffffffffffde7c,
                                  (uint)(__nptr < pbVar7) - (uint)(pbVar19 < pbVar8));
LAB_004066f6:
  if (local_2188._0_4_ == 0) {
LAB_00406701:
    plVar16 = (long *)plVar16[8];
    if (plVar16 == (long *)0x0) goto LAB_0040681b;
    __nptr = *param_1;
    pbVar9 = param_1[1];
    pbVar19 = *param_2;
    pbVar18 = param_2[1];
    if (plVar16[2] == -1) {
      lVar11 = *plVar16;
      pbVar7 = __nptr + -1 + (long)pbVar9;
      pbVar8 = pbVar19 + -1 + (long)pbVar18;
    }
    else {
      pbVar7 = (byte *)FUN_00406470(__nptr,pbVar9,plVar16);
      pbVar8 = (byte *)FUN_00406470(pbVar19,pbVar18,plVar16);
      lVar11 = *plVar16;
    }
    if (lVar11 == -1) {
      pbVar9 = pbVar19;
      if (*(char *)(plVar16 + 6) != '\0') {
        pbVar18 = __nptr;
        if (__nptr < pbVar7) {
          do {
            __nptr = pbVar18;
            if ((&DAT_0061ca80)[*pbVar18] == '\0') break;
            pbVar18 = pbVar18 + 1;
            __nptr = pbVar7;
          } while (pbVar7 != pbVar18);
        }
        if (pbVar19 < pbVar8) {
          do {
            pbVar9 = pbVar19;
            if ((&DAT_0061ca80)[*pbVar19] == '\0') break;
            pbVar19 = pbVar19 + 1;
            pbVar9 = pbVar8;
          } while (pbVar8 != pbVar19);
        }
      }
    }
    else {
      __nptr = (byte *)FUN_00406360(__nptr,pbVar9,plVar16);
      pbVar9 = (byte *)FUN_00406360(pbVar19,pbVar18,plVar16);
    }
    goto LAB_004065f8;
  }
LAB_0040680d:
  cVar1 = *(char *)((long)plVar16 + 0x37);
joined_r0x0040738f:
  if (cVar1 != '\0') {
    stack0xffffffffffffde7c = (uint6)((unkuint10)_local_2188 >> 0x20);
    _local_2188 = (float10)CONCAT64(stack0xffffffffffffde7c,-local_2188._0_4_);
  }
LAB_0040681b:
  return local_2188._0_4_;
}


undefined8 FUN_004074d0(byte **param_1,FILE *param_2,undefined8 param_3)

{
  byte *pbVar1;
  long lVar2;
  byte bVar3;
  long *plVar4;
  byte *pbVar5;
  ulong __n;
  size_t sVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined8 uVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte **ppbVar15;
  byte **ppbVar16;
  byte *local_70;
  
  plVar4 = DAT_0061c750;
  bVar3 = DAT_0061c500;
  lVar2 = (long)DAT_0061c428;
  if (*(char *)(param_1 + 6) != '\0') {
    return 0;
  }
  pbVar12 = param_1[1];
  pbVar11 = *param_1;
  pbVar7 = param_1[4];
  pbVar1 = param_1[5];
  if (pbVar12 == pbVar7) {
    pbVar7 = param_1[2];
  }
  else {
    memmove(pbVar11,pbVar11 + ((long)pbVar12 - (long)pbVar7),(size_t)pbVar7);
    pbVar12 = param_1[4];
    pbVar11 = *param_1;
    param_1[2] = (byte *)0x0;
    param_1[1] = pbVar12;
    pbVar7 = (byte *)0x0;
  }
  pbVar10 = (byte *)(lVar2 + -0x22);
  pbVar14 = param_1[3];
  do {
    pbVar12 = pbVar11 + (long)pbVar12;
    ppbVar15 = (byte **)(pbVar14 + (long)pbVar11 + (long)pbVar7 * -0x20);
    pbVar14 = pbVar14 + (long)pbVar11 + (-(long)pbVar12 - (long)pbVar1 * (long)pbVar7);
    if (pbVar7 != (byte *)0x0) {
      pbVar11 = ppbVar15[1] + (long)*ppbVar15;
    }
    do {
      local_70 = pbVar12;
      if (pbVar14 <= pbVar1 + 1) break;
      __n = (ulong)(pbVar14 + -1) / (ulong)(pbVar1 + 1);
      sVar6 = fread_unlocked(pbVar12,1,__n,param_2);
      pbVar7 = pbVar12 + sVar6;
      pbVar14 = pbVar14 + -sVar6;
      pbVar5 = pbVar11;
      ppbVar16 = ppbVar15;
      local_70 = pbVar7;
      if (__n != sVar6) {
        if ((param_2->_flags & 0x20U) != 0) {
          uVar9 = dcgettext(0,"read failed",5);
                    /* WARNING: Subroutine does not return */
          FUN_00405dd0(uVar9,param_3);
        }
        if ((param_2->_flags & 0x10U) != 0) {
          *(undefined *)(param_1 + 6) = 1;
          if (*param_1 == pbVar7) {
            return 0;
          }
          if ((pbVar11 != pbVar7) && (pbVar7[-1] != bVar3)) {
            *pbVar7 = bVar3;
            pbVar7 = pbVar7 + 1;
            local_70 = pbVar7;
          }
        }
      }
      while (ppbVar15 = ppbVar16, pbVar11 = pbVar5,
            pbVar8 = (byte *)FUN_00413030(pbVar12,(int)(char)bVar3,(long)pbVar7 - (long)pbVar12),
            pbVar8 != (byte *)0x0) {
        pbVar12 = pbVar8 + 1;
        ppbVar16 = ppbVar15 + -4;
        *pbVar8 = 0;
        *ppbVar16 = pbVar11;
        pbVar13 = pbVar12 + -(long)pbVar11;
        ppbVar15[-3] = pbVar13;
        if (pbVar10 < pbVar13) {
          pbVar10 = pbVar13;
        }
        pbVar14 = pbVar14 + -(long)pbVar1;
        pbVar5 = pbVar12;
        if (plVar4 != (long *)0x0) {
          if (plVar4[2] != -1) {
            pbVar8 = (byte *)FUN_00406470(pbVar11,pbVar13,plVar4);
          }
          lVar2 = *plVar4;
          ppbVar15[-1] = pbVar8;
          if (lVar2 == -1) {
            if (*(char *)(plVar4 + 6) != '\0') {
              while ((&DAT_0061ca80)[*pbVar11] != '\0') {
                pbVar11 = pbVar11 + 1;
              }
            }
            ppbVar15[-2] = pbVar11;
            pbVar5 = pbVar12;
          }
          else {
            pbVar11 = (byte *)FUN_00406360(pbVar11,pbVar13,plVar4);
            ppbVar15[-2] = pbVar11;
            pbVar5 = pbVar12;
          }
        }
      }
      pbVar12 = local_70;
    } while (*(char *)(param_1 + 6) == '\0');
    pbVar12 = *param_1;
    pbVar14 = param_1[3];
    param_1[1] = local_70 + -(long)pbVar12;
    pbVar7 = (byte *)((long)(pbVar12 + (long)pbVar14) - (long)ppbVar15 >> 5);
    param_1[2] = pbVar7;
    if (pbVar7 != (byte *)0x0) {
      DAT_0061c428 = pbVar10 + 0x22;
      param_1[4] = local_70 + -(long)pbVar11;
      return 1;
    }
    if (pbVar12 == (byte *)0x0) {
      if (pbVar14 < (byte *)0x20) {
        pbVar14 = (byte *)0x80;
      }
      else {
        pbVar14 = (byte *)((ulong)pbVar14 & 0xffffffffffffffe0);
        if ((long)pbVar14 < 0) goto LAB_00407842;
      }
    }
    else {
      if ((byte *)0x555555555555553f < pbVar14) {
LAB_00407842:
                    /* WARNING: Subroutine does not return */
        FUN_00411460();
      }
      pbVar14 = (byte *)((((ulong)pbVar14 >> 5) + 1 + ((ulong)pbVar14 >> 6)) * 0x20);
    }
    pbVar11 = (byte *)FUN_00411270(pbVar12,pbVar14);
    *param_1 = pbVar11;
    pbVar12 = param_1[1];
    param_1[3] = pbVar14;
    pbVar7 = param_1[2];
  } while( true );
}


bool FUN_00407850(long param_1,long param_2)

{
  if (*(uint *)(param_1 + 0x50) != *(uint *)(param_2 + 0x50)) {
    return *(uint *)(param_1 + 0x50) < *(uint *)(param_2 + 0x50);
  }
  return (ulong)(*(long *)(param_1 + 0x30) + *(long *)(param_1 + 0x28)) <
         (ulong)(*(long *)(param_2 + 0x30) + *(long *)(param_2 + 0x28));
}


void FUN_00407880(long param_1)

{
  pthread_sigmask(2,(__sigset_t *)(param_1 + 8),(__sigset_t *)0x0);
  return;
}


void FUN_00407890(void)

{
  undefined8 *puVar1;
  int iVar2;
  char local_98 [8];
  __sigset_t local_90;
  
  if (DAT_0061c6a8 != (undefined8 *)0x0) {
    iVar2 = pthread_sigmask(0,(__sigset_t *)&DAT_0061c6c0,&local_90);
    local_98[0] = iVar2 == 0;
    for (puVar1 = DAT_0061c6a8; puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1) {
      unlink((char *)((long)puVar1 + 0xd));
    }
    DAT_0061c6a8 = (undefined8 *)0x0;
    if (local_98[0] != '\0') {
      FUN_00407880(local_98);
      FUN_0040a9f0();
      return;
    }
  }
  FUN_0040a9f0();
  return;
}


void FUN_00407920(char *param_1)

{
  long *plVar1;
  long **pplVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long **__ptr;
  long **pplVar8;
  char local_c8 [8];
  __sigset_t local_c0;
  
  pplVar8 = (long **)&DAT_0061c6a8;
  __ptr = DAT_0061c6a8;
  if (param_1 != (char *)((long)DAT_0061c6a8 + 0xd)) {
    pplVar2 = (long **)*DAT_0061c6a8;
    pplVar8 = DAT_0061c6a8;
    while (__ptr = pplVar2, (char *)((long)__ptr + 0xd) != param_1) {
      pplVar8 = __ptr;
      pplVar2 = (long **)*__ptr;
    }
  }
  if (*(char *)((long)__ptr + 0xc) == '\x01') {
    FUN_004060a0();
  }
  plVar1 = *__ptr;
  iVar3 = pthread_sigmask(0,(__sigset_t *)&DAT_0061c6c0,&local_c0);
  local_c8[0] = iVar3 == 0;
  iVar4 = unlink(param_1);
  piVar5 = __errno_location();
  iVar3 = *piVar5;
  *pplVar8 = plVar1;
  if (local_c8[0] != '\0') {
    FUN_00407880(local_c8);
  }
  if (iVar4 != 0) {
    uVar6 = FUN_0040f700(0,3,param_1);
    uVar7 = dcgettext(0,"warning: cannot remove: %s",5);
                    /* WARNING: Subroutine does not return */
    error(0,iVar3,uVar7,uVar6);
  }
  if (plVar1 == (long *)0x0) {
    PTR_DAT_0061c418 = (undefined *)pplVar8;
  }
  free(__ptr);
  return;
}


__pid_t FUN_00407a30(int *param_1,long param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  __pid_t _Var4;
  int *piVar5;
  double local_e0;
  __sigset_t local_c0;
  
  iVar2 = FUN_0040da00(param_1,0x80000);
  if (iVar2 < 0) {
    _Var4 = -1;
  }
  else {
    if (DAT_0061c420 + 1U < DAT_0061c69c) {
      FUN_00405fb0();
      do {
        if ((int)DAT_0061c69c < 1) break;
        iVar2 = FUN_00405fb0();
      } while (iVar2 != 0);
    }
    piVar5 = __errno_location();
    param_2 = param_2 + -1;
    local_e0 = DAT_00416a30;
    do {
      iVar3 = pthread_sigmask(0,(__sigset_t *)&DAT_0061c6c0,&local_c0);
      uVar1 = DAT_0061c6a8;
      DAT_0061c6a8 = 0;
      _Var4 = fork();
      iVar2 = *piVar5;
      if (_Var4 == 0) {
        if (iVar3 != 0) goto LAB_00407ba0;
LAB_00407b45:
        FUN_00407880();
      }
      else {
        DAT_0061c6a8 = uVar1;
        if (iVar3 == 0) goto LAB_00407b45;
      }
      *piVar5 = iVar2;
      if (-1 < _Var4) {
        if (_Var4 != 0) {
          DAT_0061c69c = DAT_0061c69c + 1;
          return _Var4;
        }
LAB_00407ba0:
        close(0);
        close(1);
        return 0;
      }
      if (iVar2 != 0xb) goto LAB_00407b84;
      FUN_00411620(local_e0);
      local_e0 = local_e0 + local_e0;
      do {
        if ((int)DAT_0061c69c < 1) break;
        iVar2 = FUN_00405fb0();
      } while (iVar2 != 0);
      param_2 = param_2 + -1;
    } while (param_2 != -1);
    iVar2 = *piVar5;
LAB_00407b84:
    close(*param_1);
    close(param_1[1]);
    *piVar5 = iVar2;
  }
  return _Var4;
}


undefined8 FUN_00407c00(undefined8 param_1,undefined8 *param_2,long param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_28;
  undefined8 local_20;
  
  uVar1 = FUN_00411b40(param_1,&local_28,10,&local_20,"");
  switch(uVar1) {
  case 0:
  case 2:
    *param_2 = local_20;
    break;
  case 1:
  case 3:
    *param_2 = 0xffffffffffffffff;
    break;
  case 4:
    if (param_3 != 0) {
      uVar2 = FUN_0040f880(param_1);
      uVar3 = dcgettext(0,param_3,5);
      uVar4 = dcgettext(0,"%s: invalid count at start of %s",5);
                    /* WARNING: Subroutine does not return */
      error(2,0,uVar4,uVar3,uVar2);
    }
    return 0;
  }
  return local_28;
}


FILE * FUN_00407cd0(byte *param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  FILE *pFVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int *piVar6;
  long lVar7;
  byte *pbVar8;
  byte *pbVar9;
  bool bVar10;
  bool bVar11;
  
  bVar1 = *param_2;
  bVar10 = bVar1 < 0x72;
  bVar11 = bVar1 == 0x72;
  if (!bVar11) {
    if (bVar1 != 0x77) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("!\"unexpected mode passed to stream_open\"","src/sort.c",0x3cc,"stream_open");
    }
    if (param_1 != (byte *)0x0) {
      iVar2 = ftruncate(1,0);
      if (iVar2 != 0) {
        uVar4 = FUN_0040f700(0,3,param_1);
        uVar5 = dcgettext(0,"%s: error truncating",5);
        piVar6 = __errno_location();
                    /* WARNING: Subroutine does not return */
        error(2,*piVar6,uVar5,uVar4);
      }
    }
    return stdout;
  }
  lVar7 = 2;
  pbVar8 = param_1;
  pbVar9 = &DAT_0041814a;
  do {
    if (lVar7 == 0) break;
    lVar7 = lVar7 + -1;
    bVar10 = *pbVar8 < *pbVar9;
    bVar11 = *pbVar8 == *pbVar9;
    pbVar8 = pbVar8 + 1;
    pbVar9 = pbVar9 + 1;
  } while (bVar11);
  if ((!bVar10 && !bVar11) == bVar10) {
    DAT_0061c758 = 1;
    pFVar3 = stdin;
  }
  else {
    pFVar3 = (FILE *)0x0;
    iVar2 = open((char *)param_1,0x80000);
    if (-1 < iVar2) {
      pFVar3 = fdopen(iVar2,(char *)param_2);
    }
  }
  FUN_0040b800(pFVar3,2);
  return pFVar3;
}


void FUN_00407dd0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = dcgettext(0,"open failed",5);
                    /* WARNING: Subroutine does not return */
  FUN_00405dd0(uVar1,param_1);
}


void FUN_00407df0(FILE *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  char *pcVar3;
  
  iVar2 = fileno(param_1);
  if (iVar2 == 0) {
    if ((*(byte *)&param_1->_flags & 0x10) != 0) {
      clearerr_unlocked(param_1);
      return;
    }
  }
  else if (iVar2 == 1) {
    iVar2 = fflush_unlocked(param_1);
    if (iVar2 != 0) {
      pcVar3 = "fflush failed";
      goto LAB_00407e5a;
    }
  }
  else {
    iVar2 = FUN_00411f80(param_1);
    if (iVar2 != 0) {
      pcVar3 = "close failed";
LAB_00407e5a:
      uVar1 = dcgettext(0,pcVar3,5);
                    /* WARNING: Subroutine does not return */
      FUN_00405dd0(uVar1,param_2);
    }
  }
  return;
}


/* WARNING: Type propagation algorithm not settling */

void FUN_00407e70(byte **param_1,_IO_FILE *param_2,long param_3)

{
  char cVar1;
  char *pcVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  byte *pbVar6;
  byte *__nptr;
  byte *pbVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  byte *pbVar11;
  uint uVar12;
  long *plVar13;
  byte *local_48;
  byte *local_40 [2];
  
  pbVar6 = *param_1;
  pbVar11 = param_1[1];
  pbVar7 = pbVar6 + (long)pbVar11;
  if ((param_3 != 0) || (DAT_0061c740 == '\0')) {
    pbVar7[-1] = DAT_0061c500;
    pbVar6 = (byte *)fwrite_unlocked(pbVar6,1,(size_t)pbVar11,param_2);
    if (pbVar11 == pbVar6) {
      pbVar7[-1] = 0;
      return;
    }
    uVar10 = dcgettext(0,"write failed",5);
                    /* WARNING: Subroutine does not return */
    FUN_00405dd0(uVar10,param_3);
  }
  if (pbVar6 < pbVar7) {
    do {
      pbVar11 = pbVar6 + 1;
      bVar3 = *pbVar6;
      if (bVar3 == 9) {
        uVar12 = 0x3e;
        bVar3 = 0x3e;
        pbVar6 = (byte *)param_2->_IO_write_ptr;
        if (param_2->_IO_write_end < pbVar6 || (byte *)param_2->_IO_write_end == pbVar6)
        goto LAB_00407f31;
LAB_00407f02:
        param_2->_IO_write_ptr = (char *)(pbVar6 + 1);
        *pbVar6 = bVar3;
      }
      else {
        uVar12 = (uint)(char)bVar3;
        if (pbVar7 == pbVar11) {
          uVar12 = 10;
          bVar3 = 10;
        }
        pbVar6 = (byte *)param_2->_IO_write_ptr;
        if (pbVar6 <= param_2->_IO_write_end && (byte *)param_2->_IO_write_end != pbVar6)
        goto LAB_00407f02;
LAB_00407f31:
        iVar5 = __overflow(param_2,uVar12 & 0xff);
        if (iVar5 == -1) {
          uVar10 = dcgettext(0,"write failed",5);
                    /* WARNING: Subroutine does not return */
          FUN_00405dd0(uVar10,0);
        }
      }
      pbVar6 = pbVar11;
    } while (pbVar7 != pbVar11);
    pbVar6 = *param_1;
    pbVar11 = param_1[1];
  }
  pbVar7 = pbVar6 + -1 + (long)pbVar11;
  plVar13 = DAT_0061c750;
  do {
    __nptr = pbVar6;
    if (plVar13 != (long *)0x0) {
      lVar8 = *plVar13;
      lVar9 = plVar13[2];
      if (lVar8 == -1) {
        if (lVar9 != -1) goto LAB_00407fba;
LAB_00407fcb:
        if ((*(char *)(plVar13 + 6) == '\0') || (lVar8 != -1)) goto LAB_00407fd9;
      }
      else {
        __nptr = (byte *)FUN_00406360(pbVar6,pbVar11,plVar13);
        if (lVar9 != -1) {
LAB_00407fba:
          pbVar7 = (byte *)FUN_00406470(pbVar6,pbVar11,plVar13);
          goto LAB_00407fcb;
        }
LAB_00407fd9:
        if ((*(char *)((long)plVar13 + 0x36) == '\0') && ((plVar13[6] & 0xffff00ff0000U) == 0))
        goto LAB_004080a7;
      }
      bVar3 = *pbVar7;
      *pbVar7 = 0;
      cVar1 = (&DAT_0061ca80)[*__nptr];
      while (cVar1 != '\0') {
        __nptr = __nptr + 1;
        cVar1 = (&DAT_0061ca80)[*__nptr];
      }
      local_48 = pbVar7;
      if (__nptr <= pbVar7) {
        if (*(char *)((long)plVar13 + 0x36) == '\0') {
          if (*(char *)((long)plVar13 + 0x34) == '\0') {
            if ((plVar13[6] & 0xff0000ff0000U) != 0) {
              local_40[0] = __nptr;
              if (__nptr < pbVar7) {
                local_40[0] = __nptr + (*__nptr == 0x2d);
              }
              local_48 = __nptr;
              bVar4 = FUN_00405930(local_40);
              if ((0x2f < bVar4) &&
                 (local_48 = local_40[0], *(char *)((long)plVar13 + 0x35) != '\0')) {
                local_48 = local_40[0] + ((&DAT_004149c0)[*local_40[0]] != '\0');
              }
            }
          }
          else {
            local_48 = __nptr;
            strtold((char *)__nptr,(char **)&local_48);
          }
        }
        else {
          local_48 = __nptr;
          thunk_FUN_00405a4c(__nptr,&local_48);
        }
      }
      *pbVar7 = bVar3;
      pbVar7 = local_48;
    }
LAB_004080a7:
    while( true ) {
      lVar8 = FUN_00405eb0(pbVar6,__nptr);
      lVar9 = FUN_00405eb0(__nptr,pbVar7);
      while (lVar8 = lVar8 + -1, lVar8 != -1) {
        pcVar2 = stdout->_IO_write_ptr;
        if (pcVar2 < stdout->_IO_write_end) {
          stdout->_IO_write_ptr = pcVar2 + 1;
          *pcVar2 = ' ';
        }
        else {
          __overflow(stdout,0x20);
        }
      }
      if (lVar9 == 0) {
        uVar10 = dcgettext(0,"^ no match for key\n",5);
        __printf_chk(1,uVar10);
      }
      else {
        do {
          pcVar2 = stdout->_IO_write_ptr;
          if (pcVar2 < stdout->_IO_write_end) {
            stdout->_IO_write_ptr = pcVar2 + 1;
            *pcVar2 = '_';
          }
          else {
            __overflow(stdout,0x5f);
          }
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
        pcVar2 = stdout->_IO_write_ptr;
        if (pcVar2 < stdout->_IO_write_end) {
          stdout->_IO_write_ptr = pcVar2 + 1;
          *pcVar2 = '\n';
        }
        else {
          __overflow(stdout,10);
        }
      }
      if (plVar13 == (long *)0x0) {
        return;
      }
      plVar13 = (long *)plVar13[8];
      if (plVar13 != (long *)0x0) break;
      if (DAT_0061c759 != '\0') {
        return;
      }
      if (DAT_0061c75a != '\0') {
        return;
      }
      pbVar6 = *param_1;
      pbVar7 = pbVar6 + -1 + (long)param_1[1];
      __nptr = pbVar6;
    }
    pbVar6 = *param_1;
    pbVar11 = param_1[1];
    pbVar7 = pbVar6 + -1 + (long)pbVar11;
  } while( true );
}


ulong FUN_004082a0(void **param_1,void **param_2)

{
  void *pvVar1;
  void *pvVar2;
  uint uVar3;
  ulong uVar4;
  ulong __n;
  ulong uVar5;
  
  if (DAT_0061c750 != 0) {
    uVar4 = FUN_004065b0();
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    if (DAT_0061c759 != '\0') {
      return uVar4;
    }
    if (DAT_0061c75a != '\0') {
      return uVar4;
    }
  }
  pvVar1 = param_1[1];
  pvVar2 = param_2[1];
  uVar4 = (long)pvVar2 - 1;
  uVar5 = (long)pvVar1 - 1;
  if (uVar5 == 0) {
    uVar3 = -(uint)(uVar4 != 0);
  }
  else {
    uVar3 = 1;
    if (uVar4 != 0) {
      if (DAT_0061cba1 == '\0') {
        __n = uVar4;
        if (uVar5 <= uVar4) {
          __n = uVar5;
        }
        uVar3 = memcmp(*param_1,*param_2,__n);
        if ((uVar3 == 0) && (uVar3 = 0xffffffff, uVar4 <= uVar5)) {
          uVar3 = (uint)(pvVar1 != pvVar2);
        }
      }
      else {
        uVar3 = FUN_004115c0(*param_1,pvVar1,*param_2,pvVar2);
      }
    }
  }
  if (DAT_0061c75b != '\0') {
    uVar3 = -uVar3;
  }
  return (ulong)uVar3;
}


void FUN_00408370(undefined4 *param_1,ulong param_2,undefined4 *param_3,char param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  int iVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  undefined4 *puVar21;
  undefined4 *puVar22;
  ulong uVar23;
  undefined4 *puVar24;
  undefined4 *puVar25;
  long lVar26;
  
  if (param_2 == 2) {
    iVar18 = FUN_004082a0(param_1 + -8,param_1 + -0x10);
    if (param_4 != '\0') {
      puVar20 = param_1 + (long)(int)~(uint)(0 < iVar18) * 8;
      param_1 = param_1 + (long)(int)((0 < iVar18) - 2) * 8;
      uVar2 = puVar20[1];
      uVar3 = puVar20[2];
      uVar4 = puVar20[3];
      uVar5 = puVar20[4];
      uVar6 = puVar20[5];
      uVar7 = puVar20[6];
      uVar8 = puVar20[7];
      param_3[-8] = *puVar20;
      param_3[-7] = uVar2;
      param_3[-6] = uVar3;
      param_3[-5] = uVar4;
      uVar2 = *param_1;
      uVar3 = param_1[1];
      uVar4 = param_1[2];
      uVar9 = param_1[3];
      param_3[-4] = uVar5;
      param_3[-3] = uVar6;
      param_3[-2] = uVar7;
      param_3[-1] = uVar8;
      uVar5 = param_1[4];
      uVar6 = param_1[5];
      uVar7 = param_1[6];
      uVar8 = param_1[7];
      param_3[-0x10] = uVar2;
      param_3[-0xf] = uVar3;
      param_3[-0xe] = uVar4;
      param_3[-0xd] = uVar9;
      param_3[-0xc] = uVar5;
      param_3[-0xb] = uVar6;
      param_3[-10] = uVar7;
      param_3[-9] = uVar8;
      return;
    }
    if (0 < iVar18) {
      uVar2 = param_1[-8];
      uVar3 = param_1[-7];
      uVar4 = param_1[-6];
      uVar5 = param_1[-5];
      uVar6 = param_1[-4];
      uVar7 = param_1[-3];
      uVar8 = param_1[-2];
      uVar9 = param_1[-1];
      uVar10 = param_1[-0x10];
      uVar11 = param_1[-0xf];
      uVar12 = param_1[-0xe];
      uVar13 = param_1[-0xd];
      uVar14 = param_1[-0xc];
      uVar15 = param_1[-0xb];
      uVar16 = param_1[-10];
      uVar17 = param_1[-9];
      param_3[-8] = uVar2;
      param_3[-7] = uVar3;
      param_3[-6] = uVar4;
      param_3[-5] = uVar5;
      param_3[-4] = uVar6;
      param_3[-3] = uVar7;
      param_3[-2] = uVar8;
      param_3[-1] = uVar9;
      param_1[-8] = uVar10;
      param_1[-7] = uVar11;
      param_1[-6] = uVar12;
      param_1[-5] = uVar13;
      param_1[-4] = uVar14;
      param_1[-3] = uVar15;
      param_1[-2] = uVar16;
      param_1[-1] = uVar17;
      param_1[-0x10] = uVar2;
      param_1[-0xf] = uVar3;
      param_1[-0xe] = uVar4;
      param_1[-0xd] = uVar5;
      param_1[-0xc] = uVar6;
      param_1[-0xb] = uVar7;
      param_1[-10] = uVar8;
      param_1[-9] = uVar9;
    }
  }
  else {
    uVar23 = param_2 >> 1;
    lVar26 = param_2 - uVar23;
    puVar20 = param_1 + uVar23 * -8;
    if (param_4 == '\0') {
      FUN_00408370(puVar20,lVar26,param_3,0);
      puVar21 = param_1;
      puVar24 = puVar20;
      if (param_2 < 4) {
        uVar1 = *(undefined8 *)(param_1 + -6);
        uVar2 = param_1[-4];
        uVar3 = param_1[-3];
        uVar4 = param_1[-2];
        uVar5 = param_1[-1];
        *(undefined8 *)(param_3 + -8) = *(undefined8 *)(param_1 + -8);
        *(undefined8 *)(param_3 + -6) = uVar1;
        param_3[-4] = uVar2;
        param_3[-3] = uVar3;
        param_3[-2] = uVar4;
        param_3[-1] = uVar5;
        param_1 = param_3;
      }
      else {
        FUN_00408370(param_1,uVar23,param_3,1);
        param_1 = param_3;
      }
    }
    else {
      puVar24 = param_3 + uVar23 * -8;
      FUN_00408370(puVar20,lVar26,puVar24,1);
      puVar21 = param_3;
      if (3 < param_2) {
        FUN_00408370(param_1,uVar23,param_3,0);
      }
    }
    puVar20 = param_1 + -8;
    puVar25 = puVar24 + -8;
    while( true ) {
      while( true ) {
        puVar19 = puVar20;
        puVar22 = puVar21 + -8;
        iVar18 = FUN_004082a0(puVar19,puVar25);
        if (iVar18 < 1) break;
        uVar2 = puVar24[-7];
        uVar3 = puVar24[-6];
        uVar4 = puVar24[-5];
        *puVar22 = puVar24[-8];
        puVar21[-7] = uVar2;
        puVar21[-6] = uVar3;
        puVar21[-5] = uVar4;
        uVar2 = puVar24[-3];
        uVar3 = puVar24[-2];
        uVar4 = puVar24[-1];
        puVar21[-4] = puVar24[-4];
        puVar21[-3] = uVar2;
        puVar21[-2] = uVar3;
        puVar21[-1] = uVar4;
        lVar26 = lVar26 + -1;
        if (lVar26 == 0) {
          lVar26 = -0x20;
          do {
            puVar24 = (undefined4 *)((long)param_1 + lVar26);
            uVar2 = puVar24[1];
            uVar3 = puVar24[2];
            uVar4 = puVar24[3];
            puVar20 = (undefined4 *)((long)puVar22 + lVar26);
            *puVar20 = *puVar24;
            puVar20[1] = uVar2;
            puVar20[2] = uVar3;
            puVar20[3] = uVar4;
            puVar20 = (undefined4 *)((long)param_1 + lVar26 + 0x10);
            uVar2 = puVar20[1];
            uVar3 = puVar20[2];
            uVar4 = puVar20[3];
            puVar24 = (undefined4 *)((long)puVar21 + lVar26 + -0x10);
            *puVar24 = *puVar20;
            puVar24[1] = uVar2;
            puVar24[2] = uVar3;
            puVar24[3] = uVar4;
            lVar26 = lVar26 + -0x20;
            uVar23 = uVar23 - 1;
          } while (uVar23 != 0);
          return;
        }
        puVar20 = puVar19;
        puVar21 = puVar22;
        puVar24 = puVar25;
        puVar25 = puVar25 + -8;
      }
      uVar2 = param_1[-7];
      uVar3 = param_1[-6];
      uVar4 = param_1[-5];
      *puVar22 = param_1[-8];
      puVar21[-7] = uVar2;
      puVar21[-6] = uVar3;
      puVar21[-5] = uVar4;
      uVar2 = param_1[-3];
      uVar3 = param_1[-2];
      uVar4 = param_1[-1];
      puVar21[-4] = param_1[-4];
      puVar21[-3] = uVar2;
      puVar21[-2] = uVar3;
      puVar21[-1] = uVar4;
      uVar23 = uVar23 - 1;
      if (uVar23 == 0) break;
      puVar20 = puVar19 + -8;
      puVar21 = puVar22;
      param_1 = puVar19;
    }
  }
  return;
}


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004085d0(byte **param_1,_IO_FILE *param_2,long param_3)

{
  char cVar1;
  char *pcVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  byte *pbVar6;
  byte *__nptr;
  byte *pbVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  byte *pbVar11;
  uint uVar12;
  long *plVar13;
  byte *pbStack_48;
  byte *apbStack_40 [2];
  undefined8 uStack_30;
  
  if (DAT_0061c759 != '\0') {
    if (CONCAT44(uRam000000000061cb84,_DAT_0061cb80) != 0) {
      uStack_30 = 0x4085fe;
      iVar5 = FUN_004082a0(param_1,&DAT_0061cb80);
      if (iVar5 == 0) {
        return;
      }
    }
    _DAT_0061cb80 = *(undefined4 *)param_1;
    uRam000000000061cb84 = *(undefined4 *)((long)param_1 + 4);
    uRam000000000061cb88 = *(undefined4 *)(param_1 + 1);
    uRam000000000061cb8c = *(undefined4 *)((long)param_1 + 0xc);
    _DAT_0061cb90 = *(undefined4 *)(param_1 + 2);
    uRam000000000061cb94 = *(undefined4 *)((long)param_1 + 0x14);
    uRam000000000061cb98 = *(undefined4 *)(param_1 + 3);
    uRam000000000061cb9c = *(undefined4 *)((long)param_1 + 0x1c);
  }
  pbVar6 = *param_1;
  pbVar11 = param_1[1];
  pbVar7 = pbVar6 + (long)pbVar11;
  if ((param_3 != 0) || (DAT_0061c740 == '\0')) {
    pbVar7[-1] = DAT_0061c500;
    pbVar6 = (byte *)fwrite_unlocked(pbVar6,1,(size_t)pbVar11,param_2);
    if (pbVar11 == pbVar6) {
      pbVar7[-1] = 0;
      return;
    }
    uVar10 = dcgettext(0,"write failed",5);
                    /* WARNING: Subroutine does not return */
    FUN_00405dd0(uVar10,param_3);
  }
  if (pbVar6 < pbVar7) {
    do {
      pbVar11 = pbVar6 + 1;
      bVar3 = *pbVar6;
      if (bVar3 == 9) {
        uVar12 = 0x3e;
        bVar3 = 0x3e;
        pbVar6 = (byte *)param_2->_IO_write_ptr;
        if (param_2->_IO_write_end < pbVar6 || (byte *)param_2->_IO_write_end == pbVar6)
        goto LAB_00407f31;
LAB_00407f02:
        param_2->_IO_write_ptr = (char *)(pbVar6 + 1);
        *pbVar6 = bVar3;
      }
      else {
        uVar12 = (uint)(char)bVar3;
        if (pbVar7 == pbVar11) {
          uVar12 = 10;
          bVar3 = 10;
        }
        pbVar6 = (byte *)param_2->_IO_write_ptr;
        if (pbVar6 <= param_2->_IO_write_end && (byte *)param_2->_IO_write_end != pbVar6)
        goto LAB_00407f02;
LAB_00407f31:
        iVar5 = __overflow(param_2,uVar12 & 0xff);
        if (iVar5 == -1) {
          uVar10 = dcgettext(0,"write failed",5);
                    /* WARNING: Subroutine does not return */
          FUN_00405dd0(uVar10,0);
        }
      }
      pbVar6 = pbVar11;
    } while (pbVar7 != pbVar11);
    pbVar6 = *param_1;
    pbVar11 = param_1[1];
  }
  pbVar7 = pbVar6 + -1 + (long)pbVar11;
  plVar13 = DAT_0061c750;
  do {
    __nptr = pbVar6;
    if (plVar13 != (long *)0x0) {
      lVar8 = *plVar13;
      lVar9 = plVar13[2];
      if (lVar8 == -1) {
        if (lVar9 != -1) goto LAB_00407fba;
LAB_00407fcb:
        if ((*(char *)(plVar13 + 6) == '\0') || (lVar8 != -1)) goto LAB_00407fd9;
      }
      else {
        __nptr = (byte *)FUN_00406360(pbVar6,pbVar11,plVar13);
        if (lVar9 != -1) {
LAB_00407fba:
          pbVar7 = (byte *)FUN_00406470(pbVar6,pbVar11,plVar13);
          goto LAB_00407fcb;
        }
LAB_00407fd9:
        if ((*(char *)((long)plVar13 + 0x36) == '\0') && ((plVar13[6] & 0xffff00ff0000U) == 0))
        goto LAB_004080a7;
      }
      bVar3 = *pbVar7;
      *pbVar7 = 0;
      cVar1 = (&DAT_0061ca80)[*__nptr];
      while (cVar1 != '\0') {
        __nptr = __nptr + 1;
        cVar1 = (&DAT_0061ca80)[*__nptr];
      }
      pbStack_48 = pbVar7;
      if (__nptr <= pbVar7) {
        if (*(char *)((long)plVar13 + 0x36) == '\0') {
          if (*(char *)((long)plVar13 + 0x34) == '\0') {
            if ((plVar13[6] & 0xff0000ff0000U) != 0) {
              apbStack_40[0] = __nptr;
              if (__nptr < pbVar7) {
                apbStack_40[0] = __nptr + (*__nptr == 0x2d);
              }
              pbStack_48 = __nptr;
              bVar4 = FUN_00405930(apbStack_40);
              if ((0x2f < bVar4) &&
                 (pbStack_48 = apbStack_40[0], *(char *)((long)plVar13 + 0x35) != '\0')) {
                pbStack_48 = apbStack_40[0] + ((&DAT_004149c0)[*apbStack_40[0]] != '\0');
              }
            }
          }
          else {
            pbStack_48 = __nptr;
            strtold((char *)__nptr,(char **)&pbStack_48);
          }
        }
        else {
          pbStack_48 = __nptr;
          thunk_FUN_00405a4c(__nptr,&pbStack_48);
        }
      }
      *pbVar7 = bVar3;
      pbVar7 = pbStack_48;
    }
LAB_004080a7:
    while( true ) {
      lVar8 = FUN_00405eb0(pbVar6,__nptr);
      lVar9 = FUN_00405eb0(__nptr,pbVar7);
      while (lVar8 = lVar8 + -1, lVar8 != -1) {
        pcVar2 = stdout->_IO_write_ptr;
        if (pcVar2 < stdout->_IO_write_end) {
          stdout->_IO_write_ptr = pcVar2 + 1;
          *pcVar2 = ' ';
        }
        else {
          __overflow(stdout,0x20);
        }
      }
      if (lVar9 == 0) {
        uVar10 = dcgettext(0,"^ no match for key\n",5);
        __printf_chk(1,uVar10);
      }
      else {
        do {
          pcVar2 = stdout->_IO_write_ptr;
          if (pcVar2 < stdout->_IO_write_end) {
            stdout->_IO_write_ptr = pcVar2 + 1;
            *pcVar2 = '_';
          }
          else {
            __overflow(stdout,0x5f);
          }
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
        pcVar2 = stdout->_IO_write_ptr;
        if (pcVar2 < stdout->_IO_write_end) {
          stdout->_IO_write_ptr = pcVar2 + 1;
          *pcVar2 = '\n';
        }
        else {
          __overflow(stdout,10);
        }
      }
      if (plVar13 == (long *)0x0) {
        return;
      }
      plVar13 = (long *)plVar13[8];
      if (plVar13 != (long *)0x0) break;
      if (DAT_0061c759 != '\0') {
        return;
      }
      if (DAT_0061c75a != '\0') {
        return;
      }
      pbVar6 = *param_1;
      pbVar7 = pbVar6 + -1 + (long)param_1[1];
      __nptr = pbVar6;
    }
    pbVar6 = *param_1;
    pbVar11 = param_1[1];
    pbVar7 = pbVar6 + -1 + (long)pbVar11;
  } while( true );
}


void FUN_00408640(long param_1,ulong param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
                 void *param_6)

{
  long lVar1;
  long lVar2;
  undefined4 *puVar3;
  void *pvVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  char cVar23;
  int iVar24;
  void *__ptr;
  void *__ptr_00;
  void *__ptr_01;
  ulong *__ptr_02;
  ulong *puVar25;
  long lVar26;
  ulong *puVar27;
  ulong uVar28;
  void *pvVar29;
  undefined4 *puVar30;
  undefined8 *puVar31;
  ulong uVar32;
  undefined8 *puVar33;
  ulong uVar34;
  ulong uVar35;
  void **ppvVar36;
  ulong local_c8;
  ulong local_c0;
  void **local_a0;
  ulong local_70;
  void *local_68;
  void *local_58;
  void *local_50;
  long local_48;
  long local_40;
  
  if ((-1 < SUB168(ZEXT816(0x38) * ZEXT816(param_3),0)) &&
     (SUB168(ZEXT816(0x38) * ZEXT816(param_3) >> 0x40,0) == 0)) {
    lVar2 = param_3 * 8;
    __ptr = (void *)FUN_00411210();
    if ((-1 < lVar2) && (param_3 >> 0x3d == 0)) {
      uVar34 = 0;
      __ptr_00 = (void *)FUN_00411210(lVar2);
      __ptr_01 = (void *)FUN_00411210(lVar2);
      __ptr_02 = (ulong *)FUN_00411210(lVar2);
      lVar2 = DAT_0061c750;
      local_58 = (void *)0x0;
      local_c0 = param_3;
      local_70 = param_2;
      if (param_3 != 0) {
        do {
          while( true ) {
            lVar26 = uVar34 * 8;
            ppvVar36 = (void **)((long)__ptr + uVar34 * 0x38);
            uVar28 = DAT_0061c428;
            if (DAT_0061c428 <= DAT_0061c778 / local_c0) {
              uVar28 = DAT_0061c778 / local_c0;
            }
            FUN_00405e30(ppvVar36,0x20,uVar28);
            puVar31 = (undefined8 *)(uVar34 * 0x10 + param_1);
            cVar23 = FUN_004074d0(ppvVar36,*(undefined8 *)((long)param_6 + lVar26),*puVar31);
            if (cVar23 != '\0') break;
            FUN_00407df0(*(undefined8 *)((long)param_6 + lVar26),*puVar31);
            if (uVar34 < local_70) {
              local_70 = local_70 - 1;
              FUN_00407920(*puVar31);
            }
            free(*ppvVar36);
            uVar28 = local_c0 - 1;
            if (uVar28 <= uVar34) goto LAB_004087e2;
            lVar1 = local_c0 * 8;
            do {
              puVar3 = (undefined4 *)(param_1 + 0x10 + lVar26 * 2);
              uVar7 = puVar3[1];
              uVar8 = puVar3[2];
              uVar9 = puVar3[3];
              uVar6 = *(undefined8 *)((long)param_6 + lVar26 + 8);
              puVar30 = (undefined4 *)(param_1 + lVar26 * 2);
              *puVar30 = *puVar3;
              puVar30[1] = uVar7;
              puVar30[2] = uVar8;
              puVar30[3] = uVar9;
              *(undefined8 *)((long)param_6 + lVar26) = uVar6;
              lVar26 = lVar26 + 8;
              local_c0 = uVar28;
            } while (lVar1 + -8 != lVar26);
          }
          pvVar29 = ppvVar36[3];
          pvVar4 = *ppvVar36;
          *(long *)((long)__ptr_00 + uVar34 * 8) = (long)pvVar29 + (long)pvVar4 + -0x20;
          *(long *)((long)__ptr_01 + uVar34 * 8) =
               (long)pvVar29 + (long)pvVar4 + (long)ppvVar36[2] * -0x20;
          uVar34 = uVar34 + 1;
          uVar28 = local_c0;
        } while (uVar34 < local_c0);
LAB_004087e2:
        local_c0 = uVar28;
        if (local_c0 != 0) {
          uVar34 = 0;
          do {
            __ptr_02[uVar34] = uVar34;
            uVar34 = uVar34 + 1;
          } while (uVar34 != local_c0);
          if (local_c0 != 1) {
            uVar34 = 1;
            do {
              while( true ) {
                puVar27 = __ptr_02 + uVar34;
                uVar28 = *puVar27;
                uVar5 = __ptr_02[uVar34 - 1];
                iVar24 = FUN_004082a0(*(undefined8 *)((long)__ptr_00 + uVar5 * 8),
                                      *(undefined8 *)((long)__ptr_00 + uVar28 * 8));
                if (iVar24 < 1) break;
                __ptr_02[uVar34 - 1] = uVar28;
                uVar34 = 1;
                *puVar27 = uVar5;
              }
              uVar34 = uVar34 + 1;
            } while (uVar34 < local_c0);
          }
          local_68 = (void *)0x0;
          local_a0 = (void **)0x0;
LAB_004088a0:
          local_c8 = *__ptr_02;
          lVar26 = local_c8 * 8;
          puVar27 = (ulong *)((long)__ptr_00 + lVar26);
          ppvVar36 = (void **)*puVar27;
          if (DAT_0061c759 == '\0') {
            FUN_00407e70(ppvVar36,param_4,param_5);
          }
          else {
            if (local_a0 != (void **)0x0) {
              iVar24 = FUN_004082a0(local_a0,ppvVar36);
              if (iVar24 == 0) goto LAB_004088e6;
              FUN_00407e70(&local_58,param_4,param_5);
            }
            pvVar29 = ppvVar36[1];
            pvVar4 = local_68;
            if (local_68 < pvVar29) {
              do {
                local_68 = pvVar29;
                if (pvVar4 == (void *)0x0) break;
                local_68 = (void *)((long)pvVar4 * 2);
                pvVar4 = local_68;
              } while (local_68 < pvVar29);
              free(local_58);
              local_58 = (void *)FUN_00411210(local_68);
              pvVar29 = ppvVar36[1];
            }
            local_50 = pvVar29;
            memcpy(local_58,*ppvVar36,(size_t)pvVar29);
            local_a0 = &local_58;
            if (lVar2 != 0) {
              local_48 = ((long)ppvVar36[2] + (long)local_58) - (long)*ppvVar36;
              local_40 = ((long)local_58 + (long)ppvVar36[3]) - (long)*ppvVar36;
            }
          }
LAB_004088e6:
          if (*(void ***)(ulong *)((long)__ptr_01 + lVar26) < ppvVar36) {
            *puVar27 = (ulong)(ppvVar36 + -4);
            if (local_c0 == 1) goto LAB_00408a47;
LAB_00408980:
            uVar28 = *puVar27;
            uVar34 = 1;
            uVar5 = 1;
            uVar35 = local_c0;
            do {
              while( true ) {
                uVar32 = uVar5;
                uVar5 = __ptr_02[uVar32];
                iVar24 = FUN_004082a0(uVar28,*(undefined8 *)((long)__ptr_00 + uVar5 * 8));
                if ((-1 < iVar24) && ((uVar5 <= local_c8 || (iVar24 != 0)))) break;
                uVar5 = uVar34 + uVar32 >> 1;
                uVar35 = uVar32;
                if (uVar32 <= uVar34) goto LAB_004089ea;
              }
              uVar34 = uVar32 + 1;
              uVar5 = uVar34 + uVar35 >> 1;
            } while (uVar34 < uVar35);
LAB_004089ea:
            if (uVar34 - 1 != 0) {
              puVar27 = __ptr_02;
              do {
                puVar25 = puVar27 + 1;
                *puVar27 = puVar27[1];
                puVar27 = puVar25;
              } while (puVar25 != __ptr_02 + (uVar34 - 1));
            }
            __ptr_02[uVar34 - 1] = local_c8;
            goto LAB_004088a0;
          }
          puVar31 = (undefined8 *)((long)param_6 + lVar26);
          puVar33 = (undefined8 *)(local_c8 * 0x10 + param_1);
          ppvVar36 = (void **)((long)__ptr + local_c8 * 0x38);
          cVar23 = FUN_004074d0(ppvVar36,*puVar31,*puVar33);
          if (cVar23 != '\0') {
            pvVar29 = ppvVar36[3];
            pvVar4 = *ppvVar36;
            *puVar27 = ((long)pvVar29 + (long)pvVar4) - 0x20;
            *(ulong *)((long)__ptr_01 + lVar26) =
                 (long)pvVar29 + (long)pvVar4 + (long)ppvVar36[2] * -0x20;
            if (local_c0 != 1) goto LAB_00408980;
LAB_00408a47:
            *__ptr_02 = local_c8;
            goto LAB_004088a0;
          }
          puVar27 = __ptr_02 + 1;
          if (local_c0 != 1) {
            do {
              if (local_c8 < *puVar27) {
                *puVar27 = *puVar27 - 1;
                local_c8 = *__ptr_02;
              }
              puVar27 = puVar27 + 1;
            } while (__ptr_02 + local_c0 != puVar27);
            puVar33 = (undefined8 *)(local_c8 * 0x10 + param_1);
            puVar31 = (undefined8 *)((long)param_6 + local_c8 * 8);
            ppvVar36 = (void **)((long)__ptr + local_c8 * 0x38);
          }
          uVar34 = local_c0 - 1;
          FUN_00407df0(*puVar31,*puVar33);
          if (local_c8 < local_70) {
            local_70 = local_70 - 1;
            FUN_00407920(*puVar33);
          }
          free(*ppvVar36);
          if (local_c8 < uVar34) {
            lVar26 = local_c8 * 8;
            puVar30 = (undefined4 *)((long)__ptr + local_c8 * 0x38);
            do {
              puVar3 = (undefined4 *)(param_1 + 0x10 + lVar26 * 2);
              uVar7 = *puVar3;
              uVar8 = puVar3[1];
              uVar9 = puVar3[2];
              uVar10 = puVar3[3];
              uVar11 = puVar30[0xe];
              uVar12 = puVar30[0xf];
              uVar13 = puVar30[0x10];
              uVar14 = puVar30[0x11];
              uVar15 = puVar30[0x12];
              uVar16 = puVar30[0x13];
              uVar17 = puVar30[0x14];
              uVar18 = puVar30[0x15];
              *(undefined8 *)((long)param_6 + lVar26) = *(undefined8 *)((long)param_6 + lVar26 + 8);
              uVar6 = *(undefined8 *)(puVar30 + 0x1a);
              uVar19 = puVar30[0x16];
              uVar20 = puVar30[0x17];
              uVar21 = puVar30[0x18];
              uVar22 = puVar30[0x19];
              puVar3 = (undefined4 *)(param_1 + lVar26 * 2);
              *puVar3 = uVar7;
              puVar3[1] = uVar8;
              puVar3[2] = uVar9;
              puVar3[3] = uVar10;
              *(undefined8 *)(puVar30 + 0xc) = uVar6;
              uVar6 = *(undefined8 *)((long)__ptr_00 + lVar26 + 8);
              *puVar30 = uVar11;
              puVar30[1] = uVar12;
              puVar30[2] = uVar13;
              puVar30[3] = uVar14;
              *(undefined8 *)((long)__ptr_00 + lVar26) = uVar6;
              uVar6 = *(undefined8 *)((long)__ptr_01 + lVar26 + 8);
              puVar30[4] = uVar15;
              puVar30[5] = uVar16;
              puVar30[6] = uVar17;
              puVar30[7] = uVar18;
              *(undefined8 *)((long)__ptr_01 + lVar26) = uVar6;
              lVar26 = lVar26 + 8;
              puVar30[8] = uVar19;
              puVar30[9] = uVar20;
              puVar30[10] = uVar21;
              puVar30[0xb] = uVar22;
              puVar30 = puVar30 + 0xe;
            } while (local_c0 * 8 + -8 != lVar26);
          }
          if (uVar34 != 0) {
            lVar26 = local_c0 - 1;
            puVar27 = __ptr_02;
            do {
              puVar25 = puVar27 + 1;
              *puVar27 = puVar27[1];
              puVar27 = puVar25;
              local_c0 = uVar34;
            } while (__ptr_02 + lVar26 != puVar25);
            goto LAB_004088a0;
          }
          if ((local_a0 != (void **)0x0) && (DAT_0061c759 != '\0')) {
            FUN_00407e70(&local_58,param_4,param_5);
            free(local_58);
          }
        }
      }
      FUN_00407df0(param_4,param_5);
      free(param_6);
      free(__ptr);
      free(__ptr_02);
      free(__ptr_01);
      free(__ptr_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00411460();
}


void FUN_00408e10(int param_1,int param_2)

{
  dup2(param_1,param_2);
  close(param_1);
  return;
}


ulong FUN_00408e20(undefined8 *param_1,ulong param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  FILE *pFVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  int local_40;
  int local_3c;
  
  if (((long)(param_2 << 3) < 0) || (param_2 >> 0x3d != 0)) {
LAB_00408ff0:
                    /* WARNING: Subroutine does not return */
    FUN_00411460();
  }
  lVar3 = FUN_00411210();
  *param_3 = lVar3;
  uVar9 = 0;
  if (param_2 != 0) {
    do {
      lVar4 = param_1[1];
      if ((lVar4 == 0) || (*(char *)(lVar4 + 0xc) == '\0')) {
        lVar4 = FUN_00407cd0(*param_1);
        *(long *)(lVar3 + uVar9 * 8) = lVar4;
        if (lVar4 == 0) {
          return uVar9;
        }
      }
      else {
        if (*(char *)(lVar4 + 0xc) == '\x01') {
          FUN_004060a0(*(undefined4 *)(lVar4 + 8));
        }
        iVar1 = open((char *)(lVar4 + 0xd),0);
        if (iVar1 < 0) {
LAB_00408f00:
          *(undefined8 *)(lVar3 + uVar9 * 8) = 0;
          return uVar9;
        }
        iVar2 = FUN_00407a30(&local_40,9);
        if (iVar2 == -1) {
          piVar5 = __errno_location();
          if (*piVar5 != 0x18) {
            uVar7 = FUN_0040f630(4,DAT_0061c748);
            uVar8 = dcgettext(0,"couldn\'t create process for %s -d",5);
                    /* WARNING: Subroutine does not return */
            error(2,*piVar5,uVar8,uVar7);
          }
          close(iVar1);
          *piVar5 = 0x18;
          goto LAB_00408f00;
        }
        if (iVar2 == 0) {
          close(local_40);
          if (iVar1 != 0) {
            FUN_00408e10(iVar1,0);
          }
          if (local_3c != 1) {
            FUN_00408e10(local_3c,1);
          }
          execlp(DAT_0061c748,DAT_0061c748,&DAT_00416559,0);
          piVar5 = __errno_location();
          FUN_004060d0(*piVar5,"couldn\'t execute compress program (with -d)");
          goto LAB_00408ff0;
        }
        *(int *)(lVar4 + 8) = iVar2;
        FUN_00406190(lVar4);
        close(iVar1);
        close(local_3c);
        pFVar6 = fdopen(local_40,"r");
        if (pFVar6 == (FILE *)0x0) {
          piVar5 = __errno_location();
          iVar1 = *piVar5;
          close(local_40);
          *(undefined8 *)(lVar3 + uVar9 * 8) = 0;
          *piVar5 = iVar1;
          return uVar9;
        }
        *(FILE **)(lVar3 + uVar9 * 8) = pFVar6;
      }
      uVar9 = uVar9 + 1;
      param_1 = param_1 + 2;
    } while (param_2 != uVar9);
  }
  return uVar9;
}


ulong FUN_00409030(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 local_40 [2];
  
  uVar2 = FUN_00408e20(param_1,param_3,local_40);
  if ((uVar2 < param_3) && (uVar2 < 2)) {
    uVar1 = *(undefined8 *)(param_1 + uVar2 * 0x10);
    uVar3 = dcgettext(0,"open failed",5);
                    /* WARNING: Subroutine does not return */
    FUN_00405dd0(uVar3,uVar1);
  }
  FUN_00408640(param_1,param_2,uVar2,param_4,param_5,local_40[0]);
  return uVar2;
}


/* WARNING: Could not reconcile some variable overlaps */

undefined8 * FUN_004090c0(FILE **param_1,char param_2)

{
  void *__dest;
  char *__s;
  int iVar1;
  int iVar2;
  size_t __n;
  undefined8 *__ptr;
  int *piVar3;
  FILE *pFVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  bool bVar8;
  uint local_c8;
  int local_c4;
  __sigset_t local_c0;
  
  __s = *(char **)(DAT_0061c770 + DAT_0061c5e8 * 8);
  __n = strlen(__s);
  __ptr = (undefined8 *)FUN_00411210(__n + 0x20 & 0xfffffffffffffff8);
  __dest = (void *)((long)__ptr + 0xd);
  memcpy(__dest,__s,__n);
  *(undefined8 *)((long)__ptr + __n + 0xd) = s__sortXXXXXX_00414950._0_8_;
  *(undefined4 *)((long)__ptr + __n + 0x15) = s__sortXXXXXX_00414950._8_4_;
  *__ptr = 0;
  DAT_0061c5e8 = DAT_0061c5e8 + 1;
  if (DAT_0061c5e8 == DAT_0061c768) {
    DAT_0061c5e8 = 0;
  }
  iVar1 = pthread_sigmask(0,(__sigset_t *)&DAT_0061c6c0,&local_c0);
  local_c8 = local_c8 & 0xffffff00 | (uint)(iVar1 == 0);
  iVar1 = FUN_00410680(__dest,0x80000);
  piVar3 = __errno_location();
  if (iVar1 < 0) {
    iVar1 = *piVar3;
    if ((char)local_c8 != '\0') {
      FUN_00407880(&local_c8);
      *piVar3 = iVar1;
    }
    if ((iVar1 != 0x18) || (param_2 != '\x01')) {
      uVar5 = FUN_0040f630(4,__s);
      uVar6 = dcgettext(0,"cannot create temporary file in %s",5);
                    /* WARNING: Subroutine does not return */
      error(2,*piVar3,uVar6,uVar5);
    }
    puVar7 = (undefined8 *)0x0;
    free(__ptr);
  }
  else {
    puVar7 = __ptr;
    *(undefined8 **)PTR_DAT_0061c418 = __ptr;
    PTR_DAT_0061c418 = (undefined *)puVar7;
    if ((char)local_c8 != '\0') {
      iVar2 = *piVar3;
      FUN_00407880(&local_c8);
      *piVar3 = iVar2;
    }
    bVar8 = DAT_0061c748 != (char *)0x0;
    *(undefined *)((long)__ptr + 0xc) = 0;
    if (bVar8) {
      iVar2 = FUN_00407a30(&local_c8,4);
      *(int *)(__ptr + 1) = iVar2;
      if (iVar2 < 1) {
        if (iVar2 == 0) {
          close(local_c4);
          if (iVar1 != 1) {
            FUN_00408e10(iVar1,1);
          }
          if (local_c8 != 0) {
            FUN_00408e10(local_c8,0);
          }
          execlp(DAT_0061c748,DAT_0061c748,0);
          FUN_004060d0(*piVar3,"couldn\'t execute compress program");
          goto LAB_004092d2;
        }
      }
      else {
        close(iVar1);
        close(local_c8);
        FUN_00406190(__ptr);
        iVar1 = local_c4;
      }
    }
    pFVar4 = fdopen(iVar1,"w");
    *param_1 = pFVar4;
    puVar7 = __ptr;
    if (pFVar4 == (FILE *)0x0) {
LAB_004092d2:
      uVar5 = dcgettext(0,"couldn\'t create temporary file",5);
                    /* WARNING: Subroutine does not return */
      FUN_00405dd0(uVar5,__dest);
    }
  }
  return puVar7;
}


void FUN_00409330(long *param_1,ulong param_2,ulong param_3,char *param_4)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int *piVar6;
  ulong uVar7;
  byte *pbVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  byte *pbVar13;
  byte *pbVar14;
  long *plVar15;
  byte **ppbVar16;
  long *plVar17;
  bool bVar18;
  bool bVar19;
  byte bVar20;
  ulong local_198;
  stat *local_188;
  undefined8 local_160;
  stat local_158;
  stat local_c8;
  
  bVar20 = 0;
  uVar5 = (ulong)DAT_0061c420;
  local_198 = param_3;
  if (uVar5 < param_3) {
    do {
      uVar4 = 0;
      lVar12 = 0;
      uVar7 = uVar4;
      if (local_198 < uVar5) {
        uVar10 = 0;
        uVar11 = uVar5;
        uVar7 = local_198;
        plVar15 = param_1;
        plVar17 = param_1;
      }
      else {
        do {
          lVar3 = FUN_004090c0(&local_c8,0);
          uVar4 = (ulong)DAT_0061c420;
          uVar5 = param_2;
          if (uVar4 <= param_2) {
            uVar5 = uVar4;
          }
          uVar4 = FUN_00409030(param_1 + lVar12 * 2,uVar5,uVar4,local_c8.st_dev,lVar3 + 0xd);
          uVar11 = (ulong)DAT_0061c420;
          uVar5 = param_2;
          if (uVar4 <= param_2) {
            uVar5 = uVar4;
          }
          lVar12 = lVar12 + uVar4;
          param_2 = param_2 - uVar5;
          uVar4 = uVar7 + 1;
          param_1[uVar7 * 2] = lVar3 + 0xd;
          param_1[uVar7 * 2 + 1] = lVar3;
          uVar7 = uVar4;
        } while (uVar11 <= local_198 - lVar12);
        uVar10 = uVar4 % uVar11;
        uVar5 = uVar11 - uVar10;
        uVar7 = local_198 - lVar12;
        plVar15 = param_1 + lVar12 * 2;
        plVar17 = param_1 + uVar4 * 2;
      }
      if (uVar5 < uVar7) {
        uVar11 = (uVar7 + 1 + uVar10) - uVar11;
        lVar3 = FUN_004090c0(&local_c8,0);
        uVar5 = param_2;
        if (uVar11 <= param_2) {
          uVar5 = uVar11;
        }
        uVar7 = FUN_00409030(plVar15,uVar5,uVar11,local_c8.st_dev,lVar3 + 0xd);
        uVar5 = param_2;
        if (uVar7 <= param_2) {
          uVar5 = uVar7;
        }
        uVar4 = uVar4 + 1;
        lVar12 = lVar12 + uVar7;
        *plVar17 = lVar3 + 0xd;
        plVar17[1] = lVar3;
        param_2 = param_2 - uVar5;
        plVar15 = param_1 + lVar12 * 2;
        plVar17 = param_1 + uVar4 * 2;
      }
      param_2 = param_2 + uVar4;
      param_3 = local_198 + (uVar4 - lVar12);
      memmove(plVar17,plVar15,(local_198 - lVar12) * 0x10);
      uVar5 = (ulong)DAT_0061c420;
      local_198 = param_3;
    } while (uVar5 < param_3);
  }
  if (param_2 < param_3) {
    bVar18 = false;
    pbVar8 = (byte *)0x0;
    bVar19 = true;
    ppbVar16 = (byte **)(param_1 + param_2 * 2);
    bVar1 = false;
    uVar5 = param_2;
LAB_004094d1:
    do {
      lVar12 = 2;
      pbVar13 = *ppbVar16;
      pbVar14 = &DAT_0041814a;
      do {
        if (lVar12 == 0) break;
        lVar12 = lVar12 + -1;
        bVar18 = *pbVar13 < *pbVar14;
        bVar19 = *pbVar13 == *pbVar14;
        pbVar13 = pbVar13 + (ulong)bVar20 * -2 + 1;
        pbVar14 = pbVar14 + (ulong)bVar20 * -2 + 1;
      } while (bVar19);
      if (((param_4 != (char *)0x0) &&
          (iVar2 = strcmp(param_4,(char *)*ppbVar16), (!bVar18 && !bVar19) != bVar18)) &&
         (iVar2 == 0)) {
LAB_0040964e:
        if (pbVar8 == (byte *)0x0) {
          pbVar8 = (byte *)FUN_004090c0(&local_160,0);
          pbVar13 = pbVar8 + 0xd;
          FUN_00409030(ppbVar16,0,1,local_160,pbVar13);
        }
        else {
          pbVar13 = pbVar8 + 0xd;
        }
        *ppbVar16 = pbVar13;
        ppbVar16[1] = pbVar8;
LAB_004094c3:
        uVar5 = uVar5 + 1;
        ppbVar16 = ppbVar16 + 2;
        bVar18 = uVar5 < param_3;
        bVar19 = uVar5 == param_3;
        if (bVar19) break;
        goto LAB_004094d1;
      }
      if ((!bVar1) && (iVar2 = __fxstat(1,1,&local_158), iVar2 != 0)) break;
      if ((!bVar18 && !bVar19) == bVar18) {
        bVar1 = true;
        iVar2 = __fxstat(1,0,&local_c8);
        if (iVar2 == 0) goto LAB_004094aa;
        goto LAB_004094c3;
      }
      bVar1 = true;
      iVar2 = __xstat(1,(char *)*ppbVar16,&local_c8);
      if (iVar2 == 0) {
LAB_004094aa:
        bVar1 = true;
        if ((local_c8.st_ino == local_158.st_ino) && (local_c8.st_dev == local_158.st_dev))
        goto LAB_0040964e;
        goto LAB_004094c3;
      }
      uVar5 = uVar5 + 1;
      ppbVar16 = ppbVar16 + 2;
      bVar18 = uVar5 < param_3;
      bVar19 = uVar5 == param_3;
    } while (!bVar19);
  }
  do {
    local_188 = &local_158;
    uVar5 = FUN_00408e20(param_1,param_3,local_188);
    if (param_3 == uVar5) {
      lVar12 = FUN_00407cd0(param_4,&DAT_0041655c);
      if (lVar12 != 0) {
        FUN_00408640(param_1,param_2,param_3,lVar12,param_4,local_158.st_dev);
        return;
      }
      piVar6 = __errno_location();
      if ((*piVar6 != 0x18) || (param_3 < 3)) {
        uVar9 = dcgettext(0,"open failed",5);
                    /* WARNING: Subroutine does not return */
        FUN_00405dd0(uVar9,param_4);
      }
    }
    else if (uVar5 < 3) {
      lVar12 = param_1[uVar5 * 2];
      uVar9 = dcgettext(0,"open failed",5);
                    /* WARNING: Subroutine does not return */
      FUN_00405dd0(uVar9,lVar12);
    }
    plVar15 = param_1 + uVar5 * 2 + -2;
    do {
      plVar17 = plVar15;
      uVar5 = uVar5 - 1;
      FUN_00407df0(*(undefined8 *)(local_158.st_dev + uVar5 * 8),*plVar17);
      lVar12 = FUN_004090c0(&local_c8,2 < uVar5);
      plVar15 = plVar17 + -2;
    } while (lVar12 == 0);
    uVar7 = uVar5;
    if (param_2 <= uVar5) {
      uVar7 = param_2;
    }
    lVar3 = param_3 - uVar5;
    FUN_00408640(param_1,uVar7,uVar5,local_c8.st_dev,lVar12 + 0xd,local_158.st_dev);
    param_2 = (param_2 - uVar7) + 1;
    *param_1 = lVar12 + 0xd;
    param_3 = lVar3 + 1;
    param_1[1] = lVar12;
    memmove(param_1 + 2,plVar17,lVar3 * 0x10);
  } while( true );
}


void FUN_00409830(undefined8 param_1,long *param_2)

{
  if (*param_2 == param_2[2]) {
    if ((param_2[1] != param_2[3]) && (param_2[5] == 0)) {
      FUN_00406320();
      return;
    }
  }
  else if ((param_2[1] != param_2[3]) || (param_2[6] == 0)) {
    FUN_00406320();
    return;
  }
  return;
}


undefined8
FUN_00409880(long param_1,ulong param_2,ulong param_3,long *param_4,undefined8 *param_5,
            undefined8 param_6,undefined8 param_7)

{
  pthread_mutex_t *__mutex;
  pthread_mutex_t *__mutex_00;
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  ulong uVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  pthread_t local_80;
  long local_78;
  ulong local_70;
  ulong local_68;
  long local_60;
  undefined8 *local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  uVar20 = param_2 >> 1;
  uVar16 = param_4[5];
  uVar8 = param_4[6];
  local_60 = param_4[8];
  local_48 = param_7;
  local_78 = param_1;
  local_70 = uVar20;
  local_68 = param_3;
  local_58 = param_5;
  local_50 = param_6;
  if ((0x1ffff < uVar16 + uVar8) && (1 < param_2)) {
    iVar7 = pthread_create(&local_80,(pthread_attr_t *)0x0,FUN_00409fe0,&local_78);
    if (iVar7 == 0) {
      FUN_00409880(param_1 + param_4[5] * -0x20,param_2 - uVar20,param_3,param_4[9],param_5,param_6)
      ;
      pthread_join(local_80,(void **)0x0);
      return param_7;
    }
    uVar16 = param_4[5];
    uVar8 = param_4[6];
  }
  lVar21 = param_1 + param_3 * -0x20;
  lVar23 = param_1 + uVar16 * -0x20;
  if (1 < uVar8) {
    FUN_00408370(lVar23,uVar8,lVar21 + (uVar16 >> 1) * -0x20,0);
  }
  if (1 < uVar16) {
    FUN_00408370(param_1,uVar16,lVar21,0);
  }
  *param_4 = param_1;
  param_4[1] = lVar23;
  param_4[2] = lVar23;
  param_4[3] = param_1 + uVar16 * -0x20 + uVar8 * -0x20;
  FUN_00406320(param_5,param_4);
  __mutex = (pthread_mutex_t *)(param_5 + 1);
LAB_004099d0:
  pthread_mutex_lock(__mutex);
  while (plVar9 = (long *)FUN_0040d190(*param_5), plVar9 == (long *)0x0) {
    pthread_cond_wait((pthread_cond_t *)(param_5 + 6),__mutex);
  }
  pthread_mutex_unlock(__mutex);
  __mutex_00 = (pthread_mutex_t *)(plVar9 + 0xb);
  pthread_mutex_lock(__mutex_00);
  uVar1 = *(uint *)(plVar9 + 10);
  *(undefined *)((long)plVar9 + 0x54) = 0;
  if (uVar1 == 0) {
    pthread_mutex_unlock(__mutex_00);
    uVar11 = FUN_00406320(param_5,plVar9);
    return uVar11;
  }
  puVar2 = (undefined4 *)*plVar9;
  puVar14 = (undefined4 *)plVar9[1];
  lVar23 = (param_3 >> ((char)uVar1 * '\x02' + 2U & 0x3f)) + 1;
  puVar13 = puVar14;
  puVar15 = puVar2;
  if (1 < uVar1) {
    puVar19 = *(undefined4 **)plVar9[4];
    while (puVar17 = (undefined4 *)plVar9[2], puVar17 != puVar15) {
      puVar18 = puVar19;
      if ((undefined4 *)plVar9[3] == puVar13) {
        lVar24 = plVar9[6];
        lVar22 = plVar9[5];
        lVar21 = (long)puVar14 - (long)puVar13 >> 5;
        lVar10 = (long)puVar2 - (long)puVar15 >> 5;
        if (lVar24 != lVar21) goto LAB_00409bdd;
        lVar12 = lVar23 + -1;
        if (lVar23 == 0) goto LAB_00409b70;
        goto LAB_00409b3a;
      }
      if (lVar23 == 0) {
        lVar22 = plVar9[5];
        lVar23 = -1;
        lVar21 = (long)puVar14 - (long)puVar13 >> 5;
        lVar10 = (long)puVar2 - (long)puVar15 >> 5;
        lVar24 = plVar9[6];
        if (plVar9[6] != lVar21) goto LAB_00409bdd;
        lVar12 = -2;
        goto LAB_00409b3a;
      }
      iVar7 = FUN_004082a0(puVar15 + -8,puVar13 + -8);
      puVar17 = puVar19 + -8;
      if (iVar7 < 1) {
        lVar21 = *plVar9;
        puVar13 = (undefined4 *)plVar9[1];
        uVar3 = *(undefined4 *)(lVar21 + -0x20);
        uVar4 = *(undefined4 *)(lVar21 + -0x1c);
        uVar5 = *(undefined4 *)(&DAT_ffffffffffffffe8 + lVar21);
        uVar6 = *(undefined4 *)(lVar21 + -0x14);
        puVar15 = (undefined4 *)(lVar21 + -0x20);
        *plVar9 = (long)puVar15;
        *puVar17 = uVar3;
        puVar19[-7] = uVar4;
        puVar19[-6] = uVar5;
        puVar19[-5] = uVar6;
        uVar3 = *(undefined4 *)(lVar21 + -0xc);
        uVar4 = *(undefined4 *)(lVar21 + -8);
        uVar5 = *(undefined4 *)(lVar21 + -4);
        puVar19[-4] = *(undefined4 *)(lVar21 + -0x10);
        puVar19[-3] = uVar3;
        puVar19[-2] = uVar4;
        puVar19[-1] = uVar5;
      }
      else {
        lVar21 = plVar9[1];
        puVar15 = (undefined4 *)*plVar9;
        uVar3 = *(undefined4 *)(lVar21 + -0x20);
        uVar4 = *(undefined4 *)(lVar21 + -0x1c);
        uVar5 = *(undefined4 *)(&DAT_ffffffffffffffe8 + lVar21);
        uVar6 = *(undefined4 *)(lVar21 + -0x14);
        puVar13 = (undefined4 *)(lVar21 + -0x20);
        plVar9[1] = (long)puVar13;
        *puVar17 = uVar3;
        puVar19[-7] = uVar4;
        puVar19[-6] = uVar5;
        puVar19[-5] = uVar6;
        uVar3 = *(undefined4 *)(lVar21 + -0xc);
        uVar4 = *(undefined4 *)(lVar21 + -8);
        uVar5 = *(undefined4 *)(lVar21 + -4);
        puVar19[-4] = *(undefined4 *)(lVar21 + -0x10);
        puVar19[-3] = uVar3;
        puVar19[-2] = uVar4;
        puVar19[-1] = uVar5;
      }
      lVar23 = lVar23 + -1;
      puVar19 = puVar17;
    }
    lVar21 = plVar9[6];
    lVar22 = plVar9[5];
    lVar10 = (long)puVar2 - (long)puVar15 >> 5;
    lVar24 = lVar21;
    if ((long)puVar14 - (long)puVar13 >> 5 != lVar21) {
LAB_00409bdd:
      if (((lVar10 == lVar22) && (puVar2 = (undefined4 *)plVar9[3], puVar2 != puVar13)) &&
         (lVar21 = lVar23 + -1, puVar15 = puVar19, lVar23 != 0)) {
        do {
          puVar17 = puVar13 + -8;
          uVar3 = *puVar17;
          uVar4 = puVar13[-7];
          uVar5 = puVar13[-6];
          uVar6 = puVar13[-5];
          puVar19 = puVar15 + -8;
          plVar9[1] = (long)puVar17;
          *puVar19 = uVar3;
          puVar15[-7] = uVar4;
          puVar15[-6] = uVar5;
          puVar15[-5] = uVar6;
          uVar3 = puVar13[-3];
          uVar4 = puVar13[-2];
          uVar5 = puVar13[-1];
          puVar15[-4] = puVar13[-4];
          puVar15[-3] = uVar3;
          puVar15[-2] = uVar4;
          puVar15[-1] = uVar5;
          if (puVar17 == puVar2) {
            lVar21 = (long)puVar14 - (long)puVar17 >> 5;
            goto LAB_00409b70;
          }
          lVar21 = lVar21 + -1;
          puVar15 = puVar19;
          puVar13 = puVar17;
        } while (lVar21 != -1);
        lVar21 = (long)puVar14 - (long)puVar17 >> 5;
      }
      else {
        lVar21 = (long)puVar14 - (long)puVar13 >> 5;
      }
    }
    goto LAB_00409b70;
  }
  while ((undefined4 *)plVar9[2] != puVar15) {
    if ((undefined4 *)plVar9[3] == puVar13) {
      lVar21 = plVar9[6];
      lVar10 = (long)puVar2 - (long)puVar15 >> 5;
      if ((long)puVar14 - (long)puVar13 >> 5 != lVar21) {
LAB_00409d61:
        lVar22 = plVar9[5];
        if (lVar10 == lVar22) goto LAB_00409d6a;
        goto LAB_00409d2a;
      }
      lVar24 = lVar23 + -1;
      if (lVar23 != 0) goto LAB_00409e7a;
      lVar22 = plVar9[5];
      lVar24 = lVar21;
      goto LAB_00409b77;
    }
    if (lVar23 == 0) {
      lVar23 = -1;
      lVar10 = (long)puVar2 - (long)puVar15 >> 5;
      if (plVar9[6] != (long)puVar14 - (long)puVar13 >> 5) goto LAB_00409d61;
      lVar24 = -2;
      goto LAB_00409e7a;
    }
    iVar7 = FUN_004082a0(puVar15 + -8,puVar13 + -8);
    if (iVar7 < 1) {
      lVar21 = *plVar9;
      *plVar9 = lVar21 + -0x20;
      FUN_004085d0(lVar21 + -0x20,param_6,param_7);
    }
    else {
      lVar21 = plVar9[1];
      plVar9[1] = lVar21 + -0x20;
      FUN_004085d0(lVar21 + -0x20,param_6,param_7);
    }
    lVar23 = lVar23 + -1;
    puVar13 = (undefined4 *)plVar9[1];
    puVar15 = (undefined4 *)*plVar9;
  }
  lVar21 = plVar9[6];
  lVar22 = plVar9[5];
  lVar10 = (long)puVar2 - (long)puVar15 >> 5;
  lVar24 = lVar21;
  if ((long)puVar14 - (long)puVar13 >> 5 != lVar21) {
    if (lVar10 == lVar22) {
LAB_00409d6a:
      if (((undefined4 *)plVar9[3] != puVar13) && (lVar21 = lVar23 + -1, lVar23 != 0)) {
        do {
          plVar9[1] = (long)(puVar13 + -8);
          FUN_004085d0(puVar13 + -8,param_6,param_7);
          puVar13 = (undefined4 *)plVar9[1];
          if (puVar13 == (undefined4 *)plVar9[3]) break;
          lVar21 = lVar21 + -1;
        } while (lVar21 != -1);
        lVar22 = plVar9[5];
        lVar10 = (long)puVar2 - *plVar9 >> 5;
        lVar21 = (long)puVar14 - (long)puVar13 >> 5;
        lVar24 = plVar9[6];
        goto LAB_00409b77;
      }
    }
LAB_00409d2a:
    lVar21 = (long)puVar14 - (long)puVar13 >> 5;
    lVar24 = plVar9[6];
  }
  goto LAB_00409b77;
  while (lVar12 = lVar12 + -1, puVar18 = puVar19, puVar15 = puVar14, lVar12 != -1) {
LAB_00409b3a:
    puVar14 = puVar15 + -8;
    uVar3 = *puVar14;
    uVar4 = puVar15[-7];
    uVar5 = puVar15[-6];
    uVar6 = puVar15[-5];
    puVar19 = puVar18 + -8;
    *plVar9 = (long)puVar14;
    *puVar19 = uVar3;
    puVar18[-7] = uVar4;
    puVar18[-6] = uVar5;
    puVar18[-5] = uVar6;
    uVar3 = puVar15[-3];
    uVar4 = puVar15[-2];
    uVar5 = puVar15[-1];
    puVar18[-4] = puVar15[-4];
    puVar18[-3] = uVar3;
    puVar18[-2] = uVar4;
    puVar18[-1] = uVar5;
    lVar24 = lVar21;
    if (puVar17 == puVar14) {
      lVar10 = (long)puVar2 - (long)puVar17 >> 5;
      goto LAB_00409b70;
    }
  }
  lVar10 = (long)puVar2 - (long)puVar14 >> 5;
LAB_00409b70:
  *(undefined4 **)plVar9[4] = puVar19;
LAB_00409b77:
  plVar9[5] = lVar22 - lVar10;
  plVar9[6] = lVar24 - lVar21;
  if (*(char *)((long)plVar9 + 0x54) == '\0') {
    FUN_00409830(param_5,plVar9);
  }
  if (*(uint *)(plVar9 + 10) < 2) {
    if (plVar9[6] + plVar9[5] == 0) {
      FUN_00406320(param_5,plVar9[7]);
    }
  }
  else {
    pthread_mutex_lock((pthread_mutex_t *)(plVar9[7] + 0x58));
    lVar23 = plVar9[7];
    if (*(char *)(lVar23 + 0x54) == '\0') {
      FUN_00409830(param_5);
      lVar23 = plVar9[7];
    }
    pthread_mutex_unlock((pthread_mutex_t *)(lVar23 + 0x58));
  }
  pthread_mutex_unlock(__mutex_00);
  goto LAB_004099d0;
  while (lVar24 = lVar24 + -1, lVar24 != -1) {
LAB_00409e7a:
    *plVar9 = (long)(puVar15 + -8);
    FUN_004085d0(puVar15 + -8,param_6,param_7);
    puVar15 = (undefined4 *)*plVar9;
    if (puVar15 == (undefined4 *)plVar9[2]) break;
  }
  lVar22 = plVar9[5];
  lVar10 = (long)puVar2 - (long)puVar15 >> 5;
  lVar21 = (long)puVar14 - plVar9[1] >> 5;
  lVar24 = plVar9[6];
  goto LAB_00409b77;
}


undefined8 FUN_00409fe0(undefined8 *param_1)

{
  FUN_00409880(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],param_1[6]);
  return 0;
}


void FUN_0040a010(undefined8 param_1)

{
  long lVar1;
  
  if (DAT_0061c768 == DAT_0061c760) {
    if (DAT_0061c770 == 0) {
      if (DAT_0061c760 == 0) {
        lVar1 = 0x80;
        DAT_0061c760 = 0x10;
      }
      else {
        lVar1 = DAT_0061c760 << 3;
        if ((lVar1 < 0) || (DAT_0061c760 >> 0x3d != 0)) goto LAB_0040a0af;
      }
    }
    else {
      if (0xaaaaaaaaaaaaaa9 < DAT_0061c760) {
LAB_0040a0af:
                    /* WARNING: Subroutine does not return */
        FUN_00411460();
      }
      DAT_0061c760 = DAT_0061c760 + 1 + (DAT_0061c760 >> 1);
      lVar1 = DAT_0061c760 * 8;
    }
    DAT_0061c770 = FUN_00411270(DAT_0061c770,lVar1);
  }
  *(undefined8 *)(DAT_0061c770 + DAT_0061c768 * 8) = param_1;
  DAT_0061c768 = DAT_0061c768 + 1;
  return;
}


void FUN_0040a0d0(int param_1)

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
  
  uVar5 = DAT_0061cbc8;
  bVar13 = 0;
  if (param_1 != 0) {
    uVar3 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(stderr,1,uVar3,uVar5);
    goto LAB_0040a10f;
  }
  uVar3 = dcgettext(0,"Usage: %s [OPTION]... [FILE]...\n  or:  %s [OPTION]... --files0-from=F\n",5);
  __printf_chk(1,uVar3,uVar5,uVar5);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"Write sorted concatenation of all FILE(s) to standard output.\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"\nWith no FILE, or when FILE is -, read standard input.\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nMandatory arguments to long options are mandatory for short options too.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"Ordering options:\n\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -b, --ignore-leading-blanks  ignore leading blanks\n  -d, --dictionary-order      consider only blanks and alphanumeric characters\n  -f, --ignore-case           fold lower case to upper case characters\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -g, --general-numeric-sort  compare according to general numerical value\n  -i, --ignore-nonprinting    consider only printable characters\n  -M, --month-sort            compare (unknown) < \'JAN\' < ... < \'DEC\'\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -h, --human-numeric-sort    compare human readable numbers (e.g., 2K 1G)\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -n, --numeric-sort          compare according to string numerical value\n  -R, --random-sort           shuffle, but group identical keys.  See shuf(1)\n      --random-source=FILE    get random bytes from FILE\n  -r, --reverse               reverse the result of comparisons\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --sort=WORD             sort according to WORD:\n                                general-numeric -g, human-numeric -h, month -M,\n                                numeric -n, random -R, version -V\n  -V, --version-sort          natural sort of (version) numbers within text\n\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"Other options:\n\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --batch-size=NMERGE   merge at most NMERGE inputs at once;\n                            for more use temp files\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -c, --check, --check=diagnose-first  check for sorted input; do not sort\n  -C, --check=quiet, --check=silent  like -c, but do not report first bad line\n      --compress-program=PROG  compress temporaries with PROG;\n                              decompress them with PROG -d\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --debug               annotate the part of the line used to sort,\n                              and warn about questionable usage to stderr\n      --files0-from=F       read input from the files specified by\n                            NUL-terminated names in file F;\n                            If F is - then read names from standard input\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -k, --key=KEYDEF          sort via a key; KEYDEF gives location and type\n  -m, --merge               merge already sorted files; do not sort\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -o, --output=FILE         write result to FILE instead of standard output\n  -s, --stable              stabilize sort by disabling last-resort comparison\n  -S, --buffer-size=SIZE    use SIZE for main memory buffer\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  uVar5 = dcgettext(0,
                    "  -t, --field-separator=SEP  use SEP instead of non-blank to blank transition\n  -T, --temporary-directory=DIR  use DIR for temporaries, not $TMPDIR or %s;\n                              multiple options specify multiple directories\n      --parallel=N          change the number of sorts run concurrently to N\n  -u, --unique              with -c, check for strict ordering;\n                              without -c, output only the first of an equal run\n"
                    ,5);
  __printf_chk(1,uVar5,&DAT_00416583);
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
                             "\nKEYDEF is F[.C][OPTS][,F[.C][OPTS]] for start and stop position, where F is a\nfield number and C a character position in the field; both are origin 1, and\nthe stop position defaults to the line\'s end.  If neither -t nor -b is in\neffect, characters in a field are counted from the beginning of the preceding\nwhitespace.  OPTS is one or more single-letter ordering options [bdfgiMhnRrV],\nwhich override global ordering options for that key.  If no key is given, use\nthe entire line as the key.  Use --debug to diagnose incorrect key usage.\n\nSIZE may be followed by the following multiplicative suffixes:\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "% 1% of memory, b 1, K 1024 (default), and so on for M, G, T, P, E, Z, Y.\n\n*** WARNING ***\nThe locale specified by the environment affects sort order.\nSet LC_ALL=C to get the traditional sort order that uses\nnative byte values.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  local_88 = &DAT_00416588;
  local_80 = "test invocation";
  local_78[0] = (byte *)0x416602;
  local_78[1] = (byte *)0x41659a;
  local_78[2] = (byte *)0x4165b0;
  local_78[3] = (byte *)0x4165ba;
  local_78[4] = (byte *)0x4165c9;
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
    pbVar10 = (byte *)0x416672;
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
        pbVar9 = (byte *)0x416672;
        goto LAB_0040a613;
      }
    }
    pbVar9 = (byte *)0x416672;
    uVar5 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    pcVar4 = " invocation";
    __printf_chk(1,uVar5,"https://www.gnu.org/software/coreutils/","sort");
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
      iVar2 = strncmp(pcVar4,"en_",3);
      if (iVar2 != 0) {
LAB_0040a613:
        uVar5 = dcgettext(0,"Report %s translation bugs to <https://translationproject.org/team/>\n"
                          ,5);
        __printf_chk(1,uVar5,"sort");
      }
    }
    pcVar4 = " invocation";
    uVar5 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    __printf_chk(1,uVar5,"https://www.gnu.org/software/coreutils/","sort");
    if (pbVar9 != (byte *)0x416672) {
      pcVar4 = "";
    }
  }
  uVar5 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(1,uVar5,pbVar9,pcVar4);
LAB_0040a10f:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}


void FUN_0040a640(void)

{
  FUN_0040a0d0(1);
  return;
}


long FUN_0040a650(char *param_1,char **param_2,void *param_3,size_t param_4)

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
LAB_0040a6e7:
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
          goto LAB_0040a6e7;
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


void FUN_0040a770(undefined8 param_1,undefined8 param_2,long param_3)

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
  uVar2 = FUN_0040f860(1,param_1);
  uVar3 = FUN_0040f550(0,8,param_2);
                    /* WARNING: Subroutine does not return */
  error(0,0,uVar1,uVar3,uVar2);
}


void FUN_0040a7f0(long *param_1,void *param_2,size_t param_3)

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
      uVar3 = FUN_0040f880(lVar5);
      __fprintf_chk(stderr,1,"\n  - %s",uVar3);
      lVar5 = param_1[lVar4];
      param_2 = (void *)((long)__s2 + param_3);
      __s1 = __s2;
      if (lVar5 == 0) goto LAB_0040a8c0;
    }
    lVar4 = lVar4 + 1;
    param_2 = (void *)((long)__s2 + param_3);
    uVar3 = FUN_0040f880(lVar5);
    __fprintf_chk(stderr,1,&DAT_00416aba,uVar3);
    lVar5 = param_1[lVar4];
  }
LAB_0040a8c0:
  pcVar2 = stderr->_IO_write_ptr;
  if (pcVar2 < stderr->_IO_write_end) {
    stderr->_IO_write_ptr = pcVar2 + 1;
    *pcVar2 = '\n';
    return;
  }
  __overflow(stderr,10);
  return;
}


long FUN_0040a910(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,code *param_6)

{
  long lVar1;
  
  lVar1 = FUN_0040a650(param_2,param_3,param_4,param_5);
  if (lVar1 < 0) {
    FUN_0040a770(param_1,param_2,lVar1);
    FUN_0040a7f0(param_3,param_4,param_5);
    (*param_6)();
    lVar1 = -1;
  }
  return lVar1;
}


long FUN_0040a980(void *param_1,long *param_2,void *param_3,size_t param_4)

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


void FUN_0040a9d0(undefined8 param_1)

{
  DAT_0061cbb8 = param_1;
  return;
}


void FUN_0040a9e0(undefined param_1)

{
  DAT_0061cbb0 = param_1;
  return;
}


void FUN_0040a9f0(void)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  iVar1 = FUN_00413520(stdout);
  if (iVar1 != 0) {
    piVar2 = __errno_location();
    if ((DAT_0061cbb0 == '\0') || (*piVar2 != 0x20)) {
      uVar3 = dcgettext(0,"write error",5);
      if (DAT_0061cbb8 != 0) {
        uVar4 = FUN_0040f6d0();
                    /* WARNING: Subroutine does not return */
        error(0,*piVar2,"%s: %s",uVar4,uVar3);
      }
                    /* WARNING: Subroutine does not return */
      error(0,*piVar2,&DAT_00416abc,uVar3);
    }
  }
  iVar1 = FUN_00413520(stderr);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  _exit(DAT_0061c518);
}


void FUN_0040aa90(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = 0xefcdab8967452301;
  param_1[1] = 0x1032547698badcfe;
  *(undefined4 *)(param_1 + 3) = 0;
  return;
}


undefined4 * FUN_0040aac0(undefined4 *param_1,undefined4 *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  param_2[2] = param_1[2];
  param_2[3] = param_1[3];
  return param_2;
}


void FUN_0040aae0(int *param_1,ulong param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint local_50;
  int local_48;
  
  uVar23 = param_3[1];
  piVar1 = (int *)((long)param_1 + (param_2 & 0xfffffffffffffffc));
  local_48 = *param_3;
  uVar24 = param_3[2];
  local_50 = param_3[3];
  uVar18 = param_3[4];
  param_3[4] = (uint)param_2 + param_3[4];
  param_3[5] = (int)(param_2 >> 0x20) + param_3[5] + (uint)CARRY4((uint)param_2,uVar18);
  if (param_1 < piVar1) {
    do {
      iVar2 = *param_1;
      iVar3 = param_1[1];
      iVar4 = param_1[3];
      iVar5 = param_1[5];
      iVar6 = param_1[6];
      iVar7 = param_1[7];
      iVar8 = param_1[9];
      iVar9 = param_1[0xb];
      uVar18 = ((local_50 ^ uVar24) & uVar23 ^ local_50) + iVar2 + -0x28955b88 + local_48;
      uVar18 = (uVar18 * 0x80 | uVar18 >> 0x19) + uVar23;
      uVar19 = ((uVar23 ^ uVar24) & uVar18 ^ uVar24) + iVar3 + -0x173848aa + local_50;
      iVar10 = param_1[2];
      uVar20 = (uVar19 * 0x1000 | uVar19 >> 0x14) + uVar18;
      uVar19 = ((uVar18 ^ uVar23) & uVar20 ^ uVar23) + iVar10 + 0x242070db + uVar24;
      iVar11 = param_1[4];
      uVar19 = (uVar19 >> 0xf | uVar19 * 0x20000) + uVar20;
      uVar21 = ((uVar18 ^ uVar20) & uVar19 ^ uVar18) + iVar4 + -0x3e423112 + uVar23;
      iVar12 = param_1[0xf];
      uVar21 = (uVar21 >> 10 | uVar21 * 0x400000) + uVar19;
      uVar18 = ((uVar20 ^ uVar19) & uVar21 ^ uVar20) + iVar11 + -0xa83f051 + uVar18;
      uVar18 = (uVar18 * 0x80 | uVar18 >> 0x19) + uVar21;
      uVar20 = ((uVar19 ^ uVar21) & uVar18 ^ uVar19) + iVar5 + 0x4787c62a + uVar20;
      uVar20 = (uVar20 * 0x1000 | uVar20 >> 0x14) + uVar18;
      uVar19 = ((uVar21 ^ uVar18) & uVar20 ^ uVar21) + iVar6 + -0x57cfb9ed + uVar19;
      iVar13 = param_1[8];
      uVar19 = (uVar19 >> 0xf | uVar19 * 0x20000) + uVar20;
      uVar21 = ((uVar18 ^ uVar20) & uVar19 ^ uVar18) + iVar7 + -0x2b96aff + uVar21;
      iVar14 = param_1[0xc];
      uVar21 = (uVar21 >> 10 | uVar21 * 0x400000) + uVar19;
      uVar18 = ((uVar20 ^ uVar19) & uVar21 ^ uVar20) + iVar13 + 0x698098d8 + uVar18;
      iVar15 = param_1[0xe];
      uVar18 = (uVar18 * 0x80 | uVar18 >> 0x19) + uVar21;
      uVar20 = ((uVar19 ^ uVar21) & uVar18 ^ uVar19) + iVar8 + -0x74bb0851 + uVar20;
      iVar16 = param_1[10];
      uVar20 = (uVar20 * 0x1000 | uVar20 >> 0x14) + uVar18;
      uVar19 = ((uVar21 ^ uVar18) & uVar20 ^ uVar21) + iVar16 + -0xa44f + uVar19;
      iVar17 = param_1[0xd];
      param_1 = param_1 + 0x10;
      uVar19 = (uVar19 >> 0xf | uVar19 * 0x20000) + uVar20;
      uVar21 = ((uVar18 ^ uVar20) & uVar19 ^ uVar18) + iVar9 + -0x76a32842 + uVar21;
      uVar21 = (uVar21 >> 10 | uVar21 * 0x400000) + uVar19;
      uVar18 = ((uVar20 ^ uVar19) & uVar21 ^ uVar20) + iVar14 + 0x6b901122 + uVar18;
      uVar18 = (uVar18 * 0x80 | uVar18 >> 0x19) + uVar21;
      uVar20 = ((uVar19 ^ uVar21) & uVar18 ^ uVar19) + iVar17 + -0x2678e6d + uVar20;
      uVar20 = (uVar20 * 0x1000 | uVar20 >> 0x14) + uVar18;
      uVar19 = ((uVar21 ^ uVar18) & uVar20 ^ uVar21) + iVar15 + -0x5986bc72 + uVar19;
      uVar19 = (uVar19 >> 0xf | uVar19 * 0x20000) + uVar20;
      uVar21 = ((uVar18 ^ uVar20) & uVar19 ^ uVar18) + iVar12 + 0x49b40821 + uVar21;
      uVar21 = (uVar21 >> 10 | uVar21 * 0x400000) + uVar19;
      uVar18 = ((uVar19 ^ uVar21) & uVar20 ^ uVar19) + iVar3 + -0x9e1da9e + uVar18;
      uVar18 = (uVar18 * 0x20 | uVar18 >> 0x1b) + uVar21;
      uVar20 = ((uVar21 ^ uVar18) & uVar19 ^ uVar21) + iVar6 + -0x3fbf4cc0 + uVar20;
      uVar20 = (uVar20 * 0x200 | uVar20 >> 0x17) + uVar18;
      uVar19 = ((uVar18 ^ uVar20) & uVar21 ^ uVar18) + iVar9 + 0x265e5a51 + uVar19;
      uVar19 = (uVar19 * 0x4000 | uVar19 >> 0x12) + uVar20;
      uVar21 = ((uVar20 ^ uVar19) & uVar18 ^ uVar20) + iVar2 + -0x16493856 + uVar21;
      uVar21 = (uVar21 >> 0xc | uVar21 * 0x100000) + uVar19;
      uVar18 = ((uVar19 ^ uVar21) & uVar20 ^ uVar19) + iVar5 + -0x29d0efa3 + uVar18;
      uVar18 = (uVar18 * 0x20 | uVar18 >> 0x1b) + uVar21;
      uVar20 = ((uVar21 ^ uVar18) & uVar19 ^ uVar21) + iVar16 + 0x2441453 + uVar20;
      uVar20 = (uVar20 * 0x200 | uVar20 >> 0x17) + uVar18;
      uVar19 = ((uVar18 ^ uVar20) & uVar21 ^ uVar18) + iVar12 + -0x275e197f + uVar19;
      uVar19 = (uVar19 * 0x4000 | uVar19 >> 0x12) + uVar20;
      uVar21 = ((uVar20 ^ uVar19) & uVar18 ^ uVar20) + iVar11 + -0x182c0438 + uVar21;
      uVar21 = (uVar21 >> 0xc | uVar21 * 0x100000) + uVar19;
      uVar18 = ((uVar19 ^ uVar21) & uVar20 ^ uVar19) + iVar8 + 0x21e1cde6 + uVar18;
      uVar18 = (uVar18 * 0x20 | uVar18 >> 0x1b) + uVar21;
      uVar20 = ((uVar21 ^ uVar18) & uVar19 ^ uVar21) + iVar15 + -0x3cc8f82a + uVar20;
      uVar20 = (uVar20 * 0x200 | uVar20 >> 0x17) + uVar18;
      uVar19 = ((uVar18 ^ uVar20) & uVar21 ^ uVar18) + iVar4 + -0xb2af279 + uVar19;
      uVar19 = (uVar19 * 0x4000 | uVar19 >> 0x12) + uVar20;
      uVar21 = ((uVar20 ^ uVar19) & uVar18 ^ uVar20) + iVar13 + 0x455a14ed + uVar21;
      uVar22 = (uVar21 >> 0xc | uVar21 * 0x100000) + uVar19;
      uVar18 = ((uVar19 ^ uVar22) & uVar20 ^ uVar19) + iVar17 + -0x561c16fb + uVar18;
      uVar18 = (uVar18 * 0x20 | uVar18 >> 0x1b) + uVar22;
      uVar20 = ((uVar22 ^ uVar18) & uVar19 ^ uVar22) + iVar10 + -0x3105c08 + uVar20;
      uVar20 = (uVar20 * 0x200 | uVar20 >> 0x17) + uVar18;
      uVar19 = ((uVar18 ^ uVar20) & uVar22 ^ uVar18) + iVar7 + 0x676f02d9 + uVar19;
      uVar21 = (uVar19 * 0x4000 | uVar19 >> 0x12) + uVar20;
      uVar19 = ((uVar20 ^ uVar21) & uVar18 ^ uVar20) + iVar14 + -0x72d5b376 + uVar22;
      uVar22 = (uVar19 >> 0xc | uVar19 * 0x100000) + uVar21;
      uVar18 = (uVar20 ^ uVar21 ^ uVar22) + iVar5 + -0x5c6be + uVar18;
      uVar19 = (uVar18 * 0x10 | uVar18 >> 0x1c) + uVar22;
      uVar18 = (uVar21 ^ uVar22 ^ uVar19) + iVar13 + -0x788e097f + uVar20;
      uVar20 = (uVar18 * 0x800 | uVar18 >> 0x15) + uVar19;
      uVar18 = (uVar22 ^ uVar19 ^ uVar20) + iVar9 + 0x6d9d6122 + uVar21;
      uVar21 = (uVar18 * 0x10000 | uVar18 >> 0x10) + uVar20;
      uVar18 = (uVar19 ^ uVar20 ^ uVar21) + iVar15 + -0x21ac7f4 + uVar22;
      uVar18 = (uVar18 >> 9 | uVar18 * 0x800000) + uVar21;
      uVar19 = (uVar20 ^ uVar21 ^ uVar18) + iVar3 + -0x5b4115bc + uVar19;
      uVar19 = (uVar19 * 0x10 | uVar19 >> 0x1c) + uVar18;
      uVar20 = (uVar21 ^ uVar18 ^ uVar19) + iVar11 + 0x4bdecfa9 + uVar20;
      uVar22 = (uVar20 * 0x800 | uVar20 >> 0x15) + uVar19;
      uVar20 = (uVar18 ^ uVar19 ^ uVar22) + iVar7 + -0x944b4a0 + uVar21;
      uVar20 = (uVar20 * 0x10000 | uVar20 >> 0x10) + uVar22;
      uVar18 = (uVar19 ^ uVar22 ^ uVar20) + iVar16 + -0x41404390 + uVar18;
      uVar21 = (uVar18 >> 9 | uVar18 * 0x800000) + uVar20;
      uVar18 = (uVar22 ^ uVar20 ^ uVar21) + iVar17 + 0x289b7ec6 + uVar19;
      uVar19 = (uVar18 * 0x10 | uVar18 >> 0x1c) + uVar21;
      uVar18 = (uVar20 ^ uVar21 ^ uVar19) + iVar2 + -0x155ed806 + uVar22;
      uVar18 = (uVar18 * 0x800 | uVar18 >> 0x15) + uVar19;
      uVar20 = (uVar21 ^ uVar19 ^ uVar18) + iVar4 + -0x2b10cf7b + uVar20;
      uVar22 = (uVar20 * 0x10000 | uVar20 >> 0x10) + uVar18;
      uVar20 = (uVar19 ^ uVar18 ^ uVar22) + iVar6 + 0x4881d05 + uVar21;
      uVar21 = (uVar20 >> 9 | uVar20 * 0x800000) + uVar22;
      uVar19 = (uVar18 ^ uVar22 ^ uVar21) + iVar8 + -0x262b2fc7 + uVar19;
      uVar20 = (uVar19 * 0x10 | uVar19 >> 0x1c) + uVar21;
      uVar18 = (uVar22 ^ uVar21 ^ uVar20) + iVar14 + -0x1924661b + uVar18;
      uVar19 = (uVar18 * 0x800 | uVar18 >> 0x15) + uVar20;
      uVar18 = (uVar21 ^ uVar20 ^ uVar19) + iVar12 + 0x1fa27cf8 + uVar22;
      uVar22 = (uVar18 * 0x10000 | uVar18 >> 0x10) + uVar19;
      uVar18 = (uVar20 ^ uVar19 ^ uVar22) + iVar10 + -0x3b53a99b + uVar21;
      uVar18 = (uVar18 >> 9 | uVar18 * 0x800000) + uVar22;
      uVar20 = ((~uVar19 | uVar18) ^ uVar22) + iVar2 + -0xbd6ddbc + uVar20;
      uVar20 = (uVar20 * 0x40 | uVar20 >> 0x1a) + uVar18;
      uVar19 = ((~uVar22 | uVar20) ^ uVar18) + iVar7 + 0x432aff97 + uVar19;
      uVar19 = (uVar19 * 0x400 | uVar19 >> 0x16) + uVar20;
      uVar21 = ((~uVar18 | uVar19) ^ uVar20) + iVar15 + -0x546bdc59 + uVar22;
      uVar21 = (uVar21 * 0x8000 | uVar21 >> 0x11) + uVar19;
      uVar18 = ((~uVar20 | uVar21) ^ uVar19) + iVar5 + -0x36c5fc7 + uVar18;
      uVar18 = (uVar18 >> 0xb | uVar18 * 0x200000) + uVar21;
      uVar20 = ((~uVar19 | uVar18) ^ uVar21) + iVar14 + 0x655b59c3 + uVar20;
      uVar20 = (uVar20 * 0x40 | uVar20 >> 0x1a) + uVar18;
      uVar19 = ((~uVar21 | uVar20) ^ uVar18) + iVar4 + -0x70f3336e + uVar19;
      uVar19 = (uVar19 * 0x400 | uVar19 >> 0x16) + uVar20;
      uVar21 = ((~uVar18 | uVar19) ^ uVar20) + iVar16 + -0x100b83 + uVar21;
      uVar21 = (uVar21 * 0x8000 | uVar21 >> 0x11) + uVar19;
      uVar18 = ((~uVar20 | uVar21) ^ uVar19) + iVar3 + -0x7a7ba22f + uVar18;
      uVar18 = (uVar18 >> 0xb | uVar18 * 0x200000) + uVar21;
      uVar20 = ((~uVar19 | uVar18) ^ uVar21) + iVar13 + 0x6fa87e4f + uVar20;
      uVar20 = (uVar20 * 0x40 | uVar20 >> 0x1a) + uVar18;
      uVar19 = ((~uVar21 | uVar20) ^ uVar18) + iVar12 + -0x1d31920 + uVar19;
      uVar19 = (uVar19 * 0x400 | uVar19 >> 0x16) + uVar20;
      uVar21 = ((~uVar18 | uVar19) ^ uVar20) + iVar6 + -0x5cfebcec + uVar21;
      uVar21 = (uVar21 * 0x8000 | uVar21 >> 0x11) + uVar19;
      uVar18 = ((~uVar20 | uVar21) ^ uVar19) + iVar17 + 0x4e0811a1 + uVar18;
      uVar22 = (uVar18 >> 0xb | uVar18 * 0x200000) + uVar21;
      uVar18 = ((~uVar19 | uVar22) ^ uVar21) + iVar11 + -0x8ac817e + uVar20;
      uVar18 = (uVar18 * 0x40 | uVar18 >> 0x1a) + uVar22;
      uVar19 = ((~uVar21 | uVar18) ^ uVar22) + iVar9 + -0x42c50dcb + uVar19;
      uVar20 = (uVar19 * 0x400 | uVar19 >> 0x16) + uVar18;
      uVar19 = ((~uVar22 | uVar20) ^ uVar18) + iVar10 + 0x2ad7d2bb + uVar21;
      uVar19 = (uVar19 * 0x8000 | uVar19 >> 0x11) + uVar20;
      uVar21 = ((~uVar18 | uVar19) ^ uVar20) + iVar8 + -0x14792c6f + uVar22;
      local_48 = local_48 + uVar18;
      uVar24 = uVar24 + uVar19;
      uVar23 = uVar23 + (uVar21 >> 0xb | uVar21 * 0x200000) + uVar19;
      local_50 = local_50 + uVar20;
    } while (param_1 < piVar1);
  }
  *param_3 = local_48;
  param_3[1] = uVar23;
  param_3[2] = uVar24;
  param_3[3] = local_50;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040b250(long param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  iVar4 = *(int *)(param_1 + 0x14);
  lVar9 = (-(ulong)(uVar1 < 0x38) & 0xffffffffffffffc0) + 0x80;
  uVar2 = *(uint *)(param_1 + 0x10);
  uVar5 = uVar1 + *(uint *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = uVar5;
  if (CARRY4(uVar1,uVar2)) {
    iVar4 = iVar4 + 1;
    *(int *)(param_1 + 0x14) = iVar4;
  }
  *(uint *)(param_1 + 0x1c + ((-(ulong)(uVar1 < 0x38) & 0xfffffffffffffff0) + 0x1e) * 4) = uVar5 * 8
  ;
  lVar7 = lVar9 - (ulong)uVar1;
  *(uint *)(param_1 + 0x1c + ((-(ulong)(uVar1 < 0x38) & 0xfffffffffffffff0) + 0x1f) * 4) =
       iVar4 << 3 | uVar5 >> 0x1d;
  puVar8 = (undefined8 *)(param_1 + 0x1c + (ulong)uVar1);
  uVar3 = lVar7 - 8;
  if (uVar3 < 8) {
    if ((uVar3 & 4) == 0) {
      if ((uVar3 != 0) && (*(char *)puVar8 = (char)_DAT_00416ae0, (uVar3 & 2) != 0)) {
        *(undefined2 *)((long)puVar8 + lVar7 + -10) = *(undefined2 *)((long)&DAT_00416ad6 + lVar7);
      }
    }
    else {
      *(undefined4 *)puVar8 = _DAT_00416ae0;
      *(undefined4 *)((long)puVar8 + lVar7 + -0xc) = *(undefined4 *)(&DAT_00416ad4 + lVar7);
    }
  }
  else {
    *puVar8 = CONCAT44(_UNK_00416ae4,_DAT_00416ae0);
    *(undefined8 *)((long)puVar8 + lVar7 + -0x10) = *(undefined8 *)(&DAT_00416ad0 + lVar7);
    lVar7 = (long)puVar8 - (long)(undefined8 *)((ulong)(puVar8 + 1) & 0xfffffffffffffff8);
    puVar6 = (undefined8 *)(&DAT_00416ae0 + -lVar7);
    puVar8 = (undefined8 *)((ulong)(puVar8 + 1) & 0xfffffffffffffff8);
    for (uVar3 = uVar3 + lVar7 >> 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    }
  }
  FUN_0040aae0(param_1 + 0x1c,lVar9,param_1);
  FUN_0040aac0(param_1,param_2);
  return;
}


void FUN_0040b360(undefined8 *param_1,ulong param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  void *__dest;
  uint uVar9;
  ulong uVar10;
  
  if (*(uint *)(param_3 + 0x18) != 0) {
    uVar10 = (ulong)*(uint *)(param_3 + 0x18);
    lVar5 = param_3 + 0x1c;
    uVar4 = 0x80 - uVar10;
    if (param_2 < 0x80 - uVar10) {
      uVar4 = param_2;
    }
    memcpy((void *)(lVar5 + uVar10),param_1,uVar4);
    uVar9 = *(int *)(param_3 + 0x18) + (int)uVar4;
    *(uint *)(param_3 + 0x18) = uVar9;
    if (0x40 < uVar9) {
      FUN_0040aae0(lVar5,uVar9 & 0xffffffc0,param_3);
      uVar9 = *(uint *)(param_3 + 0x18);
      puVar8 = (undefined8 *)((uVar10 + uVar4 & 0xffffffffffffffc0) + lVar5);
      uVar3 = uVar9 & 0x3f;
      uVar10 = (ulong)uVar3;
      *(uint *)(param_3 + 0x18) = uVar3;
      if (uVar3 < 8) {
        if ((uVar9 & 4) == 0) {
          if ((uVar3 != 0) &&
             (*(undefined *)(param_3 + 0x1c) = *(undefined *)puVar8, (uVar9 & 2) != 0)) {
            *(undefined2 *)(param_3 + 0x1a + uVar10) = *(undefined2 *)((long)puVar8 + (uVar10 - 2));
          }
        }
        else {
          *(undefined4 *)(param_3 + 0x1c) = *(undefined4 *)puVar8;
          *(undefined4 *)(param_3 + 0x18 + uVar10) = *(undefined4 *)((long)puVar8 + (uVar10 - 4));
        }
      }
      else {
        *(undefined8 *)(param_3 + 0x1c) = *puVar8;
        *(undefined8 *)(param_3 + 0x14 + uVar10) = *(undefined8 *)((long)puVar8 + (uVar10 - 8));
        uVar10 = param_3 + 0x24U & 0xfffffffffffffff8;
        lVar5 = lVar5 - uVar10;
        uVar9 = (int)lVar5 + uVar3 & 0xfffffff8;
        if (7 < uVar9) {
          uVar7 = 0;
          do {
            uVar3 = (int)uVar7 + 8;
            *(undefined8 *)(uVar10 + uVar7) = *(undefined8 *)((long)puVar8 + (uVar7 - lVar5));
            uVar7 = (ulong)uVar3;
          } while (uVar3 < uVar9);
        }
      }
    }
    param_1 = (undefined8 *)((long)param_1 + uVar4);
    param_2 = param_2 - uVar4;
  }
  puVar8 = param_1;
  if (0x3f < param_2) {
    if (((ulong)param_1 & 3) != 0) {
      if (param_2 != 0x40) {
        uVar4 = param_2 - 0x41 >> 6;
        do {
          uVar2 = param_1[1];
          puVar8 = param_1 + 8;
          *(undefined8 *)(param_3 + 0x1c) = *param_1;
          *(undefined8 *)(param_3 + 0x24) = uVar2;
          uVar2 = param_1[3];
          *(undefined8 *)(param_3 + 0x2c) = param_1[2];
          *(undefined8 *)(param_3 + 0x34) = uVar2;
          uVar2 = param_1[5];
          *(undefined8 *)(param_3 + 0x3c) = param_1[4];
          *(undefined8 *)(param_3 + 0x44) = uVar2;
          uVar2 = param_1[7];
          *(undefined8 *)(param_3 + 0x4c) = param_1[6];
          *(undefined8 *)(param_3 + 0x54) = uVar2;
          FUN_0040aae0((undefined8 *)(param_3 + 0x1c),0x40,param_3);
          param_1 = puVar8;
        } while (puVar8 != param_1 + (uVar4 + 1) * 8);
        param_2 = (param_2 - 0x40) + uVar4 * -0x40;
        puVar8 = param_1 + (uVar4 + 1) * 8;
      }
      goto LAB_0040b40b;
    }
    puVar8 = (undefined8 *)((long)param_1 + (param_2 & 0xffffffffffffffc0));
    FUN_0040aae0(param_1,param_2 & 0xffffffffffffffc0,param_3);
    param_2 = (ulong)((uint)param_2 & 0x3f);
  }
  if (param_2 == 0) {
    return;
  }
LAB_0040b40b:
  __dest = (void *)(param_3 + 0x1c);
  uVar9 = *(uint *)(param_3 + 0x18);
  uVar3 = (uint)param_2;
  puVar1 = (undefined8 *)((long)__dest + (ulong)uVar9);
  if (uVar3 < 8) {
    if ((param_2 & 4) == 0) {
      if ((uVar3 != 0) && (*(undefined *)puVar1 = *(undefined *)puVar8, (param_2 & 2) != 0)) {
        *(undefined2 *)((long)puVar1 + ((param_2 & 0xffffffff) - 2)) =
             *(undefined2 *)((long)puVar8 + ((param_2 & 0xffffffff) - 2));
      }
    }
    else {
      *(undefined4 *)puVar1 = *(undefined4 *)puVar8;
      *(undefined4 *)((long)puVar1 + ((param_2 & 0xffffffff) - 4)) =
           *(undefined4 *)((long)puVar8 + ((param_2 & 0xffffffff) - 4));
    }
  }
  else {
    *puVar1 = *puVar8;
    *(undefined8 *)((long)puVar1 + ((param_2 & 0xffffffff) - 8)) =
         *(undefined8 *)((long)puVar8 + ((param_2 & 0xffffffff) - 8));
    lVar5 = (long)puVar1 - ((ulong)(puVar1 + 1) & 0xfffffffffffffff8);
    uVar3 = (int)lVar5 + uVar3 & 0xfffffff8;
    if (7 < uVar3) {
      uVar6 = 0;
      do {
        uVar4 = (ulong)uVar6;
        uVar6 = uVar6 + 8;
        *(undefined8 *)(((ulong)(puVar1 + 1) & 0xfffffffffffffff8) + uVar4) =
             *(undefined8 *)((long)puVar8 + (uVar4 - lVar5));
      } while (uVar6 < uVar3);
    }
  }
  param_2 = param_2 + uVar9;
  if (0x3f < param_2) {
    param_2 = param_2 - 0x40;
    FUN_0040aae0(__dest,0x40,param_3);
    memcpy(__dest,(void *)(param_3 + 0x5c),param_2);
  }
  *(int *)(param_3 + 0x18) = (int)param_2;
  return;
}


void FUN_0040b660(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  
  local_a8 = 0xefcdab8967452301;
  local_a0 = 0x1032547698badcfe;
  local_98 = 0;
  local_90 = 0;
  FUN_0040b360(param_1,param_2,&local_a8);
  FUN_0040b250(&local_a8,param_3);
  return;
}


undefined8 FUN_0040b6c0(FILE *param_1,undefined8 param_2)

{
  void *__ptr;
  size_t sVar1;
  long lVar2;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  
  __ptr = malloc(0x8048);
  if (__ptr == (void *)0x0) {
    return 1;
  }
  local_b0 = 0;
  local_c8 = 0xefcdab8967452301;
  local_c0 = 0x1032547698badcfe;
  local_b8 = 0;
  do {
    lVar2 = 0;
    while( true ) {
      sVar1 = fread_unlocked((void *)((long)__ptr + lVar2),1,0x8000 - lVar2,param_1);
      lVar2 = lVar2 + sVar1;
      if (lVar2 == 0x8000) break;
      if (sVar1 == 0) {
        if ((param_1->_flags & 0x20U) != 0) {
          free(__ptr);
          return 1;
        }
        goto LAB_0040b76f;
      }
      if ((param_1->_flags & 0x10U) != 0) {
LAB_0040b76f:
        if (lVar2 != 0) {
          FUN_0040b360(__ptr,lVar2,&local_c8);
        }
        FUN_0040b250(&local_c8,param_2);
        free(__ptr);
        return 0;
      }
    }
    FUN_0040aae0(__ptr,0x8000,&local_c8);
  } while( true );
}


void FUN_0040b7f0(void)

{
  (*(code *)PTR_posix_fadvise_0061c1c0)();
  return;
}


void FUN_0040b800(FILE *param_1,int param_2)

{
  int __fd;
  
  if (param_1 != (FILE *)0x0) {
    __fd = fileno(param_1);
    posix_fadvise(__fd,0,0,param_2);
    return;
  }
  return;
}


char * FUN_0040b830(char **param_1)

{
  bool bVar1;
  char *pcVar2;
  char cVar3;
  char *pcVar4;
  
  pcVar4 = *param_1;
  cVar3 = *pcVar4;
  if (cVar3 == '\0') {
    return (char *)0x0;
  }
  bVar1 = false;
  pcVar2 = (char *)0x0;
  do {
    if (bVar1) {
      if ((0x39 < (int)cVar3 - 0x41U) ||
         (bVar1 = false, (1L << ((byte)((int)cVar3 - 0x41U) & 0x3f) & 0x3ffffff03ffffffU) == 0)) {
        bVar1 = false;
        if (cVar3 != '~') {
          pcVar2 = (char *)0x0;
          bVar1 = false;
        }
      }
LAB_0040b881:
      *param_1 = pcVar4 + 1;
      cVar3 = pcVar4[1];
    }
    else {
      if (cVar3 == '.') {
        bVar1 = true;
        if (pcVar2 == (char *)0x0) {
          pcVar2 = pcVar4;
        }
        goto LAB_0040b881;
      }
      if (cVar3 < '[') {
        if (('@' < cVar3) || ((byte)(cVar3 - 0x30U) < 10)) goto LAB_0040b881;
      }
      else if ((byte)(cVar3 + 0x9fU) < 0x1a) goto LAB_0040b881;
      if (cVar3 != '~') {
        pcVar2 = (char *)0x0;
      }
      *param_1 = pcVar4 + 1;
      cVar3 = pcVar4[1];
    }
    pcVar4 = pcVar4 + 1;
    if (cVar3 == '\0') {
      return pcVar2;
    }
  } while( true );
}


uint FUN_0040b900(byte *param_1,byte *param_2)

{
  byte bVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  size_t sVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  byte *pbVar12;
  ulong uVar13;
  byte bVar14;
  byte *pbVar15;
  uint uVar16;
  size_t __n;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  byte bVar20;
  byte *local_48;
  byte *local_40 [2];
  
  bVar20 = 0;
  uVar3 = strcmp((char *)param_1,(char *)param_2);
  if (uVar3 == 0) {
    return 0;
  }
  bVar14 = *param_1;
  if (bVar14 == 0) {
    return 0xffffffff;
  }
  bVar1 = *param_2;
  bVar17 = false;
  bVar19 = bVar1 == 0;
  if (bVar19) {
    return 1;
  }
  lVar9 = 2;
  pbVar12 = &DAT_00416b21;
  pbVar15 = param_1;
  do {
    if (lVar9 == 0) break;
    lVar9 = lVar9 + -1;
    bVar17 = *pbVar12 < *pbVar15;
    bVar19 = *pbVar12 == *pbVar15;
    pbVar12 = pbVar12 + (ulong)bVar20 * -2 + 1;
    pbVar15 = pbVar15 + (ulong)bVar20 * -2 + 1;
  } while (bVar19);
  bVar18 = false;
  bVar17 = (!bVar17 && !bVar19) == bVar17;
  if (bVar17) {
    return 0xffffffff;
  }
  lVar9 = 2;
  pbVar12 = &DAT_00416b21;
  pbVar15 = param_2;
  do {
    if (lVar9 == 0) break;
    lVar9 = lVar9 + -1;
    bVar18 = *pbVar12 < *pbVar15;
    bVar17 = *pbVar12 == *pbVar15;
    pbVar12 = pbVar12 + (ulong)bVar20 * -2 + 1;
    pbVar15 = pbVar15 + (ulong)bVar20 * -2 + 1;
  } while (bVar17);
  bVar19 = false;
  bVar17 = (!bVar18 && !bVar17) == bVar18;
  if (bVar17) {
    return 1;
  }
  lVar9 = 3;
  pbVar12 = &DAT_00416b20;
  pbVar15 = param_1;
  do {
    if (lVar9 == 0) break;
    lVar9 = lVar9 + -1;
    bVar19 = *pbVar12 < *pbVar15;
    bVar17 = *pbVar12 == *pbVar15;
    pbVar12 = pbVar12 + (ulong)bVar20 * -2 + 1;
    pbVar15 = pbVar15 + (ulong)bVar20 * -2 + 1;
  } while (bVar17);
  bVar18 = false;
  bVar17 = (!bVar19 && !bVar17) == bVar19;
  if (bVar17) {
    return 0xffffffff;
  }
  lVar9 = 3;
  pbVar12 = &DAT_00416b20;
  pbVar15 = param_2;
  do {
    if (lVar9 == 0) break;
    lVar9 = lVar9 + -1;
    bVar18 = *pbVar12 < *pbVar15;
    bVar17 = *pbVar12 == *pbVar15;
    pbVar12 = pbVar12 + (ulong)bVar20 * -2 + 1;
    pbVar15 = pbVar15 + (ulong)bVar20 * -2 + 1;
  } while (bVar17);
  if ((!bVar18 && !bVar17) == bVar18) {
    return 1;
  }
  if ((bVar1 != 0x2e) && (bVar14 == 0x2e)) {
    return 0xffffffff;
  }
  if (bVar14 == 0x2e) {
    if ((bVar1 == 0x2e) && (bVar14 == 0x2e)) {
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    }
  }
  else if (bVar1 == 0x2e) {
    return 1;
  }
  local_48 = param_1;
  local_40[0] = param_2;
  lVar9 = FUN_0040b830(&local_48);
  lVar6 = FUN_0040b830(local_40);
  if (lVar9 == 0) {
    __n = (long)local_48 - (long)param_1;
    if (lVar6 != 0) goto LAB_0040ba15;
  }
  else {
    __n = lVar9 - (long)param_1;
    if (lVar6 == 0) {
      sVar7 = (long)local_40[0] - (long)param_2;
    }
    else {
LAB_0040ba15:
      sVar7 = lVar6 - (long)param_2;
    }
    if ((__n != sVar7) || (iVar5 = strncmp((char *)param_1,(char *)param_2,__n), iVar5 != 0))
    goto LAB_0040ba24;
    __n = (long)local_48 - (long)param_1;
  }
  sVar7 = (long)local_40[0] - (long)param_2;
LAB_0040ba24:
  uVar10 = 0;
  uVar13 = 0;
LAB_0040ba38:
  if ((__n <= uVar10) && (sVar7 <= uVar13)) {
    return uVar3;
  }
  lVar9 = uVar13 - uVar10;
  uVar11 = uVar10;
  if (__n <= uVar10) goto LAB_0040bad0;
LAB_0040ba51:
  bVar20 = param_1[uVar10];
  uVar11 = uVar10;
  if ((int)(char)bVar20 - 0x30U < 10) goto LAB_0040bad0;
  if (bVar20 - 0x30 < 10) {
    if (sVar7 == uVar13) goto LAB_0040bac3;
    bVar14 = param_2[uVar13];
    goto LAB_0040bb06;
  }
LAB_0040ba74:
  uVar16 = (uint)bVar20;
  if ((uVar16 - 0x41 < 0x3a) && ((1L << ((byte)(uVar16 - 0x41) & 0x3f) & 0x3ffffff03ffffffU) != 0))
  {
    uVar4 = 0;
    if (sVar7 == uVar10 + lVar9) goto LAB_0040baba;
  }
  else {
    if (bVar20 == 0x7e) {
      uVar16 = 0xffffffff;
    }
    else {
      uVar16 = uVar16 + 0x100;
    }
    if (sVar7 == uVar10 + lVar9) {
      return uVar16;
    }
  }
  bVar14 = param_2[uVar13];
  uVar4 = (uint)bVar14;
  if (9 < bVar14 - 0x30) goto LAB_0040bb15;
  uVar4 = 0;
LAB_0040baba:
  do {
    if (uVar4 != uVar16) {
      return uVar16 - uVar4;
    }
LAB_0040bac3:
    do {
      uVar10 = uVar10 + 1;
      uVar13 = uVar13 + 1;
      uVar11 = uVar10;
      if (uVar10 < __n) goto LAB_0040ba51;
LAB_0040bad0:
      bVar14 = param_2[uVar13];
      if ((sVar7 <= uVar13) || ((int)(char)bVar14 - 0x30U < 10)) goto LAB_0040bb44;
      uVar10 = uVar11;
      if ((__n != uVar11) && (bVar20 = param_1[uVar11], 9 < bVar20 - 0x30)) goto LAB_0040ba74;
LAB_0040bb06:
      uVar4 = (uint)bVar14;
      uVar16 = 0;
    } while (uVar4 - 0x30 < 10);
LAB_0040bb15:
    if ((0x39 < bVar14 - 0x41) || ((1L << ((byte)(bVar14 - 0x41) & 0x3f) & 0x3ffffff03ffffffU) == 0)
       ) {
      if (bVar14 == 0x7e) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = uVar4 + 0x100;
      }
    }
  } while( true );
LAB_0040bb44:
  for (; iVar5 = (int)(char)param_1[uVar11], uVar2 = uVar13, param_1[uVar11] == 0x30;
      uVar11 = uVar11 + 1) {
  }
  while (bVar14 == 0x30) {
    bVar14 = param_2[uVar2 + 1];
    uVar2 = uVar2 + 1;
  }
  iVar8 = (int)(char)bVar14;
  uVar10 = uVar11;
  if (iVar5 - 0x30U < 10) {
    if (9 < iVar8 - 0x30U) {
      return 1;
    }
    uVar16 = 0;
    while( true ) {
      if (uVar16 == 0) {
        uVar16 = iVar5 - iVar8;
      }
      uVar10 = uVar10 + 1;
      iVar8 = (int)(char)param_2[uVar10 + (uVar2 - uVar11)];
      uVar13 = (uVar10 - uVar11) + uVar2;
      iVar5 = (int)(char)param_1[uVar10];
      if (9 < iVar5 - 0x30U) break;
      if (9 < iVar8 - 0x30U) {
        return 1;
      }
    }
    if (iVar8 - 0x30U < 10) {
      return 0xffffffff;
    }
    if (uVar16 != 0) {
      return uVar16;
    }
  }
  else {
    uVar13 = uVar2;
    if (iVar8 - 0x30U < 10) {
      return 0xffffffff;
    }
  }
  goto LAB_0040ba38;
}


bool FUN_0040bd10(int param_1)

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
    pbVar5 = &DAT_00416a04;
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


ulong FUN_0040bd70(ulong param_1)

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
LAB_0040bdf0:
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
        if (uVar3 <= uVar4) goto LAB_0040bdf0;
        lVar5 = lVar5 + 8;
      } while (uVar1 != 0);
    }
    uVar3 = uVar3 + 2;
  } while( true );
}


ulong FUN_0040be10(ulong param_1,ulong param_2)

{
  return (param_1 >> 3 | param_1 << 0x3d) % param_2;
}


bool FUN_0040be20(long param_1,long param_2)

{
  return param_1 == param_2;
}


long FUN_0040be30(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = (*(code *)param_1[6])(param_2,param_1[2]);
  if (uVar1 <= (ulong)param_1[2] && param_1[2] != uVar1) {
    return uVar1 * 0x10 + *param_1;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


long FUN_0040be60(long param_1,long param_2,long **param_3,char param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  
  plVar6 = (long *)FUN_0040be30();
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
LAB_0040beec:
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
          goto LAB_0040beec;
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

undefined8 FUN_0040bf80(float **param_1)

{
  float fVar1;
  float *pfVar2;
  float fVar3;
  
  pfVar2 = *param_1;
  if (pfVar2 == (float *)&DAT_00416ba0) {
    return 1;
  }
  fVar1 = pfVar2[2];
  if ((((_DAT_00416bb4 < fVar1) && (fVar1 < DAT_00416bb8)) && (_DAT_00416bbc < pfVar2[3])) &&
     (_DAT_00416bc0 <= *pfVar2)) {
    fVar3 = *pfVar2 + _DAT_00416bb4;
    if (((fVar3 < pfVar2[1]) && (pfVar2[1] <= DAT_00416bc4)) && (fVar3 < fVar1)) {
      return 1;
    }
  }
  *param_1 = (float *)&DAT_00416ba0;
  return 0;
}


undefined8 FUN_0040c000(long param_1,long **param_2,char param_3)

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
LAB_0040c028:
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
          plVar2 = (long *)FUN_0040be30(param_1,lVar6);
          plVar4 = (long *)plVar3[1];
          if (*plVar2 != 0) break;
          *plVar2 = lVar6;
          *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
          *plVar3 = 0;
          plVar3[1] = *(long *)(param_1 + 0x48);
          *(long **)(param_1 + 0x48) = plVar3;
          plVar3 = plVar4;
          if (plVar4 == (long *)0x0) goto LAB_0040c09f;
        }
        plVar3[1] = plVar2[1];
        plVar2[1] = (long)plVar3;
        plVar3 = plVar4;
      } while (plVar4 != (long *)0x0);
LAB_0040c09f:
      lVar6 = *plVar5;
    }
    plVar5[1] = 0;
    if (param_3 != '\0') goto LAB_0040c028;
    plVar3 = (long *)FUN_0040be30(param_1,lVar6);
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


undefined8 FUN_0040c150(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


undefined8 FUN_0040c160(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


undefined8 FUN_0040c170(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}


void FUN_0040c180(long **param_1)

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


bool FUN_0040c1d0(long **param_1)

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
LAB_0040c1e8:
      plVar2 = plVar2 + 2;
    }
    lVar1 = plVar2[1];
    plVar4 = (long *)((long)plVar4 + 1);
    plVar3 = (long *)((long)plVar3 + 1);
    if (lVar1 == 0) goto LAB_0040c1e8;
    do {
      lVar1 = *(long *)(lVar1 + 8);
      plVar3 = (long *)((long)plVar3 + 1);
    } while (lVar1 != 0);
    plVar2 = plVar2 + 2;
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040c240(long **param_1,undefined8 param_2)

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
      if (param_1[1] <= plVar6) goto LAB_0040c2ad;
    }
  }
LAB_0040c2ad:
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
  __fprintf_chk((dVar7 * _DAT_00416a38) / dVar8,param_2,1,"# buckets used:    %lu (%.2f%%)\n",plVar2
               );
  __fprintf_chk(param_2,1,"max bucket length: %lu\n",uVar5);
  return;
}


long FUN_0040c390(long param_1,long param_2)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)FUN_0040be30();
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


long FUN_0040c3f0(long **param_1)

{
  long lVar1;
  long *plVar2;
  
  if (param_1[4] == (long *)0x0) {
    return 0;
  }
  plVar2 = *param_1;
  if (param_1[1] <= plVar2) {
    lVar1 = FUN_00402f05();
    return lVar1;
  }
  do {
    if (*plVar2 != 0) {
      return *plVar2;
    }
    plVar2 = plVar2 + 2;
  } while (plVar2 < param_1[1]);
  lVar1 = FUN_00402f05();
  return lVar1;
}


long FUN_0040c440(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = (long *)FUN_0040be30();
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


ulong FUN_0040c4b0(long **param_1,long param_2,ulong param_3)

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


long FUN_0040c520(long **param_1,code *param_2,undefined8 param_3)

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


ulong FUN_0040c5a0(byte *param_1,ulong param_2)

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


void FUN_0040c5e0(undefined8 *param_1)

{
  *(undefined *)(param_1 + 2) = 0;
  *param_1 = 0x3f80000000000000;
  param_1[1] = 0x3fb4fdf43f4ccccd;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ** FUN_0040c600(ulong param_1,void *param_2,code *param_3,code *param_4,void *param_5)

{
  char cVar1;
  void **__ptr;
  void *__nmemb;
  void *pvVar2;
  float fVar3;
  float fVar4;
  
  if (param_3 == (code *)0x0) {
    param_3 = FUN_0040be10;
  }
  if (param_4 == (code *)0x0) {
    param_4 = FUN_0040be20;
  }
  __ptr = (void **)malloc(0x50);
  if (__ptr == (void **)0x0) {
    return (void **)0x0;
  }
  if (param_2 == (void *)0x0) {
    __ptr[5] = &DAT_00416ba0;
    cVar1 = FUN_0040bf80(__ptr + 5);
    if (cVar1 == '\0') goto LAB_0040c6e0;
    fVar4 = DAT_00416bc8;
    if ((long)param_1 < 0) goto LAB_0040c763;
LAB_0040c71e:
    fVar3 = (float)param_1;
LAB_0040c727:
    fVar3 = fVar3 / fVar4;
    if (_DAT_00416bcc <= fVar3) goto LAB_0040c6e0;
    if (fVar3 < _DAT_00416bd0) {
      param_1 = (ulong)fVar3;
    }
    else {
      param_1 = (long)(fVar3 - _DAT_00416bd0) ^ 0x8000000000000000;
    }
  }
  else {
    __ptr[5] = param_2;
    cVar1 = FUN_0040bf80(__ptr + 5);
    if (cVar1 == '\0') goto LAB_0040c6e0;
    if (*(char *)((long)param_2 + 0x10) == '\0') {
      fVar4 = *(float *)((long)param_2 + 8);
      if (-1 < (long)param_1) goto LAB_0040c71e;
LAB_0040c763:
      fVar3 = (float)(param_1 >> 1 | (ulong)((uint)param_1 & 1));
      fVar3 = fVar3 + fVar3;
      goto LAB_0040c727;
    }
  }
  __nmemb = (void *)FUN_0040bd70(param_1);
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
LAB_0040c6e0:
  free(__ptr);
  return (void **)0x0;
}


void FUN_0040c790(long **param_1)

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
        if (param_1[1] < plVar4 || param_1[1] == plVar4) goto LAB_0040c823;
      }
      plVar5 = plVar5 + 2;
    } while (plVar5 <= param_1[1] && param_1[1] != plVar5);
  }
LAB_0040c823:
  param_1[3] = (long *)0x0;
  param_1[4] = (long *)0x0;
  return;
}


void FUN_0040c840(long **param_1)

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
    if (plVar2 <= plVar4) goto LAB_0040c8dc;
    do {
      while (lVar5 = *plVar4, plVar3 = plVar4, lVar5 == 0) {
        plVar4 = plVar4 + 2;
        if (plVar2 <= plVar4) goto LAB_0040c89f;
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
LAB_0040c89f:
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
LAB_0040c8dc:
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

undefined4 FUN_0040c920(void **param_1,ulong param_2)

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
    if (_DAT_00416bcc <= fVar3) {
      return 0;
    }
    if (fVar3 < _DAT_00416bd0) {
      param_2 = (ulong)fVar3;
    }
    else {
      param_2 = (long)(fVar3 - _DAT_00416bd0) ^ 0x8000000000000000;
    }
  }
  local_58 = (void *)FUN_0040bd70(param_2);
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
      uVar2 = FUN_0040c000(&local_68,param_1,0);
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
      cVar1 = FUN_0040c000(param_1,&local_68,1);
      if ((cVar1 != '\0') && (cVar1 = FUN_0040c000(param_1,&local_68,0), cVar1 != '\0')) {
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

undefined8 FUN_0040cb20(long param_1,long param_2,long *param_3)

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
  lVar2 = FUN_0040be60(param_1,param_2,&local_20,0);
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
    if ((long)uVar3 < 0) goto LAB_0040cc1a;
LAB_0040cb8b:
    if (fVar7 <= (float)uVar3 * *(float *)(lVar2 + 8)) goto LAB_0040cba2;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x28);
    fVar7 = (float)uVar6;
    uVar3 = *(ulong *)(param_1 + 0x10);
    if (-1 < (long)uVar3) goto LAB_0040cb8b;
LAB_0040cc1a:
    fVar8 = (float)(uVar3 >> 1 | (ulong)((uint)uVar3 & 1));
    if (fVar7 <= (fVar8 + fVar8) * *(float *)(lVar2 + 8)) goto LAB_0040cba2;
  }
  FUN_0040bf80(param_1 + 0x28);
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
    if (_DAT_00416bcc <= fVar7) {
      return 0xffffffff;
    }
    if (_DAT_00416bd0 <= fVar7) {
      uVar6 = (long)(fVar7 - _DAT_00416bd0) ^ 0x8000000000000000;
    }
    else {
      uVar6 = (ulong)fVar7;
    }
    cVar1 = FUN_0040c920(param_1,uVar6);
    if (cVar1 == '\0') {
      return 0xffffffff;
    }
    lVar2 = FUN_0040be60(param_1,param_2,&local_20,0);
    if (lVar2 != 0) {
      uVar5 = FUN_00402f0f();
      return uVar5;
    }
  }
LAB_0040cba2:
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


undefined8 FUN_0040cda0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_10;
  
  iVar1 = FUN_0040cb20(param_1,param_2,&local_10);
  if (iVar1 != -1) {
    if (iVar1 == 0) {
      param_2 = local_10;
    }
    return param_2;
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_0040cde0(long param_1,undefined8 param_2)

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
  
  lVar5 = FUN_0040be60(param_1,param_2,&local_20,1);
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
      FUN_0040bf80(param_1 + 0x28);
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
        if (_DAT_00416bd0 <= fVar7) {
          uVar6 = (long)(fVar7 - _DAT_00416bd0) ^ 0x8000000000000000;
        }
        else {
          uVar6 = (ulong)fVar7;
        }
        cVar4 = FUN_0040c920(param_1,uVar6);
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


undefined8 FUN_0040cfc0(void)

{
  return 0;
}


undefined8 * FUN_0040cfd0(code *param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  
  puVar1 = (undefined8 *)FUN_00411210(0x20);
  if (param_2 == 0) {
    lVar3 = 8;
    param_2 = 1;
  }
  else {
    lVar3 = param_2 << 3;
    if ((lVar3 < 0) || (param_2 >> 0x3d != 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00411460();
    }
  }
  puVar2 = (undefined8 *)FUN_00411210(lVar3);
  puVar1[1] = param_2;
  *puVar2 = 0;
  *puVar1 = puVar2;
  if (param_1 == (code *)0x0) {
    param_1 = FUN_0040cfc0;
  }
  puVar1[2] = 0;
  puVar1[3] = param_1;
  return puVar1;
}


void FUN_0040d050(void **param_1)

{
  free(*param_1);
  free(param_1);
  return;
}


undefined8 FUN_0040d070(long *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  uVar7 = param_1[1];
  uVar8 = param_1[2];
  lVar5 = *param_1;
  if (uVar7 - 1 <= uVar8) {
    if (lVar5 == 0) {
      if (uVar7 == 0) {
        lVar9 = 0x80;
        uVar7 = 0x10;
      }
      else {
        lVar9 = uVar7 << 3;
        if ((lVar9 < 0) || (uVar7 >> 0x3d != 0)) goto LAB_0040d16f;
      }
    }
    else {
      if (0xaaaaaaaaaaaaaa9 < uVar7) {
LAB_0040d16f:
                    /* WARNING: Subroutine does not return */
        FUN_00411460();
      }
      uVar7 = uVar7 + 1 + (uVar7 >> 1);
      lVar9 = uVar7 * 8;
    }
    param_1[1] = uVar7;
    lVar5 = FUN_00411270(lVar5,lVar9);
    uVar8 = param_1[2];
    *param_1 = lVar5;
  }
  uVar8 = uVar8 + 1;
  param_1[2] = uVar8;
  *(undefined8 *)(lVar5 + uVar8 * 8) = param_2;
  pcVar2 = (code *)param_1[3];
  lVar5 = *param_1;
  uVar3 = *(undefined8 *)(lVar5 + uVar8 * 8);
  while (uVar8 != 1) {
    puVar1 = (undefined8 *)(lVar5 + (uVar8 >> 1) * 8);
    iVar4 = (*pcVar2)(*puVar1,uVar3);
    puVar6 = (undefined8 *)(lVar5 + uVar8 * 8);
    if (0 < iVar4) goto LAB_0040d0ee;
    *puVar6 = *puVar1;
    uVar8 = uVar8 >> 1;
  }
  puVar6 = (undefined8 *)(lVar5 + 8);
LAB_0040d0ee:
  *puVar6 = uVar3;
  return 0;
}


undefined8 FUN_0040d190(long *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 local_60;
  
  lVar2 = param_1[2];
  local_60 = 0;
  if (lVar2 != 0) {
    lVar3 = *param_1;
    uVar1 = lVar2 - 1;
    uVar4 = *(undefined8 *)(lVar3 + lVar2 * 8);
    local_60 = *(undefined8 *)(lVar3 + 8);
    param_1[2] = uVar1;
    *(undefined8 *)(lVar3 + 8) = uVar4;
    lVar2 = *param_1;
    pcVar5 = (code *)param_1[3];
    uVar4 = *(undefined8 *)(lVar2 + 8);
    if (uVar1 >> 1 == 0) {
      puVar7 = (undefined8 *)(lVar2 + 8);
LAB_0040d280:
      *puVar7 = uVar4;
    }
    else {
      uVar10 = 1;
      do {
        uVar9 = uVar10 * 2;
        if (uVar9 < uVar1) {
          puVar7 = (undefined8 *)(lVar2 + (uVar9 + 1) * 8);
          puVar8 = (undefined8 *)(uVar10 * 0x10 + lVar2);
          iVar6 = (*pcVar5)(*puVar8,*puVar7);
          if (iVar6 < 0) {
            puVar8 = puVar7;
            uVar9 = uVar9 + 1;
          }
        }
        else {
          puVar8 = (undefined8 *)(uVar10 * 0x10 + lVar2);
        }
        iVar6 = (*pcVar5)(*puVar8,uVar4);
        puVar7 = (undefined8 *)(lVar2 + uVar10 * 8);
        if (iVar6 < 1) goto LAB_0040d280;
        *puVar7 = *puVar8;
        uVar10 = uVar9;
      } while (uVar9 <= uVar1 >> 1);
      *puVar8 = uVar4;
    }
  }
  return local_60;
}


char * FUN_0040d2b0(uint param_1,long param_2)

{
  uint uVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar2 = (char *)(param_2 + 0xb);
  *(undefined *)(param_2 + 0xb) = 0;
  if ((int)param_1 < 0) {
    do {
      pcVar3 = pcVar2;
      uVar1 = (int)param_1 / 10;
      pcVar3[-1] = ((char)uVar1 * '\n' + '0') - (char)param_1;
      pcVar2 = pcVar3 + -1;
      param_1 = uVar1;
    } while (uVar1 != 0);
    pcVar3[-2] = '-';
    return pcVar3 + -2;
  }
  do {
    pcVar2 = pcVar2 + -1;
    uVar1 = (uint)((ulong)param_1 / 10);
    *pcVar2 = (char)param_1 + (char)((ulong)param_1 / 10) * -10 + '0';
    param_1 = uVar1;
  } while (uVar1 != 0);
  return pcVar2;
}


char * FUN_0040d330(uint param_1,long param_2)

{
  bool bVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(param_2 + 10);
  *(undefined *)(param_2 + 10) = 0;
  do {
    pcVar2 = pcVar2 + -1;
    *pcVar2 = (char)param_1 + (char)(param_1 / 10) * -10 + '0';
    bVar1 = 9 < param_1;
    param_1 = param_1 / 10;
  } while (bVar1);
  return pcVar2;
}


char * FUN_0040d370(ulong param_1,long param_2)

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


int FUN_0040d3c0(byte *param_1,long param_2,uint param_3)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  size_t sVar4;
  long lVar5;
  ushort **ppuVar6;
  byte *pbVar7;
  int iVar8;
  wchar_t local_44;
  mbstate_t local_40 [2];
  
  pbVar1 = param_1 + param_2;
  sVar4 = __ctype_get_mb_cur_max();
  if (sVar4 < 2) {
    iVar8 = 0;
    if (param_1 < pbVar1) {
      ppuVar6 = __ctype_b_loc();
      iVar8 = 0;
      do {
        pbVar7 = param_1 + 1;
        if (((*ppuVar6)[*param_1] & 0x4000) == 0) {
          if ((param_3 & 2) != 0) {
            return -1;
          }
          if (((*ppuVar6)[*param_1] & 2) == 0) goto LAB_0040d53a;
        }
        else {
LAB_0040d53a:
          if (iVar8 == 0x7fffffff) {
            return 0x7fffffff;
          }
          iVar8 = iVar8 + 1;
        }
        param_1 = pbVar7;
      } while (pbVar1 != pbVar7);
    }
  }
  else {
    iVar8 = 0;
    if (param_1 < pbVar1) {
      do {
        bVar2 = *param_1;
        if ((char)bVar2 < '@') {
          if (((char)bVar2 < '%') && (3 < (byte)(bVar2 - 0x20))) goto LAB_0040d432;
LAB_0040d40b:
          param_1 = param_1 + 1;
          iVar8 = iVar8 + 1;
        }
        else {
          if (('@' < (char)bVar2) && (((char)bVar2 < '`' || ((byte)(bVar2 + 0x9f) < 0x1e))))
          goto LAB_0040d40b;
LAB_0040d432:
          local_40[0] = (mbstate_t)0x0;
          do {
            lVar5 = FUN_00412fb0(&local_44,param_1,(long)pbVar1 - (long)param_1,local_40);
            if (lVar5 == -1) {
              if ((param_3 & 1) != 0) {
                return -1;
              }
              goto LAB_0040d40b;
            }
            if (lVar5 == -2) {
              if ((param_3 & 1) != 0) {
                return -1;
              }
              iVar8 = iVar8 + 1;
              param_1 = pbVar1;
              break;
            }
            if (lVar5 == 0) {
              lVar5 = 1;
            }
            iVar3 = wcwidth(local_44);
            if (iVar3 < 0) {
              if ((param_3 & 2) != 0) {
                return -1;
              }
              iVar3 = iswcntrl(local_44);
              if (iVar3 == 0) {
                if (iVar8 == 0x7fffffff) {
                  return 0x7fffffff;
                }
                iVar8 = iVar8 + 1;
              }
            }
            else {
              if (0x7fffffff - iVar8 < iVar3) {
                return 0x7fffffff;
              }
              iVar8 = iVar8 + iVar3;
            }
            param_1 = param_1 + lVar5;
            iVar3 = mbsinit(local_40);
          } while (iVar3 == 0);
        }
      } while (param_1 < pbVar1);
    }
  }
  return iVar8;
}


void FUN_0040d580(char *param_1,undefined4 param_2)

{
  size_t sVar1;
  
  sVar1 = strlen(param_1);
  FUN_0040d3c0(param_1,sVar1,param_2);
  return;
}


long FUN_0040d5b0(void)

{
  int iVar1;
  cpu_set_t cStack_88;
  
  iVar1 = sched_getaffinity(0,0x80,&cStack_88);
  if (iVar1 == 0) {
    iVar1 = __sched_cpucount(0x80,&cStack_88);
    if ((long)iVar1 != 0) {
      return (long)iVar1;
    }
  }
  return 0;
}


ulong FUN_0040d600(byte *param_1)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  byte bVar4;
  byte *local_10 [2];
  
  bVar4 = *param_1;
  if (bVar4 == 0) {
    return 0;
  }
  uVar2 = (uint)(char)bVar4;
  if (uVar2 < 0x21) {
    uVar3 = 0x100003e00U >> ((ulong)bVar4 & 0x3f) & 1;
    while (uVar3 != 0) {
      param_1 = param_1 + 1;
      bVar4 = *param_1;
      if (bVar4 == 0) {
        return 0;
      }
      uVar2 = (uint)(char)bVar4;
      if (0x20 < uVar2) break;
      uVar3 = 1L << (bVar4 & 0x3f) & 0x100003e00;
    }
  }
  if (9 < uVar2 - 0x30) {
    return 0;
  }
  local_10[0] = (byte *)0x0;
  uVar3 = strtoul((char *)param_1,(char **)local_10,10);
  if (local_10[0] != (byte *)0x0) {
    bVar4 = *local_10[0];
    if (bVar4 == 0) {
      return uVar3;
    }
    if (bVar4 < 0x21) {
      uVar1 = 0x100003e00U >> ((ulong)bVar4 & 0x3f) & 1;
      while (uVar1 != 0) {
        local_10[0] = local_10[0] + 1;
        bVar4 = *local_10[0];
        if (bVar4 == 0) {
          return uVar3;
        }
        if (0x20 < bVar4) break;
        uVar1 = 1L << (bVar4 & 0x3f) & 0x100003e00;
      }
    }
    if (bVar4 == 0x2c) {
      return uVar3;
    }
  }
  return 0;
}


ulong FUN_0040d6f0(int param_1)

{
  ulong uVar1;
  char *pcVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_1 == 2) {
    pcVar2 = getenv("OMP_NUM_THREADS");
    if (pcVar2 != (char *)0x0) {
      uVar1 = 0xffffffffffffffff;
      uVar3 = FUN_0040d600(pcVar2);
      pcVar2 = getenv("OMP_THREAD_LIMIT");
      if ((pcVar2 != (char *)0x0) && (uVar1 = FUN_0040d600(pcVar2), uVar1 == 0)) {
        uVar1 = 0xffffffffffffffff;
      }
      if (uVar3 != 0) {
        if (uVar1 <= uVar3) {
          uVar3 = uVar1;
        }
        return uVar3;
      }
      goto LAB_0040d782;
    }
    pcVar2 = getenv("OMP_THREAD_LIMIT");
    if ((pcVar2 != (char *)0x0) && (uVar1 = FUN_0040d600(pcVar2), uVar1 != 0)) goto LAB_0040d782;
  }
  else if (param_1 != 1) {
    uVar1 = sysconf(0x53);
    if ((uVar1 == 1) && (uVar1 = FUN_0040d5b0(), uVar1 == 0)) {
      return 1;
    }
    if (0 < (long)uVar1) {
      return uVar1;
    }
    return 1;
  }
  uVar1 = 0xffffffffffffffff;
LAB_0040d782:
  uVar3 = FUN_0040d5b0();
  if (uVar3 == 0) {
    uVar4 = sysconf(0x54);
    uVar3 = 1;
    if ((0 < (long)uVar4) && (uVar3 = uVar1, uVar4 <= uVar1)) {
      uVar3 = uVar4;
    }
    return uVar3;
  }
  if (uVar1 < uVar3) {
    uVar3 = uVar1;
  }
  return uVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_0040d840(void)

{
  int iVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  sysinfo local_78;
  
  lVar2 = sysconf(0x55);
  dVar3 = (double)lVar2;
  lVar2 = sysconf(0x1e);
  if ((dVar3 < 0.0) || (dVar4 = (double)lVar2, dVar4 < 0.0)) {
    iVar1 = sysinfo(&local_78);
    if (iVar1 != 0) {
      return _DAT_00416bf8;
    }
    if ((long)local_78.totalram < 0) {
      dVar3 = (double)(local_78.totalram >> 1 | (ulong)((uint)local_78.totalram & 1));
      dVar3 = dVar3 + dVar3;
    }
    else {
      dVar3 = (double)local_78.totalram;
    }
    dVar4 = (double)(ulong)local_78.mem_unit;
  }
  return dVar3 * dVar4;
}


double FUN_0040d900(void)

{
  int iVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  sysinfo local_78;
  
  lVar2 = sysconf(0x56);
  dVar3 = (double)lVar2;
  lVar2 = sysconf(0x1e);
  if ((0.0 <= dVar3) && (dVar4 = (double)lVar2, 0.0 <= dVar4)) goto LAB_0040d98e;
  iVar1 = sysinfo(&local_78);
  if (iVar1 != 0) {
    dVar3 = (double)FUN_0040d840();
    return dVar3 * DAT_00416a30;
  }
  if ((long)local_78.freeram < 0) {
    dVar3 = (double)(local_78.freeram >> 1 | (ulong)((uint)local_78.freeram & 1));
    dVar3 = dVar3 + dVar3;
    if ((long)local_78.bufferram < 0) goto LAB_0040d9db;
LAB_0040d974:
    dVar4 = (double)local_78.bufferram;
  }
  else {
    dVar3 = (double)local_78.freeram;
    if (-1 < (long)local_78.bufferram) goto LAB_0040d974;
LAB_0040d9db:
    dVar4 = (double)(local_78.bufferram >> 1 | (ulong)((uint)local_78.bufferram & 1));
    dVar4 = dVar4 + dVar4;
  }
  dVar3 = dVar3 + dVar4;
  dVar4 = (double)(ulong)local_78.mem_unit;
LAB_0040d98e:
  return dVar3 * dVar4;
}


int FUN_0040da00(undefined8 *param_1,uint param_2)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  
  uVar1 = *param_1;
  if (-1 < DAT_0061cbc0) {
    iVar2 = pipe2((int *)param_1,param_2);
    if ((-1 < iVar2) || (piVar4 = __errno_location(), *piVar4 != 0x26)) {
      DAT_0061cbc0 = 1;
      return iVar2;
    }
    DAT_0061cbc0 = -1;
  }
  if ((param_2 & 0xfff7f7ff) == 0) {
    iVar2 = pipe((int *)param_1);
    if (-1 < iVar2) {
      if (((param_2 & 0x800) == 0) ||
         ((((uVar3 = FUN_00412000(*(undefined4 *)((long)param_1 + 4),3,0), -1 < (int)uVar3 &&
            (iVar2 = FUN_00412000(*(undefined4 *)((long)param_1 + 4),4,uVar3 | 0x800), iVar2 != -1))
           && (uVar3 = FUN_00412000(*(undefined4 *)param_1,3,0), -1 < (int)uVar3)) &&
          (iVar2 = FUN_00412000(*(undefined4 *)param_1,4,uVar3 | 0x800), iVar2 != -1)))) {
        if ((param_2 & 0x80000) == 0) {
          return 0;
        }
        uVar3 = FUN_00412000(*(undefined4 *)((long)param_1 + 4),1,0);
        if (((-1 < (int)uVar3) &&
            (iVar2 = FUN_00412000(*(undefined4 *)((long)param_1 + 4),2,uVar3 | 1), iVar2 != -1)) &&
           ((uVar3 = FUN_00412000(*(undefined4 *)param_1,1,0), -1 < (int)uVar3 &&
            (iVar2 = FUN_00412000(*(undefined4 *)param_1,2,uVar3 | 1), iVar2 != -1)))) {
          return 0;
        }
      }
      piVar4 = __errno_location();
      iVar2 = *piVar4;
      close(*(int *)param_1);
      close(*(int *)((long)param_1 + 4));
      *param_1 = uVar1;
      *piVar4 = iVar2;
    }
  }
  else {
    piVar4 = __errno_location();
    *piVar4 = 0x16;
  }
  return -1;
}


ulong FUN_0040dbe0(void)

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


void FUN_0040dc60(byte *param_1)

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
        pbVar6 = &DAT_00416c50;
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
  DAT_0061cbc8 = param_1;
  program_invocation_name = param_1;
  return;
}


char * FUN_0040dd00(char *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  byte *pbVar3;
  
  pcVar2 = (char *)dcgettext(0,param_1,5);
  if (param_1 == pcVar2) {
    pbVar3 = (byte *)FUN_00413750();
    if ((*pbVar3 & 0xdf) == 0x55) {
      if (((((pbVar3[1] & 0xdf) != 0x54) || ((pbVar3[2] & 0xdf) != 0x46)) || (pbVar3[3] != 0x2d)) ||
         ((pbVar3[4] != 0x38 || (pbVar3[5] != 0)))) {
LAB_0040ddd8:
        pcVar2 = "\"";
        if (param_2 != 9) {
          pcVar2 = "\'";
        }
        return pcVar2;
      }
      cVar1 = *pcVar2;
      pcVar2 = &DAT_00416c61;
      if (cVar1 != '`') {
        pcVar2 = &DAT_00416c56;
      }
    }
    else {
      if (((((*pbVar3 & 0xdf) != 0x47) || ((pbVar3[1] & 0xdf) != 0x42)) || (pbVar3[2] != 0x31)) ||
         (((pbVar3[3] != 0x38 || (pbVar3[4] != 0x30)) ||
          ((pbVar3[5] != 0x33 || ((pbVar3[6] != 0x30 || (pbVar3[7] != 0)))))))) goto LAB_0040ddd8;
      cVar1 = *pcVar2;
      pcVar2 = &DAT_00416c5d;
      if (cVar1 != '`') {
        pcVar2 = &DAT_00416c5a;
      }
    }
  }
  return pcVar2;
}


ulong FUN_0040de00(undefined *param_1,ulong param_2,char *param_3,ulong param_4,int param_5,
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
LAB_0040ea51:
    if (param_2 != 0) {
      bVar3 = false;
      local_5b = false;
      bVar2 = true;
      local_70 = 0;
      goto LAB_0040e686;
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
      goto LAB_0040ea51;
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
      param_8 = (char *)FUN_0040dd00(&DAT_00416c65,param_5);
      param_9 = (char *)FUN_0040dd00("\'");
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
LAB_0040de98:
  uVar22 = 0;
  bVar5 = local_5b;
LAB_0040dea8:
  bVar23 = param_4 != uVar22;
  if (param_4 == 0xffffffffffffffff) {
    bVar23 = param_3[uVar22] != '\0';
  }
  bVar26 = bVar6;
  if (!bVar23) goto LAB_0040e628;
  bVar20 = (bool)(param_5 != 2 & bVar6);
  __s1 = (byte *)(param_3 + uVar22);
  uVar16 = uVar15;
  bVar4 = bVar3;
  if (bVar20) {
    if (local_a0 == 0) {
LAB_0040e5a0:
      uVar19 = (ulong)*__s1;
      switch(uVar19) {
      case 0:
        goto switchD_0040e5b2_caseD_0;
      default:
        bVar20 = false;
        goto switchD_0040e41e_caseD_1;
      case 7:
        bVar17 = 0x61;
        goto LAB_0040e2b5;
      case 8:
        bVar17 = 0x62;
        break;
      case 9:
switchD_0040e5b2_caseD_9:
        bVar17 = 0x74;
        break;
      case 10:
switchD_0040e5b2_caseD_a:
        bVar17 = 0x6e;
        break;
      case 0xb:
switchD_0040e5b2_caseD_b:
        bVar17 = 0x76;
        goto LAB_0040e2b5;
      case 0xc:
switchD_0040e5b2_caseD_c:
        bVar17 = 0x66;
LAB_0040e2b5:
        if (local_5c) {
          bVar25 = false;
          goto LAB_0040e208;
        }
LAB_0040e2c0:
        bVar23 = false;
        goto LAB_0040e07b;
      case 0xd:
        bVar20 = false;
switchD_0040df98_caseD_d:
        bVar25 = param_5 == 2;
        uVar19 = 0xd;
        bVar13 = 0x72;
        goto LAB_0040e1d0;
      case 0x20:
        bVar25 = false;
LAB_0040e5fa:
        uVar19 = 0x20;
        goto LAB_0040e5c2;
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
switchD_0040df98_caseD_21:
        bVar25 = false;
        goto LAB_0040e1db;
      case 0x23:
      case 0x7e:
        bVar26 = false;
LAB_0040e5da:
        if (uVar22 == 0) {
          bVar25 = false;
          bVar23 = bVar20;
          bVar20 = bVar26;
          goto LAB_0040dfe8;
        }
        bVar23 = false;
        goto LAB_0040dfff;
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
LAB_0040e5c2:
        bVar24 = false;
        bVar23 = bVar20;
        bVar20 = bVar25;
        goto LAB_0040e001;
      case 0x27:
        bVar20 = false;
        goto switchD_0040e41e_caseD_27;
      case 0x3f:
        bVar20 = false;
        goto switchD_0040e41e_caseD_3f;
      case 0x5c:
        bVar20 = false;
        goto switchD_0040df98_caseD_5c;
      case 0x7b:
      case 0x7d:
        bVar20 = false;
        goto switchD_0040e41e_caseD_7b;
      }
      bVar25 = false;
      bVar23 = false;
      goto joined_r0x0040e1f7;
    }
    if ((param_4 == 0xffffffffffffffff) && (1 < local_a0)) {
      param_4 = strlen(param_3);
    }
    if ((param_4 < uVar22 + local_a0) || (iVar7 = memcmp(__s1,local_78,local_a0), iVar7 != 0))
    goto LAB_0040e5a0;
    if (!local_5c) {
      uVar19 = (ulong)*__s1;
      bVar25 = bVar20;
      switch(uVar19) {
      case 0:
        goto switchD_0040df98_caseD_0;
      default:
        goto switchD_0040e41e_caseD_1;
      case 7:
        bVar17 = 0x61;
        goto LAB_0040e2c0;
      case 8:
        bVar25 = false;
        bVar23 = false;
        bVar17 = 0x62;
        break;
      case 9:
        goto switchD_0040e5b2_caseD_9;
      case 10:
        goto switchD_0040e5b2_caseD_a;
      case 0xb:
        goto switchD_0040e5b2_caseD_b;
      case 0xc:
        goto switchD_0040e5b2_caseD_c;
      case 0xd:
        goto switchD_0040df98_caseD_d;
      case 0x20:
        goto LAB_0040e5fa;
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
        goto switchD_0040df98_caseD_21;
      case 0x23:
      case 0x7e:
        bVar26 = bVar20;
        goto LAB_0040e5da;
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
        goto LAB_0040e5c2;
      case 0x27:
        goto switchD_0040e41e_caseD_27;
      case 0x3f:
        goto switchD_0040e41e_caseD_3f;
      case 0x5c:
        goto switchD_0040df98_caseD_5c;
      case 0x7b:
      case 0x7d:
        goto switchD_0040e41e_caseD_7b;
      }
      goto LAB_0040e042;
    }
    goto LAB_0040e21a;
  }
  uVar19 = (ulong)*__s1;
  switch(uVar19) {
  case 0:
    if (bVar6) {
switchD_0040e5b2_caseD_0:
      if (!local_5c) {
        bVar20 = false;
switchD_0040df98_caseD_0:
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
            goto LAB_0040e0f8;
          }
LAB_0040e33a:
          param_1[uVar16] = 0x5c;
          uVar15 = uVar16;
        }
        else if (uVar15 < uVar9) goto LAB_0040e33a;
        uVar16 = uVar15 + 1;
        bVar24 = bVar23;
        if (param_5 == 2) {
          bVar17 = 0x30;
          bVar23 = false;
          bVar4 = bVar3;
          goto LAB_0040e0f8;
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
LAB_0040e379:
        bVar17 = (byte)uVar19;
        bVar23 = false;
        uVar15 = uVar16;
        bVar4 = bVar3;
        if ((bool)(bVar6 ^ 1U | bVar26)) goto LAB_0040e0f8;
        goto LAB_0040e001;
      }
      bVar26 = param_5 == 2;
      goto LAB_0040e20c;
    }
    if ((param_6 & 1) == 0) {
      bVar25 = param_5 == 2;
      uVar19 = 0;
      bVar23 = false;
      bVar20 = false;
      goto LAB_0040dfe8;
    }
    uVar22 = uVar22 + 1;
    goto LAB_0040dea8;
  default:
switchD_0040e41e_caseD_1:
    bVar25 = bVar6;
    if (sVar8 != 1) {
      local_40[0] = (mbstate_t)0x0;
      if (param_4 == 0xffffffffffffffff) {
        param_4 = strlen(param_3);
      }
      uVar21 = 0;
      do {
        uVar1 = uVar22 + uVar21;
        lVar11 = FUN_00412fb0(&local_44,param_3 + uVar1,param_4 - uVar1,local_40);
        if (lVar11 == 0) break;
        if (lVar11 == -1) {
          bVar23 = false;
          goto LAB_0040ed2a;
        }
        if (lVar11 == -2) {
          if ((param_4 <= uVar1) || (param_3[uVar1] == '\0')) goto LAB_0040ee67;
          goto LAB_0040ee57;
        }
        if (((param_5 == 2) && (local_5c)) && (lVar11 != 1)) {
          pcVar12 = param_3 + uVar1 + 1;
          do {
            if (((byte)(*pcVar12 + 0xa5U) < 0x22) &&
               ((1L << (*pcVar12 + 0xa5U & 0x3f) & 0x20000002bU) != 0)) {
              param_5 = 2;
              goto LAB_0040e20c;
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
      goto LAB_0040ed2a;
    }
    ppuVar10 = __ctype_b_loc();
    uVar21 = 1;
    bVar25 = ((*ppuVar10)[uVar19] & 0x4000) == 0;
    bVar23 = !bVar25;
    bVar25 = (bool)(bVar25 & bVar6);
    goto LAB_0040e3f4;
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
    goto LAB_0040e432;
  case 10:
    uVar19 = 10;
    bVar13 = 0x6e;
    goto LAB_0040e432;
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
LAB_0040e432:
    bVar25 = param_5 == 2;
    bVar20 = (bool)(local_5c & bVar25);
    if (bVar20) {
LAB_0040e44a:
      param_5 = 2;
      goto LAB_0040e20c;
    }
    break;
  case 0x20:
    uVar19 = 0x20;
    goto LAB_0040dfd6;
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
LAB_0040dfd6:
    bVar25 = param_5 == 2;
    if ((local_5c) && (bVar25)) goto LAB_0040e44a;
    goto LAB_0040dfe8;
  case 0x23:
  case 0x7e:
LAB_0040dfcd:
    bVar25 = param_5 == 2;
    if (uVar22 == 0) goto LAB_0040dfd6;
    goto LAB_0040e1db;
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
    goto switchD_0040e41e_caseD_25;
  case 0x27:
switchD_0040e41e_caseD_27:
    bVar5 = bVar23;
    if (param_5 != 2) {
      bVar25 = false;
      uVar19 = 0x27;
      goto LAB_0040dfe8;
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
      goto LAB_0040e0f8;
    }
    goto LAB_0040e20c;
  case 0x3f:
switchD_0040e41e_caseD_3f:
    if (param_5 == 2) {
      if (!local_5c) {
        bVar17 = 0x3f;
        bVar24 = false;
        bVar23 = false;
        goto LAB_0040e0f8;
      }
      goto LAB_0040e20c;
    }
    if (param_5 != 5) {
      bVar25 = param_5 == 2;
      uVar19 = 0x3f;
      bVar23 = false;
      goto LAB_0040dfe8;
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
        goto LAB_0040e379;
      }
      goto LAB_0040e21a;
    }
    bVar25 = false;
    uVar19 = 0x3f;
    bVar23 = false;
    goto LAB_0040dfe8;
  case 0x5c:
    if (param_5 != 2) {
switchD_0040df98_caseD_5c:
      uVar19 = 0x5c;
      bVar17 = 0x5c;
      bVar13 = 0x5c;
      bVar25 = (bool)(bVar6 & local_5c & local_a0 != 0);
      if (!bVar25) break;
      uVar22 = uVar22 + 1;
      bVar23 = false;
      goto LAB_0040e114;
    }
    if (local_5c) goto LAB_0040e20c;
    uVar22 = uVar22 + 1;
    bVar23 = false;
    bVar17 = 0x5c;
    goto LAB_0040e114;
  case 0x7b:
  case 0x7d:
switchD_0040e41e_caseD_7b:
    bVar24 = param_4 != 1;
    if (param_4 == 0xffffffffffffffff) {
      bVar24 = param_3[1] != '\0';
    }
    bVar25 = param_5 == 2;
    if (!bVar24) goto LAB_0040dfcd;
    goto LAB_0040e1db;
  }
LAB_0040e1d0:
  if (!bVar6) {
LAB_0040e1db:
    bVar23 = false;
    goto LAB_0040dfe8;
  }
  bVar23 = false;
  bVar17 = bVar13;
  goto joined_r0x0040e1f7;
LAB_0040e628:
  if ((uVar15 == 0) && ((bool)(local_5c & param_5 == 2))) {
    param_5 = 2;
LAB_0040e20c:
    if (bVar26) {
      param_5 = 4;
    }
LAB_0040e21a:
    uVar9 = FUN_0040de00(param_1,uVar9,param_3,param_4,param_5,param_6 & 0xfffffffd,0,param_8,
                         param_9);
    return uVar9;
  }
  bVar26 = (bool)(param_5 == 2 & (local_5c ^ 1U));
  bVar23 = (bool)(local_5c ^ 1U);
  if ((!bVar26) || (bVar23 = bVar26, !bVar5)) {
LAB_0040eefd:
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
    uVar9 = FUN_0040de00(param_1,local_70,param_3,param_4,5,param_6,param_7,param_8,param_9);
    return uVar9;
  }
  local_5b = uVar9 == 0 && local_70 != 0;
  param_2 = local_70;
  bVar23 = bVar5;
  if (uVar9 != 0 || local_70 == 0) goto LAB_0040eefd;
LAB_0040e686:
  *param_1 = 0x27;
  param_5 = 2;
  uVar15 = 1;
  local_78 = "\'";
  local_a0 = 1;
  local_5c = false;
  uVar9 = param_2;
  goto LAB_0040de98;
  while (__s1[uVar21] != 0) {
LAB_0040ee57:
    uVar21 = uVar21 + 1;
    if (param_4 <= uVar22 + uVar21) break;
  }
LAB_0040ee67:
  bVar23 = false;
LAB_0040ed2a:
  if (1 < uVar21) {
LAB_0040e8ee:
    bVar26 = false;
    uVar21 = uVar21 + uVar22;
    uVar16 = uVar22;
    do {
      bVar17 = (byte)uVar19;
      if (bVar25) {
        bVar26 = param_5 == 2;
        if (local_5c) goto LAB_0040e20c;
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
        if (uVar21 <= uVar22) goto LAB_0040e08d;
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
        if (uVar21 <= uVar22) goto LAB_0040e114;
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
LAB_0040e3f4:
  if (bVar25) {
    bVar23 = false;
    bVar25 = bVar6;
    goto LAB_0040e8ee;
  }
switchD_0040e41e_caseD_25:
  bVar25 = param_5 == 2;
LAB_0040dfe8:
  bVar17 = (byte)uVar19;
  bVar24 = (bool)((bVar6 ^ 1U | bVar25) ^ 1 | local_5c);
  bVar26 = bVar20;
  if (bVar24) {
LAB_0040dfff:
    bVar24 = false;
    bVar20 = bVar26;
LAB_0040e001:
    bVar17 = (byte)uVar19;
    uVar16 = uVar15;
    bVar4 = bVar3;
    if ((param_7 == 0) || ((*(uint *)(param_7 + (uVar19 >> 5) * 4) >> (bVar17 & 0x1f) & 1) == 0))
    goto LAB_0040e0f8;
    bVar25 = param_5 == 2;
  }
  else {
LAB_0040e0f8:
    bVar25 = param_5 == 2;
    uVar15 = uVar16;
    bVar3 = bVar4;
    if (!bVar20) {
      uVar22 = uVar22 + 1;
      bVar3 = (bool)((bVar24 ^ 1U) & bVar4);
LAB_0040e114:
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
      goto LAB_0040e08d;
    }
  }
joined_r0x0040e1f7:
  if (local_5c) {
LAB_0040e208:
    bVar26 = (bool)(bVar6 & bVar25);
    goto LAB_0040e20c;
  }
LAB_0040e042:
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
LAB_0040e07b:
  if (uVar15 < uVar9) {
    param_1[uVar15] = 0x5c;
  }
  uVar15 = uVar15 + 1;
  uVar22 = uVar22 + 1;
  bVar4 = bVar3;
LAB_0040e08d:
  bVar3 = bVar4;
  if (uVar15 < uVar9) {
    param_1[uVar15] = bVar17;
  }
  uVar15 = uVar15 + 1;
  if (!bVar23) {
    bVar2 = false;
  }
  goto LAB_0040dea8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_0040f030(int param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

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
  puVar8 = (undefined4 *)PTR_DAT_0061c558;
  if (DAT_0061c570 <= param_1) {
    if (param_1 == 0x7fffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_00411460();
    }
    if (PTR_DAT_0061c558 == &DAT_0061c560) {
      puVar8 = (undefined4 *)FUN_00411270(0);
      uVar6 = PTR_DAT_0061c568._4_4_;
      uVar5 = PTR_DAT_0061c568._0_4_;
      uVar3 = _UNK_0061c564;
      PTR_DAT_0061c558 = (undefined *)puVar8;
      *puVar8 = _DAT_0061c560;
      puVar8[1] = uVar3;
      puVar8[2] = uVar5;
      puVar8[3] = uVar6;
    }
    else {
      puVar8 = (undefined4 *)FUN_00411270(PTR_DAT_0061c558);
      PTR_DAT_0061c558 = (undefined *)puVar8;
    }
    memset(puVar8 + (long)DAT_0061c570 * 4,0,(long)((param_1 + 1) - DAT_0061c570) << 4);
    DAT_0061c570 = param_1 + 1;
  }
  uVar2 = param_4[1];
  puVar10 = (ulong *)(puVar8 + (long)param_1 * 4);
  uVar4 = *puVar10;
  __ptr = (undefined *)puVar10[1];
  uVar9 = FUN_0040de00(__ptr,uVar4,param_2,param_3,*param_4,uVar2 | 1,param_4 + 2,
                       *(undefined8 *)(param_4 + 10),*(undefined8 *)(param_4 + 0xc));
  if (uVar4 <= uVar9) {
    uVar9 = uVar9 + 1;
    *puVar10 = uVar9;
    if (__ptr != &DAT_0061cbe0) {
      free(__ptr);
    }
    __ptr = (undefined *)FUN_00411210(uVar9);
    uVar3 = *param_4;
    puVar10[1] = (ulong)__ptr;
    FUN_0040de00(__ptr,uVar9,param_2,param_3,uVar3,uVar2 | 1,param_4 + 2,
                 *(undefined8 *)(param_4 + 10),*(undefined8 *)(param_4 + 0xc));
  }
  *piVar7 = iVar1;
  return __ptr;
}


void FUN_0040f1d0(undefined *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_0061cce0;
  }
  FUN_00411410(param_1,0x38);
  *piVar2 = iVar1;
  return;
}


undefined4 FUN_0040f210(undefined4 *param_1)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)&DAT_0061cce0;
  }
  return *param_1;
}


void FUN_0040f220(undefined4 *param_1,undefined4 param_2)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)&DAT_0061cce0;
  }
  *param_1 = param_2;
  return;
}


uint FUN_0040f230(undefined *param_1,byte param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_0061cce0;
  }
  uVar1 = *(uint *)(param_1 + (ulong)(param_2 >> 5) * 4 + 8);
  uVar2 = uVar1 >> (param_2 & 0x1f);
  *(uint *)(param_1 + (ulong)(param_2 >> 5) * 4 + 8) =
       ((param_3 ^ uVar2) & 1) << (param_2 & 0x1f) ^ uVar1;
  return uVar2 & 1;
}


undefined4 FUN_0040f270(undefined *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_0061cce0;
  }
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_1 + 4) = param_2;
  return uVar1;
}


void FUN_0040f290(undefined4 *param_1,long param_2,long param_3)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)&DAT_0061cce0;
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


void FUN_0040f2c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 *param_5)

{
  int iVar1;
  int *piVar2;
  
  if (param_5 == (undefined4 *)0x0) {
    param_5 = (undefined4 *)&DAT_0061cce0;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  FUN_0040de00(param_1,param_2,param_3,param_4,*param_5,param_5[1],param_5 + 2,
               *(undefined8 *)(param_5 + 10),*(undefined8 *)(param_5 + 0xc));
  *piVar2 = iVar1;
  return;
}


undefined8 FUN_0040f340(undefined8 param_1,undefined8 param_2,long *param_3,undefined4 *param_4)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  
  if (param_4 == (undefined4 *)0x0) {
    param_4 = (undefined4 *)&DAT_0061cce0;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  uVar5 = (uint)(param_3 == (long *)0x0) | param_4[1];
  lVar3 = FUN_0040de00(0,0,param_1,param_2,*param_4,uVar5,param_4 + 2,*(undefined8 *)(param_4 + 10),
                       *(undefined8 *)(param_4 + 0xc));
  uVar4 = FUN_00411210(lVar3 + 1);
  FUN_0040de00(uVar4,lVar3 + 1,param_1,param_2,*param_4,uVar5,param_4 + 2,
               *(undefined8 *)(param_4 + 10),*(undefined8 *)(param_4 + 0xc));
  *piVar2 = iVar1;
  if (param_3 != (long *)0x0) {
    *param_3 = lVar3;
  }
  return uVar4;
}


void FUN_0040f430(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0040f340(param_1,param_2,0,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040f440(void)

{
  void **ppvVar1;
  void *__ptr;
  undefined *__ptr_00;
  void **ppvVar2;
  
  __ptr_00 = PTR_DAT_0061c558;
  if (1 < DAT_0061c570) {
    ppvVar2 = (void **)(PTR_DAT_0061c558 + 0x18);
    ppvVar1 = (void **)(PTR_DAT_0061c558 + (ulong)(DAT_0061c570 - 2) * 0x10 + 0x28);
    do {
      __ptr = *ppvVar2;
      ppvVar2 = ppvVar2 + 2;
      free(__ptr);
    } while (ppvVar2 != ppvVar1);
  }
  if (*(undefined **)(__ptr_00 + 8) != &DAT_0061cbe0) {
    free(*(undefined **)(__ptr_00 + 8));
    _DAT_0061c560 = 0x100;
    PTR_DAT_0061c568 = &DAT_0061cbe0;
  }
  if (__ptr_00 != &DAT_0061c560) {
    free(__ptr_00);
    PTR_DAT_0061c558 = &DAT_0061c560;
  }
  DAT_0061c570 = 1;
  return;
}


void FUN_0040f4e0(undefined8 param_1,undefined8 param_2)

{
  FUN_0040f030(param_1,param_2,0xffffffffffffffff,&DAT_0061cce0);
  return;
}


void FUN_0040f500(void)

{
  FUN_0040f030();
  return;
}


void FUN_0040f510(undefined8 param_1)

{
  FUN_0040f030(0,param_1,0xffffffffffffffff,&DAT_0061cce0);
  return;
}


void FUN_0040f530(undefined8 param_1,undefined8 param_2)

{
  FUN_0040f030(0,param_1,param_2,&DAT_0061cce0);
  return;
}


void FUN_0040f550(undefined8 param_1,int param_2,undefined8 param_3)

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
    FUN_0040f030(param_1,param_3,0xffffffffffffffff,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_0040f5c0(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

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
    FUN_0040f030(param_1,param_3,param_4,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_0040f630(undefined4 param_1,undefined8 param_2)

{
  FUN_0040f550(0,param_1,param_2);
  return;
}


void FUN_0040f640(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0040f5c0(0,param_1,param_2,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040f650(undefined8 param_1,undefined8 param_2,byte param_3)

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
  
  local_18 = DAT_0061cd10;
  local_48 = _DAT_0061cce0;
  uStack_40 = uRam000000000061cce8;
  local_38 = _DAT_0061ccf0;
  uStack_30 = uRam000000000061ccf8;
  puVar1 = (uint *)((long)&uStack_40 + (ulong)(param_3 >> 5) * 4);
  local_28 = _DAT_0061cd00;
  uStack_20 = uRam000000000061cd08;
  uVar2 = *puVar1;
  *puVar1 = (~(uVar2 >> (param_3 & 0x1f)) & 1) << (param_3 & 0x1f) ^ uVar2;
  FUN_0040f030(0,param_1,param_2,&local_48);
  return;
}


void FUN_0040f6c0(undefined8 param_1,char param_2)

{
  FUN_0040f650(param_1,0xffffffffffffffff,(int)param_2);
  return;
}


void FUN_0040f6d0(undefined8 param_1)

{
  FUN_0040f650(param_1,0xffffffffffffffff,0x3a);
  return;
}


void FUN_0040f6f0(undefined8 param_1,undefined8 param_2)

{
  FUN_0040f650(param_1,param_2,0x3a);
  return;
}


void FUN_0040f700(undefined8 param_1,int param_2,undefined8 param_3)

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
    FUN_0040f030(param_1,param_3,0xffffffffffffffff,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040f770(undefined8 param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5
                 )

{
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  long lStack_20;
  long local_18;
  
  uStack_40 = uRam000000000061cce8;
  local_38 = _DAT_0061ccf0;
  uStack_30 = uRam000000000061ccf8;
  local_28 = _DAT_0061cd00;
  lStack_20 = uRam000000000061cd08;
  local_18 = DAT_0061cd10;
  local_48 = CONCAT44((int)((ulong)_DAT_0061cce0 >> 0x20),10);
  if ((param_2 != 0) && (param_3 != 0)) {
    lStack_20 = param_2;
    local_18 = param_3;
    FUN_0040f030(param_1,param_4,param_5,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_0040f7e0(void)

{
  FUN_0040f770();
  return;
}


void FUN_0040f7f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0040f770(0,param_1,param_2,param_3,0xffffffffffffffff);
  return;
}


void FUN_0040f810(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_0040f770(0,param_1,param_2,param_3,param_4);
  return;
}


void FUN_0040f830(void)

{
  FUN_0040f030();
  return;
}


void FUN_0040f840(undefined8 param_1,undefined8 param_2)

{
  FUN_0040f030(0,param_1,param_2,&DAT_0061c520);
  return;
}


void FUN_0040f860(undefined8 param_1,undefined8 param_2)

{
  FUN_0040f030(param_1,param_2,0xffffffffffffffff,&DAT_0061c520);
  return;
}


void FUN_0040f880(undefined8 param_1)

{
  FUN_0040f030(0,param_1,0xffffffffffffffff,&DAT_0061c520);
  return;
}


void FUN_0040f8a0(long param_1)

{
  undefined8 uVar1;
  int *piVar2;
  undefined8 uVar3;
  
  if (param_1 != 0) {
    uVar1 = FUN_0040f880();
    piVar2 = __errno_location();
    if (*piVar2 == 0) {
      uVar3 = dcgettext(0,"%s: end of file",5);
    }
    else {
      uVar3 = dcgettext(0,"%s: read error",5);
    }
                    /* WARNING: Subroutine does not return */
    error(DAT_0061c518,*piVar2,uVar3,uVar1);
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


FILE ** FUN_0040f900(FILE *param_1,ulong param_2)

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
    ppFVar3 = (FILE **)FUN_00411210(0x1038);
    *ppFVar3 = (FILE *)0x0;
    ppFVar3[1] = (FILE *)FUN_0040f8a0;
    ppFVar3[2] = (FILE *)0x0;
    return ppFVar3;
  }
  if (param_1 != (FILE *)0x0) {
    pFVar2 = (FILE *)FUN_004136b0(param_1,&DAT_004179c4);
    if (pFVar2 != (FILE *)0x0) {
      ppFVar3 = (FILE **)FUN_00411210(0x1038);
      *ppFVar3 = pFVar2;
      __n = 0x1000;
      if (param_2 < 0x1001) {
        __n = param_2;
      }
      ppFVar3[1] = (FILE *)FUN_0040f8a0;
      ppFVar3[2] = param_1;
      setvbuf(pFVar2,(char *)(ppFVar3 + 3),0,__n);
      return ppFVar3;
    }
    return (FILE **)0x0;
  }
  ppFVar4 = (FILE **)FUN_00411210(0x1038);
  *ppFVar4 = (FILE *)0x0;
  ppFVar3 = ppFVar4 + 4;
  ppFVar4[1] = (FILE *)FUN_0040f8a0;
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
    if (0x7ff < (long)pFVar2) goto LAB_0040fa08;
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
    if (0x7ff < lVar7) goto LAB_0040fa08;
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
    if (0x7ff < uVar5) goto LAB_0040fa08;
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
LAB_0040fa08:
  FUN_00410070(ppFVar3);
  return ppFVar4;
}


void FUN_0040fbf0(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 8) = param_2;
  return;
}


void FUN_0040fc00(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}


void FUN_0040fc10(FILE **param_1,void *param_2,FILE *param_3)

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
    goto LAB_0040fd25;
  }
  do {
    param_2 = (void *)((long)__dest + (long)pFVar5);
    param_3 = (FILE *)((long)param_3 - (long)pFVar5);
    memcpy(__dest,(void *)((0x800 - (long)pFVar5) + (long)__src),(size_t)pFVar5);
    if (((ulong)param_2 & 7) == 0) goto LAB_0040fd0b;
    pFVar5 = (FILE *)0x800;
    FUN_0040fdc0(ppFVar1,__src);
    __dest = param_2;
  } while ((FILE *)0x800 < param_3);
  goto LAB_0040fd1f;
LAB_0040fd0b:
  while ((FILE *)0x7ff < param_3) {
    FUN_0040fdc0(ppFVar1,param_2);
    param_3 = (FILE *)&param_3[-10]._fileno;
    param_2 = (void *)((long)param_2 + 0x800);
    if (param_3 == (FILE *)0x0) {
      param_1[3] = (FILE *)0x0;
      return;
    }
  }
  FUN_0040fdc0(ppFVar1,__src);
LAB_0040fd1f:
  pFVar5 = (FILE *)0x800;
LAB_0040fd25:
  memcpy(param_2,__src,(size_t)param_3);
  param_1[3] = (FILE *)((long)pFVar5 - (long)param_3);
  return;
}


int FUN_0040fd70(FILE **param_1)

{
  FILE *__stream;
  int iVar1;
  int iVar2;
  int *piVar3;
  __off_t _Var4;
  
  __stream = *param_1;
  __explicit_bzero_chk(param_1,0x1038,0xffffffffffffffff);
  free(param_1);
  if (__stream == (FILE *)0x0) {
    return 0;
  }
  iVar1 = fileno(__stream);
  if (-1 < iVar1) {
    iVar1 = __freading();
    if (iVar1 != 0) {
      iVar1 = fileno(__stream);
      _Var4 = lseek(iVar1,0,1);
      if (_Var4 == -1) goto LAB_00411fe7;
    }
    iVar1 = FUN_00412140(__stream);
    if (iVar1 != 0) {
      piVar3 = __errno_location();
      iVar1 = *piVar3;
      iVar2 = fclose(__stream);
      if (iVar1 != 0) {
        *piVar3 = iVar1;
        iVar2 = -1;
      }
      return iVar2;
    }
  }
LAB_00411fe7:
  iVar1 = fclose(__stream);
  return iVar1;
}


void FUN_0040fdc0(long *param_1,long *param_2)

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


void FUN_00410070(ulong *param_1)

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


void FUN_004102b0(long *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  
  lVar1 = param_1[6];
  lVar2 = param_1[5];
  if (lVar1 == lVar2) {
    *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xd) | 2;
  }
  uVar3 = param_1[7];
  uVar4 = lVar1 + param_1[9] & ~param_1[9];
  param_1[6] = uVar4;
  if (uVar3 - param_1[4] < uVar4 - param_1[4]) {
    param_1[6] = uVar3;
    uVar4 = uVar3;
  }
  param_1[5] = uVar4;
  plVar5 = (long *)param_1[0x11];
  if ((ulong)(param_1[0x12] - (long)plVar5) < 8) {
    _obstack_newchunk(param_1 + 0xe,8);
    plVar5 = (long *)param_1[0x11];
  }
  *plVar5 = lVar2;
  plVar5 = (long *)param_1[0x1c];
  param_1[0x11] = param_1[0x11] + 8;
  if ((ulong)(param_1[0x1d] - (long)plVar5) < 8) {
    _obstack_newchunk(param_1 + 0x19,8);
    plVar5 = (long *)param_1[0x1c];
  }
  *plVar5 = (lVar1 - lVar2) + -1;
  param_1[0x1c] = param_1[0x1c] + 8;
  *param_1 = *param_1 + 1;
  return;
}


void FUN_004103a0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  _obstack_begin(param_1 + 3,0,0,malloc,free);
  _obstack_begin(param_1 + 0xe,0,0,malloc,free);
  *(byte *)(param_1 + 0x23) = *(byte *)(param_1 + 0x23) & 0xfe;
  param_1[0x20] = malloc;
  param_1[0x21] = free;
  FUN_00413270(param_1 + 0x19,0,0);
  return;
}


void FUN_00410410(long param_1)

{
  _obstack_free(param_1 + 0x18,0);
  _obstack_free(param_1 + 0x70,0);
  _obstack_free(param_1 + 200,0);
  return;
}


ulong FUN_00410440(FILE *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined4 extraout_var;
  undefined8 *puVar6;
  
  do {
    iVar3 = fgetc(param_1);
    while( true ) {
      if (iVar3 == -1) {
        puVar4 = *(undefined **)(param_2 + 0x30);
        if (puVar4 != *(undefined **)(param_2 + 0x28)) {
          if (puVar4 == *(undefined **)(param_2 + 0x38)) {
            _obstack_newchunk(param_2 + 0x18,1);
            puVar4 = *(undefined **)(param_2 + 0x30);
          }
          *(undefined **)(param_2 + 0x30) = puVar4 + 1;
          *puVar4 = 0;
          FUN_004102b0(param_2);
        }
        puVar6 = *(undefined8 **)(param_2 + 0x88);
        if ((ulong)(*(long *)(param_2 + 0x90) - (long)puVar6) < 8) {
          _obstack_newchunk(param_2 + 0x70,8);
          puVar6 = *(undefined8 **)(param_2 + 0x88);
        }
        *puVar6 = 0;
        lVar1 = *(long *)(param_2 + 0x88) + 8;
        *(long *)(param_2 + 0x88) = lVar1;
        if (lVar1 == *(long *)(param_2 + 0x80)) {
          *(byte *)(param_2 + 0xc0) = *(byte *)(param_2 + 0xc0) | 2;
        }
        uVar5 = lVar1 + *(ulong *)(param_2 + 0xa0) & ~*(ulong *)(param_2 + 0xa0);
        uVar2 = *(ulong *)(param_2 + 0x90);
        *(ulong *)(param_2 + 0x88) = uVar5;
        if (uVar2 - *(long *)(param_2 + 0x78) < uVar5 - *(long *)(param_2 + 0x78)) {
          *(ulong *)(param_2 + 0x88) = uVar2;
          uVar5 = uVar2;
        }
        *(long *)(param_2 + 8) = *(long *)(param_2 + 0x80);
        lVar1 = *(long *)(param_2 + 0xd8);
        *(ulong *)(param_2 + 0x80) = uVar5;
        if (*(long *)(param_2 + 0xe0) == lVar1) {
          *(byte *)(param_2 + 0x118) = *(byte *)(param_2 + 0x118) | 2;
        }
        uVar5 = *(long *)(param_2 + 0xe0) + *(ulong *)(param_2 + 0xf8) & ~*(ulong *)(param_2 + 0xf8)
        ;
        uVar2 = *(ulong *)(param_2 + 0xe8);
        *(ulong *)(param_2 + 0xe0) = uVar5;
        if (uVar2 - *(long *)(param_2 + 0xd0) < uVar5 - *(long *)(param_2 + 0xd0)) {
          *(ulong *)(param_2 + 0xe0) = uVar2;
          uVar5 = uVar2;
        }
        *(ulong *)(param_2 + 0xd8) = uVar5;
        *(long *)(param_2 + 0x10) = lVar1;
        iVar3 = ferror(param_1);
        return CONCAT44(extraout_var,iVar3) & 0xffffffffffffff00 | (ulong)(iVar3 == 0);
      }
      puVar4 = *(undefined **)(param_2 + 0x30);
      if (*(undefined **)(param_2 + 0x38) == puVar4) {
        _obstack_newchunk(param_2 + 0x18,1);
        puVar4 = *(undefined **)(param_2 + 0x30);
        *(undefined **)(param_2 + 0x30) = puVar4 + 1;
        *puVar4 = (char)iVar3;
      }
      else {
        *(undefined **)(param_2 + 0x30) = puVar4 + 1;
        *puVar4 = (char)iVar3;
      }
      if (iVar3 != 0) break;
      FUN_004102b0(param_2);
      iVar3 = fgetc(param_1);
    }
  } while( true );
}


void FUN_00410660(char *param_1)

{
  int iVar1;
  
  iVar1 = mkstemp(param_1);
  FUN_00410c20(iVar1);
  return;
}


void FUN_00410680(char *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = mkostemp(param_1,param_2);
  FUN_00413640(iVar1,param_2);
  return;
}


uint FUN_004106a0(byte *param_1,byte *param_2,uint param_3,uint param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  byte bVar5;
  int iVar6;
  byte bVar7;
  byte *pbVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  
  uVar3 = (uint)*param_1;
  bVar7 = *param_2;
  uVar10 = (uint)bVar7;
  bVar5 = (byte)param_3;
  if (*param_1 == 0x2d) {
    do {
      do {
        param_1 = param_1 + 1;
        bVar1 = *param_1;
        uVar3 = (uint)bVar1;
      } while (bVar1 == 0x30);
      uVar12 = (uint)bVar1;
    } while (param_4 == bVar1);
    if (bVar7 != 0x2d) {
      if (param_3 == bVar1) {
        do {
          param_1 = param_1 + 1;
          bVar1 = *param_1;
        } while (bVar1 == 0x30);
      }
      if (bVar1 - 0x30 < 10) {
        return 0xffffffff;
      }
      while (((char)uVar10 == '0' || (param_4 == uVar10))) {
        param_2 = param_2 + 1;
        uVar10 = (uint)*param_2;
      }
      if (param_3 == uVar10) {
        do {
          param_2 = param_2 + 1;
        } while (*param_2 == 0x30);
        uVar10 = (uint)*param_2;
      }
      return -(uint)(uVar10 - 0x30 < 10);
    }
    do {
      do {
        param_2 = param_2 + 1;
        bVar7 = *param_2;
      } while (bVar7 == 0x30);
      uVar2 = (uint)bVar7;
    } while (param_4 == bVar7);
    do {
      pbVar8 = param_2;
      if (((char)uVar3 != (char)uVar2) || (9 < uVar2 - 0x30)) goto LAB_00410978;
      do {
        param_1 = param_1 + 1;
        uVar12 = (uint)*param_1;
        uVar3 = (uint)*param_1;
      } while (param_4 == uVar3);
      do {
        uVar2 = (uint)pbVar8[1];
        param_2 = pbVar8 + 1;
        if (param_4 != uVar2) break;
        pbVar8 = pbVar8 + 2;
        uVar2 = (uint)*pbVar8;
        param_2 = pbVar8;
      } while (param_4 == uVar2);
    } while( true );
  }
  if (bVar7 != 0x2d) {
    while (((char)uVar3 == '0' || (param_4 == uVar3))) {
      param_1 = param_1 + 1;
      uVar3 = (uint)*param_1;
    }
    if (bVar7 != 0x30) goto LAB_0041078e;
    do {
      do {
        param_2 = param_2 + 1;
        uVar10 = (uint)*param_2;
      } while (*param_2 == 0x30);
LAB_0041078e:
    } while (param_4 == uVar10);
    do {
      pbVar8 = param_2;
      if (((char)uVar3 != (char)uVar10) || (9 < uVar10 - 0x30)) goto LAB_004108f0;
      do {
        param_1 = param_1 + 1;
        uVar3 = (uint)*param_1;
      } while (param_4 == uVar3);
      do {
        uVar10 = (uint)pbVar8[1];
        param_2 = pbVar8 + 1;
        if (param_4 != uVar10) break;
        pbVar8 = pbVar8 + 2;
        uVar10 = (uint)*pbVar8;
        param_2 = pbVar8;
      } while (param_4 == uVar10);
    } while( true );
  }
  do {
    do {
      param_2 = param_2 + 1;
      bVar7 = *param_2;
      uVar10 = (uint)bVar7;
    } while (bVar7 == 0x30);
  } while (param_4 == bVar7);
  if (param_3 == bVar7) {
    do {
      uVar10 = (uint)param_2[1];
      if (param_2[1] != 0x30) break;
      param_2 = param_2 + 2;
      uVar10 = (uint)*param_2;
    } while (*param_2 == 0x30);
  }
  if (uVar10 - 0x30 < 10) {
    return 1;
  }
  while (((char)uVar3 == '0' || (param_4 == uVar3))) {
    param_1 = param_1 + 1;
    uVar3 = (uint)*param_1;
  }
  if (param_3 == uVar3) {
    do {
      param_1 = param_1 + 1;
    } while (*param_1 == 0x30);
    uVar3 = (uint)*param_1;
  }
  goto LAB_004108be;
LAB_00410978:
  if ((param_3 == uVar12) && (9 < uVar2 - 0x30)) {
LAB_00410abd:
    if (bVar5 == *pbVar8) {
      if (bVar5 == *param_1) {
        do {
          pbVar8 = pbVar8 + 1;
          param_1 = param_1 + 1;
          bVar7 = *pbVar8;
          bVar5 = *param_1;
          uVar10 = (int)(char)bVar7 - 0x30;
          if (bVar7 != bVar5) {
            uVar3 = (int)(char)bVar5 - 0x30;
            if (uVar10 < 10) {
              if (9 < uVar3) goto LAB_00410bb4;
              return (int)(char)bVar7 - (int)(char)bVar5;
            }
            if (uVar3 < 10) goto LAB_00410adc;
            return 0;
          }
        } while (uVar10 < 10);
        return 0;
      }
      do {
        pbVar8 = pbVar8 + 1;
LAB_00410bb4:
        uVar3 = (uint)(char)*pbVar8;
      } while (*pbVar8 == 0x30);
LAB_004108be:
      return (uint)(uVar3 - 0x30 < 10);
    }
    if (bVar5 != *param_1) {
      return 0;
    }
    do {
      param_1 = param_1 + 1;
LAB_00410adc:
      bVar7 = *param_1;
    } while (bVar7 == 0x30);
    goto LAB_00410a5f;
  }
  if (param_3 == uVar2) {
    if (9 < uVar12 - 0x30) goto LAB_00410abd;
    uVar10 = param_3 - 0x30;
    uVar2 = param_3 - uVar12;
LAB_004109a2:
    uVar11 = 0;
    do {
      do {
        param_1 = param_1 + 1;
      } while (param_4 == *param_1);
      uVar11 = uVar11 + 1;
    } while (*param_1 - 0x30 < 10);
    if (9 < uVar10) {
      return -(uint)(uVar11 != 0);
    }
  }
  else {
    uVar10 = uVar2 - 0x30;
    uVar2 = uVar2 - uVar12;
    if (uVar12 - 0x30 < 10) goto LAB_004109a2;
    uVar11 = 0;
    if (9 < uVar10) {
      return 0;
    }
  }
  uVar9 = 0;
  do {
    do {
      pbVar8 = pbVar8 + 1;
    } while (param_4 == *pbVar8);
    uVar9 = uVar9 + 1;
  } while (*pbVar8 - 0x30 < 10);
  if (uVar9 != uVar11) {
    return (-(uint)(uVar11 < uVar9) & 2) - 1;
  }
  goto LAB_004109f0;
LAB_004108f0:
  if ((param_3 == uVar3) && (9 < uVar10 - 0x30)) {
LAB_00410a2e:
    if (bVar5 == *param_1) {
      iVar6 = (int)(char)param_1[1];
      pbVar4 = pbVar8;
      if (bVar5 != *pbVar8) {
        pbVar8 = param_1 + 1;
LAB_00410b37:
        while ((char)iVar6 == '0') {
          pbVar8 = pbVar8 + 1;
          iVar6 = (int)(char)*pbVar8;
        }
        return (uint)(iVar6 - 0x30U < 10);
      }
      while( true ) {
        pbVar4 = pbVar4 + 1;
        bVar7 = *pbVar4;
        bVar5 = (byte)iVar6;
        pbVar8 = param_1 + 1;
        uVar10 = (int)(char)bVar5 - 0x30;
        if (bVar7 != bVar5) break;
        if (9 < uVar10) {
          return 0;
        }
        iVar6 = (int)(char)param_1[2];
        param_1 = pbVar8;
      }
      uVar3 = (int)(char)bVar7 - 0x30;
      if (uVar10 < 10) {
        if (uVar3 < 10) {
          return (int)(char)bVar5 - (int)(char)bVar7;
        }
        goto LAB_00410b37;
      }
      if (9 < uVar3) {
        return 0;
      }
    }
    else {
      if (bVar5 != *pbVar8) {
        return 0;
      }
      pbVar4 = pbVar8 + 1;
      bVar7 = pbVar8[1];
    }
    while (bVar7 == 0x30) {
      pbVar4 = pbVar4 + 1;
      bVar7 = *pbVar4;
    }
LAB_00410a5f:
    return -(uint)((int)(char)bVar7 - 0x30U < 10);
  }
  if (param_3 == uVar10) {
    if (9 < uVar3 - 0x30) goto LAB_00410a2e;
    uVar2 = uVar3 - param_3;
    uVar10 = param_3 - 0x30;
LAB_00410916:
    uVar11 = 0;
    do {
      do {
        param_1 = param_1 + 1;
      } while (param_4 == *param_1);
      uVar11 = uVar11 + 1;
    } while (*param_1 - 0x30 < 10);
    if (9 < uVar10) {
      return (uint)(uVar11 != 0);
    }
  }
  else {
    uVar2 = uVar3 - uVar10;
    uVar10 = uVar10 - 0x30;
    if (uVar3 - 0x30 < 10) goto LAB_00410916;
    uVar11 = 0;
    if (9 < uVar10) {
      return 0;
    }
  }
  uVar9 = 0;
  do {
    do {
      pbVar8 = pbVar8 + 1;
    } while (param_4 == *pbVar8);
    uVar9 = uVar9 + 1;
  } while (*pbVar8 - 0x30 < 10);
  if (uVar9 != uVar11) {
    return -(uint)(uVar11 < uVar9) | 1;
  }
LAB_004109f0:
  if (uVar9 == 0) {
    uVar2 = 0;
  }
  return uVar2;
}


uint FUN_00410c20(uint param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  if (2 < param_1) {
    return param_1;
  }
  uVar2 = FUN_00413ea0();
  piVar3 = __errno_location();
  iVar1 = *piVar3;
  close(param_1);
  *piVar3 = iVar1;
  return uVar2;
}


undefined8
FUN_00410c70(FILE *param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5,
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
  uVar1 = dcgettext(0,&DAT_004179da,5);
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
    goto LAB_00410eec;
  case 5:
    uVar1 = param_5[3];
    uVar4 = param_5[2];
    uVar5 = param_5[1];
    uVar6 = *param_5;
    uVar7 = dcgettext(0,"Written by %s, %s, %s,\n%s, and %s.\n",5);
LAB_00410eec:
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
    goto LAB_00410f89;
  case 7:
    uVar1 = param_5[2];
    uVar4 = param_5[5];
    uVar5 = param_5[4];
    uVar6 = param_5[3];
    local_58 = param_5[1];
    uVar7 = *param_5;
    uVar3 = dcgettext(0,"Written by %s, %s, %s,\n%s, %s, %s, and %s.\n",5);
LAB_00410f89:
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
    goto LAB_00410d6a;
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
LAB_00410d6a:
  uVar1 = __fprintf_chk(param_1,1,uVar3,uVar7,local_50,local_58,uVar6,uVar5,uVar4,uVar1,local_48);
  return uVar1;
}


void FUN_00411050(void)

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
  FUN_00410c70();
  return;
}


void FUN_00411070(void)

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
  FUN_00410c70();
  return;
}


void FUN_004110d0(void)

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
  FUN_00410c70();
  return;
}


void FUN_00411190(void)

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


void FUN_00411210(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00411460();
  }
  return;
}


void FUN_00411230(ulong param_1,ulong param_2)

{
  if ((-1 < SUB168(ZEXT816(param_1) * ZEXT816(param_2),0)) &&
     (SUB168(ZEXT816(param_1) * ZEXT816(param_2) >> 0x40,0) == 0)) {
    FUN_00411210();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00411460();
}


void thunk_FUN_00411210(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00411460();
  }
  return;
}


void * FUN_00411270(void *param_1,size_t param_2)

{
  void *pvVar1;
  
  if ((param_2 == 0) && (param_1 != (void *)0x0)) {
    free(param_1);
    return (void *)0x0;
  }
  pvVar1 = realloc(param_1,param_2);
  if ((pvVar1 == (void *)0x0) && (param_2 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00411460();
  }
  return pvVar1;
}


void FUN_004112b0(undefined8 param_1,ulong param_2,ulong param_3)

{
  if ((-1 < SUB168(ZEXT816(param_2) * ZEXT816(param_3),0)) &&
     (SUB168(ZEXT816(param_2) * ZEXT816(param_3) >> 0x40,0) == 0)) {
    FUN_00411270();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00411460();
}


void FUN_004112e0(long param_1,ulong *param_2,ulong param_3)

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
    if ((SUB168(ZEXT816(uVar2) * ZEXT816(param_3),0) < 0) || (uVar3 != 0)) goto LAB_0041133b;
  }
  else {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x5555555555555554);
    uVar3 = SUB168(auVar1 % ZEXT816(param_3),0);
    if (SUB168(auVar1 / ZEXT816(param_3),0) <= uVar2) {
LAB_0041133b:
                    /* WARNING: Subroutine does not return */
      FUN_00411460(param_1,param_2,uVar3);
    }
    uVar2 = (uVar2 >> 1) + 1 + uVar2;
  }
  *param_2 = uVar2;
  FUN_00411270(param_1,uVar2 * param_3);
  return;
}


void FUN_00411370(long param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (param_1 == 0) {
    if (uVar1 == 0) {
      *param_2 = 0x80;
      FUN_00411270(0,0x80);
      return;
    }
    if ((long)uVar1 < 0) goto LAB_004113ba;
  }
  else {
    if (0x5555555555555553 < uVar1) {
LAB_004113ba:
                    /* WARNING: Subroutine does not return */
      FUN_00411460();
    }
    uVar1 = (uVar1 >> 1) + 1 + uVar1;
  }
  *param_2 = uVar1;
  FUN_00411270(param_1,uVar1);
  return;
}


void FUN_004113c0(size_t param_1)

{
  void *__s;
  
  __s = (void *)FUN_00411210();
  memset(__s,0,param_1);
  return;
}


void FUN_004113e0(size_t param_1,ulong param_2)

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
  FUN_00411460();
}


void FUN_00411410(void *param_1,size_t param_2)

{
  void *__dest;
  
  __dest = (void *)FUN_00411210(param_2);
  memcpy(__dest,param_1,param_2);
  return;
}


void FUN_00411440(char *param_1)

{
  void *__dest;
  size_t sVar1;
  
  sVar1 = strlen(param_1);
  __dest = (void *)FUN_00411210(sVar1 + 1);
  memcpy(__dest,param_1,sVar1 + 1);
  return;
}


void FUN_00411460(void)

{
  undefined8 uVar1;
  
  uVar1 = dcgettext(0,"memory exhausted",5);
                    /* WARNING: Subroutine does not return */
  error(DAT_0061c518,0,&DAT_00416abc,uVar1);
}


void FUN_004114a0(undefined4 param_1)

{
  undefined8 uVar1;
  
  uVar1 = dcgettext(0,"string comparison failed",5);
                    /* WARNING: Subroutine does not return */
  error(0,param_1,uVar1);
}


undefined4 FUN_00411560(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  int *piVar2;
  
  uVar1 = FUN_00413d80();
  piVar2 = __errno_location();
  if (*piVar2 == 0) {
    return uVar1;
  }
  FUN_004114a0(*piVar2,param_1,param_2,param_3,param_4);
  return uVar1;
}


undefined4 FUN_004115c0(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined4 uVar1;
  int *piVar2;
  
  uVar1 = FUN_00413e30();
  piVar2 = __errno_location();
  if (*piVar2 == 0) {
    return uVar1;
  }
  FUN_004114a0(*piVar2,param_1,param_2 + -1,param_3,param_4 + -1);
  return uVar1;
}


/* WARNING: Could not reconcile some variable overlaps */

undefined8 FUN_00411620(void)

{
  uint *puVar1;
  undefined8 uVar2;
  undefined local_18 [16];
  
  local_18 = FUN_00413580();
  puVar1 = (uint *)__errno_location();
  do {
    *puVar1 = 0;
    uVar2 = FUN_00413140(local_18,0);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
  } while ((*puVar1 & 0xfffffffb) == 0);
  return 0xffffffff;
}


ulong FUN_00411680(byte *param_1,byte **param_2,uint param_3,ulong *param_4,char *param_5)

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
    if ((param_5 == (char *)0x0) || (bVar12 = *pbVar5, bVar12 == 0)) goto LAB_00411720;
    pcVar7 = strchr(param_5,(int)(char)bVar12);
    if (pcVar7 == (char *)0x0) goto switchD_004117fc_caseD_1;
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
        goto LAB_004117ea;
      }
      if (bVar1 != 0x42) {
                    /* WARNING: Could not recover jumptable at 0x004117d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar6 = (*(code *)(&PTR_LAB_00417e10)[bVar8])();
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
LAB_004117ea:
  iVar10 = (int)uVar11;
  switch(bVar12 - 0x42 & 0xff) {
  case 0:
    if (uVar6 >> 0x36 == 0) {
      uVar6 = uVar6 << 10;
      break;
    }
    goto LAB_00411857;
  default:
switchD_004117fc_caseD_1:
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
    goto LAB_004118e4;
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
    goto joined_r0x0041181c;
  case 0xb:
  case 0x2b:
    auVar2 = ZEXT816(uVar6) * ZEXT816((ulong)(long)iVar10);
    if (SUB168(auVar2 >> 0x40,0) != 0) goto LAB_00411857;
    auVar2 = (auVar2 & (undefined  [16])0xffffffffffffffff) * ZEXT816((ulong)(long)iVar10);
joined_r0x0041181c:
    uVar6 = SUB168(auVar2,0);
    if (SUB168(auVar2 >> 0x40,0) != 0) {
LAB_00411857:
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
    goto LAB_004118e4;
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
    goto LAB_004118e4;
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
    goto LAB_004118e4;
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
LAB_004118e4:
    uVar14 = (ulong)(uVar13 | uVar9);
    break;
  case 0x20:
    if (uVar6 >> 0x37 != 0) goto LAB_00411857;
    uVar6 = uVar6 << 9;
    break;
  case 0x21:
    break;
  case 0x35:
    if ((long)uVar6 < 0) goto LAB_00411857;
    uVar6 = uVar6 * 2;
  }
  *param_2 = pbVar5 + iVar15;
  if (pbVar5[iVar15] != 0) {
    uVar14 = (ulong)((uint)uVar14 | 2);
  }
LAB_00411720:
  *param_4 = uVar6;
  return uVar14;
}


void FUN_00411ab0(int param_1,int param_2,undefined param_3,long param_4,undefined8 param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined local_2a;
  undefined local_29;
  
  uVar1 = DAT_0061c518;
  if (param_1 - 1U < 4) {
    if (param_2 < 0) {
      puVar4 = &local_2a;
      puVar3 = &DAT_00418149 + -(long)param_2;
      local_29 = 0;
      local_2a = param_3;
    }
    else {
      puVar3 = &DAT_00418149;
      puVar4 = *(undefined **)(param_4 + (long)param_2 * 0x20);
    }
    uVar2 = dcgettext(0,(&PTR_s__s_s_argument___s__too_large_004181c0)[param_1 - 1U],5);
                    /* WARNING: Subroutine does not return */
    error(uVar1,0,uVar2,puVar3,puVar4,param_5);
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


ulong FUN_00411b40(byte *param_1,byte **param_2,uint param_3,ulong *param_4,char *param_5)

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
    if ((param_5 == (char *)0x0) || (bVar12 = *pbVar5, bVar12 == 0)) goto LAB_00411be2;
    pcVar7 = strchr(param_5,(int)(char)bVar12);
    if (pcVar7 == (char *)0x0) goto switchD_00411ccc_caseD_1;
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
        goto LAB_00411cba;
      }
      if (bVar1 != 0x42) {
                    /* WARNING: Could not recover jumptable at 0x00411ca1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar6 = (*(code *)(&PTR_LAB_004181e0)[bVar8])();
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
LAB_00411cba:
  iVar10 = (int)uVar11;
  switch(bVar12 - 0x42 & 0xff) {
  case 0:
    if (uVar6 >> 0x36 == 0) {
      uVar6 = uVar6 << 10;
      break;
    }
    goto LAB_00411d27;
  default:
switchD_00411ccc_caseD_1:
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
    goto LAB_00411db4;
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
    goto joined_r0x00411cec;
  case 0xb:
  case 0x2b:
    auVar2 = ZEXT816(uVar6) * ZEXT816((ulong)(long)iVar10);
    if (SUB168(auVar2 >> 0x40,0) != 0) goto LAB_00411d27;
    auVar2 = (auVar2 & (undefined  [16])0xffffffffffffffff) * ZEXT816((ulong)(long)iVar10);
joined_r0x00411cec:
    uVar6 = SUB168(auVar2,0);
    if (SUB168(auVar2 >> 0x40,0) != 0) {
LAB_00411d27:
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
    goto LAB_00411db4;
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
    goto LAB_00411db4;
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
    goto LAB_00411db4;
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
LAB_00411db4:
    uVar14 = (ulong)(uVar13 | uVar9);
    break;
  case 0x20:
    if (uVar6 >> 0x37 != 0) goto LAB_00411d27;
    uVar6 = uVar6 << 9;
    break;
  case 0x21:
    break;
  case 0x35:
    if ((long)uVar6 < 0) goto LAB_00411d27;
    uVar6 = uVar6 * 2;
  }
  *param_2 = pbVar5 + iVar15;
  if (pbVar5[iVar15] != 0) {
    uVar14 = (ulong)((uint)uVar14 | 2);
  }
LAB_00411be2:
  *param_4 = uVar6;
  return uVar14;
}


int FUN_00411f80(FILE *param_1)

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
      if (_Var4 == -1) goto LAB_00411fe7;
    }
    iVar1 = FUN_00412140(param_1);
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
LAB_00411fe7:
  iVar1 = fclose(param_1);
  return iVar1;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_00412000(ulong param_1,int param_2,ulong param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  
  if (param_2 != 0x406) {
    iVar1 = fcntl((int)param_1,param_2,param_3);
    return iVar1;
  }
  if (DAT_0061cd18 < 0) {
    iVar1 = FUN_00412000(param_1,0,param_3 & 0xffffffff);
    if (iVar1 < 0) {
      return iVar1;
    }
    if (DAT_0061cd18 != -1) {
      return iVar1;
    }
  }
  else {
    iVar1 = fcntl((int)param_1,0x406);
    if ((-1 < iVar1) || (piVar4 = __errno_location(), *piVar4 != 0x16)) {
      DAT_0061cd18 = 1;
      return iVar1;
    }
    iVar1 = FUN_00412000(param_1 & 0xffffffff,0,param_3 & 0xffffffff);
    if (iVar1 < 0) {
      return iVar1;
    }
    DAT_0061cd18 = -1;
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


void FUN_00412140(FILE *param_1)

{
  int iVar1;
  
  if (param_1 != (FILE *)0x0) {
    iVar1 = __freading();
    if ((iVar1 != 0) && ((param_1->_flags & 0x100U) != 0)) {
      FUN_00412180(param_1,0,1);
      fflush(param_1);
      return;
    }
  }
  fflush(param_1);
  return;
}


ulong FUN_00412180(FILE *param_1,__off_t param_2,int param_3)

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


void FUN_004121e0(long param_1,int *param_2)

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
      if (iVar3 <= iVar8) goto LAB_0041225c;
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
      if (iVar9 <= iVar3) goto LAB_0041225c;
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
LAB_0041225c:
  param_2[0xc] = iVar2;
  param_2[0xb] = iVar1 + (iVar2 - iVar3);
  return;
}


int FUN_004122c0(int param_1,undefined8 *param_2,char *param_3,char **param_4,undefined4 *param_5,
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
      if ((iVar5 == 0) && (sVar7 = strlen(__s1_00), sVar7 == sVar15)) goto LAB_004124e0;
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
            if (local_70 == (char *)0x0) goto LAB_00412420;
          }
          else if (local_70 == (char *)0x0) {
            local_70 = (char *)calloc((long)iVar5,1);
            if (local_70 == (char *)0x0) {
              bVar3 = true;
              goto LAB_00412420;
            }
            bVar4 = true;
            local_70[(int)local_44] = '\x01';
          }
          local_70[lVar16] = '\x01';
        }
      }
LAB_00412420:
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
LAB_004124e0:
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


uint FUN_004128e0(uint param_1,undefined8 *param_2,char *param_3,long param_4,undefined8 param_5,
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
LAB_0041292a:
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
          goto LAB_00412a2d;
        }
        pbVar8 = *(byte **)(param_7 + 8);
      }
      param_7[10] = 0;
    }
LAB_00412a2d:
    param_7[6] = 1;
    cVar2 = *param_3;
LAB_00412a38:
    if (cVar2 == ':') {
      uVar3 = 0;
    }
    if (pbVar8 == (byte *)0x0) goto LAB_004129a8;
LAB_00412a4c:
    if (*pbVar8 == 0) goto LAB_004129a8;
  }
  else {
    if (param_7[6] == 0) goto LAB_0041292a;
    cVar2 = *param_3;
    pbVar8 = *(byte **)(param_7 + 8);
    if ((cVar2 - 0x2bU & 0xfd) != 0) goto LAB_00412a38;
    pcVar4 = param_3 + 1;
    param_3 = param_3 + 1;
    if (*pcVar4 == ':') {
      uVar3 = 0;
    }
    if (pbVar8 != (byte *)0x0) goto LAB_00412a4c;
LAB_004129a8:
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
        FUN_004121e0(param_2,param_7);
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
LAB_00412b16:
      if (uVar11 != param_1) {
        *param_7 = uVar11;
      }
      return 0xffffffff;
    }
    lVar6 = 3;
    pbVar8 = (byte *)param_2[(int)uVar11];
    pbVar9 = pbVar8;
    pbVar10 = &DAT_00418149;
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
          FUN_004121e0(param_2,param_7);
          uVar11 = param_7[0xb];
        }
      }
      param_7[0xc] = param_1;
      *param_7 = param_1;
      goto LAB_00412b16;
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
        puVar15 = &DAT_00418149;
        goto LAB_00412c75;
      }
      if ((int)param_6 != 0) {
        if (pbVar8[2] == 0) {
          pcVar4 = strchr(param_3,(int)(char)bVar14);
          param_6 = param_6 & 0xffffffff;
          if (pcVar4 != (char *)0x0) goto LAB_00412c20;
        }
        *(byte **)(param_7 + 8) = pbVar8 + 1;
        uVar11 = FUN_004122c0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar3,
                              &DAT_0041814a);
        if (uVar11 != 0xffffffff) {
          return uVar11;
        }
        pbVar8 = (byte *)param_2[(int)*param_7];
      }
    }
LAB_00412c20:
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
  puVar15 = &DAT_00418635;
LAB_00412c75:
  uVar3 = FUN_004122c0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar3,puVar15);
  return uVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00412eb0(void)

{
  DAT_0061cd20 = DAT_0061c578._4_4_;
  _DAT_0061cd24 = (undefined4)DAT_0061c578;
  FUN_004128e0();
  DAT_0061c578._4_4_ = DAT_0061cd20;
  DAT_0061cd60 = DAT_0061cd30;
  _DAT_0061c574 = DAT_0061cd28;
  return;
}


void FUN_00412f10(void)

{
  FUN_00412eb0();
  return;
}


void FUN_00412f30(void)

{
  FUN_00412eb0();
  return;
}


void FUN_00412f50(void)

{
  FUN_004128e0();
  return;
}


void FUN_00412f70(void)

{
  FUN_00412eb0();
  return;
}


void FUN_00412f90(void)

{
  FUN_004128e0();
  return;
}


size_t FUN_00412fb0(wchar_t *param_1,byte *param_2,size_t param_3,mbstate_t *param_4)

{
  char cVar1;
  size_t sVar2;
  wchar_t local_1c;
  
  if (param_2 == (byte *)0x0) {
    param_3 = 1;
    param_2 = (byte *)0x416571;
  }
  else {
    if (param_3 == 0) {
      return 0xfffffffffffffffe;
    }
    if (param_1 != (wchar_t *)0x0) goto LAB_00412fd4;
  }
  param_1 = &local_1c;
LAB_00412fd4:
  sVar2 = mbrtowc(param_1,(char *)param_2,param_3,param_4);
  if ((0xfffffffffffffffd < sVar2) && (cVar1 = FUN_0040bd10(0), cVar1 == '\0')) {
    sVar2 = 1;
    *param_1 = (uint)*param_2;
  }
  return sVar2;
}


ulong * FUN_00413030(ulong *param_1,char param_2,ulong param_3)

{
  char cVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  
  if (param_3 == 0) {
    return (ulong *)0x0;
  }
  if (((ulong)param_1 & 7) == 0) {
LAB_00413070:
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
      if (((ulong)param_1 & 7) == 0) goto LAB_00413070;
      cVar1 = *(char *)param_1;
    }
  }
  return param_1;
}


int FUN_00413140(long *param_1,timespec *param_2)

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


void FUN_004131f0(void)

{
  undefined8 uVar1;
  
  uVar1 = dcgettext(0,"memory exhausted",5);
  __fprintf_chk(stderr,1,"%s\n",uVar1);
                    /* WARNING: Subroutine does not return */
  exit(DAT_0061c518);
}


void FUN_00413230(long param_1,undefined8 param_2)

{
  if ((*(byte *)(param_1 + 0x50) & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0041323e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x48));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00413243. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x38))(param_2);
  return;
}


void FUN_00413250(long param_1,undefined8 param_2)

{
  if ((*(byte *)(param_1 + 0x50) & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0041325e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x40))(*(undefined8 *)(param_1 + 0x48));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00413263. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x40))(param_2);
  return;
}


undefined8 FUN_00413270(long *param_1,long param_2,long param_3,long param_4,long param_5)

{
  long *plVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  
  if (param_3 == 0) {
    lVar5 = 0xf;
    param_3 = 0x10;
  }
  else {
    lVar5 = param_3 + -1;
  }
  param_1[6] = lVar5;
  if (param_2 == 0) {
    param_2 = 0xfe0;
  }
  *param_1 = param_2;
  plVar4 = param_1;
  plVar1 = (long *)FUN_00413230();
  param_1[1] = (long)plVar1;
  if (plVar1 != (long *)0x0) {
    uVar3 = -param_3 & (long)plVar1 + lVar5 + 0x10;
    lVar5 = *param_1;
    param_1[2] = uVar3;
    param_1[3] = uVar3;
    *plVar1 = lVar5 + (long)plVar1;
    param_1[4] = lVar5 + (long)plVar1;
    plVar1[1] = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xf9;
    return 1;
  }
  (*(code *)obstack_alloc_failed_handler)();
  *(byte *)(plVar4 + 10) = *(byte *)(plVar4 + 10) & 0xfe;
  plVar4[7] = param_4;
  plVar4[8] = param_5;
  uVar2 = FUN_00413270();
  return uVar2;
}


void _obstack_begin(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5)

{
  *(byte *)(param_1 + 0x50) = *(byte *)(param_1 + 0x50) & 0xfe;
  *(undefined8 *)(param_1 + 0x38) = param_4;
  *(undefined8 *)(param_1 + 0x40) = param_5;
  FUN_00413270();
  return;
}


void _obstack_begin_1(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6)

{
  *(byte *)(param_1 + 0x50) = *(byte *)(param_1 + 0x50) | 1;
  *(undefined8 *)(param_1 + 0x38) = param_4;
  *(undefined8 *)(param_1 + 0x40) = param_5;
  *(undefined8 *)(param_1 + 0x48) = param_6;
  FUN_00413270();
  return;
}


ulong * _obstack_newchunk(ulong **param_1,ulong param_2)

{
  ulong *puVar1;
  ulong **ppuVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong **ppuVar5;
  ulong __n;
  
  __n = (long)param_1[3] - (long)param_1[2];
  puVar1 = param_1[1];
  puVar4 = (ulong *)(param_2 + __n + (long)param_1[6]);
  puVar3 = (ulong *)((long)puVar4 + (__n >> 3) + 100);
  if (puVar4 <= *param_1) {
    puVar4 = *param_1;
  }
  if (puVar3 <= puVar4) {
    puVar3 = puVar4;
  }
  ppuVar5 = param_1;
  if ((CARRY8(param_2,__n) == false) && (CARRY8(param_2 + __n,(ulong)param_1[6]) == false)) {
    puVar4 = puVar3;
    ppuVar2 = (ulong **)FUN_00413230();
    if (ppuVar2 != (ulong **)0x0) {
      param_1[1] = (ulong *)ppuVar2;
      ppuVar2[1] = puVar1;
      param_1[4] = (ulong *)((long)ppuVar2 + (long)puVar3);
      *ppuVar2 = (ulong *)((long)ppuVar2 + (long)puVar3);
      puVar4 = (ulong *)((long)(ppuVar2 + 2) + (long)param_1[6] & ~(ulong)param_1[6]);
      puVar3 = (ulong *)memcpy(puVar4,param_1[2],__n);
      if ((*(byte *)(param_1 + 10) & 2) == 0) {
        puVar3 = (ulong *)(~(ulong)param_1[6] & (long)(puVar1 + 2) + (long)param_1[6]);
        if (param_1[2] == puVar3) {
          ppuVar2[1] = (ulong *)puVar1[1];
          puVar3 = (ulong *)FUN_00413250(param_1,puVar1);
        }
      }
      param_1[2] = puVar4;
      param_1[3] = (ulong *)(__n + (long)puVar4);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfd;
      return puVar3;
    }
  }
  (*(code *)obstack_alloc_failed_handler)();
  puVar3 = ppuVar5[1];
  if (puVar3 != (ulong *)0x0) {
    while ((puVar4 <= puVar3 || ((ulong *)*puVar3 < puVar4))) {
      puVar3 = (ulong *)puVar3[1];
      if (puVar3 == (ulong *)0x0) {
        return (ulong *)0x0;
      }
    }
    return (ulong *)0x1;
  }
  return puVar3;
}


ulong * _obstack_allocated_p(long param_1,ulong *param_2)

{
  ulong *puVar1;
  
  puVar1 = *(ulong **)(param_1 + 8);
  if (puVar1 == (ulong *)0x0) {
    return puVar1;
  }
  while ((param_2 <= puVar1 || ((ulong *)*puVar1 < param_2))) {
    puVar1 = (ulong *)puVar1[1];
    if (puVar1 == (ulong *)0x0) {
      return (ulong *)0x0;
    }
  }
  return (ulong *)0x1;
}


void _obstack_free(long param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  
  puVar1 = *(ulong **)(param_1 + 8);
  while( true ) {
    if (puVar1 == (ulong *)0x0) {
      if (param_2 == (ulong *)0x0) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if ((puVar1 < param_2) && (puVar2 = (ulong *)*puVar1, param_2 <= puVar2)) break;
    puVar1 = (ulong *)puVar1[1];
    FUN_00413250(param_1);
    *(byte *)(param_1 + 0x50) = *(byte *)(param_1 + 0x50) | 2;
  }
  *(ulong **)(param_1 + 0x18) = param_2;
  *(ulong **)(param_1 + 0x10) = param_2;
  *(ulong **)(param_1 + 0x20) = puVar2;
  *(ulong **)(param_1 + 8) = puVar1;
  return;
}


long _obstack_memory_used(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 8);
  lVar1 = 0;
  if (plVar3 == (long *)0x0) {
    return 0;
  }
  do {
    lVar2 = *plVar3 - (long)plVar3;
    plVar3 = (long *)plVar3[1];
    lVar1 = lVar1 + lVar2;
  } while (plVar3 != (long *)0x0);
  return lVar1;
}


ulong FUN_00413520(uint *param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  
  lVar2 = __fpending();
  uVar1 = *param_1;
  uVar3 = FUN_00411f80(param_1);
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

undefined  [16] FUN_00413580(double param_1)

{
  long lVar1;
  long lVar2;
  double dVar3;
  
  if (param_1 <= _DAT_00418640) {
    return ZEXT816(0x8000000000000000);
  }
  if (DAT_00416a48 <= param_1) {
    return CONCAT88(999999999,0x7fffffffffffffff);
  }
  dVar3 = (param_1 - (double)(long)param_1) * _DAT_00418648;
  lVar2 = (long)dVar3;
  lVar2 = (ulong)((double)lVar2 < dVar3) + lVar2;
  lVar1 = lVar2 / 1000000000 + (long)param_1;
  lVar2 = lVar2 % 1000000000;
  if (-1 < lVar2) {
    return CONCAT88(lVar2,lVar1);
  }
  return CONCAT88(lVar2 + 1000000000,lVar1 + -1);
}


uint FUN_00413640(uint param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  if (2 < param_1) {
    return param_1;
  }
  uVar2 = FUN_00413690();
  piVar3 = __errno_location();
  iVar1 = *piVar3;
  close(param_1);
  *piVar3 = iVar1;
  return uVar2;
}


void FUN_00413690(undefined8 param_1,uint param_2)

{
  param_2 = param_2 & 0x80000;
  if (param_2 != 0) {
    param_2 = 0x406;
  }
  FUN_00412000(param_1,param_2,3);
  return;
}


FILE * FUN_004136b0(char *param_1,char *param_2)

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
    iVar2 = FUN_00413ea0(uVar1);
    if (iVar2 < 0) {
      piVar5 = __errno_location();
      pFVar4 = (FILE *)0x0;
      iVar2 = *piVar5;
      FUN_00411f80(__stream);
      *piVar5 = iVar2;
    }
    else {
      iVar3 = FUN_00411f80(__stream);
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


/* WARNING: Could not reconcile some variable overlaps */

char * FUN_00413750(void)

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
  if (DAT_0061cd58 != (char *)0x0) goto LAB_0041378a;
  pcVar7 = getenv("CHARSETALIASDIR");
  if ((pcVar7 == (char *)0x0) || (*pcVar7 == '\0')) {
    sVar6 = 0x73;
    sVar5 = 0x65;
    __n = 100;
    pcVar7 = 
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib"
    ;
LAB_00413875:
    __file = (char *)malloc(sVar6);
    if (__file != (char *)0x0) {
      memcpy(__file,pcVar7,__n);
      __file[__n] = '/';
      goto LAB_00413896;
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
        goto LAB_00413875;
      }
      sVar6 = __n + 0xe;
    }
    __file = (char *)malloc(sVar6);
    if (__file != (char *)0x0) {
      memcpy(__file,pcVar7,__n);
      sVar5 = __n;
LAB_00413896:
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
LAB_00413930:
          pbVar8 = (byte *)__stream->_IO_read_ptr;
          if (__stream->_IO_read_end <= pbVar8) goto LAB_00413abc;
          do {
            __stream->_IO_read_ptr = (char *)(pbVar8 + 1);
            uVar4 = (uint)*pbVar8;
            __ptr = pcVar7;
            while( true ) {
              pcVar7 = __ptr;
              if ((uVar4 - 9 < 2) || (uVar4 == 0x20)) goto LAB_00413930;
              if (uVar4 == 0x23) goto LAB_00413b21;
              ungetc(uVar4,__stream);
              iVar2 = fscanf(__stream,"%50s %50s",&local_b8,&local_78);
              puVar13 = &local_b8;
              if (iVar2 < 2) goto LAB_00413acf;
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
                FUN_00411f80(__stream);
                goto LAB_004138d4;
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
LAB_00413abc:
              uVar4 = __uflow(__stream);
              __ptr = pcVar7;
              if (uVar4 == 0xffffffff) goto LAB_00413acf;
            }
          } while( true );
        }
        close(iVar2);
      }
      goto LAB_004138ce;
    }
  }
  DAT_0061cd58 = "";
LAB_0041378a:
  cVar1 = *DAT_0061cd58;
  pcVar7 = DAT_0061cd58;
  do {
    if (cVar1 == '\0') {
LAB_004137e4:
      if (*__s1 == '\0') {
        __s1 = "ASCII";
      }
      return __s1;
    }
    iVar2 = strcmp(__s1,pcVar7);
    if ((iVar2 == 0) || ((cVar1 == '*' && (pcVar7[1] == '\0')))) {
      sVar6 = strlen(pcVar7);
      __s1 = pcVar7 + sVar6 + 1;
      goto LAB_004137e4;
    }
    sVar6 = strlen(pcVar7);
    sVar5 = strlen(pcVar7 + sVar6 + 1);
    pcVar7 = pcVar7 + sVar6 + 1 + sVar5 + 1;
    cVar1 = *pcVar7;
  } while( true );
LAB_00413b21:
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
  if (uVar4 == 0xffffffff) goto LAB_00413acf;
  goto LAB_00413930;
LAB_00413acf:
  FUN_00411f80(__stream);
  if (local_d0 == 0) {
LAB_004138ce:
    pcVar7 = "";
  }
  else {
    pcVar7[local_d0] = '\0';
  }
LAB_004138d4:
  free(__file);
  DAT_0061cd58 = pcVar7;
  goto LAB_0041378a;
}


int FUN_00413cc0(char *param_1,long param_2,char *param_3,long param_4)

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


undefined4 FUN_00413d80(void *param_1,size_t param_2,void *param_3,size_t param_4)

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
  uVar6 = FUN_00413cc0(param_1,param_2 + 1,param_3,param_4 + 1);
  *puVar1 = uVar3;
  *puVar2 = uVar4;
  return uVar6;
}


undefined8 FUN_00413e30(void *param_1,size_t param_2,void *param_3,size_t param_4)

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
  uVar3 = FUN_00413cc0(param_1,param_2,param_3,param_4);
  return uVar3;
}


void FUN_00413ea0(undefined8 param_1)

{
  FUN_00412000(param_1,0,3);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00413ee3) */
/* WARNING: Removing unreachable block (ram,0x00413ee8) */

void FUN_00413eb0(void)

{
  __DT_INIT();
  return;
}


void FUN_00413f10(void)

{
  return;
}


void FUN_00413f20(undefined8 param_1)

{
  __cxa_atexit(param_1,0,DAT_0061c3e8);
  return;
}


undefined8 FUN_00413f38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code **ppcVar1;
  
  for (ppcVar1 = (code **)&DAT_0061be20; *ppcVar1 != (code *)0xffffffffffffffff;
      ppcVar1 = ppcVar1 + -1) {
    (**ppcVar1)();
  }
  return param_3;
}


void __DT_FINI(void)

{
  FUN_004058b1();
  return;
}

