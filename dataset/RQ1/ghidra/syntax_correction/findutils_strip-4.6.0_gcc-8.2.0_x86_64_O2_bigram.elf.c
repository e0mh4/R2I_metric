
#include "decompile_ghidra.h"
#define __int64 long long
#define __int32 int
#define __int16 short
#define __int8 char

void switchD_004017a2caseD_b(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_004011f5(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_004011fa(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_004011ff(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


undefined FUN_00401210(undefined param_1,char **param_2)

{
  char cVar1;
  size_t sVar2;
  int iVar3;
  char *pcVar4;
  __ssize_t _Var5;
  long lVar6;
  undefined uVar7;
  int *piVar8;
  char *pcVar9;
  long lVar10;
  char *__ptr;
  size_t sVar11;
  long lVar12;
  char *local_38;
  size_t local_30 [2];
  
  pcVar4 = *param_2;
  if (pcVar4 == (char *)0x0) {
    pcVar4 = "bigram";
  }
  FUN_004015b0(pcVar4);
  setlocale(6,"");
  bindtextdomain("findutils",
                 "/home/dongkwan/data/scripts/gnu_packages/findutils/findutils-4.6.0_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale"
                );
  textdomain("findutils");
  iVar3 = FUN_004038b0(FUN_00401510);
  if (iVar3 != 0) {
    uVar7 = dcgettext(0,"The atexit library function failed",5);
    piVar8 = __errno_location();
    error(1,*piVar8,uVar7);
  }
  local_30[0] = 0x402;
  local_38 = (char *)FUN_00402fd0(0x402);
  pcVar4 = (char *)FUN_00402fd0(0x402);
  *pcVar4 = '\0';
  sVar2 = 0x402;
  __ptr = local_38;
  sVar11 = local_30[0];
  do {
    do {
      local_30[0] = sVar11;
      local_38 = __ptr;
      sVar11 = sVar2;
      __ptr = pcVar4;
      _Var5 = __getdelim(&local_38,local_30,10,stdin);
      if ((int)_Var5 < 1) {
        free(local_38);
        free(__ptr);
        return 0;
      }
      local_38[(long)(int)_Var5 + -1] = '\0';
      cVar1 = *local_38;
      if ((*__ptr == '\0') || (pcVar4 = __ptr, pcVar9 = local_38, *__ptr != cVar1)) {
        lVar6 = 0;
        lVar10 = 0;
      }
      else {
        do {
          pcVar4 = pcVar4 + 1;
          if (pcVar9[1] != *pcVar4) break;
          pcVar9 = pcVar9 + 1;
        } while (*pcVar4 != '\0');
        iVar3 = (int)pcVar4 - (int)__ptr;
        lVar10 = (long)iVar3;
        lVar6 = (long)iVar3;
        cVar1 = local_38[lVar6];
      }
      pcVar4 = local_38;
      sVar2 = local_30[0];
    } while ((cVar1 == '\0') || (lVar12 = lVar6 + 1, local_38[lVar6 + 1] == '\0'));
    do {
      _IO_putc((int)cVar1,stdout);
      _IO_putc((int)local_38[lVar12],stdout);
      _IO_putc(10,stdout);
      cVar1 = local_38[lVar10 + 2];
      pcVar4 = local_38;
      sVar2 = local_30[0];
      if (cVar1 == '\0') break;
      lVar12 = lVar10 + 3;
      lVar10 = lVar10 + 2;
    } while (local_38[lVar12] != '\0');
  } while( true );
}


void FUN_00401410(undefined param_1,undefined param_2,undefined param_3)

{
  undefined unaff_retaddr;
  undefined auStack_8 [8];
  
  (*(code *)PTR___libc_start_main_00605ff0)
            (FUN_00401210,unaff_retaddr,&stack0x00000008,FUN_00403840,FUN_004038a0,param_3,auStack_8
            );
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* WARNING: Removing unreachable block (ram,0x00401448) */
/* WARNING: Removing unreachable block (ram,0x00401452) */

void FUN_0040143b(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00401489) */

void FUN_0040145a(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x004014c6) */

void FUN_00401491(void)

{
  if (DAT_00606208 != '\0') {
    return;
  }
  FUN_0040143b();
  DAT_00606208 = 1;
  return;
}


/* WARNING: Removing unreachable block (ram,0x00401489) */

void thunk_FUN_0040145a(void)

{
  return;
}


void FUN_004014f0(undefined param_1)

{
  DAT_00606220 = param_1;
  return;
}


void FUN_00401500(undefined param_1)

{
  DAT_00606218 = param_1;
  return;
}


void FUN_00401510(void)

{
  int iVar1;
  int *piVar2;
  undefined uVar3;
  undefined uVar4;
  
  iVar1 = FUN_00403260(stdout);
  if (iVar1 != 0) {
    piVar2 = __errno_location();
    if ((DAT_00606218 == '\0') || (*piVar2 != 0x20)) {
      uVar3 = dcgettext(0,"write error",5);
      if (DAT_00606220 == 0) {
        error(0,*piVar2,"%s",uVar3);
      }
      else {
        uVar4 = FUN_00402e00();
        error(0,*piVar2,"%s: %s",uVar4,uVar3);
      }
      goto LAB_0040158e;
    }
  }
  iVar1 = FUN_00403260(stderr);
  if (iVar1 == 0) {
    return;
  }
LAB_0040158e:
                    /* WARNING: Subroutine does not return */
  _exit(DAT_00606170);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004015b0(byte *param_1)

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
        pbVar6 = &DAT_00403a00;
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
  _DAT_00606228 = param_1;
  program_invocation_name = param_1;
  return;
}


char * FUN_00401650(char *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  byte *pbVar3;
  
  pcVar2 = (char *)dcgettext(0,param_1,5);
  if (param_1 == pcVar2) {
    pbVar3 = (byte *)FUN_004032d0();
    if ((*pbVar3 & 0xdf) == 0x55) {
      if (((((pbVar3[1] & 0xdf) != 0x54) || ((pbVar3[2] & 0xdf) != 0x46)) || (pbVar3[3] != 0x2d)) ||
         ((pbVar3[4] != 0x38 || (pbVar3[5] != 0)))) {
LAB_00401728:
        pcVar2 = "\"";
        if (param_2 != 9) {
          pcVar2 = "\'";
        }
        return pcVar2;
      }
      cVar1 = *pcVar2;
      pcVar2 = &DAT_00403a11;
      if (cVar1 != '`') {
        pcVar2 = &DAT_00403a06;
      }
    }
    else {
      if (((((*pbVar3 & 0xdf) != 0x47) || ((pbVar3[1] & 0xdf) != 0x42)) || (pbVar3[2] != 0x31)) ||
         (((pbVar3[3] != 0x38 || (pbVar3[4] != 0x30)) ||
          ((pbVar3[5] != 0x33 || ((pbVar3[6] != 0x30 || (pbVar3[7] != 0)))))))) goto LAB_00401728;
      cVar1 = *pcVar2;
      pcVar2 = &DAT_00403a0d;
      if (cVar1 != '`') {
        pcVar2 = &DAT_00403a0a;
      }
    }
  }
  return pcVar2;
}


ulong FUN_00401750(undefined *param_1,ulong param_2,char *param_3,ulong param_4,int param_5,
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
LAB_004019a6:
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
      goto LAB_004019a6;
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
      param_8 = (char *)FUN_00401650(&DAT_00403a17,param_5);
      param_9 = (char *)FUN_00401650(&DAT_00403a15,param_5);
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
LAB_004017f0:
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
    goto LAB_00401f30;
  }
  bVar2 = (bool)(param_5 != 2 & local_ac);
  __s1 = (byte *)(param_3 + uVar20);
  uVar14 = uVar15;
  bVar22 = local_5b;
  bVar3 = bVar9;
  if (bVar2 != false) {
    if (local_98 == 0) {
LAB_00402100:
      uVar19 = (ulong)*__s1;
      switch(uVar19) {
      case 0:
        goto switchD_00402112_caseD_0;
      default:
        bVar2 = false;
        goto switchD_00401eee_caseD_1;
      case 7:
switchD_00402112_caseD_7:
        bVar18 = 0x61;
        break;
      case 8:
switchD_00402112_caseD_8:
        bVar18 = 0x62;
        break;
      case 9:
switchD_00402112_caseD_9:
        bVar18 = 0x74;
        break;
      case 10:
switchD_00402112_caseD_a:
        bVar18 = 0x6e;
        break;
      case 0xb:
switchD_00402112_caseD_b:
        bVar18 = 0x76;
        break;
      case 0xc:
switchD_00402112_caseD_c:
        bVar18 = 0x66;
        break;
      case 0xd:
        bVar2 = false;
switchD_004018e1_caseD_d:
        uVar19 = 0xd;
        bVar10 = 0x72;
        bVar21 = param_5 == 2;
        goto LAB_00401cd0;
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
switchD_004018e1_caseD_20:
        bVar21 = false;
        goto LAB_00401bb8;
      case 0x23:
      case 0x7e:
        bVar2 = false;
switchD_004018e1_caseD_23:
        if (uVar20 == 0) {
          bVar21 = false;
          goto LAB_00401bb8;
        }
        goto switchD_004018e1_caseD_25;
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
        goto switchD_004018e1_caseD_25;
      case 0x27:
        bVar2 = false;
        goto switchD_00401eee_caseD_27;
      case 0x3f:
        bVar2 = false;
        goto switchD_00401eee_caseD_3f;
      case 0x5c:
        bVar2 = false;
        goto switchD_004018e1_caseD_5c;
      case 0x7b:
      case 0x7d:
        bVar2 = false;
        goto switchD_00401eee_caseD_7b;
      }
      bVar22 = false;
      goto joined_r0x00401cf5;
    }
    if ((param_4 == 0xffffffffffffffff) && (1 < local_98)) {
      param_4 = strlen(param_3);
    }
    if ((param_4 < uVar20 + local_98) || (iVar4 = memcmp(__s1,local_70,local_98), iVar4 != 0))
    goto LAB_00402100;
    if (local_5b == false) {
      uVar19 = (ulong)*__s1;
      switch(uVar19) {
      case 0:
        goto switchD_004018e1_caseD_0;
      default:
        goto switchD_00401eee_caseD_1;
      case 7:
        goto switchD_00402112_caseD_7;
      case 8:
        goto switchD_00402112_caseD_8;
      case 9:
        goto switchD_00402112_caseD_9;
      case 10:
        goto switchD_00402112_caseD_a;
      case 0xb:
        goto switchD_00402112_caseD_b;
      case 0xc:
        goto switchD_00402112_caseD_c;
      case 0xd:
        goto switchD_004018e1_caseD_d;
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
        goto switchD_004018e1_caseD_20;
      case 0x23:
      case 0x7e:
        goto switchD_004018e1_caseD_23;
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
        goto switchD_004018e1_caseD_25;
      case 0x27:
        goto switchD_00401eee_caseD_27;
      case 0x3f:
        goto switchD_00401eee_caseD_3f;
      case 0x5c:
        goto switchD_004018e1_caseD_5c;
      case 0x7b:
      case 0x7d:
        goto switchD_00401eee_caseD_7b;
      }
    }
    goto LAB_00401f42;
  }
  uVar19 = (ulong)*__s1;
  switch(uVar19) {
  case 0:
    if (local_ac == 0) {
      if ((param_6 & 1) != 0) goto LAB_00402410;
      if (local_5b == false) {
        uVar20 = uVar20 + 1;
        bVar18 = 0;
        goto LAB_00402058;
      }
      bVar21 = false;
      bVar16 = false;
      if (param_7 != 0) {
        bVar2 = false;
        uVar19 = 0;
        goto LAB_00401909;
      }
      bVar18 = 0;
      goto LAB_00401e62;
    }
switchD_00402112_caseD_0:
    if (local_5b == false) {
      bVar2 = false;
switchD_004018e1_caseD_0:
      bVar22 = param_5 == 2;
      bVar3 = (bVar9 ^ 1) & bVar22;
      if (bVar3 == 0) {
        bVar3 = bVar9;
        if (uVar15 < param_2) goto LAB_00401df5;
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
          goto LAB_00401c77;
        }
LAB_00401df5:
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
        goto LAB_00401e2b;
      }
      bVar18 = 0x30;
      goto LAB_00401c77;
    }
    bVar22 = param_5 == 2;
LAB_00401f30:
    if ((local_ac != 0) && (bVar22 != false)) {
      param_5 = 4;
    }
LAB_00401f42:
    uVar15 = FUN_00401750(param_1,param_2,param_3,param_4,param_5,param_6 & 0xfffffffd,0,param_8,
                          param_9);
    return uVar15;
  default:
switchD_00401eee_caseD_1:
    if (sVar5 != 1) {
      local_40[0] = (mbstate_t)0x0;
      if (param_4 == 0xffffffffffffffff) {
        param_4 = strlen(param_3);
      }
      uVar8 = 0;
      do {
        uVar1 = uVar20 + uVar8;
        lVar7 = FUN_00403230(&local_44,param_3 + uVar1,param_4 - uVar1,local_40);
        if (lVar7 == 0) {
          bVar10 = local_ac & (bVar21 ^ 1U);
          goto LAB_00402610;
        }
        bVar10 = local_ac;
        if (lVar7 == -1) goto LAB_00402610;
        if (lVar7 == -2) {
          if ((param_4 <= uVar1) || (param_3[uVar1] == '\0')) goto LAB_00402610;
          goto LAB_0040269f;
        }
        bVar22 = (bool)(param_5 == 2 & local_5b);
        if ((bVar22 != false) && (lVar7 != 1)) {
          pcVar13 = param_3 + uVar1 + 1;
          do {
            if (((byte)(*pcVar13 + 0xa5U) < 0x22) &&
               ((1L << (*pcVar13 + 0xa5U & 0x3f) & 0x20000002bU) != 0)) goto LAB_00401f30;
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
      goto LAB_00402610;
    }
    ppuVar6 = __ctype_b_loc();
    uVar8 = 1;
    bVar10 = ((byte)((*ppuVar6)[uVar19] >> 0xe) ^ 1) & local_ac;
    goto LAB_00401ec8;
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
    goto LAB_00401f03;
  case 10:
    uVar19 = 10;
    bVar10 = 0x6e;
    goto LAB_00401f03;
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
LAB_00401f03:
    bVar22 = (bool)(local_5b & param_5 == 2);
    bVar2 = bVar22;
    bVar21 = param_5 == 2;
    if (bVar22 != false) goto LAB_00401f30;
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
    goto LAB_00401ba6;
  case 0x23:
  case 0x7e:
    goto LAB_00401ba1;
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
    goto switchD_00401eee_caseD_25;
  case 0x27:
switchD_00401eee_caseD_27:
    bVar21 = false;
    uVar19 = 0x27;
    if (param_5 != 2) goto LAB_00401bb8;
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
LAB_00401c77:
      uVar20 = uVar20 + 1;
      bVar9 = bVar3;
      if (bVar2 != false) goto LAB_00401bdf;
      goto LAB_00401987;
    }
    goto LAB_00401f30;
  case 0x3f:
switchD_00401eee_caseD_3f:
    if (param_5 != 2) {
      if (param_5 != 5) {
        bVar21 = param_5 == 2;
        uVar19 = 0x3f;
        goto LAB_00401bb8;
      }
      if ((param_6 & 4) == 0) {
        bVar21 = false;
        uVar19 = 0x3f;
        goto LAB_00401bb8;
      }
      uVar8 = uVar20 + 2;
      bVar21 = false;
      uVar19 = 0x3f;
      if ((param_4 <= uVar8) || (param_3[uVar20 + 1] != '?')) goto LAB_00401bb8;
      uVar19 = (ulong)(byte)param_3[uVar8];
      if ((0x3e < (byte)param_3[uVar8]) || ((0x7000a38200000000U >> (uVar19 & 0x3f) & 1) == 0)) {
        uVar19 = 0x3f;
        goto LAB_00401bb8;
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
LAB_00401e2b:
        bVar18 = (byte)uVar19;
        uVar15 = uVar14;
        bVar3 = bVar9;
        if ((local_ac == 0) || (bVar22)) goto LAB_00401bd0;
        if (param_7 != 0) goto LAB_00401909;
        goto LAB_00401e50;
      }
      goto LAB_00401f42;
    }
    if (local_5b == false) {
      bVar21 = false;
      bVar18 = 0x3f;
      goto LAB_00401bd0;
    }
    goto LAB_00401f30;
  case 0x5c:
    if (param_5 == 2) {
      if (local_5b == false) {
        uVar20 = uVar20 + 1;
        bVar18 = 0x5c;
        goto LAB_00402058;
      }
      goto LAB_00401f30;
    }
switchD_004018e1_caseD_5c:
    uVar19 = 0x5c;
    bVar18 = 0x5c;
    bVar10 = 0x5c;
    bVar21 = (bool)(local_ac & local_5b & local_98 != 0);
    if (bVar21 == false) break;
    uVar20 = uVar20 + 1;
LAB_00402058:
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
    goto LAB_00401987;
  case 0x7b:
  case 0x7d:
switchD_00401eee_caseD_7b:
    bVar22 = param_4 != 1;
    if (param_4 == 0xffffffffffffffff) {
      bVar22 = param_3[1] != '\0';
    }
    bVar21 = param_5 == 2;
    if (bVar22) goto LAB_00401bb8;
LAB_00401ba1:
    bVar21 = param_5 == 2;
    if (uVar20 != 0) goto LAB_00401bb8;
LAB_00401ba6:
    bVar21 = param_5 == 2;
    bVar22 = (bool)(local_5b & bVar21);
    if (bVar22 != false) goto LAB_00401f30;
LAB_00401bb8:
    bVar18 = (byte)uVar19;
    bVar21 = (bool)((local_ac ^ 1 | bVar21) ^ 1 | local_5b);
    if (bVar21 == false) {
LAB_00401bd0:
      uVar20 = uVar20 + 1;
      uVar14 = uVar15;
      if (bVar2 == false) {
        bVar9 = (bVar21 ^ 1U) & bVar3;
        goto LAB_00402058;
      }
LAB_00401bdf:
      bVar22 = param_5 == 2;
    }
    else {
switchD_004018e1_caseD_25:
      bVar18 = (byte)uVar19;
      bVar21 = false;
      if (param_7 == 0) {
LAB_00401e50:
        bVar22 = param_5 == 2;
        uVar15 = uVar14;
        bVar16 = bVar21;
        bVar3 = bVar9;
        if (bVar2 == false) {
LAB_00401e62:
          uVar20 = uVar20 + 1;
          bVar9 = (bVar16 ^ 1U) & bVar3;
          uVar14 = uVar15;
          goto LAB_00402058;
        }
      }
      else {
LAB_00401909:
        bVar18 = (byte)uVar19;
        uVar14 = uVar15;
        if ((*(uint *)(param_7 + (uVar19 >> 5) * 4) >> (bVar18 & 0x1f) & 1) == 0) goto LAB_00401e50;
        bVar22 = param_5 == 2;
        bVar3 = bVar9;
      }
joined_r0x00401cf5:
      if (local_5b != false) goto LAB_00401f30;
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
LAB_00401987:
    if (uVar14 < param_2) {
      param_1[uVar14] = bVar18;
    }
    uVar15 = uVar14 + 1;
    goto LAB_004017f0;
  }
LAB_00401cd0:
  bVar22 = bVar21;
  bVar18 = bVar10;
  bVar21 = bVar22;
  if (local_ac == 0) goto LAB_00401bb8;
  goto joined_r0x00401cf5;
  while (__s1[uVar8] != 0) {
LAB_0040269f:
    uVar8 = uVar8 + 1;
    if (param_4 <= uVar20 + uVar8) break;
  }
LAB_00402610:
  bVar12 = bVar10;
  if (1 < uVar8) {
LAB_0040241e:
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
        if (uVar8 <= uVar20) goto LAB_00402058;
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
        if (local_5b != false) goto LAB_00401f30;
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
        if (uVar8 <= uVar20) goto LAB_00401987;
      }
      uVar15 = uVar15 + 1;
      if (uVar14 < param_2) {
        param_1[uVar14] = bVar18;
      }
      uVar19 = (ulong)(byte)param_3[uVar15];
      uVar14 = uVar14 + 1;
    } while( true );
  }
LAB_00401ec8:
  bVar12 = local_ac;
  if (bVar10 != 0) goto LAB_0040241e;
switchD_00401eee_caseD_25:
  bVar21 = param_5 == 2;
  goto LAB_00401bb8;
LAB_00402410:
  uVar20 = uVar20 + 1;
  goto LAB_004017f0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00402760(uint param_1,undefined param_2,undefined param_3,undefined *param_4)

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
  if (-1 < (int)param_1) {
    puVar8 = (undefined *)PTR_DAT_006061b8;
    if (DAT_006061d0 <= param_1) {
      if (PTR_DAT_006061b8 == &DAT_006061c0) {
        puVar8 = (undefined *)FUN_00403020(0);
        uVar6 = PTR_DAT_006061c8._4_4_;
        uVar5 = PTR_DAT_006061c8._0_4_;
        uVar3 = _UNK_006061c4;
        PTR_DAT_006061b8 = (undefined *)puVar8;
        *puVar8 = _DAT_006061c0;
        puVar8[1] = uVar3;
        puVar8[2] = uVar5;
        puVar8[3] = uVar6;
      }
      else {
        puVar8 = (undefined *)FUN_00403020(PTR_DAT_006061b8);
        PTR_DAT_006061b8 = (undefined *)puVar8;
      }
      memset(puVar8 + (ulong)DAT_006061d0 * 4,0,((ulong)(param_1 + 1) - (ulong)DAT_006061d0) * 0x10)
      ;
      DAT_006061d0 = param_1 + 1;
    }
    uVar2 = param_4[1];
    puVar10 = (ulong *)(puVar8 + (long)(int)param_1 * 4);
    uVar4 = *puVar10;
    __ptr = (undefined *)puVar10[1];
    uVar9 = FUN_00401750(__ptr,uVar4,param_2,param_3,*param_4,uVar2 | 1,param_4 + 2,
                         *(undefined *)(param_4 + 10),*(undefined *)(param_4 + 0xc));
    if (uVar4 <= uVar9) {
      uVar9 = uVar9 + 1;
      *puVar10 = uVar9;
      if (__ptr != &DAT_00606240) {
        free(__ptr);
      }
      __ptr = (undefined *)FUN_00402fd0(uVar9);
      uVar3 = *param_4;
      puVar10[1] = (ulong)__ptr;
      FUN_00401750(__ptr,uVar9,param_2,param_3,uVar3,uVar2 | 1,param_4 + 2,
                   *(undefined *)(param_4 + 10),*(undefined *)(param_4 + 0xc));
    }
    *piVar7 = iVar1;
    return __ptr;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00402900(undefined *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_00606340;
  }
  FUN_00403190(param_1,0x38);
  *piVar2 = iVar1;
  return;
}


undefined FUN_00402940(undefined *param_1)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = (undefined *)&DAT_00606340;
  }
  return *param_1;
}


void FUN_00402950(undefined *param_1,undefined param_2)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = (undefined *)&DAT_00606340;
  }
  *param_1 = param_2;
  return;
}


uint FUN_00402960(undefined *param_1,byte param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_00606340;
  }
  uVar1 = *(uint *)(param_1 + (ulong)(param_2 >> 5) * 4 + 8);
  uVar2 = uVar1 >> (param_2 & 0x1f);
  *(uint *)(param_1 + (ulong)(param_2 >> 5) * 4 + 8) =
       ((param_3 ^ uVar2) & 1) << (param_2 & 0x1f) ^ uVar1;
  return uVar2 & 1;
}


undefined FUN_004029a0(undefined *param_1,undefined param_2)

{
  undefined uVar1;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_00606340;
  }
  uVar1 = *(undefined *)(param_1 + 4);
  *(undefined *)(param_1 + 4) = param_2;
  return uVar1;
}


void FUN_004029c0(undefined *param_1,long param_2,long param_3)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = (undefined *)&DAT_00606340;
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


void FUN_004029f0(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                 undefined *param_5)

{
  int iVar1;
  int *piVar2;
  
  if (param_5 == (undefined *)0x0) {
    param_5 = (undefined *)&DAT_00606340;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  FUN_00401750(param_1,param_2,param_3,param_4,*param_5,param_5[1],param_5 + 2,
               *(undefined *)(param_5 + 10),*(undefined *)(param_5 + 0xc));
  *piVar2 = iVar1;
  return;
}


undefined FUN_00402a70(undefined param_1,undefined param_2,long *param_3,undefined *param_4)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined uVar4;
  uint uVar5;
  
  if (param_4 == (undefined *)0x0) {
    param_4 = (undefined *)&DAT_00606340;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  uVar5 = (uint)(param_3 == (long *)0x0) | param_4[1];
  lVar3 = FUN_00401750(0,0,param_1,param_2,*param_4,uVar5,param_4 + 2,*(undefined *)(param_4 + 10),
                       *(undefined *)(param_4 + 0xc));
  uVar4 = FUN_00402fd0(lVar3 + 1);
  FUN_00401750(uVar4,lVar3 + 1,param_1,param_2,*param_4,uVar5,param_4 + 2,
               *(undefined *)(param_4 + 10),*(undefined *)(param_4 + 0xc));
  *piVar2 = iVar1;
  if (param_3 != (long *)0x0) {
    *param_3 = lVar3;
  }
  return uVar4;
}


void FUN_00402b60(undefined param_1,undefined param_2,undefined param_3)

{
  FUN_00402a70(param_1,param_2,0,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00402b70(void)

{
  void **ppvVar1;
  void *__ptr;
  undefined *__ptr_00;
  void **ppvVar2;
  
  __ptr_00 = PTR_DAT_006061b8;
  if (1 < DAT_006061d0) {
    ppvVar2 = (void **)(PTR_DAT_006061b8 + 0x18);
    ppvVar1 = (void **)(PTR_DAT_006061b8 + (ulong)(DAT_006061d0 - 2) * 0x10 + 0x28);
    do {
      __ptr = *ppvVar2;
      ppvVar2 = ppvVar2 + 2;
      free(__ptr);
    } while (ppvVar2 != ppvVar1);
  }
  if (*(undefined **)(__ptr_00 + 8) != &DAT_00606240) {
    free(*(undefined **)(__ptr_00 + 8));
    _DAT_006061c0 = 0x100;
    PTR_DAT_006061c8 = &DAT_00606240;
  }
  if (__ptr_00 != &DAT_006061c0) {
    free(__ptr_00);
    PTR_DAT_006061b8 = &DAT_006061c0;
  }
  DAT_006061d0 = 1;
  return;
}


void FUN_00402c10(undefined param_1,undefined param_2)

{
  FUN_00402760(param_1,param_2,0xffffffffffffffff,&DAT_00606340);
  return;
}


void FUN_00402c30(void)

{
  FUN_00402760();
  return;
}


void FUN_00402c40(undefined param_1)

{
  FUN_00402760(0,param_1,0xffffffffffffffff,&DAT_00606340);
  return;
}


void FUN_00402c60(undefined param_1,undefined param_2)

{
  FUN_00402760(0,param_1,param_2,&DAT_00606340);
  return;
}


void FUN_00402c80(undefined param_1,int param_2,undefined param_3)

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
    FUN_00402760(param_1,param_3,0xffffffffffffffff,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00402cf0(undefined param_1,int param_2,undefined param_3,undefined param_4)

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
    FUN_00402760(param_1,param_3,param_4,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00402d60(undefined param_1,undefined param_2)

{
  FUN_00402c80(0,param_1,param_2);
  return;
}


void FUN_00402d70(undefined param_1,undefined param_2,undefined param_3)

{
  FUN_00402cf0(0,param_1,param_2,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00402d80(undefined param_1,undefined param_2,byte param_3)

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
  
  local_18 = DAT_00606370;
  local_48 = _DAT_00606340;
  uStack_40 = uRam0000000000606348;
  local_38 = _DAT_00606350;
  uStack_30 = uRam0000000000606358;
  puVar1 = (uint *)((long)&uStack_40 + (ulong)(param_3 >> 5) * 4);
  local_28 = _DAT_00606360;
  uStack_20 = uRam0000000000606368;
  uVar2 = *puVar1;
  *puVar1 = (~(uVar2 >> (param_3 & 0x1f)) & 1) << (param_3 & 0x1f) ^ uVar2;
  FUN_00402760(0,param_1,param_2,&local_48);
  return;
}


void FUN_00402df0(undefined param_1,char param_2)

{
  FUN_00402d80(param_1,0xffffffffffffffff,(int)param_2);
  return;
}


void FUN_00402e00(undefined param_1)

{
  FUN_00402d80(param_1,0xffffffffffffffff,0x3a);
  return;
}


void FUN_00402e20(undefined param_1,undefined param_2)

{
  FUN_00402d80(param_1,param_2,0x3a);
  return;
}


void FUN_00402e30(undefined param_1,int param_2,undefined param_3)

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
    FUN_00402760(param_1,param_3,0xffffffffffffffff,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00402ea0(undefined param_1,long param_2,long param_3,undefined param_4,undefined param_5
                 )

{
  undefined local_48;
  undefined uStack_40;
  undefined local_38;
  undefined uStack_30;
  undefined local_28;
  long lStack_20;
  long local_18;
  
  uStack_40 = uRam0000000000606348;
  local_38 = _DAT_00606350;
  uStack_30 = uRam0000000000606358;
  local_28 = _DAT_00606360;
  lStack_20 = uRam0000000000606368;
  local_18 = DAT_00606370;
  local_48 = CONCAT44((int)((ulong)_DAT_00606340 >> 0x20),10);
  if ((param_2 != 0) && (param_3 != 0)) {
    lStack_20 = param_2;
    local_18 = param_3;
    FUN_00402760(param_1,param_4,param_5,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00402f10(void)

{
  FUN_00402ea0();
  return;
}


void FUN_00402f20(undefined param_1,undefined param_2,undefined param_3)

{
  FUN_00402ea0(0,param_1,param_2,param_3,0xffffffffffffffff);
  return;
}


void FUN_00402f40(undefined param_1,undefined param_2,undefined param_3,undefined param_4)

{
  FUN_00402ea0(0,param_1,param_2,param_3,param_4);
  return;
}


void FUN_00402f60(void)

{
  FUN_00402760();
  return;
}


void FUN_00402f70(undefined param_1,undefined param_2)

{
  FUN_00402760(0,param_1,param_2,&DAT_00606180);
  return;
}


void FUN_00402f90(undefined param_1,undefined param_2)

{
  FUN_00402760(param_1,param_2,0xffffffffffffffff,&DAT_00606180);
  return;
}


void FUN_00402fb0(undefined param_1)

{
  FUN_00402760(0,param_1,0xffffffffffffffff,&DAT_00606180);
  return;
}


void FUN_00402fd0(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_004031f0();
  }
  return;
}


void FUN_00402ff0(ulong param_1,ulong param_2)

{
  if (SUB168(ZEXT816(param_1) * ZEXT816(param_2) >> 0x40,0) == 0) {
    FUN_00402fd0(SUB168(ZEXT816(param_1) * ZEXT816(param_2),0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004031f0();
}


void thunk_FUN_00402fd0(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_004031f0();
  }
  return;
}


void * FUN_00403020(void *param_1,size_t param_2)

{
  void *pvVar1;
  
  if ((param_2 == 0) && (param_1 != (void *)0x0)) {
    free(param_1);
    return (void *)0x0;
  }
  pvVar1 = realloc(param_1,param_2);
  if ((pvVar1 == (void *)0x0) && (param_2 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_004031f0();
  }
  return pvVar1;
}


void FUN_00403060(undefined param_1,ulong param_2,ulong param_3)

{
  if (SUB168(ZEXT816(param_2) * ZEXT816(param_3) >> 0x40,0) == 0) {
    FUN_00403020(param_1,SUB168(ZEXT816(param_2) * ZEXT816(param_3),0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004031f0();
}


void FUN_00403080(long param_1,ulong *param_2,ulong param_3)

{
  undefined auVar1 [16];
  ulong uVar2;
  
  uVar2 = *param_2;
  if (param_1 == 0) {
    if (uVar2 == 0) {
      auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x80);
      uVar2 = (ulong)(0x80 < param_3) + SUB168(auVar1 / ZEXT816(param_3),0);
      *param_2 = uVar2;
      FUN_00403020(0,uVar2 * param_3,SUB168(auVar1 % ZEXT816(param_3),0));
      return;
    }
  }
  else {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0xaaaaaaaaaaaaaaaa);
    if (SUB168(auVar1 / ZEXT816(param_3),0) <= uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_004031f0(param_1,param_2,SUB168(auVar1 % ZEXT816(param_3),0));
    }
    uVar2 = (uVar2 >> 1) + 1 + uVar2;
  }
  *param_2 = uVar2;
  FUN_00403020(param_1,uVar2 * param_3);
  return;
}


void FUN_00403100(long param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (param_1 == 0) {
    if (uVar1 == 0) {
      uVar1 = 0x80;
    }
    *param_2 = uVar1;
    FUN_00403020(0,uVar1);
    return;
  }
  if (uVar1 < 0xaaaaaaaaaaaaaaaa) {
    uVar1 = (uVar1 >> 1) + 1 + uVar1;
    *param_2 = uVar1;
    FUN_00403020(param_1,uVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004031f0();
}


void FUN_00403150(size_t param_1)

{
  void *__s;
  
  __s = (void *)FUN_00402fd0();
  memset(__s,0,param_1);
  return;
}


void FUN_00403170(size_t param_1,size_t param_2)

{
  void *pvVar1;
  
  pvVar1 = calloc(param_1,param_2);
  if (pvVar1 != (void *)0x0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004031f0();
}


void FUN_00403190(void *param_1,size_t param_2)

{
  void *__dest;
  
  __dest = (void *)FUN_00402fd0(param_2);
  memcpy(__dest,param_1,param_2);
  return;
}


void FUN_004031c0(char *param_1)

{
  size_t sVar1;
  void *__dest;
  
  sVar1 = strlen(param_1);
  __dest = (void *)FUN_00402fd0(sVar1 + 1);
  memcpy(__dest,param_1,sVar1 + 1);
  return;
}


void FUN_004031f0(void)

{
  undefined uVar1;
  
  uVar1 = dcgettext(0,"memory exhausted",5);
  error(DAT_00606170,0,"%s",uVar1);
                    /* WARNING: Subroutine does not return */
  abort();
}


size_t FUN_00403230(wchar_t *param_1,char *param_2,size_t param_3,mbstate_t *param_4)

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


int FUN_00403260(FILE *param_1)

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

char * FUN_004032d0(void)

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
  if (DAT_00606378 != (char *)0x0) goto LAB_0040330a;
  pcVar7 = getenv("CHARSETALIASDIR");
  if ((pcVar7 == (char *)0x0) || (*pcVar7 == '\0')) {
    sVar6 = 0x74;
    sVar5 = 0x66;
    __n = 0x65;
    pcVar7 = 
    "/home/dongkwan/data/scripts/gnu_packages/findutils/findutils-4.6.0_gcc-8.2.0_x86_64_O2_debug/gogo/lib"
    ;
LAB_004033f5:
    __file = (char *)malloc(sVar6);
    if (__file != (char *)0x0) {
      memcpy(__file,pcVar7,__n);
      __file[__n] = '/';
      goto LAB_00403416;
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
        goto LAB_004033f5;
      }
      sVar6 = __n + 0xe;
    }
    __file = (char *)malloc(sVar6);
    if (__file != (char *)0x0) {
      memcpy(__file,pcVar7,__n);
      sVar5 = __n;
LAB_00403416:
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
LAB_004034b0:
          pbVar8 = (byte *)__stream->_IO_read_ptr;
          if (__stream->_IO_read_end <= pbVar8) goto LAB_0040363c;
          do {
            __stream->_IO_read_ptr = (char *)(pbVar8 + 1);
            uVar4 = (uint)*pbVar8;
            __ptr = pcVar7;
            while( true ) {
              pcVar7 = __ptr;
              if ((uVar4 - 9 < 2) || (uVar4 == 0x20)) goto LAB_004034b0;
              if (uVar4 == 0x23) goto LAB_004036a1;
              ungetc(uVar4,__stream);
              iVar2 = fscanf(__stream,"%50s %50s",&local_b8,&local_78);
              puVar13 = &local_b8;
              if (iVar2 < 2) goto LAB_0040364f;
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
                fclose(__stream);
                goto LAB_00403454;
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
LAB_0040363c:
              uVar4 = __uflow(__stream);
              __ptr = pcVar7;
              if (uVar4 == 0xffffffff) goto LAB_0040364f;
            }
          } while( true );
        }
        close(iVar2);
      }
      goto LAB_0040344e;
    }
  }
  DAT_00606378 = "";
LAB_0040330a:
  cVar1 = *DAT_00606378;
  pcVar7 = DAT_00606378;
  do {
    if (cVar1 == '\0') {
LAB_00403364:
      if (*__s1 == '\0') {
        __s1 = "ASCII";
      }
      return __s1;
    }
    iVar2 = strcmp(__s1,pcVar7);
    if ((iVar2 == 0) || ((cVar1 == '*' && (pcVar7[1] == '\0')))) {
      sVar6 = strlen(pcVar7);
      __s1 = pcVar7 + sVar6 + 1;
      goto LAB_00403364;
    }
    sVar6 = strlen(pcVar7);
    sVar5 = strlen(pcVar7 + sVar6 + 1);
    pcVar7 = pcVar7 + sVar6 + 1 + sVar5 + 1;
    cVar1 = *pcVar7;
  } while( true );
LAB_004036a1:
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
  if (uVar4 == 0xffffffff) goto LAB_0040364f;
  goto LAB_004034b0;
LAB_0040364f:
  fclose(__stream);
  if (local_d0 == 0) {
LAB_0040344e:
    pcVar7 = "";
  }
  else {
    pcVar7[local_d0] = '\0';
  }
LAB_00403454:
  free(__file);
  DAT_00606378 = pcVar7;
  goto LAB_0040330a;
}


/* WARNING: Removing unreachable block (ram,0x00403873) */
/* WARNING: Removing unreachable block (ram,0x00403878) */

void FUN_00403840(void)

{
  __DT_INIT();
  return;
}


void FUN_004038a0(void)

{
  return;
}


void FUN_004038b0(undefined param_1)

{
  __cxa_atexit(param_1,0,DAT_00606168);
  return;
}


undefined FUN_004038c8(undefined param_1,undefined param_2,undefined param_3)

{
  code **ppcVar1;
  
  for (ppcVar1 = (code **)&DAT_00605e30; *ppcVar1 != (code *)0xffffffffffffffff;
      ppcVar1 = ppcVar1 + -1) {
    (**ppcVar1)();
  }
  return param_3;
}


void __DT_FINI(void)

{
  FUN_00401491();
  return;
}

