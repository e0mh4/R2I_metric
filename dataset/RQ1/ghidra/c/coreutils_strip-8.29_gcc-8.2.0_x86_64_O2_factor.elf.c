
void FUN_00401a40(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void switchD_00405520::caseD_b(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401a4a(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401a4f(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401a54(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401a59(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void switchD_004079ca::caseD_0(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401a63(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401a68(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


uint FUN_00401a80(int param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  undefined auStack_38 [8];
  void *local_30;
  
  FUN_00404760(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils",
                 "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale"
                );
  textdomain("coreutils");
  if (DAT_00613300 == 0) {
    DAT_00613300 = FUN_00407ee0(0x400);
    DAT_00613308 = DAT_00613300;
  }
  FUN_0040bc60(FUN_004045f0);
  FUN_0040bc60(FUN_004023d0);
  while( true ) {
    iVar2 = FUN_00408f40(param_1,param_2,"",&PTR_s__debug_0040f260,0);
    if (iVar2 == -1) {
      lVar6 = (long)DAT_006132bc;
      if (DAT_006132bc < param_1) {
        uVar7 = 1;
        do {
          cVar1 = FUN_00404170(param_2[lVar6]);
          if (cVar1 == '\0') {
            uVar7 = 0;
          }
          lVar6 = lVar6 + 1;
        } while ((int)lVar6 < param_1);
      }
      else {
        uVar7 = 1;
        FUN_00406f70(auStack_38);
        while( true ) {
          lVar6 = FUN_00406f80(stdin,&DAT_0040be09,3,auStack_38);
          if (lVar6 == -1) break;
          uVar3 = FUN_00404170();
          uVar7 = uVar7 & uVar3;
        }
        free(local_30);
      }
      return uVar7 ^ 1;
    }
    if (iVar2 == -0x82) break;
    if (iVar2 != 0x80) {
      if (iVar2 != -0x83) {
                    /* WARNING: Subroutine does not return */
        FUN_004042e0(1);
      }
      uVar4 = FUN_00405150("Niels Moller",&DAT_0040bdbe);
      uVar5 = FUN_00405150("Torbjorn Granlund",&DAT_0040bdd9);
      FUN_00407da0(stdout,"factor","GNU coreutils",PTR_DAT_00613238,"Paul Rubin",uVar5,uVar4,0);
                    /* WARNING: Subroutine does not return */
      exit(0);
    }
    DAT_00613310 = 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004042e0(0);
}


void FUN_00401c40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_retaddr;
  undefined auStack_8 [8];
  
  (*(code *)PTR___libc_start_main_00612ff0)
            (FUN_00401a80,unaff_retaddr,&stack0x00000008,FUN_0040bbf0,FUN_0040bc50,param_3,auStack_8
            );
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* WARNING: Removing unreachable block (ram,0x00401c78) */
/* WARNING: Removing unreachable block (ram,0x00401c82) */

void FUN_00401c6b(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00401cb9) */

void FUN_00401c8a(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00401cf6) */

void FUN_00401cc1(void)

{
  if (DAT_006132e8 != '\0') {
    return;
  }
  FUN_00401c6b();
  DAT_006132e8 = 1;
  return;
}


/* WARNING: Removing unreachable block (ram,0x00401cb9) */

void thunk_FUN_00401c8a(void)

{
  return;
}


ulong FUN_00401d20(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = param_2;
  if ((param_2 & 1) == 0) {
    uVar1 = param_1;
    param_1 = param_2;
  }
  if (param_1 == 0) {
    return uVar1;
  }
  uVar1 = uVar1 >> 1;
  while( true ) {
    do {
      uVar2 = param_1;
      param_1 = uVar2 >> 1;
    } while ((uVar2 & 1) == 0);
    uVar3 = (uVar2 >> 1) - uVar1;
    if (uVar3 == 0) break;
    uVar2 = (long)uVar3 >> 0x3f;
    uVar1 = uVar1 + (uVar3 & uVar2);
    param_1 = (uVar3 ^ uVar2) - uVar2;
  }
  return uVar2 | 1;
}


void FUN_00401d80(long param_1,ulong param_2,char param_3)

{
  long lVar1;
  ulong *puVar2;
  byte bVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong *puVar10;
  char *pcVar11;
  bool bVar12;
  
  pcVar11 = (char *)(param_1 + 0xe0);
  puVar10 = (ulong *)(param_1 + 0x10);
  bVar3 = *(byte *)(param_1 + 0xfa);
  iVar6 = bVar3 - 1;
  if (iVar6 != -1) {
    lVar7 = (long)iVar6;
    uVar9 = puVar10[lVar7];
    if (param_2 < uVar9) {
      lVar1 = lVar7 + -1;
      lVar4 = lVar1;
      iVar5 = iVar6;
      do {
        lVar8 = lVar4;
        iVar5 = iVar5 + -1;
        if (iVar5 == -1) goto LAB_00401de9;
        puVar2 = (ulong *)(param_1 + 0x18 + (lVar8 + -1) * 8);
        bVar12 = *puVar2 == param_2;
        lVar4 = lVar8 + -1;
      } while (param_2 <= *puVar2 && !bVar12);
      if (bVar12) {
LAB_00401e3d:
        pcVar11[lVar8] = pcVar11[lVar8] + param_3;
        return;
      }
      puVar10 = puVar10 + lVar8 + 1;
      pcVar11 = pcVar11 + lVar8 + 1;
      if (iVar5 < iVar6) {
LAB_00401de9:
        while( true ) {
          lVar8 = lVar1;
          *(ulong *)(param_1 + 0x18 + lVar7 * 8) = uVar9;
          *(undefined *)(param_1 + 0xe1 + lVar7) = *(undefined *)(param_1 + 0xe0 + lVar7);
          if ((int)lVar8 <= iVar5) break;
          uVar9 = *(ulong *)(param_1 + 0x10 + lVar8 * 8);
          lVar1 = lVar8 + -1;
          lVar7 = lVar8;
        }
      }
    }
    else {
      lVar8 = lVar7;
      if (param_2 == uVar9) goto LAB_00401e3d;
      puVar10 = (ulong *)(param_1 + 0x18 + lVar7 * 8);
      pcVar11 = (char *)(param_1 + 0xe1 + lVar7);
    }
  }
  *puVar10 = param_2;
  *pcVar11 = param_3;
  *(byte *)(param_1 + 0xfa) = bVar3 + 1;
  return;
}


ulong FUN_00401e60(ulong param_1,ulong param_2,ulong param_3,long param_4,ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if ((param_2 & 1) == 0) goto LAB_00401ec0;
  do {
    while( true ) {
      uVar1 = SUB168(ZEXT816(param_1) * ZEXT816(param_1) >> 0x40,0);
      uVar2 = SUB168(ZEXT816((ulong)(SUB168(ZEXT816(param_1) * ZEXT816(param_1),0) * param_4)) *
                     ZEXT816(param_3) >> 0x40,0);
      param_1 = uVar1 - uVar2;
      if (uVar1 < uVar2) {
        param_1 = param_1 + param_3;
      }
      param_2 = param_2 >> 1;
      param_5 = uVar3;
      if ((param_2 & 1) == 0) break;
      uVar1 = SUB168(ZEXT816(uVar3) * ZEXT816(param_1) >> 0x40,0);
      uVar2 = SUB168(ZEXT816((ulong)(SUB168(ZEXT816(uVar3) * ZEXT816(param_1),0) * param_4)) *
                     ZEXT816(param_3) >> 0x40,0);
      uVar3 = uVar1 - uVar2;
      if (uVar1 < uVar2) {
        uVar3 = uVar3 + param_3;
      }
    }
LAB_00401ec0:
    uVar3 = param_5;
  } while (param_2 != 0);
  return param_5;
}


ulong FUN_00401ed0(ulong param_1,long param_2,undefined8 param_3,undefined8 param_4,uint param_5,
                  ulong param_6)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar6 = param_6;
  uVar1 = FUN_00401e60(param_3,param_4,param_1,param_2,param_6);
  uVar5 = param_1 - param_6;
  uVar6 = uVar6 & 0xffffffffffffff00 | (ulong)(param_6 == uVar1 || uVar1 == uVar5);
  if ((param_6 != uVar1 && uVar1 != uVar5) && (1 < param_5)) {
    uVar4 = 1;
    while( true ) {
      uVar2 = SUB168(ZEXT816(uVar1) * ZEXT816(uVar1) >> 0x40,0);
      uVar3 = SUB168(ZEXT816((ulong)(SUB168(ZEXT816(uVar1) * ZEXT816(uVar1),0) * param_2)) *
                     ZEXT816(param_1) >> 0x40,0);
      uVar1 = uVar2 - uVar3;
      if (uVar2 < uVar3) {
        uVar1 = uVar1 + param_1;
      }
      if (uVar5 == uVar1) break;
      if ((param_6 == uVar1) || (uVar4 = uVar4 + 1, param_5 == uVar4)) goto LAB_00401f55;
    }
    uVar6 = 1;
  }
LAB_00401f55:
  return uVar6 & 0xffffffff;
}


/* WARNING: Removing unreachable block (ram,0x00402072) */

undefined8
FUN_00401f60(undefined8 *param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5,
            ulong param_6,ulong param_7,long param_8)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  if ((long)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("(a1 >> (W_TYPE_SIZE - 1)) == 0","src/factor.c",999,"mulredc2");
  }
  if (-1 < (long)param_4) {
    if (-1 < (long)param_6) {
      uVar4 = SUB168(ZEXT816(param_3) * ZEXT816(param_5) >> 0x40,0);
      lVar3 = SUB168(ZEXT816(param_3) * ZEXT816(param_5),0);
      uVar8 = -param_8 * lVar3;
      uVar5 = SUB168(ZEXT816(uVar8) * ZEXT816(param_7) >> 0x40,0);
      uVar6 = SUB168(ZEXT816(param_3) * ZEXT816(param_4),0) + (ulong)(lVar3 != 0);
      uVar7 = uVar6 + uVar5;
      auVar1 = ZEXT816(uVar8) * ZEXT816(param_6) +
               CONCAT88(SUB168(ZEXT816(param_3) * ZEXT816(param_4) >> 0x40,0) +
                        (ulong)CARRY8(uVar6,uVar5) + (ulong)CARRY8(uVar7,uVar4),uVar7 + uVar4);
      auVar2 = ZEXT816(param_2) * ZEXT816(param_5) + (auVar1 & (undefined  [16])0xffffffffffffffff);
      lVar3 = SUB168(auVar2,0);
      uVar8 = SUB168(auVar2 >> 0x40,0);
      uVar5 = -param_8 * lVar3;
      auVar1 = ZEXT816(param_2) * ZEXT816(param_4) +
               (auVar1 >> 0x40 & (undefined  [16])0xffffffffffffffff);
      uVar4 = SUB168(ZEXT816(uVar5) * ZEXT816(param_7) >> 0x40,0);
      uVar6 = (ulong)(lVar3 != 0) + SUB168(auVar1,0);
      uVar7 = uVar6 + uVar4;
      auVar1 = ZEXT816(uVar5) * ZEXT816(param_6) +
               CONCAT88(SUB168(auVar1 >> 0x40,0) + (ulong)CARRY8(uVar6,uVar4) +
                        (ulong)CARRY8(uVar7,uVar8),uVar7 + uVar8);
      if (CONCAT88(param_6,param_7) <= auVar1) {
        auVar1 = auVar1 - CONCAT88(param_6,param_7);
      }
      *param_1 = SUB168(auVar1 >> 0x40,0);
      return SUB168(auVar1,0);
    }
                    /* WARNING: Subroutine does not return */
    __assert_fail("(m1 >> (W_TYPE_SIZE - 1)) == 0","src/factor.c",0x3e9,"mulredc2");
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("(b1 >> (W_TYPE_SIZE - 1)) == 0","src/factor.c",1000,"mulredc2");
}


undefined8
FUN_004020d0(undefined8 *param_1,undefined8 *param_2,ulong *param_3,undefined8 *param_4,
            undefined8 param_5,undefined8 *param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 local_60;
  undefined8 local_58;
  
  iVar4 = 0x40;
  local_58 = *param_6;
  uVar3 = *param_2;
  uVar5 = param_2[1];
  uVar1 = *param_4;
  uVar2 = param_4[1];
  uVar6 = *param_3;
  local_60 = param_6[1];
  do {
    if ((uVar6 & 1) != 0) {
      local_58 = FUN_00401f60(param_1,local_60,local_58,uVar5,uVar3,uVar2,uVar1,param_5);
      local_60 = *param_1;
    }
    uVar6 = uVar6 >> 1;
    uVar3 = FUN_00401f60(param_1,uVar5,uVar3,uVar5,uVar3,uVar2,uVar1,param_5);
    uVar5 = *param_1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  for (uVar6 = param_3[1]; uVar6 != 0; uVar6 = uVar6 >> 1) {
    if ((uVar6 & 1) != 0) {
      local_58 = FUN_00401f60(param_1,local_60,local_58,uVar5,uVar3,uVar2,uVar1,param_5);
      local_60 = *param_1;
    }
    uVar3 = FUN_00401f60(param_1,uVar5,uVar3,uVar5,uVar3,uVar2,uVar1,param_5);
    uVar5 = *param_1;
  }
  *param_1 = local_60;
  return local_58;
}


bool FUN_00402240(ulong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 uint param_5,ulong *param_6)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  ulong local_40 [2];
  
  uVar2 = FUN_004020d0(local_40,param_3,param_4,param_1,param_2);
  uVar6 = *param_6;
  if ((uVar6 != uVar2) || (param_6[1] != local_40[0])) {
    uVar5 = param_1[1];
    uVar3 = *param_1;
    uVar4 = uVar3 - uVar6;
    uVar6 = (uVar5 - param_6[1]) - (ulong)(uVar3 < uVar6);
    bVar1 = uVar2 == uVar4 && local_40[0] == uVar6;
    if (uVar2 != uVar4 || local_40[0] != uVar6) {
      uVar7 = 1;
      if (param_5 < 2) {
        return bVar1;
      }
      while ((uVar2 = FUN_00401f60(local_40,local_40[0],uVar2,local_40[0],uVar2,uVar5,uVar3,param_2)
             , uVar4 != uVar2 || (uVar6 != local_40[0]))) {
        if ((*param_6 == uVar2) && (param_6[1] == local_40[0])) {
          return bVar1;
        }
        uVar7 = uVar7 + 1;
        if (param_5 == uVar7) {
          return bVar1;
        }
        uVar3 = *param_1;
        uVar5 = param_1[1];
      }
    }
  }
  return true;
}


void FUN_00402340(undefined8 param_1,ulong param_2)

{
  void *pvVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong __n;
  long lVar4;
  undefined *puVar5;
  undefined auStack_38 [40];
  
  pvVar1 = (void *)FUN_00404710(param_1,auStack_38);
  puVar5 = DAT_00613308;
  __n = 0x14 - ((long)pvVar1 - (long)auStack_38);
  if (__n < param_2) {
    lVar4 = ((long)pvVar1 - (long)auStack_38) + -0x14;
    puVar2 = DAT_00613308 + lVar4 + param_2;
    puVar3 = DAT_00613308;
    do {
      *puVar3 = 0x30;
      puVar3 = puVar3 + 1;
    } while (puVar3 != puVar2);
    puVar5 = puVar5 + lVar4 + param_2;
  }
  pvVar1 = memcpy(puVar5,pvVar1,__n);
  DAT_00613308 = (undefined *)((long)pvVar1 + __n);
  return;
}


void FUN_004023d0(void)

{
  long lVar1;
  undefined8 uVar2;
  uint *puVar3;
  undefined8 extraout_RDX;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  
  lVar4 = DAT_00613308 - DAT_00613300;
  lVar1 = FUN_00404690(1,DAT_00613300,lVar4);
  if (lVar1 == lVar4) {
    DAT_00613308 = DAT_00613300;
    return;
  }
  uVar2 = dcgettext(0,"write error",5);
  puVar3 = (uint *)__errno_location();
  puVar6 = (undefined8 *)0x1;
  uVar5 = (ulong)*puVar3;
  error(1,uVar5,"%s",uVar2);
  if (uVar5 != 0) {
    if (puVar6[1] == 0) {
      *puVar6 = extraout_RDX;
      puVar6[1] = uVar5;
      return;
    }
                    /* WARNING: Subroutine does not return */
    __assert_fail("factors->plarge[1] == 0","src/factor.c",0x235,"factor_insert_large");
  }
  FUN_00401d80();
  return;
}


void FUN_00402440(undefined8 *param_1,long param_2,undefined8 param_3)

{
  if (param_2 == 0) {
    FUN_00401d80(param_1,param_3,1);
    return;
  }
  if (param_1[1] == 0) {
    *param_1 = param_3;
    param_1[1] = param_2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("factors->plarge[1] == 0","src/factor.c",0x235,"factor_insert_large");
}


ulong FUN_00402490(ulong *param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5)

{
  ulong uVar1;
  bool bVar2;
  
  if ((param_5 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("b0 & 1","src/factor.c",0x1e3,"gcd2_odd");
  }
  if ((param_3 | param_2) == 0) {
    *param_1 = param_4;
    return param_5;
  }
  for (; (param_3 & 1) == 0; param_3 = param_3 >> 1 | uVar1) {
    uVar1 = param_2 << 0x3f;
    param_2 = param_2 >> 1;
  }
  while ((param_2 | param_4) != 0) {
    while ((param_2 <= param_4 && ((param_3 <= param_5 || (param_2 != param_4))))) {
      if ((param_4 <= param_2) && ((param_5 <= param_3 || (param_2 != param_4)))) {
        *param_1 = param_2;
        return param_3;
      }
      bVar2 = param_5 < param_3;
      param_5 = param_5 - param_3;
      param_4 = (param_4 - param_2) - (ulong)bVar2;
      do {
        uVar1 = param_5 >> 1;
        param_5 = param_4 << 0x3f;
        param_4 = param_4 >> 1;
        param_5 = uVar1 | param_5;
      } while ((uVar1 & 1) == 0);
      if ((param_2 | param_4) == 0) goto LAB_00402516;
    }
    bVar2 = param_3 < param_5;
    param_3 = param_3 - param_5;
    param_2 = (param_2 - param_4) - (ulong)bVar2;
    do {
      uVar1 = param_3 >> 1;
      param_3 = param_2 << 0x3f;
      param_2 = param_2 >> 1;
      param_3 = uVar1 | param_3;
    } while ((uVar1 & 1) == 0);
  }
LAB_00402516:
  *param_1 = 0;
  uVar1 = FUN_00401d20(param_5,param_3);
  return uVar1;
}


void FUN_00402590(ulong *param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  int iVar7;
  bool bVar8;
  
  if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("d1 != 0","src/factor.c",0x1a3,"mod2");
  }
  if (param_2 != 0) {
    lVar1 = 0x3f;
    if (param_4 != 0) {
      for (; param_4 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    lVar2 = 0x3f;
    if (param_2 != 0) {
      for (; param_2 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    iVar7 = ((uint)lVar1 ^ 0x3f) - ((uint)lVar2 ^ 0x3f);
    bVar3 = (byte)iVar7;
    uVar6 = param_5 >> (0x40 - bVar3 & 0x3f) | param_4 << (bVar3 & 0x3f);
    param_5 = param_5 << (bVar3 & 0x3f);
    if (0 < iVar7) {
      iVar5 = 0;
      do {
        if ((uVar6 < param_2) || ((uVar6 == param_2 && (param_5 <= param_3)))) {
          bVar8 = param_3 < param_5;
          param_3 = param_3 - param_5;
          param_2 = (param_2 - uVar6) - (ulong)bVar8;
        }
        iVar5 = iVar5 + 1;
        uVar4 = uVar6 << 0x3f;
        uVar6 = uVar6 >> 1;
        param_5 = param_5 >> 1 | uVar4;
      } while (iVar7 != iVar5);
    }
    *param_1 = param_2;
    return;
  }
  *param_1 = 0;
  return;
}


void FUN_00402640(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  bool bVar7;
  
  if (param_1 != 0) {
    iVar5 = 0x40;
    lVar3 = 0;
    uVar2 = 1000000000;
    uVar4 = param_1 % 1000000000;
    uVar1 = 0;
    do {
      lVar3 = lVar3 * 2;
      uVar6 = uVar2 << 0x3f;
      uVar2 = uVar2 >> 1;
      uVar1 = uVar1 >> 1 | uVar6;
      if ((uVar2 < uVar4) || ((uVar2 == uVar4 && (uVar1 <= param_2)))) {
        lVar3 = lVar3 + 1;
        bVar7 = param_2 < uVar1;
        param_2 = param_2 - uVar1;
        uVar4 = (uVar4 - uVar2) - (ulong)bVar7;
      }
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    FUN_00402640(param_1 / 1000000000,lVar3);
    FUN_00402340(param_2,9);
    return;
  }
  FUN_00402340(param_2,0);
  return;
}


void FUN_004026f0(char param_1)

{
  char *pcVar1;
  void *pvVar2;
  void *pvVar3;
  
  pcVar1 = DAT_00613308 + 1;
  *DAT_00613308 = param_1;
  pvVar3 = DAT_00613300;
  DAT_00613308 = pcVar1;
  if (param_1 != '\n') {
    return;
  }
  if (DAT_00613230 == -1) {
    DAT_00613230 = isatty(0);
  }
  if (DAT_00613230 != 0) {
    FUN_004023d0();
    return;
  }
  pvVar2 = (void *)((long)pvVar3 + 0x200);
  if (0x1ff < (ulong)((long)pcVar1 - (long)pvVar3)) {
    do {
      pvVar3 = pvVar2;
      pvVar2 = (void *)((long)pvVar3 + -1);
    } while (*(char *)((long)pvVar3 + -1) != '\n');
    DAT_00613308 = (char *)pvVar3;
    FUN_004023d0();
    pvVar2 = memcpy(DAT_00613300,pvVar3,(long)pcVar1 - (long)pvVar3);
    DAT_00613308 = (char *)(((long)pcVar1 - (long)pvVar3) + (long)pvVar2);
    return;
  }
  return;
}


void FUN_004027d0(ulong param_1,ulong param_2,undefined8 param_3)

{
  undefined auVar1 [16];
  char cVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  bool bVar17;
  ulong local_68;
  long local_40;
  
  if (1 < param_1) {
    local_40 = param_2 + 1;
    local_68 = param_2;
    do {
      uVar11 = 0;
      iVar10 = 0x40;
      uVar3 = 1;
      uVar6 = 0;
      uVar4 = param_1;
      do {
        uVar12 = uVar4 << 0x3f;
        uVar4 = uVar4 >> 1;
        uVar6 = uVar6 >> 1 | uVar12;
        if ((uVar4 < uVar3) || ((uVar4 == uVar3 && (uVar6 <= uVar11)))) {
          bVar17 = uVar11 < uVar6;
          uVar11 = uVar11 - uVar6;
          uVar3 = (uVar3 - uVar4) - (ulong)bVar17;
        }
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
      uVar4 = (-(ulong)(uVar11 < param_1 - uVar11) & param_1) + (uVar11 * 2 - param_1);
      if (param_1 <= local_68) {
LAB_00402b1b:
                    /* WARNING: Subroutine does not return */
        __assert_fail("a < n","src/factor.c",0x5c8,"factor_using_pollard_rho");
      }
      lVar5 = 1;
      lVar15 = 1;
      uVar3 = uVar4;
      uVar6 = uVar4;
      while( true ) {
        uVar12 = (ulong)(byte)(&DAT_0040c220)[(uint)(param_1 >> 1) & 0x7f];
        lVar7 = uVar12 * 2 - uVar12 * uVar12 * param_1;
        lVar7 = lVar7 * 2 - lVar7 * lVar7 * param_1;
        lVar13 = lVar7 * 2 - lVar7 * lVar7 * param_1;
        uVar12 = param_1 - local_68;
        lVar7 = local_68 - param_1;
        while( true ) {
          uVar8 = SUB168(ZEXT816(uVar3) * ZEXT816(uVar3) >> 0x40,0);
          uVar9 = SUB168(ZEXT816((ulong)(SUB168(ZEXT816(uVar3) * ZEXT816(uVar3),0) * lVar13)) *
                         ZEXT816(param_1) >> 0x40,0);
          uVar3 = uVar8 - uVar9;
          if (uVar8 < uVar9) {
            uVar3 = uVar3 + param_1;
          }
          uVar3 = (-(ulong)(uVar3 < uVar12) & param_1) + uVar3 + lVar7;
          auVar1 = ZEXT816(uVar11) * ZEXT816((-(ulong)(uVar6 < uVar3) & param_1) + (uVar6 - uVar3));
          uVar8 = SUB168(auVar1 >> 0x40,0);
          uVar9 = SUB168(ZEXT816((ulong)(SUB168(auVar1,0) * lVar13)) * ZEXT816(param_1) >> 0x40,0);
          uVar11 = uVar8 - uVar9;
          if (uVar8 < uVar9) {
            uVar11 = uVar11 + param_1;
          }
          uVar8 = uVar4;
          lVar14 = lVar5;
          if ((((uint)lVar15 & 0x1f) == 1) &&
             (lVar16 = FUN_00401d20(uVar11,param_1), uVar8 = uVar3, lVar14 = lVar5, lVar16 != 1))
          break;
          lVar16 = lVar15 + -1;
          uVar4 = uVar8;
          lVar5 = lVar14;
          lVar15 = lVar16;
          if ((lVar16 == 0) &&
             (lVar5 = lVar14 * 2, uVar4 = uVar3, lVar15 = lVar14, uVar6 = uVar3, lVar14 != 0)) {
            do {
              uVar3 = SUB168(ZEXT816(uVar4) * ZEXT816(uVar4) >> 0x40,0);
              uVar8 = SUB168(ZEXT816((ulong)(SUB168(ZEXT816(uVar4) * ZEXT816(uVar4),0) * lVar13)) *
                             ZEXT816(param_1) >> 0x40,0);
              uVar4 = uVar3 - uVar8;
              if (uVar3 < uVar8) {
                uVar4 = uVar4 + param_1;
              }
              lVar16 = lVar16 + 1;
              uVar4 = (-(ulong)(uVar4 < uVar12) & param_1) + uVar4 + lVar7;
              uVar3 = uVar4;
              lVar15 = lVar16;
            } while (lVar14 != lVar16);
          }
        }
        do {
          uVar8 = SUB168(ZEXT816(uVar4) * ZEXT816(uVar4) >> 0x40,0);
          uVar9 = SUB168(ZEXT816((ulong)(SUB168(ZEXT816(uVar4) * ZEXT816(uVar4),0) * lVar13)) *
                         ZEXT816(param_1) >> 0x40,0);
          uVar4 = uVar8 - uVar9;
          if (uVar8 < uVar9) {
            uVar4 = uVar4 + param_1;
          }
          uVar4 = (-(ulong)(uVar4 < uVar12) & param_1) + uVar4 + lVar7;
          uVar8 = FUN_00401d20((-(ulong)(uVar6 < uVar4) & param_1) + (uVar6 - uVar4),param_1);
        } while (uVar8 == 1);
        if (param_1 == uVar8) break;
        param_1 = param_1 / uVar8;
        if ((uVar8 < 2) || ((0x17ded78 < uVar8 && (cVar2 = FUN_00403840(uVar8), cVar2 == '\0')))) {
          FUN_004027d0(uVar8,local_40,param_3);
        }
        else {
          FUN_00401d80(param_3,uVar8,1);
        }
        if (param_1 < 2) {
          if (param_1 == 1) {
            return;
          }
          uVar4 = 0;
          uVar6 = 0;
          uVar3 = 0;
        }
        else {
          if ((param_1 < 0x17ded79) || (cVar2 = FUN_00403840(param_1), cVar2 != '\0')) {
            FUN_00401d80(param_3,param_1,1);
            return;
          }
          uVar3 = uVar3 % param_1;
          uVar6 = uVar6 % param_1;
          uVar4 = uVar4 % param_1;
        }
        if (param_1 <= local_68) goto LAB_00402b1b;
      }
      local_68 = local_68 + 1;
      local_40 = local_40 + 1;
    } while (1 < param_1);
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("(1) < (n)","src/factor.c",0x5c2,"factor_using_pollard_rho");
}


void FUN_00402bf0(ulong param_1,ulong param_2,ulong param_3,undefined8 param_4)

{
  char cVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  bool bVar10;
  ulong local_a8;
  ulong local_a0;
  ulong local_98;
  long local_88;
  ulong local_60;
  ulong local_58;
  ulong local_50;
  ulong local_48;
  ulong local_40 [2];
  
  lVar5 = (ulong)(-(uint)(param_1 < 2) & 0x40) + 0x3f;
  local_a8 = (ulong)(param_1 >= 2);
  uVar6 = (ulong)(param_1 < 2);
  do {
    local_a0 = uVar6 * 2;
    local_a8 = local_a8 * 2 | uVar6 >> 0x3f;
    if ((param_1 < local_a8) || ((param_1 == local_a8 && (param_2 <= local_a0)))) {
      bVar10 = local_a0 < param_2;
      local_a0 = local_a0 - param_2;
      local_a8 = (local_a8 - param_1) - (ulong)bVar10;
    }
    lVar5 = lVar5 + -1;
    uVar6 = local_a0;
  } while (lVar5 != -1);
  uVar6 = local_a0 * 2;
  local_60 = local_a8 * 2 + (ulong)CARRY8(local_a0,local_a0);
  if ((param_1 < local_60) || ((local_60 == param_1 && (param_2 <= uVar6)))) {
    bVar10 = uVar6 < param_2;
    uVar6 = uVar6 - param_2;
    local_60 = (local_60 - param_1) - (ulong)bVar10;
  }
  if ((param_2 == 1) && (param_1 == 0)) {
    return;
  }
  lVar5 = 1;
  local_88 = 1;
  uVar3 = uVar6;
  local_98 = uVar6;
  local_58 = local_60;
  local_50 = local_60;
LAB_00402cd0:
  uVar2 = (ulong)(byte)(&DAT_0040c220)[(uint)(param_2 >> 1) & 0x7f];
  lVar7 = uVar2 * 2 - uVar2 * uVar2 * param_2;
  lVar7 = lVar7 * 2 - lVar7 * lVar7 * param_2;
  lVar9 = lVar7 * 2 - lVar7 * lVar7 * param_2;
  lVar7 = local_88;
  uVar2 = local_50;
  do {
    local_50 = uVar2;
    local_88 = lVar7;
    uVar2 = FUN_00401f60(local_40,local_60,uVar6,local_60,uVar6,param_1,param_2,lVar9);
    uVar6 = uVar2 + param_3;
    local_60 = local_40[0] + CARRY8(uVar2,param_3);
    if ((param_1 < local_60) || ((param_1 == local_60 && (param_2 <= uVar6)))) {
      bVar10 = uVar6 < param_2;
      uVar6 = uVar6 - param_2;
      local_60 = (local_60 - param_1) - (ulong)bVar10;
    }
    uVar2 = local_98 - uVar6;
    lVar7 = (local_58 - local_60) - (ulong)(local_98 < uVar6);
    if (lVar7 < 0) {
      bVar10 = CARRY8(uVar2,param_2);
      uVar2 = uVar2 + param_2;
      lVar7 = lVar7 + param_1 + (ulong)bVar10;
    }
    local_a0 = FUN_00401f60(local_40,local_a8,local_a0,lVar7,uVar2,param_1,param_2,lVar9);
    local_a8 = local_40[0];
    if (((uint)lVar5 & 0x1f) == 1) {
      lVar7 = FUN_00402490(&local_48,local_40[0],local_a0,param_1,param_2);
      if ((local_48 != 0) || (lVar7 != 1)) break;
      local_50 = local_60;
      uVar3 = uVar6;
    }
    lVar8 = lVar5 + -1;
    lVar5 = lVar8;
    lVar7 = local_88;
    uVar2 = local_50;
    if (lVar8 == 0) {
      local_58 = local_60;
      lVar5 = local_88;
      uVar3 = uVar6;
      local_98 = uVar6;
      lVar7 = local_88 * 2;
      uVar2 = local_60;
      if (local_88 != 0) {
        do {
          uVar3 = FUN_00401f60(local_40,local_60,uVar6,local_60,uVar6,param_1,param_2,lVar9);
          uVar6 = uVar3 + param_3;
          local_60 = local_40[0] + CARRY8(uVar3,param_3);
          if ((param_1 < local_60) || ((param_1 == local_60 && (param_2 <= uVar6)))) {
            bVar10 = uVar6 < param_2;
            uVar6 = uVar6 - param_2;
            local_60 = (local_60 - param_1) - (ulong)bVar10;
          }
          lVar8 = lVar8 + 1;
          uVar3 = uVar6;
          uVar2 = local_60;
        } while (local_88 != lVar8);
      }
    }
  } while( true );
  while (uVar2 == 1) {
    uVar2 = FUN_00401f60(local_40,local_50,uVar3,local_50,uVar3,param_1,param_2,lVar9);
    uVar3 = uVar2 + param_3;
    local_50 = local_40[0] + CARRY8(uVar2,param_3);
    if ((param_1 < local_50) || ((param_1 == local_50 && (param_2 <= uVar3)))) {
      bVar10 = uVar3 < param_2;
      uVar3 = uVar3 - param_2;
      local_50 = (local_50 - param_1) - (ulong)bVar10;
    }
    uVar2 = local_98 - uVar3;
    lVar7 = (local_58 - local_50) - (ulong)(local_98 < uVar3);
    if (lVar7 < 0) {
      bVar10 = CARRY8(uVar2,param_2);
      uVar2 = uVar2 + param_2;
      lVar7 = lVar7 + param_1 + (ulong)bVar10;
    }
    uVar2 = FUN_00402490(&local_48,lVar7,uVar2,param_1,param_2);
    if (local_48 != 0) {
      if ((param_2 == uVar2) && (param_1 == local_48)) {
        FUN_00402bf0(param_1,param_2,param_3 + 1,param_4);
        return;
      }
      uVar6 = (ulong)(byte)(&DAT_0040c220)[(uint)(uVar2 >> 1) & 0x7f];
      lVar5 = uVar6 * 2 - uVar6 * uVar6 * uVar2;
      lVar5 = lVar5 * 2 - lVar5 * lVar5 * uVar2;
      param_2 = param_2 * (lVar5 * 2 - lVar5 * lVar5 * uVar2);
      cVar1 = FUN_00404050(local_48,uVar2);
      if (cVar1 == '\0') {
        FUN_00402bf0(local_48,uVar2,param_3 + 1,param_4);
      }
      else {
        FUN_00402440(param_4,local_48,uVar2);
      }
      goto LAB_00403007;
    }
  }
  uVar4 = (ulong)(byte)(&DAT_0040c220)[(uint)(uVar2 >> 1) & 0x7f];
  lVar7 = uVar4 * 2 - uVar4 * uVar4 * uVar2;
  lVar7 = lVar7 * 2 - lVar7 * lVar7 * uVar2;
  lVar7 = lVar7 * 2 - lVar7 * lVar7 * uVar2;
  param_2 = param_2 * lVar7;
  if (param_1 < uVar2) {
    param_1 = 0;
  }
  else {
    param_1 = (param_1 - SUB168(ZEXT816(param_2) * ZEXT816(uVar2) >> 0x40,0)) * lVar7;
  }
  if ((uVar2 < 2) || ((0x17ded78 < uVar2 && (cVar1 = FUN_00403840(uVar2), cVar1 == '\0')))) {
    FUN_004027d0(uVar2,param_3 + 1,param_4);
  }
  else {
    FUN_00401d80(param_4,uVar2,1);
  }
  if (param_1 == 0) {
LAB_00403007:
    if ((1 < param_2) && ((param_2 < 0x17ded79 || (cVar1 = FUN_00403840(param_2), cVar1 != '\0'))))
    {
      FUN_00401d80(param_4,param_2,1);
      return;
    }
    FUN_004027d0(param_2,param_3,param_4);
    return;
  }
  cVar1 = FUN_00404050(param_1,param_2);
  if (cVar1 != '\0') {
    FUN_00402440(param_4,param_1,param_2);
    return;
  }
  uVar6 = FUN_00402590(&local_60,local_60,uVar6,param_1,param_2);
  local_98 = FUN_00402590(&local_58,local_58,local_98,param_1,param_2);
  uVar3 = FUN_00402590(&local_50,local_50,uVar3,param_1,param_2);
  goto LAB_00402cd0;
}


/* WARNING: Type propagation algorithm not settling */

void FUN_00403210(ulong param_1,ulong param_2,ulong *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  ulong uVar4;
  char cVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong local_50;
  
  *(undefined *)((long)param_3 + 0xfa) = 0;
  param_3[1] = 0;
  if ((param_1 == 0) && (param_2 < 2)) {
    return;
  }
  local_50 = param_1;
  if ((param_2 & 1) == 0) {
    if (param_2 == 0) {
      lVar11 = 0;
      if (param_1 != 0) {
        for (; (param_1 >> lVar11 & 1) == 0; lVar11 = lVar11 + 1) {
        }
      }
      param_2 = param_1 >> ((byte)lVar11 & 0x3f);
      FUN_00401d80(param_3,2,(int)lVar11 + 0x40);
      local_50 = 0;
      goto LAB_00403291;
    }
    lVar11 = 0;
    if (param_2 != 0) {
      for (; (param_2 >> lVar11 & 1) == 0; lVar11 = lVar11 + 1) {
      }
    }
    bVar1 = (byte)lVar11;
    local_50 = param_1 >> (bVar1 & 0x3f);
    param_2 = param_2 >> (bVar1 & 0x3f) | param_1 << (0x40 - bVar1 & 0x3f);
    FUN_00401d80(param_3,2);
  }
  if (local_50 != 0) {
    uVar13 = 2;
    lVar11 = -0x5555555555555555;
    uVar12 = 3;
    uVar14 = 1;
    do {
      uVar7 = SUB168(ZEXT816(lVar11 * param_2) * ZEXT816(uVar12) >> 0x40,0);
      if (uVar7 <= local_50) {
        uVar8 = (local_50 - uVar7) * lVar11;
        uVar7 = *(ulong *)(&UNK_0040c298 + uVar14 * 0x10);
        uVar4 = lVar11 * param_2;
        if (uVar8 < uVar7 || uVar8 - uVar7 == 0) {
          do {
            param_2 = uVar4;
            local_50 = uVar8;
            FUN_00401d80(param_3,uVar12,1);
            uVar8 = SUB168(ZEXT816(lVar11 * param_2) * ZEXT816(uVar12) >> 0x40,0);
            if (local_50 < uVar8) break;
            uVar8 = (local_50 - uVar8) * lVar11;
            uVar4 = lVar11 * param_2;
          } while (uVar8 < uVar7 || uVar8 - uVar7 == 0);
        }
      }
      uVar7 = uVar14 & 0xffffffff;
      uVar12 = uVar12 + uVar13;
      uVar9 = (uint)uVar7;
      if (local_50 == 0) goto joined_r0x004033de;
      if (0x29b < uVar9) goto joined_r0x004033de;
      uVar13 = (ulong)(byte)(&DAT_0040efa1)[uVar14];
      lVar11 = *(long *)(&UNK_0040c290 + (uVar14 + 1) * 0x10);
      uVar14 = uVar14 + 1;
    } while( true );
  }
LAB_00403291:
  uVar13 = 0x1a;
  uVar12 = 3;
  uVar7 = 0;
  uVar14 = 0x5555555555555555;
  lVar11 = -0x5555555555555555;
  do {
    uVar8 = param_2 * lVar11;
    iVar10 = (int)uVar7;
    if (uVar8 < uVar14 || uVar8 - uVar14 == 0) {
      do {
        param_2 = uVar8;
        FUN_00401d80(param_3,uVar12,1);
        uVar8 = param_2 * lVar11;
      } while (uVar8 < uVar14 || uVar8 - uVar14 == 0);
      uVar14 = (&DAT_0040c2b0)[uVar7 * 2] * param_2;
      if (uVar14 < (ulong)(&DAT_0040c2b8)[uVar7 * 2] || uVar14 - (&DAT_0040c2b8)[uVar7 * 2] == 0)
      goto LAB_00403510;
LAB_00403402:
      uVar14 = (&DAT_0040c2c0)[uVar7 * 2] * param_2;
      if ((ulong)(&DAT_0040c2c8)[uVar7 * 2] <= uVar14 && uVar14 - (&DAT_0040c2c8)[uVar7 * 2] != 0)
      goto LAB_00403414;
LAB_00403558:
      bVar1 = (&DAT_0040efa0)[iVar10 + 1];
      bVar2 = (&DAT_0040efa0)[iVar10 + 2];
      do {
        param_2 = uVar14;
        FUN_00401d80(param_3,(ulong)bVar1 + (ulong)bVar2 + uVar12,1);
        uVar14 = (&DAT_0040c2c0)[uVar7 * 2] * param_2;
      } while (uVar14 < (ulong)(&DAT_0040c2c8)[uVar7 * 2] ||
               uVar14 - (&DAT_0040c2c8)[uVar7 * 2] == 0);
      uVar14 = (&DAT_0040c2d0)[uVar7 * 2] * param_2;
      if (uVar14 <= (ulong)(&DAT_0040c2d8)[uVar7 * 2]) goto LAB_004035b0;
LAB_00403426:
      uVar14 = (&DAT_0040c2e0)[uVar7 * 2] * param_2;
      if (uVar14 <= (ulong)(&DAT_0040c2e8)[uVar7 * 2]) goto LAB_00403610;
    }
    else {
      uVar14 = (&DAT_0040c2b0)[uVar7 * 2] * param_2;
      if ((ulong)(&DAT_0040c2b8)[uVar7 * 2] <= uVar14 && uVar14 - (&DAT_0040c2b8)[uVar7 * 2] != 0)
      goto LAB_00403402;
LAB_00403510:
      bVar1 = (&DAT_0040efa0)[iVar10 + 1];
      do {
        param_2 = uVar14;
        FUN_00401d80(param_3,bVar1 + uVar12,1);
        uVar14 = (&DAT_0040c2b0)[uVar7 * 2] * param_2;
      } while (uVar14 < (ulong)(&DAT_0040c2b8)[uVar7 * 2] ||
               uVar14 - (&DAT_0040c2b8)[uVar7 * 2] == 0);
      uVar14 = (&DAT_0040c2c0)[uVar7 * 2] * param_2;
      if (uVar14 < (ulong)(&DAT_0040c2c8)[uVar7 * 2] || uVar14 - (&DAT_0040c2c8)[uVar7 * 2] == 0)
      goto LAB_00403558;
LAB_00403414:
      uVar14 = (&DAT_0040c2d0)[uVar7 * 2] * param_2;
      if ((ulong)(&DAT_0040c2d8)[uVar7 * 2] < uVar14) goto LAB_00403426;
LAB_004035b0:
      bVar1 = (&DAT_0040efa0)[iVar10 + 1];
      bVar2 = (&DAT_0040efa0)[iVar10 + 3];
      bVar3 = (&DAT_0040efa0)[iVar10 + 2];
      do {
        param_2 = uVar14;
        FUN_00401d80(param_3,(ulong)bVar1 + (ulong)bVar2 + uVar12 + (ulong)bVar3,1);
        uVar14 = (&DAT_0040c2d0)[uVar7 * 2] * param_2;
      } while (uVar14 < (ulong)(&DAT_0040c2d8)[uVar7 * 2] ||
               uVar14 - (&DAT_0040c2d8)[uVar7 * 2] == 0);
      uVar14 = (&DAT_0040c2e0)[uVar7 * 2] * param_2;
      if (uVar14 <= (ulong)(&DAT_0040c2e8)[uVar7 * 2]) {
LAB_00403610:
        uVar8 = uVar12;
        uVar9 = iVar10 + 1U;
        do {
          do {
            param_2 = uVar14;
            uVar6 = uVar9 + 1;
            uVar8 = uVar8 + (byte)(&DAT_0040efa0)[uVar9];
            uVar9 = uVar6;
            uVar14 = param_2;
          } while (iVar10 + 5U != uVar6);
          FUN_00401d80(param_3,uVar8,1);
          uVar14 = (&DAT_0040c2e0)[uVar7 * 2] * param_2;
          uVar8 = uVar12;
          uVar9 = iVar10 + 1U;
        } while (uVar14 < (ulong)(&DAT_0040c2e8)[uVar7 * 2] ||
                 uVar14 - (&DAT_0040c2e8)[uVar7 * 2] == 0);
      }
    }
    uVar14 = (&DAT_0040c2f0)[uVar7 * 2] * param_2;
    if (uVar14 < (ulong)(&DAT_0040c2f8)[uVar7 * 2] || uVar14 - (&DAT_0040c2f8)[uVar7 * 2] == 0) {
      uVar8 = uVar12;
      uVar9 = iVar10 + 1U;
      do {
        do {
          param_2 = uVar14;
          uVar6 = uVar9 + 1;
          uVar8 = uVar8 + (byte)(&DAT_0040efa0)[uVar9];
          uVar9 = uVar6;
          uVar14 = param_2;
        } while (iVar10 + 6U != uVar6);
        FUN_00401d80(param_3,uVar8,1);
        uVar14 = (&DAT_0040c2f0)[uVar7 * 2] * param_2;
        uVar8 = uVar12;
        uVar9 = iVar10 + 1U;
      } while (uVar14 < (ulong)(&DAT_0040c2f8)[uVar7 * 2] ||
               uVar14 - (&DAT_0040c2f8)[uVar7 * 2] == 0);
    }
    if ((&DAT_0040c300)[uVar7 * 2] * param_2 <= (ulong)(&DAT_0040c308)[uVar7 * 2]) {
      uVar14 = uVar12;
      uVar9 = iVar10 + 1U;
      uVar8 = (&DAT_0040c300)[uVar7 * 2] * param_2;
      do {
        do {
          param_2 = uVar8;
          uVar6 = uVar9 + 1;
          uVar14 = uVar14 + (byte)(&DAT_0040efa0)[uVar9];
          uVar9 = uVar6;
          uVar8 = param_2;
        } while (iVar10 + 7U != uVar6);
        FUN_00401d80(param_3,uVar14,1);
        uVar8 = (&DAT_0040c300)[uVar7 * 2] * param_2;
        uVar14 = uVar12;
        uVar9 = iVar10 + 1U;
      } while (uVar8 < (ulong)(&DAT_0040c308)[uVar7 * 2] || uVar8 - (&DAT_0040c308)[uVar7 * 2] == 0)
      ;
    }
    uVar14 = (&DAT_0040c310)[uVar7 * 2] * param_2;
    if (uVar14 < (ulong)(&DAT_0040c318)[uVar7 * 2] || uVar14 - (&DAT_0040c318)[uVar7 * 2] == 0) {
      uVar8 = uVar12;
      uVar9 = iVar10 + 1U;
      do {
        do {
          param_2 = uVar14;
          uVar6 = uVar9 + 1;
          uVar8 = uVar8 + (byte)(&DAT_0040efa0)[uVar9];
          uVar9 = uVar6;
          uVar14 = param_2;
        } while (iVar10 + 8U != uVar6);
        FUN_00401d80(param_3,uVar8,1);
        uVar14 = (&DAT_0040c310)[uVar7 * 2] * param_2;
        uVar8 = uVar12;
        uVar9 = iVar10 + 1U;
      } while (uVar14 < (ulong)(&DAT_0040c318)[uVar7 * 2] ||
               uVar14 - (&DAT_0040c318)[uVar7 * 2] == 0);
    }
    uVar12 = uVar12 + uVar13;
    if (param_2 < uVar12 * uVar12) {
LAB_00403670:
      if (local_50 == 0) {
        if (param_2 < 2) {
          return;
        }
        cVar5 = FUN_00404050(0,param_2);
        if (cVar5 == '\0') {
          FUN_004027d0(param_2,1,param_3);
          return;
        }
      }
      else {
        cVar5 = FUN_00404050(local_50,param_2);
        if (cVar5 == '\0') {
          FUN_00402bf0(local_50,param_2,1,param_3);
          return;
        }
      }
      if (local_50 == 0) {
        FUN_00401d80(param_3,param_2,1);
        return;
      }
      if (param_3[1] == 0) {
        *param_3 = param_2;
        param_3[1] = local_50;
        return;
      }
                    /* WARNING: Subroutine does not return */
      __assert_fail("factors->plarge[1] == 0","src/factor.c",0x235,"factor_insert_large");
    }
    uVar9 = iVar10 + 8;
    uVar7 = (ulong)uVar9;
joined_r0x004033de:
    if (0x29b < uVar9) goto LAB_00403670;
    uVar13 = (ulong)(byte)(&UNK_0040ece0)[uVar7];
    lVar11 = *(long *)(&DAT_0040c2a0 + uVar7 * 0x10);
    uVar14 = (&DAT_0040c2a8)[uVar7 * 2];
  } while( true );
}


/* WARNING: Removing unreachable block (ram,0x00403a97) */

char FUN_00403840(ulong param_1)

{
  ulong uVar1;
  undefined auVar2 [16];
  char cVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  ulong uVar11;
  ulong *puVar12;
  byte *pbVar13;
  ulong uVar14;
  ulong uVar15;
  bool bVar16;
  int local_14c;
  char local_139;
  undefined local_138 [16];
  ulong local_128 [29];
  byte local_3e;
  
  uVar1 = param_1 - 1;
  uVar14 = uVar1;
  if ((uVar1 & 1) == 0) {
    local_14c = 0;
    do {
      uVar14 = uVar14 >> 1;
      local_14c = local_14c + 1;
    } while ((uVar14 & 1) == 0);
  }
  else {
    local_14c = 0;
  }
  iVar10 = 0x40;
  uVar15 = 0;
  uVar6 = (ulong)(byte)(&DAT_0040c220)[(uint)(param_1 >> 1) & 0x7f];
  lVar7 = uVar6 * 2 - uVar6 * uVar6 * param_1;
  lVar7 = lVar7 * 2 - lVar7 * lVar7 * param_1;
  uVar8 = 0;
  lVar7 = lVar7 * 2 - lVar7 * lVar7 * param_1;
  uVar4 = 1;
  uVar6 = param_1;
  do {
    uVar11 = uVar6 << 0x3f;
    uVar6 = uVar6 >> 1;
    uVar8 = uVar8 >> 1 | uVar11;
    if ((uVar6 < uVar4) || ((uVar6 == uVar4 && (uVar8 <= uVar15)))) {
      bVar16 = uVar15 < uVar8;
      uVar15 = uVar15 - uVar8;
      uVar4 = (uVar4 - uVar6) - (ulong)bVar16;
    }
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  lVar9 = (-(ulong)(uVar15 < param_1 - uVar15) & param_1) + (uVar15 * 2 - param_1);
  local_139 = FUN_00401ed0(param_1,lVar7,lVar9,uVar14,local_14c,uVar15);
  if (local_139 == '\0') {
LAB_00403aac:
    local_139 = '\0';
  }
  else {
    pbVar13 = &DAT_0040efa0;
    FUN_00403210(0,uVar1,local_138);
    uVar6 = 2;
    while (local_3e != 0) {
      puVar12 = local_128;
      do {
        uVar4 = FUN_00401e60(lVar9,uVar1 / *puVar12,param_1,lVar7,uVar15);
        if (local_128 + (local_3e - 1) == puVar12) {
          if (uVar4 != uVar15) {
            return local_139;
          }
          break;
        }
        puVar12 = puVar12 + 1;
      } while (uVar4 != uVar15);
      uVar6 = uVar6 + *pbVar13;
      auVar2 = ZEXT816(uVar15) * ZEXT816(uVar6);
      uVar4 = SUB168(auVar2 >> 0x40,0);
      if (uVar4 == 0) {
        lVar9 = SUB168((ZEXT816(0) << 0x40 | auVar2 & (undefined  [16])0xffffffffffffffff) %
                       ZEXT816(param_1),0);
      }
      else {
        if (param_1 <= uVar4) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("(s1) < (n)","src/factor.c",0x4f4,"prime_p");
        }
        iVar10 = 0x40;
        uVar8 = 0;
        uVar4 = param_1;
        do {
          uVar11 = uVar4 << 0x3f;
          uVar4 = uVar4 >> 1;
          uVar8 = uVar8 >> 1 | uVar11;
          if (CONCAT88(uVar4,uVar8) <= auVar2) {
            auVar2 = auVar2 - CONCAT88(uVar4,uVar8);
          }
          lVar9 = SUB168(auVar2,0);
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
      cVar3 = FUN_00401ed0(param_1,lVar7,lVar9,uVar14,local_14c,uVar15);
      if (cVar3 == '\0') goto LAB_00403aac;
      pbVar13 = pbVar13 + 1;
      if (pbVar13 == &DAT_0040f23c) {
        uVar5 = dcgettext(0,"Lucas prime test failure.  This should not happen",5);
        error(0,0,uVar5);
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
  }
  return local_139;
}


char FUN_00403ae0(ulong param_1,ulong param_2)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  byte *pbVar12;
  long lVar13;
  bool bVar14;
  int iStack_1a8;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong auStack_130 [30];
  byte bStack_3e;
  
  uVar10 = param_1 - (param_2 == 0);
  uVar11 = param_2 - 1;
  if (uVar11 == 0) {
    lVar8 = 0;
    if (uVar10 != 0) {
      for (; (uVar10 >> lVar8 & 1) == 0; lVar8 = lVar8 + 1) {
      }
    }
    uStack_190 = 0;
    uStack_198 = uVar10 >> ((byte)lVar8 & 0x3f);
    iStack_1a8 = (int)lVar8 + 0x40;
  }
  else {
    lVar8 = 0;
    if (uVar11 != 0) {
      for (; (uVar11 >> lVar8 & 1) == 0; lVar8 = lVar8 + 1) {
      }
    }
    iStack_1a8 = (int)lVar8;
    bVar1 = (byte)lVar8;
    uStack_198 = uVar10 << (0x40 - bVar1 & 0x3f) | uVar11 >> (bVar1 & 0x3f);
    uStack_190 = uVar10 >> (bVar1 & 0x3f);
  }
  uVar9 = (ulong)(byte)(&DAT_0040c220)[(uint)(param_2 >> 1) & 0x7f];
  lVar8 = uVar9 * 2 - uVar9 * uVar9 * param_2;
  lVar8 = lVar8 * 2 - lVar8 * lVar8 * param_2;
  lVar13 = lVar8 * 2 - lVar8 * lVar8 * param_2;
  lVar8 = (ulong)(-(uint)(param_1 < 2) & 0x40) + 0x3f;
  uStack_170 = (ulong)(param_1 >= 2);
  uVar9 = (ulong)(param_1 < 2);
  do {
    uStack_178 = uVar9 * 2;
    uStack_170 = uStack_170 * 2 | uVar9 >> 0x3f;
    if ((param_1 < uStack_170) || ((param_1 == uStack_170 && (param_2 <= uStack_178)))) {
      bVar14 = uStack_178 < param_2;
      uStack_178 = uStack_178 - param_2;
      uStack_170 = (uStack_170 - param_1) - (ulong)bVar14;
    }
    lVar8 = lVar8 + -1;
    uVar9 = uStack_178;
  } while (lVar8 != -1);
  uStack_188 = uStack_178 * 2;
  uStack_180 = uStack_170 * 2 + (ulong)CARRY8(uStack_178,uStack_178);
  if ((param_1 < uStack_180) || ((param_1 == uStack_180 && (param_2 <= uStack_188)))) {
    bVar14 = uStack_188 < param_2;
    uStack_188 = uStack_188 - param_2;
    uStack_180 = (uStack_180 - param_1) - (ulong)bVar14;
  }
  uStack_168 = param_2;
  uStack_160 = param_1;
  cVar2 = FUN_00402240(&uStack_168,lVar13,&uStack_188,&uStack_198,iStack_1a8,&uStack_178);
  if (cVar2 == '\0') {
    return '\0';
  }
  pbVar12 = &DAT_0040efa0;
  FUN_00403210(uVar10,uVar11,&uStack_138);
  uVar9 = 2;
  while (auStack_130[0] != 0) {
    uStack_150 = 0;
    uVar6 = (ulong)(byte)(&DAT_0040c220)[(uint)(uStack_138 >> 1) & 0x7f];
    lVar8 = uVar6 * 2 - uVar6 * uVar6 * uStack_138;
    lVar8 = lVar8 * 2 - lVar8 * lVar8 * uStack_138;
    uStack_158 = uVar11 * (lVar8 * 2 - lVar8 * lVar8 * uStack_138);
    uStack_148 = FUN_004020d0(&uStack_140,&uStack_188,&uStack_158,&uStack_168,lVar13,&uStack_178);
    if (uStack_148 != uStack_178) break;
    bVar14 = uStack_140 != uStack_170;
    if (bStack_3e == 0) {
LAB_00404038:
      if (bVar14) {
        return cVar2;
      }
    }
    else if (uStack_140 != uStack_170) goto LAB_00403ca5;
LAB_00403e00:
    uVar9 = uVar9 + *pbVar12;
    uVar6 = 0;
    if (param_1 <= uVar9) {
      uVar6 = uVar9;
    }
    lVar8 = (-(ulong)(uVar9 < param_1) & 0xffffffffffffffc0) + 0x7f;
    uStack_180 = 0;
    if (uVar9 < param_1) {
      uStack_180 = uVar9;
    }
    do {
      uStack_188 = uVar6 * 2;
      uStack_180 = uStack_180 * 2 | uVar6 >> 0x3f;
      if ((param_1 < uStack_180) || ((param_1 == uStack_180 && (param_2 <= uStack_188)))) {
        bVar14 = uStack_188 < param_2;
        uStack_188 = uStack_188 - param_2;
        uStack_180 = (uStack_180 - param_1) - (ulong)bVar14;
      }
      lVar8 = lVar8 + -1;
      uVar6 = uStack_188;
    } while (lVar8 != -1);
    cVar3 = FUN_00402240(&uStack_168,lVar13,&uStack_188,&uStack_198,iStack_1a8,&uStack_178);
    if (cVar3 == '\0') {
      return '\0';
    }
    pbVar12 = pbVar12 + 1;
    if (pbVar12 == &DAT_0040f23c) {
      uVar5 = dcgettext(0,"Lucas prime test failure.  This should not happen",5);
      error(0,0,uVar5);
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  if (bStack_3e == 0) {
    return cVar2;
  }
LAB_00403ca5:
  lVar8 = 1;
  do {
    uVar6 = auStack_130[lVar8];
    uStack_158 = uVar10 << 0x3f | uVar11 >> 1;
    uStack_150 = uVar10 >> 1;
    if (uVar6 != 2) {
      uVar4 = (ulong)(byte)(&DAT_0040c220)[(uint)(uVar6 >> 1) & 0x7f];
      lVar7 = uVar4 * 2 - uVar4 * uVar4 * uVar6;
      lVar7 = lVar7 * 2 - lVar7 * lVar7 * uVar6;
      lVar7 = lVar7 * 2 - lVar7 * lVar7 * uVar6;
      uStack_158 = uVar11 * lVar7;
      if (uVar10 < uVar6) {
        uStack_150 = 0;
      }
      else {
        uStack_150 = lVar7 * (uVar10 - SUB168(ZEXT816(uStack_158) * ZEXT816(uVar6) >> 0x40,0));
      }
    }
    uStack_148 = FUN_004020d0(&uStack_140,&uStack_188,&uStack_158,&uStack_168,lVar13,&uStack_178);
    if (uStack_148 == uStack_178) {
      if ((uint)bStack_3e <= (uint)lVar8) {
        bVar14 = uStack_140 != uStack_170;
        goto LAB_00404038;
      }
      if (uStack_140 == uStack_170) goto LAB_00403e00;
    }
    else if ((uint)bStack_3e <= (uint)lVar8) {
      return cVar2;
    }
    lVar8 = lVar8 + 1;
  } while( true );
}


ulong FUN_00404050(ulong param_1,ulong param_2)

{
  byte bVar1;
  char cVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  byte *pbVar11;
  long lVar12;
  bool bVar13;
  int iStack_1a8;
  byte bStack_1a1;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong auStack_130 [30];
  byte bStack_3e;
  
  if (param_1 == 0) {
    if (param_2 < 2) {
      return 0;
    }
    if (param_2 < 0x17ded79) {
      return 1;
    }
    uVar9 = FUN_00403840(param_2);
    return uVar9;
  }
  uVar9 = param_1 - (param_2 == 0);
  uVar10 = param_2 - 1;
  if (uVar10 == 0) {
    lVar7 = 0;
    if (uVar9 != 0) {
      for (; (uVar9 >> lVar7 & 1) == 0; lVar7 = lVar7 + 1) {
      }
    }
    uStack_190 = 0;
    uStack_198 = uVar9 >> ((byte)lVar7 & 0x3f);
    iStack_1a8 = (int)lVar7 + 0x40;
  }
  else {
    lVar7 = 0;
    if (uVar10 != 0) {
      for (; (uVar10 >> lVar7 & 1) == 0; lVar7 = lVar7 + 1) {
      }
    }
    iStack_1a8 = (int)lVar7;
    bVar1 = (byte)lVar7;
    uStack_198 = uVar9 << (0x40 - bVar1 & 0x3f) | uVar10 >> (bVar1 & 0x3f);
    uStack_190 = uVar9 >> (bVar1 & 0x3f);
  }
  uVar8 = (ulong)(byte)(&DAT_0040c220)[(uint)(param_2 >> 1) & 0x7f];
  lVar7 = uVar8 * 2 - uVar8 * uVar8 * param_2;
  lVar7 = lVar7 * 2 - lVar7 * lVar7 * param_2;
  lVar12 = lVar7 * 2 - lVar7 * lVar7 * param_2;
  lVar7 = (ulong)(-(uint)(param_1 < 2) & 0x40) + 0x3f;
  uStack_170 = (ulong)(param_1 >= 2);
  uVar8 = (ulong)(param_1 < 2);
  do {
    uStack_178 = uVar8 * 2;
    uStack_170 = uStack_170 * 2 | uVar8 >> 0x3f;
    if ((param_1 < uStack_170) || ((param_1 == uStack_170 && (param_2 <= uStack_178)))) {
      bVar13 = uStack_178 < param_2;
      uStack_178 = uStack_178 - param_2;
      uStack_170 = (uStack_170 - param_1) - (ulong)bVar13;
    }
    lVar7 = lVar7 + -1;
    uVar8 = uStack_178;
  } while (lVar7 != -1);
  uStack_188 = uStack_178 * 2;
  uStack_180 = uStack_170 * 2 + (ulong)CARRY8(uStack_178,uStack_178);
  if ((param_1 < uStack_180) || ((param_1 == uStack_180 && (param_2 <= uStack_188)))) {
    bVar13 = uStack_188 < param_2;
    uStack_188 = uStack_188 - param_2;
    uStack_180 = (uStack_180 - param_1) - (ulong)bVar13;
  }
  uStack_168 = param_2;
  uStack_160 = param_1;
  bStack_1a1 = FUN_00402240(&uStack_168,lVar12,&uStack_188,&uStack_198,iStack_1a8,&uStack_178);
  if (bStack_1a1 == 0) {
LAB_00403ee6:
    return (ulong)bStack_1a1;
  }
  pbVar11 = &DAT_0040efa0;
  FUN_00403210(uVar9,uVar10,&uStack_138);
  uVar8 = 2;
  do {
    if (auStack_130[0] == 0) {
LAB_00403c97:
      if (bStack_3e != 0) {
LAB_00403ca5:
        lVar7 = 1;
        do {
          uVar5 = auStack_130[lVar7];
          uStack_158 = uVar9 << 0x3f | uVar10 >> 1;
          uStack_150 = uVar9 >> 1;
          if (uVar5 != 2) {
            uVar3 = (ulong)(byte)(&DAT_0040c220)[(uint)(uVar5 >> 1) & 0x7f];
            lVar6 = uVar3 * 2 - uVar3 * uVar3 * uVar5;
            lVar6 = lVar6 * 2 - lVar6 * lVar6 * uVar5;
            lVar6 = lVar6 * 2 - lVar6 * lVar6 * uVar5;
            uStack_158 = uVar10 * lVar6;
            if (uVar9 < uVar5) {
              uStack_150 = 0;
            }
            else {
              uStack_150 = lVar6 * (uVar9 - SUB168(ZEXT816(uStack_158) * ZEXT816(uVar5) >> 0x40,0));
            }
          }
          uStack_148 = FUN_004020d0(&uStack_140,&uStack_188,&uStack_158,&uStack_168,lVar12,
                                    &uStack_178);
          if (uStack_148 == uStack_178) {
            if ((uint)bStack_3e <= (uint)lVar7) {
              bVar13 = uStack_140 != uStack_170;
              goto LAB_00404038;
            }
            if (uStack_140 == uStack_170) goto LAB_00403e00;
          }
          else if ((uint)bStack_3e <= (uint)lVar7) break;
          lVar7 = lVar7 + 1;
        } while( true );
      }
      goto LAB_00403ee6;
    }
    uStack_150 = 0;
    uVar5 = (ulong)(byte)(&DAT_0040c220)[(uint)(uStack_138 >> 1) & 0x7f];
    lVar7 = uVar5 * 2 - uVar5 * uVar5 * uStack_138;
    lVar7 = lVar7 * 2 - lVar7 * lVar7 * uStack_138;
    uStack_158 = uVar10 * (lVar7 * 2 - lVar7 * lVar7 * uStack_138);
    uStack_148 = FUN_004020d0(&uStack_140,&uStack_188,&uStack_158,&uStack_168,lVar12,&uStack_178);
    if (uStack_148 != uStack_178) goto LAB_00403c97;
    bVar13 = uStack_140 != uStack_170;
    if (bStack_3e == 0) {
LAB_00404038:
      if (bVar13) goto LAB_00403ee6;
    }
    else if (uStack_140 != uStack_170) goto LAB_00403ca5;
LAB_00403e00:
    uVar8 = uVar8 + *pbVar11;
    uVar5 = 0;
    if (param_1 <= uVar8) {
      uVar5 = uVar8;
    }
    lVar7 = (-(ulong)(uVar8 < param_1) & 0xffffffffffffffc0) + 0x7f;
    uStack_180 = 0;
    if (uVar8 < param_1) {
      uStack_180 = uVar8;
    }
    do {
      uStack_188 = uVar5 * 2;
      uStack_180 = uStack_180 * 2 | uVar5 >> 0x3f;
      if ((param_1 < uStack_180) || ((param_1 == uStack_180 && (param_2 <= uStack_188)))) {
        bVar13 = uStack_188 < param_2;
        uStack_188 = uStack_188 - param_2;
        uStack_180 = (uStack_180 - param_1) - (ulong)bVar13;
      }
      lVar7 = lVar7 + -1;
      uVar5 = uStack_188;
    } while (lVar7 != -1);
    cVar2 = FUN_00402240(&uStack_168,lVar12,&uStack_188,&uStack_198,iStack_1a8,&uStack_178);
    if (cVar2 == '\0') {
      bStack_1a1 = 0;
      goto LAB_00403ee6;
    }
    pbVar11 = pbVar11 + 1;
    if (pbVar11 == &DAT_0040f23c) {
      uVar4 = dcgettext(0,"Lucas prime test failure.  This should not happen",5);
      error(0,0,uVar4);
                    /* WARNING: Subroutine does not return */
      abort();
    }
  } while( true );
}


void FUN_004040a0(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 local_128;
  long local_120;
  undefined8 local_118 [26];
  byte local_48 [26];
  byte local_2e;
  
  puVar2 = &local_128;
  FUN_00402640();
  FUN_004026f0(0x3a);
  FUN_00403210(param_1,param_2,&local_128);
  if (local_2e != 0) {
    puVar3 = local_118;
    do {
      uVar1 = 0;
      if (*(char *)((long)puVar2 + 0xe0) != '\0') {
        do {
          uVar1 = uVar1 + 1;
          FUN_004026f0(0x20);
          FUN_00402340(*puVar3,0);
        } while (uVar1 < *(byte *)((long)puVar2 + 0xe0));
      }
      puVar2 = (undefined8 *)((long)puVar2 + 1);
      puVar3 = puVar3 + 1;
    } while ((uint)((int)puVar2 - (int)&local_128) < (uint)local_2e);
  }
  if (local_120 != 0) {
    FUN_004026f0(0x20);
    FUN_00402640(local_120,local_128);
  }
  FUN_004026f0(10);
  return;
}


undefined8 FUN_00404170(char *param_1)

{
  char cVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  char *pcVar9;
  ulong uVar10;
  ulong uVar11;
  char *pcVar12;
  
  cVar1 = *param_1;
  while (cVar1 == ' ') {
    param_1 = param_1 + 1;
    cVar1 = *param_1;
  }
  pcVar12 = param_1 + 1;
  if (cVar1 == '+') {
    pcVar12 = param_1 + 2;
    param_1 = param_1 + 1;
  }
  bVar5 = true;
  pcVar9 = param_1;
  do {
    cVar1 = *pcVar9;
    if (cVar1 == 0) {
      if (!bVar5) {
        cVar1 = *param_1;
        if (cVar1 != '\0') {
          lVar8 = 0;
          uVar11 = 0;
          goto LAB_00404220;
        }
        lVar8 = 0;
        uVar11 = 0;
        goto LAB_00404295;
      }
      break;
    }
    bVar5 = false;
    pcVar9 = pcVar9 + 1;
  } while ((int)cVar1 - 0x30U < 10);
  uVar6 = FUN_00406f50();
  pcVar12 = "%s is not a valid positive integer";
  goto LAB_004041d8;
LAB_00404220:
  do {
    uVar3 = lVar8 * 2;
    uVar10 = lVar8 * 10;
    uVar4 = (uint)((ulong)lVar8 >> 0x20);
    lVar8 = ((int)cVar1 - 0x30) + uVar10;
    uVar2 = uVar11 * 10;
    uVar10 = (ulong)((uint)CARRY8((ulong)((int)cVar1 - 0x30),uVar10) +
                    ((uVar4 >> 0x1d) - ((int)uVar4 >> 0x1f)) + (uint)(uVar10 < uVar3));
    uVar11 = uVar10 + uVar2;
    if (CARRY8(uVar10,uVar2)) break;
    cVar1 = *pcVar12;
    if (cVar1 == '\0') {
      if (-1 < (long)uVar11) {
LAB_00404295:
        if (DAT_00613310 != '\0') {
          fwrite("[using single-precision arithmetic] ",1,0x24,stderr);
        }
        FUN_004040a0(uVar11,lVar8);
        return 1;
      }
      break;
    }
    pcVar12 = pcVar12 + 1;
  } while (uVar11 < 0x199999999999999a);
  uVar6 = FUN_00406f50();
  pcVar12 = "%s is too large";
LAB_004041d8:
  uVar7 = dcgettext(0,pcVar12,5);
  error(0,0,uVar7,uVar6);
  return 0;
}


void FUN_004042e0(int param_1)

{
  FILE *pFVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  byte **ppbVar5;
  undefined8 uVar7;
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
  byte **ppbVar6;
  
  uVar7 = DAT_00613328;
  bVar14 = 0;
  if (param_1 != 0) {
    uVar3 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(stderr,1,uVar3,uVar7);
    goto LAB_0040431f;
  }
  uVar3 = dcgettext(0,"Usage: %s [NUMBER]...\n  or:  %s OPTION\n",5);
  __printf_chk(1,uVar3,uVar7,uVar7);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "Print the prime factors of each specified integer NUMBER.  If none\nare specified on the command line, read them from standard input.\n\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"      --help     display this help and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"      --version  output version information and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  local_88 = &DAT_0040bd36;
  local_80 = "test invocation";
  local_78[0] = (byte *)0x40bdb0;
  local_78[1] = (byte *)0x40bd48;
  local_78[2] = (byte *)0x40bd5e;
  local_78[3] = (byte *)0x40bd68;
  local_78[4] = (byte *)0x40bd77;
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
    pbVar11 = *ppbVar5;
    bVar12 = false;
    bVar13 = pbVar11 == (byte *)0x0;
    if (bVar13) break;
    lVar9 = 7;
    pbVar10 = (byte *)"factor";
    do {
      if (lVar9 == 0) break;
      lVar9 = lVar9 + -1;
      bVar12 = *pbVar10 < *pbVar11;
      bVar13 = *pbVar10 == *pbVar11;
      pbVar10 = pbVar10 + (ulong)bVar14 * -2 + 1;
      pbVar11 = pbVar11 + (ulong)bVar14 * -2 + 1;
    } while (bVar13);
  } while ((!bVar12 && !bVar13) != bVar12);
  pcVar4 = (char *)ppbVar6[3];
  if ((byte *)pcVar4 == (byte *)0x0) {
    uVar7 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar7,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
      iVar2 = strncmp(pcVar4,"en_",3);
      if (iVar2 != 0) {
        pcVar4 = "factor";
        goto LAB_004045a3;
      }
    }
    pcVar4 = "factor";
    uVar7 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    pcVar8 = " invocation";
    __printf_chk(1,uVar7,"https://www.gnu.org/software/coreutils/","factor");
  }
  else {
    uVar7 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar7,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar8 = setlocale(5,(char *)0x0);
    if (pcVar8 != (char *)0x0) {
      iVar2 = strncmp(pcVar8,"en_",3);
      if (iVar2 != 0) {
LAB_004045a3:
        uVar7 = dcgettext(0,"Report %s translation bugs to <https://translationproject.org/team/>\n"
                          ,5);
        __printf_chk(1,uVar7,"factor");
      }
    }
    pcVar8 = " invocation";
    uVar7 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    __printf_chk(1,uVar7,"https://www.gnu.org/software/coreutils/","factor");
    if (pcVar4 != "factor") {
      pcVar8 = "";
    }
  }
  uVar7 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(1,uVar7,pcVar4,pcVar8);
LAB_0040431f:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}


void FUN_004045d0(undefined8 param_1)

{
  DAT_00613320 = param_1;
  return;
}


void FUN_004045e0(undefined param_1)

{
  DAT_00613318 = param_1;
  return;
}


void FUN_004045f0(void)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  iVar1 = FUN_004091b0(stdout);
  if (iVar1 != 0) {
    piVar2 = __errno_location();
    if ((DAT_00613318 == '\0') || (*piVar2 != 0x20)) {
      uVar3 = dcgettext(0,"write error",5);
      if (DAT_00613320 == 0) {
        error(0,*piVar2,"%s",uVar3);
      }
      else {
        uVar4 = FUN_00406da0();
        error(0,*piVar2,"%s: %s",uVar4,uVar3);
      }
      goto LAB_0040466e;
    }
  }
  iVar1 = FUN_004091b0(stderr);
  if (iVar1 == 0) {
    return;
  }
LAB_0040466e:
                    /* WARNING: Subroutine does not return */
  _exit(DAT_00613240);
}


long FUN_00404690(undefined4 param_1,long param_2,long param_3)

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
      lVar1 = FUN_004072e0(param_1,param_2,param_3);
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


char * FUN_00404710(ulong param_1,long param_2)

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


void FUN_00404760(byte *param_1)

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
        pbVar6 = &DAT_0040f330;
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
  DAT_00613328 = param_1;
  program_invocation_name = param_1;
  return;
}


void FUN_00404800(void)

{
                    /* WARNING: Subroutine does not return */
  __assert_fail("iter->cur.wc == 0","lib/mbuiter.h",0xb3,"mbuiter_multi_next");
}


ulong FUN_00404820(byte *param_1,undefined8 param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  size_t sVar5;
  ushort **ppuVar6;
  undefined8 uVar7;
  wint_t wVar8;
  ulong uVar9;
  undefined auStack_100 [48];
  code *pcStack_d0;
  byte *local_c0;
  char local_b8;
  mbstate_t local_b4;
  char local_ac;
  byte *local_a8;
  size_t local_a0;
  char local_98;
  wint_t local_94 [7];
  char local_78;
  mbstate_t local_74;
  undefined local_6c;
  byte *local_68;
  size_t local_60;
  undefined local_58;
  int local_54 [9];
  
  pcStack_d0 = (code *)0x404841;
  local_c0 = (byte *)FUN_004073a0(param_2,2);
LAB_00404850:
  if (*param_1 != 0) {
    while( true ) {
      pcStack_d0 = (code *)0x404862;
      pbVar4 = (byte *)FUN_0040a420(param_1,local_c0);
      if (pbVar4 == (byte *)0x0) goto LAB_004048c9;
      pcStack_d0 = (code *)0x40486f;
      sVar5 = __ctype_get_mb_cur_max();
      if (1 < sVar5) break;
      pcStack_d0 = (code *)0x40487f;
      sVar5 = strlen((char *)local_c0);
      if (pbVar4 <= param_1) {
LAB_0040489b:
        bVar1 = pbVar4[sVar5];
        if (bVar1 != 0) {
          pcStack_d0 = (code *)0x4048ad;
          ppuVar6 = __ctype_b_loc();
          if ((*(byte *)(*ppuVar6 + bVar1) & 8) != 0) goto LAB_004048ba;
        }
        uVar9 = 1;
        goto LAB_004048cc;
      }
      pcStack_d0 = (code *)0x40488e;
      ppuVar6 = __ctype_b_loc();
      if ((*(byte *)(*ppuVar6 + pbVar4[-1]) & 8) == 0) goto LAB_0040489b;
LAB_004048ba:
      if ((*pbVar4 == 0) || (param_1 = pbVar4 + 1, *param_1 == 0)) goto LAB_004048c9;
    }
    local_b8 = '\0';
    local_b4 = (mbstate_t)0x0;
    local_a8 = param_1;
    if (param_1 < pbVar4) {
      do {
        local_ac = '\0';
        if (local_b8 == '\0') {
          if ((*(uint *)(&DAT_00410680 + (ulong)(*local_a8 >> 5) * 4) >> (*local_a8 & 0x1f) & 1) ==
              0) {
            pcStack_d0 = (code *)0x404a28;
            iVar3 = mbsinit(&local_b4);
            if (iVar3 != 0) {
              local_b8 = '\x01';
              goto LAB_0040498f;
            }
            goto LAB_00405069;
          }
          local_a0 = 1;
          wVar8 = (wint_t)(char)*local_a8;
          local_98 = '\x01';
          local_94[0] = wVar8;
LAB_0040495d:
          local_ac = '\x01';
          if (wVar8 == 0) goto FUN_00401a40;
        }
        else {
LAB_0040498f:
          pcStack_d0 = (code *)0x404994;
          sVar5 = __ctype_get_mb_cur_max();
          pbVar2 = local_a8;
          pcStack_d0 = (code *)0x4049a4;
          uVar7 = FUN_00407340(local_a8,sVar5);
          pcStack_d0 = (code *)0x4049b5;
          local_a0 = FUN_00408fc0(local_94,pbVar2,uVar7,&local_b4);
          wVar8 = local_94[0];
          pbVar2 = local_a8;
          if (local_a0 == 0xffffffffffffffff) {
            local_98 = '\0';
            local_a0 = 1;
            local_a8 = pbVar2;
          }
          else {
            if (local_a0 != 0xfffffffffffffffe) {
              if (local_a0 == 0) {
                local_a0 = 1;
                if (*local_a8 != 0) goto LAB_00405082;
                if (local_94[0] != 0) goto LAB_0040509b;
              }
              local_98 = '\x01';
              pcStack_d0 = (code *)0x404a09;
              iVar3 = mbsinit(&local_b4);
              if (iVar3 != 0) {
                local_b8 = '\0';
              }
              goto LAB_0040495d;
            }
            pcStack_d0 = (code *)0x404a6d;
            local_a0 = strlen((char *)local_a8);
            local_98 = '\0';
            local_a8 = pbVar2;
            wVar8 = local_94[0];
          }
        }
        local_a8 = local_a8 + local_a0;
        local_ac = 0;
      } while (local_a8 < pbVar4);
      if (local_98 != '\0') {
        pcStack_d0 = (code *)0x404aa8;
        iVar3 = iswalnum(wVar8);
        uVar9 = (ulong)auStack_100 | (ulong)(iVar3 == 0);
        goto LAB_00404aae;
      }
    }
    uVar9 = 1;
LAB_00404aae:
    local_b8 = '\0';
    local_b4 = (mbstate_t)0x0;
    local_68 = local_c0;
    local_78 = '\0';
    local_74 = (mbstate_t)0x0;
    local_a8 = pbVar4;
    do {
      local_6c = 0;
      local_ac = '\0';
      if (local_78 == '\0') {
        if ((*(uint *)(&DAT_00410680 + (ulong)(*local_68 >> 5) * 4) >> (*local_68 & 0x1f) & 1) == 0)
        {
          pcStack_d0 = (code *)0x404df8;
          iVar3 = mbsinit(&local_74);
          if (iVar3 != 0) {
            local_78 = '\x01';
            goto LAB_00404bbd;
          }
          goto LAB_00405069;
        }
        local_60 = 1;
        local_54[0] = (int)(char)*local_68;
        local_58 = 1;
        wVar8 = local_94[0];
joined_r0x00404b31:
        local_94[0] = wVar8;
        if (local_54[0] == 0) goto LAB_00404c4b;
      }
      else {
LAB_00404bbd:
        pcStack_d0 = (code *)0x404bc2;
        sVar5 = __ctype_get_mb_cur_max();
        pbVar2 = local_68;
        pcStack_d0 = (code *)0x404bd2;
        uVar7 = FUN_00407340(local_68,sVar5);
        pcStack_d0 = (code *)0x404be3;
        local_60 = FUN_00408fc0(local_54,pbVar2,uVar7,&local_74);
        if (local_60 == 0xffffffffffffffff) {
          local_60 = 1;
          local_58 = 0;
        }
        else {
          if (local_60 != 0xfffffffffffffffe) {
            if (local_60 == 0) {
              local_60 = 1;
              if (*local_68 != 0) goto LAB_00405082;
              if (local_54[0] != 0) {
LAB_0040509b:
                    /* WARNING: Subroutine does not return */
                pcStack_d0 = (code *)0x4050b4;
                __assert_fail("iter->cur.wc == 0","lib/mbuiter.h",0xb3,"mbuiter_multi_next");
              }
            }
            local_58 = 1;
            pcStack_d0 = (code *)0x404c31;
            iVar3 = mbsinit(&local_74);
            wVar8 = local_94[0];
            if (iVar3 != 0) {
              local_78 = '\0';
            }
            goto joined_r0x00404b31;
          }
          pcStack_d0 = (code *)0x404e52;
          local_60 = strlen((char *)local_68);
          local_58 = 0;
        }
      }
      local_6c = 1;
      if (local_ac == '\0') {
        if (local_b8 == '\0') {
          if ((*(uint *)(&DAT_00410680 + (ulong)(*local_a8 >> 5) * 4) >> (*local_a8 & 0x1f) & 1) !=
              0) {
            local_a0 = 1;
            local_94[0] = (wint_t)(char)*local_a8;
            local_98 = '\x01';
            local_ac = '\x01';
            goto LAB_00404b88;
          }
          pcStack_d0 = (code *)0x404d3a;
          iVar3 = mbsinit(&local_b4);
          if (iVar3 == 0) goto LAB_00405069;
          local_b8 = '\x01';
        }
        pcStack_d0 = (code *)0x404d4c;
        sVar5 = __ctype_get_mb_cur_max();
        pbVar2 = local_a8;
        pcStack_d0 = (code *)0x404d5c;
        uVar7 = FUN_00407340(local_a8,sVar5);
        pcStack_d0 = (code *)0x404d6f;
        local_a0 = FUN_00408fc0(local_94,pbVar2,uVar7,&local_b4);
        if (local_a0 == 0xffffffffffffffff) {
          local_a0 = 1;
          local_98 = '\0';
        }
        else {
          if (local_a0 != 0xfffffffffffffffe) {
            if (local_a0 == 0) {
              local_a0 = 1;
              if (*local_a8 != 0) goto LAB_00405082;
              if (local_94[0] != 0) goto LAB_0040509b;
            }
            local_98 = '\x01';
            pcStack_d0 = (code *)0x404dc1;
            iVar3 = mbsinit(&local_b4);
            if (iVar3 != 0) {
              local_b8 = '\0';
            }
            local_ac = '\x01';
            goto LAB_00404b88;
          }
          pcStack_d0 = (code *)0x404e7a;
          local_a0 = strlen((char *)local_a8);
          local_98 = '\0';
        }
      }
      else if (local_98 != '\0') {
LAB_00404b88:
        if (local_94[0] == 0) {
FUN_00401a40:
                    /* WARNING: Subroutine does not return */
          pcStack_d0 = switchD_00405520::caseD_b;
          abort();
        }
      }
      local_a8 = local_a8 + local_a0;
      local_68 = local_68 + local_60;
    } while( true );
  }
LAB_004048c9:
  uVar9 = 0;
LAB_004048cc:
  pcStack_d0 = (code *)0x4048d6;
  free(local_c0);
  return uVar9 & 0xffffffff;
LAB_00404c4b:
  local_6c = 1;
  if (local_ac == '\0') {
    if (local_b8 == '\0') {
      if ((*(uint *)(&DAT_00410680 + (ulong)(*local_a8 >> 5) * 4) >> (*local_a8 & 0x1f) & 1) != 0) {
        local_a0 = 1;
        wVar8 = (wint_t)(char)*local_a8;
        local_98 = '\x01';
        local_ac = '\x01';
        local_94[0] = wVar8;
        goto LAB_00404c9c;
      }
      pcStack_d0 = (code *)0x404ea5;
      iVar3 = mbsinit(&local_b4);
      if (iVar3 == 0) goto LAB_00405069;
      local_b8 = '\x01';
    }
    pcStack_d0 = (code *)0x404eb7;
    sVar5 = __ctype_get_mb_cur_max();
    pbVar2 = local_a8;
    pcStack_d0 = (code *)0x404ec7;
    uVar7 = FUN_00407340(local_a8,sVar5);
    pcStack_d0 = (code *)0x404eda;
    local_a0 = FUN_00408fc0(local_94,pbVar2,uVar7,&local_b4);
    wVar8 = local_94[0];
    if (local_a0 == 0xffffffffffffffff) {
      local_a0 = 1;
      local_98 = '\0';
      local_ac = '\x01';
      goto LAB_00404ca0;
    }
    if (local_a0 == 0xfffffffffffffffe) {
      pcStack_d0 = (code *)0x405046;
      local_a0 = strlen((char *)local_a8);
      local_98 = '\0';
      local_ac = '\x01';
      wVar8 = local_94[0];
      goto LAB_00404ca0;
    }
    if (local_a0 != 0) {
LAB_00404f00:
      local_98 = '\x01';
      pcStack_d0 = (code *)0x404f0f;
      iVar3 = mbsinit(&local_b4);
      if (iVar3 != 0) {
        local_b8 = '\0';
      }
      local_ac = '\x01';
      goto LAB_00404c9c;
    }
    local_a0 = 1;
    if (*local_a8 != 0) goto LAB_00405082;
    if (local_94[0] == 0) goto LAB_00404f00;
LAB_0040501f:
    local_a0 = 1;
    pcStack_d0 = (code *)0x405024;
    FUN_00404800();
LAB_00405028:
    pcStack_d0 = (code *)0x405032;
    local_a0 = strlen((char *)local_a8);
  }
  else {
    if (local_98 == '\0') {
LAB_00404ca0:
      if (local_98 == '\0') goto LAB_00404cb2;
      pcStack_d0 = (code *)0x404cae;
      iVar3 = iswalnum(wVar8);
      if (iVar3 == 0) goto LAB_00404cb2;
    }
    else {
LAB_00404c9c:
      if (wVar8 != 0) goto LAB_00404ca0;
LAB_00404cb2:
      if ((char)uVar9 != '\0') goto LAB_004048cc;
    }
    local_b8 = '\0';
    local_b4 = (mbstate_t)0x0;
    local_ac = '\0';
    if ((*(uint *)(&DAT_00410680 + (ulong)(*pbVar4 >> 5) * 4) >> (*pbVar4 & 0x1f) & 1) == 0) {
      pcStack_d0 = (code *)0x404f48;
      local_a8 = pbVar4;
      iVar3 = mbsinit(&local_b4);
      if (iVar3 == 0) {
LAB_00405069:
                    /* WARNING: Subroutine does not return */
        pcStack_d0 = (code *)0x405082;
        __assert_fail("mbsinit (&iter->state)","lib/mbuiter.h",0x96,"mbuiter_multi_next");
      }
      local_b8 = '\x01';
      pcStack_d0 = (code *)0x404f5a;
      sVar5 = __ctype_get_mb_cur_max();
      pbVar2 = local_a8;
      pcStack_d0 = (code *)0x404f6a;
      uVar7 = FUN_00407340(local_a8,sVar5);
      pcStack_d0 = (code *)0x404f7b;
      local_a0 = FUN_00408fc0(local_94,pbVar2,uVar7,&local_b4);
      if (local_a0 == 0xffffffffffffffff) {
        local_a0 = 1;
        goto LAB_00404d1c;
      }
      if (local_a0 == 0xfffffffffffffffe) goto LAB_00405028;
      if (local_a0 == 0) {
        local_a0 = 1;
        if (*local_a8 != 0) {
LAB_00405082:
                    /* WARNING: Subroutine does not return */
          pcStack_d0 = (code *)0x40509b;
          __assert_fail("*iter->cur.ptr == \'\\0\'","lib/mbuiter.h",0xb2,"mbuiter_multi_next");
        }
        if (local_94[0] != 0) goto LAB_0040501f;
      }
      local_98 = '\x01';
      pcStack_d0 = (code *)0x404fc3;
      iVar3 = mbsinit(&local_b4);
      if (iVar3 != 0) {
        local_b8 = '\0';
      }
    }
    else {
      local_a0 = 1;
      local_94[0] = (wint_t)(char)*pbVar4;
      local_98 = '\x01';
      local_a8 = pbVar4;
    }
    local_ac = '\x01';
    if (local_94[0] == 0) goto LAB_004048c9;
  }
LAB_00404d1c:
  param_1 = pbVar4 + local_a0;
  goto LAB_00404850;
}


char * FUN_004050c0(char *param_1)

{
  char cVar1;
  char *__s;
  size_t sVar2;
  size_t sVar3;
  char *pcVar4;
  
  __s = (char *)dcgettext(0,param_1,5);
  if (param_1 != __s) {
    cVar1 = FUN_00404820(__s,param_1);
    if (cVar1 == '\0') {
      sVar2 = strlen(__s);
      sVar3 = strlen(param_1);
      pcVar4 = (char *)FUN_00407ee0(sVar2 + 4 + sVar3);
      __sprintf_chk(pcVar4,1,0xffffffffffffffff,"%s (%s)",__s,param_1);
      return pcVar4;
    }
  }
  return __s;
}


char * FUN_00405150(char *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  char *__s1;
  char *pcVar3;
  size_t sVar4;
  size_t sVar5;
  char *pcVar6;
  char *__ptr;
  void *pvVar7;
  char *pcVar8;
  char *__ptr_00;
  char *pcVar9;
  undefined8 *puVar10;
  
  __s1 = (char *)dcgettext(0,param_1,5);
  pcVar3 = (char *)FUN_00409270();
  iVar2 = FUN_00409150(pcVar3,"UTF-8");
  pcVar6 = __s1;
  if (iVar2 == 0) {
    if (param_2 == (char *)0x0) {
      pcVar3 = param_1;
      pcVar8 = (char *)0x0;
      pcVar9 = (char *)0x0;
    }
    else {
      pcVar3 = param_2;
      pcVar8 = (char *)0x0;
      pcVar9 = param_2;
    }
LAB_004051a1:
    iVar2 = strcmp(__s1,param_1);
    if (iVar2 == 0) {
      return pcVar3;
    }
    cVar1 = FUN_00404820(__s1,param_1);
    __ptr = param_2;
    __ptr_00 = (char *)0x0;
    if (cVar1 != '\0') goto joined_r0x004051e8;
LAB_004051c1:
    if (((__ptr == (char *)0x0) || (cVar1 = FUN_00404820(__s1,__ptr), cVar1 == '\0')) &&
       ((pcVar9 == (char *)0x0 || (cVar1 = FUN_00404820(__s1,pcVar9), cVar1 == '\0')))) {
      sVar4 = strlen(__s1);
      sVar5 = strlen(pcVar3);
      pcVar6 = (char *)FUN_00407ee0(sVar4 + 4 + sVar5);
      __sprintf_chk(pcVar6,1,0xffffffffffffffff,"%s (%s)",__s1,pcVar3);
      if (__ptr_00 != (char *)0x0) {
        free(__ptr_00);
      }
      goto joined_r0x004051e8;
    }
    __ptr = __ptr_00;
    if (__ptr_00 == (char *)0x0) goto joined_r0x004051e8;
  }
  else {
    __ptr = (char *)FUN_004081c0(param_2,"UTF-8",pcVar3);
    sVar4 = strlen(pcVar3);
    pvVar7 = (void *)FUN_00407ee0(sVar4 + 0xb);
    pvVar7 = memcpy(pvVar7,pcVar3,sVar4);
    puVar10 = (undefined8 *)(sVar4 + (long)pvVar7);
    *puVar10 = 0x4c534e4152542f2f;
    *(undefined2 *)(puVar10 + 1) = 0x5449;
    *(undefined *)((long)puVar10 + 10) = 0;
    pcVar3 = (char *)FUN_004081c0(param_2,"UTF-8",pvVar7);
    free(pvVar7);
    if (pcVar3 == (char *)0x0) {
      if (__ptr != (char *)0x0) goto LAB_00405334;
LAB_004053a5:
      param_2 = (char *)0x0;
      pcVar3 = param_1;
      pcVar8 = (char *)0x0;
      pcVar9 = (char *)0x0;
      goto LAB_004051a1;
    }
    pcVar8 = strchr(pcVar3,0x3f);
    if (pcVar8 == (char *)0x0) {
      pcVar8 = pcVar3;
      if (__ptr == (char *)0x0) {
        param_2 = (char *)0x0;
        pcVar9 = pcVar3;
        goto LAB_004051a1;
      }
      iVar2 = strcmp(__s1,param_1);
      if (iVar2 == 0) {
        if (__ptr == pcVar3) {
          return __ptr;
        }
        free(pcVar3);
        return __ptr;
      }
    }
    else {
      free(pcVar3);
      if (__ptr == (char *)0x0) goto LAB_004053a5;
LAB_00405334:
      iVar2 = strcmp(__s1,param_1);
      if (iVar2 == 0) {
        return __ptr;
      }
      pcVar8 = (char *)0x0;
    }
    cVar1 = FUN_00404820(__s1,param_1);
    __ptr_00 = __ptr;
    pcVar3 = __ptr;
    pcVar9 = pcVar8;
    if (cVar1 == '\0') goto LAB_004051c1;
  }
  free(__ptr);
joined_r0x004051e8:
  if (pcVar8 != (char *)0x0) {
    free(pcVar8);
  }
  return pcVar6;
}


char * FUN_004053d0(char *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  byte *pbVar3;
  
  pcVar2 = (char *)dcgettext(0,param_1,5);
  if (param_1 == pcVar2) {
    pbVar3 = (byte *)FUN_00409270();
    if ((*pbVar3 & 0xdf) == 0x55) {
      if (((((pbVar3[1] & 0xdf) != 0x54) || ((pbVar3[2] & 0xdf) != 0x46)) || (pbVar3[3] != 0x2d)) ||
         ((pbVar3[4] != 0x38 || (pbVar3[5] != 0)))) {
LAB_004054a8:
        pcVar2 = "\"";
        if (param_2 != 9) {
          pcVar2 = "\'";
        }
        return pcVar2;
      }
      cVar1 = *pcVar2;
      pcVar2 = &DAT_0040f3b0;
      if (cVar1 != '`') {
        pcVar2 = &DAT_0040f3a5;
      }
    }
    else {
      if (((((*pbVar3 & 0xdf) != 0x47) || ((pbVar3[1] & 0xdf) != 0x42)) || (pbVar3[2] != 0x31)) ||
         (((pbVar3[3] != 0x38 || (pbVar3[4] != 0x30)) ||
          ((pbVar3[5] != 0x33 || ((pbVar3[6] != 0x30 || (pbVar3[7] != 0)))))))) goto LAB_004054a8;
      cVar1 = *pcVar2;
      pcVar2 = &DAT_0040f3ac;
      if (cVar1 != '`') {
        pcVar2 = &DAT_0040f3a9;
      }
    }
  }
  return pcVar2;
}


ulong FUN_004054d0(undefined *param_1,ulong param_2,char *param_3,ulong param_4,int param_5,
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
LAB_00406121:
    if (param_2 != 0) {
      bVar3 = false;
      local_5b = false;
      bVar2 = true;
      local_70 = 0;
      goto LAB_00405d56;
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
      goto LAB_00406121;
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
      param_8 = (char *)FUN_004053d0(&DAT_0040f3b4,param_5);
      param_9 = (char *)FUN_004053d0("\'");
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
LAB_00405568:
  uVar22 = 0;
  bVar5 = local_5b;
LAB_00405578:
  bVar23 = param_4 != uVar22;
  if (param_4 == 0xffffffffffffffff) {
    bVar23 = param_3[uVar22] != '\0';
  }
  bVar26 = bVar6;
  if (!bVar23) goto LAB_00405cf8;
  bVar20 = (bool)(param_5 != 2 & bVar6);
  __s1 = (byte *)(param_3 + uVar22);
  uVar16 = uVar15;
  bVar4 = bVar3;
  if (bVar20) {
    if (local_a0 == 0) {
LAB_00405c70:
      uVar19 = (ulong)*__s1;
      switch(uVar19) {
      case 0:
        goto switchD_00405c82_caseD_0;
      default:
        bVar20 = false;
        goto switchD_00405aee_caseD_1;
      case 7:
        bVar17 = 0x61;
        goto LAB_00405985;
      case 8:
        bVar17 = 0x62;
        break;
      case 9:
switchD_00405c82_caseD_9:
        bVar17 = 0x74;
        break;
      case 10:
switchD_00405c82_caseD_a:
        bVar17 = 0x6e;
        break;
      case 0xb:
switchD_00405c82_caseD_b:
        bVar17 = 0x76;
        goto LAB_00405985;
      case 0xc:
switchD_00405c82_caseD_c:
        bVar17 = 0x66;
LAB_00405985:
        if (local_5c) {
          bVar25 = false;
          goto LAB_004058d8;
        }
LAB_00405990:
        bVar23 = false;
        goto LAB_0040574b;
      case 0xd:
        bVar20 = false;
switchD_00405668_caseD_d:
        bVar25 = param_5 == 2;
        uVar19 = 0xd;
        bVar13 = 0x72;
        goto LAB_004058a0;
      case 0x20:
        bVar25 = false;
LAB_00405cca:
        uVar19 = 0x20;
        goto LAB_00405c92;
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
switchD_00405668_caseD_21:
        bVar25 = false;
        goto LAB_004058ab;
      case 0x23:
      case 0x7e:
        bVar26 = false;
LAB_00405caa:
        if (uVar22 == 0) {
          bVar25 = false;
          bVar23 = bVar20;
          bVar20 = bVar26;
          goto LAB_004056b8;
        }
        bVar23 = false;
        goto LAB_004056cf;
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
LAB_00405c92:
        bVar24 = false;
        bVar23 = bVar20;
        bVar20 = bVar25;
        goto LAB_004056d1;
      case 0x27:
        bVar20 = false;
        goto switchD_00405aee_caseD_27;
      case 0x3f:
        bVar20 = false;
        goto switchD_00405aee_caseD_3f;
      case 0x5c:
        bVar20 = false;
        goto switchD_00405668_caseD_5c;
      case 0x7b:
      case 0x7d:
        bVar20 = false;
        goto switchD_00405aee_caseD_7b;
      }
      bVar25 = false;
      bVar23 = false;
      goto joined_r0x004058c7;
    }
    if ((param_4 == 0xffffffffffffffff) && (1 < local_a0)) {
      param_4 = strlen(param_3);
    }
    if ((param_4 < uVar22 + local_a0) || (iVar7 = memcmp(__s1,local_78,local_a0), iVar7 != 0))
    goto LAB_00405c70;
    if (!local_5c) {
      uVar19 = (ulong)*__s1;
      bVar25 = bVar20;
      switch(uVar19) {
      case 0:
        goto switchD_00405668_caseD_0;
      default:
        goto switchD_00405aee_caseD_1;
      case 7:
        bVar17 = 0x61;
        goto LAB_00405990;
      case 8:
        bVar25 = false;
        bVar23 = false;
        bVar17 = 0x62;
        break;
      case 9:
        goto switchD_00405c82_caseD_9;
      case 10:
        goto switchD_00405c82_caseD_a;
      case 0xb:
        goto switchD_00405c82_caseD_b;
      case 0xc:
        goto switchD_00405c82_caseD_c;
      case 0xd:
        goto switchD_00405668_caseD_d;
      case 0x20:
        goto LAB_00405cca;
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
        goto switchD_00405668_caseD_21;
      case 0x23:
      case 0x7e:
        bVar26 = bVar20;
        goto LAB_00405caa;
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
        goto LAB_00405c92;
      case 0x27:
        goto switchD_00405aee_caseD_27;
      case 0x3f:
        goto switchD_00405aee_caseD_3f;
      case 0x5c:
        goto switchD_00405668_caseD_5c;
      case 0x7b:
      case 0x7d:
        goto switchD_00405aee_caseD_7b;
      }
      goto LAB_00405712;
    }
    goto LAB_004058ea;
  }
  uVar19 = (ulong)*__s1;
  switch(uVar19) {
  case 0:
    if (bVar6) {
switchD_00405c82_caseD_0:
      if (!local_5c) {
        bVar20 = false;
switchD_00405668_caseD_0:
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
            goto LAB_004057c8;
          }
LAB_00405a0a:
          param_1[uVar16] = 0x5c;
          uVar15 = uVar16;
        }
        else if (uVar15 < uVar9) goto LAB_00405a0a;
        uVar16 = uVar15 + 1;
        bVar24 = bVar23;
        if (param_5 == 2) {
          bVar17 = 0x30;
          bVar23 = false;
          bVar4 = bVar3;
          goto LAB_004057c8;
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
LAB_00405a49:
        bVar17 = (byte)uVar19;
        bVar23 = false;
        uVar15 = uVar16;
        bVar4 = bVar3;
        if ((bool)(bVar6 ^ 1U | bVar26)) goto LAB_004057c8;
        goto LAB_004056d1;
      }
      bVar26 = param_5 == 2;
      goto LAB_004058dc;
    }
    if ((param_6 & 1) == 0) {
      bVar25 = param_5 == 2;
      uVar19 = 0;
      bVar23 = false;
      bVar20 = false;
      goto LAB_004056b8;
    }
    uVar22 = uVar22 + 1;
    goto LAB_00405578;
  default:
switchD_00405aee_caseD_1:
    bVar25 = bVar6;
    if (sVar8 != 1) {
      local_40[0] = (mbstate_t)0x0;
      if (param_4 == 0xffffffffffffffff) {
        param_4 = strlen(param_3);
      }
      uVar21 = 0;
      do {
        uVar1 = uVar22 + uVar21;
        lVar11 = FUN_00408fc0(&local_44,param_3 + uVar1,param_4 - uVar1,local_40);
        if (lVar11 == 0) break;
        if (lVar11 == -1) {
          bVar23 = false;
          goto LAB_004063fa;
        }
        if (lVar11 == -2) {
          if ((param_4 <= uVar1) || (param_3[uVar1] == '\0')) goto LAB_00406537;
          goto LAB_00406527;
        }
        if (((param_5 == 2) && (local_5c)) && (lVar11 != 1)) {
          pcVar12 = param_3 + uVar1 + 1;
          do {
            if (((byte)(*pcVar12 + 0xa5U) < 0x22) &&
               ((1L << (*pcVar12 + 0xa5U & 0x3f) & 0x20000002bU) != 0)) {
              param_5 = 2;
              goto LAB_004058dc;
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
      goto LAB_004063fa;
    }
    ppuVar10 = __ctype_b_loc();
    uVar21 = 1;
    bVar25 = ((*ppuVar10)[uVar19] & 0x4000) == 0;
    bVar23 = !bVar25;
    bVar25 = (bool)(bVar25 & bVar6);
    goto LAB_00405ac4;
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
    goto LAB_00405b02;
  case 10:
    uVar19 = 10;
    bVar13 = 0x6e;
    goto LAB_00405b02;
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
LAB_00405b02:
    bVar25 = param_5 == 2;
    bVar20 = (bool)(local_5c & bVar25);
    if (bVar20) {
LAB_00405b1a:
      param_5 = 2;
      goto LAB_004058dc;
    }
    break;
  case 0x20:
    uVar19 = 0x20;
    goto LAB_004056a6;
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
LAB_004056a6:
    bVar25 = param_5 == 2;
    if ((local_5c) && (bVar25)) goto LAB_00405b1a;
    goto LAB_004056b8;
  case 0x23:
  case 0x7e:
LAB_0040569d:
    bVar25 = param_5 == 2;
    if (uVar22 == 0) goto LAB_004056a6;
    goto LAB_004058ab;
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
    goto switchD_00405aee_caseD_25;
  case 0x27:
switchD_00405aee_caseD_27:
    bVar5 = bVar23;
    if (param_5 != 2) {
      bVar25 = false;
      uVar19 = 0x27;
      goto LAB_004056b8;
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
      goto LAB_004057c8;
    }
    goto LAB_004058dc;
  case 0x3f:
switchD_00405aee_caseD_3f:
    if (param_5 == 2) {
      if (!local_5c) {
        bVar17 = 0x3f;
        bVar24 = false;
        bVar23 = false;
        goto LAB_004057c8;
      }
      goto LAB_004058dc;
    }
    if (param_5 != 5) {
      bVar25 = param_5 == 2;
      uVar19 = 0x3f;
      bVar23 = false;
      goto LAB_004056b8;
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
        goto LAB_00405a49;
      }
      goto LAB_004058ea;
    }
    bVar25 = false;
    uVar19 = 0x3f;
    bVar23 = false;
    goto LAB_004056b8;
  case 0x5c:
    if (param_5 != 2) {
switchD_00405668_caseD_5c:
      uVar19 = 0x5c;
      bVar17 = 0x5c;
      bVar13 = 0x5c;
      bVar25 = (bool)(bVar6 & local_5c & local_a0 != 0);
      if (!bVar25) break;
      uVar22 = uVar22 + 1;
      bVar23 = false;
      goto LAB_004057e4;
    }
    if (local_5c) goto LAB_004058dc;
    uVar22 = uVar22 + 1;
    bVar23 = false;
    bVar17 = 0x5c;
    goto LAB_004057e4;
  case 0x7b:
  case 0x7d:
switchD_00405aee_caseD_7b:
    bVar24 = param_4 != 1;
    if (param_4 == 0xffffffffffffffff) {
      bVar24 = param_3[1] != '\0';
    }
    bVar25 = param_5 == 2;
    if (!bVar24) goto LAB_0040569d;
    goto LAB_004058ab;
  }
LAB_004058a0:
  if (!bVar6) {
LAB_004058ab:
    bVar23 = false;
    goto LAB_004056b8;
  }
  bVar23 = false;
  bVar17 = bVar13;
  goto joined_r0x004058c7;
LAB_00405cf8:
  if ((uVar15 == 0) && ((bool)(local_5c & param_5 == 2))) {
    param_5 = 2;
LAB_004058dc:
    if (bVar26) {
      param_5 = 4;
    }
LAB_004058ea:
    uVar9 = FUN_004054d0(param_1,uVar9,param_3,param_4,param_5,param_6 & 0xfffffffd,0,param_8,
                         param_9);
    return uVar9;
  }
  bVar26 = (bool)(param_5 == 2 & (local_5c ^ 1U));
  bVar23 = (bool)(local_5c ^ 1U);
  if ((!bVar26) || (bVar23 = bVar26, !bVar5)) {
LAB_004065cd:
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
    uVar9 = FUN_004054d0(param_1,local_70,param_3,param_4,5,param_6,param_7,param_8,param_9);
    return uVar9;
  }
  local_5b = uVar9 == 0 && local_70 != 0;
  param_2 = local_70;
  bVar23 = bVar5;
  if (uVar9 != 0 || local_70 == 0) goto LAB_004065cd;
LAB_00405d56:
  *param_1 = 0x27;
  param_5 = 2;
  uVar15 = 1;
  local_78 = "\'";
  local_a0 = 1;
  local_5c = false;
  uVar9 = param_2;
  goto LAB_00405568;
  while (__s1[uVar21] != 0) {
LAB_00406527:
    uVar21 = uVar21 + 1;
    if (param_4 <= uVar22 + uVar21) break;
  }
LAB_00406537:
  bVar23 = false;
LAB_004063fa:
  if (1 < uVar21) {
LAB_00405fbe:
    bVar26 = false;
    uVar21 = uVar21 + uVar22;
    uVar16 = uVar22;
    do {
      bVar17 = (byte)uVar19;
      if (bVar25) {
        bVar26 = param_5 == 2;
        if (local_5c) goto LAB_004058dc;
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
        if (uVar21 <= uVar22) goto LAB_0040575d;
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
        if (uVar21 <= uVar22) goto LAB_004057e4;
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
LAB_00405ac4:
  if (bVar25) {
    bVar23 = false;
    bVar25 = bVar6;
    goto LAB_00405fbe;
  }
switchD_00405aee_caseD_25:
  bVar25 = param_5 == 2;
LAB_004056b8:
  bVar17 = (byte)uVar19;
  bVar24 = (bool)((bVar6 ^ 1U | bVar25) ^ 1 | local_5c);
  bVar26 = bVar20;
  if (bVar24) {
LAB_004056cf:
    bVar24 = false;
    bVar20 = bVar26;
LAB_004056d1:
    bVar17 = (byte)uVar19;
    uVar16 = uVar15;
    bVar4 = bVar3;
    if ((param_7 == 0) || ((*(uint *)(param_7 + (uVar19 >> 5) * 4) >> (bVar17 & 0x1f) & 1) == 0))
    goto LAB_004057c8;
    bVar25 = param_5 == 2;
  }
  else {
LAB_004057c8:
    bVar25 = param_5 == 2;
    uVar15 = uVar16;
    bVar3 = bVar4;
    if (!bVar20) {
      uVar22 = uVar22 + 1;
      bVar3 = (bool)((bVar24 ^ 1U) & bVar4);
LAB_004057e4:
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
      goto LAB_0040575d;
    }
  }
joined_r0x004058c7:
  if (local_5c) {
LAB_004058d8:
    bVar26 = (bool)(bVar6 & bVar25);
    goto LAB_004058dc;
  }
LAB_00405712:
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
LAB_0040574b:
  if (uVar15 < uVar9) {
    param_1[uVar15] = 0x5c;
  }
  uVar15 = uVar15 + 1;
  uVar22 = uVar22 + 1;
  bVar4 = bVar3;
LAB_0040575d:
  bVar3 = bVar4;
  if (uVar15 < uVar9) {
    param_1[uVar15] = bVar17;
  }
  uVar15 = uVar15 + 1;
  if (!bVar23) {
    bVar2 = false;
  }
  goto LAB_00405578;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00406700(int param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

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
      FUN_00408130();
    }
    if (PTR_DAT_00613298 == &DAT_006132a0) {
      puVar8 = (undefined4 *)FUN_00407f40(0);
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
      puVar8 = (undefined4 *)FUN_00407f40(PTR_DAT_00613298);
      PTR_DAT_00613298 = (undefined *)puVar8;
    }
    memset(puVar8 + (long)DAT_006132b0 * 4,0,(long)((param_1 + 1) - DAT_006132b0) << 4);
    DAT_006132b0 = param_1 + 1;
  }
  uVar2 = param_4[1];
  puVar10 = (ulong *)(puVar8 + (long)param_1 * 4);
  uVar4 = *puVar10;
  __ptr = (undefined *)puVar10[1];
  uVar9 = FUN_004054d0(__ptr,uVar4,param_2,param_3,*param_4,uVar2 | 1,param_4 + 2,
                       *(undefined8 *)(param_4 + 10),*(undefined8 *)(param_4 + 0xc));
  if (uVar4 <= uVar9) {
    uVar9 = uVar9 + 1;
    *puVar10 = uVar9;
    if (__ptr != &DAT_00613340) {
      free(__ptr);
    }
    __ptr = (undefined *)FUN_00407ee0(uVar9);
    uVar3 = *param_4;
    puVar10[1] = (ulong)__ptr;
    FUN_004054d0(__ptr,uVar9,param_2,param_3,uVar3,uVar2 | 1,param_4 + 2,
                 *(undefined8 *)(param_4 + 10),*(undefined8 *)(param_4 + 0xc));
  }
  *piVar7 = iVar1;
  return __ptr;
}


void FUN_004068a0(undefined *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_00613440;
  }
  FUN_004080e0(param_1,0x38);
  *piVar2 = iVar1;
  return;
}


undefined4 FUN_004068e0(undefined4 *param_1)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)&DAT_00613440;
  }
  return *param_1;
}


void FUN_004068f0(undefined4 *param_1,undefined4 param_2)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)&DAT_00613440;
  }
  *param_1 = param_2;
  return;
}


uint FUN_00406900(undefined *param_1,byte param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_00613440;
  }
  uVar1 = *(uint *)(param_1 + (ulong)(param_2 >> 5) * 4 + 8);
  uVar2 = uVar1 >> (param_2 & 0x1f);
  *(uint *)(param_1 + (ulong)(param_2 >> 5) * 4 + 8) =
       ((param_3 ^ uVar2) & 1) << (param_2 & 0x1f) ^ uVar1;
  return uVar2 & 1;
}


undefined4 FUN_00406940(undefined *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_00613440;
  }
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_1 + 4) = param_2;
  return uVar1;
}


void FUN_00406960(undefined4 *param_1,long param_2,long param_3)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)&DAT_00613440;
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


void FUN_00406990(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 *param_5)

{
  int iVar1;
  int *piVar2;
  
  if (param_5 == (undefined4 *)0x0) {
    param_5 = (undefined4 *)&DAT_00613440;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  FUN_004054d0(param_1,param_2,param_3,param_4,*param_5,param_5[1],param_5 + 2,
               *(undefined8 *)(param_5 + 10),*(undefined8 *)(param_5 + 0xc));
  *piVar2 = iVar1;
  return;
}


undefined8 FUN_00406a10(undefined8 param_1,undefined8 param_2,long *param_3,undefined4 *param_4)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  
  if (param_4 == (undefined4 *)0x0) {
    param_4 = (undefined4 *)&DAT_00613440;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  uVar5 = (uint)(param_3 == (long *)0x0) | param_4[1];
  lVar3 = FUN_004054d0(0,0,param_1,param_2,*param_4,uVar5,param_4 + 2,*(undefined8 *)(param_4 + 10),
                       *(undefined8 *)(param_4 + 0xc));
  uVar4 = FUN_00407ee0(lVar3 + 1);
  FUN_004054d0(uVar4,lVar3 + 1,param_1,param_2,*param_4,uVar5,param_4 + 2,
               *(undefined8 *)(param_4 + 10),*(undefined8 *)(param_4 + 0xc));
  *piVar2 = iVar1;
  if (param_3 != (long *)0x0) {
    *param_3 = lVar3;
  }
  return uVar4;
}


void FUN_00406b00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00406a10(param_1,param_2,0,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406b10(void)

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
  if (*(undefined **)(__ptr_00 + 8) != &DAT_00613340) {
    free(*(undefined **)(__ptr_00 + 8));
    _DAT_006132a0 = 0x100;
    PTR_DAT_006132a8 = &DAT_00613340;
  }
  if (__ptr_00 != &DAT_006132a0) {
    free(__ptr_00);
    PTR_DAT_00613298 = &DAT_006132a0;
  }
  DAT_006132b0 = 1;
  return;
}


void FUN_00406bb0(undefined8 param_1,undefined8 param_2)

{
  FUN_00406700(param_1,param_2,0xffffffffffffffff,&DAT_00613440);
  return;
}


void FUN_00406bd0(void)

{
  FUN_00406700();
  return;
}


void FUN_00406be0(undefined8 param_1)

{
  FUN_00406700(0,param_1,0xffffffffffffffff,&DAT_00613440);
  return;
}


void FUN_00406c00(undefined8 param_1,undefined8 param_2)

{
  FUN_00406700(0,param_1,param_2,&DAT_00613440);
  return;
}


void FUN_00406c20(undefined8 param_1,int param_2,undefined8 param_3)

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
    FUN_00406700(param_1,param_3,0xffffffffffffffff,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00406c90(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

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
    FUN_00406700(param_1,param_3,param_4,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00406d00(undefined4 param_1,undefined8 param_2)

{
  FUN_00406c20(0,param_1,param_2);
  return;
}


void FUN_00406d10(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00406c90(0,param_1,param_2,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406d20(undefined8 param_1,undefined8 param_2,byte param_3)

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
  
  local_18 = DAT_00613470;
  local_48 = _DAT_00613440;
  uStack_40 = uRam0000000000613448;
  local_38 = _DAT_00613450;
  uStack_30 = uRam0000000000613458;
  puVar1 = (uint *)((long)&uStack_40 + (ulong)(param_3 >> 5) * 4);
  local_28 = _DAT_00613460;
  uStack_20 = uRam0000000000613468;
  uVar2 = *puVar1;
  *puVar1 = (~(uVar2 >> (param_3 & 0x1f)) & 1) << (param_3 & 0x1f) ^ uVar2;
  FUN_00406700(0,param_1,param_2,&local_48);
  return;
}


void FUN_00406d90(undefined8 param_1,char param_2)

{
  FUN_00406d20(param_1,0xffffffffffffffff,(int)param_2);
  return;
}


void FUN_00406da0(undefined8 param_1)

{
  FUN_00406d20(param_1,0xffffffffffffffff,0x3a);
  return;
}


void FUN_00406dc0(undefined8 param_1,undefined8 param_2)

{
  FUN_00406d20(param_1,param_2,0x3a);
  return;
}


void FUN_00406dd0(undefined8 param_1,int param_2,undefined8 param_3)

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
    FUN_00406700(param_1,param_3,0xffffffffffffffff,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406e40(undefined8 param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5
                 )

{
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  long lStack_20;
  long local_18;
  
  uStack_40 = uRam0000000000613448;
  local_38 = _DAT_00613450;
  uStack_30 = uRam0000000000613458;
  local_28 = _DAT_00613460;
  lStack_20 = uRam0000000000613468;
  local_18 = DAT_00613470;
  local_48 = CONCAT44((int)((ulong)_DAT_00613440 >> 0x20),10);
  if ((param_2 != 0) && (param_3 != 0)) {
    lStack_20 = param_2;
    local_18 = param_3;
    FUN_00406700(param_1,param_4,param_5,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00406eb0(void)

{
  FUN_00406e40();
  return;
}


void FUN_00406ec0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00406e40(0,param_1,param_2,param_3,0xffffffffffffffff);
  return;
}


void FUN_00406ee0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00406e40(0,param_1,param_2,param_3,param_4);
  return;
}


void FUN_00406f00(void)

{
  FUN_00406700();
  return;
}


void FUN_00406f10(undefined8 param_1,undefined8 param_2)

{
  FUN_00406700(0,param_1,param_2,&DAT_00613260);
  return;
}


void FUN_00406f30(undefined8 param_1,undefined8 param_2)

{
  FUN_00406700(param_1,param_2,0xffffffffffffffff,&DAT_00613260);
  return;
}


void FUN_00406f50(undefined8 param_1)

{
  FUN_00406700(0,param_1,0xffffffffffffffff,&DAT_00613260);
  return;
}


void FUN_00406f70(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


ulong FUN_00406f80(_IO_FILE *param_1,byte *param_2,long param_3,ulong *param_4)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  byte *pbVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined local_58 [16];
  undefined local_48 [16];
  
  local_58 = (undefined  [16])0x0;
  local_48 = (undefined  [16])0x0;
  if (param_3 == 0) goto LAB_00406ffc;
  pbVar4 = param_2 + param_3;
  do {
    bVar1 = *param_2;
    param_2 = param_2 + 1;
    *(ulong *)(local_58 + (bVar1 >> 3 & 0x18)) =
         *(ulong *)(local_58 + (bVar1 >> 3 & 0x18)) | 1L << (bVar1 & 0x3f);
  } while (pbVar4 != param_2);
  pbVar4 = (byte *)param_1->_IO_read_ptr;
  if (param_1->_IO_read_end <= pbVar4) goto LAB_00407006;
LAB_00406fe0:
  param_1->_IO_read_ptr = (char *)(pbVar4 + 1);
  uVar6 = (ulong)*pbVar4;
LAB_00406feb:
  if ((*(ulong *)(local_58 + ((ulong)(long)(int)uVar6 >> 6) * 8) >> (uVar6 & 0x3f) & 1) == 0)
  goto LAB_00407014;
LAB_00406ffc:
  pbVar4 = (byte *)param_1->_IO_read_ptr;
  if (param_1->_IO_read_end <= pbVar4) goto LAB_00407006;
  goto LAB_00406fe0;
LAB_00407006:
  uVar2 = __uflow(param_1);
  uVar6 = (ulong)uVar2;
  if ((int)uVar2 < 0) {
LAB_00407014:
    uVar3 = param_4[1];
    uVar8 = *param_4;
    uVar7 = 0;
    goto LAB_0040705c;
  }
  goto LAB_00406feb;
LAB_0040705c:
  iVar5 = (int)uVar6;
  if ((iVar5 < 0) && (uVar7 == 0)) {
    return 0xffffffffffffffff;
  }
  if (uVar7 == uVar8) {
    if (uVar3 == 0) {
      if (uVar7 == 0) {
        uVar8 = 0x80;
      }
      else if ((long)uVar7 < 0) goto LAB_004070ea;
    }
    else {
      if (0x5555555555555553 < uVar7) {
LAB_004070ea:
                    /* WARNING: Subroutine does not return */
        FUN_00408130();
      }
      uVar8 = uVar7 + 1 + (uVar7 >> 1);
    }
    uVar3 = FUN_00407f40(uVar3,uVar8);
  }
  if ((iVar5 < 0) ||
     ((*(ulong *)(local_58 + ((ulong)(long)iVar5 >> 6) * 8) >> (uVar6 & 0x3f) & 1) != 0)) {
    *(undefined *)(uVar3 + uVar7) = 0;
    param_4[1] = uVar3;
    *param_4 = uVar8;
    return uVar7;
  }
  *(undefined *)(uVar3 + uVar7) = (char)uVar6;
  uVar7 = uVar7 + 1;
  pbVar4 = (byte *)param_1->_IO_read_ptr;
  if (pbVar4 < param_1->_IO_read_end) {
    param_1->_IO_read_ptr = (char *)(pbVar4 + 1);
    uVar6 = (ulong)*pbVar4;
  }
  else {
    uVar2 = __uflow(param_1);
    uVar6 = (ulong)uVar2;
  }
  goto LAB_0040705c;
}


ulong FUN_00407100(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5,void **param_6)

{
  long lVar1;
  void *__ptr;
  void *pvVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  size_t __n;
  undefined8 local_48;
  void *local_40;
  
  if (param_2 == 0) {
    lVar4 = 0x200;
    uVar6 = 0x40;
  }
  else {
    uVar6 = param_2 + 1;
    lVar4 = uVar6 * 8;
    if ((lVar4 < 0) || (uVar6 >> 0x3d != 0)) {
LAB_0040714a:
                    /* WARNING: Subroutine does not return */
      FUN_00408130();
    }
  }
  lVar1 = FUN_00407ee0(lVar4);
  uVar5 = 0;
  __ptr = (void *)FUN_00407ee0(lVar4);
  local_48 = 0;
  local_40 = (void *)0x0;
  do {
    lVar4 = FUN_00406f80(param_1,param_3,param_4,&local_48);
    if (uVar6 <= uVar5) {
      if (lVar1 == 0) {
        if (uVar6 == 0) {
          lVar3 = 0x80;
          uVar6 = 0x10;
        }
        else {
          lVar3 = uVar6 << 3;
          if ((lVar3 < 0) || (uVar6 >> 0x3d != 0)) goto LAB_0040714a;
        }
      }
      else {
        if (0xaaaaaaaaaaaaaa9 < uVar6) goto LAB_0040714a;
        uVar6 = uVar6 + 1 + (uVar6 >> 1);
        lVar3 = uVar6 * 8;
      }
      lVar1 = FUN_00407f40(lVar1,lVar3);
      __ptr = (void *)FUN_00407f40(__ptr,lVar3);
    }
    if (lVar4 == -1) {
      *(undefined8 *)(lVar1 + uVar5 * 8) = 0;
      *(undefined8 *)((long)__ptr + uVar5 * 8) = 0;
      free(local_40);
      *param_5 = lVar1;
      if (param_6 == (void **)0x0) {
        free(__ptr);
      }
      else {
        *param_6 = __ptr;
      }
      return uVar5;
    }
    __n = lVar4 + 1;
    if ((long)__n < 0) goto LAB_0040714a;
    pvVar2 = (void *)FUN_00407ee0(__n);
    *(long *)((long)__ptr + uVar5 * 8) = lVar4;
    pvVar2 = memcpy(pvVar2,local_40,__n);
    *(void **)(lVar1 + uVar5 * 8) = pvVar2;
    uVar5 = uVar5 + 1;
  } while( true );
}


ssize_t FUN_004072e0(int param_1,void *param_2,ulong param_3)

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


long FUN_00407340(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_00409040(param_1,0,param_2);
  if (lVar1 != 0) {
    param_2 = (lVar1 - param_1) + 1;
  }
  return param_2;
}


void FUN_00407380(void)

{
                    /* WARNING: Subroutine does not return */
  __assert_fail("iter->cur.wc == 0","lib/mbiter.h",0xaa,"mbiter_multi_next");
}


uint * FUN_004073a0(char *param_1,int param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 *param_5,undefined8 param_6)

{
  byte bVar1;
  ushort *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  size_t sVar7;
  ushort **ppuVar8;
  undefined8 uVar9;
  char *pcVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  uint *puVar15;
  undefined8 uVar16;
  uint *puVar17;
  FILE *__stream;
  uint *unaff_R13;
  uint *puVar18;
  bool bVar19;
  char cVar20;
  bool bVar21;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  mbstate_t local_7c;
  undefined local_74;
  uint *local_70;
  long local_68;
  char local_60;
  wint_t local_5c;
  
  puVar6 = (uint *)strdup(param_1);
  if (puVar6 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00408130();
  }
  sVar7 = __ctype_get_mb_cur_max();
  if (sVar7 < 2) {
    puVar17 = puVar6;
    if (param_2 != 0) {
      bVar1 = *(byte *)puVar6;
      if (bVar1 != 0) {
        ppuVar8 = __ctype_b_loc();
        do {
          if ((*(byte *)((long)*ppuVar8 + (ulong)bVar1 * 2 + 1) & 0x20) == 0) break;
          puVar17 = (uint *)((long)puVar17 + 1);
          bVar1 = *(byte *)puVar17;
        } while (bVar1 != 0);
      }
      sVar7 = strlen((char *)puVar17);
      memmove(puVar6,puVar17,sVar7 + 1);
      puVar17 = puVar6;
      if (param_2 == 1) {
        return puVar6;
      }
    }
    do {
      puVar15 = puVar17;
      uVar3 = *puVar15 + 0xfefefeff & ~*puVar15;
      uVar4 = uVar3 & 0x80808080;
      puVar17 = puVar15 + 1;
    } while (uVar4 == 0);
    bVar21 = (uVar3 & 0x8080) == 0;
    if (bVar21) {
      uVar4 = uVar4 >> 0x10;
    }
    if (bVar21) {
      puVar17 = (uint *)((long)puVar15 + 6);
    }
    puVar17 = (uint *)((long)puVar17 + (-4 - (ulong)CARRY1((byte)uVar4,(byte)uVar4)));
    if (puVar6 <= puVar17) {
      ppuVar8 = __ctype_b_loc();
      puVar2 = *ppuVar8;
      do {
        if ((*(byte *)((long)puVar2 + (ulong)*(byte *)puVar17 * 2 + 1) & 0x20) == 0) {
          return puVar6;
        }
        *(byte *)puVar17 = 0;
        puVar17 = (uint *)((long)puVar17 + -1);
      } while (puVar6 <= puVar17);
    }
  }
  else {
    puVar17 = puVar6;
    if (param_2 != 0) {
      do {
        puVar15 = puVar17;
        uVar3 = *puVar15 + 0xfefefeff & ~*puVar15;
        uVar4 = uVar3 & 0x80808080;
        puVar17 = puVar15 + 1;
      } while (uVar4 == 0);
      bVar21 = false;
      bVar19 = (uVar3 & 0x8080) == 0;
      local_7c = (mbstate_t)0x0;
      if (bVar19) {
        uVar4 = uVar4 >> 0x10;
      }
      if (bVar19) {
        puVar17 = (uint *)((long)puVar15 + 6);
      }
      puVar17 = (uint *)((long)puVar17 + (-3 - (ulong)CARRY1((byte)uVar4,(byte)uVar4)));
      puVar15 = puVar6;
      while (local_74 = 0, local_70 = puVar15, puVar15 < puVar17) {
        local_74 = 0;
        if (bVar21) {
LAB_004077f9:
          __stream = (FILE *)&stack0xffffffffffffffa4;
          local_68 = FUN_00408fc0(__stream,puVar15,(long)puVar17 - (long)puVar15,&local_7c);
          puVar18 = local_70;
          if (local_68 == -1) {
            local_68 = 1;
            local_60 = '\0';
            local_74 = 1;
            puVar15 = local_70;
            break;
          }
          if (local_68 == -2) {
            local_60 = '\0';
            local_74 = 1;
            local_68 = (long)puVar17 - (long)local_70;
            puVar15 = local_70;
            break;
          }
          if (local_68 == 0) {
            local_68 = 1;
            if (*(byte *)local_70 != 0) goto LAB_0040791e;
            if (local_5c != 0) goto LAB_00407937;
          }
          local_60 = '\x01';
          iVar5 = mbsinit(&local_7c);
          if (iVar5 != 0) {
            bVar21 = false;
          }
        }
        else {
          if ((*(uint *)(&DAT_00410680 + (ulong)(*(byte *)puVar15 >> 5) * 4) >>
               (*(byte *)puVar15 & 0x1f) & 1) == 0) {
            iVar5 = mbsinit(&local_7c);
            if (iVar5 != 0) {
              bVar21 = true;
              goto LAB_004077f9;
            }
            goto LAB_00407905;
          }
          local_68 = 1;
          local_5c = (wint_t)(char)*(byte *)puVar15;
          local_60 = '\x01';
          puVar18 = puVar15;
        }
        local_74 = 1;
        iVar5 = iswspace(local_5c);
        puVar15 = puVar18;
        if (iVar5 == 0) break;
        puVar15 = (uint *)((long)puVar18 + local_68);
      }
      sVar7 = strlen((char *)puVar15);
      memmove(puVar6,puVar15,sVar7 + 1);
      puVar17 = puVar6;
      if (param_2 == 1) {
        return puVar6;
      }
    }
    do {
      puVar15 = puVar17;
      uVar3 = *puVar15 + 0xfefefeff & ~*puVar15;
      uVar4 = uVar3 & 0x80808080;
      puVar17 = puVar15 + 1;
    } while (uVar4 == 0);
    bVar21 = false;
    bVar19 = (uVar3 & 0x8080) == 0;
    local_7c = (mbstate_t)0x0;
    if (bVar19) {
      uVar4 = uVar4 >> 0x10;
    }
    if (bVar19) {
      puVar17 = (uint *)((long)puVar15 + 6);
    }
    puVar17 = (uint *)((long)puVar17 + (-3 - (ulong)CARRY1((byte)uVar4,(byte)uVar4)));
    cVar20 = '\0';
    local_70 = puVar6;
    if (puVar6 < puVar17) {
LAB_00407472:
      do {
        puVar15 = local_70;
        local_74 = 0;
        if (bVar21) {
LAB_00407547:
          __stream = (FILE *)&stack0xffffffffffffffa4;
          local_68 = FUN_00408fc0(__stream,puVar15,(long)puVar17 - (long)puVar15,&local_7c);
          puVar18 = local_70;
          if (local_68 == -1) {
            local_60 = '\0';
            local_68 = 1;
            puVar15 = (uint *)((long)local_70 + 1);
          }
          else if (local_68 == -2) {
            local_60 = '\0';
            local_68 = (long)puVar17 - (long)local_70;
            puVar15 = puVar17;
          }
          else {
            if (local_68 == 0) {
              local_68 = 1;
              if (*(byte *)local_70 != 0) {
LAB_0040791e:
                local_68 = 1;
                    /* WARNING: Subroutine does not return */
                __assert_fail("*iter->cur.ptr == \'\\0\'","lib/mbiter.h",0xa9,"mbiter_multi_next");
              }
              if (local_5c != 0) goto LAB_00407937;
            }
            local_60 = '\x01';
            puVar15 = (uint *)(local_68 + (long)local_70);
            iVar5 = mbsinit(&local_7c);
            if (iVar5 != 0) {
              bVar21 = false;
            }
          }
        }
        else {
          if ((*(uint *)(&DAT_00410680 + (ulong)(*(byte *)local_70 >> 5) * 4) >>
               (*(byte *)local_70 & 0x1f) & 1) == 0) {
            iVar5 = mbsinit(&local_7c);
            if (iVar5 == 0) {
LAB_00407905:
                    /* WARNING: Subroutine does not return */
              __assert_fail("mbsinit (&iter->state)","lib/mbiter.h",0x8e,"mbiter_multi_next");
            }
            bVar21 = true;
            goto LAB_00407547;
          }
          local_68 = 1;
          local_5c = (wint_t)(char)*(byte *)local_70;
          local_60 = '\x01';
          puVar15 = (uint *)((long)local_70 + 1);
          puVar18 = local_70;
        }
        local_74 = 1;
        if (cVar20 == '\0') {
          cVar20 = '\x01';
          if (local_60 != '\0') {
            iVar5 = iswspace(local_5c);
            cVar20 = iVar5 == 0;
          }
LAB_0040745f:
          local_70 = puVar15;
          if (puVar17 <= puVar15) break;
          goto LAB_00407472;
        }
        if (cVar20 == '\x01') {
          if ((local_60 != '\0') && (iVar5 = iswspace(local_5c), iVar5 != 0)) {
            cVar20 = '\x02';
            unaff_R13 = puVar18;
          }
          goto LAB_0040745f;
        }
        if ((cVar20 != '\x02') || (local_60 == '\0')) {
          cVar20 = '\x01';
          goto LAB_0040745f;
        }
        iVar5 = iswspace(local_5c);
        if (iVar5 == 0) {
          cVar20 = '\x01';
        }
        local_70 = puVar15;
      } while (puVar15 < puVar17);
      if (cVar20 == '\x02') {
        *(byte *)unaff_R13 = 0;
      }
    }
  }
  return puVar6;
LAB_00407937:
  local_68 = 1;
  FUN_00407380();
  if (puVar15 == (uint *)0x0) {
    __fprintf_chk();
  }
  else {
    __fprintf_chk();
  }
  uVar9 = dcgettext(0,&DAT_00410135,5);
  __fprintf_chk(__stream,1,"Copyright %s %d Free Software Foundation, Inc.",uVar9,0x7e1);
  pcVar10 = (char *)dcgettext(0,
                              "\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n"
                              ,5);
  fputs_unlocked(pcVar10,__stream);
  switch(param_6) {
  case 0:
                    /* WARNING: Subroutine does not return */
    abort();
  case 1:
    uVar9 = *param_5;
    uVar12 = dcgettext(0,"Written by %s.\n",5);
    puVar6 = (uint *)__fprintf_chk(__stream,1,uVar12,uVar9);
    return puVar6;
  case 2:
    uVar9 = param_5[1];
    uVar12 = *param_5;
    uVar13 = dcgettext(0,"Written by %s and %s.\n",5);
    puVar6 = (uint *)__fprintf_chk(__stream,1,uVar13,uVar12,uVar9);
    return puVar6;
  case 3:
    uVar9 = param_5[2];
    uVar12 = param_5[1];
    uVar13 = *param_5;
    uVar14 = dcgettext(0,"Written by %s, %s, and %s.\n",5);
    puVar6 = (uint *)__fprintf_chk(__stream,1,uVar14,uVar13,uVar12,uVar9);
    return puVar6;
  case 4:
    puVar6 = (uint *)param_5[3];
    uVar9 = param_5[2];
    uVar12 = param_5[1];
    uVar13 = *param_5;
    uVar14 = dcgettext(0,"Written by %s, %s, %s,\nand %s.\n",5);
    goto LAB_00407bbc;
  case 5:
    puVar6 = (uint *)param_5[3];
    uVar9 = param_5[2];
    uVar12 = param_5[1];
    uVar13 = *param_5;
    uVar14 = dcgettext(0,"Written by %s, %s, %s,\n%s, and %s.\n",5);
LAB_00407bbc:
    __fprintf_chk(__stream,1,uVar14,uVar13,uVar12,uVar9);
    return puVar6;
  case 6:
    uStack_e0 = param_5[1];
    uVar12 = param_5[5];
    uVar13 = param_5[4];
    uVar14 = param_5[3];
    uVar9 = param_5[2];
    uVar16 = *param_5;
    uVar11 = dcgettext(0,"Written by %s, %s, %s,\n%s, %s, and %s.\n",5);
    goto LAB_00407c59;
  case 7:
    uVar9 = param_5[2];
    uVar12 = param_5[5];
    uVar13 = param_5[4];
    uVar14 = param_5[3];
    uStack_e0 = param_5[1];
    uVar16 = *param_5;
    uVar11 = dcgettext(0,"Written by %s, %s, %s,\n%s, %s, %s, and %s.\n",5);
LAB_00407c59:
    puVar6 = (uint *)__fprintf_chk(__stream,1,uVar11,uVar16,uStack_e0,uVar9,uVar14,uVar13,uVar12);
    return puVar6;
  case 8:
    uStack_d0 = param_5[7];
    uStack_e0 = param_5[2];
    uStack_d8 = param_5[1];
    uVar9 = param_5[6];
    uVar12 = param_5[5];
    uVar13 = param_5[4];
    uVar14 = param_5[3];
    uVar16 = *param_5;
    uVar11 = dcgettext(0,"Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n",5);
    goto LAB_00407a3a;
  case 9:
    uStack_d0 = param_5[7];
    pcVar10 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n";
    uStack_e0 = param_5[2];
    uStack_d8 = param_5[1];
    uVar9 = param_5[6];
    uVar12 = param_5[5];
    uVar13 = param_5[4];
    uVar14 = param_5[3];
    uVar16 = *param_5;
    break;
  default:
    uStack_d0 = param_5[7];
    pcVar10 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n";
    uStack_e0 = param_5[2];
    uStack_d8 = param_5[1];
    uVar9 = param_5[6];
    uVar12 = param_5[5];
    uVar13 = param_5[4];
    uVar14 = param_5[3];
    uVar16 = *param_5;
  }
  uVar11 = dcgettext(0,pcVar10,5);
LAB_00407a3a:
  puVar6 = (uint *)__fprintf_chk(__stream,1,uVar11,uVar16,uStack_d8,uStack_e0,uVar14,uVar13,uVar12,
                                 uVar9,uStack_d0);
  return puVar6;
}


undefined8
FUN_00407940(FILE *param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5,
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
  uVar1 = dcgettext(0,&DAT_00410135,5);
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
    goto LAB_00407bbc;
  case 5:
    uVar1 = param_5[3];
    uVar4 = param_5[2];
    uVar5 = param_5[1];
    uVar6 = *param_5;
    uVar7 = dcgettext(0,"Written by %s, %s, %s,\n%s, and %s.\n",5);
LAB_00407bbc:
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
    goto LAB_00407c59;
  case 7:
    uVar1 = param_5[2];
    uVar4 = param_5[5];
    uVar5 = param_5[4];
    uVar6 = param_5[3];
    local_58 = param_5[1];
    uVar7 = *param_5;
    uVar3 = dcgettext(0,"Written by %s, %s, %s,\n%s, %s, %s, and %s.\n",5);
LAB_00407c59:
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
    goto LAB_00407a3a;
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
LAB_00407a3a:
  uVar1 = __fprintf_chk(param_1,1,uVar3,uVar7,local_50,local_58,uVar6,uVar5,uVar4,uVar1,local_48);
  return uVar1;
}


long FUN_00407d20(FILE *param_1,long param_2,undefined8 param_3,undefined8 param_4,long *param_5)

{
  undefined8 uVar1;
  char *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  lVar6 = 0;
  lVar3 = *param_5;
  while (lVar3 != 0) {
    lVar6 = lVar6 + 1;
    lVar3 = param_5[lVar6];
  }
  if (param_2 == 0) {
    __fprintf_chk(param_1,1,"%s %s\n",param_3,param_4);
  }
  else {
    __fprintf_chk(param_1,1,"%s (%s) %s\n",param_2,param_3,param_4);
  }
  uVar1 = dcgettext(0,&DAT_00410135,5);
  __fprintf_chk(param_1,1,"Copyright %s %d Free Software Foundation, Inc.",uVar1,0x7e1);
  pcVar2 = (char *)dcgettext(0,
                             "\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n"
                             ,5);
  fputs_unlocked(pcVar2,param_1);
  switch(lVar6) {
  case 0:
                    /* WARNING: Subroutine does not return */
    abort();
  case 1:
    lVar3 = *param_5;
    uVar1 = dcgettext(0,"Written by %s.\n",5);
    lVar3 = __fprintf_chk(param_1,1,uVar1,lVar3);
    return lVar3;
  case 2:
    lVar3 = param_5[1];
    lVar6 = *param_5;
    uVar1 = dcgettext(0,"Written by %s and %s.\n",5);
    lVar3 = __fprintf_chk(param_1,1,uVar1,lVar6,lVar3);
    return lVar3;
  case 3:
    lVar3 = param_5[2];
    lVar6 = param_5[1];
    lVar7 = *param_5;
    uVar1 = dcgettext(0,"Written by %s, %s, and %s.\n",5);
    lVar3 = __fprintf_chk(param_1,1,uVar1,lVar7,lVar6,lVar3);
    return lVar3;
  case 4:
    lVar3 = param_5[3];
    lVar6 = param_5[2];
    lVar7 = param_5[1];
    lVar4 = *param_5;
    uVar1 = dcgettext(0,"Written by %s, %s, %s,\nand %s.\n",5);
    goto LAB_00407bbc;
  case 5:
    lVar3 = param_5[3];
    lVar6 = param_5[2];
    lVar7 = param_5[1];
    lVar4 = *param_5;
    uVar1 = dcgettext(0,"Written by %s, %s, %s,\n%s, and %s.\n",5);
LAB_00407bbc:
    __fprintf_chk(param_1,1,uVar1,lVar4,lVar7,lVar6);
    return lVar3;
  case 6:
    lStack_58 = param_5[1];
    lVar6 = param_5[5];
    lVar7 = param_5[4];
    lVar4 = param_5[3];
    lVar3 = param_5[2];
    lVar5 = *param_5;
    uVar1 = dcgettext(0,"Written by %s, %s, %s,\n%s, %s, and %s.\n",5);
    goto LAB_00407c59;
  case 7:
    lVar3 = param_5[2];
    lVar6 = param_5[5];
    lVar7 = param_5[4];
    lVar4 = param_5[3];
    lStack_58 = param_5[1];
    lVar5 = *param_5;
    uVar1 = dcgettext(0,"Written by %s, %s, %s,\n%s, %s, %s, and %s.\n",5);
LAB_00407c59:
    lVar3 = __fprintf_chk(param_1,1,uVar1,lVar5,lStack_58,lVar3,lVar4,lVar7,lVar6);
    return lVar3;
  case 8:
    lStack_48 = param_5[7];
    lStack_58 = param_5[2];
    lStack_50 = param_5[1];
    lVar3 = param_5[6];
    lVar6 = param_5[5];
    lVar7 = param_5[4];
    lVar4 = param_5[3];
    lVar5 = *param_5;
    uVar1 = dcgettext(0,"Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n",5);
    goto LAB_00407a3a;
  case 9:
    lStack_48 = param_5[7];
    pcVar2 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n";
    lStack_58 = param_5[2];
    lStack_50 = param_5[1];
    lVar3 = param_5[6];
    lVar6 = param_5[5];
    lVar7 = param_5[4];
    lVar4 = param_5[3];
    lVar5 = *param_5;
    break;
  default:
    lStack_48 = param_5[7];
    pcVar2 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n";
    lStack_58 = param_5[2];
    lStack_50 = param_5[1];
    lVar3 = param_5[6];
    lVar6 = param_5[5];
    lVar7 = param_5[4];
    lVar4 = param_5[3];
    lVar5 = *param_5;
  }
  uVar1 = dcgettext(0,pcVar2,5);
LAB_00407a3a:
  lVar3 = __fprintf_chk(param_1,1,uVar1,lVar5,lStack_50,lStack_58,lVar4,lVar7,lVar6,lVar3,lStack_48)
  ;
  return lVar3;
}


void FUN_00407d40(void)

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
  FUN_00407940();
  return;
}


void FUN_00407da0(void)

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
  FUN_00407940();
  return;
}


void FUN_00407e60(void)

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


void FUN_00407ee0(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00408130();
  }
  return;
}


void FUN_00407f00(ulong param_1,ulong param_2)

{
  if ((-1 < SUB168(ZEXT816(param_1) * ZEXT816(param_2),0)) &&
     (SUB168(ZEXT816(param_1) * ZEXT816(param_2) >> 0x40,0) == 0)) {
    FUN_00407ee0();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00408130();
}


void thunk_FUN_00407ee0(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00408130();
  }
  return;
}


void * FUN_00407f40(void *param_1,size_t param_2)

{
  void *pvVar1;
  
  if ((param_2 == 0) && (param_1 != (void *)0x0)) {
    free(param_1);
    return (void *)0x0;
  }
  pvVar1 = realloc(param_1,param_2);
  if ((pvVar1 == (void *)0x0) && (param_2 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00408130();
  }
  return pvVar1;
}


void FUN_00407f80(undefined8 param_1,ulong param_2,ulong param_3)

{
  if ((-1 < SUB168(ZEXT816(param_2) * ZEXT816(param_3),0)) &&
     (SUB168(ZEXT816(param_2) * ZEXT816(param_3) >> 0x40,0) == 0)) {
    FUN_00407f40();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00408130();
}


void FUN_00407fb0(long param_1,ulong *param_2,ulong param_3)

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
    if ((SUB168(ZEXT816(uVar2) * ZEXT816(param_3),0) < 0) || (uVar3 != 0)) goto LAB_0040800b;
  }
  else {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x5555555555555554);
    uVar3 = SUB168(auVar1 % ZEXT816(param_3),0);
    if (SUB168(auVar1 / ZEXT816(param_3),0) <= uVar2) {
LAB_0040800b:
                    /* WARNING: Subroutine does not return */
      FUN_00408130(param_1,param_2,uVar3);
    }
    uVar2 = (uVar2 >> 1) + 1 + uVar2;
  }
  *param_2 = uVar2;
  FUN_00407f40(param_1,uVar2 * param_3);
  return;
}


void FUN_00408040(long param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (param_1 == 0) {
    if (uVar1 == 0) {
      *param_2 = 0x80;
      FUN_00407f40(0,0x80);
      return;
    }
    if ((long)uVar1 < 0) goto LAB_0040808a;
  }
  else {
    if (0x5555555555555553 < uVar1) {
LAB_0040808a:
                    /* WARNING: Subroutine does not return */
      FUN_00408130();
    }
    uVar1 = (uVar1 >> 1) + 1 + uVar1;
  }
  *param_2 = uVar1;
  FUN_00407f40(param_1,uVar1);
  return;
}


void FUN_00408090(size_t param_1)

{
  void *__s;
  
  __s = (void *)FUN_00407ee0();
  memset(__s,0,param_1);
  return;
}


void FUN_004080b0(size_t param_1,ulong param_2)

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
  FUN_00408130();
}


void FUN_004080e0(void *param_1,size_t param_2)

{
  void *__dest;
  
  __dest = (void *)FUN_00407ee0(param_2);
  memcpy(__dest,param_1,param_2);
  return;
}


void FUN_00408110(char *param_1)

{
  void *__dest;
  size_t sVar1;
  
  sVar1 = strlen(param_1);
  __dest = (void *)FUN_00407ee0(sVar1 + 1);
  memcpy(__dest,param_1,sVar1 + 1);
  return;
}


void FUN_00408130(void)

{
  undefined8 uVar1;
  
  uVar1 = dcgettext(0,"memory exhausted",5);
  error(DAT_00613240,0,"%s",uVar1);
                    /* WARNING: Subroutine does not return */
  abort();
}


int FUN_00408170(void)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_0040b2f0();
  if (iVar1 < 0) {
    piVar2 = __errno_location();
    if (*piVar2 == 0xc) {
                    /* WARNING: Subroutine does not return */
      FUN_00408130();
    }
  }
  return iVar1;
}


long FUN_00408190(void)

{
  long lVar1;
  int *piVar2;
  
  lVar1 = FUN_0040b540();
  if (lVar1 == 0) {
    piVar2 = __errno_location();
    if (*piVar2 == 0xc) {
                    /* WARNING: Subroutine does not return */
      FUN_00408130();
    }
  }
  return lVar1;
}


long FUN_004081c0(void)

{
  long lVar1;
  int *piVar2;
  
  lVar1 = FUN_0040b710();
  if (lVar1 == 0) {
    piVar2 = __errno_location();
    if (*piVar2 == 0xc) {
                    /* WARNING: Subroutine does not return */
      FUN_00408130();
    }
  }
  return lVar1;
}


void FUN_004081f0(long param_1,int *param_2)

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
      if (iVar3 <= iVar8) goto LAB_0040826c;
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
      if (iVar9 <= iVar3) goto LAB_0040826c;
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
LAB_0040826c:
  param_2[0xc] = iVar2;
  param_2[0xb] = iVar1 + (iVar2 - iVar3);
  return;
}


int FUN_004082d0(int param_1,undefined8 *param_2,char *param_3,char **param_4,undefined4 *param_5,
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
      if ((iVar5 == 0) && (sVar7 = strlen(__s1_00), sVar7 == sVar15)) goto LAB_004084f0;
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
            if (local_70 == (char *)0x0) goto LAB_00408430;
          }
          else if (local_70 == (char *)0x0) {
            local_70 = (char *)calloc((long)iVar5,1);
            if (local_70 == (char *)0x0) {
              bVar3 = true;
              goto LAB_00408430;
            }
            bVar4 = true;
            local_70[(int)local_44] = '\x01';
          }
          local_70[lVar16] = '\x01';
        }
      }
LAB_00408430:
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
LAB_004084f0:
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


uint FUN_004088f0(uint param_1,undefined8 *param_2,char *param_3,long param_4,undefined8 param_5,
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
LAB_0040893a:
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
          goto LAB_00408a3d;
        }
        pbVar8 = *(byte **)(param_7 + 8);
      }
      param_7[10] = 0;
    }
LAB_00408a3d:
    param_7[6] = 1;
    cVar2 = *param_3;
LAB_00408a48:
    if (cVar2 == ':') {
      uVar3 = 0;
    }
    if (pbVar8 == (byte *)0x0) goto LAB_004089b8;
LAB_00408a5c:
    if (*pbVar8 == 0) goto LAB_004089b8;
  }
  else {
    if (param_7[6] == 0) goto LAB_0040893a;
    cVar2 = *param_3;
    pbVar8 = *(byte **)(param_7 + 8);
    if ((cVar2 - 0x2bU & 0xfd) != 0) goto LAB_00408a48;
    pcVar4 = param_3 + 1;
    param_3 = param_3 + 1;
    if (*pcVar4 == ':') {
      uVar3 = 0;
    }
    if (pbVar8 != (byte *)0x0) goto LAB_00408a5c;
LAB_004089b8:
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
        FUN_004081f0(param_2,param_7);
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
LAB_00408b26:
      if (uVar11 != param_1) {
        *param_7 = uVar11;
      }
      return 0xffffffff;
    }
    lVar6 = 3;
    pbVar8 = (byte *)param_2[(int)uVar11];
    pbVar9 = pbVar8;
    pbVar10 = &DAT_004105c9;
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
          FUN_004081f0(param_2,param_7);
          uVar11 = param_7[0xb];
        }
      }
      param_7[0xc] = param_1;
      *param_7 = param_1;
      goto LAB_00408b26;
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
        puVar15 = &DAT_004105c9;
        goto LAB_00408c85;
      }
      if ((int)param_6 != 0) {
        if (pbVar8[2] == 0) {
          pcVar4 = strchr(param_3,(int)(char)bVar14);
          param_6 = param_6 & 0xffffffff;
          if (pcVar4 != (char *)0x0) goto LAB_00408c30;
        }
        *(byte **)(param_7 + 8) = pbVar8 + 1;
        uVar11 = FUN_004082d0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar3,
                              &DAT_004105ca);
        if (uVar11 != 0xffffffff) {
          return uVar11;
        }
        pbVar8 = (byte *)param_2[(int)*param_7];
      }
    }
LAB_00408c30:
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
  puVar15 = &DAT_004105e8;
LAB_00408c85:
  uVar3 = FUN_004082d0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar3,puVar15);
  return uVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408ec0(void)

{
  DAT_00613480 = DAT_006132bc;
  _DAT_00613484 = DAT_006132b8;
  FUN_004088f0();
  DAT_006132bc = DAT_00613480;
  _DAT_00613cc8 = DAT_00613490;
  _DAT_006132b4 = DAT_00613488;
  return;
}


void FUN_00408f20(void)

{
  FUN_00408ec0();
  return;
}


void FUN_00408f40(void)

{
  FUN_00408ec0();
  return;
}


void FUN_00408f60(void)

{
  FUN_004088f0();
  return;
}


void FUN_00408f80(void)

{
  FUN_00408ec0();
  return;
}


void FUN_00408fa0(void)

{
  FUN_004088f0();
  return;
}


size_t FUN_00408fc0(wchar_t *param_1,byte *param_2,size_t param_3,mbstate_t *param_4)

{
  char cVar1;
  size_t sVar2;
  wchar_t local_1c;
  
  if (param_2 == (byte *)0x0) {
    param_3 = 1;
    param_2 = (byte *)0x4105e7;
  }
  else {
    if (param_3 == 0) {
      return 0xfffffffffffffffe;
    }
    if (param_1 != (wchar_t *)0x0) goto LAB_00408fe4;
  }
  param_1 = &local_1c;
LAB_00408fe4:
  sVar2 = mbrtowc(param_1,(char *)param_2,param_3,param_4);
  if ((0xfffffffffffffffd < sVar2) && (cVar1 = FUN_00409210(0), cVar1 == '\0')) {
    sVar2 = 1;
    *param_1 = (uint)*param_2;
  }
  return sVar2;
}


ulong * FUN_00409040(ulong *param_1,char param_2,ulong param_3)

{
  char cVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  
  if (param_3 == 0) {
    return (ulong *)0x0;
  }
  if (((ulong)param_1 & 7) == 0) {
LAB_00409080:
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
      if (((ulong)param_1 & 7) == 0) goto LAB_00409080;
      cVar1 = *(char *)param_1;
    }
  }
  return param_1;
}


int FUN_00409150(long param_1,long param_2)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  
  iVar2 = 0;
  if (param_1 != param_2) {
    lVar4 = 0;
    do {
      bVar1 = *(byte *)(param_1 + lVar4);
      uVar5 = (uint)bVar1;
      if (bVar1 - 0x41 < 0x1a) {
        uVar5 = bVar1 + 0x20;
        bVar1 = bVar1 + 0x20;
      }
      bVar3 = *(byte *)(param_2 + lVar4);
      uVar6 = (uint)bVar3;
      if (bVar3 - 0x41 < 0x1a) {
        uVar6 = bVar3 + 0x20;
        bVar3 = bVar3 + 0x20;
      }
    } while ((bVar1 != 0) && (lVar4 = lVar4 + 1, bVar1 == bVar3));
    iVar2 = (uVar5 & 0xff) - (uVar6 & 0xff);
  }
  return iVar2;
}


ulong FUN_004091b0(uint *param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  
  lVar2 = __fpending();
  uVar1 = *param_1;
  uVar3 = FUN_0040b800(param_1);
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


bool FUN_00409210(int param_1)

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
    pbVar5 = &DAT_004105ec;
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

char * FUN_00409270(void)

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
  if (DAT_006134b8 != (char *)0x0) goto LAB_004092aa;
  pcVar7 = getenv("CHARSETALIASDIR");
  if ((pcVar7 == (char *)0x0) || (*pcVar7 == '\0')) {
    sVar6 = 0x73;
    sVar5 = 0x65;
    __n = 100;
    pcVar7 = 
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib"
    ;
LAB_00409395:
    __file = (char *)malloc(sVar6);
    if (__file != (char *)0x0) {
      memcpy(__file,pcVar7,__n);
      __file[__n] = '/';
      goto LAB_004093b6;
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
        goto LAB_00409395;
      }
      sVar6 = __n + 0xe;
    }
    __file = (char *)malloc(sVar6);
    if (__file != (char *)0x0) {
      memcpy(__file,pcVar7,__n);
      sVar5 = __n;
LAB_004093b6:
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
LAB_00409450:
          pbVar8 = (byte *)__stream->_IO_read_ptr;
          if (__stream->_IO_read_end <= pbVar8) goto LAB_004095dc;
          do {
            __stream->_IO_read_ptr = (char *)(pbVar8 + 1);
            uVar4 = (uint)*pbVar8;
            __ptr = pcVar7;
            while( true ) {
              pcVar7 = __ptr;
              if ((uVar4 - 9 < 2) || (uVar4 == 0x20)) goto LAB_00409450;
              if (uVar4 == 0x23) goto LAB_00409641;
              ungetc(uVar4,__stream);
              iVar2 = fscanf(__stream,"%50s %50s",&local_b8,&local_78);
              puVar13 = &local_b8;
              if (iVar2 < 2) goto LAB_004095ef;
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
                FUN_0040b800(__stream);
                goto LAB_004093f4;
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
LAB_004095dc:
              uVar4 = __uflow(__stream);
              __ptr = pcVar7;
              if (uVar4 == 0xffffffff) goto LAB_004095ef;
            }
          } while( true );
        }
        close(iVar2);
      }
      goto LAB_004093ee;
    }
  }
  DAT_006134b8 = "";
LAB_004092aa:
  cVar1 = *DAT_006134b8;
  pcVar7 = DAT_006134b8;
  do {
    if (cVar1 == '\0') {
LAB_00409304:
      if (*__s1 == '\0') {
        __s1 = "ASCII";
      }
      return __s1;
    }
    iVar2 = strcmp(__s1,pcVar7);
    if ((iVar2 == 0) || ((cVar1 == '*' && (pcVar7[1] == '\0')))) {
      sVar6 = strlen(pcVar7);
      __s1 = pcVar7 + sVar6 + 1;
      goto LAB_00409304;
    }
    sVar6 = strlen(pcVar7);
    sVar5 = strlen(pcVar7 + sVar6 + 1);
    pcVar7 = pcVar7 + sVar6 + 1 + sVar5 + 1;
    cVar1 = *pcVar7;
  } while( true );
LAB_00409641:
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
  if (uVar4 == 0xffffffff) goto LAB_004095ef;
  goto LAB_00409450;
LAB_004095ef:
  FUN_0040b800(__stream);
  if (local_d0 == 0) {
LAB_004093ee:
    pcVar7 = "";
  }
  else {
    pcVar7[local_d0] = '\0';
  }
LAB_004093f4:
  free(__file);
  DAT_006134b8 = pcVar7;
  goto LAB_004092aa;
}


uint FUN_004097e0(wchar_t param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = wcwidth(param_1);
  if (-1 < (int)uVar1) {
    return uVar1;
  }
  iVar2 = iswcntrl(param_1);
  return (uint)(iVar2 == 0);
}


void FUN_00409810(void **param_1,void **param_2)

{
  char cVar1;
  void **__src;
  void *pvVar2;
  void *__n;
  
  __src = (void **)*param_2;
  __n = param_2[1];
  if (__src == param_2 + 3) {
    pvVar2 = memcpy(param_1 + 3,__src,(size_t)__n);
    __n = param_2[1];
    *param_1 = pvVar2;
  }
  else {
    *param_1 = __src;
  }
  cVar1 = *(char *)(param_2 + 2);
  param_1[1] = __n;
  *(char *)(param_1 + 2) = cVar1;
  if (cVar1 != '\0') {
    *(undefined4 *)((long)param_1 + 0x14) = *(undefined4 *)((long)param_2 + 0x14);
  }
  return;
}


uint FUN_00409870(byte param_1)

{
  return *(uint *)(&DAT_00410680 + (ulong)(param_1 >> 5) * 4) >> (param_1 & 0x1f) & 1;
}


undefined8 FUN_00409890(char *param_1,long param_2,ulong param_3,char **param_4)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  char cVar4;
  long lVar5;
  char *pcVar6;
  undefined auStack_38 [8];
  char **local_30;
  ulong local_28;
  long local_20;
  
  puVar2 = auStack_38;
  uVar3 = param_3 * 8;
  if ((-1 < (long)uVar3) && (param_3 >> 0x3d == 0)) {
    if (uVar3 < 0xfb0) {
      lVar1 = -(uVar3 + 0x27 & 0xfffffffffffffff0);
      puVar2 = auStack_38 + lVar1;
      lVar1 = (long)&local_20 + lVar1;
    }
    else {
      local_30 = param_4;
      local_28 = param_3;
      local_20 = param_2;
      lVar1 = FUN_0040b920();
      param_4 = local_30;
      param_3 = local_28;
      param_2 = local_20;
    }
    if (lVar1 != 0) {
      *(undefined8 *)(lVar1 + 8) = 1;
      lVar5 = 0;
      uVar3 = 2;
      if (2 < param_3) {
        do {
          cVar4 = *(char *)(param_2 + lVar5);
          while (*(char *)(param_2 + -1 + uVar3) != cVar4) {
            if (lVar5 == 0) {
              *(ulong *)(lVar1 + uVar3 * 8) = uVar3;
              lVar5 = 0;
              goto LAB_0040993a;
            }
            lVar5 = lVar5 - *(long *)(lVar1 + lVar5 * 8);
            cVar4 = *(char *)(param_2 + lVar5);
          }
          lVar5 = lVar5 + 1;
          *(ulong *)(lVar1 + uVar3 * 8) = uVar3 - lVar5;
LAB_0040993a:
          uVar3 = uVar3 + 1;
        } while (param_3 != uVar3);
      }
      *param_4 = (char *)0x0;
      cVar4 = *param_1;
      uVar3 = 0;
      pcVar6 = param_1;
joined_r0x0040995b:
      do {
        if (cVar4 == '\0') {
LAB_00409977:
          *(undefined8 *)(puVar2 + -8) = 0x40997c;
          FUN_0040b990();
          return 1;
        }
        if (*(char *)(param_2 + uVar3) == cVar4) {
          uVar3 = uVar3 + 1;
          if (param_3 == uVar3) {
            *param_4 = param_1;
            goto LAB_00409977;
          }
          cVar4 = pcVar6[1];
          pcVar6 = pcVar6 + 1;
          goto joined_r0x0040995b;
        }
        if (uVar3 == 0) {
          cVar4 = pcVar6[1];
          param_1 = param_1 + 1;
          pcVar6 = pcVar6 + 1;
        }
        else {
          lVar5 = *(long *)(lVar1 + uVar3 * 8);
          param_1 = param_1 + lVar5;
          uVar3 = uVar3 - lVar5;
        }
      } while( true );
    }
  }
  return 0;
}


void FUN_00409a20(void)

{
                    /* WARNING: Subroutine does not return */
  __assert_fail("iter->cur.wc == 0","lib/mbuiter.h",0xb3,"mbuiter_multi_next");
}


undefined8 FUN_00409a40(mbstate_t *param_1,byte *param_2,mbstate_t **param_3)

{
  byte *pbVar1;
  byte *__s1;
  mbstate_t *pmVar2;
  mbstate_t *__s2;
  char cVar3;
  int iVar4;
  size_t sVar5;
  undefined8 uVar6;
  byte **ppbVar7;
  byte **ppbVar8;
  byte **ppbVar9;
  byte *pbVar10;
  mbstate_t ***pppmVar11;
  mbstate_t *pmVar12;
  long lVar13;
  mbstate_t *pmVar14;
  mbstate_t **local_118;
  mbstate_t *local_110;
  mbstate_t *local_108;
  mbstate_t *local_100;
  char local_f8;
  mbstate_t local_f4;
  undefined local_ec;
  byte *local_e8;
  byte *local_e0;
  char local_d8;
  int local_d4;
  byte abStack_d0 [24];
  char local_b8;
  mbstate_t local_b4;
  char local_ac;
  mbstate_t *local_a8;
  size_t local_a0;
  char local_98;
  int local_94 [7];
  char local_78;
  mbstate_t local_74;
  char local_6c;
  mbstate_t *local_68;
  byte *local_60;
  char local_58;
  int local_54 [9];
  
  pppmVar11 = &local_118;
  local_118 = param_3;
  local_110 = param_1;
  local_108 = (mbstate_t *)FUN_0040ba20(param_2);
  if ((-1 < SUB168(ZEXT816(0x38) * ZEXT816(local_108),0)) &&
     (SUB168(ZEXT816(0x38) * ZEXT816(local_108) >> 0x40,0) == 0)) {
    if ((ulong)((long)local_108 * 0x38) < 0xfb0) {
      lVar13 = -((long)local_108 * 0x38 + 0x27U & 0xfffffffffffffff0);
      pppmVar11 = (mbstate_t ***)((long)&local_118 + lVar13);
      ppbVar9 = (byte **)((long)&local_100 + lVar13);
    }
    else {
      ppbVar9 = (byte **)FUN_0040b920();
    }
    pmVar2 = local_108;
    if (ppbVar9 != (byte **)0x0) {
      local_e8 = param_2;
      local_f8 = '\0';
      local_ec = 0;
      local_f4 = (mbstate_t)0x0;
      ppbVar8 = ppbVar9;
      do {
        local_ec = 0;
        if (local_f8 == '\0') {
          if ((*(uint *)(&DAT_00410680 + (ulong)(*local_e8 >> 5) * 4) >> (*local_e8 & 0x1f) & 1) ==
              0) {
            *(undefined8 *)((long)pppmVar11 + -8) = 0x409f50;
            iVar4 = mbsinit(&local_f4);
            if (iVar4 == 0) {
LAB_0040a3df:
                    /* WARNING: Subroutine does not return */
              *(undefined8 *)((long)pppmVar11 + -8) = 0x40a3f8;
              __assert_fail("mbsinit (&iter->state)","lib/mbuiter.h",0x96,"mbuiter_multi_next");
            }
            local_f8 = '\x01';
            goto LAB_00409bd2;
          }
          local_e0 = (byte *)0x1;
          local_d8 = '\x01';
          local_d4 = (int)(char)*local_e8;
          local_ec = 1;
          if ((char)*local_e8 == 0) goto LAB_00409c87;
LAB_00409b75:
          cVar3 = '\x01';
        }
        else {
LAB_00409bd2:
          *(undefined8 *)((long)pppmVar11 + -8) = 0x409bd7;
          sVar5 = __ctype_get_mb_cur_max();
          pbVar10 = local_e8;
          *(undefined8 *)((long)pppmVar11 + -8) = 0x409be9;
          uVar6 = FUN_00407340(pbVar10,sVar5);
          *(undefined8 *)((long)pppmVar11 + -8) = 0x409c03;
          local_e0 = (byte *)FUN_00408fc0(&local_d4,pbVar10,uVar6,&local_f4);
          pbVar10 = local_e8;
          if (local_e0 == (byte *)0xffffffffffffffff) {
            local_e0 = (byte *)0x1;
            cVar3 = '\0';
            local_d8 = '\0';
            local_ec = 1;
          }
          else {
            if (local_e0 != (byte *)0xfffffffffffffffe) {
              if (local_e0 == (byte *)0x0) {
                local_e0 = (byte *)0x1;
                if (*local_e8 != 0) {
LAB_0040a3c6:
                    /* WARNING: Subroutine does not return */
                  *(undefined8 *)((long)pppmVar11 + -8) = 0x40a3df;
                  __assert_fail("*iter->cur.ptr == \'\\0\'","lib/mbuiter.h",0xb2,
                                "mbuiter_multi_next");
                }
                if (local_d4 != 0) {
LAB_0040a3f8:
                  *(undefined8 *)((long)pppmVar11 + -8) = 0x40a3fd;
                  FUN_00409a20();
LAB_0040a3fd:
                    /* WARNING: Subroutine does not return */
                  *(undefined8 *)((long)pppmVar11 + -8) = 0x40a416;
                  __assert_fail("iter->cur.wc == 0","lib/mbuiter.h",0xb3,"mbuiter_multi_next");
                }
              }
              local_d8 = '\x01';
              *(undefined8 *)((long)pppmVar11 + -8) = 0x409c65;
              iVar4 = mbsinit(&local_f4);
              if (iVar4 != 0) {
                local_f8 = '\0';
              }
              local_ec = 1;
              if (local_d4 != 0) goto LAB_00409b75;
              goto LAB_00409c87;
            }
            *(undefined8 *)((long)pppmVar11 + -8) = 0x409fbc;
            local_e0 = (byte *)strlen((char *)pbVar10);
            local_d8 = '\0';
            cVar3 = '\0';
            local_ec = 1;
          }
        }
        pbVar1 = local_e0;
        pbVar10 = local_e8;
        local_ec = 1;
        if (local_e8 == abStack_d0) {
          *(undefined8 *)((long)pppmVar11 + -8) = 0x409f74;
          pbVar10 = (byte *)memcpy(ppbVar8 + 3,pbVar10,(size_t)pbVar1);
          *ppbVar8 = pbVar10;
          cVar3 = local_d8;
        }
        else {
          *ppbVar8 = local_e8;
        }
        ppbVar8[1] = local_e0;
        *(char *)(ppbVar8 + 2) = cVar3;
        if (cVar3 != '\0') {
          *(int *)((long)ppbVar8 + 0x14) = local_d4;
        }
        local_e8 = local_e8 + (long)local_e0;
        ppbVar8 = ppbVar8 + 6;
        local_ec = 0;
      } while( true );
    }
  }
  return 0;
LAB_00409c87:
  local_ec = 1;
  lVar13 = 0;
  ppbVar9[(long)pmVar2 * 6 + 1] = (byte *)0x1;
  local_100 = (mbstate_t *)0x2;
  ppbVar8 = ppbVar9;
  if (local_108 < (mbstate_t *)0x3) {
LAB_00409d3b:
    local_a8 = local_110;
    local_b8 = '\0';
    local_ac = '\0';
    *local_118 = (mbstate_t *)0x0;
    local_110 = &local_74;
    local_78 = '\0';
    local_b4 = (mbstate_t)0x0;
    local_74 = (mbstate_t)0x0;
    local_6c = '\0';
    local_100 = &local_b4;
    local_68 = local_a8;
    pmVar14 = (mbstate_t *)0x0;
    do {
      do {
        if (local_6c == '\0') goto LAB_00409e72;
        if (local_58 != '\0') goto LAB_00409eb2;
LAB_00409dc2:
        ppbVar8 = ppbVar9 + (long)pmVar14 * 6;
LAB_00409dcd:
        __s2 = local_68;
        pbVar10 = ppbVar8[1];
        pmVar12 = local_100;
        if (pbVar10 == local_60) {
          pbVar1 = *ppbVar8;
          *(undefined8 *)((long)pppmVar11 + -8) = 0x40a094;
          iVar4 = memcmp(pbVar1,__s2,(size_t)pbVar10);
          pmVar12 = local_100;
          if (iVar4 == 0) goto LAB_00409ed7;
        }
joined_r0x0040a09f:
        local_100 = pmVar12;
        if (pmVar14 == (mbstate_t *)0x0) {
          if (local_ac == '\0') {
            if (local_b8 == '\0') {
              if ((*(uint *)(&DAT_00410680 + (ulong)(*(byte *)&local_a8->__count >> 5) * 4) >>
                   (*(byte *)&local_a8->__count & 0x1f) & 1) != 0) {
                local_a0 = 1;
                local_98 = '\x01';
                local_94[0] = (int)(char)*(byte *)&local_a8->__count;
                local_ac = '\x01';
                goto LAB_00409e43;
              }
              *(undefined8 *)((long)pppmVar11 + -8) = 0x40a284;
              iVar4 = mbsinit(pmVar12);
              if (iVar4 == 0) goto LAB_0040a3df;
              local_b8 = '\x01';
            }
            *(undefined8 *)((long)pppmVar11 + -8) = 0x40a298;
            sVar5 = __ctype_get_mb_cur_max();
            pmVar12 = local_a8;
            *(undefined8 *)((long)pppmVar11 + -8) = 0x40a2aa;
            uVar6 = FUN_00407340(pmVar12,sVar5);
            *(undefined8 *)((long)pppmVar11 + -8) = 0x40a2c7;
            local_a0 = FUN_00408fc0(local_94,pmVar12,uVar6,&local_b4);
            pmVar12 = local_a8;
            if (local_a0 == 0xffffffffffffffff) {
              local_a0 = 1;
              local_98 = '\0';
              goto LAB_00409e51;
            }
            if (local_a0 == 0xfffffffffffffffe) {
              *(undefined8 *)((long)pppmVar11 + -8) = 0x40a3b3;
              local_a0 = strlen((char *)pmVar12);
              local_98 = '\0';
              goto LAB_00409e51;
            }
            if (local_a0 == 0) {
              local_a0 = 1;
              if (*(byte *)&local_a8->__count != 0) goto LAB_0040a3c6;
              if (local_94[0] != 0) goto LAB_0040a3f8;
            }
            local_98 = '\x01';
            *(undefined8 *)((long)pppmVar11 + -8) = 0x40a327;
            iVar4 = mbsinit(&local_b4);
            if (iVar4 != 0) {
              local_b8 = '\0';
            }
            local_ac = '\x01';
          }
          else if (local_98 == '\0') goto LAB_00409e51;
LAB_00409e43:
          if (local_94[0] == 0) {
                    /* WARNING: Subroutine does not return */
            *(code **)((long)pppmVar11 + -8) = FUN_00401a68;
            abort();
          }
LAB_00409e51:
          local_a8 = (mbstate_t *)((long)&local_a8->__count + local_a0);
          local_68 = (mbstate_t *)(local_60 + (long)&local_68->__count);
          local_ac = '\0';
          local_6c = '\0';
LAB_00409e72:
          do {
            pmVar12 = local_110;
            if (local_78 == '\0') {
              if ((*(uint *)(&DAT_00410680 + (ulong)(*(byte *)&local_68->__count >> 5) * 4) >>
                   (*(byte *)&local_68->__count & 0x1f) & 1) == 0) {
                *(undefined8 *)((long)pppmVar11 + -8) = 0x409fec;
                iVar4 = mbsinit(pmVar12);
                if (iVar4 != 0) {
                  local_78 = '\x01';
                  goto LAB_00409ff8;
                }
                goto LAB_0040a3df;
              }
              local_60 = (byte *)0x1;
              local_58 = '\x01';
              local_54[0] = (int)(char)*(byte *)&local_68->__count;
              local_6c = '\x01';
            }
            else {
LAB_00409ff8:
              *(undefined8 *)((long)pppmVar11 + -8) = 0x409ffd;
              sVar5 = __ctype_get_mb_cur_max();
              pmVar12 = local_68;
              *(undefined8 *)((long)pppmVar11 + -8) = 0x40a00c;
              uVar6 = FUN_00407340(pmVar12,sVar5);
              *(undefined8 *)((long)pppmVar11 + -8) = 0x40a023;
              local_60 = (byte *)FUN_00408fc0(local_54,pmVar12,uVar6,&local_74);
              pmVar12 = local_68;
              if (local_60 == (byte *)0xffffffffffffffff) {
                local_60 = (byte *)0x1;
                local_58 = '\0';
                local_6c = '\x01';
                goto LAB_00409dc2;
              }
              if (local_60 == (byte *)0xfffffffffffffffe) {
                *(undefined8 *)((long)pppmVar11 + -8) = 0x40a361;
                local_60 = (byte *)strlen((char *)pmVar12);
                local_58 = '\0';
                local_6c = '\x01';
                goto LAB_00409dc2;
              }
              if (local_60 == (byte *)0x0) {
                local_60 = (byte *)0x1;
                if (*(byte *)&local_68->__count != 0) goto LAB_0040a3c6;
                if (local_54[0] != 0) goto LAB_0040a3f8;
              }
              local_58 = '\x01';
              *(undefined8 *)((long)pppmVar11 + -8) = 0x40a071;
              iVar4 = mbsinit(&local_74);
              if (iVar4 != 0) {
                local_78 = '\0';
              }
              local_6c = '\x01';
            }
LAB_00409eb2:
            if (local_54[0] == 0) goto LAB_00409f01;
            ppbVar8 = ppbVar9 + (long)pmVar14 * 6;
            if (*(char *)(ppbVar8 + 2) == '\0') goto LAB_00409dcd;
            pmVar12 = local_100;
            if (*(int *)((long)ppbVar8 + 0x14) != local_54[0]) goto joined_r0x0040a09f;
LAB_00409ed7:
            pmVar14 = (mbstate_t *)((long)&pmVar14->__count + 1);
            local_68 = (mbstate_t *)(local_60 + (long)&local_68->__count);
            local_6c = '\0';
            if (local_108 == pmVar14) {
              *local_118 = local_a8;
LAB_00409f01:
              *(undefined8 *)((long)pppmVar11 + -8) = 0x409f09;
              FUN_0040b990(ppbVar9);
              return 1;
            }
          } while( true );
        }
        pbVar10 = ppbVar9[(long)((long)&pmVar14->__count + (long)pmVar2 * 6)];
        pmVar12 = (mbstate_t *)((long)pmVar14 - (long)pbVar10);
      } while (pbVar10 == (byte *)0x0);
      if (local_ac == '\0') goto LAB_0040a0ee;
      if (local_98 != '\0') goto LAB_0040a138;
      while( true ) {
        local_ac = '\0';
        local_a8 = (mbstate_t *)((long)&local_a8->__count + local_a0);
        pbVar10 = pbVar10 + -1;
        pmVar14 = pmVar12;
        if (pbVar10 == (byte *)0x0) break;
LAB_0040a0ee:
        pmVar14 = local_100;
        if (local_b8 == '\0') {
          if ((*(uint *)(&DAT_00410680 + (ulong)(*(byte *)&local_a8->__count >> 5) * 4) >>
               (*(byte *)&local_a8->__count & 0x1f) & 1) == 0) {
            *(undefined8 *)((long)pppmVar11 + -8) = 0x40a15c;
            iVar4 = mbsinit(pmVar14);
            if (iVar4 != 0) {
              local_b8 = '\x01';
              goto LAB_0040a16b;
            }
            goto LAB_0040a3df;
          }
          local_a0 = 1;
          local_98 = '\x01';
          local_94[0] = (int)(char)*(byte *)&local_a8->__count;
          local_ac = '\x01';
LAB_0040a138:
          if (local_94[0] == 0) {
            uVar6 = FUN_00401a63();
            return uVar6;
          }
        }
        else {
LAB_0040a16b:
          *(undefined8 *)((long)pppmVar11 + -8) = 0x40a170;
          sVar5 = __ctype_get_mb_cur_max();
          pmVar14 = local_a8;
          *(undefined8 *)((long)pppmVar11 + -8) = 0x40a182;
          uVar6 = FUN_00407340(pmVar14,sVar5);
          *(undefined8 *)((long)pppmVar11 + -8) = 0x40a19c;
          local_a0 = FUN_00408fc0(local_94,pmVar14,uVar6,&local_b4);
          pmVar14 = local_a8;
          if (local_a0 == 0xffffffffffffffff) {
            local_a0 = 1;
            local_98 = '\0';
          }
          else {
            if (local_a0 != 0xfffffffffffffffe) {
              if (local_a0 == 0) {
                local_a0 = 1;
                if (*(byte *)&local_a8->__count != 0) goto LAB_0040a3c6;
                if (local_94[0] != 0) goto LAB_0040a3fd;
              }
              local_98 = '\x01';
              *(undefined8 *)((long)pppmVar11 + -8) = 0x40a1f8;
              iVar4 = mbsinit(&local_b4);
              if (iVar4 != 0) {
                local_b8 = '\0';
              }
              local_ac = '\x01';
              goto LAB_0040a138;
            }
            *(undefined8 *)((long)pppmVar11 + -8) = 0x40a23c;
            local_a0 = strlen((char *)pmVar14);
            local_98 = '\0';
          }
        }
      }
    } while( true );
  }
LAB_00409cb0:
  cVar3 = *(char *)(ppbVar8 + 8);
  do {
    ppbVar7 = ppbVar9 + lVar13 * 6;
    if ((cVar3 == '\0') || (*(char *)(ppbVar7 + 2) == '\0')) {
      pbVar10 = ppbVar8[7];
      if (pbVar10 == ppbVar7[1]) {
        pbVar1 = *ppbVar7;
        __s1 = ppbVar8[6];
        *(undefined8 *)((long)pppmVar11 + -8) = 0x409d01;
        iVar4 = memcmp(__s1,pbVar1,(size_t)pbVar10);
        if (iVar4 == 0) goto LAB_00409d05;
      }
    }
    else if (*(int *)((long)ppbVar8 + 0x44) == *(int *)((long)ppbVar7 + 0x14)) {
LAB_00409d05:
      lVar13 = lVar13 + 1;
      ppbVar9[(long)((long)&local_100->__count + (long)pmVar2 * 6)] =
           (byte *)((long)local_100 - lVar13);
      goto LAB_00409d1b;
    }
    if (lVar13 == 0) break;
    lVar13 = lVar13 - (long)ppbVar9[(long)pmVar2 * 6 + lVar13];
  } while( true );
  ppbVar9[(long)((long)&local_100->__count + (long)pmVar2 * 6)] = (byte *)local_100;
LAB_00409d1b:
  local_100 = (mbstate_t *)((long)&local_100->__count + 1);
  ppbVar8 = ppbVar8 + 6;
  if (local_108 == local_100) goto LAB_00409d3b;
  goto LAB_00409cb0;
}


/* WARNING: Could not reconcile some variable overlaps */

byte * FUN_0040a420(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  uint uVar2;
  long lVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  size_t sVar7;
  undefined8 uVar8;
  byte bVar9;
  ulong uVar10;
  ulong uVar11;
  byte *pbVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  bool bVar16;
  ulong local_180;
  mbstate_t local_174;
  undefined local_16c;
  byte *local_168;
  size_t local_160;
  char local_158;
  int local_154 [7];
  char local_138;
  mbstate_t local_134;
  char local_12c;
  byte *local_128;
  size_t local_120;
  char local_118;
  int local_114 [7];
  undefined4 local_f8;
  mbstate_t mStack_f4;
  undefined4 uStack_ec;
  byte *local_e8;
  size_t sStack_e0;
  undefined4 local_d8;
  int iStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  mbstate_t mStack_b4;
  undefined4 uStack_ac;
  byte *local_a8;
  size_t sStack_a0;
  undefined4 local_98;
  int iStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  mbstate_t mStack_74;
  undefined local_6c;
  byte *local_68;
  size_t local_60;
  char local_58;
  int local_54 [9];
  
  sVar7 = __ctype_get_mb_cur_max();
  if (1 < sVar7) {
    bVar5 = *param_2;
    local_16c = 0;
    local_174 = (mbstate_t)0x0;
    local_168 = param_2;
    if ((*(uint *)(&DAT_00410680 + (ulong)(bVar5 >> 5) * 4) >> (bVar5 & 0x1f) & 1) == 0) {
      iVar6 = mbsinit(&local_174);
      if (iVar6 == 0) {
LAB_0040b2bc:
                    /* WARNING: Subroutine does not return */
        __assert_fail("mbsinit (&iter->state)","lib/mbuiter.h",0x96,"mbuiter_multi_next");
      }
      sVar7 = __ctype_get_mb_cur_max();
      pbVar12 = local_168;
      uVar8 = FUN_00407340(local_168,sVar7);
      local_160 = FUN_00408fc0(local_154,pbVar12,uVar8,&local_174);
      if (local_160 == 0xffffffffffffffff) {
        local_160 = 1;
        local_158 = '\0';
        goto LAB_0040a5f7;
      }
      if (local_160 == 0xfffffffffffffffe) {
        local_160 = strlen((char *)local_168);
        local_158 = '\0';
        goto LAB_0040a5f7;
      }
      if (local_160 != 0) goto LAB_0040b1e0;
      local_160 = 1;
      if (*local_168 == 0) {
        if (local_154[0] == 0) goto LAB_0040b1e0;
        goto LAB_0040b1da;
      }
LAB_0040b2d5:
                    /* WARNING: Subroutine does not return */
      __assert_fail("*iter->cur.ptr == \'\\0\'","lib/mbuiter.h",0xb2,"mbuiter_multi_next");
    }
    local_160 = 1;
    local_158 = '\x01';
    local_154[0] = (int)(char)bVar5;
LAB_0040a572:
    if (local_154[0] == 0) {
      return param_1;
    }
LAB_0040a5f7:
    local_16c = 1;
    uVar14 = 0;
    bVar5 = 1;
    local_138 = '\0';
    local_134 = (mbstate_t)0x0;
    local_12c = '\0';
    local_f8 = local_f8 & 0xffffff00;
    mStack_f4 = (mbstate_t)0x0;
    local_180 = 0;
    uVar11 = 0;
    local_128 = param_2;
    local_e8 = param_1;
    uVar2 = uStack_ec;
LAB_0040a650:
    uStack_ec = uVar2 & 0xffffff00;
    if ((char)local_f8 != '\0') {
LAB_0040ac69:
      sVar7 = __ctype_get_mb_cur_max();
      pbVar12 = local_e8;
      uVar8 = FUN_00407340(local_e8,sVar7);
      sStack_e0 = FUN_00408fc0(&iStack_d4,pbVar12,uVar8,&mStack_f4);
      if (sStack_e0 == 0xffffffffffffffff) {
        sStack_e0 = 1;
        local_d8 = (uint)local_d8._1_3_;
      }
      else {
        if (sStack_e0 != 0xfffffffffffffffe) {
          if (sStack_e0 == 0) {
            sStack_e0 = 1;
            if (*local_e8 != 0) goto LAB_0040b2d5;
            if (iStack_d4 != 0) goto LAB_0040b1da;
          }
          local_d8 = CONCAT31(local_d8._1_3_,1);
          iVar6 = mbsinit(&mStack_f4);
          if (iVar6 != 0) {
            local_f8 = local_f8 & 0xffffff00;
          }
          goto LAB_0040a6b0;
        }
        sStack_e0 = strlen((char *)local_e8);
        local_d8 = local_d8 >> 8;
      }
      local_d8 = local_d8 << 8;
      uStack_ec = CONCAT31(uStack_ec._1_3_,1);
      bVar9 = 9 < uVar14 & bVar5;
      if ((bVar9 != 0) && (bVar5 = bVar9, uVar14 * 5 <= uVar11)) goto LAB_0040ad98;
LAB_0040abe8:
      sVar7 = sStack_e0;
      uVar13 = uVar11 + 1;
      if ((sStack_e0 == local_160) && (iVar6 = memcmp(local_e8,local_168,sStack_e0), iVar6 == 0)) {
LAB_0040a701:
        uVar13 = uVar11 + 1;
        bVar9 = *param_2;
        local_78 = local_78 & 0xffffff00;
        sStack_a0 = sStack_e0;
        local_a8 = local_e8 + sStack_e0;
        local_b8 = local_f8;
        mStack_b4.__count = mStack_f4.__count;
        mStack_b4.__value.__wch = mStack_f4.__value.__wch;
        local_98 = local_d8;
        iStack_94 = iStack_d4;
        uStack_90 = uStack_d0;
        uStack_8c = uStack_cc;
        local_88 = local_c8;
        uStack_84 = uStack_c4;
        uStack_80 = uStack_c0;
        uStack_7c = uStack_bc;
        uStack_ac = uStack_ec & 0xffffff00;
        local_6c = 0;
        mStack_74.__count = 0;
        mStack_74.__value.__wch = 0;
        local_68 = param_2;
        if ((*(uint *)(&DAT_00410680 + (ulong)(bVar9 >> 5) * 4) >> (bVar9 & 0x1f) & 1) == 0) {
          iVar6 = mbsinit(&mStack_74);
          if (iVar6 == 0) goto LAB_0040b2bc;
          local_78 = CONCAT31(local_78._1_3_,1);
          sVar7 = __ctype_get_mb_cur_max();
          pbVar12 = local_68;
          uVar8 = FUN_00407340(local_68,sVar7);
          local_60 = FUN_00408fc0(local_54,pbVar12,uVar8,&mStack_74);
          if (local_60 == 0xffffffffffffffff) {
            local_60 = 1;
            local_58 = '\0';
            goto LAB_0040a7d9;
          }
          if (local_60 == 0xfffffffffffffffe) {
            local_60 = strlen((char *)local_68);
            local_58 = '\0';
            goto LAB_0040a7d9;
          }
          if (local_60 == 0) {
            local_60 = 1;
            if (*local_68 != 0) goto LAB_0040b2d5;
            if (local_54[0] != 0) goto LAB_0040b1da;
          }
          local_58 = '\x01';
          iVar6 = mbsinit(&mStack_74);
          if (iVar6 != 0) {
            local_78 = local_78 & 0xffffff00;
          }
        }
        else {
          local_60 = 1;
          local_58 = '\x01';
          local_54[0] = (int)(char)bVar9;
        }
        local_6c = 1;
        if (local_54[0] == 0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
LAB_0040a7d9:
        local_68 = local_68 + local_60;
        do {
          local_6c = 0;
          uVar13 = uVar13 + 1;
          if ((char)local_78 == '\0') {
            if ((*(uint *)(&DAT_00410680 + (ulong)(*local_68 >> 5) * 4) >> (*local_68 & 0x1f) & 1)
                == 0) {
              iVar6 = mbsinit(&mStack_74);
              if (iVar6 != 0) {
                local_78 = CONCAT31(local_78._1_3_,1);
                goto LAB_0040a933;
              }
              goto LAB_0040b2bc;
            }
            local_60 = 1;
            local_54[0] = (int)(char)*local_68;
            local_58 = '\x01';
joined_r0x0040a853:
            if (local_54[0] == 0) {
              return local_e8;
            }
          }
          else {
LAB_0040a933:
            sVar7 = __ctype_get_mb_cur_max();
            pbVar12 = local_68;
            uVar8 = FUN_00407340(local_68,sVar7);
            local_60 = FUN_00408fc0(local_54,pbVar12,uVar8,&mStack_74);
            if (local_60 == 0xffffffffffffffff) {
              local_60 = 1;
              local_58 = '\0';
            }
            else {
              if (local_60 != 0xfffffffffffffffe) {
                if (local_60 == 0) {
                  local_60 = 1;
                  if (*local_68 != 0) goto LAB_0040b2d5;
                  if (local_54[0] != 0) goto LAB_0040b1da;
                }
                local_58 = '\x01';
                iVar6 = mbsinit(&mStack_74);
                if (iVar6 != 0) {
                  local_78 = local_78 & 0xffffff00;
                }
                goto joined_r0x0040a853;
              }
              local_60 = strlen((char *)local_68);
              local_58 = '\0';
            }
          }
          local_6c = 1;
          if ((char)uStack_ac == '\0') {
            if ((char)local_b8 == '\0') {
              if ((*(uint *)(&DAT_00410680 + (ulong)(*local_a8 >> 5) * 4) >> (*local_a8 & 0x1f) & 1)
                  != 0) {
                sStack_a0 = 1;
                iStack_94 = (int)(char)*local_a8;
                local_98 = CONCAT31(local_98._1_3_,1);
                uStack_ac = CONCAT31(uStack_ac._1_3_,1);
                goto LAB_0040a8bf;
              }
              iVar6 = mbsinit(&mStack_b4);
              if (iVar6 == 0) goto LAB_0040b2bc;
              local_b8 = CONCAT31(local_b8._1_3_,1);
            }
            sVar7 = __ctype_get_mb_cur_max();
            pbVar12 = local_a8;
            uVar8 = FUN_00407340(local_a8,sVar7);
            sStack_a0 = FUN_00408fc0(&iStack_94,pbVar12,uVar8,&mStack_b4);
            if (sStack_a0 == 0xffffffffffffffff) {
              sStack_a0 = 1;
              local_98 = (uint)local_98._1_3_ << 8;
              uStack_ac = CONCAT31(uStack_ac._1_3_,1);
            }
            else {
              if (sStack_a0 != 0xfffffffffffffffe) {
                if (sStack_a0 == 0) {
                  sStack_a0 = 1;
                  if (*local_a8 != 0) goto LAB_0040b2d5;
                  if (iStack_94 != 0) goto LAB_0040b1da;
                }
                local_98 = CONCAT31(local_98._1_3_,1);
                iVar6 = mbsinit(&mStack_b4);
                if (iVar6 != 0) {
                  local_b8 = local_b8 & 0xffffff00;
                }
                uStack_ac = CONCAT31(uStack_ac._1_3_,1);
                if (iStack_94 != 0) goto LAB_0040a8ce;
                goto LAB_0040ab38;
              }
              sStack_a0 = strlen((char *)local_a8);
              local_98 = local_98 & 0xffffff00;
              uStack_ac = CONCAT31(uStack_ac._1_3_,1);
            }
LAB_0040aa1c:
            sVar7 = sStack_e0;
            if (sStack_a0 != local_60) break;
            iVar6 = memcmp(local_a8,local_68,sStack_a0);
            bVar16 = iVar6 != 0;
          }
          else {
            if ((char)local_98 == '\0') goto LAB_0040aa1c;
LAB_0040a8bf:
            if (iStack_94 == 0) goto LAB_0040ab38;
LAB_0040a8ce:
            if (local_58 == '\0') goto LAB_0040aa1c;
            bVar16 = local_54[0] != iStack_94;
          }
          sVar7 = sStack_e0;
          if (bVar16) break;
          local_a8 = local_a8 + sStack_a0;
          local_68 = local_68 + local_60;
          uStack_ac = uStack_ac & 0xffffff00;
        } while( true );
      }
      goto LAB_0040aa3a;
    }
    if ((*(uint *)(&DAT_00410680 + (ulong)(*local_e8 >> 5) * 4) >> (*local_e8 & 0x1f) & 1) == 0) {
      iVar6 = mbsinit(&mStack_f4);
      if (iVar6 != 0) {
        local_f8 = CONCAT31(local_f8._1_3_,1);
        goto LAB_0040ac69;
      }
      goto LAB_0040b2bc;
    }
    sStack_e0 = 1;
    iStack_d4 = (int)(char)*local_e8;
    local_d8 = CONCAT31(local_d8._1_3_,1);
    uStack_ec._1_3_ = (undefined3)(uVar2 >> 8);
LAB_0040a6b0:
    uStack_ec = CONCAT31(uStack_ec._1_3_,1);
    if (iStack_d4 == 0) goto LAB_0040ab38;
    bVar9 = 9 < uVar14 & bVar5;
    if ((bVar9 != 0) && (bVar5 = bVar9, uVar14 * 5 <= uVar11)) {
LAB_0040ad98:
      lVar15 = uVar11 - local_180;
      if (lVar15 == 0) {
        if (local_12c == '\0') goto LAB_0040af68;
        if (local_118 != '\0') {
LAB_0040afae:
          if (local_114[0] == 0) goto LAB_0040ae26;
        }
LAB_0040afbc:
        bVar5 = 1;
      }
      else {
        if (local_12c == '\0') goto LAB_0040adcf;
        if (local_118 != '\0') goto LAB_0040ae11;
LAB_0040adb6:
        do {
          local_12c = '\0';
          local_128 = local_128 + local_120;
          lVar15 = lVar15 + -1;
          if (lVar15 == 0) goto LAB_0040af68;
LAB_0040adcf:
          if (local_138 == '\0') {
            if ((*(uint *)(&DAT_00410680 + (ulong)(*local_128 >> 5) * 4) >> (*local_128 & 0x1f) & 1)
                == 0) {
              iVar6 = mbsinit(&local_134);
              if (iVar6 != 0) {
                local_138 = '\x01';
                goto LAB_0040ae6f;
              }
              goto LAB_0040b2bc;
            }
            local_120 = 1;
            local_114[0] = (int)(char)*local_128;
            local_118 = '\x01';
            local_12c = '\x01';
          }
          else {
LAB_0040ae6f:
            sVar7 = __ctype_get_mb_cur_max();
            pbVar12 = local_128;
            uVar8 = FUN_00407340(local_128,sVar7);
            local_120 = FUN_00408fc0(local_114,pbVar12,uVar8,&local_134);
            if (local_120 == 0xffffffffffffffff) {
              local_120 = 1;
              local_118 = '\0';
              goto LAB_0040adb6;
            }
            if (local_120 == 0xfffffffffffffffe) {
              local_120 = strlen((char *)local_128);
              local_118 = '\0';
              goto LAB_0040adb6;
            }
            if (local_120 == 0) {
              local_120 = 1;
              if (*local_128 != 0) goto LAB_0040b2d5;
              if (local_114[0] != 0) goto LAB_0040b1da;
            }
            local_118 = '\x01';
            iVar6 = mbsinit(&local_134);
            if (iVar6 != 0) {
              local_138 = '\0';
            }
            local_12c = '\x01';
          }
LAB_0040ae11:
        } while (local_114[0] != 0);
        if (local_12c == '\0') {
LAB_0040af68:
          if (local_138 == '\0') {
            if ((*(uint *)(&DAT_00410680 + (ulong)(*local_128 >> 5) * 4) >> (*local_128 & 0x1f) & 1)
                != 0) {
              local_120 = 1;
              local_114[0] = (int)(char)*local_128;
              local_118 = '\x01';
              local_12c = '\x01';
              goto LAB_0040afae;
            }
            iVar6 = mbsinit(&local_134);
            if (iVar6 == 0) goto LAB_0040b2bc;
            local_138 = '\x01';
          }
          sVar7 = __ctype_get_mb_cur_max();
          pbVar12 = local_128;
          uVar8 = FUN_00407340(local_128,sVar7);
          local_120 = FUN_00408fc0(local_114,pbVar12,uVar8,&local_134);
          if (local_120 != 0xffffffffffffffff) {
            if (local_120 == 0xfffffffffffffffe) {
              local_120 = strlen((char *)local_128);
              local_118 = '\0';
              local_12c = '\x01';
              goto LAB_0040afbc;
            }
            if (local_120 == 0) {
              local_120 = 1;
              if (*local_128 != 0) goto LAB_0040b2d5;
              if (local_114[0] != 0) goto LAB_0040b1da;
            }
            local_118 = '\x01';
            iVar6 = mbsinit(&local_134);
            if (iVar6 != 0) {
              local_138 = '\0';
            }
            local_12c = '\x01';
            goto LAB_0040afae;
          }
          local_120 = 1;
          local_118 = '\0';
          local_12c = '\x01';
          goto LAB_0040afbc;
        }
LAB_0040ae26:
        bVar5 = FUN_00409a40(param_1,param_2,&local_78);
        if (bVar5 != 0) goto LAB_0040b261;
      }
      local_180 = uVar11;
      if ((char)local_d8 == '\0') goto LAB_0040abe8;
    }
    uVar13 = uVar11 + 1;
    if (local_158 == '\0') goto LAB_0040abe8;
    sVar7 = sStack_e0;
    if (iStack_d4 == local_154[0]) goto LAB_0040a701;
LAB_0040aa3a:
    local_e8 = local_e8 + sVar7;
    uVar14 = uVar14 + 1;
    uVar11 = uVar13;
    uVar2 = uStack_ec;
    goto LAB_0040a650;
  }
  bVar5 = *param_2;
  if (bVar5 != 0) {
    bVar9 = *param_1;
    if (bVar9 != 0) {
      uVar13 = 0;
      uVar14 = 0;
      uVar11 = 0;
      bVar4 = 1;
      pbVar12 = param_2;
      do {
        uVar13 = uVar13 + 1;
        pbVar1 = param_1 + 1;
        if (bVar5 == bVar9) {
          if (param_2[1] == 0) {
            return param_1;
          }
          if (*pbVar1 == 0) break;
          uVar10 = uVar14 + 2;
          if (param_2[1] == *pbVar1) {
            do {
              lVar15 = uVar10 + -uVar14;
              if (param_2[lVar15] == 0) {
                return param_1;
              }
              lVar3 = uVar10 + -uVar14;
              if (param_1[lVar3] == 0) goto LAB_0040ab38;
              uVar10 = uVar10 + 1;
            } while (param_2[lVar15] == param_1[lVar3]);
          }
        }
        else {
          uVar10 = uVar14 + 1;
          if (param_1[1] == 0) break;
        }
        uVar14 = uVar10;
        bVar9 = 9 < uVar13 & bVar4;
        if ((bVar9 != 0) && (bVar4 = bVar9, uVar13 * 5 <= uVar14)) {
          if (pbVar12 != (byte *)0x0) {
            sVar7 = strnlen((char *)pbVar12,uVar14 - uVar11);
            pbVar12 = pbVar12 + sVar7;
            uVar11 = uVar14;
            if (*pbVar12 != 0) goto LAB_0040a4d0;
          }
          sVar7 = strlen((char *)param_2);
          bVar4 = FUN_00409890(pbVar1,param_2,sVar7,&local_78);
          if (bVar4 != 0) {
LAB_0040b261:
            return (byte *)CONCAT44(mStack_74.__count,local_78);
          }
          pbVar12 = (byte *)0x0;
        }
LAB_0040a4d0:
        bVar9 = *pbVar1;
        param_1 = pbVar1;
      } while( true );
    }
LAB_0040ab38:
    param_1 = (byte *)0x0;
  }
  return param_1;
LAB_0040b1da:
  FUN_00409a20();
LAB_0040b1e0:
  local_158 = '\x01';
  mbsinit(&local_174);
  goto LAB_0040a572;
}


undefined8
FUN_0040b2f0(size_t *param_1,size_t *param_2,iconv_t param_3,char **param_4,ulong *param_5)

{
  int iVar1;
  size_t sVar2;
  ulong __size;
  char *__ptr;
  int *piVar3;
  long lVar4;
  size_t *local_1058;
  size_t *local_1050;
  size_t *local_1048;
  char *local_1040;
  ulong local_1038 [513];
  
  iconv(param_3,(char **)0x0,(size_t *)0x0,(char **)0x0,(size_t *)0x0);
  lVar4 = 0;
  local_1058 = param_1;
  local_1050 = param_2;
  if (param_2 != (size_t *)0x0) {
    do {
      local_1040 = (char *)0x1000;
      local_1048 = local_1038;
      sVar2 = iconv(param_3,(char **)&local_1058,(size_t *)&local_1050,(char **)&local_1048,
                    (size_t *)&local_1040);
      if (sVar2 == 0xffffffffffffffff) {
        piVar3 = __errno_location();
        if (*piVar3 != 7) {
          if (*piVar3 != 0x16) {
            return 0xffffffff;
          }
          break;
        }
      }
      lVar4 = (long)local_1048 + (lVar4 - (long)local_1038);
    } while (local_1050 != (size_t *)0x0);
  }
  local_1040 = (char *)0x1000;
  local_1048 = local_1038;
  sVar2 = iconv(param_3,(char **)0x0,(size_t *)0x0,(char **)&local_1048,(size_t *)&local_1040);
  if (sVar2 != 0xffffffffffffffff) {
    __size = (long)local_1048 + (lVar4 - (long)local_1038);
    if (__size == 0) {
      *param_5 = 0;
      return 0;
    }
    __ptr = *param_4;
    if (((__ptr != (char *)0x0) && (__size <= *param_5)) ||
       (__ptr = (char *)malloc(__size), __ptr != (char *)0x0)) {
      iconv(param_3,(char **)0x0,(size_t *)0x0,(char **)0x0,(size_t *)0x0);
      local_1050 = param_1;
      local_1048 = param_2;
      local_1040 = __ptr;
      local_1038[0] = __size;
      do {
        if (local_1048 == (size_t *)0x0) goto LAB_0040b46a;
        sVar2 = iconv(param_3,(char **)&local_1050,(size_t *)&local_1048,&local_1040,local_1038);
      } while (sVar2 != 0xffffffffffffffff);
      piVar3 = __errno_location();
      if (*piVar3 == 0x16) {
LAB_0040b46a:
        sVar2 = iconv(param_3,(char **)0x0,(size_t *)0x0,&local_1040,local_1038);
        if (sVar2 != 0xffffffffffffffff) {
          if (local_1038[0] != 0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *param_4 = __ptr;
          *param_5 = __size;
          return 0;
        }
      }
      if (*param_4 != __ptr) {
        piVar3 = __errno_location();
        iVar1 = *piVar3;
        free(__ptr);
        *piVar3 = iVar1;
        return 0xffffffff;
      }
      return 0xffffffff;
    }
    piVar3 = __errno_location();
    *piVar3 = 0xc;
  }
  return 0xffffffff;
}


undefined * FUN_0040b540(char *param_1,iconv_t param_2)

{
  ulong uVar1;
  size_t sVar2;
  int *piVar3;
  char *pcVar4;
  undefined *puVar5;
  long lVar6;
  char *__ptr;
  ulong uVar7;
  char *local_58;
  size_t local_50;
  char *local_48;
  size_t local_40 [2];
  
  local_58 = param_1;
  local_50 = strlen(param_1);
  local_40[0] = local_50 << 4;
  if (0xfffffff < local_50) {
    local_40[0] = local_50;
  }
  local_48 = (char *)malloc(local_40[0] + 1);
  if (local_48 == (char *)0x0) {
    piVar3 = __errno_location();
    *piVar3 = 0xc;
    return (undefined *)0x0;
  }
  iconv(param_2,(char **)0x0,(size_t *)0x0,(char **)0x0,(size_t *)0x0);
  __ptr = local_48;
  uVar7 = local_40[0] + 1;
  while (sVar2 = iconv(param_2,&local_58,&local_50,&local_48,local_40), sVar2 == 0xffffffffffffffff)
  {
    piVar3 = __errno_location();
    if (*piVar3 == 0x16) break;
    if (*piVar3 != 7) goto LAB_0040b6d7;
    uVar1 = uVar7 * 2;
    lVar6 = (long)local_48 - (long)__ptr;
    if ((uVar1 <= uVar7) || (pcVar4 = (char *)realloc(__ptr,uVar1), pcVar4 == (char *)0x0))
    goto LAB_0040b6d0;
    local_48 = pcVar4 + lVar6;
    local_40[0] = (uVar1 - 1) - lVar6;
    __ptr = pcVar4;
    uVar7 = uVar1;
  }
  do {
    sVar2 = iconv(param_2,(char **)0x0,(size_t *)0x0,&local_48,local_40);
    if (sVar2 != 0xffffffffffffffff) {
      *local_48 = '\0';
      sVar2 = (long)(local_48 + 1) - (long)__ptr;
      if (uVar7 <= sVar2) {
        return __ptr;
      }
      local_48 = local_48 + 1;
      puVar5 = (undefined *)realloc(__ptr,sVar2);
      if (puVar5 == (undefined *)0x0) {
        return __ptr;
      }
      return puVar5;
    }
    piVar3 = __errno_location();
    if (*piVar3 != 7) goto LAB_0040b6d7;
    uVar1 = uVar7 * 2;
    lVar6 = (long)local_48 - (long)__ptr;
    if ((uVar1 <= uVar7) || (pcVar4 = (char *)realloc(__ptr,uVar1), pcVar4 == (char *)0x0)) break;
    local_48 = pcVar4 + lVar6;
    local_40[0] = (uVar1 - 1) - lVar6;
    __ptr = pcVar4;
    uVar7 = uVar1;
  } while( true );
LAB_0040b6d0:
  *piVar3 = 0xc;
LAB_0040b6d7:
  free(__ptr);
  return (undefined *)0x0;
}


char * FUN_0040b710(char *param_1,char *param_2,char *param_3)

{
  int iVar1;
  char *pcVar2;
  iconv_t __cd;
  int *piVar3;
  
  if ((*param_1 == '\0') || (iVar1 = FUN_00409150(param_2,param_3), iVar1 == 0)) {
    pcVar2 = strdup(param_1);
    if (pcVar2 != (char *)0x0) {
      return pcVar2;
    }
    piVar3 = __errno_location();
    *piVar3 = 0xc;
    return (char *)0x0;
  }
  __cd = iconv_open(param_3,param_2);
  if (__cd == (iconv_t)0xffffffffffffffff) {
    return (char *)0x0;
  }
  pcVar2 = (char *)FUN_0040b540(param_1,__cd);
  if (pcVar2 != (char *)0x0) {
    iVar1 = iconv_close(__cd);
    if (-1 < iVar1) {
      return pcVar2;
    }
    piVar3 = __errno_location();
    iVar1 = *piVar3;
    free(pcVar2);
    *piVar3 = iVar1;
    return (char *)0x0;
  }
  piVar3 = __errno_location();
  iVar1 = *piVar3;
  iconv_close(__cd);
  *piVar3 = iVar1;
  return (char *)0x0;
}


int FUN_0040b800(FILE *param_1)

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
      if (_Var4 == -1) goto LAB_0040b867;
    }
    iVar1 = FUN_0040b880(param_1);
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
LAB_0040b867:
  iVar1 = fclose(param_1);
  return iVar1;
}


void FUN_0040b880(FILE *param_1)

{
  int iVar1;
  
  if (param_1 != (FILE *)0x0) {
    iVar1 = __freading();
    if ((iVar1 != 0) && ((param_1->_flags & 0x100U) != 0)) {
      FUN_0040b8c0(param_1,0,1);
      fflush(param_1);
      return;
    }
  }
  fflush(param_1);
  return;
}


ulong FUN_0040b8c0(FILE *param_1,__off_t param_2,int param_3)

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


undefined8 * FUN_0040b920(ulong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_1 < 0xfffffffffffffff0) {
    puVar2 = (undefined8 *)malloc(param_1 + 0x10);
    puVar3 = (undefined8 *)0x0;
    if (puVar2 != (undefined8 *)0x0) {
      puVar3 = puVar2 + 2;
      *(undefined4 *)((long)puVar2 + 0xc) = 0x1415fb4a;
      uVar1 = *(undefined8 *)(&DAT_006134c0 + ((ulong)puVar3 % 0x101) * 8);
      *(undefined8 **)(&DAT_006134c0 + ((ulong)puVar3 % 0x101) * 8) = puVar3;
      *puVar2 = uVar1;
    }
    return puVar3;
  }
  return (undefined8 *)0x0;
}


void FUN_0040b990(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  
  if ((param_1 != 0) && (*(int *)(param_1 - 4) == 0x1415fb4a)) {
    uVar1 = *(ulong *)(&DAT_006134c0 + (param_1 % 0x101) * 8);
    if (uVar1 != 0) {
      if (uVar1 == param_1) {
        puVar3 = (undefined8 *)(&DAT_006134c0 + (param_1 % 0x101) * 8);
      }
      else {
        do {
          uVar2 = uVar1;
          uVar1 = *(ulong *)(uVar2 - 0x10);
          if (uVar1 == 0) {
            return;
          }
        } while (param_1 != uVar1);
        puVar3 = (undefined8 *)(uVar2 - 0x10);
      }
      *puVar3 = *(undefined8 *)(param_1 - 0x10);
      free((void *)(param_1 - 0x10));
      return;
    }
  }
  return;
}


size_t FUN_0040ba20(byte *param_1)

{
  bool bVar1;
  byte *pbVar2;
  int iVar3;
  size_t sVar4;
  size_t sVar5;
  undefined8 uVar6;
  mbstate_t local_54;
  undefined local_4c;
  byte *local_48;
  size_t local_40;
  undefined local_38;
  int local_34 [9];
  
  sVar4 = __ctype_get_mb_cur_max();
  if (sVar4 < 2) {
    sVar4 = strlen((char *)param_1);
    return sVar4;
  }
  sVar4 = 0;
  bVar1 = false;
  local_54 = (mbstate_t)0x0;
  local_48 = param_1;
  do {
    local_4c = 0;
    if (bVar1) {
LAB_0040bac7:
      sVar5 = __ctype_get_mb_cur_max();
      pbVar2 = local_48;
      uVar6 = FUN_00407340(local_48,sVar5);
      local_40 = FUN_00408fc0(local_34,pbVar2,uVar6,&local_54);
      if (local_40 == 0xffffffffffffffff) {
        local_40 = 1;
        local_38 = 0;
      }
      else {
        if (local_40 != 0xfffffffffffffffe) {
          if (local_40 == 0) {
            local_40 = 1;
            if (*local_48 != 0) {
                    /* WARNING: Subroutine does not return */
              __assert_fail("*iter->cur.ptr == \'\\0\'","lib/mbuiter.h",0xb2,"mbuiter_multi_next");
            }
            if (local_34[0] != 0) {
                    /* WARNING: Subroutine does not return */
              __assert_fail("iter->cur.wc == 0","lib/mbuiter.h",0xb3,"mbuiter_multi_next");
            }
          }
          local_38 = 1;
          iVar3 = mbsinit(&local_54);
          if (iVar3 != 0) {
            bVar1 = false;
          }
          goto LAB_0040baa6;
        }
        local_40 = strlen((char *)local_48);
        local_38 = 0;
      }
    }
    else {
      if ((*(uint *)(&DAT_00410680 + (ulong)(*local_48 >> 5) * 4) >> (*local_48 & 0x1f) & 1) == 0) {
        iVar3 = mbsinit(&local_54);
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("mbsinit (&iter->state)","lib/mbuiter.h",0x96,"mbuiter_multi_next");
        }
        bVar1 = true;
        goto LAB_0040bac7;
      }
      local_40 = 1;
      local_34[0] = (int)(char)*local_48;
      local_38 = 1;
LAB_0040baa6:
      if (local_34[0] == 0) {
        return sVar4;
      }
    }
    local_48 = local_48 + local_40;
    sVar4 = sVar4 + 1;
  } while( true );
}


/* WARNING: Removing unreachable block (ram,0x0040bc23) */
/* WARNING: Removing unreachable block (ram,0x0040bc28) */

void FUN_0040bbf0(void)

{
  __DT_INIT();
  return;
}


void FUN_0040bc50(void)

{
  return;
}


void FUN_0040bc60(undefined8 param_1)

{
  __cxa_atexit(param_1,0,DAT_00613228);
  return;
}


undefined8 FUN_0040bc78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  FUN_00401cc1();
  return;
}

