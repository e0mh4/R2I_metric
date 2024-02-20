
#include "decompile_ghidra.h"
#define __int64 long long
#define __int32 int
#define __int16 short
#define __int8 char

void switchD_00402dd0caseD_b(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401815(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_0040181a(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_0040181f(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401824(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void switchD_004048aacaseD_0(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


undefined FUN_00401830(int param_1,undefined *param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  FILE *pFVar5;
  undefined uVar6;
  int *piVar7;
  char *__s1;
  undefined uVar8;
  undefined uVar9;
  
  uVar9 = 0x4c;
  bVar1 = false;
  uVar8 = 0;
  FUN_00402be0(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils",
                 "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale"
                );
  textdomain("coreutils");
  FUN_00406cb0(FUN_00402b00);
  while (iVar2 = FUN_00406400(param_1,param_2,&DAT_00406dda,&PTR_s_decode_00407300,0), iVar2 != -1)
  {
    if (iVar2 == 100) {
      bVar1 = true;
    }
    else {
      if (iVar2 < 0x65) {
        if (iVar2 == -0x83) {
          FUN_00404c80(stdout,"base64","GNU coreutils",PTR_DAT_0060b1f0,"Simon Josefsson",0);
                    /* WARNING: Subroutine does not return */
          exit(0);
        }
        if (iVar2 == -0x82) {
                    /* WARNING: Subroutine does not return */
          FUN_004020a0(0);
        }
        goto LAB_00401ac3;
      }
      if (iVar2 == 0x69) {
        uVar8 = 1;
      }
      else {
        if (iVar2 != 0x77) goto LAB_00401ac3;
        dcgettext(0,"invalid wrap size",5);
        uVar9 = FUN_00405120(DAT_0060b440,0,0xffffffffffffffff,"");
      }
    }
  }
  lVar4 = (long)DAT_0060b25c;
  if (1 < param_1 - DAT_0060b25c) goto LAB_00401a95;
  if (DAT_0060b25c < param_1) {
    __s1 = (char *)param_2[lVar4];
    iVar2 = strcmp(__s1,"-");
    pFVar5 = stdin;
    if ((iVar2 != 0) && (pFVar5 = fopen(__s1,"rb"), pFVar5 == (FILE *)0x0)) {
      uVar6 = FUN_00404680(0,3,__s1);
      piVar7 = __errno_location();
      error(1,*piVar7,"%s",uVar6);
      goto LAB_004019d2;
    }
  }
  else {
LAB_004019d2:
    __s1 = "-";
    pFVar5 = stdin;
  }
  FUN_00402bb0(pFVar5,2);
  if (bVar1) {
    FUN_00401bb0(pFVar5,stdout,uVar8);
  }
  else {
    FUN_00401dd0(pFVar5,stdout,uVar9);
  }
  iVar2 = FUN_00405590(pFVar5);
  if (iVar2 != -1) {
    return 0;
  }
  uVar3 = strcmp(__s1,"-");
  param_2 = (undefined *)(ulong)uVar3;
  piVar7 = __errno_location();
  if (uVar3 == 0) {
    uVar9 = dcgettext(0,"closing standard input",5);
    error(1,*piVar7,uVar9);
  }
  uVar9 = FUN_00404680(0,3,__s1);
  lVar4 = error(1,*piVar7,"%s",uVar9);
LAB_00401a95:
  uVar9 = FUN_00404800(param_2[lVar4]);
  uVar6 = dcgettext(0,"extra operand %s",5);
  error(0,0,uVar6,uVar9);
LAB_00401ac3:
                    /* WARNING: Subroutine does not return */
  FUN_004020a0(1);
}


void FUN_00401ad0(undefined param_1,undefined param_2,undefined param_3)

{
  undefined unaff_retaddr;
  undefined auStack_8 [8];
  
  (*(code *)PTR___libc_start_main_0060aff0)
            (FUN_00401830,unaff_retaddr,&stack0x00000008,FUN_00406c40,FUN_00406ca0,param_3,auStack_8
            );
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* WARNING: Removing unreachable block (ram,0x00401b08) */
/* WARNING: Removing unreachable block (ram,0x00401b12) */

void FUN_00401afb(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00401b49) */

void FUN_00401b1a(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00401b86) */

void FUN_00401b51(void)

{
  if (DAT_0060b288 != '\0') {
    return;
  }
  FUN_00401afb();
  DAT_0060b288 = 1;
  return;
}


/* WARNING: Removing unreachable block (ram,0x00401b49) */

void thunk_FUN_00401b1a(void)

{
  return;
}


void FUN_00401bb0(FILE *param_1,FILE *param_2,char param_3)

{
  ulong __n;
  char cVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  size_t sVar6;
  int *piVar7;
  undefined uVar8;
  undefined uVar9;
  char *pcVar10;
  byte **ppbVar11;
  char *pcVar13;
  long lVar14;
  long extraout_RDX;
  uint uVar15;
  _IO_FILE *p_Var16;
  byte *pbVar17;
  FILE *pFVar18;
  byte *pbVar19;
  ulong __n_00;
  ulong uVar20;
  ulong unaff_R13;
  long unaff_R14;
  ulong unaff_R15;
  ulong uVar21;
  bool bVar22;
  bool bVar23;
  byte bVar24;
  byte *pbStack_13538;
  char *pcStack_13530;
  byte *apbStack_13528 [5];
  char *pcStack_13500;
  char *pcStack_134f8;
  char *pcStack_134f0;
  char *pcStack_134e8;
  char *pcStack_134e0;
  undefined uStack_134d8;
  undefined uStack_134d0;
  undefined uStack_134c8;
  long lStack_134c0;
  undefined uStack_134b8;
  long lStack_134a8;
  ulong uStack_134a0;
  ulong uStack_13498;
  undefined auStack_13490 [30720];
  undefined auStack_bc90 [40968];
  ulong uStack_1c88;
  ulong uStack_1c80;
  FILE *pFStack_1c78;
  ulong uStack_1c70;
  long lStack_1c68;
  ulong uStack_1c60;
  FILE *local_1c58;
  char local_1c49;
  size_t local_1c48;
  int local_1c40 [2];
  undefined local_1c38 [3072];
  char local_1038 [4104];
  byte **ppbVar12;
  
  bVar24 = 0;
  uStack_1c60 = 0x401bd6;
  local_1c58 = param_2;
  local_1c49 = param_3;
  FUN_004027c0(local_1c40);
LAB_00401be0:
  uStack_1c80 = 0;
LAB_00401c11:
  uStack_1c60 = 0x401c32;
  sVar6 = fread_unlocked(local_1038 + uStack_1c80,1,0x1000 - uStack_1c80,param_1);
  local_1c48 = sVar6;
  if (local_1c49 == '\0') goto LAB_00401be8;
  unaff_R15 = 0;
  do {
    if (sVar6 == 0) {
LAB_00401be8:
      uVar3 = param_1->_flags;
      uStack_1c80 = uStack_1c80 + sVar6;
    }
    else {
      do {
        if (sVar6 <= unaff_R15) goto LAB_00401be8;
        unaff_R14 = uStack_1c80 + unaff_R15;
        cVar1 = local_1038[unaff_R14];
        unaff_R13 = (ulong)(uint)(int)cVar1;
        uStack_1c60 = 0x401c64;
        cVar2 = FUN_004027a0();
        if ((cVar1 != '=') && (cVar2 == '\0')) goto LAB_00401cb0;
        unaff_R15 = unaff_R15 + 1;
      } while (sVar6 != 0);
      uVar3 = param_1->_flags;
    }
    if ((uVar3 & 0x20) == 0) break;
    uStack_1c60 = 0x401c97;
    sVar6 = dcgettext(0,"read error",5);
    uStack_1c60 = 0x401c9f;
    piVar7 = __errno_location();
    uStack_1c60 = 0x401cb0;
    error(1,*piVar7,sVar6);
LAB_00401cb0:
    sVar6 = sVar6 - 1;
    uStack_1c60 = 0x401cd8;
    local_1c48 = sVar6;
    memmove(local_1038 + unaff_R14,local_1038 + unaff_R14 + 1,sVar6 - unaff_R15);
  } while( true );
  if ((0xfff < uStack_1c80) || ((uVar3 & 0x10) != 0)) goto LAB_00401ce0;
  goto LAB_00401c11;
LAB_00401ce0:
  uStack_1c88 = 0;
  do {
    uVar15 = (uint)uStack_1c88;
    uVar21 = uStack_1c80;
    if ((uVar3 & 0x10) == 0) {
      if (uVar15 != 0) goto LAB_00401be0;
    }
    else {
      if (1 < uVar15) {
        return;
      }
      if (uVar15 == 1) {
        if (local_1c40[0] == 0) {
          return;
        }
        uVar21 = 0;
      }
    }
    local_1c48 = 0xc00;
    uStack_1c60 = 0x401d18;
    uVar3 = FUN_004027d0(local_1c40,local_1038,uVar21,local_1c38,&local_1c48);
    unaff_R15 = (ulong)uVar3;
    uStack_1c60 = 0x401d33;
    sVar6 = fwrite_unlocked(local_1c38,1,local_1c48,local_1c58);
    if (sVar6 < local_1c48) {
      uStack_1c60 = 0x401d89;
      uStack_1c88 = dcgettext(0,"write error",5);
      uStack_1c60 = 0x401d91;
      piVar7 = __errno_location();
      uStack_1c60 = 0x401da2;
      error(1,*piVar7,uStack_1c88);
LAB_00401da2:
      uStack_1c60 = 0x401db3;
      uVar8 = dcgettext(0,"invalid input",5);
      p_Var16 = (_IO_FILE *)0x0;
      pFVar18 = (FILE *)0x1;
      uStack_1c60 = 0x401dc4;
      error(1,0,uVar8);
      lStack_134c0 = 0;
      lStack_134a8 = extraout_RDX;
      pFStack_1c78 = param_1;
      uStack_1c70 = unaff_R13;
      lStack_1c68 = unaff_R14;
      uStack_1c60 = unaff_R15;
      break;
    }
    if ((char)uVar3 == '\0') goto LAB_00401da2;
    uVar3 = param_1->_flags;
    uStack_1c88 = (ulong)(uVar15 + 1);
  } while( true );
  do {
    uVar21 = 0;
    do {
      uStack_134b8 = 0x401e25;
      sVar6 = fread_unlocked(auStack_13490 + uVar21,1,0x7800 - uVar21,pFVar18);
      uVar21 = uVar21 + sVar6;
      uVar3 = pFVar18->_flags;
      if ((uVar3 & 0x30) != 0) {
        if (uVar21 == 0) goto LAB_00401e33;
        break;
      }
    } while (uVar21 < 0x7800);
    __n = ((uVar21 + 2) / 3) * 4;
    uStack_134b8 = 0x401e94;
    FUN_00402510(auStack_13490,uVar21,auStack_bc90,__n);
    if (lStack_134a8 == 0) {
      uStack_134b8 = 0x401eb8;
      sVar6 = fwrite_unlocked(auStack_bc90,1,__n,stdout);
      if (sVar6 <= __n && __n - sVar6 != 0) goto LAB_00402043;
    }
    else {
      uVar20 = 0;
      if (__n != 0) {
        do {
          __n_00 = lStack_134a8 - lStack_134c0;
          if (__n - uVar20 < (ulong)(lStack_134a8 - lStack_134c0)) {
            __n_00 = __n - uVar20;
          }
          if (__n_00 == 0) {
            pcVar10 = p_Var16->_IO_write_ptr;
            if (pcVar10 < p_Var16->_IO_write_end) {
              lStack_134c0 = 0;
              p_Var16->_IO_write_ptr = pcVar10 + 1;
              *pcVar10 = '\n';
            }
            else {
              uStack_134b8 = 0x401f82;
              uStack_134a0 = uVar20;
              iVar4 = __overflow(p_Var16,10);
              if (iVar4 == -1) goto LAB_00402019;
              lStack_134c0 = 0;
              uVar20 = uStack_134a0;
            }
          }
          else {
            uStack_134b8 = 0x401f50;
            uStack_134a0 = __n_00;
            uStack_13498 = uVar20;
            sVar6 = fwrite_unlocked(auStack_bc90 + uVar20,1,__n_00,stdout);
            if (sVar6 < uStack_134a0) goto LAB_00401fef;
            lStack_134c0 = lStack_134c0 + uStack_134a0;
            uVar20 = uStack_13498 + uStack_134a0;
          }
        } while (uVar20 <= __n && __n - uVar20 != 0);
      }
    }
    uVar3 = pFVar18->_flags;
  } while (((uVar3 & 0x30) == 0) && (uVar21 == 0x7800));
LAB_00401e33:
  if ((lStack_134a8 == 0) || (lStack_134c0 == 0)) {
LAB_00401e44:
    if ((uVar3 & 0x20) == 0) {
      return;
    }
  }
  else {
    pcVar10 = p_Var16->_IO_write_ptr;
    if (pcVar10 < p_Var16->_IO_write_end) {
      p_Var16->_IO_write_ptr = pcVar10 + 1;
      *pcVar10 = '\n';
LAB_00401fac:
      uVar3 = pFVar18->_flags;
      goto LAB_00401e44;
    }
    uStack_134b8 = 0x401fc0;
    iVar4 = __overflow(p_Var16,10);
    if (iVar4 != -1) goto LAB_00401fac;
    uStack_134b8 = 0x401fd6;
    uVar8 = dcgettext(0,"write error",5);
    uStack_134b8 = 0x401fde;
    piVar7 = __errno_location();
    uStack_134b8 = 0x401fef;
    error(1,*piVar7,uVar8);
LAB_00401fef:
    uStack_134b8 = 0x402000;
    uVar8 = dcgettext(0,"write error",5);
    uStack_134b8 = 0x402008;
    piVar7 = __errno_location();
    uStack_134b8 = 0x402019;
    error(1,*piVar7,uVar8);
LAB_00402019:
    uStack_134b8 = 0x40202a;
    uVar8 = dcgettext(0,"write error",5);
    uStack_134b8 = 0x402032;
    piVar7 = __errno_location();
    uStack_134b8 = 0x402043;
    error(1,*piVar7,uVar8);
LAB_00402043:
    uStack_134b8 = 0x402054;
    uVar8 = dcgettext(0,"write error",5);
    uStack_134b8 = 0x40205c;
    piVar7 = __errno_location();
    uStack_134b8 = 0x40206d;
    error(1,*piVar7,uVar8);
  }
  uStack_134b8 = 0x40207e;
  uStack_134c8 = dcgettext(0,"read error",5);
  uStack_134b8 = 0x402086;
  piVar7 = __errno_location();
  iVar4 = 1;
  uStack_134b8 = 0x402097;
  error(1,*piVar7,uStack_134c8);
  uVar8 = DAT_0060b2a8;
  uStack_134b8 = 0x7800;
  if (iVar4 != 0) {
    uVar9 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(stderr,1,uVar9,uVar8);
    goto LAB_004020df;
  }
  uVar9 = dcgettext(0,
                    "Usage: %s [OPTION]... [FILE]\nBase%d encode or decode FILE, or standard input, to standard output.\n"
                    ,5);
  __printf_chk(1,uVar9,uVar8,0x40);
  pFVar18 = stdout;
  pcVar10 = (char *)dcgettext(0,"\nWith no FILE, or when FILE is -, read standard input.\n",5);
  fputs_unlocked(pcVar10,pFVar18);
  pFVar18 = stdout;
  pcVar10 = (char *)dcgettext(0,
                              "\nMandatory arguments to long options are mandatory for short options too.\n"
                              ,5);
  fputs_unlocked(pcVar10,pFVar18);
  pFVar18 = stdout;
  pcVar10 = (char *)dcgettext(0,
                              "  -d, --decode          decode data\n  -i, --ignore-garbage  when decoding, ignore non-alphabet characters\n  -w, --wrap=COLS       wrap encoded lines after COLS character (default 76).\n                          Use 0 to disable line wrapping\n\n"
                              ,5);
  fputs_unlocked(pcVar10,pFVar18);
  pFVar18 = stdout;
  pcVar10 = (char *)dcgettext(0,"      --help     display this help and exit\n",5);
  fputs_unlocked(pcVar10,pFVar18);
  pFVar18 = stdout;
  pcVar10 = (char *)dcgettext(0,"      --version  output version information and exit\n",5);
  fputs_unlocked(pcVar10,pFVar18);
  uVar8 = dcgettext(0,
                    "\nThe data are encoded as described for the %s alphabet in RFC 4648.\nWhen decoding, the input may contain newlines in addition to the bytes of\nthe formal %s alphabet.  Use --ignore-garbage to attempt to recover\nfrom any other non-alphabet bytes in the encoded stream.\n"
                    ,5);
  __printf_chk(1,uVar8,"base64");
  pbStack_13538 = &DAT_00406d30;
  pcStack_13530 = "test invocation";
  apbStack_13528[0] = (byte *)0x406daa;
  apbStack_13528[1] = (byte *)0x406d42;
  apbStack_13528[2] = (byte *)0x406d58;
  apbStack_13528[3] = (byte *)0x406d62;
  apbStack_13528[4] = (byte *)0x406d71;
  pcStack_13500 = "sha2 utilities";
  pcStack_134f8 = "sha384sum";
  pcStack_134f0 = "sha2 utilities";
  pcStack_134e8 = "sha512sum";
  pcStack_134e0 = "sha2 utilities";
  uStack_134d8 = 0;
  uStack_134d0 = 0;
  ppbVar11 = &pbStack_13538;
  do {
    ppbVar12 = ppbVar11;
    ppbVar11 = ppbVar12 + 2;
    pbVar19 = *ppbVar11;
    bVar22 = false;
    bVar23 = pbVar19 == (byte *)0x0;
    if (bVar23) break;
    lVar14 = 7;
    pbVar17 = (byte *)"base64";
    do {
      if (lVar14 == 0) break;
      lVar14 = lVar14 + -1;
      bVar22 = *pbVar17 < *pbVar19;
      bVar23 = *pbVar17 == *pbVar19;
      pbVar17 = pbVar17 + (ulong)bVar24 * -2 + 1;
      pbVar19 = pbVar19 + (ulong)bVar24 * -2 + 1;
    } while (bVar23);
  } while ((!bVar22 && !bVar23) != bVar22);
  pcVar10 = (char *)ppbVar12[3];
  if ((byte *)pcVar10 == (byte *)0x0) {
    uVar8 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar8,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar10 = setlocale(5,(char *)0x0);
    if ((pcVar10 != (char *)0x0) && (iVar5 = strncmp(pcVar10,"en_",3), iVar5 != 0)) {
      pcVar10 = "base64";
      goto LAB_004023d3;
    }
    pcVar10 = "base64";
    uVar8 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    pcVar13 = " invocation";
    __printf_chk(1,uVar8,"https://www.gnu.org/software/coreutils/","base64");
  }
  else {
    uVar8 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar8,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar13 = setlocale(5,(char *)0x0);
    if ((pcVar13 != (char *)0x0) && (iVar5 = strncmp(pcVar13,"en_",3), iVar5 != 0)) {
LAB_004023d3:
      uVar8 = dcgettext(0,"Report %s translation bugs to <https://translationproject.org/team/>\n",5
                       );
      __printf_chk(1,uVar8,"base64");
    }
    pcVar13 = " invocation";
    uVar8 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    __printf_chk(1,uVar8,"https://www.gnu.org/software/coreutils/","base64");
    if (pcVar10 != "base64") {
      pcVar13 = "";
    }
  }
  uVar8 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(1,uVar8,pcVar10,pcVar13);
LAB_004020df:
                    /* WARNING: Subroutine does not return */
  exit(iVar4);
}


void FUN_00401dd0(FILE *param_1,_IO_FILE *param_2,long param_3)

{
  ulong __n;
  FILE *pFVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  size_t sVar5;
  int *piVar6;
  undefined uVar7;
  char *pcVar8;
  undefined uVar9;
  byte **ppbVar10;
  char *pcVar12;
  long lVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong __n_00;
  ulong uVar16;
  ulong uVar17;
  bool bVar18;
  bool bVar19;
  byte bVar20;
  byte *pbStack_118e0;
  char *pcStack_118d8;
  byte *apbStack_118d0 [5];
  char *pcStack_118a8;
  char *pcStack_118a0;
  char *pcStack_11898;
  char *pcStack_11890;
  char *pcStack_11888;
  undefined uStack_11880;
  undefined uStack_11878;
  undefined uStack_11870;
  long lStack_11868;
  undefined uStack_11860;
  long lStack_11850;
  ulong uStack_11848;
  ulong uStack_11840;
  undefined auStack_11838 [30720];
  undefined local_a038 [40968];
  byte **ppbVar11;
  
  bVar20 = 0;
  lStack_11868 = 0;
  lStack_11850 = param_3;
  do {
    uVar17 = 0;
    do {
      uStack_11860 = 0x401e25;
      sVar5 = fread_unlocked(auStack_11838 + uVar17,1,0x7800 - uVar17,param_1);
      uVar17 = uVar17 + sVar5;
      uVar2 = param_1->_flags;
      if ((uVar2 & 0x30) != 0) {
        if (uVar17 == 0) goto LAB_00401e33;
        break;
      }
    } while (uVar17 < 0x7800);
    __n = ((uVar17 + 2) / 3) * 4;
    uStack_11860 = 0x401e94;
    FUN_00402510(auStack_11838,uVar17,local_a038,__n);
    if (lStack_11850 == 0) {
      uStack_11860 = 0x401eb8;
      sVar5 = fwrite_unlocked(local_a038,1,__n,stdout);
      if (sVar5 <= __n && __n - sVar5 != 0) goto LAB_00402043;
    }
    else {
      uVar16 = 0;
      if (__n != 0) {
        do {
          __n_00 = lStack_11850 - lStack_11868;
          if (__n - uVar16 < (ulong)(lStack_11850 - lStack_11868)) {
            __n_00 = __n - uVar16;
          }
          if (__n_00 == 0) {
            pcVar8 = param_2->_IO_write_ptr;
            if (pcVar8 < param_2->_IO_write_end) {
              lStack_11868 = 0;
              param_2->_IO_write_ptr = pcVar8 + 1;
              *pcVar8 = '\n';
            }
            else {
              uStack_11860 = 0x401f82;
              uStack_11848 = uVar16;
              iVar3 = __overflow(param_2,10);
              if (iVar3 == -1) goto LAB_00402019;
              lStack_11868 = 0;
              uVar16 = uStack_11848;
            }
          }
          else {
            uStack_11860 = 0x401f50;
            uStack_11848 = __n_00;
            uStack_11840 = uVar16;
            sVar5 = fwrite_unlocked(local_a038 + uVar16,1,__n_00,stdout);
            if (sVar5 < uStack_11848) goto LAB_00401fef;
            lStack_11868 = lStack_11868 + uStack_11848;
            uVar16 = uStack_11840 + uStack_11848;
          }
        } while (uVar16 <= __n && __n - uVar16 != 0);
      }
    }
    uVar2 = param_1->_flags;
  } while (((uVar2 & 0x30) == 0) && (uVar17 == 0x7800));
LAB_00401e33:
  if ((lStack_11850 == 0) || (lStack_11868 == 0)) {
LAB_00401e44:
    if ((uVar2 & 0x20) == 0) {
      return;
    }
  }
  else {
    pcVar8 = param_2->_IO_write_ptr;
    if (pcVar8 < param_2->_IO_write_end) {
      param_2->_IO_write_ptr = pcVar8 + 1;
      *pcVar8 = '\n';
LAB_00401fac:
      uVar2 = param_1->_flags;
      goto LAB_00401e44;
    }
    uStack_11860 = 0x401fc0;
    iVar3 = __overflow(param_2,10);
    if (iVar3 != -1) goto LAB_00401fac;
    uStack_11860 = 0x401fd6;
    uVar9 = dcgettext(0,"write error",5);
    uStack_11860 = 0x401fde;
    piVar6 = __errno_location();
    uStack_11860 = 0x401fef;
    error(1,*piVar6,uVar9);
LAB_00401fef:
    uStack_11860 = 0x402000;
    uVar9 = dcgettext(0,"write error",5);
    uStack_11860 = 0x402008;
    piVar6 = __errno_location();
    uStack_11860 = 0x402019;
    error(1,*piVar6,uVar9);
LAB_00402019:
    uStack_11860 = 0x40202a;
    uVar9 = dcgettext(0,"write error",5);
    uStack_11860 = 0x402032;
    piVar6 = __errno_location();
    uStack_11860 = 0x402043;
    error(1,*piVar6,uVar9);
LAB_00402043:
    uStack_11860 = 0x402054;
    uVar9 = dcgettext(0,"write error",5);
    uStack_11860 = 0x40205c;
    piVar6 = __errno_location();
    uStack_11860 = 0x40206d;
    error(1,*piVar6,uVar9);
  }
  uStack_11860 = 0x40207e;
  uStack_11870 = dcgettext(0,"read error",5);
  uStack_11860 = 0x402086;
  piVar6 = __errno_location();
  iVar3 = 1;
  uStack_11860 = 0x402097;
  error(1,*piVar6,uStack_11870);
  uVar9 = DAT_0060b2a8;
  uStack_11860 = 0x7800;
  if (iVar3 != 0) {
    uVar7 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(stderr,1,uVar7,uVar9);
    goto LAB_004020df;
  }
  uVar7 = dcgettext(0,
                    "Usage: %s [OPTION]... [FILE]\nBase%d encode or decode FILE, or standard input, to standard output.\n"
                    ,5);
  __printf_chk(1,uVar7,uVar9,0x40);
  pFVar1 = stdout;
  pcVar8 = (char *)dcgettext(0,"\nWith no FILE, or when FILE is -, read standard input.\n",5);
  fputs_unlocked(pcVar8,pFVar1);
  pFVar1 = stdout;
  pcVar8 = (char *)dcgettext(0,
                             "\nMandatory arguments to long options are mandatory for short options too.\n"
                             ,5);
  fputs_unlocked(pcVar8,pFVar1);
  pFVar1 = stdout;
  pcVar8 = (char *)dcgettext(0,
                             "  -d, --decode          decode data\n  -i, --ignore-garbage  when decoding, ignore non-alphabet characters\n  -w, --wrap=COLS       wrap encoded lines after COLS character (default 76).\n                          Use 0 to disable line wrapping\n\n"
                             ,5);
  fputs_unlocked(pcVar8,pFVar1);
  pFVar1 = stdout;
  pcVar8 = (char *)dcgettext(0,"      --help     display this help and exit\n",5);
  fputs_unlocked(pcVar8,pFVar1);
  pFVar1 = stdout;
  pcVar8 = (char *)dcgettext(0,"      --version  output version information and exit\n",5);
  fputs_unlocked(pcVar8,pFVar1);
  uVar9 = dcgettext(0,
                    "\nThe data are encoded as described for the %s alphabet in RFC 4648.\nWhen decoding, the input may contain newlines in addition to the bytes of\nthe formal %s alphabet.  Use --ignore-garbage to attempt to recover\nfrom any other non-alphabet bytes in the encoded stream.\n"
                    ,5);
  __printf_chk(1,uVar9,"base64");
  pbStack_118e0 = &DAT_00406d30;
  pcStack_118d8 = "test invocation";
  apbStack_118d0[0] = (byte *)0x406daa;
  apbStack_118d0[1] = (byte *)0x406d42;
  apbStack_118d0[2] = (byte *)0x406d58;
  apbStack_118d0[3] = (byte *)0x406d62;
  apbStack_118d0[4] = (byte *)0x406d71;
  pcStack_118a8 = "sha2 utilities";
  pcStack_118a0 = "sha384sum";
  pcStack_11898 = "sha2 utilities";
  pcStack_11890 = "sha512sum";
  pcStack_11888 = "sha2 utilities";
  uStack_11880 = 0;
  uStack_11878 = 0;
  ppbVar10 = &pbStack_118e0;
  do {
    ppbVar11 = ppbVar10;
    ppbVar10 = ppbVar11 + 2;
    pbVar15 = *ppbVar10;
    bVar18 = false;
    bVar19 = pbVar15 == (byte *)0x0;
    if (bVar19) break;
    lVar13 = 7;
    pbVar14 = (byte *)"base64";
    do {
      if (lVar13 == 0) break;
      lVar13 = lVar13 + -1;
      bVar18 = *pbVar14 < *pbVar15;
      bVar19 = *pbVar14 == *pbVar15;
      pbVar14 = pbVar14 + (ulong)bVar20 * -2 + 1;
      pbVar15 = pbVar15 + (ulong)bVar20 * -2 + 1;
    } while (bVar19);
  } while ((!bVar18 && !bVar19) != bVar18);
  pcVar8 = (char *)ppbVar11[3];
  if ((byte *)pcVar8 == (byte *)0x0) {
    uVar9 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar9,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar8 = setlocale(5,(char *)0x0);
    if ((pcVar8 != (char *)0x0) && (iVar4 = strncmp(pcVar8,"en_",3), iVar4 != 0)) {
      pcVar8 = "base64";
      goto LAB_004023d3;
    }
    pcVar8 = "base64";
    uVar9 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    pcVar12 = " invocation";
    __printf_chk(1,uVar9,"https://www.gnu.org/software/coreutils/","base64");
  }
  else {
    uVar9 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar9,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar12 = setlocale(5,(char *)0x0);
    if ((pcVar12 != (char *)0x0) && (iVar4 = strncmp(pcVar12,"en_",3), iVar4 != 0)) {
LAB_004023d3:
      uVar9 = dcgettext(0,"Report %s translation bugs to <https://translationproject.org/team/>\n",5
                       );
      __printf_chk(1,uVar9,"base64");
    }
    pcVar12 = " invocation";
    uVar9 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    __printf_chk(1,uVar9,"https://www.gnu.org/software/coreutils/","base64");
    if (pcVar8 != "base64") {
      pcVar12 = "";
    }
  }
  uVar9 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(1,uVar9,pcVar8,pcVar12);
LAB_004020df:
                    /* WARNING: Subroutine does not return */
  exit(iVar3);
}


void FUN_004020a0(int param_1)

{
  FILE *pFVar1;
  int iVar2;
  undefined uVar3;
  char *pcVar4;
  undefined uVar5;
  byte **ppbVar6;
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
  byte **ppbVar7;
  
  uVar5 = DAT_0060b2a8;
  bVar14 = 0;
  if (param_1 != 0) {
    uVar3 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(stderr,1,uVar3,uVar5);
    goto LAB_004020df;
  }
  uVar3 = dcgettext(0,
                    "Usage: %s [OPTION]... [FILE]\nBase%d encode or decode FILE, or standard input, to standard output.\n"
                    ,5);
  __printf_chk(1,uVar3,uVar5,0x40);
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
                             "  -d, --decode          decode data\n  -i, --ignore-garbage  when decoding, ignore non-alphabet characters\n  -w, --wrap=COLS       wrap encoded lines after COLS character (default 76).\n                          Use 0 to disable line wrapping\n\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"      --help     display this help and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"      --version  output version information and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  uVar5 = dcgettext(0,
                    "\nThe data are encoded as described for the %s alphabet in RFC 4648.\nWhen decoding, the input may contain newlines in addition to the bytes of\nthe formal %s alphabet.  Use --ignore-garbage to attempt to recover\nfrom any other non-alphabet bytes in the encoded stream.\n"
                    ,5);
  __printf_chk(1,uVar5,"base64");
  local_88 = &DAT_00406d30;
  local_80 = "test invocation";
  local_78[0] = (byte *)0x406daa;
  local_78[1] = (byte *)0x406d42;
  local_78[2] = (byte *)0x406d58;
  local_78[3] = (byte *)0x406d62;
  local_78[4] = (byte *)0x406d71;
  local_50 = "sha2 utilities";
  local_48 = "sha384sum";
  local_40 = "sha2 utilities";
  local_38 = "sha512sum";
  local_30 = "sha2 utilities";
  local_28 = 0;
  local_20 = 0;
  ppbVar6 = &local_88;
  do {
    ppbVar7 = ppbVar6;
    ppbVar6 = ppbVar7 + 2;
    pbVar11 = *ppbVar6;
    bVar12 = false;
    bVar13 = pbVar11 == (byte *)0x0;
    if (bVar13) break;
    lVar9 = 7;
    pbVar10 = (byte *)"base64";
    do {
      if (lVar9 == 0) break;
      lVar9 = lVar9 + -1;
      bVar12 = *pbVar10 < *pbVar11;
      bVar13 = *pbVar10 == *pbVar11;
      pbVar10 = pbVar10 + (ulong)bVar14 * -2 + 1;
      pbVar11 = pbVar11 + (ulong)bVar14 * -2 + 1;
    } while (bVar13);
  } while ((!bVar12 && !bVar13) != bVar12);
  pcVar4 = (char *)ppbVar7[3];
  if ((byte *)pcVar4 == (byte *)0x0) {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
      iVar2 = strncmp(pcVar4,"en_",3);
      if (iVar2 != 0) {
        pcVar4 = "base64";
        goto LAB_004023d3;
      }
    }
    pcVar4 = "base64";
    uVar5 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    pcVar8 = " invocation";
    __printf_chk(1,uVar5,"https://www.gnu.org/software/coreutils/","base64");
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar8 = setlocale(5,(char *)0x0);
    if (pcVar8 != (char *)0x0) {
      iVar2 = strncmp(pcVar8,"en_",3);
      if (iVar2 != 0) {
LAB_004023d3:
        uVar5 = dcgettext(0,"Report %s translation bugs to <https://translationproject.org/team/>\n"
                          ,5);
        __printf_chk(1,uVar5,"base64");
      }
    }
    pcVar8 = " invocation";
    uVar5 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    __printf_chk(1,uVar5,"https://www.gnu.org/software/coreutils/","base64");
    if (pcVar4 != "base64") {
      pcVar8 = "";
    }
  }
  uVar5 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(1,uVar5,pcVar4,pcVar8);
LAB_004020df:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}


undefined FUN_00402400(byte *param_1,ulong param_2,byte **param_3,long *param_4)

{
  char cVar1;
  char cVar2;
  byte *pbVar3;
  undefined uVar4;
  byte *pbVar5;
  
  uVar4 = 0;
  if (((1 < param_2) && (-1 < (char)(&DAT_004073e0)[*param_1])) &&
     (cVar1 = (&DAT_004073e0)[param_1[1]], -1 < cVar1)) {
    pbVar3 = *param_3;
    pbVar5 = pbVar3;
    if (*param_4 != 0) {
      pbVar5 = pbVar3 + 1;
      *pbVar3 = (&DAT_004073e0)[*param_1] << 2 | cVar1 >> 4;
      *param_4 = *param_4 + -1;
    }
    if (param_2 == 2) goto LAB_004024d4;
    if (param_1[2] == 0x3d) {
      if ((param_2 != 4) || (param_1[3] != 0x3d)) goto LAB_004024d4;
    }
    else {
      cVar2 = (&DAT_004073e0)[param_1[2]];
      if (cVar2 < '\0') {
LAB_004024d4:
        *param_3 = pbVar5;
        return 0;
      }
      if (*param_4 != 0) {
        *pbVar5 = cVar1 << 4 | cVar2 >> 2;
        *param_4 = *param_4 + -1;
        pbVar5 = pbVar5 + 1;
      }
      if (param_2 == 3) goto LAB_004024d4;
      if (param_1[3] == 0x3d) {
        if (param_2 != 4) goto LAB_004024d4;
      }
      else {
        if ((char)(&DAT_004073e0)[param_1[3]] < '\0') goto LAB_004024d4;
        if (*param_4 != 0) {
          *pbVar5 = cVar2 << 6 | (&DAT_004073e0)[param_1[3]];
          *param_4 = *param_4 + -1;
          pbVar5 = pbVar5 + 1;
        }
      }
    }
    *param_3 = pbVar5;
    uVar4 = 1;
  }
  return uVar4;
}


void FUN_00402510(byte *param_1,long param_2,char *param_3,ulong param_4)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  char *pcVar8;
  byte *pbVar9;
  
  if (((param_4 & 3) == 0) && (lVar5 = (param_4 >> 2) * 3, lVar5 == param_2)) {
    pbVar1 = param_1 + lVar5;
    if (lVar5 != 0) {
      do {
        bVar2 = *param_1;
        pbVar9 = param_1 + 3;
        *param_3 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/%s: %s"
                   [bVar2 >> 2];
        bVar3 = param_1[1];
        param_3[1] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/%s: %s"
                     [(uint)bVar2 * 0x10 + (uint)(bVar3 >> 4) & 0x3f];
        cVar4 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/%s: %s"
                [param_1[2] & 0x3f];
        param_3[2] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/%s: %s"
                     [(uint)(param_1[2] >> 6) + (uint)bVar3 * 4 & 0x3f];
        param_3[3] = cVar4;
        param_3 = param_3 + 4;
        param_1 = pbVar9;
      } while (pbVar1 != pbVar9);
      return;
    }
  }
  else {
    pcVar8 = param_3;
    for (uVar7 = param_4; (param_2 != 0 && (uVar7 != 0)); uVar7 = uVar7 - 4) {
      bVar2 = *param_1;
      *pcVar8 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/%s: %s"[bVar2 >> 2]
      ;
      if (uVar7 == 1) {
        return;
      }
      uVar6 = (uint)bVar2 * 0x10;
      if (param_2 == 1) {
        pcVar8[1] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/%s: %s"
                    [uVar6 & 0x30];
        if (uVar7 == 2) {
          return;
        }
        pcVar8[2] = '=';
        if (uVar7 == 3) {
          return;
        }
LAB_0040262d:
        pcVar8[3] = '=';
        if (param_3 + (param_4 - 4) == pcVar8) {
          return;
        }
        param_2 = 0;
      }
      else {
        bVar2 = param_1[1];
        pcVar8[1] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/%s: %s"
                    [uVar6 + (bVar2 >> 4) & 0x3f];
        if (uVar7 == 2) {
          return;
        }
        uVar6 = (uint)bVar2 * 4;
        if (param_2 == 2) {
          pcVar8[2] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/%s: %s"
                      [uVar6 & 0x3c];
          if (param_3 + (param_4 - (long)pcVar8) == (char *)0x3) {
            return;
          }
          goto LAB_0040262d;
        }
        bVar2 = param_1[2];
        pcVar8[2] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/%s: %s"
                    [uVar6 + (bVar2 >> 6) & 0x3f];
        if (param_3 + (param_4 - (long)pcVar8) == (char *)0x3) {
          return;
        }
        pcVar8[3] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/%s: %s"
                    [bVar2 & 0x3f];
        if (param_3 + (param_4 - 4) == pcVar8) {
          return;
        }
        param_2 = param_2 + -3;
        if (param_2 != 0) {
          param_1 = param_1 + 3;
        }
      }
      pcVar8 = pcVar8 + 4;
    }
    if (uVar7 != 0) {
      *pcVar8 = '\0';
      return;
    }
  }
  return;
}


ulong FUN_00402700(undefined param_1,ulong param_2,void **param_3)

{
  ulong __size;
  ulong uVar1;
  void *pvVar2;
  
  uVar1 = ((param_2 + 2) / 3) * 4;
  __size = uVar1 + 1;
  if (__size < param_2) {
    *param_3 = (void *)0x0;
    return 0;
  }
  pvVar2 = malloc(__size);
  *param_3 = pvVar2;
  if (pvVar2 != (void *)0x0) {
    FUN_00402510(param_1,param_2,pvVar2,__size);
    return uVar1;
  }
  return __size;
}


uint FUN_004027a0(byte param_1)

{
  return ~(uint)(byte)(&DAT_004073e0)[param_1] & 0xffffff00 |
         ~(uint)(byte)(&DAT_004073e0)[param_1] >> 7 & 1;
}


void FUN_004027c0(undefined *param_1)

{
  *param_1 = 0;
  return;
}


uint * FUN_004027d0(uint *param_1,uint *param_2,ulong param_3,long param_4,long *param_5)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  uint *puVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  bool bVar10;
  uint *puVar11;
  long lVar12;
  bool bVar13;
  long local_50 [2];
  long local_40 [2];
  
  local_40[0] = *param_5;
  bVar13 = param_1 == (uint *)0x0;
  if (bVar13) {
    bVar10 = true;
  }
  else {
    bVar10 = *param_1 == 0 && param_3 != 0;
  }
  bVar2 = param_3 != 0;
  puVar4 = param_1 + 1;
  lVar5 = local_40[0];
  local_50[0] = param_4;
  while( true ) {
    puVar8 = param_2;
    uVar6 = param_3;
    lVar12 = lVar5;
    if (bVar10) {
      while( true ) {
        uVar6 = (long)param_2 + (param_3 - (long)puVar8);
        puVar4 = (uint *)FUN_00402400(puVar8,uVar6,local_50,local_40);
        lVar5 = local_40[0];
        if ((char)puVar4 == '\0') break;
        puVar8 = puVar8 + 1;
        lVar12 = local_40[0];
      }
    }
    bVar3 = uVar6 == 0 && (bVar13 || bVar2);
    puVar4 = (uint *)((ulong)puVar4 & 0xffffffffffffff00 | (ulong)bVar3);
    if (bVar3) goto LAB_0040291b;
    puVar9 = puVar8;
    if (uVar6 == 0) break;
    if (*(char *)puVar8 == '\n') {
      if (param_1 == (uint *)0x0) {
        puVar11 = (uint *)((long)puVar8 + uVar6);
        local_50[0] = local_50[0] + (lVar5 - lVar12);
        local_40[0] = lVar12;
        goto LAB_004028f3;
      }
      param_2 = (uint *)((long)puVar8 + 1);
      param_3 = uVar6 - 1;
    }
    else {
      puVar11 = (uint *)((long)puVar8 + uVar6);
      local_50[0] = local_50[0] + (lVar5 - lVar12);
      param_2 = puVar8;
      local_40[0] = lVar12;
      if (param_1 != (uint *)0x0) goto LAB_004028a5;
LAB_0040284a:
      puVar4 = (uint *)FUN_00402400(puVar9,uVar6,local_50,local_40);
      lVar5 = local_40[0];
      if ((char)puVar4 == '\0') goto LAB_0040291b;
      param_3 = (long)puVar11 - (long)param_2;
    }
  }
  local_50[0] = local_50[0] + (lVar5 - lVar12);
  puVar11 = puVar8;
  if (param_1 == (uint *)0x0) {
    puVar4 = (uint *)0x1;
    lVar5 = lVar12;
  }
  else {
LAB_004028a5:
    uVar7 = *param_1;
    if (uVar7 == 4) {
      *param_1 = 0;
LAB_00402987:
      local_40[0] = lVar12;
      if ((3 < (long)uVar6) && (lVar5 = FUN_00406500(puVar8,10,4), lVar5 == 0)) {
        uVar6 = 4;
        param_2 = puVar8 + 1;
        goto LAB_0040284a;
      }
      uVar7 = *param_1;
    }
    else {
      local_40[0] = lVar12;
      if (uVar7 == 0) goto LAB_00402987;
    }
    uVar6 = (ulong)uVar7;
    puVar4 = puVar8;
    if (puVar8 < puVar11) {
      do {
        puVar8 = (uint *)((long)puVar4 + 1);
        cVar1 = *(char *)puVar4;
        if (cVar1 != '\n') {
          uVar7 = (int)uVar6 + 1;
          *param_1 = uVar7;
          *(char *)((long)param_1 + uVar6 + 4) = cVar1;
          if (uVar7 == 4) {
            uVar6 = 4;
            break;
          }
          uVar6 = (ulong)uVar7;
        }
        puVar4 = puVar8;
      } while (puVar8 != puVar11);
    }
    puVar9 = param_1 + 1;
    if (uVar6 != 0) {
LAB_004028f3:
      param_2 = puVar8;
      if (((3 < uVar6) || (!bVar13 && !bVar2)) || (bVar13)) goto LAB_0040284a;
    }
    puVar4 = (uint *)0x1;
    lVar5 = local_40[0];
  }
LAB_0040291b:
  *param_5 = *param_5 - lVar5;
  return puVar4;
}


ulong FUN_00402a30(undefined param_1,undefined param_2,ulong param_3,void **param_4,
                  size_t *param_5)

{
  void *pvVar1;
  ulong uVar2;
  size_t local_30;
  
  local_30 = (param_3 >> 2) * 3 + 3;
  pvVar1 = malloc(local_30);
  *param_4 = pvVar1;
  if (pvVar1 != (void *)0x0) {
    uVar2 = FUN_004027d0(param_1,param_2,param_3,pvVar1,&local_30);
    if ((char)uVar2 == '\0') {
      free(*param_4);
      *param_4 = (void *)0x0;
      return uVar2 & 0xff;
    }
    if (param_5 != (size_t *)0x0) {
      *param_5 = local_30;
      return uVar2;
    }
  }
  return 1;
}


void FUN_00402ae0(undefined param_1)

{
  DAT_0060b2a0 = param_1;
  return;
}


void FUN_00402af0(undefined param_1)

{
  DAT_0060b298 = param_1;
  return;
}


void FUN_00402b00(void)

{
  int iVar1;
  int *piVar2;
  undefined uVar3;
  undefined uVar4;
  
  iVar1 = FUN_00406610(stdout);
  if (iVar1 != 0) {
    piVar2 = __errno_location();
    if ((DAT_0060b298 == '\0') || (*piVar2 != 0x20)) {
      uVar3 = dcgettext(0,"write error",5);
      if (DAT_0060b2a0 == 0) {
        error(0,*piVar2,"%s",uVar3);
      }
      else {
        uVar4 = FUN_00404650();
        error(0,*piVar2,"%s: %s",uVar4,uVar3);
      }
      goto LAB_00402b7e;
    }
  }
  iVar1 = FUN_00406610(stderr);
  if (iVar1 == 0) {
    return;
  }
LAB_00402b7e:
                    /* WARNING: Subroutine does not return */
  _exit(DAT_0060b1f8);
}


void FUN_00402ba0(void)

{
  (*(code *)PTR_posix_fadvise_0060b0f0)();
  return;
}


void FUN_00402bb0(FILE *param_1,int param_2)

{
  int __fd;
  
  if (param_1 != (FILE *)0x0) {
    __fd = fileno(param_1);
    posix_fadvise(__fd,0,0,param_2);
    return;
  }
  return;
}


void FUN_00402be0(byte *param_1)

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
        pbVar6 = &DAT_00407568;
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
  DAT_0060b2a8 = param_1;
  program_invocation_name = param_1;
  return;
}


char * FUN_00402c80(char *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  byte *pbVar3;
  
  pcVar2 = (char *)dcgettext(0,param_1,5);
  if (param_1 == pcVar2) {
    pbVar3 = (byte *)FUN_004066d0();
    if ((*pbVar3 & 0xdf) == 0x55) {
      if (((((pbVar3[1] & 0xdf) != 0x54) || ((pbVar3[2] & 0xdf) != 0x46)) || (pbVar3[3] != 0x2d)) ||
         ((pbVar3[4] != 0x38 || (pbVar3[5] != 0)))) {
LAB_00402d58:
        pcVar2 = "\"";
        if (param_2 != 9) {
          pcVar2 = "\'";
        }
        return pcVar2;
      }
      cVar1 = *pcVar2;
      pcVar2 = &DAT_00407579;
      if (cVar1 != '`') {
        pcVar2 = &DAT_0040756e;
      }
    }
    else {
      if (((((*pbVar3 & 0xdf) != 0x47) || ((pbVar3[1] & 0xdf) != 0x42)) || (pbVar3[2] != 0x31)) ||
         (((pbVar3[3] != 0x38 || (pbVar3[4] != 0x30)) ||
          ((pbVar3[5] != 0x33 || ((pbVar3[6] != 0x30 || (pbVar3[7] != 0)))))))) goto LAB_00402d58;
      cVar1 = *pcVar2;
      pcVar2 = &DAT_00407575;
      if (cVar1 != '`') {
        pcVar2 = &DAT_00407572;
      }
    }
  }
  return pcVar2;
}


ulong FUN_00402d80(undefined *param_1,ulong param_2,char *param_3,ulong param_4,int param_5,
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
LAB_004039d1:
    if (param_2 != 0) {
      bVar3 = false;
      local_5b = false;
      bVar2 = true;
      local_70 = 0;
      goto LAB_00403606;
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
      goto LAB_004039d1;
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
      param_8 = (char *)FUN_00402c80(&DAT_0040757d,param_5);
      param_9 = (char *)FUN_00402c80(&DAT_00408acf);
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
LAB_00402e18:
  uVar22 = 0;
  bVar5 = local_5b;
LAB_00402e28:
  bVar23 = param_4 != uVar22;
  if (param_4 == 0xffffffffffffffff) {
    bVar23 = param_3[uVar22] != '\0';
  }
  bVar26 = bVar6;
  if (!bVar23) goto LAB_004035a8;
  bVar20 = (bool)(param_5 != 2 & bVar6);
  __s1 = (byte *)(param_3 + uVar22);
  uVar16 = uVar15;
  bVar4 = bVar3;
  if (bVar20) {
    if (local_a0 == 0) {
LAB_00403520:
      uVar19 = (ulong)*__s1;
      switch(uVar19) {
      case 0:
        goto switchD_00403532_caseD_0;
      default:
        bVar20 = false;
        goto switchD_0040339e_caseD_1;
      case 7:
        bVar17 = 0x61;
        goto LAB_00403235;
      case 8:
        bVar17 = 0x62;
        break;
      case 9:
switchD_00403532_caseD_9:
        bVar17 = 0x74;
        break;
      case 10:
switchD_00403532_caseD_a:
        bVar17 = 0x6e;
        break;
      case 0xb:
switchD_00403532_caseD_b:
        bVar17 = 0x76;
        goto LAB_00403235;
      case 0xc:
switchD_00403532_caseD_c:
        bVar17 = 0x66;
LAB_00403235:
        if (local_5c) {
          bVar25 = false;
          goto LAB_00403188;
        }
LAB_00403240:
        bVar23 = false;
        goto LAB_00402ffb;
      case 0xd:
        bVar20 = false;
switchD_00402f18_caseD_d:
        bVar25 = param_5 == 2;
        uVar19 = 0xd;
        bVar13 = 0x72;
        goto LAB_00403150;
      case 0x20:
        bVar25 = false;
LAB_0040357a:
        uVar19 = 0x20;
        goto LAB_00403542;
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
switchD_00402f18_caseD_21:
        bVar25 = false;
        goto LAB_0040315b;
      case 0x23:
      case 0x7e:
        bVar26 = false;
LAB_0040355a:
        if (uVar22 == 0) {
          bVar25 = false;
          bVar23 = bVar20;
          bVar20 = bVar26;
          goto LAB_00402f68;
        }
        bVar23 = false;
        goto LAB_00402f7f;
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
LAB_00403542:
        bVar24 = false;
        bVar23 = bVar20;
        bVar20 = bVar25;
        goto LAB_00402f81;
      case 0x27:
        bVar20 = false;
        goto switchD_0040339e_caseD_27;
      case 0x3f:
        bVar20 = false;
        goto switchD_0040339e_caseD_3f;
      case 0x5c:
        bVar20 = false;
        goto switchD_00402f18_caseD_5c;
      case 0x7b:
      case 0x7d:
        bVar20 = false;
        goto switchD_0040339e_caseD_7b;
      }
      bVar25 = false;
      bVar23 = false;
      goto joined_r0x00403177;
    }
    if ((param_4 == 0xffffffffffffffff) && (1 < local_a0)) {
      param_4 = strlen(param_3);
    }
    if ((param_4 < uVar22 + local_a0) || (iVar7 = memcmp(__s1,local_78,local_a0), iVar7 != 0))
    goto LAB_00403520;
    if (!local_5c) {
      uVar19 = (ulong)*__s1;
      bVar25 = bVar20;
      switch(uVar19) {
      case 0:
        goto switchD_00402f18_caseD_0;
      default:
        goto switchD_0040339e_caseD_1;
      case 7:
        bVar17 = 0x61;
        goto LAB_00403240;
      case 8:
        bVar25 = false;
        bVar23 = false;
        bVar17 = 0x62;
        break;
      case 9:
        goto switchD_00403532_caseD_9;
      case 10:
        goto switchD_00403532_caseD_a;
      case 0xb:
        goto switchD_00403532_caseD_b;
      case 0xc:
        goto switchD_00403532_caseD_c;
      case 0xd:
        goto switchD_00402f18_caseD_d;
      case 0x20:
        goto LAB_0040357a;
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
        goto switchD_00402f18_caseD_21;
      case 0x23:
      case 0x7e:
        bVar26 = bVar20;
        goto LAB_0040355a;
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
        goto LAB_00403542;
      case 0x27:
        goto switchD_0040339e_caseD_27;
      case 0x3f:
        goto switchD_0040339e_caseD_3f;
      case 0x5c:
        goto switchD_00402f18_caseD_5c;
      case 0x7b:
      case 0x7d:
        goto switchD_0040339e_caseD_7b;
      }
      goto LAB_00402fc2;
    }
    goto LAB_0040319a;
  }
  uVar19 = (ulong)*__s1;
  switch(uVar19) {
  case 0:
    if (bVar6) {
switchD_00403532_caseD_0:
      if (!local_5c) {
        bVar20 = false;
switchD_00402f18_caseD_0:
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
            goto LAB_00403078;
          }
LAB_004032ba:
          param_1[uVar16] = 0x5c;
          uVar15 = uVar16;
        }
        else if (uVar15 < uVar9) goto LAB_004032ba;
        uVar16 = uVar15 + 1;
        bVar24 = bVar23;
        if (param_5 == 2) {
          bVar17 = 0x30;
          bVar23 = false;
          bVar4 = bVar3;
          goto LAB_00403078;
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
LAB_004032f9:
        bVar17 = (byte)uVar19;
        bVar23 = false;
        uVar15 = uVar16;
        bVar4 = bVar3;
        if ((bool)(bVar6 ^ 1U | bVar26)) goto LAB_00403078;
        goto LAB_00402f81;
      }
      bVar26 = param_5 == 2;
      goto LAB_0040318c;
    }
    if ((param_6 & 1) == 0) {
      bVar25 = param_5 == 2;
      uVar19 = 0;
      bVar23 = false;
      bVar20 = false;
      goto LAB_00402f68;
    }
    uVar22 = uVar22 + 1;
    goto LAB_00402e28;
  default:
switchD_0040339e_caseD_1:
    bVar25 = bVar6;
    if (sVar8 != 1) {
      local_40[0] = (mbstate_t)0x0;
      if (param_4 == 0xffffffffffffffff) {
        param_4 = strlen(param_3);
      }
      uVar21 = 0;
      do {
        uVar1 = uVar22 + uVar21;
        lVar11 = FUN_00406480(&local_44,param_3 + uVar1,param_4 - uVar1,local_40);
        if (lVar11 == 0) break;
        if (lVar11 == -1) {
          bVar23 = false;
          goto LAB_00403caa;
        }
        if (lVar11 == -2) {
          if ((param_4 <= uVar1) || (param_3[uVar1] == '\0')) goto LAB_00403de7;
          goto LAB_00403dd7;
        }
        if (((param_5 == 2) && (local_5c)) && (lVar11 != 1)) {
          pcVar12 = param_3 + uVar1 + 1;
          do {
            if (((byte)(*pcVar12 + 0xa5U) < 0x22) &&
               ((1L << (*pcVar12 + 0xa5U & 0x3f) & 0x20000002bU) != 0)) {
              param_5 = 2;
              goto LAB_0040318c;
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
      goto LAB_00403caa;
    }
    ppuVar10 = __ctype_b_loc();
    uVar21 = 1;
    bVar25 = ((*ppuVar10)[uVar19] & 0x4000) == 0;
    bVar23 = !bVar25;
    bVar25 = (bool)(bVar25 & bVar6);
    goto LAB_00403374;
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
    goto LAB_004033b2;
  case 10:
    uVar19 = 10;
    bVar13 = 0x6e;
    goto LAB_004033b2;
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
LAB_004033b2:
    bVar25 = param_5 == 2;
    bVar20 = (bool)(local_5c & bVar25);
    if (bVar20) {
LAB_004033ca:
      param_5 = 2;
      goto LAB_0040318c;
    }
    break;
  case 0x20:
    uVar19 = 0x20;
    goto LAB_00402f56;
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
LAB_00402f56:
    bVar25 = param_5 == 2;
    if ((local_5c) && (bVar25)) goto LAB_004033ca;
    goto LAB_00402f68;
  case 0x23:
  case 0x7e:
LAB_00402f4d:
    bVar25 = param_5 == 2;
    if (uVar22 == 0) goto LAB_00402f56;
    goto LAB_0040315b;
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
    goto switchD_0040339e_caseD_25;
  case 0x27:
switchD_0040339e_caseD_27:
    bVar5 = bVar23;
    if (param_5 != 2) {
      bVar25 = false;
      uVar19 = 0x27;
      goto LAB_00402f68;
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
      goto LAB_00403078;
    }
    goto LAB_0040318c;
  case 0x3f:
switchD_0040339e_caseD_3f:
    if (param_5 == 2) {
      if (!local_5c) {
        bVar17 = 0x3f;
        bVar24 = false;
        bVar23 = false;
        goto LAB_00403078;
      }
      goto LAB_0040318c;
    }
    if (param_5 != 5) {
      bVar25 = param_5 == 2;
      uVar19 = 0x3f;
      bVar23 = false;
      goto LAB_00402f68;
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
        goto LAB_004032f9;
      }
      goto LAB_0040319a;
    }
    bVar25 = false;
    uVar19 = 0x3f;
    bVar23 = false;
    goto LAB_00402f68;
  case 0x5c:
    if (param_5 != 2) {
switchD_00402f18_caseD_5c:
      uVar19 = 0x5c;
      bVar17 = 0x5c;
      bVar13 = 0x5c;
      bVar25 = (bool)(bVar6 & local_5c & local_a0 != 0);
      if (!bVar25) break;
      uVar22 = uVar22 + 1;
      bVar23 = false;
      goto LAB_00403094;
    }
    if (local_5c) goto LAB_0040318c;
    uVar22 = uVar22 + 1;
    bVar23 = false;
    bVar17 = 0x5c;
    goto LAB_00403094;
  case 0x7b:
  case 0x7d:
switchD_0040339e_caseD_7b:
    bVar24 = param_4 != 1;
    if (param_4 == 0xffffffffffffffff) {
      bVar24 = param_3[1] != '\0';
    }
    bVar25 = param_5 == 2;
    if (!bVar24) goto LAB_00402f4d;
    goto LAB_0040315b;
  }
LAB_00403150:
  if (!bVar6) {
LAB_0040315b:
    bVar23 = false;
    goto LAB_00402f68;
  }
  bVar23 = false;
  bVar17 = bVar13;
  goto joined_r0x00403177;
LAB_004035a8:
  if ((uVar15 == 0) && ((bool)(local_5c & param_5 == 2))) {
    param_5 = 2;
LAB_0040318c:
    if (bVar26) {
      param_5 = 4;
    }
LAB_0040319a:
    uVar9 = FUN_00402d80(param_1,uVar9,param_3,param_4,param_5,param_6 & 0xfffffffd,0,param_8,
                         param_9);
    return uVar9;
  }
  bVar26 = (bool)(param_5 == 2 & (local_5c ^ 1U));
  bVar23 = (bool)(local_5c ^ 1U);
  if ((!bVar26) || (bVar23 = bVar26, !bVar5)) {
LAB_00403e7d:
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
    uVar9 = FUN_00402d80(param_1,local_70,param_3,param_4,5,param_6,param_7,param_8,param_9);
    return uVar9;
  }
  local_5b = uVar9 == 0 && local_70 != 0;
  param_2 = local_70;
  bVar23 = bVar5;
  if (uVar9 != 0 || local_70 == 0) goto LAB_00403e7d;
LAB_00403606:
  *param_1 = 0x27;
  param_5 = 2;
  uVar15 = 1;
  local_78 = "\'";
  local_a0 = 1;
  local_5c = false;
  uVar9 = param_2;
  goto LAB_00402e18;
  while (__s1[uVar21] != 0) {
LAB_00403dd7:
    uVar21 = uVar21 + 1;
    if (param_4 <= uVar22 + uVar21) break;
  }
LAB_00403de7:
  bVar23 = false;
LAB_00403caa:
  if (1 < uVar21) {
LAB_0040386e:
    bVar26 = false;
    uVar21 = uVar21 + uVar22;
    uVar16 = uVar22;
    do {
      bVar17 = (byte)uVar19;
      if (bVar25) {
        bVar26 = param_5 == 2;
        if (local_5c) goto LAB_0040318c;
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
        if (uVar21 <= uVar22) goto LAB_0040300d;
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
        if (uVar21 <= uVar22) goto LAB_00403094;
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
LAB_00403374:
  if (bVar25) {
    bVar23 = false;
    bVar25 = bVar6;
    goto LAB_0040386e;
  }
switchD_0040339e_caseD_25:
  bVar25 = param_5 == 2;
LAB_00402f68:
  bVar17 = (byte)uVar19;
  bVar24 = (bool)((bVar6 ^ 1U | bVar25) ^ 1 | local_5c);
  bVar26 = bVar20;
  if (bVar24) {
LAB_00402f7f:
    bVar24 = false;
    bVar20 = bVar26;
LAB_00402f81:
    bVar17 = (byte)uVar19;
    uVar16 = uVar15;
    bVar4 = bVar3;
    if ((param_7 == 0) || ((*(uint *)(param_7 + (uVar19 >> 5) * 4) >> (bVar17 & 0x1f) & 1) == 0))
    goto LAB_00403078;
    bVar25 = param_5 == 2;
  }
  else {
LAB_00403078:
    bVar25 = param_5 == 2;
    uVar15 = uVar16;
    bVar3 = bVar4;
    if (!bVar20) {
      uVar22 = uVar22 + 1;
      bVar3 = (bool)((bVar24 ^ 1U) & bVar4);
LAB_00403094:
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
      goto LAB_0040300d;
    }
  }
joined_r0x00403177:
  if (local_5c) {
LAB_00403188:
    bVar26 = (bool)(bVar6 & bVar25);
    goto LAB_0040318c;
  }
LAB_00402fc2:
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
LAB_00402ffb:
  if (uVar15 < uVar9) {
    param_1[uVar15] = 0x5c;
  }
  uVar15 = uVar15 + 1;
  uVar22 = uVar22 + 1;
  bVar4 = bVar3;
LAB_0040300d:
  bVar3 = bVar4;
  if (uVar15 < uVar9) {
    param_1[uVar15] = bVar17;
  }
  uVar15 = uVar15 + 1;
  if (!bVar23) {
    bVar2 = false;
  }
  goto LAB_00402e28;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00403fb0(int param_1,undefined param_2,undefined param_3,undefined *param_4)

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
  puVar8 = (undefined *)PTR_DAT_0060b238;
  if (DAT_0060b250 <= param_1) {
    if (param_1 == 0x7fffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_00405010();
    }
    if (PTR_DAT_0060b238 == &DAT_0060b240) {
      puVar8 = (undefined *)FUN_00404e20(0);
      uVar6 = PTR_DAT_0060b248._4_4_;
      uVar5 = PTR_DAT_0060b248._0_4_;
      uVar3 = _UNK_0060b244;
      PTR_DAT_0060b238 = (undefined *)puVar8;
      *puVar8 = _DAT_0060b240;
      puVar8[1] = uVar3;
      puVar8[2] = uVar5;
      puVar8[3] = uVar6;
    }
    else {
      puVar8 = (undefined *)FUN_00404e20(PTR_DAT_0060b238);
      PTR_DAT_0060b238 = (undefined *)puVar8;
    }
    memset(puVar8 + (long)DAT_0060b250 * 4,0,(long)((param_1 + 1) - DAT_0060b250) << 4);
    DAT_0060b250 = param_1 + 1;
  }
  uVar2 = param_4[1];
  puVar10 = (ulong *)(puVar8 + (long)param_1 * 4);
  uVar4 = *puVar10;
  __ptr = (undefined *)puVar10[1];
  uVar9 = FUN_00402d80(__ptr,uVar4,param_2,param_3,*param_4,uVar2 | 1,param_4 + 2,
                       *(undefined *)(param_4 + 10),*(undefined *)(param_4 + 0xc));
  if (uVar4 <= uVar9) {
    uVar9 = uVar9 + 1;
    *puVar10 = uVar9;
    if (__ptr != &DAT_0060b2c0) {
      free(__ptr);
    }
    __ptr = (undefined *)FUN_00404dc0(uVar9);
    uVar3 = *param_4;
    puVar10[1] = (ulong)__ptr;
    FUN_00402d80(__ptr,uVar9,param_2,param_3,uVar3,uVar2 | 1,param_4 + 2,
                 *(undefined *)(param_4 + 10),*(undefined *)(param_4 + 0xc));
  }
  *piVar7 = iVar1;
  return __ptr;
}


void FUN_00404150(undefined *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_0060b3c0;
  }
  FUN_00404fc0(param_1,0x38);
  *piVar2 = iVar1;
  return;
}


undefined FUN_00404190(undefined *param_1)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = (undefined *)&DAT_0060b3c0;
  }
  return *param_1;
}


void FUN_004041a0(undefined *param_1,undefined param_2)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = (undefined *)&DAT_0060b3c0;
  }
  *param_1 = param_2;
  return;
}


uint FUN_004041b0(undefined *param_1,byte param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_0060b3c0;
  }
  uVar1 = *(uint *)(param_1 + (ulong)(param_2 >> 5) * 4 + 8);
  uVar2 = uVar1 >> (param_2 & 0x1f);
  *(uint *)(param_1 + (ulong)(param_2 >> 5) * 4 + 8) =
       ((param_3 ^ uVar2) & 1) << (param_2 & 0x1f) ^ uVar1;
  return uVar2 & 1;
}


undefined FUN_004041f0(undefined *param_1,undefined param_2)

{
  undefined uVar1;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_0060b3c0;
  }
  uVar1 = *(undefined *)(param_1 + 4);
  *(undefined *)(param_1 + 4) = param_2;
  return uVar1;
}


void FUN_00404210(undefined *param_1,long param_2,long param_3)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = (undefined *)&DAT_0060b3c0;
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


void FUN_00404240(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                 undefined *param_5)

{
  int iVar1;
  int *piVar2;
  
  if (param_5 == (undefined *)0x0) {
    param_5 = (undefined *)&DAT_0060b3c0;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  FUN_00402d80(param_1,param_2,param_3,param_4,*param_5,param_5[1],param_5 + 2,
               *(undefined *)(param_5 + 10),*(undefined *)(param_5 + 0xc));
  *piVar2 = iVar1;
  return;
}


undefined FUN_004042c0(undefined param_1,undefined param_2,long *param_3,undefined *param_4)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined uVar4;
  uint uVar5;
  
  if (param_4 == (undefined *)0x0) {
    param_4 = (undefined *)&DAT_0060b3c0;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  uVar5 = (uint)(param_3 == (long *)0x0) | param_4[1];
  lVar3 = FUN_00402d80(0,0,param_1,param_2,*param_4,uVar5,param_4 + 2,*(undefined *)(param_4 + 10),
                       *(undefined *)(param_4 + 0xc));
  uVar4 = FUN_00404dc0(lVar3 + 1);
  FUN_00402d80(uVar4,lVar3 + 1,param_1,param_2,*param_4,uVar5,param_4 + 2,
               *(undefined *)(param_4 + 10),*(undefined *)(param_4 + 0xc));
  *piVar2 = iVar1;
  if (param_3 != (long *)0x0) {
    *param_3 = lVar3;
  }
  return uVar4;
}


void FUN_004043b0(undefined param_1,undefined param_2,undefined param_3)

{
  FUN_004042c0(param_1,param_2,0,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004043c0(void)

{
  void **ppvVar1;
  void *__ptr;
  undefined *__ptr_00;
  void **ppvVar2;
  
  __ptr_00 = PTR_DAT_0060b238;
  if (1 < DAT_0060b250) {
    ppvVar2 = (void **)(PTR_DAT_0060b238 + 0x18);
    ppvVar1 = (void **)(PTR_DAT_0060b238 + (ulong)(DAT_0060b250 - 2) * 0x10 + 0x28);
    do {
      __ptr = *ppvVar2;
      ppvVar2 = ppvVar2 + 2;
      free(__ptr);
    } while (ppvVar2 != ppvVar1);
  }
  if (*(undefined **)(__ptr_00 + 8) != &DAT_0060b2c0) {
    free(*(undefined **)(__ptr_00 + 8));
    _DAT_0060b240 = 0x100;
    PTR_DAT_0060b248 = &DAT_0060b2c0;
  }
  if (__ptr_00 != &DAT_0060b240) {
    free(__ptr_00);
    PTR_DAT_0060b238 = &DAT_0060b240;
  }
  DAT_0060b250 = 1;
  return;
}


void FUN_00404460(undefined param_1,undefined param_2)

{
  FUN_00403fb0(param_1,param_2,0xffffffffffffffff,&DAT_0060b3c0);
  return;
}


void FUN_00404480(void)

{
  FUN_00403fb0();
  return;
}


void FUN_00404490(undefined param_1)

{
  FUN_00403fb0(0,param_1,0xffffffffffffffff,&DAT_0060b3c0);
  return;
}


void FUN_004044b0(undefined param_1,undefined param_2)

{
  FUN_00403fb0(0,param_1,param_2,&DAT_0060b3c0);
  return;
}


void FUN_004044d0(undefined param_1,int param_2,undefined param_3)

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
    FUN_00403fb0(param_1,param_3,0xffffffffffffffff,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00404540(undefined param_1,int param_2,undefined param_3,undefined param_4)

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
    FUN_00403fb0(param_1,param_3,param_4,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_004045b0(undefined param_1,undefined param_2)

{
  FUN_004044d0(0,param_1,param_2);
  return;
}


void FUN_004045c0(undefined param_1,undefined param_2,undefined param_3)

{
  FUN_00404540(0,param_1,param_2,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004045d0(undefined param_1,undefined param_2,byte param_3)

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
  
  local_18 = DAT_0060b3f0;
  local_48 = _DAT_0060b3c0;
  uStack_40 = uRam000000000060b3c8;
  local_38 = _DAT_0060b3d0;
  uStack_30 = uRam000000000060b3d8;
  puVar1 = (uint *)((long)&uStack_40 + (ulong)(param_3 >> 5) * 4);
  local_28 = _DAT_0060b3e0;
  uStack_20 = uRam000000000060b3e8;
  uVar2 = *puVar1;
  *puVar1 = (~(uVar2 >> (param_3 & 0x1f)) & 1) << (param_3 & 0x1f) ^ uVar2;
  FUN_00403fb0(0,param_1,param_2,&local_48);
  return;
}


void FUN_00404640(undefined param_1,char param_2)

{
  FUN_004045d0(param_1,0xffffffffffffffff,(int)param_2);
  return;
}


void FUN_00404650(undefined param_1)

{
  FUN_004045d0(param_1,0xffffffffffffffff,0x3a);
  return;
}


void FUN_00404670(undefined param_1,undefined param_2)

{
  FUN_004045d0(param_1,param_2,0x3a);
  return;
}


void FUN_00404680(undefined param_1,int param_2,undefined param_3)

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
    FUN_00403fb0(param_1,param_3,0xffffffffffffffff,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004046f0(undefined param_1,long param_2,long param_3,undefined param_4,undefined param_5
                 )

{
  undefined local_48;
  undefined uStack_40;
  undefined local_38;
  undefined uStack_30;
  undefined local_28;
  long lStack_20;
  long local_18;
  
  uStack_40 = uRam000000000060b3c8;
  local_38 = _DAT_0060b3d0;
  uStack_30 = uRam000000000060b3d8;
  local_28 = _DAT_0060b3e0;
  lStack_20 = uRam000000000060b3e8;
  local_18 = DAT_0060b3f0;
  local_48 = CONCAT44((int)((ulong)_DAT_0060b3c0 >> 0x20),10);
  if ((param_2 != 0) && (param_3 != 0)) {
    lStack_20 = param_2;
    local_18 = param_3;
    FUN_00403fb0(param_1,param_4,param_5,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00404760(void)

{
  FUN_004046f0();
  return;
}


void FUN_00404770(undefined param_1,undefined param_2,undefined param_3)

{
  FUN_004046f0(0,param_1,param_2,param_3,0xffffffffffffffff);
  return;
}


void FUN_00404790(undefined param_1,undefined param_2,undefined param_3,undefined param_4)

{
  FUN_004046f0(0,param_1,param_2,param_3,param_4);
  return;
}


void FUN_004047b0(void)

{
  FUN_00403fb0();
  return;
}


void FUN_004047c0(undefined param_1,undefined param_2)

{
  FUN_00403fb0(0,param_1,param_2,&DAT_0060b200);
  return;
}


void FUN_004047e0(undefined param_1,undefined param_2)

{
  FUN_00403fb0(param_1,param_2,0xffffffffffffffff,&DAT_0060b200);
  return;
}


void FUN_00404800(undefined param_1)

{
  FUN_00403fb0(0,param_1,0xffffffffffffffff,&DAT_0060b200);
  return;
}


undefined
FUN_00404820(FILE *param_1,long param_2,undefined param_3,undefined param_4,undefined *param_5,
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
  uVar1 = dcgettext(0,&DAT_004082cb,5);
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
    goto LAB_00404a9c;
  case 5:
    uVar1 = param_5[3];
    uVar4 = param_5[2];
    uVar5 = param_5[1];
    uVar6 = *param_5;
    uVar7 = dcgettext(0,"Written by %s, %s, %s,\n%s, and %s.\n",5);
LAB_00404a9c:
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
    goto LAB_00404b39;
  case 7:
    uVar1 = param_5[2];
    uVar4 = param_5[5];
    uVar5 = param_5[4];
    uVar6 = param_5[3];
    local_58 = param_5[1];
    uVar7 = *param_5;
    uVar3 = dcgettext(0,"Written by %s, %s, %s,\n%s, %s, %s, and %s.\n",5);
LAB_00404b39:
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
    goto LAB_0040491a;
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
LAB_0040491a:
  uVar1 = __fprintf_chk(param_1,1,uVar3,uVar7,local_50,local_58,uVar6,uVar5,uVar4,uVar1,local_48);
  return uVar1;
}


void FUN_00404c00(void)

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
  FUN_00404820();
  return;
}


void FUN_00404c20(void)

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
  FUN_00404820();
  return;
}


void FUN_00404c80(void)

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
  FUN_00404820();
  return;
}


void FUN_00404d40(void)

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


void FUN_00404dc0(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00405010();
  }
  return;
}


void FUN_00404de0(ulong param_1,ulong param_2)

{
  if ((-1 < SUB168(ZEXT816(param_1) * ZEXT816(param_2),0)) &&
     (SUB168(ZEXT816(param_1) * ZEXT816(param_2) >> 0x40,0) == 0)) {
    FUN_00404dc0();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00405010();
}


void thunk_FUN_00404dc0(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00405010();
  }
  return;
}


void * FUN_00404e20(void *param_1,size_t param_2)

{
  void *pvVar1;
  
  if ((param_2 == 0) && (param_1 != (void *)0x0)) {
    free(param_1);
    return (void *)0x0;
  }
  pvVar1 = realloc(param_1,param_2);
  if ((pvVar1 == (void *)0x0) && (param_2 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00405010();
  }
  return pvVar1;
}


void FUN_00404e60(undefined param_1,ulong param_2,ulong param_3)

{
  if ((-1 < SUB168(ZEXT816(param_2) * ZEXT816(param_3),0)) &&
     (SUB168(ZEXT816(param_2) * ZEXT816(param_3) >> 0x40,0) == 0)) {
    FUN_00404e20();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00405010();
}


void FUN_00404e90(long param_1,ulong *param_2,ulong param_3)

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
    if ((SUB168(ZEXT816(uVar2) * ZEXT816(param_3),0) < 0) || (uVar3 != 0)) goto LAB_00404eeb;
  }
  else {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x5555555555555554);
    uVar3 = SUB168(auVar1 % ZEXT816(param_3),0);
    if (SUB168(auVar1 / ZEXT816(param_3),0) <= uVar2) {
LAB_00404eeb:
                    /* WARNING: Subroutine does not return */
      FUN_00405010(param_1,param_2,uVar3);
    }
    uVar2 = (uVar2 >> 1) + 1 + uVar2;
  }
  *param_2 = uVar2;
  FUN_00404e20(param_1,uVar2 * param_3);
  return;
}


void FUN_00404f20(long param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (param_1 == 0) {
    if (uVar1 == 0) {
      *param_2 = 0x80;
      FUN_00404e20(0,0x80);
      return;
    }
    if ((long)uVar1 < 0) goto LAB_00404f6a;
  }
  else {
    if (0x5555555555555553 < uVar1) {
LAB_00404f6a:
                    /* WARNING: Subroutine does not return */
      FUN_00405010();
    }
    uVar1 = (uVar1 >> 1) + 1 + uVar1;
  }
  *param_2 = uVar1;
  FUN_00404e20(param_1,uVar1);
  return;
}


void FUN_00404f70(size_t param_1)

{
  void *__s;
  
  __s = (void *)FUN_00404dc0();
  memset(__s,0,param_1);
  return;
}


void FUN_00404f90(size_t param_1,ulong param_2)

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
  FUN_00405010();
}


void FUN_00404fc0(void *param_1,size_t param_2)

{
  void *__dest;
  
  __dest = (void *)FUN_00404dc0(param_2);
  memcpy(__dest,param_1,param_2);
  return;
}


void FUN_00404ff0(char *param_1)

{
  void *__dest;
  size_t sVar1;
  
  sVar1 = strlen(param_1);
  __dest = (void *)FUN_00404dc0(sVar1 + 1);
  memcpy(__dest,param_1,sVar1 + 1);
  return;
}


void FUN_00405010(void)

{
  undefined uVar1;
  
  uVar1 = dcgettext(0,"memory exhausted",5);
  error(DAT_0060b1f8,0,"%s",uVar1);
                    /* WARNING: Subroutine does not return */
  abort();
}


ulong FUN_00405050(undefined param_1,undefined param_2,ulong param_3,ulong param_4,
                  undefined param_5,undefined param_6,int param_7)

{
  ulong uVar1;
  int iVar2;
  int *piVar3;
  undefined uVar4;
  ulong local_40 [2];
  
  iVar2 = FUN_00405150(param_1,0,param_2,local_40);
  uVar1 = local_40[0];
  if (iVar2 == 0) {
    if ((param_3 <= local_40[0]) && (local_40[0] <= param_4)) {
      return local_40[0];
    }
    piVar3 = __errno_location();
    *piVar3 = (-(uint)(uVar1 < 0x40000000) & 0xffffffd7) + 0x4b;
  }
  else {
    piVar3 = __errno_location();
    if (iVar2 == 1) {
      *piVar3 = 0x4b;
    }
    else if (iVar2 == 3) {
      *piVar3 = 0;
    }
  }
  uVar4 = FUN_00404800(param_1);
  iVar2 = *piVar3;
  if (iVar2 == 0x16) {
    iVar2 = 0;
  }
  if (param_7 == 0) {
    param_7 = 1;
  }
  error(param_7,iVar2,"%s: %s",param_6,uVar4);
  return local_40[0];
}


void FUN_00405120(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                 undefined param_5,undefined param_6)

{
  FUN_00405050(param_1,10,param_2,param_3,param_4,param_5,param_6);
  return;
}


ulong FUN_00405150(byte *param_1,byte **param_2,uint param_3,ulong *param_4,char *param_5)

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
    if ((param_5 == (char *)0x0) || (bVar12 = *pbVar5, bVar12 == 0)) goto LAB_004051f2;
    pcVar7 = strchr(param_5,(int)(char)bVar12);
    if (pcVar7 == (char *)0x0) goto switchD_004052dc_caseD_1;
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
        goto LAB_004052ca;
      }
      if (bVar1 != 0x42) {
                    /* WARNING: Could not recover jumptable at 0x004052b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar6 = (*(code *)(&PTR_LAB_00408698)[bVar8])();
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
LAB_004052ca:
  iVar10 = (int)uVar11;
  switch(bVar12 - 0x42 & 0xff) {
  case 0:
    if (uVar6 >> 0x36 == 0) {
      uVar6 = uVar6 << 10;
      break;
    }
    goto LAB_00405337;
  default:
switchD_004052dc_caseD_1:
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
    goto LAB_004053c4;
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
    goto joined_r0x004052fc;
  case 0xb:
  case 0x2b:
    auVar2 = ZEXT816(uVar6) * ZEXT816((ulong)(long)iVar10);
    if (SUB168(auVar2 >> 0x40,0) != 0) goto LAB_00405337;
    auVar2 = (auVar2 & (undefined)0xffffffffffffffff) * ZEXT816((ulong)(long)iVar10);
joined_r0x004052fc:
    uVar6 = SUB168(auVar2,0);
    if (SUB168(auVar2 >> 0x40,0) != 0) {
LAB_00405337:
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
    goto LAB_004053c4;
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
    goto LAB_004053c4;
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
    goto LAB_004053c4;
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
LAB_004053c4:
    uVar14 = (ulong)(uVar13 | uVar9);
    break;
  case 0x20:
    if (uVar6 >> 0x37 != 0) goto LAB_00405337;
    uVar6 = uVar6 << 9;
    break;
  case 0x21:
    break;
  case 0x35:
    if ((long)uVar6 < 0) goto LAB_00405337;
    uVar6 = uVar6 * 2;
  }
  *param_2 = pbVar5 + iVar15;
  if (pbVar5[iVar15] != 0) {
    uVar14 = (ulong)((uint)uVar14 | 2);
  }
LAB_004051f2:
  *param_4 = uVar6;
  return uVar14;
}


int FUN_00405590(FILE *param_1)

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
      if (_Var4 == -1) goto LAB_004055f7;
    }
    iVar1 = FUN_00405610(param_1);
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
LAB_004055f7:
  iVar1 = fclose(param_1);
  return iVar1;
}


void FUN_00405610(FILE *param_1)

{
  int iVar1;
  
  if (param_1 != (FILE *)0x0) {
    iVar1 = __freading();
    if ((iVar1 != 0) && ((param_1->_flags & 0x100U) != 0)) {
      FUN_00405650(param_1,0,1);
      fflush(param_1);
      return;
    }
  }
  fflush(param_1);
  return;
}


ulong FUN_00405650(FILE *param_1,__off_t param_2,int param_3)

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


void FUN_004056b0(long param_1,int *param_2)

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
      if (iVar3 <= iVar8) goto LAB_0040572c;
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
      if (iVar9 <= iVar3) goto LAB_0040572c;
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
LAB_0040572c:
  param_2[0xc] = iVar2;
  param_2[0xb] = iVar1 + (iVar2 - iVar3);
  return;
}


int FUN_00405790(int param_1,undefined *param_2,char *param_3,char **param_4,undefined *param_5,
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
      if ((iVar5 == 0) && (sVar7 = strlen(__s1_00), sVar7 == sVar15)) goto LAB_004059b0;
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
            if (local_70 == (char *)0x0) goto LAB_004058f0;
          }
          else if (local_70 == (char *)0x0) {
            local_70 = (char *)calloc((long)iVar5,1);
            if (local_70 == (char *)0x0) {
              bVar3 = true;
              goto LAB_004058f0;
            }
            bVar4 = true;
            local_70[(int)local_44] = '\x01';
          }
          local_70[lVar16] = '\x01';
        }
      }
LAB_004058f0:
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
              __fprintf_chk(__stream,1,&DAT_00408ac9,param_9,*param_4);
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
LAB_004059b0:
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


uint FUN_00405db0(uint param_1,undefined *param_2,char *param_3,long param_4,undefined param_5,
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
LAB_00405dfa:
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
          goto LAB_00405efd;
        }
        pbVar8 = *(byte **)(param_7 + 8);
      }
      param_7[10] = 0;
    }
LAB_00405efd:
    param_7[6] = 1;
    cVar2 = *param_3;
LAB_00405f08:
    if (cVar2 == ':') {
      uVar3 = 0;
    }
    if (pbVar8 == (byte *)0x0) goto LAB_00405e78;
LAB_00405f1c:
    if (*pbVar8 == 0) goto LAB_00405e78;
  }
  else {
    if (param_7[6] == 0) goto LAB_00405dfa;
    cVar2 = *param_3;
    pbVar8 = *(byte **)(param_7 + 8);
    if ((cVar2 - 0x2bU & 0xfd) != 0) goto LAB_00405f08;
    pcVar4 = param_3 + 1;
    param_3 = param_3 + 1;
    if (*pcVar4 == ':') {
      uVar3 = 0;
    }
    if (pbVar8 != (byte *)0x0) goto LAB_00405f1c;
LAB_00405e78:
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
        FUN_004056b0(param_2,param_7);
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
LAB_00405fe6:
      if (uVar11 != param_1) {
        *param_7 = uVar11;
      }
      return 0xffffffff;
    }
    lVar6 = 3;
    pbVar8 = (byte *)param_2[(int)uVar11];
    pbVar9 = pbVar8;
    pbVar10 = &DAT_00408ae1;
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
          FUN_004056b0(param_2,param_7);
          uVar11 = param_7[0xb];
        }
      }
      param_7[0xc] = param_1;
      *param_7 = param_1;
      goto LAB_00405fe6;
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
        puVar15 = &DAT_00408ae1;
        goto LAB_00406145;
      }
      if ((int)param_6 != 0) {
        if (pbVar8[2] == 0) {
          pcVar4 = strchr(param_3,(int)(char)bVar14);
          param_6 = param_6 & 0xffffffff;
          if (pcVar4 != (char *)0x0) goto LAB_004060f0;
        }
        *(byte **)(param_7 + 8) = pbVar8 + 1;
        uVar11 = FUN_00405790(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar3,
                              &DAT_00408ae2);
        if (uVar11 != 0xffffffff) {
          return uVar11;
        }
        pbVar8 = (byte *)param_2[(int)*param_7];
      }
    }
LAB_004060f0:
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
  puVar15 = &DAT_00408b00;
LAB_00406145:
  uVar3 = FUN_00405790(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar3,puVar15);
  return uVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406380(void)

{
  DAT_0060b400 = DAT_0060b25c;
  _DAT_0060b404 = DAT_0060b258;
  FUN_00405db0();
  DAT_0060b25c = DAT_0060b400;
  DAT_0060b440 = DAT_0060b410;
  _DAT_0060b254 = DAT_0060b408;
  return;
}


void FUN_004063e0(void)

{
  FUN_00406380();
  return;
}


void FUN_00406400(void)

{
  FUN_00406380();
  return;
}


void FUN_00406420(void)

{
  FUN_00405db0();
  return;
}


void FUN_00406440(void)

{
  FUN_00406380();
  return;
}


void FUN_00406460(void)

{
  FUN_00405db0();
  return;
}


size_t FUN_00406480(wchar_t *param_1,byte *param_2,size_t param_3,mbstate_t *param_4)

{
  char cVar1;
  size_t sVar2;
  wchar_t local_1c;
  
  if (param_2 == (byte *)0x0) {
    param_3 = 1;
    param_2 = (byte *)0x408aff;
  }
  else {
    if (param_3 == 0) {
      return 0xfffffffffffffffe;
    }
    if (param_1 != (wchar_t *)0x0) goto LAB_004064a4;
  }
  param_1 = &local_1c;
LAB_004064a4:
  sVar2 = mbrtowc(param_1,(char *)param_2,param_3,param_4);
  if ((0xfffffffffffffffd < sVar2) && (cVar1 = FUN_00406670(0), cVar1 == '\0')) {
    sVar2 = 1;
    *param_1 = (uint)*param_2;
  }
  return sVar2;
}


ulong * FUN_00406500(ulong *param_1,char param_2,ulong param_3)

{
  char cVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  
  if (param_3 == 0) {
    return (ulong *)0x0;
  }
  if (((ulong)param_1 & 7) == 0) {
LAB_00406540:
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
      if (((ulong)param_1 & 7) == 0) goto LAB_00406540;
      cVar1 = *(char *)param_1;
    }
  }
  return param_1;
}


ulong FUN_00406610(uint *param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  
  lVar2 = __fpending();
  uVar1 = *param_1;
  uVar3 = FUN_00405590(param_1);
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


bool FUN_00406670(int param_1)

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
    pbVar5 = &DAT_00408b04;
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

char * FUN_004066d0(void)

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
  if (DAT_0060b438 != (char *)0x0) goto LAB_0040670a;
  pcVar7 = getenv("CHARSETALIASDIR");
  if ((pcVar7 == (char *)0x0) || (*pcVar7 == '\0')) {
    sVar6 = 0x73;
    sVar5 = 0x65;
    __n = 100;
    pcVar7 = 
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib"
    ;
LAB_004067f5:
    __file = (char *)malloc(sVar6);
    if (__file != (char *)0x0) {
      memcpy(__file,pcVar7,__n);
      __file[__n] = '/';
      goto LAB_00406816;
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
        goto LAB_004067f5;
      }
      sVar6 = __n + 0xe;
    }
    __file = (char *)malloc(sVar6);
    if (__file != (char *)0x0) {
      memcpy(__file,pcVar7,__n);
      sVar5 = __n;
LAB_00406816:
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
LAB_004068b0:
          pbVar8 = (byte *)__stream->_IO_read_ptr;
          if (__stream->_IO_read_end <= pbVar8) goto LAB_00406a3c;
          do {
            __stream->_IO_read_ptr = (char *)(pbVar8 + 1);
            uVar4 = (uint)*pbVar8;
            __ptr = pcVar7;
            while( true ) {
              pcVar7 = __ptr;
              if ((uVar4 - 9 < 2) || (uVar4 == 0x20)) goto LAB_004068b0;
              if (uVar4 == 0x23) goto LAB_00406aa1;
              ungetc(uVar4,__stream);
              iVar2 = fscanf(__stream,"%50s %50s",&local_b8,&local_78);
              puVar13 = &local_b8;
              if (iVar2 < 2) goto LAB_00406a4f;
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
                FUN_00405590(__stream);
                goto LAB_00406854;
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
LAB_00406a3c:
              uVar4 = __uflow(__stream);
              __ptr = pcVar7;
              if (uVar4 == 0xffffffff) goto LAB_00406a4f;
            }
          } while( true );
        }
        close(iVar2);
      }
      goto LAB_0040684e;
    }
  }
  DAT_0060b438 = "";
LAB_0040670a:
  cVar1 = *DAT_0060b438;
  pcVar7 = DAT_0060b438;
  do {
    if (cVar1 == '\0') {
LAB_00406764:
      if (*__s1 == '\0') {
        __s1 = "ASCII";
      }
      return __s1;
    }
    iVar2 = strcmp(__s1,pcVar7);
    if ((iVar2 == 0) || ((cVar1 == '*' && (pcVar7[1] == '\0')))) {
      sVar6 = strlen(pcVar7);
      __s1 = pcVar7 + sVar6 + 1;
      goto LAB_00406764;
    }
    sVar6 = strlen(pcVar7);
    sVar5 = strlen(pcVar7 + sVar6 + 1);
    pcVar7 = pcVar7 + sVar6 + 1 + sVar5 + 1;
    cVar1 = *pcVar7;
  } while( true );
LAB_00406aa1:
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
  if (uVar4 == 0xffffffff) goto LAB_00406a4f;
  goto LAB_004068b0;
LAB_00406a4f:
  FUN_00405590(__stream);
  if (local_d0 == 0) {
LAB_0040684e:
    pcVar7 = "";
  }
  else {
    pcVar7[local_d0] = '\0';
  }
LAB_00406854:
  free(__file);
  DAT_0060b438 = pcVar7;
  goto LAB_0040670a;
}


/* WARNING: Removing unreachable block (ram,0x00406c73) */
/* WARNING: Removing unreachable block (ram,0x00406c78) */

void FUN_00406c40(void)

{
  __DT_INIT();
  return;
}


void FUN_00406ca0(void)

{
  return;
}


void FUN_00406cb0(undefined param_1)

{
  __cxa_atexit(param_1,0,DAT_0060b1e8);
  return;
}


undefined FUN_00406cc8(undefined param_1,undefined param_2,undefined param_3)

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
  FUN_00401b51();
  return;
}

