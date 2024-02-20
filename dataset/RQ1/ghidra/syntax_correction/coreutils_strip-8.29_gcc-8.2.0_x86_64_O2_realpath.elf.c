
#include "decompile_ghidra.h"
#define __int64 long long
#define __int32 int
#define __int16 short
#define __int8 char

void FUN_004019d0(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_004019d5(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_004019da(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_004019df(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void switchD_004043b0caseD_b(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_004019e9(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_004019ee(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_004019f3(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_004019f8(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void switchD_00405fbacaseD_0(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


undefined FUN_00401a10(int param_1,undefined *param_2)

{
  char *pcVar1;
  void *pvVar2;
  char cVar3;
  int iVar4;
  void *__ptr;
  char *__s;
  undefined uVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  void *pvVar9;
  byte bVar10;
  void *pvVar11;
  undefined auVar12 [16];
  undefined uStack_38;
  
  uVar7 = 1;
  FUN_004041c0(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils",
                 "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale"
                );
  textdomain("coreutils");
  FUN_00408510(FUN_00402d30);
  pvVar9 = (void *)0x0;
  pvVar2 = (void *)0x0;
LAB_00401a70:
  do {
    __ptr = pvVar2;
    pvVar11 = pvVar9;
    iVar4 = FUN_004079b0(param_1,param_2,"eLmPqsz",&PTR_s_canonicalize_existing_00408b60,0);
    if (iVar4 == -1) {
      if (DAT_0060c2bc < param_1) {
        if (((pvVar11 == (void *)0x0) || (pvVar9 = pvVar11, __ptr != (void *)0x0)) &&
           (pvVar9 = __ptr, __ptr == (void *)0x0)) {
LAB_00401c0b:
          if (pvVar11 == __ptr) {
            DAT_0060c2f8 = DAT_0060c300;
            __ptr = DAT_0060c2f8;
            goto LAB_00401c59;
          }
          __ptr = DAT_0060c2f8;
          if (pvVar11 == (void *)0x0) goto LAB_00401c59;
          __ptr = (void *)FUN_00402020(pvVar11,uVar7);
          if (__ptr == (void *)0x0) goto LAB_00401e56;
          if (((uVar7 & 3) == 0) && (cVar3 = FUN_00402080(__ptr), cVar3 == '\0')) {
            uVar5 = FUN_00405c60(0,3,pvVar11);
            error(1,0x14,"%s",uVar5);
            goto LAB_00401e2d;
          }
          pvVar11 = DAT_0060c300;
          cVar3 = FUN_00401f90(__ptr,DAT_0060c300);
          if (cVar3 != '\0') goto LAB_00401c59;
        }
        else {
          __ptr = pvVar9;
          DAT_0060c300 = (void *)FUN_00402020(__ptr,uVar7);
          if (DAT_0060c300 == (void *)0x0) goto LAB_00401e83;
          if (((uVar7 & 3) != 0) || (cVar3 = FUN_00402080(DAT_0060c300), cVar3 != '\0'))
          goto LAB_00401c0b;
          uVar5 = FUN_00405c60(0,3,__ptr);
          error(1,0x14,"%s",uVar5);
        }
        free(__ptr);
        DAT_0060c300 = (void *)0x0;
        __ptr = pvVar11;
LAB_00401c59:
        DAT_0060c2f8 = __ptr;
        bVar10 = 1;
        for (; DAT_0060c2bc < param_1; DAT_0060c2bc = DAT_0060c2bc + 1) {
          uVar5 = param_2[DAT_0060c2bc];
          __s = (char *)FUN_00402020(uVar5,uVar7);
          if (__s == (char *)0x0) {
            bVar10 = DAT_0060c230;
            if (DAT_0060c230 != 0) {
              FUN_00405c60(0,3,uVar5);
              piVar6 = __errno_location();
              bVar10 = 0;
              error(0,*piVar6,"%s");
            }
          }
          else {
            if ((DAT_0060c300 == (void *)0x0) ||
               (((pvVar9 = DAT_0060c300, DAT_0060c2f8 != (void *)0x0 &&
                 (cVar3 = FUN_00401f90(DAT_0060c2f8,__s), cVar3 == '\0')) ||
                (cVar3 = FUN_00402490(__s,pvVar9,0,0), cVar3 == '\0')))) {
              fputs_unlocked(__s,stdout);
            }
            uVar8 = -(uint)(DAT_0060c308 == '\0') & 10;
            pcVar1 = stdout->_IO_write_ptr;
            if (pcVar1 < stdout->_IO_write_end) {
              stdout->_IO_write_ptr = pcVar1 + 1;
              *pcVar1 = (char)uVar8;
            }
            else {
              __overflow(stdout,uVar8);
            }
            free(__s);
          }
        }
        return CONCAT88(uStack_38,(ulong)(bVar10 ^ 1));
      }
LAB_00401e2d:
      uVar5 = dcgettext(0,"missing operand",5);
      error(0,0,uVar5);
      goto LAB_00401e4c;
    }
    pvVar9 = pvVar11;
    pvVar2 = __ptr;
    if (iVar4 == 0x6d) {
LAB_00401b90:
      uVar7 = uVar7 & 0xfffffffc | 2;
      goto LAB_00401a70;
    }
    if (iVar4 < 0x6e) {
      if (iVar4 == 0x4c) {
        uVar7 = uVar7 | 4;
        DAT_0060c309 = 1;
      }
      else {
        if (iVar4 < 0x4d) {
          if (iVar4 == -0x83) {
            FUN_00406390(stdout,"realpath","GNU coreutils",PTR_DAT_0060c238,"Padraig Brady",0);
                    /* WARNING: Subroutine does not return */
            exit(0);
          }
          if (iVar4 == -0x82) {
            FUN_00402100(0);
            goto LAB_00401b90;
          }
          goto LAB_00401e4c;
        }
        if (iVar4 == 0x50) {
          uVar7 = uVar7 & 0xfffffffb;
          DAT_0060c309 = 0;
        }
        else {
          if (iVar4 != 0x65) goto LAB_00401e4c;
          uVar7 = uVar7 & 0xfffffffc;
        }
      }
    }
    else if (iVar4 == 0x7a) {
      DAT_0060c308 = '\x01';
    }
    else if (iVar4 < 0x7b) {
      if (iVar4 == 0x71) {
        DAT_0060c230 = 0;
      }
      else {
        if (iVar4 != 0x73) goto LAB_00401e4c;
        uVar7 = uVar7 | 4;
        DAT_0060c309 = 0;
      }
    }
    else {
      pvVar2 = DAT_0060c4c0;
      if ((iVar4 != 0x80) && (pvVar9 = DAT_0060c4c0, pvVar2 = __ptr, iVar4 != 0x81)) {
LAB_00401e4c:
        FUN_00402100(1);
LAB_00401e56:
        uVar5 = FUN_00405c60(0,3,pvVar11);
        piVar6 = __errno_location();
        error(1,*piVar6,"%s",uVar5);
LAB_00401e83:
        uVar5 = FUN_00405c60(0,3,__ptr);
        piVar6 = __errno_location();
        auVar12 = error(1,*piVar6,"%s",uVar5);
        uVar5 = uStack_38;
        uStack_38 = SUB168(auVar12,0);
        (*(code *)PTR___libc_start_main_0060bff0)
                  (FUN_00401a10,uVar5,&stack0xffffffffffffffd0,FUN_004084a0,FUN_00408500,
                   SUB168(auVar12 >> 0x40,0),&uStack_38);
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
    }
  } while( true );
}


void FUN_00401eb0(undefined param_1,undefined param_2,undefined param_3)

{
  undefined unaff_retaddr;
  undefined auStack_8 [8];
  
  (*(code *)PTR___libc_start_main_0060bff0)
            (FUN_00401a10,unaff_retaddr,&stack0x00000008,FUN_004084a0,FUN_00408500,param_3,auStack_8
            );
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* WARNING: Removing unreachable block (ram,0x00401ee8) */
/* WARNING: Removing unreachable block (ram,0x00401ef2) */

void FUN_00401edb(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00401f29) */

void FUN_00401efa(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00401f66) */

void FUN_00401f31(void)

{
  if (DAT_0060c2e8 != '\0') {
    return;
  }
  FUN_00401edb();
  DAT_0060c2e8 = 1;
  return;
}


/* WARNING: Removing unreachable block (ram,0x00401f29) */

void thunk_FUN_00401efa(void)

{
  return;
}


bool FUN_00401f90(long param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  char *pcVar4;
  
  cVar1 = *(char *)(param_1 + 1);
  if (cVar1 == '\0') {
    return *(char *)(param_2 + 1) != '/';
  }
  if ((cVar1 == '/') && (*(char *)(param_1 + 2) == '\0')) {
    return *(char *)(param_2 + 1) == '/';
  }
  bVar2 = cVar1 != *(char *)(param_2 + 1) || *(char *)(param_2 + 1) == '\0';
  if (bVar2) {
    return false;
  }
  pcVar4 = (char *)(param_1 + 1);
  pcVar3 = (char *)(param_2 + 1);
  while( true ) {
    pcVar4 = pcVar4 + 1;
    pcVar3 = pcVar3 + 1;
    if (*pcVar4 == '\0') {
      return *pcVar3 == '/' || *pcVar3 == '\0';
    }
    if (*pcVar3 == '\0') break;
    if (*pcVar4 != *pcVar3) {
      return bVar2;
    }
  }
  return bVar2;
}


void * FUN_00402020(undefined param_1,uint param_2)

{
  void *__ptr;
  void *pvVar1;
  
  __ptr = (void *)FUN_00402690();
  if ((DAT_0060c309 != '\0') && (__ptr != (void *)0x0)) {
    pvVar1 = (void *)FUN_00402690(__ptr,param_2 & 0xfffffffb);
    free(__ptr);
    return pvVar1;
  }
  return __ptr;
}


uint FUN_00402080(char *param_1)

{
  FILE *pFVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined uVar5;
  char *pcVar6;
  byte **ppbVar7;
  undefined uVar9;
  char *pcVar10;
  long lVar11;
  byte *pbVar12;
  byte *pbVar13;
  bool bVar14;
  bool bVar15;
  byte bVar16;
  byte *pbStack_130;
  char *pcStack_128;
  byte *apbStack_120 [5];
  char *pcStack_f8;
  char *pcStack_f0;
  char *pcStack_e8;
  char *pcStack_e0;
  char *pcStack_d8;
  undefined uStack_d0;
  undefined uStack_c8;
  undefined uStack_c0;
  undefined uStack_b8;
  stat sStack_a8;
  byte **ppbVar8;
  
  bVar16 = 0;
  iVar2 = __xstat(1,param_1,&sStack_a8);
  if (iVar2 == 0) {
    return sStack_a8.st_mode & 0xf000 | (uint)((sStack_a8.st_mode & 0xf000) == 0x4000);
  }
  uStack_b8 = FUN_00405b90(4,param_1);
  uStack_c0 = dcgettext(0,"cannot stat %s",5);
  piVar4 = __errno_location();
  iVar2 = 1;
  error(1,*piVar4,uStack_c0,uStack_b8);
  uVar9 = DAT_0060c320;
  if (iVar2 != 0) {
    uVar5 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(stderr,1,uVar5,uVar9);
    goto LAB_0040213f;
  }
  uVar5 = dcgettext(0,"Usage: %s [OPTION]... FILE...\n",5);
  __printf_chk(1,uVar5,uVar9);
  pFVar1 = stdout;
  pcVar6 = (char *)dcgettext(0,
                             "Print the resolved absolute file name;\nall but the last component must exist\n\n"
                             ,5);
  fputs_unlocked(pcVar6,pFVar1);
  pFVar1 = stdout;
  pcVar6 = (char *)dcgettext(0,
                             "  -e, --canonicalize-existing  all components of the path must exist\n  -m, --canonicalize-missing   no path components need exist or be a directory\n  -L, --logical                resolve \'..\' components before symlinks\n  -P, --physical               resolve symlinks as encountered (default)\n  -q, --quiet                  suppress most error messages\n      --relative-to=DIR        print the resolved path relative to DIR\n      --relative-base=DIR      print absolute paths unless paths below DIR\n  -s, --strip, --no-symlinks   don\'t expand symlinks\n  -z, --zero                   end each output line with NUL, not newline\n\n"
                             ,5);
  fputs_unlocked(pcVar6,pFVar1);
  pFVar1 = stdout;
  pcVar6 = (char *)dcgettext(0,"      --help     display this help and exit\n",5);
  fputs_unlocked(pcVar6,pFVar1);
  pFVar1 = stdout;
  pcVar6 = (char *)dcgettext(0,"      --version  output version information and exit\n",5);
  fputs_unlocked(pcVar6,pFVar1);
  pbStack_130 = &DAT_0040857c;
  pcStack_128 = "test invocation";
  apbStack_120[0] = (byte *)0x4085f6;
  apbStack_120[1] = (byte *)0x40858e;
  apbStack_120[2] = (byte *)0x4085a4;
  apbStack_120[3] = (byte *)0x4085ae;
  apbStack_120[4] = (byte *)0x4085bd;
  pcStack_f8 = "sha2 utilities";
  pcStack_f0 = "sha384sum";
  pcStack_e8 = "sha2 utilities";
  pcStack_e0 = "sha512sum";
  pcStack_d8 = "sha2 utilities";
  uStack_d0 = 0;
  uStack_c8 = 0;
  ppbVar7 = &pbStack_130;
  do {
    ppbVar8 = ppbVar7;
    ppbVar7 = ppbVar8 + 2;
    pbVar13 = *ppbVar7;
    bVar14 = false;
    bVar15 = pbVar13 == (byte *)0x0;
    if (bVar15) break;
    lVar11 = 9;
    pbVar12 = (byte *)"realpath";
    do {
      if (lVar11 == 0) break;
      lVar11 = lVar11 + -1;
      bVar14 = *pbVar12 < *pbVar13;
      bVar15 = *pbVar12 == *pbVar13;
      pbVar12 = pbVar12 + (ulong)bVar16 * -2 + 1;
      pbVar13 = pbVar13 + (ulong)bVar16 * -2 + 1;
    } while (bVar15);
  } while ((!bVar14 && !bVar15) != bVar14);
  pcVar6 = (char *)ppbVar8[3];
  if ((byte *)pcVar6 == (byte *)0x0) {
    uVar9 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar9,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) {
      iVar3 = strncmp(pcVar6,"en_",3);
      if (iVar3 != 0) {
        pcVar6 = "realpath";
        goto LAB_004023e3;
      }
    }
    pcVar6 = "realpath";
    uVar9 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    pcVar10 = " invocation";
    __printf_chk(1,uVar9,"https://www.gnu.org/software/coreutils/","realpath");
  }
  else {
    uVar9 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar9,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar10 = setlocale(5,(char *)0x0);
    if (pcVar10 != (char *)0x0) {
      iVar3 = strncmp(pcVar10,"en_",3);
      if (iVar3 != 0) {
LAB_004023e3:
        uVar9 = dcgettext(0,"Report %s translation bugs to <https://translationproject.org/team/>\n"
                          ,5);
        __printf_chk(1,uVar9,"realpath");
      }
    }
    pcVar10 = " invocation";
    uVar9 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    __printf_chk(1,uVar9,"https://www.gnu.org/software/coreutils/","realpath");
    if (pcVar6 != "realpath") {
      pcVar10 = "";
    }
  }
  uVar9 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(1,uVar9,pcVar6,pcVar10);
LAB_0040213f:
                    /* WARNING: Subroutine does not return */
  exit(iVar2);
}


void FUN_00402100(int param_1)

{
  FILE *pFVar1;
  int iVar2;
  undefined uVar3;
  char *pcVar4;
  byte **ppbVar5;
  undefined uVar7;
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
  undefined local_28;
  undefined local_20;
  byte **ppbVar6;
  
  uVar7 = DAT_0060c320;
  bVar14 = 0;
  if (param_1 != 0) {
    uVar3 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(stderr,1,uVar3,uVar7);
    goto LAB_0040213f;
  }
  uVar3 = dcgettext(0,"Usage: %s [OPTION]... FILE...\n",5);
  __printf_chk(1,uVar3,uVar7);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "Print the resolved absolute file name;\nall but the last component must exist\n\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -e, --canonicalize-existing  all components of the path must exist\n  -m, --canonicalize-missing   no path components need exist or be a directory\n  -L, --logical                resolve \'..\' components before symlinks\n  -P, --physical               resolve symlinks as encountered (default)\n  -q, --quiet                  suppress most error messages\n      --relative-to=DIR        print the resolved path relative to DIR\n      --relative-base=DIR      print absolute paths unless paths below DIR\n  -s, --strip, --no-symlinks   don\'t expand symlinks\n  -z, --zero                   end each output line with NUL, not newline\n\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"      --help     display this help and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"      --version  output version information and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  local_88 = &DAT_0040857c;
  local_80 = "test invocation";
  local_78[0] = (byte *)0x4085f6;
  local_78[1] = (byte *)0x40858e;
  local_78[2] = (byte *)0x4085a4;
  local_78[3] = (byte *)0x4085ae;
  local_78[4] = (byte *)0x4085bd;
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
    pbVar10 = (byte *)"realpath";
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
        pcVar4 = "realpath";
        goto LAB_004023e3;
      }
    }
    pcVar4 = "realpath";
    uVar7 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    pcVar8 = " invocation";
    __printf_chk(1,uVar7,"https://www.gnu.org/software/coreutils/","realpath");
  }
  else {
    uVar7 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar7,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar8 = setlocale(5,(char *)0x0);
    if (pcVar8 != (char *)0x0) {
      iVar2 = strncmp(pcVar8,"en_",3);
      if (iVar2 != 0) {
LAB_004023e3:
        uVar7 = dcgettext(0,"Report %s translation bugs to <https://translationproject.org/team/>\n"
                          ,5);
        __printf_chk(1,uVar7,"realpath");
      }
    }
    pcVar8 = " invocation";
    uVar7 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    __printf_chk(1,uVar7,"https://www.gnu.org/software/coreutils/","realpath");
    if (pcVar4 != "realpath") {
      pcVar8 = "";
    }
  }
  uVar7 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(1,uVar7,pcVar4,pcVar8);
LAB_0040213f:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}


undefined FUN_00402410(char *param_1,void **param_2,ulong *param_3)

{
  void *__dest;
  size_t sVar1;
  
  __dest = *param_2;
  if (__dest == (void *)0x0) {
    fputs_unlocked(param_1,stdout);
    return 0;
  }
  sVar1 = strlen(param_1);
  if (*param_3 < sVar1 || *param_3 == sVar1) {
    return 1;
  }
  memcpy(__dest,param_1,sVar1 + 1);
  *param_2 = (void *)((long)*param_2 + sVar1);
  *param_3 = *param_3 - sVar1;
  return 0;
}


uint FUN_00402490(char *param_1,char *param_2,undefined param_3,undefined param_4)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined uVar8;
  long lVar9;
  int iVar10;
  char *pcVar11;
  char cVar12;
  int iVar13;
  bool bVar14;
  undefined local_28;
  undefined local_20;
  
  cVar4 = param_1[1];
  uVar5 = 0;
  if ((param_2[1] == '/') == (cVar4 == '/')) {
    cVar12 = *param_2;
    if (cVar12 != '\0') {
      bVar3 = cVar12 != *param_1 || *param_1 == '\0';
      if (bVar3) {
        uVar5 = 0;
      }
      else {
        lVar9 = 2;
        iVar10 = 0;
        cVar2 = param_2[1];
        while( true ) {
          cVar1 = cVar2;
          iVar13 = (int)lVar9 + -1;
          if (cVar12 == '/') {
            iVar10 = iVar13;
          }
          bVar14 = cVar4 == '\0';
          if (cVar1 == '\0') {
            if ((cVar4 == '/') || (bVar14)) goto LAB_00402545;
            goto LAB_00402541;
          }
          if ((cVar1 != cVar4) || (bVar14)) break;
          pcVar11 = param_2 + lVar9;
          cVar4 = param_1[lVar9];
          lVar9 = lVar9 + 1;
          cVar2 = *pcVar11;
          cVar12 = cVar1;
        }
        if ((cVar1 != '/') || (!bVar14)) {
LAB_00402541:
          iVar13 = iVar10;
          if (iVar10 == 0) {
            return (uint)bVar3;
          }
        }
LAB_00402545:
        param_2 = param_2 + iVar13;
        cVar4 = *param_2;
        if (cVar4 == '/') {
          cVar4 = param_2[1];
          param_2 = param_2 + 1;
        }
        pcVar11 = param_1 + iVar13 + (param_1[iVar13] == '/');
        local_28 = param_4;
        local_20 = param_3;
        if (cVar4 == '\0') {
          if (*pcVar11 == '\0') {
            pcVar11 = ".";
          }
          uVar5 = FUN_00402410(pcVar11,&local_20,&local_28);
        }
        else {
          uVar5 = FUN_00402410(&DAT_00408d01,&local_20,&local_28);
          cVar4 = *param_2;
          while (cVar4 != '\0') {
            if (cVar4 == '/') {
              uVar6 = FUN_00402410(&DAT_00408d00,&local_20,&local_28);
              uVar5 = uVar5 | uVar6;
            }
            param_2 = param_2 + 1;
            cVar4 = *param_2;
          }
          if (*pcVar11 != '\0') {
            uVar6 = FUN_00402410(&DAT_00408e2e,&local_20,&local_28);
            uVar7 = FUN_00402410(pcVar11,&local_20,&local_28);
            uVar5 = uVar5 | uVar6 | uVar7;
          }
        }
        if ((char)uVar5 != '\0') {
          uVar8 = dcgettext(0,"generating relative path",5);
          error(0,0x24,"%s",uVar8);
        }
        uVar5 = uVar5 ^ 1;
      }
    }
  }
  return uVar5;
}


char * FUN_00402690(char *param_1,uint param_2)

{
  ulong uVar1;
  bool bVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  char *__s;
  size_t sVar6;
  char *pcVar7;
  size_t sVar8;
  int *piVar9;
  uint uVar10;
  char cVar11;
  char *pcVar12;
  char *pcVar13;
  long lVar14;
  char *pcVar15;
  char *pcVar16;
  long local_f0;
  char *local_e8;
  void *local_e0;
  ulong local_d8;
  stat local_c8;
  
  uVar10 = param_2 & 3;
  if (((uVar10 & uVar10 - 1) == 0) && (param_1 != (char *)0x0)) {
    if (*param_1 == '\0') {
      piVar9 = __errno_location();
      __s = (char *)0x0;
      *piVar9 = 2;
    }
    else {
      if (*param_1 == '/') {
        __s = (char *)FUN_004064d0(0x1000);
        pcVar15 = __s + 0x1000;
        pcVar12 = __s + 1;
        *__s = '/';
      }
      else {
        __s = (char *)FUN_00406760();
        if (__s == (char *)0x0) {
          return (char *)0x0;
        }
        sVar6 = strlen(__s);
        if (sVar6 < 0x1000) {
          __s = (char *)FUN_00406530(__s,0x1000);
          pcVar12 = __s + sVar6;
          pcVar15 = __s + 0x1000;
        }
        else {
          pcVar12 = __s + sVar6;
          pcVar15 = pcVar12;
        }
      }
      cVar4 = *param_1;
      local_f0 = 0;
      local_d8 = 0;
      local_e0 = (void *)0x0;
      local_e8 = param_1;
LAB_00402738:
      while (pcVar13 = pcVar12, cVar4 != '\0') {
        pcVar7 = param_1;
        cVar11 = cVar4;
        if (cVar4 == '/') {
          do {
            param_1 = param_1 + 1;
            cVar11 = *param_1;
          } while (cVar11 == '/');
          pcVar7 = param_1;
          if (cVar11 == '\0') break;
        }
        do {
          pcVar16 = param_1;
          cVar4 = pcVar16[1];
          param_1 = pcVar16 + 1;
          if (cVar4 == '\0') break;
        } while (cVar4 != '/');
        if (param_1 == pcVar7) break;
        sVar6 = (long)param_1 - (long)pcVar7;
        pcVar12 = pcVar13;
        if (sVar6 == 1) goto LAB_00402928;
        if (((cVar11 != '.') || (sVar6 != 2)) || (pcVar7[1] != '.')) goto LAB_004027ac;
        if (((__s + 1 < pcVar13) && (pcVar12 = pcVar13 + -1, __s < pcVar12)) && (pcVar13[-2] != '/')
           ) {
          for (pcVar12 = pcVar13 + -2; (__s != pcVar12 && (pcVar12[-1] != '/'));
              pcVar12 = pcVar12 + -1) {
          }
        }
      }
      if ((__s + 1 < pcVar13) && (pcVar13[-1] == '/')) {
        pcVar7 = pcVar13 + -1;
        pcVar12 = pcVar13;
      }
      else {
        pcVar12 = pcVar13 + 1;
        pcVar7 = pcVar13;
      }
      *pcVar7 = '\0';
      if (pcVar15 != pcVar12) {
        __s = (char *)FUN_00406530(__s,pcVar7 + (1 - (long)__s));
      }
      free(local_e0);
      if (local_f0 != 0) {
        FUN_00403970(local_f0);
      }
    }
  }
  else {
    piVar9 = __errno_location();
    __s = (char *)0x0;
    *piVar9 = 0x16;
  }
  return __s;
LAB_00402928:
  if (cVar11 == '.') goto LAB_00402738;
LAB_004027ac:
  if (pcVar13[-1] != '/') {
    *pcVar13 = '/';
    pcVar13 = pcVar13 + 1;
  }
  if (pcVar15 <= pcVar13 + sVar6) {
    lVar14 = (long)pcVar13 - (long)__s;
    lVar3 = 0x1000 - (long)__s;
    if (0xfff < (long)sVar6) {
      lVar3 = (sVar6 + 1) - (long)__s;
    }
    __s = (char *)FUN_00406530(__s,pcVar15 + lVar3);
    pcVar15 = __s + (long)(pcVar15 + lVar3);
    pcVar13 = __s + lVar14;
  }
  memcpy(pcVar13,pcVar7,sVar6);
  pcVar12 = pcVar13 + sVar6;
  *pcVar12 = '\0';
  pcVar13 = pcVar12;
  if ((uVar10 == 2) && ((param_2 & 4) != 0)) {
LAB_0040282b:
    local_c8.st_mode = 0;
LAB_00402833:
    if ((*param_1 == '\0') || (uVar10 == 2)) {
LAB_00402844:
      cVar4 = *param_1;
      pcVar12 = pcVar13;
      goto LAB_00402738;
    }
    piVar9 = __errno_location();
    iVar5 = 0x14;
LAB_00402b95:
    free(local_e0);
    free(__s);
    if (local_f0 == 0) goto LAB_00402af1;
  }
  else {
    if ((param_2 & 4) == 0) {
      iVar5 = __lxstat(1,__s,&local_c8);
    }
    else {
      iVar5 = __xstat(1,__s,&local_c8);
    }
    if (iVar5 != 0) {
      piVar9 = __errno_location();
      iVar5 = *piVar9;
      if (uVar10 != 0) {
        if (uVar10 != 1) goto LAB_0040282b;
        sVar6 = strspn(param_1,"/");
        if ((param_1[sVar6] == '\0') && (iVar5 == 2)) goto LAB_004028e9;
      }
      goto LAB_00402b95;
    }
    if ((local_c8.st_mode & 0xf000) != 0xa000) {
      if ((local_c8.st_mode & 0xf000) == 0x4000) goto LAB_00402844;
      goto LAB_00402833;
    }
    if ((local_f0 == 0) &&
       (local_f0 = FUN_00403730(7,0,FUN_004040f0,FUN_00404160,FUN_004041a0), local_f0 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00406720();
    }
    cVar4 = FUN_00402e60(local_f0,local_e8,&local_c8);
    if (cVar4 == '\0') {
      FUN_00402dd0(local_f0,local_e8,&local_c8);
      pcVar7 = (char *)FUN_00407ab0(__s,local_c8.st_size);
      if (pcVar7 != (char *)0x0) {
        sVar6 = strlen(pcVar7);
        sVar8 = strlen(param_1);
        uVar1 = sVar6 + 1 + sVar8;
        if (local_d8 == 0) {
          local_d8 = 0x1000;
          if (0xfff < uVar1) {
            local_d8 = uVar1;
          }
          local_e0 = (void *)FUN_004064d0(local_d8);
        }
        else if (local_d8 < uVar1) {
          local_e0 = (void *)FUN_00406530(local_e0,uVar1);
          local_d8 = uVar1;
        }
        memmove((void *)((long)local_e0 + sVar6),param_1,sVar8 + 1);
        param_1 = (char *)memcpy(local_e0,pcVar7,sVar6);
        pcVar13 = __s + 1;
        if (*pcVar7 == '/') {
          *__s = '/';
        }
        else {
          bVar2 = pcVar13 < pcVar12;
          pcVar13 = pcVar12;
          if ((bVar2) && (pcVar13 = pcVar12 + -1, __s < pcVar13)) {
            cVar4 = pcVar12[-2];
            pcVar12 = pcVar13;
            while ((pcVar13 = pcVar12, cVar4 != '/' && (pcVar13 = pcVar12 + -1, __s != pcVar13))) {
              cVar4 = pcVar12[-2];
              pcVar12 = pcVar13;
            }
          }
        }
        free(pcVar7);
        local_e8 = param_1;
        goto LAB_00402844;
      }
      piVar9 = __errno_location();
      iVar5 = *piVar9;
      if ((uVar10 == 2) && (iVar5 != 0xc)) goto LAB_004028e9;
    }
    else {
      if (uVar10 == 2) {
LAB_004028e9:
        cVar4 = pcVar16[1];
        goto LAB_00402738;
      }
      piVar9 = __errno_location();
      iVar5 = 0x28;
    }
    free(local_e0);
    free(__s);
  }
  FUN_00403970(local_f0);
LAB_00402af1:
  *piVar9 = iVar5;
  return (char *)0x0;
}


void FUN_00402d10(undefined param_1)

{
  DAT_0060c318 = param_1;
  return;
}


void FUN_00402d20(undefined param_1)

{
  DAT_0060c310 = param_1;
  return;
}


void FUN_00402d30(void)

{
  int iVar1;
  int *piVar2;
  undefined uVar3;
  undefined uVar4;
  
  iVar1 = FUN_00407ba0(stdout);
  if (iVar1 != 0) {
    piVar2 = __errno_location();
    if ((DAT_0060c310 == '\0') || (*piVar2 != 0x20)) {
      uVar3 = dcgettext(0,"write error",5);
      if (DAT_0060c318 == 0) {
        error(0,*piVar2,"%s",uVar3);
      }
      else {
        uVar4 = FUN_00405c30();
        error(0,*piVar2,"%s: %s",uVar4,uVar3);
      }
      goto LAB_00402dae;
    }
  }
  iVar1 = FUN_00407ba0(stderr);
  if (iVar1 == 0) {
    return;
  }
LAB_00402dae:
                    /* WARNING: Subroutine does not return */
  _exit(DAT_0060c240);
}


void FUN_00402dd0(long param_1,undefined param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined uVar2;
  undefined *puVar3;
  
  if (param_1 == 0) {
    return;
  }
  puVar1 = (undefined *)FUN_004064d0(0x18);
  uVar2 = FUN_00406700(param_2);
  *puVar1 = uVar2;
  puVar1[1] = param_3[1];
  puVar1[2] = *param_3;
  puVar3 = (undefined *)FUN_00403ed0(param_1,puVar1);
  if (puVar3 != (undefined *)0x0) {
    if (puVar1 != puVar3) {
      FUN_004041a0(puVar1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00406720();
}


ulong FUN_00402e60(long param_1,undefined param_2,undefined *param_3)

{
  ulong uVar1;
  undefined local_28;
  undefined local_20;
  undefined local_18;
  
  if (param_1 != 0) {
    local_20 = param_3[1];
    local_18 = *param_3;
    local_28 = param_2;
    uVar1 = FUN_004034c0(param_1,&local_28);
    return uVar1 & 0xffffffffffffff00 | (ulong)(uVar1 != 0);
  }
  return 0;
}


ulong FUN_00402ea0(ulong param_1)

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
LAB_00402f20:
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
        if (uVar3 <= uVar4) goto LAB_00402f20;
        lVar5 = lVar5 + 8;
      } while (uVar1 != 0);
    }
    uVar3 = uVar3 + 2;
  } while( true );
}


ulong FUN_00402f40(ulong param_1,ulong param_2)

{
  return (param_1 >> 3 | param_1 << 0x3d) % param_2;
}


bool FUN_00402f50(long param_1,long param_2)

{
  return param_1 == param_2;
}


long FUN_00402f60(long *param_1,undefined param_2)

{
  ulong uVar1;
  
  uVar1 = (*(code *)param_1[6])(param_2,param_1[2]);
  if (uVar1 <= (ulong)param_1[2] && param_1[2] != uVar1) {
    return uVar1 * 0x10 + *param_1;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


long FUN_00402f90(long param_1,long param_2,long **param_3,char param_4)

{
  undefined *puVar1;
  undefined uVar2;
  undefined uVar3;
  undefined uVar4;
  char cVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  
  plVar6 = (long *)FUN_00402f60();
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
LAB_0040301c:
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
          goto LAB_0040301c;
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

undefined FUN_004030b0(float **param_1)

{
  float fVar1;
  float *pfVar2;
  float fVar3;
  
  pfVar2 = *param_1;
  if (pfVar2 == (float *)&DAT_00408db0) {
    return 1;
  }
  fVar1 = pfVar2[2];
  if ((((_DAT_00408dc4 < fVar1) && (fVar1 < DAT_00408dc8)) && (_DAT_00408dcc < pfVar2[3])) &&
     (_DAT_00408dd0 <= *pfVar2)) {
    fVar3 = *pfVar2 + _DAT_00408dc4;
    if (((fVar3 < pfVar2[1]) && (pfVar2[1] <= DAT_00408dd4)) && (fVar3 < fVar1)) {
      return 1;
    }
  }
  *param_1 = (float *)&DAT_00408db0;
  return 0;
}


undefined FUN_00403130(long param_1,long **param_2,char param_3)

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
LAB_00403158:
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
          plVar2 = (long *)FUN_00402f60(param_1,lVar6);
          plVar4 = (long *)plVar3[1];
          if (*plVar2 != 0) break;
          *plVar2 = lVar6;
          *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
          *plVar3 = 0;
          plVar3[1] = *(long *)(param_1 + 0x48);
          *(long **)(param_1 + 0x48) = plVar3;
          plVar3 = plVar4;
          if (plVar4 == (long *)0x0) goto LAB_004031cf;
        }
        plVar3[1] = plVar2[1];
        plVar2[1] = (long)plVar3;
        plVar3 = plVar4;
      } while (plVar4 != (long *)0x0);
LAB_004031cf:
      lVar6 = *plVar5;
    }
    plVar5[1] = 0;
    if (param_3 != '\0') goto LAB_00403158;
    plVar3 = (long *)FUN_00402f60(param_1,lVar6);
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


undefined FUN_00403280(long param_1)

{
  return *(undefined *)(param_1 + 0x10);
}


undefined FUN_00403290(long param_1)

{
  return *(undefined *)(param_1 + 0x18);
}


undefined FUN_004032a0(long param_1)

{
  return *(undefined *)(param_1 + 0x20);
}


void FUN_004032b0(long **param_1)

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


bool FUN_00403300(long **param_1)

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
LAB_00403318:
      plVar2 = plVar2 + 2;
    }
    lVar1 = plVar2[1];
    plVar4 = (long *)((long)plVar4 + 1);
    plVar3 = (long *)((long)plVar3 + 1);
    if (lVar1 == 0) goto LAB_00403318;
    do {
      lVar1 = *(long *)(lVar1 + 8);
      plVar3 = (long *)((long)plVar3 + 1);
    } while (lVar1 != 0);
    plVar2 = plVar2 + 2;
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403370(long **param_1,undefined param_2)

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
      if (param_1[1] <= plVar6) goto LAB_004033dd;
    }
  }
LAB_004033dd:
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
  __fprintf_chk((dVar7 * _DAT_00408de8) / dVar8,param_2,1,"# buckets used:    %lu (%.2f%%)\n",plVar2
               );
  __fprintf_chk(param_2,1,"max bucket length: %lu\n",uVar5);
  return;
}


long FUN_004034c0(long param_1,long param_2)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)FUN_00402f60();
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


long FUN_00403520(long **param_1)

{
  long lVar1;
  long *plVar2;
  
  if (param_1[4] == (long *)0x0) {
    return 0;
  }
  plVar2 = *param_1;
  if (param_1[1] <= plVar2) {
    lVar1 = FUN_004019d5();
    return lVar1;
  }
  do {
    if (*plVar2 != 0) {
      return *plVar2;
    }
    plVar2 = plVar2 + 2;
  } while (plVar2 < param_1[1]);
  lVar1 = FUN_004019d5();
  return lVar1;
}


long FUN_00403570(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = (long *)FUN_00402f60();
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


ulong FUN_004035e0(long **param_1,long param_2,ulong param_3)

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


long FUN_00403650(long **param_1,code *param_2,undefined param_3)

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


ulong FUN_004036d0(byte *param_1,ulong param_2)

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


void FUN_00403710(undefined *param_1)

{
  *(undefined *)(param_1 + 2) = 0;
  *param_1 = 0x3f80000000000000;
  param_1[1] = 0x3fb4fdf43f4ccccd;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ** FUN_00403730(ulong param_1,void *param_2,code *param_3,code *param_4,void *param_5)

{
  char cVar1;
  void **__ptr;
  void *__nmemb;
  void *pvVar2;
  float fVar3;
  float fVar4;
  
  if (param_3 == (code *)0x0) {
    param_3 = FUN_00402f40;
  }
  if (param_4 == (code *)0x0) {
    param_4 = FUN_00402f50;
  }
  __ptr = (void **)malloc(0x50);
  if (__ptr == (void **)0x0) {
    return (void **)0x0;
  }
  if (param_2 == (void *)0x0) {
    __ptr[5] = &DAT_00408db0;
    cVar1 = FUN_004030b0(__ptr + 5);
    if (cVar1 == '\0') goto LAB_00403810;
    fVar4 = DAT_00408dd8;
    if ((long)param_1 < 0) goto LAB_00403893;
LAB_0040384e:
    fVar3 = (float)param_1;
LAB_00403857:
    fVar3 = fVar3 / fVar4;
    if (_DAT_00408ddc <= fVar3) goto LAB_00403810;
    if (fVar3 < _DAT_00408de0) {
      param_1 = (ulong)fVar3;
    }
    else {
      param_1 = (long)(fVar3 - _DAT_00408de0) ^ 0x8000000000000000;
    }
  }
  else {
    __ptr[5] = param_2;
    cVar1 = FUN_004030b0(__ptr + 5);
    if (cVar1 == '\0') goto LAB_00403810;
    if (*(char *)((long)param_2 + 0x10) == '\0') {
      fVar4 = *(float *)((long)param_2 + 8);
      if (-1 < (long)param_1) goto LAB_0040384e;
LAB_00403893:
      fVar3 = (float)(param_1 >> 1 | (ulong)((uint)param_1 & 1));
      fVar3 = fVar3 + fVar3;
      goto LAB_00403857;
    }
  }
  __nmemb = (void *)FUN_00402ea0(param_1);
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
LAB_00403810:
  free(__ptr);
  return (void **)0x0;
}


void FUN_004038c0(long **param_1)

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
        if (param_1[1] < plVar4 || param_1[1] == plVar4) goto LAB_00403953;
      }
      plVar5 = plVar5 + 2;
    } while (plVar5 <= param_1[1] && param_1[1] != plVar5);
  }
LAB_00403953:
  param_1[3] = (long *)0x0;
  param_1[4] = (long *)0x0;
  return;
}


void FUN_00403970(long **param_1)

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
    if (plVar2 <= plVar4) goto LAB_00403a0c;
    do {
      while (lVar5 = *plVar4, plVar3 = plVar4, lVar5 == 0) {
        plVar4 = plVar4 + 2;
        if (plVar2 <= plVar4) goto LAB_004039cf;
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
LAB_004039cf:
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
LAB_00403a0c:
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

undefined FUN_00403a50(void **param_1,ulong param_2)

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
    if (_DAT_00408ddc <= fVar3) {
      return 0;
    }
    if (fVar3 < _DAT_00408de0) {
      param_2 = (ulong)fVar3;
    }
    else {
      param_2 = (long)(fVar3 - _DAT_00408de0) ^ 0x8000000000000000;
    }
  }
  local_58 = (void *)FUN_00402ea0(param_2);
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
      uVar2 = FUN_00403130(&local_68,param_1,0);
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
      cVar1 = FUN_00403130(param_1,&local_68,1);
      if ((cVar1 != '\0') && (cVar1 = FUN_00403130(param_1,&local_68,0), cVar1 != '\0')) {
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

undefined FUN_00403c50(long param_1,long param_2,long *param_3)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined uVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  long *local_20;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar2 = FUN_00402f90(param_1,param_2,&local_20,0);
  if (lVar2 != 0) {
    if (param_3 != (long *)0x0) {
      *param_3 = lVar2;
    }
    return 0;
  }
  uVar6 = *(ulong *)(param_1 + 0x18);
  if ((long)uVar6 < 0) {
    uVar3 = *(ulong *)(param_1 + 0x10);
    fVar7 = (float)(uVar6 >> 1 | (ulong)((uint)uVar6 & 1));
    lVar2 = *(long *)(param_1 + 0x28);
    fVar7 = fVar7 + fVar7;
    if ((long)uVar3 < 0) goto LAB_00403d4a;
LAB_00403cbb:
    if (fVar7 <= (float)uVar3 * *(float *)(lVar2 + 8)) goto LAB_00403cd2;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x28);
    fVar7 = (float)uVar6;
    uVar3 = *(ulong *)(param_1 + 0x10);
    if (-1 < (long)uVar3) goto LAB_00403cbb;
LAB_00403d4a:
    fVar8 = (float)(uVar3 >> 1 | (ulong)((uint)uVar3 & 1));
    if (fVar7 <= (fVar8 + fVar8) * *(float *)(lVar2 + 8)) goto LAB_00403cd2;
  }
  FUN_004030b0(param_1 + 0x28);
  lVar2 = *(long *)(param_1 + 0x28);
  uVar6 = *(ulong *)(param_1 + 0x10);
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
  if (*(float *)(lVar2 + 8) * fVar7 < fVar8) {
    fVar7 = fVar7 * *(float *)(lVar2 + 0xc);
    if (*(char *)(lVar2 + 0x10) == '\0') {
      fVar7 = fVar7 * *(float *)(lVar2 + 8);
    }
    if (_DAT_00408ddc <= fVar7) {
      return 0xffffffff;
    }
    if (_DAT_00408de0 <= fVar7) {
      uVar6 = (long)(fVar7 - _DAT_00408de0) ^ 0x8000000000000000;
    }
    else {
      uVar6 = (ulong)fVar7;
    }
    cVar1 = FUN_00403a50(param_1,uVar6);
    if (cVar1 == '\0') {
      return 0xffffffff;
    }
    lVar2 = FUN_00402f90(param_1,param_2,&local_20,0);
    if (lVar2 != 0) {
      uVar5 = FUN_004019df();
      return uVar5;
    }
  }
LAB_00403cd2:
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


undefined FUN_00403ed0(undefined param_1,undefined param_2)

{
  int iVar1;
  undefined local_10;
  
  iVar1 = FUN_00403c50(param_1,param_2,&local_10);
  if (iVar1 != -1) {
    if (iVar1 == 0) {
      param_2 = local_10;
    }
    return param_2;
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_00403f10(long param_1,undefined param_2)

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
  
  lVar5 = FUN_00402f90(param_1,param_2,&local_20,1);
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
      FUN_004030b0(param_1 + 0x28);
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
        if (_DAT_00408de0 <= fVar7) {
          uVar6 = (long)(fVar7 - _DAT_00408de0) ^ 0x8000000000000000;
        }
        else {
          uVar6 = (ulong)fVar7;
        }
        cVar4 = FUN_00403a50(param_1,uVar6);
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


ulong FUN_004040f0(undefined *param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00407dd0(*param_1);
  return (uVar1 ^ param_1[1]) % param_2;
}


ulong FUN_00404120(long param_1,ulong param_2)

{
  return *(ulong *)(param_1 + 8) % param_2;
}


undefined FUN_00404130(undefined *param_1,undefined *param_2)

{
  undefined uVar1;
  
  if ((param_1[1] == param_2[1]) && (param_1[2] == param_2[2])) {
    uVar1 = FUN_00405e00(*param_1,*param_2);
    return uVar1;
  }
  return 0;
}


ulong FUN_00404160(char **param_1,char **param_2)

{
  int iVar1;
  undefined extraout_var;
  
  if ((param_1[1] == param_2[1]) && (param_1[2] == param_2[2])) {
    iVar1 = strcmp(*param_1,*param_2);
    return CONCAT44(extraout_var,iVar1) & 0xffffffffffffff00 | (ulong)(iVar1 == 0);
  }
  return 0;
}


void FUN_004041a0(void **param_1)

{
  free(*param_1);
  free(param_1);
  return;
}


void FUN_004041c0(byte *param_1)

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
      pbVar6 = &DAT_00408e28;
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
        pbVar6 = &DAT_00408e30;
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
  DAT_0060c320 = param_1;
  program_invocation_name = param_1;
  return;
}


char * FUN_00404260(char *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  byte *pbVar3;
  
  pcVar2 = (char *)dcgettext(0,param_1,5);
  if (param_1 == pcVar2) {
    pbVar3 = (byte *)FUN_00407e10();
    if ((*pbVar3 & 0xdf) == 0x55) {
      if (((((pbVar3[1] & 0xdf) != 0x54) || ((pbVar3[2] & 0xdf) != 0x46)) || (pbVar3[3] != 0x2d)) ||
         ((pbVar3[4] != 0x38 || (pbVar3[5] != 0)))) {
LAB_00404338:
        pcVar2 = "\"";
        if (param_2 != 9) {
          pcVar2 = "\'";
        }
        return pcVar2;
      }
      cVar1 = *pcVar2;
      pcVar2 = &DAT_00408e41;
      if (cVar1 != '`') {
        pcVar2 = &DAT_00408e36;
      }
    }
    else {
      if (((((*pbVar3 & 0xdf) != 0x47) || ((pbVar3[1] & 0xdf) != 0x42)) || (pbVar3[2] != 0x31)) ||
         (((pbVar3[3] != 0x38 || (pbVar3[4] != 0x30)) ||
          ((pbVar3[5] != 0x33 || ((pbVar3[6] != 0x30 || (pbVar3[7] != 0)))))))) goto LAB_00404338;
      cVar1 = *pcVar2;
      pcVar2 = &DAT_00408e3d;
      if (cVar1 != '`') {
        pcVar2 = &DAT_00408e3a;
      }
    }
  }
  return pcVar2;
}


ulong FUN_00404360(undefined *param_1,ulong param_2,char *param_3,ulong param_4,int param_5,
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
LAB_00404fb1:
    if (param_2 != 0) {
      bVar3 = false;
      local_5b = false;
      bVar2 = true;
      local_70 = 0;
      goto LAB_00404be6;
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
      goto LAB_00404fb1;
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
      param_8 = (char *)FUN_00404260(&DAT_00408e45,param_5);
      param_9 = (char *)FUN_00404260(&DAT_0040a017);
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
LAB_004043f8:
  uVar22 = 0;
  bVar5 = local_5b;
LAB_00404408:
  bVar23 = param_4 != uVar22;
  if (param_4 == 0xffffffffffffffff) {
    bVar23 = param_3[uVar22] != '\0';
  }
  bVar26 = bVar6;
  if (!bVar23) goto LAB_00404b88;
  bVar20 = (bool)(param_5 != 2 & bVar6);
  __s1 = (byte *)(param_3 + uVar22);
  uVar16 = uVar15;
  bVar4 = bVar3;
  if (bVar20) {
    if (local_a0 == 0) {
LAB_00404b00:
      uVar19 = (ulong)*__s1;
      switch(uVar19) {
      case 0:
        goto switchD_00404b12_caseD_0;
      default:
        bVar20 = false;
        goto switchD_0040497e_caseD_1;
      case 7:
        bVar17 = 0x61;
        goto LAB_00404815;
      case 8:
        bVar17 = 0x62;
        break;
      case 9:
switchD_00404b12_caseD_9:
        bVar17 = 0x74;
        break;
      case 10:
switchD_00404b12_caseD_a:
        bVar17 = 0x6e;
        break;
      case 0xb:
switchD_00404b12_caseD_b:
        bVar17 = 0x76;
        goto LAB_00404815;
      case 0xc:
switchD_00404b12_caseD_c:
        bVar17 = 0x66;
LAB_00404815:
        if (local_5c) {
          bVar25 = false;
          goto LAB_00404768;
        }
LAB_00404820:
        bVar23 = false;
        goto LAB_004045db;
      case 0xd:
        bVar20 = false;
switchD_004044f8_caseD_d:
        bVar25 = param_5 == 2;
        uVar19 = 0xd;
        bVar13 = 0x72;
        goto LAB_00404730;
      case 0x20:
        bVar25 = false;
LAB_00404b5a:
        uVar19 = 0x20;
        goto LAB_00404b22;
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
switchD_004044f8_caseD_21:
        bVar25 = false;
        goto LAB_0040473b;
      case 0x23:
      case 0x7e:
        bVar26 = false;
LAB_00404b3a:
        if (uVar22 == 0) {
          bVar25 = false;
          bVar23 = bVar20;
          bVar20 = bVar26;
          goto LAB_00404548;
        }
        bVar23 = false;
        goto LAB_0040455f;
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
LAB_00404b22:
        bVar24 = false;
        bVar23 = bVar20;
        bVar20 = bVar25;
        goto LAB_00404561;
      case 0x27:
        bVar20 = false;
        goto switchD_0040497e_caseD_27;
      case 0x3f:
        bVar20 = false;
        goto switchD_0040497e_caseD_3f;
      case 0x5c:
        bVar20 = false;
        goto switchD_004044f8_caseD_5c;
      case 0x7b:
      case 0x7d:
        bVar20 = false;
        goto switchD_0040497e_caseD_7b;
      }
      bVar25 = false;
      bVar23 = false;
      goto joined_r0x00404757;
    }
    if ((param_4 == 0xffffffffffffffff) && (1 < local_a0)) {
      param_4 = strlen(param_3);
    }
    if ((param_4 < uVar22 + local_a0) || (iVar7 = memcmp(__s1,local_78,local_a0), iVar7 != 0))
    goto LAB_00404b00;
    if (!local_5c) {
      uVar19 = (ulong)*__s1;
      bVar25 = bVar20;
      switch(uVar19) {
      case 0:
        goto switchD_004044f8_caseD_0;
      default:
        goto switchD_0040497e_caseD_1;
      case 7:
        bVar17 = 0x61;
        goto LAB_00404820;
      case 8:
        bVar25 = false;
        bVar23 = false;
        bVar17 = 0x62;
        break;
      case 9:
        goto switchD_00404b12_caseD_9;
      case 10:
        goto switchD_00404b12_caseD_a;
      case 0xb:
        goto switchD_00404b12_caseD_b;
      case 0xc:
        goto switchD_00404b12_caseD_c;
      case 0xd:
        goto switchD_004044f8_caseD_d;
      case 0x20:
        goto LAB_00404b5a;
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
        goto switchD_004044f8_caseD_21;
      case 0x23:
      case 0x7e:
        bVar26 = bVar20;
        goto LAB_00404b3a;
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
        goto LAB_00404b22;
      case 0x27:
        goto switchD_0040497e_caseD_27;
      case 0x3f:
        goto switchD_0040497e_caseD_3f;
      case 0x5c:
        goto switchD_004044f8_caseD_5c;
      case 0x7b:
      case 0x7d:
        goto switchD_0040497e_caseD_7b;
      }
      goto LAB_004045a2;
    }
    goto LAB_0040477a;
  }
  uVar19 = (ulong)*__s1;
  switch(uVar19) {
  case 0:
    if (bVar6) {
switchD_00404b12_caseD_0:
      if (!local_5c) {
        bVar20 = false;
switchD_004044f8_caseD_0:
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
            goto LAB_00404658;
          }
LAB_0040489a:
          param_1[uVar16] = 0x5c;
          uVar15 = uVar16;
        }
        else if (uVar15 < uVar9) goto LAB_0040489a;
        uVar16 = uVar15 + 1;
        bVar24 = bVar23;
        if (param_5 == 2) {
          bVar17 = 0x30;
          bVar23 = false;
          bVar4 = bVar3;
          goto LAB_00404658;
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
LAB_004048d9:
        bVar17 = (byte)uVar19;
        bVar23 = false;
        uVar15 = uVar16;
        bVar4 = bVar3;
        if ((bool)(bVar6 ^ 1U | bVar26)) goto LAB_00404658;
        goto LAB_00404561;
      }
      bVar26 = param_5 == 2;
      goto LAB_0040476c;
    }
    if ((param_6 & 1) == 0) {
      bVar25 = param_5 == 2;
      uVar19 = 0;
      bVar23 = false;
      bVar20 = false;
      goto LAB_00404548;
    }
    uVar22 = uVar22 + 1;
    goto LAB_00404408;
  default:
switchD_0040497e_caseD_1:
    bVar25 = bVar6;
    if (sVar8 != 1) {
      local_40[0] = (mbstate_t)0x0;
      if (param_4 == 0xffffffffffffffff) {
        param_4 = strlen(param_3);
      }
      uVar21 = 0;
      do {
        uVar1 = uVar22 + uVar21;
        lVar11 = FUN_00407a30(&local_44,param_3 + uVar1,param_4 - uVar1,local_40);
        if (lVar11 == 0) break;
        if (lVar11 == -1) {
          bVar23 = false;
          goto LAB_0040528a;
        }
        if (lVar11 == -2) {
          if ((param_4 <= uVar1) || (param_3[uVar1] == '\0')) goto LAB_004053c7;
          goto LAB_004053b7;
        }
        if (((param_5 == 2) && (local_5c)) && (lVar11 != 1)) {
          pcVar12 = param_3 + uVar1 + 1;
          do {
            if (((byte)(*pcVar12 + 0xa5U) < 0x22) &&
               ((1L << (*pcVar12 + 0xa5U & 0x3f) & 0x20000002bU) != 0)) {
              param_5 = 2;
              goto LAB_0040476c;
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
      goto LAB_0040528a;
    }
    ppuVar10 = __ctype_b_loc();
    uVar21 = 1;
    bVar25 = ((*ppuVar10)[uVar19] & 0x4000) == 0;
    bVar23 = !bVar25;
    bVar25 = (bool)(bVar25 & bVar6);
    goto LAB_00404954;
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
    goto LAB_00404992;
  case 10:
    uVar19 = 10;
    bVar13 = 0x6e;
    goto LAB_00404992;
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
LAB_00404992:
    bVar25 = param_5 == 2;
    bVar20 = (bool)(local_5c & bVar25);
    if (bVar20) {
LAB_004049aa:
      param_5 = 2;
      goto LAB_0040476c;
    }
    break;
  case 0x20:
    uVar19 = 0x20;
    goto LAB_00404536;
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
LAB_00404536:
    bVar25 = param_5 == 2;
    if ((local_5c) && (bVar25)) goto LAB_004049aa;
    goto LAB_00404548;
  case 0x23:
  case 0x7e:
LAB_0040452d:
    bVar25 = param_5 == 2;
    if (uVar22 == 0) goto LAB_00404536;
    goto LAB_0040473b;
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
    goto switchD_0040497e_caseD_25;
  case 0x27:
switchD_0040497e_caseD_27:
    bVar5 = bVar23;
    if (param_5 != 2) {
      bVar25 = false;
      uVar19 = 0x27;
      goto LAB_00404548;
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
      goto LAB_00404658;
    }
    goto LAB_0040476c;
  case 0x3f:
switchD_0040497e_caseD_3f:
    if (param_5 == 2) {
      if (!local_5c) {
        bVar17 = 0x3f;
        bVar24 = false;
        bVar23 = false;
        goto LAB_00404658;
      }
      goto LAB_0040476c;
    }
    if (param_5 != 5) {
      bVar25 = param_5 == 2;
      uVar19 = 0x3f;
      bVar23 = false;
      goto LAB_00404548;
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
        goto LAB_004048d9;
      }
      goto LAB_0040477a;
    }
    bVar25 = false;
    uVar19 = 0x3f;
    bVar23 = false;
    goto LAB_00404548;
  case 0x5c:
    if (param_5 != 2) {
switchD_004044f8_caseD_5c:
      uVar19 = 0x5c;
      bVar17 = 0x5c;
      bVar13 = 0x5c;
      bVar25 = (bool)(bVar6 & local_5c & local_a0 != 0);
      if (!bVar25) break;
      uVar22 = uVar22 + 1;
      bVar23 = false;
      goto LAB_00404674;
    }
    if (local_5c) goto LAB_0040476c;
    uVar22 = uVar22 + 1;
    bVar23 = false;
    bVar17 = 0x5c;
    goto LAB_00404674;
  case 0x7b:
  case 0x7d:
switchD_0040497e_caseD_7b:
    bVar24 = param_4 != 1;
    if (param_4 == 0xffffffffffffffff) {
      bVar24 = param_3[1] != '\0';
    }
    bVar25 = param_5 == 2;
    if (!bVar24) goto LAB_0040452d;
    goto LAB_0040473b;
  }
LAB_00404730:
  if (!bVar6) {
LAB_0040473b:
    bVar23 = false;
    goto LAB_00404548;
  }
  bVar23 = false;
  bVar17 = bVar13;
  goto joined_r0x00404757;
LAB_00404b88:
  if ((uVar15 == 0) && ((bool)(local_5c & param_5 == 2))) {
    param_5 = 2;
LAB_0040476c:
    if (bVar26) {
      param_5 = 4;
    }
LAB_0040477a:
    uVar9 = FUN_00404360(param_1,uVar9,param_3,param_4,param_5,param_6 & 0xfffffffd,0,param_8,
                         param_9);
    return uVar9;
  }
  bVar26 = (bool)(param_5 == 2 & (local_5c ^ 1U));
  bVar23 = (bool)(local_5c ^ 1U);
  if ((!bVar26) || (bVar23 = bVar26, !bVar5)) {
LAB_0040545d:
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
    uVar9 = FUN_00404360(param_1,local_70,param_3,param_4,5,param_6,param_7,param_8,param_9);
    return uVar9;
  }
  local_5b = uVar9 == 0 && local_70 != 0;
  param_2 = local_70;
  bVar23 = bVar5;
  if (uVar9 != 0 || local_70 == 0) goto LAB_0040545d;
LAB_00404be6:
  *param_1 = 0x27;
  param_5 = 2;
  uVar15 = 1;
  local_78 = "\'";
  local_a0 = 1;
  local_5c = false;
  uVar9 = param_2;
  goto LAB_004043f8;
  while (__s1[uVar21] != 0) {
LAB_004053b7:
    uVar21 = uVar21 + 1;
    if (param_4 <= uVar22 + uVar21) break;
  }
LAB_004053c7:
  bVar23 = false;
LAB_0040528a:
  if (1 < uVar21) {
LAB_00404e4e:
    bVar26 = false;
    uVar21 = uVar21 + uVar22;
    uVar16 = uVar22;
    do {
      bVar17 = (byte)uVar19;
      if (bVar25) {
        bVar26 = param_5 == 2;
        if (local_5c) goto LAB_0040476c;
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
        if (uVar21 <= uVar22) goto LAB_004045ed;
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
        if (uVar21 <= uVar22) goto LAB_00404674;
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
LAB_00404954:
  if (bVar25) {
    bVar23 = false;
    bVar25 = bVar6;
    goto LAB_00404e4e;
  }
switchD_0040497e_caseD_25:
  bVar25 = param_5 == 2;
LAB_00404548:
  bVar17 = (byte)uVar19;
  bVar24 = (bool)((bVar6 ^ 1U | bVar25) ^ 1 | local_5c);
  bVar26 = bVar20;
  if (bVar24) {
LAB_0040455f:
    bVar24 = false;
    bVar20 = bVar26;
LAB_00404561:
    bVar17 = (byte)uVar19;
    uVar16 = uVar15;
    bVar4 = bVar3;
    if ((param_7 == 0) || ((*(uint *)(param_7 + (uVar19 >> 5) * 4) >> (bVar17 & 0x1f) & 1) == 0))
    goto LAB_00404658;
    bVar25 = param_5 == 2;
  }
  else {
LAB_00404658:
    bVar25 = param_5 == 2;
    uVar15 = uVar16;
    bVar3 = bVar4;
    if (!bVar20) {
      uVar22 = uVar22 + 1;
      bVar3 = (bool)((bVar24 ^ 1U) & bVar4);
LAB_00404674:
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
      goto LAB_004045ed;
    }
  }
joined_r0x00404757:
  if (local_5c) {
LAB_00404768:
    bVar26 = (bool)(bVar6 & bVar25);
    goto LAB_0040476c;
  }
LAB_004045a2:
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
LAB_004045db:
  if (uVar15 < uVar9) {
    param_1[uVar15] = 0x5c;
  }
  uVar15 = uVar15 + 1;
  uVar22 = uVar22 + 1;
  bVar4 = bVar3;
LAB_004045ed:
  bVar3 = bVar4;
  if (uVar15 < uVar9) {
    param_1[uVar15] = bVar17;
  }
  uVar15 = uVar15 + 1;
  if (!bVar23) {
    bVar2 = false;
  }
  goto LAB_00404408;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00405590(int param_1,undefined param_2,undefined param_3,undefined *param_4)

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
  puVar8 = (undefined *)PTR_DAT_0060c298;
  if (DAT_0060c2b0 <= param_1) {
    if (param_1 == 0x7fffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_00406720();
    }
    if (PTR_DAT_0060c298 == &DAT_0060c2a0) {
      puVar8 = (undefined *)FUN_00406530(0);
      uVar6 = PTR_DAT_0060c2a8._4_4_;
      uVar5 = PTR_DAT_0060c2a8._0_4_;
      uVar3 = _UNK_0060c2a4;
      PTR_DAT_0060c298 = (undefined *)puVar8;
      *puVar8 = _DAT_0060c2a0;
      puVar8[1] = uVar3;
      puVar8[2] = uVar5;
      puVar8[3] = uVar6;
    }
    else {
      puVar8 = (undefined *)FUN_00406530(PTR_DAT_0060c298);
      PTR_DAT_0060c298 = (undefined *)puVar8;
    }
    memset(puVar8 + (long)DAT_0060c2b0 * 4,0,(long)((param_1 + 1) - DAT_0060c2b0) << 4);
    DAT_0060c2b0 = param_1 + 1;
  }
  uVar2 = param_4[1];
  puVar10 = (ulong *)(puVar8 + (long)param_1 * 4);
  uVar4 = *puVar10;
  __ptr = (undefined *)puVar10[1];
  uVar9 = FUN_00404360(__ptr,uVar4,param_2,param_3,*param_4,uVar2 | 1,param_4 + 2,
                       *(undefined *)(param_4 + 10),*(undefined *)(param_4 + 0xc));
  if (uVar4 <= uVar9) {
    uVar9 = uVar9 + 1;
    *puVar10 = uVar9;
    if (__ptr != &DAT_0060c340) {
      free(__ptr);
    }
    __ptr = (undefined *)FUN_004064d0(uVar9);
    uVar3 = *param_4;
    puVar10[1] = (ulong)__ptr;
    FUN_00404360(__ptr,uVar9,param_2,param_3,uVar3,uVar2 | 1,param_4 + 2,
                 *(undefined *)(param_4 + 10),*(undefined *)(param_4 + 0xc));
  }
  *piVar7 = iVar1;
  return __ptr;
}


void FUN_00405730(undefined *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_0060c440;
  }
  FUN_004066d0(param_1,0x38);
  *piVar2 = iVar1;
  return;
}


undefined FUN_00405770(undefined *param_1)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = (undefined *)&DAT_0060c440;
  }
  return *param_1;
}


void FUN_00405780(undefined *param_1,undefined param_2)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = (undefined *)&DAT_0060c440;
  }
  *param_1 = param_2;
  return;
}


uint FUN_00405790(undefined *param_1,byte param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_0060c440;
  }
  uVar1 = *(uint *)(param_1 + (ulong)(param_2 >> 5) * 4 + 8);
  uVar2 = uVar1 >> (param_2 & 0x1f);
  *(uint *)(param_1 + (ulong)(param_2 >> 5) * 4 + 8) =
       ((param_3 ^ uVar2) & 1) << (param_2 & 0x1f) ^ uVar1;
  return uVar2 & 1;
}


undefined FUN_004057d0(undefined *param_1,undefined param_2)

{
  undefined uVar1;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_0060c440;
  }
  uVar1 = *(undefined *)(param_1 + 4);
  *(undefined *)(param_1 + 4) = param_2;
  return uVar1;
}


void FUN_004057f0(undefined *param_1,long param_2,long param_3)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = (undefined *)&DAT_0060c440;
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


void FUN_00405820(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                 undefined *param_5)

{
  int iVar1;
  int *piVar2;
  
  if (param_5 == (undefined *)0x0) {
    param_5 = (undefined *)&DAT_0060c440;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  FUN_00404360(param_1,param_2,param_3,param_4,*param_5,param_5[1],param_5 + 2,
               *(undefined *)(param_5 + 10),*(undefined *)(param_5 + 0xc));
  *piVar2 = iVar1;
  return;
}


undefined FUN_004058a0(undefined param_1,undefined param_2,long *param_3,undefined *param_4)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined uVar4;
  uint uVar5;
  
  if (param_4 == (undefined *)0x0) {
    param_4 = (undefined *)&DAT_0060c440;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  uVar5 = (uint)(param_3 == (long *)0x0) | param_4[1];
  lVar3 = FUN_00404360(0,0,param_1,param_2,*param_4,uVar5,param_4 + 2,*(undefined *)(param_4 + 10),
                       *(undefined *)(param_4 + 0xc));
  uVar4 = FUN_004064d0(lVar3 + 1);
  FUN_00404360(uVar4,lVar3 + 1,param_1,param_2,*param_4,uVar5,param_4 + 2,
               *(undefined *)(param_4 + 10),*(undefined *)(param_4 + 0xc));
  *piVar2 = iVar1;
  if (param_3 != (long *)0x0) {
    *param_3 = lVar3;
  }
  return uVar4;
}


void FUN_00405990(undefined param_1,undefined param_2,undefined param_3)

{
  FUN_004058a0(param_1,param_2,0,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004059a0(void)

{
  void **ppvVar1;
  void *__ptr;
  undefined *__ptr_00;
  void **ppvVar2;
  
  __ptr_00 = PTR_DAT_0060c298;
  if (1 < DAT_0060c2b0) {
    ppvVar2 = (void **)(PTR_DAT_0060c298 + 0x18);
    ppvVar1 = (void **)(PTR_DAT_0060c298 + (ulong)(DAT_0060c2b0 - 2) * 0x10 + 0x28);
    do {
      __ptr = *ppvVar2;
      ppvVar2 = ppvVar2 + 2;
      free(__ptr);
    } while (ppvVar2 != ppvVar1);
  }
  if (*(undefined **)(__ptr_00 + 8) != &DAT_0060c340) {
    free(*(undefined **)(__ptr_00 + 8));
    _DAT_0060c2a0 = 0x100;
    PTR_DAT_0060c2a8 = &DAT_0060c340;
  }
  if (__ptr_00 != &DAT_0060c2a0) {
    free(__ptr_00);
    PTR_DAT_0060c298 = &DAT_0060c2a0;
  }
  DAT_0060c2b0 = 1;
  return;
}


void FUN_00405a40(undefined param_1,undefined param_2)

{
  FUN_00405590(param_1,param_2,0xffffffffffffffff,&DAT_0060c440);
  return;
}


void FUN_00405a60(void)

{
  FUN_00405590();
  return;
}


void FUN_00405a70(undefined param_1)

{
  FUN_00405590(0,param_1,0xffffffffffffffff,&DAT_0060c440);
  return;
}


void FUN_00405a90(undefined param_1,undefined param_2)

{
  FUN_00405590(0,param_1,param_2,&DAT_0060c440);
  return;
}


void FUN_00405ab0(undefined param_1,int param_2,undefined param_3)

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
    FUN_00405590(param_1,param_3,0xffffffffffffffff,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00405b20(undefined param_1,int param_2,undefined param_3,undefined param_4)

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
    FUN_00405590(param_1,param_3,param_4,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00405b90(undefined param_1,undefined param_2)

{
  FUN_00405ab0(0,param_1,param_2);
  return;
}


void FUN_00405ba0(undefined param_1,undefined param_2,undefined param_3)

{
  FUN_00405b20(0,param_1,param_2,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405bb0(undefined param_1,undefined param_2,byte param_3)

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
  
  local_18 = DAT_0060c470;
  local_48 = _DAT_0060c440;
  uStack_40 = uRam000000000060c448;
  local_38 = _DAT_0060c450;
  uStack_30 = uRam000000000060c458;
  puVar1 = (uint *)((long)&uStack_40 + (ulong)(param_3 >> 5) * 4);
  local_28 = _DAT_0060c460;
  uStack_20 = uRam000000000060c468;
  uVar2 = *puVar1;
  *puVar1 = (~(uVar2 >> (param_3 & 0x1f)) & 1) << (param_3 & 0x1f) ^ uVar2;
  FUN_00405590(0,param_1,param_2,&local_48);
  return;
}


void FUN_00405c20(undefined param_1,char param_2)

{
  FUN_00405bb0(param_1,0xffffffffffffffff,(int)param_2);
  return;
}


void FUN_00405c30(undefined param_1)

{
  FUN_00405bb0(param_1,0xffffffffffffffff,0x3a);
  return;
}


void FUN_00405c50(undefined param_1,undefined param_2)

{
  FUN_00405bb0(param_1,param_2,0x3a);
  return;
}


void FUN_00405c60(undefined param_1,int param_2,undefined param_3)

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
    FUN_00405590(param_1,param_3,0xffffffffffffffff,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405cd0(undefined param_1,long param_2,long param_3,undefined param_4,undefined param_5
                 )

{
  undefined local_48;
  undefined uStack_40;
  undefined local_38;
  undefined uStack_30;
  undefined local_28;
  long lStack_20;
  long local_18;
  
  uStack_40 = uRam000000000060c448;
  local_38 = _DAT_0060c450;
  uStack_30 = uRam000000000060c458;
  local_28 = _DAT_0060c460;
  lStack_20 = uRam000000000060c468;
  local_18 = DAT_0060c470;
  local_48 = CONCAT44((int)((ulong)_DAT_0060c440 >> 0x20),10);
  if ((param_2 != 0) && (param_3 != 0)) {
    lStack_20 = param_2;
    local_18 = param_3;
    FUN_00405590(param_1,param_4,param_5,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00405d40(void)

{
  FUN_00405cd0();
  return;
}


void FUN_00405d50(undefined param_1,undefined param_2,undefined param_3)

{
  FUN_00405cd0(0,param_1,param_2,param_3,0xffffffffffffffff);
  return;
}


void FUN_00405d70(undefined param_1,undefined param_2,undefined param_3,undefined param_4)

{
  FUN_00405cd0(0,param_1,param_2,param_3,param_4);
  return;
}


void FUN_00405d90(void)

{
  FUN_00405590();
  return;
}


void FUN_00405da0(undefined param_1,undefined param_2)

{
  FUN_00405590(0,param_1,param_2,&DAT_0060c260);
  return;
}


void FUN_00405dc0(undefined param_1,undefined param_2)

{
  FUN_00405590(param_1,param_2,0xffffffffffffffff,&DAT_0060c260);
  return;
}


void FUN_00405de0(undefined param_1)

{
  FUN_00405590(0,param_1,0xffffffffffffffff,&DAT_0060c260);
  return;
}


bool FUN_00405e00(undefined param_1,undefined param_2)

{
  int iVar1;
  void *__s1;
  void *__s2;
  size_t __n;
  size_t sVar2;
  char *__filename;
  char *__filename_00;
  int *piVar3;
  bool bVar4;
  stat local_158;
  stat local_c8;
  
  bVar4 = false;
  __s1 = (void *)FUN_00407ce0();
  __s2 = (void *)FUN_00407ce0(param_2);
  __n = FUN_00407d40(__s1);
  sVar2 = FUN_00407d40(__s2);
  if ((__n == sVar2) && (iVar1 = memcmp(__s1,__s2,__n), iVar1 == 0)) {
    __filename = (char *)FUN_00407c00(param_1);
    __filename_00 = (char *)FUN_00407c00(param_2);
    iVar1 = __xstat(1,__filename,&local_158);
    if (iVar1 != 0) {
      piVar3 = __errno_location();
      error(1,*piVar3,"%s",__filename);
    }
    iVar1 = __xstat(1,__filename_00,&local_c8);
    if (iVar1 != 0) {
      piVar3 = __errno_location();
      error(1,*piVar3,"%s",__filename_00);
    }
    bVar4 = local_158.st_ino == local_c8.st_ino && local_158.st_dev == local_c8.st_dev;
    free(__filename);
    free(__filename_00);
  }
  return bVar4;
}


undefined
FUN_00405f30(FILE *param_1,long param_2,undefined param_3,undefined param_4,undefined *param_5,
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
  uVar1 = dcgettext(0,&DAT_00409b8b,5);
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
    goto LAB_004061ac;
  case 5:
    uVar1 = param_5[3];
    uVar4 = param_5[2];
    uVar5 = param_5[1];
    uVar6 = *param_5;
    uVar7 = dcgettext(0,"Written by %s, %s, %s,\n%s, and %s.\n",5);
LAB_004061ac:
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
    goto LAB_00406249;
  case 7:
    uVar1 = param_5[2];
    uVar4 = param_5[5];
    uVar5 = param_5[4];
    uVar6 = param_5[3];
    local_58 = param_5[1];
    uVar7 = *param_5;
    uVar3 = dcgettext(0,"Written by %s, %s, %s,\n%s, %s, %s, and %s.\n",5);
LAB_00406249:
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
    goto LAB_0040602a;
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
LAB_0040602a:
  uVar1 = __fprintf_chk(param_1,1,uVar3,uVar7,local_50,local_58,uVar6,uVar5,uVar4,uVar1,local_48);
  return uVar1;
}


void FUN_00406310(void)

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
  FUN_00405f30();
  return;
}


void FUN_00406330(void)

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
  FUN_00405f30();
  return;
}


void FUN_00406390(void)

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
  FUN_00405f30();
  return;
}


void FUN_00406450(void)

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


void FUN_004064d0(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00406720();
  }
  return;
}


void FUN_004064f0(ulong param_1,ulong param_2)

{
  if ((-1 < SUB168(ZEXT816(param_1) * ZEXT816(param_2),0)) &&
     (SUB168(ZEXT816(param_1) * ZEXT816(param_2) >> 0x40,0) == 0)) {
    FUN_004064d0();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00406720();
}


void thunk_FUN_004064d0(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00406720();
  }
  return;
}


void * FUN_00406530(void *param_1,size_t param_2)

{
  void *pvVar1;
  
  if ((param_2 == 0) && (param_1 != (void *)0x0)) {
    free(param_1);
    return (void *)0x0;
  }
  pvVar1 = realloc(param_1,param_2);
  if ((pvVar1 == (void *)0x0) && (param_2 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00406720();
  }
  return pvVar1;
}


void FUN_00406570(undefined param_1,ulong param_2,ulong param_3)

{
  if ((-1 < SUB168(ZEXT816(param_2) * ZEXT816(param_3),0)) &&
     (SUB168(ZEXT816(param_2) * ZEXT816(param_3) >> 0x40,0) == 0)) {
    FUN_00406530();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00406720();
}


void FUN_004065a0(long param_1,ulong *param_2,ulong param_3)

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
    if ((SUB168(ZEXT816(uVar2) * ZEXT816(param_3),0) < 0) || (uVar3 != 0)) goto LAB_004065fb;
  }
  else {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x5555555555555554);
    uVar3 = SUB168(auVar1 % ZEXT816(param_3),0);
    if (SUB168(auVar1 / ZEXT816(param_3),0) <= uVar2) {
LAB_004065fb:
                    /* WARNING: Subroutine does not return */
      FUN_00406720(param_1,param_2,uVar3);
    }
    uVar2 = (uVar2 >> 1) + 1 + uVar2;
  }
  *param_2 = uVar2;
  FUN_00406530(param_1,uVar2 * param_3);
  return;
}


void FUN_00406630(long param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (param_1 == 0) {
    if (uVar1 == 0) {
      *param_2 = 0x80;
      FUN_00406530(0,0x80);
      return;
    }
    if ((long)uVar1 < 0) goto LAB_0040667a;
  }
  else {
    if (0x5555555555555553 < uVar1) {
LAB_0040667a:
                    /* WARNING: Subroutine does not return */
      FUN_00406720();
    }
    uVar1 = (uVar1 >> 1) + 1 + uVar1;
  }
  *param_2 = uVar1;
  FUN_00406530(param_1,uVar1);
  return;
}


void FUN_00406680(size_t param_1)

{
  void *__s;
  
  __s = (void *)FUN_004064d0();
  memset(__s,0,param_1);
  return;
}


void FUN_004066a0(size_t param_1,ulong param_2)

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
  FUN_00406720();
}


void FUN_004066d0(void *param_1,size_t param_2)

{
  void *__dest;
  
  __dest = (void *)FUN_004064d0(param_2);
  memcpy(__dest,param_1,param_2);
  return;
}


void FUN_00406700(char *param_1)

{
  void *__dest;
  size_t sVar1;
  
  sVar1 = strlen(param_1);
  __dest = (void *)FUN_004064d0(sVar1 + 1);
  memcpy(__dest,param_1,sVar1 + 1);
  return;
}


void FUN_00406720(void)

{
  undefined uVar1;
  
  uVar1 = dcgettext(0,"memory exhausted",5);
  error(DAT_0060c240,0,"%s",uVar1);
                    /* WARNING: Subroutine does not return */
  abort();
}


long FUN_00406760(void)

{
  long lVar1;
  int *piVar2;
  
  lVar1 = FUN_00406790(0,0);
  if (lVar1 == 0) {
    piVar2 = __errno_location();
    if (*piVar2 == 0xc) {
                    /* WARNING: Subroutine does not return */
      FUN_00406720();
    }
  }
  return lVar1;
}


void * FUN_00406790(void *param_1,size_t param_2)

{
  char *__filename;
  bool bVar1;
  __dev_t _Var2;
  __dev_t _Var3;
  __ino_t _Var4;
  __ino_t _Var5;
  int iVar6;
  int iVar7;
  int *piVar8;
  DIR *__dirp;
  dirent *pdVar9;
  size_t __n;
  void *pvVar10;
  bool bVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  __ino_t _Var15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  __dev_t local_120;
  void *local_110;
  void *local_108;
  ulong local_100;
  void *local_e8;
  stat local_c8;
  
  if (param_2 == 0) {
    local_100 = 0x1000;
    if (param_1 != (void *)0x0) {
      piVar8 = __errno_location();
      *piVar8 = 0x16;
      return (void *)0x0;
    }
LAB_004067c2:
    local_110 = malloc(local_100);
    if (local_110 == (void *)0x0) {
      return (void *)0x0;
    }
  }
  else {
    local_110 = param_1;
    local_100 = param_2;
    if (param_1 == (void *)0x0) goto LAB_004067c2;
  }
  lVar13 = (long)local_110 + local_100;
  *(undefined *)(lVar13 + -1) = 0;
  iVar6 = __lxstat(1,".",&local_c8);
  _Var15 = local_c8.st_ino;
  _Var2 = local_c8.st_dev;
  if (-1 < iVar6) {
    local_120 = local_c8.st_dev;
    iVar6 = __lxstat(1,"/",&local_c8);
    _Var4 = local_c8.st_ino;
    _Var3 = local_c8.st_dev;
    if (-1 < iVar6) {
      local_e8 = (void *)(lVar13 + -1);
      bVar16 = _Var2 != local_c8.st_dev;
      bVar17 = _Var15 != local_c8.st_ino;
      if (!bVar16 && !bVar17) {
LAB_00406aa8:
        if (local_e8 == (void *)((long)local_110 + (local_100 - 1))) {
          *(undefined *)((long)local_e8 + -1) = 0x2f;
          local_e8 = (void *)((long)local_e8 + -1);
        }
        memmove(local_110,local_e8,lVar13 - (long)local_e8);
        local_108 = param_1;
        if (param_2 == 0) {
          local_108 = realloc(local_110,lVar13 - (long)local_e8);
        }
        if (local_108 != (void *)0x0) {
          return local_108;
        }
        return local_110;
      }
      piVar8 = __errno_location();
      __dirp = (DIR *)0x0;
      iVar6 = -100;
      do {
        iVar6 = openat(iVar6,"..",0);
        if (iVar6 < 0) {
          iVar7 = *piVar8;
          if (__dirp != (DIR *)0x0) goto LAB_00406b61;
          goto joined_r0x00406b6f;
        }
        iVar7 = __fxstat(1,iVar6,&local_c8);
        if (iVar7 != 0) {
          iVar7 = *piVar8;
          if (__dirp != (DIR *)0x0) {
            closedir(__dirp);
          }
LAB_00406bcd:
          close(iVar6);
          goto joined_r0x00406b6f;
        }
        if (((__dirp != (DIR *)0x0) && (iVar7 = closedir(__dirp), iVar7 != 0)) ||
           (_Var5 = local_c8.st_ino, _Var2 = local_c8.st_dev, __dirp = fdopendir(iVar6),
           bVar1 = bVar16 || bVar17, __dirp == (DIR *)0x0)) {
          iVar7 = *piVar8;
          goto LAB_00406bcd;
        }
LAB_00406920:
        do {
          do {
            *piVar8 = 0;
            pdVar9 = readdir(__dirp);
            if (pdVar9 == (dirent *)0x0) {
              iVar7 = *piVar8;
              if ((iVar7 == 0) && (bVar1)) {
                rewinddir(__dirp);
                pdVar9 = readdir(__dirp);
                if (pdVar9 != (dirent *)0x0) {
                  bVar11 = false;
                  bVar1 = bVar11;
                  if (pdVar9->d_name[0] == '.') goto LAB_00406b30;
                  break;
                }
                iVar7 = *piVar8;
              }
              if (iVar7 == 0) {
                *piVar8 = 2;
                iVar7 = 2;
              }
              goto LAB_00406b61;
            }
            if (pdVar9->d_name[0] == '.') {
LAB_00406b30:
              if ((pdVar9->d_name[1] == '\0') || (*(short *)(pdVar9->d_name + 1) == 0x2e))
              goto LAB_00406920;
            }
            bVar11 = bVar1;
          } while ((bVar1) &&
                  (bVar18 = pdVar9->d_ino == _Var15, bVar11 = bVar18 || _Var2 != local_120,
                  !bVar18 && _Var2 == local_120));
          __filename = pdVar9->d_name;
          iVar7 = __fxstatat(1,iVar6,__filename,&local_c8,0x100);
          bVar1 = bVar11;
        } while ((((iVar7 != 0) || ((local_c8.st_mode & 0xf000) != 0x4000)) ||
                 (local_c8.st_dev != local_120)) || (local_c8.st_ino != _Var15));
        uVar14 = (long)local_e8 - (long)local_110;
        __n = strlen(__filename);
        if (uVar14 <= __n) {
          if (param_2 == 0) {
            uVar12 = local_100;
            if (local_100 <= __n) {
              uVar12 = __n;
            }
            if ((!CARRY8(local_100,uVar12)) &&
               (pvVar10 = realloc(local_110,local_100 + uVar12), pvVar10 != (void *)0x0)) {
              local_e8 = memcpy((void *)((long)pvVar10 + uVar12 + uVar14),
                                (void *)((long)pvVar10 + uVar14),local_100 - uVar14);
              local_110 = pvVar10;
              local_100 = local_100 + uVar12;
              goto LAB_00406a3f;
            }
            *piVar8 = 0xc;
            iVar7 = 0xc;
          }
          else {
            *piVar8 = 0x22;
            iVar7 = 0x22;
          }
LAB_00406b61:
          closedir(__dirp);
          goto joined_r0x00406b6f;
        }
LAB_00406a3f:
        pvVar10 = memcpy((void *)((long)local_e8 - __n),__filename,__n);
        local_e8 = (void *)((long)pvVar10 + -1);
        local_120 = _Var2;
        *(undefined *)((long)pvVar10 + -1) = 0x2f;
        _Var15 = _Var5;
      } while ((_Var3 != _Var2) || (_Var4 != _Var5));
      iVar6 = closedir(__dirp);
      if (iVar6 == 0) {
        lVar13 = (long)local_110 + local_100;
        goto LAB_00406aa8;
      }
      goto LAB_00406b90;
    }
  }
  piVar8 = __errno_location();
LAB_00406b90:
  iVar7 = *piVar8;
joined_r0x00406b6f:
  if (param_1 == (void *)0x0) {
    free(local_110);
  }
  *piVar8 = iVar7;
  return (void *)0x0;
}


void FUN_00406c60(long param_1,int *param_2)

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
      if (iVar3 <= iVar8) goto LAB_00406cdc;
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
      if (iVar9 <= iVar3) goto LAB_00406cdc;
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
LAB_00406cdc:
  param_2[0xc] = iVar2;
  param_2[0xb] = iVar1 + (iVar2 - iVar3);
  return;
}


int FUN_00406d40(int param_1,undefined *param_2,char *param_3,char **param_4,undefined *param_5,
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
      if ((iVar5 == 0) && (sVar7 = strlen(__s1_00), sVar7 == sVar15)) goto LAB_00406f60;
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
            if (local_70 == (char *)0x0) goto LAB_00406ea0;
          }
          else if (local_70 == (char *)0x0) {
            local_70 = (char *)calloc((long)iVar5,1);
            if (local_70 == (char *)0x0) {
              bVar3 = true;
              goto LAB_00406ea0;
            }
            bVar4 = true;
            local_70[(int)local_44] = '\x01';
          }
          local_70[lVar16] = '\x01';
        }
      }
LAB_00406ea0:
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
              __fprintf_chk(__stream,1,&DAT_0040a011,param_9,*param_4);
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
LAB_00406f60:
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


uint FUN_00407360(uint param_1,undefined *param_2,char *param_3,long param_4,undefined param_5,
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
LAB_004073aa:
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
          goto LAB_004074ad;
        }
        pbVar8 = *(byte **)(param_7 + 8);
      }
      param_7[10] = 0;
    }
LAB_004074ad:
    param_7[6] = 1;
    cVar2 = *param_3;
LAB_004074b8:
    if (cVar2 == ':') {
      uVar3 = 0;
    }
    if (pbVar8 == (byte *)0x0) goto LAB_00407428;
LAB_004074cc:
    if (*pbVar8 == 0) goto LAB_00407428;
  }
  else {
    if (param_7[6] == 0) goto LAB_004073aa;
    cVar2 = *param_3;
    pbVar8 = *(byte **)(param_7 + 8);
    if ((cVar2 - 0x2bU & 0xfd) != 0) goto LAB_004074b8;
    pcVar4 = param_3 + 1;
    param_3 = param_3 + 1;
    if (*pcVar4 == ':') {
      uVar3 = 0;
    }
    if (pbVar8 != (byte *)0x0) goto LAB_004074cc;
LAB_00407428:
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
        FUN_00406c60(param_2,param_7);
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
LAB_00407596:
      if (uVar11 != param_1) {
        *param_7 = uVar11;
      }
      return 0xffffffff;
    }
    lVar6 = 3;
    pbVar8 = (byte *)param_2[(int)uVar11];
    pbVar9 = pbVar8;
    pbVar10 = &DAT_0040a029;
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
          FUN_00406c60(param_2,param_7);
          uVar11 = param_7[0xb];
        }
      }
      param_7[0xc] = param_1;
      *param_7 = param_1;
      goto LAB_00407596;
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
        puVar15 = &DAT_0040a029;
        goto LAB_004076f5;
      }
      if ((int)param_6 != 0) {
        if (pbVar8[2] == 0) {
          pcVar4 = strchr(param_3,(int)(char)bVar14);
          param_6 = param_6 & 0xffffffff;
          if (pcVar4 != (char *)0x0) goto LAB_004076a0;
        }
        *(byte **)(param_7 + 8) = pbVar8 + 1;
        uVar11 = FUN_00406d40(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar3,
                              &DAT_0040a02a);
        if (uVar11 != 0xffffffff) {
          return uVar11;
        }
        pbVar8 = (byte *)param_2[(int)*param_7];
      }
    }
LAB_004076a0:
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
  puVar15 = &DAT_0040a048;
LAB_004076f5:
  uVar3 = FUN_00406d40(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar3,puVar15);
  return uVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407930(void)

{
  DAT_0060c480 = DAT_0060c2bc;
  _DAT_0060c484 = DAT_0060c2b8;
  FUN_00407360();
  DAT_0060c2bc = DAT_0060c480;
  DAT_0060c4c0 = DAT_0060c490;
  _DAT_0060c2b4 = DAT_0060c488;
  return;
}


void FUN_00407990(void)

{
  FUN_00407930();
  return;
}


void FUN_004079b0(void)

{
  FUN_00407930();
  return;
}


void FUN_004079d0(void)

{
  FUN_00407360();
  return;
}


void FUN_004079f0(void)

{
  FUN_00407930();
  return;
}


void FUN_00407a10(void)

{
  FUN_00407360();
  return;
}


size_t FUN_00407a30(wchar_t *param_1,byte *param_2,size_t param_3,mbstate_t *param_4)

{
  char cVar1;
  size_t sVar2;
  wchar_t local_1c;
  
  if (param_2 == (byte *)0x0) {
    param_3 = 1;
    param_2 = (byte *)0x40a047;
  }
  else {
    if (param_3 == 0) {
      return 0xfffffffffffffffe;
    }
    if (param_1 != (wchar_t *)0x0) goto LAB_00407a54;
  }
  param_1 = &local_1c;
LAB_00407a54:
  sVar2 = mbrtowc(param_1,(char *)param_2,param_3,param_4);
  if ((0xfffffffffffffffd < sVar2) && (cVar1 = FUN_00407d70(0), cVar1 == '\0')) {
    sVar2 = 1;
    *param_1 = (uint)*param_2;
  }
  return sVar2;
}


char * FUN_00407ab0(char *param_1,ulong param_2)

{
  char *__buf;
  ulong uVar1;
  int *piVar2;
  size_t __size;
  
  __size = param_2 + 1;
  if (0x400 < param_2) {
    __size = 0x401;
  }
  do {
    __buf = (char *)malloc(__size);
    while( true ) {
      if (__buf == (char *)0x0) {
        return (char *)0x0;
      }
      uVar1 = readlink(param_1,__buf,__size);
      if (((long)uVar1 < 0) && (piVar2 = __errno_location(), *piVar2 != 0x22)) {
        free(__buf);
        return (char *)0x0;
      }
      if (uVar1 < __size) {
        __buf[uVar1] = '\0';
        return __buf;
      }
      free(__buf);
      if (0x3fffffffffffffff < __size) break;
      __size = __size * 2;
      __buf = (char *)malloc(__size);
    }
    if (0x7ffffffffffffffe < __size) {
      piVar2 = __errno_location();
      *piVar2 = 0xc;
      return (char *)0x0;
    }
    __size = 0x7fffffffffffffff;
  } while( true );
}


ulong FUN_00407ba0(uint *param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  
  lVar2 = __fpending();
  uVar1 = *param_1;
  uVar3 = FUN_00408380(param_1);
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


void FUN_00407c00(void)

{
  long lVar1;
  
  lVar1 = FUN_00407c80();
  if (lVar1 != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00406720();
}


ulong FUN_00407c20(char *param_1)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  cVar1 = *param_1;
  lVar2 = FUN_00407ce0();
  uVar3 = lVar2 - (long)param_1;
  if (((cVar1 == '/') < uVar3) && (*(char *)(lVar2 + -1) == '/')) {
    do {
      uVar4 = uVar3 - 1;
      if ((cVar1 == '/') == uVar4) {
        return uVar4;
      }
      lVar2 = uVar3 - 2;
      uVar3 = uVar4;
    } while (param_1[lVar2] == '/');
    return uVar4;
  }
  return uVar3;
}


undefined * FUN_00407c80(void *param_1)

{
  size_t __n;
  undefined *__dest;
  
  __n = FUN_00407c20();
  __dest = (undefined *)malloc(__n + 1 + (ulong)(__n == 0));
  if (__dest != (undefined *)0x0) {
    __dest = (undefined *)memcpy(__dest,param_1,__n);
    if (__n == 0) {
      *__dest = 0x2e;
      __n = 1;
    }
    __dest[__n] = 0;
  }
  return __dest;
}


char * FUN_00407ce0(char *param_1)

{
  bool bVar1;
  char *pcVar2;
  char cVar3;
  
  cVar3 = *param_1;
  while (cVar3 == '/') {
    param_1 = param_1 + 1;
    cVar3 = *param_1;
  }
  if (cVar3 != '\0') {
    bVar1 = false;
    pcVar2 = param_1;
    do {
      while (cVar3 == '/') {
        pcVar2 = pcVar2 + 1;
        cVar3 = *pcVar2;
        bVar1 = true;
        if (cVar3 == '\0') {
          return param_1;
        }
      }
      if (bVar1) {
        bVar1 = false;
        param_1 = pcVar2;
      }
      pcVar2 = pcVar2 + 1;
      cVar3 = *pcVar2;
    } while (cVar3 != '\0');
  }
  return param_1;
}


void FUN_00407d40(char *param_1)

{
  long lVar1;
  size_t sVar2;
  
  sVar2 = strlen(param_1);
  if (1 < sVar2) {
    while (lVar1 = sVar2 - 1, sVar2 = sVar2 - 1, param_1[lVar1] == '/') {
      if (sVar2 == 1) {
        return;
      }
    }
  }
  return;
}


bool FUN_00407d70(int param_1)

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
    pbVar5 = &DAT_0040a04c;
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


ulong FUN_00407dd0(char *param_1,ulong param_2)

{
  char cVar1;
  ulong uVar2;
  
  cVar1 = *param_1;
  if (cVar1 != '\0') {
    uVar2 = 0;
    do {
      param_1 = param_1 + 1;
      uVar2 = (uVar2 << 9 | uVar2 >> 0x37) + (long)cVar1;
      cVar1 = *param_1;
    } while (cVar1 != '\0');
    return uVar2 % param_2;
  }
  return 0;
}


/* WARNING: Could not reconcile some variable overlaps */

char * FUN_00407e10(void)

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
  if (DAT_0060c4b8 != (char *)0x0) goto LAB_00407e4a;
  pcVar7 = getenv("CHARSETALIASDIR");
  if ((pcVar7 == (char *)0x0) || (*pcVar7 == '\0')) {
    sVar6 = 0x73;
    sVar5 = 0x65;
    __n = 100;
    pcVar7 = 
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib"
    ;
LAB_00407f35:
    __file = (char *)malloc(sVar6);
    if (__file != (char *)0x0) {
      memcpy(__file,pcVar7,__n);
      __file[__n] = '/';
      goto LAB_00407f56;
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
        goto LAB_00407f35;
      }
      sVar6 = __n + 0xe;
    }
    __file = (char *)malloc(sVar6);
    if (__file != (char *)0x0) {
      memcpy(__file,pcVar7,__n);
      sVar5 = __n;
LAB_00407f56:
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
LAB_00407ff0:
          pbVar8 = (byte *)__stream->_IO_read_ptr;
          if (__stream->_IO_read_end <= pbVar8) goto LAB_0040817c;
          do {
            __stream->_IO_read_ptr = (char *)(pbVar8 + 1);
            uVar4 = (uint)*pbVar8;
            __ptr = pcVar7;
            while( true ) {
              pcVar7 = __ptr;
              if ((uVar4 - 9 < 2) || (uVar4 == 0x20)) goto LAB_00407ff0;
              if (uVar4 == 0x23) goto LAB_004081e1;
              ungetc(uVar4,__stream);
              iVar2 = fscanf(__stream,"%50s %50s",&local_b8,&local_78);
              puVar13 = &local_b8;
              if (iVar2 < 2) goto LAB_0040818f;
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
                FUN_00408380(__stream);
                goto LAB_00407f94;
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
LAB_0040817c:
              uVar4 = __uflow(__stream);
              __ptr = pcVar7;
              if (uVar4 == 0xffffffff) goto LAB_0040818f;
            }
          } while( true );
        }
        close(iVar2);
      }
      goto LAB_00407f8e;
    }
  }
  DAT_0060c4b8 = "";
LAB_00407e4a:
  cVar1 = *DAT_0060c4b8;
  pcVar7 = DAT_0060c4b8;
  do {
    if (cVar1 == '\0') {
LAB_00407ea4:
      if (*__s1 == '\0') {
        __s1 = "ASCII";
      }
      return __s1;
    }
    iVar2 = strcmp(__s1,pcVar7);
    if ((iVar2 == 0) || ((cVar1 == '*' && (pcVar7[1] == '\0')))) {
      sVar6 = strlen(pcVar7);
      __s1 = pcVar7 + sVar6 + 1;
      goto LAB_00407ea4;
    }
    sVar6 = strlen(pcVar7);
    sVar5 = strlen(pcVar7 + sVar6 + 1);
    pcVar7 = pcVar7 + sVar6 + 1 + sVar5 + 1;
    cVar1 = *pcVar7;
  } while( true );
LAB_004081e1:
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
  if (uVar4 == 0xffffffff) goto LAB_0040818f;
  goto LAB_00407ff0;
LAB_0040818f:
  FUN_00408380(__stream);
  if (local_d0 == 0) {
LAB_00407f8e:
    pcVar7 = "";
  }
  else {
    pcVar7[local_d0] = '\0';
  }
LAB_00407f94:
  free(__file);
  DAT_0060c4b8 = pcVar7;
  goto LAB_00407e4a;
}


int FUN_00408380(FILE *param_1)

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
      if (_Var4 == -1) goto LAB_004083e7;
    }
    iVar1 = FUN_00408400(param_1);
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
LAB_004083e7:
  iVar1 = fclose(param_1);
  return iVar1;
}


void FUN_00408400(FILE *param_1)

{
  int iVar1;
  
  if (param_1 != (FILE *)0x0) {
    iVar1 = __freading();
    if ((iVar1 != 0) && ((param_1->_flags & 0x100U) != 0)) {
      FUN_00408440(param_1,0,1);
      fflush(param_1);
      return;
    }
  }
  fflush(param_1);
  return;
}


ulong FUN_00408440(FILE *param_1,__off_t param_2,int param_3)

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


/* WARNING: Removing unreachable block (ram,0x004084d3) */
/* WARNING: Removing unreachable block (ram,0x004084d8) */

void FUN_004084a0(void)

{
  __DT_INIT();
  return;
}


void FUN_00408500(void)

{
  return;
}


void FUN_00408510(undefined param_1)

{
  __cxa_atexit(param_1,0,DAT_0060c228);
  return;
}


undefined FUN_00408528(undefined param_1,undefined param_2,undefined param_3)

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
  FUN_00401f31();
  return;
}

