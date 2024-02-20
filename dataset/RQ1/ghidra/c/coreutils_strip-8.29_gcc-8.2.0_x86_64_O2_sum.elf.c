
void switchD_004032a0::caseD_b(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401975(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_0040197a(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_0040197f(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401984(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void switchD_00404dda::caseD_0(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


byte FUN_00401990(int param_1,undefined8 *param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  int *piVar5;
  code *pcVar6;
  
  pcVar6 = FUN_00401e10;
  FUN_004030b0(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils");
  textdomain("coreutils");
  FUN_00407360(FUN_00402380);
  setvbuf(stdout,(char *)0x0,1,0);
  DAT_0060b2d8 = '\0';
  do {
    iVar3 = FUN_00406830(param_1,param_2,&DAT_0040747d,&PTR_DAT_00407780,0);
    if (iVar3 == -1) {
      iVar3 = param_1 - DAT_0060b278._4_4_;
      bVar1 = 1;
      if (iVar3 < 1) {
        bVar1 = (*pcVar6)(&DAT_00408e72,iVar3);
      }
      else {
        for (; DAT_0060b278._4_4_ < param_1; DAT_0060b278._4_4_ = DAT_0060b278._4_4_ + 1) {
          bVar2 = (*pcVar6)(param_2[DAT_0060b278._4_4_],iVar3);
          bVar1 = bVar1 & bVar2;
        }
      }
      if ((DAT_0060b2d8 == '\0') || (iVar3 = FUN_004059c0(stdin), iVar3 != -1)) {
        return bVar1 ^ 1;
      }
      uVar4 = FUN_00404b50(0,3,&DAT_00408e72);
      piVar5 = __errno_location();
      error(1,*piVar5,&DAT_00408eeb,uVar4);
LAB_00401b39:
                    /* WARNING: Subroutine does not return */
      FUN_00402020(1);
    }
    if (iVar3 == -0x82) {
                    /* WARNING: Subroutine does not return */
      FUN_00402020(0);
    }
    if (iVar3 < -0x81) {
      if (iVar3 == -0x83) {
        FUN_004051b0(stdout,&DAT_0040742e,"GNU coreutils",PTR_DAT_0060b210,"Kayvan Aghaiepour",
                     "David MacKenzie",0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      goto LAB_00401b39;
    }
    if (iVar3 == 0x72) {
      pcVar6 = FUN_00401e10;
    }
    else {
      if (iVar3 != 0x73) goto LAB_00401b39;
      pcVar6 = FUN_00401c30;
    }
  } while( true );
}


void FUN_00401b50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_retaddr;
  undefined auStack_8 [8];
  
  (*(code *)PTR___libc_start_main_0060aff0)
            (FUN_00401990,unaff_retaddr,&stack0x00000008,FUN_004072f0,FUN_00407350,param_3,auStack_8
            );
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* WARNING: Removing unreachable block (ram,0x00401b88) */
/* WARNING: Removing unreachable block (ram,0x00401b92) */

void FUN_00401b7b(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00401bc9) */

void FUN_00401b9a(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00401c06) */

void FUN_00401bd1(void)

{
  if (DAT_0060b2c8 != '\0') {
    return;
  }
  FUN_00401b7b();
  DAT_0060b2c8 = 1;
  return;
}


/* WARNING: Removing unreachable block (ram,0x00401bc9) */

void thunk_FUN_00401b9a(void)

{
  return;
}


undefined8 FUN_00401c30(byte *param_1,int param_2)

{
  byte bVar1;
  char *pcVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  int *piVar6;
  long lVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  bool bVar11;
  bool bVar12;
  undefined auStack_22c8 [656];
  byte local_2038 [8200];
  
  lVar7 = 2;
  bVar11 = &stack0xffffffffffffffd0 < (undefined *)0x2298;
  bVar12 = &stack0x00000000 == (undefined *)0x22c8;
  pbVar9 = param_1;
  pbVar8 = &DAT_00408e72;
  do {
    if (lVar7 == 0) break;
    lVar7 = lVar7 + -1;
    bVar11 = *pbVar9 < *pbVar8;
    bVar12 = *pbVar9 == *pbVar8;
    pbVar9 = pbVar9 + 1;
    pbVar8 = pbVar8 + 1;
  } while (bVar12);
  bVar12 = !bVar11 && !bVar12;
  if (bVar12 == bVar11) {
    DAT_0060b2d8 = 1;
    iVar3 = 0;
  }
  else {
    iVar3 = open((char *)param_1,0);
    if (iVar3 == -1) goto LAB_00401db0;
  }
  uVar10 = 0;
  lVar7 = 0;
  while (lVar4 = FUN_00404cf0(iVar3,local_2038,0x2000), lVar4 != 0) {
    if (lVar4 == -1) {
      uVar5 = FUN_00404b50(0,3,param_1);
      piVar6 = __errno_location();
      error(0,*piVar6,&DAT_00408eeb,uVar5);
      if (bVar12 != bVar11) {
        close(iVar3);
        return 0;
      }
      return 0;
    }
    pbVar8 = local_2038;
    pbVar9 = pbVar8 + lVar4;
    do {
      bVar1 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      uVar10 = uVar10 + bVar1;
    } while (pbVar8 != pbVar9);
    lVar7 = lVar7 + lVar4;
  }
  if ((bVar12 == bVar11) || (iVar3 = close(iVar3), iVar3 == 0)) {
    uVar10 = (uVar10 >> 0x10) + (uVar10 & 0xffff);
    uVar5 = FUN_00402520(lVar7,auStack_22c8,0,1,0x200);
    __printf_chk(1,"%d %s",((int)uVar10 >> 0x10) + (uVar10 & 0xffff),uVar5);
    if (param_2 != 0) {
      __printf_chk(1,&DAT_00408eea,param_1);
    }
    pcVar2 = stdout->_IO_write_ptr;
    if (pcVar2 < stdout->_IO_write_end) {
      stdout->_IO_write_ptr = pcVar2 + 1;
      *pcVar2 = '\n';
      return 1;
    }
    __overflow(stdout,10);
    return 1;
  }
LAB_00401db0:
  uVar5 = FUN_00404b50(0,3,param_1);
  piVar6 = __errno_location();
  error(0,*piVar6,&DAT_00408eeb,uVar5);
  return 0;
}


undefined8 FUN_00401e10(byte *param_1,int param_2)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  undefined8 uVar5;
  _IO_FILE *p_Var6;
  int *piVar7;
  long lVar8;
  uint uVar9;
  byte *pbVar10;
  bool bVar11;
  bool bVar12;
  undefined auStack_2c8 [664];
  
  lVar8 = 2;
  bVar11 = &stack0xffffffffffffffd0 < (undefined *)0x298;
  bVar12 = &stack0x00000000 == (undefined *)0x2c8;
  pbVar4 = param_1;
  pbVar10 = &DAT_00408e72;
  do {
    if (lVar8 == 0) break;
    lVar8 = lVar8 + -1;
    bVar11 = *pbVar4 < *pbVar10;
    bVar12 = *pbVar4 == *pbVar10;
    pbVar4 = pbVar4 + 1;
    pbVar10 = pbVar10 + 1;
  } while (bVar12);
  bVar12 = !bVar11 && !bVar12;
  if (bVar12 == bVar11) {
    DAT_0060b2d8 = 1;
    p_Var6 = stdin;
  }
  else {
    p_Var6 = fopen((char *)param_1,"r");
    if (p_Var6 == (FILE *)0x0) goto LAB_00401f79;
  }
  lVar8 = 0;
  uVar9 = 0;
  FUN_00402430(p_Var6,2);
  pbVar10 = (byte *)p_Var6->_IO_read_end;
  pbVar4 = (byte *)p_Var6->_IO_read_ptr;
  do {
    if (pbVar4 < pbVar10) {
      p_Var6->_IO_read_ptr = (char *)(pbVar4 + 1);
      uVar2 = (uint)*pbVar4;
      pbVar4 = pbVar4 + 1;
    }
    else {
      uVar2 = __uflow(p_Var6);
      if (uVar2 == 0xffffffff) break;
      pbVar10 = (byte *)p_Var6->_IO_read_end;
      pbVar4 = (byte *)p_Var6->_IO_read_ptr;
    }
    lVar8 = lVar8 + 1;
    uVar9 = (uVar9 & 1) * 0x8000 + ((int)uVar9 >> 1) + uVar2 & 0xffff;
  } while( true );
  if ((*(byte *)&p_Var6->_flags & 0x20) != 0) {
    uVar5 = FUN_00404b50(0,3,param_1);
    piVar7 = __errno_location();
    error(0,*piVar7,&DAT_00408eeb,uVar5);
    if (bVar12 == bVar11) {
      return 0;
    }
    FUN_004059c0(p_Var6);
    return 0;
  }
  if ((bVar12 == bVar11) || (iVar3 = FUN_004059c0(p_Var6), iVar3 == 0)) {
    uVar5 = FUN_00402520(lVar8,auStack_2c8,0,1,0x400);
    __printf_chk(1,"%05d %5s",uVar9,uVar5);
    if (1 < param_2) {
      __printf_chk(1,&DAT_00408eea,param_1);
    }
    pcVar1 = stdout->_IO_write_ptr;
    if (pcVar1 < stdout->_IO_write_end) {
      stdout->_IO_write_ptr = pcVar1 + 1;
      *pcVar1 = '\n';
      return 1;
    }
    __overflow(stdout,10);
    return 1;
  }
LAB_00401f79:
  uVar5 = FUN_00404b50(0,3,param_1);
  piVar7 = __errno_location();
  error(0,*piVar7,&DAT_00408eeb,uVar5);
  return 0;
}


void FUN_00402020(int param_1)

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
  undefined *local_38;
  char *local_30;
  undefined8 local_28;
  undefined8 local_20;
  byte **ppbVar6;
  
  uVar7 = DAT_0060b2f0;
  bVar13 = 0;
  if (param_1 != 0) {
    uVar3 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(stderr,1,uVar3,uVar7);
    goto LAB_0040205f;
  }
  uVar3 = dcgettext(0,"Usage: %s [OPTION]... [FILE]...\n",5);
  __printf_chk(1,uVar3,uVar7);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"Print checksum and block counts for each FILE.\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"\nWith no FILE, or when FILE is -, read standard input.\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\n  -r              use BSD sum algorithm, use 1K blocks\n  -s, --sysv      use System V sum algorithm, use 512 bytes blocks\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"      --help     display this help and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"      --version  output version information and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  local_88 = &DAT_004073d3;
  local_80 = "test invocation";
  local_78[0] = (byte *)0x40744d;
  local_78[1] = (byte *)0x4073e5;
  local_78[2] = (byte *)0x4073fb;
  local_78[3] = (byte *)0x407405;
  local_78[4] = (byte *)0x407414;
  local_50 = "sha2 utilities";
  local_48 = "sha384sum";
  local_40 = "sha2 utilities";
  local_38 = &DAT_00407428;
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
    lVar8 = 4;
    pbVar10 = &DAT_0040742e;
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
        pbVar9 = &DAT_0040742e;
        goto LAB_0040232b;
      }
    }
    pbVar9 = &DAT_0040742e;
    uVar7 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    pcVar4 = " invocation";
    __printf_chk(1,uVar7,"https://www.gnu.org/software/coreutils/",&DAT_0040742e);
  }
  else {
    uVar7 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar7,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
      iVar2 = strncmp(pcVar4,"en_",3);
      if (iVar2 != 0) {
LAB_0040232b:
        uVar7 = dcgettext(0,"Report %s translation bugs to <https://translationproject.org/team/>\n"
                          ,5);
        __printf_chk(1,uVar7,&DAT_0040742e);
      }
    }
    pcVar4 = " invocation";
    uVar7 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    __printf_chk(1,uVar7,"https://www.gnu.org/software/coreutils/",&DAT_0040742e);
    if (pbVar9 != &DAT_0040742e) {
      pcVar4 = "";
    }
  }
  uVar7 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(1,uVar7,pbVar9,pcVar4);
LAB_0040205f:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}


void FUN_00402360(undefined8 param_1)

{
  DAT_0060b2e8 = param_1;
  return;
}


void FUN_00402370(undefined param_1)

{
  DAT_0060b2e0 = param_1;
  return;
}


void FUN_00402380(void)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  iVar1 = FUN_00406cc0(stdout);
  if (iVar1 != 0) {
    piVar2 = __errno_location();
    if ((DAT_0060b2e0 == '\0') || (*piVar2 != 0x20)) {
      uVar3 = dcgettext(0,"write error",5);
      if (DAT_0060b2e8 == 0) {
        error(0,*piVar2,&DAT_00408eeb,uVar3);
      }
      else {
        uVar4 = FUN_00404b20();
        error(0,*piVar2,"%s: %s",uVar4,uVar3);
      }
      goto LAB_004023fe;
    }
  }
  iVar1 = FUN_00406cc0(stderr);
  if (iVar1 == 0) {
    return;
  }
LAB_004023fe:
                    /* WARNING: Subroutine does not return */
  _exit(DAT_0060b218);
}


void FUN_00402420(void)

{
  (*(code *)PTR_posix_fadvise_0060b0f0)();
  return;
}


void FUN_00402430(FILE *param_1,int param_2)

{
  int __fd;
  
  if (param_1 != (FILE *)0x0) {
    __fd = fileno(param_1);
    posix_fadvise(__fd,0,0,param_2);
    return;
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x004024b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00402460(int param_1)

{
  ulong uVar1;
  float10 fVar2;
  float10 param_7;
  
  if ((float10)_DAT_004078a4 <= param_7) {
    uVar1 = (long)ROUND(param_7 - (float10)_DAT_004078a4) ^ 0x8000000000000000;
  }
  else {
    uVar1 = (ulong)ROUND(param_7);
  }
  fVar2 = (float10)uVar1;
  if ((long)uVar1 < 0) {
    fVar2 = fVar2 + (float10)_DAT_004078a8;
  }
  if (((param_1 == 0) && (param_7 != fVar2)) && ((long)(uVar1 + 1) < 0)) {
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_00402520(ulong param_1,char *param_2,uint param_3,ulong param_4,ulong param_5)

{
  byte bVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  char cVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  lconv *plVar9;
  ulong uVar10;
  size_t sVar11;
  size_t __n;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  char *__s;
  undefined8 *__dest;
  undefined8 *puVar21;
  undefined8 *puVar22;
  byte *pbVar23;
  bool bVar24;
  float10 fVar25;
  float10 fVar26;
  float10 fVar27;
  undefined8 *local_a8;
  undefined local_68 [56];
  
  uVar5 = param_3 & 0x20;
  uVar14 = param_3 & 3;
  uVar6 = (-(uint)(uVar5 == 0) & 0xffffffe8) + 0x400;
  plVar9 = localeconv();
  puVar21 = (undefined8 *)plVar9->decimal_point;
  uVar10 = strlen((char *)puVar21);
  bVar24 = 0xf < uVar10 - 1;
  if (bVar24) {
    puVar21 = (undefined8 *)&DAT_00407818;
  }
  pbVar23 = (byte *)plVar9->grouping;
  __s = plVar9->thousands_sep;
  if (bVar24) {
    uVar10 = 1;
  }
  sVar11 = strlen(__s);
  if (0x10 < sVar11) {
    __s = "";
  }
  local_a8 = (undefined8 *)(param_2 + 0x287);
  uVar15 = (uint)uVar10;
  if (param_4 < param_5) {
    if (param_4 != 0) {
      auVar3 = ZEXT816(param_5) / ZEXT816(param_4);
      if (param_5 % param_4 == 0) {
        uVar17 = SUB168(ZEXT816(param_1) / (auVar3 & (undefined  [16])0xffffffffffffffff),0);
        auVar2 = ZEXT816((ulong)(SUB168(ZEXT816(param_1) %
                                        (auVar3 & (undefined  [16])0xffffffffffffffff),0) * 10));
        uVar18 = SUB168(auVar2 % (auVar3 & (undefined  [16])0xffffffffffffffff),0) * 2;
        uVar8 = SUB164(auVar2 / (auVar3 & (undefined  [16])0xffffffffffffffff),0);
        uVar12 = (ulong)uVar8;
        if (uVar18 < SUB168(auVar3,0)) {
          uVar19 = (uint)(uVar18 != 0);
        }
        else {
          uVar19 = (SUB168(auVar3,0) < uVar18) + 2;
        }
        goto joined_r0x004028b8;
      }
    }
LAB_00402605:
    fVar25 = (float10)param_4;
    if ((long)param_4 < 0) {
      fVar25 = fVar25 + (float10)_DAT_004078a8;
    }
    if ((long)param_5 < 0) {
      fVar25 = fVar25 / ((float10)param_5 + (float10)_DAT_004078a8);
      if ((long)param_1 < 0) goto LAB_00402818;
LAB_00402642:
      fVar25 = (float10)param_1 * fVar25;
      if ((param_3 & 0x10) != 0) goto LAB_0040264f;
LAB_00402760:
      if ((uVar14 != 1) && (fVar25 < _DAT_004078b0)) {
        FUN_00402460();
        uVar10 = SUB108(fVar25,0);
      }
      __sprintf_chk(param_2,1,0xffffffffffffffff,"%.0Lf",uVar10);
      uVar16 = 0xffffffff;
      __n = strlen(param_2);
      sVar11 = __n;
    }
    else {
      fVar25 = fVar25 / (float10)param_5;
      if (-1 < (long)param_1) goto LAB_00402642;
LAB_00402818:
      fVar25 = ((float10)param_1 + (float10)_DAT_004078a8) * fVar25;
      if ((param_3 & 0x10) == 0) goto LAB_00402760;
LAB_0040264f:
      uVar16 = 0;
      fVar27 = (float10)uVar6;
      do {
        fVar26 = fVar27;
        uVar16 = uVar16 + 1;
        fVar27 = fVar26 * (float10)uVar6;
        if (fVar25 < fVar27) break;
      } while (uVar16 != 8);
      fVar25 = fVar25 / fVar26;
      uVar17 = uVar10 + 2 + (ulong)(uVar5 == 0);
      if (uVar14 == 1) {
        __sprintf_chk(param_2,1,0xffffffffffffffff,"%.1Lf");
        __n = strlen(param_2);
        if (__n <= uVar17) goto LAB_00402b88;
      }
      else {
        if (fVar25 < _DAT_004078b0) {
          FUN_00402460();
        }
        __sprintf_chk(param_2,1,0xffffffffffffffff,"%.1Lf");
        __n = strlen(param_2);
        if (__n <= uVar17) {
LAB_00402b88:
          if (((param_3 & 8) == 0) || (param_2[__n - 1] != '0')) {
            sVar11 = __n - (uVar10 + 1);
            goto LAB_004027b0;
          }
          if (uVar14 == 1) goto LAB_00402726;
        }
        if (fVar25 * (float10)_DAT_004078ac < _DAT_004078b0) {
          FUN_00402460(uVar14);
        }
      }
LAB_00402726:
      __sprintf_chk(param_2,1,0xffffffffffffffff,"%.0Lf");
      __n = strlen(param_2);
      sVar11 = __n;
    }
LAB_004027b0:
    puVar22 = (undefined8 *)((long)local_a8 - __n);
    memmove(puVar22,param_2,__n);
    __dest = (undefined8 *)(sVar11 + (long)puVar22);
  }
  else {
    if ((param_4 % param_5 != 0) ||
       (uVar17 = SUB168(ZEXT816(param_4) / ZEXT816(param_5),0) * param_1,
       SUB168(ZEXT816(uVar17) /
              (ZEXT816(param_4) / ZEXT816(param_5) & (undefined  [16])0xffffffffffffffff),0) !=
       param_1)) goto LAB_00402605;
    uVar19 = 0;
    uVar12 = 0;
    uVar8 = 0;
joined_r0x004028b8:
    puVar22 = local_a8;
    if ((param_3 & 0x10) == 0) {
      uVar16 = 0xffffffff;
LAB_004028d1:
      if (uVar14 != 1) goto LAB_004028e0;
      __dest = local_a8;
      if (5 < (int)(uVar8 + (((uint)uVar17 & 1) + uVar19 != 0))) goto LAB_004028f1;
LAB_00402923:
      do {
        puVar22 = (undefined8 *)((long)puVar22 + -1);
        *(char *)puVar22 = (char)uVar17 + (char)(uVar17 / 10) * -10 + '0';
        bVar24 = 9 < uVar17;
        uVar17 = uVar17 / 10;
      } while (bVar24);
    }
    else {
      uVar8 = (uint)uVar12;
      uVar20 = (ulong)uVar6;
      uVar16 = 0;
      uVar18 = uVar17;
      if (uVar17 < uVar20) goto LAB_004028d1;
      while( true ) {
        uVar17 = uVar18 / uVar20;
        uVar7 = (int)uVar12 + (int)(uVar18 % uVar20) * 10;
        uVar12 = uVar7 / uVar20;
        uVar8 = (uint)uVar12;
        uVar7 = ((int)uVar19 >> 1) + (uVar7 % uVar6) * 2;
        uVar19 = uVar19 + uVar7;
        if (uVar7 < uVar6) {
          uVar19 = (uint)(uVar19 != 0);
        }
        else {
          uVar19 = (uVar6 < uVar19) + 2;
        }
        uVar16 = uVar16 + 1;
        if (uVar17 < uVar20) break;
        uVar18 = uVar17;
        if (uVar16 == 8) goto LAB_004028d1;
      }
      if (9 < uVar17) goto LAB_004028d1;
      if (uVar14 == 1) {
        bVar24 = 2 < (uVar8 & 1) + uVar19;
      }
      else {
        bVar24 = uVar19 != 0 && uVar14 == 0;
      }
      if (bVar24) {
        uVar8 = uVar8 + 1;
        if (uVar8 != 10) goto LAB_00402d88;
        uVar17 = uVar17 + 1;
        if (uVar17 == 10) goto LAB_00402d3e;
        uVar19 = 0;
LAB_00402cf7:
        if ((param_3 & 8) != 0) goto LAB_00402d40;
        cVar4 = '0';
      }
      else {
        if (uVar8 == 0) goto LAB_00402cf7;
LAB_00402d88:
        cVar4 = (char)uVar8 + '0';
      }
      param_2[0x286] = cVar4;
      uVar12 = uVar10 & 0xffffffff;
      puVar22 = (undefined8 *)(param_2 + (0x286 - uVar10));
      if (uVar15 < 8) {
        if ((uVar10 & 4) == 0) {
          if (((int)uVar12 != 0) &&
             (*(undefined *)puVar22 = *(undefined *)puVar21, (uVar10 & 2) != 0)) {
            *(undefined2 *)((long)puVar22 + (uVar12 - 2)) =
                 *(undefined2 *)((long)puVar21 + (uVar12 - 2));
          }
        }
        else {
          *(undefined4 *)puVar22 = *(undefined4 *)puVar21;
          *(undefined4 *)((long)puVar22 + (uVar12 - 4)) =
               *(undefined4 *)((long)puVar21 + (uVar12 - 4));
        }
      }
      else {
        *puVar22 = *puVar21;
        *(undefined8 *)((long)puVar22 + ((uVar10 & 0xffffffff) - 8)) =
             *(undefined8 *)((long)puVar21 + ((uVar10 & 0xffffffff) - 8));
        lVar13 = (long)puVar22 - ((ulong)(puVar22 + 1) & 0xfffffffffffffff8);
        uVar8 = (int)lVar13 + uVar15 & 0xfffffff8;
        if (7 < uVar8) {
          uVar19 = 0;
          do {
            uVar12 = (ulong)uVar19;
            uVar19 = uVar19 + 8;
            *(undefined8 *)(((ulong)(puVar22 + 1) & 0xfffffffffffffff8) + uVar12) =
                 *(undefined8 *)((long)puVar21 + (uVar12 - lVar13));
          } while (uVar19 < uVar8);
        }
      }
LAB_00402d3e:
      uVar19 = 0;
LAB_00402d40:
      __dest = puVar22;
      if (uVar14 == 1) goto LAB_00402923;
      uVar8 = 0;
LAB_004028e0:
      __dest = puVar22;
      if ((uVar14 != 0) || ((int)(uVar19 + uVar8) < 1)) goto LAB_00402923;
LAB_004028f1:
      uVar17 = uVar17 + 1;
      __dest = puVar22;
      if ((((param_3 & 0x10) == 0) || (uVar6 != uVar17)) || (uVar16 == 8)) goto LAB_00402923;
      uVar16 = uVar16 + 1;
      if ((param_3 & 8) == 0) {
        *(undefined *)((long)puVar22 + -1) = 0x30;
        puVar22 = (undefined8 *)((long)puVar22 + ~uVar10);
        uVar17 = uVar10 & 0xffffffff;
        if (uVar15 < 8) {
          if ((uVar10 & 4) == 0) {
            if (((int)uVar17 != 0) &&
               (*(undefined *)puVar22 = *(undefined *)puVar21, (uVar10 & 2) != 0)) {
              *(undefined2 *)((long)puVar22 + (uVar17 - 2)) =
                   *(undefined2 *)((long)puVar21 + (uVar17 - 2));
            }
          }
          else {
            *(undefined4 *)puVar22 = *(undefined4 *)puVar21;
            *(undefined4 *)((long)puVar22 + (uVar17 - 4)) =
                 *(undefined4 *)((long)puVar21 + (uVar17 - 4));
          }
        }
        else {
          *puVar22 = *puVar21;
          *(undefined8 *)((long)puVar22 + ((uVar10 & 0xffffffff) - 8)) =
               *(undefined8 *)((long)puVar21 + ((uVar10 & 0xffffffff) - 8));
          lVar13 = (long)puVar22 - ((ulong)(puVar22 + 1) & 0xfffffffffffffff8);
          uVar14 = (int)lVar13 + uVar15 & 0xfffffff8;
          if (7 < uVar14) {
            uVar15 = 0;
            do {
              uVar10 = (ulong)uVar15;
              uVar15 = uVar15 + 8;
              *(undefined8 *)(((ulong)(puVar22 + 1) & 0xfffffffffffffff8) + uVar10) =
                   *(undefined8 *)((long)puVar21 + (uVar10 - lVar13));
            } while (uVar15 < uVar14);
          }
        }
      }
      *(undefined *)((long)puVar22 + -1) = 0x31;
      __dest = puVar22;
      puVar22 = (undefined8 *)((long)puVar22 + -1);
    }
  }
  if ((param_3 & 4) != 0) {
    sVar11 = strlen(__s);
    uVar17 = (long)__dest - (long)puVar22;
    __memcpy_chk(local_68,puVar22,uVar17,0x29);
    uVar10 = 0xffffffffffffffff;
    while( true ) {
      bVar1 = *pbVar23;
      if (bVar1 != 0) {
        uVar10 = (ulong)bVar1;
        if (0x7e < bVar1) {
          uVar10 = uVar17;
        }
        pbVar23 = pbVar23 + 1;
      }
      if (uVar17 < uVar10) break;
      puVar22 = (undefined8 *)((long)__dest - uVar10);
      uVar17 = uVar17 - uVar10;
      memcpy(puVar22,local_68 + uVar17,uVar10);
      if (uVar17 == 0) goto LAB_004027d5;
      __dest = (undefined8 *)((long)puVar22 - sVar11);
      memcpy(__dest,__s,sVar11);
    }
    puVar22 = (undefined8 *)((long)__dest - uVar17);
    memcpy(puVar22,local_68,uVar17);
  }
LAB_004027d5:
  if ((param_3 & 0x80) == 0) goto LAB_004027f8;
  if (uVar16 == 0xffffffff) {
    if (param_5 < 2) {
      uVar16 = 0;
      goto LAB_004027e5;
    }
    uVar16 = 1;
    uVar10 = 1;
    do {
      uVar10 = uVar10 * uVar6;
      if (param_5 <= uVar10) break;
      uVar16 = uVar16 + 1;
    } while (uVar16 != 8);
    if ((param_3 & 0x40) != 0) goto LAB_00402a61;
LAB_00402a80:
    if ((uVar5 == 0) && (uVar16 == 1)) {
      *(undefined *)local_a8 = 0x6b;
      puVar21 = (undefined8 *)((long)local_a8 + 1);
      if ((param_3 & 0x100) == 0) {
LAB_00402cb3:
        local_a8 = (undefined8 *)((long)local_a8 + 1);
        goto LAB_004027f8;
      }
    }
    else {
      *(undefined *)local_a8 = (&UNK_00407898)[(int)uVar16];
      if ((param_3 & 0x100) == 0) goto LAB_00402cb3;
      puVar21 = (undefined8 *)((long)local_a8 + 1);
      if (uVar5 != 0) {
        *(undefined *)((long)local_a8 + 1) = 0x69;
        puVar21 = (undefined8 *)((long)local_a8 + 2);
      }
    }
  }
  else {
LAB_004027e5:
    if ((param_3 & 0x100 | uVar16) == 0) goto LAB_004027f8;
    if ((param_3 & 0x40) != 0) {
LAB_00402a61:
      local_a8 = (undefined8 *)(param_2 + 0x288);
      param_2[0x287] = ' ';
    }
    if (uVar16 != 0) goto LAB_00402a80;
    puVar21 = local_a8;
    if ((param_3 & 0x100) == 0) goto LAB_004027f8;
  }
  local_a8 = (undefined8 *)((long)puVar21 + 1);
  *(undefined *)puVar21 = 0x42;
LAB_004027f8:
  *(undefined *)local_a8 = 0;
  return puVar22;
}


char * FUN_00402ef0(char *param_1,uint *param_2,long *param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  long lVar4;
  uint uVar5;
  char *local_30 [2];
  
  if (((param_1 == (char *)0x0) && (param_1 = getenv("BLOCK_SIZE"), param_1 == (char *)0x0)) &&
     (param_1 = getenv("BLOCKSIZE"), param_1 == (char *)0x0)) {
    pcVar3 = getenv("POSIXLY_CORRECT");
    if (pcVar3 == (char *)0x0) {
      *param_3 = 0x400;
      *param_2 = 0;
    }
    else {
      *param_3 = 0x200;
      pcVar3 = (char *)0x0;
      *param_2 = 0;
    }
  }
  else {
    uVar5 = 0;
    if (*param_1 == '\'') {
      param_1 = param_1 + 1;
      uVar5 = 4;
    }
    iVar2 = FUN_00406940(param_1,&PTR_s_human_readable_00407880,&DAT_00407870,4);
    if (iVar2 < 0) {
      pcVar3 = (char *)FUN_00405580(param_1,local_30,0,param_3,"eEgGkKmMpPtTyYzZ0");
      if ((int)pcVar3 == 0) {
        cVar1 = *param_1;
        while (9 < (byte)(cVar1 - 0x30U)) {
          if (param_1 == local_30[0]) {
            if (local_30[0][-1] == 'B') {
              uVar5 = uVar5 | 0x180;
              if (local_30[0][-2] != 'i') break;
            }
            else {
              uVar5 = uVar5 | 0x80;
            }
            uVar5 = uVar5 | 0x20;
            break;
          }
          param_1 = param_1 + 1;
          cVar1 = *param_1;
        }
        lVar4 = *param_3;
        *param_2 = uVar5;
      }
      else {
        *param_2 = 0;
        lVar4 = *param_3;
      }
      if (lVar4 == 0) {
        pcVar3 = getenv("POSIXLY_CORRECT");
        *param_3 = (ulong)(-(uint)(pcVar3 == (char *)0x0) & 0x200) + 0x200;
        return (char *)0x4;
      }
    }
    else {
      *param_3 = 1;
      pcVar3 = (char *)0x0;
      *param_2 = uVar5 | *(uint *)(&DAT_00407870 + (long)iVar2 * 4);
    }
  }
  return pcVar3;
}


void FUN_004030b0(byte *param_1)

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
        pbVar6 = &DAT_00407900;
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
  DAT_0060b2f0 = param_1;
  program_invocation_name = param_1;
  return;
}


char * FUN_00403150(char *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  byte *pbVar3;
  
  pcVar2 = (char *)dcgettext(0,param_1,5);
  if (param_1 == pcVar2) {
    pbVar3 = (byte *)FUN_00406d80();
    if ((*pbVar3 & 0xdf) == 0x55) {
      if (((((pbVar3[1] & 0xdf) != 0x54) || ((pbVar3[2] & 0xdf) != 0x46)) || (pbVar3[3] != 0x2d)) ||
         ((pbVar3[4] != 0x38 || (pbVar3[5] != 0)))) {
LAB_00403228:
        pcVar2 = "\"";
        if (param_2 != 9) {
          pcVar2 = "\'";
        }
        return pcVar2;
      }
      cVar1 = *pcVar2;
      pcVar2 = &DAT_00407911;
      if (cVar1 != '`') {
        pcVar2 = &DAT_00407906;
      }
    }
    else {
      if (((((*pbVar3 & 0xdf) != 0x47) || ((pbVar3[1] & 0xdf) != 0x42)) || (pbVar3[2] != 0x31)) ||
         (((pbVar3[3] != 0x38 || (pbVar3[4] != 0x30)) ||
          ((pbVar3[5] != 0x33 || ((pbVar3[6] != 0x30 || (pbVar3[7] != 0)))))))) goto LAB_00403228;
      cVar1 = *pcVar2;
      pcVar2 = &DAT_0040790d;
      if (cVar1 != '`') {
        pcVar2 = &DAT_0040790a;
      }
    }
  }
  return pcVar2;
}


ulong FUN_00403250(undefined *param_1,ulong param_2,char *param_3,ulong param_4,int param_5,
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
LAB_00403ea1:
    if (param_2 != 0) {
      bVar3 = false;
      local_5b = false;
      bVar2 = true;
      local_70 = 0;
      goto LAB_00403ad6;
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
      goto LAB_00403ea1;
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
      param_8 = (char *)FUN_00403150(&DAT_00407915,param_5);
      param_9 = (char *)FUN_00403150(&DAT_00408e6f);
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
LAB_004032e8:
  uVar22 = 0;
  bVar5 = local_5b;
LAB_004032f8:
  bVar23 = param_4 != uVar22;
  if (param_4 == 0xffffffffffffffff) {
    bVar23 = param_3[uVar22] != '\0';
  }
  bVar26 = bVar6;
  if (!bVar23) goto LAB_00403a78;
  bVar20 = (bool)(param_5 != 2 & bVar6);
  __s1 = (byte *)(param_3 + uVar22);
  uVar16 = uVar15;
  bVar4 = bVar3;
  if (bVar20) {
    if (local_a0 == 0) {
LAB_004039f0:
      uVar19 = (ulong)*__s1;
      switch(uVar19) {
      case 0:
        goto switchD_00403a02_caseD_0;
      default:
        bVar20 = false;
        goto switchD_0040386e_caseD_1;
      case 7:
        bVar17 = 0x61;
        goto LAB_00403705;
      case 8:
        bVar17 = 0x62;
        break;
      case 9:
switchD_00403a02_caseD_9:
        bVar17 = 0x74;
        break;
      case 10:
switchD_00403a02_caseD_a:
        bVar17 = 0x6e;
        break;
      case 0xb:
switchD_00403a02_caseD_b:
        bVar17 = 0x76;
        goto LAB_00403705;
      case 0xc:
switchD_00403a02_caseD_c:
        bVar17 = 0x66;
LAB_00403705:
        if (local_5c) {
          bVar25 = false;
          goto LAB_00403658;
        }
LAB_00403710:
        bVar23 = false;
        goto LAB_004034cb;
      case 0xd:
        bVar20 = false;
switchD_004033e8_caseD_d:
        bVar25 = param_5 == 2;
        uVar19 = 0xd;
        bVar13 = 0x72;
        goto LAB_00403620;
      case 0x20:
        bVar25 = false;
LAB_00403a4a:
        uVar19 = 0x20;
        goto LAB_00403a12;
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
switchD_004033e8_caseD_21:
        bVar25 = false;
        goto LAB_0040362b;
      case 0x23:
      case 0x7e:
        bVar26 = false;
LAB_00403a2a:
        if (uVar22 == 0) {
          bVar25 = false;
          bVar23 = bVar20;
          bVar20 = bVar26;
          goto LAB_00403438;
        }
        bVar23 = false;
        goto LAB_0040344f;
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
LAB_00403a12:
        bVar24 = false;
        bVar23 = bVar20;
        bVar20 = bVar25;
        goto LAB_00403451;
      case 0x27:
        bVar20 = false;
        goto switchD_0040386e_caseD_27;
      case 0x3f:
        bVar20 = false;
        goto switchD_0040386e_caseD_3f;
      case 0x5c:
        bVar20 = false;
        goto switchD_004033e8_caseD_5c;
      case 0x7b:
      case 0x7d:
        bVar20 = false;
        goto switchD_0040386e_caseD_7b;
      }
      bVar25 = false;
      bVar23 = false;
      goto joined_r0x00403647;
    }
    if ((param_4 == 0xffffffffffffffff) && (1 < local_a0)) {
      param_4 = strlen(param_3);
    }
    if ((param_4 < uVar22 + local_a0) || (iVar7 = memcmp(__s1,local_78,local_a0), iVar7 != 0))
    goto LAB_004039f0;
    if (!local_5c) {
      uVar19 = (ulong)*__s1;
      bVar25 = bVar20;
      switch(uVar19) {
      case 0:
        goto switchD_004033e8_caseD_0;
      default:
        goto switchD_0040386e_caseD_1;
      case 7:
        bVar17 = 0x61;
        goto LAB_00403710;
      case 8:
        bVar25 = false;
        bVar23 = false;
        bVar17 = 0x62;
        break;
      case 9:
        goto switchD_00403a02_caseD_9;
      case 10:
        goto switchD_00403a02_caseD_a;
      case 0xb:
        goto switchD_00403a02_caseD_b;
      case 0xc:
        goto switchD_00403a02_caseD_c;
      case 0xd:
        goto switchD_004033e8_caseD_d;
      case 0x20:
        goto LAB_00403a4a;
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
        goto switchD_004033e8_caseD_21;
      case 0x23:
      case 0x7e:
        bVar26 = bVar20;
        goto LAB_00403a2a;
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
        goto LAB_00403a12;
      case 0x27:
        goto switchD_0040386e_caseD_27;
      case 0x3f:
        goto switchD_0040386e_caseD_3f;
      case 0x5c:
        goto switchD_004033e8_caseD_5c;
      case 0x7b:
      case 0x7d:
        goto switchD_0040386e_caseD_7b;
      }
      goto LAB_00403492;
    }
    goto LAB_0040366a;
  }
  uVar19 = (ulong)*__s1;
  switch(uVar19) {
  case 0:
    if (bVar6) {
switchD_00403a02_caseD_0:
      if (!local_5c) {
        bVar20 = false;
switchD_004033e8_caseD_0:
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
            goto LAB_00403548;
          }
LAB_0040378a:
          param_1[uVar16] = 0x5c;
          uVar15 = uVar16;
        }
        else if (uVar15 < uVar9) goto LAB_0040378a;
        uVar16 = uVar15 + 1;
        bVar24 = bVar23;
        if (param_5 == 2) {
          bVar17 = 0x30;
          bVar23 = false;
          bVar4 = bVar3;
          goto LAB_00403548;
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
LAB_004037c9:
        bVar17 = (byte)uVar19;
        bVar23 = false;
        uVar15 = uVar16;
        bVar4 = bVar3;
        if ((bool)(bVar6 ^ 1U | bVar26)) goto LAB_00403548;
        goto LAB_00403451;
      }
      bVar26 = param_5 == 2;
      goto LAB_0040365c;
    }
    if ((param_6 & 1) == 0) {
      bVar25 = param_5 == 2;
      uVar19 = 0;
      bVar23 = false;
      bVar20 = false;
      goto LAB_00403438;
    }
    uVar22 = uVar22 + 1;
    goto LAB_004032f8;
  default:
switchD_0040386e_caseD_1:
    bVar25 = bVar6;
    if (sVar8 != 1) {
      local_40[0] = (mbstate_t)0x0;
      if (param_4 == 0xffffffffffffffff) {
        param_4 = strlen(param_3);
      }
      uVar21 = 0;
      do {
        uVar1 = uVar22 + uVar21;
        lVar11 = FUN_004068b0(&local_44,param_3 + uVar1,param_4 - uVar1,local_40);
        if (lVar11 == 0) break;
        if (lVar11 == -1) {
          bVar23 = false;
          goto LAB_0040417a;
        }
        if (lVar11 == -2) {
          if ((param_4 <= uVar1) || (param_3[uVar1] == '\0')) goto LAB_004042b7;
          goto LAB_004042a7;
        }
        if (((param_5 == 2) && (local_5c)) && (lVar11 != 1)) {
          pcVar12 = param_3 + uVar1 + 1;
          do {
            if (((byte)(*pcVar12 + 0xa5U) < 0x22) &&
               ((1L << (*pcVar12 + 0xa5U & 0x3f) & 0x20000002bU) != 0)) {
              param_5 = 2;
              goto LAB_0040365c;
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
      goto LAB_0040417a;
    }
    ppuVar10 = __ctype_b_loc();
    uVar21 = 1;
    bVar25 = ((*ppuVar10)[uVar19] & 0x4000) == 0;
    bVar23 = !bVar25;
    bVar25 = (bool)(bVar25 & bVar6);
    goto LAB_00403844;
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
    goto LAB_00403882;
  case 10:
    uVar19 = 10;
    bVar13 = 0x6e;
    goto LAB_00403882;
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
LAB_00403882:
    bVar25 = param_5 == 2;
    bVar20 = (bool)(local_5c & bVar25);
    if (bVar20) {
LAB_0040389a:
      param_5 = 2;
      goto LAB_0040365c;
    }
    break;
  case 0x20:
    uVar19 = 0x20;
    goto LAB_00403426;
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
LAB_00403426:
    bVar25 = param_5 == 2;
    if ((local_5c) && (bVar25)) goto LAB_0040389a;
    goto LAB_00403438;
  case 0x23:
  case 0x7e:
LAB_0040341d:
    bVar25 = param_5 == 2;
    if (uVar22 == 0) goto LAB_00403426;
    goto LAB_0040362b;
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
    goto switchD_0040386e_caseD_25;
  case 0x27:
switchD_0040386e_caseD_27:
    bVar5 = bVar23;
    if (param_5 != 2) {
      bVar25 = false;
      uVar19 = 0x27;
      goto LAB_00403438;
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
      goto LAB_00403548;
    }
    goto LAB_0040365c;
  case 0x3f:
switchD_0040386e_caseD_3f:
    if (param_5 == 2) {
      if (!local_5c) {
        bVar17 = 0x3f;
        bVar24 = false;
        bVar23 = false;
        goto LAB_00403548;
      }
      goto LAB_0040365c;
    }
    if (param_5 != 5) {
      bVar25 = param_5 == 2;
      uVar19 = 0x3f;
      bVar23 = false;
      goto LAB_00403438;
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
        goto LAB_004037c9;
      }
      goto LAB_0040366a;
    }
    bVar25 = false;
    uVar19 = 0x3f;
    bVar23 = false;
    goto LAB_00403438;
  case 0x5c:
    if (param_5 != 2) {
switchD_004033e8_caseD_5c:
      uVar19 = 0x5c;
      bVar17 = 0x5c;
      bVar13 = 0x5c;
      bVar25 = (bool)(bVar6 & local_5c & local_a0 != 0);
      if (!bVar25) break;
      uVar22 = uVar22 + 1;
      bVar23 = false;
      goto LAB_00403564;
    }
    if (local_5c) goto LAB_0040365c;
    uVar22 = uVar22 + 1;
    bVar23 = false;
    bVar17 = 0x5c;
    goto LAB_00403564;
  case 0x7b:
  case 0x7d:
switchD_0040386e_caseD_7b:
    bVar24 = param_4 != 1;
    if (param_4 == 0xffffffffffffffff) {
      bVar24 = param_3[1] != '\0';
    }
    bVar25 = param_5 == 2;
    if (!bVar24) goto LAB_0040341d;
    goto LAB_0040362b;
  }
LAB_00403620:
  if (!bVar6) {
LAB_0040362b:
    bVar23 = false;
    goto LAB_00403438;
  }
  bVar23 = false;
  bVar17 = bVar13;
  goto joined_r0x00403647;
LAB_00403a78:
  if ((uVar15 == 0) && ((bool)(local_5c & param_5 == 2))) {
    param_5 = 2;
LAB_0040365c:
    if (bVar26) {
      param_5 = 4;
    }
LAB_0040366a:
    uVar9 = FUN_00403250(param_1,uVar9,param_3,param_4,param_5,param_6 & 0xfffffffd,0,param_8,
                         param_9);
    return uVar9;
  }
  bVar26 = (bool)(param_5 == 2 & (local_5c ^ 1U));
  bVar23 = (bool)(local_5c ^ 1U);
  if ((!bVar26) || (bVar23 = bVar26, !bVar5)) {
LAB_0040434d:
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
    uVar9 = FUN_00403250(param_1,local_70,param_3,param_4,5,param_6,param_7,param_8,param_9);
    return uVar9;
  }
  local_5b = uVar9 == 0 && local_70 != 0;
  param_2 = local_70;
  bVar23 = bVar5;
  if (uVar9 != 0 || local_70 == 0) goto LAB_0040434d;
LAB_00403ad6:
  *param_1 = 0x27;
  param_5 = 2;
  uVar15 = 1;
  local_78 = "\'";
  local_a0 = 1;
  local_5c = false;
  uVar9 = param_2;
  goto LAB_004032e8;
  while (__s1[uVar21] != 0) {
LAB_004042a7:
    uVar21 = uVar21 + 1;
    if (param_4 <= uVar22 + uVar21) break;
  }
LAB_004042b7:
  bVar23 = false;
LAB_0040417a:
  if (1 < uVar21) {
LAB_00403d3e:
    bVar26 = false;
    uVar21 = uVar21 + uVar22;
    uVar16 = uVar22;
    do {
      bVar17 = (byte)uVar19;
      if (bVar25) {
        bVar26 = param_5 == 2;
        if (local_5c) goto LAB_0040365c;
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
        if (uVar21 <= uVar22) goto LAB_004034dd;
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
        if (uVar21 <= uVar22) goto LAB_00403564;
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
LAB_00403844:
  if (bVar25) {
    bVar23 = false;
    bVar25 = bVar6;
    goto LAB_00403d3e;
  }
switchD_0040386e_caseD_25:
  bVar25 = param_5 == 2;
LAB_00403438:
  bVar17 = (byte)uVar19;
  bVar24 = (bool)((bVar6 ^ 1U | bVar25) ^ 1 | local_5c);
  bVar26 = bVar20;
  if (bVar24) {
LAB_0040344f:
    bVar24 = false;
    bVar20 = bVar26;
LAB_00403451:
    bVar17 = (byte)uVar19;
    uVar16 = uVar15;
    bVar4 = bVar3;
    if ((param_7 == 0) || ((*(uint *)(param_7 + (uVar19 >> 5) * 4) >> (bVar17 & 0x1f) & 1) == 0))
    goto LAB_00403548;
    bVar25 = param_5 == 2;
  }
  else {
LAB_00403548:
    bVar25 = param_5 == 2;
    uVar15 = uVar16;
    bVar3 = bVar4;
    if (!bVar20) {
      uVar22 = uVar22 + 1;
      bVar3 = (bool)((bVar24 ^ 1U) & bVar4);
LAB_00403564:
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
      goto LAB_004034dd;
    }
  }
joined_r0x00403647:
  if (local_5c) {
LAB_00403658:
    bVar26 = (bool)(bVar6 & bVar25);
    goto LAB_0040365c;
  }
LAB_00403492:
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
LAB_004034cb:
  if (uVar15 < uVar9) {
    param_1[uVar15] = 0x5c;
  }
  uVar15 = uVar15 + 1;
  uVar22 = uVar22 + 1;
  bVar4 = bVar3;
LAB_004034dd:
  bVar3 = bVar4;
  if (uVar15 < uVar9) {
    param_1[uVar15] = bVar17;
  }
  uVar15 = uVar15 + 1;
  if (!bVar23) {
    bVar2 = false;
  }
  goto LAB_004032f8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00404480(int param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

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
  puVar8 = (undefined4 *)PTR_DAT_0060b258;
  if (DAT_0060b270 <= param_1) {
    if (param_1 == 0x7fffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_00405540();
    }
    if (PTR_DAT_0060b258 == &DAT_0060b260) {
      puVar8 = (undefined4 *)FUN_00405350(0);
      uVar6 = PTR_DAT_0060b268._4_4_;
      uVar5 = PTR_DAT_0060b268._0_4_;
      uVar3 = _UNK_0060b264;
      PTR_DAT_0060b258 = (undefined *)puVar8;
      *puVar8 = _DAT_0060b260;
      puVar8[1] = uVar3;
      puVar8[2] = uVar5;
      puVar8[3] = uVar6;
    }
    else {
      puVar8 = (undefined4 *)FUN_00405350(PTR_DAT_0060b258);
      PTR_DAT_0060b258 = (undefined *)puVar8;
    }
    memset(puVar8 + (long)DAT_0060b270 * 4,0,(long)((param_1 + 1) - DAT_0060b270) << 4);
    DAT_0060b270 = param_1 + 1;
  }
  uVar2 = param_4[1];
  puVar10 = (ulong *)(puVar8 + (long)param_1 * 4);
  uVar4 = *puVar10;
  __ptr = (undefined *)puVar10[1];
  uVar9 = FUN_00403250(__ptr,uVar4,param_2,param_3,*param_4,uVar2 | 1,param_4 + 2,
                       *(undefined8 *)(param_4 + 10),*(undefined8 *)(param_4 + 0xc));
  if (uVar4 <= uVar9) {
    uVar9 = uVar9 + 1;
    *puVar10 = uVar9;
    if (__ptr != &DAT_0060b300) {
      free(__ptr);
    }
    __ptr = (undefined *)FUN_004052f0(uVar9);
    uVar3 = *param_4;
    puVar10[1] = (ulong)__ptr;
    FUN_00403250(__ptr,uVar9,param_2,param_3,uVar3,uVar2 | 1,param_4 + 2,
                 *(undefined8 *)(param_4 + 10),*(undefined8 *)(param_4 + 0xc));
  }
  *piVar7 = iVar1;
  return __ptr;
}


void FUN_00404620(undefined *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_0060b400;
  }
  FUN_004054f0(param_1,0x38);
  *piVar2 = iVar1;
  return;
}


undefined4 FUN_00404660(undefined4 *param_1)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)&DAT_0060b400;
  }
  return *param_1;
}


void FUN_00404670(undefined4 *param_1,undefined4 param_2)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)&DAT_0060b400;
  }
  *param_1 = param_2;
  return;
}


uint FUN_00404680(undefined *param_1,byte param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_0060b400;
  }
  uVar1 = *(uint *)(param_1 + (ulong)(param_2 >> 5) * 4 + 8);
  uVar2 = uVar1 >> (param_2 & 0x1f);
  *(uint *)(param_1 + (ulong)(param_2 >> 5) * 4 + 8) =
       ((param_3 ^ uVar2) & 1) << (param_2 & 0x1f) ^ uVar1;
  return uVar2 & 1;
}


undefined4 FUN_004046c0(undefined *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_0060b400;
  }
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_1 + 4) = param_2;
  return uVar1;
}


void FUN_004046e0(undefined4 *param_1,long param_2,long param_3)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)&DAT_0060b400;
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


void FUN_00404710(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 *param_5)

{
  int iVar1;
  int *piVar2;
  
  if (param_5 == (undefined4 *)0x0) {
    param_5 = (undefined4 *)&DAT_0060b400;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  FUN_00403250(param_1,param_2,param_3,param_4,*param_5,param_5[1],param_5 + 2,
               *(undefined8 *)(param_5 + 10),*(undefined8 *)(param_5 + 0xc));
  *piVar2 = iVar1;
  return;
}


undefined8 FUN_00404790(undefined8 param_1,undefined8 param_2,long *param_3,undefined4 *param_4)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  
  if (param_4 == (undefined4 *)0x0) {
    param_4 = (undefined4 *)&DAT_0060b400;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  uVar5 = (uint)(param_3 == (long *)0x0) | param_4[1];
  lVar3 = FUN_00403250(0,0,param_1,param_2,*param_4,uVar5,param_4 + 2,*(undefined8 *)(param_4 + 10),
                       *(undefined8 *)(param_4 + 0xc));
  uVar4 = FUN_004052f0(lVar3 + 1);
  FUN_00403250(uVar4,lVar3 + 1,param_1,param_2,*param_4,uVar5,param_4 + 2,
               *(undefined8 *)(param_4 + 10),*(undefined8 *)(param_4 + 0xc));
  *piVar2 = iVar1;
  if (param_3 != (long *)0x0) {
    *param_3 = lVar3;
  }
  return uVar4;
}


void FUN_00404880(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00404790(param_1,param_2,0,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404890(void)

{
  void **ppvVar1;
  void *__ptr;
  undefined *__ptr_00;
  void **ppvVar2;
  
  __ptr_00 = PTR_DAT_0060b258;
  if (1 < DAT_0060b270) {
    ppvVar2 = (void **)(PTR_DAT_0060b258 + 0x18);
    ppvVar1 = (void **)(PTR_DAT_0060b258 + (ulong)(DAT_0060b270 - 2) * 0x10 + 0x28);
    do {
      __ptr = *ppvVar2;
      ppvVar2 = ppvVar2 + 2;
      free(__ptr);
    } while (ppvVar2 != ppvVar1);
  }
  if (*(undefined **)(__ptr_00 + 8) != &DAT_0060b300) {
    free(*(undefined **)(__ptr_00 + 8));
    _DAT_0060b260 = 0x100;
    PTR_DAT_0060b268 = &DAT_0060b300;
  }
  if (__ptr_00 != &DAT_0060b260) {
    free(__ptr_00);
    PTR_DAT_0060b258 = &DAT_0060b260;
  }
  DAT_0060b270 = 1;
  return;
}


void FUN_00404930(undefined8 param_1,undefined8 param_2)

{
  FUN_00404480(param_1,param_2,0xffffffffffffffff,&DAT_0060b400);
  return;
}


void FUN_00404950(void)

{
  FUN_00404480();
  return;
}


void FUN_00404960(undefined8 param_1)

{
  FUN_00404480(0,param_1,0xffffffffffffffff,&DAT_0060b400);
  return;
}


void FUN_00404980(undefined8 param_1,undefined8 param_2)

{
  FUN_00404480(0,param_1,param_2,&DAT_0060b400);
  return;
}


void FUN_004049a0(undefined8 param_1,int param_2,undefined8 param_3)

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
    FUN_00404480(param_1,param_3,0xffffffffffffffff,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00404a10(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

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
    FUN_00404480(param_1,param_3,param_4,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00404a80(undefined4 param_1,undefined8 param_2)

{
  FUN_004049a0(0,param_1,param_2);
  return;
}


void FUN_00404a90(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00404a10(0,param_1,param_2,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404aa0(undefined8 param_1,undefined8 param_2,byte param_3)

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
  
  local_18 = DAT_0060b430;
  local_48 = _DAT_0060b400;
  uStack_40 = uRam000000000060b408;
  local_38 = _DAT_0060b410;
  uStack_30 = uRam000000000060b418;
  puVar1 = (uint *)((long)&uStack_40 + (ulong)(param_3 >> 5) * 4);
  local_28 = _DAT_0060b420;
  uStack_20 = uRam000000000060b428;
  uVar2 = *puVar1;
  *puVar1 = (~(uVar2 >> (param_3 & 0x1f)) & 1) << (param_3 & 0x1f) ^ uVar2;
  FUN_00404480(0,param_1,param_2,&local_48);
  return;
}


void FUN_00404b10(undefined8 param_1,char param_2)

{
  FUN_00404aa0(param_1,0xffffffffffffffff,(int)param_2);
  return;
}


void FUN_00404b20(undefined8 param_1)

{
  FUN_00404aa0(param_1,0xffffffffffffffff,0x3a);
  return;
}


void FUN_00404b40(undefined8 param_1,undefined8 param_2)

{
  FUN_00404aa0(param_1,param_2,0x3a);
  return;
}


void FUN_00404b50(undefined8 param_1,int param_2,undefined8 param_3)

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
    FUN_00404480(param_1,param_3,0xffffffffffffffff,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404bc0(undefined8 param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5
                 )

{
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  long lStack_20;
  long local_18;
  
  uStack_40 = uRam000000000060b408;
  local_38 = _DAT_0060b410;
  uStack_30 = uRam000000000060b418;
  local_28 = _DAT_0060b420;
  lStack_20 = uRam000000000060b428;
  local_18 = DAT_0060b430;
  local_48 = CONCAT44((int)((ulong)_DAT_0060b400 >> 0x20),10);
  if ((param_2 != 0) && (param_3 != 0)) {
    lStack_20 = param_2;
    local_18 = param_3;
    FUN_00404480(param_1,param_4,param_5,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00404c30(void)

{
  FUN_00404bc0();
  return;
}


void FUN_00404c40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00404bc0(0,param_1,param_2,param_3,0xffffffffffffffff);
  return;
}


void FUN_00404c60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00404bc0(0,param_1,param_2,param_3,param_4);
  return;
}


void FUN_00404c80(void)

{
  FUN_00404480();
  return;
}


void FUN_00404c90(undefined8 param_1,undefined8 param_2)

{
  FUN_00404480(0,param_1,param_2,&DAT_0060b220);
  return;
}


void FUN_00404cb0(undefined8 param_1,undefined8 param_2)

{
  FUN_00404480(param_1,param_2,0xffffffffffffffff,&DAT_0060b220);
  return;
}


void FUN_00404cd0(undefined8 param_1)

{
  FUN_00404480(0,param_1,0xffffffffffffffff,&DAT_0060b220);
  return;
}


ssize_t FUN_00404cf0(int param_1,void *param_2,ulong param_3)

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


undefined8
FUN_00404d50(FILE *param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5,
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
  uVar1 = dcgettext(0,&DAT_0040866b,5);
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
    goto LAB_00404fcc;
  case 5:
    uVar1 = param_5[3];
    uVar4 = param_5[2];
    uVar5 = param_5[1];
    uVar6 = *param_5;
    uVar7 = dcgettext(0,"Written by %s, %s, %s,\n%s, and %s.\n",5);
LAB_00404fcc:
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
    goto LAB_00405069;
  case 7:
    uVar1 = param_5[2];
    uVar4 = param_5[5];
    uVar5 = param_5[4];
    uVar6 = param_5[3];
    local_58 = param_5[1];
    uVar7 = *param_5;
    uVar3 = dcgettext(0,"Written by %s, %s, %s,\n%s, %s, %s, and %s.\n",5);
LAB_00405069:
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
    goto LAB_00404e4a;
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
LAB_00404e4a:
  uVar1 = __fprintf_chk(param_1,1,uVar3,uVar7,local_50,local_58,uVar6,uVar5,uVar4,uVar1,local_48);
  return uVar1;
}


void FUN_00405130(void)

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
  FUN_00404d50();
  return;
}


void FUN_00405150(void)

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
  FUN_00404d50();
  return;
}


void FUN_004051b0(void)

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
  FUN_00404d50();
  return;
}


void FUN_00405270(void)

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


void FUN_004052f0(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00405540();
  }
  return;
}


void FUN_00405310(ulong param_1,ulong param_2)

{
  if ((-1 < SUB168(ZEXT816(param_1) * ZEXT816(param_2),0)) &&
     (SUB168(ZEXT816(param_1) * ZEXT816(param_2) >> 0x40,0) == 0)) {
    FUN_004052f0();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00405540();
}


void thunk_FUN_004052f0(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00405540();
  }
  return;
}


void * FUN_00405350(void *param_1,size_t param_2)

{
  void *pvVar1;
  
  if ((param_2 == 0) && (param_1 != (void *)0x0)) {
    free(param_1);
    return (void *)0x0;
  }
  pvVar1 = realloc(param_1,param_2);
  if ((pvVar1 == (void *)0x0) && (param_2 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00405540();
  }
  return pvVar1;
}


void FUN_00405390(undefined8 param_1,ulong param_2,ulong param_3)

{
  if ((-1 < SUB168(ZEXT816(param_2) * ZEXT816(param_3),0)) &&
     (SUB168(ZEXT816(param_2) * ZEXT816(param_3) >> 0x40,0) == 0)) {
    FUN_00405350();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00405540();
}


void FUN_004053c0(long param_1,ulong *param_2,ulong param_3)

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
    if ((SUB168(ZEXT816(uVar2) * ZEXT816(param_3),0) < 0) || (uVar3 != 0)) goto LAB_0040541b;
  }
  else {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x5555555555555554);
    uVar3 = SUB168(auVar1 % ZEXT816(param_3),0);
    if (SUB168(auVar1 / ZEXT816(param_3),0) <= uVar2) {
LAB_0040541b:
                    /* WARNING: Subroutine does not return */
      FUN_00405540(param_1,param_2,uVar3);
    }
    uVar2 = (uVar2 >> 1) + 1 + uVar2;
  }
  *param_2 = uVar2;
  FUN_00405350(param_1,uVar2 * param_3);
  return;
}


void FUN_00405450(long param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (param_1 == 0) {
    if (uVar1 == 0) {
      *param_2 = 0x80;
      FUN_00405350(0,0x80);
      return;
    }
    if ((long)uVar1 < 0) goto LAB_0040549a;
  }
  else {
    if (0x5555555555555553 < uVar1) {
LAB_0040549a:
                    /* WARNING: Subroutine does not return */
      FUN_00405540();
    }
    uVar1 = (uVar1 >> 1) + 1 + uVar1;
  }
  *param_2 = uVar1;
  FUN_00405350(param_1,uVar1);
  return;
}


void FUN_004054a0(size_t param_1)

{
  void *__s;
  
  __s = (void *)FUN_004052f0();
  memset(__s,0,param_1);
  return;
}


void FUN_004054c0(size_t param_1,ulong param_2)

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
  FUN_00405540();
}


void FUN_004054f0(void *param_1,size_t param_2)

{
  void *__dest;
  
  __dest = (void *)FUN_004052f0(param_2);
  memcpy(__dest,param_1,param_2);
  return;
}


void FUN_00405520(char *param_1)

{
  void *__dest;
  size_t sVar1;
  
  sVar1 = strlen(param_1);
  __dest = (void *)FUN_004052f0(sVar1 + 1);
  memcpy(__dest,param_1,sVar1 + 1);
  return;
}


void FUN_00405540(void)

{
  undefined8 uVar1;
  
  uVar1 = dcgettext(0,"memory exhausted",5);
  error(DAT_0060b218,0,&DAT_00408eeb,uVar1);
                    /* WARNING: Subroutine does not return */
  abort();
}


ulong FUN_00405580(byte *param_1,byte **param_2,uint param_3,ulong *param_4,char *param_5)

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
    if ((param_5 == (char *)0x0) || (bVar12 = *pbVar5, bVar12 == 0)) goto LAB_00405622;
    pcVar7 = strchr(param_5,(int)(char)bVar12);
    if (pcVar7 == (char *)0x0) goto switchD_0040570c_caseD_1;
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
        goto LAB_004056fa;
      }
      if (bVar1 != 0x42) {
                    /* WARNING: Could not recover jumptable at 0x004056e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar6 = (*(code *)(&PTR_LAB_00408a38)[bVar8])();
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
LAB_004056fa:
  iVar10 = (int)uVar11;
  switch(bVar12 - 0x42 & 0xff) {
  case 0:
    if (uVar6 >> 0x36 == 0) {
      uVar6 = uVar6 << 10;
      break;
    }
    goto LAB_00405767;
  default:
switchD_0040570c_caseD_1:
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
    goto LAB_004057f4;
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
    goto joined_r0x0040572c;
  case 0xb:
  case 0x2b:
    auVar2 = ZEXT816(uVar6) * ZEXT816((ulong)(long)iVar10);
    if (SUB168(auVar2 >> 0x40,0) != 0) goto LAB_00405767;
    auVar2 = (auVar2 & (undefined  [16])0xffffffffffffffff) * ZEXT816((ulong)(long)iVar10);
joined_r0x0040572c:
    uVar6 = SUB168(auVar2,0);
    if (SUB168(auVar2 >> 0x40,0) != 0) {
LAB_00405767:
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
    goto LAB_004057f4;
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
    goto LAB_004057f4;
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
    goto LAB_004057f4;
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
LAB_004057f4:
    uVar14 = (ulong)(uVar13 | uVar9);
    break;
  case 0x20:
    if (uVar6 >> 0x37 != 0) goto LAB_00405767;
    uVar6 = uVar6 << 9;
    break;
  case 0x21:
    break;
  case 0x35:
    if ((long)uVar6 < 0) goto LAB_00405767;
    uVar6 = uVar6 * 2;
  }
  *param_2 = pbVar5 + iVar15;
  if (pbVar5[iVar15] != 0) {
    uVar14 = (ulong)((uint)uVar14 | 2);
  }
LAB_00405622:
  *param_4 = uVar6;
  return uVar14;
}


int FUN_004059c0(FILE *param_1)

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
      if (_Var4 == -1) goto LAB_00405a27;
    }
    iVar1 = FUN_00405a40(param_1);
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
LAB_00405a27:
  iVar1 = fclose(param_1);
  return iVar1;
}


void FUN_00405a40(FILE *param_1)

{
  int iVar1;
  
  if (param_1 != (FILE *)0x0) {
    iVar1 = __freading();
    if ((iVar1 != 0) && ((param_1->_flags & 0x100U) != 0)) {
      FUN_00405a80(param_1,0,1);
      fflush(param_1);
      return;
    }
  }
  fflush(param_1);
  return;
}


ulong FUN_00405a80(FILE *param_1,__off_t param_2,int param_3)

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


void FUN_00405ae0(long param_1,int *param_2)

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
      if (iVar3 <= iVar8) goto LAB_00405b5c;
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
      if (iVar9 <= iVar3) goto LAB_00405b5c;
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
LAB_00405b5c:
  param_2[0xc] = iVar2;
  param_2[0xb] = iVar1 + (iVar2 - iVar3);
  return;
}


int FUN_00405bc0(int param_1,undefined8 *param_2,char *param_3,char **param_4,undefined4 *param_5,
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
      if ((iVar5 == 0) && (sVar7 = strlen(__s1_00), sVar7 == sVar15)) goto LAB_00405de0;
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
            if (local_70 == (char *)0x0) goto LAB_00405d20;
          }
          else if (local_70 == (char *)0x0) {
            local_70 = (char *)calloc((long)iVar5,1);
            if (local_70 == (char *)0x0) {
              bVar3 = true;
              goto LAB_00405d20;
            }
            bVar4 = true;
            local_70[(int)local_44] = '\x01';
          }
          local_70[lVar16] = '\x01';
        }
      }
LAB_00405d20:
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
              __fprintf_chk(__stream,1,&DAT_00408e69,param_9,*param_4);
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
LAB_00405de0:
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


uint FUN_004061e0(uint param_1,undefined8 *param_2,char *param_3,long param_4,undefined8 param_5,
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
LAB_0040622a:
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
          goto LAB_0040632d;
        }
        pbVar8 = *(byte **)(param_7 + 8);
      }
      param_7[10] = 0;
    }
LAB_0040632d:
    param_7[6] = 1;
    cVar2 = *param_3;
LAB_00406338:
    if (cVar2 == ':') {
      uVar3 = 0;
    }
    if (pbVar8 == (byte *)0x0) goto LAB_004062a8;
LAB_0040634c:
    if (*pbVar8 == 0) goto LAB_004062a8;
  }
  else {
    if (param_7[6] == 0) goto LAB_0040622a;
    cVar2 = *param_3;
    pbVar8 = *(byte **)(param_7 + 8);
    if ((cVar2 - 0x2bU & 0xfd) != 0) goto LAB_00406338;
    pcVar4 = param_3 + 1;
    param_3 = param_3 + 1;
    if (*pcVar4 == ':') {
      uVar3 = 0;
    }
    if (pbVar8 != (byte *)0x0) goto LAB_0040634c;
LAB_004062a8:
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
        FUN_00405ae0(param_2,param_7);
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
LAB_00406416:
      if (uVar11 != param_1) {
        *param_7 = uVar11;
      }
      return 0xffffffff;
    }
    lVar6 = 3;
    pbVar8 = (byte *)param_2[(int)uVar11];
    pbVar9 = pbVar8;
    pbVar10 = &DAT_00408e71;
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
          FUN_00405ae0(param_2,param_7);
          uVar11 = param_7[0xb];
        }
      }
      param_7[0xc] = param_1;
      *param_7 = param_1;
      goto LAB_00406416;
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
        puVar15 = &DAT_00408e71;
        goto LAB_00406575;
      }
      if ((int)param_6 != 0) {
        if (pbVar8[2] == 0) {
          pcVar4 = strchr(param_3,(int)(char)bVar14);
          param_6 = param_6 & 0xffffffff;
          if (pcVar4 != (char *)0x0) goto LAB_00406520;
        }
        *(byte **)(param_7 + 8) = pbVar8 + 1;
        uVar11 = FUN_00405bc0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar3,
                              &DAT_00408e72);
        if (uVar11 != 0xffffffff) {
          return uVar11;
        }
        pbVar8 = (byte *)param_2[(int)*param_7];
      }
    }
LAB_00406520:
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
  puVar15 = &DAT_00408e90;
LAB_00406575:
  uVar3 = FUN_00405bc0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar3,puVar15);
  return uVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004067b0(void)

{
  DAT_0060b440 = DAT_0060b278._4_4_;
  _DAT_0060b444 = (undefined4)DAT_0060b278;
  FUN_004061e0();
  DAT_0060b278._4_4_ = DAT_0060b440;
  _DAT_0060b480 = DAT_0060b450;
  _DAT_0060b274 = DAT_0060b448;
  return;
}


void FUN_00406810(void)

{
  FUN_004067b0();
  return;
}


void FUN_00406830(void)

{
  FUN_004067b0();
  return;
}


void FUN_00406850(void)

{
  FUN_004061e0();
  return;
}


void FUN_00406870(void)

{
  FUN_004067b0();
  return;
}


void FUN_00406890(void)

{
  FUN_004061e0();
  return;
}


size_t FUN_004068b0(wchar_t *param_1,byte *param_2,size_t param_3,mbstate_t *param_4)

{
  char cVar1;
  size_t sVar2;
  wchar_t local_1c;
  
  if (param_2 == (byte *)0x0) {
    param_3 = 1;
    param_2 = (byte *)0x408e8f;
  }
  else {
    if (param_3 == 0) {
      return 0xfffffffffffffffe;
    }
    if (param_1 != (wchar_t *)0x0) goto LAB_004068d4;
  }
  param_1 = &local_1c;
LAB_004068d4:
  sVar2 = mbrtowc(param_1,(char *)param_2,param_3,param_4);
  if ((0xfffffffffffffffd < sVar2) && (cVar1 = FUN_00406d20(0), cVar1 == '\0')) {
    sVar2 = 1;
    *param_1 = (uint)*param_2;
  }
  return sVar2;
}


void FUN_00406930(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_00402020(1);
}


long FUN_00406940(char *param_1,char **param_2,void *param_3,size_t param_4)

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
LAB_004069d7:
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
          goto LAB_004069d7;
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


void FUN_00406a60(undefined8 param_1,undefined8 param_2,long param_3)

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
  uVar2 = FUN_00404cb0(1,param_1);
  uVar3 = FUN_004049a0(0,8,param_2);
  error(0,0,uVar1,uVar3,uVar2);
  return;
}


void FUN_00406ae0(long *param_1,void *param_2,size_t param_3)

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
      uVar3 = FUN_00404cd0(lVar5);
      __fprintf_chk(stderr,1,"\n  - %s",uVar3);
      lVar5 = param_1[lVar4];
      param_2 = (void *)((long)__s2 + param_3);
      __s1 = __s2;
      if (lVar5 == 0) goto LAB_00406bb0;
    }
    lVar4 = lVar4 + 1;
    param_2 = (void *)((long)__s2 + param_3);
    uVar3 = FUN_00404cd0(lVar5);
    __fprintf_chk(stderr,1,&DAT_00408ee9,uVar3);
    lVar5 = param_1[lVar4];
  }
LAB_00406bb0:
  pcVar2 = stderr->_IO_write_ptr;
  if (pcVar2 < stderr->_IO_write_end) {
    stderr->_IO_write_ptr = pcVar2 + 1;
    *pcVar2 = '\n';
    return;
  }
  __overflow(stderr,10);
  return;
}


long FUN_00406c00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,code *param_6)

{
  long lVar1;
  
  lVar1 = FUN_00406940(param_2,param_3,param_4,param_5);
  if (lVar1 < 0) {
    FUN_00406a60(param_1,param_2,lVar1);
    FUN_00406ae0(param_3,param_4,param_5);
    (*param_6)();
    lVar1 = -1;
  }
  return lVar1;
}


long FUN_00406c70(void *param_1,long *param_2,void *param_3,size_t param_4)

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


ulong FUN_00406cc0(uint *param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  
  lVar2 = __fpending();
  uVar1 = *param_1;
  uVar3 = FUN_004059c0(param_1);
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


bool FUN_00406d20(int param_1)

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
    pbVar5 = &DAT_00408eee;
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

char * FUN_00406d80(void)

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
  if (DAT_0060b478 != (char *)0x0) goto LAB_00406dba;
  pcVar7 = getenv("CHARSETALIASDIR");
  if ((pcVar7 == (char *)0x0) || (*pcVar7 == '\0')) {
    sVar6 = 0x73;
    sVar5 = 0x65;
    __n = 100;
    pcVar7 = 
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib"
    ;
LAB_00406ea5:
    __file = (char *)malloc(sVar6);
    if (__file != (char *)0x0) {
      memcpy(__file,pcVar7,__n);
      __file[__n] = '/';
      goto LAB_00406ec6;
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
        goto LAB_00406ea5;
      }
      sVar6 = __n + 0xe;
    }
    __file = (char *)malloc(sVar6);
    if (__file != (char *)0x0) {
      memcpy(__file,pcVar7,__n);
      sVar5 = __n;
LAB_00406ec6:
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
LAB_00406f60:
          pbVar8 = (byte *)__stream->_IO_read_ptr;
          if (__stream->_IO_read_end <= pbVar8) goto LAB_004070ec;
          do {
            __stream->_IO_read_ptr = (char *)(pbVar8 + 1);
            uVar4 = (uint)*pbVar8;
            __ptr = pcVar7;
            while( true ) {
              pcVar7 = __ptr;
              if ((uVar4 - 9 < 2) || (uVar4 == 0x20)) goto LAB_00406f60;
              if (uVar4 == 0x23) goto LAB_00407151;
              ungetc(uVar4,__stream);
              iVar2 = fscanf(__stream,"%50s %50s",&local_b8,&local_78);
              puVar13 = &local_b8;
              if (iVar2 < 2) goto LAB_004070ff;
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
                FUN_004059c0(__stream);
                goto LAB_00406f04;
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
LAB_004070ec:
              uVar4 = __uflow(__stream);
              __ptr = pcVar7;
              if (uVar4 == 0xffffffff) goto LAB_004070ff;
            }
          } while( true );
        }
        close(iVar2);
      }
      goto LAB_00406efe;
    }
  }
  DAT_0060b478 = "";
LAB_00406dba:
  cVar1 = *DAT_0060b478;
  pcVar7 = DAT_0060b478;
  do {
    if (cVar1 == '\0') {
LAB_00406e14:
      if (*__s1 == '\0') {
        __s1 = "ASCII";
      }
      return __s1;
    }
    iVar2 = strcmp(__s1,pcVar7);
    if ((iVar2 == 0) || ((cVar1 == '*' && (pcVar7[1] == '\0')))) {
      sVar6 = strlen(pcVar7);
      __s1 = pcVar7 + sVar6 + 1;
      goto LAB_00406e14;
    }
    sVar6 = strlen(pcVar7);
    sVar5 = strlen(pcVar7 + sVar6 + 1);
    pcVar7 = pcVar7 + sVar6 + 1 + sVar5 + 1;
    cVar1 = *pcVar7;
  } while( true );
LAB_00407151:
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
  if (uVar4 == 0xffffffff) goto LAB_004070ff;
  goto LAB_00406f60;
LAB_004070ff:
  FUN_004059c0(__stream);
  if (local_d0 == 0) {
LAB_00406efe:
    pcVar7 = "";
  }
  else {
    pcVar7[local_d0] = '\0';
  }
LAB_00406f04:
  free(__file);
  DAT_0060b478 = pcVar7;
  goto LAB_00406dba;
}


/* WARNING: Removing unreachable block (ram,0x00407323) */
/* WARNING: Removing unreachable block (ram,0x00407328) */

void FUN_004072f0(void)

{
  __DT_INIT();
  return;
}


void FUN_00407350(void)

{
  return;
}


void FUN_00407360(undefined8 param_1)

{
  __cxa_atexit(param_1,0,DAT_0060b208);
  return;
}


undefined8 FUN_00407378(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code **ppcVar1;
  
  for (ppcVar1 = (code **)&DAT_0060ae30; *ppcVar1 != (code *)0xffffffffffffffff;
      ppcVar1 = ppcVar1 + -1) {
    (**ppcVar1)();
  }
  return param_3;
}


void __DT_FINI(void)

{
  FUN_00401bd1();
  return;
}

