
#include "decompile_ghidra.h"
#define __int64 long long
#define __int32 int
#define __int16 short
#define __int8 char

void switchD_004027b0caseD_b(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_004016d5(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_004016da(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_004016df(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_004016e4(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void switchD_0040428acaseD_0(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Could not reconcile some variable overlaps */

ulong FUN_004016f0(uint param_1,char **param_2)

{
  undefined auVar1 [16];
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ushort **ppuVar6;
  int *piVar7;
  undefined uVar8;
  ulong uVar9;
  undefined **ppuVar10;
  undefined uVar11;
  long lVar12;
  undefined extraout_RDX;
  undefined **ppuVar13;
  char cVar14;
  char *__file;
  byte bVar15;
  char **ppcVar16;
  char *pcVar17;
  byte *pbVar18;
  ulong unaff_R13;
  ulong uVar19;
  ulong __length;
  long lVar20;
  ulong local_f0;
  int local_e4;
  ulong local_e0;
  ulong local_d8;
  stat local_c8;
  
  uVar19 = (ulong)param_1;
  __file = (char *)0x0;
  ppuVar13 = (undefined **)0x0;
  FUN_004025c0(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils",
                 "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale"
                );
  textdomain("coreutils");
  FUN_004068b0(FUN_00402520);
LAB_00401745:
  do {
    while( true ) {
      ppuVar10 = &PTR_s_no_create_004071a0;
      ppcVar16 = param_2;
      iVar3 = FUN_00405ff0(uVar19,param_2,"cor:s:",&PTR_s_no_create_004071a0,0);
      pbVar2 = DAT_0060a298;
      if (iVar3 == -1) break;
      if (iVar3 == 99) {
        DAT_0060a2a1 = '\x01';
      }
      else {
        if (iVar3 < 100) goto LAB_00401898;
        if (iVar3 == 0x72) {
          DAT_0060a298 = DAT_0060a440;
        }
        else {
          if (iVar3 == 0x73) {
            ppuVar6 = __ctype_b_loc();
            ppuVar10 = (undefined **)*ppuVar6;
            pbVar2 = DAT_0060a440;
            do {
              DAT_0060a440 = pbVar2;
              bVar15 = *DAT_0060a440;
              pbVar2 = DAT_0060a440 + 1;
            } while ((*(byte *)((long)ppuVar10 + (ulong)bVar15 * 2 + 1) & 0x20) != 0);
            if (bVar15 == 0x2f) {
              ppuVar13 = (undefined **)0x4;
              pbVar2 = DAT_0060a440 + 1;
            }
            else {
              pbVar18 = DAT_0060a440;
              if ((char)bVar15 < '0') goto LAB_004018e0;
              if (bVar15 == 0x3c) {
                ppuVar13 = (undefined **)0x3;
                pbVar2 = DAT_0060a440 + 1;
              }
              else {
                pbVar2 = DAT_0060a440;
                if (bVar15 == 0x3e) {
                  ppuVar13 = (undefined **)0x2;
                  pbVar2 = DAT_0060a440 + 1;
                }
              }
            }
            goto LAB_00401807;
          }
          if (iVar3 != 0x6f) goto LAB_00401889;
          DAT_0060a2a0 = '\x01';
        }
      }
    }
    param_2 = param_2 + DAT_0060a258._4_4_;
    uVar4 = (int)uVar19 - DAT_0060a258._4_4_;
    uVar19 = (ulong)uVar4;
    cVar14 = (char)__file;
    if (DAT_0060a298 == (byte *)0x0) {
      if (cVar14 != '\0') {
        if (0 < (int)uVar4) {
          local_d8 = 0xffffffffffffffff;
          local_e0 = unaff_R13;
LAB_00401abd:
          local_f0 = 0;
          local_e4 = (-(uint)(DAT_0060a2a1 == '\0') & 0x40) + 0x801;
          ppcVar16 = param_2;
          goto LAB_00401ae0;
        }
LAB_00401ba6:
        uVar11 = 5;
        pcVar17 = "missing file operand";
        goto LAB_00401bb0;
      }
LAB_00401ffa:
      __file = (char *)FUN_004041c0(1,"--reference");
      ppuVar13 = (undefined **)FUN_004041c0(0,"--size");
      pcVar17 = "you must specify either %s or %s";
    }
    else if (((int)ppuVar13 == 0) && (cVar14 != '\0')) {
      __file = (char *)FUN_004041c0(1,"--reference");
      ppuVar13 = (undefined **)FUN_004041c0(0,"--size");
      pcVar17 = "you must specify a relative %s with %s";
    }
    else {
      if ((DAT_0060a2a0 != '\x01') || (cVar14 != '\0')) {
        if ((int)uVar4 < 1) goto LAB_00401ba6;
        iVar3 = __xstat(1,(char *)DAT_0060a298,&local_c8);
        if (iVar3 == 0) {
          if ((local_c8.st_mode & 0xd000) == 0x8000) {
            uVar9 = local_c8.st_size;
            if (local_c8.st_size < 0) goto LAB_00401f27;
          }
          else {
            uVar4 = open((char *)pbVar2,0);
            uVar19 = (ulong)uVar4;
            piVar7 = __errno_location();
            if ((int)uVar4 < 0) {
LAB_00401f27:
              __file = (char *)FUN_00403f90(4,DAT_0060a298);
              ppuVar13 = (undefined **)dcgettext(0,"cannot get the size of %s",5);
              piVar7 = __errno_location();
              uVar9 = error(1,*piVar7,ppuVar13,__file);
              goto LAB_00401f68;
            }
            uVar9 = lseek(uVar4,0,2);
            local_e4 = *piVar7;
            close(uVar4);
            if ((long)uVar9 < 0) {
              *piVar7 = local_e4;
              local_f0 = uVar9;
              goto LAB_00401f27;
            }
          }
          local_d8 = 0xffffffffffffffff;
          local_e0 = uVar9;
          if (cVar14 != '\0') {
            local_e0 = unaff_R13;
            local_d8 = uVar9;
          }
          goto LAB_00401abd;
        }
        uVar11 = FUN_00403f90(4,pbVar2);
        uVar8 = dcgettext(0,"cannot stat %s",5);
        piVar7 = __errno_location();
        error(1,*piVar7,uVar8,uVar11);
        goto LAB_00401ffa;
      }
      __file = (char *)FUN_004041c0(1,"--size");
      ppuVar13 = (undefined **)FUN_004041c0(0,"--io-blocks");
      pcVar17 = "%s was specified but %s was not";
    }
    uVar11 = dcgettext(0,pcVar17,5);
    ppcVar16 = (char **)0x0;
    ppuVar10 = ppuVar13;
    error(0,0,uVar11,ppuVar13,__file);
LAB_00401889:
    do {
      iVar3 = FUN_00402140();
LAB_00401898:
      bVar15 = (byte)ppcVar16;
      if (iVar3 == -0x83) {
        FUN_00404660(stdout,"truncate","GNU coreutils",PTR_DAT_0060a1f0,"Padraig Brady",0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
    } while (iVar3 != -0x82);
    pbVar18 = (byte *)0x0;
    FUN_00402140();
LAB_004018e0:
    pbVar2 = DAT_0060a440;
    if (bVar15 == 0x25) {
      ppuVar13 = (undefined **)0x5;
      pbVar2 = pbVar18 + 1;
    }
LAB_00401807:
    do {
      DAT_0060a440 = pbVar2;
      pbVar2 = DAT_0060a440 + 1;
    } while ((*(byte *)((long)ppuVar10 + (ulong)*DAT_0060a440 * 2 + 1) & 0x20) != 0);
    uVar11 = 5;
    if ((*DAT_0060a440 - 0x2b & 0xfd) != 0) {
      dcgettext(0,"Invalid number",5);
      unaff_R13 = FUN_00404b20(DAT_0060a440,0x8000000000000000,0x7fffffffffffffff,"EgGkKmMPtTYZ0");
      if (((int)ppuVar13 - 4U < 2) && (unaff_R13 == 0)) {
        uVar11 = dcgettext(0,"division by zero",5);
        error(1,0,uVar11);
        uVar11 = extraout_RDX;
LAB_0040204c:
        pcVar17 = "multiple relative modifiers specified";
LAB_00401bb0:
        uVar11 = dcgettext(0,pcVar17,uVar11);
        error(0,0,uVar11);
        FUN_00402140(1);
        do {
          piVar7 = __errno_location();
          ppcVar16 = param_2;
          if ((DAT_0060a2a1 == '\0') || (*piVar7 != 2)) {
            uVar11 = FUN_00403f90(4,__file);
            uVar8 = dcgettext(0,"cannot open %s for writing",5);
            error(0,*piVar7,uVar8,uVar11);
            local_f0 = 1;
          }
LAB_00401ae0:
          while( true ) {
            param_2 = ppcVar16 + 1;
            __file = *ppcVar16;
            if (__file == (char *)0x0) {
              return local_f0 & 0xff;
            }
            uVar4 = open(__file,local_e4,0x1b6);
            unaff_R13 = (ulong)uVar4;
            if (uVar4 == 0xffffffff) break;
            iVar3 = (int)ppuVar13;
            if (DAT_0060a2a0 == '\0') {
              uVar19 = local_e0;
              if ((iVar3 == 0) || (-1 < (long)local_d8)) {
LAB_00401c2b:
                if (iVar3 != 0) {
                  uVar9 = local_d8;
                  if (local_d8 == 0xffffffffffffffff) goto LAB_00401e02;
                  goto LAB_00401da4;
                }
                goto LAB_00401c33;
              }
              iVar5 = __fxstat(1,uVar4,&local_c8);
              if (iVar5 != 0) goto LAB_00401b4b;
LAB_00401e02:
              if ((local_c8.st_mode & 0xd000) == 0x8000) {
                uVar9 = local_c8.st_size;
                if (-1 < local_c8.st_size) goto LAB_00401da4;
                uVar11 = FUN_00403f90(4,__file);
                pcVar17 = "%s has unusable, apparently negative size";
                goto LAB_00401e36;
              }
              uVar9 = lseek(uVar4,0,2);
              if ((long)uVar9 < 0) {
                uVar11 = FUN_00403f90(4,__file);
                pcVar17 = "cannot get the size of %s";
                goto LAB_00401b65;
              }
LAB_00401da4:
              if (iVar3 == 2) {
                if (uVar19 < uVar9) {
                  uVar19 = uVar9;
                }
LAB_00401c33:
                __length = uVar19;
                if ((long)uVar19 < 0) {
                  __length = 0;
                }
              }
              else {
                if (iVar3 != 3) {
                  if (iVar3 != 4) {
                    if (iVar3 == 5) {
LAB_00401f68:
                      uVar4 = (uint)unaff_R13;
                      uVar9 = (uVar19 - 1) + uVar9;
                      __length = uVar19 * (uVar9 / uVar19);
                      if (-1 < (long)__length) goto LAB_00401c3f;
                      uVar11 = FUN_00403f90(4,__file,uVar9 % uVar19);
                      pcVar17 = "overflow rounding up size of file %s";
                    }
                    else {
                      if ((long)uVar19 <= (long)(0x7fffffffffffffff - uVar9)) {
                        uVar19 = uVar19 + uVar9;
                        goto LAB_00401c33;
                      }
                      uVar11 = FUN_00403f90(4,__file);
                      pcVar17 = "overflow extending size of file %s";
                    }
LAB_00401e36:
                    bVar15 = 0;
                    uVar8 = dcgettext(0,pcVar17,5);
                    error(0,0,uVar8,uVar11);
                    goto LAB_00401b88;
                  }
                  uVar19 = uVar19 * (uVar9 / uVar19);
                  goto LAB_00401c33;
                }
                __length = uVar19;
                if (uVar9 < uVar19) {
                  __length = uVar9;
                }
              }
LAB_00401c3f:
              bVar15 = 1;
              iVar3 = ftruncate(uVar4,__length);
              if (iVar3 == -1) {
                uVar11 = FUN_00403f90(4,__file);
                uVar8 = dcgettext(0,"failed to truncate %s at %ld bytes",5);
                piVar7 = __errno_location();
                bVar15 = 0;
                error(0,*piVar7,uVar8,uVar11,__length);
              }
            }
            else {
              iVar5 = __fxstat(1,uVar4,&local_c8);
              if (iVar5 == 0) {
                lVar20 = local_c8.st_blksize;
                if (0x1fffffffffffffff < local_c8.st_blksize - 1U) {
                  lVar20 = 0x200;
                }
                lVar12 = -0x8000000000000000 % lVar20;
                if (-0x8000000000000000 / lVar20 <= (long)local_e0) {
                  auVar1 = SEXT816(0x7fffffffffffffff) & (undefined)0xffffffffffffffff |
                           ZEXT816(0x7fffffffffffffff);
                  lVar12 = SUB168(auVar1 % SEXT816(lVar20),0);
                  uVar19 = local_e0 * lVar20;
                  if ((long)local_e0 <= SUB168(auVar1 / SEXT816(lVar20),0)) goto LAB_00401c2b;
                }
                uVar11 = FUN_00403f90(4,__file,lVar12);
                uVar8 = dcgettext(0,"overflow in %ld * %ld byte blocks for file %s",5);
                error(0,0,uVar8,local_e0,lVar20,uVar11);
                bVar15 = 0;
              }
              else {
LAB_00401b4b:
                uVar11 = FUN_00403f90(4,__file);
                pcVar17 = "cannot fstat %s";
LAB_00401b65:
                uVar8 = dcgettext(0,pcVar17,5);
                piVar7 = __errno_location();
                bVar15 = 0;
                error(0,*piVar7,uVar8,uVar11);
              }
            }
LAB_00401b88:
            iVar3 = close(uVar4);
            ppcVar16 = param_2;
            if (iVar3 == 0) {
              local_f0 = (ulong)(byte)((byte)local_f0 | bVar15 ^ 1);
            }
            else {
              uVar11 = FUN_00403f90(4,__file);
              uVar8 = dcgettext(0,"failed to close %s",5);
              piVar7 = __errno_location();
              error(0,*piVar7,uVar8,uVar11);
              local_f0 = 1;
            }
          }
        } while( true );
      }
      __file = (char *)0x1;
      goto LAB_00401745;
    }
    if ((int)ppuVar13 != 0) goto LAB_0040204c;
    ppuVar13 = (undefined **)0x1;
    __file = (char *)0x1;
    dcgettext(0,"Invalid number",5);
    unaff_R13 = FUN_00404b20(DAT_0060a440,0x8000000000000000,0x7fffffffffffffff,"EgGkKmMPtTYZ0");
  } while( true );
}


void FUN_00402060(undefined param_1,undefined param_2,undefined param_3)

{
  undefined unaff_retaddr;
  undefined auStack_8 [8];
  
  (*(code *)PTR___libc_start_main_00609ff0)
            (FUN_004016f0,unaff_retaddr,&stack0x00000008,FUN_00406840,FUN_004068a0,param_3,auStack_8
            );
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* WARNING: Removing unreachable block (ram,0x00402098) */
/* WARNING: Removing unreachable block (ram,0x004020a2) */

void FUN_0040208b(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x004020d9) */

void FUN_004020aa(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00402116) */

void FUN_004020e1(void)

{
  if (DAT_0060a288 != '\0') {
    return;
  }
  FUN_0040208b();
  DAT_0060a288 = 1;
  return;
}


/* WARNING: Removing unreachable block (ram,0x004020d9) */

void thunk_FUN_004020aa(void)

{
  return;
}


void FUN_00402140(int param_1)

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
  
  uVar7 = DAT_0060a2b8;
  bVar14 = 0;
  if (param_1 != 0) {
    uVar3 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(stderr,1,uVar3,uVar7);
    goto LAB_0040217f;
  }
  uVar3 = dcgettext(0,"Usage: %s OPTION... FILE...\n",5);
  __printf_chk(1,uVar3,uVar7);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "Shrink or extend the size of each FILE to the specified size\n\nA FILE argument that does not exist is created.\n\nIf a FILE is larger than the specified size, the extra data is lost.\nIf a FILE is shorter, it is extended and the extended part (hole)\nreads as zero bytes.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nMandatory arguments to long options are mandatory for short options too.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"  -c, --no-create        do not create any files\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -o, --io-blocks        treat SIZE as number of IO blocks instead of bytes\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -r, --reference=RFILE  base size on RFILE\n  -s, --size=SIZE        set or adjust the file size by SIZE bytes\n"
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
                             "\nThe SIZE argument is an integer and optional unit (example: 10K is 10*1024).\nUnits are K,M,G,T,P,E,Z,Y (powers of 1024) or KB,MB,... (powers of 1000).\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nSIZE may also be prefixed by one of the following modifying characters:\n\'+\' extend by, \'-\' reduce by, \'<\' at most, \'>\' at least,\n\'/\' round down to multiple of, \'%\' round up to multiple of.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  local_88 = &DAT_0040692a;
  local_80 = "test invocation";
  local_78[0] = (byte *)0x4069a4;
  local_78[1] = (byte *)0x40693c;
  local_78[2] = (byte *)0x406952;
  local_78[3] = (byte *)0x40695c;
  local_78[4] = (byte *)0x40696b;
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
    pbVar10 = (byte *)"truncate";
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
        pcVar4 = "truncate";
        goto LAB_004024d3;
      }
    }
    pcVar4 = "truncate";
    uVar7 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    pcVar8 = " invocation";
    __printf_chk(1,uVar7,"https://www.gnu.org/software/coreutils/","truncate");
  }
  else {
    uVar7 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar7,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar8 = setlocale(5,(char *)0x0);
    if (pcVar8 != (char *)0x0) {
      iVar2 = strncmp(pcVar8,"en_",3);
      if (iVar2 != 0) {
LAB_004024d3:
        uVar7 = dcgettext(0,"Report %s translation bugs to <https://translationproject.org/team/>\n"
                          ,5);
        __printf_chk(1,uVar7,"truncate");
      }
    }
    pcVar8 = " invocation";
    uVar7 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    __printf_chk(1,uVar7,"https://www.gnu.org/software/coreutils/","truncate");
    if (pcVar4 != "truncate") {
      pcVar8 = "";
    }
  }
  uVar7 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(1,uVar7,pcVar4,pcVar8);
LAB_0040217f:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}


void FUN_00402500(undefined param_1)

{
  DAT_0060a2b0 = param_1;
  return;
}


void FUN_00402510(undefined param_1)

{
  DAT_0060a2a8 = param_1;
  return;
}


void FUN_00402520(void)

{
  int iVar1;
  int *piVar2;
  undefined uVar3;
  undefined uVar4;
  
  iVar1 = FUN_004060f0(stdout);
  if (iVar1 != 0) {
    piVar2 = __errno_location();
    if ((DAT_0060a2a8 == '\0') || (*piVar2 != 0x20)) {
      uVar3 = dcgettext(0,"write error",5);
      if (DAT_0060a2b0 == 0) {
        error(0,*piVar2,"%s",uVar3);
      }
      else {
        uVar4 = FUN_00404030();
        error(0,*piVar2,"%s: %s",uVar4,uVar3);
      }
      goto LAB_0040259e;
    }
  }
  iVar1 = FUN_004060f0(stderr);
  if (iVar1 == 0) {
    return;
  }
LAB_0040259e:
                    /* WARNING: Subroutine does not return */
  _exit(DAT_0060a1f8);
}


void FUN_004025c0(byte *param_1)

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
        pbVar6 = &DAT_004072d8;
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
  DAT_0060a2b8 = param_1;
  program_invocation_name = param_1;
  return;
}


char * FUN_00402660(char *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  byte *pbVar3;
  
  pcVar2 = (char *)dcgettext(0,param_1,5);
  if (param_1 == pcVar2) {
    pbVar3 = (byte *)FUN_004061b0();
    if ((*pbVar3 & 0xdf) == 0x55) {
      if (((((pbVar3[1] & 0xdf) != 0x54) || ((pbVar3[2] & 0xdf) != 0x46)) || (pbVar3[3] != 0x2d)) ||
         ((pbVar3[4] != 0x38 || (pbVar3[5] != 0)))) {
LAB_00402738:
        pcVar2 = "\"";
        if (param_2 != 9) {
          pcVar2 = "\'";
        }
        return pcVar2;
      }
      cVar1 = *pcVar2;
      pcVar2 = &DAT_004072e9;
      if (cVar1 != '`') {
        pcVar2 = &DAT_004072de;
      }
    }
    else {
      if (((((*pbVar3 & 0xdf) != 0x47) || ((pbVar3[1] & 0xdf) != 0x42)) || (pbVar3[2] != 0x31)) ||
         (((pbVar3[3] != 0x38 || (pbVar3[4] != 0x30)) ||
          ((pbVar3[5] != 0x33 || ((pbVar3[6] != 0x30 || (pbVar3[7] != 0)))))))) goto LAB_00402738;
      cVar1 = *pcVar2;
      pcVar2 = &DAT_004072e5;
      if (cVar1 != '`') {
        pcVar2 = &DAT_004072e2;
      }
    }
  }
  return pcVar2;
}


ulong FUN_00402760(undefined *param_1,ulong param_2,char *param_3,ulong param_4,int param_5,
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
LAB_004033b1:
    if (param_2 != 0) {
      bVar3 = false;
      local_5b = false;
      bVar2 = true;
      local_70 = 0;
      goto LAB_00402fe6;
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
      goto LAB_004033b1;
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
      param_8 = (char *)FUN_00402660(&DAT_004072ed,param_5);
      param_9 = (char *)FUN_00402660(&DAT_0040882f);
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
LAB_004027f8:
  uVar22 = 0;
  bVar5 = local_5b;
LAB_00402808:
  bVar23 = param_4 != uVar22;
  if (param_4 == 0xffffffffffffffff) {
    bVar23 = param_3[uVar22] != '\0';
  }
  bVar26 = bVar6;
  if (!bVar23) goto LAB_00402f88;
  bVar20 = (bool)(param_5 != 2 & bVar6);
  __s1 = (byte *)(param_3 + uVar22);
  uVar16 = uVar15;
  bVar4 = bVar3;
  if (bVar20) {
    if (local_a0 == 0) {
LAB_00402f00:
      uVar19 = (ulong)*__s1;
      switch(uVar19) {
      case 0:
        goto switchD_00402f12_caseD_0;
      default:
        bVar20 = false;
        goto switchD_00402d7e_caseD_1;
      case 7:
        bVar17 = 0x61;
        goto LAB_00402c15;
      case 8:
        bVar17 = 0x62;
        break;
      case 9:
switchD_00402f12_caseD_9:
        bVar17 = 0x74;
        break;
      case 10:
switchD_00402f12_caseD_a:
        bVar17 = 0x6e;
        break;
      case 0xb:
switchD_00402f12_caseD_b:
        bVar17 = 0x76;
        goto LAB_00402c15;
      case 0xc:
switchD_00402f12_caseD_c:
        bVar17 = 0x66;
LAB_00402c15:
        if (local_5c) {
          bVar25 = false;
          goto LAB_00402b68;
        }
LAB_00402c20:
        bVar23 = false;
        goto LAB_004029db;
      case 0xd:
        bVar20 = false;
switchD_004028f8_caseD_d:
        bVar25 = param_5 == 2;
        uVar19 = 0xd;
        bVar13 = 0x72;
        goto LAB_00402b30;
      case 0x20:
        bVar25 = false;
LAB_00402f5a:
        uVar19 = 0x20;
        goto LAB_00402f22;
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
switchD_004028f8_caseD_21:
        bVar25 = false;
        goto LAB_00402b3b;
      case 0x23:
      case 0x7e:
        bVar26 = false;
LAB_00402f3a:
        if (uVar22 == 0) {
          bVar25 = false;
          bVar23 = bVar20;
          bVar20 = bVar26;
          goto LAB_00402948;
        }
        bVar23 = false;
        goto LAB_0040295f;
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
LAB_00402f22:
        bVar24 = false;
        bVar23 = bVar20;
        bVar20 = bVar25;
        goto LAB_00402961;
      case 0x27:
        bVar20 = false;
        goto switchD_00402d7e_caseD_27;
      case 0x3f:
        bVar20 = false;
        goto switchD_00402d7e_caseD_3f;
      case 0x5c:
        bVar20 = false;
        goto switchD_004028f8_caseD_5c;
      case 0x7b:
      case 0x7d:
        bVar20 = false;
        goto switchD_00402d7e_caseD_7b;
      }
      bVar25 = false;
      bVar23 = false;
      goto joined_r0x00402b57;
    }
    if ((param_4 == 0xffffffffffffffff) && (1 < local_a0)) {
      param_4 = strlen(param_3);
    }
    if ((param_4 < uVar22 + local_a0) || (iVar7 = memcmp(__s1,local_78,local_a0), iVar7 != 0))
    goto LAB_00402f00;
    if (!local_5c) {
      uVar19 = (ulong)*__s1;
      bVar25 = bVar20;
      switch(uVar19) {
      case 0:
        goto switchD_004028f8_caseD_0;
      default:
        goto switchD_00402d7e_caseD_1;
      case 7:
        bVar17 = 0x61;
        goto LAB_00402c20;
      case 8:
        bVar25 = false;
        bVar23 = false;
        bVar17 = 0x62;
        break;
      case 9:
        goto switchD_00402f12_caseD_9;
      case 10:
        goto switchD_00402f12_caseD_a;
      case 0xb:
        goto switchD_00402f12_caseD_b;
      case 0xc:
        goto switchD_00402f12_caseD_c;
      case 0xd:
        goto switchD_004028f8_caseD_d;
      case 0x20:
        goto LAB_00402f5a;
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
        goto switchD_004028f8_caseD_21;
      case 0x23:
      case 0x7e:
        bVar26 = bVar20;
        goto LAB_00402f3a;
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
        goto LAB_00402f22;
      case 0x27:
        goto switchD_00402d7e_caseD_27;
      case 0x3f:
        goto switchD_00402d7e_caseD_3f;
      case 0x5c:
        goto switchD_004028f8_caseD_5c;
      case 0x7b:
      case 0x7d:
        goto switchD_00402d7e_caseD_7b;
      }
      goto LAB_004029a2;
    }
    goto LAB_00402b7a;
  }
  uVar19 = (ulong)*__s1;
  switch(uVar19) {
  case 0:
    if (bVar6) {
switchD_00402f12_caseD_0:
      if (!local_5c) {
        bVar20 = false;
switchD_004028f8_caseD_0:
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
            goto LAB_00402a58;
          }
LAB_00402c9a:
          param_1[uVar16] = 0x5c;
          uVar15 = uVar16;
        }
        else if (uVar15 < uVar9) goto LAB_00402c9a;
        uVar16 = uVar15 + 1;
        bVar24 = bVar23;
        if (param_5 == 2) {
          bVar17 = 0x30;
          bVar23 = false;
          bVar4 = bVar3;
          goto LAB_00402a58;
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
LAB_00402cd9:
        bVar17 = (byte)uVar19;
        bVar23 = false;
        uVar15 = uVar16;
        bVar4 = bVar3;
        if ((bool)(bVar6 ^ 1U | bVar26)) goto LAB_00402a58;
        goto LAB_00402961;
      }
      bVar26 = param_5 == 2;
      goto LAB_00402b6c;
    }
    if ((param_6 & 1) == 0) {
      bVar25 = param_5 == 2;
      uVar19 = 0;
      bVar23 = false;
      bVar20 = false;
      goto LAB_00402948;
    }
    uVar22 = uVar22 + 1;
    goto LAB_00402808;
  default:
switchD_00402d7e_caseD_1:
    bVar25 = bVar6;
    if (sVar8 != 1) {
      local_40[0] = (mbstate_t)0x0;
      if (param_4 == 0xffffffffffffffff) {
        param_4 = strlen(param_3);
      }
      uVar21 = 0;
      do {
        uVar1 = uVar22 + uVar21;
        lVar11 = FUN_00406070(&local_44,param_3 + uVar1,param_4 - uVar1,local_40);
        if (lVar11 == 0) break;
        if (lVar11 == -1) {
          bVar23 = false;
          goto LAB_0040368a;
        }
        if (lVar11 == -2) {
          if ((param_4 <= uVar1) || (param_3[uVar1] == '\0')) goto LAB_004037c7;
          goto LAB_004037b7;
        }
        if (((param_5 == 2) && (local_5c)) && (lVar11 != 1)) {
          pcVar12 = param_3 + uVar1 + 1;
          do {
            if (((byte)(*pcVar12 + 0xa5U) < 0x22) &&
               ((1L << (*pcVar12 + 0xa5U & 0x3f) & 0x20000002bU) != 0)) {
              param_5 = 2;
              goto LAB_00402b6c;
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
      goto LAB_0040368a;
    }
    ppuVar10 = __ctype_b_loc();
    uVar21 = 1;
    bVar25 = ((*ppuVar10)[uVar19] & 0x4000) == 0;
    bVar23 = !bVar25;
    bVar25 = (bool)(bVar25 & bVar6);
    goto LAB_00402d54;
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
    goto LAB_00402d92;
  case 10:
    uVar19 = 10;
    bVar13 = 0x6e;
    goto LAB_00402d92;
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
LAB_00402d92:
    bVar25 = param_5 == 2;
    bVar20 = (bool)(local_5c & bVar25);
    if (bVar20) {
LAB_00402daa:
      param_5 = 2;
      goto LAB_00402b6c;
    }
    break;
  case 0x20:
    uVar19 = 0x20;
    goto LAB_00402936;
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
LAB_00402936:
    bVar25 = param_5 == 2;
    if ((local_5c) && (bVar25)) goto LAB_00402daa;
    goto LAB_00402948;
  case 0x23:
  case 0x7e:
LAB_0040292d:
    bVar25 = param_5 == 2;
    if (uVar22 == 0) goto LAB_00402936;
    goto LAB_00402b3b;
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
    goto switchD_00402d7e_caseD_25;
  case 0x27:
switchD_00402d7e_caseD_27:
    bVar5 = bVar23;
    if (param_5 != 2) {
      bVar25 = false;
      uVar19 = 0x27;
      goto LAB_00402948;
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
      goto LAB_00402a58;
    }
    goto LAB_00402b6c;
  case 0x3f:
switchD_00402d7e_caseD_3f:
    if (param_5 == 2) {
      if (!local_5c) {
        bVar17 = 0x3f;
        bVar24 = false;
        bVar23 = false;
        goto LAB_00402a58;
      }
      goto LAB_00402b6c;
    }
    if (param_5 != 5) {
      bVar25 = param_5 == 2;
      uVar19 = 0x3f;
      bVar23 = false;
      goto LAB_00402948;
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
        goto LAB_00402cd9;
      }
      goto LAB_00402b7a;
    }
    bVar25 = false;
    uVar19 = 0x3f;
    bVar23 = false;
    goto LAB_00402948;
  case 0x5c:
    if (param_5 != 2) {
switchD_004028f8_caseD_5c:
      uVar19 = 0x5c;
      bVar17 = 0x5c;
      bVar13 = 0x5c;
      bVar25 = (bool)(bVar6 & local_5c & local_a0 != 0);
      if (!bVar25) break;
      uVar22 = uVar22 + 1;
      bVar23 = false;
      goto LAB_00402a74;
    }
    if (local_5c) goto LAB_00402b6c;
    uVar22 = uVar22 + 1;
    bVar23 = false;
    bVar17 = 0x5c;
    goto LAB_00402a74;
  case 0x7b:
  case 0x7d:
switchD_00402d7e_caseD_7b:
    bVar24 = param_4 != 1;
    if (param_4 == 0xffffffffffffffff) {
      bVar24 = param_3[1] != '\0';
    }
    bVar25 = param_5 == 2;
    if (!bVar24) goto LAB_0040292d;
    goto LAB_00402b3b;
  }
LAB_00402b30:
  if (!bVar6) {
LAB_00402b3b:
    bVar23 = false;
    goto LAB_00402948;
  }
  bVar23 = false;
  bVar17 = bVar13;
  goto joined_r0x00402b57;
LAB_00402f88:
  if ((uVar15 == 0) && ((bool)(local_5c & param_5 == 2))) {
    param_5 = 2;
LAB_00402b6c:
    if (bVar26) {
      param_5 = 4;
    }
LAB_00402b7a:
    uVar9 = FUN_00402760(param_1,uVar9,param_3,param_4,param_5,param_6 & 0xfffffffd,0,param_8,
                         param_9);
    return uVar9;
  }
  bVar26 = (bool)(param_5 == 2 & (local_5c ^ 1U));
  bVar23 = (bool)(local_5c ^ 1U);
  if ((!bVar26) || (bVar23 = bVar26, !bVar5)) {
LAB_0040385d:
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
    uVar9 = FUN_00402760(param_1,local_70,param_3,param_4,5,param_6,param_7,param_8,param_9);
    return uVar9;
  }
  local_5b = uVar9 == 0 && local_70 != 0;
  param_2 = local_70;
  bVar23 = bVar5;
  if (uVar9 != 0 || local_70 == 0) goto LAB_0040385d;
LAB_00402fe6:
  *param_1 = 0x27;
  param_5 = 2;
  uVar15 = 1;
  local_78 = "\'";
  local_a0 = 1;
  local_5c = false;
  uVar9 = param_2;
  goto LAB_004027f8;
  while (__s1[uVar21] != 0) {
LAB_004037b7:
    uVar21 = uVar21 + 1;
    if (param_4 <= uVar22 + uVar21) break;
  }
LAB_004037c7:
  bVar23 = false;
LAB_0040368a:
  if (1 < uVar21) {
LAB_0040324e:
    bVar26 = false;
    uVar21 = uVar21 + uVar22;
    uVar16 = uVar22;
    do {
      bVar17 = (byte)uVar19;
      if (bVar25) {
        bVar26 = param_5 == 2;
        if (local_5c) goto LAB_00402b6c;
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
        if (uVar21 <= uVar22) goto LAB_004029ed;
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
        if (uVar21 <= uVar22) goto LAB_00402a74;
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
LAB_00402d54:
  if (bVar25) {
    bVar23 = false;
    bVar25 = bVar6;
    goto LAB_0040324e;
  }
switchD_00402d7e_caseD_25:
  bVar25 = param_5 == 2;
LAB_00402948:
  bVar17 = (byte)uVar19;
  bVar24 = (bool)((bVar6 ^ 1U | bVar25) ^ 1 | local_5c);
  bVar26 = bVar20;
  if (bVar24) {
LAB_0040295f:
    bVar24 = false;
    bVar20 = bVar26;
LAB_00402961:
    bVar17 = (byte)uVar19;
    uVar16 = uVar15;
    bVar4 = bVar3;
    if ((param_7 == 0) || ((*(uint *)(param_7 + (uVar19 >> 5) * 4) >> (bVar17 & 0x1f) & 1) == 0))
    goto LAB_00402a58;
    bVar25 = param_5 == 2;
  }
  else {
LAB_00402a58:
    bVar25 = param_5 == 2;
    uVar15 = uVar16;
    bVar3 = bVar4;
    if (!bVar20) {
      uVar22 = uVar22 + 1;
      bVar3 = (bool)((bVar24 ^ 1U) & bVar4);
LAB_00402a74:
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
      goto LAB_004029ed;
    }
  }
joined_r0x00402b57:
  if (local_5c) {
LAB_00402b68:
    bVar26 = (bool)(bVar6 & bVar25);
    goto LAB_00402b6c;
  }
LAB_004029a2:
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
LAB_004029db:
  if (uVar15 < uVar9) {
    param_1[uVar15] = 0x5c;
  }
  uVar15 = uVar15 + 1;
  uVar22 = uVar22 + 1;
  bVar4 = bVar3;
LAB_004029ed:
  bVar3 = bVar4;
  if (uVar15 < uVar9) {
    param_1[uVar15] = bVar17;
  }
  uVar15 = uVar15 + 1;
  if (!bVar23) {
    bVar2 = false;
  }
  goto LAB_00402808;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00403990(int param_1,undefined param_2,undefined param_3,undefined *param_4)

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
  puVar8 = (undefined *)PTR_DAT_0060a238;
  if (DAT_0060a250 <= param_1) {
    if (param_1 == 0x7fffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_004049f0();
    }
    if (PTR_DAT_0060a238 == &DAT_0060a240) {
      puVar8 = (undefined *)FUN_00404800(0);
      uVar6 = PTR_DAT_0060a248._4_4_;
      uVar5 = PTR_DAT_0060a248._0_4_;
      uVar3 = _UNK_0060a244;
      PTR_DAT_0060a238 = (undefined *)puVar8;
      *puVar8 = _DAT_0060a240;
      puVar8[1] = uVar3;
      puVar8[2] = uVar5;
      puVar8[3] = uVar6;
    }
    else {
      puVar8 = (undefined *)FUN_00404800(PTR_DAT_0060a238);
      PTR_DAT_0060a238 = (undefined *)puVar8;
    }
    memset(puVar8 + (long)DAT_0060a250 * 4,0,(long)((param_1 + 1) - DAT_0060a250) << 4);
    DAT_0060a250 = param_1 + 1;
  }
  uVar2 = param_4[1];
  puVar10 = (ulong *)(puVar8 + (long)param_1 * 4);
  uVar4 = *puVar10;
  __ptr = (undefined *)puVar10[1];
  uVar9 = FUN_00402760(__ptr,uVar4,param_2,param_3,*param_4,uVar2 | 1,param_4 + 2,
                       *(undefined *)(param_4 + 10),*(undefined *)(param_4 + 0xc));
  if (uVar4 <= uVar9) {
    uVar9 = uVar9 + 1;
    *puVar10 = uVar9;
    if (__ptr != &DAT_0060a2c0) {
      free(__ptr);
    }
    __ptr = (undefined *)FUN_004047a0(uVar9);
    uVar3 = *param_4;
    puVar10[1] = (ulong)__ptr;
    FUN_00402760(__ptr,uVar9,param_2,param_3,uVar3,uVar2 | 1,param_4 + 2,
                 *(undefined *)(param_4 + 10),*(undefined *)(param_4 + 0xc));
  }
  *piVar7 = iVar1;
  return __ptr;
}


void FUN_00403b30(undefined *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_0060a3c0;
  }
  FUN_004049a0(param_1,0x38);
  *piVar2 = iVar1;
  return;
}


undefined FUN_00403b70(undefined *param_1)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = (undefined *)&DAT_0060a3c0;
  }
  return *param_1;
}


void FUN_00403b80(undefined *param_1,undefined param_2)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = (undefined *)&DAT_0060a3c0;
  }
  *param_1 = param_2;
  return;
}


uint FUN_00403b90(undefined *param_1,byte param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_0060a3c0;
  }
  uVar1 = *(uint *)(param_1 + (ulong)(param_2 >> 5) * 4 + 8);
  uVar2 = uVar1 >> (param_2 & 0x1f);
  *(uint *)(param_1 + (ulong)(param_2 >> 5) * 4 + 8) =
       ((param_3 ^ uVar2) & 1) << (param_2 & 0x1f) ^ uVar1;
  return uVar2 & 1;
}


undefined FUN_00403bd0(undefined *param_1,undefined param_2)

{
  undefined uVar1;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_0060a3c0;
  }
  uVar1 = *(undefined *)(param_1 + 4);
  *(undefined *)(param_1 + 4) = param_2;
  return uVar1;
}


void FUN_00403bf0(undefined *param_1,long param_2,long param_3)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = (undefined *)&DAT_0060a3c0;
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


void FUN_00403c20(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                 undefined *param_5)

{
  int iVar1;
  int *piVar2;
  
  if (param_5 == (undefined *)0x0) {
    param_5 = (undefined *)&DAT_0060a3c0;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  FUN_00402760(param_1,param_2,param_3,param_4,*param_5,param_5[1],param_5 + 2,
               *(undefined *)(param_5 + 10),*(undefined *)(param_5 + 0xc));
  *piVar2 = iVar1;
  return;
}


undefined FUN_00403ca0(undefined param_1,undefined param_2,long *param_3,undefined *param_4)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined uVar4;
  uint uVar5;
  
  if (param_4 == (undefined *)0x0) {
    param_4 = (undefined *)&DAT_0060a3c0;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  uVar5 = (uint)(param_3 == (long *)0x0) | param_4[1];
  lVar3 = FUN_00402760(0,0,param_1,param_2,*param_4,uVar5,param_4 + 2,*(undefined *)(param_4 + 10),
                       *(undefined *)(param_4 + 0xc));
  uVar4 = FUN_004047a0(lVar3 + 1);
  FUN_00402760(uVar4,lVar3 + 1,param_1,param_2,*param_4,uVar5,param_4 + 2,
               *(undefined *)(param_4 + 10),*(undefined *)(param_4 + 0xc));
  *piVar2 = iVar1;
  if (param_3 != (long *)0x0) {
    *param_3 = lVar3;
  }
  return uVar4;
}


void FUN_00403d90(undefined param_1,undefined param_2,undefined param_3)

{
  FUN_00403ca0(param_1,param_2,0,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403da0(void)

{
  void **ppvVar1;
  void *__ptr;
  undefined *__ptr_00;
  void **ppvVar2;
  
  __ptr_00 = PTR_DAT_0060a238;
  if (1 < DAT_0060a250) {
    ppvVar2 = (void **)(PTR_DAT_0060a238 + 0x18);
    ppvVar1 = (void **)(PTR_DAT_0060a238 + (ulong)(DAT_0060a250 - 2) * 0x10 + 0x28);
    do {
      __ptr = *ppvVar2;
      ppvVar2 = ppvVar2 + 2;
      free(__ptr);
    } while (ppvVar2 != ppvVar1);
  }
  if (*(undefined **)(__ptr_00 + 8) != &DAT_0060a2c0) {
    free(*(undefined **)(__ptr_00 + 8));
    _DAT_0060a240 = 0x100;
    PTR_DAT_0060a248 = &DAT_0060a2c0;
  }
  if (__ptr_00 != &DAT_0060a240) {
    free(__ptr_00);
    PTR_DAT_0060a238 = &DAT_0060a240;
  }
  DAT_0060a250 = 1;
  return;
}


void FUN_00403e40(undefined param_1,undefined param_2)

{
  FUN_00403990(param_1,param_2,0xffffffffffffffff,&DAT_0060a3c0);
  return;
}


void FUN_00403e60(void)

{
  FUN_00403990();
  return;
}


void FUN_00403e70(undefined param_1)

{
  FUN_00403990(0,param_1,0xffffffffffffffff,&DAT_0060a3c0);
  return;
}


void FUN_00403e90(undefined param_1,undefined param_2)

{
  FUN_00403990(0,param_1,param_2,&DAT_0060a3c0);
  return;
}


void FUN_00403eb0(undefined param_1,int param_2,undefined param_3)

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
    FUN_00403990(param_1,param_3,0xffffffffffffffff,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00403f20(undefined param_1,int param_2,undefined param_3,undefined param_4)

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
    FUN_00403990(param_1,param_3,param_4,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00403f90(undefined param_1,undefined param_2)

{
  FUN_00403eb0(0,param_1,param_2);
  return;
}


void FUN_00403fa0(undefined param_1,undefined param_2,undefined param_3)

{
  FUN_00403f20(0,param_1,param_2,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403fb0(undefined param_1,undefined param_2,byte param_3)

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
  
  local_18 = DAT_0060a3f0;
  local_48 = _DAT_0060a3c0;
  uStack_40 = uRam000000000060a3c8;
  local_38 = _DAT_0060a3d0;
  uStack_30 = uRam000000000060a3d8;
  puVar1 = (uint *)((long)&uStack_40 + (ulong)(param_3 >> 5) * 4);
  local_28 = _DAT_0060a3e0;
  uStack_20 = uRam000000000060a3e8;
  uVar2 = *puVar1;
  *puVar1 = (~(uVar2 >> (param_3 & 0x1f)) & 1) << (param_3 & 0x1f) ^ uVar2;
  FUN_00403990(0,param_1,param_2,&local_48);
  return;
}


void FUN_00404020(undefined param_1,char param_2)

{
  FUN_00403fb0(param_1,0xffffffffffffffff,(int)param_2);
  return;
}


void FUN_00404030(undefined param_1)

{
  FUN_00403fb0(param_1,0xffffffffffffffff,0x3a);
  return;
}


void FUN_00404050(undefined param_1,undefined param_2)

{
  FUN_00403fb0(param_1,param_2,0x3a);
  return;
}


void FUN_00404060(undefined param_1,int param_2,undefined param_3)

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
    FUN_00403990(param_1,param_3,0xffffffffffffffff,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004040d0(undefined param_1,long param_2,long param_3,undefined param_4,undefined param_5
                 )

{
  undefined local_48;
  undefined uStack_40;
  undefined local_38;
  undefined uStack_30;
  undefined local_28;
  long lStack_20;
  long local_18;
  
  uStack_40 = uRam000000000060a3c8;
  local_38 = _DAT_0060a3d0;
  uStack_30 = uRam000000000060a3d8;
  local_28 = _DAT_0060a3e0;
  lStack_20 = uRam000000000060a3e8;
  local_18 = DAT_0060a3f0;
  local_48 = CONCAT44((int)((ulong)_DAT_0060a3c0 >> 0x20),10);
  if ((param_2 != 0) && (param_3 != 0)) {
    lStack_20 = param_2;
    local_18 = param_3;
    FUN_00403990(param_1,param_4,param_5,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00404140(void)

{
  FUN_004040d0();
  return;
}


void FUN_00404150(undefined param_1,undefined param_2,undefined param_3)

{
  FUN_004040d0(0,param_1,param_2,param_3,0xffffffffffffffff);
  return;
}


void FUN_00404170(undefined param_1,undefined param_2,undefined param_3,undefined param_4)

{
  FUN_004040d0(0,param_1,param_2,param_3,param_4);
  return;
}


void FUN_00404190(void)

{
  FUN_00403990();
  return;
}


void FUN_004041a0(undefined param_1,undefined param_2)

{
  FUN_00403990(0,param_1,param_2,&DAT_0060a200);
  return;
}


void FUN_004041c0(undefined param_1,undefined param_2)

{
  FUN_00403990(param_1,param_2,0xffffffffffffffff,&DAT_0060a200);
  return;
}


void FUN_004041e0(undefined param_1)

{
  FUN_00403990(0,param_1,0xffffffffffffffff,&DAT_0060a200);
  return;
}


undefined
FUN_00404200(FILE *param_1,long param_2,undefined param_3,undefined param_4,undefined *param_5,
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
  uVar1 = dcgettext(0,&DAT_0040802b,5);
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
    goto LAB_0040447c;
  case 5:
    uVar1 = param_5[3];
    uVar4 = param_5[2];
    uVar5 = param_5[1];
    uVar6 = *param_5;
    uVar7 = dcgettext(0,"Written by %s, %s, %s,\n%s, and %s.\n",5);
LAB_0040447c:
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
    goto LAB_00404519;
  case 7:
    uVar1 = param_5[2];
    uVar4 = param_5[5];
    uVar5 = param_5[4];
    uVar6 = param_5[3];
    local_58 = param_5[1];
    uVar7 = *param_5;
    uVar3 = dcgettext(0,"Written by %s, %s, %s,\n%s, %s, %s, and %s.\n",5);
LAB_00404519:
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
    goto LAB_004042fa;
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
LAB_004042fa:
  uVar1 = __fprintf_chk(param_1,1,uVar3,uVar7,local_50,local_58,uVar6,uVar5,uVar4,uVar1,local_48);
  return uVar1;
}


void FUN_004045e0(void)

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
  FUN_00404200();
  return;
}


void FUN_00404600(void)

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
  FUN_00404200();
  return;
}


void FUN_00404660(void)

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
  FUN_00404200();
  return;
}


void FUN_00404720(void)

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


void FUN_004047a0(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_004049f0();
  }
  return;
}


void FUN_004047c0(ulong param_1,ulong param_2)

{
  if ((-1 < SUB168(ZEXT816(param_1) * ZEXT816(param_2),0)) &&
     (SUB168(ZEXT816(param_1) * ZEXT816(param_2) >> 0x40,0) == 0)) {
    FUN_004047a0();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004049f0();
}


void thunk_FUN_004047a0(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_004049f0();
  }
  return;
}


void * FUN_00404800(void *param_1,size_t param_2)

{
  void *pvVar1;
  
  if ((param_2 == 0) && (param_1 != (void *)0x0)) {
    free(param_1);
    return (void *)0x0;
  }
  pvVar1 = realloc(param_1,param_2);
  if ((pvVar1 == (void *)0x0) && (param_2 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_004049f0();
  }
  return pvVar1;
}


void FUN_00404840(undefined param_1,ulong param_2,ulong param_3)

{
  if ((-1 < SUB168(ZEXT816(param_2) * ZEXT816(param_3),0)) &&
     (SUB168(ZEXT816(param_2) * ZEXT816(param_3) >> 0x40,0) == 0)) {
    FUN_00404800();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004049f0();
}


void FUN_00404870(long param_1,ulong *param_2,ulong param_3)

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
    if ((SUB168(ZEXT816(uVar2) * ZEXT816(param_3),0) < 0) || (uVar3 != 0)) goto LAB_004048cb;
  }
  else {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x5555555555555554);
    uVar3 = SUB168(auVar1 % ZEXT816(param_3),0);
    if (SUB168(auVar1 / ZEXT816(param_3),0) <= uVar2) {
LAB_004048cb:
                    /* WARNING: Subroutine does not return */
      FUN_004049f0(param_1,param_2,uVar3);
    }
    uVar2 = (uVar2 >> 1) + 1 + uVar2;
  }
  *param_2 = uVar2;
  FUN_00404800(param_1,uVar2 * param_3);
  return;
}


void FUN_00404900(long param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (param_1 == 0) {
    if (uVar1 == 0) {
      *param_2 = 0x80;
      FUN_00404800(0,0x80);
      return;
    }
    if ((long)uVar1 < 0) goto LAB_0040494a;
  }
  else {
    if (0x5555555555555553 < uVar1) {
LAB_0040494a:
                    /* WARNING: Subroutine does not return */
      FUN_004049f0();
    }
    uVar1 = (uVar1 >> 1) + 1 + uVar1;
  }
  *param_2 = uVar1;
  FUN_00404800(param_1,uVar1);
  return;
}


void FUN_00404950(size_t param_1)

{
  void *__s;
  
  __s = (void *)FUN_004047a0();
  memset(__s,0,param_1);
  return;
}


void FUN_00404970(size_t param_1,ulong param_2)

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
  FUN_004049f0();
}


void FUN_004049a0(void *param_1,size_t param_2)

{
  void *__dest;
  
  __dest = (void *)FUN_004047a0(param_2);
  memcpy(__dest,param_1,param_2);
  return;
}


void FUN_004049d0(char *param_1)

{
  void *__dest;
  size_t sVar1;
  
  sVar1 = strlen(param_1);
  __dest = (void *)FUN_004047a0(sVar1 + 1);
  memcpy(__dest,param_1,sVar1 + 1);
  return;
}


void FUN_004049f0(void)

{
  undefined uVar1;
  
  uVar1 = dcgettext(0,"memory exhausted",5);
  error(DAT_0060a1f8,0,"%s",uVar1);
                    /* WARNING: Subroutine does not return */
  abort();
}


long FUN_00404a30(undefined param_1,undefined param_2,long param_3,long param_4,undefined param_5
                 ,undefined param_6,int param_7)

{
  long lVar1;
  int iVar2;
  int *piVar3;
  undefined uVar4;
  long local_40 [2];
  
  iVar2 = FUN_00404b50(param_1,0,param_2,local_40);
  lVar1 = local_40[0];
  if (iVar2 == 0) {
    if ((param_3 <= local_40[0]) && (local_40[0] <= param_4)) {
      return local_40[0];
    }
    piVar3 = __errno_location();
    if (lVar1 < 0x40000000) {
      iVar2 = 0x22;
      if (lVar1 < -0x40000000) {
        iVar2 = 0x4b;
      }
      *piVar3 = iVar2;
      goto LAB_00404a87;
    }
  }
  else {
    piVar3 = __errno_location();
    if (iVar2 != 1) {
      if (iVar2 == 3) {
        *piVar3 = 0;
      }
      goto LAB_00404a87;
    }
  }
  *piVar3 = 0x4b;
LAB_00404a87:
  uVar4 = FUN_004041e0(param_1);
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


void FUN_00404b20(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                 undefined param_5,undefined param_6)

{
  FUN_00404a30(param_1,10,param_2,param_3,param_4,param_5,param_6);
  return;
}


ulong FUN_00404b50(byte *param_1,byte **param_2,uint param_3,long *param_4,char *param_5)

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
    if ((param_5 == (char *)0x0) || (bVar1 = *pbVar3, bVar1 == 0)) goto LAB_00404bc7;
    pcVar7 = strchr(param_5,(int)(char)bVar1);
    if (pcVar7 == (char *)0x0) goto switchD_00404c52_caseD_1;
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
        goto LAB_00404c40;
      }
      if (bVar2 != 0x42) {
                    /* WARNING: Could not recover jumptable at 0x00404ca8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar6 = (*(code *)(&PTR_LAB_004085a8)[bVar11])();
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
LAB_00404c40:
  switch(bVar1 - 0x42 & 0xff) {
  case 0:
    if (lVar5 < -0x20000000000000) goto LAB_00404de8;
    if (lVar5 < 0x20000000000000) {
      lVar5 = lVar5 << 10;
    }
    else {
LAB_004051a0:
      lVar5 = 0x7fffffffffffffff;
      uVar6 = 1;
    }
    break;
  default:
switchD_00404c52_caseD_1:
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
    goto LAB_00405190;
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
    goto LAB_00405190;
  case 9:
  case 0x29:
    if (lVar5 < SUB168((SEXT816(-0x8000000000000000) & (undefined)0xffffffffffffffff |
                       ZEXT816(0x8000000000000000)) / SEXT816((long)iVar14),0)) goto LAB_00404de8;
    lVar8 = SUB168((SEXT816(0x7fffffffffffffff) & (undefined)0xffffffffffffffff |
                   ZEXT816(0x7fffffffffffffff)) / SEXT816((long)iVar14),0);
LAB_00404d8c:
    if (lVar8 < lVar5) goto LAB_004051a0;
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
      if (lVar8 < lVar5) goto LAB_004051a0;
      lVar5 = lVar5 * lVar9;
      if (lVar10 <= lVar5) goto LAB_00404d8c;
    }
LAB_00404de8:
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
    goto LAB_00405190;
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
    goto LAB_00405190;
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
    goto LAB_00405190;
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
LAB_00405190:
    uVar6 = (ulong)(uVar15 | uVar12);
    break;
  case 0x20:
    if (lVar5 < -0x40000000000000) goto LAB_00404de8;
    if (0x3fffffffffffff < lVar5) goto LAB_004051a0;
    lVar5 = lVar5 << 9;
    break;
  case 0x21:
    break;
  case 0x35:
    if (lVar5 < -0x4000000000000000) goto LAB_00404de8;
    if (0x3fffffffffffffff < lVar5) goto LAB_004051a0;
    lVar5 = lVar5 * 2;
  }
  *param_2 = pbVar3 + iVar13;
  if (pbVar3[iVar13] != 0) {
    uVar6 = (ulong)((uint)uVar6 | 2);
  }
LAB_00404bc7:
  *param_4 = lVar5;
  return uVar6;
}


void FUN_004052a0(long param_1,int *param_2)

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
      if (iVar3 <= iVar8) goto LAB_0040531c;
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
      if (iVar9 <= iVar3) goto LAB_0040531c;
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
LAB_0040531c:
  param_2[0xc] = iVar2;
  param_2[0xb] = iVar1 + (iVar2 - iVar3);
  return;
}


int FUN_00405380(int param_1,undefined *param_2,char *param_3,char **param_4,undefined *param_5,
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
      if ((iVar5 == 0) && (sVar7 = strlen(__s1_00), sVar7 == sVar15)) goto LAB_004055a0;
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
            if (local_70 == (char *)0x0) goto LAB_004054e0;
          }
          else if (local_70 == (char *)0x0) {
            local_70 = (char *)calloc((long)iVar5,1);
            if (local_70 == (char *)0x0) {
              bVar3 = true;
              goto LAB_004054e0;
            }
            bVar4 = true;
            local_70[(int)local_44] = '\x01';
          }
          local_70[lVar16] = '\x01';
        }
      }
LAB_004054e0:
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
              __fprintf_chk(__stream,1,&DAT_00408829,param_9,*param_4);
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
LAB_004055a0:
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


uint FUN_004059a0(uint param_1,undefined *param_2,char *param_3,long param_4,undefined param_5,
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
LAB_004059ea:
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
          goto LAB_00405aed;
        }
        pbVar8 = *(byte **)(param_7 + 8);
      }
      param_7[10] = 0;
    }
LAB_00405aed:
    param_7[6] = 1;
    cVar2 = *param_3;
LAB_00405af8:
    if (cVar2 == ':') {
      uVar3 = 0;
    }
    if (pbVar8 == (byte *)0x0) goto LAB_00405a68;
LAB_00405b0c:
    if (*pbVar8 == 0) goto LAB_00405a68;
  }
  else {
    if (param_7[6] == 0) goto LAB_004059ea;
    cVar2 = *param_3;
    pbVar8 = *(byte **)(param_7 + 8);
    if ((cVar2 - 0x2bU & 0xfd) != 0) goto LAB_00405af8;
    pcVar4 = param_3 + 1;
    param_3 = param_3 + 1;
    if (*pcVar4 == ':') {
      uVar3 = 0;
    }
    if (pbVar8 != (byte *)0x0) goto LAB_00405b0c;
LAB_00405a68:
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
        FUN_004052a0(param_2,param_7);
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
LAB_00405bd6:
      if (uVar11 != param_1) {
        *param_7 = uVar11;
      }
      return 0xffffffff;
    }
    lVar6 = 3;
    pbVar8 = (byte *)param_2[(int)uVar11];
    pbVar9 = pbVar8;
    pbVar10 = &DAT_00408841;
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
          FUN_004052a0(param_2,param_7);
          uVar11 = param_7[0xb];
        }
      }
      param_7[0xc] = param_1;
      *param_7 = param_1;
      goto LAB_00405bd6;
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
        puVar15 = &DAT_00408841;
        goto LAB_00405d35;
      }
      if ((int)param_6 != 0) {
        if (pbVar8[2] == 0) {
          pcVar4 = strchr(param_3,(int)(char)bVar14);
          param_6 = param_6 & 0xffffffff;
          if (pcVar4 != (char *)0x0) goto LAB_00405ce0;
        }
        *(byte **)(param_7 + 8) = pbVar8 + 1;
        uVar11 = FUN_00405380(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar3,
                              &DAT_00408842);
        if (uVar11 != 0xffffffff) {
          return uVar11;
        }
        pbVar8 = (byte *)param_2[(int)*param_7];
      }
    }
LAB_00405ce0:
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
  puVar15 = &DAT_00408860;
LAB_00405d35:
  uVar3 = FUN_00405380(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar3,puVar15);
  return uVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405f70(void)

{
  DAT_0060a400 = DAT_0060a258._4_4_;
  _DAT_0060a404 = (undefined)DAT_0060a258;
  FUN_004059a0();
  DAT_0060a258._4_4_ = DAT_0060a400;
  DAT_0060a440 = DAT_0060a410;
  _DAT_0060a254 = DAT_0060a408;
  return;
}


void FUN_00405fd0(void)

{
  FUN_00405f70();
  return;
}


void FUN_00405ff0(void)

{
  FUN_00405f70();
  return;
}


void FUN_00406010(void)

{
  FUN_004059a0();
  return;
}


void FUN_00406030(void)

{
  FUN_00405f70();
  return;
}


void FUN_00406050(void)

{
  FUN_004059a0();
  return;
}


size_t FUN_00406070(wchar_t *param_1,byte *param_2,size_t param_3,mbstate_t *param_4)

{
  char cVar1;
  size_t sVar2;
  wchar_t local_1c;
  
  if (param_2 == (byte *)0x0) {
    param_3 = 1;
    param_2 = (byte *)0x40885f;
  }
  else {
    if (param_3 == 0) {
      return 0xfffffffffffffffe;
    }
    if (param_1 != (wchar_t *)0x0) goto LAB_00406094;
  }
  param_1 = &local_1c;
LAB_00406094:
  sVar2 = mbrtowc(param_1,(char *)param_2,param_3,param_4);
  if ((0xfffffffffffffffd < sVar2) && (cVar1 = FUN_00406150(0), cVar1 == '\0')) {
    sVar2 = 1;
    *param_1 = (uint)*param_2;
  }
  return sVar2;
}


ulong FUN_004060f0(uint *param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  
  lVar2 = __fpending();
  uVar1 = *param_1;
  uVar3 = FUN_00406720(param_1);
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


bool FUN_00406150(int param_1)

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
    pbVar5 = &DAT_00408864;
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

char * FUN_004061b0(void)

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
  if (DAT_0060a438 != (char *)0x0) goto LAB_004061ea;
  pcVar7 = getenv("CHARSETALIASDIR");
  if ((pcVar7 == (char *)0x0) || (*pcVar7 == '\0')) {
    sVar6 = 0x73;
    sVar5 = 0x65;
    __n = 100;
    pcVar7 = 
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib"
    ;
LAB_004062d5:
    __file = (char *)malloc(sVar6);
    if (__file != (char *)0x0) {
      memcpy(__file,pcVar7,__n);
      __file[__n] = '/';
      goto LAB_004062f6;
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
        goto LAB_004062d5;
      }
      sVar6 = __n + 0xe;
    }
    __file = (char *)malloc(sVar6);
    if (__file != (char *)0x0) {
      memcpy(__file,pcVar7,__n);
      sVar5 = __n;
LAB_004062f6:
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
LAB_00406390:
          pbVar8 = (byte *)__stream->_IO_read_ptr;
          if (__stream->_IO_read_end <= pbVar8) goto LAB_0040651c;
          do {
            __stream->_IO_read_ptr = (char *)(pbVar8 + 1);
            uVar4 = (uint)*pbVar8;
            __ptr = pcVar7;
            while( true ) {
              pcVar7 = __ptr;
              if ((uVar4 - 9 < 2) || (uVar4 == 0x20)) goto LAB_00406390;
              if (uVar4 == 0x23) goto LAB_00406581;
              ungetc(uVar4,__stream);
              iVar2 = fscanf(__stream,"%50s %50s",&local_b8,&local_78);
              puVar13 = &local_b8;
              if (iVar2 < 2) goto LAB_0040652f;
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
                FUN_00406720(__stream);
                goto LAB_00406334;
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
LAB_0040651c:
              uVar4 = __uflow(__stream);
              __ptr = pcVar7;
              if (uVar4 == 0xffffffff) goto LAB_0040652f;
            }
          } while( true );
        }
        close(iVar2);
      }
      goto LAB_0040632e;
    }
  }
  DAT_0060a438 = "";
LAB_004061ea:
  cVar1 = *DAT_0060a438;
  pcVar7 = DAT_0060a438;
  do {
    if (cVar1 == '\0') {
LAB_00406244:
      if (*__s1 == '\0') {
        __s1 = "ASCII";
      }
      return __s1;
    }
    iVar2 = strcmp(__s1,pcVar7);
    if ((iVar2 == 0) || ((cVar1 == '*' && (pcVar7[1] == '\0')))) {
      sVar6 = strlen(pcVar7);
      __s1 = pcVar7 + sVar6 + 1;
      goto LAB_00406244;
    }
    sVar6 = strlen(pcVar7);
    sVar5 = strlen(pcVar7 + sVar6 + 1);
    pcVar7 = pcVar7 + sVar6 + 1 + sVar5 + 1;
    cVar1 = *pcVar7;
  } while( true );
LAB_00406581:
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
  if (uVar4 == 0xffffffff) goto LAB_0040652f;
  goto LAB_00406390;
LAB_0040652f:
  FUN_00406720(__stream);
  if (local_d0 == 0) {
LAB_0040632e:
    pcVar7 = "";
  }
  else {
    pcVar7[local_d0] = '\0';
  }
LAB_00406334:
  free(__file);
  DAT_0060a438 = pcVar7;
  goto LAB_004061ea;
}


int FUN_00406720(FILE *param_1)

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
      if (_Var4 == -1) goto LAB_00406787;
    }
    iVar1 = FUN_004067a0(param_1);
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
LAB_00406787:
  iVar1 = fclose(param_1);
  return iVar1;
}


void FUN_004067a0(FILE *param_1)

{
  int iVar1;
  
  if (param_1 != (FILE *)0x0) {
    iVar1 = __freading();
    if ((iVar1 != 0) && ((param_1->_flags & 0x100U) != 0)) {
      FUN_004067e0(param_1,0,1);
      fflush(param_1);
      return;
    }
  }
  fflush(param_1);
  return;
}


ulong FUN_004067e0(FILE *param_1,__off_t param_2,int param_3)

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


/* WARNING: Removing unreachable block (ram,0x00406873) */
/* WARNING: Removing unreachable block (ram,0x00406878) */

void FUN_00406840(void)

{
  __DT_INIT();
  return;
}


void FUN_004068a0(void)

{
  return;
}


void FUN_004068b0(undefined param_1)

{
  __cxa_atexit(param_1,0,DAT_0060a1e8);
  return;
}


undefined FUN_004068c8(undefined param_1,undefined param_2,undefined param_3)

{
  code **ppcVar1;
  
  for (ppcVar1 = (code **)&DAT_00609e30; *ppcVar1 != (code *)0xffffffffffffffff;
      ppcVar1 = ppcVar1 + -1) {
    (**ppcVar1)();
  }
  return param_3;
}


void __DT_FINI(void)

{
  FUN_004020e1();
  return;
}

