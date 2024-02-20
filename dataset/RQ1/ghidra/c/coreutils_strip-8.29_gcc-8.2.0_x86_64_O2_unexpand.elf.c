
void switchD_00402e40::caseD_b(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401805(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_0040180a(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_0040180f(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401814(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void switchD_0040491a::caseD_0(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Could not reconcile some variable overlaps */

undefined4 FUN_00401820(int param_1,undefined8 *param_2)

{
  char *pcVar1;
  byte *pbVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  _IO_FILE *p_Var7;
  size_t sVar8;
  ushort **ppuVar9;
  ulong uVar10;
  undefined8 uVar11;
  int *piVar12;
  byte bVar13;
  ulong __n;
  undefined8 *puVar15;
  uint uVar16;
  ushort uVar17;
  ulong unaff_R15;
  bool bVar18;
  undefined auVar19 [16];
  undefined8 uStack_58;
  undefined *local_50;
  char local_41;
  long local_40 [2];
  ushort uVar14;
  
  uVar17 = 1;
  bVar3 = false;
  bVar4 = false;
  FUN_00402c50(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils",
                 "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale"
                );
  textdomain("coreutils");
  FUN_004066f0(FUN_00402b70);
LAB_00401880:
  iVar5 = FUN_00405f50(param_1,param_2,",0123456789at:",&PTR_DAT_00406c00,0);
  if (iVar5 == -1) {
    if (bVar3) {
      DAT_0060a2bc = 0;
    }
    if (bVar4) {
      FUN_00402240(unaff_R15);
    }
    FUN_004026b0();
    puVar15 = (undefined8 *)0x0;
    if (DAT_0060a278._4_4_ < param_1) {
      puVar15 = param_2 + DAT_0060a278._4_4_;
    }
    FUN_004028b0(puVar15);
    p_Var7 = (_IO_FILE *)FUN_004028d0(0);
    if (p_Var7 == (_IO_FILE *)0x0) {
LAB_00401c5c:
      FUN_00402ab0();
      return DAT_0060a2b8;
    }
    local_50 = (undefined *)FUN_00404e30(DAT_0060a4a0);
    do {
      __n = 0;
      uStack_58._0_7_ = CONCAT16(1,(undefined6)uStack_58);
      uVar6 = 0;
      uVar14 = 1;
      local_40[0] = 0;
      uStack_58 = (ulong)(uint7)uStack_58;
LAB_00401ad2:
      do {
        pbVar2 = (byte *)p_Var7->_IO_read_ptr;
        if (pbVar2 < p_Var7->_IO_read_end) {
          p_Var7->_IO_read_ptr = (char *)(pbVar2 + 1);
          uVar16 = (uint)*pbVar2;
LAB_00401aec:
          if ((char)uVar14 == '\0') goto LAB_00401aa8;
          ppuVar9 = __ctype_b_loc();
          uVar17 = (*ppuVar9)[(int)uVar16] & 1;
          if (((*ppuVar9)[(int)uVar16] & 1) == 0) {
            if (uVar16 == 8) {
              uStack_58._0_7_ = CONCAT16((char)uVar17,(undefined6)uStack_58);
              uStack_58 = uStack_58 & 0xff00000000000000 | (ulong)(uint7)uStack_58;
              uVar6 = uVar6 - (uVar6 != 0);
              local_40[0] = local_40[0] - (ulong)(local_40[0] != 0);
              if (__n != 0) goto LAB_00401a53;
              uStack_58._6_1_ = (byte)((ulong)(uint7)uStack_58 >> 0x30);
              uVar14 = (ushort)(uStack_58._6_1_ | DAT_0060a2bc);
              goto LAB_00401aa8;
            }
            goto LAB_00401a3a;
          }
LAB_00401b0e:
          uVar10 = FUN_00402800(uVar6,local_40,&local_41);
          if (local_41 != '\0') goto LAB_00401c4b;
          if (uVar10 < uVar6) goto LAB_00401d3d;
          if (uVar16 == 9) {
            if (__n != 0) {
              *local_50 = 9;
            }
LAB_00401b63:
            __n = (ulong)uStack_58._7_1_;
            uVar14 = 1;
            uVar16 = 9;
            uVar6 = uVar10;
            goto LAB_00401a49;
          }
          uVar6 = uVar6 + 1;
          bVar13 = uStack_58._6_1_ ^ 1 | uVar10 != uVar6;
          uVar14 = (ushort)bVar13;
          if (bVar13 == 0) {
            *local_50 = 9;
            uVar10 = uVar6;
            goto LAB_00401b63;
          }
          uStack_58._0_7_ = CONCAT16(bVar13,(undefined6)uStack_58);
          if (uVar10 == uVar6) {
            uStack_58._7_1_ = bVar13;
          }
          local_50[__n] = (char)uVar16;
          __n = __n + 1;
        }
        else {
          uVar16 = __uflow(p_Var7);
          if (-1 < (int)uVar16) goto LAB_00401aec;
          p_Var7 = (_IO_FILE *)FUN_004028d0(p_Var7);
          if (p_Var7 != (_IO_FILE *)0x0) goto LAB_00401ad2;
          if ((char)uVar14 == '\0') {
LAB_00401c52:
            free(local_50);
            goto LAB_00401c5c;
          }
          ppuVar9 = __ctype_b_loc();
          uVar17 = (*ppuVar9)[(int)uVar16] & 1;
          if (((*ppuVar9)[(int)uVar16] & 1) != 0) goto LAB_00401b0e;
LAB_00401a3a:
          uVar6 = uVar6 + 1;
          if (uVar6 == 0) goto LAB_00401d1b;
          uVar14 = 1;
LAB_00401a49:
          while( true ) {
            uStack_58._0_7_ = CONCAT16((char)uVar17,(undefined6)uStack_58);
            uStack_58 = uStack_58 & 0xff00000000000000 | (ulong)(uint7)uStack_58;
            if (__n != 0) {
LAB_00401a53:
              if ((1 < __n) && (uStack_58._7_1_ != '\0')) {
                *local_50 = 9;
              }
              sVar8 = fwrite_unlocked(local_50,1,__n,stdout);
              if (sVar8 != __n) goto LAB_00401cf1;
              uStack_58 = uStack_58 & 0xffffffffffffff;
            }
            uVar14 = uVar14 & (DAT_0060a2bc | uVar17);
            if ((int)uVar16 < 0) goto LAB_00401c52;
            __n = 0;
LAB_00401aa8:
            pcVar1 = stdout->_IO_write_ptr;
            if (pcVar1 < stdout->_IO_write_end) break;
            iVar5 = __overflow(stdout,uVar16 & 0xff);
            if (-1 < iVar5) goto LAB_00401ac8;
            uVar11 = dcgettext(0,"write error",5);
            piVar12 = __errno_location();
            error(1,*piVar12,uVar11);
LAB_00401c4b:
            uVar14 = 0;
          }
          stdout->_IO_write_ptr = pcVar1 + 1;
          *pcVar1 = (char)uVar16;
        }
LAB_00401ac8:
      } while (uVar16 != 10);
    } while( true );
  }
  if (iVar5 == 0x3f) {
LAB_00401cc5:
    FUN_00401e40(1);
LAB_00401ccf:
    uVar11 = dcgettext(0,"tab stop value is too large",5);
    error(1,0,uVar11);
LAB_00401cf1:
    uVar11 = dcgettext(0,"write error",5);
    piVar12 = __errno_location();
    error(1,*piVar12,uVar11);
LAB_00401d1b:
    uVar11 = dcgettext(0,"input line is too long",5);
    error(1,0,uVar11);
LAB_00401d3d:
    uVar11 = dcgettext(0,"input line is too long",5);
    auVar19 = error(1,0,uVar11);
    uVar6 = uStack_58;
    uStack_58 = SUB168(auVar19,0);
    (*(code *)PTR___libc_start_main_00609ff0)
              (FUN_00401820,uVar6,&local_50,FUN_00406680,FUN_004066e0,SUB168(auVar19 >> 0x40,0),
               &uStack_58);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  if (iVar5 < 0x40) {
    if (iVar5 == -0x82) {
      FUN_00401e40(0);
      goto LAB_00401cc5;
    }
    if (iVar5 == 0x2c) {
      if (bVar4) {
        bVar4 = false;
        FUN_00402240(unaff_R15);
      }
      goto LAB_00401880;
    }
    if (iVar5 == -0x83) {
      FUN_00404cf0(stdout,"unexpand","GNU coreutils",PTR_DAT_0060a200,"David MacKenzie",0);
                    /* WARNING: Subroutine does not return */
      exit(0);
    }
  }
  else {
    if (iVar5 == 0x74) {
      DAT_0060a2bc = 1;
      FUN_00402360(DAT_0060a4a8);
      goto LAB_00401880;
    }
    if (iVar5 == 0x80) {
      bVar3 = true;
      goto LAB_00401880;
    }
    if (iVar5 == 0x61) {
      DAT_0060a2bc = 1;
      goto LAB_00401880;
    }
  }
  if (bVar4) {
    if ((0x1999999999999999 < unaff_R15) ||
       (uVar6 = (long)(iVar5 + -0x30) + unaff_R15 * 10, bVar18 = uVar6 < unaff_R15,
       unaff_R15 = uVar6, bVar18)) goto LAB_00401ccf;
  }
  else {
    bVar4 = true;
    unaff_R15 = (long)(iVar5 + -0x30);
  }
  goto LAB_00401880;
}


void FUN_00401d60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_retaddr;
  undefined auStack_8 [8];
  
  (*(code *)PTR___libc_start_main_00609ff0)
            (FUN_00401820,unaff_retaddr,&stack0x00000008,FUN_00406680,FUN_004066e0,param_3,auStack_8
            );
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* WARNING: Removing unreachable block (ram,0x00401d98) */
/* WARNING: Removing unreachable block (ram,0x00401da2) */

void FUN_00401d8b(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00401dd9) */

void FUN_00401daa(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00401e16) */

void FUN_00401de1(void)

{
  if (DAT_0060a2a8 != '\0') {
    return;
  }
  FUN_00401d8b();
  DAT_0060a2a8 = 1;
  return;
}


/* WARNING: Removing unreachable block (ram,0x00401dd9) */

void thunk_FUN_00401daa(void)

{
  return;
}


void FUN_00401e40(int param_1)

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
  
  uVar7 = DAT_0060a318;
  bVar14 = 0;
  if (param_1 != 0) {
    uVar3 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(stderr,1,uVar3,uVar7);
    goto LAB_00401e7f;
  }
  uVar3 = dcgettext(0,"Usage: %s [OPTION]... [FILE]...\n",5);
  __printf_chk(1,uVar3,uVar7);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"Convert blanks in each FILE to tabs, writing to standard output.\n",
                             5);
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
                             "  -a, --all        convert all blanks, instead of just initial blanks\n      --first-only  convert only leading sequences of blanks (overrides -a)\n  -t, --tabs=N     have tabs N characters apart instead of 8 (enables -a)\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  FUN_00402b00();
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"      --help     display this help and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"      --version  output version information and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  local_88 = &DAT_0040674d;
  local_80 = "test invocation";
  local_78[0] = (byte *)0x4067c7;
  local_78[1] = (byte *)0x40675f;
  local_78[2] = (byte *)0x406775;
  local_78[3] = (byte *)0x40677f;
  local_78[4] = (byte *)0x40678e;
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
    lVar9 = 9;
    pbVar10 = (byte *)"unexpand";
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
        pcVar4 = "unexpand";
        goto LAB_00402173;
      }
    }
    pcVar4 = "unexpand";
    uVar7 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    pcVar8 = " invocation";
    __printf_chk(1,uVar7,"https://www.gnu.org/software/coreutils/","unexpand");
  }
  else {
    uVar7 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar7,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar8 = setlocale(5,(char *)0x0);
    if (pcVar8 != (char *)0x0) {
      iVar2 = strncmp(pcVar8,"en_",3);
      if (iVar2 != 0) {
LAB_00402173:
        uVar7 = dcgettext(0,"Report %s translation bugs to <https://translationproject.org/team/>\n"
                          ,5);
        __printf_chk(1,uVar7,"unexpand");
      }
    }
    pcVar8 = " invocation";
    uVar7 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    __printf_chk(1,uVar7,"https://www.gnu.org/software/coreutils/","unexpand");
    if (pcVar4 != "unexpand") {
      pcVar8 = "";
    }
  }
  uVar7 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(1,uVar7,pcVar4,pcVar8);
LAB_00401e7f:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}


undefined8 FUN_004021a0(undefined8 param_1)

{
  undefined8 uVar1;
  
  if (DAT_0060a2f8 == 0) {
    DAT_0060a2f8 = param_1;
    return 1;
  }
  uVar1 = dcgettext(0,"\'/\' specifier only allowed with the last value",5);
  error(0,0,uVar1);
  DAT_0060a2f8 = param_1;
  return 0;
}


undefined8 FUN_004021f0(undefined8 param_1)

{
  undefined8 uVar1;
  
  if (DAT_0060a2f0 == 0) {
    DAT_0060a2f0 = param_1;
    return 1;
  }
  uVar1 = dcgettext(0,"\'+\' specifier only allowed with the last value",5);
  error(0,0,uVar1);
  DAT_0060a2f0 = param_1;
  return 0;
}


void FUN_00402240(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = param_1;
  if (DAT_0060a2d8 == 0) {
LAB_0040229b:
    if (DAT_0060a2d8 != DAT_0060a2e0) goto LAB_004022a0;
  }
  else {
    uVar1 = *(ulong *)(DAT_0060a2e8 + -8 + DAT_0060a2d8 * 8);
    if (uVar1 <= param_1) {
      uVar1 = param_1 - uVar1;
      goto LAB_0040229b;
    }
    if (DAT_0060a2d8 != DAT_0060a2e0) {
      *(ulong *)(DAT_0060a2e8 + DAT_0060a2d8 * 8) = param_1;
      DAT_0060a2d8 = DAT_0060a2d8 + 1;
      return;
    }
    uVar1 = 0;
  }
  if (DAT_0060a2e8 == 0) {
    if (DAT_0060a2e0 == 0) {
      lVar2 = 0x80;
      DAT_0060a2e0 = 0x10;
    }
    else {
      lVar2 = DAT_0060a2e0 << 3;
      if ((lVar2 < 0) || (DAT_0060a2e0 >> 0x3d != 0)) goto LAB_0040233f;
    }
  }
  else {
    if (0xaaaaaaaaaaaaaa9 < DAT_0060a2e0) {
LAB_0040233f:
                    /* WARNING: Subroutine does not return */
      FUN_00405080();
    }
    DAT_0060a2e0 = DAT_0060a2e0 + 1 + (DAT_0060a2e0 >> 1);
    lVar2 = DAT_0060a2e0 * 8;
  }
  DAT_0060a2e8 = FUN_00404e90(DAT_0060a2e8,lVar2);
LAB_004022a0:
  lVar2 = DAT_0060a2d8 + 1;
  *(ulong *)(DAT_0060a2e8 + DAT_0060a2d8 * 8) = param_1;
  DAT_0060a2d8 = lVar2;
  if (uVar1 <= DAT_0060a4a0) {
    return;
  }
  DAT_0060a4a0 = uVar1;
  return;
}


void FUN_00402360(byte *param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  ushort **ppuVar5;
  size_t sVar6;
  void *__ptr;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  char cVar10;
  ulong uVar11;
  ulong uVar12;
  byte bVar13;
  byte *local_48;
  
  bVar13 = *param_1;
  if (bVar13 != 0) {
    cVar3 = '\x01';
    cVar2 = '\0';
    local_48 = (byte *)0x0;
    cVar4 = '\0';
    uVar12 = 0;
    cVar1 = '\0';
LAB_004023fe:
    do {
      cVar10 = cVar1;
      uVar11 = uVar12;
      if ((bVar13 == 0x2c) || (ppuVar5 = __ctype_b_loc(), (*(byte *)(*ppuVar5 + bVar13) & 1) != 0))
      {
        if (cVar10 != '\0') {
          if (cVar4 == '\0') {
            if (cVar2 != '\0') {
              cVar2 = FUN_004021f0();
              if (cVar2 == '\0') goto LAB_0040269d;
              cVar10 = '\0';
              bVar13 = param_1[1];
              param_1 = param_1 + 1;
              cVar1 = '\0';
              if (bVar13 == 0) break;
              goto LAB_004023fe;
            }
            FUN_00402240();
            cVar10 = '\0';
            cVar4 = cVar2;
          }
          else {
            cVar4 = FUN_004021a0(uVar12);
            if (cVar4 == '\0') goto LAB_0040269d;
            cVar10 = '\0';
          }
        }
      }
      else if (bVar13 == 0x2f) {
        if (cVar10 == '\0') {
          cVar2 = '\0';
          cVar4 = '\x01';
        }
        else {
          cVar2 = '\0';
          uVar7 = FUN_00404870(param_1);
          uVar8 = dcgettext(0,"\'/\' specifier not at start of number: %s",5);
          error(0,0,uVar8,uVar7);
          cVar3 = '\0';
          cVar4 = cVar10;
        }
      }
      else if (bVar13 == 0x2b) {
        if (cVar10 == '\0') {
          cVar4 = '\0';
          cVar2 = '\x01';
        }
        else {
          uVar7 = FUN_00404870(param_1);
          uVar8 = dcgettext(0,"\'+\' specifier not at start of number: %s",5);
          error(0,0,uVar8,uVar7);
          cVar3 = '\0';
          cVar4 = '\0';
          cVar2 = cVar10;
        }
      }
      else {
        uVar9 = (int)(char)bVar13 - 0x30;
        if (9 < uVar9) {
          uVar7 = FUN_00404870(param_1);
          uVar8 = dcgettext(0,"tab size contains invalid character(s): %s",5);
          error(0,0,uVar8,uVar7);
          goto LAB_0040269d;
        }
        if (cVar10 == '\0') {
          cVar10 = '\x01';
          uVar11 = (long)(int)uVar9;
          local_48 = param_1;
        }
        else if ((0x1999999999999999 < uVar12) ||
                (uVar11 = (long)(int)uVar9 + uVar12 * 10, uVar11 < uVar12)) {
          sVar6 = strspn((char *)local_48,"0123456789");
          __ptr = (void *)FUN_004050c0(local_48,sVar6);
          uVar7 = FUN_00404870(__ptr);
          uVar8 = dcgettext(0,"tab stop is too large %s",5);
          error(0,0,uVar8,uVar7);
          free(__ptr);
          cVar3 = '\0';
          param_1 = local_48 + (sVar6 - 1);
          uVar11 = uVar12;
        }
      }
      bVar13 = param_1[1];
      param_1 = param_1 + 1;
      uVar12 = uVar11;
      cVar1 = cVar10;
    } while (bVar13 != 0);
    if (cVar10 != '\0') {
      if (cVar3 == '\0') goto LAB_0040269d;
      if (cVar4 != '\0') {
        cVar3 = FUN_004021a0(uVar11);
        if (cVar3 != '\0') {
          return;
        }
        goto LAB_0040269d;
      }
      if (cVar2 == '\0') {
        FUN_00402240();
        return;
      }
      cVar3 = FUN_004021f0();
    }
    if (cVar3 == '\0') {
LAB_0040269d:
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
  }
  return;
}


void FUN_004026b0(void)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong extraout_RDX;
  ulong uVar4;
  ulong uVar5;
  bool bVar6;
  
  if (DAT_0060a2d8 == 0) goto LAB_00402768;
  uVar4 = *DAT_0060a2e8;
  if (uVar4 != 0) {
    lVar2 = 0;
    uVar5 = uVar4;
    do {
      lVar2 = lVar2 + 1;
      if (DAT_0060a2d8 == lVar2) {
        if ((DAT_0060a2f0 != 0) && (DAT_0060a2f8 != 0)) goto LAB_00402742;
        if ((DAT_0060a2d8 != 1) || (DAT_0060a300 = uVar4, (DAT_0060a2f0 | DAT_0060a2f8) != 0)) {
          DAT_0060a300 = 0;
        }
        return;
      }
      uVar1 = DAT_0060a2e8[lVar2];
      if (uVar1 == 0) goto LAB_004027c0;
      bVar6 = uVar5 < uVar1;
      uVar5 = uVar1;
    } while (bVar6);
    uVar3 = dcgettext(0,"tab sizes must be ascending",5);
    error(1,0,uVar3);
  }
LAB_004027c0:
  uVar3 = dcgettext(0,"tab size cannot be 0",5);
  error(1,0,uVar3);
  uVar4 = extraout_RDX;
  do {
    if (DAT_0060a2f8 == 0) {
      DAT_0060a4a0 = uVar4;
      DAT_0060a300 = uVar4;
      return;
    }
LAB_00402742:
    uVar3 = dcgettext(0,"\'/\' specifier is mutually exclusive with \'+\'",5);
    error(1,0,uVar3);
LAB_00402768:
    uVar4 = DAT_0060a2f0;
  } while (DAT_0060a2f0 != 0);
  if (DAT_0060a2f8 != 0) {
    DAT_0060a300 = DAT_0060a2f8;
    DAT_0060a4a0 = DAT_0060a2f8;
    return;
  }
  DAT_0060a300 = 8;
  DAT_0060a4a0 = 8;
  return;
}


ulong FUN_00402800(ulong param_1,ulong *param_2,undefined *param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = DAT_0060a300;
  *param_3 = 0;
  lVar2 = DAT_0060a2e8;
  uVar1 = DAT_0060a2d8;
  if (uVar3 == 0) {
    uVar3 = *param_2;
    if (uVar3 < DAT_0060a2d8) {
      uVar4 = *(ulong *)(DAT_0060a2e8 + uVar3 * 8);
      if (uVar4 <= param_1) {
        uVar3 = uVar3 + 1;
        do {
          *param_2 = uVar3;
          if (uVar1 == uVar3) goto LAB_0040284e;
          uVar3 = uVar3 + 1;
          uVar4 = *(ulong *)(lVar2 + -8 + uVar3 * 8);
        } while (uVar4 <= param_1);
      }
    }
    else {
LAB_0040284e:
      uVar4 = DAT_0060a2f0;
      uVar3 = DAT_0060a2f8;
      if (DAT_0060a2f8 != 0) goto LAB_00402870;
      if (DAT_0060a2f0 == 0) {
        *param_3 = 1;
      }
      else {
        uVar4 = (DAT_0060a2f0 + param_1) -
                (param_1 - *(long *)(DAT_0060a2e8 + -8 + uVar1 * 8)) % DAT_0060a2f0;
      }
    }
    return uVar4;
  }
LAB_00402870:
  return (uVar3 + param_1) - param_1 % uVar3;
}


void FUN_004028b0(undefined **param_1)

{
  DAT_0060a2c8 = 0;
  if (param_1 == (undefined **)0x0) {
    param_1 = &PTR_DAT_0060a1f0;
  }
  DAT_0060a2d0 = param_1;
  return;
}


FILE * FUN_004028d0(FILE *param_1)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  FILE *pFVar4;
  long lVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined uVar9;
  bool bVar10;
  undefined uVar11;
  bool bVar12;
  byte bVar13;
  
  bVar13 = 0;
  if (param_1 != (FILE *)0x0) {
    if (DAT_0060a2c0 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("prev_file","src/expand-common.c",0x155,"next_file");
    }
    uVar9 = 0;
    uVar11 = (*(byte *)&param_1->_flags & 0x20) == 0;
    if (!(bool)uVar11) {
      uVar2 = FUN_004046f0(0,3,DAT_0060a2c0);
      piVar3 = __errno_location();
      uVar9 = 0;
      uVar11 = 1;
      error(0,*piVar3,"%s",uVar2);
      DAT_0060a2b8 = 1;
    }
    lVar5 = 2;
    pbVar6 = DAT_0060a2c0;
    pbVar7 = &DAT_0040824a;
    do {
      if (lVar5 == 0) break;
      lVar5 = lVar5 + -1;
      uVar9 = *pbVar6 < *pbVar7;
      uVar11 = *pbVar6 == *pbVar7;
      pbVar6 = pbVar6 + (ulong)bVar13 * -2 + 1;
      pbVar7 = pbVar7 + (ulong)bVar13 * -2 + 1;
    } while ((bool)uVar11);
    if ((!(bool)uVar9 && !(bool)uVar11) == (bool)uVar9) {
      clearerr_unlocked(param_1);
    }
    else {
      iVar1 = FUN_004050e0();
      if (iVar1 != 0) {
        uVar2 = FUN_004046f0(0,3,DAT_0060a2c0);
        piVar3 = __errno_location();
        error(0,*piVar3,"%s",uVar2);
        DAT_0060a2b8 = 1;
      }
    }
  }
  pbVar6 = *DAT_0060a2d0;
  do {
    bVar12 = pbVar6 == (byte *)0x0;
    DAT_0060a2d0 = DAT_0060a2d0 + 1;
    if (bVar12) {
      return (FILE *)0x0;
    }
    bVar10 = false;
    lVar5 = 2;
    pbVar7 = pbVar6;
    pbVar8 = &DAT_0040824a;
    do {
      if (lVar5 == 0) break;
      lVar5 = lVar5 + -1;
      bVar10 = *pbVar7 < *pbVar8;
      bVar12 = *pbVar7 == *pbVar8;
      pbVar7 = pbVar7 + (ulong)bVar13 * -2 + 1;
      pbVar8 = pbVar8 + (ulong)bVar13 * -2 + 1;
    } while (bVar12);
    if ((!bVar10 && !bVar12) == bVar10) {
      DAT_0060a2c8 = 1;
      pFVar4 = stdin;
    }
    else {
      pFVar4 = fopen((char *)pbVar6,"r");
    }
    if (pFVar4 != (FILE *)0x0) {
      DAT_0060a2c0 = pbVar6;
      FUN_00402c20(pFVar4,2);
      return pFVar4;
    }
    uVar2 = FUN_004046f0(0,3,pbVar6);
    piVar3 = __errno_location();
    error(0,*piVar3,"%s",uVar2);
    DAT_0060a2b8 = 1;
    pbVar6 = *DAT_0060a2d0;
  } while( true );
}


void FUN_00402ab0(void)

{
  FILE *pFVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  
  if (DAT_0060a2c8 == '\0') {
    return;
  }
  iVar2 = FUN_004050e0(stdin);
  if (iVar2 == 0) {
    return;
  }
  piVar3 = __errno_location();
  error(1,*piVar3,&DAT_0040824a);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"  -t, --tabs=LIST  use comma separated list of tab positions\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "                     The last specified position can be prefixed with \'/\'\n                     to specify a tab size to use after the last\n                     explicitly specified tab stop.  Also a prefix of \'+\'\n                     can be used to align remaining tab stops relative to\n                     the last specified tab stop instead of the first column\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  return;
}


void FUN_00402b00(void)

{
  char *pcVar1;
  FILE *pFVar2;
  
  pFVar2 = stdout;
  pcVar1 = (char *)dcgettext(0,"  -t, --tabs=LIST  use comma separated list of tab positions\n",5);
  fputs_unlocked(pcVar1,pFVar2);
  pFVar2 = stdout;
  pcVar1 = (char *)dcgettext(0,
                             "                     The last specified position can be prefixed with \'/\'\n                     to specify a tab size to use after the last\n                     explicitly specified tab stop.  Also a prefix of \'+\'\n                     can be used to align remaining tab stops relative to\n                     the last specified tab stop instead of the first column\n"
                             ,5);
  fputs_unlocked(pcVar1,pFVar2);
  return;
}


void FUN_00402b50(undefined8 param_1)

{
  DAT_0060a310 = param_1;
  return;
}


void FUN_00402b60(undefined param_1)

{
  DAT_0060a308 = param_1;
  return;
}


void FUN_00402b70(void)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  iVar1 = FUN_00406050(stdout);
  if (iVar1 != 0) {
    piVar2 = __errno_location();
    if ((DAT_0060a308 == '\0') || (*piVar2 != 0x20)) {
      uVar3 = dcgettext(0,"write error",5);
      if (DAT_0060a310 == 0) {
        error(0,*piVar2,"%s",uVar3);
      }
      else {
        uVar4 = FUN_004046c0();
        error(0,*piVar2,"%s: %s",uVar4,uVar3);
      }
      goto LAB_00402bee;
    }
  }
  iVar1 = FUN_00406050(stderr);
  if (iVar1 == 0) {
    return;
  }
LAB_00402bee:
                    /* WARNING: Subroutine does not return */
  _exit(DAT_0060a208);
}


void FUN_00402c20(FILE *param_1,int param_2)

{
  int __fd;
  
  if (param_1 != (FILE *)0x0) {
    __fd = fileno(param_1);
    posix_fadvise(__fd,0,0,param_2);
    return;
  }
  return;
}


void FUN_00402c50(byte *param_1)

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
        pbVar6 = &DAT_00407058;
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
  DAT_0060a318 = param_1;
  program_invocation_name = param_1;
  return;
}


char * FUN_00402cf0(char *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  byte *pbVar3;
  
  pcVar2 = (char *)dcgettext(0,param_1,5);
  if (param_1 == pcVar2) {
    pbVar3 = (byte *)FUN_00406110();
    if ((*pbVar3 & 0xdf) == 0x55) {
      if (((((pbVar3[1] & 0xdf) != 0x54) || ((pbVar3[2] & 0xdf) != 0x46)) || (pbVar3[3] != 0x2d)) ||
         ((pbVar3[4] != 0x38 || (pbVar3[5] != 0)))) {
LAB_00402dc8:
        pcVar2 = "\"";
        if (param_2 != 9) {
          pcVar2 = "\'";
        }
        return pcVar2;
      }
      cVar1 = *pcVar2;
      pcVar2 = &DAT_00407069;
      if (cVar1 != '`') {
        pcVar2 = &DAT_0040705e;
      }
    }
    else {
      if (((((*pbVar3 & 0xdf) != 0x47) || ((pbVar3[1] & 0xdf) != 0x42)) || (pbVar3[2] != 0x31)) ||
         (((pbVar3[3] != 0x38 || (pbVar3[4] != 0x30)) ||
          ((pbVar3[5] != 0x33 || ((pbVar3[6] != 0x30 || (pbVar3[7] != 0)))))))) goto LAB_00402dc8;
      cVar1 = *pcVar2;
      pcVar2 = &DAT_00407065;
      if (cVar1 != '`') {
        pcVar2 = &DAT_00407062;
      }
    }
  }
  return pcVar2;
}


ulong FUN_00402df0(undefined *param_1,ulong param_2,char *param_3,ulong param_4,int param_5,
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
LAB_00403a41:
    if (param_2 != 0) {
      bVar3 = false;
      local_5b = false;
      bVar2 = true;
      local_70 = 0;
      goto LAB_00403676;
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
      goto LAB_00403a41;
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
      param_8 = (char *)FUN_00402cf0(&DAT_0040706d,param_5);
      param_9 = (char *)FUN_00402cf0(&DAT_00408237);
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
LAB_00402e88:
  uVar22 = 0;
  bVar5 = local_5b;
LAB_00402e98:
  bVar23 = param_4 != uVar22;
  if (param_4 == 0xffffffffffffffff) {
    bVar23 = param_3[uVar22] != '\0';
  }
  bVar26 = bVar6;
  if (!bVar23) goto LAB_00403618;
  bVar20 = (bool)(param_5 != 2 & bVar6);
  __s1 = (byte *)(param_3 + uVar22);
  uVar16 = uVar15;
  bVar4 = bVar3;
  if (bVar20) {
    if (local_a0 == 0) {
LAB_00403590:
      uVar19 = (ulong)*__s1;
      switch(uVar19) {
      case 0:
        goto switchD_004035a2_caseD_0;
      default:
        bVar20 = false;
        goto switchD_0040340e_caseD_1;
      case 7:
        bVar17 = 0x61;
        goto LAB_004032a5;
      case 8:
        bVar17 = 0x62;
        break;
      case 9:
switchD_004035a2_caseD_9:
        bVar17 = 0x74;
        break;
      case 10:
switchD_004035a2_caseD_a:
        bVar17 = 0x6e;
        break;
      case 0xb:
switchD_004035a2_caseD_b:
        bVar17 = 0x76;
        goto LAB_004032a5;
      case 0xc:
switchD_004035a2_caseD_c:
        bVar17 = 0x66;
LAB_004032a5:
        if (local_5c) {
          bVar25 = false;
          goto LAB_004031f8;
        }
LAB_004032b0:
        bVar23 = false;
        goto LAB_0040306b;
      case 0xd:
        bVar20 = false;
switchD_00402f88_caseD_d:
        bVar25 = param_5 == 2;
        uVar19 = 0xd;
        bVar13 = 0x72;
        goto LAB_004031c0;
      case 0x20:
        bVar25 = false;
LAB_004035ea:
        uVar19 = 0x20;
        goto LAB_004035b2;
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
switchD_00402f88_caseD_21:
        bVar25 = false;
        goto LAB_004031cb;
      case 0x23:
      case 0x7e:
        bVar26 = false;
LAB_004035ca:
        if (uVar22 == 0) {
          bVar25 = false;
          bVar23 = bVar20;
          bVar20 = bVar26;
          goto LAB_00402fd8;
        }
        bVar23 = false;
        goto LAB_00402fef;
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
LAB_004035b2:
        bVar24 = false;
        bVar23 = bVar20;
        bVar20 = bVar25;
        goto LAB_00402ff1;
      case 0x27:
        bVar20 = false;
        goto switchD_0040340e_caseD_27;
      case 0x3f:
        bVar20 = false;
        goto switchD_0040340e_caseD_3f;
      case 0x5c:
        bVar20 = false;
        goto switchD_00402f88_caseD_5c;
      case 0x7b:
      case 0x7d:
        bVar20 = false;
        goto switchD_0040340e_caseD_7b;
      }
      bVar25 = false;
      bVar23 = false;
      goto joined_r0x004031e7;
    }
    if ((param_4 == 0xffffffffffffffff) && (1 < local_a0)) {
      param_4 = strlen(param_3);
    }
    if ((param_4 < uVar22 + local_a0) || (iVar7 = memcmp(__s1,local_78,local_a0), iVar7 != 0))
    goto LAB_00403590;
    if (!local_5c) {
      uVar19 = (ulong)*__s1;
      bVar25 = bVar20;
      switch(uVar19) {
      case 0:
        goto switchD_00402f88_caseD_0;
      default:
        goto switchD_0040340e_caseD_1;
      case 7:
        bVar17 = 0x61;
        goto LAB_004032b0;
      case 8:
        bVar25 = false;
        bVar23 = false;
        bVar17 = 0x62;
        break;
      case 9:
        goto switchD_004035a2_caseD_9;
      case 10:
        goto switchD_004035a2_caseD_a;
      case 0xb:
        goto switchD_004035a2_caseD_b;
      case 0xc:
        goto switchD_004035a2_caseD_c;
      case 0xd:
        goto switchD_00402f88_caseD_d;
      case 0x20:
        goto LAB_004035ea;
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
        goto switchD_00402f88_caseD_21;
      case 0x23:
      case 0x7e:
        bVar26 = bVar20;
        goto LAB_004035ca;
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
        goto LAB_004035b2;
      case 0x27:
        goto switchD_0040340e_caseD_27;
      case 0x3f:
        goto switchD_0040340e_caseD_3f;
      case 0x5c:
        goto switchD_00402f88_caseD_5c;
      case 0x7b:
      case 0x7d:
        goto switchD_0040340e_caseD_7b;
      }
      goto LAB_00403032;
    }
    goto LAB_0040320a;
  }
  uVar19 = (ulong)*__s1;
  switch(uVar19) {
  case 0:
    if (bVar6) {
switchD_004035a2_caseD_0:
      if (!local_5c) {
        bVar20 = false;
switchD_00402f88_caseD_0:
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
            goto LAB_004030e8;
          }
LAB_0040332a:
          param_1[uVar16] = 0x5c;
          uVar15 = uVar16;
        }
        else if (uVar15 < uVar9) goto LAB_0040332a;
        uVar16 = uVar15 + 1;
        bVar24 = bVar23;
        if (param_5 == 2) {
          bVar17 = 0x30;
          bVar23 = false;
          bVar4 = bVar3;
          goto LAB_004030e8;
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
LAB_00403369:
        bVar17 = (byte)uVar19;
        bVar23 = false;
        uVar15 = uVar16;
        bVar4 = bVar3;
        if ((bool)(bVar6 ^ 1U | bVar26)) goto LAB_004030e8;
        goto LAB_00402ff1;
      }
      bVar26 = param_5 == 2;
      goto LAB_004031fc;
    }
    if ((param_6 & 1) == 0) {
      bVar25 = param_5 == 2;
      uVar19 = 0;
      bVar23 = false;
      bVar20 = false;
      goto LAB_00402fd8;
    }
    uVar22 = uVar22 + 1;
    goto LAB_00402e98;
  default:
switchD_0040340e_caseD_1:
    bVar25 = bVar6;
    if (sVar8 != 1) {
      local_40[0] = (mbstate_t)0x0;
      if (param_4 == 0xffffffffffffffff) {
        param_4 = strlen(param_3);
      }
      uVar21 = 0;
      do {
        uVar1 = uVar22 + uVar21;
        lVar11 = FUN_00405fd0(&local_44,param_3 + uVar1,param_4 - uVar1,local_40);
        if (lVar11 == 0) break;
        if (lVar11 == -1) {
          bVar23 = false;
          goto LAB_00403d1a;
        }
        if (lVar11 == -2) {
          if ((param_4 <= uVar1) || (param_3[uVar1] == '\0')) goto LAB_00403e57;
          goto LAB_00403e47;
        }
        if (((param_5 == 2) && (local_5c)) && (lVar11 != 1)) {
          pcVar12 = param_3 + uVar1 + 1;
          do {
            if (((byte)(*pcVar12 + 0xa5U) < 0x22) &&
               ((1L << (*pcVar12 + 0xa5U & 0x3f) & 0x20000002bU) != 0)) {
              param_5 = 2;
              goto LAB_004031fc;
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
      goto LAB_00403d1a;
    }
    ppuVar10 = __ctype_b_loc();
    uVar21 = 1;
    bVar25 = ((*ppuVar10)[uVar19] & 0x4000) == 0;
    bVar23 = !bVar25;
    bVar25 = (bool)(bVar25 & bVar6);
    goto LAB_004033e4;
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
    goto LAB_00403422;
  case 10:
    uVar19 = 10;
    bVar13 = 0x6e;
    goto LAB_00403422;
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
LAB_00403422:
    bVar25 = param_5 == 2;
    bVar20 = (bool)(local_5c & bVar25);
    if (bVar20) {
LAB_0040343a:
      param_5 = 2;
      goto LAB_004031fc;
    }
    break;
  case 0x20:
    uVar19 = 0x20;
    goto LAB_00402fc6;
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
LAB_00402fc6:
    bVar25 = param_5 == 2;
    if ((local_5c) && (bVar25)) goto LAB_0040343a;
    goto LAB_00402fd8;
  case 0x23:
  case 0x7e:
LAB_00402fbd:
    bVar25 = param_5 == 2;
    if (uVar22 == 0) goto LAB_00402fc6;
    goto LAB_004031cb;
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
    goto switchD_0040340e_caseD_25;
  case 0x27:
switchD_0040340e_caseD_27:
    bVar5 = bVar23;
    if (param_5 != 2) {
      bVar25 = false;
      uVar19 = 0x27;
      goto LAB_00402fd8;
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
      goto LAB_004030e8;
    }
    goto LAB_004031fc;
  case 0x3f:
switchD_0040340e_caseD_3f:
    if (param_5 == 2) {
      if (!local_5c) {
        bVar17 = 0x3f;
        bVar24 = false;
        bVar23 = false;
        goto LAB_004030e8;
      }
      goto LAB_004031fc;
    }
    if (param_5 != 5) {
      bVar25 = param_5 == 2;
      uVar19 = 0x3f;
      bVar23 = false;
      goto LAB_00402fd8;
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
        goto LAB_00403369;
      }
      goto LAB_0040320a;
    }
    bVar25 = false;
    uVar19 = 0x3f;
    bVar23 = false;
    goto LAB_00402fd8;
  case 0x5c:
    if (param_5 != 2) {
switchD_00402f88_caseD_5c:
      uVar19 = 0x5c;
      bVar17 = 0x5c;
      bVar13 = 0x5c;
      bVar25 = (bool)(bVar6 & local_5c & local_a0 != 0);
      if (!bVar25) break;
      uVar22 = uVar22 + 1;
      bVar23 = false;
      goto LAB_00403104;
    }
    if (local_5c) goto LAB_004031fc;
    uVar22 = uVar22 + 1;
    bVar23 = false;
    bVar17 = 0x5c;
    goto LAB_00403104;
  case 0x7b:
  case 0x7d:
switchD_0040340e_caseD_7b:
    bVar24 = param_4 != 1;
    if (param_4 == 0xffffffffffffffff) {
      bVar24 = param_3[1] != '\0';
    }
    bVar25 = param_5 == 2;
    if (!bVar24) goto LAB_00402fbd;
    goto LAB_004031cb;
  }
LAB_004031c0:
  if (!bVar6) {
LAB_004031cb:
    bVar23 = false;
    goto LAB_00402fd8;
  }
  bVar23 = false;
  bVar17 = bVar13;
  goto joined_r0x004031e7;
LAB_00403618:
  if ((uVar15 == 0) && ((bool)(local_5c & param_5 == 2))) {
    param_5 = 2;
LAB_004031fc:
    if (bVar26) {
      param_5 = 4;
    }
LAB_0040320a:
    uVar9 = FUN_00402df0(param_1,uVar9,param_3,param_4,param_5,param_6 & 0xfffffffd,0,param_8,
                         param_9);
    return uVar9;
  }
  bVar26 = (bool)(param_5 == 2 & (local_5c ^ 1U));
  bVar23 = (bool)(local_5c ^ 1U);
  if ((!bVar26) || (bVar23 = bVar26, !bVar5)) {
LAB_00403eed:
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
    uVar9 = FUN_00402df0(param_1,local_70,param_3,param_4,5,param_6,param_7,param_8,param_9);
    return uVar9;
  }
  local_5b = uVar9 == 0 && local_70 != 0;
  param_2 = local_70;
  bVar23 = bVar5;
  if (uVar9 != 0 || local_70 == 0) goto LAB_00403eed;
LAB_00403676:
  *param_1 = 0x27;
  param_5 = 2;
  uVar15 = 1;
  local_78 = "\'";
  local_a0 = 1;
  local_5c = false;
  uVar9 = param_2;
  goto LAB_00402e88;
  while (__s1[uVar21] != 0) {
LAB_00403e47:
    uVar21 = uVar21 + 1;
    if (param_4 <= uVar22 + uVar21) break;
  }
LAB_00403e57:
  bVar23 = false;
LAB_00403d1a:
  if (1 < uVar21) {
LAB_004038de:
    bVar26 = false;
    uVar21 = uVar21 + uVar22;
    uVar16 = uVar22;
    do {
      bVar17 = (byte)uVar19;
      if (bVar25) {
        bVar26 = param_5 == 2;
        if (local_5c) goto LAB_004031fc;
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
        if (uVar21 <= uVar22) goto LAB_0040307d;
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
        if (uVar21 <= uVar22) goto LAB_00403104;
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
LAB_004033e4:
  if (bVar25) {
    bVar23 = false;
    bVar25 = bVar6;
    goto LAB_004038de;
  }
switchD_0040340e_caseD_25:
  bVar25 = param_5 == 2;
LAB_00402fd8:
  bVar17 = (byte)uVar19;
  bVar24 = (bool)((bVar6 ^ 1U | bVar25) ^ 1 | local_5c);
  bVar26 = bVar20;
  if (bVar24) {
LAB_00402fef:
    bVar24 = false;
    bVar20 = bVar26;
LAB_00402ff1:
    bVar17 = (byte)uVar19;
    uVar16 = uVar15;
    bVar4 = bVar3;
    if ((param_7 == 0) || ((*(uint *)(param_7 + (uVar19 >> 5) * 4) >> (bVar17 & 0x1f) & 1) == 0))
    goto LAB_004030e8;
    bVar25 = param_5 == 2;
  }
  else {
LAB_004030e8:
    bVar25 = param_5 == 2;
    uVar15 = uVar16;
    bVar3 = bVar4;
    if (!bVar20) {
      uVar22 = uVar22 + 1;
      bVar3 = (bool)((bVar24 ^ 1U) & bVar4);
LAB_00403104:
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
      goto LAB_0040307d;
    }
  }
joined_r0x004031e7:
  if (local_5c) {
LAB_004031f8:
    bVar26 = (bool)(bVar6 & bVar25);
    goto LAB_004031fc;
  }
LAB_00403032:
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
LAB_0040306b:
  if (uVar15 < uVar9) {
    param_1[uVar15] = 0x5c;
  }
  uVar15 = uVar15 + 1;
  uVar22 = uVar22 + 1;
  bVar4 = bVar3;
LAB_0040307d:
  bVar3 = bVar4;
  if (uVar15 < uVar9) {
    param_1[uVar15] = bVar17;
  }
  uVar15 = uVar15 + 1;
  if (!bVar23) {
    bVar2 = false;
  }
  goto LAB_00402e98;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00404020(int param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

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
  puVar8 = (undefined4 *)PTR_DAT_0060a258;
  if (DAT_0060a270 <= param_1) {
    if (param_1 == 0x7fffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_00405080();
    }
    if (PTR_DAT_0060a258 == &DAT_0060a260) {
      puVar8 = (undefined4 *)FUN_00404e90(0);
      uVar6 = PTR_DAT_0060a268._4_4_;
      uVar5 = PTR_DAT_0060a268._0_4_;
      uVar3 = _UNK_0060a264;
      PTR_DAT_0060a258 = (undefined *)puVar8;
      *puVar8 = _DAT_0060a260;
      puVar8[1] = uVar3;
      puVar8[2] = uVar5;
      puVar8[3] = uVar6;
    }
    else {
      puVar8 = (undefined4 *)FUN_00404e90(PTR_DAT_0060a258);
      PTR_DAT_0060a258 = (undefined *)puVar8;
    }
    memset(puVar8 + (long)DAT_0060a270 * 4,0,(long)((param_1 + 1) - DAT_0060a270) << 4);
    DAT_0060a270 = param_1 + 1;
  }
  uVar2 = param_4[1];
  puVar10 = (ulong *)(puVar8 + (long)param_1 * 4);
  uVar4 = *puVar10;
  __ptr = (undefined *)puVar10[1];
  uVar9 = FUN_00402df0(__ptr,uVar4,param_2,param_3,*param_4,uVar2 | 1,param_4 + 2,
                       *(undefined8 *)(param_4 + 10),*(undefined8 *)(param_4 + 0xc));
  if (uVar4 <= uVar9) {
    uVar9 = uVar9 + 1;
    *puVar10 = uVar9;
    if (__ptr != &DAT_0060a320) {
      free(__ptr);
    }
    __ptr = (undefined *)FUN_00404e30(uVar9);
    uVar3 = *param_4;
    puVar10[1] = (ulong)__ptr;
    FUN_00402df0(__ptr,uVar9,param_2,param_3,uVar3,uVar2 | 1,param_4 + 2,
                 *(undefined8 *)(param_4 + 10),*(undefined8 *)(param_4 + 0xc));
  }
  *piVar7 = iVar1;
  return __ptr;
}


void FUN_004041c0(undefined *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_0060a420;
  }
  FUN_00405030(param_1,0x38);
  *piVar2 = iVar1;
  return;
}


undefined4 FUN_00404200(undefined4 *param_1)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)&DAT_0060a420;
  }
  return *param_1;
}


void FUN_00404210(undefined4 *param_1,undefined4 param_2)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)&DAT_0060a420;
  }
  *param_1 = param_2;
  return;
}


uint FUN_00404220(undefined *param_1,byte param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_0060a420;
  }
  uVar1 = *(uint *)(param_1 + (ulong)(param_2 >> 5) * 4 + 8);
  uVar2 = uVar1 >> (param_2 & 0x1f);
  *(uint *)(param_1 + (ulong)(param_2 >> 5) * 4 + 8) =
       ((param_3 ^ uVar2) & 1) << (param_2 & 0x1f) ^ uVar1;
  return uVar2 & 1;
}


undefined4 FUN_00404260(undefined *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_0060a420;
  }
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_1 + 4) = param_2;
  return uVar1;
}


void FUN_00404280(undefined4 *param_1,long param_2,long param_3)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)&DAT_0060a420;
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


void FUN_004042b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 *param_5)

{
  int iVar1;
  int *piVar2;
  
  if (param_5 == (undefined4 *)0x0) {
    param_5 = (undefined4 *)&DAT_0060a420;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  FUN_00402df0(param_1,param_2,param_3,param_4,*param_5,param_5[1],param_5 + 2,
               *(undefined8 *)(param_5 + 10),*(undefined8 *)(param_5 + 0xc));
  *piVar2 = iVar1;
  return;
}


undefined8 FUN_00404330(undefined8 param_1,undefined8 param_2,long *param_3,undefined4 *param_4)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  
  if (param_4 == (undefined4 *)0x0) {
    param_4 = (undefined4 *)&DAT_0060a420;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  uVar5 = (uint)(param_3 == (long *)0x0) | param_4[1];
  lVar3 = FUN_00402df0(0,0,param_1,param_2,*param_4,uVar5,param_4 + 2,*(undefined8 *)(param_4 + 10),
                       *(undefined8 *)(param_4 + 0xc));
  uVar4 = FUN_00404e30(lVar3 + 1);
  FUN_00402df0(uVar4,lVar3 + 1,param_1,param_2,*param_4,uVar5,param_4 + 2,
               *(undefined8 *)(param_4 + 10),*(undefined8 *)(param_4 + 0xc));
  *piVar2 = iVar1;
  if (param_3 != (long *)0x0) {
    *param_3 = lVar3;
  }
  return uVar4;
}


void FUN_00404420(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00404330(param_1,param_2,0,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404430(void)

{
  void **ppvVar1;
  void *__ptr;
  undefined *__ptr_00;
  void **ppvVar2;
  
  __ptr_00 = PTR_DAT_0060a258;
  if (1 < DAT_0060a270) {
    ppvVar2 = (void **)(PTR_DAT_0060a258 + 0x18);
    ppvVar1 = (void **)(PTR_DAT_0060a258 + (ulong)(DAT_0060a270 - 2) * 0x10 + 0x28);
    do {
      __ptr = *ppvVar2;
      ppvVar2 = ppvVar2 + 2;
      free(__ptr);
    } while (ppvVar2 != ppvVar1);
  }
  if (*(undefined **)(__ptr_00 + 8) != &DAT_0060a320) {
    free(*(undefined **)(__ptr_00 + 8));
    _DAT_0060a260 = 0x100;
    PTR_DAT_0060a268 = &DAT_0060a320;
  }
  if (__ptr_00 != &DAT_0060a260) {
    free(__ptr_00);
    PTR_DAT_0060a258 = &DAT_0060a260;
  }
  DAT_0060a270 = 1;
  return;
}


void FUN_004044d0(undefined8 param_1,undefined8 param_2)

{
  FUN_00404020(param_1,param_2,0xffffffffffffffff,&DAT_0060a420);
  return;
}


void FUN_004044f0(void)

{
  FUN_00404020();
  return;
}


void FUN_00404500(undefined8 param_1)

{
  FUN_00404020(0,param_1,0xffffffffffffffff,&DAT_0060a420);
  return;
}


void FUN_00404520(undefined8 param_1,undefined8 param_2)

{
  FUN_00404020(0,param_1,param_2,&DAT_0060a420);
  return;
}


void FUN_00404540(undefined8 param_1,int param_2,undefined8 param_3)

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
    FUN_00404020(param_1,param_3,0xffffffffffffffff,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_004045b0(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

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
    FUN_00404020(param_1,param_3,param_4,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00404620(undefined4 param_1,undefined8 param_2)

{
  FUN_00404540(0,param_1,param_2);
  return;
}


void FUN_00404630(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_004045b0(0,param_1,param_2,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404640(undefined8 param_1,undefined8 param_2,byte param_3)

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
  
  local_18 = DAT_0060a450;
  local_48 = _DAT_0060a420;
  uStack_40 = uRam000000000060a428;
  local_38 = _DAT_0060a430;
  uStack_30 = uRam000000000060a438;
  puVar1 = (uint *)((long)&uStack_40 + (ulong)(param_3 >> 5) * 4);
  local_28 = _DAT_0060a440;
  uStack_20 = uRam000000000060a448;
  uVar2 = *puVar1;
  *puVar1 = (~(uVar2 >> (param_3 & 0x1f)) & 1) << (param_3 & 0x1f) ^ uVar2;
  FUN_00404020(0,param_1,param_2,&local_48);
  return;
}


void FUN_004046b0(undefined8 param_1,char param_2)

{
  FUN_00404640(param_1,0xffffffffffffffff,(int)param_2);
  return;
}


void FUN_004046c0(undefined8 param_1)

{
  FUN_00404640(param_1,0xffffffffffffffff,0x3a);
  return;
}


void FUN_004046e0(undefined8 param_1,undefined8 param_2)

{
  FUN_00404640(param_1,param_2,0x3a);
  return;
}


void FUN_004046f0(undefined8 param_1,int param_2,undefined8 param_3)

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
    FUN_00404020(param_1,param_3,0xffffffffffffffff,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404760(undefined8 param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5
                 )

{
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  long lStack_20;
  long local_18;
  
  uStack_40 = uRam000000000060a428;
  local_38 = _DAT_0060a430;
  uStack_30 = uRam000000000060a438;
  local_28 = _DAT_0060a440;
  lStack_20 = uRam000000000060a448;
  local_18 = DAT_0060a450;
  local_48 = CONCAT44((int)((ulong)_DAT_0060a420 >> 0x20),10);
  if ((param_2 != 0) && (param_3 != 0)) {
    lStack_20 = param_2;
    local_18 = param_3;
    FUN_00404020(param_1,param_4,param_5,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_004047d0(void)

{
  FUN_00404760();
  return;
}


void FUN_004047e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00404760(0,param_1,param_2,param_3,0xffffffffffffffff);
  return;
}


void FUN_00404800(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00404760(0,param_1,param_2,param_3,param_4);
  return;
}


void FUN_00404820(void)

{
  FUN_00404020();
  return;
}


void FUN_00404830(undefined8 param_1,undefined8 param_2)

{
  FUN_00404020(0,param_1,param_2,&DAT_0060a220);
  return;
}


void FUN_00404850(undefined8 param_1,undefined8 param_2)

{
  FUN_00404020(param_1,param_2,0xffffffffffffffff,&DAT_0060a220);
  return;
}


void FUN_00404870(undefined8 param_1)

{
  FUN_00404020(0,param_1,0xffffffffffffffff,&DAT_0060a220);
  return;
}


undefined8
FUN_00404890(FILE *param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5,
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
  uVar1 = dcgettext(0,&DAT_00407dab,5);
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
    goto LAB_00404b0c;
  case 5:
    uVar1 = param_5[3];
    uVar4 = param_5[2];
    uVar5 = param_5[1];
    uVar6 = *param_5;
    uVar7 = dcgettext(0,"Written by %s, %s, %s,\n%s, and %s.\n",5);
LAB_00404b0c:
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
    goto LAB_00404ba9;
  case 7:
    uVar1 = param_5[2];
    uVar4 = param_5[5];
    uVar5 = param_5[4];
    uVar6 = param_5[3];
    local_58 = param_5[1];
    uVar7 = *param_5;
    uVar3 = dcgettext(0,"Written by %s, %s, %s,\n%s, %s, %s, and %s.\n",5);
LAB_00404ba9:
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
    goto LAB_0040498a;
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
LAB_0040498a:
  uVar1 = __fprintf_chk(param_1,1,uVar3,uVar7,local_50,local_58,uVar6,uVar5,uVar4,uVar1,local_48);
  return uVar1;
}


void FUN_00404c70(void)

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
  FUN_00404890();
  return;
}


void FUN_00404c90(void)

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
  FUN_00404890();
  return;
}


void FUN_00404cf0(void)

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
  FUN_00404890();
  return;
}


void FUN_00404db0(void)

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


void FUN_00404e30(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00405080();
  }
  return;
}


void FUN_00404e50(ulong param_1,ulong param_2)

{
  if ((-1 < SUB168(ZEXT816(param_1) * ZEXT816(param_2),0)) &&
     (SUB168(ZEXT816(param_1) * ZEXT816(param_2) >> 0x40,0) == 0)) {
    FUN_00404e30();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00405080();
}


void thunk_FUN_00404e30(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00405080();
  }
  return;
}


void * FUN_00404e90(void *param_1,size_t param_2)

{
  void *pvVar1;
  
  if ((param_2 == 0) && (param_1 != (void *)0x0)) {
    free(param_1);
    return (void *)0x0;
  }
  pvVar1 = realloc(param_1,param_2);
  if ((pvVar1 == (void *)0x0) && (param_2 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00405080();
  }
  return pvVar1;
}


void FUN_00404ed0(undefined8 param_1,ulong param_2,ulong param_3)

{
  if ((-1 < SUB168(ZEXT816(param_2) * ZEXT816(param_3),0)) &&
     (SUB168(ZEXT816(param_2) * ZEXT816(param_3) >> 0x40,0) == 0)) {
    FUN_00404e90();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00405080();
}


void FUN_00404f00(long param_1,ulong *param_2,ulong param_3)

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
    if ((SUB168(ZEXT816(uVar2) * ZEXT816(param_3),0) < 0) || (uVar3 != 0)) goto LAB_00404f5b;
  }
  else {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x5555555555555554);
    uVar3 = SUB168(auVar1 % ZEXT816(param_3),0);
    if (SUB168(auVar1 / ZEXT816(param_3),0) <= uVar2) {
LAB_00404f5b:
                    /* WARNING: Subroutine does not return */
      FUN_00405080(param_1,param_2,uVar3);
    }
    uVar2 = (uVar2 >> 1) + 1 + uVar2;
  }
  *param_2 = uVar2;
  FUN_00404e90(param_1,uVar2 * param_3);
  return;
}


void FUN_00404f90(long param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (param_1 == 0) {
    if (uVar1 == 0) {
      *param_2 = 0x80;
      FUN_00404e90(0,0x80);
      return;
    }
    if ((long)uVar1 < 0) goto LAB_00404fda;
  }
  else {
    if (0x5555555555555553 < uVar1) {
LAB_00404fda:
                    /* WARNING: Subroutine does not return */
      FUN_00405080();
    }
    uVar1 = (uVar1 >> 1) + 1 + uVar1;
  }
  *param_2 = uVar1;
  FUN_00404e90(param_1,uVar1);
  return;
}


void FUN_00404fe0(size_t param_1)

{
  void *__s;
  
  __s = (void *)FUN_00404e30();
  memset(__s,0,param_1);
  return;
}


void FUN_00405000(size_t param_1,ulong param_2)

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
  FUN_00405080();
}


void FUN_00405030(void *param_1,size_t param_2)

{
  void *__dest;
  
  __dest = (void *)FUN_00404e30(param_2);
  memcpy(__dest,param_1,param_2);
  return;
}


void FUN_00405060(char *param_1)

{
  void *__dest;
  size_t sVar1;
  
  sVar1 = strlen(param_1);
  __dest = (void *)FUN_00404e30(sVar1 + 1);
  memcpy(__dest,param_1,sVar1 + 1);
  return;
}


void FUN_00405080(void)

{
  undefined8 uVar1;
  
  uVar1 = dcgettext(0,"memory exhausted",5);
  error(DAT_0060a208,0,"%s",uVar1);
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_004050c0(char *param_1,size_t param_2)

{
  char *pcVar1;
  
  pcVar1 = strndup(param_1,param_2);
  if (pcVar1 != (char *)0x0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00405080();
}


int FUN_004050e0(FILE *param_1)

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
      if (_Var4 == -1) goto LAB_00405147;
    }
    iVar1 = FUN_00405160(param_1);
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
LAB_00405147:
  iVar1 = fclose(param_1);
  return iVar1;
}


void FUN_00405160(FILE *param_1)

{
  int iVar1;
  
  if (param_1 != (FILE *)0x0) {
    iVar1 = __freading();
    if ((iVar1 != 0) && ((param_1->_flags & 0x100U) != 0)) {
      FUN_004051a0(param_1,0,1);
      fflush(param_1);
      return;
    }
  }
  fflush(param_1);
  return;
}


ulong FUN_004051a0(FILE *param_1,__off_t param_2,int param_3)

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


void FUN_00405200(long param_1,int *param_2)

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
      if (iVar3 <= iVar8) goto LAB_0040527c;
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
      if (iVar9 <= iVar3) goto LAB_0040527c;
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
LAB_0040527c:
  param_2[0xc] = iVar2;
  param_2[0xb] = iVar1 + (iVar2 - iVar3);
  return;
}


int FUN_004052e0(int param_1,undefined8 *param_2,char *param_3,char **param_4,undefined4 *param_5,
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
      if ((iVar5 == 0) && (sVar7 = strlen(__s1_00), sVar7 == sVar15)) goto LAB_00405500;
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
            if (local_70 == (char *)0x0) goto LAB_00405440;
          }
          else if (local_70 == (char *)0x0) {
            local_70 = (char *)calloc((long)iVar5,1);
            if (local_70 == (char *)0x0) {
              bVar3 = true;
              goto LAB_00405440;
            }
            bVar4 = true;
            local_70[(int)local_44] = '\x01';
          }
          local_70[lVar16] = '\x01';
        }
      }
LAB_00405440:
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
              __fprintf_chk(__stream,1,&DAT_00408231,param_9,*param_4);
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
LAB_00405500:
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


uint FUN_00405900(uint param_1,undefined8 *param_2,char *param_3,long param_4,undefined8 param_5,
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
LAB_0040594a:
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
          goto LAB_00405a4d;
        }
        pbVar8 = *(byte **)(param_7 + 8);
      }
      param_7[10] = 0;
    }
LAB_00405a4d:
    param_7[6] = 1;
    cVar2 = *param_3;
LAB_00405a58:
    if (cVar2 == ':') {
      uVar3 = 0;
    }
    if (pbVar8 == (byte *)0x0) goto LAB_004059c8;
LAB_00405a6c:
    if (*pbVar8 == 0) goto LAB_004059c8;
  }
  else {
    if (param_7[6] == 0) goto LAB_0040594a;
    cVar2 = *param_3;
    pbVar8 = *(byte **)(param_7 + 8);
    if ((cVar2 - 0x2bU & 0xfd) != 0) goto LAB_00405a58;
    pcVar4 = param_3 + 1;
    param_3 = param_3 + 1;
    if (*pcVar4 == ':') {
      uVar3 = 0;
    }
    if (pbVar8 != (byte *)0x0) goto LAB_00405a6c;
LAB_004059c8:
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
        FUN_00405200(param_2,param_7);
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
LAB_00405b36:
      if (uVar11 != param_1) {
        *param_7 = uVar11;
      }
      return 0xffffffff;
    }
    lVar6 = 3;
    pbVar8 = (byte *)param_2[(int)uVar11];
    pbVar9 = pbVar8;
    pbVar10 = &DAT_00408249;
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
          FUN_00405200(param_2,param_7);
          uVar11 = param_7[0xb];
        }
      }
      param_7[0xc] = param_1;
      *param_7 = param_1;
      goto LAB_00405b36;
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
        puVar15 = &DAT_00408249;
        goto LAB_00405c95;
      }
      if ((int)param_6 != 0) {
        if (pbVar8[2] == 0) {
          pcVar4 = strchr(param_3,(int)(char)bVar14);
          param_6 = param_6 & 0xffffffff;
          if (pcVar4 != (char *)0x0) goto LAB_00405c40;
        }
        *(byte **)(param_7 + 8) = pbVar8 + 1;
        uVar11 = FUN_004052e0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar3,
                              &DAT_0040824a);
        if (uVar11 != 0xffffffff) {
          return uVar11;
        }
        pbVar8 = (byte *)param_2[(int)*param_7];
      }
    }
LAB_00405c40:
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
  puVar15 = &DAT_00408268;
LAB_00405c95:
  uVar3 = FUN_004052e0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar3,puVar15);
  return uVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405ed0(void)

{
  DAT_0060a460 = DAT_0060a278._4_4_;
  _DAT_0060a464 = (undefined4)DAT_0060a278;
  FUN_00405900();
  DAT_0060a278._4_4_ = DAT_0060a460;
  DAT_0060a4a8 = DAT_0060a470;
  _DAT_0060a274 = DAT_0060a468;
  return;
}


void FUN_00405f30(void)

{
  FUN_00405ed0();
  return;
}


void FUN_00405f50(void)

{
  FUN_00405ed0();
  return;
}


void FUN_00405f70(void)

{
  FUN_00405900();
  return;
}


void FUN_00405f90(void)

{
  FUN_00405ed0();
  return;
}


void FUN_00405fb0(void)

{
  FUN_00405900();
  return;
}


size_t FUN_00405fd0(wchar_t *param_1,byte *param_2,size_t param_3,mbstate_t *param_4)

{
  char cVar1;
  size_t sVar2;
  wchar_t local_1c;
  
  if (param_2 == (byte *)0x0) {
    param_3 = 1;
    param_2 = (byte *)0x408267;
  }
  else {
    if (param_3 == 0) {
      return 0xfffffffffffffffe;
    }
    if (param_1 != (wchar_t *)0x0) goto LAB_00405ff4;
  }
  param_1 = &local_1c;
LAB_00405ff4:
  sVar2 = mbrtowc(param_1,(char *)param_2,param_3,param_4);
  if ((0xfffffffffffffffd < sVar2) && (cVar1 = FUN_004060b0(0), cVar1 == '\0')) {
    sVar2 = 1;
    *param_1 = (uint)*param_2;
  }
  return sVar2;
}


ulong FUN_00406050(uint *param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  
  lVar2 = __fpending();
  uVar1 = *param_1;
  uVar3 = FUN_004050e0(param_1);
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


bool FUN_004060b0(int param_1)

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
    pbVar5 = &DAT_0040826c;
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

char * FUN_00406110(void)

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
  if (DAT_0060a498 != (char *)0x0) goto LAB_0040614a;
  pcVar7 = getenv("CHARSETALIASDIR");
  if ((pcVar7 == (char *)0x0) || (*pcVar7 == '\0')) {
    sVar6 = 0x73;
    sVar5 = 0x65;
    __n = 100;
    pcVar7 = 
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib"
    ;
LAB_00406235:
    __file = (char *)malloc(sVar6);
    if (__file != (char *)0x0) {
      memcpy(__file,pcVar7,__n);
      __file[__n] = '/';
      goto LAB_00406256;
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
        goto LAB_00406235;
      }
      sVar6 = __n + 0xe;
    }
    __file = (char *)malloc(sVar6);
    if (__file != (char *)0x0) {
      memcpy(__file,pcVar7,__n);
      sVar5 = __n;
LAB_00406256:
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
LAB_004062f0:
          pbVar8 = (byte *)__stream->_IO_read_ptr;
          if (__stream->_IO_read_end <= pbVar8) goto LAB_0040647c;
          do {
            __stream->_IO_read_ptr = (char *)(pbVar8 + 1);
            uVar4 = (uint)*pbVar8;
            __ptr = pcVar7;
            while( true ) {
              pcVar7 = __ptr;
              if ((uVar4 - 9 < 2) || (uVar4 == 0x20)) goto LAB_004062f0;
              if (uVar4 == 0x23) goto LAB_004064e1;
              ungetc(uVar4,__stream);
              iVar2 = fscanf(__stream,"%50s %50s",&local_b8,&local_78);
              puVar13 = &local_b8;
              if (iVar2 < 2) goto LAB_0040648f;
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
                FUN_004050e0(__stream);
                goto LAB_00406294;
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
LAB_0040647c:
              uVar4 = __uflow(__stream);
              __ptr = pcVar7;
              if (uVar4 == 0xffffffff) goto LAB_0040648f;
            }
          } while( true );
        }
        close(iVar2);
      }
      goto LAB_0040628e;
    }
  }
  DAT_0060a498 = "";
LAB_0040614a:
  cVar1 = *DAT_0060a498;
  pcVar7 = DAT_0060a498;
  do {
    if (cVar1 == '\0') {
LAB_004061a4:
      if (*__s1 == '\0') {
        __s1 = "ASCII";
      }
      return __s1;
    }
    iVar2 = strcmp(__s1,pcVar7);
    if ((iVar2 == 0) || ((cVar1 == '*' && (pcVar7[1] == '\0')))) {
      sVar6 = strlen(pcVar7);
      __s1 = pcVar7 + sVar6 + 1;
      goto LAB_004061a4;
    }
    sVar6 = strlen(pcVar7);
    sVar5 = strlen(pcVar7 + sVar6 + 1);
    pcVar7 = pcVar7 + sVar6 + 1 + sVar5 + 1;
    cVar1 = *pcVar7;
  } while( true );
LAB_004064e1:
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
  if (uVar4 == 0xffffffff) goto LAB_0040648f;
  goto LAB_004062f0;
LAB_0040648f:
  FUN_004050e0(__stream);
  if (local_d0 == 0) {
LAB_0040628e:
    pcVar7 = "";
  }
  else {
    pcVar7[local_d0] = '\0';
  }
LAB_00406294:
  free(__file);
  DAT_0060a498 = pcVar7;
  goto LAB_0040614a;
}


/* WARNING: Removing unreachable block (ram,0x004066b3) */
/* WARNING: Removing unreachable block (ram,0x004066b8) */

void FUN_00406680(void)

{
  __DT_INIT();
  return;
}


void FUN_004066e0(void)

{
  return;
}


void FUN_004066f0(undefined8 param_1)

{
  __cxa_atexit(param_1,0,DAT_0060a1e8);
  return;
}


undefined8 FUN_00406708(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code **ppcVar1;
  
  for (ppcVar1 = (code **)&DAT_00609e30; *ppcVar1 != (code *)0xffffffffffffffff;
      ppcVar1 = ppcVar1 + -1) {
    (**ppcVar1)();
  }
  return param_3;
}


void __DT_FINI(void)

{
  FUN_00401de1();
  return;
}

