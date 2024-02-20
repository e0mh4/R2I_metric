
#include "decompile_ghidra.h"
#define __int64 long long
#define __int32 int
#define __int16 short
#define __int8 char

void switchD_00402f00caseD_b(void)

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

void switchD_004049dacaseD_0(void)

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
  FUN_00402d10(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils",
                 "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale"
                );
  textdomain("coreutils");
  FUN_00406de0(FUN_00402c30);
  while (iVar2 = FUN_00406530(param_1,param_2,&DAT_00406f1a,&PTR_s_decode_00407440,0), iVar2 != -1)
  {
    if (iVar2 == 100) {
      bVar1 = true;
    }
    else {
      if (iVar2 < 0x65) {
        if (iVar2 == -0x83) {
          FUN_00404db0(stdout,"base32","GNU coreutils",PTR_DAT_0060b1f0,"Simon Josefsson",0);
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
        uVar9 = FUN_00405250(DAT_0060b440,0,0xffffffffffffffff,"");
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
      uVar6 = FUN_004047b0(0,3,__s1);
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
  FUN_00402ce0(pFVar5,2);
  if (bVar1) {
    FUN_00401bb0(pFVar5,stdout,uVar8);
  }
  else {
    FUN_00401dd0(pFVar5,stdout,uVar9);
  }
  iVar2 = FUN_004056c0(pFVar5);
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
  uVar9 = FUN_004047b0(0,3,__s1);
  lVar4 = error(1,*piVar7,"%s",uVar9);
LAB_00401a95:
  uVar9 = FUN_00404930(param_2[lVar4]);
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
            (FUN_00401830,unaff_retaddr,&stack0x00000008,FUN_00406d70,FUN_00406dd0,param_3,auStack_8
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
  byte *pbStack_16d48;
  char *pcStack_16d40;
  byte *apbStack_16d38 [5];
  char *pcStack_16d10;
  char *pcStack_16d08;
  char *pcStack_16d00;
  char *pcStack_16cf8;
  char *pcStack_16cf0;
  undefined uStack_16ce8;
  undefined uStack_16ce0;
  undefined uStack_16cd8;
  long lStack_16cd0;
  undefined uStack_16cc8;
  long lStack_16cb8;
  ulong uStack_16cb0;
  ulong uStack_16ca8;
  undefined auStack_16ca0 [30720];
  undefined auStack_f4a0 [49160];
  ulong uStack_3498;
  ulong uStack_3490;
  FILE *pFStack_3488;
  ulong uStack_3480;
  long lStack_3478;
  ulong uStack_3470;
  FILE *local_3468;
  char local_3459;
  size_t local_3450;
  int local_3444 [3];
  undefined local_3438 [5120];
  char local_2038 [8200];
  byte **ppbVar12;
  
  bVar24 = 0;
  uStack_3470 = 0x401bd6;
  local_3468 = param_2;
  local_3459 = param_3;
  FUN_004028f0(local_3444);
LAB_00401be0:
  uStack_3490 = 0;
LAB_00401c11:
  uStack_3470 = 0x401c32;
  sVar6 = fread_unlocked(local_2038 + uStack_3490,1,0x2000 - uStack_3490,param_1);
  local_3450 = sVar6;
  if (local_3459 == '\0') goto LAB_00401be8;
  unaff_R15 = 0;
  do {
    if (sVar6 == 0) {
LAB_00401be8:
      uVar3 = param_1->_flags;
      uStack_3490 = uStack_3490 + sVar6;
    }
    else {
      do {
        if (sVar6 <= unaff_R15) goto LAB_00401be8;
        unaff_R14 = uStack_3490 + unaff_R15;
        cVar1 = local_2038[unaff_R14];
        unaff_R13 = (ulong)(uint)(int)cVar1;
        uStack_3470 = 0x401c64;
        cVar2 = FUN_004028d0();
        if ((cVar1 != '=') && (cVar2 == '\0')) goto LAB_00401cb0;
        unaff_R15 = unaff_R15 + 1;
      } while (sVar6 != 0);
      uVar3 = param_1->_flags;
    }
    if ((uVar3 & 0x20) == 0) break;
    uStack_3470 = 0x401c97;
    sVar6 = dcgettext(0,"read error",5);
    uStack_3470 = 0x401c9f;
    piVar7 = __errno_location();
    uStack_3470 = 0x401cb0;
    error(1,*piVar7,sVar6);
LAB_00401cb0:
    sVar6 = sVar6 - 1;
    uStack_3470 = 0x401cd8;
    local_3450 = sVar6;
    memmove(local_2038 + unaff_R14,local_2038 + unaff_R14 + 1,sVar6 - unaff_R15);
  } while( true );
  if ((0x1fff < uStack_3490) || ((uVar3 & 0x10) != 0)) goto LAB_00401ce0;
  goto LAB_00401c11;
LAB_00401ce0:
  uStack_3498 = 0;
  do {
    uVar15 = (uint)uStack_3498;
    uVar21 = uStack_3490;
    if ((uVar3 & 0x10) == 0) {
      if (uVar15 != 0) goto LAB_00401be0;
    }
    else {
      if (1 < uVar15) {
        return;
      }
      if (uVar15 == 1) {
        if (local_3444[0] == 0) {
          return;
        }
        uVar21 = 0;
      }
    }
    local_3450 = 0x1400;
    uStack_3470 = 0x401d18;
    uVar3 = FUN_00402900(local_3444,local_2038,uVar21,local_3438,&local_3450);
    unaff_R15 = (ulong)uVar3;
    uStack_3470 = 0x401d33;
    sVar6 = fwrite_unlocked(local_3438,1,local_3450,local_3468);
    if (sVar6 < local_3450) {
      uStack_3470 = 0x401d89;
      uStack_3498 = dcgettext(0,"write error",5);
      uStack_3470 = 0x401d91;
      piVar7 = __errno_location();
      uStack_3470 = 0x401da2;
      error(1,*piVar7,uStack_3498);
LAB_00401da2:
      uStack_3470 = 0x401db3;
      uVar8 = dcgettext(0,"invalid input",5);
      p_Var16 = (_IO_FILE *)0x0;
      pFVar18 = (FILE *)0x1;
      uStack_3470 = 0x401dc4;
      error(1,0,uVar8);
      lStack_16cd0 = 0;
      lStack_16cb8 = extraout_RDX;
      pFStack_3488 = param_1;
      uStack_3480 = unaff_R13;
      lStack_3478 = unaff_R14;
      uStack_3470 = unaff_R15;
      break;
    }
    if ((char)uVar3 == '\0') goto LAB_00401da2;
    uVar3 = param_1->_flags;
    uStack_3498 = (ulong)(uVar15 + 1);
  } while( true );
  do {
    uVar21 = 0;
    do {
      uStack_16cc8 = 0x401e25;
      sVar6 = fread_unlocked(auStack_16ca0 + uVar21,1,0x7800 - uVar21,pFVar18);
      uVar21 = uVar21 + sVar6;
      uVar3 = pFVar18->_flags;
      if ((uVar3 & 0x30) != 0) {
        if (uVar21 == 0) goto LAB_00401e33;
        break;
      }
    } while (uVar21 < 0x7800);
    __n = ((uVar21 + 4) / 5) * 8;
    uStack_16cc8 = 0x401e95;
    FUN_004025d0(auStack_16ca0,uVar21,auStack_f4a0,__n);
    if (lStack_16cb8 == 0) {
      uStack_16cc8 = 0x401eb9;
      sVar6 = fwrite_unlocked(auStack_f4a0,1,__n,stdout);
      if (sVar6 <= __n && __n - sVar6 != 0) goto LAB_00402043;
    }
    else {
      uVar20 = 0;
      if (__n != 0) {
        do {
          __n_00 = lStack_16cb8 - lStack_16cd0;
          if (__n - uVar20 < (ulong)(lStack_16cb8 - lStack_16cd0)) {
            __n_00 = __n - uVar20;
          }
          if (__n_00 == 0) {
            pcVar10 = p_Var16->_IO_write_ptr;
            if (pcVar10 < p_Var16->_IO_write_end) {
              lStack_16cd0 = 0;
              p_Var16->_IO_write_ptr = pcVar10 + 1;
              *pcVar10 = '\n';
            }
            else {
              uStack_16cc8 = 0x401f82;
              uStack_16cb0 = uVar20;
              iVar4 = __overflow(p_Var16,10);
              if (iVar4 == -1) goto LAB_00402019;
              lStack_16cd0 = 0;
              uVar20 = uStack_16cb0;
            }
          }
          else {
            uStack_16cc8 = 0x401f50;
            uStack_16cb0 = __n_00;
            uStack_16ca8 = uVar20;
            sVar6 = fwrite_unlocked(auStack_f4a0 + uVar20,1,__n_00,stdout);
            if (sVar6 < uStack_16cb0) goto LAB_00401fef;
            lStack_16cd0 = lStack_16cd0 + uStack_16cb0;
            uVar20 = uStack_16ca8 + uStack_16cb0;
          }
        } while (uVar20 <= __n && __n - uVar20 != 0);
      }
    }
    uVar3 = pFVar18->_flags;
  } while (((uVar3 & 0x30) == 0) && (uVar21 == 0x7800));
LAB_00401e33:
  if ((lStack_16cb8 == 0) || (lStack_16cd0 == 0)) {
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
    uStack_16cc8 = 0x401fc0;
    iVar4 = __overflow(p_Var16,10);
    if (iVar4 != -1) goto LAB_00401fac;
    uStack_16cc8 = 0x401fd6;
    uVar8 = dcgettext(0,"write error",5);
    uStack_16cc8 = 0x401fde;
    piVar7 = __errno_location();
    uStack_16cc8 = 0x401fef;
    error(1,*piVar7,uVar8);
LAB_00401fef:
    uStack_16cc8 = 0x402000;
    uVar8 = dcgettext(0,"write error",5);
    uStack_16cc8 = 0x402008;
    piVar7 = __errno_location();
    uStack_16cc8 = 0x402019;
    error(1,*piVar7,uVar8);
LAB_00402019:
    uStack_16cc8 = 0x40202a;
    uVar8 = dcgettext(0,"write error",5);
    uStack_16cc8 = 0x402032;
    piVar7 = __errno_location();
    uStack_16cc8 = 0x402043;
    error(1,*piVar7,uVar8);
LAB_00402043:
    uStack_16cc8 = 0x402054;
    uVar8 = dcgettext(0,"write error",5);
    uStack_16cc8 = 0x40205c;
    piVar7 = __errno_location();
    uStack_16cc8 = 0x40206d;
    error(1,*piVar7,uVar8);
  }
  uStack_16cc8 = 0x40207e;
  uStack_16cd8 = dcgettext(0,"read error",5);
  uStack_16cc8 = 0x402086;
  piVar7 = __errno_location();
  iVar4 = 1;
  uStack_16cc8 = 0x402097;
  error(1,*piVar7,uStack_16cd8);
  uVar8 = DAT_0060b2a8;
  uStack_16cc8 = 0x7800;
  if (iVar4 != 0) {
    uVar9 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(stderr,1,uVar9,uVar8);
    goto LAB_004020df;
  }
  uVar9 = dcgettext(0,
                    "Usage: %s [OPTION]... [FILE]\nBase%d encode or decode FILE, or standard input, to standard output.\n"
                    ,5);
  __printf_chk(1,uVar9,uVar8,0x20);
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
  __printf_chk(1,uVar8,"base32");
  pbStack_16d48 = &DAT_00406e70;
  pcStack_16d40 = "test invocation";
  apbStack_16d38[0] = (byte *)0x406eea;
  apbStack_16d38[1] = (byte *)0x406e82;
  apbStack_16d38[2] = (byte *)0x406e98;
  apbStack_16d38[3] = (byte *)0x406ea2;
  apbStack_16d38[4] = (byte *)0x406eb1;
  pcStack_16d10 = "sha2 utilities";
  pcStack_16d08 = "sha384sum";
  pcStack_16d00 = "sha2 utilities";
  pcStack_16cf8 = "sha512sum";
  pcStack_16cf0 = "sha2 utilities";
  uStack_16ce8 = 0;
  uStack_16ce0 = 0;
  ppbVar11 = &pbStack_16d48;
  do {
    ppbVar12 = ppbVar11;
    ppbVar11 = ppbVar12 + 2;
    pbVar19 = *ppbVar11;
    bVar22 = false;
    bVar23 = pbVar19 == (byte *)0x0;
    if (bVar23) break;
    lVar14 = 7;
    pbVar17 = (byte *)"base32";
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
      pcVar10 = "base32";
      goto LAB_004023d3;
    }
    pcVar10 = "base32";
    uVar8 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    pcVar13 = " invocation";
    __printf_chk(1,uVar8,"https://www.gnu.org/software/coreutils/","base32");
  }
  else {
    uVar8 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar8,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar13 = setlocale(5,(char *)0x0);
    if ((pcVar13 != (char *)0x0) && (iVar5 = strncmp(pcVar13,"en_",3), iVar5 != 0)) {
LAB_004023d3:
      uVar8 = dcgettext(0,"Report %s translation bugs to <https://translationproject.org/team/>\n",5
                       );
      __printf_chk(1,uVar8,"base32");
    }
    pcVar13 = " invocation";
    uVar8 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    __printf_chk(1,uVar8,"https://www.gnu.org/software/coreutils/","base32");
    if (pcVar10 != "base32") {
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
  byte *pbStack_138e0;
  char *pcStack_138d8;
  byte *apbStack_138d0 [5];
  char *pcStack_138a8;
  char *pcStack_138a0;
  char *pcStack_13898;
  char *pcStack_13890;
  char *pcStack_13888;
  undefined uStack_13880;
  undefined uStack_13878;
  undefined uStack_13870;
  long lStack_13868;
  undefined uStack_13860;
  long lStack_13850;
  ulong uStack_13848;
  ulong uStack_13840;
  undefined auStack_13838 [30720];
  undefined local_c038 [49160];
  byte **ppbVar11;
  
  bVar20 = 0;
  lStack_13868 = 0;
  lStack_13850 = param_3;
  do {
    uVar17 = 0;
    do {
      uStack_13860 = 0x401e25;
      sVar5 = fread_unlocked(auStack_13838 + uVar17,1,0x7800 - uVar17,param_1);
      uVar17 = uVar17 + sVar5;
      uVar2 = param_1->_flags;
      if ((uVar2 & 0x30) != 0) {
        if (uVar17 == 0) goto LAB_00401e33;
        break;
      }
    } while (uVar17 < 0x7800);
    __n = ((uVar17 + 4) / 5) * 8;
    uStack_13860 = 0x401e95;
    FUN_004025d0(auStack_13838,uVar17,local_c038,__n);
    if (lStack_13850 == 0) {
      uStack_13860 = 0x401eb9;
      sVar5 = fwrite_unlocked(local_c038,1,__n,stdout);
      if (sVar5 <= __n && __n - sVar5 != 0) goto LAB_00402043;
    }
    else {
      uVar16 = 0;
      if (__n != 0) {
        do {
          __n_00 = lStack_13850 - lStack_13868;
          if (__n - uVar16 < (ulong)(lStack_13850 - lStack_13868)) {
            __n_00 = __n - uVar16;
          }
          if (__n_00 == 0) {
            pcVar8 = param_2->_IO_write_ptr;
            if (pcVar8 < param_2->_IO_write_end) {
              lStack_13868 = 0;
              param_2->_IO_write_ptr = pcVar8 + 1;
              *pcVar8 = '\n';
            }
            else {
              uStack_13860 = 0x401f82;
              uStack_13848 = uVar16;
              iVar3 = __overflow(param_2,10);
              if (iVar3 == -1) goto LAB_00402019;
              lStack_13868 = 0;
              uVar16 = uStack_13848;
            }
          }
          else {
            uStack_13860 = 0x401f50;
            uStack_13848 = __n_00;
            uStack_13840 = uVar16;
            sVar5 = fwrite_unlocked(local_c038 + uVar16,1,__n_00,stdout);
            if (sVar5 < uStack_13848) goto LAB_00401fef;
            lStack_13868 = lStack_13868 + uStack_13848;
            uVar16 = uStack_13840 + uStack_13848;
          }
        } while (uVar16 <= __n && __n - uVar16 != 0);
      }
    }
    uVar2 = param_1->_flags;
  } while (((uVar2 & 0x30) == 0) && (uVar17 == 0x7800));
LAB_00401e33:
  if ((lStack_13850 == 0) || (lStack_13868 == 0)) {
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
    uStack_13860 = 0x401fc0;
    iVar3 = __overflow(param_2,10);
    if (iVar3 != -1) goto LAB_00401fac;
    uStack_13860 = 0x401fd6;
    uVar9 = dcgettext(0,"write error",5);
    uStack_13860 = 0x401fde;
    piVar6 = __errno_location();
    uStack_13860 = 0x401fef;
    error(1,*piVar6,uVar9);
LAB_00401fef:
    uStack_13860 = 0x402000;
    uVar9 = dcgettext(0,"write error",5);
    uStack_13860 = 0x402008;
    piVar6 = __errno_location();
    uStack_13860 = 0x402019;
    error(1,*piVar6,uVar9);
LAB_00402019:
    uStack_13860 = 0x40202a;
    uVar9 = dcgettext(0,"write error",5);
    uStack_13860 = 0x402032;
    piVar6 = __errno_location();
    uStack_13860 = 0x402043;
    error(1,*piVar6,uVar9);
LAB_00402043:
    uStack_13860 = 0x402054;
    uVar9 = dcgettext(0,"write error",5);
    uStack_13860 = 0x40205c;
    piVar6 = __errno_location();
    uStack_13860 = 0x40206d;
    error(1,*piVar6,uVar9);
  }
  uStack_13860 = 0x40207e;
  uStack_13870 = dcgettext(0,"read error",5);
  uStack_13860 = 0x402086;
  piVar6 = __errno_location();
  iVar3 = 1;
  uStack_13860 = 0x402097;
  error(1,*piVar6,uStack_13870);
  uVar9 = DAT_0060b2a8;
  uStack_13860 = 0x7800;
  if (iVar3 != 0) {
    uVar7 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(stderr,1,uVar7,uVar9);
    goto LAB_004020df;
  }
  uVar7 = dcgettext(0,
                    "Usage: %s [OPTION]... [FILE]\nBase%d encode or decode FILE, or standard input, to standard output.\n"
                    ,5);
  __printf_chk(1,uVar7,uVar9,0x20);
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
  __printf_chk(1,uVar9,"base32");
  pbStack_138e0 = &DAT_00406e70;
  pcStack_138d8 = "test invocation";
  apbStack_138d0[0] = (byte *)0x406eea;
  apbStack_138d0[1] = (byte *)0x406e82;
  apbStack_138d0[2] = (byte *)0x406e98;
  apbStack_138d0[3] = (byte *)0x406ea2;
  apbStack_138d0[4] = (byte *)0x406eb1;
  pcStack_138a8 = "sha2 utilities";
  pcStack_138a0 = "sha384sum";
  pcStack_13898 = "sha2 utilities";
  pcStack_13890 = "sha512sum";
  pcStack_13888 = "sha2 utilities";
  uStack_13880 = 0;
  uStack_13878 = 0;
  ppbVar10 = &pbStack_138e0;
  do {
    ppbVar11 = ppbVar10;
    ppbVar10 = ppbVar11 + 2;
    pbVar15 = *ppbVar10;
    bVar18 = false;
    bVar19 = pbVar15 == (byte *)0x0;
    if (bVar19) break;
    lVar13 = 7;
    pbVar14 = (byte *)"base32";
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
      pcVar8 = "base32";
      goto LAB_004023d3;
    }
    pcVar8 = "base32";
    uVar9 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    pcVar12 = " invocation";
    __printf_chk(1,uVar9,"https://www.gnu.org/software/coreutils/","base32");
  }
  else {
    uVar9 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar9,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar12 = setlocale(5,(char *)0x0);
    if ((pcVar12 != (char *)0x0) && (iVar4 = strncmp(pcVar12,"en_",3), iVar4 != 0)) {
LAB_004023d3:
      uVar9 = dcgettext(0,"Report %s translation bugs to <https://translationproject.org/team/>\n",5
                       );
      __printf_chk(1,uVar9,"base32");
    }
    pcVar12 = " invocation";
    uVar9 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    __printf_chk(1,uVar9,"https://www.gnu.org/software/coreutils/","base32");
    if (pcVar8 != "base32") {
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
  __printf_chk(1,uVar3,uVar5,0x20);
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
  __printf_chk(1,uVar5,"base32");
  local_88 = &DAT_00406e70;
  local_80 = "test invocation";
  local_78[0] = (byte *)0x406eea;
  local_78[1] = (byte *)0x406e82;
  local_78[2] = (byte *)0x406e98;
  local_78[3] = (byte *)0x406ea2;
  local_78[4] = (byte *)0x406eb1;
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
    pbVar10 = (byte *)"base32";
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
        pcVar4 = "base32";
        goto LAB_004023d3;
      }
    }
    pcVar4 = "base32";
    uVar5 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    pcVar8 = " invocation";
    __printf_chk(1,uVar5,"https://www.gnu.org/software/coreutils/","base32");
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
        __printf_chk(1,uVar5,"base32");
      }
    }
    pcVar8 = " invocation";
    uVar5 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    __printf_chk(1,uVar5,"https://www.gnu.org/software/coreutils/","base32");
    if (pcVar4 != "base32") {
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
  byte *pbVar4;
  
  if (param_2 < 8) {
    return 0;
  }
  if ((char)(&DAT_00407540)[*param_1] < '\0') {
    return 0;
  }
  cVar1 = (&DAT_00407540)[param_1[1]];
  if (cVar1 < '\0') {
    return 0;
  }
  pbVar3 = *param_3;
  pbVar4 = pbVar3;
  if (*param_4 != 0) {
    pbVar4 = pbVar3 + 1;
    *pbVar3 = (&DAT_00407540)[*param_1] << 3 | cVar1 >> 2;
    *param_4 = *param_4 + -1;
  }
  if (param_1[2] == 0x3d) {
    if ((param_1[3] != 0x3d) || (param_1[4] != 0x3d)) goto LAB_0040257c;
LAB_004025b0:
    if (param_1[5] != 0x3d) goto LAB_0040257c;
  }
  else {
    if (((char)(&DAT_00407540)[param_1[2]] < '\0') ||
       (cVar2 = (&DAT_00407540)[param_1[3]], cVar2 < '\0')) goto LAB_0040257c;
    pbVar3 = pbVar4;
    if (*param_4 != 0) {
      pbVar3 = pbVar4 + 1;
      *pbVar4 = cVar1 << 6 | (&DAT_00407540)[param_1[2]] * '\x02' | cVar2 >> 4;
      *param_4 = *param_4 + -1;
    }
    pbVar4 = pbVar3;
    if (param_1[4] == 0x3d) goto LAB_004025b0;
    cVar1 = (&DAT_00407540)[param_1[4]];
    if (cVar1 < '\0') goto LAB_0040257c;
    if (*param_4 != 0) {
      pbVar4 = pbVar3 + 1;
      *pbVar3 = cVar2 << 4 | cVar1 >> 1;
      *param_4 = *param_4 + -1;
    }
    if (param_1[5] != 0x3d) {
      if (((char)(&DAT_00407540)[param_1[5]] < '\0') ||
         (cVar2 = (&DAT_00407540)[param_1[6]], cVar2 < '\0')) goto LAB_0040257c;
      pbVar3 = pbVar4;
      if (*param_4 != 0) {
        pbVar3 = pbVar4 + 1;
        *pbVar4 = cVar1 << 7 | (&DAT_00407540)[param_1[5]] << 2 | cVar2 >> 3;
        *param_4 = *param_4 + -1;
      }
      pbVar4 = pbVar3;
      if (param_1[7] != 0x3d) {
        if ((char)(&DAT_00407540)[param_1[7]] < '\0') goto LAB_0040257c;
        if (*param_4 != 0) {
          pbVar4 = pbVar3 + 1;
          *pbVar3 = cVar2 << 5 | (&DAT_00407540)[param_1[7]];
          *param_4 = *param_4 + -1;
        }
      }
      goto LAB_00402560;
    }
  }
  if ((param_1[6] == 0x3d) && (param_1[7] == 0x3d)) {
LAB_00402560:
    *param_3 = pbVar4;
    return 1;
  }
LAB_0040257c:
  *param_3 = pbVar4;
  return 0;
}


void FUN_004025d0(byte *param_1,long param_2,undefined *param_3,long param_4)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  if ((param_2 == 0) || (lVar4 = param_4, puVar5 = param_3, param_4 == 0)) {
    if (param_4 != 0) {
      *param_3 = 0;
    }
    return;
  }
  do {
    bVar2 = *param_1;
    *puVar5 = (&DAT_00407520)[bVar2 >> 3];
    if (lVar4 == 1) {
      return;
    }
    uVar3 = (uint)bVar2 * 4;
    if (param_2 == 1) {
      puVar5[1] = (&DAT_00407520)[uVar3 & 0x1c];
      if (lVar4 == 2) {
        return;
      }
      puVar5[2] = 0x3d;
      if (lVar4 == 3) {
        return;
      }
      puVar5[3] = 0x3d;
      if (lVar4 == 4) {
        return;
      }
LAB_0040278f:
      puVar5[4] = 0x3d;
      if (lVar4 == 5) {
        return;
      }
LAB_00402799:
      puVar5[5] = 0x3d;
      if (lVar4 == 6) {
        return;
      }
      puVar5[6] = 0x3d;
      if (lVar4 == 7) {
        return;
      }
LAB_004027ad:
      puVar5[7] = 0x3d;
      if (param_3 + param_4 + -8 == puVar5) {
        return;
      }
      param_2 = 0;
    }
    else {
      bVar2 = param_1[1];
      puVar5[1] = (&DAT_00407520)[uVar3 + (bVar2 >> 6) & 0x1f];
      if (lVar4 == 2) {
        return;
      }
      puVar5[2] = (&DAT_00407520)[bVar2 >> 1 & 0x1f];
      if (lVar4 == 3) {
        return;
      }
      if (param_2 == 2) {
        puVar5[3] = (&DAT_00407520)[(int)((uint)bVar2 * 0x10 & 0x1f)];
        if (param_3 + (param_4 - (long)puVar5) == (undefined *)0x4) {
          return;
        }
        goto LAB_0040278f;
      }
      bVar1 = param_1[2];
      puVar6 = param_3 + (param_4 - (long)puVar5);
      puVar5[3] = (&DAT_00407520)[(uint)bVar2 * 0x10 + (uint)(bVar1 >> 4) & 0x1f];
      if (puVar6 == (undefined *)0x4) {
        return;
      }
      if (param_2 == 3) {
        puVar5[4] = (&DAT_00407520)[(uint)bVar1 + (uint)bVar1 & 0x1e];
        if (puVar6 == (undefined *)0x5) {
          return;
        }
        goto LAB_00402799;
      }
      bVar2 = param_1[3];
      puVar5[4] = (&DAT_00407520)[(uint)bVar1 + (uint)bVar1 + (uint)(bVar2 >> 7) & 0x1f];
      if (puVar6 == (undefined *)0x5) {
        return;
      }
      puVar5[5] = (&DAT_00407520)[bVar2 >> 2 & 0x1f];
      if (lVar4 == 6) {
        return;
      }
      if (param_2 == 4) {
        puVar5[6] = (&DAT_00407520)[(uint)bVar2 * 8 & 0x18];
        if (puVar6 == (undefined *)0x7) {
          return;
        }
        goto LAB_004027ad;
      }
      bVar1 = param_1[4];
      puVar5[6] = (&DAT_00407520)[(uint)bVar2 * 8 + (uint)(bVar1 >> 5) & 0x1f];
      if (puVar6 == (undefined *)0x7) {
        return;
      }
      puVar5[7] = (&DAT_00407520)[bVar1 & 0x1f];
      if (param_3 + param_4 + -8 == puVar5) {
        return;
      }
      param_2 = param_2 + -5;
      if (param_2 != 0) {
        param_1 = param_1 + 5;
      }
    }
    puVar5 = puVar5 + 8;
    lVar4 = lVar4 + -8;
    if ((param_2 == 0) || (lVar4 == 0)) {
      if (lVar4 == 0) {
        return;
      }
      *puVar5 = 0;
      return;
    }
  } while( true );
}


ulong FUN_00402830(undefined param_1,ulong param_2,void **param_3)

{
  ulong __size;
  ulong uVar1;
  void *pvVar2;
  
  uVar1 = ((param_2 + 4) / 5) * 8;
  __size = uVar1 + 1;
  if (__size < param_2) {
    *param_3 = (void *)0x0;
    return 0;
  }
  pvVar2 = malloc(__size);
  *param_3 = pvVar2;
  if (pvVar2 != (void *)0x0) {
    FUN_004025d0(param_1,param_2,pvVar2,__size);
    return uVar1;
  }
  return __size;
}


uint FUN_004028d0(byte param_1)

{
  return ~(uint)(byte)(&DAT_00407540)[param_1] & 0xffffff00 |
         ~(uint)(byte)(&DAT_00407540)[param_1] >> 7 & 1;
}


void FUN_004028f0(undefined *param_1)

{
  *param_1 = 0;
  return;
}


ulong FUN_00402900(uint *param_1,uint *param_2,ulong param_3,long param_4,long *param_5)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  ulong in_RAX;
  long lVar4;
  uint uVar5;
  uint *puVar6;
  long lVar7;
  bool bVar8;
  uint *puVar9;
  long lVar10;
  bool bVar11;
  long local_50 [2];
  long local_40 [2];
  
  local_40[0] = *param_5;
  bVar11 = param_1 == (uint *)0x0;
  if (bVar11) {
    bVar8 = true;
  }
  else {
    in_RAX = (ulong)*param_1;
    bVar8 = *param_1 == 0 && param_3 != 0;
  }
  bVar2 = param_3 != 0;
  lVar4 = local_40[0];
  local_50[0] = param_4;
  while( true ) {
    lVar10 = lVar4;
    if (bVar8) {
      lVar7 = (long)param_2 + param_3;
      while( true ) {
        param_3 = lVar7 - (long)param_2;
        in_RAX = FUN_00402400(param_2,param_3,local_50,local_40);
        lVar4 = local_40[0];
        if ((char)in_RAX == '\0') break;
        param_2 = param_2 + 2;
        lVar10 = local_40[0];
      }
    }
    bVar3 = param_3 == 0 && (bVar11 || bVar2);
    in_RAX = in_RAX & 0xffffffffffffff00 | (ulong)bVar3;
    if (bVar3) goto LAB_00402a4a;
    puVar6 = param_2;
    if (param_3 == 0) break;
    if (*(char *)param_2 == '\n') {
      if (param_1 == (uint *)0x0) {
        puVar9 = (uint *)((long)param_2 + param_3);
        local_50[0] = local_50[0] + (lVar4 - lVar10);
        local_40[0] = lVar10;
        goto LAB_00402a22;
      }
      param_2 = (uint *)((long)param_2 + 1);
      param_3 = param_3 - 1;
    }
    else {
      puVar9 = (uint *)((long)param_2 + param_3);
      local_50[0] = local_50[0] + (lVar4 - lVar10);
      local_40[0] = lVar10;
      if (param_1 != (uint *)0x0) goto LAB_004029cd;
LAB_00402972:
      in_RAX = FUN_00402400(puVar6,param_3,local_50,local_40);
      lVar4 = local_40[0];
      if ((char)in_RAX == '\0') goto LAB_00402a4a;
      param_3 = (long)puVar9 - (long)param_2;
    }
  }
  local_50[0] = local_50[0] + (lVar4 - lVar10);
  puVar9 = param_2;
  if (param_1 == (uint *)0x0) {
    in_RAX = 1;
    lVar4 = lVar10;
  }
  else {
LAB_004029cd:
    uVar5 = *param_1;
    if (uVar5 == 8) {
      *param_1 = 0;
LAB_00402aaf:
      local_40[0] = lVar10;
      if ((7 < (long)param_3) && (lVar4 = FUN_00406630(param_2,10,8), lVar4 == 0)) {
        param_3 = 8;
        param_2 = param_2 + 2;
        goto LAB_00402972;
      }
      uVar5 = *param_1;
    }
    else {
      local_40[0] = lVar10;
      if (uVar5 == 0) goto LAB_00402aaf;
    }
    param_3 = (ulong)uVar5;
    if (param_2 < puVar9) {
      do {
        param_2 = (uint *)((long)puVar6 + 1);
        cVar1 = *(char *)puVar6;
        if (cVar1 != '\n') {
          uVar5 = (int)param_3 + 1;
          *param_1 = uVar5;
          *(char *)((long)param_1 + param_3 + 4) = cVar1;
          if (uVar5 == 8) {
            param_3 = 8;
            break;
          }
          param_3 = (ulong)uVar5;
        }
        puVar6 = param_2;
      } while (param_2 != puVar9);
    }
    puVar6 = param_1 + 1;
    if (param_3 != 0) {
LAB_00402a22:
      if (((7 < param_3) || (!bVar11 && !bVar2)) || (bVar11)) goto LAB_00402972;
    }
    in_RAX = 1;
    lVar4 = local_40[0];
  }
LAB_00402a4a:
  *param_5 = *param_5 - lVar4;
  return in_RAX;
}


ulong FUN_00402b60(undefined param_1,undefined param_2,ulong param_3,void **param_4,
                  size_t *param_5)

{
  void *pvVar1;
  ulong uVar2;
  size_t local_30;
  
  local_30 = (param_3 >> 3) * 5 + 5;
  pvVar1 = malloc(local_30);
  *param_4 = pvVar1;
  if (pvVar1 != (void *)0x0) {
    uVar2 = FUN_00402900(param_1,param_2,param_3,pvVar1,&local_30);
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


void FUN_00402c10(undefined param_1)

{
  DAT_0060b2a0 = param_1;
  return;
}


void FUN_00402c20(undefined param_1)

{
  DAT_0060b298 = param_1;
  return;
}


void FUN_00402c30(void)

{
  int iVar1;
  int *piVar2;
  undefined uVar3;
  undefined uVar4;
  
  iVar1 = FUN_00406740(stdout);
  if (iVar1 != 0) {
    piVar2 = __errno_location();
    if ((DAT_0060b298 == '\0') || (*piVar2 != 0x20)) {
      uVar3 = dcgettext(0,"write error",5);
      if (DAT_0060b2a0 == 0) {
        error(0,*piVar2,"%s",uVar3);
      }
      else {
        uVar4 = FUN_00404780();
        error(0,*piVar2,"%s: %s",uVar4,uVar3);
      }
      goto LAB_00402cae;
    }
  }
  iVar1 = FUN_00406740(stderr);
  if (iVar1 == 0) {
    return;
  }
LAB_00402cae:
                    /* WARNING: Subroutine does not return */
  _exit(DAT_0060b1f8);
}


void FUN_00402ce0(FILE *param_1,int param_2)

{
  int __fd;
  
  if (param_1 != (FILE *)0x0) {
    __fd = fileno(param_1);
    posix_fadvise(__fd,0,0,param_2);
    return;
  }
  return;
}


void FUN_00402d10(byte *param_1)

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
        pbVar6 = &DAT_00407688;
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


char * FUN_00402db0(char *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  byte *pbVar3;
  
  pcVar2 = (char *)dcgettext(0,param_1,5);
  if (param_1 == pcVar2) {
    pbVar3 = (byte *)FUN_00406800();
    if ((*pbVar3 & 0xdf) == 0x55) {
      if (((((pbVar3[1] & 0xdf) != 0x54) || ((pbVar3[2] & 0xdf) != 0x46)) || (pbVar3[3] != 0x2d)) ||
         ((pbVar3[4] != 0x38 || (pbVar3[5] != 0)))) {
LAB_00402e88:
        pcVar2 = "\"";
        if (param_2 != 9) {
          pcVar2 = "\'";
        }
        return pcVar2;
      }
      cVar1 = *pcVar2;
      pcVar2 = &DAT_00407699;
      if (cVar1 != '`') {
        pcVar2 = &DAT_0040768e;
      }
    }
    else {
      if (((((*pbVar3 & 0xdf) != 0x47) || ((pbVar3[1] & 0xdf) != 0x42)) || (pbVar3[2] != 0x31)) ||
         (((pbVar3[3] != 0x38 || (pbVar3[4] != 0x30)) ||
          ((pbVar3[5] != 0x33 || ((pbVar3[6] != 0x30 || (pbVar3[7] != 0)))))))) goto LAB_00402e88;
      cVar1 = *pcVar2;
      pcVar2 = &DAT_00407695;
      if (cVar1 != '`') {
        pcVar2 = &DAT_00407692;
      }
    }
  }
  return pcVar2;
}


ulong FUN_00402eb0(undefined *param_1,ulong param_2,char *param_3,ulong param_4,int param_5,
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
LAB_00403b01:
    if (param_2 != 0) {
      bVar3 = false;
      local_5b = false;
      bVar2 = true;
      local_70 = 0;
      goto LAB_00403736;
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
      goto LAB_00403b01;
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
      param_8 = (char *)FUN_00402db0(&DAT_0040769d,param_5);
      param_9 = (char *)FUN_00402db0(&DAT_00408bef);
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
LAB_00402f48:
  uVar22 = 0;
  bVar5 = local_5b;
LAB_00402f58:
  bVar23 = param_4 != uVar22;
  if (param_4 == 0xffffffffffffffff) {
    bVar23 = param_3[uVar22] != '\0';
  }
  bVar26 = bVar6;
  if (!bVar23) goto LAB_004036d8;
  bVar20 = (bool)(param_5 != 2 & bVar6);
  __s1 = (byte *)(param_3 + uVar22);
  uVar16 = uVar15;
  bVar4 = bVar3;
  if (bVar20) {
    if (local_a0 == 0) {
LAB_00403650:
      uVar19 = (ulong)*__s1;
      switch(uVar19) {
      case 0:
        goto switchD_00403662_caseD_0;
      default:
        bVar20 = false;
        goto switchD_004034ce_caseD_1;
      case 7:
        bVar17 = 0x61;
        goto LAB_00403365;
      case 8:
        bVar17 = 0x62;
        break;
      case 9:
switchD_00403662_caseD_9:
        bVar17 = 0x74;
        break;
      case 10:
switchD_00403662_caseD_a:
        bVar17 = 0x6e;
        break;
      case 0xb:
switchD_00403662_caseD_b:
        bVar17 = 0x76;
        goto LAB_00403365;
      case 0xc:
switchD_00403662_caseD_c:
        bVar17 = 0x66;
LAB_00403365:
        if (local_5c) {
          bVar25 = false;
          goto LAB_004032b8;
        }
LAB_00403370:
        bVar23 = false;
        goto LAB_0040312b;
      case 0xd:
        bVar20 = false;
switchD_00403048_caseD_d:
        bVar25 = param_5 == 2;
        uVar19 = 0xd;
        bVar13 = 0x72;
        goto LAB_00403280;
      case 0x20:
        bVar25 = false;
LAB_004036aa:
        uVar19 = 0x20;
        goto LAB_00403672;
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
switchD_00403048_caseD_21:
        bVar25 = false;
        goto LAB_0040328b;
      case 0x23:
      case 0x7e:
        bVar26 = false;
LAB_0040368a:
        if (uVar22 == 0) {
          bVar25 = false;
          bVar23 = bVar20;
          bVar20 = bVar26;
          goto LAB_00403098;
        }
        bVar23 = false;
        goto LAB_004030af;
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
LAB_00403672:
        bVar24 = false;
        bVar23 = bVar20;
        bVar20 = bVar25;
        goto LAB_004030b1;
      case 0x27:
        bVar20 = false;
        goto switchD_004034ce_caseD_27;
      case 0x3f:
        bVar20 = false;
        goto switchD_004034ce_caseD_3f;
      case 0x5c:
        bVar20 = false;
        goto switchD_00403048_caseD_5c;
      case 0x7b:
      case 0x7d:
        bVar20 = false;
        goto switchD_004034ce_caseD_7b;
      }
      bVar25 = false;
      bVar23 = false;
      goto joined_r0x004032a7;
    }
    if ((param_4 == 0xffffffffffffffff) && (1 < local_a0)) {
      param_4 = strlen(param_3);
    }
    if ((param_4 < uVar22 + local_a0) || (iVar7 = memcmp(__s1,local_78,local_a0), iVar7 != 0))
    goto LAB_00403650;
    if (!local_5c) {
      uVar19 = (ulong)*__s1;
      bVar25 = bVar20;
      switch(uVar19) {
      case 0:
        goto switchD_00403048_caseD_0;
      default:
        goto switchD_004034ce_caseD_1;
      case 7:
        bVar17 = 0x61;
        goto LAB_00403370;
      case 8:
        bVar25 = false;
        bVar23 = false;
        bVar17 = 0x62;
        break;
      case 9:
        goto switchD_00403662_caseD_9;
      case 10:
        goto switchD_00403662_caseD_a;
      case 0xb:
        goto switchD_00403662_caseD_b;
      case 0xc:
        goto switchD_00403662_caseD_c;
      case 0xd:
        goto switchD_00403048_caseD_d;
      case 0x20:
        goto LAB_004036aa;
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
        goto switchD_00403048_caseD_21;
      case 0x23:
      case 0x7e:
        bVar26 = bVar20;
        goto LAB_0040368a;
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
        goto LAB_00403672;
      case 0x27:
        goto switchD_004034ce_caseD_27;
      case 0x3f:
        goto switchD_004034ce_caseD_3f;
      case 0x5c:
        goto switchD_00403048_caseD_5c;
      case 0x7b:
      case 0x7d:
        goto switchD_004034ce_caseD_7b;
      }
      goto LAB_004030f2;
    }
    goto LAB_004032ca;
  }
  uVar19 = (ulong)*__s1;
  switch(uVar19) {
  case 0:
    if (bVar6) {
switchD_00403662_caseD_0:
      if (!local_5c) {
        bVar20 = false;
switchD_00403048_caseD_0:
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
            goto LAB_004031a8;
          }
LAB_004033ea:
          param_1[uVar16] = 0x5c;
          uVar15 = uVar16;
        }
        else if (uVar15 < uVar9) goto LAB_004033ea;
        uVar16 = uVar15 + 1;
        bVar24 = bVar23;
        if (param_5 == 2) {
          bVar17 = 0x30;
          bVar23 = false;
          bVar4 = bVar3;
          goto LAB_004031a8;
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
LAB_00403429:
        bVar17 = (byte)uVar19;
        bVar23 = false;
        uVar15 = uVar16;
        bVar4 = bVar3;
        if ((bool)(bVar6 ^ 1U | bVar26)) goto LAB_004031a8;
        goto LAB_004030b1;
      }
      bVar26 = param_5 == 2;
      goto LAB_004032bc;
    }
    if ((param_6 & 1) == 0) {
      bVar25 = param_5 == 2;
      uVar19 = 0;
      bVar23 = false;
      bVar20 = false;
      goto LAB_00403098;
    }
    uVar22 = uVar22 + 1;
    goto LAB_00402f58;
  default:
switchD_004034ce_caseD_1:
    bVar25 = bVar6;
    if (sVar8 != 1) {
      local_40[0] = (mbstate_t)0x0;
      if (param_4 == 0xffffffffffffffff) {
        param_4 = strlen(param_3);
      }
      uVar21 = 0;
      do {
        uVar1 = uVar22 + uVar21;
        lVar11 = FUN_004065b0(&local_44,param_3 + uVar1,param_4 - uVar1,local_40);
        if (lVar11 == 0) break;
        if (lVar11 == -1) {
          bVar23 = false;
          goto LAB_00403dda;
        }
        if (lVar11 == -2) {
          if ((param_4 <= uVar1) || (param_3[uVar1] == '\0')) goto LAB_00403f17;
          goto LAB_00403f07;
        }
        if (((param_5 == 2) && (local_5c)) && (lVar11 != 1)) {
          pcVar12 = param_3 + uVar1 + 1;
          do {
            if (((byte)(*pcVar12 + 0xa5U) < 0x22) &&
               ((1L << (*pcVar12 + 0xa5U & 0x3f) & 0x20000002bU) != 0)) {
              param_5 = 2;
              goto LAB_004032bc;
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
      goto LAB_00403dda;
    }
    ppuVar10 = __ctype_b_loc();
    uVar21 = 1;
    bVar25 = ((*ppuVar10)[uVar19] & 0x4000) == 0;
    bVar23 = !bVar25;
    bVar25 = (bool)(bVar25 & bVar6);
    goto LAB_004034a4;
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
    goto LAB_004034e2;
  case 10:
    uVar19 = 10;
    bVar13 = 0x6e;
    goto LAB_004034e2;
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
LAB_004034e2:
    bVar25 = param_5 == 2;
    bVar20 = (bool)(local_5c & bVar25);
    if (bVar20) {
LAB_004034fa:
      param_5 = 2;
      goto LAB_004032bc;
    }
    break;
  case 0x20:
    uVar19 = 0x20;
    goto LAB_00403086;
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
LAB_00403086:
    bVar25 = param_5 == 2;
    if ((local_5c) && (bVar25)) goto LAB_004034fa;
    goto LAB_00403098;
  case 0x23:
  case 0x7e:
LAB_0040307d:
    bVar25 = param_5 == 2;
    if (uVar22 == 0) goto LAB_00403086;
    goto LAB_0040328b;
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
    goto switchD_004034ce_caseD_25;
  case 0x27:
switchD_004034ce_caseD_27:
    bVar5 = bVar23;
    if (param_5 != 2) {
      bVar25 = false;
      uVar19 = 0x27;
      goto LAB_00403098;
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
      goto LAB_004031a8;
    }
    goto LAB_004032bc;
  case 0x3f:
switchD_004034ce_caseD_3f:
    if (param_5 == 2) {
      if (!local_5c) {
        bVar17 = 0x3f;
        bVar24 = false;
        bVar23 = false;
        goto LAB_004031a8;
      }
      goto LAB_004032bc;
    }
    if (param_5 != 5) {
      bVar25 = param_5 == 2;
      uVar19 = 0x3f;
      bVar23 = false;
      goto LAB_00403098;
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
        goto LAB_00403429;
      }
      goto LAB_004032ca;
    }
    bVar25 = false;
    uVar19 = 0x3f;
    bVar23 = false;
    goto LAB_00403098;
  case 0x5c:
    if (param_5 != 2) {
switchD_00403048_caseD_5c:
      uVar19 = 0x5c;
      bVar17 = 0x5c;
      bVar13 = 0x5c;
      bVar25 = (bool)(bVar6 & local_5c & local_a0 != 0);
      if (!bVar25) break;
      uVar22 = uVar22 + 1;
      bVar23 = false;
      goto LAB_004031c4;
    }
    if (local_5c) goto LAB_004032bc;
    uVar22 = uVar22 + 1;
    bVar23 = false;
    bVar17 = 0x5c;
    goto LAB_004031c4;
  case 0x7b:
  case 0x7d:
switchD_004034ce_caseD_7b:
    bVar24 = param_4 != 1;
    if (param_4 == 0xffffffffffffffff) {
      bVar24 = param_3[1] != '\0';
    }
    bVar25 = param_5 == 2;
    if (!bVar24) goto LAB_0040307d;
    goto LAB_0040328b;
  }
LAB_00403280:
  if (!bVar6) {
LAB_0040328b:
    bVar23 = false;
    goto LAB_00403098;
  }
  bVar23 = false;
  bVar17 = bVar13;
  goto joined_r0x004032a7;
LAB_004036d8:
  if ((uVar15 == 0) && ((bool)(local_5c & param_5 == 2))) {
    param_5 = 2;
LAB_004032bc:
    if (bVar26) {
      param_5 = 4;
    }
LAB_004032ca:
    uVar9 = FUN_00402eb0(param_1,uVar9,param_3,param_4,param_5,param_6 & 0xfffffffd,0,param_8,
                         param_9);
    return uVar9;
  }
  bVar26 = (bool)(param_5 == 2 & (local_5c ^ 1U));
  bVar23 = (bool)(local_5c ^ 1U);
  if ((!bVar26) || (bVar23 = bVar26, !bVar5)) {
LAB_00403fad:
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
    uVar9 = FUN_00402eb0(param_1,local_70,param_3,param_4,5,param_6,param_7,param_8,param_9);
    return uVar9;
  }
  local_5b = uVar9 == 0 && local_70 != 0;
  param_2 = local_70;
  bVar23 = bVar5;
  if (uVar9 != 0 || local_70 == 0) goto LAB_00403fad;
LAB_00403736:
  *param_1 = 0x27;
  param_5 = 2;
  uVar15 = 1;
  local_78 = "\'";
  local_a0 = 1;
  local_5c = false;
  uVar9 = param_2;
  goto LAB_00402f48;
  while (__s1[uVar21] != 0) {
LAB_00403f07:
    uVar21 = uVar21 + 1;
    if (param_4 <= uVar22 + uVar21) break;
  }
LAB_00403f17:
  bVar23 = false;
LAB_00403dda:
  if (1 < uVar21) {
LAB_0040399e:
    bVar26 = false;
    uVar21 = uVar21 + uVar22;
    uVar16 = uVar22;
    do {
      bVar17 = (byte)uVar19;
      if (bVar25) {
        bVar26 = param_5 == 2;
        if (local_5c) goto LAB_004032bc;
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
        if (uVar21 <= uVar22) goto LAB_0040313d;
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
        if (uVar21 <= uVar22) goto LAB_004031c4;
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
LAB_004034a4:
  if (bVar25) {
    bVar23 = false;
    bVar25 = bVar6;
    goto LAB_0040399e;
  }
switchD_004034ce_caseD_25:
  bVar25 = param_5 == 2;
LAB_00403098:
  bVar17 = (byte)uVar19;
  bVar24 = (bool)((bVar6 ^ 1U | bVar25) ^ 1 | local_5c);
  bVar26 = bVar20;
  if (bVar24) {
LAB_004030af:
    bVar24 = false;
    bVar20 = bVar26;
LAB_004030b1:
    bVar17 = (byte)uVar19;
    uVar16 = uVar15;
    bVar4 = bVar3;
    if ((param_7 == 0) || ((*(uint *)(param_7 + (uVar19 >> 5) * 4) >> (bVar17 & 0x1f) & 1) == 0))
    goto LAB_004031a8;
    bVar25 = param_5 == 2;
  }
  else {
LAB_004031a8:
    bVar25 = param_5 == 2;
    uVar15 = uVar16;
    bVar3 = bVar4;
    if (!bVar20) {
      uVar22 = uVar22 + 1;
      bVar3 = (bool)((bVar24 ^ 1U) & bVar4);
LAB_004031c4:
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
      goto LAB_0040313d;
    }
  }
joined_r0x004032a7:
  if (local_5c) {
LAB_004032b8:
    bVar26 = (bool)(bVar6 & bVar25);
    goto LAB_004032bc;
  }
LAB_004030f2:
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
LAB_0040312b:
  if (uVar15 < uVar9) {
    param_1[uVar15] = 0x5c;
  }
  uVar15 = uVar15 + 1;
  uVar22 = uVar22 + 1;
  bVar4 = bVar3;
LAB_0040313d:
  bVar3 = bVar4;
  if (uVar15 < uVar9) {
    param_1[uVar15] = bVar17;
  }
  uVar15 = uVar15 + 1;
  if (!bVar23) {
    bVar2 = false;
  }
  goto LAB_00402f58;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_004040e0(int param_1,undefined param_2,undefined param_3,undefined *param_4)

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
      FUN_00405140();
    }
    if (PTR_DAT_0060b238 == &DAT_0060b240) {
      puVar8 = (undefined *)FUN_00404f50(0);
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
      puVar8 = (undefined *)FUN_00404f50(PTR_DAT_0060b238);
      PTR_DAT_0060b238 = (undefined *)puVar8;
    }
    memset(puVar8 + (long)DAT_0060b250 * 4,0,(long)((param_1 + 1) - DAT_0060b250) << 4);
    DAT_0060b250 = param_1 + 1;
  }
  uVar2 = param_4[1];
  puVar10 = (ulong *)(puVar8 + (long)param_1 * 4);
  uVar4 = *puVar10;
  __ptr = (undefined *)puVar10[1];
  uVar9 = FUN_00402eb0(__ptr,uVar4,param_2,param_3,*param_4,uVar2 | 1,param_4 + 2,
                       *(undefined *)(param_4 + 10),*(undefined *)(param_4 + 0xc));
  if (uVar4 <= uVar9) {
    uVar9 = uVar9 + 1;
    *puVar10 = uVar9;
    if (__ptr != &DAT_0060b2c0) {
      free(__ptr);
    }
    __ptr = (undefined *)FUN_00404ef0(uVar9);
    uVar3 = *param_4;
    puVar10[1] = (ulong)__ptr;
    FUN_00402eb0(__ptr,uVar9,param_2,param_3,uVar3,uVar2 | 1,param_4 + 2,
                 *(undefined *)(param_4 + 10),*(undefined *)(param_4 + 0xc));
  }
  *piVar7 = iVar1;
  return __ptr;
}


void FUN_00404280(undefined *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_0060b3c0;
  }
  FUN_004050f0(param_1,0x38);
  *piVar2 = iVar1;
  return;
}


undefined FUN_004042c0(undefined *param_1)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = (undefined *)&DAT_0060b3c0;
  }
  return *param_1;
}


void FUN_004042d0(undefined *param_1,undefined param_2)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = (undefined *)&DAT_0060b3c0;
  }
  *param_1 = param_2;
  return;
}


uint FUN_004042e0(undefined *param_1,byte param_2,uint param_3)

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


undefined FUN_00404320(undefined *param_1,undefined param_2)

{
  undefined uVar1;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_0060b3c0;
  }
  uVar1 = *(undefined *)(param_1 + 4);
  *(undefined *)(param_1 + 4) = param_2;
  return uVar1;
}


void FUN_00404340(undefined *param_1,long param_2,long param_3)

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


void FUN_00404370(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                 undefined *param_5)

{
  int iVar1;
  int *piVar2;
  
  if (param_5 == (undefined *)0x0) {
    param_5 = (undefined *)&DAT_0060b3c0;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  FUN_00402eb0(param_1,param_2,param_3,param_4,*param_5,param_5[1],param_5 + 2,
               *(undefined *)(param_5 + 10),*(undefined *)(param_5 + 0xc));
  *piVar2 = iVar1;
  return;
}


undefined FUN_004043f0(undefined param_1,undefined param_2,long *param_3,undefined *param_4)

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
  lVar3 = FUN_00402eb0(0,0,param_1,param_2,*param_4,uVar5,param_4 + 2,*(undefined *)(param_4 + 10),
                       *(undefined *)(param_4 + 0xc));
  uVar4 = FUN_00404ef0(lVar3 + 1);
  FUN_00402eb0(uVar4,lVar3 + 1,param_1,param_2,*param_4,uVar5,param_4 + 2,
               *(undefined *)(param_4 + 10),*(undefined *)(param_4 + 0xc));
  *piVar2 = iVar1;
  if (param_3 != (long *)0x0) {
    *param_3 = lVar3;
  }
  return uVar4;
}


void FUN_004044e0(undefined param_1,undefined param_2,undefined param_3)

{
  FUN_004043f0(param_1,param_2,0,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004044f0(void)

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


void FUN_00404590(undefined param_1,undefined param_2)

{
  FUN_004040e0(param_1,param_2,0xffffffffffffffff,&DAT_0060b3c0);
  return;
}


void FUN_004045b0(void)

{
  FUN_004040e0();
  return;
}


void FUN_004045c0(undefined param_1)

{
  FUN_004040e0(0,param_1,0xffffffffffffffff,&DAT_0060b3c0);
  return;
}


void FUN_004045e0(undefined param_1,undefined param_2)

{
  FUN_004040e0(0,param_1,param_2,&DAT_0060b3c0);
  return;
}


void FUN_00404600(undefined param_1,int param_2,undefined param_3)

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
    FUN_004040e0(param_1,param_3,0xffffffffffffffff,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00404670(undefined param_1,int param_2,undefined param_3,undefined param_4)

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
    FUN_004040e0(param_1,param_3,param_4,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_004046e0(undefined param_1,undefined param_2)

{
  FUN_00404600(0,param_1,param_2);
  return;
}


void FUN_004046f0(undefined param_1,undefined param_2,undefined param_3)

{
  FUN_00404670(0,param_1,param_2,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404700(undefined param_1,undefined param_2,byte param_3)

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
  FUN_004040e0(0,param_1,param_2,&local_48);
  return;
}


void FUN_00404770(undefined param_1,char param_2)

{
  FUN_00404700(param_1,0xffffffffffffffff,(int)param_2);
  return;
}


void FUN_00404780(undefined param_1)

{
  FUN_00404700(param_1,0xffffffffffffffff,0x3a);
  return;
}


void FUN_004047a0(undefined param_1,undefined param_2)

{
  FUN_00404700(param_1,param_2,0x3a);
  return;
}


void FUN_004047b0(undefined param_1,int param_2,undefined param_3)

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
    FUN_004040e0(param_1,param_3,0xffffffffffffffff,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404820(undefined param_1,long param_2,long param_3,undefined param_4,undefined param_5
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
    FUN_004040e0(param_1,param_4,param_5,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00404890(void)

{
  FUN_00404820();
  return;
}


void FUN_004048a0(undefined param_1,undefined param_2,undefined param_3)

{
  FUN_00404820(0,param_1,param_2,param_3,0xffffffffffffffff);
  return;
}


void FUN_004048c0(undefined param_1,undefined param_2,undefined param_3,undefined param_4)

{
  FUN_00404820(0,param_1,param_2,param_3,param_4);
  return;
}


void FUN_004048e0(void)

{
  FUN_004040e0();
  return;
}


void FUN_004048f0(undefined param_1,undefined param_2)

{
  FUN_004040e0(0,param_1,param_2,&DAT_0060b200);
  return;
}


void FUN_00404910(undefined param_1,undefined param_2)

{
  FUN_004040e0(param_1,param_2,0xffffffffffffffff,&DAT_0060b200);
  return;
}


void FUN_00404930(undefined param_1)

{
  FUN_004040e0(0,param_1,0xffffffffffffffff,&DAT_0060b200);
  return;
}


undefined
FUN_00404950(FILE *param_1,long param_2,undefined param_3,undefined param_4,undefined *param_5,
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
  uVar1 = dcgettext(0,&DAT_004083eb,5);
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
    goto LAB_00404bcc;
  case 5:
    uVar1 = param_5[3];
    uVar4 = param_5[2];
    uVar5 = param_5[1];
    uVar6 = *param_5;
    uVar7 = dcgettext(0,"Written by %s, %s, %s,\n%s, and %s.\n",5);
LAB_00404bcc:
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
    goto LAB_00404c69;
  case 7:
    uVar1 = param_5[2];
    uVar4 = param_5[5];
    uVar5 = param_5[4];
    uVar6 = param_5[3];
    local_58 = param_5[1];
    uVar7 = *param_5;
    uVar3 = dcgettext(0,"Written by %s, %s, %s,\n%s, %s, %s, and %s.\n",5);
LAB_00404c69:
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
    goto LAB_00404a4a;
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
LAB_00404a4a:
  uVar1 = __fprintf_chk(param_1,1,uVar3,uVar7,local_50,local_58,uVar6,uVar5,uVar4,uVar1,local_48);
  return uVar1;
}


void FUN_00404d30(void)

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
  FUN_00404950();
  return;
}


void FUN_00404d50(void)

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
  FUN_00404950();
  return;
}


void FUN_00404db0(void)

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
  FUN_00404950();
  return;
}


void FUN_00404e70(void)

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


void FUN_00404ef0(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00405140();
  }
  return;
}


void FUN_00404f10(ulong param_1,ulong param_2)

{
  if ((-1 < SUB168(ZEXT816(param_1) * ZEXT816(param_2),0)) &&
     (SUB168(ZEXT816(param_1) * ZEXT816(param_2) >> 0x40,0) == 0)) {
    FUN_00404ef0();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00405140();
}


void thunk_FUN_00404ef0(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00405140();
  }
  return;
}


void * FUN_00404f50(void *param_1,size_t param_2)

{
  void *pvVar1;
  
  if ((param_2 == 0) && (param_1 != (void *)0x0)) {
    free(param_1);
    return (void *)0x0;
  }
  pvVar1 = realloc(param_1,param_2);
  if ((pvVar1 == (void *)0x0) && (param_2 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00405140();
  }
  return pvVar1;
}


void FUN_00404f90(undefined param_1,ulong param_2,ulong param_3)

{
  if ((-1 < SUB168(ZEXT816(param_2) * ZEXT816(param_3),0)) &&
     (SUB168(ZEXT816(param_2) * ZEXT816(param_3) >> 0x40,0) == 0)) {
    FUN_00404f50();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00405140();
}


void FUN_00404fc0(long param_1,ulong *param_2,ulong param_3)

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
    if ((SUB168(ZEXT816(uVar2) * ZEXT816(param_3),0) < 0) || (uVar3 != 0)) goto LAB_0040501b;
  }
  else {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x5555555555555554);
    uVar3 = SUB168(auVar1 % ZEXT816(param_3),0);
    if (SUB168(auVar1 / ZEXT816(param_3),0) <= uVar2) {
LAB_0040501b:
                    /* WARNING: Subroutine does not return */
      FUN_00405140(param_1,param_2,uVar3);
    }
    uVar2 = (uVar2 >> 1) + 1 + uVar2;
  }
  *param_2 = uVar2;
  FUN_00404f50(param_1,uVar2 * param_3);
  return;
}


void FUN_00405050(long param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (param_1 == 0) {
    if (uVar1 == 0) {
      *param_2 = 0x80;
      FUN_00404f50(0,0x80);
      return;
    }
    if ((long)uVar1 < 0) goto LAB_0040509a;
  }
  else {
    if (0x5555555555555553 < uVar1) {
LAB_0040509a:
                    /* WARNING: Subroutine does not return */
      FUN_00405140();
    }
    uVar1 = (uVar1 >> 1) + 1 + uVar1;
  }
  *param_2 = uVar1;
  FUN_00404f50(param_1,uVar1);
  return;
}


void FUN_004050a0(size_t param_1)

{
  void *__s;
  
  __s = (void *)FUN_00404ef0();
  memset(__s,0,param_1);
  return;
}


void FUN_004050c0(size_t param_1,ulong param_2)

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
  FUN_00405140();
}


void FUN_004050f0(void *param_1,size_t param_2)

{
  void *__dest;
  
  __dest = (void *)FUN_00404ef0(param_2);
  memcpy(__dest,param_1,param_2);
  return;
}


void FUN_00405120(char *param_1)

{
  void *__dest;
  size_t sVar1;
  
  sVar1 = strlen(param_1);
  __dest = (void *)FUN_00404ef0(sVar1 + 1);
  memcpy(__dest,param_1,sVar1 + 1);
  return;
}


void FUN_00405140(void)

{
  undefined uVar1;
  
  uVar1 = dcgettext(0,"memory exhausted",5);
  error(DAT_0060b1f8,0,"%s",uVar1);
                    /* WARNING: Subroutine does not return */
  abort();
}


ulong FUN_00405180(undefined param_1,undefined param_2,ulong param_3,ulong param_4,
                  undefined param_5,undefined param_6,int param_7)

{
  ulong uVar1;
  int iVar2;
  int *piVar3;
  undefined uVar4;
  ulong local_40 [2];
  
  iVar2 = FUN_00405280(param_1,0,param_2,local_40);
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
  uVar4 = FUN_00404930(param_1);
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


void FUN_00405250(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                 undefined param_5,undefined param_6)

{
  FUN_00405180(param_1,10,param_2,param_3,param_4,param_5,param_6);
  return;
}


ulong FUN_00405280(byte *param_1,byte **param_2,uint param_3,ulong *param_4,char *param_5)

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
    if ((param_5 == (char *)0x0) || (bVar12 = *pbVar5, bVar12 == 0)) goto LAB_00405322;
    pcVar7 = strchr(param_5,(int)(char)bVar12);
    if (pcVar7 == (char *)0x0) goto switchD_0040540c_caseD_1;
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
        goto LAB_004053fa;
      }
      if (bVar1 != 0x42) {
                    /* WARNING: Could not recover jumptable at 0x004053e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar6 = (*(code *)(&PTR_LAB_004087b8)[bVar8])();
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
LAB_004053fa:
  iVar10 = (int)uVar11;
  switch(bVar12 - 0x42 & 0xff) {
  case 0:
    if (uVar6 >> 0x36 == 0) {
      uVar6 = uVar6 << 10;
      break;
    }
    goto LAB_00405467;
  default:
switchD_0040540c_caseD_1:
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
    goto LAB_004054f4;
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
    goto joined_r0x0040542c;
  case 0xb:
  case 0x2b:
    auVar2 = ZEXT816(uVar6) * ZEXT816((ulong)(long)iVar10);
    if (SUB168(auVar2 >> 0x40,0) != 0) goto LAB_00405467;
    auVar2 = (auVar2 & (undefined)0xffffffffffffffff) * ZEXT816((ulong)(long)iVar10);
joined_r0x0040542c:
    uVar6 = SUB168(auVar2,0);
    if (SUB168(auVar2 >> 0x40,0) != 0) {
LAB_00405467:
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
    goto LAB_004054f4;
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
    goto LAB_004054f4;
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
    goto LAB_004054f4;
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
LAB_004054f4:
    uVar14 = (ulong)(uVar13 | uVar9);
    break;
  case 0x20:
    if (uVar6 >> 0x37 != 0) goto LAB_00405467;
    uVar6 = uVar6 << 9;
    break;
  case 0x21:
    break;
  case 0x35:
    if ((long)uVar6 < 0) goto LAB_00405467;
    uVar6 = uVar6 * 2;
  }
  *param_2 = pbVar5 + iVar15;
  if (pbVar5[iVar15] != 0) {
    uVar14 = (ulong)((uint)uVar14 | 2);
  }
LAB_00405322:
  *param_4 = uVar6;
  return uVar14;
}


int FUN_004056c0(FILE *param_1)

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
      if (_Var4 == -1) goto LAB_00405727;
    }
    iVar1 = FUN_00405740(param_1);
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
LAB_00405727:
  iVar1 = fclose(param_1);
  return iVar1;
}


void FUN_00405740(FILE *param_1)

{
  int iVar1;
  
  if (param_1 != (FILE *)0x0) {
    iVar1 = __freading();
    if ((iVar1 != 0) && ((param_1->_flags & 0x100U) != 0)) {
      FUN_00405780(param_1,0,1);
      fflush(param_1);
      return;
    }
  }
  fflush(param_1);
  return;
}


ulong FUN_00405780(FILE *param_1,__off_t param_2,int param_3)

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


void FUN_004057e0(long param_1,int *param_2)

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
      if (iVar3 <= iVar8) goto LAB_0040585c;
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
      if (iVar9 <= iVar3) goto LAB_0040585c;
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
LAB_0040585c:
  param_2[0xc] = iVar2;
  param_2[0xb] = iVar1 + (iVar2 - iVar3);
  return;
}


int FUN_004058c0(int param_1,undefined *param_2,char *param_3,char **param_4,undefined *param_5,
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
      if ((iVar5 == 0) && (sVar7 = strlen(__s1_00), sVar7 == sVar15)) goto LAB_00405ae0;
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
            if (local_70 == (char *)0x0) goto LAB_00405a20;
          }
          else if (local_70 == (char *)0x0) {
            local_70 = (char *)calloc((long)iVar5,1);
            if (local_70 == (char *)0x0) {
              bVar3 = true;
              goto LAB_00405a20;
            }
            bVar4 = true;
            local_70[(int)local_44] = '\x01';
          }
          local_70[lVar16] = '\x01';
        }
      }
LAB_00405a20:
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
              __fprintf_chk(__stream,1,&DAT_00408be9,param_9,*param_4);
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
LAB_00405ae0:
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


uint FUN_00405ee0(uint param_1,undefined *param_2,char *param_3,long param_4,undefined param_5,
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
LAB_00405f2a:
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
          goto LAB_0040602d;
        }
        pbVar8 = *(byte **)(param_7 + 8);
      }
      param_7[10] = 0;
    }
LAB_0040602d:
    param_7[6] = 1;
    cVar2 = *param_3;
LAB_00406038:
    if (cVar2 == ':') {
      uVar3 = 0;
    }
    if (pbVar8 == (byte *)0x0) goto LAB_00405fa8;
LAB_0040604c:
    if (*pbVar8 == 0) goto LAB_00405fa8;
  }
  else {
    if (param_7[6] == 0) goto LAB_00405f2a;
    cVar2 = *param_3;
    pbVar8 = *(byte **)(param_7 + 8);
    if ((cVar2 - 0x2bU & 0xfd) != 0) goto LAB_00406038;
    pcVar4 = param_3 + 1;
    param_3 = param_3 + 1;
    if (*pcVar4 == ':') {
      uVar3 = 0;
    }
    if (pbVar8 != (byte *)0x0) goto LAB_0040604c;
LAB_00405fa8:
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
        FUN_004057e0(param_2,param_7);
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
LAB_00406116:
      if (uVar11 != param_1) {
        *param_7 = uVar11;
      }
      return 0xffffffff;
    }
    lVar6 = 3;
    pbVar8 = (byte *)param_2[(int)uVar11];
    pbVar9 = pbVar8;
    pbVar10 = &DAT_00408c01;
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
          FUN_004057e0(param_2,param_7);
          uVar11 = param_7[0xb];
        }
      }
      param_7[0xc] = param_1;
      *param_7 = param_1;
      goto LAB_00406116;
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
        puVar15 = &DAT_00408c01;
        goto LAB_00406275;
      }
      if ((int)param_6 != 0) {
        if (pbVar8[2] == 0) {
          pcVar4 = strchr(param_3,(int)(char)bVar14);
          param_6 = param_6 & 0xffffffff;
          if (pcVar4 != (char *)0x0) goto LAB_00406220;
        }
        *(byte **)(param_7 + 8) = pbVar8 + 1;
        uVar11 = FUN_004058c0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar3,
                              &DAT_00408c02);
        if (uVar11 != 0xffffffff) {
          return uVar11;
        }
        pbVar8 = (byte *)param_2[(int)*param_7];
      }
    }
LAB_00406220:
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
  puVar15 = &DAT_00408c20;
LAB_00406275:
  uVar3 = FUN_004058c0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar3,puVar15);
  return uVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004064b0(void)

{
  DAT_0060b400 = DAT_0060b25c;
  _DAT_0060b404 = DAT_0060b258;
  FUN_00405ee0();
  DAT_0060b25c = DAT_0060b400;
  DAT_0060b440 = DAT_0060b410;
  _DAT_0060b254 = DAT_0060b408;
  return;
}


void FUN_00406510(void)

{
  FUN_004064b0();
  return;
}


void FUN_00406530(void)

{
  FUN_004064b0();
  return;
}


void FUN_00406550(void)

{
  FUN_00405ee0();
  return;
}


void FUN_00406570(void)

{
  FUN_004064b0();
  return;
}


void FUN_00406590(void)

{
  FUN_00405ee0();
  return;
}


size_t FUN_004065b0(wchar_t *param_1,byte *param_2,size_t param_3,mbstate_t *param_4)

{
  char cVar1;
  size_t sVar2;
  wchar_t local_1c;
  
  if (param_2 == (byte *)0x0) {
    param_3 = 1;
    param_2 = (byte *)0x408c1f;
  }
  else {
    if (param_3 == 0) {
      return 0xfffffffffffffffe;
    }
    if (param_1 != (wchar_t *)0x0) goto LAB_004065d4;
  }
  param_1 = &local_1c;
LAB_004065d4:
  sVar2 = mbrtowc(param_1,(char *)param_2,param_3,param_4);
  if ((0xfffffffffffffffd < sVar2) && (cVar1 = FUN_004067a0(0), cVar1 == '\0')) {
    sVar2 = 1;
    *param_1 = (uint)*param_2;
  }
  return sVar2;
}


ulong * FUN_00406630(ulong *param_1,char param_2,ulong param_3)

{
  char cVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  
  if (param_3 == 0) {
    return (ulong *)0x0;
  }
  if (((ulong)param_1 & 7) == 0) {
LAB_00406670:
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
      if (((ulong)param_1 & 7) == 0) goto LAB_00406670;
      cVar1 = *(char *)param_1;
    }
  }
  return param_1;
}


ulong FUN_00406740(uint *param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  
  lVar2 = __fpending();
  uVar1 = *param_1;
  uVar3 = FUN_004056c0(param_1);
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


bool FUN_004067a0(int param_1)

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
    pbVar5 = &DAT_00408c24;
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

char * FUN_00406800(void)

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
  if (DAT_0060b438 != (char *)0x0) goto LAB_0040683a;
  pcVar7 = getenv("CHARSETALIASDIR");
  if ((pcVar7 == (char *)0x0) || (*pcVar7 == '\0')) {
    sVar6 = 0x73;
    sVar5 = 0x65;
    __n = 100;
    pcVar7 = 
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib"
    ;
LAB_00406925:
    __file = (char *)malloc(sVar6);
    if (__file != (char *)0x0) {
      memcpy(__file,pcVar7,__n);
      __file[__n] = '/';
      goto LAB_00406946;
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
        goto LAB_00406925;
      }
      sVar6 = __n + 0xe;
    }
    __file = (char *)malloc(sVar6);
    if (__file != (char *)0x0) {
      memcpy(__file,pcVar7,__n);
      sVar5 = __n;
LAB_00406946:
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
LAB_004069e0:
          pbVar8 = (byte *)__stream->_IO_read_ptr;
          if (__stream->_IO_read_end <= pbVar8) goto LAB_00406b6c;
          do {
            __stream->_IO_read_ptr = (char *)(pbVar8 + 1);
            uVar4 = (uint)*pbVar8;
            __ptr = pcVar7;
            while( true ) {
              pcVar7 = __ptr;
              if ((uVar4 - 9 < 2) || (uVar4 == 0x20)) goto LAB_004069e0;
              if (uVar4 == 0x23) goto LAB_00406bd1;
              ungetc(uVar4,__stream);
              iVar2 = fscanf(__stream,"%50s %50s",&local_b8,&local_78);
              puVar13 = &local_b8;
              if (iVar2 < 2) goto LAB_00406b7f;
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
                FUN_004056c0(__stream);
                goto LAB_00406984;
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
LAB_00406b6c:
              uVar4 = __uflow(__stream);
              __ptr = pcVar7;
              if (uVar4 == 0xffffffff) goto LAB_00406b7f;
            }
          } while( true );
        }
        close(iVar2);
      }
      goto LAB_0040697e;
    }
  }
  DAT_0060b438 = "";
LAB_0040683a:
  cVar1 = *DAT_0060b438;
  pcVar7 = DAT_0060b438;
  do {
    if (cVar1 == '\0') {
LAB_00406894:
      if (*__s1 == '\0') {
        __s1 = "ASCII";
      }
      return __s1;
    }
    iVar2 = strcmp(__s1,pcVar7);
    if ((iVar2 == 0) || ((cVar1 == '*' && (pcVar7[1] == '\0')))) {
      sVar6 = strlen(pcVar7);
      __s1 = pcVar7 + sVar6 + 1;
      goto LAB_00406894;
    }
    sVar6 = strlen(pcVar7);
    sVar5 = strlen(pcVar7 + sVar6 + 1);
    pcVar7 = pcVar7 + sVar6 + 1 + sVar5 + 1;
    cVar1 = *pcVar7;
  } while( true );
LAB_00406bd1:
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
  if (uVar4 == 0xffffffff) goto LAB_00406b7f;
  goto LAB_004069e0;
LAB_00406b7f:
  FUN_004056c0(__stream);
  if (local_d0 == 0) {
LAB_0040697e:
    pcVar7 = "";
  }
  else {
    pcVar7[local_d0] = '\0';
  }
LAB_00406984:
  free(__file);
  DAT_0060b438 = pcVar7;
  goto LAB_0040683a;
}


/* WARNING: Removing unreachable block (ram,0x00406da3) */
/* WARNING: Removing unreachable block (ram,0x00406da8) */

void FUN_00406d70(void)

{
  __DT_INIT();
  return;
}


void FUN_00406dd0(void)

{
  return;
}


void FUN_00406de0(undefined param_1)

{
  __cxa_atexit(param_1,0,DAT_0060b1e8);
  return;
}


undefined FUN_00406df8(undefined param_1,undefined param_2,undefined param_3)

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

