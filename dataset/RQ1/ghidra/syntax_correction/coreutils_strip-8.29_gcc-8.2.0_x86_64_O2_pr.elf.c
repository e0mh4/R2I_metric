
#include "decompile_ghidra.h"
#define __int64 long long
#define __int32 int
#define __int16 short
#define __int8 char

void switchD_00407300caseD_b(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401d15(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401d1a(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401d1f(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401d24(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void switchD_00408deacaseD_0(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


undefined FUN_00401d40(int param_1,undefined *param_2)

{
  ulong uVar1;
  char cVar2;
  int iVar3;
  undefined uVar4;
  long lVar5;
  void *__ptr;
  char *pcVar6;
  undefined uVar7;
  int *piVar8;
  undefined uVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  char local_4b;
  char local_4a;
  char local_49;
  undefined local_44;
  ulong local_40 [2];
  
  lVar5 = 0;
  local_40[0] = 0;
  FUN_00407110(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils",
                 "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale"
                );
  textdomain("coreutils");
  FUN_0040cd90(FUN_004053d0);
  if (1 < param_1) {
    lVar5 = FUN_00409300((long)(param_1 + -1) << 3);
  }
  local_49 = '\0';
  local_4a = '\0';
  local_4b = '\0';
  uVar10 = 0;
  __ptr = (void *)0x0;
  uVar13 = 0;
LAB_00401dd0:
  do {
    local_44 = 0xffffffff;
    iVar3 = FUN_0040b9d0(param_1,param_2,"-0123456789D:FJN:S::TW:abcde::fh:i::l:mn::o:rs::tvw:",
                         &PTR_s_pages_0040ebe0,&local_44);
    uVar12 = (uint)uVar13;
    if (iVar3 == -1) break;
    if (9 < iVar3 - 0x30U) {
      switch(iVar3) {
      case 1:
        if (((DAT_00614418 != 0) || (*DAT_00614630 != '+')) ||
           (cVar2 = FUN_00402820(0xfffffffe,0x2b,DAT_00614630 + 1), cVar2 == '\0')) {
          uVar10 = 0;
          *(char **)(lVar5 + uVar13 * 8) = DAT_00614630;
          uVar13 = (ulong)(uVar12 + 1);
          goto LAB_00401dd0;
        }
        break;
      case 0x44:
        DAT_006143c0 = DAT_00614630;
        uVar10 = 0;
        goto LAB_00401dd0;
      case 0x46:
      case 0x66:
        DAT_00614447 = 1;
        uVar10 = 0;
        goto LAB_00401dd0;
      case 0x4a:
        DAT_0061443c = 1;
        uVar10 = 0;
        goto LAB_00401dd0;
      case 0x4e:
        uVar10 = 0;
        DAT_00614280 = 0;
        uVar7 = dcgettext(0,"\'-N NUMBER\' invalid starting line number",5);
        DAT_0061427c = FUN_00409680(DAT_00614630,0xffffffff80000000,0x7fffffff,&DAT_0040ce63,uVar7,0
                                   );
        goto LAB_00401dd0;
      case 0x53:
        DAT_006143e0 = '\x01';
        PTR_DAT_00614270 = &DAT_0040ce63;
        DAT_006143dc = 0;
        local_49 = '\0';
        if (DAT_00614630 != (char *)0x0) {
          FUN_00402920();
          uVar10 = 0;
          goto LAB_00401dd0;
        }
        break;
      case 0x54:
        DAT_006142b5 = 0;
        uVar10 = 0;
        DAT_0061444a = 0;
        goto LAB_00401dd0;
      case 0x57:
        uVar10 = 0;
        DAT_0061443d = '\x01';
        uVar7 = dcgettext(0,"\'-W PAGE_WIDTH\' invalid number of characters",5);
        DAT_006142ac = FUN_00409680(DAT_00614630,1,0x7fffffff,&DAT_0040ce63,uVar7,0);
        local_4a = '\0';
        goto LAB_00401dd0;
      case 0x61:
        DAT_00614445 = '\x01';
        uVar10 = 0;
        DAT_006142b4 = 0;
        goto LAB_00401dd0;
      case 0x62:
        DAT_00614444 = 1;
        uVar10 = 0;
        goto LAB_00401dd0;
      case 99:
        DAT_006143e9 = 1;
        uVar10 = 0;
        goto LAB_00401dd0;
      case 100:
        DAT_006143e8 = 1;
        uVar10 = 0;
        goto LAB_00401dd0;
      case 0x65:
        if (DAT_00614630 != (char *)0x0) {
          FUN_004052e0(DAT_00614630,0x65,&DAT_006142a8,&DAT_006142a4);
        }
        DAT_00614435 = 1;
        uVar10 = 0;
        goto LAB_00401dd0;
      case 0x68:
        DAT_006143c8 = DAT_00614630;
        uVar10 = 0;
        goto LAB_00401dd0;
      case 0x69:
        if (DAT_00614630 != (char *)0x0) {
          FUN_004052e0(DAT_00614630,0x69,&DAT_006142a0,&DAT_0061429c);
        }
        DAT_00614434 = 1;
        uVar10 = 0;
        goto LAB_00401dd0;
      case 0x6c:
        uVar10 = 0;
        uVar7 = dcgettext(0,"\'-l PAGE_LENGTH\' invalid number of lines",5);
        DAT_006142b0 = FUN_00409680(DAT_00614630,1,0x7fffffff,&DAT_0040ce63,uVar7,0);
        goto LAB_00401dd0;
      case 0x6d:
        DAT_0061444f = '\x01';
        uVar10 = 0;
        DAT_006142b4 = 0;
        goto LAB_00401dd0;
      case 0x6e:
        DAT_006143fc = 1;
        if (DAT_00614630 != (char *)0x0) {
          uVar10 = 0;
          FUN_004052e0(DAT_00614630,0x6e,&DAT_00614288,&DAT_00614278);
          goto LAB_00401dd0;
        }
        break;
      case 0x6f:
        uVar10 = 0;
        uVar7 = dcgettext(0,"\'-o MARGIN\' invalid line offset",5);
        DAT_0061442c = FUN_00409680(DAT_00614630,0,0x7fffffff,&DAT_0040ce63,uVar7,0);
        goto LAB_00401dd0;
      case 0x72:
        DAT_006143e1 = 1;
        uVar10 = 0;
        goto LAB_00401dd0;
      case 0x73:
        local_4b = DAT_006143e0;
        local_49 = DAT_006143e0;
        if (DAT_006143e0 == '\0') {
          if (DAT_00614630 == (char *)0x0) {
            local_49 = '\x01';
            uVar10 = 0;
            local_4b = '\x01';
          }
          else {
            FUN_00402920();
            uVar10 = 0;
            local_49 = '\x01';
            local_4b = '\x01';
          }
          goto LAB_00401dd0;
        }
        break;
      case 0x74:
        DAT_006142b5 = 0;
        uVar10 = 0;
        DAT_0061444a = 1;
        goto LAB_00401dd0;
      case 0x76:
        DAT_006143ea = 1;
        uVar10 = 0;
        goto LAB_00401dd0;
      case 0x77:
        uVar7 = dcgettext(0,"\'-w PAGE_WIDTH\' invalid number of characters",5);
        uVar4 = FUN_00409680(DAT_00614630,1,0x7fffffff,&DAT_0040ce63,uVar7,0);
        local_4b = DAT_0061443d;
        local_4a = local_4b;
        if (DAT_0061443d == '\0') {
          uVar10 = 0;
          local_4a = '\x01';
          local_4b = '\x01';
          DAT_006142ac = uVar4;
          goto LAB_00401dd0;
        }
        break;
      case 0x80:
        uVar10 = 0;
        FUN_00402950(DAT_00614630);
        free(__ptr);
        local_40[0] = 0;
        __ptr = (void *)0x0;
        goto LAB_00401dd0;
      case 0x81:
        if (DAT_00614630 == (char *)0x0) {
          uVar7 = dcgettext(0,"\'--pages=FIRST_PAGE[:LAST_PAGE]\' missing argument",5);
                    /* WARNING: Subroutine does not return */
          error(1,0,uVar7);
        }
        cVar2 = FUN_00402820(local_44,0);
        if (cVar2 == '\0') {
          uVar7 = FUN_00408d30(DAT_00614630);
          uVar9 = dcgettext(0,"invalid page range %s",5);
                    /* WARNING: Subroutine does not return */
          error(1,0,uVar9,uVar7);
        }
        break;
      case -0x83:
        FUN_004091c0(stdout,&DAT_0040ce7a,"GNU coreutils",PTR_DAT_006142b8,"Pete TerMaat",
                     "Roland Huebner",0,iVar3 - 0x30U);
                    /* WARNING: Subroutine does not return */
        exit(0);
      case -0x82:
                    /* WARNING: Subroutine does not return */
        FUN_00404de0(0);
      default:
                    /* WARNING: Subroutine does not return */
        FUN_00404de0(1);
      }
      uVar10 = 0;
      goto LAB_00401dd0;
    }
    uVar1 = uVar10 + 1;
    if (local_40[0] <= uVar1) {
      __ptr = (void *)FUN_00409460(__ptr,local_40);
    }
    *(char *)((long)__ptr + uVar10) = (char)iVar3;
    *(undefined *)((long)__ptr + uVar1) = 0;
    uVar10 = uVar1;
  } while( true );
  if (__ptr != (void *)0x0) {
    FUN_00402950(__ptr);
    free(__ptr);
  }
  if (DAT_006143c0 == (char *)0x0) {
    pcVar6 = getenv("POSIXLY_CORRECT");
    if ((pcVar6 == (char *)0x0) || (cVar2 = FUN_00405590(2), cVar2 != '\0')) {
      DAT_006143c0 = "%Y-%m-%d %H:%M";
    }
    else {
      DAT_006143c0 = "%b %e %H:%M %Y";
    }
  }
  pcVar6 = getenv("TZ");
  DAT_006143b8 = FUN_0040bba0(pcVar6);
  cVar2 = DAT_0061444f;
  if (DAT_00614418 == 0) {
    DAT_00614418 = 1;
  }
  if (DAT_0061444f != '\0') {
    if (DAT_0061444b != '\0') {
      uVar7 = dcgettext(0,"cannot specify number of columns when printing in parallel",5);
                    /* WARNING: Subroutine does not return */
      error(1,0,uVar7);
    }
    if (DAT_00614445 != '\0') {
      uVar7 = dcgettext(0,"cannot specify both printing across and printing in parallel",5);
                    /* WARNING: Subroutine does not return */
      error(1,0,uVar7);
    }
  }
  if (local_4b == '\0') goto LAB_0040233f;
  if (local_4a == '\0') {
    if ((((DAT_006143e0 == '\x01') || (local_49 == '\0')) ||
        ((DAT_0061444f == '\0' && (DAT_0061444b == '\0')))) ||
       ((DAT_0061443d == '\0' && (DAT_0061443c = 1, DAT_006143dc < 1)))) goto LAB_0040233f;
  }
  else {
    if ((DAT_0061444f == '\0') && (DAT_0061444b == '\0')) {
      DAT_0061443c = 1;
      goto LAB_0040233f;
    }
    DAT_0061443d = '\x01';
    if (local_49 == '\0') goto LAB_0040233f;
  }
  DAT_006143e0 = '\x01';
LAB_0040233f:
  if (DAT_00614338._4_4_ < param_1) {
    param_2 = param_2 + DAT_00614338._4_4_;
    uVar11 = (param_1 - DAT_00614338._4_4_) + uVar12;
    do {
      uVar7 = *param_2;
      uVar12 = (int)uVar13 + 1;
      param_2 = param_2 + 1;
      *(undefined *)(lVar5 + uVar13 * 8) = uVar7;
      uVar13 = (ulong)uVar12;
      DAT_00614338._4_4_ = param_1;
    } while (uVar12 != uVar11);
  }
  if (uVar12 == 0) {
    FUN_00403e40(0,0);
  }
  else if (cVar2 == '\0') {
    lVar14 = lVar5;
    do {
      lVar15 = lVar14 + 8;
      FUN_00403e40(1,lVar14);
      lVar14 = lVar15;
    } while (lVar5 + 8 + (ulong)(uVar12 - 1) * 8 != lVar15);
  }
  else {
    FUN_00403e40(uVar12,lVar5);
  }
  free(DAT_006143f0);
  free(DAT_00614398);
  free(DAT_00614478);
  free(DAT_00614458);
  free(DAT_00614450);
  free(DAT_00614470);
  if ((DAT_00614446 != '\0') && (iVar3 = FUN_0040aa20(stdin), iVar3 == -1)) {
    uVar7 = dcgettext(0,"standard input",5);
    piVar8 = __errno_location();
                    /* WARNING: Subroutine does not return */
    error(1,*piVar8,uVar7);
  }
  return DAT_00614420;
}


void FUN_004025d0(undefined param_1,undefined param_2,undefined param_3)

{
  undefined unaff_retaddr;
  undefined auStack_8 [8];
  
  (*(code *)PTR___libc_start_main_00613ff0)
            (FUN_00401d40,unaff_retaddr,&stack0x00000008,FUN_0040cd20,FUN_0040cd80,param_3,auStack_8
            );
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* WARNING: Removing unreachable block (ram,0x00402608) */
/* WARNING: Removing unreachable block (ram,0x00402612) */

void FUN_004025fb(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00402649) */

void FUN_0040261a(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00402686) */

void FUN_00402651(void)

{
  if (DAT_00614368 != '\0') {
    return;
  }
  FUN_004025fb();
  DAT_00614368 = 1;
  return;
}


/* WARNING: Removing unreachable block (ram,0x00402649) */

void thunk_FUN_0040261a(void)

{
  return;
}


int FUN_004026b0(void)

{
  int iVar1;
  long lVar2;
  
  iVar1 = DAT_00614298;
  if (DAT_00614298 != 0) {
    iVar1 = 0;
    lVar2 = DAT_00614478;
    do {
      if ((*(uint *)(lVar2 + 0x10) < 2) ||
         (((DAT_006142b4 != '\0' && (0 < *(int *)(lVar2 + 0x2c))) && (0 < *(int *)(lVar2 + 0x30)))))
      {
        iVar1 = iVar1 + 1;
      }
      lVar2 = lVar2 + 0x40;
    } while (lVar2 != ((ulong)(DAT_00614298 - 1) + 1) * 0x40 + DAT_00614478);
  }
  return iVar1;
}


void FUN_00402710(void)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  
  lVar2 = DAT_00614478;
  if (DAT_00614298 != 0) {
    bVar1 = false;
    lVar5 = ((ulong)(DAT_00614298 - 1) + 1) * 0x40 + DAT_00614478;
    lVar3 = DAT_00614478;
    uVar4 = DAT_00614410;
    do {
      if (*(int *)(lVar3 + 0x10) == 2) {
        *(undefined *)(lVar3 + 0x10) = 0;
        uVar4 = uVar4 + 1;
        bVar1 = true;
      }
      lVar3 = lVar3 + 0x40;
    } while (lVar3 != lVar5);
    if (bVar1) {
      DAT_00614410 = uVar4;
    }
  }
  if (DAT_006142b4 != '\0') {
    DAT_00614410 = (uint)(*(int *)(lVar2 + 0x10) != 3);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00402790(undefined param_1)

{
  if (DAT_00614468 < _DAT_00614460) {
    *(undefined *)(DAT_00614470 + (ulong)DAT_00614468) = param_1;
    DAT_00614468 = DAT_00614468 + 1;
    return;
  }
  DAT_00614470 = FUN_00409460(DAT_00614470,&DAT_00614460);
  *(undefined *)(DAT_00614470 + (ulong)DAT_00614468) = param_1;
  DAT_00614468 = DAT_00614468 + 1;
  return;
}


void FUN_004027f0(void)

{
  undefined uVar1;
  
  uVar1 = dcgettext(0,"integer overflow",5);
                    /* WARNING: Subroutine does not return */
  error(1,0,uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

size_t FUN_00402820(undefined param_1,char param_2,char *param_3)

{
  char cVar1;
  uint uVar2;
  size_t sVar3;
  undefined uVar4;
  char *__s;
  char *pcVar5;
  char *local_40;
  ulong local_38;
  ulong local_30 [2];
  
  local_30[0] = 0xffffffffffffffff;
  uVar2 = FUN_0040a5e0(param_3,&local_40,10,&local_38,&DAT_0040ce63);
  if ((uVar2 & 0xfffffffd) != 0) {
LAB_00402903:
    __s = (char *)(ulong)uVar2;
    FUN_0040a550(__s,param_1,(int)param_2,&PTR_s_pages_0040ebe0,param_3);
    pcVar5 = __s;
    sVar3 = strlen(__s);
    if (0x7fffffff < sVar3) {
      FUN_004027f0();
      uVar4 = dcgettext(0,"invalid number of columns",5);
      sVar3 = FUN_00409680(pcVar5,1,0x7fffffff,&DAT_0040ce63,uVar4,0,__s,param_3);
      DAT_0061444b = 1;
      DAT_00614298 = (int)sVar3;
      return sVar3;
    }
    PTR_DAT_00614270 = __s;
    DAT_006143dc = (int)sVar3;
    return sVar3;
  }
  if ((local_40 != param_3) && (local_38 != 0)) {
    cVar1 = *local_40;
    if (cVar1 == ':') {
      pcVar5 = local_40 + 1;
      uVar2 = FUN_0040a5e0(pcVar5,&local_40,10,local_30,&DAT_0040ce63);
      if (uVar2 != 0) goto LAB_00402903;
      if (local_40 == pcVar5) {
        return 0;
      }
      if (local_30[0] < local_38) {
        return 0;
      }
      cVar1 = *local_40;
    }
    if (cVar1 == '\0') {
      DAT_00614418 = local_38;
      _DAT_00614290 = local_30[0];
      return 1;
    }
  }
  return 0;
}


void FUN_00402920(char *param_1)

{
  size_t sVar1;
  undefined uVar2;
  char *pcVar3;
  
  pcVar3 = param_1;
  sVar1 = strlen(param_1);
  if (sVar1 < 0x80000000) {
    PTR_DAT_00614270 = param_1;
    DAT_006143dc = (int)sVar1;
    return;
  }
  FUN_004027f0();
  uVar2 = dcgettext(0,"invalid number of columns",5);
  DAT_00614298 = FUN_00409680(pcVar3,1,0x7fffffff,&DAT_0040ce63,uVar2,0,param_1);
  DAT_0061444b = 1;
  return;
}


void FUN_00402950(undefined param_1)

{
  undefined uVar1;
  
  uVar1 = dcgettext(0,"invalid number of columns",5);
  DAT_00614298 = FUN_00409680(param_1,1,0x7fffffff,&DAT_0040ce63,uVar1,0);
  DAT_0061444b = 1;
  return;
}


void FUN_004029a0(FILE **param_1)

{
  int iVar1;
  long lVar2;
  undefined uVar3;
  int *piVar4;
  long lVar5;
  
  if (*(int *)(param_1 + 2) == 3) {
    return;
  }
  if ((*(byte *)&(*param_1)->_flags & 0x20) == 0) {
    iVar1 = fileno(*param_1);
    if (iVar1 != 0) {
      iVar1 = FUN_0040aa20(*param_1);
      if (iVar1 != 0) {
        uVar3 = FUN_00408bb0(0,3,param_1[1]);
        piVar4 = __errno_location();
                    /* WARNING: Subroutine does not return */
        error(1,*piVar4,"%s",uVar3);
      }
    }
    if (DAT_0061444f == '\0') {
      if (DAT_00614298 != 0) {
        lVar5 = ((ulong)(DAT_00614298 - 1) + 1) * 0x40 + DAT_00614478;
        lVar2 = DAT_00614478;
        do {
          *(undefined *)(lVar2 + 0x10) = 3;
          if (*(int *)(lVar2 + 0x2c) == 0) {
            *(undefined *)(lVar2 + 0x30) = 0;
          }
          lVar2 = lVar2 + 0x40;
        } while (lVar2 != lVar5);
        DAT_00614410 = DAT_00614410 + -1;
        return;
      }
    }
    else {
      *(undefined *)(param_1 + 2) = 3;
      *(undefined *)(param_1 + 6) = 0;
    }
    DAT_00614410 = DAT_00614410 + -1;
    return;
  }
  uVar3 = FUN_00408bb0(0,3,param_1[1]);
  piVar4 = __errno_location();
                    /* WARNING: Subroutine does not return */
  error(1,*piVar4,"%s",uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00402ab0(byte *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined uVar4;
  undefined uVar5;
  long lVar6;
  byte *pbVar7;
  byte *pbVar8;
  bool bVar9;
  bool bVar10;
  long local_128;
  ulong uStack_120;
  undefined local_118 [32];
  undefined local_f8 [64];
  stat local_b8;
  
  lVar6 = 2;
  bVar9 = &stack0xffffffffffffffd8 < (undefined *)0x100;
  bVar10 = &stack0x00000000 == (undefined *)0x128;
  pbVar7 = param_1;
  pbVar8 = &DAT_00410b71;
  do {
    if (lVar6 == 0) break;
    lVar6 = lVar6 + -1;
    bVar9 = *pbVar7 < *pbVar8;
    bVar10 = *pbVar7 == *pbVar8;
    pbVar7 = pbVar7 + 1;
    pbVar8 = pbVar8 + 1;
  } while (bVar10);
  if ((!bVar9 && !bVar10) == bVar9) {
    param_2 = -1;
    iVar3 = -1;
    if (_DAT_00614380 == 0) {
LAB_00402bf4:
      param_2 = iVar3;
      FUN_00405550(&DAT_00614380);
    }
  }
  else {
    if ((-1 < param_2) && (iVar3 = __fxstat(1,param_2,&local_b8), iVar3 == 0)) {
      local_128 = local_b8.st_mtim.tv_sec;
      goto LAB_00402b09;
    }
    iVar3 = param_2;
    if (_DAT_00614380 == 0) goto LAB_00402bf4;
  }
  local_128 = _DAT_00614380;
  local_b8.st_mtim.tv_nsec = uRam0000000000614388;
LAB_00402b09:
  uStack_120 = local_b8.st_mtim.tv_nsec;
  lVar6 = FUN_0040be80(DAT_006143b8,&local_128,local_f8);
  if (lVar6 == 0) {
    uVar4 = FUN_00409300(0x21);
    uVar5 = FUN_004055f0(local_128,local_118);
    __sprintf_chk(uVar4,1,0x21,"%s.%09d",uVar5,local_b8.st_mtim.tv_nsec & 0xffffffff);
  }
  else {
    lVar6 = FUN_004070f0(0,0xffffffffffffffff,DAT_006143c0,local_f8,DAT_006143b8,
                         local_b8.st_mtim.tv_nsec & 0xffffffff);
    uVar4 = FUN_00409300(lVar6 + 1);
    FUN_004070f0(uVar4,lVar6 + 1,DAT_006143c0,local_f8,DAT_006143b8,
                 local_b8.st_mtim.tv_nsec & 0xffffffff);
  }
  free(DAT_006143b0);
  iVar3 = DAT_006142ac;
  DAT_006143a8 = DAT_006143c8;
  if ((DAT_006143c8 == (byte *)0x0) && (DAT_006143a8 = &DAT_0040ce63, -1 < param_2)) {
    DAT_006143a8 = param_1;
  }
  DAT_006143b0 = (void *)uVar4;
  iVar1 = FUN_00405850(uVar4,0);
  iVar2 = FUN_00405850(DAT_006143a8,0);
  DAT_006143a0 = (iVar3 - iVar1) - iVar2;
  return;
}


void FUN_00402ca0(int param_1)

{
  char *pcVar1;
  int iVar2;
  
  iVar2 = DAT_00614428;
  if (DAT_00614434 != '\0') {
    DAT_00614430 = param_1 - DAT_00614428;
    return;
  }
  while (iVar2 = iVar2 + 1, iVar2 <= param_1) {
    pcVar1 = stdout->_IO_write_ptr;
    if (pcVar1 < stdout->_IO_write_end) {
      stdout->_IO_write_ptr = pcVar1 + 1;
      *pcVar1 = ' ';
    }
    else {
      __overflow(stdout,0x20);
    }
  }
  DAT_00614428 = param_1;
  return;
}


char * FUN_00402d10(void)

{
  int iVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = DAT_00614430 + DAT_00614428;
  iVar6 = DAT_00614428;
  while (bVar3 = DAT_006142a0, pcVar5 = (char *)(ulong)(uint)(iVar7 - iVar6), 1 < iVar7 - iVar6) {
    pcVar5 = (char *)((long)iVar6 / (long)DAT_0061429c & 0xffffffff);
    iVar1 = (DAT_0061429c - iVar6 % DAT_0061429c) + iVar6;
    if (iVar7 < iVar1) break;
    pbVar2 = (byte *)stdout->_IO_write_ptr;
    iVar6 = iVar1;
    if (pbVar2 < stdout->_IO_write_end) {
      stdout->_IO_write_ptr = (char *)(pbVar2 + 1);
      *pbVar2 = bVar3;
    }
    else {
      __overflow(stdout,(uint)DAT_006142a0);
    }
  }
  while (iVar6 = iVar6 + 1, iVar6 <= iVar7) {
    pcVar5 = stdout->_IO_write_ptr;
    if (pcVar5 < stdout->_IO_write_end) {
      stdout->_IO_write_ptr = pcVar5 + 1;
      *pcVar5 = ' ';
    }
    else {
      uVar4 = __overflow(stdout,0x20);
      pcVar5 = (char *)(ulong)uVar4;
    }
  }
  DAT_00614428 = iVar7;
  DAT_00614430 = 0;
  return pcVar5;
}


void FUN_00402dd0(void)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  
  pbVar5 = PTR_DAT_00614270;
  iVar4 = DAT_006143dc;
  if (DAT_006143d8 < 1) {
    if (0 < DAT_00614430) {
      FUN_00402d10();
      return;
    }
    return;
  }
  do {
    iVar6 = iVar4 + (int)pbVar5;
    pbVar3 = pbVar5;
    while (pbVar2 = pbVar3, 0 < iVar6 - (int)pbVar3) {
      while( true ) {
        bVar1 = *pbVar2;
        pbVar3 = pbVar2 + 1;
        if (bVar1 == 0x20) break;
        if (0 < DAT_00614430) {
          FUN_00402d10();
          bVar1 = *pbVar2;
        }
        pbVar2 = (byte *)stdout->_IO_write_ptr;
        if (pbVar2 < stdout->_IO_write_end) {
          stdout->_IO_write_ptr = (char *)(pbVar2 + 1);
          *pbVar2 = bVar1;
        }
        else {
          __overflow(stdout,(uint)bVar1);
        }
        DAT_00614428 = DAT_00614428 + 1;
        pbVar2 = pbVar3;
        if (iVar6 - (int)pbVar3 < 1) goto LAB_00402e61;
      }
      DAT_00614430 = DAT_00614430 + 1;
    }
LAB_00402e61:
    iVar6 = 0;
    if (-1 < iVar4) {
      iVar6 = iVar4;
    }
    iVar4 = (iVar4 + -1) - iVar6;
    pbVar5 = pbVar5 + iVar6;
    if (0 < DAT_00614430) {
      FUN_00402d10();
    }
    DAT_006143d8 = DAT_006143d8 + -1;
    if (DAT_006143d8 < 1) {
      return;
    }
  } while( true );
}


void FUN_00402ee0(void)

{
  long lVar1;
  int iVar2;
  undefined uVar3;
  int iVar4;
  undefined auStack_138 [296];
  
  DAT_00614428 = 0;
  FUN_00402ca0(DAT_0061442c);
  FUN_00402d10();
  lVar1 = DAT_00614408;
  if (DAT_00614408 != 0) {
    uVar3 = dcgettext(0,"Page %lu",5);
    __sprintf_chk(auStack_138,1,0x114,uVar3,lVar1);
    iVar4 = DAT_006143a0;
    iVar2 = FUN_00405850(auStack_138,0);
    iVar4 = iVar4 - iVar2;
    if (iVar4 < 0) {
      iVar4 = 0;
    }
    __printf_chk(1,"\n\n%*s%s%*s%s%*s%s\n\n\n",DAT_0061442c,&DAT_0040ce63,DAT_006143b0,iVar4 >> 1,
                 &DAT_00411057,DAT_006143a8,iVar4 - (iVar4 >> 1),&DAT_00411057,auStack_138);
    DAT_00614448 = 0;
    DAT_00614428 = 0;
    return;
  }
  uVar3 = dcgettext(0,"page number overflow",5);
                    /* WARNING: Subroutine does not return */
  error(1,0,uVar3);
}


int FUN_00402fe0(byte param_1)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ushort **ppuVar5;
  int iVar6;
  byte *pbVar7;
  byte local_1c;
  byte local_1b;
  byte local_1a;
  byte *pbVar8;
  
  pbVar1 = DAT_00614398;
  if (DAT_006142a8 == param_1) {
    iVar3 = DAT_006142a4 - DAT_00614424 % DAT_006142a4;
    if (DAT_00614435 == '\0') goto LAB_00403084;
    if (iVar3 == 0) {
      return 0;
    }
LAB_004030f8:
    pbVar1 = DAT_00614398 + (ulong)(iVar3 - 1) + 1;
    pbVar8 = DAT_00614398;
    do {
      pbVar7 = pbVar8 + 1;
      *pbVar8 = 0x20;
      pbVar8 = pbVar7;
      iVar4 = iVar3;
    } while (pbVar7 != pbVar1);
LAB_0040308c:
    if (-1 < iVar3) goto LAB_00403090;
    if (DAT_00614424 == 0) {
      DAT_00614424 = 0;
      return 0;
    }
    iVar6 = -iVar3;
  }
  else {
    if (param_1 == 9) {
      uVar2 = (uint)(DAT_00614424 >> 0x1f) >> 0x1d;
      iVar3 = (uVar2 - (DAT_00614424 + uVar2 & 7)) + 8;
      if (DAT_00614435 != '\0') goto LAB_004030f8;
LAB_00403084:
      *DAT_00614398 = param_1;
      iVar4 = 1;
      goto LAB_0040308c;
    }
    ppuVar5 = __ctype_b_loc();
    if ((*(byte *)((long)*ppuVar5 + (ulong)param_1 * 2 + 1) & 0x40) != 0) {
      *pbVar1 = param_1;
      DAT_00614424 = DAT_00614424 + 1;
      return 1;
    }
    if (DAT_006143ea != '\0') {
LAB_00403148:
      *pbVar1 = 0x5c;
      __sprintf_chk(&local_1c,1,4,&DAT_0040ce4a,param_1);
      pbVar1[1] = local_1c;
      pbVar1[2] = local_1b;
      pbVar1[3] = local_1a;
      DAT_00614424 = DAT_00614424 + 4;
      return 4;
    }
    if (DAT_006143e9 != '\0') {
      if (-1 < (char)param_1) {
        *pbVar1 = 0x5e;
        pbVar1[1] = param_1 ^ 0x40;
        DAT_00614424 = DAT_00614424 + 2;
        return 2;
      }
      goto LAB_00403148;
    }
    if (param_1 != 8) {
      *pbVar1 = param_1;
      return 1;
    }
    *pbVar1 = 8;
    if (DAT_00614424 == 0) {
      DAT_00614424 = 0;
      return 0;
    }
    iVar6 = 1;
    iVar3 = -1;
    iVar4 = 1;
  }
  if (DAT_00614424 <= iVar6) {
    DAT_00614424 = 0;
    return iVar4;
  }
LAB_00403090:
  DAT_00614424 = DAT_00614424 + iVar3;
  return iVar4;
}


void FUN_004031e0(byte param_1)

{
  byte *pbVar1;
  ushort **ppuVar2;
  
  if (DAT_00614434 != '\0') {
    if (param_1 == 0x20) {
      DAT_00614430 = DAT_00614430 + 1;
      return;
    }
    if (0 < DAT_00614430) {
      FUN_00402d10();
    }
    ppuVar2 = __ctype_b_loc();
    if ((*(byte *)((long)*ppuVar2 + (ulong)param_1 * 2 + 1) & 0x40) == 0) {
      if (param_1 == 8) {
        DAT_00614428 = DAT_00614428 + -1;
      }
    }
    else {
      DAT_00614428 = DAT_00614428 + 1;
    }
  }
  pbVar1 = (byte *)stdout->_IO_write_ptr;
  if (pbVar1 < stdout->_IO_write_end) {
    stdout->_IO_write_ptr = (char *)(pbVar1 + 1);
    *pbVar1 = param_1;
    return;
  }
  __overflow(stdout,(uint)param_1);
  return;
}


undefined FUN_00403280(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  char *pcVar6;
  long lVar7;
  
  lVar2 = DAT_00614470;
  lVar7 = (long)*(int *)(param_1 + 0x28);
  DAT_006143d0 = 1;
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  iVar1 = *(int *)(DAT_00614458 + 4 + lVar7 * 4);
  pcVar6 = (char *)(*(int *)(DAT_00614458 + lVar7 * 4) + lVar2);
  if (DAT_00614448 != '\0') {
    FUN_00402ee0();
  }
  lVar3 = DAT_00614478;
  if (*(int *)(param_1 + 0x10) == 1) {
    if (0 < DAT_00614298) {
      lVar5 = ((ulong)(DAT_00614298 - 1) + 1) * 0x40 + DAT_00614478;
      lVar4 = DAT_00614478;
      do {
        *(undefined *)(lVar4 + 0x10) = 2;
        lVar4 = lVar4 + 0x40;
      } while (lVar4 != lVar5);
    }
    if (*(int *)(lVar3 + 0x30) < 1) {
      if (DAT_006142b5 != '\0') {
        return 1;
      }
      DAT_006143d0 = 0;
      return 1;
    }
  }
  if (DAT_006143dc < DAT_006143d4) {
    FUN_00402ca0(DAT_006143d4 - DAT_006143dc);
    DAT_006143d4 = 0;
  }
  if (DAT_006143e0 != '\0') {
    FUN_00402dd0();
  }
  for (; pcVar6 != (char *)(lVar2 + iVar1); pcVar6 = pcVar6 + 1) {
    FUN_004031e0((int)*pcVar6);
  }
  if ((DAT_00614430 == 0) &&
     (DAT_00614428 = *(int *)(DAT_00614450 + lVar7 * 4) + *(int *)(param_1 + 0x34),
     *(int *)(param_1 + 0x34) - DAT_006143dc == DAT_0061442c)) {
    DAT_00614428 = DAT_00614428 - DAT_006143dc;
    return 1;
  }
  return 1;
}


void FUN_00403410(undefined *param_1,undefined *param_2)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  
  if (DAT_0061444f == '\0') {
    if (DAT_00614298 != 0) {
      bVar3 = DAT_006142b4 == '\0';
      lVar2 = ((ulong)(DAT_00614298 - 1) + 1) * 0x40 + DAT_00614478;
      lVar1 = DAT_00614478;
      do {
        *(uint *)(lVar1 + 0x10) = ~-(uint)bVar3 + 2;
        lVar1 = lVar1 + 0x40;
      } while (lVar1 != lVar2);
    }
    *param_2 = 0;
    DAT_00614410 = DAT_00614410 + -1;
    return;
  }
  *param_1 = 2;
  DAT_00614410 = DAT_00614410 + -1;
  *param_2 = 0;
  return;
}


void FUN_00403490(_IO_FILE **param_1,int param_2)

{
  _IO_FILE *__stream;
  byte *pbVar1;
  char cVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  
  __stream = *param_1;
  pbVar1 = (byte *)__stream->_IO_read_ptr;
  if (pbVar1 < __stream->_IO_read_end) {
    __stream->_IO_read_ptr = (char *)(pbVar1 + 1);
    uVar3 = (uint)*pbVar1;
  }
  else {
    uVar3 = __uflow(__stream);
  }
  cVar2 = DAT_00614390;
  if (uVar3 == 0xc) {
    if (*(char *)((long)param_1 + 0x39) == '\0') {
      if (DAT_00614390 == '\0') {
        cVar6 = '\x01';
      }
      else {
        *(undefined *)((long)param_1 + 0x39) = 1;
        cVar6 = cVar2;
LAB_00403597:
        if (cVar2 != '\0') {
          if (DAT_0061444f == '\0') {
            if (DAT_00614298 != 0) {
              lVar5 = ((ulong)(DAT_00614298 - 1) + 1) * 0x40 + DAT_00614478;
              lVar4 = DAT_00614478;
              do {
                *(undefined *)(lVar4 + 0x39) = 0;
                lVar4 = lVar4 + 0x40;
              } while (lVar4 != lVar5);
            }
          }
          else {
            *(undefined *)((long)param_1 + 0x39) = 0;
          }
        }
      }
      pbVar1 = (byte *)__stream->_IO_read_ptr;
      if (pbVar1 < __stream->_IO_read_end) {
        __stream->_IO_read_ptr = (char *)(pbVar1 + 1);
        uVar3 = (uint)*pbVar1;
      }
      else {
        uVar3 = __uflow(__stream);
      }
      if (uVar3 == 10) {
        FUN_00403410(param_1 + 2,param_1 + 6);
      }
      else {
        ungetc(uVar3,__stream);
        FUN_00403410(param_1 + 2,param_1 + 6);
      }
      goto LAB_004034e0;
    }
    pbVar1 = (byte *)__stream->_IO_read_ptr;
    if (pbVar1 < __stream->_IO_read_end) {
      __stream->_IO_read_ptr = (char *)(pbVar1 + 1);
      uVar3 = (uint)*pbVar1;
    }
    else {
      uVar3 = __uflow(__stream);
    }
    if (uVar3 == 10) {
      pbVar1 = (byte *)__stream->_IO_read_ptr;
      if (pbVar1 < __stream->_IO_read_end) {
        __stream->_IO_read_ptr = (char *)(pbVar1 + 1);
        uVar3 = (uint)*pbVar1;
      }
      else {
        uVar3 = __uflow(__stream);
      }
    }
    cVar6 = uVar3 == 0xc;
    *(undefined *)((long)param_1 + 0x39) = 0;
  }
  else {
    *(undefined *)((long)param_1 + 0x39) = 0;
    cVar6 = false;
  }
  cVar2 = DAT_00614390;
  if (DAT_00614390 != '\0') {
    *(undefined *)((long)param_1 + 0x39) = 1;
    cVar2 = DAT_00614390;
  }
  while (DAT_00614390 = cVar2, uVar3 != 10) {
    if (uVar3 == 0xc) goto LAB_00403597;
    if (uVar3 == 0xffffffff) {
      FUN_004029a0(param_1);
      break;
    }
    pbVar1 = (byte *)__stream->_IO_read_ptr;
    if (pbVar1 < __stream->_IO_read_end) {
      __stream->_IO_read_ptr = (char *)(pbVar1 + 1);
      uVar3 = (uint)*pbVar1;
      cVar2 = DAT_00614390;
    }
    else {
      uVar3 = __uflow(__stream);
      cVar2 = DAT_00614390;
    }
  }
LAB_004034e0:
  if ((DAT_00614280 != '\0') && (((DAT_0061444f != '\x01' || (param_2 == 1)) && (cVar6 == '\0')))) {
    DAT_00614284 = DAT_00614284 + 1;
  }
  return;
}


void FUN_004036c0(code **param_1)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  
  iVar1 = __sprintf_chk(DAT_006143f0,1,0xffffffffffffffff,&DAT_0040ce4f,DAT_00614278,DAT_00614400);
  DAT_00614400 = DAT_00614400 + 1;
  uVar2 = DAT_00614278 - 1;
  pcVar3 = (char *)((iVar1 - DAT_00614278) + DAT_006143f0);
  pcVar5 = pcVar3;
  if (0 < DAT_00614278) {
    do {
      pcVar4 = pcVar5 + 1;
      (**param_1)((int)*pcVar5);
      pcVar5 = pcVar4;
    } while (pcVar4 != pcVar3 + (ulong)uVar2 + 1);
  }
  if (DAT_00614298 < 2) {
    (**param_1)();
    if (DAT_00614288 == '\t') {
      DAT_00614428 = (DAT_0061429c - DAT_00614428 % DAT_0061429c) + DAT_00614428;
    }
  }
  else if (DAT_00614288 == '\t') {
    iVar1 = (DAT_006143f8 - DAT_00614278) + -1;
    if (0 < DAT_006143f8 - DAT_00614278) {
      do {
        (**param_1)(0x20);
        if (iVar1 == 0) break;
        iVar1 = iVar1 + -2;
        (**param_1)(0x20);
      } while (iVar1 != -1);
    }
  }
  else {
    (**param_1)();
  }
  if ((DAT_0061443d != '\0') && (DAT_0061444f == '\0')) {
    DAT_00614424 = DAT_00614424 + DAT_006143f8;
  }
  return;
}


void FUN_004037e0(long param_1)

{
  char cVar1;
  
  DAT_006143d4 = *(int *)(param_1 + 0x34);
  if (DAT_006143dc < DAT_006143d4) {
    FUN_00402ca0(DAT_006143d4 - DAT_006143dc);
    DAT_006143d4 = 0;
    if (DAT_006143e0 != '\0') goto LAB_0040382a;
  }
  else if (DAT_006143e0 != '\0') {
LAB_0040382a:
    FUN_00402dd0();
    cVar1 = *(char *)(param_1 + 0x38);
    goto joined_r0x00403833;
  }
  cVar1 = *(char *)(param_1 + 0x38);
joined_r0x00403833:
  if (cVar1 == '\0') {
    return;
  }
  FUN_004036c0(param_1 + 0x20);
  return;
}


undefined FUN_00403840(_IO_FILE **param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined uVar5;
  byte *pbVar6;
  byte *pbVar7;
  char *pcVar8;
  char *pcVar9;
  _IO_FILE *p_Var10;
  int unaff_R12D;
  long lVar11;
  long lVar12;
  long lVar13;
  
  p_Var10 = *param_1;
  pbVar6 = (byte *)p_Var10->_IO_read_ptr;
  if (pbVar6 < p_Var10->_IO_read_end) {
    p_Var10->_IO_read_ptr = (char *)(pbVar6 + 1);
    uVar4 = (uint)*pbVar6;
  }
  else {
    uVar4 = __uflow(p_Var10);
  }
  iVar2 = DAT_00614424;
  if (uVar4 == 0xc) {
    p_Var10 = *param_1;
    pbVar6 = (byte *)p_Var10->_IO_read_ptr;
    pbVar7 = (byte *)p_Var10->_IO_read_end;
    if (*(char *)((long)param_1 + 0x39) == '\0') goto LAB_00403adc;
    if (pbVar6 < pbVar7) {
      p_Var10->_IO_read_ptr = (char *)(pbVar6 + 1);
      uVar4 = (uint)*pbVar6;
    }
    else {
      uVar4 = __uflow(p_Var10);
    }
    if (uVar4 == 10) {
      p_Var10 = *param_1;
      pbVar6 = (byte *)p_Var10->_IO_read_ptr;
      if (pbVar6 < p_Var10->_IO_read_end) {
        p_Var10->_IO_read_ptr = (char *)(pbVar6 + 1);
        uVar4 = (uint)*pbVar6;
      }
      else {
        uVar4 = __uflow(p_Var10);
      }
    }
  }
  *(undefined *)((long)param_1 + 0x39) = 0;
  if (uVar4 != 10) {
    if (uVar4 == 0xc) {
      p_Var10 = *param_1;
      pbVar6 = (byte *)p_Var10->_IO_read_ptr;
      pbVar7 = (byte *)p_Var10->_IO_read_end;
LAB_00403adc:
      if (pbVar6 < pbVar7) {
        p_Var10->_IO_read_ptr = (char *)(pbVar6 + 1);
        uVar4 = (uint)*pbVar6;
      }
      else {
        uVar4 = __uflow(p_Var10);
      }
      if (uVar4 != 10) {
        ungetc(uVar4,*param_1);
      }
      DAT_0061444c = 1;
      if ((DAT_00614448 == '\0') || (DAT_0061444c = 1, DAT_006142b4 != '\0')) {
LAB_00403b12:
        if (DAT_0061444a != '\0') {
          DAT_00614449 = 1;
        }
      }
      else {
        DAT_006143d0 = 1;
        FUN_00402ee0();
      }
      FUN_00403410(param_1 + 2,param_1 + 6);
      return 1;
    }
    if (uVar4 == 0xffffffff) {
LAB_00403978:
      FUN_004029a0(param_1);
      return 1;
    }
    unaff_R12D = FUN_00402fe0((int)(char)uVar4);
  }
  if ((DAT_0061443d == '\0') || (DAT_00614424 <= DAT_00614438)) {
    if (param_1[4] != (_IO_FILE *)FUN_00402790) {
      DAT_006143d0 = 1;
      if ((DAT_00614448 != '\0') && (DAT_006142b4 == '\0')) {
        FUN_00402ee0();
      }
      iVar2 = DAT_006143d8;
      if ((DAT_0061444f != '\0') && (DAT_0061444e != '\0')) {
        DAT_006143d8 = 0;
        if (0 < iVar2) {
          lVar13 = ((ulong)(iVar2 - 1) + 1) * 0x40 + DAT_00614478;
          lVar11 = DAT_00614478;
          do {
            lVar12 = lVar11 + 0x40;
            FUN_004037e0(lVar11);
            DAT_006143d8 = DAT_006143d8 + 1;
            lVar11 = lVar12;
          } while (lVar13 != lVar12);
        }
        DAT_006143d4 = *(int *)((long)param_1 + 0x34);
        DAT_0061444e = '\0';
        DAT_00614430 = 0;
        if (DAT_0061443d != '\0') {
          DAT_00614430 = DAT_00614438;
        }
      }
      if (DAT_006143dc < DAT_006143d4) {
        FUN_00402ca0(DAT_006143d4 - DAT_006143dc);
        DAT_006143d4 = 0;
      }
      if (DAT_006143e0 != '\0') {
        FUN_00402dd0();
      }
    }
    if (*(char *)(param_1 + 7) != '\0') {
      FUN_004036c0(param_1 + 4);
    }
    DAT_0061444d = 0;
    uVar5 = 1;
    if (uVar4 != 10) {
      pcVar1 = DAT_00614398 + (ulong)(unaff_R12D - 1) + 1;
      pcVar9 = DAT_00614398;
      if (unaff_R12D != 0) {
        do {
          pcVar8 = pcVar9 + 1;
          (*(code *)param_1[4])((int)*pcVar9);
          pcVar9 = pcVar8;
        } while (pcVar1 != pcVar8);
      }
      while( true ) {
        p_Var10 = *param_1;
        pbVar6 = (byte *)p_Var10->_IO_read_ptr;
        if (pbVar6 < p_Var10->_IO_read_end) {
          p_Var10->_IO_read_ptr = (char *)(pbVar6 + 1);
          uVar4 = (uint)*pbVar6;
        }
        else {
          uVar4 = __uflow(p_Var10);
        }
        iVar2 = DAT_00614424;
        if (uVar4 == 10) {
          return 1;
        }
        if (uVar4 == 0xc) {
          p_Var10 = *param_1;
          pbVar6 = (byte *)p_Var10->_IO_read_ptr;
          if (pbVar6 < p_Var10->_IO_read_end) {
            p_Var10->_IO_read_ptr = (char *)(pbVar6 + 1);
            uVar4 = (uint)*pbVar6;
          }
          else {
            uVar4 = __uflow(p_Var10);
          }
          if (uVar4 != 10) {
            ungetc(uVar4,*param_1);
          }
          goto LAB_00403b12;
        }
        if (uVar4 == 0xffffffff) goto LAB_00403978;
        iVar3 = FUN_00402fe0((int)(char)uVar4);
        if ((DAT_0061443d != '\0') && (DAT_00614438 < DAT_00614424)) break;
        pcVar1 = DAT_00614398 + (ulong)(iVar3 - 1) + 1;
        pcVar9 = DAT_00614398;
        if (iVar3 != 0) {
          do {
            pcVar8 = pcVar9 + 1;
            (*(code *)param_1[4])((int)*pcVar9);
            pcVar9 = pcVar8;
          } while (pcVar8 != pcVar1);
        }
      }
      uVar5 = 0;
      DAT_00614424 = iVar2;
    }
  }
  else {
    uVar5 = 0;
    DAT_00614424 = iVar2;
  }
  return uVar5;
}


undefined FUN_00403c80(byte *param_1,long *param_2)

{
  long lVar1;
  undefined uVar2;
  int *piVar3;
  long lVar4;
  byte *pbVar5;
  byte *pbVar6;
  bool bVar7;
  bool bVar8;
  
  lVar4 = 2;
  bVar7 = &stack0xfffffffffffffff0 < &DAT_00000008;
  bVar8 = &stack0x00000000 == &DAT_00000018;
  pbVar5 = param_1;
  pbVar6 = &DAT_00410b71;
  do {
    if (lVar4 == 0) break;
    lVar4 = lVar4 + -1;
    bVar7 = *pbVar5 < *pbVar6;
    bVar8 = *pbVar5 == *pbVar6;
    pbVar5 = pbVar5 + 1;
    pbVar6 = pbVar6 + 1;
  } while (bVar8);
  if ((!bVar7 && !bVar8) == bVar7) {
    lVar1 = dcgettext(0,"standard input",5);
    lVar4 = stdin;
    DAT_00614446 = 1;
    param_2[1] = lVar1;
    *param_2 = lVar4;
  }
  else {
    param_2[1] = (long)param_1;
    lVar4 = FUN_004054b0(param_1,"r");
    *param_2 = lVar4;
  }
  if (lVar4 != 0) {
    FUN_00405480(lVar4,2);
    *(undefined *)(param_2 + 2) = 0;
    *(undefined *)((long)param_2 + 0x39) = 0;
    DAT_006143e4 = DAT_006143e4 + 1;
    return 1;
  }
  DAT_00614420 = 1;
  if (DAT_006143e1 == '\0') {
    uVar2 = FUN_00408bb0(0,3,param_1);
    piVar3 = __errno_location();
                    /* WARNING: Subroutine does not return */
    error(0,*piVar3,"%s",uVar2);
  }
  return 0;
}


void FUN_00403d80(_IO_FILE **param_1)

{
  _IO_FILE *__stream;
  byte *pbVar1;
  uint uVar2;
  
  __stream = *param_1;
  while( true ) {
    pbVar1 = (byte *)__stream->_IO_read_ptr;
    if (pbVar1 < __stream->_IO_read_end) {
      __stream->_IO_read_ptr = (char *)(pbVar1 + 1);
      uVar2 = (uint)*pbVar1;
      if (*pbVar1 == 10) {
        return;
      }
    }
    else {
      uVar2 = __uflow(__stream);
      if (uVar2 == 10) {
        return;
      }
    }
    if (uVar2 == 0xc) break;
    if (uVar2 == 0xffffffff) {
      FUN_004029a0(param_1);
      return;
    }
  }
  pbVar1 = (byte *)__stream->_IO_read_ptr;
  if (pbVar1 < __stream->_IO_read_end) {
    __stream->_IO_read_ptr = (char *)(pbVar1 + 1);
    uVar2 = (uint)*pbVar1;
  }
  else {
    uVar2 = __uflow(__stream);
  }
  if (uVar2 != 10) {
    ungetc(uVar2,__stream);
  }
  if (DAT_0061444a != '\0') {
    DAT_00614449 = 1;
  }
  FUN_00403410(param_1 + 2,param_1 + 6);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403e40(int param_1,undefined *param_2)

{
  undefined *puVar1;
  char *pcVar2;
  FILE *pFVar3;
  undefined auVar4 [16];
  char cVar5;
  void *pvVar6;
  void *pvVar7;
  char cVar8;
  int iVar9;
  FILE **ppFVar10;
  FILE **ppFVar11;
  long lVar12;
  FILE *pFVar13;
  undefined uVar14;
  byte bVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  FILE **ppFVar19;
  byte bVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  ulong uVar24;
  byte bVar25;
  ulong uVar26;
  int local_40;
  
  DAT_00614440 = DAT_006142b0 + -10;
  if (DAT_00614440 < 1) {
    DAT_006142b5 = '\0';
    DAT_0061444a = '\x01';
LAB_004041be:
    DAT_00614440 = DAT_006142b0;
  }
  else if (DAT_006142b5 == '\0') goto LAB_004041be;
  if (DAT_006143e8 != '\0') {
    DAT_00614440 = DAT_00614440 / 2;
  }
  if (param_1 == 0) {
    DAT_0061444f = 0;
  }
  else if (DAT_0061444f != 0) {
    DAT_00614298 = param_1;
  }
  if (DAT_006142b4 != '\0') {
    DAT_00614444 = '\x01';
  }
  if (DAT_00614298 < 2) {
    DAT_006142b4 = '\0';
  }
  else {
    if (DAT_006143e0 == 0) {
      PTR_DAT_00614270 = &DAT_00411057;
      DAT_006143dc = 1;
      if (DAT_0061443c != '\0') {
        PTR_DAT_00614270 = &DAT_0040ce62;
      }
      DAT_006143e0 = 1;
    }
    else if (((DAT_0061443c == '\0') && (DAT_006143dc == 1)) && (*PTR_DAT_00614270 == '\t')) {
      PTR_DAT_00614270 = &DAT_00411057;
    }
    DAT_0061443d = '\x01';
    DAT_00614434 = 1;
  }
  if (DAT_0061443c != '\0') {
    DAT_0061443d = '\0';
  }
  if (DAT_006143fc == 0) {
LAB_00404210:
    iVar9 = 0;
  }
  else {
    DAT_00614284 = DAT_0061427c;
    iVar9 = DAT_00614278 + 1;
    if (DAT_00614288 == '\t') {
      uVar21 = (uint)((int)DAT_00614278 >> 0x1f) >> 0x1d;
      iVar9 = DAT_00614278 + 8 + (uVar21 - (DAT_00614278 + uVar21 & 7));
    }
    DAT_006143f8 = iVar9;
    if (DAT_0061444f == 0) goto LAB_00404210;
  }
  lVar12 = (long)(DAT_00614298 + -1) * (long)DAT_006143dc;
  iVar16 = (int)lVar12;
  if (iVar16 != lVar12) {
    iVar16 = 0x7fffffff;
  }
  if (!SBORROW4(DAT_006142ac - iVar9,iVar16)) {
    DAT_00614438 = ((DAT_006142ac - iVar9) - iVar16) / DAT_00614298;
    if (DAT_00614438 < 1) goto LAB_00404d9f;
    if (DAT_006143fc != 0) {
      free(DAT_006143f0);
      lVar12 = (long)(int)DAT_00614278 + 1;
      if (DAT_00614278 < 0xc) {
        lVar12 = 0xc;
      }
      DAT_006143f0 = (void *)FUN_00409300(lVar12);
    }
    free(DAT_00614398);
    iVar9 = 8;
    if (7 < DAT_006142a4) {
      iVar9 = DAT_006142a4;
    }
    DAT_00614398 = (void *)FUN_00409300((long)iVar9);
    DAT_006143e4 = 0;
    free(DAT_00614478);
    if (((long)DAT_00614298 << 6 < 0) || ((ulong)(long)DAT_00614298 >> 0x3a != 0)) {
LAB_00404dc1:
                    /* WARNING: Subroutine does not return */
      FUN_00409550();
    }
    ppFVar10 = (FILE **)FUN_00409300();
    DAT_00614478 = ppFVar10;
    if (DAT_0061444f == 0) {
      if (param_1 < 1) {
        pFVar13 = (FILE *)dcgettext(0,"standard input",5);
        *(undefined *)((long)ppFVar10 + 0x39) = 0;
        ppFVar10[1] = pFVar13;
        pFVar13 = stdin;
        *(undefined *)(ppFVar10 + 2) = 0;
        *ppFVar10 = pFVar13;
        DAT_00614446 = 1;
        DAT_006143e4 = DAT_006143e4 + 1;
        FUN_00402ab0(&DAT_0040ce63,0xffffffff);
        *(undefined *)((long)ppFVar10 + 0x2c) = 0;
      }
      else {
        cVar8 = FUN_00403c80(*param_2,ppFVar10);
        if (cVar8 == '\0') {
          return;
        }
        iVar9 = fileno(*ppFVar10);
        FUN_00402ab0(*param_2,iVar9);
        *(undefined *)((long)ppFVar10 + 0x2c) = 0;
      }
      pFVar13 = ppFVar10[1];
      pFVar3 = *ppFVar10;
      if (DAT_00614298 != 1) {
        uVar21 = DAT_00614298 - 2;
        ppFVar10 = ppFVar10 + 8;
        do {
          ppFVar10[1] = pFVar13;
          ppFVar11 = ppFVar10 + 8;
          *ppFVar10 = pFVar3;
          *(undefined *)(ppFVar10 + 2) = 0;
          *(undefined *)((long)ppFVar10 + 0x39) = 0;
          *(undefined *)((long)ppFVar10 + 0x2c) = 0;
          ppFVar10 = ppFVar11;
        } while (ppFVar11 != ppFVar10 + ((ulong)uVar21 + 2) * 8);
      }
    }
    else {
      if (param_1 != 0) {
        puVar1 = param_2 + (ulong)(param_1 - 1) + 1;
        do {
          while (cVar8 = FUN_00403c80(*param_2,ppFVar10), cVar8 != '\0') {
            param_2 = param_2 + 1;
            ppFVar10 = ppFVar10 + 8;
            if (param_2 == puVar1) goto LAB_00404074;
          }
          param_2 = param_2 + 1;
          DAT_00614298 = DAT_00614298 + -1;
        } while (param_2 != puVar1);
      }
LAB_00404074:
      if (DAT_00614298 == 0) {
        return;
      }
      FUN_00402ab0(&DAT_0040ce63,0xffffffff);
    }
    DAT_00614410 = DAT_006143e4;
    if (DAT_006142b4 == '\0') {
LAB_004040aa:
      uVar26 = DAT_00614418;
      if (DAT_00614418 < 2) {
        DAT_00614408 = 1;
      }
      else {
        uVar24 = 1;
        do {
          iVar16 = 1;
          ppFVar10 = DAT_00614478;
          iVar9 = DAT_00614298;
          if (1 < DAT_00614440) {
            do {
              if (0 < iVar9) {
                ppFVar11 = ppFVar10;
                iVar22 = 1;
                do {
                  while (*(int *)(ppFVar11 + 2) == 0) {
                    iVar23 = iVar22 + 1;
                    FUN_00403490(ppFVar11,iVar22);
                    ppFVar10 = DAT_00614478;
                    ppFVar11 = ppFVar11 + 8;
                    iVar22 = iVar23;
                    iVar9 = DAT_00614298;
                    if (DAT_00614298 < iVar23) goto LAB_00404a17;
                  }
                  iVar22 = iVar22 + 1;
                  ppFVar11 = ppFVar11 + 8;
                  ppFVar10 = DAT_00614478;
                } while (iVar22 <= iVar9);
              }
LAB_00404a17:
              iVar16 = iVar16 + 1;
            } while (iVar16 < DAT_00614440);
          }
          DAT_00614390 = 1;
          if (0 < iVar9) {
            iVar16 = 1;
            do {
              while (*(int *)(ppFVar10 + 2) == 0) {
                iVar22 = iVar16 + 1;
                FUN_00403490(ppFVar10,iVar16);
                ppFVar10 = ppFVar10 + 8;
                iVar16 = iVar22;
                iVar9 = DAT_00614298;
                if (DAT_00614298 < iVar22) goto LAB_00404a70;
              }
              iVar16 = iVar16 + 1;
              ppFVar10 = ppFVar10 + 8;
            } while (iVar16 <= iVar9);
LAB_00404a70:
            if ((DAT_006142b4 != '\0') && (0 < iVar9)) {
              ppFVar11 = DAT_00614478 + ((ulong)(iVar9 - 1) + 1) * 8;
              ppFVar10 = DAT_00614478;
              do {
                if (*(int *)(ppFVar10 + 2) != 3) {
                  *(undefined *)(ppFVar10 + 2) = 2;
                }
                ppFVar10 = ppFVar10 + 8;
              } while (ppFVar10 != ppFVar11);
            }
          }
          FUN_00402710();
          DAT_00614390 = 0;
          if (DAT_00614410 < 1) {
            uVar14 = dcgettext(0,"starting page number %lu exceeds page count %lu",5);
                    /* WARNING: Subroutine does not return */
            error(0,0,uVar14,uVar26,uVar24);
          }
          uVar24 = uVar24 + 1;
        } while (uVar26 != uVar24);
        DAT_00614408 = DAT_00614418;
      }
      ppFVar10 = DAT_00614478;
      cVar5 = DAT_0061443d;
      iVar22 = DAT_00614438;
      bVar20 = DAT_006143fc;
      iVar16 = DAT_006143dc;
      cVar8 = DAT_006142b4;
      iVar9 = DAT_00614298;
      iVar23 = 0;
      if (((DAT_0061443d != '\0') && (iVar23 = DAT_00614438 + DAT_0061442c, DAT_0061444f != 0)) &&
         (DAT_006143fc != 0)) {
        iVar23 = iVar23 + DAT_006143f8;
      }
      iVar18 = DAT_0061442c + DAT_006143dc;
      if (DAT_00614298 < 2) {
        iVar16 = 1;
        ppFVar11 = DAT_00614478;
      }
      else {
        iVar17 = 1;
        bVar25 = DAT_0061444f ^ 1;
        ppFVar11 = DAT_00614478;
        do {
          while( true ) {
            if (cVar8 == '\0') {
              ppFVar11[4] = (FILE *)FUN_004031e0;
              ppFVar11[3] = (FILE *)FUN_00403840;
            }
            else {
              ppFVar11[4] = (FILE *)FUN_00402790;
              ppFVar11[3] = (FILE *)FUN_00403280;
            }
            bVar15 = 0;
            if (bVar20 != 0) {
              bVar15 = iVar17 == 1 | bVar25;
            }
            *(byte *)(ppFVar11 + 7) = bVar15;
            *(int *)((long)ppFVar11 + 0x34) = iVar18;
            if (cVar5 == '\0') break;
            iVar18 = iVar16 + iVar23;
            iVar17 = iVar17 + 1;
            ppFVar11 = ppFVar11 + 8;
            iVar23 = iVar18 + iVar22;
            if (iVar17 == iVar9) goto LAB_00404285;
          }
          iVar17 = iVar17 + 1;
          iVar23 = 0;
          iVar18 = 0;
          ppFVar11 = ppFVar11 + 8;
        } while (iVar17 != iVar9);
LAB_00404285:
        ppFVar11 = ppFVar10 + ((ulong)(iVar9 - 2) + 1) * 8;
        iVar16 = iVar9;
      }
      if ((cVar8 == '\0') || (DAT_00614444 == '\0')) {
        ppFVar11[4] = (FILE *)FUN_004031e0;
        ppFVar11[3] = (FILE *)FUN_00403840;
      }
      else {
        ppFVar11[4] = (FILE *)FUN_00402790;
        ppFVar11[3] = (FILE *)FUN_00403280;
      }
      if (bVar20 != 0) {
        bVar20 = DAT_0061444f ^ 1 | iVar16 == 1;
      }
      *(byte *)(ppFVar11 + 7) = bVar20;
      *(int *)((long)ppFVar11 + 0x34) = iVar18;
      DAT_00614400 = DAT_00614284;
      ppFVar11 = ppFVar10;
      if (cVar8 != '\0') goto LAB_004045de;
      do {
        iVar16 = DAT_00614440;
        if (iVar9 != 0) {
          ppFVar11 = ppFVar10;
          do {
            iVar22 = 0;
            if (*(int *)(ppFVar11 + 2) == 0) {
              iVar22 = iVar16;
            }
            ppFVar19 = ppFVar11 + 8;
            *(int *)(ppFVar11 + 6) = iVar22;
            ppFVar11 = ppFVar19;
          } while (ppFVar10 + ((ulong)(iVar9 - 1) + 1) * 8 != ppFVar19);
        }
LAB_00404327:
        iVar16 = FUN_004026b0();
        if (iVar16 == 0) {
          return;
        }
        if (DAT_006142b5 != '\0') {
          DAT_00614448 = 1;
        }
        DAT_006143d0 = 0;
        iVar16 = DAT_00614440;
        if (DAT_006143e8 != '\0') {
          iVar16 = DAT_00614440 * 2;
        }
        bVar20 = 0;
        if (iVar16 < 1) {
          if ((iVar16 == 0) && (bVar20 = 0, 0 < iVar9)) goto LAB_00404521;
LAB_00404561:
          if ((DAT_0061444a != '\0') && (DAT_00614449 != '\0')) {
            pcVar2 = stdout->_IO_write_ptr;
            if (pcVar2 < stdout->_IO_write_end) {
              stdout->_IO_write_ptr = pcVar2 + 1;
              *pcVar2 = '\f';
            }
            else {
              __overflow(stdout,0xc);
            }
            DAT_00614449 = '\0';
          }
        }
        else {
          do {
            iVar9 = FUN_004026b0();
            DAT_006143d0 = bVar20;
            if (iVar9 == 0) goto LAB_00404548;
            DAT_00614428 = 0;
            DAT_00614430 = 0;
            DAT_006143d8 = 0;
            DAT_006143d0 = 0;
            DAT_0061444e = 0;
            DAT_0061444d = '\x01';
            if (0 < DAT_00614298) {
              iVar9 = 1;
              ppFVar10 = DAT_00614478;
              do {
                DAT_00614424 = 0;
                if ((*(int *)(ppFVar10 + 6) < 1) && (*(int *)(ppFVar10 + 2) != 1)) {
                  if (DAT_0061444f != 0) {
                    if (DAT_0061444d == '\0') {
LAB_00404780:
                      FUN_004037e0();
                    }
                    else {
LAB_0040448b:
                      DAT_0061444e = 1;
                    }
                  }
                }
                else {
                  DAT_006143d4 = *(undefined *)((long)ppFVar10 + 0x34);
                  DAT_0061444c = '\0';
                  cVar8 = (*(code *)ppFVar10[3])();
                  if (cVar8 == '\0') {
                    FUN_00403d80();
                  }
                  bVar25 = DAT_006143d0;
                  iVar22 = *(int *)(ppFVar10 + 6);
                  bVar20 = bVar20 | DAT_006143d0;
                  *(int *)(ppFVar10 + 6) = iVar22 + -1;
                  if ((iVar22 + -1 < 1) && (iVar22 = FUN_004026b0(), iVar22 == 0)) {
                    if (bVar25 == 0) goto LAB_00404746;
                    goto LAB_004044a1;
                  }
                  if ((DAT_0061444f != 0) && (iVar22 = *(int *)(ppFVar10 + 2), iVar22 != 0)) {
                    if (DAT_0061444d != '\0') goto LAB_0040448b;
                    if ((iVar22 == 3) || ((iVar22 == 2 && (DAT_0061444c != '\0'))))
                    goto LAB_00404780;
                  }
                }
                if (DAT_006143e0 != 0) {
                  DAT_006143d8 = DAT_006143d8 + 1;
                }
                iVar9 = iVar9 + 1;
                ppFVar10 = ppFVar10 + 8;
              } while (iVar9 <= DAT_00614298);
              if (DAT_006143d0 != 0) {
LAB_004044a1:
                pcVar2 = stdout->_IO_write_ptr;
                if (pcVar2 < stdout->_IO_write_end) {
                  stdout->_IO_write_ptr = pcVar2 + 1;
                  *pcVar2 = '\n';
                }
                else {
                  __overflow(stdout,10);
                }
                iVar16 = iVar16 + -1;
              }
            }
            iVar9 = FUN_004026b0();
            if (iVar9 == 0) {
LAB_00404746:
              if (DAT_006142b5 == '\0') break;
            }
            if ((DAT_006143e8 != '\0') && (bVar20 != 0)) {
              pcVar2 = stdout->_IO_write_ptr;
              if (pcVar2 < stdout->_IO_write_end) {
                stdout->_IO_write_ptr = pcVar2 + 1;
                *pcVar2 = '\n';
              }
              else {
                __overflow(stdout,10);
              }
              iVar16 = iVar16 + -1;
            }
          } while (0 < iVar16);
          DAT_006143d0 = bVar20;
          if ((iVar16 == 0) &&
             (ppFVar10 = DAT_00614478, iVar9 = DAT_00614298, bVar20 = DAT_006143d0, 0 < DAT_00614298
             )) {
LAB_00404521:
            DAT_006143d0 = bVar20;
            ppFVar11 = ppFVar10 + ((ulong)(iVar9 - 1) + 1) * 8;
            do {
              if (*(int *)(ppFVar10 + 2) == 0) {
                *(undefined *)((long)ppFVar10 + 0x39) = 1;
              }
              ppFVar10 = ppFVar10 + 8;
            } while (ppFVar10 != ppFVar11);
            iVar16 = 0;
          }
LAB_00404548:
          if ((DAT_006143d0 == 0) || (DAT_006142b5 == '\0')) goto LAB_00404561;
          if (DAT_00614447 == '\0') {
            for (iVar16 = iVar16 + 5; iVar16 != 0; iVar16 = iVar16 + -1) {
              pcVar2 = stdout->_IO_write_ptr;
              if (pcVar2 < stdout->_IO_write_end) {
                stdout->_IO_write_ptr = pcVar2 + 1;
                *pcVar2 = '\n';
              }
              else {
                __overflow(stdout,10);
              }
            }
          }
          else {
            pcVar2 = stdout->_IO_write_ptr;
            if (pcVar2 < stdout->_IO_write_end) {
              stdout->_IO_write_ptr = pcVar2 + 1;
              *pcVar2 = '\f';
            }
            else {
              __overflow(stdout,0xc);
            }
          }
        }
        DAT_00614408 = DAT_00614408 + 1;
        if (_DAT_00614290 < DAT_00614408) {
          return;
        }
        FUN_00402710();
        ppFVar10 = DAT_00614478;
        ppFVar11 = DAT_00614478;
        iVar9 = DAT_00614298;
      } while (DAT_006142b4 == '\0');
LAB_004045de:
      cVar8 = DAT_00614444;
      DAT_00614468 = 0;
      iVar16 = iVar9 - (uint)(DAT_00614444 == '\0');
      if (iVar16 < 1) {
        iVar22 = 0;
      }
      else {
        ppFVar10 = ppFVar11;
        do {
          *(undefined *)((long)ppFVar10 + 0x2c) = 0;
          ppFVar10 = ppFVar10 + 8;
        } while (ppFVar10 != ppFVar11 + ((ulong)(iVar16 - 1) + 1) * 8);
        iVar22 = DAT_00614410;
        if (DAT_00614410 != 0) {
          local_40 = 1;
          iVar22 = 0;
          uVar21 = 0;
          uVar26 = 0;
          do {
            iVar9 = DAT_00614440;
            *(uint *)(ppFVar11 + 5) = uVar21;
joined_r0x0040465d:
            if (iVar9 != 0) {
              do {
                if (DAT_00614410 == 0) {
                  lVar12 = uVar26 * 4;
                  ppFVar10 = DAT_00614478;
                  cVar8 = DAT_00614444;
                  iVar9 = DAT_00614298;
                  goto LAB_004047d4;
                }
                if (*(int *)(ppFVar11 + 2) == 0) {
                  DAT_00614424 = 0;
                  cVar8 = FUN_00403840();
                  if (cVar8 == '\0') {
                    FUN_00403d80();
                  }
                  iVar23 = DAT_00614468;
                  pvVar7 = DAT_00614458;
                  if ((*(int *)(ppFVar11 + 2) == 0) || (DAT_00614468 != iVar22)) goto LAB_004046b0;
                }
                iVar9 = iVar9 + -1;
                if (iVar9 == 0) break;
              } while( true );
            }
            local_40 = local_40 + 1;
            ppFVar11 = ppFVar11 + 8;
            lVar12 = uVar26 * 4;
            ppFVar10 = DAT_00614478;
            cVar8 = DAT_00614444;
            iVar9 = DAT_00614298;
            if ((iVar16 < local_40) || (DAT_00614410 == 0)) goto LAB_004047d4;
          } while( true );
        }
      }
      lVar12 = 0;
      uVar21 = 0;
      ppFVar10 = ppFVar11;
LAB_004047d4:
      *(int *)((long)DAT_00614458 + lVar12) = iVar22;
      ppFVar11 = ppFVar10;
      if (cVar8 == '\0') {
        if (iVar9 != 1) goto LAB_00404834;
LAB_00404898:
        if (*(int *)(ppFVar11 + 2) == 0) {
          *(int *)(ppFVar11 + 6) = DAT_00614440;
        }
        else {
          *(undefined *)(ppFVar11 + 6) = 0;
        }
      }
      else {
        if (0 < iVar9) {
          iVar22 = 0;
          iVar16 = 1;
          ppFVar19 = ppFVar10;
          do {
            *(int *)(ppFVar19 + 5) = iVar22;
            iVar23 = (int)uVar21 / iVar9;
            if (iVar16 <= (int)uVar21 % iVar9) {
              iVar23 = (int)uVar21 / iVar9 + 1;
            }
            iVar16 = iVar16 + 1;
            *(int *)((long)ppFVar19 + 0x2c) = iVar23;
            iVar22 = iVar22 + iVar23;
            ppFVar19 = ppFVar19 + 8;
          } while (iVar16 != iVar9 + 1);
        }
        if (iVar9 != 1) {
LAB_00404834:
          do {
            ppFVar19 = ppFVar11 + 8;
            *(undefined *)(ppFVar11 + 6) = *(undefined *)((long)ppFVar11 + 0x2c);
            ppFVar11 = ppFVar19;
          } while (ppFVar19 != ppFVar10 + ((ulong)(iVar9 - 2) + 1) * 8);
          ppFVar11 = ppFVar10 + ((ulong)(iVar9 - 2) + 1) * 8;
          if (cVar8 == '\0') goto LAB_00404898;
        }
        *(undefined *)(ppFVar11 + 6) = *(undefined *)((long)ppFVar11 + 0x2c);
      }
      goto LAB_00404327;
    }
    iVar9 = (int)((long)DAT_00614440 * (long)DAT_00614298);
    if ((((long)iVar9 == (long)DAT_00614440 * (long)DAT_00614298) && (!SCARRY4(iVar9,1))) &&
       ((!SCARRY4(DAT_00614438,1) &&
        (lVar12 = (long)(DAT_00614438 + 1) * (long)iVar9, iVar16 = (int)lVar12, iVar16 == lVar12))))
    {
      free(DAT_00614458);
      if ((-1 < (long)(iVar9 + 1) << 2) && ((ulong)(long)(iVar9 + 1) >> 0x3e == 0)) {
        DAT_00614458 = (void *)FUN_00409300();
        free(DAT_00614450);
        if ((-1 < (long)iVar9 << 2) && ((ulong)(long)iVar9 >> 0x3e == 0)) {
          DAT_00614450 = (void *)FUN_00409300();
          free(DAT_00614470);
          auVar4 = ZEXT816((ulong)(long)iVar16) * ZEXT816((ulong)DAT_006143e0 + 1);
          lVar12 = SUB168(auVar4,0);
          if ((-1 < lVar12) && (SUB168(auVar4 >> 0x40,0) == 0)) {
            DAT_00614470 = (void *)FUN_00409300(lVar12);
            _DAT_00614460 = (long)iVar16 * ((ulong)DAT_006143e0 + 1);
            goto LAB_004040aa;
          }
        }
      }
      goto LAB_00404dc1;
    }
    FUN_004027f0();
  }
  DAT_00614438 = 0;
LAB_00404d9f:
  uVar14 = dcgettext(0,"page width too narrow",5);
                    /* WARNING: Subroutine does not return */
  error(1,0,uVar14);
LAB_004046b0:
  *(int *)((long)ppFVar11 + 0x2c) = *(int *)((long)ppFVar11 + 0x2c) + 1;
  pvVar6 = DAT_00614450;
  uVar21 = uVar21 + 1;
  *(int *)((long)pvVar7 + uVar26 * 4) = iVar22;
  *(undefined *)((long)pvVar6 + uVar26 * 4) = DAT_00614424;
  uVar26 = (ulong)uVar21;
  iVar9 = iVar9 + -1;
  iVar22 = iVar23;
  goto joined_r0x0040465d;
}


void FUN_00404de0(int param_1)

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
  
  uVar7 = DAT_00614490;
  bVar13 = 0;
  if (param_1 != 0) {
    uVar3 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(stderr,1,uVar3,uVar7);
    goto LAB_00404e1f;
  }
  uVar3 = dcgettext(0,"Usage: %s [OPTION]... [FILE]...\n",5);
  __printf_chk(1,uVar3,uVar7);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"Paginate or columnate FILE(s) for printing.\n",5);
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
                             "  +FIRST_PAGE[:LAST_PAGE], --pages=FIRST_PAGE[:LAST_PAGE]\n                    begin [stop] printing with page FIRST_[LAST_]PAGE\n  -COLUMN, --columns=COLUMN\n                    output COLUMN columns and print columns down,\n                    unless -a is used. Balance number of lines in the\n                    columns on each page\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -a, --across      print columns across rather than down, used together\n                    with -COLUMN\n  -c, --show-control-chars\n                    use hat notation (^G) and octal backslash notation\n  -d, --double-space\n                    double space the output\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -D, --date-format=FORMAT\n                    use FORMAT for the header date\n  -e[CHAR[WIDTH]], --expand-tabs[=CHAR[WIDTH]]\n                    expand input CHARs (TABs) to tab WIDTH (8)\n  -F, -f, --form-feed\n                    use form feeds instead of newlines to separate pages\n                    (by a 3-line page header with -F or a 5-line header\n                    and trailer without -F)\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -h, --header=HEADER\n                    use a centered HEADER instead of filename in page header,\n                    -h \"\" prints a blank line, don\'t use -h\"\"\n  -i[CHAR[WIDTH]], --output-tabs[=CHAR[WIDTH]]\n                    replace spaces with CHARs (TABs) to tab WIDTH (8)\n  -J, --join-lines  merge full lines, turns off -W line truncation, no column\n                    alignment, --sep-string[=STRING] sets separators\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -l, --length=PAGE_LENGTH\n                    set the page length to PAGE_LENGTH (66) lines\n                    (default number of lines of text 56, and with -F 63).\n                    implies -t if PAGE_LENGTH <= 10\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -m, --merge       print all files in parallel, one in each column,\n                    truncate lines, but join lines of full length with -J\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -n[SEP[DIGITS]], --number-lines[=SEP[DIGITS]]\n                    number lines, use DIGITS (5) digits, then SEP (TAB),\n                    default counting starts with 1st line of input file\n  -N, --first-line-number=NUMBER\n                    start counting with NUMBER at 1st line of first\n                    page printed (see +FIRST_PAGE)\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -o, --indent=MARGIN\n                    offset each line with MARGIN (zero) spaces, do not\n                    affect -w or -W, MARGIN will be added to PAGE_WIDTH\n  -r, --no-file-warnings\n                    omit warning when a file cannot be opened\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -s[CHAR], --separator[=CHAR]\n                    separate columns by a single character, default for CHAR\n                    is the <TAB> character without -w and \'no char\' with -w.\n                    -s[CHAR] turns off line truncation of all 3 column\n                    options (-COLUMN|-a -COLUMN|-m) except -w is set\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -S[STRING], --sep-string[=STRING]\n                    separate columns by STRING,\n                    without -S: Default separator <TAB> with -J and <space>\n                    otherwise (same as -S\" \"), no effect on column options\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -t, --omit-header  omit page headers and trailers;\n                     implied if PAGE_LENGTH <= 10\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -T, --omit-pagination\n                    omit page headers and trailers, eliminate any pagination\n                    by form feeds set in input files\n  -v, --show-nonprinting\n                    use octal backslash notation\n  -w, --width=PAGE_WIDTH\n                    set page width to PAGE_WIDTH (72) characters for\n                    multiple text-column output only, -s[char] turns off (72)\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -W, --page-width=PAGE_WIDTH\n                    set page width to PAGE_WIDTH (72) characters always,\n                    truncate lines, except -J option is set, no interference\n                    with -S or -s\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"      --help     display this help and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"      --version  output version information and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  local_88 = &DAT_0040ce7d;
  local_80 = "test invocation";
  local_78[0] = (byte *)0x40cef7;
  local_78[1] = (byte *)0x40ce8f;
  local_78[2] = (byte *)0x40cea5;
  local_78[3] = (byte *)0x40ceaf;
  local_78[4] = (byte *)0x40cebe;
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
    lVar8 = 3;
    pbVar10 = &DAT_0040ce7a;
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
        pbVar9 = &DAT_0040ce7a;
        goto LAB_004052b3;
      }
    }
    pbVar9 = &DAT_0040ce7a;
    uVar7 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    pcVar4 = " invocation";
    __printf_chk(1,uVar7,"https://www.gnu.org/software/coreutils/",&DAT_0040ce7a);
  }
  else {
    uVar7 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar7,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
      iVar2 = strncmp(pcVar4,"en_",3);
      if (iVar2 != 0) {
LAB_004052b3:
        uVar7 = dcgettext(0,"Report %s translation bugs to <https://translationproject.org/team/>\n"
                          ,5);
        __printf_chk(1,uVar7,&DAT_0040ce7a);
      }
    }
    pcVar4 = " invocation";
    uVar7 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    __printf_chk(1,uVar7,"https://www.gnu.org/software/coreutils/",&DAT_0040ce7a);
    if (pbVar9 != &DAT_0040ce7a) {
      pcVar4 = "";
    }
  }
  uVar7 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(1,uVar7,pbVar9,pcVar4);
LAB_00404e1f:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}


void FUN_004052e0(char *param_1,char param_2,char *param_3,undefined *param_4)

{
  char cVar1;
  int iVar2;
  undefined uVar3;
  undefined uVar4;
  int *piVar5;
  long local_20;
  
  cVar1 = *param_1;
  if (9 < (int)cVar1 - 0x30U) {
    *param_3 = cVar1;
    cVar1 = param_1[1];
    param_1 = param_1 + 1;
  }
  if (cVar1 == '\0') {
    return;
  }
  iVar2 = FUN_00409e00(param_1,0,10,&local_20,&DAT_0040ce63);
  if (iVar2 == 0) {
    if (local_20 - 1U < 0x7fffffff) {
      *param_4 = (int)local_20;
      return;
    }
  }
  uVar3 = FUN_00408d30(param_1);
  uVar4 = dcgettext(0,"\'-%c\' extra characters or invalid number in the argument: %s",5);
  iVar2 = 0x4b;
  if (local_20 < 0x80000000) {
    piVar5 = __errno_location();
    iVar2 = *piVar5;
  }
                    /* WARNING: Subroutine does not return */
  error(0,iVar2,uVar4,(int)param_2,uVar3);
}


void FUN_004053b0(undefined param_1)

{
  DAT_00614488 = param_1;
  return;
}


void FUN_004053c0(undefined param_1)

{
  DAT_00614480 = param_1;
  return;
}


void FUN_004053d0(void)

{
  int iVar1;
  int *piVar2;
  undefined uVar3;
  undefined uVar4;
  
  iVar1 = FUN_0040c070(stdout);
  if (iVar1 != 0) {
    piVar2 = __errno_location();
    if ((DAT_00614480 == '\0') || (*piVar2 != 0x20)) {
      uVar3 = dcgettext(0,"write error",5);
      if (DAT_00614488 != 0) {
        uVar4 = FUN_00408b80();
                    /* WARNING: Subroutine does not return */
        error(0,*piVar2,"%s: %s",uVar4,uVar3);
      }
                    /* WARNING: Subroutine does not return */
      error(0,*piVar2,"%s",uVar3);
    }
  }
  iVar1 = FUN_0040c070(stderr);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  _exit(DAT_006142c0);
}


void FUN_00405480(FILE *param_1,int param_2)

{
  int __fd;
  
  if (param_1 != (FILE *)0x0) {
    __fd = fileno(param_1);
    posix_fadvise(__fd,0,0,param_2);
    return;
  }
  return;
}


FILE * FUN_004054b0(char *param_1,char *param_2)

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
    iVar2 = FUN_00408d50(uVar1);
    if (iVar2 < 0) {
      piVar5 = __errno_location();
      pFVar4 = (FILE *)0x0;
      iVar2 = *piVar5;
      FUN_0040aa20(__stream);
      *piVar5 = iVar2;
    }
    else {
      iVar3 = FUN_0040aa20(__stream);
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


void FUN_00405550(timespec *param_1)

{
  int iVar1;
  timeval local_18;
  
  iVar1 = clock_gettime(0,param_1);
  if (iVar1 != 0) {
    gettimeofday(&local_18,(__timezone_ptr_t)0x0);
    param_1->tv_sec = local_18.tv_sec;
    param_1->tv_nsec = local_18.tv_usec * 1000;
  }
  return;
}


bool FUN_00405590(int param_1)

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
    pbVar5 = &DAT_0040ef8d;
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


char * FUN_004055f0(ulong param_1,long param_2)

{
  char *pcVar1;
  char *pcVar2;
  ulong uVar3;
  
  pcVar1 = (char *)(param_2 + 0x14);
  *(undefined *)(param_2 + 0x14) = 0;
  if ((long)param_1 < 0) {
    do {
      pcVar2 = pcVar1;
      uVar3 = (long)param_1 / 10;
      pcVar2[-1] = ((char)uVar3 * '\n' + '0') - (char)param_1;
      pcVar1 = pcVar2 + -1;
      param_1 = uVar3;
    } while (uVar3 != 0);
    pcVar2[-2] = '-';
    return pcVar2 + -2;
  }
  do {
    pcVar1 = pcVar1 + -1;
    uVar3 = param_1 / 10;
    *pcVar1 = (char)param_1 + (char)uVar3 * -10 + '0';
    param_1 = uVar3;
  } while (uVar3 != 0);
  return pcVar1;
}


int FUN_00405690(byte *param_1,long param_2,uint param_3)

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
          if (((*ppuVar6)[*param_1] & 2) == 0) goto LAB_0040580a;
        }
        else {
LAB_0040580a:
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
          if (((char)bVar2 < '%') && (3 < (byte)(bVar2 - 0x20))) goto LAB_00405702;
LAB_004056db:
          param_1 = param_1 + 1;
          iVar8 = iVar8 + 1;
        }
        else {
          if (('@' < (char)bVar2) && (((char)bVar2 < '`' || ((byte)(bVar2 + 0x9f) < 0x1e))))
          goto LAB_004056db;
LAB_00405702:
          local_40[0] = (mbstate_t)0x0;
          do {
            lVar5 = FUN_0040ba50(&local_44,param_1,(long)pbVar1 - (long)param_1,local_40);
            if (lVar5 == -1) {
              if ((param_3 & 1) != 0) {
                return -1;
              }
              goto LAB_004056db;
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


void FUN_00405850(char *param_1,undefined param_2)

{
  size_t sVar1;
  
  sVar1 = strlen(param_1);
  FUN_00405690(param_1,sVar1,param_2);
  return;
}


long FUN_00405880(long param_1,long param_2,long param_3)

{
  __int32_t **pp_Var1;
  
  if (param_3 != 0) {
    param_3 = param_3 + -1;
    pp_Var1 = __ctype_tolower_loc();
    do {
      *(char *)(param_1 + param_3) = (char)(*pp_Var1)[*(byte *)(param_2 + param_3)];
      param_3 = param_3 + -1;
    } while (param_3 != -1);
  }
  return param_1;
}


long FUN_004058d0(long param_1,long param_2,long param_3)

{
  __int32_t **pp_Var1;
  
  if (param_3 != 0) {
    param_3 = param_3 + -1;
    pp_Var1 = __ctype_toupper_loc();
    do {
      *(char *)(param_1 + param_3) = (char)(*pp_Var1)[*(byte *)(param_2 + param_3)];
      param_3 = param_3 + -1;
    } while (param_3 != -1);
  }
  return param_1;
}


/* WARNING: Type propagation algorithm not settling */

long FUN_00405920(char *param_1,long param_2,char *param_3,tm *param_4,char param_5,
                 undefined param_6,undefined param_7,uint param_8)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  long lVar10;
  char *pcVar11;
  ulong uVar12;
  char cVar13;
  ulong __n;
  uint uVar14;
  int iVar15;
  char *pcVar16;
  size_t sVar17;
  ulong uVar18;
  size_t sVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  char cVar24;
  uint uVar25;
  uint uVar26;
  char *__s;
  char *pcVar27;
  char cVar28;
  ulong uVar29;
  long lVar30;
  long lVar31;
  bool bVar32;
  char *local_498;
  char *local_488;
  uint local_480;
  uint local_478;
  undefined local_458;
  char local_456;
  char local_455 [19];
  char local_442 [10];
  undefined local_438;
  undefined uStack_430;
  undefined local_428;
  undefined uStack_420;
  undefined local_418;
  long lStack_410;
  char *local_408;
  
  __s = param_4->tm_zone;
  uVar25 = param_4->tm_hour;
  if (__s == (char *)0x0) {
    __s = "";
  }
  if ((int)uVar25 < 0xd) {
    if (uVar25 == 0) {
      uVar25 = 0xc;
    }
  }
  else {
    uVar25 = uVar25 - 0xc;
  }
  cVar5 = *param_3;
  lVar31 = 0;
  if (cVar5 == '\0') {
LAB_004059bb:
    if ((param_1 != (char *)0x0) && (param_2 != 0)) {
      *param_1 = '\0';
    }
    return lVar31;
  }
LAB_0040598a:
  if (cVar5 == '%') {
    cVar5 = '\0';
    cVar24 = param_5;
    uVar6 = 0;
    do {
      uVar26 = uVar6;
      param_3 = param_3 + 1;
      cVar13 = *param_3;
      cVar28 = cVar13 + -0x30;
      bVar32 = cVar13 == '0';
      while (uVar6 = (uint)cVar13, !bVar32) {
        if (!bVar32 && SBORROW1(cVar13,'0') == cVar28 < '\0') {
          if (cVar13 == '^') {
            cVar24 = '\x01';
            uVar6 = uVar26;
          }
          else if (cVar13 != '_') {
            uVar20 = 0xffffffff;
            if (9 < uVar6 - 0x30) goto LAB_00405a68;
LAB_00405ab1:
            uVar20 = 0;
            pcVar9 = param_3;
            goto LAB_00405ab3;
          }
          break;
        }
        if (cVar13 != '#') {
          if (cVar13 != '-') {
            uVar20 = 0xffffffff;
            if (uVar6 - 0x30 < 10) goto LAB_00405ab1;
            goto LAB_00405a68;
          }
          break;
        }
        param_3 = param_3 + 1;
        cVar13 = *param_3;
        cVar5 = '\x01';
        cVar28 = cVar13 + -0x30;
        bVar32 = cVar28 == '\0';
      }
    } while( true );
  }
  if ((ulong)(param_2 - lVar31) < 2) {
    return 0;
  }
  if (param_1 != (char *)0x0) {
    *param_1 = cVar5;
    param_1 = param_1 + 1;
  }
  lVar31 = lVar31 + 1;
  pcVar9 = param_3;
  goto LAB_004059ae;
LAB_00405ab3:
  do {
    uVar6 = (uint)pcVar9[1];
    param_3 = pcVar9 + 1;
    uVar14 = uVar6 - 0x30;
    if ((int)uVar20 < 0xccccccd) {
      if ((uVar20 == 0xccccccc) && ('7' < *pcVar9)) goto LAB_00405afe;
      uVar20 = *pcVar9 + -0x30 + uVar20 * 10;
    }
    else {
LAB_00405afe:
      if (9 < uVar14) {
        uVar20 = 0x7fffffff;
        break;
      }
      uVar6 = (uint)pcVar9[2];
      uVar20 = 0x7fffffff;
      param_3 = pcVar9 + 2;
      uVar14 = uVar6 - 0x30;
    }
    pcVar9 = param_3;
  } while (uVar14 < 10);
LAB_00405a68:
  if (((char)uVar6 == 'E') || ((char)uVar6 == 'O')) {
    uVar8 = (uint)(byte)param_3[1];
    param_3 = param_3 + 1;
    uVar14 = uVar6;
  }
  else {
    uVar14 = 0;
    uVar8 = uVar6;
  }
  cVar13 = (char)uVar8;
  pcVar11 = &local_456;
  pcVar9 = param_3;
  uVar6 = uVar25;
  local_478 = uVar20;
  switch(uVar8 & 0xff) {
  case 0:
    cVar5 = param_3[-1];
    param_3 = param_3 + -1;
LAB_004068f7:
    uVar18 = param_2 - lVar31;
    uVar6 = 0;
    if (-1 < (int)uVar20) {
      uVar6 = uVar20;
    }
    uVar12 = (ulong)(int)uVar6;
    if (cVar5 != '%') break;
    __n = 1;
    pcVar9 = param_3;
    uVar29 = 1;
    if (uVar12 != 0) {
      uVar29 = uVar12;
    }
    goto LAB_004067a3;
  case 0x25:
    uVar18 = param_2 - lVar31;
    uVar6 = 0;
    if (-1 < (int)uVar20) {
      uVar6 = uVar20;
    }
    uVar12 = (ulong)(int)uVar6;
    uVar29 = 1;
    if (uVar12 != 0) {
      uVar29 = uVar12;
    }
    if (uVar14 != 0) {
      __n = 1;
      goto LAB_004067a3;
    }
    if (uVar18 <= uVar29) {
      return 0;
    }
    if (param_1 != (char *)0x0) {
      pcVar11 = param_1;
      if (1 < (int)uVar20) {
        sVar19 = (long)(int)uVar20 - 1;
        pcVar11 = param_1 + sVar19;
        if (uVar26 == 0x30) {
          memset(param_1,0x30,sVar19);
          cVar13 = *param_3;
        }
        else {
          memset(param_1,0x20,sVar19);
          cVar13 = *param_3;
        }
      }
      *pcVar11 = cVar13;
      param_1 = pcVar11 + 1;
    }
    goto LAB_00406346;
  case 0x3a:
    pcVar9 = param_3 + 1;
    lVar30 = 1;
    cVar5 = param_3[1];
    while (cVar5 == ':') {
      lVar30 = lVar30 + 1;
      pcVar9 = param_3 + lVar30;
      cVar5 = param_3[lVar30];
    }
    if (cVar5 == 'z') goto LAB_00406840;
    break;
  case 0x41:
  case 0x42:
  case 0x61:
    if (uVar14 != 0) break;
    if (cVar5 != '\0') {
      cVar24 = cVar5;
    }
LAB_00405b40:
    cVar28 = '\0';
    uVar14 = 0;
    goto LAB_00405b60;
  case 0x43:
    if (uVar14 != 0x45) {
      bVar4 = false;
      local_478 = 2;
      iVar15 = param_4->tm_year;
      iVar23 = iVar15 / 100 + 0x13;
      bVar32 = iVar15 < -0x76c;
      uVar6 = iVar23 - ((uint)(0 < iVar23) & (uint)(iVar15 % 100) >> 0x1f);
      uVar22 = 0;
      goto LAB_004060bf;
    }
LAB_00406d3c:
    uVar8 = 0;
    goto LAB_004060d2;
  case 0x44:
    if (uVar14 == 0) {
      local_498 = "%m/%d/%y";
      goto LAB_00405e39;
    }
    break;
  case 0x46:
    if (uVar14 == 0) {
      local_498 = "%Y-%m-%d";
      goto LAB_00405e39;
    }
    break;
  case 0x47:
  case 0x56:
  case 0x67:
    if (uVar14 != 0x45) {
      iVar15 = param_4->tm_year;
      iVar1 = param_4->tm_yday;
      iVar21 = param_4->tm_wday;
      uVar6 = iVar15 + -100 + (iVar15 >> 0x1f & 400U);
      iVar23 = (iVar1 - iVar21) + 0x17e;
      iVar23 = (iVar1 - iVar23) + 3 + (iVar23 / 7) * 7;
      if (iVar23 < 0) {
        uVar6 = uVar6 - 1;
        iVar23 = 0x16d;
        if (((uVar6 & 3) == 0) && (iVar23 = 0x16e, uVar6 == ((int)uVar6 / 100) * 100)) {
          iVar23 = ~-(uint)((int)uVar6 % 400 == 0) + 0x16e;
        }
        iVar7 = -1;
        iVar21 = ((iVar1 + iVar23) - iVar21) + 0x17e;
        iVar23 = ((iVar1 + iVar23) - iVar21) + 3 + (iVar21 / 7) * 7;
      }
      else {
        iVar7 = 0x16d;
        if (((uVar6 & 3) == 0) && (iVar7 = 0x16e, uVar6 == ((int)uVar6 / 100) * 100)) {
          iVar7 = (uVar6 == ((int)uVar6 / 400) * 400) + 0x16d;
        }
        iVar21 = ((iVar1 - iVar7) - iVar21) + 0x17e;
        iVar1 = ((iVar1 - iVar7) - iVar21) + 3 + (iVar21 / 7) * 7;
        if (-1 < iVar1) {
          iVar23 = iVar1;
        }
        iVar7 = (iVar1 >> 0x1f) + 1;
      }
      if (cVar13 == 'G') {
        bVar4 = false;
        local_478 = 4;
        uVar6 = iVar15 + 0x76c + iVar7;
        bVar32 = iVar15 < -0x76c - iVar7;
        uVar22 = 0;
        goto LAB_004060bf;
      }
      if (cVar13 == 'g') {
        local_478 = 2;
        uVar8 = (iVar15 % 100 + iVar7) % 100;
        uVar6 = uVar8;
        if ((int)uVar8 < 0) {
          uVar6 = uVar8 + 100;
          if (iVar15 < -0x76c - iVar7) {
            uVar6 = -uVar8;
          }
        }
      }
      else {
        uVar6 = iVar23 / 7 + 1;
        local_478 = 2;
      }
      goto LAB_004060b0;
    }
    break;
  case 0x48:
    if (uVar14 != 0x45) {
      uVar6 = param_4->tm_hour;
      local_478 = 2;
      goto LAB_004060b0;
    }
    break;
  case 0x49:
    if (uVar14 != 0x45) {
      local_478 = 2;
      goto LAB_004060b0;
    }
    break;
  case 0x4d:
    if (uVar14 != 0x45) {
      uVar6 = param_4->tm_min;
      local_478 = 2;
      goto LAB_004060b0;
    }
    break;
  case 0x4e:
    if (uVar14 != 0x45) {
      uVar6 = param_8;
      if (uVar20 == 0xffffffff) {
        uVar20 = 9;
        local_478 = 9;
      }
      else {
        uVar8 = param_8;
        uVar22 = uVar20;
        if ((int)uVar20 < 9) {
          do {
            uVar22 = uVar22 + 1;
            uVar6 = (int)uVar8 / 10;
            uVar8 = (int)uVar8 / 10;
          } while (uVar22 != 9);
        }
      }
      goto LAB_004060b0;
    }
    break;
  case 0x50:
    cVar28 = '\x01';
    goto LAB_00406255;
  case 0x52:
    local_498 = "%H:%M";
    goto LAB_00405e39;
  case 0x53:
    if (uVar14 != 0x45) {
      uVar6 = param_4->tm_sec;
      local_478 = 2;
      goto LAB_004060b0;
    }
    break;
  case 0x54:
    local_498 = "%H:%M:%S";
LAB_00405e39:
    uVar29 = FUN_00405920(0,0xffffffffffffffff,local_498,param_4,cVar24,param_6,param_7,param_8);
    uVar6 = 0;
    if (-1 < (int)uVar20) {
      uVar6 = uVar20;
    }
    uVar12 = (ulong)(int)uVar6;
    uVar18 = uVar12;
    if (uVar12 <= uVar29) {
      uVar18 = uVar29;
    }
    if ((ulong)(param_2 - lVar31) <= uVar18) {
      return 0;
    }
    if (param_1 != (char *)0x0) {
      pcVar11 = param_1;
      if (uVar29 < uVar12) {
        sVar19 = (long)(int)uVar20 - uVar29;
        pcVar11 = param_1 + sVar19;
        if (uVar26 == 0x30) {
          memset(param_1,0x30,sVar19);
        }
        else {
          memset(param_1,0x20,sVar19);
        }
      }
      FUN_00405920(pcVar11,param_2 - lVar31,local_498,param_4,cVar24,param_6,param_7,param_8);
      param_1 = pcVar11 + uVar29;
    }
    lVar31 = lVar31 + uVar18;
    goto LAB_004059ae;
  case 0x55:
    if (uVar14 != 0x45) {
      iVar23 = (param_4->tm_yday - param_4->tm_wday) + 7;
      iVar15 = (int)((ulong)((long)iVar23 * -0x6db6db6d) >> 0x20);
LAB_0040667d:
      uVar6 = (iVar15 + iVar23 >> 2) - (iVar23 >> 0x1f);
      local_478 = 2;
      goto LAB_004060b0;
    }
    break;
  case 0x57:
    if (uVar14 != 0x45) {
      iVar23 = param_4->tm_wday + 6;
      iVar23 = ((iVar23 / 7) * 7 - iVar23) + 7 + param_4->tm_yday;
      iVar15 = (int)((ulong)((long)iVar23 * -0x6db6db6d) >> 0x20);
      goto LAB_0040667d;
    }
    break;
  case 0x58:
  case 99:
  case 0x78:
    if (uVar14 != 0x4f) goto switchD_00405a81_caseD_72;
    break;
  case 0x59:
    if (uVar14 == 0x45) goto LAB_00406d3c;
    if (uVar14 == 0x4f) break;
    bVar4 = false;
    local_478 = 4;
    bVar32 = param_4->tm_year < -0x76c;
    uVar6 = param_4->tm_year + 0x76c;
    uVar22 = 0;
    goto LAB_00406630;
  case 0x5a:
    if (cVar5 != '\0') {
      cVar24 = '\0';
    }
    sVar19 = strlen(__s);
    uVar6 = 0;
    if (-1 < (int)uVar20) {
      uVar6 = uVar20;
    }
    uVar18 = (ulong)(int)uVar6;
    uVar29 = uVar18;
    if (uVar18 <= sVar19) {
      uVar29 = sVar19;
    }
    if ((ulong)(param_2 - lVar31) <= uVar29) {
      return 0;
    }
    if (param_1 != (char *)0x0) {
      pcVar11 = param_1;
      if (sVar19 < uVar18) {
        sVar17 = (long)(int)uVar20 - sVar19;
        pcVar11 = param_1 + sVar17;
        if (uVar26 == 0x30) {
          memset(param_1,0x30,sVar17);
        }
        else {
          memset(param_1,0x20,sVar17);
        }
      }
      if (cVar5 == '\0') {
        if (cVar24 == '\0') {
          memcpy(pcVar11,__s,sVar19);
        }
        else {
          FUN_004058d0();
        }
      }
      else {
        FUN_00405880();
      }
      param_1 = pcVar11 + sVar19;
    }
    lVar31 = lVar31 + uVar29;
    goto LAB_004059ae;
  case 0x62:
  case 0x68:
    if (cVar5 != '\0') {
      cVar24 = cVar5;
    }
    if (uVar14 == 0) goto LAB_00405b40;
    break;
  case 100:
    if (uVar14 != 0x45) {
      uVar6 = param_4->tm_mday;
      local_478 = 2;
      goto LAB_004060b0;
    }
    break;
  case 0x65:
    if (uVar14 != 0x45) {
      uVar6 = param_4->tm_mday;
LAB_00406281:
      local_478 = 2;
      if ((uVar26 != 0x30) && (uVar26 != 0x2d)) {
        uVar26 = 0x5f;
      }
      goto LAB_004060b0;
    }
    break;
  case 0x6a:
    if (uVar14 != 0x45) {
      bVar4 = false;
      local_478 = 3;
      bVar32 = param_4->tm_yday < -1;
      uVar6 = param_4->tm_yday + 1;
      uVar22 = 0;
      goto LAB_004060bf;
    }
    break;
  case 0x6b:
    if (uVar14 != 0x45) {
      uVar6 = param_4->tm_hour;
      goto LAB_00406281;
    }
    break;
  case 0x6c:
    if (uVar14 != 0x45) goto LAB_00406281;
    break;
  case 0x6d:
    if (uVar14 != 0x45) {
      bVar4 = false;
      local_478 = 2;
      bVar32 = param_4->tm_mon < -1;
      uVar6 = param_4->tm_mon + 1;
      uVar22 = 0;
      goto LAB_004060bf;
    }
    break;
  case 0x6e:
    uVar6 = 0;
    if (-1 < (int)uVar20) {
      uVar6 = uVar20;
    }
    uVar29 = (ulong)(int)uVar6;
    if (uVar29 == 0) {
      uVar29 = 1;
    }
    if ((ulong)(param_2 - lVar31) <= uVar29) {
      return 0;
    }
    if (param_1 != (char *)0x0) {
      pcVar11 = param_1;
      if (1 < (int)uVar20) {
        sVar19 = (long)(int)uVar20 - 1;
        pcVar11 = param_1 + sVar19;
        if (uVar26 == 0x30) {
          memset(param_1,0x30,sVar19);
        }
        else {
          memset(param_1,0x20,sVar19);
        }
      }
      *pcVar11 = '\n';
      param_1 = pcVar11 + 1;
    }
    goto LAB_00406346;
  case 0x70:
    cVar28 = '\0';
LAB_00406255:
    cVar13 = 'p';
    if (cVar5 != '\0') {
      cVar24 = '\0';
      cVar28 = cVar5;
    }
LAB_00405c7d:
    if (uVar14 != 0) {
      uVar8 = 0;
      goto LAB_004060df;
    }
    goto LAB_00405b60;
  case 0x71:
    uVar8 = 1;
    local_478 = 1;
    if (uVar14 == 0x4f) goto LAB_004060d2;
    bVar4 = false;
    bVar32 = false;
    uVar22 = 0;
    uVar6 = (param_4->tm_mon * 0xb >> 5) + 1;
    goto LAB_00406380;
  case 0x72:
switchD_00405a81_caseD_72:
    cVar28 = '\0';
    goto LAB_00405c7d;
  case 0x73:
    pcVar9 = local_442 + 1;
    local_418 = *(undefined *)&param_4->tm_isdst;
    lStack_410 = param_4->tm_gmtoff;
    local_438 = *(undefined *)param_4;
    uStack_430 = *(undefined *)&param_4->tm_hour;
    local_428 = *(undefined *)&param_4->tm_mon;
    uStack_420 = *(undefined *)&param_4->tm_wday;
    local_408 = param_4->tm_zone;
    lVar10 = FUN_0040bf30(param_7,&local_438);
    lVar30 = lVar10;
    do {
      lVar3 = lVar30 / 10;
      cVar5 = (char)lVar30 + (char)lVar3 * -10;
      if (lVar10 < 0) {
        cVar5 = -cVar5;
      }
      pcVar9 = pcVar9 + -1;
      *pcVar9 = cVar5 + '0';
      lVar30 = lVar3;
    } while (lVar3 != 0);
    local_478 = 1;
    if (0 < (int)uVar20) {
      local_478 = uVar20;
    }
    if (lVar10 < 0) goto LAB_00406ac8;
    goto LAB_00405d6d;
  case 0x74:
    uVar6 = 0;
    if (-1 < (int)uVar20) {
      uVar6 = uVar20;
    }
    uVar29 = (ulong)(int)uVar6;
    if (uVar29 == 0) {
      uVar29 = 1;
    }
    if ((ulong)(param_2 - lVar31) <= uVar29) {
      return 0;
    }
    if (param_1 != (char *)0x0) {
      pcVar11 = param_1;
      if (1 < (int)uVar20) {
        sVar19 = (long)(int)uVar20 - 1;
        pcVar11 = param_1 + sVar19;
        if (uVar26 == 0x30) {
          memset(param_1,0x30,sVar19);
        }
        else {
          memset(param_1,0x20,sVar19);
        }
      }
      *pcVar11 = '\t';
      param_1 = pcVar11 + 1;
    }
LAB_00406346:
    lVar31 = lVar31 + uVar29;
    goto LAB_004059ae;
  case 0x75:
    uVar6 = (param_4->tm_wday + 6) % 7 + 1;
    local_478 = 1;
    goto LAB_004060b0;
  case 0x77:
    if (uVar14 != 0x45) {
      uVar6 = param_4->tm_wday;
      local_478 = 1;
      goto LAB_004060b0;
    }
    break;
  case 0x79:
    if (uVar14 == 0x45) goto LAB_00406d3c;
    local_478 = 2;
    uVar8 = param_4->tm_year % 100;
    uVar6 = uVar8;
    if ((int)uVar8 < 0) {
      uVar6 = uVar8 + 100;
      if (param_4->tm_year < -0x76c) {
        uVar6 = -uVar8;
      }
    }
LAB_004060b0:
    bVar4 = false;
    uVar22 = 0;
    bVar32 = SUB41(uVar6 >> 0x1f,0);
LAB_004060bf:
    if (uVar14 == 0x4f) {
      uVar8 = local_478;
      if (bVar32 != false) {
LAB_00406639:
        uVar6 = -uVar6;
        goto LAB_00406380;
      }
LAB_004060d2:
      cVar28 = '\0';
LAB_004060df:
      local_456 = (char)uVar14;
      pcVar11 = local_455;
      uVar14 = uVar8;
LAB_00405b60:
      local_458 = 0x2520;
      *pcVar11 = cVar13;
      pcVar11[1] = '\0';
      sVar19 = strftime((char *)&local_438,0x400,(char *)&local_458,param_4);
      pcVar9 = param_3;
      if (sVar19 == 0) goto LAB_004059ae;
      local_498 = (char *)(sVar19 - 1);
      uVar6 = 0;
      if (-1 < (int)uVar20) {
        uVar6 = uVar20;
      }
      pcVar9 = (char *)(long)(int)uVar6;
      pcVar16 = pcVar9;
      if (pcVar9 <= local_498) {
        pcVar16 = local_498;
      }
      if ((char *)(param_2 - lVar31) <= pcVar16) {
        return 0;
      }
      if (param_1 != (char *)0x0) {
        pcVar11 = param_1;
        if ((uVar14 == 0) && (local_498 < pcVar9)) {
          sVar19 = (long)(int)uVar20 - (long)local_498;
          pcVar11 = param_1 + sVar19;
          if (uVar26 == 0x30) {
            memset(param_1,0x30,sVar19);
          }
          else {
            memset(param_1,0x20,sVar19);
          }
        }
        pcVar9 = (char *)((long)&local_438 + 1);
        local_488 = param_3;
        if (cVar28 == '\0') goto LAB_00405c4b;
        FUN_00405880();
        goto LAB_00405c63;
      }
    }
    else {
LAB_00406630:
      if (bVar32 != false) goto LAB_00406639;
LAB_00406380:
      pcVar9 = local_442 + 1;
      do {
        pcVar11 = pcVar9;
        pcVar27 = pcVar9 + -1;
        if ((uVar22 & 1) != 0) {
          pcVar9[-1] = ':';
          pcVar11 = pcVar9 + -1;
          pcVar27 = pcVar9 + -2;
        }
        pcVar9 = pcVar27;
        uVar22 = (int)uVar22 >> 1;
        uVar14 = (uint)((ulong)uVar6 / 10);
        pcVar11[-1] = (char)uVar6 + (char)((ulong)uVar6 / 10) * -10 + '0';
        bVar2 = 9 < uVar6;
        uVar6 = uVar14;
      } while ((bVar2) || (uVar22 != 0));
      if ((int)local_478 < (int)uVar20) {
        local_478 = uVar20;
      }
      if (bVar32 == false) {
        if (bVar4) {
          if (uVar26 == 0x2d) {
            cVar13 = '+';
            goto LAB_00406adc;
          }
          cVar5 = '+';
LAB_00406410:
          local_498 = local_442 + (1 - (long)pcVar9);
          iVar23 = (local_478 - 1) - (int)local_498;
          pcVar11 = (char *)(param_2 - lVar31);
          if (iVar23 < 1) {
            uVar6 = 0;
            if (-1 < (int)uVar20) {
              uVar6 = uVar20;
            }
            pcVar27 = (char *)(long)(int)uVar6;
            pcVar16 = (char *)0x1;
            if (pcVar27 != (char *)0x0) {
              pcVar16 = pcVar27;
            }
            if (pcVar11 <= pcVar16) {
              return 0;
            }
            if (param_1 != (char *)0x0) {
              pcVar11 = param_1;
              if ((local_478 == 0) && ((char *)0x1 < pcVar27)) {
                sVar19 = (long)(int)uVar20 - 1;
                pcVar11 = param_1 + sVar19;
                local_478 = 0;
                if (uVar26 == 0x30) {
                  memset(param_1,0x30,sVar19);
                }
                else {
                  memset(param_1,0x20,sVar19);
                }
              }
              param_1 = pcVar11 + 1;
              *pcVar11 = cVar5;
            }
            lVar31 = lVar31 + (long)pcVar16;
            pcVar11 = (char *)(param_2 - lVar31);
          }
          else {
            if (uVar26 != 0x5f) {
              if (pcVar11 <= (char *)(long)(int)local_478) {
                return 0;
              }
              uVar6 = 0;
              if (-1 < (int)uVar20) {
                uVar6 = uVar20;
              }
              pcVar16 = (char *)(long)(int)uVar6;
              pcVar27 = (char *)0x1;
              if (pcVar16 != (char *)0x0) {
                pcVar27 = pcVar16;
              }
              if (pcVar11 <= pcVar27) {
                return 0;
              }
              lVar31 = lVar31 + (long)pcVar27;
              sVar19 = (size_t)iVar23;
              if (param_1 != (char *)0x0) {
                pcVar11 = param_1;
                if ((local_478 == 0) && ((char *)0x1 < pcVar16)) {
                  sVar17 = (long)(int)uVar20 - 1;
                  pcVar11 = param_1 + sVar17;
                  local_480 = 0;
                  local_478 = local_480;
                  if (uVar26 == 0x30) {
                    memset(param_1,0x30,sVar17);
                  }
                  else {
                    memset(param_1,0x20,sVar17);
                  }
                }
                param_1 = pcVar11 + 1;
                *pcVar11 = cVar5;
                goto LAB_004064e5;
              }
              goto LAB_00406530;
            }
LAB_00406c93:
            pcVar27 = (char *)(long)iVar23;
            if (pcVar11 <= pcVar27) {
              return 0;
            }
            if (param_1 != (char *)0x0) {
              memset(param_1,0x20,(size_t)pcVar27);
              param_1 = param_1 + (long)pcVar27;
            }
            lVar31 = lVar31 + (long)pcVar27;
            uVar6 = uVar20 - iVar23;
            bVar32 = iVar23 < (int)uVar20;
            uVar20 = 0;
            if (bVar32) {
              uVar20 = uVar6;
            }
            pcVar11 = (char *)(param_2 - lVar31);
            if (cVar5 == '\0') {
              pcVar27 = (char *)(long)(int)uVar20;
              uVar26 = 0x5f;
              local_498 = local_442 + (1 - (long)pcVar9);
            }
            else {
              pcVar27 = (char *)(long)(int)uVar20;
              pcVar16 = (char *)0x1;
              if (pcVar27 != (char *)0x0) {
                pcVar16 = pcVar27;
              }
              if (pcVar11 <= pcVar16) {
                return 0;
              }
              if (param_1 != (char *)0x0) {
                pcVar11 = param_1;
                if ((local_478 == 0) && ((char *)0x1 < pcVar27)) {
                  pcVar11 = param_1 + (long)(pcVar27 + -1);
                  memset(param_1,0x20,(size_t)(pcVar27 + -1));
                  local_478 = 0;
                }
                param_1 = pcVar11 + 1;
                *pcVar11 = cVar5;
              }
              lVar31 = lVar31 + (long)pcVar16;
              uVar26 = 0x5f;
              local_498 = local_442 + (1 - (long)pcVar9);
              pcVar11 = (char *)(param_2 - lVar31);
            }
          }
        }
        else {
LAB_00405d6d:
          local_498 = local_442 + (1 - (long)pcVar9);
          pcVar11 = (char *)(param_2 - lVar31);
          if ((uVar26 == 0x2d) || (iVar23 = local_478 - (int)local_498, iVar23 < 1)) {
            uVar6 = 0;
            if (-1 < (int)uVar20) {
              uVar6 = uVar20;
            }
            pcVar27 = (char *)(long)(int)uVar6;
            goto LAB_00405da6;
          }
          if (uVar26 == 0x5f) {
            cVar5 = '\0';
            goto LAB_00406c93;
          }
          if (pcVar11 <= (char *)(long)(int)local_478) {
            return 0;
          }
          sVar19 = (size_t)iVar23;
LAB_004064e5:
          if (param_1 != (char *)0x0) {
            memset(param_1,0x30,sVar19);
            param_1 = param_1 + sVar19;
          }
LAB_00406530:
          lVar31 = lVar31 + sVar19;
          uVar20 = 0;
          pcVar27 = (char *)0x0;
          pcVar11 = (char *)(param_2 - lVar31);
        }
      }
      else {
LAB_00406ac8:
        cVar5 = '-';
        cVar13 = '-';
        if (uVar26 != 0x2d) goto LAB_00406410;
LAB_00406adc:
        uVar6 = 0;
        if (-1 < (int)uVar20) {
          uVar6 = uVar20;
        }
        pcVar27 = (char *)(long)(int)uVar6;
        pcVar11 = (char *)0x1;
        if (pcVar27 != (char *)0x0) {
          pcVar11 = pcVar27;
        }
        if ((char *)(param_2 - lVar31) <= pcVar11) {
          return 0;
        }
        if (param_1 != (char *)0x0) {
          if ((local_478 == 0) && ((char *)0x1 < pcVar27)) {
            memset(param_1,0x20,(long)(int)uVar20 - 1U);
            local_480 = 0;
            param_1 = param_1 + ((long)(int)uVar20 - 1U);
            local_478 = local_480;
          }
          *param_1 = cVar13;
          param_1 = param_1 + 1;
        }
        lVar31 = lVar31 + (long)pcVar11;
        uVar26 = 0x2d;
        local_498 = local_442 + (1 - (long)pcVar9);
        pcVar11 = (char *)(param_2 - lVar31);
      }
LAB_00405da6:
      pcVar16 = pcVar27;
      if (pcVar27 <= local_498) {
        pcVar16 = local_498;
      }
      if (pcVar11 <= pcVar16) {
        return 0;
      }
      if (param_1 != (char *)0x0) {
        pcVar11 = param_1;
        local_488 = param_3;
        if ((local_478 == 0) && (local_498 < pcVar27)) {
          sVar19 = (long)(int)uVar20 - (long)local_498;
          pcVar11 = param_1 + sVar19;
          if (uVar26 == 0x30) {
            memset(param_1,0x30,sVar19);
          }
          else {
            memset(param_1,0x20,sVar19);
          }
        }
LAB_00405c4b:
        if (cVar24 == '\0') {
          memcpy(pcVar11,pcVar9,(size_t)local_498);
        }
        else {
          FUN_004058d0();
        }
LAB_00405c63:
        param_1 = pcVar11 + (long)local_498;
        param_3 = local_488;
      }
    }
    lVar31 = lVar31 + (long)pcVar16;
    pcVar9 = param_3;
    goto LAB_004059ae;
  case 0x7a:
    lVar30 = 0;
LAB_00406840:
    if (param_4->tm_isdst < 0) goto LAB_004059ae;
    bVar32 = true;
    iVar23 = (int)param_4->tm_gmtoff;
    if ((-1 < iVar23) && (bVar32 = false, iVar23 == 0)) {
      bVar32 = *__s == '-';
    }
    uVar6 = iVar23 / 0xe10;
    uVar8 = (iVar23 / 0x3c) % 0x3c;
    param_3 = pcVar9;
    if (lVar30 == 1) {
LAB_00406f96:
      local_478 = 6;
      bVar4 = true;
      uVar6 = uVar6 * 100 + uVar8;
      uVar22 = 4;
    }
    else if (lVar30 == 0) {
      uVar22 = 0;
      bVar4 = true;
      local_478 = 5;
      uVar6 = uVar6 * 100 + uVar8;
    }
    else {
      if (lVar30 != 2) {
        if (lVar30 != 3) {
          cVar5 = *pcVar9;
          goto LAB_004068f7;
        }
        if (iVar23 % 0x3c == 0) {
          if (uVar8 != 0) goto LAB_00406f96;
          local_478 = 3;
          bVar4 = true;
          uVar22 = uVar8;
          goto LAB_004060bf;
        }
      }
      local_478 = 9;
      bVar4 = true;
      uVar22 = 0x14;
      uVar6 = iVar23 % 0x3c + uVar6 * 10000 + uVar8 * 100;
    }
    goto LAB_004060bf;
  }
  pcVar11 = param_3 + -1;
  do {
    pcVar9 = pcVar11;
    pcVar11 = pcVar9 + -1;
  } while (*pcVar9 != '%');
  __n = (ulong)(((int)(param_3 + -1) + 2) - (int)pcVar9);
  uVar18 = param_2 - lVar31;
  uVar6 = 0;
  if (-1 < (int)uVar20) {
    uVar6 = uVar20;
  }
  uVar12 = (ulong)(int)uVar6;
  uVar29 = uVar12;
  if (uVar12 <= __n) {
    uVar29 = __n;
  }
LAB_004067a3:
  if (uVar18 <= uVar29) {
    return 0;
  }
  if (param_1 != (char *)0x0) {
    pcVar11 = param_1;
    if (__n < uVar12) {
      sVar19 = (long)(int)uVar20 - __n;
      pcVar11 = param_1 + sVar19;
      if (uVar26 == 0x30) {
        memset(param_1,0x30,sVar19);
      }
      else {
        memset(param_1,0x20,sVar19);
      }
    }
    if (cVar24 == '\0') {
      memcpy(pcVar11,pcVar9,__n);
    }
    else {
      FUN_004058d0();
    }
    param_1 = pcVar11 + __n;
  }
  lVar31 = lVar31 + uVar29;
  pcVar9 = param_3;
LAB_004059ae:
  cVar5 = pcVar9[1];
  param_3 = pcVar9 + 1;
  if (cVar5 == '\0') goto LAB_004059bb;
  goto LAB_0040598a;
}


void FUN_004070f0(void)

{
  FUN_00405920();
  return;
}


void FUN_00407110(byte *param_1)

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
        pbVar6 = &DAT_0040f3c8;
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
  DAT_00614490 = param_1;
  program_invocation_name = param_1;
  return;
}


char * FUN_004071b0(char *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  byte *pbVar3;
  
  pcVar2 = (char *)dcgettext(0,param_1,5);
  if (param_1 == pcVar2) {
    pbVar3 = (byte *)FUN_0040c0d0();
    if ((*pbVar3 & 0xdf) == 0x55) {
      if (((((pbVar3[1] & 0xdf) != 0x54) || ((pbVar3[2] & 0xdf) != 0x46)) || (pbVar3[3] != 0x2d)) ||
         ((pbVar3[4] != 0x38 || (pbVar3[5] != 0)))) {
LAB_00407288:
        pcVar2 = "\"";
        if (param_2 != 9) {
          pcVar2 = "\'";
        }
        return pcVar2;
      }
      cVar1 = *pcVar2;
      pcVar2 = &DAT_0040f3d9;
      if (cVar1 != '`') {
        pcVar2 = &DAT_0040f3ce;
      }
    }
    else {
      if (((((*pbVar3 & 0xdf) != 0x47) || ((pbVar3[1] & 0xdf) != 0x42)) || (pbVar3[2] != 0x31)) ||
         (((pbVar3[3] != 0x38 || (pbVar3[4] != 0x30)) ||
          ((pbVar3[5] != 0x33 || ((pbVar3[6] != 0x30 || (pbVar3[7] != 0)))))))) goto LAB_00407288;
      cVar1 = *pcVar2;
      pcVar2 = &DAT_0040f3d5;
      if (cVar1 != '`') {
        pcVar2 = &DAT_0040f3d2;
      }
    }
  }
  return pcVar2;
}


ulong FUN_004072b0(undefined *param_1,ulong param_2,char *param_3,ulong param_4,int param_5,
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
LAB_00407f01:
    if (param_2 != 0) {
      bVar3 = false;
      local_5b = false;
      bVar2 = true;
      local_70 = 0;
      goto LAB_00407b36;
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
      goto LAB_00407f01;
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
      param_8 = (char *)FUN_004071b0(&DAT_0040f3dd,param_5);
      param_9 = (char *)FUN_004071b0("\'");
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
LAB_00407348:
  uVar22 = 0;
  bVar5 = local_5b;
LAB_00407358:
  bVar23 = param_4 != uVar22;
  if (param_4 == 0xffffffffffffffff) {
    bVar23 = param_3[uVar22] != '\0';
  }
  bVar26 = bVar6;
  if (!bVar23) goto LAB_00407ad8;
  bVar20 = (bool)(param_5 != 2 & bVar6);
  __s1 = (byte *)(param_3 + uVar22);
  uVar16 = uVar15;
  bVar4 = bVar3;
  if (bVar20) {
    if (local_a0 == 0) {
LAB_00407a50:
      uVar19 = (ulong)*__s1;
      switch(uVar19) {
      case 0:
        goto switchD_00407a62_caseD_0;
      default:
        bVar20 = false;
        goto switchD_004078ce_caseD_1;
      case 7:
        bVar17 = 0x61;
        goto LAB_00407765;
      case 8:
        bVar17 = 0x62;
        break;
      case 9:
switchD_00407a62_caseD_9:
        bVar17 = 0x74;
        break;
      case 10:
switchD_00407a62_caseD_a:
        bVar17 = 0x6e;
        break;
      case 0xb:
switchD_00407a62_caseD_b:
        bVar17 = 0x76;
        goto LAB_00407765;
      case 0xc:
switchD_00407a62_caseD_c:
        bVar17 = 0x66;
LAB_00407765:
        if (local_5c) {
          bVar25 = false;
          goto LAB_004076b8;
        }
LAB_00407770:
        bVar23 = false;
        goto LAB_0040752b;
      case 0xd:
        bVar20 = false;
switchD_00407448_caseD_d:
        bVar25 = param_5 == 2;
        uVar19 = 0xd;
        bVar13 = 0x72;
        goto LAB_00407680;
      case 0x20:
        bVar25 = false;
LAB_00407aaa:
        uVar19 = 0x20;
        goto LAB_00407a72;
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
switchD_00407448_caseD_21:
        bVar25 = false;
        goto LAB_0040768b;
      case 0x23:
      case 0x7e:
        bVar26 = false;
LAB_00407a8a:
        if (uVar22 == 0) {
          bVar25 = false;
          bVar23 = bVar20;
          bVar20 = bVar26;
          goto LAB_00407498;
        }
        bVar23 = false;
        goto LAB_004074af;
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
LAB_00407a72:
        bVar24 = false;
        bVar23 = bVar20;
        bVar20 = bVar25;
        goto LAB_004074b1;
      case 0x27:
        bVar20 = false;
        goto switchD_004078ce_caseD_27;
      case 0x3f:
        bVar20 = false;
        goto switchD_004078ce_caseD_3f;
      case 0x5c:
        bVar20 = false;
        goto switchD_00407448_caseD_5c;
      case 0x7b:
      case 0x7d:
        bVar20 = false;
        goto switchD_004078ce_caseD_7b;
      }
      bVar25 = false;
      bVar23 = false;
      goto joined_r0x004076a7;
    }
    if ((param_4 == 0xffffffffffffffff) && (1 < local_a0)) {
      param_4 = strlen(param_3);
    }
    if ((param_4 < uVar22 + local_a0) || (iVar7 = memcmp(__s1,local_78,local_a0), iVar7 != 0))
    goto LAB_00407a50;
    if (!local_5c) {
      uVar19 = (ulong)*__s1;
      bVar25 = bVar20;
      switch(uVar19) {
      case 0:
        goto switchD_00407448_caseD_0;
      default:
        goto switchD_004078ce_caseD_1;
      case 7:
        bVar17 = 0x61;
        goto LAB_00407770;
      case 8:
        bVar25 = false;
        bVar23 = false;
        bVar17 = 0x62;
        break;
      case 9:
        goto switchD_00407a62_caseD_9;
      case 10:
        goto switchD_00407a62_caseD_a;
      case 0xb:
        goto switchD_00407a62_caseD_b;
      case 0xc:
        goto switchD_00407a62_caseD_c;
      case 0xd:
        goto switchD_00407448_caseD_d;
      case 0x20:
        goto LAB_00407aaa;
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
        goto switchD_00407448_caseD_21;
      case 0x23:
      case 0x7e:
        bVar26 = bVar20;
        goto LAB_00407a8a;
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
        goto LAB_00407a72;
      case 0x27:
        goto switchD_004078ce_caseD_27;
      case 0x3f:
        goto switchD_004078ce_caseD_3f;
      case 0x5c:
        goto switchD_00407448_caseD_5c;
      case 0x7b:
      case 0x7d:
        goto switchD_004078ce_caseD_7b;
      }
      goto LAB_004074f2;
    }
    goto LAB_004076ca;
  }
  uVar19 = (ulong)*__s1;
  switch(uVar19) {
  case 0:
    if (bVar6) {
switchD_00407a62_caseD_0:
      if (!local_5c) {
        bVar20 = false;
switchD_00407448_caseD_0:
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
            goto LAB_004075a8;
          }
LAB_004077ea:
          param_1[uVar16] = 0x5c;
          uVar15 = uVar16;
        }
        else if (uVar15 < uVar9) goto LAB_004077ea;
        uVar16 = uVar15 + 1;
        bVar24 = bVar23;
        if (param_5 == 2) {
          bVar17 = 0x30;
          bVar23 = false;
          bVar4 = bVar3;
          goto LAB_004075a8;
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
LAB_00407829:
        bVar17 = (byte)uVar19;
        bVar23 = false;
        uVar15 = uVar16;
        bVar4 = bVar3;
        if ((bool)(bVar6 ^ 1U | bVar26)) goto LAB_004075a8;
        goto LAB_004074b1;
      }
      bVar26 = param_5 == 2;
      goto LAB_004076bc;
    }
    if ((param_6 & 1) == 0) {
      bVar25 = param_5 == 2;
      uVar19 = 0;
      bVar23 = false;
      bVar20 = false;
      goto LAB_00407498;
    }
    uVar22 = uVar22 + 1;
    goto LAB_00407358;
  default:
switchD_004078ce_caseD_1:
    bVar25 = bVar6;
    if (sVar8 != 1) {
      local_40[0] = (mbstate_t)0x0;
      if (param_4 == 0xffffffffffffffff) {
        param_4 = strlen(param_3);
      }
      uVar21 = 0;
      do {
        uVar1 = uVar22 + uVar21;
        lVar11 = FUN_0040ba50(&local_44,param_3 + uVar1,param_4 - uVar1,local_40);
        if (lVar11 == 0) break;
        if (lVar11 == -1) {
          bVar23 = false;
          goto LAB_004081da;
        }
        if (lVar11 == -2) {
          if ((param_4 <= uVar1) || (param_3[uVar1] == '\0')) goto LAB_00408317;
          goto LAB_00408307;
        }
        if (((param_5 == 2) && (local_5c)) && (lVar11 != 1)) {
          pcVar12 = param_3 + uVar1 + 1;
          do {
            if (((byte)(*pcVar12 + 0xa5U) < 0x22) &&
               ((1L << (*pcVar12 + 0xa5U & 0x3f) & 0x20000002bU) != 0)) {
              param_5 = 2;
              goto LAB_004076bc;
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
      goto LAB_004081da;
    }
    ppuVar10 = __ctype_b_loc();
    uVar21 = 1;
    bVar25 = ((*ppuVar10)[uVar19] & 0x4000) == 0;
    bVar23 = !bVar25;
    bVar25 = (bool)(bVar25 & bVar6);
    goto LAB_004078a4;
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
    goto LAB_004078e2;
  case 10:
    uVar19 = 10;
    bVar13 = 0x6e;
    goto LAB_004078e2;
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
LAB_004078e2:
    bVar25 = param_5 == 2;
    bVar20 = (bool)(local_5c & bVar25);
    if (bVar20) {
LAB_004078fa:
      param_5 = 2;
      goto LAB_004076bc;
    }
    break;
  case 0x20:
    uVar19 = 0x20;
    goto LAB_00407486;
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
LAB_00407486:
    bVar25 = param_5 == 2;
    if ((local_5c) && (bVar25)) goto LAB_004078fa;
    goto LAB_00407498;
  case 0x23:
  case 0x7e:
LAB_0040747d:
    bVar25 = param_5 == 2;
    if (uVar22 == 0) goto LAB_00407486;
    goto LAB_0040768b;
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
    goto switchD_004078ce_caseD_25;
  case 0x27:
switchD_004078ce_caseD_27:
    bVar5 = bVar23;
    if (param_5 != 2) {
      bVar25 = false;
      uVar19 = 0x27;
      goto LAB_00407498;
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
      goto LAB_004075a8;
    }
    goto LAB_004076bc;
  case 0x3f:
switchD_004078ce_caseD_3f:
    if (param_5 == 2) {
      if (!local_5c) {
        bVar17 = 0x3f;
        bVar24 = false;
        bVar23 = false;
        goto LAB_004075a8;
      }
      goto LAB_004076bc;
    }
    if (param_5 != 5) {
      bVar25 = param_5 == 2;
      uVar19 = 0x3f;
      bVar23 = false;
      goto LAB_00407498;
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
        goto LAB_00407829;
      }
      goto LAB_004076ca;
    }
    bVar25 = false;
    uVar19 = 0x3f;
    bVar23 = false;
    goto LAB_00407498;
  case 0x5c:
    if (param_5 != 2) {
switchD_00407448_caseD_5c:
      uVar19 = 0x5c;
      bVar17 = 0x5c;
      bVar13 = 0x5c;
      bVar25 = (bool)(bVar6 & local_5c & local_a0 != 0);
      if (!bVar25) break;
      uVar22 = uVar22 + 1;
      bVar23 = false;
      goto LAB_004075c4;
    }
    if (local_5c) goto LAB_004076bc;
    uVar22 = uVar22 + 1;
    bVar23 = false;
    bVar17 = 0x5c;
    goto LAB_004075c4;
  case 0x7b:
  case 0x7d:
switchD_004078ce_caseD_7b:
    bVar24 = param_4 != 1;
    if (param_4 == 0xffffffffffffffff) {
      bVar24 = param_3[1] != '\0';
    }
    bVar25 = param_5 == 2;
    if (!bVar24) goto LAB_0040747d;
    goto LAB_0040768b;
  }
LAB_00407680:
  if (!bVar6) {
LAB_0040768b:
    bVar23 = false;
    goto LAB_00407498;
  }
  bVar23 = false;
  bVar17 = bVar13;
  goto joined_r0x004076a7;
LAB_00407ad8:
  if ((uVar15 == 0) && ((bool)(local_5c & param_5 == 2))) {
    param_5 = 2;
LAB_004076bc:
    if (bVar26) {
      param_5 = 4;
    }
LAB_004076ca:
    uVar9 = FUN_004072b0(param_1,uVar9,param_3,param_4,param_5,param_6 & 0xfffffffd,0,param_8,
                         param_9);
    return uVar9;
  }
  bVar26 = (bool)(param_5 == 2 & (local_5c ^ 1U));
  bVar23 = (bool)(local_5c ^ 1U);
  if ((!bVar26) || (bVar23 = bVar26, !bVar5)) {
LAB_004083ad:
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
    uVar9 = FUN_004072b0(param_1,local_70,param_3,param_4,5,param_6,param_7,param_8,param_9);
    return uVar9;
  }
  local_5b = uVar9 == 0 && local_70 != 0;
  param_2 = local_70;
  bVar23 = bVar5;
  if (uVar9 != 0 || local_70 == 0) goto LAB_004083ad;
LAB_00407b36:
  *param_1 = 0x27;
  param_5 = 2;
  uVar15 = 1;
  local_78 = "\'";
  local_a0 = 1;
  local_5c = false;
  uVar9 = param_2;
  goto LAB_00407348;
  while (__s1[uVar21] != 0) {
LAB_00408307:
    uVar21 = uVar21 + 1;
    if (param_4 <= uVar22 + uVar21) break;
  }
LAB_00408317:
  bVar23 = false;
LAB_004081da:
  if (1 < uVar21) {
LAB_00407d9e:
    bVar26 = false;
    uVar21 = uVar21 + uVar22;
    uVar16 = uVar22;
    do {
      bVar17 = (byte)uVar19;
      if (bVar25) {
        bVar26 = param_5 == 2;
        if (local_5c) goto LAB_004076bc;
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
        if (uVar21 <= uVar22) goto LAB_0040753d;
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
        if (uVar21 <= uVar22) goto LAB_004075c4;
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
LAB_004078a4:
  if (bVar25) {
    bVar23 = false;
    bVar25 = bVar6;
    goto LAB_00407d9e;
  }
switchD_004078ce_caseD_25:
  bVar25 = param_5 == 2;
LAB_00407498:
  bVar17 = (byte)uVar19;
  bVar24 = (bool)((bVar6 ^ 1U | bVar25) ^ 1 | local_5c);
  bVar26 = bVar20;
  if (bVar24) {
LAB_004074af:
    bVar24 = false;
    bVar20 = bVar26;
LAB_004074b1:
    bVar17 = (byte)uVar19;
    uVar16 = uVar15;
    bVar4 = bVar3;
    if ((param_7 == 0) || ((*(uint *)(param_7 + (uVar19 >> 5) * 4) >> (bVar17 & 0x1f) & 1) == 0))
    goto LAB_004075a8;
    bVar25 = param_5 == 2;
  }
  else {
LAB_004075a8:
    bVar25 = param_5 == 2;
    uVar15 = uVar16;
    bVar3 = bVar4;
    if (!bVar20) {
      uVar22 = uVar22 + 1;
      bVar3 = (bool)((bVar24 ^ 1U) & bVar4);
LAB_004075c4:
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
      goto LAB_0040753d;
    }
  }
joined_r0x004076a7:
  if (local_5c) {
LAB_004076b8:
    bVar26 = (bool)(bVar6 & bVar25);
    goto LAB_004076bc;
  }
LAB_004074f2:
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
LAB_0040752b:
  if (uVar15 < uVar9) {
    param_1[uVar15] = 0x5c;
  }
  uVar15 = uVar15 + 1;
  uVar22 = uVar22 + 1;
  bVar4 = bVar3;
LAB_0040753d:
  bVar3 = bVar4;
  if (uVar15 < uVar9) {
    param_1[uVar15] = bVar17;
  }
  uVar15 = uVar15 + 1;
  if (!bVar23) {
    bVar2 = false;
  }
  goto LAB_00407358;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_004084e0(int param_1,undefined param_2,undefined param_3,undefined *param_4)

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
  puVar8 = (undefined *)PTR_DAT_00614318;
  if (DAT_00614330 <= param_1) {
    if (param_1 == 0x7fffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_00409550();
    }
    if (PTR_DAT_00614318 == &DAT_00614320) {
      puVar8 = (undefined *)FUN_00409360(0);
      uVar6 = PTR_DAT_00614328._4_4_;
      uVar5 = PTR_DAT_00614328._0_4_;
      uVar3 = _UNK_00614324;
      PTR_DAT_00614318 = (undefined *)puVar8;
      *puVar8 = _DAT_00614320;
      puVar8[1] = uVar3;
      puVar8[2] = uVar5;
      puVar8[3] = uVar6;
    }
    else {
      puVar8 = (undefined *)FUN_00409360(PTR_DAT_00614318);
      PTR_DAT_00614318 = (undefined *)puVar8;
    }
    memset(puVar8 + (long)DAT_00614330 * 4,0,(long)((param_1 + 1) - DAT_00614330) << 4);
    DAT_00614330 = param_1 + 1;
  }
  uVar2 = param_4[1];
  puVar10 = (ulong *)(puVar8 + (long)param_1 * 4);
  uVar4 = *puVar10;
  __ptr = (undefined *)puVar10[1];
  uVar9 = FUN_004072b0(__ptr,uVar4,param_2,param_3,*param_4,uVar2 | 1,param_4 + 2,
                       *(undefined *)(param_4 + 10),*(undefined *)(param_4 + 0xc));
  if (uVar4 <= uVar9) {
    uVar9 = uVar9 + 1;
    *puVar10 = uVar9;
    if (__ptr != &DAT_006144a0) {
      free(__ptr);
    }
    __ptr = (undefined *)FUN_00409300(uVar9);
    uVar3 = *param_4;
    puVar10[1] = (ulong)__ptr;
    FUN_004072b0(__ptr,uVar9,param_2,param_3,uVar3,uVar2 | 1,param_4 + 2,
                 *(undefined *)(param_4 + 10),*(undefined *)(param_4 + 0xc));
  }
  *piVar7 = iVar1;
  return __ptr;
}


void FUN_00408680(undefined *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_006145a0;
  }
  FUN_00409500(param_1,0x38);
  *piVar2 = iVar1;
  return;
}


undefined FUN_004086c0(undefined *param_1)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = (undefined *)&DAT_006145a0;
  }
  return *param_1;
}


void FUN_004086d0(undefined *param_1,undefined param_2)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = (undefined *)&DAT_006145a0;
  }
  *param_1 = param_2;
  return;
}


uint FUN_004086e0(undefined *param_1,byte param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_006145a0;
  }
  uVar1 = *(uint *)(param_1 + (ulong)(param_2 >> 5) * 4 + 8);
  uVar2 = uVar1 >> (param_2 & 0x1f);
  *(uint *)(param_1 + (ulong)(param_2 >> 5) * 4 + 8) =
       ((param_3 ^ uVar2) & 1) << (param_2 & 0x1f) ^ uVar1;
  return uVar2 & 1;
}


undefined FUN_00408720(undefined *param_1,undefined param_2)

{
  undefined uVar1;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_006145a0;
  }
  uVar1 = *(undefined *)(param_1 + 4);
  *(undefined *)(param_1 + 4) = param_2;
  return uVar1;
}


void FUN_00408740(undefined *param_1,long param_2,long param_3)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = (undefined *)&DAT_006145a0;
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


void FUN_00408770(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                 undefined *param_5)

{
  int iVar1;
  int *piVar2;
  
  if (param_5 == (undefined *)0x0) {
    param_5 = (undefined *)&DAT_006145a0;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  FUN_004072b0(param_1,param_2,param_3,param_4,*param_5,param_5[1],param_5 + 2,
               *(undefined *)(param_5 + 10),*(undefined *)(param_5 + 0xc));
  *piVar2 = iVar1;
  return;
}


undefined FUN_004087f0(undefined param_1,undefined param_2,long *param_3,undefined *param_4)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined uVar4;
  uint uVar5;
  
  if (param_4 == (undefined *)0x0) {
    param_4 = (undefined *)&DAT_006145a0;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  uVar5 = (uint)(param_3 == (long *)0x0) | param_4[1];
  lVar3 = FUN_004072b0(0,0,param_1,param_2,*param_4,uVar5,param_4 + 2,*(undefined *)(param_4 + 10),
                       *(undefined *)(param_4 + 0xc));
  uVar4 = FUN_00409300(lVar3 + 1);
  FUN_004072b0(uVar4,lVar3 + 1,param_1,param_2,*param_4,uVar5,param_4 + 2,
               *(undefined *)(param_4 + 10),*(undefined *)(param_4 + 0xc));
  *piVar2 = iVar1;
  if (param_3 != (long *)0x0) {
    *param_3 = lVar3;
  }
  return uVar4;
}


void FUN_004088e0(undefined param_1,undefined param_2,undefined param_3)

{
  FUN_004087f0(param_1,param_2,0,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004088f0(void)

{
  void **ppvVar1;
  void *__ptr;
  undefined *__ptr_00;
  void **ppvVar2;
  
  __ptr_00 = PTR_DAT_00614318;
  if (1 < DAT_00614330) {
    ppvVar2 = (void **)(PTR_DAT_00614318 + 0x18);
    ppvVar1 = (void **)(PTR_DAT_00614318 + (ulong)(DAT_00614330 - 2) * 0x10 + 0x28);
    do {
      __ptr = *ppvVar2;
      ppvVar2 = ppvVar2 + 2;
      free(__ptr);
    } while (ppvVar2 != ppvVar1);
  }
  if (*(undefined **)(__ptr_00 + 8) != &DAT_006144a0) {
    free(*(undefined **)(__ptr_00 + 8));
    _DAT_00614320 = 0x100;
    PTR_DAT_00614328 = &DAT_006144a0;
  }
  if (__ptr_00 != &DAT_00614320) {
    free(__ptr_00);
    PTR_DAT_00614318 = &DAT_00614320;
  }
  DAT_00614330 = 1;
  return;
}


void FUN_00408990(undefined param_1,undefined param_2)

{
  FUN_004084e0(param_1,param_2,0xffffffffffffffff,&DAT_006145a0);
  return;
}


void FUN_004089b0(void)

{
  FUN_004084e0();
  return;
}


void FUN_004089c0(undefined param_1)

{
  FUN_004084e0(0,param_1,0xffffffffffffffff,&DAT_006145a0);
  return;
}


void FUN_004089e0(undefined param_1,undefined param_2)

{
  FUN_004084e0(0,param_1,param_2,&DAT_006145a0);
  return;
}


void FUN_00408a00(undefined param_1,int param_2,undefined param_3)

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
    FUN_004084e0(param_1,param_3,0xffffffffffffffff,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00408a70(undefined param_1,int param_2,undefined param_3,undefined param_4)

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
    FUN_004084e0(param_1,param_3,param_4,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00408ae0(undefined param_1,undefined param_2)

{
  FUN_00408a00(0,param_1,param_2);
  return;
}


void FUN_00408af0(undefined param_1,undefined param_2,undefined param_3)

{
  FUN_00408a70(0,param_1,param_2,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408b00(undefined param_1,undefined param_2,byte param_3)

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
  
  local_18 = DAT_006145d0;
  local_48 = _DAT_006145a0;
  uStack_40 = uRam00000000006145a8;
  local_38 = _DAT_006145b0;
  uStack_30 = uRam00000000006145b8;
  puVar1 = (uint *)((long)&uStack_40 + (ulong)(param_3 >> 5) * 4);
  local_28 = _DAT_006145c0;
  uStack_20 = uRam00000000006145c8;
  uVar2 = *puVar1;
  *puVar1 = (~(uVar2 >> (param_3 & 0x1f)) & 1) << (param_3 & 0x1f) ^ uVar2;
  FUN_004084e0(0,param_1,param_2,&local_48);
  return;
}


void FUN_00408b70(undefined param_1,char param_2)

{
  FUN_00408b00(param_1,0xffffffffffffffff,(int)param_2);
  return;
}


void FUN_00408b80(undefined param_1)

{
  FUN_00408b00(param_1,0xffffffffffffffff,0x3a);
  return;
}


void FUN_00408ba0(undefined param_1,undefined param_2)

{
  FUN_00408b00(param_1,param_2,0x3a);
  return;
}


void FUN_00408bb0(undefined param_1,int param_2,undefined param_3)

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
    FUN_004084e0(param_1,param_3,0xffffffffffffffff,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408c20(undefined param_1,long param_2,long param_3,undefined param_4,undefined param_5
                 )

{
  undefined local_48;
  undefined uStack_40;
  undefined local_38;
  undefined uStack_30;
  undefined local_28;
  long lStack_20;
  long local_18;
  
  uStack_40 = uRam00000000006145a8;
  local_38 = _DAT_006145b0;
  uStack_30 = uRam00000000006145b8;
  local_28 = _DAT_006145c0;
  lStack_20 = uRam00000000006145c8;
  local_18 = DAT_006145d0;
  local_48 = CONCAT44((int)((ulong)_DAT_006145a0 >> 0x20),10);
  if ((param_2 != 0) && (param_3 != 0)) {
    lStack_20 = param_2;
    local_18 = param_3;
    FUN_004084e0(param_1,param_4,param_5,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00408c90(void)

{
  FUN_00408c20();
  return;
}


void FUN_00408ca0(undefined param_1,undefined param_2,undefined param_3)

{
  FUN_00408c20(0,param_1,param_2,param_3,0xffffffffffffffff);
  return;
}


void FUN_00408cc0(undefined param_1,undefined param_2,undefined param_3,undefined param_4)

{
  FUN_00408c20(0,param_1,param_2,param_3,param_4);
  return;
}


void FUN_00408ce0(void)

{
  FUN_004084e0();
  return;
}


void FUN_00408cf0(undefined param_1,undefined param_2)

{
  FUN_004084e0(0,param_1,param_2,&DAT_006142e0);
  return;
}


void FUN_00408d10(undefined param_1,undefined param_2)

{
  FUN_004084e0(param_1,param_2,0xffffffffffffffff,&DAT_006142e0);
  return;
}


void FUN_00408d30(undefined param_1)

{
  FUN_004084e0(0,param_1,0xffffffffffffffff,&DAT_006142e0);
  return;
}


void FUN_00408d50(undefined param_1)

{
  FUN_0040aaa0(param_1,0,3);
  return;
}


undefined
FUN_00408d60(FILE *param_1,long param_2,undefined param_3,undefined param_4,undefined *param_5,
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
  uVar1 = dcgettext(0,&DAT_0041012b,5);
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
    goto LAB_00408fdc;
  case 5:
    uVar1 = param_5[3];
    uVar4 = param_5[2];
    uVar5 = param_5[1];
    uVar6 = *param_5;
    uVar7 = dcgettext(0,"Written by %s, %s, %s,\n%s, and %s.\n",5);
LAB_00408fdc:
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
    goto LAB_00409079;
  case 7:
    uVar1 = param_5[2];
    uVar4 = param_5[5];
    uVar5 = param_5[4];
    uVar6 = param_5[3];
    local_58 = param_5[1];
    uVar7 = *param_5;
    uVar3 = dcgettext(0,"Written by %s, %s, %s,\n%s, %s, %s, and %s.\n",5);
LAB_00409079:
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
    goto LAB_00408e5a;
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
LAB_00408e5a:
  uVar1 = __fprintf_chk(param_1,1,uVar3,uVar7,local_50,local_58,uVar6,uVar5,uVar4,uVar1,local_48);
  return uVar1;
}


void FUN_00409140(void)

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
  FUN_00408d60();
  return;
}


void FUN_00409160(void)

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
  FUN_00408d60();
  return;
}


void FUN_004091c0(void)

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
  FUN_00408d60();
  return;
}


void FUN_00409280(void)

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


void FUN_00409300(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00409550();
  }
  return;
}


void FUN_00409320(ulong param_1,ulong param_2)

{
  if ((-1 < SUB168(ZEXT816(param_1) * ZEXT816(param_2),0)) &&
     (SUB168(ZEXT816(param_1) * ZEXT816(param_2) >> 0x40,0) == 0)) {
    FUN_00409300();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00409550();
}


void thunk_FUN_00409300(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00409550();
  }
  return;
}


void * FUN_00409360(void *param_1,size_t param_2)

{
  void *pvVar1;
  
  if ((param_2 == 0) && (param_1 != (void *)0x0)) {
    free(param_1);
    return (void *)0x0;
  }
  pvVar1 = realloc(param_1,param_2);
  if ((pvVar1 == (void *)0x0) && (param_2 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00409550();
  }
  return pvVar1;
}


void FUN_004093a0(undefined param_1,ulong param_2,ulong param_3)

{
  if ((-1 < SUB168(ZEXT816(param_2) * ZEXT816(param_3),0)) &&
     (SUB168(ZEXT816(param_2) * ZEXT816(param_3) >> 0x40,0) == 0)) {
    FUN_00409360();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00409550();
}


void FUN_004093d0(long param_1,ulong *param_2,ulong param_3)

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
    if ((SUB168(ZEXT816(uVar2) * ZEXT816(param_3),0) < 0) || (uVar3 != 0)) goto LAB_0040942b;
  }
  else {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x5555555555555554);
    uVar3 = SUB168(auVar1 % ZEXT816(param_3),0);
    if (SUB168(auVar1 / ZEXT816(param_3),0) <= uVar2) {
LAB_0040942b:
                    /* WARNING: Subroutine does not return */
      FUN_00409550(param_1,param_2,uVar3);
    }
    uVar2 = (uVar2 >> 1) + 1 + uVar2;
  }
  *param_2 = uVar2;
  FUN_00409360(param_1,uVar2 * param_3);
  return;
}


void FUN_00409460(long param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (param_1 == 0) {
    if (uVar1 == 0) {
      *param_2 = 0x80;
      FUN_00409360(0,0x80);
      return;
    }
    if ((long)uVar1 < 0) goto LAB_004094aa;
  }
  else {
    if (0x5555555555555553 < uVar1) {
LAB_004094aa:
                    /* WARNING: Subroutine does not return */
      FUN_00409550();
    }
    uVar1 = (uVar1 >> 1) + 1 + uVar1;
  }
  *param_2 = uVar1;
  FUN_00409360(param_1,uVar1);
  return;
}


void FUN_004094b0(size_t param_1)

{
  void *__s;
  
  __s = (void *)FUN_00409300();
  memset(__s,0,param_1);
  return;
}


void FUN_004094d0(size_t param_1,ulong param_2)

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
  FUN_00409550();
}


void FUN_00409500(void *param_1,size_t param_2)

{
  void *__dest;
  
  __dest = (void *)FUN_00409300(param_2);
  memcpy(__dest,param_1,param_2);
  return;
}


void FUN_00409530(char *param_1)

{
  void *__dest;
  size_t sVar1;
  
  sVar1 = strlen(param_1);
  __dest = (void *)FUN_00409300(sVar1 + 1);
  memcpy(__dest,param_1,sVar1 + 1);
  return;
}


void FUN_00409550(void)

{
  undefined uVar1;
  
  uVar1 = dcgettext(0,"memory exhausted",5);
                    /* WARNING: Subroutine does not return */
  error(DAT_006142c0,0,"%s",uVar1);
}


long FUN_00409590(undefined param_1,undefined param_2,long param_3,long param_4,undefined param_5
                 ,undefined param_6,int param_7)

{
  int iVar1;
  int *piVar2;
  undefined uVar3;
  long local_40 [2];
  
  iVar1 = FUN_004096b0(param_1,0,param_2,local_40);
  if (iVar1 == 0) {
    if ((param_3 <= local_40[0]) && (local_40[0] <= param_4)) {
      return local_40[0];
    }
    piVar2 = __errno_location();
    if (local_40[0] < 0x40000000) {
      iVar1 = 0x22;
      if (local_40[0] < -0x40000000) {
        iVar1 = 0x4b;
      }
      *piVar2 = iVar1;
      goto LAB_004095e7;
    }
  }
  else {
    piVar2 = __errno_location();
    if (iVar1 != 1) {
      if (iVar1 == 3) {
        *piVar2 = 0;
      }
      goto LAB_004095e7;
    }
  }
  *piVar2 = 0x4b;
LAB_004095e7:
  uVar3 = FUN_00408d30(param_1);
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


void FUN_00409680(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                 undefined param_5,undefined param_6)

{
  FUN_00409590(param_1,10,param_2,param_3,param_4,param_5,param_6);
  return;
}


ulong FUN_004096b0(byte *param_1,byte **param_2,uint param_3,long *param_4,char *param_5)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  int *piVar4;
  long lVar5;
  ulong uVar6;
  char *pcVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  byte bVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  byte *local_40 [2];
  
  if (0x24 < param_3) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("0 <= strtol_base && strtol_base <= 36","lib/xstrtol.c",0x60,"xstrtoimax");
  }
  if (param_2 == (byte **)0x0) {
    param_2 = local_40;
  }
  piVar4 = __errno_location();
  *piVar4 = 0;
  lVar5 = __strtol_internal(param_1,param_2,param_3,0);
  pbVar3 = *param_2;
  if (pbVar3 == param_1) {
    if (param_5 == (char *)0x0) {
      return 4;
    }
    bVar1 = *pbVar3;
    if (bVar1 == 0) {
      return 4;
    }
    lVar5 = 1;
    uVar6 = 0;
    pcVar7 = strchr(param_5,(int)(char)bVar1);
    if (pcVar7 == (char *)0x0) {
      return 4;
    }
  }
  else {
    if (*piVar4 == 0) {
      uVar6 = 0;
    }
    else {
      if (*piVar4 != 0x22) {
        return 4;
      }
      uVar6 = 1;
    }
    uVar15 = (uint)uVar6;
    if ((param_5 == (char *)0x0) || (bVar1 = *pbVar3, bVar1 == 0)) goto LAB_00409727;
    pcVar7 = strchr(param_5,(int)(char)bVar1);
    if (pcVar7 == (char *)0x0) goto switchD_004097b2_caseD_1;
  }
  uVar15 = (uint)uVar6;
  uVar12 = bVar1 - 0x45;
  bVar11 = (byte)uVar12;
  if (((bVar11 < 0x30) && ((0x814400308945U >> ((ulong)uVar12 & 0x3f) & 1) != 0)) &&
     (pcVar7 = strchr(param_5,0x30), pcVar7 != (char *)0x0)) {
    bVar2 = pbVar3[1];
    if (bVar2 != 0x44) {
      if (bVar2 == 0x69) {
        iVar14 = 0x400;
        iVar13 = (pbVar3[2] == 0x42) + 1 + (uint)(pbVar3[2] == 0x42);
        goto LAB_004097a0;
      }
      if (bVar2 != 0x42) {
                    /* WARNING: Could not recover jumptable at 0x00409808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar6 = (*(code *)(&PTR_LAB_004106a8)[bVar11])();
        return uVar6;
      }
    }
    iVar13 = 2;
    iVar14 = 1000;
  }
  else {
    iVar13 = 1;
    iVar14 = 0x400;
  }
LAB_004097a0:
  switch(bVar1 - 0x42 & 0xff) {
  case 0:
    if (lVar5 < -0x20000000000000) goto LAB_00409948;
    if (lVar5 < 0x20000000000000) {
      lVar5 = lVar5 << 10;
    }
    else {
LAB_00409d00:
      lVar5 = 0x7fffffffffffffff;
      uVar6 = 1;
    }
    break;
  default:
switchD_004097b2_caseD_1:
    *param_4 = lVar5;
    return (ulong)(uVar15 | 2);
  case 3:
    lVar10 = (long)iVar14;
    iVar14 = 6;
    uVar12 = 0;
    do {
      if (lVar5 < SUB168((SEXT816(-0x8000000000000000) & (undefined)0xffffffffffffffff |
                         ZEXT816(0x8000000000000000)) / SEXT816(lVar10),0)) {
        lVar5 = -0x8000000000000000;
        uVar12 = 1;
      }
      else if (SUB168((SEXT816(0x7fffffffffffffff) & (undefined)0xffffffffffffffff |
                      ZEXT816(0x7fffffffffffffff)) / SEXT816(lVar10),0) < lVar5) {
        lVar5 = 0x7fffffffffffffff;
        uVar12 = 1;
      }
      else {
        lVar5 = lVar5 * lVar10;
      }
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
    goto LAB_00409cf0;
  case 5:
  case 0x25:
    lVar10 = (long)iVar14;
    iVar14 = 3;
    uVar12 = 0;
    do {
      if (lVar5 < SUB168((SEXT816(-0x8000000000000000) & (undefined)0xffffffffffffffff |
                         ZEXT816(0x8000000000000000)) / SEXT816(lVar10),0)) {
        lVar5 = -0x8000000000000000;
        uVar12 = 1;
      }
      else if (SUB168((SEXT816(0x7fffffffffffffff) & (undefined)0xffffffffffffffff |
                      ZEXT816(0x7fffffffffffffff)) / SEXT816(lVar10),0) < lVar5) {
        lVar5 = 0x7fffffffffffffff;
        uVar12 = 1;
      }
      else {
        lVar5 = lVar5 * lVar10;
      }
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
    goto LAB_00409cf0;
  case 9:
  case 0x29:
    if (lVar5 < SUB168((SEXT816(-0x8000000000000000) & (undefined)0xffffffffffffffff |
                       ZEXT816(0x8000000000000000)) / SEXT816((long)iVar14),0)) goto LAB_00409948;
    lVar8 = SUB168((SEXT816(0x7fffffffffffffff) & (undefined)0xffffffffffffffff |
                   ZEXT816(0x7fffffffffffffff)) / SEXT816((long)iVar14),0);
LAB_004098ec:
    if (lVar8 < lVar5) goto LAB_00409d00;
    lVar5 = lVar5 * iVar14;
    break;
  case 0xb:
  case 0x2b:
    lVar9 = (long)iVar14;
    lVar10 = SUB168((SEXT816(-0x8000000000000000) & (undefined)0xffffffffffffffff |
                    ZEXT816(0x8000000000000000)) / SEXT816(lVar9),0);
    if (lVar10 <= lVar5) {
      lVar8 = SUB168((SEXT816(0x7fffffffffffffff) & (undefined)0xffffffffffffffff |
                     ZEXT816(0x7fffffffffffffff)) / SEXT816(lVar9),0);
      if (lVar8 < lVar5) goto LAB_00409d00;
      lVar5 = lVar5 * lVar9;
      if (lVar10 <= lVar5) goto LAB_004098ec;
    }
LAB_00409948:
    lVar5 = -0x8000000000000000;
    uVar6 = 1;
    break;
  case 0xe:
    lVar10 = (long)iVar14;
    iVar14 = 5;
    uVar12 = 0;
    do {
      if (lVar5 < SUB168((SEXT816(-0x8000000000000000) & (undefined)0xffffffffffffffff |
                         ZEXT816(0x8000000000000000)) / SEXT816(lVar10),0)) {
        lVar5 = -0x8000000000000000;
        uVar12 = 1;
      }
      else if (SUB168((SEXT816(0x7fffffffffffffff) & (undefined)0xffffffffffffffff |
                      ZEXT816(0x7fffffffffffffff)) / SEXT816(lVar10),0) < lVar5) {
        lVar5 = 0x7fffffffffffffff;
        uVar12 = 1;
      }
      else {
        lVar5 = lVar5 * lVar10;
      }
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
    goto LAB_00409cf0;
  case 0x12:
  case 0x32:
    lVar10 = (long)iVar14;
    iVar14 = 4;
    uVar12 = 0;
    do {
      if (lVar5 < SUB168((SEXT816(-0x8000000000000000) & (undefined)0xffffffffffffffff |
                         ZEXT816(0x8000000000000000)) / SEXT816(lVar10),0)) {
        lVar5 = -0x8000000000000000;
        uVar12 = 1;
      }
      else if (SUB168((SEXT816(0x7fffffffffffffff) & (undefined)0xffffffffffffffff |
                      ZEXT816(0x7fffffffffffffff)) / SEXT816(lVar10),0) < lVar5) {
        lVar5 = 0x7fffffffffffffff;
        uVar12 = 1;
      }
      else {
        lVar5 = lVar5 * lVar10;
      }
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
    goto LAB_00409cf0;
  case 0x17:
    lVar10 = (long)iVar14;
    iVar14 = 8;
    uVar12 = 0;
    do {
      if (lVar5 < SUB168((SEXT816(-0x8000000000000000) & (undefined)0xffffffffffffffff |
                         ZEXT816(0x8000000000000000)) / SEXT816(lVar10),0)) {
        lVar5 = -0x8000000000000000;
        uVar12 = 1;
      }
      else if (SUB168((SEXT816(0x7fffffffffffffff) & (undefined)0xffffffffffffffff |
                      ZEXT816(0x7fffffffffffffff)) / SEXT816(lVar10),0) < lVar5) {
        lVar5 = 0x7fffffffffffffff;
        uVar12 = 1;
      }
      else {
        lVar5 = lVar5 * lVar10;
      }
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
    goto LAB_00409cf0;
  case 0x18:
    lVar10 = (long)iVar14;
    iVar14 = 7;
    uVar12 = 0;
    do {
      if (lVar5 < SUB168((SEXT816(-0x8000000000000000) & (undefined)0xffffffffffffffff |
                         ZEXT816(0x8000000000000000)) / SEXT816(lVar10),0)) {
        lVar5 = -0x8000000000000000;
        uVar12 = 1;
      }
      else if (SUB168((SEXT816(0x7fffffffffffffff) & (undefined)0xffffffffffffffff |
                      ZEXT816(0x7fffffffffffffff)) / SEXT816(lVar10),0) < lVar5) {
        lVar5 = 0x7fffffffffffffff;
        uVar12 = 1;
      }
      else {
        lVar5 = lVar5 * lVar10;
      }
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
LAB_00409cf0:
    uVar6 = (ulong)(uVar15 | uVar12);
    break;
  case 0x20:
    if (lVar5 < -0x40000000000000) goto LAB_00409948;
    if (0x3fffffffffffff < lVar5) goto LAB_00409d00;
    lVar5 = lVar5 << 9;
    break;
  case 0x21:
    break;
  case 0x35:
    if (lVar5 < -0x4000000000000000) goto LAB_00409948;
    if (0x3fffffffffffffff < lVar5) goto LAB_00409d00;
    lVar5 = lVar5 * 2;
  }
  *param_2 = pbVar3 + iVar13;
  if (pbVar3[iVar13] != 0) {
    uVar6 = (ulong)((uint)uVar6 | 2);
  }
LAB_00409727:
  *param_4 = lVar5;
  return uVar6;
}


ulong FUN_00409e00(byte *param_1,byte **param_2,uint param_3,long *param_4,char *param_5)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  int *piVar4;
  long lVar5;
  ulong uVar6;
  char *pcVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  byte bVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  byte *local_40 [2];
  
  if (0x24 < param_3) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("0 <= strtol_base && strtol_base <= 36","lib/xstrtol.c",0x60,"xstrtol");
  }
  if (param_2 == (byte **)0x0) {
    param_2 = local_40;
  }
  piVar4 = __errno_location();
  *piVar4 = 0;
  lVar5 = strtol((char *)param_1,(char **)param_2,param_3);
  pbVar3 = *param_2;
  if (pbVar3 == param_1) {
    if (param_5 == (char *)0x0) {
      return 4;
    }
    bVar1 = *pbVar3;
    if (bVar1 == 0) {
      return 4;
    }
    lVar5 = 1;
    uVar6 = 0;
    pcVar7 = strchr(param_5,(int)(char)bVar1);
    if (pcVar7 == (char *)0x0) {
      return 4;
    }
  }
  else {
    if (*piVar4 == 0) {
      uVar6 = 0;
    }
    else {
      if (*piVar4 != 0x22) {
        return 4;
      }
      uVar6 = 1;
    }
    uVar15 = (uint)uVar6;
    if ((param_5 == (char *)0x0) || (bVar1 = *pbVar3, bVar1 == 0)) goto LAB_00409e75;
    pcVar7 = strchr(param_5,(int)(char)bVar1);
    if (pcVar7 == (char *)0x0) goto switchD_00409f02_caseD_1;
  }
  uVar15 = (uint)uVar6;
  uVar12 = bVar1 - 0x45;
  bVar11 = (byte)uVar12;
  if (((bVar11 < 0x30) && ((0x814400308945U >> ((ulong)uVar12 & 0x3f) & 1) != 0)) &&
     (pcVar7 = strchr(param_5,0x30), pcVar7 != (char *)0x0)) {
    bVar2 = pbVar3[1];
    if (bVar2 != 0x44) {
      if (bVar2 == 0x69) {
        iVar14 = 0x400;
        iVar13 = (pbVar3[2] == 0x42) + 1 + (uint)(pbVar3[2] == 0x42);
        goto LAB_00409ef0;
      }
      if (bVar2 != 0x42) {
                    /* WARNING: Could not recover jumptable at 0x00409f58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar6 = (*(code *)(&PTR_LAB_004109e8)[bVar11])();
        return uVar6;
      }
    }
    iVar13 = 2;
    iVar14 = 1000;
  }
  else {
    iVar13 = 1;
    iVar14 = 0x400;
  }
LAB_00409ef0:
  switch(bVar1 - 0x42 & 0xff) {
  case 0:
    if (lVar5 < -0x20000000000000) goto LAB_0040a098;
    if (lVar5 < 0x20000000000000) {
      lVar5 = lVar5 << 10;
    }
    else {
LAB_0040a450:
      lVar5 = 0x7fffffffffffffff;
      uVar6 = 1;
    }
    break;
  default:
switchD_00409f02_caseD_1:
    *param_4 = lVar5;
    return (ulong)(uVar15 | 2);
  case 3:
    lVar10 = (long)iVar14;
    iVar14 = 6;
    uVar12 = 0;
    do {
      if (lVar5 < SUB168((SEXT816(-0x8000000000000000) & (undefined)0xffffffffffffffff |
                         ZEXT816(0x8000000000000000)) / SEXT816(lVar10),0)) {
        lVar5 = -0x8000000000000000;
        uVar12 = 1;
      }
      else if (SUB168((SEXT816(0x7fffffffffffffff) & (undefined)0xffffffffffffffff |
                      ZEXT816(0x7fffffffffffffff)) / SEXT816(lVar10),0) < lVar5) {
        lVar5 = 0x7fffffffffffffff;
        uVar12 = 1;
      }
      else {
        lVar5 = lVar5 * lVar10;
      }
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
    goto LAB_0040a440;
  case 5:
  case 0x25:
    lVar10 = (long)iVar14;
    iVar14 = 3;
    uVar12 = 0;
    do {
      if (lVar5 < SUB168((SEXT816(-0x8000000000000000) & (undefined)0xffffffffffffffff |
                         ZEXT816(0x8000000000000000)) / SEXT816(lVar10),0)) {
        lVar5 = -0x8000000000000000;
        uVar12 = 1;
      }
      else if (SUB168((SEXT816(0x7fffffffffffffff) & (undefined)0xffffffffffffffff |
                      ZEXT816(0x7fffffffffffffff)) / SEXT816(lVar10),0) < lVar5) {
        lVar5 = 0x7fffffffffffffff;
        uVar12 = 1;
      }
      else {
        lVar5 = lVar5 * lVar10;
      }
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
    goto LAB_0040a440;
  case 9:
  case 0x29:
    if (lVar5 < SUB168((SEXT816(-0x8000000000000000) & (undefined)0xffffffffffffffff |
                       ZEXT816(0x8000000000000000)) / SEXT816((long)iVar14),0)) goto LAB_0040a098;
    lVar8 = SUB168((SEXT816(0x7fffffffffffffff) & (undefined)0xffffffffffffffff |
                   ZEXT816(0x7fffffffffffffff)) / SEXT816((long)iVar14),0);
LAB_0040a03c:
    if (lVar8 < lVar5) goto LAB_0040a450;
    lVar5 = lVar5 * iVar14;
    break;
  case 0xb:
  case 0x2b:
    lVar9 = (long)iVar14;
    lVar10 = SUB168((SEXT816(-0x8000000000000000) & (undefined)0xffffffffffffffff |
                    ZEXT816(0x8000000000000000)) / SEXT816(lVar9),0);
    if (lVar10 <= lVar5) {
      lVar8 = SUB168((SEXT816(0x7fffffffffffffff) & (undefined)0xffffffffffffffff |
                     ZEXT816(0x7fffffffffffffff)) / SEXT816(lVar9),0);
      if (lVar8 < lVar5) goto LAB_0040a450;
      lVar5 = lVar5 * lVar9;
      if (lVar10 <= lVar5) goto LAB_0040a03c;
    }
LAB_0040a098:
    lVar5 = -0x8000000000000000;
    uVar6 = 1;
    break;
  case 0xe:
    lVar10 = (long)iVar14;
    iVar14 = 5;
    uVar12 = 0;
    do {
      if (lVar5 < SUB168((SEXT816(-0x8000000000000000) & (undefined)0xffffffffffffffff |
                         ZEXT816(0x8000000000000000)) / SEXT816(lVar10),0)) {
        lVar5 = -0x8000000000000000;
        uVar12 = 1;
      }
      else if (SUB168((SEXT816(0x7fffffffffffffff) & (undefined)0xffffffffffffffff |
                      ZEXT816(0x7fffffffffffffff)) / SEXT816(lVar10),0) < lVar5) {
        lVar5 = 0x7fffffffffffffff;
        uVar12 = 1;
      }
      else {
        lVar5 = lVar5 * lVar10;
      }
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
    goto LAB_0040a440;
  case 0x12:
  case 0x32:
    lVar10 = (long)iVar14;
    iVar14 = 4;
    uVar12 = 0;
    do {
      if (lVar5 < SUB168((SEXT816(-0x8000000000000000) & (undefined)0xffffffffffffffff |
                         ZEXT816(0x8000000000000000)) / SEXT816(lVar10),0)) {
        lVar5 = -0x8000000000000000;
        uVar12 = 1;
      }
      else if (SUB168((SEXT816(0x7fffffffffffffff) & (undefined)0xffffffffffffffff |
                      ZEXT816(0x7fffffffffffffff)) / SEXT816(lVar10),0) < lVar5) {
        lVar5 = 0x7fffffffffffffff;
        uVar12 = 1;
      }
      else {
        lVar5 = lVar5 * lVar10;
      }
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
    goto LAB_0040a440;
  case 0x17:
    lVar10 = (long)iVar14;
    iVar14 = 8;
    uVar12 = 0;
    do {
      if (lVar5 < SUB168((SEXT816(-0x8000000000000000) & (undefined)0xffffffffffffffff |
                         ZEXT816(0x8000000000000000)) / SEXT816(lVar10),0)) {
        lVar5 = -0x8000000000000000;
        uVar12 = 1;
      }
      else if (SUB168((SEXT816(0x7fffffffffffffff) & (undefined)0xffffffffffffffff |
                      ZEXT816(0x7fffffffffffffff)) / SEXT816(lVar10),0) < lVar5) {
        lVar5 = 0x7fffffffffffffff;
        uVar12 = 1;
      }
      else {
        lVar5 = lVar5 * lVar10;
      }
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
    goto LAB_0040a440;
  case 0x18:
    lVar10 = (long)iVar14;
    iVar14 = 7;
    uVar12 = 0;
    do {
      if (lVar5 < SUB168((SEXT816(-0x8000000000000000) & (undefined)0xffffffffffffffff |
                         ZEXT816(0x8000000000000000)) / SEXT816(lVar10),0)) {
        lVar5 = -0x8000000000000000;
        uVar12 = 1;
      }
      else if (SUB168((SEXT816(0x7fffffffffffffff) & (undefined)0xffffffffffffffff |
                      ZEXT816(0x7fffffffffffffff)) / SEXT816(lVar10),0) < lVar5) {
        lVar5 = 0x7fffffffffffffff;
        uVar12 = 1;
      }
      else {
        lVar5 = lVar5 * lVar10;
      }
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
LAB_0040a440:
    uVar6 = (ulong)(uVar15 | uVar12);
    break;
  case 0x20:
    if (lVar5 < -0x40000000000000) goto LAB_0040a098;
    if (0x3fffffffffffff < lVar5) goto LAB_0040a450;
    lVar5 = lVar5 << 9;
    break;
  case 0x21:
    break;
  case 0x35:
    if (lVar5 < -0x4000000000000000) goto LAB_0040a098;
    if (0x3fffffffffffffff < lVar5) goto LAB_0040a450;
    lVar5 = lVar5 * 2;
  }
  *param_2 = pbVar3 + iVar13;
  if (pbVar3[iVar13] != 0) {
    uVar6 = (ulong)((uint)uVar6 | 2);
  }
LAB_00409e75:
  *param_4 = lVar5;
  return uVar6;
}


void FUN_0040a550(int param_1,int param_2,undefined param_3,long param_4,undefined param_5)

{
  undefined uVar1;
  undefined uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined local_2a;
  undefined local_29;
  
  uVar1 = DAT_006142c0;
  if (param_1 - 1U < 4) {
    if (param_2 < 0) {
      puVar4 = &local_2a;
      puVar3 = &DAT_00410b70 + -(long)param_2;
      local_29 = 0;
      local_2a = param_3;
    }
    else {
      puVar3 = &DAT_00410b70;
      puVar4 = *(undefined **)(param_4 + (long)param_2 * 0x20);
    }
    uVar2 = dcgettext(0,(&PTR_s__s_s_argument___s__too_large_00410be0)[param_1 - 1U],5);
                    /* WARNING: Subroutine does not return */
    error(uVar1,0,uVar2,puVar3,puVar4,param_5);
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


ulong FUN_0040a5e0(byte *param_1,byte **param_2,uint param_3,ulong *param_4,char *param_5)

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
    if ((param_5 == (char *)0x0) || (bVar12 = *pbVar5, bVar12 == 0)) goto LAB_0040a682;
    pcVar7 = strchr(param_5,(int)(char)bVar12);
    if (pcVar7 == (char *)0x0) goto switchD_0040a76c_caseD_1;
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
        goto LAB_0040a75a;
      }
      if (bVar1 != 0x42) {
                    /* WARNING: Could not recover jumptable at 0x0040a741. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar6 = (*(code *)(&PTR_LAB_00410c00)[bVar8])();
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
LAB_0040a75a:
  iVar10 = (int)uVar11;
  switch(bVar12 - 0x42 & 0xff) {
  case 0:
    if (uVar6 >> 0x36 == 0) {
      uVar6 = uVar6 << 10;
      break;
    }
    goto LAB_0040a7c7;
  default:
switchD_0040a76c_caseD_1:
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
    goto LAB_0040a854;
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
    goto joined_r0x0040a78c;
  case 0xb:
  case 0x2b:
    auVar2 = ZEXT816(uVar6) * ZEXT816((ulong)(long)iVar10);
    if (SUB168(auVar2 >> 0x40,0) != 0) goto LAB_0040a7c7;
    auVar2 = (auVar2 & (undefined)0xffffffffffffffff) * ZEXT816((ulong)(long)iVar10);
joined_r0x0040a78c:
    uVar6 = SUB168(auVar2,0);
    if (SUB168(auVar2 >> 0x40,0) != 0) {
LAB_0040a7c7:
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
    goto LAB_0040a854;
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
    goto LAB_0040a854;
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
    goto LAB_0040a854;
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
LAB_0040a854:
    uVar14 = (ulong)(uVar13 | uVar9);
    break;
  case 0x20:
    if (uVar6 >> 0x37 != 0) goto LAB_0040a7c7;
    uVar6 = uVar6 << 9;
    break;
  case 0x21:
    break;
  case 0x35:
    if ((long)uVar6 < 0) goto LAB_0040a7c7;
    uVar6 = uVar6 * 2;
  }
  *param_2 = pbVar5 + iVar15;
  if (pbVar5[iVar15] != 0) {
    uVar14 = (ulong)((uint)uVar14 | 2);
  }
LAB_0040a682:
  *param_4 = uVar6;
  return uVar14;
}


int FUN_0040aa20(FILE *param_1)

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
      if (_Var4 == -1) goto LAB_0040aa87;
    }
    iVar1 = FUN_0040abe0(param_1);
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
LAB_0040aa87:
  iVar1 = fclose(param_1);
  return iVar1;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_0040aaa0(ulong param_1,int param_2,ulong param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  
  if (param_2 != 0x406) {
    iVar1 = fcntl((int)param_1,param_2,param_3);
    return iVar1;
  }
  if (DAT_006145d8 < 0) {
    iVar1 = FUN_0040aaa0(param_1,0,param_3 & 0xffffffff);
    if (iVar1 < 0) {
      return iVar1;
    }
    if (DAT_006145d8 != -1) {
      return iVar1;
    }
  }
  else {
    iVar1 = fcntl((int)param_1,0x406);
    if ((-1 < iVar1) || (piVar4 = __errno_location(), *piVar4 != 0x16)) {
      DAT_006145d8 = 1;
      return iVar1;
    }
    iVar1 = FUN_0040aaa0(param_1 & 0xffffffff,0,param_3 & 0xffffffff);
    if (iVar1 < 0) {
      return iVar1;
    }
    DAT_006145d8 = -1;
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


void FUN_0040abe0(FILE *param_1)

{
  int iVar1;
  
  if (param_1 != (FILE *)0x0) {
    iVar1 = __freading();
    if ((iVar1 != 0) && ((param_1->_flags & 0x100U) != 0)) {
      FUN_0040ac20(param_1,0,1);
      fflush(param_1);
      return;
    }
  }
  fflush(param_1);
  return;
}


ulong FUN_0040ac20(FILE *param_1,__off_t param_2,int param_3)

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


void FUN_0040ac80(long param_1,int *param_2)

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
      if (iVar3 <= iVar8) goto LAB_0040acfc;
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
      if (iVar9 <= iVar3) goto LAB_0040acfc;
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
LAB_0040acfc:
  param_2[0xc] = iVar2;
  param_2[0xb] = iVar1 + (iVar2 - iVar3);
  return;
}


int FUN_0040ad60(int param_1,undefined *param_2,char *param_3,char **param_4,undefined *param_5,
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
      if ((iVar5 == 0) && (sVar7 = strlen(__s1_00), sVar7 == sVar15)) goto LAB_0040af80;
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
            if (local_70 == (char *)0x0) goto LAB_0040aec0;
          }
          else if (local_70 == (char *)0x0) {
            local_70 = (char *)calloc((long)iVar5,1);
            if (local_70 == (char *)0x0) {
              bVar3 = true;
              goto LAB_0040aec0;
            }
            bVar4 = true;
            local_70[(int)local_44] = '\x01';
          }
          local_70[lVar16] = '\x01';
        }
      }
LAB_0040aec0:
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
LAB_0040af80:
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


uint FUN_0040b380(uint param_1,undefined *param_2,char *param_3,long param_4,undefined param_5,
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
LAB_0040b3ca:
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
          goto LAB_0040b4cd;
        }
        pbVar8 = *(byte **)(param_7 + 8);
      }
      param_7[10] = 0;
    }
LAB_0040b4cd:
    param_7[6] = 1;
    cVar2 = *param_3;
LAB_0040b4d8:
    if (cVar2 == ':') {
      uVar3 = 0;
    }
    if (pbVar8 == (byte *)0x0) goto LAB_0040b448;
LAB_0040b4ec:
    if (*pbVar8 == 0) goto LAB_0040b448;
  }
  else {
    if (param_7[6] == 0) goto LAB_0040b3ca;
    cVar2 = *param_3;
    pbVar8 = *(byte **)(param_7 + 8);
    if ((cVar2 - 0x2bU & 0xfd) != 0) goto LAB_0040b4d8;
    pcVar4 = param_3 + 1;
    param_3 = param_3 + 1;
    if (*pcVar4 == ':') {
      uVar3 = 0;
    }
    if (pbVar8 != (byte *)0x0) goto LAB_0040b4ec;
LAB_0040b448:
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
        FUN_0040ac80(param_2,param_7);
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
LAB_0040b5b6:
      if (uVar11 != param_1) {
        *param_7 = uVar11;
      }
      return 0xffffffff;
    }
    lVar6 = 3;
    pbVar8 = (byte *)param_2[(int)uVar11];
    pbVar9 = pbVar8;
    pbVar10 = &DAT_00410b70;
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
          FUN_0040ac80(param_2,param_7);
          uVar11 = param_7[0xb];
        }
      }
      param_7[0xc] = param_1;
      *param_7 = param_1;
      goto LAB_0040b5b6;
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
        puVar15 = &DAT_00410b70;
        goto LAB_0040b715;
      }
      if ((int)param_6 != 0) {
        if (pbVar8[2] == 0) {
          pcVar4 = strchr(param_3,(int)(char)bVar14);
          param_6 = param_6 & 0xffffffff;
          if (pcVar4 != (char *)0x0) goto LAB_0040b6c0;
        }
        *(byte **)(param_7 + 8) = pbVar8 + 1;
        uVar11 = FUN_0040ad60(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar3,
                              &DAT_00410b71);
        if (uVar11 != 0xffffffff) {
          return uVar11;
        }
        pbVar8 = (byte *)param_2[(int)*param_7];
      }
    }
LAB_0040b6c0:
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
  puVar15 = &DAT_00411055;
LAB_0040b715:
  uVar3 = FUN_0040ad60(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar3,puVar15);
  return uVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040b950(void)

{
  DAT_006145e0 = DAT_00614338._4_4_;
  _DAT_006145e4 = (undefined)DAT_00614338;
  FUN_0040b380();
  DAT_00614338._4_4_ = DAT_006145e0;
  DAT_00614630 = DAT_006145f0;
  _DAT_00614334 = DAT_006145e8;
  return;
}


void FUN_0040b9b0(void)

{
  FUN_0040b950();
  return;
}


void FUN_0040b9d0(void)

{
  FUN_0040b950();
  return;
}


void FUN_0040b9f0(void)

{
  FUN_0040b380();
  return;
}


void FUN_0040ba10(void)

{
  FUN_0040b950();
  return;
}


void FUN_0040ba30(void)

{
  FUN_0040b380();
  return;
}


size_t FUN_0040ba50(wchar_t *param_1,byte *param_2,size_t param_3,mbstate_t *param_4)

{
  char cVar1;
  size_t sVar2;
  wchar_t local_1c;
  
  if (param_2 == (byte *)0x0) {
    param_3 = 1;
    param_2 = &DAT_0040ce63;
  }
  else {
    if (param_3 == 0) {
      return 0xfffffffffffffffe;
    }
    if (param_1 != (wchar_t *)0x0) goto LAB_0040ba74;
  }
  param_1 = &local_1c;
LAB_0040ba74:
  sVar2 = mbrtowc(param_1,(char *)param_2,param_3,param_4);
  if ((0xfffffffffffffffd < sVar2) && (cVar1 = FUN_00405590(0), cVar1 == '\0')) {
    sVar2 = 1;
    *param_1 = (uint)*param_2;
  }
  return sVar2;
}


bool FUN_0040bad0(long param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 8) == '\0') {
    iVar1 = unsetenv("TZ");
  }
  else {
    iVar1 = setenv("TZ",(char *)(param_1 + 9),1);
  }
  if (iVar1 == 0) {
    tzset();
  }
  return iVar1 == 0;
}


void FUN_0040bb20(long *param_1)

{
  long *plVar1;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  do {
    plVar1 = (long *)*param_1;
    free(param_1);
    param_1 = plVar1;
  } while (plVar1 != (long *)0x0);
  return;
}


undefined FUN_0040bb50(undefined param_1)

{
  undefined uVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = __errno_location();
  iVar3 = *piVar2;
  uVar1 = FUN_0040bad0(param_1);
  if ((char)uVar1 == '\0') {
    iVar3 = *piVar2;
  }
  FUN_0040bb20(param_1);
  *piVar2 = iVar3;
  return uVar1;
}


undefined * FUN_0040bba0(char *param_1)

{
  ulong __n;
  size_t sVar1;
  undefined *puVar2;
  ulong uVar3;
  
  if (param_1 == (char *)0x0) {
    puVar2 = (undefined *)malloc(0x80);
    if (puVar2 != (undefined *)0x0) {
      *puVar2 = 0;
      *(undefined *)(puVar2 + 1) = 0;
      return puVar2;
    }
  }
  else {
    sVar1 = strlen(param_1);
    __n = sVar1 + 1;
    uVar3 = 0x76;
    if (0x75 < __n) {
      uVar3 = __n;
    }
    puVar2 = (undefined *)malloc(uVar3 + 0x11 & 0xfffffffffffffff8);
    if (puVar2 != (undefined *)0x0) {
      *puVar2 = 0;
      *(undefined *)(puVar2 + 1) = 1;
      memcpy((void *)((long)puVar2 + 9),param_1,__n);
      *(undefined *)((long)puVar2 + sVar1 + 10) = 0;
    }
  }
  return puVar2;
}


undefined FUN_0040bc30(long *param_1,char *param_2)

{
  char *__s2;
  long *plVar1;
  int iVar2;
  size_t sVar3;
  ulong uVar4;
  int *piVar5;
  long lVar6;
  char *__s1;
  
  __s2 = *(char **)(param_2 + 0x30);
  if (__s2 == (char *)0x0) {
    return 1;
  }
  if ((__s2 < param_2) || (param_2 + 0x38 <= __s2)) {
    __s1 = (char *)((long)param_1 + 9);
    if (*__s2 == '\0') {
      __s1 = "";
    }
    else {
LAB_0040bc78:
      iVar2 = strcmp(__s1,__s2);
      if (iVar2 != 0) {
        do {
          if (*__s1 == '\0') {
            if ((char *)((long)param_1 + 9) == __s1) {
              if (*(char *)(param_1 + 1) != '\0') goto LAB_0040bca3;
              sVar3 = strlen(__s2);
              sVar3 = sVar3 + 1;
              uVar4 = 0;
            }
            else {
              sVar3 = strlen(__s2);
              sVar3 = sVar3 + 1;
              uVar4 = (long)__s1 - (long)(char *)((long)param_1 + 9);
              if (~uVar4 < sVar3) {
                piVar5 = __errno_location();
                *piVar5 = 0xc;
                return 0;
              }
            }
            if (uVar4 + sVar3 < 0x77) {
              memcpy(__s1,__s2,sVar3);
              __s1[sVar3] = '\0';
            }
            else {
              lVar6 = FUN_0040bba0(__s2);
              *param_1 = lVar6;
              if (lVar6 == 0) {
                return 0;
              }
              *(undefined *)(lVar6 + 8) = 0;
              __s1 = (char *)(lVar6 + 9);
            }
            break;
          }
LAB_0040bca3:
          sVar3 = strlen(__s1);
          __s1 = __s1 + sVar3 + 1;
          if ((*__s1 != '\0') || (plVar1 = (long *)*param_1, plVar1 == (long *)0x0))
          goto LAB_0040bc78;
          __s1 = (char *)((long)plVar1 + 9);
          iVar2 = strcmp(__s1,__s2);
          param_1 = plVar1;
          if (iVar2 == 0) break;
        } while( true );
      }
    }
    *(char **)(param_2 + 0x30) = __s1;
  }
  return 1;
}


long FUN_0040bdb0(long param_1)

{
  char cVar1;
  int iVar2;
  char *__s2;
  long lVar3;
  int *piVar4;
  
  __s2 = getenv("TZ");
  if (__s2 == (char *)0x0) {
    if (*(char *)(param_1 + 8) == '\0') {
      return 1;
    }
  }
  else if (*(char *)(param_1 + 8) != '\0') {
    iVar2 = strcmp((char *)(param_1 + 9),__s2);
    if (iVar2 == 0) {
      return 1;
    }
  }
  lVar3 = FUN_0040bba0(__s2);
  if (lVar3 != 0) {
    cVar1 = FUN_0040bad0(param_1);
    if (cVar1 == '\0') {
      piVar4 = __errno_location();
      iVar2 = *piVar4;
      if (lVar3 != 1) {
        FUN_0040bb20(lVar3);
      }
      *piVar4 = iVar2;
      return 0;
    }
  }
  return lVar3;
}


void FUN_0040be60(long param_1)

{
  if (param_1 != 1) {
    FUN_0040bb20();
    return;
  }
  return;
}


tm * FUN_0040be80(long param_1,time_t *param_2,tm *param_3)

{
  char cVar1;
  long lVar2;
  tm *ptVar3;
  
  if (param_1 == 0) {
    ptVar3 = gmtime_r(param_2,param_3);
    return ptVar3;
  }
  lVar2 = FUN_0040bdb0();
  if (lVar2 != 0) {
    ptVar3 = localtime_r(param_2,param_3);
    if ((ptVar3 == (tm *)0x0) || (cVar1 = FUN_0040bc30(param_1,param_3), cVar1 == '\0')) {
      if (lVar2 != 1) {
        FUN_0040bb50(lVar2);
      }
    }
    else if ((lVar2 == 1) || (cVar1 = FUN_0040bb50(lVar2), cVar1 != '\0')) {
      return param_3;
    }
  }
  return (tm *)0x0;
}


long FUN_0040bf30(long param_1,uint *param_2)

{
  char cVar1;
  long lVar2;
  tm *ptVar3;
  long local_60;
  tm local_58;
  
  if (param_1 == 0) {
    lVar2 = FUN_0040c050(param_2);
    return lVar2;
  }
  lVar2 = FUN_0040bdb0();
  if (lVar2 != 0) {
    local_60 = FUN_0040cd00(param_2);
    if (((local_60 != -1) ||
        (((ptVar3 = localtime_r(&local_60,&local_58), ptVar3 != (tm *)0x0 &&
          ((((param_2[8] == 0) == (local_58.tm_isdst == 0) || ((int)param_2[8] < 0)) ||
           (local_58.tm_isdst < 0)))) &&
         ((param_2[4] ^ local_58.tm_mon | param_2[5] ^ local_58.tm_year |
           param_2[3] ^ local_58.tm_mday | param_2[2] ^ local_58.tm_hour |
           param_2[1] ^ local_58.tm_min | *param_2 ^ local_58.tm_sec) == 0)))) &&
       (cVar1 = FUN_0040bc30(param_1,param_2), cVar1 == '\0')) {
      local_60 = -1;
    }
    if (lVar2 == 1) {
      return local_60;
    }
    cVar1 = FUN_0040bb50(lVar2);
    if (cVar1 != '\0') {
      return local_60;
    }
  }
  return -1;
}


void FUN_0040c050(long param_1)

{
  *(undefined *)(param_1 + 0x20) = 0;
  FUN_0040c8c0(param_1,gmtime_r,&DAT_00614618);
  return;
}


ulong FUN_0040c070(uint *param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  
  lVar2 = __fpending();
  uVar1 = *param_1;
  uVar3 = FUN_0040aa20(param_1);
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

char * FUN_0040c0d0(void)

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
  if (DAT_00614620 != (char *)0x0) goto LAB_0040c10a;
  pcVar7 = getenv("CHARSETALIASDIR");
  if ((pcVar7 == (char *)0x0) || (*pcVar7 == '\0')) {
    sVar6 = 0x73;
    sVar5 = 0x65;
    __n = 100;
    pcVar7 = 
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib"
    ;
LAB_0040c1f5:
    __file = (char *)malloc(sVar6);
    if (__file != (char *)0x0) {
      memcpy(__file,pcVar7,__n);
      __file[__n] = '/';
      goto LAB_0040c216;
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
        goto LAB_0040c1f5;
      }
      sVar6 = __n + 0xe;
    }
    __file = (char *)malloc(sVar6);
    if (__file != (char *)0x0) {
      memcpy(__file,pcVar7,__n);
      sVar5 = __n;
LAB_0040c216:
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
LAB_0040c2b0:
          pbVar8 = (byte *)__stream->_IO_read_ptr;
          if (__stream->_IO_read_end <= pbVar8) goto LAB_0040c43c;
          do {
            __stream->_IO_read_ptr = (char *)(pbVar8 + 1);
            uVar4 = (uint)*pbVar8;
            __ptr = pcVar7;
            while( true ) {
              pcVar7 = __ptr;
              if ((uVar4 - 9 < 2) || (uVar4 == 0x20)) goto LAB_0040c2b0;
              if (uVar4 == 0x23) goto LAB_0040c4a1;
              ungetc(uVar4,__stream);
              iVar2 = fscanf(__stream,"%50s %50s",&local_b8,&local_78);
              puVar13 = &local_b8;
              if (iVar2 < 2) goto LAB_0040c44f;
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
                FUN_0040aa20(__stream);
                goto LAB_0040c254;
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
LAB_0040c43c:
              uVar4 = __uflow(__stream);
              __ptr = pcVar7;
              if (uVar4 == 0xffffffff) goto LAB_0040c44f;
            }
          } while( true );
        }
        close(iVar2);
      }
      goto LAB_0040c24e;
    }
  }
  DAT_00614620 = "";
LAB_0040c10a:
  cVar1 = *DAT_00614620;
  pcVar7 = DAT_00614620;
  do {
    if (cVar1 == '\0') {
LAB_0040c164:
      if (*__s1 == '\0') {
        __s1 = "ASCII";
      }
      return __s1;
    }
    iVar2 = strcmp(__s1,pcVar7);
    if ((iVar2 == 0) || ((cVar1 == '*' && (pcVar7[1] == '\0')))) {
      sVar6 = strlen(pcVar7);
      __s1 = pcVar7 + sVar6 + 1;
      goto LAB_0040c164;
    }
    sVar6 = strlen(pcVar7);
    sVar5 = strlen(pcVar7 + sVar6 + 1);
    pcVar7 = pcVar7 + sVar6 + 1 + sVar5 + 1;
    cVar1 = *pcVar7;
  } while( true );
LAB_0040c4a1:
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
  if (uVar4 == 0xffffffff) goto LAB_0040c44f;
  goto LAB_0040c2b0;
LAB_0040c44f:
  FUN_0040aa20(__stream);
  if (local_d0 == 0) {
LAB_0040c24e:
    pcVar7 = "";
  }
  else {
    pcVar7[local_d0] = '\0';
  }
LAB_0040c254:
  free(__file);
  DAT_00614620 = pcVar7;
  goto LAB_0040c10a;
}


long FUN_0040c640(ulong param_1,long param_2,int param_3,int param_4,int param_5,uint param_6,
                 int param_7,int param_8,int param_9,int param_10)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = ((int)((long)param_1 >> 2) + 0x1db) - (uint)((param_1 & 3) == 0);
  iVar4 = ((int)((long)(int)param_6 >> 2) + 0x1db) - (uint)((param_6 & 3) == 0);
  iVar2 = iVar3 / 0x19 + (iVar3 % 0x19 >> 0x1f);
  iVar1 = iVar4 / 0x19 + (iVar4 % 0x19 >> 0x1f);
  return ((long)param_5 +
         (((long)param_4 +
          (((long)param_3 +
           (((param_2 + (param_1 - (long)(int)param_6) * 0x16d) - (long)param_7) +
           (long)(((iVar2 >> 2) - (iVar1 >> 2)) + ((iVar3 - iVar4) - (iVar2 - iVar1)))) * 0x18) -
          (long)param_8) * 0x3c) - (long)param_9) * 0x3c) - (long)param_10;
}


long FUN_0040c760(void)

{
  long lVar1;
  long in_R9;
  long param_7;
  
  if (param_7 != 0) {
    lVar1 = FUN_0040c640();
    if (!SCARRY8(lVar1,in_R9)) {
      return lVar1 + in_R9;
    }
  }
  if (-1 < in_R9) {
    lVar1 = 0x7fffffffffffffff;
    if (0x7ffffffffffffffd < in_R9) {
      lVar1 = in_R9 + -1;
    }
    return lVar1;
  }
  if (in_R9 < -0x7ffffffffffffffe) {
    return in_R9 + 1;
  }
  return -0x8000000000000000;
}


void FUN_0040c800(code *param_1,long *param_2,undefined param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long local_30;
  
  local_30 = *param_2;
  lVar2 = (*param_1)(&local_30,param_3);
  if (lVar2 == 0) {
    lVar1 = 0;
    lVar5 = *param_2;
    if (*param_2 != 0) {
      while ((lVar4 = lVar1,
             lVar3 = (ulong)(((uint)lVar4 | (uint)lVar5) & 1) + (lVar5 >> 1) + (lVar4 >> 1),
             lVar4 == lVar3 || (lVar5 == lVar3))) {
        local_30 = lVar3;
        lVar2 = (*param_1)(&local_30,param_3);
        lVar1 = lVar3;
        if (lVar2 == 0) {
          lVar1 = lVar4;
          lVar5 = lVar3;
        }
      }
      if ((lVar2 == 0) && (lVar4 != 0)) {
        local_30 = lVar4;
        (*param_1)(&local_30,param_3);
        return;
      }
    }
  }
  return;
}


long FUN_0040c8c0(int *param_1,code *param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  undefined uVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  int iVar13;
  long lVar14;
  int iVar15;
  int iVar16;
  long lVar17;
  long lVar18;
  bool bVar19;
  int local_e0;
  long local_c8;
  long local_c0;
  int local_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  int local_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  int local_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  undefined local_88;
  long local_78 [4];
  int local_58;
  
  iVar1 = *param_1;
  iVar2 = param_1[1];
  iVar3 = param_1[2];
  iVar4 = param_1[8];
  uVar11 = 0;
  iVar15 = param_1[4] % 0xc;
  uVar5 = iVar15 >> 0x1f;
  uVar12 = (long)(int)(param_1[4] / 0xc + uVar5) + (long)param_1[5];
  if ((uVar12 & 3) == 0) {
    uVar11 = 1;
    if (uVar12 == ((long)uVar12 / 100) * 100) {
      uVar11 = (uint)(((uint)((long)uVar12 / 100) & 3) == 1);
    }
  }
  iVar13 = 6;
  lVar14 = (long)param_1[3] +
           (long)(int)(*(ushort *)
                        (&DAT_00411100 +
                        ((long)(int)(iVar15 + (uVar5 & 0xc)) + (long)(int)uVar11 * 0xd) * 2) - 1);
  iVar15 = 0x3b;
  if (iVar1 < 0x3c) {
    iVar15 = iVar1;
  }
  iVar6 = 0;
  if (-1 < iVar15) {
    iVar6 = iVar15;
  }
  local_e0 = (int)*param_3;
  lVar7 = FUN_0040c640(uVar12,lVar14,iVar3,iVar2,iVar6,0x46,0,0,0,-local_e0);
  bVar19 = false;
  lVar17 = lVar7;
  lVar18 = lVar7;
  local_c8 = lVar7;
  while( true ) {
    uVar8 = FUN_0040c800(param_2,&local_c8,&local_b8);
    lVar10 = local_c8;
    lVar9 = FUN_0040c760(uVar12,lVar14,iVar3,iVar2,iVar6,local_c8,uVar8);
    if (lVar10 == lVar9) break;
    if ((lVar10 == lVar17) && (lVar10 != lVar18)) {
      if (local_98 < 0) goto LAB_0040cad0;
      if (iVar4 < 0) {
        if (bVar19 <= (local_98 != 0)) goto LAB_0040cad0;
      }
      else if ((iVar4 != 0) != (local_98 != 0)) goto LAB_0040cad0;
    }
    iVar13 = iVar13 + -1;
    if (iVar13 == 0) goto LAB_0040cb80;
    bVar19 = local_98 != 0;
    lVar17 = lVar18;
    lVar18 = lVar10;
    local_c8 = lVar9;
  }
  lVar10 = lVar9;
  if ((((iVar4 == 0) != (local_98 == 0)) && (-1 < iVar4)) && (-1 < local_98)) {
    iVar15 = 0x92c70;
    do {
      iVar16 = 2;
      iVar13 = -iVar15;
      bVar19 = SCARRY8((long)iVar13,lVar10);
      local_c0 = iVar13 + lVar10;
      while( true ) {
        if (!bVar19) {
          uVar8 = 0x40cc85;
          FUN_0040c800(param_2,&local_c0,local_78);
          if (((iVar4 == 0) == (local_58 == 0)) || (lVar10 = local_c8, local_58 < 0)) {
            local_c8 = FUN_0040c760(uVar12,lVar14,iVar3,iVar2,iVar6,local_c0,local_78);
            FUN_0040c800(param_2,&local_c8,&local_b8,uVar8);
            lVar10 = local_c8;
            goto LAB_0040cad0;
          }
        }
        iVar13 = iVar13 + iVar15 * 2;
        if (iVar16 == 1) break;
        iVar16 = 1;
        bVar19 = SCARRY8((long)iVar13,lVar10);
        local_c0 = iVar13 + lVar10;
      }
      iVar15 = iVar15 + 0x92c70;
    } while (iVar15 != 0x100dc400);
  }
LAB_0040cad0:
  *param_3 = lVar10 - (-local_e0 + lVar7);
  local_c8 = lVar10;
  if ((local_b8 == iVar1) ||
     ((lVar14 = (long)iVar1 + ((ulong)(iVar1 < 1 && local_b8 == 0x3c) - (long)iVar6),
      local_c8 = lVar10 + lVar14, !SCARRY8(lVar10,lVar14) &&
      (local_78[0] = local_c8, lVar14 = (*param_2)(local_78,&local_b8), lVar14 != 0)))) {
    *param_1 = local_b8;
    param_1[1] = iStack_b4;
    param_1[2] = iStack_b0;
    param_1[3] = iStack_ac;
    param_1[4] = local_a8;
    param_1[5] = iStack_a4;
    param_1[6] = iStack_a0;
    param_1[7] = iStack_9c;
    param_1[8] = local_98;
    param_1[9] = iStack_94;
    param_1[10] = iStack_90;
    param_1[0xb] = iStack_8c;
    *(undefined *)(param_1 + 0xc) = local_88;
  }
  else {
LAB_0040cb80:
    local_c8 = -1;
  }
  return local_c8;
}


void FUN_0040cd00(undefined param_1)

{
  tzset();
  FUN_0040c8c0(param_1,localtime_r,&DAT_00614628);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040cd53) */
/* WARNING: Removing unreachable block (ram,0x0040cd58) */

void FUN_0040cd20(void)

{
  __DT_INIT();
  return;
}


void FUN_0040cd80(void)

{
  return;
}


void FUN_0040cd90(undefined param_1)

{
  __cxa_atexit(param_1,0,DAT_00614268);
  return;
}


undefined FUN_0040cda8(undefined param_1,undefined param_2,undefined param_3)

{
  code **ppcVar1;
  
  for (ppcVar1 = (code **)&DAT_00613e30; *ppcVar1 != (code *)0xffffffffffffffff;
      ppcVar1 = ppcVar1 + -1) {
    (**ppcVar1)();
  }
  return param_3;
}


void __DT_FINI(void)

{
  FUN_00402651();
  return;
}

