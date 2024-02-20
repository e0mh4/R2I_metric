
#include "decompile_ghidra.h"
#define __int64 long long
#define __int32 int
#define __int16 short
#define __int8 char

void switchD_00403700caseD_b(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401bf5(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401bfa(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401bff(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401c04(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void switchD_0040522acaseD_0(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401c0e(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401c13(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401c18(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401c1d(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401c22(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401c27(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401c2c(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


uint FUN_00401c40(int param_1,undefined *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  size_t sVar4;
  long lVar5;
  char *pcVar6;
  undefined uVar7;
  long lVar8;
  undefined uVar9;
  int *piVar10;
  char *pcVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  char *pcVar15;
  undefined uVar16;
  char *__src;
  byte bVar17;
  undefined uVar18;
  uint uVar19;
  long lVar20;
  undefined auVar21 [16];
  undefined uStack_118;
  __mode_t local_110;
  uint local_10c;
  char *local_108;
  char *local_100;
  int *local_f8;
  size_t local_f0;
  char *local_e0;
  undefined local_d4;
  undefined local_d3 [9];
  undefined local_ca;
  undefined local_c8 [10];
  undefined local_be;
  uint local_b0;
  
  lVar5 = 0;
  bVar17 = 0;
  lVar14 = (long)param_1;
  local_e0 = (char *)0x0;
  FUN_00403510(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils",
                 "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale"
                );
  textdomain("coreutils");
  FUN_0040a910(FUN_00402d90);
  DAT_0060f338 = 0;
  DAT_0060f339 = 0;
  DAT_0060f33a = 0;
  pcVar6 = (char *)0x0;
  lVar8 = 0;
LAB_00401cc0:
  lVar20 = lVar8;
  iVar2 = FUN_00408a70(param_1,param_2,
                       "Rcfvr::w::x::X::s::t::u::g::o::a::,::+::=::0::1::2::3::4::5::6::7::",
                       &PTR_s_changes_0040b3c0);
  lVar8 = lVar20;
  if (iVar2 == -1) {
    if (lVar20 == 0) {
      lVar8 = (long)DAT_0060f2dc;
      if (lVar5 == 0) {
        DAT_0060f2dc = DAT_0060f2dc + 1;
        lVar5 = param_2[lVar8];
        if (DAT_0060f2dc < param_1) goto LAB_004022e6;
        iVar2 = DAT_0060f2dc;
        if (lVar5 == 0) goto LAB_00402603;
      }
      else {
        iVar2 = DAT_0060f2dc;
        if (DAT_0060f2dc < param_1) {
LAB_004022e6:
          DAT_0060f340 = FUN_00402fc0();
          if (DAT_0060f340 != 0) {
            DAT_0060f33c = umask(0);
            goto LAB_00401f6b;
          }
          param_2 = (undefined *)FUN_00405130(lVar5);
          uVar9 = dcgettext(0,"invalid mode: %s",5);
          error(0,0,uVar9,param_2);
          iVar2 = FUN_004029c0(1);
        }
      }
      if (param_2[(long)iVar2 + -1] == lVar5) {
        param_2 = (undefined *)FUN_00405130(param_2[lVar14 + -1]);
        uVar9 = dcgettext(0,"missing operand after %s",5);
        error(0,0,uVar9,param_2);
        goto LAB_00401e41;
      }
LAB_00402603:
      pcVar15 = "missing operand";
    }
    else {
      if (lVar5 == 0) {
        if (param_1 <= DAT_0060f2dc) goto LAB_00402603;
        DAT_0060f340 = FUN_00403330(lVar20);
        if (DAT_0060f340 == 0) {
          uVar9 = FUN_00404ee0(4,lVar20);
          uVar7 = dcgettext(0,"failed to get attributes of %s",5);
          piVar10 = __errno_location();
          auVar21 = error(1,*piVar10,uVar7,uVar9);
          uVar9 = uStack_118;
          uStack_118 = SUB168(auVar21,0);
          (*(code *)PTR___libc_start_main_0060eff0)
                    (FUN_00401c40,uVar9,&local_110,FUN_0040a8a0,FUN_0040a900,
                     SUB168(auVar21 >> 0x40,0),&uStack_118);
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
LAB_00401f6b:
        local_f8 = __errno_location();
        pcVar15 = (char *)(ulong)(bVar17 & DAT_0060f33a);
        if ((bVar17 & DAT_0060f33a) == 0) {
          DAT_0060f330 = (long *)0x0;
        }
        else {
          DAT_0060f330 = (long *)FUN_00405150(&DAT_0060f320);
          if (DAT_0060f330 == (long *)0x0) {
            uVar13 = FUN_00404ee0(4,&DAT_0040b67e);
            uVar9 = dcgettext(0,"failed to get attributes of %s",5);
            error(1,*local_f8,uVar9,uVar13);
            goto LAB_004026e2;
          }
        }
        lVar5 = 0;
        uVar13 = 1;
        uVar12 = 1;
        lVar14 = FUN_004059d0(param_2 + DAT_0060f2dc,0x411,0);
        local_100 = local_c8 + 1;
        pcVar6 = (char *)fts_read(lVar14);
        if (pcVar6 != (char *)0x0) goto LAB_00401fd0;
        goto LAB_00402003;
      }
LAB_00402822:
      pcVar15 = "cannot combine mode and --reference options";
    }
    uVar9 = dcgettext(0,pcVar15,5);
    error(0,0,uVar9);
  }
  else {
    if (iVar2 == 99) {
      DAT_0060f250 = 1;
      goto LAB_00401cc0;
    }
    if (iVar2 < 100) {
      if (iVar2 < 0x38) {
        if (0x2f < iVar2) goto LAB_00401db0;
        if (iVar2 == -0x82) {
          FUN_004029c0(0);
          goto LAB_00402822;
        }
        if (iVar2 < -0x81) {
          if (iVar2 == -0x83) {
            FUN_00405600(stdout,"chmod","GNU coreutils",PTR_DAT_0060f258,"David MacKenzie",
                         "Jim Meyering",0);
                    /* WARNING: Subroutine does not return */
            exit(0);
          }
        }
        else if (iVar2 - 0x2bU < 2) goto LAB_00401db0;
        goto LAB_00401e41;
      }
      if (iVar2 != 0x52) {
        if (iVar2 < 0x53) {
          if (iVar2 != 0x3d) goto LAB_00401e41;
        }
        else if ((iVar2 != 0x58) && (iVar2 != 0x61)) goto LAB_00401e41;
        goto LAB_00401db0;
      }
      DAT_0060f33a = 1;
      goto LAB_00401cc0;
    }
    if (iVar2 == 0x76) {
      DAT_0060f250 = 0;
      goto LAB_00401cc0;
    }
    if (iVar2 < 0x77) goto LAB_00401e50;
    if (iVar2 == 0x80) {
      bVar17 = 0;
      goto LAB_00401cc0;
    }
    if (0x80 < iVar2) {
      if (iVar2 == 0x81) {
        bVar17 = 1;
      }
      else {
        lVar8 = DAT_0060f4e8;
        if (iVar2 != 0x82) goto LAB_00401e41;
      }
      goto LAB_00401cc0;
    }
    if (iVar2 < 0x79) goto LAB_00401db0;
  }
LAB_00401e41:
  do {
    while( true ) {
      iVar2 = FUN_004029c0(1);
LAB_00401e50:
      if (iVar2 == 0x6f) goto LAB_00401db0;
      if (0x6f < iVar2) break;
      if (iVar2 == 0x66) {
        DAT_0060f339 = 1;
        lVar8 = lVar20;
        goto LAB_00401cc0;
      }
      if (iVar2 == 0x67) goto LAB_00401db0;
    }
  } while (iVar2 < 0x72);
LAB_00401db0:
  local_108 = (char *)param_2[(long)DAT_0060f2dc + -1];
  sVar4 = strlen(local_108);
  pcVar11 = pcVar6 + (pcVar6 != (char *)0x0);
  pcVar15 = pcVar11 + sVar4;
  __src = local_108;
  if (local_e0 <= pcVar15) {
    local_e0 = pcVar15 + 1;
    local_100 = local_108;
    local_108 = pcVar15;
    local_f8 = (int *)pcVar11;
    local_f0 = sVar4;
    lVar5 = FUN_004058a0(lVar5,&local_e0);
    pcVar11 = (char *)local_f8;
    sVar4 = local_f0;
    __src = local_100;
    pcVar15 = local_108;
  }
  pcVar6[lVar5] = ',';
  local_108 = pcVar15;
  memcpy(pcVar11 + lVar5,__src,sVar4 + 1);
  DAT_0060f338 = 1;
  pcVar6 = local_108;
  lVar8 = lVar20;
  goto LAB_00401cc0;
LAB_00401fd0:
  uVar12 = (uint)uVar13;
  pcVar15 = *(char **)(pcVar6 + 0x38);
  uVar18 = (undefined)lVar5;
  switch(*(undefined *)(pcVar6 + 0x70)) {
  default:
switchD_00401fe3_caseD_0:
    if (((DAT_0060f330 != (long *)0x0) && (*(long *)(pcVar6 + 0x80) == *DAT_0060f330)) &&
       (*(long *)(pcVar6 + 0x78) == DAT_0060f330[1])) {
      iVar2 = strcmp(pcVar15,"/");
      if (iVar2 == 0) {
        uVar9 = FUN_00404ee0(4,pcVar15);
        uVar7 = dcgettext(0,"it is dangerous to operate recursively on %s",5);
        error(0,0,uVar7,uVar9);
      }
      else {
        FUN_00404e00(1,4,&DAT_0040b67e);
        uVar9 = FUN_00404e00(0,4,pcVar15);
        uVar7 = dcgettext(0,"it is dangerous to operate recursively on %s (same as %s)",5);
        error(0,0,uVar7,uVar9);
      }
      uVar19 = 0;
      uVar9 = dcgettext(0,"use --no-preserve-root to override this failsafe",5);
      error(0,0,uVar9);
      fts_set(lVar14,pcVar6,4);
      fts_read(lVar14);
      break;
    }
    local_10c = *(uint *)(pcVar6 + 0x90);
    local_108 = *(char **)(pcVar6 + 0x30);
    uVar19 = local_10c & 0xf000;
    local_110 = FUN_00403390(local_10c,uVar19 == 0x4000,DAT_0060f33c);
    if (uVar19 == 0xa000) {
      if ((DAT_0060f250 == 2) || (DAT_0060f250 != 0)) goto LAB_00402365;
      uVar19 = 1;
      uVar9 = FUN_00404ee0(4,pcVar15);
      uVar7 = dcgettext(0,"neither symbolic link %s nor referent has been changed\n",5);
      __printf_chk(1,uVar7,uVar9);
    }
    else {
      iVar2 = fchmodat(*(int *)(lVar14 + 0x2c),local_108,local_110,0);
      if (iVar2 != 0) {
        if (DAT_0060f339 == 0) {
          uVar9 = FUN_00404ee0(4,pcVar15);
          uVar7 = dcgettext(0,"changing permissions of %s",5);
          error(0,*local_f8,uVar7,uVar9);
        }
        goto LAB_00402058;
      }
      if (DAT_0060f250 != 2) {
        uVar19 = local_110;
        if (((local_110 & 0xe00) == 0) ||
           (iVar2 = __fxstatat(1,*(int *)(lVar14 + 0x2c),local_108,(stat *)local_c8,0),
           uVar19 = local_b0, iVar2 == 0)) {
          if (((uVar19 ^ local_10c) & 0xfff) != 0) {
            FUN_00402e30(local_110,&local_d4);
            local_ca = uVar18;
            FUN_00402e30(local_10c,local_c8);
            local_be = uVar18;
            uVar9 = dcgettext(0,"mode of %s changed from %04lo (%s) to %04lo (%s)\n",5);
            uVar16 = 4;
            uVar7 = FUN_00404ee0(4,pcVar15);
            __printf_chk(1,uVar9,uVar7,local_10c & 0xfff,local_100,local_110 & 0xfff,local_d3,uVar16
                        );
            goto LAB_0040241a;
          }
        }
        else {
LAB_004026e2:
          uVar12 = (uint)uVar13;
          if (DAT_0060f339 == 0) {
            uVar9 = FUN_00404ee0(4,pcVar15);
            uVar7 = dcgettext(0,"getting new attributes of %s",5);
            error(0,*local_f8,uVar7,uVar9);
          }
        }
        if (DAT_0060f250 == 0) {
          FUN_00402e30(local_110,&local_d4);
          local_ca = (char)lVar5;
          FUN_00402e30(local_10c,local_c8);
          local_be = (char)lVar5;
          uVar9 = dcgettext(0,"mode of %s retained as %04lo (%s)\n",5);
          uVar7 = FUN_00404ee0(4,pcVar15);
          __printf_chk(1,uVar9,uVar7,local_110 & 0xfff);
        }
      }
LAB_0040241a:
      uVar19 = (uint)DAT_0060f338;
      if (DAT_0060f338 == 0) {
LAB_00402365:
        uVar19 = 1;
      }
      else {
        uVar3 = FUN_00403390(local_10c,(local_10c & 0xf000) == 0x4000,0,DAT_0060f340);
        if ((local_110 & ~uVar3) != 0) {
          local_108 = (char *)((ulong)local_108 & 0xffffffff00000000 | (ulong)uVar3);
          uVar19 = 0;
          FUN_00402e30(local_110,&local_d4);
          FUN_00402e30((ulong)local_108 & 0xffffffff,local_c8);
          local_ca = (undefined)lVar5;
          local_be = local_ca;
          uVar9 = FUN_00404fb0(0,3,pcVar15);
          uVar7 = dcgettext(0,"%s: new permissions are %s, not %s",5);
          error(0,0,uVar7,uVar9,local_d3,local_100);
        }
      }
    }
    goto LAB_004020f8;
  case 2:
    cVar1 = FUN_00405a20(lVar14,pcVar6);
    if (cVar1 == '\0') goto switchD_00401fe3_caseD_0;
    uVar19 = 0;
    uVar9 = FUN_00404fb0(0,3,pcVar15);
    uVar7 = dcgettext(0,
                      "WARNING: Circular directory structure.\nThis almost certainly means that you have a corrupted file system.\nNOTIFY YOUR SYSTEM MANAGER.\nThe following directory is part of the cycle:\n  %s\n"
                      ,5);
    error(0,0,uVar7,uVar9);
    break;
  case 4:
    if (DAT_0060f339 == 0) {
      uVar9 = FUN_00404ee0(4,pcVar15);
      pcVar11 = "cannot read directory %s";
LAB_00402279:
      uVar7 = dcgettext(0,pcVar11,5);
      error(0,*(undefined *)(pcVar6 + 0x40),uVar7,uVar9);
    }
    goto LAB_00402058;
  case 6:
    uVar19 = 1;
    break;
  case 7:
    if (DAT_0060f339 == 0) {
      uVar9 = FUN_00404fb0(0,3,pcVar15);
      error(0,*(undefined *)(pcVar6 + 0x40),"%s",uVar9);
    }
    goto LAB_00402058;
  case 10:
    if ((*(long *)(pcVar6 + 0x58) != 0) || (*(long *)(pcVar6 + 0x20) != 0)) {
      if (DAT_0060f339 == 0) {
        uVar9 = FUN_00404ee0(4,pcVar15);
        pcVar11 = "cannot access %s";
        goto LAB_00402279;
      }
      goto LAB_00402058;
    }
    *(undefined *)(pcVar6 + 0x20) = 1;
    uVar19 = 1;
    fts_set(lVar14,pcVar6,1);
    break;
  case 0xd:
    if (DAT_0060f339 == 0) {
      uVar9 = FUN_00404ee0(4,pcVar15);
      uVar7 = dcgettext(0,"cannot operate on dangling symlink %s",5);
      error(0,0,uVar7,uVar9);
    }
LAB_00402058:
    if ((DAT_0060f250 == 2) || (DAT_0060f250 != 0)) {
      uVar19 = 0;
    }
    else {
      FUN_00402e30(local_110,&local_d4);
      local_ca = uVar18;
      FUN_00402e30(local_10c,local_c8);
      local_be = uVar18;
      uVar9 = dcgettext(0,"failed to change mode of %s from %04lo (%s) to %04lo (%s)\n",5);
      auVar21 = FUN_00404ee0(4,pcVar15);
      uVar19 = 0;
      __printf_chk(1,uVar9,SUB168(auVar21,0),local_10c & 0xfff,local_100,local_110 & 0xfff,local_d3,
                   SUB168(auVar21 >> 0x40,0));
    }
LAB_004020f8:
    if (DAT_0060f33a == 0) {
      fts_set(lVar14,pcVar6,4);
    }
  }
  uVar12 = uVar12 & uVar19;
  uVar13 = (ulong)uVar12;
  pcVar6 = (char *)fts_read();
  if (pcVar6 == (char *)0x0) {
LAB_00402003:
    if (*local_f8 != 0) {
      uVar12 = (uint)DAT_0060f339;
      if (DAT_0060f339 == 0) {
        uVar9 = dcgettext(0,"fts_read failed",5);
        error(0,*local_f8,uVar9);
      }
      else {
        uVar12 = 0;
      }
    }
    iVar2 = fts_close(lVar14);
    if (iVar2 != 0) {
      uVar12 = 0;
      uVar9 = dcgettext(0,"fts_close failed",5);
      error(0,*local_f8,uVar9);
    }
    return uVar12 ^ 1;
  }
  goto LAB_00401fd0;
}


void FUN_004028e0(undefined param_1,undefined param_2,undefined param_3)

{
  undefined unaff_retaddr;
  undefined auStack_8 [8];
  
  (*(code *)PTR___libc_start_main_0060eff0)
            (FUN_00401c40,unaff_retaddr,&stack0x00000008,FUN_0040a8a0,FUN_0040a900,param_3,auStack_8
            );
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* WARNING: Removing unreachable block (ram,0x00402918) */
/* WARNING: Removing unreachable block (ram,0x00402922) */

void FUN_0040290b(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00402959) */

void FUN_0040292a(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00402996) */

void FUN_00402961(void)

{
  if (DAT_0060f308 != '\0') {
    return;
  }
  FUN_0040290b();
  DAT_0060f308 = 1;
  return;
}


/* WARNING: Removing unreachable block (ram,0x00402959) */

void thunk_FUN_0040292a(void)

{
  return;
}


void FUN_004029c0(int param_1)

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
  
  uVar7 = DAT_0060f358;
  bVar14 = 0;
  if (param_1 != 0) {
    uVar3 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(stderr,1,uVar3,uVar7);
    goto LAB_004029ff;
  }
  uVar3 = dcgettext(0,
                    "Usage: %s [OPTION]... MODE[,MODE]... FILE...\n  or:  %s [OPTION]... OCTAL-MODE FILE...\n  or:  %s [OPTION]... --reference=RFILE FILE...\n"
                    ,5);
  __printf_chk(1,uVar3,uVar7,uVar7,uVar7);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "Change the mode of each FILE to MODE.\nWith --reference, change the mode of each FILE to that of RFILE.\n\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -c, --changes          like verbose but report only when a change is made\n  -f, --silent, --quiet  suppress most error messages\n  -v, --verbose          output a diagnostic for every file processed\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --no-preserve-root  do not treat \'/\' specially (the default)\n      --preserve-root    fail to operate recursively on \'/\'\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"      --reference=RFILE  use RFILE\'s mode instead of MODE values\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"  -R, --recursive        change files and directories recursively\n"
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
                             "\nEach MODE is of the form \'[ugoa]*([-+=]([rwxXst]*|[ugo]))+|[-+=][0-7]+\'.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  local_88 = &DAT_0040a96a;
  local_80 = "test invocation";
  local_78[0] = (byte *)0x40a9e4;
  local_78[1] = (byte *)0x40a97c;
  local_78[2] = (byte *)0x40a992;
  local_78[3] = (byte *)0x40a99c;
  local_78[4] = (byte *)0x40a9ab;
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
    lVar9 = 6;
    pbVar10 = (byte *)"chmod";
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
        pcVar4 = "chmod";
        goto LAB_00402d3b;
      }
    }
    pcVar4 = "chmod";
    uVar7 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    pcVar8 = " invocation";
    __printf_chk(1,uVar7,"https://www.gnu.org/software/coreutils/","chmod");
  }
  else {
    uVar7 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar7,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar8 = setlocale(5,(char *)0x0);
    if (pcVar8 != (char *)0x0) {
      iVar2 = strncmp(pcVar8,"en_",3);
      if (iVar2 != 0) {
LAB_00402d3b:
        uVar7 = dcgettext(0,"Report %s translation bugs to <https://translationproject.org/team/>\n"
                          ,5);
        __printf_chk(1,uVar7,"chmod");
      }
    }
    pcVar8 = " invocation";
    uVar7 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    __printf_chk(1,uVar7,"https://www.gnu.org/software/coreutils/","chmod");
    if (pcVar4 != "chmod") {
      pcVar8 = "";
    }
  }
  uVar7 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(1,uVar7,pcVar4,pcVar8);
LAB_004029ff:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}


void FUN_00402d70(undefined param_1)

{
  DAT_0060f350 = param_1;
  return;
}


void FUN_00402d80(undefined param_1)

{
  DAT_0060f348 = param_1;
  return;
}


void FUN_00402d90(void)

{
  int iVar1;
  int *piVar2;
  undefined uVar3;
  undefined uVar4;
  
  iVar1 = FUN_00408b70(stdout);
  if (iVar1 != 0) {
    piVar2 = __errno_location();
    if ((DAT_0060f348 == '\0') || (*piVar2 != 0x20)) {
      uVar3 = dcgettext(0,"write error",5);
      if (DAT_0060f350 == 0) {
        error(0,*piVar2,"%s",uVar3);
      }
      else {
        uVar4 = FUN_00404f80();
        error(0,*piVar2,"%s: %s",uVar4,uVar3);
      }
      goto LAB_00402e0e;
    }
  }
  iVar1 = FUN_00408b70(stderr);
  if (iVar1 == 0) {
    return;
  }
LAB_00402e0e:
                    /* WARNING: Subroutine does not return */
  _exit(DAT_0060f260);
}


void FUN_00402e30(uint param_1,undefined *param_2)

{
  byte bVar1;
  undefined uVar2;
  char cVar3;
  uint uVar4;
  
  uVar2 = 0x2d;
  uVar4 = param_1 & 0xf000;
  if ((((uVar4 != 0x8000) && (uVar2 = 100, uVar4 != 0x4000)) && (uVar2 = 0x62, uVar4 != 0x6000)) &&
     (((uVar2 = 99, uVar4 != 0x2000 && (uVar2 = 0x6c, uVar4 != 0xa000)) &&
      ((uVar2 = 0x70, uVar4 != 0x1000 && (uVar2 = 0x73, uVar4 != 0xc000)))))) {
    uVar2 = 0x3f;
  }
  *param_2 = uVar2;
  param_2[1] = (-((param_1 & 0x100) == 0) & 0xbbU) + 0x72;
  param_2[2] = (-((param_1 & 0x80) == 0) & 0xb6U) + 0x77;
  bVar1 = -((param_1 & 0x40) == 0);
  if ((param_1 & 0x800) == 0) {
    cVar3 = (bVar1 & 0xb5) + 0x78;
  }
  else {
    cVar3 = (bVar1 & 0xe0) + 0x73;
  }
  param_2[3] = cVar3;
  param_2[4] = (-((param_1 & 0x20) == 0) & 0xbbU) + 0x72;
  param_2[5] = (-((param_1 & 0x10) == 0) & 0xb6U) + 0x77;
  bVar1 = -((param_1 & 8) == 0);
  if ((param_1 & 0x400) == 0) {
    cVar3 = (bVar1 & 0xb5) + 0x78;
  }
  else {
    cVar3 = (bVar1 & 0xe0) + 0x73;
  }
  param_2[6] = cVar3;
  param_2[7] = (-((param_1 & 4) == 0) & 0xbbU) + 0x72;
  param_2[8] = (-((param_1 & 2) == 0) & 0xb6U) + 0x77;
  bVar1 = -((param_1 & 1) == 0);
  if ((param_1 & 0x200) != 0) {
    param_2[9] = (bVar1 & 0xe0) + 0x74;
    *(undefined *)(param_2 + 10) = 0x20;
    return;
  }
  param_2[9] = (bVar1 & 0xb5) + 0x78;
  *(undefined *)(param_2 + 10) = 0x20;
  return;
}


void FUN_00402fb0(long param_1)

{
  FUN_00402e30(*(undefined *)(param_1 + 0x18));
  return;
}


undefined * FUN_00402fc0(byte *param_1)

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
    puVar2 = (undefined *)FUN_00405740(0x20);
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
      FUN_00405990();
    }
  }
  puVar2 = (undefined *)FUN_00405740();
  lVar13 = 0;
LAB_0040303b:
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
        if (bVar9 != 0x67) goto LAB_0040306b;
        uVar5 = uVar5 | 0x438;
      }
    }
    param_1 = param_1 + 1;
  } while( true );
  if (((bVar9 != 0x2d) && (bVar9 != 0x3d)) && (bVar9 != 0x2b)) goto LAB_0040306b;
  puVar12 = puVar2 + lVar13 * 8;
  do {
    lVar13 = lVar13 + 1;
    bVar9 = param_1[1];
    uVar6 = (uint)(char)bVar9;
    uVar11 = (undefined)uVar7;
    if (bVar9 == 0x67) {
      uVar3 = 0x38;
LAB_004030de:
      *(undefined *)((long)puVar12 + 1) = 3;
      *(uint *)(puVar12 + 2) = uVar5;
      *(uint *)(puVar12 + 4) = uVar3;
      *(undefined *)puVar12 = uVar11;
      param_1 = param_1 + 2;
      uVar7 = (uint)*param_1;
LAB_004030f6:
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
          if (bVar9 != 0x75) goto LAB_004031c0;
        }
        goto LAB_004030de;
      }
      if (7 < (byte)(bVar9 - 0x30)) {
LAB_004031c0:
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
            goto switchD_004031d4_caseD_1;
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
switchD_004031d4_caseD_1:
        *(undefined *)puVar12 = uVar11;
        *(undefined *)((long)puVar12 + 1) = uVar8;
        *(uint *)(puVar12 + 2) = uVar5;
        *(uint *)(puVar12 + 4) = uVar3;
        goto LAB_004030f6;
      }
      uVar6 = 0;
      param_1 = param_1 + 1;
      do {
        uVar6 = (uVar7 - 0x30) + uVar6 * 8;
        param_1 = param_1 + 1;
        if (0xfff < uVar6) goto LAB_0040306b;
        bVar9 = *param_1;
        uVar7 = (uint)(char)bVar9;
      } while ((byte)(bVar9 - 0x30) < 8);
      if ((uVar5 != 0) || ((bVar9 != 0 && (bVar9 != 0x2c)))) goto LAB_0040306b;
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
LAB_0040306b:
    free(puVar2);
    return (undefined *)0x0;
  }
  param_1 = param_1 + 1;
  goto LAB_0040303b;
}


undefined * FUN_00403330(char *param_1)

{
  int iVar1;
  undefined *puVar2;
  stat sStack_98;
  
  iVar1 = __xstat(1,param_1,&sStack_98);
  puVar2 = (undefined *)0x0;
  if (iVar1 == 0) {
    puVar2 = (undefined *)FUN_00405740(0x20);
    *puVar2 = 0x13d;
    *(undefined *)(puVar2 + 2) = 0xfff;
    *(__mode_t *)(puVar2 + 4) = sStack_98.st_mode;
    *(undefined *)(puVar2 + 6) = 0xfff;
    *(undefined *)((long)puVar2 + 0x11) = 0;
  }
  return puVar2;
}


void FUN_00403390(uint param_1,char param_2,uint param_3,char *param_4,uint *param_5)

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
        if (cVar7 != '\x02') goto LAB_004033cf;
        if ((param_1 & 0x49) != 0) goto LAB_0040347c;
LAB_00403414:
        cVar7 = *param_4;
        uVar4 = uVar4 & uVar6;
        if (uVar1 != 0) goto LAB_00403490;
LAB_00403420:
        uVar4 = uVar4 & ~param_3;
        if (cVar7 != '-') {
          if (cVar7 == '=') goto LAB_004034ab;
          goto LAB_00403433;
        }
LAB_004034e0:
        uVar2 = uVar2 | uVar4;
        param_1 = param_1 & ~uVar4;
LAB_0040343d:
        cVar7 = param_4[0x11];
        param_4 = param_4 + 0x10;
        if (cVar7 == '\0') goto LAB_004034c8;
      }
      uVar5 = *(uint *)(param_4 + 0xc) | 0xfffff3ff;
      uVar3 = ~*(uint *)(param_4 + 0xc) & 0xc00;
      uVar8 = uVar3;
      if (cVar7 != '\x02') {
LAB_004033cf:
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
        goto LAB_00403414;
      }
LAB_0040347c:
      cVar7 = *param_4;
      uVar4 = (uVar4 | 0x49) & uVar5;
      uVar6 = uVar5;
      if (uVar1 == 0) goto LAB_00403420;
LAB_00403490:
      uVar4 = uVar4 & uVar1;
      if (cVar7 == '-') goto LAB_004034e0;
      if (cVar7 != '=') {
LAB_00403433:
        if (cVar7 == '+') {
          uVar2 = uVar2 | uVar4;
          param_1 = param_1 | uVar4;
        }
        goto LAB_0040343d;
      }
      uVar3 = uVar3 | ~uVar1;
      uVar6 = ~uVar3;
LAB_004034ab:
      cVar7 = param_4[0x11];
      uVar2 = uVar2 | uVar6 & 0xfff;
      param_1 = param_1 & uVar3 | uVar4;
      param_4 = param_4 + 0x10;
    } while (cVar7 != '\0');
  }
LAB_004034c8:
  if (param_5 != (uint *)0x0) {
    *param_5 = uVar2;
  }
  return;
}


void FUN_00403510(byte *param_1)

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
      pbVar6 = &DAT_0040b678;
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
        pbVar6 = &DAT_0040b680;
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
  DAT_0060f358 = param_1;
  program_invocation_name = param_1;
  return;
}


char * FUN_004035b0(char *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  byte *pbVar3;
  
  pcVar2 = (char *)dcgettext(0,param_1,5);
  if (param_1 == pcVar2) {
    pbVar3 = (byte *)FUN_0040a020();
    if ((*pbVar3 & 0xdf) == 0x55) {
      if (((((pbVar3[1] & 0xdf) != 0x54) || ((pbVar3[2] & 0xdf) != 0x46)) || (pbVar3[3] != 0x2d)) ||
         ((pbVar3[4] != 0x38 || (pbVar3[5] != 0)))) {
LAB_00403688:
        pcVar2 = "\"";
        if (param_2 != 9) {
          pcVar2 = "\'";
        }
        return pcVar2;
      }
      cVar1 = *pcVar2;
      pcVar2 = &DAT_0040b691;
      if (cVar1 != '`') {
        pcVar2 = &DAT_0040b686;
      }
    }
    else {
      if (((((*pbVar3 & 0xdf) != 0x47) || ((pbVar3[1] & 0xdf) != 0x42)) || (pbVar3[2] != 0x31)) ||
         (((pbVar3[3] != 0x38 || (pbVar3[4] != 0x30)) ||
          ((pbVar3[5] != 0x33 || ((pbVar3[6] != 0x30 || (pbVar3[7] != 0)))))))) goto LAB_00403688;
      cVar1 = *pcVar2;
      pcVar2 = &DAT_0040b68d;
      if (cVar1 != '`') {
        pcVar2 = &DAT_0040b68a;
      }
    }
  }
  return pcVar2;
}


ulong FUN_004036b0(undefined *param_1,ulong param_2,char *param_3,ulong param_4,int param_5,
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
LAB_00404301:
    if (param_2 != 0) {
      bVar3 = false;
      local_5b = false;
      bVar2 = true;
      local_70 = 0;
      goto LAB_00403f36;
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
      goto LAB_00404301;
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
      param_8 = (char *)FUN_004035b0(&DAT_0040b695,param_5);
      param_9 = (char *)FUN_004035b0(&DAT_0040c8e7);
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
LAB_00403748:
  uVar22 = 0;
  bVar5 = local_5b;
LAB_00403758:
  bVar23 = param_4 != uVar22;
  if (param_4 == 0xffffffffffffffff) {
    bVar23 = param_3[uVar22] != '\0';
  }
  bVar26 = bVar6;
  if (!bVar23) goto LAB_00403ed8;
  bVar20 = (bool)(param_5 != 2 & bVar6);
  __s1 = (byte *)(param_3 + uVar22);
  uVar16 = uVar15;
  bVar4 = bVar3;
  if (bVar20) {
    if (local_a0 == 0) {
LAB_00403e50:
      uVar19 = (ulong)*__s1;
      switch(uVar19) {
      case 0:
        goto switchD_00403e62_caseD_0;
      default:
        bVar20 = false;
        goto switchD_00403cce_caseD_1;
      case 7:
        bVar17 = 0x61;
        goto LAB_00403b65;
      case 8:
        bVar17 = 0x62;
        break;
      case 9:
switchD_00403e62_caseD_9:
        bVar17 = 0x74;
        break;
      case 10:
switchD_00403e62_caseD_a:
        bVar17 = 0x6e;
        break;
      case 0xb:
switchD_00403e62_caseD_b:
        bVar17 = 0x76;
        goto LAB_00403b65;
      case 0xc:
switchD_00403e62_caseD_c:
        bVar17 = 0x66;
LAB_00403b65:
        if (local_5c) {
          bVar25 = false;
          goto LAB_00403ab8;
        }
LAB_00403b70:
        bVar23 = false;
        goto LAB_0040392b;
      case 0xd:
        bVar20 = false;
switchD_00403848_caseD_d:
        bVar25 = param_5 == 2;
        uVar19 = 0xd;
        bVar13 = 0x72;
        goto LAB_00403a80;
      case 0x20:
        bVar25 = false;
LAB_00403eaa:
        uVar19 = 0x20;
        goto LAB_00403e72;
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
switchD_00403848_caseD_21:
        bVar25 = false;
        goto LAB_00403a8b;
      case 0x23:
      case 0x7e:
        bVar26 = false;
LAB_00403e8a:
        if (uVar22 == 0) {
          bVar25 = false;
          bVar23 = bVar20;
          bVar20 = bVar26;
          goto LAB_00403898;
        }
        bVar23 = false;
        goto LAB_004038af;
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
LAB_00403e72:
        bVar24 = false;
        bVar23 = bVar20;
        bVar20 = bVar25;
        goto LAB_004038b1;
      case 0x27:
        bVar20 = false;
        goto switchD_00403cce_caseD_27;
      case 0x3f:
        bVar20 = false;
        goto switchD_00403cce_caseD_3f;
      case 0x5c:
        bVar20 = false;
        goto switchD_00403848_caseD_5c;
      case 0x7b:
      case 0x7d:
        bVar20 = false;
        goto switchD_00403cce_caseD_7b;
      }
      bVar25 = false;
      bVar23 = false;
      goto joined_r0x00403aa7;
    }
    if ((param_4 == 0xffffffffffffffff) && (1 < local_a0)) {
      param_4 = strlen(param_3);
    }
    if ((param_4 < uVar22 + local_a0) || (iVar7 = memcmp(__s1,local_78,local_a0), iVar7 != 0))
    goto LAB_00403e50;
    if (!local_5c) {
      uVar19 = (ulong)*__s1;
      bVar25 = bVar20;
      switch(uVar19) {
      case 0:
        goto switchD_00403848_caseD_0;
      default:
        goto switchD_00403cce_caseD_1;
      case 7:
        bVar17 = 0x61;
        goto LAB_00403b70;
      case 8:
        bVar25 = false;
        bVar23 = false;
        bVar17 = 0x62;
        break;
      case 9:
        goto switchD_00403e62_caseD_9;
      case 10:
        goto switchD_00403e62_caseD_a;
      case 0xb:
        goto switchD_00403e62_caseD_b;
      case 0xc:
        goto switchD_00403e62_caseD_c;
      case 0xd:
        goto switchD_00403848_caseD_d;
      case 0x20:
        goto LAB_00403eaa;
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
        goto switchD_00403848_caseD_21;
      case 0x23:
      case 0x7e:
        bVar26 = bVar20;
        goto LAB_00403e8a;
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
        goto LAB_00403e72;
      case 0x27:
        goto switchD_00403cce_caseD_27;
      case 0x3f:
        goto switchD_00403cce_caseD_3f;
      case 0x5c:
        goto switchD_00403848_caseD_5c;
      case 0x7b:
      case 0x7d:
        goto switchD_00403cce_caseD_7b;
      }
      goto LAB_004038f2;
    }
    goto LAB_00403aca;
  }
  uVar19 = (ulong)*__s1;
  switch(uVar19) {
  case 0:
    if (bVar6) {
switchD_00403e62_caseD_0:
      if (!local_5c) {
        bVar20 = false;
switchD_00403848_caseD_0:
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
            goto LAB_004039a8;
          }
LAB_00403bea:
          param_1[uVar16] = 0x5c;
          uVar15 = uVar16;
        }
        else if (uVar15 < uVar9) goto LAB_00403bea;
        uVar16 = uVar15 + 1;
        bVar24 = bVar23;
        if (param_5 == 2) {
          bVar17 = 0x30;
          bVar23 = false;
          bVar4 = bVar3;
          goto LAB_004039a8;
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
LAB_00403c29:
        bVar17 = (byte)uVar19;
        bVar23 = false;
        uVar15 = uVar16;
        bVar4 = bVar3;
        if ((bool)(bVar6 ^ 1U | bVar26)) goto LAB_004039a8;
        goto LAB_004038b1;
      }
      bVar26 = param_5 == 2;
      goto LAB_00403abc;
    }
    if ((param_6 & 1) == 0) {
      bVar25 = param_5 == 2;
      uVar19 = 0;
      bVar23 = false;
      bVar20 = false;
      goto LAB_00403898;
    }
    uVar22 = uVar22 + 1;
    goto LAB_00403758;
  default:
switchD_00403cce_caseD_1:
    bVar25 = bVar6;
    if (sVar8 != 1) {
      local_40[0] = (mbstate_t)0x0;
      if (param_4 == 0xffffffffffffffff) {
        param_4 = strlen(param_3);
      }
      uVar21 = 0;
      do {
        uVar1 = uVar22 + uVar21;
        lVar11 = FUN_00408af0(&local_44,param_3 + uVar1,param_4 - uVar1,local_40);
        if (lVar11 == 0) break;
        if (lVar11 == -1) {
          bVar23 = false;
          goto LAB_004045da;
        }
        if (lVar11 == -2) {
          if ((param_4 <= uVar1) || (param_3[uVar1] == '\0')) goto LAB_00404717;
          goto LAB_00404707;
        }
        if (((param_5 == 2) && (local_5c)) && (lVar11 != 1)) {
          pcVar12 = param_3 + uVar1 + 1;
          do {
            if (((byte)(*pcVar12 + 0xa5U) < 0x22) &&
               ((1L << (*pcVar12 + 0xa5U & 0x3f) & 0x20000002bU) != 0)) {
              param_5 = 2;
              goto LAB_00403abc;
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
      goto LAB_004045da;
    }
    ppuVar10 = __ctype_b_loc();
    uVar21 = 1;
    bVar25 = ((*ppuVar10)[uVar19] & 0x4000) == 0;
    bVar23 = !bVar25;
    bVar25 = (bool)(bVar25 & bVar6);
    goto LAB_00403ca4;
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
    goto LAB_00403ce2;
  case 10:
    uVar19 = 10;
    bVar13 = 0x6e;
    goto LAB_00403ce2;
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
LAB_00403ce2:
    bVar25 = param_5 == 2;
    bVar20 = (bool)(local_5c & bVar25);
    if (bVar20) {
LAB_00403cfa:
      param_5 = 2;
      goto LAB_00403abc;
    }
    break;
  case 0x20:
    uVar19 = 0x20;
    goto LAB_00403886;
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
LAB_00403886:
    bVar25 = param_5 == 2;
    if ((local_5c) && (bVar25)) goto LAB_00403cfa;
    goto LAB_00403898;
  case 0x23:
  case 0x7e:
LAB_0040387d:
    bVar25 = param_5 == 2;
    if (uVar22 == 0) goto LAB_00403886;
    goto LAB_00403a8b;
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
    goto switchD_00403cce_caseD_25;
  case 0x27:
switchD_00403cce_caseD_27:
    bVar5 = bVar23;
    if (param_5 != 2) {
      bVar25 = false;
      uVar19 = 0x27;
      goto LAB_00403898;
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
      goto LAB_004039a8;
    }
    goto LAB_00403abc;
  case 0x3f:
switchD_00403cce_caseD_3f:
    if (param_5 == 2) {
      if (!local_5c) {
        bVar17 = 0x3f;
        bVar24 = false;
        bVar23 = false;
        goto LAB_004039a8;
      }
      goto LAB_00403abc;
    }
    if (param_5 != 5) {
      bVar25 = param_5 == 2;
      uVar19 = 0x3f;
      bVar23 = false;
      goto LAB_00403898;
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
        goto LAB_00403c29;
      }
      goto LAB_00403aca;
    }
    bVar25 = false;
    uVar19 = 0x3f;
    bVar23 = false;
    goto LAB_00403898;
  case 0x5c:
    if (param_5 != 2) {
switchD_00403848_caseD_5c:
      uVar19 = 0x5c;
      bVar17 = 0x5c;
      bVar13 = 0x5c;
      bVar25 = (bool)(bVar6 & local_5c & local_a0 != 0);
      if (!bVar25) break;
      uVar22 = uVar22 + 1;
      bVar23 = false;
      goto LAB_004039c4;
    }
    if (local_5c) goto LAB_00403abc;
    uVar22 = uVar22 + 1;
    bVar23 = false;
    bVar17 = 0x5c;
    goto LAB_004039c4;
  case 0x7b:
  case 0x7d:
switchD_00403cce_caseD_7b:
    bVar24 = param_4 != 1;
    if (param_4 == 0xffffffffffffffff) {
      bVar24 = param_3[1] != '\0';
    }
    bVar25 = param_5 == 2;
    if (!bVar24) goto LAB_0040387d;
    goto LAB_00403a8b;
  }
LAB_00403a80:
  if (!bVar6) {
LAB_00403a8b:
    bVar23 = false;
    goto LAB_00403898;
  }
  bVar23 = false;
  bVar17 = bVar13;
  goto joined_r0x00403aa7;
LAB_00403ed8:
  if ((uVar15 == 0) && ((bool)(local_5c & param_5 == 2))) {
    param_5 = 2;
LAB_00403abc:
    if (bVar26) {
      param_5 = 4;
    }
LAB_00403aca:
    uVar9 = FUN_004036b0(param_1,uVar9,param_3,param_4,param_5,param_6 & 0xfffffffd,0,param_8,
                         param_9);
    return uVar9;
  }
  bVar26 = (bool)(param_5 == 2 & (local_5c ^ 1U));
  bVar23 = (bool)(local_5c ^ 1U);
  if ((!bVar26) || (bVar23 = bVar26, !bVar5)) {
LAB_004047ad:
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
    uVar9 = FUN_004036b0(param_1,local_70,param_3,param_4,5,param_6,param_7,param_8,param_9);
    return uVar9;
  }
  local_5b = uVar9 == 0 && local_70 != 0;
  param_2 = local_70;
  bVar23 = bVar5;
  if (uVar9 != 0 || local_70 == 0) goto LAB_004047ad;
LAB_00403f36:
  *param_1 = 0x27;
  param_5 = 2;
  uVar15 = 1;
  local_78 = "\'";
  local_a0 = 1;
  local_5c = false;
  uVar9 = param_2;
  goto LAB_00403748;
  while (__s1[uVar21] != 0) {
LAB_00404707:
    uVar21 = uVar21 + 1;
    if (param_4 <= uVar22 + uVar21) break;
  }
LAB_00404717:
  bVar23 = false;
LAB_004045da:
  if (1 < uVar21) {
LAB_0040419e:
    bVar26 = false;
    uVar21 = uVar21 + uVar22;
    uVar16 = uVar22;
    do {
      bVar17 = (byte)uVar19;
      if (bVar25) {
        bVar26 = param_5 == 2;
        if (local_5c) goto LAB_00403abc;
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
        if (uVar21 <= uVar22) goto LAB_0040393d;
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
        if (uVar21 <= uVar22) goto LAB_004039c4;
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
LAB_00403ca4:
  if (bVar25) {
    bVar23 = false;
    bVar25 = bVar6;
    goto LAB_0040419e;
  }
switchD_00403cce_caseD_25:
  bVar25 = param_5 == 2;
LAB_00403898:
  bVar17 = (byte)uVar19;
  bVar24 = (bool)((bVar6 ^ 1U | bVar25) ^ 1 | local_5c);
  bVar26 = bVar20;
  if (bVar24) {
LAB_004038af:
    bVar24 = false;
    bVar20 = bVar26;
LAB_004038b1:
    bVar17 = (byte)uVar19;
    uVar16 = uVar15;
    bVar4 = bVar3;
    if ((param_7 == 0) || ((*(uint *)(param_7 + (uVar19 >> 5) * 4) >> (bVar17 & 0x1f) & 1) == 0))
    goto LAB_004039a8;
    bVar25 = param_5 == 2;
  }
  else {
LAB_004039a8:
    bVar25 = param_5 == 2;
    uVar15 = uVar16;
    bVar3 = bVar4;
    if (!bVar20) {
      uVar22 = uVar22 + 1;
      bVar3 = (bool)((bVar24 ^ 1U) & bVar4);
LAB_004039c4:
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
      goto LAB_0040393d;
    }
  }
joined_r0x00403aa7:
  if (local_5c) {
LAB_00403ab8:
    bVar26 = (bool)(bVar6 & bVar25);
    goto LAB_00403abc;
  }
LAB_004038f2:
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
LAB_0040392b:
  if (uVar15 < uVar9) {
    param_1[uVar15] = 0x5c;
  }
  uVar15 = uVar15 + 1;
  uVar22 = uVar22 + 1;
  bVar4 = bVar3;
LAB_0040393d:
  bVar3 = bVar4;
  if (uVar15 < uVar9) {
    param_1[uVar15] = bVar17;
  }
  uVar15 = uVar15 + 1;
  if (!bVar23) {
    bVar2 = false;
  }
  goto LAB_00403758;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_004048e0(int param_1,undefined param_2,undefined param_3,undefined *param_4)

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
  puVar8 = (undefined *)PTR_DAT_0060f2b8;
  if (DAT_0060f2d0 <= param_1) {
    if (param_1 == 0x7fffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_00405990();
    }
    if (PTR_DAT_0060f2b8 == &DAT_0060f2c0) {
      puVar8 = (undefined *)FUN_004057a0(0);
      uVar6 = PTR_DAT_0060f2c8._4_4_;
      uVar5 = PTR_DAT_0060f2c8._0_4_;
      uVar3 = _UNK_0060f2c4;
      PTR_DAT_0060f2b8 = (undefined *)puVar8;
      *puVar8 = _DAT_0060f2c0;
      puVar8[1] = uVar3;
      puVar8[2] = uVar5;
      puVar8[3] = uVar6;
    }
    else {
      puVar8 = (undefined *)FUN_004057a0(PTR_DAT_0060f2b8);
      PTR_DAT_0060f2b8 = (undefined *)puVar8;
    }
    memset(puVar8 + (long)DAT_0060f2d0 * 4,0,(long)((param_1 + 1) - DAT_0060f2d0) << 4);
    DAT_0060f2d0 = param_1 + 1;
  }
  uVar2 = param_4[1];
  puVar10 = (ulong *)(puVar8 + (long)param_1 * 4);
  uVar4 = *puVar10;
  __ptr = (undefined *)puVar10[1];
  uVar9 = FUN_004036b0(__ptr,uVar4,param_2,param_3,*param_4,uVar2 | 1,param_4 + 2,
                       *(undefined *)(param_4 + 10),*(undefined *)(param_4 + 0xc));
  if (uVar4 <= uVar9) {
    uVar9 = uVar9 + 1;
    *puVar10 = uVar9;
    if (__ptr != &DAT_0060f360) {
      free(__ptr);
    }
    __ptr = (undefined *)FUN_00405740(uVar9);
    uVar3 = *param_4;
    puVar10[1] = (ulong)__ptr;
    FUN_004036b0(__ptr,uVar9,param_2,param_3,uVar3,uVar2 | 1,param_4 + 2,
                 *(undefined *)(param_4 + 10),*(undefined *)(param_4 + 0xc));
  }
  *piVar7 = iVar1;
  return __ptr;
}


void FUN_00404a80(undefined *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_0060f460;
  }
  FUN_00405940(param_1,0x38);
  *piVar2 = iVar1;
  return;
}


undefined FUN_00404ac0(undefined *param_1)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = (undefined *)&DAT_0060f460;
  }
  return *param_1;
}


void FUN_00404ad0(undefined *param_1,undefined param_2)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = (undefined *)&DAT_0060f460;
  }
  *param_1 = param_2;
  return;
}


uint FUN_00404ae0(undefined *param_1,byte param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_0060f460;
  }
  uVar1 = *(uint *)(param_1 + (ulong)(param_2 >> 5) * 4 + 8);
  uVar2 = uVar1 >> (param_2 & 0x1f);
  *(uint *)(param_1 + (ulong)(param_2 >> 5) * 4 + 8) =
       ((param_3 ^ uVar2) & 1) << (param_2 & 0x1f) ^ uVar1;
  return uVar2 & 1;
}


undefined FUN_00404b20(undefined *param_1,undefined param_2)

{
  undefined uVar1;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_0060f460;
  }
  uVar1 = *(undefined *)(param_1 + 4);
  *(undefined *)(param_1 + 4) = param_2;
  return uVar1;
}


void FUN_00404b40(undefined *param_1,long param_2,long param_3)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = (undefined *)&DAT_0060f460;
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


void FUN_00404b70(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                 undefined *param_5)

{
  int iVar1;
  int *piVar2;
  
  if (param_5 == (undefined *)0x0) {
    param_5 = (undefined *)&DAT_0060f460;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  FUN_004036b0(param_1,param_2,param_3,param_4,*param_5,param_5[1],param_5 + 2,
               *(undefined *)(param_5 + 10),*(undefined *)(param_5 + 0xc));
  *piVar2 = iVar1;
  return;
}


undefined FUN_00404bf0(undefined param_1,undefined param_2,long *param_3,undefined *param_4)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined uVar4;
  uint uVar5;
  
  if (param_4 == (undefined *)0x0) {
    param_4 = (undefined *)&DAT_0060f460;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  uVar5 = (uint)(param_3 == (long *)0x0) | param_4[1];
  lVar3 = FUN_004036b0(0,0,param_1,param_2,*param_4,uVar5,param_4 + 2,*(undefined *)(param_4 + 10),
                       *(undefined *)(param_4 + 0xc));
  uVar4 = FUN_00405740(lVar3 + 1);
  FUN_004036b0(uVar4,lVar3 + 1,param_1,param_2,*param_4,uVar5,param_4 + 2,
               *(undefined *)(param_4 + 10),*(undefined *)(param_4 + 0xc));
  *piVar2 = iVar1;
  if (param_3 != (long *)0x0) {
    *param_3 = lVar3;
  }
  return uVar4;
}


void FUN_00404ce0(undefined param_1,undefined param_2,undefined param_3)

{
  FUN_00404bf0(param_1,param_2,0,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404cf0(void)

{
  void **ppvVar1;
  void *__ptr;
  undefined *__ptr_00;
  void **ppvVar2;
  
  __ptr_00 = PTR_DAT_0060f2b8;
  if (1 < DAT_0060f2d0) {
    ppvVar2 = (void **)(PTR_DAT_0060f2b8 + 0x18);
    ppvVar1 = (void **)(PTR_DAT_0060f2b8 + (ulong)(DAT_0060f2d0 - 2) * 0x10 + 0x28);
    do {
      __ptr = *ppvVar2;
      ppvVar2 = ppvVar2 + 2;
      free(__ptr);
    } while (ppvVar2 != ppvVar1);
  }
  if (*(undefined **)(__ptr_00 + 8) != &DAT_0060f360) {
    free(*(undefined **)(__ptr_00 + 8));
    _DAT_0060f2c0 = 0x100;
    PTR_DAT_0060f2c8 = &DAT_0060f360;
  }
  if (__ptr_00 != &DAT_0060f2c0) {
    free(__ptr_00);
    PTR_DAT_0060f2b8 = &DAT_0060f2c0;
  }
  DAT_0060f2d0 = 1;
  return;
}


void FUN_00404d90(undefined param_1,undefined param_2)

{
  FUN_004048e0(param_1,param_2,0xffffffffffffffff,&DAT_0060f460);
  return;
}


void FUN_00404db0(void)

{
  FUN_004048e0();
  return;
}


void FUN_00404dc0(undefined param_1)

{
  FUN_004048e0(0,param_1,0xffffffffffffffff,&DAT_0060f460);
  return;
}


void FUN_00404de0(undefined param_1,undefined param_2)

{
  FUN_004048e0(0,param_1,param_2,&DAT_0060f460);
  return;
}


void FUN_00404e00(undefined param_1,int param_2,undefined param_3)

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
    FUN_004048e0(param_1,param_3,0xffffffffffffffff,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00404e70(undefined param_1,int param_2,undefined param_3,undefined param_4)

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
    FUN_004048e0(param_1,param_3,param_4,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00404ee0(undefined param_1,undefined param_2)

{
  FUN_00404e00(0,param_1,param_2);
  return;
}


void FUN_00404ef0(undefined param_1,undefined param_2,undefined param_3)

{
  FUN_00404e70(0,param_1,param_2,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404f00(undefined param_1,undefined param_2,byte param_3)

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
  
  local_18 = DAT_0060f490;
  local_48 = _DAT_0060f460;
  uStack_40 = uRam000000000060f468;
  local_38 = _DAT_0060f470;
  uStack_30 = uRam000000000060f478;
  puVar1 = (uint *)((long)&uStack_40 + (ulong)(param_3 >> 5) * 4);
  local_28 = _DAT_0060f480;
  uStack_20 = uRam000000000060f488;
  uVar2 = *puVar1;
  *puVar1 = (~(uVar2 >> (param_3 & 0x1f)) & 1) << (param_3 & 0x1f) ^ uVar2;
  FUN_004048e0(0,param_1,param_2,&local_48);
  return;
}


void FUN_00404f70(undefined param_1,char param_2)

{
  FUN_00404f00(param_1,0xffffffffffffffff,(int)param_2);
  return;
}


void FUN_00404f80(undefined param_1)

{
  FUN_00404f00(param_1,0xffffffffffffffff,0x3a);
  return;
}


void FUN_00404fa0(undefined param_1,undefined param_2)

{
  FUN_00404f00(param_1,param_2,0x3a);
  return;
}


void FUN_00404fb0(undefined param_1,int param_2,undefined param_3)

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
    FUN_004048e0(param_1,param_3,0xffffffffffffffff,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405020(undefined param_1,long param_2,long param_3,undefined param_4,undefined param_5
                 )

{
  undefined local_48;
  undefined uStack_40;
  undefined local_38;
  undefined uStack_30;
  undefined local_28;
  long lStack_20;
  long local_18;
  
  uStack_40 = uRam000000000060f468;
  local_38 = _DAT_0060f470;
  uStack_30 = uRam000000000060f478;
  local_28 = _DAT_0060f480;
  lStack_20 = uRam000000000060f488;
  local_18 = DAT_0060f490;
  local_48 = CONCAT44((int)((ulong)_DAT_0060f460 >> 0x20),10);
  if ((param_2 != 0) && (param_3 != 0)) {
    lStack_20 = param_2;
    local_18 = param_3;
    FUN_004048e0(param_1,param_4,param_5,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00405090(void)

{
  FUN_00405020();
  return;
}


void FUN_004050a0(undefined param_1,undefined param_2,undefined param_3)

{
  FUN_00405020(0,param_1,param_2,param_3,0xffffffffffffffff);
  return;
}


void FUN_004050c0(undefined param_1,undefined param_2,undefined param_3,undefined param_4)

{
  FUN_00405020(0,param_1,param_2,param_3,param_4);
  return;
}


void FUN_004050e0(void)

{
  FUN_004048e0();
  return;
}


void FUN_004050f0(undefined param_1,undefined param_2)

{
  FUN_004048e0(0,param_1,param_2,&DAT_0060f280);
  return;
}


void FUN_00405110(undefined param_1,undefined param_2)

{
  FUN_004048e0(param_1,param_2,0xffffffffffffffff,&DAT_0060f280);
  return;
}


void FUN_00405130(undefined param_1)

{
  FUN_004048e0(0,param_1,0xffffffffffffffff,&DAT_0060f280);
  return;
}


__ino_t * FUN_00405150(__ino_t *param_1)

{
  int iVar1;
  stat local_98;
  
  iVar1 = __lxstat(1,"/",&local_98);
  if (iVar1 == 0) {
    *param_1 = local_98.st_ino;
    param_1[1] = local_98.st_dev;
    return param_1;
  }
  return (undefined *)0x0;
}


undefined
FUN_004051a0(FILE *param_1,long param_2,undefined param_3,undefined param_4,undefined *param_5,
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
  uVar1 = dcgettext(0,&DAT_0040c3eb,5);
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
    goto LAB_0040541c;
  case 5:
    uVar1 = param_5[3];
    uVar4 = param_5[2];
    uVar5 = param_5[1];
    uVar6 = *param_5;
    uVar7 = dcgettext(0,"Written by %s, %s, %s,\n%s, and %s.\n",5);
LAB_0040541c:
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
    goto LAB_004054b9;
  case 7:
    uVar1 = param_5[2];
    uVar4 = param_5[5];
    uVar5 = param_5[4];
    uVar6 = param_5[3];
    local_58 = param_5[1];
    uVar7 = *param_5;
    uVar3 = dcgettext(0,"Written by %s, %s, %s,\n%s, %s, %s, and %s.\n",5);
LAB_004054b9:
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
    goto LAB_0040529a;
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
LAB_0040529a:
  uVar1 = __fprintf_chk(param_1,1,uVar3,uVar7,local_50,local_58,uVar6,uVar5,uVar4,uVar1,local_48);
  return uVar1;
}


void FUN_00405580(void)

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
  FUN_004051a0();
  return;
}


void FUN_004055a0(void)

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
  FUN_004051a0();
  return;
}


void FUN_00405600(void)

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
  FUN_004051a0();
  return;
}


void FUN_004056c0(void)

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


void FUN_00405740(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00405990();
  }
  return;
}


void FUN_00405760(ulong param_1,ulong param_2)

{
  if ((-1 < SUB168(ZEXT816(param_1) * ZEXT816(param_2),0)) &&
     (SUB168(ZEXT816(param_1) * ZEXT816(param_2) >> 0x40,0) == 0)) {
    FUN_00405740();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00405990();
}


void thunk_FUN_00405740(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00405990();
  }
  return;
}


void * FUN_004057a0(void *param_1,size_t param_2)

{
  void *pvVar1;
  
  if ((param_2 == 0) && (param_1 != (void *)0x0)) {
    free(param_1);
    return (void *)0x0;
  }
  pvVar1 = realloc(param_1,param_2);
  if ((pvVar1 == (void *)0x0) && (param_2 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00405990();
  }
  return pvVar1;
}


void FUN_004057e0(undefined param_1,ulong param_2,ulong param_3)

{
  if ((-1 < SUB168(ZEXT816(param_2) * ZEXT816(param_3),0)) &&
     (SUB168(ZEXT816(param_2) * ZEXT816(param_3) >> 0x40,0) == 0)) {
    FUN_004057a0();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00405990();
}


void FUN_00405810(long param_1,ulong *param_2,ulong param_3)

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
    if ((SUB168(ZEXT816(uVar2) * ZEXT816(param_3),0) < 0) || (uVar3 != 0)) goto LAB_0040586b;
  }
  else {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x5555555555555554);
    uVar3 = SUB168(auVar1 % ZEXT816(param_3),0);
    if (SUB168(auVar1 / ZEXT816(param_3),0) <= uVar2) {
LAB_0040586b:
                    /* WARNING: Subroutine does not return */
      FUN_00405990(param_1,param_2,uVar3);
    }
    uVar2 = (uVar2 >> 1) + 1 + uVar2;
  }
  *param_2 = uVar2;
  FUN_004057a0(param_1,uVar2 * param_3);
  return;
}


void FUN_004058a0(long param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (param_1 == 0) {
    if (uVar1 == 0) {
      *param_2 = 0x80;
      FUN_004057a0(0,0x80);
      return;
    }
    if ((long)uVar1 < 0) goto LAB_004058ea;
  }
  else {
    if (0x5555555555555553 < uVar1) {
LAB_004058ea:
                    /* WARNING: Subroutine does not return */
      FUN_00405990();
    }
    uVar1 = (uVar1 >> 1) + 1 + uVar1;
  }
  *param_2 = uVar1;
  FUN_004057a0(param_1,uVar1);
  return;
}


void FUN_004058f0(size_t param_1)

{
  void *__s;
  
  __s = (void *)FUN_00405740();
  memset(__s,0,param_1);
  return;
}


void FUN_00405910(size_t param_1,ulong param_2)

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
  FUN_00405990();
}


void FUN_00405940(void *param_1,size_t param_2)

{
  void *__dest;
  
  __dest = (void *)FUN_00405740(param_2);
  memcpy(__dest,param_1,param_2);
  return;
}


void FUN_00405970(char *param_1)

{
  void *__dest;
  size_t sVar1;
  
  sVar1 = strlen(param_1);
  __dest = (void *)FUN_00405740(sVar1 + 1);
  memcpy(__dest,param_1,sVar1 + 1);
  return;
}


void FUN_00405990(void)

{
  undefined uVar1;
  
  uVar1 = dcgettext(0,"memory exhausted",5);
  error(DAT_0060f260,0,"%s",uVar1);
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_004059d0(undefined param_1,uint param_2)

{
  long lVar1;
  int *piVar2;
  
  lVar1 = fts_open(param_1,param_2 | 0x200);
  if (lVar1 != 0) {
    return;
  }
  piVar2 = __errno_location();
  if (*piVar2 != 0x16) {
                    /* WARNING: Subroutine does not return */
    FUN_00405990();
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("errno != EINVAL","lib/xfts.c",0x29,"xfts_open");
}


bool FUN_00405a20(long param_1,long param_2)

{
  bool bVar1;
  uint uVar2;
  
  bVar1 = true;
  uVar2 = *(uint *)(param_1 + 0x48) & 0x11;
  if ((uVar2 != 0x10) && (bVar1 = false, uVar2 == 0x11)) {
    return *(long *)(param_2 + 0x58) != 0;
  }
  return bVar1;
}


ulong FUN_00405a50(ulong *param_1,ulong *param_2)

{
  if (param_1[1] != param_2[1]) {
    return 0;
  }
  return *param_2 & 0xffffffffffffff00 | (ulong)(*param_1 == *param_2);
}


ulong FUN_00405a70(long param_1,ulong param_2)

{
  return *(ulong *)(param_1 + 8) % param_2;
}


ulong FUN_00405a80(ulong *param_1,ulong param_2)

{
  return *param_1 % param_2;
}


ulong FUN_00405a90(ulong *param_1,ulong *param_2)

{
  return *param_2 & 0xffffffffffffff00 | (ulong)(*param_1 == *param_2);
}


ulong FUN_00405aa0(long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  
  uVar2 = 0xffffffff;
  uVar1 = *(ulong *)(*param_2 + 0x80);
  bVar3 = uVar1 <= *(ulong *)(*param_1 + 0x80);
  if (bVar3) {
    uVar2 = (ulong)(bVar3 && *(ulong *)(*param_1 + 0x80) != uVar1);
  }
  return uVar2;
}


int FUN_00405ad0(long param_1,long param_2,char param_3)

{
  stat *__stat_buf;
  int iVar1;
  uint uVar2;
  int *piVar3;
  ulong uVar4;
  undefined *puVar5;
  byte bVar6;
  
  bVar6 = 0;
  __stat_buf = (stat *)(param_2 + 0x78);
  if ((((*(long *)(param_2 + 0x58) == 0) && ((*(uint *)(param_1 + 0x48) & 1) != 0)) ||
      ((*(uint *)(param_1 + 0x48) & 2) != 0)) || (param_3 != '\0')) {
    iVar1 = __xstat(1,*(char **)(param_2 + 0x30),__stat_buf);
    if (iVar1 == 0) {
LAB_00405b67:
      uVar2 = *(uint *)(param_2 + 0x90) & 0xf000;
      if (uVar2 == 0x4000) {
        uVar4 = *(ulong *)(param_2 + 0x88);
        if ((uVar4 < 2) || (*(long *)(param_2 + 0x58) < 1)) {
          uVar4 = 0xffffffffffffffff;
        }
        else if ((*(byte *)(param_1 + 0x48) & 0x20) == 0) {
          uVar4 = uVar4 - 2;
        }
        *(ulong *)(param_2 + 0x68) = uVar4;
        iVar1 = 1;
        if ((*(char *)(param_2 + 0x108) == '.') &&
           ((*(char *)(param_2 + 0x109) == '\0' ||
            ((*(uint *)(param_2 + 0x108) & 0xffff00) == 0x2e00)))) {
          iVar1 = (-(uint)(*(long *)(param_2 + 0x58) == 0) & 0xfffffffc) + 5;
        }
      }
      else if (uVar2 == 0xa000) {
        iVar1 = 0xc;
      }
      else {
        iVar1 = (uint)(uVar2 == 0x8000) * 5 + 3;
      }
      return iVar1;
    }
    piVar3 = __errno_location();
    iVar1 = *piVar3;
    if (iVar1 == 2) {
      iVar1 = __lxstat(1,*(char **)(param_2 + 0x30),__stat_buf);
      if (iVar1 == 0) {
        *piVar3 = 0;
        return 0xd;
      }
      iVar1 = *piVar3;
    }
  }
  else {
    iVar1 = __fxstatat(1,*(int *)(param_1 + 0x2c),*(char **)(param_2 + 0x30),__stat_buf,0x100);
    if (iVar1 == 0) goto LAB_00405b67;
    piVar3 = __errno_location();
    iVar1 = *piVar3;
  }
  *(int *)(param_2 + 0x40) = iVar1;
  puVar5 = (undefined *)(param_2 + 0x80U & 0xfffffffffffffff8);
  *(undefined *)(param_2 + 0x78) = 0;
  *(undefined *)(param_2 + 0x100) = 0;
  uVar4 = (ulong)(((int)__stat_buf - (int)puVar5) + 0x90U >> 3);
  for (; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar5 = 0;
    puVar5 = puVar5 + (ulong)bVar6 * -2 + 1;
  }
  return 10;
}


long FUN_00405c80(long param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  long *plVar2;
  __compar_fn_t __compar;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  __compar = *(__compar_fn_t *)(param_1 + 0x40);
  plVar3 = *(long **)(param_1 + 0x10);
  if (param_3 <= *(ulong *)(param_1 + 0x38)) {
LAB_00405cd5:
    plVar6 = plVar3;
    if (param_2 != 0) {
      do {
        *plVar6 = param_2;
        param_2 = *(long *)(param_2 + 0x10);
        plVar6 = plVar6 + 1;
      } while (param_2 != 0);
    }
    qsort(plVar3,param_3,8,__compar);
    plVar3 = *(long **)(param_1 + 0x10);
    lVar7 = *plVar3;
    lVar4 = lVar7;
    lVar5 = param_3 - 1;
    plVar6 = plVar3;
    if (lVar5 != 0) {
      while( true ) {
        plVar2 = plVar6 + 1;
        plVar6 = plVar6 + 1;
        *(long *)(lVar7 + 0x10) = *plVar2;
        lVar5 = lVar5 + -1;
        if (lVar5 == 0) break;
        lVar7 = *plVar6;
      }
      lVar7 = plVar3[param_3 - 1];
    }
    *(undefined *)(lVar7 + 0x10) = 0;
    return lVar4;
  }
  uVar1 = param_3 + 0x28;
  *(ulong *)(param_1 + 0x38) = uVar1;
  if (uVar1 < 0x2000000000000000) {
    plVar3 = (long *)realloc(plVar3,uVar1 * 8);
    if (plVar3 != (long *)0x0) {
      *(long **)(param_1 + 0x10) = plVar3;
      goto LAB_00405cd5;
    }
    plVar3 = *(long **)(param_1 + 0x10);
  }
  free(plVar3);
  *(undefined *)(param_1 + 0x10) = 0;
  *(undefined *)(param_1 + 0x38) = 0;
  return param_2;
}


void * FUN_00405d80(long param_1,void *param_2,size_t param_3)

{
  undefined uVar1;
  void *pvVar2;
  
  pvVar2 = malloc(param_3 + 0x110 & 0xfffffffffffffff8);
  if (pvVar2 != (void *)0x0) {
    memcpy((void *)((long)pvVar2 + 0x108),param_2,param_3);
    uVar1 = *(undefined *)(param_1 + 0x20);
    *(undefined *)((long)pvVar2 + param_3 + 0x108) = 0;
    *(size_t *)((long)pvVar2 + 0x60) = param_3;
    *(long *)((long)pvVar2 + 0x50) = param_1;
    *(undefined *)((long)pvVar2 + 0x38) = uVar1;
    *(undefined *)((long)pvVar2 + 0x40) = 0;
    *(undefined *)((long)pvVar2 + 0x18) = 0;
    *(undefined *)((long)pvVar2 + 0x72) = 0x30000;
    *(undefined *)((long)pvVar2 + 0x20) = 0;
    *(undefined *)((long)pvVar2 + 0x28) = 0;
  }
  return pvVar2;
}


void FUN_00405e10(void *param_1)

{
  void *pvVar1;
  
  if (param_1 == (void *)0x0) {
    return;
  }
  do {
    pvVar1 = *(void **)((long)param_1 + 0x10);
    if (*(DIR **)((long)param_1 + 0x18) != (DIR *)0x0) {
      closedir(*(DIR **)((long)param_1 + 0x18));
    }
    free(param_1);
    param_1 = pvVar1;
  } while (pvVar1 != (void *)0x0);
  return;
}


void FUN_00405e60(undefined param_1)

{
  char cVar1;
  int __fd;
  
  while( true ) {
    cVar1 = FUN_00409f80(param_1);
    if (cVar1 != '\0') break;
    __fd = FUN_00409fd0(param_1);
    if (-1 < __fd) {
      close(__fd);
    }
  }
  return;
}


long FUN_00405ea0(long param_1)

{
  undefined uVar1;
  int iVar2;
  long lVar3;
  undefined *__ptr;
  undefined *puVar4;
  long lVar5;
  statfs local_98;
  
  lVar3 = *(long *)(param_1 + 0x50);
  if ((*(byte *)(lVar3 + 0x49) & 2) == 0) {
    return 0;
  }
  lVar5 = *(long *)(lVar3 + 0x50);
  if (lVar5 == 0) {
    lVar5 = FUN_004095a0(0xd,0,FUN_00405a80,FUN_00405a90,free);
    *(long *)(lVar3 + 0x50) = lVar5;
    if (lVar5 == 0) {
      iVar2 = fstatfs(*(int *)(*(long *)(param_1 + 0x50) + 0x2c),&local_98);
      if (iVar2 == 0) {
        return local_98.f_type;
      }
      return 0;
    }
  }
  local_98.f_type = *(long *)(param_1 + 0x78);
  lVar3 = FUN_00409330(lVar5,&local_98);
  if (lVar3 == 0) {
    iVar2 = fstatfs(*(int *)(*(long *)(param_1 + 0x50) + 0x2c),&local_98);
    if (iVar2 != 0) {
      return 0;
    }
    __ptr = (undefined *)malloc(0x10);
    if (__ptr != (undefined *)0x0) {
      uVar1 = *(undefined *)(param_1 + 0x78);
      __ptr[1] = local_98.f_type;
      *__ptr = uVar1;
      puVar4 = (undefined *)FUN_00409d40(lVar5,__ptr);
      if (puVar4 != (undefined *)0x0) {
        if (__ptr == puVar4) {
          return local_98.f_type;
        }
                    /* WARNING: Subroutine does not return */
        abort();
      }
      free(__ptr);
    }
  }
  else {
    local_98.f_type = *(long *)(lVar3 + 8);
  }
  return local_98.f_type;
}


bool FUN_00405fc0(void)

{
  long lVar1;
  
  lVar1 = FUN_00405ea0();
  if (lVar1 != 0x9fa0) {
    if (lVar1 < 0x9fa1) {
      if (lVar1 == 0) {
        return false;
      }
      return lVar1 != 0x6969;
    }
    if (lVar1 != 0x5346414f) {
      if (lVar1 == 0x58465342) {
        return (bool)2;
      }
      return (bool)((lVar1 == 0x52654973) + '\x01');
    }
  }
  return false;
}


void FUN_00406030(long param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  if ((iVar1 == param_2) && (iVar1 != -100)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (param_3 == '\0') {
    if (((*(byte *)(param_1 + 0x48) & 4) == 0) && (-1 < iVar1)) {
      close(iVar1);
      *(int *)(param_1 + 0x2c) = param_2;
      return;
    }
  }
  else {
    iVar1 = FUN_00409f90(param_1 + 0x60);
    if (-1 < iVar1) {
      close(iVar1);
      *(int *)(param_1 + 0x2c) = param_2;
      return;
    }
  }
  *(int *)(param_1 + 0x2c) = param_2;
  return;
}


uint FUN_004060a0(long param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x48) & 4;
  if (uVar2 == 0) {
    if ((*(uint *)(param_1 + 0x48) & 0x200) == 0) {
      iVar1 = fchdir(*(int *)(param_1 + 0x28));
      uVar2 = (uint)(iVar1 != 0);
    }
    else {
      FUN_00406030(param_1,0xffffff9c,1);
    }
  }
  else {
    uVar2 = 0;
  }
  FUN_00405e60(param_1 + 0x60);
  return uVar2;
}


undefined FUN_00406100(void **param_1,size_t *param_2,long param_3)

{
  size_t __size;
  void *pvVar1;
  int *piVar2;
  
  pvVar1 = *param_1;
  __size = *param_2 + 0x100 + param_3;
  if (__size < *param_2) {
    free(pvVar1);
    *param_1 = (void *)0x0;
    piVar2 = __errno_location();
    *piVar2 = 0x24;
    return 0;
  }
  *param_2 = __size;
  pvVar1 = realloc(pvVar1,__size);
  if (pvVar1 != (void *)0x0) {
    *param_1 = pvVar1;
    return 1;
  }
  free(*param_1);
  *param_1 = (void *)0x0;
  return 0;
}


ulong FUN_00406170(uint param_1,void **param_2)

{
  void *pvVar1;
  ulong uVar2;
  
  if ((param_1 & 0x102) == 0) {
    pvVar1 = malloc(0x20);
    *param_2 = pvVar1;
    uVar2 = 0;
    if (pvVar1 != (void *)0x0) {
      FUN_00408bd0();
      return 1;
    }
  }
  else {
    pvVar1 = (void *)FUN_004095a0(0x1f,0,FUN_00405a70,FUN_00405a50,free);
    *param_2 = pvVar1;
    uVar2 = (ulong)pvVar1 & 0xffffffffffffff00 | (ulong)(pvVar1 != (void *)0x0);
  }
  return uVar2;
}


/* WARNING: Removing unreachable block (ram,0x00408c88) */

void FUN_004061d0(undefined param_1,uint param_2,char *param_3)

{
  int iVar1;
  
  if ((param_2 & 0x200) == 0) {
    iVar1 = open(param_3,(param_2 & 0x10) << 0xd | (param_2 & 0x800) << 7 | 0x90900,0);
    FUN_0040a5e0(iVar1);
    return;
  }
  FUN_0040a590(param_1,param_3);
  return;
}


int FUN_00406220(long param_1,long param_2,int param_3,byte *param_4)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  long lVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  stat local_c8;
  
  uVar9 = *(uint *)(param_1 + 0x48);
  bVar10 = false;
  bVar11 = param_4 == (byte *)0x0;
  iVar3 = param_3;
  if (bVar11) {
LAB_004062c0:
    if ((uVar9 & 4) != 0) {
LAB_00406330:
      if (((uVar9 & 0x200) != 0) && (-1 < param_3)) {
        close(param_3);
        return 0;
      }
      return 0;
    }
    if (param_3 < 0) {
      bVar2 = 0;
LAB_0040635e:
      iVar3 = FUN_004061d0(*(undefined *)(param_1 + 0x2c),uVar9,param_4);
      if (iVar3 < 0) {
        return -1;
      }
    }
    else {
      bVar2 = 0;
    }
  }
  else {
    lVar6 = 3;
    pbVar7 = param_4;
    pbVar8 = &DAT_0040c7aa;
    do {
      if (lVar6 == 0) break;
      lVar6 = lVar6 + -1;
      bVar10 = *pbVar7 < *pbVar8;
      bVar11 = *pbVar7 == *pbVar8;
      pbVar7 = pbVar7 + 1;
      pbVar8 = pbVar8 + 1;
    } while (bVar11);
    if ((!bVar10 && !bVar11) != bVar10) goto LAB_004062c0;
    if ((uVar9 & 4) != 0) goto LAB_00406330;
    if (param_3 < 0) {
      if ((uVar9 & 0x200) == 0) {
        bVar2 = 1;
      }
      else {
        bVar2 = FUN_00409f80(param_1 + 0x60);
        if (bVar2 == 0) {
          iVar3 = FUN_00409fd0(param_1 + 0x60);
          if (-1 < iVar3) {
            bVar2 = 1;
            param_3 = iVar3;
            goto LAB_004062d2;
          }
          uVar9 = *(uint *)(param_1 + 0x48);
          bVar2 = 1;
        }
      }
      goto LAB_0040635e;
    }
    bVar2 = 1;
  }
LAB_004062d2:
  iVar4 = __fxstat(1,iVar3,&local_c8);
  if (iVar4 == 0) {
    if ((*(__dev_t *)(param_2 + 0x78) == local_c8.st_dev) &&
       (*(__ino_t *)(param_2 + 0x80) == local_c8.st_ino)) {
      if ((*(byte *)(param_1 + 0x49) & 2) != 0) {
        FUN_00406030(param_1,iVar3,bVar2 ^ 1);
        return 0;
      }
      iVar4 = fchdir(iVar3);
      goto LAB_00406313;
    }
    piVar5 = __errno_location();
    *piVar5 = 2;
  }
  iVar4 = -1;
LAB_00406313:
  if (param_3 < 0) {
    piVar5 = __errno_location();
    iVar1 = *piVar5;
    close(iVar3);
    *piVar5 = iVar1;
  }
  return iVar4;
}


undefined FUN_004063f0(uint param_1,undefined *param_2,undefined *param_3)

{
  undefined uVar1;
  undefined *__ptr;
  undefined *puVar2;
  undefined uVar3;
  
  if ((param_1 & 0x102) == 0) {
    uVar3 = FUN_00408be0(*param_2,param_3 + 0xf);
    if ((char)uVar3 != '\0') {
      *param_3 = param_3;
      *(undefined *)(param_3 + 0xe) = 2;
      return uVar3;
    }
  }
  else {
    __ptr = (undefined *)malloc(0x18);
    if (__ptr == (undefined *)0x0) {
      return 0;
    }
    uVar3 = param_3[0xf];
    uVar1 = *param_2;
    __ptr[2] = param_3;
    *__ptr = uVar3;
    __ptr[1] = param_3[0x10];
    puVar2 = (undefined *)FUN_00409d40(uVar1,__ptr);
    if (__ptr != puVar2) {
      free(__ptr);
      if (puVar2 == (undefined *)0x0) {
        return 0;
      }
      uVar3 = puVar2[2];
      *(undefined *)(param_3 + 0xe) = 2;
      *param_3 = uVar3;
    }
  }
  return 1;
}


void FUN_004064a0(uint param_1,long **param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  void *__ptr;
  undefined local_28;
  undefined local_20;
  
  if ((param_1 & 0x102) == 0) {
    lVar1 = *(long *)(param_3 + 8);
    if ((lVar1 != 0) && (-1 < *(long *)(lVar1 + 0x58))) {
      plVar2 = *param_2;
      if (plVar2[2] == 0) goto FUN_00401c13;
      if ((*plVar2 == *(long *)(param_3 + 0x80)) && (plVar2[1] == *(long *)(param_3 + 0x78))) {
        lVar3 = *(long *)(lVar1 + 0x80);
        plVar2[1] = *(long *)(lVar1 + 0x78);
        *plVar2 = lVar3;
      }
    }
    return;
  }
  local_28 = *(undefined *)(param_3 + 0x78);
  local_20 = *(undefined *)(param_3 + 0x80);
  __ptr = (void *)FUN_00409d80(*param_2,&local_28);
  if (__ptr != (void *)0x0) {
    free(__ptr);
    return;
  }
FUN_00401c13:
                    /* WARNING: Subroutine does not return */
  abort();
}


void * FUN_00406540(long *param_1,int param_2)

{
  DIR *__dirp;
  ulong uVar1;
  long lVar2;
  bool bVar3;
  undefined *puVar4;
  char cVar5;
  undefined uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  dirent *pdVar10;
  size_t sVar11;
  void *pvVar12;
  undefined uVar13;
  void *pvVar14;
  DIR *pDVar15;
  long lVar16;
  long lVar17;
  uint uVar18;
  ushort uVar19;
  ulong uVar20;
  uint uVar21;
  undefined uVar22;
  bool bVar23;
  void *local_90;
  ulong local_88;
  void *local_80;
  ulong local_78;
  ulong local_60;
  undefined *local_58;
  ulong local_50;
  char local_3a;
  
  lVar17 = *param_1;
  __dirp = *(DIR **)(lVar17 + 0x18);
  if (__dirp == (DIR *)0x0) {
    uVar21 = *(uint *)(param_1 + 9);
    uVar18 = uVar21 & 0x10;
    if ((uVar18 != 0) && (uVar18 = 0x20000, (uVar21 & 1) != 0)) {
      uVar18 = (uint)(*(long *)(lVar17 + 0x58) != 0) << 0x11;
    }
    uVar22 = 0xffffff9c;
    if ((uVar21 & 0x204) == 0x200) {
      uVar22 = *(undefined *)((long)param_1 + 0x2c);
    }
    iVar7 = FUN_0040a590(uVar22,*(undefined *)(lVar17 + 0x30),
                         (uVar21 & 0x800) << 7 | uVar18 | 0x90900);
    if (-1 < iVar7) {
      pDVar15 = fdopendir(iVar7);
      if (pDVar15 != (DIR *)0x0) {
        *(DIR **)(lVar17 + 0x18) = pDVar15;
        if (*(short *)(lVar17 + 0x70) == 0xb) {
          uVar6 = FUN_00405ad0(param_1,lVar17,0);
          *(undefined *)(lVar17 + 0x70) = uVar6;
        }
        else if ((*(uint *)(param_1 + 9) & 0x100) != 0) {
          FUN_004064a0(*(uint *)(param_1 + 9),param_1 + 0xb,lVar17);
          FUN_00405ad0(param_1,lVar17,0);
          cVar5 = FUN_004063f0(*(undefined *)(param_1 + 9),param_1 + 0xb,lVar17);
          if (cVar5 == '\0') {
            piVar9 = __errno_location();
            *piVar9 = 0xc;
            return (void *)0x0;
          }
        }
        local_60 = (ulong)(-(uint)(param_1[8] == 0) & 0x186a1) - 1;
        if (param_2 == 2) {
LAB_00406cf0:
          bVar23 = false;
          uVar21 = *(uint *)(param_1 + 9);
          goto LAB_00406594;
        }
        if ((((*(uint *)(param_1 + 9) & 0x38) == 0x18) && (*(long *)(lVar17 + 0x88) == 2)) &&
           (iVar8 = FUN_00405fc0(lVar17), iVar8 != 0)) {
          if (param_2 != 3) goto LAB_00406cf0;
          bVar3 = false;
          bVar23 = true;
        }
        else {
          bVar23 = param_2 == 3;
          bVar3 = true;
        }
        if (((*(byte *)((long)param_1 + 0x49) & 2) == 0) ||
           (iVar7 = FUN_0040a6b0(iVar7,0x406,3), -1 < iVar7)) {
          iVar8 = FUN_00406220(param_1,lVar17,iVar7,0);
          if (iVar8 == 0) goto LAB_0040658b;
          pDVar15 = *(DIR **)(lVar17 + 0x18);
          uVar19 = *(ushort *)(lVar17 + 0x72) | 1;
          if ((bVar23) && (bVar3)) goto LAB_00406a2d;
LAB_00406a42:
          *(ushort *)(lVar17 + 0x72) = uVar19;
          closedir(pDVar15);
          uVar21 = *(uint *)(param_1 + 9);
          *(undefined *)(lVar17 + 0x18) = 0;
          if (((uVar21 & 0x200) != 0) && (-1 < iVar7)) {
            close(iVar7);
            uVar21 = *(uint *)(param_1 + 9);
          }
        }
        else {
          pDVar15 = *(DIR **)(lVar17 + 0x18);
          uVar19 = *(ushort *)(lVar17 + 0x72) | 1;
          if ((bVar23) && (bVar3)) {
LAB_00406a2d:
            piVar9 = __errno_location();
            *(int *)(lVar17 + 0x40) = *piVar9;
            goto LAB_00406a42;
          }
          *(ushort *)(lVar17 + 0x72) = uVar19;
          closedir(pDVar15);
          uVar21 = *(uint *)(param_1 + 9);
        }
        *(undefined *)(lVar17 + 0x18) = 0;
        bVar23 = false;
        goto LAB_00406594;
      }
      piVar9 = __errno_location();
      iVar8 = *piVar9;
      close(iVar7);
      *piVar9 = iVar8;
    }
    *(undefined *)(lVar17 + 0x18) = 0;
joined_r0x00406cbf:
    if (param_2 == 3) {
      *(undefined *)(lVar17 + 0x70) = 4;
      piVar9 = __errno_location();
      *(int *)(lVar17 + 0x40) = *piVar9;
    }
    return (void *)0x0;
  }
  iVar7 = dirfd(__dirp);
  if (iVar7 < 0) {
    closedir(*(DIR **)(lVar17 + 0x18));
    *(undefined *)(lVar17 + 0x18) = 0;
    goto joined_r0x00406cbf;
  }
  if (param_1[8] == 0) {
    local_60 = 100000;
    uVar21 = *(uint *)(param_1 + 9);
    bVar23 = true;
  }
  else {
    local_60 = 0xffffffffffffffff;
LAB_0040658b:
    bVar23 = true;
    uVar21 = *(uint *)(param_1 + 9);
  }
LAB_00406594:
  uVar1 = *(ulong *)(lVar17 + 0x48);
  local_88 = uVar1;
  local_50 = uVar1 - 1;
  if (*(char *)(*(long *)(lVar17 + 0x38) + -1 + uVar1) != '/') {
    local_88 = uVar1 + 1;
    local_50 = uVar1;
  }
  local_58 = (undefined *)0x0;
  if ((uVar21 & 4) != 0) {
    local_58 = (undefined *)(local_50 + param_1[4]) + 1;
    *(undefined *)(local_50 + param_1[4]) = 0x2f;
  }
  local_78 = param_1[6] - local_88;
  local_3a = '\0';
  lVar16 = *(long *)(lVar17 + 0x58);
  local_90 = (void *)0x0;
  local_80 = (void *)0x0;
  uVar1 = 0;
  do {
    do {
      uVar20 = uVar1;
      pDVar15 = *(DIR **)(lVar17 + 0x18);
      if (pDVar15 == (DIR *)0x0) goto joined_r0x00406b6b;
      piVar9 = __errno_location();
      *piVar9 = 0;
      pdVar10 = readdir(pDVar15);
      if (pdVar10 == (dirent *)0x0) {
        if (*piVar9 != 0) {
          *(int *)(lVar17 + 0x40) = *piVar9;
          *(ushort *)(lVar17 + 0x70) = (-(ushort)(((ulong)__dirp | uVar20) == 0) & 0xfffd) + 7;
        }
        if (*(DIR **)(lVar17 + 0x18) != (DIR *)0x0) {
          closedir(*(DIR **)(lVar17 + 0x18));
          *(undefined *)(lVar17 + 0x18) = 0;
        }
        goto joined_r0x00406b6b;
      }
    } while ((((*(byte *)(param_1 + 9) & 0x20) == 0) && (pdVar10->d_name[0] == '.')) &&
            ((uVar1 = uVar20, pdVar10->d_name[1] == '\0' ||
             (*(short *)(pdVar10->d_name + 1) == 0x2e))));
    sVar11 = strlen(pdVar10->d_name);
    pvVar12 = (void *)FUN_00405d80(param_1,pdVar10->d_name,sVar11);
    if (pvVar12 == (void *)0x0) {
LAB_00406aa0:
      iVar7 = *piVar9;
      free(pvVar12);
      FUN_00405e10(local_80);
      closedir(*(DIR **)(lVar17 + 0x18));
      *(undefined *)(lVar17 + 0x18) = 0;
      *(undefined *)(lVar17 + 0x70) = 7;
      *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) | 0x4000;
      *piVar9 = iVar7;
      return (void *)0x0;
    }
    if (local_78 <= sVar11) {
      lVar2 = param_1[4];
      cVar5 = FUN_00406100(param_1 + 4,param_1 + 6,local_50 + 2 + sVar11);
      if (cVar5 == '\0') goto LAB_00406aa0;
      puVar4 = local_58;
      if ((param_1[4] != lVar2) &&
         (local_3a = cVar5, puVar4 = (undefined *)(param_1[4] + local_88),
         (*(byte *)(param_1 + 9) & 4) == 0)) {
        puVar4 = local_58;
      }
      local_58 = puVar4;
      local_78 = param_1[6] - local_88;
    }
    if (CARRY8(sVar11,local_88)) {
      free(pvVar12);
      FUN_00405e10(local_80);
      closedir(*(DIR **)(lVar17 + 0x18));
      *(undefined *)(lVar17 + 0x18) = 0;
      *(undefined *)(lVar17 + 0x70) = 7;
      *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) | 0x4000;
      *piVar9 = 0x24;
      return (void *)0x0;
    }
    *(long *)((long)pvVar12 + 0x58) = lVar16 + 1;
    lVar2 = *param_1;
    *(size_t *)((long)pvVar12 + 0x48) = sVar11 + local_88;
    *(long *)((long)pvVar12 + 8) = lVar2;
    *(__ino_t *)((long)pvVar12 + 0x80) = pdVar10->d_ino;
    uVar21 = *(uint *)(param_1 + 9);
    if ((uVar21 & 4) == 0) {
      *(void **)((long)pvVar12 + 0x30) = (void *)((long)pvVar12 + 0x108);
    }
    else {
      *(undefined *)((long)pvVar12 + 0x30) = *(undefined *)((long)pvVar12 + 0x38);
      memmove(local_58,(void *)((long)pvVar12 + 0x108),*(long *)((long)pvVar12 + 0x60) + 1);
      uVar21 = *(uint *)(param_1 + 9);
    }
    if ((param_1[8] == 0) || ((uVar21 & 0x400) != 0)) {
      uVar18 = pdVar10->d_type - 1;
      if (((uVar21 & 0x18) == 0x18) && ((pdVar10->d_type & 0xfb) != 0)) {
        *(undefined *)((long)pvVar12 + 0x70) = 0xb;
        if (uVar18 < 0xc) {
          *(undefined *)((long)pvVar12 + 0x90) = *(undefined *)(&DAT_0040c7c0 + (ulong)uVar18 * 4)
          ;
          uVar13 = 1;
        }
        else {
          *(undefined *)((long)pvVar12 + 0x90) = 0;
          uVar13 = 1;
        }
      }
      else {
        *(undefined *)((long)pvVar12 + 0x70) = 0xb;
        if (uVar18 < 0xc) {
          *(undefined *)((long)pvVar12 + 0x90) = *(undefined *)(&DAT_0040c7c0 + (ulong)uVar18 * 4)
          ;
          uVar13 = 2;
        }
        else {
          *(undefined *)((long)pvVar12 + 0x90) = 0;
          uVar13 = 2;
        }
      }
      *(undefined *)((long)pvVar12 + 0xa8) = uVar13;
    }
    else {
      uVar6 = FUN_00405ad0(param_1,pvVar12,0);
      *(undefined *)((long)pvVar12 + 0x70) = uVar6;
    }
    *(undefined *)((long)pvVar12 + 0x10) = 0;
    pvVar14 = pvVar12;
    if (local_80 != (void *)0x0) {
      *(void **)((long)local_90 + 0x10) = pvVar12;
      pvVar14 = local_80;
    }
    local_80 = pvVar14;
    uVar1 = uVar20 + 1;
    local_90 = pvVar12;
  } while (uVar20 + 1 < local_60);
  uVar20 = uVar20 + 1;
joined_r0x00406b6b:
  if (local_3a != '\0') {
    lVar2 = param_1[4];
    for (lVar16 = param_1[1]; pvVar12 = local_80, lVar16 != 0; lVar16 = *(long *)(lVar16 + 0x10)) {
      if (*(long *)(lVar16 + 0x30) != lVar16 + 0x108) {
        *(long *)(lVar16 + 0x30) = (*(long *)(lVar16 + 0x30) - *(long *)(lVar16 + 0x38)) + lVar2;
      }
      *(long *)(lVar16 + 0x38) = lVar2;
    }
    while (pvVar14 = pvVar12, -1 < *(long *)((long)pvVar14 + 0x58)) {
      if (*(long *)((long)pvVar14 + 0x30) != (long)pvVar14 + 0x108) {
        *(long *)((long)pvVar14 + 0x30) =
             (*(long *)((long)pvVar14 + 0x30) - *(long *)((long)pvVar14 + 0x38)) + lVar2;
      }
      *(long *)((long)pvVar14 + 0x38) = lVar2;
      pvVar12 = *(void **)((long)pvVar14 + 0x10);
      if (*(void **)((long)pvVar14 + 0x10) == (void *)0x0) {
        pvVar12 = *(void **)((long)pvVar14 + 8);
      }
    }
  }
  if ((*(byte *)(param_1 + 9) & 4) != 0) {
    if ((param_1[6] == local_88) || (uVar20 == 0)) {
      local_58 = local_58 + -1;
    }
    *local_58 = 0;
  }
  if ((__dirp == (DIR *)0x0) && (bVar23)) {
    if ((param_2 == 1) || (uVar20 == 0)) {
      if (*(long *)(lVar17 + 0x58) == 0) {
        iVar7 = FUN_004060a0(param_1);
      }
      else {
        iVar7 = FUN_00406220(param_1,*(undefined *)(lVar17 + 8),0xffffffff,&DAT_0040c7aa);
      }
      if (iVar7 != 0) {
        *(undefined *)(lVar17 + 0x70) = 7;
        *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) | 0x4000;
        FUN_00405e10(local_80);
        return (void *)0x0;
      }
      goto LAB_00406c08;
    }
  }
  else {
LAB_00406c08:
    if (uVar20 == 0) {
      if (((param_2 == 3) && (*(short *)(lVar17 + 0x70) != 4)) && (*(short *)(lVar17 + 0x70) != 7))
      {
        *(undefined *)(lVar17 + 0x70) = 6;
      }
      FUN_00405e10(local_80);
      return (void *)0x0;
    }
  }
  lVar16 = param_1[8];
  if (10000 < uVar20) {
    if (lVar16 != 0) goto LAB_00406bc7;
    lVar17 = FUN_00405ea0(lVar17);
    if ((lVar17 != 0x6969) && (lVar17 != 0x1021994)) {
      param_1[8] = (long)FUN_00405aa0;
      pvVar12 = (void *)FUN_00405c80(param_1,local_80,uVar20);
      param_1[8] = 0;
      return pvVar12;
    }
    lVar16 = param_1[8];
  }
  if (lVar16 == 0) {
    return local_80;
  }
  if (uVar20 == 1) {
    return local_80;
  }
LAB_00406bc7:
  pvVar12 = (void *)FUN_00405c80(param_1,local_80,uVar20);
  return pvVar12;
}


long * fts_open(char **param_1,uint param_2,long param_3)

{
  undefined uVar1;
  char cVar2;
  undefined uVar3;
  int iVar4;
  long *__ptr;
  size_t sVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  ulong uVar10;
  char *pcVar11;
  char **ppcVar12;
  void *local_50;
  byte local_42;
  long local_40;
  
  if ((((param_2 & 0xffffe000) != 0) || ((param_2 & 0x204) == 0x204)) || ((param_2 & 0x12) == 0)) {
    piVar9 = __errno_location();
    *piVar9 = 0x16;
    return (long *)0x0;
  }
  __ptr = (long *)calloc(0x80,1);
  if (__ptr == (long *)0x0) {
    return (long *)0x0;
  }
  __ptr[8] = param_3;
  if ((param_2 & 2) == 0) {
    *(uint *)(__ptr + 9) = param_2;
  }
  else {
    *(uint *)(__ptr + 9) = param_2 & 0xfffffdff | 4;
  }
  pcVar11 = *param_1;
  *(undefined *)((long)__ptr + 0x2c) = 0xffffff9c;
  if (pcVar11 == (char *)0x0) {
    uVar10 = 0x1000;
  }
  else {
    uVar10 = 0;
    ppcVar12 = param_1;
    do {
      sVar5 = strlen(pcVar11);
      if (uVar10 < sVar5) {
        uVar10 = sVar5;
      }
      ppcVar12 = ppcVar12 + 1;
      pcVar11 = *ppcVar12;
    } while (pcVar11 != (char *)0x0);
    uVar10 = uVar10 + 1;
    if (uVar10 < 0x1000) {
      uVar10 = 0x1000;
    }
  }
  local_42 = FUN_00406100(__ptr + 4,__ptr + 6,uVar10);
  if (local_42 == 0) goto LAB_004071cb;
  pcVar11 = *param_1;
  if (pcVar11 == (char *)0x0) {
    local_50 = (void *)0x0;
    if (param_3 != 0) {
LAB_00407013:
      local_42 = (byte)(*(uint *)(__ptr + 9) >> 10) & 1;
      goto LAB_00407020;
    }
LAB_00407202:
    lVar7 = 0;
LAB_0040713c:
    lVar8 = FUN_00405d80(__ptr,"",0);
    *__ptr = lVar8;
    if (lVar8 != 0) {
      *(long *)(lVar8 + 0x10) = lVar7;
      uVar1 = *(undefined *)(__ptr + 9);
      *(undefined *)(lVar8 + 0x70) = 9;
      cVar2 = FUN_00406170(uVar1,__ptr + 0xb);
      if (cVar2 != '\0') {
        if ((*(uint *)(__ptr + 9) & 0x204) == 0) {
          iVar4 = FUN_004061d0(*(undefined *)((long)__ptr + 0x2c),*(uint *)(__ptr + 9),
                               &DAT_0040c7ab);
          *(int *)(__ptr + 5) = iVar4;
          if (iVar4 < 0) {
            *(uint *)(__ptr + 9) = *(uint *)(__ptr + 9) | 4;
          }
        }
        FUN_00409f60(__ptr + 0xc,0xffffffff);
        return __ptr;
      }
    }
LAB_004071b0:
    FUN_00405e10(lVar7);
    free(local_50);
  }
  else {
    local_50 = (void *)FUN_00405d80(__ptr,"",0);
    if (local_50 != (void *)0x0) {
      pcVar11 = *param_1;
      *(undefined *)((long)local_50 + 0x58) = 0xffffffffffffffff;
      *(undefined *)((long)local_50 + 0x68) = 0xffffffffffffffff;
      if (param_3 != 0) goto LAB_00407013;
LAB_00407020:
      if (pcVar11 == (char *)0x0) goto LAB_00407202;
      local_40 = 0;
      uVar10 = 0;
      lVar8 = 0;
      do {
        sVar5 = strlen(pcVar11);
        if (((2 < sVar5) && ((((byte)(param_2 >> 0xc) ^ 1) & 1) != 0)) &&
           (pcVar11[sVar5 - 1] == '/')) {
          do {
            if (pcVar11[sVar5 - 2] != '/') break;
            sVar5 = sVar5 - 1;
          } while (sVar5 != 1);
        }
        lVar6 = FUN_00405d80(__ptr,pcVar11,sVar5);
        lVar7 = lVar8;
        if (lVar6 == 0) goto LAB_004071b0;
        *(undefined *)(lVar6 + 0x58) = 0;
        *(void **)(lVar6 + 8) = local_50;
        *(long *)(lVar6 + 0x30) = lVar6 + 0x108;
        lVar7 = lVar6;
        if ((lVar8 == 0) || (local_42 == 0)) {
          uVar3 = FUN_00405ad0(__ptr,lVar6,0);
          *(undefined *)(lVar6 + 0x70) = uVar3;
          if (param_3 != 0) goto LAB_004070b8;
          *(undefined *)(lVar6 + 0x10) = 0;
          if (lVar8 != 0) goto LAB_00407250;
        }
        else {
          *(undefined *)(lVar6 + 0xa8) = 2;
          *(undefined *)(lVar6 + 0x70) = 0xb;
          if (param_3 == 0) {
            *(undefined *)(lVar6 + 0x10) = 0;
LAB_00407250:
            *(long *)(local_40 + 0x10) = lVar6;
            lVar7 = lVar8;
          }
          else {
LAB_004070b8:
            *(long *)(lVar6 + 0x10) = lVar8;
            lVar6 = local_40;
          }
        }
        local_40 = lVar6;
        uVar10 = uVar10 + 1;
        pcVar11 = param_1[uVar10];
        lVar8 = lVar7;
      } while (pcVar11 != (char *)0x0);
      if ((param_3 != 0) && (1 < uVar10)) {
        lVar7 = FUN_00405c80(__ptr,lVar7,uVar10);
      }
      goto LAB_0040713c;
    }
  }
  free((void *)__ptr[4]);
LAB_004071cb:
  free(__ptr);
  return (long *)0x0;
}


int fts_close(void **param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  void *__ptr;
  void *__ptr_00;
  
  __ptr = *param_1;
  if (__ptr != (void *)0x0) {
    lVar1 = *(long *)((long)__ptr + 0x58);
    while (__ptr_00 = __ptr, -1 < lVar1) {
      while (__ptr = *(void **)((long)__ptr_00 + 0x10), __ptr != (void *)0x0) {
        free(__ptr_00);
        __ptr_00 = __ptr;
        if (*(long *)((long)__ptr + 0x58) < 0) goto LAB_004072eb;
      }
      __ptr = *(void **)((long)__ptr_00 + 8);
      free(__ptr_00);
      lVar1 = *(long *)((long)__ptr + 0x58);
    }
LAB_004072eb:
    free(__ptr);
  }
  if (param_1[1] != (void *)0x0) {
    FUN_00405e10();
  }
  free(param_1[2]);
  free(param_1[4]);
  if ((*(uint *)(param_1 + 9) & 0x200) == 0) {
    if ((*(uint *)(param_1 + 9) & 4) == 0) {
      iVar2 = fchdir(*(int *)(param_1 + 5));
      if (iVar2 == 0) {
        iVar2 = close(*(int *)(param_1 + 5));
        if (iVar2 == 0) goto LAB_00407322;
        piVar4 = __errno_location();
      }
      else {
        piVar4 = __errno_location();
        iVar2 = *piVar4;
        iVar3 = close(*(int *)(param_1 + 5));
        if ((iVar3 == 0) || (iVar2 != 0)) goto LAB_00407324;
      }
      iVar2 = *piVar4;
      goto LAB_00407324;
    }
  }
  else if ((-1 < *(int *)((long)param_1 + 0x2c)) &&
          (iVar2 = close(*(int *)((long)param_1 + 0x2c)), iVar2 != 0)) {
    piVar4 = __errno_location();
    iVar2 = *piVar4;
    goto LAB_00407324;
  }
LAB_00407322:
  iVar2 = 0;
LAB_00407324:
  FUN_00405e60(param_1 + 0xc);
  if (param_1[10] != (void *)0x0) {
    FUN_004097e0();
  }
  if ((*(uint *)(param_1 + 9) & 0x102) == 0) {
    free(param_1[0xb]);
  }
  else if (param_1[0xb] != (void *)0x0) {
    FUN_004097e0();
  }
  free(param_1);
  if (iVar2 != 0) {
    piVar4 = __errno_location();
    *piVar4 = iVar2;
    iVar2 = -1;
  }
  return iVar2;
}


void * fts_read(void **param_1)

{
  ulong uVar1;
  char *__s;
  short sVar2;
  undefined uVar3;
  long lVar4;
  char cVar5;
  undefined uVar6;
  short sVar7;
  int iVar8;
  int *piVar9;
  char *pcVar10;
  size_t sVar11;
  long lVar12;
  void *pvVar13;
  void *pvVar14;
  uint uVar15;
  
  pvVar14 = *param_1;
  if (pvVar14 == (void *)0x0) {
    return (void *)0x0;
  }
  uVar15 = *(uint *)(param_1 + 9);
  if ((uVar15 & 0x4000) != 0) {
    return (void *)0x0;
  }
  sVar7 = *(short *)((long)pvVar14 + 0x74);
  *(undefined *)((long)pvVar14 + 0x74) = 3;
  if (sVar7 == 1) {
    uVar6 = FUN_00405ad0(param_1,pvVar14,0);
    *(undefined *)((long)pvVar14 + 0x70) = uVar6;
    return pvVar14;
  }
  sVar2 = *(short *)((long)pvVar14 + 0x70);
  pvVar13 = pvVar14;
  if (sVar7 == 2) {
    if (1 < (ushort)(sVar2 - 0xcU)) {
      if (sVar2 == 1) goto LAB_00407577;
      goto LAB_004074a0;
    }
    sVar7 = FUN_00405ad0(param_1,pvVar14,1);
    *(short *)((long)pvVar14 + 0x70) = sVar7;
    if (sVar7 != 1) {
      *param_1 = pvVar14;
      if (sVar7 != 0xb) {
        return pvVar14;
      }
      goto LAB_004077e0;
    }
    if ((*(uint *)(param_1 + 9) & 4) == 0) {
      iVar8 = FUN_004061d0(*(undefined *)((long)param_1 + 0x2c),*(uint *)(param_1 + 9),
                           &DAT_0040c7ab);
      *(int *)((long)pvVar14 + 0x44) = iVar8;
      if (iVar8 < 0) {
        piVar9 = __errno_location();
        iVar8 = *piVar9;
        *(undefined *)((long)pvVar14 + 0x70) = 7;
        *(int *)((long)pvVar14 + 0x40) = iVar8;
        *param_1 = pvVar14;
        return pvVar14;
      }
      *(ushort *)((long)pvVar14 + 0x72) = *(ushort *)((long)pvVar14 + 0x72) | 2;
      sVar7 = *(short *)((long)pvVar14 + 0x70);
      goto LAB_00407757;
    }
    *param_1 = pvVar14;
LAB_0040776e:
    if (*(long *)((long)pvVar14 + 0x58) != 0) goto LAB_0040777e;
  }
  else {
    if (sVar2 == 1) {
      if (sVar7 == 4) goto LAB_00407612;
LAB_00407577:
      if (((uVar15 & 0x40) != 0) && (*(void **)((long)pvVar14 + 0x78) != param_1[3])) {
LAB_00407612:
        if ((*(byte *)((long)pvVar14 + 0x72) & 2) != 0) {
          close(*(int *)((long)pvVar14 + 0x44));
        }
        if (param_1[1] != (void *)0x0) {
          FUN_00405e10();
          param_1[1] = (void *)0x0;
        }
        uVar3 = *(undefined *)(param_1 + 9);
        *(undefined *)((long)pvVar14 + 0x70) = 6;
        FUN_004064a0(uVar3,param_1 + 0xb,pvVar14);
        return pvVar14;
      }
      if (param_1[1] == (void *)0x0) {
LAB_00407839:
        pvVar13 = (void *)FUN_00406540(param_1,3);
        param_1[1] = pvVar13;
        if (pvVar13 == (void *)0x0) {
          uVar15 = *(uint *)(param_1 + 9);
          if ((uVar15 & 0x4000) != 0) {
            return (void *)0x0;
          }
          if ((*(int *)((long)pvVar14 + 0x40) != 0) && (*(short *)((long)pvVar14 + 0x70) != 4)) {
            *(undefined *)((long)pvVar14 + 0x70) = 7;
          }
          FUN_004064a0(uVar15,param_1 + 0xb,pvVar14);
          return pvVar14;
        }
      }
      else {
        if ((uVar15 & 0x2000) != 0) {
          *(uint *)(param_1 + 9) = uVar15 & 0xffffdfff;
          FUN_00405e10();
          param_1[1] = (void *)0x0;
          goto LAB_00407839;
        }
        iVar8 = FUN_00406220(param_1,pvVar14,0xffffffff,*(undefined *)((long)pvVar14 + 0x30));
        if (iVar8 == 0) {
          pvVar13 = param_1[1];
        }
        else {
          piVar9 = __errno_location();
          pvVar13 = param_1[1];
          iVar8 = *piVar9;
          *(ushort *)((long)pvVar14 + 0x72) = *(ushort *)((long)pvVar14 + 0x72) | 1;
          *(int *)((long)pvVar14 + 0x40) = iVar8;
          for (pvVar14 = pvVar13; pvVar14 != (void *)0x0; pvVar14 = *(void **)((long)pvVar14 + 0x10)
              ) {
            *(undefined *)((long)pvVar14 + 0x30) =
                 *(undefined *)(*(long *)((long)pvVar14 + 8) + 0x30);
          }
        }
      }
      param_1[1] = (void *)0x0;
      pvVar14 = pvVar13;
    }
    else {
LAB_004074a0:
      do {
        pvVar14 = *(void **)((long)pvVar13 + 0x10);
        if (pvVar14 == (void *)0x0) {
          pvVar14 = *(void **)((long)pvVar13 + 8);
          if (*(long *)((long)pvVar14 + 0x18) != 0) {
            lVar4 = *(long *)((long)pvVar14 + 0x48);
            *param_1 = pvVar14;
            *(undefined *)((long)param_1[4] + lVar4) = 0;
            pvVar14 = (void *)FUN_00406540(param_1,3);
            if (pvVar14 != (void *)0x0) {
              free(pvVar13);
              goto LAB_0040771a;
            }
            if ((*(byte *)((long)param_1 + 0x49) & 0x40) != 0) {
              return (void *)0x0;
            }
            pvVar14 = *(void **)((long)pvVar13 + 8);
          }
          *param_1 = pvVar14;
          free(pvVar13);
          if (*(long *)((long)pvVar14 + 0x58) == -1) {
            free(pvVar14);
            piVar9 = __errno_location();
            *piVar9 = 0;
            *param_1 = (void *)0x0;
            return (void *)0x0;
          }
          if (*(short *)((long)pvVar14 + 0x70) != 0xb) {
            *(undefined *)((long)param_1[4] + *(long *)((long)pvVar14 + 0x48)) = 0;
            if (*(long *)((long)pvVar14 + 0x58) == 0) {
              iVar8 = FUN_004060a0(param_1);
              if (iVar8 == 0) goto LAB_00407506;
LAB_0040791f:
              piVar9 = __errno_location();
              *(int *)((long)pvVar14 + 0x40) = *piVar9;
              *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) | 0x4000;
              if (*(short *)((long)pvVar14 + 0x70) == 2) {
                return (void *)0x0;
              }
              uVar15 = *(uint *)(param_1 + 9);
            }
            else {
              if ((*(ushort *)((long)pvVar14 + 0x72) & 2) == 0) {
                if (((*(ushort *)((long)pvVar14 + 0x72) & 1) == 0) &&
                   (iVar8 = FUN_00406220(param_1,*(undefined *)((long)pvVar14 + 8),0xffffffff,
                                         &DAT_0040c7aa), iVar8 != 0)) goto LAB_0040791f;
              }
              else {
                iVar8 = *(int *)((long)pvVar14 + 0x44);
                if ((*(uint *)(param_1 + 9) & 4) == 0) {
                  if ((*(uint *)(param_1 + 9) & 0x200) == 0) {
                    iVar8 = fchdir(iVar8);
                    if (iVar8 != 0) {
                      piVar9 = __errno_location();
                      *(int *)((long)pvVar14 + 0x40) = *piVar9;
                      *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) | 0x4000;
                    }
                    iVar8 = *(int *)((long)pvVar14 + 0x44);
                  }
                  else {
                    FUN_00406030(param_1,iVar8,1);
                    iVar8 = *(int *)((long)pvVar14 + 0x44);
                  }
                }
                close(iVar8);
              }
LAB_00407506:
              uVar15 = *(uint *)(param_1 + 9);
              if (*(short *)((long)pvVar14 + 0x70) == 2) goto LAB_00407538;
            }
            if (*(int *)((long)pvVar14 + 0x40) == 0) {
              *(undefined *)((long)pvVar14 + 0x70) = 6;
              FUN_004064a0(uVar15,param_1 + 0xb,pvVar14);
              uVar15 = *(uint *)(param_1 + 9);
            }
            else {
              *(undefined *)((long)pvVar14 + 0x70) = 7;
            }
LAB_00407538:
            if ((uVar15 & 0x4000) != 0) {
              return (void *)0x0;
            }
            return pvVar14;
          }
          goto FUN_00401c18;
        }
        *param_1 = pvVar14;
        free(pvVar13);
        if (*(long *)((long)pvVar14 + 0x58) == 0) {
          iVar8 = FUN_004060a0(param_1);
          if (iVar8 != 0) {
            *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) | 0x4000;
            return (void *)0x0;
          }
          if ((*(uint *)(param_1 + 9) & 0x102) == 0) {
            free(param_1[0xb]);
          }
          else if (param_1[0xb] != (void *)0x0) {
            FUN_004097e0();
          }
          __s = (char *)((long)pvVar14 + 0x108);
          pvVar13 = param_1[4];
          *(long *)((long)pvVar14 + 0x48) = *(long *)((long)pvVar14 + 0x60);
          memmove(pvVar13,__s,*(long *)((long)pvVar14 + 0x60) + 1);
          pcVar10 = strrchr(__s,0x2f);
          if ((pcVar10 != (char *)0x0) &&
             ((__s != pcVar10 || (*(char *)((long)pvVar14 + 0x109) != '\0')))) {
            sVar11 = strlen(pcVar10 + 1);
            memmove(__s,pcVar10 + 1,sVar11 + 1);
            *(size_t *)((long)pvVar14 + 0x60) = sVar11;
          }
          pvVar13 = param_1[4];
          uVar3 = *(undefined *)(param_1 + 9);
          *(void **)((long)pvVar14 + 0x38) = pvVar13;
          *(void **)((long)pvVar14 + 0x30) = pvVar13;
          FUN_00406170(uVar3,param_1 + 0xb);
          sVar7 = *(short *)((long)pvVar14 + 0x70);
          goto LAB_00407757;
        }
        pvVar13 = pvVar14;
      } while (*(short *)((long)pvVar14 + 0x74) == 4);
      if (*(short *)((long)pvVar14 + 0x74) == 2) {
        sVar7 = FUN_00405ad0(param_1,pvVar14,1);
        *(short *)((long)pvVar14 + 0x70) = sVar7;
        if ((sVar7 == 1) && ((*(uint *)(param_1 + 9) & 4) == 0)) {
          iVar8 = FUN_004061d0(*(undefined *)((long)param_1 + 0x2c),*(uint *)(param_1 + 9),
                               &DAT_0040c7ab);
          *(int *)((long)pvVar14 + 0x44) = iVar8;
          if (iVar8 < 0) {
            piVar9 = __errno_location();
            iVar8 = *piVar9;
            *(undefined *)((long)pvVar14 + 0x70) = 7;
            *(int *)((long)pvVar14 + 0x40) = iVar8;
          }
          else {
            *(ushort *)((long)pvVar14 + 0x72) = *(ushort *)((long)pvVar14 + 0x72) | 2;
          }
        }
        *(undefined *)((long)pvVar14 + 0x74) = 3;
      }
    }
LAB_0040771a:
    lVar4 = *(long *)(*(long *)((long)pvVar14 + 8) + 0x48);
    lVar12 = lVar4 + -1;
    if (*(char *)(*(long *)(*(long *)((long)pvVar14 + 8) + 0x38) + -1 + lVar4) != '/') {
      lVar12 = lVar4;
    }
    pvVar13 = param_1[4];
    *(undefined *)(lVar12 + (long)pvVar13) = 0x2f;
    memmove((undefined *)(lVar12 + (long)pvVar13) + 1,(void *)((long)pvVar14 + 0x108),
            *(long *)((long)pvVar14 + 0x60) + 1);
    sVar7 = *(short *)((long)pvVar14 + 0x70);
LAB_00407757:
    *param_1 = pvVar14;
    if (sVar7 != 0xb) {
LAB_00407761:
      if (sVar7 != 1) {
        return pvVar14;
      }
      goto LAB_0040776e;
    }
LAB_004077e0:
    if (*(long *)((long)pvVar14 + 0xa8) != 2) {
      if (*(long *)((long)pvVar14 + 0xa8) == 1) {
        return pvVar14;
      }
FUN_00401c18:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar4 = *(long *)((long)pvVar14 + 8);
    if (((*(long *)(lVar4 + 0x68) == 0) && ((*(uint *)(param_1 + 9) & 0x18) == 0x18)) &&
       (iVar8 = FUN_00405fc0(lVar4), iVar8 == 2)) {
      sVar7 = *(short *)((long)pvVar14 + 0x70);
      goto LAB_00407761;
    }
    sVar7 = FUN_00405ad0(param_1,pvVar14,0);
    *(short *)((long)pvVar14 + 0x70) = sVar7;
    if ((*(uint *)((long)pvVar14 + 0x90) & 0xf000) != 0x4000) goto LAB_00407761;
    if (*(long *)((long)pvVar14 + 0x58) != 0) {
      uVar1 = *(long *)(lVar4 + 0x68) - 1;
      if (uVar1 < 0xfffffffffffffffe) {
        *(ulong *)(lVar4 + 0x68) = uVar1;
      }
      if (sVar7 != 1) {
        return pvVar14;
      }
      goto LAB_0040777e;
    }
    if (sVar7 != 1) {
      return pvVar14;
    }
  }
  param_1[3] = *(void **)((long)pvVar14 + 0x78);
LAB_0040777e:
  cVar5 = FUN_004063f0(*(undefined *)(param_1 + 9),param_1 + 0xb,pvVar14);
  if (cVar5 == '\0') {
    piVar9 = __errno_location();
    pvVar14 = (void *)0x0;
    *piVar9 = 0xc;
  }
  return pvVar14;
}


undefined fts_set(undefined param_1,long param_2,uint param_3)

{
  int *piVar1;
  
  if (param_3 < 5) {
    *(short *)(param_2 + 0x74) = (short)param_3;
    return 0;
  }
  piVar1 = __errno_location();
  *piVar1 = 0x16;
  return 1;
}


long fts_children(long *param_1,uint param_2)

{
  int __fd;
  int iVar1;
  int *piVar2;
  long lVar3;
  long lVar4;
  undefined uVar5;
  
  piVar2 = __errno_location();
  if ((param_2 & 0xffffdfff) != 0) {
    *piVar2 = 0x16;
    return 0;
  }
  lVar4 = *param_1;
  *piVar2 = 0;
  if ((*(byte *)((long)param_1 + 0x49) & 0x40) == 0) {
    if (*(short *)(lVar4 + 0x70) == 9) {
      return *(long *)(lVar4 + 0x10);
    }
    lVar3 = 0;
    if (*(short *)(lVar4 + 0x70) == 1) {
      if (param_1[1] != 0) {
        FUN_00405e10();
      }
      uVar5 = 1;
      if (param_2 == 0x2000) {
        *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) | 0x2000;
        uVar5 = 2;
      }
      if (((*(long *)(lVar4 + 0x58) == 0) && (**(char **)(lVar4 + 0x30) != '/')) &&
         ((*(uint *)(param_1 + 9) & 4) == 0)) {
        __fd = FUN_004061d0(*(undefined *)((long)param_1 + 0x2c),*(uint *)(param_1 + 9),
                            &DAT_0040c7ab);
        if (__fd < 0) {
          param_1[1] = 0;
          lVar3 = 0;
        }
        else {
          lVar4 = FUN_00406540(param_1,uVar5);
          param_1[1] = lVar4;
          if ((*(byte *)((long)param_1 + 0x49) & 2) == 0) {
            iVar1 = fchdir(__fd);
            if (iVar1 != 0) {
              iVar1 = *piVar2;
              close(__fd);
              *piVar2 = iVar1;
              return 0;
            }
            close(__fd);
          }
          else {
            FUN_00406030(param_1,__fd,1);
          }
          lVar3 = param_1[1];
        }
      }
      else {
        lVar3 = FUN_00406540(param_1,uVar5);
        param_1[1] = lVar3;
      }
    }
    return lVar3;
  }
  return 0;
}


void FUN_00407d20(long param_1,int *param_2)

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
      if (iVar3 <= iVar8) goto LAB_00407d9c;
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
      if (iVar9 <= iVar3) goto LAB_00407d9c;
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
LAB_00407d9c:
  param_2[0xc] = iVar2;
  param_2[0xb] = iVar1 + (iVar2 - iVar3);
  return;
}


int FUN_00407e00(int param_1,undefined *param_2,char *param_3,char **param_4,undefined *param_5,
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
      if ((iVar5 == 0) && (sVar7 = strlen(__s1_00), sVar7 == sVar15)) goto LAB_00408020;
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
            if (local_70 == (char *)0x0) goto LAB_00407f60;
          }
          else if (local_70 == (char *)0x0) {
            local_70 = (char *)calloc((long)iVar5,1);
            if (local_70 == (char *)0x0) {
              bVar3 = true;
              goto LAB_00407f60;
            }
            bVar4 = true;
            local_70[(int)local_44] = '\x01';
          }
          local_70[lVar16] = '\x01';
        }
      }
LAB_00407f60:
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
              __fprintf_chk(__stream,1,&DAT_0040c8e1,param_9,*param_4);
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
LAB_00408020:
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


uint FUN_00408420(uint param_1,undefined *param_2,char *param_3,long param_4,undefined param_5,
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
LAB_0040846a:
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
          goto LAB_0040856d;
        }
        pbVar8 = *(byte **)(param_7 + 8);
      }
      param_7[10] = 0;
    }
LAB_0040856d:
    param_7[6] = 1;
    cVar2 = *param_3;
LAB_00408578:
    if (cVar2 == ':') {
      uVar3 = 0;
    }
    if (pbVar8 == (byte *)0x0) goto LAB_004084e8;
LAB_0040858c:
    if (*pbVar8 == 0) goto LAB_004084e8;
  }
  else {
    if (param_7[6] == 0) goto LAB_0040846a;
    cVar2 = *param_3;
    pbVar8 = *(byte **)(param_7 + 8);
    if ((cVar2 - 0x2bU & 0xfd) != 0) goto LAB_00408578;
    pcVar4 = param_3 + 1;
    param_3 = param_3 + 1;
    if (*pcVar4 == ':') {
      uVar3 = 0;
    }
    if (pbVar8 != (byte *)0x0) goto LAB_0040858c;
LAB_004084e8:
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
        FUN_00407d20(param_2,param_7);
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
LAB_00408656:
      if (uVar11 != param_1) {
        *param_7 = uVar11;
      }
      return 0xffffffff;
    }
    lVar6 = 3;
    pbVar8 = (byte *)param_2[(int)uVar11];
    pbVar9 = pbVar8;
    pbVar10 = &DAT_0040c8f9;
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
          FUN_00407d20(param_2,param_7);
          uVar11 = param_7[0xb];
        }
      }
      param_7[0xc] = param_1;
      *param_7 = param_1;
      goto LAB_00408656;
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
        puVar15 = &DAT_0040c8f9;
        goto LAB_004087b5;
      }
      if ((int)param_6 != 0) {
        if (pbVar8[2] == 0) {
          pcVar4 = strchr(param_3,(int)(char)bVar14);
          param_6 = param_6 & 0xffffffff;
          if (pcVar4 != (char *)0x0) goto LAB_00408760;
        }
        *(byte **)(param_7 + 8) = pbVar8 + 1;
        uVar11 = FUN_00407e00(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar3,
                              &DAT_0040c8fa);
        if (uVar11 != 0xffffffff) {
          return uVar11;
        }
        pbVar8 = (byte *)param_2[(int)*param_7];
      }
    }
LAB_00408760:
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
  puVar15 = &DAT_0040c918;
LAB_004087b5:
  uVar3 = FUN_00407e00(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar3,puVar15);
  return uVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004089f0(void)

{
  DAT_0060f4a0 = DAT_0060f2dc;
  _DAT_0060f4a4 = DAT_0060f2d8;
  FUN_00408420();
  DAT_0060f2dc = DAT_0060f4a0;
  DAT_0060f4e8 = DAT_0060f4b0;
  _DAT_0060f2d4 = DAT_0060f4a8;
  return;
}


void FUN_00408a50(void)

{
  FUN_004089f0();
  return;
}


void FUN_00408a70(void)

{
  FUN_004089f0();
  return;
}


void FUN_00408a90(void)

{
  FUN_00408420();
  return;
}


void FUN_00408ab0(void)

{
  FUN_004089f0();
  return;
}


void FUN_00408ad0(void)

{
  FUN_00408420();
  return;
}


size_t FUN_00408af0(wchar_t *param_1,byte *param_2,size_t param_3,mbstate_t *param_4)

{
  char cVar1;
  size_t sVar2;
  wchar_t local_1c;
  
  if (param_2 == (byte *)0x0) {
    param_3 = 1;
    param_2 = (byte *)0x40c917;
  }
  else {
    if (param_3 == 0) {
      return 0xfffffffffffffffe;
    }
    if (param_1 != (wchar_t *)0x0) goto LAB_00408b14;
  }
  param_1 = &local_1c;
LAB_00408b14:
  sVar2 = mbrtowc(param_1,(char *)param_2,param_3,param_4);
  if ((0xfffffffffffffffd < sVar2) && (cVar1 = FUN_00408cb0(0), cVar1 == '\0')) {
    sVar2 = 1;
    *param_1 = (uint)*param_2;
  }
  return sVar2;
}


ulong FUN_00408b70(uint *param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  
  lVar2 = __fpending();
  uVar1 = *param_1;
  uVar3 = FUN_0040a630(param_1);
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


void FUN_00408bd0(long param_1)

{
  *(undefined *)(param_1 + 0x10) = 0;
  *(undefined *)(param_1 + 0x18) = 0x95f616;
  return;
}


undefined FUN_00408be0(long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  if (*(int *)(param_1 + 3) != 0x95f616) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("state->magic == 9827862","lib/cycle-check.c",0x3c,"cycle_check");
  }
  uVar2 = param_1[2];
  lVar3 = param_2[1];
  if (uVar2 == 0) {
    param_1[2] = 1;
  }
  else {
    if ((*param_1 == lVar3) && (*param_2 == param_1[1])) {
      return 1;
    }
    uVar1 = uVar2 + 1;
    param_1[2] = uVar1;
    if ((uVar2 & uVar1) != 0) {
      return 0;
    }
    if (uVar1 == 0) {
      return 1;
    }
  }
  lVar4 = *param_2;
  *param_1 = lVar3;
  param_1[1] = lVar4;
  return 0;
}


void FUN_00408c60(char *param_1,uint param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 & 0x40) != 0) {
    uVar2 = param_3 & 0xffffffff;
  }
  iVar1 = open(param_1,param_2,uVar2);
  FUN_0040a5e0(iVar1);
  return;
}


bool FUN_00408cb0(int param_1)

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
    pbVar5 = &DAT_0040c954;
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


ulong FUN_00408d10(ulong param_1)

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
LAB_00408d90:
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
        if (uVar3 <= uVar4) goto LAB_00408d90;
        lVar5 = lVar5 + 8;
      } while (uVar1 != 0);
    }
    uVar3 = uVar3 + 2;
  } while( true );
}


ulong FUN_00408db0(ulong param_1,ulong param_2)

{
  return (param_1 >> 3 | param_1 << 0x3d) % param_2;
}


bool FUN_00408dc0(long param_1,long param_2)

{
  return param_1 == param_2;
}


long FUN_00408dd0(long *param_1,undefined param_2)

{
  ulong uVar1;
  
  uVar1 = (*(code *)param_1[6])(param_2,param_1[2]);
  if (uVar1 <= (ulong)param_1[2] && param_1[2] != uVar1) {
    return uVar1 * 0x10 + *param_1;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


long FUN_00408e00(long param_1,long param_2,long **param_3,char param_4)

{
  undefined *puVar1;
  undefined uVar2;
  undefined uVar3;
  undefined uVar4;
  char cVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  
  plVar6 = (long *)FUN_00408dd0();
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
LAB_00408e8c:
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
          goto LAB_00408e8c;
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

undefined FUN_00408f20(float **param_1)

{
  float fVar1;
  float *pfVar2;
  float fVar3;
  
  pfVar2 = *param_1;
  if (pfVar2 == (float *)&DAT_0040c9d0) {
    return 1;
  }
  fVar1 = pfVar2[2];
  if ((((_DAT_0040c9e4 < fVar1) && (fVar1 < DAT_0040c9e8)) && (_DAT_0040c9ec < pfVar2[3])) &&
     (_DAT_0040c9f0 <= *pfVar2)) {
    fVar3 = *pfVar2 + _DAT_0040c9e4;
    if (((fVar3 < pfVar2[1]) && (pfVar2[1] <= DAT_0040c9f4)) && (fVar3 < fVar1)) {
      return 1;
    }
  }
  *param_1 = (float *)&DAT_0040c9d0;
  return 0;
}


undefined FUN_00408fa0(long param_1,long **param_2,char param_3)

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
LAB_00408fc8:
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
          plVar2 = (long *)FUN_00408dd0(param_1,lVar6);
          plVar4 = (long *)plVar3[1];
          if (*plVar2 != 0) break;
          *plVar2 = lVar6;
          *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
          *plVar3 = 0;
          plVar3[1] = *(long *)(param_1 + 0x48);
          *(long **)(param_1 + 0x48) = plVar3;
          plVar3 = plVar4;
          if (plVar4 == (long *)0x0) goto LAB_0040903f;
        }
        plVar3[1] = plVar2[1];
        plVar2[1] = (long)plVar3;
        plVar3 = plVar4;
      } while (plVar4 != (long *)0x0);
LAB_0040903f:
      lVar6 = *plVar5;
    }
    plVar5[1] = 0;
    if (param_3 != '\0') goto LAB_00408fc8;
    plVar3 = (long *)FUN_00408dd0(param_1,lVar6);
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


undefined FUN_004090f0(long param_1)

{
  return *(undefined *)(param_1 + 0x10);
}


undefined FUN_00409100(long param_1)

{
  return *(undefined *)(param_1 + 0x18);
}


undefined FUN_00409110(long param_1)

{
  return *(undefined *)(param_1 + 0x20);
}


void FUN_00409120(long **param_1)

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


bool FUN_00409170(long **param_1)

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
LAB_00409188:
      plVar2 = plVar2 + 2;
    }
    lVar1 = plVar2[1];
    plVar4 = (long *)((long)plVar4 + 1);
    plVar3 = (long *)((long)plVar3 + 1);
    if (lVar1 == 0) goto LAB_00409188;
    do {
      lVar1 = *(long *)(lVar1 + 8);
      plVar3 = (long *)((long)plVar3 + 1);
    } while (lVar1 != 0);
    plVar2 = plVar2 + 2;
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004091e0(long **param_1,undefined param_2)

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
      if (param_1[1] <= plVar6) goto LAB_0040924d;
    }
  }
LAB_0040924d:
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
  __fprintf_chk((dVar7 * _DAT_0040ca08) / dVar8,param_2,1,"# buckets used:    %lu (%.2f%%)\n",plVar2
               );
  __fprintf_chk(param_2,1,"max bucket length: %lu\n",uVar5);
  return;
}


long FUN_00409330(long param_1,long param_2)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)FUN_00408dd0();
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


long FUN_00409390(long **param_1)

{
  long lVar1;
  long *plVar2;
  
  if (param_1[4] == (long *)0x0) {
    return 0;
  }
  plVar2 = *param_1;
  if (param_1[1] <= plVar2) {
    lVar1 = FUN_00401c22();
    return lVar1;
  }
  do {
    if (*plVar2 != 0) {
      return *plVar2;
    }
    plVar2 = plVar2 + 2;
  } while (plVar2 < param_1[1]);
  lVar1 = FUN_00401c22();
  return lVar1;
}


long FUN_004093e0(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = (long *)FUN_00408dd0();
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


ulong FUN_00409450(long **param_1,long param_2,ulong param_3)

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


long FUN_004094c0(long **param_1,code *param_2,undefined param_3)

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


ulong FUN_00409540(byte *param_1,ulong param_2)

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


void FUN_00409580(undefined *param_1)

{
  *(undefined *)(param_1 + 2) = 0;
  *param_1 = 0x3f80000000000000;
  param_1[1] = 0x3fb4fdf43f4ccccd;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ** FUN_004095a0(ulong param_1,void *param_2,code *param_3,code *param_4,void *param_5)

{
  char cVar1;
  void **__ptr;
  void *__nmemb;
  void *pvVar2;
  float fVar3;
  float fVar4;
  
  if (param_3 == (code *)0x0) {
    param_3 = FUN_00408db0;
  }
  if (param_4 == (code *)0x0) {
    param_4 = FUN_00408dc0;
  }
  __ptr = (void **)malloc(0x50);
  if (__ptr == (void **)0x0) {
    return (void **)0x0;
  }
  if (param_2 == (void *)0x0) {
    __ptr[5] = &DAT_0040c9d0;
    cVar1 = FUN_00408f20(__ptr + 5);
    if (cVar1 == '\0') goto LAB_00409680;
    fVar4 = DAT_0040c9f8;
    if ((long)param_1 < 0) goto LAB_00409703;
LAB_004096be:
    fVar3 = (float)param_1;
LAB_004096c7:
    fVar3 = fVar3 / fVar4;
    if (_DAT_0040c9fc <= fVar3) goto LAB_00409680;
    if (fVar3 < _DAT_0040ca00) {
      param_1 = (ulong)fVar3;
    }
    else {
      param_1 = (long)(fVar3 - _DAT_0040ca00) ^ 0x8000000000000000;
    }
  }
  else {
    __ptr[5] = param_2;
    cVar1 = FUN_00408f20(__ptr + 5);
    if (cVar1 == '\0') goto LAB_00409680;
    if (*(char *)((long)param_2 + 0x10) == '\0') {
      fVar4 = *(float *)((long)param_2 + 8);
      if (-1 < (long)param_1) goto LAB_004096be;
LAB_00409703:
      fVar3 = (float)(param_1 >> 1 | (ulong)((uint)param_1 & 1));
      fVar3 = fVar3 + fVar3;
      goto LAB_004096c7;
    }
  }
  __nmemb = (void *)FUN_00408d10(param_1);
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
LAB_00409680:
  free(__ptr);
  return (void **)0x0;
}


void FUN_00409730(long **param_1)

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
        if (param_1[1] < plVar4 || param_1[1] == plVar4) goto LAB_004097c3;
      }
      plVar5 = plVar5 + 2;
    } while (plVar5 <= param_1[1] && param_1[1] != plVar5);
  }
LAB_004097c3:
  param_1[3] = (long *)0x0;
  param_1[4] = (long *)0x0;
  return;
}


void FUN_004097e0(long **param_1)

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
    if (plVar2 <= plVar4) goto LAB_0040987c;
    do {
      while (lVar5 = *plVar4, plVar3 = plVar4, lVar5 == 0) {
        plVar4 = plVar4 + 2;
        if (plVar2 <= plVar4) goto LAB_0040983f;
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
LAB_0040983f:
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
LAB_0040987c:
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

undefined FUN_004098c0(void **param_1,ulong param_2)

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
    if (_DAT_0040c9fc <= fVar3) {
      return 0;
    }
    if (fVar3 < _DAT_0040ca00) {
      param_2 = (ulong)fVar3;
    }
    else {
      param_2 = (long)(fVar3 - _DAT_0040ca00) ^ 0x8000000000000000;
    }
  }
  local_58 = (void *)FUN_00408d10(param_2);
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
      uVar2 = FUN_00408fa0(&local_68,param_1,0);
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
      cVar1 = FUN_00408fa0(param_1,&local_68,1);
      if ((cVar1 != '\0') && (cVar1 = FUN_00408fa0(param_1,&local_68,0), cVar1 != '\0')) {
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

undefined FUN_00409ac0(long param_1,long param_2,long *param_3)

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
  lVar2 = FUN_00408e00(param_1,param_2,&local_20,0);
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
    if ((long)uVar3 < 0) goto LAB_00409bba;
LAB_00409b2b:
    if (fVar7 <= (float)uVar3 * *(float *)(lVar2 + 8)) goto LAB_00409b42;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x28);
    fVar7 = (float)uVar6;
    uVar3 = *(ulong *)(param_1 + 0x10);
    if (-1 < (long)uVar3) goto LAB_00409b2b;
LAB_00409bba:
    fVar8 = (float)(uVar3 >> 1 | (ulong)((uint)uVar3 & 1));
    if (fVar7 <= (fVar8 + fVar8) * *(float *)(lVar2 + 8)) goto LAB_00409b42;
  }
  FUN_00408f20(param_1 + 0x28);
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
    if (_DAT_0040c9fc <= fVar7) {
      return 0xffffffff;
    }
    if (_DAT_0040ca00 <= fVar7) {
      uVar6 = (long)(fVar7 - _DAT_0040ca00) ^ 0x8000000000000000;
    }
    else {
      uVar6 = (ulong)fVar7;
    }
    cVar1 = FUN_004098c0(param_1,uVar6);
    if (cVar1 == '\0') {
      return 0xffffffff;
    }
    lVar2 = FUN_00408e00(param_1,param_2,&local_20,0);
    if (lVar2 != 0) {
      uVar5 = FUN_00401c2c();
      return uVar5;
    }
  }
LAB_00409b42:
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


undefined FUN_00409d40(undefined param_1,undefined param_2)

{
  int iVar1;
  undefined local_10;
  
  iVar1 = FUN_00409ac0(param_1,param_2,&local_10);
  if (iVar1 != -1) {
    if (iVar1 == 0) {
      param_2 = local_10;
    }
    return param_2;
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_00409d80(long param_1,undefined param_2)

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
  
  lVar5 = FUN_00408e00(param_1,param_2,&local_20,1);
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
      FUN_00408f20(param_1 + 0x28);
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
        if (_DAT_0040ca00 <= fVar7) {
          uVar6 = (long)(fVar7 - _DAT_0040ca00) ^ 0x8000000000000000;
        }
        else {
          uVar6 = (ulong)fVar7;
        }
        cVar4 = FUN_004098c0(param_1,uVar6);
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


void FUN_00409f60(undefined *param_1,undefined param_2)

{
  *(undefined *)(param_1 + 5) = 0;
  *(undefined *)(param_1 + 7) = 1;
  *param_1 = param_2;
  param_1[1] = param_2;
  param_1[2] = param_2;
  param_1[3] = param_2;
  param_1[4] = param_2;
  return;
}


undefined FUN_00409f80(long param_1)

{
  return *(undefined *)(param_1 + 0x1c);
}


undefined FUN_00409f90(long param_1,undefined param_2)

{
  undefined *puVar1;
  undefined uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = (uint)(*(byte *)(param_1 + 0x1c) ^ 1);
  uVar3 = *(int *)(param_1 + 0x14) + uVar4 & 3;
  puVar1 = (undefined *)(param_1 + (ulong)uVar3 * 4);
  uVar2 = *puVar1;
  *puVar1 = param_2;
  *(uint *)(param_1 + 0x14) = uVar3;
  if (*(uint *)(param_1 + 0x18) == uVar3) {
    *(uint *)(param_1 + 0x18) = uVar4 + *(uint *)(param_1 + 0x18) & 3;
  }
  *(undefined *)(param_1 + 0x1c) = 0;
  return uVar2;
}


undefined FUN_00409fd0(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  undefined uVar3;
  
  if (*(char *)(param_1 + 0x1c) != '\0') {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar2 = *(uint *)(param_1 + 0x14);
  puVar1 = (undefined *)(param_1 + (ulong)uVar2 * 4);
  uVar3 = *puVar1;
  *puVar1 = *(undefined *)(param_1 + 0x10);
  if (uVar2 != *(uint *)(param_1 + 0x18)) {
    *(uint *)(param_1 + 0x14) = uVar2 + 3 & 3;
    return uVar3;
  }
  *(undefined *)(param_1 + 0x1c) = 1;
  return uVar3;
}


/* WARNING: Could not reconcile some variable overlaps */

char * FUN_0040a020(void)

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
  if (DAT_0060f4d8 != (char *)0x0) goto LAB_0040a05a;
  pcVar7 = getenv("CHARSETALIASDIR");
  if ((pcVar7 == (char *)0x0) || (*pcVar7 == '\0')) {
    sVar6 = 0x73;
    sVar5 = 0x65;
    __n = 100;
    pcVar7 = 
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib"
    ;
LAB_0040a145:
    __file = (char *)malloc(sVar6);
    if (__file != (char *)0x0) {
      memcpy(__file,pcVar7,__n);
      __file[__n] = '/';
      goto LAB_0040a166;
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
        goto LAB_0040a145;
      }
      sVar6 = __n + 0xe;
    }
    __file = (char *)malloc(sVar6);
    if (__file != (char *)0x0) {
      memcpy(__file,pcVar7,__n);
      sVar5 = __n;
LAB_0040a166:
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
LAB_0040a200:
          pbVar8 = (byte *)__stream->_IO_read_ptr;
          if (__stream->_IO_read_end <= pbVar8) goto LAB_0040a38c;
          do {
            __stream->_IO_read_ptr = (char *)(pbVar8 + 1);
            uVar4 = (uint)*pbVar8;
            __ptr = pcVar7;
            while( true ) {
              pcVar7 = __ptr;
              if ((uVar4 - 9 < 2) || (uVar4 == 0x20)) goto LAB_0040a200;
              if (uVar4 == 0x23) goto LAB_0040a3f1;
              ungetc(uVar4,__stream);
              iVar2 = fscanf(__stream,"%50s %50s",&local_b8,&local_78);
              puVar13 = &local_b8;
              if (iVar2 < 2) goto LAB_0040a39f;
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
                FUN_0040a630(__stream);
                goto LAB_0040a1a4;
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
LAB_0040a38c:
              uVar4 = __uflow(__stream);
              __ptr = pcVar7;
              if (uVar4 == 0xffffffff) goto LAB_0040a39f;
            }
          } while( true );
        }
        close(iVar2);
      }
      goto LAB_0040a19e;
    }
  }
  DAT_0060f4d8 = "";
LAB_0040a05a:
  cVar1 = *DAT_0060f4d8;
  pcVar7 = DAT_0060f4d8;
  do {
    if (cVar1 == '\0') {
LAB_0040a0b4:
      if (*__s1 == '\0') {
        __s1 = "ASCII";
      }
      return __s1;
    }
    iVar2 = strcmp(__s1,pcVar7);
    if ((iVar2 == 0) || ((cVar1 == '*' && (pcVar7[1] == '\0')))) {
      sVar6 = strlen(pcVar7);
      __s1 = pcVar7 + sVar6 + 1;
      goto LAB_0040a0b4;
    }
    sVar6 = strlen(pcVar7);
    sVar5 = strlen(pcVar7 + sVar6 + 1);
    pcVar7 = pcVar7 + sVar6 + 1 + sVar5 + 1;
    cVar1 = *pcVar7;
  } while( true );
LAB_0040a3f1:
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
  if (uVar4 == 0xffffffff) goto LAB_0040a39f;
  goto LAB_0040a200;
LAB_0040a39f:
  FUN_0040a630(__stream);
  if (local_d0 == 0) {
LAB_0040a19e:
    pcVar7 = "";
  }
  else {
    pcVar7[local_d0] = '\0';
  }
LAB_0040a1a4:
  free(__file);
  DAT_0060f4d8 = pcVar7;
  goto LAB_0040a05a;
}


void FUN_0040a590(int param_1,char *param_2,uint param_3,ulong param_4)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_3 & 0x40) != 0) {
    uVar2 = param_4 & 0xffffffff;
  }
  iVar1 = openat(param_1,param_2,param_3,uVar2);
  FUN_0040a5e0(iVar1);
  return;
}


uint FUN_0040a5e0(uint param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  if (2 < param_1) {
    return param_1;
  }
  uVar2 = FUN_0040a890();
  piVar3 = __errno_location();
  iVar1 = *piVar3;
  close(param_1);
  *piVar3 = iVar1;
  return uVar2;
}


int FUN_0040a630(FILE *param_1)

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
      if (_Var4 == -1) goto LAB_0040a697;
    }
    iVar1 = FUN_0040a7f0(param_1);
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
LAB_0040a697:
  iVar1 = fclose(param_1);
  return iVar1;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_0040a6b0(ulong param_1,int param_2,ulong param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  
  if (param_2 != 0x406) {
    iVar1 = fcntl((int)param_1,param_2,param_3);
    return iVar1;
  }
  if (DAT_0060f4e0 < 0) {
    iVar1 = FUN_0040a6b0(param_1,0,param_3 & 0xffffffff);
    if (iVar1 < 0) {
      return iVar1;
    }
    if (DAT_0060f4e0 != -1) {
      return iVar1;
    }
  }
  else {
    iVar1 = fcntl((int)param_1,0x406);
    if ((-1 < iVar1) || (piVar4 = __errno_location(), *piVar4 != 0x16)) {
      DAT_0060f4e0 = 1;
      return iVar1;
    }
    iVar1 = FUN_0040a6b0(param_1 & 0xffffffff,0,param_3 & 0xffffffff);
    if (iVar1 < 0) {
      return iVar1;
    }
    DAT_0060f4e0 = -1;
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


void FUN_0040a7f0(FILE *param_1)

{
  int iVar1;
  
  if (param_1 != (FILE *)0x0) {
    iVar1 = __freading();
    if ((iVar1 != 0) && ((param_1->_flags & 0x100U) != 0)) {
      FUN_0040a830(param_1,0,1);
      fflush(param_1);
      return;
    }
  }
  fflush(param_1);
  return;
}


ulong FUN_0040a830(FILE *param_1,__off_t param_2,int param_3)

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


void FUN_0040a890(undefined param_1)

{
  FUN_0040a6b0(param_1,0,3);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040a8d3) */
/* WARNING: Removing unreachable block (ram,0x0040a8d8) */

void FUN_0040a8a0(void)

{
  __DT_INIT();
  return;
}


void FUN_0040a900(void)

{
  return;
}


void FUN_0040a910(undefined param_1)

{
  __cxa_atexit(param_1,0,DAT_0060f248);
  return;
}


undefined FUN_0040a928(undefined param_1,undefined param_2,undefined param_3)

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
  FUN_00402961();
  return;
}

