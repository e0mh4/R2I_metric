
void switchD_00403ea0::caseD_b(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00402135(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_0040213a(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_0040213f(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00402144(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void switchD_00405daa::caseD_0(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_0040214e(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00402153(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00402158(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_0040215d(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00402162(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00402167(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_0040216c(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


byte FUN_00402180(int param_1,undefined8 *param_2)

{
  bool bVar1;
  char *pcVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  int iVar10;
  char *pcVar11;
  undefined auVar12 [16];
  undefined8 uStack_118;
  long local_110;
  __uid_t local_108;
  __gid_t local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  char local_f4;
  long local_f0;
  undefined local_e8;
  undefined local_e7;
  char *local_e0;
  long local_d8 [2];
  stat local_c8;
  
  bVar1 = false;
  pcVar11 = (char *)0xffffffff;
  uVar9 = (ulong)param_1;
  uVar8 = 0x10;
  local_108 = 0xffffffff;
  local_104 = 0xffffffff;
  local_100 = 0xffffffff;
  local_fc = 0xffffffff;
  FUN_00403cb0(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils",
                 "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale"
                );
  textdomain("coreutils");
  FUN_0040c620(FUN_00403bc0);
  FUN_00402c50(&local_f8);
LAB_00402210:
  iVar10 = (int)pcVar11;
  iVar4 = FUN_00409c90(uVar9 & 0xffffffff,param_2,"HLPRcfhv",&PTR_s_recursive_0040d320,0);
  pcVar2 = DAT_00612390;
  if (iVar4 == -1) {
    if (local_f4 == '\0') {
      uVar8 = 0x10;
    }
    else if ((int)uVar8 == 0x10) {
      if (iVar10 == 1) goto LAB_0040266a;
      iVar10 = 0;
    }
    local_e8 = iVar10 != 0;
    pcVar11 = DAT_00612390;
    iVar4 = DAT_0061233c;
    if (DAT_00612390 == (char *)0x0) {
      if (1 < param_1 - DAT_0061233c) {
        uVar9 = FUN_00405c50(param_2[DAT_0061233c],&local_108,&local_104,&local_e0,local_d8);
        if (uVar9 == 0) {
          if (local_e0 == (char *)0x0) goto LAB_0040258c;
          goto LAB_00402529;
        }
        goto LAB_00402640;
      }
    }
    else if (0 < param_1 - DAT_0061233c) {
      iVar4 = __xstat(1,DAT_00612390,&local_c8);
      if (iVar4 != 0) {
        param_2 = (undefined8 *)FUN_00405680(4,pcVar2);
        uVar8 = dcgettext(0,"failed to get attributes of %s",5);
        piVar6 = __errno_location();
        error(1,*piVar6,uVar8,param_2);
LAB_00402640:
        uVar8 = FUN_004058d0(param_2[DAT_0061233c]);
        error(1,0,"%s: %s",uVar9,uVar8);
LAB_0040266a:
        uVar8 = dcgettext(0,"-R --dereference requires either -H or -L",5);
        auVar12 = error(1,0,uVar8);
        uVar8 = uStack_118;
        uStack_118 = SUB168(auVar12,0);
        (*(code *)PTR___libc_start_main_00611ff0)
                  (FUN_00402180,uVar8,&local_110,FUN_0040c5b0,FUN_0040c610,SUB168(auVar12 >> 0x40,0)
                   ,&uStack_118);
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      local_108 = local_c8.st_uid;
      local_104 = local_c8.st_gid;
      local_e0 = (char *)FUN_00402cd0();
      local_d8[0] = FUN_00402c90(local_c8.st_gid);
      goto LAB_0040247c;
    }
LAB_004025a6:
    if (iVar4 < param_1) {
      uVar8 = FUN_004058d0(param_2[uVar9 - 1]);
      uVar7 = dcgettext(0,"missing operand after %s",5);
      error(0,0,uVar7,uVar8);
    }
    else {
      uVar7 = dcgettext(0,"missing operand",5);
      error(0,0,uVar7);
    }
  }
  else {
    if (iVar4 == 0x66) {
      local_e7 = 1;
      goto LAB_00402210;
    }
    if (0x66 < iVar4) {
      if (iVar4 == 0x81) {
        lVar5 = FUN_00405c50(DAT_00612550,&local_100,&local_fc,0);
        if (lVar5 != 0) {
          local_110 = lVar5;
          FUN_004058d0(DAT_00612550);
          error(1,0,"%s: %s",local_110);
LAB_004023d0:
          local_f4 = '\x01';
        }
      }
      else {
        if (0x81 < iVar4) goto LAB_004022a8;
        if (iVar4 == 0x76) {
          local_f8 = 0;
        }
        else if (iVar4 == 0x80) {
          pcVar11 = (char *)0x1;
        }
        else {
          if (iVar4 != 0x68) goto LAB_00402299;
          pcVar11 = (char *)0x0;
        }
      }
      goto LAB_00402210;
    }
    if (iVar4 == 0x4c) {
      uVar8 = 2;
      goto LAB_00402210;
    }
    if (iVar4 < 0x4d) {
      if (iVar4 == -0x82) {
        iVar4 = FUN_00402770(0);
        goto LAB_004025a6;
      }
      if (iVar4 == 0x48) {
        uVar8 = 0x11;
        goto LAB_00402210;
      }
      if (iVar4 == -0x83) {
        FUN_00406180(stdout,"chown","GNU coreutils",PTR_DAT_006122d0,"David MacKenzie",
                     "Jim Meyering",0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
    }
    else {
      if (iVar4 == 0x52) goto LAB_004023d0;
      if (iVar4 == 99) {
        local_f8 = 1;
        goto LAB_00402210;
      }
      if (iVar4 == 0x50) {
        uVar8 = 0x10;
        goto LAB_00402210;
      }
    }
  }
LAB_00402299:
  do {
    iVar4 = FUN_00402770(1);
LAB_004022a8:
    if (iVar4 == 0x83) {
      bVar1 = true;
      goto LAB_00402210;
    }
    if (iVar4 < 0x83) {
      bVar1 = false;
      goto LAB_00402210;
    }
  } while (iVar4 != 0x84);
  DAT_00612390 = DAT_00612550;
  goto LAB_00402210;
LAB_0040247c:
  if ((local_f4 == '\0') || (!bVar1)) {
LAB_0040248c:
    bVar3 = FUN_00403a80(param_2 + DAT_0061233c,(uint)uVar8 | 0x400,local_108,local_104,local_100,
                         local_fc,&local_f8,(long)DAT_0061233c);
    return bVar3 ^ 1;
  }
  local_f0 = FUN_004058f0(&DAT_00612380);
  if (local_f0 != 0) goto LAB_0040248c;
  param_2 = (undefined8 *)FUN_00405680(4,"/");
  uVar8 = dcgettext(0,"failed to get attributes of %s",5);
  piVar6 = __errno_location();
  error(1,*piVar6,uVar8,param_2);
LAB_0040258c:
  if (local_d8[0] != 0) {
    local_e0 = "";
  }
LAB_00402529:
  DAT_0061233c = DAT_0061233c + 1;
  goto LAB_0040247c;
}


void FUN_00402690(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_retaddr;
  undefined auStack_8 [8];
  
  (*(code *)PTR___libc_start_main_00611ff0)
            (FUN_00402180,unaff_retaddr,&stack0x00000008,FUN_0040c5b0,FUN_0040c610,param_3,auStack_8
            );
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* WARNING: Removing unreachable block (ram,0x004026c8) */
/* WARNING: Removing unreachable block (ram,0x004026d2) */

void FUN_004026bb(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00402709) */

void FUN_004026da(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00402746) */

void FUN_00402711(void)

{
  if (DAT_00612368 != '\0') {
    return;
  }
  FUN_004026bb();
  DAT_00612368 = 1;
  return;
}


/* WARNING: Removing unreachable block (ram,0x00402709) */

void thunk_FUN_004026da(void)

{
  return;
}


void FUN_00402770(int param_1)

{
  FILE *pFVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  byte **ppbVar5;
  undefined8 uVar7;
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
  undefined8 local_28;
  undefined8 local_20;
  byte **ppbVar6;
  
  uVar7 = DAT_006123a8;
  bVar14 = 0;
  if (param_1 != 0) {
    uVar3 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(stderr,1,uVar3,uVar7);
    goto LAB_004027af;
  }
  uVar3 = dcgettext(0,
                    "Usage: %s [OPTION]... [OWNER][:[GROUP]] FILE...\n  or:  %s [OPTION]... --reference=RFILE FILE...\n"
                    ,5);
  __printf_chk(1,uVar3,uVar7,uVar7);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "Change the owner and/or group of each FILE to OWNER and/or GROUP.\nWith --reference, change the owner and group of each FILE to those of RFILE.\n\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -c, --changes          like verbose but report only when a change is made\n  -f, --silent, --quiet  suppress most error messages\n  -v, --verbose          output a diagnostic for every file processed\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --dereference      affect the referent of each symbolic link (this is\n                         the default), rather than the symbolic link itself\n  -h, --no-dereference   affect symbolic links instead of any referenced file\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "                         (useful only on systems that can change the\n                         ownership of a symlink)\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --from=CURRENT_OWNER:CURRENT_GROUP\n                         change the owner and/or group of each file only if\n                         its current owner and/or group match those specified\n                         here.  Either may be omitted, in which case a match\n                         is not required for the omitted attribute\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --no-preserve-root  do not treat \'/\' specially (the default)\n      --preserve-root    fail to operate recursively on \'/\'\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --reference=RFILE  use RFILE\'s owner and group rather than\n                         specifying OWNER:GROUP values\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -R, --recursive        operate on files and directories recursively\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nThe following options modify how a hierarchy is traversed when the -R\noption is also specified.  If more than one is specified, only the final\none takes effect.\n\n  -H                     if a command line argument is a symbolic link\n                         to a directory, traverse it\n  -L                     traverse every symbolic link to a directory\n                         encountered\n  -P                     do not traverse any symbolic links (default)\n\n"
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
                             "\nOwner is unchanged if missing.  Group is unchanged if missing, but changed\nto login group if implied by a \':\' following a symbolic OWNER.\nOWNER and GROUP may be numeric as well as symbolic.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  uVar7 = DAT_006123a8;
  uVar3 = dcgettext(0,
                    "\nExamples:\n  %s root /u        Change the owner of /u to \"root\".\n  %s root:staff /u  Likewise, but also change its group to \"staff\".\n  %s -hR root /u    Change the owner of /u and subfiles to \"root\".\n"
                    ,5);
  __printf_chk(1,uVar3,uVar7,uVar7,uVar7);
  local_88 = &DAT_0040c68a;
  local_80 = "test invocation";
  local_78[0] = (byte *)0x40c704;
  local_78[1] = (byte *)0x40c69c;
  local_78[2] = (byte *)0x40c6b2;
  local_78[3] = (byte *)0x40c6bc;
  local_78[4] = (byte *)0x40c6cb;
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
    pbVar10 = (byte *)"chown";
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
        pcVar4 = "chown";
        goto LAB_00402ba3;
      }
    }
    pcVar4 = "chown";
    uVar7 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    pcVar8 = " invocation";
    __printf_chk(1,uVar7,"https://www.gnu.org/software/coreutils/","chown");
  }
  else {
    uVar7 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar7,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar8 = setlocale(5,(char *)0x0);
    if (pcVar8 != (char *)0x0) {
      iVar2 = strncmp(pcVar8,"en_",3);
      if (iVar2 != 0) {
LAB_00402ba3:
        uVar7 = dcgettext(0,"Report %s translation bugs to <https://translationproject.org/team/>\n"
                          ,5);
        __printf_chk(1,uVar7,"chown");
      }
    }
    pcVar8 = " invocation";
    uVar7 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    __printf_chk(1,uVar7,"https://www.gnu.org/software/coreutils/","chown");
    if (pcVar4 != "chown") {
      pcVar8 = "";
    }
  }
  uVar7 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(1,uVar7,pcVar4,pcVar8);
LAB_004027af:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}


char * FUN_00402bd0(char *param_1,char *param_2)

{
  size_t sVar1;
  size_t sVar2;
  char *pcVar3;
  char *pcVar4;
  
  if (param_1 == (char *)0x0) {
    param_1 = param_2;
    if (param_2 != (char *)0x0) goto LAB_00402c30;
    pcVar3 = (char *)0x0;
  }
  else {
    if (param_2 == (char *)0x0) {
LAB_00402c30:
      pcVar3 = (char *)FUN_004064f0(param_1);
      return pcVar3;
    }
    sVar1 = strlen(param_1);
    sVar2 = strlen(param_2);
    pcVar3 = (char *)FUN_004062c0(sVar1 + 2 + sVar2);
    pcVar4 = stpcpy(pcVar3,param_1);
    *pcVar4 = ':';
    strcpy(pcVar4 + 1,param_2);
  }
  return pcVar3;
}


void FUN_00402c50(undefined4 *param_1)

{
  *param_1 = 2;
  *(undefined *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined2 *)(param_1 + 4) = 1;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}


void FUN_00402c80(void)

{
  return;
}


void FUN_00402c90(__gid_t param_1)

{
  group *pgVar1;
  undefined8 uVar2;
  undefined auStack_28 [32];
  
  pgVar1 = getgrgid(param_1);
  if (pgVar1 != (group *)0x0) {
    FUN_004064f0(pgVar1->gr_name);
    return;
  }
  uVar2 = FUN_00403c60(param_1,auStack_28);
  FUN_004064f0(uVar2);
  return;
}


void FUN_00402cd0(__uid_t param_1)

{
  passwd *ppVar1;
  undefined8 uVar2;
  undefined auStack_28 [32];
  
  ppVar1 = getpwuid(param_1);
  if (ppVar1 != (passwd *)0x0) {
    FUN_004064f0(ppVar1->pw_name);
    return;
  }
  uVar2 = FUN_00403c60(param_1,auStack_28);
  FUN_004064f0(uVar2);
  return;
}


uint FUN_00402d10(long param_1,long param_2,__uid_t param_3,__gid_t param_4,uint param_5,
                 uint param_6,int *param_7)

{
  ushort uVar1;
  byte *pbVar2;
  __ino_t *p_Var3;
  long *plVar4;
  uint uVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  void *pvVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  uint unaff_EBP;
  uint uVar15;
  undefined4 uVar16;
  void *pvVar17;
  byte *pbVar18;
  char *pcVar19;
  __uid_t _Var20;
  byte *pbVar21;
  long lVar22;
  stat *psVar23;
  __gid_t _Var24;
  bool bVar25;
  bool bVar26;
  byte bVar27;
  void *local_180;
  void *local_178;
  void *local_170;
  void *local_168;
  int local_160;
  stat local_158;
  stat local_c8;
  
  bVar27 = 0;
  pbVar2 = *(byte **)(param_2 + 0x38);
  uVar1 = *(ushort *)(param_2 + 0x70);
  switch(uVar1) {
  case 1:
    unaff_EBP = (uint)*(byte *)(param_7 + 1);
    if (*(byte *)(param_7 + 1) != 0) {
      plVar4 = *(long **)(param_7 + 2);
      if (plVar4 == (long *)0x0) {
        return unaff_EBP;
      }
      if (*(long *)(param_2 + 0x80) != *plVar4) {
        return unaff_EBP;
      }
      bVar25 = *(ulong *)(param_2 + 0x78) < (ulong)plVar4[1];
      bVar26 = *(ulong *)(param_2 + 0x78) == plVar4[1];
      if (!bVar26) {
        return unaff_EBP;
      }
      lVar14 = 2;
      pbVar18 = pbVar2;
      pbVar21 = (byte *)0x40efb1;
      do {
        if (lVar14 == 0) break;
        lVar14 = lVar14 + -1;
        bVar25 = *pbVar18 < *pbVar21;
        bVar26 = *pbVar18 == *pbVar21;
        pbVar18 = pbVar18 + 1;
        pbVar21 = pbVar21 + 1;
      } while (bVar26);
      if ((!bVar25 && !bVar26) == bVar25) {
        uVar11 = FUN_00405680(4,pbVar2);
        uVar12 = dcgettext(0,"it is dangerous to operate recursively on %s",5);
        error(0,0,uVar12,uVar11);
      }
      else {
        uVar11 = FUN_004055a0(1,4,"/");
        uVar12 = FUN_004055a0(0,4,pbVar2);
        uVar13 = dcgettext(0,"it is dangerous to operate recursively on %s (same as %s)",5);
        error(0,0,uVar13,uVar12,uVar11);
      }
      uVar11 = dcgettext(0,"use --no-preserve-root to override this failsafe",5);
      error(0,0,uVar11);
      fts_set(param_1,param_2,4);
      fts_read(param_1);
      return 0;
    }
    break;
  case 2:
    cVar6 = FUN_004065a0();
    if (cVar6 != '\0') {
      uVar11 = FUN_00405750(0,3,pbVar2);
      uVar12 = dcgettext(0,
                         "WARNING: Circular directory structure.\nThis almost certainly means that you have a corrupted file system.\nNOTIFY YOUR SYSTEM MANAGER.\nThe following directory is part of the cycle:\n  %s\n"
                         ,5);
      error(0,0,uVar12,uVar11);
      return 0;
    }
    break;
  case 4:
    bVar27 = *(byte *)((long)param_7 + 0x11);
    if (bVar27 != 0) goto LAB_00403095;
    uVar11 = FUN_00405680(4,pbVar2);
    pcVar19 = "cannot read directory %s";
LAB_00403138:
    pcVar19 = (char *)dcgettext(0,pcVar19,5);
    uVar16 = *(undefined4 *)(param_2 + 0x40);
LAB_0040314a:
    uVar15 = (uint)bVar27;
    error(0,uVar16,pcVar19,uVar11);
    iVar7 = *param_7;
    goto joined_r0x0040309c;
  case 6:
    if (*(char *)(param_7 + 1) == '\0') {
      return 1;
    }
    break;
  case 7:
    bVar27 = *(byte *)((long)param_7 + 0x11);
    if (bVar27 == 0) {
      uVar11 = FUN_00405750(0,3,pbVar2);
      uVar16 = *(undefined4 *)(param_2 + 0x40);
      pcVar19 = "%s";
      goto LAB_0040314a;
    }
    goto LAB_00403095;
  case 10:
    if ((*(long *)(param_2 + 0x58) == 0) && (*(long *)(param_2 + 0x20) == 0)) {
      *(undefined8 *)(param_2 + 0x20) = 1;
      fts_set(param_1,param_2,1);
      return 1;
    }
    bVar27 = *(byte *)((long)param_7 + 0x11);
    if (bVar27 == 0) {
      uVar11 = FUN_00405680(4,pbVar2);
      pcVar19 = "cannot access %s";
      goto LAB_00403138;
    }
LAB_00403095:
    iVar7 = *param_7;
    uVar15 = 0;
joined_r0x0040309c:
    if ((iVar7 == 2) || (iVar7 != 0)) goto LAB_00402fa3;
    lVar14 = *(long *)(param_7 + 8);
    lVar22 = *(long *)(param_7 + 6);
    uVar15 = 0;
    local_178 = (void *)0x0;
    local_180 = (void *)0x0;
    local_160 = 3;
    goto LAB_00402eeb;
  }
  uVar15 = (uint)uVar1;
  pcVar19 = *(char **)(param_2 + 0x30);
  psVar23 = (stat *)(param_2 + 0x78);
  cVar6 = *(char *)(param_7 + 4);
  if ((((param_5 & param_6) != 0xffffffff) || (*param_7 != 2)) || (*(long *)(param_7 + 2) != 0)) {
    if (cVar6 != '\0') goto LAB_00402da8;
    goto LAB_00402dc0;
  }
  if (cVar6 == '\0') {
    if (((uVar1 & 0xfffd) != 4) && (1 < (ushort)(uVar1 - 1))) {
LAB_00402e55:
      uVar16 = *(undefined4 *)(param_1 + 0x2c);
      if (cVar6 == '\0') goto LAB_00402e61;
      if ((param_5 & param_6) == 0xffffffff) {
LAB_00403532:
        iVar7 = FUN_00406a00(uVar16,pcVar19,param_3,param_4,0);
        bVar25 = iVar7 == 0;
        goto LAB_00402e90;
      }
      uVar15 = psVar23->st_mode & 0xf000;
      if (uVar15 == 0x8000) {
        uVar5 = 0x900;
      }
      else {
        uVar5 = 0x10900;
        if (uVar15 != 0x4000) goto LAB_00403532;
      }
      iVar7 = __openat_2(uVar16,pcVar19,uVar5);
      if (iVar7 < 0) {
        piVar9 = __errno_location();
        if (*piVar9 == 0xd) {
          if ((psVar23->st_mode & 0xf000) == 0x8000) {
            iVar7 = __openat_2(uVar16,pcVar19,uVar5 | 1);
            if (-1 < iVar7) goto LAB_004033d0;
            if (*piVar9 != 0xd) goto LAB_004032c0;
          }
          uVar16 = *(undefined4 *)(param_1 + 0x2c);
          goto LAB_00403532;
        }
        goto LAB_004032c0;
      }
LAB_004033d0:
      iVar8 = __fxstat(1,iVar7,&local_c8);
      if (iVar8 != 0) {
LAB_00403630:
        piVar9 = __errno_location();
        iVar8 = *piVar9;
        close(iVar7);
        *piVar9 = iVar8;
        goto LAB_004032c0;
      }
      if ((psVar23->st_ino == local_c8.st_ino) && (psVar23->st_dev == local_c8.st_dev)) {
        if (((param_5 == 0xffffffff) || (param_5 == local_c8.st_uid)) &&
           ((param_6 == 0xffffffff || (param_6 == local_c8.st_gid)))) {
          iVar8 = fchown(iVar7,param_3,param_4);
          if (iVar8 != 0) goto LAB_00403630;
          iVar7 = close(iVar7);
          if (iVar7 != 0) goto LAB_004032c0;
        }
        else {
          piVar9 = __errno_location();
          iVar8 = *piVar9;
          close(iVar7);
          *piVar9 = iVar8;
        }
        goto LAB_00402e99;
      }
      piVar9 = __errno_location();
      iVar8 = *piVar9;
      close(iVar7);
      iVar7 = *param_7;
      *piVar9 = iVar8;
      if ((iVar7 == 2) || (iVar7 != 0)) {
        uVar15 = 0;
        goto LAB_00402fa3;
      }
      uVar15 = 0;
LAB_00403450:
      local_160 = 3;
      goto LAB_00403458;
    }
    uVar16 = *(undefined4 *)(param_1 + 0x2c);
LAB_00402e61:
    iVar7 = FUN_00406a00(uVar16,pcVar19,param_3,param_4,0x100);
    bVar25 = iVar7 == 0;
    if ((bVar25) || (piVar9 = __errno_location(), *piVar9 != 0x5f)) {
LAB_00402e90:
      if (!bVar25) {
LAB_004032c0:
        uVar15 = (uint)*(byte *)((long)param_7 + 0x11);
        if (*(byte *)((long)param_7 + 0x11) == 0) {
          uVar11 = FUN_00405680(4,pbVar2);
          if (param_3 == 0xffffffff) {
            uVar12 = dcgettext(0,"changing group of %s",5);
          }
          else {
            uVar12 = dcgettext(0,"changing ownership of %s",5);
          }
          piVar9 = __errno_location();
          error(0,*piVar9,uVar12,uVar11);
          iVar7 = *param_7;
        }
        else {
          iVar7 = *param_7;
          uVar15 = 0;
        }
        if ((iVar7 == 2) || (iVar7 != 0)) goto LAB_00402fa3;
        goto LAB_00403450;
      }
LAB_00402e99:
      if (*param_7 == 2) {
LAB_004034d3:
        uVar15 = 1;
        goto LAB_00402fa3;
      }
      if ((param_3 == 0xffffffff) || (_Var20 = psVar23->st_uid, _Var20 == param_3)) {
        if ((param_4 == 0xffffffff) || (_Var24 = psVar23->st_gid, _Var24 == param_4)) {
          if (*param_7 == 0) {
            local_160 = 4;
            uVar15 = 1;
            goto LAB_00403458;
          }
          goto LAB_004034d3;
        }
        _Var20 = psVar23->st_uid;
        local_160 = 2;
        uVar15 = 1;
      }
      else {
        local_160 = 2;
        _Var24 = psVar23->st_gid;
        uVar15 = 1;
      }
      goto LAB_00402ecc;
    }
    uVar15 = 1;
    if ((*param_7 == 2) || (*param_7 != 0)) goto LAB_00402fa3;
    local_178 = (void *)FUN_00402cd0(psVar23->st_uid);
    local_180 = (void *)FUN_00402c90(psVar23->st_gid);
    uVar11 = FUN_00405680(4,pbVar2);
    uVar12 = dcgettext(0,"neither symbolic link %s nor referent has been changed\n",5);
    __printf_chk(1,uVar12,uVar11);
  }
  else {
LAB_00402da8:
    if ((*(uint *)(param_2 + 0x90) & 0xf000) == 0xa000) {
      iVar7 = __fxstatat(1,*(int *)(param_1 + 0x2c),pcVar19,&local_158,0);
      if (iVar7 == 0) {
        uVar15 = (uint)*(ushort *)(param_2 + 0x70);
        psVar23 = &local_158;
        goto LAB_00402dc0;
      }
      uVar15 = (uint)*(byte *)((long)param_7 + 0x11);
      if (*(byte *)((long)param_7 + 0x11) == 0) {
        uVar11 = FUN_00405680(4,pbVar2);
        uVar12 = dcgettext(0,"cannot dereference %s",5);
        piVar9 = __errno_location();
        error(0,*piVar9,uVar12,uVar11);
        iVar7 = *param_7;
      }
      else {
        iVar7 = *param_7;
        uVar15 = 0;
      }
      if ((iVar7 == 2) || (iVar7 != 0)) goto LAB_00402fa3;
      psVar23 = &local_158;
      local_160 = 3;
      goto LAB_00403458;
    }
LAB_00402dc0:
    uVar15 = unaff_EBP & 0xffffff00 | (uint)(((ushort)uVar15 & 0xfffd) == 4) |
             uVar15 & 0xffffff00 | (uint)((ushort)((ushort)uVar15 - 1) < 2);
    cVar6 = (char)uVar15;
    if ((param_5 == 0xffffffff) || (psVar23->st_uid == param_5)) {
      if (param_6 == 0xffffffff) {
        if (((cVar6 != '\0') && (p_Var3 = *(__ino_t **)(param_7 + 2), p_Var3 != (__ino_t *)0x0)) &&
           (psVar23->st_ino == *p_Var3)) {
          bVar25 = psVar23->st_dev < p_Var3[1];
          bVar26 = psVar23->st_dev == p_Var3[1];
          if (bVar26) goto LAB_004031b0;
        }
      }
      else {
        if (((cVar6 != '\0') && (p_Var3 = *(__ino_t **)(param_7 + 2), p_Var3 != (__ino_t *)0x0)) &&
           (psVar23->st_ino == *p_Var3)) {
          bVar25 = psVar23->st_dev < p_Var3[1];
          bVar26 = psVar23->st_dev == p_Var3[1];
          if (bVar26) {
LAB_004031b0:
            lVar14 = 2;
            pbVar18 = pbVar2;
            pbVar21 = (byte *)0x40efb1;
            do {
              if (lVar14 == 0) break;
              lVar14 = lVar14 + -1;
              bVar25 = *pbVar18 < *pbVar21;
              bVar26 = *pbVar18 == *pbVar21;
              pbVar18 = pbVar18 + (ulong)bVar27 * -2 + 1;
              pbVar21 = pbVar21 + (ulong)bVar27 * -2 + 1;
            } while (bVar26);
            if ((!bVar25 && !bVar26) == bVar25) {
              uVar11 = FUN_00405680(4,pbVar2);
              uVar12 = dcgettext(0,"it is dangerous to operate recursively on %s",5);
              error(0,0,uVar12,uVar11);
            }
            else {
              uVar11 = FUN_004055a0(1,4,"/");
              uVar12 = FUN_004055a0(0,4,pbVar2);
              uVar13 = dcgettext(0,"it is dangerous to operate recursively on %s (same as %s)",5);
              error(0,0,uVar13,uVar12,uVar11);
            }
            uVar11 = dcgettext(0,"use --no-preserve-root to override this failsafe",5);
            error(0,0,uVar11);
            return 0;
          }
        }
        if (psVar23->st_gid != param_6) goto LAB_0040372d;
      }
      cVar6 = *(char *)(param_7 + 4);
      goto LAB_00402e55;
    }
    if (cVar6 == '\0') {
      if ((*param_7 != 2) && (*param_7 == 0)) {
        uVar15 = 1;
        local_160 = 4;
        goto LAB_00403458;
      }
      goto LAB_004034d3;
    }
    p_Var3 = *(__ino_t **)(param_7 + 2);
    if ((p_Var3 == (__ino_t *)0x0) || (*p_Var3 != psVar23->st_ino)) {
      iVar7 = *param_7;
    }
    else {
      bVar25 = psVar23->st_dev < p_Var3[1];
      bVar26 = psVar23->st_dev == p_Var3[1];
      if (bVar26) goto LAB_004031b0;
LAB_0040372d:
      iVar7 = *param_7;
      uVar15 = 1;
    }
    if ((iVar7 == 2) || (iVar7 != 0)) goto LAB_00402fa3;
    local_160 = 4;
LAB_00403458:
    _Var20 = psVar23->st_uid;
    _Var24 = psVar23->st_gid;
LAB_00402ecc:
    local_178 = (void *)FUN_00402cd0(_Var20);
    local_180 = (void *)FUN_00402c90(_Var24);
    lVar14 = *(long *)(param_7 + 8);
    lVar22 = *(long *)(param_7 + 6);
LAB_00402eeb:
    pvVar10 = (void *)FUN_00402bd0(lVar22,lVar14);
    pvVar17 = (void *)0x0;
    if (lVar14 != 0) {
      pvVar17 = local_180;
    }
    local_170 = pvVar10;
    if (lVar22 == 0) {
      local_168 = (void *)FUN_00402bd0(0,pvVar17);
      if (local_160 == 3) goto LAB_00403330;
      if (local_160 == 4) {
        if (lVar14 == 0) {
          uVar11 = dcgettext(0,"ownership of %s retained\n",5);
        }
        else {
          uVar11 = dcgettext(0,"group of %s retained as %s\n",5);
        }
      }
      else if (lVar14 == 0) {
        uVar11 = dcgettext(0,"no change to ownership of %s\n",5);
      }
      else {
        uVar11 = dcgettext(0,"changed group of %s from %s to %s\n",5);
      }
    }
    else {
      local_168 = (void *)FUN_00402bd0(local_178,pvVar17);
      if (local_160 == 3) {
LAB_00403330:
        if (local_168 == (void *)0x0) {
          pcVar19 = "failed to change ownership of %s to %s\n";
          if ((lVar22 == 0) && (pcVar19 = "failed to change group of %s to %s\n", lVar14 == 0)) {
            pcVar19 = "failed to change ownership of %s\n";
          }
          uVar11 = dcgettext(0,pcVar19,5);
          local_170 = (void *)0x0;
          local_168 = pvVar10;
        }
        else if (lVar22 == 0) {
          if (lVar14 == 0) {
            uVar11 = dcgettext(0,"failed to change ownership of %s\n",5);
          }
          else {
            uVar11 = dcgettext(0,"failed to change group of %s from %s to %s\n",5);
          }
        }
        else {
          uVar11 = dcgettext(0,"failed to change ownership of %s from %s to %s\n",5);
        }
      }
      else if (local_160 == 4) {
        uVar11 = dcgettext(0,"ownership of %s retained as %s\n",5);
      }
      else {
        uVar11 = dcgettext(0,"changed ownership of %s from %s to %s\n",5);
      }
    }
    uVar12 = FUN_00405680(4,pbVar2);
    __printf_chk(1,uVar11,uVar12,local_168,local_170);
    free(local_168);
    free(local_170);
  }
  free(local_178);
  free(local_180);
LAB_00402fa3:
  if (*(char *)(param_7 + 1) == '\0') {
    fts_set(param_1,param_2,4);
  }
  return uVar15;
}


byte FUN_00403a80(undefined8 param_1,ulong param_2,undefined4 param_3,undefined4 param_4,
                 uint param_5,uint param_6,int *param_7)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  int *piVar6;
  undefined8 uVar7;
  byte bVar8;
  
  if (((param_5 & param_6) == 0xffffffff) && (*(char *)(param_7 + 4) == '\0')) {
    uVar1 = (uint)param_2;
    param_2 = param_2 & 0xffffffff;
    if (*param_7 == 2) {
      param_2 = (ulong)(uVar1 | 8);
    }
  }
  bVar8 = 1;
  uVar4 = FUN_00406550(param_1,param_2,0);
  while (lVar5 = fts_read(uVar4), lVar5 != 0) {
    bVar2 = FUN_00402d10(uVar4,lVar5,param_3,param_4,param_5,param_6,param_7);
    bVar8 = bVar8 & bVar2;
  }
  piVar6 = __errno_location();
  if (*piVar6 != 0) {
    bVar8 = *(byte *)((long)param_7 + 0x11);
    if (bVar8 == 0) {
      uVar7 = dcgettext(0,"fts_read failed",5);
      error(0,*piVar6,uVar7);
    }
    else {
      bVar8 = 0;
    }
  }
  iVar3 = fts_close(uVar4);
  if (iVar3 != 0) {
    bVar8 = 0;
    uVar4 = dcgettext(0,"fts_close failed",5);
    error(0,*piVar6,uVar4);
  }
  return bVar8;
}


void FUN_00403ba0(undefined8 param_1)

{
  DAT_006123a0 = param_1;
  return;
}


void FUN_00403bb0(undefined param_1)

{
  DAT_00612398 = param_1;
  return;
}


void FUN_00403bc0(void)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  iVar1 = FUN_00409ec0(stdout);
  if (iVar1 != 0) {
    piVar2 = __errno_location();
    if ((DAT_00612398 == '\0') || (*piVar2 != 0x20)) {
      uVar3 = dcgettext(0,"write error",5);
      if (DAT_006123a0 == 0) {
        error(0,*piVar2,"%s",uVar3);
      }
      else {
        uVar4 = FUN_00405720();
        error(0,*piVar2,"%s: %s",uVar4,uVar3);
      }
      goto LAB_00403c3e;
    }
  }
  iVar1 = FUN_00409ec0(stderr);
  if (iVar1 == 0) {
    return;
  }
LAB_00403c3e:
                    /* WARNING: Subroutine does not return */
  _exit(DAT_006122d8);
}


char * FUN_00403c60(ulong param_1,long param_2)

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


void FUN_00403cb0(byte *param_1)

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
        pbVar6 = &DAT_0040d960;
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
  DAT_006123a8 = param_1;
  program_invocation_name = param_1;
  return;
}


char * FUN_00403d50(char *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  byte *pbVar3;
  
  pcVar2 = (char *)dcgettext(0,param_1,5);
  if (param_1 == pcVar2) {
    pbVar3 = (byte *)FUN_0040b370();
    if ((*pbVar3 & 0xdf) == 0x55) {
      if (((((pbVar3[1] & 0xdf) != 0x54) || ((pbVar3[2] & 0xdf) != 0x46)) || (pbVar3[3] != 0x2d)) ||
         ((pbVar3[4] != 0x38 || (pbVar3[5] != 0)))) {
LAB_00403e28:
        pcVar2 = "\"";
        if (param_2 != 9) {
          pcVar2 = "\'";
        }
        return pcVar2;
      }
      cVar1 = *pcVar2;
      pcVar2 = &DAT_0040d971;
      if (cVar1 != '`') {
        pcVar2 = &DAT_0040d966;
      }
    }
    else {
      if (((((*pbVar3 & 0xdf) != 0x47) || ((pbVar3[1] & 0xdf) != 0x42)) || (pbVar3[2] != 0x31)) ||
         (((pbVar3[3] != 0x38 || (pbVar3[4] != 0x30)) ||
          ((pbVar3[5] != 0x33 || ((pbVar3[6] != 0x30 || (pbVar3[7] != 0)))))))) goto LAB_00403e28;
      cVar1 = *pcVar2;
      pcVar2 = &DAT_0040d96d;
      if (cVar1 != '`') {
        pcVar2 = &DAT_0040d96a;
      }
    }
  }
  return pcVar2;
}


ulong FUN_00403e50(undefined *param_1,ulong param_2,char *param_3,ulong param_4,int param_5,
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
LAB_00404aa1:
    if (param_2 != 0) {
      bVar3 = false;
      local_5b = false;
      bVar2 = true;
      local_70 = 0;
      goto LAB_004046d6;
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
      goto LAB_00404aa1;
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
      param_8 = (char *)FUN_00403d50(&DAT_0040d975,param_5);
      param_9 = (char *)FUN_00403d50(&DAT_0040f1d4);
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
LAB_00403ee8:
  uVar22 = 0;
  bVar5 = local_5b;
LAB_00403ef8:
  bVar23 = param_4 != uVar22;
  if (param_4 == 0xffffffffffffffff) {
    bVar23 = param_3[uVar22] != '\0';
  }
  bVar26 = bVar6;
  if (!bVar23) goto LAB_00404678;
  bVar20 = (bool)(param_5 != 2 & bVar6);
  __s1 = (byte *)(param_3 + uVar22);
  uVar16 = uVar15;
  bVar4 = bVar3;
  if (bVar20) {
    if (local_a0 == 0) {
LAB_004045f0:
      uVar19 = (ulong)*__s1;
      switch(uVar19) {
      case 0:
        goto switchD_00404602_caseD_0;
      default:
        bVar20 = false;
        goto switchD_0040446e_caseD_1;
      case 7:
        bVar17 = 0x61;
        goto LAB_00404305;
      case 8:
        bVar17 = 0x62;
        break;
      case 9:
switchD_00404602_caseD_9:
        bVar17 = 0x74;
        break;
      case 10:
switchD_00404602_caseD_a:
        bVar17 = 0x6e;
        break;
      case 0xb:
switchD_00404602_caseD_b:
        bVar17 = 0x76;
        goto LAB_00404305;
      case 0xc:
switchD_00404602_caseD_c:
        bVar17 = 0x66;
LAB_00404305:
        if (local_5c) {
          bVar25 = false;
          goto LAB_00404258;
        }
LAB_00404310:
        bVar23 = false;
        goto LAB_004040cb;
      case 0xd:
        bVar20 = false;
switchD_00403fe8_caseD_d:
        bVar25 = param_5 == 2;
        uVar19 = 0xd;
        bVar13 = 0x72;
        goto LAB_00404220;
      case 0x20:
        bVar25 = false;
LAB_0040464a:
        uVar19 = 0x20;
        goto LAB_00404612;
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
switchD_00403fe8_caseD_21:
        bVar25 = false;
        goto LAB_0040422b;
      case 0x23:
      case 0x7e:
        bVar26 = false;
LAB_0040462a:
        if (uVar22 == 0) {
          bVar25 = false;
          bVar23 = bVar20;
          bVar20 = bVar26;
          goto LAB_00404038;
        }
        bVar23 = false;
        goto LAB_0040404f;
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
LAB_00404612:
        bVar24 = false;
        bVar23 = bVar20;
        bVar20 = bVar25;
        goto LAB_00404051;
      case 0x27:
        bVar20 = false;
        goto switchD_0040446e_caseD_27;
      case 0x3f:
        bVar20 = false;
        goto switchD_0040446e_caseD_3f;
      case 0x5c:
        bVar20 = false;
        goto switchD_00403fe8_caseD_5c;
      case 0x7b:
      case 0x7d:
        bVar20 = false;
        goto switchD_0040446e_caseD_7b;
      }
      bVar25 = false;
      bVar23 = false;
      goto joined_r0x00404247;
    }
    if ((param_4 == 0xffffffffffffffff) && (1 < local_a0)) {
      param_4 = strlen(param_3);
    }
    if ((param_4 < uVar22 + local_a0) || (iVar7 = memcmp(__s1,local_78,local_a0), iVar7 != 0))
    goto LAB_004045f0;
    if (!local_5c) {
      uVar19 = (ulong)*__s1;
      bVar25 = bVar20;
      switch(uVar19) {
      case 0:
        goto switchD_00403fe8_caseD_0;
      default:
        goto switchD_0040446e_caseD_1;
      case 7:
        bVar17 = 0x61;
        goto LAB_00404310;
      case 8:
        bVar25 = false;
        bVar23 = false;
        bVar17 = 0x62;
        break;
      case 9:
        goto switchD_00404602_caseD_9;
      case 10:
        goto switchD_00404602_caseD_a;
      case 0xb:
        goto switchD_00404602_caseD_b;
      case 0xc:
        goto switchD_00404602_caseD_c;
      case 0xd:
        goto switchD_00403fe8_caseD_d;
      case 0x20:
        goto LAB_0040464a;
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
        goto switchD_00403fe8_caseD_21;
      case 0x23:
      case 0x7e:
        bVar26 = bVar20;
        goto LAB_0040462a;
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
        goto LAB_00404612;
      case 0x27:
        goto switchD_0040446e_caseD_27;
      case 0x3f:
        goto switchD_0040446e_caseD_3f;
      case 0x5c:
        goto switchD_00403fe8_caseD_5c;
      case 0x7b:
      case 0x7d:
        goto switchD_0040446e_caseD_7b;
      }
      goto LAB_00404092;
    }
    goto LAB_0040426a;
  }
  uVar19 = (ulong)*__s1;
  switch(uVar19) {
  case 0:
    if (bVar6) {
switchD_00404602_caseD_0:
      if (!local_5c) {
        bVar20 = false;
switchD_00403fe8_caseD_0:
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
            goto LAB_00404148;
          }
LAB_0040438a:
          param_1[uVar16] = 0x5c;
          uVar15 = uVar16;
        }
        else if (uVar15 < uVar9) goto LAB_0040438a;
        uVar16 = uVar15 + 1;
        bVar24 = bVar23;
        if (param_5 == 2) {
          bVar17 = 0x30;
          bVar23 = false;
          bVar4 = bVar3;
          goto LAB_00404148;
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
LAB_004043c9:
        bVar17 = (byte)uVar19;
        bVar23 = false;
        uVar15 = uVar16;
        bVar4 = bVar3;
        if ((bool)(bVar6 ^ 1U | bVar26)) goto LAB_00404148;
        goto LAB_00404051;
      }
      bVar26 = param_5 == 2;
      goto LAB_0040425c;
    }
    if ((param_6 & 1) == 0) {
      bVar25 = param_5 == 2;
      uVar19 = 0;
      bVar23 = false;
      bVar20 = false;
      goto LAB_00404038;
    }
    uVar22 = uVar22 + 1;
    goto LAB_00403ef8;
  default:
switchD_0040446e_caseD_1:
    bVar25 = bVar6;
    if (sVar8 != 1) {
      local_40[0] = (mbstate_t)0x0;
      if (param_4 == 0xffffffffffffffff) {
        param_4 = strlen(param_3);
      }
      uVar21 = 0;
      do {
        uVar1 = uVar22 + uVar21;
        lVar11 = FUN_00409d10(&local_44,param_3 + uVar1,param_4 - uVar1,local_40);
        if (lVar11 == 0) break;
        if (lVar11 == -1) {
          bVar23 = false;
          goto LAB_00404d7a;
        }
        if (lVar11 == -2) {
          if ((param_4 <= uVar1) || (param_3[uVar1] == '\0')) goto LAB_00404eb7;
          goto LAB_00404ea7;
        }
        if (((param_5 == 2) && (local_5c)) && (lVar11 != 1)) {
          pcVar12 = param_3 + uVar1 + 1;
          do {
            if (((byte)(*pcVar12 + 0xa5U) < 0x22) &&
               ((1L << (*pcVar12 + 0xa5U & 0x3f) & 0x20000002bU) != 0)) {
              param_5 = 2;
              goto LAB_0040425c;
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
      goto LAB_00404d7a;
    }
    ppuVar10 = __ctype_b_loc();
    uVar21 = 1;
    bVar25 = ((*ppuVar10)[uVar19] & 0x4000) == 0;
    bVar23 = !bVar25;
    bVar25 = (bool)(bVar25 & bVar6);
    goto LAB_00404444;
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
    goto LAB_00404482;
  case 10:
    uVar19 = 10;
    bVar13 = 0x6e;
    goto LAB_00404482;
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
LAB_00404482:
    bVar25 = param_5 == 2;
    bVar20 = (bool)(local_5c & bVar25);
    if (bVar20) {
LAB_0040449a:
      param_5 = 2;
      goto LAB_0040425c;
    }
    break;
  case 0x20:
    uVar19 = 0x20;
    goto LAB_00404026;
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
LAB_00404026:
    bVar25 = param_5 == 2;
    if ((local_5c) && (bVar25)) goto LAB_0040449a;
    goto LAB_00404038;
  case 0x23:
  case 0x7e:
LAB_0040401d:
    bVar25 = param_5 == 2;
    if (uVar22 == 0) goto LAB_00404026;
    goto LAB_0040422b;
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
    goto switchD_0040446e_caseD_25;
  case 0x27:
switchD_0040446e_caseD_27:
    bVar5 = bVar23;
    if (param_5 != 2) {
      bVar25 = false;
      uVar19 = 0x27;
      goto LAB_00404038;
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
      goto LAB_00404148;
    }
    goto LAB_0040425c;
  case 0x3f:
switchD_0040446e_caseD_3f:
    if (param_5 == 2) {
      if (!local_5c) {
        bVar17 = 0x3f;
        bVar24 = false;
        bVar23 = false;
        goto LAB_00404148;
      }
      goto LAB_0040425c;
    }
    if (param_5 != 5) {
      bVar25 = param_5 == 2;
      uVar19 = 0x3f;
      bVar23 = false;
      goto LAB_00404038;
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
        goto LAB_004043c9;
      }
      goto LAB_0040426a;
    }
    bVar25 = false;
    uVar19 = 0x3f;
    bVar23 = false;
    goto LAB_00404038;
  case 0x5c:
    if (param_5 != 2) {
switchD_00403fe8_caseD_5c:
      uVar19 = 0x5c;
      bVar17 = 0x5c;
      bVar13 = 0x5c;
      bVar25 = (bool)(bVar6 & local_5c & local_a0 != 0);
      if (!bVar25) break;
      uVar22 = uVar22 + 1;
      bVar23 = false;
      goto LAB_00404164;
    }
    if (local_5c) goto LAB_0040425c;
    uVar22 = uVar22 + 1;
    bVar23 = false;
    bVar17 = 0x5c;
    goto LAB_00404164;
  case 0x7b:
  case 0x7d:
switchD_0040446e_caseD_7b:
    bVar24 = param_4 != 1;
    if (param_4 == 0xffffffffffffffff) {
      bVar24 = param_3[1] != '\0';
    }
    bVar25 = param_5 == 2;
    if (!bVar24) goto LAB_0040401d;
    goto LAB_0040422b;
  }
LAB_00404220:
  if (!bVar6) {
LAB_0040422b:
    bVar23 = false;
    goto LAB_00404038;
  }
  bVar23 = false;
  bVar17 = bVar13;
  goto joined_r0x00404247;
LAB_00404678:
  if ((uVar15 == 0) && ((bool)(local_5c & param_5 == 2))) {
    param_5 = 2;
LAB_0040425c:
    if (bVar26) {
      param_5 = 4;
    }
LAB_0040426a:
    uVar9 = FUN_00403e50(param_1,uVar9,param_3,param_4,param_5,param_6 & 0xfffffffd,0,param_8,
                         param_9);
    return uVar9;
  }
  bVar26 = (bool)(param_5 == 2 & (local_5c ^ 1U));
  bVar23 = (bool)(local_5c ^ 1U);
  if ((!bVar26) || (bVar23 = bVar26, !bVar5)) {
LAB_00404f4d:
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
    uVar9 = FUN_00403e50(param_1,local_70,param_3,param_4,5,param_6,param_7,param_8,param_9);
    return uVar9;
  }
  local_5b = uVar9 == 0 && local_70 != 0;
  param_2 = local_70;
  bVar23 = bVar5;
  if (uVar9 != 0 || local_70 == 0) goto LAB_00404f4d;
LAB_004046d6:
  *param_1 = 0x27;
  param_5 = 2;
  uVar15 = 1;
  local_78 = "\'";
  local_a0 = 1;
  local_5c = false;
  uVar9 = param_2;
  goto LAB_00403ee8;
  while (__s1[uVar21] != 0) {
LAB_00404ea7:
    uVar21 = uVar21 + 1;
    if (param_4 <= uVar22 + uVar21) break;
  }
LAB_00404eb7:
  bVar23 = false;
LAB_00404d7a:
  if (1 < uVar21) {
LAB_0040493e:
    bVar26 = false;
    uVar21 = uVar21 + uVar22;
    uVar16 = uVar22;
    do {
      bVar17 = (byte)uVar19;
      if (bVar25) {
        bVar26 = param_5 == 2;
        if (local_5c) goto LAB_0040425c;
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
        if (uVar21 <= uVar22) goto LAB_004040dd;
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
        if (uVar21 <= uVar22) goto LAB_00404164;
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
LAB_00404444:
  if (bVar25) {
    bVar23 = false;
    bVar25 = bVar6;
    goto LAB_0040493e;
  }
switchD_0040446e_caseD_25:
  bVar25 = param_5 == 2;
LAB_00404038:
  bVar17 = (byte)uVar19;
  bVar24 = (bool)((bVar6 ^ 1U | bVar25) ^ 1 | local_5c);
  bVar26 = bVar20;
  if (bVar24) {
LAB_0040404f:
    bVar24 = false;
    bVar20 = bVar26;
LAB_00404051:
    bVar17 = (byte)uVar19;
    uVar16 = uVar15;
    bVar4 = bVar3;
    if ((param_7 == 0) || ((*(uint *)(param_7 + (uVar19 >> 5) * 4) >> (bVar17 & 0x1f) & 1) == 0))
    goto LAB_00404148;
    bVar25 = param_5 == 2;
  }
  else {
LAB_00404148:
    bVar25 = param_5 == 2;
    uVar15 = uVar16;
    bVar3 = bVar4;
    if (!bVar20) {
      uVar22 = uVar22 + 1;
      bVar3 = (bool)((bVar24 ^ 1U) & bVar4);
LAB_00404164:
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
      goto LAB_004040dd;
    }
  }
joined_r0x00404247:
  if (local_5c) {
LAB_00404258:
    bVar26 = (bool)(bVar6 & bVar25);
    goto LAB_0040425c;
  }
LAB_00404092:
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
LAB_004040cb:
  if (uVar15 < uVar9) {
    param_1[uVar15] = 0x5c;
  }
  uVar15 = uVar15 + 1;
  uVar22 = uVar22 + 1;
  bVar4 = bVar3;
LAB_004040dd:
  bVar3 = bVar4;
  if (uVar15 < uVar9) {
    param_1[uVar15] = bVar17;
  }
  uVar15 = uVar15 + 1;
  if (!bVar23) {
    bVar2 = false;
  }
  goto LAB_00403ef8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00405080(int param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

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
  puVar8 = (undefined4 *)PTR_DAT_00612318;
  if (DAT_00612330 <= param_1) {
    if (param_1 == 0x7fffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_00406510();
    }
    if (PTR_DAT_00612318 == &DAT_00612320) {
      puVar8 = (undefined4 *)FUN_00406320(0);
      uVar6 = PTR_DAT_00612328._4_4_;
      uVar5 = PTR_DAT_00612328._0_4_;
      uVar3 = _UNK_00612324;
      PTR_DAT_00612318 = (undefined *)puVar8;
      *puVar8 = _DAT_00612320;
      puVar8[1] = uVar3;
      puVar8[2] = uVar5;
      puVar8[3] = uVar6;
    }
    else {
      puVar8 = (undefined4 *)FUN_00406320(PTR_DAT_00612318);
      PTR_DAT_00612318 = (undefined *)puVar8;
    }
    memset(puVar8 + (long)DAT_00612330 * 4,0,(long)((param_1 + 1) - DAT_00612330) << 4);
    DAT_00612330 = param_1 + 1;
  }
  uVar2 = param_4[1];
  puVar10 = (ulong *)(puVar8 + (long)param_1 * 4);
  uVar4 = *puVar10;
  __ptr = (undefined *)puVar10[1];
  uVar9 = FUN_00403e50(__ptr,uVar4,param_2,param_3,*param_4,uVar2 | 1,param_4 + 2,
                       *(undefined8 *)(param_4 + 10),*(undefined8 *)(param_4 + 0xc));
  if (uVar4 <= uVar9) {
    uVar9 = uVar9 + 1;
    *puVar10 = uVar9;
    if (__ptr != &DAT_006123c0) {
      free(__ptr);
    }
    __ptr = (undefined *)FUN_004062c0(uVar9);
    uVar3 = *param_4;
    puVar10[1] = (ulong)__ptr;
    FUN_00403e50(__ptr,uVar9,param_2,param_3,uVar3,uVar2 | 1,param_4 + 2,
                 *(undefined8 *)(param_4 + 10),*(undefined8 *)(param_4 + 0xc));
  }
  *piVar7 = iVar1;
  return __ptr;
}


void FUN_00405220(undefined *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_006124c0;
  }
  FUN_004064c0(param_1,0x38);
  *piVar2 = iVar1;
  return;
}


undefined4 FUN_00405260(undefined4 *param_1)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)&DAT_006124c0;
  }
  return *param_1;
}


void FUN_00405270(undefined4 *param_1,undefined4 param_2)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)&DAT_006124c0;
  }
  *param_1 = param_2;
  return;
}


uint FUN_00405280(undefined *param_1,byte param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_006124c0;
  }
  uVar1 = *(uint *)(param_1 + (ulong)(param_2 >> 5) * 4 + 8);
  uVar2 = uVar1 >> (param_2 & 0x1f);
  *(uint *)(param_1 + (ulong)(param_2 >> 5) * 4 + 8) =
       ((param_3 ^ uVar2) & 1) << (param_2 & 0x1f) ^ uVar1;
  return uVar2 & 1;
}


undefined4 FUN_004052c0(undefined *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_006124c0;
  }
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_1 + 4) = param_2;
  return uVar1;
}


void FUN_004052e0(undefined4 *param_1,long param_2,long param_3)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)&DAT_006124c0;
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


void FUN_00405310(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 *param_5)

{
  int iVar1;
  int *piVar2;
  
  if (param_5 == (undefined4 *)0x0) {
    param_5 = (undefined4 *)&DAT_006124c0;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  FUN_00403e50(param_1,param_2,param_3,param_4,*param_5,param_5[1],param_5 + 2,
               *(undefined8 *)(param_5 + 10),*(undefined8 *)(param_5 + 0xc));
  *piVar2 = iVar1;
  return;
}


undefined8 FUN_00405390(undefined8 param_1,undefined8 param_2,long *param_3,undefined4 *param_4)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  
  if (param_4 == (undefined4 *)0x0) {
    param_4 = (undefined4 *)&DAT_006124c0;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  uVar5 = (uint)(param_3 == (long *)0x0) | param_4[1];
  lVar3 = FUN_00403e50(0,0,param_1,param_2,*param_4,uVar5,param_4 + 2,*(undefined8 *)(param_4 + 10),
                       *(undefined8 *)(param_4 + 0xc));
  uVar4 = FUN_004062c0(lVar3 + 1);
  FUN_00403e50(uVar4,lVar3 + 1,param_1,param_2,*param_4,uVar5,param_4 + 2,
               *(undefined8 *)(param_4 + 10),*(undefined8 *)(param_4 + 0xc));
  *piVar2 = iVar1;
  if (param_3 != (long *)0x0) {
    *param_3 = lVar3;
  }
  return uVar4;
}


void FUN_00405480(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00405390(param_1,param_2,0,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405490(void)

{
  void **ppvVar1;
  void *__ptr;
  undefined *__ptr_00;
  void **ppvVar2;
  
  __ptr_00 = PTR_DAT_00612318;
  if (1 < DAT_00612330) {
    ppvVar2 = (void **)(PTR_DAT_00612318 + 0x18);
    ppvVar1 = (void **)(PTR_DAT_00612318 + (ulong)(DAT_00612330 - 2) * 0x10 + 0x28);
    do {
      __ptr = *ppvVar2;
      ppvVar2 = ppvVar2 + 2;
      free(__ptr);
    } while (ppvVar2 != ppvVar1);
  }
  if (*(undefined **)(__ptr_00 + 8) != &DAT_006123c0) {
    free(*(undefined **)(__ptr_00 + 8));
    _DAT_00612320 = 0x100;
    PTR_DAT_00612328 = &DAT_006123c0;
  }
  if (__ptr_00 != &DAT_00612320) {
    free(__ptr_00);
    PTR_DAT_00612318 = &DAT_00612320;
  }
  DAT_00612330 = 1;
  return;
}


void FUN_00405530(undefined8 param_1,undefined8 param_2)

{
  FUN_00405080(param_1,param_2,0xffffffffffffffff,&DAT_006124c0);
  return;
}


void FUN_00405550(void)

{
  FUN_00405080();
  return;
}


void FUN_00405560(undefined8 param_1)

{
  FUN_00405080(0,param_1,0xffffffffffffffff,&DAT_006124c0);
  return;
}


void FUN_00405580(undefined8 param_1,undefined8 param_2)

{
  FUN_00405080(0,param_1,param_2,&DAT_006124c0);
  return;
}


void FUN_004055a0(undefined8 param_1,int param_2,undefined8 param_3)

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
    FUN_00405080(param_1,param_3,0xffffffffffffffff,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00405610(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

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
    FUN_00405080(param_1,param_3,param_4,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00405680(undefined4 param_1,undefined8 param_2)

{
  FUN_004055a0(0,param_1,param_2);
  return;
}


void FUN_00405690(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00405610(0,param_1,param_2,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004056a0(undefined8 param_1,undefined8 param_2,byte param_3)

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
  
  local_18 = DAT_006124f0;
  local_48 = _DAT_006124c0;
  uStack_40 = uRam00000000006124c8;
  local_38 = _DAT_006124d0;
  uStack_30 = uRam00000000006124d8;
  puVar1 = (uint *)((long)&uStack_40 + (ulong)(param_3 >> 5) * 4);
  local_28 = _DAT_006124e0;
  uStack_20 = uRam00000000006124e8;
  uVar2 = *puVar1;
  *puVar1 = (~(uVar2 >> (param_3 & 0x1f)) & 1) << (param_3 & 0x1f) ^ uVar2;
  FUN_00405080(0,param_1,param_2,&local_48);
  return;
}


void FUN_00405710(undefined8 param_1,char param_2)

{
  FUN_004056a0(param_1,0xffffffffffffffff,(int)param_2);
  return;
}


void FUN_00405720(undefined8 param_1)

{
  FUN_004056a0(param_1,0xffffffffffffffff,0x3a);
  return;
}


void FUN_00405740(undefined8 param_1,undefined8 param_2)

{
  FUN_004056a0(param_1,param_2,0x3a);
  return;
}


void FUN_00405750(undefined8 param_1,int param_2,undefined8 param_3)

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
    FUN_00405080(param_1,param_3,0xffffffffffffffff,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004057c0(undefined8 param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5
                 )

{
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  long lStack_20;
  long local_18;
  
  uStack_40 = uRam00000000006124c8;
  local_38 = _DAT_006124d0;
  uStack_30 = uRam00000000006124d8;
  local_28 = _DAT_006124e0;
  lStack_20 = uRam00000000006124e8;
  local_18 = DAT_006124f0;
  local_48 = CONCAT44((int)((ulong)_DAT_006124c0 >> 0x20),10);
  if ((param_2 != 0) && (param_3 != 0)) {
    lStack_20 = param_2;
    local_18 = param_3;
    FUN_00405080(param_1,param_4,param_5,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00405830(void)

{
  FUN_004057c0();
  return;
}


void FUN_00405840(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_004057c0(0,param_1,param_2,param_3,0xffffffffffffffff);
  return;
}


void FUN_00405860(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_004057c0(0,param_1,param_2,param_3,param_4);
  return;
}


void FUN_00405880(void)

{
  FUN_00405080();
  return;
}


void FUN_00405890(undefined8 param_1,undefined8 param_2)

{
  FUN_00405080(0,param_1,param_2,&DAT_006122e0);
  return;
}


void FUN_004058b0(undefined8 param_1,undefined8 param_2)

{
  FUN_00405080(param_1,param_2,0xffffffffffffffff,&DAT_006122e0);
  return;
}


void FUN_004058d0(undefined8 param_1)

{
  FUN_00405080(0,param_1,0xffffffffffffffff,&DAT_006122e0);
  return;
}


__ino_t * FUN_004058f0(__ino_t *param_1)

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


undefined8
FUN_00405940(char *param_1,long param_2,__uid_t *param_3,__gid_t *param_4,char **param_5,
            char **param_6)

{
  int iVar1;
  group *pgVar2;
  char *pcVar3;
  char *__name;
  passwd *ppVar4;
  void *__ptr;
  undefined8 uVar5;
  char *pcVar6;
  long lVar7;
  __gid_t __gid;
  bool bVar8;
  __uid_t local_6c;
  ulong local_58 [5];
  
  __gid = 0xffffffff;
  local_6c = *param_3;
  if (param_4 != (__gid_t *)0x0) {
    __gid = *param_4;
  }
  if (param_5 != (char **)0x0) {
    *param_5 = (char *)0x0;
  }
  if (param_6 != (char **)0x0) {
    *param_6 = (char *)0x0;
  }
  if (param_2 == 0) {
    __name = (char *)0x0;
    pcVar3 = (char *)0x0;
    if (*param_1 == '\0') goto LAB_004059ef;
    __name = (char *)FUN_004064f0();
LAB_00405b38:
    if (__name == (char *)0x0) {
LAB_00405b9a:
      pcVar3 = (char *)0x0;
      goto LAB_004059ef;
    }
    pcVar3 = (char *)0x0;
    bVar8 = param_2 != 0;
    if (*__name == '+') {
LAB_00405b56:
      if (bVar8) {
        endpwent();
        pcVar6 = "invalid spec";
        __ptr = (void *)0x0;
        goto LAB_00405b67;
      }
      iVar1 = FUN_004065d0(__name,0,10,local_58,"");
      if ((iVar1 != 0) || (local_6c = (__uid_t)local_58[0], 0xfffffffe < local_58[0])) {
        endpwent();
        pcVar6 = "invalid user";
        __ptr = (void *)0x0;
        goto LAB_00405b67;
      }
      endpwent();
      goto joined_r0x00405c11;
    }
LAB_00405a8a:
    ppVar4 = getpwnam(__name);
    if (ppVar4 == (passwd *)0x0) goto LAB_00405b56;
    local_6c = ppVar4->pw_uid;
    if (bVar8) {
      __gid = ppVar4->pw_gid;
      pgVar2 = getgrgid(__gid);
      if (pgVar2 == (group *)0x0) {
        pcVar3 = (char *)FUN_00403c60(__gid,local_58);
      }
      else {
        pcVar3 = pgVar2->gr_name;
      }
      pcVar3 = (char *)FUN_004064f0(pcVar3);
      endgrent();
      endpwent();
      goto LAB_004059ef;
    }
    endpwent();
    if (pcVar3 == (char *)0x0) goto LAB_004059ef;
    if (*pcVar3 != '+') goto LAB_004059ca;
    goto LAB_00405acb;
  }
  lVar7 = param_2 - (long)param_1;
  if (lVar7 != 0) {
    __name = (char *)FUN_004064c0(param_1,lVar7 + 1);
    __name[lVar7] = '\0';
    if (*(char *)(param_2 + 1) == '\0') goto LAB_00405b38;
    pcVar3 = (char *)(param_2 + 1);
    if (__name == (char *)0x0) goto LAB_004059b1;
    bVar8 = pcVar3 == (char *)0x0 && param_2 != 0;
    if (*__name != '+') goto LAB_00405a8a;
    goto LAB_00405b56;
  }
  if (*(char *)(param_2 + 1) == '\0') {
    __name = (char *)0x0;
    goto LAB_00405b9a;
  }
LAB_004059b1:
  pcVar3 = (char *)(param_2 + 1);
  __name = (char *)0x0;
joined_r0x00405c11:
  if (pcVar3 == (char *)0x0) goto LAB_004059ef;
  if (*pcVar3 == '+') {
LAB_00405acb:
    iVar1 = FUN_004065d0(pcVar3,0,10,local_58,"");
    if ((iVar1 != 0) || (0xfffffffe < local_58[0])) {
      endgrent();
      pcVar6 = "invalid group";
      __ptr = (void *)FUN_004064f0(pcVar3);
LAB_00405b67:
      free(__name);
      free(__ptr);
      uVar5 = dcgettext(0,pcVar6,5);
      return uVar5;
    }
  }
  else {
LAB_004059ca:
    pgVar2 = getgrnam(pcVar3);
    if (pgVar2 == (group *)0x0) goto LAB_00405acb;
    local_58[0] = (ulong)pgVar2->gr_gid;
  }
  __gid = (__gid_t)local_58[0];
  endgrent();
  pcVar3 = (char *)FUN_004064f0(pcVar3);
LAB_004059ef:
  *param_3 = local_6c;
  if (param_4 != (__gid_t *)0x0) {
    *param_4 = __gid;
  }
  if (param_5 != (char **)0x0) {
    *param_5 = __name;
    __name = (char *)0x0;
  }
  if (param_6 != (char **)0x0) {
    *param_6 = pcVar3;
    pcVar3 = (char *)0x0;
  }
  free(__name);
  free(pcVar3);
  return 0;
}


long FUN_00405c50(char *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                 undefined8 param_5)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  
  if (param_3 == 0) {
    lVar2 = FUN_00405940(param_1,0,param_2,0,param_4,param_5);
    return lVar2;
  }
  pcVar1 = strchr(param_1,0x3a);
  lVar2 = FUN_00405940(param_1,pcVar1,param_2,param_3,param_4,param_5);
  if (pcVar1 != (char *)0x0) {
    return lVar2;
  }
  if (lVar2 != 0) {
    pcVar1 = strchr(param_1,0x2e);
    if (pcVar1 == (char *)0x0) {
      return lVar2;
    }
    lVar3 = FUN_00405940(param_1,pcVar1,param_2,param_3,param_4,param_5);
    if (lVar3 != 0) {
      return lVar2;
    }
  }
  return 0;
}


undefined8
FUN_00405d20(FILE *param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5,
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
  uVar1 = dcgettext(0,&DAT_0040e6f3,5);
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
    goto LAB_00405f9c;
  case 5:
    uVar1 = param_5[3];
    uVar4 = param_5[2];
    uVar5 = param_5[1];
    uVar6 = *param_5;
    uVar7 = dcgettext(0,"Written by %s, %s, %s,\n%s, and %s.\n",5);
LAB_00405f9c:
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
    goto LAB_00406039;
  case 7:
    uVar1 = param_5[2];
    uVar4 = param_5[5];
    uVar5 = param_5[4];
    uVar6 = param_5[3];
    local_58 = param_5[1];
    uVar7 = *param_5;
    uVar3 = dcgettext(0,"Written by %s, %s, %s,\n%s, %s, %s, and %s.\n",5);
LAB_00406039:
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
    goto LAB_00405e1a;
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
LAB_00405e1a:
  uVar1 = __fprintf_chk(param_1,1,uVar3,uVar7,local_50,local_58,uVar6,uVar5,uVar4,uVar1,local_48);
  return uVar1;
}


void FUN_00406100(void)

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
  FUN_00405d20();
  return;
}


void FUN_00406120(void)

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
  FUN_00405d20();
  return;
}


void FUN_00406180(void)

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
  FUN_00405d20();
  return;
}


void FUN_00406240(void)

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


void FUN_004062c0(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00406510();
  }
  return;
}


void FUN_004062e0(ulong param_1,ulong param_2)

{
  if ((-1 < SUB168(ZEXT816(param_1) * ZEXT816(param_2),0)) &&
     (SUB168(ZEXT816(param_1) * ZEXT816(param_2) >> 0x40,0) == 0)) {
    FUN_004062c0();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00406510();
}


void thunk_FUN_004062c0(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00406510();
  }
  return;
}


void * FUN_00406320(void *param_1,size_t param_2)

{
  void *pvVar1;
  
  if ((param_2 == 0) && (param_1 != (void *)0x0)) {
    free(param_1);
    return (void *)0x0;
  }
  pvVar1 = realloc(param_1,param_2);
  if ((pvVar1 == (void *)0x0) && (param_2 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00406510();
  }
  return pvVar1;
}


void FUN_00406360(undefined8 param_1,ulong param_2,ulong param_3)

{
  if ((-1 < SUB168(ZEXT816(param_2) * ZEXT816(param_3),0)) &&
     (SUB168(ZEXT816(param_2) * ZEXT816(param_3) >> 0x40,0) == 0)) {
    FUN_00406320();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00406510();
}


void FUN_00406390(long param_1,ulong *param_2,ulong param_3)

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
    if ((SUB168(ZEXT816(uVar2) * ZEXT816(param_3),0) < 0) || (uVar3 != 0)) goto LAB_004063eb;
  }
  else {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x5555555555555554);
    uVar3 = SUB168(auVar1 % ZEXT816(param_3),0);
    if (SUB168(auVar1 / ZEXT816(param_3),0) <= uVar2) {
LAB_004063eb:
                    /* WARNING: Subroutine does not return */
      FUN_00406510(param_1,param_2,uVar3);
    }
    uVar2 = (uVar2 >> 1) + 1 + uVar2;
  }
  *param_2 = uVar2;
  FUN_00406320(param_1,uVar2 * param_3);
  return;
}


void FUN_00406420(long param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (param_1 == 0) {
    if (uVar1 == 0) {
      *param_2 = 0x80;
      FUN_00406320(0,0x80);
      return;
    }
    if ((long)uVar1 < 0) goto LAB_0040646a;
  }
  else {
    if (0x5555555555555553 < uVar1) {
LAB_0040646a:
                    /* WARNING: Subroutine does not return */
      FUN_00406510();
    }
    uVar1 = (uVar1 >> 1) + 1 + uVar1;
  }
  *param_2 = uVar1;
  FUN_00406320(param_1,uVar1);
  return;
}


void FUN_00406470(size_t param_1)

{
  void *__s;
  
  __s = (void *)FUN_004062c0();
  memset(__s,0,param_1);
  return;
}


void FUN_00406490(size_t param_1,ulong param_2)

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
  FUN_00406510();
}


void FUN_004064c0(void *param_1,size_t param_2)

{
  void *__dest;
  
  __dest = (void *)FUN_004062c0(param_2);
  memcpy(__dest,param_1,param_2);
  return;
}


void FUN_004064f0(char *param_1)

{
  void *__dest;
  size_t sVar1;
  
  sVar1 = strlen(param_1);
  __dest = (void *)FUN_004062c0(sVar1 + 1);
  memcpy(__dest,param_1,sVar1 + 1);
  return;
}


void FUN_00406510(void)

{
  undefined8 uVar1;
  
  uVar1 = dcgettext(0,"memory exhausted",5);
  error(DAT_006122d8,0,"%s",uVar1);
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00406550(undefined8 param_1,uint param_2)

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
    FUN_00406510();
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("errno != EINVAL","lib/xfts.c",0x29,"xfts_open");
}


bool FUN_004065a0(long param_1,long param_2)

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


ulong FUN_004065d0(byte *param_1,byte **param_2,uint param_3,ulong *param_4,char *param_5)

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
    if ((param_5 == (char *)0x0) || (bVar12 = *pbVar5, bVar12 == 0)) goto LAB_00406670;
    pcVar7 = strchr(param_5,(int)(char)bVar12);
    if (pcVar7 == (char *)0x0) goto switchD_0040674c_caseD_1;
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
        goto LAB_0040673a;
      }
      if (bVar1 != 0x42) {
                    /* WARNING: Could not recover jumptable at 0x00406729. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar6 = (*(code *)(&PTR_LAB_0040eae0)[bVar8])();
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
LAB_0040673a:
  iVar10 = (int)uVar11;
  switch(bVar12 - 0x42 & 0xff) {
  case 0:
    if (uVar6 >> 0x36 == 0) {
      uVar6 = uVar6 << 10;
      break;
    }
    goto LAB_004067a7;
  default:
switchD_0040674c_caseD_1:
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
    goto LAB_00406834;
  case 5:
  case 0x25:
    uVar11 = (ulong)iVar10;
    if (((SUB168(ZEXT816(uVar6) * ZEXT816(uVar11) >> 0x40,0) != 0) ||
        (auVar2 = (ZEXT816(uVar6) * ZEXT816(uVar11) & (undefined  [16])0xffffffffffffffff) *
                  ZEXT816(uVar11), SUB168(auVar2 >> 0x40,0) != 0)) ||
       (auVar2 = (auVar2 & (undefined  [16])0xffffffffffffffff) * ZEXT816(uVar11),
       uVar6 = SUB168(auVar2,0), SUB168(auVar2 >> 0x40,0) != 0)) {
      uVar6 = 0xffffffffffffffff;
      uVar14 = 1;
    }
    break;
  case 9:
  case 0x29:
    auVar2 = ZEXT816(uVar6) * ZEXT816(uVar11);
    goto joined_r0x0040676c;
  case 0xb:
  case 0x2b:
    auVar2 = ZEXT816(uVar6) * ZEXT816((ulong)(long)iVar10);
    if (SUB168(auVar2 >> 0x40,0) != 0) goto LAB_004067a7;
    auVar2 = (auVar2 & (undefined  [16])0xffffffffffffffff) * ZEXT816((ulong)(long)iVar10);
joined_r0x0040676c:
    uVar6 = SUB168(auVar2,0);
    if (SUB168(auVar2 >> 0x40,0) != 0) {
LAB_004067a7:
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
    goto LAB_00406834;
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
    goto LAB_00406834;
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
    goto LAB_00406834;
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
LAB_00406834:
    uVar14 = (ulong)(uVar13 | uVar9);
    break;
  case 0x20:
    if (uVar6 >> 0x37 != 0) goto LAB_004067a7;
    uVar6 = uVar6 << 9;
    break;
  case 0x21:
    break;
  case 0x35:
    if ((long)uVar6 < 0) goto LAB_004067a7;
    uVar6 = uVar6 * 2;
  }
  *param_2 = pbVar5 + iVar15;
  if (pbVar5[iVar15] != 0) {
    uVar14 = (ulong)((uint)uVar14 | 2);
  }
LAB_00406670:
  *param_4 = uVar6;
  return uVar14;
}


ulong FUN_00406a00(uint param_1,char *param_2,uint param_3,__gid_t param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  int *piVar7;
  ulong *puVar8;
  ulong *puVar9;
  uint local_ff8 [1010];
  
  if ((param_5 & 0xfffffeff) != 0) {
    piVar7 = __errno_location();
    uVar2 = 0xffffffff;
    *piVar7 = 0x16;
    goto LAB_00406b3e;
  }
  puVar9 = (ulong *)(ulong)param_3;
  if ((param_1 == 0xffffff9c) || (*param_2 == '/')) {
    if (param_5 == 0x100) {
      uVar2 = lchown(param_2,param_3,param_4);
    }
    else {
      uVar2 = chown(param_2,param_3,param_4);
    }
    goto LAB_00406b3e;
  }
  puVar8 = (ulong *)(ulong)param_1;
  puVar5 = (uint *)FUN_00409d90(local_ff8,puVar8,param_2);
  if (puVar5 == (uint *)0x0) goto LAB_00406ad0;
  if (param_5 == 0x100) {
    uVar2 = lchown((char *)puVar5,param_3,param_4);
  }
  else {
    uVar2 = chown((char *)puVar5,param_3,param_4);
  }
  puVar6 = (uint *)__errno_location();
  uVar1 = *puVar6;
  if (puVar5 != local_ff8) {
    free(puVar5);
  }
  puVar8 = (ulong *)(ulong)uVar1;
  if (uVar2 != 0xffffffff) goto LAB_00406b3e;
  if (uVar1 < 0x27) {
    if ((0x4000102006U >> ((ulong)puVar8 & 0x3f) & 1) == 0) {
LAB_00406b81:
      *puVar6 = uVar1;
      goto LAB_00406b3e;
    }
  }
  else if (uVar1 != 0x5f) goto LAB_00406b81;
LAB_00406ad0:
  iVar3 = FUN_0040b990(local_ff8);
  if (iVar3 == 0) {
    if (((int)param_1 < 0) || (local_ff8[0] != param_1)) {
      iVar3 = fchdir(param_1);
      if (iVar3 == 0) {
        if (param_5 == 0x100) {
          uVar2 = lchown(param_2,param_3,param_4);
          puVar8 = puVar9;
        }
        else {
          uVar2 = chown(param_2,param_3,param_4);
          puVar8 = puVar9;
        }
        if (uVar2 == 0xffffffff) {
          piVar7 = __errno_location();
          iVar3 = *piVar7;
          iVar4 = FUN_0040b9e0(local_ff8);
          if (iVar4 == 0) {
            FUN_0040ba00(local_ff8);
            if (iVar3 != 0) {
              *piVar7 = iVar3;
            }
            goto LAB_00406b3e;
          }
        }
        else {
          iVar3 = FUN_0040b9e0(local_ff8);
          if (iVar3 == 0) {
            FUN_0040ba00(local_ff8);
            goto LAB_00406b3e;
          }
        }
        piVar7 = __errno_location();
        FUN_0040b910(*piVar7);
        goto LAB_00406c62;
      }
      piVar7 = __errno_location();
      uVar2 = 0xffffffff;
      iVar3 = *piVar7;
      FUN_0040ba00(local_ff8);
      *piVar7 = iVar3;
    }
    else {
      uVar2 = 0xffffffff;
      FUN_0040ba00(local_ff8);
      piVar7 = __errno_location();
      *piVar7 = 9;
    }
LAB_00406b3e:
    return (ulong)uVar2;
  }
LAB_00406c62:
  puVar5 = (uint *)__errno_location();
  puVar9 = (ulong *)(ulong)*puVar5;
  FUN_0040b8e0();
  if (puVar9[1] != puVar8[1]) {
    return 0;
  }
  return *puVar8 & 0xffffffffffffff00 | (ulong)(*puVar9 == *puVar8);
}


ulong FUN_00406c70(ulong *param_1,ulong *param_2)

{
  if (param_1[1] != param_2[1]) {
    return 0;
  }
  return *param_2 & 0xffffffffffffff00 | (ulong)(*param_1 == *param_2);
}


ulong FUN_00406c90(long param_1,ulong param_2)

{
  return *(ulong *)(param_1 + 8) % param_2;
}


ulong FUN_00406ca0(ulong *param_1,ulong param_2)

{
  return *param_1 % param_2;
}


ulong FUN_00406cb0(ulong *param_1,ulong *param_2)

{
  return *param_2 & 0xffffffffffffff00 | (ulong)(*param_1 == *param_2);
}


ulong FUN_00406cc0(long *param_1,long *param_2)

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


int FUN_00406cf0(long param_1,long param_2,char param_3)

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
LAB_00406d87:
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
    if (iVar1 == 0) goto LAB_00406d87;
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


long FUN_00406ea0(long param_1,long param_2,ulong param_3)

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
LAB_00406ef5:
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
      goto LAB_00406ef5;
    }
    plVar3 = *(long **)(param_1 + 0x10);
  }
  free(plVar3);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return param_2;
}


void * FUN_00406fa0(long param_1,void *param_2,size_t param_3)

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


void FUN_00407030(void *param_1)

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


void FUN_00407080(undefined8 param_1)

{
  char cVar1;
  int __fd;
  
  while( true ) {
    cVar1 = FUN_0040b2d0(param_1);
    if (cVar1 != '\0') break;
    __fd = FUN_0040b320(param_1);
    if (-1 < __fd) {
      close(__fd);
    }
  }
  return;
}


long FUN_004070c0(long param_1)

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
    lVar5 = FUN_0040a8f0(0xd,0,FUN_00406ca0,FUN_00406cb0,free);
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
  lVar3 = FUN_0040a680(lVar5,&local_98);
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
      puVar4 = (undefined8 *)FUN_0040b090(lVar5,__ptr);
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


bool FUN_004071e0(void)

{
  long lVar1;
  
  lVar1 = FUN_004070c0();
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


void FUN_00407250(long param_1,int param_2,char param_3)

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
    iVar1 = FUN_0040b2e0(param_1 + 0x60);
    if (-1 < iVar1) {
      close(iVar1);
      *(int *)(param_1 + 0x2c) = param_2;
      return;
    }
  }
  *(int *)(param_1 + 0x2c) = param_2;
  return;
}


uint FUN_004072c0(long param_1)

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
      FUN_00407250(param_1,0xffffff9c,1);
    }
  }
  else {
    uVar2 = 0;
  }
  FUN_00407080(param_1 + 0x60);
  return uVar2;
}


undefined8 FUN_00407320(void **param_1,size_t *param_2,long param_3)

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


ulong FUN_00407390(uint param_1,void **param_2)

{
  void *pvVar1;
  ulong uVar2;
  
  if ((param_1 & 0x102) == 0) {
    pvVar1 = malloc(0x20);
    *param_2 = pvVar1;
    uVar2 = 0;
    if (pvVar1 != (void *)0x0) {
      FUN_00409f20();
      return 1;
    }
  }
  else {
    pvVar1 = (void *)FUN_0040a8f0(0x1f,0,FUN_00406c90,FUN_00406c70,free);
    *param_2 = pvVar1;
    uVar2 = (ulong)pvVar1 & 0xffffffffffffff00 | (ulong)(pvVar1 != (void *)0x0);
  }
  return uVar2;
}


/* WARNING: Removing unreachable block (ram,0x00409fd8) */
/* WARNING: Removing unreachable block (ram,0x0040b968) */

void FUN_004073f0(int param_1,uint param_2,char *param_3)

{
  int iVar1;
  uint __oflag;
  
  __oflag = (param_2 & 0x10) << 0xd | (param_2 & 0x800) << 7 | 0x90900;
  if ((param_2 & 0x200) != 0) {
    iVar1 = openat(param_1,param_3,__oflag,0);
    FUN_0040ba20(iVar1);
    return;
  }
  iVar1 = open(param_3,__oflag,0);
  FUN_0040ba20(iVar1);
  return;
}


int FUN_00407440(long param_1,long param_2,int param_3,byte *param_4)

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
LAB_004074e0:
    if ((uVar9 & 4) != 0) {
LAB_00407550:
      if (((uVar9 & 0x200) != 0) && (-1 < param_3)) {
        close(param_3);
        return 0;
      }
      return 0;
    }
    if (param_3 < 0) {
      bVar2 = 0;
LAB_0040757e:
      iVar3 = FUN_004073f0(*(undefined4 *)(param_1 + 0x2c),uVar9,param_4);
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
    pbVar8 = &DAT_0040ee19;
    do {
      if (lVar6 == 0) break;
      lVar6 = lVar6 + -1;
      bVar10 = *pbVar7 < *pbVar8;
      bVar11 = *pbVar7 == *pbVar8;
      pbVar7 = pbVar7 + 1;
      pbVar8 = pbVar8 + 1;
    } while (bVar11);
    if ((!bVar10 && !bVar11) != bVar10) goto LAB_004074e0;
    if ((uVar9 & 4) != 0) goto LAB_00407550;
    if (param_3 < 0) {
      if ((uVar9 & 0x200) == 0) {
        bVar2 = 1;
      }
      else {
        bVar2 = FUN_0040b2d0(param_1 + 0x60);
        if (bVar2 == 0) {
          iVar3 = FUN_0040b320(param_1 + 0x60);
          if (-1 < iVar3) {
            bVar2 = 1;
            param_3 = iVar3;
            goto LAB_004074f2;
          }
          uVar9 = *(uint *)(param_1 + 0x48);
          bVar2 = 1;
        }
      }
      goto LAB_0040757e;
    }
    bVar2 = 1;
  }
LAB_004074f2:
  iVar4 = __fxstat(1,iVar3,&local_c8);
  if (iVar4 == 0) {
    if ((*(__dev_t *)(param_2 + 0x78) == local_c8.st_dev) &&
       (*(__ino_t *)(param_2 + 0x80) == local_c8.st_ino)) {
      if ((*(byte *)(param_1 + 0x49) & 2) != 0) {
        FUN_00407250(param_1,iVar3,bVar2 ^ 1);
        return 0;
      }
      iVar4 = fchdir(iVar3);
      goto LAB_00407533;
    }
    piVar5 = __errno_location();
    *piVar5 = 2;
  }
  iVar4 = -1;
LAB_00407533:
  if (param_3 < 0) {
    piVar5 = __errno_location();
    iVar1 = *piVar5;
    close(iVar3);
    *piVar5 = iVar1;
  }
  return iVar4;
}


undefined8 FUN_00407610(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *__ptr;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if ((param_1 & 0x102) == 0) {
    uVar3 = FUN_00409f30(*param_2,param_3 + 0xf);
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
    puVar2 = (undefined8 *)FUN_0040b090(uVar1,__ptr);
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


void FUN_004076c0(uint param_1,long **param_2,long param_3)

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
      if (plVar2[2] == 0) goto FUN_00402153;
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
  __ptr = (void *)FUN_0040b0d0(*param_2,&local_28);
  if (__ptr != (void *)0x0) {
    free(__ptr);
    return;
  }
FUN_00402153:
                    /* WARNING: Subroutine does not return */
  abort();
}


void * FUN_00407760(long *param_1,int param_2)

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
    iVar7 = FUN_0040b940(uVar22,*(undefined8 *)(lVar17 + 0x30),
                         (uVar21 & 0x800) << 7 | uVar18 | 0x90900);
    if (-1 < iVar7) {
      pDVar15 = fdopendir(iVar7);
      if (pDVar15 != (DIR *)0x0) {
        *(DIR **)(lVar17 + 0x18) = pDVar15;
        if (*(short *)(lVar17 + 0x70) == 0xb) {
          uVar6 = FUN_00406cf0(param_1,lVar17,0);
          *(undefined2 *)(lVar17 + 0x70) = uVar6;
        }
        else if ((*(uint *)(param_1 + 9) & 0x100) != 0) {
          FUN_004076c0(*(uint *)(param_1 + 9),param_1 + 0xb,lVar17);
          FUN_00406cf0(param_1,lVar17,0);
          cVar5 = FUN_00407610(*(undefined4 *)(param_1 + 9),param_1 + 0xb,lVar17);
          if (cVar5 == '\0') {
            piVar9 = __errno_location();
            *piVar9 = 0xc;
            return (void *)0x0;
          }
        }
        local_60 = (ulong)(-(uint)(param_1[8] == 0) & 0x186a1) - 1;
        if (param_2 == 2) {
LAB_00407f10:
          bVar23 = false;
          uVar21 = *(uint *)(param_1 + 9);
          goto LAB_004077b4;
        }
        if ((((*(uint *)(param_1 + 9) & 0x38) == 0x18) && (*(long *)(lVar17 + 0x88) == 2)) &&
           (iVar8 = FUN_004071e0(lVar17), iVar8 != 0)) {
          if (param_2 != 3) goto LAB_00407f10;
          bVar3 = false;
          bVar23 = true;
        }
        else {
          bVar23 = param_2 == 3;
          bVar3 = true;
        }
        if (((*(byte *)((long)param_1 + 0x49) & 2) == 0) ||
           (iVar7 = FUN_0040bde0(iVar7,0x406,3), -1 < iVar7)) {
          iVar8 = FUN_00407440(param_1,lVar17,iVar7,0);
          if (iVar8 == 0) goto LAB_004077ab;
          pDVar15 = *(DIR **)(lVar17 + 0x18);
          uVar19 = *(ushort *)(lVar17 + 0x72) | 1;
          if ((bVar23) && (bVar3)) goto LAB_00407c4d;
LAB_00407c62:
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
LAB_00407c4d:
            piVar9 = __errno_location();
            *(int *)(lVar17 + 0x40) = *piVar9;
            goto LAB_00407c62;
          }
          *(ushort *)(lVar17 + 0x72) = uVar19;
          closedir(pDVar15);
          uVar21 = *(uint *)(param_1 + 9);
        }
        *(undefined8 *)(lVar17 + 0x18) = 0;
        bVar23 = false;
        goto LAB_004077b4;
      }
      piVar9 = __errno_location();
      iVar8 = *piVar9;
      close(iVar7);
      *piVar9 = iVar8;
    }
    *(undefined8 *)(lVar17 + 0x18) = 0;
joined_r0x00407edf:
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
    goto joined_r0x00407edf;
  }
  if (param_1[8] == 0) {
    local_60 = 100000;
    uVar21 = *(uint *)(param_1 + 9);
    bVar23 = true;
  }
  else {
    local_60 = 0xffffffffffffffff;
LAB_004077ab:
    bVar23 = true;
    uVar21 = *(uint *)(param_1 + 9);
  }
LAB_004077b4:
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
      if (pDVar15 == (DIR *)0x0) goto joined_r0x00407d8b;
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
        goto joined_r0x00407d8b;
      }
    } while ((((*(byte *)(param_1 + 9) & 0x20) == 0) && (pdVar10->d_name[0] == '.')) &&
            ((uVar1 = uVar20, pdVar10->d_name[1] == '\0' ||
             (*(short *)(pdVar10->d_name + 1) == 0x2e))));
    sVar11 = strlen(pdVar10->d_name);
    pvVar12 = (void *)FUN_00406fa0(param_1,pdVar10->d_name,sVar11);
    if (pvVar12 == (void *)0x0) {
LAB_00407cc0:
      iVar7 = *piVar9;
      free(pvVar12);
      FUN_00407030(local_80);
      closedir(*(DIR **)(lVar17 + 0x18));
      *(undefined8 *)(lVar17 + 0x18) = 0;
      *(undefined2 *)(lVar17 + 0x70) = 7;
      *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) | 0x4000;
      *piVar9 = iVar7;
      return (void *)0x0;
    }
    if (local_78 <= sVar11) {
      lVar2 = param_1[4];
      cVar5 = FUN_00407320(param_1 + 4,param_1 + 6,local_50 + 2 + sVar11);
      if (cVar5 == '\0') goto LAB_00407cc0;
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
      FUN_00407030(local_80);
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
          *(undefined4 *)((long)pvVar12 + 0x90) = *(undefined4 *)(&DAT_0040ee20 + (ulong)uVar18 * 4)
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
          *(undefined4 *)((long)pvVar12 + 0x90) = *(undefined4 *)(&DAT_0040ee20 + (ulong)uVar18 * 4)
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
      uVar6 = FUN_00406cf0(param_1,pvVar12,0);
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
joined_r0x00407d8b:
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
        iVar7 = FUN_004072c0(param_1);
      }
      else {
        iVar7 = FUN_00407440(param_1,*(undefined8 *)(lVar17 + 8),0xffffffff,&DAT_0040ee19);
      }
      if (iVar7 != 0) {
        *(undefined2 *)(lVar17 + 0x70) = 7;
        *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) | 0x4000;
        FUN_00407030(local_80);
        return (void *)0x0;
      }
      goto LAB_00407e28;
    }
  }
  else {
LAB_00407e28:
    if (uVar20 == 0) {
      if (((param_2 == 3) && (*(short *)(lVar17 + 0x70) != 4)) && (*(short *)(lVar17 + 0x70) != 7))
      {
        *(undefined2 *)(lVar17 + 0x70) = 6;
      }
      FUN_00407030(local_80);
      return (void *)0x0;
    }
  }
  lVar16 = param_1[8];
  if (10000 < uVar20) {
    if (lVar16 != 0) goto LAB_00407de7;
    lVar17 = FUN_004070c0(lVar17);
    if ((lVar17 != 0x6969) && (lVar17 != 0x1021994)) {
      param_1[8] = (long)FUN_00406cc0;
      pvVar12 = (void *)FUN_00406ea0(param_1,local_80,uVar20);
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
LAB_00407de7:
  pvVar12 = (void *)FUN_00406ea0(param_1,local_80,uVar20);
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
  local_42 = FUN_00407320(__ptr + 4,__ptr + 6,uVar10);
  if (local_42 == 0) goto LAB_004083eb;
  pcVar11 = *param_1;
  if (pcVar11 == (char *)0x0) {
    local_50 = (void *)0x0;
    if (param_3 != 0) {
LAB_00408233:
      local_42 = (byte)(*(uint *)(__ptr + 9) >> 10) & 1;
      goto LAB_00408240;
    }
LAB_00408422:
    lVar7 = 0;
LAB_0040835c:
    lVar8 = FUN_00406fa0(__ptr,"",0);
    *__ptr = lVar8;
    if (lVar8 != 0) {
      *(long *)(lVar8 + 0x10) = lVar7;
      uVar1 = *(undefined4 *)(__ptr + 9);
      *(undefined2 *)(lVar8 + 0x70) = 9;
      cVar2 = FUN_00407390(uVar1,__ptr + 0xb);
      if (cVar2 != '\0') {
        if ((*(uint *)(__ptr + 9) & 0x204) == 0) {
          iVar4 = FUN_004073f0(*(undefined4 *)((long)__ptr + 0x2c),*(uint *)(__ptr + 9),
                               &DAT_0040ee1a);
          *(int *)(__ptr + 5) = iVar4;
          if (iVar4 < 0) {
            *(uint *)(__ptr + 9) = *(uint *)(__ptr + 9) | 4;
          }
        }
        FUN_0040b2b0(__ptr + 0xc,0xffffffff);
        return __ptr;
      }
    }
LAB_004083d0:
    FUN_00407030(lVar7);
    free(local_50);
  }
  else {
    local_50 = (void *)FUN_00406fa0(__ptr,"",0);
    if (local_50 != (void *)0x0) {
      pcVar11 = *param_1;
      *(undefined8 *)((long)local_50 + 0x58) = 0xffffffffffffffff;
      *(undefined8 *)((long)local_50 + 0x68) = 0xffffffffffffffff;
      if (param_3 != 0) goto LAB_00408233;
LAB_00408240:
      if (pcVar11 == (char *)0x0) goto LAB_00408422;
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
        lVar6 = FUN_00406fa0(__ptr,pcVar11,sVar5);
        lVar7 = lVar8;
        if (lVar6 == 0) goto LAB_004083d0;
        *(undefined8 *)(lVar6 + 0x58) = 0;
        *(void **)(lVar6 + 8) = local_50;
        *(long *)(lVar6 + 0x30) = lVar6 + 0x108;
        lVar7 = lVar6;
        if ((lVar8 == 0) || (local_42 == 0)) {
          uVar3 = FUN_00406cf0(__ptr,lVar6,0);
          *(undefined2 *)(lVar6 + 0x70) = uVar3;
          if (param_3 != 0) goto LAB_004082d8;
          *(undefined8 *)(lVar6 + 0x10) = 0;
          if (lVar8 != 0) goto LAB_00408470;
        }
        else {
          *(undefined8 *)(lVar6 + 0xa8) = 2;
          *(undefined2 *)(lVar6 + 0x70) = 0xb;
          if (param_3 == 0) {
            *(undefined8 *)(lVar6 + 0x10) = 0;
LAB_00408470:
            *(long *)(local_40 + 0x10) = lVar6;
            lVar7 = lVar8;
          }
          else {
LAB_004082d8:
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
        lVar7 = FUN_00406ea0(__ptr,lVar7,uVar10);
      }
      goto LAB_0040835c;
    }
  }
  free((void *)__ptr[4]);
LAB_004083eb:
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
        if (*(long *)((long)__ptr + 0x58) < 0) goto LAB_0040850b;
      }
      __ptr = *(void **)((long)__ptr_00 + 8);
      free(__ptr_00);
      lVar1 = *(long *)((long)__ptr + 0x58);
    }
LAB_0040850b:
    free(__ptr);
  }
  if (param_1[1] != (void *)0x0) {
    FUN_00407030();
  }
  free(param_1[2]);
  free(param_1[4]);
  if ((*(uint *)(param_1 + 9) & 0x200) == 0) {
    if ((*(uint *)(param_1 + 9) & 4) == 0) {
      iVar2 = fchdir(*(int *)(param_1 + 5));
      if (iVar2 == 0) {
        iVar2 = close(*(int *)(param_1 + 5));
        if (iVar2 == 0) goto LAB_00408542;
        piVar4 = __errno_location();
      }
      else {
        piVar4 = __errno_location();
        iVar2 = *piVar4;
        iVar3 = close(*(int *)(param_1 + 5));
        if ((iVar3 == 0) || (iVar2 != 0)) goto LAB_00408544;
      }
      iVar2 = *piVar4;
      goto LAB_00408544;
    }
  }
  else if ((-1 < *(int *)((long)param_1 + 0x2c)) &&
          (iVar2 = close(*(int *)((long)param_1 + 0x2c)), iVar2 != 0)) {
    piVar4 = __errno_location();
    iVar2 = *piVar4;
    goto LAB_00408544;
  }
LAB_00408542:
  iVar2 = 0;
LAB_00408544:
  FUN_00407080(param_1 + 0xc);
  if (param_1[10] != (void *)0x0) {
    FUN_0040ab30();
  }
  if ((*(uint *)(param_1 + 9) & 0x102) == 0) {
    free(param_1[0xb]);
  }
  else if (param_1[0xb] != (void *)0x0) {
    FUN_0040ab30();
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
    uVar6 = FUN_00406cf0(param_1,pvVar14,0);
    *(undefined2 *)((long)pvVar14 + 0x70) = uVar6;
    return pvVar14;
  }
  sVar2 = *(short *)((long)pvVar14 + 0x70);
  pvVar13 = pvVar14;
  if (sVar7 == 2) {
    if (1 < (ushort)(sVar2 - 0xcU)) {
      if (sVar2 == 1) goto LAB_00408797;
      goto LAB_004086c0;
    }
    sVar7 = FUN_00406cf0(param_1,pvVar14,1);
    *(short *)((long)pvVar14 + 0x70) = sVar7;
    if (sVar7 != 1) {
      *param_1 = pvVar14;
      if (sVar7 != 0xb) {
        return pvVar14;
      }
      goto LAB_00408a00;
    }
    if ((*(uint *)(param_1 + 9) & 4) == 0) {
      iVar8 = FUN_004073f0(*(undefined4 *)((long)param_1 + 0x2c),*(uint *)(param_1 + 9),
                           &DAT_0040ee1a);
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
      goto LAB_00408977;
    }
    *param_1 = pvVar14;
LAB_0040898e:
    if (*(long *)((long)pvVar14 + 0x58) != 0) goto LAB_0040899e;
  }
  else {
    if (sVar2 == 1) {
      if (sVar7 == 4) goto LAB_00408832;
LAB_00408797:
      if (((uVar15 & 0x40) != 0) && (*(void **)((long)pvVar14 + 0x78) != param_1[3])) {
LAB_00408832:
        if ((*(byte *)((long)pvVar14 + 0x72) & 2) != 0) {
          close(*(int *)((long)pvVar14 + 0x44));
        }
        if (param_1[1] != (void *)0x0) {
          FUN_00407030();
          param_1[1] = (void *)0x0;
        }
        uVar3 = *(undefined4 *)(param_1 + 9);
        *(undefined2 *)((long)pvVar14 + 0x70) = 6;
        FUN_004076c0(uVar3,param_1 + 0xb,pvVar14);
        return pvVar14;
      }
      if (param_1[1] == (void *)0x0) {
LAB_00408a59:
        pvVar13 = (void *)FUN_00407760(param_1,3);
        param_1[1] = pvVar13;
        if (pvVar13 == (void *)0x0) {
          uVar15 = *(uint *)(param_1 + 9);
          if ((uVar15 & 0x4000) != 0) {
            return (void *)0x0;
          }
          if ((*(int *)((long)pvVar14 + 0x40) != 0) && (*(short *)((long)pvVar14 + 0x70) != 4)) {
            *(undefined2 *)((long)pvVar14 + 0x70) = 7;
          }
          FUN_004076c0(uVar15,param_1 + 0xb,pvVar14);
          return pvVar14;
        }
      }
      else {
        if ((uVar15 & 0x2000) != 0) {
          *(uint *)(param_1 + 9) = uVar15 & 0xffffdfff;
          FUN_00407030();
          param_1[1] = (void *)0x0;
          goto LAB_00408a59;
        }
        iVar8 = FUN_00407440(param_1,pvVar14,0xffffffff,*(undefined8 *)((long)pvVar14 + 0x30));
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
LAB_004086c0:
      do {
        pvVar14 = *(void **)((long)pvVar13 + 0x10);
        if (pvVar14 == (void *)0x0) {
          pvVar14 = *(void **)((long)pvVar13 + 8);
          if (*(long *)((long)pvVar14 + 0x18) != 0) {
            lVar4 = *(long *)((long)pvVar14 + 0x48);
            *param_1 = pvVar14;
            *(undefined *)((long)param_1[4] + lVar4) = 0;
            pvVar14 = (void *)FUN_00407760(param_1,3);
            if (pvVar14 != (void *)0x0) {
              free(pvVar13);
              goto LAB_0040893a;
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
              iVar8 = FUN_004072c0(param_1);
              if (iVar8 == 0) goto LAB_00408726;
LAB_00408b3f:
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
                   (iVar8 = FUN_00407440(param_1,*(undefined8 *)((long)pvVar14 + 8),0xffffffff,
                                         &DAT_0040ee19), iVar8 != 0)) goto LAB_00408b3f;
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
                    FUN_00407250(param_1,iVar8,1);
                    iVar8 = *(int *)((long)pvVar14 + 0x44);
                  }
                }
                close(iVar8);
              }
LAB_00408726:
              uVar15 = *(uint *)(param_1 + 9);
              if (*(short *)((long)pvVar14 + 0x70) == 2) goto LAB_00408758;
            }
            if (*(int *)((long)pvVar14 + 0x40) == 0) {
              *(undefined2 *)((long)pvVar14 + 0x70) = 6;
              FUN_004076c0(uVar15,param_1 + 0xb,pvVar14);
              uVar15 = *(uint *)(param_1 + 9);
            }
            else {
              *(undefined2 *)((long)pvVar14 + 0x70) = 7;
            }
LAB_00408758:
            if ((uVar15 & 0x4000) != 0) {
              return (void *)0x0;
            }
            return pvVar14;
          }
          goto FUN_00402158;
        }
        *param_1 = pvVar14;
        free(pvVar13);
        if (*(long *)((long)pvVar14 + 0x58) == 0) {
          iVar8 = FUN_004072c0(param_1);
          if (iVar8 != 0) {
            *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) | 0x4000;
            return (void *)0x0;
          }
          if ((*(uint *)(param_1 + 9) & 0x102) == 0) {
            free(param_1[0xb]);
          }
          else if (param_1[0xb] != (void *)0x0) {
            FUN_0040ab30();
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
          FUN_00407390(uVar3,param_1 + 0xb);
          sVar7 = *(short *)((long)pvVar14 + 0x70);
          goto LAB_00408977;
        }
        pvVar13 = pvVar14;
      } while (*(short *)((long)pvVar14 + 0x74) == 4);
      if (*(short *)((long)pvVar14 + 0x74) == 2) {
        sVar7 = FUN_00406cf0(param_1,pvVar14,1);
        *(short *)((long)pvVar14 + 0x70) = sVar7;
        if ((sVar7 == 1) && ((*(uint *)(param_1 + 9) & 4) == 0)) {
          iVar8 = FUN_004073f0(*(undefined4 *)((long)param_1 + 0x2c),*(uint *)(param_1 + 9),
                               &DAT_0040ee1a);
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
LAB_0040893a:
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
LAB_00408977:
    *param_1 = pvVar14;
    if (sVar7 != 0xb) {
LAB_00408981:
      if (sVar7 != 1) {
        return pvVar14;
      }
      goto LAB_0040898e;
    }
LAB_00408a00:
    if (*(long *)((long)pvVar14 + 0xa8) != 2) {
      if (*(long *)((long)pvVar14 + 0xa8) == 1) {
        return pvVar14;
      }
FUN_00402158:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar4 = *(long *)((long)pvVar14 + 8);
    if (((*(long *)(lVar4 + 0x68) == 0) && ((*(uint *)(param_1 + 9) & 0x18) == 0x18)) &&
       (iVar8 = FUN_004071e0(lVar4), iVar8 == 2)) {
      sVar7 = *(short *)((long)pvVar14 + 0x70);
      goto LAB_00408981;
    }
    sVar7 = FUN_00406cf0(param_1,pvVar14,0);
    *(short *)((long)pvVar14 + 0x70) = sVar7;
    if ((*(uint *)((long)pvVar14 + 0x90) & 0xf000) != 0x4000) goto LAB_00408981;
    if (*(long *)((long)pvVar14 + 0x58) != 0) {
      uVar1 = *(long *)(lVar4 + 0x68) - 1;
      if (uVar1 < 0xfffffffffffffffe) {
        *(ulong *)(lVar4 + 0x68) = uVar1;
      }
      if (sVar7 != 1) {
        return pvVar14;
      }
      goto LAB_0040899e;
    }
    if (sVar7 != 1) {
      return pvVar14;
    }
  }
  param_1[3] = *(void **)((long)pvVar14 + 0x78);
LAB_0040899e:
  cVar5 = FUN_00407610(*(undefined4 *)(param_1 + 9),param_1 + 0xb,pvVar14);
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
        FUN_00407030();
      }
      uVar5 = 1;
      if (param_2 == 0x2000) {
        *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) | 0x2000;
        uVar5 = 2;
      }
      if (((*(long *)(lVar4 + 0x58) == 0) && (**(char **)(lVar4 + 0x30) != '/')) &&
         ((*(uint *)(param_1 + 9) & 4) == 0)) {
        __fd = FUN_004073f0(*(undefined4 *)((long)param_1 + 0x2c),*(uint *)(param_1 + 9),
                            &DAT_0040ee1a);
        if (__fd < 0) {
          param_1[1] = 0;
          lVar3 = 0;
        }
        else {
          lVar4 = FUN_00407760(param_1,uVar5);
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
            FUN_00407250(param_1,__fd,1);
          }
          lVar3 = param_1[1];
        }
      }
      else {
        lVar3 = FUN_00407760(param_1,uVar5);
        param_1[1] = lVar3;
      }
    }
    return lVar3;
  }
  return 0;
}


void FUN_00408f40(long param_1,int *param_2)

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
      if (iVar3 <= iVar8) goto LAB_00408fbc;
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
      if (iVar9 <= iVar3) goto LAB_00408fbc;
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
LAB_00408fbc:
  param_2[0xc] = iVar2;
  param_2[0xb] = iVar1 + (iVar2 - iVar3);
  return;
}


int FUN_00409020(int param_1,undefined8 *param_2,char *param_3,char **param_4,undefined4 *param_5,
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
      if ((iVar5 == 0) && (sVar7 = strlen(__s1_00), sVar7 == sVar15)) goto LAB_00409240;
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
            if (local_70 == (char *)0x0) goto LAB_00409180;
          }
          else if (local_70 == (char *)0x0) {
            local_70 = (char *)calloc((long)iVar5,1);
            if (local_70 == (char *)0x0) {
              bVar3 = true;
              goto LAB_00409180;
            }
            bVar4 = true;
            local_70[(int)local_44] = '\x01';
          }
          local_70[lVar16] = '\x01';
        }
      }
LAB_00409180:
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
LAB_00409240:
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


uint FUN_00409640(uint param_1,undefined8 *param_2,char *param_3,long param_4,undefined8 param_5,
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
LAB_0040968a:
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
          goto LAB_0040978d;
        }
        pbVar8 = *(byte **)(param_7 + 8);
      }
      param_7[10] = 0;
    }
LAB_0040978d:
    param_7[6] = 1;
    cVar2 = *param_3;
LAB_00409798:
    if (cVar2 == ':') {
      uVar3 = 0;
    }
    if (pbVar8 == (byte *)0x0) goto LAB_00409708;
LAB_004097ac:
    if (*pbVar8 == 0) goto LAB_00409708;
  }
  else {
    if (param_7[6] == 0) goto LAB_0040968a;
    cVar2 = *param_3;
    pbVar8 = *(byte **)(param_7 + 8);
    if ((cVar2 - 0x2bU & 0xfd) != 0) goto LAB_00409798;
    pcVar4 = param_3 + 1;
    param_3 = param_3 + 1;
    if (*pcVar4 == ':') {
      uVar3 = 0;
    }
    if (pbVar8 != (byte *)0x0) goto LAB_004097ac;
LAB_00409708:
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
        FUN_00408f40(param_2,param_7);
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
LAB_00409876:
      if (uVar11 != param_1) {
        *param_7 = uVar11;
      }
      return 0xffffffff;
    }
    lVar6 = 3;
    pbVar8 = (byte *)param_2[(int)uVar11];
    pbVar9 = pbVar8;
    pbVar10 = &DAT_0040ef59;
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
          FUN_00408f40(param_2,param_7);
          uVar11 = param_7[0xb];
        }
      }
      param_7[0xc] = param_1;
      *param_7 = param_1;
      goto LAB_00409876;
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
        puVar15 = &DAT_0040ef59;
        goto LAB_004099d5;
      }
      if ((int)param_6 != 0) {
        if (pbVar8[2] == 0) {
          pcVar4 = strchr(param_3,(int)(char)bVar14);
          param_6 = param_6 & 0xffffffff;
          if (pcVar4 != (char *)0x0) goto LAB_00409980;
        }
        *(byte **)(param_7 + 8) = pbVar8 + 1;
        uVar11 = FUN_00409020(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar3,
                              &DAT_0040ef5a);
        if (uVar11 != 0xffffffff) {
          return uVar11;
        }
        pbVar8 = (byte *)param_2[(int)*param_7];
      }
    }
LAB_00409980:
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
  puVar15 = &DAT_0040ef78;
LAB_004099d5:
  uVar3 = FUN_00409020(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar3,puVar15);
  return uVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409c10(void)

{
  DAT_00612500 = DAT_0061233c;
  _DAT_00612504 = DAT_00612338;
  FUN_00409640();
  DAT_0061233c = DAT_00612500;
  DAT_00612550 = DAT_00612510;
  _DAT_00612334 = DAT_00612508;
  return;
}


void FUN_00409c70(void)

{
  FUN_00409c10();
  return;
}


void FUN_00409c90(void)

{
  FUN_00409c10();
  return;
}


void FUN_00409cb0(void)

{
  FUN_00409640();
  return;
}


void FUN_00409cd0(void)

{
  FUN_00409c10();
  return;
}


void FUN_00409cf0(void)

{
  FUN_00409640();
  return;
}


size_t FUN_00409d10(wchar_t *param_1,byte *param_2,size_t param_3,mbstate_t *param_4)

{
  char cVar1;
  size_t sVar2;
  wchar_t local_1c;
  
  if (param_2 == (byte *)0x0) {
    param_3 = 1;
    param_2 = (byte *)0x40ef77;
  }
  else {
    if (param_3 == 0) {
      return 0xfffffffffffffffe;
    }
    if (param_1 != (wchar_t *)0x0) goto LAB_00409d34;
  }
  param_1 = &local_1c;
LAB_00409d34:
  sVar2 = mbrtowc(param_1,(char *)param_2,param_3,param_4);
  if ((0xfffffffffffffffd < sVar2) && (cVar1 = FUN_0040a000(0), cVar1 == '\0')) {
    sVar2 = 1;
    *param_1 = (uint)*param_2;
  }
  return sVar2;
}


undefined * FUN_00409d90(undefined *param_1,undefined4 param_2,char *param_3)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  char acStack_48 [40];
  
  if (*param_3 == '\0') {
    *param_1 = 0;
    return param_1;
  }
  if (DAT_00612538 == 0) {
    iVar1 = open("/proc/self/fd",0x10900);
    if (iVar1 < 0) {
      DAT_00612538 = 0xffffffff;
      return (undefined *)0x0;
    }
    __sprintf_chk(acStack_48,1,0x20,"/proc/self/fd/%d/../fd",iVar1);
    iVar2 = access(acStack_48,0);
    DAT_00612538 = (-(uint)(iVar2 == 0) & 2) - 1;
    close(iVar1);
  }
  if (DAT_00612538 < 0) {
LAB_00409e1d:
    param_1 = (undefined *)0x0;
  }
  else {
    sVar3 = strlen(param_3);
    if (0xfc0 < sVar3 + 0x1b) {
      param_1 = (undefined *)malloc(sVar3 + 0x1b);
      if (param_1 == (undefined *)0x0) goto LAB_00409e1d;
    }
    iVar1 = __sprintf_chk(param_1,1,0xffffffffffffffff,"/proc/self/fd/%d/",param_2);
    strcpy(param_1 + iVar1,param_3);
  }
  return param_1;
}


ulong FUN_00409ec0(uint *param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  
  lVar2 = __fpending();
  uVar1 = *param_1;
  uVar3 = FUN_0040bd60(param_1);
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


void FUN_00409f20(long param_1)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0x95f616;
  return;
}


undefined8 FUN_00409f30(long *param_1,long *param_2)

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


void FUN_00409fb0(char *param_1,uint param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 & 0x40) != 0) {
    uVar2 = param_3 & 0xffffffff;
  }
  iVar1 = open(param_1,param_2,uVar2);
  FUN_0040ba20(iVar1);
  return;
}


bool FUN_0040a000(int param_1)

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
    pbVar5 = &DAT_0040efec;
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


ulong FUN_0040a060(ulong param_1)

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
LAB_0040a0e0:
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
        if (uVar3 <= uVar4) goto LAB_0040a0e0;
        lVar5 = lVar5 + 8;
      } while (uVar1 != 0);
    }
    uVar3 = uVar3 + 2;
  } while( true );
}


ulong FUN_0040a100(ulong param_1,ulong param_2)

{
  return (param_1 >> 3 | param_1 << 0x3d) % param_2;
}


bool FUN_0040a110(long param_1,long param_2)

{
  return param_1 == param_2;
}


long FUN_0040a120(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = (*(code *)param_1[6])(param_2,param_1[2]);
  if (uVar1 <= (ulong)param_1[2] && param_1[2] != uVar1) {
    return uVar1 * 0x10 + *param_1;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


long FUN_0040a150(long param_1,long param_2,long **param_3,char param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  
  plVar6 = (long *)FUN_0040a120();
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
LAB_0040a1dc:
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
          goto LAB_0040a1dc;
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

undefined8 FUN_0040a270(float **param_1)

{
  float fVar1;
  float *pfVar2;
  float fVar3;
  
  pfVar2 = *param_1;
  if (pfVar2 == (float *)&DAT_0040f070) {
    return 1;
  }
  fVar1 = pfVar2[2];
  if ((((_DAT_0040f084 < fVar1) && (fVar1 < DAT_0040f088)) && (_DAT_0040f08c < pfVar2[3])) &&
     (_DAT_0040f090 <= *pfVar2)) {
    fVar3 = *pfVar2 + _DAT_0040f084;
    if (((fVar3 < pfVar2[1]) && (pfVar2[1] <= DAT_0040f094)) && (fVar3 < fVar1)) {
      return 1;
    }
  }
  *param_1 = (float *)&DAT_0040f070;
  return 0;
}


undefined8 FUN_0040a2f0(long param_1,long **param_2,char param_3)

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
LAB_0040a318:
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
          plVar2 = (long *)FUN_0040a120(param_1,lVar6);
          plVar4 = (long *)plVar3[1];
          if (*plVar2 != 0) break;
          *plVar2 = lVar6;
          *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
          *plVar3 = 0;
          plVar3[1] = *(long *)(param_1 + 0x48);
          *(long **)(param_1 + 0x48) = plVar3;
          plVar3 = plVar4;
          if (plVar4 == (long *)0x0) goto LAB_0040a38f;
        }
        plVar3[1] = plVar2[1];
        plVar2[1] = (long)plVar3;
        plVar3 = plVar4;
      } while (plVar4 != (long *)0x0);
LAB_0040a38f:
      lVar6 = *plVar5;
    }
    plVar5[1] = 0;
    if (param_3 != '\0') goto LAB_0040a318;
    plVar3 = (long *)FUN_0040a120(param_1,lVar6);
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


undefined8 FUN_0040a440(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


undefined8 FUN_0040a450(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


undefined8 FUN_0040a460(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}


void FUN_0040a470(long **param_1)

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


bool FUN_0040a4c0(long **param_1)

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
LAB_0040a4d8:
      plVar2 = plVar2 + 2;
    }
    lVar1 = plVar2[1];
    plVar4 = (long *)((long)plVar4 + 1);
    plVar3 = (long *)((long)plVar3 + 1);
    if (lVar1 == 0) goto LAB_0040a4d8;
    do {
      lVar1 = *(long *)(lVar1 + 8);
      plVar3 = (long *)((long)plVar3 + 1);
    } while (lVar1 != 0);
    plVar2 = plVar2 + 2;
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040a530(long **param_1,undefined8 param_2)

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
      if (param_1[1] <= plVar6) goto LAB_0040a59d;
    }
  }
LAB_0040a59d:
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
  __fprintf_chk((dVar7 * _DAT_0040f0a8) / dVar8,param_2,1,"# buckets used:    %lu (%.2f%%)\n",plVar2
               );
  __fprintf_chk(param_2,1,"max bucket length: %lu\n",uVar5);
  return;
}


long FUN_0040a680(long param_1,long param_2)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)FUN_0040a120();
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


long FUN_0040a6e0(long **param_1)

{
  long lVar1;
  long *plVar2;
  
  if (param_1[4] == (long *)0x0) {
    return 0;
  }
  plVar2 = *param_1;
  if (param_1[1] <= plVar2) {
    lVar1 = FUN_00402162();
    return lVar1;
  }
  do {
    if (*plVar2 != 0) {
      return *plVar2;
    }
    plVar2 = plVar2 + 2;
  } while (plVar2 < param_1[1]);
  lVar1 = FUN_00402162();
  return lVar1;
}


long FUN_0040a730(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = (long *)FUN_0040a120();
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


ulong FUN_0040a7a0(long **param_1,long param_2,ulong param_3)

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


long FUN_0040a810(long **param_1,code *param_2,undefined8 param_3)

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


ulong FUN_0040a890(byte *param_1,ulong param_2)

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


void FUN_0040a8d0(undefined8 *param_1)

{
  *(undefined *)(param_1 + 2) = 0;
  *param_1 = 0x3f80000000000000;
  param_1[1] = 0x3fb4fdf43f4ccccd;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ** FUN_0040a8f0(ulong param_1,void *param_2,code *param_3,code *param_4,void *param_5)

{
  char cVar1;
  void **__ptr;
  void *__nmemb;
  void *pvVar2;
  float fVar3;
  float fVar4;
  
  if (param_3 == (code *)0x0) {
    param_3 = FUN_0040a100;
  }
  if (param_4 == (code *)0x0) {
    param_4 = FUN_0040a110;
  }
  __ptr = (void **)malloc(0x50);
  if (__ptr == (void **)0x0) {
    return (void **)0x0;
  }
  if (param_2 == (void *)0x0) {
    __ptr[5] = &DAT_0040f070;
    cVar1 = FUN_0040a270(__ptr + 5);
    if (cVar1 == '\0') goto LAB_0040a9d0;
    fVar4 = DAT_0040f098;
    if ((long)param_1 < 0) goto LAB_0040aa53;
LAB_0040aa0e:
    fVar3 = (float)param_1;
LAB_0040aa17:
    fVar3 = fVar3 / fVar4;
    if (_DAT_0040f09c <= fVar3) goto LAB_0040a9d0;
    if (fVar3 < _DAT_0040f0a0) {
      param_1 = (ulong)fVar3;
    }
    else {
      param_1 = (long)(fVar3 - _DAT_0040f0a0) ^ 0x8000000000000000;
    }
  }
  else {
    __ptr[5] = param_2;
    cVar1 = FUN_0040a270(__ptr + 5);
    if (cVar1 == '\0') goto LAB_0040a9d0;
    if (*(char *)((long)param_2 + 0x10) == '\0') {
      fVar4 = *(float *)((long)param_2 + 8);
      if (-1 < (long)param_1) goto LAB_0040aa0e;
LAB_0040aa53:
      fVar3 = (float)(param_1 >> 1 | (ulong)((uint)param_1 & 1));
      fVar3 = fVar3 + fVar3;
      goto LAB_0040aa17;
    }
  }
  __nmemb = (void *)FUN_0040a060(param_1);
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
LAB_0040a9d0:
  free(__ptr);
  return (void **)0x0;
}


void FUN_0040aa80(long **param_1)

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
        if (param_1[1] < plVar4 || param_1[1] == plVar4) goto LAB_0040ab13;
      }
      plVar5 = plVar5 + 2;
    } while (plVar5 <= param_1[1] && param_1[1] != plVar5);
  }
LAB_0040ab13:
  param_1[3] = (long *)0x0;
  param_1[4] = (long *)0x0;
  return;
}


void FUN_0040ab30(long **param_1)

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
    if (plVar2 <= plVar4) goto LAB_0040abcc;
    do {
      while (lVar5 = *plVar4, plVar3 = plVar4, lVar5 == 0) {
        plVar4 = plVar4 + 2;
        if (plVar2 <= plVar4) goto LAB_0040ab8f;
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
LAB_0040ab8f:
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
LAB_0040abcc:
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

undefined4 FUN_0040ac10(void **param_1,ulong param_2)

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
    if (_DAT_0040f09c <= fVar3) {
      return 0;
    }
    if (fVar3 < _DAT_0040f0a0) {
      param_2 = (ulong)fVar3;
    }
    else {
      param_2 = (long)(fVar3 - _DAT_0040f0a0) ^ 0x8000000000000000;
    }
  }
  local_58 = (void *)FUN_0040a060(param_2);
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
      uVar2 = FUN_0040a2f0(&local_68,param_1,0);
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
      cVar1 = FUN_0040a2f0(param_1,&local_68,1);
      if ((cVar1 != '\0') && (cVar1 = FUN_0040a2f0(param_1,&local_68,0), cVar1 != '\0')) {
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

undefined8 FUN_0040ae10(long param_1,long param_2,long *param_3)

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
  lVar2 = FUN_0040a150(param_1,param_2,&local_20,0);
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
    if ((long)uVar3 < 0) goto LAB_0040af0a;
LAB_0040ae7b:
    if (fVar7 <= (float)uVar3 * *(float *)(lVar2 + 8)) goto LAB_0040ae92;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x28);
    fVar7 = (float)uVar6;
    uVar3 = *(ulong *)(param_1 + 0x10);
    if (-1 < (long)uVar3) goto LAB_0040ae7b;
LAB_0040af0a:
    fVar8 = (float)(uVar3 >> 1 | (ulong)((uint)uVar3 & 1));
    if (fVar7 <= (fVar8 + fVar8) * *(float *)(lVar2 + 8)) goto LAB_0040ae92;
  }
  FUN_0040a270(param_1 + 0x28);
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
    if (_DAT_0040f09c <= fVar7) {
      return 0xffffffff;
    }
    if (_DAT_0040f0a0 <= fVar7) {
      uVar6 = (long)(fVar7 - _DAT_0040f0a0) ^ 0x8000000000000000;
    }
    else {
      uVar6 = (ulong)fVar7;
    }
    cVar1 = FUN_0040ac10(param_1,uVar6);
    if (cVar1 == '\0') {
      return 0xffffffff;
    }
    lVar2 = FUN_0040a150(param_1,param_2,&local_20,0);
    if (lVar2 != 0) {
      uVar5 = FUN_0040216c();
      return uVar5;
    }
  }
LAB_0040ae92:
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


undefined8 FUN_0040b090(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_10;
  
  iVar1 = FUN_0040ae10(param_1,param_2,&local_10);
  if (iVar1 != -1) {
    if (iVar1 == 0) {
      param_2 = local_10;
    }
    return param_2;
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_0040b0d0(long param_1,undefined8 param_2)

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
  
  lVar5 = FUN_0040a150(param_1,param_2,&local_20,1);
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
      FUN_0040a270(param_1 + 0x28);
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
        if (_DAT_0040f0a0 <= fVar7) {
          uVar6 = (long)(fVar7 - _DAT_0040f0a0) ^ 0x8000000000000000;
        }
        else {
          uVar6 = (ulong)fVar7;
        }
        cVar4 = FUN_0040ac10(param_1,uVar6);
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


void FUN_0040b2b0(undefined4 *param_1,undefined4 param_2)

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


undefined FUN_0040b2d0(long param_1)

{
  return *(undefined *)(param_1 + 0x1c);
}


undefined4 FUN_0040b2e0(long param_1,undefined4 param_2)

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


undefined4 FUN_0040b320(long param_1)

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

char * FUN_0040b370(void)

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
  if (DAT_00612540 != (char *)0x0) goto LAB_0040b3aa;
  pcVar7 = getenv("CHARSETALIASDIR");
  if ((pcVar7 == (char *)0x0) || (*pcVar7 == '\0')) {
    sVar6 = 0x73;
    sVar5 = 0x65;
    __n = 100;
    pcVar7 = 
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib"
    ;
LAB_0040b495:
    __file = (char *)malloc(sVar6);
    if (__file != (char *)0x0) {
      memcpy(__file,pcVar7,__n);
      __file[__n] = '/';
      goto LAB_0040b4b6;
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
        goto LAB_0040b495;
      }
      sVar6 = __n + 0xe;
    }
    __file = (char *)malloc(sVar6);
    if (__file != (char *)0x0) {
      memcpy(__file,pcVar7,__n);
      sVar5 = __n;
LAB_0040b4b6:
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
LAB_0040b550:
          pbVar8 = (byte *)__stream->_IO_read_ptr;
          if (__stream->_IO_read_end <= pbVar8) goto LAB_0040b6dc;
          do {
            __stream->_IO_read_ptr = (char *)(pbVar8 + 1);
            uVar4 = (uint)*pbVar8;
            __ptr = pcVar7;
            while( true ) {
              pcVar7 = __ptr;
              if ((uVar4 - 9 < 2) || (uVar4 == 0x20)) goto LAB_0040b550;
              if (uVar4 == 0x23) goto LAB_0040b741;
              ungetc(uVar4,__stream);
              iVar2 = fscanf(__stream,"%50s %50s",&local_b8,&local_78);
              puVar13 = &local_b8;
              if (iVar2 < 2) goto LAB_0040b6ef;
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
                FUN_0040bd60(__stream);
                goto LAB_0040b4f4;
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
LAB_0040b6dc:
              uVar4 = __uflow(__stream);
              __ptr = pcVar7;
              if (uVar4 == 0xffffffff) goto LAB_0040b6ef;
            }
          } while( true );
        }
        close(iVar2);
      }
      goto LAB_0040b4ee;
    }
  }
  DAT_00612540 = "";
LAB_0040b3aa:
  cVar1 = *DAT_00612540;
  pcVar7 = DAT_00612540;
  do {
    if (cVar1 == '\0') {
LAB_0040b404:
      if (*__s1 == '\0') {
        __s1 = "ASCII";
      }
      return __s1;
    }
    iVar2 = strcmp(__s1,pcVar7);
    if ((iVar2 == 0) || ((cVar1 == '*' && (pcVar7[1] == '\0')))) {
      sVar6 = strlen(pcVar7);
      __s1 = pcVar7 + sVar6 + 1;
      goto LAB_0040b404;
    }
    sVar6 = strlen(pcVar7);
    sVar5 = strlen(pcVar7 + sVar6 + 1);
    pcVar7 = pcVar7 + sVar6 + 1 + sVar5 + 1;
    cVar1 = *pcVar7;
  } while( true );
LAB_0040b741:
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
  if (uVar4 == 0xffffffff) goto LAB_0040b6ef;
  goto LAB_0040b550;
LAB_0040b6ef:
  FUN_0040bd60(__stream);
  if (local_d0 == 0) {
LAB_0040b4ee:
    pcVar7 = "";
  }
  else {
    pcVar7[local_d0] = '\0';
  }
LAB_0040b4f4:
  free(__file);
  DAT_00612540 = pcVar7;
  goto LAB_0040b3aa;
}


void FUN_0040b8e0(undefined4 param_1)

{
  undefined8 uVar1;
  
  uVar1 = dcgettext(0,"unable to record current working directory",5);
  error(DAT_006122d8,param_1,uVar1);
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_0040b910(undefined4 param_1)

{
  undefined8 uVar1;
  
  uVar1 = dcgettext(0,"failed to return to initial working directory",5);
  error(DAT_006122d8,param_1,uVar1);
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_0040b940(int param_1,char *param_2,uint param_3,ulong param_4)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_3 & 0x40) != 0) {
    uVar2 = param_4 & 0xffffffff;
  }
  iVar1 = openat(param_1,param_2,param_3,uVar2);
  FUN_0040ba20(iVar1);
  return;
}


int FUN_0040b990(int *param_1)

{
  int iVar1;
  long lVar2;
  
  *(undefined8 *)(param_1 + 2) = 0;
  iVar1 = FUN_00409fb0(&DAT_0040ee1a,0x80000);
  *param_1 = iVar1;
  if (-1 < iVar1) {
    return 0;
  }
  lVar2 = FUN_0040bfc0(0,0);
  *(long *)(param_1 + 2) = lVar2;
  return -(uint)(lVar2 == 0);
}


void FUN_0040b9e0(int *param_1)

{
  if (-1 < *param_1) {
    fchdir(*param_1);
    return;
  }
  FUN_0040baf0(*(undefined8 *)(param_1 + 2));
  return;
}


void FUN_0040ba00(int *param_1)

{
  if (-1 < *param_1) {
    close(*param_1);
  }
  free(*(void **)(param_1 + 2));
  return;
}


uint FUN_0040ba20(uint param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  if (2 < param_1) {
    return param_1;
  }
  uVar2 = FUN_0040c5a0();
  piVar3 = __errno_location();
  iVar1 = *piVar3;
  close(param_1);
  *piVar3 = iVar1;
  return uVar2;
}


void FUN_0040ba70(int param_1)

{
  int iVar1;
  
  if (param_1 < 0) {
    return;
  }
  iVar1 = close(param_1);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("! close_fail","lib/chdir-long.c",0x40,"cdb_free");
}


undefined8 FUN_0040bab0(int *param_1,char *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = openat(*param_1,param_2,0x10900);
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    FUN_0040ba70(*param_1);
    *param_1 = iVar1;
    uVar2 = 0;
  }
  return uVar2;
}


int FUN_0040baf0(char *param_1)

{
  int iVar1;
  int *piVar2;
  size_t sVar3;
  size_t sVar4;
  undefined *puVar5;
  char *__s;
  int local_2c;
  
  iVar1 = chdir(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  piVar2 = __errno_location();
  if (*piVar2 != 0x24) {
    return iVar1;
  }
  sVar3 = strlen(param_1);
  local_2c = -100;
  if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("0 < len","lib/chdir-long.c",0x7e,"chdir_long");
  }
  if (sVar3 < 0x1000) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("4096 <= len","lib/chdir-long.c",0x7f,"chdir_long");
  }
  sVar4 = strspn(param_1,"/");
  if (sVar4 == 2) {
    puVar5 = (undefined *)FUN_0040c490(param_1 + 3,0x2f,sVar3 - 3);
    if (puVar5 == (undefined *)0x0) {
      return -1;
    }
    *puVar5 = 0;
    iVar1 = FUN_0040bab0(&local_2c,param_1);
    *puVar5 = 0x2f;
    if (iVar1 != 0) goto LAB_0040bc20;
    sVar4 = strspn(puVar5 + 1,"/");
    __s = puVar5 + 1 + sVar4;
  }
  else {
    __s = param_1;
    if (sVar4 != 0) {
      iVar1 = FUN_0040bab0(&local_2c,"/");
      if (iVar1 != 0) goto LAB_0040bc20;
      __s = param_1 + sVar4;
    }
  }
  if (*__s == '/') {
                    /* WARNING: Subroutine does not return */
    __assert_fail("*dir != \'/\'","lib/chdir-long.c",0xa2,"chdir_long");
  }
  param_1 = param_1 + sVar3;
  if (param_1 < __s) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("dir <= dir_end","lib/chdir-long.c",0xa3,"chdir_long");
  }
  while (0xfff < (long)param_1 - (long)__s) {
    puVar5 = (undefined *)memrchr(__s,0x2f,0x1000);
    if (puVar5 == (undefined *)0x0) {
      *piVar2 = 0x24;
      return -1;
    }
    *puVar5 = 0;
    if (0xfff < (long)puVar5 - (long)__s) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("slash - dir < 4096","lib/chdir-long.c",0xb3,"chdir_long");
    }
    iVar1 = FUN_0040bab0(&local_2c,__s);
    *puVar5 = 0x2f;
    if (iVar1 != 0) goto LAB_0040bc20;
    sVar3 = strspn(puVar5 + 1,"/");
    __s = puVar5 + 1 + sVar3;
  }
  if (((param_1 <= __s) || (iVar1 = FUN_0040bab0(&local_2c,__s), iVar1 == 0)) &&
     (iVar1 = fchdir(local_2c), iVar1 == 0)) {
    FUN_0040ba70(local_2c);
    return 0;
  }
LAB_0040bc20:
  iVar1 = *piVar2;
  FUN_0040ba70(local_2c);
  *piVar2 = iVar1;
  return -1;
}


int FUN_0040bd60(FILE *param_1)

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
      if (_Var4 == -1) goto LAB_0040bdc7;
    }
    iVar1 = FUN_0040bf20(param_1);
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
LAB_0040bdc7:
  iVar1 = fclose(param_1);
  return iVar1;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_0040bde0(ulong param_1,int param_2,ulong param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  
  if (param_2 != 0x406) {
    iVar1 = fcntl((int)param_1,param_2,param_3);
    return iVar1;
  }
  if (DAT_00612548 < 0) {
    iVar1 = FUN_0040bde0(param_1,0,param_3 & 0xffffffff);
    if (iVar1 < 0) {
      return iVar1;
    }
    if (DAT_00612548 != -1) {
      return iVar1;
    }
  }
  else {
    iVar1 = fcntl((int)param_1,0x406);
    if ((-1 < iVar1) || (piVar4 = __errno_location(), *piVar4 != 0x16)) {
      DAT_00612548 = 1;
      return iVar1;
    }
    iVar1 = FUN_0040bde0(param_1 & 0xffffffff,0,param_3 & 0xffffffff);
    if (iVar1 < 0) {
      return iVar1;
    }
    DAT_00612548 = -1;
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


void FUN_0040bf20(FILE *param_1)

{
  int iVar1;
  
  if (param_1 != (FILE *)0x0) {
    iVar1 = __freading();
    if ((iVar1 != 0) && ((param_1->_flags & 0x100U) != 0)) {
      FUN_0040bf60(param_1,0,1);
      fflush(param_1);
      return;
    }
  }
  fflush(param_1);
  return;
}


ulong FUN_0040bf60(FILE *param_1,__off_t param_2,int param_3)

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


void * FUN_0040bfc0(void *param_1,size_t param_2)

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
LAB_0040bff2:
    local_110 = malloc(local_100);
    if (local_110 == (void *)0x0) {
      return (void *)0x0;
    }
  }
  else {
    local_110 = param_1;
    local_100 = param_2;
    if (param_1 == (void *)0x0) goto LAB_0040bff2;
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
LAB_0040c2d8:
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
          if (__dirp != (DIR *)0x0) goto LAB_0040c391;
          goto joined_r0x0040c39f;
        }
        iVar7 = __fxstat(1,iVar6,&local_c8);
        if (iVar7 != 0) {
          iVar7 = *piVar8;
          if (__dirp != (DIR *)0x0) {
            closedir(__dirp);
          }
LAB_0040c3fd:
          close(iVar6);
          goto joined_r0x0040c39f;
        }
        if (((__dirp != (DIR *)0x0) && (iVar7 = closedir(__dirp), iVar7 != 0)) ||
           (_Var5 = local_c8.st_ino, _Var2 = local_c8.st_dev, __dirp = fdopendir(iVar6),
           bVar1 = bVar16 || bVar17, __dirp == (DIR *)0x0)) {
          iVar7 = *piVar8;
          goto LAB_0040c3fd;
        }
LAB_0040c150:
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
                  if (pdVar9->d_name[0] == '.') goto LAB_0040c360;
                  break;
                }
                iVar7 = *piVar8;
              }
              if (iVar7 == 0) {
                *piVar8 = 2;
                iVar7 = 2;
              }
              goto LAB_0040c391;
            }
            if (pdVar9->d_name[0] == '.') {
LAB_0040c360:
              if ((pdVar9->d_name[1] == '\0') || (*(short *)(pdVar9->d_name + 1) == 0x2e))
              goto LAB_0040c150;
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
              goto LAB_0040c26f;
            }
            *piVar8 = 0xc;
            iVar7 = 0xc;
          }
          else {
            *piVar8 = 0x22;
            iVar7 = 0x22;
          }
LAB_0040c391:
          closedir(__dirp);
          goto joined_r0x0040c39f;
        }
LAB_0040c26f:
        pvVar10 = memcpy((void *)((long)local_e8 - __n),__filename,__n);
        local_e8 = (void *)((long)pvVar10 + -1);
        local_120 = _Var2;
        *(undefined *)((long)pvVar10 + -1) = 0x2f;
        _Var15 = _Var5;
      } while ((_Var3 != _Var2) || (_Var4 != _Var5));
      iVar6 = closedir(__dirp);
      if (iVar6 == 0) {
        lVar13 = (long)local_110 + local_100;
        goto LAB_0040c2d8;
      }
      goto LAB_0040c3c0;
    }
  }
  piVar8 = __errno_location();
LAB_0040c3c0:
  iVar7 = *piVar8;
joined_r0x0040c39f:
  if (param_1 == (void *)0x0) {
    free(local_110);
  }
  *piVar8 = iVar7;
  return (void *)0x0;
}


ulong * FUN_0040c490(ulong *param_1,char param_2,ulong param_3)

{
  char cVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  
  if (param_3 == 0) {
    return (ulong *)0x0;
  }
  if (((ulong)param_1 & 7) == 0) {
LAB_0040c4d0:
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
      if (((ulong)param_1 & 7) == 0) goto LAB_0040c4d0;
      cVar1 = *(char *)param_1;
    }
  }
  return param_1;
}


void FUN_0040c5a0(undefined8 param_1)

{
  FUN_0040bde0(param_1,0,3);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040c5e3) */
/* WARNING: Removing unreachable block (ram,0x0040c5e8) */

void FUN_0040c5b0(void)

{
  __DT_INIT();
  return;
}


void FUN_0040c610(void)

{
  return;
}


void FUN_0040c620(undefined8 param_1)

{
  __cxa_atexit(param_1,0,DAT_006122c8);
  return;
}


undefined8 FUN_0040c638(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code **ppcVar1;
  
  for (ppcVar1 = (code **)&DAT_00611e30; *ppcVar1 != (code *)0xffffffffffffffff;
      ppcVar1 = ppcVar1 + -1) {
    (**ppcVar1)();
  }
  return param_3;
}


void __DT_FINI(void)

{
  FUN_00402711();
  return;
}

