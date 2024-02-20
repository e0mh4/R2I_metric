
#include "decompile_ghidra.h"
#define __int64 long long
#define __int32 int
#define __int16 short
#define __int8 char

void switchD_00403620caseD_b(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401d65(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401d6a(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401d6f(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401d74(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401d79(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void switchD_0040627acaseD_0(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401d83(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401d88(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401d8d(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Type propagation algorithm not settling */

undefined FUN_00401da0(ulong param_1,stat *param_2)

{
  char cVar1;
  void *pvVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  long lVar6;
  size_t sVar7;
  stat *psVar8;
  long lVar9;
  __off_t _Var10;
  __ino_t _Var11;
  stat *psVar12;
  int *piVar13;
  undefined uVar14;
  undefined uVar15;
  ulong uVar16;
  uint uVar17;
  size_t __n;
  ulong uVar18;
  ulong uVar19;
  stat *psVar20;
  stat *psVar21;
  stat *unaff_R15;
  stat *psVar22;
  stat *psVar23;
  bool bVar24;
  byte bVar25;
  stat *local_100;
  stat *local_f8;
  stat *local_f0;
  stat *local_e8;
  byte local_e0;
  stat *local_d8;
  char local_cf;
  byte local_ce;
  byte local_cd;
  stat local_c8;
  
  bVar25 = 0;
  local_e0 = 0;
  param_1 = param_1 & 0xffffffff;
  FUN_00403430(param_2->st_dev);
  setlocale(6,"");
  bindtextdomain("coreutils",
                 "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale"
                );
  textdomain("coreutils");
  FUN_00409f90(FUN_00403000);
  local_cd = 0;
  local_cf = '\n';
  local_f8 = (stat *)0x0;
  local_100 = (stat *)0xffffffffffffffff;
  local_f0 = (stat *)0x0;
  local_ce = 0;
  psVar20 = (stat *)0x0;
  psVar21 = (stat *)0xffffffffffffffff;
  psVar12 = local_100;
  psVar22 = local_f8;
LAB_00401e28:
  do {
    local_f8 = psVar22;
    local_100 = psVar12;
    psVar8 = psVar20;
    uVar16 = 0;
    iVar3 = FUN_004082a0(param_1,param_2,"ei:n:o:rz",&PTR_DAT_0040a6a0);
    psVar23 = DAT_0060f4c8;
    if (iVar3 == -1) goto LAB_004020a7;
    psVar20 = psVar8;
    psVar12 = local_100;
    psVar22 = local_f8;
    if (iVar3 != 0x6e) {
      if (0x6e < iVar3) {
        if (iVar3 == 0x72) {
          local_cd = 1;
        }
        else if (iVar3 < 0x73) {
          if (iVar3 != 0x6f) goto LAB_004029dc;
          psVar22 = DAT_0060f4c8;
          unaff_R15 = psVar23;
          if ((local_f8 != (stat *)0x0) &&
             (iVar3 = strcmp((char *)local_f8,(char *)DAT_0060f4c8), iVar3 != 0)) goto LAB_00402a3d;
        }
        else if (iVar3 == 0x7a) {
          local_cf = '\0';
        }
        else {
          if (iVar3 != 0x80) goto LAB_004029dc;
          psVar20 = psVar23;
          unaff_R15 = psVar23;
          if ((psVar8 != (stat *)0x0) &&
             (iVar3 = strcmp((char *)psVar8,(char *)DAT_0060f4c8), iVar3 != 0)) {
            uVar15 = dcgettext(0,"multiple random sources specified",5);
            error(1,0,uVar15);
            goto LAB_00402b70;
          }
        }
        goto LAB_00401e28;
      }
      if (iVar3 == -0x82) goto LAB_004029e6;
      if (iVar3 < -0x81) {
        if (iVar3 == -0x83) {
          FUN_00406650(stdout,&DAT_00409fe4,"GNU coreutils",PTR_DAT_0060f270,"Paul Eggert",0);
                    /* WARNING: Subroutine does not return */
          exit(0);
        }
        goto LAB_004029dc;
      }
      if (iVar3 != 0x65) {
        if (iVar3 != 0x69) goto LAB_004029dc;
        unaff_R15 = (stat *)strchr((char *)DAT_0060f4c8,0x2d);
        local_e8 = (stat *)((ulong)local_e8 & 0xffffffffffffff00 | (ulong)(unaff_R15 == (stat *)0x0)
                           );
        if (local_ce != 0) goto LAB_00402a1b;
        if (unaff_R15 == (stat *)0x0) {
          uVar15 = dcgettext(0,"invalid input range",5);
          FUN_00406af0(psVar23,0,0xffffffffffffffff,"",uVar15);
        }
        else {
          *(undefined *)&unaff_R15->st_dev = 0;
          uVar15 = dcgettext(0,"invalid input range",5);
          psVar23 = (stat *)FUN_00406af0(DAT_0060f4c8,0,0xffffffffffffffff,"",uVar15);
          *(undefined *)&unaff_R15->st_dev = 0x2d;
          dcgettext(0,"invalid input range",5);
          local_f0 = (stat *)FUN_00406af0((undefined *)((long)&unaff_R15->st_dev + 1),0,
                                          0xffffffffffffffff,"");
          if ((((long)local_f0 - (long)psVar23 == -1) == local_f0 < psVar23) &&
             (unaff_R15 != (stat *)0x0)) {
            local_ce = 1;
            psVar21 = psVar23;
            goto LAB_00401e28;
          }
        }
        param_2 = (stat *)FUN_00405050(DAT_0060f4c8);
        uVar15 = dcgettext(0,"invalid input range",5);
        piVar13 = __errno_location();
        psVar20 = param_2;
        error(1,*piVar13,"%s: %s",uVar15);
        uVar17 = (uint)psVar20;
        psVar21 = psVar23;
        goto LAB_004023ca;
      }
      local_e0 = 1;
      goto LAB_00401e28;
    }
    iVar3 = FUN_00406b20(DAT_0060f4c8,0,10,&local_c8);
    if (iVar3 == 0) {
      psVar12 = (stat *)local_c8.st_dev;
      if (local_100 <= local_c8.st_dev) {
        psVar12 = local_100;
      }
      goto LAB_00401e28;
    }
  } while (iVar3 == 1);
  param_1 = FUN_00405050(DAT_0060f4c8);
  uVar15 = dcgettext(0,"invalid line count: %s",5);
  error(1,0,uVar15,param_1);
LAB_004020a7:
  psVar20 = stdin;
  uVar17 = (int)param_1 - DAT_0060f2d8._4_4_;
  param_2 = (stat *)(param_2->__unused + (long)DAT_0060f2d8._4_4_ + -0xf);
  uVar16 = (ulong)uVar17;
  if (local_e0 == 0) {
    if (local_ce == 0) goto LAB_004020cc;
    if (0 < (int)uVar17) goto LAB_00402afa;
    param_2 = (stat *)0x0;
    unaff_R15 = (stat *)((long)local_f0 + (1 - (long)psVar21));
  }
  else {
    if (local_ce != 0) {
      uVar15 = dcgettext(0,"cannot combine -e and -i options",5);
      error(0,0,uVar15);
LAB_004029dc:
      FUN_00402c60(1);
LAB_004029e6:
      FUN_00402c60(0);
      goto LAB_004029ed;
    }
LAB_004020cc:
    if (local_e0 == 0) {
      lVar6 = 8;
      if (1 < (int)uVar17) goto LAB_00402afc;
      uVar16 = (ulong)(uVar17 - 1);
      if (uVar17 - 1 == 0) {
        unaff_R15 = (stat *)param_2->st_dev;
        iVar3 = strcmp((char *)unaff_R15,"-");
        if (iVar3 == 0) goto LAB_0040273e;
        if (local_100 != (stat *)0x0) {
          lVar6 = FUN_00403130(unaff_R15,"r",psVar20);
          if (lVar6 == 0) {
LAB_004029ed:
            uVar15 = FUN_00404ed0(0,3,param_2->st_dev);
            piVar13 = __errno_location();
            error(1,*piVar13,"%s",uVar15);
            psVar23 = psVar21;
LAB_00402a1b:
            uVar15 = dcgettext(0,"multiple -i options specified",5);
            error(1,0,uVar15);
            psVar21 = psVar23;
            psVar23 = unaff_R15;
LAB_00402a3d:
            uVar15 = dcgettext(0,"multiple output files specified",5);
            error(1,0,uVar15);
LAB_00402a5f:
            uVar15 = dcgettext(0,"too many input lines",5);
            error(1,0x4b,uVar15);
LAB_00402a84:
            uVar15 = dcgettext(0,"read error",5);
            piVar13 = __errno_location();
            error(1,*piVar13,uVar15);
            unaff_R15 = psVar23;
            do {
              uVar15 = dcgettext(0,"no lines to repeat",5);
              error(1,0,uVar15);
LAB_00402ad0:
              uVar15 = dcgettext(0,"read error",5);
              piVar13 = __errno_location();
              error(1,*piVar13,uVar15);
LAB_00402afa:
              lVar6 = 0;
LAB_00402afc:
              uVar15 = FUN_00405050(*(undefined *)((long)param_2->__unused + lVar6 + -0x78));
              uVar14 = dcgettext(0,"extra operand %s",5);
              error(0,0,uVar14,uVar15);
              FUN_00402c60(1);
LAB_00402b35:
              iVar3 = FUN_00407390();
              if (iVar3 != 0) goto LAB_00402534;
LAB_0040247b:
              if ((local_f8 != (stat *)0x0) &&
                 (lVar6 = FUN_00403130(local_f8,&DAT_0040a122,stdout), lVar6 == 0))
              goto LAB_004028ee;
              if (local_100 == (stat *)0x0) {
                return 0;
              }
            } while (unaff_R15 == (stat *)0x0);
            if (local_ce == 0) goto LAB_0040255e;
            psVar20 = (stat *)0x0;
            param_2 = (stat *)((long)local_f0 - (long)psVar21);
            while( true ) {
              lVar6 = FUN_004050e0(local_d8,param_2);
              iVar3 = __printf_chk(1,"%lu%c",(long)psVar21->__unused + lVar6 + -0x78,local_cf);
              psVar22 = local_d8;
              psVar23 = local_100;
              if (iVar3 < 0) break;
              psVar20 = (stat *)((long)&psVar20->st_dev + 1);
              if (psVar20 == local_100) {
                return 0;
              }
            }
LAB_004025b1:
            do {
              uVar15 = dcgettext(0,"write error",5);
              piVar13 = __errno_location();
              error(1,*piVar13,uVar15);
LAB_004025db:
              if (uVar16 != 0) {
                param_2 = &local_c8;
                FUN_004032e0(param_2);
                do {
                  psVar8 = (stat *)FUN_004050e0(local_d8,psVar23);
                  psVar12 = param_2;
                  if (psVar8 < local_100) {
                    psVar12 = (stat *)(psVar22->__unused + (long)psVar8 * 3 + -0xf);
                  }
                  lVar6 = FUN_004032f0(psVar12,psVar20,(ulong)local_e8 & 0xffffffff);
                  if (lVar6 == 0) {
                    local_e8 = psVar22;
                    if (psVar23 == (stat *)0x0) goto LAB_00402a5f;
                    goto LAB_0040265c;
                  }
                  bVar24 = psVar23 != (stat *)0x0;
                  psVar23 = (stat *)((long)&psVar23->st_dev + 1);
                } while (bVar24);
                psVar23 = (stat *)0x1;
LAB_0040265c:
                FUN_00403420();
                local_e8 = psVar22;
              }
LAB_00402664:
              if ((*(byte *)&psVar20->st_dev & 0x20) != 0) goto LAB_00402a84;
              unaff_R15 = psVar23;
              if (local_100 <= psVar23) {
                unaff_R15 = local_100;
              }
              iVar3 = FUN_00407390();
              local_100 = unaff_R15;
              if (iVar3 == 0) {
                param_2 = (stat *)0x0;
                if (local_cd == 0) {
                  local_cd = 1;
LAB_004026ab:
                  lVar6 = FUN_004052b0(local_d8,local_100,unaff_R15);
                  if ((local_f8 == (stat *)0x0) ||
                     (lVar9 = FUN_00403130(local_f8,&DAT_0040a122,stdout), lVar9 != 0)) {
                    psVar20 = (stat *)0x0;
                    if (local_cd != 0) {
                      while( true ) {
                        if (unaff_R15 == psVar20) {
                          return 0;
                        }
                        param_2 = (stat *)(psVar22->__unused +
                                          *(long *)(lVar6 + (long)psVar20 * 8) * 3 + -0xf);
                        sVar7 = fwrite_unlocked((void *)param_2->st_nlink,1,param_2->st_ino,stdout);
                        psVar23 = unaff_R15;
                        if (sVar7 != param_2->st_ino) break;
                        psVar20 = (stat *)((long)&psVar20->st_dev + 1);
                      }
                      goto LAB_004025b1;
                    }
LAB_00402305:
                    psVar23 = unaff_R15;
                    if (local_ce != 0) {
                      psVar20 = (stat *)(ulong)(uint)(int)local_cf;
                      param_2 = (stat *)0x0;
                      while( true ) {
                        if (param_2 == local_100) {
                          return 0;
                        }
                        iVar3 = __printf_chk(1,"%lu%c",
                                             (long)psVar21->__unused +
                                             *(long *)(lVar6 + (long)param_2 * 8) + -0x78,psVar20);
                        psVar22 = local_100;
                        if (iVar3 < 0) break;
                        param_2 = (stat *)((long)&param_2->st_dev + 1);
                      }
                      goto LAB_004025b1;
                    }
                  }
                  else {
LAB_004028ee:
                    lVar6 = FUN_00404ed0(0,3,local_f8);
                    piVar13 = __errno_location();
                    error(1,*piVar13,"%s",lVar6);
                    psVar23 = unaff_R15;
                  }
                  psVar22 = (stat *)0x0;
                  while( true ) {
                    if (psVar22 == local_100) {
                      return 0;
                    }
                    pvVar2 = (void *)param_2->__unused[*(long *)(lVar6 + (long)psVar22 * 8) + -0xf];
                    psVar20 = (stat *)((param_2->__unused +
                                       *(long *)(lVar6 + (long)psVar22 * 8) + -0xf)[1] -
                                      (long)pvVar2);
                    psVar12 = (stat *)fwrite_unlocked(pvVar2,1,(size_t)psVar20,stdout);
                    psVar21 = local_100;
                    if (psVar20 != psVar12) break;
                    psVar22 = (stat *)((long)&psVar22->st_dev + 1);
                  }
                  goto LAB_004025b1;
                }
                goto LAB_0040247b;
              }
LAB_00402534:
              uVar15 = dcgettext(0,"read error",5);
              piVar13 = __errno_location();
              error(1,*piVar13,uVar15);
LAB_0040255e:
              psVar20 = (stat *)((long)unaff_R15[-1].__unused + 0x17);
              psVar22 = (stat *)0x0;
              while( true ) {
                lVar6 = FUN_004050e0(local_d8,psVar20);
                pvVar2 = (void *)param_2->__unused[lVar6 + -0xf];
                __n = (param_2->__unused + lVar6 + -0xf)[1] - (long)pvVar2;
                sVar7 = fwrite_unlocked(pvVar2,1,__n,stdout);
                psVar21 = local_d8;
                psVar23 = local_100;
                if (__n != sVar7) break;
                psVar22 = (stat *)((long)&psVar22->st_dev + 1);
                if (local_100 == psVar22) {
                  return 0;
                }
              }
            } while( true );
          }
          FUN_004030b0(stdin);
          if ((local_cd != 0) || (local_100 == (stat *)0xffffffffffffffff)) goto LAB_004027ca;
          goto LAB_0040276e;
        }
        FUN_004030b0(psVar20,2);
        if (local_cd == 0) goto LAB_0040213b;
      }
      else {
LAB_0040273e:
        FUN_004030b0(psVar20);
        if ((local_cd == 0) && (local_100 != (stat *)0xffffffffffffffff)) {
          if (local_100 != (stat *)0x0) {
LAB_0040276e:
            param_2 = &local_c8;
            iVar3 = __fxstat(1,0,param_2);
            if ((((iVar3 == 0) && ((local_c8.st_mode & 0xd000) == 0x8000)) &&
                (_Var10 = lseek(0,0,1), -1 < _Var10)) && (local_c8.st_size - _Var10 < 0x800001))
            goto LAB_004027ca;
          }
LAB_0040213b:
          local_d8 = (stat *)FUN_004050a0(psVar8,0xffffffffffffffff);
          psVar20 = stdin;
          if (local_d8 == (stat *)0x0) goto LAB_0040225e;
          local_e8 = (stat *)(ulong)(uint)(int)local_cf;
          psVar12 = (stat *)0x400;
          if (local_100 < (stat *)0x401) {
            psVar12 = local_100;
          }
          psVar22 = (stat *)FUN_00406960(psVar12,0x18);
          uVar16 = 0;
          psVar8 = (stat *)0x0;
          while( true ) {
            do {
              psVar23 = psVar8;
              if (local_100 == psVar23) goto LAB_004025db;
              param_2 = (stat *)((long)psVar23 * 0x18);
              uVar16 = FUN_004032f0((long)(((stat *)(((stat *)(param_2->__unused + -0xf))->__unused
                                                    + -0xf))->__unused + 0xfffffffffffffff1) +
                                    (long)((stat *)(((stat *)(((stat *)(psVar22->__unused + -0xf))->
                                                              __unused + -0xf))->__unused + -0xf))->
                                          __unused + 0xffffffffffffff88U,psVar20,local_e8);
              if (uVar16 == 0) goto LAB_00402664;
              psVar8 = (stat *)((long)&psVar23->st_dev + 1);
            } while (psVar8 < psVar12);
            psVar12 = (stat *)&psVar12[7].st_nlink;
            if ((SUB168(ZEXT816(0x18) * ZEXT816(psVar12),0) < 0) ||
               (SUB168(ZEXT816(0x18) * ZEXT816(psVar12) >> 0x40,0) != 0)) break;
            psVar22 = (stat *)FUN_004067f0(psVar22);
            memset(&psVar22->st_mode + (long)psVar23 * 6,0,0x6000);
          }
          goto LAB_00402b70;
        }
      }
LAB_004027ca:
      param_2 = &local_c8;
      local_e8 = (stat *)(ulong)(uint)(int)local_cf;
      _Var11 = FUN_00405fa0(stdin,param_2);
      if (_Var11 == 0) goto LAB_00402ad0;
      if (((stat *)local_c8.st_dev != (stat *)0x0) &&
         (local_cf != *(char *)((long)(local_c8.st_dev + 0x78) + (_Var11 - 0x79)))) {
        *(char *)((long)(local_c8.st_dev + 0x78) + (_Var11 - 0x78)) = local_cf;
        local_c8.st_dev = (__dev_t)((long)(__dev_t *)local_c8.st_dev + 1);
      }
      uVar18 = (long)(local_c8.st_dev + 0x78) + (_Var11 - 0x78);
      unaff_R15 = (stat *)0x0;
      uVar19 = _Var11;
      while (psVar20 = (stat *)((long)&unaff_R15->st_dev + 1), uVar19 < uVar18) {
        lVar6 = FUN_004083a0(uVar19,local_e8,uVar18 - uVar19);
        unaff_R15 = psVar20;
        uVar19 = lVar6 + 1;
      }
      if ((SUB168(ZEXT816(8) * ZEXT816(psVar20),0) < 0) ||
         (SUB168(ZEXT816(8) * ZEXT816(psVar20) >> 0x40,0) != 0)) {
LAB_00402b70:
                    /* WARNING: Subroutine does not return */
        FUN_004069e0();
      }
      param_2 = (stat *)FUN_00406790((long)psVar20 * 8);
      param_2->st_dev = _Var11;
      psVar20 = param_2;
      while (psVar20 != (stat *)(param_2->__unused + (long)((long)unaff_R15[-1].__unused + 9))) {
        psVar20 = (stat *)&psVar20->st_ino;
        lVar6 = FUN_004083a0(_Var11,local_e8,uVar18 - _Var11);
        _Var11 = lVar6 + 1;
        *(__ino_t *)psVar20 = _Var11;
      }
      local_e0 = 0;
      local_e8 = param_2;
    }
    else {
LAB_004023ca:
      unaff_R15 = (stat *)(long)(int)uVar17;
      lVar6 = 0;
      psVar20 = unaff_R15;
      while ((int)lVar6 < (int)uVar17) {
        lVar9 = lVar6 + -0xf;
        uVar16 = 0xffffffffffffffff;
        lVar6 = lVar6 + 1;
        pcVar4 = (char *)param_2->__unused[lVar9];
        do {
          if (uVar16 == 0) break;
          uVar16 = uVar16 - 1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + (ulong)bVar25 * -2 + 1;
        } while (cVar1 != '\0');
        psVar20 = (stat *)((long)psVar20->__unused + (~uVar16 - 0x79));
      }
      pcVar4 = (char *)FUN_00406790(psVar20);
      uVar16 = (ulong)uVar17;
      local_e8 = (stat *)((ulong)local_e8 & 0xffffffffffffff00 | (ulong)local_e0);
      for (lVar6 = 0; (int)lVar6 < (int)uVar17; lVar6 = lVar6 + 1) {
        pcVar5 = stpcpy(pcVar4,(char *)param_2->__unused[lVar6 + -0xf]);
        param_2->__unused[lVar6 + -0xf] = (long)pcVar4;
        *pcVar5 = local_cf;
        pcVar4 = pcVar5 + 1;
      }
      param_2->__unused[(long)((long)unaff_R15[-1].__unused + 9)] = (long)pcVar4;
    }
  }
  if (local_cd == 0) goto LAB_0040228b;
  local_d8 = (stat *)FUN_004050a0(psVar8,0xffffffffffffffff);
  if (local_d8 != (stat *)0x0) {
    if (local_e0 != 0) goto LAB_0040247b;
    if (local_ce == 0) goto LAB_00402b35;
    goto LAB_0040247b;
  }
LAB_0040225e:
  do {
    uVar15 = FUN_00404ed0(0,3,psVar8);
    piVar13 = __errno_location();
    error(1,*piVar13,"%s",uVar15);
LAB_0040228b:
    if (unaff_R15 < local_100) {
      local_100 = unaff_R15;
    }
    uVar15 = FUN_00405280(local_100,unaff_R15);
    local_d8 = (stat *)FUN_004050a0(psVar8,uVar15);
  } while (local_d8 == (stat *)0x0);
  local_e0 = local_e0 | local_ce;
  if (local_e0 == 0) {
    psVar22 = (stat *)0x0;
    iVar3 = FUN_00407390(stdin);
    local_cd = local_e0;
    if (iVar3 == 0) goto LAB_004026ab;
    goto LAB_00402534;
  }
  lVar6 = FUN_004052b0(local_d8,local_100,unaff_R15);
  if (local_f8 == (stat *)0x0) goto LAB_00402305;
  lVar9 = FUN_00403130(local_f8,&DAT_0040a122,stdout);
  if (lVar9 == 0) goto LAB_004028ee;
  goto LAB_00402305;
}


void FUN_00402b80(undefined param_1,undefined param_2,undefined param_3)

{
  undefined unaff_retaddr;
  undefined auStack_8 [8];
  
  (*(code *)PTR___libc_start_main_0060eff0)
            (FUN_00401da0,unaff_retaddr,&stack0x00000008,FUN_00409f20,FUN_00409f80,param_3,auStack_8
            );
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* WARNING: Removing unreachable block (ram,0x00402bb8) */
/* WARNING: Removing unreachable block (ram,0x00402bc2) */

void FUN_00402bab(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00402bf9) */

void FUN_00402bca(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00402c36) */

void FUN_00402c01(void)

{
  if (DAT_0060f308 != '\0') {
    return;
  }
  FUN_00402bab();
  DAT_0060f308 = 1;
  return;
}


/* WARNING: Removing unreachable block (ram,0x00402bf9) */

void thunk_FUN_00402bca(void)

{
  return;
}


void FUN_00402c60(int param_1)

{
  FILE *pFVar1;
  int iVar2;
  undefined uVar3;
  char *pcVar4;
  byte **ppbVar5;
  undefined uVar7;
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
  byte **ppbVar6;
  
  uVar7 = DAT_0060f328;
  bVar13 = 0;
  if (param_1 != 0) {
    uVar3 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(stderr,1,uVar3,uVar7);
    goto LAB_00402c9f;
  }
  uVar3 = dcgettext(0,
                    "Usage: %s [OPTION]... [FILE]\n  or:  %s -e [OPTION]... [ARG]...\n  or:  %s -i LO-HI [OPTION]...\n"
                    ,5);
  __printf_chk(1,uVar3,uVar7,uVar7,uVar7);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"Write a random permutation of the input lines to standard output.\n"
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
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -e, --echo                treat each ARG as an input line\n  -i, --input-range=LO-HI   treat each number LO through HI as an input line\n  -n, --head-count=COUNT    output at most COUNT lines\n  -o, --output=FILE         write result to FILE instead of standard output\n      --random-source=FILE  get random bytes from FILE\n  -r, --repeat              output lines can be repeated\n"
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
  local_88 = &DAT_00409fe9;
  local_80 = "test invocation";
  local_78[0] = (byte *)0x40a063;
  local_78[1] = (byte *)0x409ffb;
  local_78[2] = (byte *)0x40a011;
  local_78[3] = (byte *)0x40a01b;
  local_78[4] = (byte *)0x40a02a;
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
    pbVar10 = &DAT_00409fe4;
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
        pbVar9 = &DAT_00409fe4;
        goto LAB_00402fb3;
      }
    }
    pbVar9 = &DAT_00409fe4;
    uVar7 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    pcVar4 = " invocation";
    __printf_chk(1,uVar7,"https://www.gnu.org/software/coreutils/",&DAT_00409fe4);
  }
  else {
    uVar7 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar7,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
      iVar2 = strncmp(pcVar4,"en_",3);
      if (iVar2 != 0) {
LAB_00402fb3:
        uVar7 = dcgettext(0,"Report %s translation bugs to <https://translationproject.org/team/>\n"
                          ,5);
        __printf_chk(1,uVar7,&DAT_00409fe4);
      }
    }
    pcVar4 = " invocation";
    uVar7 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    __printf_chk(1,uVar7,"https://www.gnu.org/software/coreutils/",&DAT_00409fe4);
    if (pbVar9 != &DAT_00409fe4) {
      pcVar4 = "";
    }
  }
  uVar7 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(1,uVar7,pbVar9,pcVar4);
LAB_00402c9f:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}


void FUN_00402fe0(undefined param_1)

{
  DAT_0060f320 = param_1;
  return;
}


void FUN_00402ff0(undefined param_1)

{
  DAT_0060f318 = param_1;
  return;
}


void FUN_00403000(void)

{
  int iVar1;
  int *piVar2;
  undefined uVar3;
  undefined uVar4;
  
  iVar1 = FUN_004084b0(stdout);
  if (iVar1 != 0) {
    piVar2 = __errno_location();
    if ((DAT_0060f318 == '\0') || (*piVar2 != 0x20)) {
      uVar3 = dcgettext(0,"write error",5);
      if (DAT_0060f320 == 0) {
        error(0,*piVar2,"%s",uVar3);
      }
      else {
        uVar4 = FUN_00404ea0();
        error(0,*piVar2,"%s: %s",uVar4,uVar3);
      }
      goto LAB_0040307e;
    }
  }
  iVar1 = FUN_004084b0(stderr);
  if (iVar1 == 0) {
    return;
  }
LAB_0040307e:
                    /* WARNING: Subroutine does not return */
  _exit(DAT_0060f278);
}


void FUN_004030a0(void)

{
  (*(code *)PTR_posix_fadvise_0060f140)();
  return;
}


void FUN_004030b0(FILE *param_1,int param_2)

{
  int __fd;
  
  if (param_1 != (FILE *)0x0) {
    __fd = fileno(param_1);
    posix_fadvise(__fd,0,0,param_2);
    return;
  }
  return;
}


undefined FUN_004030e0(int param_1)

{
  int __fd;
  int *piVar1;
  undefined uVar2;
  
  uVar2 = 1;
  __fd = open("/dev/null",0);
  if ((param_1 != __fd) && (uVar2 = 0, -1 < __fd)) {
    close(__fd);
    piVar1 = __errno_location();
    *piVar1 = 9;
    return 0;
  }
  return uVar2;
}


long FUN_00403130(undefined param_1,undefined param_2,FILE *param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  long lVar5;
  char cVar6;
  char cVar7;
  
  iVar3 = fileno(param_3);
  piVar4 = __errno_location();
  if (iVar3 == 1) {
    cVar6 = false;
    cVar7 = false;
LAB_004031a0:
    iVar3 = dup2(0,0);
    if (iVar3 != 0) {
      cVar2 = FUN_004030e0();
      if (cVar2 != '\0') {
        cVar1 = cVar2;
        if ((bool)cVar7 != false) goto LAB_00403228;
        goto LAB_004031c4;
      }
      cVar2 = '\x01';
      lVar5 = 0;
      goto LAB_004031ef;
    }
    cVar2 = '\0';
    cVar1 = '\0';
    if ((bool)cVar7 == false) {
LAB_004031c4:
      if (((bool)cVar6 == false) || (cVar6 = FUN_004030e0(2), cVar6 != '\0')) goto LAB_004031dc;
      iVar3 = *piVar4;
      lVar5 = 0;
      goto LAB_00403296;
    }
LAB_00403228:
    cVar2 = cVar1;
    cVar7 = FUN_004030e0(1);
    if (cVar7 != '\0') goto LAB_004031c4;
    iVar3 = *piVar4;
    lVar5 = 0;
    if ((bool)cVar6 != false) {
      close(2);
    }
  }
  else {
    if (iVar3 == 2) {
      cVar6 = false;
LAB_0040318a:
      iVar3 = dup2(1,1);
      cVar7 = iVar3 != 1;
      goto LAB_004031a0;
    }
    if (iVar3 != 0) {
      iVar3 = dup2(2,2);
      cVar6 = iVar3 != 2;
      goto LAB_0040318a;
    }
    cVar6 = '\0';
    cVar7 = '\0';
    cVar2 = '\0';
LAB_004031dc:
    lVar5 = FUN_00407450(param_1,param_2,param_3);
LAB_004031ef:
    iVar3 = *piVar4;
    if (cVar6 != '\0') {
LAB_00403296:
      close(2);
    }
    if (cVar7 == '\0') goto joined_r0x0040325d;
  }
  close(1);
joined_r0x0040325d:
  if (cVar2 != '\0') {
    close(0);
  }
  if (lVar5 == 0) {
    *piVar4 = iVar3;
  }
  return lVar5;
}


void FUN_004032e0(undefined (*param_1) [16])

{
  *(undefined *)param_1[1] = 0;
  *param_1 = (undefined)0x0;
  return;
}


long * FUN_004032f0(long *param_1,_IO_FILE *param_2,uint param_3)

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
LAB_0040333b:
      pcVar4 = pcVar6;
      uVar8 = uVar3;
      if (pcVar6 == pcVar9) goto LAB_00403397;
    }
    else {
      uVar3 = __uflow(param_2);
      if (uVar3 != 0xffffffff) goto LAB_0040333b;
      if (pcVar5 == pcVar6) {
        return (long *)0x0;
      }
      if ((*(byte *)&param_2->_flags & 0x20) != 0) {
        return (long *)0x0;
      }
      if (pcVar6[-1] == cVar7) goto LAB_004033ec;
      if (pcVar6 != pcVar9) {
        *pcVar6 = cVar7;
        pcVar6 = pcVar6 + 1;
        goto LAB_004033ec;
      }
      uVar3 = (int)cVar7;
      uVar8 = param_3 & 0xff;
LAB_00403397:
      lVar2 = *param_1;
      pcVar5 = (char *)FUN_004068f0(pcVar5,param_1);
      param_1[2] = (long)pcVar5;
      pcVar9 = pcVar5 + *param_1;
      pcVar4 = pcVar5 + lVar2;
      uVar8 = uVar8 & 0xff;
    }
    pcVar6 = pcVar4 + 1;
    *pcVar4 = (char)uVar8;
    if (uVar3 == (int)cVar7) {
LAB_004033ec:
      param_1[1] = (long)pcVar6 - (long)pcVar5;
      return param_1;
    }
  } while( true );
}


void FUN_00403410(undefined param_1,undefined param_2)

{
  FUN_004032f0(param_1,param_2,10);
  return;
}


void FUN_00403420(long param_1)

{
  free(*(void **)(param_1 + 0x10));
  return;
}


void FUN_00403430(byte *param_1)

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
        pbVar6 = &DAT_0040a830;
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
  DAT_0060f328 = param_1;
  program_invocation_name = param_1;
  return;
}


char * FUN_004034d0(char *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  byte *pbVar3;
  
  pcVar2 = (char *)dcgettext(0,param_1,5);
  if (param_1 == pcVar2) {
    pbVar3 = (byte *)FUN_00409860();
    if ((*pbVar3 & 0xdf) == 0x55) {
      if (((((pbVar3[1] & 0xdf) != 0x54) || ((pbVar3[2] & 0xdf) != 0x46)) || (pbVar3[3] != 0x2d)) ||
         ((pbVar3[4] != 0x38 || (pbVar3[5] != 0)))) {
LAB_004035a8:
        pcVar2 = "\"";
        if (param_2 != 9) {
          pcVar2 = "\'";
        }
        return pcVar2;
      }
      cVar1 = *pcVar2;
      pcVar2 = &DAT_0040a841;
      if (cVar1 != '`') {
        pcVar2 = &DAT_0040a836;
      }
    }
    else {
      if (((((*pbVar3 & 0xdf) != 0x47) || ((pbVar3[1] & 0xdf) != 0x42)) || (pbVar3[2] != 0x31)) ||
         (((pbVar3[3] != 0x38 || (pbVar3[4] != 0x30)) ||
          ((pbVar3[5] != 0x33 || ((pbVar3[6] != 0x30 || (pbVar3[7] != 0)))))))) goto LAB_004035a8;
      cVar1 = *pcVar2;
      pcVar2 = &DAT_0040a83d;
      if (cVar1 != '`') {
        pcVar2 = &DAT_0040a83a;
      }
    }
  }
  return pcVar2;
}


ulong FUN_004035d0(undefined *param_1,ulong param_2,char *param_3,ulong param_4,int param_5,
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
LAB_00404221:
    if (param_2 != 0) {
      bVar3 = false;
      local_5b = false;
      bVar2 = true;
      local_70 = 0;
      goto LAB_00403e56;
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
      goto LAB_00404221;
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
      param_8 = (char *)FUN_004034d0(&DAT_0040a845,param_5);
      param_9 = (char *)FUN_004034d0(&DAT_0040c0ef);
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
LAB_00403668:
  uVar22 = 0;
  bVar5 = local_5b;
LAB_00403678:
  bVar23 = param_4 != uVar22;
  if (param_4 == 0xffffffffffffffff) {
    bVar23 = param_3[uVar22] != '\0';
  }
  bVar26 = bVar6;
  if (!bVar23) goto LAB_00403df8;
  bVar20 = (bool)(param_5 != 2 & bVar6);
  __s1 = (byte *)(param_3 + uVar22);
  uVar16 = uVar15;
  bVar4 = bVar3;
  if (bVar20) {
    if (local_a0 == 0) {
LAB_00403d70:
      uVar19 = (ulong)*__s1;
      switch(uVar19) {
      case 0:
        goto switchD_00403d82_caseD_0;
      default:
        bVar20 = false;
        goto switchD_00403bee_caseD_1;
      case 7:
        bVar17 = 0x61;
        goto LAB_00403a85;
      case 8:
        bVar17 = 0x62;
        break;
      case 9:
switchD_00403d82_caseD_9:
        bVar17 = 0x74;
        break;
      case 10:
switchD_00403d82_caseD_a:
        bVar17 = 0x6e;
        break;
      case 0xb:
switchD_00403d82_caseD_b:
        bVar17 = 0x76;
        goto LAB_00403a85;
      case 0xc:
switchD_00403d82_caseD_c:
        bVar17 = 0x66;
LAB_00403a85:
        if (local_5c) {
          bVar25 = false;
          goto LAB_004039d8;
        }
LAB_00403a90:
        bVar23 = false;
        goto LAB_0040384b;
      case 0xd:
        bVar20 = false;
switchD_00403768_caseD_d:
        bVar25 = param_5 == 2;
        uVar19 = 0xd;
        bVar13 = 0x72;
        goto LAB_004039a0;
      case 0x20:
        bVar25 = false;
LAB_00403dca:
        uVar19 = 0x20;
        goto LAB_00403d92;
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
switchD_00403768_caseD_21:
        bVar25 = false;
        goto LAB_004039ab;
      case 0x23:
      case 0x7e:
        bVar26 = false;
LAB_00403daa:
        if (uVar22 == 0) {
          bVar25 = false;
          bVar23 = bVar20;
          bVar20 = bVar26;
          goto LAB_004037b8;
        }
        bVar23 = false;
        goto LAB_004037cf;
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
LAB_00403d92:
        bVar24 = false;
        bVar23 = bVar20;
        bVar20 = bVar25;
        goto LAB_004037d1;
      case 0x27:
        bVar20 = false;
        goto switchD_00403bee_caseD_27;
      case 0x3f:
        bVar20 = false;
        goto switchD_00403bee_caseD_3f;
      case 0x5c:
        bVar20 = false;
        goto switchD_00403768_caseD_5c;
      case 0x7b:
      case 0x7d:
        bVar20 = false;
        goto switchD_00403bee_caseD_7b;
      }
      bVar25 = false;
      bVar23 = false;
      goto joined_r0x004039c7;
    }
    if ((param_4 == 0xffffffffffffffff) && (1 < local_a0)) {
      param_4 = strlen(param_3);
    }
    if ((param_4 < uVar22 + local_a0) || (iVar7 = memcmp(__s1,local_78,local_a0), iVar7 != 0))
    goto LAB_00403d70;
    if (!local_5c) {
      uVar19 = (ulong)*__s1;
      bVar25 = bVar20;
      switch(uVar19) {
      case 0:
        goto switchD_00403768_caseD_0;
      default:
        goto switchD_00403bee_caseD_1;
      case 7:
        bVar17 = 0x61;
        goto LAB_00403a90;
      case 8:
        bVar25 = false;
        bVar23 = false;
        bVar17 = 0x62;
        break;
      case 9:
        goto switchD_00403d82_caseD_9;
      case 10:
        goto switchD_00403d82_caseD_a;
      case 0xb:
        goto switchD_00403d82_caseD_b;
      case 0xc:
        goto switchD_00403d82_caseD_c;
      case 0xd:
        goto switchD_00403768_caseD_d;
      case 0x20:
        goto LAB_00403dca;
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
        goto switchD_00403768_caseD_21;
      case 0x23:
      case 0x7e:
        bVar26 = bVar20;
        goto LAB_00403daa;
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
        goto LAB_00403d92;
      case 0x27:
        goto switchD_00403bee_caseD_27;
      case 0x3f:
        goto switchD_00403bee_caseD_3f;
      case 0x5c:
        goto switchD_00403768_caseD_5c;
      case 0x7b:
      case 0x7d:
        goto switchD_00403bee_caseD_7b;
      }
      goto LAB_00403812;
    }
    goto LAB_004039ea;
  }
  uVar19 = (ulong)*__s1;
  switch(uVar19) {
  case 0:
    if (bVar6) {
switchD_00403d82_caseD_0:
      if (!local_5c) {
        bVar20 = false;
switchD_00403768_caseD_0:
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
            goto LAB_004038c8;
          }
LAB_00403b0a:
          param_1[uVar16] = 0x5c;
          uVar15 = uVar16;
        }
        else if (uVar15 < uVar9) goto LAB_00403b0a;
        uVar16 = uVar15 + 1;
        bVar24 = bVar23;
        if (param_5 == 2) {
          bVar17 = 0x30;
          bVar23 = false;
          bVar4 = bVar3;
          goto LAB_004038c8;
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
LAB_00403b49:
        bVar17 = (byte)uVar19;
        bVar23 = false;
        uVar15 = uVar16;
        bVar4 = bVar3;
        if ((bool)(bVar6 ^ 1U | bVar26)) goto LAB_004038c8;
        goto LAB_004037d1;
      }
      bVar26 = param_5 == 2;
      goto LAB_004039dc;
    }
    if ((param_6 & 1) == 0) {
      bVar25 = param_5 == 2;
      uVar19 = 0;
      bVar23 = false;
      bVar20 = false;
      goto LAB_004037b8;
    }
    uVar22 = uVar22 + 1;
    goto LAB_00403678;
  default:
switchD_00403bee_caseD_1:
    bVar25 = bVar6;
    if (sVar8 != 1) {
      local_40[0] = (mbstate_t)0x0;
      if (param_4 == 0xffffffffffffffff) {
        param_4 = strlen(param_3);
      }
      uVar21 = 0;
      do {
        uVar1 = uVar22 + uVar21;
        lVar11 = FUN_00408320(&local_44,param_3 + uVar1,param_4 - uVar1,local_40);
        if (lVar11 == 0) break;
        if (lVar11 == -1) {
          bVar23 = false;
          goto LAB_004044fa;
        }
        if (lVar11 == -2) {
          if ((param_4 <= uVar1) || (param_3[uVar1] == '\0')) goto LAB_00404637;
          goto LAB_00404627;
        }
        if (((param_5 == 2) && (local_5c)) && (lVar11 != 1)) {
          pcVar12 = param_3 + uVar1 + 1;
          do {
            if (((byte)(*pcVar12 + 0xa5U) < 0x22) &&
               ((1L << (*pcVar12 + 0xa5U & 0x3f) & 0x20000002bU) != 0)) {
              param_5 = 2;
              goto LAB_004039dc;
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
      goto LAB_004044fa;
    }
    ppuVar10 = __ctype_b_loc();
    uVar21 = 1;
    bVar25 = ((*ppuVar10)[uVar19] & 0x4000) == 0;
    bVar23 = !bVar25;
    bVar25 = (bool)(bVar25 & bVar6);
    goto LAB_00403bc4;
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
    goto LAB_00403c02;
  case 10:
    uVar19 = 10;
    bVar13 = 0x6e;
    goto LAB_00403c02;
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
LAB_00403c02:
    bVar25 = param_5 == 2;
    bVar20 = (bool)(local_5c & bVar25);
    if (bVar20) {
LAB_00403c1a:
      param_5 = 2;
      goto LAB_004039dc;
    }
    break;
  case 0x20:
    uVar19 = 0x20;
    goto LAB_004037a6;
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
LAB_004037a6:
    bVar25 = param_5 == 2;
    if ((local_5c) && (bVar25)) goto LAB_00403c1a;
    goto LAB_004037b8;
  case 0x23:
  case 0x7e:
LAB_0040379d:
    bVar25 = param_5 == 2;
    if (uVar22 == 0) goto LAB_004037a6;
    goto LAB_004039ab;
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
    goto switchD_00403bee_caseD_25;
  case 0x27:
switchD_00403bee_caseD_27:
    bVar5 = bVar23;
    if (param_5 != 2) {
      bVar25 = false;
      uVar19 = 0x27;
      goto LAB_004037b8;
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
      goto LAB_004038c8;
    }
    goto LAB_004039dc;
  case 0x3f:
switchD_00403bee_caseD_3f:
    if (param_5 == 2) {
      if (!local_5c) {
        bVar17 = 0x3f;
        bVar24 = false;
        bVar23 = false;
        goto LAB_004038c8;
      }
      goto LAB_004039dc;
    }
    if (param_5 != 5) {
      bVar25 = param_5 == 2;
      uVar19 = 0x3f;
      bVar23 = false;
      goto LAB_004037b8;
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
        goto LAB_00403b49;
      }
      goto LAB_004039ea;
    }
    bVar25 = false;
    uVar19 = 0x3f;
    bVar23 = false;
    goto LAB_004037b8;
  case 0x5c:
    if (param_5 != 2) {
switchD_00403768_caseD_5c:
      uVar19 = 0x5c;
      bVar17 = 0x5c;
      bVar13 = 0x5c;
      bVar25 = (bool)(bVar6 & local_5c & local_a0 != 0);
      if (!bVar25) break;
      uVar22 = uVar22 + 1;
      bVar23 = false;
      goto LAB_004038e4;
    }
    if (local_5c) goto LAB_004039dc;
    uVar22 = uVar22 + 1;
    bVar23 = false;
    bVar17 = 0x5c;
    goto LAB_004038e4;
  case 0x7b:
  case 0x7d:
switchD_00403bee_caseD_7b:
    bVar24 = param_4 != 1;
    if (param_4 == 0xffffffffffffffff) {
      bVar24 = param_3[1] != '\0';
    }
    bVar25 = param_5 == 2;
    if (!bVar24) goto LAB_0040379d;
    goto LAB_004039ab;
  }
LAB_004039a0:
  if (!bVar6) {
LAB_004039ab:
    bVar23 = false;
    goto LAB_004037b8;
  }
  bVar23 = false;
  bVar17 = bVar13;
  goto joined_r0x004039c7;
LAB_00403df8:
  if ((uVar15 == 0) && ((bool)(local_5c & param_5 == 2))) {
    param_5 = 2;
LAB_004039dc:
    if (bVar26) {
      param_5 = 4;
    }
LAB_004039ea:
    uVar9 = FUN_004035d0(param_1,uVar9,param_3,param_4,param_5,param_6 & 0xfffffffd,0,param_8,
                         param_9);
    return uVar9;
  }
  bVar26 = (bool)(param_5 == 2 & (local_5c ^ 1U));
  bVar23 = (bool)(local_5c ^ 1U);
  if ((!bVar26) || (bVar23 = bVar26, !bVar5)) {
LAB_004046cd:
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
    uVar9 = FUN_004035d0(param_1,local_70,param_3,param_4,5,param_6,param_7,param_8,param_9);
    return uVar9;
  }
  local_5b = uVar9 == 0 && local_70 != 0;
  param_2 = local_70;
  bVar23 = bVar5;
  if (uVar9 != 0 || local_70 == 0) goto LAB_004046cd;
LAB_00403e56:
  *param_1 = 0x27;
  param_5 = 2;
  uVar15 = 1;
  local_78 = "\'";
  local_a0 = 1;
  local_5c = false;
  uVar9 = param_2;
  goto LAB_00403668;
  while (__s1[uVar21] != 0) {
LAB_00404627:
    uVar21 = uVar21 + 1;
    if (param_4 <= uVar22 + uVar21) break;
  }
LAB_00404637:
  bVar23 = false;
LAB_004044fa:
  if (1 < uVar21) {
LAB_004040be:
    bVar26 = false;
    uVar21 = uVar21 + uVar22;
    uVar16 = uVar22;
    do {
      bVar17 = (byte)uVar19;
      if (bVar25) {
        bVar26 = param_5 == 2;
        if (local_5c) goto LAB_004039dc;
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
        if (uVar21 <= uVar22) goto LAB_0040385d;
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
        if (uVar21 <= uVar22) goto LAB_004038e4;
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
LAB_00403bc4:
  if (bVar25) {
    bVar23 = false;
    bVar25 = bVar6;
    goto LAB_004040be;
  }
switchD_00403bee_caseD_25:
  bVar25 = param_5 == 2;
LAB_004037b8:
  bVar17 = (byte)uVar19;
  bVar24 = (bool)((bVar6 ^ 1U | bVar25) ^ 1 | local_5c);
  bVar26 = bVar20;
  if (bVar24) {
LAB_004037cf:
    bVar24 = false;
    bVar20 = bVar26;
LAB_004037d1:
    bVar17 = (byte)uVar19;
    uVar16 = uVar15;
    bVar4 = bVar3;
    if ((param_7 == 0) || ((*(uint *)(param_7 + (uVar19 >> 5) * 4) >> (bVar17 & 0x1f) & 1) == 0))
    goto LAB_004038c8;
    bVar25 = param_5 == 2;
  }
  else {
LAB_004038c8:
    bVar25 = param_5 == 2;
    uVar15 = uVar16;
    bVar3 = bVar4;
    if (!bVar20) {
      uVar22 = uVar22 + 1;
      bVar3 = (bool)((bVar24 ^ 1U) & bVar4);
LAB_004038e4:
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
      goto LAB_0040385d;
    }
  }
joined_r0x004039c7:
  if (local_5c) {
LAB_004039d8:
    bVar26 = (bool)(bVar6 & bVar25);
    goto LAB_004039dc;
  }
LAB_00403812:
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
LAB_0040384b:
  if (uVar15 < uVar9) {
    param_1[uVar15] = 0x5c;
  }
  uVar15 = uVar15 + 1;
  uVar22 = uVar22 + 1;
  bVar4 = bVar3;
LAB_0040385d:
  bVar3 = bVar4;
  if (uVar15 < uVar9) {
    param_1[uVar15] = bVar17;
  }
  uVar15 = uVar15 + 1;
  if (!bVar23) {
    bVar2 = false;
  }
  goto LAB_00403678;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00404800(int param_1,undefined param_2,undefined param_3,undefined *param_4)

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
  puVar8 = (undefined *)PTR_DAT_0060f2b8;
  if (DAT_0060f2d0 <= param_1) {
    if (param_1 == 0x7fffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_004069e0();
    }
    if (PTR_DAT_0060f2b8 == &DAT_0060f2c0) {
      puVar8 = (undefined *)FUN_004067f0(0);
      uVar6 = PTR_DAT_0060f2c8._4_4_;
      uVar5 = PTR_DAT_0060f2c8._0_4_;
      uVar3 = _UNK_0060f2c4;
      PTR_DAT_0060f2b8 = (undefined *)puVar8;
      *puVar8 = _DAT_0060f2c0;
      puVar8[1] = uVar3;
      puVar8[2] = uVar5;
      puVar8[3] = uVar6;
    }
    else {
      puVar8 = (undefined *)FUN_004067f0(PTR_DAT_0060f2b8);
      PTR_DAT_0060f2b8 = (undefined *)puVar8;
    }
    memset(puVar8 + (long)DAT_0060f2d0 * 4,0,(long)((param_1 + 1) - DAT_0060f2d0) << 4);
    DAT_0060f2d0 = param_1 + 1;
  }
  uVar2 = param_4[1];
  puVar10 = (ulong *)(puVar8 + (long)param_1 * 4);
  uVar4 = *puVar10;
  __ptr = (undefined *)puVar10[1];
  uVar9 = FUN_004035d0(__ptr,uVar4,param_2,param_3,*param_4,uVar2 | 1,param_4 + 2,
                       *(undefined *)(param_4 + 10),*(undefined *)(param_4 + 0xc));
  if (uVar4 <= uVar9) {
    uVar9 = uVar9 + 1;
    *puVar10 = uVar9;
    if (__ptr != &DAT_0060f340) {
      free(__ptr);
    }
    __ptr = (undefined *)FUN_00406790(uVar9);
    uVar3 = *param_4;
    puVar10[1] = (ulong)__ptr;
    FUN_004035d0(__ptr,uVar9,param_2,param_3,uVar3,uVar2 | 1,param_4 + 2,
                 *(undefined *)(param_4 + 10),*(undefined *)(param_4 + 0xc));
  }
  *piVar7 = iVar1;
  return __ptr;
}


void FUN_004049a0(undefined *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_0060f440;
  }
  FUN_00406990(param_1,0x38);
  *piVar2 = iVar1;
  return;
}


undefined FUN_004049e0(undefined *param_1)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = (undefined *)&DAT_0060f440;
  }
  return *param_1;
}


void FUN_004049f0(undefined *param_1,undefined param_2)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = (undefined *)&DAT_0060f440;
  }
  *param_1 = param_2;
  return;
}


uint FUN_00404a00(undefined *param_1,byte param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_0060f440;
  }
  uVar1 = *(uint *)(param_1 + (ulong)(param_2 >> 5) * 4 + 8);
  uVar2 = uVar1 >> (param_2 & 0x1f);
  *(uint *)(param_1 + (ulong)(param_2 >> 5) * 4 + 8) =
       ((param_3 ^ uVar2) & 1) << (param_2 & 0x1f) ^ uVar1;
  return uVar2 & 1;
}


undefined FUN_00404a40(undefined *param_1,undefined param_2)

{
  undefined uVar1;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_0060f440;
  }
  uVar1 = *(undefined *)(param_1 + 4);
  *(undefined *)(param_1 + 4) = param_2;
  return uVar1;
}


void FUN_00404a60(undefined *param_1,long param_2,long param_3)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = (undefined *)&DAT_0060f440;
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


void FUN_00404a90(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                 undefined *param_5)

{
  int iVar1;
  int *piVar2;
  
  if (param_5 == (undefined *)0x0) {
    param_5 = (undefined *)&DAT_0060f440;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  FUN_004035d0(param_1,param_2,param_3,param_4,*param_5,param_5[1],param_5 + 2,
               *(undefined *)(param_5 + 10),*(undefined *)(param_5 + 0xc));
  *piVar2 = iVar1;
  return;
}


undefined FUN_00404b10(undefined param_1,undefined param_2,long *param_3,undefined *param_4)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined uVar4;
  uint uVar5;
  
  if (param_4 == (undefined *)0x0) {
    param_4 = (undefined *)&DAT_0060f440;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  uVar5 = (uint)(param_3 == (long *)0x0) | param_4[1];
  lVar3 = FUN_004035d0(0,0,param_1,param_2,*param_4,uVar5,param_4 + 2,*(undefined *)(param_4 + 10),
                       *(undefined *)(param_4 + 0xc));
  uVar4 = FUN_00406790(lVar3 + 1);
  FUN_004035d0(uVar4,lVar3 + 1,param_1,param_2,*param_4,uVar5,param_4 + 2,
               *(undefined *)(param_4 + 10),*(undefined *)(param_4 + 0xc));
  *piVar2 = iVar1;
  if (param_3 != (long *)0x0) {
    *param_3 = lVar3;
  }
  return uVar4;
}


void FUN_00404c00(undefined param_1,undefined param_2,undefined param_3)

{
  FUN_00404b10(param_1,param_2,0,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404c10(void)

{
  void **ppvVar1;
  void *__ptr;
  undefined *__ptr_00;
  void **ppvVar2;
  
  __ptr_00 = PTR_DAT_0060f2b8;
  if (1 < DAT_0060f2d0) {
    ppvVar2 = (void **)(PTR_DAT_0060f2b8 + 0x18);
    ppvVar1 = (void **)(PTR_DAT_0060f2b8 + (ulong)(DAT_0060f2d0 - 2) * 0x10 + 0x28);
    do {
      __ptr = *ppvVar2;
      ppvVar2 = ppvVar2 + 2;
      free(__ptr);
    } while (ppvVar2 != ppvVar1);
  }
  if (*(undefined **)(__ptr_00 + 8) != &DAT_0060f340) {
    free(*(undefined **)(__ptr_00 + 8));
    _DAT_0060f2c0 = 0x100;
    PTR_DAT_0060f2c8 = &DAT_0060f340;
  }
  if (__ptr_00 != &DAT_0060f2c0) {
    free(__ptr_00);
    PTR_DAT_0060f2b8 = &DAT_0060f2c0;
  }
  DAT_0060f2d0 = 1;
  return;
}


void FUN_00404cb0(undefined param_1,undefined param_2)

{
  FUN_00404800(param_1,param_2,0xffffffffffffffff,&DAT_0060f440);
  return;
}


void FUN_00404cd0(void)

{
  FUN_00404800();
  return;
}


void FUN_00404ce0(undefined param_1)

{
  FUN_00404800(0,param_1,0xffffffffffffffff,&DAT_0060f440);
  return;
}


void FUN_00404d00(undefined param_1,undefined param_2)

{
  FUN_00404800(0,param_1,param_2,&DAT_0060f440);
  return;
}


void FUN_00404d20(undefined param_1,int param_2,undefined param_3)

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
    FUN_00404800(param_1,param_3,0xffffffffffffffff,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00404d90(undefined param_1,int param_2,undefined param_3,undefined param_4)

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
    FUN_00404800(param_1,param_3,param_4,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00404e00(undefined param_1,undefined param_2)

{
  FUN_00404d20(0,param_1,param_2);
  return;
}


void FUN_00404e10(undefined param_1,undefined param_2,undefined param_3)

{
  FUN_00404d90(0,param_1,param_2,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404e20(undefined param_1,undefined param_2,byte param_3)

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
  
  local_18 = DAT_0060f470;
  local_48 = _DAT_0060f440;
  uStack_40 = uRam000000000060f448;
  local_38 = _DAT_0060f450;
  uStack_30 = uRam000000000060f458;
  puVar1 = (uint *)((long)&uStack_40 + (ulong)(param_3 >> 5) * 4);
  local_28 = _DAT_0060f460;
  uStack_20 = uRam000000000060f468;
  uVar2 = *puVar1;
  *puVar1 = (~(uVar2 >> (param_3 & 0x1f)) & 1) << (param_3 & 0x1f) ^ uVar2;
  FUN_00404800(0,param_1,param_2,&local_48);
  return;
}


void FUN_00404e90(undefined param_1,char param_2)

{
  FUN_00404e20(param_1,0xffffffffffffffff,(int)param_2);
  return;
}


void FUN_00404ea0(undefined param_1)

{
  FUN_00404e20(param_1,0xffffffffffffffff,0x3a);
  return;
}


void FUN_00404ec0(undefined param_1,undefined param_2)

{
  FUN_00404e20(param_1,param_2,0x3a);
  return;
}


void FUN_00404ed0(undefined param_1,int param_2,undefined param_3)

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
    FUN_00404800(param_1,param_3,0xffffffffffffffff,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404f40(undefined param_1,long param_2,long param_3,undefined param_4,undefined param_5
                 )

{
  undefined local_48;
  undefined uStack_40;
  undefined local_38;
  undefined uStack_30;
  undefined local_28;
  long lStack_20;
  long local_18;
  
  uStack_40 = uRam000000000060f448;
  local_38 = _DAT_0060f450;
  uStack_30 = uRam000000000060f458;
  local_28 = _DAT_0060f460;
  lStack_20 = uRam000000000060f468;
  local_18 = DAT_0060f470;
  local_48 = CONCAT44((int)((ulong)_DAT_0060f440 >> 0x20),10);
  if ((param_2 != 0) && (param_3 != 0)) {
    lStack_20 = param_2;
    local_18 = param_3;
    FUN_00404800(param_1,param_4,param_5,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00404fb0(void)

{
  FUN_00404f40();
  return;
}


void FUN_00404fc0(undefined param_1,undefined param_2,undefined param_3)

{
  FUN_00404f40(0,param_1,param_2,param_3,0xffffffffffffffff);
  return;
}


void FUN_00404fe0(undefined param_1,undefined param_2,undefined param_3,undefined param_4)

{
  FUN_00404f40(0,param_1,param_2,param_3,param_4);
  return;
}


void FUN_00405000(void)

{
  FUN_00404800();
  return;
}


void FUN_00405010(undefined param_1,undefined param_2)

{
  FUN_00404800(0,param_1,param_2,&DAT_0060f280);
  return;
}


void FUN_00405030(undefined param_1,undefined param_2)

{
  FUN_00404800(param_1,param_2,0xffffffffffffffff,&DAT_0060f280);
  return;
}


void FUN_00405050(undefined param_1)

{
  FUN_00404800(0,param_1,0xffffffffffffffff,&DAT_0060f280);
  return;
}


void FUN_00405070(undefined param_1)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)FUN_00406790(0x18);
  *puVar1 = param_1;
  puVar1[2] = 0;
  puVar1[1] = 0;
  return;
}


long * FUN_004050a0(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_004055f0();
  plVar2 = (long *)0x0;
  if (lVar1 != 0) {
    plVar2 = (long *)FUN_00406790(0x18);
    *plVar2 = lVar1;
    plVar2[2] = 0;
    plVar2[1] = 0;
  }
  return plVar2;
}


undefined FUN_004050d0(undefined *param_1)

{
  return *param_1;
}


ulong FUN_004050e0(undefined *param_1,ulong param_2)

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
      FUN_00405900(uVar3,local_40,lVar7);
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


void FUN_004051e0(void *param_1)

{
  __explicit_bzero_chk(param_1,0x18,0xffffffffffffffff);
  free(param_1);
  return;
}


undefined FUN_00405200(undefined *param_1)

{
  int iVar1;
  undefined uVar2;
  int *piVar3;
  
  uVar2 = FUN_00405a60(*param_1);
  piVar3 = __errno_location();
  iVar1 = *piVar3;
  __explicit_bzero_chk(param_1,0x18,0xffffffffffffffff);
  free(param_1);
  *piVar3 = iVar1;
  return uVar2;
}


ulong FUN_00405260(ulong *param_1,ulong param_2)

{
  return *param_1 % param_2;
}


ulong FUN_00405270(ulong *param_1,ulong *param_2)

{
  return *param_2 & 0xffffffffffffff00 | (ulong)(*param_1 == *param_2);
}


ulong FUN_00405280(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = param_2 - 1;
  if (uVar1 != 0) {
    lVar2 = 0;
    do {
      lVar2 = lVar2 + 1;
      uVar1 = uVar1 >> 1;
    } while (uVar1 != 0);
    uVar1 = param_1 * lVar2 + 7U >> 3;
  }
  return uVar1;
}


undefined * FUN_004052b0(undefined param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined uVar4;
  ulong uVar5;
  long lVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong uVar9;
  long local_70;
  ulong local_58;
  undefined local_50;
  ulong local_48;
  undefined local_40;
  
  if (param_2 == 0) {
    return (undefined *)0x0;
  }
  if (param_2 == 1) {
    puVar3 = (undefined *)FUN_00406790(8);
    uVar4 = FUN_004050e0(param_1,param_3 - 1);
    *puVar3 = uVar4;
    return puVar3;
  }
  if (param_3 < 0x20000) {
    puVar3 = (undefined *)FUN_00406790(param_3 * 8);
    if (param_3 != 0) goto LAB_00405352;
LAB_00405365:
    bVar2 = false;
    local_70 = 0;
  }
  else {
    if (param_3 / param_2 < 0x20) {
      if (((long)(param_3 << 3) < 0) || (param_3 >> 0x3d != 0)) goto LAB_0040557f;
      puVar3 = (undefined *)FUN_00406790(param_3 << 3,param_2,param_3 % param_2);
LAB_00405352:
      uVar5 = 0;
      do {
        puVar3[uVar5] = uVar5;
        uVar5 = uVar5 + 1;
      } while (uVar5 < param_3);
      goto LAB_00405365;
    }
    local_70 = FUN_00408ea0(param_2 * 2,0,FUN_00405260,FUN_00405270,free);
    if (((local_70 == 0) || ((long)(param_2 << 3) < 0)) || (param_2 >> 0x3d != 0))
    goto LAB_0040557f;
    puVar3 = (undefined *)FUN_00406790();
    bVar2 = true;
  }
  uVar5 = 0;
  do {
    while( true ) {
      lVar6 = FUN_004050e0(param_1,(param_3 - 1) - uVar5);
      uVar9 = lVar6 + uVar5;
      if (!bVar2) break;
      local_40 = 0;
      local_48 = uVar5;
      puVar7 = (ulong *)FUN_00409680(local_70,&local_48);
      local_50 = 0;
      local_58 = uVar9;
      puVar8 = (ulong *)FUN_00409680(local_70,&local_58);
      if (puVar7 == (ulong *)0x0) {
        puVar7 = (ulong *)FUN_00406790(0x10);
        puVar7[1] = uVar5;
        *puVar7 = uVar5;
      }
      if (puVar8 == (ulong *)0x0) {
        puVar8 = (ulong *)FUN_00406790(0x10);
        puVar8[1] = uVar9;
        *puVar8 = uVar9;
      }
      else {
        uVar9 = puVar8[1];
      }
      uVar1 = puVar7[1];
      puVar7[1] = uVar9;
      puVar8[1] = uVar1;
      lVar6 = FUN_00409640(local_70,puVar7);
      if ((lVar6 == 0) || (lVar6 = FUN_00409640(local_70,puVar8), lVar6 == 0)) goto LAB_0040557f;
      puVar3[uVar5] = puVar7[1];
      uVar5 = uVar5 + 1;
      if (param_2 <= uVar5) goto LAB_00405471;
    }
    uVar4 = puVar3[uVar5];
    puVar3[uVar5] = puVar3[uVar9];
    uVar5 = uVar5 + 1;
    puVar3[uVar9] = uVar4;
  } while (uVar5 < param_2);
LAB_00405471:
  if (bVar2) {
    FUN_004090e0(local_70);
  }
  else {
    if (((long)(param_2 << 3) < 0) || (param_2 >> 0x3d != 0)) {
LAB_0040557f:
                    /* WARNING: Subroutine does not return */
      FUN_004069e0();
    }
    puVar3 = (undefined *)FUN_004067f0(puVar3);
  }
  return puVar3;
}


void FUN_00405590(long param_1)

{
  undefined uVar1;
  int *piVar2;
  undefined uVar3;
  
  if (param_1 != 0) {
    uVar1 = FUN_00405050();
    piVar2 = __errno_location();
    if (*piVar2 == 0) {
      uVar3 = dcgettext(0,"%s: end of file",5);
    }
    else {
      uVar3 = dcgettext(0,"%s: read error",5);
    }
    error(DAT_0060f278,*piVar2,uVar3,uVar1);
    FUN_00401d79();
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


FILE ** FUN_004055f0(FILE *param_1,ulong param_2)

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
    ppFVar3 = (FILE **)FUN_00406790(0x1038);
    *ppFVar3 = (FILE *)0x0;
    ppFVar3[1] = (FILE *)FUN_00405590;
    ppFVar3[2] = (FILE *)0x0;
    return ppFVar3;
  }
  if (param_1 != (FILE *)0x0) {
    pFVar2 = (FILE *)FUN_00408510(param_1,&DAT_0040b5a4);
    if (pFVar2 != (FILE *)0x0) {
      ppFVar3 = (FILE **)FUN_00406790(0x1038);
      *ppFVar3 = pFVar2;
      __n = 0x1000;
      if (param_2 < 0x1001) {
        __n = param_2;
      }
      ppFVar3[1] = (FILE *)FUN_00405590;
      ppFVar3[2] = param_1;
      setvbuf(pFVar2,(char *)(ppFVar3 + 3),0,__n);
      return ppFVar3;
    }
    return (FILE **)0x0;
  }
  ppFVar4 = (FILE **)FUN_00406790(0x1038);
  *ppFVar4 = (FILE *)0x0;
  ppFVar3 = ppFVar4 + 4;
  ppFVar4[1] = (FILE *)FUN_00405590;
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
    if (0x7ff < (long)pFVar2) goto LAB_004056f8;
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
    if (0x7ff < lVar7) goto LAB_004056f8;
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
    if (0x7ff < uVar5) goto LAB_004056f8;
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
LAB_004056f8:
  FUN_00405d60(ppFVar3);
  return ppFVar4;
}


void FUN_004058e0(long param_1,undefined param_2)

{
  *(undefined *)(param_1 + 8) = param_2;
  return;
}


void FUN_004058f0(long param_1,undefined param_2)

{
  *(undefined *)(param_1 + 0x10) = param_2;
  return;
}


void FUN_00405900(FILE **param_1,void *param_2,FILE *param_3)

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
    goto LAB_00405a15;
  }
  do {
    param_2 = (void *)((long)__dest + (long)pFVar5);
    param_3 = (FILE *)((long)param_3 - (long)pFVar5);
    memcpy(__dest,(void *)((0x800 - (long)pFVar5) + (long)__src),(size_t)pFVar5);
    if (((ulong)param_2 & 7) == 0) goto LAB_004059fb;
    pFVar5 = (FILE *)0x800;
    FUN_00405ab0(ppFVar1,__src);
    __dest = param_2;
  } while ((FILE *)0x800 < param_3);
  goto LAB_00405a0f;
LAB_004059fb:
  while ((FILE *)0x7ff < param_3) {
    FUN_00405ab0(ppFVar1,param_2);
    param_3 = (FILE *)&param_3[-10]._fileno;
    param_2 = (void *)((long)param_2 + 0x800);
    if (param_3 == (FILE *)0x0) {
      param_1[3] = (FILE *)0x0;
      return;
    }
  }
  FUN_00405ab0(ppFVar1,__src);
LAB_00405a0f:
  pFVar5 = (FILE *)0x800;
LAB_00405a15:
  memcpy(param_2,__src,(size_t)param_3);
  param_1[3] = (FILE *)((long)pFVar5 - (long)param_3);
  return;
}


int FUN_00405a60(FILE **param_1)

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
      if (_Var4 == -1) goto LAB_004073f7;
    }
    iVar1 = FUN_00407410(__stream);
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
LAB_004073f7:
  iVar1 = fclose(__stream);
  return iVar1;
}


void FUN_00405ab0(long *param_1,long *param_2)

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


void FUN_00405d60(ulong *param_1)

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


void * FUN_00405fa0(FILE *param_1,ulong *param_2)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  size_t sVar4;
  int *piVar5;
  __off_t _Var6;
  size_t __size;
  ulong uVar7;
  void *__ptr;
  size_t __n;
  stat local_c8;
  
  iVar1 = fileno(param_1);
  iVar1 = __fxstat(1,iVar1,&local_c8);
  if ((((iVar1 < 0) || ((local_c8.st_mode & 0xf000) != 0x8000)) ||
      (_Var6 = ftello(param_1), _Var6 < 0)) || (local_c8.st_size <= _Var6)) {
    __size = 0x2000;
  }
  else {
    __size = (local_c8.st_size - _Var6) + 1;
  }
  pvVar3 = malloc(__size);
  if (pvVar3 != (void *)0x0) {
    uVar7 = 0;
    do {
      __ptr = pvVar3;
      __n = __size - uVar7;
      sVar4 = fread((void *)((long)__ptr + uVar7),1,__n,param_1);
      uVar7 = uVar7 + sVar4;
      if (__n != sVar4) {
        piVar5 = __errno_location();
        iVar1 = *piVar5;
        iVar2 = ferror(param_1);
        if (iVar2 == 0) {
          if ((uVar7 < __size - 1) && (pvVar3 = realloc(__ptr,uVar7 + 1), pvVar3 != (void *)0x0)) {
            __ptr = pvVar3;
          }
          *(undefined *)((long)__ptr + uVar7) = 0;
          *param_2 = uVar7;
          return __ptr;
        }
        goto LAB_004060bb;
      }
      if (__size == 0xffffffffffffffff) {
        piVar5 = __errno_location();
        free(__ptr);
        *piVar5 = 0xc;
        return (void *)0x0;
      }
      sVar4 = (__size >> 1) + __size;
      if (~(__size >> 1) <= __size) {
        sVar4 = 0xffffffffffffffff;
      }
      pvVar3 = realloc(__ptr,sVar4);
      __size = sVar4;
    } while (pvVar3 != (void *)0x0);
    piVar5 = __errno_location();
    iVar1 = *piVar5;
LAB_004060bb:
    pvVar3 = (void *)0x0;
    free(__ptr);
    *piVar5 = iVar1;
  }
  return pvVar3;
}


void * FUN_00406140(char *param_1,undefined param_2,char *param_3)

{
  int iVar1;
  FILE *pFVar2;
  void *__ptr;
  int *piVar3;
  int iVar4;
  
  pFVar2 = fopen(param_1,param_3);
  if (pFVar2 == (FILE *)0x0) {
    return (void *)0x0;
  }
  __ptr = (void *)FUN_00405fa0(pFVar2,param_2);
  piVar3 = __errno_location();
  iVar4 = *piVar3;
  iVar1 = FUN_00407390(pFVar2);
  if (iVar1 == 0) {
    return __ptr;
  }
  if (__ptr != (void *)0x0) {
    iVar4 = *piVar3;
    free(__ptr);
  }
  *piVar3 = iVar4;
  return (void *)0x0;
}


void FUN_004061d0(undefined param_1,undefined param_2)

{
  FUN_00406140(param_1,param_2,"r");
  return;
}


void FUN_004061e0(undefined param_1,undefined param_2)

{
  FUN_00406140(param_1,param_2,&DAT_0040b5a4);
  return;
}


undefined
FUN_004061f0(FILE *param_1,long param_2,undefined param_3,undefined param_4,undefined *param_5,
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
  uVar1 = dcgettext(0,&DAT_0040b5ba,5);
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
    goto LAB_0040646c;
  case 5:
    uVar1 = param_5[3];
    uVar4 = param_5[2];
    uVar5 = param_5[1];
    uVar6 = *param_5;
    uVar7 = dcgettext(0,"Written by %s, %s, %s,\n%s, and %s.\n",5);
LAB_0040646c:
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
    goto LAB_00406509;
  case 7:
    uVar1 = param_5[2];
    uVar4 = param_5[5];
    uVar5 = param_5[4];
    uVar6 = param_5[3];
    local_58 = param_5[1];
    uVar7 = *param_5;
    uVar3 = dcgettext(0,"Written by %s, %s, %s,\n%s, %s, %s, and %s.\n",5);
LAB_00406509:
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
    goto LAB_004062ea;
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
LAB_004062ea:
  uVar1 = __fprintf_chk(param_1,1,uVar3,uVar7,local_50,local_58,uVar6,uVar5,uVar4,uVar1,local_48);
  return uVar1;
}


void FUN_004065d0(void)

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
  FUN_004061f0();
  return;
}


void FUN_004065f0(void)

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
  FUN_004061f0();
  return;
}


void FUN_00406650(void)

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
  FUN_004061f0();
  return;
}


void FUN_00406710(void)

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


void FUN_00406790(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_004069e0();
  }
  return;
}


void FUN_004067b0(ulong param_1,ulong param_2)

{
  if ((-1 < SUB168(ZEXT816(param_1) * ZEXT816(param_2),0)) &&
     (SUB168(ZEXT816(param_1) * ZEXT816(param_2) >> 0x40,0) == 0)) {
    FUN_00406790();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004069e0();
}


void thunk_FUN_00406790(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_004069e0();
  }
  return;
}


void * FUN_004067f0(void *param_1,size_t param_2)

{
  void *pvVar1;
  
  if ((param_2 == 0) && (param_1 != (void *)0x0)) {
    free(param_1);
    return (void *)0x0;
  }
  pvVar1 = realloc(param_1,param_2);
  if ((pvVar1 == (void *)0x0) && (param_2 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_004069e0();
  }
  return pvVar1;
}


void FUN_00406830(undefined param_1,ulong param_2,ulong param_3)

{
  if ((-1 < SUB168(ZEXT816(param_2) * ZEXT816(param_3),0)) &&
     (SUB168(ZEXT816(param_2) * ZEXT816(param_3) >> 0x40,0) == 0)) {
    FUN_004067f0();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004069e0();
}


void FUN_00406860(long param_1,ulong *param_2,ulong param_3)

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
    if ((SUB168(ZEXT816(uVar2) * ZEXT816(param_3),0) < 0) || (uVar3 != 0)) goto LAB_004068bb;
  }
  else {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x5555555555555554);
    uVar3 = SUB168(auVar1 % ZEXT816(param_3),0);
    if (SUB168(auVar1 / ZEXT816(param_3),0) <= uVar2) {
LAB_004068bb:
                    /* WARNING: Subroutine does not return */
      FUN_004069e0(param_1,param_2,uVar3);
    }
    uVar2 = (uVar2 >> 1) + 1 + uVar2;
  }
  *param_2 = uVar2;
  FUN_004067f0(param_1,uVar2 * param_3);
  return;
}


void FUN_004068f0(long param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (param_1 == 0) {
    if (uVar1 == 0) {
      *param_2 = 0x80;
      FUN_004067f0(0,0x80);
      return;
    }
    if ((long)uVar1 < 0) goto LAB_0040693a;
  }
  else {
    if (0x5555555555555553 < uVar1) {
LAB_0040693a:
                    /* WARNING: Subroutine does not return */
      FUN_004069e0();
    }
    uVar1 = (uVar1 >> 1) + 1 + uVar1;
  }
  *param_2 = uVar1;
  FUN_004067f0(param_1,uVar1);
  return;
}


void FUN_00406940(size_t param_1)

{
  void *__s;
  
  __s = (void *)FUN_00406790();
  memset(__s,0,param_1);
  return;
}


void FUN_00406960(size_t param_1,ulong param_2)

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
  FUN_004069e0();
}


void FUN_00406990(void *param_1,size_t param_2)

{
  void *__dest;
  
  __dest = (void *)FUN_00406790(param_2);
  memcpy(__dest,param_1,param_2);
  return;
}


void FUN_004069c0(char *param_1)

{
  void *__dest;
  size_t sVar1;
  
  sVar1 = strlen(param_1);
  __dest = (void *)FUN_00406790(sVar1 + 1);
  memcpy(__dest,param_1,sVar1 + 1);
  return;
}


void FUN_004069e0(void)

{
  undefined uVar1;
  
  uVar1 = dcgettext(0,"memory exhausted",5);
  error(DAT_0060f278,0,"%s",uVar1);
                    /* WARNING: Subroutine does not return */
  abort();
}


ulong FUN_00406a20(undefined param_1,undefined param_2,ulong param_3,ulong param_4,
                  undefined param_5,undefined param_6,int param_7)

{
  ulong uVar1;
  int iVar2;
  int *piVar3;
  undefined uVar4;
  ulong local_40 [2];
  
  iVar2 = FUN_00406f50(param_1,0,param_2,local_40);
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
  uVar4 = FUN_00405050(param_1);
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


void FUN_00406af0(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                 undefined param_5,undefined param_6)

{
  FUN_00406a20(param_1,10,param_2,param_3,param_4,param_5,param_6);
  return;
}


ulong FUN_00406b20(byte *param_1,byte **param_2,uint param_3,ulong *param_4,char *param_5)

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
    if ((param_5 == (char *)0x0) || (bVar12 = *pbVar5, bVar12 == 0)) goto LAB_00406bc0;
    pcVar7 = strchr(param_5,(int)(char)bVar12);
    if (pcVar7 == (char *)0x0) goto switchD_00406c9c_caseD_1;
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
        goto LAB_00406c8a;
      }
      if (bVar1 != 0x42) {
                    /* WARNING: Could not recover jumptable at 0x00406c79. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar6 = (*(code *)(&PTR_LAB_0040b978)[bVar8])();
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
LAB_00406c8a:
  iVar10 = (int)uVar11;
  switch(bVar12 - 0x42 & 0xff) {
  case 0:
    if (uVar6 >> 0x36 == 0) {
      uVar6 = uVar6 << 10;
      break;
    }
    goto LAB_00406cf7;
  default:
switchD_00406c9c_caseD_1:
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
    goto LAB_00406d84;
  case 5:
  case 0x25:
    uVar11 = (ulong)iVar10;
    if (((SUB168(ZEXT816(uVar6) * ZEXT816(uVar11) >> 0x40,0) != 0) ||
        (auVar2 = (ZEXT816(uVar6) * ZEXT816(uVar11) & (undefined)0xffffffffffffffff) *
                  ZEXT816(uVar11), SUB168(auVar2 >> 0x40,0) != 0)) ||
       (auVar2 = (auVar2 & (undefined)0xffffffffffffffff) * ZEXT816(uVar11),
       uVar6 = SUB168(auVar2,0), SUB168(auVar2 >> 0x40,0) != 0)) {
      uVar6 = 0xffffffffffffffff;
      uVar14 = 1;
    }
    break;
  case 9:
  case 0x29:
    auVar2 = ZEXT816(uVar6) * ZEXT816(uVar11);
    goto joined_r0x00406cbc;
  case 0xb:
  case 0x2b:
    auVar2 = ZEXT816(uVar6) * ZEXT816((ulong)(long)iVar10);
    if (SUB168(auVar2 >> 0x40,0) != 0) goto LAB_00406cf7;
    auVar2 = (auVar2 & (undefined)0xffffffffffffffff) * ZEXT816((ulong)(long)iVar10);
joined_r0x00406cbc:
    uVar6 = SUB168(auVar2,0);
    if (SUB168(auVar2 >> 0x40,0) != 0) {
LAB_00406cf7:
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
    goto LAB_00406d84;
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
    goto LAB_00406d84;
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
    goto LAB_00406d84;
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
LAB_00406d84:
    uVar14 = (ulong)(uVar13 | uVar9);
    break;
  case 0x20:
    if (uVar6 >> 0x37 != 0) goto LAB_00406cf7;
    uVar6 = uVar6 << 9;
    break;
  case 0x21:
    break;
  case 0x35:
    if ((long)uVar6 < 0) goto LAB_00406cf7;
    uVar6 = uVar6 * 2;
  }
  *param_2 = pbVar5 + iVar15;
  if (pbVar5[iVar15] != 0) {
    uVar14 = (ulong)((uint)uVar14 | 2);
  }
LAB_00406bc0:
  *param_4 = uVar6;
  return uVar14;
}


ulong FUN_00406f50(byte *param_1,byte **param_2,uint param_3,ulong *param_4,char *param_5)

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
    if ((param_5 == (char *)0x0) || (bVar12 = *pbVar5, bVar12 == 0)) goto LAB_00406ff2;
    pcVar7 = strchr(param_5,(int)(char)bVar12);
    if (pcVar7 == (char *)0x0) goto switchD_004070dc_caseD_1;
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
        goto LAB_004070ca;
      }
      if (bVar1 != 0x42) {
                    /* WARNING: Could not recover jumptable at 0x004070b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar6 = (*(code *)(&PTR_LAB_0040bcb8)[bVar8])();
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
LAB_004070ca:
  iVar10 = (int)uVar11;
  switch(bVar12 - 0x42 & 0xff) {
  case 0:
    if (uVar6 >> 0x36 == 0) {
      uVar6 = uVar6 << 10;
      break;
    }
    goto LAB_00407137;
  default:
switchD_004070dc_caseD_1:
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
    goto LAB_004071c4;
  case 5:
  case 0x25:
    uVar11 = (ulong)iVar10;
    if (((SUB168(ZEXT816(uVar6) * ZEXT816(uVar11) >> 0x40,0) != 0) ||
        (auVar2 = (ZEXT816(uVar6) * ZEXT816(uVar11) & (undefined)0xffffffffffffffff) *
                  ZEXT816(uVar11), SUB168(auVar2 >> 0x40,0) != 0)) ||
       (auVar2 = (auVar2 & (undefined)0xffffffffffffffff) * ZEXT816(uVar11),
       uVar6 = SUB168(auVar2,0), SUB168(auVar2 >> 0x40,0) != 0)) {
      uVar6 = 0xffffffffffffffff;
      uVar14 = 1;
    }
    break;
  case 9:
  case 0x29:
    auVar2 = ZEXT816(uVar6) * ZEXT816(uVar11);
    goto joined_r0x004070fc;
  case 0xb:
  case 0x2b:
    auVar2 = ZEXT816(uVar6) * ZEXT816((ulong)(long)iVar10);
    if (SUB168(auVar2 >> 0x40,0) != 0) goto LAB_00407137;
    auVar2 = (auVar2 & (undefined)0xffffffffffffffff) * ZEXT816((ulong)(long)iVar10);
joined_r0x004070fc:
    uVar6 = SUB168(auVar2,0);
    if (SUB168(auVar2 >> 0x40,0) != 0) {
LAB_00407137:
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
    goto LAB_004071c4;
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
    goto LAB_004071c4;
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
    goto LAB_004071c4;
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
LAB_004071c4:
    uVar14 = (ulong)(uVar13 | uVar9);
    break;
  case 0x20:
    if (uVar6 >> 0x37 != 0) goto LAB_00407137;
    uVar6 = uVar6 << 9;
    break;
  case 0x21:
    break;
  case 0x35:
    if ((long)uVar6 < 0) goto LAB_00407137;
    uVar6 = uVar6 * 2;
  }
  *param_2 = pbVar5 + iVar15;
  if (pbVar5[iVar15] != 0) {
    uVar14 = (ulong)((uint)uVar14 | 2);
  }
LAB_00406ff2:
  *param_4 = uVar6;
  return uVar14;
}


int FUN_00407390(FILE *param_1)

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
      if (_Var4 == -1) goto LAB_004073f7;
    }
    iVar1 = FUN_00407410(param_1);
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
LAB_004073f7:
  iVar1 = fclose(param_1);
  return iVar1;
}


void FUN_00407410(FILE *param_1)

{
  int iVar1;
  
  if (param_1 != (FILE *)0x0) {
    iVar1 = __freading();
    if ((iVar1 != 0) && ((param_1->_flags & 0x100U) != 0)) {
      FUN_004074f0(param_1,0,1);
      fflush(param_1);
      return;
    }
  }
  fflush(param_1);
  return;
}


FILE * FUN_00407450(char *param_1,char *param_2,FILE *param_3)

{
  int iVar1;
  int iVar2;
  FILE *pFVar3;
  int *piVar4;
  
  pFVar3 = freopen(param_1,param_2,param_3);
  if ((pFVar3 != (FILE *)0x0) && (param_1 != (char *)0x0)) {
    iVar1 = fileno(pFVar3);
    iVar2 = dup2(iVar1,iVar1);
    if ((iVar2 < 0) && (piVar4 = __errno_location(), *piVar4 == 9)) {
      iVar2 = open("/dev/null",0x80000);
      if (iVar1 != iVar2) {
        iVar1 = dup2(iVar2,iVar1);
        if (iVar1 < 0) {
          close(iVar2);
          return pFVar3;
        }
        close(iVar2);
      }
      pFVar3 = freopen(param_1,param_2,pFVar3);
      return pFVar3;
    }
  }
  return pFVar3;
}


ulong FUN_004074f0(FILE *param_1,__off_t param_2,int param_3)

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


void FUN_00407550(long param_1,int *param_2)

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
      if (iVar3 <= iVar8) goto LAB_004075cc;
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
      if (iVar9 <= iVar3) goto LAB_004075cc;
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
LAB_004075cc:
  param_2[0xc] = iVar2;
  param_2[0xb] = iVar1 + (iVar2 - iVar3);
  return;
}


int FUN_00407630(int param_1,undefined *param_2,char *param_3,char **param_4,undefined *param_5,
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
      if ((iVar5 == 0) && (sVar7 = strlen(__s1_00), sVar7 == sVar15)) goto LAB_00407850;
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
            if (local_70 == (char *)0x0) goto LAB_00407790;
          }
          else if (local_70 == (char *)0x0) {
            local_70 = (char *)calloc((long)iVar5,1);
            if (local_70 == (char *)0x0) {
              bVar3 = true;
              goto LAB_00407790;
            }
            bVar4 = true;
            local_70[(int)local_44] = '\x01';
          }
          local_70[lVar16] = '\x01';
        }
      }
LAB_00407790:
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
              __fprintf_chk(__stream,1,&DAT_0040c0e9,param_9,*param_4);
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
LAB_00407850:
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


uint FUN_00407c50(uint param_1,undefined *param_2,char *param_3,long param_4,undefined param_5,
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
LAB_00407c9a:
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
          goto LAB_00407d9d;
        }
        pbVar8 = *(byte **)(param_7 + 8);
      }
      param_7[10] = 0;
    }
LAB_00407d9d:
    param_7[6] = 1;
    cVar2 = *param_3;
LAB_00407da8:
    if (cVar2 == ':') {
      uVar3 = 0;
    }
    if (pbVar8 == (byte *)0x0) goto LAB_00407d18;
LAB_00407dbc:
    if (*pbVar8 == 0) goto LAB_00407d18;
  }
  else {
    if (param_7[6] == 0) goto LAB_00407c9a;
    cVar2 = *param_3;
    pbVar8 = *(byte **)(param_7 + 8);
    if ((cVar2 - 0x2bU & 0xfd) != 0) goto LAB_00407da8;
    pcVar4 = param_3 + 1;
    param_3 = param_3 + 1;
    if (*pcVar4 == ':') {
      uVar3 = 0;
    }
    if (pbVar8 != (byte *)0x0) goto LAB_00407dbc;
LAB_00407d18:
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
        FUN_00407550(param_2,param_7);
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
LAB_00407e86:
      if (uVar11 != param_1) {
        *param_7 = uVar11;
      }
      return 0xffffffff;
    }
    lVar6 = 3;
    pbVar8 = (byte *)param_2[(int)uVar11];
    pbVar9 = pbVar8;
    pbVar10 = &DAT_0040c101;
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
          FUN_00407550(param_2,param_7);
          uVar11 = param_7[0xb];
        }
      }
      param_7[0xc] = param_1;
      *param_7 = param_1;
      goto LAB_00407e86;
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
        puVar15 = &DAT_0040c101;
        goto LAB_00407fe5;
      }
      if ((int)param_6 != 0) {
        if (pbVar8[2] == 0) {
          pcVar4 = strchr(param_3,(int)(char)bVar14);
          param_6 = param_6 & 0xffffffff;
          if (pcVar4 != (char *)0x0) goto LAB_00407f90;
        }
        *(byte **)(param_7 + 8) = pbVar8 + 1;
        uVar11 = FUN_00407630(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar3,
                              &DAT_0040c102);
        if (uVar11 != 0xffffffff) {
          return uVar11;
        }
        pbVar8 = (byte *)param_2[(int)*param_7];
      }
    }
LAB_00407f90:
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
  puVar15 = &DAT_0040c120;
LAB_00407fe5:
  uVar3 = FUN_00407630(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar3,puVar15);
  return uVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408220(void)

{
  DAT_0060f480 = DAT_0060f2d8._4_4_;
  _DAT_0060f484 = (undefined)DAT_0060f2d8;
  FUN_00407c50();
  DAT_0060f2d8._4_4_ = DAT_0060f480;
  DAT_0060f4c8 = DAT_0060f490;
  _DAT_0060f2d4 = DAT_0060f488;
  return;
}


void FUN_00408280(void)

{
  FUN_00408220();
  return;
}


void FUN_004082a0(void)

{
  FUN_00408220();
  return;
}


void FUN_004082c0(void)

{
  FUN_00407c50();
  return;
}


void FUN_004082e0(void)

{
  FUN_00408220();
  return;
}


void FUN_00408300(void)

{
  FUN_00407c50();
  return;
}


size_t FUN_00408320(wchar_t *param_1,byte *param_2,size_t param_3,mbstate_t *param_4)

{
  char cVar1;
  size_t sVar2;
  wchar_t local_1c;
  
  if (param_2 == (byte *)0x0) {
    param_3 = 1;
    param_2 = (byte *)0x40c11f;
  }
  else {
    if (param_3 == 0) {
      return 0xfffffffffffffffe;
    }
    if (param_1 != (wchar_t *)0x0) goto LAB_00408344;
  }
  param_1 = &local_1c;
LAB_00408344:
  sVar2 = mbrtowc(param_1,(char *)param_2,param_3,param_4);
  if ((0xfffffffffffffffd < sVar2) && (cVar1 = FUN_004085b0(0), cVar1 == '\0')) {
    sVar2 = 1;
    *param_1 = (uint)*param_2;
  }
  return sVar2;
}


ulong * FUN_004083a0(ulong *param_1,char param_2,ulong param_3)

{
  char cVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  
  if (param_3 == 0) {
    return (ulong *)0x0;
  }
  if (((ulong)param_1 & 7) == 0) {
LAB_004083e0:
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
      if (((ulong)param_1 & 7) == 0) goto LAB_004083e0;
      cVar1 = *(char *)param_1;
    }
  }
  return param_1;
}


ulong FUN_004084b0(uint *param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  
  lVar2 = __fpending();
  uVar1 = *param_1;
  uVar3 = FUN_00407390(param_1);
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


FILE * FUN_00408510(char *param_1,char *param_2)

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
    iVar2 = FUN_00409dd0(uVar1);
    if (iVar2 < 0) {
      piVar5 = __errno_location();
      pFVar4 = (FILE *)0x0;
      iVar2 = *piVar5;
      FUN_00407390(__stream);
      *piVar5 = iVar2;
    }
    else {
      iVar3 = FUN_00407390(__stream);
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


bool FUN_004085b0(int param_1)

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
    pbVar5 = &DAT_0040c124;
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


ulong FUN_00408610(ulong param_1)

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
LAB_00408690:
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
        if (uVar3 <= uVar4) goto LAB_00408690;
        lVar5 = lVar5 + 8;
      } while (uVar1 != 0);
    }
    uVar3 = uVar3 + 2;
  } while( true );
}


ulong FUN_004086b0(ulong param_1,ulong param_2)

{
  return (param_1 >> 3 | param_1 << 0x3d) % param_2;
}


bool FUN_004086c0(long param_1,long param_2)

{
  return param_1 == param_2;
}


long FUN_004086d0(long *param_1,undefined param_2)

{
  ulong uVar1;
  
  uVar1 = (*(code *)param_1[6])(param_2,param_1[2]);
  if (uVar1 <= (ulong)param_1[2] && param_1[2] != uVar1) {
    return uVar1 * 0x10 + *param_1;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


long FUN_00408700(long param_1,long param_2,long **param_3,char param_4)

{
  undefined *puVar1;
  undefined uVar2;
  undefined uVar3;
  undefined uVar4;
  char cVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  
  plVar6 = (long *)FUN_004086d0();
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
LAB_0040878c:
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
          goto LAB_0040878c;
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

undefined FUN_00408820(float **param_1)

{
  float fVar1;
  float *pfVar2;
  float fVar3;
  
  pfVar2 = *param_1;
  if (pfVar2 == (float *)&DAT_0040c1a0) {
    return 1;
  }
  fVar1 = pfVar2[2];
  if ((((_DAT_0040c1b4 < fVar1) && (fVar1 < DAT_0040c1b8)) && (_DAT_0040c1bc < pfVar2[3])) &&
     (_DAT_0040c1c0 <= *pfVar2)) {
    fVar3 = *pfVar2 + _DAT_0040c1b4;
    if (((fVar3 < pfVar2[1]) && (pfVar2[1] <= DAT_0040c1c4)) && (fVar3 < fVar1)) {
      return 1;
    }
  }
  *param_1 = (float *)&DAT_0040c1a0;
  return 0;
}


undefined FUN_004088a0(long param_1,long **param_2,char param_3)

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
LAB_004088c8:
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
          plVar2 = (long *)FUN_004086d0(param_1,lVar6);
          plVar4 = (long *)plVar3[1];
          if (*plVar2 != 0) break;
          *plVar2 = lVar6;
          *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
          *plVar3 = 0;
          plVar3[1] = *(long *)(param_1 + 0x48);
          *(long **)(param_1 + 0x48) = plVar3;
          plVar3 = plVar4;
          if (plVar4 == (long *)0x0) goto LAB_0040893f;
        }
        plVar3[1] = plVar2[1];
        plVar2[1] = (long)plVar3;
        plVar3 = plVar4;
      } while (plVar4 != (long *)0x0);
LAB_0040893f:
      lVar6 = *plVar5;
    }
    plVar5[1] = 0;
    if (param_3 != '\0') goto LAB_004088c8;
    plVar3 = (long *)FUN_004086d0(param_1,lVar6);
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


undefined FUN_004089f0(long param_1)

{
  return *(undefined *)(param_1 + 0x10);
}


undefined FUN_00408a00(long param_1)

{
  return *(undefined *)(param_1 + 0x18);
}


undefined FUN_00408a10(long param_1)

{
  return *(undefined *)(param_1 + 0x20);
}


void FUN_00408a20(long **param_1)

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


bool FUN_00408a70(long **param_1)

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
LAB_00408a88:
      plVar2 = plVar2 + 2;
    }
    lVar1 = plVar2[1];
    plVar4 = (long *)((long)plVar4 + 1);
    plVar3 = (long *)((long)plVar3 + 1);
    if (lVar1 == 0) goto LAB_00408a88;
    do {
      lVar1 = *(long *)(lVar1 + 8);
      plVar3 = (long *)((long)plVar3 + 1);
    } while (lVar1 != 0);
    plVar2 = plVar2 + 2;
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408ae0(long **param_1,undefined param_2)

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
      if (param_1[1] <= plVar6) goto LAB_00408b4d;
    }
  }
LAB_00408b4d:
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
  __fprintf_chk((dVar7 * _DAT_0040c1d8) / dVar8,param_2,1,"# buckets used:    %lu (%.2f%%)\n",plVar2
               );
  __fprintf_chk(param_2,1,"max bucket length: %lu\n",uVar5);
  return;
}


long FUN_00408c30(long param_1,long param_2)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)FUN_004086d0();
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


long FUN_00408c90(long **param_1)

{
  long lVar1;
  long *plVar2;
  
  if (param_1[4] == (long *)0x0) {
    return 0;
  }
  plVar2 = *param_1;
  if (param_1[1] <= plVar2) {
    lVar1 = FUN_00401d88();
    return lVar1;
  }
  do {
    if (*plVar2 != 0) {
      return *plVar2;
    }
    plVar2 = plVar2 + 2;
  } while (plVar2 < param_1[1]);
  lVar1 = FUN_00401d88();
  return lVar1;
}


long FUN_00408ce0(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = (long *)FUN_004086d0();
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


ulong FUN_00408d50(long **param_1,long param_2,ulong param_3)

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


long FUN_00408dc0(long **param_1,code *param_2,undefined param_3)

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


ulong FUN_00408e40(byte *param_1,ulong param_2)

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


void FUN_00408e80(undefined *param_1)

{
  *(undefined *)(param_1 + 2) = 0;
  *param_1 = 0x3f80000000000000;
  param_1[1] = 0x3fb4fdf43f4ccccd;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ** FUN_00408ea0(ulong param_1,void *param_2,code *param_3,code *param_4,void *param_5)

{
  char cVar1;
  void **__ptr;
  void *__nmemb;
  void *pvVar2;
  float fVar3;
  float fVar4;
  
  if (param_3 == (code *)0x0) {
    param_3 = FUN_004086b0;
  }
  if (param_4 == (code *)0x0) {
    param_4 = FUN_004086c0;
  }
  __ptr = (void **)malloc(0x50);
  if (__ptr == (void **)0x0) {
    return (void **)0x0;
  }
  if (param_2 == (void *)0x0) {
    __ptr[5] = &DAT_0040c1a0;
    cVar1 = FUN_00408820(__ptr + 5);
    if (cVar1 == '\0') goto LAB_00408f80;
    fVar4 = DAT_0040c1c8;
    if ((long)param_1 < 0) goto LAB_00409003;
LAB_00408fbe:
    fVar3 = (float)param_1;
LAB_00408fc7:
    fVar3 = fVar3 / fVar4;
    if (_DAT_0040c1cc <= fVar3) goto LAB_00408f80;
    if (fVar3 < _DAT_0040c1d0) {
      param_1 = (ulong)fVar3;
    }
    else {
      param_1 = (long)(fVar3 - _DAT_0040c1d0) ^ 0x8000000000000000;
    }
  }
  else {
    __ptr[5] = param_2;
    cVar1 = FUN_00408820(__ptr + 5);
    if (cVar1 == '\0') goto LAB_00408f80;
    if (*(char *)((long)param_2 + 0x10) == '\0') {
      fVar4 = *(float *)((long)param_2 + 8);
      if (-1 < (long)param_1) goto LAB_00408fbe;
LAB_00409003:
      fVar3 = (float)(param_1 >> 1 | (ulong)((uint)param_1 & 1));
      fVar3 = fVar3 + fVar3;
      goto LAB_00408fc7;
    }
  }
  __nmemb = (void *)FUN_00408610(param_1);
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
LAB_00408f80:
  free(__ptr);
  return (void **)0x0;
}


void FUN_00409030(long **param_1)

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
        if (param_1[1] < plVar4 || param_1[1] == plVar4) goto LAB_004090c3;
      }
      plVar5 = plVar5 + 2;
    } while (plVar5 <= param_1[1] && param_1[1] != plVar5);
  }
LAB_004090c3:
  param_1[3] = (long *)0x0;
  param_1[4] = (long *)0x0;
  return;
}


void FUN_004090e0(long **param_1)

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
    if (plVar2 <= plVar4) goto LAB_0040917c;
    do {
      while (lVar5 = *plVar4, plVar3 = plVar4, lVar5 == 0) {
        plVar4 = plVar4 + 2;
        if (plVar2 <= plVar4) goto LAB_0040913f;
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
LAB_0040913f:
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
LAB_0040917c:
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

undefined FUN_004091c0(void **param_1,ulong param_2)

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
    if (_DAT_0040c1cc <= fVar3) {
      return 0;
    }
    if (fVar3 < _DAT_0040c1d0) {
      param_2 = (ulong)fVar3;
    }
    else {
      param_2 = (long)(fVar3 - _DAT_0040c1d0) ^ 0x8000000000000000;
    }
  }
  local_58 = (void *)FUN_00408610(param_2);
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
      uVar2 = FUN_004088a0(&local_68,param_1,0);
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
      cVar1 = FUN_004088a0(param_1,&local_68,1);
      if ((cVar1 != '\0') && (cVar1 = FUN_004088a0(param_1,&local_68,0), cVar1 != '\0')) {
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

undefined FUN_004093c0(long param_1,long param_2,long *param_3)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  long *local_20;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar2 = FUN_00408700(param_1,param_2,&local_20,0);
  if (lVar2 != 0) {
    if (param_3 != (long *)0x0) {
      *param_3 = lVar2;
    }
    return 0;
  }
  uVar5 = *(ulong *)(param_1 + 0x18);
  if ((long)uVar5 < 0) {
    uVar3 = *(ulong *)(param_1 + 0x10);
    fVar6 = (float)(uVar5 >> 1 | (ulong)((uint)uVar5 & 1));
    lVar2 = *(long *)(param_1 + 0x28);
    fVar6 = fVar6 + fVar6;
    if ((long)uVar3 < 0) goto LAB_004094ba;
LAB_0040942b:
    if (fVar6 <= (float)uVar3 * *(float *)(lVar2 + 8)) goto LAB_00409442;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x28);
    fVar6 = (float)uVar5;
    uVar3 = *(ulong *)(param_1 + 0x10);
    if (-1 < (long)uVar3) goto LAB_0040942b;
LAB_004094ba:
    fVar7 = (float)(uVar3 >> 1 | (ulong)((uint)uVar3 & 1));
    if (fVar6 <= (fVar7 + fVar7) * *(float *)(lVar2 + 8)) goto LAB_00409442;
  }
  FUN_00408820(param_1 + 0x28);
  lVar2 = *(long *)(param_1 + 0x28);
  uVar5 = *(ulong *)(param_1 + 0x10);
  if ((long)uVar5 < 0) {
    fVar6 = (float)(uVar5 >> 1 | (ulong)((uint)uVar5 & 1));
    fVar6 = fVar6 + fVar6;
  }
  else {
    fVar6 = (float)uVar5;
  }
  uVar5 = *(ulong *)(param_1 + 0x18);
  if ((long)uVar5 < 0) {
    fVar7 = (float)(uVar5 >> 1 | (ulong)((uint)uVar5 & 1));
    fVar7 = fVar7 + fVar7;
  }
  else {
    fVar7 = (float)uVar5;
  }
  if (*(float *)(lVar2 + 8) * fVar6 < fVar7) {
    fVar6 = fVar6 * *(float *)(lVar2 + 0xc);
    if (*(char *)(lVar2 + 0x10) == '\0') {
      fVar6 = fVar6 * *(float *)(lVar2 + 8);
    }
    if (_DAT_0040c1cc <= fVar6) {
      return 0xffffffff;
    }
    if (_DAT_0040c1d0 <= fVar6) {
      uVar5 = (long)(fVar6 - _DAT_0040c1d0) ^ 0x8000000000000000;
    }
    else {
      uVar5 = (ulong)fVar6;
    }
    cVar1 = FUN_004091c0(param_1,uVar5);
    if (cVar1 == '\0') {
      return 0xffffffff;
    }
    lVar2 = FUN_00408700(param_1,param_2,&local_20,0);
    if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
LAB_00409442:
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


undefined FUN_00409640(undefined param_1,undefined param_2)

{
  int iVar1;
  undefined local_10;
  
  iVar1 = FUN_004093c0(param_1,param_2,&local_10);
  if (iVar1 != -1) {
    if (iVar1 == 0) {
      param_2 = local_10;
    }
    return param_2;
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_00409680(long param_1,undefined param_2)

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
  
  lVar5 = FUN_00408700(param_1,param_2,&local_20,1);
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
      FUN_00408820(param_1 + 0x28);
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
        if (_DAT_0040c1d0 <= fVar7) {
          uVar6 = (long)(fVar7 - _DAT_0040c1d0) ^ 0x8000000000000000;
        }
        else {
          uVar6 = (ulong)fVar7;
        }
        cVar4 = FUN_004091c0(param_1,uVar6);
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


/* WARNING: Could not reconcile some variable overlaps */

char * FUN_00409860(void)

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
  if (DAT_0060f4b8 != (char *)0x0) goto LAB_0040989a;
  pcVar7 = getenv("CHARSETALIASDIR");
  if ((pcVar7 == (char *)0x0) || (*pcVar7 == '\0')) {
    sVar6 = 0x73;
    sVar5 = 0x65;
    __n = 100;
    pcVar7 = 
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib"
    ;
LAB_00409985:
    __file = (char *)malloc(sVar6);
    if (__file != (char *)0x0) {
      memcpy(__file,pcVar7,__n);
      __file[__n] = '/';
      goto LAB_004099a6;
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
        goto LAB_00409985;
      }
      sVar6 = __n + 0xe;
    }
    __file = (char *)malloc(sVar6);
    if (__file != (char *)0x0) {
      memcpy(__file,pcVar7,__n);
      sVar5 = __n;
LAB_004099a6:
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
LAB_00409a40:
          pbVar8 = (byte *)__stream->_IO_read_ptr;
          if (__stream->_IO_read_end <= pbVar8) goto LAB_00409bcc;
          do {
            __stream->_IO_read_ptr = (char *)(pbVar8 + 1);
            uVar4 = (uint)*pbVar8;
            __ptr = pcVar7;
            while( true ) {
              pcVar7 = __ptr;
              if ((uVar4 - 9 < 2) || (uVar4 == 0x20)) goto LAB_00409a40;
              if (uVar4 == 0x23) goto LAB_00409c31;
              ungetc(uVar4,__stream);
              iVar2 = fscanf(__stream,"%50s %50s",&local_b8,&local_78);
              puVar13 = &local_b8;
              if (iVar2 < 2) goto LAB_00409bdf;
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
                FUN_00407390(__stream);
                goto LAB_004099e4;
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
LAB_00409bcc:
              uVar4 = __uflow(__stream);
              __ptr = pcVar7;
              if (uVar4 == 0xffffffff) goto LAB_00409bdf;
            }
          } while( true );
        }
        close(iVar2);
      }
      goto LAB_004099de;
    }
  }
  DAT_0060f4b8 = "";
LAB_0040989a:
  cVar1 = *DAT_0060f4b8;
  pcVar7 = DAT_0060f4b8;
  do {
    if (cVar1 == '\0') {
LAB_004098f4:
      if (*__s1 == '\0') {
        __s1 = "ASCII";
      }
      return __s1;
    }
    iVar2 = strcmp(__s1,pcVar7);
    if ((iVar2 == 0) || ((cVar1 == '*' && (pcVar7[1] == '\0')))) {
      sVar6 = strlen(pcVar7);
      __s1 = pcVar7 + sVar6 + 1;
      goto LAB_004098f4;
    }
    sVar6 = strlen(pcVar7);
    sVar5 = strlen(pcVar7 + sVar6 + 1);
    pcVar7 = pcVar7 + sVar6 + 1 + sVar5 + 1;
    cVar1 = *pcVar7;
  } while( true );
LAB_00409c31:
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
  if (uVar4 == 0xffffffff) goto LAB_00409bdf;
  goto LAB_00409a40;
LAB_00409bdf:
  FUN_00407390(__stream);
  if (local_d0 == 0) {
LAB_004099de:
    pcVar7 = "";
  }
  else {
    pcVar7[local_d0] = '\0';
  }
LAB_004099e4:
  free(__file);
  DAT_0060f4b8 = pcVar7;
  goto LAB_0040989a;
}


void FUN_00409dd0(undefined param_1)

{
  FUN_00409de0(param_1,0,3);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_00409de0(ulong param_1,int param_2,ulong param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  
  if (param_2 != 0x406) {
    iVar1 = fcntl((int)param_1,param_2,param_3);
    return iVar1;
  }
  if (DAT_0060f4c0 < 0) {
    iVar1 = FUN_00409de0(param_1,0,param_3 & 0xffffffff);
    if (iVar1 < 0) {
      return iVar1;
    }
    if (DAT_0060f4c0 != -1) {
      return iVar1;
    }
  }
  else {
    iVar1 = fcntl((int)param_1,0x406);
    if ((-1 < iVar1) || (piVar4 = __errno_location(), *piVar4 != 0x16)) {
      DAT_0060f4c0 = 1;
      return iVar1;
    }
    iVar1 = FUN_00409de0(param_1 & 0xffffffff,0,param_3 & 0xffffffff);
    if (iVar1 < 0) {
      return iVar1;
    }
    DAT_0060f4c0 = -1;
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


/* WARNING: Removing unreachable block (ram,0x00409f53) */
/* WARNING: Removing unreachable block (ram,0x00409f58) */

void FUN_00409f20(void)

{
  __DT_INIT();
  return;
}


void FUN_00409f80(void)

{
  return;
}


void FUN_00409f90(undefined param_1)

{
  __cxa_atexit(param_1,0,DAT_0060f268);
  return;
}


undefined FUN_00409fa8(undefined param_1,undefined param_2,undefined param_3)

{
  code **ppcVar1;
  
  for (ppcVar1 = (code **)&DAT_0060ee30; *ppcVar1 != (code *)0xffffffffffffffff;
      ppcVar1 = ppcVar1 + -1) {
    (**ppcVar1)();
  }
  return param_3;
}


void __DT_FINI(void)

{
  FUN_00402c01();
  return;
}

