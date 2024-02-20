
#include "decompile_ghidra.h"
#define __int64 long long
#define __int32 int
#define __int16 short
#define __int8 char

void switchD_00403300caseD_b(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401d45(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401d4a(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401d4f(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401d54(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void switchD_00404ddacaseD_0(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


uint FUN_00401d70(int param_1,undefined *param_2)

{
  char **ppcVar1;
  void *__ptr;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  int *piVar6;
  undefined uVar7;
  undefined uVar8;
  ulong uVar9;
  char *pcVar10;
  size_t __n;
  char cVar11;
  uint uVar12;
  char *pcVar13;
  char cVar14;
  byte bVar15;
  
  bVar15 = 0;
  cVar14 = '\x02';
  uVar12 = 0;
  FUN_00403110(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils",
                 "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale"
                );
  textdomain("coreutils");
  FUN_00409580(FUN_00402de0);
  while (iVar2 = FUN_004089a0(param_1,param_2,&DAT_0040970a,&PTR_s_bourne_shell_00409d80,0),
        iVar3 = DAT_0060f2b8._4_4_, iVar2 != -1) {
    if (iVar2 == 0x62) {
LAB_00401e58:
      cVar14 = '\0';
    }
    else {
      if (iVar2 < 99) {
        if (iVar2 == -0x83) {
          FUN_004051b0(stdout,"dircolors","GNU coreutils",PTR_DAT_0060f250,"H. Peter Anvin",0);
                    /* WARNING: Subroutine does not return */
          exit(0);
        }
        if (iVar2 == -0x82) {
          FUN_00402a50(0);
          goto LAB_00401e58;
        }
        goto LAB_00402125;
      }
      if (iVar2 == 99) {
        cVar14 = '\x01';
      }
      else {
        if (iVar2 != 0x70) goto LAB_00402125;
        uVar12 = 1;
      }
    }
  }
  ppcVar1 = (char **)(param_2 + DAT_0060f2b8._4_4_);
  cVar11 = (char)uVar12;
  if ((cVar14 != '\x02') && (cVar11 != '\0')) goto LAB_0040212f;
  if ((int)(uVar12 ^ 1) < param_1 - DAT_0060f2b8._4_4_) {
    if (cVar11 != '\0') {
      uVar7 = FUN_00404d30(*ppcVar1);
      uVar8 = dcgettext(0,"extra operand %s",5);
      error(0,0,uVar8,uVar7);
      uVar7 = dcgettext(0,"file operands cannot be combined with --print-database (-p)",5);
      __fprintf_chk(stderr,1,"%s\n",uVar7);
      goto LAB_00402125;
    }
LAB_00402172:
    uVar7 = FUN_00404d30(ppcVar1[1]);
    uVar8 = dcgettext(0,"extra operand %s",5);
    error(0,0,uVar8,uVar7);
LAB_00402125:
    do {
      FUN_00402a50(1);
LAB_0040212f:
      uVar7 = dcgettext(0,
                        "the options to output dircolors\' internal database and\nto select a shell syntax are mutually exclusive"
                        ,5);
      error(0,0,uVar7);
    } while( true );
  }
  if (cVar11 != '\0') {
    pcVar10 = "# Configuration file for dircolors, a utility to help you set the";
    do {
      puts(pcVar10);
      uVar9 = 0xffffffffffffffff;
      pcVar13 = pcVar10;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar14 = *pcVar13;
        pcVar13 = pcVar13 + (ulong)bVar15 * -2 + 1;
      } while (cVar14 != '\0');
      pcVar10 = pcVar10 + ~uVar9;
    } while (pcVar10 + -0x40a100 < (char *)0x104d);
    goto LAB_00401ec8;
  }
  if (cVar14 == '\x02') {
    pcVar10 = getenv("SHELL");
    if ((pcVar10 == (char *)0x0) || (*pcVar10 == '\0')) {
      uVar7 = dcgettext(0,"no SHELL environment variable, and no shell type option given",5);
      error(1,0,uVar7);
      goto LAB_00402172;
    }
    pcVar10 = (char *)FUN_00402e80(pcVar10);
    iVar2 = strcmp(pcVar10,"csh");
    if (iVar2 == 0) {
      cVar14 = '\x01';
    }
    else {
      iVar2 = strcmp(pcVar10,"tcsh");
      cVar14 = iVar2 == 0;
    }
  }
  _obstack_begin(&DAT_0060f320,0,0,malloc,free);
  if (param_1 == iVar3) {
    uVar4 = FUN_00402480(0,0);
LAB_00401f5e:
    uVar12 = uVar4;
    __ptr = DAT_0060f330;
    if ((char)uVar12 != '\0') {
      __n = (long)DAT_0060f338 - (long)DAT_0060f330;
      if (DAT_0060f338 == DAT_0060f330) {
        DAT_0060f370 = DAT_0060f370 | 2;
      }
      pcVar10 = "\';\nexport LS_COLORS\n";
      DAT_0060f330 = (void *)((long)DAT_0060f338 + DAT_0060f350 & ~DAT_0060f350);
      pcVar13 = "LS_COLORS=\'";
      if ((ulong)((long)DAT_0060f340 - DAT_0060f328) < (ulong)((long)DAT_0060f330 - DAT_0060f328)) {
        DAT_0060f330 = DAT_0060f340;
      }
      if (cVar14 != '\0') {
        pcVar10 = "\'\n";
        pcVar13 = "setenv LS_COLORS \'";
      }
      DAT_0060f338 = DAT_0060f330;
      fputs_unlocked(pcVar13,stdout);
      fwrite_unlocked(__ptr,1,__n,stdout);
      fputs_unlocked(pcVar10,stdout);
    }
  }
  else {
    pcVar10 = *ppcVar1;
    iVar3 = strcmp(pcVar10,"-");
    if ((iVar3 == 0) || (lVar5 = FUN_00402f60(pcVar10,"r",stdin), lVar5 != 0)) {
      uVar4 = FUN_00402480(stdin,pcVar10);
      iVar3 = FUN_004055a0(stdin);
      if (iVar3 == 0) goto LAB_00401f5e;
    }
    uVar7 = FUN_00404bb0(0,3,pcVar10);
    piVar6 = __errno_location();
    error(0,*piVar6,"%s",uVar7);
  }
LAB_00401ec8:
  return (uVar12 ^ 1) & 0xff;
}


void FUN_004021b0(undefined param_1,undefined param_2,undefined param_3)

{
  undefined unaff_retaddr;
  undefined auStack_8 [8];
  
  (*(code *)PTR___libc_start_main_0060eff0)
            (FUN_00401d70,unaff_retaddr,&stack0x00000008,FUN_00409510,FUN_00409570,param_3,auStack_8
            );
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* WARNING: Removing unreachable block (ram,0x004021e8) */
/* WARNING: Removing unreachable block (ram,0x004021f2) */

void FUN_004021db(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00402229) */

void FUN_004021fa(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00402266) */

void FUN_00402231(void)

{
  if (DAT_0060f308 != '\0') {
    return;
  }
  FUN_004021db();
  DAT_0060f308 = 1;
  return;
}


/* WARNING: Removing unreachable block (ram,0x00402229) */

void thunk_FUN_004021fa(void)

{
  return;
}


void FUN_00402290(char *param_1)

{
  bool bVar1;
  char *pcVar2;
  char cVar3;
  
  cVar3 = *param_1;
  if (cVar3 == '\0') {
    return;
  }
  bVar1 = true;
  do {
    if (cVar3 == '=') {
LAB_00402365:
      if (!bVar1) goto LAB_004023b8;
      if (DAT_0060f340 == DAT_0060f338) {
        _obstack_newchunk(&DAT_0060f320,1);
      }
      pcVar2 = DAT_0060f338 + 1;
      *DAT_0060f338 = '\\';
      DAT_0060f338 = pcVar2;
      if (DAT_0060f340 == DAT_0060f338) goto LAB_00402398;
    }
    else {
      if (cVar3 < '>') {
        if (cVar3 == '\'') {
          if (DAT_0060f340 == DAT_0060f338) {
            _obstack_newchunk(&DAT_0060f320,1);
          }
          pcVar2 = DAT_0060f338 + 1;
          *DAT_0060f338 = '\'';
          DAT_0060f338 = pcVar2;
          if (DAT_0060f340 == DAT_0060f338) {
            _obstack_newchunk(&DAT_0060f320,1);
          }
          pcVar2 = DAT_0060f338 + 1;
          *DAT_0060f338 = '\\';
          DAT_0060f338 = pcVar2;
          if (DAT_0060f340 == DAT_0060f338) {
            _obstack_newchunk(&DAT_0060f320,1);
          }
          bVar1 = true;
          pcVar2 = DAT_0060f338 + 1;
          *DAT_0060f338 = '\'';
          DAT_0060f338 = pcVar2;
        }
        else {
          if (cVar3 == ':') goto LAB_00402365;
LAB_004023b8:
          bVar1 = true;
        }
      }
      else {
        if ((cVar3 != '\\') && (cVar3 != '^')) goto LAB_004023b8;
        bVar1 = (bool)(bVar1 ^ 1);
      }
      if (DAT_0060f340 == DAT_0060f338) {
LAB_00402398:
        _obstack_newchunk(&DAT_0060f320,1);
      }
    }
    pcVar2 = DAT_0060f338 + 1;
    *DAT_0060f338 = *param_1;
    DAT_0060f338 = pcVar2;
    cVar3 = param_1[1];
    param_1 = param_1 + 1;
    if (cVar3 == '\0') {
      return;
    }
  } while( true );
}


undefined FUN_00402480(FILE *param_1,long param_2)

{
  byte bVar1;
  ushort *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  char cVar5;
  int iVar6;
  char *pcVar7;
  __ssize_t _Var8;
  ushort **ppuVar9;
  char *__ptr;
  byte *pbVar10;
  void *__ptr_00;
  size_t sVar11;
  undefined uVar12;
  undefined uVar13;
  long lVar14;
  byte *pbVar15;
  long lVar16;
  char *pcVar17;
  byte *pbVar18;
  int iVar19;
  bool bVar20;
  char *local_58;
  undefined local_4d;
  byte *local_48;
  size_t local_40 [2];
  
  local_48 = (byte *)0x0;
  local_40[0] = 0;
  pcVar7 = getenv("TERM");
  if (pcVar7 == (char *)0x0) {
    local_58 = "none";
  }
  else {
    local_58 = "none";
    if (*pcVar7 != '\0') {
      local_58 = pcVar7;
    }
  }
  local_4d = 1;
  iVar19 = 3;
  pcVar7 = "# Configuration file for dircolors, a utility to help you set the";
  lVar16 = 0;
LAB_004024e8:
  lVar16 = lVar16 + 1;
  pbVar15 = (byte *)pcVar7;
  if (param_1 == (FILE *)0x0) goto LAB_0040269d;
LAB_004024f5:
  _Var8 = __getdelim((char **)&local_48,local_40,10,param_1);
  pbVar15 = local_48;
  if (_Var8 < 1) {
    free(local_48);
    return local_4d;
  }
  do {
    ppuVar9 = __ctype_b_loc();
    while (bVar1 = *pbVar15, (*(byte *)((long)*ppuVar9 + (ulong)bVar1 * 2 + 1) & 0x20) != 0) {
      pbVar15 = pbVar15 + 1;
    }
    if ((bVar1 == 0) || (pbVar18 = pbVar15, bVar1 == 0x23)) goto LAB_004024e8;
    do {
      pbVar18 = pbVar18 + 1;
    } while ((*pbVar18 != 0 & ((byte)((*ppuVar9)[*pbVar18] >> 0xd) ^ 1)) != 0);
    __ptr = (char *)FUN_00405580(pbVar15,(long)pbVar18 - (long)pbVar15);
    if (*pbVar18 == 0) {
LAB_004026d0:
      if (__ptr != (char *)0x0) {
LAB_004026d9:
        uVar12 = FUN_00404bb0(0,3,param_2);
        uVar13 = dcgettext(0,"%s:%lu: invalid line;  missing second token",5);
        error(0,0,uVar13,uVar12,lVar16);
        free(__ptr);
        local_4d = 0;
      }
      goto LAB_004024e8;
    }
    puVar2 = *ppuVar9;
    do {
      pbVar18 = pbVar18 + 1;
      bVar1 = *pbVar18;
    } while ((*(byte *)((long)puVar2 + (ulong)bVar1 * 2 + 1) & 0x20) != 0);
    if ((bVar1 == 0) || (pbVar15 = pbVar18, bVar1 == 0x23)) goto LAB_004026d0;
    do {
      pbVar10 = pbVar15;
      pbVar15 = pbVar10 + 1;
    } while (pbVar10[1] != 0 && pbVar10[1] != 0x23);
    bVar1 = *(byte *)((long)puVar2 + (ulong)*pbVar10 * 2 + 1);
    while ((bVar1 & 0x20) != 0) {
      bVar1 = *(byte *)((long)puVar2 + (ulong)pbVar10[-1] * 2 + 1);
      pbVar15 = pbVar10;
      pbVar10 = pbVar10 + -1;
    }
    __ptr_00 = (void *)FUN_00405580(pbVar18,(long)pbVar15 - (long)pbVar18);
    if (__ptr == (char *)0x0) goto LAB_004024e8;
    if (__ptr_00 == (void *)0x0) goto LAB_004026d9;
    iVar6 = FUN_00402d60(__ptr,&DAT_004095f0);
    if (iVar6 == 0) {
      iVar6 = FUN_00407910(__ptr_00,local_58,0);
      if ((iVar6 == 0) || (bVar20 = iVar19 == 2, iVar19 = 0, bVar20)) {
        iVar19 = 2;
      }
    }
    else if (iVar19 == 2) {
      cVar5 = *__ptr;
      iVar19 = 1;
      if (cVar5 != '.') goto LAB_00402638;
LAB_00402771:
      if (DAT_0060f340 == DAT_0060f338) {
        _obstack_newchunk(&DAT_0060f320,1);
      }
      puVar3 = DAT_0060f338 + 1;
      *DAT_0060f338 = 0x2a;
      DAT_0060f338 = puVar3;
      FUN_00402290(__ptr);
      if (DAT_0060f340 == DAT_0060f338) {
        _obstack_newchunk(&DAT_0060f320,1);
      }
      puVar3 = DAT_0060f338 + 1;
      *DAT_0060f338 = 0x3d;
      DAT_0060f338 = puVar3;
      FUN_00402290(__ptr_00);
      if (DAT_0060f340 == DAT_0060f338) {
LAB_00402885:
        _obstack_newchunk(&DAT_0060f320,1);
      }
LAB_004027d9:
      puVar3 = DAT_0060f338 + 1;
      *DAT_0060f338 = 0x3a;
      DAT_0060f338 = puVar3;
    }
    else if (iVar19 != 0) {
      cVar5 = *__ptr;
      if (cVar5 == '.') goto LAB_00402771;
LAB_00402638:
      if (cVar5 == '*') {
        FUN_00402290(__ptr);
        if (DAT_0060f340 == DAT_0060f338) {
LAB_0040298d:
          _obstack_newchunk(&DAT_0060f320,1);
        }
LAB_0040284c:
        puVar3 = DAT_0060f338 + 1;
        *DAT_0060f338 = 0x3d;
        DAT_0060f338 = puVar3;
        FUN_00402290(__ptr_00);
        if (DAT_0060f340 == DAT_0060f338) goto LAB_00402885;
        goto LAB_004027d9;
      }
      iVar6 = FUN_00402d60(__ptr,"OPTIONS");
      if (((iVar6 != 0) && (iVar6 = FUN_00402d60(__ptr,"COLOR"), iVar6 != 0)) &&
         (iVar6 = FUN_00402d60(__ptr,"EIGHTBIT"), iVar6 != 0)) {
        lVar14 = 0;
        pcVar17 = "NORMAL";
        do {
          iVar6 = FUN_00402d60(__ptr,pcVar17);
          if (iVar6 == 0) {
            if (DAT_0060f340 == DAT_0060f338) {
              _obstack_newchunk(&DAT_0060f320,1);
            }
            puVar3 = (&PTR_DAT_00409e80)[(int)lVar14];
            puVar4 = DAT_0060f338 + 1;
            *DAT_0060f338 = *puVar3;
            DAT_0060f338 = puVar4;
            if (DAT_0060f340 == DAT_0060f338) {
              _obstack_newchunk(&DAT_0060f320,1);
            }
            puVar4 = DAT_0060f338 + 1;
            *DAT_0060f338 = puVar3[1];
            DAT_0060f338 = puVar4;
            if (DAT_0060f340 != DAT_0060f338) goto LAB_0040284c;
            goto LAB_0040298d;
          }
          lVar14 = lVar14 + 1;
          pcVar17 = (&PTR_s_NORMAL_00409fc0)[lVar14];
        } while (pcVar17 != (char *)0x0);
        if (iVar19 != 3) {
          if (param_2 == 0) {
            uVar12 = dcgettext(0,"<internal>",5);
          }
          else {
            uVar12 = FUN_00404bb0(0,3);
          }
          uVar13 = dcgettext(0,"%s:%lu: unrecognized keyword %s",5);
          error(0,0,uVar13,uVar12,lVar16,__ptr);
          local_4d = 0;
        }
      }
    }
    lVar16 = lVar16 + 1;
    free(__ptr);
    free(__ptr_00);
    pbVar15 = (byte *)pcVar7;
    if (param_1 != (FILE *)0x0) goto LAB_004024f5;
LAB_0040269d:
    if (pbVar15 == &DAT_0040b14d) {
      return local_4d;
    }
    sVar11 = strlen((char *)pbVar15);
    pcVar7 = (char *)(pbVar15 + sVar11 + 1);
  } while( true );
}


void FUN_00402a50(int param_1)

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
  
  uVar7 = DAT_0060f388;
  bVar14 = 0;
  if (param_1 != 0) {
    uVar3 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(stderr,1,uVar3,uVar7);
    goto LAB_00402a8f;
  }
  uVar3 = dcgettext(0,"Usage: %s [OPTION]... [FILE]\n",5);
  __printf_chk(1,uVar3,uVar7);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "Output commands to set the LS_COLORS environment variable.\n\nDetermine format of output:\n  -b, --sh, --bourne-shell    output Bourne shell code to set LS_COLORS\n  -c, --csh, --c-shell        output C shell code to set LS_COLORS\n  -p, --print-database        output defaults\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"      --help     display this help and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"      --version  output version information and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nIf FILE is specified, read it to determine which colors to use for which\nfile types and extensions.  Otherwise, a precompiled database is used.\nFor details on the format of these files, run \'dircolors --print-database\'.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  local_88 = &DAT_0040963f;
  local_80 = "test invocation";
  local_78[0] = (byte *)0x4096b9;
  local_78[1] = (byte *)0x409651;
  local_78[2] = (byte *)0x409667;
  local_78[3] = (byte *)0x409671;
  local_78[4] = (byte *)0x409680;
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
    lVar9 = 10;
    pbVar10 = (byte *)"dircolors";
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
        pcVar4 = "dircolors";
        goto LAB_00402d33;
      }
    }
    pcVar4 = "dircolors";
    uVar7 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    pcVar8 = " invocation";
    __printf_chk(1,uVar7,"https://www.gnu.org/software/coreutils/","dircolors");
  }
  else {
    uVar7 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar7,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar8 = setlocale(5,(char *)0x0);
    if (pcVar8 != (char *)0x0) {
      iVar2 = strncmp(pcVar8,"en_",3);
      if (iVar2 != 0) {
LAB_00402d33:
        uVar7 = dcgettext(0,"Report %s translation bugs to <https://translationproject.org/team/>\n"
                          ,5);
        __printf_chk(1,uVar7,"dircolors");
      }
    }
    pcVar8 = " invocation";
    uVar7 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    __printf_chk(1,uVar7,"https://www.gnu.org/software/coreutils/","dircolors");
    if (pcVar4 != "dircolors") {
      pcVar8 = "";
    }
  }
  uVar7 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(1,uVar7,pcVar4,pcVar8);
LAB_00402a8f:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}


int FUN_00402d60(long param_1,long param_2)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  
  iVar2 = 0;
  if (param_1 != param_2) {
    lVar4 = 0;
    do {
      bVar1 = *(byte *)(param_1 + lVar4);
      uVar5 = (uint)bVar1;
      if (bVar1 - 0x41 < 0x1a) {
        uVar5 = bVar1 + 0x20;
        bVar1 = bVar1 + 0x20;
      }
      bVar3 = *(byte *)(param_2 + lVar4);
      uVar6 = (uint)bVar3;
      if (bVar3 - 0x41 < 0x1a) {
        uVar6 = bVar3 + 0x20;
        bVar3 = bVar3 + 0x20;
      }
    } while ((bVar1 != 0) && (lVar4 = lVar4 + 1, bVar1 == bVar3));
    iVar2 = (uVar5 & 0xff) - (uVar6 & 0xff);
  }
  return iVar2;
}


void FUN_00402dc0(undefined param_1)

{
  DAT_0060f380 = param_1;
  return;
}


void FUN_00402dd0(undefined param_1)

{
  DAT_0060f378 = param_1;
  return;
}


void FUN_00402de0(void)

{
  int iVar1;
  int *piVar2;
  undefined uVar3;
  undefined uVar4;
  
  iVar1 = FUN_00408ee0(stdout);
  if (iVar1 != 0) {
    piVar2 = __errno_location();
    if ((DAT_0060f378 == '\0') || (*piVar2 != 0x20)) {
      uVar3 = dcgettext(0,"write error",5);
      if (DAT_0060f380 == 0) {
        error(0,*piVar2,"%s",uVar3);
      }
      else {
        uVar4 = FUN_00404b80();
        error(0,*piVar2,"%s: %s",uVar4,uVar3);
      }
      goto LAB_00402e5e;
    }
  }
  iVar1 = FUN_00408ee0(stderr);
  if (iVar1 == 0) {
    return;
  }
LAB_00402e5e:
                    /* WARNING: Subroutine does not return */
  _exit(DAT_0060f258);
}


char * FUN_00402e80(char *param_1)

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


void FUN_00402ee0(char *param_1)

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


undefined FUN_00402f10(int param_1)

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


long FUN_00402f60(undefined param_1,undefined param_2,FILE *param_3)

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
LAB_00402fd0:
    iVar3 = dup2(0,0);
    if (iVar3 != 0) {
      cVar2 = FUN_00402f10();
      if (cVar2 != '\0') {
        cVar1 = cVar2;
        if ((bool)cVar7 != false) goto LAB_00403058;
        goto LAB_00402ff4;
      }
      cVar2 = '\x01';
      lVar5 = 0;
      goto LAB_0040301f;
    }
    cVar2 = '\0';
    cVar1 = '\0';
    if ((bool)cVar7 == false) {
LAB_00402ff4:
      if (((bool)cVar6 == false) || (cVar6 = FUN_00402f10(2), cVar6 != '\0')) goto LAB_0040300c;
      iVar3 = *piVar4;
      lVar5 = 0;
      goto LAB_004030c6;
    }
LAB_00403058:
    cVar2 = cVar1;
    cVar7 = FUN_00402f10(1);
    if (cVar7 != '\0') goto LAB_00402ff4;
    iVar3 = *piVar4;
    lVar5 = 0;
    if ((bool)cVar6 != false) {
      close(2);
    }
  }
  else {
    if (iVar3 == 2) {
      cVar6 = false;
LAB_00402fba:
      iVar3 = dup2(1,1);
      cVar7 = iVar3 != 1;
      goto LAB_00402fd0;
    }
    if (iVar3 != 0) {
      iVar3 = dup2(2,2);
      cVar6 = iVar3 != 2;
      goto LAB_00402fba;
    }
    cVar6 = '\0';
    cVar7 = '\0';
    cVar2 = '\0';
LAB_0040300c:
    lVar5 = FUN_00407b50(param_1,param_2,param_3);
LAB_0040301f:
    iVar3 = *piVar4;
    if (cVar6 != '\0') {
LAB_004030c6:
      close(2);
    }
    if (cVar7 == '\0') goto joined_r0x0040308d;
  }
  close(1);
joined_r0x0040308d:
  if (cVar2 != '\0') {
    close(0);
  }
  if (lVar5 == 0) {
    *piVar4 = iVar3;
  }
  return lVar5;
}


void FUN_00403110(byte *param_1)

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
        pbVar6 = &DAT_0040b1b0;
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
  DAT_0060f388 = param_1;
  program_invocation_name = param_1;
  return;
}


char * FUN_004031b0(char *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  byte *pbVar3;
  
  pcVar2 = (char *)dcgettext(0,param_1,5);
  if (param_1 == pcVar2) {
    pbVar3 = (byte *)FUN_00408fa0();
    if ((*pbVar3 & 0xdf) == 0x55) {
      if (((((pbVar3[1] & 0xdf) != 0x54) || ((pbVar3[2] & 0xdf) != 0x46)) || (pbVar3[3] != 0x2d)) ||
         ((pbVar3[4] != 0x38 || (pbVar3[5] != 0)))) {
LAB_00403288:
        pcVar2 = "\"";
        if (param_2 != 9) {
          pcVar2 = "\'";
        }
        return pcVar2;
      }
      cVar1 = *pcVar2;
      pcVar2 = &DAT_0040b1c1;
      if (cVar1 != '`') {
        pcVar2 = &DAT_0040b1b6;
      }
    }
    else {
      if (((((*pbVar3 & 0xdf) != 0x47) || ((pbVar3[1] & 0xdf) != 0x42)) || (pbVar3[2] != 0x31)) ||
         (((pbVar3[3] != 0x38 || (pbVar3[4] != 0x30)) ||
          ((pbVar3[5] != 0x33 || ((pbVar3[6] != 0x30 || (pbVar3[7] != 0)))))))) goto LAB_00403288;
      cVar1 = *pcVar2;
      pcVar2 = &DAT_0040b1bd;
      if (cVar1 != '`') {
        pcVar2 = &DAT_0040b1ba;
      }
    }
  }
  return pcVar2;
}


ulong FUN_004032b0(undefined *param_1,ulong param_2,char *param_3,ulong param_4,int param_5,
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
LAB_00403f01:
    if (param_2 != 0) {
      bVar3 = false;
      local_5b = false;
      bVar2 = true;
      local_70 = 0;
      goto LAB_00403b36;
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
      goto LAB_00403f01;
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
      param_8 = (char *)FUN_004031b0(&DAT_0040b1c5,param_5);
      param_9 = (char *)FUN_004031b0("\'");
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
LAB_00403348:
  uVar22 = 0;
  bVar5 = local_5b;
LAB_00403358:
  bVar23 = param_4 != uVar22;
  if (param_4 == 0xffffffffffffffff) {
    bVar23 = param_3[uVar22] != '\0';
  }
  bVar26 = bVar6;
  if (!bVar23) goto LAB_00403ad8;
  bVar20 = (bool)(param_5 != 2 & bVar6);
  __s1 = (byte *)(param_3 + uVar22);
  uVar16 = uVar15;
  bVar4 = bVar3;
  if (bVar20) {
    if (local_a0 == 0) {
LAB_00403a50:
      uVar19 = (ulong)*__s1;
      switch(uVar19) {
      case 0:
        goto switchD_00403a62_caseD_0;
      default:
        bVar20 = false;
        goto switchD_004038ce_caseD_1;
      case 7:
        bVar17 = 0x61;
        goto LAB_00403765;
      case 8:
        bVar17 = 0x62;
        break;
      case 9:
switchD_00403a62_caseD_9:
        bVar17 = 0x74;
        break;
      case 10:
switchD_00403a62_caseD_a:
        bVar17 = 0x6e;
        break;
      case 0xb:
switchD_00403a62_caseD_b:
        bVar17 = 0x76;
        goto LAB_00403765;
      case 0xc:
switchD_00403a62_caseD_c:
        bVar17 = 0x66;
LAB_00403765:
        if (local_5c) {
          bVar25 = false;
          goto LAB_004036b8;
        }
LAB_00403770:
        bVar23 = false;
        goto LAB_0040352b;
      case 0xd:
        bVar20 = false;
switchD_00403448_caseD_d:
        bVar25 = param_5 == 2;
        uVar19 = 0xd;
        bVar13 = 0x72;
        goto LAB_00403680;
      case 0x20:
        bVar25 = false;
LAB_00403aaa:
        uVar19 = 0x20;
        goto LAB_00403a72;
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
switchD_00403448_caseD_21:
        bVar25 = false;
        goto LAB_0040368b;
      case 0x23:
      case 0x7e:
        bVar26 = false;
LAB_00403a8a:
        if (uVar22 == 0) {
          bVar25 = false;
          bVar23 = bVar20;
          bVar20 = bVar26;
          goto LAB_00403498;
        }
        bVar23 = false;
        goto LAB_004034af;
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
LAB_00403a72:
        bVar24 = false;
        bVar23 = bVar20;
        bVar20 = bVar25;
        goto LAB_004034b1;
      case 0x27:
        bVar20 = false;
        goto switchD_004038ce_caseD_27;
      case 0x3f:
        bVar20 = false;
        goto switchD_004038ce_caseD_3f;
      case 0x5c:
        bVar20 = false;
        goto switchD_00403448_caseD_5c;
      case 0x7b:
      case 0x7d:
        bVar20 = false;
        goto switchD_004038ce_caseD_7b;
      }
      bVar25 = false;
      bVar23 = false;
      goto joined_r0x004036a7;
    }
    if ((param_4 == 0xffffffffffffffff) && (1 < local_a0)) {
      param_4 = strlen(param_3);
    }
    if ((param_4 < uVar22 + local_a0) || (iVar7 = memcmp(__s1,local_78,local_a0), iVar7 != 0))
    goto LAB_00403a50;
    if (!local_5c) {
      uVar19 = (ulong)*__s1;
      bVar25 = bVar20;
      switch(uVar19) {
      case 0:
        goto switchD_00403448_caseD_0;
      default:
        goto switchD_004038ce_caseD_1;
      case 7:
        bVar17 = 0x61;
        goto LAB_00403770;
      case 8:
        bVar25 = false;
        bVar23 = false;
        bVar17 = 0x62;
        break;
      case 9:
        goto switchD_00403a62_caseD_9;
      case 10:
        goto switchD_00403a62_caseD_a;
      case 0xb:
        goto switchD_00403a62_caseD_b;
      case 0xc:
        goto switchD_00403a62_caseD_c;
      case 0xd:
        goto switchD_00403448_caseD_d;
      case 0x20:
        goto LAB_00403aaa;
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
        goto switchD_00403448_caseD_21;
      case 0x23:
      case 0x7e:
        bVar26 = bVar20;
        goto LAB_00403a8a;
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
        goto LAB_00403a72;
      case 0x27:
        goto switchD_004038ce_caseD_27;
      case 0x3f:
        goto switchD_004038ce_caseD_3f;
      case 0x5c:
        goto switchD_00403448_caseD_5c;
      case 0x7b:
      case 0x7d:
        goto switchD_004038ce_caseD_7b;
      }
      goto LAB_004034f2;
    }
    goto LAB_004036ca;
  }
  uVar19 = (ulong)*__s1;
  switch(uVar19) {
  case 0:
    if (bVar6) {
switchD_00403a62_caseD_0:
      if (!local_5c) {
        bVar20 = false;
switchD_00403448_caseD_0:
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
            goto LAB_004035a8;
          }
LAB_004037ea:
          param_1[uVar16] = 0x5c;
          uVar15 = uVar16;
        }
        else if (uVar15 < uVar9) goto LAB_004037ea;
        uVar16 = uVar15 + 1;
        bVar24 = bVar23;
        if (param_5 == 2) {
          bVar17 = 0x30;
          bVar23 = false;
          bVar4 = bVar3;
          goto LAB_004035a8;
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
LAB_00403829:
        bVar17 = (byte)uVar19;
        bVar23 = false;
        uVar15 = uVar16;
        bVar4 = bVar3;
        if ((bool)(bVar6 ^ 1U | bVar26)) goto LAB_004035a8;
        goto LAB_004034b1;
      }
      bVar26 = param_5 == 2;
      goto LAB_004036bc;
    }
    if ((param_6 & 1) == 0) {
      bVar25 = param_5 == 2;
      uVar19 = 0;
      bVar23 = false;
      bVar20 = false;
      goto LAB_00403498;
    }
    uVar22 = uVar22 + 1;
    goto LAB_00403358;
  default:
switchD_004038ce_caseD_1:
    bVar25 = bVar6;
    if (sVar8 != 1) {
      local_40[0] = (mbstate_t)0x0;
      if (param_4 == 0xffffffffffffffff) {
        param_4 = strlen(param_3);
      }
      uVar21 = 0;
      do {
        uVar1 = uVar22 + uVar21;
        lVar11 = FUN_00408a20(&local_44,param_3 + uVar1,param_4 - uVar1,local_40);
        if (lVar11 == 0) break;
        if (lVar11 == -1) {
          bVar23 = false;
          goto LAB_004041da;
        }
        if (lVar11 == -2) {
          if ((param_4 <= uVar1) || (param_3[uVar1] == '\0')) goto LAB_00404317;
          goto LAB_00404307;
        }
        if (((param_5 == 2) && (local_5c)) && (lVar11 != 1)) {
          pcVar12 = param_3 + uVar1 + 1;
          do {
            if (((byte)(*pcVar12 + 0xa5U) < 0x22) &&
               ((1L << (*pcVar12 + 0xa5U & 0x3f) & 0x20000002bU) != 0)) {
              param_5 = 2;
              goto LAB_004036bc;
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
      goto LAB_004041da;
    }
    ppuVar10 = __ctype_b_loc();
    uVar21 = 1;
    bVar25 = ((*ppuVar10)[uVar19] & 0x4000) == 0;
    bVar23 = !bVar25;
    bVar25 = (bool)(bVar25 & bVar6);
    goto LAB_004038a4;
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
    goto LAB_004038e2;
  case 10:
    uVar19 = 10;
    bVar13 = 0x6e;
    goto LAB_004038e2;
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
LAB_004038e2:
    bVar25 = param_5 == 2;
    bVar20 = (bool)(local_5c & bVar25);
    if (bVar20) {
LAB_004038fa:
      param_5 = 2;
      goto LAB_004036bc;
    }
    break;
  case 0x20:
    uVar19 = 0x20;
    goto LAB_00403486;
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
LAB_00403486:
    bVar25 = param_5 == 2;
    if ((local_5c) && (bVar25)) goto LAB_004038fa;
    goto LAB_00403498;
  case 0x23:
  case 0x7e:
LAB_0040347d:
    bVar25 = param_5 == 2;
    if (uVar22 == 0) goto LAB_00403486;
    goto LAB_0040368b;
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
    goto switchD_004038ce_caseD_25;
  case 0x27:
switchD_004038ce_caseD_27:
    bVar5 = bVar23;
    if (param_5 != 2) {
      bVar25 = false;
      uVar19 = 0x27;
      goto LAB_00403498;
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
      goto LAB_004035a8;
    }
    goto LAB_004036bc;
  case 0x3f:
switchD_004038ce_caseD_3f:
    if (param_5 == 2) {
      if (!local_5c) {
        bVar17 = 0x3f;
        bVar24 = false;
        bVar23 = false;
        goto LAB_004035a8;
      }
      goto LAB_004036bc;
    }
    if (param_5 != 5) {
      bVar25 = param_5 == 2;
      uVar19 = 0x3f;
      bVar23 = false;
      goto LAB_00403498;
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
        goto LAB_00403829;
      }
      goto LAB_004036ca;
    }
    bVar25 = false;
    uVar19 = 0x3f;
    bVar23 = false;
    goto LAB_00403498;
  case 0x5c:
    if (param_5 != 2) {
switchD_00403448_caseD_5c:
      uVar19 = 0x5c;
      bVar17 = 0x5c;
      bVar13 = 0x5c;
      bVar25 = (bool)(bVar6 & local_5c & local_a0 != 0);
      if (!bVar25) break;
      uVar22 = uVar22 + 1;
      bVar23 = false;
      goto LAB_004035c4;
    }
    if (local_5c) goto LAB_004036bc;
    uVar22 = uVar22 + 1;
    bVar23 = false;
    bVar17 = 0x5c;
    goto LAB_004035c4;
  case 0x7b:
  case 0x7d:
switchD_004038ce_caseD_7b:
    bVar24 = param_4 != 1;
    if (param_4 == 0xffffffffffffffff) {
      bVar24 = param_3[1] != '\0';
    }
    bVar25 = param_5 == 2;
    if (!bVar24) goto LAB_0040347d;
    goto LAB_0040368b;
  }
LAB_00403680:
  if (!bVar6) {
LAB_0040368b:
    bVar23 = false;
    goto LAB_00403498;
  }
  bVar23 = false;
  bVar17 = bVar13;
  goto joined_r0x004036a7;
LAB_00403ad8:
  if ((uVar15 == 0) && ((bool)(local_5c & param_5 == 2))) {
    param_5 = 2;
LAB_004036bc:
    if (bVar26) {
      param_5 = 4;
    }
LAB_004036ca:
    uVar9 = FUN_004032b0(param_1,uVar9,param_3,param_4,param_5,param_6 & 0xfffffffd,0,param_8,
                         param_9);
    return uVar9;
  }
  bVar26 = (bool)(param_5 == 2 & (local_5c ^ 1U));
  bVar23 = (bool)(local_5c ^ 1U);
  if ((!bVar26) || (bVar23 = bVar26, !bVar5)) {
LAB_004043ad:
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
    uVar9 = FUN_004032b0(param_1,local_70,param_3,param_4,5,param_6,param_7,param_8,param_9);
    return uVar9;
  }
  local_5b = uVar9 == 0 && local_70 != 0;
  param_2 = local_70;
  bVar23 = bVar5;
  if (uVar9 != 0 || local_70 == 0) goto LAB_004043ad;
LAB_00403b36:
  *param_1 = 0x27;
  param_5 = 2;
  uVar15 = 1;
  local_78 = "\'";
  local_a0 = 1;
  local_5c = false;
  uVar9 = param_2;
  goto LAB_00403348;
  while (__s1[uVar21] != 0) {
LAB_00404307:
    uVar21 = uVar21 + 1;
    if (param_4 <= uVar22 + uVar21) break;
  }
LAB_00404317:
  bVar23 = false;
LAB_004041da:
  if (1 < uVar21) {
LAB_00403d9e:
    bVar26 = false;
    uVar21 = uVar21 + uVar22;
    uVar16 = uVar22;
    do {
      bVar17 = (byte)uVar19;
      if (bVar25) {
        bVar26 = param_5 == 2;
        if (local_5c) goto LAB_004036bc;
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
        if (uVar21 <= uVar22) goto LAB_0040353d;
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
        if (uVar21 <= uVar22) goto LAB_004035c4;
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
LAB_004038a4:
  if (bVar25) {
    bVar23 = false;
    bVar25 = bVar6;
    goto LAB_00403d9e;
  }
switchD_004038ce_caseD_25:
  bVar25 = param_5 == 2;
LAB_00403498:
  bVar17 = (byte)uVar19;
  bVar24 = (bool)((bVar6 ^ 1U | bVar25) ^ 1 | local_5c);
  bVar26 = bVar20;
  if (bVar24) {
LAB_004034af:
    bVar24 = false;
    bVar20 = bVar26;
LAB_004034b1:
    bVar17 = (byte)uVar19;
    uVar16 = uVar15;
    bVar4 = bVar3;
    if ((param_7 == 0) || ((*(uint *)(param_7 + (uVar19 >> 5) * 4) >> (bVar17 & 0x1f) & 1) == 0))
    goto LAB_004035a8;
    bVar25 = param_5 == 2;
  }
  else {
LAB_004035a8:
    bVar25 = param_5 == 2;
    uVar15 = uVar16;
    bVar3 = bVar4;
    if (!bVar20) {
      uVar22 = uVar22 + 1;
      bVar3 = (bool)((bVar24 ^ 1U) & bVar4);
LAB_004035c4:
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
      goto LAB_0040353d;
    }
  }
joined_r0x004036a7:
  if (local_5c) {
LAB_004036b8:
    bVar26 = (bool)(bVar6 & bVar25);
    goto LAB_004036bc;
  }
LAB_004034f2:
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
LAB_0040352b:
  if (uVar15 < uVar9) {
    param_1[uVar15] = 0x5c;
  }
  uVar15 = uVar15 + 1;
  uVar22 = uVar22 + 1;
  bVar4 = bVar3;
LAB_0040353d:
  bVar3 = bVar4;
  if (uVar15 < uVar9) {
    param_1[uVar15] = bVar17;
  }
  uVar15 = uVar15 + 1;
  if (!bVar23) {
    bVar2 = false;
  }
  goto LAB_00403358;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_004044e0(int param_1,undefined param_2,undefined param_3,undefined *param_4)

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
  puVar8 = (undefined *)PTR_DAT_0060f298;
  if (DAT_0060f2b0 <= param_1) {
    if (param_1 == 0x7fffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_00405540();
    }
    if (PTR_DAT_0060f298 == &DAT_0060f2a0) {
      puVar8 = (undefined *)FUN_00405350(0);
      uVar6 = PTR_DAT_0060f2a8._4_4_;
      uVar5 = PTR_DAT_0060f2a8._0_4_;
      uVar3 = _UNK_0060f2a4;
      PTR_DAT_0060f298 = (undefined *)puVar8;
      *puVar8 = _DAT_0060f2a0;
      puVar8[1] = uVar3;
      puVar8[2] = uVar5;
      puVar8[3] = uVar6;
    }
    else {
      puVar8 = (undefined *)FUN_00405350(PTR_DAT_0060f298);
      PTR_DAT_0060f298 = (undefined *)puVar8;
    }
    memset(puVar8 + (long)DAT_0060f2b0 * 4,0,(long)((param_1 + 1) - DAT_0060f2b0) << 4);
    DAT_0060f2b0 = param_1 + 1;
  }
  uVar2 = param_4[1];
  puVar10 = (ulong *)(puVar8 + (long)param_1 * 4);
  uVar4 = *puVar10;
  __ptr = (undefined *)puVar10[1];
  uVar9 = FUN_004032b0(__ptr,uVar4,param_2,param_3,*param_4,uVar2 | 1,param_4 + 2,
                       *(undefined *)(param_4 + 10),*(undefined *)(param_4 + 0xc));
  if (uVar4 <= uVar9) {
    uVar9 = uVar9 + 1;
    *puVar10 = uVar9;
    if (__ptr != &DAT_0060f3a0) {
      free(__ptr);
    }
    __ptr = (undefined *)FUN_004052f0(uVar9);
    uVar3 = *param_4;
    puVar10[1] = (ulong)__ptr;
    FUN_004032b0(__ptr,uVar9,param_2,param_3,uVar3,uVar2 | 1,param_4 + 2,
                 *(undefined *)(param_4 + 10),*(undefined *)(param_4 + 0xc));
  }
  *piVar7 = iVar1;
  return __ptr;
}


void FUN_00404680(undefined *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_0060f4a0;
  }
  FUN_004054f0(param_1,0x38);
  *piVar2 = iVar1;
  return;
}


undefined FUN_004046c0(undefined *param_1)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = (undefined *)&DAT_0060f4a0;
  }
  return *param_1;
}


void FUN_004046d0(undefined *param_1,undefined param_2)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = (undefined *)&DAT_0060f4a0;
  }
  *param_1 = param_2;
  return;
}


uint FUN_004046e0(undefined *param_1,byte param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_0060f4a0;
  }
  uVar1 = *(uint *)(param_1 + (ulong)(param_2 >> 5) * 4 + 8);
  uVar2 = uVar1 >> (param_2 & 0x1f);
  *(uint *)(param_1 + (ulong)(param_2 >> 5) * 4 + 8) =
       ((param_3 ^ uVar2) & 1) << (param_2 & 0x1f) ^ uVar1;
  return uVar2 & 1;
}


undefined FUN_00404720(undefined *param_1,undefined param_2)

{
  undefined uVar1;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_0060f4a0;
  }
  uVar1 = *(undefined *)(param_1 + 4);
  *(undefined *)(param_1 + 4) = param_2;
  return uVar1;
}


void FUN_00404740(undefined *param_1,long param_2,long param_3)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = (undefined *)&DAT_0060f4a0;
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


void FUN_00404770(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                 undefined *param_5)

{
  int iVar1;
  int *piVar2;
  
  if (param_5 == (undefined *)0x0) {
    param_5 = (undefined *)&DAT_0060f4a0;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  FUN_004032b0(param_1,param_2,param_3,param_4,*param_5,param_5[1],param_5 + 2,
               *(undefined *)(param_5 + 10),*(undefined *)(param_5 + 0xc));
  *piVar2 = iVar1;
  return;
}


undefined FUN_004047f0(undefined param_1,undefined param_2,long *param_3,undefined *param_4)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined uVar4;
  uint uVar5;
  
  if (param_4 == (undefined *)0x0) {
    param_4 = (undefined *)&DAT_0060f4a0;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  uVar5 = (uint)(param_3 == (long *)0x0) | param_4[1];
  lVar3 = FUN_004032b0(0,0,param_1,param_2,*param_4,uVar5,param_4 + 2,*(undefined *)(param_4 + 10),
                       *(undefined *)(param_4 + 0xc));
  uVar4 = FUN_004052f0(lVar3 + 1);
  FUN_004032b0(uVar4,lVar3 + 1,param_1,param_2,*param_4,uVar5,param_4 + 2,
               *(undefined *)(param_4 + 10),*(undefined *)(param_4 + 0xc));
  *piVar2 = iVar1;
  if (param_3 != (long *)0x0) {
    *param_3 = lVar3;
  }
  return uVar4;
}


void FUN_004048e0(undefined param_1,undefined param_2,undefined param_3)

{
  FUN_004047f0(param_1,param_2,0,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004048f0(void)

{
  void **ppvVar1;
  void *__ptr;
  undefined *__ptr_00;
  void **ppvVar2;
  
  __ptr_00 = PTR_DAT_0060f298;
  if (1 < DAT_0060f2b0) {
    ppvVar2 = (void **)(PTR_DAT_0060f298 + 0x18);
    ppvVar1 = (void **)(PTR_DAT_0060f298 + (ulong)(DAT_0060f2b0 - 2) * 0x10 + 0x28);
    do {
      __ptr = *ppvVar2;
      ppvVar2 = ppvVar2 + 2;
      free(__ptr);
    } while (ppvVar2 != ppvVar1);
  }
  if (*(undefined **)(__ptr_00 + 8) != &DAT_0060f3a0) {
    free(*(undefined **)(__ptr_00 + 8));
    _DAT_0060f2a0 = 0x100;
    PTR_DAT_0060f2a8 = &DAT_0060f3a0;
  }
  if (__ptr_00 != &DAT_0060f2a0) {
    free(__ptr_00);
    PTR_DAT_0060f298 = &DAT_0060f2a0;
  }
  DAT_0060f2b0 = 1;
  return;
}


void FUN_00404990(undefined param_1,undefined param_2)

{
  FUN_004044e0(param_1,param_2,0xffffffffffffffff,&DAT_0060f4a0);
  return;
}


void FUN_004049b0(void)

{
  FUN_004044e0();
  return;
}


void FUN_004049c0(undefined param_1)

{
  FUN_004044e0(0,param_1,0xffffffffffffffff,&DAT_0060f4a0);
  return;
}


void FUN_004049e0(undefined param_1,undefined param_2)

{
  FUN_004044e0(0,param_1,param_2,&DAT_0060f4a0);
  return;
}


void FUN_00404a00(undefined param_1,int param_2,undefined param_3)

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
    FUN_004044e0(param_1,param_3,0xffffffffffffffff,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00404a70(undefined param_1,int param_2,undefined param_3,undefined param_4)

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
    FUN_004044e0(param_1,param_3,param_4,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00404ae0(undefined param_1,undefined param_2)

{
  FUN_00404a00(0,param_1,param_2);
  return;
}


void FUN_00404af0(undefined param_1,undefined param_2,undefined param_3)

{
  FUN_00404a70(0,param_1,param_2,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404b00(undefined param_1,undefined param_2,byte param_3)

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
  
  local_18 = DAT_0060f4d0;
  local_48 = _DAT_0060f4a0;
  uStack_40 = uRam000000000060f4a8;
  local_38 = _DAT_0060f4b0;
  uStack_30 = uRam000000000060f4b8;
  puVar1 = (uint *)((long)&uStack_40 + (ulong)(param_3 >> 5) * 4);
  local_28 = _DAT_0060f4c0;
  uStack_20 = uRam000000000060f4c8;
  uVar2 = *puVar1;
  *puVar1 = (~(uVar2 >> (param_3 & 0x1f)) & 1) << (param_3 & 0x1f) ^ uVar2;
  FUN_004044e0(0,param_1,param_2,&local_48);
  return;
}


void FUN_00404b70(undefined param_1,char param_2)

{
  FUN_00404b00(param_1,0xffffffffffffffff,(int)param_2);
  return;
}


void FUN_00404b80(undefined param_1)

{
  FUN_00404b00(param_1,0xffffffffffffffff,0x3a);
  return;
}


void FUN_00404ba0(undefined param_1,undefined param_2)

{
  FUN_00404b00(param_1,param_2,0x3a);
  return;
}


void FUN_00404bb0(undefined param_1,int param_2,undefined param_3)

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
    FUN_004044e0(param_1,param_3,0xffffffffffffffff,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404c20(undefined param_1,long param_2,long param_3,undefined param_4,undefined param_5
                 )

{
  undefined local_48;
  undefined uStack_40;
  undefined local_38;
  undefined uStack_30;
  undefined local_28;
  long lStack_20;
  long local_18;
  
  uStack_40 = uRam000000000060f4a8;
  local_38 = _DAT_0060f4b0;
  uStack_30 = uRam000000000060f4b8;
  local_28 = _DAT_0060f4c0;
  lStack_20 = uRam000000000060f4c8;
  local_18 = DAT_0060f4d0;
  local_48 = CONCAT44((int)((ulong)_DAT_0060f4a0 >> 0x20),10);
  if ((param_2 != 0) && (param_3 != 0)) {
    lStack_20 = param_2;
    local_18 = param_3;
    FUN_004044e0(param_1,param_4,param_5,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00404c90(void)

{
  FUN_00404c20();
  return;
}


void FUN_00404ca0(undefined param_1,undefined param_2,undefined param_3)

{
  FUN_00404c20(0,param_1,param_2,param_3,0xffffffffffffffff);
  return;
}


void FUN_00404cc0(undefined param_1,undefined param_2,undefined param_3,undefined param_4)

{
  FUN_00404c20(0,param_1,param_2,param_3,param_4);
  return;
}


void FUN_00404ce0(void)

{
  FUN_004044e0();
  return;
}


void FUN_00404cf0(undefined param_1,undefined param_2)

{
  FUN_004044e0(0,param_1,param_2,&DAT_0060f260);
  return;
}


void FUN_00404d10(undefined param_1,undefined param_2)

{
  FUN_004044e0(param_1,param_2,0xffffffffffffffff,&DAT_0060f260);
  return;
}


void FUN_00404d30(undefined param_1)

{
  FUN_004044e0(0,param_1,0xffffffffffffffff,&DAT_0060f260);
  return;
}


undefined
FUN_00404d50(FILE *param_1,long param_2,undefined param_3,undefined param_4,undefined *param_5,
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
  uVar1 = dcgettext(0,&DAT_0040bf0b,5);
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
  FUN_00404d50();
  return;
}


void FUN_00405270(void)

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


void FUN_00405390(undefined param_1,ulong param_2,ulong param_3)

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
  undefined uVar1;
  
  uVar1 = dcgettext(0,"memory exhausted",5);
  error(DAT_0060f258,0,"%s",uVar1);
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00405580(char *param_1,size_t param_2)

{
  char *pcVar1;
  
  pcVar1 = strndup(param_1,param_2);
  if (pcVar1 != (char *)0x0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00405540();
}


int FUN_004055a0(FILE *param_1)

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
      if (_Var4 == -1) goto LAB_00405607;
    }
    iVar1 = FUN_00405620(param_1);
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
LAB_00405607:
  iVar1 = fclose(param_1);
  return iVar1;
}


void FUN_00405620(FILE *param_1)

{
  int iVar1;
  
  if (param_1 != (FILE *)0x0) {
    iVar1 = __freading();
    if ((iVar1 != 0) && ((param_1->_flags & 0x100U) != 0)) {
      FUN_00407bf0(param_1,0,1);
      fflush(param_1);
      return;
    }
  }
  fflush(param_1);
  return;
}


int * FUN_00405660(int *param_1)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  
  piVar1 = param_1;
LAB_00405670:
  do {
    iVar3 = piVar1[1];
    while( true ) {
      if (iVar3 == 0) {
        return param_1;
      }
      if (iVar3 == 0x5b) break;
      if (iVar3 - 0x21U < 0x20) {
        if (((0xc0000601UL >> ((ulong)(iVar3 - 0x21U) & 0x3f) & 1) != 0) && (piVar1[2] == 0x28)) {
          piVar1 = (int *)FUN_00405660(piVar1 + 2);
          goto LAB_00405670;
        }
        if (iVar3 == 0x29) {
          return piVar1 + 2;
        }
      }
      iVar3 = piVar1[2];
      piVar1 = piVar1 + 1;
    }
    if (DAT_0060f4d8 == 0) {
      pcVar2 = getenv("POSIXLY_CORRECT");
      DAT_0060f4d8 = -(uint)(pcVar2 == (char *)0x0) | 1;
    }
    iVar3 = piVar1[2];
    if ((iVar3 == 0x21) || (((int)DAT_0060f4d8 < 0 && (iVar3 == 0x5e)))) {
      iVar3 = piVar1[3];
      piVar1 = piVar1 + 3;
    }
    else {
      piVar1 = piVar1 + 2;
    }
    if (iVar3 == 0x5d) {
      iVar3 = piVar1[1];
      piVar1 = piVar1 + 1;
    }
    while (iVar3 != 0x5d) {
      if (iVar3 == 0) {
        return param_1;
      }
      iVar3 = piVar1[1];
      piVar1 = piVar1 + 1;
    }
  } while( true );
}


char * FUN_00405760(char *param_1)

{
  byte bVar1;
  char *pcVar2;
  char *pcVar3;
  char cVar4;
  
  pcVar2 = param_1;
LAB_00405770:
  do {
    bVar1 = pcVar2[1];
    while( true ) {
      if (bVar1 == 0) {
        return param_1;
      }
      if (bVar1 == 0x5b) break;
      if ((byte)(bVar1 - 0x21) < 0x20) {
        if (((0xc0000601UL >> ((ulong)(bVar1 - 0x21) & 0x3f) & 1) != 0) && (pcVar2[2] == '(')) {
          pcVar2 = (char *)FUN_00405760(pcVar2 + 2);
          goto LAB_00405770;
        }
        if (bVar1 == 0x29) {
          return pcVar2 + 2;
        }
      }
      bVar1 = pcVar2[2];
      pcVar2 = pcVar2 + 1;
    }
    if (DAT_0060f4d8 == 0) {
      pcVar3 = getenv("POSIXLY_CORRECT");
      DAT_0060f4d8 = -(uint)(pcVar3 == (char *)0x0) | 1;
    }
    cVar4 = pcVar2[2];
    if ((cVar4 == '!') || (((int)DAT_0060f4d8 < 0 && (cVar4 == '^')))) {
      cVar4 = pcVar2[3];
      pcVar2 = pcVar2 + 3;
    }
    else {
      pcVar2 = pcVar2 + 2;
    }
    if (cVar4 == ']') {
      cVar4 = pcVar2[1];
      pcVar2 = pcVar2 + 1;
    }
    while (cVar4 != ']') {
      if (cVar4 == '\0') {
        return param_1;
      }
      cVar4 = pcVar2[1];
      pcVar2 = pcVar2 + 1;
    }
  } while( true );
}


/* WARNING: Could not reconcile some variable overlaps */

undefined
FUN_00405860(uint param_1,wchar_t *param_2,ulong param_3,ulong param_4,byte param_5,uint param_6)

{
  long lVar1;
  wchar_t wVar2;
  int iVar3;
  wchar_t *pwVar4;
  char *pcVar5;
  ulong uVar6;
  long **pplVar7;
  wchar_t *pwVar8;
  byte bVar9;
  ulong uVar10;
  size_t sVar11;
  uint uVar12;
  long ***ppplVar13;
  undefined *puVar14;
  long lVar15;
  long ***ppplVar16;
  long **pplVar17;
  wchar_t *__src;
  ulong uVar18;
  ulong uVar19;
  bool bVar20;
  undefined auStack_88 [8];
  wchar_t *local_80;
  wchar_t *local_78;
  ulong local_70;
  byte local_65;
  uint local_64;
  ulong local_60;
  wchar_t *local_58;
  long **local_50;
  long **local_40 [2];
  
  puVar14 = auStack_88;
  local_58 = (wchar_t *)((ulong)local_58 & 0xffffffff00000000 | (ulong)param_1);
  local_40[0] = (long **)0x0;
  local_70 = param_3;
  local_65 = param_5;
  local_64 = param_6;
  local_60 = param_4;
  local_50 = (long **)wcslen(param_2);
  wVar2 = param_2[1];
  if (wVar2 != L'\0') {
    pwVar8 = param_2 + 1;
    ppplVar13 = local_40;
    lVar15 = 0;
    local_78 = param_2;
    __src = pwVar8;
    do {
      pwVar4 = local_78;
      if (wVar2 == L'[') {
        if (DAT_0060f4d8 == 0) {
          local_80 = pwVar8;
          *(undefined *)(puVar14 + -8) = 0x405a6e;
          pcVar5 = getenv("POSIXLY_CORRECT");
          DAT_0060f4d8 = -(uint)(pcVar5 == (char *)0x0) | 1;
          pwVar8 = local_80;
        }
        wVar2 = __src[1];
        if ((wVar2 == L'!') || (((int)DAT_0060f4d8 < 0 && (wVar2 == L'^')))) {
          pwVar4 = __src + 2;
          wVar2 = __src[2];
        }
        else {
          pwVar4 = __src + 1;
        }
        if (wVar2 == L']') {
          wVar2 = pwVar4[1];
          pwVar4 = pwVar4 + 1;
        }
        while (__src = pwVar4 + 1, wVar2 != L']') {
          if (wVar2 == L'\0') {
            return 0xffffffff;
          }
          pwVar4 = __src;
          wVar2 = *__src;
        }
        wVar2 = pwVar4[1];
      }
      else {
        while( true ) {
          if (0x1f < (uint)(wVar2 + L'\xffffffdf')) break;
          if (((0xc0000601UL >> ((ulong)(uint)(wVar2 + L'\xffffffdf') & 0x3f) & 1) == 0) ||
             (__src[1] != L'(')) {
            if (wVar2 != L')') goto LAB_004058d6;
            if (lVar15 != 0) {
              wVar2 = __src[1];
              lVar15 = lVar15 + -1;
              __src = __src + 1;
              goto joined_r0x0040591b;
            }
            if (1 < (int)local_58 - 0x3fU) {
              local_50 = (long **)(((long)__src - (long)pwVar8 >> 2) + 1);
            }
            uVar6 = (long)local_50 * 4 + 0xfU & 0xfffffffffffffff8;
            if (0x1f37 < uVar6 - 8) {
              return 0xffffffff;
            }
            if (0x3fffffffffffffff < local_50) {
              return 0xffffffff;
            }
            lVar15 = -(uVar6 + 0x17 & 0xfffffffffffffff0);
            pplVar7 = (long **)((ulong)(puVar14 + lVar15 + 0xf) & 0xfffffffffffffff0);
            *(undefined *)(puVar14 + lVar15 + -8) = 0x405b08;
            pwVar8 = wmempcpy((wchar_t *)(pplVar7 + 1),pwVar8,(long)__src - (long)pwVar8 >> 2);
            uVar18 = local_60;
            uVar12 = local_64;
            uVar6 = local_70;
            *pwVar8 = L'\0';
            *ppplVar13 = pplVar7;
            pplVar17 = local_40[0];
            *pplVar7 = (long *)0x0;
            if (local_40[0] == (long **)0x0) {
                    /* WARNING: Subroutine does not return */
              *(undefined *)(puVar14 + lVar15 + -8) = 0x405de3;
              __assert_fail("list != NULL","lib/fnmatch_loop.c",0x454,"ext_wmatch");
            }
            if (__src[-1] != L')') {
                    /* WARNING: Subroutine does not return */
              *(undefined *)(puVar14 + lVar15 + -8) = 0x405dca;
              __assert_fail("p[-1] == L_(\')\')","lib/fnmatch_loop.c",0x455,"ext_wmatch");
            }
            switch((int)local_58) {
            case 0x21:
              if (local_60 < local_70) {
                return 1;
              }
              local_50 = local_40[0];
              local_58 = __src;
              pplVar17 = local_50;
              uVar18 = local_70;
              uVar12 = local_64 & 0xfffffffb;
              if ((local_64 & 1) != 0) {
                uVar12 = local_64;
              }
              goto LAB_00405c90;
            default:
                    /* WARNING: Subroutine does not return */
              *(undefined *)(puVar14 + lVar15 + -8) = 0x405db1;
              __assert_fail("! \"Invalid extended matching operator\"","lib/fnmatch_loop.c",0x4ad,
                            "ext_wmatch");
            case 0x2a:
              *(undefined *)(puVar14 + lVar15 + -8) = 0x405b63;
              iVar3 = FUN_00405df0(__src,uVar6,uVar18,param_5,uVar12);
              if (iVar3 == 0) {
                return 0;
              }
            case 0x2b:
              uVar18 = local_60;
              uVar6 = local_70;
              local_78 = __src;
              uVar12 = local_64 & 0xfffffffb;
              if ((local_64 & 1) != 0) {
                uVar12 = local_64;
              }
              local_58 = (wchar_t *)
                         ((ulong)local_58 & 0xffffffff00000000 |
                         (ulong)local_64 & 0xffffffff00000001);
              local_80 = pwVar4 + -1;
              do {
                if (uVar6 <= uVar18) {
                  local_50 = (long **)((ulong)local_50 & 0xffffffff00000000 | (ulong)local_65);
                  uVar19 = uVar6;
                  do {
                    uVar10 = (ulong)local_50 & 0xffffffff;
                    *(undefined *)(puVar14 + lVar15 + -8) = 0x405c2d;
                    iVar3 = FUN_00405df0(pplVar17 + 1,uVar6,uVar19,uVar10,uVar12);
                    pwVar8 = local_78;
                    if (iVar3 == 0) {
                      if (uVar6 == uVar19) {
                        uVar10 = (ulong)local_50 & 0xffffffff;
                        *(undefined *)(puVar14 + lVar15 + -8) = 0x405c4f;
                        iVar3 = FUN_00405df0(pwVar8,uVar6,uVar18,uVar10,uVar12);
                        pplVar17 = local_40[0];
                      }
                      else {
                        bVar20 = false;
                        if (*(int *)(uVar19 - 4) == 0x2f) {
                          bVar20 = (local_64 & 5) == 5;
                        }
                        *(undefined *)(puVar14 + lVar15 + -8) = 0x405bd6;
                        iVar3 = FUN_00405df0(pwVar8,uVar19,uVar18,bVar20,uVar12);
                        pwVar8 = local_80;
                        if (iVar3 == 0) {
                          return 0;
                        }
                        bVar20 = false;
                        if (*(int *)(uVar19 - 4) == 0x2f) {
                          bVar20 = (local_64 & 5) == 5;
                        }
                        *(undefined *)(puVar14 + lVar15 + -8) = 0x405c03;
                        iVar3 = FUN_00405df0(pwVar8,uVar19,uVar18,bVar20,uVar12);
                        pplVar17 = local_40[0];
                      }
                      local_40[0] = pplVar17;
                      if (iVar3 == 0) {
                        return 0;
                      }
                    }
                    uVar19 = uVar19 + 4;
                  } while (uVar19 <= uVar18);
                }
                pplVar17 = (long **)*pplVar17;
                local_40[0] = pplVar17;
                if (pplVar17 == (long **)0x0) {
                  return 1;
                }
              } while( true );
            case 0x3f:
              *(undefined *)(puVar14 + lVar15 + -8) = 0x405d6c;
              iVar3 = FUN_00405df0(__src,uVar6,uVar18,param_5,uVar12);
              if (iVar3 == 0) {
                return 0;
              }
              break;
             INVALID_JUMP; //case 0x40:
            }
            uVar6 = local_70;
            uVar12 = local_64 & 0xfffffffb;
            if ((local_64 & 1) != 0) {
              uVar12 = local_64;
            }
            do {
              *(undefined *)(puVar14 + lVar15 + -8) = 0x405d31;
              pwVar8 = wcscat((wchar_t *)(pplVar17 + 1),__src);
              uVar18 = local_60;
              *(undefined *)(puVar14 + lVar15 + -8) = 0x405d46;
              iVar3 = FUN_00405df0(pwVar8,uVar6,uVar18,param_5,uVar12);
              if (iVar3 == 0) {
                return 0;
              }
              pplVar17 = (long **)*pplVar17;
              local_40[0] = pplVar17;
            } while (pplVar17 != (long **)0x0);
            return 1;
          }
          lVar15 = lVar15 + 1;
          __src = __src + 1;
          wVar2 = L'(';
        }
        if ((wVar2 == L'|') && (lVar15 == 0)) {
          sVar11 = (size_t)local_50;
          if (1 < (int)local_58 - 0x3fU) {
            sVar11 = ((long)__src - (long)pwVar8 >> 2) + 1;
          }
          uVar6 = sVar11 * 4 + 0xf & 0xfffffffffffffff8;
          if (0x1f37 < uVar6 - 8) {
            return 0xffffffff;
          }
          if (0x3fffffffffffffff < sVar11) {
            return 0xffffffff;
          }
          lVar1 = -(uVar6 + 0x17 & 0xfffffffffffffff0);
          ppplVar16 = (long ***)((ulong)(puVar14 + lVar1 + 0xf) & 0xfffffffffffffff0);
          *(undefined *)(puVar14 + lVar1 + -8) = 0x405a34;
          pwVar4 = wmempcpy((wchar_t *)(ppplVar16 + 1),pwVar8,(long)__src - (long)pwVar8 >> 2);
          pwVar8 = __src + 1;
          *pwVar4 = L'\0';
          wVar2 = __src[1];
          *ppplVar16 = (long **)0x0;
          *ppplVar13 = (long **)ppplVar16;
          lVar15 = 0;
          __src = pwVar8;
          ppplVar13 = ppplVar16;
          puVar14 = puVar14 + lVar1;
        }
        else {
LAB_004058d6:
          wVar2 = __src[1];
          __src = __src + 1;
        }
      }
INVALID_JUMP; //joined_r0x0040591b:
    } while (wVar2 != L'\0');
  }
  return 0xffffffff;
LAB_00405c90:
  *(undefined *)(puVar14 + lVar15 + -8) = 0x405ca5;
  iVar3 = FUN_00405df0(pplVar17 + 1,uVar6,uVar18,param_5,uVar12);
  pwVar8 = local_58;
  uVar19 = local_60;
  if (iVar3 != 0) {
    pplVar17 = (long **)*pplVar17;
    if (pplVar17 != (long **)0x0) goto LAB_00405c90;
    bVar9 = param_5;
    if ((uVar6 != uVar18) && (bVar9 = 0, *(int *)(uVar18 - 4) == 0x2f)) {
      bVar9 = (local_64 & 5) == 5;
    }
    *(undefined *)(puVar14 + lVar15 + -8) = 0x405ce5;
    iVar3 = FUN_00405df0(pwVar8,uVar18,uVar19,bVar9,uVar12);
    if (iVar3 == 0) {
      return 0;
    }
  }
  uVar18 = uVar18 + 4;
  pplVar17 = local_50;
  if (local_60 < uVar18) {
    return 1;
  }
  goto LAB_00405c90;
}


/* WARNING: Type propagation algorithm not settling */

ulong FUN_00405df0(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,byte param_4,uint param_5)

{
  uint uVar1;
  bool bVar2;
  wchar_t wVar3;
  wchar_t wVar4;
  wchar_t wVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  wchar_t *pwVar9;
  char *pcVar10;
  wchar_t *pwVar11;
  wctype_t __desc;
  wchar_t wVar12;
  long lVar13;
  uint uVar14;
  wchar_t *pwVar15;
  char *pcVar16;
  uint uVar17;
  wchar_t wVar18;
  bool bVar19;
  wchar_t *local_580;
  uint local_570;
  char local_558 [268];
  wchar_t awStack_44c [263];
  
  wVar3 = *param_1;
  if (wVar3 == L'\0') {
LAB_0040608c:
    if (param_2 == param_3) {
      return 0;
    }
    if ((param_5 & 8) == 0) {
      return 1;
    }
    return (ulong)(*param_2 != L'/');
  }
  uVar14 = param_5 & 0x10;
  uVar17 = param_5 & 2;
  local_580 = param_1 + 1;
LAB_00405e45:
  if (uVar14 != 0) {
    wVar3 = towlower(wVar3);
  }
  switch(wVar3) {
  case L'!':
  case L'+':
  case L'@':
    if ((((param_5 & 0x20) != 0) && (param_1[1] == L'(')) &&
       (uVar8 = FUN_00405860(wVar3,local_580,param_2,param_3,param_4,param_5), (int)uVar8 != -1)) {
      return uVar8;
    }
  default:
switchD_00405e6d_caseD_22:
    if (param_3 == param_2) {
      return 1;
    }
LAB_00406052:
    wVar5 = *param_2;
    if (uVar14 != 0) {
      wVar5 = towlower(wVar5);
    }
    if (wVar5 != wVar3) {
      return 1;
    }
LAB_00406065:
    param_4 = false;
    break;
  case L'*':
    uVar6 = param_5 & 0x20;
    if (((uVar6 != 0) && (param_1[1] == L'(')) &&
       (uVar8 = FUN_00405860(0x2a,local_580,param_2,param_3,param_4,param_5), (int)uVar8 != -1)) {
      return uVar8;
    }
    if (((param_3 != param_2) && (*param_2 == L'.')) && (param_4 != 0)) {
      return 1;
    }
    wVar3 = param_1[1];
    param_1 = param_1 + 2;
    if ((wVar3 == L'*') || (wVar3 == L'?')) {
      do {
        if ((((*param_1 != L'(') || (uVar6 == 0)) ||
            (pwVar9 = (wchar_t *)FUN_00405660(param_1), pwVar9 == param_1)) &&
           (pwVar9 = param_1, wVar3 == L'?')) {
          if (param_2 == param_3) {
            return 1;
          }
          if ((*param_2 == L'/') && ((param_5 & 1) != 0)) {
            return 1;
          }
          param_2 = param_2 + 1;
        }
        wVar3 = *pwVar9;
        param_1 = pwVar9 + 1;
      } while ((wVar3 == L'?') || (wVar3 == L'*'));
    }
    if (wVar3 == L'\0') {
      if ((param_5 & 1) == 0) {
        return 0;
      }
      if ((param_5 & 8) != 0) {
        return 0;
      }
      pwVar9 = wmemchr(param_2,L'/',(long)param_3 - (long)param_2 >> 2);
      return (ulong)(pwVar9 != (wchar_t *)0x0);
    }
    uVar1 = param_5 & 1;
    pwVar9 = wmemchr(param_2,-(param_5 & 1) & 0x2f,(long)param_3 - (long)param_2 >> 2);
    if (pwVar9 == (wchar_t *)0x0) {
      pwVar9 = param_3;
    }
    if ((wVar3 == L'[') ||
       ((((uVar6 != 0 && ((uint)(wVar3 + L'\xffffffdf') < 0x20)) &&
         ((0x80000401UL >> ((ulong)(uint)(wVar3 + L'\xffffffdf') & 0x3f) & 1) != 0)) &&
        (*param_1 == L'(')))) {
      uVar14 = param_5 & 0xfffffffb;
      if (uVar1 != 0) {
        uVar14 = param_5;
      }
      while( true ) {
        if (pwVar9 <= param_2) {
          return 1;
        }
        iVar7 = FUN_00405df0(param_1 + -1,param_2,param_3,param_4,uVar14);
        if (iVar7 == 0) break;
        param_2 = param_2 + 1;
        param_4 = 0;
      }
      return 0;
    }
    if (wVar3 == L'/') {
      if (uVar1 != 0) {
        while( true ) {
          if (param_3 <= param_2) {
            return 1;
          }
          if (*param_2 == L'/') break;
          param_2 = param_2 + 1;
        }
        iVar7 = FUN_00405df0(param_1,param_2 + 1,param_3,param_5 >> 2 & 1);
        return (ulong)(iVar7 != 0);
      }
    }
    else {
      local_570 = param_5;
      if (uVar1 != 0) goto LAB_00406208;
    }
    local_570 = param_5 & 0xfffffffb;
LAB_00406208:
    if ((wVar3 == L'\\') && (uVar17 == 0)) {
      wVar3 = *param_1;
    }
    if (uVar14 != 0) {
      wVar3 = towlower(wVar3);
    }
    while( true ) {
      if (pwVar9 <= param_2) {
        return 1;
      }
      wVar5 = *param_2;
      if (uVar14 != 0) {
        wVar5 = towlower(wVar5);
      }
      if ((wVar3 == wVar5) &&
         (iVar7 = FUN_00405df0(param_1 + -1,param_2,param_3,param_4,local_570), iVar7 == 0)) break;
      param_2 = param_2 + 1;
      param_4 = 0;
    }
    return 0;
  case L'/':
    if ((param_5 & 5) != 5) goto switchD_00405e6d_caseD_22;
    if (param_3 == param_2) {
      return 1;
    }
    if (*param_2 != L'/') {
      return 1;
    }
    param_4 = true;
    break;
  case L'?':
    if ((((param_5 & 0x20) != 0) && (param_1[1] == L'(')) &&
       (uVar8 = FUN_00405860(0x3f,local_580,param_2,param_3,param_4,param_5), (int)uVar8 != -1)) {
      return uVar8;
    }
    if (param_3 == param_2) {
      return 1;
    }
    if (*param_2 != L'/') {
      param_4 = param_4 & *param_2 == L'.';
      if ((bool)param_4 != false) {
        return 1;
      }
      break;
    }
    if ((param_5 & 1) != 0) {
      return 1;
    }
    goto LAB_00406065;
  case L'[':
    if (DAT_0060f4d8 == 0) {
      pcVar10 = getenv("POSIXLY_CORRECT");
      DAT_0060f4d8 = -(uint)(pcVar10 == (char *)0x0) | 1;
    }
    if (param_3 == param_2) {
      return 1;
    }
    wVar5 = *param_2;
    if (wVar5 == L'.') {
      if (param_4 != 0) {
        return 1;
      }
    }
    else if ((wVar5 == L'/') && ((param_5 & 1) != 0)) {
      return 1;
    }
    if ((param_1[1] == L'!') || (((int)DAT_0060f4d8 < 0 && (param_1[1] == L'^')))) {
      param_1 = param_1 + 2;
      bVar2 = true;
    }
    else {
      bVar2 = false;
      param_1 = local_580;
    }
    if (uVar14 != 0) {
      wVar5 = towlower(wVar5);
    }
    wVar4 = *param_1;
    pwVar9 = param_1 + 1;
LAB_00405f77:
    do {
      if ((uVar17 == 0) && (wVar4 == L'\\')) {
        wVar4 = *pwVar9;
        if (wVar4 == L'\0') {
          return 1;
        }
        if (uVar14 != 0) {
          wVar4 = towlower(wVar4);
        }
        wVar18 = pwVar9[1];
        pwVar15 = pwVar9 + 1;
        goto LAB_00405fa6;
      }
      if (wVar4 == L'[') {
        wVar18 = *pwVar9;
        if (wVar18 != L':') goto LAB_00405f9a;
        lVar13 = 0;
        pwVar11 = pwVar9;
        while( true ) {
          wVar4 = pwVar11[1];
          if (wVar4 == L':') break;
          if (0x18 < (uint)(wVar4 + L'\xffffff9f')) goto LAB_00406343;
          lVar13 = lVar13 + 1;
          awStack_44c[lVar13] = wVar4;
          pwVar11 = pwVar11 + 1;
          if (lVar13 == 0x100) {
            return 1;
          }
        }
        if (pwVar11[2] != L']') {
LAB_00406343:
          pwVar11 = pwVar9 + 1;
          pwVar15 = pwVar9;
          pwVar9 = pwVar11;
          if (wVar5 == L'[') {
LAB_004065b0:
            wVar18 = *pwVar15;
            goto LAB_004065d3;
          }
          wVar4 = L':';
          goto LAB_00405f77;
        }
        awStack_44c[lVar13 + 1] = L'\0';
        pwVar9 = awStack_44c + 1;
        pcVar10 = local_558;
        wVar4 = awStack_44c[1];
        do {
          if (wVar4 < L'@') {
            if ((wVar4 < L'%') && (3 < (uint)(wVar4 + L'\xffffffe0'))) {
              return 1;
            }
          }
          else {
            if (wVar4 < L'A') {
              return 1;
            }
            if ((L'_' < wVar4) && (0x1d < (uint)(wVar4 + L'\xffffff9f'))) {
              return 1;
            }
          }
          if (pwVar9 == awStack_44c + 0x101) {
            return 1;
          }
          pwVar9 = pwVar9 + 1;
          pcVar16 = pcVar10 + 1;
          *pcVar10 = (char)wVar4;
          wVar4 = *pwVar9;
          pcVar10 = pcVar16;
        } while (wVar4 != L'\0');
        *pcVar16 = '\0';
        __desc = wctype(local_558);
        if (__desc == 0) {
          return 1;
        }
        iVar7 = iswctype(*param_2,__desc);
        if (iVar7 != 0) {
          pwVar15 = pwVar11 + 3;
          wVar18 = pwVar11[3];
          pwVar9 = pwVar11 + 4;
          goto LAB_004065d3;
        }
        pwVar9 = pwVar11 + 4;
        wVar4 = pwVar11[3];
      }
      else {
        if (wVar4 == L'\0') goto LAB_00406052;
        wVar18 = *pwVar9;
LAB_00405f9a:
        while( true ) {
          pwVar15 = pwVar9;
          if (uVar14 != 0) {
            wVar4 = towlower(wVar4);
          }
LAB_00405fa6:
          pwVar9 = pwVar15 + 1;
          if (wVar18 != L'-') {
            bVar19 = wVar4 != wVar5;
            wVar4 = wVar18;
            if (bVar19) goto LAB_00405f6e;
            goto LAB_004065b0;
          }
          wVar12 = pwVar15[1];
          if ((wVar12 != L']') && (wVar12 != L'\0')) break;
          if (wVar4 == wVar5) goto LAB_004065d3;
          if (wVar12 != L']') break;
          wVar18 = L']';
          wVar4 = L'-';
        }
        pwVar9 = pwVar15 + 2;
        if ((wVar12 == L'\\') && (uVar17 == 0)) {
          wVar12 = pwVar15[2];
          pwVar9 = pwVar15 + 3;
        }
        pwVar15 = pwVar9;
        if (wVar12 == L'\0') {
          return 1;
        }
        wVar18 = *pwVar15;
        pwVar9 = pwVar15 + 1;
        bVar19 = (uint)wVar4 <= (uint)wVar5;
        wVar4 = wVar18;
        if ((uint)wVar5 <= (uint)wVar12 && bVar19) {
          pwVar9 = pwVar15 + 1;
          goto LAB_004065d3;
        }
      }
INVALID_JUMP; //LAB_00405f6e:
    } while (wVar4 != L']');
    local_580 = pwVar9;
    if (!bVar2) {
      return 1;
    }
    goto LAB_004062c4;
  case L'\\':
    if (uVar17 == 0) {
      wVar3 = param_1[1];
      local_580 = param_1 + 2;
      if (wVar3 == L'\0') {
        return 1;
      }
      if (uVar14 == 0) {
        if (param_3 == param_2) {
          return 1;
        }
        goto LAB_004062b4;
      }
      wVar3 = towlower(wVar3);
      if (param_3 == param_2) {
        return 1;
      }
LAB_00405eb6:
      wVar5 = towlower(*param_2);
    }
    else {
      if (param_3 == param_2) {
        return 1;
      }
      if (uVar14 != 0) goto LAB_00405eb6;
LAB_004062b4:
      wVar5 = *param_2;
    }
    if (wVar5 != wVar3) {
      return 1;
    }
LAB_004062c4:
    param_4 = false;
  }
  goto LAB_0040606d;
LAB_004065d3:
  if (wVar18 == L'\0') {
    return 1;
  }
  param_4 = wVar18 == L'\\' && uVar17 == 0;
  if ((bool)param_4) {
    if (pwVar15[1] == L'\0') {
      return 1;
    }
    wVar18 = pwVar15[2];
    pwVar15 = pwVar15 + 2;
  }
  else {
    local_580 = pwVar9;
    if (wVar18 == L'[') {
      wVar18 = pwVar15[1];
      if (wVar18 == L':') {
        pwVar11 = pwVar15 + 2;
        wVar18 = pwVar15[2];
        while (wVar18 != L':') {
          if (0x18 < (uint)(wVar18 + L'\xffffff9f')) {
            wVar18 = L':';
            pwVar15 = pwVar9;
            goto LAB_004065cf;
          }
          pwVar11 = pwVar11 + 1;
          wVar18 = *pwVar11;
          if (pwVar15 + 0x101 == pwVar11) {
            return 1;
          }
        }
        pwVar15 = pwVar9;
        if (pwVar11[1] != L']') goto LAB_004065cf;
        local_580 = pwVar11 + 3;
        wVar18 = pwVar11[2];
      }
      else if (wVar18 == L'=') {
        if (pwVar15[2] == L'\0') {
          return 1;
        }
        if (pwVar15[3] != L'=') {
          return 1;
        }
        if (pwVar15[4] != L']') {
          return 1;
        }
        local_580 = pwVar15 + 6;
        wVar18 = pwVar15[5];
      }
      else {
        pwVar11 = pwVar15 + 2;
        pwVar15 = pwVar9;
        if (wVar18 != L'.') goto LAB_004065cf;
        do {
          pwVar9 = pwVar11;
          if (pwVar9[1] == L'\0') {
            return 1;
          }
          pwVar11 = pwVar9 + 1;
        } while ((pwVar9[1] != L'.') || (pwVar9[2] != L']'));
        local_580 = pwVar9 + 4;
        wVar18 = pwVar9[3];
      }
    }
    if (wVar18 == L']') goto LAB_0040684d;
    wVar18 = *local_580;
    pwVar15 = local_580;
  }
LAB_004065cf:
  pwVar9 = pwVar15 + 1;
  goto LAB_004065d3;
LAB_0040684d:
  if (bVar2) {
    return 1;
  }
LAB_0040606d:
  wVar3 = *local_580;
  param_2 = param_2 + 1;
  param_1 = local_580;
  local_580 = local_580 + 1;
  if (wVar3 == L'\0') goto LAB_0040608c;
  goto LAB_00405e45;
}


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Could not reconcile some variable overlaps */

undefined
FUN_004068d0(uint param_1,char *param_2,ulong param_3,ulong param_4,byte param_5,uint param_6)

{
  long lVar1;
  ulong uVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  size_t sVar8;
  ulong uVar9;
  long **pplVar10;
  undefined *puVar11;
  char *pcVar12;
  ulong uVar13;
  long ***ppplVar14;
  char **ppcVar15;
  ulong uVar16;
  char *pcVar17;
  long lVar18;
  long ***ppplVar19;
  bool bVar20;
  char *local_88;
  char *local_80;
  byte local_75;
  uint local_74;
  ulong local_70;
  ulong local_68;
  undefined local_60;
  long **local_58;
  char *local_50;
  long **local_40 [2];
  
  ppcVar15 = &local_88;
  local_50 = (char *)((ulong)local_50 & 0xffffffff00000000 | (ulong)param_1);
  local_40[0] = (long **)0x0;
  local_75 = param_5;
  local_74 = param_6;
  local_70 = param_4;
  local_68 = param_3;
  local_58 = (long **)strlen(param_2);
  uVar5 = (uint)(byte)param_2[1];
  if (param_2[1] != 0) {
    pcVar7 = param_2 + 1;
    ppplVar14 = local_40;
    lVar18 = 0;
    local_80 = param_2;
    local_60 = (char *)CONCAT44(local_60._4_4_,(int)local_50 + -0x3f);
    pcVar17 = pcVar7;
    do {
      pcVar12 = local_80;
      if ((char)uVar5 == '[') {
        if (DAT_0060f4d8 == 0) {
          local_88 = pcVar7;
          *(undefined *)((long)ppcVar15 + -8) = 0x406abe;
          pcVar7 = getenv("POSIXLY_CORRECT");
          DAT_0060f4d8 = -(uint)(pcVar7 == (char *)0x0) | 1;
          pcVar7 = local_88;
        }
        cVar4 = pcVar17[1];
        if ((cVar4 == '!') || (((int)DAT_0060f4d8 < 0 && (cVar4 == '^')))) {
          pcVar12 = pcVar17 + 2;
          cVar4 = pcVar17[2];
        }
        else {
          pcVar12 = pcVar17 + 1;
        }
        if (cVar4 != ']') goto LAB_00406a1b;
        cVar4 = pcVar12[1];
        pcVar17 = pcVar12 + 1;
        pcVar12 = pcVar12 + 2;
        while (cVar4 != ']') {
          if (cVar4 == '\0') {
            return 0xffffffff;
          }
          cVar4 = *pcVar12;
LAB_00406a1b:
          pcVar17 = pcVar12;
          pcVar12 = pcVar12 + 1;
        }
        uVar5 = (uint)(byte)pcVar17[1];
      }
      else {
        while( true ) {
          if (0x1f < (byte)(uVar5 - 0x21)) break;
          if (((0xc0000601UL >> ((ulong)(uVar5 - 0x21) & 0x3f) & 1) == 0) || (pcVar17[1] != '(')) {
            if ((char)uVar5 != ')') goto LAB_00406955;
            if (lVar18 != 0) {
              bVar3 = pcVar17[1];
              uVar5 = (uint)bVar3;
              lVar18 = lVar18 + -1;
              pcVar17 = pcVar17 + 1;
              goto joined_r0x0040699a;
            }
            sVar8 = ((long)pcVar17 - (long)pcVar7) + 1;
            if ((int)local_50 - 0x3fU < 2) {
              sVar8 = (size_t)local_58;
            }
            uVar9 = sVar8 + 0xf & 0xfffffffffffffff8;
            if (0x1f37 < uVar9 - 8) {
              return 0xffffffff;
            }
            lVar18 = -(uVar9 + 0x17 & 0xfffffffffffffff0);
            pplVar10 = (long **)((ulong)((long)ppcVar15 + lVar18 + 0xf) & 0xfffffffffffffff0);
            *(undefined *)((long)ppcVar15 + lVar18 + -8) = 0x406b2e;
            puVar11 = (undefined *)mempcpy(pplVar10 + 1,pcVar7,(long)pcVar17 - (long)pcVar7);
            uVar2 = local_68;
            uVar9 = local_70;
            uVar5 = local_74;
            *ppplVar14 = pplVar10;
            *puVar11 = 0;
            *pplVar10 = (long *)0x0;
            local_58 = local_40[0];
            if (local_40[0] == (long **)0x0) {
                    /* WARNING: Subroutine does not return */
              *(undefined *)((long)ppcVar15 + lVar18 + -8) = 0x406e13;
              __assert_fail("list != NULL","lib/fnmatch_loop.c",0x454,"ext_match");
            }
            if (pcVar17[-1] != ')') {
                    /* WARNING: Subroutine does not return */
              *(undefined *)((long)ppcVar15 + lVar18 + -8) = 0x406dfa;
              __assert_fail("p[-1] == L_(\')\')","lib/fnmatch_loop.c",0x455,"ext_match");
            }
            switch((int)local_50) {
            case 0x21:
              if (local_70 < local_68) {
                return 1;
              }
              local_50 = pcVar17;
              pplVar10 = local_58;
              uVar9 = local_68;
              uVar5 = local_74 & 0xfffffffb;
              if ((local_74 & 1) != 0) {
                uVar5 = local_74;
              }
              goto LAB_00406cb8;
            default:
                    /* WARNING: Subroutine does not return */
              *(undefined *)((long)ppcVar15 + lVar18 + -8) = 0x406de1;
              __assert_fail("! \"Invalid extended matching operator\"","lib/fnmatch_loop.c",0x4ad,
                            "ext_match");
            case 0x2a:
              *(undefined *)((long)ppcVar15 + lVar18 + -8) = 0x406b8a;
              iVar6 = FUN_00406e20(pcVar17,uVar2,uVar9,param_5,uVar5);
              if (iVar6 == 0) {
                return 0;
              }
            case 0x2b:
              pplVar10 = local_58;
              uVar2 = local_68;
              uVar9 = local_70;
              local_60 = pcVar17;
              uVar5 = local_74 & 0xfffffffb;
              if ((local_74 & 1) != 0) {
                uVar5 = local_74;
              }
              local_58 = (long **)((ulong)local_58 & 0xffffffff00000000 |
                                  (ulong)local_74 & 0xffffffff00000001);
              local_80 = pcVar12 + -1;
              do {
                if (uVar2 <= uVar9) {
                  local_50 = (char *)((ulong)local_50 & 0xffffffff00000000 | (ulong)local_75);
                  uVar16 = uVar2;
                  do {
                    uVar13 = (ulong)local_50 & 0xffffffff;
                    *(undefined *)((long)ppcVar15 + lVar18 + -8) = 0x406c58;
                    iVar6 = FUN_00406e20(pplVar10 + 1,uVar2,uVar16,uVar13,uVar5);
                    pcVar7 = local_60;
                    if (iVar6 == 0) {
                      if (uVar2 == uVar16) {
                        uVar13 = (ulong)local_50 & 0xffffffff;
                        *(undefined *)((long)ppcVar15 + lVar18 + -8) = 0x406c7a;
                        iVar6 = FUN_00406e20(pcVar7,uVar2,uVar9,uVar13,uVar5);
                        pplVar10 = local_40[0];
                      }
                      else {
                        bVar20 = false;
                        if (*(char *)(uVar16 - 1) == '/') {
                          bVar20 = (local_74 & 5) == 5;
                        }
                        *(undefined *)((long)ppcVar15 + lVar18 + -8) = 0x406c01;
                        iVar6 = FUN_00406e20(pcVar7,uVar16,uVar9,bVar20,uVar5);
                        pcVar7 = local_80;
                        if (iVar6 == 0) {
                          return 0;
                        }
                        bVar20 = false;
                        if (*(char *)(uVar16 - 1) == '/') {
                          bVar20 = (local_74 & 5) == 5;
                        }
                        *(undefined *)((long)ppcVar15 + lVar18 + -8) = 0x406c2e;
                        iVar6 = FUN_00406e20(pcVar7,uVar16,uVar9,bVar20,uVar5);
                        pplVar10 = local_40[0];
                      }
                      local_40[0] = pplVar10;
                      if (iVar6 == 0) {
                        return 0;
                      }
                    }
                    uVar16 = uVar16 + 1;
                  } while (uVar16 <= uVar9);
                }
                pplVar10 = (long **)*pplVar10;
                local_40[0] = pplVar10;
                if (pplVar10 == (long **)0x0) {
                  return 1;
                }
              } while( true );
            case 0x3f:
              *(undefined *)((long)ppcVar15 + lVar18 + -8) = 0x406d97;
              iVar6 = FUN_00406e20(pcVar17,uVar2,uVar9,param_5,uVar5);
              if (iVar6 == 0) {
                return 0;
              }
              break;
            INVALID_JUMP; //case 0x40:
            }
            uVar9 = local_70;
            pplVar10 = local_58;
            uVar5 = local_74 & 0xfffffffb;
            if ((local_74 & 1) != 0) {
              uVar5 = local_74;
            }
            do {
              *(undefined *)((long)ppcVar15 + lVar18 + -8) = 0x406d5c;
              pcVar7 = strcat((char *)(pplVar10 + 1),pcVar17);
              uVar2 = local_68;
              *(undefined *)((long)ppcVar15 + lVar18 + -8) = 0x406d71;
              iVar6 = FUN_00406e20(pcVar7,uVar2,uVar9,param_5,uVar5);
              if (iVar6 == 0) {
                return 0;
              }
              local_40[0] = (long **)*pplVar10;
              pplVar10 = local_40[0];
            } while (local_40[0] != (long **)0x0);
            return 1;
          }
          lVar18 = lVar18 + 1;
          pcVar17 = pcVar17 + 1;
          uVar5 = 0x28;
        }
        if (((char)uVar5 == '|') && (lVar18 == 0)) {
          sVar8 = ((long)pcVar17 - (long)pcVar7) + 1;
          if ((uint)local_60 < 2) {
            sVar8 = (size_t)local_58;
          }
          uVar9 = sVar8 + 0xf & 0xfffffffffffffff8;
          if (0x1f37 < uVar9 - 8) {
            return 0xffffffff;
          }
          lVar1 = -(uVar9 + 0x17 & 0xfffffffffffffff0);
          ppplVar19 = (long ***)((ulong)((long)ppcVar15 + lVar1 + 0xf) & 0xfffffffffffffff0);
          *(undefined *)((long)ppcVar15 + lVar1 + -8) = 0x406a89;
          puVar11 = (undefined *)mempcpy(ppplVar19 + 1,pcVar7,(long)pcVar17 - (long)pcVar7);
          pcVar7 = pcVar17 + 1;
          *puVar11 = 0;
          uVar5 = (uint)(byte)pcVar17[1];
          *ppplVar19 = (long **)0x0;
          *ppplVar14 = (long **)ppplVar19;
          lVar18 = 0;
          ppplVar14 = ppplVar19;
          ppcVar15 = (char **)((long)ppcVar15 + lVar1);
          pcVar12 = pcVar7;
        }
        else {
LAB_00406955:
          uVar5 = (uint)(byte)pcVar17[1];
          pcVar12 = pcVar17 + 1;
        }
      }
      bVar3 = (byte)uVar5;
      pcVar17 = pcVar12;
INVALID_JUMP; //joined_r0x0040699a:
    } while (bVar3 != 0);
  }
  return 0xffffffff;
LAB_00406cb8:
  *(undefined *)((long)ppcVar15 + lVar18 + -8) = 0x406ccd;
  iVar6 = FUN_00406e20(pplVar10 + 1,uVar2,uVar9,param_5,uVar5);
  pcVar7 = local_50;
  uVar16 = local_70;
  if (iVar6 != 0) {
    pplVar10 = (long **)*pplVar10;
    if (pplVar10 != (long **)0x0) goto LAB_00406cb8;
    bVar3 = param_5;
    if ((uVar2 != uVar9) && (bVar3 = 0, *(char *)(uVar9 - 1) == '/')) {
      bVar3 = (local_74 & 5) == 5;
    }
    *(undefined *)((long)ppcVar15 + lVar18 + -8) = 0x406d0c;
    iVar6 = FUN_00406e20(pcVar7,uVar9,uVar16,bVar3,uVar5);
    if (iVar6 == 0) {
      return 0;
    }
  }
  uVar9 = uVar9 + 1;
  pplVar10 = local_58;
  if (local_70 < uVar9) {
    return 1;
  }
  goto LAB_00406cb8;
}


/* WARNING: Type propagation algorithm not settling */

ulong FUN_00406e20(byte *param_1,byte *param_2,byte *param_3,byte param_4,uint param_5)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  wint_t __wc;
  int iVar5;
  __int32_t **pp_Var6;
  byte *pbVar7;
  char *pcVar8;
  long lVar9;
  wctype_t __desc;
  byte bVar10;
  byte bVar11;
  __int32_t *p_Var12;
  long lVar13;
  byte *pbVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  uint uVar18;
  byte *pbVar19;
  char cVar20;
  byte bVar21;
  ulong uVar22;
  byte *local_168;
  uint local_158;
  byte local_148 [280];
  
  bVar10 = *param_1;
  if (bVar10 != 0) {
    uVar16 = param_5 & 2;
    uVar15 = param_5 & 0x10;
    local_168 = param_1 + 1;
    do {
      uVar22 = (ulong)bVar10;
      if (uVar15 != 0) {
        pp_Var6 = __ctype_tolower_loc();
        uVar22 = (ulong)*(byte *)(*pp_Var6 + uVar22);
      }
      uVar4 = (uint)uVar22;
      switch(uVar4 - 0x21 & 0xff) {
      case 0:
      case 10:
      case 0x1f:
        if ((((param_5 & 0x20) != 0) && (param_1[1] == 0x28)) &&
           (uVar22 = FUN_004068d0(uVar22,local_168,param_2,param_3,param_4,param_5),
           (int)uVar22 != -1)) {
          return uVar22;
        }
      default:
switchD_00406e90_caseD_1:
        if (param_2 == param_3) {
          return 1;
        }
LAB_004070da:
        bVar10 = *param_2;
        uVar18 = (uint)bVar10;
        if (uVar15 != 0) {
          pp_Var6 = __ctype_tolower_loc();
          uVar18 = (*pp_Var6)[bVar10];
        }
        if (uVar18 != uVar4) {
          return 1;
        }
LAB_004070f6:
        param_4 = false;
        break;
      case 9:
        uVar4 = param_5 & 0x20;
        if (((uVar4 != 0) && (param_1[1] == 0x28)) &&
           (uVar22 = FUN_004068d0(0x2a,local_168,param_2,param_3,param_4,param_5), (int)uVar22 != -1
           )) {
          return uVar22;
        }
        if (((param_2 != param_3) && (*param_2 == 0x2e)) && (param_4 != 0)) {
          return 1;
        }
        bVar10 = param_1[1];
        param_1 = param_1 + 2;
        if ((bVar10 == 0x2a) || (bVar10 == 0x3f)) {
          do {
            if ((((*param_1 != 0x28) || (uVar4 == 0)) ||
                (pbVar19 = (byte *)FUN_00405760(param_1), pbVar19 == param_1)) &&
               (pbVar19 = param_1, bVar10 == 0x3f)) {
              if (param_2 == param_3) {
                return 1;
              }
              if ((*param_2 == 0x2f) && ((param_5 & 1) != 0)) {
                return 1;
              }
              param_2 = param_2 + 1;
            }
            bVar10 = *pbVar19;
            param_1 = pbVar19 + 1;
          } while ((bVar10 == 0x3f) || (bVar10 == 0x2a));
        }
        if (bVar10 == 0) {
          if ((param_5 & 1) == 0) {
            return 0;
          }
          if ((param_5 & 8) != 0) {
            return 0;
          }
          lVar9 = FUN_00408aa0(param_2,0x2f,(long)param_3 - (long)param_2);
          return (ulong)(lVar9 != 0);
        }
        uVar18 = (uint)bVar10;
        uVar2 = param_5 & 1;
        pbVar19 = (byte *)FUN_00408aa0(param_2,-(param_5 & 1) & 0x2f,(long)param_3 - (long)param_2);
        if (pbVar19 == (byte *)0x0) {
          pbVar19 = param_3;
        }
        if ((bVar10 == 0x5b) ||
           ((((uVar4 != 0 && ((byte)(uVar18 - 0x21) < 0x20)) &&
             ((0x80000401UL >> ((ulong)(uVar18 - 0x21) & 0x3f) & 1) != 0)) && (*param_1 == 0x28))))
        {
          uVar15 = param_5 & 0xfffffffb;
          if (uVar2 != 0) {
            uVar15 = param_5;
          }
          if (pbVar19 <= param_2) {
            return 1;
          }
          do {
            iVar5 = FUN_00406e20(param_1 + -1,param_2,param_3,param_4,uVar15);
            if (iVar5 == 0) {
              return 0;
            }
            param_2 = param_2 + 1;
            param_4 = 0;
          } while (pbVar19 != param_2);
          return 1;
        }
        if (bVar10 == 0x2f) {
          if (uVar2 != 0) {
            if (param_3 <= param_2) {
              return 1;
            }
            do {
              if (*param_2 == 0x2f) {
                iVar5 = FUN_00406e20(param_1,param_2 + 1,param_3,param_5 >> 2 & 1);
                return (ulong)(iVar5 != 0);
              }
              param_2 = param_2 + 1;
            } while (param_3 != param_2);
            return 1;
          }
        }
        else {
          local_158 = param_5;
          if (uVar2 != 0) goto LAB_00407291;
        }
        local_158 = param_5 & 0xfffffffb;
LAB_00407291:
        if ((bVar10 == 0x5c) && (uVar16 == 0)) {
          uVar18 = (uint)*param_1;
        }
        if (uVar15 != 0) {
          pp_Var6 = __ctype_tolower_loc();
          uVar18 = (uint)*(byte *)(*pp_Var6 + (byte)uVar18);
        }
        if (param_2 < pbVar19) {
          do {
            bVar10 = *param_2;
            uVar16 = (uint)bVar10;
            if (uVar15 != 0) {
              pp_Var6 = __ctype_tolower_loc();
              uVar16 = (*pp_Var6)[bVar10];
            }
            if ((uVar16 == uVar18) &&
               (iVar5 = FUN_00406e20(param_1 + -1,param_2,param_3,param_4,local_158), iVar5 == 0)) {
              return 0;
            }
            param_2 = param_2 + 1;
            param_4 = 0;
          } while (pbVar19 != param_2);
        }
        return 1;
      case 0xe:
        if ((param_5 & 5) != 5) goto switchD_00406e90_caseD_1;
        if (param_2 == param_3) {
          return 1;
        }
        if (*param_2 != 0x2f) {
          return 1;
        }
        param_4 = true;
        break;
      case 0x1e:
        if ((((param_5 & 0x20) != 0) && (param_1[1] == 0x28)) &&
           (uVar22 = FUN_004068d0(0x3f,local_168,param_2,param_3,param_4,param_5), (int)uVar22 != -1
           )) {
          return uVar22;
        }
        if (param_2 == param_3) {
          return 1;
        }
        if (*param_2 != 0x2f) {
          param_4 = param_4 & *param_2 == 0x2e;
          if ((bool)param_4 != false) {
            return 1;
          }
          break;
        }
        if ((param_5 & 1) != 0) {
          return 1;
        }
        goto LAB_004070f6;
      case 0x3a:
        if (DAT_0060f4d8 == 0) {
          pcVar8 = getenv("POSIXLY_CORRECT");
          DAT_0060f4d8 = -(uint)(pcVar8 == (char *)0x0) | 1;
        }
        if (param_2 == param_3) {
          return 1;
        }
        bVar10 = *param_2;
        if (bVar10 == 0x2e) {
          if (param_4 != 0) {
            return 1;
          }
        }
        else if ((bVar10 == 0x2f) && ((param_5 & 1) != 0)) {
          return 1;
        }
        if ((param_1[1] == 0x21) || (((int)DAT_0060f4d8 < 0 && (param_1[1] == 0x5e)))) {
          param_1 = param_1 + 2;
          bVar3 = true;
        }
        else {
          bVar3 = false;
          param_1 = local_168;
        }
        if (uVar15 != 0) {
          pp_Var6 = __ctype_tolower_loc();
          bVar10 = *(byte *)(*pp_Var6 + bVar10);
        }
        uVar22 = (ulong)*param_1;
        pbVar19 = param_1 + 1;
LAB_00406f9a:
        do {
          cVar20 = (char)uVar22;
          if ((uVar16 == 0) && (cVar20 == '\\')) {
            uVar22 = (ulong)*pbVar19;
            if (*pbVar19 == 0) {
              return 1;
            }
            if (uVar15 != 0) {
              pp_Var6 = __ctype_tolower_loc();
              uVar22 = (ulong)*(byte *)(*pp_Var6 + uVar22);
            }
            uVar17 = (ulong)pbVar19[1];
            pbVar19 = pbVar19 + 1;
            goto LAB_00406fdb;
          }
          if (cVar20 == '[') {
            uVar17 = (ulong)*pbVar19;
            if (*pbVar19 != 0x3a) goto LAB_00406fc0;
            lVar9 = 0;
            pbVar7 = pbVar19;
            while( true ) {
              bVar21 = pbVar7[1];
              if (bVar21 == 0x3a) break;
              if (0x18 < (byte)(bVar21 + 0x9f)) goto LAB_004073f8;
              lVar13 = lVar9 + 1;
              local_148[lVar9] = bVar21;
              lVar9 = lVar13;
              pbVar7 = pbVar7 + 1;
              if (lVar13 == 0x100) {
                return 1;
              }
            }
            if (pbVar7[2] != 0x5d) {
LAB_004073f8:
              pbVar14 = pbVar19 + 1;
              if (bVar10 == 0x5b) {
LAB_00407790:
                uVar17 = (ulong)*pbVar19;
                goto LAB_00407047;
              }
              uVar22 = 0x3a;
              pbVar19 = pbVar14;
              goto LAB_00406f9a;
            }
            local_148[lVar9] = 0;
            __desc = wctype((char *)local_148);
            if (__desc == 0) {
              return 1;
            }
            __wc = btowc((uint)*param_2);
            iVar5 = iswctype(__wc,__desc);
            if (iVar5 != 0) {
              pbVar19 = pbVar7 + 3;
              uVar17 = (ulong)pbVar7[3];
              pbVar14 = pbVar7 + 4;
              goto LAB_00407047;
            }
            pbVar14 = pbVar7 + 4;
            uVar22 = (ulong)pbVar7[3];
          }
          else {
            if (cVar20 == '\0') {
              uVar4 = 0x5b;
              goto LAB_004070da;
            }
            uVar17 = (ulong)*pbVar19;
LAB_00406fc0:
            while( true ) {
              if (uVar15 != 0) {
                pp_Var6 = __ctype_tolower_loc();
                uVar22 = (ulong)*(byte *)(*pp_Var6 + uVar22);
              }
LAB_00406fdb:
              pbVar14 = pbVar19 + 1;
              bVar21 = (byte)uVar22;
              if ((char)uVar17 != '-') {
                uVar22 = uVar17;
                if (bVar10 == bVar21) goto LAB_00407790;
                goto LAB_00406f90;
              }
              bVar11 = pbVar19[1];
              if ((bVar11 != 0x5d) && (bVar11 != 0)) break;
              if (bVar10 == bVar21) goto LAB_00407047;
              if (bVar11 != 0x5d) break;
              uVar17 = 0x5d;
              uVar22 = 0x2d;
              pbVar19 = pbVar14;
            }
            pbVar7 = pbVar19 + 2;
            if ((uVar16 == 0) && (bVar11 == 0x5c)) {
              pbVar7 = pbVar19 + 3;
              bVar11 = pbVar19[2];
            }
            if (bVar11 == 0) {
              return 1;
            }
            bVar1 = *pbVar7;
            uVar17 = (ulong)bVar1;
            pbVar14 = pbVar7 + 1;
            uVar22 = (ulong)bVar1;
            if (((int)(char)bVar21 <= (int)(uint)bVar10) && (bVar10 <= bVar11)) {
LAB_00407043:
              do {
                pbVar14 = pbVar7 + 1;
                pbVar19 = pbVar7;
LAB_00407047:
                while( true ) {
                  bVar10 = (byte)uVar17;
                  if (bVar10 == 0) {
                    return 1;
                  }
                  param_4 = bVar10 == 0x5c && uVar16 == 0;
                  if ((bool)param_4) break;
                  local_168 = pbVar14;
                  if (bVar10 == 0x5b) {
                    bVar10 = pbVar19[1];
                    uVar17 = (ulong)bVar10;
                    pbVar7 = pbVar14;
                    if (bVar10 == 0x3a) {
                      pbVar14 = pbVar19 + 2;
                      bVar10 = pbVar19[2];
                      while (uVar17 = (ulong)bVar10, bVar10 != 0x3a) {
                        if (0x18 < (byte)(bVar10 + 0x9f)) {
                          uVar17 = 0x3a;
                          goto LAB_00407043;
                        }
                        pbVar14 = pbVar14 + 1;
                        bVar10 = *pbVar14;
                        if (pbVar19 + 0x101 == pbVar14) {
                          return 1;
                        }
                      }
                      if (pbVar14[1] != 0x5d) goto LAB_00407043;
                      local_168 = pbVar14 + 3;
                      bVar10 = pbVar14[2];
                    }
                    else if (bVar10 == 0x3d) {
                      if (pbVar19[2] == 0) {
                        return 1;
                      }
                      if (pbVar19[3] != 0x3d) {
                        return 1;
                      }
                      if (pbVar19[4] != 0x5d) {
                        return 1;
                      }
                      local_168 = pbVar19 + 6;
                      bVar10 = pbVar19[5];
                    }
                    else {
                      pbVar19 = pbVar19 + 2;
                      if (bVar10 != 0x2e) goto LAB_00407043;
                      do {
                        pbVar7 = pbVar19;
                        if (pbVar7[1] == 0) {
                          return 1;
                        }
                        pbVar19 = pbVar7 + 1;
                      } while ((pbVar7[1] != 0x2e) || (pbVar7[2] != 0x5d));
                      local_168 = pbVar7 + 4;
                      bVar10 = pbVar7[3];
                    }
                  }
                  if (bVar10 == 0x5d) {
                    if (bVar3) {
                      return 1;
                    }
                    goto LAB_004070fe;
                  }
                  uVar17 = (ulong)*local_168;
                  pbVar14 = local_168 + 1;
                  pbVar19 = local_168;
                }
                if (pbVar19[1] == 0) {
                  return 1;
                }
                uVar17 = (ulong)pbVar19[2];
                pbVar7 = pbVar19 + 2;
              } while( true );
            }
          }
LAB_00406f90:
          pbVar19 = pbVar14;
        } while ((char)uVar22 != ']');
        local_168 = pbVar14;
        if (!bVar3) {
          return 1;
        }
        goto LAB_00406ee7;
      case 0x3b:
        if (uVar16 == 0) {
          bVar10 = param_1[1];
          local_168 = param_1 + 2;
          if (bVar10 == 0) {
            return 1;
          }
          if (uVar15 == 0) {
            if (param_2 == param_3) {
              return 1;
            }
            uVar4 = (uint)bVar10;
            goto LAB_00406ed6;
          }
          pp_Var6 = __ctype_tolower_loc();
          p_Var12 = *pp_Var6;
          if (param_2 == param_3) {
            return 1;
          }
          uVar4 = p_Var12[bVar10] & 0xff;
LAB_00407365:
          uVar18 = p_Var12[*param_2];
        }
        else {
          if (param_2 == param_3) {
            return 1;
          }
          if (uVar15 != 0) {
            pp_Var6 = __ctype_tolower_loc();
            p_Var12 = *pp_Var6;
            uVar4 = 0x5c;
            goto LAB_00407365;
          }
          uVar4 = 0x5c;
LAB_00406ed6:
          uVar18 = (uint)*param_2;
        }
        if (uVar18 != uVar4) {
          return 1;
        }
LAB_00406ee7:
        param_4 = false;
      }
LAB_004070fe:
      bVar10 = *local_168;
      param_2 = param_2 + 1;
      param_1 = local_168;
      local_168 = local_168 + 1;
    } while (bVar10 != 0);
  }
  if (param_3 == param_2) {
    return 0;
  }
  if ((param_5 & 8) == 0) {
    return 1;
  }
  return (ulong)(*param_2 != 0x2f);
}


ulong FUN_00407910(char *param_1,char *param_2,uint param_3)

{
  wchar_t *pwVar1;
  long lVar2;
  char *pcVar3;
  int iVar4;
  size_t sVar5;
  ulong uVar6;
  ulong __len;
  ulong uVar7;
  int *piVar8;
  wchar_t *pwVar9;
  undefined *puVar10;
  undefined uStack_70;
  undefined auStack_68 [8];
  wchar_t awStack_60 [2];
  char *local_58;
  char *local_50 [2];
  mbstate_t local_40 [2];
  
  puVar10 = auStack_68;
  uStack_70 = 0x407931;
  local_58 = param_2;
  local_50[0] = param_1;
  sVar5 = __ctype_get_mb_cur_max();
  if (sVar5 != 1) {
    local_40[0] = (mbstate_t)0x0;
    uStack_70 = 0x407989;
    sVar5 = mbsrtowcs((wchar_t *)0x0,local_50,0,local_40);
    uVar6 = sVar5 + 1;
    if (uVar6 != 0) {
      uStack_70 = 0x40799b;
      iVar4 = mbsinit(local_40);
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        uStack_70 = 0x407b48;
        __assert_fail("mbsinit (&ps)","lib/fnmatch.c",0x129,"gnu_fnmatch");
      }
      uStack_70 = 0x4079b4;
      sVar5 = mbsrtowcs((wchar_t *)0x0,&local_58,0,local_40);
      __len = sVar5 + 1;
      if (__len != 0) {
        uStack_70 = 0x4079ca;
        iVar4 = mbsinit(local_40);
        if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          uStack_70 = 0x407b2f;
          __assert_fail("mbsinit (&ps)","lib/fnmatch.c",0x12d,"gnu_fnmatch");
        }
        uVar7 = uVar6 + __len;
        if ((!CARRY8(uVar6,__len)) && (uVar7 < 0x4000000000000000)) {
          if (uVar7 < 2000) {
            lVar2 = -(uVar7 * 4 + 0x17 & 0xfffffffffffffff0);
            puVar10 = auStack_68 + lVar2;
            pwVar1 = (wchar_t *)((long)awStack_60 + lVar2);
            pwVar9 = pwVar1 + uVar6;
            *(undefined *)(auStack_68 + lVar2 + -8) = 0x407a30;
            mbsrtowcs(pwVar1,local_50,uVar6,local_40);
            *(undefined *)(auStack_68 + lVar2 + -8) = 0x407a39;
            iVar4 = mbsinit(local_40);
            if (iVar4 != 0) {
              *(undefined *)(auStack_68 + lVar2 + -8) = 0x407a54;
              mbsrtowcs(pwVar9,&local_58,__len,local_40);
              *(undefined *)(auStack_68 + lVar2 + -8) = 0x407a70;
              uVar6 = FUN_00405df0(pwVar1,pwVar9,pwVar9 + sVar5,param_3 >> 2 & 1,param_3);
              return uVar6;
            }
          }
          else {
            uStack_70 = 0x407a8f;
            pwVar9 = (wchar_t *)malloc(uVar7 * 4);
            if (pwVar9 == (wchar_t *)0x0) goto LAB_00407a75;
            pwVar1 = pwVar9 + uVar6;
            uStack_70 = 0x407aae;
            mbsrtowcs(pwVar9,local_50,uVar6,local_40);
            uStack_70 = 0x407ab7;
            iVar4 = mbsinit(local_40);
            if (iVar4 != 0) {
              uStack_70 = 0x407ace;
              mbsrtowcs(pwVar1,&local_58,__len,local_40);
              uStack_70 = 0x407aea;
              awStack_60[1] = FUN_00405df0(pwVar9,pwVar1,pwVar1 + sVar5,param_3 >> 2 & 1,param_3);
              uStack_70 = 0x407af5;
              free(pwVar9);
              return (ulong)(uint)awStack_60[1];
            }
          }
                    /* WARNING: Subroutine does not return */
          *(undefined *)(puVar10 + -8) = 0x407b16;
          __assert_fail("mbsinit (&ps)","lib/fnmatch.c",0x147,"gnu_fnmatch");
        }
LAB_00407a75:
        uStack_70 = 0x407a7a;
        piVar8 = __errno_location();
        *piVar8 = 0xc;
        return 0xffffffff;
      }
    }
  }
  pcVar3 = local_58;
  uStack_70 = 0x407943;
  sVar5 = strlen(local_58);
  uStack_70 = 0x40795f;
  uVar6 = FUN_00406e20(local_50[0],pcVar3,pcVar3 + sVar5,param_3 >> 2 & 1,param_3);
  return uVar6;
}


FILE * FUN_00407b50(char *param_1,char *param_2,FILE *param_3)

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


ulong FUN_00407bf0(FILE *param_1,__off_t param_2,int param_3)

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


void FUN_00407c50(long param_1,int *param_2)

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
      if (iVar3 <= iVar8) goto LAB_00407ccc;
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
      if (iVar9 <= iVar3) goto LAB_00407ccc;
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
LAB_00407ccc:
  param_2[0xc] = iVar2;
  param_2[0xb] = iVar1 + (iVar2 - iVar3);
  return;
}


int FUN_00407d30(int param_1,undefined *param_2,char *param_3,char **param_4,undefined *param_5,
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
      if ((iVar5 == 0) && (sVar7 = strlen(__s1_00), sVar7 == sVar15)) goto LAB_00407f50;
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
            if (local_70 == (char *)0x0) goto LAB_00407e90;
          }
          else if (local_70 == (char *)0x0) {
            local_70 = (char *)calloc((long)iVar5,1);
            if (local_70 == (char *)0x0) {
              bVar3 = true;
              goto LAB_00407e90;
            }
            bVar4 = true;
            local_70[(int)local_44] = '\x01';
          }
          local_70[lVar16] = '\x01';
        }
      }
LAB_00407e90:
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
LAB_00407f50:
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


uint FUN_00408350(uint param_1,undefined *param_2,char *param_3,long param_4,undefined param_5,
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
LAB_0040839a:
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
          goto LAB_0040849d;
        }
        pbVar8 = *(byte **)(param_7 + 8);
      }
      param_7[10] = 0;
    }
LAB_0040849d:
    param_7[6] = 1;
    cVar2 = *param_3;
LAB_004084a8:
    if (cVar2 == ':') {
      uVar3 = 0;
    }
    if (pbVar8 == (byte *)0x0) goto LAB_00408418;
LAB_004084bc:
    if (*pbVar8 == 0) goto LAB_00408418;
  }
  else {
    if (param_7[6] == 0) goto LAB_0040839a;
    cVar2 = *param_3;
    pbVar8 = *(byte **)(param_7 + 8);
    if ((cVar2 - 0x2bU & 0xfd) != 0) goto LAB_004084a8;
    pcVar4 = param_3 + 1;
    param_3 = param_3 + 1;
    if (*pcVar4 == ':') {
      uVar3 = 0;
    }
    if (pbVar8 != (byte *)0x0) goto LAB_004084bc;
LAB_00408418:
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
        FUN_00407c50(param_2,param_7);
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
LAB_00408586:
      if (uVar11 != param_1) {
        *param_7 = uVar11;
      }
      return 0xffffffff;
    }
    lVar6 = 3;
    pbVar8 = (byte *)param_2[(int)uVar11];
    pbVar9 = pbVar8;
    pbVar10 = &DAT_0040ca11;
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
          FUN_00407c50(param_2,param_7);
          uVar11 = param_7[0xb];
        }
      }
      param_7[0xc] = param_1;
      *param_7 = param_1;
      goto LAB_00408586;
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
        puVar15 = &DAT_0040ca11;
        goto LAB_004086e5;
      }
      if ((int)param_6 != 0) {
        if (pbVar8[2] == 0) {
          pcVar4 = strchr(param_3,(int)(char)bVar14);
          param_6 = param_6 & 0xffffffff;
          if (pcVar4 != (char *)0x0) goto LAB_00408690;
        }
        *(byte **)(param_7 + 8) = pbVar8 + 1;
        uVar11 = FUN_00407d30(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar3,
                              &DAT_0040ca12);
        if (uVar11 != 0xffffffff) {
          return uVar11;
        }
        pbVar8 = (byte *)param_2[(int)*param_7];
      }
    }
LAB_00408690:
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
  puVar15 = &DAT_0040ca30;
LAB_004086e5:
  uVar3 = FUN_00407d30(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar3,puVar15);
  return uVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408920(void)

{
  DAT_0060f4e0 = DAT_0060f2b8._4_4_;
  _DAT_0060f4e4 = (undefined)DAT_0060f2b8;
  FUN_00408350();
  DAT_0060f2b8._4_4_ = DAT_0060f4e0;
  _DAT_0060f520 = DAT_0060f4f0;
  _DAT_0060f2b4 = DAT_0060f4e8;
  return;
}


void FUN_00408980(void)

{
  FUN_00408920();
  return;
}


void FUN_004089a0(void)

{
  FUN_00408920();
  return;
}


void FUN_004089c0(void)

{
  FUN_00408350();
  return;
}


void FUN_004089e0(void)

{
  FUN_00408920();
  return;
}


void FUN_00408a00(void)

{
  FUN_00408350();
  return;
}


size_t FUN_00408a20(wchar_t *param_1,byte *param_2,size_t param_3,mbstate_t *param_4)

{
  char cVar1;
  size_t sVar2;
  wchar_t local_1c;
  
  if (param_2 == (byte *)0x0) {
    param_3 = 1;
    param_2 = (byte *)0x40ca2f;
  }
  else {
    if (param_3 == 0) {
      return 0xfffffffffffffffe;
    }
    if (param_1 != (wchar_t *)0x0) goto LAB_00408a44;
  }
  param_1 = &local_1c;
LAB_00408a44:
  sVar2 = mbrtowc(param_1,(char *)param_2,param_3,param_4);
  if ((0xfffffffffffffffd < sVar2) && (cVar1 = FUN_00408f40(0), cVar1 == '\0')) {
    sVar2 = 1;
    *param_1 = (uint)*param_2;
  }
  return sVar2;
}


ulong * FUN_00408aa0(ulong *param_1,char param_2,ulong param_3)

{
  char cVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  
  if (param_3 == 0) {
    return (ulong *)0x0;
  }
  if (((ulong)param_1 & 7) == 0) {
LAB_00408ae0:
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
      if (((ulong)param_1 & 7) == 0) goto LAB_00408ae0;
      cVar1 = *(char *)param_1;
    }
  }
  return param_1;
}


void FUN_00408bb0(void)

{
  undefined uVar1;
  
  uVar1 = dcgettext(0,"memory exhausted",5);
  __fprintf_chk(stderr,1,"%s\n",uVar1);
                    /* WARNING: Subroutine does not return */
  exit(DAT_0060f258);
}


void FUN_00408bf0(long param_1,undefined param_2)

{
  if ((*(byte *)(param_1 + 0x50) & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00408bfe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x38))(*(undefined *)(param_1 + 0x48));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00408c03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x38))(param_2);
  return;
}


void FUN_00408c10(long param_1,undefined param_2)

{
  if ((*(byte *)(param_1 + 0x50) & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00408c1e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x40))(*(undefined *)(param_1 + 0x48));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00408c23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x40))(param_2);
  return;
}


undefined FUN_00408c30(long *param_1,long param_2,long param_3,long param_4,long param_5)

{
  long *plVar1;
  undefined uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  
  if (param_3 == 0) {
    lVar5 = 0xf;
    param_3 = 0x10;
  }
  else {
    lVar5 = param_3 + -1;
  }
  param_1[6] = lVar5;
  if (param_2 == 0) {
    param_2 = 0xfe0;
  }
  *param_1 = param_2;
  plVar4 = param_1;
  plVar1 = (long *)FUN_00408bf0();
  param_1[1] = (long)plVar1;
  if (plVar1 != (long *)0x0) {
    uVar3 = -param_3 & (long)plVar1 + lVar5 + 0x10;
    lVar5 = *param_1;
    param_1[2] = uVar3;
    param_1[3] = uVar3;
    *plVar1 = lVar5 + (long)plVar1;
    param_1[4] = lVar5 + (long)plVar1;
    plVar1[1] = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xf9;
    return 1;
  }
  (*(code *)obstack_alloc_failed_handler)();
  *(byte *)(plVar4 + 10) = *(byte *)(plVar4 + 10) & 0xfe;
  plVar4[7] = param_4;
  plVar4[8] = param_5;
  uVar2 = FUN_00408c30();
  return uVar2;
}


void _obstack_begin(long param_1,undefined param_2,undefined param_3,undefined param_4,
                   undefined param_5)

{
  *(byte *)(param_1 + 0x50) = *(byte *)(param_1 + 0x50) & 0xfe;
  *(undefined *)(param_1 + 0x38) = param_4;
  *(undefined *)(param_1 + 0x40) = param_5;
  FUN_00408c30();
  return;
}


void _obstack_begin_1(long param_1,undefined param_2,undefined param_3,undefined param_4,
                     undefined param_5,undefined param_6)

{
  *(byte *)(param_1 + 0x50) = *(byte *)(param_1 + 0x50) | 1;
  *(undefined *)(param_1 + 0x38) = param_4;
  *(undefined *)(param_1 + 0x40) = param_5;
  *(undefined *)(param_1 + 0x48) = param_6;
  FUN_00408c30();
  return;
}


ulong * _obstack_newchunk(ulong **param_1,ulong param_2)

{
  ulong *puVar1;
  ulong **ppuVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong **ppuVar5;
  ulong __n;
  
  __n = (long)param_1[3] - (long)param_1[2];
  puVar1 = param_1[1];
  puVar4 = (ulong *)(param_2 + __n + (long)param_1[6]);
  puVar3 = (ulong *)((long)puVar4 + (__n >> 3) + 100);
  if (puVar4 <= *param_1) {
    puVar4 = *param_1;
  }
  if (puVar3 <= puVar4) {
    puVar3 = puVar4;
  }
  ppuVar5 = param_1;
  if ((CARRY8(param_2,__n) == false) && (CARRY8(param_2 + __n,(ulong)param_1[6]) == false)) {
    puVar4 = puVar3;
    ppuVar2 = (ulong **)FUN_00408bf0();
    if (ppuVar2 != (ulong **)0x0) {
      param_1[1] = (ulong *)ppuVar2;
      ppuVar2[1] = puVar1;
      param_1[4] = (ulong *)((long)ppuVar2 + (long)puVar3);
      *ppuVar2 = (ulong *)((long)ppuVar2 + (long)puVar3);
      puVar4 = (ulong *)((long)(ppuVar2 + 2) + (long)param_1[6] & ~(ulong)param_1[6]);
      puVar3 = (ulong *)memcpy(puVar4,param_1[2],__n);
      if ((*(byte *)(param_1 + 10) & 2) == 0) {
        puVar3 = (ulong *)(~(ulong)param_1[6] & (long)(puVar1 + 2) + (long)param_1[6]);
        if (param_1[2] == puVar3) {
          ppuVar2[1] = (ulong *)puVar1[1];
          puVar3 = (ulong *)FUN_00408c10(param_1,puVar1);
        }
      }
      param_1[2] = puVar4;
      param_1[3] = (ulong *)(__n + (long)puVar4);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfd;
      return puVar3;
    }
  }
  (*(code *)obstack_alloc_failed_handler)();
  puVar3 = ppuVar5[1];
  if (puVar3 != (ulong *)0x0) {
    while ((puVar4 <= puVar3 || ((ulong *)*puVar3 < puVar4))) {
      puVar3 = (ulong *)puVar3[1];
      if (puVar3 == (ulong *)0x0) {
        return (ulong *)0x0;
      }
    }
    return (ulong *)0x1;
  }
  return puVar3;
}


ulong * _obstack_allocated_p(long param_1,ulong *param_2)

{
  ulong *puVar1;
  
  puVar1 = *(ulong **)(param_1 + 8);
  if (puVar1 == (ulong *)0x0) {
    return puVar1;
  }
  while ((param_2 <= puVar1 || ((ulong *)*puVar1 < param_2))) {
    puVar1 = (ulong *)puVar1[1];
    if (puVar1 == (ulong *)0x0) {
      return (ulong *)0x0;
    }
  }
  return (ulong *)0x1;
}


void _obstack_free(long param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  
  puVar1 = *(ulong **)(param_1 + 8);
  while( true ) {
    if (puVar1 == (ulong *)0x0) {
      if (param_2 == (ulong *)0x0) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if ((puVar1 < param_2) && (puVar2 = (ulong *)*puVar1, param_2 <= puVar2)) break;
    puVar1 = (ulong *)puVar1[1];
    FUN_00408c10(param_1);
    *(byte *)(param_1 + 0x50) = *(byte *)(param_1 + 0x50) | 2;
  }
  *(ulong **)(param_1 + 0x18) = param_2;
  *(ulong **)(param_1 + 0x10) = param_2;
  *(ulong **)(param_1 + 0x20) = puVar2;
  *(ulong **)(param_1 + 8) = puVar1;
  return;
}


long _obstack_memory_used(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 8);
  lVar1 = 0;
  if (plVar3 == (long *)0x0) {
    return 0;
  }
  do {
    lVar2 = *plVar3 - (long)plVar3;
    plVar3 = (long *)plVar3[1];
    lVar1 = lVar1 + lVar2;
  } while (plVar3 != (long *)0x0);
  return lVar1;
}


ulong FUN_00408ee0(uint *param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  
  lVar2 = __fpending();
  uVar1 = *param_1;
  uVar3 = FUN_004055a0(param_1);
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


bool FUN_00408f40(int param_1)

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
    pbVar5 = &DAT_004097f2;
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

char * FUN_00408fa0(void)

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
  if (DAT_0060f518 != (char *)0x0) goto LAB_00408fda;
  pcVar7 = getenv("CHARSETALIASDIR");
  if ((pcVar7 == (char *)0x0) || (*pcVar7 == '\0')) {
    sVar6 = 0x73;
    sVar5 = 0x65;
    __n = 100;
    pcVar7 = 
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib"
    ;
LAB_004090c5:
    __file = (char *)malloc(sVar6);
    if (__file != (char *)0x0) {
      memcpy(__file,pcVar7,__n);
      __file[__n] = '/';
      goto LAB_004090e6;
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
        goto LAB_004090c5;
      }
      sVar6 = __n + 0xe;
    }
    __file = (char *)malloc(sVar6);
    if (__file != (char *)0x0) {
      memcpy(__file,pcVar7,__n);
      sVar5 = __n;
LAB_004090e6:
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
LAB_00409180:
          pbVar8 = (byte *)__stream->_IO_read_ptr;
          if (__stream->_IO_read_end <= pbVar8) goto LAB_0040930c;
          do {
            __stream->_IO_read_ptr = (char *)(pbVar8 + 1);
            uVar4 = (uint)*pbVar8;
            __ptr = pcVar7;
            while( true ) {
              pcVar7 = __ptr;
              if ((uVar4 - 9 < 2) || (uVar4 == 0x20)) goto LAB_00409180;
              if (uVar4 == 0x23) goto LAB_00409371;
              ungetc(uVar4,__stream);
              iVar2 = fscanf(__stream,"%50s %50s",&local_b8,&local_78);
              puVar13 = &local_b8;
              if (iVar2 < 2) goto LAB_0040931f;
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
                FUN_004055a0(__stream);
                goto LAB_00409124;
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
LAB_0040930c:
              uVar4 = __uflow(__stream);
              __ptr = pcVar7;
              if (uVar4 == 0xffffffff) goto LAB_0040931f;
            }
          } while( true );
        }
        close(iVar2);
      }
      goto LAB_0040911e;
    }
  }
  DAT_0060f518 = "";
LAB_00408fda:
  cVar1 = *DAT_0060f518;
  pcVar7 = DAT_0060f518;
  do {
    if (cVar1 == '\0') {
LAB_00409034:
      if (*__s1 == '\0') {
        __s1 = "ASCII";
      }
      return __s1;
    }
    iVar2 = strcmp(__s1,pcVar7);
    if ((iVar2 == 0) || ((cVar1 == '*' && (pcVar7[1] == '\0')))) {
      sVar6 = strlen(pcVar7);
      __s1 = pcVar7 + sVar6 + 1;
      goto LAB_00409034;
    }
    sVar6 = strlen(pcVar7);
    sVar5 = strlen(pcVar7 + sVar6 + 1);
    pcVar7 = pcVar7 + sVar6 + 1 + sVar5 + 1;
    cVar1 = *pcVar7;
  } while( true );
LAB_00409371:
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
  if (uVar4 == 0xffffffff) goto LAB_0040931f;
  goto LAB_00409180;
LAB_0040931f:
  FUN_004055a0(__stream);
  if (local_d0 == 0) {
LAB_0040911e:
    pcVar7 = "";
  }
  else {
    pcVar7[local_d0] = '\0';
  }
LAB_00409124:
  free(__file);
  DAT_0060f518 = pcVar7;
  goto LAB_00408fda;
}


/* WARNING: Removing unreachable block (ram,0x00409543) */
/* WARNING: Removing unreachable block (ram,0x00409548) */

void FUN_00409510(void)

{
  __DT_INIT();
  return;
}


void FUN_00409570(void)

{
  return;
}


void FUN_00409580(undefined param_1)

{
  __cxa_atexit(param_1,0,DAT_0060f248);
  return;
}


undefined FUN_00409598(undefined param_1,undefined param_2,undefined param_3)

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
  FUN_00402231();
  return;
}

