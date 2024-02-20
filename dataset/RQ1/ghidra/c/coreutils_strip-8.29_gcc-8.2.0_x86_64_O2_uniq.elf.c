
void switchD_00403600::caseD_b(void)

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

void switchD_004050da::caseD_0(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Could not reconcile some variable overlaps */

undefined8 FUN_00401940(uint param_1,undefined8 *param_2)

{
  char *pcVar1;
  void *pvVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  char *pcVar11;
  undefined8 uVar12;
  char *pcVar13;
  int *piVar14;
  undefined **ppuVar15;
  char **ppcVar16;
  char **ppcVar17;
  char *pcVar18;
  _IO_FILE *p_Var19;
  ulong uVar20;
  ulong uVar21;
  char **ppcVar22;
  char *local_b8;
  ulong local_b0;
  int local_a8;
  char local_a1;
  ulong local_a0;
  char *local_98;
  char *local_90;
  char *local_88 [4];
  void *local_68;
  char *local_58;
  long local_50;
  void *local_48;
  
  ppcVar22 = (char **)(ulong)param_1;
  pcVar7 = getenv("POSIXLY_CORRECT");
  local_88[1] = "-";
  local_88[0] = "-";
  uVar20 = (ulong)(pcVar7 != (char *)0x0);
  uVar21 = 0;
  pcVar11 = (char *)0x0;
  ppcVar16 = (char **)0x0;
  FUN_00403410(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils",
                 "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale"
                );
  textdomain("coreutils");
  DAT_0060c300 = FUN_00403190(3);
  FUN_00407660(FUN_00402eb0);
  DAT_0060c2f0 = (char *)0x0;
  DAT_0060c2f8 = 0;
  DAT_0060c2e8 = 0xffffffffffffffff;
  DAT_0060c2e2 = 1;
  DAT_0060c2e3 = '\x01';
  DAT_0060c2e1 = '\0';
  DAT_0060c2e4 = 1;
  DAT_0060c2dc = 0;
  local_a1 = '\n';
  local_b8 = (char *)0x0;
  local_b0 = 0xffffffffffffffff;
LAB_00401a62:
  do {
    pcVar13 = pcVar11;
    if ((int)ppcVar16 == -1) goto LAB_00401a30;
LAB_00401a67:
    iVar5 = (int)pcVar11;
    pcVar13 = pcVar11;
    if ((iVar5 != 0) && (pcVar7 != (char *)0x0)) {
LAB_00401a30:
      pcVar11 = local_88[1];
      pcVar1 = local_88[0];
      if (DAT_0060c29c < (int)param_1) {
        lVar8 = (long)DAT_0060c29c;
        if ((int)pcVar13 == 2) {
LAB_00402309:
          pcVar11 = (char *)FUN_00405030();
          uVar12 = dcgettext(0,"extra operand %s",5);
          error(0,0,uVar12,pcVar11);
          p_Var19 = (_IO_FILE *)0x1;
          FUN_004026b0();
LAB_0040233d:
          __overflow(p_Var19,local_a8);
          ppcVar17 = ppcVar16;
          do {
            ppcVar16 = ppcVar22;
            fwrite_unlocked(ppcVar16[2],1,(size_t)ppcVar16[1],stdout);
            local_b8 = (char *)(uVar20 & 0xff);
            ppcVar22 = ppcVar17;
            local_a0 = uVar21;
            local_90 = pcVar11;
            do {
              while (((*stdin & 0x10) != 0 ||
                     (lVar8 = FUN_00403200(ppcVar22,stdin,local_a8), lVar8 == 0))) {
                if (((DAT_0060c2d8 - 2U & 0xfffffffd) == 0) && ((char)local_b8 != '\0')) {
                  pcVar11 = stdout->_IO_write_ptr;
                  if (pcVar11 < stdout->_IO_write_end) {
                    stdout->_IO_write_ptr = pcVar11 + 1;
                    *pcVar11 = local_a1;
                  }
                  else {
                    __overflow(stdout,local_a8);
                  }
                }
LAB_00401e9a:
                if (((*stdin & 0x20) == 0) && (iVar5 = FUN_00405e30(), iVar5 == 0)) {
                  free(local_68);
                  free(local_48);
                  return 0;
                }
LAB_00402067:
                uVar12 = FUN_00404de0(4,local_98);
                uVar9 = dcgettext(0,"error reading %s",5);
                error(1,0,uVar9,uVar12);
LAB_0040209e:
                if (DAT_0060c2e4 != 1) {
LAB_00401d61:
                  lVar8 = FUN_00403200(&local_58,stdin,local_a8);
                  pvVar2 = local_48;
                  if (lVar8 != 0) {
                    uVar21 = 0;
                    lVar8 = local_50 + -1;
                    local_b0 = FUN_004025e0(local_50,local_48);
                    local_a0 = 1;
                    ppcVar16 = local_88 + 2;
                    ppcVar22 = &local_58;
                    local_b8 = (char *)(lVar8 - (local_b0 - (long)pvVar2));
                    while (uVar20 = uVar21, (*stdin & 0x10) == 0) {
LAB_00401dd0:
                      ppcVar17 = ppcVar16;
                      lVar8 = FUN_00403200(ppcVar17,stdin,local_a8);
                      if (lVar8 == 0) {
                        if ((*stdin & 0x20) == 0) break;
                        goto LAB_00402067;
                      }
                      pcVar11 = ppcVar17[1];
                      pcVar7 = ppcVar17[2];
                      lVar8 = FUN_004025e0(pcVar11,pcVar7);
                      pcVar11 = pcVar11 + (-1 - (lVar8 - (long)pcVar7));
                      uVar4 = FUN_00402480(lVar8,local_b0,pcVar11,local_b8);
                      local_90._0_4_ = (uVar4 ^ 1) & 0xff;
                      uVar21 = uVar20 + ((uVar4 ^ 1) & 0xff);
                      cVar3 = (char)uVar4;
                      if (uVar21 == 0xffffffffffffffff) {
                        if (DAT_0060c2dc == 0) {
                          uVar21 = 0xfffffffffffffffe;
                          goto LAB_00401f20;
                        }
                        uVar21 = 0xfffffffffffffffe;
                        if (cVar3 == '\0') goto LAB_00401f28;
                        local_a0 = 0;
                        uVar21 = 0xfffffffffffffffe;
LAB_00401e5b:
                        uVar20 = 0;
                        FUN_00402560(ppcVar22,(uint)local_90,uVar21);
                        ppcVar16 = ppcVar22;
                        ppcVar22 = ppcVar17;
                        local_b8 = pcVar11;
                        local_b0 = lVar8;
                        if ((*stdin & 0x10) != 0) break;
                        goto LAB_00401dd0;
                      }
                      if (DAT_0060c2dc == 0) {
LAB_00401f20:
                        if (cVar3 == '\0') goto LAB_00401f28;
                        goto LAB_00401e5b;
                      }
                      if (cVar3 != '\0') {
                        if (uVar21 != 0) {
                          local_a0._0_1_ = 0;
                        }
                        local_a0 = (ulong)(byte)local_a0;
                        goto LAB_00401e5b;
                      }
                      if ((uVar21 == 1) &&
                         ((DAT_0060c2dc == 1 || ((DAT_0060c2dc == 2 && ((byte)local_a0 == 0)))))) {
                        pcVar7 = stdout->_IO_write_ptr;
                        if (pcVar7 < stdout->_IO_write_end) {
                          stdout->_IO_write_ptr = pcVar7 + 1;
                          *pcVar7 = local_a1;
                        }
                        else {
                          local_90 = (char *)((((ulong)local_90 & 0xffffffff00000000 | (ulong)uVar4)
                                              ^ 1) & 0xffffffff000000ff);
                          __overflow(stdout,local_a8);
                        }
                      }
LAB_00401f28:
                      ppcVar16 = ppcVar17;
                      if (DAT_0060c2e1 != '\0') {
                        FUN_00402560(ppcVar22,(uint)local_90,uVar21);
                        ppcVar16 = ppcVar22;
                        ppcVar22 = ppcVar17;
                        local_b8 = pcVar11;
                        local_b0 = lVar8;
                      }
                    }
                    FUN_00402560(ppcVar22,0,uVar20);
                  }
                  goto LAB_00401e9a;
                }
                local_b8 = (char *)0x0;
                ppcVar16 = &local_58;
                ppcVar22 = local_88 + 2;
              }
              pcVar11 = ppcVar22[1];
              pcVar7 = ppcVar22[2];
              uVar21 = FUN_004025e0(pcVar11,pcVar7);
              pcVar11 = pcVar11 + (-1 - (uVar21 - (long)pcVar7));
              if (ppcVar16[1] == (char *)0x0) {
LAB_00402109:
                ppcVar17 = ppcVar16;
                if ((DAT_0060c2d8 != 0) &&
                   (((DAT_0060c2d8 == 1 || (DAT_0060c2d8 == 4)) ||
                    (((char)local_b8 != '\0' && (DAT_0060c2d8 - 2U < 2)))))) {
                  pcVar7 = stdout->_IO_write_ptr;
                  p_Var19 = stdout;
                  if (stdout->_IO_write_end <= pcVar7) goto LAB_0040233d;
                  stdout->_IO_write_ptr = pcVar7 + 1;
                  *pcVar7 = local_a1;
                }
                break;
              }
LAB_0040224c:
              cVar3 = FUN_00402480(uVar21,local_a0,pcVar11,local_90);
              if (cVar3 != '\0') goto LAB_00402109;
              ppcVar17 = ppcVar16;
            } while (DAT_0060c2d8 == 0);
          } while( true );
        }
        DAT_0060c29c = DAT_0060c29c + 1;
        pcVar11 = (char *)(ulong)((int)pcVar13 + 1);
        local_88[(ulong)pcVar13 & 0xffffffff] = (char *)param_2[lVar8];
        goto LAB_00401a62;
      }
      if (DAT_0060c2d8 == 0) {
        if ((DAT_0060c2e4 != 0) ||
           (pcVar18 = "printing all duplicated lines and repeat counts is meaningless",
           DAT_0060c2e1 == '\0')) {
LAB_00401cc7:
          local_a8 = (int)local_a1;
          local_98 = local_88[0];
          iVar5 = strcmp(local_88[0],"-");
          if ((iVar5 != 0) && (lVar8 = FUN_00402fe0(pcVar1,"r",stdin), lVar8 == 0)) {
            pcVar11 = (char *)FUN_00404eb0(0,3,pcVar1);
            piVar14 = __errno_location();
            error(1,*piVar14,&DAT_004083dc,pcVar11);
            goto LAB_0040224c;
          }
          iVar5 = strcmp(pcVar11,"-");
          if ((iVar5 == 0) || (lVar8 = FUN_00402fe0(pcVar11,&DAT_004077d2,stdout), lVar8 != 0)) {
            FUN_00402f60(stdin,2);
            FUN_004031f0(local_88 + 2);
            FUN_004031f0(&local_58);
            if (DAT_0060c2e3 == '\0') goto LAB_00401d61;
            uVar20 = (ulong)DAT_0060c2e2;
            if (DAT_0060c2e2 != 0) goto LAB_0040209e;
            goto LAB_00401d61;
          }
          goto LAB_00402352;
        }
      }
      else {
        if ((char)uVar21 != '\0') goto LAB_0040237f;
        pcVar18 = "grouping and printing repeat counts is meaningless";
        if (DAT_0060c2e4 == 1) goto LAB_00401cc7;
      }
LAB_00401eff:
      pcVar11 = pcVar13;
      uVar12 = dcgettext(0,pcVar18,5);
      error(0,0,uVar12);
LAB_00401b39:
      do {
        uVar4 = FUN_004026b0();
LAB_00401b48:
        if (uVar4 == 0x7a) {
          local_a1 = '\0';
          goto LAB_00401a67;
        }
        if (uVar4 == 0x80) {
          if (DAT_0060c4a0 == (char *)0x0) {
            DAT_0060c2d8 = 3;
          }
          else {
            lVar8 = FUN_00402dd0("--group",DAT_0060c4a0,&PTR_s_prepend_00408320,&DAT_00408300,4,
                                 PTR_FUN_0060c218);
            DAT_0060c2d8 = *(int *)(&DAT_00408300 + lVar8 * 4);
          }
          goto LAB_00401a67;
        }
      } while (uVar4 != 0x77);
      DAT_0060c2e8 = FUN_00402500(DAT_0060c4a0,"invalid number of bytes to compare");
      goto LAB_00401a67;
    }
    ppuVar15 = &PTR_s_count_00408160;
    uVar4 = FUN_00406d40(param_1,param_2,"-0123456789Dcdf:is:uw:z",&PTR_s_count_00408160,0);
    ppcVar16 = (char **)(ulong)uVar4;
    if (uVar4 == 0xffffffff) goto LAB_00401a30;
    if (uVar4 == 100) {
      DAT_0060c2e3 = '\0';
      uVar21 = 1;
      goto LAB_00401a67;
    }
    if (100 < (int)uVar4) {
      if (uVar4 == 0x75) {
        DAT_0060c2e2 = 0;
        uVar21 = 1;
      }
      else {
        if (0x75 < (int)uVar4) goto LAB_00401b48;
        if (uVar4 == 0x69) {
          DAT_0060c2e0 = 1;
        }
        else if (uVar4 == 0x73) {
          DAT_0060c2f0 = (char *)FUN_00402500(DAT_0060c4a0,"invalid number of bytes to skip");
        }
        else {
          if (uVar4 != 0x66) goto LAB_00401b39;
          DAT_0060c2f8 = FUN_00402500(DAT_0060c4a0,"invalid number of fields to skip");
          local_b8 = (char *)0x2;
        }
      }
      goto LAB_00401a67;
    }
    if (0x39 < (int)uVar4) {
      if (uVar4 == 0x44) {
        DAT_0060c2e3 = '\0';
        DAT_0060c2e1 = '\x01';
        if (DAT_0060c4a0 == (char *)0x0) {
          DAT_0060c2dc = 0;
          uVar21 = 1;
        }
        else {
          uVar21 = 1;
          lVar8 = FUN_00402dd0("--all-repeated",DAT_0060c4a0,&PTR_DAT_00408360,&DAT_00408348,4,
                               PTR_FUN_0060c218);
          DAT_0060c2dc = *(int *)(&DAT_00408348 + lVar8 * 4);
        }
      }
      else {
        if (uVar4 != 99) goto LAB_00401b39;
        DAT_0060c2e4 = 0;
        uVar21 = 1;
      }
      goto LAB_00401a67;
    }
    if ((int)uVar4 < 0x30) {
      if (uVar4 == 0xffffff7e) {
        FUN_004026b0(0);
LAB_00402352:
        pcVar13 = (char *)FUN_00404eb0(0,3,pcVar11);
        piVar14 = __errno_location();
        error(1,*piVar14,&DAT_004083dc,pcVar13);
LAB_0040237f:
        pcVar18 = "--group is mutually exclusive with -c/-d/-D/-u";
        goto LAB_00401eff;
      }
      if (uVar4 != 1) {
        if (uVar4 == 0xffffff7d) {
          FUN_004054b0(stdout,&DAT_004076d1,"GNU coreutils",PTR_DAT_0060c210,"Richard M. Stallman",
                       "David MacKenzie",0,ppuVar15);
                    /* WARNING: Subroutine does not return */
          exit(0);
        }
        goto LAB_00401b39;
      }
      if (((*DAT_0060c4a0 == '+') && (iVar6 = FUN_00403390(), 0x2b8 < iVar6 - 0x30db0U)) &&
         (iVar6 = FUN_00405a00(DAT_0060c4a0,0,10,&local_58), iVar6 == 0)) {
        DAT_0060c2f0 = local_58;
      }
      else {
        if (iVar5 == 2) goto LAB_00402309;
        uVar10 = (ulong)pcVar11 & 0xffffffff;
        pcVar11 = (char *)(ulong)(iVar5 + 1);
        local_88[uVar10] = DAT_0060c4a0;
      }
      goto LAB_00401a67;
    }
    if ((int)local_b8 == 2) {
      uVar10 = (ulong)(int)(uVar4 - 0x30);
    }
    else if ((0x1999999999999999 < DAT_0060c2f8) ||
            (uVar10 = DAT_0060c2f8 * 10 + (long)(int)(uVar4 - 0x30), uVar10 < DAT_0060c2f8)) {
      uVar10 = local_b0;
    }
    local_b8 = (char *)0x1;
    DAT_0060c2f8 = uVar10;
  } while( true );
}


void FUN_004023a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_retaddr;
  undefined auStack_8 [8];
  
  (*(code *)PTR___libc_start_main_0060bff0)
            (FUN_00401940,unaff_retaddr,&stack0x00000008,FUN_004075f0,FUN_00407650,param_3,auStack_8
            );
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* WARNING: Removing unreachable block (ram,0x004023d8) */
/* WARNING: Removing unreachable block (ram,0x004023e2) */

void FUN_004023cb(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00402419) */

void FUN_004023ea(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00402456) */

void FUN_00402421(void)

{
  if (DAT_0060c2c8 != '\0') {
    return;
  }
  FUN_004023cb();
  DAT_0060c2c8 = 1;
  return;
}


/* WARNING: Removing unreachable block (ram,0x00402419) */

void thunk_FUN_004023ea(void)

{
  return;
}


ulong FUN_00402480(void *param_1,void *param_2,ulong param_3,ulong param_4)

{
  int iVar1;
  ulong uVar2;
  undefined4 extraout_var;
  
  if (DAT_0060c2e8 <= param_3) {
    param_3 = DAT_0060c2e8;
  }
  if (DAT_0060c2e8 <= param_4) {
    param_4 = DAT_0060c2e8;
  }
  uVar2 = (ulong)DAT_0060c2e0;
  if (DAT_0060c2e0 == 0) {
    if (DAT_0060c300 == '\0') {
      uVar2 = 1;
      if (param_3 == param_4) {
        iVar1 = memcmp(param_1,param_2,param_3);
        return CONCAT44(extraout_var,iVar1) & 0xffffffffffffff00 | (ulong)(iVar1 != 0);
      }
    }
    else {
      uVar2 = FUN_00405940(param_1,param_3,param_2);
      uVar2 = uVar2 & 0xffffffffffffff00 | (ulong)((int)uVar2 != 0);
    }
  }
  else if (param_3 == param_4) {
    uVar2 = FUN_00403340();
    return uVar2 & 0xffffffffffffff00 | (ulong)((int)uVar2 != 0);
  }
  return uVar2;
}


size_t FUN_00402500(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  size_t sVar5;
  long extraout_RDX;
  long lVar6;
  size_t local_20 [2];
  
  uVar3 = FUN_00405a00(param_1,0,10,local_20,"");
  if (uVar3 < 2) {
    return local_20[0];
  }
  uVar4 = dcgettext(0,param_2,5);
  cVar2 = '\0';
  lVar6 = 1;
  error(1,0,"%s: %s",param_1,uVar4);
  bVar1 = DAT_0060c2e3;
  if ((extraout_RDX == 0) || (bVar1 = DAT_0060c2e1, cVar2 != '\0')) {
    uVar3 = bVar1 ^ 1;
    cVar2 = (char)uVar3;
  }
  else {
    uVar3 = DAT_0060c2e2 ^ 1;
    cVar2 = (char)uVar3;
  }
  if (cVar2 != '\0') {
    return (ulong)uVar3;
  }
  if (DAT_0060c2e4 == 0) {
    __printf_chk(1,"%7lu ",extraout_RDX + 1);
  }
  sVar5 = fwrite_unlocked(*(void **)(lVar6 + 0x10),1,*(size_t *)(lVar6 + 8),stdout);
  return sVar5;
}


void FUN_00402560(long param_1,char param_2,long param_3)

{
  char cVar1;
  
  cVar1 = DAT_0060c2e3;
  if ((param_3 == 0) || (cVar1 = DAT_0060c2e1, param_2 != '\0')) {
    if (cVar1 != '\x01') {
      return;
    }
  }
  else if (DAT_0060c2e2 != '\x01') {
    return;
  }
  if (DAT_0060c2e4 == 0) {
    __printf_chk(1,"%7lu ",param_3 + 1);
  }
  fwrite_unlocked(*(void **)(param_1 + 0x10),1,*(size_t *)(param_1 + 8),stdout);
  return;
}


byte * FUN_004025e0(long param_1,byte *param_2)

{
  ushort *puVar1;
  ulong uVar2;
  ushort **ppuVar3;
  ulong uVar4;
  ulong uVar5;
  ushort uVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar2 = DAT_0060c2f8;
  uVar7 = param_1 - 1;
  if ((param_1 == 1) || (DAT_0060c2f8 == 0)) {
    uVar5 = 0;
  }
  else {
    ppuVar3 = __ctype_b_loc();
    uVar8 = 0;
    puVar1 = *ppuVar3;
    uVar4 = (ulong)*param_2;
    uVar6 = puVar1[uVar4];
    uVar5 = 0;
    while( true ) {
      while (((char)uVar4 == '\n' || ((uVar6 & 1) != 0))) {
        uVar5 = uVar5 + 1;
        if (uVar7 <= uVar5) goto LAB_00402650;
        uVar4 = (ulong)param_2[uVar5];
        uVar6 = puVar1[uVar4];
      }
      if (uVar7 <= uVar5) break;
      while (((char)uVar4 != '\n' && ((uVar6 & 1) == 0))) {
        uVar5 = uVar5 + 1;
        if (uVar7 <= uVar5) goto LAB_00402650;
        uVar4 = (ulong)param_2[uVar5];
        uVar6 = puVar1[uVar4];
      }
      uVar8 = uVar8 + 1;
      if ((uVar2 <= uVar8) || (uVar7 <= uVar5)) break;
    }
LAB_00402650:
    uVar7 = uVar7 - uVar5;
  }
  if (DAT_0060c2f0 <= uVar7) {
    uVar7 = DAT_0060c2f0;
  }
  return param_2 + uVar5 + uVar7;
}


void FUN_004026b0(int param_1)

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
  
  uVar7 = DAT_0060c318;
  bVar13 = 0;
  if (param_1 != 0) {
    uVar3 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(stderr,1,uVar3,uVar7);
    goto LAB_004026ef;
  }
  uVar3 = dcgettext(0,"Usage: %s [OPTION]... [INPUT [OUTPUT]]\n",5);
  __printf_chk(1,uVar3,uVar7);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "Filter adjacent matching lines from INPUT (or standard input),\nwriting to OUTPUT (or standard output).\n\nWith no options, matching lines are merged to the first occurrence.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nMandatory arguments to long options are mandatory for short options too.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -c, --count           prefix lines by the number of occurrences\n  -d, --repeated        only print duplicate lines, one for each group\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -D                    print all duplicate lines\n      --all-repeated[=METHOD]  like -D, but allow separating groups\n                                 with an empty line;\n                                 METHOD={none(default),prepend,separate}\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"  -f, --skip-fields=N   avoid comparing the first N fields\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --group[=METHOD]  show all items, separating groups with an empty line;\n                          METHOD={separate(default),prepend,append,both}\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -i, --ignore-case     ignore differences in case when comparing\n  -s, --skip-chars=N    avoid comparing the first N characters\n  -u, --unique          only print unique lines\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"  -z, --zero-terminated     line delimiter is NUL, not newline\n",5)
  ;
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -w, --check-chars=N   compare no more than N characters in lines\n",
                             5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"      --help     display this help and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"      --version  output version information and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nA field is a run of blanks (usually spaces and/or TABs), then non-blank\ncharacters.  Fields are skipped before chars.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nNote: \'uniq\' does not detect repeated lines unless they are adjacent.\nYou may want to sort the input first, or use \'sort -u\' without \'uniq\'.\nAlso, comparisons honor the rules specified by \'LC_COLLATE\'.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  local_88 = &DAT_004076d6;
  local_80 = "test invocation";
  local_78[0] = (byte *)0x407750;
  local_78[1] = (byte *)0x4076e8;
  local_78[2] = (byte *)0x4076fe;
  local_78[3] = (byte *)0x407708;
  local_78[4] = (byte *)0x407717;
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
    pbVar10 = &DAT_004076d1;
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
        pbVar9 = &DAT_004076d1;
        goto LAB_00402ad3;
      }
    }
    pbVar9 = &DAT_004076d1;
    uVar7 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    pcVar4 = " invocation";
    __printf_chk(1,uVar7,"https://www.gnu.org/software/coreutils/",&DAT_004076d1);
  }
  else {
    uVar7 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar7,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
      iVar2 = strncmp(pcVar4,"en_",3);
      if (iVar2 != 0) {
LAB_00402ad3:
        uVar7 = dcgettext(0,"Report %s translation bugs to <https://translationproject.org/team/>\n"
                          ,5);
        __printf_chk(1,uVar7,&DAT_004076d1);
      }
    }
    pcVar4 = " invocation";
    uVar7 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    __printf_chk(1,uVar7,"https://www.gnu.org/software/coreutils/",&DAT_004076d1);
    if (pbVar9 != &DAT_004076d1) {
      pcVar4 = "";
    }
  }
  uVar7 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(1,uVar7,pbVar9,pcVar4);
LAB_004026ef:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}


void FUN_00402b00(void)

{
  FUN_004026b0(1);
  return;
}


long FUN_00402b10(char *param_1,char **param_2,void *param_3,size_t param_4)

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
LAB_00402ba7:
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
          goto LAB_00402ba7;
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


void FUN_00402c30(undefined8 param_1,undefined8 param_2,long param_3)

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
  uVar2 = FUN_00405010(1,param_1);
  uVar3 = FUN_00404d00(0,8,param_2);
  error(0,0,uVar1,uVar3,uVar2);
  return;
}


void FUN_00402cb0(long *param_1,void *param_2,size_t param_3)

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
      uVar3 = FUN_00405030(lVar5);
      __fprintf_chk(stderr,1,"\n  - %s",uVar3);
      lVar5 = param_1[lVar4];
      param_2 = (void *)((long)__s2 + param_3);
      __s1 = __s2;
      if (lVar5 == 0) goto LAB_00402d80;
    }
    lVar4 = lVar4 + 1;
    param_2 = (void *)((long)__s2 + param_3);
    uVar3 = FUN_00405030(lVar5);
    __fprintf_chk(stderr,1,&DAT_004083da,uVar3);
    lVar5 = param_1[lVar4];
  }
LAB_00402d80:
  pcVar2 = stderr->_IO_write_ptr;
  if (pcVar2 < stderr->_IO_write_end) {
    stderr->_IO_write_ptr = pcVar2 + 1;
    *pcVar2 = '\n';
    return;
  }
  __overflow(stderr,10);
  return;
}


long FUN_00402dd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,code *param_6)

{
  long lVar1;
  
  lVar1 = FUN_00402b10(param_2,param_3,param_4,param_5);
  if (lVar1 < 0) {
    FUN_00402c30(param_1,param_2,lVar1);
    FUN_00402cb0(param_3,param_4,param_5);
    (*param_6)();
    lVar1 = -1;
  }
  return lVar1;
}


long FUN_00402e40(void *param_1,long *param_2,void *param_3,size_t param_4)

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


void FUN_00402e90(undefined8 param_1)

{
  DAT_0060c310 = param_1;
  return;
}


void FUN_00402ea0(undefined param_1)

{
  DAT_0060c308 = param_1;
  return;
}


void FUN_00402eb0(void)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  iVar1 = FUN_00406e40(stdout);
  if (iVar1 != 0) {
    piVar2 = __errno_location();
    if ((DAT_0060c308 == '\0') || (*piVar2 != 0x20)) {
      uVar3 = dcgettext(0,"write error",5);
      if (DAT_0060c310 == 0) {
        error(0,*piVar2,&DAT_004083dc,uVar3);
      }
      else {
        uVar4 = FUN_00404e80();
        error(0,*piVar2,"%s: %s",uVar4,uVar3);
      }
      goto LAB_00402f2e;
    }
  }
  iVar1 = FUN_00406e40(stderr);
  if (iVar1 == 0) {
    return;
  }
LAB_00402f2e:
                    /* WARNING: Subroutine does not return */
  _exit(DAT_0060c220);
}


void FUN_00402f60(FILE *param_1,int param_2)

{
  int __fd;
  
  if (param_1 != (FILE *)0x0) {
    __fd = fileno(param_1);
    posix_fadvise(__fd,0,0,param_2);
    return;
  }
  return;
}


undefined8 FUN_00402f90(int param_1)

{
  int __fd;
  int *piVar1;
  undefined8 uVar2;
  
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


long FUN_00402fe0(undefined8 param_1,undefined8 param_2,FILE *param_3)

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
LAB_00403050:
    iVar3 = dup2(0,0);
    if (iVar3 != 0) {
      cVar2 = FUN_00402f90();
      if (cVar2 != '\0') {
        cVar1 = cVar2;
        if ((bool)cVar7 != false) goto LAB_004030d8;
        goto LAB_00403074;
      }
      cVar2 = '\x01';
      lVar5 = 0;
      goto LAB_0040309f;
    }
    cVar2 = '\0';
    cVar1 = '\0';
    if ((bool)cVar7 == false) {
LAB_00403074:
      if (((bool)cVar6 == false) || (cVar6 = FUN_00402f90(2), cVar6 != '\0')) goto LAB_0040308c;
      iVar3 = *piVar4;
      lVar5 = 0;
      goto LAB_00403146;
    }
LAB_004030d8:
    cVar2 = cVar1;
    cVar7 = FUN_00402f90(1);
    if (cVar7 != '\0') goto LAB_00403074;
    iVar3 = *piVar4;
    lVar5 = 0;
    if ((bool)cVar6 != false) {
      close(2);
    }
  }
  else {
    if (iVar3 == 2) {
      cVar6 = false;
LAB_0040303a:
      iVar3 = dup2(1,1);
      cVar7 = iVar3 != 1;
      goto LAB_00403050;
    }
    if (iVar3 != 0) {
      iVar3 = dup2(2,2);
      cVar6 = iVar3 != 2;
      goto LAB_0040303a;
    }
    cVar6 = '\0';
    cVar7 = '\0';
    cVar2 = '\0';
LAB_0040308c:
    lVar5 = FUN_00405ef0(param_1,param_2,param_3);
LAB_0040309f:
    iVar3 = *piVar4;
    if (cVar6 != '\0') {
LAB_00403146:
      close(2);
    }
    if (cVar7 == '\0') goto joined_r0x0040310d;
  }
  close(1);
joined_r0x0040310d:
  if (cVar2 != '\0') {
    close(0);
  }
  if (lVar5 == 0) {
    *piVar4 = iVar3;
  }
  return lVar5;
}


bool FUN_00403190(int param_1)

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
    pbVar5 = &DAT_004083f5;
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


void FUN_004031f0(undefined (*param_1) [16])

{
  *(undefined8 *)param_1[1] = 0;
  *param_1 = (undefined  [16])0x0;
  return;
}


long * FUN_00403200(long *param_1,_IO_FILE *param_2,uint param_3)

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
LAB_0040324b:
      pcVar4 = pcVar6;
      uVar8 = uVar3;
      if (pcVar6 == pcVar9) goto LAB_004032a7;
    }
    else {
      uVar3 = __uflow(param_2);
      if (uVar3 != 0xffffffff) goto LAB_0040324b;
      if (pcVar5 == pcVar6) {
        return (long *)0x0;
      }
      if ((*(byte *)&param_2->_flags & 0x20) != 0) {
        return (long *)0x0;
      }
      if (pcVar6[-1] == cVar7) goto LAB_004032fc;
      if (pcVar6 != pcVar9) {
        *pcVar6 = cVar7;
        pcVar6 = pcVar6 + 1;
        goto LAB_004032fc;
      }
      uVar3 = (int)cVar7;
      uVar8 = param_3 & 0xff;
LAB_004032a7:
      lVar2 = *param_1;
      pcVar5 = (char *)FUN_00405750(pcVar5,param_1);
      param_1[2] = (long)pcVar5;
      pcVar9 = pcVar5 + *param_1;
      pcVar4 = pcVar5 + lVar2;
      uVar8 = uVar8 & 0xff;
    }
    pcVar6 = pcVar4 + 1;
    *pcVar4 = (char)uVar8;
    if (uVar3 == (int)cVar7) {
LAB_004032fc:
      param_1[1] = (long)pcVar6 - (long)pcVar5;
      return param_1;
    }
  } while( true );
}


void FUN_00403320(undefined8 param_1,undefined8 param_2)

{
  FUN_00403200(param_1,param_2,10);
  return;
}


void FUN_00403330(long param_1)

{
  free(*(void **)(param_1 + 0x10));
  return;
}


int FUN_00403340(long param_1,long param_2,long param_3)

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


ulong FUN_00403390(void)

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


void FUN_00403410(byte *param_1)

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
        pbVar6 = &DAT_00408450;
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
  DAT_0060c318 = param_1;
  program_invocation_name = param_1;
  return;
}


char * FUN_004034b0(char *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  byte *pbVar3;
  
  pcVar2 = (char *)dcgettext(0,param_1,5);
  if (param_1 == pcVar2) {
    pbVar3 = (byte *)FUN_00406ea0();
    if ((*pbVar3 & 0xdf) == 0x55) {
      if (((((pbVar3[1] & 0xdf) != 0x54) || ((pbVar3[2] & 0xdf) != 0x46)) || (pbVar3[3] != 0x2d)) ||
         ((pbVar3[4] != 0x38 || (pbVar3[5] != 0)))) {
LAB_00403588:
        pcVar2 = "\"";
        if (param_2 != 9) {
          pcVar2 = "\'";
        }
        return pcVar2;
      }
      cVar1 = *pcVar2;
      pcVar2 = &DAT_00408461;
      if (cVar1 != '`') {
        pcVar2 = &DAT_00408456;
      }
    }
    else {
      if (((((*pbVar3 & 0xdf) != 0x47) || ((pbVar3[1] & 0xdf) != 0x42)) || (pbVar3[2] != 0x31)) ||
         (((pbVar3[3] != 0x38 || (pbVar3[4] != 0x30)) ||
          ((pbVar3[5] != 0x33 || ((pbVar3[6] != 0x30 || (pbVar3[7] != 0)))))))) goto LAB_00403588;
      cVar1 = *pcVar2;
      pcVar2 = &DAT_0040845d;
      if (cVar1 != '`') {
        pcVar2 = &DAT_0040845a;
      }
    }
  }
  return pcVar2;
}


ulong FUN_004035b0(undefined *param_1,ulong param_2,char *param_3,ulong param_4,int param_5,
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
LAB_00404201:
    if (param_2 != 0) {
      bVar3 = false;
      local_5b = false;
      bVar2 = true;
      local_70 = 0;
      goto LAB_00403e36;
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
      goto LAB_00404201;
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
      param_8 = (char *)FUN_004034b0(&DAT_00408465,param_5);
      param_9 = (char *)FUN_004034b0(&DAT_00409a27);
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
LAB_00403648:
  uVar22 = 0;
  bVar5 = local_5b;
LAB_00403658:
  bVar23 = param_4 != uVar22;
  if (param_4 == 0xffffffffffffffff) {
    bVar23 = param_3[uVar22] != '\0';
  }
  bVar26 = bVar6;
  if (!bVar23) goto LAB_00403dd8;
  bVar20 = (bool)(param_5 != 2 & bVar6);
  __s1 = (byte *)(param_3 + uVar22);
  uVar16 = uVar15;
  bVar4 = bVar3;
  if (bVar20) {
    if (local_a0 == 0) {
LAB_00403d50:
      uVar19 = (ulong)*__s1;
      switch(uVar19) {
      case 0:
        goto switchD_00403d62_caseD_0;
      default:
        bVar20 = false;
        goto switchD_00403bce_caseD_1;
      case 7:
        bVar17 = 0x61;
        goto LAB_00403a65;
      case 8:
        bVar17 = 0x62;
        break;
      case 9:
switchD_00403d62_caseD_9:
        bVar17 = 0x74;
        break;
      case 10:
switchD_00403d62_caseD_a:
        bVar17 = 0x6e;
        break;
      case 0xb:
switchD_00403d62_caseD_b:
        bVar17 = 0x76;
        goto LAB_00403a65;
      case 0xc:
switchD_00403d62_caseD_c:
        bVar17 = 0x66;
LAB_00403a65:
        if (local_5c) {
          bVar25 = false;
          goto LAB_004039b8;
        }
LAB_00403a70:
        bVar23 = false;
        goto LAB_0040382b;
      case 0xd:
        bVar20 = false;
switchD_00403748_caseD_d:
        bVar25 = param_5 == 2;
        uVar19 = 0xd;
        bVar13 = 0x72;
        goto LAB_00403980;
      case 0x20:
        bVar25 = false;
LAB_00403daa:
        uVar19 = 0x20;
        goto LAB_00403d72;
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
switchD_00403748_caseD_21:
        bVar25 = false;
        goto LAB_0040398b;
      case 0x23:
      case 0x7e:
        bVar26 = false;
LAB_00403d8a:
        if (uVar22 == 0) {
          bVar25 = false;
          bVar23 = bVar20;
          bVar20 = bVar26;
          goto LAB_00403798;
        }
        bVar23 = false;
        goto LAB_004037af;
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
LAB_00403d72:
        bVar24 = false;
        bVar23 = bVar20;
        bVar20 = bVar25;
        goto LAB_004037b1;
      case 0x27:
        bVar20 = false;
        goto switchD_00403bce_caseD_27;
      case 0x3f:
        bVar20 = false;
        goto switchD_00403bce_caseD_3f;
      case 0x5c:
        bVar20 = false;
        goto switchD_00403748_caseD_5c;
      case 0x7b:
      case 0x7d:
        bVar20 = false;
        goto switchD_00403bce_caseD_7b;
      }
      bVar25 = false;
      bVar23 = false;
      goto joined_r0x004039a7;
    }
    if ((param_4 == 0xffffffffffffffff) && (1 < local_a0)) {
      param_4 = strlen(param_3);
    }
    if ((param_4 < uVar22 + local_a0) || (iVar7 = memcmp(__s1,local_78,local_a0), iVar7 != 0))
    goto LAB_00403d50;
    if (!local_5c) {
      uVar19 = (ulong)*__s1;
      bVar25 = bVar20;
      switch(uVar19) {
      case 0:
        goto switchD_00403748_caseD_0;
      default:
        goto switchD_00403bce_caseD_1;
      case 7:
        bVar17 = 0x61;
        goto LAB_00403a70;
      case 8:
        bVar25 = false;
        bVar23 = false;
        bVar17 = 0x62;
        break;
      case 9:
        goto switchD_00403d62_caseD_9;
      case 10:
        goto switchD_00403d62_caseD_a;
      case 0xb:
        goto switchD_00403d62_caseD_b;
      case 0xc:
        goto switchD_00403d62_caseD_c;
      case 0xd:
        goto switchD_00403748_caseD_d;
      case 0x20:
        goto LAB_00403daa;
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
        goto switchD_00403748_caseD_21;
      case 0x23:
      case 0x7e:
        bVar26 = bVar20;
        goto LAB_00403d8a;
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
        goto LAB_00403d72;
      case 0x27:
        goto switchD_00403bce_caseD_27;
      case 0x3f:
        goto switchD_00403bce_caseD_3f;
      case 0x5c:
        goto switchD_00403748_caseD_5c;
      case 0x7b:
      case 0x7d:
        goto switchD_00403bce_caseD_7b;
      }
      goto LAB_004037f2;
    }
    goto LAB_004039ca;
  }
  uVar19 = (ulong)*__s1;
  switch(uVar19) {
  case 0:
    if (bVar6) {
switchD_00403d62_caseD_0:
      if (!local_5c) {
        bVar20 = false;
switchD_00403748_caseD_0:
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
            goto LAB_004038a8;
          }
LAB_00403aea:
          param_1[uVar16] = 0x5c;
          uVar15 = uVar16;
        }
        else if (uVar15 < uVar9) goto LAB_00403aea;
        uVar16 = uVar15 + 1;
        bVar24 = bVar23;
        if (param_5 == 2) {
          bVar17 = 0x30;
          bVar23 = false;
          bVar4 = bVar3;
          goto LAB_004038a8;
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
LAB_00403b29:
        bVar17 = (byte)uVar19;
        bVar23 = false;
        uVar15 = uVar16;
        bVar4 = bVar3;
        if ((bool)(bVar6 ^ 1U | bVar26)) goto LAB_004038a8;
        goto LAB_004037b1;
      }
      bVar26 = param_5 == 2;
      goto LAB_004039bc;
    }
    if ((param_6 & 1) == 0) {
      bVar25 = param_5 == 2;
      uVar19 = 0;
      bVar23 = false;
      bVar20 = false;
      goto LAB_00403798;
    }
    uVar22 = uVar22 + 1;
    goto LAB_00403658;
  default:
switchD_00403bce_caseD_1:
    bVar25 = bVar6;
    if (sVar8 != 1) {
      local_40[0] = (mbstate_t)0x0;
      if (param_4 == 0xffffffffffffffff) {
        param_4 = strlen(param_3);
      }
      uVar21 = 0;
      do {
        uVar1 = uVar22 + uVar21;
        lVar11 = FUN_00406dc0(&local_44,param_3 + uVar1,param_4 - uVar1,local_40);
        if (lVar11 == 0) break;
        if (lVar11 == -1) {
          bVar23 = false;
          goto LAB_004044da;
        }
        if (lVar11 == -2) {
          if ((param_4 <= uVar1) || (param_3[uVar1] == '\0')) goto LAB_00404617;
          goto LAB_00404607;
        }
        if (((param_5 == 2) && (local_5c)) && (lVar11 != 1)) {
          pcVar12 = param_3 + uVar1 + 1;
          do {
            if (((byte)(*pcVar12 + 0xa5U) < 0x22) &&
               ((1L << (*pcVar12 + 0xa5U & 0x3f) & 0x20000002bU) != 0)) {
              param_5 = 2;
              goto LAB_004039bc;
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
      goto LAB_004044da;
    }
    ppuVar10 = __ctype_b_loc();
    uVar21 = 1;
    bVar25 = ((*ppuVar10)[uVar19] & 0x4000) == 0;
    bVar23 = !bVar25;
    bVar25 = (bool)(bVar25 & bVar6);
    goto LAB_00403ba4;
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
    goto LAB_00403be2;
  case 10:
    uVar19 = 10;
    bVar13 = 0x6e;
    goto LAB_00403be2;
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
LAB_00403be2:
    bVar25 = param_5 == 2;
    bVar20 = (bool)(local_5c & bVar25);
    if (bVar20) {
LAB_00403bfa:
      param_5 = 2;
      goto LAB_004039bc;
    }
    break;
  case 0x20:
    uVar19 = 0x20;
    goto LAB_00403786;
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
LAB_00403786:
    bVar25 = param_5 == 2;
    if ((local_5c) && (bVar25)) goto LAB_00403bfa;
    goto LAB_00403798;
  case 0x23:
  case 0x7e:
LAB_0040377d:
    bVar25 = param_5 == 2;
    if (uVar22 == 0) goto LAB_00403786;
    goto LAB_0040398b;
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
    goto switchD_00403bce_caseD_25;
  case 0x27:
switchD_00403bce_caseD_27:
    bVar5 = bVar23;
    if (param_5 != 2) {
      bVar25 = false;
      uVar19 = 0x27;
      goto LAB_00403798;
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
      goto LAB_004038a8;
    }
    goto LAB_004039bc;
  case 0x3f:
switchD_00403bce_caseD_3f:
    if (param_5 == 2) {
      if (!local_5c) {
        bVar17 = 0x3f;
        bVar24 = false;
        bVar23 = false;
        goto LAB_004038a8;
      }
      goto LAB_004039bc;
    }
    if (param_5 != 5) {
      bVar25 = param_5 == 2;
      uVar19 = 0x3f;
      bVar23 = false;
      goto LAB_00403798;
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
        goto LAB_00403b29;
      }
      goto LAB_004039ca;
    }
    bVar25 = false;
    uVar19 = 0x3f;
    bVar23 = false;
    goto LAB_00403798;
  case 0x5c:
    if (param_5 != 2) {
switchD_00403748_caseD_5c:
      uVar19 = 0x5c;
      bVar17 = 0x5c;
      bVar13 = 0x5c;
      bVar25 = (bool)(bVar6 & local_5c & local_a0 != 0);
      if (!bVar25) break;
      uVar22 = uVar22 + 1;
      bVar23 = false;
      goto LAB_004038c4;
    }
    if (local_5c) goto LAB_004039bc;
    uVar22 = uVar22 + 1;
    bVar23 = false;
    bVar17 = 0x5c;
    goto LAB_004038c4;
  case 0x7b:
  case 0x7d:
switchD_00403bce_caseD_7b:
    bVar24 = param_4 != 1;
    if (param_4 == 0xffffffffffffffff) {
      bVar24 = param_3[1] != '\0';
    }
    bVar25 = param_5 == 2;
    if (!bVar24) goto LAB_0040377d;
    goto LAB_0040398b;
  }
LAB_00403980:
  if (!bVar6) {
LAB_0040398b:
    bVar23 = false;
    goto LAB_00403798;
  }
  bVar23 = false;
  bVar17 = bVar13;
  goto joined_r0x004039a7;
LAB_00403dd8:
  if ((uVar15 == 0) && ((bool)(local_5c & param_5 == 2))) {
    param_5 = 2;
LAB_004039bc:
    if (bVar26) {
      param_5 = 4;
    }
LAB_004039ca:
    uVar9 = FUN_004035b0(param_1,uVar9,param_3,param_4,param_5,param_6 & 0xfffffffd,0,param_8,
                         param_9);
    return uVar9;
  }
  bVar26 = (bool)(param_5 == 2 & (local_5c ^ 1U));
  bVar23 = (bool)(local_5c ^ 1U);
  if ((!bVar26) || (bVar23 = bVar26, !bVar5)) {
LAB_004046ad:
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
    uVar9 = FUN_004035b0(param_1,local_70,param_3,param_4,5,param_6,param_7,param_8,param_9);
    return uVar9;
  }
  local_5b = uVar9 == 0 && local_70 != 0;
  param_2 = local_70;
  bVar23 = bVar5;
  if (uVar9 != 0 || local_70 == 0) goto LAB_004046ad;
LAB_00403e36:
  *param_1 = 0x27;
  param_5 = 2;
  uVar15 = 1;
  local_78 = "\'";
  local_a0 = 1;
  local_5c = false;
  uVar9 = param_2;
  goto LAB_00403648;
  while (__s1[uVar21] != 0) {
LAB_00404607:
    uVar21 = uVar21 + 1;
    if (param_4 <= uVar22 + uVar21) break;
  }
LAB_00404617:
  bVar23 = false;
LAB_004044da:
  if (1 < uVar21) {
LAB_0040409e:
    bVar26 = false;
    uVar21 = uVar21 + uVar22;
    uVar16 = uVar22;
    do {
      bVar17 = (byte)uVar19;
      if (bVar25) {
        bVar26 = param_5 == 2;
        if (local_5c) goto LAB_004039bc;
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
        if (uVar21 <= uVar22) goto LAB_0040383d;
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
        if (uVar21 <= uVar22) goto LAB_004038c4;
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
LAB_00403ba4:
  if (bVar25) {
    bVar23 = false;
    bVar25 = bVar6;
    goto LAB_0040409e;
  }
switchD_00403bce_caseD_25:
  bVar25 = param_5 == 2;
LAB_00403798:
  bVar17 = (byte)uVar19;
  bVar24 = (bool)((bVar6 ^ 1U | bVar25) ^ 1 | local_5c);
  bVar26 = bVar20;
  if (bVar24) {
LAB_004037af:
    bVar24 = false;
    bVar20 = bVar26;
LAB_004037b1:
    bVar17 = (byte)uVar19;
    uVar16 = uVar15;
    bVar4 = bVar3;
    if ((param_7 == 0) || ((*(uint *)(param_7 + (uVar19 >> 5) * 4) >> (bVar17 & 0x1f) & 1) == 0))
    goto LAB_004038a8;
    bVar25 = param_5 == 2;
  }
  else {
LAB_004038a8:
    bVar25 = param_5 == 2;
    uVar15 = uVar16;
    bVar3 = bVar4;
    if (!bVar20) {
      uVar22 = uVar22 + 1;
      bVar3 = (bool)((bVar24 ^ 1U) & bVar4);
LAB_004038c4:
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
      goto LAB_0040383d;
    }
  }
joined_r0x004039a7:
  if (local_5c) {
LAB_004039b8:
    bVar26 = (bool)(bVar6 & bVar25);
    goto LAB_004039bc;
  }
LAB_004037f2:
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
LAB_0040382b:
  if (uVar15 < uVar9) {
    param_1[uVar15] = 0x5c;
  }
  uVar15 = uVar15 + 1;
  uVar22 = uVar22 + 1;
  bVar4 = bVar3;
LAB_0040383d:
  bVar3 = bVar4;
  if (uVar15 < uVar9) {
    param_1[uVar15] = bVar17;
  }
  uVar15 = uVar15 + 1;
  if (!bVar23) {
    bVar2 = false;
  }
  goto LAB_00403658;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_004047e0(int param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

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
  puVar8 = (undefined4 *)PTR_DAT_0060c278;
  if (DAT_0060c290 <= param_1) {
    if (param_1 == 0x7fffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_00405840();
    }
    if (PTR_DAT_0060c278 == &DAT_0060c280) {
      puVar8 = (undefined4 *)FUN_00405650(0);
      uVar6 = PTR_DAT_0060c288._4_4_;
      uVar5 = PTR_DAT_0060c288._0_4_;
      uVar3 = _UNK_0060c284;
      PTR_DAT_0060c278 = (undefined *)puVar8;
      *puVar8 = _DAT_0060c280;
      puVar8[1] = uVar3;
      puVar8[2] = uVar5;
      puVar8[3] = uVar6;
    }
    else {
      puVar8 = (undefined4 *)FUN_00405650(PTR_DAT_0060c278);
      PTR_DAT_0060c278 = (undefined *)puVar8;
    }
    memset(puVar8 + (long)DAT_0060c290 * 4,0,(long)((param_1 + 1) - DAT_0060c290) << 4);
    DAT_0060c290 = param_1 + 1;
  }
  uVar2 = param_4[1];
  puVar10 = (ulong *)(puVar8 + (long)param_1 * 4);
  uVar4 = *puVar10;
  __ptr = (undefined *)puVar10[1];
  uVar9 = FUN_004035b0(__ptr,uVar4,param_2,param_3,*param_4,uVar2 | 1,param_4 + 2,
                       *(undefined8 *)(param_4 + 10),*(undefined8 *)(param_4 + 0xc));
  if (uVar4 <= uVar9) {
    uVar9 = uVar9 + 1;
    *puVar10 = uVar9;
    if (__ptr != &DAT_0060c320) {
      free(__ptr);
    }
    __ptr = (undefined *)FUN_004055f0(uVar9);
    uVar3 = *param_4;
    puVar10[1] = (ulong)__ptr;
    FUN_004035b0(__ptr,uVar9,param_2,param_3,uVar3,uVar2 | 1,param_4 + 2,
                 *(undefined8 *)(param_4 + 10),*(undefined8 *)(param_4 + 0xc));
  }
  *piVar7 = iVar1;
  return __ptr;
}


void FUN_00404980(undefined *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_0060c420;
  }
  FUN_004057f0(param_1,0x38);
  *piVar2 = iVar1;
  return;
}


undefined4 FUN_004049c0(undefined4 *param_1)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)&DAT_0060c420;
  }
  return *param_1;
}


void FUN_004049d0(undefined4 *param_1,undefined4 param_2)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)&DAT_0060c420;
  }
  *param_1 = param_2;
  return;
}


uint FUN_004049e0(undefined *param_1,byte param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_0060c420;
  }
  uVar1 = *(uint *)(param_1 + (ulong)(param_2 >> 5) * 4 + 8);
  uVar2 = uVar1 >> (param_2 & 0x1f);
  *(uint *)(param_1 + (ulong)(param_2 >> 5) * 4 + 8) =
       ((param_3 ^ uVar2) & 1) << (param_2 & 0x1f) ^ uVar1;
  return uVar2 & 1;
}


undefined4 FUN_00404a20(undefined *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_0060c420;
  }
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_1 + 4) = param_2;
  return uVar1;
}


void FUN_00404a40(undefined4 *param_1,long param_2,long param_3)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)&DAT_0060c420;
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


void FUN_00404a70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 *param_5)

{
  int iVar1;
  int *piVar2;
  
  if (param_5 == (undefined4 *)0x0) {
    param_5 = (undefined4 *)&DAT_0060c420;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  FUN_004035b0(param_1,param_2,param_3,param_4,*param_5,param_5[1],param_5 + 2,
               *(undefined8 *)(param_5 + 10),*(undefined8 *)(param_5 + 0xc));
  *piVar2 = iVar1;
  return;
}


undefined8 FUN_00404af0(undefined8 param_1,undefined8 param_2,long *param_3,undefined4 *param_4)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  
  if (param_4 == (undefined4 *)0x0) {
    param_4 = (undefined4 *)&DAT_0060c420;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  uVar5 = (uint)(param_3 == (long *)0x0) | param_4[1];
  lVar3 = FUN_004035b0(0,0,param_1,param_2,*param_4,uVar5,param_4 + 2,*(undefined8 *)(param_4 + 10),
                       *(undefined8 *)(param_4 + 0xc));
  uVar4 = FUN_004055f0(lVar3 + 1);
  FUN_004035b0(uVar4,lVar3 + 1,param_1,param_2,*param_4,uVar5,param_4 + 2,
               *(undefined8 *)(param_4 + 10),*(undefined8 *)(param_4 + 0xc));
  *piVar2 = iVar1;
  if (param_3 != (long *)0x0) {
    *param_3 = lVar3;
  }
  return uVar4;
}


void FUN_00404be0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00404af0(param_1,param_2,0,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404bf0(void)

{
  void **ppvVar1;
  void *__ptr;
  undefined *__ptr_00;
  void **ppvVar2;
  
  __ptr_00 = PTR_DAT_0060c278;
  if (1 < DAT_0060c290) {
    ppvVar2 = (void **)(PTR_DAT_0060c278 + 0x18);
    ppvVar1 = (void **)(PTR_DAT_0060c278 + (ulong)(DAT_0060c290 - 2) * 0x10 + 0x28);
    do {
      __ptr = *ppvVar2;
      ppvVar2 = ppvVar2 + 2;
      free(__ptr);
    } while (ppvVar2 != ppvVar1);
  }
  if (*(undefined **)(__ptr_00 + 8) != &DAT_0060c320) {
    free(*(undefined **)(__ptr_00 + 8));
    _DAT_0060c280 = 0x100;
    PTR_DAT_0060c288 = &DAT_0060c320;
  }
  if (__ptr_00 != &DAT_0060c280) {
    free(__ptr_00);
    PTR_DAT_0060c278 = &DAT_0060c280;
  }
  DAT_0060c290 = 1;
  return;
}


void FUN_00404c90(undefined8 param_1,undefined8 param_2)

{
  FUN_004047e0(param_1,param_2,0xffffffffffffffff,&DAT_0060c420);
  return;
}


void FUN_00404cb0(void)

{
  FUN_004047e0();
  return;
}


void FUN_00404cc0(undefined8 param_1)

{
  FUN_004047e0(0,param_1,0xffffffffffffffff,&DAT_0060c420);
  return;
}


void FUN_00404ce0(undefined8 param_1,undefined8 param_2)

{
  FUN_004047e0(0,param_1,param_2,&DAT_0060c420);
  return;
}


void FUN_00404d00(undefined8 param_1,int param_2,undefined8 param_3)

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
    FUN_004047e0(param_1,param_3,0xffffffffffffffff,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00404d70(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

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
    FUN_004047e0(param_1,param_3,param_4,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00404de0(undefined4 param_1,undefined8 param_2)

{
  FUN_00404d00(0,param_1,param_2);
  return;
}


void FUN_00404df0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00404d70(0,param_1,param_2,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404e00(undefined8 param_1,undefined8 param_2,byte param_3)

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
  
  local_18 = DAT_0060c450;
  local_48 = _DAT_0060c420;
  uStack_40 = uRam000000000060c428;
  local_38 = _DAT_0060c430;
  uStack_30 = uRam000000000060c438;
  puVar1 = (uint *)((long)&uStack_40 + (ulong)(param_3 >> 5) * 4);
  local_28 = _DAT_0060c440;
  uStack_20 = uRam000000000060c448;
  uVar2 = *puVar1;
  *puVar1 = (~(uVar2 >> (param_3 & 0x1f)) & 1) << (param_3 & 0x1f) ^ uVar2;
  FUN_004047e0(0,param_1,param_2,&local_48);
  return;
}


void FUN_00404e70(undefined8 param_1,char param_2)

{
  FUN_00404e00(param_1,0xffffffffffffffff,(int)param_2);
  return;
}


void FUN_00404e80(undefined8 param_1)

{
  FUN_00404e00(param_1,0xffffffffffffffff,0x3a);
  return;
}


void FUN_00404ea0(undefined8 param_1,undefined8 param_2)

{
  FUN_00404e00(param_1,param_2,0x3a);
  return;
}


void FUN_00404eb0(undefined8 param_1,int param_2,undefined8 param_3)

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
    FUN_004047e0(param_1,param_3,0xffffffffffffffff,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404f20(undefined8 param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5
                 )

{
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  long lStack_20;
  long local_18;
  
  uStack_40 = uRam000000000060c428;
  local_38 = _DAT_0060c430;
  uStack_30 = uRam000000000060c438;
  local_28 = _DAT_0060c440;
  lStack_20 = uRam000000000060c448;
  local_18 = DAT_0060c450;
  local_48 = CONCAT44((int)((ulong)_DAT_0060c420 >> 0x20),10);
  if ((param_2 != 0) && (param_3 != 0)) {
    lStack_20 = param_2;
    local_18 = param_3;
    FUN_004047e0(param_1,param_4,param_5,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00404f90(void)

{
  FUN_00404f20();
  return;
}


void FUN_00404fa0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00404f20(0,param_1,param_2,param_3,0xffffffffffffffff);
  return;
}


void FUN_00404fc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00404f20(0,param_1,param_2,param_3,param_4);
  return;
}


void FUN_00404fe0(void)

{
  FUN_004047e0();
  return;
}


void FUN_00404ff0(undefined8 param_1,undefined8 param_2)

{
  FUN_004047e0(0,param_1,param_2,&DAT_0060c240);
  return;
}


void FUN_00405010(undefined8 param_1,undefined8 param_2)

{
  FUN_004047e0(param_1,param_2,0xffffffffffffffff,&DAT_0060c240);
  return;
}


void FUN_00405030(undefined8 param_1)

{
  FUN_004047e0(0,param_1,0xffffffffffffffff,&DAT_0060c240);
  return;
}


undefined8
FUN_00405050(FILE *param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5,
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
  uVar1 = dcgettext(0,&DAT_004091ab,5);
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
    goto LAB_004052cc;
  case 5:
    uVar1 = param_5[3];
    uVar4 = param_5[2];
    uVar5 = param_5[1];
    uVar6 = *param_5;
    uVar7 = dcgettext(0,"Written by %s, %s, %s,\n%s, and %s.\n",5);
LAB_004052cc:
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
    goto LAB_00405369;
  case 7:
    uVar1 = param_5[2];
    uVar4 = param_5[5];
    uVar5 = param_5[4];
    uVar6 = param_5[3];
    local_58 = param_5[1];
    uVar7 = *param_5;
    uVar3 = dcgettext(0,"Written by %s, %s, %s,\n%s, %s, %s, and %s.\n",5);
LAB_00405369:
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
    goto LAB_0040514a;
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
LAB_0040514a:
  uVar1 = __fprintf_chk(param_1,1,uVar3,uVar7,local_50,local_58,uVar6,uVar5,uVar4,uVar1,local_48);
  return uVar1;
}


void FUN_00405430(void)

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
  FUN_00405050();
  return;
}


void FUN_00405450(void)

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
  FUN_00405050();
  return;
}


void FUN_004054b0(void)

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
  FUN_00405050();
  return;
}


void FUN_00405570(void)

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


void FUN_004055f0(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00405840();
  }
  return;
}


void FUN_00405610(ulong param_1,ulong param_2)

{
  if ((-1 < SUB168(ZEXT816(param_1) * ZEXT816(param_2),0)) &&
     (SUB168(ZEXT816(param_1) * ZEXT816(param_2) >> 0x40,0) == 0)) {
    FUN_004055f0();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00405840();
}


void thunk_FUN_004055f0(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00405840();
  }
  return;
}


void * FUN_00405650(void *param_1,size_t param_2)

{
  void *pvVar1;
  
  if ((param_2 == 0) && (param_1 != (void *)0x0)) {
    free(param_1);
    return (void *)0x0;
  }
  pvVar1 = realloc(param_1,param_2);
  if ((pvVar1 == (void *)0x0) && (param_2 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00405840();
  }
  return pvVar1;
}


void FUN_00405690(undefined8 param_1,ulong param_2,ulong param_3)

{
  if ((-1 < SUB168(ZEXT816(param_2) * ZEXT816(param_3),0)) &&
     (SUB168(ZEXT816(param_2) * ZEXT816(param_3) >> 0x40,0) == 0)) {
    FUN_00405650();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00405840();
}


void FUN_004056c0(long param_1,ulong *param_2,ulong param_3)

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
    if ((SUB168(ZEXT816(uVar2) * ZEXT816(param_3),0) < 0) || (uVar3 != 0)) goto LAB_0040571b;
  }
  else {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x5555555555555554);
    uVar3 = SUB168(auVar1 % ZEXT816(param_3),0);
    if (SUB168(auVar1 / ZEXT816(param_3),0) <= uVar2) {
LAB_0040571b:
                    /* WARNING: Subroutine does not return */
      FUN_00405840(param_1,param_2,uVar3);
    }
    uVar2 = (uVar2 >> 1) + 1 + uVar2;
  }
  *param_2 = uVar2;
  FUN_00405650(param_1,uVar2 * param_3);
  return;
}


void FUN_00405750(long param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (param_1 == 0) {
    if (uVar1 == 0) {
      *param_2 = 0x80;
      FUN_00405650(0,0x80);
      return;
    }
    if ((long)uVar1 < 0) goto LAB_0040579a;
  }
  else {
    if (0x5555555555555553 < uVar1) {
LAB_0040579a:
                    /* WARNING: Subroutine does not return */
      FUN_00405840();
    }
    uVar1 = (uVar1 >> 1) + 1 + uVar1;
  }
  *param_2 = uVar1;
  FUN_00405650(param_1,uVar1);
  return;
}


void FUN_004057a0(size_t param_1)

{
  void *__s;
  
  __s = (void *)FUN_004055f0();
  memset(__s,0,param_1);
  return;
}


void FUN_004057c0(size_t param_1,ulong param_2)

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
  FUN_00405840();
}


void FUN_004057f0(void *param_1,size_t param_2)

{
  void *__dest;
  
  __dest = (void *)FUN_004055f0(param_2);
  memcpy(__dest,param_1,param_2);
  return;
}


void FUN_00405820(char *param_1)

{
  void *__dest;
  size_t sVar1;
  
  sVar1 = strlen(param_1);
  __dest = (void *)FUN_004055f0(sVar1 + 1);
  memcpy(__dest,param_1,sVar1 + 1);
  return;
}


void FUN_00405840(void)

{
  undefined8 uVar1;
  
  uVar1 = dcgettext(0,"memory exhausted",5);
  error(DAT_0060c220,0,&DAT_004083dc,uVar1);
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00405880(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = dcgettext(0,"string comparison failed",5);
  error(0,param_1,uVar1);
  uVar1 = dcgettext(0,"Set LC_ALL=\'C\' to work around the problem.",5);
  error(0,0,uVar1);
  uVar1 = FUN_00404d70(1,8,param_4,param_5);
  uVar2 = FUN_00404d70(0,8,param_2,param_3);
  uVar3 = dcgettext(0,"The strings compared were %s and %s.",5);
  error(DAT_0060c220,0,uVar3,uVar2,uVar1);
  return;
}


undefined4 FUN_00405940(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  int *piVar2;
  
  uVar1 = FUN_004074d0();
  piVar2 = __errno_location();
  if (*piVar2 == 0) {
    return uVar1;
  }
  FUN_00405880(*piVar2,param_1,param_2,param_3,param_4);
  return uVar1;
}


undefined4 FUN_004059a0(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined4 uVar1;
  int *piVar2;
  
  uVar1 = FUN_00407580();
  piVar2 = __errno_location();
  if (*piVar2 == 0) {
    return uVar1;
  }
  FUN_00405880(*piVar2,param_1,param_2 + -1,param_3,param_4 + -1);
  return uVar1;
}


ulong FUN_00405a00(byte *param_1,byte **param_2,uint param_3,ulong *param_4,char *param_5)

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
    if ((param_5 == (char *)0x0) || (bVar12 = *pbVar5, bVar12 == 0)) goto LAB_00405aa0;
    pcVar7 = strchr(param_5,(int)(char)bVar12);
    if (pcVar7 == (char *)0x0) goto switchD_00405b7c_caseD_1;
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
        goto LAB_00405b6a;
      }
      if (bVar1 != 0x42) {
                    /* WARNING: Could not recover jumptable at 0x00405b59. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar6 = (*(code *)(&PTR_LAB_004095f0)[bVar8])();
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
LAB_00405b6a:
  iVar10 = (int)uVar11;
  switch(bVar12 - 0x42 & 0xff) {
  case 0:
    if (uVar6 >> 0x36 == 0) {
      uVar6 = uVar6 << 10;
      break;
    }
    goto LAB_00405bd7;
  default:
switchD_00405b7c_caseD_1:
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
    goto LAB_00405c64;
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
    goto joined_r0x00405b9c;
  case 0xb:
  case 0x2b:
    auVar2 = ZEXT816(uVar6) * ZEXT816((ulong)(long)iVar10);
    if (SUB168(auVar2 >> 0x40,0) != 0) goto LAB_00405bd7;
    auVar2 = (auVar2 & (undefined  [16])0xffffffffffffffff) * ZEXT816((ulong)(long)iVar10);
joined_r0x00405b9c:
    uVar6 = SUB168(auVar2,0);
    if (SUB168(auVar2 >> 0x40,0) != 0) {
LAB_00405bd7:
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
    goto LAB_00405c64;
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
    goto LAB_00405c64;
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
    goto LAB_00405c64;
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
LAB_00405c64:
    uVar14 = (ulong)(uVar13 | uVar9);
    break;
  case 0x20:
    if (uVar6 >> 0x37 != 0) goto LAB_00405bd7;
    uVar6 = uVar6 << 9;
    break;
  case 0x21:
    break;
  case 0x35:
    if ((long)uVar6 < 0) goto LAB_00405bd7;
    uVar6 = uVar6 * 2;
  }
  *param_2 = pbVar5 + iVar15;
  if (pbVar5[iVar15] != 0) {
    uVar14 = (ulong)((uint)uVar14 | 2);
  }
LAB_00405aa0:
  *param_4 = uVar6;
  return uVar14;
}


int FUN_00405e30(FILE *param_1)

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
      if (_Var4 == -1) goto LAB_00405e97;
    }
    iVar1 = FUN_00405eb0(param_1);
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
LAB_00405e97:
  iVar1 = fclose(param_1);
  return iVar1;
}


void FUN_00405eb0(FILE *param_1)

{
  int iVar1;
  
  if (param_1 != (FILE *)0x0) {
    iVar1 = __freading();
    if ((iVar1 != 0) && ((param_1->_flags & 0x100U) != 0)) {
      FUN_00405f90(param_1,0,1);
      fflush(param_1);
      return;
    }
  }
  fflush(param_1);
  return;
}


FILE * FUN_00405ef0(char *param_1,char *param_2,FILE *param_3)

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


ulong FUN_00405f90(FILE *param_1,__off_t param_2,int param_3)

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


void FUN_00405ff0(long param_1,int *param_2)

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
      if (iVar3 <= iVar8) goto LAB_0040606c;
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
      if (iVar9 <= iVar3) goto LAB_0040606c;
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
LAB_0040606c:
  param_2[0xc] = iVar2;
  param_2[0xb] = iVar1 + (iVar2 - iVar3);
  return;
}


int FUN_004060d0(int param_1,undefined8 *param_2,char *param_3,char **param_4,undefined4 *param_5,
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
      if ((iVar5 == 0) && (sVar7 = strlen(__s1_00), sVar7 == sVar15)) goto LAB_004062f0;
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
            if (local_70 == (char *)0x0) goto LAB_00406230;
          }
          else if (local_70 == (char *)0x0) {
            local_70 = (char *)calloc((long)iVar5,1);
            if (local_70 == (char *)0x0) {
              bVar3 = true;
              goto LAB_00406230;
            }
            bVar4 = true;
            local_70[(int)local_44] = '\x01';
          }
          local_70[lVar16] = '\x01';
        }
      }
LAB_00406230:
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
              __fprintf_chk(__stream,1,&DAT_00409a21,param_9,*param_4);
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
LAB_004062f0:
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


uint FUN_004066f0(uint param_1,undefined8 *param_2,char *param_3,long param_4,undefined8 param_5,
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
LAB_0040673a:
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
          goto LAB_0040683d;
        }
        pbVar8 = *(byte **)(param_7 + 8);
      }
      param_7[10] = 0;
    }
LAB_0040683d:
    param_7[6] = 1;
    cVar2 = *param_3;
LAB_00406848:
    if (cVar2 == ':') {
      uVar3 = 0;
    }
    if (pbVar8 == (byte *)0x0) goto LAB_004067b8;
LAB_0040685c:
    if (*pbVar8 == 0) goto LAB_004067b8;
  }
  else {
    if (param_7[6] == 0) goto LAB_0040673a;
    cVar2 = *param_3;
    pbVar8 = *(byte **)(param_7 + 8);
    if ((cVar2 - 0x2bU & 0xfd) != 0) goto LAB_00406848;
    pcVar4 = param_3 + 1;
    param_3 = param_3 + 1;
    if (*pcVar4 == ':') {
      uVar3 = 0;
    }
    if (pbVar8 != (byte *)0x0) goto LAB_0040685c;
LAB_004067b8:
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
        FUN_00405ff0(param_2,param_7);
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
LAB_00406926:
      if (uVar11 != param_1) {
        *param_7 = uVar11;
      }
      return 0xffffffff;
    }
    lVar6 = 3;
    pbVar8 = (byte *)param_2[(int)uVar11];
    pbVar9 = pbVar8;
    pbVar10 = &DAT_00409a29;
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
          FUN_00405ff0(param_2,param_7);
          uVar11 = param_7[0xb];
        }
      }
      param_7[0xc] = param_1;
      *param_7 = param_1;
      goto LAB_00406926;
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
        puVar15 = &DAT_00409a29;
        goto LAB_00406a85;
      }
      if ((int)param_6 != 0) {
        if (pbVar8[2] == 0) {
          pcVar4 = strchr(param_3,(int)(char)bVar14);
          param_6 = param_6 & 0xffffffff;
          if (pcVar4 != (char *)0x0) goto LAB_00406a30;
        }
        *(byte **)(param_7 + 8) = pbVar8 + 1;
        uVar11 = FUN_004060d0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar3,
                              &DAT_00409a2a);
        if (uVar11 != 0xffffffff) {
          return uVar11;
        }
        pbVar8 = (byte *)param_2[(int)*param_7];
      }
    }
LAB_00406a30:
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
  puVar15 = &DAT_00409a48;
LAB_00406a85:
  uVar3 = FUN_004060d0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar3,puVar15);
  return uVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406cc0(void)

{
  DAT_0060c460 = DAT_0060c29c;
  _DAT_0060c464 = DAT_0060c298;
  FUN_004066f0();
  DAT_0060c29c = DAT_0060c460;
  DAT_0060c4a0 = DAT_0060c470;
  _DAT_0060c294 = DAT_0060c468;
  return;
}


void FUN_00406d20(void)

{
  FUN_00406cc0();
  return;
}


void FUN_00406d40(void)

{
  FUN_00406cc0();
  return;
}


void FUN_00406d60(void)

{
  FUN_004066f0();
  return;
}


void FUN_00406d80(void)

{
  FUN_00406cc0();
  return;
}


void FUN_00406da0(void)

{
  FUN_004066f0();
  return;
}


size_t FUN_00406dc0(wchar_t *param_1,byte *param_2,size_t param_3,mbstate_t *param_4)

{
  char cVar1;
  size_t sVar2;
  wchar_t local_1c;
  
  if (param_2 == (byte *)0x0) {
    param_3 = 1;
    param_2 = (byte *)0x409a47;
  }
  else {
    if (param_3 == 0) {
      return 0xfffffffffffffffe;
    }
    if (param_1 != (wchar_t *)0x0) goto LAB_00406de4;
  }
  param_1 = &local_1c;
LAB_00406de4:
  sVar2 = mbrtowc(param_1,(char *)param_2,param_3,param_4);
  if ((0xfffffffffffffffd < sVar2) && (cVar1 = FUN_00403190(0), cVar1 == '\0')) {
    sVar2 = 1;
    *param_1 = (uint)*param_2;
  }
  return sVar2;
}


ulong FUN_00406e40(uint *param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  
  lVar2 = __fpending();
  uVar1 = *param_1;
  uVar3 = FUN_00405e30(param_1);
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

char * FUN_00406ea0(void)

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
  if (DAT_0060c498 != (char *)0x0) goto LAB_00406eda;
  pcVar7 = getenv("CHARSETALIASDIR");
  if ((pcVar7 == (char *)0x0) || (*pcVar7 == '\0')) {
    sVar6 = 0x73;
    sVar5 = 0x65;
    __n = 100;
    pcVar7 = 
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib"
    ;
LAB_00406fc5:
    __file = (char *)malloc(sVar6);
    if (__file != (char *)0x0) {
      memcpy(__file,pcVar7,__n);
      __file[__n] = '/';
      goto LAB_00406fe6;
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
        goto LAB_00406fc5;
      }
      sVar6 = __n + 0xe;
    }
    __file = (char *)malloc(sVar6);
    if (__file != (char *)0x0) {
      memcpy(__file,pcVar7,__n);
      sVar5 = __n;
LAB_00406fe6:
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
LAB_00407080:
          pbVar8 = (byte *)__stream->_IO_read_ptr;
          if (__stream->_IO_read_end <= pbVar8) goto LAB_0040720c;
          do {
            __stream->_IO_read_ptr = (char *)(pbVar8 + 1);
            uVar4 = (uint)*pbVar8;
            __ptr = pcVar7;
            while( true ) {
              pcVar7 = __ptr;
              if ((uVar4 - 9 < 2) || (uVar4 == 0x20)) goto LAB_00407080;
              if (uVar4 == 0x23) goto LAB_00407271;
              ungetc(uVar4,__stream);
              iVar2 = fscanf(__stream,"%50s %50s",&local_b8,&local_78);
              puVar13 = &local_b8;
              if (iVar2 < 2) goto LAB_0040721f;
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
                FUN_00405e30(__stream);
                goto LAB_00407024;
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
LAB_0040720c:
              uVar4 = __uflow(__stream);
              __ptr = pcVar7;
              if (uVar4 == 0xffffffff) goto LAB_0040721f;
            }
          } while( true );
        }
        close(iVar2);
      }
      goto LAB_0040701e;
    }
  }
  DAT_0060c498 = "";
LAB_00406eda:
  cVar1 = *DAT_0060c498;
  pcVar7 = DAT_0060c498;
  do {
    if (cVar1 == '\0') {
LAB_00406f34:
      if (*__s1 == '\0') {
        __s1 = "ASCII";
      }
      return __s1;
    }
    iVar2 = strcmp(__s1,pcVar7);
    if ((iVar2 == 0) || ((cVar1 == '*' && (pcVar7[1] == '\0')))) {
      sVar6 = strlen(pcVar7);
      __s1 = pcVar7 + sVar6 + 1;
      goto LAB_00406f34;
    }
    sVar6 = strlen(pcVar7);
    sVar5 = strlen(pcVar7 + sVar6 + 1);
    pcVar7 = pcVar7 + sVar6 + 1 + sVar5 + 1;
    cVar1 = *pcVar7;
  } while( true );
LAB_00407271:
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
  if (uVar4 == 0xffffffff) goto LAB_0040721f;
  goto LAB_00407080;
LAB_0040721f:
  FUN_00405e30(__stream);
  if (local_d0 == 0) {
LAB_0040701e:
    pcVar7 = "";
  }
  else {
    pcVar7[local_d0] = '\0';
  }
LAB_00407024:
  free(__file);
  DAT_0060c498 = pcVar7;
  goto LAB_00406eda;
}


int FUN_00407410(char *param_1,long param_2,char *param_3,long param_4)

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


undefined4 FUN_004074d0(void *param_1,size_t param_2,void *param_3,size_t param_4)

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
  uVar6 = FUN_00407410(param_1,param_2 + 1,param_3,param_4 + 1);
  *puVar1 = uVar3;
  *puVar2 = uVar4;
  return uVar6;
}


undefined8 FUN_00407580(void *param_1,size_t param_2,void *param_3,size_t param_4)

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
  uVar3 = FUN_00407410(param_1,param_2,param_3,param_4);
  return uVar3;
}


/* WARNING: Removing unreachable block (ram,0x00407623) */
/* WARNING: Removing unreachable block (ram,0x00407628) */

void FUN_004075f0(void)

{
  __DT_INIT();
  return;
}


void FUN_00407650(void)

{
  return;
}


void FUN_00407660(undefined8 param_1)

{
  __cxa_atexit(param_1,0,DAT_0060c208);
  return;
}


undefined8 FUN_00407678(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code **ppcVar1;
  
  for (ppcVar1 = (code **)&DAT_0060be30; *ppcVar1 != (code *)0xffffffffffffffff;
      ppcVar1 = ppcVar1 + -1) {
    (**ppcVar1)();
  }
  return param_3;
}


void __DT_FINI(void)

{
  FUN_00402421();
  return;
}

