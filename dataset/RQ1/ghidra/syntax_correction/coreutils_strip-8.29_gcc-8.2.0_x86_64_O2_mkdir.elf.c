
#include "decompile_ghidra.h"
#define __int64 long long
#define __int32 int
#define __int16 short
#define __int8 char

void switchD_00403060caseD_b(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401be5(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401bea(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401bef(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401bf4(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void switchD_004050aacaseD_0(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void switchD_00407a4ccaseD_5(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Could not reconcile some variable overlaps */

void FUN_00401c10(int param_1,undefined *param_2)

{
  code *pcVar1;
  long lVar2;
  int iVar3;
  __mode_t __mask;
  uint uVar4;
  undefined uVar5;
  void *__ptr;
  undefined uVar6;
  long lVar7;
  undefined auVar8 [16];
  code *local_48;
  __mode_t local_40;
  undefined local_3c;
  undefined local_34;
  undefined local_30;
  
  local_48 = (code *)0x0;
  local_30 = 0;
  local_3c = 0x1ff;
  local_34 = 0;
  FUN_00402e70(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils",
                 "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale"
                );
  textdomain("coreutils");
  FUN_00409f00(FUN_00402570);
  lVar2 = 0;
  do {
    while (lVar7 = lVar2, iVar3 = FUN_004065a0(param_1,param_2,"pm:vZ",&PTR_s_context_0040a520,0),
          lVar2 = lVar7, iVar3 == -1) {
      if (DAT_0060e2bc != param_1) {
        if (local_48 == (code *)0x0) {
          if (lVar7 == 0) goto LAB_00401e13;
          __mask = umask(0);
          umask(__mask);
        }
        else {
          __mask = umask(0);
          umask(__mask);
          if (lVar7 == 0) {
            local_3c = CONCAT44(local_3c._4_4_,0x1ff);
            local_40 = __mask;
            goto LAB_00401e13;
          }
        }
        local_40 = __mask;
        __ptr = (void *)FUN_00402920(lVar7);
        if (__ptr == (void *)0x0) {
          uVar5 = FUN_00404a90(lVar7);
          uVar6 = dcgettext(0,"invalid mode %s",5);
          auVar8 = error(1,0,uVar6,uVar5);
          pcVar1 = local_48;
          local_48 = SUB168(auVar8,0);
          (*(code *)PTR___libc_start_main_0060dff0)
                    (FUN_00401c10,pcVar1,&local_40,FUN_00409e90,FUN_00409ef0,
                     SUB168(auVar8 >> 0x40,0),&local_48);
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
        uVar4 = FUN_00402cf0(0x1ff,1,__mask,__ptr,(long)&local_3c + 4);
        local_3c = local_3c & 0xffffffff00000000 | (ulong)uVar4;
        free(__ptr);
LAB_00401e13:
        FUN_00404ed0(param_1 - DAT_0060e2bc,param_2 + DAT_0060e2bc,FUN_00401f70,&local_48);
        return;
      }
      uVar5 = dcgettext(0,"missing operand",5);
      error(0,0,uVar5);
LAB_00401d15:
      do {
        iVar3 = FUN_00402100(1);
 INVALID_JUMP; //LAB_00401d20:
      } while (iVar3 != -0x82);
      FUN_00402100(0);
LAB_00401d30:
      lVar2 = lVar7;
      if (DAT_0060e4a8 != 0) {
        uVar5 = dcgettext(0,
                          "warning: ignoring --context; it requires an SELinux/SMACK-enabled kernel"
                          ,5);
        error(0,0,uVar5);
      }
    }
    if (iVar3 == 0x5a) goto LAB_00401d30;
    if (iVar3 < 0x5b) {
      if (iVar3 != -0x83) goto LAB_00401d20;
      FUN_00405480(stdout,&DAT_00409f64,"GNU coreutils",PTR_DAT_0060e250,"David MacKenzie",0);
                    /* WARNING: Subroutine does not return */
      exit(0);
    }
    if (iVar3 == 0x70) {
      local_48 = FUN_00402060;
    }
    else if (iVar3 == 0x76) {
      local_30 = dcgettext(0,"created directory %s",5);
    }
    else {
      lVar2 = DAT_0060e4a8;
      if (iVar3 != 0x6d) goto LAB_00401d15;
    }
  } while( true );
}


void FUN_00401e90(undefined param_1,undefined param_2,undefined param_3)

{
  undefined unaff_retaddr;
  undefined auStack_8 [8];
  
  (*(code *)PTR___libc_start_main_0060dff0)
            (FUN_00401c10,unaff_retaddr,&stack0x00000008,FUN_00409e90,FUN_00409ef0,param_3,auStack_8
            );
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* WARNING: Removing unreachable block (ram,0x00401ec8) */
/* WARNING: Removing unreachable block (ram,0x00401ed2) */

void FUN_00401ebb(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00401f09) */

void FUN_00401eda(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00401f46) */

void FUN_00401f11(void)

{
  if (DAT_0060e2e8 != '\0') {
    return;
  }
  FUN_00401ebb();
  DAT_0060e2e8 = 1;
  return;
}


/* WARNING: Removing unreachable block (ram,0x00401f09) */

void thunk_FUN_00401eda(void)

{
  return;
}


byte FUN_00401f70(undefined param_1,undefined param_2,long *param_3)

{
  long lVar1;
  byte bVar2;
  int *piVar3;
  
  lVar1 = *param_3;
  if ((*(char *)((long)param_3 + 0x14) != '\0') && (lVar1 == 0)) {
    piVar3 = __errno_location();
    *piVar3 = 0x5f;
  }
  bVar2 = FUN_00402610(param_1,param_2,lVar1,param_3,*(undefined *)((long)param_3 + 0xc),
                       FUN_00402040,*(undefined *)(param_3 + 2),0xffffffffffffffff,
                       0xffffffffffffffff,1);
  if ((((bVar2 ^ 1) == 0) && (*(char *)((long)param_3 + 0x14) != '\0')) && (*param_3 != 0)) {
    piVar3 = __errno_location();
    *piVar3 = 0x5f;
  }
  return bVar2 ^ 1;
}


void FUN_00402010(undefined param_1,long param_2)

{
  undefined uVar1;
  
  uVar1 = FUN_00404840(4,param_1);
  FUN_00402460(stdout,*(undefined *)(param_2 + 0x18),uVar1);
  return;
}


void FUN_00402040(undefined param_1,long param_2)

{
  if (*(long *)(param_2 + 0x18) != 0) {
    FUN_00402010();
    return;
  }
  return;
}


uint FUN_00402060(undefined param_1,char *param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  if (*(char *)(param_3 + 0x14) != '\0') {
    piVar3 = __errno_location();
    *piVar3 = 0x5f;
  }
  if ((*(uint *)(param_3 + 8) & 0xc0) == 0) {
    uVar2 = mkdir(param_2,0x1ff);
  }
  else {
    umask(*(uint *)(param_3 + 8) & 0xffffff3f);
    uVar2 = mkdir(param_2,0x1ff);
    piVar3 = __errno_location();
    iVar1 = *piVar3;
    umask(*(__mode_t *)(param_3 + 8));
    *piVar3 = iVar1;
  }
  if ((uVar2 == 0) && (uVar2 = *(uint *)(param_3 + 8) >> 8 & 1, *(long *)(param_3 + 0x18) != 0)) {
    FUN_00402010(param_1,param_3);
  }
  return uVar2;
}


void FUN_00402100(int param_1)

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
  
  uVar7 = DAT_0060e308;
  bVar13 = 0;
  if (param_1 != 0) {
    uVar3 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(stderr,1,uVar3,uVar7);
    goto LAB_0040213f;
  }
  uVar3 = dcgettext(0,"Usage: %s [OPTION]... DIRECTORY...\n",5);
  __printf_chk(1,uVar3,uVar7);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"Create the DIRECTORY(ies), if they do not already exist.\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nMandatory arguments to long options are mandatory for short options too.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -m, --mode=MODE   set file mode (as in chmod), not a=rwx - umask\n  -p, --parents     no error if existing, make parent directories as needed\n  -v, --verbose     print a message for each created directory\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -Z                   set SELinux security context of each created directory\n                         to the default type\n      --context[=CTX]  like -Z, or if CTX is specified then set the SELinux\n                         or SMACK security context to CTX\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"      --help     display this help and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"      --version  output version information and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  local_88 = &DAT_00409f6a;
  local_80 = "test invocation";
  local_78[0] = (byte *)0x409fe4;
  local_78[1] = (byte *)0x409f7c;
  local_78[2] = (byte *)0x409f92;
  local_78[3] = (byte *)0x409f9c;
  local_78[4] = (byte *)0x409fab;
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
    lVar8 = 6;
    pbVar10 = &DAT_00409f64;
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
        pbVar9 = &DAT_00409f64;
        goto LAB_00402433;
      }
    }
    pbVar9 = &DAT_00409f64;
    uVar7 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    pcVar4 = " invocation";
    __printf_chk(1,uVar7,"https://www.gnu.org/software/coreutils/",&DAT_00409f64);
  }
  else {
    uVar7 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar7,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
      iVar2 = strncmp(pcVar4,"en_",3);
      if (iVar2 != 0) {
LAB_00402433:
        uVar7 = dcgettext(0,"Report %s translation bugs to <https://translationproject.org/team/>\n"
                          ,5);
        __printf_chk(1,uVar7,&DAT_00409f64);
      }
    }
    pcVar4 = " invocation";
    uVar7 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    __printf_chk(1,uVar7,"https://www.gnu.org/software/coreutils/",&DAT_00409f64);
    if (pbVar9 != &DAT_00409f64) {
      pcVar4 = "";
    }
  }
  uVar7 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(1,uVar7,pbVar9,pcVar4);
LAB_0040213f:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}


void FUN_00402460(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                 undefined param_5,undefined param_6,undefined param_7,undefined param_8,
                 FILE *param_9,undefined param_10,undefined param_11,undefined param_12,
                 undefined param_13,undefined param_14)

{
  char *pcVar1;
  char in_AL;
  undefined local_e0;
  undefined local_dc;
  undefined *local_d8;
  undefined *local_d0;
  undefined local_c8 [16];
  undefined local_b8;
  undefined local_b0;
  undefined local_a8;
  undefined local_a0;
  undefined local_98;
  undefined local_88;
  undefined local_78;
  undefined local_68;
  undefined local_58;
  undefined local_48;
  undefined local_38;
  undefined local_28;
  
  if (in_AL != '\0') {
    local_98 = param_1;
    local_88 = param_2;
    local_78 = param_3;
    local_68 = param_4;
    local_58 = param_5;
    local_48 = param_6;
    local_38 = param_7;
    local_28 = param_8;
  }
  local_b8 = param_11;
  local_b0 = param_12;
  local_a8 = param_13;
  local_a0 = param_14;
  fputs_unlocked(DAT_0060e308,param_9);
  fwrite_unlocked(&DAT_0040a600,1,2,param_9);
  local_d8 = &stack0x00000008;
  local_e0 = 0x10;
  local_d0 = local_c8;
  local_dc = 0x30;
  FUN_004066a0(param_9,param_10,&local_e0);
  pcVar1 = param_9->_IO_write_ptr;
  if (pcVar1 < param_9->_IO_write_end) {
    param_9->_IO_write_ptr = pcVar1 + 1;
    *pcVar1 = '\n';
  }
  else {
    __overflow(param_9,10);
  }
  return;
}


void FUN_00402550(undefined param_1)

{
  DAT_0060e300 = param_1;
  return;
}


void FUN_00402560(undefined param_1)

{
  DAT_0060e2f8 = param_1;
  return;
}


void FUN_00402570(void)

{
  int iVar1;
  int *piVar2;
  undefined uVar3;
  undefined uVar4;
  
  iVar1 = FUN_00406760(stdout);
  if (iVar1 != 0) {
    piVar2 = __errno_location();
    if ((DAT_0060e2f8 == '\0') || (*piVar2 != 0x20)) {
      uVar3 = dcgettext(0,"write error",5);
      if (DAT_0060e300 == 0) {
        error(0,*piVar2,"%s",uVar3);
      }
      else {
        uVar4 = FUN_004048e0();
        error(0,*piVar2,"%s: %s",uVar4,uVar3);
      }
      goto LAB_004025ee;
    }
  }
  iVar1 = FUN_00406760(stderr);
  if (iVar1 == 0) {
    return;
  }
LAB_004025ee:
                    /* WARNING: Subroutine does not return */
  _exit(DAT_0060e258);
}


/* WARNING: Type propagation algorithm not settling */

undefined
FUN_00402610(char *param_1,int *param_2,long param_3,undefined param_4,uint param_5,code *param_6,
            uint param_7,uint param_8,uint param_9,char param_10)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  undefined uVar5;
  undefined uVar6;
  char *pcVar7;
  uint local_dc;
  stat local_c8;
  
  if (((*param_1 == '/') || (*param_2 != 4)) || (iVar1 = param_2[1], iVar1 == 0)) {
    pcVar7 = param_1;
    if (param_3 != 0) {
      lVar3 = FUN_00406de0(param_1,param_2,param_3,param_4);
      if (lVar3 < 0) {
        if (lVar3 != -1) {
          return 1;
        }
        piVar4 = __errno_location();
        iVar1 = *piVar4;
        goto LAB_00402710;
      }
      pcVar7 = param_1 + lVar3;
    }
    if ((param_8 & param_9) == 0xffffffff) {
      if ((param_7 & 0xc00 | param_5 & 0x200) != 0) {
        local_dc = param_5 & 0xffffffed;
        goto LAB_004026b5;
      }
      iVar1 = mkdir(pcVar7,param_5);
      if (iVar1 != 0) goto LAB_004026cc;
      (*param_6)(param_1,param_4);
      if ((param_7 & param_5 & 0x1ff) != 0) {
        uVar5 = 3;
        local_dc = param_5;
        goto LAB_004027fd;
      }
    }
    else {
      local_dc = param_5 & 0xffffffc0;
LAB_004026b5:
      iVar1 = mkdir(pcVar7,local_dc);
      if (iVar1 == 0) {
        (*param_6)(param_1,param_4);
        uVar5 = 3;
      }
      else {
LAB_004026cc:
        piVar4 = __errno_location();
        iVar1 = *piVar4;
        if (param_10 != '\0') {
          if ((iVar1 != 0) &&
             (((iVar1 == 2 || (param_3 == 0)) ||
              ((iVar2 = __xstat(1,pcVar7,&local_c8), iVar2 != 0 ||
               ((local_c8.st_mode & 0xf000) != 0x4000)))))) goto LAB_00402710;
          goto LAB_004027b5;
        }
        local_dc = 0xffffffff;
        uVar5 = 2;
      }
LAB_004027fd:
      iVar2 = FUN_00404ae0(param_2,pcVar7,uVar5,&local_c8);
      if (-2 < iVar2) {
        if (iVar2 == 0) {
          pcVar7 = ".";
        }
        iVar2 = FUN_00406f70((undefined)local_c8.st_dev,pcVar7,local_dc,param_8,param_9,param_5,
                             param_7);
        if (iVar2 != 0) {
          if ((iVar1 == 0) ||
             (((iVar1 != 2 && (param_3 != 0)) && (piVar4 = __errno_location(), *piVar4 != 0x14)))) {
            piVar4 = __errno_location();
            uVar5 = FUN_00404a90(param_1);
            pcVar7 = "cannot change permissions of %s";
            if ((param_8 & param_9) != 0xffffffff) {
              pcVar7 = "cannot change owner and permissions of %s";
            }
            uVar6 = dcgettext(0,pcVar7,5);
            error(0,*piVar4,uVar6,uVar5);
            return 0;
          }
          goto LAB_00402710;
        }
      }
    }
LAB_004027b5:
    uVar5 = 1;
  }
  else {
LAB_00402710:
    uVar5 = FUN_00404a90(param_1);
    uVar6 = dcgettext(0,"cannot create directory %s",5);
    error(0,iVar1,uVar6,uVar5);
    uVar5 = 0;
  }
  return uVar5;
}


undefined * FUN_00402920(byte *param_1)

{
  byte bVar1;
  undefined *puVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined uVar8;
  byte bVar9;
  ulong uVar10;
  undefined uVar11;
  undefined *puVar12;
  long lVar13;
  
  bVar9 = *param_1;
  uVar5 = (uint)(char)bVar9;
  if ((byte)(bVar9 - 0x30) < 8) {
    uVar7 = 0;
    pbVar4 = param_1;
    do {
      uVar7 = (uVar5 - 0x30) + uVar7 * 8;
      pbVar4 = pbVar4 + 1;
      if (0xfff < uVar7) {
        return (undefined *)0x0;
      }
      bVar9 = *pbVar4;
      uVar5 = (uint)(char)bVar9;
    } while ((byte)(bVar9 - 0x30) < 8);
    if (bVar9 != 0) {
      return (undefined *)0x0;
    }
    uVar5 = uVar7 & 0xc00 | 0x3ff;
    if (4 < (long)pbVar4 - (long)param_1) {
      uVar5 = 0xfff;
    }
    puVar2 = (undefined *)FUN_004055c0(0x20);
    *puVar2 = 0x13d;
    *(undefined *)(puVar2 + 2) = 0xfff;
    *(uint *)(puVar2 + 4) = uVar7;
    *(uint *)(puVar2 + 6) = uVar5;
    *(undefined *)((long)puVar2 + 0x11) = 0;
    return puVar2;
  }
  uVar10 = 1;
  pbVar4 = param_1;
  if (bVar9 != 0) {
    do {
      bVar1 = (byte)uVar5;
      bVar9 = pbVar4[1];
      uVar5 = (uint)bVar9;
      uVar10 = uVar10 + ((bVar1 & 0xef) == 0x2d || bVar1 == 0x2b);
      pbVar4 = pbVar4 + 1;
    } while (bVar9 != 0);
    if (((long)(uVar10 * 0x10) < 0) || (uVar10 >> 0x3c != 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00405810();
    }
  }
  puVar2 = (undefined *)FUN_004055c0();
  lVar13 = 0;
LAB_0040299b:
  uVar5 = 0;
  do {
    bVar9 = *param_1;
    uVar7 = (uint)bVar9;
    if (bVar9 == 0x61) {
      uVar5 = 0xfff;
    }
    else {
      if ((char)bVar9 < 'b') break;
      if (bVar9 == 0x6f) {
        uVar5 = uVar5 | 0x207;
      }
      else if (bVar9 == 0x75) {
        uVar5 = uVar5 | 0x9c0;
      }
      else {
        if (bVar9 != 0x67) goto LAB_004029cb;
        uVar5 = uVar5 | 0x438;
      }
    }
    param_1 = param_1 + 1;
  } while( true );
  if (((bVar9 != 0x2d) && (bVar9 != 0x3d)) && (bVar9 != 0x2b)) goto LAB_004029cb;
  puVar12 = puVar2 + lVar13 * 8;
  do {
    lVar13 = lVar13 + 1;
    bVar9 = param_1[1];
    uVar6 = (uint)(char)bVar9;
    uVar11 = (undefined)uVar7;
    if (bVar9 == 0x67) {
      uVar3 = 0x38;
LAB_00402a3e:
      *(undefined *)((long)puVar12 + 1) = 3;
      *(uint *)(puVar12 + 2) = uVar5;
      *(uint *)(puVar12 + 4) = uVar3;
      *(undefined *)puVar12 = uVar11;
      param_1 = param_1 + 2;
      uVar7 = (uint)*param_1;
LAB_00402a56:
      if (uVar5 != 0) {
        uVar3 = uVar3 & uVar5;
      }
    }
    else {
      uVar7 = uVar6;
      if ('g' < (char)bVar9) {
        if (bVar9 == 0x6f) {
          uVar3 = 7;
        }
        else {
          uVar3 = 0x1c0;
          if (bVar9 != 0x75) goto LAB_00402b20;
        }
        goto LAB_00402a3e;
      }
      if (7 < (byte)(bVar9 - 0x30)) {
LAB_00402b20:
        uVar6 = uVar6 - 0x58;
        uVar8 = 1;
        uVar3 = 0;
        bVar9 = (byte)uVar6;
        param_1 = param_1 + 1;
        while (bVar9 < 0x21) {
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch(uVar6 & 0xff) {
          case 0:
            uVar8 = 2;
            break;
          default:
            goto switchD_00402b34_caseD_1;
          case 0x1a:
            uVar3 = uVar3 | 0x124;
            break;
          case 0x1b:
            uVar3 = uVar3 | 0xc00;
            break;
          case 0x1c:
            uVar3 = uVar3 | 0x200;
            break;
          case 0x1f:
            uVar3 = uVar3 | 0x92;
            break;
          case 0x20:
            uVar3 = uVar3 | 0x49;
          }
          param_1 = param_1 + 1;
          uVar7 = (uint)*param_1;
          uVar6 = uVar7 - 0x58;
          bVar9 = (byte)uVar6;
        }
switchD_00402b34_caseD_1:
        *(undefined *)puVar12 = uVar11;
        *(undefined *)((long)puVar12 + 1) = uVar8;
        *(uint *)(puVar12 + 2) = uVar5;
        *(uint *)(puVar12 + 4) = uVar3;
        goto LAB_00402a56;
      }
      uVar6 = 0;
      param_1 = param_1 + 1;
      do {
        uVar6 = (uVar7 - 0x30) + uVar6 * 8;
        param_1 = param_1 + 1;
        if (0xfff < uVar6) goto LAB_004029cb;
        bVar9 = *param_1;
        uVar7 = (uint)(char)bVar9;
      } while ((byte)(bVar9 - 0x30) < 8);
      if ((uVar5 != 0) || ((bVar9 != 0 && (bVar9 != 0x2c)))) goto LAB_004029cb;
      *(undefined *)puVar12 = uVar11;
      uVar5 = 0xfff;
      *(uint *)(puVar12 + 4) = uVar6;
      uVar3 = 0xfff;
      *(undefined *)((long)puVar12 + 1) = 1;
      *(undefined *)(puVar12 + 2) = 0xfff;
    }
    *(uint *)(puVar12 + 6) = uVar3;
    puVar12 = puVar12 + 8;
    bVar9 = (byte)uVar7;
  } while (((bVar9 & 0xef) == 0x2d) || (bVar9 == 0x2b));
  if (bVar9 != 0x2c) {
    if (bVar9 == 0) {
      *(undefined *)((long)puVar2 + lVar13 * 0x10 + 1) = 0;
      return puVar2;
    }
LAB_004029cb:
    free(puVar2);
    return (undefined *)0x0;
  }
  param_1 = param_1 + 1;
  goto LAB_0040299b;
}


undefined * FUN_00402c90(char *param_1)

{
  int iVar1;
  undefined *puVar2;
  stat sStack_98;
  
  iVar1 = __xstat(1,param_1,&sStack_98);
  puVar2 = (undefined *)0x0;
  if (iVar1 == 0) {
    puVar2 = (undefined *)FUN_004055c0(0x20);
    *puVar2 = 0x13d;
    *(undefined *)(puVar2 + 2) = 0xfff;
    *(__mode_t *)(puVar2 + 4) = sStack_98.st_mode;
    *(undefined *)(puVar2 + 6) = 0xfff;
    *(undefined *)((long)puVar2 + 0x11) = 0;
  }
  return puVar2;
}


void FUN_00402cf0(uint param_1,char param_2,uint param_3,char *param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  uint uVar8;
  
  cVar7 = param_4[1];
  param_1 = param_1 & 0xfff;
  uVar2 = 0;
  if (cVar7 != '\0') {
    do {
      while( true ) {
        uVar1 = *(uint *)(param_4 + 4);
        uVar4 = *(uint *)(param_4 + 8);
        if (param_2 != '\0') break;
        uVar6 = 0xffffffff;
        uVar5 = 0xffffffff;
        uVar3 = 0;
        uVar8 = 0;
        if (cVar7 != '\x02') goto LAB_00402d2f;
        if ((param_1 & 0x49) != 0) goto LAB_00402ddc;
LAB_00402d74:
        cVar7 = *param_4;
        uVar4 = uVar4 & uVar6;
        if (uVar1 != 0) goto LAB_00402df0;
LAB_00402d80:
        uVar4 = uVar4 & ~param_3;
        if (cVar7 != '-') {
          if (cVar7 == '=') goto LAB_00402e0b;
          goto LAB_00402d93;
        }
LAB_00402e40:
        uVar2 = uVar2 | uVar4;
        param_1 = param_1 & ~uVar4;
LAB_00402d9d:
        cVar7 = param_4[0x11];
        param_4 = param_4 + 0x10;
        if (cVar7 == '\0') goto LAB_00402e28;
      }
      uVar5 = *(uint *)(param_4 + 0xc) | 0xfffff3ff;
      uVar3 = ~*(uint *)(param_4 + 0xc) & 0xc00;
      uVar8 = uVar3;
      if (cVar7 != '\x02') {
LAB_00402d2f:
        uVar3 = uVar8;
        uVar6 = uVar5;
        if (cVar7 == '\x03') {
          uVar4 = uVar4 & param_1;
          uVar8 = ~-(uint)((uVar4 & 0x124) == 0) & 0x124;
          if ((uVar4 & 0x92) != 0) {
            uVar8 = uVar8 | 0x92;
          }
          if ((uVar4 & 0x49) != 0) {
            uVar8 = uVar8 | 0x49;
          }
          uVar4 = uVar4 | uVar8;
        }
        goto LAB_00402d74;
      }
LAB_00402ddc:
      cVar7 = *param_4;
      uVar4 = (uVar4 | 0x49) & uVar5;
      uVar6 = uVar5;
      if (uVar1 == 0) goto LAB_00402d80;
LAB_00402df0:
      uVar4 = uVar4 & uVar1;
      if (cVar7 == '-') goto LAB_00402e40;
      if (cVar7 != '=') {
LAB_00402d93:
        if (cVar7 == '+') {
          uVar2 = uVar2 | uVar4;
          param_1 = param_1 | uVar4;
        }
        goto LAB_00402d9d;
      }
      uVar3 = uVar3 | ~uVar1;
      uVar6 = ~uVar3;
LAB_00402e0b:
      cVar7 = param_4[0x11];
      uVar2 = uVar2 | uVar6 & 0xfff;
      param_1 = param_1 & uVar3 | uVar4;
      param_4 = param_4 + 0x10;
    } while (cVar7 != '\0');
  }
LAB_00402e28:
  if (param_5 != (uint *)0x0) {
    *param_5 = uVar2;
  }
  return;
}


void FUN_00402e70(byte *param_1)

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
        pbVar6 = &DAT_0040a7d0;
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
  DAT_0060e308 = param_1;
  program_invocation_name = param_1;
  return;
}


char * FUN_00402f10(char *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  byte *pbVar3;
  
  pcVar2 = (char *)dcgettext(0,param_1,5);
  if (param_1 == pcVar2) {
    pbVar3 = (byte *)FUN_00406870();
    if ((*pbVar3 & 0xdf) == 0x55) {
      if (((((pbVar3[1] & 0xdf) != 0x54) || ((pbVar3[2] & 0xdf) != 0x46)) || (pbVar3[3] != 0x2d)) ||
         ((pbVar3[4] != 0x38 || (pbVar3[5] != 0)))) {
LAB_00402fe8:
        pcVar2 = "\"";
        if (param_2 != 9) {
          pcVar2 = "\'";
        }
        return pcVar2;
      }
      cVar1 = *pcVar2;
      pcVar2 = &DAT_0040a7e1;
      if (cVar1 != '`') {
        pcVar2 = &DAT_0040a7d6;
      }
    }
    else {
      if (((((*pbVar3 & 0xdf) != 0x47) || ((pbVar3[1] & 0xdf) != 0x42)) || (pbVar3[2] != 0x31)) ||
         (((pbVar3[3] != 0x38 || (pbVar3[4] != 0x30)) ||
          ((pbVar3[5] != 0x33 || ((pbVar3[6] != 0x30 || (pbVar3[7] != 0)))))))) goto LAB_00402fe8;
      cVar1 = *pcVar2;
      pcVar2 = &DAT_0040a7dd;
      if (cVar1 != '`') {
        pcVar2 = &DAT_0040a7da;
      }
    }
  }
  return pcVar2;
}


ulong FUN_00403010(undefined *param_1,ulong param_2,char *param_3,ulong param_4,int param_5,
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
LAB_00403c61:
    if (param_2 != 0) {
      bVar3 = false;
      local_5b = false;
      bVar2 = true;
      local_70 = 0;
      goto LAB_00403896;
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
      goto LAB_00403c61;
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
      param_8 = (char *)FUN_00402f10(&DAT_0040a7e5,param_5);
      param_9 = (char *)FUN_00402f10(&DAT_0040bab7);
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
LAB_004030a8:
  uVar22 = 0;
  bVar5 = local_5b;
LAB_004030b8:
  bVar23 = param_4 != uVar22;
  if (param_4 == 0xffffffffffffffff) {
    bVar23 = param_3[uVar22] != '\0';
  }
  bVar26 = bVar6;
  if (!bVar23) goto LAB_00403838;
  bVar20 = (bool)(param_5 != 2 & bVar6);
  __s1 = (byte *)(param_3 + uVar22);
  uVar16 = uVar15;
  bVar4 = bVar3;
  if (bVar20) {
    if (local_a0 == 0) {
LAB_004037b0:
      uVar19 = (ulong)*__s1;
      switch(uVar19) {
      case 0:
        goto switchD_004037c2_caseD_0;
      default:
        bVar20 = false;
        goto switchD_0040362e_caseD_1;
      case 7:
        bVar17 = 0x61;
        goto LAB_004034c5;
      case 8:
        bVar17 = 0x62;
        break;
      case 9:
switchD_004037c2_caseD_9:
        bVar17 = 0x74;
        break;
      case 10:
switchD_004037c2_caseD_a:
        bVar17 = 0x6e;
        break;
      case 0xb:
switchD_004037c2_caseD_b:
        bVar17 = 0x76;
        goto LAB_004034c5;
      case 0xc:
switchD_004037c2_caseD_c:
        bVar17 = 0x66;
LAB_004034c5:
        if (local_5c) {
          bVar25 = false;
          goto LAB_00403418;
        }
LAB_004034d0:
        bVar23 = false;
        goto LAB_0040328b;
      case 0xd:
        bVar20 = false;
switchD_004031a8_caseD_d:
        bVar25 = param_5 == 2;
        uVar19 = 0xd;
        bVar13 = 0x72;
        goto LAB_004033e0;
      case 0x20:
        bVar25 = false;
LAB_0040380a:
        uVar19 = 0x20;
        goto LAB_004037d2;
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
switchD_004031a8_caseD_21:
        bVar25 = false;
        goto LAB_004033eb;
      case 0x23:
      case 0x7e:
        bVar26 = false;
LAB_004037ea:
        if (uVar22 == 0) {
          bVar25 = false;
          bVar23 = bVar20;
          bVar20 = bVar26;
          goto LAB_004031f8;
        }
        bVar23 = false;
        goto LAB_0040320f;
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
LAB_004037d2:
        bVar24 = false;
        bVar23 = bVar20;
        bVar20 = bVar25;
        goto LAB_00403211;
      case 0x27:
        bVar20 = false;
        goto switchD_0040362e_caseD_27;
      case 0x3f:
        bVar20 = false;
        goto switchD_0040362e_caseD_3f;
      case 0x5c:
        bVar20 = false;
        goto switchD_004031a8_caseD_5c;
      case 0x7b:
      case 0x7d:
        bVar20 = false;
        goto switchD_0040362e_caseD_7b;
      }
      bVar25 = false;
      bVar23 = false;
      goto joined_r0x00403407;
    }
    if ((param_4 == 0xffffffffffffffff) && (1 < local_a0)) {
      param_4 = strlen(param_3);
    }
    if ((param_4 < uVar22 + local_a0) || (iVar7 = memcmp(__s1,local_78,local_a0), iVar7 != 0))
    goto LAB_004037b0;
    if (!local_5c) {
      uVar19 = (ulong)*__s1;
      bVar25 = bVar20;
      switch(uVar19) {
      case 0:
        goto switchD_004031a8_caseD_0;
      default:
        goto switchD_0040362e_caseD_1;
      case 7:
        bVar17 = 0x61;
        goto LAB_004034d0;
      case 8:
        bVar25 = false;
        bVar23 = false;
        bVar17 = 0x62;
        break;
      case 9:
        goto switchD_004037c2_caseD_9;
      case 10:
        goto switchD_004037c2_caseD_a;
      case 0xb:
        goto switchD_004037c2_caseD_b;
      case 0xc:
        goto switchD_004037c2_caseD_c;
      case 0xd:
        goto switchD_004031a8_caseD_d;
      case 0x20:
        goto LAB_0040380a;
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
        goto switchD_004031a8_caseD_21;
      case 0x23:
      case 0x7e:
        bVar26 = bVar20;
        goto LAB_004037ea;
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
        goto LAB_004037d2;
      case 0x27:
        goto switchD_0040362e_caseD_27;
      case 0x3f:
        goto switchD_0040362e_caseD_3f;
      case 0x5c:
        goto switchD_004031a8_caseD_5c;
      case 0x7b:
      case 0x7d:
        goto switchD_0040362e_caseD_7b;
      }
      goto LAB_00403252;
    }
    goto LAB_0040342a;
  }
  uVar19 = (ulong)*__s1;
  switch(uVar19) {
  case 0:
    if (bVar6) {
switchD_004037c2_caseD_0:
      if (!local_5c) {
        bVar20 = false;
switchD_004031a8_caseD_0:
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
            goto LAB_00403308;
          }
LAB_0040354a:
          param_1[uVar16] = 0x5c;
          uVar15 = uVar16;
        }
        else if (uVar15 < uVar9) goto LAB_0040354a;
        uVar16 = uVar15 + 1;
        bVar24 = bVar23;
        if (param_5 == 2) {
          bVar17 = 0x30;
          bVar23 = false;
          bVar4 = bVar3;
          goto LAB_00403308;
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
LAB_00403589:
        bVar17 = (byte)uVar19;
        bVar23 = false;
        uVar15 = uVar16;
        bVar4 = bVar3;
        if ((bool)(bVar6 ^ 1U | bVar26)) goto LAB_00403308;
        goto LAB_00403211;
      }
      bVar26 = param_5 == 2;
      goto LAB_0040341c;
    }
    if ((param_6 & 1) == 0) {
      bVar25 = param_5 == 2;
      uVar19 = 0;
      bVar23 = false;
      bVar20 = false;
      goto LAB_004031f8;
    }
    uVar22 = uVar22 + 1;
    goto LAB_004030b8;
  default:
switchD_0040362e_caseD_1:
    bVar25 = bVar6;
    if (sVar8 != 1) {
      local_40[0] = (mbstate_t)0x0;
      if (param_4 == 0xffffffffffffffff) {
        param_4 = strlen(param_3);
      }
      uVar21 = 0;
      do {
        uVar1 = uVar22 + uVar21;
        lVar11 = FUN_00406620(&local_44,param_3 + uVar1,param_4 - uVar1,local_40);
        if (lVar11 == 0) break;
        if (lVar11 == -1) {
          bVar23 = false;
          goto LAB_00403f3a;
        }
        if (lVar11 == -2) {
          if ((param_4 <= uVar1) || (param_3[uVar1] == '\0')) goto LAB_00404077;
          goto LAB_00404067;
        }
        if (((param_5 == 2) && (local_5c)) && (lVar11 != 1)) {
          pcVar12 = param_3 + uVar1 + 1;
          do {
            if (((byte)(*pcVar12 + 0xa5U) < 0x22) &&
               ((1L << (*pcVar12 + 0xa5U & 0x3f) & 0x20000002bU) != 0)) {
              param_5 = 2;
              goto LAB_0040341c;
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
      goto LAB_00403f3a;
    }
    ppuVar10 = __ctype_b_loc();
    uVar21 = 1;
    bVar25 = ((*ppuVar10)[uVar19] & 0x4000) == 0;
    bVar23 = !bVar25;
    bVar25 = (bool)(bVar25 & bVar6);
    goto LAB_00403604;
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
    goto LAB_00403642;
  case 10:
    uVar19 = 10;
    bVar13 = 0x6e;
    goto LAB_00403642;
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
LAB_00403642:
    bVar25 = param_5 == 2;
    bVar20 = (bool)(local_5c & bVar25);
    if (bVar20) {
LAB_0040365a:
      param_5 = 2;
      goto LAB_0040341c;
    }
    break;
  case 0x20:
    uVar19 = 0x20;
    goto LAB_004031e6;
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
LAB_004031e6:
    bVar25 = param_5 == 2;
    if ((local_5c) && (bVar25)) goto LAB_0040365a;
    goto LAB_004031f8;
  case 0x23:
  case 0x7e:
LAB_004031dd:
    bVar25 = param_5 == 2;
    if (uVar22 == 0) goto LAB_004031e6;
    goto LAB_004033eb;
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
    goto switchD_0040362e_caseD_25;
  case 0x27:
switchD_0040362e_caseD_27:
    bVar5 = bVar23;
    if (param_5 != 2) {
      bVar25 = false;
      uVar19 = 0x27;
      goto LAB_004031f8;
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
      goto LAB_00403308;
    }
    goto LAB_0040341c;
  case 0x3f:
switchD_0040362e_caseD_3f:
    if (param_5 == 2) {
      if (!local_5c) {
        bVar17 = 0x3f;
        bVar24 = false;
        bVar23 = false;
        goto LAB_00403308;
      }
      goto LAB_0040341c;
    }
    if (param_5 != 5) {
      bVar25 = param_5 == 2;
      uVar19 = 0x3f;
      bVar23 = false;
      goto LAB_004031f8;
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
        goto LAB_00403589;
      }
      goto LAB_0040342a;
    }
    bVar25 = false;
    uVar19 = 0x3f;
    bVar23 = false;
    goto LAB_004031f8;
  case 0x5c:
    if (param_5 != 2) {
switchD_004031a8_caseD_5c:
      uVar19 = 0x5c;
      bVar17 = 0x5c;
      bVar13 = 0x5c;
      bVar25 = (bool)(bVar6 & local_5c & local_a0 != 0);
      if (!bVar25) break;
      uVar22 = uVar22 + 1;
      bVar23 = false;
      goto LAB_00403324;
    }
    if (local_5c) goto LAB_0040341c;
    uVar22 = uVar22 + 1;
    bVar23 = false;
    bVar17 = 0x5c;
    goto LAB_00403324;
  case 0x7b:
  case 0x7d:
switchD_0040362e_caseD_7b:
    bVar24 = param_4 != 1;
    if (param_4 == 0xffffffffffffffff) {
      bVar24 = param_3[1] != '\0';
    }
    bVar25 = param_5 == 2;
    if (!bVar24) goto LAB_004031dd;
    goto LAB_004033eb;
  }
LAB_004033e0:
  if (!bVar6) {
LAB_004033eb:
    bVar23 = false;
    goto LAB_004031f8;
  }
  bVar23 = false;
  bVar17 = bVar13;
  goto joined_r0x00403407;
LAB_00403838:
  if ((uVar15 == 0) && ((bool)(local_5c & param_5 == 2))) {
    param_5 = 2;
LAB_0040341c:
    if (bVar26) {
      param_5 = 4;
    }
LAB_0040342a:
    uVar9 = FUN_00403010(param_1,uVar9,param_3,param_4,param_5,param_6 & 0xfffffffd,0,param_8,
                         param_9);
    return uVar9;
  }
  bVar26 = (bool)(param_5 == 2 & (local_5c ^ 1U));
  bVar23 = (bool)(local_5c ^ 1U);
  if ((!bVar26) || (bVar23 = bVar26, !bVar5)) {
LAB_0040410d:
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
    uVar9 = FUN_00403010(param_1,local_70,param_3,param_4,5,param_6,param_7,param_8,param_9);
    return uVar9;
  }
  local_5b = uVar9 == 0 && local_70 != 0;
  param_2 = local_70;
  bVar23 = bVar5;
  if (uVar9 != 0 || local_70 == 0) goto LAB_0040410d;
LAB_00403896:
  *param_1 = 0x27;
  param_5 = 2;
  uVar15 = 1;
  local_78 = "\'";
  local_a0 = 1;
  local_5c = false;
  uVar9 = param_2;
  goto LAB_004030a8;
  while (__s1[uVar21] != 0) {
LAB_00404067:
    uVar21 = uVar21 + 1;
    if (param_4 <= uVar22 + uVar21) break;
  }
LAB_00404077:
  bVar23 = false;
LAB_00403f3a:
  if (1 < uVar21) {
LAB_00403afe:
    bVar26 = false;
    uVar21 = uVar21 + uVar22;
    uVar16 = uVar22;
    do {
      bVar17 = (byte)uVar19;
      if (bVar25) {
        bVar26 = param_5 == 2;
        if (local_5c) goto LAB_0040341c;
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
        if (uVar21 <= uVar22) goto LAB_0040329d;
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
        if (uVar21 <= uVar22) goto LAB_00403324;
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
LAB_00403604:
  if (bVar25) {
    bVar23 = false;
    bVar25 = bVar6;
    goto LAB_00403afe;
  }
switchD_0040362e_caseD_25:
  bVar25 = param_5 == 2;
LAB_004031f8:
  bVar17 = (byte)uVar19;
  bVar24 = (bool)((bVar6 ^ 1U | bVar25) ^ 1 | local_5c);
  bVar26 = bVar20;
  if (bVar24) {
LAB_0040320f:
    bVar24 = false;
    bVar20 = bVar26;
LAB_00403211:
    bVar17 = (byte)uVar19;
    uVar16 = uVar15;
    bVar4 = bVar3;
    if ((param_7 == 0) || ((*(uint *)(param_7 + (uVar19 >> 5) * 4) >> (bVar17 & 0x1f) & 1) == 0))
    goto LAB_00403308;
    bVar25 = param_5 == 2;
  }
  else {
LAB_00403308:
    bVar25 = param_5 == 2;
    uVar15 = uVar16;
    bVar3 = bVar4;
    if (!bVar20) {
      uVar22 = uVar22 + 1;
      bVar3 = (bool)((bVar24 ^ 1U) & bVar4);
LAB_00403324:
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
      goto LAB_0040329d;
    }
  }
joined_r0x00403407:
  if (local_5c) {
LAB_00403418:
    bVar26 = (bool)(bVar6 & bVar25);
    goto LAB_0040341c;
  }
LAB_00403252:
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
LAB_0040328b:
  if (uVar15 < uVar9) {
    param_1[uVar15] = 0x5c;
  }
  uVar15 = uVar15 + 1;
  uVar22 = uVar22 + 1;
  bVar4 = bVar3;
LAB_0040329d:
  bVar3 = bVar4;
  if (uVar15 < uVar9) {
    param_1[uVar15] = bVar17;
  }
  uVar15 = uVar15 + 1;
  if (!bVar23) {
    bVar2 = false;
  }
  goto LAB_004030b8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00404240(int param_1,undefined param_2,undefined param_3,undefined *param_4)

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
  puVar8 = (undefined *)PTR_DAT_0060e298;
  if (DAT_0060e2b0 <= param_1) {
    if (param_1 == 0x7fffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_00405810();
    }
    if (PTR_DAT_0060e298 == &DAT_0060e2a0) {
      puVar8 = (undefined *)FUN_00405620(0);
      uVar6 = PTR_DAT_0060e2a8._4_4_;
      uVar5 = PTR_DAT_0060e2a8._0_4_;
      uVar3 = _UNK_0060e2a4;
      PTR_DAT_0060e298 = (undefined *)puVar8;
      *puVar8 = _DAT_0060e2a0;
      puVar8[1] = uVar3;
      puVar8[2] = uVar5;
      puVar8[3] = uVar6;
    }
    else {
      puVar8 = (undefined *)FUN_00405620(PTR_DAT_0060e298);
      PTR_DAT_0060e298 = (undefined *)puVar8;
    }
    memset(puVar8 + (long)DAT_0060e2b0 * 4,0,(long)((param_1 + 1) - DAT_0060e2b0) << 4);
    DAT_0060e2b0 = param_1 + 1;
  }
  uVar2 = param_4[1];
  puVar10 = (ulong *)(puVar8 + (long)param_1 * 4);
  uVar4 = *puVar10;
  __ptr = (undefined *)puVar10[1];
  uVar9 = FUN_00403010(__ptr,uVar4,param_2,param_3,*param_4,uVar2 | 1,param_4 + 2,
                       *(undefined *)(param_4 + 10),*(undefined *)(param_4 + 0xc));
  if (uVar4 <= uVar9) {
    uVar9 = uVar9 + 1;
    *puVar10 = uVar9;
    if (__ptr != &DAT_0060e320) {
      free(__ptr);
    }
    __ptr = (undefined *)FUN_004055c0(uVar9);
    uVar3 = *param_4;
    puVar10[1] = (ulong)__ptr;
    FUN_00403010(__ptr,uVar9,param_2,param_3,uVar3,uVar2 | 1,param_4 + 2,
                 *(undefined *)(param_4 + 10),*(undefined *)(param_4 + 0xc));
  }
  *piVar7 = iVar1;
  return __ptr;
}


void FUN_004043e0(undefined *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_0060e420;
  }
  FUN_004057c0(param_1,0x38);
  *piVar2 = iVar1;
  return;
}


undefined FUN_00404420(undefined *param_1)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = (undefined *)&DAT_0060e420;
  }
  return *param_1;
}


void FUN_00404430(undefined *param_1,undefined param_2)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = (undefined *)&DAT_0060e420;
  }
  *param_1 = param_2;
  return;
}


uint FUN_00404440(undefined *param_1,byte param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_0060e420;
  }
  uVar1 = *(uint *)(param_1 + (ulong)(param_2 >> 5) * 4 + 8);
  uVar2 = uVar1 >> (param_2 & 0x1f);
  *(uint *)(param_1 + (ulong)(param_2 >> 5) * 4 + 8) =
       ((param_3 ^ uVar2) & 1) << (param_2 & 0x1f) ^ uVar1;
  return uVar2 & 1;
}


undefined FUN_00404480(undefined *param_1,undefined param_2)

{
  undefined uVar1;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_0060e420;
  }
  uVar1 = *(undefined *)(param_1 + 4);
  *(undefined *)(param_1 + 4) = param_2;
  return uVar1;
}


void FUN_004044a0(undefined *param_1,long param_2,long param_3)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = (undefined *)&DAT_0060e420;
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


void FUN_004044d0(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                 undefined *param_5)

{
  int iVar1;
  int *piVar2;
  
  if (param_5 == (undefined *)0x0) {
    param_5 = (undefined *)&DAT_0060e420;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  FUN_00403010(param_1,param_2,param_3,param_4,*param_5,param_5[1],param_5 + 2,
               *(undefined *)(param_5 + 10),*(undefined *)(param_5 + 0xc));
  *piVar2 = iVar1;
  return;
}


undefined FUN_00404550(undefined param_1,undefined param_2,long *param_3,undefined *param_4)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined uVar4;
  uint uVar5;
  
  if (param_4 == (undefined *)0x0) {
    param_4 = (undefined *)&DAT_0060e420;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  uVar5 = (uint)(param_3 == (long *)0x0) | param_4[1];
  lVar3 = FUN_00403010(0,0,param_1,param_2,*param_4,uVar5,param_4 + 2,*(undefined *)(param_4 + 10),
                       *(undefined *)(param_4 + 0xc));
  uVar4 = FUN_004055c0(lVar3 + 1);
  FUN_00403010(uVar4,lVar3 + 1,param_1,param_2,*param_4,uVar5,param_4 + 2,
               *(undefined *)(param_4 + 10),*(undefined *)(param_4 + 0xc));
  *piVar2 = iVar1;
  if (param_3 != (long *)0x0) {
    *param_3 = lVar3;
  }
  return uVar4;
}


void FUN_00404640(undefined param_1,undefined param_2,undefined param_3)

{
  FUN_00404550(param_1,param_2,0,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404650(void)

{
  void **ppvVar1;
  void *__ptr;
  undefined *__ptr_00;
  void **ppvVar2;
  
  __ptr_00 = PTR_DAT_0060e298;
  if (1 < DAT_0060e2b0) {
    ppvVar2 = (void **)(PTR_DAT_0060e298 + 0x18);
    ppvVar1 = (void **)(PTR_DAT_0060e298 + (ulong)(DAT_0060e2b0 - 2) * 0x10 + 0x28);
    do {
      __ptr = *ppvVar2;
      ppvVar2 = ppvVar2 + 2;
      free(__ptr);
    } while (ppvVar2 != ppvVar1);
  }
  if (*(undefined **)(__ptr_00 + 8) != &DAT_0060e320) {
    free(*(undefined **)(__ptr_00 + 8));
    _DAT_0060e2a0 = 0x100;
    PTR_DAT_0060e2a8 = &DAT_0060e320;
  }
  if (__ptr_00 != &DAT_0060e2a0) {
    free(__ptr_00);
    PTR_DAT_0060e298 = &DAT_0060e2a0;
  }
  DAT_0060e2b0 = 1;
  return;
}


void FUN_004046f0(undefined param_1,undefined param_2)

{
  FUN_00404240(param_1,param_2,0xffffffffffffffff,&DAT_0060e420);
  return;
}


void FUN_00404710(void)

{
  FUN_00404240();
  return;
}


void FUN_00404720(undefined param_1)

{
  FUN_00404240(0,param_1,0xffffffffffffffff,&DAT_0060e420);
  return;
}


void FUN_00404740(undefined param_1,undefined param_2)

{
  FUN_00404240(0,param_1,param_2,&DAT_0060e420);
  return;
}


void FUN_00404760(undefined param_1,int param_2,undefined param_3)

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
    FUN_00404240(param_1,param_3,0xffffffffffffffff,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_004047d0(undefined param_1,int param_2,undefined param_3,undefined param_4)

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
    FUN_00404240(param_1,param_3,param_4,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00404840(undefined param_1,undefined param_2)

{
  FUN_00404760(0,param_1,param_2);
  return;
}


void FUN_00404850(undefined param_1,undefined param_2,undefined param_3)

{
  FUN_004047d0(0,param_1,param_2,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404860(undefined param_1,undefined param_2,byte param_3)

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
  
  local_18 = DAT_0060e450;
  local_48 = _DAT_0060e420;
  uStack_40 = uRam000000000060e428;
  local_38 = _DAT_0060e430;
  uStack_30 = uRam000000000060e438;
  puVar1 = (uint *)((long)&uStack_40 + (ulong)(param_3 >> 5) * 4);
  local_28 = _DAT_0060e440;
  uStack_20 = uRam000000000060e448;
  uVar2 = *puVar1;
  *puVar1 = (~(uVar2 >> (param_3 & 0x1f)) & 1) << (param_3 & 0x1f) ^ uVar2;
  FUN_00404240(0,param_1,param_2,&local_48);
  return;
}


void FUN_004048d0(undefined param_1,char param_2)

{
  FUN_00404860(param_1,0xffffffffffffffff,(int)param_2);
  return;
}


void FUN_004048e0(undefined param_1)

{
  FUN_00404860(param_1,0xffffffffffffffff,0x3a);
  return;
}


void FUN_00404900(undefined param_1,undefined param_2)

{
  FUN_00404860(param_1,param_2,0x3a);
  return;
}


void FUN_00404910(undefined param_1,int param_2,undefined param_3)

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
    FUN_00404240(param_1,param_3,0xffffffffffffffff,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404980(undefined param_1,long param_2,long param_3,undefined param_4,undefined param_5
                 )

{
  undefined local_48;
  undefined uStack_40;
  undefined local_38;
  undefined uStack_30;
  undefined local_28;
  long lStack_20;
  long local_18;
  
  uStack_40 = uRam000000000060e428;
  local_38 = _DAT_0060e430;
  uStack_30 = uRam000000000060e438;
  local_28 = _DAT_0060e440;
  lStack_20 = uRam000000000060e448;
  local_18 = DAT_0060e450;
  local_48 = CONCAT44((int)((ulong)_DAT_0060e420 >> 0x20),10);
  if ((param_2 != 0) && (param_3 != 0)) {
    lStack_20 = param_2;
    local_18 = param_3;
    FUN_00404240(param_1,param_4,param_5,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_004049f0(void)

{
  FUN_00404980();
  return;
}


void FUN_00404a00(undefined param_1,undefined param_2,undefined param_3)

{
  FUN_00404980(0,param_1,param_2,param_3,0xffffffffffffffff);
  return;
}


void FUN_00404a20(undefined param_1,undefined param_2,undefined param_3,undefined param_4)

{
  FUN_00404980(0,param_1,param_2,param_3,param_4);
  return;
}


void FUN_00404a40(void)

{
  FUN_00404240();
  return;
}


void FUN_00404a50(undefined param_1,undefined param_2)

{
  FUN_00404240(0,param_1,param_2,&DAT_0060e260);
  return;
}


void FUN_00404a70(undefined param_1,undefined param_2)

{
  FUN_00404240(param_1,param_2,0xffffffffffffffff,&DAT_0060e260);
  return;
}


void FUN_00404a90(undefined param_1)

{
  FUN_00404240(0,param_1,0xffffffffffffffff,&DAT_0060e260);
  return;
}


void FUN_00404ab0(undefined *param_1)

{
  *param_1 = 0;
  return;
}


int FUN_00404ac0(int *param_1)

{
  if (*param_1 != 4) {
    return 0;
  }
  return param_1[1];
}


int FUN_00404ae0(undefined *param_1,char *param_2,uint param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  int __fd;
  int iVar3;
  __pid_t _Var4;
  int *piVar5;
  ulong uVar6;
  bool bVar7;
  
  if (param_4 == (int *)0x0) {
    __fd = -1;
  }
  else {
    __fd = __open_2(param_2,(param_3 & 1) << 0x11 | 0x10900);
    *param_4 = __fd;
    piVar5 = __errno_location();
    iVar3 = *piVar5;
    param_4[1] = iVar3;
    if (__fd < 0) {
      if (iVar3 != 0xd) {
        return -1;
      }
    }
    else if ((param_3 & 2) != 0) {
      return 0;
    }
  }
  uVar1 = *(uint *)param_1;
  if (5 < uVar1) {
LAB_00404d10:
                    /* WARNING: Subroutine does not return */
    __assert_fail("0","lib/savewd.c",99,"savewd_save");
  }
  uVar6 = 1L << ((byte)uVar1 & 0x3f);
  if ((uVar6 & 0x36) == 0) {
    if ((uVar6 & 8) == 0) {
      if (uVar1 != 0) goto LAB_00404d10;
      iVar3 = FUN_004067c0(&DAT_0040a61b,0);
      if (iVar3 < 0) {
        piVar5 = __errno_location();
        iVar3 = *piVar5;
        if ((iVar3 == 0xd) || (iVar3 == 0x74)) {
          *param_1 = 0xffffffff00000003;
          goto LAB_00404c4b;
        }
        *(undefined *)param_1 = 4;
        *(int *)((long)param_1 + 4) = iVar3;
      }
      else {
        *(undefined *)param_1 = 1;
        *(int *)((long)param_1 + 4) = iVar3;
      }
    }
    else if (*(int *)((long)param_1 + 4) < 0) {
LAB_00404c4b:
      _Var4 = fork();
      *(__pid_t *)((long)param_1 + 4) = _Var4;
      if (_Var4 != 0) {
        if (0 < _Var4) {
          bVar7 = true;
          iVar3 = -2;
          goto LAB_00404c00;
        }
        *(undefined *)param_1 = 4;
        piVar5 = __errno_location();
        *(int *)((long)param_1 + 4) = *piVar5;
      }
    }
  }
  if (__fd < 0) {
    iVar3 = chdir(param_2);
    if (iVar3 != 0) {
      return iVar3;
    }
  }
  else {
    iVar3 = fchdir(__fd);
    if (iVar3 != 0) {
      bVar7 = param_4 == (int *)0x0;
      goto LAB_00404c00;
    }
  }
  switch(*(undefined *)param_1) {
  default:
                    /* WARNING: Subroutine does not return */
    __assert_fail("0","lib/savewd.c",0x9f,"savewd_chdir");
  case 1:
    *(undefined *)param_1 = 2;
    break;
  case 2:
  case 4:
  case 5:
    break;
  case 3:
    if (*(int *)((long)param_1 + 4) != 0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("wd->val.child == 0","lib/savewd.c",0x9b,"savewd_chdir");
    }
  }
  bVar7 = param_4 == (int *)0x0;
  iVar3 = 0;
LAB_00404c00:
  if ((-1 < __fd) && (bVar7)) {
    piVar5 = __errno_location();
    iVar2 = *piVar5;
    close(__fd);
    *piVar5 = iVar2;
    return iVar3;
  }
  return iVar3;
}


uint FUN_00404d30(uint *param_1,int param_2)

{
  __pid_t _Var1;
  uint uVar2;
  uint *puVar3;
  int *piVar4;
  uint local_1c;
  
  if (4 < *param_1) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("0","lib/savewd.c",0xe2,"savewd_restore");
  }
  switch(*param_1) {
  default:
    return 0;
  case 2:
    uVar2 = fchdir(param_1[1]);
    if (uVar2 == 0) {
      *param_1 = 1;
      return uVar2;
    }
    puVar3 = (uint *)__errno_location();
    uVar2 = *puVar3;
    close(param_1[1]);
    *param_1 = 4;
    param_1[1] = uVar2;
    break;
  case 3:
    uVar2 = param_1[1];
    if (uVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      _exit(param_2);
    }
    if ((int)uVar2 < 1) {
      return 0;
    }
    do {
      _Var1 = waitpid(uVar2,(int *)&local_1c,0);
      if (-1 < _Var1) {
        param_1[1] = 0xffffffff;
        if ((local_1c & 0x7f) != 0) {
          raise(local_1c & 0x7f);
        }
        return local_1c >> 8 & 0xff;
      }
      piVar4 = __errno_location();
    } while (*piVar4 == 4);
                    /* WARNING: Subroutine does not return */
    __assert_fail("(*__errno_location ()) == 4","lib/savewd.c",0xd8,"savewd_restore");
  case 4:
    uVar2 = param_1[1];
    puVar3 = (uint *)__errno_location();
  }
  *puVar3 = uVar2;
  return 0xffffffff;
}


void FUN_00404e60(uint *param_1)

{
  if (4 < *param_1) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("0","lib/savewd.c",0xfb,"savewd_finish");
  }
  switch(*param_1) {
  case 1:
  case 2:
    close(param_1[1]);
    break;
  case 3:
    if (-1 < (int)param_1[1]) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("wd->val.child < 0","lib/savewd.c",0xf7,"savewd_finish");
    }
  }
  *param_1 = 5;
  return;
}


int FUN_00404ed0(int param_1,undefined *param_2,code *param_3,undefined param_4)

{
  char **ppcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  undefined *puVar7;
  int local_40;
  int local_3c;
  
  iVar2 = param_1 + -1;
  local_40 = 0;
  if (-1 < iVar2) {
    iVar3 = iVar2;
    if (*(char *)param_2[iVar2] == '/') {
      lVar5 = (long)(param_1 + -2);
      do {
        iVar3 = (int)lVar5;
        if (iVar3 < 0) break;
        ppcVar1 = (char **)(param_2 + lVar5);
        lVar5 = lVar5 + -1;
      } while (**ppcVar1 == '/');
    }
    if (0 < iVar3) {
      iVar6 = 0;
      puVar7 = param_2;
      do {
        if (((local_40 != 3) || (local_3c < 1)) &&
           (iVar4 = (*param_3)(*puVar7,&local_40,param_4), iVar6 < iVar4)) {
          iVar6 = iVar4;
        }
        if ((*(char *)puVar7[1] != '/') && (iVar4 = FUN_00404d30(&local_40,iVar6), iVar6 < iVar4)) {
          iVar6 = iVar4;
        }
        puVar7 = puVar7 + 1;
      } while (puVar7 != param_2 + (ulong)(iVar3 - 1) + 1);
      goto LAB_00404fc0;
    }
  }
  iVar6 = 0;
  iVar3 = 0;
LAB_00404fc0:
  FUN_00404e60(&local_40);
  if (iVar3 < param_1) {
    puVar7 = param_2 + iVar3;
    do {
      iVar4 = (*param_3)(*puVar7,&local_40,param_4);
      if (iVar6 < iVar4) {
        iVar6 = iVar4;
      }
      puVar7 = puVar7 + 1;
    } while (puVar7 != param_2 + (ulong)(uint)(iVar2 - iVar3) + (long)iVar3 + 1);
  }
  return iVar6;
}


undefined
FUN_00405020(FILE *param_1,long param_2,undefined param_3,undefined param_4,undefined *param_5,
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
  uVar1 = dcgettext(0,&DAT_0040b638,5);
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
    goto LAB_0040529c;
  case 5:
    uVar1 = param_5[3];
    uVar4 = param_5[2];
    uVar5 = param_5[1];
    uVar6 = *param_5;
    uVar7 = dcgettext(0,"Written by %s, %s, %s,\n%s, and %s.\n",5);
LAB_0040529c:
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
    goto LAB_00405339;
  case 7:
    uVar1 = param_5[2];
    uVar4 = param_5[5];
    uVar5 = param_5[4];
    uVar6 = param_5[3];
    local_58 = param_5[1];
    uVar7 = *param_5;
    uVar3 = dcgettext(0,"Written by %s, %s, %s,\n%s, %s, %s, and %s.\n",5);
LAB_00405339:
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
    goto LAB_0040511a;
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
LAB_0040511a:
  uVar1 = __fprintf_chk(param_1,1,uVar3,uVar7,local_50,local_58,uVar6,uVar5,uVar4,uVar1,local_48);
  return uVar1;
}


void FUN_00405400(void)

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
  FUN_00405020();
  return;
}


void FUN_00405420(void)

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
  FUN_00405020();
  return;
}


void FUN_00405480(void)

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
  FUN_00405020();
  return;
}


void FUN_00405540(void)

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


void FUN_004055c0(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00405810();
  }
  return;
}


void FUN_004055e0(ulong param_1,ulong param_2)

{
  if ((-1 < SUB168(ZEXT816(param_1) * ZEXT816(param_2),0)) &&
     (SUB168(ZEXT816(param_1) * ZEXT816(param_2) >> 0x40,0) == 0)) {
    FUN_004055c0();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00405810();
}


void thunk_FUN_004055c0(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00405810();
  }
  return;
}


void * FUN_00405620(void *param_1,size_t param_2)

{
  void *pvVar1;
  
  if ((param_2 == 0) && (param_1 != (void *)0x0)) {
    free(param_1);
    return (void *)0x0;
  }
  pvVar1 = realloc(param_1,param_2);
  if ((pvVar1 == (void *)0x0) && (param_2 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00405810();
  }
  return pvVar1;
}


void FUN_00405660(undefined param_1,ulong param_2,ulong param_3)

{
  if ((-1 < SUB168(ZEXT816(param_2) * ZEXT816(param_3),0)) &&
     (SUB168(ZEXT816(param_2) * ZEXT816(param_3) >> 0x40,0) == 0)) {
    FUN_00405620();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00405810();
}


void FUN_00405690(long param_1,ulong *param_2,ulong param_3)

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
    if ((SUB168(ZEXT816(uVar2) * ZEXT816(param_3),0) < 0) || (uVar3 != 0)) goto LAB_004056eb;
  }
  else {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x5555555555555554);
    uVar3 = SUB168(auVar1 % ZEXT816(param_3),0);
    if (SUB168(auVar1 / ZEXT816(param_3),0) <= uVar2) {
LAB_004056eb:
                    /* WARNING: Subroutine does not return */
      FUN_00405810(param_1,param_2,uVar3);
    }
    uVar2 = (uVar2 >> 1) + 1 + uVar2;
  }
  *param_2 = uVar2;
  FUN_00405620(param_1,uVar2 * param_3);
  return;
}


void FUN_00405720(long param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (param_1 == 0) {
    if (uVar1 == 0) {
      *param_2 = 0x80;
      FUN_00405620(0,0x80);
      return;
    }
    if ((long)uVar1 < 0) goto LAB_0040576a;
  }
  else {
    if (0x5555555555555553 < uVar1) {
LAB_0040576a:
                    /* WARNING: Subroutine does not return */
      FUN_00405810();
    }
    uVar1 = (uVar1 >> 1) + 1 + uVar1;
  }
  *param_2 = uVar1;
  FUN_00405620(param_1,uVar1);
  return;
}


void FUN_00405770(size_t param_1)

{
  void *__s;
  
  __s = (void *)FUN_004055c0();
  memset(__s,0,param_1);
  return;
}


void FUN_00405790(size_t param_1,ulong param_2)

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
  FUN_00405810();
}


void FUN_004057c0(void *param_1,size_t param_2)

{
  void *__dest;
  
  __dest = (void *)FUN_004055c0(param_2);
  memcpy(__dest,param_1,param_2);
  return;
}


void FUN_004057f0(char *param_1)

{
  void *__dest;
  size_t sVar1;
  
  sVar1 = strlen(param_1);
  __dest = (void *)FUN_004055c0(sVar1 + 1);
  memcpy(__dest,param_1,sVar1 + 1);
  return;
}


void FUN_00405810(void)

{
  undefined uVar1;
  
  uVar1 = dcgettext(0,"memory exhausted",5);
  error(DAT_0060e258,0,"%s",uVar1);
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00405850(long param_1,int *param_2)

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
      if (iVar3 <= iVar8) goto LAB_004058cc;
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
      if (iVar9 <= iVar3) goto LAB_004058cc;
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
LAB_004058cc:
  param_2[0xc] = iVar2;
  param_2[0xb] = iVar1 + (iVar2 - iVar3);
  return;
}


int FUN_00405930(int param_1,undefined *param_2,char *param_3,char **param_4,undefined *param_5,
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
      if ((iVar5 == 0) && (sVar7 = strlen(__s1_00), sVar7 == sVar15)) goto LAB_00405b50;
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
            if (local_70 == (char *)0x0) goto LAB_00405a90;
          }
          else if (local_70 == (char *)0x0) {
            local_70 = (char *)calloc((long)iVar5,1);
            if (local_70 == (char *)0x0) {
              bVar3 = true;
              goto LAB_00405a90;
            }
            bVar4 = true;
            local_70[(int)local_44] = '\x01';
          }
          local_70[lVar16] = '\x01';
        }
      }
LAB_00405a90:
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
              __fprintf_chk(__stream,1,&DAT_0040bab1,param_9,*param_4);
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
LAB_00405b50:
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


uint FUN_00405f50(uint param_1,undefined *param_2,char *param_3,long param_4,undefined param_5,
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
LAB_00405f9a:
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
          goto LAB_0040609d;
        }
        pbVar8 = *(byte **)(param_7 + 8);
      }
      param_7[10] = 0;
    }
LAB_0040609d:
    param_7[6] = 1;
    cVar2 = *param_3;
LAB_004060a8:
    if (cVar2 == ':') {
      uVar3 = 0;
    }
    if (pbVar8 == (byte *)0x0) goto LAB_00406018;
LAB_004060bc:
    if (*pbVar8 == 0) goto LAB_00406018;
  }
  else {
    if (param_7[6] == 0) goto LAB_00405f9a;
    cVar2 = *param_3;
    pbVar8 = *(byte **)(param_7 + 8);
    if ((cVar2 - 0x2bU & 0xfd) != 0) goto LAB_004060a8;
    pcVar4 = param_3 + 1;
    param_3 = param_3 + 1;
    if (*pcVar4 == ':') {
      uVar3 = 0;
    }
    if (pbVar8 != (byte *)0x0) goto LAB_004060bc;
LAB_00406018:
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
        FUN_00405850(param_2,param_7);
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
LAB_00406186:
      if (uVar11 != param_1) {
        *param_7 = uVar11;
      }
      return 0xffffffff;
    }
    lVar6 = 3;
    pbVar8 = (byte *)param_2[(int)uVar11];
    pbVar9 = pbVar8;
    pbVar10 = &DAT_0040bac9;
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
          FUN_00405850(param_2,param_7);
          uVar11 = param_7[0xb];
        }
      }
      param_7[0xc] = param_1;
      *param_7 = param_1;
      goto LAB_00406186;
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
        puVar15 = &DAT_0040bac9;
        goto LAB_004062e5;
      }
      if ((int)param_6 != 0) {
        if (pbVar8[2] == 0) {
          pcVar4 = strchr(param_3,(int)(char)bVar14);
          param_6 = param_6 & 0xffffffff;
          if (pcVar4 != (char *)0x0) goto LAB_00406290;
        }
        *(byte **)(param_7 + 8) = pbVar8 + 1;
        uVar11 = FUN_00405930(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar3,
                              &DAT_0040baca);
        if (uVar11 != 0xffffffff) {
          return uVar11;
        }
        pbVar8 = (byte *)param_2[(int)*param_7];
      }
    }
LAB_00406290:
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
  puVar15 = &DAT_0040bae8;
LAB_004062e5:
  uVar3 = FUN_00405930(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar3,puVar15);
  return uVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406520(void)

{
  DAT_0060e460 = DAT_0060e2bc;
  _DAT_0060e464 = DAT_0060e2b8;
  FUN_00405f50();
  DAT_0060e2bc = DAT_0060e460;
  DAT_0060e4a8 = DAT_0060e470;
  _DAT_0060e2b4 = DAT_0060e468;
  return;
}


void FUN_00406580(void)

{
  FUN_00406520();
  return;
}


void FUN_004065a0(void)

{
  FUN_00406520();
  return;
}


void FUN_004065c0(void)

{
  FUN_00405f50();
  return;
}


void FUN_004065e0(void)

{
  FUN_00406520();
  return;
}


void FUN_00406600(void)

{
  FUN_00405f50();
  return;
}


size_t FUN_00406620(wchar_t *param_1,byte *param_2,size_t param_3,mbstate_t *param_4)

{
  char cVar1;
  size_t sVar2;
  wchar_t local_1c;
  
  if (param_2 == (byte *)0x0) {
    param_3 = 1;
    param_2 = (byte *)0x40bae7;
  }
  else {
    if (param_3 == 0) {
      return 0xfffffffffffffffe;
    }
    if (param_1 != (wchar_t *)0x0) goto LAB_00406644;
  }
  param_1 = &local_1c;
LAB_00406644:
  sVar2 = mbrtowc(param_1,(char *)param_2,param_3,param_4);
  if ((0xfffffffffffffffd < sVar2) && (cVar1 = FUN_00406810(0), cVar1 == '\0')) {
    sVar2 = 1;
    *param_1 = (uint)*param_2;
  }
  return sVar2;
}


ulong FUN_004066a0(FILE *param_1,undefined param_2,undefined param_3)

{
  int iVar1;
  undefined *__ptr;
  size_t sVar2;
  int *piVar3;
  size_t sVar4;
  size_t local_800;
  undefined local_7f8 [2008];
  
  local_800 = 2000;
  __ptr = (undefined *)FUN_004072f0(local_7f8,&local_800,param_2,param_3);
  sVar4 = local_800;
  if (__ptr != (undefined *)0x0) {
    sVar2 = fwrite(__ptr,1,local_800,param_1);
    if (sVar2 < sVar4) {
      sVar4 = 0xffffffff;
      if (__ptr != local_7f8) {
        piVar3 = __errno_location();
        iVar1 = *piVar3;
        free(__ptr);
        *piVar3 = iVar1;
      }
      goto LAB_0040670c;
    }
    if (__ptr != local_7f8) {
      free(__ptr);
    }
    if (sVar4 < 0x80000000) goto LAB_0040670c;
    piVar3 = __errno_location();
    *piVar3 = 0x4b;
  }
  sVar4 = 0xffffffff;
  FUN_004072e0(param_1);
LAB_0040670c:
  return sVar4 & 0xffffffff;
}


ulong FUN_00406760(uint *param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  
  lVar2 = __fpending();
  uVar1 = *param_1;
  uVar3 = FUN_004071c0(param_1);
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


void FUN_004067c0(char *param_1,uint param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 & 0x40) != 0) {
    uVar2 = param_3 & 0xffffffff;
  }
  iVar1 = open(param_1,param_2,uVar2);
  FUN_00407170(iVar1);
  return;
}


bool FUN_00406810(int param_1)

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
    pbVar5 = &DAT_0040baec;
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

char * FUN_00406870(void)

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
  if (DAT_0060e498 != (char *)0x0) goto LAB_004068aa;
  pcVar7 = getenv("CHARSETALIASDIR");
  if ((pcVar7 == (char *)0x0) || (*pcVar7 == '\0')) {
    sVar6 = 0x73;
    sVar5 = 0x65;
    __n = 100;
    pcVar7 = 
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib"
    ;
LAB_00406995:
    __file = (char *)malloc(sVar6);
    if (__file != (char *)0x0) {
      memcpy(__file,pcVar7,__n);
      __file[__n] = '/';
      goto LAB_004069b6;
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
        goto LAB_00406995;
      }
      sVar6 = __n + 0xe;
    }
    __file = (char *)malloc(sVar6);
    if (__file != (char *)0x0) {
      memcpy(__file,pcVar7,__n);
      sVar5 = __n;
LAB_004069b6:
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
LAB_00406a50:
          pbVar8 = (byte *)__stream->_IO_read_ptr;
          if (__stream->_IO_read_end <= pbVar8) goto LAB_00406bdc;
          do {
            __stream->_IO_read_ptr = (char *)(pbVar8 + 1);
            uVar4 = (uint)*pbVar8;
            __ptr = pcVar7;
            while( true ) {
              pcVar7 = __ptr;
              if ((uVar4 - 9 < 2) || (uVar4 == 0x20)) goto LAB_00406a50;
              if (uVar4 == 0x23) goto LAB_00406c41;
              ungetc(uVar4,__stream);
              iVar2 = fscanf(__stream,"%50s %50s",&local_b8,&local_78);
              puVar13 = &local_b8;
              if (iVar2 < 2) goto LAB_00406bef;
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
                FUN_004071c0(__stream);
                goto LAB_004069f4;
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
LAB_00406bdc:
              uVar4 = __uflow(__stream);
              __ptr = pcVar7;
              if (uVar4 == 0xffffffff) goto LAB_00406bef;
            }
          } while( true );
        }
        close(iVar2);
      }
      goto LAB_004069ee;
    }
  }
  DAT_0060e498 = "";
LAB_004068aa:
  cVar1 = *DAT_0060e498;
  pcVar7 = DAT_0060e498;
  do {
    if (cVar1 == '\0') {
LAB_00406904:
      if (*__s1 == '\0') {
        __s1 = "ASCII";
      }
      return __s1;
    }
    iVar2 = strcmp(__s1,pcVar7);
    if ((iVar2 == 0) || ((cVar1 == '*' && (pcVar7[1] == '\0')))) {
      sVar6 = strlen(pcVar7);
      __s1 = pcVar7 + sVar6 + 1;
      goto LAB_00406904;
    }
    sVar6 = strlen(pcVar7);
    sVar5 = strlen(pcVar7 + sVar6 + 1);
    pcVar7 = pcVar7 + sVar6 + 1 + sVar5 + 1;
    cVar1 = *pcVar7;
  } while( true );
LAB_00406c41:
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
  if (uVar4 == 0xffffffff) goto LAB_00406bef;
  goto LAB_00406a50;
LAB_00406bef:
  FUN_004071c0(__stream);
  if (local_d0 == 0) {
LAB_004069ee:
    pcVar7 = "";
  }
  else {
    pcVar7[local_d0] = '\0';
  }
LAB_004069f4:
  free(__file);
  DAT_0060e498 = pcVar7;
  goto LAB_004068aa;
}


long FUN_00406de0(char *param_1,undefined param_2,code *param_3,undefined param_4)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  bool bVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  
  bVar3 = false;
  pcVar8 = (char *)0x0;
  pcVar9 = param_1;
  pcVar10 = param_1;
LAB_00406e10:
  do {
    cVar1 = *pcVar9;
    while( true ) {
      if (cVar1 == '\0') {
        return (long)pcVar10 - (long)param_1;
      }
      pcVar9 = pcVar9 + 1;
      cVar2 = *pcVar9;
      if (cVar2 == '/') break;
      if ((cVar1 != '/' || cVar2 == '\0') || (pcVar8 == (char *)0x0)) goto LAB_00406e10;
      if ((long)pcVar8 - (long)pcVar10 == 1) {
        if (*pcVar10 != '.') {
          *pcVar8 = '\0';
          goto LAB_00406e63;
        }
      }
      else {
        *pcVar8 = '\0';
        if ((((long)pcVar8 - (long)pcVar10 == 2) && (*pcVar10 == '.')) && (pcVar10[1] == '.')) {
          iVar4 = 0;
          bVar3 = false;
          bVar7 = false;
        }
        else {
LAB_00406e63:
          iVar4 = (*param_3)(param_1,pcVar10,param_4);
          if (iVar4 < 0) {
            piVar6 = __errno_location();
            iVar4 = *piVar6;
            bVar7 = bVar3;
          }
          else {
            iVar4 = 0;
            bVar3 = cVar1 == '/' && cVar2 != '\0';
            bVar7 = true;
          }
        }
        iVar5 = FUN_00404ae0(param_2,pcVar10,bVar7,0);
        if ((iVar5 == -1) || (*pcVar8 = '/', iVar5 != 0)) {
          if ((iVar4 != 0) && (piVar6 = __errno_location(), *piVar6 == 2)) {
            *piVar6 = iVar4;
          }
          return (long)iVar5;
        }
      }
      cVar1 = *pcVar9;
      pcVar10 = pcVar9;
    }
    if (cVar1 != '/') {
      pcVar8 = pcVar9;
    }
  } while( true );
}


int FUN_00406f70(int param_1,char *param_2,int param_3,__uid_t param_4,__gid_t param_5,uint param_6,
                uint param_7)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  stat local_c8;
  
  if (param_1 < 0) {
    iVar1 = __xstat(1,param_2,&local_c8);
    if (iVar1 != 0) {
      return iVar1;
    }
    if ((local_c8.st_mode & 0xf000) != 0x4000) {
      piVar2 = __errno_location();
      *piVar2 = 0x14;
      return -1;
    }
LAB_00406fcd:
    if (((param_4 == 0xffffffff) || (local_c8.st_uid == param_4)) &&
       ((param_5 == 0xffffffff || (local_c8.st_gid == param_5)))) {
LAB_00407091:
      uVar3 = 0;
    }
    else {
      if (param_1 < 0) {
        if (param_3 == -1) {
          iVar1 = chown(param_2,param_4,param_5);
        }
        else {
          iVar1 = lchown(param_2,param_4,param_5);
        }
        if (iVar1 != 0) {
          return iVar1;
        }
      }
      else {
        iVar1 = fchown(param_1,param_4,param_5);
        if (iVar1 != 0) goto LAB_004070f0;
      }
      if ((local_c8.st_mode & 0x49) == 0) goto LAB_00407091;
      uVar3 = local_c8.st_mode & 0xc00;
    }
    if ((param_7 & (local_c8.st_mode ^ param_6 | uVar3)) == 0) {
      if (param_1 < 0) {
        return 0;
      }
    }
    else {
      param_6 = ~param_7 & local_c8.st_mode & 0xfff | param_6;
      if (param_1 < 0) {
        iVar1 = chmod(param_2,param_6);
        return iVar1;
      }
      iVar1 = fchmod(param_1,param_6);
      if (iVar1 != 0) goto LAB_004070f0;
    }
    iVar1 = close(param_1);
  }
  else {
    iVar1 = __fxstat(1,param_1,&local_c8);
    if (iVar1 == 0) {
      if ((local_c8.st_mode & 0xf000) == 0x4000) goto LAB_00406fcd;
      piVar2 = __errno_location();
      iVar4 = 0x14;
      iVar1 = -1;
      *piVar2 = 0x14;
    }
    else {
LAB_004070f0:
      piVar2 = __errno_location();
      iVar4 = *piVar2;
    }
    close(param_1);
    *piVar2 = iVar4;
  }
  return iVar1;
}


uint FUN_00407170(uint param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  if (2 < param_1) {
    return param_1;
  }
  uVar2 = FUN_00408e10();
  piVar3 = __errno_location();
  iVar1 = *piVar3;
  close(param_1);
  *piVar3 = iVar1;
  return uVar2;
}


int FUN_004071c0(FILE *param_1)

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
      if (_Var4 == -1) goto LAB_00407227;
    }
    iVar1 = FUN_00407240(param_1);
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
LAB_00407227:
  iVar1 = fclose(param_1);
  return iVar1;
}


void FUN_00407240(FILE *param_1)

{
  int iVar1;
  
  if (param_1 != (FILE *)0x0) {
    iVar1 = __freading();
    if ((iVar1 != 0) && ((param_1->_flags & 0x100U) != 0)) {
      FUN_00407280(param_1,0,1);
      fflush(param_1);
      return;
    }
  }
  fflush(param_1);
  return;
}


ulong FUN_00407280(FILE *param_1,__off_t param_2,int param_3)

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


void FUN_004072e0(uint *param_1)

{
  *param_1 = *param_1 | 0x20;
  return;
}


/* WARNING: Removing unreachable block (ram,0x00408b2c) */
/* WARNING: Removing unreachable block (ram,0x00408c6d) */
/* WARNING: Removing unreachable block (ram,0x00408b40) */
/* WARNING: Removing unreachable block (ram,0x00408014) */
/* WARNING: Removing unreachable block (ram,0x004075e0) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Could not reconcile some variable overlaps */

undefined *
FUN_004072f0(undefined *param_1,undefined *param_2,undefined *param_3,undefined param_4)

{
  undefined uVar1;
  unkbyte10 Var2;
  undefined uVar3;
  uint uVar4;
  void *pvVar5;
  char *pcVar6;
  uint uVar7;
  byte bVar8;
  char cVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *__n;
  undefined *puVar13;
  undefined *puVar14;
  uint *puVar15;
  int *piVar16;
  undefined *puVar17;
  undefined *puVar18;
  ulong uVar19;
  undefined *puVar20;
  char *pcVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  char *pcVar25;
  char *pcVar26;
  undefined *puVar27;
  size_t sVar28;
  uint uVar29;
  long lVar30;
  undefined *puVar31;
  undefined *puVar32;
  bool bVar33;
  ushort in_FPUControlWord;
  float fVar34;
  undefined auStack_6f8 [4];
  uint local_6f4;
  undefined *local_6f0;
  undefined *local_6e8;
  undefined *local_6e0;
  undefined *local_6d8;
  undefined *local_6d0;
  undefined *local_6c8;
  long local_6c0;
  undefined local_6b8;
  undefined *local_6b0;
  undefined local_6a8 [4];
  undefined auStack_6a4 [12];
  undefined *local_698;
  undefined *local_690;
  int local_684;
  undefined local_680;
  uint local_67c;
  undefined local_678 [8];
  undefined *local_670;
  undefined auStack_668 [112];
  long local_588;
  undefined *local_580;
  long local_578;
  ulong local_570;
  undefined auStack_568 [78];
  undefined local_2f8 [356];
  
  local_6d8 = param_2;
  local_690 = param_1;
  iVar10 = FUN_00409180(param_3,&local_588,local_678);
  if (iVar10 < 0) {
    return (undefined *)0x0;
  }
  iVar10 = FUN_00408f60(param_4,local_678);
  if (iVar10 < 0) {
    if (local_580 != auStack_568) {
      free(local_580);
    }
    if (local_670 != auStack_668) {
      free(local_670);
    }
    piVar16 = __errno_location();
    *piVar16 = 0x16;
    return (undefined *)0x0;
  }
  uVar11 = local_578 + 7;
  if (uVar11 < 7) {
    uVar11 = 0xffffffffffffffff;
  }
  uVar12 = uVar11 + local_570;
  puVar27 = auStack_6f8;
  if ((!CARRY8(uVar11,local_570)) &&
     (sVar28 = uVar12 + 6, puVar27 = auStack_6f8, uVar12 < 0xfffffffffffffffa)) {
    if (sVar28 < 4000) {
      local_6e0 = (undefined *)0x0;
      lVar30 = -(uVar12 + 0x1d & 0xfffffffffffffff0);
      puVar27 = auStack_6f8 + lVar30;
      local_6b0 = (undefined *)((long)&local_6f0 + lVar30);
LAB_004073b4:
      puVar31 = (undefined *)0x0;
      if (local_690 != (undefined *)0x0) {
        puVar31 = (undefined *)*local_6d8;
      }
      __n = (undefined *)0x0;
      local_6c0 = 0;
      puVar24 = (undefined *)*local_580;
      puVar20 = local_690;
      _local_6a8 = (int *)param_3;
      puVar32 = local_580;
      puVar14 = __n;
      if (puVar24 == param_3) goto LAB_00407568;
      do {
        puVar24 = (undefined *)((long)puVar24 - (long)_local_6a8);
        __n = puVar14 + (long)puVar24;
        puVar13 = puVar20;
        if (CARRY8((ulong)puVar14,(ulong)puVar24)) {
          if (puVar31 != (undefined *)0xffffffffffffffff) goto LAB_004078e0;
          __n = (undefined *)0xffffffffffffffff;
        }
        else if (puVar31 < __n) {
          if (puVar31 == (undefined *)0x0) {
            if (__n < (undefined *)0xd) {
              puVar31 = (undefined *)0xc;
            }
            else {
LAB_004074fe:
              puVar31 = __n;
              if (__n == (undefined *)0xffffffffffffffff) goto LAB_004078e0;
            }
          }
          else {
            if ((long)puVar31 < 0) goto LAB_004078e0;
            puVar31 = (undefined *)((long)puVar31 * 2);
            if (puVar31 < __n) goto LAB_004074fe;
          }
          if ((puVar20 == (undefined *)0x0) || (puVar20 == local_690)) {
            local_6b8 = (undefined *)_local_6a8;
            _local_6a8 = (float)CONCAT91(stack0xfffffffffffff959,puVar20 == local_690);
            local_698 = puVar24;
            *(undefined *)(puVar27 + -8) = 0x40745c;
            puVar13 = (undefined *)malloc((size_t)puVar31);
            if (puVar13 == (undefined *)0x0) goto LAB_004078e0;
            puVar24 = local_698;
            _local_6a8 = (int *)local_6b8;
            if ((puVar14 != (undefined *)0x0) && (local_6a8[0] != '\0')) {
              _local_6a8 = (float)CONCAT28(auStack_6a4._4_2_,local_6b8);
              *(undefined *)(puVar27 + -8) = 0x4074aa;
              puVar13 = (undefined *)memcpy(puVar13,puVar20,(size_t)puVar14);
              puVar24 = local_698;
            }
          }
          else {
            local_698 = puVar24;
            *(undefined *)(puVar27 + -8) = 0x40753f;
            puVar13 = (undefined *)realloc(puVar20,(size_t)puVar31);
            if (puVar13 == (undefined *)0x0) {
LAB_00407af5:
              *(undefined *)(puVar27 + -8) = 0x407afa;
              piVar16 = __errno_location();
              _local_6a8 = (float)CONCAT28(auStack_6a4._4_2_,piVar16);
              goto LAB_00407b08;
            }
            puVar24 = local_698;
          }
        }
        *(undefined *)(puVar27 + -8) = 0x407568;
        memcpy((undefined *)((long)puVar13 + (long)puVar14),_local_6a8,(size_t)puVar24);
        puVar20 = puVar13;
LAB_00407568:
        do {
          if (local_588 == local_6c0) {
            puVar14 = __n + 1;
            puVar24 = puVar20;
            if ((undefined *)0xfffffffffffffffe < __n) {
              if (puVar31 == (undefined *)0xffffffffffffffff) goto LAB_004086f2;
              goto LAB_004078e0;
            }
            if (puVar14 <= puVar31) goto LAB_004086f2;
            if (puVar31 == (undefined *)0x0) {
              if (puVar14 < (undefined *)0xd) {
                puVar31 = (undefined *)0xc;
              }
              else {
LAB_00408ccf:
                puVar31 = puVar14;
                if (puVar14 == (undefined *)0xffffffffffffffff) goto LAB_004078e0;
              }
            }
            else {
              if ((long)puVar31 < 0) goto LAB_004078e0;
              puVar31 = (undefined *)((long)puVar31 * 2);
              if (puVar31 < puVar14) goto LAB_00408ccf;
            }
            bVar33 = puVar20 == local_690;
            if ((puVar20 == (undefined *)0x0) || (bVar33)) {
              *(undefined *)(puVar27 + -8) = 0x408c89;
              puVar24 = (undefined *)malloc((size_t)puVar31);
              if (puVar24 == (undefined *)0x0) goto LAB_004078e0;
              if ((__n != (undefined *)0x0) && (bVar33)) {
                *(undefined *)(puVar27 + -8) = 0x408cb5;
                puVar24 = (undefined *)memcpy(puVar24,puVar20,(size_t)__n);
              }
            }
            else {
              *(undefined *)(puVar27 + -8) = 0x4086e6;
              puVar24 = (undefined *)realloc(puVar20,(size_t)puVar31);
              if (puVar24 == (undefined *)0x0) goto LAB_00407af5;
            }
LAB_004086f2:
            *(undefined *)((long)puVar24 + (long)__n) = 0;
            if ((puVar14 < puVar31) && (puVar24 != local_690)) {
              *(undefined *)(puVar27 + -8) = 0x408710;
              puVar20 = (undefined *)realloc(puVar24,(size_t)puVar14);
              if (puVar20 != (undefined *)0x0) {
                puVar24 = puVar20;
              }
            }
            puVar31 = local_6e0;
            if (local_6e0 != (undefined *)0x0) {
              *(undefined *)(puVar27 + -8) = 0x40872b;
              free(puVar31);
            }
            if (local_580 != auStack_568) {
              *(undefined *)(puVar27 + -8) = 0x408747;
              free(local_580);
            }
            if (local_670 != auStack_668) {
              *(undefined *)(puVar27 + -8) = 0x408763;
              free(local_670);
            }
            *local_6d8 = __n;
            return puVar24;
          }
          bVar8 = *(byte *)(puVar32 + 9);
          lVar30 = puVar32[10];
          if (bVar8 == 0x25) {
            if (lVar30 != -1) goto LAB_0040801c;
            puVar14 = __n + 1;
            puVar24 = puVar20;
            if (__n < (undefined *)0xffffffffffffffff) {
              if (puVar31 < puVar14) {
                if (puVar31 == (undefined *)0x0) {
                  if (puVar14 < (undefined *)0xd) {
                    puVar31 = (undefined *)0xc;
                  }
                  else {
LAB_00408292:
                    puVar31 = puVar14;
                    if (puVar14 == (undefined *)0xffffffffffffffff) goto LAB_004078e0;
                  }
                }
                else {
                  if ((long)puVar31 < 0) goto LAB_004078e0;
                  puVar31 = (undefined *)((long)puVar31 * 2);
                  if (puVar31 < puVar14) goto LAB_00408292;
                }
                if ((puVar20 == (undefined *)0x0) || (puVar20 == local_690)) {
                  local_698 = (undefined *)
                              ((ulong)local_698 & 0xffffffffffffff00 | (ulong)(puVar20 == local_690)
                              );
                  *(undefined *)(puVar27 + -8) = 0x4081de;
                  puVar24 = (undefined *)malloc((size_t)puVar31);
                  if (puVar24 == (undefined *)0x0) goto LAB_004078e0;
                  if ((__n != (undefined *)0x0) && ((char)local_698 != '\0')) {
                    *(undefined *)(puVar27 + -8) = 0x408210;
                    puVar24 = (undefined *)memcpy(puVar24,puVar20,(size_t)__n);
                  }
                }
                else {
                  *(undefined *)(puVar27 + -8) = 0x4079d6;
                  puVar24 = (undefined *)realloc(puVar20,(size_t)puVar31);
                  if (puVar24 == (undefined *)0x0) goto LAB_00407af5;
                }
              }
            }
            else {
              if (puVar31 != (undefined *)0xffffffffffffffff) goto LAB_004078e0;
              puVar14 = (undefined *)0xffffffffffffffff;
            }
            *(undefined *)((long)puVar24 + (long)__n) = 0x25;
            puVar20 = puVar24;
            __n = puVar14;
            goto LAB_004079e7;
          }
          if (lVar30 == -1) goto LAB_0040801c;
          puVar15 = (uint *)(local_670 + lVar30 * 0x10);
          uVar4 = *puVar15;
          local_698 = (undefined *)((ulong)local_698 & 0xffffffff00000000 | (ulong)uVar4);
          if (bVar8 == 0x6e) {
            switch(uVar4) {
            case 0x12:
              **(undefined **)(puVar15 + 4) = (char)__n;
              break;
            case 0x13:
              **(undefined **)(puVar15 + 4) = (short)__n;
              break;
            case 0x14:
              **(undefined **)(puVar15 + 4) = (int)__n;
              break;
            case 0x15:
            case 0x16:
              **(undefined **)(puVar15 + 4) = __n;
              break;
            default:
switchD_00407a4c_caseD_5:
                    /* WARNING: Subroutine does not return */
              *(undefined *)(puVar27 + -8) = 0x401c03;
              abort();
            }
          }
          else {
            bVar8 = bVar8 & 0xdf;
            if (((((byte)(bVar8 + 0xbb) < 3) || (bVar8 == 0x41)) && (uVar4 == 0xc)) &&
               (fVar34 = *(float *)(puVar15 + 4), fVar34 == fVar34 + fVar34)) {
              pcVar21 = (char *)puVar32[4];
              local_6b8._0_4_ = *(uint *)(puVar32 + 2);
              if ((char *)puVar32[3] == pcVar21) {
                puVar24 = (undefined *)0x0;
              }
              else {
                puVar13 = (undefined *)puVar32[5];
                if (puVar13 == (undefined *)0xffffffffffffffff) {
                  puVar24 = (undefined *)0x0;
                  local_698 = puVar13;
                  pcVar25 = (char *)puVar32[3];
                  do {
                    pcVar26 = pcVar25 + 1;
                    uVar11 = 0xffffffffffffffff;
                    if (puVar24 < (undefined *)0x199999999999999a) {
                      uVar11 = (long)puVar24 * 10;
                    }
                    puVar24 = (undefined *)((long)(*pcVar25 + -0x30) + uVar11);
                    pcVar6 = pcVar26;
                    if (CARRY8((long)(*pcVar25 + -0x30),uVar11)) {
                      do {
                        puVar24 = local_698;
                        if (pcVar21 == pcVar6) goto LAB_00407870;
                        pcVar26 = pcVar6 + 1;
                        cVar9 = *pcVar6;
                        pcVar6 = pcVar26;
                      } while (cVar9 != '0');
                      puVar24 = (undefined *)0xffffffffffffffff;
                    }
                    pcVar25 = pcVar26;
                  } while (pcVar21 != pcVar26);
                }
                else {
                  if (*(int *)(local_670 + (long)puVar13 * 0x10) != 5) goto LAB_0040801c;
                  iVar10 = *(int *)((long)(local_670 + (long)puVar13 * 0x10) + 0x10);
                  puVar24 = (undefined *)(long)iVar10;
                  if (iVar10 < 0) {
                    local_6b8._0_4_ = (uint)local_6b8 | 2;
                    puVar24 = (undefined *)-(long)(undefined *)(long)iVar10;
                  }
                }
              }
LAB_00407870:
              pcVar21 = (char *)puVar32[7];
              if ((char *)puVar32[6] == pcVar21) {
LAB_00407f20:
                puVar18 = (undefined *)0xc;
                if (bVar8 != 0x41) {
                  puVar18 = (undefined *)0x12;
                }
                puVar13 = (undefined *)0x0;
                if (bVar8 != 0x41) {
                  puVar13 = (undefined *)0x6;
                }
              }
              else {
                if (puVar32[8] == -1) {
                  pcVar25 = (char *)puVar32[6] + 1;
                  puVar13 = (undefined *)0x0;
                  if (pcVar21 != pcVar25) {
                    do {
                      pcVar26 = pcVar25 + 1;
                      uVar11 = 0xffffffffffffffff;
                      if (puVar13 < (undefined *)0x199999999999999a) {
                        uVar11 = (long)puVar13 * 10;
                      }
                      puVar13 = (undefined *)((long)(*pcVar25 + -0x30) + uVar11);
                      pcVar6 = pcVar26;
                      if (CARRY8((long)(*pcVar25 + -0x30),uVar11)) {
                        do {
                          if (pcVar21 == pcVar6) goto LAB_004078e0;
                          pcVar26 = pcVar6 + 1;
                          cVar9 = *pcVar6;
                          pcVar6 = pcVar26;
                        } while (cVar9 != '0');
                        puVar13 = (undefined *)0xffffffffffffffff;
                      }
                      pcVar25 = pcVar26;
                    } while (pcVar21 != pcVar26);
                    goto LAB_004078ac;
                  }
                }
                else {
                  if (*(int *)(local_670 + puVar32[8] * 0x10) != 5) goto LAB_0040801c;
                  iVar10 = *(int *)((long)(local_670 + puVar32[8] * 0x10) + 0x10);
                  puVar13 = (undefined *)(long)iVar10;
                  if (iVar10 < 0) goto LAB_00407f20;
LAB_004078ac:
                  if (puVar13 != (undefined *)0x0) {
                    puVar18 = puVar13 + 6;
                    if (puVar13 < (undefined *)0xfffffffffffffff4) goto LAB_00407f3e;
                    goto LAB_004078e0;
                  }
                }
                puVar18 = (undefined *)0xc;
              }
LAB_00407f3e:
              if (puVar18 <= puVar24) {
                puVar18 = puVar24;
              }
              puVar17 = (undefined *)((long)puVar18 + 1);
              local_698 = puVar17;
              if (puVar18 == (undefined *)0xffffffffffffffff) goto LAB_004078e0;
              if (puVar17 < (undefined *)0x2bd) {
                puVar18 = local_2f8;
              }
              else {
                local_6d0 = puVar24;
                local_6c8 = puVar13;
                local_6b8 = (undefined *)
                            ((ulong)local_6b8 & 0xffffffff00000000 | (ulong)(uint)local_6b8);
                _local_6a8 = fVar34;
                if (puVar17 == (undefined *)0xffffffffffffffff) goto LAB_004078e0;
                *(undefined *)(puVar27 + -8) = 0x407f92;
                puVar18 = (undefined *)malloc((size_t)puVar17);
                puVar13 = local_6c8;
                puVar24 = local_6d0;
                fVar34 = _local_6a8;
                if (puVar18 == (undefined *)0x0) goto LAB_004078e0;
              }
              uVar4 = local_680 & 0xffff0000;
              uVar29 = (uint)in_FPUControlWord;
              local_680 = uVar4 | uVar29;
              uVar7 = local_680;
              local_680 = local_680 | 0x300;
              if ((float)0 <= fVar34) {
                if (((uint)local_6b8 & 4) == 0) {
                  puVar17 = puVar18;
                  if (((uint)local_6b8 & 8) != 0) {
                    puVar17 = (undefined *)((long)puVar18 + 1);
                    *(undefined *)puVar18 = 0x20;
                  }
                }
                else {
                  *(undefined *)puVar18 = 0x2b;
                  puVar17 = (undefined *)((long)puVar18 + 1);
                }
              }
              else {
                *(undefined *)puVar18 = 0x2d;
                fVar34 = -fVar34;
                puVar17 = (undefined *)((long)puVar18 + 1);
              }
              local_680._2_2_ = (undefined)(uVar4 >> 0x10);
              if (fVar34 <= (float)0) {
                if (fVar34 != (float)0) goto LAB_0040801c;
                bVar8 = *(byte *)(puVar32 + 9) & 0xdf;
                if (bVar8 == 0x46) {
                  *(undefined *)puVar17 = 0x30;
                  if ((((uint)local_6b8 & 0x10) == 0) && (puVar13 == (undefined *)0x0)) {
LAB_00408467:
                    puVar13 = (undefined *)((long)puVar17 + 1);
                  }
                  else {
                    local_6f0 = (undefined *)
                                ((ulong)local_6f0 & 0xffffffff00000000 |
                                (ulong)uVar7 & 0xffffffff0000ffff);
                    local_6e8 = puVar24;
                    local_6d0 = puVar18;
                    local_6c8 = puVar13;
                    local_6b8 = (undefined *)
                                ((ulong)local_6b8 & 0xffffffff00000000 | (ulong)(uint)local_6b8);
                    _local_6a8 = (float)CONCAT28(auStack_6a4._4_2_,puVar17 + 1);
                    *(undefined *)(puVar27 + -8) = 0x4089a1;
                    pcVar21 = nl_langinfo(0x10000);
                    cVar9 = *pcVar21;
                    in_FPUControlWord = (ushort)local_6f0;
                    if (cVar9 == '\0') {
                      cVar9 = '.';
                    }
                    *(char *)((long)puVar17 + 1) = cVar9;
                    puVar18 = local_6d0;
                    puVar13 = (undefined *)_local_6a8;
                    puVar24 = local_6e8;
                    if (local_6c8 != (undefined *)0x0) {
                      do {
                        puVar22 = (undefined *)((long)puVar13 + 1);
                        *(undefined *)puVar13 = 0x30;
                        puVar13 = puVar22;
                      } while (puVar22 != (undefined *)((long)(puVar17 + 1) + (long)local_6c8));
                      puVar13 = (undefined *)((long)_local_6a8 + (long)local_6c8);
                    }
                  }
                }
                else if (bVar8 == 0x45) {
                  *(undefined *)puVar17 = 0x30;
                  if ((((uint)local_6b8 & 0x10) != 0) ||
                     (_local_6a8 = (int *)((long)puVar17 + 1), puVar13 != (undefined *)0x0)) {
                    local_6f0 = (undefined *)
                                ((ulong)local_6f0 & 0xffffffff00000000 |
                                (ulong)uVar7 & 0xffffffff0000ffff);
                    local_6e8 = puVar24;
                    local_6d0 = puVar18;
                    local_6c8 = puVar13;
                    local_6b8 = (undefined *)
                                ((ulong)local_6b8 & 0xffffffff00000000 | (ulong)(uint)local_6b8);
                    _local_6a8 = (float)CONCAT28(auStack_6a4._4_2_,puVar17 + 1);
                    *(undefined *)(puVar27 + -8) = 0x408bff;
                    pcVar21 = nl_langinfo(0x10000);
                    cVar9 = *pcVar21;
                    if (cVar9 == '\0') {
                      cVar9 = '.';
                    }
                    *(char *)((long)puVar17 + 1) = cVar9;
                    puVar18 = local_6d0;
                    puVar24 = local_6e8;
                    in_FPUControlWord = (ushort)local_6f0;
                    if (local_6c8 != (undefined *)0x0) {
                      puVar14 = (undefined *)_local_6a8;
                      do {
                        puVar23 = puVar14 + 1;
                        *puVar14 = 0x30;
                        puVar14 = puVar23;
                      } while (puVar23 != (undefined *)((long)(puVar17 + 1) + (long)local_6c8));
                      _local_6a8 = (int *)((long)_local_6a8 + (long)local_6c8);
                    }
                  }
                  uVar3 = *(undefined *)(puVar32 + 9);
                  puVar13 = (undefined *)((long)_local_6a8 + 4);
                  *(undefined *)((long)_local_6a8 + 3) = 0x30;
                  *(undefined *)_local_6a8 = uVar3;
                  *(undefined *)((long)_local_6a8 + 1) = 0x302b;
                }
                else if (bVar8 == 0x47) {
                  *(undefined *)puVar17 = 0x30;
                  if (((uint)local_6b8 & 0x10) == 0) goto LAB_00408467;
                  if (puVar13 == (undefined *)0x0) {
                    local_6e8 = (undefined *)
                                ((ulong)local_6e8 & 0xffffffff00000000 |
                                (ulong)uVar7 & 0xffffffff0000ffff);
                    local_6d0 = puVar24;
                    local_6c8 = puVar17 + 1;
                    local_6b8 = puVar18;
                    _local_6a8 = (float)CONCAT64(auStack_6a4._0_6_,(uint)local_6b8);
                    *(undefined *)(puVar27 + -8) = 0x408db7;
                    pcVar21 = nl_langinfo(0x10000);
                    cVar9 = *pcVar21;
                    in_FPUControlWord = (ushort)local_6e8;
                    if (cVar9 == '\0') {
                      cVar9 = '.';
                    }
                    *(char *)((long)puVar17 + 1) = cVar9;
                    puVar18 = local_6b8;
                    puVar13 = local_6c8;
                    puVar24 = local_6d0;
                    local_6b8._0_4_ = (uint)local_6a8;
                  }
                  else {
                    local_6f4 = uVar29;
                    local_6f0 = puVar24;
                    local_6e8 = puVar17 + 1;
                    local_6d0 = puVar18;
                    local_6c8 = (undefined *)
                                ((ulong)local_6c8 & 0xffffffff00000000 | (ulong)(uint)local_6b8);
                    local_6b8 = puVar13;
                    _local_6a8 = (float)CONCAT28(auStack_6a4._4_2_,
                                                   (undefined *)((long)puVar13 + -1));
                    *(undefined *)(puVar27 + -8) = 0x4088cd;
                    pcVar21 = nl_langinfo(0x10000);
                    cVar9 = *pcVar21;
                    in_FPUControlWord = (ushort)local_6f4;
                    if (cVar9 == '\0') {
                      cVar9 = '.';
                    }
                    *(char *)((long)puVar17 + 1) = cVar9;
                    puVar18 = local_6d0;
                    puVar13 = local_6e8;
                    puVar24 = local_6f0;
                    local_6b8._0_4_ = (uint)local_6c8;
                    if (_local_6a8 != (int *)0x0) {
                      do {
                        puVar22 = (undefined *)((long)puVar13 + 1);
                        *(undefined *)puVar13 = 0x30;
                        puVar13 = puVar22;
                      } while (puVar22 !=
                               (undefined *)((undefined *)((long)puVar17 + 1) + (long)local_6b8));
                      puVar13 = (undefined *)((long)local_6e8 + (long)_local_6a8);
                    }
                  }
                }
                else {
                  if (bVar8 != 0x41) goto LAB_0040801c;
                  *(undefined *)puVar17 = 0x30;
                  _local_6a8 = (float)CONCAT28(auStack_6a4._4_2_,puVar17 + 1);
                  cVar9 = *(char *)(puVar32 + 9);
                  *(undefined *)(puVar17 + 1) = 0x30;
                  *(char *)((long)puVar17 + 1) = cVar9 + '\x17';
                  if ((((uint)local_6b8 & 0x10) != 0) ||
                     (puVar22 = (undefined *)((long)puVar17 + 3), puVar13 != (undefined *)0x0)) {
                    local_6f4 = uVar29;
                    local_6f0 = puVar24;
                    local_6e8 = puVar18;
                    local_6d0 = puVar13;
                    local_6c8 = (undefined *)
                                ((ulong)local_6c8 & 0xffffffff00000000 | (ulong)(uint)local_6b8);
                    local_6b8 = puVar17 + 2;
                    *(undefined *)(puVar27 + -8) = 0x408d19;
                    pcVar21 = nl_langinfo(0x10000);
                    cVar9 = *pcVar21;
                    if (cVar9 == '\0') {
                      cVar9 = '.';
                    }
                    *(char *)((long)puVar17 + 3) = cVar9;
                    puVar18 = local_6e8;
                    puVar22 = local_6b8;
                    puVar24 = local_6f0;
                    local_6b8._0_4_ = (uint)local_6c8;
                    uVar29 = local_6f4;
                    if (local_6d0 != (undefined *)0x0) {
                      puVar13 = local_6b8;
                      do {
                        puVar22 = (undefined *)((long)puVar13 + 1);
                        *(undefined *)puVar13 = 0x30;
                        puVar13 = puVar22;
                      } while (puVar22 != (undefined *)((long)(puVar17 + 2) + (long)local_6d0));
                      puVar22 = (undefined *)((long)local_6b8 + (long)local_6d0);
                    }
                  }
                  in_FPUControlWord = (ushort)uVar29;
                  cVar9 = *(char *)(puVar32 + 9);
                  puVar13 = (undefined *)((long)puVar22 + 3);
                  *(undefined *)((long)puVar22 + 1) = 0x302b;
                  *(char *)puVar22 = cVar9 + '\x0f';
                  puVar17 = (undefined *)_local_6a8;
                }
              }
              else {
                if (fVar34 + fVar34 != fVar34) goto LAB_0040801c;
                puVar13 = (undefined *)((long)puVar17 + 3);
                if ((byte)(*(char *)(puVar32 + 9) + 0xbfU) < 0x1a) {
                  *(undefined *)(puVar17 + 1) = 0x46;
                  *puVar17 = 0x4e49;
                  puVar17 = (undefined *)0x0;
                }
                else {
                  *(undefined *)(puVar17 + 1) = 0x66;
                  *puVar17 = 0x6e69;
                  puVar17 = (undefined *)0x0;
                }
              }
              local_680 = CONCAT22(local_680._2_2_,in_FPUControlWord);
              _local_6a8 = (int *)((long)puVar13 - (long)puVar18);
              if (_local_6a8 < puVar24) {
                lVar30 = (long)puVar24 - (long)_local_6a8;
                puVar24 = (undefined *)((long)puVar13 + lVar30);
                _local_6a8 = (int *)((long)puVar24 - (long)puVar18);
                if (((uint)local_6b8 & 2) == 0) {
                  if ((((uint)local_6b8 & 0x20) == 0) || (puVar17 == (undefined *)0x0)) {
                    puVar14 = (undefined *)0xffffffffffffffff;
                    puVar17 = puVar13;
                    if (puVar18 < puVar13) {
                      do {
                        *(undefined *)((long)puVar24 + (long)puVar14) =
                             *(undefined *)((long)puVar13 + (long)puVar14);
                        puVar14 = puVar14 + -1;
                        puVar17 = puVar18;
                      } while ((undefined *)((long)puVar18 + (-1 - (long)puVar13)) != puVar14);
                    }
                    if (lVar30 != 0) {
                      puVar24 = puVar17;
                      do {
                        puVar13 = (undefined *)((long)puVar24 + 1);
                        *(undefined *)puVar24 = 0x20;
                        puVar24 = puVar13;
                      } while (puVar13 != (undefined *)(lVar30 + (long)puVar17));
                    }
                  }
                  else {
                    puVar22 = puVar13;
                    if (puVar17 < puVar13) {
                      puVar14 = (undefined *)0xffffffffffffffff;
                      do {
                        *(undefined *)((long)puVar24 + (long)puVar14) =
                             *(undefined *)((long)puVar13 + (long)puVar14);
                        puVar14 = puVar14 + -1;
                        puVar22 = puVar17;
                      } while (puVar14 != (undefined *)((long)puVar17 + (-1 - (long)puVar13)));
                    }
                    if (lVar30 != 0) {
                      puVar24 = puVar22;
                      do {
                        puVar13 = (undefined *)((long)puVar24 + 1);
                        *(undefined *)puVar24 = 0x30;
                        puVar24 = puVar13;
                      } while (puVar13 != (undefined *)(lVar30 + (long)puVar22));
                    }
                  }
                }
                else if (lVar30 != 0) {
                  do {
                    puVar17 = (undefined *)((long)puVar13 + 1);
                    *(undefined *)puVar13 = 0x20;
                    puVar13 = puVar17;
                  } while (puVar24 != puVar17);
                }
              }
              if (local_698 <= _local_6a8) {
LAB_0040801c:
                    /* WARNING: Subroutine does not return */
                *(undefined **)(puVar27 + -8) = &UNK_00408021;
                abort();
              }
              puVar14 = __n + (long)_local_6a8;
              puVar24 = puVar20;
              if (puVar31 + -(long)__n <= _local_6a8) {
                if (CARRY8((ulong)__n,(ulong)_local_6a8) == false) {
                  if (puVar31 < puVar14) {
                    if (puVar31 == (undefined *)0x0) {
                      if (puVar14 < (undefined *)0xd) {
                        puVar31 = (undefined *)0xc;
                      }
                      else {
LAB_00408b1a:
                        puVar31 = puVar14;
                        if (puVar14 == (undefined *)0xffffffffffffffff) goto LAB_004078e0;
                      }
                    }
                    else {
                      if ((long)puVar31 < 0) goto LAB_004078e0;
                      puVar31 = (undefined *)((long)puVar31 * 2);
                      if (puVar31 < puVar14) goto LAB_00408b1a;
                    }
                    if ((puVar20 == (undefined *)0x0) || (puVar20 == local_690)) {
                      local_6b8 = (undefined *)
                                  ((ulong)local_6b8 & 0xffffffffffffff00 |
                                  (ulong)(puVar20 == local_690));
                      local_698 = puVar18;
                      *(undefined *)(puVar27 + -8) = 0x408807;
                      puVar24 = (undefined *)malloc((size_t)puVar31);
                      if (puVar24 == (undefined *)0x0) goto LAB_004078e0;
                      puVar18 = local_698;
                      if ((__n != (undefined *)0x0) && ((char)local_6b8 != '\0')) {
                        *(undefined *)(puVar27 + -8) = 0x408855;
                        puVar24 = (undefined *)memcpy(puVar24,puVar20,(size_t)__n);
                        puVar18 = local_698;
                      }
                    }
                    else {
                      local_698 = puVar18;
                      *(undefined *)(puVar27 + -8) = 0x408582;
                      puVar24 = (undefined *)realloc(puVar20,(size_t)puVar31);
                      if (puVar24 == (undefined *)0x0) goto LAB_004078e0;
                      puVar18 = local_698;
                    }
                  }
                }
                else if (puVar31 != (undefined *)0xffffffffffffffff) goto LAB_004078e0;
              }
              local_698 = puVar18;
              *(undefined *)(puVar27 + -8) = 0x4085b6;
              memcpy((undefined *)((long)puVar24 + (long)__n),puVar18,(size_t)_local_6a8);
              puVar13 = local_698;
              puVar20 = puVar24;
              __n = puVar14;
              if (local_698 != local_2f8) {
                *(undefined *)(puVar27 + -8) = 0x4085d5;
                free(puVar13);
              }
            }
            else {
              uVar4 = *(uint *)(puVar32 + 2);
              puVar24 = (undefined *)(local_6b0 + 1);
              *local_6b0 = 0x25;
              if ((uVar4 & 1) != 0) {
                local_6b0[1] = 0x27;
                puVar24 = (undefined *)(local_6b0 + 2);
              }
              if ((uVar4 & 2) != 0) {
                *(undefined *)puVar24 = 0x2d;
                puVar24 = (undefined *)((long)puVar24 + 1);
              }
              if ((uVar4 & 4) != 0) {
                *(undefined *)puVar24 = 0x2b;
                puVar24 = (undefined *)((long)puVar24 + 1);
              }
              if ((uVar4 & 8) != 0) {
                *(undefined *)puVar24 = 0x20;
                puVar24 = (undefined *)((long)puVar24 + 1);
              }
              if ((uVar4 & 0x10) != 0) {
                *(undefined *)puVar24 = 0x23;
                puVar24 = (undefined *)((long)puVar24 + 1);
              }
              if ((uVar4 & 0x40) != 0) {
                *(undefined *)puVar24 = 0x49;
                puVar24 = (undefined *)((long)puVar24 + 1);
              }
              if ((uVar4 & 0x20) != 0) {
                *(undefined *)puVar24 = 0x30;
                puVar24 = (undefined *)((long)puVar24 + 1);
              }
              pvVar5 = (void *)puVar32[3];
              puVar13 = local_670;
              if (pvVar5 != (void *)puVar32[4]) {
                local_6b8 = local_670;
                sVar28 = (long)(void *)puVar32[4] - (long)pvVar5;
                _local_6a8 = (float)CONCAT28(auStack_6a4._4_2_,sVar28);
                *(undefined *)(puVar27 + -8) = 0x407689;
                memcpy(puVar24,pvVar5,sVar28);
                puVar24 = (undefined *)((long)puVar24 + (long)_local_6a8);
                puVar13 = local_6b8;
              }
              pvVar5 = (void *)puVar32[6];
              if (pvVar5 != (void *)puVar32[7]) {
                local_6b8 = puVar13;
                sVar28 = (long)(void *)puVar32[7] - (long)pvVar5;
                _local_6a8 = (float)CONCAT28(auStack_6a4._4_2_,sVar28);
                *(undefined *)(puVar27 + -8) = 0x4076c6;
                memcpy(puVar24,pvVar5,sVar28);
                puVar24 = (undefined *)((long)puVar24 + (long)_local_6a8);
                puVar13 = local_6b8;
              }
              if ((uint)local_698 < 0x11) {
                uVar11 = 1L << ((byte)local_698 & 0x3f);
                if ((uVar11 & 0x14180) == 0) {
                  if ((uVar11 & 0x1000) == 0) {
                    if ((uVar11 & 0x600) != 0) {
                      *(undefined *)puVar24 = 0x6c;
                      puVar24 = (undefined *)((long)puVar24 + 1);
                      goto LAB_00407ae8;
                    }
                  }
                  else {
                    *(undefined *)puVar24 = 0x4c;
                    puVar24 = (undefined *)((long)puVar24 + 1);
                  }
                }
                else {
LAB_00407ae8:
                  *(undefined *)puVar24 = 0x6c;
                  puVar24 = (undefined *)((long)puVar24 + 1);
                }
              }
              uVar3 = *(undefined *)(puVar32 + 9);
              *(undefined *)((long)puVar24 + 1) = 0;
              *(undefined *)puVar24 = uVar3;
              if (puVar32[5] == -1) {
                local_6b8 = (undefined *)((ulong)local_6b8._4_4_ << 0x20);
              }
              else {
                if (*(int *)(puVar13 + puVar32[5] * 0x10) != 5) goto LAB_0040801c;
                local_6b8 = (undefined *)CONCAT44(local_6b8._4_4_,1);
                local_680 = *(uint *)((long)(puVar13 + puVar32[5] * 0x10) + 0x10);
              }
              if (puVar32[8] != -1) {
                if (*(int *)(puVar13 + puVar32[8] * 0x10) != 5) goto LAB_0040801c;
                (&local_680)[(ulong)local_6b8 & 0xffffffff] =
                     *(int *)((long)(puVar13 + puVar32[8] * 0x10) + 0x10);
                local_6b8 = (undefined *)
                            ((ulong)local_6b8 & 0xffffffff00000000 | (ulong)((uint)local_6b8 + 1));
              }
              puVar14 = __n + 2;
              puVar13 = puVar20;
              if (__n < (undefined *)0xfffffffffffffffe) {
                if (puVar31 < puVar14) {
                  if (puVar31 == (undefined *)0x0) {
                    if (puVar14 < (undefined *)0xd) {
                      puVar31 = (undefined *)0xc;
                    }
                    else {
LAB_00407ed2:
                      puVar31 = puVar14;
                      if (puVar14 == (undefined *)0xffffffffffffffff) goto LAB_004078e0;
                    }
                  }
                  else {
                    if ((long)puVar31 < 0) goto LAB_004078e0;
                    puVar31 = (undefined *)((long)puVar31 * 2);
                    if (puVar31 < puVar14) goto LAB_00407ed2;
                  }
                  if ((puVar20 == (undefined *)0x0) || (puVar20 == local_690)) {
                    _local_6a8 = (float)CONCAT91(stack0xfffffffffffff959,puVar20 == local_690);
                    *(undefined *)(puVar27 + -8) = 0x40817e;
                    puVar13 = (undefined *)malloc((size_t)puVar31);
                    if (puVar13 == (undefined *)0x0) goto LAB_004078e0;
                    if ((__n != (undefined *)0x0) && (local_6a8[0] != '\0')) {
                      *(undefined *)(puVar27 + -8) = 0x4081b0;
                      puVar13 = (undefined *)memcpy(puVar13,puVar20,(size_t)__n);
                    }
                  }
                  else {
                    *(undefined *)(puVar27 + -8) = 0x4077d8;
                    puVar13 = (undefined *)realloc(puVar20,(size_t)puVar31);
                    if (puVar13 == (undefined *)0x0) goto LAB_004078e0;
                  }
                }
              }
              else if (puVar31 != (undefined *)0xffffffffffffffff) goto LAB_004078e0;
              *(undefined *)((long)puVar13 + (long)__n) = 0;
              local_6c8 = puVar13;
              *(undefined *)(puVar27 + -8) = 0x4077f5;
              puVar15 = (uint *)__errno_location();
              puVar13 = local_6c8;
              local_6c8 = puVar24;
              _local_6a8 = (float)CONCAT28(auStack_6a4._4_2_,puVar15);
              local_6e8 = (undefined *)((ulong)local_6e8 & 0xffffffff00000000 | (ulong)*puVar15);
LAB_00407818:
              uVar4 = local_680;
              puVar14 = local_6b0;
              local_684 = -1;
              uVar12 = (long)puVar31 - (long)__n;
              *_local_6a8 = 0;
              uVar11 = 0x7fffffff;
              if (uVar12 < 0x80000000) {
                uVar11 = uVar12;
              }
              switch((ulong)local_698 & 0xffffffff) {
              default:
                goto switchD_00407a4c_caseD_5;
              case 1:
                uVar19 = (ulong)(uint)(int)*(char *)(local_670 + puVar32[10] * 0x10 + 8);
                break;
              case 2:
                uVar19 = (ulong)*(byte *)(local_670 + puVar32[10] * 0x10 + 8);
                break;
              case 3:
                uVar19 = (ulong)(uint)(int)(short)local_670[puVar32[10] * 0x10 + 8];
                break;
              case 4:
                uVar19 = (ulong)(ushort)local_670[puVar32[10] * 0x10 + 8];
                break;
              case 5:
              case 6:
              case 0xd:
              case 0xe:
                uVar19 = (ulong)*(uint *)(local_670 + puVar32[10] * 0x10 + 8);
                break;
              case 7:
              case 8:
              case 9:
              case 10:
              case 0xf:
              case 0x10:
              case 0x11:
                piVar16 = *(int **)(local_670 + puVar32[10] * 0x10 + 8);
                local_6d0 = puVar13;
                if ((uint)local_6b8 == 1) {
                  *(int **)(puVar27 + -8) = &local_684;
                  *(int **)(puVar27 + -0x10) = piVar16;
                  goto LAB_004080f2;
                }
                if ((uint)local_6b8 != 2) {
                  *(int **)(puVar27 + -0x10) = &local_684;
LAB_00407b5a:
                  puVar14 = local_6b0;
                  *(undefined *)(puVar27 + -0x18) = 0x407b77;
                  iVar10 = __snprintf_chk((undefined *)((long)puVar13 + (long)__n),uVar11,1,
                                          0xffffffffffffffff,puVar14,piVar16);
                  goto LAB_00407b80;
                }
                *(int **)(puVar27 + -0x10) = &local_684;
                *(int **)(puVar27 + -0x18) = piVar16;
                goto LAB_004080a6;
              case 0xb:
                local_6d0 = puVar13;
                uVar1 = *(undefined *)(local_670 + puVar32[10] * 0x10 + 8);
                if ((uint)local_6b8 == 1) {
                  *(int **)(puVar27 + -0x10) = &local_684;
                }
                else {
                  if ((uint)local_6b8 != 2) {
                    *(undefined *)(puVar27 + -8) = 0x407e4e;
                    iVar10 = __snprintf_chk(uVar1,(undefined *)((long)puVar13 + (long)__n),uVar11,1,
                                            0xffffffffffffffff,puVar14,&local_684);
                    goto LAB_00407b80;
                  }
                  *(int **)(puVar27 + -8) = &local_684;
                  *(ulong *)(puVar27 + -0x10) = (ulong)local_67c;
                }
                uVar4 = local_680;
                puVar14 = local_6b0;
                *(undefined *)(puVar27 + -0x18) = 0x4082ee;
                iVar10 = __snprintf_chk(uVar1,(undefined *)((long)puVar13 + (long)__n),uVar11,1,
                                        0xffffffffffffffff,puVar14,uVar4);
                goto LAB_00407b80;
              case 0xc:
                local_6d0 = puVar13;
                Var2 = *(unkbyte10 *)(local_670 + puVar32[10] * 0x10 + 8);
                if ((uint)local_6b8 != 1) {
                  if ((uint)local_6b8 != 2) {
                    piVar16 = &local_684;
                    *(unkbyte10 *)(puVar27 + -0x10) = Var2;
                    goto LAB_00407b5a;
                  }
                  *(int **)(puVar27 + -0x10) = &local_684;
                  uVar19 = (ulong)local_67c;
                  *(unkbyte10 *)(puVar27 + -0x20) = Var2;
                  *(ulong *)(puVar27 + -0x30) = uVar19;
                  *(undefined *)(puVar27 + -0x38) = 0x40834f;
                  iVar10 = __snprintf_chk((undefined *)((long)puVar13 + (long)__n),uVar11,1,
                                          0xffffffffffffffff,puVar14,uVar4);
                  goto LAB_00407b80;
                }
                *(int **)(puVar27 + -0x10) = &local_684;
                *(unkbyte10 *)(puVar27 + -0x20) = Var2;
                goto LAB_004080ad;
              }
              local_6d0 = puVar13;
              if ((uint)local_6b8 == 1) {
                *(int **)(puVar27 + -8) = &local_684;
                *(ulong *)(puVar27 + -0x10) = uVar19;
LAB_004080f2:
                uVar19 = (ulong)local_680;
LAB_00407c9a:
                puVar14 = local_6b0;
                *(undefined *)(puVar27 + -0x18) = 0x407cb7;
                iVar10 = __snprintf_chk((undefined *)((long)puVar13 + (long)__n),uVar11,1,
                                        0xffffffffffffffff,puVar14,uVar19);
                if (-1 < local_684) goto LAB_00407b8e;
LAB_00407cce:
                puVar24 = local_6d0;
                if (*(char *)((long)local_6c8 + 1) == '\0') {
                  if (iVar10 < 0) {
                    iVar10 = *_local_6a8;
                    if ((iVar10 == 0) && (iVar10 = 0x54, (*(byte *)(puVar32 + 9) & 0xef) != 99)) {
                      iVar10 = 0x16;
                    }
                    if ((local_6d0 != local_690) && (local_6d0 != (undefined *)0x0)) {
                      *(undefined *)(puVar27 + -8) = 0x407d24;
                      free(puVar24);
                    }
                    puVar31 = local_6e0;
                    if (local_6e0 != (undefined *)0x0) {
                      *(undefined *)(puVar27 + -8) = 0x407d38;
                      free(puVar31);
                    }
                    if (local_580 != auStack_568) {
                      *(undefined *)(puVar27 + -8) = 0x407d54;
                      free(local_580);
                    }
                    if (local_670 != auStack_668) {
                      *(undefined *)(puVar27 + -8) = 0x407d70;
                      free(local_670);
                    }
                    *_local_6a8 = iVar10;
                    return (undefined *)0x0;
                  }
                  goto LAB_00407ba8;
                }
                *(undefined *)((long)local_6c8 + 1) = 0;
                puVar13 = local_6d0;
                goto LAB_00407818;
              }
              if ((uint)local_6b8 != 2) {
                *(int **)(puVar27 + -0x10) = &local_684;
                goto LAB_00407c9a;
              }
              *(int **)(puVar27 + -0x10) = &local_684;
              *(ulong *)(puVar27 + -0x18) = uVar19;
LAB_004080a6:
              *(ulong *)(puVar27 + -0x20) = (ulong)local_67c;
LAB_004080ad:
              uVar4 = local_680;
              puVar14 = local_6b0;
              *(undefined *)(puVar27 + -0x28) = 0x4080d1;
              iVar10 = __snprintf_chk((undefined *)((long)puVar13 + (long)__n),uVar11,1,
                                      0xffffffffffffffff,puVar14,uVar4);
LAB_00407b80:
              if (local_684 < 0) goto LAB_00407cce;
LAB_00407b8e:
              if (((ulong)(long)local_684 < uVar11) &&
                 (((undefined *)((long)local_684 + (long)local_6d0))[(long)__n] != '\0'))
              goto LAB_0040801c;
              if (local_684 < iVar10) {
LAB_00407ba8:
                local_684 = iVar10;
              }
              puVar24 = local_6d0;
              puVar20 = local_6d0;
              if (uVar11 <= local_684 + 1) {
                if (0x7ffffffe < uVar12) {
                  if ((local_6d0 != local_690) && (local_6d0 != (undefined *)0x0)) {
                    *(undefined *)(puVar27 + -8) = 0x4083b6;
                    free(puVar24);
                  }
                  puVar31 = local_6e0;
                  if (local_6e0 != (undefined *)0x0) {
                    *(undefined *)(puVar27 + -8) = 0x4083ca;
                    free(puVar31);
                  }
                  if (local_580 != auStack_568) {
                    *(undefined *)(puVar27 + -8) = 0x4083e6;
                    free(local_580);
                  }
                  if (local_670 != auStack_668) {
                    *(undefined *)(puVar27 + -8) = 0x408402;
                    free(local_670);
                  }
                  *_local_6a8 = 0x4b;
                  return (undefined *)0x0;
                }
                puVar13 = local_6d0;
                if ((long)puVar31 < 0) {
                  if (puVar31 != (undefined *)0xffffffffffffffff) goto LAB_004078ef;
                }
                else {
                  if (CARRY8((ulong)(local_684 + 2),(ulong)__n) != false) goto LAB_004078ef;
                  puVar14 = __n + (local_684 + 2);
                  if (__n + (local_684 + 2) <= (undefined *)((long)puVar31 * 2)) {
                    puVar14 = (undefined *)((long)puVar31 * 2);
                  }
                  if (puVar31 < puVar14) {
                    puVar31 = (undefined *)((long)puVar31 * 2);
                    if ((puVar31 < puVar14) &&
                       (puVar31 = puVar14, puVar14 == (undefined *)0xffffffffffffffff))
                    goto LAB_004078ef;
                    bVar33 = local_6d0 == local_690;
                    if ((local_6d0 == (undefined *)0x0) || (bVar33)) {
                      *(undefined *)(puVar27 + -8) = 0x40804f;
                      puVar13 = (undefined *)malloc((size_t)puVar31);
                      puVar24 = local_6d0;
                      puVar20 = local_6d0;
                      if (puVar13 == (undefined *)0x0) goto LAB_004078ef;
                      if ((__n != (undefined *)0x0) && (bVar33)) {
                        *(undefined *)(puVar27 + -8) = 0x40807d;
                        puVar13 = (undefined *)memcpy(puVar13,puVar24,(size_t)__n);
                      }
                    }
                    else {
                      *(undefined *)(puVar27 + -8) = 0x407c3d;
                      puVar13 = (undefined *)realloc(puVar24,(size_t)puVar31);
                      puVar20 = local_6d0;
                      if (puVar13 == (undefined *)0x0) goto LAB_004078ef;
                    }
                  }
                }
                goto LAB_00407818;
              }
              __n = __n + local_684;
              *_local_6a8 = local_6e8._0_4_;
            }
          }
LAB_004079e7:
          _local_6a8 = (int *)puVar32[1];
          puVar32 = puVar32 + 0xb;
          puVar24 = (undefined *)*puVar32;
          local_6c0 = local_6c0 + 1;
          puVar14 = __n;
        } while ((int *)puVar24 == _local_6a8);
      } while( true );
    }
    puVar27 = auStack_6f8;
    if (sVar28 != 0xffffffffffffffff) {
      local_6b0 = (undefined *)malloc(sVar28);
      puVar27 = auStack_6f8;
      if (local_6b0 != (undefined *)0x0) {
        local_6e0 = local_6b0;
        puVar27 = auStack_6f8;
        goto LAB_004073b4;
      }
    }
  }
  goto LAB_00407a10;
LAB_004078e0:
  *(undefined *)(puVar27 + -8) = 0x4078e5;
  piVar16 = __errno_location();
  _local_6a8 = (float)CONCAT28(auStack_6a4._4_2_,piVar16);
LAB_004078ef:
  if ((puVar20 != local_690) && (puVar20 != (undefined *)0x0)) {
LAB_00407b08:
    *(undefined *)(puVar27 + -8) = 0x407b10;
    free(puVar20);
  }
  puVar31 = local_6e0;
  if (local_6e0 != (undefined *)0x0) {
    *(undefined *)(puVar27 + -8) = 0x407919;
    free(puVar31);
    goto LAB_00407919;
  }
LAB_00407a10:
  *(undefined *)(puVar27 + -8) = 0x407a15;
  piVar16 = __errno_location();
  _local_6a8 = (float)CONCAT28(auStack_6a4._4_2_,piVar16);
LAB_00407919:
  if (local_580 != auStack_568) {
    *(undefined *)(puVar27 + -8) = 0x407935;
    free(local_580);
  }
  if (local_670 != auStack_668) {
    *(undefined *)(puVar27 + -8) = 0x407951;
    free(local_670);
  }
  *_local_6a8 = 0xc;
  return (undefined *)0x0;
}


void FUN_00408e10(undefined param_1)

{
  FUN_00408e20(param_1,0,3);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_00408e20(ulong param_1,int param_2,ulong param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  
  if (param_2 != 0x406) {
    iVar1 = fcntl((int)param_1,param_2,param_3);
    return iVar1;
  }
  if (DAT_0060e4a0 < 0) {
    iVar1 = FUN_00408e20(param_1,0,param_3 & 0xffffffff);
    if (iVar1 < 0) {
      return iVar1;
    }
    if (DAT_0060e4a0 != -1) {
      return iVar1;
    }
  }
  else {
    iVar1 = fcntl((int)param_1,0x406);
    if ((-1 < iVar1) || (piVar4 = __errno_location(), *piVar4 != 0x16)) {
      DAT_0060e4a0 = 1;
      return iVar1;
    }
    iVar1 = FUN_00408e20(param_1 & 0xffffffff,0,param_3 & 0xffffffff);
    if (iVar1 < 0) {
      return iVar1;
    }
    DAT_0060e4a0 = -1;
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


undefined FUN_00408f60(uint *param_1,ulong *param_2)

{
  uint uVar1;
  undefined *puVar2;
  unkbyte10 *pVar3;
  undefined *puVar4;
  char *pcVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  char **ppcVar9;
  
  puVar2 = (undefined *)param_2[1];
  if (*param_2 != 0) {
    uVar6 = 0;
    do {
      switch(*puVar2) {
      default:
        return 0xffffffff;
      case 1:
      case 2:
        uVar1 = *param_1;
        if (uVar1 < 0x30) {
          puVar8 = (undefined *)((ulong)uVar1 + *(long *)(param_1 + 4));
          *param_1 = uVar1 + 8;
        }
        else {
          puVar8 = *(undefined **)(param_1 + 2);
          *(undefined **)(param_1 + 2) = puVar8 + 2;
        }
        *(char *)(puVar2 + 4) = (char)*puVar8;
        break;
      case 3:
      case 4:
        uVar1 = *param_1;
        if (uVar1 < 0x30) {
          puVar8 = (undefined *)((ulong)uVar1 + *(long *)(param_1 + 4));
          *param_1 = uVar1 + 8;
        }
        else {
          puVar8 = *(undefined **)(param_1 + 2);
          *(undefined **)(param_1 + 2) = puVar8 + 2;
        }
        *(short *)(puVar2 + 4) = (short)*puVar8;
        break;
      case 5:
      case 6:
      case 0xd:
      case 0xe:
        uVar1 = *param_1;
        if (uVar1 < 0x30) {
          puVar8 = (undefined *)((ulong)uVar1 + *(long *)(param_1 + 4));
          *param_1 = uVar1 + 8;
        }
        else {
          puVar8 = *(undefined **)(param_1 + 2);
          *(undefined **)(param_1 + 2) = puVar8 + 2;
        }
        puVar2[4] = *puVar8;
        break;
      case 7:
      case 8:
      case 9:
      case 10:
      case 0x11:
      case 0x12:
      case 0x13:
      case 0x14:
      case 0x15:
      case 0x16:
        uVar1 = *param_1;
        if (uVar1 < 0x30) {
          puVar7 = (undefined *)((ulong)uVar1 + *(long *)(param_1 + 4));
          *param_1 = uVar1 + 8;
        }
        else {
          puVar7 = *(undefined **)(param_1 + 2);
          *(undefined **)(param_1 + 2) = puVar7 + 1;
        }
        *(undefined *)(puVar2 + 4) = *puVar7;
        break;
      case 0xb:
        uVar1 = param_1[1];
        if (uVar1 < 0xb0) {
          puVar7 = (undefined *)((ulong)uVar1 + *(long *)(param_1 + 4));
          param_1[1] = uVar1 + 0x10;
        }
        else {
          puVar7 = *(undefined **)(param_1 + 2);
          *(undefined **)(param_1 + 2) = puVar7 + 1;
        }
        *(undefined *)(puVar2 + 4) = *puVar7;
        break;
      case 0xc:
        pVar3 = (unkbyte10 *)(*(long *)(param_1 + 2) + 0xfU & 0xfffffffffffffff0);
        *(long *)(param_1 + 2) = (long)pVar3 + 0x10;
        *(unkbyte10 *)(puVar2 + 4) = *pVar3;
        break;
      case 0xf:
        uVar1 = *param_1;
        if (uVar1 < 0x30) {
          ppcVar9 = (char **)((ulong)uVar1 + *(long *)(param_1 + 4));
          *param_1 = uVar1 + 8;
        }
        else {
          ppcVar9 = *(char ***)(param_1 + 2);
          *(char ***)(param_1 + 2) = ppcVar9 + 1;
        }
        pcVar5 = *ppcVar9;
        if (pcVar5 == (char *)0x0) {
          pcVar5 = "(NULL)";
        }
        *(char **)(puVar2 + 4) = pcVar5;
        break;
      case 0x10:
        uVar1 = *param_1;
        if (uVar1 < 0x30) {
          puVar7 = (undefined *)((ulong)uVar1 + *(long *)(param_1 + 4));
          *param_1 = uVar1 + 8;
        }
        else {
          puVar7 = *(undefined **)(param_1 + 2);
          *(undefined **)(param_1 + 2) = puVar7 + 1;
        }
        puVar4 = (undefined *)*puVar7;
        if (puVar4 == (undefined *)0x0) {
          puVar4 = &DAT_0040bd00;
        }
        *(undefined **)(puVar2 + 4) = puVar4;
      }
      uVar6 = uVar6 + 1;
      puVar2 = puVar2 + 8;
    } while (uVar6 <= *param_2 && *param_2 != uVar6);
  }
  return 0;
}


undefined FUN_00409180(byte *param_1,ulong *param_2,byte **param_3)

{
  ulong *puVar1;
  byte **ppbVar2;
  byte **ppbVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ulong *__dest;
  ulong uVar8;
  int *piVar9;
  byte **__dest_00;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  ulong uVar15;
  ulong uVar16;
  byte bVar17;
  byte *pbVar18;
  byte **__ptr;
  byte *pbVar19;
  ulong uVar20;
  ulong *__ptr_00;
  bool bVar21;
  ulong local_78;
  ulong local_70;
  byte *local_68;
  
  puVar1 = param_2 + 4;
  ppbVar2 = param_3 + 2;
  pbVar19 = (byte *)0x7;
  uVar8 = 0;
  *param_2 = 0;
  param_2[1] = (ulong)puVar1;
  *param_3 = (byte *)0x0;
  param_3[1] = (byte *)ppbVar2;
  local_70 = 0;
  local_78 = 0;
  local_68 = (byte *)0x0;
  __dest = puVar1;
  uVar20 = 7;
LAB_004091fb:
  do {
    pbVar11 = param_1;
    pbVar12 = (byte *)0xffffffffffffffff;
    if (*pbVar11 == 0) {
      __dest[uVar8 * 0xb] = (ulong)pbVar11;
      param_2[2] = local_78;
      param_2[3] = local_70;
      return 0;
    }
    param_1 = pbVar11 + 1;
  } while (*pbVar11 != 0x25);
  ppbVar3 = (byte **)(__dest + uVar8 * 0xb);
  *ppbVar3 = pbVar11;
  *(undefined *)(ppbVar3 + 2) = 0;
  ppbVar3[3] = (byte *)0x0;
  ppbVar3[4] = (byte *)0x0;
  ppbVar3[5] = (byte *)0xffffffffffffffff;
  ppbVar3[6] = (byte *)0x0;
  ppbVar3[7] = (byte *)0x0;
  ppbVar3[8] = (byte *)0xffffffffffffffff;
  ppbVar3[10] = (byte *)0xffffffffffffffff;
  bVar17 = pbVar11[1];
  pbVar11 = param_1;
  pbVar18 = (byte *)0xffffffffffffffff;
  if (9 < (byte)(bVar17 - 0x30)) {
LAB_004092c6:
    do {
      pbVar11 = param_1 + 1;
      if (bVar17 == 0x27) {
        *(uint *)(ppbVar3 + 2) = *(uint *)(ppbVar3 + 2) | 1;
      }
      else if (bVar17 == 0x2d) {
        *(uint *)(ppbVar3 + 2) = *(uint *)(ppbVar3 + 2) | 2;
      }
      else if (bVar17 == 0x2b) {
        *(uint *)(ppbVar3 + 2) = *(uint *)(ppbVar3 + 2) | 4;
      }
      else if (bVar17 == 0x20) {
        *(uint *)(ppbVar3 + 2) = *(uint *)(ppbVar3 + 2) | 8;
      }
      else if (bVar17 == 0x23) {
        *(uint *)(ppbVar3 + 2) = *(uint *)(ppbVar3 + 2) | 0x10;
      }
      else if (bVar17 == 0x30) {
        *(uint *)(ppbVar3 + 2) = *(uint *)(ppbVar3 + 2) | 0x20;
      }
      else {
        if (bVar17 != 0x49) goto LAB_00409328;
        *(uint *)(ppbVar3 + 2) = *(uint *)(ppbVar3 + 2) | 0x40;
      }
      bVar17 = *pbVar11;
      param_1 = pbVar11;
    } while( true );
  }
  do {
    bVar4 = pbVar11[1];
    pbVar11 = pbVar11 + 1;
  } while ((byte)(bVar4 - 0x30) < 10);
  pbVar18 = pbVar12;
  if (bVar4 != 0x24) goto LAB_004092c6;
  pbVar11 = (byte *)0x0;
  do {
    pbVar18 = param_1;
    pbVar14 = (byte *)0xffffffffffffffff;
    if (pbVar11 < (byte *)0x199999999999999a) {
      pbVar14 = (byte *)((long)pbVar11 * 10);
    }
    while( true ) {
      iVar6 = (int)(char)bVar17;
      bVar17 = pbVar18[1];
      pbVar11 = pbVar14 + (iVar6 + -0x30);
      param_1 = pbVar18 + 1;
      if (CARRY8((long)(iVar6 + -0x30),(ulong)pbVar14) == false) break;
      pbVar18 = param_1;
      pbVar14 = pbVar12;
      if (9 < (byte)(bVar17 - 0x30)) goto switchD_00409507_caseD_26;
    }
  } while ((byte)(bVar17 - 0x30) < 10);
  if (pbVar11 + -1 < (byte *)0xfffffffffffffffe) {
    param_1 = pbVar18 + 2;
    bVar17 = pbVar18[2];
    pbVar18 = pbVar11 + -1;
    goto LAB_004092c6;
  }
  goto switchD_00409507_caseD_26;
LAB_00409328:
  if (bVar17 != 0x2a) {
    pbVar12 = local_68;
    if ((byte)(bVar17 - 0x30) < 10) {
      ppbVar3[3] = param_1;
      pbVar14 = param_1;
      uVar8 = local_78;
      if ((byte)(*param_1 - 0x30) < 10) {
        do {
          pbVar11 = pbVar14;
          pbVar14 = pbVar11 + 1;
        } while ((byte)(pbVar11[1] - 0x30) < 10);
        pbVar11 = pbVar11 + 2;
        uVar8 = (long)pbVar14 - (long)param_1;
        if ((ulong)((long)pbVar14 - (long)param_1) <= local_78) {
          uVar8 = local_78;
        }
      }
      local_78 = uVar8;
      ppbVar3[4] = pbVar14;
      bVar17 = *pbVar14;
      param_1 = pbVar14;
    }
joined_r0x0040943a:
    uVar8 = local_70;
    local_68 = pbVar12;
    if (bVar17 != 0x2e) goto LAB_00409341;
    bVar17 = param_1[1];
    ppbVar3[6] = param_1;
    if (bVar17 != 0x2a) {
      if ((byte)(param_1[1] - 0x30) < 10) {
        do {
          pbVar11 = pbVar11 + 1;
        } while ((byte)(*pbVar11 - 0x30) < 10);
        uVar8 = (long)pbVar11 - (long)param_1;
      }
      else {
        uVar8 = 1;
      }
      ppbVar3[7] = pbVar11;
      bVar17 = *pbVar11;
      param_1 = pbVar11;
      if (uVar8 <= local_70) {
        uVar8 = local_70;
      }
      goto LAB_00409341;
    }
    pbVar11 = param_1 + 2;
    ppbVar3[7] = pbVar11;
    uVar8 = 2;
    if (1 < local_70) {
      uVar8 = local_70;
    }
    iVar6 = (int)(char)param_1[2];
    pbVar14 = pbVar11;
    if ((byte)(param_1[2] - 0x30) < 10) {
      do {
        bVar17 = pbVar14[1];
        pbVar14 = pbVar14 + 1;
      } while ((byte)(bVar17 - 0x30) < 10);
      if (bVar17 != 0x24) goto LAB_0040947f;
      uVar16 = 0;
      do {
        pbVar12 = pbVar11;
        uVar15 = 0xffffffffffffffff;
        if (uVar16 < 0x199999999999999a) {
          uVar15 = uVar16 * 10;
        }
        while( true ) {
          iVar7 = iVar6 + -0x30;
          uVar16 = uVar15 + (long)iVar7;
          pbVar11 = pbVar12 + 1;
          iVar6 = (int)(char)*pbVar11;
          bVar17 = *pbVar11 - 0x30;
          if (CARRY8(uVar15,(long)iVar7) == false) break;
          pbVar12 = pbVar11;
          uVar15 = 0xffffffffffffffff;
          if (9 < bVar17) goto switchD_00409507_caseD_26;
        }
      } while (bVar17 < 10);
      pbVar14 = (byte *)(uVar16 - 1);
      if ((byte *)0xfffffffffffffffd < pbVar14) goto switchD_00409507_caseD_26;
      ppbVar3[8] = pbVar14;
      pbVar11 = pbVar12 + 2;
    }
    else {
LAB_0040947f:
      pbVar14 = ppbVar3[8];
      if (ppbVar3[8] == (byte *)0xffffffffffffffff) {
        local_68 = pbVar12 + 1;
        ppbVar3[8] = pbVar12;
        pbVar14 = pbVar12;
        if (pbVar12 == (byte *)0xffffffffffffffff) goto switchD_00409507_caseD_26;
      }
    }
    __ptr = (byte **)param_3[1];
    if (pbVar14 < pbVar19) {
      pbVar12 = *param_3;
      __dest_00 = __ptr;
LAB_0040949e:
      if (pbVar12 <= pbVar14) {
        do {
          pbVar12 = pbVar12 + 1;
          *(undefined *)(__dest_00 + (long)pbVar12 * 4 + -4) = 0;
        } while (pbVar12 <= pbVar14);
        *param_3 = pbVar12;
      }
      iVar6 = *(int *)(__dest_00 + (long)pbVar14 * 4);
      param_1 = pbVar11;
      if (iVar6 == 0) {
        *(undefined *)(__dest_00 + (long)pbVar14 * 4) = 5;
        bVar17 = *pbVar11;
LAB_00409341:
        local_70 = uVar8;
        uVar5 = 0;
        do {
          param_1 = param_1 + 1;
          if (bVar17 == 0x68) {
            uVar5 = uVar5 | 1 << ((byte)uVar5 & 1);
          }
          else if (bVar17 == 0x4c) {
            uVar5 = uVar5 | 4;
          }
          else {
            if ((((bVar17 != 0x6c) && (bVar17 != 0x6a)) && ((bVar17 & 0xdf) != 0x5a)) &&
               (bVar17 != 0x74)) goto code_r0x00409504;
            uVar5 = uVar5 + 8;
          }
          bVar17 = *param_1;
        } while( true );
      }
      if (iVar6 == 5) {
        bVar17 = *pbVar11;
        goto LAB_00409341;
      }
      goto LAB_0040994c;
    }
    pbVar19 = (byte *)((long)pbVar19 * 2);
    if (pbVar19 <= pbVar14) {
      pbVar19 = pbVar14 + 1;
    }
    if (pbVar19 < (byte *)0x800000000000000) {
      if (ppbVar2 == __ptr) {
        __dest_00 = (byte **)malloc((long)pbVar19 << 5);
        if (__dest_00 == (byte **)0x0) goto LAB_00409b39;
        pbVar12 = *param_3;
        __ptr = ppbVar2;
LAB_00409deb:
        memcpy(__dest_00,__ptr,(long)pbVar12 << 5);
        pbVar12 = *param_3;
      }
      else {
        __dest_00 = (byte **)realloc(__ptr,(long)pbVar19 << 5);
        __ptr = (byte **)param_3[1];
        if (__dest_00 == (byte **)0x0) goto LAB_00409b20;
        pbVar12 = *param_3;
        if (ppbVar2 == __ptr) goto LAB_00409deb;
      }
      param_3[1] = (byte *)__dest_00;
      goto LAB_0040949e;
    }
    goto LAB_00409b20;
  }
  ppbVar3[3] = param_1;
  ppbVar3[4] = pbVar11;
  uVar8 = 1;
  if (local_78 != 0) {
    uVar8 = local_78;
  }
  iVar6 = (int)(char)param_1[1];
  pbVar14 = pbVar11;
  if ((byte)(param_1[1] - 0x30) < 10) {
    do {
      bVar17 = pbVar14[1];
      pbVar14 = pbVar14 + 1;
    } while ((byte)(bVar17 - 0x30) < 10);
    if (bVar17 != 0x24) goto LAB_004093cd;
    pbVar14 = (byte *)0x0;
    do {
      pbVar10 = pbVar11;
      pbVar13 = (byte *)0xffffffffffffffff;
      if (pbVar14 < (byte *)0x199999999999999a) {
        pbVar13 = (byte *)((long)pbVar14 * 10);
      }
      while( true ) {
        iVar7 = iVar6 + -0x30;
        pbVar14 = pbVar13 + iVar7;
        iVar6 = (int)(char)pbVar10[1];
        pbVar11 = pbVar10 + 1;
        bVar17 = pbVar10[1] - 0x30;
        if (CARRY8((ulong)pbVar13,(long)iVar7) == false) break;
        pbVar10 = pbVar11;
        pbVar13 = pbVar12;
        if (9 < bVar17) goto switchD_00409507_caseD_26;
      }
    } while (bVar17 < 10);
    pbVar14 = pbVar14 + -1;
    if ((byte *)0xfffffffffffffffd < pbVar14) goto switchD_00409507_caseD_26;
    ppbVar3[5] = pbVar14;
    pbVar11 = pbVar10 + 2;
  }
  else {
LAB_004093cd:
    pbVar14 = ppbVar3[5];
    if (ppbVar3[5] == (byte *)0xffffffffffffffff) {
      ppbVar3[5] = local_68;
      bVar21 = local_68 == (byte *)0xffffffffffffffff;
      pbVar14 = local_68;
      local_68 = local_68 + 1;
      if (bVar21) goto switchD_00409507_caseD_26;
    }
  }
  __ptr = (byte **)param_3[1];
  if (pbVar14 < pbVar19) {
    pbVar12 = *param_3;
    __dest_00 = __ptr;
LAB_004093ec:
    if (pbVar12 <= pbVar14) {
      do {
        pbVar12 = pbVar12 + 1;
        *(undefined *)(__dest_00 + (long)pbVar12 * 4 + -4) = 0;
      } while (pbVar12 <= pbVar14);
      *param_3 = pbVar12;
    }
    iVar6 = *(int *)(__dest_00 + (long)pbVar14 * 4);
    param_1 = pbVar11;
    local_78 = uVar8;
    pbVar12 = local_68;
    if (iVar6 == 0) {
      *(undefined *)(__dest_00 + (long)pbVar14 * 4) = 5;
      bVar17 = *pbVar11;
      pbVar11 = pbVar11 + 1;
    }
    else {
      if (iVar6 != 5) goto LAB_0040994c;
      bVar17 = *pbVar11;
      pbVar11 = pbVar11 + 1;
    }
    goto joined_r0x0040943a;
  }
  pbVar19 = (byte *)((long)pbVar19 * 2);
  if (pbVar19 <= pbVar14) {
    pbVar19 = pbVar14 + 1;
  }
  if ((byte *)0x7ffffffffffffff < pbVar19) goto LAB_00409b20;
  if (ppbVar2 != __ptr) {
    __dest_00 = (byte **)realloc(__ptr,(long)pbVar19 << 5);
    __ptr = (byte **)param_3[1];
    if (__dest_00 != (byte **)0x0) {
      pbVar12 = *param_3;
      if (ppbVar2 == __ptr) goto LAB_00409c39;
      goto LAB_0040970d;
    }
    goto LAB_00409b20;
  }
  __dest_00 = (byte **)malloc((long)pbVar19 << 5);
  if (__dest_00 != (byte **)0x0) {
    pbVar12 = *param_3;
    __ptr = ppbVar2;
LAB_00409c39:
    memcpy(__dest_00,__ptr,(long)pbVar12 << 5);
    pbVar12 = *param_3;
LAB_0040970d:
    param_3[1] = (byte *)__dest_00;
    goto LAB_004093ec;
  }
  goto LAB_00409b39;
code_r0x00409504:
  switch(bVar17) {
  case 0x25:
    goto switchD_00409507_caseD_25;
  default:
    goto switchD_00409507_caseD_26;
  case 0x41:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x61:
  case 0x65:
  case 0x66:
  case 0x67:
    iVar6 = 0xc;
    if ((int)uVar5 < 0x10) {
      iVar6 = ((uVar5 & 4) != 0) + 0xb;
    }
    break;
  case 0x43:
    iVar6 = 0xe;
    bVar17 = 99;
    break;
  case 0x53:
    iVar6 = 0x10;
    bVar17 = 0x73;
    break;
  case 0x58:
  case 0x6f:
  case 0x75:
  case 0x78:
    iVar6 = 10;
    if (((((int)uVar5 < 0x10) && ((uVar5 & 4) == 0)) && (iVar6 = 8, (int)uVar5 < 8)) &&
       (iVar6 = 2, (uVar5 & 2) == 0)) {
      iVar6 = (-(uint)((uVar5 & 1) == 0) & 2) + 4;
    }
    break;
  case 99:
    iVar6 = (7 < (int)uVar5) + 0xd;
    break;
  case 100:
  case 0x69:
    iVar6 = 9;
    if ((((int)uVar5 < 0x10) && ((uVar5 & 4) == 0)) &&
       ((iVar6 = 7, (int)uVar5 < 8 && (iVar6 = 1, (uVar5 & 2) == 0)))) {
      iVar6 = (-(uint)((uVar5 & 1) == 0) & 2) + 3;
    }
    break;
  case 0x6e:
    iVar6 = 0x16;
    if ((((int)uVar5 < 0x10) && ((uVar5 & 4) == 0)) &&
       ((iVar6 = 0x15, (int)uVar5 < 8 && (iVar6 = 0x12, (uVar5 & 2) == 0)))) {
      iVar6 = ((uVar5 & 1) == 0) + 0x13;
    }
    break;
  case 0x70:
    iVar6 = 0x11;
    break;
  case 0x73:
    iVar6 = (7 < (int)uVar5) + 0xf;
  }
  if (pbVar18 == (byte *)0xffffffffffffffff) {
    ppbVar3[10] = local_68;
    bVar21 = local_68 == (byte *)0xffffffffffffffff;
    pbVar18 = local_68;
    local_68 = local_68 + 1;
    if (bVar21) {
switchD_00409507_caseD_26:
      __dest_00 = (byte **)param_3[1];
      goto LAB_0040994c;
    }
  }
  else {
    ppbVar3[10] = pbVar18;
  }
  __ptr = (byte **)param_3[1];
  __dest_00 = __ptr;
  if (pbVar18 < pbVar19) {
LAB_00409535:
    pbVar11 = *param_3;
    if (pbVar11 <= pbVar18) {
      do {
        pbVar11 = pbVar11 + 1;
        *(undefined *)(__dest_00 + (long)pbVar11 * 4 + -4) = 0;
      } while (pbVar11 <= pbVar18);
      *param_3 = pbVar11;
    }
    iVar7 = *(int *)(__dest_00 + (long)pbVar18 * 4);
    if (iVar7 == 0) {
      *(int *)(__dest_00 + (long)pbVar18 * 4) = iVar6;
    }
    else if (iVar7 != iVar6) {
LAB_0040994c:
      if (ppbVar2 != __dest_00) {
        free(__dest_00);
      }
      if (puVar1 != (ulong *)param_2[1]) {
        free((ulong *)param_2[1]);
      }
      piVar9 = __errno_location();
      *piVar9 = 0x16;
      return 0xffffffff;
    }
switchD_00409507_caseD_25:
    *(byte *)(ppbVar3 + 9) = bVar17;
    uVar8 = *param_2;
    ppbVar3[1] = param_1;
    uVar8 = uVar8 + 1;
    *param_2 = uVar8;
    if (uVar8 < uVar20) {
      __dest = (ulong *)param_2[1];
      goto LAB_004091fb;
    }
    if (((long)uVar20 < 0) || (0x2e8ba2e8ba2e8ba < uVar20 * 2)) {
LAB_00409e73:
      __ptr = (byte **)param_3[1];
      goto LAB_00409b20;
    }
    __ptr_00 = (ulong *)param_2[1];
    if (puVar1 != __ptr_00) {
      __dest = (ulong *)realloc(__ptr_00,uVar20 * 0xb0);
      if (__dest == (ulong *)0x0) goto LAB_00409e73;
      __ptr_00 = (ulong *)param_2[1];
      uVar8 = *param_2;
      if (puVar1 != __ptr_00) goto LAB_0040960f;
LAB_00409734:
      __dest = (ulong *)memcpy(__dest,__ptr_00,uVar8 * 0x58);
      uVar8 = *param_2;
LAB_0040960f:
      param_2[1] = (ulong)__dest;
      uVar20 = uVar20 * 2;
      goto LAB_004091fb;
    }
    __dest = (ulong *)malloc(uVar20 * 0xb0);
    if (__dest != (ulong *)0x0) goto LAB_00409734;
    __ptr = (byte **)param_3[1];
    if (ppbVar2 == __ptr) goto LAB_00409b49;
  }
  else {
    pbVar19 = (byte *)((long)pbVar19 * 2);
    if (pbVar19 <= pbVar18) {
      pbVar19 = pbVar18 + 1;
    }
    if (pbVar19 < (byte *)0x800000000000000) {
      if (ppbVar2 == __ptr) {
        __dest_00 = (byte **)malloc((long)pbVar19 << 5);
        if (__dest_00 == (byte **)0x0) goto LAB_00409b39;
LAB_00409ad6:
        memcpy(__dest_00,__ptr,(long)*param_3 << 5);
LAB_00409a1b:
        param_3[1] = (byte *)__dest_00;
        goto LAB_00409535;
      }
      __dest_00 = (byte **)realloc(__ptr,(long)pbVar19 << 5);
      if (__dest_00 != (byte **)0x0) {
        __ptr = ppbVar2;
        if (ppbVar2 == (byte **)param_3[1]) goto LAB_00409ad6;
        goto LAB_00409a1b;
      }
      goto LAB_00409e73;
    }
LAB_00409b20:
    if (ppbVar2 == __ptr) goto LAB_00409b39;
  }
  free(__ptr);
LAB_00409b39:
  if (puVar1 != (ulong *)param_2[1]) {
    free((ulong *)param_2[1]);
  }
LAB_00409b49:
  piVar9 = __errno_location();
  *piVar9 = 0xc;
  return 0xffffffff;
}


/* WARNING: Removing unreachable block (ram,0x00409ec3) */
/* WARNING: Removing unreachable block (ram,0x00409ec8) */

void FUN_00409e90(void)

{
  __DT_INIT();
  return;
}


void FUN_00409ef0(void)

{
  return;
}


void FUN_00409f00(undefined param_1)

{
  __cxa_atexit(param_1,0,DAT_0060e248);
  return;
}


undefined FUN_00409f18(undefined param_1,undefined param_2,undefined param_3)

{
  code **ppcVar1;
  
  for (ppcVar1 = (code **)&DAT_0060de30; *ppcVar1 != (code *)0xffffffffffffffff;
      ppcVar1 = ppcVar1 + -1) {
    (**ppcVar1)();
  }
  return param_3;
}


void __DT_FINI(void)

{
  FUN_00401f11();
  return;
}

