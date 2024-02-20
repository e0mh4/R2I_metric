
#include "decompile_ghidra.h"
#define __int64 long long
#define __int32 int
#define __int16 short
#define __int8 char

void FUN_00402e50(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00402e55(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00402e5a(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00402e5f(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void switchD_00410860caseD_b(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00402e69(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00402e6e(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00402e73(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00402e78(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void switchD_0041246acaseD_0(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00402e82(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined FUN_00402e90(int param_1,FILE *param_2)

{
  void **ppvVar1;
  void **ppvVar2;
  void **ppvVar3;
  bool bVar4;
  FILE *__stream;
  void **__ptr;
  byte *pbVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  char *pcVar10;
  char **ppcVar11;
  undefined *puVar12;
  void *pvVar13;
  long lVar14;
  undefined uVar15;
  undefined uVar16;
  long lVar17;
  void *pvVar18;
  char *pcVar19;
  char *pcVar20;
  ulong uVar21;
  undefined **ppuVar22;
  char *pcVar23;
  bool bVar24;
  byte bVar25;
  undefined auVar26 [16];
  ushort local_53;
  undefined local_51;
  byte *local_50;
  undefined local_48;
  undefined local_40;
  
  bVar25 = 0;
  FUN_00410670(*(undefined *)param_2);
  setlocale(6,"");
  bindtextdomain("coreutils",
                 "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale"
                );
  textdomain("coreutils");
  DAT_006245c0 = 2;
  FUN_00418780(FUN_0040b710);
  DAT_00625678 = 1;
  DAT_00625730 = 0x8000000000000000;
  DAT_006255d0 = 0;
  DAT_00625740 = (void **)0x0;
  DAT_00625738 = 0xffffffffffffffff;
  DAT_00625698 = 0;
  if (DAT_006245ac == 2) {
    DAT_006256f8 = 2;
    FUN_00411c30(0,7);
  }
  else if (DAT_006245ac == 3) {
    DAT_006256f8 = 0;
    FUN_00411c30(0,7);
  }
  else {
    if (DAT_006245ac != 1) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    iVar8 = isatty(1);
    if (iVar8 == 0) {
      DAT_006256f8 = 1;
    }
    else {
      DAT_006256f8 = 2;
      FUN_00411c30(0,3);
      DAT_00625698 = 1;
    }
  }
  DAT_006256ef = 0;
  DAT_006256f4 = 0;
  DAT_006256f0 = 0;
  DAT_006256ed = 0;
  DAT_006256ec = '\0';
  DAT_006256d4 = 0;
  DAT_006256bc = 0;
  DAT_006256b8 = 1;
  DAT_006256b6 = '\0';
  DAT_006256b5 = '\0';
  DAT_006256b0 = 0;
  DAT_006256a8 = (char **)0x0;
  DAT_006256a0 = (char **)0x0;
  DAT_00625725 = '\0';
  pcVar10 = getenv("QUOTING_STYLE");
  if (pcVar10 != (char *)0x0) {
    iVar8 = FUN_0040acf0(pcVar10,&PTR_s_literal_0041ea00,&DAT_0041e9c0,4);
    if (iVar8 < 0) {
      uVar15 = FUN_00412290(pcVar10);
      uVar16 = dcgettext(0,"ignoring invalid value of environment variable QUOTING_STYLE: %s",5);
      error(0,0,uVar16,uVar15);
    }
    else {
      FUN_00411c30(0,*(undefined *)(&DAT_0041e9c0 + (long)iVar8 * 4));
    }
  }
  DAT_00625670 = 0x50;
  pcVar10 = getenv("COLUMNS");
  if (((pcVar10 != (char *)0x0) && (*pcVar10 != '\0')) &&
     (cVar7 = FUN_00404b40(pcVar10), cVar7 == '\0')) {
    uVar15 = FUN_00412290(pcVar10);
    uVar16 = dcgettext(0,"ignoring invalid width in environment variable COLUMNS: %s",5);
    error(0,0,uVar16,uVar15);
  }
  iVar8 = ioctl(1,0x5413,&local_48);
  if (iVar8 != -1) {
    if (local_48._2_2_ != 0) {
      DAT_00625670 = (ulong)local_48._2_2_;
    }
  }
  pcVar10 = getenv("TABSIZE");
  DAT_00625680 = &DAT_00000008;
  if (pcVar10 != (char *)0x0) {
    iVar8 = FUN_00412df0(pcVar10,0,0,&local_48,0);
    if (iVar8 == 0) {
      DAT_00625680 = local_48;
    }
    else {
      uVar15 = FUN_00412290(pcVar10);
      uVar16 = dcgettext(0,"ignoring invalid tab size in environment variable TABSIZE: %s",5);
      error(0,0,uVar16,uVar15);
    }
  }
  bVar4 = false;
  bVar24 = false;
  pcVar10 = (char *)0x0;
  cVar7 = DAT_006256d1;
LAB_004030b8:
  DAT_006256d1 = cVar7;
  local_48 = (undefined *)CONCAT44(local_48._4_4_,0xffffffff);
  iVar8 = FUN_00416e00(param_1,param_2,"abcdfghiklmnopqrstuvw:xABCDFGHI:LNQRST:UXZ1",
                       &PTR_s_all_00419900,&local_48);
  pcVar20 = DAT_00625970;
  if (iVar8 != -1) {
    cVar7 = DAT_006256d1;
    switch(iVar8) {
    case 0x31:
      if (DAT_006256f8 != 0) {
        DAT_006256f8 = 1;
      }
      break;
    case 0x41:
      if (DAT_006256b0 == 0) {
        DAT_006256b0 = 1;
      }
      break;
    case 0x42:
      puVar12 = (undefined *)FUN_00412980(0x10);
      *puVar12 = &DAT_0041b204;
      puVar12[1] = DAT_006256a8;
      DAT_006256a8 = (char **)puVar12;
      ppcVar11 = (char **)FUN_00412980(0x10);
      *ppcVar11 = ".*~";
      ppcVar11[1] = (char *)DAT_006256a8;
      DAT_006256a8 = ppcVar11;
      cVar7 = DAT_006256d1;
      break;
    case 0x43:
      DAT_006256f8 = 2;
      break;
    case 0x44:
      DAT_006256d8 = '\x01';
      break;
    case 0x46:
      DAT_006256d4 = 3;
      break;
    case 0x47:
      DAT_006245a8 = 0;
      break;
    case 0x48:
      DAT_006256b8 = 3;
      break;
    case 0x49:
      ppcVar11 = (char **)FUN_00412980(0x10);
      *ppcVar11 = pcVar20;
      ppcVar11[1] = (char *)DAT_006256a8;
      DAT_006256a8 = ppcVar11;
      cVar7 = DAT_006256d1;
      break;
    case 0x4c:
      DAT_006256b8 = 5;
      break;
    case 0x4e:
      FUN_00411c30(0,0);
      cVar7 = DAT_006256d1;
      break;
    case 0x51:
      FUN_00411c30(0,5);
      cVar7 = DAT_006256d1;
      break;
    case 0x52:
      DAT_006256b6 = '\x01';
      break;
    case 0x53:
      DAT_006256f0 = 2;
      bVar24 = true;
      break;
    case 0x54:
      auVar26 = dcgettext(0,"invalid tab size",5);
      DAT_00625680 = (undefined *)
                     FUN_00412c10(DAT_00625970,0,0,0xffffffffffffffff,&DAT_0041b08a,
                                  SUB168(auVar26,0),2,SUB168(auVar26 >> 0x40,0));
      cVar7 = DAT_006256d1;
      break;
    case 0x55:
      DAT_006256f0 = -1;
      bVar24 = true;
      break;
    case 0x58:
      DAT_006256f0 = 1;
      bVar24 = true;
      break;
    case 0x5a:
      DAT_00625725 = '\x01';
      break;
    case 0x61:
      DAT_006256b0 = 2;
      break;
    case 0x62:
      FUN_00411c30(0,7);
      cVar7 = DAT_006256d1;
      break;
    case 99:
      DAT_006256f4 = 1;
      break;
    case 100:
      DAT_006256b5 = '\x01';
      break;
    case 0x66:
      DAT_006256b0 = 2;
      DAT_006256f0 = -1;
      if (DAT_006256f8 == 0) {
        iVar8 = isatty(1);
        DAT_006256f8 = 2 - (uint)(iVar8 == 0);
      }
      DAT_006256ec = '\0';
      bVar24 = true;
      DAT_006256d2 = '\0';
      DAT_006256d1 = '\0';
      cVar7 = DAT_006256d1;
      break;
    case 0x67:
      DAT_006256f8 = 0;
      DAT_006245a9 = 0;
      break;
    case 0x68:
      DAT_006256e8 = 0xb0;
      DAT_006256dc = 0xb0;
      DAT_006256e0 = 1;
      DAT_006245a0 = 1;
      break;
    case 0x69:
      DAT_006256bc = 1;
      break;
    case 0x6b:
      bVar4 = true;
      break;
    case 0x6d:
      DAT_006256f8 = 4;
      break;
    case 0x6e:
      DAT_006256ed = 1;
    case 0x6c:
      DAT_006256f8 = 0;
      break;
    case 0x6f:
      DAT_006256f8 = 0;
      DAT_006245a8 = 0;
      break;
    case 0x70:
      DAT_006256d4 = 1;
      break;
    case 0x71:
      DAT_00625698 = 1;
      break;
    case 0x72:
      DAT_006256ef = 1;
      break;
    case 0x73:
      DAT_006256ec = '\x01';
      break;
    case 0x74:
      DAT_006256f0 = 4;
      bVar24 = true;
      break;
    case 0x75:
      DAT_006256f4 = 2;
      break;
    case 0x76:
      goto switchD_004030ee_caseD_76;
    case 0x77:
      cVar6 = FUN_00404b40(DAT_00625970);
      cVar7 = DAT_006256d1;
      if (cVar6 == '\0') {
        param_2 = (FILE *)FUN_00412290(DAT_00625970);
        uVar15 = dcgettext(0,"invalid line width",5);
        error(2,0,"%s: %s",uVar15,param_2);
switchD_004030ee_caseD_76:
        DAT_006256f0 = 3;
        bVar24 = true;
        cVar7 = DAT_006256d1;
      }
      break;
    case 0x78:
      DAT_006256f8 = 3;
      break;
    case 0x80:
      DAT_006256ee = 1;
      break;
    case 0x81:
      iVar8 = FUN_0040dfa0(DAT_00625970,&DAT_006256e8,&DAT_006256e0);
      if (iVar8 != 0) {
        FUN_00413220(iVar8,(ulong)local_48 & 0xffffffff,0,&PTR_s_all_00419900,DAT_00625970);
        goto LAB_004046e2;
      }
      DAT_006256dc = DAT_006256e8;
      DAT_006245a0 = DAT_006256e0;
      cVar7 = DAT_006256d1;
      break;
    case 0x82:
      if (DAT_00625970 != (char *)0x0) {
        lVar17 = FUN_0040afb0("--color",DAT_00625970,&PTR_s_always_00419780,&DAT_00419740,4,
                              PTR_FUN_006245b8);
        if ((*(int *)(&DAT_00419740 + lVar17 * 4) != 1) &&
           ((*(int *)(&DAT_00419740 + lVar17 * 4) != 2 || (iVar8 = isatty(1), iVar8 == 0)))) {
          DAT_006256d2 = '\0';
          cVar7 = DAT_006256d1;
          break;
        }
      }
      DAT_006256d2 = '\x01';
      DAT_00625680 = (undefined *)0x0;
      cVar7 = DAT_006256d1;
      break;
    case 0x83:
      DAT_006256b8 = 4;
      break;
    case 0x84:
      DAT_006256d4 = 2;
      break;
    case 0x85:
      lVar17 = FUN_0040afb0("--format",DAT_00625970,&PTR_s_verbose_004198c0,&DAT_00419890,4,
                            PTR_FUN_006245b8);
      DAT_006256f8 = *(int *)(&DAT_00419890 + lVar17 * 4);
      cVar7 = DAT_006256d1;
      break;
    case 0x86:
      DAT_006256f8 = 0;
      pcVar10 = "full-iso";
      break;
    case 0x87:
      DAT_006256b4 = 1;
      break;
    case 0x88:
      ppcVar11 = (char **)FUN_00412980(0x10);
      *ppcVar11 = DAT_00625970;
      ppcVar11[1] = (char *)DAT_006256a0;
      DAT_006256a0 = ppcVar11;
      cVar7 = DAT_006256d1;
      break;
    case 0x89:
      if (DAT_00625970 != (char *)0x0) {
        lVar17 = FUN_0040afb0("--hyperlink",DAT_00625970,&PTR_s_always_00419780,&DAT_00419740,4,
                              PTR_FUN_006245b8);
        if (*(int *)(&DAT_00419740 + lVar17 * 4) != 1) {
          cVar7 = '\0';
          if (*(int *)(&DAT_00419740 + lVar17 * 4) == 2) {
            iVar8 = isatty(1);
            cVar7 = iVar8 != 0;
          }
          break;
        }
      }
      cVar7 = '\x01';
      break;
    case 0x8a:
      lVar17 = FUN_0040afb0("--indicator-style",DAT_00625970,&PTR_DAT_00419f60,&DAT_00419f50,4,
                            PTR_FUN_006245b8);
      DAT_006256d4 = *(uint *)(&DAT_00419f50 + lVar17 * 4);
      cVar7 = DAT_006256d1;
      break;
    case 0x8b:
      lVar17 = FUN_0040afb0("--quoting-style",DAT_00625970,&PTR_s_literal_0041ea00,&DAT_0041e9c0,4,
                            PTR_FUN_006245b8);
      FUN_00411c30(0,*(undefined *)(&DAT_0041e9c0 + lVar17 * 4));
      cVar7 = DAT_006256d1;
      break;
    case 0x8c:
      DAT_00625698 = 0;
      break;
    case 0x8d:
      DAT_006256e8 = 0x90;
      DAT_006256dc = 0x90;
      DAT_006256e0 = 1;
      DAT_006245a0 = 1;
      break;
    case 0x8e:
      bVar24 = true;
      lVar17 = FUN_0040afb0("--sort",DAT_00625970,&DAT_00419860,&DAT_00419830,4,PTR_FUN_006245b8);
      DAT_006256f0 = *(int *)(&DAT_00419830 + lVar17 * 4);
      cVar7 = DAT_006256d1;
      break;
    case 0x8f:
      lVar17 = FUN_0040afb0("--time",DAT_00625970,&PTR_s_atime_00419800,&DAT_004197d0,4,
                            PTR_FUN_006245b8);
      DAT_006256f4 = *(int *)(&DAT_004197d0 + lVar17 * 4);
      cVar7 = DAT_006256d1;
      break;
    case 0x90:
      goto switchD_004030ee_caseD_90;
    case -0x83:
      if (DAT_006245ac == 1) {
        pcVar10 = "ls";
        iVar8 = DAT_006245ac;
      }
      else {
        pcVar10 = "dir";
        iVar8 = 0x41b134;
        if (DAT_006245ac != 2) {
          pcVar10 = "vdir";
        }
      }
      FUN_00412840(stdout,pcVar10,"GNU coreutils",PTR_DAT_006245b0,"Richard M. Stallman",
                   "David MacKenzie",0,iVar8);
                    /* WARNING: Subroutine does not return */
      exit(0);
    case -0x82:
      FUN_0040a530(0);
      goto LAB_00404511;
    default:
      goto switchD_004030ee_caseD_ffffff7f;
    }
    goto LAB_004030b8;
  }
  if (DAT_006256e0 == 0) {
    pcVar20 = getenv("LS_BLOCK_SIZE");
    FUN_0040dfa0(pcVar20,&DAT_006256e8,&DAT_006256e0);
    if ((pcVar20 != (char *)0x0) || (pcVar20 = getenv("BLOCK_SIZE"), pcVar20 != (char *)0x0)) {
      DAT_006256dc = DAT_006256e8;
      DAT_006245a0 = DAT_006256e0;
    }
    if (bVar4) {
      DAT_006256e8 = 0;
      DAT_006256e0 = 0x400;
    }
  }
  DAT_006255c0 = DAT_00625670 / 3 + (ulong)(DAT_00625670 % 3 != 0);
  uVar9 = FUN_00411c20(0);
  if ((DAT_006256f8 == 4) || (DAT_006256f8 == 1)) {
    DAT_00625768 = false;
  }
  else if ((DAT_00625670 != 0) || (DAT_00625768 = false, DAT_006256f8 == 0)) {
    DAT_00625768 = (uVar9 & 0xfffffffd) == 1 || uVar9 == 6;
  }
  DAT_00625690 = FUN_00411be0(0);
  if (uVar9 == 7) {
    FUN_00411c40(DAT_00625690,0x20,1);
  }
  if (1 < DAT_006256d4) {
    pcVar20 = "*=>@|" + (DAT_006256d4 - 2);
    cVar7 = "*=>@|"[DAT_006256d4 - 2];
    while (cVar7 != '\0') {
      pcVar20 = pcVar20 + 1;
      FUN_00411c40(DAT_00625690,(int)cVar7,1);
      cVar7 = *pcVar20;
    }
  }
  DAT_00625688 = FUN_00411be0(0);
  FUN_00411c40(DAT_00625688,0x3a,1);
  if (DAT_006256d8 == '\0') {
LAB_0040397c:
    if ((1 < DAT_006256f4 - 1U) || (bVar24)) {
      if (DAT_006256f8 == 0) goto LAB_0040399d;
    }
    else {
      if (DAT_006256f8 == 0) goto LAB_0040399d;
      DAT_006256f0 = 4;
    }
  }
  else {
    if ((DAT_006256f8 != 0) || (DAT_006256d1 != '\0')) {
      DAT_006256d8 = '\0';
      goto LAB_0040397c;
    }
LAB_0040399d:
    if ((pcVar10 == (char *)0x0) && (pcVar10 = getenv("TIME_STYLE"), pcVar10 == (char *)0x0)) {
      pcVar10 = "locale";
LAB_0040428e:
      lVar17 = FUN_0040acf0(pcVar10,&PTR_s_full_iso_00419fa0,&DAT_00419f90,4);
      if (lVar17 < 0) {
        FUN_0040ae10("time style",pcVar10,lVar17);
        __stream = stderr;
        pcVar20 = (char *)dcgettext(0,"Valid arguments are:\n",5);
        ppuVar22 = &PTR_s_full_iso_00419fa0;
        fputs_unlocked(pcVar20,__stream);
        pcVar20 = "full-iso";
        do {
          ppuVar22 = ppuVar22 + 1;
          __fprintf_chk(stderr,1,"  - [posix-]%s\n",pcVar20);
          param_2 = stderr;
          pcVar20 = *ppuVar22;
        } while (pcVar20 != (char *)0x0);
        pcVar20 = (char *)dcgettext(0,"  - +FORMAT (e.g., +%H:%M) for a \'date\'-style format\n",5);
        fputs_unlocked(pcVar20,param_2);
switchD_004030ee_caseD_ffffff7f:
        FUN_0040a530(2);
        goto LAB_004045ab;
      }
      if (lVar17 == 1) {
        PTR_s__b__e__H__M_00624418 = &DAT_0041b30e;
        PTR_DAT_00624410 = &DAT_0041b30e;
        pcVar10 = PTR_DAT_00624410;
        pcVar20 = PTR_s__b__e__H__M_00624418;
      }
      else {
        pcVar10 = PTR_DAT_00624410;
        pcVar20 = PTR_s__b__e__H__M_00624418;
        if (lVar17 < 2) {
          if (lVar17 == 0) {
            PTR_s__b__e__H__M_00624418 = s__Y__m__d__H__M__S__N__z_0041b2f6;
            PTR_DAT_00624410 = s__Y__m__d__H__M__S__N__z_0041b2f6;
            pcVar10 = PTR_DAT_00624410;
            pcVar20 = PTR_s__b__e__H__M_00624418;
          }
        }
        else if (lVar17 == 2) {
          PTR_DAT_00624410 = s__Y__m__d_0041b31d;
          PTR_s__b__e__H__M_00624418 = &DAT_0041b311;
          pcVar10 = PTR_DAT_00624410;
          pcVar20 = PTR_s__b__e__H__M_00624418;
        }
        else if ((lVar17 == 3) &&
                (cVar7 = FUN_0040c190(2), pcVar10 = PTR_DAT_00624410,
                pcVar20 = PTR_s__b__e__H__M_00624418, cVar7 != '\0')) {
          PTR_DAT_00624410 = (undefined *)dcgettext(0,PTR_DAT_00624410,2);
          pcVar20 = (char *)dcgettext(0,PTR_s__b__e__H__M_00624418,2);
          pcVar10 = PTR_DAT_00624410;
        }
      }
    }
    else {
      while (iVar8 = strncmp(pcVar10,"posix-",6), iVar8 == 0) {
        cVar7 = FUN_0040c190(2);
        if (cVar7 == '\0') goto LAB_004039dc;
        pcVar10 = pcVar10 + 6;
      }
      if (*pcVar10 != '+') goto LAB_0040428e;
LAB_004045ab:
      pcVar10 = pcVar10 + 1;
      pcVar19 = strchr(pcVar10,10);
      pcVar20 = pcVar10;
      if (pcVar19 != (char *)0x0) {
        pcVar20 = strchr(pcVar19 + 1,10);
        if (pcVar20 != (char *)0x0) {
          uVar15 = FUN_00412290(pcVar10);
          uVar16 = dcgettext(0,"invalid time style format %s",5);
          error(2,0,uVar16,uVar15);
LAB_004046b0:
                    /* WARNING: Subroutine does not return */
          __assert_fail("found","src/ls.c",0x638,"main");
        }
        *pcVar19 = '\0';
        pcVar20 = pcVar19 + 1;
      }
    }
    PTR_s__b__e__H__M_00624418 = pcVar20;
    PTR_DAT_00624410 = pcVar10;
    FUN_00404bb0();
  }
LAB_004039dc:
  pcVar10 = (char *)(long)DAT_0062463c;
  if (DAT_006256d2 != '\0') {
    local_50 = (byte *)getenv("LS_COLORS");
    if ((local_50 == (byte *)0x0) || (*local_50 == 0)) {
      pcVar20 = getenv("COLORTERM");
      if ((pcVar20 == (char *)0x0) || (*pcVar20 == '\0')) {
        pcVar20 = getenv("TERM");
        if ((pcVar20 != (char *)0x0) && (*pcVar20 != '\0')) {
          pcVar19 = "# Configuration file for dircolors, a utility to help you set the";
          do {
            iVar8 = strncmp(pcVar19,"TERM ",5);
            if ((iVar8 == 0) && (iVar8 = FUN_004159a0(pcVar19 + 5,pcVar20,0), iVar8 == 0))
            goto LAB_00404088;
            uVar21 = 0xffffffffffffffff;
            pcVar23 = pcVar19;
            do {
              if (uVar21 == 0) break;
              uVar21 = uVar21 - 1;
              cVar7 = *pcVar23;
              pcVar23 = pcVar23 + (ulong)bVar25 * -2 + 1;
            } while (cVar7 != '\0');
            pcVar19 = pcVar19 + ~uVar21;
          } while (pcVar19 + -0x419fe0 < (char *)0x104d);
        }
LAB_00404511:
        DAT_006256d2 = '\0';
      }
    }
    else {
      local_53 = 0x3f3f;
      local_51 = 0;
      DAT_006256c0 = (undefined *)FUN_00412bb0(local_50);
      local_48 = DAT_006256c0;
      do {
        while( true ) {
          while (bVar25 = *local_50, bVar25 == 0x2a) {
            pvVar18 = (void *)FUN_00412980(0x28);
            local_50 = local_50 + 1;
            pvVar13 = pvVar18;
            *(void **)((long)pvVar18 + 0x20) = DAT_006256c8;
            DAT_006256c8 = pvVar13;
            *(undefined **)((long)pvVar18 + 8) = local_48;
            cVar7 = FUN_00404860(&local_48,&local_50,1,pvVar18);
            pbVar5 = local_50;
            if ((cVar7 == '\0') || (pbVar5 = local_50 + 1, *local_50 != 0x3d)) goto LAB_0040402e;
            *(undefined **)((long)pvVar18 + 0x18) = local_48;
            local_50 = local_50 + 1;
            cVar7 = FUN_00404860(&local_48,&local_50,0,(long)pvVar18 + 0x10);
            pbVar5 = local_50;
            if (cVar7 == '\0') goto LAB_0040402e;
          }
          if (bVar25 != 0x3a) break;
          local_50 = local_50 + 1;
        }
        if (bVar25 == 0) goto LAB_0040407a;
        local_53 = local_53 & 0xff00 | (ushort)*local_50;
        pbVar5 = local_50 + 1;
        if (local_50[1] == 0) goto LAB_0040402e;
        local_53 = CONCAT11(local_50[1],*local_50);
        pbVar5 = local_50 + 3;
        if (local_50[2] != 0x3d) goto LAB_0040402e;
        lVar17 = 0;
        pcVar20 = "lc";
        local_50 = local_50 + 3;
        while (iVar8 = strcmp((char *)&local_53,pcVar20), iVar8 != 0) {
          lVar17 = lVar17 + 1;
          pcVar20 = *(char **)(&UNK_00419e80 + lVar17 * 8);
          if (pcVar20 == (char *)0x0) goto LAB_00403fff;
        }
        (&PTR_DAT_00624428)[(long)(int)lVar17 * 2] = local_48;
        cVar7 = FUN_00404860(&local_48,&local_50,0);
      } while (cVar7 != '\0');
LAB_00403fff:
      uVar15 = FUN_00412290(&local_53);
      uVar16 = dcgettext(0,"unrecognized prefix: %s",5);
      error(0,0,uVar16,uVar15);
      pbVar5 = local_50;
LAB_0040402e:
      local_50 = pbVar5;
      uVar15 = dcgettext(0,"unparsable value for LS_COLORS environment variable",5);
      error(0,0,uVar15);
      free(DAT_006256c0);
      pvVar13 = DAT_006256c8;
      while (pvVar13 != (void *)0x0) {
        pvVar18 = *(void **)((long)pvVar13 + 0x20);
        free(pvVar13);
        pvVar13 = pvVar18;
      }
      DAT_006256d2 = '\0';
LAB_0040407a:
      if ((_DAT_00624490 == 6) && (iVar8 = strncmp(PTR_s_01_36_00624498,"target",6), iVar8 == 0)) {
        DAT_00625750 = '\x01';
      }
    }
LAB_00404088:
    if ((DAT_006256d2 != '\0') &&
       (((cVar7 = FUN_00404ae0(0xd), cVar7 != '\0' ||
         ((cVar7 = FUN_00404ae0(0xe), cVar7 != '\0' && (DAT_00625750 != '\0')))) ||
        ((cVar7 = FUN_00404ae0(0xc), cVar7 != '\0' && (DAT_006256f8 == 0)))))) {
      DAT_006256bd = 1;
    }
  }
  if (((DAT_006256b8 == 1) && (DAT_006256b8 = 2, DAT_006256b5 == '\0')) && (DAT_006256d4 != 3)) {
    DAT_006256b8 = (-(uint)(DAT_006256f8 == 0) & 0xfffffffe) + 4;
  }
  if (DAT_006256b6 != '\0') {
    DAT_00625788 = FUN_0040ca80(0x1e,0,FUN_00404800,FUN_00404810,free);
    if (DAT_00625788 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00412bd0();
    }
    _obstack_begin(&DAT_006254a0,0,0,malloc,free);
  }
  pcVar20 = getenv("TZ");
  DAT_00625668 = FUN_00417410(pcVar20);
  if ((((DAT_006256f0 - 2U & 0xfffffffd) == 0) || (DAT_006256f8 == 0)) ||
     ((DAT_00625725 != '\0' || (DAT_006256ec != '\0')))) {
    DAT_00625661 = 1;
    bVar25 = 0;
  }
  else {
    DAT_00625661 = 0;
    bVar25 = 1;
    if (((DAT_006256b6 == '\0') && (DAT_006256d2 == '\0')) && (DAT_006256d4 == 0)) {
      bVar25 = DAT_006256b4;
    }
  }
  DAT_00625660 = bVar25 & 1;
  if (DAT_006256d8 != '\0') {
    _obstack_begin(&DAT_00625560,0,0,malloc,free);
    _obstack_begin(&DAT_00625500,0,0,malloc,free);
  }
  if (DAT_006256d1 != '\0') {
    lVar17 = 0;
    do {
      iVar8 = (int)lVar17;
      if (iVar8 < 0x5b) {
        bVar24 = true;
        if ((iVar8 < 0x41) && (9 < iVar8 - 0x30U)) goto joined_r0x004041a8;
      }
      else {
        bVar24 = true;
        if (0x19 < iVar8 - 0x61U) {
joined_r0x004041a8:
          if ((iVar8 - 0x2dU < 2) || (iVar8 == 0x7e)) {
            bVar24 = true;
          }
          else {
            bVar24 = iVar8 == 0x5f;
          }
        }
      }
      (&DAT_006253a0)[lVar17] = (&DAT_006253a0)[lVar17] | bVar24;
      lVar17 = lVar17 + 1;
    } while (lVar17 != 0x100);
    DAT_00625748 = (undefined *)FUN_00412d40();
    if (DAT_00625748 == (undefined *)0x0) {
      DAT_00625748 = &DAT_0041b08a;
    }
  }
  _DAT_00625778 = 100;
  DAT_00625780 = FUN_00412980(20000);
  iVar8 = param_1 - (int)pcVar10;
  DAT_00625770 = 0;
  FUN_004084b0();
  if (iVar8 < 1) {
    if (DAT_006256b5 == '\0') {
      FUN_00404d90(&DAT_0041d794,0,1);
    }
    else {
      FUN_00408580(&DAT_0041d794,3,1,&DAT_0041b08a);
    }
    if (DAT_00625770 != 0) goto LAB_0040411e;
LAB_00403d0d:
    if (DAT_00625740 == (void **)0x0) goto LAB_00403c40;
    if (DAT_00625740[3] == (void *)0x0) {
      DAT_00625678 = 0;
    }
  }
  else {
    do {
      lVar17 = (long)pcVar10 * 2;
      pcVar10 = pcVar10 + 1;
      FUN_00408580(*(undefined *)(&param_2->_flags + lVar17),0,1,&DAT_0041b08a);
    } while ((int)pcVar10 < param_1);
    if (DAT_00625770 == 0) {
LAB_00403b1c:
      if (iVar8 < 2) goto LAB_00403d0d;
    }
    else {
LAB_0040411e:
      FUN_00404f40();
      if (DAT_006256b5 == '\0') {
        FUN_00405140(0,1);
      }
      if (DAT_00625770 == 0) goto LAB_00403b1c;
      FUN_00407ca0();
      if (DAT_00625740 == (void **)0x0) goto LAB_00403c40;
      pcVar10 = stdout->_IO_write_ptr;
      if (stdout->_IO_write_end < pcVar10 || stdout->_IO_write_end == pcVar10) {
        __overflow(stdout,10);
      }
      else {
        stdout->_IO_write_ptr = pcVar10 + 1;
        *pcVar10 = '\n';
      }
      DAT_006255b8 = DAT_006255b8 + 1;
    }
  }
  while (__ptr = DAT_00625740, DAT_00625740 != (void **)0x0) {
    ppvVar3 = (void **)DAT_00625740[3];
    pvVar13 = *DAT_00625740;
    if ((DAT_00625788 == 0) || (pvVar13 != (void *)0x0)) {
      ppvVar1 = DAT_00625740 + 2;
      ppvVar2 = DAT_00625740 + 1;
      DAT_00625740 = ppvVar3;
      FUN_004092a0(pvVar13,*ppvVar2,*(undefined *)ppvVar1);
      free(*__ptr);
      free(__ptr[1]);
      free(__ptr);
      DAT_00625678 = 1;
    }
    else {
      DAT_00625740 = ppvVar3;
      if ((ulong)(DAT_006254b8 - _DAT_006254b0) < 0x10) {
LAB_004046e2:
                    /* WARNING: Subroutine does not return */
        __assert_fail("dev_ino_size <= obstack_object_size (&dev_ino_obstack)","src/ls.c",0x402,
                      "dev_ino_pop");
      }
      local_48 = *(undefined **)(DAT_006254b8 + -0x10);
      local_40 = *(undefined *)(DAT_006254b8 + -8);
      DAT_006254b8 = DAT_006254b8 + -0x10;
      pvVar13 = (void *)FUN_0040d260(DAT_00625788,&local_48);
      if (pvVar13 == (void *)0x0) goto LAB_004046b0;
      free(pvVar13);
      free(*__ptr);
      free(__ptr[1]);
      free(__ptr);
    }
  }
LAB_00403c40:
  if ((DAT_006256d2 != '\0') && (DAT_006256d0 != '\0')) {
    if ((_DAT_00624420 != 2) ||
       (((*(short *)PTR_DAT_00624428 != 0x5b1b || (_DAT_00624430 != 1)) ||
        (*PTR_DAT_00624438 != 'm')))) {
      FUN_00405d40();
    }
    fflush_unlocked(stdout);
    FUN_00405af0(0);
    for (iVar8 = DAT_006255d4; iVar8 != 0; iVar8 = iVar8 + -1) {
      raise(0x13);
    }
    if (DAT_006255d8 != 0) {
      raise(DAT_006255d8);
    }
  }
  if (DAT_006256d8 != '\0') {
    FUN_00405390("//DIRED//",&DAT_00625560);
    FUN_00405390("//SUBDIRED//",&DAT_00625500);
    uVar9 = FUN_00411c20(DAT_00625690);
    __printf_chk(1,"//DIRED-OPTIONS// --quoting-style=%s\n",(&PTR_s_literal_0041ea00)[uVar9]);
  }
  lVar17 = DAT_00625788;
  if (DAT_00625788 != 0) {
    lVar14 = FUN_0040c5f0(DAT_00625788);
    if (lVar14 != 0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("hash_get_n_entries (active_dir_set) == 0","src/ls.c",0x66c,"main");
    }
    FUN_0040ccc0(lVar17);
  }
  return DAT_006255d0;
switchD_004030ee_caseD_90:
  pcVar10 = DAT_00625970;
  goto LAB_004030b8;
}


void FUN_00404720(undefined param_1,undefined param_2,undefined param_3)

{
  undefined unaff_retaddr;
  undefined auStack_8 [8];
  
  (*(code *)PTR___libc_start_main_00623ff0)
            (FUN_00402e90,unaff_retaddr,&stack0x00000008,FUN_00418710,FUN_00418770,param_3,auStack_8
            );
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* WARNING: Removing unreachable block (ram,0x00404758) */
/* WARNING: Removing unreachable block (ram,0x00404762) */

void FUN_0040474b(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00404799) */

void FUN_0040476a(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x004047d6) */

void FUN_004047a1(void)

{
  if (DAT_00624688 != '\0') {
    return;
  }
  FUN_0040474b();
  DAT_00624688 = 1;
  return;
}


/* WARNING: Removing unreachable block (ram,0x00404799) */

void thunk_FUN_0040476a(void)

{
  return;
}


ulong FUN_00404800(ulong *param_1,ulong param_2)

{
  return *param_1 % param_2;
}


ulong FUN_00404810(long *param_1,long *param_2)

{
  if (*param_1 != *param_2) {
    return 0;
  }
  return param_2[1] & 0xffffffffffffff00U | (ulong)(param_1[1] == param_2[1]);
}


void FUN_00404830(int param_1)

{
  if (DAT_006255d8 == 0) {
    DAT_006255d8 = param_1;
  }
  return;
}


undefined FUN_00404860(byte **param_1,byte **param_2,undefined param_3,long *param_4)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  long lVar7;
  byte bVar8;
  ulong uVar9;
  bool bVar10;
  
  pbVar4 = *param_2;
  lVar7 = 0;
  pbVar6 = *param_1;
LAB_004048a2:
  do {
    bVar2 = *pbVar4;
    cVar1 = bVar2 - 0x3d;
    bVar10 = bVar2 == 0x3d;
    pbVar5 = pbVar4;
    if (bVar10) goto LAB_00404935;
    while (bVar10 || SBORROW1(bVar2,'=') != cVar1 < '\0') {
      if ((bVar2 == 0) || (bVar2 == 0x3a)) {
        param_3 = 1;
        goto LAB_004048d8;
      }
LAB_00404919:
      while( true ) {
        pbVar5 = pbVar5 + 1;
        *pbVar6 = bVar2;
        lVar7 = lVar7 + 1;
        pbVar6 = pbVar6 + 1;
        bVar2 = *pbVar5;
        cVar1 = bVar2 - 0x3d;
        bVar10 = cVar1 == '\0';
        if (!bVar10) break;
LAB_00404935:
        if ((char)param_3 != '\0') goto LAB_004048d8;
      }
    }
    if (bVar2 != 0x5c) {
      if (bVar2 != 0x5e) goto LAB_00404919;
      bVar2 = pbVar5[1];
      pbVar4 = pbVar5 + 1;
      if ((byte)(bVar2 - 0x40) < 0x3f) {
        pbVar4 = pbVar5 + 2;
        bVar2 = bVar2 & 0x1f;
        goto switchD_00404902_caseD_1;
      }
      if (bVar2 != 0x3f) {
switchD_00404902_caseD_0:
        param_3 = 0;
        pbVar5 = pbVar4;
LAB_004048d8:
        *param_1 = pbVar6;
        *param_2 = pbVar5;
        *param_4 = lVar7;
        return param_3;
      }
      *pbVar6 = 0x7f;
      lVar7 = lVar7 + 1;
      pbVar6 = pbVar6 + 1;
      goto LAB_004048a2;
    }
    bVar2 = pbVar5[1];
    pbVar4 = pbVar5 + 2;
    switch(bVar2) {
    case 0:
      goto switchD_00404902_caseD_0;
    default:
      break;
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
      bVar2 = bVar2 - 0x30;
      bVar3 = *pbVar4;
      while ((byte)(bVar3 - 0x30) < 8) {
        pbVar4 = pbVar4 + 1;
        bVar2 = (bVar3 - 0x30) + bVar2 * '\b';
        bVar3 = *pbVar4;
      }
      break;
    case 0x3f:
      bVar2 = 0x7f;
      break;
    case 0x58:
    case 0x78:
      goto switchD_00404902_caseD_58;
    case 0x5f:
      bVar2 = 0x20;
      break;
    case 0x61:
      bVar2 = 7;
      break;
    case 0x62:
      bVar2 = 8;
      break;
    case 0x65:
      bVar2 = 0x1b;
      break;
    case 0x66:
      bVar2 = 0xc;
      break;
    case 0x6e:
      bVar2 = 10;
      break;
    case 0x72:
      bVar2 = 0xd;
      break;
    case 0x74:
      bVar2 = 9;
      break;
    case 0x76:
      bVar2 = 0xb;
    }
switchD_00404902_caseD_1:
    *pbVar6 = bVar2;
    lVar7 = lVar7 + 1;
    pbVar6 = pbVar6 + 1;
  } while( true );
switchD_00404902_caseD_58:
  bVar2 = 0;
LAB_004049a8:
  bVar8 = *pbVar4;
  bVar3 = bVar8 - 0x30;
  if (bVar3 < 0x37) {
    while (uVar9 = 1L << (bVar3 & 0x3f), (uVar9 & 0x7e0000) == 0) {
      if ((uVar9 & 0x7e000000000000) != 0) {
        pbVar4 = pbVar4 + 1;
        bVar2 = bVar8 + 0xa9 + bVar2 * '\x10';
        goto LAB_004049a8;
      }
      if ((uVar9 & 0x3ff) == 0) goto LAB_00404a00;
      pbVar4 = pbVar4 + 1;
      bVar2 = (bVar8 - 0x30) + bVar2 * '\x10';
      bVar8 = *pbVar4;
      bVar3 = bVar8 - 0x30;
      if (0x36 < bVar3) goto LAB_00404a00;
    }
    pbVar4 = pbVar4 + 1;
    bVar2 = (bVar8 - 0x37) + bVar2 * '\x10';
    goto LAB_004049a8;
  }
LAB_00404a00:
  *pbVar6 = bVar2;
  lVar7 = lVar7 + 1;
  pbVar6 = pbVar6 + 1;
  goto LAB_004048a2;
}


bool FUN_00404ae0(uint param_1)

{
  ulong uVar1;
  bool bVar2;
  long lVar3;
  byte *pbVar4;
  byte *pbVar5;
  bool bVar6;
  bool bVar7;
  
  bVar2 = false;
  uVar1 = *(ulong *)(&DAT_00624420 + (ulong)param_1 * 0x10);
  if (uVar1 != 0) {
    if (uVar1 == 1) {
      return *(&PTR_DAT_00624428)[(ulong)param_1 * 2] != 0x30;
    }
    bVar2 = true;
    bVar6 = uVar1 < 2;
    bVar7 = uVar1 == 2;
    if (bVar7) {
      lVar3 = 2;
      pbVar4 = (&PTR_DAT_00624428)[(ulong)param_1 * 2];
      pbVar5 = &DAT_0041b02d;
      do {
        if (lVar3 == 0) break;
        lVar3 = lVar3 + -1;
        bVar6 = *pbVar4 < *pbVar5;
        bVar7 = *pbVar4 == *pbVar5;
        pbVar4 = pbVar4 + 1;
        pbVar5 = pbVar5 + 1;
      } while (bVar7);
      return (!bVar6 && !bVar7) != bVar6;
    }
  }
  return bVar2;
}


undefined FUN_00404b40(undefined param_1)

{
  int iVar1;
  undefined local_10 [2];
  
  iVar1 = FUN_004132b0(param_1,0,0,local_10,&DAT_0041b08a);
  if (iVar1 == 0) {
    DAT_00625670 = local_10[0];
    return 1;
  }
  if (iVar1 == 1) {
    DAT_00625670 = 0xffffffffffffffff;
    return 1;
  }
  return 0;
}


void FUN_00404bb0(void)

{
  long lVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  ulong uVar7;
  char cVar8;
  undefined *puVar9;
  char **ppcVar10;
  ulong uVar11;
  long lVar12;
  int __item;
  ulong uVar13;
  ulong local_650;
  char *local_648;
  long local_640;
  undefined local_638 [1536];
  undefined local_38 [8];
  
  lVar12 = 0;
  do {
    pcVar5 = *(char **)((long)&PTR_DAT_00624410 + lVar12);
    cVar3 = *pcVar5;
    while (cVar3 != '\0') {
      cVar8 = pcVar5[1];
      if (cVar3 == '%') {
        if (cVar8 == '%') {
          cVar8 = pcVar5[2];
          pcVar5 = pcVar5 + 1;
        }
        else if (cVar8 == 'b') goto LAB_00404bfe;
      }
      pcVar5 = pcVar5 + 1;
      cVar3 = cVar8;
    }
    pcVar5 = (char *)0x0;
LAB_00404bfe:
    *(char **)((long)&local_648 + lVar12) = pcVar5;
    lVar12 = lVar12 + 8;
    if (lVar12 == 0x10) {
      uVar13 = 5;
      if ((local_648 != (char *)0x0) || (local_640 != 0)) {
        do {
          puVar9 = local_638;
          __item = 0x2000e;
          uVar11 = 0;
          do {
            local_650 = uVar13;
            pcVar5 = nl_langinfo(__item);
            pcVar6 = strchr(pcVar5,0x25);
            if (pcVar6 != (char *)0x0) {
              return;
            }
            uVar7 = FUN_0040e570(pcVar5,puVar9,0x80,&local_650,0,0);
            if (0x7f < uVar7) {
              return;
            }
            if (uVar11 < local_650) {
              uVar11 = local_650;
            }
            puVar9 = puVar9 + 0x80;
            __item = __item + 1;
          } while (puVar9 != local_38);
          bVar2 = uVar11 < uVar13;
          uVar13 = uVar11;
        } while (bVar2);
        ppcVar10 = &local_648;
        lVar12 = 0;
        do {
          lVar1 = *(long *)((long)&PTR_DAT_00624410 + lVar12);
          puVar9 = local_638;
          pcVar5 = &DAT_006247a0 + lVar12 * 0xc0;
          do {
            pcVar6 = *ppcVar10;
            if (pcVar6 == (char *)0x0) {
              uVar4 = snprintf(pcVar5,0x80,"%s",lVar1);
            }
            else {
              if (0x80 < (long)pcVar6 - lVar1) {
                return;
              }
              uVar4 = __snprintf_chk(pcVar5,0x80,1,0xffffffffffffffff,"%.*s%s%s",
                                     (long)pcVar6 - lVar1,lVar1,puVar9,pcVar6 + 2);
            }
            if (0x7f < uVar4) {
              return;
            }
            puVar9 = puVar9 + 0x80;
            pcVar5 = pcVar5 + 0x80;
          } while (puVar9 != local_38);
          lVar12 = lVar12 + 8;
          ppcVar10 = ppcVar10 + 1;
        } while (lVar12 != 0x10);
        DAT_00624788 = 1;
      }
      return;
    }
  } while( true );
}


void FUN_00404d90(long param_1,long param_2,undefined param_3)

{
  undefined *puVar1;
  undefined uVar2;
  
  puVar1 = (undefined *)FUN_00412980(0x20);
  uVar2 = 0;
  if (param_2 != 0) {
    uVar2 = FUN_00412bb0(param_2);
  }
  puVar1[1] = uVar2;
  uVar2 = 0;
  if (param_1 != 0) {
    uVar2 = FUN_00412bb0(param_1);
  }
  *puVar1 = uVar2;
  *(undefined *)(puVar1 + 2) = param_3;
  puVar1[3] = DAT_00625740;
  DAT_00625740 = puVar1;
  return;
}


void FUN_00404e00(char **param_1,char **param_2)

{
  strcmp(*param_1,*param_2);
  return;
}


void FUN_00404e10(char **param_1,char **param_2)

{
  strcmp(*param_2,*param_1);
  return;
}


ulong FUN_00404e20(char *param_1)

{
  size_t sVar1;
  size_t sVar2;
  char local_1a [10];
  
  sVar1 = FUN_00411cd0(local_1a,2,param_1,0xffffffffffffffff,DAT_00625690);
  if (*param_1 != local_1a[0]) {
    return 1;
  }
  sVar2 = strlen(param_1);
  return sVar2 & 0xffffffffffffff00 | (ulong)(sVar2 != sVar1);
}


byte * FUN_00404e80(byte *param_1,char param_2)

{
  byte bVar1;
  undefined auVar2 [16];
  size_t sVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  sVar3 = strlen((char *)param_1);
  auVar2 = ZEXT816(3) * ZEXT816(sVar3 + 1);
  if ((SUB168(auVar2,0) < 0) || (SUB168(auVar2 >> 0x40,0) != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00412bd0();
  }
  pbVar4 = (byte *)FUN_00412980((sVar3 + 1) * 3);
  pbVar6 = pbVar4;
LAB_00404ecd:
  do {
    bVar1 = *param_1;
    pbVar5 = pbVar6;
    while( true ) {
      if (bVar1 == 0) {
        *pbVar5 = 0;
        return pbVar4;
      }
      param_1 = param_1 + 1;
      if ((bVar1 == 0x2f) && (param_2 != '\0')) {
        *pbVar5 = 0x2f;
        pbVar6 = pbVar5 + 1;
        goto LAB_00404ecd;
      }
      if ((&DAT_006253a0)[bVar1] == '\0') break;
      *pbVar5 = bVar1;
      bVar1 = *param_1;
      pbVar5 = pbVar5 + 1;
    }
    pbVar6 = pbVar5 + 3;
    __sprintf_chk(pbVar5,1,0xffffffffffffffff,"%%%02x",(ulong)bVar1);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404f40(void)

{
  long *plVar1;
  undefined auVar2 [16];
  int iVar3;
  ulong uVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  int iVar8;
  long lVar9;
  
  uVar4 = DAT_00625770;
  if (_DAT_00625758 < (DAT_00625770 >> 1) + DAT_00625770) {
    free(DAT_00625760);
    auVar2 = ZEXT816(0x18) * ZEXT816(uVar4);
    if (SUB168(auVar2,0) < 0 || SUB168(auVar2 >> 0x40,0) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00412bd0();
    }
    DAT_00625760 = (long *)FUN_00412980(uVar4 * 0x18);
    _DAT_00625758 = DAT_00625770 * 3;
  }
  if (DAT_00625770 != 0) {
    plVar1 = DAT_00625760 + DAT_00625770;
    plVar6 = DAT_00625760;
    lVar9 = DAT_00625780;
    do {
      *plVar6 = lVar9;
      plVar6 = plVar6 + 1;
      lVar9 = lVar9 + 200;
    } while (plVar1 != plVar6);
  }
  if (DAT_006256f0 != -1) {
    iVar5 = _setjmp((__jmp_buf_tag *)&DAT_006246c0);
    uVar4 = DAT_00625770;
    plVar1 = DAT_00625760;
    iVar3 = DAT_006256f0;
    if (iVar5 != 0) {
      if (DAT_006256f0 == 3) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("sort_type != sort_version","src/ls.c",0xee5,"sort_files");
      }
      if (DAT_00625770 != 0) {
        plVar6 = DAT_00625760 + DAT_00625770;
        plVar7 = DAT_00625760;
        lVar9 = DAT_00625780;
        do {
          *plVar7 = lVar9;
          plVar7 = plVar7 + 1;
          lVar9 = lVar9 + 200;
        } while (plVar7 != plVar6);
      }
      iVar5 = 1;
    }
    iVar8 = 0;
    if (iVar3 == 4) {
      iVar8 = DAT_006256f4;
    }
    FUN_0040edd0(plVar1,uVar4,
                 (&PTR_FUN_00419580)
                 [(ulong)DAT_006256b4 +
                  ((ulong)DAT_006256ef + ((long)iVar5 + (ulong)(uint)(iVar8 + iVar3) * 2) * 2) * 2])
    ;
  }
  return;
}


void FUN_004050d0(char *param_1,char *param_2)

{
  int *piVar1;
  
  piVar1 = __errno_location();
  *piVar1 = 0;
  strcoll(param_1,param_2);
  return;
}


void FUN_00405100(char **param_1,char **param_2)

{
  char *__s2;
  char *__s1;
  int *piVar1;
  
  __s2 = *param_2;
  __s1 = *param_1;
  piVar1 = __errno_location();
  *piVar1 = 0;
  strcoll(__s1,__s2);
  return;
}


void FUN_00405110(char **param_1,char **param_2)

{
  char *__s2;
  char *__s1;
  int *piVar1;
  
  __s2 = *param_1;
  __s1 = *param_2;
  piVar1 = __errno_location();
  *piVar1 = 0;
  strcoll(__s1,__s2);
  return;
}


void FUN_00405120(undefined *param_1,undefined *param_2)

{
  FUN_0040bd40(*param_2,*param_1);
  return;
}


void FUN_00405130(undefined *param_1,undefined *param_2)

{
  FUN_0040bd40(*param_1,*param_2);
  return;
}


void FUN_00405140(long param_1,undefined param_2)

{
  long *plVar1;
  int iVar2;
  char **ppcVar3;
  char *pcVar4;
  long lVar5;
  long *plVar6;
  char *pcVar7;
  void *__ptr;
  long *plVar8;
  
  plVar6 = DAT_00625760;
  lVar5 = DAT_00625770;
  if ((param_1 != 0) && (DAT_00625788 != 0)) {
    FUN_00404d90(0,param_1,0);
    plVar6 = DAT_00625760;
    lVar5 = DAT_00625770;
  }
joined_r0x00405180:
  do {
    lVar5 = lVar5 + -1;
    DAT_00625760 = plVar6;
    if (lVar5 == -1) {
      if (DAT_00625770 != 0) {
        plVar1 = plVar6 + DAT_00625770;
        DAT_00625770 = 0;
        plVar8 = plVar6;
        do {
          iVar2 = *(int *)(*plVar8 + 0xa8);
          plVar6[DAT_00625770] = *plVar8;
          plVar8 = plVar8 + 1;
          DAT_00625770 = DAT_00625770 + (ulong)(iVar2 != 9);
        } while (plVar1 != plVar8);
      }
      return;
    }
    ppcVar3 = (char **)plVar6[lVar5];
  } while ((*(int *)(ppcVar3 + 0x15) != 3) && (*(int *)(ppcVar3 + 0x15) != 9));
  pcVar4 = *ppcVar3;
  if (param_1 != 0) goto code_r0x004051ae;
  goto LAB_00405280;
code_r0x004051ae:
  pcVar7 = (char *)FUN_0040b870(pcVar4);
  if ((*pcVar7 != '.') ||
     ((plVar6 = DAT_00625760, pcVar7[(ulong)(pcVar7[1] == '.') + 1] != '\0' &&
      (pcVar7[(ulong)(pcVar7[1] == '.') + 1] != '/')))) {
    if (*pcVar4 == '/') {
LAB_00405280:
      FUN_00404d90(pcVar4,ppcVar3[1],param_2);
    }
    else {
      __ptr = (void *)FUN_0040bb70(param_1,pcVar4,0);
      FUN_00404d90(__ptr,ppcVar3[1],param_2);
      free(__ptr);
    }
    plVar6 = DAT_00625760;
    if (*(int *)(ppcVar3 + 0x15) == 9) {
      free(*ppcVar3);
      free(ppcVar3[1]);
      free(ppcVar3[2]);
      plVar6 = DAT_00625760;
    }
  }
  goto joined_r0x00405180;
}


char * FUN_004052c0(ulong param_1,ulong param_2)

{
  ulong uVar1;
  uint uVar2;
  char *in_RAX;
  char *pcVar3;
  ulong uVar5;
  char *pcVar4;
  
  if (param_2 <= param_1) {
    return in_RAX;
  }
  do {
    while( true ) {
      uVar5 = DAT_00625680;
      uVar1 = param_1 + 1;
      pcVar3 = stdout->_IO_write_ptr;
      if ((DAT_00625680 == 0) || (param_2 / DAT_00625680 <= uVar1 / DAT_00625680)) break;
      if (pcVar3 < stdout->_IO_write_end) {
        stdout->_IO_write_ptr = pcVar3 + 1;
        *pcVar3 = '\t';
      }
      else {
        __overflow(stdout,9);
        uVar5 = DAT_00625680;
      }
      pcVar3 = (char *)(param_1 / uVar5);
      param_1 = (uVar5 + param_1) - param_1 % uVar5;
      if (param_2 <= param_1) {
        return pcVar3;
      }
    }
    if (pcVar3 < stdout->_IO_write_end) {
      pcVar4 = pcVar3 + 1;
      stdout->_IO_write_ptr = pcVar4;
      *pcVar3 = ' ';
    }
    else {
      uVar2 = __overflow(stdout,0x20);
      pcVar4 = (char *)(ulong)uVar2;
    }
    param_1 = uVar1;
  } while (uVar1 < param_2);
  return pcVar4;
}


void FUN_00405390(char *param_1,long param_2)

{
  undefined uVar1;
  char *pcVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar5 = *(undefined **)(param_2 + 0x18);
  puVar4 = *(undefined **)(param_2 + 0x10);
  if (7 < (ulong)((long)puVar5 - (long)puVar4)) {
    if (puVar5 == puVar4) {
      *(byte *)(param_2 + 0x50) = *(byte *)(param_2 + 0x50) | 2;
    }
    uVar3 = (long)puVar5 + *(ulong *)(param_2 + 0x30) & ~*(ulong *)(param_2 + 0x30);
    if (*(ulong *)(param_2 + 0x20) - *(long *)(param_2 + 8) < uVar3 - *(long *)(param_2 + 8)) {
      uVar3 = *(ulong *)(param_2 + 0x20);
    }
    puVar5 = (undefined *)(((long)puVar5 - (long)puVar4 & 0xfffffffffffffff8U) + (long)puVar4);
    *(ulong *)(param_2 + 0x18) = uVar3;
    *(ulong *)(param_2 + 0x10) = uVar3;
    fputs_unlocked(param_1,stdout);
    do {
      uVar1 = *puVar4;
      puVar4 = puVar4 + 1;
      __printf_chk(1,&DAT_0041b063,uVar1);
    } while (puVar5 != puVar4);
    pcVar2 = stdout->_IO_write_ptr;
    if (stdout->_IO_write_end <= pcVar2) {
      __overflow(stdout,10);
      return;
    }
    stdout->_IO_write_ptr = pcVar2 + 1;
    *pcVar2 = '\n';
  }
  return;
}


void FUN_00405460(char *param_1,undefined param_2,undefined param_3)

{
  char *pcVar1;
  int iVar2;
  size_t sVar3;
  long lVar4;
  
  if (param_1 == (char *)0x0) {
    __printf_chk(1,"%*lu ",param_3,param_2);
    lVar4 = (long)(int)param_3;
  }
  else {
    iVar2 = FUN_0040eb70(param_1,0);
    iVar2 = (int)param_3 - iVar2;
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    fputs_unlocked(param_1,stdout);
    sVar3 = strlen(param_1);
    lVar4 = (long)iVar2 + sVar3;
    do {
      pcVar1 = stdout->_IO_write_ptr;
      if (pcVar1 < stdout->_IO_write_end) {
        stdout->_IO_write_ptr = pcVar1 + 1;
        *pcVar1 = ' ';
      }
      else {
        __overflow(stdout,0x20);
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != -1);
  }
  DAT_006255b8 = lVar4 + 1 + DAT_006255b8;
  return;
}


void FUN_00405520(undefined param_1,undefined param_2,char param_3)

{
  undefined *puVar1;
  
  puVar1 = &DAT_0041b06e;
  if ((param_3 != '\0') && (puVar1 = (undefined *)0x0, DAT_006256ed == '\0')) {
    puVar1 = (undefined *)FUN_0040e160();
  }
  FUN_00405460(puVar1,param_1,param_2);
  return;
}


void FUN_00405560(void)

{
  if (DAT_006255d8 == 0) {
    DAT_006255d4 = DAT_006255d4 + 1;
  }
  return;
}


void FUN_00405580(char param_1,undefined param_2,undefined param_3)

{
  undefined uVar1;
  int *piVar2;
  
  uVar1 = FUN_00412040(4,param_3);
  piVar2 = __errno_location();
  error(0,*piVar2,param_2,uVar1);
  if (param_1 == '\0') {
    if (DAT_006255d0 == 0) {
      DAT_006255d0 = 1;
      return;
    }
  }
  else {
    DAT_006255d0 = 2;
  }
  return;
}


uint FUN_004055f0(char **param_1,char **param_2)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  bool bVar4;
  
  pcVar1 = param_2[9];
  pcVar2 = param_1[9];
  bVar4 = param_1[9] != pcVar1;
  if (bVar4 && (long)pcVar1 <= (long)pcVar2) {
    return 0xffffffff;
  }
  if (!bVar4) {
    uVar3 = strcmp(*param_1,*param_2);
    return uVar3;
  }
  return (uint)((long)pcVar2 < (long)pcVar1);
}


int FUN_00405630(char **param_1,char **param_2)

{
  int iVar1;
  char *__s2;
  char *__s1;
  int iVar2;
  int *piVar3;
  
  iVar2 = *(int *)(param_1 + 0x15);
  iVar1 = *(int *)(param_2 + 0x15);
  if ((iVar1 != 9 && iVar1 != 3) && (iVar2 == 3 || iVar2 == 9)) {
    return -1;
  }
  if ((iVar2 != 3 && iVar2 != 9) && (iVar1 == 9 || iVar1 == 3)) {
    return 1;
  }
  __s2 = *param_2;
  __s1 = *param_1;
  piVar3 = __errno_location();
  *piVar3 = 0;
  iVar2 = strcoll(__s1,__s2);
  return iVar2;
}


int FUN_00405690(char **param_1,char **param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x15);
  iVar1 = *(int *)(param_2 + 0x15);
  if ((iVar1 == 3 || iVar1 == 9) || (iVar2 != 3 && iVar2 != 9)) {
    if ((iVar2 == 3 || iVar2 == 9) || (iVar2 = 1, iVar1 != 3 && iVar1 != 9)) {
      iVar2 = strcmp(*param_1,*param_2);
      return iVar2;
    }
  }
  else {
    iVar2 = -1;
  }
  return iVar2;
}


int FUN_004056f0(char **param_1,char **param_2)

{
  int iVar1;
  char *__s2;
  char *__s1;
  int iVar2;
  int *piVar3;
  
  iVar2 = *(int *)(param_1 + 0x15);
  iVar1 = *(int *)(param_2 + 0x15);
  if ((iVar1 != 9 && iVar1 != 3) && (iVar2 == 3 || iVar2 == 9)) {
    return -1;
  }
  if ((iVar2 != 3 && iVar2 != 9) && (iVar1 == 9 || iVar1 == 3)) {
    return 1;
  }
  __s2 = *param_1;
  __s1 = *param_2;
  piVar3 = __errno_location();
  *piVar3 = 0;
  iVar2 = strcoll(__s1,__s2);
  return iVar2;
}


int FUN_00405750(char **param_1,char **param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x15);
  iVar1 = *(int *)(param_2 + 0x15);
  if ((iVar1 == 3 || iVar1 == 9) || (iVar2 != 3 && iVar2 != 9)) {
    if ((iVar2 == 3 || iVar2 == 9) || (iVar2 = 1, iVar1 != 3 && iVar1 != 9)) {
      iVar2 = strcmp(*param_2,*param_1);
      return iVar2;
    }
  }
  else {
    iVar2 = -1;
  }
  return iVar2;
}


byte FUN_004057b0(char param_1,uint param_2,int param_3)

{
  byte bVar1;
  bool bVar2;
  
  if (param_1 == '\0') {
    if (param_3 == 5) {
      return 0;
    }
    bVar2 = param_3 == 3 || param_3 == 9;
  }
  else {
    if ((param_2 & 0xf000) == 0x8000) {
      if (DAT_006256d4 != 3) {
        return 0;
      }
      return ~-((param_2 & 0x49) == 0) & 0x2a;
    }
    bVar2 = (param_2 & 0xf000) == 0x4000;
  }
  bVar1 = 0x2f;
  if ((!bVar2) && (bVar1 = 0, DAT_006256d4 != 1)) {
    if (param_1 == '\0') {
      if (param_3 == 6) {
        return 0x40;
      }
      if (param_3 == 1) {
        return 0x7c;
      }
      bVar2 = param_3 == 7;
    }
    else {
      param_2 = param_2 & 0xf000;
      if (param_2 == 0xa000) {
        return 0x40;
      }
      if (param_2 == 0x1000) {
        return 0x7c;
      }
      bVar2 = param_2 == 0xc000;
    }
    bVar1 = -bVar2 & 0x3d;
  }
  return bVar1;
}


ulong FUN_004058a0(undefined param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined extraout_var;
  char *pcVar4;
  
  pcVar3 = (char *)FUN_004057b0(param_1);
  cVar1 = (char)pcVar3;
  pcVar4 = pcVar3;
  if (cVar1 != '\0') {
    pcVar4 = stdout->_IO_write_ptr;
    if (pcVar4 < stdout->_IO_write_end) {
      stdout->_IO_write_ptr = pcVar4 + 1;
      *pcVar4 = cVar1;
    }
    else {
      iVar2 = __overflow(stdout,(uint)pcVar3 & 0xff);
      pcVar4 = (char *)CONCAT44(extraout_var,iVar2);
    }
    DAT_006255b8 = DAT_006255b8 + 1;
  }
  return (ulong)pcVar4 & 0xffffffffffffff00 | (ulong)(cVar1 != '\0');
}


int FUN_004058f0(char **param_1,char **param_2)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  iVar4 = *(int *)(param_2 + 0x15);
  bVar5 = *(int *)(param_1 + 0x15) == 3 || *(int *)(param_1 + 0x15) == 9;
  if ((iVar4 != 9 && iVar4 != 3) && (bVar5)) {
    return -1;
  }
  if ((bVar5) || (iVar3 = 1, iVar4 != 9 && iVar4 != 3)) {
    pcVar1 = param_2[0xc];
    pcVar2 = param_1[0xc];
    if (param_1[0xc] != pcVar1 && (long)pcVar1 <= (long)pcVar2) {
      return -1;
    }
    if ((long)pcVar2 < (long)pcVar1) {
      return 1;
    }
    iVar3 = (int)param_2[0xd] - *(int *)(param_1 + 0xd);
    if (iVar3 == 0) {
      iVar4 = strcmp(*param_1,*param_2);
      return iVar4;
    }
  }
  return iVar3;
}


undefined FUN_00405970(undefined *param_1,undefined *param_2)

{
  int iVar1;
  int iVar2;
  undefined uVar3;
  
  iVar1 = *(int *)(param_1 + 0x15);
  iVar2 = *(int *)(param_2 + 0x15);
  if ((iVar2 == 9 || iVar2 == 3) || (iVar1 != 3 && iVar1 != 9)) {
    if ((iVar1 == 3 || iVar1 == 9) || (uVar3 = 1, iVar2 != 9 && iVar2 != 3)) {
      uVar3 = FUN_0040bd40(*param_2,*param_1);
      return uVar3;
    }
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}


undefined FUN_004059d0(undefined *param_1,undefined *param_2)

{
  int iVar1;
  int iVar2;
  undefined uVar3;
  
  iVar1 = *(int *)(param_1 + 0x15);
  iVar2 = *(int *)(param_2 + 0x15);
  if ((iVar2 == 9 || iVar2 == 3) || (iVar1 != 3 && iVar1 != 9)) {
    if ((iVar1 == 3 || iVar1 == 9) || (uVar3 = 1, iVar2 != 9 && iVar2 != 3)) {
      uVar3 = FUN_0040bd40(*param_1,*param_2);
      return uVar3;
    }
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}


int FUN_00405a30(char **param_1,char **param_2)

{
  int iVar1;
  char *__s;
  char *__s_00;
  int iVar2;
  char *__s1;
  char *__s2;
  
  iVar2 = *(int *)(param_1 + 0x15);
  iVar1 = *(int *)(param_2 + 0x15);
  if ((iVar1 != 9 && iVar1 != 3) && (iVar2 == 3 || iVar2 == 9)) {
    return -1;
  }
  if ((iVar2 != 3 && iVar2 != 9) && (iVar1 == 9 || iVar1 == 3)) {
    return 1;
  }
  __s = *param_2;
  __s1 = strrchr(__s,0x2e);
  __s_00 = *param_1;
  __s2 = strrchr(__s_00,0x2e);
  if (__s2 == (char *)0x0) {
    __s2 = "";
    if (__s1 == (char *)0x0) goto LAB_00405aca;
  }
  else if (__s1 == (char *)0x0) {
    __s1 = "";
  }
  iVar2 = strcmp(__s1,__s2);
  if (iVar2 != 0) {
    return iVar2;
  }
LAB_00405aca:
  iVar2 = strcmp(__s,__s_00);
  return iVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405af0(char param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined local_b8 [12];
  undefined uStack_ac;
  undefined uStack_a8;
  undefined uStack_a4;
  undefined local_a0;
  undefined uStack_9c;
  undefined uStack_98;
  undefined uStack_94;
  undefined local_90;
  undefined uStack_8c;
  undefined uStack_88;
  undefined uStack_84;
  undefined local_80;
  undefined uStack_7c;
  undefined uStack_78;
  undefined uStack_74;
  undefined local_70;
  undefined uStack_6c;
  undefined uStack_68;
  undefined uStack_64;
  undefined local_60;
  undefined uStack_5c;
  undefined uStack_58;
  undefined uStack_54;
  undefined local_50;
  undefined uStack_4c;
  undefined uStack_48;
  undefined uStack_44;
  undefined local_40;
  undefined uStack_3c;
  undefined uStack_38;
  undefined uStack_34;
  int local_30;
  
  if (param_1 != '\0') {
    piVar2 = &DAT_00419504;
    iVar3 = 0x14;
    sigemptyset((sigset_t *)&DAT_006255e0);
    piVar4 = &DAT_00419504;
    while( true ) {
      sigaction_t(iVar3,(sigaction *)0x0,(sigaction *)local_b8);
      if (local_b8._0_8_ != (__sighandler_t)0x1) {
        sigaddset((sigset_t *)&DAT_006255e0,iVar3);
      }
      if (piVar4 == (int *)&DAT_00419530) break;
      iVar3 = *piVar4;
      piVar4 = piVar4 + 1;
    }
    local_30 = 0x10000000;
    iVar3 = 0x14;
    local_b8._8_4_ = _DAT_006255e0;
    uStack_ac = uRam00000000006255e4;
    uStack_a8 = uRam00000000006255e8;
    uStack_a4 = uRam00000000006255ec;
    local_a0 = _DAT_006255f0;
    uStack_9c = uRam00000000006255f4;
    uStack_98 = uRam00000000006255f8;
    uStack_94 = uRam00000000006255fc;
    local_90 = _DAT_00625600;
    uStack_8c = uRam0000000000625604;
    uStack_88 = uRam0000000000625608;
    uStack_84 = uRam000000000062560c;
    local_80 = _DAT_00625610;
    uStack_7c = uRam0000000000625614;
    uStack_78 = uRam0000000000625618;
    uStack_74 = uRam000000000062561c;
    local_70 = _DAT_00625620;
    uStack_6c = uRam0000000000625624;
    uStack_68 = uRam0000000000625628;
    uStack_64 = uRam000000000062562c;
    local_60 = _DAT_00625630;
    uStack_5c = uRam0000000000625634;
    uStack_58 = uRam0000000000625638;
    uStack_54 = uRam000000000062563c;
    local_50 = _DAT_00625640;
    uStack_4c = uRam0000000000625644;
    uStack_48 = uRam0000000000625648;
    uStack_44 = uRam000000000062564c;
    local_40 = _DAT_00625650;
    uStack_3c = uRam0000000000625654;
    uStack_38 = uRam0000000000625658;
    uStack_34 = uRam000000000062565c;
    while( true ) {
      iVar1 = sigismember((sigset_t *)&DAT_006255e0,iVar3);
      if (iVar1 != 0) {
        local_b8._0_8_ = FUN_00404830;
        if (iVar3 == 0x14) {
          local_b8._0_8_ = FUN_00405560;
        }
        sigaction_t(iVar3,(sigaction *)local_b8,(sigaction *)0x0);
      }
      if (piVar2 == (int *)&DAT_00419530) break;
      iVar3 = *piVar2;
      piVar2 = piVar2 + 1;
    }
    return;
  }
  piVar2 = &DAT_00419504;
  iVar3 = 0x14;
  while( true ) {
    iVar1 = sigismember((sigset_t *)&DAT_006255e0,iVar3);
    if (iVar1 != 0) {
      signal(iVar3,(__sighandler_t)0x0);
    }
    if (piVar2 == (int *)&DAT_00419530) break;
    iVar3 = *piVar2;
    piVar2 = piVar2 + 1;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405c70(void)

{
  if (_DAT_00624448 != 0) {
    FUN_00405cd0(&DAT_00624440,&DAT_00624448);
    return;
  }
  FUN_00405cd0(&DAT_00624420,&PTR_DAT_00624428);
  FUN_00405cd0(&DAT_00624450,&PTR_DAT_00624458);
  FUN_00405cd0(&DAT_00624430,&PTR_DAT_00624438);
  return;
}


void FUN_00405cd0(size_t *param_1,void **param_2)

{
  __pid_t _Var1;
  
  if (DAT_006256d0 == '\0') {
    DAT_006256d0 = '\x01';
    _Var1 = tcgetpgrp(1);
    if (_Var1 < 0) {
      FUN_00405c70();
    }
    else {
      FUN_00405af0(1);
      FUN_00405c70();
    }
  }
  fwrite_unlocked(*param_2,*param_1,1,stdout);
  return;
}


void FUN_00405d40(void)

{
  FUN_00405cd0(&DAT_00624420,&PTR_DAT_00624428);
  FUN_00405cd0(&DAT_00624430,&PTR_DAT_00624438);
  return;
}


void FUN_00405d70(void)

{
  int __sig;
  sigset_t sStack_88;
  
  if ((DAT_006255d8 == 0) && (DAT_006255d4 == 0)) {
    return;
  }
  do {
    if (DAT_006256d0 != '\0') {
      FUN_00405d40();
    }
    fflush_unlocked(stdout);
    sigprocmask(0,(sigset_t *)&DAT_006255e0,&sStack_88);
    __sig = DAT_006255d8;
    if (DAT_006255d4 == 0) {
      signal(DAT_006255d8,(__sighandler_t)0x0);
    }
    else {
      DAT_006255d4 = DAT_006255d4 + -1;
      __sig = 0x13;
    }
    raise(__sig);
    sigprocmask(2,&sStack_88,(sigset_t *)0x0);
  } while ((DAT_006255d8 != 0) || (DAT_006255d4 != 0));
  return;
}


void FUN_00405e30(void)

{
  char cVar1;
  
  if (DAT_006256d2 == '\0') {
    return;
  }
  cVar1 = FUN_00404ae0(4);
  if (cVar1 == '\0') {
    return;
  }
  FUN_00405cd0(&DAT_00624420,&PTR_DAT_00624428);
  FUN_00405cd0(&DAT_00624460,&DAT_00624468);
  FUN_00405cd0(&DAT_00624430,&PTR_DAT_00624438);
  return;
}


ulong FUN_00405ea0(byte **param_1,byte *param_2,undefined param_3,int param_4,ulong *param_5,
                  byte *param_6)

{
  byte *pbVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  size_t sVar7;
  size_t sVar8;
  ulong uVar9;
  byte *pbVar10;
  ushort **ppuVar11;
  long lVar12;
  byte *pbVar13;
  long lVar14;
  ulong unaff_RBX;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  wchar_t local_44;
  mbstate_t local_40 [2];
  
  pbVar10 = *param_1;
  uVar5 = FUN_00411c20(param_3);
  bVar3 = (bool)(uVar5 < 3 & DAT_00625698);
  if (bVar3 == false) {
    bVar2 = false;
    if (param_4 == 0) {
      uVar9 = strlen((char *)param_2);
    }
    else {
LAB_00405ef3:
      sVar7 = FUN_00411cd0(pbVar10,0x2000,param_2,0xffffffffffffffff,param_3);
      if (0x1fff < sVar7) {
        pbVar10 = (byte *)FUN_00412980(sVar7 + 1);
        FUN_00411cd0(pbVar10,sVar7 + 1,param_2,0xffffffffffffffff,param_3);
      }
      bVar3 = true;
      if (*param_2 == *pbVar10) {
        sVar8 = strlen((char *)param_2);
        bVar3 = sVar7 != sVar8;
      }
      uVar9 = sVar7;
      param_2 = pbVar10;
      if (bVar2) goto LAB_00406056;
    }
    if (param_5 == (ulong *)0x0) {
      if (DAT_00625768 == 0) {
        *param_6 = 0;
        goto LAB_004060cf;
      }
LAB_004060a7:
      bVar4 = (DAT_00625769 ^ 1 | bVar3) ^ 1;
      goto LAB_004060b8;
    }
    sVar7 = __ctype_get_mb_cur_max();
    if (sVar7 < 2) {
      if (param_2 < param_2 + uVar9) {
        unaff_RBX = 0;
        ppuVar11 = __ctype_b_loc();
        pbVar10 = param_2;
        do {
          unaff_RBX = (unaff_RBX + 1) - (ulong)(((*ppuVar11)[*pbVar10] & 0x4000) == 0);
          pbVar10 = pbVar10 + 1;
        } while (param_2 + uVar9 != pbVar10);
      }
      else {
        unaff_RBX = 0;
      }
    }
    else {
      iVar6 = FUN_0040e9b0(param_2,uVar9,0);
      unaff_RBX = (ulong)iVar6;
    }
    if (DAT_00625768 != 0) goto LAB_004060a7;
    *param_6 = 0;
  }
  else {
    if (param_4 != 0) {
      bVar2 = true;
      goto LAB_00405ef3;
    }
    sVar7 = strlen((char *)param_2);
    if (0x1fff < sVar7) {
      pbVar10 = (byte *)FUN_00412980(sVar7 + 1);
    }
    memcpy(pbVar10,param_2,sVar7 + 1);
    bVar3 = false;
LAB_00406056:
    sVar8 = __ctype_get_mb_cur_max();
    pbVar1 = pbVar10 + sVar7;
    if (sVar8 < 2) {
      uVar9 = sVar7;
      if (pbVar10 < pbVar1) {
        ppuVar11 = __ctype_b_loc();
        pbVar13 = pbVar10;
        do {
          if ((*(byte *)((long)*ppuVar11 + (ulong)*pbVar13 * 2 + 1) & 0x40) == 0) {
            *pbVar13 = 0x3f;
          }
          pbVar13 = pbVar13 + 1;
        } while (pbVar13 != pbVar1);
      }
    }
    else if (pbVar10 < pbVar1) {
      sVar7 = 0;
      pbVar16 = pbVar10;
      pbVar13 = pbVar10;
      do {
        bVar4 = *pbVar16;
        if ((char)bVar4 < '@') {
          if (((char)bVar4 < '%') && (3 < (byte)(bVar4 - 0x20))) goto LAB_00406144;
LAB_00406114:
          *pbVar13 = bVar4;
          pbVar16 = pbVar16 + 1;
          sVar7 = sVar7 + 1;
          pbVar13 = pbVar13 + 1;
        }
        else {
          if (('@' < (char)bVar4) && (((char)bVar4 < '`' || ((byte)(bVar4 + 0x9f) < 0x1e))))
          goto LAB_00406114;
LAB_00406144:
          local_40[0] = (mbstate_t)0x0;
          pbVar15 = pbVar16;
          pbVar17 = pbVar13;
          do {
            pbVar13 = pbVar17 + 1;
            lVar12 = FUN_00416e80(&local_44,pbVar15,(long)pbVar1 - (long)pbVar15,local_40);
            if (lVar12 == -1) {
              *pbVar17 = 0x3f;
              pbVar16 = pbVar15 + 1;
LAB_00406244:
              sVar7 = sVar7 + 1;
              break;
            }
            if (lVar12 == -2) {
              *pbVar17 = 0x3f;
              pbVar16 = pbVar1;
              goto LAB_00406244;
            }
            if (lVar12 == 0) {
              iVar6 = wcwidth(local_44);
              pbVar16 = pbVar15 + 1;
              if (iVar6 < 0) goto LAB_00406162;
              *pbVar17 = *pbVar15;
LAB_004061d6:
              sVar7 = sVar7 + (long)iVar6;
            }
            else {
              iVar6 = wcwidth(local_44);
              pbVar16 = pbVar15 + lVar12;
              if (-1 < iVar6) {
                lVar14 = 0;
                do {
                  pbVar17[lVar14] = pbVar15[lVar14];
                  lVar14 = lVar14 + 1;
                } while (lVar12 != lVar14);
                pbVar16 = pbVar15 + lVar12;
                pbVar13 = pbVar17 + lVar12;
                goto LAB_004061d6;
              }
LAB_00406162:
              *pbVar17 = 0x3f;
              sVar7 = sVar7 + 1;
            }
            iVar6 = mbsinit(local_40);
            pbVar15 = pbVar16;
            pbVar17 = pbVar13;
          } while (iVar6 == 0);
        }
      } while (pbVar16 < pbVar1);
      uVar9 = (long)pbVar13 - (long)pbVar10;
    }
    else {
      sVar7 = 0;
      uVar9 = 0;
    }
    unaff_RBX = sVar7;
    param_2 = pbVar10;
    bVar4 = DAT_00625768;
    if (DAT_00625768 != 0) goto LAB_004060a7;
LAB_004060b8:
    *param_6 = bVar4;
    if (param_5 == (ulong *)0x0) goto LAB_004060cf;
  }
  *param_5 = unaff_RBX;
LAB_004060cf:
  *param_1 = param_2;
  return uVar9;
}


long FUN_004062d0(byte *param_1,undefined param_2,undefined param_3,long param_4,char param_5,
                 long param_6,long param_7)

{
  byte bVar1;
  byte *pbVar2;
  char cVar3;
  size_t sVar4;
  void *__ptr;
  char *pcVar5;
  char *pcVar6;
  long *plVar7;
  long lVar8;
  size_t sVar9;
  char cVar10;
  byte local_2041;
  byte *local_2040;
  byte local_2038 [8200];
  
  local_2040 = local_2038;
  sVar4 = FUN_00405ea0(&local_2040,param_1,param_2,param_3,0);
  if ((local_2041 != 0) && (param_5 != '\0')) {
    pcVar5 = stdout->_IO_write_ptr;
    if (pcVar5 < stdout->_IO_write_end) {
      stdout->_IO_write_ptr = pcVar5 + 1;
      *pcVar5 = ' ';
    }
    else {
      __overflow(stdout,0x20);
    }
    DAT_006255b8 = DAT_006255b8 + 1;
  }
  if (param_4 != 0) {
    cVar3 = FUN_00404ae0(4);
    if (cVar3 != '\0') {
      FUN_00405d40();
    }
    FUN_00405cd0(&DAT_00624420,&PTR_DAT_00624428);
    FUN_00405cd0(param_4,param_4 + 8);
    FUN_00405cd0(&DAT_00624430,&PTR_DAT_00624438);
  }
  cVar3 = DAT_00625769;
  sVar9 = sVar4;
  if (param_7 == 0) {
    lVar8 = 0;
    cVar3 = '\0';
  }
  else {
    cVar10 = DAT_00625768;
    if ((DAT_00625768 == '\0') || (cVar10 = DAT_00625769, DAT_00625769 == '\0')) {
      lVar8 = 0;
      cVar3 = cVar10;
    }
    else if (local_2041 == 0) {
      bVar1 = *local_2040;
      pbVar2 = (byte *)stdout->_IO_write_ptr;
      sVar9 = sVar4 - 2;
      if (pbVar2 < stdout->_IO_write_end) {
        lVar8 = 1;
        stdout->_IO_write_ptr = (char *)(pbVar2 + 1);
        *pbVar2 = bVar1;
      }
      else {
        __overflow(stdout,(uint)bVar1);
        lVar8 = 1;
      }
    }
    else {
      lVar8 = 0;
      cVar3 = '\0';
    }
    __ptr = (void *)FUN_00404e80(DAT_00625748,0);
    pcVar5 = (char *)FUN_00404e80(param_7,1);
    pcVar6 = "";
    if (*pcVar5 != '/') {
      pcVar6 = "/";
    }
    __printf_chk(1,&DAT_0041b070,__ptr,pcVar6,pcVar5);
    free(__ptr);
    free(pcVar5);
  }
  if (param_6 == 0) {
    fwrite_unlocked(local_2040 + lVar8,1,sVar9,stdout);
    DAT_006255b8 = DAT_006255b8 + sVar4;
  }
  else {
    if (DAT_006256d8 != '\0') {
      plVar7 = *(long **)(param_6 + 0x18);
      if ((ulong)(*(long *)(param_6 + 0x20) - (long)plVar7) < 8) {
        _obstack_newchunk(param_6,8);
        plVar7 = *(long **)(param_6 + 0x18);
      }
      *plVar7 = DAT_006255b8;
      *(long *)(param_6 + 0x18) = *(long *)(param_6 + 0x18) + 8;
    }
    fwrite_unlocked(local_2040 + lVar8,1,sVar9,stdout);
    DAT_006255b8 = DAT_006255b8 + sVar4;
    if (DAT_006256d8 != '\0') {
      plVar7 = *(long **)(param_6 + 0x18);
      if ((ulong)(*(long *)(param_6 + 0x20) - (long)plVar7) < 8) {
        _obstack_newchunk(param_6,8);
        plVar7 = *(long **)(param_6 + 0x18);
      }
      *plVar7 = DAT_006255b8;
      *(long *)(param_6 + 0x18) = *(long *)(param_6 + 0x18) + 8;
    }
  }
  if ((param_7 != 0) && (fwrite_unlocked(&DAT_0041b084,1,6,stdout), cVar3 != '\0')) {
    bVar1 = local_2040[sVar4 - 1];
    pbVar2 = (byte *)stdout->_IO_write_ptr;
    if (pbVar2 < stdout->_IO_write_end) {
      stdout->_IO_write_ptr = (char *)(pbVar2 + 1);
      *pbVar2 = bVar1;
    }
    else {
      __overflow(stdout,(uint)bVar1);
    }
  }
  if ((local_2040 != local_2038) && (local_2040 != param_1)) {
    free(local_2040);
  }
  return local_2041 + sVar4;
}


long FUN_00406690(char **param_1,byte param_2,undefined param_3,ulong param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  size_t sVar5;
  ulong uVar6;
  ulong *puVar7;
  uint uVar8;
  char *__s;
  
  if (param_2 == 0) {
    __s = *param_1;
    if (DAT_006256d2 == '\0') goto LAB_004066c2;
    uVar8 = (uint)*(byte *)((long)param_1 + 0xb9);
    if ((DAT_00625750 == '\0') || (*(byte *)((long)param_1 + 0xb9) == 0)) {
      uVar6 = (ulong)*(uint *)(param_1 + 6);
    }
    else {
      uVar6 = (ulong)*(uint *)((long)param_1 + 0xac);
    }
LAB_0040676b:
    cVar1 = *(char *)(param_1 + 0x17);
    uVar2 = uVar8;
    if (cVar1 == '\0') goto LAB_0040677b;
LAB_00406882:
    uVar2 = (uint)uVar6 & 0xf000;
    if (uVar2 == 0x8000) {
      if (((uVar6 & 0x800) != 0) && (cVar1 = FUN_00404ae0(0x10), cVar1 != '\0')) {
        lVar4 = 0x100;
        goto LAB_004067d0;
      }
      uVar8 = (uint)uVar6;
      if (((uVar6 & 0x400) != 0) && (cVar1 = FUN_00404ae0(0x11), cVar1 != '\0')) {
        lVar4 = 0x110;
        goto LAB_004067d0;
      }
      cVar1 = FUN_00404ae0(0x15);
      if ((cVar1 != '\0') && (*(char *)(param_1 + 0x18) != '\0')) {
        lVar4 = 0x150;
        goto LAB_004067d0;
      }
      if (((uVar8 & 0x49) != 0) && (cVar1 = FUN_00404ae0(0xe), cVar1 != '\0')) {
        lVar4 = 0xe0;
        goto LAB_004067d0;
      }
      if (((char *)0x1 < param_1[5]) && (cVar1 = FUN_00404ae0(0x16), cVar1 != '\0')) {
        lVar4 = 0x160;
        goto LAB_004067d0;
      }
      goto LAB_00406910;
    }
    if (uVar2 != 0x4000) {
      if (uVar2 != 0xa000) {
        lVar4 = 0x80;
        if ((((uVar2 != 0x1000) && (lVar4 = 0x90, uVar2 != 0xc000)) &&
            (lVar4 = 0xa0, uVar2 != 0x6000)) && (lVar4 = 0xb0, uVar2 != 0x2000)) {
          lVar4 = 0xd0;
        }
        goto LAB_004067d0;
      }
      uVar6 = 7;
      goto LAB_00406798;
    }
    if (((uint)uVar6 & 0x202) == 0x202) {
      cVar1 = FUN_00404ae0(0x14);
      lVar4 = 0x140;
      if (cVar1 != '\0') goto LAB_004067d0;
    }
    uVar8 = (uint)uVar6;
    if ((uVar6 & 2) != 0) {
      cVar1 = FUN_00404ae0(0x13);
      lVar4 = 0x130;
      if (cVar1 != '\0') goto LAB_004067d0;
    }
    lVar4 = 0x60;
    if ((uVar8 & 0x200) != 0) {
      cVar1 = FUN_00404ae0(0x12);
      lVar4 = (-(ulong)(cVar1 == '\0') & 0xffffffffffffff40) + 0x120;
    }
  }
  else {
    __s = param_1[1];
    if (DAT_006256d2 == '\0') goto LAB_004066c2;
    uVar6 = (ulong)*(uint *)((long)param_1 + 0xac);
    if (*(char *)((long)param_1 + 0xb9) == '\0') {
      cVar1 = FUN_00404ae0(0xc);
      uVar8 = 0xffffffff;
      if (cVar1 == '\0') goto LAB_0040676b;
      lVar4 = 0xc0;
      goto LAB_004067d0;
    }
    cVar1 = *(char *)(param_1 + 0x17);
    uVar8 = 0;
    uVar2 = 0;
    if (cVar1 != '\0') goto LAB_00406882;
LAB_0040677b:
    uVar8 = uVar2;
    uVar2 = *(uint *)(&DAT_00419540 + (ulong)*(uint *)(param_1 + 0x15) * 4);
    uVar6 = (ulong)uVar2;
    cVar1 = uVar2 == 7;
    if (uVar2 == 5) {
LAB_00406910:
      sVar5 = strlen(__s);
      for (puVar7 = DAT_006256c8; puVar7 != (ulong *)0x0; puVar7 = (ulong *)puVar7[4]) {
        uVar6 = *puVar7;
        if ((uVar6 <= sVar5) &&
           (iVar3 = strncmp(__s + (sVar5 - uVar6),(char *)puVar7[1],uVar6), iVar3 == 0)) {
          puVar7 = puVar7 + 2;
          goto LAB_004067d7;
        }
      }
      lVar4 = 0x50;
    }
    else {
LAB_00406798:
      if ((uVar8 == 0) && (cVar1 != '\0')) {
        lVar4 = 0xd0;
        if (DAT_00625750 == '\0') {
          cVar1 = FUN_00404ae0(0xd);
          lVar4 = (-(ulong)(cVar1 == '\0') & 0xffffffffffffffa0) + 0xd0;
        }
      }
      else {
        lVar4 = uVar6 << 4;
      }
    }
  }
LAB_004067d0:
  puVar7 = (ulong *)(&DAT_00624420 + lVar4);
LAB_004067d7:
  if (puVar7[1] == 0) {
    cVar1 = FUN_00404ae0(4);
    if (cVar1 == '\0') {
LAB_004066c2:
      lVar4 = FUN_004062d0(__s,DAT_00625690,*(undefined *)((long)param_1 + 0xc4),0,param_2 ^ 1,
                           param_3,param_1[2]);
      FUN_00405d70();
      return lVar4;
    }
    puVar7 = (ulong *)0x0;
  }
  lVar4 = FUN_004062d0(__s,DAT_00625690,*(undefined *)((long)param_1 + 0xc4),puVar7,param_2 ^ 1,
                       param_3,param_1[2]);
  FUN_00405d70();
  FUN_00405c70();
  if (DAT_00625670 == 0) {
    return lVar4;
  }
  uVar6 = lVar4 + -1 + param_4;
  if (param_4 / DAT_00625670 == uVar6 / DAT_00625670) {
    return lVar4;
  }
  FUN_00405cd0(&DAT_00624590,&PTR_DAT_00624598,uVar6 % DAT_00625670);
  return lVar4;
}


long FUN_00406af0(long param_1,undefined param_2)

{
  byte bVar1;
  long lVar2;
  undefined *puVar3;
  undefined uVar4;
  undefined extraout_RDX;
  undefined auStack_2a8 [664];
  
  FUN_00405e30();
  if (DAT_006256bc != '\0') {
    puVar3 = &DAT_0041b06e;
    if ((*(char *)(param_1 + 0xb8) != '\0') && (*(long *)(param_1 + 0x20) != 0)) {
      puVar3 = (undefined *)
               FUN_0040e520(*(long *)(param_1 + 0x20),auStack_2a8,extraout_RDX,&DAT_0041b06e);
    }
    uVar4 = 0;
    if (DAT_006256f8 != 4) {
      uVar4 = DAT_00625720;
    }
    __printf_chk(1,&DAT_0041b09b,uVar4,puVar3);
  }
  if (DAT_006256ec != '\0') {
    puVar3 = &DAT_0041b06e;
    if (*(char *)(param_1 + 0xb8) != '\0') {
      puVar3 = (undefined *)
               FUN_0040d5d0(*(undefined *)(param_1 + 0x58),auStack_2a8,DAT_006256e8,0x200,
                            DAT_006256e0);
    }
    uVar4 = 0;
    if (DAT_006256f8 != 4) {
      uVar4 = DAT_0062571c;
    }
    __printf_chk(1,&DAT_0041b09b,uVar4,puVar3);
  }
  if (DAT_00625725 != '\0') {
    uVar4 = 0;
    if (DAT_006256f8 != 4) {
      uVar4 = DAT_00625714;
    }
    __printf_chk(1,&DAT_0041b09b,uVar4,*(undefined *)(param_1 + 0xb0));
  }
  lVar2 = FUN_00406690(param_1,0,0,param_2);
  if (DAT_006256d4 == 0) {
    return lVar2;
  }
  bVar1 = FUN_004058a0(*(undefined *)(param_1 + 0xb8),*(undefined *)(param_1 + 0x30),
                       *(undefined *)(param_1 + 0xa8));
  return lVar2 + (ulong)bVar1;
}


/* WARNING: Could not reconcile some variable overlaps */

void FUN_00406c60(long param_1)

{
  undefined uVar1;
  undefined uVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  undefined *puVar6;
  size_t sVar7;
  uint *puVar8;
  long lVar9;
  ulong uVar10;
  undefined uVar11;
  undefined uVar12;
  char cVar13;
  uint uVar14;
  undefined *puVar15;
  uint *puVar16;
  int iVar17;
  int iVar18;
  long lVar19;
  char *pcVar20;
  bool bVar21;
  undefined local_1330;
  char local_1324;
  undefined local_1323;
  ushort local_131b;
  undefined local_1319;
  long local_1318;
  undefined local_1310;
  undefined local_1308 [32];
  undefined local_12e8 [16];
  int local_12d8;
  undefined local_12a8 [16];
  int local_1298;
  undefined local_1268 [1008];
  uint local_e78 [914];
  
  if (*(char *)(param_1 + 0xb8) == '\0') {
    local_1324 = "?pcdb-lswd"[*(uint *)(param_1 + 0xa8)];
    local_1323 = 0x3f3f3f3f3f3f3f3f;
    local_131b = 0x3f3f;
    local_1319 = 0;
  }
  else {
    FUN_0040bb60(param_1 + 0x18,&local_1324);
  }
  if (DAT_00625724 == '\0') {
    local_131b = local_131b & 0xff;
LAB_00406ca4:
    if (DAT_006256f4 == 1) goto LAB_00406fe8;
LAB_00406cb3:
    if (DAT_006256f4 == 0) {
      local_1318 = *(long *)(param_1 + 0x70);
      local_1310 = *(undefined *)(param_1 + 0x78);
      cVar13 = *(char *)(param_1 + 0xb8);
      goto joined_r0x0040700e;
    }
    if (DAT_006256f4 != 2) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    local_1318 = *(long *)(param_1 + 0x60);
    local_1310 = *(undefined *)(param_1 + 0x68);
    cVar13 = *(char *)(param_1 + 0xb8);
    if (DAT_006256bc != '\0') goto LAB_00407060;
LAB_00406ce1:
    puVar16 = local_e78;
  }
  else {
    if (*(int *)(param_1 + 0xbc) == 1) {
      local_131b = CONCAT11(0x2e,(undefined)local_131b);
      goto LAB_00406ca4;
    }
    if (*(int *)(param_1 + 0xbc) != 2) goto LAB_00406ca4;
    local_131b = CONCAT11(0x2b,(undefined)local_131b);
    if (DAT_006256f4 != 1) goto LAB_00406cb3;
LAB_00406fe8:
    local_1318 = *(long *)(param_1 + 0x80);
    local_1310 = *(undefined *)(param_1 + 0x88);
    cVar13 = *(char *)(param_1 + 0xb8);
joined_r0x0040700e:
    if (DAT_006256bc == '\0') goto LAB_00406ce1;
LAB_00407060:
    puVar6 = &DAT_0041b06e;
    if ((cVar13 != '\0') && (*(long *)(param_1 + 0x20) != 0)) {
      puVar6 = (undefined *)FUN_0040e520(*(long *)(param_1 + 0x20),local_1268);
    }
    __sprintf_chk(local_e78,1,0xe3b,&DAT_0041b09b,DAT_00625720,puVar6);
    puVar16 = local_e78;
    do {
      puVar8 = puVar16;
      uVar14 = *puVar8 + 0xfefefeff & ~*puVar8;
      uVar4 = uVar14 & 0x80808080;
      puVar16 = puVar8 + 1;
    } while (uVar4 == 0);
    bVar21 = (uVar14 & 0x8080) == 0;
    if (bVar21) {
      uVar4 = uVar4 >> 0x10;
    }
    if (bVar21) {
      puVar16 = (uint *)((long)puVar8 + 6);
    }
    cVar13 = *(char *)(param_1 + 0xb8);
    puVar16 = (uint *)((long)puVar16 + (-3 - (ulong)CARRY1((byte)uVar4,(byte)uVar4)));
  }
  if (DAT_006256ec != '\0') {
    pcVar20 = "?";
    if (cVar13 != '\0') {
      pcVar20 = (char *)FUN_0040d5d0(*(undefined *)(param_1 + 0x58),local_1268,DAT_006256e8,0x200,
                                     DAT_006256e0);
    }
    iVar17 = DAT_0062571c;
    iVar3 = FUN_0040eb70(pcVar20,0);
    if (0 < iVar17 - iVar3) {
      uVar4 = (iVar17 - iVar3) - 1;
      puVar8 = puVar16;
      do {
        puVar5 = (uint *)((long)puVar8 + 1);
        *(char *)puVar8 = ' ';
        puVar8 = puVar5;
      } while (puVar5 != (uint *)((long)puVar16 + (ulong)uVar4 + 1));
      puVar16 = (uint *)((long)puVar16 + (long)(int)uVar4 + 1);
    }
    do {
      puVar8 = puVar16;
      cVar13 = *pcVar20;
      puVar16 = (uint *)((long)puVar8 + 1);
      *(char *)puVar8 = cVar13;
      pcVar20 = pcVar20 + 1;
    } while (cVar13 != '\0');
    *(char *)puVar8 = ' ';
    cVar13 = *(char *)(param_1 + 0xb8);
  }
  puVar6 = &DAT_0041b06e;
  if (cVar13 != '\0') {
    puVar6 = (undefined *)FUN_0040e520(*(undefined *)(param_1 + 0x28),local_1268);
  }
  __sprintf_chk(puVar16,1,0xffffffffffffffff,"%s %*s ",&local_1324,DAT_00625718,puVar6);
  sVar7 = strlen((char *)puVar16);
  puVar16 = (uint *)((long)puVar16 + sVar7);
  if (DAT_006256d8 != '\0') {
    fwrite_unlocked(&DAT_0041b093,1,2,stdout);
    DAT_006255b8 = DAT_006255b8 + 2;
  }
  if ((((DAT_006245a9 != '\0') || (DAT_006245a8 != '\0')) || (DAT_006256ee != '\0')) ||
     (DAT_00625725 != '\0')) {
    fputs_unlocked((char *)local_e78,stdout);
    DAT_006255b8 = (undefined *)((long)puVar16 + ((long)DAT_006255b8 - (long)local_e78));
    if (DAT_006245a9 != '\0') {
      FUN_00405520(*(undefined *)(param_1 + 0x34),DAT_00625710,*(undefined *)(param_1 + 0xb8));
    }
    uVar2 = DAT_0062570c;
    if (DAT_006245a8 != '\0') {
      puVar6 = &DAT_0041b06e;
      uVar1 = *(undefined *)(param_1 + 0x38);
      if ((*(char *)(param_1 + 0xb8) != '\0') && (puVar6 = (undefined *)0x0, DAT_006256ed == '\0'))
      {
        puVar6 = (undefined *)FUN_0040e2f0(uVar1);
      }
      FUN_00405460(puVar6,uVar1,uVar2);
    }
    if (DAT_006256ee != '\0') {
      FUN_00405520(*(undefined *)(param_1 + 0x34),DAT_00625708,*(undefined *)(param_1 + 0xb8));
    }
    puVar16 = local_e78;
    if (DAT_00625725 != '\0') {
      FUN_00405460(*(undefined *)(param_1 + 0xb0),0,DAT_00625714);
    }
  }
  if (*(char *)(param_1 + 0xb8) == '\0') {
    pcVar20 = "?";
LAB_00406e76:
    iVar17 = DAT_006256fc;
    iVar3 = FUN_0040eb70(pcVar20,0);
    if (0 < iVar17 - iVar3) {
      uVar4 = (iVar17 - iVar3) - 1;
      puVar8 = puVar16;
      do {
        puVar5 = (uint *)((long)puVar8 + 1);
        *(undefined *)puVar8 = 0x20;
        puVar8 = puVar5;
      } while (puVar5 != (uint *)((long)puVar16 + (ulong)uVar4 + 1));
      puVar16 = (uint *)((long)puVar16 + (long)(int)uVar4 + 1);
    }
    do {
      puVar8 = puVar16;
      cVar13 = *pcVar20;
      puVar16 = (uint *)((long)puVar8 + 1);
      *(char *)puVar8 = cVar13;
      pcVar20 = pcVar20 + 1;
    } while (cVar13 != '\0');
    *(undefined *)puVar8 = 0x20;
  }
  else {
    if ((*(uint *)(param_1 + 0x30) & 0xb000) != 0x2000) {
      pcVar20 = (char *)FUN_0040d5d0(*(undefined *)(param_1 + 0x48),local_1268,DAT_006256dc,1,
                                     DAT_006245a0);
      goto LAB_00406e76;
    }
    iVar18 = DAT_006256fc - (DAT_00625704 + 2 + DAT_00625700);
    uVar11 = FUN_0040e520((uint)((*(ulong *)(param_1 + 0x40) >> 0x14) << 8) |
                          (uint)*(ulong *)(param_1 + 0x40) & 0xff,local_1268);
    iVar17 = DAT_00625700;
    uVar12 = FUN_0040e520((uint)((ulong)*(undefined *)(param_1 + 0x40) >> 0x20) & 0xfffff000 |
                          (uint)((ulong)*(undefined *)(param_1 + 0x40) >> 8) & 0xfff,local_12a8);
    iVar3 = 0;
    if (-1 < iVar18) {
      iVar3 = iVar18;
    }
    __sprintf_chk(puVar16,1,0xffffffffffffffff,&DAT_0041b096,iVar3 + DAT_00625704,uVar12,iVar17,
                  uVar11);
    puVar16 = (uint *)((long)puVar16 + (long)DAT_006256fc + 1);
  }
  *(undefined *)puVar16 = 1;
  if (*(char *)(param_1 + 0xb8) == '\0') {
LAB_00406ee3:
    puVar6 = &DAT_0041b06e;
joined_r0x004074f4:
    if (DAT_00624404 < 0) {
      local_1330 = 0;
      lVar19 = FUN_004176f0(DAT_00625668,&local_1330,local_12a8);
      if (lVar19 != 0) {
        puVar15 = PTR_DAT_00624410;
        if (DAT_00624788 != '\0') {
          puVar15 = &DAT_006247a0 + (long)local_1298 * 0x80;
        }
        lVar19 = FUN_00410650(local_1268,0x3e9,puVar15,local_12a8,DAT_00625668,0);
        if (lVar19 != 0) {
          DAT_00624404 = FUN_0040e9b0(local_1268,lVar19,0);
        }
      }
      if (DAT_00624404 < 0) {
        DAT_00624404 = 0;
      }
    }
    __sprintf_chk(puVar16,1,0xffffffffffffffff,&DAT_0041b09b,DAT_00624404,puVar6);
    sVar7 = strlen((char *)puVar16);
    lVar19 = (long)puVar16 + sVar7;
  }
  else {
    lVar19 = FUN_004176f0(DAT_00625668,&local_1318,local_12e8);
    if (lVar19 == 0) {
LAB_00407218:
      if (*(char *)puVar16 != '\0') {
        if (*(char *)(param_1 + 0xb8) == '\0') goto LAB_00406ee3;
        puVar6 = (undefined *)FUN_0040e480(local_1318,local_1308);
        goto joined_r0x004074f4;
      }
    }
    else {
      if (DAT_00625730 < local_1318) {
LAB_00407595:
        FUN_0040c150(&DAT_00625730);
        iVar3 = (int)DAT_00625738;
        lVar19 = DAT_00625730 + -0xf0c2ac;
        if (lVar19 < local_1318) {
LAB_004073b4:
          if (local_1318 < DAT_00625730) goto LAB_00407608;
          uVar10 = 0;
          if (local_1318 <= DAT_00625730) {
            iVar17 = (int)local_1310;
            goto LAB_004073cd;
          }
        }
        else {
LAB_004073a0:
          iVar3 = (int)DAT_00625738;
          uVar10 = 0;
          if ((lVar19 <= local_1318) && (iVar3 - (int)local_1310 < 0)) goto LAB_004073b4;
        }
      }
      else if (local_1318 < DAT_00625730) {
        lVar19 = DAT_00625730 + -0xf0c2ac;
        if (local_1318 <= lVar19) goto LAB_004073a0;
LAB_00407608:
        uVar10 = 1;
      }
      else {
        iVar3 = (int)DAT_00625738;
        iVar17 = (int)local_1310;
        if (iVar3 - iVar17 < 0) goto LAB_00407595;
        if (local_1318 <= DAT_00625730 + -0xf0c2ac) {
          uVar10 = 0;
          goto LAB_004071c6;
        }
LAB_004073cd:
        uVar10 = (ulong)((uint)(iVar17 - iVar3) >> 0x1f);
      }
LAB_004071c6:
      if (DAT_00624788 == '\0') {
        puVar15 = (&PTR_DAT_00624410)[uVar10];
      }
      else {
        puVar15 = &DAT_006247a0 + ((long)local_12d8 + uVar10 * 0xc) * 0x80;
      }
      lVar19 = FUN_00410650(puVar16,0x3e9,puVar15,local_12e8,DAT_00625668);
      if (lVar19 == 0) goto LAB_00407218;
      puVar16 = (uint *)((long)puVar16 + lVar19);
    }
    lVar19 = (long)puVar16 + 1;
    *(undefined *)puVar16 = 0x20;
  }
  lVar19 = lVar19 - (long)local_e78;
  fputs_unlocked((char *)local_e78,stdout);
  DAT_006255b8 = DAT_006255b8 + lVar19;
  lVar9 = FUN_00406690(param_1,0,&DAT_00625560,lVar19);
  if (*(int *)(param_1 + 0xa8) == 6) {
    if (*(long *)(param_1 + 8) != 0) {
      fwrite_unlocked(&DAT_0041b0a0,1,4,stdout);
      DAT_006255b8 = DAT_006255b8 + 4;
      FUN_00406690(param_1,1,0,lVar19 + 4 + lVar9);
      if (DAT_006256d4 != 0) {
        FUN_004058a0(1,*(undefined *)(param_1 + 0xac),0);
      }
    }
  }
  else if (DAT_006256d4 != 0) {
    FUN_004058a0(*(undefined *)(param_1 + 0xb8),*(undefined *)(param_1 + 0x30));
  }
  return;
}


long FUN_00407630(undefined *param_1,undefined param_2,undefined param_3)

{
  byte local_2029;
  undefined *local_2028;
  long local_2020;
  undefined local_2018 [8200];
  
  local_2028 = local_2018;
  FUN_00405ea0(&local_2028,param_1,param_2,param_3,&local_2020,&local_2029);
  if ((local_2028 != local_2018) && (local_2028 != param_1)) {
    free(local_2028);
  }
  return (ulong)local_2029 + local_2020;
}


long FUN_00407690(undefined *param_1)

{
  char cVar1;
  long lVar2;
  size_t sVar3;
  char *pcVar4;
  long lVar5;
  undefined auStack_2a8 [664];
  
  if (DAT_006256bc == '\0') {
    lVar5 = 0;
LAB_00407752:
    if (DAT_006256ec != '\0') {
      if (DAT_006256f8 != 4) goto LAB_004076ce;
      lVar2 = 2;
      if (*(char *)(param_1 + 0x17) != '\0') {
        pcVar4 = (char *)FUN_0040d5d0(param_1[0xb],auStack_2a8,DAT_006256e8,0x200,DAT_006256e0);
        sVar3 = strlen(pcVar4);
        lVar2 = sVar3 + 1;
      }
LAB_004076d9:
      lVar5 = lVar5 + lVar2;
    }
    if (DAT_00625725 == '\0') goto LAB_00407700;
    if (DAT_006256f8 != 4) goto LAB_004076f2;
    sVar3 = strlen((char *)param_1[0x16]);
  }
  else {
    if (DAT_006256f8 == 4) {
      pcVar4 = (char *)FUN_0040e520(param_1[4],auStack_2a8);
      sVar3 = strlen(pcVar4);
      lVar5 = sVar3 + 1;
      goto LAB_00407752;
    }
    lVar5 = (long)DAT_00625720 + 1;
    if (DAT_006256ec != '\0') {
LAB_004076ce:
      lVar2 = (long)DAT_0062571c + 1;
      goto LAB_004076d9;
    }
    if (DAT_00625725 == '\0') goto LAB_00407700;
LAB_004076f2:
    sVar3 = (size_t)DAT_00625714;
  }
  lVar5 = lVar5 + sVar3 + 1;
LAB_00407700:
  lVar2 = FUN_00407630(*param_1,DAT_00625690,*(undefined *)((long)param_1 + 0xc4));
  lVar5 = lVar5 + lVar2;
  if (DAT_006256d4 != 0) {
    cVar1 = FUN_004057b0(*(undefined *)(param_1 + 0x17),*(undefined *)(param_1 + 6),
                         *(undefined *)(param_1 + 0x15));
    lVar5 = lVar5 + (ulong)(cVar1 != '\0');
  }
  return lVar5;
}


ulong FUN_00407800(char param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong *puVar3;
  char cVar4;
  ulong uVar5;
  long lVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  char *pcVar16;
  undefined auVar17 [16];
  
  uVar13 = DAT_006255c0;
  if (DAT_00625770 <= DAT_006255c0) {
    uVar13 = DAT_00625770;
  }
  uVar14 = DAT_006246a0;
  if (DAT_006246a0 < uVar13) {
    pcVar16 = DAT_006255c8;
    if (uVar13 < DAT_006255c0 >> 1) {
      uVar10 = (ulong)(SUB168(ZEXT816(0x30) * ZEXT816(uVar13) >> 0x40,0) != 0);
      if ((SUB168(ZEXT816(0x30) * ZEXT816(uVar13),0) < 0) || (uVar10 != 0)) goto LAB_00407adb;
      uVar14 = uVar13 * 2;
      auVar17 = FUN_004129e0(DAT_006255c8,uVar13 * 0x30);
    }
    else {
      uVar10 = (ulong)(SUB168(ZEXT816(0x18) * ZEXT816(DAT_006255c0) >> 0x40,0) != 0);
      if ((SUB168(ZEXT816(0x18) * ZEXT816(DAT_006255c0),0) < 0) || (uVar10 != 0)) goto LAB_00407adb;
      auVar17 = FUN_004129e0(DAT_006255c8,DAT_006255c0 * 0x18);
      uVar14 = DAT_006255c0;
    }
    uVar10 = SUB168(auVar17 >> 0x40,0);
    DAT_006255c8 = SUB168(auVar17,0);
    pcVar16 = (char *)(uVar14 - DAT_006246a0);
    uVar5 = DAT_006246a0 + 1 + uVar14;
    param_2 = (long)pcVar16 * uVar5;
    if ((CARRY8(DAT_006246a0 + 1,uVar14) == false) &&
       (uVar10 = param_2 % (ulong)pcVar16, uVar5 == param_2 / (ulong)pcVar16)) {
      uVar5 = param_2 >> 1;
      param_2 = param_2 >> 0x3e;
      pcVar16 = (char *)(uVar5 << 3);
      if ((-1 < (long)pcVar16) && (param_2 == 0)) {
        lVar6 = FUN_00412980();
        pcVar16 = DAT_006255c8;
        if (DAT_006246a0 < uVar14) {
          lVar11 = DAT_006246a0 * 8 + 8;
          do {
            *(long *)(pcVar16 + lVar11 * 3 + -8) = lVar6;
            lVar6 = lVar6 + lVar11;
            lVar11 = lVar11 + 8;
          } while (uVar14 * 8 + 8 != lVar11);
        }
        goto LAB_00407933;
      }
    }
LAB_00407adb:
                    /* WARNING: Subroutine does not return */
    FUN_00412bd0(pcVar16,param_2,uVar10);
  }
LAB_00407933:
  DAT_006246a0 = uVar14;
  uVar14 = DAT_00625770;
  pcVar16 = DAT_006255c8;
  if (uVar13 != 0) {
    lVar11 = 0;
    lVar6 = 3;
    do {
      puVar7 = *(undefined **)(pcVar16 + lVar6 * 8 + -8);
      pcVar16[lVar6 * 8 + -0x18] = '\x01';
      lVar11 = lVar11 + 8;
      *(long *)(pcVar16 + lVar6 * 8 + -0x10) = lVar6;
      puVar2 = (undefined *)((long)puVar7 + lVar11);
      do {
        *puVar7 = 3;
        puVar7 = puVar7 + 1;
      } while (puVar2 != puVar7);
      lVar6 = lVar6 + 3;
    } while (lVar6 != uVar13 * 3 + 3);
  }
  uVar10 = 0;
  if (uVar14 != 0) {
    do {
      uVar8 = FUN_00407690(*(undefined *)(DAT_00625760 + uVar10 * 8));
      uVar5 = DAT_00625770;
      uVar14 = DAT_00625670;
      if (uVar13 != 0) {
        pcVar16 = DAT_006255c8;
        uVar15 = 0;
        do {
          uVar1 = uVar15 + 1;
          if (*pcVar16 != '\0') {
            if (param_1 == '\0') {
              uVar12 = uVar10 % uVar1;
            }
            else {
              uVar12 = SUB168(ZEXT816(uVar10) /
                              (ZEXT816((uVar5 - 1) + uVar1) / ZEXT816(uVar1) &
                              (undefined)0xffffffffffffffff),0);
            }
            uVar9 = uVar8;
            if (uVar12 != uVar15) {
              uVar9 = uVar8 + 2;
            }
            puVar3 = (ulong *)(*(long *)(pcVar16 + 0x10) + uVar12 * 8);
            uVar15 = *puVar3;
            if (uVar15 < uVar9) {
              *(ulong *)(pcVar16 + 8) = (*(long *)(pcVar16 + 8) - uVar15) + uVar9;
              *puVar3 = uVar9;
              *pcVar16 = *(ulong *)(pcVar16 + 8) < uVar14;
            }
          }
          pcVar16 = pcVar16 + 0x18;
          uVar15 = uVar1;
        } while (uVar13 != uVar1);
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar5);
  }
  if ((1 < uVar13) && (DAT_006255c8[uVar13 * 0x18 + -0x18] == '\0')) {
    pcVar16 = DAT_006255c8 + uVar13 * 0x18 + -0x30;
    do {
      uVar13 = uVar13 - 1;
      if (uVar13 == 1) {
        return 1;
      }
      cVar4 = *pcVar16;
      pcVar16 = pcVar16 + -0x18;
    } while (cVar4 == '\0');
  }
  return uVar13;
}


void FUN_00407ae0(char param_1)

{
  ulong uVar1;
  undefined uVar2;
  char *pcVar3;
  ulong uVar4;
  int iVar5;
  char cVar6;
  ulong uVar7;
  ulong uVar8;
  
  if (DAT_00625770 != 0) {
    uVar7 = 0;
    uVar8 = 0;
    do {
      uVar2 = *(undefined *)(DAT_00625760 + uVar7 * 8);
      if (DAT_00625670 == 0) {
        uVar4 = uVar8;
        if (uVar7 != 0) {
          uVar1 = uVar8 + 2;
LAB_00407b88:
          uVar4 = uVar1;
          uVar8 = uVar8 + 2;
          iVar5 = 0x20;
          cVar6 = ' ';
          goto LAB_00407b92;
        }
      }
      else {
        uVar4 = FUN_00407690(uVar2);
        if (uVar7 == 0) {
          uVar4 = uVar8 + uVar4;
        }
        else {
          uVar1 = uVar4 + uVar8 + 2;
          if ((DAT_00625670 == 0) || ((uVar1 < DAT_00625670 && (uVar8 <= -uVar4 - 3))))
          goto LAB_00407b88;
          iVar5 = 10;
          cVar6 = '\n';
          uVar8 = 0;
LAB_00407b92:
          pcVar3 = stdout->_IO_write_ptr;
          if (pcVar3 < stdout->_IO_write_end) {
            stdout->_IO_write_ptr = pcVar3 + 1;
            *pcVar3 = param_1;
          }
          else {
            __overflow(stdout,(int)param_1);
          }
          pcVar3 = stdout->_IO_write_ptr;
          if (pcVar3 < stdout->_IO_write_end) {
            stdout->_IO_write_ptr = pcVar3 + 1;
            *pcVar3 = cVar6;
          }
          else {
            __overflow(stdout,iVar5);
          }
        }
      }
      uVar7 = uVar7 + 1;
      FUN_00406af0(uVar2,uVar8);
      uVar8 = uVar4;
    } while (uVar7 < DAT_00625770);
  }
  pcVar3 = stdout->_IO_write_ptr;
  if (stdout->_IO_write_end <= pcVar3) {
    __overflow(stdout,10);
    return;
  }
  stdout->_IO_write_ptr = pcVar3 + 1;
  *pcVar3 = '\n';
  return;
}


void FUN_00407ca0(void)

{
  long lVar1;
  char *pcVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined uVar9;
  long lVar10;
  ulong local_48;
  
  switch(DAT_006256f8) {
  case 0:
    uVar3 = 0;
    if (DAT_00625770 == 0) {
      return;
    }
    do {
      FUN_00405e30();
      FUN_00406c60(DAT_00625760[uVar3]);
      pcVar2 = stdout->_IO_write_ptr;
      if (pcVar2 < stdout->_IO_write_end) {
        stdout->_IO_write_ptr = pcVar2 + 1;
        *pcVar2 = '\n';
      }
      else {
        __overflow(stdout,10);
      }
      DAT_006255b8 = DAT_006255b8 + 1;
      uVar3 = uVar3 + 1;
    } while (uVar3 < DAT_00625770);
    return;
  case 1:
    uVar3 = 0;
    if (DAT_00625770 != 0) {
      do {
        FUN_00406af0(DAT_00625760[uVar3],0);
        pcVar2 = stdout->_IO_write_ptr;
        if (pcVar2 < stdout->_IO_write_end) {
          stdout->_IO_write_ptr = pcVar2 + 1;
          *pcVar2 = '\n';
        }
        else {
          __overflow(stdout,10);
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < DAT_00625770);
    }
    return;
  case 2:
    if (DAT_00625670 != 0) {
      uVar3 = FUN_00407800(1);
      local_48 = 0;
      lVar1 = DAT_006255c8 + uVar3 * 0x18;
      uVar3 = (ulong)(DAT_00625770 % uVar3 != 0) + DAT_00625770 / uVar3;
      if (uVar3 == 0) {
        return;
      }
      do {
        lVar4 = 0;
        lVar8 = 0;
        uVar6 = local_48;
        while( true ) {
          uVar9 = DAT_00625760[uVar6];
          lVar10 = FUN_00407690(uVar9);
          lVar7 = *(long *)(*(long *)(lVar1 + -8) + lVar4);
          lVar4 = lVar4 + 8;
          FUN_00406af0(uVar9,lVar8);
          uVar6 = uVar6 + uVar3;
          if (DAT_00625770 <= uVar6) break;
          lVar7 = lVar7 + lVar8;
          FUN_004052c0(lVar10 + lVar8,lVar7);
          lVar8 = lVar7;
        }
        pcVar2 = stdout->_IO_write_ptr;
        if (pcVar2 < stdout->_IO_write_end) {
          stdout->_IO_write_ptr = pcVar2 + 1;
          *pcVar2 = '\n';
        }
        else {
          __overflow(stdout,10);
        }
        local_48 = local_48 + 1;
      } while (uVar3 != local_48);
      return;
    }
    break;
  case 3:
    if (DAT_00625670 != 0) {
      uVar3 = FUN_00407800(0);
      lVar1 = DAT_006255c8 + -0x18 + uVar3 * 0x18;
      uVar9 = *DAT_00625760;
      lVar4 = FUN_00407690(uVar9);
      lVar8 = **(long **)(lVar1 + 0x10);
      FUN_00406af0(uVar9,0);
      if (1 < DAT_00625770) {
        uVar6 = 1;
        lVar7 = 0;
        do {
          uVar5 = uVar6 % uVar3;
          if (uVar5 == 0) {
            pcVar2 = stdout->_IO_write_ptr;
            if (pcVar2 < stdout->_IO_write_end) {
              lVar10 = 0;
              stdout->_IO_write_ptr = pcVar2 + 1;
              *pcVar2 = '\n';
            }
            else {
              lVar10 = 0;
              __overflow(stdout,10);
            }
          }
          else {
            lVar10 = lVar8 + lVar7;
            FUN_004052c0(lVar7 + lVar4,lVar10);
          }
          uVar9 = DAT_00625760[uVar6];
          uVar6 = uVar6 + 1;
          FUN_00406af0(uVar9,lVar10);
          lVar4 = FUN_00407690(uVar9);
          lVar8 = *(long *)(*(long *)(lVar1 + 0x10) + uVar5 * 8);
          lVar7 = lVar10;
        } while (uVar6 < DAT_00625770);
      }
      pcVar2 = stdout->_IO_write_ptr;
      if (pcVar2 < stdout->_IO_write_end) {
        stdout->_IO_write_ptr = pcVar2 + 1;
        *pcVar2 = '\n';
        return;
      }
      __overflow(stdout,10);
      return;
    }
    break;
  case 4:
    uVar9 = 0x2c;
    goto LAB_00407dcd;
  default:
    return;
  }
  uVar9 = 0x20;
LAB_00407dcd:
  FUN_00407ae0(uVar9);
  return;
}


uint FUN_00408040(char **param_1,char **param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  bool bVar6;
  
  iVar1 = *(int *)(param_1 + 0x15);
  iVar2 = *(int *)(param_2 + 0x15);
  if ((iVar2 == 9 || iVar2 == 3) || (iVar1 != 3 && iVar1 != 9)) {
    if ((iVar1 != 3 && iVar1 != 9) && (iVar2 == 9 || iVar2 == 3)) {
      return 1;
    }
    pcVar3 = param_1[9];
    pcVar4 = param_2[9];
    bVar6 = param_2[9] == pcVar3;
    if (bVar6 || (long)pcVar4 < (long)pcVar3) {
      if (bVar6) {
        uVar5 = strcmp(*param_2,*param_1);
        return uVar5;
      }
      return (uint)((long)pcVar4 < (long)pcVar3);
    }
  }
  return 0xffffffff;
}


uint FUN_004080c0(char **param_1,char **param_2)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  int *piVar4;
  bool bVar5;
  
  pcVar1 = param_2[9];
  pcVar2 = param_1[9];
  bVar5 = param_1[9] != pcVar1;
  if (bVar5 && (long)pcVar1 <= (long)pcVar2) {
    return 0xffffffff;
  }
  if (!bVar5) {
    pcVar1 = *param_2;
    pcVar2 = *param_1;
    piVar4 = __errno_location();
    *piVar4 = 0;
    uVar3 = strcoll(pcVar2,pcVar1);
    return uVar3;
  }
  return (uint)((long)pcVar2 < (long)pcVar1);
}


uint FUN_00408100(char **param_1,char **param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  int *piVar6;
  bool bVar7;
  
  iVar1 = *(int *)(param_1 + 0x15);
  iVar2 = *(int *)(param_2 + 0x15);
  if ((iVar2 == 9 || iVar2 == 3) || (iVar1 != 3 && iVar1 != 9)) {
    if ((iVar1 != 3 && iVar1 != 9) && (iVar2 == 9 || iVar2 == 3)) {
      return 1;
    }
    pcVar3 = param_2[9];
    pcVar4 = param_1[9];
    bVar7 = param_1[9] == pcVar3;
    if (bVar7 || (long)pcVar4 < (long)pcVar3) {
      if (bVar7) {
        pcVar3 = *param_2;
        pcVar4 = *param_1;
        piVar6 = __errno_location();
        *piVar6 = 0;
        uVar5 = strcoll(pcVar4,pcVar3);
        return uVar5;
      }
      return (uint)((long)pcVar4 < (long)pcVar3);
    }
  }
  return 0xffffffff;
}


uint FUN_00408180(char **param_1,char **param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  bool bVar6;
  
  iVar1 = *(int *)(param_1 + 0x15);
  iVar2 = *(int *)(param_2 + 0x15);
  if ((iVar2 == 9 || iVar2 == 3) || (iVar1 != 3 && iVar1 != 9)) {
    if ((iVar1 != 3 && iVar1 != 9) && (iVar2 == 9 || iVar2 == 3)) {
      return 1;
    }
    pcVar3 = param_2[9];
    pcVar4 = param_1[9];
    bVar6 = param_1[9] == pcVar3;
    if (bVar6 || (long)pcVar4 < (long)pcVar3) {
      if (bVar6) {
        uVar5 = strcmp(*param_1,*param_2);
        return uVar5;
      }
      return (uint)((long)pcVar4 < (long)pcVar3);
    }
  }
  return 0xffffffff;
}


uint FUN_00408200(char **param_1,char **param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  int *piVar6;
  bool bVar7;
  
  iVar1 = *(int *)(param_1 + 0x15);
  iVar2 = *(int *)(param_2 + 0x15);
  if ((iVar2 == 9 || iVar2 == 3) || (iVar1 != 3 && iVar1 != 9)) {
    if ((iVar1 != 3 && iVar1 != 9) && (iVar2 == 9 || iVar2 == 3)) {
      return 1;
    }
    pcVar3 = param_1[9];
    pcVar4 = param_2[9];
    bVar7 = param_2[9] == pcVar3;
    if (bVar7 || (long)pcVar4 < (long)pcVar3) {
      if (bVar7) {
        pcVar3 = *param_1;
        pcVar4 = *param_2;
        piVar6 = __errno_location();
        *piVar6 = 0;
        uVar5 = strcoll(pcVar4,pcVar3);
        return uVar5;
      }
      return (uint)((long)pcVar4 < (long)pcVar3);
    }
  }
  return 0xffffffff;
}


uint FUN_00408280(char **param_1,char **param_2)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  int *piVar4;
  bool bVar5;
  
  pcVar1 = param_1[9];
  pcVar2 = param_2[9];
  bVar5 = param_2[9] != pcVar1;
  if (bVar5 && (long)pcVar1 <= (long)pcVar2) {
    return 0xffffffff;
  }
  if (!bVar5) {
    pcVar1 = *param_1;
    pcVar2 = *param_2;
    piVar4 = __errno_location();
    *piVar4 = 0;
    uVar3 = strcoll(pcVar2,pcVar1);
    return uVar3;
  }
  return (uint)((long)pcVar2 < (long)pcVar1);
}


uint FUN_004082c0(char **param_1,char **param_2)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  bool bVar4;
  
  pcVar1 = param_1[9];
  pcVar2 = param_2[9];
  bVar4 = param_2[9] != pcVar1;
  if (bVar4 && (long)pcVar1 <= (long)pcVar2) {
    return 0xffffffff;
  }
  if (!bVar4) {
    uVar3 = strcmp(*param_2,*param_1);
    return uVar3;
  }
  return (uint)((long)pcVar2 < (long)pcVar1);
}


int FUN_00408300(char **param_1,char **param_2)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  iVar4 = *(int *)(param_2 + 0x15);
  bVar5 = *(int *)(param_1 + 0x15) == 3 || *(int *)(param_1 + 0x15) == 9;
  if ((iVar4 != 9 && iVar4 != 3) && (bVar5)) {
    return -1;
  }
  if ((bVar5) || (iVar3 = 1, iVar4 != 9 && iVar4 != 3)) {
    pcVar1 = param_2[0x10];
    pcVar2 = param_1[0x10];
    if (param_1[0x10] != pcVar1 && (long)pcVar1 <= (long)pcVar2) {
      return -1;
    }
    if ((long)pcVar2 < (long)pcVar1) {
      return 1;
    }
    iVar3 = (int)param_2[0x11] - *(int *)(param_1 + 0x11);
    if (iVar3 == 0) {
      iVar4 = strcmp(*param_1,*param_2);
      return iVar4;
    }
  }
  return iVar3;
}


int FUN_00408390(char **param_1,char **param_2)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  iVar4 = *(int *)(param_2 + 0x15);
  bVar5 = *(int *)(param_1 + 0x15) == 3 || *(int *)(param_1 + 0x15) == 9;
  if ((iVar4 != 9 && iVar4 != 3) && (bVar5)) {
    return -1;
  }
  if ((bVar5) || (iVar3 = 1, iVar4 != 9 && iVar4 != 3)) {
    pcVar1 = param_2[0xe];
    pcVar2 = param_1[0xe];
    if (param_1[0xe] != pcVar1 && (long)pcVar1 <= (long)pcVar2) {
      return -1;
    }
    if ((long)pcVar2 < (long)pcVar1) {
      return 1;
    }
    iVar3 = (int)param_2[0xf] - *(int *)(param_1 + 0xf);
    if (iVar3 == 0) {
      iVar4 = strcmp(*param_1,*param_2);
      return iVar4;
    }
  }
  return iVar3;
}


int FUN_00408410(undefined param_1)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  uint local_38 [10];
  
  if (DAT_006256ed == '\0') {
    lVar4 = FUN_0040e160();
    if (lVar4 != 0) {
      iVar1 = FUN_0040eb70(lVar4,0);
      if (iVar1 < 0) {
        iVar1 = 0;
      }
      return iVar1;
    }
  }
  __sprintf_chk(local_38,1,0x15,&DAT_0041b064,param_1);
  puVar3 = local_38;
  do {
    puVar2 = puVar3;
    uVar5 = *puVar2 + 0xfefefeff & ~*puVar2;
    uVar6 = uVar5 & 0x80808080;
    puVar3 = puVar2 + 1;
  } while (uVar6 == 0);
  bVar7 = (uVar5 & 0x8080) == 0;
  if (bVar7) {
    uVar6 = uVar6 >> 0x10;
  }
  if (bVar7) {
    puVar3 = (uint *)((long)puVar2 + 6);
  }
  return (((int)puVar3 + -3) - (uint)CARRY1((byte)uVar6,(byte)uVar6)) - (int)local_38;
}


void FUN_004084b0(void)

{
  long *plVar1;
  void **ppvVar2;
  long *plVar3;
  
  plVar1 = DAT_00625760 + DAT_00625770;
  plVar3 = DAT_00625760;
  if (DAT_00625770 != 0) {
    do {
      ppvVar2 = (void **)*plVar3;
      plVar3 = plVar3 + 1;
      free(*ppvVar2);
      free(ppvVar2[1]);
      free(ppvVar2[2]);
    } while (plVar3 != plVar1);
  }
  DAT_00625769 = 0;
  DAT_00625770 = 0;
  DAT_00625724 = 0;
  DAT_00625720 = 0;
  DAT_0062571c = 0;
  DAT_00625718 = 0;
  DAT_00625710 = 0;
  DAT_0062570c = 0;
  DAT_00625708 = 0;
  DAT_00625714 = 0;
  DAT_00625704 = 0;
  DAT_00625700 = 0;
  DAT_006256fc = 0;
  return;
}


/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined FUN_00408580(byte *param_1,int param_2,char param_3,byte *param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  undefined *puVar3;
  undefined uVar4;
  byte *pbVar5;
  byte bVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  undefined uVar11;
  char *pcVar12;
  size_t sVar13;
  size_t sVar14;
  char *__dest;
  char *__dest_00;
  stat *psVar15;
  stat *psVar16;
  undefined uVar17;
  long lVar18;
  byte bVar19;
  ulong uVar20;
  uint uVar21;
  undefined *puVar22;
  undefined *puVar23;
  byte *pbVar24;
  undefined *puVar25;
  byte *pbVar26;
  byte bVar27;
  byte *pbVar28;
  bool bVar29;
  undefined auStack_308 [8];
  byte abStack_300 [6];
  byte local_2fa;
  byte local_2f9;
  int *local_2f8;
  byte *local_2f0;
  undefined local_2e8 [32];
  stat local_2c8 [4];
  
  bVar6 = 0;
  puVar23 = auStack_308;
  puVar22 = auStack_308;
  local_2f0 = param_1;
  if (DAT_00625770 == _DAT_00625778) {
    if ((SUB168(ZEXT816(400) * ZEXT816(DAT_00625770),0) < 0) ||
       (SUB168(ZEXT816(400) * ZEXT816(DAT_00625770) >> 0x40,0) != 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00412bd0();
    }
    DAT_00625780 = FUN_004129e0(DAT_00625780,DAT_00625770 * 400);
    _DAT_00625778 = _DAT_00625778 << 1;
  }
  puVar3 = (undefined *)(DAT_00625780 + DAT_00625770 * 200);
  *puVar3 = 0;
  *(undefined *)((long)puVar3 + 0xbc) = 0;
  puVar25 = (undefined *)((ulong)(puVar3 + 1) & 0xfffffffffffffff8);
  for (uVar20 = (ulong)(((int)puVar3 - (int)(undefined *)((ulong)(puVar3 + 1) & 0xfffffffffffffff8)
                        ) + 0xc4U >> 3); uVar20 != 0; uVar20 = uVar20 - 1) {
    *puVar25 = 0;
    puVar25 = puVar25 + (ulong)bVar6 * -2 + 1;
  }
  puVar3[4] = 0;
  *(int *)(puVar3 + 0x15) = param_2;
  bVar29 = DAT_00625769 == '\0';
  *(undefined *)((long)puVar3 + 0xc4) = 0xffffffff;
  if ((bVar29) && (DAT_00625768 != '\0')) {
    bVar6 = FUN_00404e20(local_2f0);
    *(uint *)((long)puVar3 + 0xc4) = (uint)bVar6;
    if (bVar6 != 0) {
      DAT_00625769 = '\x01';
    }
  }
  pbVar28 = local_2f0;
  if (param_3 == '\0') {
    if (DAT_006256d1 != 0) {
      bVar6 = *local_2f0;
      puVar23 = auStack_308;
      if ((bVar6 != 0x2f) &&
         (bVar19 = *param_4, puVar23 = auStack_308, local_2f8._0_1_ = DAT_006256d1, bVar19 != 0))
      goto LAB_00408c43;
      goto LAB_00408b5a;
    }
    local_2f8._0_1_ = DAT_006256d1;
    if (DAT_00625661 == '\0') {
      if ((param_2 == 3) && (DAT_006256d2 != '\0')) {
        local_2f8 = (int *)((ulong)local_2f8 & 0xffffffffffffff00);
        cVar7 = FUN_00404ae0(0x13);
        if (cVar7 == '\0') {
          cVar7 = FUN_00404ae0(0x12);
          if (cVar7 == '\0') {
            cVar7 = FUN_00404ae0(0x14);
            if (cVar7 == '\0') goto LAB_00408818;
          }
        }
      }
      else {
LAB_00408818:
        if (DAT_006256bc == '\0') {
          if (DAT_00625660 != '\0') {
            if ((param_2 == 6) || (param_2 == 0)) goto LAB_00409074;
            if (DAT_00625660 != '\0') {
LAB_0040885b:
              uVar17 = 0;
              puVar23 = auStack_308;
              if (param_2 != 5) goto LAB_004087c8;
              if (DAT_006256d4 != 3) {
                local_2f8 = (int *)((ulong)local_2f8 & 0xffffffffffffff00 | (ulong)(byte)local_2f8);
                puVar23 = auStack_308;
                if (DAT_006256d2 == '\0') goto LAB_004087c8;
                cVar7 = FUN_00404ae0(0xe);
                if (cVar7 == '\0') {
                  cVar7 = FUN_00404ae0(0x10);
                  if (cVar7 == '\0') {
                    cVar7 = FUN_00404ae0(0x11);
                    if (cVar7 == '\0') {
                      cVar7 = FUN_00404ae0(0x15);
                      puVar23 = auStack_308;
                      if (cVar7 == '\0') goto LAB_004087c8;
                    }
                  }
                }
              }
              goto LAB_004088e8;
            }
          }
LAB_00409100:
          uVar17 = 0;
          goto LAB_004087c8;
        }
        if ((param_2 == 6) || (param_2 == 0)) {
LAB_00409074:
          if ((DAT_006256b8 != 5) &&
             (((DAT_00625750 == '\0' && (DAT_006256bd == '\0')) && (DAT_006256bc == '\0')))) {
            if (DAT_00625660 == '\0') goto LAB_00409100;
            if (param_2 != 0) goto LAB_0040885b;
          }
        }
      }
    }
LAB_004088e8:
    bVar6 = *local_2f0;
    if ((bVar6 != 0x2f) && (bVar19 = *param_4, bVar19 != 0)) {
LAB_00408c43:
      local_2fa = (byte)local_2f8;
      local_2f8 = (int *)((ulong)local_2f8 & 0xffffffffffffff00 | (ulong)bVar19);
      local_2f9 = bVar6;
      sVar13 = strlen((char *)local_2f0);
      sVar14 = strlen((char *)param_4);
      bVar6 = param_4[1];
      lVar18 = -(sVar13 + 0x19 + sVar14 & 0xfffffffffffffff0);
      puVar23 = auStack_308 + lVar18;
      pbVar28 = abStack_300 + lVar18;
      pbVar24 = param_4;
      pbVar26 = pbVar28;
      bVar19 = local_2f9;
      pbVar5 = local_2f0;
      if (((byte)local_2f8 != 0x2e) || (pbVar2 = pbVar28, bVar6 != 0)) {
        while( true ) {
          pbVar2 = pbVar26 + 1;
          *pbVar26 = (byte)local_2f8;
          if (bVar6 == 0) break;
          pbVar1 = pbVar24 + 2;
          pbVar24 = pbVar24 + 1;
          pbVar26 = pbVar2;
          local_2f8._0_1_ = bVar6;
          bVar6 = *pbVar1;
        }
        if ((param_4 < pbVar24 + 1) && (*pbVar24 != 0x2f)) {
          *pbVar2 = 0x2f;
          pbVar2 = pbVar26 + 2;
        }
      }
      while (bVar19 != 0) {
        *pbVar2 = bVar19;
        pbVar2 = pbVar2 + 1;
        bVar19 = pbVar5[1];
        pbVar5 = pbVar5 + 1;
      }
      *pbVar2 = 0;
      bVar27 = local_2fa;
      goto LAB_0040869f;
    }
    puVar23 = auStack_308;
    pbVar28 = local_2f0;
    if ((2 < DAT_006256b8) &&
       ((puVar23 = auStack_308, 4 < DAT_006256b8 && (puVar23 = auStack_308, DAT_006256b8 == 5))))
    goto LAB_004086cd;
LAB_00408930:
    *(undefined *)(puVar23 + -8) = 0x408940;
    iVar8 = __lxstat(1,(char *)pbVar28,(stat *)(puVar3 + 3));
joined_r0x00408942:
    if (iVar8 != 0) {
      *(undefined *)(puVar23 + -8) = 0x408959;
      uVar11 = dcgettext(0,"cannot access %s",5);
      uVar17 = 0;
      *(undefined *)(puVar23 + -8) = 0x40896b;
      FUN_00405580(param_3,uVar11,pbVar28);
      if (param_3 != '\0') {
        return 0;
      }
      goto LAB_004087c8;
    }
  }
  else {
    bVar6 = *local_2f0;
    puVar23 = auStack_308;
    bVar27 = DAT_006256d1;
    if ((bVar6 != 0x2f) &&
       (bVar19 = *param_4, puVar23 = auStack_308, local_2f8._0_1_ = DAT_006256d1, bVar19 != 0))
    goto LAB_00408c43;
LAB_0040869f:
    if (bVar27 != 0) {
LAB_00408b5a:
      *(undefined *)(puVar23 + -8) = 0x408b67;
      lVar18 = FUN_0040b070(pbVar28,2);
      puVar3[2] = lVar18;
      if (lVar18 == 0) {
        *(undefined *)(puVar23 + -8) = 0x408b85;
        uVar17 = dcgettext(0,"error canonicalizing %s",5);
        *(undefined *)(puVar23 + -8) = 0x408b94;
        FUN_00405580(param_3,uVar17,pbVar28);
      }
    }
    if (DAT_006256b8 < 3) goto LAB_00408930;
    if (4 < DAT_006256b8) {
      puVar22 = puVar23;
      if (DAT_006256b8 != 5) goto LAB_00408930;
LAB_004086cd:
      *(undefined *)(puVar22 + -8) = 0x4086dd;
      iVar8 = __xstat(1,(char *)pbVar28,(stat *)(puVar3 + 3));
      puVar23 = puVar22;
      goto joined_r0x00408942;
    }
    if (param_3 == '\0') goto LAB_00408930;
    local_2f8 = (int *)((ulong)local_2f8 & 0xffffffff00000000 | (ulong)DAT_006256b8);
    *(undefined *)(puVar23 + -8) = 0x408bbf;
    iVar8 = __xstat(1,(char *)pbVar28,(stat *)(puVar3 + 3));
    if ((int)local_2f8 != 3) {
      if (iVar8 < 0) {
        *(undefined *)(puVar23 + -8) = 0x4090c5;
        piVar10 = __errno_location();
        if (*piVar10 != 2) goto LAB_004090ce;
      }
      else if ((*(uint *)(puVar3 + 6) & 0xf000) == 0x4000) goto LAB_00408be7;
      goto LAB_00408930;
    }
LAB_00408be7:
    if (iVar8 != 0) {
LAB_004090ce:
      *(undefined *)(puVar23 + -8) = 0x4090df;
      uVar17 = dcgettext(0,"cannot access %s",5);
      *(undefined *)(puVar23 + -8) = 0x4090f2;
      FUN_00405580(1,uVar17,pbVar28);
      return 0;
    }
  }
  *(undefined *)(puVar3 + 0x17) = 1;
  if (((param_2 == 5) || ((*(uint *)(puVar3 + 6) & 0xf000) == 0x8000)) && (DAT_006256d2 != '\0')) {
    *(undefined *)(puVar23 + -8) = 0x408b07;
    cVar7 = FUN_00404ae0(0x15);
    if (cVar7 != '\0') {
      *(undefined *)(puVar23 + -8) = 0x408b14;
      piVar10 = __errno_location();
      lVar18 = puVar3[3];
      bVar29 = lVar18 != _DAT_006246b8;
      *piVar10 = 0x5f;
      if (bVar29) {
        _DAT_006246b8 = lVar18;
      }
      *(undefined *)(puVar3 + 0x18) = 0;
    }
  }
  if ((DAT_006256f8 == 0) || (DAT_00625725 != '\0')) {
    *(undefined *)(puVar23 + -8) = 0x408723;
    piVar10 = __errno_location();
    lVar18 = puVar3[3];
    bVar29 = lVar18 != _DAT_006246b0;
    *piVar10 = 0x5f;
    iVar8 = DAT_006256f8;
    if (bVar29) {
      _DAT_006246b0 = lVar18;
    }
    puVar3[0x16] = &DAT_006245aa;
    if (iVar8 != 0) {
      *(undefined *)((long)puVar3 + 0xbc) = 0;
      goto LAB_00408765;
    }
    if (lVar18 == _DAT_006246a8) {
      *piVar10 = 0x5f;
      *(undefined *)((long)puVar3 + 0xbc) = 0;
      uVar9 = *(uint *)(puVar3 + 6) & 0xf000;
      if (uVar9 != 0xa000) goto LAB_00408778;
      goto LAB_00408e1d;
    }
    *piVar10 = 0;
    local_2f8 = piVar10;
    *(undefined *)(puVar23 + -8) = 0x408dd6;
    iVar8 = FUN_0040b900(pbVar28,puVar3 + 3);
    if (iVar8 < 1) {
      if (((*local_2f8 - 0x16U & 0xffffffef) == 0) || (*local_2f8 == 0x5f)) {
        _DAT_006246a8 = puVar3[3];
      }
      *(undefined *)((long)puVar3 + 0xbc) = 0;
      if (iVar8 < 0) {
        *(undefined *)(puVar23 + -8) = 0x40915a;
        uVar17 = FUN_00412110(0,3,pbVar28);
        iVar8 = *local_2f8;
        *(undefined *)(puVar23 + -8) = 0x409175;
        error(0,iVar8,&DAT_0041d784,uVar17);
      }
    }
    else {
      *(undefined *)((long)puVar3 + 0xbc) = 2;
      DAT_00625724 = 1;
    }
    uVar9 = *(uint *)(puVar3 + 6) & 0xf000;
    if (uVar9 == 0xa000) {
      if (DAT_006256f8 == 0) goto LAB_00408e1d;
      goto LAB_00408e10;
    }
LAB_00408778:
    if (uVar9 == 0x4000) {
      if ((param_3 == '\0') || (DAT_006256b5 != '\0')) {
        *(undefined *)(puVar3 + 0x15) = 3;
      }
      else {
        *(undefined *)(puVar3 + 0x15) = 9;
      }
    }
    else {
      *(undefined *)(puVar3 + 0x15) = 5;
    }
  }
  else {
LAB_00408765:
    uVar9 = *(uint *)(puVar3 + 6) & 0xf000;
    if (uVar9 != 0xa000) goto LAB_00408778;
LAB_00408e10:
    if (DAT_006256bd != '\0') {
LAB_00408e1d:
      uVar17 = puVar3[9];
      *(undefined *)(puVar23 + -8) = 0x408e29;
      pcVar12 = (char *)FUN_0040abf0(pbVar28,uVar17);
      puVar3[1] = pcVar12;
      if (pcVar12 == (char *)0x0) {
        *(undefined *)(puVar23 + -8) = 0x409191;
        uVar17 = dcgettext(0,"cannot read symbolic link %s",5);
        *(undefined *)(puVar23 + -8) = 0x4091a0;
        FUN_00405580(param_3,uVar17,pbVar28);
        pcVar12 = (char *)puVar3[1];
        if (pcVar12 != (char *)0x0) goto LAB_00408e39;
LAB_004091ad:
        __dest = (char *)0x0;
      }
      else {
LAB_00408e39:
        if (*pcVar12 == '/') {
LAB_00409048:
          *(undefined *)(puVar23 + -8) = 0x409050;
          __dest = (char *)FUN_00412bb0(pcVar12);
        }
        else {
          *(undefined *)(puVar23 + -8) = 0x408e4b;
          piVar10 = (int *)FUN_0040b7b0(pbVar28);
          if (piVar10 == (int *)0x0) goto LAB_00409048;
          local_2f8 = piVar10;
          *(undefined *)(puVar23 + -8) = 0x408e63;
          sVar13 = strlen(pcVar12);
          lVar18 = (long)local_2f8 + sVar13 + 2;
          *(undefined *)(puVar23 + -8) = 0x408e74;
          __dest = (char *)FUN_00412980(lVar18);
          piVar10 = local_2f8;
          if ((pbVar28 + -1)[(long)local_2f8] != 0x2f) {
            piVar10 = (int *)((long)local_2f8 + 1);
          }
          *(undefined *)(puVar23 + -8) = 0x408e95;
          __dest_00 = stpncpy(__dest,(char *)pbVar28,(size_t)piVar10);
          *(undefined *)(puVar23 + -8) = 0x408ea0;
          strcpy(__dest_00,pcVar12);
        }
        if (__dest == (char *)0x0) goto LAB_004091ad;
        if (*(int *)((long)puVar3 + 0xc4) == 0) {
          uVar17 = puVar3[1];
          *(undefined *)(puVar23 + -8) = 0x409259;
          cVar7 = FUN_00404e20(uVar17);
          if (cVar7 != '\0') {
            *(undefined *)((long)puVar3 + 0xc4) = 0xffffffff;
          }
        }
        if ((1 < DAT_006256d4) || (DAT_006256bd != '\0')) {
          *(undefined *)(puVar23 + -8) = 0x408f0c;
          iVar8 = __xstat(1,__dest,local_2c8);
          if ((iVar8 == 0) &&
             (((*(undefined *)((long)puVar3 + 0xb9) = 1, param_3 == '\0' || (DAT_006256f8 == 0)) ||
              ((local_2c8[0].st_mode & 0xf000) != 0x4000)))) {
            *(__mode_t *)((long)puVar3 + 0xac) = local_2c8[0].st_mode;
          }
        }
      }
      *(undefined *)(puVar23 + -8) = 0x408ed1;
      free(__dest);
      uVar9 = *(uint *)(puVar3 + 6) & 0xf000;
      if (uVar9 != 0xa000) goto LAB_00408778;
    }
    *(undefined *)(puVar3 + 0x15) = 6;
  }
  uVar17 = puVar3[0xb];
  if ((DAT_006256f8 == 0) || (DAT_006256ec != '\0')) {
    *(undefined *)(puVar23 + -8) = 0x4089a4;
    uVar11 = FUN_0040d5d0(uVar17,local_2c8,DAT_006256e8,0x200,DAT_006256e0);
    *(undefined *)(puVar23 + -8) = 0x4089ae;
    iVar8 = FUN_0040eb70(uVar11,0);
    if (DAT_0062571c < iVar8) {
      DAT_0062571c = iVar8;
    }
    if (DAT_006256f8 != 0) goto LAB_004087ac;
    if (DAT_006245a9 != '\0') {
      uVar4 = *(undefined *)((long)puVar3 + 0x34);
      *(undefined *)(puVar23 + -8) = 0x408f88;
      iVar8 = FUN_00408410(uVar4);
      if (DAT_00625710 < iVar8) {
        DAT_00625710 = iVar8;
      }
    }
    if (DAT_006245a8 != '\0') {
      uVar4 = *(undefined *)(puVar3 + 7);
      if (DAT_006256ed == '\0') {
        *(undefined *)(puVar23 + -8) = 0x409228;
        lVar18 = FUN_0040e2f0(uVar4);
        if (lVar18 == 0) goto LAB_00408fd1;
        *(undefined *)(puVar23 + -8) = 0x40923b;
        iVar8 = FUN_0040eb70(lVar18,0);
        if (iVar8 < 0) {
          iVar8 = 0;
        }
      }
      else {
LAB_00408fd1:
        *(undefined *)(puVar23 + -8) = 0x408fed;
        __sprintf_chk(local_2c8,1,0x15,&DAT_0041b064,uVar4);
        psVar16 = local_2c8;
        do {
          psVar15 = psVar16;
          psVar16 = (stat *)((long)&psVar15->st_dev + 4);
          uVar21 = *(uint *)&psVar15->st_dev + 0xfefefeff & ~*(uint *)&psVar15->st_dev;
          uVar9 = uVar21 & 0x80808080;
        } while (uVar9 == 0);
        bVar29 = (uVar21 & 0x8080) == 0;
        if (bVar29) {
          uVar9 = uVar9 >> 0x10;
        }
        if (bVar29) {
          psVar16 = (stat *)((long)&psVar15->st_dev + 6);
        }
        iVar8 = (((int)psVar16 + -3) - (uint)CARRY1((byte)uVar9,(byte)uVar9)) - (int)local_2c8;
      }
      if (DAT_0062570c < iVar8) {
        DAT_0062570c = iVar8;
      }
    }
    if (DAT_006256ee != '\0') {
      uVar4 = *(undefined *)((long)puVar3 + 0x34);
      *(undefined *)(puVar23 + -8) = 0x408fa8;
      iVar8 = FUN_00408410(uVar4);
      if (DAT_00625708 < iVar8) {
        DAT_00625708 = iVar8;
      }
    }
    if (DAT_00625725 != '\0') goto LAB_004089fa;
LAB_00408a12:
    if (DAT_006256f8 == 0) {
      uVar11 = puVar3[5];
      *(undefined *)(puVar23 + -8) = 0x408a30;
      pcVar12 = (char *)FUN_0040e520(uVar11,local_2e8);
      *(undefined *)(puVar23 + -8) = 0x408a38;
      sVar13 = strlen(pcVar12);
      if (DAT_00625718 < (int)sVar13) {
        DAT_00625718 = (int)sVar13;
      }
      if ((*(uint *)(puVar3 + 6) & 0xb000) == 0x2000) {
        uVar11 = puVar3[8];
        *(undefined *)(puVar23 + -8) = 0x408a8a;
        pcVar12 = (char *)FUN_0040e520((uint)((ulong)uVar11 >> 0x20) & 0xfffff000 |
                                       (uint)((ulong)uVar11 >> 8) & 0xfff,local_2c8);
        *(undefined *)(puVar23 + -8) = 0x408a92;
        sVar13 = strlen(pcVar12);
        if (DAT_00625704 < (int)sVar13) {
          DAT_00625704 = (int)sVar13;
        }
        uVar20 = puVar3[8];
        *(undefined *)(puVar23 + -8) = 0x408abb;
        pcVar12 = (char *)FUN_0040e520((uint)((uVar20 >> 0x14) << 8) | (uint)uVar20 & 0xff,local_2c8
                                      );
        *(undefined *)(puVar23 + -8) = 0x408ac3;
        sVar13 = strlen(pcVar12);
        if (DAT_00625700 < (int)sVar13) {
          DAT_00625700 = (int)sVar13;
        }
        iVar8 = DAT_00625700 + 2 + DAT_00625704;
        if (DAT_006256fc < iVar8) {
LAB_00408d88:
          DAT_006256fc = iVar8;
        }
      }
      else {
        uVar11 = puVar3[9];
        *(undefined *)(puVar23 + -8) = 0x408d72;
        uVar11 = FUN_0040d5d0(uVar11,local_2c8,DAT_006256dc,1,DAT_006245a0);
        *(undefined *)(puVar23 + -8) = 0x408d7c;
        iVar8 = FUN_0040eb70(uVar11,0);
        if (DAT_006256fc < iVar8) goto LAB_00408d88;
      }
    }
  }
  else {
LAB_004087ac:
    if (DAT_00625725 != '\0') {
LAB_004089fa:
      pcVar12 = (char *)puVar3[0x16];
      *(undefined *)(puVar23 + -8) = 0x408a06;
      sVar13 = strlen(pcVar12);
      if (DAT_00625714 < (int)sVar13) {
        DAT_00625714 = (int)sVar13;
      }
      goto LAB_00408a12;
    }
  }
  if (DAT_006256bc != '\0') {
    uVar11 = puVar3[4];
    *(undefined *)(puVar23 + -8) = 0x408c08;
    pcVar12 = (char *)FUN_0040e520(uVar11,local_2c8);
    *(undefined *)(puVar23 + -8) = 0x408c10;
    sVar13 = strlen(pcVar12);
    if (DAT_00625720 < (int)sVar13) {
      DAT_00625720 = (int)sVar13;
    }
  }
LAB_004087c8:
  pbVar28 = local_2f0;
  *(undefined *)(puVar23 + -8) = 0x4087d4;
  uVar11 = FUN_00412bb0(pbVar28);
  DAT_00625770 = DAT_00625770 + 1;
  *puVar3 = uVar11;
  return uVar17;
}


void FUN_004092a0(char *param_1,char *param_2,undefined param_3)

{
  __dev_t _Var1;
  __ino_t _Var2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  int iVar6;
  int *piVar7;
  DIR *__dirp;
  __ino_t *p_Var8;
  __ino_t *p_Var9;
  undefined uVar10;
  undefined uVar11;
  dirent *pdVar12;
  char *pcVar13;
  size_t sVar14;
  long lVar15;
  void *__ptr;
  undefined uVar16;
  long local_2d8;
  stat local_2c8 [4];
  
  piVar7 = __errno_location();
  *piVar7 = 0;
  __dirp = opendir(param_1);
  if (__dirp == (DIR *)0x0) {
    uVar10 = dcgettext(0,"cannot open directory %s",5);
    FUN_00405580(param_3,uVar10,param_1);
    return;
  }
  if (DAT_00625788 != 0) {
    iVar6 = dirfd(__dirp);
    if (iVar6 < 0) {
      iVar6 = __xstat(1,param_1,local_2c8);
      _Var1 = local_2c8[0].st_dev;
      _Var2 = local_2c8[0].st_ino;
    }
    else {
      iVar6 = __fxstat(1,iVar6,local_2c8);
      _Var1 = local_2c8[0].st_dev;
      _Var2 = local_2c8[0].st_ino;
    }
    if (iVar6 < 0) {
      uVar10 = dcgettext(0,"cannot determine device and inode of %s",5);
      FUN_00405580(param_3,uVar10,param_1);
      closedir(__dirp);
      return;
    }
    local_2c8[0].st_dev = _Var1;
    local_2c8[0].st_ino = _Var2;
    p_Var8 = (__ino_t *)FUN_00412980(0x10);
    lVar15 = DAT_00625788;
    *p_Var8 = _Var2;
    p_Var8[1] = _Var1;
    p_Var9 = (__ino_t *)FUN_0040d220(lVar15,p_Var8);
    if (p_Var9 == (__ino_t *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00412bd0();
    }
    if (p_Var8 != p_Var9) {
      free(p_Var8);
      uVar10 = FUN_00412110(0,3,param_1);
      uVar11 = dcgettext(0,"%s: not listing already-listed directory",5);
      error(0,0,uVar11,uVar10);
      closedir(__dirp);
      DAT_006255d0 = 2;
      return;
    }
    p_Var8 = DAT_006254b8;
    if ((ulong)(DAT_006254c0 - (long)DAT_006254b8) < 0x10) {
      _obstack_newchunk(&DAT_006254a0,0x10);
      p_Var8 = DAT_006254b8;
    }
    DAT_006254b8 = p_Var8 + 2;
    p_Var8[1] = local_2c8[0].st_dev;
    *p_Var8 = local_2c8[0].st_ino;
  }
  FUN_004084b0();
  if ((DAT_006256b6 != '\0') || (DAT_00625678 != '\0')) {
    if (DAT_00624400 == '\0') {
      pcVar13 = stdout->_IO_write_ptr;
      if (pcVar13 < stdout->_IO_write_end) {
        stdout->_IO_write_ptr = pcVar13 + 1;
        *pcVar13 = '\n';
      }
      else {
        __overflow(stdout,10);
      }
      DAT_006255b8 = DAT_006255b8 + 1;
    }
    DAT_00624400 = '\0';
    if (DAT_006256d8 != '\0') {
      fwrite_unlocked(&DAT_0041b093,1,2,stdout);
      DAT_006255b8 = DAT_006255b8 + 2;
    }
    __ptr = (void *)0x0;
    if ((DAT_006256d1 != '\0') && (__ptr = (void *)FUN_0040b070(param_1,2), __ptr == (void *)0x0)) {
      uVar10 = dcgettext(0,"error canonicalizing %s",5);
      FUN_00405580(param_3,uVar10,param_1);
    }
    if (param_2 == (char *)0x0) {
      param_2 = param_1;
    }
    FUN_004062d0(param_2,DAT_00625688,0xffffffff,0,1,&DAT_00625500,__ptr);
    free(__ptr);
    fwrite_unlocked(":\n",1,2,stdout);
    DAT_006255b8 = DAT_006255b8 + 2;
  }
  local_2d8 = 0;
  do {
    *piVar7 = 0;
    pdVar12 = readdir(__dirp);
    if (pdVar12 == (dirent *)0x0) {
      if (*piVar7 == 0) {
LAB_00409623:
        iVar6 = closedir(__dirp);
        if (iVar6 != 0) {
          uVar10 = dcgettext(0,"closing directory %s",5);
          FUN_00405580(param_3,uVar10,param_1);
        }
        FUN_00404f40();
        if (DAT_006256b6 != '\0') {
          FUN_00405140(param_1,0);
        }
        if ((DAT_006256f8 == 0) || (DAT_006256ec != '\0')) {
          if (DAT_006256d8 != '\0') {
            fwrite_unlocked(&DAT_0041b093,1,2,stdout);
            DAT_006255b8 = DAT_006255b8 + 2;
          }
          pcVar13 = (char *)dcgettext(0,"total",5);
          fputs_unlocked(pcVar13,stdout);
          sVar14 = strlen(pcVar13);
          DAT_006255b8 = DAT_006255b8 + sVar14;
          pcVar13 = stdout->_IO_write_ptr;
          if (pcVar13 < stdout->_IO_write_end) {
            stdout->_IO_write_ptr = pcVar13 + 1;
            *pcVar13 = ' ';
          }
          else {
            __overflow(stdout,0x20);
          }
          DAT_006255b8 = DAT_006255b8 + 1;
          pcVar13 = (char *)FUN_0040d5d0(local_2d8,local_2c8,DAT_006256e8,0x200,DAT_006256e0);
          fputs_unlocked(pcVar13,stdout);
          sVar14 = strlen(pcVar13);
          DAT_006255b8 = DAT_006255b8 + sVar14;
          pcVar13 = stdout->_IO_write_ptr;
          if (pcVar13 < stdout->_IO_write_end) {
            stdout->_IO_write_ptr = pcVar13 + 1;
            *pcVar13 = '\n';
          }
          else {
            __overflow(stdout,10);
          }
          DAT_006255b8 = DAT_006255b8 + 1;
        }
        if (DAT_00625770 != 0) {
          FUN_00407ca0();
        }
        return;
      }
      uVar10 = dcgettext(0,"reading directory %s",5);
      FUN_00405580(param_3,uVar10,param_1);
      if (*piVar7 != 0x4b) goto LAB_00409623;
    }
    else {
      pcVar13 = pdVar12->d_name;
      puVar4 = DAT_006256a8;
      if (DAT_006256b0 != 2) {
        if (pdVar12->d_name[0] == '.') {
          if ((DAT_006256b0 == 0) ||
             (pdVar12->d_name[(ulong)(pdVar12->d_name[1] == '.') + 1] == '\0')) goto LAB_00409580;
        }
        else {
          puVar3 = DAT_006256a0;
          if (DAT_006256b0 == 0) {
            for (; puVar4 = DAT_006256a8, puVar3 != (undefined *)0x0;
                puVar3 = (undefined *)puVar3[1]) {
              iVar6 = FUN_004159a0(*puVar3,pcVar13,4);
              if (iVar6 == 0) goto LAB_00409580;
            }
          }
        }
      }
      for (; puVar4 != (undefined *)0x0; puVar4 = (undefined *)puVar4[1]) {
        iVar6 = FUN_004159a0(*puVar4,pcVar13,4);
        if (iVar6 == 0) goto LAB_00409580;
      }
      uVar16 = 0;
      bVar5 = pdVar12->d_type - 1;
      if (bVar5 < 0xe) {
        uVar16 = *(undefined *)(&DAT_004194a0 + (ulong)bVar5 * 4);
      }
      lVar15 = FUN_00408580(pcVar13,uVar16,0,param_1);
      local_2d8 = local_2d8 + lVar15;
      if ((((DAT_006256f8 == 1) && (DAT_006256f0 == -1)) && (DAT_006256ec == '\0')) &&
         (DAT_006256b6 == '\0')) {
        FUN_00404f40();
        FUN_00407ca0();
        FUN_004084b0();
      }
    }
LAB_00409580:
    FUN_00405d70();
  } while( true );
}


int FUN_00409960(char **param_1,char **param_2)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  
  pcVar1 = param_2[0x10];
  pcVar2 = param_1[0x10];
  if (param_1[0x10] != pcVar1 && (long)pcVar1 <= (long)pcVar2) {
    return -1;
  }
  if ((long)pcVar2 < (long)pcVar1) {
    iVar3 = 1;
  }
  else {
    iVar3 = (int)param_2[0x11] - *(int *)(param_1 + 0x11);
    if (iVar3 == 0) {
      pcVar1 = *param_2;
      pcVar2 = *param_1;
      piVar4 = __errno_location();
      *piVar4 = 0;
      iVar3 = strcoll(pcVar2,pcVar1);
      return iVar3;
    }
  }
  return iVar3;
}


int FUN_004099b0(char **param_1,char **param_2)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  
  pcVar1 = param_2[0xe];
  pcVar2 = param_1[0xe];
  if (param_1[0xe] != pcVar1 && (long)pcVar1 <= (long)pcVar2) {
    return -1;
  }
  if ((long)pcVar2 < (long)pcVar1) {
    iVar3 = 1;
  }
  else {
    iVar3 = (int)param_2[0xf] - *(int *)(param_1 + 0xf);
    if (iVar3 == 0) {
      pcVar1 = *param_2;
      pcVar2 = *param_1;
      piVar4 = __errno_location();
      *piVar4 = 0;
      iVar3 = strcoll(pcVar2,pcVar1);
      return iVar3;
    }
  }
  return iVar3;
}


int FUN_004099f0(char **param_1,char **param_2)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  
  pcVar1 = param_2[0xc];
  pcVar2 = param_1[0xc];
  if (param_1[0xc] != pcVar1 && (long)pcVar1 <= (long)pcVar2) {
    return -1;
  }
  if ((long)pcVar2 < (long)pcVar1) {
    iVar3 = 1;
  }
  else {
    iVar3 = (int)param_2[0xd] - *(int *)(param_1 + 0xd);
    if (iVar3 == 0) {
      pcVar1 = *param_2;
      pcVar2 = *param_1;
      piVar4 = __errno_location();
      *piVar4 = 0;
      iVar3 = strcoll(pcVar2,pcVar1);
      return iVar3;
    }
  }
  return iVar3;
}


int FUN_00409a30(char **param_1,char **param_2)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  
  pcVar1 = param_1[0x10];
  pcVar2 = param_2[0x10];
  if (param_2[0x10] != pcVar1 && (long)pcVar1 <= (long)pcVar2) {
    return -1;
  }
  if ((long)pcVar2 < (long)pcVar1) {
    iVar3 = 1;
  }
  else {
    iVar3 = (int)param_1[0x11] - *(int *)(param_2 + 0x11);
    if (iVar3 == 0) {
      pcVar1 = *param_1;
      pcVar2 = *param_2;
      piVar4 = __errno_location();
      *piVar4 = 0;
      iVar3 = strcoll(pcVar2,pcVar1);
      return iVar3;
    }
  }
  return iVar3;
}


int FUN_00409a80(char **param_1,char **param_2)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  
  pcVar1 = param_1[0xe];
  pcVar2 = param_2[0xe];
  if (param_2[0xe] != pcVar1 && (long)pcVar1 <= (long)pcVar2) {
    return -1;
  }
  if ((long)pcVar2 < (long)pcVar1) {
    iVar3 = 1;
  }
  else {
    iVar3 = (int)param_1[0xf] - *(int *)(param_2 + 0xf);
    if (iVar3 == 0) {
      pcVar1 = *param_1;
      pcVar2 = *param_2;
      piVar4 = __errno_location();
      *piVar4 = 0;
      iVar3 = strcoll(pcVar2,pcVar1);
      return iVar3;
    }
  }
  return iVar3;
}


int FUN_00409ac0(char **param_1,char **param_2)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  
  pcVar1 = param_1[0xc];
  pcVar2 = param_2[0xc];
  if (param_2[0xc] != pcVar1 && (long)pcVar1 <= (long)pcVar2) {
    return -1;
  }
  if ((long)pcVar2 < (long)pcVar1) {
    iVar3 = 1;
  }
  else {
    iVar3 = (int)param_1[0xd] - *(int *)(param_2 + 0xd);
    if (iVar3 == 0) {
      pcVar1 = *param_1;
      pcVar2 = *param_2;
      piVar4 = __errno_location();
      *piVar4 = 0;
      iVar3 = strcoll(pcVar2,pcVar1);
      return iVar3;
    }
  }
  return iVar3;
}


int FUN_00409b00(char **param_1,char **param_2)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  bool bVar6;
  
  iVar3 = *(int *)(param_2 + 0x15);
  bVar6 = *(int *)(param_1 + 0x15) == 3 || *(int *)(param_1 + 0x15) == 9;
  if ((iVar3 != 9 && iVar3 != 3) && (bVar6)) {
    return -1;
  }
  if ((bVar6) || (iVar4 = 1, iVar3 != 9 && iVar3 != 3)) {
    pcVar1 = param_2[0xc];
    pcVar2 = param_1[0xc];
    if (param_1[0xc] != pcVar1 && (long)pcVar1 <= (long)pcVar2) {
      return -1;
    }
    if ((long)pcVar2 < (long)pcVar1) {
      return 1;
    }
    iVar4 = (int)param_2[0xd] - *(int *)(param_1 + 0xd);
    if (iVar4 == 0) {
      pcVar1 = *param_2;
      pcVar2 = *param_1;
      piVar5 = __errno_location();
      *piVar5 = 0;
      iVar3 = strcoll(pcVar2,pcVar1);
      return iVar3;
    }
  }
  return iVar4;
}


int FUN_00409b80(char **param_1,char **param_2)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  bool bVar6;
  
  iVar3 = *(int *)(param_2 + 0x15);
  bVar6 = *(int *)(param_1 + 0x15) == 3 || *(int *)(param_1 + 0x15) == 9;
  if ((iVar3 != 9 && iVar3 != 3) && (bVar6)) {
    return -1;
  }
  if ((bVar6) || (iVar4 = 1, iVar3 != 9 && iVar3 != 3)) {
    pcVar1 = param_1[0xe];
    pcVar2 = param_2[0xe];
    if (param_2[0xe] != pcVar1 && (long)pcVar1 <= (long)pcVar2) {
      return -1;
    }
    if ((long)pcVar2 < (long)pcVar1) {
      return 1;
    }
    iVar4 = (int)param_1[0xf] - *(int *)(param_2 + 0xf);
    if (iVar4 == 0) {
      pcVar1 = *param_1;
      pcVar2 = *param_2;
      piVar5 = __errno_location();
      *piVar5 = 0;
      iVar3 = strcoll(pcVar2,pcVar1);
      return iVar3;
    }
  }
  return iVar4;
}


int FUN_00409c00(char **param_1,char **param_2)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  bool bVar6;
  
  iVar3 = *(int *)(param_2 + 0x15);
  bVar6 = *(int *)(param_1 + 0x15) == 3 || *(int *)(param_1 + 0x15) == 9;
  if ((iVar3 != 9 && iVar3 != 3) && (bVar6)) {
    return -1;
  }
  if ((bVar6) || (iVar4 = 1, iVar3 != 9 && iVar3 != 3)) {
    pcVar1 = param_1[0xc];
    pcVar2 = param_2[0xc];
    if (param_2[0xc] != pcVar1 && (long)pcVar1 <= (long)pcVar2) {
      return -1;
    }
    if ((long)pcVar2 < (long)pcVar1) {
      return 1;
    }
    iVar4 = (int)param_1[0xd] - *(int *)(param_2 + 0xd);
    if (iVar4 == 0) {
      pcVar1 = *param_1;
      pcVar2 = *param_2;
      piVar5 = __errno_location();
      *piVar5 = 0;
      iVar3 = strcoll(pcVar2,pcVar1);
      return iVar3;
    }
  }
  return iVar4;
}


int FUN_00409c80(char **param_1,char **param_2)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  bool bVar6;
  
  iVar3 = *(int *)(param_2 + 0x15);
  bVar6 = *(int *)(param_1 + 0x15) == 3 || *(int *)(param_1 + 0x15) == 9;
  if ((iVar3 != 9 && iVar3 != 3) && (bVar6)) {
    return -1;
  }
  if ((bVar6) || (iVar4 = 1, iVar3 != 9 && iVar3 != 3)) {
    pcVar1 = param_2[0xe];
    pcVar2 = param_1[0xe];
    if (param_1[0xe] != pcVar1 && (long)pcVar1 <= (long)pcVar2) {
      return -1;
    }
    if ((long)pcVar2 < (long)pcVar1) {
      return 1;
    }
    iVar4 = (int)param_2[0xf] - *(int *)(param_1 + 0xf);
    if (iVar4 == 0) {
      pcVar1 = *param_2;
      pcVar2 = *param_1;
      piVar5 = __errno_location();
      *piVar5 = 0;
      iVar3 = strcoll(pcVar2,pcVar1);
      return iVar3;
    }
  }
  return iVar4;
}


int FUN_00409d00(char **param_1,char **param_2)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  bool bVar6;
  
  iVar3 = *(int *)(param_2 + 0x15);
  bVar6 = *(int *)(param_1 + 0x15) == 3 || *(int *)(param_1 + 0x15) == 9;
  if ((iVar3 != 9 && iVar3 != 3) && (bVar6)) {
    return -1;
  }
  if ((bVar6) || (iVar4 = 1, iVar3 != 9 && iVar3 != 3)) {
    pcVar1 = param_1[0x10];
    pcVar2 = param_2[0x10];
    if (param_2[0x10] != pcVar1 && (long)pcVar1 <= (long)pcVar2) {
      return -1;
    }
    if ((long)pcVar2 < (long)pcVar1) {
      return 1;
    }
    iVar4 = (int)param_1[0x11] - *(int *)(param_2 + 0x11);
    if (iVar4 == 0) {
      pcVar1 = *param_1;
      pcVar2 = *param_2;
      piVar5 = __errno_location();
      *piVar5 = 0;
      iVar3 = strcoll(pcVar2,pcVar1);
      return iVar3;
    }
  }
  return iVar4;
}


int FUN_00409d90(char **param_1,char **param_2)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  bool bVar6;
  
  iVar3 = *(int *)(param_2 + 0x15);
  bVar6 = *(int *)(param_1 + 0x15) == 3 || *(int *)(param_1 + 0x15) == 9;
  if ((iVar3 != 9 && iVar3 != 3) && (bVar6)) {
    return -1;
  }
  if ((bVar6) || (iVar4 = 1, iVar3 != 9 && iVar3 != 3)) {
    pcVar1 = param_2[0x10];
    pcVar2 = param_1[0x10];
    if (param_1[0x10] != pcVar1 && (long)pcVar1 <= (long)pcVar2) {
      return -1;
    }
    if ((long)pcVar2 < (long)pcVar1) {
      return 1;
    }
    iVar4 = (int)param_2[0x11] - *(int *)(param_1 + 0x11);
    if (iVar4 == 0) {
      pcVar1 = *param_2;
      pcVar2 = *param_1;
      piVar5 = __errno_location();
      *piVar5 = 0;
      iVar3 = strcoll(pcVar2,pcVar1);
      return iVar3;
    }
  }
  return iVar4;
}


int FUN_00409e20(char **param_1,char **param_2)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  
  pcVar1 = param_1[0xc];
  pcVar2 = param_2[0xc];
  if (param_2[0xc] != pcVar1 && (long)pcVar1 <= (long)pcVar2) {
    return -1;
  }
  if ((long)pcVar2 < (long)pcVar1) {
    iVar3 = 1;
  }
  else {
    iVar3 = (int)param_1[0xd] - *(int *)(param_2 + 0xd);
    if (iVar3 == 0) {
      iVar3 = strcmp(*param_2,*param_1);
      return iVar3;
    }
  }
  return iVar3;
}


int FUN_00409e60(char **param_1,char **param_2)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  
  pcVar1 = param_1[0x10];
  pcVar2 = param_2[0x10];
  if (param_2[0x10] != pcVar1 && (long)pcVar1 <= (long)pcVar2) {
    return -1;
  }
  if ((long)pcVar2 < (long)pcVar1) {
    iVar3 = 1;
  }
  else {
    iVar3 = (int)param_1[0x11] - *(int *)(param_2 + 0x11);
    if (iVar3 == 0) {
      iVar3 = strcmp(*param_2,*param_1);
      return iVar3;
    }
  }
  return iVar3;
}


int FUN_00409eb0(char **param_1,char **param_2)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  
  pcVar1 = param_1[0xe];
  pcVar2 = param_2[0xe];
  if (param_2[0xe] != pcVar1 && (long)pcVar1 <= (long)pcVar2) {
    return -1;
  }
  if ((long)pcVar2 < (long)pcVar1) {
    iVar3 = 1;
  }
  else {
    iVar3 = (int)param_1[0xf] - *(int *)(param_2 + 0xf);
    if (iVar3 == 0) {
      iVar3 = strcmp(*param_2,*param_1);
      return iVar3;
    }
  }
  return iVar3;
}


int FUN_00409ef0(char **param_1,char **param_2)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  
  pcVar1 = param_2[0xc];
  pcVar2 = param_1[0xc];
  if (param_1[0xc] != pcVar1 && (long)pcVar1 <= (long)pcVar2) {
    return -1;
  }
  if ((long)pcVar2 < (long)pcVar1) {
    iVar3 = 1;
  }
  else {
    iVar3 = (int)param_2[0xd] - *(int *)(param_1 + 0xd);
    if (iVar3 == 0) {
      iVar3 = strcmp(*param_1,*param_2);
      return iVar3;
    }
  }
  return iVar3;
}


int FUN_00409f30(char **param_1,char **param_2)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  
  pcVar1 = param_2[0x10];
  pcVar2 = param_1[0x10];
  if (param_1[0x10] != pcVar1 && (long)pcVar1 <= (long)pcVar2) {
    return -1;
  }
  if ((long)pcVar2 < (long)pcVar1) {
    iVar3 = 1;
  }
  else {
    iVar3 = (int)param_2[0x11] - *(int *)(param_1 + 0x11);
    if (iVar3 == 0) {
      iVar3 = strcmp(*param_1,*param_2);
      return iVar3;
    }
  }
  return iVar3;
}


int FUN_00409f80(char **param_1,char **param_2)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  
  pcVar1 = param_2[0xe];
  pcVar2 = param_1[0xe];
  if (param_1[0xe] != pcVar1 && (long)pcVar1 <= (long)pcVar2) {
    return -1;
  }
  if ((long)pcVar2 < (long)pcVar1) {
    iVar3 = 1;
  }
  else {
    iVar3 = (int)param_2[0xf] - *(int *)(param_1 + 0xf);
    if (iVar3 == 0) {
      iVar3 = strcmp(*param_1,*param_2);
      return iVar3;
    }
  }
  return iVar3;
}


void FUN_00409fc0(char **param_1,char **param_2)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  char *pcVar4;
  
  pcVar3 = strrchr(*param_1,0x2e);
  pcVar4 = strrchr(*param_2,0x2e);
  if (pcVar4 == (char *)0x0) {
    pcVar4 = "";
  }
  if (pcVar3 == (char *)0x0) {
    pcVar3 = "";
  }
  iVar1 = FUN_004050d0(pcVar3,pcVar4);
  if (iVar1 == 0) {
    pcVar3 = *param_2;
    pcVar4 = *param_1;
    piVar2 = __errno_location();
    *piVar2 = 0;
    strcoll(pcVar4,pcVar3);
    return;
  }
  return;
}


void FUN_0040a030(char **param_1,char **param_2)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  char *pcVar4;
  
  pcVar3 = strrchr(*param_2,0x2e);
  pcVar4 = strrchr(*param_1,0x2e);
  if (pcVar4 == (char *)0x0) {
    pcVar4 = "";
  }
  if (pcVar3 == (char *)0x0) {
    pcVar3 = "";
  }
  iVar1 = FUN_004050d0(pcVar3,pcVar4);
  if (iVar1 == 0) {
    pcVar3 = *param_1;
    pcVar4 = *param_2;
    piVar2 = __errno_location();
    *piVar2 = 0;
    strcoll(pcVar4,pcVar3);
    return;
  }
  return;
}


int FUN_0040a0a0(char **param_1,char **param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  char *pcVar5;
  
  iVar2 = *(int *)(param_1 + 0x15);
  iVar1 = *(int *)(param_2 + 0x15);
  if ((iVar1 != 9 && iVar1 != 3) && (iVar2 == 3 || iVar2 == 9)) {
    return -1;
  }
  if ((iVar2 != 3 && iVar2 != 9) && (iVar1 == 9 || iVar1 == 3)) {
    return 1;
  }
  pcVar4 = strrchr(*param_2,0x2e);
  pcVar5 = strrchr(*param_1,0x2e);
  if (pcVar5 == (char *)0x0) {
    pcVar5 = "";
  }
  if (pcVar4 == (char *)0x0) {
    pcVar4 = "";
  }
  iVar2 = FUN_004050d0(pcVar4,pcVar5);
  if (iVar2 != 0) {
    return iVar2;
  }
  pcVar4 = *param_1;
  pcVar5 = *param_2;
  piVar3 = __errno_location();
  *piVar3 = 0;
  iVar2 = strcoll(pcVar5,pcVar4);
  return iVar2;
}


int FUN_0040a150(char **param_1,char **param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  char *pcVar5;
  
  iVar2 = *(int *)(param_1 + 0x15);
  iVar1 = *(int *)(param_2 + 0x15);
  if ((iVar1 != 9 && iVar1 != 3) && (iVar2 == 3 || iVar2 == 9)) {
    return -1;
  }
  if ((iVar2 != 3 && iVar2 != 9) && (iVar1 == 9 || iVar1 == 3)) {
    return 1;
  }
  pcVar4 = strrchr(*param_1,0x2e);
  pcVar5 = strrchr(*param_2,0x2e);
  if (pcVar5 == (char *)0x0) {
    pcVar5 = "";
  }
  if (pcVar4 == (char *)0x0) {
    pcVar4 = "";
  }
  iVar2 = FUN_004050d0(pcVar4,pcVar5);
  if (iVar2 != 0) {
    return iVar2;
  }
  pcVar4 = *param_2;
  pcVar5 = *param_1;
  piVar3 = __errno_location();
  *piVar3 = 0;
  iVar2 = strcoll(pcVar5,pcVar4);
  return iVar2;
}


int FUN_0040a200(char **param_1,char **param_2)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  iVar4 = *(int *)(param_2 + 0x15);
  bVar5 = *(int *)(param_1 + 0x15) == 3 || *(int *)(param_1 + 0x15) == 9;
  if ((iVar4 != 9 && iVar4 != 3) && (bVar5)) {
    return -1;
  }
  if ((bVar5) || (iVar3 = 1, iVar4 != 9 && iVar4 != 3)) {
    pcVar1 = param_1[0xe];
    pcVar2 = param_2[0xe];
    if (param_2[0xe] != pcVar1 && (long)pcVar1 <= (long)pcVar2) {
      return -1;
    }
    if ((long)pcVar2 < (long)pcVar1) {
      return 1;
    }
    iVar3 = (int)param_1[0xf] - *(int *)(param_2 + 0xf);
    if (iVar3 == 0) {
      iVar4 = strcmp(*param_2,*param_1);
      return iVar4;
    }
  }
  return iVar3;
}


int FUN_0040a280(char **param_1,char **param_2)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  iVar4 = *(int *)(param_2 + 0x15);
  bVar5 = *(int *)(param_1 + 0x15) == 3 || *(int *)(param_1 + 0x15) == 9;
  if ((iVar4 != 9 && iVar4 != 3) && (bVar5)) {
    return -1;
  }
  if ((bVar5) || (iVar3 = 1, iVar4 != 9 && iVar4 != 3)) {
    pcVar1 = param_1[0x10];
    pcVar2 = param_2[0x10];
    if (param_2[0x10] != pcVar1 && (long)pcVar1 <= (long)pcVar2) {
      return -1;
    }
    if ((long)pcVar2 < (long)pcVar1) {
      return 1;
    }
    iVar3 = (int)param_1[0x11] - *(int *)(param_2 + 0x11);
    if (iVar3 == 0) {
      iVar4 = strcmp(*param_2,*param_1);
      return iVar4;
    }
  }
  return iVar3;
}


int FUN_0040a310(char **param_1,char **param_2)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  iVar4 = *(int *)(param_2 + 0x15);
  bVar5 = *(int *)(param_1 + 0x15) == 3 || *(int *)(param_1 + 0x15) == 9;
  if ((iVar4 != 9 && iVar4 != 3) && (bVar5)) {
    return -1;
  }
  if ((bVar5) || (iVar3 = 1, iVar4 != 9 && iVar4 != 3)) {
    pcVar1 = param_1[0xc];
    pcVar2 = param_2[0xc];
    if (param_2[0xc] != pcVar1 && (long)pcVar1 <= (long)pcVar2) {
      return -1;
    }
    if ((long)pcVar2 < (long)pcVar1) {
      return 1;
    }
    iVar3 = (int)param_1[0xd] - *(int *)(param_2 + 0xd);
    if (iVar3 == 0) {
      iVar4 = strcmp(*param_2,*param_1);
      return iVar4;
    }
  }
  return iVar3;
}


void FUN_0040a390(char **param_1,char **param_2)

{
  char *__s;
  char *__s_00;
  int iVar1;
  char *__s1;
  char *__s2;
  
  __s = *param_2;
  __s1 = strrchr(__s,0x2e);
  __s_00 = *param_1;
  __s2 = strrchr(__s_00,0x2e);
  if (__s2 == (char *)0x0) {
    __s2 = "";
    if (__s1 == (char *)0x0) goto LAB_0040a3ea;
  }
  else if (__s1 == (char *)0x0) {
    __s1 = "";
  }
  iVar1 = strcmp(__s1,__s2);
  if (iVar1 != 0) {
    return;
  }
LAB_0040a3ea:
  strcmp(__s,__s_00);
  return;
}


void FUN_0040a400(char **param_1,char **param_2)

{
  char *__s;
  char *__s_00;
  int iVar1;
  char *__s1;
  char *__s2;
  
  __s = *param_1;
  __s1 = strrchr(__s,0x2e);
  __s_00 = *param_2;
  __s2 = strrchr(__s_00,0x2e);
  if (__s2 == (char *)0x0) {
    __s2 = "";
    if (__s1 == (char *)0x0) goto LAB_0040a45a;
  }
  else if (__s1 == (char *)0x0) {
    __s1 = "";
  }
  iVar1 = strcmp(__s1,__s2);
  if (iVar1 != 0) {
    return;
  }
LAB_0040a45a:
  strcmp(__s,__s_00);
  return;
}


int FUN_0040a470(char **param_1,char **param_2)

{
  int iVar1;
  char *__s;
  char *__s_00;
  int iVar2;
  char *__s1;
  char *__s2;
  
  iVar2 = *(int *)(param_1 + 0x15);
  iVar1 = *(int *)(param_2 + 0x15);
  if ((iVar1 != 9 && iVar1 != 3) && (iVar2 == 3 || iVar2 == 9)) {
    return -1;
  }
  if ((iVar2 != 3 && iVar2 != 9) && (iVar1 == 9 || iVar1 == 3)) {
    return 1;
  }
  __s = *param_1;
  __s1 = strrchr(__s,0x2e);
  __s_00 = *param_2;
  __s2 = strrchr(__s_00,0x2e);
  if (__s2 == (char *)0x0) {
    __s2 = "";
    if (__s1 == (char *)0x0) goto LAB_0040a50a;
  }
  else if (__s1 == (char *)0x0) {
    __s1 = "";
  }
  iVar2 = strcmp(__s1,__s2);
  if (iVar2 != 0) {
    return iVar2;
  }
LAB_0040a50a:
  iVar2 = strcmp(__s,__s_00);
  return iVar2;
}


void FUN_0040a530(int param_1)

{
  FILE *pFVar1;
  int iVar2;
  undefined uVar3;
  char *pcVar4;
  undefined uVar5;
  char *pcVar6;
  char **ppcVar7;
  char *pcVar8;
  bool bVar9;
  char *local_88;
  char *local_80;
  char *local_78 [4];
  char *local_58;
  char *local_50;
  char *local_48;
  char *local_40;
  undefined *local_38;
  char *local_30;
  undefined local_28;
  undefined local_20;
  
  uVar5 = DAT_006257c0;
  ppcVar7 = &local_88;
  if (param_1 != 0) {
    uVar3 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(stderr,1,uVar3,uVar5);
    goto LAB_0040a570;
  }
  uVar3 = dcgettext(0,"Usage: %s [OPTION]... [FILE]...\n",5);
  __printf_chk(1,uVar3,uVar5);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "List information about the FILEs (the current directory by default).\nSort entries alphabetically if none of -cftuvSUX nor --sort is specified.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nMandatory arguments to long options are mandatory for short options too.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -a, --all                  do not ignore entries starting with .\n  -A, --almost-all           do not list implied . and ..\n      --author               with -l, print the author of each file\n  -b, --escape               print C-style escapes for nongraphic characters\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --block-size=SIZE      with -l, scale sizes by SIZE when printing them;\n                               e.g., \'--block-size=M\'; see SIZE format below\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -B, --ignore-backups       do not list implied entries ending with ~\n  -c                         with -lt: sort by, and show, ctime (time of last\n                               modification of file status information);\n                               with -l: show ctime and sort by name;\n                               otherwise: sort by ctime, newest first\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -C                         list entries by columns\n      --color[=WHEN]         colorize the output; WHEN can be \'always\' (default\n                               if omitted), \'auto\', or \'never\'; more info below\n  -d, --directory            list directories themselves, not their contents\n  -D, --dired                generate output designed for Emacs\' dired mode\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -f                         do not sort, enable -aU, disable -ls --color\n  -F, --classify             append indicator (one of */=>@|) to entries\n      --file-type            likewise, except do not append \'*\'\n      --format=WORD          across -x, commas -m, horizontal -x, long -l,\n                               single-column -1, verbose -l, vertical -C\n      --full-time            like -l --time-style=full-iso\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"  -g                         like -l, but do not list owner\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --group-directories-first\n                             group directories before files;\n                               can be augmented with a --sort option, but any\n                               use of --sort=none (-U) disables grouping\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -G, --no-group             in a long listing, don\'t print group names\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -h, --human-readable       with -l and -s, print sizes like 1K 234M 2G etc.\n      --si                   likewise, but use powers of 1000 not 1024\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -H, --dereference-command-line\n                             follow symbolic links listed on the command line\n      --dereference-command-line-symlink-to-dir\n                             follow each command line symbolic link\n                               that points to a directory\n      --hide=PATTERN         do not list implied entries matching shell PATTERN\n                               (overridden by -a or -A)\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --hyperlink[=WHEN]     hyperlink file names; WHEN can be \'always\'\n                               (default if omitted), \'auto\', or \'never\'\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --indicator-style=WORD  append indicator with style WORD to entry names:\n                               none (default), slash (-p),\n                               file-type (--file-type), classify (-F)\n  -i, --inode                print the index number of each file\n  -I, --ignore=PATTERN       do not list implied entries matching shell PATTERN\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -k, --kibibytes            default to 1024-byte blocks for disk usage;\n                               used only with -s and per directory totals\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -l                         use a long listing format\n  -L, --dereference          when showing file information for a symbolic\n                               link, show information for the file the link\n                               references rather than for the link itself\n  -m                         fill width with a comma separated list of entries\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -n, --numeric-uid-gid      like -l, but list numeric user and group IDs\n  -N, --literal              print entry names without quoting\n  -o                         like -l, but do not list group information\n  -p, --indicator-style=slash\n                             append / indicator to directories\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -q, --hide-control-chars   print ? instead of nongraphic characters\n      --show-control-chars   show nongraphic characters as-is (the default,\n                               unless program is \'ls\' and output is a terminal)\n  -Q, --quote-name           enclose entry names in double quotes\n      --quoting-style=WORD   use quoting style WORD for entry names:\n                               literal, locale, shell, shell-always,\n                               shell-escape, shell-escape-always, c, escape\n                               (overrides QUOTING_STYLE environment variable)\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -r, --reverse              reverse order while sorting\n  -R, --recursive            list subdirectories recursively\n  -s, --size                 print the allocated size of each file, in blocks\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -S                         sort by file size, largest first\n      --sort=WORD            sort by WORD instead of name: none (-U), size (-S),\n                               time (-t), version (-v), extension (-X)\n      --time=WORD            with -l, show time as WORD instead of default\n                               modification time: atime or access or use (-u);\n                               ctime or status (-c); also use specified time\n                               as sort key if --sort=time (newest first)\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --time-style=TIME_STYLE  time/date format with -l; see TIME_STYLE below\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -t                         sort by modification time, newest first\n  -T, --tabsize=COLS         assume tab stops at each COLS instead of 8\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -u                         with -lt: sort by, and show, access time;\n                               with -l: show access time and sort by name;\n                               otherwise: sort by access time, newest first\n  -U                         do not sort; list entries in directory order\n  -v                         natural sort of (version) numbers within text\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -w, --width=COLS           set output width to COLS.  0 means no limit\n  -x                         list entries by lines instead of by columns\n  -X                         sort alphabetically by entry extension\n  -Z, --context              print any security context of each file\n  -1                         list one file per line.  Avoid \'\\n\' with -q or -b\n"
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
                             "\nThe TIME_STYLE argument can be full-iso, long-iso, iso, locale, or +FORMAT.\nFORMAT is interpreted like in date(1).  If FORMAT is FORMAT1<newline>FORMAT2,\nthen FORMAT1 applies to non-recent files and FORMAT2 to recent files.\nTIME_STYLE prefixed with \'posix-\' takes effect only outside the POSIX locale.\nAlso the TIME_STYLE environment variable sets the default style to use.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nUsing color to distinguish file types is disabled both by default and\nwith --color=never.  With --color=auto, ls emits color codes only when\nstandard output is connected to a terminal.  The LS_COLORS environment\nvariable can change the settings.  Use the dircolors command to set it.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nExit status:\n 0  if OK,\n 1  if minor problems (e.g., cannot access subdirectory),\n 2  if serious trouble (e.g., cannot access command-line argument).\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  if (DAT_006245ac == 1) {
    pcVar4 = "ls";
  }
  else {
    pcVar4 = "dir";
    if (DAT_006245ac != 2) {
      pcVar4 = "vdir";
    }
  }
  local_88 = (char *)((long)&DAT_0041b567 + 1);
  pcVar8 = (char *)((long)&DAT_0041b567 + 1);
  local_80 = "test invocation";
  local_78[0] = "coreutils";
  local_78[1] = "Multi-call invocation";
  local_78[2] = "sha224sum";
  local_78[3] = "sha2 utilities";
  local_58 = "sha256sum";
  local_50 = "sha2 utilities";
  local_48 = "sha384sum";
  local_40 = "sha2 utilities";
  local_38 = &DAT_0041b18c;
  local_30 = "sha2 utilities";
  local_28 = 0;
  local_20 = 0;
  do {
    iVar2 = strcmp(pcVar4,pcVar8);
    if (iVar2 == 0) break;
    ppcVar7 = ppcVar7 + 2;
    pcVar8 = *ppcVar7;
  } while (pcVar8 != (char *)0x0);
  pcVar8 = ppcVar7[1];
  if (pcVar8 == (char *)0x0) {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar8 = setlocale(5,(char *)0x0);
    if ((pcVar8 != (char *)0x0) && (iVar2 = strncmp(pcVar8,"en_",3), pcVar8 = pcVar4, iVar2 != 0))
    goto LAB_0040ab47;
    uVar5 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    pcVar6 = " invocation";
    __printf_chk(1,uVar5,"https://www.gnu.org/software/coreutils/",pcVar4);
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if ((pcVar6 != (char *)0x0) && (iVar2 = strncmp(pcVar6,"en_",3), iVar2 != 0)) {
LAB_0040ab47:
      uVar5 = dcgettext(0,"Report %s translation bugs to <https://translationproject.org/team/>\n",5
                       );
      __printf_chk(1,uVar5,pcVar4);
    }
    uVar5 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    __printf_chk(1,uVar5,"https://www.gnu.org/software/coreutils/",pcVar4);
    bVar9 = pcVar4 != pcVar8;
    pcVar6 = " invocation";
    pcVar4 = pcVar8;
    if (bVar9) {
      pcVar6 = "";
    }
  }
  uVar5 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(1,uVar5,pcVar4,pcVar6);
LAB_0040a570:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}


char * FUN_0040abf0(char *param_1,ulong param_2)

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


void FUN_0040ace0(void)

{
  FUN_0040a530(1);
  return;
}


long FUN_0040acf0(char *param_1,char **param_2,void *param_3,size_t param_4)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  size_t __n;
  size_t sVar4;
  long lVar5;
  void *__s2;
  char *__s1;
  long local_58;
  
  __n = strlen(param_1);
  __s1 = *param_2;
  local_58 = -1;
  lVar2 = local_58;
  if (__s1 != (char *)0x0) {
    bVar1 = false;
    lVar2 = 0;
    __s2 = param_3;
LAB_0040ad87:
    do {
      lVar5 = lVar2;
      iVar3 = strncmp(__s1,param_1,__n);
      if (iVar3 == 0) {
        sVar4 = strlen(__s1);
        if (sVar4 == __n) {
          return lVar5;
        }
        if (local_58 == -1) {
          __s2 = (void *)((long)__s2 + param_4);
          __s1 = param_2[lVar5 + 1];
          lVar2 = lVar5 + 1;
          local_58 = lVar5;
          if (__s1 == (char *)0x0) break;
          goto LAB_0040ad87;
        }
        if (param_3 == (void *)0x0) {
          bVar1 = true;
        }
        else {
          iVar3 = memcmp((void *)(local_58 * param_4 + (long)param_3),__s2,param_4);
          if (iVar3 != 0) {
            bVar1 = true;
          }
        }
      }
      __s2 = (void *)((long)__s2 + param_4);
      __s1 = param_2[lVar5 + 1];
      lVar2 = lVar5 + 1;
    } while (__s1 != (char *)0x0);
    lVar2 = -2;
    if (!bVar1) {
      lVar2 = local_58;
    }
  }
  local_58 = lVar2;
  return local_58;
}


void FUN_0040ae10(undefined param_1,undefined param_2,long param_3)

{
  undefined uVar1;
  undefined uVar2;
  undefined uVar3;
  
  if (param_3 == -1) {
    uVar1 = dcgettext(0,"invalid argument %s for %s",5);
  }
  else {
    uVar1 = dcgettext(0,"ambiguous argument %s for %s",5);
  }
  uVar2 = FUN_00412270(1,param_1);
  uVar3 = FUN_00411f60(0,8,param_2);
  error(0,0,uVar1,uVar3,uVar2);
  return;
}


void FUN_0040ae90(long *param_1,void *param_2,size_t param_3)

{
  FILE *__stream;
  int iVar1;
  char *pcVar2;
  undefined uVar3;
  long lVar4;
  void *__s2;
  long lVar5;
  void *__s1;
  
  __stream = stderr;
  __s1 = (void *)0x0;
  pcVar2 = (char *)dcgettext(0,"Valid arguments are:",5);
  lVar4 = 0;
  fputs_unlocked(pcVar2,__stream);
  lVar5 = *param_1;
  while (lVar5 != 0) {
    while ((__s2 = param_2, lVar4 == 0 || (iVar1 = memcmp(__s1,__s2,param_3), iVar1 != 0))) {
      lVar4 = lVar4 + 1;
      uVar3 = FUN_00412290(lVar5);
      __fprintf_chk(stderr,1,"\n  - %s",uVar3);
      lVar5 = param_1[lVar4];
      param_2 = (void *)((long)__s2 + param_3);
      __s1 = __s2;
      if (lVar5 == 0) goto LAB_0040af60;
    }
    lVar4 = lVar4 + 1;
    param_2 = (void *)((long)__s2 + param_3);
    uVar3 = FUN_00412290(lVar5);
    __fprintf_chk(stderr,1,&DAT_0041d782,uVar3);
    lVar5 = param_1[lVar4];
  }
LAB_0040af60:
  pcVar2 = stderr->_IO_write_ptr;
  if (pcVar2 < stderr->_IO_write_end) {
    stderr->_IO_write_ptr = pcVar2 + 1;
    *pcVar2 = '\n';
    return;
  }
  __overflow(stderr,10);
  return;
}


long FUN_0040afb0(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                 undefined param_5,code *param_6)

{
  long lVar1;
  
  lVar1 = FUN_0040acf0(param_2,param_3,param_4,param_5);
  if (lVar1 < 0) {
    FUN_0040ae10(param_1,param_2,lVar1);
    FUN_0040ae90(param_3,param_4,param_5);
    (*param_6)();
    lVar1 = -1;
  }
  return lVar1;
}


long FUN_0040b020(void *param_1,long *param_2,void *param_3,size_t param_4)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    param_2 = param_2 + 1;
    do {
      iVar1 = memcmp(param_1,param_3,param_4);
      if (iVar1 == 0) {
        return lVar2;
      }
      lVar2 = *param_2;
      param_3 = (void *)((long)param_3 + param_4);
      param_2 = param_2 + 1;
    } while (lVar2 != 0);
  }
  return lVar2;
}


char * FUN_0040b070(char *param_1,uint param_2)

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
        __s = (char *)FUN_00412980(0x1000);
        pcVar15 = __s + 0x1000;
        pcVar12 = __s + 1;
        *__s = '/';
      }
      else {
        __s = (char *)FUN_00412d10();
        if (__s == (char *)0x0) {
          return (char *)0x0;
        }
        sVar6 = strlen(__s);
        if (sVar6 < 0x1000) {
          __s = (char *)FUN_004129e0(__s,0x1000);
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
LAB_0040b118:
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
        if (sVar6 == 1) goto LAB_0040b308;
        if (((cVar11 != '.') || (sVar6 != 2)) || (pcVar7[1] != '.')) goto LAB_0040b18c;
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
        __s = (char *)FUN_004129e0(__s,pcVar7 + (1 - (long)__s));
      }
      free(local_e0);
      if (local_f0 != 0) {
        FUN_0040ccc0(local_f0);
      }
    }
  }
  else {
    piVar9 = __errno_location();
    __s = (char *)0x0;
    *piVar9 = 0x16;
  }
  return __s;
LAB_0040b308:
  if (cVar11 == '.') goto LAB_0040b118;
LAB_0040b18c:
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
    __s = (char *)FUN_004129e0(__s,pcVar15 + lVar3);
    pcVar15 = __s + (long)(pcVar15 + lVar3);
    pcVar13 = __s + lVar14;
  }
  memcpy(pcVar13,pcVar7,sVar6);
  pcVar12 = pcVar13 + sVar6;
  *pcVar12 = '\0';
  pcVar13 = pcVar12;
  if ((uVar10 == 2) && ((param_2 & 4) != 0)) {
LAB_0040b20b:
    local_c8.st_mode = 0;
LAB_0040b213:
    if ((*param_1 == '\0') || (uVar10 == 2)) {
LAB_0040b224:
      cVar4 = *param_1;
      pcVar12 = pcVar13;
      goto LAB_0040b118;
    }
    piVar9 = __errno_location();
    iVar5 = 0x14;
LAB_0040b575:
    free(local_e0);
    free(__s);
    if (local_f0 == 0) goto LAB_0040b4d1;
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
        if (uVar10 != 1) goto LAB_0040b20b;
        sVar6 = strspn(param_1,"/");
        if ((param_1[sVar6] == '\0') && (iVar5 == 2)) goto LAB_0040b2c9;
      }
      goto LAB_0040b575;
    }
    if ((local_c8.st_mode & 0xf000) != 0xa000) {
      if ((local_c8.st_mode & 0xf000) == 0x4000) goto LAB_0040b224;
      goto LAB_0040b213;
    }
    if ((local_f0 == 0) &&
       (local_f0 = FUN_0040ca80(7,0,FUN_0040d440,FUN_0040d4b0,FUN_0040d4f0), local_f0 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00412bd0();
    }
    cVar4 = FUN_0040b9a0(local_f0,local_e8,&local_c8);
    if (cVar4 == '\0') {
      FUN_0040b910(local_f0,local_e8,&local_c8);
      pcVar7 = (char *)FUN_0040abf0(__s,local_c8.st_size);
      if (pcVar7 != (char *)0x0) {
        sVar6 = strlen(pcVar7);
        sVar8 = strlen(param_1);
        uVar1 = sVar6 + 1 + sVar8;
        if (local_d8 == 0) {
          local_d8 = 0x1000;
          if (0xfff < uVar1) {
            local_d8 = uVar1;
          }
          local_e0 = (void *)FUN_00412980(local_d8);
        }
        else if (local_d8 < uVar1) {
          local_e0 = (void *)FUN_004129e0(local_e0,uVar1);
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
        goto LAB_0040b224;
      }
      piVar9 = __errno_location();
      iVar5 = *piVar9;
      if ((uVar10 == 2) && (iVar5 != 0xc)) goto LAB_0040b2c9;
    }
    else {
      if (uVar10 == 2) {
LAB_0040b2c9:
        cVar4 = pcVar16[1];
        goto LAB_0040b118;
      }
      piVar9 = __errno_location();
      iVar5 = 0x28;
    }
    free(local_e0);
    free(__s);
  }
  FUN_0040ccc0(local_f0);
LAB_0040b4d1:
  *piVar9 = iVar5;
  return (char *)0x0;
}


void FUN_0040b6f0(undefined param_1)

{
  DAT_00625798 = param_1;
  return;
}


void FUN_0040b700(undefined param_1)

{
  DAT_00625790 = param_1;
  return;
}


void FUN_0040b710(void)

{
  int iVar1;
  int *piVar2;
  undefined uVar3;
  undefined uVar4;
  
  iVar1 = FUN_004178e0(stdout);
  if (iVar1 != 0) {
    piVar2 = __errno_location();
    if ((DAT_00625790 == '\0') || (*piVar2 != 0x20)) {
      uVar3 = dcgettext(0,"write error",5);
      if (DAT_00625798 == 0) {
        error(0,*piVar2,&DAT_0041d784,uVar3);
      }
      else {
        uVar4 = FUN_004120e0();
        error(0,*piVar2,"%s: %s",uVar4,uVar3);
      }
      goto LAB_0040b78e;
    }
  }
  iVar1 = FUN_004178e0(stderr);
  if (iVar1 == 0) {
    return;
  }
LAB_0040b78e:
                    /* WARNING: Subroutine does not return */
  _exit(DAT_006245c0);
}


ulong FUN_0040b7b0(char *param_1)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  cVar1 = *param_1;
  lVar2 = FUN_0040b870();
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


undefined * FUN_0040b810(void *param_1)

{
  size_t __n;
  undefined *__dest;
  
  __n = FUN_0040b7b0();
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


char * FUN_0040b870(char *param_1)

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


void FUN_0040b8d0(char *param_1)

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


undefined FUN_0040b900(void)

{
  return 0;
}


void FUN_0040b910(long param_1,undefined param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined uVar2;
  undefined *puVar3;
  
  if (param_1 == 0) {
    return;
  }
  puVar1 = (undefined *)FUN_00412980(0x18);
  uVar2 = FUN_00412bb0(param_2);
  *puVar1 = uVar2;
  puVar1[1] = param_3[1];
  puVar1[2] = *param_3;
  puVar3 = (undefined *)FUN_0040d220(param_1,puVar1);
  if (puVar3 != (undefined *)0x0) {
    if (puVar1 != puVar3) {
      FUN_0040d4f0(puVar1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00412bd0();
}


ulong FUN_0040b9a0(long param_1,undefined param_2,undefined *param_3)

{
  ulong uVar1;
  undefined local_28;
  undefined local_20;
  undefined local_18;
  
  if (param_1 != 0) {
    local_20 = param_3[1];
    local_18 = *param_3;
    local_28 = param_2;
    uVar1 = FUN_0040c810(param_1,&local_28);
    return uVar1 & 0xffffffffffffff00 | (ulong)(uVar1 != 0);
  }
  return 0;
}


void FUN_0040b9e0(uint param_1,undefined *param_2)

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


void FUN_0040bb60(long param_1)

{
  FUN_0040b9e0(*(undefined *)(param_1 + 0x18));
  return;
}


void FUN_0040bb70(void)

{
  long lVar1;
  
  lVar1 = FUN_0040bb90();
  if (lVar1 != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00412bd0();
}


void * FUN_0040bb90(void *param_1,char *param_2,long *param_3)

{
  char cVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  size_t __n;
  void *__dest;
  undefined *puVar5;
  size_t __n_00;
  
  lVar3 = FUN_0040b870();
  uVar4 = FUN_0040b8d0(lVar3);
  __n_00 = (lVar3 - (long)param_1) + uVar4;
  if (uVar4 != 0) {
    uVar4 = (ulong)(*(char *)(lVar3 + -1 + uVar4) != '/');
  }
  cVar1 = *param_2;
  cVar2 = cVar1;
  while (cVar2 == '/') {
    param_2 = param_2 + 1;
    cVar2 = *param_2;
  }
  __n = strlen(param_2);
  __dest = malloc(uVar4 + 1 + __n_00 + __n);
  if (__dest != (void *)0x0) {
    puVar5 = (undefined *)mempcpy(__dest,param_1,__n_00);
    *puVar5 = 0x2f;
    if (param_3 != (long *)0x0) {
      *param_3 = (long)(puVar5 + uVar4) - (ulong)(cVar1 == '/');
    }
    puVar5 = (undefined *)mempcpy(puVar5 + uVar4,param_2,__n);
    *puVar5 = 0;
  }
  return __dest;
}


char * FUN_0040bc70(char **param_1)

{
  bool bVar1;
  char *pcVar2;
  char cVar3;
  char *pcVar4;
  
  pcVar4 = *param_1;
  cVar3 = *pcVar4;
  if (cVar3 == '\0') {
    return (char *)0x0;
  }
  bVar1 = false;
  pcVar2 = (char *)0x0;
  do {
    if (bVar1) {
      if ((0x39 < (int)cVar3 - 0x41U) ||
         (bVar1 = false, (1L << ((byte)((int)cVar3 - 0x41U) & 0x3f) & 0x3ffffff03ffffffU) == 0)) {
        bVar1 = false;
        if (cVar3 != '~') {
          pcVar2 = (char *)0x0;
          bVar1 = false;
        }
      }
LAB_0040bcc1:
      *param_1 = pcVar4 + 1;
      cVar3 = pcVar4[1];
    }
    else {
      if (cVar3 == '.') {
        bVar1 = true;
        if (pcVar2 == (char *)0x0) {
          pcVar2 = pcVar4;
        }
        goto LAB_0040bcc1;
      }
      if (cVar3 < '[') {
        if (('@' < cVar3) || ((byte)(cVar3 - 0x30U) < 10)) goto LAB_0040bcc1;
      }
      else if ((byte)(cVar3 + 0x9fU) < 0x1a) goto LAB_0040bcc1;
      if (cVar3 != '~') {
        pcVar2 = (char *)0x0;
      }
      *param_1 = pcVar4 + 1;
      cVar3 = pcVar4[1];
    }
    pcVar4 = pcVar4 + 1;
    if (cVar3 == '\0') {
      return pcVar2;
    }
  } while( true );
}


uint FUN_0040bd40(byte *param_1,byte *param_2)

{
  byte bVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  size_t sVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  byte *pbVar12;
  ulong uVar13;
  byte bVar14;
  byte *pbVar15;
  uint uVar16;
  size_t __n;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  byte bVar20;
  byte *local_48;
  byte *local_40 [2];
  
  bVar20 = 0;
  uVar3 = strcmp((char *)param_1,(char *)param_2);
  if (uVar3 == 0) {
    return 0;
  }
  bVar14 = *param_1;
  if (bVar14 == 0) {
    return 0xffffffff;
  }
  bVar1 = *param_2;
  bVar17 = false;
  bVar19 = bVar1 == 0;
  if (bVar19) {
    return 1;
  }
  lVar9 = 2;
  pbVar12 = &DAT_0041d794;
  pbVar15 = param_1;
  do {
    if (lVar9 == 0) break;
    lVar9 = lVar9 + -1;
    bVar17 = *pbVar12 < *pbVar15;
    bVar19 = *pbVar12 == *pbVar15;
    pbVar12 = pbVar12 + (ulong)bVar20 * -2 + 1;
    pbVar15 = pbVar15 + (ulong)bVar20 * -2 + 1;
  } while (bVar19);
  bVar18 = false;
  bVar17 = (!bVar17 && !bVar19) == bVar17;
  if (bVar17) {
    return 0xffffffff;
  }
  lVar9 = 2;
  pbVar12 = &DAT_0041d794;
  pbVar15 = param_2;
  do {
    if (lVar9 == 0) break;
    lVar9 = lVar9 + -1;
    bVar18 = *pbVar12 < *pbVar15;
    bVar17 = *pbVar12 == *pbVar15;
    pbVar12 = pbVar12 + (ulong)bVar20 * -2 + 1;
    pbVar15 = pbVar15 + (ulong)bVar20 * -2 + 1;
  } while (bVar17);
  bVar19 = false;
  bVar17 = (!bVar18 && !bVar17) == bVar18;
  if (bVar17) {
    return 1;
  }
  lVar9 = 3;
  pbVar12 = &DAT_0041d793;
  pbVar15 = param_1;
  do {
    if (lVar9 == 0) break;
    lVar9 = lVar9 + -1;
    bVar19 = *pbVar12 < *pbVar15;
    bVar17 = *pbVar12 == *pbVar15;
    pbVar12 = pbVar12 + (ulong)bVar20 * -2 + 1;
    pbVar15 = pbVar15 + (ulong)bVar20 * -2 + 1;
  } while (bVar17);
  bVar18 = false;
  bVar17 = (!bVar19 && !bVar17) == bVar19;
  if (bVar17) {
    return 0xffffffff;
  }
  lVar9 = 3;
  pbVar12 = &DAT_0041d793;
  pbVar15 = param_2;
  do {
    if (lVar9 == 0) break;
    lVar9 = lVar9 + -1;
    bVar18 = *pbVar12 < *pbVar15;
    bVar17 = *pbVar12 == *pbVar15;
    pbVar12 = pbVar12 + (ulong)bVar20 * -2 + 1;
    pbVar15 = pbVar15 + (ulong)bVar20 * -2 + 1;
  } while (bVar17);
  if ((!bVar18 && !bVar17) == bVar18) {
    return 1;
  }
  if ((bVar1 != 0x2e) && (bVar14 == 0x2e)) {
    return 0xffffffff;
  }
  if (bVar14 == 0x2e) {
    if ((bVar1 == 0x2e) && (bVar14 == 0x2e)) {
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    }
  }
  else if (bVar1 == 0x2e) {
    return 1;
  }
  local_48 = param_1;
  local_40[0] = param_2;
  lVar9 = FUN_0040bc70(&local_48);
  lVar6 = FUN_0040bc70(local_40);
  if (lVar9 == 0) {
    __n = (long)local_48 - (long)param_1;
    if (lVar6 != 0) goto LAB_0040be55;
  }
  else {
    __n = lVar9 - (long)param_1;
    if (lVar6 == 0) {
      sVar7 = (long)local_40[0] - (long)param_2;
    }
    else {
LAB_0040be55:
      sVar7 = lVar6 - (long)param_2;
    }
    if ((__n != sVar7) || (iVar5 = strncmp((char *)param_1,(char *)param_2,__n), iVar5 != 0))
    goto LAB_0040be64;
    __n = (long)local_48 - (long)param_1;
  }
  sVar7 = (long)local_40[0] - (long)param_2;
LAB_0040be64:
  uVar10 = 0;
  uVar13 = 0;
LAB_0040be78:
  if ((__n <= uVar10) && (sVar7 <= uVar13)) {
    return uVar3;
  }
  lVar9 = uVar13 - uVar10;
  uVar11 = uVar10;
  if (__n <= uVar10) goto LAB_0040bf10;
LAB_0040be91:
  bVar20 = param_1[uVar10];
  uVar11 = uVar10;
  if ((int)(char)bVar20 - 0x30U < 10) goto LAB_0040bf10;
  if (bVar20 - 0x30 < 10) {
    if (sVar7 == uVar13) goto LAB_0040bf03;
    bVar14 = param_2[uVar13];
    goto LAB_0040bf46;
  }
LAB_0040beb4:
  uVar16 = (uint)bVar20;
  if ((uVar16 - 0x41 < 0x3a) && ((1L << ((byte)(uVar16 - 0x41) & 0x3f) & 0x3ffffff03ffffffU) != 0))
  {
    uVar4 = 0;
    if (sVar7 == uVar10 + lVar9) goto LAB_0040befa;
  }
  else {
    if (bVar20 == 0x7e) {
      uVar16 = 0xffffffff;
    }
    else {
      uVar16 = uVar16 + 0x100;
    }
    if (sVar7 == uVar10 + lVar9) {
      return uVar16;
    }
  }
  bVar14 = param_2[uVar13];
  uVar4 = (uint)bVar14;
  if (9 < bVar14 - 0x30) goto LAB_0040bf55;
  uVar4 = 0;
LAB_0040befa:
  do {
    if (uVar4 != uVar16) {
      return uVar16 - uVar4;
    }
LAB_0040bf03:
    do {
      uVar10 = uVar10 + 1;
      uVar13 = uVar13 + 1;
      uVar11 = uVar10;
      if (uVar10 < __n) goto LAB_0040be91;
LAB_0040bf10:
      bVar14 = param_2[uVar13];
      if ((sVar7 <= uVar13) || ((int)(char)bVar14 - 0x30U < 10)) goto LAB_0040bf84;
      uVar10 = uVar11;
      if ((__n != uVar11) && (bVar20 = param_1[uVar11], 9 < bVar20 - 0x30)) goto LAB_0040beb4;
LAB_0040bf46:
      uVar4 = (uint)bVar14;
      uVar16 = 0;
    } while (uVar4 - 0x30 < 10);
LAB_0040bf55:
    if ((0x39 < bVar14 - 0x41) || ((1L << ((byte)(bVar14 - 0x41) & 0x3f) & 0x3ffffff03ffffffU) == 0)
       ) {
      if (bVar14 == 0x7e) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = uVar4 + 0x100;
      }
    }
  } while( true );
LAB_0040bf84:
  for (; iVar5 = (int)(char)param_1[uVar11], uVar2 = uVar13, param_1[uVar11] == 0x30;
      uVar11 = uVar11 + 1) {
  }
  while (bVar14 == 0x30) {
    bVar14 = param_2[uVar2 + 1];
    uVar2 = uVar2 + 1;
  }
  iVar8 = (int)(char)bVar14;
  uVar10 = uVar11;
  if (iVar5 - 0x30U < 10) {
    if (9 < iVar8 - 0x30U) {
      return 1;
    }
    uVar16 = 0;
    while( true ) {
      if (uVar16 == 0) {
        uVar16 = iVar5 - iVar8;
      }
      uVar10 = uVar10 + 1;
      iVar8 = (int)(char)param_2[uVar10 + (uVar2 - uVar11)];
      uVar13 = (uVar10 - uVar11) + uVar2;
      iVar5 = (int)(char)param_1[uVar10];
      if (9 < iVar5 - 0x30U) break;
      if (9 < iVar8 - 0x30U) {
        return 1;
      }
    }
    if (iVar8 - 0x30U < 10) {
      return 0xffffffff;
    }
    if (uVar16 != 0) {
      return uVar16;
    }
  }
  else {
    uVar13 = uVar2;
    if (iVar8 - 0x30U < 10) {
      return 0xffffffff;
    }
  }
  goto LAB_0040be78;
}


void FUN_0040c150(timespec *param_1)

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


bool FUN_0040c190(int param_1)

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
    pbVar5 = &DAT_0041d796;
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


ulong FUN_0040c1f0(ulong param_1)

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
LAB_0040c270:
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
        if (uVar3 <= uVar4) goto LAB_0040c270;
        lVar5 = lVar5 + 8;
      } while (uVar1 != 0);
    }
    uVar3 = uVar3 + 2;
  } while( true );
}


ulong FUN_0040c290(ulong param_1,ulong param_2)

{
  return (param_1 >> 3 | param_1 << 0x3d) % param_2;
}


bool FUN_0040c2a0(long param_1,long param_2)

{
  return param_1 == param_2;
}


long FUN_0040c2b0(long *param_1,undefined param_2)

{
  ulong uVar1;
  
  uVar1 = (*(code *)param_1[6])(param_2,param_1[2]);
  if (uVar1 <= (ulong)param_1[2] && param_1[2] != uVar1) {
    return uVar1 * 0x10 + *param_1;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


long FUN_0040c2e0(long param_1,long param_2,long **param_3,char param_4)

{
  undefined *puVar1;
  undefined uVar2;
  undefined uVar3;
  undefined uVar4;
  char cVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  
  plVar6 = (long *)FUN_0040c2b0();
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
LAB_0040c36c:
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
          goto LAB_0040c36c;
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

undefined FUN_0040c400(float **param_1)

{
  float fVar1;
  float *pfVar2;
  float fVar3;
  
  pfVar2 = *param_1;
  if (pfVar2 == (float *)&DAT_0041d810) {
    return 1;
  }
  fVar1 = pfVar2[2];
  if ((((_DAT_0041d824 < fVar1) && (fVar1 < DAT_0041d828)) && (_DAT_0041d82c < pfVar2[3])) &&
     (_DAT_0041d830 <= *pfVar2)) {
    fVar3 = *pfVar2 + _DAT_0041d824;
    if (((fVar3 < pfVar2[1]) && (pfVar2[1] <= DAT_0041d834)) && (fVar3 < fVar1)) {
      return 1;
    }
  }
  *param_1 = (float *)&DAT_0041d810;
  return 0;
}


undefined FUN_0040c480(long param_1,long **param_2,char param_3)

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
LAB_0040c4a8:
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
          plVar2 = (long *)FUN_0040c2b0(param_1,lVar6);
          plVar4 = (long *)plVar3[1];
          if (*plVar2 != 0) break;
          *plVar2 = lVar6;
          *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
          *plVar3 = 0;
          plVar3[1] = *(long *)(param_1 + 0x48);
          *(long **)(param_1 + 0x48) = plVar3;
          plVar3 = plVar4;
          if (plVar4 == (long *)0x0) goto LAB_0040c51f;
        }
        plVar3[1] = plVar2[1];
        plVar2[1] = (long)plVar3;
        plVar3 = plVar4;
      } while (plVar4 != (long *)0x0);
LAB_0040c51f:
      lVar6 = *plVar5;
    }
    plVar5[1] = 0;
    if (param_3 != '\0') goto LAB_0040c4a8;
    plVar3 = (long *)FUN_0040c2b0(param_1,lVar6);
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


undefined FUN_0040c5d0(long param_1)

{
  return *(undefined *)(param_1 + 0x10);
}


undefined FUN_0040c5e0(long param_1)

{
  return *(undefined *)(param_1 + 0x18);
}


undefined FUN_0040c5f0(long param_1)

{
  return *(undefined *)(param_1 + 0x20);
}


void FUN_0040c600(long **param_1)

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


bool FUN_0040c650(long **param_1)

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
LAB_0040c668:
      plVar2 = plVar2 + 2;
    }
    lVar1 = plVar2[1];
    plVar4 = (long *)((long)plVar4 + 1);
    plVar3 = (long *)((long)plVar3 + 1);
    if (lVar1 == 0) goto LAB_0040c668;
    do {
      lVar1 = *(long *)(lVar1 + 8);
      plVar3 = (long *)((long)plVar3 + 1);
    } while (lVar1 != 0);
    plVar2 = plVar2 + 2;
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040c6c0(long **param_1,undefined param_2)

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
      if (param_1[1] <= plVar6) goto LAB_0040c72d;
    }
  }
LAB_0040c72d:
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
  __fprintf_chk((dVar7 * _DAT_0041d848) / dVar8,param_2,1,"# buckets used:    %lu (%.2f%%)\n",plVar2
               );
  __fprintf_chk(param_2,1,"max bucket length: %lu\n",uVar5);
  return;
}


long FUN_0040c810(long param_1,long param_2)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)FUN_0040c2b0();
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


long FUN_0040c870(long **param_1)

{
  long lVar1;
  long *plVar2;
  
  if (param_1[4] == (long *)0x0) {
    return 0;
  }
  plVar2 = *param_1;
  if (param_1[1] <= plVar2) {
    lVar1 = FUN_00402e55();
    return lVar1;
  }
  do {
    if (*plVar2 != 0) {
      return *plVar2;
    }
    plVar2 = plVar2 + 2;
  } while (plVar2 < param_1[1]);
  lVar1 = FUN_00402e55();
  return lVar1;
}


long FUN_0040c8c0(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = (long *)FUN_0040c2b0();
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


ulong FUN_0040c930(long **param_1,long param_2,ulong param_3)

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


long FUN_0040c9a0(long **param_1,code *param_2,undefined param_3)

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


ulong FUN_0040ca20(byte *param_1,ulong param_2)

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


void FUN_0040ca60(undefined *param_1)

{
  *(undefined *)(param_1 + 2) = 0;
  *param_1 = 0x3f80000000000000;
  param_1[1] = 0x3fb4fdf43f4ccccd;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ** FUN_0040ca80(ulong param_1,void *param_2,code *param_3,code *param_4,void *param_5)

{
  char cVar1;
  void **__ptr;
  void *__nmemb;
  void *pvVar2;
  float fVar3;
  float fVar4;
  
  if (param_3 == (code *)0x0) {
    param_3 = FUN_0040c290;
  }
  if (param_4 == (code *)0x0) {
    param_4 = FUN_0040c2a0;
  }
  __ptr = (void **)malloc(0x50);
  if (__ptr == (void **)0x0) {
    return (void **)0x0;
  }
  if (param_2 == (void *)0x0) {
    __ptr[5] = &DAT_0041d810;
    cVar1 = FUN_0040c400(__ptr + 5);
    if (cVar1 == '\0') goto LAB_0040cb60;
    fVar4 = DAT_0041d838;
    if ((long)param_1 < 0) goto LAB_0040cbe3;
LAB_0040cb9e:
    fVar3 = (float)param_1;
LAB_0040cba7:
    fVar3 = fVar3 / fVar4;
    if (_DAT_0041d83c <= fVar3) goto LAB_0040cb60;
    if (fVar3 < _DAT_0041d840) {
      param_1 = (ulong)fVar3;
    }
    else {
      param_1 = (long)(fVar3 - _DAT_0041d840) ^ 0x8000000000000000;
    }
  }
  else {
    __ptr[5] = param_2;
    cVar1 = FUN_0040c400(__ptr + 5);
    if (cVar1 == '\0') goto LAB_0040cb60;
    if (*(char *)((long)param_2 + 0x10) == '\0') {
      fVar4 = *(float *)((long)param_2 + 8);
      if (-1 < (long)param_1) goto LAB_0040cb9e;
LAB_0040cbe3:
      fVar3 = (float)(param_1 >> 1 | (ulong)((uint)param_1 & 1));
      fVar3 = fVar3 + fVar3;
      goto LAB_0040cba7;
    }
  }
  __nmemb = (void *)FUN_0040c1f0(param_1);
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
LAB_0040cb60:
  free(__ptr);
  return (void **)0x0;
}


void FUN_0040cc10(long **param_1)

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
        if (param_1[1] < plVar4 || param_1[1] == plVar4) goto LAB_0040cca3;
      }
      plVar5 = plVar5 + 2;
    } while (plVar5 <= param_1[1] && param_1[1] != plVar5);
  }
LAB_0040cca3:
  param_1[3] = (long *)0x0;
  param_1[4] = (long *)0x0;
  return;
}


void FUN_0040ccc0(long **param_1)

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
    if (plVar2 <= plVar4) goto LAB_0040cd5c;
    do {
      while (lVar5 = *plVar4, plVar3 = plVar4, lVar5 == 0) {
        plVar4 = plVar4 + 2;
        if (plVar2 <= plVar4) goto LAB_0040cd1f;
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
LAB_0040cd1f:
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
LAB_0040cd5c:
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

undefined FUN_0040cda0(void **param_1,ulong param_2)

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
    if (_DAT_0041d83c <= fVar3) {
      return 0;
    }
    if (fVar3 < _DAT_0041d840) {
      param_2 = (ulong)fVar3;
    }
    else {
      param_2 = (long)(fVar3 - _DAT_0041d840) ^ 0x8000000000000000;
    }
  }
  local_58 = (void *)FUN_0040c1f0(param_2);
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
      uVar2 = FUN_0040c480(&local_68,param_1,0);
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
      cVar1 = FUN_0040c480(param_1,&local_68,1);
      if ((cVar1 != '\0') && (cVar1 = FUN_0040c480(param_1,&local_68,0), cVar1 != '\0')) {
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

undefined FUN_0040cfa0(long param_1,long param_2,long *param_3)

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
  lVar2 = FUN_0040c2e0(param_1,param_2,&local_20,0);
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
    if ((long)uVar3 < 0) goto LAB_0040d09a;
LAB_0040d00b:
    if (fVar7 <= (float)uVar3 * *(float *)(lVar2 + 8)) goto LAB_0040d022;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x28);
    fVar7 = (float)uVar6;
    uVar3 = *(ulong *)(param_1 + 0x10);
    if (-1 < (long)uVar3) goto LAB_0040d00b;
LAB_0040d09a:
    fVar8 = (float)(uVar3 >> 1 | (ulong)((uint)uVar3 & 1));
    if (fVar7 <= (fVar8 + fVar8) * *(float *)(lVar2 + 8)) goto LAB_0040d022;
  }
  FUN_0040c400(param_1 + 0x28);
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
    if (_DAT_0041d83c <= fVar7) {
      return 0xffffffff;
    }
    if (_DAT_0041d840 <= fVar7) {
      uVar6 = (long)(fVar7 - _DAT_0041d840) ^ 0x8000000000000000;
    }
    else {
      uVar6 = (ulong)fVar7;
    }
    cVar1 = FUN_0040cda0(param_1,uVar6);
    if (cVar1 == '\0') {
      return 0xffffffff;
    }
    lVar2 = FUN_0040c2e0(param_1,param_2,&local_20,0);
    if (lVar2 != 0) {
      uVar5 = FUN_00402e5f();
      return uVar5;
    }
  }
LAB_0040d022:
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


undefined FUN_0040d220(undefined param_1,undefined param_2)

{
  int iVar1;
  undefined local_10;
  
  iVar1 = FUN_0040cfa0(param_1,param_2,&local_10);
  if (iVar1 != -1) {
    if (iVar1 == 0) {
      param_2 = local_10;
    }
    return param_2;
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_0040d260(long param_1,undefined param_2)

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
  
  lVar5 = FUN_0040c2e0(param_1,param_2,&local_20,1);
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
      FUN_0040c400(param_1 + 0x28);
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
        if (_DAT_0041d840 <= fVar7) {
          uVar6 = (long)(fVar7 - _DAT_0041d840) ^ 0x8000000000000000;
        }
        else {
          uVar6 = (ulong)fVar7;
        }
        cVar4 = FUN_0040cda0(param_1,uVar6);
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


ulong FUN_0040d440(undefined *param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00417960(*param_1);
  return (uVar1 ^ param_1[1]) % param_2;
}


ulong FUN_0040d470(long param_1,ulong param_2)

{
  return *(ulong *)(param_1 + 8) % param_2;
}


undefined FUN_0040d480(undefined *param_1,undefined *param_2)

{
  undefined uVar1;
  
  if ((param_1[1] == param_2[1]) && (param_1[2] == param_2[2])) {
    uVar1 = FUN_004122b0(*param_1,*param_2);
    return uVar1;
  }
  return 0;
}


ulong FUN_0040d4b0(char **param_1,char **param_2)

{
  int iVar1;
  undefined extraout_var;
  
  if ((param_1[1] == param_2[1]) && (param_1[2] == param_2[2])) {
    iVar1 = strcmp(*param_1,*param_2);
    return CONCAT44(extraout_var,iVar1) & 0xffffffffffffff00 | (ulong)(iVar1 == 0);
  }
  return 0;
}


void FUN_0040d4f0(void **param_1)

{
  free(*param_1);
  free(param_1);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040d568) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040d510(int param_1)

{
  ulong uVar1;
  float fVar2;
  float param_7;
  
  if ((float)_DAT_0041d840 <= param_7) {
    uVar1 = (long)ROUND(param_7 - (float)_DAT_0041d840) ^ 0x8000000000000000;
  }
  else {
    uVar1 = (ulong)ROUND(param_7);
  }
  fVar2 = (float)uVar1;
  if ((long)uVar1 < 0) {
    fVar2 = fVar2 + (float)_DAT_0041d83c;
  }
  if (((param_1 == 0) && (param_7 != fVar2)) && ((long)(uVar1 + 1) < 0)) {
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_0040d5d0(ulong param_1,char *param_2,uint param_3,ulong param_4,ulong param_5)

{
  byte bVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  char cVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  lconv *plVar9;
  ulong uVar10;
  size_t sVar11;
  size_t __n;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  char *__s;
  undefined *__dest;
  undefined *puVar21;
  undefined *puVar22;
  byte *pbVar23;
  bool bVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined *local_a8;
  undefined local_68 [56];
  
  uVar5 = param_3 & 0x20;
  uVar14 = param_3 & 3;
  uVar6 = (-(uint)(uVar5 == 0) & 0xffffffe8) + 0x400;
  plVar9 = localeconv();
  puVar21 = (undefined *)plVar9->decimal_point;
  uVar10 = strlen((char *)puVar21);
  bVar24 = 0xf < uVar10 - 1;
  if (bVar24) {
    puVar21 = (undefined *)&DAT_0041d794;
  }
  pbVar23 = (byte *)plVar9->grouping;
  __s = plVar9->thousands_sep;
  if (bVar24) {
    uVar10 = 1;
  }
  sVar11 = strlen(__s);
  if (0x10 < sVar11) {
    __s = "";
  }
  local_a8 = (undefined *)(param_2 + 0x287);
  uVar15 = (uint)uVar10;
  if (param_4 < param_5) {
    if (param_4 != 0) {
      auVar3 = ZEXT816(param_5) / ZEXT816(param_4);
      if (param_5 % param_4 == 0) {
        uVar17 = SUB168(ZEXT816(param_1) / (auVar3 & (undefined)0xffffffffffffffff),0);
        auVar2 = ZEXT816((ulong)(SUB168(ZEXT816(param_1) %
                                        (auVar3 & (undefined)0xffffffffffffffff),0) * 10));
        uVar18 = SUB168(auVar2 % (auVar3 & (undefined)0xffffffffffffffff),0) * 2;
        uVar8 = SUB164(auVar2 / (auVar3 & (undefined)0xffffffffffffffff),0);
        uVar12 = (ulong)uVar8;
        if (uVar18 < SUB168(auVar3,0)) {
          uVar19 = (uint)(uVar18 != 0);
        }
        else {
          uVar19 = (SUB168(auVar3,0) < uVar18) + 2;
        }
        goto joined_r0x0040d968;
      }
    }
LAB_0040d6b5:
    fVar25 = (float)param_4;
    if ((long)param_4 < 0) {
      fVar25 = fVar25 + (float)_DAT_0041d83c;
    }
    if ((long)param_5 < 0) {
      fVar25 = fVar25 / ((float)param_5 + (float)_DAT_0041d83c);
      if ((long)param_1 < 0) goto LAB_0040d8c8;
LAB_0040d6f2:
      fVar25 = (float)param_1 * fVar25;
      if ((param_3 & 0x10) != 0) goto LAB_0040d6ff;
LAB_0040d810:
      if ((uVar14 != 1) && (fVar25 < _DAT_0041d8d0)) {
        FUN_0040d510();
        uVar10 = SUB108(fVar25,0);
      }
      __sprintf_chk(param_2,1,0xffffffffffffffff,"%.0Lf",uVar10);
      uVar16 = 0xffffffff;
      __n = strlen(param_2);
      sVar11 = __n;
    }
    else {
      fVar25 = fVar25 / (float)param_5;
      if (-1 < (long)param_1) goto LAB_0040d6f2;
LAB_0040d8c8:
      fVar25 = ((float)param_1 + (float)_DAT_0041d83c) * fVar25;
      if ((param_3 & 0x10) == 0) goto LAB_0040d810;
LAB_0040d6ff:
      uVar16 = 0;
      fVar27 = (float)uVar6;
      do {
        fVar26 = fVar27;
        uVar16 = uVar16 + 1;
        fVar27 = fVar26 * (float)uVar6;
        if (fVar25 < fVar27) break;
      } while (uVar16 != 8);
      fVar25 = fVar25 / fVar26;
      uVar17 = uVar10 + 2 + (ulong)(uVar5 == 0);
      if (uVar14 == 1) {
        __sprintf_chk(param_2,1,0xffffffffffffffff,"%.1Lf");
        __n = strlen(param_2);
        if (__n <= uVar17) goto LAB_0040dc38;
      }
      else {
        if (fVar25 < _DAT_0041d8d0) {
          FUN_0040d510();
        }
        __sprintf_chk(param_2,1,0xffffffffffffffff,"%.1Lf");
        __n = strlen(param_2);
        if (__n <= uVar17) {
LAB_0040dc38:
          if (((param_3 & 8) == 0) || (param_2[__n - 1] != '0')) {
            sVar11 = __n - (uVar10 + 1);
            goto LAB_0040d860;
          }
          if (uVar14 == 1) goto LAB_0040d7d6;
        }
        if (fVar25 * (float)_DAT_0041d8c4 < _DAT_0041d8d0) {
          FUN_0040d510(uVar14);
        }
      }
LAB_0040d7d6:
      __sprintf_chk(param_2,1,0xffffffffffffffff,"%.0Lf");
      __n = strlen(param_2);
      sVar11 = __n;
    }
LAB_0040d860:
    puVar22 = (undefined *)((long)local_a8 - __n);
    memmove(puVar22,param_2,__n);
    __dest = (undefined *)(sVar11 + (long)puVar22);
  }
  else {
    if ((param_4 % param_5 != 0) ||
       (uVar17 = SUB168(ZEXT816(param_4) / ZEXT816(param_5),0) * param_1,
       SUB168(ZEXT816(uVar17) /
              (ZEXT816(param_4) / ZEXT816(param_5) & (undefined)0xffffffffffffffff),0) !=
       param_1)) goto LAB_0040d6b5;
    uVar19 = 0;
    uVar12 = 0;
    uVar8 = 0;
joined_r0x0040d968:
    puVar22 = local_a8;
    if ((param_3 & 0x10) == 0) {
      uVar16 = 0xffffffff;
LAB_0040d981:
      if (uVar14 != 1) goto LAB_0040d990;
      __dest = local_a8;
      if (5 < (int)(uVar8 + (((uint)uVar17 & 1) + uVar19 != 0))) goto LAB_0040d9a1;
LAB_0040d9d3:
      do {
        puVar22 = (undefined *)((long)puVar22 + -1);
        *(char *)puVar22 = (char)uVar17 + (char)(uVar17 / 10) * -10 + '0';
        bVar24 = 9 < uVar17;
        uVar17 = uVar17 / 10;
      } while (bVar24);
    }
    else {
      uVar8 = (uint)uVar12;
      uVar20 = (ulong)uVar6;
      uVar16 = 0;
      uVar18 = uVar17;
      if (uVar17 < uVar20) goto LAB_0040d981;
      while( true ) {
        uVar17 = uVar18 / uVar20;
        uVar7 = (int)uVar12 + (int)(uVar18 % uVar20) * 10;
        uVar12 = uVar7 / uVar20;
        uVar8 = (uint)uVar12;
        uVar7 = ((int)uVar19 >> 1) + (uVar7 % uVar6) * 2;
        uVar19 = uVar19 + uVar7;
        if (uVar7 < uVar6) {
          uVar19 = (uint)(uVar19 != 0);
        }
        else {
          uVar19 = (uVar6 < uVar19) + 2;
        }
        uVar16 = uVar16 + 1;
        if (uVar17 < uVar20) break;
        uVar18 = uVar17;
        if (uVar16 == 8) goto LAB_0040d981;
      }
      if (9 < uVar17) goto LAB_0040d981;
      if (uVar14 == 1) {
        bVar24 = 2 < (uVar8 & 1) + uVar19;
      }
      else {
        bVar24 = uVar19 != 0 && uVar14 == 0;
      }
      if (bVar24) {
        uVar8 = uVar8 + 1;
        if (uVar8 != 10) goto LAB_0040de38;
        uVar17 = uVar17 + 1;
        if (uVar17 == 10) goto LAB_0040ddee;
        uVar19 = 0;
LAB_0040dda7:
        if ((param_3 & 8) != 0) goto LAB_0040ddf0;
        cVar4 = '0';
      }
      else {
        if (uVar8 == 0) goto LAB_0040dda7;
LAB_0040de38:
        cVar4 = (char)uVar8 + '0';
      }
      param_2[0x286] = cVar4;
      uVar12 = uVar10 & 0xffffffff;
      puVar22 = (undefined *)(param_2 + (0x286 - uVar10));
      if (uVar15 < 8) {
        if ((uVar10 & 4) == 0) {
          if (((int)uVar12 != 0) &&
             (*(undefined *)puVar22 = *(undefined *)puVar21, (uVar10 & 2) != 0)) {
            *(undefined *)((long)puVar22 + (uVar12 - 2)) =
                 *(undefined *)((long)puVar21 + (uVar12 - 2));
          }
        }
        else {
          *(undefined *)puVar22 = *(undefined *)puVar21;
          *(undefined *)((long)puVar22 + (uVar12 - 4)) =
               *(undefined *)((long)puVar21 + (uVar12 - 4));
        }
      }
      else {
        *puVar22 = *puVar21;
        *(undefined *)((long)puVar22 + ((uVar10 & 0xffffffff) - 8)) =
             *(undefined *)((long)puVar21 + ((uVar10 & 0xffffffff) - 8));
        lVar13 = (long)puVar22 - ((ulong)(puVar22 + 1) & 0xfffffffffffffff8);
        uVar8 = (int)lVar13 + uVar15 & 0xfffffff8;
        if (7 < uVar8) {
          uVar19 = 0;
          do {
            uVar12 = (ulong)uVar19;
            uVar19 = uVar19 + 8;
            *(undefined *)(((ulong)(puVar22 + 1) & 0xfffffffffffffff8) + uVar12) =
                 *(undefined *)((long)puVar21 + (uVar12 - lVar13));
          } while (uVar19 < uVar8);
        }
      }
LAB_0040ddee:
      uVar19 = 0;
LAB_0040ddf0:
      __dest = puVar22;
      if (uVar14 == 1) goto LAB_0040d9d3;
      uVar8 = 0;
LAB_0040d990:
      __dest = puVar22;
      if ((uVar14 != 0) || ((int)(uVar19 + uVar8) < 1)) goto LAB_0040d9d3;
LAB_0040d9a1:
      uVar17 = uVar17 + 1;
      __dest = puVar22;
      if ((((param_3 & 0x10) == 0) || (uVar6 != uVar17)) || (uVar16 == 8)) goto LAB_0040d9d3;
      uVar16 = uVar16 + 1;
      if ((param_3 & 8) == 0) {
        *(undefined *)((long)puVar22 + -1) = 0x30;
        puVar22 = (undefined *)((long)puVar22 + ~uVar10);
        uVar17 = uVar10 & 0xffffffff;
        if (uVar15 < 8) {
          if ((uVar10 & 4) == 0) {
            if (((int)uVar17 != 0) &&
               (*(undefined *)puVar22 = *(undefined *)puVar21, (uVar10 & 2) != 0)) {
              *(undefined *)((long)puVar22 + (uVar17 - 2)) =
                   *(undefined *)((long)puVar21 + (uVar17 - 2));
            }
          }
          else {
            *(undefined *)puVar22 = *(undefined *)puVar21;
            *(undefined *)((long)puVar22 + (uVar17 - 4)) =
                 *(undefined *)((long)puVar21 + (uVar17 - 4));
          }
        }
        else {
          *puVar22 = *puVar21;
          *(undefined *)((long)puVar22 + ((uVar10 & 0xffffffff) - 8)) =
               *(undefined *)((long)puVar21 + ((uVar10 & 0xffffffff) - 8));
          lVar13 = (long)puVar22 - ((ulong)(puVar22 + 1) & 0xfffffffffffffff8);
          uVar14 = (int)lVar13 + uVar15 & 0xfffffff8;
          if (7 < uVar14) {
            uVar15 = 0;
            do {
              uVar10 = (ulong)uVar15;
              uVar15 = uVar15 + 8;
              *(undefined *)(((ulong)(puVar22 + 1) & 0xfffffffffffffff8) + uVar10) =
                   *(undefined *)((long)puVar21 + (uVar10 - lVar13));
            } while (uVar15 < uVar14);
          }
        }
      }
      *(undefined *)((long)puVar22 + -1) = 0x31;
      __dest = puVar22;
      puVar22 = (undefined *)((long)puVar22 + -1);
    }
  }
  if ((param_3 & 4) != 0) {
    sVar11 = strlen(__s);
    uVar17 = (long)__dest - (long)puVar22;
    __memcpy_chk(local_68,puVar22,uVar17,0x29);
    uVar10 = 0xffffffffffffffff;
    while( true ) {
      bVar1 = *pbVar23;
      if (bVar1 != 0) {
        uVar10 = (ulong)bVar1;
        if (0x7e < bVar1) {
          uVar10 = uVar17;
        }
        pbVar23 = pbVar23 + 1;
      }
      if (uVar17 < uVar10) break;
      puVar22 = (undefined *)((long)__dest - uVar10);
      uVar17 = uVar17 - uVar10;
      memcpy(puVar22,local_68 + uVar17,uVar10);
      if (uVar17 == 0) goto LAB_0040d885;
      __dest = (undefined *)((long)puVar22 - sVar11);
      memcpy(__dest,__s,sVar11);
    }
    puVar22 = (undefined *)((long)__dest - uVar17);
    memcpy(puVar22,local_68,uVar17);
  }
LAB_0040d885:
  if ((param_3 & 0x80) == 0) goto LAB_0040d8a8;
  if (uVar16 == 0xffffffff) {
    if (param_5 < 2) {
      uVar16 = 0;
      goto LAB_0040d895;
    }
    uVar16 = 1;
    uVar10 = 1;
    do {
      uVar10 = uVar10 * uVar6;
      if (param_5 <= uVar10) break;
      uVar16 = uVar16 + 1;
    } while (uVar16 != 8);
    if ((param_3 & 0x40) != 0) goto LAB_0040db11;
LAB_0040db30:
    if ((uVar5 == 0) && (uVar16 == 1)) {
      *(undefined *)local_a8 = 0x6b;
      puVar21 = (undefined *)((long)local_a8 + 1);
      if ((param_3 & 0x100) == 0) {
LAB_0040dd63:
        local_a8 = (undefined *)((long)local_a8 + 1);
        goto LAB_0040d8a8;
      }
    }
    else {
      *(undefined *)local_a8 = (&UNK_0041d8b8)[(int)uVar16];
      if ((param_3 & 0x100) == 0) goto LAB_0040dd63;
      puVar21 = (undefined *)((long)local_a8 + 1);
      if (uVar5 != 0) {
        *(undefined *)((long)local_a8 + 1) = 0x69;
        puVar21 = (undefined *)((long)local_a8 + 2);
      }
    }
  }
  else {
LAB_0040d895:
    if ((param_3 & 0x100 | uVar16) == 0) goto LAB_0040d8a8;
    if ((param_3 & 0x40) != 0) {
LAB_0040db11:
      local_a8 = (undefined *)(param_2 + 0x288);
      param_2[0x287] = ' ';
    }
    if (uVar16 != 0) goto LAB_0040db30;
    puVar21 = local_a8;
    if ((param_3 & 0x100) == 0) goto LAB_0040d8a8;
  }
  local_a8 = (undefined *)((long)puVar21 + 1);
  *(undefined *)puVar21 = 0x42;
LAB_0040d8a8:
  *(undefined *)local_a8 = 0;
  return puVar22;
}


char * FUN_0040dfa0(char *param_1,uint *param_2,long *param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  long lVar4;
  uint uVar5;
  char *local_30 [2];
  
  if (((param_1 == (char *)0x0) && (param_1 = getenv("BLOCK_SIZE"), param_1 == (char *)0x0)) &&
     (param_1 = getenv("BLOCKSIZE"), param_1 == (char *)0x0)) {
    pcVar3 = getenv("POSIXLY_CORRECT");
    if (pcVar3 == (char *)0x0) {
      *param_3 = 0x400;
      *param_2 = 0;
    }
    else {
      *param_3 = 0x200;
      pcVar3 = (char *)0x0;
      *param_2 = 0;
    }
  }
  else {
    uVar5 = 0;
    if (*param_1 == '\'') {
      param_1 = param_1 + 1;
      uVar5 = 4;
    }
    iVar2 = FUN_0040acf0(param_1,&PTR_s_human_readable_0041d8a0,&DAT_0041d890,4);
    if (iVar2 < 0) {
      pcVar3 = (char *)FUN_004132b0(param_1,local_30,0,param_3,"eEgGkKmMpPtTyYzZ0");
      if ((int)pcVar3 == 0) {
        cVar1 = *param_1;
        while (9 < (byte)(cVar1 - 0x30U)) {
          if (param_1 == local_30[0]) {
            if (local_30[0][-1] == 'B') {
              uVar5 = uVar5 | 0x180;
              if (local_30[0][-2] != 'i') break;
            }
            else {
              uVar5 = uVar5 | 0x80;
            }
            uVar5 = uVar5 | 0x20;
            break;
          }
          param_1 = param_1 + 1;
          cVar1 = *param_1;
        }
        lVar4 = *param_3;
        *param_2 = uVar5;
      }
      else {
        *param_2 = 0;
        lVar4 = *param_3;
      }
      if (lVar4 == 0) {
        pcVar3 = getenv("POSIXLY_CORRECT");
        *param_3 = (ulong)(-(uint)(pcVar3 == (char *)0x0) & 0x200) + 0x200;
        return (char *)0x4;
      }
    }
    else {
      *param_3 = 1;
      pcVar3 = (char *)0x0;
      *param_2 = uVar5 | *(uint *)(&DAT_0041d890 + (long)iVar2 * 4);
    }
  }
  return pcVar3;
}


__uid_t * FUN_0040e160(__uid_t param_1)

{
  __uid_t _Var1;
  passwd *ppVar2;
  size_t sVar3;
  __uid_t *p_Var4;
  __uid_t *p_Var5;
  ulong uVar6;
  char *__s;
  
  if (DAT_006257b8 == (__uid_t *)0x0) {
LAB_0040e18d:
    __s = "";
    ppVar2 = getpwuid(param_1);
    uVar6 = 0x18;
    if (ppVar2 != (passwd *)0x0) {
      __s = ppVar2->pw_name;
      sVar3 = strlen(__s);
      uVar6 = sVar3 + 0x18 & 0xfffffffffffffff8;
    }
    p_Var4 = (__uid_t *)FUN_00412980(uVar6);
    *p_Var4 = param_1;
    strcpy((char *)(p_Var4 + 4),__s);
    p_Var5 = p_Var4;
    *(__uid_t **)(p_Var4 + 2) = DAT_006257b8;
    DAT_006257b8 = p_Var5;
  }
  else {
    _Var1 = *DAT_006257b8;
    p_Var4 = DAT_006257b8;
    while (param_1 != _Var1) {
      p_Var4 = *(__uid_t **)(p_Var4 + 2);
      if (p_Var4 == (__uid_t *)0x0) goto LAB_0040e18d;
      _Var1 = *p_Var4;
    }
  }
  p_Var5 = (__uid_t *)0x0;
  if (*(char *)(p_Var4 + 4) != '\0') {
    p_Var5 = p_Var4 + 4;
  }
  return p_Var5;
}


__uid_t * FUN_0040e1f0(char *param_1)

{
  char cVar1;
  __uid_t *p_Var2;
  int iVar3;
  passwd *ppVar4;
  size_t sVar5;
  __uid_t *p_Var6;
  long lVar7;
  
  if (DAT_006257b8 != (__uid_t *)0x0) {
    cVar1 = *param_1;
    p_Var6 = DAT_006257b8;
    do {
      if ((*(char *)(p_Var6 + 4) == cVar1) &&
         (iVar3 = strcmp((char *)(p_Var6 + 4),param_1), iVar3 == 0)) {
        return p_Var6;
      }
      p_Var6 = *(__uid_t **)(p_Var6 + 2);
    } while (p_Var6 != (__uid_t *)0x0);
  }
  if (DAT_006257b0 != (__uid_t *)0x0) {
    cVar1 = *param_1;
    lVar7 = (long)DAT_006257b0;
    do {
      if ((*(char *)(lVar7 + 0x10) == cVar1) &&
         (iVar3 = strcmp((char *)(lVar7 + 0x10),param_1), iVar3 == 0)) {
        return (__uid_t *)0x0;
      }
      lVar7 = *(long *)(lVar7 + 8);
    } while (lVar7 != 0);
  }
  ppVar4 = getpwnam(param_1);
  sVar5 = strlen(param_1);
  p_Var6 = (__uid_t *)FUN_00412980(sVar5 + 0x18 & 0xfffffffffffffff8);
  strcpy((char *)(p_Var6 + 4),param_1);
  if (ppVar4 != (passwd *)0x0) {
    *p_Var6 = ppVar4->pw_uid;
    p_Var2 = p_Var6;
    *(__uid_t **)(p_Var6 + 2) = DAT_006257b8;
    DAT_006257b8 = p_Var2;
    return p_Var6;
  }
  *(__uid_t **)(p_Var6 + 2) = DAT_006257b0;
  DAT_006257b0 = p_Var6;
  return (__uid_t *)0x0;
}


__gid_t * FUN_0040e2f0(__gid_t param_1)

{
  __gid_t _Var1;
  group *pgVar2;
  size_t sVar3;
  __gid_t *p_Var4;
  __gid_t *p_Var5;
  ulong uVar6;
  char *__s;
  
  if (DAT_006257a8 == (__gid_t *)0x0) {
LAB_0040e31d:
    __s = "";
    pgVar2 = getgrgid(param_1);
    uVar6 = 0x18;
    if (pgVar2 != (group *)0x0) {
      __s = pgVar2->gr_name;
      sVar3 = strlen(__s);
      uVar6 = sVar3 + 0x18 & 0xfffffffffffffff8;
    }
    p_Var4 = (__gid_t *)FUN_00412980(uVar6);
    *p_Var4 = param_1;
    strcpy((char *)(p_Var4 + 4),__s);
    p_Var5 = p_Var4;
    *(__gid_t **)(p_Var4 + 2) = DAT_006257a8;
    DAT_006257a8 = p_Var5;
  }
  else {
    _Var1 = *DAT_006257a8;
    p_Var4 = DAT_006257a8;
    while (param_1 != _Var1) {
      p_Var4 = *(__gid_t **)(p_Var4 + 2);
      if (p_Var4 == (__gid_t *)0x0) goto LAB_0040e31d;
      _Var1 = *p_Var4;
    }
  }
  p_Var5 = (__gid_t *)0x0;
  if (*(char *)(p_Var4 + 4) != '\0') {
    p_Var5 = p_Var4 + 4;
  }
  return p_Var5;
}


__gid_t * FUN_0040e380(char *param_1)

{
  char cVar1;
  __gid_t *p_Var2;
  int iVar3;
  group *pgVar4;
  size_t sVar5;
  __gid_t *p_Var6;
  long lVar7;
  
  if (DAT_006257a8 != (__gid_t *)0x0) {
    cVar1 = *param_1;
    p_Var6 = DAT_006257a8;
    do {
      if ((*(char *)(p_Var6 + 4) == cVar1) &&
         (iVar3 = strcmp((char *)(p_Var6 + 4),param_1), iVar3 == 0)) {
        return p_Var6;
      }
      p_Var6 = *(__gid_t **)(p_Var6 + 2);
    } while (p_Var6 != (__gid_t *)0x0);
  }
  if (DAT_006257a0 != (__gid_t *)0x0) {
    cVar1 = *param_1;
    lVar7 = (long)DAT_006257a0;
    do {
      if ((*(char *)(lVar7 + 0x10) == cVar1) &&
         (iVar3 = strcmp((char *)(lVar7 + 0x10),param_1), iVar3 == 0)) {
        return (__gid_t *)0x0;
      }
      lVar7 = *(long *)(lVar7 + 8);
    } while (lVar7 != 0);
  }
  pgVar4 = getgrnam(param_1);
  sVar5 = strlen(param_1);
  p_Var6 = (__gid_t *)FUN_00412980(sVar5 + 0x18 & 0xfffffffffffffff8);
  strcpy((char *)(p_Var6 + 4),param_1);
  if (pgVar4 != (group *)0x0) {
    *p_Var6 = pgVar4->gr_gid;
    p_Var2 = p_Var6;
    *(__gid_t **)(p_Var6 + 2) = DAT_006257a8;
    DAT_006257a8 = p_Var2;
    return p_Var6;
  }
  *(__gid_t **)(p_Var6 + 2) = DAT_006257a0;
  DAT_006257a0 = p_Var6;
  return (__gid_t *)0x0;
}


char * FUN_0040e480(ulong param_1,long param_2)

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


char * FUN_0040e520(ulong param_1,long param_2)

{
  bool bVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(param_2 + 0x14);
  *(undefined *)(param_2 + 0x14) = 0;
  do {
    pcVar2 = pcVar2 + -1;
    *pcVar2 = (char)param_1 + (char)(param_1 / 10) * -10 + '0';
    bVar1 = 9 < param_1;
    param_1 = param_1 / 10;
  } while (bVar1);
  return pcVar2;
}


long FUN_0040e570(char *param_1,undefined *param_2,long param_3,ulong *param_4,int param_5,
                 uint param_6)

{
  size_t __n;
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  size_t sVar7;
  size_t sVar8;
  char *__s;
  ulong uVar9;
  undefined *puVar10;
  wchar_t *pwVar12;
  wchar_t wVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  wchar_t *local_68;
  char *local_50;
  size_t local_48;
  undefined *puVar11;
  
  uVar4 = strlen(param_1);
  uVar14 = uVar4;
  if (((param_6 & 2) == 0) && (sVar7 = __ctype_get_mb_cur_max(), 1 < sVar7)) {
    sVar7 = mbstowcs((wchar_t *)0x0,param_1,0);
    if (sVar7 == 0xffffffffffffffff) {
      if ((param_6 & 1) == 0) {
LAB_0040e720:
        local_68 = (wchar_t *)0x0;
        __s = (char *)0x0;
        lVar15 = -1;
        goto LAB_0040e68e;
      }
      goto LAB_0040e5a8;
    }
    __n = sVar7 + 1;
    local_68 = (wchar_t *)malloc(__n * 4);
    local_50 = param_1;
    if (local_68 == (wchar_t *)0x0) {
      __s = (char *)0x0;
      if ((param_6 & 1) == 0) goto LAB_0040e720;
      goto LAB_0040e5b6;
    }
    sVar8 = mbstowcs(local_68,param_1,__n);
    if (sVar8 == 0) {
      __s = (char *)0x0;
      goto LAB_0040e5b6;
    }
    local_68[sVar7] = L'\0';
    wVar13 = *local_68;
    if (wVar13 != L'\0') {
      bVar2 = false;
      pwVar12 = local_68;
      do {
        iVar3 = iswprint(wVar13);
        if (iVar3 == 0) {
          *pwVar12 = L'�';
          bVar2 = true;
        }
        pwVar12 = pwVar12 + 1;
        wVar13 = *pwVar12;
      } while (wVar13 != L'\0');
      iVar3 = wcswidth(local_68,__n);
      uVar14 = (ulong)iVar3;
      if (!bVar2) goto LAB_0040e890;
      local_48 = wcstombs((char *)0x0,local_68,0);
LAB_0040e800:
      local_48 = local_48 + 1;
      __s = (char *)malloc(local_48);
      if (__s == (char *)0x0) {
        if ((param_6 & 1) == 0) {
          lVar15 = -1;
          goto LAB_0040e68e;
        }
      }
      else {
        uVar4 = *param_4;
        wVar13 = *local_68;
        pwVar12 = local_68;
        if (wVar13 == L'\0') {
          uVar14 = 0;
        }
        else {
          uVar14 = 0;
          do {
            iVar3 = wcwidth(wVar13);
            if (iVar3 == -1) {
              *pwVar12 = L'�';
              lVar15 = 1;
            }
            else {
              lVar15 = (long)iVar3;
            }
            uVar6 = lVar15 + uVar14;
            if (uVar4 < uVar6) break;
            pwVar12 = pwVar12 + 1;
            wVar13 = *pwVar12;
            uVar14 = uVar6;
          } while (wVar13 != L'\0');
        }
        *pwVar12 = L'\0';
        uVar4 = wcstombs(__s,local_68,local_48);
        local_50 = __s;
      }
      goto LAB_0040e5b6;
    }
    iVar3 = wcswidth(local_68,__n);
    uVar14 = (ulong)iVar3;
LAB_0040e890:
    uVar6 = *param_4;
    local_48 = uVar4;
    if (uVar6 < uVar14) goto LAB_0040e800;
    __s = (char *)0x0;
LAB_0040e6bb:
    uVar16 = uVar4;
    uVar9 = uVar14;
    if (uVar6 <= uVar14) goto LAB_0040e5c8;
    uVar6 = uVar6 - uVar14;
    *param_4 = uVar14;
    if (param_5 != 0) goto LAB_0040e5d8;
LAB_0040e6dd:
    uVar4 = 0;
    uVar14 = uVar6;
  }
  else {
LAB_0040e5a8:
    local_68 = (wchar_t *)0x0;
    __s = (char *)0x0;
    local_50 = param_1;
LAB_0040e5b6:
    uVar6 = *param_4;
    uVar9 = uVar6;
    uVar16 = uVar6;
    if (uVar14 <= uVar6) goto LAB_0040e6bb;
LAB_0040e5c8:
    uVar6 = 0;
    *param_4 = uVar9;
    if (param_5 == 0) goto LAB_0040e6dd;
LAB_0040e5d8:
    uVar4 = uVar6;
    uVar14 = 0;
    if (param_5 != 1) {
      uVar4 = (ulong)((uint)uVar6 & 1) + (uVar6 >> 1);
      uVar14 = uVar6 >> 1;
    }
  }
  uVar6 = uVar4 + uVar16;
  if ((param_6 & 4) != 0) {
    uVar4 = 0;
    uVar6 = uVar16;
  }
  if ((param_6 & 8) != 0) {
    uVar14 = 0;
  }
  if (param_3 != 0) {
    puVar1 = param_2 + param_3 + -1;
    puVar10 = param_2;
    if ((param_2 < puVar1) && (puVar5 = param_2, uVar4 != 0)) {
      do {
        puVar10 = puVar5 + 1;
        *puVar5 = 0x20;
        if (param_2 + (uVar4 - (long)puVar10) == (undefined *)0x0) break;
        puVar5 = puVar10;
      } while (puVar10 < puVar1);
    }
    *puVar10 = 0;
    uVar4 = (long)puVar1 - (long)puVar10;
    if (uVar16 < (ulong)((long)puVar1 - (long)puVar10)) {
      uVar4 = uVar16;
    }
    puVar5 = (undefined *)mempcpy(puVar10,local_50,uVar4);
    puVar10 = puVar5;
    if ((puVar5 < puVar1) && (puVar11 = puVar5, uVar14 != 0)) {
      do {
        puVar10 = puVar11 + 1;
        *puVar11 = 0x20;
        if (puVar5 + (uVar14 - (long)puVar10) == (undefined *)0x0) break;
        puVar11 = puVar10;
      } while (puVar10 < puVar1);
    }
    *puVar10 = 0;
  }
  lVar15 = uVar14 + uVar6;
LAB_0040e68e:
  free(local_68);
  free(__s);
  return lVar15;
}


void * FUN_0040e910(undefined param_1,ulong *param_2,undefined param_3,undefined param_4)

{
  ulong __size;
  ulong uVar1;
  void *__ptr;
  ulong uVar2;
  void *__ptr_00;
  
  uVar1 = *param_2;
  uVar2 = uVar1;
  __ptr_00 = (void *)0x0;
  while( true ) {
    __size = uVar2 + 1;
    __ptr = realloc(__ptr_00,__size);
    if (__ptr == (void *)0x0) {
      free(__ptr_00);
      return (void *)0x0;
    }
    *param_2 = uVar1;
    uVar2 = FUN_0040e570(param_1,__ptr,__size,param_2,param_3,param_4);
    if (uVar2 == 0xffffffffffffffff) break;
    __ptr_00 = __ptr;
    if (uVar2 < __size) {
      return __ptr;
    }
  }
  free(__ptr);
  return (void *)0x0;
}


int FUN_0040e9b0(byte *param_1,long param_2,uint param_3)

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
          if (((*ppuVar6)[*param_1] & 2) == 0) goto LAB_0040eb2a;
        }
        else {
LAB_0040eb2a:
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
          if (((char)bVar2 < '%') && (3 < (byte)(bVar2 - 0x20))) goto LAB_0040ea22;
LAB_0040e9fb:
          param_1 = param_1 + 1;
          iVar8 = iVar8 + 1;
        }
        else {
          if (('@' < (char)bVar2) && (((char)bVar2 < '`' || ((byte)(bVar2 + 0x9f) < 0x1e))))
          goto LAB_0040e9fb;
LAB_0040ea22:
          local_40[0] = (mbstate_t)0x0;
          do {
            lVar5 = FUN_00416e80(&local_44,param_1,(long)pbVar1 - (long)param_1,local_40);
            if (lVar5 == -1) {
              if ((param_3 & 1) != 0) {
                return -1;
              }
              goto LAB_0040e9fb;
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


void FUN_0040eb70(char *param_1,undefined param_2)

{
  size_t sVar1;
  
  sVar1 = strlen(param_1);
  FUN_0040e9b0(param_1,sVar1,param_2);
  return;
}


void FUN_0040eba0(undefined *param_1,ulong param_2,undefined *param_3,code *param_4)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  undefined uVar4;
  undefined uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined *__dest;
  ulong local_68;
  ulong local_48;
  
  if (param_2 < 3) {
    if (param_2 == 2) {
      uVar4 = param_1[1];
      uVar5 = *param_1;
      iVar2 = (*param_4)(uVar5,uVar4);
      if (0 < iVar2) {
        *param_1 = uVar4;
        param_1[1] = uVar5;
        return;
      }
    }
  }
  else {
    uVar3 = param_2 >> 1;
    FUN_0040eba0(param_1 + uVar3,param_2 - uVar3,param_3,param_4);
    if (param_2 == 3) {
      uVar4 = *param_1;
      *param_3 = uVar4;
    }
    else {
      uVar7 = param_2 >> 2;
      FUN_0040eba0(param_1 + uVar7,uVar3 - uVar7,param_3,param_4);
      FUN_0040eba0(param_1,uVar7,param_3,param_4);
      local_68 = 0;
      uVar4 = *param_1;
      uVar5 = param_1[uVar7];
      uVar6 = uVar7;
      puVar10 = param_3;
      while( true ) {
        while( true ) {
          __dest = puVar10 + 1;
          iVar2 = (*param_4)(uVar4,uVar5);
          if (0 < iVar2) break;
          uVar1 = local_68 + 1;
          *puVar10 = uVar4;
          local_68 = uVar6;
          local_48 = uVar3;
          if (uVar7 == uVar1) goto LAB_0040ed98;
          uVar4 = param_1[uVar1];
          puVar10 = __dest;
          local_68 = uVar1;
        }
        *puVar10 = uVar5;
        uVar6 = uVar6 + 1;
        local_48 = uVar7;
        if (uVar3 == uVar6) break;
        uVar5 = param_1[uVar6];
        puVar10 = __dest;
      }
LAB_0040ed98:
      memcpy(__dest,param_1 + local_68,(local_48 - local_68) * 8);
      uVar4 = *param_3;
    }
    local_68 = 0;
    uVar5 = param_1[uVar3];
    uVar6 = uVar3;
    lVar8 = 0;
    while( true ) {
      while( true ) {
        lVar9 = lVar8 + 1;
        iVar2 = (*param_4)(uVar4,uVar5);
        if (iVar2 < 1) break;
        param_1[lVar8] = uVar5;
        uVar6 = uVar6 + 1;
        if (param_2 == uVar6) {
          memcpy(param_1 + lVar9,param_3 + local_68,(uVar3 - local_68) * 8);
          return;
        }
        uVar5 = param_1[uVar6];
        lVar8 = lVar9;
      }
      local_68 = local_68 + 1;
      param_1[lVar8] = uVar4;
      if (uVar3 == local_68) break;
      uVar4 = param_3[local_68];
      lVar8 = lVar9;
    }
  }
  return;
}


void FUN_0040edd0(long param_1,long param_2,undefined param_3)

{
  FUN_0040eba0(param_1,param_2,param_1 + param_2 * 8,param_3);
  return;
}


long FUN_0040ede0(long param_1,long param_2,long param_3)

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


long FUN_0040ee30(long param_1,long param_2,long param_3)

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

long FUN_0040ee80(char *param_1,long param_2,char *param_3,tm *param_4,char param_5,
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
LAB_0040ef1b:
    if ((param_1 != (char *)0x0) && (param_2 != 0)) {
      *param_1 = '\0';
    }
    return lVar31;
  }
LAB_0040eeea:
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
            if (9 < uVar6 - 0x30) goto LAB_0040efc8;
LAB_0040f011:
            uVar20 = 0;
            pcVar9 = param_3;
            goto LAB_0040f013;
          }
          break;
        }
        if (cVar13 != '#') {
          if (cVar13 != '-') {
            uVar20 = 0xffffffff;
            if (uVar6 - 0x30 < 10) goto LAB_0040f011;
            goto LAB_0040efc8;
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
  goto LAB_0040ef0e;
LAB_0040f013:
  do {
    uVar6 = (uint)pcVar9[1];
    param_3 = pcVar9 + 1;
    uVar14 = uVar6 - 0x30;
    if ((int)uVar20 < 0xccccccd) {
      if ((uVar20 == 0xccccccc) && ('7' < *pcVar9)) goto LAB_0040f05e;
      uVar20 = *pcVar9 + -0x30 + uVar20 * 10;
    }
    else {
LAB_0040f05e:
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
LAB_0040efc8:
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
LAB_0040fe57:
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
    goto LAB_0040fd03;
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
      goto LAB_0040fd03;
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
    goto LAB_0040f8a6;
  case 0x3a:
    pcVar9 = param_3 + 1;
    lVar30 = 1;
    cVar5 = param_3[1];
    while (cVar5 == ':') {
      lVar30 = lVar30 + 1;
      pcVar9 = param_3 + lVar30;
      cVar5 = param_3[lVar30];
    }
    if (cVar5 == 'z') goto LAB_0040fda0;
    break;
  case 0x41:
  case 0x42:
  case 0x61:
    if (uVar14 != 0) break;
    if (cVar5 != '\0') {
      cVar24 = cVar5;
    }
LAB_0040f0a0:
    cVar28 = '\0';
    uVar14 = 0;
    goto LAB_0040f0c0;
  case 0x43:
    if (uVar14 != 0x45) {
      bVar4 = false;
      local_478 = 2;
      iVar15 = param_4->tm_year;
      iVar23 = iVar15 / 100 + 0x13;
      bVar32 = iVar15 < -0x76c;
      uVar6 = iVar23 - ((uint)(0 < iVar23) & (uint)(iVar15 % 100) >> 0x1f);
      uVar22 = 0;
      goto LAB_0040f61f;
    }
LAB_0041029c:
    uVar8 = 0;
    goto LAB_0040f632;
  case 0x44:
    if (uVar14 == 0) {
      local_498 = "%m/%d/%y";
      goto LAB_0040f399;
    }
    break;
  case 0x46:
    if (uVar14 == 0) {
      local_498 = "%Y-%m-%d";
      goto LAB_0040f399;
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
        goto LAB_0040f61f;
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
      goto LAB_0040f610;
    }
    break;
  case 0x48:
    if (uVar14 != 0x45) {
      uVar6 = param_4->tm_hour;
      local_478 = 2;
      goto LAB_0040f610;
    }
    break;
  case 0x49:
    if (uVar14 != 0x45) {
      local_478 = 2;
      goto LAB_0040f610;
    }
    break;
  case 0x4d:
    if (uVar14 != 0x45) {
      uVar6 = param_4->tm_min;
      local_478 = 2;
      goto LAB_0040f610;
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
      goto LAB_0040f610;
    }
    break;
  case 0x50:
    cVar28 = '\x01';
    goto LAB_0040f7b5;
  case 0x52:
    local_498 = "%H:%M";
    goto LAB_0040f399;
  case 0x53:
    if (uVar14 != 0x45) {
      uVar6 = param_4->tm_sec;
      local_478 = 2;
      goto LAB_0040f610;
    }
    break;
  case 0x54:
    local_498 = "%H:%M:%S";
LAB_0040f399:
    uVar29 = FUN_0040ee80(0,0xffffffffffffffff,local_498,param_4,cVar24,param_6,param_7,param_8);
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
      FUN_0040ee80(pcVar11,param_2 - lVar31,local_498,param_4,cVar24,param_6,param_7,param_8);
      param_1 = pcVar11 + uVar29;
    }
    lVar31 = lVar31 + uVar18;
    goto LAB_0040ef0e;
  case 0x55:
    if (uVar14 != 0x45) {
      iVar23 = (param_4->tm_yday - param_4->tm_wday) + 7;
      iVar15 = (int)((ulong)((long)iVar23 * -0x6db6db6d) >> 0x20);
LAB_0040fbdd:
      uVar6 = (iVar15 + iVar23 >> 2) - (iVar23 >> 0x1f);
      local_478 = 2;
      goto LAB_0040f610;
    }
    break;
  case 0x57:
    if (uVar14 != 0x45) {
      iVar23 = param_4->tm_wday + 6;
      iVar23 = ((iVar23 / 7) * 7 - iVar23) + 7 + param_4->tm_yday;
      iVar15 = (int)((ulong)((long)iVar23 * -0x6db6db6d) >> 0x20);
      goto LAB_0040fbdd;
    }
    break;
  case 0x58:
  case 99:
  case 0x78:
    if (uVar14 != 0x4f) goto switchD_0040efe1_caseD_72;
    break;
  case 0x59:
    if (uVar14 == 0x45) goto LAB_0041029c;
    if (uVar14 == 0x4f) break;
    bVar4 = false;
    local_478 = 4;
    bVar32 = param_4->tm_year < -0x76c;
    uVar6 = param_4->tm_year + 0x76c;
    uVar22 = 0;
    goto LAB_0040fb90;
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
          FUN_0040ee30();
        }
      }
      else {
        FUN_0040ede0();
      }
      param_1 = pcVar11 + sVar19;
    }
    lVar31 = lVar31 + uVar29;
    goto LAB_0040ef0e;
  case 0x62:
  case 0x68:
    if (cVar5 != '\0') {
      cVar24 = cVar5;
    }
    if (uVar14 == 0) goto LAB_0040f0a0;
    break;
  case 100:
    if (uVar14 != 0x45) {
      uVar6 = param_4->tm_mday;
      local_478 = 2;
      goto LAB_0040f610;
    }
    break;
  case 0x65:
    if (uVar14 != 0x45) {
      uVar6 = param_4->tm_mday;
LAB_0040f7e1:
      local_478 = 2;
      if ((uVar26 != 0x30) && (uVar26 != 0x2d)) {
        uVar26 = 0x5f;
      }
      goto LAB_0040f610;
    }
    break;
  case 0x6a:
    if (uVar14 != 0x45) {
      bVar4 = false;
      local_478 = 3;
      bVar32 = param_4->tm_yday < -1;
      uVar6 = param_4->tm_yday + 1;
      uVar22 = 0;
      goto LAB_0040f61f;
    }
    break;
  case 0x6b:
    if (uVar14 != 0x45) {
      uVar6 = param_4->tm_hour;
      goto LAB_0040f7e1;
    }
    break;
  case 0x6c:
    if (uVar14 != 0x45) goto LAB_0040f7e1;
    break;
  case 0x6d:
    if (uVar14 != 0x45) {
      bVar4 = false;
      local_478 = 2;
      bVar32 = param_4->tm_mon < -1;
      uVar6 = param_4->tm_mon + 1;
      uVar22 = 0;
      goto LAB_0040f61f;
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
    goto LAB_0040f8a6;
  case 0x70:
    cVar28 = '\0';
LAB_0040f7b5:
    cVar13 = 'p';
    if (cVar5 != '\0') {
      cVar24 = '\0';
      cVar28 = cVar5;
    }
LAB_0040f1dd:
    if (uVar14 != 0) {
      uVar8 = 0;
      goto LAB_0040f63f;
    }
    goto LAB_0040f0c0;
  case 0x71:
    uVar8 = 1;
    local_478 = 1;
    if (uVar14 == 0x4f) goto LAB_0040f632;
    bVar4 = false;
    bVar32 = false;
    uVar22 = 0;
    uVar6 = (param_4->tm_mon * 0xb >> 5) + 1;
    goto LAB_0040f8e0;
  case 0x72:
switchD_0040efe1_caseD_72:
    cVar28 = '\0';
    goto LAB_0040f1dd;
  case 0x73:
    pcVar9 = local_442 + 1;
    local_418 = *(undefined *)&param_4->tm_isdst;
    lStack_410 = param_4->tm_gmtoff;
    local_438 = *(undefined *)param_4;
    uStack_430 = *(undefined *)&param_4->tm_hour;
    local_428 = *(undefined *)&param_4->tm_mon;
    uStack_420 = *(undefined *)&param_4->tm_wday;
    local_408 = param_4->tm_zone;
    lVar10 = FUN_004177a0(param_7,&local_438);
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
    if (lVar10 < 0) goto LAB_00410028;
    goto LAB_0040f2cd;
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
LAB_0040f8a6:
    lVar31 = lVar31 + uVar29;
    goto LAB_0040ef0e;
  case 0x75:
    uVar6 = (param_4->tm_wday + 6) % 7 + 1;
    local_478 = 1;
    goto LAB_0040f610;
  case 0x77:
    if (uVar14 != 0x45) {
      uVar6 = param_4->tm_wday;
      local_478 = 1;
      goto LAB_0040f610;
    }
    break;
  case 0x79:
    if (uVar14 == 0x45) goto LAB_0041029c;
    local_478 = 2;
    uVar8 = param_4->tm_year % 100;
    uVar6 = uVar8;
    if ((int)uVar8 < 0) {
      uVar6 = uVar8 + 100;
      if (param_4->tm_year < -0x76c) {
        uVar6 = -uVar8;
      }
    }
LAB_0040f610:
    bVar4 = false;
    uVar22 = 0;
    bVar32 = SUB41(uVar6 >> 0x1f,0);
LAB_0040f61f:
    if (uVar14 == 0x4f) {
      uVar8 = local_478;
      if (bVar32 != false) {
LAB_0040fb99:
        uVar6 = -uVar6;
        goto LAB_0040f8e0;
      }
LAB_0040f632:
      cVar28 = '\0';
LAB_0040f63f:
      local_456 = (char)uVar14;
      pcVar11 = local_455;
      uVar14 = uVar8;
LAB_0040f0c0:
      local_458 = 0x2520;
      *pcVar11 = cVar13;
      pcVar11[1] = '\0';
      sVar19 = strftime((char *)&local_438,0x400,(char *)&local_458,param_4);
      pcVar9 = param_3;
      if (sVar19 == 0) goto LAB_0040ef0e;
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
        if (cVar28 == '\0') goto LAB_0040f1ab;
        FUN_0040ede0();
        goto LAB_0040f1c3;
      }
    }
    else {
LAB_0040fb90:
      if (bVar32 != false) goto LAB_0040fb99;
LAB_0040f8e0:
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
            goto LAB_0041003c;
          }
          cVar5 = '+';
LAB_0040f970:
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
                goto LAB_0040fa45;
              }
              goto LAB_0040fa90;
            }
LAB_004101f3:
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
LAB_0040f2cd:
          local_498 = local_442 + (1 - (long)pcVar9);
          pcVar11 = (char *)(param_2 - lVar31);
          if ((uVar26 == 0x2d) || (iVar23 = local_478 - (int)local_498, iVar23 < 1)) {
            uVar6 = 0;
            if (-1 < (int)uVar20) {
              uVar6 = uVar20;
            }
            pcVar27 = (char *)(long)(int)uVar6;
            goto LAB_0040f306;
          }
          if (uVar26 == 0x5f) {
            cVar5 = '\0';
            goto LAB_004101f3;
          }
          if (pcVar11 <= (char *)(long)(int)local_478) {
            return 0;
          }
          sVar19 = (size_t)iVar23;
LAB_0040fa45:
          if (param_1 != (char *)0x0) {
            memset(param_1,0x30,sVar19);
            param_1 = param_1 + sVar19;
          }
LAB_0040fa90:
          lVar31 = lVar31 + sVar19;
          uVar20 = 0;
          pcVar27 = (char *)0x0;
          pcVar11 = (char *)(param_2 - lVar31);
        }
      }
      else {
LAB_00410028:
        cVar5 = '-';
        cVar13 = '-';
        if (uVar26 != 0x2d) goto LAB_0040f970;
LAB_0041003c:
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
LAB_0040f306:
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
LAB_0040f1ab:
        if (cVar24 == '\0') {
          memcpy(pcVar11,pcVar9,(size_t)local_498);
        }
        else {
          FUN_0040ee30();
        }
LAB_0040f1c3:
        param_1 = pcVar11 + (long)local_498;
        param_3 = local_488;
      }
    }
    lVar31 = lVar31 + (long)pcVar16;
    pcVar9 = param_3;
    goto LAB_0040ef0e;
  case 0x7a:
    lVar30 = 0;
LAB_0040fda0:
    if (param_4->tm_isdst < 0) goto LAB_0040ef0e;
    bVar32 = true;
    iVar23 = (int)param_4->tm_gmtoff;
    if ((-1 < iVar23) && (bVar32 = false, iVar23 == 0)) {
      bVar32 = *__s == '-';
    }
    uVar6 = iVar23 / 0xe10;
    uVar8 = (iVar23 / 0x3c) % 0x3c;
    param_3 = pcVar9;
    if (lVar30 == 1) {
LAB_004104f6:
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
          goto LAB_0040fe57;
        }
        if (iVar23 % 0x3c == 0) {
          if (uVar8 != 0) goto LAB_004104f6;
          local_478 = 3;
          bVar4 = true;
          uVar22 = uVar8;
          goto LAB_0040f61f;
        }
      }
      local_478 = 9;
      bVar4 = true;
      uVar22 = 0x14;
      uVar6 = iVar23 % 0x3c + uVar6 * 10000 + uVar8 * 100;
    }
    goto LAB_0040f61f;
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
LAB_0040fd03:
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
      FUN_0040ee30();
    }
    param_1 = pcVar11 + __n;
  }
  lVar31 = lVar31 + uVar29;
  pcVar9 = param_3;
LAB_0040ef0e:
  cVar5 = pcVar9[1];
  param_3 = pcVar9 + 1;
  if (cVar5 == '\0') goto LAB_0040ef1b;
  goto LAB_0040eeea;
}


void FUN_00410650(void)

{
  FUN_0040ee80();
  return;
}


void FUN_00410670(byte *param_1)

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
        pbVar6 = &DAT_0041dd18;
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
  DAT_006257c0 = param_1;
  program_invocation_name = param_1;
  return;
}


char * FUN_00410710(char *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  byte *pbVar3;
  
  pcVar2 = (char *)dcgettext(0,param_1,5);
  if (param_1 == pcVar2) {
    pbVar3 = (byte *)FUN_004179a0();
    if ((*pbVar3 & 0xdf) == 0x55) {
      if (((((pbVar3[1] & 0xdf) != 0x54) || ((pbVar3[2] & 0xdf) != 0x46)) || (pbVar3[3] != 0x2d)) ||
         ((pbVar3[4] != 0x38 || (pbVar3[5] != 0)))) {
LAB_004107e8:
        pcVar2 = "\"";
        if (param_2 != 9) {
          pcVar2 = "\'";
        }
        return pcVar2;
      }
      cVar1 = *pcVar2;
      pcVar2 = &DAT_0041dd29;
      if (cVar1 != '`') {
        pcVar2 = &DAT_0041dd1e;
      }
    }
    else {
      if (((((*pbVar3 & 0xdf) != 0x47) || ((pbVar3[1] & 0xdf) != 0x42)) || (pbVar3[2] != 0x31)) ||
         (((pbVar3[3] != 0x38 || (pbVar3[4] != 0x30)) ||
          ((pbVar3[5] != 0x33 || ((pbVar3[6] != 0x30 || (pbVar3[7] != 0)))))))) goto LAB_004107e8;
      cVar1 = *pcVar2;
      pcVar2 = &DAT_0041dd25;
      if (cVar1 != '`') {
        pcVar2 = &DAT_0041dd22;
      }
    }
  }
  return pcVar2;
}


ulong FUN_00410810(undefined *param_1,ulong param_2,char *param_3,ulong param_4,int param_5,
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
LAB_00411461:
    if (param_2 != 0) {
      bVar3 = false;
      local_5b = false;
      bVar2 = true;
      local_70 = 0;
      goto LAB_00411096;
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
      goto LAB_00411461;
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
      param_8 = (char *)FUN_00410710(&DAT_0041dd2d,param_5);
      param_9 = (char *)FUN_00410710("\'");
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
LAB_004108a8:
  uVar22 = 0;
  bVar5 = local_5b;
LAB_004108b8:
  bVar23 = param_4 != uVar22;
  if (param_4 == 0xffffffffffffffff) {
    bVar23 = param_3[uVar22] != '\0';
  }
  bVar26 = bVar6;
  if (!bVar23) goto LAB_00411038;
  bVar20 = (bool)(param_5 != 2 & bVar6);
  __s1 = (byte *)(param_3 + uVar22);
  uVar16 = uVar15;
  bVar4 = bVar3;
  if (bVar20) {
    if (local_a0 == 0) {
LAB_00410fb0:
      uVar19 = (ulong)*__s1;
      switch(uVar19) {
      case 0:
        goto switchD_00410fc2_caseD_0;
      default:
        bVar20 = false;
        goto switchD_00410e2e_caseD_1;
      case 7:
        bVar17 = 0x61;
        goto LAB_00410cc5;
      case 8:
        bVar17 = 0x62;
        break;
      case 9:
switchD_00410fc2_caseD_9:
        bVar17 = 0x74;
        break;
      case 10:
switchD_00410fc2_caseD_a:
        bVar17 = 0x6e;
        break;
      case 0xb:
switchD_00410fc2_caseD_b:
        bVar17 = 0x76;
        goto LAB_00410cc5;
      case 0xc:
switchD_00410fc2_caseD_c:
        bVar17 = 0x66;
LAB_00410cc5:
        if (local_5c) {
          bVar25 = false;
          goto LAB_00410c18;
        }
LAB_00410cd0:
        bVar23 = false;
        goto LAB_00410a8b;
      case 0xd:
        bVar20 = false;
switchD_004109a8_caseD_d:
        bVar25 = param_5 == 2;
        uVar19 = 0xd;
        bVar13 = 0x72;
        goto LAB_00410be0;
      case 0x20:
        bVar25 = false;
LAB_0041100a:
        uVar19 = 0x20;
        goto LAB_00410fd2;
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
switchD_004109a8_caseD_21:
        bVar25 = false;
        goto LAB_00410beb;
      case 0x23:
      case 0x7e:
        bVar26 = false;
LAB_00410fea:
        if (uVar22 == 0) {
          bVar25 = false;
          bVar23 = bVar20;
          bVar20 = bVar26;
          goto LAB_004109f8;
        }
        bVar23 = false;
        goto LAB_00410a0f;
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
LAB_00410fd2:
        bVar24 = false;
        bVar23 = bVar20;
        bVar20 = bVar25;
        goto LAB_00410a11;
      case 0x27:
        bVar20 = false;
        goto switchD_00410e2e_caseD_27;
      case 0x3f:
        bVar20 = false;
        goto switchD_00410e2e_caseD_3f;
      case 0x5c:
        bVar20 = false;
        goto switchD_004109a8_caseD_5c;
      case 0x7b:
      case 0x7d:
        bVar20 = false;
        goto switchD_00410e2e_caseD_7b;
      }
      bVar25 = false;
      bVar23 = false;
      goto joined_r0x00410c07;
    }
    if ((param_4 == 0xffffffffffffffff) && (1 < local_a0)) {
      param_4 = strlen(param_3);
    }
    if ((param_4 < uVar22 + local_a0) || (iVar7 = memcmp(__s1,local_78,local_a0), iVar7 != 0))
    goto LAB_00410fb0;
    if (!local_5c) {
      uVar19 = (ulong)*__s1;
      bVar25 = bVar20;
      switch(uVar19) {
      case 0:
        goto switchD_004109a8_caseD_0;
      default:
        goto switchD_00410e2e_caseD_1;
      case 7:
        bVar17 = 0x61;
        goto LAB_00410cd0;
      case 8:
        bVar25 = false;
        bVar23 = false;
        bVar17 = 0x62;
        break;
      case 9:
        goto switchD_00410fc2_caseD_9;
      case 10:
        goto switchD_00410fc2_caseD_a;
      case 0xb:
        goto switchD_00410fc2_caseD_b;
      case 0xc:
        goto switchD_00410fc2_caseD_c;
      case 0xd:
        goto switchD_004109a8_caseD_d;
      case 0x20:
        goto LAB_0041100a;
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
        goto switchD_004109a8_caseD_21;
      case 0x23:
      case 0x7e:
        bVar26 = bVar20;
        goto LAB_00410fea;
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
        goto LAB_00410fd2;
      case 0x27:
        goto switchD_00410e2e_caseD_27;
      case 0x3f:
        goto switchD_00410e2e_caseD_3f;
      case 0x5c:
        goto switchD_004109a8_caseD_5c;
      case 0x7b:
      case 0x7d:
        goto switchD_00410e2e_caseD_7b;
      }
      goto LAB_00410a52;
    }
    goto LAB_00410c2a;
  }
  uVar19 = (ulong)*__s1;
  switch(uVar19) {
  case 0:
    if (bVar6) {
switchD_00410fc2_caseD_0:
      if (!local_5c) {
        bVar20 = false;
switchD_004109a8_caseD_0:
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
            goto LAB_00410b08;
          }
LAB_00410d4a:
          param_1[uVar16] = 0x5c;
          uVar15 = uVar16;
        }
        else if (uVar15 < uVar9) goto LAB_00410d4a;
        uVar16 = uVar15 + 1;
        bVar24 = bVar23;
        if (param_5 == 2) {
          bVar17 = 0x30;
          bVar23 = false;
          bVar4 = bVar3;
          goto LAB_00410b08;
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
LAB_00410d89:
        bVar17 = (byte)uVar19;
        bVar23 = false;
        uVar15 = uVar16;
        bVar4 = bVar3;
        if ((bool)(bVar6 ^ 1U | bVar26)) goto LAB_00410b08;
        goto LAB_00410a11;
      }
      bVar26 = param_5 == 2;
      goto LAB_00410c1c;
    }
    if ((param_6 & 1) == 0) {
      bVar25 = param_5 == 2;
      uVar19 = 0;
      bVar23 = false;
      bVar20 = false;
      goto LAB_004109f8;
    }
    uVar22 = uVar22 + 1;
    goto LAB_004108b8;
  default:
switchD_00410e2e_caseD_1:
    bVar25 = bVar6;
    if (sVar8 != 1) {
      local_40[0] = (mbstate_t)0x0;
      if (param_4 == 0xffffffffffffffff) {
        param_4 = strlen(param_3);
      }
      uVar21 = 0;
      do {
        uVar1 = uVar22 + uVar21;
        lVar11 = FUN_00416e80(&local_44,param_3 + uVar1,param_4 - uVar1,local_40);
        if (lVar11 == 0) break;
        if (lVar11 == -1) {
          bVar23 = false;
          goto LAB_0041173a;
        }
        if (lVar11 == -2) {
          if ((param_4 <= uVar1) || (param_3[uVar1] == '\0')) goto LAB_00411877;
          goto LAB_00411867;
        }
        if (((param_5 == 2) && (local_5c)) && (lVar11 != 1)) {
          pcVar12 = param_3 + uVar1 + 1;
          do {
            if (((byte)(*pcVar12 + 0xa5U) < 0x22) &&
               ((1L << (*pcVar12 + 0xa5U & 0x3f) & 0x20000002bU) != 0)) {
              param_5 = 2;
              goto LAB_00410c1c;
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
      goto LAB_0041173a;
    }
    ppuVar10 = __ctype_b_loc();
    uVar21 = 1;
    bVar25 = ((*ppuVar10)[uVar19] & 0x4000) == 0;
    bVar23 = !bVar25;
    bVar25 = (bool)(bVar25 & bVar6);
    goto LAB_00410e04;
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
    goto LAB_00410e42;
  case 10:
    uVar19 = 10;
    bVar13 = 0x6e;
    goto LAB_00410e42;
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
LAB_00410e42:
    bVar25 = param_5 == 2;
    bVar20 = (bool)(local_5c & bVar25);
    if (bVar20) {
LAB_00410e5a:
      param_5 = 2;
      goto LAB_00410c1c;
    }
    break;
  case 0x20:
    uVar19 = 0x20;
    goto LAB_004109e6;
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
LAB_004109e6:
    bVar25 = param_5 == 2;
    if ((local_5c) && (bVar25)) goto LAB_00410e5a;
    goto LAB_004109f8;
  case 0x23:
  case 0x7e:
LAB_004109dd:
    bVar25 = param_5 == 2;
    if (uVar22 == 0) goto LAB_004109e6;
    goto LAB_00410beb;
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
    goto switchD_00410e2e_caseD_25;
  case 0x27:
switchD_00410e2e_caseD_27:
    bVar5 = bVar23;
    if (param_5 != 2) {
      bVar25 = false;
      uVar19 = 0x27;
      goto LAB_004109f8;
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
      goto LAB_00410b08;
    }
    goto LAB_00410c1c;
  case 0x3f:
switchD_00410e2e_caseD_3f:
    if (param_5 == 2) {
      if (!local_5c) {
        bVar17 = 0x3f;
        bVar24 = false;
        bVar23 = false;
        goto LAB_00410b08;
      }
      goto LAB_00410c1c;
    }
    if (param_5 != 5) {
      bVar25 = param_5 == 2;
      uVar19 = 0x3f;
      bVar23 = false;
      goto LAB_004109f8;
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
        goto LAB_00410d89;
      }
      goto LAB_00410c2a;
    }
    bVar25 = false;
    uVar19 = 0x3f;
    bVar23 = false;
    goto LAB_004109f8;
  case 0x5c:
    if (param_5 != 2) {
switchD_004109a8_caseD_5c:
      uVar19 = 0x5c;
      bVar17 = 0x5c;
      bVar13 = 0x5c;
      bVar25 = (bool)(bVar6 & local_5c & local_a0 != 0);
      if (!bVar25) break;
      uVar22 = uVar22 + 1;
      bVar23 = false;
      goto LAB_00410b24;
    }
    if (local_5c) goto LAB_00410c1c;
    uVar22 = uVar22 + 1;
    bVar23 = false;
    bVar17 = 0x5c;
    goto LAB_00410b24;
  case 0x7b:
  case 0x7d:
switchD_00410e2e_caseD_7b:
    bVar24 = param_4 != 1;
    if (param_4 == 0xffffffffffffffff) {
      bVar24 = param_3[1] != '\0';
    }
    bVar25 = param_5 == 2;
    if (!bVar24) goto LAB_004109dd;
    goto LAB_00410beb;
  }
LAB_00410be0:
  if (!bVar6) {
LAB_00410beb:
    bVar23 = false;
    goto LAB_004109f8;
  }
  bVar23 = false;
  bVar17 = bVar13;
  goto joined_r0x00410c07;
LAB_00411038:
  if ((uVar15 == 0) && ((bool)(local_5c & param_5 == 2))) {
    param_5 = 2;
LAB_00410c1c:
    if (bVar26) {
      param_5 = 4;
    }
LAB_00410c2a:
    uVar9 = FUN_00410810(param_1,uVar9,param_3,param_4,param_5,param_6 & 0xfffffffd,0,param_8,
                         param_9);
    return uVar9;
  }
  bVar26 = (bool)(param_5 == 2 & (local_5c ^ 1U));
  bVar23 = (bool)(local_5c ^ 1U);
  if ((!bVar26) || (bVar23 = bVar26, !bVar5)) {
LAB_0041190d:
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
    uVar9 = FUN_00410810(param_1,local_70,param_3,param_4,5,param_6,param_7,param_8,param_9);
    return uVar9;
  }
  local_5b = uVar9 == 0 && local_70 != 0;
  param_2 = local_70;
  bVar23 = bVar5;
  if (uVar9 != 0 || local_70 == 0) goto LAB_0041190d;
LAB_00411096:
  *param_1 = 0x27;
  param_5 = 2;
  uVar15 = 1;
  local_78 = "\'";
  local_a0 = 1;
  local_5c = false;
  uVar9 = param_2;
  goto LAB_004108a8;
  while (__s1[uVar21] != 0) {
LAB_00411867:
    uVar21 = uVar21 + 1;
    if (param_4 <= uVar22 + uVar21) break;
  }
LAB_00411877:
  bVar23 = false;
LAB_0041173a:
  if (1 < uVar21) {
LAB_004112fe:
    bVar26 = false;
    uVar21 = uVar21 + uVar22;
    uVar16 = uVar22;
    do {
      bVar17 = (byte)uVar19;
      if (bVar25) {
        bVar26 = param_5 == 2;
        if (local_5c) goto LAB_00410c1c;
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
        if (uVar21 <= uVar22) goto LAB_00410a9d;
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
        if (uVar21 <= uVar22) goto LAB_00410b24;
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
LAB_00410e04:
  if (bVar25) {
    bVar23 = false;
    bVar25 = bVar6;
    goto LAB_004112fe;
  }
switchD_00410e2e_caseD_25:
  bVar25 = param_5 == 2;
LAB_004109f8:
  bVar17 = (byte)uVar19;
  bVar24 = (bool)((bVar6 ^ 1U | bVar25) ^ 1 | local_5c);
  bVar26 = bVar20;
  if (bVar24) {
LAB_00410a0f:
    bVar24 = false;
    bVar20 = bVar26;
LAB_00410a11:
    bVar17 = (byte)uVar19;
    uVar16 = uVar15;
    bVar4 = bVar3;
    if ((param_7 == 0) || ((*(uint *)(param_7 + (uVar19 >> 5) * 4) >> (bVar17 & 0x1f) & 1) == 0))
    goto LAB_00410b08;
    bVar25 = param_5 == 2;
  }
  else {
LAB_00410b08:
    bVar25 = param_5 == 2;
    uVar15 = uVar16;
    bVar3 = bVar4;
    if (!bVar20) {
      uVar22 = uVar22 + 1;
      bVar3 = (bool)((bVar24 ^ 1U) & bVar4);
LAB_00410b24:
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
      goto LAB_00410a9d;
    }
  }
joined_r0x00410c07:
  if (local_5c) {
LAB_00410c18:
    bVar26 = (bool)(bVar6 & bVar25);
    goto LAB_00410c1c;
  }
LAB_00410a52:
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
LAB_00410a8b:
  if (uVar15 < uVar9) {
    param_1[uVar15] = 0x5c;
  }
  uVar15 = uVar15 + 1;
  uVar22 = uVar22 + 1;
  bVar4 = bVar3;
LAB_00410a9d:
  bVar3 = bVar4;
  if (uVar15 < uVar9) {
    param_1[uVar15] = bVar17;
  }
  uVar15 = uVar15 + 1;
  if (!bVar23) {
    bVar2 = false;
  }
  goto LAB_004108b8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00411a40(int param_1,undefined param_2,undefined param_3,undefined *param_4)

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
  puVar8 = (undefined *)PTR_DAT_00624618;
  if (DAT_00624630 <= param_1) {
    if (param_1 == 0x7fffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_00412bd0();
    }
    if (PTR_DAT_00624618 == &DAT_00624620) {
      puVar8 = (undefined *)FUN_004129e0(0);
      uVar6 = PTR_DAT_00624628._4_4_;
      uVar5 = PTR_DAT_00624628._0_4_;
      uVar3 = _UNK_00624624;
      PTR_DAT_00624618 = (undefined *)puVar8;
      *puVar8 = _DAT_00624620;
      puVar8[1] = uVar3;
      puVar8[2] = uVar5;
      puVar8[3] = uVar6;
    }
    else {
      puVar8 = (undefined *)FUN_004129e0(PTR_DAT_00624618);
      PTR_DAT_00624618 = (undefined *)puVar8;
    }
    memset(puVar8 + (long)DAT_00624630 * 4,0,(long)((param_1 + 1) - DAT_00624630) << 4);
    DAT_00624630 = param_1 + 1;
  }
  uVar2 = param_4[1];
  puVar10 = (ulong *)(puVar8 + (long)param_1 * 4);
  uVar4 = *puVar10;
  __ptr = (undefined *)puVar10[1];
  uVar9 = FUN_00410810(__ptr,uVar4,param_2,param_3,*param_4,uVar2 | 1,param_4 + 2,
                       *(undefined *)(param_4 + 10),*(undefined *)(param_4 + 0xc));
  if (uVar4 <= uVar9) {
    uVar9 = uVar9 + 1;
    *puVar10 = uVar9;
    if (__ptr != &DAT_006257e0) {
      free(__ptr);
    }
    __ptr = (undefined *)FUN_00412980(uVar9);
    uVar3 = *param_4;
    puVar10[1] = (ulong)__ptr;
    FUN_00410810(__ptr,uVar9,param_2,param_3,uVar3,uVar2 | 1,param_4 + 2,
                 *(undefined *)(param_4 + 10),*(undefined *)(param_4 + 0xc));
  }
  *piVar7 = iVar1;
  return __ptr;
}


void FUN_00411be0(undefined *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_006258e0;
  }
  FUN_00412b80(param_1,0x38);
  *piVar2 = iVar1;
  return;
}


undefined FUN_00411c20(undefined *param_1)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = (undefined *)&DAT_006258e0;
  }
  return *param_1;
}


void FUN_00411c30(undefined *param_1,undefined param_2)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = (undefined *)&DAT_006258e0;
  }
  *param_1 = param_2;
  return;
}


uint FUN_00411c40(undefined *param_1,byte param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_006258e0;
  }
  uVar1 = *(uint *)(param_1 + (ulong)(param_2 >> 5) * 4 + 8);
  uVar2 = uVar1 >> (param_2 & 0x1f);
  *(uint *)(param_1 + (ulong)(param_2 >> 5) * 4 + 8) =
       ((param_3 ^ uVar2) & 1) << (param_2 & 0x1f) ^ uVar1;
  return uVar2 & 1;
}


undefined FUN_00411c80(undefined *param_1,undefined param_2)

{
  undefined uVar1;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_006258e0;
  }
  uVar1 = *(undefined *)(param_1 + 4);
  *(undefined *)(param_1 + 4) = param_2;
  return uVar1;
}


void FUN_00411ca0(undefined *param_1,long param_2,long param_3)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = (undefined *)&DAT_006258e0;
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


void FUN_00411cd0(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                 undefined *param_5)

{
  int iVar1;
  int *piVar2;
  
  if (param_5 == (undefined *)0x0) {
    param_5 = (undefined *)&DAT_006258e0;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  FUN_00410810(param_1,param_2,param_3,param_4,*param_5,param_5[1],param_5 + 2,
               *(undefined *)(param_5 + 10),*(undefined *)(param_5 + 0xc));
  *piVar2 = iVar1;
  return;
}


undefined FUN_00411d50(undefined param_1,undefined param_2,long *param_3,undefined *param_4)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined uVar4;
  uint uVar5;
  
  if (param_4 == (undefined *)0x0) {
    param_4 = (undefined *)&DAT_006258e0;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  uVar5 = (uint)(param_3 == (long *)0x0) | param_4[1];
  lVar3 = FUN_00410810(0,0,param_1,param_2,*param_4,uVar5,param_4 + 2,*(undefined *)(param_4 + 10),
                       *(undefined *)(param_4 + 0xc));
  uVar4 = FUN_00412980(lVar3 + 1);
  FUN_00410810(uVar4,lVar3 + 1,param_1,param_2,*param_4,uVar5,param_4 + 2,
               *(undefined *)(param_4 + 10),*(undefined *)(param_4 + 0xc));
  *piVar2 = iVar1;
  if (param_3 != (long *)0x0) {
    *param_3 = lVar3;
  }
  return uVar4;
}


void FUN_00411e40(undefined param_1,undefined param_2,undefined param_3)

{
  FUN_00411d50(param_1,param_2,0,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00411e50(void)

{
  void **ppvVar1;
  void *__ptr;
  undefined *__ptr_00;
  void **ppvVar2;
  
  __ptr_00 = PTR_DAT_00624618;
  if (1 < DAT_00624630) {
    ppvVar2 = (void **)(PTR_DAT_00624618 + 0x18);
    ppvVar1 = (void **)(PTR_DAT_00624618 + (ulong)(DAT_00624630 - 2) * 0x10 + 0x28);
    do {
      __ptr = *ppvVar2;
      ppvVar2 = ppvVar2 + 2;
      free(__ptr);
    } while (ppvVar2 != ppvVar1);
  }
  if (*(undefined **)(__ptr_00 + 8) != &DAT_006257e0) {
    free(*(undefined **)(__ptr_00 + 8));
    _DAT_00624620 = 0x100;
    PTR_DAT_00624628 = &DAT_006257e0;
  }
  if (__ptr_00 != &DAT_00624620) {
    free(__ptr_00);
    PTR_DAT_00624618 = &DAT_00624620;
  }
  DAT_00624630 = 1;
  return;
}


void FUN_00411ef0(undefined param_1,undefined param_2)

{
  FUN_00411a40(param_1,param_2,0xffffffffffffffff,&DAT_006258e0);
  return;
}


void FUN_00411f10(void)

{
  FUN_00411a40();
  return;
}


void FUN_00411f20(undefined param_1)

{
  FUN_00411a40(0,param_1,0xffffffffffffffff,&DAT_006258e0);
  return;
}


void FUN_00411f40(undefined param_1,undefined param_2)

{
  FUN_00411a40(0,param_1,param_2,&DAT_006258e0);
  return;
}


void FUN_00411f60(undefined param_1,int param_2,undefined param_3)

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
    FUN_00411a40(param_1,param_3,0xffffffffffffffff,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00411fd0(undefined param_1,int param_2,undefined param_3,undefined param_4)

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
    FUN_00411a40(param_1,param_3,param_4,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00412040(undefined param_1,undefined param_2)

{
  FUN_00411f60(0,param_1,param_2);
  return;
}


void FUN_00412050(undefined param_1,undefined param_2,undefined param_3)

{
  FUN_00411fd0(0,param_1,param_2,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00412060(undefined param_1,undefined param_2,byte param_3)

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
  
  local_18 = DAT_00625910;
  local_48 = _DAT_006258e0;
  uStack_40 = uRam00000000006258e8;
  local_38 = _DAT_006258f0;
  uStack_30 = uRam00000000006258f8;
  puVar1 = (uint *)((long)&uStack_40 + (ulong)(param_3 >> 5) * 4);
  local_28 = _DAT_00625900;
  uStack_20 = uRam0000000000625908;
  uVar2 = *puVar1;
  *puVar1 = (~(uVar2 >> (param_3 & 0x1f)) & 1) << (param_3 & 0x1f) ^ uVar2;
  FUN_00411a40(0,param_1,param_2,&local_48);
  return;
}


void FUN_004120d0(undefined param_1,char param_2)

{
  FUN_00412060(param_1,0xffffffffffffffff,(int)param_2);
  return;
}


void FUN_004120e0(undefined param_1)

{
  FUN_00412060(param_1,0xffffffffffffffff,0x3a);
  return;
}


void FUN_00412100(undefined param_1,undefined param_2)

{
  FUN_00412060(param_1,param_2,0x3a);
  return;
}


void FUN_00412110(undefined param_1,int param_2,undefined param_3)

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
    FUN_00411a40(param_1,param_3,0xffffffffffffffff,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00412180(undefined param_1,long param_2,long param_3,undefined param_4,undefined param_5
                 )

{
  undefined local_48;
  undefined uStack_40;
  undefined local_38;
  undefined uStack_30;
  undefined local_28;
  long lStack_20;
  long local_18;
  
  uStack_40 = uRam00000000006258e8;
  local_38 = _DAT_006258f0;
  uStack_30 = uRam00000000006258f8;
  local_28 = _DAT_00625900;
  lStack_20 = uRam0000000000625908;
  local_18 = DAT_00625910;
  local_48 = CONCAT44((int)((ulong)_DAT_006258e0 >> 0x20),10);
  if ((param_2 != 0) && (param_3 != 0)) {
    lStack_20 = param_2;
    local_18 = param_3;
    FUN_00411a40(param_1,param_4,param_5,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_004121f0(void)

{
  FUN_00412180();
  return;
}


void FUN_00412200(undefined param_1,undefined param_2,undefined param_3)

{
  FUN_00412180(0,param_1,param_2,param_3,0xffffffffffffffff);
  return;
}


void FUN_00412220(undefined param_1,undefined param_2,undefined param_3,undefined param_4)

{
  FUN_00412180(0,param_1,param_2,param_3,param_4);
  return;
}


void FUN_00412240(void)

{
  FUN_00411a40();
  return;
}


void FUN_00412250(undefined param_1,undefined param_2)

{
  FUN_00411a40(0,param_1,param_2,&DAT_006245e0);
  return;
}


void FUN_00412270(undefined param_1,undefined param_2)

{
  FUN_00411a40(param_1,param_2,0xffffffffffffffff,&DAT_006245e0);
  return;
}


void FUN_00412290(undefined param_1)

{
  FUN_00411a40(0,param_1,0xffffffffffffffff,&DAT_006245e0);
  return;
}


bool FUN_004122b0(undefined param_1,undefined param_2)

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
  __s1 = (void *)FUN_0040b870();
  __s2 = (void *)FUN_0040b870(param_2);
  __n = FUN_0040b8d0(__s1);
  sVar2 = FUN_0040b8d0(__s2);
  if ((__n == sVar2) && (iVar1 = memcmp(__s1,__s2,__n), iVar1 == 0)) {
    __filename = (char *)FUN_00417940(param_1);
    __filename_00 = (char *)FUN_00417940(param_2);
    iVar1 = __xstat(1,__filename,&local_158);
    if (iVar1 != 0) {
      piVar3 = __errno_location();
      error(1,*piVar3,&DAT_0041d784,__filename);
    }
    iVar1 = __xstat(1,__filename_00,&local_c8);
    if (iVar1 != 0) {
      piVar3 = __errno_location();
      error(1,*piVar3,&DAT_0041d784,__filename_00);
    }
    bVar4 = local_158.st_ino == local_c8.st_ino && local_158.st_dev == local_c8.st_dev;
    free(__filename);
    free(__filename_00);
  }
  return bVar4;
}


undefined
FUN_004123e0(FILE *param_1,long param_2,undefined param_3,undefined param_4,undefined *param_5,
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
  uVar1 = dcgettext(0,&DAT_0041ea6b,5);
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
    goto LAB_0041265c;
  case 5:
    uVar1 = param_5[3];
    uVar4 = param_5[2];
    uVar5 = param_5[1];
    uVar6 = *param_5;
    uVar7 = dcgettext(0,"Written by %s, %s, %s,\n%s, and %s.\n",5);
LAB_0041265c:
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
    goto LAB_004126f9;
  case 7:
    uVar1 = param_5[2];
    uVar4 = param_5[5];
    uVar5 = param_5[4];
    uVar6 = param_5[3];
    local_58 = param_5[1];
    uVar7 = *param_5;
    uVar3 = dcgettext(0,"Written by %s, %s, %s,\n%s, %s, %s, and %s.\n",5);
LAB_004126f9:
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
    goto LAB_004124da;
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
LAB_004124da:
  uVar1 = __fprintf_chk(param_1,1,uVar3,uVar7,local_50,local_58,uVar6,uVar5,uVar4,uVar1,local_48);
  return uVar1;
}


void FUN_004127c0(void)

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
  FUN_004123e0();
  return;
}


void FUN_004127e0(void)

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
  FUN_004123e0();
  return;
}


void FUN_00412840(void)

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
  FUN_004123e0();
  return;
}


void FUN_00412900(void)

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


void FUN_00412980(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00412bd0();
  }
  return;
}


void FUN_004129a0(ulong param_1,ulong param_2)

{
  if ((-1 < SUB168(ZEXT816(param_1) * ZEXT816(param_2),0)) &&
     (SUB168(ZEXT816(param_1) * ZEXT816(param_2) >> 0x40,0) == 0)) {
    FUN_00412980();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00412bd0();
}


void thunk_FUN_00412980(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00412bd0();
  }
  return;
}


void * FUN_004129e0(void *param_1,size_t param_2)

{
  void *pvVar1;
  
  if ((param_2 == 0) && (param_1 != (void *)0x0)) {
    free(param_1);
    return (void *)0x0;
  }
  pvVar1 = realloc(param_1,param_2);
  if ((pvVar1 == (void *)0x0) && (param_2 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00412bd0();
  }
  return pvVar1;
}


void FUN_00412a20(undefined param_1,ulong param_2,ulong param_3)

{
  if ((-1 < SUB168(ZEXT816(param_2) * ZEXT816(param_3),0)) &&
     (SUB168(ZEXT816(param_2) * ZEXT816(param_3) >> 0x40,0) == 0)) {
    FUN_004129e0();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00412bd0();
}


void FUN_00412a50(long param_1,ulong *param_2,ulong param_3)

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
    if ((SUB168(ZEXT816(uVar2) * ZEXT816(param_3),0) < 0) || (uVar3 != 0)) goto LAB_00412aab;
  }
  else {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x5555555555555554);
    uVar3 = SUB168(auVar1 % ZEXT816(param_3),0);
    if (SUB168(auVar1 / ZEXT816(param_3),0) <= uVar2) {
LAB_00412aab:
                    /* WARNING: Subroutine does not return */
      FUN_00412bd0(param_1,param_2,uVar3);
    }
    uVar2 = (uVar2 >> 1) + 1 + uVar2;
  }
  *param_2 = uVar2;
  FUN_004129e0(param_1,uVar2 * param_3);
  return;
}


void FUN_00412ae0(long param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (param_1 == 0) {
    if (uVar1 == 0) {
      *param_2 = 0x80;
      FUN_004129e0(0,0x80);
      return;
    }
    if ((long)uVar1 < 0) goto LAB_00412b2a;
  }
  else {
    if (0x5555555555555553 < uVar1) {
LAB_00412b2a:
                    /* WARNING: Subroutine does not return */
      FUN_00412bd0();
    }
    uVar1 = (uVar1 >> 1) + 1 + uVar1;
  }
  *param_2 = uVar1;
  FUN_004129e0(param_1,uVar1);
  return;
}


void FUN_00412b30(size_t param_1)

{
  void *__s;
  
  __s = (void *)FUN_00412980();
  memset(__s,0,param_1);
  return;
}


void FUN_00412b50(size_t param_1,ulong param_2)

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
  FUN_00412bd0();
}


void FUN_00412b80(void *param_1,size_t param_2)

{
  void *__dest;
  
  __dest = (void *)FUN_00412980(param_2);
  memcpy(__dest,param_1,param_2);
  return;
}


void FUN_00412bb0(char *param_1)

{
  void *__dest;
  size_t sVar1;
  
  sVar1 = strlen(param_1);
  __dest = (void *)FUN_00412980(sVar1 + 1);
  memcpy(__dest,param_1,sVar1 + 1);
  return;
}


void FUN_00412bd0(void)

{
  undefined uVar1;
  
  uVar1 = dcgettext(0,"memory exhausted",5);
  error(DAT_006245c0,0,&DAT_0041d784,uVar1);
                    /* WARNING: Subroutine does not return */
  abort();
}


ulong FUN_00412c10(undefined param_1,undefined param_2,ulong param_3,ulong param_4,
                  undefined param_5,undefined param_6,int param_7)

{
  ulong uVar1;
  int iVar2;
  int *piVar3;
  undefined uVar4;
  ulong local_40 [2];
  
  iVar2 = FUN_004132b0(param_1,0,param_2,local_40);
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
  uVar4 = FUN_00412290(param_1);
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


void FUN_00412ce0(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                 undefined param_5,undefined param_6)

{
  FUN_00412c10(param_1,10,param_2,param_3,param_4,param_5,param_6);
  return;
}


long FUN_00412d10(void)

{
  long lVar1;
  int *piVar2;
  
  lVar1 = FUN_00415be0(0,0);
  if (lVar1 == 0) {
    piVar2 = __errno_location();
    if (*piVar2 == 0xc) {
                    /* WARNING: Subroutine does not return */
      FUN_00412bd0();
    }
  }
  return lVar1;
}


char * FUN_00412d40(void)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  uint *puVar4;
  char *__name;
  long local_30 [2];
  
  __name = (char *)0x0;
  local_30[0] = 0x22;
  puVar4 = (uint *)__errno_location();
  do {
    while( true ) {
      __name = (char *)FUN_00412ae0(__name,local_30);
      lVar2 = local_30[0] + -2;
      __name[lVar2] = '\0';
      *puVar4 = 0;
      iVar3 = gethostname(__name,local_30[0] - 1);
      if (iVar3 != 0) break;
      if (__name[lVar2] == '\0') {
        return __name;
      }
    }
    uVar1 = *puVar4;
  } while ((uVar1 < 0x25) && ((0x1000401001U >> ((ulong)uVar1 & 0x3f) & 1) != 0));
  free(__name);
  *puVar4 = uVar1;
  return (char *)0x0;
}


ulong FUN_00412df0(byte *param_1,byte **param_2,uint param_3,ulong *param_4,char *param_5)

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
    __assert_fail("0 <= strtol_base && strtol_base <= 36","lib/xstrtol.c",0x60,"xstrtoul");
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
  uVar6 = strtoul((char *)param_1,(char **)param_2,param_3);
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
    if ((param_5 == (char *)0x0) || (bVar12 = *pbVar5, bVar12 == 0)) goto LAB_00412e90;
    pcVar7 = strchr(param_5,(int)(char)bVar12);
    if (pcVar7 == (char *)0x0) goto switchD_00412f6c_caseD_1;
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
        goto LAB_00412f5a;
      }
      if (bVar1 != 0x42) {
                    /* WARNING: Could not recover jumptable at 0x00412f49. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar6 = (*(code *)(&PTR_LAB_0041ee38)[bVar8])();
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
LAB_00412f5a:
  iVar10 = (int)uVar11;
  switch(bVar12 - 0x42 & 0xff) {
  case 0:
    if (uVar6 >> 0x36 == 0) {
      uVar6 = uVar6 << 10;
      break;
    }
    goto LAB_00412fc7;
  default:
switchD_00412f6c_caseD_1:
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
    goto LAB_00413054;
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
    goto joined_r0x00412f8c;
  case 0xb:
  case 0x2b:
    auVar2 = ZEXT816(uVar6) * ZEXT816((ulong)(long)iVar10);
    if (SUB168(auVar2 >> 0x40,0) != 0) goto LAB_00412fc7;
    auVar2 = (auVar2 & (undefined)0xffffffffffffffff) * ZEXT816((ulong)(long)iVar10);
joined_r0x00412f8c:
    uVar6 = SUB168(auVar2,0);
    if (SUB168(auVar2 >> 0x40,0) != 0) {
LAB_00412fc7:
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
    goto LAB_00413054;
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
    goto LAB_00413054;
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
    goto LAB_00413054;
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
LAB_00413054:
    uVar14 = (ulong)(uVar13 | uVar9);
    break;
  case 0x20:
    if (uVar6 >> 0x37 != 0) goto LAB_00412fc7;
    uVar6 = uVar6 << 9;
    break;
  case 0x21:
    break;
  case 0x35:
    if ((long)uVar6 < 0) goto LAB_00412fc7;
    uVar6 = uVar6 * 2;
  }
  *param_2 = pbVar5 + iVar15;
  if (pbVar5[iVar15] != 0) {
    uVar14 = (ulong)((uint)uVar14 | 2);
  }
LAB_00412e90:
  *param_4 = uVar6;
  return uVar14;
}


void FUN_00413220(int param_1,int param_2,undefined param_3,long param_4,undefined param_5)

{
  undefined uVar1;
  undefined uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined local_2a;
  undefined local_29;
  
  uVar1 = DAT_006245c0;
  if (param_1 - 1U < 4) {
    if (param_2 < 0) {
      puVar4 = &local_2a;
      puVar3 = &DAT_0041f171 + -(long)param_2;
      local_29 = 0;
      local_2a = param_3;
    }
    else {
      puVar3 = &DAT_0041f171;
      puVar4 = *(undefined **)(param_4 + (long)param_2 * 0x20);
    }
    uVar2 = dcgettext(0,(&PTR_s__s_s_argument___s__too_large_0041f1e0)[param_1 - 1U],5);
    error(uVar1,0,uVar2,puVar3,puVar4,param_5);
                    /* WARNING: Subroutine does not return */
    abort();
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


ulong FUN_004132b0(byte *param_1,byte **param_2,uint param_3,ulong *param_4,char *param_5)

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
    if ((param_5 == (char *)0x0) || (bVar12 = *pbVar5, bVar12 == 0)) goto LAB_00413352;
    pcVar7 = strchr(param_5,(int)(char)bVar12);
    if (pcVar7 == (char *)0x0) goto switchD_0041343c_caseD_1;
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
        goto LAB_0041342a;
      }
      if (bVar1 != 0x42) {
                    /* WARNING: Could not recover jumptable at 0x00413411. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar6 = (*(code *)(&PTR_LAB_0041f200)[bVar8])();
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
LAB_0041342a:
  iVar10 = (int)uVar11;
  switch(bVar12 - 0x42 & 0xff) {
  case 0:
    if (uVar6 >> 0x36 == 0) {
      uVar6 = uVar6 << 10;
      break;
    }
    goto LAB_00413497;
  default:
switchD_0041343c_caseD_1:
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
    goto LAB_00413524;
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
    goto joined_r0x0041345c;
  case 0xb:
  case 0x2b:
    auVar2 = ZEXT816(uVar6) * ZEXT816((ulong)(long)iVar10);
    if (SUB168(auVar2 >> 0x40,0) != 0) goto LAB_00413497;
    auVar2 = (auVar2 & (undefined)0xffffffffffffffff) * ZEXT816((ulong)(long)iVar10);
joined_r0x0041345c:
    uVar6 = SUB168(auVar2,0);
    if (SUB168(auVar2 >> 0x40,0) != 0) {
LAB_00413497:
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
    goto LAB_00413524;
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
    goto LAB_00413524;
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
    goto LAB_00413524;
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
LAB_00413524:
    uVar14 = (ulong)(uVar13 | uVar9);
    break;
  case 0x20:
    if (uVar6 >> 0x37 != 0) goto LAB_00413497;
    uVar6 = uVar6 << 9;
    break;
  case 0x21:
    break;
  case 0x35:
    if ((long)uVar6 < 0) goto LAB_00413497;
    uVar6 = uVar6 * 2;
  }
  *param_2 = pbVar5 + iVar15;
  if (pbVar5[iVar15] != 0) {
    uVar14 = (ulong)((uint)uVar14 | 2);
  }
LAB_00413352:
  *param_4 = uVar6;
  return uVar14;
}


int * FUN_004136f0(int *param_1)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  
  piVar1 = param_1;
LAB_00413700:
  do {
    iVar3 = piVar1[1];
    while( true ) {
      if (iVar3 == 0) {
        return param_1;
      }
      if (iVar3 == 0x5b) break;
      if (iVar3 - 0x21U < 0x20) {
        if (((0xc0000601UL >> ((ulong)(iVar3 - 0x21U) & 0x3f) & 1) != 0) && (piVar1[2] == 0x28)) {
          piVar1 = (int *)FUN_004136f0(piVar1 + 2);
          goto LAB_00413700;
        }
        if (iVar3 == 0x29) {
          return piVar1 + 2;
        }
      }
      iVar3 = piVar1[2];
      piVar1 = piVar1 + 1;
    }
    if (DAT_00625918 == 0) {
      pcVar2 = getenv("POSIXLY_CORRECT");
      DAT_00625918 = -(uint)(pcVar2 == (char *)0x0) | 1;
    }
    iVar3 = piVar1[2];
    if ((iVar3 == 0x21) || (((int)DAT_00625918 < 0 && (iVar3 == 0x5e)))) {
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


char * FUN_004137f0(char *param_1)

{
  byte bVar1;
  char *pcVar2;
  char *pcVar3;
  char cVar4;
  
  pcVar2 = param_1;
LAB_00413800:
  do {
    bVar1 = pcVar2[1];
    while( true ) {
      if (bVar1 == 0) {
        return param_1;
      }
      if (bVar1 == 0x5b) break;
      if ((byte)(bVar1 - 0x21) < 0x20) {
        if (((0xc0000601UL >> ((ulong)(bVar1 - 0x21) & 0x3f) & 1) != 0) && (pcVar2[2] == '(')) {
          pcVar2 = (char *)FUN_004137f0(pcVar2 + 2);
          goto LAB_00413800;
        }
        if (bVar1 == 0x29) {
          return pcVar2 + 2;
        }
      }
      bVar1 = pcVar2[2];
      pcVar2 = pcVar2 + 1;
    }
    if (DAT_00625918 == 0) {
      pcVar3 = getenv("POSIXLY_CORRECT");
      DAT_00625918 = -(uint)(pcVar3 == (char *)0x0) | 1;
    }
    cVar4 = pcVar2[2];
    if ((cVar4 == '!') || (((int)DAT_00625918 < 0 && (cVar4 == '^')))) {
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
FUN_004138f0(uint param_1,wchar_t *param_2,ulong param_3,ulong param_4,byte param_5,uint param_6)

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
        if (DAT_00625918 == 0) {
          local_80 = pwVar8;
          *(undefined *)(puVar14 + -8) = 0x413afe;
          pcVar5 = getenv("POSIXLY_CORRECT");
          DAT_00625918 = -(uint)(pcVar5 == (char *)0x0) | 1;
          pwVar8 = local_80;
        }
        wVar2 = __src[1];
        if ((wVar2 == L'!') || (((int)DAT_00625918 < 0 && (wVar2 == L'^')))) {
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
            if (wVar2 != L')') goto LAB_00413966;
            if (lVar15 != 0) {
              wVar2 = __src[1];
              lVar15 = lVar15 + -1;
              __src = __src + 1;
              goto joined_r0x004139ab;
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
            *(undefined *)(puVar14 + lVar15 + -8) = 0x413b98;
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
              *(undefined *)(puVar14 + lVar15 + -8) = 0x413e73;
              __assert_fail("list != NULL","lib/fnmatch_loop.c",0x454,"ext_wmatch");
            }
            if (__src[-1] != L')') {
                    /* WARNING: Subroutine does not return */
              *(undefined *)(puVar14 + lVar15 + -8) = 0x413e5a;
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
              goto LAB_00413d20;
            default:
                    /* WARNING: Subroutine does not return */
              *(undefined *)(puVar14 + lVar15 + -8) = 0x413e41;
              __assert_fail("! \"Invalid extended matching operator\"","lib/fnmatch_loop.c",0x4ad,
                            "ext_wmatch");
            case 0x2a:
              *(undefined *)(puVar14 + lVar15 + -8) = 0x413bf3;
              iVar3 = FUN_00413e80(__src,uVar6,uVar18,param_5,uVar12);
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
                    *(undefined *)(puVar14 + lVar15 + -8) = 0x413cbd;
                    iVar3 = FUN_00413e80(pplVar17 + 1,uVar6,uVar19,uVar10,uVar12);
                    pwVar8 = local_78;
                    if (iVar3 == 0) {
                      if (uVar6 == uVar19) {
                        uVar10 = (ulong)local_50 & 0xffffffff;
                        *(undefined *)(puVar14 + lVar15 + -8) = 0x413cdf;
                        iVar3 = FUN_00413e80(pwVar8,uVar6,uVar18,uVar10,uVar12);
                        pplVar17 = local_40[0];
                      }
                      else {
                        bVar20 = false;
                        if (*(int *)(uVar19 - 4) == 0x2f) {
                          bVar20 = (local_64 & 5) == 5;
                        }
                        *(undefined *)(puVar14 + lVar15 + -8) = 0x413c66;
                        iVar3 = FUN_00413e80(pwVar8,uVar19,uVar18,bVar20,uVar12);
                        pwVar8 = local_80;
                        if (iVar3 == 0) {
                          return 0;
                        }
                        bVar20 = false;
                        if (*(int *)(uVar19 - 4) == 0x2f) {
                          bVar20 = (local_64 & 5) == 5;
                        }
                        *(undefined *)(puVar14 + lVar15 + -8) = 0x413c93;
                        iVar3 = FUN_00413e80(pwVar8,uVar19,uVar18,bVar20,uVar12);
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
              *(undefined *)(puVar14 + lVar15 + -8) = 0x413dfc;
              iVar3 = FUN_00413e80(__src,uVar6,uVar18,param_5,uVar12);
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
              *(undefined *)(puVar14 + lVar15 + -8) = 0x413dc1;
              pwVar8 = wcscat((wchar_t *)(pplVar17 + 1),__src);
              uVar18 = local_60;
              *(undefined *)(puVar14 + lVar15 + -8) = 0x413dd6;
              iVar3 = FUN_00413e80(pwVar8,uVar6,uVar18,param_5,uVar12);
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
          *(undefined *)(puVar14 + lVar1 + -8) = 0x413ac4;
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
LAB_00413966:
          wVar2 = __src[1];
          __src = __src + 1;
        }
      }
INVALID_JUMP; //joined_r0x004139ab:
    } while (wVar2 != L'\0');
  }
  return 0xffffffff;
LAB_00413d20:
  *(undefined *)(puVar14 + lVar15 + -8) = 0x413d35;
  iVar3 = FUN_00413e80(pplVar17 + 1,uVar6,uVar18,param_5,uVar12);
  pwVar8 = local_58;
  uVar19 = local_60;
  if (iVar3 != 0) {
    pplVar17 = (long **)*pplVar17;
    if (pplVar17 != (long **)0x0) goto LAB_00413d20;
    bVar9 = param_5;
    if ((uVar6 != uVar18) && (bVar9 = 0, *(int *)(uVar18 - 4) == 0x2f)) {
      bVar9 = (local_64 & 5) == 5;
    }
    *(undefined *)(puVar14 + lVar15 + -8) = 0x413d75;
    iVar3 = FUN_00413e80(pwVar8,uVar18,uVar19,bVar9,uVar12);
    if (iVar3 == 0) {
      return 0;
    }
  }
  uVar18 = uVar18 + 4;
  pplVar17 = local_50;
  if (local_60 < uVar18) {
    return 1;
  }
  goto LAB_00413d20;
}


/* WARNING: Type propagation algorithm not settling */

ulong FUN_00413e80(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,byte param_4,uint param_5)

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
LAB_0041411c:
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
LAB_00413ed5:
  if (uVar14 != 0) {
    wVar3 = towlower(wVar3);
  }
  switch(wVar3) {
  case L'!':
  case L'+':
  case L'@':
    if ((((param_5 & 0x20) != 0) && (param_1[1] == L'(')) &&
       (uVar8 = FUN_004138f0(wVar3,local_580,param_2,param_3,param_4,param_5), (int)uVar8 != -1)) {
      return uVar8;
    }
  default:
switchD_00413efd_caseD_22:
    if (param_3 == param_2) {
      return 1;
    }
LAB_004140e2:
    wVar5 = *param_2;
    if (uVar14 != 0) {
      wVar5 = towlower(wVar5);
    }
    if (wVar5 != wVar3) {
      return 1;
    }
LAB_004140f5:
    param_4 = false;
    break;
  case L'*':
    uVar6 = param_5 & 0x20;
    if (((uVar6 != 0) && (param_1[1] == L'(')) &&
       (uVar8 = FUN_004138f0(0x2a,local_580,param_2,param_3,param_4,param_5), (int)uVar8 != -1)) {
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
            (pwVar9 = (wchar_t *)FUN_004136f0(param_1), pwVar9 == param_1)) &&
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
        iVar7 = FUN_00413e80(param_1 + -1,param_2,param_3,param_4,uVar14);
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
        iVar7 = FUN_00413e80(param_1,param_2 + 1,param_3,param_5 >> 2 & 1);
        return (ulong)(iVar7 != 0);
      }
    }
    else {
      local_570 = param_5;
      if (uVar1 != 0) goto LAB_00414298;
    }
    local_570 = param_5 & 0xfffffffb;
LAB_00414298:
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
         (iVar7 = FUN_00413e80(param_1 + -1,param_2,param_3,param_4,local_570), iVar7 == 0)) break;
      param_2 = param_2 + 1;
      param_4 = 0;
    }
    return 0;
  case L'/':
    if ((param_5 & 5) != 5) goto switchD_00413efd_caseD_22;
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
       (uVar8 = FUN_004138f0(0x3f,local_580,param_2,param_3,param_4,param_5), (int)uVar8 != -1)) {
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
    goto LAB_004140f5;
  case L'[':
    if (DAT_00625918 == 0) {
      pcVar10 = getenv("POSIXLY_CORRECT");
      DAT_00625918 = -(uint)(pcVar10 == (char *)0x0) | 1;
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
    if ((param_1[1] == L'!') || (((int)DAT_00625918 < 0 && (param_1[1] == L'^')))) {
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
LAB_00414007:
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
        goto LAB_00414036;
      }
      if (wVar4 == L'[') {
        wVar18 = *pwVar9;
        if (wVar18 != L':') goto LAB_0041402a;
        lVar13 = 0;
        pwVar11 = pwVar9;
        while( true ) {
          wVar4 = pwVar11[1];
          if (wVar4 == L':') break;
          if (0x18 < (uint)(wVar4 + L'\xffffff9f')) goto LAB_004143d3;
          lVar13 = lVar13 + 1;
          awStack_44c[lVar13] = wVar4;
          pwVar11 = pwVar11 + 1;
          if (lVar13 == 0x100) {
            return 1;
          }
        }
        if (pwVar11[2] != L']') {
LAB_004143d3:
          pwVar11 = pwVar9 + 1;
          pwVar15 = pwVar9;
          pwVar9 = pwVar11;
          if (wVar5 == L'[') {
LAB_00414640:
            wVar18 = *pwVar15;
            goto LAB_00414663;
          }
          wVar4 = L':';
          goto LAB_00414007;
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
          goto LAB_00414663;
        }
        pwVar9 = pwVar11 + 4;
        wVar4 = pwVar11[3];
      }
      else {
        if (wVar4 == L'\0') goto LAB_004140e2;
        wVar18 = *pwVar9;
LAB_0041402a:
        while( true ) {
          pwVar15 = pwVar9;
          if (uVar14 != 0) {
            wVar4 = towlower(wVar4);
          }
LAB_00414036:
          pwVar9 = pwVar15 + 1;
          if (wVar18 != L'-') {
            bVar19 = wVar4 != wVar5;
            wVar4 = wVar18;
            if (bVar19) goto LAB_00413ffe;
            goto LAB_00414640;
          }
          wVar12 = pwVar15[1];
          if ((wVar12 != L']') && (wVar12 != L'\0')) break;
          if (wVar4 == wVar5) goto LAB_00414663;
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
          goto LAB_00414663;
        }
      }
INVALID_JUMP; //LAB_00413ffe:
    } while (wVar4 != L']');
    local_580 = pwVar9;
    if (!bVar2) {
      return 1;
    }
    goto LAB_00414354;
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
        goto LAB_00414344;
      }
      wVar3 = towlower(wVar3);
      if (param_3 == param_2) {
        return 1;
      }
LAB_00413f46:
      wVar5 = towlower(*param_2);
    }
    else {
      if (param_3 == param_2) {
        return 1;
      }
      if (uVar14 != 0) goto LAB_00413f46;
LAB_00414344:
      wVar5 = *param_2;
    }
    if (wVar5 != wVar3) {
      return 1;
    }
LAB_00414354:
    param_4 = false;
  }
  goto LAB_004140fd;
LAB_00414663:
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
            goto LAB_0041465f;
          }
          pwVar11 = pwVar11 + 1;
          wVar18 = *pwVar11;
          if (pwVar15 + 0x101 == pwVar11) {
            return 1;
          }
        }
        pwVar15 = pwVar9;
        if (pwVar11[1] != L']') goto LAB_0041465f;
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
        if (wVar18 != L'.') goto LAB_0041465f;
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
    if (wVar18 == L']') goto LAB_004148dd;
    wVar18 = *local_580;
    pwVar15 = local_580;
  }
LAB_0041465f:
  pwVar9 = pwVar15 + 1;
  goto LAB_00414663;
LAB_004148dd:
  if (bVar2) {
    return 1;
  }
LAB_004140fd:
  wVar3 = *local_580;
  param_2 = param_2 + 1;
  param_1 = local_580;
  local_580 = local_580 + 1;
  if (wVar3 == L'\0') goto LAB_0041411c;
  goto LAB_00413ed5;
}


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Could not reconcile some variable overlaps */

undefined
FUN_00414960(uint param_1,char *param_2,ulong param_3,ulong param_4,byte param_5,uint param_6)

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
        if (DAT_00625918 == 0) {
          local_88 = pcVar7;
          *(undefined *)((long)ppcVar15 + -8) = 0x414b4e;
          pcVar7 = getenv("POSIXLY_CORRECT");
          DAT_00625918 = -(uint)(pcVar7 == (char *)0x0) | 1;
          pcVar7 = local_88;
        }
        cVar4 = pcVar17[1];
        if ((cVar4 == '!') || (((int)DAT_00625918 < 0 && (cVar4 == '^')))) {
          pcVar12 = pcVar17 + 2;
          cVar4 = pcVar17[2];
        }
        else {
          pcVar12 = pcVar17 + 1;
        }
        if (cVar4 != ']') goto LAB_00414aab;
        cVar4 = pcVar12[1];
        pcVar17 = pcVar12 + 1;
        pcVar12 = pcVar12 + 2;
        while (cVar4 != ']') {
          if (cVar4 == '\0') {
            return 0xffffffff;
          }
          cVar4 = *pcVar12;
LAB_00414aab:
          pcVar17 = pcVar12;
          pcVar12 = pcVar12 + 1;
        }
        uVar5 = (uint)(byte)pcVar17[1];
      }
      else {
        while( true ) {
          if (0x1f < (byte)(uVar5 - 0x21)) break;
          if (((0xc0000601UL >> ((ulong)(uVar5 - 0x21) & 0x3f) & 1) == 0) || (pcVar17[1] != '(')) {
            if ((char)uVar5 != ')') goto LAB_004149e5;
            if (lVar18 != 0) {
              bVar3 = pcVar17[1];
              uVar5 = (uint)bVar3;
              lVar18 = lVar18 + -1;
              pcVar17 = pcVar17 + 1;
              goto joined_r0x00414a2a;
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
            *(undefined *)((long)ppcVar15 + lVar18 + -8) = 0x414bbe;
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
              *(undefined *)((long)ppcVar15 + lVar18 + -8) = 0x414ea3;
              __assert_fail("list != NULL","lib/fnmatch_loop.c",0x454,"ext_match");
            }
            if (pcVar17[-1] != ')') {
                    /* WARNING: Subroutine does not return */
              *(undefined *)((long)ppcVar15 + lVar18 + -8) = 0x414e8a;
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
              goto LAB_00414d48;
            default:
                    /* WARNING: Subroutine does not return */
              *(undefined *)((long)ppcVar15 + lVar18 + -8) = 0x414e71;
              __assert_fail("! \"Invalid extended matching operator\"","lib/fnmatch_loop.c",0x4ad,
                            "ext_match");
            case 0x2a:
              *(undefined *)((long)ppcVar15 + lVar18 + -8) = 0x414c1a;
              iVar6 = FUN_00414eb0(pcVar17,uVar2,uVar9,param_5,uVar5);
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
                    *(undefined *)((long)ppcVar15 + lVar18 + -8) = 0x414ce8;
                    iVar6 = FUN_00414eb0(pplVar10 + 1,uVar2,uVar16,uVar13,uVar5);
                    pcVar7 = local_60;
                    if (iVar6 == 0) {
                      if (uVar2 == uVar16) {
                        uVar13 = (ulong)local_50 & 0xffffffff;
                        *(undefined *)((long)ppcVar15 + lVar18 + -8) = 0x414d0a;
                        iVar6 = FUN_00414eb0(pcVar7,uVar2,uVar9,uVar13,uVar5);
                        pplVar10 = local_40[0];
                      }
                      else {
                        bVar20 = false;
                        if (*(char *)(uVar16 - 1) == '/') {
                          bVar20 = (local_74 & 5) == 5;
                        }
                        *(undefined *)((long)ppcVar15 + lVar18 + -8) = 0x414c91;
                        iVar6 = FUN_00414eb0(pcVar7,uVar16,uVar9,bVar20,uVar5);
                        pcVar7 = local_80;
                        if (iVar6 == 0) {
                          return 0;
                        }
                        bVar20 = false;
                        if (*(char *)(uVar16 - 1) == '/') {
                          bVar20 = (local_74 & 5) == 5;
                        }
                        *(undefined *)((long)ppcVar15 + lVar18 + -8) = 0x414cbe;
                        iVar6 = FUN_00414eb0(pcVar7,uVar16,uVar9,bVar20,uVar5);
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
              *(undefined *)((long)ppcVar15 + lVar18 + -8) = 0x414e27;
              iVar6 = FUN_00414eb0(pcVar17,uVar2,uVar9,param_5,uVar5);
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
              *(undefined *)((long)ppcVar15 + lVar18 + -8) = 0x414dec;
              pcVar7 = strcat((char *)(pplVar10 + 1),pcVar17);
              uVar2 = local_68;
              *(undefined *)((long)ppcVar15 + lVar18 + -8) = 0x414e01;
              iVar6 = FUN_00414eb0(pcVar7,uVar2,uVar9,param_5,uVar5);
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
          *(undefined *)((long)ppcVar15 + lVar1 + -8) = 0x414b19;
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
LAB_004149e5:
          uVar5 = (uint)(byte)pcVar17[1];
          pcVar12 = pcVar17 + 1;
        }
      }
      bVar3 = (byte)uVar5;
      pcVar17 = pcVar12;
INVALID_JUMP; //joined_r0x00414a2a:
    } while (bVar3 != 0);
  }
  return 0xffffffff;
LAB_00414d48:
  *(undefined *)((long)ppcVar15 + lVar18 + -8) = 0x414d5d;
  iVar6 = FUN_00414eb0(pplVar10 + 1,uVar2,uVar9,param_5,uVar5);
  pcVar7 = local_50;
  uVar16 = local_70;
  if (iVar6 != 0) {
    pplVar10 = (long **)*pplVar10;
    if (pplVar10 != (long **)0x0) goto LAB_00414d48;
    bVar3 = param_5;
    if ((uVar2 != uVar9) && (bVar3 = 0, *(char *)(uVar9 - 1) == '/')) {
      bVar3 = (local_74 & 5) == 5;
    }
    *(undefined *)((long)ppcVar15 + lVar18 + -8) = 0x414d9c;
    iVar6 = FUN_00414eb0(pcVar7,uVar9,uVar16,bVar3,uVar5);
    if (iVar6 == 0) {
      return 0;
    }
  }
  uVar9 = uVar9 + 1;
  pplVar10 = local_58;
  if (local_70 < uVar9) {
    return 1;
  }
  goto LAB_00414d48;
}


/* WARNING: Type propagation algorithm not settling */

ulong FUN_00414eb0(byte *param_1,byte *param_2,byte *param_3,byte param_4,uint param_5)

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
           (uVar22 = FUN_00414960(uVar22,local_168,param_2,param_3,param_4,param_5),
           (int)uVar22 != -1)) {
          return uVar22;
        }
      default:
switchD_00414f20_caseD_1:
        if (param_2 == param_3) {
          return 1;
        }
LAB_0041516a:
        bVar10 = *param_2;
        uVar18 = (uint)bVar10;
        if (uVar15 != 0) {
          pp_Var6 = __ctype_tolower_loc();
          uVar18 = (*pp_Var6)[bVar10];
        }
        if (uVar18 != uVar4) {
          return 1;
        }
LAB_00415186:
        param_4 = false;
        break;
      case 9:
        uVar4 = param_5 & 0x20;
        if (((uVar4 != 0) && (param_1[1] == 0x28)) &&
           (uVar22 = FUN_00414960(0x2a,local_168,param_2,param_3,param_4,param_5), (int)uVar22 != -1
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
                (pbVar19 = (byte *)FUN_004137f0(param_1), pbVar19 == param_1)) &&
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
          lVar9 = FUN_00416f00(param_2,0x2f,(long)param_3 - (long)param_2);
          return (ulong)(lVar9 != 0);
        }
        uVar18 = (uint)bVar10;
        uVar2 = param_5 & 1;
        pbVar19 = (byte *)FUN_00416f00(param_2,-(param_5 & 1) & 0x2f,(long)param_3 - (long)param_2);
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
            iVar5 = FUN_00414eb0(param_1 + -1,param_2,param_3,param_4,uVar15);
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
                iVar5 = FUN_00414eb0(param_1,param_2 + 1,param_3,param_5 >> 2 & 1);
                return (ulong)(iVar5 != 0);
              }
              param_2 = param_2 + 1;
            } while (param_3 != param_2);
            return 1;
          }
        }
        else {
          local_158 = param_5;
          if (uVar2 != 0) goto LAB_00415321;
        }
        local_158 = param_5 & 0xfffffffb;
LAB_00415321:
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
               (iVar5 = FUN_00414eb0(param_1 + -1,param_2,param_3,param_4,local_158), iVar5 == 0)) {
              return 0;
            }
            param_2 = param_2 + 1;
            param_4 = 0;
          } while (pbVar19 != param_2);
        }
        return 1;
      case 0xe:
        if ((param_5 & 5) != 5) goto switchD_00414f20_caseD_1;
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
           (uVar22 = FUN_00414960(0x3f,local_168,param_2,param_3,param_4,param_5), (int)uVar22 != -1
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
        goto LAB_00415186;
      case 0x3a:
        if (DAT_00625918 == 0) {
          pcVar8 = getenv("POSIXLY_CORRECT");
          DAT_00625918 = -(uint)(pcVar8 == (char *)0x0) | 1;
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
        if ((param_1[1] == 0x21) || (((int)DAT_00625918 < 0 && (param_1[1] == 0x5e)))) {
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
LAB_0041502a:
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
            goto LAB_0041506b;
          }
          if (cVar20 == '[') {
            uVar17 = (ulong)*pbVar19;
            if (*pbVar19 != 0x3a) goto LAB_00415050;
            lVar9 = 0;
            pbVar7 = pbVar19;
            while( true ) {
              bVar21 = pbVar7[1];
              if (bVar21 == 0x3a) break;
              if (0x18 < (byte)(bVar21 + 0x9f)) goto LAB_00415488;
              lVar13 = lVar9 + 1;
              local_148[lVar9] = bVar21;
              lVar9 = lVar13;
              pbVar7 = pbVar7 + 1;
              if (lVar13 == 0x100) {
                return 1;
              }
            }
            if (pbVar7[2] != 0x5d) {
LAB_00415488:
              pbVar14 = pbVar19 + 1;
              if (bVar10 == 0x5b) {
LAB_00415820:
                uVar17 = (ulong)*pbVar19;
                goto LAB_004150d7;
              }
              uVar22 = 0x3a;
              pbVar19 = pbVar14;
              goto LAB_0041502a;
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
              goto LAB_004150d7;
            }
            pbVar14 = pbVar7 + 4;
            uVar22 = (ulong)pbVar7[3];
          }
          else {
            if (cVar20 == '\0') {
              uVar4 = 0x5b;
              goto LAB_0041516a;
            }
            uVar17 = (ulong)*pbVar19;
LAB_00415050:
            while( true ) {
              if (uVar15 != 0) {
                pp_Var6 = __ctype_tolower_loc();
                uVar22 = (ulong)*(byte *)(*pp_Var6 + uVar22);
              }
LAB_0041506b:
              pbVar14 = pbVar19 + 1;
              bVar21 = (byte)uVar22;
              if ((char)uVar17 != '-') {
                uVar22 = uVar17;
                if (bVar10 == bVar21) goto LAB_00415820;
                goto LAB_00415020;
              }
              bVar11 = pbVar19[1];
              if ((bVar11 != 0x5d) && (bVar11 != 0)) break;
              if (bVar10 == bVar21) goto LAB_004150d7;
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
LAB_004150d3:
              do {
                pbVar14 = pbVar7 + 1;
                pbVar19 = pbVar7;
LAB_004150d7:
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
                          goto LAB_004150d3;
                        }
                        pbVar14 = pbVar14 + 1;
                        bVar10 = *pbVar14;
                        if (pbVar19 + 0x101 == pbVar14) {
                          return 1;
                        }
                      }
                      if (pbVar14[1] != 0x5d) goto LAB_004150d3;
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
                      if (bVar10 != 0x2e) goto LAB_004150d3;
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
                    goto LAB_0041518e;
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
LAB_00415020:
          pbVar19 = pbVar14;
        } while ((char)uVar22 != ']');
        local_168 = pbVar14;
        if (!bVar3) {
          return 1;
        }
        goto LAB_00414f77;
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
            goto LAB_00414f66;
          }
          pp_Var6 = __ctype_tolower_loc();
          p_Var12 = *pp_Var6;
          if (param_2 == param_3) {
            return 1;
          }
          uVar4 = p_Var12[bVar10] & 0xff;
LAB_004153f5:
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
            goto LAB_004153f5;
          }
          uVar4 = 0x5c;
LAB_00414f66:
          uVar18 = (uint)*param_2;
        }
        if (uVar18 != uVar4) {
          return 1;
        }
LAB_00414f77:
        param_4 = false;
      }
LAB_0041518e:
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


ulong FUN_004159a0(char *param_1,char *param_2,uint param_3)

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
  uStack_70 = 0x4159c1;
  local_58 = param_2;
  local_50[0] = param_1;
  sVar5 = __ctype_get_mb_cur_max();
  if (sVar5 != 1) {
    local_40[0] = (mbstate_t)0x0;
    uStack_70 = 0x415a19;
    sVar5 = mbsrtowcs((wchar_t *)0x0,local_50,0,local_40);
    uVar6 = sVar5 + 1;
    if (uVar6 != 0) {
      uStack_70 = 0x415a2b;
      iVar4 = mbsinit(local_40);
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        uStack_70 = 0x415bd8;
        __assert_fail("mbsinit (&ps)","lib/fnmatch.c",0x129,"gnu_fnmatch");
      }
      uStack_70 = 0x415a44;
      sVar5 = mbsrtowcs((wchar_t *)0x0,&local_58,0,local_40);
      __len = sVar5 + 1;
      if (__len != 0) {
        uStack_70 = 0x415a5a;
        iVar4 = mbsinit(local_40);
        if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          uStack_70 = 0x415bbf;
          __assert_fail("mbsinit (&ps)","lib/fnmatch.c",0x12d,"gnu_fnmatch");
        }
        uVar7 = uVar6 + __len;
        if ((!CARRY8(uVar6,__len)) && (uVar7 < 0x4000000000000000)) {
          if (uVar7 < 2000) {
            lVar2 = -(uVar7 * 4 + 0x17 & 0xfffffffffffffff0);
            puVar10 = auStack_68 + lVar2;
            pwVar1 = (wchar_t *)((long)awStack_60 + lVar2);
            pwVar9 = pwVar1 + uVar6;
            *(undefined *)(auStack_68 + lVar2 + -8) = 0x415ac0;
            mbsrtowcs(pwVar1,local_50,uVar6,local_40);
            *(undefined *)(auStack_68 + lVar2 + -8) = 0x415ac9;
            iVar4 = mbsinit(local_40);
            if (iVar4 != 0) {
              *(undefined *)(auStack_68 + lVar2 + -8) = 0x415ae4;
              mbsrtowcs(pwVar9,&local_58,__len,local_40);
              *(undefined *)(auStack_68 + lVar2 + -8) = 0x415b00;
              uVar6 = FUN_00413e80(pwVar1,pwVar9,pwVar9 + sVar5,param_3 >> 2 & 1,param_3);
              return uVar6;
            }
          }
          else {
            uStack_70 = 0x415b1f;
            pwVar9 = (wchar_t *)malloc(uVar7 * 4);
            if (pwVar9 == (wchar_t *)0x0) goto LAB_00415b05;
            pwVar1 = pwVar9 + uVar6;
            uStack_70 = 0x415b3e;
            mbsrtowcs(pwVar9,local_50,uVar6,local_40);
            uStack_70 = 0x415b47;
            iVar4 = mbsinit(local_40);
            if (iVar4 != 0) {
              uStack_70 = 0x415b5e;
              mbsrtowcs(pwVar1,&local_58,__len,local_40);
              uStack_70 = 0x415b7a;
              awStack_60[1] = FUN_00413e80(pwVar9,pwVar1,pwVar1 + sVar5,param_3 >> 2 & 1,param_3);
              uStack_70 = 0x415b85;
              free(pwVar9);
              return (ulong)(uint)awStack_60[1];
            }
          }
                    /* WARNING: Subroutine does not return */
          *(undefined *)(puVar10 + -8) = 0x415ba6;
          __assert_fail("mbsinit (&ps)","lib/fnmatch.c",0x147,"gnu_fnmatch");
        }
LAB_00415b05:
        uStack_70 = 0x415b0a;
        piVar8 = __errno_location();
        *piVar8 = 0xc;
        return 0xffffffff;
      }
    }
  }
  pcVar3 = local_58;
  uStack_70 = 0x4159d3;
  sVar5 = strlen(local_58);
  uStack_70 = 0x4159ef;
  uVar6 = FUN_00414eb0(local_50[0],pcVar3,pcVar3 + sVar5,param_3 >> 2 & 1,param_3);
  return uVar6;
}


void * FUN_00415be0(void *param_1,size_t param_2)

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
LAB_00415c12:
    local_110 = malloc(local_100);
    if (local_110 == (void *)0x0) {
      return (void *)0x0;
    }
  }
  else {
    local_110 = param_1;
    local_100 = param_2;
    if (param_1 == (void *)0x0) goto LAB_00415c12;
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
LAB_00415ef8:
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
          if (__dirp != (DIR *)0x0) goto LAB_00415fb1;
          goto joined_r0x00415fbf;
        }
        iVar7 = __fxstat(1,iVar6,&local_c8);
        if (iVar7 != 0) {
          iVar7 = *piVar8;
          if (__dirp != (DIR *)0x0) {
            closedir(__dirp);
          }
LAB_0041601d:
          close(iVar6);
          goto joined_r0x00415fbf;
        }
        if (((__dirp != (DIR *)0x0) && (iVar7 = closedir(__dirp), iVar7 != 0)) ||
           (_Var5 = local_c8.st_ino, _Var2 = local_c8.st_dev, __dirp = fdopendir(iVar6),
           bVar1 = bVar16 || bVar17, __dirp == (DIR *)0x0)) {
          iVar7 = *piVar8;
          goto LAB_0041601d;
        }
LAB_00415d70:
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
                  if (pdVar9->d_name[0] == '.') goto LAB_00415f80;
                  break;
                }
                iVar7 = *piVar8;
              }
              if (iVar7 == 0) {
                *piVar8 = 2;
                iVar7 = 2;
              }
              goto LAB_00415fb1;
            }
            if (pdVar9->d_name[0] == '.') {
LAB_00415f80:
              if ((pdVar9->d_name[1] == '\0') || (*(short *)(pdVar9->d_name + 1) == 0x2e))
              goto LAB_00415d70;
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
              goto LAB_00415e8f;
            }
            *piVar8 = 0xc;
            iVar7 = 0xc;
          }
          else {
            *piVar8 = 0x22;
            iVar7 = 0x22;
          }
LAB_00415fb1:
          closedir(__dirp);
          goto joined_r0x00415fbf;
        }
LAB_00415e8f:
        pvVar10 = memcpy((void *)((long)local_e8 - __n),__filename,__n);
        local_e8 = (void *)((long)pvVar10 + -1);
        local_120 = _Var2;
        *(undefined *)((long)pvVar10 + -1) = 0x2f;
        _Var15 = _Var5;
      } while ((_Var3 != _Var2) || (_Var4 != _Var5));
      iVar6 = closedir(__dirp);
      if (iVar6 == 0) {
        lVar13 = (long)local_110 + local_100;
        goto LAB_00415ef8;
      }
      goto LAB_00415fe0;
    }
  }
  piVar8 = __errno_location();
LAB_00415fe0:
  iVar7 = *piVar8;
joined_r0x00415fbf:
  if (param_1 == (void *)0x0) {
    free(local_110);
  }
  *piVar8 = iVar7;
  return (void *)0x0;
}


void FUN_004160b0(long param_1,int *param_2)

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
      if (iVar3 <= iVar8) goto LAB_0041612c;
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
      if (iVar9 <= iVar3) goto LAB_0041612c;
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
LAB_0041612c:
  param_2[0xc] = iVar2;
  param_2[0xb] = iVar1 + (iVar2 - iVar3);
  return;
}


int FUN_00416190(int param_1,undefined *param_2,char *param_3,char **param_4,undefined *param_5,
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
      if ((iVar5 == 0) && (sVar7 = strlen(__s1_00), sVar7 == sVar15)) goto LAB_004163b0;
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
            if (local_70 == (char *)0x0) goto LAB_004162f0;
          }
          else if (local_70 == (char *)0x0) {
            local_70 = (char *)calloc((long)iVar5,1);
            if (local_70 == (char *)0x0) {
              bVar3 = true;
              goto LAB_004162f0;
            }
            bVar4 = true;
            local_70[(int)local_44] = '\x01';
          }
          local_70[lVar16] = '\x01';
        }
      }
LAB_004162f0:
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
LAB_004163b0:
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


uint FUN_004167b0(uint param_1,undefined *param_2,char *param_3,long param_4,undefined param_5,
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
LAB_004167fa:
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
          goto LAB_004168fd;
        }
        pbVar8 = *(byte **)(param_7 + 8);
      }
      param_7[10] = 0;
    }
LAB_004168fd:
    param_7[6] = 1;
    cVar2 = *param_3;
LAB_00416908:
    if (cVar2 == ':') {
      uVar3 = 0;
    }
    if (pbVar8 == (byte *)0x0) goto LAB_00416878;
LAB_0041691c:
    if (*pbVar8 == 0) goto LAB_00416878;
  }
  else {
    if (param_7[6] == 0) goto LAB_004167fa;
    cVar2 = *param_3;
    pbVar8 = *(byte **)(param_7 + 8);
    if ((cVar2 - 0x2bU & 0xfd) != 0) goto LAB_00416908;
    pcVar4 = param_3 + 1;
    param_3 = param_3 + 1;
    if (*pcVar4 == ':') {
      uVar3 = 0;
    }
    if (pbVar8 != (byte *)0x0) goto LAB_0041691c;
LAB_00416878:
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
        FUN_004160b0(param_2,param_7);
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
LAB_004169e6:
      if (uVar11 != param_1) {
        *param_7 = uVar11;
      }
      return 0xffffffff;
    }
    lVar6 = 3;
    pbVar8 = (byte *)param_2[(int)uVar11];
    pbVar9 = pbVar8;
    pbVar10 = &DAT_0041f171;
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
          FUN_004160b0(param_2,param_7);
          uVar11 = param_7[0xb];
        }
      }
      param_7[0xc] = param_1;
      *param_7 = param_1;
      goto LAB_004169e6;
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
        puVar15 = &DAT_0041f171;
        goto LAB_00416b45;
      }
      if ((int)param_6 != 0) {
        if (pbVar8[2] == 0) {
          pcVar4 = strchr(param_3,(int)(char)bVar14);
          param_6 = param_6 & 0xffffffff;
          if (pcVar4 != (char *)0x0) goto LAB_00416af0;
        }
        *(byte **)(param_7 + 8) = pbVar8 + 1;
        uVar11 = FUN_00416190(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar3,
                              &DAT_0041f172);
        if (uVar11 != 0xffffffff) {
          return uVar11;
        }
        pbVar8 = (byte *)param_2[(int)*param_7];
      }
    }
LAB_00416af0:
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
  puVar15 = &DAT_0041fcb5;
LAB_00416b45:
  uVar3 = FUN_00416190(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar3,puVar15);
  return uVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00416d80(void)

{
  DAT_00625920 = DAT_0062463c;
  _DAT_00625924 = DAT_00624638;
  FUN_004167b0();
  DAT_0062463c = DAT_00625920;
  DAT_00625970 = DAT_00625930;
  _DAT_00624634 = DAT_00625928;
  return;
}


void FUN_00416de0(void)

{
  FUN_00416d80();
  return;
}


void FUN_00416e00(void)

{
  FUN_00416d80();
  return;
}


void FUN_00416e20(void)

{
  FUN_004167b0();
  return;
}


void FUN_00416e40(void)

{
  FUN_00416d80();
  return;
}


void FUN_00416e60(void)

{
  FUN_004167b0();
  return;
}


size_t FUN_00416e80(wchar_t *param_1,byte *param_2,size_t param_3,mbstate_t *param_4)

{
  char cVar1;
  size_t sVar2;
  wchar_t local_1c;
  
  if (param_2 == (byte *)0x0) {
    param_3 = 1;
    param_2 = &DAT_0041b08a;
  }
  else {
    if (param_3 == 0) {
      return 0xfffffffffffffffe;
    }
    if (param_1 != (wchar_t *)0x0) goto LAB_00416ea4;
  }
  param_1 = &local_1c;
LAB_00416ea4:
  sVar2 = mbrtowc(param_1,(char *)param_2,param_3,param_4);
  if ((0xfffffffffffffffd < sVar2) && (cVar1 = FUN_0040c190(0), cVar1 == '\0')) {
    sVar2 = 1;
    *param_1 = (uint)*param_2;
  }
  return sVar2;
}


ulong * FUN_00416f00(ulong *param_1,char param_2,ulong param_3)

{
  char cVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  
  if (param_3 == 0) {
    return (ulong *)0x0;
  }
  if (((ulong)param_1 & 7) == 0) {
LAB_00416f40:
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
      if (((ulong)param_1 & 7) == 0) goto LAB_00416f40;
      cVar1 = *(char *)param_1;
    }
  }
  return param_1;
}


void FUN_00417010(void)

{
  undefined uVar1;
  
  uVar1 = dcgettext(0,"memory exhausted",5);
  __fprintf_chk(stderr,1,"%s\n",uVar1);
                    /* WARNING: Subroutine does not return */
  exit(DAT_006245c0);
}


void FUN_00417050(long param_1,undefined param_2)

{
  if ((*(byte *)(param_1 + 0x50) & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0041705e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x38))(*(undefined *)(param_1 + 0x48));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00417063. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x38))(param_2);
  return;
}


void FUN_00417070(long param_1,undefined param_2)

{
  if ((*(byte *)(param_1 + 0x50) & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0041707e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x40))(*(undefined *)(param_1 + 0x48));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00417083. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x40))(param_2);
  return;
}


undefined FUN_00417090(long *param_1,long param_2,long param_3,long param_4,long param_5)

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
  plVar1 = (long *)FUN_00417050();
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
  uVar2 = FUN_00417090();
  return uVar2;
}


void _obstack_begin(long param_1,undefined param_2,undefined param_3,undefined param_4,
                   undefined param_5)

{
  *(byte *)(param_1 + 0x50) = *(byte *)(param_1 + 0x50) & 0xfe;
  *(undefined *)(param_1 + 0x38) = param_4;
  *(undefined *)(param_1 + 0x40) = param_5;
  FUN_00417090();
  return;
}


void _obstack_begin_1(long param_1,undefined param_2,undefined param_3,undefined param_4,
                     undefined param_5,undefined param_6)

{
  *(byte *)(param_1 + 0x50) = *(byte *)(param_1 + 0x50) | 1;
  *(undefined *)(param_1 + 0x38) = param_4;
  *(undefined *)(param_1 + 0x40) = param_5;
  *(undefined *)(param_1 + 0x48) = param_6;
  FUN_00417090();
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
    ppuVar2 = (ulong **)FUN_00417050();
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
          puVar3 = (ulong *)FUN_00417070(param_1,puVar1);
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
    FUN_00417070(param_1);
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


bool FUN_00417340(long param_1)

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


void FUN_00417390(long *param_1)

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


undefined FUN_004173c0(undefined param_1)

{
  undefined uVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = __errno_location();
  iVar3 = *piVar2;
  uVar1 = FUN_00417340(param_1);
  if ((char)uVar1 == '\0') {
    iVar3 = *piVar2;
  }
  FUN_00417390(param_1);
  *piVar2 = iVar3;
  return uVar1;
}


undefined * FUN_00417410(char *param_1)

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


undefined FUN_004174a0(long *param_1,char *param_2)

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
LAB_004174e8:
      iVar2 = strcmp(__s1,__s2);
      if (iVar2 != 0) {
        do {
          if (*__s1 == '\0') {
            if ((char *)((long)param_1 + 9) == __s1) {
              if (*(char *)(param_1 + 1) != '\0') goto LAB_00417513;
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
              lVar6 = FUN_00417410(__s2);
              *param_1 = lVar6;
              if (lVar6 == 0) {
                return 0;
              }
              *(undefined *)(lVar6 + 8) = 0;
              __s1 = (char *)(lVar6 + 9);
            }
            break;
          }
LAB_00417513:
          sVar3 = strlen(__s1);
          __s1 = __s1 + sVar3 + 1;
          if ((*__s1 != '\0') || (plVar1 = (long *)*param_1, plVar1 == (long *)0x0))
          goto LAB_004174e8;
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


long FUN_00417620(long param_1)

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
  lVar3 = FUN_00417410(__s2);
  if (lVar3 != 0) {
    cVar1 = FUN_00417340(param_1);
    if (cVar1 == '\0') {
      piVar4 = __errno_location();
      iVar2 = *piVar4;
      if (lVar3 != 1) {
        FUN_00417390(lVar3);
      }
      *piVar4 = iVar2;
      return 0;
    }
  }
  return lVar3;
}


void FUN_004176d0(long param_1)

{
  if (param_1 != 1) {
    FUN_00417390();
    return;
  }
  return;
}


tm * FUN_004176f0(long param_1,time_t *param_2,tm *param_3)

{
  char cVar1;
  long lVar2;
  tm *ptVar3;
  
  if (param_1 == 0) {
    ptVar3 = gmtime_r(param_2,param_3);
    return ptVar3;
  }
  lVar2 = FUN_00417620();
  if (lVar2 != 0) {
    ptVar3 = localtime_r(param_2,param_3);
    if ((ptVar3 == (tm *)0x0) || (cVar1 = FUN_004174a0(param_1,param_3), cVar1 == '\0')) {
      if (lVar2 != 1) {
        FUN_004173c0(lVar2);
      }
    }
    else if ((lVar2 == 1) || (cVar1 = FUN_004173c0(lVar2), cVar1 != '\0')) {
      return param_3;
    }
  }
  return (tm *)0x0;
}


long FUN_004177a0(long param_1,uint *param_2)

{
  char cVar1;
  long lVar2;
  tm *ptVar3;
  long local_60;
  tm local_58;
  
  if (param_1 == 0) {
    lVar2 = FUN_004178c0(param_2);
    return lVar2;
  }
  lVar2 = FUN_00417620();
  if (lVar2 != 0) {
    local_60 = FUN_004186f0(param_2);
    if (((local_60 != -1) ||
        (((ptVar3 = localtime_r(&local_60,&local_58), ptVar3 != (tm *)0x0 &&
          ((((param_2[8] == 0) == (local_58.tm_isdst == 0) || ((int)param_2[8] < 0)) ||
           (local_58.tm_isdst < 0)))) &&
         ((param_2[4] ^ local_58.tm_mon | param_2[5] ^ local_58.tm_year |
           param_2[3] ^ local_58.tm_mday | param_2[2] ^ local_58.tm_hour |
           param_2[1] ^ local_58.tm_min | *param_2 ^ local_58.tm_sec) == 0)))) &&
       (cVar1 = FUN_004174a0(param_1,param_2), cVar1 == '\0')) {
      local_60 = -1;
    }
    if (lVar2 == 1) {
      return local_60;
    }
    cVar1 = FUN_004173c0(lVar2);
    if (cVar1 != '\0') {
      return local_60;
    }
  }
  return -1;
}


void FUN_004178c0(long param_1)

{
  *(undefined *)(param_1 + 0x20) = 0;
  FUN_004182b0(param_1,gmtime_r,&DAT_00625958);
  return;
}


ulong FUN_004178e0(uint *param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  
  lVar2 = __fpending();
  uVar1 = *param_1;
  uVar3 = FUN_00417f10(param_1);
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


void FUN_00417940(void)

{
  long lVar1;
  
  lVar1 = FUN_0040b810();
  if (lVar1 != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00412bd0();
}


ulong FUN_00417960(char *param_1,ulong param_2)

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

char * FUN_004179a0(void)

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
  if (DAT_00625960 != (char *)0x0) goto LAB_004179da;
  pcVar7 = getenv("CHARSETALIASDIR");
  if ((pcVar7 == (char *)0x0) || (*pcVar7 == '\0')) {
    sVar6 = 0x73;
    sVar5 = 0x65;
    __n = 100;
    pcVar7 = 
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib"
    ;
LAB_00417ac5:
    __file = (char *)malloc(sVar6);
    if (__file != (char *)0x0) {
      memcpy(__file,pcVar7,__n);
      __file[__n] = '/';
      goto LAB_00417ae6;
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
        goto LAB_00417ac5;
      }
      sVar6 = __n + 0xe;
    }
    __file = (char *)malloc(sVar6);
    if (__file != (char *)0x0) {
      memcpy(__file,pcVar7,__n);
      sVar5 = __n;
LAB_00417ae6:
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
LAB_00417b80:
          pbVar8 = (byte *)__stream->_IO_read_ptr;
          if (__stream->_IO_read_end <= pbVar8) goto LAB_00417d0c;
          do {
            __stream->_IO_read_ptr = (char *)(pbVar8 + 1);
            uVar4 = (uint)*pbVar8;
            __ptr = pcVar7;
            while( true ) {
              pcVar7 = __ptr;
              if ((uVar4 - 9 < 2) || (uVar4 == 0x20)) goto LAB_00417b80;
              if (uVar4 == 0x23) goto LAB_00417d71;
              ungetc(uVar4,__stream);
              iVar2 = fscanf(__stream,"%50s %50s",&local_b8,&local_78);
              puVar13 = &local_b8;
              if (iVar2 < 2) goto LAB_00417d1f;
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
                FUN_00417f10(__stream);
                goto LAB_00417b24;
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
LAB_00417d0c:
              uVar4 = __uflow(__stream);
              __ptr = pcVar7;
              if (uVar4 == 0xffffffff) goto LAB_00417d1f;
            }
          } while( true );
        }
        close(iVar2);
      }
      goto LAB_00417b1e;
    }
  }
  DAT_00625960 = "";
LAB_004179da:
  cVar1 = *DAT_00625960;
  pcVar7 = DAT_00625960;
  do {
    if (cVar1 == '\0') {
LAB_00417a34:
      if (*__s1 == '\0') {
        __s1 = "ASCII";
      }
      return __s1;
    }
    iVar2 = strcmp(__s1,pcVar7);
    if ((iVar2 == 0) || ((cVar1 == '*' && (pcVar7[1] == '\0')))) {
      sVar6 = strlen(pcVar7);
      __s1 = pcVar7 + sVar6 + 1;
      goto LAB_00417a34;
    }
    sVar6 = strlen(pcVar7);
    sVar5 = strlen(pcVar7 + sVar6 + 1);
    pcVar7 = pcVar7 + sVar6 + 1 + sVar5 + 1;
    cVar1 = *pcVar7;
  } while( true );
LAB_00417d71:
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
  if (uVar4 == 0xffffffff) goto LAB_00417d1f;
  goto LAB_00417b80;
LAB_00417d1f:
  FUN_00417f10(__stream);
  if (local_d0 == 0) {
LAB_00417b1e:
    pcVar7 = "";
  }
  else {
    pcVar7[local_d0] = '\0';
  }
LAB_00417b24:
  free(__file);
  DAT_00625960 = pcVar7;
  goto LAB_004179da;
}


int FUN_00417f10(FILE *param_1)

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
      if (_Var4 == -1) goto LAB_00417f77;
    }
    iVar1 = FUN_00417f90(param_1);
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
LAB_00417f77:
  iVar1 = fclose(param_1);
  return iVar1;
}


void FUN_00417f90(FILE *param_1)

{
  int iVar1;
  
  if (param_1 != (FILE *)0x0) {
    iVar1 = __freading();
    if ((iVar1 != 0) && ((param_1->_flags & 0x100U) != 0)) {
      FUN_00417fd0(param_1,0,1);
      fflush(param_1);
      return;
    }
  }
  fflush(param_1);
  return;
}


ulong FUN_00417fd0(FILE *param_1,__off_t param_2,int param_3)

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


long FUN_00418030(ulong param_1,long param_2,int param_3,int param_4,int param_5,uint param_6,
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


long FUN_00418150(void)

{
  long lVar1;
  long in_R9;
  long param_7;
  
  if (param_7 != 0) {
    lVar1 = FUN_00418030();
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


void FUN_004181f0(code *param_1,long *param_2,undefined param_3)

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


long FUN_004182b0(int *param_1,code *param_2,long *param_3)

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
                        (&DAT_0041fd60 +
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
  lVar7 = FUN_00418030(uVar12,lVar14,iVar3,iVar2,iVar6,0x46,0,0,0,-local_e0);
  bVar19 = false;
  lVar17 = lVar7;
  lVar18 = lVar7;
  local_c8 = lVar7;
  while( true ) {
    uVar8 = FUN_004181f0(param_2,&local_c8,&local_b8);
    lVar10 = local_c8;
    lVar9 = FUN_00418150(uVar12,lVar14,iVar3,iVar2,iVar6,local_c8,uVar8);
    if (lVar10 == lVar9) break;
    if ((lVar10 == lVar17) && (lVar10 != lVar18)) {
      if (local_98 < 0) goto LAB_004184c0;
      if (iVar4 < 0) {
        if (bVar19 <= (local_98 != 0)) goto LAB_004184c0;
      }
      else if ((iVar4 != 0) != (local_98 != 0)) goto LAB_004184c0;
    }
    iVar13 = iVar13 + -1;
    if (iVar13 == 0) goto LAB_00418570;
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
          uVar8 = 0x418675;
          FUN_004181f0(param_2,&local_c0,local_78);
          if (((iVar4 == 0) == (local_58 == 0)) || (lVar10 = local_c8, local_58 < 0)) {
            local_c8 = FUN_00418150(uVar12,lVar14,iVar3,iVar2,iVar6,local_c0,local_78);
            FUN_004181f0(param_2,&local_c8,&local_b8,uVar8);
            lVar10 = local_c8;
            goto LAB_004184c0;
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
LAB_004184c0:
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
LAB_00418570:
    local_c8 = -1;
  }
  return local_c8;
}


void FUN_004186f0(undefined param_1)

{
  tzset();
  FUN_004182b0(param_1,localtime_r,&DAT_00625968);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00418743) */
/* WARNING: Removing unreachable block (ram,0x00418748) */

void FUN_00418710(void)

{
  __DT_INIT();
  return;
}


void FUN_00418770(void)

{
  return;
}


void FUN_00418780(undefined param_1)

{
  __cxa_atexit(param_1,0,DAT_006243e8);
  return;
}


undefined FUN_00418798(undefined param_1,undefined param_2,undefined param_3)

{
  code **ppcVar1;
  
  for (ppcVar1 = (code **)&DAT_00623e30; *ppcVar1 != (code *)0xffffffffffffffff;
      ppcVar1 = ppcVar1 + -1) {
    (**ppcVar1)();
  }
  return param_3;
}


void __DT_FINI(void)

{
  FUN_004047a1();
  return;
}

