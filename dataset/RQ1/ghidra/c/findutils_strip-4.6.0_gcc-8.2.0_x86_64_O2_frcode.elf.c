
void switchD_00401ea2::caseD_b(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_004014f5(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_004014fa(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_004014ff(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401504(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void switchD_0040374f::caseD_0(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


undefined8 FUN_00401510(int param_1,char **param_2)

{
  bool bVar1;
  _IO_FILE *__fp;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  long lVar7;
  undefined8 uVar8;
  __ssize_t _Var9;
  char *pcVar10;
  size_t sVar11;
  int __c;
  char *pcVar12;
  size_t local_68;
  char *local_50;
  size_t local_48;
  char *local_40 [2];
  
  pcVar5 = *param_2;
  if (pcVar5 == (char *)0x0) {
    pcVar5 = "frcode";
  }
  FUN_00401cb0(pcVar5);
  iVar2 = FUN_00405810(FUN_00401c10);
  if (iVar2 != 0) {
    uVar8 = dcgettext(0,"The atexit library function failed",5);
    piVar6 = __errno_location();
    error(1,*piVar6,uVar8);
  }
  lVar7 = 0;
  bVar1 = false;
  iVar2 = 10;
  local_48 = 0x402;
  local_50 = (char *)FUN_00403c70(0x402);
  pcVar5 = (char *)FUN_00403c70(0x402);
  *pcVar5 = '\0';
  do {
    while( true ) {
      iVar3 = FUN_00405110(param_1,param_2,"hv0S:",&PTR_DAT_00405a60,0);
      pcVar12 = DAT_00608400;
      if (iVar3 == -1) {
        if (DAT_00608218._4_4_ == param_1) {
          if (bVar1) {
            fputc(0x31 - (uint)(lVar7 == 0),stdout);
            fputc(0,stdout);
          }
          else {
            sVar11 = fwrite(&DAT_00405a40,1,10,stdout);
            if (sVar11 != 10) {
              uVar8 = dcgettext(0,"Failed to write to standard output",5);
              piVar6 = __errno_location();
              error(1,*piVar6,uVar8);
            }
          }
          local_68 = 0x402;
          iVar3 = 0;
          goto LAB_0040175e;
        }
        goto LAB_004015d8;
      }
      if (iVar3 != 0x53) break;
      piVar6 = __errno_location();
      *piVar6 = 0;
      lVar7 = strtol(pcVar12,local_40,10);
      if (lVar7 == 0) {
        if (local_40[0] == DAT_00608400) {
          uVar8 = dcgettext(0,"You need to specify a security level as a decimal integer.",5);
          error(1,0,uVar8);
          goto LAB_00401711;
        }
        if (*local_40[0] != '\0') goto LAB_004016e1;
      }
      else {
        if (lVar7 + 0x7fffffffffffffffU < 0xfffffffffffffffe) {
          if (*local_40[0] != '\0') {
LAB_004016e1:
            uVar8 = dcgettext(0,"Security level %s has unexpected suffix %s.",5);
            error(1,0,uVar8,pcVar12);
            goto LAB_00401711;
          }
          if (lVar7 == 1) goto LAB_004016a1;
        }
        else if (*piVar6 == 0) {
          if (*local_40[0] != '\0') goto LAB_004016e1;
        }
        else {
          uVar8 = dcgettext(0,"Security level %s is outside the convertible range.",5);
          error(1,0,uVar8,pcVar12);
LAB_00401711:
          lVar7 = -1;
        }
        uVar8 = dcgettext(0,"slocate security level %ld is unsupported.",5);
        error(1,0,uVar8,lVar7);
      }
LAB_004016a1:
      bVar1 = true;
    }
    if (0x53 < iVar3) {
      if (iVar3 == 0x68) {
        FUN_00401b10(stdout);
        return 0;
      }
      if (iVar3 == 0x76) {
        FUN_00401b70("frcode");
        return 0;
      }
      goto LAB_004015d8;
    }
    iVar2 = 0;
    if (iVar3 != 0x30) {
LAB_004015d8:
      FUN_00401b10(stderr);
      return 1;
    }
  } while( true );
LAB_0040175e:
  pcVar12 = pcVar5;
  _Var9 = getdelim(&local_50,&local_48,iVar2,stdin);
  if ((int)_Var9 < 1) {
    free(local_50);
    free(pcVar12);
    return 0;
  }
  local_50[(long)(int)_Var9 + -1] = '\0';
  pcVar5 = pcVar12;
  if ((*local_50 == *pcVar12) && (*pcVar12 != '\0')) {
    pcVar10 = local_50;
    do {
      pcVar5 = pcVar5 + 1;
      pcVar10 = pcVar10 + 1;
      if ((*pcVar10 != *pcVar5) || (*pcVar5 == '\0')) break;
    } while (pcVar5 != pcVar12 + 0x7ffffffe);
  }
  iVar4 = (int)pcVar5 - (int)pcVar12;
  __c = iVar4 - iVar3;
  if (0xffff < __c + 0x8000U) {
    __c = -iVar3;
    iVar4 = 0;
  }
  iVar3 = iVar4;
  if (!bVar1) {
    if (__c + 0x7fU < 0xff) {
      iVar4 = _IO_putc(__c,stdout);
joined_r0x004018c7:
      if (iVar4 != -1) goto LAB_00401862;
    }
    else {
      iVar4 = _IO_putc(0x80,stdout);
      if (iVar4 == -1) {
        FUN_00401ae0();
      }
      __fp = stdout;
      if (0x7fff < __c) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("c <= SHRT_MAX","frcode.c",0x7b,"put_short");
      }
      if (__c < -0x8000) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("c >= SHRT_MIN","frcode.c",0x7c,"put_short");
      }
      iVar4 = _IO_putc(__c >> 8,stdout);
      if (iVar4 != -1) {
        iVar4 = _IO_putc(__c,__fp);
        goto joined_r0x004018c7;
      }
    }
    FUN_00401ae0();
  }
LAB_00401862:
  iVar4 = fputs(local_50 + iVar3,stdout);
  if ((iVar4 == -1) || (iVar4 = _IO_putc(0,stdout), iVar4 == -1)) {
    FUN_00401ae0();
  }
  sVar11 = local_48;
  bVar1 = false;
  local_48 = local_68;
  pcVar5 = local_50;
  local_68 = sVar11;
  local_50 = pcVar12;
  goto LAB_0040175e;
}


void FUN_00401a00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_retaddr;
  undefined auStack_8 [8];
  
  (*(code *)PTR___libc_start_main_00607ff0)
            (FUN_00401510,unaff_retaddr,&stack0x00000008,FUN_004057a0,FUN_00405800,param_3,auStack_8
            );
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* WARNING: Removing unreachable block (ram,0x00401a38) */
/* WARNING: Removing unreachable block (ram,0x00401a42) */

void FUN_00401a2b(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00401a79) */

void FUN_00401a4a(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00401ab6) */

void FUN_00401a81(void)

{
  if (DAT_00608248 != '\0') {
    return;
  }
  FUN_00401a2b();
  DAT_00608248 = 1;
  return;
}


/* WARNING: Removing unreachable block (ram,0x00401a79) */

void thunk_FUN_00401a4a(void)

{
  return;
}


void FUN_00401ae0(void)

{
  undefined8 uVar1;
  int *piVar2;
  
  uVar1 = dcgettext(0,"write error",5);
  piVar2 = __errno_location();
  error(1,*piVar2,uVar1);
  return;
}


void FUN_00401b10(FILE *param_1)

{
  undefined8 uVar1;
  char *pcVar2;
  
  uVar1 = DAT_00608268;
  pcVar2 = (char *)dcgettext(0,"Usage: %s [-0 | --null] [--version] [--help]\n",5);
  fprintf(param_1,pcVar2,uVar1);
  pcVar2 = (char *)dcgettext(0,"\nReport bugs to <bug-findutils@gnu.org>.\n",5);
  fputs(pcVar2,param_1);
  return;
}


undefined  [16] FUN_00401b70(undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_00403ed0(stderr);
  uVar1 = dcgettext(0,"Kevin Dalley",5);
  uVar2 = dcgettext(0,"James Youngman",5);
  uVar3 = dcgettext(0,"Eric B. Decker",5);
  FUN_00403b40(stdout,param_1,"GNU findutils",PTR_s_4_6_0_006081b0,uVar3,uVar2);
  return ZEXT816(uVar1);
}


void FUN_00401bf0(undefined8 param_1)

{
  DAT_00608260 = param_1;
  return;
}


void FUN_00401c00(undefined param_1)

{
  DAT_00608258 = param_1;
  return;
}


void FUN_00401c10(void)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  iVar1 = FUN_004051c0(stdout);
  if (iVar1 != 0) {
    piVar2 = __errno_location();
    if ((DAT_00608258 == '\0') || (*piVar2 != 0x20)) {
      uVar3 = dcgettext(0,"write error",5);
      if (DAT_00608260 == 0) {
        error(0,*piVar2,"%s",uVar3);
      }
      else {
        uVar4 = FUN_00403500();
        error(0,*piVar2,"%s: %s",uVar4,uVar3);
      }
      goto LAB_00401c8e;
    }
  }
  iVar1 = FUN_004051c0(stderr);
  if (iVar1 == 0) {
    return;
  }
LAB_00401c8e:
                    /* WARNING: Subroutine does not return */
  _exit(DAT_006081b8);
}


void FUN_00401cb0(byte *param_1)

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
        pbVar6 = &DAT_00405b68;
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
  DAT_00608268 = param_1;
  program_invocation_name = param_1;
  return;
}


char * FUN_00401d50(char *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  byte *pbVar3;
  
  pcVar2 = (char *)dcgettext(0,param_1,5);
  if (param_1 == pcVar2) {
    pbVar3 = (byte *)FUN_00405230();
    if ((*pbVar3 & 0xdf) == 0x55) {
      if (((((pbVar3[1] & 0xdf) != 0x54) || ((pbVar3[2] & 0xdf) != 0x46)) || (pbVar3[3] != 0x2d)) ||
         ((pbVar3[4] != 0x38 || (pbVar3[5] != 0)))) {
LAB_00401e28:
        pcVar2 = "\"";
        if (param_2 != 9) {
          pcVar2 = "\'";
        }
        return pcVar2;
      }
      cVar1 = *pcVar2;
      pcVar2 = &DAT_00405b79;
      if (cVar1 != '`') {
        pcVar2 = &DAT_00405b6e;
      }
    }
    else {
      if (((((*pbVar3 & 0xdf) != 0x47) || ((pbVar3[1] & 0xdf) != 0x42)) || (pbVar3[2] != 0x31)) ||
         (((pbVar3[3] != 0x38 || (pbVar3[4] != 0x30)) ||
          ((pbVar3[5] != 0x33 || ((pbVar3[6] != 0x30 || (pbVar3[7] != 0)))))))) goto LAB_00401e28;
      cVar1 = *pcVar2;
      pcVar2 = &DAT_00405b75;
      if (cVar1 != '`') {
        pcVar2 = &DAT_00405b72;
      }
    }
  }
  return pcVar2;
}


ulong FUN_00401e50(undefined *param_1,ulong param_2,char *param_3,ulong param_4,int param_5,
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
LAB_004020a6:
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
      goto LAB_004020a6;
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
      param_8 = (char *)FUN_00401d50(&DAT_00405b7d,param_5);
      param_9 = (char *)FUN_00401d50(&DAT_00406c99,param_5);
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
LAB_00401ef0:
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
    goto LAB_00402630;
  }
  bVar2 = (bool)(param_5 != 2 & local_ac);
  __s1 = (byte *)(param_3 + uVar20);
  uVar14 = uVar15;
  bVar22 = local_5b;
  bVar3 = bVar9;
  if (bVar2 != false) {
    if (local_98 == 0) {
LAB_00402800:
      uVar19 = (ulong)*__s1;
      switch(uVar19) {
      case 0:
        goto switchD_00402812_caseD_0;
      default:
        bVar2 = false;
        goto switchD_004025ee_caseD_1;
      case 7:
switchD_00402812_caseD_7:
        bVar18 = 0x61;
        break;
      case 8:
switchD_00402812_caseD_8:
        bVar18 = 0x62;
        break;
      case 9:
switchD_00402812_caseD_9:
        bVar18 = 0x74;
        break;
      case 10:
switchD_00402812_caseD_a:
        bVar18 = 0x6e;
        break;
      case 0xb:
switchD_00402812_caseD_b:
        bVar18 = 0x76;
        break;
      case 0xc:
switchD_00402812_caseD_c:
        bVar18 = 0x66;
        break;
      case 0xd:
        bVar2 = false;
switchD_00401fe1_caseD_d:
        uVar19 = 0xd;
        bVar10 = 0x72;
        bVar21 = param_5 == 2;
        goto LAB_004023d0;
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
switchD_00401fe1_caseD_20:
        bVar21 = false;
        goto LAB_004022b8;
      case 0x23:
      case 0x7e:
        bVar2 = false;
switchD_00401fe1_caseD_23:
        if (uVar20 == 0) {
          bVar21 = false;
          goto LAB_004022b8;
        }
        goto switchD_00401fe1_caseD_25;
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
        goto switchD_00401fe1_caseD_25;
      case 0x27:
        bVar2 = false;
        goto switchD_004025ee_caseD_27;
      case 0x3f:
        bVar2 = false;
        goto switchD_004025ee_caseD_3f;
      case 0x5c:
        bVar2 = false;
        goto switchD_00401fe1_caseD_5c;
      case 0x7b:
      case 0x7d:
        bVar2 = false;
        goto switchD_004025ee_caseD_7b;
      }
      bVar22 = false;
      goto joined_r0x004023f5;
    }
    if ((param_4 == 0xffffffffffffffff) && (1 < local_98)) {
      param_4 = strlen(param_3);
    }
    if ((param_4 < uVar20 + local_98) || (iVar4 = memcmp(__s1,local_70,local_98), iVar4 != 0))
    goto LAB_00402800;
    if (local_5b == false) {
      uVar19 = (ulong)*__s1;
      switch(uVar19) {
      case 0:
        goto switchD_00401fe1_caseD_0;
      default:
        goto switchD_004025ee_caseD_1;
      case 7:
        goto switchD_00402812_caseD_7;
      case 8:
        goto switchD_00402812_caseD_8;
      case 9:
        goto switchD_00402812_caseD_9;
      case 10:
        goto switchD_00402812_caseD_a;
      case 0xb:
        goto switchD_00402812_caseD_b;
      case 0xc:
        goto switchD_00402812_caseD_c;
      case 0xd:
        goto switchD_00401fe1_caseD_d;
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
        goto switchD_00401fe1_caseD_20;
      case 0x23:
      case 0x7e:
        goto switchD_00401fe1_caseD_23;
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
        goto switchD_00401fe1_caseD_25;
      case 0x27:
        goto switchD_004025ee_caseD_27;
      case 0x3f:
        goto switchD_004025ee_caseD_3f;
      case 0x5c:
        goto switchD_00401fe1_caseD_5c;
      case 0x7b:
      case 0x7d:
        goto switchD_004025ee_caseD_7b;
      }
    }
    goto LAB_00402642;
  }
  uVar19 = (ulong)*__s1;
  switch(uVar19) {
  case 0:
    if (local_ac == 0) {
      if ((param_6 & 1) != 0) goto LAB_00402b10;
      if (local_5b == false) {
        uVar20 = uVar20 + 1;
        bVar18 = 0;
        goto LAB_00402758;
      }
      bVar21 = false;
      bVar16 = false;
      if (param_7 != 0) {
        bVar2 = false;
        uVar19 = 0;
        goto LAB_00402009;
      }
      bVar18 = 0;
      goto LAB_00402562;
    }
switchD_00402812_caseD_0:
    if (local_5b == false) {
      bVar2 = false;
switchD_00401fe1_caseD_0:
      bVar22 = param_5 == 2;
      bVar3 = (bVar9 ^ 1) & bVar22;
      if (bVar3 == 0) {
        bVar3 = bVar9;
        if (uVar15 < param_2) goto LAB_004024f5;
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
          goto LAB_00402377;
        }
LAB_004024f5:
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
        goto LAB_0040252b;
      }
      bVar18 = 0x30;
      goto LAB_00402377;
    }
    bVar22 = param_5 == 2;
LAB_00402630:
    if ((local_ac != 0) && (bVar22 != false)) {
      param_5 = 4;
    }
LAB_00402642:
    uVar15 = FUN_00401e50(param_1,param_2,param_3,param_4,param_5,param_6 & 0xfffffffd,0,param_8,
                          param_9);
    return uVar15;
  default:
switchD_004025ee_caseD_1:
    if (sVar5 != 1) {
      local_40[0] = (mbstate_t)0x0;
      if (param_4 == 0xffffffffffffffff) {
        param_4 = strlen(param_3);
      }
      uVar8 = 0;
      do {
        uVar1 = uVar20 + uVar8;
        lVar7 = FUN_00405190(&local_44,param_3 + uVar1,param_4 - uVar1,local_40);
        if (lVar7 == 0) {
          bVar10 = local_ac & (bVar21 ^ 1U);
          goto LAB_00402d10;
        }
        bVar10 = local_ac;
        if (lVar7 == -1) goto LAB_00402d10;
        if (lVar7 == -2) {
          if ((param_4 <= uVar1) || (param_3[uVar1] == '\0')) goto LAB_00402d10;
          goto LAB_00402d9f;
        }
        bVar22 = (bool)(param_5 == 2 & local_5b);
        if ((bVar22 != false) && (lVar7 != 1)) {
          pcVar13 = param_3 + uVar1 + 1;
          do {
            if (((byte)(*pcVar13 + 0xa5U) < 0x22) &&
               ((1L << (*pcVar13 + 0xa5U & 0x3f) & 0x20000002bU) != 0)) goto LAB_00402630;
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
      goto LAB_00402d10;
    }
    ppuVar6 = __ctype_b_loc();
    uVar8 = 1;
    bVar10 = ((byte)((*ppuVar6)[uVar19] >> 0xe) ^ 1) & local_ac;
    goto LAB_004025c8;
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
    goto LAB_00402603;
  case 10:
    uVar19 = 10;
    bVar10 = 0x6e;
    goto LAB_00402603;
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
LAB_00402603:
    bVar22 = (bool)(local_5b & param_5 == 2);
    bVar2 = bVar22;
    bVar21 = param_5 == 2;
    if (bVar22 != false) goto LAB_00402630;
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
    goto LAB_004022a6;
  case 0x23:
  case 0x7e:
    goto LAB_004022a1;
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
    goto switchD_004025ee_caseD_25;
  case 0x27:
switchD_004025ee_caseD_27:
    bVar21 = false;
    uVar19 = 0x27;
    if (param_5 != 2) goto LAB_004022b8;
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
LAB_00402377:
      uVar20 = uVar20 + 1;
      bVar9 = bVar3;
      if (bVar2 != false) goto LAB_004022df;
      goto LAB_00402087;
    }
    goto LAB_00402630;
  case 0x3f:
switchD_004025ee_caseD_3f:
    if (param_5 != 2) {
      if (param_5 != 5) {
        bVar21 = param_5 == 2;
        uVar19 = 0x3f;
        goto LAB_004022b8;
      }
      if ((param_6 & 4) == 0) {
        bVar21 = false;
        uVar19 = 0x3f;
        goto LAB_004022b8;
      }
      uVar8 = uVar20 + 2;
      bVar21 = false;
      uVar19 = 0x3f;
      if ((param_4 <= uVar8) || (param_3[uVar20 + 1] != '?')) goto LAB_004022b8;
      uVar19 = (ulong)(byte)param_3[uVar8];
      if ((0x3e < (byte)param_3[uVar8]) || ((0x7000a38200000000U >> (uVar19 & 0x3f) & 1) == 0)) {
        uVar19 = 0x3f;
        goto LAB_004022b8;
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
LAB_0040252b:
        bVar18 = (byte)uVar19;
        uVar15 = uVar14;
        bVar3 = bVar9;
        if ((local_ac == 0) || (bVar22)) goto LAB_004022d0;
        if (param_7 != 0) goto LAB_00402009;
        goto LAB_00402550;
      }
      goto LAB_00402642;
    }
    if (local_5b == false) {
      bVar21 = false;
      bVar18 = 0x3f;
      goto LAB_004022d0;
    }
    goto LAB_00402630;
  case 0x5c:
    if (param_5 == 2) {
      if (local_5b == false) {
        uVar20 = uVar20 + 1;
        bVar18 = 0x5c;
        goto LAB_00402758;
      }
      goto LAB_00402630;
    }
switchD_00401fe1_caseD_5c:
    uVar19 = 0x5c;
    bVar18 = 0x5c;
    bVar10 = 0x5c;
    bVar21 = (bool)(local_ac & local_5b & local_98 != 0);
    if (bVar21 == false) break;
    uVar20 = uVar20 + 1;
LAB_00402758:
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
    goto LAB_00402087;
  case 0x7b:
  case 0x7d:
switchD_004025ee_caseD_7b:
    bVar22 = param_4 != 1;
    if (param_4 == 0xffffffffffffffff) {
      bVar22 = param_3[1] != '\0';
    }
    bVar21 = param_5 == 2;
    if (bVar22) goto LAB_004022b8;
LAB_004022a1:
    bVar21 = param_5 == 2;
    if (uVar20 != 0) goto LAB_004022b8;
LAB_004022a6:
    bVar21 = param_5 == 2;
    bVar22 = (bool)(local_5b & bVar21);
    if (bVar22 != false) goto LAB_00402630;
LAB_004022b8:
    bVar18 = (byte)uVar19;
    bVar21 = (bool)((local_ac ^ 1 | bVar21) ^ 1 | local_5b);
    if (bVar21 == false) {
LAB_004022d0:
      uVar20 = uVar20 + 1;
      uVar14 = uVar15;
      if (bVar2 == false) {
        bVar9 = (bVar21 ^ 1U) & bVar3;
        goto LAB_00402758;
      }
LAB_004022df:
      bVar22 = param_5 == 2;
    }
    else {
switchD_00401fe1_caseD_25:
      bVar18 = (byte)uVar19;
      bVar21 = false;
      if (param_7 == 0) {
LAB_00402550:
        bVar22 = param_5 == 2;
        uVar15 = uVar14;
        bVar16 = bVar21;
        bVar3 = bVar9;
        if (bVar2 == false) {
LAB_00402562:
          uVar20 = uVar20 + 1;
          bVar9 = (bVar16 ^ 1U) & bVar3;
          uVar14 = uVar15;
          goto LAB_00402758;
        }
      }
      else {
LAB_00402009:
        bVar18 = (byte)uVar19;
        uVar14 = uVar15;
        if ((*(uint *)(param_7 + (uVar19 >> 5) * 4) >> (bVar18 & 0x1f) & 1) == 0) goto LAB_00402550;
        bVar22 = param_5 == 2;
        bVar3 = bVar9;
      }
joined_r0x004023f5:
      if (local_5b != false) goto LAB_00402630;
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
LAB_00402087:
    if (uVar14 < param_2) {
      param_1[uVar14] = bVar18;
    }
    uVar15 = uVar14 + 1;
    goto LAB_00401ef0;
  }
LAB_004023d0:
  bVar22 = bVar21;
  bVar18 = bVar10;
  bVar21 = bVar22;
  if (local_ac == 0) goto LAB_004022b8;
  goto joined_r0x004023f5;
  while (__s1[uVar8] != 0) {
LAB_00402d9f:
    uVar8 = uVar8 + 1;
    if (param_4 <= uVar20 + uVar8) break;
  }
LAB_00402d10:
  bVar12 = bVar10;
  if (1 < uVar8) {
LAB_00402b1e:
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
        if (uVar8 <= uVar20) goto LAB_00402758;
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
        if (local_5b != false) goto LAB_00402630;
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
        if (uVar8 <= uVar20) goto LAB_00402087;
      }
      uVar15 = uVar15 + 1;
      if (uVar14 < param_2) {
        param_1[uVar14] = bVar18;
      }
      uVar19 = (ulong)(byte)param_3[uVar15];
      uVar14 = uVar14 + 1;
    } while( true );
  }
LAB_004025c8:
  bVar12 = local_ac;
  if (bVar10 != 0) goto LAB_00402b1e;
switchD_004025ee_caseD_25:
  bVar21 = param_5 == 2;
  goto LAB_004022b8;
LAB_00402b10:
  uVar20 = uVar20 + 1;
  goto LAB_00401ef0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00402e60(uint param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

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
    puVar8 = (undefined4 *)PTR_DAT_006081f8;
    if (DAT_00608210 <= param_1) {
      if (PTR_DAT_006081f8 == &DAT_00608200) {
        puVar8 = (undefined4 *)FUN_00403cc0(0);
        uVar6 = PTR_DAT_00608208._4_4_;
        uVar5 = PTR_DAT_00608208._0_4_;
        uVar3 = _UNK_00608204;
        PTR_DAT_006081f8 = (undefined *)puVar8;
        *puVar8 = _DAT_00608200;
        puVar8[1] = uVar3;
        puVar8[2] = uVar5;
        puVar8[3] = uVar6;
      }
      else {
        puVar8 = (undefined4 *)FUN_00403cc0(PTR_DAT_006081f8);
        PTR_DAT_006081f8 = (undefined *)puVar8;
      }
      memset(puVar8 + (ulong)DAT_00608210 * 4,0,((ulong)(param_1 + 1) - (ulong)DAT_00608210) * 0x10)
      ;
      DAT_00608210 = param_1 + 1;
    }
    uVar2 = param_4[1];
    puVar10 = (ulong *)(puVar8 + (long)(int)param_1 * 4);
    uVar4 = *puVar10;
    __ptr = (undefined *)puVar10[1];
    uVar9 = FUN_00401e50(__ptr,uVar4,param_2,param_3,*param_4,uVar2 | 1,param_4 + 2,
                         *(undefined8 *)(param_4 + 10),*(undefined8 *)(param_4 + 0xc));
    if (uVar4 <= uVar9) {
      uVar9 = uVar9 + 1;
      *puVar10 = uVar9;
      if (__ptr != &DAT_00608280) {
        free(__ptr);
      }
      __ptr = (undefined *)FUN_00403c70(uVar9);
      uVar3 = *param_4;
      puVar10[1] = (ulong)__ptr;
      FUN_00401e50(__ptr,uVar9,param_2,param_3,uVar3,uVar2 | 1,param_4 + 2,
                   *(undefined8 *)(param_4 + 10),*(undefined8 *)(param_4 + 0xc));
    }
    *piVar7 = iVar1;
    return __ptr;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00403000(undefined *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_00608380;
  }
  FUN_00403e30(param_1,0x38);
  *piVar2 = iVar1;
  return;
}


undefined4 FUN_00403040(undefined4 *param_1)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)&DAT_00608380;
  }
  return *param_1;
}


void FUN_00403050(undefined4 *param_1,undefined4 param_2)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)&DAT_00608380;
  }
  *param_1 = param_2;
  return;
}


uint FUN_00403060(undefined *param_1,byte param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_00608380;
  }
  uVar1 = *(uint *)(param_1 + (ulong)(param_2 >> 5) * 4 + 8);
  uVar2 = uVar1 >> (param_2 & 0x1f);
  *(uint *)(param_1 + (ulong)(param_2 >> 5) * 4 + 8) =
       ((param_3 ^ uVar2) & 1) << (param_2 & 0x1f) ^ uVar1;
  return uVar2 & 1;
}


undefined4 FUN_004030a0(undefined *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_00608380;
  }
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_1 + 4) = param_2;
  return uVar1;
}


void FUN_004030c0(undefined4 *param_1,long param_2,long param_3)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)&DAT_00608380;
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


void FUN_004030f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 *param_5)

{
  int iVar1;
  int *piVar2;
  
  if (param_5 == (undefined4 *)0x0) {
    param_5 = (undefined4 *)&DAT_00608380;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  FUN_00401e50(param_1,param_2,param_3,param_4,*param_5,param_5[1],param_5 + 2,
               *(undefined8 *)(param_5 + 10),*(undefined8 *)(param_5 + 0xc));
  *piVar2 = iVar1;
  return;
}


undefined8 FUN_00403170(undefined8 param_1,undefined8 param_2,long *param_3,undefined4 *param_4)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  
  if (param_4 == (undefined4 *)0x0) {
    param_4 = (undefined4 *)&DAT_00608380;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  uVar5 = (uint)(param_3 == (long *)0x0) | param_4[1];
  lVar3 = FUN_00401e50(0,0,param_1,param_2,*param_4,uVar5,param_4 + 2,*(undefined8 *)(param_4 + 10),
                       *(undefined8 *)(param_4 + 0xc));
  uVar4 = FUN_00403c70(lVar3 + 1);
  FUN_00401e50(uVar4,lVar3 + 1,param_1,param_2,*param_4,uVar5,param_4 + 2,
               *(undefined8 *)(param_4 + 10),*(undefined8 *)(param_4 + 0xc));
  *piVar2 = iVar1;
  if (param_3 != (long *)0x0) {
    *param_3 = lVar3;
  }
  return uVar4;
}


void FUN_00403260(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00403170(param_1,param_2,0,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403270(void)

{
  void **ppvVar1;
  void *__ptr;
  undefined *__ptr_00;
  void **ppvVar2;
  
  __ptr_00 = PTR_DAT_006081f8;
  if (1 < DAT_00608210) {
    ppvVar2 = (void **)(PTR_DAT_006081f8 + 0x18);
    ppvVar1 = (void **)(PTR_DAT_006081f8 + (ulong)(DAT_00608210 - 2) * 0x10 + 0x28);
    do {
      __ptr = *ppvVar2;
      ppvVar2 = ppvVar2 + 2;
      free(__ptr);
    } while (ppvVar2 != ppvVar1);
  }
  if (*(undefined **)(__ptr_00 + 8) != &DAT_00608280) {
    free(*(undefined **)(__ptr_00 + 8));
    _DAT_00608200 = 0x100;
    PTR_DAT_00608208 = &DAT_00608280;
  }
  if (__ptr_00 != &DAT_00608200) {
    free(__ptr_00);
    PTR_DAT_006081f8 = &DAT_00608200;
  }
  DAT_00608210 = 1;
  return;
}


void FUN_00403310(undefined8 param_1,undefined8 param_2)

{
  FUN_00402e60(param_1,param_2,0xffffffffffffffff,&DAT_00608380);
  return;
}


void FUN_00403330(void)

{
  FUN_00402e60();
  return;
}


void FUN_00403340(undefined8 param_1)

{
  FUN_00402e60(0,param_1,0xffffffffffffffff,&DAT_00608380);
  return;
}


void FUN_00403360(undefined8 param_1,undefined8 param_2)

{
  FUN_00402e60(0,param_1,param_2,&DAT_00608380);
  return;
}


void FUN_00403380(undefined8 param_1,int param_2,undefined8 param_3)

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
    FUN_00402e60(param_1,param_3,0xffffffffffffffff,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_004033f0(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

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
    FUN_00402e60(param_1,param_3,param_4,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00403460(undefined4 param_1,undefined8 param_2)

{
  FUN_00403380(0,param_1,param_2);
  return;
}


void FUN_00403470(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_004033f0(0,param_1,param_2,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403480(undefined8 param_1,undefined8 param_2,byte param_3)

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
  
  local_18 = DAT_006083b0;
  local_48 = _DAT_00608380;
  uStack_40 = uRam0000000000608388;
  local_38 = _DAT_00608390;
  uStack_30 = uRam0000000000608398;
  puVar1 = (uint *)((long)&uStack_40 + (ulong)(param_3 >> 5) * 4);
  local_28 = _DAT_006083a0;
  uStack_20 = uRam00000000006083a8;
  uVar2 = *puVar1;
  *puVar1 = (~(uVar2 >> (param_3 & 0x1f)) & 1) << (param_3 & 0x1f) ^ uVar2;
  FUN_00402e60(0,param_1,param_2,&local_48);
  return;
}


void FUN_004034f0(undefined8 param_1,char param_2)

{
  FUN_00403480(param_1,0xffffffffffffffff,(int)param_2);
  return;
}


void FUN_00403500(undefined8 param_1)

{
  FUN_00403480(param_1,0xffffffffffffffff,0x3a);
  return;
}


void FUN_00403520(undefined8 param_1,undefined8 param_2)

{
  FUN_00403480(param_1,param_2,0x3a);
  return;
}


void FUN_00403530(undefined8 param_1,int param_2,undefined8 param_3)

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
    FUN_00402e60(param_1,param_3,0xffffffffffffffff,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004035a0(undefined8 param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5
                 )

{
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  long lStack_20;
  long local_18;
  
  uStack_40 = uRam0000000000608388;
  local_38 = _DAT_00608390;
  uStack_30 = uRam0000000000608398;
  local_28 = _DAT_006083a0;
  lStack_20 = uRam00000000006083a8;
  local_18 = DAT_006083b0;
  local_48 = CONCAT44((int)((ulong)_DAT_00608380 >> 0x20),10);
  if ((param_2 != 0) && (param_3 != 0)) {
    lStack_20 = param_2;
    local_18 = param_3;
    FUN_00402e60(param_1,param_4,param_5,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00403610(void)

{
  FUN_004035a0();
  return;
}


void FUN_00403620(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_004035a0(0,param_1,param_2,param_3,0xffffffffffffffff);
  return;
}


void FUN_00403640(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_004035a0(0,param_1,param_2,param_3,param_4);
  return;
}


void FUN_00403660(void)

{
  FUN_00402e60();
  return;
}


void FUN_00403670(undefined8 param_1,undefined8 param_2)

{
  FUN_00402e60(0,param_1,param_2,&DAT_006081c0);
  return;
}


void FUN_00403690(undefined8 param_1,undefined8 param_2)

{
  FUN_00402e60(param_1,param_2,0xffffffffffffffff,&DAT_006081c0);
  return;
}


void FUN_004036b0(undefined8 param_1)

{
  FUN_00402e60(0,param_1,0xffffffffffffffff,&DAT_006081c0);
  return;
}


ulong FUN_004036d0(FILE *param_1,long param_2,undefined8 param_3,undefined8 param_4,
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
  uVar2 = dcgettext(0,&DAT_004068cb,5);
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
    goto LAB_004037bb;
  case 8:
    uVar2 = param_5[3];
    uVar7 = param_5[6];
    uVar6 = param_5[5];
    uVar5 = param_5[4];
    local_50 = param_5[2];
    local_58 = param_5[1];
    uVar4 = *param_5;
    pcVar3 = (char *)dcgettext(0,"Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n",5);
LAB_004037bb:
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
    goto LAB_00403830;
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
LAB_00403830:
    pcVar3 = (char *)dcgettext(0,pcVar3,5);
    uVar1 = fprintf(param_1,pcVar3,uVar4,local_58,local_50,local_48,uVar5,uVar6,uVar7,uVar2,local_40
                   );
    return (ulong)uVar1;
  }
  fprintf(param_1,pcVar3,uVar5,uVar2,uVar6,uVar7);
  return uVar8;
}


void FUN_00403ac0(void)

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
  FUN_004036d0();
  return;
}


void FUN_00403ae0(void)

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
  FUN_004036d0();
  return;
}


void FUN_00403b40(void)

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
  FUN_004036d0();
  return;
}


void FUN_00403c00(void)

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


void FUN_00403c70(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00403e90();
  }
  return;
}


void FUN_00403c90(ulong param_1,ulong param_2)

{
  if (SUB168(ZEXT816(param_1) * ZEXT816(param_2) >> 0x40,0) == 0) {
    FUN_00403c70(SUB168(ZEXT816(param_1) * ZEXT816(param_2),0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00403e90();
}


void thunk_FUN_00403c70(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00403e90();
  }
  return;
}


void * FUN_00403cc0(void *param_1,size_t param_2)

{
  void *pvVar1;
  
  if ((param_2 == 0) && (param_1 != (void *)0x0)) {
    free(param_1);
    return (void *)0x0;
  }
  pvVar1 = realloc(param_1,param_2);
  if ((pvVar1 == (void *)0x0) && (param_2 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00403e90();
  }
  return pvVar1;
}


void FUN_00403d00(undefined8 param_1,ulong param_2,ulong param_3)

{
  if (SUB168(ZEXT816(param_2) * ZEXT816(param_3) >> 0x40,0) == 0) {
    FUN_00403cc0(param_1,SUB168(ZEXT816(param_2) * ZEXT816(param_3),0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00403e90();
}


void FUN_00403d20(long param_1,ulong *param_2,ulong param_3)

{
  undefined auVar1 [16];
  ulong uVar2;
  
  uVar2 = *param_2;
  if (param_1 == 0) {
    if (uVar2 == 0) {
      auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x80);
      uVar2 = (ulong)(0x80 < param_3) + SUB168(auVar1 / ZEXT816(param_3),0);
      *param_2 = uVar2;
      FUN_00403cc0(0,uVar2 * param_3,SUB168(auVar1 % ZEXT816(param_3),0));
      return;
    }
  }
  else {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0xaaaaaaaaaaaaaaaa);
    if (SUB168(auVar1 / ZEXT816(param_3),0) <= uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_00403e90(param_1,param_2,SUB168(auVar1 % ZEXT816(param_3),0));
    }
    uVar2 = (uVar2 >> 1) + 1 + uVar2;
  }
  *param_2 = uVar2;
  FUN_00403cc0(param_1,uVar2 * param_3);
  return;
}


void FUN_00403da0(long param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (param_1 == 0) {
    if (uVar1 == 0) {
      uVar1 = 0x80;
    }
    *param_2 = uVar1;
    FUN_00403cc0(0,uVar1);
    return;
  }
  if (uVar1 < 0xaaaaaaaaaaaaaaaa) {
    uVar1 = (uVar1 >> 1) + 1 + uVar1;
    *param_2 = uVar1;
    FUN_00403cc0(param_1,uVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00403e90();
}


void FUN_00403df0(size_t param_1)

{
  void *__s;
  
  __s = (void *)FUN_00403c70();
  memset(__s,0,param_1);
  return;
}


void FUN_00403e10(size_t param_1,size_t param_2)

{
  void *pvVar1;
  
  pvVar1 = calloc(param_1,param_2);
  if (pvVar1 != (void *)0x0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00403e90();
}


void FUN_00403e30(void *param_1,size_t param_2)

{
  void *__dest;
  
  __dest = (void *)FUN_00403c70(param_2);
  memcpy(__dest,param_1,param_2);
  return;
}


void FUN_00403e60(char *param_1)

{
  size_t sVar1;
  void *__dest;
  
  sVar1 = strlen(param_1);
  __dest = (void *)FUN_00403c70(sVar1 + 1);
  memcpy(__dest,param_1,sVar1 + 1);
  return;
}


void FUN_00403e90(void)

{
  undefined8 uVar1;
  
  uVar1 = dcgettext(0,"memory exhausted",5);
  error(DAT_006081b8,0,"%s",uVar1);
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00403ed0(FILE *param_1)

{
  int iVar1;
  
  if (param_1 != (FILE *)0x0) {
    iVar1 = __freading();
    if ((iVar1 != 0) && ((param_1->_flags & 0x100U) != 0)) {
      FUN_00403f10(param_1,0,1);
      fflush(param_1);
      return;
    }
  }
  fflush(param_1);
  return;
}


ulong FUN_00403f10(FILE *param_1,__off_t param_2,int param_3)

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


void FUN_00403f70(long param_1,int *param_2)

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
  
  iVar1 = param_2[0xc];
  iVar2 = *param_2;
  iVar3 = param_2[0xd];
  iVar8 = iVar1;
  iVar9 = iVar2;
  while (iVar3 < iVar9) {
    while( true ) {
      if (iVar3 <= iVar8) goto LAB_00403fec;
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
      if (iVar9 <= iVar3) goto LAB_00403fec;
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
LAB_00403fec:
  param_2[0xd] = iVar2;
  param_2[0xc] = iVar1 + (iVar2 - iVar3);
  return;
}


/* WARNING: Could not reconcile some variable overlaps */

uint FUN_00404050(uint param_1,undefined8 *param_2,char *param_3,char **param_4,int *param_5,
                 int param_6,uint *param_7,int param_8)

{
  byte bVar1;
  undefined8 uVar2;
  uint *puVar3;
  undefined8 uVar4;
  int iVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  char *pcVar11;
  size_t sVar12;
  long **pplVar13;
  char *pcVar14;
  long lVar15;
  ulong uVar16;
  char **ppcVar17;
  long **pplVar18;
  byte *pbVar19;
  uint uVar20;
  int iVar21;
  byte *pbVar22;
  byte *pbVar23;
  char **ppcVar24;
  bool bVar25;
  bool bVar26;
  byte bVar27;
  char *local_98;
  char **local_80;
  uint local_6c;
  int local_50;
  long *local_48;
  long **local_40;
  
  bVar27 = 0;
  uVar20 = param_7[1];
  if ((int)param_1 < 1) {
    return 0xffffffff;
  }
  *(undefined8 *)(param_7 + 4) = 0;
  uVar7 = *param_7;
  local_98 = param_3;
  if (uVar7 == 0) {
    *param_7 = 1;
    uVar7 = 1;
LAB_004040b3:
    param_7[0xd] = uVar7;
    param_7[0xc] = uVar7;
    *(undefined8 *)(param_7 + 8) = 0;
    if (param_8 == 0) {
      pcVar11 = getenv("POSIXLY_CORRECT");
      if (pcVar11 == (char *)0x0) {
        param_7[0xb] = 0;
        if (*param_3 == '-') {
          pbVar23 = *(byte **)(param_7 + 8);
LAB_00404370:
          param_7[10] = 2;
          local_98 = param_3 + 1;
          goto LAB_00404103;
        }
        if (*param_3 != '+') {
          param_7[10] = 1;
          pbVar23 = *(byte **)(param_7 + 8);
          goto LAB_00404103;
        }
        pbVar23 = *(byte **)(param_7 + 8);
      }
      else {
        pbVar23 = *(byte **)(param_7 + 8);
        param_7[0xb] = 1;
        if (*param_3 == '-') goto LAB_00404370;
        if (*param_3 != '+') goto LAB_004040fa;
      }
LAB_00404475:
      param_7[10] = 0;
      local_98 = param_3 + 1;
    }
    else {
      param_7[0xb] = 1;
      pbVar23 = (byte *)0x0;
      if (*param_3 == '-') goto LAB_00404370;
      if (*param_3 == '+') goto LAB_00404475;
LAB_004040fa:
      param_7[10] = 0;
    }
LAB_00404103:
    param_7[6] = 1;
    cVar6 = *local_98;
  }
  else {
    if (param_7[6] == 0) goto LAB_004040b3;
    pbVar23 = *(byte **)(param_7 + 8);
    cVar6 = *param_3;
    if ((cVar6 - 0x2bU & 0xfd) == 0) {
      cVar6 = param_3[1];
      local_98 = param_3 + 1;
    }
  }
  uVar7 = 0;
  if (cVar6 != ':') {
    uVar7 = uVar20;
  }
  if ((pbVar23 == (byte *)0x0) || (*pbVar23 == 0)) {
    uVar20 = *param_7;
    if (param_7[0xd] != uVar20 && (int)uVar20 <= (int)param_7[0xd]) {
      param_7[0xd] = uVar20;
    }
    if ((int)uVar20 < (int)param_7[0xc]) {
      param_7[0xc] = uVar20;
    }
    if (param_7[10] == 1) {
      uVar10 = param_7[0xd];
      if (param_7[0xc] == uVar10) {
        if (uVar20 != uVar10) {
          param_7[0xc] = uVar20;
          uVar10 = uVar20;
        }
      }
      else if (uVar20 != uVar10) {
        FUN_00403f70(param_2,param_7);
        uVar10 = *param_7;
      }
      uVar20 = uVar10;
      uVar10 = uVar20;
      if ((int)uVar20 < (int)param_1) {
        lVar15 = (long)(int)uVar20;
        do {
          if ((*(char *)param_2[lVar15] == '-') && (((char *)param_2[lVar15])[1] != '\0')) {
            uVar20 = *param_7;
            uVar10 = (uint)lVar15;
            break;
          }
          uVar20 = (uint)lVar15 + 1;
          lVar15 = lVar15 + 1;
          *param_7 = uVar20;
          uVar10 = uVar20;
        } while ((int)lVar15 < (int)param_1);
      }
      param_7[0xd] = uVar10;
    }
    bVar25 = param_1 < uVar20;
    bVar26 = param_1 == uVar20;
    if (bVar26) {
      param_1 = param_7[0xd];
      uVar20 = param_7[0xc];
LAB_00404392:
      if (uVar20 != param_1) {
        *param_7 = uVar20;
      }
      return 0xffffffff;
    }
    lVar15 = 3;
    pbVar23 = (byte *)param_2[(int)uVar20];
    pbVar22 = pbVar23;
    pbVar19 = &DAT_00406c90;
    do {
      if (lVar15 == 0) break;
      lVar15 = lVar15 + -1;
      bVar25 = *pbVar22 < *pbVar19;
      bVar26 = *pbVar22 == *pbVar19;
      pbVar22 = pbVar22 + (ulong)bVar27 * -2 + 1;
      pbVar19 = pbVar19 + (ulong)bVar27 * -2 + 1;
    } while (bVar26);
    if ((!bVar25 && !bVar26) == bVar25) {
      uVar20 = uVar20 + 1;
      *param_7 = uVar20;
      if (param_7[0xc] == param_7[0xd]) {
        param_7[0xc] = uVar20;
      }
      else {
        bVar25 = uVar20 != param_7[0xd];
        uVar20 = param_7[0xc];
        if (bVar25) {
          FUN_00403f70(param_2,param_7);
          uVar20 = param_7[0xc];
        }
      }
      param_7[0xd] = param_1;
      *param_7 = param_1;
      goto LAB_00404392;
    }
    if ((*pbVar23 != 0x2d) || (pbVar23[1] == 0)) {
      if (param_7[10] == 0) {
        return 0xffffffff;
      }
      *(byte **)(param_7 + 4) = pbVar23;
      *param_7 = uVar20 + 1;
      return 1;
    }
    pbVar23 = pbVar23 + (ulong)(param_4 != (char **)0x0 && pbVar23[1] == 0x2d) + 1;
    *(byte **)(param_7 + 8) = pbVar23;
  }
  if (param_4 != (char **)0x0) {
    uVar20 = *param_7;
    cVar6 = *(char *)(param_2[(int)uVar20] + 1);
    if ((cVar6 == '-') ||
       ((param_6 != 0 &&
        ((*(char *)(param_2[(int)uVar20] + 2) != '\0' ||
         (pcVar11 = strchr(local_98,(int)cVar6), pcVar11 == (char *)0x0)))))) {
      uVar16 = (ulong)(int)uVar20;
      pbVar22 = pbVar23;
      if ((*pbVar23 == 0) || (*pbVar23 == 0x3d)) {
        local_6c = 0;
      }
      else {
        do {
          pbVar22 = pbVar22 + 1;
          if (*pbVar22 == 0) break;
        } while (*pbVar22 != 0x3d);
        local_6c = (int)pbVar22 - (int)pbVar23;
      }
      pcVar11 = *param_4;
      if (pcVar11 != (char *)0x0) {
        pplVar18 = (long **)0x0;
        iVar21 = 0;
        iVar5 = -1;
        local_50 = 0;
        local_80 = (char **)0x0;
        ppcVar17 = param_4;
LAB_004046b4:
        iVar9 = strncmp(pcVar11,(char *)pbVar23,(ulong)local_6c);
        iVar8 = local_50;
        if (iVar9 == 0) {
          sVar12 = strlen(pcVar11);
          if (local_6c != (uint)sVar12) {
            if (local_80 != (char **)0x0) {
              if ((local_50 == 0) &&
                 ((((param_6 != 0 || (*(int *)(local_80 + 1) != *(int *)(ppcVar17 + 1))) ||
                   (local_80[2] != ppcVar17[2])) ||
                  (iVar8 = param_6, *(int *)(local_80 + 3) != *(int *)(ppcVar17 + 3))))) {
                pplVar13 = (long **)malloc(0x10);
                if (pplVar13 == (long **)0x0) {
                  while (pplVar18 != (long **)0x0) {
                    pplVar13 = (long **)pplVar18[1];
                    free(pplVar18);
                    pplVar18 = pplVar13;
                  }
                  local_50 = 1;
                  iVar8 = local_50;
                }
                else {
                  *pplVar13 = (long *)ppcVar17;
                  pplVar13[1] = (long *)pplVar18;
                  pplVar18 = pplVar13;
                  iVar8 = local_50;
                }
              }
              goto LAB_004046a0;
            }
            pcVar11 = ppcVar17[4];
            local_80 = ppcVar17;
            iVar5 = iVar21;
            goto joined_r0x004046ad;
          }
          if ((local_50 != 0) || (pplVar18 != (long **)0x0)) {
            while (pplVar18 != (long **)0x0) {
              pplVar13 = (long **)pplVar18[1];
              free(pplVar18);
              pplVar18 = pplVar13;
            }
          }
          uVar20 = *param_7;
          local_80 = ppcVar17;
          goto LAB_00404736;
        }
LAB_004046a0:
        local_50 = iVar8;
        pcVar11 = ppcVar17[4];
joined_r0x004046ad:
        if (pcVar11 != (char *)0x0) goto LAB_004046af;
        uVar20 = *param_7;
        uVar16 = (ulong)(int)uVar20;
        if (((char)local_50 != '\0') || (pplVar18 != (long **)0x0)) {
          if (uVar7 != 0) {
            if (pplVar18 != (long **)0x0) {
              uVar4 = param_2[uVar16];
              uVar2 = *param_2;
              local_40 = pplVar18;
              pcVar11 = (char *)dcgettext(0,"%s: option \'%s\' is ambiguous; possibilities:",5);
              fprintf(stderr,pcVar11,uVar2,uVar4);
              pplVar18 = &local_48;
              while( true ) {
                fprintf(stderr," \'--%s\'",*local_80);
                pplVar18 = (long **)pplVar18[1];
                if (pplVar18 == (long **)0x0) break;
                local_80 = (char **)*pplVar18;
              }
              fputc(10,stderr);
            }
            else {
              if ((char)local_50 == '\0') goto LAB_00404b71;
              uVar4 = param_2[uVar16];
              uVar2 = *param_2;
              pcVar11 = (char *)dcgettext(0,"%s: option \'%s\' is ambiguous\n",5);
              fprintf(stderr,pcVar11,uVar2,uVar4);
            }
            pcVar11 = *(char **)(param_7 + 8);
            sVar12 = strlen(pcVar11);
            *param_7 = *param_7 + 1;
            param_7[2] = 0;
            *(char **)(param_7 + 8) = pcVar11 + sVar12;
            return 0x3f;
          }
LAB_00404b71:
          pcVar11 = *(char **)(param_7 + 8);
          sVar12 = strlen(pcVar11);
          param_7[2] = 0;
          *(char **)(param_7 + 8) = pcVar11 + sVar12;
          *param_7 = uVar20 + 1;
          while (pplVar18 != (long **)0x0) {
            pplVar13 = (long **)pplVar18[1];
            free(pplVar18);
            pplVar18 = pplVar13;
          }
          return 0x3f;
        }
        iVar21 = iVar5;
        if (local_80 != (char **)0x0) {
LAB_00404736:
          uVar10 = uVar20 + 1;
          *param_7 = uVar10;
          if (*pbVar22 == 0) {
            if (*(int *)(local_80 + 1) == 1) {
              if ((int)param_1 <= (int)uVar10) {
                if (uVar7 != 0) {
                  pcVar11 = *local_80;
                  uVar4 = *param_2;
                  pcVar14 = (char *)dcgettext(0,"%s: option \'--%s\' requires an argument\n",5);
                  fprintf(stderr,pcVar14,uVar4,pcVar11);
                }
                pcVar11 = *(char **)(param_7 + 8);
                sVar12 = strlen(pcVar11);
                *(char **)(param_7 + 8) = pcVar11 + sVar12;
                param_7[2] = *(uint *)(local_80 + 3);
                if (*local_98 == ':') {
                  return 0x3a;
                }
                return 0x3f;
              }
              *param_7 = uVar20 + 2;
              *(undefined8 *)(param_7 + 4) = param_2[(int)uVar10];
            }
          }
          else {
            if (*(int *)(local_80 + 1) == 0) {
              if (uVar7 != 0) {
                pcVar11 = *local_80;
                uVar4 = *param_2;
                if (((char *)param_2[(long)(int)uVar10 + -1])[1] == '-') {
                  pcVar14 = (char *)dcgettext(0,"%s: option \'--%s\' doesn\'t allow an argument\n",5
                                             );
                  fprintf(stderr,pcVar14,uVar4,pcVar11);
                }
                else {
                  cVar6 = *(char *)param_2[(long)(int)uVar10 + -1];
                  pcVar14 = (char *)dcgettext(0,"%s: option \'%c%s\' doesn\'t allow an argument\n",5
                                             );
                  fprintf(stderr,pcVar14,uVar4,(ulong)(uint)(int)cVar6,pcVar11);
                }
              }
              pcVar11 = *(char **)(param_7 + 8);
              sVar12 = strlen(pcVar11);
              *(char **)(param_7 + 8) = pcVar11 + sVar12;
              param_7[2] = *(uint *)(local_80 + 3);
              return 0x3f;
            }
            *(byte **)(param_7 + 4) = pbVar22 + 1;
          }
          pcVar11 = *(char **)(param_7 + 8);
          sVar12 = strlen(pcVar11);
          *(char **)(param_7 + 8) = pcVar11 + sVar12;
          if (param_5 != (int *)0x0) {
            *param_5 = iVar21;
          }
          puVar3 = (uint *)local_80[2];
          uVar20 = *(uint *)(local_80 + 3);
          goto joined_r0x00404c64;
        }
      }
      if (param_6 == 0) {
        if (uVar7 == 0) goto LAB_0040494f;
        pbVar23 = *(byte **)(param_7 + 8);
        pcVar11 = (char *)param_2[uVar16];
        if (pcVar11[1] != '-') goto LAB_00404911;
      }
      else {
        pcVar11 = (char *)param_2[(int)uVar16];
        if (pcVar11[1] != '-') {
          pbVar23 = *(byte **)(param_7 + 8);
          pcVar14 = strchr(local_98,(int)(char)*pbVar23);
          uVar16 = uVar16 & 0xffffffff;
          if (pcVar14 == (char *)0x0) {
            if (uVar7 == 0) goto LAB_0040494f;
LAB_00404911:
            cVar6 = *pcVar11;
            uVar4 = *param_2;
            pcVar11 = (char *)dcgettext(0,"%s: unrecognized option \'%c%s\'\n",5);
            fprintf(stderr,pcVar11,uVar4,(ulong)(uint)(int)cVar6,pbVar23);
            uVar16 = (ulong)*param_7;
            goto LAB_0040494f;
          }
          goto LAB_00404198;
        }
        if (uVar7 == 0) goto LAB_0040494f;
        pbVar23 = *(byte **)(param_7 + 8);
      }
      uVar4 = *param_2;
      pcVar11 = (char *)dcgettext(0,"%s: unrecognized option \'--%s\'\n",5);
      fprintf(stderr,pcVar11,uVar4,pbVar23);
      uVar16 = (ulong)*param_7;
LAB_0040494f:
      *(char **)(param_7 + 8) = "";
      *param_7 = (int)uVar16 + 1;
      param_7[2] = 0;
      return 0x3f;
    }
  }
LAB_00404198:
  pbVar22 = pbVar23 + 1;
  *(byte **)(param_7 + 8) = pbVar22;
  bVar1 = *pbVar23;
  uVar20 = (uint)(char)bVar1;
  pcVar11 = strchr(local_98,uVar20);
  if (pbVar23[1] == 0) {
    *param_7 = *param_7 + 1;
  }
  if (((byte)(bVar1 - 0x3a) < 2) || (pcVar11 == (char *)0x0)) {
    if (uVar7 != 0) {
      uVar4 = *param_2;
      pcVar11 = (char *)dcgettext(0,"%s: invalid option -- \'%c\'\n",5);
      fprintf(stderr,pcVar11,uVar4,(ulong)uVar20);
    }
    param_7[2] = uVar20;
    return 0x3f;
  }
  if ((*pcVar11 != 'W') || (pcVar11[1] != ';')) {
    if (pcVar11[1] == ':') {
      if (pcVar11[2] == ':') {
        if (pbVar23[1] == 0) {
          *(undefined8 *)(param_7 + 4) = 0;
        }
        else {
          *(byte **)(param_7 + 4) = pbVar22;
          *param_7 = *param_7 + 1;
        }
      }
      else {
        uVar10 = *param_7;
        if (pbVar23[1] == 0) {
          if (param_1 == uVar10) {
            if (uVar7 != 0) {
              uVar4 = *param_2;
              pcVar11 = (char *)dcgettext(0,"%s: option requires an argument -- \'%c\'\n",5);
              fprintf(stderr,pcVar11,uVar4,(ulong)uVar20);
            }
            param_7[2] = uVar20;
            uVar20 = (uint)(*local_98 != ':') * 5 + 0x3a;
          }
          else {
            *param_7 = uVar10 + 1;
            *(undefined8 *)(param_7 + 4) = param_2[(int)uVar10];
          }
        }
        else {
          *(byte **)(param_7 + 4) = pbVar22;
          *param_7 = uVar10 + 1;
        }
      }
      *(undefined8 *)(param_7 + 8) = 0;
      return uVar20;
    }
    return uVar20;
  }
  if (param_4 != (char **)0x0) {
    uVar10 = *param_7;
    if (pbVar23[1] == 0) {
      if (param_1 == uVar10) {
        if (uVar7 != 0) {
          uVar4 = *param_2;
          pcVar11 = (char *)dcgettext(0,"%s: option requires an argument -- \'%c\'\n",5);
          fprintf(stderr,pcVar11,uVar4,(ulong)uVar20);
        }
        param_7[2] = uVar20;
        return (uint)(*local_98 != ':') * 5 + 0x3a;
      }
      *param_7 = uVar10 + 1;
      pbVar22 = (byte *)param_2[(int)uVar10];
      *(byte **)(param_7 + 4) = pbVar22;
    }
    else {
      *(byte **)(param_7 + 4) = pbVar22;
      *param_7 = uVar10 + 1;
    }
    *(byte **)(param_7 + 8) = pbVar22;
    bVar1 = *pbVar22;
    pbVar23 = pbVar22;
    while ((bVar1 != 0 && (bVar1 != 0x3d))) {
      pbVar23 = pbVar23 + 1;
      bVar1 = *pbVar23;
    }
    pcVar11 = *param_4;
    if (pcVar11 != (char *)0x0) {
      iVar21 = 0;
      local_6c = 0;
      ppcVar17 = (char **)0x0;
      bVar25 = false;
      do {
        iVar8 = strncmp(pcVar11,(char *)pbVar22,(long)pbVar23 - (long)pbVar22);
        ppcVar24 = ppcVar17;
        iVar5 = local_6c;
        bVar26 = bVar25;
        if (iVar8 == 0) {
          sVar12 = strlen(pcVar11);
          if (((long)pbVar23 - (long)pbVar22 & 0xffffffffU) == sVar12) goto LAB_00404c1b;
          ppcVar24 = param_4;
          iVar5 = iVar21;
          if (ppcVar17 != (char **)0x0) {
            if (((param_6 == 0) && (*(int *)(ppcVar17 + 1) == *(int *)(param_4 + 1))) &&
               (ppcVar17[2] == param_4[2])) {
              ppcVar24 = ppcVar17;
              iVar5 = local_6c;
              bVar26 = true;
              if (*(int *)(ppcVar17 + 3) == *(int *)(param_4 + 3)) {
                bVar26 = bVar25;
              }
            }
            else {
              ppcVar24 = ppcVar17;
              iVar5 = local_6c;
              bVar26 = true;
            }
          }
        }
        local_6c = iVar5;
        param_4 = param_4 + 4;
        pcVar11 = *param_4;
        iVar21 = iVar21 + 1;
        ppcVar17 = ppcVar24;
        bVar25 = bVar26;
      } while (pcVar11 != (char *)0x0);
      if (bVar26) {
        if (uVar7 != 0) {
          uVar4 = *param_2;
          pcVar11 = (char *)dcgettext(0,"%s: option \'-W %s\' is ambiguous\n",5);
          fprintf(stderr,pcVar11,uVar4,pbVar22);
          pbVar22 = *(byte **)(param_7 + 8);
        }
        sVar12 = strlen((char *)pbVar22);
        *param_7 = *param_7 + 1;
        *(byte **)(param_7 + 8) = pbVar22 + sVar12;
        return 0x3f;
      }
      param_4 = ppcVar24;
      iVar21 = local_6c;
      if (ppcVar24 != (char **)0x0) {
LAB_00404c1b:
        local_6c = iVar21;
        if (bVar1 == 0) {
          if (*(int *)(param_4 + 1) == 1) {
            uVar20 = *param_7;
            if ((int)param_1 <= (int)uVar20) {
              if (uVar7 != 0) {
                uVar4 = *param_2;
                pcVar11 = (char *)dcgettext(0,"%s: option \'-W %s\' requires an argument\n",5);
                fprintf(stderr,pcVar11,uVar4);
              }
              uVar16 = 0xffffffffffffffff;
              pcVar11 = *(char **)(param_7 + 8);
              do {
                if (uVar16 == 0) break;
                uVar16 = uVar16 - 1;
                cVar6 = *pcVar11;
                pcVar11 = pcVar11 + (ulong)bVar27 * -2 + 1;
              } while (cVar6 != '\0');
              *(char **)(param_7 + 8) = *(char **)(param_7 + 8) + (~uVar16 - 1);
              if (*local_98 != ':') {
                return 0x3f;
              }
              return 0x3a;
            }
            *param_7 = uVar20 + 1;
            *(undefined8 *)(param_7 + 4) = param_2[(int)uVar20];
          }
          else {
            *(undefined8 *)(param_7 + 4) = 0;
          }
        }
        else {
          if (*(int *)(param_4 + 1) == 0) {
            if (uVar7 != 0) {
              pcVar11 = *param_4;
              uVar4 = *param_2;
              pcVar14 = (char *)dcgettext(0,"%s: option \'-W %s\' doesn\'t allow an argument\n",5);
              fprintf(stderr,pcVar14,uVar4,pcVar11);
              pbVar22 = *(byte **)(param_7 + 8);
            }
            sVar12 = strlen((char *)pbVar22);
            *(byte **)(param_7 + 8) = pbVar22 + sVar12;
            return 0x3f;
          }
          *(byte **)(param_7 + 4) = pbVar23 + 1;
        }
        sVar12 = strlen((char *)pbVar22);
        *(byte **)(param_7 + 8) = pbVar22 + sVar12;
        if (param_5 != (int *)0x0) {
          *param_5 = local_6c;
        }
        puVar3 = (uint *)param_4[2];
        uVar20 = *(uint *)(param_4 + 3);
joined_r0x00404c64:
        if (puVar3 != (uint *)0x0) {
          *puVar3 = uVar20;
          return 0;
        }
        return uVar20;
      }
    }
  }
  *(undefined8 *)(param_7 + 8) = 0;
  return 0x57;
LAB_004046af:
  iVar21 = iVar21 + 1;
  ppcVar17 = ppcVar17 + 4;
  pbVar23 = *(byte **)(param_7 + 8);
  goto LAB_004046b4;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405090(void)

{
  DAT_006083c0 = DAT_00608218._4_4_;
  _DAT_006083c4 = (undefined4)DAT_00608218;
  FUN_00404050();
  DAT_00608218._4_4_ = DAT_006083c0;
  DAT_00608400 = DAT_006083d0;
  _DAT_00608214 = DAT_006083c8;
  return;
}


void FUN_004050f0(void)

{
  FUN_00405090();
  return;
}


void FUN_00405110(void)

{
  FUN_00405090();
  return;
}


void FUN_00405130(void)

{
  FUN_00404050();
  return;
}


void FUN_00405150(void)

{
  FUN_00405090();
  return;
}


void FUN_00405170(void)

{
  FUN_00404050();
  return;
}


size_t FUN_00405190(wchar_t *param_1,char *param_2,size_t param_3,mbstate_t *param_4)

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


int FUN_004051c0(FILE *param_1)

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

char * FUN_00405230(void)

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
  if (DAT_006083f8 != (char *)0x0) goto LAB_0040526a;
  pcVar7 = getenv("CHARSETALIASDIR");
  if ((pcVar7 == (char *)0x0) || (*pcVar7 == '\0')) {
    sVar6 = 0x74;
    sVar5 = 0x66;
    __n = 0x65;
    pcVar7 = 
    "/home/dongkwan/data/scripts/gnu_packages/findutils/findutils-4.6.0_gcc-8.2.0_x86_64_O2_debug/gogo/lib"
    ;
LAB_00405355:
    __file = (char *)malloc(sVar6);
    if (__file != (char *)0x0) {
      memcpy(__file,pcVar7,__n);
      __file[__n] = '/';
      goto LAB_00405376;
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
        goto LAB_00405355;
      }
      sVar6 = __n + 0xe;
    }
    __file = (char *)malloc(sVar6);
    if (__file != (char *)0x0) {
      memcpy(__file,pcVar7,__n);
      sVar5 = __n;
LAB_00405376:
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
LAB_00405410:
          pbVar8 = (byte *)__stream->_IO_read_ptr;
          if (__stream->_IO_read_end <= pbVar8) goto LAB_0040559c;
          do {
            __stream->_IO_read_ptr = (char *)(pbVar8 + 1);
            uVar4 = (uint)*pbVar8;
            __ptr = pcVar7;
            while( true ) {
              pcVar7 = __ptr;
              if ((uVar4 - 9 < 2) || (uVar4 == 0x20)) goto LAB_00405410;
              if (uVar4 == 0x23) goto LAB_00405601;
              ungetc(uVar4,__stream);
              iVar2 = fscanf(__stream,"%50s %50s",&local_b8,&local_78);
              puVar13 = &local_b8;
              if (iVar2 < 2) goto LAB_004055af;
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
                goto LAB_004053b4;
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
LAB_0040559c:
              uVar4 = __uflow(__stream);
              __ptr = pcVar7;
              if (uVar4 == 0xffffffff) goto LAB_004055af;
            }
          } while( true );
        }
        close(iVar2);
      }
      goto LAB_004053ae;
    }
  }
  DAT_006083f8 = "";
LAB_0040526a:
  cVar1 = *DAT_006083f8;
  pcVar7 = DAT_006083f8;
  do {
    if (cVar1 == '\0') {
LAB_004052c4:
      if (*__s1 == '\0') {
        __s1 = "ASCII";
      }
      return __s1;
    }
    iVar2 = strcmp(__s1,pcVar7);
    if ((iVar2 == 0) || ((cVar1 == '*' && (pcVar7[1] == '\0')))) {
      sVar6 = strlen(pcVar7);
      __s1 = pcVar7 + sVar6 + 1;
      goto LAB_004052c4;
    }
    sVar6 = strlen(pcVar7);
    sVar5 = strlen(pcVar7 + sVar6 + 1);
    pcVar7 = pcVar7 + sVar6 + 1 + sVar5 + 1;
    cVar1 = *pcVar7;
  } while( true );
LAB_00405601:
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
  if (uVar4 == 0xffffffff) goto LAB_004055af;
  goto LAB_00405410;
LAB_004055af:
  fclose(__stream);
  if (local_d0 == 0) {
LAB_004053ae:
    pcVar7 = "";
  }
  else {
    pcVar7[local_d0] = '\0';
  }
LAB_004053b4:
  free(__file);
  DAT_006083f8 = pcVar7;
  goto LAB_0040526a;
}


/* WARNING: Removing unreachable block (ram,0x004057d3) */
/* WARNING: Removing unreachable block (ram,0x004057d8) */

void FUN_004057a0(void)

{
  __DT_INIT();
  return;
}


void FUN_00405800(void)

{
  return;
}


void FUN_00405810(undefined8 param_1)

{
  __cxa_atexit(param_1,0,DAT_006081a8);
  return;
}


undefined8 FUN_00405828(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code **ppcVar1;
  
  for (ppcVar1 = (code **)&DAT_00607e30; *ppcVar1 != (code *)0xffffffffffffffff;
      ppcVar1 = ppcVar1 + -1) {
    (**ppcVar1)();
  }
  return param_3;
}


void __DT_FINI(void)

{
  FUN_00401a81();
  return;
}

