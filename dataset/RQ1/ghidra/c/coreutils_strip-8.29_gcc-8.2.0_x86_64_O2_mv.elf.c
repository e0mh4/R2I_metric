
void FUN_00402d80(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00402d85(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00402d8a(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00402d8f(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void switchD_0040c5a0::caseD_b(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00402d99(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00402d9e(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00402da3(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00402da8(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void switchD_0040fb8a::caseD_0(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00402db2(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00402db7(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00402dbc(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00402dc1(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


byte FUN_00402dd0(ulong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  char **ppcVar2;
  bool bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  undefined8 uVar7;
  uint *puVar8;
  int *piVar9;
  undefined8 uVar10;
  undefined8 extraout_RDX;
  uint uVar11;
  uint uVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  undefined auVar17 [16];
  undefined8 uStack_128;
  char *local_120;
  undefined4 local_118;
  undefined4 local_114;
  int local_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined2 local_100;
  undefined8 local_fc;
  undefined8 local_f4;
  undefined local_ec;
  undefined local_eb;
  undefined uStack_ea;
  undefined local_e9;
  undefined local_e8;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined8 local_d8;
  stat local_c8;
  
  param_1 = param_1 & 0xffffffff;
  FUN_0040c350(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils",
                 "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale"
                );
  textdomain("coreutils");
  FUN_00415170(FUN_0040a6c0);
  FUN_004053c0();
  local_e4 = 1;
  local_fc = 0x101000001010100;
  local_f4 = 0x1000001000000;
  local_110 = 4;
  uStack_10c = 2;
  local_ec = 0;
  local_114 = 2;
  local_108 = 0;
  local_100 = 1;
  iVar6 = isatty(0);
  local_e8 = 0;
  local_e0 = 0;
  local_e9 = iVar6 != 0;
  pcVar13 = (char *)0x0;
  local_eb = 0;
  uStack_ea = 0;
  bVar3 = false;
  local_d8 = 0;
  local_120 = (char *)0x0;
  pcVar14 = (char *)0x0;
  pcVar16 = (char *)0x0;
LAB_00402ec0:
  uVar12 = 0;
  iVar6 = FUN_00413690(param_1 & 0xffffffff,param_2,"bfint:uvS:TZ",&PTR_s_backup_00415dc0);
  pcVar15 = pcVar14;
  if (iVar6 == -1) {
LAB_004030a7:
    uVar11 = (int)param_1 - DAT_0061d478._4_4_;
    param_1 = (ulong)uVar11;
    param_2 = param_2 + DAT_0061d478._4_4_;
    if ((int)(uint)(pcVar15 == (char *)0x0) < (int)uVar11) {
      if ((char)pcVar13 == '\0') {
        if (pcVar15 == (char *)0x0) {
          if (uVar11 == 1) {
                    /* WARNING: Subroutine does not return */
            __assert_fail("2 <= n_files","src/mv.c",0x1c6,"main");
          }
          ppcVar2 = (char **)(param_2 + (long)(int)uVar11 + -1);
          pcVar13 = *ppcVar2;
          iVar6 = __xstat(1,pcVar13,&local_c8);
          if (iVar6 == 0) goto LAB_0040327c;
          puVar8 = (uint *)__errno_location();
          uVar12 = *puVar8;
          if (uVar12 == 0) goto LAB_0040327c;
          if (uVar12 != 2) goto LAB_004033e8;
          do {
            if (uVar11 == 2) goto LAB_004030df;
            param_2 = (undefined8 *)FUN_0040dd80(4,*ppcVar2);
            uVar7 = dcgettext(0,"target %s is not a directory",5);
            error(1,0,uVar7,param_2);
LAB_0040327c:
          } while ((local_c8.st_mode & 0xf000) != 0x4000);
          uVar11 = uVar11 - 1;
          param_1 = (ulong)uVar11;
          pcVar15 = (char *)param_2[(int)uVar11];
          local_118 = 0;
          if (bVar3) goto LAB_004030eb;
LAB_00403112:
          FUN_0040a040(local_120);
          FUN_00409750();
          if (pcVar15 == (char *)0x0) goto LAB_004031e1;
        }
        else {
          if (bVar3) {
LAB_004030eb:
            uVar11 = (uint)param_1;
            uVar7 = 5;
            if (local_110 == 2) goto LAB_004033bf;
            uVar7 = dcgettext(0,"backup type",5);
            local_118 = FUN_0040a5f0(uVar7,pcVar16);
            goto LAB_00403112;
          }
          local_118 = 0;
          FUN_0040a040(local_120);
          FUN_00409750();
        }
        if (uVar11 == 1) {
          bVar4 = FUN_00403620(*param_2,pcVar15,1,&local_118);
        }
        else {
          FUN_00405360(&local_118);
          bVar4 = 1;
          puVar1 = param_2 + (ulong)(uVar11 - 1) + 1;
          do {
            uVar7 = *param_2;
            param_2 = param_2 + 1;
            bVar5 = FUN_00403620(uVar7,pcVar15,1,&local_118);
            bVar4 = bVar4 & bVar5;
          } while (param_2 != puVar1);
        }
      }
      else {
        if (pcVar15 != (char *)0x0) {
          uVar7 = dcgettext(0,
                            "cannot combine --target-directory (-t) and --no-target-directory (-T)",
                            5);
          error(1,0,uVar7);
          goto LAB_004032e1;
        }
        if (2 < (int)uVar11) {
          param_2 = (undefined8 *)FUN_0040dd80(4,param_2[2]);
          uVar7 = dcgettext(0,"extra operand %s",5);
          error(0,0,uVar7,param_2);
          FUN_004036b0(1);
          uVar7 = extraout_RDX;
LAB_004033bf:
          pcVar13 = "options --backup and --no-clobber are mutually exclusive";
          goto LAB_00403368;
        }
LAB_004030df:
        pcVar15 = (char *)0x0;
        if (bVar3) goto LAB_004030eb;
        local_118 = 0;
        FUN_0040a040(local_120);
        FUN_00409750();
LAB_004031e1:
        bVar4 = FUN_00403620(*param_2,param_2[1],0,&local_118);
      }
      return bVar4 ^ 1;
    }
LAB_004032e1:
    param_1 = (ulong)(uVar11 - 1);
    if (uVar11 - 1 == 0) {
      param_2 = (undefined8 *)FUN_0040dd80(4,*param_2);
      uVar7 = dcgettext(0,"missing destination file operand after %s",5);
      error(0,0,uVar7,param_2);
      pcVar14 = pcVar15;
    }
    else {
LAB_0040335e:
      uVar7 = 5;
      pcVar13 = "missing file operand";
LAB_00403368:
      uVar7 = dcgettext(0,pcVar13,uVar7);
      error(0,0,uVar7);
      pcVar14 = pcVar15;
    }
  }
  else {
    if (iVar6 == 0x66) {
      local_110 = 1;
      goto LAB_00402ec0;
    }
    if (iVar6 < 0x67) {
      if (iVar6 == 0x53) {
        local_120 = DAT_0061db00;
        bVar3 = true;
      }
      else {
        if (iVar6 < 0x54) goto LAB_00402f80;
        if (iVar6 != 0x5a) {
          if (iVar6 != 0x62) {
            if (iVar6 != 0x54) goto LAB_00402f75;
            goto LAB_00402fe0;
          }
          bVar3 = true;
          if (DAT_0061db00 != (char *)0x0) {
            pcVar16 = DAT_0061db00;
          }
        }
      }
      goto LAB_00402ec0;
    }
    if (iVar6 == 0x74) {
      if (pcVar14 != (char *)0x0) {
        uVar7 = dcgettext(0,"multiple target directories specified",5);
        error(1,0,uVar7);
LAB_004033e8:
        local_120 = (char *)((ulong)local_120 & 0xffffffff00000000 | (ulong)uVar12);
        uVar7 = FUN_0040dd80(4,pcVar13);
        uVar10 = dcgettext(0,"failed to access %s",5);
        auVar17 = error(1,(ulong)local_120 & 0xffffffff,uVar10,uVar7);
        uVar7 = uStack_128;
        uStack_128 = SUB168(auVar17,0);
        (*(code *)PTR___libc_start_main_0061cff0)
                  (FUN_00402dd0,uVar7,&local_120,FUN_00415100,FUN_00415160,SUB168(auVar17 >> 0x40,0)
                   ,&uStack_128);
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      iVar6 = __xstat(1,DAT_0061db00,&local_c8);
      pcVar15 = DAT_0061db00;
      if (iVar6 != 0) {
        param_1 = FUN_0040dd80(4,DAT_0061db00);
        param_2 = (undefined8 *)dcgettext(0,"failed to access %s",5);
        piVar9 = __errno_location();
        error(1,*piVar9,param_2,param_1);
        pcVar15 = pcVar14;
        goto LAB_0040335e;
      }
      pcVar14 = DAT_0061db00;
      if ((local_c8.st_mode & 0xf000) != 0x4000) {
        param_2 = (undefined8 *)FUN_0040dd80(4,DAT_0061db00);
        uVar7 = dcgettext(0,"target %s is not a directory",5);
        error(1,0,uVar7,param_2);
        goto LAB_004030a7;
      }
      goto LAB_00402ec0;
    }
    if (iVar6 < 0x75) {
      if (iVar6 == 0x69) {
        local_110 = 3;
      }
      else {
        if (iVar6 != 0x6e) goto LAB_00402f75;
        local_110 = 2;
      }
      goto LAB_00402ec0;
    }
    if (iVar6 == 0x76) {
      uStack_ea = 1;
      goto LAB_00402ec0;
    }
    if (iVar6 < 0x76) {
      local_eb = 1;
      goto LAB_00402ec0;
    }
    if (iVar6 == 0x80) {
      DAT_0061d4f0 = 1;
      goto LAB_00402ec0;
    }
  }
LAB_00402f75:
  do {
    iVar6 = FUN_004036b0(1);
LAB_00402f80:
    if (iVar6 == -0x83) {
      FUN_0040ff60(stdout,&DAT_004151e3,"GNU coreutils",PTR_DAT_0061d400,"Mike Parker",
                   "David MacKenzie","Jim Meyering",0);
                    /* WARNING: Subroutine does not return */
      exit(0);
    }
  } while (iVar6 != -0x82);
  FUN_004036b0(0);
LAB_00402fe0:
  pcVar13 = (char *)0x1;
  goto LAB_00402ec0;
}


void FUN_00403430(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_retaddr;
  undefined auStack_8 [8];
  
  (*(code *)PTR___libc_start_main_0061cff0)
            (FUN_00402dd0,unaff_retaddr,&stack0x00000008,FUN_00415100,FUN_00415160,param_3,auStack_8
            );
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* WARNING: Removing unreachable block (ram,0x00403468) */
/* WARNING: Removing unreachable block (ram,0x00403472) */

void FUN_0040345b(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x004034a9) */

void FUN_0040347a(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x004034e6) */

void FUN_004034b1(void)

{
  if (DAT_0061d4c8 != '\0') {
    return;
  }
  FUN_0040345b();
  DAT_0061d4c8 = 1;
  return;
}


/* WARNING: Removing unreachable block (ram,0x004034a9) */

void thunk_FUN_0040347a(void)

{
  return;
}


ulong FUN_00403510(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int *piVar4;
  char local_4a;
  char local_49;
  long local_48;
  undefined8 local_40;
  undefined local_38 [4];
  undefined4 local_34;
  undefined2 local_30;
  undefined local_2e;
  long local_28;
  ushort local_20;
  undefined local_1e;
  
  uVar1 = FUN_004094d0(param_1,param_2,0,param_3,&local_4a,&local_49);
  if ((char)uVar1 != '\0') {
    if (local_4a == '\0') {
      if ((local_49 != '\x01') && (param_1 != 0)) {
        local_38[0] = 0;
        local_34 = 5;
        local_30 = 0x100;
        local_2e = 1;
        local_20 = 0;
        local_1e = 1;
        local_28 = FUN_0040e240(&DAT_0061d4e0);
        if (local_28 == 0) {
          uVar2 = FUN_0040dd80(4,&DAT_00416f8e);
          uVar3 = dcgettext(0,"failed to get attributes of %s",5);
          piVar4 = __errno_location();
          error(1,*piVar4,uVar3,uVar2);
        }
        else {
          local_40 = 0;
          local_20 = local_20 & 0xff | (ushort)*(byte *)(param_3 + 0x2e) << 8;
          local_48 = param_1;
          uVar1 = FUN_004041b0(&local_48,local_38);
          if ((int)uVar1 - 2U < 3) {
            return uVar1 & 0xffffffffffffff00 | (ulong)((int)uVar1 != 4);
          }
        }
                    /* WARNING: Subroutine does not return */
        __assert_fail("VALID_STATUS (status)","src/mv.c",0xec,"do_move");
      }
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}


ulong FUN_00403620(undefined8 param_1,undefined8 param_2,char param_3,undefined8 param_4)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  void *__ptr;
  
  if (DAT_0061d4f0 != '\0') {
    FUN_0040aa90();
  }
  if (param_3 == '\0') {
    uVar2 = FUN_00403510(param_1,param_2,param_4);
    return uVar2;
  }
  uVar3 = FUN_0040aa00(param_1);
  __ptr = (void *)FUN_0040aeb0(param_2,uVar3,0);
  FUN_0040aa90(__ptr);
  uVar1 = FUN_00403510(param_1,__ptr,param_4);
  free(__ptr);
  return (ulong)uVar1;
}


void FUN_004036b0(int param_1)

{
  FILE *pFVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  byte **ppbVar5;
  undefined8 uVar7;
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
  undefined8 local_28;
  undefined8 local_20;
  byte **ppbVar6;
  
  uVar7 = DAT_0061d940;
  bVar13 = 0;
  if (param_1 != 0) {
    uVar3 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(stderr,1,uVar3,uVar7);
    goto LAB_004036ef;
  }
  uVar3 = dcgettext(0,
                    "Usage: %s [OPTION]... [-T] SOURCE DEST\n  or:  %s [OPTION]... SOURCE... DIRECTORY\n  or:  %s [OPTION]... -t DIRECTORY SOURCE...\n"
                    ,5);
  __printf_chk(1,uVar3,uVar7,uVar7,uVar7);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"Rename SOURCE to DEST, or move SOURCE(s) to DIRECTORY.\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nMandatory arguments to long options are mandatory for short options too.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --backup[=CONTROL]       make a backup of each existing destination file\n  -b                           like --backup but does not accept an argument\n  -f, --force                  do not prompt before overwriting\n  -i, --interactive            prompt before overwrite\n  -n, --no-clobber             do not overwrite an existing file\nIf you specify more than one of -i, -f, -n, only the final one takes effect.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --strip-trailing-slashes  remove any trailing slashes from each SOURCE\n                                 argument\n  -S, --suffix=SUFFIX          override the usual backup suffix\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -t, --target-directory=DIRECTORY  move all SOURCE arguments into DIRECTORY\n  -T, --no-target-directory    treat DEST as a normal file\n  -u, --update                 move only when the SOURCE file is newer\n                                 than the destination file or when the\n                                 destination file is missing\n  -v, --verbose                explain what is being done\n  -Z, --context                set SELinux security context of destination\n                                 file to default type\n"
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
                             "\nThe backup suffix is \'~\', unless set with --suffix or SIMPLE_BACKUP_SUFFIX.\nThe version control method may be selected via the --backup option or through\nthe VERSION_CONTROL environment variable.  Here are the values:\n\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  none, off       never make backups (even if --backup is given)\n  numbered, t     make numbered backups\n  existing, nil   numbered if numbered backups exist, simple otherwise\n  simple, never   always make simple backups\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  local_88 = &DAT_004151e6;
  local_80 = "test invocation";
  local_78[0] = (byte *)0x415260;
  local_78[1] = (byte *)0x4151f8;
  local_78[2] = (byte *)0x41520e;
  local_78[3] = (byte *)0x415218;
  local_78[4] = (byte *)0x415227;
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
    pbVar10 = &DAT_004151e3;
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
        pbVar9 = &DAT_004151e3;
        goto LAB_00403a4b;
      }
    }
    pbVar9 = &DAT_004151e3;
    uVar7 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    pcVar4 = " invocation";
    __printf_chk(1,uVar7,"https://www.gnu.org/software/coreutils/",&DAT_004151e3);
  }
  else {
    uVar7 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar7,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
      iVar2 = strncmp(pcVar4,"en_",3);
      if (iVar2 != 0) {
LAB_00403a4b:
        uVar7 = dcgettext(0,"Report %s translation bugs to <https://translationproject.org/team/>\n"
                          ,5);
        __printf_chk(1,uVar7,&DAT_004151e3);
      }
    }
    pcVar4 = " invocation";
    uVar7 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    __printf_chk(1,uVar7,"https://www.gnu.org/software/coreutils/",&DAT_004151e3);
    if (pbVar9 != &DAT_004151e3) {
      pcVar4 = "";
    }
  }
  uVar7 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(1,uVar7,pbVar9,pcVar4);
LAB_004036ef:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}


undefined8 FUN_00403a80(long param_1,long param_2,char *param_3,char param_4)

{
  short sVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  uint *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  stat sStack_b8;
  
  iVar5 = unlinkat(*(int *)(param_1 + 0x2c),*(char **)(param_2 + 0x30),(uint)(param_4 != '\0') << 9)
  ;
  if (iVar5 == 0) {
    if (param_3[0x19] == '\0') {
      return 2;
    }
    uVar7 = FUN_0040dd80(4,*(undefined8 *)(param_2 + 0x38));
    if (param_4 == '\0') {
      uVar8 = dcgettext(0,"removed %s\n",5);
    }
    else {
      uVar8 = dcgettext(0,"removed directory %s\n",5);
    }
    __printf_chk(1,uVar8,uVar7);
    return 2;
  }
  puVar6 = (uint *)__errno_location();
  uVar2 = *puVar6;
  if (uVar2 == 0x1e) {
    iVar5 = __fxstatat(1,*(int *)(param_1 + 0x2c),*(char **)(param_2 + 0x30),&sStack_b8,0x100);
    if ((iVar5 == 0) || (uVar2 = *puVar6, uVar2 != 2)) {
      *puVar6 = 0x1e;
      goto LAB_00403afa;
    }
    if (*param_3 != '\0') {
      return 2;
    }
    if (*(short *)(param_2 + 0x70) != 4) goto LAB_00403afa;
  }
  else {
    if (*param_3 == '\0') {
LAB_00403aef:
      sVar1 = *(short *)(param_2 + 0x70);
    }
    else {
      if (uVar2 == 0x14) {
        return 2;
      }
      if (0x14 < (int)uVar2) {
        if (uVar2 == 0x16) {
          return 2;
        }
        if (uVar2 == 0x54) {
          return 2;
        }
        goto LAB_00403aef;
      }
      if (uVar2 == 2) {
        return 2;
      }
      sVar1 = *(short *)(param_2 + 0x70);
    }
    if ((sVar1 != 4) || (0x27 < uVar2)) goto LAB_00403afa;
  }
  if (((0x8000320000U >> ((ulong)uVar2 & 0x3f) & 1) != 0) &&
     ((uVar2 = *(uint *)(param_2 + 0x40), uVar2 == 1 || (uVar2 == 0xd)))) {
    *puVar6 = uVar2;
  }
LAB_00403afa:
  uVar7 = FUN_0040dd80(4,*(undefined8 *)(param_2 + 0x38));
  uVar8 = dcgettext(0,"cannot remove %s",5);
  error(0,*puVar6,uVar8,uVar7);
  lVar3 = *(long *)(param_2 + 8);
  lVar4 = *(long *)(lVar3 + 0x58);
  while ((-1 < lVar4 && (*(long *)(lVar3 + 0x20) == 0))) {
    *(undefined8 *)(lVar3 + 0x20) = 1;
    lVar3 = *(long *)(lVar3 + 8);
    lVar4 = *(long *)(lVar3 + 0x58);
  }
  return 4;
}


undefined8 FUN_00403c90(int param_1,char *param_2,stat *param_3)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  
  lVar2 = param_3->st_size;
  if (lVar2 == -1) {
    iVar1 = __fxstatat(1,param_1,param_2,param_3,0x100);
    if (iVar1 != 0) {
      param_3->st_size = -2;
      piVar3 = __errno_location();
      iVar1 = *piVar3;
      param_3->st_ino = (long)iVar1;
      goto LAB_00403ce3;
    }
    lVar2 = param_3->st_size;
  }
  if (-1 < lVar2) {
    return 0;
  }
  piVar3 = __errno_location();
  iVar1 = *(int *)&param_3->st_ino;
LAB_00403ce3:
  *piVar3 = iVar1;
  return 0xffffffff;
}


undefined8
FUN_00403d00(long param_1,long param_2,char param_3,char *param_4,int param_5,undefined4 *param_6)

{
  char *__file;
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  DIR *__dirp;
  int *piVar6;
  dirent *pdVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined local_c8 [24];
  uint local_b0;
  undefined8 local_98;
  
  iVar5 = *(int *)(param_1 + 0x2c);
  uVar10 = *(undefined8 *)(param_2 + 0x38);
  __file = *(char **)(param_2 + 0x30);
  if (param_6 == (undefined4 *)0x0) {
    local_98 = 0xffffffffffffffff;
    uVar12 = ~-(uint)(param_3 == '\0') & 4;
    if (param_3 != '\0') {
      param_3 = '\0';
    }
  }
  else {
    *param_6 = 2;
    local_98 = 0xffffffffffffffff;
    uVar12 = (uint)(param_3 != '\0') << 2;
    iVar3 = openat(iVar5,__file,0x30900);
    if (iVar3 < 0) {
LAB_00403db7:
      __dirp = (DIR *)0x0;
      uVar4 = 3;
    }
    else {
      __dirp = fdopendir(iVar3);
      if (__dirp != (DIR *)0x0) {
        piVar6 = __errno_location();
        *piVar6 = 0;
        do {
          pdVar7 = readdir(__dirp);
          if (pdVar7 == (dirent *)0x0) {
            iVar3 = *piVar6;
            closedir(__dirp);
            if (iVar3 != 0) goto LAB_00403db7;
            __dirp = (DIR *)0x1;
            uVar4 = 4;
            goto LAB_00403dbf;
          }
        } while ((pdVar7->d_name[0] == '.') &&
                ((pdVar7->d_name[(ulong)(pdVar7->d_name[1] == '.') + 1] == '\0' ||
                 (pdVar7->d_name[(ulong)(pdVar7->d_name[1] == '.') + 1] == '/'))));
        closedir(__dirp);
        goto LAB_00403db7;
      }
      close(iVar3);
      uVar4 = 3;
    }
LAB_00403dbf:
    param_3 = (char)__dirp;
    *param_6 = uVar4;
  }
  if (*(long *)(param_2 + 0x20) == 0) {
    iVar3 = *(int *)(param_4 + 4);
    if (iVar3 != 5) {
      if (*param_4 == '\0') {
        if ((iVar3 == 3) || (param_4[0x18] != '\0')) {
          cVar2 = FUN_004100a0();
          if (cVar2 != '\0') {
LAB_00403f10:
            iVar3 = *(int *)(param_4 + 4);
            goto LAB_00403f13;
          }
          iVar3 = FUN_00403c90(iVar5,__file,local_c8);
          if (iVar3 != 0) goto LAB_004040e0;
          if (((local_b0 & 0xf000) == 0xa000) ||
             (iVar3 = faccessat(iVar5,__file,2,0x200), iVar3 == 0)) goto LAB_00403f10;
          piVar6 = __errno_location();
          iVar3 = *piVar6;
          if (iVar3 == 0xd) {
            bVar1 = true;
            goto LAB_00403f1b;
          }
LAB_004040e8:
          uVar10 = FUN_0040dd80(4,uVar10);
LAB_00403f5d:
          uVar11 = dcgettext(0,"cannot remove %s",5);
          error(0,iVar3,uVar11,uVar10);
          return 4;
        }
      }
      else {
LAB_00403f13:
        if (iVar3 == 3) {
          bVar1 = false;
LAB_00403f1b:
          if (uVar12 == 0) {
            iVar3 = FUN_00403c90(iVar5,__file,local_c8);
            if (iVar3 != 0) {
LAB_004040e0:
              piVar6 = __errno_location();
              iVar3 = *piVar6;
              goto LAB_004040e8;
            }
            if ((local_b0 & 0xf000) == 0xa000) {
              if (*(int *)(param_4 + 4) != 3) goto LAB_00403ee0;
            }
            else if ((local_b0 & 0xf000) == 0x4000) goto LAB_00403f2c;
LAB_004040c7:
            uVar10 = FUN_0040dd80(4,uVar10);
LAB_00403e75:
            iVar5 = FUN_00403c90(iVar5,__file,local_c8);
            if (iVar5 != 0) {
              uVar11 = dcgettext(0,"cannot remove %s",5);
              piVar6 = __errno_location();
              error(0,*piVar6,uVar11,uVar10);
              return 4;
            }
            uVar8 = FUN_0040ac30(local_c8);
            uVar11 = DAT_0061d940;
            if (bVar1) {
              uVar9 = dcgettext(0,"%s: remove write-protected %s %s? ",5);
            }
            else {
              uVar9 = dcgettext(0,"%s: remove %s %s? ",5);
            }
            __fprintf_chk(stderr,1,uVar9,uVar11,uVar8,uVar10);
          }
          else {
            if (uVar12 != 4) goto LAB_004040c7;
LAB_00403f2c:
            if (param_4[9] == '\0') {
              if ((param_4[10] == '\0') || (param_3 == '\0')) {
                iVar3 = 0x15;
                uVar10 = FUN_0040dd80(4,uVar10);
                goto LAB_00403f5d;
              }
              goto LAB_004040c7;
            }
            uVar10 = FUN_0040dd80(4,uVar10);
            uVar11 = DAT_0061d940;
            if ((param_5 != 2) || (param_3 != '\0')) goto LAB_00403e75;
            if (bVar1) {
              uVar8 = dcgettext(0,"%s: descend into write-protected directory %s? ",5);
            }
            else {
              uVar8 = dcgettext(0,"%s: descend into directory %s? ",5);
            }
            __fprintf_chk(stderr,1,uVar8,uVar11,uVar10);
          }
          cVar2 = FUN_004103f0();
          if (cVar2 == '\0') goto LAB_00403f00;
        }
      }
    }
LAB_00403ee0:
    uVar10 = 2;
  }
  else {
LAB_00403f00:
    uVar10 = 3;
  }
  return uVar10;
}


int FUN_004041b0(long *param_1,long param_2)

{
  ushort uVar1;
  undefined2 uVar2;
  long *plVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  DIR *__dirp;
  dirent *pdVar9;
  char *pcVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined4 uVar15;
  byte *pbVar16;
  byte *pbVar17;
  int iVar18;
  bool bVar19;
  bool bVar20;
  byte bVar21;
  int local_3c [3];
  
  bVar21 = 0;
  if (*param_1 == 0) {
    return 2;
  }
  iVar18 = 2;
  lVar6 = FUN_00410370(param_1,(-(uint)(*(char *)(param_2 + 8) == '\0') & 0xffffffc0) + 600,0);
LAB_004041f0:
  lVar7 = fts_read(lVar6);
  do {
    if (lVar7 == 0) {
      piVar8 = __errno_location();
      if (*piVar8 == 0) {
        iVar5 = fts_close(lVar6);
      }
      else {
        iVar18 = 4;
        uVar12 = dcgettext(0,"fts_read failed",5);
        error(0,*piVar8,uVar12);
        iVar5 = fts_close(lVar6);
      }
      if (iVar5 != 0) {
        uVar12 = dcgettext(0,"fts_close failed",5);
        error(0,*piVar8,uVar12);
        return 4;
      }
      return iVar18;
    }
    uVar1 = *(ushort *)(lVar7 + 0x70);
    switch(uVar1) {
    default:
      uVar12 = FUN_0040de50(0,3,*(undefined8 *)(lVar7 + 0x38));
      uVar2 = *(undefined2 *)(lVar7 + 0x70);
      uVar13 = dcgettext(0,"unexpected failure: fts_info=%d: %s\nplease report to %s",5);
      error(0,0,uVar13,uVar2,uVar12,"bug-coreutils@gnu.org");
                    /* WARNING: Subroutine does not return */
      abort();
    case 1:
      if (*(char *)(param_2 + 9) == '\0') {
        if (*(char *)(param_2 + 10) == '\0') {
LAB_00404530:
          uVar12 = 0x15;
        }
        else {
          iVar5 = openat(*(int *)(lVar6 + 0x2c),*(char **)(lVar7 + 0x30),0x30900);
          if (-1 < iVar5) {
            __dirp = fdopendir(iVar5);
            if (__dirp == (DIR *)0x0) {
              close(iVar5);
            }
            else {
              piVar8 = __errno_location();
              *piVar8 = 0;
              do {
                pdVar9 = readdir(__dirp);
                if (pdVar9 == (dirent *)0x0) {
                  iVar5 = *piVar8;
                  closedir(__dirp);
                  if (iVar5 != 0) goto LAB_004043f8;
                  goto LAB_00404420;
                }
              } while ((pdVar9->d_name[0] == '.') &&
                      ((pdVar9->d_name[(ulong)(pdVar9->d_name[1] == '.') + 1] == '\0' ||
                       (pdVar9->d_name[(ulong)(pdVar9->d_name[1] == '.') + 1] == '/'))));
              closedir(__dirp);
            }
          }
LAB_004043f8:
          if (*(char *)(param_2 + 10) == '\0') goto LAB_00404530;
          uVar12 = 0x27;
        }
        uVar13 = FUN_0040dd80(4,*(undefined8 *)(lVar7 + 0x38));
        uVar11 = dcgettext(0,"cannot remove %s",5);
        error(0,uVar12,uVar11,uVar13);
        lVar14 = *(long *)(lVar7 + 8);
        lVar4 = *(long *)(lVar14 + 0x58);
        while ((-1 < lVar4 && (*(long *)(lVar14 + 0x20) == 0))) {
          *(undefined8 *)(lVar14 + 0x20) = 1;
          lVar14 = *(long *)(lVar14 + 8);
          lVar4 = *(long *)(lVar14 + 0x58);
        }
        goto LAB_00404256;
      }
LAB_00404420:
      if (*(long *)(lVar7 + 0x58) == 0) {
        pcVar10 = (char *)FUN_0040aa00(*(undefined8 *)(lVar7 + 0x30));
        if ((*pcVar10 == '.') &&
           ((pcVar10[(ulong)(pcVar10[1] == '.') + 1] == '\0' ||
            (pcVar10[(ulong)(pcVar10[1] == '.') + 1] == '/')))) {
          FUN_0040dca0(2,4,*(undefined8 *)(lVar7 + 0x38));
          uVar12 = FUN_0040dca0(1,4,&DAT_00415fd6);
          uVar13 = FUN_0040dca0(0,4,&DAT_00415fd7);
          uVar11 = dcgettext(0,"refusing to remove %s or %s directory: skipping %s",5);
          error(0,0,uVar11,uVar13,uVar12);
          goto LAB_00404256;
        }
        plVar3 = *(long **)(param_2 + 0x10);
        if ((plVar3 != (long *)0x0) && (*(long *)(lVar7 + 0x80) == *plVar3)) {
          bVar19 = *(ulong *)(lVar7 + 0x78) < (ulong)plVar3[1];
          bVar20 = *(ulong *)(lVar7 + 0x78) == plVar3[1];
          if (bVar20) {
            lVar14 = 2;
            pbVar16 = *(byte **)(lVar7 + 0x38);
            pbVar17 = &DAT_00416f8e;
            do {
              if (lVar14 == 0) break;
              lVar14 = lVar14 + -1;
              bVar19 = *pbVar16 < *pbVar17;
              bVar20 = *pbVar16 == *pbVar17;
              pbVar16 = pbVar16 + (ulong)bVar21 * -2 + 1;
              pbVar17 = pbVar17 + (ulong)bVar21 * -2 + 1;
            } while (bVar20);
            if ((!bVar19 && !bVar20) == bVar19) {
              uVar12 = FUN_0040dd80(4,*(byte **)(lVar7 + 0x38));
              uVar13 = dcgettext(0,"it is dangerous to operate recursively on %s",5);
              error(0,0,uVar13,uVar12);
            }
            else {
              uVar12 = FUN_0040dca0(1,4,&DAT_00416f8e);
              uVar13 = FUN_0040dca0(0,4,*(undefined8 *)(lVar7 + 0x38));
              uVar11 = dcgettext(0,"it is dangerous to operate recursively on %s (same as %s)",5);
              error(0,0,uVar11,uVar13,uVar12);
            }
            uVar12 = dcgettext(0,"use --no-preserve-root to override this failsafe",5);
            error(0,0,uVar12);
            goto LAB_00404256;
          }
        }
      }
      iVar5 = FUN_00403d00(lVar6,lVar7,1,param_2,2,local_3c);
      if (iVar5 == 2) {
        if (local_3c[0] != 4) goto LAB_004041f0;
        iVar5 = FUN_00403a80(lVar6,lVar7,param_2,1);
        fts_set(lVar6,lVar7,4);
        fts_read(lVar6);
        if (iVar5 == 2) goto LAB_004041f0;
      }
      lVar14 = *(long *)(lVar7 + 8);
      lVar4 = *(long *)(lVar14 + 0x58);
      while ((-1 < lVar4 && (*(long *)(lVar14 + 0x20) == 0))) {
        *(undefined8 *)(lVar14 + 0x20) = 1;
        lVar14 = *(long *)(lVar14 + 8);
        lVar4 = *(long *)(lVar14 + 0x58);
      }
      fts_set(lVar6,lVar7,4);
      fts_read(lVar6);
      goto LAB_0040431c;
    case 2:
      uVar12 = FUN_0040de50(0,3,*(undefined8 *)(lVar7 + 0x38));
      uVar13 = dcgettext(0,
                         "WARNING: Circular directory structure.\nThis almost certainly means that you have a corrupted file system.\nNOTIFY YOUR SYSTEM MANAGER.\nThe following directory is part of the cycle:\n  %s\n"
                         ,5);
      uVar15 = 0;
      break;
    case 3:
    case 4:
    case 6:
    case 8:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
      goto switchD_00404215_caseD_3;
    case 7:
      uVar12 = FUN_0040de50(0,3,*(undefined8 *)(lVar7 + 0x38));
      uVar13 = dcgettext(0,"traversal failed: %s",5);
      uVar15 = *(undefined4 *)(lVar7 + 0x40);
    }
    error(0,uVar15,uVar13,uVar12);
LAB_00404256:
    iVar18 = 4;
    fts_set(lVar6,lVar7,4);
    fts_read(lVar6);
    lVar7 = fts_read();
  } while( true );
switchD_00404215_caseD_3:
  if ((((uVar1 == 6) && (*(char *)(param_2 + 8) != '\0')) && (0 < *(long *)(lVar7 + 0x58))) &&
     (*(long *)(lVar7 + 0x78) != *(long *)(lVar6 + 0x18))) {
    lVar14 = *(long *)(lVar7 + 8);
    lVar4 = *(long *)(lVar14 + 0x58);
    while ((-1 < lVar4 && (*(long *)(lVar14 + 0x20) == 0))) {
      *(undefined8 *)(lVar14 + 0x20) = 1;
      lVar14 = *(long *)(lVar14 + 8);
      lVar4 = *(long *)(lVar14 + 0x58);
    }
    iVar18 = 4;
    uVar12 = FUN_0040dd80(4,*(undefined8 *)(lVar7 + 0x38));
    uVar13 = dcgettext(0,"skipping %s, since it\'s on a different device",5);
    error(0,0,uVar13,uVar12);
  }
  else {
    bVar19 = (uVar1 & 0xfffd) == 4;
    iVar5 = FUN_00403d00(lVar6,lVar7,bVar19,param_2,3,0);
    if (iVar5 == 2) {
      iVar5 = FUN_00403a80(lVar6,lVar7,param_2,bVar19);
    }
LAB_0040431c:
    if (2 < iVar5 - 2U) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("VALID_STATUS (s)","src/remove.c",0x23e,"rm");
    }
    if (iVar5 == 4) {
      iVar18 = 4;
    }
    else if ((iVar5 == 3) && (iVar18 == 2)) {
      iVar18 = 3;
    }
  }
  goto LAB_004041f0;
}


ulong FUN_00404890(char *param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  undefined4 extraout_var;
  
  if ((param_2 & 0xf000) == 0xa000) {
    return 1;
  }
  cVar1 = FUN_004100a0();
  if (cVar1 != '\0') {
    return 1;
  }
  iVar2 = euidaccess(param_1,2);
  return CONCAT44(extraout_var,iVar2) & 0xffffffffffffff00 | (ulong)(iVar2 == 0);
}


undefined8 FUN_004048e0(undefined4 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if ((DAT_0061d900 == (undefined *)0x0) &&
     (DAT_0061d900 = (undefined *)calloc(DAT_0061d3f8,1), DAT_0061d900 == (undefined *)0x0)) {
    DAT_0061d900 = &DAT_0061d500;
    DAT_0061d3f8 = 0x400;
  }
  if (param_2 != 0) {
    do {
      uVar2 = param_2;
      if (DAT_0061d3f8 <= param_2) {
        uVar2 = DAT_0061d3f8;
      }
      uVar1 = FUN_0040afb0(param_1,DAT_0061d900,uVar2);
      if (uVar1 != uVar2) {
        return 0;
      }
      param_2 = param_2 - uVar1;
    } while (param_2 != 0);
  }
  return 1;
}


int FUN_00404990(int param_1,__off_t param_2,__off_t param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = fallocate(param_1,3,param_2,param_3);
  if (iVar1 < 0) {
    piVar2 = __errno_location();
    if ((*piVar2 == 0x26) || (*piVar2 == 0x5f)) {
      return 0;
    }
  }
  return iVar1;
}


void FUN_004049d0(int param_1,char *param_2,__mode_t param_3)

{
  if (param_1 < 0) {
    chmod(param_2,param_3);
    return;
  }
  fchmod(param_1,param_3);
  return;
}


void FUN_004049f0(void)

{
  char *pcVar1;
  uint *puVar2;
  undefined8 uVar3;
  long extraout_RDX;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 in_R8;
  undefined8 in_R9;
  
  puVar2 = (uint *)__errno_location();
  *puVar2 = 0x5f;
  uVar3 = dcgettext(0,"failed to restore the default file creation context",5);
  uVar4 = (ulong)*puVar2;
  uVar5 = 1;
  error(1,uVar4,uVar3);
  uVar3 = FUN_0040dca0(1,4,uVar4);
  uVar5 = FUN_0040dca0(0,4,uVar5);
  __printf_chk(1,"%s -> %s",uVar5,uVar3,in_R8,in_R9,puVar2);
  if (extraout_RDX != 0) {
    uVar3 = FUN_0040dd80(4,extraout_RDX);
    uVar5 = dcgettext(0," (backup: %s)",5);
    __printf_chk(1,uVar5,uVar3);
  }
  pcVar1 = stdout->_IO_write_ptr;
  if (pcVar1 < stdout->_IO_write_end) {
    stdout->_IO_write_ptr = pcVar1 + 1;
    *pcVar1 = '\n';
    return;
  }
  __overflow(stdout,10);
  return;
}


void FUN_00404a30(undefined8 param_1,undefined8 param_2,long param_3)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_0040dca0(1,4,param_2);
  uVar3 = FUN_0040dca0(0,4,param_1);
  __printf_chk(1,"%s -> %s",uVar3,uVar2);
  if (param_3 != 0) {
    uVar2 = FUN_0040dd80(4,param_3);
    uVar3 = dcgettext(0," (backup: %s)",5);
    __printf_chk(1,uVar3,uVar2);
  }
  pcVar1 = stdout->_IO_write_ptr;
  if (pcVar1 < stdout->_IO_write_end) {
    stdout->_IO_write_ptr = pcVar1 + 1;
    *pcVar1 = '\n';
    return;
  }
  __overflow(stdout,10);
  return;
}


void FUN_00404ae0(long param_1,undefined8 param_2,uint *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined local_34;
  undefined local_33 [9];
  undefined local_2a;
  
  cVar3 = FUN_00404890(param_2,*param_3);
  if (cVar3 == '\0') {
    FUN_0040ad20(*param_3,&local_34);
    uVar1 = *param_3;
    local_2a = 0;
    uVar4 = FUN_0040dd80(4,param_2);
    uVar2 = DAT_0061d940;
    if ((*(char *)(param_1 + 0x18) == '\0') && ((*(uint *)(param_1 + 0x14) & 0xffff00) == 0)) {
      uVar5 = dcgettext(0,"%s: unwritable %s (mode %04lo, %s); try anyway? ",5);
    }
    else {
      uVar5 = dcgettext(0,"%s: replace %s, overriding mode %04lo (%s)? ",5);
    }
    __fprintf_chk(stderr,1,uVar5,uVar2,uVar4,uVar1 & 0xfff,local_33);
    FUN_004103f0();
    return;
  }
  uVar4 = FUN_0040dd80(4,param_2);
  uVar2 = DAT_0061d940;
  uVar5 = dcgettext(0,"%s: overwrite %s? ",5);
  __fprintf_chk(stderr,1,uVar5,uVar2,uVar4);
  FUN_004103f0();
  return;
}


ulong FUN_00404c10(ulong param_1,undefined8 param_2,undefined param_3,byte param_4,char param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int *piVar5;
  
  iVar1 = FUN_00409b50(0xffffff9c,param_1,0xffffff9c,param_2,(ulong)(param_5 != '\0') << 10,param_3)
  ;
  if (iVar1 < 0) {
    uVar2 = FUN_0040dca0(1,4,param_1);
    uVar3 = FUN_0040dca0(0,4,param_2);
    uVar4 = dcgettext(0,"cannot create hard link %s to %s",5);
    piVar5 = __errno_location();
    error(0,*piVar5,uVar4,uVar3,uVar2);
    return 0;
  }
  param_4 = 0 < iVar1 & param_4;
  if (param_4 == 0) {
    return 1;
  }
  uVar2 = FUN_0040dd80(4,param_2);
  uVar3 = dcgettext(0,"removed %s\n",5);
  __printf_chk(1,uVar3,uVar2);
  return param_1 & 0xffffff00 | (ulong)param_4;
}


undefined8 FUN_00404d20(int param_1,undefined8 param_2,char param_3,long param_4)

{
  int iVar1;
  __off_t _Var2;
  undefined8 uVar3;
  undefined8 uVar4;
  int *piVar5;
  char *pcVar6;
  
  _Var2 = lseek(param_1,param_4,1);
  if (_Var2 < 0) {
    uVar3 = FUN_0040dd80(4,param_2);
    pcVar6 = "cannot lseek %s";
LAB_00404daa:
    uVar4 = dcgettext(0,pcVar6,5);
    piVar5 = __errno_location();
    error(0,*piVar5,uVar4,uVar3);
    return 0;
  }
  if (param_3 != '\0') {
    iVar1 = FUN_00404990(param_1,_Var2 - param_4,param_4);
    if (iVar1 < 0) {
      uVar3 = FUN_0040dd80(4,param_2);
      pcVar6 = "error deallocating %s";
      goto LAB_00404daa;
    }
  }
  return 1;
}


ulong FUN_00404de0(int param_1,undefined4 param_2,char *param_3,ulong param_4,ulong param_5,
                  undefined param_6,undefined8 param_7,undefined8 param_8,ulong param_9,
                  long *param_10,undefined *param_11)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  size_t __n;
  ulong uVar10;
  bool bVar11;
  uint unaff_EBP;
  uint uVar12;
  char *__s2;
  char *pcVar13;
  ulong uVar14;
  char *__s1;
  byte bVar15;
  ulong uVar16;
  byte local_8a;
  ulong local_80;
  
  *param_11 = 0;
  local_80 = param_9;
  *param_10 = 0;
  if (param_9 != 0) {
    uVar9 = param_5;
    if (param_5 == 0) {
      uVar9 = param_4;
    }
    uVar16 = 0;
    uVar3 = 0;
    do {
      while( true ) {
        uVar4 = local_80;
        if (param_4 <= local_80) {
          uVar4 = param_4;
        }
        uVar4 = read(param_1,param_3,uVar4);
        if (-1 < (long)uVar4) break;
        piVar5 = __errno_location();
        if (*piVar5 != 4) {
          uVar6 = FUN_0040dd80(4,param_7);
          uVar7 = dcgettext(0,"error reading %s",5);
          error(0,*piVar5,uVar7,uVar6);
          return 0;
        }
      }
      if (uVar4 == 0) break;
      *param_10 = *param_10 + uVar4;
      uVar10 = uVar9;
      pcVar13 = param_3;
      uVar14 = uVar4;
      __s1 = param_3;
LAB_00404f30:
      do {
        if (uVar14 < uVar10) {
          uVar10 = uVar14;
        }
        bVar11 = uVar10 != 0 && param_5 != 0;
        uVar12 = unaff_EBP & 0xffffff00 | (uint)bVar11;
        bVar15 = (byte)uVar3;
        __n = uVar10;
        __s2 = __s1;
        if (uVar10 != 0 && param_5 != 0) {
          do {
            if (*__s2 != '\0') {
              uVar12 = 0;
              uVar1 = uVar3;
              goto LAB_00404f8d;
            }
            __s2 = __s2 + 1;
            __n = __n - 1;
            if (__n == 0) {
              local_8a = (bVar15 ^ 1) & uVar16 != 0;
              goto LAB_00405090;
            }
          } while ((__n & 0xf) != 0);
          iVar2 = memcmp(__s1,__s2,__n);
          uVar12 = unaff_EBP & 0xffffff00 | (uint)(iVar2 == 0);
          bVar11 = iVar2 != 0;
          uVar1 = uVar12 ^ uVar3;
LAB_00404f8d:
          local_8a = uVar16 != 0 & (byte)uVar1;
          if ((uVar10 == uVar14) && (bVar11)) {
            if (local_8a == 0) {
              uVar12 = 0;
              goto LAB_00405030;
            }
            bVar11 = true;
            uVar12 = 0;
          }
          else {
LAB_00405090:
            if (local_8a == 0) goto LAB_00405099;
            bVar11 = false;
          }
joined_r0x00405046:
          if (bVar15 == 0) {
            uVar8 = FUN_0040afb0(param_2,pcVar13,uVar16);
            if (uVar16 != uVar8) {
              uVar6 = FUN_0040dd80(4,param_8);
              uVar7 = dcgettext(0,"error writing %s",5);
              piVar5 = __errno_location();
              error(0,*piVar5,uVar7,uVar6);
              return (ulong)uVar3;
            }
          }
          else {
            uVar3 = FUN_00404d20(param_2,param_8,param_6,uVar16);
            if ((char)uVar3 == '\0') {
              return (ulong)uVar3;
            }
          }
          pcVar13 = __s1;
          uVar16 = uVar10;
          uVar3 = uVar12;
          if (bVar11) {
            if (uVar10 == 0) {
              uVar16 = 0;
              break;
            }
            if (local_8a != 0) {
              uVar10 = 0;
              unaff_EBP = uVar12;
              goto LAB_00404f30;
            }
            uVar14 = uVar14 - uVar10;
            uVar16 = 0;
          }
          else {
            uVar14 = uVar14 - uVar10;
          }
        }
        else {
          uVar12 = uVar3;
          if (((uVar10 == uVar14 & (bVar15 ^ 1)) != 0) || (uVar10 == 0)) {
LAB_00405030:
            uVar16 = uVar16 + uVar10;
            bVar11 = true;
            local_8a = 0;
            goto joined_r0x00405046;
          }
LAB_00405099:
          uVar3 = uVar12;
          if (0x7fffffffffffffff - uVar10 < uVar16) {
            uVar6 = FUN_0040dd80(4,param_7);
            uVar7 = dcgettext(0,"overflow reading %s",5);
            error(0,0,uVar7,uVar6);
            return 0;
          }
          uVar16 = uVar16 + uVar10;
          uVar14 = uVar14 - uVar10;
        }
        __s1 = __s1 + uVar10;
        unaff_EBP = uVar3;
      } while (uVar14 != 0);
      local_80 = local_80 - uVar4;
      *param_11 = (char)uVar3;
      unaff_EBP = uVar3;
    } while (local_80 != 0);
    if ((char)uVar3 != '\0') {
      uVar9 = FUN_00404d20(param_2,param_8,param_6,uVar16);
      return uVar9;
    }
  }
  return 1;
}


uint FUN_00405210(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4,long param_5
                 )

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  
  if (*(char *)(param_5 + 0x25) != '\0') {
    piVar1 = __errno_location();
    if ((*(char *)(param_5 + 0x23) == '\0') || (bVar4 = *(byte *)(param_5 + 0x26), bVar4 != 0)) {
      *piVar1 = 0x5f;
      uVar2 = FUN_0040dd80(4,param_1);
      uVar3 = dcgettext(0,"failed to get security context of %s",5);
      error(0,*piVar1,uVar3,uVar2);
      bVar4 = *(byte *)(param_5 + 0x26);
    }
    else {
      *piVar1 = 0x5f;
    }
    return bVar4 ^ 1;
  }
  bVar4 = (byte)param_4 & *(byte *)(param_5 + 0x21);
  if (bVar4 == 0) {
    return 1;
  }
  piVar1 = __errno_location();
  *piVar1 = 0x5f;
  return param_4 & 0xffffff00 | (uint)bVar4;
}


undefined8 FUN_004052e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  piVar1 = __errno_location();
  if ((*(char *)(param_4 + 0x23) != '\0') && (*(char *)(param_4 + 0x26) == '\0')) {
    *piVar1 = 0x5f;
    return 0;
  }
  *piVar1 = 0x5f;
  uVar2 = FUN_0040dca0(0,4,param_1);
  uVar3 = dcgettext(0,"failed to set the security context of %s",5);
  error(0,*piVar1,uVar3,uVar2);
  return 0;
}


void FUN_00405360(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0040b8c0(0x3d,0,FUN_0040c280,FUN_0040c2c0,FUN_0040c330);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  return;
}


void FUN_00405390(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0040b8c0(0x3d,0,FUN_0040c2b0,FUN_0040c2c0,FUN_0040c330);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  return;
}


void FUN_004053c0(undefined (*param_1) [16])

{
  __uid_t _Var1;
  
  *(undefined8 *)param_1[4] = 0;
  *param_1 = (undefined  [16])0x0;
  param_1[1] = (undefined  [16])0x0;
  param_1[2] = (undefined  [16])0x0;
  param_1[3] = (undefined  [16])0x0;
  _Var1 = geteuid();
  param_1[1][0xb] = _Var1 == 0;
  param_1[1][10] = _Var1 == 0;
  return;
}


ulong FUN_00405400(long param_1)

{
  bool bVar1;
  int *piVar2;
  ulong uVar3;
  
  piVar2 = __errno_location();
  bVar1 = *piVar2 == 1 || *piVar2 == 0x16;
  uVar3 = (ulong)piVar2 & 0xffffffffffffff00 | (ulong)bVar1;
  if (bVar1) {
    uVar3 = (ulong)(*(byte *)(param_1 + 0x1a) ^ 1);
  }
  return uVar3;
}


int FUN_00405430(long param_1,char *param_2,int param_3,long param_4,char param_5,long param_6)

{
  __uid_t __owner;
  __gid_t __group;
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  
  __owner = *(__uid_t *)(param_4 + 0x1c);
  __group = *(__gid_t *)(param_4 + 0x20);
  if (param_5 == '\0') {
    if ((*(ulong *)(param_1 + 0x18) & 0xff0000000000ff) == 0) {
      if (*(char *)(param_1 + 0x2b) == '\0') goto LAB_004054a0;
      uVar7 = *(uint *)(param_6 + 0x18);
      uVar6 = *(uint *)(param_1 + 0x10);
    }
    else {
      uVar7 = *(uint *)(param_6 + 0x18);
      uVar6 = *(uint *)(param_4 + 0x18);
    }
    if ((((ushort)(~(ushort)uVar6 | 0xe00) & uVar7 & 0xfff) != 0) &&
       (iVar2 = FUN_0040c430(param_2,param_3,uVar6 & uVar7 & 0x1c0), iVar2 != 0)) {
      piVar3 = __errno_location();
      if (((*piVar3 != 1) && (*piVar3 != 0x16)) || (*(char *)(param_1 + 0x1b) != '\0')) {
        uVar4 = FUN_0040dd80(4,param_2);
        uVar5 = dcgettext(0,"clearing permissions for %s",5);
        error(0,*piVar3,uVar5,uVar4);
      }
      goto LAB_00405592;
    }
  }
LAB_004054a0:
  if (param_3 == -1) {
    iVar2 = lchown(param_2,__owner,__group);
    if (iVar2 == 0) {
      return 1;
    }
    piVar3 = __errno_location();
    iVar2 = *piVar3;
    if ((iVar2 == 1) || (iVar2 == 0x16)) {
      lchown(param_2,0xffffffff,__group);
      *piVar3 = iVar2;
    }
  }
  else {
    iVar2 = fchown(param_3,__owner,__group);
    if (iVar2 == 0) {
      return 1;
    }
    piVar3 = __errno_location();
    iVar2 = *piVar3;
    if ((iVar2 == 1) || (iVar2 == 0x16)) {
      fchown(param_3,0xffffffff,__group);
      *piVar3 = iVar2;
    }
  }
  cVar1 = FUN_00405400(param_1);
  if (cVar1 != '\0') {
    return 0;
  }
  uVar4 = FUN_0040dd80(4,param_2);
  uVar5 = dcgettext(0,"failed to preserve ownership for %s",5);
  piVar3 = __errno_location();
  error(0,*piVar3,uVar5,uVar4);
LAB_00405592:
  return -(uint)*(byte *)(param_1 + 0x24);
}


__mode_t FUN_00405620(void)

{
  __mode_t __mask;
  
  if (DAT_0061d3f0 != 0xffffffff) {
    return DAT_0061d3f0;
  }
  __mask = umask(0);
  DAT_0061d3f0 = __mask;
  umask(__mask);
  return __mask;
}


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Could not reconcile some variable overlaps */

uint FUN_00405650(byte **param_1,byte **param_2,uint param_3,stat *param_4,byte **param_5,
                 byte **param_6,uint param_7,byte *param_8,byte *param_9,undefined *param_10)

{
  stat **ppsVar1;
  stat *psVar2;
  byte **ppbVar3;
  __gid_t __group;
  char cVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  __uid_t _Var14;
  int *piVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  byte *__filename;
  size_t sVar19;
  void *pvVar20;
  void *__ptr;
  ulong uVar21;
  stat *psVar22;
  uint *puVar23;
  byte **ppbVar24;
  byte *pbVar25;
  __off_t _Var26;
  char *pcVar27;
  char cVar28;
  long lVar29;
  stat *psVar30;
  ulong uVar31;
  undefined8 extraout_RDX;
  ulong uVar32;
  ulong extraout_RDX_00;
  stat *psVar33;
  undefined *puVar34;
  undefined *puVar35;
  undefined *puVar36;
  undefined *puVar37;
  undefined *puVar38;
  undefined *puVar39;
  undefined *puVar40;
  undefined *puVar41;
  char *pcVar42;
  stat *psVar43;
  byte *pbVar44;
  ulong uVar45;
  stat *psVar46;
  uint unaff_R15D;
  undefined uVar47;
  bool bVar48;
  undefined uVar49;
  undefined8 local_380;
  undefined auStack_378 [8];
  stat *local_370;
  byte **local_368;
  uint local_360;
  uint local_35c;
  long local_358;
  uint local_350;
  uint local_34c;
  byte **local_348;
  byte **local_340;
  byte **local_338;
  uint local_330;
  char local_32b;
  byte local_32a;
  byte local_329;
  stat *local_328;
  byte **local_320;
  stat *local_318;
  stat *local_310;
  stat *local_308;
  undefined8 local_300;
  stat *local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  stat *local_2e0;
  undefined8 local_2d8;
  uint local_2d0;
  uint local_2cc;
  undefined8 local_2c8;
  byte **local_2c0;
  byte local_2b1;
  char local_2b0;
  undefined7 uStack_2af;
  undefined local_2a8 [32];
  char local_288;
  char local_287;
  void *local_280;
  stat local_278;
  stat local_1e8;
  uint local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  __mode_t _Stack_140;
  __uid_t _Stack_13c;
  __gid_t local_138;
  int iStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined local_c8 [28];
  __uid_t _Stack_ac;
  byte *local_a8;
  byte *pbStack_a0;
  byte *local_98;
  byte **ppbStack_90;
  byte *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  bVar8 = 0;
  puVar41 = auStack_378;
  puVar38 = auStack_378;
  puVar40 = auStack_378;
  puVar36 = auStack_378;
  puVar39 = auStack_378;
  puVar35 = auStack_378;
  puVar37 = auStack_378;
  local_2c8 = (int *)((ulong)local_2c8 & 0xffffffffffffff00 | (ulong)(param_10 != (undefined *)0x0))
  ;
  uVar21 = (ulong)param_7;
  if ((*(char *)(param_6 + 3) != '\0') && (param_10 != (undefined *)0x0)) {
    *param_10 = 0;
  }
  iVar9 = *(int *)((long)param_6 + 4);
  *param_9 = 0;
  local_2e0 = &local_278;
  local_300 = param_4;
  local_2f0 = param_5;
  local_2c0 = param_2;
  if (iVar9 == 2) {
    local_380 = 0x405ee5;
    iVar9 = __lxstat(1,(char *)param_1,local_2e0);
    bVar48 = iVar9 != 0;
    uVar13 = unaff_R15D & 0xffffff00 | (uint)bVar48;
  }
  else {
    local_380 = 0x4056da;
    iVar9 = __xstat(1,(char *)param_1,local_2e0);
    bVar48 = iVar9 != 0;
    uVar13 = unaff_R15D & 0xffffff00 | (uint)bVar48;
  }
  puVar34 = auStack_378;
  if (bVar48) goto LAB_00405ef7;
  local_2d0 = local_278.st_mode;
  local_2cc = local_278.st_mode & 0xf000;
  bVar5 = (byte)param_7;
  if ((local_278.st_mode & 0xf000) == 0x4000) {
    if (*(char *)((long)param_6 + 0x2a) != '\0') {
      if (bVar5 != 0) goto LAB_0040635f;
      goto LAB_00405732;
    }
    local_380 = 0x40697a;
    uVar21 = FUN_0040dd80(4,param_1);
    uVar16 = 5;
    if (*(char *)((long)param_6 + 0x19) != '\0') {
      pcVar42 = "omitting directory %s";
LAB_00406992:
      local_380 = 0x406999;
      uVar16 = dcgettext(0,pcVar42,5);
      goto LAB_00406999;
    }
  }
  else {
    if (bVar5 != 0) {
      if (*(int *)param_6 == 0) {
        local_380 = 0x406357;
        bVar7 = FUN_0040abf0(param_6[8],param_1,local_2e0);
        if (bVar7 != 0) {
          local_2c0 = (byte **)((ulong)local_2c0 & 0xffffffffffffff00 | (ulong)bVar7);
          local_380 = 0x407343;
          uVar16 = FUN_0040dd80(4,param_1);
          local_380 = 0x407357;
          uVar17 = dcgettext(0,"warning: source file %s specified more than once",5);
          local_380 = 0x407368;
          error(0,0,uVar17,uVar16);
          return (uint)(byte)local_2c0;
        }
LAB_0040635f:
        local_380 = 0x406372;
        FUN_0040ab60(param_6[8],param_1,local_2e0);
      }
      else {
        local_380 = 0x405732;
        FUN_0040ab60(param_6[8],param_1,local_2e0);
      }
    }
LAB_00405732:
    pcVar42 = (char *)local_2e8;
    local_2e8 = (byte **)CONCAT44(local_2e8._4_4_,1);
    if (*(int *)((long)param_6 + 4) != 4) {
      local_2e8 = (byte **)((ulong)pcVar42 & 0xffffffff00000000 |
                           (ulong)(*(int *)((long)param_6 + 4) == 3 & param_7));
    }
    if ((char)param_3 == '\0') {
      if ((((local_2cc == 0x8000) ||
           (((*(char *)((long)param_6 + 0x14) != '\0' && (local_2cc != 0x4000)) &&
            (local_2cc != 0xa000)))) &&
          (((*(char *)(param_6 + 3) == '\0' && (*(char *)((long)param_6 + 0x2c) == '\0')) &&
           (*(char *)((long)param_6 + 0x17) == '\0')))) &&
         ((*(int *)param_6 == 0 && (*(char *)((long)param_6 + 0x15) == '\0')))) {
        local_2f8 = &local_1e8;
        local_380 = 0x4057e8;
        iVar9 = __xstat(1,(char *)local_2c0,local_2f8);
        uVar10 = 1;
        bVar48 = iVar9 != 0;
        local_2d8 = (stat *)((ulong)local_2d8 & 0xffffffffffffff00 | (ulong)bVar48);
      }
      else {
        local_2f8 = &local_1e8;
        local_380 = 0x406222;
        iVar9 = __lxstat(1,(char *)local_2c0,local_2f8);
        bVar48 = iVar9 != 0;
        local_2d8 = (stat *)((ulong)local_2d8 & 0xffffffffffffff00 | (ulong)bVar48);
        uVar10 = param_3;
      }
      local_308._0_1_ = (byte)uVar10;
      if (bVar48) {
        local_380 = 0x406240;
        piVar15 = __errno_location();
        if (*piVar15 != 2) {
          local_380 = 0x406264;
          local_2c8 = piVar15;
          uVar16 = FUN_0040dd80(4,local_2c0);
          local_380 = 0x406278;
          uVar17 = dcgettext(0,"cannot stat %s",5);
          local_380 = 0x406291;
          error(0,*local_2c8,uVar17,uVar16);
          return param_3;
        }
        goto LAB_00405a90;
      }
      if ((local_278.st_ino != local_1e8.st_ino) || (local_278.st_dev != local_1e8.st_dev)) {
        if (*(int *)((long)param_6 + 4) != 2) goto LAB_00405823;
        cVar4 = '\0';
        uVar10 = 0;
LAB_00406af5:
        psVar22 = local_2e0;
        psVar46 = local_2f8;
        if (((local_278.st_mode & 0xf000) == 0xa000) && ((local_1e8.st_mode & 0xf000) == 0xa000)) {
          local_310 = (stat *)((ulong)local_310 & 0xffffffff00000000 | (ulong)uVar10);
          local_308 = (stat *)((ulong)local_308 & 0xffffffffffffff00 | (ulong)(byte)local_308);
          local_380 = 0x4078c2;
          cVar4 = FUN_0040e2f0(param_1,local_2c0);
          if (cVar4 == '\0') {
            if ((*(int *)param_6 == 0) && ((uint)local_310 != 0)) {
              bVar7 = 1;
              bVar6 = *(byte *)(param_6 + 3) ^ 1;
              goto LAB_004078fb;
            }
            goto LAB_00405823;
          }
        }
        else {
LAB_00406b19:
          if (*(int *)param_6 == 0) {
            cVar28 = *(char *)(param_6 + 3);
            if ((cVar28 == '\0') && (*(char *)((long)param_6 + 0x15) == '\0')) {
              if ((psVar22->st_mode & 0xf000) != 0xa000) {
LAB_00407187:
                if ((psVar46->st_mode & 0xf000) != 0xa000) {
LAB_00407507:
                  if ((psVar22->st_ino != psVar46->st_ino) || (psVar22->st_dev != psVar46->st_dev))
                  goto LAB_00405823;
                  if (*(char *)((long)param_6 + 0x17) != '\0') goto LAB_00407320;
                }
LAB_0040719b:
                cVar28 = *(char *)(param_6 + 3);
                goto LAB_004071a0;
              }
            }
            else {
              if ((psVar46->st_mode & 0xf000) == 0xa000) goto LAB_00405823;
              if ((cVar4 != '\0') && (1 < psVar46->st_nlink)) {
                local_318 = (stat *)((ulong)local_318 & 0xffffffffffffff00 | (ulong)(byte)local_308)
                ;
                local_380 = 0x407fe5;
                local_310 = psVar46;
                local_308 = psVar22;
                bVar7 = FUN_0040e2f0(param_1,local_2c0);
                local_308._0_1_ = (byte)local_318;
                if (bVar7 != 0) {
                  psVar22 = local_308;
                  psVar46 = local_310;
                  if ((local_308->st_mode & 0xf000) != 0xa000) goto LAB_00407187;
                  goto LAB_0040719b;
                }
                bVar6 = *(byte *)(param_6 + 3) ^ 1;
                goto LAB_004078fb;
              }
              if ((psVar22->st_mode & 0xf000) != 0xa000) goto LAB_00407507;
LAB_004071a0:
              if (((cVar28 != '\0') && ((local_278.st_mode & 0xf000) == 0xa000)) &&
                 (1 < psVar46->st_nlink)) {
                local_318 = (stat *)((ulong)local_318 & 0xffffffffffffff00 | (ulong)(byte)local_308)
                ;
                local_380 = 0x4080cc;
                local_310 = psVar46;
                local_308 = psVar22;
                pcVar42 = canonicalize_file_name((char *)param_1);
                psVar22 = local_308;
                psVar46 = local_310;
                local_308._0_1_ = (byte)local_318;
                if (pcVar42 != (char *)0x0) {
                  local_308 = (stat *)((ulong)local_308 & 0xffffffffffffff00 |
                                      (ulong)local_318 & 0xff);
                  local_380 = 0x408108;
                  local_2d8 = (stat *)pcVar42;
                  bVar6 = FUN_0040e2f0(pcVar42,local_2c0);
                  bVar6 = bVar6 ^ 1;
                  local_380 = 0x40811d;
                  free(local_2d8);
                  bVar7 = 0;
                  goto LAB_004078fb;
                }
              }
            }
            if ((*(char *)((long)param_6 + 0x2c) == '\0') &&
               (((*(uint *)((long)param_6 + 0x14) & 0xff00ff00) == 0 ||
                ((psVar46->st_mode & 0xf000) != 0xa000)))) {
              if (*(int *)((long)param_6 + 4) == 2) {
                if ((psVar22->st_mode & 0xf000) == 0xa000) {
                  local_310 = (stat *)((ulong)local_310 & 0xffffffffffffff00 |
                                      (ulong)(byte)local_308);
                  local_380 = 0x408999;
                  local_308 = psVar46;
                  iVar9 = __xstat(1,(char *)param_1,(stat *)local_c8);
                  psVar46 = local_308;
                  local_308._0_1_ = (byte)local_310;
                  if (iVar9 != 0) goto LAB_00405823;
                }
                else {
                  local_c8._0_8_ = (byte *)psVar22->st_dev;
                  local_c8._8_8_ = (byte *)psVar22->st_ino;
                  local_c8._16_8_ = (byte *)psVar22->st_nlink;
                  stack0xffffffffffffff50 = *(byte **)&psVar22->st_mode;
                  local_a8 = *(byte **)&psVar22->st_gid;
                  pbStack_a0 = (byte *)psVar22->st_rdev;
                  local_98 = (byte *)psVar22->st_size;
                  ppbStack_90 = (byte **)psVar22->st_blksize;
                  local_88 = (byte *)psVar22->st_blocks;
                  uStack_80 = *(undefined4 *)&(psVar22->st_atim).tv_sec;
                  uStack_7c = *(undefined4 *)((long)&(psVar22->st_atim).tv_sec + 4);
                  local_78 = *(undefined4 *)&(psVar22->st_atim).tv_nsec;
                  uStack_74 = *(undefined4 *)((long)&(psVar22->st_atim).tv_nsec + 4);
                  uStack_70 = *(undefined4 *)&(psVar22->st_mtim).tv_sec;
                  uStack_6c = *(undefined4 *)((long)&(psVar22->st_mtim).tv_sec + 4);
                  local_68 = *(undefined4 *)&(psVar22->st_mtim).tv_nsec;
                  uStack_64 = *(undefined4 *)((long)&(psVar22->st_mtim).tv_nsec + 4);
                  uStack_60 = *(undefined4 *)&(psVar22->st_ctim).tv_sec;
                  uStack_5c = *(undefined4 *)((long)&(psVar22->st_ctim).tv_sec + 4);
                  local_58 = *(undefined4 *)&(psVar22->st_ctim).tv_nsec;
                  uStack_54 = *(undefined4 *)((long)&(psVar22->st_ctim).tv_nsec + 4);
                  uStack_50 = *(undefined4 *)psVar22->__unused;
                  uStack_4c = *(undefined4 *)((long)psVar22->__unused + 4);
                  local_48 = *(undefined4 *)(psVar22->__unused + 1);
                  uStack_44 = *(undefined4 *)((long)psVar22->__unused + 0xc);
                  uStack_40 = *(undefined4 *)(psVar22->__unused + 2);
                  uStack_3c = *(undefined4 *)((long)psVar22->__unused + 0x14);
                }
                if ((psVar46->st_mode & 0xf000) == 0xa000) {
                  local_308 = (stat *)((ulong)local_308 & 0xffffffffffffff00 |
                                      (ulong)(byte)local_308);
                  local_380 = 0x40895f;
                  iVar9 = __xstat(1,(char *)local_2c0,(stat *)&local_158);
                  if (iVar9 != 0) goto LAB_00405823;
                }
                else {
                  local_158 = *(uint *)&psVar46->st_dev;
                  uStack_154 = *(undefined4 *)((long)&psVar46->st_dev + 4);
                  uStack_150 = *(undefined4 *)&psVar46->st_ino;
                  uStack_14c = *(undefined4 *)((long)&psVar46->st_ino + 4);
                  local_148 = *(undefined4 *)&psVar46->st_nlink;
                  uStack_144 = *(undefined4 *)((long)&psVar46->st_nlink + 4);
                  _Stack_140 = psVar46->st_mode;
                  _Stack_13c = psVar46->st_uid;
                  local_138 = psVar46->st_gid;
                  iStack_134 = psVar46->__pad0;
                  uStack_130 = *(undefined4 *)&psVar46->st_rdev;
                  uStack_12c = *(undefined4 *)((long)&psVar46->st_rdev + 4);
                  local_128 = *(undefined4 *)&psVar46->st_size;
                  uStack_124 = *(undefined4 *)((long)&psVar46->st_size + 4);
                  uStack_120 = *(undefined4 *)&psVar46->st_blksize;
                  uStack_11c = *(undefined4 *)((long)&psVar46->st_blksize + 4);
                  local_118 = *(undefined4 *)&psVar46->st_blocks;
                  uStack_114 = *(undefined4 *)((long)&psVar46->st_blocks + 4);
                  uStack_110 = *(undefined4 *)&(psVar46->st_atim).tv_sec;
                  uStack_10c = *(undefined4 *)((long)&(psVar46->st_atim).tv_sec + 4);
                  local_108 = *(undefined4 *)&(psVar46->st_atim).tv_nsec;
                  uStack_104 = *(undefined4 *)((long)&(psVar46->st_atim).tv_nsec + 4);
                  uStack_100 = *(undefined4 *)&(psVar46->st_mtim).tv_sec;
                  uStack_fc = *(undefined4 *)((long)&(psVar46->st_mtim).tv_sec + 4);
                  local_f8 = *(undefined4 *)&(psVar46->st_mtim).tv_nsec;
                  uStack_f4 = *(undefined4 *)((long)&(psVar46->st_mtim).tv_nsec + 4);
                  uStack_f0 = *(undefined4 *)&(psVar46->st_ctim).tv_sec;
                  uStack_ec = *(undefined4 *)((long)&(psVar46->st_ctim).tv_sec + 4);
                  local_e8 = *(undefined4 *)&(psVar46->st_ctim).tv_nsec;
                  uStack_e4 = *(undefined4 *)((long)&(psVar46->st_ctim).tv_nsec + 4);
                  uStack_e0 = *(undefined4 *)psVar46->__unused;
                  uStack_dc = *(undefined4 *)((long)psVar46->__unused + 4);
                  local_d8 = *(undefined4 *)(psVar46->__unused + 1);
                  uStack_d4 = *(undefined4 *)((long)psVar46->__unused + 0xc);
                  uStack_d0 = *(undefined4 *)(psVar46->__unused + 2);
                  uStack_cc = *(undefined4 *)((long)psVar46->__unused + 0x14);
                }
                if ((local_c8._8_8_ != (byte *)CONCAT44(uStack_14c,uStack_150)) ||
                   (local_c8._0_8_ != (byte *)CONCAT44(uStack_154,local_158))) goto LAB_00405823;
                if (*(char *)((long)param_6 + 0x17) != '\0') goto LAB_00407320;
              }
              goto LAB_00406b70;
            }
            bVar6 = psVar46->st_dev == psVar22->st_dev;
            bVar7 = 0;
          }
          else {
            if (cVar4 == '\0') {
              if (((*(char *)(param_6 + 3) == '\0') && (*(int *)((long)param_6 + 4) != 2)) &&
                 (((psVar22->st_mode & 0xf000) == 0xa000 && ((psVar46->st_mode & 0xf000) != 0xa000))
                 )) goto LAB_00406b70;
              goto LAB_00405823;
            }
            local_2d8 = (stat *)((ulong)local_2d8 & 0xffffffffffffff00 | (ulong)(byte)local_308);
            local_380 = 0x407ddb;
            bVar6 = FUN_0040e2f0(param_1,local_2c0);
            bVar6 = bVar6 ^ 1;
            bVar7 = 0;
            local_308._0_1_ = (byte)local_2d8;
          }
LAB_004078fb:
          if (bVar6 != 0) {
            local_2d8 = (stat *)((ulong)local_2d8 & 0xffffffffffffff00 | (ulong)bVar7);
            goto LAB_00405823;
          }
        }
LAB_00406b70:
        local_380 = 0x406b86;
        uVar16 = FUN_0040dca0(1,4,local_2c0);
        local_380 = 0x406b98;
        uVar17 = FUN_0040dca0(0,4,param_1);
        pcVar42 = "%s and %s are the same file";
        puVar37 = auStack_378;
LAB_00405a68:
        *(undefined8 *)(puVar37 + -8) = 0x405a6f;
        uVar18 = dcgettext(0,pcVar42,5);
LAB_00405a78:
        *(undefined8 *)(puVar37 + -8) = 0x405a83;
        error(0,0,uVar18,uVar17,uVar16);
        return 0;
      }
      cVar4 = *(char *)((long)param_6 + 0x17);
      if (cVar4 == '\0') {
        if (*(int *)((long)param_6 + 4) == 2) {
          cVar4 = '\x01';
          uVar10 = 1;
          goto LAB_00406af5;
        }
        local_318 = (stat *)&local_158;
        local_308 = (stat *)((ulong)local_308 & 0xffffffffffffff00 | (ulong)(byte)local_308);
        local_380 = 0x406d1e;
        iVar9 = __lxstat(1,(char *)local_2c0,local_318);
        if (iVar9 == 0) {
          local_328 = (stat *)local_c8;
          local_380 = 0x406d4c;
          iVar9 = __lxstat(1,(char *)param_1,local_328);
          if (iVar9 == 0) {
            if (local_c8._8_8_ == (byte *)CONCAT44(uStack_14c,uStack_150)) {
              cVar4 = local_c8._0_8_ == (byte *)CONCAT44(uStack_154,local_158);
            }
            psVar22 = local_328;
            psVar46 = local_318;
            if ((((local_c8._24_4_ & 0xf000) != 0xa000) || ((_Stack_140 & 0xf000) != 0xa000)) ||
               (*(char *)((long)param_6 + 0x15) == '\0')) goto LAB_00406b19;
          }
        }
      }
      else {
LAB_00407320:
        local_2d8 = (stat *)CONCAT71(local_2d8._1_7_,1);
      }
LAB_00405823:
      if (local_2cc == 0x4000) {
        if (*(char *)(param_6 + 3) != '\0') {
          iVar9 = *(int *)(param_6 + 1);
LAB_00406ddf:
          if (iVar9 == 2) {
LAB_00406e60:
            if (param_10 == (undefined *)0x0) {
              return 1;
            }
            goto LAB_00406e6b;
          }
          if (iVar9 == 3) {
LAB_00406e26:
            local_308 = (stat *)((ulong)local_308 & 0xffffffffffffff00 | (ulong)(byte)local_308);
            local_380 = 0x406e47;
            cVar4 = FUN_00404ae0(param_6,local_2c0,&local_2f8->st_mode);
            if (cVar4 == '\0') goto LAB_00406e60;
          }
          else if ((iVar9 == 4) && (*(char *)((long)param_6 + 0x2f) != '\0')) {
            local_308 = (stat *)((ulong)local_308 & 0xffffffffffffff00 | (ulong)(byte)local_308);
            local_380 = 0x406e16;
            cVar4 = FUN_00404890(local_2c0,local_1e8.st_mode);
            if (cVar4 == '\0') goto LAB_00406e26;
          }
        }
LAB_0040585f:
        if ((byte)local_2d8 != '\0') {
          return 1;
        }
        local_2d8._0_1_ = (byte)local_308 ^ 1;
        if ((local_1e8.st_mode & 0xf000) != 0x4000) {
          if (local_2cc == 0x4000) {
            if ((*(char *)(param_6 + 3) == '\0') || (iVar9 = *(int *)param_6, iVar9 == 0)) {
              local_380 = 0x407e13;
              uVar16 = FUN_0040dca0(1,4,param_1);
              local_380 = 0x407e29;
              uVar17 = FUN_0040dca0(0,4,local_2c0);
              pcVar42 = "cannot overwrite non-directory %s with directory %s";
              puVar37 = auStack_378;
              goto LAB_00405a68;
            }
            if (bVar5 != 0) goto LAB_004058a4;
            goto LAB_004075e8;
          }
          iVar9 = *(int *)param_6;
          if (bVar5 == 0) goto LAB_00405904;
LAB_004058a4:
          if (iVar9 != 3) {
            local_308 = (stat *)((ulong)local_308 & 0xffffffffffffff00 | (ulong)(byte)local_2d8);
            local_380 = 0x4058cb;
            cVar4 = FUN_0040abf0(param_6[7],local_2c0,local_2f8);
            if (cVar4 != '\0') {
              local_380 = 0x408205;
              uVar16 = FUN_0040dca0(1,4,param_1);
              local_380 = 0x40821b;
              uVar17 = FUN_0040dca0(0,4,local_2c0);
              pcVar42 = "will not overwrite just-created %s with %s";
              puVar37 = auStack_378;
              goto LAB_00405a68;
            }
            local_2d8._0_1_ = (byte)local_308;
            if ((local_2cc != 0x4000) && ((local_1e8.st_mode & 0xf000) == 0x4000))
            goto LAB_004075d0;
            goto LAB_00405900;
          }
          if (*(char *)(param_6 + 3) != '\0') goto LAB_004075e8;
LAB_00407b68:
          local_2f8 = (stat *)((ulong)local_2f8 & 0xffffffffffffff00 | (ulong)(byte)local_2d8);
          local_380 = 0x407b76;
          psVar22 = (stat *)FUN_0040aa00(param_1);
          if (*(char *)&psVar22->st_dev == '.') {
            bVar7 = 0;
LAB_00407f93:
            cVar4 = *(char *)((long)psVar22->__unused +
                             ((ulong)(*(char *)((long)&psVar22->st_dev + 1) == '.') - 0x77));
            local_2d8._0_1_ = (byte)local_2f8;
            if ((cVar4 == '\0') || (cVar4 == '/')) goto LAB_0040591a;
            if (bVar7 != 0) goto LAB_00407621;
          }
          local_2d8._0_1_ = (byte)local_2f8;
          if ((local_1e8.st_mode & 0xf000) == 0x4000) {
LAB_00407b9f:
            local_308 = (stat *)0x0;
            puVar40 = auStack_378;
            goto LAB_00405aa4;
          }
LAB_00407621:
          if (iVar9 != 3) {
            local_2f8 = (stat *)((ulong)local_2f8 & 0xffffffffffffff00 | (ulong)(byte)local_2f8);
            local_380 = 0x407640;
            local_310 = psVar22;
            local_2d8 = (stat *)strlen((char *)psVar22);
            local_380 = 0x407653;
            local_308 = (stat *)FUN_0040aa00(local_2c0);
            local_380 = 0x407662;
            sVar19 = strlen((char *)local_308);
            local_318 = DAT_0061d920;
            local_380 = 0x40767b;
            local_320 = (byte **)strlen((char *)DAT_0061d920);
            if (local_2d8 == (stat *)(sVar19 + (long)local_320)) {
              local_2d8 = (stat *)((ulong)local_2d8 & 0xffffffffffffff00 | (ulong)local_2f8 & 0xff);
              local_2f8 = local_310;
              local_380 = 0x4076c3;
              iVar9 = memcmp(local_310,local_308,sVar19);
              local_2f8._0_1_ = (byte)local_2d8;
              if (iVar9 == 0) {
                local_380 = 0x4076e9;
                iVar9 = strcmp((char *)((long)local_2f8->__unused + (sVar19 - 0x78)),
                               (char *)local_318);
                local_2f8._0_1_ = (byte)local_2d8;
                if (iVar9 == 0) {
                  local_308 = (stat *)((ulong)local_308 & 0xffffffffffffff00 |
                                      (ulong)local_2d8 & 0xff);
                  local_380 = 0x40770a;
                  local_2f8 = (stat *)strlen((char *)local_2c0);
                  local_380 = 0x407722;
                  pcVar42 = (char *)FUN_004100e0((undefined *)
                                                 ((long)local_320 +
                                                 (long)((long)local_2f8->__unused + -0x77)));
                  local_2d8 = DAT_0061d920;
                  local_380 = 0x407749;
                  pcVar27 = (char *)mempcpy(pcVar42,local_2c0,(size_t)local_2f8);
                  local_380 = 0x407758;
                  strcpy(pcVar27,(char *)local_2d8);
                  local_380 = 0x40776f;
                  uVar10 = __xstat(1,pcVar42,(stat *)local_c8);
                  local_2d8 = (stat *)((ulong)local_2d8 & 0xffffffff00000000 | (ulong)uVar10);
                  local_380 = 0x40777d;
                  free(pcVar42);
                  local_2f8._0_1_ = (byte)local_308;
                  if ((((int)local_2d8 == 0) && ((byte *)local_278.st_ino == local_c8._8_8_)) &&
                     ((byte *)local_278.st_dev == local_c8._0_8_)) {
                    if (*(char *)(param_6 + 3) == '\0') {
                      local_380 = 0x408e9a;
                      uVar18 = dcgettext(0,"backing up %s might destroy source;  %s not copied",5);
                    }
                    else {
                      local_380 = 0x408e50;
                      uVar18 = dcgettext(0,"backing up %s might destroy source;  %s not moved",5);
                    }
                    local_380 = 0x408e65;
                    uVar16 = FUN_0040dca0(1,4,param_1);
                    local_380 = 0x408e7b;
                    uVar17 = FUN_0040dca0(0,4,local_2c0);
                    goto LAB_00405a78;
                  }
                }
              }
            }
          }
          local_2d8 = (stat *)((ulong)local_2d8 & 0xffffffffffffff00 | (ulong)(byte)local_2f8);
          local_380 = 0x4077be;
          psVar22 = (stat *)FUN_0040a570(local_2c0,*(undefined4 *)param_6);
          local_2f8 = (stat *)((ulong)local_2f8 & 0xffffffffffffff00 | (ulong)local_2d8 & 0xff);
          local_308 = psVar22;
          if (psVar22 == (stat *)0x0) {
            local_380 = 0x407e8b;
            piVar15 = __errno_location();
            local_2d8 = (stat *)CONCAT71(local_2d8._1_7_,1);
            puVar40 = auStack_378;
            local_2d8._0_1_ = (byte)local_2f8;
            if (*piVar15 != 2) {
              local_380 = 0x407eb6;
              uVar16 = FUN_0040dd80(4,local_2c0);
              pcVar42 = "cannot backup %s";
LAB_00407ec3:
              local_380 = 0x407ecd;
              uVar17 = dcgettext(0,pcVar42,5);
              local_380 = 0x407ee0;
              error(0,*piVar15,uVar17,uVar16);
              return 0;
            }
          }
          else {
            local_380 = 0x4077e6;
            sVar19 = strlen((char *)psVar22);
            lVar29 = -(sVar19 + 0x18 & 0xfffffffffffffff0);
            *(undefined8 *)(auStack_378 + lVar29 + -8) = 0x407806;
            psVar46 = (stat *)memcpy((void *)((long)&local_370 + lVar29),psVar22,sVar19 + 1);
            psVar22 = local_308;
            *(undefined8 *)(auStack_378 + lVar29 + -8) = 0x407815;
            free(psVar22);
            local_308 = psVar46;
            local_2d8 = (stat *)CONCAT71(local_2d8._1_7_,1);
            puVar40 = auStack_378 + lVar29;
            local_2d8._0_1_ = (byte)local_2f8;
          }
          goto LAB_00405aa4;
        }
        if (local_2cc != 0x4000) {
LAB_004075d0:
          if ((*(char *)(param_6 + 3) == '\0') || (iVar9 = *(int *)param_6, iVar9 == 0)) {
            local_380 = 0x407ef6;
            uVar21 = FUN_0040dd80(4,local_2c0);
            pcVar42 = "cannot overwrite directory %s with non-directory";
            goto LAB_00406992;
          }
LAB_004075e8:
          if ((local_278.st_mode & 0xf000) == 0x4000) {
LAB_00407d28:
            if ((local_1e8.st_mode & 0xf000) == 0x4000) goto LAB_00407bc5;
            if (iVar9 == 0) {
              local_380 = 0x407d54;
              uVar16 = FUN_0040de50(0,3,local_2c0);
              local_380 = 0x407d66;
              uVar17 = FUN_0040de50(0,3,param_1);
              pcVar42 = "cannot move directory onto non-directory: %s -> %s";
              puVar37 = auStack_378;
              goto LAB_00405a68;
            }
          }
LAB_00407600:
          local_2f8 = (stat *)((ulong)local_2f8 & 0xffffffffffffff00 | (ulong)(byte)local_2d8);
          local_380 = 0x40760e;
          psVar22 = (stat *)FUN_0040aa00(param_1);
          if (*(char *)&psVar22->st_dev == '.') {
            bVar7 = 1;
            goto LAB_00407f93;
          }
          goto LAB_00407621;
        }
LAB_00405900:
        iVar9 = *(int *)param_6;
LAB_00405904:
        bVar7 = *(byte *)(param_6 + 3);
        if (bVar7 != 0) {
          if ((local_278.st_mode & 0xf000) == 0x4000) goto LAB_00407d28;
LAB_00407bc5:
          if (iVar9 != 0) goto LAB_00407600;
          goto LAB_00407b9f;
        }
        if (iVar9 != 0) goto LAB_00407b68;
LAB_0040591a:
        local_308 = (stat *)0x0;
        puVar40 = auStack_378;
        if (((local_1e8.st_mode & 0xf000) == 0x4000 | bVar7) != 0) goto LAB_00405aa4;
        uVar31 = (ulong)local_2d8 & 0xffffffffffffff00;
        local_2d8 = (stat *)(uVar31 | *(byte *)((long)param_6 + 0x15));
        if (((*(byte *)((long)param_6 + 0x15) == 0) &&
            ((*(char *)((long)param_6 + 0x22) == '\0' || (local_1e8.st_nlink < 2)))) &&
           ((local_308 = (stat *)0x0, puVar40 = auStack_378, *(int *)((long)param_6 + 4) != 2 ||
            (puVar40 = auStack_378, (local_278.st_mode & 0xf000) == 0x8000)))) goto LAB_00405aa4;
        local_308 = (stat *)0x0;
        local_2d8 = (stat *)(uVar31 | (byte)local_2d8);
        local_380 = 0x40597c;
        iVar9 = unlink((char *)local_2c0);
        if (iVar9 != 0) {
          local_380 = 0x40598c;
          piVar15 = __errno_location();
          if (*piVar15 != 2) {
            local_380 = 0x4087f0;
            uVar16 = FUN_0040dd80(4,local_2c0);
            pcVar42 = "cannot remove %s";
            goto LAB_00407ec3;
          }
        }
        uVar31 = (ulong)local_2d8 & 0xffffffffffffff00;
        local_2d8 = (stat *)(uVar31 | *(byte *)((long)param_6 + 0x2e));
        if (*(byte *)((long)param_6 + 0x2e) != 0) {
          local_2f8 = (stat *)((ulong)local_2f8 & 0xffffffffffffff00 | (ulong)(byte)local_2d8);
          local_380 = 0x408278;
          uVar16 = FUN_0040dd80(4,local_2c0);
          local_380 = 0x40828c;
          uVar17 = dcgettext(0,"removed %s\n",5);
          local_380 = 0x40829e;
          __printf_chk(1,uVar17,uVar16);
          local_308 = (stat *)0x0;
          puVar40 = auStack_378;
          local_2d8._0_1_ = (byte)local_2f8;
          goto LAB_00405aa4;
        }
        if (bVar5 != 0) {
          local_2d8 = (stat *)(uVar31 | bVar5);
          local_308 = (stat *)0x0;
          puVar35 = auStack_378;
          if (param_6[7] != (byte *)0x0) goto LAB_004059e0;
          goto LAB_00405f70;
        }
        bVar7 = local_2cc == 0x4000 & *(byte *)((long)param_6 + 0x2a);
        local_2d8 = (stat *)(uVar31 | bVar7);
        if (bVar7 == 0) {
          local_2d8._1_7_ = (undefined7)(uVar31 >> 8);
          local_2d8 = (stat *)CONCAT71(local_2d8._1_7_,1);
          local_308 = (stat *)0x0;
          goto LAB_00405ae8;
        }
        local_308 = (stat *)0x0;
LAB_004069d0:
        pbVar44 = (byte *)local_278.st_ino;
        pbVar25 = (byte *)local_278.st_dev;
        *(undefined8 *)(puVar39 + -8) = 0x4069d8;
        local_2f8 = (stat *)FUN_00409690(pbVar44,pbVar25);
        puVar40 = puVar39;
        goto LAB_00405fb7;
      }
      if (*(char *)((long)param_6 + 0x2d) == '\0') {
LAB_0040583e:
        iVar9 = *(int *)(param_6 + 1);
        if (*(char *)(param_6 + 3) != '\0') goto LAB_00406ddf;
        if (iVar9 == 2) {
          return 1;
        }
        if (iVar9 == 3) {
          local_308 = (stat *)((ulong)local_308 & 0xffffffffffffff00 | (ulong)(byte)local_308);
          local_380 = 0x407c9a;
          cVar4 = FUN_00404ae0(param_6,local_2c0,&local_2f8->st_mode);
          if (cVar4 == '\0') {
            return 1;
          }
        }
        goto LAB_0040585f;
      }
      bVar48 = false;
      if ((*(char *)((long)param_6 + 0x1f) != '\0') &&
         (bVar48 = true, *(char *)(param_6 + 3) != '\0')) {
        bVar48 = local_1e8.st_dev != local_278.st_dev;
      }
      local_308 = (stat *)((ulong)local_308 & 0xffffffffffffff00 | (ulong)(byte)local_308);
      local_380 = 0x406a59;
      iVar9 = FUN_0040eb60(local_2c0,local_2f8,local_2e0,bVar48);
      if (iVar9 < 0) goto LAB_0040583e;
      if (param_10 != (undefined *)0x0) {
        *param_10 = 1;
      }
      local_380 = 0x406a91;
      lVar29 = FUN_004096d0(local_2c0,local_278.st_ino,local_278.st_dev);
      if (lVar29 == 0) {
        return 1;
      }
      local_380 = 0x406aba;
      cVar4 = FUN_00404c10(lVar29,local_2c0,1,*(undefined *)((long)param_6 + 0x2e),
                           (ulong)local_2e8 & 0xffffffff);
      if (cVar4 != '\0') {
        return 1;
      }
      if (*(char *)((long)param_6 + 0x25) == '\0') {
        return uVar13;
      }
    }
    else {
LAB_00405a90:
      local_2d8 = (stat *)CONCAT71(local_2d8._1_7_,1);
      local_2d8._0_1_ = 0;
      local_308 = (stat *)0x0;
      puVar40 = auStack_378;
LAB_00405aa4:
      if ((bVar5 == 0) || (puVar36 = puVar40, param_6[7] == (byte *)0x0)) {
LAB_00405aac:
        puVar35 = puVar40;
        if (*(char *)((long)param_6 + 0x2e) == '\0') {
LAB_00405f70:
          if ((*(char *)((long)param_6 + 0x2a) == '\0') || (puVar39 = puVar35, local_2cc != 0x4000))
          {
LAB_00405ae8:
            puVar40 = puVar35;
            if (*(char *)(param_6 + 3) != '\0') goto LAB_00406147;
            goto LAB_00405af3;
          }
LAB_00405f8b:
          pbVar25 = (byte *)local_278.st_ino;
          ppbVar24 = local_2c0;
          if (bVar5 == 0) goto LAB_004069d0;
          *(undefined8 *)(puVar39 + -8) = 0x405fb0;
          local_2f8 = (stat *)FUN_004096d0(ppbVar24,pbVar25);
          puVar40 = puVar39;
LAB_00405fb7:
          if (local_2f8 != (stat *)0x0) {
LAB_00405fc5:
            psVar22 = local_2f8;
            *(undefined8 *)(puVar40 + -8) = 0x405fd4;
            cVar4 = FUN_0040e2f0(param_1,psVar22);
            ppbVar24 = local_2c0;
            psVar22 = local_2f8;
            if (cVar4 == '\0') {
              *(undefined8 *)(puVar40 + -8) = 0x405fef;
              cVar4 = FUN_0040e2f0(ppbVar24,psVar22);
              psVar22 = local_2f8;
              if (cVar4 != '\0') {
                *(undefined8 *)(puVar40 + -8) = 0x407be1;
                uVar16 = FUN_0040dd80(4,DAT_0061d910);
                *(undefined8 *)(puVar40 + -8) = 0x407bf5;
                uVar17 = dcgettext(0,"warning: source directory %s specified more than once",5);
                *(undefined8 *)(puVar40 + -8) = 0x407c06;
                error(0,0,uVar17,uVar16);
                if (*(char *)(param_6 + 3) == '\0') {
                  return 1;
                }
                if ((byte)local_2c8 == '\0') {
                  return 1;
                }
LAB_00406e6b:
                *param_10 = 1;
                return 1;
              }
              if ((*(int *)((long)param_6 + 4) == 4) ||
                 ((*(int *)((long)param_6 + 4) == 3 && (bVar5 != 0)))) goto LAB_00406116;
              *(undefined8 *)(puVar40 + -8) = 0x406027;
              uVar16 = FUN_0040dca0(1,4,psVar22);
              ppbVar24 = local_2c0;
              *(undefined8 *)(puVar40 + -8) = 0x40603d;
              uVar21 = FUN_0040dca0(0,4,ppbVar24);
              *(undefined8 *)(puVar40 + -8) = 0x406051;
              uVar17 = dcgettext(0,"will not create hard link %s to directory %s",5);
              *(undefined8 *)(puVar40 + -8) = 0x406065;
              error(0,0,uVar17,uVar21,uVar16);
            }
            else {
              *(undefined8 *)(puVar40 + -8) = 0x407396;
              uVar21 = FUN_0040dca0(1,4,DAT_0061d908);
              *(undefined8 *)(puVar40 + -8) = 0x4073ac;
              uVar16 = FUN_0040dca0(0,4,DAT_0061d910);
              *(undefined8 *)(puVar40 + -8) = 0x4073c0;
              uVar17 = dcgettext(0,"cannot copy a directory, %s, into itself, %s",5);
              *(undefined8 *)(puVar40 + -8) = 0x4073d4;
              error(0,0,uVar17,uVar16,uVar21);
              *param_9 = 1;
            }
LAB_00406068:
            if (*(char *)((long)param_6 + 0x25) == '\0') goto LAB_00406073;
            goto LAB_00406acd;
          }
LAB_00406116:
          if (*(char *)(param_6 + 3) == '\0') {
            local_2c8 = (int *)((ulong)local_2c8 & 0xffffffff00000000 | (ulong)local_2d8 & 0xff);
            goto LAB_00405b16;
          }
        }
        else {
          puVar36 = puVar40;
          if (*(char *)(param_6 + 3) == '\0') {
LAB_00405ac2:
            ppbVar24 = local_2c0;
            psVar22 = local_308;
            puVar36 = puVar35;
            if (local_2cc != 0x4000) {
              *(undefined8 *)(puVar35 + -8) = 0x405ae8;
              FUN_00404a30(param_1,ppbVar24,psVar22);
              goto LAB_00405ae8;
            }
LAB_004064b0:
            puVar40 = puVar36;
            puVar39 = puVar36;
            if (*(char *)((long)param_6 + 0x2a) == '\0') goto LAB_00405af3;
            goto LAB_00405f8b;
          }
LAB_00406130:
          puVar40 = puVar36;
          if ((local_2cc == 0x4000) && (puVar39 = puVar36, *(char *)((long)param_6 + 0x2a) != '\0'))
          goto LAB_00405f8b;
LAB_00406147:
          pbVar44 = (byte *)local_278.st_ino;
          pbVar25 = (byte *)local_278.st_dev;
          if (local_278.st_nlink == 1) {
            *(undefined8 *)(puVar40 + -8) = 0x4069fb;
            local_2f8 = (stat *)FUN_00409690(pbVar44,pbVar25);
            goto LAB_004062ec;
          }
          if (*(char *)((long)param_6 + 0x22) != '\0') goto LAB_00406100;
          local_2f8 = (stat *)0x0;
        }
        ppbVar24 = local_2c0;
        *(undefined8 *)(puVar40 + -8) = 0x406176;
        iVar9 = rename((char *)param_1,(char *)ppbVar24);
        if (iVar9 == 0) {
          if (*(char *)((long)param_6 + 0x2e) != '\0') {
            *(undefined8 *)(puVar40 + -8) = 0x407569;
            uVar16 = dcgettext(0,"renamed ",5);
            *(undefined8 *)(puVar40 + -8) = 0x407578;
            __printf_chk(1,uVar16);
            ppbVar24 = local_2c0;
            psVar22 = local_308;
            *(undefined8 *)(puVar40 + -8) = 0x40758e;
            FUN_00404a30(param_1,ppbVar24,psVar22);
          }
          ppbVar24 = local_2c0;
          if (*(char *)((long)param_6 + 0x21) != '\0') {
            *(undefined8 *)(puVar40 + -8) = 0x40754e;
            FUN_004052e0(ppbVar24,0,1,param_6);
          }
          ppbVar24 = local_2c0;
          psVar22 = local_2e0;
          if (param_10 != (undefined *)0x0) {
            *param_10 = 1;
          }
          if (bVar5 == 0) {
            return 1;
          }
          pbVar25 = param_6[7];
          *(undefined8 *)(puVar40 + -8) = 0x406cbe;
          FUN_0040ab60(pbVar25,ppbVar24,psVar22);
          return param_7;
        }
        *(undefined8 *)(puVar40 + -8) = 0x406183;
        piVar15 = __errno_location();
        ppbVar24 = local_2c0;
        if (*piVar15 == 0x16) {
          *(undefined8 *)(puVar40 + -8) = 0x407974;
          uVar16 = FUN_0040dca0(1,4,DAT_0061d908);
          *(undefined8 *)(puVar40 + -8) = 0x40798a;
          uVar17 = FUN_0040dca0(0,4,DAT_0061d910);
          *(undefined8 *)(puVar40 + -8) = 0x40799e;
          uVar18 = dcgettext(0,"cannot move %s to a subdirectory of itself, %s",5);
          *(undefined8 *)(puVar40 + -8) = 0x4079b2;
          error(0,0,uVar18,uVar17,uVar16);
          *param_9 = 1;
          return 1;
        }
        if (*piVar15 != 0x12) {
          *(undefined8 *)(puVar40 + -8) = 0x406ede;
          uVar16 = FUN_0040dca0(1,4,ppbVar24);
          *(undefined8 *)(puVar40 + -8) = 0x406ef0;
          uVar17 = FUN_0040dca0(0,4,param_1);
          pcVar42 = "cannot move %s to %s";
          goto LAB_00406c3d;
        }
        if (local_2cc == 0x4000) {
          *(undefined8 *)(puVar40 + -8) = 0x406bf5;
          iVar9 = rmdir((char *)ppbVar24);
          if ((iVar9 != 0) && (*piVar15 != 2)) goto LAB_00406c08;
        }
        else {
          *(undefined8 *)(puVar40 + -8) = 0x4061b6;
          iVar9 = unlink((char *)ppbVar24);
          if ((iVar9 != 0) && (*piVar15 != 2)) {
LAB_00406c08:
            ppbVar24 = local_2c0;
            *(undefined8 *)(puVar40 + -8) = 0x406c1e;
            uVar16 = FUN_0040dca0(1,4,ppbVar24);
            *(undefined8 *)(puVar40 + -8) = 0x406c30;
            uVar17 = FUN_0040dca0(0,4,param_1);
            pcVar42 = "inter-device move failed: %s to %s; unable to remove target";
LAB_00406c3d:
            *(undefined8 *)(puVar40 + -8) = 0x406c44;
            uVar18 = dcgettext(0,pcVar42,5);
            iVar9 = *piVar15;
            *(undefined8 *)(puVar40 + -8) = 0x406c5a;
            error(0,iVar9,uVar18,uVar17,uVar16);
            *(undefined8 *)(puVar40 + -8) = 0x406c6d;
            FUN_00409640(local_278.st_ino,local_278.st_dev);
            return uVar13;
          }
          bVar5 = local_2cc != 0x4000 & *(byte *)((long)param_6 + 0x2e);
          local_2d8 = (stat *)((ulong)local_2d8 & 0xffffffffffffff00 | (ulong)bVar5);
          if (bVar5 != 0) {
            *(undefined8 *)(puVar40 + -8) = 0x407921;
            uVar16 = dcgettext(0,"copied ",5);
            *(undefined8 *)(puVar40 + -8) = 0x407930;
            __printf_chk(1,uVar16);
            ppbVar24 = local_2c0;
            psVar22 = local_308;
            *(undefined8 *)(puVar40 + -8) = 0x407946;
            FUN_00404a30(param_1,ppbVar24,psVar22);
            local_2c8 = (int *)CONCAT44(local_2c8._4_4_,1);
            goto LAB_00405b16;
          }
        }
        local_2c8 = (int *)CONCAT44(local_2c8._4_4_,1);
        local_2d8 = (stat *)CONCAT71(local_2d8._1_7_,1);
      }
      else {
LAB_004059e0:
        ppbVar24 = local_2c0;
        puVar35 = puVar36;
        if (*(char *)(param_6 + 3) != '\0') {
          if (*(char *)((long)param_6 + 0x2e) != '\0') goto LAB_00406130;
          goto LAB_00405f70;
        }
        if (*(int *)param_6 == 0) {
          psVar22 = &local_1e8;
          puVar40 = puVar36;
          if ((byte)local_2d8 == 0) {
            psVar22 = (stat *)local_c8;
            *(undefined8 *)(puVar36 + -8) = 0x407416;
            iVar9 = __lxstat(1,(char *)ppbVar24,psVar22);
            if (iVar9 != 0) goto LAB_00405aac;
          }
          ppbVar24 = local_2c0;
          if ((psVar22->st_mode & 0xf000) == 0xa000) {
            pbVar25 = param_6[7];
            *(undefined8 *)(puVar36 + -8) = 0x405a29;
            cVar4 = FUN_0040abf0(pbVar25,ppbVar24);
            ppbVar24 = local_2c0;
            if (cVar4 != '\0') {
              *(undefined8 *)(puVar36 + -8) = 0x405a43;
              uVar16 = FUN_0040dca0(1,4,ppbVar24);
              *(undefined8 *)(puVar36 + -8) = 0x405a55;
              uVar17 = FUN_0040dca0(0,4,param_1);
              pcVar42 = "will not copy %s through just-created symlink %s";
              puVar37 = puVar36;
              goto LAB_00405a68;
            }
          }
          goto LAB_00405aac;
        }
        if (*(char *)((long)param_6 + 0x2e) != '\0') goto LAB_00405ac2;
        puVar40 = puVar36;
        if (local_2cc == 0x4000) goto LAB_004064b0;
LAB_00405af3:
        if (*(char *)((long)param_6 + 0x22) != '\0') {
LAB_00406100:
          pbVar44 = (byte *)local_278.st_ino;
          pbVar25 = (byte *)local_278.st_dev;
          ppbVar24 = local_2c0;
          if (*(char *)((long)param_6 + 0x17) == '\0') {
            if ((1 < local_278.st_nlink) ||
               (((bVar5 != 0 && (*(int *)((long)param_6 + 4) == 3)) ||
                (local_2f8 = (stat *)0x0, *(int *)((long)param_6 + 4) == 4)))) {
              *(undefined8 *)(puVar40 + -8) = 0x4062e5;
              local_2f8 = (stat *)FUN_004096d0(ppbVar24,pbVar44,pbVar25);
LAB_004062ec:
              ppbVar24 = local_2c0;
              psVar22 = local_2f8;
              if (local_2f8 != (stat *)0x0) {
                if (local_2cc == 0x4000) goto LAB_00405fc5;
                uVar47 = *(undefined *)((long)param_6 + 0x2e);
                uVar31 = (ulong)local_2e8 & 0xffffffff;
                *(undefined8 *)(puVar40 + -8) = 0x40632e;
                cVar4 = FUN_00404c10(psVar22,ppbVar24,1,uVar47,uVar31);
                if (cVar4 != '\0') {
                  return 1;
                }
                goto LAB_00406068;
              }
            }
          }
          else {
            local_2f8 = (stat *)0x0;
          }
          goto LAB_00406116;
        }
        local_2f8 = (stat *)0x0;
        local_2c8 = (int *)((ulong)local_2c8 & 0xffffffff00000000 | (ulong)local_2d8 & 0xff);
      }
LAB_00405b16:
      ppbVar24 = local_2c0;
      uVar11 = local_2d0;
      uVar10 = local_2d0;
      if (*(char *)((long)param_6 + 0x2b) != '\0') {
        uVar10 = *(uint *)(param_6 + 2);
      }
      puVar37 = puVar40;
      if (*(char *)((long)param_6 + 0x1d) == '\0') {
        if (local_2cc == 0x4000) {
          uVar31 = (ulong)local_2c8 & 0xffffffff;
          *(undefined8 *)(puVar40 + -8) = 0x40694e;
          cVar4 = FUN_00405210(param_1,ppbVar24,uVar11,uVar31);
          if (cVar4 == '\0') {
            return uVar13;
          }
          local_310 = (stat *)((ulong)local_310 & 0xffffffff00000000 |
                              (ulong)uVar10 & 0xffffffff00000012);
          ppbVar24 = local_2f0;
          goto joined_r0x0040642f;
        }
        *(undefined8 *)(puVar40 + -8) = 0x405b6f;
        cVar4 = FUN_00405210(param_1,ppbVar24,uVar11);
        local_310 = (stat *)((ulong)local_310 & 0xffffffff00000000);
        if (cVar4 == '\0') {
          return uVar13;
        }
LAB_00405b81:
        ppbVar24 = local_2c0;
        local_2f0 = (byte **)((ulong)local_2f0 & 0xffffffffffffff00 |
                             (ulong)*(byte *)((long)param_6 + 0x2c));
        puVar34 = puVar40;
        if (*(byte *)((long)param_6 + 0x2c) != 0) {
          uVar47 = *(byte *)param_1 < 0x2f;
          uVar49 = *(byte *)param_1 == 0x2f;
          if (!(bool)uVar49) {
            *(undefined8 *)(puVar40 + -8) = 0x405ba6;
            __filename = (byte *)FUN_0040a920(ppbVar24);
            lVar29 = 2;
            pbVar25 = &DAT_00415fd7;
            pbVar44 = __filename;
            do {
              if (lVar29 == 0) break;
              lVar29 = lVar29 + -1;
              uVar47 = *pbVar25 < *pbVar44;
              uVar49 = *pbVar25 == *pbVar44;
              pbVar25 = pbVar25 + (ulong)bVar8 * -2 + 1;
              pbVar44 = pbVar44 + (ulong)bVar8 * -2 + 1;
            } while ((bool)uVar49);
            if ((!(bool)uVar47 && !(bool)uVar49) != (bool)uVar47) {
              *(undefined8 *)(puVar40 + -8) = 0x407466;
              iVar9 = __xstat(1,".",(stat *)&local_158);
              if (iVar9 == 0) {
                *(undefined8 *)(puVar40 + -8) = 0x407482;
                iVar9 = __xstat(1,(char *)__filename,(stat *)local_c8);
                if ((iVar9 == 0) &&
                   (((byte *)CONCAT44(uStack_14c,uStack_150) != local_c8._8_8_ ||
                    ((byte *)CONCAT44(uStack_154,local_158) != local_c8._0_8_)))) {
                  *(undefined8 *)(puVar40 + -8) = 0x4074a6;
                  free(__filename);
                  ppbVar24 = local_2c0;
                  *(undefined8 *)(puVar40 + -8) = 0x4074b9;
                  uVar21 = FUN_0040de50(0,3,ppbVar24);
                  pcVar42 = "%s: can make relative symbolic links only in current directory";
LAB_00406472:
                  *(undefined8 *)(puVar40 + -8) = 0x406479;
                  uVar16 = dcgettext(0,pcVar42,5);
                  *(undefined8 *)(puVar40 + -8) = 0x40648a;
                  error(0,0,uVar16,uVar21);
                  goto LAB_004065d0;
                }
              }
            }
            *(undefined8 *)(puVar40 + -8) = 0x405bcd;
            free(__filename);
          }
          ppbVar24 = local_2c0;
          uVar47 = *(undefined *)((long)param_6 + 0x16);
          *(undefined8 *)(puVar40 + -8) = 0x405be6;
          iVar9 = FUN_00409c90(param_1,0xffffff9c,ppbVar24,uVar47);
          if (iVar9 < 0) {
            *(undefined8 *)(puVar40 + -8) = 0x4079d0;
            uVar21 = FUN_0040dca0(1,4,param_1);
            ppbVar24 = local_2c0;
            *(undefined8 *)(puVar40 + -8) = 0x4079e6;
            uVar16 = FUN_0040dca0(0,4,ppbVar24);
            *(undefined8 *)(puVar40 + -8) = 0x4079fa;
            uVar17 = dcgettext(0,"cannot create symbolic link %s to %s",5);
            *(undefined8 *)(puVar40 + -8) = 0x407a02;
            piVar15 = __errno_location();
            iVar9 = *piVar15;
            *(undefined8 *)(puVar40 + -8) = 0x407a16;
            error(0,iVar9,uVar17,uVar16,uVar21);
            goto LAB_004065d0;
          }
          local_329 = 0;
          local_2c8._0_1_ = 0;
          local_2e8 = (byte **)((ulong)local_2e8 & 0xffffffffffffff00 | (ulong)local_2f0 & 0xff);
LAB_00405c05:
          ppbVar24 = local_2c0;
          bVar48 = local_2cc != 0x4000;
          if ((((byte)local_2d8 == '\0') && (*(char *)((long)param_6 + 0x14) != '\x01')) &&
             ((bVar48 && (((ulong)param_6[4] & 0xff000000ff00) != 0)))) {
            uVar47 = *(undefined *)((long)param_6 + 0x25);
            local_2c8 = (int *)((ulong)local_2c8 & 0xffffffffffffff00 | (ulong)(byte)local_2c8);
            *(undefined8 *)(puVar34 + -8) = 0x405c55;
            cVar4 = FUN_004052e0(ppbVar24,uVar47,0,param_6);
            if ((cVar4 == '\0') && (puVar37 = puVar34, *(char *)((long)param_6 + 0x26) != '\0'))
            goto LAB_004065d0;
          }
          ppbVar24 = local_2c0;
          if (((char)uVar21 != '\0') && (param_6[7] != (byte *)0x0)) {
            local_2c8 = (int *)((ulong)local_2c8 & 0xffffffffffffff00 | (ulong)(byte)local_2c8);
            *(undefined8 *)(puVar34 + -8) = 0x405c9a;
            iVar9 = __lxstat(1,(char *)ppbVar24,(stat *)local_c8);
            ppbVar24 = local_2c0;
            if (iVar9 == 0) {
              pbVar25 = param_6[7];
              *(undefined8 *)(puVar34 + -8) = 0x405cbd;
              FUN_0040ab60(pbVar25,ppbVar24,local_c8);
            }
          }
          ppbVar24 = local_2c0;
          if (((*(char *)((long)param_6 + 0x17) != '\0') && (bVar48)) || ((byte)local_2c8 != 0))
          goto LAB_004063c0;
          if (*(char *)((long)param_6 + 0x1f) == '\0') {
LAB_00405da0:
            if ((char)local_2f0 != '\0') goto LAB_004063c0;
          }
          else {
            local_c8._0_8_ = (byte *)local_278.st_atim.tv_sec;
            local_c8._8_8_ = (byte *)local_278.st_atim.tv_nsec;
            local_c8._16_8_ = (byte *)local_278.st_mtim.tv_sec;
            stack0xffffffffffffff50 = (byte *)local_278.st_mtim.tv_nsec;
            if ((char)local_2f0 != '\0') {
              *(undefined8 *)(puVar34 + -8) = 0x405d44;
              iVar9 = FUN_0040f8b0();
              if (iVar9 != 0) {
                *(undefined8 *)(puVar34 + -8) = 0x405d4d;
                piVar15 = __errno_location();
                if (*piVar15 != 0x26) goto LAB_00405d52;
              }
              goto LAB_00405da0;
            }
            *(undefined8 *)(puVar34 + -8) = 0x4073e5;
            iVar9 = FUN_0040f8a0(ppbVar24,local_c8);
            if (iVar9 != 0) {
LAB_00405d52:
              ppbVar24 = local_2c0;
              *(undefined8 *)(puVar34 + -8) = 0x405d63;
              uVar16 = FUN_0040dd80(4,ppbVar24);
              *(undefined8 *)(puVar34 + -8) = 0x405d77;
              uVar17 = dcgettext(0,"preserving times for %s",5);
              *(undefined8 *)(puVar34 + -8) = 0x405d7f;
              piVar15 = __errno_location();
              iVar9 = *piVar15;
              *(undefined8 *)(puVar34 + -8) = 0x405d90;
              error(0,iVar9,uVar17,uVar16);
              if (*(char *)((long)param_6 + 0x24) != '\0') {
                return 0;
              }
              goto LAB_00405da0;
            }
          }
          ppbVar24 = local_2c0;
          psVar22 = local_2e0;
          if ((*(char *)((long)param_6 + 0x1d) != '\0') &&
             ((((byte)local_2d8 != '\0' || (local_278.st_uid != local_1e8.st_uid)) ||
              (local_278.st_gid != local_1e8.st_gid)))) {
            uVar21 = (ulong)local_2d8 & 0xff;
            *(undefined8 *)(puVar34 + -8) = 0x405df9;
            iVar9 = FUN_00405430(param_6,ppbVar24,0xffffffff,psVar22,uVar21,&local_1e8);
            if (iVar9 == -1) {
              return 0;
            }
            uVar10 = local_2d0 & 0xfffff1ff;
            if (iVar9 != 0) {
              uVar10 = local_2d0;
            }
            local_2d0 = uVar10;
          }
          ppbVar24 = local_2c0;
          uVar10 = local_2d0;
          if (((ulong)param_6[3] & 0xff0000000000ff) != 0) {
            *(undefined8 *)(puVar34 + -8) = 0x40787d;
            iVar9 = FUN_00409d90(param_1,0xffffffff,ppbVar24,0xffffffff,uVar10);
            if (iVar9 != 0) goto LAB_00405ebb;
            goto LAB_004063c0;
          }
          if (*(char *)((long)param_6 + 0x2b) != '\0') {
            uVar10 = *(uint *)(param_6 + 2);
LAB_00407b01:
            ppbVar24 = local_2c0;
            *(undefined8 *)(puVar34 + -8) = 0x407b12;
            iVar9 = FUN_00409e20(ppbVar24,0xffffffff,uVar10);
            if (iVar9 != 0) {
              return uVar13;
            }
            return (uint)(byte)local_2e8;
          }
          if (*(char *)(param_6 + 4) != '\0') {
            *(undefined8 *)(puVar34 + -8) = 0x407c6a;
            uVar10 = FUN_00405620();
            uVar10 = ~uVar10 & 0x1ff;
            goto LAB_00407b01;
          }
          if ((uint)local_310 == 0) {
LAB_00405e50:
            if (local_329 == 0) goto LAB_004063c0;
          }
          else {
            *(undefined8 *)(puVar34 + -8) = 0x40637c;
            uVar10 = FUN_00405620();
            ppbVar24 = local_2c0;
            local_310 = (stat *)((ulong)local_310 & 0xffffffff00000000 |
                                (ulong)((uint)local_310 & ~uVar10));
            if (((uint)local_310 & ~uVar10) == 0) goto LAB_00405e50;
            if (local_329 != 1) {
              if ((byte)local_2d8 != '\0') {
                *(undefined8 *)(puVar34 + -8) = 0x40881a;
                iVar9 = __lxstat(1,(char *)ppbVar24,&local_1e8);
                param_1 = local_2c0;
                if (iVar9 != 0) {
LAB_00405ef7:
                  *(undefined8 *)(puVar34 + -8) = 0x405f04;
                  uVar16 = FUN_0040dd80(4,param_1);
                  *(undefined8 *)(puVar34 + -8) = 0x405f18;
                  uVar17 = dcgettext(0,"cannot stat %s",5);
                  *(undefined8 *)(puVar34 + -8) = 0x405f20;
                  piVar15 = __errno_location();
                  iVar9 = *piVar15;
                  *(undefined8 *)(puVar34 + -8) = 0x405f31;
                  error(0,iVar9,uVar17,uVar16);
                  return 0;
                }
              }
              local_34c = local_1e8.st_mode;
              if (((uint)local_310 & ~local_1e8.st_mode) == 0) goto LAB_004063c0;
            }
          }
          ppbVar24 = local_2c0;
          local_310._0_4_ = local_34c | (uint)local_310;
          *(undefined8 *)(puVar34 + -8) = 0x405e75;
          iVar9 = chmod((char *)ppbVar24,(uint)local_310);
          ppbVar24 = local_2c0;
          if (iVar9 != 0) {
            *(undefined8 *)(puVar34 + -8) = 0x405e8e;
            uVar16 = FUN_0040dd80(4,ppbVar24);
            *(undefined8 *)(puVar34 + -8) = 0x405ea2;
            uVar17 = dcgettext(0,"preserving permissions for %s",5);
            *(undefined8 *)(puVar34 + -8) = 0x405eaa;
            piVar15 = __errno_location();
            iVar9 = *piVar15;
            *(undefined8 *)(puVar34 + -8) = 0x405ebb;
            error(0,iVar9,uVar17,uVar16);
LAB_00405ebb:
            if (*(char *)((long)param_6 + 0x24) != '\0') {
              return uVar13;
            }
            return (uint)(byte)local_2e8;
          }
LAB_004063c0:
          return (uint)(byte)local_2e8;
        }
        local_329 = *(byte *)((long)param_6 + 0x17);
        if (*(byte *)((long)param_6 + 0x17) == 0) {
          puVar36 = puVar40;
          if ((local_2cc == 0x8000) ||
             ((local_2cc != 0xa000 & *(byte *)((long)param_6 + 0x14)) != 0)) {
            iVar9 = *(int *)((long)param_6 + 4);
            local_320 = (byte **)((ulong)local_320 & 0xffffffff00000000 | (ulong)local_278.st_mode);
            local_318 = (stat *)((ulong)local_318 & 0xffffffffffffff00 |
                                (ulong)*(byte *)((long)param_6 + 0x23));
            *(undefined8 *)(puVar40 + -8) = 0x406f37;
            uVar11 = FUN_0040ab10(param_1,(ulong)(iVar9 == 2) << 0x11);
            local_2c8 = (int *)((ulong)local_2c8 & 0xffffffff00000000 | (ulong)uVar11);
            if (-1 < (int)uVar11) {
              *(undefined8 *)(puVar40 + -8) = 0x406f5c;
              iVar9 = __fxstat(1,uVar11,(stat *)&local_158);
              ppbVar24 = local_2c0;
              if (iVar9 == 0) {
                if (((byte *)local_278.st_ino != (byte *)CONCAT44(uStack_14c,uStack_150)) ||
                   ((byte *)local_278.st_dev != (byte *)CONCAT44(uStack_154,local_158))) {
                  *(undefined8 *)(puVar40 + -8) = 0x407adc;
                  pcVar42 = (char *)FUN_0040dd80(4,param_1);
                  *(undefined8 *)(puVar40 + -8) = 0x407af0;
                  uVar16 = dcgettext(0,"skipping file %s, as it was replaced while being copied",5);
                  iVar9 = 0;
                  goto LAB_004070f0;
                }
                local_35c = uVar10 & 0x1ff;
                if ((byte)local_2d8 != '\0') {
LAB_00408093:
                  local_350 = (uint)local_310;
LAB_00407040:
                  ppbVar24 = local_2c0;
                  uVar10 = ~local_350 & local_35c;
                  local_2e8 = (byte **)((ulong)local_2e8 & 0xffffffff00000000 | (ulong)uVar10);
                  *(undefined8 *)(puVar40 + -8) = 0x40706e;
                  uVar10 = FUN_0040ab10(ppbVar24,0xc1,uVar10);
                  local_2f0 = (byte **)((ulong)local_2f0 & 0xffffffff00000000 | (ulong)uVar10);
                  *(undefined8 *)(puVar40 + -8) = 0x407079;
                  local_300 = (stat *)__errno_location();
                  ppbVar24 = local_2c0;
                  iVar9 = *(int *)&local_300->st_dev;
                  bVar5 = iVar9 == 0x11 & (byte)((ulong)local_2f0 >> 0x18) >> 7;
                  local_328 = (stat *)((ulong)local_328 & 0xffffffffffffff00 | (ulong)bVar5);
                  if (bVar5 == 0) {
LAB_00408748:
                    bVar5 = iVar9 == 0x15 & (byte)((ulong)local_2f0 >> 0x18) >> 7;
                    uVar31 = (ulong)local_2d8 & 0xffffffffffffff00;
                    local_2d8 = (stat *)(uVar31 | bVar5);
                    if (bVar5 == 0) {
                      local_2d8._1_7_ = (undefined7)(uVar31 >> 8);
                      local_2d8 = (stat *)CONCAT71(local_2d8._1_7_,1);
                      if (-1 < (int)local_2f0) {
LAB_004082cd:
                        local_328 = (stat *)local_c8;
                        *(undefined8 *)(puVar40 + -8) = 0x4082ee;
                        uVar10 = __fxstat(1,(int)local_2f0,(stat *)local_c8);
                        ppbVar24 = local_2c0;
                        local_300 = (stat *)((ulong)local_300 & 0xffffffff00000000 | (ulong)uVar10);
                        if (uVar10 != 0) {
                          *(undefined8 *)(puVar40 + -8) = 0x4089c6;
                          local_2e8 = (byte **)FUN_0040dd80(4,ppbVar24);
                          *(undefined8 *)(puVar40 + -8) = 0x4089de;
                          uVar17 = dcgettext(0,"cannot fstat %s",5);
                          *(undefined8 *)(puVar40 + -8) = 0x4089e6;
                          piVar15 = __errno_location();
                          uVar16 = local_2e8;
                          iVar9 = *piVar15;
                          *(undefined8 *)(puVar40 + -8) = 0x4089fb;
                          error(0,iVar9,uVar17,uVar16);
                          local_300._0_1_ = 0;
                          local_2e8 = (byte **)0x0;
                          goto LAB_00408600;
                        }
                        if ((byte)local_318 == '\0') {
LAB_004087b0:
                          local_2e8 = (byte **)0x0;
                          goto LAB_0040853f;
                        }
                        if (*(int *)((long)param_6 + 0x34) != 0) {
                          uVar31 = (ulong)local_2c8 & 0xffffffff;
                          *(undefined8 *)(puVar40 + -8) = 0x408fa8;
                          iVar9 = ioctl((int)local_2f0,0x40049409,uVar31);
                          if (iVar9 == 0) goto LAB_004087b0;
                          if (*(int *)((long)param_6 + 0x34) == 2) {
                            *(undefined8 *)(puVar40 + -8) = 0x408fcd;
                            local_300 = (stat *)FUN_0040dca0(1,4,param_1);
                            ppbVar24 = local_2c0;
                            *(undefined8 *)(puVar40 + -8) = 0x408fe7;
                            uVar17 = FUN_0040dca0(0,4,ppbVar24);
                            *(undefined8 *)(puVar40 + -8) = 0x408ffb;
                            local_2e8 = (byte **)dcgettext(0,"failed to clone %s from %s",5);
                            *(undefined8 *)(puVar40 + -8) = 0x409007;
                            piVar15 = __errno_location();
                            uVar16 = local_2e8;
                            iVar9 = *piVar15;
                            *(undefined8 *)(puVar40 + -8) = 0x409023;
                            error(0,iVar9,uVar16,uVar17);
                            local_300._0_1_ = 0;
                            local_2e8 = (byte **)0x0;
                            goto LAB_00408600;
                          }
                        }
                        *(undefined8 *)(puVar40 + -8) = 0x408319;
                        iVar9 = getpagesize();
                        uVar31 = (ulong)iVar9;
                        local_348 = ppbStack_90;
                        local_338 = ppbStack_90;
                        if ((byte **)0x1ffffffffffe0000 < ppbStack_90 + -0x4000) {
                          local_338 = (byte **)0x20000;
                          local_348 = (byte **)0x200;
                          if ((long)ppbStack_90 - 1U < 0x2000000000000000) {
                            local_348 = ppbStack_90;
                          }
                        }
                        *(undefined8 *)(puVar40 + -8) = 0x40838e;
                        posix_fadvise((int)local_2c8,0,0,2);
                        ppbVar24 = local_338;
                        if ((_Stack_140 & 0xf000) == 0x8000) {
                          local_300 = (stat *)((ulong)local_300 & 0xffffffff00000000 |
                                              (ulong)(CONCAT44(uStack_114,local_118) <
                                                     CONCAT44(uStack_124,local_128) / 0x200));
                        }
                        local_2e8 = (byte **)(uVar31 - 1);
                        if ((local_c8._24_4_ & 0xf000) == 0x8000) {
                          if (*(int *)((long)param_6 + 0xc) != 3) {
                            if ((*(int *)((long)param_6 + 0xc) == 2) &&
                               (((ulong)local_300 & 1) != 0)) {
                              lVar29 = (long)local_338 + uVar31;
                              *(undefined8 *)(puVar40 + -8) = 0x408f53;
                              local_2e8 = (byte **)FUN_004100e0(lVar29);
                              local_358 = (long)(char *)((long)local_2e8 + (uVar31 - 1)) -
                                          (ulong)(char *)((long)local_2e8 + (uVar31 - 1)) % uVar31;
                              goto LAB_00408f74;
                            }
                            goto LAB_004083eb;
                          }
                          lVar29 = (long)local_338 + uVar31;
                          *(undefined8 *)(puVar40 + -8) = 0x40915d;
                          local_2e8 = (byte **)FUN_004100e0(lVar29);
                          uVar32 = (ulong)(char *)((long)local_2e8 + (uVar31 - 1)) % uVar31;
                          local_358 = (long)(char *)((long)local_2e8 + (uVar31 - 1)) - uVar32;
                          if ((int)local_300 != 0) {
LAB_00408f74:
                            local_330 = *(uint *)((long)param_6 + 0xc);
                            local_32b = (byte)local_318;
                            goto LAB_00408a89;
                          }
                          bVar48 = *(int *)((long)param_6 + 0xc) == 3;
                          local_300 = (stat *)local_2a8;
LAB_004084e7:
                          *(ulong *)(puVar40 + -8) = uVar32;
                          ppbVar3 = local_338;
                          ppbVar24 = local_348;
                          lVar29 = local_358;
                          *(char **)(puVar40 + -0x10) = &local_2b0;
                          *(stat **)(puVar40 + -0x18) = local_300;
                          uVar31 = (ulong)local_2f0 & 0xffffffff;
                          uVar32 = (ulong)local_2c8 & 0xffffffff;
                          *(undefined8 *)(puVar40 + -0x20) = 0xffffffffffffffff;
                          *(byte ***)(puVar40 + -0x28) = local_2c0;
                          *(byte ***)(puVar40 + -0x30) = param_1;
                          *(undefined8 *)(puVar40 + -0x38) = 0x408526;
                          cVar4 = FUN_00404de0(uVar32,uVar31,lVar29,ppbVar3,ppbVar24,bVar48);
                          pbVar25 = local_2a8._0_8_;
                          if (cVar4 == '\0') goto LAB_004088ee;
                          if (local_2b0 != '\0') {
                            *(undefined8 *)(puVar40 + -8) = 0x4091bc;
                            iVar9 = ftruncate((int)local_2f0,(__off_t)pbVar25);
                            if (iVar9 < 0) {
LAB_004091c4:
                              ppbVar24 = local_2c0;
                              *(undefined8 *)(puVar40 + -8) = 0x4091d5;
                              local_300 = (stat *)FUN_0040dd80(4,ppbVar24);
                              pcVar42 = "failed to extend %s";
                              goto LAB_00408dc1;
                            }
                          }
LAB_0040853f:
                          ppbVar24 = local_2c0;
                          if (*(char *)((long)param_6 + 0x1f) != '\0') {
                            uVar31 = (ulong)local_2f0 & 0xffffffff;
                            local_2a8._0_8_ = (byte *)local_278.st_atim.tv_sec;
                            local_2a8._8_8_ = (byte *)local_278.st_atim.tv_nsec;
                            local_2a8._16_8_ = (byte *)local_278.st_mtim.tv_sec;
                            local_2a8._24_8_ = (byte *)local_278.st_mtim.tv_nsec;
                            *(undefined8 *)(puVar40 + -8) = 0x408895;
                            iVar9 = FUN_0040f460(uVar31,ppbVar24,local_2a8);
                            ppbVar24 = local_2c0;
                            if (iVar9 != 0) {
                              *(undefined8 *)(puVar40 + -8) = 0x4088ae;
                              local_300 = (stat *)FUN_0040dd80(4,ppbVar24);
                              *(undefined8 *)(puVar40 + -8) = 0x4088c6;
                              uVar16 = dcgettext(0,"preserving times for %s",5);
                              *(undefined8 *)(puVar40 + -8) = 0x4088ce;
                              piVar15 = __errno_location();
                              psVar22 = local_300;
                              iVar9 = *piVar15;
                              *(undefined8 *)(puVar40 + -8) = 0x4088e3;
                              error(0,iVar9,uVar16,psVar22);
                              if (*(char *)((long)param_6 + 0x24) != '\0') goto LAB_004088ee;
                            }
                          }
                          ppbVar24 = local_2c0;
                          psVar46 = local_2e0;
                          psVar22 = local_328;
                          if ((*(char *)((long)param_6 + 0x1d) != '\0') &&
                             ((local_278.st_uid != _Stack_ac ||
                              (local_278.st_gid != (__gid_t)local_a8)))) {
                            uVar32 = (ulong)local_2d8 & 0xff;
                            uVar31 = (ulong)local_2f0 & 0xffffffff;
                            *(undefined8 *)(puVar40 + -8) = 0x408598;
                            iVar9 = FUN_00405430(param_6,ppbVar24,uVar31,psVar46,uVar32,psVar22);
                            if (iVar9 == -1) goto LAB_004088ee;
                            if (iVar9 == 0) {
                              local_320 = (byte **)((ulong)local_320 & 0xfffffffffffff1ff);
                            }
                          }
                          if ((*(char *)((long)param_6 + 0x27) != '\0') &&
                             (((ulong)stack0xffffffffffffff50 & 0x80) == 0)) {
                            *(undefined8 *)(puVar40 + -8) = 0x408ea4;
                            _Var14 = geteuid();
                            ppbVar24 = local_2c0;
                            if (_Var14 != 0) {
                              uVar31 = (ulong)local_2f0 & 0xffffffff;
                              *(undefined8 *)(puVar40 + -8) = 0x408ec3;
                              iVar9 = FUN_004049d0(uVar31,ppbVar24,0x180);
                              ppbVar24 = local_2c0;
                              if (iVar9 == 0) {
                                uVar31 = (ulong)local_2f0 & 0xffffffff;
                                uVar10 = ~local_350 & local_35c;
                                *(undefined8 *)(puVar40 + -8) = 0x408eeb;
                                FUN_004049d0(uVar31,ppbVar24,uVar10);
                              }
                            }
                          }
                          ppbVar24 = local_2c0;
                          if (((ulong)param_6[3] & 0xff0000000000ff) == 0) {
                            if (*(char *)((long)param_6 + 0x2b) == '\0') {
                              if (*(char *)(param_6 + 4) == '\0') {
                                local_300._0_1_ = 1;
                                if (local_350 != 0) {
                                  local_300 = (stat *)CONCAT71(local_300._1_7_,1);
                                  *(undefined8 *)(puVar40 + -8) = 0x4092d2;
                                  uVar11 = FUN_00405620();
                                  ppbVar24 = local_2c0;
                                  uVar10 = local_35c;
                                  if ((local_350 & ~uVar11) != 0) {
                                    uVar31 = (ulong)local_2f0 & 0xffffffff;
                                    *(undefined8 *)(puVar40 + -8) = 0x409300;
                                    iVar9 = FUN_004049d0(uVar31,ppbVar24,uVar10);
                                    ppbVar24 = local_2c0;
                                    if (iVar9 != 0) {
                                      *(undefined8 *)(puVar40 + -8) = 0x409321;
                                      local_300 = (stat *)FUN_0040dd80(4,ppbVar24);
                                      *(undefined8 *)(puVar40 + -8) = 0x409339;
                                      uVar16 = dcgettext(0,"preserving permissions for %s",5);
                                      *(undefined8 *)(puVar40 + -8) = 0x409341;
                                      piVar15 = __errno_location();
                                      psVar22 = local_300;
                                      iVar9 = *piVar15;
                                      *(undefined8 *)(puVar40 + -8) = 0x409356;
                                      error(0,iVar9,uVar16,psVar22);
                                      goto LAB_00408a3e;
                                    }
                                  }
                                }
                                goto LAB_00408600;
                              }
                              *(undefined8 *)(puVar40 + -8) = 0x409360;
                              uVar10 = FUN_00405620();
                              uVar10 = ~uVar10 & 0x1b6;
                            }
                            else {
                              uVar10 = *(uint *)(param_6 + 2);
                            }
                            ppbVar24 = local_2c0;
                            uVar31 = (ulong)local_2f0 & 0xffffffff;
                            *(undefined8 *)(puVar40 + -8) = 0x408e19;
                            iVar9 = FUN_00409e20(ppbVar24,uVar31,uVar10);
                            local_300._0_1_ = iVar9 == 0;
                          }
                          else {
                            uVar45 = (ulong)local_320 & 0xffffffff;
                            uVar31 = (ulong)local_2f0 & 0xffffffff;
                            uVar32 = (ulong)local_2c8 & 0xffffffff;
                            *(undefined8 *)(puVar40 + -8) = 0x408a30;
                            iVar9 = FUN_00409d90(param_1,uVar32,ppbVar24,uVar31,uVar45);
                            local_300._0_1_ = 1;
                            if (iVar9 != 0) {
LAB_00408a3e:
                              local_300._0_1_ = *(byte *)((long)param_6 + 0x24) ^ 1;
                            }
                          }
                        }
                        else {
LAB_004083eb:
                          lVar29 = CONCAT44(uStack_11c,uStack_120);
                          local_340 = (byte **)((ulong)local_340 & 0xffffffff00000000 |
                                               (ulong)_Stack_140 & 0xffffffff0000f000);
                          local_2e8 = (byte **)(0x7fffffffffffffff - uVar31);
                          if (0x1ffffffffffe0000 < lVar29 - 0x20000U) {
                            lVar29 = 0x20000;
                          }
                          *(undefined8 *)(puVar40 + -8) = 0x408439;
                          ppbVar24 = (byte **)FUN_0040a640(lVar29,ppbVar24,
                                                           (byte **)(0x7fffffffffffffff - uVar31));
                          if (((int)local_340 == 0x8000) &&
                             ((byte **)CONCAT44(uStack_124,local_128) < local_338)) {
                            local_338 = (byte **)((long)(byte **)CONCAT44(uStack_124,local_128) + 1)
                            ;
                          }
                          uVar32 = (long)ppbVar24 + -1 + (long)local_338;
                          local_338 = (byte **)(uVar32 - uVar32 % (ulong)ppbVar24);
                          if ((local_338 == (byte **)0x0) || (local_2e8 < local_338)) {
                            local_338 = ppbVar24;
                          }
                          lVar29 = uVar31 + (long)local_338;
                          *(undefined8 *)(puVar40 + -8) = 0x408494;
                          local_2e8 = (byte **)FUN_004100e0(lVar29);
                          uVar32 = (ulong)(char *)((long)local_2e8 + (uVar31 - 1)) % uVar31;
                          local_358 = (long)(char *)((long)local_2e8 + (uVar31 - 1)) - uVar32;
                          if ((int)local_300 == 0) {
                            bVar48 = *(int *)((long)param_6 + 0xc) == 3;
                            local_348 = (byte **)0x0;
                            local_300 = (stat *)local_2a8;
                            goto LAB_004084e7;
                          }
                          local_32b = '\0';
                          local_330 = 1;
LAB_00408a89:
                          uVar21 = (ulong)local_2c8 & 0xffffffff;
                          psVar22 = (stat *)0x0;
                          local_300 = (stat *)local_2a8;
                          local_370 = (stat *)CONCAT44(uStack_124,local_128);
                          *(undefined8 *)(puVar40 + -8) = 0x408ab6;
                          FUN_004097a0(uVar21,(stat *)local_2a8);
                          psVar2 = local_370;
                          psVar46 = (stat *)0x0;
                          local_360 = param_7;
                          local_368 = param_6;
                          local_32a = (byte)uVar13;
                          uVar21 = (ulong)local_318 & 0xff;
                          local_340 = param_1;
                          local_318 = (stat *)0x0;
                          do {
                            psVar30 = local_300;
                            *(undefined8 *)(puVar40 + -8) = 0x408afb;
                            cVar4 = FUN_004097d0(psVar30);
                            psVar30 = local_318;
                            param_1 = local_340;
                            param_6 = local_368;
                            if (cVar4 == '\0') {
                              local_318 = (stat *)((ulong)local_318 & 0xffffffffffffff00 |
                                                  uVar21 & 0xff);
                              uVar13 = (uint)local_32a;
                              uVar21 = (ulong)local_360;
                              if (local_287 != '\0') goto LAB_00408d1a;
                              if (local_288 == '\0') {
                                *(undefined8 *)(puVar40 + -8) = 0x409428;
                                local_300 = (stat *)FUN_0040de50(0,3,param_1);
                                pcVar42 = "%s: failed to get extents info";
                                goto LAB_00408dc1;
                              }
                              bVar48 = *(int *)((long)local_368 + 0xc) == 3;
                              ppbVar24 = (byte **)0x0;
                              if (local_32b != '\0') {
                                ppbVar24 = local_348;
                              }
                              local_348 = ppbVar24;
                              uVar32 = extraout_RDX_00;
                              goto LAB_004084e7;
                            }
                            if (local_2a8._24_8_ != (byte *)0x0) {
                              pbVar25 = (byte *)0x0;
                              psVar33 = psVar46;
                              psVar43 = psVar22;
                              do {
                                ppsVar1 = (stat **)((long)local_280 + (long)pbVar25 * 0x18);
                                psVar22 = *ppsVar1;
                                psVar46 = ppsVar1[1];
                                if ((long)psVar2 <
                                    (long)(((stat *)(((stat *)(psVar46->__unused + -0xf))->__unused
                                                    + -0xf))->__unused + 0xfffffffffffffff1) +
                                    (long)((stat *)(((stat *)(((stat *)(psVar22->__unused + -0xf))->
                                                              __unused + -0xf))->__unused + -0xf))->
                                          __unused + 0xffffffffffffff88U) {
                                  if ((long)psVar2 < (long)psVar22) {
                                    psVar22 = psVar2;
                                  }
                                  psVar46 = (stat *)((long)psVar2 - (long)psVar22);
                                }
                                uVar21 = 0;
                                psVar30 = (stat *)((long)psVar22 + (-(long)psVar33 - (long)psVar43))
                                ;
                                if (psVar30 != (stat *)0x0) {
                                  local_318 = psVar30;
                                  *(undefined8 *)(puVar40 + -8) = 0x408c28;
                                  _Var26 = lseek((int)local_2c8,(__off_t)psVar22,0);
                                  ppbVar24 = local_2c0;
                                  psVar30 = local_318;
                                  bVar8 = local_32a;
                                  param_1 = local_340;
                                  uVar10 = local_360;
                                  param_6 = local_368;
                                  if (_Var26 < 0) {
                                    *(undefined8 *)(puVar40 + -8) = 0x409250;
                                    local_300 = (stat *)FUN_0040dd80(4,param_1);
                                    pcVar42 = "cannot lseek %s";
                                  }
                                  else {
                                    if (local_330 != 1) {
                                      bVar48 = local_330 == 3;
                                      uVar21 = (ulong)local_2f0 & 0xffffffff;
                                      *(undefined8 *)(puVar40 + -8) = 0x408c5d;
                                      uVar13 = FUN_00404d20(uVar21,ppbVar24,bVar48);
                                      uVar21 = (ulong)uVar13;
                                      param_6 = local_368;
                                      param_1 = local_340;
                                      uVar10 = local_360;
                                      bVar8 = local_32a;
                                      if ((char)uVar13 != '\0') goto LAB_00408b30;
                                      goto LAB_00408c84;
                                    }
                                    uVar31 = (ulong)local_2f0 & 0xffffffff;
                                    *(undefined8 *)(puVar40 + -8) = 0x408ca3;
                                    cVar4 = FUN_004048e0(uVar31,psVar30);
                                    ppbVar24 = local_2c0;
                                    bVar8 = local_32a;
                                    param_1 = local_340;
                                    uVar10 = local_360;
                                    param_6 = local_368;
                                    if (cVar4 != '\0') {
                                      ppbVar24 = (byte **)0x0;
                                      goto LAB_00408b45;
                                    }
                                    *(undefined8 *)(puVar40 + -8) = 0x409403;
                                    local_300 = (stat *)FUN_0040de50(0,3,ppbVar24);
                                    pcVar42 = "%s: write failed";
                                  }
                                  *(undefined8 *)(puVar40 + -8) = 0x409268;
                                  uVar16 = dcgettext(0,pcVar42,5);
                                  *(undefined8 *)(puVar40 + -8) = 0x409270;
                                  piVar15 = __errno_location();
                                  psVar22 = local_300;
                                  iVar9 = *piVar15;
                                  *(undefined8 *)(puVar40 + -8) = 0x409285;
                                  error(0,iVar9,uVar16,psVar22);
LAB_00408c84:
                                  pvVar20 = local_280;
                                  uVar13 = (uint)bVar8;
                                  uVar21 = (ulong)uVar10;
                                  *(undefined8 *)(puVar40 + -8) = 0x408c90;
                                  free(pvVar20);
                                  goto LAB_004088ee;
                                }
LAB_00408b30:
                                ppbVar24 = (byte **)0x0;
                                if (local_330 == 3) {
                                  ppbVar24 = local_348;
                                }
LAB_00408b45:
                                ppbVar3 = local_338;
                                lVar29 = local_358;
                                *(byte **)(puVar40 + -0x10) = &local_2b1;
                                uVar31 = (ulong)local_2f0 & 0xffffffff;
                                *(char **)(puVar40 + -0x18) = &local_2b0;
                                uVar32 = (ulong)local_2c8 & 0xffffffff;
                                *(stat **)(puVar40 + -0x20) = psVar46;
                                *(byte ***)(puVar40 + -0x28) = local_2c0;
                                *(byte ***)(puVar40 + -0x30) = local_340;
                                *(undefined8 *)(puVar40 + -0x38) = 0x408b8c;
                                cVar4 = FUN_00404de0(uVar32,uVar31,lVar29,ppbVar3,ppbVar24,1);
                                param_6 = local_368;
                                param_1 = local_340;
                                uVar10 = local_360;
                                bVar8 = local_32a;
                                if (cVar4 == '\0') goto LAB_00408c84;
                                psVar30 = (stat *)((long)psVar22->__unused +
                                                  CONCAT71(uStack_2af,local_2b0) + -0x78);
                                if (CONCAT71(uStack_2af,local_2b0) != 0) {
                                  uVar21 = (ulong)local_2b1;
                                }
                                if (psVar2 == psVar30) {
                                  local_287 = '\x01';
                                  break;
                                }
                                pbVar25 = (byte *)(ulong)((int)pbVar25 + 1);
                                psVar33 = psVar46;
                                psVar43 = psVar22;
                              } while (pbVar25 < local_2a8._24_8_);
                            }
                            pvVar20 = local_280;
                            local_318 = psVar30;
                            *(undefined8 *)(puVar40 + -8) = 0x408ccd;
                            free(pvVar20);
                            psVar30 = local_318;
                            local_280 = (void *)0x0;
                            local_2a8._24_8_ = (byte *)0x0;
                          } while (local_287 == '\0');
                          local_318 = (stat *)((ulong)local_318 & 0xffffffffffffff00 | uVar21 & 0xff
                                              );
                          uVar13 = (uint)local_32a;
                          uVar21 = (ulong)local_360;
LAB_00408d1a:
                          param_1 = local_340;
                          param_6 = local_368;
                          psVar22 = local_370;
                          if (((long)local_370 <= (long)psVar30) && ((byte)local_318 == '\0'))
                          goto LAB_0040853f;
                          if (local_330 == 1) {
                            uVar31 = (ulong)local_2f0 & 0xffffffff;
                            lVar29 = (long)local_370 - (long)psVar30;
                            *(undefined8 *)(puVar40 + -8) = 0x409453;
                            cVar4 = FUN_004048e0(uVar31,lVar29);
                            if (cVar4 == '\0') goto LAB_004091c4;
                            goto LAB_0040853f;
                          }
                          local_300 = psVar30;
                          *(undefined8 *)(puVar40 + -8) = 0x408d5a;
                          iVar9 = ftruncate((int)local_2f0,(__off_t)psVar22);
                          psVar46 = local_300;
                          if (iVar9 != 0) goto LAB_004091c4;
                          if ((local_330 != 3) || ((long)psVar22 <= (long)psVar30))
                          goto LAB_0040853f;
                          uVar31 = (ulong)local_2f0 & 0xffffffff;
                          lVar29 = (long)local_370 - (long)local_300;
                          *(undefined8 *)(puVar40 + -8) = 0x408d97;
                          iVar9 = FUN_00404990(uVar31,psVar46,lVar29);
                          ppbVar24 = local_2c0;
                          if (-1 < iVar9) goto LAB_0040853f;
                          *(undefined8 *)(puVar40 + -8) = 0x408db0;
                          local_300 = (stat *)FUN_0040dd80(4,ppbVar24);
                          pcVar42 = "error deallocating %s";
LAB_00408dc1:
                          *(undefined8 *)(puVar40 + -8) = 0x408dc8;
                          uVar16 = dcgettext(0,pcVar42,5);
                          *(undefined8 *)(puVar40 + -8) = 0x408dd0;
                          piVar15 = __errno_location();
                          psVar22 = local_300;
                          iVar9 = *piVar15;
                          *(undefined8 *)(puVar40 + -8) = 0x408de5;
                          error(0,iVar9,uVar16,psVar22);
LAB_004088ee:
                          local_300._0_1_ = 0;
                        }
LAB_00408600:
                        local_300 = (stat *)((ulong)local_300 & 0xffffffffffffff00 |
                                            (ulong)(byte)local_300);
                        *(undefined8 *)(puVar40 + -8) = 0x408612;
                        iVar9 = close((int)local_2f0);
                        ppbVar24 = local_2c0;
                        bVar5 = (byte)local_300;
                        if (iVar9 < 0) {
                          *(undefined8 *)(puVar40 + -8) = 0x408633;
                          local_2f0 = (byte **)FUN_0040dd80(4,ppbVar24);
                          *(undefined8 *)(puVar40 + -8) = 0x40864b;
                          uVar16 = dcgettext(0,"failed to close %s",5);
                          *(undefined8 *)(puVar40 + -8) = 0x408653;
                          piVar15 = __errno_location();
                          ppbVar24 = local_2f0;
                          iVar9 = *piVar15;
                          *(undefined8 *)(puVar40 + -8) = 0x408668;
                          error(0,iVar9,uVar16,ppbVar24);
                          bVar5 = 0;
                        }
                        goto LAB_00407107;
                      }
                    }
                    else {
                      iVar9 = 0x15;
                      if (*(byte *)local_2c0 != 0) {
                        uVar31 = 0xffffffffffffffff;
                        ppbVar24 = local_2c0;
                        do {
                          if (uVar31 == 0) break;
                          uVar31 = uVar31 - 1;
                          bVar5 = *(byte *)ppbVar24;
                          ppbVar24 = (byte **)((long)ppbVar24 + (ulong)bVar8 * -2 + 1);
                        } while (bVar5 != 0);
                        iVar9 = (*(byte *)((long)local_2c0 + (~uVar31 - 2)) != 0x2f) + 0x14;
                      }
                    }
                  }
                  else {
                    iVar9 = 0x11;
                    local_2d8 = (stat *)((ulong)local_2d8 & 0xffffffffffffff00 |
                                        (ulong)*(byte *)(param_6 + 3));
                    if (*(byte *)(param_6 + 3) == 0) {
                      *(undefined8 *)(puVar40 + -8) = 0x4086fb;
                      iVar12 = __lxstat(1,(char *)ppbVar24,(stat *)local_c8);
                      ppbVar24 = local_2c0;
                      if ((iVar12 == 0) && ((local_c8._24_4_ & 0xf000) == 0xa000)) {
                        if (*(char *)(param_6 + 6) == '\0') {
                          local_2f0 = (byte **)((ulong)local_2f0 & 0xffffffffffffff00);
                          *(undefined8 *)(puVar40 + -8) = 0x409482;
                          uVar16 = FUN_0040dd80(4,ppbVar24);
                          *(undefined8 *)(puVar40 + -8) = 0x409496;
                          uVar17 = dcgettext(0,"not writing through dangling symlink %s",5);
                          *(undefined8 *)(puVar40 + -8) = 0x4094a7;
                          error(0,0,uVar17,uVar16);
                          local_2e8 = (byte **)0x0;
                          bVar5 = (byte)local_2f0;
                          local_2d8 = (stat *)((ulong)local_2d8 & 0xffffffffffffff00 |
                                              (ulong)local_328 & 0xff);
                          goto LAB_00407107;
                        }
                        uVar31 = (ulong)local_2e8 & 0xffffffff;
                        *(undefined8 *)(puVar40 + -8) = 0x408738;
                        uVar10 = FUN_0040ab10(ppbVar24,0x41,uVar31);
                        local_2f0 = (byte **)((ulong)local_2f0 & 0xffffffff00000000 | (ulong)uVar10)
                        ;
                        iVar9 = *(int *)&local_300->st_dev;
                      }
                      goto LAB_00408748;
                    }
                  }
LAB_004070ba:
                  ppbVar24 = local_2c0;
                  *(undefined8 *)(puVar40 + -8) = 0x4070cb;
                  local_2e8 = (byte **)FUN_0040dd80(4,ppbVar24);
                  *(undefined8 *)(puVar40 + -8) = 0x4070e3;
                  uVar16 = dcgettext(0,"cannot create regular file %s",5);
                  pcVar42 = (char *)local_2e8;
                  goto LAB_004070f0;
                }
                cVar4 = *(char *)((long)param_6 + 0x23);
                *(undefined8 *)(puVar40 + -8) = 0x406fcb;
                uVar10 = FUN_0040ab10(ppbVar24,(-(uint)(cVar4 == '\0') & 0xfffffe00) + 0x201);
                local_2f0 = (byte **)((ulong)local_2f0 & 0xffffffff00000000 | (ulong)uVar10);
                if (((ulong)param_6[4] & 0xff000000ff00) != 0) {
                  if ((int)uVar10 < 0) goto LAB_00406fef;
                  uVar47 = *(undefined *)((long)param_6 + 0x25);
                  *(undefined8 *)(puVar40 + -8) = 0x408908;
                  local_300._0_1_ = FUN_004052e0(ppbVar24,uVar47,0,param_6);
                  if ((byte)local_300 != 0) {
LAB_004082c3:
                    local_350 = 0;
                    goto LAB_004082cd;
                  }
                  pcVar42 = (char *)((ulong)local_2d8 & 0xffffffffffffff00);
                  local_2d8 = (stat *)((ulong)pcVar42 | (ulong)*(byte *)((long)param_6 + 0x26));
                  if (*(byte *)((long)param_6 + 0x26) == 0) goto LAB_004082c3;
                  local_2d8 = (stat *)pcVar42;
                  local_2e8 = (byte **)0x0;
                  goto LAB_00408600;
                }
                if (-1 < (int)uVar10) goto LAB_004082c3;
LAB_00406fef:
                *(undefined8 *)(puVar40 + -8) = 0x406ff4;
                piVar15 = __errno_location();
                ppbVar24 = local_2c0;
                if (*(char *)((long)param_6 + 0x16) == '\0') {
                  iVar9 = *piVar15;
                  if ((iVar9 == 2) && (*(char *)(param_6 + 3) == '\0')) {
                    local_350 = 0;
                    goto LAB_00407040;
                  }
                  local_2d8 = (stat *)((ulong)local_2d8 & 0xffffffffffffff00);
                  goto LAB_004070ba;
                }
                *(undefined8 *)(puVar40 + -8) = 0x40700e;
                iVar9 = unlink((char *)ppbVar24);
                ppbVar24 = local_2c0;
                if (iVar9 != 0) {
                  *(undefined8 *)(puVar40 + -8) = 0x40929b;
                  local_2e8 = (byte **)FUN_0040dd80(4,ppbVar24);
                  *(undefined8 *)(puVar40 + -8) = 0x4092b3;
                  uVar16 = dcgettext(0,"cannot remove %s",5);
                  iVar9 = *piVar15;
                  pcVar42 = (char *)local_2e8;
                  goto LAB_004070f0;
                }
                if (*(char *)((long)param_6 + 0x2e) != '\0') {
                  *(undefined8 *)(puVar40 + -8) = 0x4091fc;
                  uVar16 = FUN_0040dd80(4,ppbVar24);
                  *(undefined8 *)(puVar40 + -8) = 0x409210;
                  uVar17 = dcgettext(0,"removed %s\n",5);
                  *(undefined8 *)(puVar40 + -8) = 0x409222;
                  __printf_chk(1,uVar17,uVar16);
                }
                ppbVar24 = local_2c0;
                uVar10 = local_35c;
                local_2d8 = (stat *)((ulong)local_2d8 & 0xffffffffffffff00 |
                                    (ulong)*(byte *)((long)param_6 + 0x21));
                local_350 = (uint)local_310;
                if (*(byte *)((long)param_6 + 0x21) == 0) goto LAB_00407040;
                *(undefined8 *)(puVar40 + -8) = 0x409132;
                bVar5 = FUN_00405210(param_1,ppbVar24,uVar10,1,param_6);
                if (bVar5 != 0) goto LAB_00408093;
                local_2e8 = (byte **)0x0;
              }
              else {
                *(undefined8 *)(puVar40 + -8) = 0x407f2c;
                local_2e8 = (byte **)FUN_0040dd80(4,param_1);
                *(undefined8 *)(puVar40 + -8) = 0x407f44;
                uVar16 = dcgettext(0,"cannot fstat %s",5);
                *(undefined8 *)(puVar40 + -8) = 0x407f4c;
                piVar15 = __errno_location();
                iVar9 = *piVar15;
                pcVar42 = (char *)local_2e8;
LAB_004070f0:
                *(undefined8 *)(puVar40 + -8) = 0x4070f9;
                error(0,iVar9,uVar16,pcVar42);
                bVar5 = 0;
                local_2e8 = (byte **)0x0;
              }
LAB_00407107:
              local_2f0 = (byte **)((ulong)local_2f0 & 0xffffffffffffff00 | (ulong)bVar5);
              *(undefined8 *)(puVar40 + -8) = 0x407119;
              iVar9 = close((int)local_2c8);
              pcVar42 = (char *)local_2e8;
              if (iVar9 < 0) {
                *(undefined8 *)(puVar40 + -8) = 0x407e48;
                uVar21 = FUN_0040dd80(4,param_1);
                *(undefined8 *)(puVar40 + -8) = 0x407e5c;
                uVar16 = dcgettext(0,"failed to close %s",5);
                *(undefined8 *)(puVar40 + -8) = 0x407e64;
                piVar15 = __errno_location();
                iVar9 = *piVar15;
                *(undefined8 *)(puVar40 + -8) = 0x407e75;
                error(0,iVar9,uVar16,uVar21);
                pcVar42 = (char *)local_2e8;
                *(undefined8 *)(puVar40 + -8) = 0x407e81;
                free(pcVar42);
                goto LAB_004065d0;
              }
              local_2c8 = (int *)((ulong)local_2c8 & 0xffffffffffffff00 | (ulong)local_2f0 & 0xff);
              *(undefined8 *)(puVar40 + -8) = 0x40713c;
              free(pcVar42);
              local_2f0 = (byte **)((ulong)local_2f0 & 0xffffffffffffff00);
              local_2e8 = (byte **)((ulong)local_2e8 & 0xffffffffffffff00 | (ulong)local_2c8 & 0xff)
              ;
              bVar8 = (byte)local_2c8;
              goto joined_r0x00406bdf;
            }
            *(undefined8 *)(puVar40 + -8) = 0x407c53;
            uVar21 = FUN_0040dd80(4,param_1);
            pcVar42 = "cannot open %s for reading";
          }
          else {
            local_2c8 = (int *)((ulong)local_2c8 & 0xffffffffffffff00);
            if (local_2cc == 0x1000) {
              local_c8._0_8_ = (byte *)0x0;
              uVar10 = ~(uint)local_310 & local_2d0;
              *(undefined8 *)(puVar40 + -8) = 0x407cf8;
              iVar9 = __xmknod(0,(char *)ppbVar24,uVar10,(__dev_t *)local_c8);
              ppbVar24 = local_2c0;
              if (iVar9 != 0) {
                *(undefined8 *)(puVar40 + -8) = 0x408141;
                iVar9 = mkfifo((char *)ppbVar24,uVar10 & 0xffffefff);
                ppbVar24 = local_2c0;
                if (iVar9 != 0) {
                  *(undefined8 *)(puVar40 + -8) = 0x408162;
                  uVar21 = FUN_0040dd80(4,ppbVar24);
                  pcVar42 = "cannot create fifo %s";
                  goto LAB_004065b0;
                }
              }
              local_2f0 = (byte **)((ulong)local_2f0 & 0xffffffffffffff00 | (ulong)(byte)local_2c8);
              local_329 = (byte)local_2c8;
              local_2e8 = (byte **)CONCAT71(local_2e8._1_7_,1);
              goto LAB_00405c05;
            }
            bVar48 = (local_2d0 & 0xb000) == 0x2000;
            local_2e8 = (byte **)((ulong)local_2e8 & 0xffffffffffffff00 |
                                 (ulong)(bVar48 || local_2cc == 0xc000));
            if (bVar48 || local_2cc == 0xc000) {
              local_c8._0_8_ = (byte *)local_278.st_rdev;
              uVar10 = ~(uint)local_310 & local_2d0;
              *(undefined8 *)(puVar40 + -8) = 0x40656e;
              iVar9 = __xmknod(0,(char *)ppbVar24,uVar10,(__dev_t *)local_c8);
              ppbVar24 = local_2c0;
              local_2f0 = (byte **)((ulong)local_2f0 & 0xffffffffffffff00 | (ulong)local_2c8 & 0xff)
              ;
              local_329 = (byte)local_2c8;
              if (iVar9 == 0) goto LAB_00405c05;
              *(undefined8 *)(puVar40 + -8) = 0x40659d;
              uVar21 = FUN_0040dd80(4,ppbVar24);
              pcVar42 = "cannot create special file %s";
            }
            else {
              if (local_2cc != 0xa000) {
                *(undefined8 *)(puVar40 + -8) = 0x407d85;
                uVar21 = FUN_0040dd80(4,param_1);
                pcVar42 = "%s has unknown file type";
                goto LAB_00406472;
              }
              *(undefined8 *)(puVar40 + -8) = 0x407a3a;
              pcVar42 = (char *)FUN_00409e80(param_1,local_278.st_size);
              ppbVar24 = local_2c0;
              if (pcVar42 != (char *)0x0) {
                *(undefined8 *)(puVar40 + -8) = 0x407a5f;
                iVar9 = FUN_00409c90(pcVar42,0xffffff9c,ppbVar24);
                if (iVar9 < 0) {
                  *(undefined8 *)(puVar40 + -8) = 0x408179;
                  puVar23 = (uint *)__errno_location();
                  ppbVar24 = local_2c0;
                  local_2c8 = (int *)((ulong)local_2c8 & 0xffffffff00000000 | (ulong)*puVar23);
                  if (*puVar23 != 0) {
                    if (((*(char *)((long)param_6 + 0x2d) == '\x01') && ((byte)local_2d8 == '\0'))
                       && ((local_1e8.st_mode & 0xf000) == 0xa000)) {
                      uVar31 = 0xffffffffffffffff;
                      pcVar27 = pcVar42;
                      do {
                        if (uVar31 == 0) break;
                        uVar31 = uVar31 - 1;
                        cVar4 = *pcVar27;
                        pcVar27 = pcVar27 + (ulong)bVar8 * -2 + 1;
                      } while (cVar4 != '\0');
                      if (local_1e8.st_size == ~uVar31 - 1) {
                        *(undefined8 *)(puVar40 + -8) = 0x4090de;
                        pcVar27 = (char *)FUN_00409e80(ppbVar24);
                        if (pcVar27 != (char *)0x0) {
                          local_2e8 = (byte **)pcVar27;
                          *(undefined8 *)(puVar40 + -8) = 0x4090f9;
                          iVar9 = strcmp(pcVar27,pcVar42);
                          pcVar27 = (char *)local_2e8;
                          if (iVar9 == 0) {
                            *(undefined8 *)(puVar40 + -8) = 0x409110;
                            free(pcVar27);
                            goto LAB_00407a67;
                          }
                          *(undefined8 *)(puVar40 + -8) = 0x409465;
                          free(pcVar27);
                        }
                      }
                    }
                    *(undefined8 *)(puVar40 + -8) = 0x4081a5;
                    free(pcVar42);
                    ppbVar24 = local_2c0;
                    *(undefined8 *)(puVar40 + -8) = 0x4081b6;
                    uVar16 = FUN_0040dd80(4,ppbVar24);
                    *(undefined8 *)(puVar40 + -8) = 0x4081ca;
                    uVar17 = dcgettext(0,"cannot create symbolic link %s",5);
                    uVar31 = (ulong)local_2c8 & 0xffffffff;
                    *(undefined8 *)(puVar40 + -8) = 0x4081df;
                    error(0,uVar31,uVar17,uVar16);
                    goto LAB_004065d0;
                  }
                }
LAB_00407a67:
                *(undefined8 *)(puVar40 + -8) = 0x407a6f;
                free(pcVar42);
                __group = local_278.st_gid;
                _Var14 = local_278.st_uid;
                ppbVar24 = local_2c0;
                local_329 = *(byte *)((long)param_6 + 0x25);
                if (*(byte *)((long)param_6 + 0x25) != 0) goto LAB_00406acd;
                local_2c8._0_1_ = *(byte *)((long)param_6 + 0x1d);
                if ((byte)local_2c8 == 0) {
                  local_329 = (byte)local_2c8;
                  local_2f0 = (byte **)CONCAT71(local_2f0._1_7_,1);
                  local_2e8 = (byte **)CONCAT71(local_2e8._1_7_,1);
                }
                else {
                  local_2c8 = (int *)((ulong)local_2c8 & 0xffffffffffffff00 | (ulong)(byte)local_2c8
                                     );
                  *(undefined8 *)(puVar40 + -8) = 0x40868f;
                  iVar9 = lchown((char *)ppbVar24,_Var14,__group);
                  if (iVar9 == 0) {
                    local_2f0 = (byte **)((ulong)local_2f0 & 0xffffffffffffff00 |
                                         (ulong)local_2c8 & 0xff);
                    local_2e8 = (byte **)((ulong)local_2e8 & 0xffffffffffffff00 |
                                         (ulong)local_2c8 & 0xff);
                    local_2c8._0_1_ = 0;
                  }
                  else {
                    *(undefined8 *)(puVar40 + -8) = 0x4086a7;
                    bVar8 = FUN_00405400(param_6);
                    local_2f0 = (byte **)((ulong)local_2f0 & 0xffffffffffffff00 | (ulong)bVar8);
                    if (bVar8 == 0) {
                      *(undefined8 *)(puVar40 + -8) = 0x409047;
                      uVar16 = dcgettext(0,"failed to preserve ownership for %s",5);
                      *(undefined8 *)(puVar40 + -8) = 0x40904f;
                      piVar15 = __errno_location();
                      ppbVar24 = local_2c0;
                      iVar9 = *piVar15;
                      *(undefined8 *)(puVar40 + -8) = 0x409064;
                      error(0,iVar9,uVar16,ppbVar24);
                      local_329 = *(byte *)((long)param_6 + 0x24);
                      if (*(byte *)((long)param_6 + 0x24) != 0) goto LAB_004065d0;
                      local_2f0 = (byte **)((ulong)local_2f0 & 0xffffffffffffff00 |
                                           (ulong)local_2c8 & 0xff);
                      local_2e8 = (byte **)((ulong)local_2e8 & 0xffffffffffffff00 |
                                           (ulong)local_2c8 & 0xff);
                      local_2c8._0_1_ = 0;
                    }
                    else {
                      local_2c8._0_1_ = 0;
                      local_2e8 = (byte **)((ulong)local_2e8 & 0xffffffffffffff00 | (ulong)bVar8);
                    }
                  }
                }
                goto LAB_00405c05;
              }
              *(undefined8 *)(puVar40 + -8) = 0x4087cd;
              uVar21 = FUN_0040dd80(4,param_1);
              pcVar42 = "cannot read symbolic link %s";
            }
          }
LAB_004065b0:
          *(undefined8 *)(puVar36 + -8) = 0x4065b7;
          uVar16 = dcgettext(0,pcVar42,5);
          *(undefined8 *)(puVar36 + -8) = 0x4065bf;
          piVar15 = __errno_location();
          iVar9 = *piVar15;
          *(undefined8 *)(puVar36 + -8) = 0x4065d0;
          error(0,iVar9,uVar16,uVar21);
          puVar37 = puVar36;
        }
        else {
          uVar47 = *(undefined *)((long)param_6 + 0x16);
          *(undefined8 *)(puVar40 + -8) = 0x406bcd;
          bVar8 = FUN_00404c10(param_1,ppbVar24,uVar47,0);
          local_2c8._0_1_ = 0;
          local_329 = 0;
          local_2e8 = (byte **)((ulong)local_2e8 & 0xffffffffffffff00 | (ulong)bVar8);
joined_r0x00406bdf:
          if (bVar8 != 0) goto LAB_00405c05;
        }
      }
      else {
        *(undefined8 *)(puVar40 + -8) = 0x4063ee;
        cVar4 = FUN_00405210(param_1,ppbVar24,uVar11);
        if (cVar4 == '\0') {
          return uVar13;
        }
        local_310 = (stat *)((ulong)local_310 & 0xffffffff00000000 |
                            (ulong)uVar10 & 0xffffffff0000003f);
        ppbVar24 = local_2f0;
        if (local_2cc != 0x4000) goto LAB_00405b81;
joined_r0x0040642f:
        for (; uVar16 = local_2c0, ppbVar24 != (byte **)0x0; ppbVar24 = (byte **)*ppbVar24) {
          if ((ppbVar24[1] == (byte *)local_278.st_ino) && (ppbVar24[2] == (byte *)local_278.st_dev)
             ) {
            *(undefined8 *)(puVar40 + -8) = 0x406465;
            uVar21 = FUN_0040dd80(4,param_1);
            pcVar42 = "cannot copy cyclic symbolic link %s";
            goto LAB_00406472;
          }
        }
        puVar34 = puVar40 + -0x20;
        puVar36 = puVar40 + -0x20;
        puVar37 = puVar40 + -0x20;
        local_320 = (byte **)((ulong)(puVar40 + -0x11) & 0xfffffffffffffff0);
        *local_320 = (byte *)local_2f0;
        local_320[1] = (byte *)local_278.st_ino;
        local_320[2] = (byte *)local_278.st_dev;
        if (((byte)local_2d8 != '\0') || ((local_1e8.st_mode & 0xf000) != 0x4000)) {
          *(undefined8 *)(puVar40 + -0x28) = 0x406664;
          iVar9 = mkdir((char *)uVar16,~(uint)local_310 & uVar10 & 0xfff);
          ppbVar24 = local_2c0;
          if (iVar9 == 0) {
            *(undefined8 *)(puVar40 + -0x28) = 0x406684;
            iVar9 = __lxstat(1,(char *)ppbVar24,&local_1e8);
            uVar10 = local_1e8.st_mode;
            ppbVar24 = local_2c0;
            if (iVar9 == 0) {
              local_329 = 0;
              if ((local_1e8.st_mode & 0x1c0) != 0x1c0) {
                uVar11 = local_1e8.st_mode | 0x1c0;
                *(undefined8 *)(puVar40 + -0x28) = 0x4066be;
                iVar9 = chmod((char *)ppbVar24,uVar11);
                ppbVar24 = local_2c0;
                local_34c = uVar10;
                local_329 = 1;
                if (iVar9 != 0) {
                  *(undefined8 *)(puVar40 + -0x28) = 0x408081;
                  uVar21 = FUN_0040dd80(4,ppbVar24);
                  pcVar42 = "setting permissions for %s";
                  puVar36 = puVar40 + -0x20;
                  goto LAB_004065b0;
                }
              }
              ppbVar24 = local_2c0;
              if (*param_8 == 0) {
                *(undefined8 *)(puVar40 + -0x28) = 0x407b51;
                FUN_004096d0(ppbVar24,local_1e8.st_ino,local_1e8.st_dev);
                *param_8 = 1;
              }
              ppbVar24 = local_2c0;
              if (*(char *)((long)param_6 + 0x2e) != '\0') {
                if (*(char *)(param_6 + 3) == '\0') {
                  *(undefined8 *)(puVar40 + -0x28) = 0x407cc0;
                  FUN_00404a30(param_1,ppbVar24,0);
                }
                else {
                  *(undefined8 *)(puVar40 + -0x28) = 0x406704;
                  uVar16 = FUN_0040dd80(4,ppbVar24);
                  *(undefined8 *)(puVar40 + -0x28) = 0x406718;
                  uVar17 = dcgettext(0,"created directory %s\n",5);
                  *(undefined8 *)(puVar40 + -0x28) = 0x40672a;
                  __printf_chk(1,uVar17,uVar16);
                }
              }
              goto LAB_00406730;
            }
            *(undefined8 *)(puVar40 + -0x28) = 0x407c34;
            uVar21 = FUN_0040dd80(4,ppbVar24);
            pcVar42 = "cannot stat %s";
            puVar36 = puVar40 + -0x20;
          }
          else {
            *(undefined8 *)(puVar40 + -0x28) = 0x4075a9;
            uVar21 = FUN_0040dd80(4,ppbVar24);
            pcVar42 = "cannot create directory %s";
          }
          goto LAB_004065b0;
        }
        if (((ulong)param_6[4] & 0xff000000ff00) == 0) {
LAB_00407844:
          local_329 = 0;
          local_310 = (stat *)((ulong)local_310 & 0xffffffff00000000);
LAB_00406730:
          bVar8 = local_300 != (stat *)0x0 & *(byte *)((long)param_6 + 0x1c);
          local_2e8 = (byte **)((ulong)local_2e8 & 0xffffffffffffff00 | (ulong)bVar8);
          if (bVar8 == 0) {
LAB_0040674f:
            local_c8._0_8_ = *param_6;
            local_c8._8_8_ = param_6[1];
            local_c8._16_8_ = param_6[2];
            stack0xffffffffffffff50 = param_6[3];
            local_a8 = param_6[4];
            pbStack_a0 = param_6[5];
            local_98 = param_6[6];
            ppbStack_90 = (byte **)param_6[7];
            local_88 = param_6[8];
            *(undefined8 *)(puVar40 + -0x28) = 0x406798;
            ppbVar24 = (byte **)FUN_0040e7f0(param_1,2);
            local_338 = ppbVar24;
            if (ppbVar24 == (byte **)0x0) {
              *(undefined8 *)(puVar40 + -0x28) = 0x40802f;
              local_2c8 = (int *)FUN_0040dd80(4,param_1);
              *(undefined8 *)(puVar40 + -0x28) = 0x408047;
              uVar16 = dcgettext(0,"cannot access %s",5);
              *(undefined8 *)(puVar40 + -0x28) = 0x40804f;
              piVar15 = __errno_location();
              uVar31 = (ulong)local_2c8;
              iVar9 = *piVar15;
              *(undefined8 *)(puVar40 + -0x28) = 0x408064;
              error(0,iVar9,uVar16,uVar31);
              local_2e8 = (byte **)((ulong)local_2e8 & 0xffffffffffffff00);
            }
            else {
              if (*(int *)((long)param_6 + 4) == 3) {
                local_c8._0_8_ = (byte *)CONCAT44(2,local_c8._0_4_);
              }
              if (*(char *)ppbVar24 == '\0') {
                bVar8 = 0;
                local_2e8 = (byte **)CONCAT71(local_2e8._1_7_,1);
              }
              else {
                local_340 = (byte **)((ulong)local_340 & 0xffffffffffffff00 | (ulong)(byte)uVar13);
                local_318 = (stat *)&local_158;
                bVar8 = 0;
                local_328 = (stat *)local_c8;
                local_348 = param_6;
                local_2e8 = (byte **)CONCAT71(local_2e8._1_7_,1);
                local_300 = (stat *)local_2a8;
                local_2f0 = param_1;
                local_330 = param_7;
                do {
                  ppbVar3 = local_2f0;
                  *(undefined8 *)(puVar40 + -0x28) = 0x406860;
                  pvVar20 = (void *)FUN_0040aeb0(ppbVar3,ppbVar24,0);
                  ppbVar3 = local_2c0;
                  *(undefined8 *)(puVar40 + -0x28) = 0x406874;
                  __ptr = (void *)FUN_0040aeb0(ppbVar3,ppbVar24,0);
                  psVar46 = local_2e0;
                  ppbVar3 = local_320;
                  psVar22 = local_328;
                  uVar21 = (ulong)local_2c8 & 0xffffffff;
                  bVar5 = *param_8;
                  *(undefined8 *)(puVar40 + -0x28) = 0;
                  *(stat **)(puVar40 + -0x30) = local_300;
                  *(stat **)(puVar40 + -0x38) = local_318;
                  *(undefined8 *)(puVar40 + -0x40) = 0;
                  local_158 = local_158 & 0xffffff00 | (uint)bVar5;
                  *(undefined8 *)(puVar40 + -0x48) = 0x4068ba;
                  bVar5 = FUN_00405650(pvVar20,__ptr,uVar21,psVar46,ppbVar3,psVar22);
                  local_2e8 = (byte **)((ulong)local_2e8 & 0xffffffffffffff00 |
                                       (ulong)((byte)local_2e8 & bVar5));
                  *param_9 = *param_9 | local_2a8[0];
                  *(undefined8 *)(puVar40 + -0x28) = 0x4068d7;
                  free(__ptr);
                  *(undefined8 *)(puVar40 + -0x28) = 0x4068df;
                  free(pvVar20);
                  if (local_2a8[0] != '\0') break;
                  bVar8 = bVar8 | (byte)local_158;
                  *(undefined8 *)(puVar40 + -0x28) = 0x40683f;
                  sVar19 = strlen((char *)ppbVar24);
                  ppbVar24 = (byte **)((long)ppbVar24 + sVar19 + 1);
                } while (*(char *)ppbVar24 != '\0');
                uVar13 = (uint)(byte)local_340;
                uVar21 = (ulong)local_330;
                param_6 = local_348;
                param_1 = local_2f0;
              }
              ppbVar24 = local_338;
              *(undefined8 *)(puVar40 + -0x28) = 0x406917;
              free(ppbVar24);
              *param_8 = bVar8;
            }
            local_2f0 = (byte **)((ulong)local_2f0 & 0xffffffffffffff00);
            local_2c8._0_1_ = 0;
            puVar34 = puVar40 + -0x20;
          }
          else {
            local_2f0 = (byte **)((ulong)local_2f0 & 0xffffffffffffff00);
            local_2c8._0_1_ = 0;
            if ((byte *)local_300->st_dev == (byte *)local_278.st_dev) goto LAB_0040674f;
          }
          goto LAB_00405c05;
        }
        uVar47 = *(undefined *)((long)param_6 + 0x25);
        *(undefined8 *)(puVar40 + -0x28) = 0x407dad;
        cVar4 = FUN_004052e0(uVar16,uVar47,0);
        if ((cVar4 != '\0') || (*(char *)((long)param_6 + 0x26) == '\0')) goto LAB_00407844;
      }
LAB_004065d0:
      puVar40 = puVar37;
      if (*(char *)((long)param_6 + 0x25) == '\0') {
        if (local_2f8 == (stat *)0x0) {
          *(undefined8 *)(puVar37 + -8) = 0x4065fc;
          FUN_00409640(local_278.st_ino,local_278.st_dev);
        }
LAB_00406073:
        ppbVar24 = local_2c0;
        psVar22 = local_308;
        if (local_308 != (stat *)0x0) {
          *(undefined8 *)(puVar40 + -8) = 0x40608f;
          iVar9 = rename((char *)psVar22,(char *)ppbVar24);
          ppbVar24 = local_2c0;
          if (iVar9 == 0) {
            if (*(char *)((long)param_6 + 0x2e) != '\0') {
              *(undefined8 *)(puVar40 + -8) = 0x4060b8;
              uVar16 = FUN_0040dca0(1,4,ppbVar24);
              psVar22 = local_308;
              *(undefined8 *)(puVar40 + -8) = 0x4060ce;
              uVar17 = FUN_0040dca0(0,4,psVar22);
              *(undefined8 *)(puVar40 + -8) = 0x4060e2;
              uVar18 = dcgettext(0,"%s -> %s (unbackup)\n",5);
              *(undefined8 *)(puVar40 + -8) = 0x4060f7;
              __printf_chk(1,uVar18,uVar17,uVar16);
            }
          }
          else {
            *(undefined8 *)(puVar40 + -8) = 0x406e91;
            uVar16 = FUN_0040dd80(4,ppbVar24);
            *(undefined8 *)(puVar40 + -8) = 0x406ea5;
            uVar17 = dcgettext(0,"cannot un-backup %s",5);
            *(undefined8 *)(puVar40 + -8) = 0x406ead;
            piVar15 = __errno_location();
            iVar9 = *piVar15;
            *(undefined8 *)(puVar40 + -8) = 0x406ebe;
            error(0,iVar9,uVar17,uVar16);
          }
        }
        return uVar13;
      }
    }
LAB_00406acd:
    *(undefined8 *)(puVar40 + -8) = 0x406ad2;
    FUN_004049f0();
    uVar16 = extraout_RDX;
    puVar41 = puVar40;
  }
  *(undefined8 *)(puVar41 + -8) = 0x406ae4;
  uVar16 = dcgettext(0,"-r not specified; omitting directory %s",uVar16);
  puVar38 = puVar41;
LAB_00406999:
  *(undefined8 *)(puVar38 + -8) = 0x4069ad;
  error(0,0,uVar16,uVar21);
  return 0;
}


void FUN_004094d0(undefined8 param_1,undefined8 param_2,undefined param_3,uint *param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined local_9 [9];
  
  if (param_4 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("co != NULL","src/copy.c",0xb60,"valid_options");
  }
  if (3 < *param_4) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("VALID_BACKUP_TYPE (co->backup_type)","src/copy.c",0xb61,"valid_options");
  }
  if (2 < param_4[3] - 1) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("VALID_SPARSE_MODE (co->sparse_mode)","src/copy.c",0xb62,"valid_options");
  }
  if (param_4[0xd] < 3) {
    if ((*(char *)((long)param_4 + 0x17) != '\0') && (*(char *)(param_4 + 0xb) != '\0')) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("!(co->hard_link && co->symbolic_link)","src/copy.c",0xb64,"valid_options");
    }
    if ((param_4[3] != 2) && (param_4[0xd] == 2)) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("! (co->reflink_mode == REFLINK_ALWAYS && co->sparse_mode != SPARSE_AUTO)",
                    "src/copy.c",0xb67,"valid_options");
    }
    local_9[0] = 0;
    DAT_0061d908 = param_2;
    DAT_0061d910 = param_1;
    FUN_00405650(param_1,param_2,param_3,0,0,param_4,1,local_9,param_5,param_6);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("VALID_REFLINK_MODE (co->reflink_mode)","src/copy.c",0xb63,"valid_options");
}


ulong FUN_004095f0(ulong *param_1,ulong param_2)

{
  return *param_1 % param_2;
}


ulong FUN_00409600(long *param_1,long *param_2)

{
  if (*param_1 != *param_2) {
    return 0;
  }
  return param_2[1] & 0xffffffffffffff00U | (ulong)(param_1[1] == param_2[1]);
}


void FUN_00409620(void *param_1)

{
  free(*(void **)((long)param_1 + 0x10));
  free(param_1);
  return;
}


void FUN_00409640(undefined8 param_1,undefined8 param_2)

{
  void *__ptr;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  local_28 = param_1;
  local_20 = param_2;
  __ptr = (void *)FUN_0040c0a0(DAT_0061d918,&local_28);
  if (__ptr != (void *)0x0) {
    free(*(void **)((long)__ptr + 0x10));
    free(__ptr);
  }
  return;
}


undefined8 FUN_00409690(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 local_28;
  undefined8 local_20;
  
  local_28 = param_1;
  local_20 = param_2;
  lVar1 = FUN_0040b650(DAT_0061d918,&local_28);
  if (lVar1 != 0) {
    return *(undefined8 *)(lVar1 + 0x10);
  }
  return 0;
}


undefined8 FUN_004096d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *__ptr;
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  __ptr = (undefined8 *)FUN_004100e0(0x18);
  uVar1 = FUN_00410310(param_1);
  uVar3 = DAT_0061d918;
  *__ptr = param_2;
  __ptr[2] = uVar1;
  __ptr[1] = param_3;
  puVar2 = (undefined8 *)FUN_0040c060(uVar3,__ptr);
  if (puVar2 != (undefined8 *)0x0) {
    uVar3 = 0;
    if (__ptr != puVar2) {
      free((void *)__ptr[2]);
      free(__ptr);
      uVar3 = puVar2[2];
    }
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00410330();
}


void FUN_00409750(void)

{
  DAT_0061d918 = FUN_0040b8c0(0x67,0,FUN_004095f0,FUN_00409600,FUN_00409620);
  if (DAT_0061d918 != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00410330();
}


void FUN_00409790(void)

{
  FUN_0040bb00(DAT_0061d918);
  return;
}


void FUN_004097a0(undefined4 param_1,undefined4 *param_2)

{
  *param_2 = param_1;
  *(undefined8 *)(param_2 + 10) = 0;
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined2 *)(param_2 + 8) = 0;
  param_2[4] = 1;
  return;
}


bool FUN_004097d0(int *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  byte bVar12;
  ulong local_1038;
  ulong local_1030;
  int local_1028;
  uint local_1024;
  undefined4 local_1020;
  ulong local_1018 [509];
  
  bVar12 = 0;
  uVar11 = 0;
  puVar7 = *(ulong **)(param_1 + 10);
  local_1038 = *(ulong *)(param_1 + 2);
  do {
    puVar5 = &local_1038;
    for (lVar3 = 0x200; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + (ulong)bVar12 * -2 + 1;
    }
    local_1028 = param_1[4];
    local_1030 = ~local_1038;
    local_1020 = 0x48;
    iVar1 = ioctl(*param_1,0xc020660b,&local_1038);
    if (iVar1 < 0) {
LAB_004099f0:
      if (*(long *)(param_1 + 2) == 0) {
        *(undefined *)(param_1 + 8) = 1;
        return false;
      }
      return false;
    }
    if (local_1024 == 0) {
      *(undefined *)((long)param_1 + 0x21) = 1;
      return *(long *)(param_1 + 2) != 0;
    }
    if (~(ulong)local_1024 < *(ulong *)(param_1 + 6)) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("scan->ei_count <= SIZE_MAX - fiemap->fm_mapped_extents","src/extent-scan.c",
                    0x7e,"extent_scan_read");
    }
    lVar3 = *(long *)(param_1 + 10);
    uVar4 = *(ulong *)(param_1 + 6) + (ulong)local_1024;
    *(ulong *)(param_1 + 6) = uVar4;
    if ((SUB168(ZEXT816(0x18) * ZEXT816(uVar4),0) < 0) ||
       (SUB168(ZEXT816(0x18) * ZEXT816(uVar4) >> 0x40,0) != 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00410330();
    }
    lVar2 = FUN_00410140(lVar3,uVar4 * 0x18);
    *(long *)(param_1 + 10) = lVar2;
    puVar7 = (ulong *)((long)puVar7 + (lVar2 - lVar3));
    if (local_1024 != 0) {
      if (0x7fffffffffffffff - local_1018[2] < local_1018[0]) {
LAB_00409946:
                    /* WARNING: Subroutine does not return */
        __assert_fail("fm_extents[i].fe_logical <= OFF_T_MAX - fm_extents[i].fe_length",
                      "src/extent-scan.c",0x8d,"extent_scan_read");
      }
      uVar9 = 0;
      uVar4 = local_1018[2];
      puVar5 = local_1018;
      uVar6 = local_1018[0];
      do {
        if (uVar11 == 0) {
          uVar8 = *(ulong *)(param_1 + 2);
          if (uVar6 < uVar8) goto LAB_00409902;
          uVar10 = *(uint *)(puVar5 + 5);
LAB_0040996e:
          uVar8 = (ulong)uVar11;
          uVar9 = uVar9 + 1;
          uVar11 = uVar11 + 1;
          puVar7 = (ulong *)(*(long *)(param_1 + 10) + uVar8 * 0x18);
          *puVar7 = uVar6;
          puVar7[1] = uVar4;
          *(uint *)(puVar7 + 2) = uVar10;
        }
        else {
          uVar10 = *(uint *)(puVar5 + 5);
          uVar8 = *puVar7 + puVar7[1];
          if ((*(uint *)(puVar7 + 2) == (uVar10 & 0xfffffffe)) && (uVar6 == uVar8)) {
            *(uint *)(puVar7 + 2) = uVar10;
            uVar9 = uVar9 + 1;
            puVar7[1] = uVar4 + puVar7[1];
          }
          else {
            if (uVar8 <= uVar6) goto LAB_0040996e;
LAB_00409902:
            if (uVar8 - uVar6 < uVar4) goto LAB_004099f0;
            *puVar5 = uVar8;
            puVar5[2] = (uVar6 + uVar4) - uVar8;
          }
        }
        if (local_1024 <= uVar9) break;
        puVar5 = local_1018 + (ulong)uVar9 * 7;
        uVar4 = local_1018[(ulong)uVar9 * 7 + 2];
        uVar6 = *puVar5;
        if (0x7fffffffffffffff - uVar4 < uVar6) goto LAB_00409946;
      } while( true );
    }
    if ((*(byte *)(puVar7 + 2) & 1) != 0) {
      *(undefined *)((long)param_1 + 0x21) = 1;
LAB_00409a56:
      *(ulong *)(param_1 + 6) = (ulong)uVar11;
      return true;
    }
    if (0x48 < uVar11) {
      if (*(char *)((long)param_1 + 0x21) == '\0') {
        uVar4 = (ulong)(uVar11 - 1);
        *(ulong *)(param_1 + 6) = uVar4;
        *(long *)(param_1 + 2) =
             *(long *)(*(long *)(param_1 + 10) + -0x10 + uVar4 * 0x18) +
             *(long *)(*(long *)(param_1 + 10) + -0x18 + uVar4 * 0x18);
        return true;
      }
      goto LAB_00409a56;
    }
    *(ulong *)(param_1 + 6) = (ulong)uVar11;
    if (*(char *)((long)param_1 + 0x21) != '\0') {
      return true;
    }
    local_1038 = puVar7[1] + *puVar7;
    *(ulong *)(param_1 + 2) = local_1038;
    if (uVar11 == 0x48) {
      return true;
    }
  } while( true );
}


void FUN_00409aa0(char *param_1,int *param_2)

{
  linkat(*param_2,*(char **)(param_2 + 2),param_2[4],param_1,param_2[5]);
  return;
}


void * FUN_00409ac0(void *param_1,void *param_2)

{
  ulong __size;
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_0040aa00();
  __size = (lVar1 - (long)param_1) + 9;
  if ((0x100 < __size) && (param_2 = malloc(__size), param_2 == (void *)0x0)) {
    return (void *)0x0;
  }
  puVar2 = (undefined8 *)mempcpy(param_2,param_1,lVar1 - (long)param_1);
  *puVar2 = DAT_00416d28;
  *(undefined *)(puVar2 + 1) = DAT_00416d30;
  return param_2;
}


void FUN_00409b30(char *param_1,char **param_2)

{
  symlinkat(*param_2,*(int *)(param_2 + 1),param_1);
  return;
}


int FUN_00409b50(int param_1,char *param_2,int param_3,char *param_4,int param_5,char param_6)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  char *__old;
  int local_158 [2];
  char *local_150;
  int local_148;
  int local_144;
  char local_138 [264];
  
  iVar1 = linkat(param_1,param_2,param_3,param_4,param_5);
  if ((param_6 == '\x01') && (iVar1 != 0)) {
    piVar3 = __errno_location();
    if (*piVar3 == 0x11) {
      __old = (char *)FUN_00409ac0(param_4,local_138);
      if (__old == (char *)0x0) {
        iVar1 = -1;
      }
      else {
        local_158[0] = param_1;
        local_150 = param_2;
        local_148 = param_3;
        local_144 = param_5;
        iVar1 = FUN_0040e910(__old,0,local_158,FUN_00409aa0,6);
        if (iVar1 == 0) {
          iVar2 = renameat(param_3,__old,param_3,param_4);
          if (iVar2 != 0) {
            iVar2 = *piVar3;
          }
          unlinkat(param_3,__old,0);
        }
        else {
          iVar2 = *piVar3;
        }
        if (__old != local_138) {
          free(__old);
        }
        iVar1 = 1;
        if (iVar2 != 0) {
          *piVar3 = iVar2;
          iVar1 = -1;
        }
      }
    }
  }
  return iVar1;
}


int FUN_00409c90(char *param_1,int param_2,char *param_3,char param_4)

{
  int iVar1;
  int *piVar2;
  char *__old;
  char *local_148;
  int local_140;
  char local_138 [264];
  
  iVar1 = symlinkat(param_1,param_2,param_3);
  if (param_4 != '\x01') {
    return iVar1;
  }
  if (iVar1 == 0) {
    return 0;
  }
  piVar2 = __errno_location();
  if (*piVar2 != 0x11) {
    return iVar1;
  }
  __old = (char *)FUN_00409ac0(param_3,local_138);
  if (__old != (char *)0x0) {
    local_148 = param_1;
    local_140 = param_2;
    iVar1 = FUN_0040e910(__old,0,&local_148,FUN_00409b30,6);
    if (iVar1 == 0) {
      iVar1 = renameat(param_2,__old,param_2,param_3);
      if (iVar1 == 0) {
        if (__old == local_138) {
          return 1;
        }
        free(__old);
        return 1;
      }
      iVar1 = *piVar2;
      unlinkat(param_2,__old,0);
    }
    else {
      iVar1 = *piVar2;
    }
    if (__old != local_138) {
      free(__old);
    }
    if (iVar1 == 0) {
      return 1;
    }
    *piVar2 = iVar1;
    return -1;
  }
  return -1;
}


int FUN_00409d90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int *piVar4;
  
  iVar1 = FUN_0040c3f0();
  if (iVar1 != -2) {
    if (iVar1 == -1) {
      uVar2 = FUN_0040dfd0(param_3);
      uVar3 = dcgettext(0,"preserving permissions for %s",5);
      piVar4 = __errno_location();
      error(0,*piVar4,uVar3,uVar2);
    }
    return iVar1;
  }
  uVar2 = FUN_0040dfd0(param_1);
  piVar4 = __errno_location();
  error(0,*piVar4,&DAT_00418333,uVar2);
  return -2;
}


int FUN_00409e20(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int *piVar4;
  
  iVar1 = FUN_0040c430();
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_0040dfd0(param_1);
  uVar3 = dcgettext(0,"setting permissions for %s",5);
  piVar4 = __errno_location();
  error(0,*piVar4,uVar3,uVar2);
  return iVar1;
}


char * FUN_00409e80(char *param_1,ulong param_2)

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


void FUN_00409f70(char *param_1,long param_2)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  ulong uVar3;
  int *piVar4;
  ulong uVar5;
  ulong uVar6;
  
  puVar2 = (undefined2 *)FUN_0040aa00();
  uVar3 = FUN_0040aa60(puVar2);
  if (0xe < uVar3) {
    uVar1 = *puVar2;
    *puVar2 = 0x2e;
    piVar4 = __errno_location();
    *piVar4 = 0;
    uVar5 = pathconf(param_1,3);
    if ((-1 < (long)uVar5) || (uVar6 = 0xff, *piVar4 == 0)) {
      uVar6 = uVar5;
    }
    *puVar2 = uVar1;
    if (uVar6 < uVar3) {
      param_1 = param_1 + param_2;
      if ((ulong)((long)param_1 - (long)puVar2) < uVar6) {
        uVar6 = ((long)param_1 - (long)puVar2) + 1;
      }
      else {
        param_1 = (char *)((long)puVar2 + (uVar6 - 1));
      }
      *param_1 = '~';
      *(undefined *)((long)puVar2 + uVar6) = 0;
      return;
    }
  }
  return;
}


void FUN_0040a040(char *param_1)

{
  char *pcVar1;
  
  if ((((param_1 != (char *)0x0) ||
       (param_1 = getenv("SIMPLE_BACKUP_SUFFIX"), param_1 != (char *)0x0)) && (*param_1 != '\0')) &&
     (pcVar1 = (char *)FUN_0040aa00(param_1), pcVar1 == param_1)) {
    DAT_0061d920 = param_1;
    return;
  }
  DAT_0061d920 = &DAT_00416d36;
  return;
}


void * FUN_0040a0a0(void *param_1,int param_2,char param_3)

{
  undefined4 *puVar1;
  ulong uVar2;
  char cVar3;
  undefined2 uVar4;
  int iVar5;
  char *pcVar6;
  size_t sVar7;
  long lVar8;
  ulong __n;
  void *pvVar9;
  long lVar10;
  dirent *pdVar11;
  size_t sVar12;
  void *__dest;
  undefined2 *puVar13;
  int *piVar14;
  DIR *__dirp;
  ulong uVar15;
  byte bVar16;
  long lVar17;
  byte bVar18;
  ulong local_78;
  size_t local_70;
  int local_58;
  
  pcVar6 = (char *)FUN_0040aa00();
  sVar7 = strlen(pcVar6);
  lVar17 = (long)pcVar6 - (long)param_1;
  lVar8 = sVar7 + lVar17;
  if (DAT_0061d920 == (char *)0x0) {
    FUN_0040a040();
  }
  sVar7 = strlen(DAT_0061d920);
  __n = sVar7 + 1;
  uVar15 = 9;
  if (8 < __n) {
    uVar15 = __n;
  }
  sVar7 = uVar15 + lVar8 + 1U;
  pvVar9 = malloc(sVar7);
  if (pvVar9 != (void *)0x0) {
    __dirp = (DIR *)0x0;
    __dest = pvVar9;
    local_58 = param_2;
    do {
      memcpy(__dest,param_1,lVar8 + 1U);
      if (local_58 == 1) {
        memcpy((void *)((long)__dest + lVar8),DAT_0061d920,__n);
      }
      else {
        puVar13 = (undefined2 *)((long)__dest + lVar17);
        lVar10 = FUN_0040aa60(puVar13);
        if (__dirp == (DIR *)0x0) {
          uVar4 = *puVar13;
          *puVar13 = 0x2e;
          __dirp = (DIR *)FUN_0040a880(__dest);
          puVar1 = (undefined4 *)((long)puVar13 + lVar10);
          if (__dirp != (DIR *)0x0) {
            *puVar13 = uVar4;
            *puVar1 = 0x7e317e2e;
            *(undefined *)(puVar1 + 1) = 0;
            goto LAB_0040a171;
          }
          piVar14 = __errno_location();
          iVar5 = *piVar14;
          *puVar13 = uVar4;
          bVar18 = (iVar5 == 0xc) + 2;
          *puVar1 = 0x7e317e2e;
          *(undefined *)(puVar1 + 1) = 0;
        }
        else {
          rewinddir(__dirp);
LAB_0040a171:
          bVar16 = 2;
          local_78 = 1;
          local_70 = sVar7;
LAB_0040a198:
          pdVar11 = readdir(__dirp);
          pvVar9 = __dest;
          bVar18 = bVar16;
          if (pdVar11 != (dirent *)0x0) {
            while( true ) {
              pcVar6 = pdVar11->d_name;
              sVar12 = strlen(pcVar6);
              __dest = pvVar9;
              if (sVar12 < lVar10 + 4U) break;
              iVar5 = memcmp((void *)((long)pvVar9 + lVar17),pcVar6,lVar10 + 2U);
              if (iVar5 != 0) break;
              pcVar6 = pcVar6 + lVar10 + 2U;
              if (8 < (byte)(*pcVar6 - 0x31U)) break;
              bVar18 = *pcVar6 == '9';
              uVar15 = 1;
              cVar3 = pcVar6[1];
              while ((int)cVar3 - 0x30U < 10) {
                uVar15 = uVar15 + 1;
                bVar18 = cVar3 == '9' & bVar18;
                cVar3 = pcVar6[uVar15];
              }
              if (((cVar3 != '~') || (pcVar6[uVar15 + 1] != '\0')) ||
                 ((uVar15 <= local_78 &&
                  ((local_78 != uVar15 ||
                   (iVar5 = memcmp((void *)((long)pvVar9 + lVar8 + 2),pcVar6,local_78), 0 < iVar5)))
                  ))) break;
              local_78 = bVar18 + uVar15;
              uVar2 = lVar8 + 4 + local_78;
              if (local_70 < uVar2) {
                local_70 = uVar2;
                if ((-1 < (long)(uVar2 * 2)) && (-1 < (long)uVar2)) {
                  local_70 = uVar2 * 2;
                }
                __dest = realloc(pvVar9,local_70);
                if (__dest == (void *)0x0) goto LAB_0040a4c8;
              }
              puVar13 = (undefined2 *)(lVar8 + (long)__dest);
              *puVar13 = 0x7e2e;
              *(undefined *)(puVar13 + 1) = 0x30;
              pvVar9 = memcpy((void *)((long)puVar13 + (ulong)bVar18 + 2),pcVar6,uVar15 + 2);
              pcVar6 = (char *)((long)pvVar9 + (uVar15 - 1));
              cVar3 = *(char *)((long)pvVar9 + (uVar15 - 1));
              while (cVar3 == '9') {
                *pcVar6 = '0';
                pcVar6 = pcVar6 + -1;
                cVar3 = *pcVar6;
              }
              *pcVar6 = cVar3 + '\x01';
              pdVar11 = readdir(__dirp);
              pvVar9 = __dest;
              bVar16 = bVar18;
              if (pdVar11 == (dirent *)0x0) goto LAB_0040a370;
            }
            goto LAB_0040a198;
          }
        }
LAB_0040a370:
        if (bVar18 == 2) {
          if (local_58 == 2) {
            memcpy((void *)((long)__dest + lVar8),DAT_0061d920,__n);
            local_58 = 1;
          }
        }
        else {
          pvVar9 = __dest;
          if (bVar18 == 3) {
LAB_0040a4c8:
            free(pvVar9);
            piVar14 = __errno_location();
            *piVar14 = 0xc;
            return (void *)0x0;
          }
          if (bVar18 != 1) goto LAB_0040a38b;
        }
        FUN_00409f70(__dest,lVar8);
      }
LAB_0040a38b:
      if (param_3 == '\0') goto LAB_0040a538;
      if (__dirp == (DIR *)0x0) {
LAB_0040a410:
        iVar5 = -100;
        lVar17 = 0;
        pvVar9 = __dest;
      }
      else {
        iVar5 = dirfd(__dirp);
        pvVar9 = (void *)((long)__dest + lVar17);
        if (iVar5 < 0) goto LAB_0040a410;
      }
      iVar5 = FUN_0040dff0(0xffffff9c,param_1,iVar5,pvVar9,local_58 != 1);
      if (iVar5 == 0) {
LAB_0040a538:
        if (__dirp == (DIR *)0x0) {
          return __dest;
        }
        closedir(__dirp);
        return __dest;
      }
      piVar14 = __errno_location();
      iVar5 = *piVar14;
    } while (iVar5 == 0x11);
    if (__dirp != (DIR *)0x0) {
      closedir(__dirp);
    }
    pvVar9 = (void *)0x0;
    free(__dest);
    *piVar14 = iVar5;
  }
  return pvVar9;
}


void FUN_0040a570(undefined8 param_1,undefined8 param_2)

{
  FUN_0040a0a0(param_1,param_2,1);
  return;
}


undefined4 FUN_0040a580(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = FUN_00413ac0(param_1,param_2,&PTR_DAT_00416dc0,&DAT_00416da0,4,PTR_FUN_0061d480);
  return *(undefined4 *)(&DAT_00416da0 + lVar1 * 4);
}


void FUN_0040a5b0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = FUN_0040a0a0(param_1,param_2,0);
  if (lVar1 != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00410330();
}


undefined8 FUN_0040a5d0(undefined8 param_1,char *param_2)

{
  undefined8 uVar1;
  
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    uVar1 = FUN_0040a580();
    return uVar1;
  }
  return 2;
}


undefined8 FUN_0040a5f0(char *param_1,char *param_2)

{
  undefined8 uVar1;
  
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    param_2 = getenv("VERSION_CONTROL");
    if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
      return 2;
    }
    param_1 = "$VERSION_CONTROL";
  }
  uVar1 = FUN_0040a580(param_1,param_2);
  return uVar1;
}


ulong FUN_0040a640(ulong param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (param_1 == 0) {
    param_1 = 0x2000;
    if (param_2 != 0) {
      param_1 = param_2;
    }
  }
  else {
    uVar3 = param_1;
    uVar1 = param_2;
    if (param_2 != 0) {
      do {
        uVar2 = uVar1;
        uVar1 = uVar3 % uVar2;
        uVar3 = uVar2;
      } while (uVar1 != 0);
      uVar3 = param_2 * (param_1 / uVar2);
      if ((uVar3 < param_3 || uVar3 - param_3 == 0) && (uVar3 / param_2 == param_1 / uVar2)) {
        return uVar3;
      }
    }
  }
  if (param_1 <= param_3) {
    param_3 = param_1;
  }
  return param_3;
}


void FUN_0040a6b0(undefined8 param_1)

{
  DAT_0061d928 = param_1;
  return;
}


void FUN_0040a6c0(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  int *piVar4;
  undefined8 uVar5;
  
  uVar3 = stdin;
  lVar2 = FUN_004105e0(stdin);
  if (lVar2 == 0) {
    iVar1 = FUN_00413b80(uVar3);
    if (iVar1 == 0) {
      FUN_0040a7e0();
      return;
    }
  }
  else {
    iVar1 = FUN_00410610(uVar3,0,1);
    if (iVar1 == 0) {
      iVar1 = FUN_004105a0(stdin);
      if (iVar1 != 0) {
        FUN_00413b80(stdin);
        goto LAB_0040a718;
      }
    }
    iVar1 = FUN_00413b80(stdin);
    if (iVar1 == 0) {
      FUN_0040a7e0();
      return;
    }
  }
LAB_0040a718:
  uVar3 = dcgettext(0,"error closing file",5);
  lVar2 = DAT_0061d928;
  piVar4 = __errno_location();
  if (lVar2 == 0) {
    error(0,*piVar4,&DAT_00418333,uVar3);
  }
  else {
    uVar5 = FUN_0040de20(lVar2);
    error(0,*piVar4,"%s: %s",uVar5,uVar3);
  }
  FUN_0040a7e0();
                    /* WARNING: Subroutine does not return */
  _exit(DAT_0061d408);
}


void FUN_0040a7c0(undefined8 param_1)

{
  DAT_0061d938 = param_1;
  return;
}


void FUN_0040a7d0(undefined param_1)

{
  DAT_0061d930 = param_1;
  return;
}


void FUN_0040a7e0(void)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  iVar1 = FUN_00413b80(stdout);
  if (iVar1 != 0) {
    piVar2 = __errno_location();
    if ((DAT_0061d930 == '\0') || (*piVar2 != 0x20)) {
      uVar3 = dcgettext(0,"write error",5);
      if (DAT_0061d938 == 0) {
        error(0,*piVar2,&DAT_00418333,uVar3);
      }
      else {
        uVar4 = FUN_0040de20();
        error(0,*piVar2,"%s: %s",uVar4,uVar3);
      }
      goto LAB_0040a85e;
    }
  }
  iVar1 = FUN_00413b80(stderr);
  if (iVar1 == 0) {
    return;
  }
LAB_0040a85e:
                    /* WARNING: Subroutine does not return */
  _exit(DAT_0061d408);
}


DIR * FUN_0040a880(char *param_1)

{
  uint uVar1;
  int __fd;
  DIR *__dirp;
  int *piVar2;
  DIR *pDVar3;
  int iVar4;
  
  __dirp = opendir(param_1);
  if (__dirp != (DIR *)0x0) {
    uVar1 = dirfd(__dirp);
    if (uVar1 < 3) {
      __fd = FUN_00410460(uVar1,0x406,3);
      piVar2 = __errno_location();
      if (__fd < 0) {
        iVar4 = *piVar2;
        pDVar3 = (DIR *)0x0;
      }
      else {
        pDVar3 = fdopendir(__fd);
        iVar4 = *piVar2;
        if (pDVar3 == (DIR *)0x0) {
          close(__fd);
        }
      }
      closedir(__dirp);
      *piVar2 = iVar4;
      return pDVar3;
    }
  }
  return __dirp;
}


void FUN_0040a920(void)

{
  long lVar1;
  
  lVar1 = FUN_0040a9a0();
  if (lVar1 != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00410330();
}


ulong FUN_0040a940(char *param_1)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  cVar1 = *param_1;
  lVar2 = FUN_0040aa00();
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


undefined * FUN_0040a9a0(void *param_1)

{
  size_t __n;
  undefined *__dest;
  
  __n = FUN_0040a940();
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


char * FUN_0040aa00(char *param_1)

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


void FUN_0040aa60(char *param_1)

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


bool FUN_0040aa90(char *param_1)

{
  char cVar1;
  long lVar2;
  char *pcVar3;
  
  pcVar3 = (char *)FUN_0040aa00();
  if (*pcVar3 == '\0') {
    pcVar3 = param_1;
  }
  lVar2 = FUN_0040aa60(pcVar3);
  cVar1 = pcVar3[lVar2];
  pcVar3[lVar2] = '\0';
  return cVar1 != '\0';
}


void FUN_0040aae0(FILE *param_1,int param_2)

{
  int __fd;
  
  if (param_1 != (FILE *)0x0) {
    __fd = fileno(param_1);
    posix_fadvise(__fd,0,0,param_2);
    return;
  }
  return;
}


void FUN_0040ab10(char *param_1,uint param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 & 0x40) != 0) {
    uVar2 = param_3 & 0xffffffff;
  }
  iVar1 = open(param_1,param_2,uVar2);
  FUN_0040eaf0(iVar1);
  return;
}


void FUN_0040ab60(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_1 == 0) {
    return;
  }
  puVar1 = (undefined8 *)FUN_004100e0(0x18);
  uVar2 = FUN_00410310(param_2);
  *puVar1 = uVar2;
  puVar1[1] = param_3[1];
  puVar1[2] = *param_3;
  puVar3 = (undefined8 *)FUN_0040c060(param_1,puVar1);
  if (puVar3 != (undefined8 *)0x0) {
    if (puVar1 != puVar3) {
      FUN_0040c330(puVar1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00410330();
}


ulong FUN_0040abf0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  if (param_1 != 0) {
    local_20 = param_3[1];
    local_18 = *param_3;
    local_28 = param_2;
    uVar1 = FUN_0040b650(param_1,&local_28);
    return uVar1 & 0xffffffffffffff00 | (ulong)(uVar1 != 0);
  }
  return 0;
}


void FUN_0040ac30(long param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x18) & 0xf000;
  if (uVar1 == 0x8000) {
    if (*(long *)(param_1 + 0x30) == 0) {
      dcgettext(0,"regular empty file",5);
      return;
    }
    dcgettext(0,"regular file",5);
    return;
  }
  if (uVar1 == 0x4000) {
    dcgettext(0,"directory",5);
    return;
  }
  if (uVar1 == 0xa000) {
    dcgettext(0,"symbolic link",5);
    return;
  }
  if (uVar1 != 0x6000) {
    if (uVar1 == 0x2000) {
      dcgettext(0,"character special file",5);
      return;
    }
    if (uVar1 != 0x1000) {
      if (uVar1 != 0xc000) {
        dcgettext(0,"weird file",5);
        return;
      }
      dcgettext(0,"socket",5);
      return;
    }
    dcgettext(0,&DAT_00416e86,5);
    return;
  }
  dcgettext(0,"block special file",5);
  return;
}


void FUN_0040ad20(uint param_1,undefined *param_2)

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
    *(undefined2 *)(param_2 + 10) = 0x20;
    return;
  }
  param_2[9] = (bVar1 & 0xb5) + 0x78;
  *(undefined2 *)(param_2 + 10) = 0x20;
  return;
}


void FUN_0040aea0(long param_1)

{
  FUN_0040ad20(*(undefined4 *)(param_1 + 0x18));
  return;
}


void FUN_0040aeb0(void)

{
  long lVar1;
  
  lVar1 = FUN_0040aed0();
  if (lVar1 != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00410330();
}


void * FUN_0040aed0(void *param_1,char *param_2,long *param_3)

{
  char cVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  size_t __n;
  void *__dest;
  undefined *puVar5;
  size_t __n_00;
  
  lVar3 = FUN_0040aa00();
  uVar4 = FUN_0040aa60(lVar3);
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


long FUN_0040afb0(undefined4 param_1,long param_2,long param_3)

{
  long lVar1;
  int *piVar2;
  long lVar3;
  
  if (param_3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    do {
      lVar1 = FUN_0040e290(param_1,param_2,param_3);
      if (lVar1 == -1) {
        return lVar3;
      }
      if (lVar1 == 0) {
        piVar2 = __errno_location();
        *piVar2 = 0x1c;
        return lVar3;
      }
      lVar3 = lVar3 + lVar1;
      param_2 = param_2 + lVar1;
      param_3 = param_3 - lVar1;
    } while (param_3 != 0);
  }
  return lVar3;
}


ulong FUN_0040b030(ulong param_1)

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
LAB_0040b0b0:
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
        if (uVar3 <= uVar4) goto LAB_0040b0b0;
        lVar5 = lVar5 + 8;
      } while (uVar1 != 0);
    }
    uVar3 = uVar3 + 2;
  } while( true );
}


ulong FUN_0040b0d0(ulong param_1,ulong param_2)

{
  return (param_1 >> 3 | param_1 << 0x3d) % param_2;
}


bool FUN_0040b0e0(long param_1,long param_2)

{
  return param_1 == param_2;
}


long FUN_0040b0f0(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = (*(code *)param_1[6])(param_2,param_1[2]);
  if (uVar1 <= (ulong)param_1[2] && param_1[2] != uVar1) {
    return uVar1 * 0x10 + *param_1;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


long FUN_0040b120(long param_1,long param_2,long **param_3,char param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  
  plVar6 = (long *)FUN_0040b0f0();
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
LAB_0040b1ac:
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
          goto LAB_0040b1ac;
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
    puVar1 = (undefined8 *)plVar6[1];
    if (puVar1 != (undefined8 *)0x0) {
      uVar2 = *(undefined4 *)((long)puVar1 + 4);
      uVar3 = *(undefined4 *)(puVar1 + 1);
      uVar4 = *(undefined4 *)((long)puVar1 + 0xc);
      *(undefined4 *)plVar6 = *(undefined4 *)puVar1;
      *(undefined4 *)((long)plVar6 + 4) = uVar2;
      *(undefined4 *)(plVar6 + 1) = uVar3;
      *(undefined4 *)((long)plVar6 + 0xc) = uVar4;
      *puVar1 = 0;
      puVar1[1] = *(undefined8 *)(param_1 + 0x48);
      *(undefined8 **)(param_1 + 0x48) = puVar1;
      return lVar8;
    }
    *plVar6 = 0;
  }
  return lVar8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0040b240(float **param_1)

{
  float fVar1;
  float *pfVar2;
  float fVar3;
  
  pfVar2 = *param_1;
  if (pfVar2 == (float *)&DAT_00416f10) {
    return 1;
  }
  fVar1 = pfVar2[2];
  if ((((_DAT_00416f24 < fVar1) && (fVar1 < DAT_00416f28)) && (_DAT_00416f2c < pfVar2[3])) &&
     (_DAT_00416f30 <= *pfVar2)) {
    fVar3 = *pfVar2 + _DAT_00416f24;
    if (((fVar3 < pfVar2[1]) && (pfVar2[1] <= DAT_00416f34)) && (fVar3 < fVar1)) {
      return 1;
    }
  }
  *param_1 = (float *)&DAT_00416f10;
  return 0;
}


undefined8 FUN_0040b2c0(long param_1,long **param_2,char param_3)

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
LAB_0040b2e8:
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
          plVar2 = (long *)FUN_0040b0f0(param_1,lVar6);
          plVar4 = (long *)plVar3[1];
          if (*plVar2 != 0) break;
          *plVar2 = lVar6;
          *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
          *plVar3 = 0;
          plVar3[1] = *(long *)(param_1 + 0x48);
          *(long **)(param_1 + 0x48) = plVar3;
          plVar3 = plVar4;
          if (plVar4 == (long *)0x0) goto LAB_0040b35f;
        }
        plVar3[1] = plVar2[1];
        plVar2[1] = (long)plVar3;
        plVar3 = plVar4;
      } while (plVar4 != (long *)0x0);
LAB_0040b35f:
      lVar6 = *plVar5;
    }
    plVar5[1] = 0;
    if (param_3 != '\0') goto LAB_0040b2e8;
    plVar3 = (long *)FUN_0040b0f0(param_1,lVar6);
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


undefined8 FUN_0040b410(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


undefined8 FUN_0040b420(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


undefined8 FUN_0040b430(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}


void FUN_0040b440(long **param_1)

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


bool FUN_0040b490(long **param_1)

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
LAB_0040b4a8:
      plVar2 = plVar2 + 2;
    }
    lVar1 = plVar2[1];
    plVar4 = (long *)((long)plVar4 + 1);
    plVar3 = (long *)((long)plVar3 + 1);
    if (lVar1 == 0) goto LAB_0040b4a8;
    do {
      lVar1 = *(long *)(lVar1 + 8);
      plVar3 = (long *)((long)plVar3 + 1);
    } while (lVar1 != 0);
    plVar2 = plVar2 + 2;
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040b500(long **param_1,undefined8 param_2)

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
      if (param_1[1] <= plVar6) goto LAB_0040b56d;
    }
  }
LAB_0040b56d:
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
  __fprintf_chk((dVar7 * _DAT_00416f48) / dVar8,param_2,1,"# buckets used:    %lu (%.2f%%)\n",plVar2
               );
  __fprintf_chk(param_2,1,"max bucket length: %lu\n",uVar5);
  return;
}


long FUN_0040b650(long param_1,long param_2)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)FUN_0040b0f0();
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


long FUN_0040b6b0(long **param_1)

{
  long lVar1;
  long *plVar2;
  
  if (param_1[4] == (long *)0x0) {
    return 0;
  }
  plVar2 = *param_1;
  if (param_1[1] <= plVar2) {
    lVar1 = FUN_00402d85();
    return lVar1;
  }
  do {
    if (*plVar2 != 0) {
      return *plVar2;
    }
    plVar2 = plVar2 + 2;
  } while (plVar2 < param_1[1]);
  lVar1 = FUN_00402d85();
  return lVar1;
}


long FUN_0040b700(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = (long *)FUN_0040b0f0();
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


ulong FUN_0040b770(long **param_1,long param_2,ulong param_3)

{
  undefined8 *puVar1;
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
      for (puVar1 = (undefined8 *)plVar3[1]; puVar1 != (undefined8 *)0x0;
          puVar1 = (undefined8 *)puVar1[1]) {
        if (param_3 == uVar2) {
          return param_3;
        }
        uVar2 = uVar2 + 1;
        *(undefined8 *)(param_2 + -8 + uVar2 * 8) = *puVar1;
      }
    }
    plVar3 = plVar3 + 2;
  } while (plVar3 <= param_1[1] && param_1[1] != plVar3);
  return uVar2;
}


long FUN_0040b7e0(long **param_1,code *param_2,undefined8 param_3)

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


ulong FUN_0040b860(byte *param_1,ulong param_2)

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


void FUN_0040b8a0(undefined8 *param_1)

{
  *(undefined *)(param_1 + 2) = 0;
  *param_1 = 0x3f80000000000000;
  param_1[1] = 0x3fb4fdf43f4ccccd;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ** FUN_0040b8c0(ulong param_1,void *param_2,code *param_3,code *param_4,void *param_5)

{
  char cVar1;
  void **__ptr;
  void *__nmemb;
  void *pvVar2;
  float fVar3;
  float fVar4;
  
  if (param_3 == (code *)0x0) {
    param_3 = FUN_0040b0d0;
  }
  if (param_4 == (code *)0x0) {
    param_4 = FUN_0040b0e0;
  }
  __ptr = (void **)malloc(0x50);
  if (__ptr == (void **)0x0) {
    return (void **)0x0;
  }
  if (param_2 == (void *)0x0) {
    __ptr[5] = &DAT_00416f10;
    cVar1 = FUN_0040b240(__ptr + 5);
    if (cVar1 == '\0') goto LAB_0040b9a0;
    fVar4 = DAT_00416f38;
    if ((long)param_1 < 0) goto LAB_0040ba23;
LAB_0040b9de:
    fVar3 = (float)param_1;
LAB_0040b9e7:
    fVar3 = fVar3 / fVar4;
    if (_DAT_00416f3c <= fVar3) goto LAB_0040b9a0;
    if (fVar3 < _DAT_00416f40) {
      param_1 = (ulong)fVar3;
    }
    else {
      param_1 = (long)(fVar3 - _DAT_00416f40) ^ 0x8000000000000000;
    }
  }
  else {
    __ptr[5] = param_2;
    cVar1 = FUN_0040b240(__ptr + 5);
    if (cVar1 == '\0') goto LAB_0040b9a0;
    if (*(char *)((long)param_2 + 0x10) == '\0') {
      fVar4 = *(float *)((long)param_2 + 8);
      if (-1 < (long)param_1) goto LAB_0040b9de;
LAB_0040ba23:
      fVar3 = (float)(param_1 >> 1 | (ulong)((uint)param_1 & 1));
      fVar3 = fVar3 + fVar3;
      goto LAB_0040b9e7;
    }
  }
  __nmemb = (void *)FUN_0040b030(param_1);
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
LAB_0040b9a0:
  free(__ptr);
  return (void **)0x0;
}


void FUN_0040ba50(long **param_1)

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
        if (param_1[1] < plVar4 || param_1[1] == plVar4) goto LAB_0040bae3;
      }
      plVar5 = plVar5 + 2;
    } while (plVar5 <= param_1[1] && param_1[1] != plVar5);
  }
LAB_0040bae3:
  param_1[3] = (long *)0x0;
  param_1[4] = (long *)0x0;
  return;
}


void FUN_0040bb00(long **param_1)

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
    if (plVar2 <= plVar4) goto LAB_0040bb9c;
    do {
      while (lVar5 = *plVar4, plVar3 = plVar4, lVar5 == 0) {
        plVar4 = plVar4 + 2;
        if (plVar2 <= plVar4) goto LAB_0040bb5f;
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
LAB_0040bb5f:
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
LAB_0040bb9c:
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

undefined4 FUN_0040bbe0(void **param_1,ulong param_2)

{
  char cVar1;
  undefined4 uVar2;
  float fVar3;
  void *local_68;
  void *local_60;
  void *local_58;
  void *local_50;
  undefined8 local_48;
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
    if (_DAT_00416f3c <= fVar3) {
      return 0;
    }
    if (fVar3 < _DAT_00416f40) {
      param_2 = (ulong)fVar3;
    }
    else {
      param_2 = (long)(fVar3 - _DAT_00416f40) ^ 0x8000000000000000;
    }
  }
  local_58 = (void *)FUN_0040b030(param_2);
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
      uVar2 = FUN_0040b2c0(&local_68,param_1,0);
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
      cVar1 = FUN_0040b2c0(param_1,&local_68,1);
      if ((cVar1 != '\0') && (cVar1 = FUN_0040b2c0(param_1,&local_68,0), cVar1 != '\0')) {
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

undefined8 FUN_0040bde0(long param_1,long param_2,long *param_3)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  long *local_20;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar2 = FUN_0040b120(param_1,param_2,&local_20,0);
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
    if ((long)uVar3 < 0) goto LAB_0040beda;
LAB_0040be4b:
    if (fVar7 <= (float)uVar3 * *(float *)(lVar2 + 8)) goto LAB_0040be62;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x28);
    fVar7 = (float)uVar6;
    uVar3 = *(ulong *)(param_1 + 0x10);
    if (-1 < (long)uVar3) goto LAB_0040be4b;
LAB_0040beda:
    fVar8 = (float)(uVar3 >> 1 | (ulong)((uint)uVar3 & 1));
    if (fVar7 <= (fVar8 + fVar8) * *(float *)(lVar2 + 8)) goto LAB_0040be62;
  }
  FUN_0040b240(param_1 + 0x28);
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
    if (_DAT_00416f3c <= fVar7) {
      return 0xffffffff;
    }
    if (_DAT_00416f40 <= fVar7) {
      uVar6 = (long)(fVar7 - _DAT_00416f40) ^ 0x8000000000000000;
    }
    else {
      uVar6 = (ulong)fVar7;
    }
    cVar1 = FUN_0040bbe0(param_1,uVar6);
    if (cVar1 == '\0') {
      return 0xffffffff;
    }
    lVar2 = FUN_0040b120(param_1,param_2,&local_20,0);
    if (lVar2 != 0) {
      uVar5 = FUN_00402d8f();
      return uVar5;
    }
  }
LAB_0040be62:
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


undefined8 FUN_0040c060(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_10;
  
  iVar1 = FUN_0040bde0(param_1,param_2,&local_10);
  if (iVar1 != -1) {
    if (iVar1 == 0) {
      param_2 = local_10;
    }
    return param_2;
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_0040c0a0(long param_1,undefined8 param_2)

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
  
  lVar5 = FUN_0040b120(param_1,param_2,&local_20,1);
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
      FUN_0040b240(param_1 + 0x28);
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
        if (_DAT_00416f40 <= fVar7) {
          uVar6 = (long)(fVar7 - _DAT_00416f40) ^ 0x8000000000000000;
        }
        else {
          uVar6 = (ulong)fVar7;
        }
        cVar4 = FUN_0040bbe0(param_1,uVar6);
        if (cVar4 == '\0') {
          __ptr = *(void **)(param_1 + 0x48);
          while (__ptr != (void *)0x0) {
            pvVar3 = *(void **)((long)__ptr + 8);
            free(__ptr);
            __ptr = pvVar3;
          }
          *(undefined8 *)(param_1 + 0x48) = 0;
        }
      }
    }
    return lVar5;
  }
  return lVar5;
}


ulong FUN_0040c280(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00413d10(*param_1);
  return (uVar1 ^ param_1[1]) % param_2;
}


ulong FUN_0040c2b0(long param_1,ulong param_2)

{
  return *(ulong *)(param_1 + 8) % param_2;
}


undefined8 FUN_0040c2c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if ((param_1[1] == param_2[1]) && (param_1[2] == param_2[2])) {
    uVar1 = FUN_0040e2f0(*param_1,*param_2);
    return uVar1;
  }
  return 0;
}


ulong FUN_0040c2f0(char **param_1,char **param_2)

{
  int iVar1;
  undefined4 extraout_var;
  
  if ((param_1[1] == param_2[1]) && (param_1[2] == param_2[2])) {
    iVar1 = strcmp(*param_1,*param_2);
    return CONCAT44(extraout_var,iVar1) & 0xffffffffffffff00 | (ulong)(iVar1 == 0);
  }
  return 0;
}


void FUN_0040c330(void **param_1)

{
  free(*param_1);
  free(param_1);
  return;
}


void FUN_0040c350(byte *param_1)

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
      pbVar6 = &DAT_00416f88;
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
        pbVar6 = &DAT_00416f90;
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
  DAT_0061d940 = param_1;
  program_invocation_name = param_1;
  return;
}


undefined8
FUN_0040c3f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined local_1c [12];
  
  iVar1 = FUN_00413790(param_1,param_2,param_5,local_1c);
  if (iVar1 == 0) {
    uVar2 = FUN_004137c0(local_1c,param_3,param_4);
  }
  else {
    uVar2 = 0xfffffffe;
  }
  return uVar2;
}


void FUN_0040c430(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_c [3];
  
  local_c[0] = param_3;
  FUN_004137c0(local_c,param_1,param_2);
  return;
}


char * FUN_0040c450(char *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  byte *pbVar3;
  
  pcVar2 = (char *)dcgettext(0,param_1,5);
  if (param_1 == pcVar2) {
    pbVar3 = (byte *)FUN_00413e10();
    if ((*pbVar3 & 0xdf) == 0x55) {
      if (((((pbVar3[1] & 0xdf) != 0x54) || ((pbVar3[2] & 0xdf) != 0x46)) || (pbVar3[3] != 0x2d)) ||
         ((pbVar3[4] != 0x38 || (pbVar3[5] != 0)))) {
LAB_0040c528:
        pcVar2 = "\"";
        if (param_2 != 9) {
          pcVar2 = "\'";
        }
        return pcVar2;
      }
      cVar1 = *pcVar2;
      pcVar2 = &DAT_00416fa1;
      if (cVar1 != '`') {
        pcVar2 = &DAT_00416f96;
      }
    }
    else {
      if (((((*pbVar3 & 0xdf) != 0x47) || ((pbVar3[1] & 0xdf) != 0x42)) || (pbVar3[2] != 0x31)) ||
         (((pbVar3[3] != 0x38 || (pbVar3[4] != 0x30)) ||
          ((pbVar3[5] != 0x33 || ((pbVar3[6] != 0x30 || (pbVar3[7] != 0)))))))) goto LAB_0040c528;
      cVar1 = *pcVar2;
      pcVar2 = &DAT_00416f9d;
      if (cVar1 != '`') {
        pcVar2 = &DAT_00416f9a;
      }
    }
  }
  return pcVar2;
}


ulong FUN_0040c550(undefined *param_1,ulong param_2,char *param_3,ulong param_4,int param_5,
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
LAB_0040d1a1:
    if (param_2 != 0) {
      bVar3 = false;
      local_5b = false;
      bVar2 = true;
      local_70 = 0;
      goto LAB_0040cdd6;
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
      goto LAB_0040d1a1;
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
      param_8 = (char *)FUN_0040c450(&DAT_00416fa5,param_5);
      param_9 = (char *)FUN_0040c450(&DAT_004182a7);
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
LAB_0040c5e8:
  uVar22 = 0;
  bVar5 = local_5b;
LAB_0040c5f8:
  bVar23 = param_4 != uVar22;
  if (param_4 == 0xffffffffffffffff) {
    bVar23 = param_3[uVar22] != '\0';
  }
  bVar26 = bVar6;
  if (!bVar23) goto LAB_0040cd78;
  bVar20 = (bool)(param_5 != 2 & bVar6);
  __s1 = (byte *)(param_3 + uVar22);
  uVar16 = uVar15;
  bVar4 = bVar3;
  if (bVar20) {
    if (local_a0 == 0) {
LAB_0040ccf0:
      uVar19 = (ulong)*__s1;
      switch(uVar19) {
      case 0:
        goto switchD_0040cd02_caseD_0;
      default:
        bVar20 = false;
        goto switchD_0040cb6e_caseD_1;
      case 7:
        bVar17 = 0x61;
        goto LAB_0040ca05;
      case 8:
        bVar17 = 0x62;
        break;
      case 9:
switchD_0040cd02_caseD_9:
        bVar17 = 0x74;
        break;
      case 10:
switchD_0040cd02_caseD_a:
        bVar17 = 0x6e;
        break;
      case 0xb:
switchD_0040cd02_caseD_b:
        bVar17 = 0x76;
        goto LAB_0040ca05;
      case 0xc:
switchD_0040cd02_caseD_c:
        bVar17 = 0x66;
LAB_0040ca05:
        if (local_5c) {
          bVar25 = false;
          goto LAB_0040c958;
        }
LAB_0040ca10:
        bVar23 = false;
        goto LAB_0040c7cb;
      case 0xd:
        bVar20 = false;
switchD_0040c6e8_caseD_d:
        bVar25 = param_5 == 2;
        uVar19 = 0xd;
        bVar13 = 0x72;
        goto LAB_0040c920;
      case 0x20:
        bVar25 = false;
LAB_0040cd4a:
        uVar19 = 0x20;
        goto LAB_0040cd12;
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
switchD_0040c6e8_caseD_21:
        bVar25 = false;
        goto LAB_0040c92b;
      case 0x23:
      case 0x7e:
        bVar26 = false;
LAB_0040cd2a:
        if (uVar22 == 0) {
          bVar25 = false;
          bVar23 = bVar20;
          bVar20 = bVar26;
          goto LAB_0040c738;
        }
        bVar23 = false;
        goto LAB_0040c74f;
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
LAB_0040cd12:
        bVar24 = false;
        bVar23 = bVar20;
        bVar20 = bVar25;
        goto LAB_0040c751;
      case 0x27:
        bVar20 = false;
        goto switchD_0040cb6e_caseD_27;
      case 0x3f:
        bVar20 = false;
        goto switchD_0040cb6e_caseD_3f;
      case 0x5c:
        bVar20 = false;
        goto switchD_0040c6e8_caseD_5c;
      case 0x7b:
      case 0x7d:
        bVar20 = false;
        goto switchD_0040cb6e_caseD_7b;
      }
      bVar25 = false;
      bVar23 = false;
      goto joined_r0x0040c947;
    }
    if ((param_4 == 0xffffffffffffffff) && (1 < local_a0)) {
      param_4 = strlen(param_3);
    }
    if ((param_4 < uVar22 + local_a0) || (iVar7 = memcmp(__s1,local_78,local_a0), iVar7 != 0))
    goto LAB_0040ccf0;
    if (!local_5c) {
      uVar19 = (ulong)*__s1;
      bVar25 = bVar20;
      switch(uVar19) {
      case 0:
        goto switchD_0040c6e8_caseD_0;
      default:
        goto switchD_0040cb6e_caseD_1;
      case 7:
        bVar17 = 0x61;
        goto LAB_0040ca10;
      case 8:
        bVar25 = false;
        bVar23 = false;
        bVar17 = 0x62;
        break;
      case 9:
        goto switchD_0040cd02_caseD_9;
      case 10:
        goto switchD_0040cd02_caseD_a;
      case 0xb:
        goto switchD_0040cd02_caseD_b;
      case 0xc:
        goto switchD_0040cd02_caseD_c;
      case 0xd:
        goto switchD_0040c6e8_caseD_d;
      case 0x20:
        goto LAB_0040cd4a;
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
        goto switchD_0040c6e8_caseD_21;
      case 0x23:
      case 0x7e:
        bVar26 = bVar20;
        goto LAB_0040cd2a;
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
        goto LAB_0040cd12;
      case 0x27:
        goto switchD_0040cb6e_caseD_27;
      case 0x3f:
        goto switchD_0040cb6e_caseD_3f;
      case 0x5c:
        goto switchD_0040c6e8_caseD_5c;
      case 0x7b:
      case 0x7d:
        goto switchD_0040cb6e_caseD_7b;
      }
      goto LAB_0040c792;
    }
    goto LAB_0040c96a;
  }
  uVar19 = (ulong)*__s1;
  switch(uVar19) {
  case 0:
    if (bVar6) {
switchD_0040cd02_caseD_0:
      if (!local_5c) {
        bVar20 = false;
switchD_0040c6e8_caseD_0:
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
            goto LAB_0040c848;
          }
LAB_0040ca8a:
          param_1[uVar16] = 0x5c;
          uVar15 = uVar16;
        }
        else if (uVar15 < uVar9) goto LAB_0040ca8a;
        uVar16 = uVar15 + 1;
        bVar24 = bVar23;
        if (param_5 == 2) {
          bVar17 = 0x30;
          bVar23 = false;
          bVar4 = bVar3;
          goto LAB_0040c848;
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
LAB_0040cac9:
        bVar17 = (byte)uVar19;
        bVar23 = false;
        uVar15 = uVar16;
        bVar4 = bVar3;
        if ((bool)(bVar6 ^ 1U | bVar26)) goto LAB_0040c848;
        goto LAB_0040c751;
      }
      bVar26 = param_5 == 2;
      goto LAB_0040c95c;
    }
    if ((param_6 & 1) == 0) {
      bVar25 = param_5 == 2;
      uVar19 = 0;
      bVar23 = false;
      bVar20 = false;
      goto LAB_0040c738;
    }
    uVar22 = uVar22 + 1;
    goto LAB_0040c5f8;
  default:
switchD_0040cb6e_caseD_1:
    bVar25 = bVar6;
    if (sVar8 != 1) {
      local_40[0] = (mbstate_t)0x0;
      if (param_4 == 0xffffffffffffffff) {
        param_4 = strlen(param_3);
      }
      uVar21 = 0;
      do {
        uVar1 = uVar22 + uVar21;
        lVar11 = FUN_00413710(&local_44,param_3 + uVar1,param_4 - uVar1,local_40);
        if (lVar11 == 0) break;
        if (lVar11 == -1) {
          bVar23 = false;
          goto LAB_0040d47a;
        }
        if (lVar11 == -2) {
          if ((param_4 <= uVar1) || (param_3[uVar1] == '\0')) goto LAB_0040d5b7;
          goto LAB_0040d5a7;
        }
        if (((param_5 == 2) && (local_5c)) && (lVar11 != 1)) {
          pcVar12 = param_3 + uVar1 + 1;
          do {
            if (((byte)(*pcVar12 + 0xa5U) < 0x22) &&
               ((1L << (*pcVar12 + 0xa5U & 0x3f) & 0x20000002bU) != 0)) {
              param_5 = 2;
              goto LAB_0040c95c;
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
      goto LAB_0040d47a;
    }
    ppuVar10 = __ctype_b_loc();
    uVar21 = 1;
    bVar25 = ((*ppuVar10)[uVar19] & 0x4000) == 0;
    bVar23 = !bVar25;
    bVar25 = (bool)(bVar25 & bVar6);
    goto LAB_0040cb44;
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
    goto LAB_0040cb82;
  case 10:
    uVar19 = 10;
    bVar13 = 0x6e;
    goto LAB_0040cb82;
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
LAB_0040cb82:
    bVar25 = param_5 == 2;
    bVar20 = (bool)(local_5c & bVar25);
    if (bVar20) {
LAB_0040cb9a:
      param_5 = 2;
      goto LAB_0040c95c;
    }
    break;
  case 0x20:
    uVar19 = 0x20;
    goto LAB_0040c726;
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
LAB_0040c726:
    bVar25 = param_5 == 2;
    if ((local_5c) && (bVar25)) goto LAB_0040cb9a;
    goto LAB_0040c738;
  case 0x23:
  case 0x7e:
LAB_0040c71d:
    bVar25 = param_5 == 2;
    if (uVar22 == 0) goto LAB_0040c726;
    goto LAB_0040c92b;
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
    goto switchD_0040cb6e_caseD_25;
  case 0x27:
switchD_0040cb6e_caseD_27:
    bVar5 = bVar23;
    if (param_5 != 2) {
      bVar25 = false;
      uVar19 = 0x27;
      goto LAB_0040c738;
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
      goto LAB_0040c848;
    }
    goto LAB_0040c95c;
  case 0x3f:
switchD_0040cb6e_caseD_3f:
    if (param_5 == 2) {
      if (!local_5c) {
        bVar17 = 0x3f;
        bVar24 = false;
        bVar23 = false;
        goto LAB_0040c848;
      }
      goto LAB_0040c95c;
    }
    if (param_5 != 5) {
      bVar25 = param_5 == 2;
      uVar19 = 0x3f;
      bVar23 = false;
      goto LAB_0040c738;
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
        goto LAB_0040cac9;
      }
      goto LAB_0040c96a;
    }
    bVar25 = false;
    uVar19 = 0x3f;
    bVar23 = false;
    goto LAB_0040c738;
  case 0x5c:
    if (param_5 != 2) {
switchD_0040c6e8_caseD_5c:
      uVar19 = 0x5c;
      bVar17 = 0x5c;
      bVar13 = 0x5c;
      bVar25 = (bool)(bVar6 & local_5c & local_a0 != 0);
      if (!bVar25) break;
      uVar22 = uVar22 + 1;
      bVar23 = false;
      goto LAB_0040c864;
    }
    if (local_5c) goto LAB_0040c95c;
    uVar22 = uVar22 + 1;
    bVar23 = false;
    bVar17 = 0x5c;
    goto LAB_0040c864;
  case 0x7b:
  case 0x7d:
switchD_0040cb6e_caseD_7b:
    bVar24 = param_4 != 1;
    if (param_4 == 0xffffffffffffffff) {
      bVar24 = param_3[1] != '\0';
    }
    bVar25 = param_5 == 2;
    if (!bVar24) goto LAB_0040c71d;
    goto LAB_0040c92b;
  }
LAB_0040c920:
  if (!bVar6) {
LAB_0040c92b:
    bVar23 = false;
    goto LAB_0040c738;
  }
  bVar23 = false;
  bVar17 = bVar13;
  goto joined_r0x0040c947;
LAB_0040cd78:
  if ((uVar15 == 0) && ((bool)(local_5c & param_5 == 2))) {
    param_5 = 2;
LAB_0040c95c:
    if (bVar26) {
      param_5 = 4;
    }
LAB_0040c96a:
    uVar9 = FUN_0040c550(param_1,uVar9,param_3,param_4,param_5,param_6 & 0xfffffffd,0,param_8,
                         param_9);
    return uVar9;
  }
  bVar26 = (bool)(param_5 == 2 & (local_5c ^ 1U));
  bVar23 = (bool)(local_5c ^ 1U);
  if ((!bVar26) || (bVar23 = bVar26, !bVar5)) {
LAB_0040d64d:
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
    uVar9 = FUN_0040c550(param_1,local_70,param_3,param_4,5,param_6,param_7,param_8,param_9);
    return uVar9;
  }
  local_5b = uVar9 == 0 && local_70 != 0;
  param_2 = local_70;
  bVar23 = bVar5;
  if (uVar9 != 0 || local_70 == 0) goto LAB_0040d64d;
LAB_0040cdd6:
  *param_1 = 0x27;
  param_5 = 2;
  uVar15 = 1;
  local_78 = "\'";
  local_a0 = 1;
  local_5c = false;
  uVar9 = param_2;
  goto LAB_0040c5e8;
  while (__s1[uVar21] != 0) {
LAB_0040d5a7:
    uVar21 = uVar21 + 1;
    if (param_4 <= uVar22 + uVar21) break;
  }
LAB_0040d5b7:
  bVar23 = false;
LAB_0040d47a:
  if (1 < uVar21) {
LAB_0040d03e:
    bVar26 = false;
    uVar21 = uVar21 + uVar22;
    uVar16 = uVar22;
    do {
      bVar17 = (byte)uVar19;
      if (bVar25) {
        bVar26 = param_5 == 2;
        if (local_5c) goto LAB_0040c95c;
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
        if (uVar21 <= uVar22) goto LAB_0040c7dd;
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
        if (uVar21 <= uVar22) goto LAB_0040c864;
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
LAB_0040cb44:
  if (bVar25) {
    bVar23 = false;
    bVar25 = bVar6;
    goto LAB_0040d03e;
  }
switchD_0040cb6e_caseD_25:
  bVar25 = param_5 == 2;
LAB_0040c738:
  bVar17 = (byte)uVar19;
  bVar24 = (bool)((bVar6 ^ 1U | bVar25) ^ 1 | local_5c);
  bVar26 = bVar20;
  if (bVar24) {
LAB_0040c74f:
    bVar24 = false;
    bVar20 = bVar26;
LAB_0040c751:
    bVar17 = (byte)uVar19;
    uVar16 = uVar15;
    bVar4 = bVar3;
    if ((param_7 == 0) || ((*(uint *)(param_7 + (uVar19 >> 5) * 4) >> (bVar17 & 0x1f) & 1) == 0))
    goto LAB_0040c848;
    bVar25 = param_5 == 2;
  }
  else {
LAB_0040c848:
    bVar25 = param_5 == 2;
    uVar15 = uVar16;
    bVar3 = bVar4;
    if (!bVar20) {
      uVar22 = uVar22 + 1;
      bVar3 = (bool)((bVar24 ^ 1U) & bVar4);
LAB_0040c864:
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
      goto LAB_0040c7dd;
    }
  }
joined_r0x0040c947:
  if (local_5c) {
LAB_0040c958:
    bVar26 = (bool)(bVar6 & bVar25);
    goto LAB_0040c95c;
  }
LAB_0040c792:
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
LAB_0040c7cb:
  if (uVar15 < uVar9) {
    param_1[uVar15] = 0x5c;
  }
  uVar15 = uVar15 + 1;
  uVar22 = uVar22 + 1;
  bVar4 = bVar3;
LAB_0040c7dd:
  bVar3 = bVar4;
  if (uVar15 < uVar9) {
    param_1[uVar15] = bVar17;
  }
  uVar15 = uVar15 + 1;
  if (!bVar23) {
    bVar2 = false;
  }
  goto LAB_0040c5f8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_0040d780(int param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  ulong uVar9;
  undefined *__ptr;
  ulong *puVar10;
  
  piVar7 = __errno_location();
  iVar1 = *piVar7;
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  puVar8 = (undefined4 *)PTR_DAT_0061d458;
  if (DAT_0061d470 <= param_1) {
    if (param_1 == 0x7fffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_00410330();
    }
    if (PTR_DAT_0061d458 == &DAT_0061d460) {
      puVar8 = (undefined4 *)FUN_00410140(0);
      uVar6 = PTR_DAT_0061d468._4_4_;
      uVar5 = PTR_DAT_0061d468._0_4_;
      uVar3 = _UNK_0061d464;
      PTR_DAT_0061d458 = (undefined *)puVar8;
      *puVar8 = _DAT_0061d460;
      puVar8[1] = uVar3;
      puVar8[2] = uVar5;
      puVar8[3] = uVar6;
    }
    else {
      puVar8 = (undefined4 *)FUN_00410140(PTR_DAT_0061d458);
      PTR_DAT_0061d458 = (undefined *)puVar8;
    }
    memset(puVar8 + (long)DAT_0061d470 * 4,0,(long)((param_1 + 1) - DAT_0061d470) << 4);
    DAT_0061d470 = param_1 + 1;
  }
  uVar2 = param_4[1];
  puVar10 = (ulong *)(puVar8 + (long)param_1 * 4);
  uVar4 = *puVar10;
  __ptr = (undefined *)puVar10[1];
  uVar9 = FUN_0040c550(__ptr,uVar4,param_2,param_3,*param_4,uVar2 | 1,param_4 + 2,
                       *(undefined8 *)(param_4 + 10),*(undefined8 *)(param_4 + 0xc));
  if (uVar4 <= uVar9) {
    uVar9 = uVar9 + 1;
    *puVar10 = uVar9;
    if (__ptr != &DAT_0061d960) {
      free(__ptr);
    }
    __ptr = (undefined *)FUN_004100e0(uVar9);
    uVar3 = *param_4;
    puVar10[1] = (ulong)__ptr;
    FUN_0040c550(__ptr,uVar9,param_2,param_3,uVar3,uVar2 | 1,param_4 + 2,
                 *(undefined8 *)(param_4 + 10),*(undefined8 *)(param_4 + 0xc));
  }
  *piVar7 = iVar1;
  return __ptr;
}


void FUN_0040d920(undefined *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_0061da60;
  }
  FUN_004102e0(param_1,0x38);
  *piVar2 = iVar1;
  return;
}


undefined4 FUN_0040d960(undefined4 *param_1)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)&DAT_0061da60;
  }
  return *param_1;
}


void FUN_0040d970(undefined4 *param_1,undefined4 param_2)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)&DAT_0061da60;
  }
  *param_1 = param_2;
  return;
}


uint FUN_0040d980(undefined *param_1,byte param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_0061da60;
  }
  uVar1 = *(uint *)(param_1 + (ulong)(param_2 >> 5) * 4 + 8);
  uVar2 = uVar1 >> (param_2 & 0x1f);
  *(uint *)(param_1 + (ulong)(param_2 >> 5) * 4 + 8) =
       ((param_3 ^ uVar2) & 1) << (param_2 & 0x1f) ^ uVar1;
  return uVar2 & 1;
}


undefined4 FUN_0040d9c0(undefined *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_0061da60;
  }
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_1 + 4) = param_2;
  return uVar1;
}


void FUN_0040d9e0(undefined4 *param_1,long param_2,long param_3)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)&DAT_0061da60;
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


void FUN_0040da10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 *param_5)

{
  int iVar1;
  int *piVar2;
  
  if (param_5 == (undefined4 *)0x0) {
    param_5 = (undefined4 *)&DAT_0061da60;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  FUN_0040c550(param_1,param_2,param_3,param_4,*param_5,param_5[1],param_5 + 2,
               *(undefined8 *)(param_5 + 10),*(undefined8 *)(param_5 + 0xc));
  *piVar2 = iVar1;
  return;
}


undefined8 FUN_0040da90(undefined8 param_1,undefined8 param_2,long *param_3,undefined4 *param_4)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  
  if (param_4 == (undefined4 *)0x0) {
    param_4 = (undefined4 *)&DAT_0061da60;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  uVar5 = (uint)(param_3 == (long *)0x0) | param_4[1];
  lVar3 = FUN_0040c550(0,0,param_1,param_2,*param_4,uVar5,param_4 + 2,*(undefined8 *)(param_4 + 10),
                       *(undefined8 *)(param_4 + 0xc));
  uVar4 = FUN_004100e0(lVar3 + 1);
  FUN_0040c550(uVar4,lVar3 + 1,param_1,param_2,*param_4,uVar5,param_4 + 2,
               *(undefined8 *)(param_4 + 10),*(undefined8 *)(param_4 + 0xc));
  *piVar2 = iVar1;
  if (param_3 != (long *)0x0) {
    *param_3 = lVar3;
  }
  return uVar4;
}


void FUN_0040db80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0040da90(param_1,param_2,0,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040db90(void)

{
  void **ppvVar1;
  void *__ptr;
  undefined *__ptr_00;
  void **ppvVar2;
  
  __ptr_00 = PTR_DAT_0061d458;
  if (1 < DAT_0061d470) {
    ppvVar2 = (void **)(PTR_DAT_0061d458 + 0x18);
    ppvVar1 = (void **)(PTR_DAT_0061d458 + (ulong)(DAT_0061d470 - 2) * 0x10 + 0x28);
    do {
      __ptr = *ppvVar2;
      ppvVar2 = ppvVar2 + 2;
      free(__ptr);
    } while (ppvVar2 != ppvVar1);
  }
  if (*(undefined **)(__ptr_00 + 8) != &DAT_0061d960) {
    free(*(undefined **)(__ptr_00 + 8));
    _DAT_0061d460 = 0x100;
    PTR_DAT_0061d468 = &DAT_0061d960;
  }
  if (__ptr_00 != &DAT_0061d460) {
    free(__ptr_00);
    PTR_DAT_0061d458 = &DAT_0061d460;
  }
  DAT_0061d470 = 1;
  return;
}


void FUN_0040dc30(undefined8 param_1,undefined8 param_2)

{
  FUN_0040d780(param_1,param_2,0xffffffffffffffff,&DAT_0061da60);
  return;
}


void FUN_0040dc50(void)

{
  FUN_0040d780();
  return;
}


void FUN_0040dc60(undefined8 param_1)

{
  FUN_0040d780(0,param_1,0xffffffffffffffff,&DAT_0061da60);
  return;
}


void FUN_0040dc80(undefined8 param_1,undefined8 param_2)

{
  FUN_0040d780(0,param_1,param_2,&DAT_0061da60);
  return;
}


void FUN_0040dca0(undefined8 param_1,int param_2,undefined8 param_3)

{
  int local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  if (param_2 != 10) {
    local_44 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    local_48 = param_2;
    FUN_0040d780(param_1,param_3,0xffffffffffffffff,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_0040dd10(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  int local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  if (param_2 != 10) {
    local_44 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    local_48 = param_2;
    FUN_0040d780(param_1,param_3,param_4,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_0040dd80(undefined4 param_1,undefined8 param_2)

{
  FUN_0040dca0(0,param_1,param_2);
  return;
}


void FUN_0040dd90(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0040dd10(0,param_1,param_2,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040dda0(undefined8 param_1,undefined8 param_2,byte param_3)

{
  uint *puVar1;
  uint uVar2;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_18 = DAT_0061da90;
  local_48 = _DAT_0061da60;
  uStack_40 = uRam000000000061da68;
  local_38 = _DAT_0061da70;
  uStack_30 = uRam000000000061da78;
  puVar1 = (uint *)((long)&uStack_40 + (ulong)(param_3 >> 5) * 4);
  local_28 = _DAT_0061da80;
  uStack_20 = uRam000000000061da88;
  uVar2 = *puVar1;
  *puVar1 = (~(uVar2 >> (param_3 & 0x1f)) & 1) << (param_3 & 0x1f) ^ uVar2;
  FUN_0040d780(0,param_1,param_2,&local_48);
  return;
}


void FUN_0040de10(undefined8 param_1,char param_2)

{
  FUN_0040dda0(param_1,0xffffffffffffffff,(int)param_2);
  return;
}


void FUN_0040de20(undefined8 param_1)

{
  FUN_0040dda0(param_1,0xffffffffffffffff,0x3a);
  return;
}


void FUN_0040de40(undefined8 param_1,undefined8 param_2)

{
  FUN_0040dda0(param_1,param_2,0x3a);
  return;
}


void FUN_0040de50(undefined8 param_1,int param_2,undefined8 param_3)

{
  int local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  if (param_2 != 10) {
    local_40 = 0x400000000000000;
    local_44 = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    local_48 = param_2;
    FUN_0040d780(param_1,param_3,0xffffffffffffffff,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040dec0(undefined8 param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5
                 )

{
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  long lStack_20;
  long local_18;
  
  uStack_40 = uRam000000000061da68;
  local_38 = _DAT_0061da70;
  uStack_30 = uRam000000000061da78;
  local_28 = _DAT_0061da80;
  lStack_20 = uRam000000000061da88;
  local_18 = DAT_0061da90;
  local_48 = CONCAT44((int)((ulong)_DAT_0061da60 >> 0x20),10);
  if ((param_2 != 0) && (param_3 != 0)) {
    lStack_20 = param_2;
    local_18 = param_3;
    FUN_0040d780(param_1,param_4,param_5,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_0040df30(void)

{
  FUN_0040dec0();
  return;
}


void FUN_0040df40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0040dec0(0,param_1,param_2,param_3,0xffffffffffffffff);
  return;
}


void FUN_0040df60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_0040dec0(0,param_1,param_2,param_3,param_4);
  return;
}


void FUN_0040df80(void)

{
  FUN_0040d780();
  return;
}


void FUN_0040df90(undefined8 param_1,undefined8 param_2)

{
  FUN_0040d780(0,param_1,param_2,&DAT_0061d420);
  return;
}


void FUN_0040dfb0(undefined8 param_1,undefined8 param_2)

{
  FUN_0040d780(param_1,param_2,0xffffffffffffffff,&DAT_0061d420);
  return;
}


void FUN_0040dfd0(undefined8 param_1)

{
  FUN_0040d780(0,param_1,0xffffffffffffffff,&DAT_0061d420);
  return;
}


ulong FUN_0040dff0(uint param_1,char *param_2,uint param_3,char *param_4,uint param_5)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  int *piVar5;
  size_t sVar6;
  size_t sVar7;
  stat local_158;
  stat local_c8;
  
  uVar4 = syscall(0x13c,(ulong)param_1,param_2,(ulong)param_3,param_4,(ulong)param_5);
  if (-1 < (int)uVar4) {
    return uVar4 & 0xffffffff;
  }
  piVar5 = __errno_location();
  bVar1 = (*piVar5 - 0x16U & 0xffffffef) != 0 && *piVar5 != 0x5f;
  if (bVar1) {
    return uVar4 & 0xffffffff;
  }
  if (param_5 != 0) {
    if ((param_5 & 0xfffffffe) != 0) {
      *piVar5 = 0x5f;
      return 0xffffffff;
    }
    iVar2 = __fxstatat(1,param_3,param_4,&local_c8,0x100);
    if ((iVar2 == 0) || (*piVar5 == 0x4b)) {
      *piVar5 = 0x11;
      return 0xffffffff;
    }
    if (*piVar5 != 2) {
      return 0xffffffff;
    }
    bVar1 = true;
  }
  sVar6 = strlen(param_2);
  sVar7 = strlen(param_4);
  if (((sVar6 != 0) && (sVar7 != 0)) && ((param_2[sVar6 - 1] == '/' || (param_4[sVar7 - 1] == '/')))
     ) {
    iVar2 = __fxstatat(1,param_1,param_2,&local_158,0x100);
    if (iVar2 != 0) {
      return 0xffffffff;
    }
    if (bVar1) {
      if ((local_158.st_mode & 0xf000) != 0x4000) {
        *piVar5 = 2;
        return 0xffffffff;
      }
    }
    else {
      iVar2 = __fxstatat(1,param_3,param_4,&local_c8,0x100);
      if (iVar2 == 0) {
        if ((local_c8.st_mode & 0xf000) != 0x4000) {
          *piVar5 = 0x14;
          return 0xffffffff;
        }
        if ((local_158.st_mode & 0xf000) != 0x4000) {
          *piVar5 = 0x15;
          return 0xffffffff;
        }
      }
      else if ((*piVar5 != 2) || ((local_158.st_mode & 0xf000) != 0x4000)) {
        return 0xffffffff;
      }
    }
  }
  uVar3 = renameat(param_1,param_2,param_3,param_4);
  return (ulong)uVar3;
}


__ino_t * FUN_0040e240(__ino_t *param_1)

{
  int iVar1;
  stat local_98;
  
  iVar1 = __lxstat(1,"/",&local_98);
  if (iVar1 == 0) {
    *param_1 = local_98.st_ino;
    param_1[1] = local_98.st_dev;
    return param_1;
  }
  return (undefined8 *)0x0;
}


ssize_t FUN_0040e290(int param_1,void *param_2,ulong param_3)

{
  ssize_t sVar1;
  int *piVar2;
  
  while( true ) {
    do {
      sVar1 = write(param_1,param_2,param_3);
      if (-1 < sVar1) {
        return sVar1;
      }
      piVar2 = __errno_location();
    } while (*piVar2 == 4);
    if (*piVar2 != 0x16) break;
    if (param_3 < 0x7fffe001) {
      return sVar1;
    }
    param_3 = 0x7fffe000;
  }
  return sVar1;
}


bool FUN_0040e2f0(undefined8 param_1,undefined8 param_2)

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
  __s1 = (void *)FUN_0040aa00();
  __s2 = (void *)FUN_0040aa00(param_2);
  __n = FUN_0040aa60(__s1);
  sVar2 = FUN_0040aa60(__s2);
  if ((__n == sVar2) && (iVar1 = memcmp(__s1,__s2,__n), iVar1 == 0)) {
    __filename = (char *)FUN_0040a920(param_1);
    __filename_00 = (char *)FUN_0040a920(param_2);
    iVar1 = __xstat(1,__filename,&local_158);
    if (iVar1 != 0) {
      piVar3 = __errno_location();
      error(1,*piVar3,&DAT_00418333,__filename);
    }
    iVar1 = __xstat(1,__filename_00,&local_c8);
    if (iVar1 != 0) {
      piVar3 = __errno_location();
      error(1,*piVar3,&DAT_00418333,__filename_00);
    }
    bVar4 = local_158.st_ino == local_c8.st_ino && local_158.st_dev == local_c8.st_dev;
    free(__filename);
    free(__filename_00);
  }
  return bVar4;
}


ulong FUN_0040e420(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  
  uVar2 = 0xffffffff;
  uVar1 = *(ulong *)(param_2 + 8);
  bVar3 = uVar1 <= *(ulong *)(param_1 + 8);
  if (bVar3) {
    uVar2 = (ulong)(bVar3 && *(ulong *)(param_1 + 8) != uVar1);
  }
  return uVar2;
}


void FUN_0040e440(char **param_1,char **param_2)

{
  strcmp(*param_1,*param_2);
  return;
}


undefined * FUN_0040e450(DIR *param_1,uint param_2)

{
  ulong __n;
  int iVar1;
  __compar_fn_t __compar;
  char cVar2;
  int *piVar3;
  dirent *pdVar4;
  size_t sVar5;
  char *pcVar6;
  undefined *puVar7;
  char *pcVar8;
  undefined *__ptr;
  char **__ptr_00;
  char **ppcVar9;
  char **ppcVar10;
  ulong uVar11;
  long lVar12;
  ulong __nmemb;
  ulong uVar13;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  
  __compar = *(__compar_fn_t *)(&DAT_00417ce0 + (ulong)param_2 * 8);
  if (param_1 == (DIR *)0x0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    __ptr_00 = (char **)0x0;
    piVar3 = __errno_location();
    __ptr = (undefined *)0x0;
    local_58 = 0;
    local_68 = 0;
    __nmemb = 0;
    uVar13 = 0;
LAB_0040e4ac:
    while( true ) {
      *piVar3 = 0;
      pdVar4 = readdir(param_1);
      if (pdVar4 == (dirent *)0x0) break;
      pcVar6 = pdVar4->d_name;
      cVar2 = pdVar4->d_name[0];
      if (cVar2 != '.') goto LAB_0040e4a8;
      if (pdVar4->d_name[1] == '.') {
        cVar2 = pdVar4->d_name[2];
        goto LAB_0040e4a8;
      }
      if (pdVar4->d_name[1] != '\0') goto LAB_0040e4e5;
    }
    iVar1 = *piVar3;
    if (iVar1 == 0) {
      if (__compar == (__compar_fn_t)0x0) {
        if (local_68 == uVar13) {
          __ptr = (undefined *)FUN_00410140(__ptr,local_68 + 1);
          puVar7 = __ptr + local_68;
        }
        else {
          puVar7 = __ptr + uVar13;
        }
      }
      else {
        if (__nmemb == 0) {
          puVar7 = (undefined *)FUN_004100e0(uVar13 + 1);
          __ptr = puVar7;
        }
        else {
          pcVar6 = (char *)0x0;
          qsort(__ptr_00,__nmemb,0x10,__compar);
          __ptr = (undefined *)FUN_004100e0(uVar13 + 1);
          ppcVar9 = __ptr_00;
          do {
            ppcVar10 = ppcVar9 + 2;
            pcVar8 = stpcpy(__ptr + (long)pcVar6,*ppcVar9);
            pcVar6 = pcVar8 + (long)(pcVar6 + (1 - (long)(__ptr + (long)pcVar6)));
            free(*ppcVar9);
            ppcVar9 = ppcVar10;
          } while (ppcVar10 != __ptr_00 + __nmemb * 2);
          puVar7 = __ptr + (long)pcVar6;
        }
        free(__ptr_00);
      }
      *puVar7 = 0;
      puVar7 = __ptr;
    }
    else {
      free(__ptr_00);
      puVar7 = (undefined *)0x0;
      free(__ptr);
      *piVar3 = iVar1;
    }
  }
  return puVar7;
LAB_0040e4a8:
  if (cVar2 == '\0') goto LAB_0040e4ac;
LAB_0040e4e5:
  sVar5 = strlen(pcVar6);
  __n = sVar5 + 1;
  if (__compar != (__compar_fn_t)0x0) {
    local_60 = __nmemb + 1;
    if (__nmemb == local_58) {
      if (__ptr_00 == (char **)0x0) {
        if (__nmemb == 0) {
          local_58 = 8;
          lVar12 = 0x80;
          local_60 = 1;
        }
        else {
          lVar12 = __nmemb << 4;
          if ((lVar12 < 0) || (__nmemb >> 0x3c != 0)) goto LAB_0040e788;
        }
      }
      else {
        if (0x555555555555554 < __nmemb) goto LAB_0040e788;
        local_58 = (__nmemb >> 1) + local_60;
        lVar12 = local_58 * 0x10;
      }
      __ptr_00 = (char **)FUN_00410140(__ptr_00,lVar12);
    }
    pcVar6 = (char *)FUN_00410310(pcVar6);
    __ptr_00[__nmemb * 2] = pcVar6;
    (__ptr_00 + __nmemb * 2)[1] = (char *)pdVar4->d_ino;
    __nmemb = local_60;
    uVar13 = uVar13 + __n;
    goto LAB_0040e4ac;
  }
  uVar11 = uVar13 + __n;
  if (local_68 - uVar13 <= __n) {
    if (CARRY8(uVar13,__n) != false) {
LAB_0040e788:
                    /* WARNING: Subroutine does not return */
      FUN_00410330();
    }
    if (__ptr == (undefined *)0x0) {
      if (uVar11 == 0) {
        local_68 = 0x80;
      }
      else {
        local_68 = uVar11;
        if ((long)uVar11 < 0) goto LAB_0040e788;
      }
    }
    else {
      if (0x5555555555555553 < uVar11) goto LAB_0040e788;
      local_68 = uVar11 + 1 + (uVar11 >> 1);
    }
    __ptr = (undefined *)FUN_00410140(__ptr,local_68);
  }
  memcpy(__ptr + uVar13,pcVar6,__n);
  uVar13 = uVar11;
  goto LAB_0040e4ac;
}


void * FUN_0040e7f0(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  DIR *__dirp;
  void *__ptr;
  int *piVar2;
  
  __dirp = (DIR *)FUN_0040a880();
  if (__dirp == (DIR *)0x0) {
    return (void *)0x0;
  }
  __ptr = (void *)FUN_0040e450(__dirp,param_2);
  iVar1 = closedir(__dirp);
  if (iVar1 == 0) {
    return __ptr;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  free(__ptr);
  *piVar2 = iVar1;
  return (void *)0x0;
}


int FUN_0040e860(char *param_1)

{
  int iVar1;
  int *piVar2;
  stat sStack_98;
  
  iVar1 = __lxstat(1,param_1,&sStack_98);
  piVar2 = __errno_location();
  if ((iVar1 != 0) && (*piVar2 != 0x4b)) {
    return -(uint)(*piVar2 != 2);
  }
  *piVar2 = 0x11;
  return -1;
}


void FUN_0040e8c0(char *param_1)

{
  mkdir(param_1,0x1c0);
  return;
}


void FUN_0040e8d0(char *param_1,uint *param_2)

{
  open(param_1,*param_2 & 0xffffff3c | 0xc2,0x180);
  return;
}


void FUN_0040e8f0(void)

{
                    /* WARNING: Subroutine does not return */
  __assert_fail("! \"invalid KIND in __gen_tempname\"","lib/tempname.c",0x147,"gen_tempname_len");
}


int FUN_0040e910(char *param_1,int param_2,undefined8 param_3,code *param_4,ulong param_5)

{
  int iVar1;
  int *piVar2;
  size_t sVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  
  piVar2 = __errno_location();
  iVar7 = *piVar2;
  sVar3 = strlen(param_1);
  if ((long)param_2 + param_5 <= sVar3) {
    lVar4 = sVar3 - ((long)param_2 + param_5);
    sVar3 = strspn(param_1 + lVar4,"X");
    if (param_5 <= sVar3) {
      lVar5 = FUN_00414400(0,param_5);
      if (lVar5 == 0) {
        return -1;
      }
      iVar8 = 0x3a2f8;
      while( true ) {
        pcVar9 = param_1 + lVar4;
        if (param_5 != 0) {
          do {
            pcVar10 = pcVar9 + 1;
            lVar6 = FUN_00414440(lVar5,0x3d);
            *pcVar9 = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"[lVar6];
            pcVar9 = pcVar10;
          } while (pcVar10 != param_1 + lVar4 + param_5);
        }
        iVar1 = (*param_4)(param_1,param_3);
        if (-1 < iVar1) break;
        if (*piVar2 != 0x11) {
          iVar1 = -1;
          iVar7 = *piVar2;
          goto LAB_0040ea25;
        }
        iVar8 = iVar8 + -1;
        if (iVar8 == 0) {
          FUN_00414560(lVar5);
          *piVar2 = 0x11;
          return -1;
        }
      }
      *piVar2 = iVar7;
LAB_0040ea25:
      FUN_00414560(lVar5);
      *piVar2 = iVar7;
      return iVar1;
    }
  }
  *piVar2 = 0x16;
  return -1;
}


ulong FUN_0040ea70(char *param_1,undefined8 param_2,undefined4 param_3,code *param_4)

{
  char *__s;
  uint uVar1;
  int *piVar2;
  size_t sVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  undefined8 extraout_RDX;
  int iVar9;
  char *pcVar10;
  char *pcVar11;
  undefined4 local_c [3];
  
  local_c[0] = param_3;
  if ((uint)param_4 < 3) {
    uVar7 = FUN_0040e910(param_1,param_2,local_c,(&PTR_FUN_00417d40)[(ulong)param_4 & 0xffffffff]);
    return uVar7;
  }
  FUN_0040e8f0();
  iVar9 = (int)param_2;
  if ((uint)param_4 < 3) {
    uVar7 = FUN_0040e910();
    return uVar7;
  }
  FUN_0040e8f0();
  piVar2 = __errno_location();
  iVar8 = *piVar2;
  sVar3 = strlen(param_1);
  if ((long)iVar9 + 6U <= sVar3) {
    lVar4 = sVar3 - ((long)iVar9 + 6U);
    __s = param_1 + lVar4;
    sVar3 = strspn(__s,"X");
    if (5 < sVar3) {
      lVar5 = FUN_00414400(0,6);
      if (lVar5 == 0) {
        uVar1 = 0xffffffff;
      }
      else {
        iVar9 = 0x3a2f8;
        pcVar10 = __s;
        do {
          do {
            pcVar11 = pcVar10 + 1;
            lVar6 = FUN_00414440(lVar5,0x3d);
            *pcVar10 = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"[lVar6];
            pcVar10 = pcVar11;
          } while (pcVar11 != param_1 + lVar4 + 6);
          uVar1 = (*param_4)(param_1,extraout_RDX);
          if (-1 < (int)uVar1) {
            *piVar2 = iVar8;
LAB_0040ea25:
            FUN_00414560(lVar5);
            *piVar2 = iVar8;
            goto LAB_0040ea40;
          }
          if (*piVar2 != 0x11) {
            uVar1 = 0xffffffff;
            iVar8 = *piVar2;
            goto LAB_0040ea25;
          }
          iVar9 = iVar9 + -1;
          pcVar10 = __s;
        } while (iVar9 != 0);
        FUN_00414560(lVar5);
        *piVar2 = 0x11;
        uVar1 = 0xffffffff;
      }
      goto LAB_0040ea40;
    }
  }
  *piVar2 = 0x16;
  uVar1 = 0xffffffff;
LAB_0040ea40:
  return (ulong)uVar1;
}


ulong FUN_0040eaa0(char *param_1,undefined8 param_2,undefined4 param_3,code *param_4)

{
  char *__s;
  uint uVar1;
  int *piVar2;
  size_t sVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  undefined8 extraout_RDX;
  int iVar9;
  char *pcVar10;
  char *pcVar11;
  undefined4 local_c [3];
  
  local_c[0] = param_3;
  if ((uint)param_4 < 3) {
    uVar7 = FUN_0040e910(param_1,param_2,local_c,(&PTR_FUN_00417d40)[(ulong)param_4 & 0xffffffff],6)
    ;
    return uVar7;
  }
  FUN_0040e8f0();
  piVar2 = __errno_location();
  iVar8 = *piVar2;
  sVar3 = strlen(param_1);
  uVar7 = (long)(int)param_2 + 6;
  if (uVar7 <= sVar3) {
    lVar4 = sVar3 - uVar7;
    __s = param_1 + lVar4;
    sVar3 = strspn(__s,"X");
    if (5 < sVar3) {
      lVar5 = FUN_00414400(0,6);
      if (lVar5 == 0) {
        uVar1 = 0xffffffff;
      }
      else {
        iVar9 = 0x3a2f8;
        pcVar10 = __s;
        do {
          do {
            pcVar11 = pcVar10 + 1;
            lVar6 = FUN_00414440(lVar5,0x3d);
            *pcVar10 = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"[lVar6];
            pcVar10 = pcVar11;
          } while (pcVar11 != param_1 + lVar4 + 6);
          uVar1 = (*param_4)(param_1,extraout_RDX);
          if (-1 < (int)uVar1) {
            *piVar2 = iVar8;
LAB_0040ea25:
            FUN_00414560(lVar5);
            *piVar2 = iVar8;
            goto LAB_0040ea40;
          }
          if (*piVar2 != 0x11) {
            uVar1 = 0xffffffff;
            iVar8 = *piVar2;
            goto LAB_0040ea25;
          }
          iVar9 = iVar9 + -1;
          pcVar10 = __s;
        } while (iVar9 != 0);
        FUN_00414560(lVar5);
        *piVar2 = 0x11;
        uVar1 = 0xffffffff;
      }
      goto LAB_0040ea40;
    }
  }
  *piVar2 = 0x16;
  uVar1 = 0xffffffff;
LAB_0040ea40:
  return (ulong)uVar1;
}


int FUN_0040eae0(char *param_1,int param_2,undefined8 param_3,code *param_4)

{
  char *__s;
  int iVar1;
  int *piVar2;
  size_t sVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  
  piVar2 = __errno_location();
  iVar7 = *piVar2;
  sVar3 = strlen(param_1);
  if ((long)param_2 + 6U <= sVar3) {
    lVar4 = sVar3 - ((long)param_2 + 6U);
    __s = param_1 + lVar4;
    sVar3 = strspn(__s,"X");
    if (5 < sVar3) {
      lVar5 = FUN_00414400(0,6);
      if (lVar5 == 0) {
        return -1;
      }
      iVar8 = 0x3a2f8;
      pcVar9 = __s;
      while( true ) {
        do {
          pcVar10 = pcVar9 + 1;
          lVar6 = FUN_00414440(lVar5,0x3d);
          *pcVar9 = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"[lVar6];
          pcVar9 = pcVar10;
        } while (pcVar10 != param_1 + lVar4 + 6);
        iVar1 = (*param_4)(param_1,param_3);
        if (-1 < iVar1) break;
        if (*piVar2 != 0x11) {
          iVar1 = -1;
          iVar7 = *piVar2;
          goto LAB_0040ea25;
        }
        iVar8 = iVar8 + -1;
        pcVar9 = __s;
        if (iVar8 == 0) {
          FUN_00414560(lVar5);
          *piVar2 = 0x11;
          return -1;
        }
      }
      *piVar2 = iVar7;
LAB_0040ea25:
      FUN_00414560(lVar5);
      *piVar2 = iVar7;
      return iVar1;
    }
  }
  *piVar2 = 0x16;
  return -1;
}


uint FUN_0040eaf0(uint param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  if (2 < param_1) {
    return param_1;
  }
  uVar2 = FUN_00414fd0();
  piVar3 = __errno_location();
  iVar1 = *piVar3;
  close(param_1);
  *piVar3 = iVar1;
  return uVar2;
}


ulong FUN_0040eb40(ulong *param_1,ulong param_2)

{
  return *param_1 % param_2;
}


ulong FUN_0040eb50(ulong *param_1,ulong *param_2)

{
  return *param_2 & 0xffffffffffffff00 | (ulong)(*param_1 == *param_2);
}


uint FUN_0040eb60(char *param_1,undefined8 *param_2,long param_3,uint param_4,undefined8 param_5,
                 undefined8 param_6)

{
  ulong uVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  ulong uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  char cVar17;
  ulong in_stack_fffffffffffffeb8;
  ulong in_stack_fffffffffffffec0;
  ulong uVar18;
  ulong *puVar19;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined local_ec;
  ulong local_e8;
  long local_e0;
  ulong local_d8;
  ulong local_d0;
  stat local_c8;
  
  uVar1 = param_2[0xb];
  uVar8 = *(ulong *)(param_3 + 0x58);
  iVar15 = (int)*(undefined8 *)(param_3 + 0x60);
  param_4 = param_4 & 1;
  iVar14 = (int)param_2[0xc];
  if (param_4 == 0) goto LAB_0040ec50;
  uVar6 = in_stack_fffffffffffffeb8 & 0xffffffffffffff00 | (ulong)(uVar1 == uVar8);
  bVar3 = iVar14 == iVar15 && uVar1 == uVar8;
  uVar18 = in_stack_fffffffffffffec0 & 0xffffffffffffff00 | (ulong)bVar3;
  if (bVar3) {
    return 0;
  }
  if ((long)uVar1 < (long)(uVar8 - 1)) {
    return 0xffffffff;
  }
  if ((long)uVar8 < (long)(uVar1 - 1)) {
    return param_4;
  }
  if (DAT_0061daa0 == 0) {
    DAT_0061daa0 = FUN_0040b8c0(0x10,0,FUN_0040eb40,FUN_0040eb50,free,param_6,uVar6,uVar18);
    cVar17 = (char)uVar6;
    if (DAT_0061daa0 != 0) goto LAB_0040ebe1;
LAB_0040ece4:
    puVar5 = &local_f8;
    local_f0 = 2000000000;
    local_ec = 0;
    iVar4 = 2000000000;
  }
  else {
LAB_0040ebe1:
    lVar2 = DAT_0061daa0;
    cVar17 = (char)uVar6;
    puVar5 = DAT_0061da98;
    if (DAT_0061da98 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)malloc(0x10);
      DAT_0061da98 = puVar5;
      if (puVar5 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar5 + 1) = 2000000000;
        *(undefined *)((long)puVar5 + 0xc) = 0;
        goto LAB_0040ebf1;
      }
LAB_0040f190:
      local_f8 = *param_2;
      puVar5 = (undefined8 *)FUN_0040b650(DAT_0061daa0,&local_f8);
      if (puVar5 == (undefined8 *)0x0) goto LAB_0040ece4;
    }
    else {
LAB_0040ebf1:
      *puVar5 = *param_2;
      puVar5 = (undefined8 *)FUN_0040c060(lVar2);
      if (puVar5 == (undefined8 *)0x0) {
        if (DAT_0061daa0 == 0) goto LAB_0040ece4;
        goto LAB_0040f190;
      }
      if (DAT_0061da98 == puVar5) {
        DAT_0061da98 = (undefined8 *)0x0;
      }
    }
    iVar4 = *(int *)(puVar5 + 1);
    if (*(char *)((long)puVar5 + 0xc) != '\0') {
      uVar8 = uVar8 & (long)(int)~(uint)(iVar4 == 2000000000);
      iVar15 = iVar15 - iVar15 % iVar4;
      goto LAB_0040ec50;
    }
  }
  iVar10 = (int)param_2[10];
  iVar7 = iVar10 / 10;
  iVar9 = (int)param_2[0xe] / 10;
  iVar11 = iVar14 / 10;
  if (((int)param_2[0xe] % 10 | iVar10 % 10 | iVar14 % 10) == 0) {
    local_e8 = param_2[9];
    uVar6 = uVar8;
    if (iVar4 < 0xb) {
      *(undefined4 *)(puVar5 + 1) = 10;
      uVar13 = 10;
    }
    else {
      uVar13 = 10;
      if ((iVar7 % 10 | iVar9 % 10 | iVar11 % 10) == 0) {
        iVar16 = 8;
        do {
          uVar12 = (int)uVar13 * 10;
          uVar13 = (ulong)uVar12;
          iVar7 = iVar7 / 10;
          iVar9 = iVar9 / 10;
          iVar11 = iVar11 / 10;
          if ((iVar4 <= (int)uVar12) || ((iVar7 % 10 | iVar9 % 10 | iVar11 % 10) != 0)) {
            uVar18 = (ulong)(uVar12 == 2000000000);
            *(uint *)(puVar5 + 1) = uVar12;
            uVar6 = (long)(int)~(uint)(uVar12 == 2000000000) & uVar8;
            goto LAB_0040eef5;
          }
          iVar16 = iVar16 + -1;
        } while (iVar16 != 0);
        if (((local_e8 | uVar1 | param_2[0xd]) & 1) == 0) {
          *(undefined4 *)(puVar5 + 1) = 2000000000;
          uVar13 = 2000000000;
          uVar18 = 1;
          uVar6 = uVar8 & 0xfffffffffffffffe;
        }
        else {
          *(undefined4 *)(puVar5 + 1) = 1000000000;
          uVar13 = 1000000000;
        }
      }
      else {
        *(undefined4 *)(puVar5 + 1) = 10;
      }
    }
LAB_0040eef5:
    if ((long)uVar8 < (long)uVar1) {
      return param_4;
    }
    if ((iVar15 <= iVar14) && (cVar17 != '\0')) {
      return param_4;
    }
    if ((long)uVar1 < (long)uVar6) {
      return 0xffffffff;
    }
    uVar12 = (uint)uVar13;
    if ((uVar1 == uVar6) && (iVar14 < iVar15 - iVar15 % (int)uVar12)) {
      return 0xffffffff;
    }
    local_e0 = (long)iVar10;
    local_d8 = uVar18 & 0xff | uVar1;
    local_d0 = (ulong)((int)(uVar13 / 9) + iVar14);
    puVar19 = &local_e8;
    if ((*(uint *)(param_2 + 3) & 0xf000) == 0xa000) {
      iVar4 = FUN_0040f8b0(param_1,puVar19);
    }
    else {
      iVar4 = FUN_0040f8a0();
    }
    if (iVar4 != 0) {
      return 0xfffffffe;
    }
    if ((*(uint *)(param_2 + 3) & 0xf000) == 0xa000) {
      iVar4 = __lxstat(1,param_1,&local_c8);
    }
    else {
      iVar4 = __xstat(1,param_1,&local_c8);
    }
    local_d0 = (ulong)iVar14;
    if ((local_d0 ^ local_c8.st_mtim.tv_nsec | local_c8.st_mtim.tv_sec ^ uVar1 | (long)iVar4) != 0)
    {
      local_d8 = uVar1;
      if ((*(uint *)(param_2 + 3) & 0xf000) == 0xa000) {
        FUN_0040f8b0(param_1,puVar19);
      }
      else {
        FUN_0040f8a0();
      }
      if (iVar4 != 0) {
        return 0xfffffffe;
      }
    }
    iVar4 = (int)local_c8.st_mtim.tv_nsec + ((uint)local_c8.st_mtim.tv_sec & 1) * 1000000000;
    if (iVar4 == (iVar4 / 10) * 10) {
      if (uVar12 == 10) {
        param_4 = 10;
        goto LAB_0040f2c0;
      }
      iVar10 = 9;
      param_4 = 10;
      do {
        iVar4 = iVar4 / 10;
        if (iVar4 != (iVar4 / 10) * 10) break;
        iVar10 = iVar10 + -1;
        if (iVar10 == 0) {
          uVar6 = 0xfffffffffffffffe;
          param_4 = 2000000000;
          goto LAB_0040f118;
        }
        param_4 = param_4 * 10;
      } while (param_4 != uVar12);
      uVar6 = (ulong)(int)~(uint)(param_4 == 2000000000);
    }
    else {
LAB_0040f2c0:
      uVar6 = 0xffffffffffffffff;
    }
LAB_0040f118:
    uVar8 = uVar8 & uVar6;
    iVar15 = iVar15 - iVar15 % (int)param_4;
  }
  *(uint *)(puVar5 + 1) = param_4;
  *(undefined *)((long)puVar5 + 0xc) = 1;
LAB_0040ec50:
  if ((long)uVar8 <= (long)uVar1) {
    if (uVar8 != uVar1) {
      return 1;
    }
    if (iVar15 <= iVar14) {
      return (uint)(iVar15 < iVar14);
    }
  }
  return 0xffffffff;
}


undefined8 FUN_0040f2d0(long param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = (undefined8 *)*param_2;
  lVar3 = puVar1[3];
  if (puVar1[1] == 0x3ffffffe) {
    if (lVar3 == 0x3ffffffe) {
      return 1;
    }
    uVar2 = *(undefined8 *)(param_1 + 0x50);
    *puVar1 = *(undefined8 *)(param_1 + 0x48);
    puVar1[1] = uVar2;
  }
  else {
    if (puVar1[1] == 0x3fffffff) {
      if (lVar3 == 0x3fffffff) {
        *param_2 = 0;
        return 0;
      }
      FUN_00413c70(puVar1);
      lVar3 = puVar1[3];
    }
    if (lVar3 == 0x3ffffffe) {
      uVar2 = *(undefined8 *)(param_1 + 0x60);
      puVar1[2] = *(undefined8 *)(param_1 + 0x58);
      puVar1[3] = uVar2;
      return 0;
    }
  }
  if (lVar3 != 0x3fffffff) {
    return 0;
  }
  FUN_00413c70(puVar1 + 2);
  return 0;
}


int FUN_0040f3a0(undefined8 *param_1)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  int *piVar4;
  char cVar5;
  uint uVar6;
  
  uVar1 = param_1[1];
  if ((uVar1 - 0x3ffffffe < 2) || (uVar1 < 1000000000)) {
    uVar2 = param_1[3];
    if ((uVar2 - 0x3ffffffe < 2) || (uVar2 < 1000000000)) {
      bVar3 = uVar1 - 0x3ffffffe < 2;
      if (bVar3) {
        *param_1 = 0;
      }
      cVar5 = bVar3 && uVar1 == 0x3ffffffe;
      uVar6 = (uint)bVar3;
      if (uVar2 - 0x3ffffffe < 2) {
        param_1[2] = 0;
        uVar6 = 1;
        cVar5 = cVar5 + (uVar2 == 0x3ffffffe);
      }
      return (cVar5 == '\x01') + uVar6;
    }
  }
  piVar4 = __errno_location();
  *piVar4 = 0x16;
  return -1;
}


void FUN_0040f450(int param_1,char *param_2,timespec *param_3)

{
  utimensat(param_1,param_2,param_3,0x100);
  return;
}


/* WARNING: Type propagation algorithm not settling */

int FUN_0040f460(int param_1,char *param_2,__time_t *param_3)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  __time_t _Var4;
  char cVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  utimbuf *__file_times;
  timeval *__tvp;
  bool bVar9;
  timespec *local_120;
  timespec local_118;
  __time_t local_108;
  __time_t _Stack_100;
  timeval local_f8;
  __time_t local_e8;
  long lStack_e0;
  utimbuf local_d8;
  undefined4 local_c8;
  undefined4 uStack_c4;
  __suseconds_t _Stack_c0;
  stat local_b8;
  
  if (param_3 == (__time_t *)0x0) {
    local_120 = (timespec *)0x0;
    iVar6 = 0;
  }
  else {
    local_118.tv_sec = *param_3;
    local_118.tv_nsec = param_3[1];
    local_108 = param_3[2];
    _Stack_100 = param_3[3];
    local_120 = &local_118;
    iVar6 = FUN_0040f3a0();
    if (iVar6 < 0) {
      return -1;
    }
  }
  if ((param_1 < 0) && (param_2 == (char *)0x0)) {
    piVar8 = __errno_location();
    *piVar8 = 9;
    return -1;
  }
  if (-1 < DAT_0061daac) {
    if (iVar6 == 2) {
      if (param_1 < 0) {
        iVar6 = __xstat(1,param_2,&local_b8);
      }
      else {
        iVar6 = __fxstat(1,param_1,&local_b8);
      }
      _Var4 = local_b8.st_mtim.tv_sec;
      lVar3 = local_b8.st_atim.tv_nsec;
      if (iVar6 != 0) {
        return -1;
      }
      if (local_120->tv_nsec == 0x3ffffffe) {
        iVar6 = 3;
        local_120->tv_sec = local_b8.st_atim.tv_sec;
        local_120->tv_nsec = lVar3;
      }
      else {
        iVar6 = 3;
        if (local_120[1].tv_nsec == 0x3ffffffe) {
          local_120[1].tv_nsec = local_b8.st_mtim.tv_nsec;
          local_120[1].tv_sec = _Var4;
        }
      }
    }
    if (param_1 < 0) {
      iVar7 = utimensat(-100,param_2,local_120,0);
    }
    else {
      iVar7 = futimens(param_1,local_120);
    }
    if (iVar7 < 1) {
      if ((iVar7 == 0) || (piVar8 = __errno_location(), *piVar8 != 0x26)) {
        DAT_0061daac = 1;
        return iVar7;
      }
    }
    else {
      piVar8 = __errno_location();
      *piVar8 = 0x26;
    }
  }
  DAT_0061daac = 0xffffffff;
  DAT_0061daa8 = 0xffffffff;
  if (iVar6 == 0) {
LAB_0040f560:
    if (local_120 == (timespec *)0x0) goto LAB_0040f630;
    local_f8.tv_sec = local_120->tv_sec;
    __tvp = &local_f8;
    local_e8 = local_120[1].tv_sec;
    local_f8.tv_usec = local_120->tv_nsec / 1000;
    lStack_e0 = local_120[1].tv_nsec / 1000;
  }
  else {
    if (iVar6 != 3) {
      if (param_1 < 0) {
        iVar6 = __xstat(1,param_2,&local_b8);
      }
      else {
        iVar6 = __fxstat(1,param_1,&local_b8);
      }
      if (iVar6 != 0) {
        return -1;
      }
    }
    if (local_120 != (timespec *)0x0) {
      cVar5 = FUN_0040f2d0(&local_b8,&local_120);
      if (cVar5 != '\0') {
        return 0;
      }
      goto LAB_0040f560;
    }
LAB_0040f630:
    __tvp = (timeval *)0x0;
  }
  if (param_1 < 0) {
    iVar6 = futimesat(-100,param_2,__tvp);
    return iVar6;
  }
  iVar6 = futimesat(param_1,(char *)0x0,__tvp);
  if (iVar6 != 0) {
    if (param_2 != (char *)0x0) {
      __file_times = (utimbuf *)0x0;
      if (local_120 != (timespec *)0x0) {
        local_d8.actime = local_120->tv_sec;
        local_d8.modtime = local_120[1].tv_sec;
        __file_times = &local_d8;
      }
      iVar6 = utime(param_2,__file_times);
      return iVar6;
    }
    return -1;
  }
  if (__tvp == (timeval *)0x0) {
    return 0;
  }
  bVar1 = __tvp->tv_usec < 500000;
  bVar2 = __tvp[1].tv_usec < 500000;
  if ((bVar1) && (bVar2)) {
    return 0;
  }
  iVar6 = __fxstat(1,param_1,&local_b8);
  if (iVar6 != 0) {
    return 0;
  }
  local_d8.actime = __tvp->tv_sec;
  local_d8.modtime = __tvp->tv_usec;
  local_c8 = *(undefined4 *)&__tvp[1].tv_sec;
  uStack_c4 = *(undefined4 *)((long)&__tvp[1].tv_sec + 4);
  _Stack_c0 = __tvp[1].tv_usec;
  bVar9 = local_b8.st_mtim.tv_sec - __tvp[1].tv_sec != 1;
  if (((local_b8.st_atim.tv_sec - __tvp->tv_sec != 1) || (bVar1)) || (local_b8.st_atim.tv_nsec != 0)
     ) {
    if (bVar2 || bVar9) {
      return 0;
    }
    if (local_b8.st_mtim.tv_nsec != 0) {
      return 0;
    }
  }
  else {
    local_d8.modtime = 0;
    if ((bVar2 || bVar9) || (local_b8.st_mtim.tv_nsec != 0)) goto LAB_0040f7e7;
  }
  _Stack_c0 = 0;
LAB_0040f7e7:
  futimesat(param_1,(char *)0x0,(timeval *)&local_d8);
  return 0;
}


void FUN_0040f8a0(undefined8 param_1,undefined8 param_2)

{
  FUN_0040f460(0xffffffff,param_1,param_2);
  return;
}


int FUN_0040f8b0(char *param_1,__time_t *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  timespec *__times;
  timespec *local_d0;
  timespec local_c8;
  __time_t local_b8;
  __time_t _Stack_b0;
  stat local_a8;
  
  if (param_2 == (__time_t *)0x0) {
    iVar2 = 0;
    local_d0 = (timespec *)0x0;
    __times = (timespec *)0x0;
    if (-1 < DAT_0061daa8) goto LAB_0040f90b;
  }
  else {
    local_c8.tv_sec = *param_2;
    local_c8.tv_nsec = param_2[1];
    local_b8 = param_2[2];
    _Stack_b0 = param_2[3];
    local_d0 = &local_c8;
    iVar2 = FUN_0040f3a0();
    if (iVar2 < 0) {
      return -1;
    }
    if (-1 < DAT_0061daa8) {
      __times = local_d0;
      if (iVar2 == 2) {
        iVar2 = __lxstat(1,param_1,&local_a8);
        __times = local_d0;
        if (iVar2 != 0) {
          return -1;
        }
        if (local_d0->tv_nsec == 0x3ffffffe) {
          iVar2 = 3;
          local_d0->tv_sec = local_a8.st_atim.tv_sec;
          __times->tv_nsec = local_a8.st_atim.tv_nsec;
        }
        else {
          iVar2 = 3;
          if (local_d0[1].tv_nsec == 0x3ffffffe) {
            local_d0[1].tv_nsec = local_a8.st_mtim.tv_nsec;
            __times[1].tv_sec = local_a8.st_mtim.tv_sec;
          }
        }
      }
LAB_0040f90b:
      iVar3 = utimensat(-100,param_1,__times,0x100);
      if (iVar3 < 1) {
        if ((iVar3 == 0) || (piVar4 = __errno_location(), *piVar4 != 0x26)) {
          DAT_0061daac = 1;
          DAT_0061daa8 = 1;
          return iVar3;
        }
      }
      else {
        piVar4 = __errno_location();
        *piVar4 = 0x26;
      }
    }
    DAT_0061daa8 = 0xffffffff;
    if (iVar2 != 0) {
      if ((iVar2 != 3) && (iVar2 = __lxstat(1,param_1,&local_a8), iVar2 != 0)) {
        return -1;
      }
      if ((local_d0 != (timespec *)0x0) &&
         (cVar1 = FUN_0040f2d0(&local_a8,&local_d0), cVar1 != '\0')) {
        return 0;
      }
      goto LAB_0040f96a;
    }
  }
  DAT_0061daa8 = 0xffffffff;
  iVar2 = __lxstat(1,param_1,&local_a8);
  if (iVar2 != 0) {
    return -1;
  }
LAB_0040f96a:
  if ((local_a8.st_mode & 0xf000) == 0xa000) {
    piVar4 = __errno_location();
    *piVar4 = 0x26;
    return -1;
  }
  iVar2 = FUN_0040f460(0xffffffff,param_1,local_d0);
  return iVar2;
}


undefined8
FUN_0040fb00(FILE *param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5,
            undefined8 param_6)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  if (param_2 == 0) {
    __fprintf_chk(param_1,1,"%s %s\n",param_3,param_4);
  }
  else {
    __fprintf_chk(param_1,1,"%s (%s) %s\n",param_2,param_3,param_4);
  }
  uVar1 = dcgettext(0,&DAT_00417dd2,5);
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
    goto LAB_0040fd7c;
  case 5:
    uVar1 = param_5[3];
    uVar4 = param_5[2];
    uVar5 = param_5[1];
    uVar6 = *param_5;
    uVar7 = dcgettext(0,"Written by %s, %s, %s,\n%s, and %s.\n",5);
LAB_0040fd7c:
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
    goto LAB_0040fe19;
  case 7:
    uVar1 = param_5[2];
    uVar4 = param_5[5];
    uVar5 = param_5[4];
    uVar6 = param_5[3];
    local_58 = param_5[1];
    uVar7 = *param_5;
    uVar3 = dcgettext(0,"Written by %s, %s, %s,\n%s, %s, %s, and %s.\n",5);
LAB_0040fe19:
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
    goto LAB_0040fbfa;
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
LAB_0040fbfa:
  uVar1 = __fprintf_chk(param_1,1,uVar3,uVar7,local_50,local_58,uVar6,uVar5,uVar4,uVar1,local_48);
  return uVar1;
}


void FUN_0040fee0(void)

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
  FUN_0040fb00();
  return;
}


void FUN_0040ff00(void)

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
  FUN_0040fb00();
  return;
}


void FUN_0040ff60(void)

{
  long lVar1;
  undefined8 in_R8;
  ulong uVar2;
  undefined8 in_R9;
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
  FUN_0040fb00();
  return;
}


void FUN_00410020(void)

{
  FILE *__stream;
  undefined8 uVar1;
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


ulong FUN_004100a0(void)

{
  __uid_t _Var1;
  undefined4 extraout_var;
  
  if (DAT_0061dab1 != '\0') {
    return (ulong)DAT_0061dab0;
  }
  _Var1 = geteuid();
  DAT_0061dab1 = 1;
  DAT_0061dab0 = _Var1 == 0;
  return CONCAT44(extraout_var,_Var1) & 0xffffffffffffff00 | (ulong)(_Var1 == 0);
}


void FUN_004100e0(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00410330();
  }
  return;
}


void FUN_00410100(ulong param_1,ulong param_2)

{
  if ((-1 < SUB168(ZEXT816(param_1) * ZEXT816(param_2),0)) &&
     (SUB168(ZEXT816(param_1) * ZEXT816(param_2) >> 0x40,0) == 0)) {
    FUN_004100e0();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00410330();
}


void thunk_FUN_004100e0(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00410330();
  }
  return;
}


void * FUN_00410140(void *param_1,size_t param_2)

{
  void *pvVar1;
  
  if ((param_2 == 0) && (param_1 != (void *)0x0)) {
    free(param_1);
    return (void *)0x0;
  }
  pvVar1 = realloc(param_1,param_2);
  if ((pvVar1 == (void *)0x0) && (param_2 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00410330();
  }
  return pvVar1;
}


void FUN_00410180(undefined8 param_1,ulong param_2,ulong param_3)

{
  if ((-1 < SUB168(ZEXT816(param_2) * ZEXT816(param_3),0)) &&
     (SUB168(ZEXT816(param_2) * ZEXT816(param_3) >> 0x40,0) == 0)) {
    FUN_00410140();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00410330();
}


void FUN_004101b0(long param_1,ulong *param_2,ulong param_3)

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
    if ((SUB168(ZEXT816(uVar2) * ZEXT816(param_3),0) < 0) || (uVar3 != 0)) goto LAB_0041020b;
  }
  else {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x5555555555555554);
    uVar3 = SUB168(auVar1 % ZEXT816(param_3),0);
    if (SUB168(auVar1 / ZEXT816(param_3),0) <= uVar2) {
LAB_0041020b:
                    /* WARNING: Subroutine does not return */
      FUN_00410330(param_1,param_2,uVar3);
    }
    uVar2 = (uVar2 >> 1) + 1 + uVar2;
  }
  *param_2 = uVar2;
  FUN_00410140(param_1,uVar2 * param_3);
  return;
}


void FUN_00410240(long param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (param_1 == 0) {
    if (uVar1 == 0) {
      *param_2 = 0x80;
      FUN_00410140(0,0x80);
      return;
    }
    if ((long)uVar1 < 0) goto LAB_0041028a;
  }
  else {
    if (0x5555555555555553 < uVar1) {
LAB_0041028a:
                    /* WARNING: Subroutine does not return */
      FUN_00410330();
    }
    uVar1 = (uVar1 >> 1) + 1 + uVar1;
  }
  *param_2 = uVar1;
  FUN_00410140(param_1,uVar1);
  return;
}


void FUN_00410290(size_t param_1)

{
  void *__s;
  
  __s = (void *)FUN_004100e0();
  memset(__s,0,param_1);
  return;
}


void FUN_004102b0(size_t param_1,ulong param_2)

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
  FUN_00410330();
}


void FUN_004102e0(void *param_1,size_t param_2)

{
  void *__dest;
  
  __dest = (void *)FUN_004100e0(param_2);
  memcpy(__dest,param_1,param_2);
  return;
}


void FUN_00410310(char *param_1)

{
  void *__dest;
  size_t sVar1;
  
  sVar1 = strlen(param_1);
  __dest = (void *)FUN_004100e0(sVar1 + 1);
  memcpy(__dest,param_1,sVar1 + 1);
  return;
}


void FUN_00410330(void)

{
  undefined8 uVar1;
  
  uVar1 = dcgettext(0,"memory exhausted",5);
  error(DAT_0061d408,0,&DAT_00418333,uVar1);
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00410370(undefined8 param_1,uint param_2)

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
    FUN_00410330();
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("errno != EINVAL","lib/xfts.c",0x29,"xfts_open");
}


bool FUN_004103c0(long param_1,long param_2)

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


bool FUN_004103f0(void)

{
  int iVar1;
  __ssize_t _Var2;
  bool bVar3;
  char *local_18;
  size_t local_10;
  
  bVar3 = false;
  local_18 = (char *)0x0;
  local_10 = 0;
  _Var2 = __getdelim(&local_18,&local_10,10,stdin);
  if (0 < _Var2) {
    if (local_18[_Var2 + -1] == '\n') {
      local_18[_Var2 + -1] = '\0';
    }
    iVar1 = rpmatch(local_18);
    bVar3 = 0 < iVar1;
  }
  free(local_18);
  return bVar3;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_00410460(ulong param_1,int param_2,ulong param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  
  if (param_2 != 0x406) {
    iVar1 = fcntl((int)param_1,param_2,param_3);
    return iVar1;
  }
  if (DAT_0061dab4 < 0) {
    iVar1 = FUN_00410460(param_1,0,param_3 & 0xffffffff);
    if (iVar1 < 0) {
      return iVar1;
    }
    if (DAT_0061dab4 != -1) {
      return iVar1;
    }
  }
  else {
    iVar1 = fcntl((int)param_1,0x406);
    if ((-1 < iVar1) || (piVar4 = __errno_location(), *piVar4 != 0x16)) {
      DAT_0061dab4 = 1;
      return iVar1;
    }
    iVar1 = FUN_00410460(param_1 & 0xffffffff,0,param_3 & 0xffffffff);
    if (iVar1 < 0) {
      return iVar1;
    }
    DAT_0061dab4 = -1;
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


void FUN_004105a0(FILE *param_1)

{
  int iVar1;
  
  if (param_1 != (FILE *)0x0) {
    iVar1 = __freading();
    if ((iVar1 != 0) && ((param_1->_flags & 0x100U) != 0)) {
      FUN_00410610(param_1,0,1);
      fflush(param_1);
      return;
    }
  }
  fflush(param_1);
  return;
}


long FUN_004105e0(uint *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if ((*(ulong *)(param_1 + 10) < *(ulong *)(param_1 + 8) ||
       *(ulong *)(param_1 + 10) == *(ulong *)(param_1 + 8)) &&
     (lVar1 = *(long *)(param_1 + 4) - *(long *)(param_1 + 2), (*param_1 & 0x100) != 0)) {
    lVar1 = lVar1 + (*(long *)(param_1 + 0x16) - *(long *)(param_1 + 0x12));
  }
  return lVar1;
}


ulong FUN_00410610(FILE *param_1,__off_t param_2,int param_3)

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


ulong FUN_00410670(ulong *param_1,ulong *param_2)

{
  if (param_1[1] != param_2[1]) {
    return 0;
  }
  return *param_2 & 0xffffffffffffff00 | (ulong)(*param_1 == *param_2);
}


ulong FUN_00410690(long param_1,ulong param_2)

{
  return *(ulong *)(param_1 + 8) % param_2;
}


ulong FUN_004106a0(ulong *param_1,ulong param_2)

{
  return *param_1 % param_2;
}


ulong FUN_004106b0(ulong *param_1,ulong *param_2)

{
  return *param_2 & 0xffffffffffffff00 | (ulong)(*param_1 == *param_2);
}


ulong FUN_004106c0(long *param_1,long *param_2)

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


int FUN_004106f0(long param_1,long param_2,char param_3)

{
  stat *__stat_buf;
  int iVar1;
  uint uVar2;
  int *piVar3;
  ulong uVar4;
  undefined8 *puVar5;
  byte bVar6;
  
  bVar6 = 0;
  __stat_buf = (stat *)(param_2 + 0x78);
  if ((((*(long *)(param_2 + 0x58) == 0) && ((*(uint *)(param_1 + 0x48) & 1) != 0)) ||
      ((*(uint *)(param_1 + 0x48) & 2) != 0)) || (param_3 != '\0')) {
    iVar1 = __xstat(1,*(char **)(param_2 + 0x30),__stat_buf);
    if (iVar1 == 0) {
LAB_00410787:
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
    if (iVar1 == 0) goto LAB_00410787;
    piVar3 = __errno_location();
    iVar1 = *piVar3;
  }
  *(int *)(param_2 + 0x40) = iVar1;
  puVar5 = (undefined8 *)(param_2 + 0x80U & 0xfffffffffffffff8);
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(undefined8 *)(param_2 + 0x100) = 0;
  uVar4 = (ulong)(((int)__stat_buf - (int)puVar5) + 0x90U >> 3);
  for (; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar5 = 0;
    puVar5 = puVar5 + (ulong)bVar6 * -2 + 1;
  }
  return 10;
}


long FUN_004108a0(long param_1,long param_2,ulong param_3)

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
LAB_004108f5:
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
    *(undefined8 *)(lVar7 + 0x10) = 0;
    return lVar4;
  }
  uVar1 = param_3 + 0x28;
  *(ulong *)(param_1 + 0x38) = uVar1;
  if (uVar1 < 0x2000000000000000) {
    plVar3 = (long *)realloc(plVar3,uVar1 * 8);
    if (plVar3 != (long *)0x0) {
      *(long **)(param_1 + 0x10) = plVar3;
      goto LAB_004108f5;
    }
    plVar3 = *(long **)(param_1 + 0x10);
  }
  free(plVar3);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return param_2;
}


void * FUN_004109a0(long param_1,void *param_2,size_t param_3)

{
  undefined8 uVar1;
  void *pvVar2;
  
  pvVar2 = malloc(param_3 + 0x110 & 0xfffffffffffffff8);
  if (pvVar2 != (void *)0x0) {
    memcpy((void *)((long)pvVar2 + 0x108),param_2,param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    *(undefined *)((long)pvVar2 + param_3 + 0x108) = 0;
    *(size_t *)((long)pvVar2 + 0x60) = param_3;
    *(long *)((long)pvVar2 + 0x50) = param_1;
    *(undefined8 *)((long)pvVar2 + 0x38) = uVar1;
    *(undefined4 *)((long)pvVar2 + 0x40) = 0;
    *(undefined8 *)((long)pvVar2 + 0x18) = 0;
    *(undefined4 *)((long)pvVar2 + 0x72) = 0x30000;
    *(undefined8 *)((long)pvVar2 + 0x20) = 0;
    *(undefined8 *)((long)pvVar2 + 0x28) = 0;
  }
  return pvVar2;
}


void FUN_00410a30(void *param_1)

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


void FUN_00410a80(undefined8 param_1)

{
  char cVar1;
  int __fd;
  
  while( true ) {
    cVar1 = FUN_00413d70(param_1);
    if (cVar1 != '\0') break;
    __fd = FUN_00413dc0(param_1);
    if (-1 < __fd) {
      close(__fd);
    }
  }
  return;
}


long FUN_00410ac0(long param_1)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  undefined8 *__ptr;
  undefined8 *puVar4;
  long lVar5;
  statfs local_98;
  
  lVar3 = *(long *)(param_1 + 0x50);
  if ((*(byte *)(lVar3 + 0x49) & 2) == 0) {
    return 0;
  }
  lVar5 = *(long *)(lVar3 + 0x50);
  if (lVar5 == 0) {
    lVar5 = FUN_0040b8c0(0xd,0,FUN_004106a0,FUN_004106b0,free);
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
  lVar3 = FUN_0040b650(lVar5,&local_98);
  if (lVar3 == 0) {
    iVar2 = fstatfs(*(int *)(*(long *)(param_1 + 0x50) + 0x2c),&local_98);
    if (iVar2 != 0) {
      return 0;
    }
    __ptr = (undefined8 *)malloc(0x10);
    if (__ptr != (undefined8 *)0x0) {
      uVar1 = *(undefined8 *)(param_1 + 0x78);
      __ptr[1] = local_98.f_type;
      *__ptr = uVar1;
      puVar4 = (undefined8 *)FUN_0040c060(lVar5,__ptr);
      if (puVar4 != (undefined8 *)0x0) {
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


bool FUN_00410be0(void)

{
  long lVar1;
  
  lVar1 = FUN_00410ac0();
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


void FUN_00410c50(long param_1,int param_2,char param_3)

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
    iVar1 = FUN_00413d80(param_1 + 0x60);
    if (-1 < iVar1) {
      close(iVar1);
      *(int *)(param_1 + 0x2c) = param_2;
      return;
    }
  }
  *(int *)(param_1 + 0x2c) = param_2;
  return;
}


uint FUN_00410cc0(long param_1)

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
      FUN_00410c50(param_1,0xffffff9c,1);
    }
  }
  else {
    uVar2 = 0;
  }
  FUN_00410a80(param_1 + 0x60);
  return uVar2;
}


undefined8 FUN_00410d20(void **param_1,size_t *param_2,long param_3)

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


ulong FUN_00410d90(uint param_1,void **param_2)

{
  void *pvVar1;
  ulong uVar2;
  
  if ((param_1 & 0x102) == 0) {
    pvVar1 = malloc(0x20);
    *param_2 = pvVar1;
    uVar2 = 0;
    if (pvVar1 != (void *)0x0) {
      FUN_00413be0();
      return 1;
    }
  }
  else {
    pvVar1 = (void *)FUN_0040b8c0(0x1f,0,FUN_00410690,FUN_00410670,free);
    *param_2 = pvVar1;
    uVar2 = (ulong)pvVar1 & 0xffffffffffffff00 | (ulong)(pvVar1 != (void *)0x0);
  }
  return uVar2;
}


void FUN_00410df0(undefined8 param_1,uint param_2,undefined8 param_3)

{
  if ((param_2 & 0x200) != 0) {
    FUN_00414380(param_1,param_3);
    return;
  }
  FUN_0040ab10(param_3,(param_2 & 0x10) << 0xd | (param_2 & 0x800) << 7 | 0x90900);
  return;
}


int FUN_00410e40(long param_1,long param_2,int param_3,byte *param_4)

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
LAB_00410ee0:
    if ((uVar9 & 4) != 0) {
LAB_00410f50:
      if (((uVar9 & 0x200) != 0) && (-1 < param_3)) {
        close(param_3);
        return 0;
      }
      return 0;
    }
    if (param_3 < 0) {
      bVar2 = 0;
LAB_00410f7e:
      iVar3 = FUN_00410df0(*(undefined4 *)(param_1 + 0x2c),uVar9,param_4);
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
    pbVar8 = &DAT_00415fd6;
    do {
      if (lVar6 == 0) break;
      lVar6 = lVar6 + -1;
      bVar10 = *pbVar7 < *pbVar8;
      bVar11 = *pbVar7 == *pbVar8;
      pbVar7 = pbVar7 + 1;
      pbVar8 = pbVar8 + 1;
    } while (bVar11);
    if ((!bVar10 && !bVar11) != bVar10) goto LAB_00410ee0;
    if ((uVar9 & 4) != 0) goto LAB_00410f50;
    if (param_3 < 0) {
      if ((uVar9 & 0x200) == 0) {
        bVar2 = 1;
      }
      else {
        bVar2 = FUN_00413d70(param_1 + 0x60);
        if (bVar2 == 0) {
          iVar3 = FUN_00413dc0(param_1 + 0x60);
          if (-1 < iVar3) {
            bVar2 = 1;
            param_3 = iVar3;
            goto LAB_00410ef2;
          }
          uVar9 = *(uint *)(param_1 + 0x48);
          bVar2 = 1;
        }
      }
      goto LAB_00410f7e;
    }
    bVar2 = 1;
  }
LAB_00410ef2:
  iVar4 = __fxstat(1,iVar3,&local_c8);
  if (iVar4 == 0) {
    if ((*(__dev_t *)(param_2 + 0x78) == local_c8.st_dev) &&
       (*(__ino_t *)(param_2 + 0x80) == local_c8.st_ino)) {
      if ((*(byte *)(param_1 + 0x49) & 2) != 0) {
        FUN_00410c50(param_1,iVar3,bVar2 ^ 1);
        return 0;
      }
      iVar4 = fchdir(iVar3);
      goto LAB_00410f33;
    }
    piVar5 = __errno_location();
    *piVar5 = 2;
  }
  iVar4 = -1;
LAB_00410f33:
  if (param_3 < 0) {
    piVar5 = __errno_location();
    iVar1 = *piVar5;
    close(iVar3);
    *piVar5 = iVar1;
  }
  return iVar4;
}


undefined8 FUN_00411010(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *__ptr;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if ((param_1 & 0x102) == 0) {
    uVar3 = FUN_00413bf0(*param_2,param_3 + 0xf);
    if ((char)uVar3 != '\0') {
      *param_3 = param_3;
      *(undefined2 *)(param_3 + 0xe) = 2;
      return uVar3;
    }
  }
  else {
    __ptr = (undefined8 *)malloc(0x18);
    if (__ptr == (undefined8 *)0x0) {
      return 0;
    }
    uVar3 = param_3[0xf];
    uVar1 = *param_2;
    __ptr[2] = param_3;
    *__ptr = uVar3;
    __ptr[1] = param_3[0x10];
    puVar2 = (undefined8 *)FUN_0040c060(uVar1,__ptr);
    if (__ptr != puVar2) {
      free(__ptr);
      if (puVar2 == (undefined8 *)0x0) {
        return 0;
      }
      uVar3 = puVar2[2];
      *(undefined2 *)(param_3 + 0xe) = 2;
      *param_3 = uVar3;
    }
  }
  return 1;
}


void FUN_004110c0(uint param_1,long **param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  void *__ptr;
  undefined8 local_28;
  undefined8 local_20;
  
  if ((param_1 & 0x102) == 0) {
    lVar1 = *(long *)(param_3 + 8);
    if ((lVar1 != 0) && (-1 < *(long *)(lVar1 + 0x58))) {
      plVar2 = *param_2;
      if (plVar2[2] == 0) goto FUN_00402db7;
      if ((*plVar2 == *(long *)(param_3 + 0x80)) && (plVar2[1] == *(long *)(param_3 + 0x78))) {
        lVar3 = *(long *)(lVar1 + 0x80);
        plVar2[1] = *(long *)(lVar1 + 0x78);
        *plVar2 = lVar3;
      }
    }
    return;
  }
  local_28 = *(undefined8 *)(param_3 + 0x78);
  local_20 = *(undefined8 *)(param_3 + 0x80);
  __ptr = (void *)FUN_0040c0a0(*param_2,&local_28);
  if (__ptr != (void *)0x0) {
    free(__ptr);
    return;
  }
FUN_00402db7:
                    /* WARNING: Subroutine does not return */
  abort();
}


void * FUN_00411160(long *param_1,int param_2)

{
  DIR *__dirp;
  ulong uVar1;
  long lVar2;
  bool bVar3;
  undefined *puVar4;
  char cVar5;
  undefined2 uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  dirent *pdVar10;
  size_t sVar11;
  void *pvVar12;
  undefined8 uVar13;
  void *pvVar14;
  DIR *pDVar15;
  long lVar16;
  long lVar17;
  uint uVar18;
  ushort uVar19;
  ulong uVar20;
  uint uVar21;
  undefined4 uVar22;
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
      uVar22 = *(undefined4 *)((long)param_1 + 0x2c);
    }
    iVar7 = FUN_00414380(uVar22,*(undefined8 *)(lVar17 + 0x30),
                         (uVar21 & 0x800) << 7 | uVar18 | 0x90900);
    if (-1 < iVar7) {
      pDVar15 = fdopendir(iVar7);
      if (pDVar15 != (DIR *)0x0) {
        *(DIR **)(lVar17 + 0x18) = pDVar15;
        if (*(short *)(lVar17 + 0x70) == 0xb) {
          uVar6 = FUN_004106f0(param_1,lVar17,0);
          *(undefined2 *)(lVar17 + 0x70) = uVar6;
        }
        else if ((*(uint *)(param_1 + 9) & 0x100) != 0) {
          FUN_004110c0(*(uint *)(param_1 + 9),param_1 + 0xb,lVar17);
          FUN_004106f0(param_1,lVar17,0);
          cVar5 = FUN_00411010(*(undefined4 *)(param_1 + 9),param_1 + 0xb,lVar17);
          if (cVar5 == '\0') {
            piVar9 = __errno_location();
            *piVar9 = 0xc;
            return (void *)0x0;
          }
        }
        local_60 = (ulong)(-(uint)(param_1[8] == 0) & 0x186a1) - 1;
        if (param_2 == 2) {
LAB_00411910:
          bVar23 = false;
          uVar21 = *(uint *)(param_1 + 9);
          goto LAB_004111b4;
        }
        if ((((*(uint *)(param_1 + 9) & 0x38) == 0x18) && (*(long *)(lVar17 + 0x88) == 2)) &&
           (iVar8 = FUN_00410be0(lVar17), iVar8 != 0)) {
          if (param_2 != 3) goto LAB_00411910;
          bVar3 = false;
          bVar23 = true;
        }
        else {
          bVar23 = param_2 == 3;
          bVar3 = true;
        }
        if (((*(byte *)((long)param_1 + 0x49) & 2) == 0) ||
           (iVar7 = FUN_00410460(iVar7,0x406,3), -1 < iVar7)) {
          iVar8 = FUN_00410e40(param_1,lVar17,iVar7,0);
          if (iVar8 == 0) goto LAB_004111ab;
          pDVar15 = *(DIR **)(lVar17 + 0x18);
          uVar19 = *(ushort *)(lVar17 + 0x72) | 1;
          if ((bVar23) && (bVar3)) goto LAB_0041164d;
LAB_00411662:
          *(ushort *)(lVar17 + 0x72) = uVar19;
          closedir(pDVar15);
          uVar21 = *(uint *)(param_1 + 9);
          *(undefined8 *)(lVar17 + 0x18) = 0;
          if (((uVar21 & 0x200) != 0) && (-1 < iVar7)) {
            close(iVar7);
            uVar21 = *(uint *)(param_1 + 9);
          }
        }
        else {
          pDVar15 = *(DIR **)(lVar17 + 0x18);
          uVar19 = *(ushort *)(lVar17 + 0x72) | 1;
          if ((bVar23) && (bVar3)) {
LAB_0041164d:
            piVar9 = __errno_location();
            *(int *)(lVar17 + 0x40) = *piVar9;
            goto LAB_00411662;
          }
          *(ushort *)(lVar17 + 0x72) = uVar19;
          closedir(pDVar15);
          uVar21 = *(uint *)(param_1 + 9);
        }
        *(undefined8 *)(lVar17 + 0x18) = 0;
        bVar23 = false;
        goto LAB_004111b4;
      }
      piVar9 = __errno_location();
      iVar8 = *piVar9;
      close(iVar7);
      *piVar9 = iVar8;
    }
    *(undefined8 *)(lVar17 + 0x18) = 0;
joined_r0x004118df:
    if (param_2 == 3) {
      *(undefined2 *)(lVar17 + 0x70) = 4;
      piVar9 = __errno_location();
      *(int *)(lVar17 + 0x40) = *piVar9;
    }
    return (void *)0x0;
  }
  iVar7 = dirfd(__dirp);
  if (iVar7 < 0) {
    closedir(*(DIR **)(lVar17 + 0x18));
    *(undefined8 *)(lVar17 + 0x18) = 0;
    goto joined_r0x004118df;
  }
  if (param_1[8] == 0) {
    local_60 = 100000;
    uVar21 = *(uint *)(param_1 + 9);
    bVar23 = true;
  }
  else {
    local_60 = 0xffffffffffffffff;
LAB_004111ab:
    bVar23 = true;
    uVar21 = *(uint *)(param_1 + 9);
  }
LAB_004111b4:
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
      if (pDVar15 == (DIR *)0x0) goto joined_r0x0041178b;
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
          *(undefined8 *)(lVar17 + 0x18) = 0;
        }
        goto joined_r0x0041178b;
      }
    } while ((((*(byte *)(param_1 + 9) & 0x20) == 0) && (pdVar10->d_name[0] == '.')) &&
            ((uVar1 = uVar20, pdVar10->d_name[1] == '\0' ||
             (*(short *)(pdVar10->d_name + 1) == 0x2e))));
    sVar11 = strlen(pdVar10->d_name);
    pvVar12 = (void *)FUN_004109a0(param_1,pdVar10->d_name,sVar11);
    if (pvVar12 == (void *)0x0) {
LAB_004116c0:
      iVar7 = *piVar9;
      free(pvVar12);
      FUN_00410a30(local_80);
      closedir(*(DIR **)(lVar17 + 0x18));
      *(undefined8 *)(lVar17 + 0x18) = 0;
      *(undefined2 *)(lVar17 + 0x70) = 7;
      *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) | 0x4000;
      *piVar9 = iVar7;
      return (void *)0x0;
    }
    if (local_78 <= sVar11) {
      lVar2 = param_1[4];
      cVar5 = FUN_00410d20(param_1 + 4,param_1 + 6,local_50 + 2 + sVar11);
      if (cVar5 == '\0') goto LAB_004116c0;
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
      FUN_00410a30(local_80);
      closedir(*(DIR **)(lVar17 + 0x18));
      *(undefined8 *)(lVar17 + 0x18) = 0;
      *(undefined2 *)(lVar17 + 0x70) = 7;
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
      *(undefined8 *)((long)pvVar12 + 0x30) = *(undefined8 *)((long)pvVar12 + 0x38);
      memmove(local_58,(void *)((long)pvVar12 + 0x108),*(long *)((long)pvVar12 + 0x60) + 1);
      uVar21 = *(uint *)(param_1 + 9);
    }
    if ((param_1[8] == 0) || ((uVar21 & 0x400) != 0)) {
      uVar18 = pdVar10->d_type - 1;
      if (((uVar21 & 0x18) == 0x18) && ((pdVar10->d_type & 0xfb) != 0)) {
        *(undefined2 *)((long)pvVar12 + 0x70) = 0xb;
        if (uVar18 < 0xc) {
          *(undefined4 *)((long)pvVar12 + 0x90) = *(undefined4 *)(&DAT_00418180 + (ulong)uVar18 * 4)
          ;
          uVar13 = 1;
        }
        else {
          *(undefined4 *)((long)pvVar12 + 0x90) = 0;
          uVar13 = 1;
        }
      }
      else {
        *(undefined2 *)((long)pvVar12 + 0x70) = 0xb;
        if (uVar18 < 0xc) {
          *(undefined4 *)((long)pvVar12 + 0x90) = *(undefined4 *)(&DAT_00418180 + (ulong)uVar18 * 4)
          ;
          uVar13 = 2;
        }
        else {
          *(undefined4 *)((long)pvVar12 + 0x90) = 0;
          uVar13 = 2;
        }
      }
      *(undefined8 *)((long)pvVar12 + 0xa8) = uVar13;
    }
    else {
      uVar6 = FUN_004106f0(param_1,pvVar12,0);
      *(undefined2 *)((long)pvVar12 + 0x70) = uVar6;
    }
    *(undefined8 *)((long)pvVar12 + 0x10) = 0;
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
joined_r0x0041178b:
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
        iVar7 = FUN_00410cc0(param_1);
      }
      else {
        iVar7 = FUN_00410e40(param_1,*(undefined8 *)(lVar17 + 8),0xffffffff,&DAT_00415fd6);
      }
      if (iVar7 != 0) {
        *(undefined2 *)(lVar17 + 0x70) = 7;
        *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) | 0x4000;
        FUN_00410a30(local_80);
        return (void *)0x0;
      }
      goto LAB_00411828;
    }
  }
  else {
LAB_00411828:
    if (uVar20 == 0) {
      if (((param_2 == 3) && (*(short *)(lVar17 + 0x70) != 4)) && (*(short *)(lVar17 + 0x70) != 7))
      {
        *(undefined2 *)(lVar17 + 0x70) = 6;
      }
      FUN_00410a30(local_80);
      return (void *)0x0;
    }
  }
  lVar16 = param_1[8];
  if (10000 < uVar20) {
    if (lVar16 != 0) goto LAB_004117e7;
    lVar17 = FUN_00410ac0(lVar17);
    if ((lVar17 != 0x6969) && (lVar17 != 0x1021994)) {
      param_1[8] = (long)FUN_004106c0;
      pvVar12 = (void *)FUN_004108a0(param_1,local_80,uVar20);
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
LAB_004117e7:
  pvVar12 = (void *)FUN_004108a0(param_1,local_80,uVar20);
  return pvVar12;
}


long * fts_open(char **param_1,uint param_2,long param_3)

{
  undefined4 uVar1;
  char cVar2;
  undefined2 uVar3;
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
  *(undefined4 *)((long)__ptr + 0x2c) = 0xffffff9c;
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
  local_42 = FUN_00410d20(__ptr + 4,__ptr + 6,uVar10);
  if (local_42 == 0) goto LAB_00411deb;
  pcVar11 = *param_1;
  if (pcVar11 == (char *)0x0) {
    local_50 = (void *)0x0;
    if (param_3 != 0) {
LAB_00411c33:
      local_42 = (byte)(*(uint *)(__ptr + 9) >> 10) & 1;
      goto LAB_00411c40;
    }
LAB_00411e22:
    lVar7 = 0;
LAB_00411d5c:
    lVar8 = FUN_004109a0(__ptr,"",0);
    *__ptr = lVar8;
    if (lVar8 != 0) {
      *(long *)(lVar8 + 0x10) = lVar7;
      uVar1 = *(undefined4 *)(__ptr + 9);
      *(undefined2 *)(lVar8 + 0x70) = 9;
      cVar2 = FUN_00410d90(uVar1,__ptr + 0xb);
      if (cVar2 != '\0') {
        if ((*(uint *)(__ptr + 9) & 0x204) == 0) {
          iVar4 = FUN_00410df0(*(undefined4 *)((long)__ptr + 0x2c),*(uint *)(__ptr + 9),
                               &DAT_00415fd7);
          *(int *)(__ptr + 5) = iVar4;
          if (iVar4 < 0) {
            *(uint *)(__ptr + 9) = *(uint *)(__ptr + 9) | 4;
          }
        }
        FUN_00413d50(__ptr + 0xc,0xffffffff);
        return __ptr;
      }
    }
LAB_00411dd0:
    FUN_00410a30(lVar7);
    free(local_50);
  }
  else {
    local_50 = (void *)FUN_004109a0(__ptr,"",0);
    if (local_50 != (void *)0x0) {
      pcVar11 = *param_1;
      *(undefined8 *)((long)local_50 + 0x58) = 0xffffffffffffffff;
      *(undefined8 *)((long)local_50 + 0x68) = 0xffffffffffffffff;
      if (param_3 != 0) goto LAB_00411c33;
LAB_00411c40:
      if (pcVar11 == (char *)0x0) goto LAB_00411e22;
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
        lVar6 = FUN_004109a0(__ptr,pcVar11,sVar5);
        lVar7 = lVar8;
        if (lVar6 == 0) goto LAB_00411dd0;
        *(undefined8 *)(lVar6 + 0x58) = 0;
        *(void **)(lVar6 + 8) = local_50;
        *(long *)(lVar6 + 0x30) = lVar6 + 0x108;
        lVar7 = lVar6;
        if ((lVar8 == 0) || (local_42 == 0)) {
          uVar3 = FUN_004106f0(__ptr,lVar6,0);
          *(undefined2 *)(lVar6 + 0x70) = uVar3;
          if (param_3 != 0) goto LAB_00411cd8;
          *(undefined8 *)(lVar6 + 0x10) = 0;
          if (lVar8 != 0) goto LAB_00411e70;
        }
        else {
          *(undefined8 *)(lVar6 + 0xa8) = 2;
          *(undefined2 *)(lVar6 + 0x70) = 0xb;
          if (param_3 == 0) {
            *(undefined8 *)(lVar6 + 0x10) = 0;
LAB_00411e70:
            *(long *)(local_40 + 0x10) = lVar6;
            lVar7 = lVar8;
          }
          else {
LAB_00411cd8:
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
        lVar7 = FUN_004108a0(__ptr,lVar7,uVar10);
      }
      goto LAB_00411d5c;
    }
  }
  free((void *)__ptr[4]);
LAB_00411deb:
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
        if (*(long *)((long)__ptr + 0x58) < 0) goto LAB_00411f0b;
      }
      __ptr = *(void **)((long)__ptr_00 + 8);
      free(__ptr_00);
      lVar1 = *(long *)((long)__ptr + 0x58);
    }
LAB_00411f0b:
    free(__ptr);
  }
  if (param_1[1] != (void *)0x0) {
    FUN_00410a30();
  }
  free(param_1[2]);
  free(param_1[4]);
  if ((*(uint *)(param_1 + 9) & 0x200) == 0) {
    if ((*(uint *)(param_1 + 9) & 4) == 0) {
      iVar2 = fchdir(*(int *)(param_1 + 5));
      if (iVar2 == 0) {
        iVar2 = close(*(int *)(param_1 + 5));
        if (iVar2 == 0) goto LAB_00411f42;
        piVar4 = __errno_location();
      }
      else {
        piVar4 = __errno_location();
        iVar2 = *piVar4;
        iVar3 = close(*(int *)(param_1 + 5));
        if ((iVar3 == 0) || (iVar2 != 0)) goto LAB_00411f44;
      }
      iVar2 = *piVar4;
      goto LAB_00411f44;
    }
  }
  else if ((-1 < *(int *)((long)param_1 + 0x2c)) &&
          (iVar2 = close(*(int *)((long)param_1 + 0x2c)), iVar2 != 0)) {
    piVar4 = __errno_location();
    iVar2 = *piVar4;
    goto LAB_00411f44;
  }
LAB_00411f42:
  iVar2 = 0;
LAB_00411f44:
  FUN_00410a80(param_1 + 0xc);
  if (param_1[10] != (void *)0x0) {
    FUN_0040bb00();
  }
  if ((*(uint *)(param_1 + 9) & 0x102) == 0) {
    free(param_1[0xb]);
  }
  else if (param_1[0xb] != (void *)0x0) {
    FUN_0040bb00();
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
  undefined4 uVar3;
  long lVar4;
  char cVar5;
  undefined2 uVar6;
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
  *(undefined2 *)((long)pvVar14 + 0x74) = 3;
  if (sVar7 == 1) {
    uVar6 = FUN_004106f0(param_1,pvVar14,0);
    *(undefined2 *)((long)pvVar14 + 0x70) = uVar6;
    return pvVar14;
  }
  sVar2 = *(short *)((long)pvVar14 + 0x70);
  pvVar13 = pvVar14;
  if (sVar7 == 2) {
    if (1 < (ushort)(sVar2 - 0xcU)) {
      if (sVar2 == 1) goto LAB_00412197;
      goto LAB_004120c0;
    }
    sVar7 = FUN_004106f0(param_1,pvVar14,1);
    *(short *)((long)pvVar14 + 0x70) = sVar7;
    if (sVar7 != 1) {
      *param_1 = pvVar14;
      if (sVar7 != 0xb) {
        return pvVar14;
      }
      goto LAB_00412400;
    }
    if ((*(uint *)(param_1 + 9) & 4) == 0) {
      iVar8 = FUN_00410df0(*(undefined4 *)((long)param_1 + 0x2c),*(uint *)(param_1 + 9),
                           &DAT_00415fd7);
      *(int *)((long)pvVar14 + 0x44) = iVar8;
      if (iVar8 < 0) {
        piVar9 = __errno_location();
        iVar8 = *piVar9;
        *(undefined2 *)((long)pvVar14 + 0x70) = 7;
        *(int *)((long)pvVar14 + 0x40) = iVar8;
        *param_1 = pvVar14;
        return pvVar14;
      }
      *(ushort *)((long)pvVar14 + 0x72) = *(ushort *)((long)pvVar14 + 0x72) | 2;
      sVar7 = *(short *)((long)pvVar14 + 0x70);
      goto LAB_00412377;
    }
    *param_1 = pvVar14;
LAB_0041238e:
    if (*(long *)((long)pvVar14 + 0x58) != 0) goto LAB_0041239e;
  }
  else {
    if (sVar2 == 1) {
      if (sVar7 == 4) goto LAB_00412232;
LAB_00412197:
      if (((uVar15 & 0x40) != 0) && (*(void **)((long)pvVar14 + 0x78) != param_1[3])) {
LAB_00412232:
        if ((*(byte *)((long)pvVar14 + 0x72) & 2) != 0) {
          close(*(int *)((long)pvVar14 + 0x44));
        }
        if (param_1[1] != (void *)0x0) {
          FUN_00410a30();
          param_1[1] = (void *)0x0;
        }
        uVar3 = *(undefined4 *)(param_1 + 9);
        *(undefined2 *)((long)pvVar14 + 0x70) = 6;
        FUN_004110c0(uVar3,param_1 + 0xb,pvVar14);
        return pvVar14;
      }
      if (param_1[1] == (void *)0x0) {
LAB_00412459:
        pvVar13 = (void *)FUN_00411160(param_1,3);
        param_1[1] = pvVar13;
        if (pvVar13 == (void *)0x0) {
          uVar15 = *(uint *)(param_1 + 9);
          if ((uVar15 & 0x4000) != 0) {
            return (void *)0x0;
          }
          if ((*(int *)((long)pvVar14 + 0x40) != 0) && (*(short *)((long)pvVar14 + 0x70) != 4)) {
            *(undefined2 *)((long)pvVar14 + 0x70) = 7;
          }
          FUN_004110c0(uVar15,param_1 + 0xb,pvVar14);
          return pvVar14;
        }
      }
      else {
        if ((uVar15 & 0x2000) != 0) {
          *(uint *)(param_1 + 9) = uVar15 & 0xffffdfff;
          FUN_00410a30();
          param_1[1] = (void *)0x0;
          goto LAB_00412459;
        }
        iVar8 = FUN_00410e40(param_1,pvVar14,0xffffffff,*(undefined8 *)((long)pvVar14 + 0x30));
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
            *(undefined8 *)((long)pvVar14 + 0x30) =
                 *(undefined8 *)(*(long *)((long)pvVar14 + 8) + 0x30);
          }
        }
      }
      param_1[1] = (void *)0x0;
      pvVar14 = pvVar13;
    }
    else {
LAB_004120c0:
      do {
        pvVar14 = *(void **)((long)pvVar13 + 0x10);
        if (pvVar14 == (void *)0x0) {
          pvVar14 = *(void **)((long)pvVar13 + 8);
          if (*(long *)((long)pvVar14 + 0x18) != 0) {
            lVar4 = *(long *)((long)pvVar14 + 0x48);
            *param_1 = pvVar14;
            *(undefined *)((long)param_1[4] + lVar4) = 0;
            pvVar14 = (void *)FUN_00411160(param_1,3);
            if (pvVar14 != (void *)0x0) {
              free(pvVar13);
              goto LAB_0041233a;
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
              iVar8 = FUN_00410cc0(param_1);
              if (iVar8 == 0) goto LAB_00412126;
LAB_0041253f:
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
                   (iVar8 = FUN_00410e40(param_1,*(undefined8 *)((long)pvVar14 + 8),0xffffffff,
                                         &DAT_00415fd6), iVar8 != 0)) goto LAB_0041253f;
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
                    FUN_00410c50(param_1,iVar8,1);
                    iVar8 = *(int *)((long)pvVar14 + 0x44);
                  }
                }
                close(iVar8);
              }
LAB_00412126:
              uVar15 = *(uint *)(param_1 + 9);
              if (*(short *)((long)pvVar14 + 0x70) == 2) goto LAB_00412158;
            }
            if (*(int *)((long)pvVar14 + 0x40) == 0) {
              *(undefined2 *)((long)pvVar14 + 0x70) = 6;
              FUN_004110c0(uVar15,param_1 + 0xb,pvVar14);
              uVar15 = *(uint *)(param_1 + 9);
            }
            else {
              *(undefined2 *)((long)pvVar14 + 0x70) = 7;
            }
LAB_00412158:
            if ((uVar15 & 0x4000) != 0) {
              return (void *)0x0;
            }
            return pvVar14;
          }
          goto FUN_00402dbc;
        }
        *param_1 = pvVar14;
        free(pvVar13);
        if (*(long *)((long)pvVar14 + 0x58) == 0) {
          iVar8 = FUN_00410cc0(param_1);
          if (iVar8 != 0) {
            *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) | 0x4000;
            return (void *)0x0;
          }
          if ((*(uint *)(param_1 + 9) & 0x102) == 0) {
            free(param_1[0xb]);
          }
          else if (param_1[0xb] != (void *)0x0) {
            FUN_0040bb00();
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
          uVar3 = *(undefined4 *)(param_1 + 9);
          *(void **)((long)pvVar14 + 0x38) = pvVar13;
          *(void **)((long)pvVar14 + 0x30) = pvVar13;
          FUN_00410d90(uVar3,param_1 + 0xb);
          sVar7 = *(short *)((long)pvVar14 + 0x70);
          goto LAB_00412377;
        }
        pvVar13 = pvVar14;
      } while (*(short *)((long)pvVar14 + 0x74) == 4);
      if (*(short *)((long)pvVar14 + 0x74) == 2) {
        sVar7 = FUN_004106f0(param_1,pvVar14,1);
        *(short *)((long)pvVar14 + 0x70) = sVar7;
        if ((sVar7 == 1) && ((*(uint *)(param_1 + 9) & 4) == 0)) {
          iVar8 = FUN_00410df0(*(undefined4 *)((long)param_1 + 0x2c),*(uint *)(param_1 + 9),
                               &DAT_00415fd7);
          *(int *)((long)pvVar14 + 0x44) = iVar8;
          if (iVar8 < 0) {
            piVar9 = __errno_location();
            iVar8 = *piVar9;
            *(undefined2 *)((long)pvVar14 + 0x70) = 7;
            *(int *)((long)pvVar14 + 0x40) = iVar8;
          }
          else {
            *(ushort *)((long)pvVar14 + 0x72) = *(ushort *)((long)pvVar14 + 0x72) | 2;
          }
        }
        *(undefined2 *)((long)pvVar14 + 0x74) = 3;
      }
    }
LAB_0041233a:
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
LAB_00412377:
    *param_1 = pvVar14;
    if (sVar7 != 0xb) {
LAB_00412381:
      if (sVar7 != 1) {
        return pvVar14;
      }
      goto LAB_0041238e;
    }
LAB_00412400:
    if (*(long *)((long)pvVar14 + 0xa8) != 2) {
      if (*(long *)((long)pvVar14 + 0xa8) == 1) {
        return pvVar14;
      }
FUN_00402dbc:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar4 = *(long *)((long)pvVar14 + 8);
    if (((*(long *)(lVar4 + 0x68) == 0) && ((*(uint *)(param_1 + 9) & 0x18) == 0x18)) &&
       (iVar8 = FUN_00410be0(lVar4), iVar8 == 2)) {
      sVar7 = *(short *)((long)pvVar14 + 0x70);
      goto LAB_00412381;
    }
    sVar7 = FUN_004106f0(param_1,pvVar14,0);
    *(short *)((long)pvVar14 + 0x70) = sVar7;
    if ((*(uint *)((long)pvVar14 + 0x90) & 0xf000) != 0x4000) goto LAB_00412381;
    if (*(long *)((long)pvVar14 + 0x58) != 0) {
      uVar1 = *(long *)(lVar4 + 0x68) - 1;
      if (uVar1 < 0xfffffffffffffffe) {
        *(ulong *)(lVar4 + 0x68) = uVar1;
      }
      if (sVar7 != 1) {
        return pvVar14;
      }
      goto LAB_0041239e;
    }
    if (sVar7 != 1) {
      return pvVar14;
    }
  }
  param_1[3] = *(void **)((long)pvVar14 + 0x78);
LAB_0041239e:
  cVar5 = FUN_00411010(*(undefined4 *)(param_1 + 9),param_1 + 0xb,pvVar14);
  if (cVar5 == '\0') {
    piVar9 = __errno_location();
    pvVar14 = (void *)0x0;
    *piVar9 = 0xc;
  }
  return pvVar14;
}


undefined8 fts_set(undefined8 param_1,long param_2,uint param_3)

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
  undefined8 uVar5;
  
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
        FUN_00410a30();
      }
      uVar5 = 1;
      if (param_2 == 0x2000) {
        *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) | 0x2000;
        uVar5 = 2;
      }
      if (((*(long *)(lVar4 + 0x58) == 0) && (**(char **)(lVar4 + 0x30) != '/')) &&
         ((*(uint *)(param_1 + 9) & 4) == 0)) {
        __fd = FUN_00410df0(*(undefined4 *)((long)param_1 + 0x2c),*(uint *)(param_1 + 9),
                            &DAT_00415fd7);
        if (__fd < 0) {
          param_1[1] = 0;
          lVar3 = 0;
        }
        else {
          lVar4 = FUN_00411160(param_1,uVar5);
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
            FUN_00410c50(param_1,__fd,1);
          }
          lVar3 = param_1[1];
        }
      }
      else {
        lVar3 = FUN_00411160(param_1,uVar5);
        param_1[1] = lVar3;
      }
    }
    return lVar3;
  }
  return 0;
}


void FUN_00412940(long param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
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
      if (iVar3 <= iVar8) goto LAB_004129bc;
      iVar10 = iVar9 - iVar3;
      iVar7 = iVar3 - iVar8;
      if (iVar10 <= iVar7) break;
      lVar6 = (long)iVar8;
      iVar9 = iVar9 - iVar7;
      puVar5 = (undefined8 *)(param_1 + lVar6 * 8);
      do {
        uVar4 = *puVar5;
        *puVar5 = puVar5[iVar9 - lVar6];
        puVar5[iVar9 - lVar6] = uVar4;
        puVar5 = puVar5 + 1;
      } while ((undefined8 *)(param_1 + 8 + ((ulong)(iVar7 - 1) + lVar6) * 8) != puVar5);
      if (iVar9 <= iVar3) goto LAB_004129bc;
    }
    lVar6 = (long)iVar8;
    puVar5 = (undefined8 *)(param_1 + lVar6 * 8);
    do {
      uVar4 = *puVar5;
      *puVar5 = puVar5[iVar3 - lVar6];
      puVar5[iVar3 - lVar6] = uVar4;
      puVar5 = puVar5 + 1;
    } while (puVar5 != (undefined8 *)(param_1 + 8 + ((ulong)(iVar10 - 1) + lVar6) * 8));
    iVar8 = iVar8 + iVar10;
  }
LAB_004129bc:
  param_2[0xc] = iVar2;
  param_2[0xb] = iVar1 + (iVar2 - iVar3);
  return;
}


int FUN_00412a20(int param_1,undefined8 *param_2,char *param_3,char **param_4,undefined4 *param_5,
                int param_6,int *param_7,int param_8,undefined8 param_9)

{
  char cVar1;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  size_t sVar7;
  undefined8 uVar8;
  undefined8 uVar9;
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
      if ((iVar5 == 0) && (sVar7 = strlen(__s1_00), sVar7 == sVar15)) goto LAB_00412c40;
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
            if (local_70 == (char *)0x0) goto LAB_00412b80;
          }
          else if (local_70 == (char *)0x0) {
            local_70 = (char *)calloc((long)iVar5,1);
            if (local_70 == (char *)0x0) {
              bVar3 = true;
              goto LAB_00412b80;
            }
            bVar4 = true;
            local_70[(int)local_44] = '\x01';
          }
          local_70[lVar16] = '\x01';
        }
      }
LAB_00412b80:
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
          uVar2 = *(undefined8 *)(param_7 + 8);
          uVar8 = *param_2;
          uVar9 = dcgettext(0,"%s: option \'%s%s\' is ambiguous; possibilities:",5);
          __fprintf_chk(stderr,1,uVar9,uVar8,param_9,uVar2);
          pcVar13 = local_70;
          __stream = stderr;
          do {
            if (*pcVar13 != '\0') {
              __fprintf_chk(__stream,1,&DAT_004182a1,param_9,*param_4);
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
LAB_00412c40:
      iVar6 = *param_7;
      *(undefined8 *)(param_7 + 8) = 0;
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
          *(undefined8 *)(param_7 + 4) = param_2[iVar5];
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
      if (param_5 != (undefined4 *)0x0) {
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
  *(undefined8 *)(param_7 + 8) = 0;
  *param_7 = *param_7 + 1;
  param_7[2] = 0;
  return 0x3f;
}


uint FUN_00413040(uint param_1,undefined8 *param_2,char *param_3,long param_4,undefined8 param_5,
                 ulong param_6,uint *param_7,int param_8)

{
  undefined8 uVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  uint uVar11;
  bool bVar12;
  bool bVar13;
  byte bVar14;
  undefined1 *puVar15;
  
  bVar14 = 0;
  uVar3 = param_7[1];
  if ((int)param_1 < 1) {
    return 0xffffffff;
  }
  uVar11 = *param_7;
  *(undefined8 *)(param_7 + 4) = 0;
  if (uVar11 == 0) {
    *param_7 = 1;
    uVar11 = 1;
LAB_0041308a:
    param_7[0xc] = uVar11;
    param_7[0xb] = uVar11;
    *(undefined8 *)(param_7 + 8) = 0;
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
          goto LAB_0041318d;
        }
        pbVar8 = *(byte **)(param_7 + 8);
      }
      param_7[10] = 0;
    }
LAB_0041318d:
    param_7[6] = 1;
    cVar2 = *param_3;
LAB_00413198:
    if (cVar2 == ':') {
      uVar3 = 0;
    }
    if (pbVar8 == (byte *)0x0) goto LAB_00413108;
LAB_004131ac:
    if (*pbVar8 == 0) goto LAB_00413108;
  }
  else {
    if (param_7[6] == 0) goto LAB_0041308a;
    cVar2 = *param_3;
    pbVar8 = *(byte **)(param_7 + 8);
    if ((cVar2 - 0x2bU & 0xfd) != 0) goto LAB_00413198;
    pcVar4 = param_3 + 1;
    param_3 = param_3 + 1;
    if (*pcVar4 == ':') {
      uVar3 = 0;
    }
    if (pbVar8 != (byte *)0x0) goto LAB_004131ac;
LAB_00413108:
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
        FUN_00412940(param_2,param_7);
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
LAB_00413276:
      if (uVar11 != param_1) {
        *param_7 = uVar11;
      }
      return 0xffffffff;
    }
    lVar6 = 3;
    pbVar8 = (byte *)param_2[(int)uVar11];
    pbVar9 = pbVar8;
    pbVar10 = &DAT_004182b9;
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
          FUN_00412940(param_2,param_7);
          uVar11 = param_7[0xb];
        }
      }
      param_7[0xc] = param_1;
      *param_7 = param_1;
      goto LAB_00413276;
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
        puVar15 = &DAT_004182b9;
        goto LAB_004133d5;
      }
      if ((int)param_6 != 0) {
        if (pbVar8[2] == 0) {
          pcVar4 = strchr(param_3,(int)(char)bVar14);
          param_6 = param_6 & 0xffffffff;
          if (pcVar4 != (char *)0x0) goto LAB_00413380;
        }
        *(byte **)(param_7 + 8) = pbVar8 + 1;
        uVar11 = FUN_00412a20(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar3,
                              &DAT_004182ba);
        if (uVar11 != 0xffffffff) {
          return uVar11;
        }
        pbVar8 = (byte *)param_2[(int)*param_7];
      }
    }
LAB_00413380:
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
          *(undefined8 *)(param_7 + 4) = 0;
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
            *(undefined8 *)(param_7 + 4) = uVar1;
          }
        }
        else {
          *(byte **)(param_7 + 4) = pbVar9;
          *param_7 = uVar7 + 1;
        }
      }
      *(undefined8 *)(param_7 + 8) = 0;
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
  *(undefined8 *)(param_7 + 4) = 0;
  puVar15 = &DAT_004182d8;
LAB_004133d5:
  uVar3 = FUN_00412a20(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar3,puVar15);
  return uVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00413610(void)

{
  DAT_0061dac0 = DAT_0061d478._4_4_;
  _DAT_0061dac4 = (undefined4)DAT_0061d478;
  FUN_00413040();
  DAT_0061d478._4_4_ = DAT_0061dac0;
  DAT_0061db00 = DAT_0061dad0;
  _DAT_0061d474 = DAT_0061dac8;
  return;
}


void FUN_00413670(void)

{
  FUN_00413610();
  return;
}


void FUN_00413690(void)

{
  FUN_00413610();
  return;
}


void FUN_004136b0(void)

{
  FUN_00413040();
  return;
}


void FUN_004136d0(void)

{
  FUN_00413610();
  return;
}


void FUN_004136f0(void)

{
  FUN_00413040();
  return;
}


size_t FUN_00413710(wchar_t *param_1,byte *param_2,size_t param_3,mbstate_t *param_4)

{
  char cVar1;
  size_t sVar2;
  wchar_t local_1c;
  
  if (param_2 == (byte *)0x0) {
    param_3 = 1;
    param_2 = (byte *)0x4182d7;
  }
  else {
    if (param_3 == 0) {
      return 0xfffffffffffffffe;
    }
    if (param_1 != (wchar_t *)0x0) goto LAB_00413734;
  }
  param_1 = &local_1c;
LAB_00413734:
  sVar2 = mbrtowc(param_1,(char *)param_2,param_3,param_4);
  if ((0xfffffffffffffffd < sVar2) && (cVar1 = FUN_00413cb0(0), cVar1 == '\0')) {
    sVar2 = 1;
    *param_1 = (uint)*param_2;
  }
  return sVar2;
}


undefined8
FUN_00413790(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4)

{
  *param_4 = param_3;
  return 0;
}


void FUN_004137a0(char *param_1,int param_2,__mode_t param_3)

{
  if (param_2 != -1) {
    fchmod(param_2,param_3);
    return;
  }
  chmod(param_1,param_3);
  return;
}


int FUN_004137c0(undefined4 *param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_004137a0(param_2,param_3,*param_1);
  return -(uint)(iVar1 != 0);
}


void FUN_004137f0(void)

{
  FUN_004036b0(1);
  return;
}


long FUN_00413800(char *param_1,char **param_2,void *param_3,size_t param_4)

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
LAB_00413897:
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
          goto LAB_00413897;
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


void FUN_00413920(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_3 == -1) {
    uVar1 = dcgettext(0,"invalid argument %s for %s",5);
  }
  else {
    uVar1 = dcgettext(0,"ambiguous argument %s for %s",5);
  }
  uVar2 = FUN_0040dfb0(1,param_1);
  uVar3 = FUN_0040dca0(0,8,param_2);
  error(0,0,uVar1,uVar3,uVar2);
  return;
}


void FUN_004139a0(long *param_1,void *param_2,size_t param_3)

{
  FILE *__stream;
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
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
      uVar3 = FUN_0040dfd0(lVar5);
      __fprintf_chk(stderr,1,"\n  - %s",uVar3);
      lVar5 = param_1[lVar4];
      param_2 = (void *)((long)__s2 + param_3);
      __s1 = __s2;
      if (lVar5 == 0) goto LAB_00413a70;
    }
    lVar4 = lVar4 + 1;
    param_2 = (void *)((long)__s2 + param_3);
    uVar3 = FUN_0040dfd0(lVar5);
    __fprintf_chk(stderr,1,&DAT_00418331,uVar3);
    lVar5 = param_1[lVar4];
  }
LAB_00413a70:
  pcVar2 = stderr->_IO_write_ptr;
  if (pcVar2 < stderr->_IO_write_end) {
    stderr->_IO_write_ptr = pcVar2 + 1;
    *pcVar2 = '\n';
    return;
  }
  __overflow(stderr,10);
  return;
}


long FUN_00413ac0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,code *param_6)

{
  long lVar1;
  
  lVar1 = FUN_00413800(param_2,param_3,param_4,param_5);
  if (lVar1 < 0) {
    FUN_00413920(param_1,param_2,lVar1);
    FUN_004139a0(param_3,param_4,param_5);
    (*param_6)();
    lVar1 = -1;
  }
  return lVar1;
}


long FUN_00413b30(void *param_1,long *param_2,void *param_3,size_t param_4)

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


ulong FUN_00413b80(uint *param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  
  lVar2 = __fpending();
  uVar1 = *param_1;
  uVar3 = FUN_00414fe0(param_1);
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


void FUN_00413be0(long param_1)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0x95f616;
  return;
}


undefined8 FUN_00413bf0(long *param_1,long *param_2)

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


void FUN_00413c70(timespec *param_1)

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


bool FUN_00413cb0(int param_1)

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
    pbVar5 = &DAT_0041836c;
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


ulong FUN_00413d10(char *param_1,ulong param_2)

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


void FUN_00413d50(undefined4 *param_1,undefined4 param_2)

{
  *(undefined8 *)(param_1 + 5) = 0;
  *(undefined *)(param_1 + 7) = 1;
  *param_1 = param_2;
  param_1[1] = param_2;
  param_1[2] = param_2;
  param_1[3] = param_2;
  param_1[4] = param_2;
  return;
}


undefined FUN_00413d70(long param_1)

{
  return *(undefined *)(param_1 + 0x1c);
}


undefined4 FUN_00413d80(long param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = (uint)(*(byte *)(param_1 + 0x1c) ^ 1);
  uVar3 = *(int *)(param_1 + 0x14) + uVar4 & 3;
  puVar1 = (undefined4 *)(param_1 + (ulong)uVar3 * 4);
  uVar2 = *puVar1;
  *puVar1 = param_2;
  *(uint *)(param_1 + 0x14) = uVar3;
  if (*(uint *)(param_1 + 0x18) == uVar3) {
    *(uint *)(param_1 + 0x18) = uVar4 + *(uint *)(param_1 + 0x18) & 3;
  }
  *(undefined *)(param_1 + 0x1c) = 0;
  return uVar2;
}


undefined4 FUN_00413dc0(long param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if (*(char *)(param_1 + 0x1c) != '\0') {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar2 = *(uint *)(param_1 + 0x14);
  puVar1 = (undefined4 *)(param_1 + (ulong)uVar2 * 4);
  uVar3 = *puVar1;
  *puVar1 = *(undefined4 *)(param_1 + 0x10);
  if (uVar2 != *(uint *)(param_1 + 0x18)) {
    *(uint *)(param_1 + 0x14) = uVar2 + 3 & 3;
    return uVar3;
  }
  *(undefined *)(param_1 + 0x1c) = 1;
  return uVar3;
}


/* WARNING: Could not reconcile some variable overlaps */

char * FUN_00413e10(void)

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
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  char *__ptr;
  bool bVar14;
  long local_d0;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined auStack_80 [8];
  undefined8 local_78;
  
  __s1 = nl_langinfo(0xe);
  if (__s1 == (char *)0x0) {
    __s1 = "";
  }
  if (DAT_0061daf8 != (char *)0x0) goto LAB_00413e4a;
  pcVar7 = getenv("CHARSETALIASDIR");
  if ((pcVar7 == (char *)0x0) || (*pcVar7 == '\0')) {
    sVar6 = 0x73;
    sVar5 = 0x65;
    __n = 100;
    pcVar7 = 
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib"
    ;
LAB_00413f35:
    __file = (char *)malloc(sVar6);
    if (__file != (char *)0x0) {
      memcpy(__file,pcVar7,__n);
      __file[__n] = '/';
      goto LAB_00413f56;
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
        goto LAB_00413f35;
      }
      sVar6 = __n + 0xe;
    }
    __file = (char *)malloc(sVar6);
    if (__file != (char *)0x0) {
      memcpy(__file,pcVar7,__n);
      sVar5 = __n;
LAB_00413f56:
      puVar13 = (undefined8 *)(__file + sVar5);
      *puVar13 = 0x2e74657372616863;
      *(undefined2 *)((long)puVar13 + 0xc) = 0x73;
      *(undefined4 *)(puVar13 + 1) = 0x61696c61;
      iVar2 = open(__file,0);
      if (-1 < iVar2) {
        __stream = fdopen(iVar2,"r");
        local_d0 = 0;
        if (__stream != (FILE *)0x0) {
          pcVar7 = (char *)0x0;
LAB_00413ff0:
          pbVar8 = (byte *)__stream->_IO_read_ptr;
          if (__stream->_IO_read_end <= pbVar8) goto LAB_0041417c;
          do {
            __stream->_IO_read_ptr = (char *)(pbVar8 + 1);
            uVar4 = (uint)*pbVar8;
            __ptr = pcVar7;
            while( true ) {
              pcVar7 = __ptr;
              if ((uVar4 - 9 < 2) || (uVar4 == 0x20)) goto LAB_00413ff0;
              if (uVar4 == 0x23) goto LAB_004141e1;
              ungetc(uVar4,__stream);
              iVar2 = fscanf(__stream,"%50s %50s",&local_b8,&local_78);
              puVar13 = &local_b8;
              if (iVar2 < 2) goto LAB_0041418f;
              do {
                puVar10 = puVar13;
                uVar3 = *(uint *)puVar10 + 0xfefefeff & ~*(uint *)puVar10;
                uVar4 = uVar3 & 0x80808080;
                puVar13 = (undefined8 *)((long)puVar10 + 4);
              } while (uVar4 == 0);
              bVar14 = (uVar3 & 0x8080) == 0;
              if (bVar14) {
                uVar4 = uVar4 >> 0x10;
              }
              if (bVar14) {
                puVar13 = (undefined8 *)((long)puVar10 + 6);
              }
              lVar11 = (long)puVar13 +
                       ((-3 - (ulong)CARRY1((byte)uVar4,(byte)uVar4)) - (long)&local_b8);
              puVar13 = &local_78;
              do {
                puVar10 = puVar13;
                uVar3 = *(uint *)puVar10 + 0xfefefeff & ~*(uint *)puVar10;
                uVar4 = uVar3 & 0x80808080;
                puVar13 = (undefined8 *)((long)puVar10 + 4);
              } while (uVar4 == 0);
              bVar14 = (uVar3 & 0x8080) == 0;
              if (bVar14) {
                uVar4 = uVar4 >> 0x10;
              }
              if (bVar14) {
                puVar13 = (undefined8 *)((long)puVar10 + 6);
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
                FUN_00414fe0(__stream);
                goto LAB_00413f94;
              }
              uVar12 = lVar11 + 1;
              puVar13 = (undefined8 *)(pcVar7 + (-2 - lVar11) + (local_d0 - local_c0));
              uVar4 = (uint)uVar12;
              if (uVar4 < 8) {
                if ((uVar12 & 4) == 0) {
                  if (uVar4 != 0) {
                    *(undefined *)puVar13 = (undefined)local_b8;
                    if ((uVar12 & 2) != 0) {
                      *(undefined2 *)((long)puVar13 + ((uVar12 & 0xffffffff) - 2)) =
                           *(undefined2 *)((long)&local_b8 + ((uVar12 & 0xffffffff) - 2));
                    }
                  }
                }
                else {
                  *(undefined4 *)puVar13 = (undefined4)local_b8;
                  *(undefined4 *)((long)puVar13 + ((uVar12 & 0xffffffff) - 4)) =
                       *(undefined4 *)((long)&local_b8 + ((uVar12 & 0xffffffff) - 4));
                }
              }
              else {
                *puVar13 = CONCAT44(local_b8._4_4_,(undefined4)local_b8);
                *(undefined8 *)((long)puVar13 + ((uVar12 & 0xffffffff) - 8)) =
                     *(undefined8 *)((long)&local_b8 + ((uVar12 & 0xffffffff) - 8));
                lVar11 = (long)puVar13 - ((ulong)(puVar13 + 1) & 0xfffffffffffffff8);
                uVar4 = uVar4 + (int)lVar11 & 0xfffffff8;
                if (7 < uVar4) {
                  uVar3 = 0;
                  do {
                    uVar12 = (ulong)uVar3;
                    uVar3 = uVar3 + 8;
                    *(undefined8 *)(((ulong)(puVar13 + 1) & 0xfffffffffffffff8) + uVar12) =
                         *(undefined8 *)((long)&local_b8 + (uVar12 - lVar11));
                  } while (uVar3 < uVar4);
                }
              }
              uVar12 = local_c0 + 1;
              puVar13 = (undefined8 *)(pcVar7 + (local_d0 - local_c0) + -1);
              uVar4 = (uint)uVar12;
              if (uVar4 < 8) {
                if ((uVar12 & 4) == 0) {
                  if (uVar4 != 0) {
                    *(undefined *)puVar13 = (undefined)local_78;
                    if ((uVar12 & 2) != 0) {
                      *(undefined2 *)((long)puVar13 + ((uVar12 & 0xffffffff) - 2)) =
                           *(undefined2 *)((long)auStack_80 + (uVar12 & 0xffffffff) + 6);
                    }
                  }
                }
                else {
                  *(undefined4 *)puVar13 = (undefined4)local_78;
                  *(undefined4 *)((long)puVar13 + ((uVar12 & 0xffffffff) - 4)) =
                       *(undefined4 *)((long)auStack_80 + (uVar12 & 0xffffffff) + 4);
                }
              }
              else {
                *puVar13 = CONCAT44(local_78._4_4_,(undefined4)local_78);
                *(undefined8 *)((long)puVar13 + ((uVar12 & 0xffffffff) - 8)) =
                     *(undefined8 *)((long)auStack_80 + (uVar12 & 0xffffffff));
                lVar11 = (long)puVar13 - ((ulong)(puVar13 + 1) & 0xfffffffffffffff8);
                uVar4 = uVar4 + (int)lVar11 & 0xfffffff8;
                if (7 < uVar4) {
                  uVar3 = 0;
                  do {
                    uVar12 = (ulong)uVar3;
                    uVar3 = uVar3 + 8;
                    *(undefined8 *)(((ulong)(puVar13 + 1) & 0xfffffffffffffff8) + uVar12) =
                         *(undefined8 *)((long)&local_78 + (uVar12 - lVar11));
                  } while (uVar3 < uVar4);
                }
              }
              pbVar8 = (byte *)__stream->_IO_read_ptr;
              if (pbVar8 < __stream->_IO_read_end) break;
LAB_0041417c:
              uVar4 = __uflow(__stream);
              __ptr = pcVar7;
              if (uVar4 == 0xffffffff) goto LAB_0041418f;
            }
          } while( true );
        }
        close(iVar2);
      }
      goto LAB_00413f8e;
    }
  }
  DAT_0061daf8 = "";
LAB_00413e4a:
  cVar1 = *DAT_0061daf8;
  pcVar7 = DAT_0061daf8;
  do {
    if (cVar1 == '\0') {
LAB_00413ea4:
      if (*__s1 == '\0') {
        __s1 = "ASCII";
      }
      return __s1;
    }
    iVar2 = strcmp(__s1,pcVar7);
    if ((iVar2 == 0) || ((cVar1 == '*' && (pcVar7[1] == '\0')))) {
      sVar6 = strlen(pcVar7);
      __s1 = pcVar7 + sVar6 + 1;
      goto LAB_00413ea4;
    }
    sVar6 = strlen(pcVar7);
    sVar5 = strlen(pcVar7 + sVar6 + 1);
    pcVar7 = pcVar7 + sVar6 + 1 + sVar5 + 1;
    cVar1 = *pcVar7;
  } while( true );
LAB_004141e1:
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
  if (uVar4 == 0xffffffff) goto LAB_0041418f;
  goto LAB_00413ff0;
LAB_0041418f:
  FUN_00414fe0(__stream);
  if (local_d0 == 0) {
LAB_00413f8e:
    pcVar7 = "";
  }
  else {
    pcVar7[local_d0] = '\0';
  }
LAB_00413f94:
  free(__file);
  DAT_0061daf8 = pcVar7;
  goto LAB_00413e4a;
}


void FUN_00414380(int param_1,char *param_2,uint param_3,ulong param_4)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_3 & 0x40) != 0) {
    uVar2 = param_4 & 0xffffffff;
  }
  iVar1 = openat(param_1,param_2,param_3,uVar2);
  FUN_0040eaf0(iVar1);
  return;
}


void FUN_004143d0(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_004100e0(0x18);
  *puVar1 = param_1;
  puVar1[2] = 0;
  puVar1[1] = 0;
  return;
}


long * FUN_00414400(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00414620();
  plVar2 = (long *)0x0;
  if (lVar1 != 0) {
    plVar2 = (long *)FUN_004100e0(0x18);
    *plVar2 = lVar1;
    plVar2[2] = 0;
    plVar2[1] = 0;
  }
  return plVar2;
}


undefined8 FUN_00414430(undefined8 *param_1)

{
  return *param_1;
}


ulong FUN_00414440(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  byte bVar2;
  undefined8 uVar3;
  ulong uVar4;
  byte *pbVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  byte local_40 [16];
  
  uVar1 = param_2 + 1;
  uVar3 = *param_1;
  uVar9 = param_1[1];
  uVar8 = param_1[2];
  while( true ) {
    uVar4 = uVar9;
    if (uVar8 < param_2) {
      lVar7 = 0;
      uVar4 = uVar8;
      do {
        lVar7 = lVar7 + 1;
        uVar4 = uVar4 * 0x100 + 0xff;
      } while (uVar4 < param_2);
      FUN_00414930(uVar3,local_40,lVar7);
      pbVar5 = local_40;
      do {
        bVar2 = *pbVar5;
        pbVar5 = pbVar5 + 1;
        uVar8 = uVar8 * 0x100 + 0xff;
        uVar9 = uVar9 * 0x100 + (ulong)bVar2;
        uVar4 = uVar9;
      } while (uVar8 < param_2);
    }
    if (uVar8 == param_2) break;
    uVar6 = (uVar8 - param_2) % uVar1;
    uVar9 = uVar4 % uVar1;
    if (uVar4 <= uVar8 - uVar6) {
      param_1[1] = uVar4 / uVar1;
      param_1[2] = (uVar8 - param_2) / uVar1;
      return uVar9;
    }
    uVar8 = uVar6 - 1;
  }
  param_1[2] = 0;
  param_1[1] = 0;
  return uVar4;
}


void FUN_00414540(void *param_1)

{
  __explicit_bzero_chk(param_1,0x18,0xffffffffffffffff);
  free(param_1);
  return;
}


undefined4 FUN_00414560(undefined8 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  uVar2 = FUN_00414a90(*param_1);
  piVar3 = __errno_location();
  iVar1 = *piVar3;
  __explicit_bzero_chk(param_1,0x18,0xffffffffffffffff);
  free(param_1);
  *piVar3 = iVar1;
  return uVar2;
}


void FUN_004145c0(long param_1)

{
  undefined8 uVar1;
  int *piVar2;
  undefined8 uVar3;
  
  if (param_1 != 0) {
    uVar1 = FUN_0040dfd0();
    piVar2 = __errno_location();
    if (*piVar2 == 0) {
      uVar3 = dcgettext(0,"%s: end of file",5);
    }
    else {
      uVar3 = dcgettext(0,"%s: read error",5);
    }
    error(DAT_0061d408,*piVar2,uVar3,uVar1);
                    /* WARNING: Subroutine does not return */
    abort();
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


FILE ** FUN_00414620(FILE *param_1,ulong param_2)

{
  int __fd;
  uint uVar1;
  FILE *pFVar2;
  FILE **ppFVar3;
  FILE **ppFVar4;
  size_t __n;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  timeval *ptVar8;
  undefined *puVar9;
  ulong uVar10;
  byte bVar11;
  __uid_t local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  bVar11 = 0;
  if (param_2 == 0) {
    ppFVar3 = (FILE **)FUN_004100e0(0x1038);
    *ppFVar3 = (FILE *)0x0;
    ppFVar3[1] = (FILE *)FUN_004145c0;
    ppFVar3[2] = (FILE *)0x0;
    return ppFVar3;
  }
  if (param_1 != (FILE *)0x0) {
    pFVar2 = (FILE *)FUN_00415060(param_1,&DAT_0041842c);
    if (pFVar2 != (FILE *)0x0) {
      ppFVar3 = (FILE **)FUN_004100e0(0x1038);
      *ppFVar3 = pFVar2;
      __n = 0x1000;
      if (param_2 < 0x1001) {
        __n = param_2;
      }
      ppFVar3[1] = (FILE *)FUN_004145c0;
      ppFVar3[2] = param_1;
      setvbuf(pFVar2,(char *)(ppFVar3 + 3),0,__n);
      return ppFVar3;
    }
    return (FILE **)0x0;
  }
  ppFVar4 = (FILE **)FUN_004100e0(0x1038);
  *ppFVar4 = (FILE *)0x0;
  ppFVar3 = ppFVar4 + 4;
  ppFVar4[1] = (FILE *)FUN_004145c0;
  ppFVar4[2] = (FILE *)0x0;
  ppFVar4[3] = (FILE *)0x0;
  __fd = open("/dev/urandom",0);
  if (__fd < 0) {
    uVar5 = 0x14;
    gettimeofday((timeval *)&local_48,(__timezone_ptr_t)0x0);
    *(__uid_t *)(ppFVar4 + 4) = local_48;
    *(undefined4 *)((long)ppFVar4 + 0x24) = uStack_44;
    *(undefined4 *)(ppFVar4 + 5) = uStack_40;
    *(undefined4 *)((long)ppFVar4 + 0x2c) = uStack_3c;
    local_48 = getpid();
    *(__uid_t *)(ppFVar4 + 6) = local_48;
  }
  else {
    if (0x800 < param_2) {
      param_2 = 0x800;
    }
    pFVar2 = (FILE *)__read_chk(__fd,ppFVar3,param_2,0x1018);
    close(__fd);
    if (0x7ff < (long)pFVar2) goto LAB_00414728;
    if ((long)pFVar2 < 0) {
      pFVar2 = param_1;
    }
    uVar5 = 0x800 - (long)pFVar2;
    if (0x10 < uVar5) {
      uVar5 = 0x10;
    }
    lVar7 = (long)&pFVar2->_flags + uVar5;
    gettimeofday((timeval *)&local_48,(__timezone_ptr_t)0x0);
    ptVar8 = (timeval *)&local_48;
    puVar9 = (undefined *)((long)ppFVar3 + (long)pFVar2);
    for (uVar5 = uVar5 & 0xffffffff; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar9 = *(undefined *)&ptVar8->tv_sec;
      ptVar8 = (timeval *)((long)ptVar8 + (ulong)bVar11 * -2 + 1);
      puVar9 = puVar9 + (ulong)bVar11 * -2 + 1;
    }
    if (0x7ff < lVar7) goto LAB_00414728;
    uVar10 = 0x800 - lVar7;
    if (4 < uVar10) {
      uVar10 = 4;
    }
    local_48 = getpid();
    uVar5 = uVar10 + lVar7;
    ptVar8 = (timeval *)&local_48;
    puVar9 = (undefined *)((long)ppFVar3 + lVar7);
    for (uVar10 = uVar10 & 0xffffffff; uVar10 != 0; uVar10 = uVar10 - 1) {
      *puVar9 = *(undefined *)&ptVar8->tv_sec;
      ptVar8 = (timeval *)((long)ptVar8 + (ulong)bVar11 * -2 + 1);
      puVar9 = puVar9 + (ulong)bVar11 * -2 + 1;
    }
    if (0x7ff < uVar5) goto LAB_00414728;
  }
  uVar10 = 0x800 - uVar5;
  if (4 < uVar10) {
    uVar10 = 4;
  }
  local_48 = getppid();
  if ((uint)uVar10 != 0) {
    uVar1 = 0;
    do {
      uVar6 = (ulong)uVar1;
      uVar1 = uVar1 + 1;
      *(undefined *)((long)ppFVar3 + uVar6 + uVar5) = *(undefined *)((long)&local_48 + uVar6);
    } while (uVar1 < (uint)uVar10);
  }
  uVar10 = uVar10 + uVar5;
  if (uVar10 < 0x800) {
    uVar5 = 0x800 - uVar10;
    if (4 < uVar5) {
      uVar5 = 4;
    }
    local_48 = getuid();
    if ((uint)uVar5 != 0) {
      uVar1 = 0;
      do {
        uVar6 = (ulong)uVar1;
        uVar1 = uVar1 + 1;
        *(undefined *)((long)ppFVar3 + uVar6 + uVar10) = *(undefined *)((long)&local_48 + uVar6);
      } while (uVar1 < (uint)uVar5);
    }
    uVar10 = uVar10 + uVar5;
    if (uVar10 < 0x800) {
      local_48 = getgid();
      uVar5 = 0x800 - uVar10;
      if (4 < uVar5) {
        uVar5 = 4;
      }
      if ((uint)uVar5 != 0) {
        uVar1 = 0;
        do {
          uVar6 = (ulong)uVar1;
          uVar1 = uVar1 + 1;
          *(undefined *)((long)ppFVar3 + uVar6 + uVar10) = *(undefined *)((long)&local_48 + uVar6);
        } while (uVar1 < (uint)uVar5);
      }
    }
  }
LAB_00414728:
  FUN_00414d90(ppFVar3);
  return ppFVar4;
}


void FUN_00414910(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 8) = param_2;
  return;
}


void FUN_00414920(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}


void FUN_00414930(FILE **param_1,void *param_2,FILE *param_3)

{
  FILE **ppFVar1;
  int *piVar2;
  size_t sVar3;
  int iVar4;
  void *__dest;
  FILE **__src;
  FILE *pFVar5;
  
  pFVar5 = *param_1;
  if (pFVar5 != (FILE *)0x0) {
    piVar2 = __errno_location();
    while( true ) {
      sVar3 = fread_unlocked(param_2,1,(size_t)param_3,pFVar5);
      iVar4 = *piVar2;
      param_2 = (void *)((long)param_2 + sVar3);
      param_3 = (FILE *)((long)param_3 - sVar3);
      if (param_3 == (FILE *)0x0) break;
      pFVar5 = param_1[2];
      if ((*(byte *)&(*param_1)->_flags & 0x20) == 0) {
        iVar4 = 0;
      }
      *piVar2 = iVar4;
      (*(code *)param_1[1])(pFVar5);
      pFVar5 = *param_1;
    }
    return;
  }
  pFVar5 = param_1[3];
  __src = param_1 + 0x107;
  ppFVar1 = param_1 + 4;
  __dest = param_2;
  if (param_3 <= pFVar5) {
    __src = (FILE **)((long)__src + (0x800 - (long)pFVar5));
    goto LAB_00414a45;
  }
  do {
    param_2 = (void *)((long)__dest + (long)pFVar5);
    param_3 = (FILE *)((long)param_3 - (long)pFVar5);
    memcpy(__dest,(void *)((0x800 - (long)pFVar5) + (long)__src),(size_t)pFVar5);
    if (((ulong)param_2 & 7) == 0) goto LAB_00414a2b;
    pFVar5 = (FILE *)0x800;
    FUN_00414ae0(ppFVar1,__src);
    __dest = param_2;
  } while ((FILE *)0x800 < param_3);
  goto LAB_00414a3f;
LAB_00414a2b:
  while ((FILE *)0x7ff < param_3) {
    FUN_00414ae0(ppFVar1,param_2);
    param_3 = (FILE *)&param_3[-10]._fileno;
    param_2 = (void *)((long)param_2 + 0x800);
    if (param_3 == (FILE *)0x0) {
      param_1[3] = (FILE *)0x0;
      return;
    }
  }
  FUN_00414ae0(ppFVar1,__src);
LAB_00414a3f:
  pFVar5 = (FILE *)0x800;
LAB_00414a45:
  memcpy(param_2,__src,(size_t)param_3);
  param_1[3] = (FILE *)((long)pFVar5 - (long)param_3);
  return;
}


undefined8 FUN_00414a90(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  __explicit_bzero_chk(param_1,0x1038,0xffffffffffffffff);
  free(param_1);
  if (lVar1 != 0) {
    uVar2 = FUN_00414fe0(lVar1);
    return uVar2;
  }
  return 0;
}


void FUN_00414ae0(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  lVar6 = param_1[0x102];
  uVar3 = param_1[0x100];
  param_1[0x102] = lVar6 + 1;
  lVar6 = param_1[0x101] + lVar6 + 1;
  plVar1 = param_1;
  plVar5 = param_2;
  do {
    lVar4 = *plVar1;
    uVar3 = ~(uVar3 ^ uVar3 << 0x15) + plVar1[0x80];
    lVar6 = *(long *)((long)param_1 + (ulong)((uint)lVar4 & 0x7f8)) + uVar3 + lVar6;
    *plVar1 = lVar6;
    lVar4 = *(long *)((long)param_1 + (ulong)((uint)((ulong)lVar6 >> 8) & 0x7f8)) + lVar4;
    *plVar5 = lVar4;
    lVar6 = plVar1[1];
    uVar3 = (uVar3 ^ uVar3 >> 5) + plVar1[0x81];
    lVar4 = *(long *)((long)param_1 + (ulong)((uint)lVar6 & 0x7f8)) + uVar3 + lVar4;
    plVar1[1] = lVar4;
    lVar6 = *(long *)((long)param_1 + (ulong)((uint)((ulong)lVar4 >> 8) & 0x7f8)) + lVar6;
    plVar5[1] = lVar6;
    lVar4 = plVar1[2];
    uVar3 = (uVar3 * 0x1000 ^ uVar3) + plVar1[0x82];
    lVar6 = *(long *)((long)param_1 + (ulong)((uint)lVar4 & 0x7f8)) + uVar3 + lVar6;
    plVar1[2] = lVar6;
    lVar4 = lVar4 + *(long *)((long)param_1 + (ulong)((uint)((ulong)lVar6 >> 8) & 0x7f8));
    plVar5[2] = lVar4;
    lVar6 = plVar1[3];
    uVar3 = (uVar3 ^ uVar3 >> 0x21) + plVar1[0x83];
    lVar4 = *(long *)((long)param_1 + (ulong)((uint)lVar6 & 0x7f8)) + uVar3 + lVar4;
    plVar2 = plVar1 + 4;
    plVar1[3] = lVar4;
    lVar6 = *(long *)((long)param_1 + (ulong)((uint)((ulong)lVar4 >> 8) & 0x7f8)) + lVar6;
    plVar5[3] = lVar6;
    plVar1 = plVar2;
    plVar5 = plVar5 + 4;
  } while (plVar2 != param_1 + 0x80);
  plVar1 = param_2 + 0x80;
  do {
    lVar4 = *plVar2;
    uVar3 = ~(uVar3 ^ uVar3 << 0x15) + plVar2[-0x80];
    lVar6 = *(long *)((long)param_1 + (ulong)((uint)lVar4 & 0x7f8)) + uVar3 + lVar6;
    *plVar2 = lVar6;
    lVar4 = lVar4 + *(long *)((long)param_1 + (ulong)((uint)((ulong)lVar6 >> 8) & 0x7f8));
    *plVar1 = lVar4;
    lVar6 = plVar2[1];
    uVar3 = (uVar3 ^ uVar3 >> 5) + plVar2[-0x7f];
    lVar4 = *(long *)((long)param_1 + (ulong)((uint)lVar6 & 0x7f8)) + uVar3 + lVar4;
    plVar2[1] = lVar4;
    lVar6 = *(long *)((long)param_1 + (ulong)((uint)((ulong)lVar4 >> 8) & 0x7f8)) + lVar6;
    plVar1[1] = lVar6;
    lVar4 = plVar2[2];
    uVar3 = (uVar3 * 0x1000 ^ uVar3) + plVar2[-0x7e];
    lVar6 = *(long *)((long)param_1 + (ulong)((uint)lVar4 & 0x7f8)) + uVar3 + lVar6;
    plVar2[2] = lVar6;
    lVar4 = lVar4 + *(long *)((long)param_1 + (ulong)((uint)((ulong)lVar6 >> 8) & 0x7f8));
    plVar1[2] = lVar4;
    lVar6 = plVar2[3];
    uVar3 = (uVar3 ^ uVar3 >> 0x21) + plVar2[-0x7d];
    lVar4 = *(long *)((long)param_1 + (ulong)((uint)lVar6 & 0x7f8)) + uVar3 + lVar4;
    plVar5 = plVar2 + 4;
    plVar2[3] = lVar4;
    lVar6 = *(long *)((long)param_1 + (ulong)((uint)((ulong)lVar4 >> 8) & 0x7f8)) + lVar6;
    plVar1[3] = lVar6;
    plVar2 = plVar5;
    plVar1 = plVar1 + 4;
  } while (plVar5 != param_1 + 0x100);
  param_1[0x100] = uVar3;
  param_1[0x101] = lVar6;
  return;
}


void FUN_00414d90(ulong *param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  
  uVar3 = 0x98f5704f6c44c0ab;
  uVar7 = 0x82f053db8355e0ce;
  uVar13 = 0xb29b2e824a595524;
  uVar14 = 0xae985bf2cbfc89ed;
  uVar11 = 0x8c0ea5053d4712a0;
  uVar10 = 0xb9f8b322c73ac862;
  uVar8 = 0x647c4677a2884b7c;
  uVar5 = 0x48fe4a0fa5a09315;
  puVar1 = param_1;
  do {
    lVar9 = uVar8 + (*puVar1 - (uVar7 + puVar1[4]));
    uVar6 = uVar5 + puVar1[5] ^ uVar3 + puVar1[7] >> 9;
    uVar10 = uVar10 + (puVar1[1] - uVar6);
    uVar5 = uVar14 + puVar1[6] ^ lVar9 * 0x200;
    lVar12 = uVar11 + (puVar1[2] - uVar5);
    uVar3 = uVar3 + puVar1[7] + lVar9 ^ uVar10 >> 0x17;
    uVar13 = uVar13 + (puVar1[3] - uVar3);
    uVar8 = lVar9 + uVar10 ^ lVar12 * 0x8000;
    lVar9 = (uVar7 + puVar1[4]) - uVar8;
    *puVar1 = uVar8;
    uVar10 = uVar10 + lVar12 ^ uVar13 >> 0xe;
    uVar6 = uVar6 - uVar10;
    puVar1[1] = uVar10;
    uVar11 = lVar12 + uVar13 ^ lVar9 * 0x100000;
    lVar12 = uVar5 - uVar11;
    puVar1[2] = uVar11;
    puVar2 = puVar1 + 8;
    uVar13 = uVar13 + lVar9 ^ uVar6 >> 0x11;
    uVar5 = uVar6 + lVar12;
    uVar3 = uVar3 - uVar13;
    puVar1[3] = uVar13;
    uVar7 = lVar12 * 0x4000 ^ lVar9 + uVar6;
    uVar14 = lVar12 + uVar3;
    puVar1[5] = uVar5;
    puVar1[4] = uVar7;
    puVar1[6] = uVar14;
    puVar1[7] = uVar3;
    puVar1 = puVar2;
    puVar4 = param_1;
  } while (param_1 + 0x100 != puVar2);
  do {
    lVar9 = (uVar8 + *puVar4) - (uVar7 + puVar4[4]);
    uVar6 = uVar5 + puVar4[5] ^ uVar3 + puVar4[7] >> 9;
    uVar5 = (uVar10 + puVar4[1]) - uVar6;
    uVar14 = uVar14 + puVar4[6] ^ lVar9 * 0x200;
    lVar12 = (uVar11 + puVar4[2]) - uVar14;
    uVar3 = uVar3 + puVar4[7] + lVar9 ^ uVar5 >> 0x17;
    uVar13 = (uVar13 + puVar4[3]) - uVar3;
    uVar8 = lVar9 + uVar5 ^ lVar12 * 0x8000;
    lVar9 = (uVar7 + puVar4[4]) - uVar8;
    *puVar4 = uVar8;
    uVar10 = uVar5 + lVar12 ^ uVar13 >> 0xe;
    uVar6 = uVar6 - uVar10;
    puVar4[1] = uVar10;
    uVar11 = lVar12 + uVar13 ^ lVar9 * 0x100000;
    lVar12 = uVar14 - uVar11;
    puVar4[2] = uVar11;
    puVar1 = puVar4 + 8;
    uVar13 = uVar13 + lVar9 ^ uVar6 >> 0x11;
    uVar5 = uVar6 + lVar12;
    uVar3 = uVar3 - uVar13;
    puVar4[3] = uVar13;
    uVar7 = lVar12 * 0x4000 ^ lVar9 + uVar6;
    uVar14 = lVar12 + uVar3;
    puVar4[5] = uVar5;
    puVar4[4] = uVar7;
    puVar4[6] = uVar14;
    puVar4[7] = uVar3;
    puVar4 = puVar1;
  } while (param_1 + 0x100 != puVar1);
  param_1[0x102] = 0;
  param_1[0x101] = 0;
  param_1[0x100] = 0;
  return;
}


void FUN_00414fd0(undefined8 param_1)

{
  FUN_00410460(param_1,0,3);
  return;
}


int FUN_00414fe0(FILE *param_1)

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
      if (_Var4 == -1) goto LAB_00415047;
    }
    iVar1 = FUN_004105a0(param_1);
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
LAB_00415047:
  iVar1 = fclose(param_1);
  return iVar1;
}


FILE * FUN_00415060(char *param_1,char *param_2)

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
    iVar2 = FUN_00414fd0(uVar1);
    if (iVar2 < 0) {
      piVar5 = __errno_location();
      pFVar4 = (FILE *)0x0;
      iVar2 = *piVar5;
      FUN_00414fe0(__stream);
      *piVar5 = iVar2;
    }
    else {
      iVar3 = FUN_00414fe0(__stream);
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


/* WARNING: Removing unreachable block (ram,0x00415133) */
/* WARNING: Removing unreachable block (ram,0x00415138) */

void FUN_00415100(void)

{
  __DT_INIT();
  return;
}


void FUN_00415160(void)

{
  return;
}


void FUN_00415170(undefined8 param_1)

{
  __cxa_atexit(param_1,0,DAT_0061d3e8);
  return;
}


undefined8 FUN_00415188(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code **ppcVar1;
  
  for (ppcVar1 = (code **)&DAT_0061ce30; *ppcVar1 != (code *)0xffffffffffffffff;
      ppcVar1 = ppcVar1 + -1) {
    (**ppcVar1)();
  }
  return param_3;
}


void __DT_FINI(void)

{
  FUN_004034b1();
  return;
}

