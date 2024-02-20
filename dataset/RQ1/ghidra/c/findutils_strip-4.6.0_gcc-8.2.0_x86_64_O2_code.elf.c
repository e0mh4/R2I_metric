
void switchD_004020e2::caseD_b(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401655(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_0040165a(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_0040165f(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401664(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void switchD_0040398f::caseD_0(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


int FUN_00401680(uint param_1,undefined8 *param_2)

{
  byte *__s1;
  char cVar1;
  size_t sVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  FILE *__stream;
  char *__ptr;
  char *pcVar6;
  size_t sVar7;
  __ssize_t _Var8;
  undefined8 uVar9;
  int *piVar10;
  long lVar11;
  char *pcVar12;
  uint __c;
  char *pcVar13;
  int iVar14;
  char *pcVar15;
  byte *pbVar16;
  uint __c_00;
  byte *pbVar17;
  FILE *pFVar18;
  size_t unaff_R13;
  bool bVar19;
  bool bVar20;
  byte bVar21;
  undefined auVar22 [16];
  undefined8 uStack_58;
  undefined auStack_50 [4];
  int local_4c;
  char local_3b;
  char local_3a;
  char local_39;
  char *local_38;
  size_t local_30;
  
  bVar21 = 0;
  FUN_00401ef0(*param_2);
  iVar5 = FUN_004049a0(FUN_00401e50);
  if (iVar5 != 0) {
    uVar9 = dcgettext(0,"The atexit library function failed",5);
    piVar10 = __errno_location();
    error(1,*piVar10,uVar9);
  }
  local_39 = 0;
  bVar19 = param_1 < 2;
  bVar20 = param_1 == 2;
  if (bVar20) {
    __s1 = (byte *)param_2[1];
    lVar11 = 7;
    pbVar16 = __s1;
    pbVar17 = (byte *)"--help";
    do {
      if (lVar11 == 0) break;
      lVar11 = lVar11 + -1;
      bVar19 = *pbVar16 < *pbVar17;
      bVar20 = *pbVar16 == *pbVar17;
      pbVar16 = pbVar16 + (ulong)bVar21 * -2 + 1;
      pbVar17 = pbVar17 + (ulong)bVar21 * -2 + 1;
    } while (bVar20);
    cVar4 = (!bVar19 && !bVar20) - bVar19;
    local_4c = (int)cVar4;
    if (cVar4 == '\0') {
      FUN_00401b50(stdout);
    }
    else {
      local_4c = strcmp((char *)__s1,"--version");
      if (local_4c == 0) {
        FUN_00401db0(&DAT_00404ad8);
      }
      else {
        __stream = fopen((char *)__s1,"r");
        if (__stream != (FILE *)0x0) {
          local_30 = 0x402;
          local_38 = (char *)FUN_00403eb0(0x402);
          __ptr = (char *)FUN_00403eb0(0x402);
          *__ptr = '\0';
          pcVar6 = fgets(&DAT_00607280,0x101,__stream);
          if (pcVar6 != (char *)0x0) {
            __c_00 = 0x607280;
            sVar7 = fwrite(&DAT_00607280,1,0x100,stdout);
            if (sVar7 != 0x100) goto LAB_00401998;
            iVar5 = fclose(__stream);
            if (iVar5 != -1) {
              pcVar6 = __ptr;
              sVar7 = 0x402;
              iVar5 = 0;
              cVar4 = local_3b;
              __ptr = local_38;
              sVar2 = local_30;
LAB_00401790:
              do {
                local_30 = sVar2;
                local_38 = __ptr;
                local_3b = cVar4;
                unaff_R13 = sVar7;
                __ptr = pcVar6;
                _Var8 = __getdelim(&local_38,&local_30,10,stdin);
                if ((int)_Var8 < 1) {
                  free(local_38);
                  free(__ptr);
                  return 0;
                }
                local_38[(long)(int)_Var8 + -1] = '\0';
                cVar4 = *local_38;
                pcVar6 = local_38;
                if (cVar4 == '\0') {
LAB_004019c0:
                  __stream = (FILE *)0x0;
                }
                else {
                  do {
                    if (0x5e < (byte)(cVar4 - 0x20U)) {
                      *pcVar6 = '?';
                    }
                    pcVar6 = pcVar6 + 1;
                    cVar4 = *pcVar6;
                  } while (cVar4 != '\0');
                  if ((*local_38 != *__ptr) || (pcVar6 = local_38, pcVar15 = __ptr, *__ptr == '\0'))
                  goto LAB_004019c0;
                  do {
                    pcVar15 = pcVar15 + 1;
                    if (pcVar6[1] != *pcVar15) break;
                    pcVar6 = pcVar6 + 1;
                  } while (*pcVar15 != '\0');
                  __stream = (FILE *)(ulong)(uint)((int)pcVar15 - (int)__ptr);
                }
                iVar14 = (int)__stream;
                __c = (iVar14 - iVar5) + 0xe;
                if (0x1c < __c) {
                  __c_00 = 0x1e;
                  iVar5 = _IO_putc(0x1e,stdout);
                  if (iVar5 != 1) {
                    pFVar18 = stdout;
                    cVar4 = FUN_00401d50(stdout,__c,1);
                    __c_00 = (uint)pFVar18;
                    if (cVar4 != '\0') goto LAB_00401866;
                  }
LAB_00401998:
                  iVar5 = (int)__stream;
                  FUN_00401be0();
                  cVar4 = local_3b;
                  cVar1 = local_3a;
LAB_004019a0:
                  local_3a = cVar1;
                  local_3b = cVar4;
                  _IO_putc(__c_00,stdout);
                  pcVar6 = local_38;
                  sVar7 = local_30;
                  cVar4 = local_3b;
                  sVar2 = unaff_R13;
                  goto LAB_00401790;
                }
                __c_00 = __c;
                iVar5 = _IO_putc(__c,stdout);
                if (iVar5 == -1) goto LAB_00401998;
LAB_00401866:
                pcVar15 = local_38 + iVar14;
                cVar3 = *pcVar15;
                cVar4 = local_3b;
                cVar1 = local_3a;
                while (local_3b = cVar3, pcVar6 = local_38, sVar7 = local_30, iVar5 = iVar14,
                      local_3a = cVar1, sVar2 = unaff_R13, local_3b != '\0') {
                  __c_00 = (uint)local_3b;
                  local_3a = pcVar15[1];
                  if (local_3a == '\0') goto LAB_004019a0;
                  pcVar6 = &DAT_00607280;
                  cVar4 = DAT_00607280;
                  while (cVar4 != '\0') {
                    while( true ) {
                      pcVar6 = pcVar6 + 1;
                      bVar19 = cVar4 != local_3b;
                      cVar4 = *pcVar6;
                      if ((bVar19) || (local_3a != cVar4)) break;
                      pcVar12 = &local_3a;
                      pcVar13 = pcVar6;
                      do {
                        pcVar12 = pcVar12 + 1;
                        pcVar13 = pcVar13 + 1;
                        if (*pcVar12 == '\0') {
                          sVar7 = strlen(&local_3b);
                          pcVar13 = pcVar13 + (-0x607280 - sVar7);
                          if (((ulong)pcVar13 & 1) != 0) goto LAB_00401970;
                          iVar5 = (int)(((ulong)pcVar13 & 0xffffffff) >> 0x1f) + (int)pcVar13;
                          _IO_putc(iVar5 >> 1 & 0xffU | (uint)(uint3)(iVar5 >> 9) << 8 | 0x80,stdout
                                  );
                          goto LAB_00401918;
                        }
                      } while (*pcVar12 == *pcVar13);
                    }
                  }
LAB_00401970:
                  fputs(&local_3b,stdout);
LAB_00401918:
                  pcVar15 = pcVar15 + 2;
                  cVar4 = local_3b;
                  cVar1 = local_3a;
                  cVar3 = *pcVar15;
                }
              } while( true );
            }
          }
          auVar22 = FUN_00401bb0(param_2[1]);
          uVar9 = uStack_58;
          uStack_58 = SUB168(auVar22,0);
          (*(code *)PTR___libc_start_main_00606ff0)
                    (FUN_00401680,uVar9,auStack_50,FUN_00404930,FUN_00404990,
                     SUB168(auVar22 >> 0x40,0),&uStack_58);
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
        fprintf(stderr,"%s: ",*param_2);
        FUN_004041e0(param_2[1]);
        local_4c = 1;
      }
    }
  }
  else {
    FUN_00401b50(stderr);
    local_4c = 2;
  }
  return local_4c;
}


void FUN_00401a70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_retaddr;
  undefined auStack_8 [8];
  
  (*(code *)PTR___libc_start_main_00606ff0)
            (FUN_00401680,unaff_retaddr,&stack0x00000008,FUN_00404930,FUN_00404990,param_3,auStack_8
            );
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* WARNING: Removing unreachable block (ram,0x00401aa8) */
/* WARNING: Removing unreachable block (ram,0x00401ab2) */

void FUN_00401a9b(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00401ae9) */

void FUN_00401aba(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00401b26) */

void FUN_00401af1(void)

{
  if (DAT_00607268 != '\0') {
    return;
  }
  FUN_00401a9b();
  DAT_00607268 = 1;
  return;
}


/* WARNING: Removing unreachable block (ram,0x00401ae9) */

void thunk_FUN_00401aba(void)

{
  return;
}


void FUN_00401b50(FILE *param_1)

{
  undefined8 uVar1;
  char *pcVar2;
  
  uVar1 = DAT_00607398;
  pcVar2 = (char *)dcgettext(0,
                             "Usage: %s [--version | --help]\nor     %s most_common_bigrams < file-list > locate-database\n"
                             ,5);
  fprintf(param_1,pcVar2,uVar1,uVar1);
  pcVar2 = (char *)dcgettext(0,"\nReport bugs to <bug-findutils@gnu.org>.\n",5);
  fputs(pcVar2,param_1);
  return;
}


void FUN_00401bb0(undefined8 param_1)

{
  int *piVar1;
  
  piVar1 = __errno_location();
  error(1,*piVar1,"%s",param_1);
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401be0(void)

{
  undefined8 uVar1;
  int *piVar2;
  
  uVar1 = dcgettext(0,"write error",5);
  piVar2 = __errno_location();
  error(1,*piVar2,uVar1);
                    /* WARNING: Subroutine does not return */
  abort();
}


uint FUN_00401c10(FILE *param_1,undefined8 param_2,undefined8 param_3,int param_4,int *param_5)

{
  int iVar1;
  size_t sVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int *piVar5;
  uint uVar6;
  uint local_2c [3];
  
  clearerr(param_1);
  sVar2 = fread(local_2c,4,1,param_1);
  if (sVar2 != 1) {
    uVar3 = FUN_004035c0(0,8,param_2);
    iVar1 = feof(param_1);
    if (iVar1 == 0) {
      uVar4 = dcgettext(0,"error reading a word from %s",5);
      piVar5 = __errno_location();
      error(1,*piVar5,uVar4,uVar3);
    }
    else {
      uVar4 = dcgettext(0,"unexpected EOF in %s",5);
      error(1,0,uVar4,uVar3);
    }
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar6 = local_2c[0] >> 0x18 | (local_2c[0] & 0xff0000) >> 8 | (local_2c[0] & 0xff00) << 8 |
          local_2c[0] << 0x18;
  if (*param_5 == 0) {
    if (param_4 < (int)local_2c[0]) {
      if ((int)uVar6 <= param_4) {
        uVar3 = FUN_004035c0(0,8,param_2);
        uVar4 = dcgettext(0,"WARNING: locate database %s was built with a different byte order",5);
        error(0,0,uVar4,uVar3);
        *param_5 = 2;
        return uVar6;
      }
    }
    else if (param_4 < (int)uVar6) {
      *param_5 = 1;
    }
  }
  else if (*param_5 == 2) {
    local_2c[0] = uVar6;
  }
  return local_2c[0];
}


ulong FUN_00401d50(FILE *param_1,uint param_2,int param_3)

{
  size_t sVar1;
  uint local_c [3];
  
  local_c[0] = param_2;
  if (param_3 != 0) {
    if (param_3 == 2) {
      local_c[0] = param_2 >> 0x18 | (param_2 & 0xff0000) >> 8 | (param_2 & 0xff00) << 8 |
                   param_2 << 0x18;
    }
    sVar1 = fwrite(local_c,4,1,param_1);
    return sVar1 & 0xffffffffffffff00 | (ulong)(sVar1 == 1);
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("endian_state_flag != GetwordEndianStateInitial","word_io.c",0xa7,"putword");
}


undefined  [16] FUN_00401db0(undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_00404110(stderr);
  uVar1 = dcgettext(0,"Kevin Dalley",5);
  uVar2 = dcgettext(0,"James Youngman",5);
  uVar3 = dcgettext(0,"Eric B. Decker",5);
  FUN_00403d80(stdout,param_1,"GNU findutils",PTR_s_4_6_0_006071d0,uVar3,uVar2);
  return ZEXT816(uVar1);
}


void FUN_00401e30(undefined8 param_1)

{
  DAT_00607390 = param_1;
  return;
}


void FUN_00401e40(undefined param_1)

{
  DAT_00607388 = param_1;
  return;
}


void FUN_00401e50(void)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  iVar1 = FUN_00404350(stdout);
  if (iVar1 != 0) {
    piVar2 = __errno_location();
    if ((DAT_00607388 == '\0') || (*piVar2 != 0x20)) {
      uVar3 = dcgettext(0,"write error",5);
      if (DAT_00607390 == 0) {
        error(0,*piVar2,"%s",uVar3);
      }
      else {
        uVar4 = FUN_00403740();
        error(0,*piVar2,"%s: %s",uVar4,uVar3);
      }
      goto LAB_00401ece;
    }
  }
  iVar1 = FUN_00404350(stderr);
  if (iVar1 == 0) {
    return;
  }
LAB_00401ece:
                    /* WARNING: Subroutine does not return */
  _exit(DAT_006071d8);
}


void FUN_00401ef0(byte *param_1)

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
        pbVar6 = &DAT_00404c28;
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
  DAT_00607398 = param_1;
  program_invocation_name = param_1;
  return;
}


char * FUN_00401f90(char *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  byte *pbVar3;
  
  pcVar2 = (char *)dcgettext(0,param_1,5);
  if (param_1 == pcVar2) {
    pbVar3 = (byte *)FUN_004043c0();
    if ((*pbVar3 & 0xdf) == 0x55) {
      if (((((pbVar3[1] & 0xdf) != 0x54) || ((pbVar3[2] & 0xdf) != 0x46)) || (pbVar3[3] != 0x2d)) ||
         ((pbVar3[4] != 0x38 || (pbVar3[5] != 0)))) {
LAB_00402068:
        pcVar2 = "\"";
        if (param_2 != 9) {
          pcVar2 = "\'";
        }
        return pcVar2;
      }
      cVar1 = *pcVar2;
      pcVar2 = &DAT_00404c39;
      if (cVar1 != '`') {
        pcVar2 = &DAT_00404c2e;
      }
    }
    else {
      if (((((*pbVar3 & 0xdf) != 0x47) || ((pbVar3[1] & 0xdf) != 0x42)) || (pbVar3[2] != 0x31)) ||
         (((pbVar3[3] != 0x38 || (pbVar3[4] != 0x30)) ||
          ((pbVar3[5] != 0x33 || ((pbVar3[6] != 0x30 || (pbVar3[7] != 0)))))))) goto LAB_00402068;
      cVar1 = *pcVar2;
      pcVar2 = &DAT_00404c35;
      if (cVar1 != '`') {
        pcVar2 = &DAT_00404c32;
      }
    }
  }
  return pcVar2;
}


ulong FUN_00402090(undefined *param_1,ulong param_2,char *param_3,ulong param_4,int param_5,
                  uint param_6,long param_7,char *param_8,char *param_9)

{
  byte *__s1;
  ulong uVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  size_t sVar5;
  ushort **ppuVar6;
  long lVar7;
  ulong uVar8;
  byte bVar9;
  byte bVar10;
  char cVar11;
  byte bVar12;
  char *pcVar13;
  ulong uVar14;
  ulong uVar15;
  bool bVar16;
  uint uVar17;
  byte bVar18;
  ulong uVar19;
  ulong uVar20;
  bool bVar21;
  bool bVar22;
  byte local_ac;
  size_t local_98;
  char *local_70;
  bool local_5b;
  wint_t local_44;
  mbstate_t local_40 [2];
  
  uVar17 = param_6 & 2;
  sVar5 = __ctype_get_mb_cur_max();
  switch(param_5) {
  case 0:
    local_5b = false;
    uVar15 = 0;
    local_ac = 0;
    local_98 = 0;
    local_70 = (char *)0x0;
    break;
  case 2:
    if (uVar17 == 0) {
      local_ac = 0;
LAB_004022e6:
      if (param_2 != 0) {
        *param_1 = 0x27;
      }
      local_5b = false;
      uVar15 = 1;
      param_5 = 2;
      local_98 = 1;
      local_70 = "\'";
    }
    else {
      local_5b = true;
      uVar15 = 0;
      local_ac = 0;
      local_98 = 1;
      local_70 = "\'";
    }
    break;
  case 3:
    local_5b = true;
    uVar15 = 0;
    param_5 = 2;
    local_ac = 1;
    local_98 = 1;
    local_70 = "\'";
    break;
  case 4:
    if (uVar17 == 0) {
      local_ac = 1;
      goto LAB_004022e6;
    }
  case 1:
    local_5b = true;
    uVar15 = 0;
    param_5 = 2;
    local_ac = 0;
    local_98 = 1;
    local_70 = "\'";
    break;
  case 5:
    if (uVar17 == 0) {
      if (param_2 != 0) {
        *param_1 = 0x22;
      }
      local_5b = false;
      uVar15 = 1;
      local_ac = 1;
      local_98 = 1;
      local_70 = "\"";
    }
    else {
      local_5b = true;
      uVar15 = 0;
      local_ac = 1;
      local_98 = 1;
      local_70 = "\"";
    }
    break;
  case 6:
    local_5b = true;
    uVar15 = 0;
    param_5 = 5;
    local_ac = 1;
    local_98 = 1;
    local_70 = "\"";
    break;
  case 7:
    local_5b = false;
    uVar15 = 0;
    local_ac = 1;
    local_98 = 0;
    local_70 = (char *)0x0;
    break;
  case 8:
  case 9:
  case 10:
    if (param_5 != 10) {
      param_8 = (char *)FUN_00401f90(&DAT_00404c3f,param_5);
      param_9 = (char *)FUN_00401f90(&DAT_00404c3d,param_5);
    }
    uVar15 = 0;
    if (uVar17 == 0) {
      cVar11 = *param_8;
      while (cVar11 != '\0') {
        if (uVar15 < param_2) {
          param_1[uVar15] = cVar11;
        }
        uVar15 = uVar15 + 1;
        cVar11 = param_8[uVar15];
      }
    }
    local_5b = uVar17 != 0;
    local_98 = strlen(param_9);
    local_ac = 1;
    local_70 = param_9;
    break;
  default:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar20 = 0;
  bVar9 = 0;
LAB_00402130:
  bVar21 = param_4 != uVar20;
  if (param_4 == 0xffffffffffffffff) {
    bVar21 = param_3[uVar20] != '\0';
  }
  if (bVar21 == false) {
    bVar22 = (bool)(param_5 == 2 & local_5b & uVar15 == 0);
    if (bVar22 == false) {
      uVar20 = uVar15;
      if (((local_70 != (char *)0x0) && (local_5b == false)) && (cVar11 = *local_70, cVar11 != '\0')
         ) {
        do {
          if (uVar20 < param_2) {
            param_1[uVar20] = cVar11;
          }
          uVar20 = uVar20 + 1;
          cVar11 = local_70[uVar20 - uVar15];
        } while (cVar11 != '\0');
      }
      if (param_2 <= uVar20) {
        return uVar20;
      }
      param_1[uVar20] = 0;
      return uVar20;
    }
    goto LAB_00402870;
  }
  bVar2 = (bool)(param_5 != 2 & local_ac);
  __s1 = (byte *)(param_3 + uVar20);
  uVar14 = uVar15;
  bVar22 = local_5b;
  bVar3 = bVar9;
  if (bVar2 != false) {
    if (local_98 == 0) {
LAB_00402a40:
      uVar19 = (ulong)*__s1;
      switch(uVar19) {
      case 0:
        goto switchD_00402a52_caseD_0;
      default:
        bVar2 = false;
        goto switchD_0040282e_caseD_1;
      case 7:
switchD_00402a52_caseD_7:
        bVar18 = 0x61;
        break;
      case 8:
switchD_00402a52_caseD_8:
        bVar18 = 0x62;
        break;
      case 9:
switchD_00402a52_caseD_9:
        bVar18 = 0x74;
        break;
      case 10:
switchD_00402a52_caseD_a:
        bVar18 = 0x6e;
        break;
      case 0xb:
switchD_00402a52_caseD_b:
        bVar18 = 0x76;
        break;
      case 0xc:
switchD_00402a52_caseD_c:
        bVar18 = 0x66;
        break;
      case 0xd:
        bVar2 = false;
switchD_00402221_caseD_d:
        uVar19 = 0xd;
        bVar10 = 0x72;
        bVar21 = param_5 == 2;
        goto LAB_00402610;
      case 0x20:
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
        bVar2 = false;
switchD_00402221_caseD_20:
        bVar21 = false;
        goto LAB_004024f8;
      case 0x23:
      case 0x7e:
        bVar2 = false;
switchD_00402221_caseD_23:
        if (uVar20 == 0) {
          bVar21 = false;
          goto LAB_004024f8;
        }
        goto switchD_00402221_caseD_25;
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
        bVar2 = false;
        goto switchD_00402221_caseD_25;
      case 0x27:
        bVar2 = false;
        goto switchD_0040282e_caseD_27;
      case 0x3f:
        bVar2 = false;
        goto switchD_0040282e_caseD_3f;
      case 0x5c:
        bVar2 = false;
        goto switchD_00402221_caseD_5c;
      case 0x7b:
      case 0x7d:
        bVar2 = false;
        goto switchD_0040282e_caseD_7b;
      }
      bVar22 = false;
      goto joined_r0x00402635;
    }
    if ((param_4 == 0xffffffffffffffff) && (1 < local_98)) {
      param_4 = strlen(param_3);
    }
    if ((param_4 < uVar20 + local_98) || (iVar4 = memcmp(__s1,local_70,local_98), iVar4 != 0))
    goto LAB_00402a40;
    if (local_5b == false) {
      uVar19 = (ulong)*__s1;
      switch(uVar19) {
      case 0:
        goto switchD_00402221_caseD_0;
      default:
        goto switchD_0040282e_caseD_1;
      case 7:
        goto switchD_00402a52_caseD_7;
      case 8:
        goto switchD_00402a52_caseD_8;
      case 9:
        goto switchD_00402a52_caseD_9;
      case 10:
        goto switchD_00402a52_caseD_a;
      case 0xb:
        goto switchD_00402a52_caseD_b;
      case 0xc:
        goto switchD_00402a52_caseD_c;
      case 0xd:
        goto switchD_00402221_caseD_d;
      case 0x20:
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
        goto switchD_00402221_caseD_20;
      case 0x23:
      case 0x7e:
        goto switchD_00402221_caseD_23;
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
        goto switchD_00402221_caseD_25;
      case 0x27:
        goto switchD_0040282e_caseD_27;
      case 0x3f:
        goto switchD_0040282e_caseD_3f;
      case 0x5c:
        goto switchD_00402221_caseD_5c;
      case 0x7b:
      case 0x7d:
        goto switchD_0040282e_caseD_7b;
      }
    }
    goto LAB_00402882;
  }
  uVar19 = (ulong)*__s1;
  switch(uVar19) {
  case 0:
    if (local_ac == 0) {
      if ((param_6 & 1) != 0) goto LAB_00402d50;
      if (local_5b == false) {
        uVar20 = uVar20 + 1;
        bVar18 = 0;
        goto LAB_00402998;
      }
      bVar21 = false;
      bVar16 = false;
      if (param_7 != 0) {
        bVar2 = false;
        uVar19 = 0;
        goto LAB_00402249;
      }
      bVar18 = 0;
      goto LAB_004027a2;
    }
switchD_00402a52_caseD_0:
    if (local_5b == false) {
      bVar2 = false;
switchD_00402221_caseD_0:
      bVar22 = param_5 == 2;
      bVar3 = (bVar9 ^ 1) & bVar22;
      if (bVar3 == 0) {
        bVar3 = bVar9;
        if (uVar15 < param_2) goto LAB_00402735;
      }
      else {
        if (uVar15 < param_2) {
          param_1[uVar15] = 0x27;
        }
        if (uVar15 + 1 < param_2) {
          param_1[uVar15 + 1] = 0x24;
        }
        if (uVar15 + 2 < param_2) {
          param_1[uVar15 + 2] = 0x27;
        }
        uVar14 = uVar15 + 3;
        if (param_2 <= uVar14) {
          uVar14 = uVar15 + 4;
          bVar18 = 0x30;
          goto LAB_004025b7;
        }
LAB_00402735:
        param_1[uVar14] = 0x5c;
        uVar15 = uVar14;
      }
      uVar14 = uVar15 + 1;
      if (param_5 != 2) {
        uVar19 = 0x30;
        bVar9 = bVar3;
        if ((uVar20 + 1 < param_4) && ((byte)(param_3[uVar20 + 1] - 0x30U) < 10)) {
          if (uVar14 < param_2) {
            param_1[uVar14] = 0x30;
          }
          if (uVar15 + 2 < param_2) {
            param_1[uVar15 + 2] = 0x30;
          }
          uVar14 = uVar15 + 3;
          uVar19 = 0x30;
        }
        goto LAB_0040276b;
      }
      bVar18 = 0x30;
      goto LAB_004025b7;
    }
    bVar22 = param_5 == 2;
LAB_00402870:
    if ((local_ac != 0) && (bVar22 != false)) {
      param_5 = 4;
    }
LAB_00402882:
    uVar15 = FUN_00402090(param_1,param_2,param_3,param_4,param_5,param_6 & 0xfffffffd,0,param_8,
                          param_9);
    return uVar15;
  default:
switchD_0040282e_caseD_1:
    if (sVar5 != 1) {
      local_40[0] = (mbstate_t)0x0;
      if (param_4 == 0xffffffffffffffff) {
        param_4 = strlen(param_3);
      }
      uVar8 = 0;
      do {
        uVar1 = uVar20 + uVar8;
        lVar7 = FUN_004041b0(&local_44,param_3 + uVar1,param_4 - uVar1,local_40);
        if (lVar7 == 0) {
          bVar10 = local_ac & (bVar21 ^ 1U);
          goto LAB_00402f50;
        }
        bVar10 = local_ac;
        if (lVar7 == -1) goto LAB_00402f50;
        if (lVar7 == -2) {
          if ((param_4 <= uVar1) || (param_3[uVar1] == '\0')) goto LAB_00402f50;
          goto LAB_00402fdf;
        }
        bVar22 = (bool)(param_5 == 2 & local_5b);
        if ((bVar22 != false) && (lVar7 != 1)) {
          pcVar13 = param_3 + uVar1 + 1;
          do {
            if (((byte)(*pcVar13 + 0xa5U) < 0x22) &&
               ((1L << (*pcVar13 + 0xa5U & 0x3f) & 0x20000002bU) != 0)) goto LAB_00402870;
            pcVar13 = pcVar13 + 1;
          } while (param_3 + uVar1 + lVar7 != pcVar13);
        }
        iVar4 = iswprint(local_44);
        if (iVar4 == 0) {
          bVar21 = false;
        }
        uVar8 = uVar8 + lVar7;
        iVar4 = mbsinit(local_40);
      } while (iVar4 == 0);
      bVar10 = (bVar21 ^ 1U) & local_ac;
      goto LAB_00402f50;
    }
    ppuVar6 = __ctype_b_loc();
    uVar8 = 1;
    bVar10 = ((byte)((*ppuVar6)[uVar19] >> 0xe) ^ 1) & local_ac;
    goto LAB_00402808;
  case 7:
    uVar19 = 7;
    bVar10 = 0x61;
    bVar21 = param_5 == 2;
    break;
  case 8:
    uVar19 = 8;
    bVar10 = 0x62;
    bVar21 = param_5 == 2;
    break;
  case 9:
    uVar19 = 9;
    bVar10 = 0x74;
    goto LAB_00402843;
  case 10:
    uVar19 = 10;
    bVar10 = 0x6e;
    goto LAB_00402843;
  case 0xb:
    uVar19 = 0xb;
    bVar10 = 0x76;
    bVar21 = param_5 == 2;
    break;
  case 0xc:
    uVar19 = 0xc;
    bVar10 = 0x66;
    bVar21 = param_5 == 2;
    break;
  case 0xd:
    uVar19 = 0xd;
    bVar10 = 0x72;
LAB_00402843:
    bVar22 = (bool)(local_5b & param_5 == 2);
    bVar2 = bVar22;
    bVar21 = param_5 == 2;
    if (bVar22 != false) goto LAB_00402870;
    break;
  case 0x20:
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
    goto LAB_004024e6;
  case 0x23:
  case 0x7e:
    goto LAB_004024e1;
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
    goto switchD_0040282e_caseD_25;
  case 0x27:
switchD_0040282e_caseD_27:
    bVar21 = false;
    uVar19 = 0x27;
    if (param_5 != 2) goto LAB_004024f8;
    if (local_5b == false) {
      if (uVar15 < param_2) {
        param_1[uVar15] = 0x27;
      }
      if (uVar15 + 1 < param_2) {
        param_1[uVar15 + 1] = 0x5c;
      }
      if (uVar15 + 2 < param_2) {
        param_1[uVar15 + 2] = 0x27;
      }
      uVar14 = uVar15 + 3;
      bVar3 = 0;
      bVar18 = 0x27;
LAB_004025b7:
      uVar20 = uVar20 + 1;
      bVar9 = bVar3;
      if (bVar2 != false) goto LAB_0040251f;
      goto LAB_004022c7;
    }
    goto LAB_00402870;
  case 0x3f:
switchD_0040282e_caseD_3f:
    if (param_5 != 2) {
      if (param_5 != 5) {
        bVar21 = param_5 == 2;
        uVar19 = 0x3f;
        goto LAB_004024f8;
      }
      if ((param_6 & 4) == 0) {
        bVar21 = false;
        uVar19 = 0x3f;
        goto LAB_004024f8;
      }
      uVar8 = uVar20 + 2;
      bVar21 = false;
      uVar19 = 0x3f;
      if ((param_4 <= uVar8) || (param_3[uVar20 + 1] != '?')) goto LAB_004024f8;
      uVar19 = (ulong)(byte)param_3[uVar8];
      if ((0x3e < (byte)param_3[uVar8]) || ((0x7000a38200000000U >> (uVar19 & 0x3f) & 1) == 0)) {
        uVar19 = 0x3f;
        goto LAB_004024f8;
      }
      if (local_5b == false) {
        if (uVar15 < param_2) {
          param_1[uVar15] = 0x3f;
        }
        if (uVar15 + 1 < param_2) {
          param_1[uVar15 + 1] = 0x22;
        }
        if (uVar15 + 2 < param_2) {
          param_1[uVar15 + 2] = 0x22;
        }
        if (uVar15 + 3 < param_2) {
          param_1[uVar15 + 3] = 0x3f;
        }
        uVar14 = uVar15 + 4;
        bVar22 = false;
        bVar21 = false;
        uVar20 = uVar8;
LAB_0040276b:
        bVar18 = (byte)uVar19;
        uVar15 = uVar14;
        bVar3 = bVar9;
        if ((local_ac == 0) || (bVar22)) goto LAB_00402510;
        if (param_7 != 0) goto LAB_00402249;
        goto LAB_00402790;
      }
      goto LAB_00402882;
    }
    if (local_5b == false) {
      bVar21 = false;
      bVar18 = 0x3f;
      goto LAB_00402510;
    }
    goto LAB_00402870;
  case 0x5c:
    if (param_5 == 2) {
      if (local_5b == false) {
        uVar20 = uVar20 + 1;
        bVar18 = 0x5c;
        goto LAB_00402998;
      }
      goto LAB_00402870;
    }
switchD_00402221_caseD_5c:
    uVar19 = 0x5c;
    bVar18 = 0x5c;
    bVar10 = 0x5c;
    bVar21 = (bool)(local_ac & local_5b & local_98 != 0);
    if (bVar21 == false) break;
    uVar20 = uVar20 + 1;
LAB_00402998:
    bVar21 = bVar9 != 0;
    bVar9 = bVar3;
    if (bVar21) {
      if (uVar14 < param_2) {
        param_1[uVar14] = 0x27;
      }
      if (uVar14 + 1 < param_2) {
        param_1[uVar14 + 1] = 0x27;
      }
      uVar14 = uVar14 + 2;
      bVar9 = 0;
    }
    goto LAB_004022c7;
  case 0x7b:
  case 0x7d:
switchD_0040282e_caseD_7b:
    bVar22 = param_4 != 1;
    if (param_4 == 0xffffffffffffffff) {
      bVar22 = param_3[1] != '\0';
    }
    bVar21 = param_5 == 2;
    if (bVar22) goto LAB_004024f8;
LAB_004024e1:
    bVar21 = param_5 == 2;
    if (uVar20 != 0) goto LAB_004024f8;
LAB_004024e6:
    bVar21 = param_5 == 2;
    bVar22 = (bool)(local_5b & bVar21);
    if (bVar22 != false) goto LAB_00402870;
LAB_004024f8:
    bVar18 = (byte)uVar19;
    bVar21 = (bool)((local_ac ^ 1 | bVar21) ^ 1 | local_5b);
    if (bVar21 == false) {
LAB_00402510:
      uVar20 = uVar20 + 1;
      uVar14 = uVar15;
      if (bVar2 == false) {
        bVar9 = (bVar21 ^ 1U) & bVar3;
        goto LAB_00402998;
      }
LAB_0040251f:
      bVar22 = param_5 == 2;
    }
    else {
switchD_00402221_caseD_25:
      bVar18 = (byte)uVar19;
      bVar21 = false;
      if (param_7 == 0) {
LAB_00402790:
        bVar22 = param_5 == 2;
        uVar15 = uVar14;
        bVar16 = bVar21;
        bVar3 = bVar9;
        if (bVar2 == false) {
LAB_004027a2:
          uVar20 = uVar20 + 1;
          bVar9 = (bVar16 ^ 1U) & bVar3;
          uVar14 = uVar15;
          goto LAB_00402998;
        }
      }
      else {
LAB_00402249:
        bVar18 = (byte)uVar19;
        uVar14 = uVar15;
        if ((*(uint *)(param_7 + (uVar19 >> 5) * 4) >> (bVar18 & 0x1f) & 1) == 0) goto LAB_00402790;
        bVar22 = param_5 == 2;
        bVar3 = bVar9;
      }
joined_r0x00402635:
      if (local_5b != false) goto LAB_00402870;
      uVar20 = uVar20 + 1;
    }
    bVar9 = (bVar3 ^ 1) & bVar22;
    if (bVar9 != 0) {
      if (uVar14 < param_2) {
        param_1[uVar14] = 0x27;
      }
      if (uVar14 + 1 < param_2) {
        param_1[uVar14 + 1] = 0x24;
      }
      if (uVar14 + 2 < param_2) {
        param_1[uVar14 + 2] = 0x27;
      }
      uVar14 = uVar14 + 3;
      bVar3 = bVar9;
    }
    if (uVar14 < param_2) {
      param_1[uVar14] = 0x5c;
    }
    uVar14 = uVar14 + 1;
    bVar9 = bVar3;
LAB_004022c7:
    if (uVar14 < param_2) {
      param_1[uVar14] = bVar18;
    }
    uVar15 = uVar14 + 1;
    goto LAB_00402130;
  }
LAB_00402610:
  bVar22 = bVar21;
  bVar18 = bVar10;
  bVar21 = bVar22;
  if (local_ac == 0) goto LAB_004024f8;
  goto joined_r0x00402635;
  while (__s1[uVar8] != 0) {
LAB_00402fdf:
    uVar8 = uVar8 + 1;
    if (param_4 <= uVar20 + uVar8) break;
  }
LAB_00402f50:
  bVar12 = bVar10;
  if (1 < uVar8) {
LAB_00402d5e:
    uVar8 = uVar8 + uVar20;
    bVar10 = 0;
    uVar15 = uVar20;
    do {
      bVar18 = (byte)uVar19;
      if (bVar12 == 0) {
        bVar9 = (bVar10 ^ 1) & bVar3;
        if (bVar2 != false) {
          if (uVar14 < param_2) {
            param_1[uVar14] = 0x5c;
          }
          uVar14 = uVar14 + 1;
        }
        uVar20 = uVar15 + 1;
        if (uVar8 <= uVar20) goto LAB_00402998;
        if (bVar9 == 0) {
          bVar2 = false;
        }
        else {
          if (uVar14 < param_2) {
            param_1[uVar14] = 0x27;
          }
          if (uVar14 + 1 < param_2) {
            param_1[uVar14 + 1] = 0x27;
          }
          uVar14 = uVar14 + 2;
          bVar2 = false;
          bVar3 = 0;
        }
      }
      else {
        bVar22 = param_5 == 2;
        if (local_5b != false) goto LAB_00402870;
        bVar9 = (bVar3 ^ 1) & bVar22;
        if (bVar9 != 0) {
          if (uVar14 < param_2) {
            param_1[uVar14] = 0x27;
          }
          if (uVar14 + 1 < param_2) {
            param_1[uVar14 + 1] = 0x24;
          }
          if (uVar14 + 2 < param_2) {
            param_1[uVar14 + 2] = 0x27;
          }
          uVar14 = uVar14 + 3;
          bVar3 = bVar9;
        }
        if (uVar14 < param_2) {
          param_1[uVar14] = 0x5c;
        }
        if (uVar14 + 1 < param_2) {
          param_1[uVar14 + 1] = (char)(uVar19 >> 6) + '0';
        }
        if (uVar14 + 2 < param_2) {
          param_1[uVar14 + 2] = ((byte)(uVar19 >> 3) & 7) + 0x30;
        }
        uVar20 = uVar15 + 1;
        uVar14 = uVar14 + 3;
        bVar18 = (bVar18 & 7) + 0x30;
        bVar10 = bVar12;
        bVar9 = bVar3;
        if (uVar8 <= uVar20) goto LAB_004022c7;
      }
      uVar15 = uVar15 + 1;
      if (uVar14 < param_2) {
        param_1[uVar14] = bVar18;
      }
      uVar19 = (ulong)(byte)param_3[uVar15];
      uVar14 = uVar14 + 1;
    } while( true );
  }
LAB_00402808:
  bVar12 = local_ac;
  if (bVar10 != 0) goto LAB_00402d5e;
switchD_0040282e_caseD_25:
  bVar21 = param_5 == 2;
  goto LAB_004024f8;
LAB_00402d50:
  uVar20 = uVar20 + 1;
  goto LAB_00402130;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_004030a0(uint param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

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
  if (-1 < (int)param_1) {
    puVar8 = (undefined4 *)PTR_DAT_00607218;
    if (DAT_00607230 <= param_1) {
      if (PTR_DAT_00607218 == &DAT_00607220) {
        puVar8 = (undefined4 *)FUN_00403f00(0);
        uVar6 = PTR_DAT_00607228._4_4_;
        uVar5 = PTR_DAT_00607228._0_4_;
        uVar3 = _UNK_00607224;
        PTR_DAT_00607218 = (undefined *)puVar8;
        *puVar8 = _DAT_00607220;
        puVar8[1] = uVar3;
        puVar8[2] = uVar5;
        puVar8[3] = uVar6;
      }
      else {
        puVar8 = (undefined4 *)FUN_00403f00(PTR_DAT_00607218);
        PTR_DAT_00607218 = (undefined *)puVar8;
      }
      memset(puVar8 + (ulong)DAT_00607230 * 4,0,((ulong)(param_1 + 1) - (ulong)DAT_00607230) * 0x10)
      ;
      DAT_00607230 = param_1 + 1;
    }
    uVar2 = param_4[1];
    puVar10 = (ulong *)(puVar8 + (long)(int)param_1 * 4);
    uVar4 = *puVar10;
    __ptr = (undefined *)puVar10[1];
    uVar9 = FUN_00402090(__ptr,uVar4,param_2,param_3,*param_4,uVar2 | 1,param_4 + 2,
                         *(undefined8 *)(param_4 + 10),*(undefined8 *)(param_4 + 0xc));
    if (uVar4 <= uVar9) {
      uVar9 = uVar9 + 1;
      *puVar10 = uVar9;
      if (__ptr != &DAT_006073a0) {
        free(__ptr);
      }
      __ptr = (undefined *)FUN_00403eb0(uVar9);
      uVar3 = *param_4;
      puVar10[1] = (ulong)__ptr;
      FUN_00402090(__ptr,uVar9,param_2,param_3,uVar3,uVar2 | 1,param_4 + 2,
                   *(undefined8 *)(param_4 + 10),*(undefined8 *)(param_4 + 0xc));
    }
    *piVar7 = iVar1;
    return __ptr;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00403240(undefined *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_006074a0;
  }
  FUN_00404070(param_1,0x38);
  *piVar2 = iVar1;
  return;
}


undefined4 FUN_00403280(undefined4 *param_1)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)&DAT_006074a0;
  }
  return *param_1;
}


void FUN_00403290(undefined4 *param_1,undefined4 param_2)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)&DAT_006074a0;
  }
  *param_1 = param_2;
  return;
}


uint FUN_004032a0(undefined *param_1,byte param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_006074a0;
  }
  uVar1 = *(uint *)(param_1 + (ulong)(param_2 >> 5) * 4 + 8);
  uVar2 = uVar1 >> (param_2 & 0x1f);
  *(uint *)(param_1 + (ulong)(param_2 >> 5) * 4 + 8) =
       ((param_3 ^ uVar2) & 1) << (param_2 & 0x1f) ^ uVar1;
  return uVar2 & 1;
}


undefined4 FUN_004032e0(undefined *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_006074a0;
  }
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_1 + 4) = param_2;
  return uVar1;
}


void FUN_00403300(undefined4 *param_1,long param_2,long param_3)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)&DAT_006074a0;
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


void FUN_00403330(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 *param_5)

{
  int iVar1;
  int *piVar2;
  
  if (param_5 == (undefined4 *)0x0) {
    param_5 = (undefined4 *)&DAT_006074a0;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  FUN_00402090(param_1,param_2,param_3,param_4,*param_5,param_5[1],param_5 + 2,
               *(undefined8 *)(param_5 + 10),*(undefined8 *)(param_5 + 0xc));
  *piVar2 = iVar1;
  return;
}


undefined8 FUN_004033b0(undefined8 param_1,undefined8 param_2,long *param_3,undefined4 *param_4)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  
  if (param_4 == (undefined4 *)0x0) {
    param_4 = (undefined4 *)&DAT_006074a0;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  uVar5 = (uint)(param_3 == (long *)0x0) | param_4[1];
  lVar3 = FUN_00402090(0,0,param_1,param_2,*param_4,uVar5,param_4 + 2,*(undefined8 *)(param_4 + 10),
                       *(undefined8 *)(param_4 + 0xc));
  uVar4 = FUN_00403eb0(lVar3 + 1);
  FUN_00402090(uVar4,lVar3 + 1,param_1,param_2,*param_4,uVar5,param_4 + 2,
               *(undefined8 *)(param_4 + 10),*(undefined8 *)(param_4 + 0xc));
  *piVar2 = iVar1;
  if (param_3 != (long *)0x0) {
    *param_3 = lVar3;
  }
  return uVar4;
}


void FUN_004034a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_004033b0(param_1,param_2,0,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004034b0(void)

{
  void **ppvVar1;
  void *__ptr;
  undefined *__ptr_00;
  void **ppvVar2;
  
  __ptr_00 = PTR_DAT_00607218;
  if (1 < DAT_00607230) {
    ppvVar2 = (void **)(PTR_DAT_00607218 + 0x18);
    ppvVar1 = (void **)(PTR_DAT_00607218 + (ulong)(DAT_00607230 - 2) * 0x10 + 0x28);
    do {
      __ptr = *ppvVar2;
      ppvVar2 = ppvVar2 + 2;
      free(__ptr);
    } while (ppvVar2 != ppvVar1);
  }
  if (*(undefined **)(__ptr_00 + 8) != &DAT_006073a0) {
    free(*(undefined **)(__ptr_00 + 8));
    _DAT_00607220 = 0x100;
    PTR_DAT_00607228 = &DAT_006073a0;
  }
  if (__ptr_00 != &DAT_00607220) {
    free(__ptr_00);
    PTR_DAT_00607218 = &DAT_00607220;
  }
  DAT_00607230 = 1;
  return;
}


void FUN_00403550(undefined8 param_1,undefined8 param_2)

{
  FUN_004030a0(param_1,param_2,0xffffffffffffffff,&DAT_006074a0);
  return;
}


void FUN_00403570(void)

{
  FUN_004030a0();
  return;
}


void FUN_00403580(undefined8 param_1)

{
  FUN_004030a0(0,param_1,0xffffffffffffffff,&DAT_006074a0);
  return;
}


void FUN_004035a0(undefined8 param_1,undefined8 param_2)

{
  FUN_004030a0(0,param_1,param_2,&DAT_006074a0);
  return;
}


void FUN_004035c0(undefined8 param_1,int param_2,undefined8 param_3)

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
    FUN_004030a0(param_1,param_3,0xffffffffffffffff,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00403630(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

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
    FUN_004030a0(param_1,param_3,param_4,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_004036a0(undefined4 param_1,undefined8 param_2)

{
  FUN_004035c0(0,param_1,param_2);
  return;
}


void FUN_004036b0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00403630(0,param_1,param_2,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004036c0(undefined8 param_1,undefined8 param_2,byte param_3)

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
  
  local_18 = DAT_006074d0;
  local_48 = _DAT_006074a0;
  uStack_40 = uRam00000000006074a8;
  local_38 = _DAT_006074b0;
  uStack_30 = uRam00000000006074b8;
  puVar1 = (uint *)((long)&uStack_40 + (ulong)(param_3 >> 5) * 4);
  local_28 = _DAT_006074c0;
  uStack_20 = uRam00000000006074c8;
  uVar2 = *puVar1;
  *puVar1 = (~(uVar2 >> (param_3 & 0x1f)) & 1) << (param_3 & 0x1f) ^ uVar2;
  FUN_004030a0(0,param_1,param_2,&local_48);
  return;
}


void FUN_00403730(undefined8 param_1,char param_2)

{
  FUN_004036c0(param_1,0xffffffffffffffff,(int)param_2);
  return;
}


void FUN_00403740(undefined8 param_1)

{
  FUN_004036c0(param_1,0xffffffffffffffff,0x3a);
  return;
}


void FUN_00403760(undefined8 param_1,undefined8 param_2)

{
  FUN_004036c0(param_1,param_2,0x3a);
  return;
}


void FUN_00403770(undefined8 param_1,int param_2,undefined8 param_3)

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
    FUN_004030a0(param_1,param_3,0xffffffffffffffff,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004037e0(undefined8 param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5
                 )

{
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  long lStack_20;
  long local_18;
  
  uStack_40 = uRam00000000006074a8;
  local_38 = _DAT_006074b0;
  uStack_30 = uRam00000000006074b8;
  local_28 = _DAT_006074c0;
  lStack_20 = uRam00000000006074c8;
  local_18 = DAT_006074d0;
  local_48 = CONCAT44((int)((ulong)_DAT_006074a0 >> 0x20),10);
  if ((param_2 != 0) && (param_3 != 0)) {
    lStack_20 = param_2;
    local_18 = param_3;
    FUN_004030a0(param_1,param_4,param_5,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00403850(void)

{
  FUN_004037e0();
  return;
}


void FUN_00403860(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_004037e0(0,param_1,param_2,param_3,0xffffffffffffffff);
  return;
}


void FUN_00403880(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_004037e0(0,param_1,param_2,param_3,param_4);
  return;
}


void FUN_004038a0(void)

{
  FUN_004030a0();
  return;
}


void FUN_004038b0(undefined8 param_1,undefined8 param_2)

{
  FUN_004030a0(0,param_1,param_2,&DAT_006071e0);
  return;
}


void FUN_004038d0(undefined8 param_1,undefined8 param_2)

{
  FUN_004030a0(param_1,param_2,0xffffffffffffffff,&DAT_006071e0);
  return;
}


void FUN_004038f0(undefined8 param_1)

{
  FUN_004030a0(0,param_1,0xffffffffffffffff,&DAT_006071e0);
  return;
}


ulong FUN_00403910(FILE *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 param_6)

{
  uint uVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  if (param_2 == 0) {
    fprintf(param_1,"%s %s\n");
  }
  else {
    fprintf(param_1,"%s (%s) %s\n",param_2,param_3,param_4);
  }
  uVar2 = dcgettext(0,&DAT_0040598b,5);
  fprintf(param_1,"Copyright %s %d Free Software Foundation, Inc.",uVar2,0x7df);
  pcVar3 = (char *)dcgettext(0,
                             "\nLicense GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n"
                             ,5);
  fputs(pcVar3,param_1);
  switch(param_6) {
  case 0:
                    /* WARNING: Subroutine does not return */
    abort();
  case 1:
    uVar2 = *param_5;
    pcVar3 = (char *)dcgettext(0,"Written by %s.\n",5);
    uVar1 = fprintf(param_1,pcVar3,uVar2);
    return (ulong)uVar1;
  case 2:
    uVar2 = param_5[1];
    uVar7 = *param_5;
    pcVar3 = (char *)dcgettext(0,"Written by %s and %s.\n",5);
    uVar1 = fprintf(param_1,pcVar3,uVar7,uVar2);
    return (ulong)uVar1;
  case 3:
    uVar2 = param_5[2];
    uVar7 = param_5[1];
    uVar6 = *param_5;
    pcVar3 = (char *)dcgettext(0,"Written by %s, %s, and %s.\n",5);
    uVar1 = fprintf(param_1,pcVar3,uVar6,uVar7,uVar2);
    return (ulong)uVar1;
  case 4:
    uVar2 = param_5[3];
    uVar7 = param_5[2];
    uVar6 = param_5[1];
    uVar5 = *param_5;
    pcVar3 = (char *)dcgettext(0,"Written by %s, %s, %s,\nand %s.\n",5);
    uVar1 = fprintf(param_1,pcVar3,uVar5,uVar6,uVar7,uVar2);
    return (ulong)uVar1;
  case 5:
    uVar8 = param_5[4];
    uVar7 = param_5[3];
    uVar6 = param_5[2];
    uVar2 = param_5[1];
    uVar5 = *param_5;
    pcVar3 = (char *)dcgettext(0,"Written by %s, %s, %s,\n%s, and %s.\n",5);
    break;
  case 6:
    uVar2 = param_5[1];
    uVar8 = param_5[4];
    uVar7 = param_5[3];
    uVar6 = param_5[2];
    uVar5 = *param_5;
    pcVar3 = (char *)dcgettext(0,"Written by %s, %s, %s,\n%s, %s, and %s.\n",5);
    break;
  case 7:
    local_50 = param_5[2];
    local_58 = param_5[1];
    uVar7 = param_5[6];
    uVar6 = param_5[5];
    uVar5 = param_5[4];
    uVar2 = param_5[3];
    uVar4 = *param_5;
    pcVar3 = (char *)dcgettext(0,"Written by %s, %s, %s,\n%s, %s, %s, and %s.\n",5);
    goto LAB_004039fb;
  case 8:
    uVar2 = param_5[3];
    uVar7 = param_5[6];
    uVar6 = param_5[5];
    uVar5 = param_5[4];
    local_50 = param_5[2];
    local_58 = param_5[1];
    uVar4 = *param_5;
    pcVar3 = (char *)dcgettext(0,"Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n",5);
LAB_004039fb:
    uVar1 = fprintf(param_1,pcVar3,uVar4,local_58,local_50,uVar2,uVar5,uVar6,uVar7);
    return (ulong)uVar1;
  case 9:
    local_40 = param_5[8];
    local_48 = param_5[3];
    pcVar3 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n";
    local_50 = param_5[2];
    local_58 = param_5[1];
    uVar2 = param_5[7];
    uVar7 = param_5[6];
    uVar6 = param_5[5];
    uVar5 = param_5[4];
    uVar4 = *param_5;
    goto LAB_00403a70;
  default:
    local_40 = param_5[8];
    local_48 = param_5[3];
    pcVar3 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n";
    local_50 = param_5[2];
    local_58 = param_5[1];
    uVar2 = param_5[7];
    uVar7 = param_5[6];
    uVar6 = param_5[5];
    uVar5 = param_5[4];
    uVar4 = *param_5;
LAB_00403a70:
    pcVar3 = (char *)dcgettext(0,pcVar3,5);
    uVar1 = fprintf(param_1,pcVar3,uVar4,local_58,local_50,local_48,uVar5,uVar6,uVar7,uVar2,local_40
                   );
    return (ulong)uVar1;
  }
  fprintf(param_1,pcVar3,uVar5,uVar2,uVar6,uVar7);
  return uVar8;
}


void FUN_00403d00(void)

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
  FUN_00403910();
  return;
}


void FUN_00403d20(void)

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
  FUN_00403910();
  return;
}


void FUN_00403d80(void)

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
  FUN_00403910();
  return;
}


void FUN_00403e40(void)

{
  FILE *__stream;
  char *pcVar1;
  
  pcVar1 = (char *)dcgettext(0,"\nReport bugs to: %s\n",5);
  printf(pcVar1,"bug-findutils@gnu.org");
  pcVar1 = (char *)dcgettext(0,"%s home page: <%s>\n",5);
  printf(pcVar1,"GNU findutils","http://www.gnu.org/software/findutils/");
  __stream = stdout;
  pcVar1 = (char *)dcgettext(0,"General help using GNU software: <http://www.gnu.org/gethelp/>\n",5)
  ;
  fputs(pcVar1,__stream);
  return;
}


void FUN_00403eb0(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_004040d0();
  }
  return;
}


void FUN_00403ed0(ulong param_1,ulong param_2)

{
  if (SUB168(ZEXT816(param_1) * ZEXT816(param_2) >> 0x40,0) == 0) {
    FUN_00403eb0(SUB168(ZEXT816(param_1) * ZEXT816(param_2),0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004040d0();
}


void thunk_FUN_00403eb0(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_004040d0();
  }
  return;
}


void * FUN_00403f00(void *param_1,size_t param_2)

{
  void *pvVar1;
  
  if ((param_2 == 0) && (param_1 != (void *)0x0)) {
    free(param_1);
    return (void *)0x0;
  }
  pvVar1 = realloc(param_1,param_2);
  if ((pvVar1 == (void *)0x0) && (param_2 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_004040d0();
  }
  return pvVar1;
}


void FUN_00403f40(undefined8 param_1,ulong param_2,ulong param_3)

{
  if (SUB168(ZEXT816(param_2) * ZEXT816(param_3) >> 0x40,0) == 0) {
    FUN_00403f00(param_1,SUB168(ZEXT816(param_2) * ZEXT816(param_3),0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004040d0();
}


void FUN_00403f60(long param_1,ulong *param_2,ulong param_3)

{
  undefined auVar1 [16];
  ulong uVar2;
  
  uVar2 = *param_2;
  if (param_1 == 0) {
    if (uVar2 == 0) {
      auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x80);
      uVar2 = (ulong)(0x80 < param_3) + SUB168(auVar1 / ZEXT816(param_3),0);
      *param_2 = uVar2;
      FUN_00403f00(0,uVar2 * param_3,SUB168(auVar1 % ZEXT816(param_3),0));
      return;
    }
  }
  else {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0xaaaaaaaaaaaaaaaa);
    if (SUB168(auVar1 / ZEXT816(param_3),0) <= uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_004040d0(param_1,param_2,SUB168(auVar1 % ZEXT816(param_3),0));
    }
    uVar2 = (uVar2 >> 1) + 1 + uVar2;
  }
  *param_2 = uVar2;
  FUN_00403f00(param_1,uVar2 * param_3);
  return;
}


void FUN_00403fe0(long param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (param_1 == 0) {
    if (uVar1 == 0) {
      uVar1 = 0x80;
    }
    *param_2 = uVar1;
    FUN_00403f00(0,uVar1);
    return;
  }
  if (uVar1 < 0xaaaaaaaaaaaaaaaa) {
    uVar1 = (uVar1 >> 1) + 1 + uVar1;
    *param_2 = uVar1;
    FUN_00403f00(param_1,uVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004040d0();
}


void FUN_00404030(size_t param_1)

{
  void *__s;
  
  __s = (void *)FUN_00403eb0();
  memset(__s,0,param_1);
  return;
}


void FUN_00404050(size_t param_1,size_t param_2)

{
  void *pvVar1;
  
  pvVar1 = calloc(param_1,param_2);
  if (pvVar1 != (void *)0x0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004040d0();
}


void FUN_00404070(void *param_1,size_t param_2)

{
  void *__dest;
  
  __dest = (void *)FUN_00403eb0(param_2);
  memcpy(__dest,param_1,param_2);
  return;
}


void FUN_004040a0(char *param_1)

{
  size_t sVar1;
  void *__dest;
  
  sVar1 = strlen(param_1);
  __dest = (void *)FUN_00403eb0(sVar1 + 1);
  memcpy(__dest,param_1,sVar1 + 1);
  return;
}


void FUN_004040d0(void)

{
  undefined8 uVar1;
  
  uVar1 = dcgettext(0,"memory exhausted",5);
  error(DAT_006071d8,0,"%s",uVar1);
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00404110(FILE *param_1)

{
  int iVar1;
  
  if (param_1 != (FILE *)0x0) {
    iVar1 = __freading();
    if ((iVar1 != 0) && ((param_1->_flags & 0x100U) != 0)) {
      FUN_00404150(param_1,0,1);
      fflush(param_1);
      return;
    }
  }
  fflush(param_1);
  return;
}


ulong FUN_00404150(FILE *param_1,__off_t param_2,int param_3)

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


size_t FUN_004041b0(wchar_t *param_1,char *param_2,size_t param_3,mbstate_t *param_4)

{
  size_t sVar1;
  
  if (param_2 == (char *)0x0) {
    param_3 = 1;
    param_2 = "";
    param_1 = (wchar_t *)0x0;
  }
  else if (param_3 == 0) {
    return 0xfffffffffffffffe;
  }
  sVar1 = mbrtowc(param_1,param_2,param_3,param_4);
  return sVar1;
}


void FUN_004041e0(char *param_1)

{
  int iVar1;
  int *piVar2;
  undefined auStack_108 [256];
  
  piVar2 = __errno_location();
  iVar1 = FUN_00404260(*piVar2,auStack_108,0x100);
  if (iVar1 == 0x22) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    fprintf(stderr,"%s: %s\n",param_1,auStack_108);
    return;
  }
  fprintf(stderr,"%s\n",auStack_108);
  return;
}


int FUN_00404260(uint param_1,char *param_2,ulong param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  char *__s;
  size_t sVar5;
  
  if (param_3 < 2) {
    iVar3 = 0x22;
    if (param_3 != 0) {
      *param_2 = '\0';
    }
  }
  else {
    *param_2 = '\0';
    piVar4 = __errno_location();
    iVar2 = *piVar4;
    iVar3 = __xpg_strerror_r(param_1,param_2,param_3);
    if (iVar3 < 0) {
      cVar1 = *param_2;
      iVar3 = *piVar4;
    }
    else {
      cVar1 = *param_2;
    }
    if (cVar1 == '\0') {
      __s = strerror_r(param_1,param_2,param_3);
      sVar5 = strlen(__s);
      if (sVar5 < param_3) {
        memcpy(param_2,__s,sVar5 + 1);
      }
      else {
        memcpy(param_2,__s,param_3 - 1);
        param_2[param_3 - 1] = '\0';
      }
      if ((iVar3 == 0x16) && (*param_2 == '\0')) {
        snprintf(param_2,param_3,"Unknown error %d",(ulong)param_1);
      }
    }
    *piVar4 = iVar2;
  }
  return iVar3;
}


int FUN_00404350(FILE *param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  
  lVar3 = __fpending();
  iVar1 = ferror(param_1);
  iVar2 = fclose(param_1);
  if (iVar1 == 0) {
    if (iVar2 == 0) {
      return 0;
    }
    if (lVar3 == 0) {
      piVar4 = __errno_location();
      return -(uint)(*piVar4 != 9);
    }
  }
  else if (iVar2 == 0) {
    piVar4 = __errno_location();
    *piVar4 = 0;
    return -1;
  }
  return -1;
}


/* WARNING: Could not reconcile some variable overlaps */

char * FUN_004043c0(void)

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
  if (DAT_006074d8 != (char *)0x0) goto LAB_004043fa;
  pcVar7 = getenv("CHARSETALIASDIR");
  if ((pcVar7 == (char *)0x0) || (*pcVar7 == '\0')) {
    sVar6 = 0x74;
    sVar5 = 0x66;
    __n = 0x65;
    pcVar7 = 
    "/home/dongkwan/data/scripts/gnu_packages/findutils/findutils-4.6.0_gcc-8.2.0_x86_64_O2_debug/gogo/lib"
    ;
LAB_004044e5:
    __file = (char *)malloc(sVar6);
    if (__file != (char *)0x0) {
      memcpy(__file,pcVar7,__n);
      __file[__n] = '/';
      goto LAB_00404506;
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
        goto LAB_004044e5;
      }
      sVar6 = __n + 0xe;
    }
    __file = (char *)malloc(sVar6);
    if (__file != (char *)0x0) {
      memcpy(__file,pcVar7,__n);
      sVar5 = __n;
LAB_00404506:
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
LAB_004045a0:
          pbVar8 = (byte *)__stream->_IO_read_ptr;
          if (__stream->_IO_read_end <= pbVar8) goto LAB_0040472c;
          do {
            __stream->_IO_read_ptr = (char *)(pbVar8 + 1);
            uVar4 = (uint)*pbVar8;
            __ptr = pcVar7;
            while( true ) {
              pcVar7 = __ptr;
              if ((uVar4 - 9 < 2) || (uVar4 == 0x20)) goto LAB_004045a0;
              if (uVar4 == 0x23) goto LAB_00404791;
              ungetc(uVar4,__stream);
              iVar2 = fscanf(__stream,"%50s %50s",&local_b8,&local_78);
              puVar13 = &local_b8;
              if (iVar2 < 2) goto LAB_0040473f;
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
                fclose(__stream);
                goto LAB_00404544;
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
LAB_0040472c:
              uVar4 = __uflow(__stream);
              __ptr = pcVar7;
              if (uVar4 == 0xffffffff) goto LAB_0040473f;
            }
          } while( true );
        }
        close(iVar2);
      }
      goto LAB_0040453e;
    }
  }
  DAT_006074d8 = "";
LAB_004043fa:
  cVar1 = *DAT_006074d8;
  pcVar7 = DAT_006074d8;
  do {
    if (cVar1 == '\0') {
LAB_00404454:
      if (*__s1 == '\0') {
        __s1 = "ASCII";
      }
      return __s1;
    }
    iVar2 = strcmp(__s1,pcVar7);
    if ((iVar2 == 0) || ((cVar1 == '*' && (pcVar7[1] == '\0')))) {
      sVar6 = strlen(pcVar7);
      __s1 = pcVar7 + sVar6 + 1;
      goto LAB_00404454;
    }
    sVar6 = strlen(pcVar7);
    sVar5 = strlen(pcVar7 + sVar6 + 1);
    pcVar7 = pcVar7 + sVar6 + 1 + sVar5 + 1;
    cVar1 = *pcVar7;
  } while( true );
LAB_00404791:
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
  if (uVar4 == 0xffffffff) goto LAB_0040473f;
  goto LAB_004045a0;
LAB_0040473f:
  fclose(__stream);
  if (local_d0 == 0) {
LAB_0040453e:
    pcVar7 = "";
  }
  else {
    pcVar7[local_d0] = '\0';
  }
LAB_00404544:
  free(__file);
  DAT_006074d8 = pcVar7;
  goto LAB_004043fa;
}


/* WARNING: Removing unreachable block (ram,0x00404963) */
/* WARNING: Removing unreachable block (ram,0x00404968) */

void FUN_00404930(void)

{
  __DT_INIT();
  return;
}


void FUN_00404990(void)

{
  return;
}


void FUN_004049a0(undefined8 param_1)

{
  __cxa_atexit(param_1,0,DAT_006071c8);
  return;
}


undefined8 FUN_004049b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code **ppcVar1;
  
  for (ppcVar1 = (code **)&DAT_00606e30; *ppcVar1 != (code *)0xffffffffffffffff;
      ppcVar1 = ppcVar1 + -1) {
    (**ppcVar1)();
  }
  return param_3;
}


void __DT_FINI(void)

{
  FUN_00401af1();
  return;
}

