
void switchD_00402a50::caseD_b(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401775(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_0040177a(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_0040177f(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401784(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void switchD_0040452a::caseD_0(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


undefined8 FUN_00401790(int param_1,undefined **param_2)

{
  char cVar1;
  int iVar2;
  __mode_t __mask;
  undefined8 uVar3;
  void *__ptr;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  long extraout_RDX;
  long lVar9;
  ulong extraout_RDX_00;
  uint uVar10;
  undefined **ppuVar11;
  char *pcVar12;
  undefined *puVar13;
  long lVar14;
  uint unaff_R13D;
  ulong local_50;
  ulong local_48;
  ulong local_40 [2];
  
  ppuVar11 = (undefined **)(long)param_1;
  FUN_00402860(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils",
                 "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale"
                );
  textdomain("coreutils");
  FUN_00406720(FUN_00402270);
  lVar4 = 0;
LAB_004017e1:
  do {
    lVar14 = lVar4;
    ppuVar8 = &PTR_s_context_00407000;
    iVar2 = FUN_00405e60(param_1,param_2,&DAT_00406822,&PTR_s_context_00407000,0);
    if (iVar2 == -1) {
      if (lVar14 == 0) {
        unaff_R13D = 0x1b6;
      }
      else {
        __ptr = (void *)FUN_00402310();
        if (__ptr == (void *)0x0) goto LAB_00401bc9;
        __mask = umask(0);
        umask(__mask);
        unaff_R13D = FUN_004026e0(0x1b6,0,__mask,__ptr,0);
        free(__ptr);
        if ((unaff_R13D & 0xfffffe00) != 0) goto LAB_00401ba7;
      }
      ppuVar8 = (undefined **)(long)DAT_0060a258._4_4_;
      uVar5 = (ulong)(param_1 - DAT_0060a258._4_4_);
      if (param_1 <= DAT_0060a258._4_4_) goto LAB_00401b03;
      if ((DAT_0060a258._4_4_ + 1 < param_1) &&
         (lVar4 = (long)DAT_0060a258._4_4_, *param_2[lVar4 + 1] == 'p')) {
        if (uVar5 < 2) goto LAB_00401d7d;
        if (uVar5 < 3) goto LAB_00401935;
        puVar13 = param_2[lVar4 + 2];
        goto LAB_00401b1c;
      }
      if (3 < uVar5) {
        if (uVar5 < 5) goto LAB_00401932;
        param_2 = (undefined **)FUN_00404480(param_2[(long)ppuVar8 + 4]);
        pcVar12 = "extra operand %s";
        goto LAB_00401ae1;
      }
      param_2 = (undefined **)FUN_00404480(param_2[(long)param_1 + -1]);
      uVar3 = dcgettext(0,"missing operand after %s",5);
      ppuVar8 = param_2;
      error(0,0,uVar3);
      ppuVar11 = (undefined **)(ulong)(uint)(param_1 - DAT_0060a258._4_4_);
      if (param_1 - DAT_0060a258._4_4_ == 2) {
        pcVar12 = "Special files require major and minor device numbers.";
        goto LAB_00401b5b;
      }
      break;
    }
    if (iVar2 == -0x82) {
      FUN_00401e80(0);
LAB_00401ba7:
      uVar3 = dcgettext(0,"mode must specify only file permission bits",5);
      error(1,0,uVar3);
LAB_00401bc9:
      uVar3 = dcgettext(0,"invalid mode",5);
      error(1,0,uVar3);
      goto LAB_00401beb;
    }
    if (iVar2 < -0x81) {
      if (iVar2 == -0x83) {
        FUN_00404900(stdout,"mknod","GNU coreutils",PTR_DAT_0060a1f0,"David MacKenzie",0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      break;
    }
    if (iVar2 == 0x5a) {
      lVar4 = lVar14;
      if (DAT_0060a440 != 0) {
        uVar3 = dcgettext(0,
                          "warning: ignoring --context; it requires an SELinux/SMACK-enabled kernel"
                          ,5);
        error(0,0,uVar3);
      }
      goto LAB_004017e1;
    }
    lVar4 = DAT_0060a440;
  } while (iVar2 == 0x6d);
LAB_00401af9:
  do {
    FUN_00401e80(1);
    uVar5 = extraout_RDX_00;
LAB_00401b03:
    if (uVar5 < 2) {
LAB_00401c30:
      uVar3 = dcgettext(0,"missing operand",5);
      error(0,0,uVar3);
      goto LAB_00401af9;
    }
    if (uVar5 == 2) {
LAB_00401932:
      lVar4 = (long)(int)ppuVar8;
LAB_00401935:
      lVar9 = (lVar4 + 1) * 8;
      cVar1 = *param_2[lVar4 + 1];
      if (cVar1 == 'c') {
LAB_004019af:
        uVar10 = 0x2000;
        do {
          ppuVar11 = *(undefined ***)((long)param_2 + lVar9 + 8);
          uVar3 = *(undefined8 *)((long)param_2 + lVar9 + 0x10);
          iVar2 = FUN_00404cd0(ppuVar11,0,0,&local_50,0);
          if ((iVar2 != 0) || (local_50 != (local_50 & 0xffffffff))) {
LAB_00401cf0:
            param_2 = (undefined **)FUN_00404480(ppuVar11);
            uVar3 = dcgettext(0,"invalid major device number %s",5);
            error(1,0,uVar3,param_2);
LAB_00401d20:
            uVar3 = dcgettext(0,"invalid device %s %s",5);
            error(1,0,uVar3,ppuVar11);
            goto LAB_00401d48;
          }
          iVar2 = FUN_00404cd0(uVar3,0,0,&local_48,0);
          if ((iVar2 != 0) || (local_48 != (local_48 & 0xffffffff))) {
            uVar3 = FUN_00404480(uVar3);
            uVar7 = dcgettext(0,"invalid minor device number %s",5);
            error(1,0,uVar7,uVar3);
            goto LAB_00401cf0;
          }
          uVar5 = (local_50 & 0xfffff000) << 0x20 | (ulong)((uint)(local_50 << 8) & 0xfff00) |
                  (local_48 & 0xffffff00) << 0xc | local_48 & 0xff;
          if (uVar5 == 0xffffffffffffffff) goto LAB_00401d20;
          local_40[0] = uVar5;
          iVar2 = __xmknod(0,param_2[DAT_0060a258._4_4_],uVar10 | unaff_R13D,local_40);
          if (iVar2 == 0) goto LAB_0040196b;
          param_2 = (undefined **)FUN_00404300(0,3,param_2[DAT_0060a258._4_4_]);
          piVar6 = __errno_location();
          cVar1 = error(1,*piVar6,"%s",param_2);
          lVar9 = extraout_RDX;
LAB_00401ac1:
          uVar10 = 0x6000;
        } while (cVar1 == 'b');
LAB_00401acf:
        param_2 = (undefined **)FUN_00404480();
        pcVar12 = "invalid device type %s";
      }
      else {
        if (cVar1 < 'd') goto LAB_00401ac1;
        if (cVar1 != 'p') {
          if (cVar1 == 'u') goto LAB_004019af;
          goto LAB_00401acf;
        }
        iVar2 = mkfifo(param_2[lVar4],unaff_R13D);
        if (iVar2 == 0) {
LAB_0040196b:
          if ((lVar14 == 0) || (iVar2 = chmod(param_2[DAT_0060a258._4_4_],unaff_R13D), iVar2 == 0))
          {
            return 0;
          }
LAB_00401beb:
          ppuVar11 = (undefined **)FUN_00404230(4,param_2[DAT_0060a258._4_4_]);
          param_2 = (undefined **)dcgettext(0,"cannot set permissions of %s",5);
          piVar6 = __errno_location();
          ppuVar8 = ppuVar11;
          error(1,*piVar6,param_2);
          goto LAB_00401c30;
        }
LAB_00401d48:
        param_2 = (undefined **)FUN_00404300(0,3,param_2[DAT_0060a258._4_4_]);
        piVar6 = __errno_location();
        error(1,*piVar6,"%s",param_2);
LAB_00401d7d:
        param_2 = (undefined **)FUN_00404480(param_2[(long)ppuVar11 + -1]);
        pcVar12 = "missing operand after %s";
      }
LAB_00401ae1:
      uVar3 = dcgettext(0,pcVar12,5);
      ppuVar8 = param_2;
      error(0,0,uVar3);
    }
    else {
      puVar13 = param_2[(long)ppuVar8 + 2];
LAB_00401b1c:
      param_2 = (undefined **)FUN_00404480(puVar13);
      uVar3 = dcgettext(0,"extra operand %s",5);
      ppuVar8 = param_2;
      error(0,0,uVar3);
      uVar10 = (int)ppuVar11 - DAT_0060a258._4_4_;
      ppuVar11 = (undefined **)(ulong)uVar10;
      if (uVar10 == 4) {
        pcVar12 = "Fifos do not have major and minor device numbers.";
LAB_00401b5b:
        ppuVar8 = (undefined **)dcgettext(0,pcVar12,5);
        __fprintf_chk(stderr,1,"%s\n");
      }
    }
  } while( true );
}


void FUN_00401da0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_retaddr;
  undefined auStack_8 [8];
  
  (*(code *)PTR___libc_start_main_00609ff0)
            (FUN_00401790,unaff_retaddr,&stack0x00000008,FUN_004066b0,FUN_00406710,param_3,auStack_8
            );
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* WARNING: Removing unreachable block (ram,0x00401dd8) */
/* WARNING: Removing unreachable block (ram,0x00401de2) */

void FUN_00401dcb(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00401e19) */

void FUN_00401dea(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00401e56) */

void FUN_00401e21(void)

{
  if (DAT_0060a288 != '\0') {
    return;
  }
  FUN_00401dcb();
  DAT_0060a288 = 1;
  return;
}


/* WARNING: Removing unreachable block (ram,0x00401e19) */

void thunk_FUN_00401dea(void)

{
  return;
}


void FUN_00401e80(int param_1)

{
  FILE *pFVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 uVar5;
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
  undefined8 local_28;
  undefined8 local_20;
  byte **ppbVar7;
  
  uVar5 = DAT_0060a2a8;
  bVar14 = 0;
  if (param_1 != 0) {
    uVar3 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(stderr,1,uVar3,uVar5);
    goto LAB_00401ebf;
  }
  uVar3 = dcgettext(0,"Usage: %s [OPTION]... NAME TYPE [MAJOR MINOR]\n",5);
  __printf_chk(1,uVar3,uVar5);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"Create the special file NAME of the given TYPE.\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nMandatory arguments to long options are mandatory for short options too.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -m, --mode=MODE    set file permission bits to MODE, not a=rw - umask\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -Z                   set the SELinux security context to default type\n      --context[=CTX]  like -Z, or if CTX is specified then set the SELinux\n                         or SMACK security context to CTX\n"
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
                             "\nBoth MAJOR and MINOR must be specified when TYPE is b, c, or u, and they\nmust be omitted when TYPE is p.  If MAJOR or MINOR begins with 0x or 0X,\nit is interpreted as hexadecimal; otherwise, if it begins with 0, as octal;\notherwise, as decimal.  TYPE may be:\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\n  b      create a block (buffered) special file\n  c, u   create a character (unbuffered) special file\n  p      create a FIFO\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  uVar5 = dcgettext(0,
                    "\nNOTE: your shell may have its own version of %s, which usually supersedes\nthe version described here.  Please refer to your shell\'s documentation\nfor details about the options it supports.\n"
                    ,5);
  __printf_chk(1,uVar5,"mknod");
  local_88 = &DAT_0040678a;
  local_80 = "test invocation";
  local_78[0] = (byte *)0x406804;
  local_78[1] = (byte *)0x40679c;
  local_78[2] = (byte *)0x4067b2;
  local_78[3] = (byte *)0x4067bc;
  local_78[4] = (byte *)0x4067cb;
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
    lVar9 = 6;
    pbVar10 = (byte *)"mknod";
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
        pcVar4 = "mknod";
        goto LAB_0040221b;
      }
    }
    pcVar4 = "mknod";
    uVar5 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    pcVar8 = " invocation";
    __printf_chk(1,uVar5,"https://www.gnu.org/software/coreutils/","mknod");
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar8 = setlocale(5,(char *)0x0);
    if (pcVar8 != (char *)0x0) {
      iVar2 = strncmp(pcVar8,"en_",3);
      if (iVar2 != 0) {
LAB_0040221b:
        uVar5 = dcgettext(0,"Report %s translation bugs to <https://translationproject.org/team/>\n"
                          ,5);
        __printf_chk(1,uVar5,"mknod");
      }
    }
    pcVar8 = " invocation";
    uVar5 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    __printf_chk(1,uVar5,"https://www.gnu.org/software/coreutils/","mknod");
    if (pcVar4 != "mknod") {
      pcVar8 = "";
    }
  }
  uVar5 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(1,uVar5,pcVar4,pcVar8);
LAB_00401ebf:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}


void FUN_00402250(undefined8 param_1)

{
  DAT_0060a2a0 = param_1;
  return;
}


void FUN_00402260(undefined param_1)

{
  DAT_0060a298 = param_1;
  return;
}


void FUN_00402270(void)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  iVar1 = FUN_00405f60(stdout);
  if (iVar1 != 0) {
    piVar2 = __errno_location();
    if ((DAT_0060a298 == '\0') || (*piVar2 != 0x20)) {
      uVar3 = dcgettext(0,"write error",5);
      if (DAT_0060a2a0 == 0) {
        error(0,*piVar2,"%s",uVar3);
      }
      else {
        uVar4 = FUN_004042d0();
        error(0,*piVar2,"%s: %s",uVar4,uVar3);
      }
      goto LAB_004022ee;
    }
  }
  iVar1 = FUN_00405f60(stderr);
  if (iVar1 == 0) {
    return;
  }
LAB_004022ee:
                    /* WARNING: Subroutine does not return */
  _exit(DAT_0060a1f8);
}


undefined2 * FUN_00402310(byte *param_1)

{
  byte bVar1;
  undefined2 *puVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined uVar8;
  byte bVar9;
  ulong uVar10;
  undefined uVar11;
  undefined2 *puVar12;
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
        return (undefined2 *)0x0;
      }
      bVar9 = *pbVar4;
      uVar5 = (uint)(char)bVar9;
    } while ((byte)(bVar9 - 0x30) < 8);
    if (bVar9 != 0) {
      return (undefined2 *)0x0;
    }
    uVar5 = uVar7 & 0xc00 | 0x3ff;
    if (4 < (long)pbVar4 - (long)param_1) {
      uVar5 = 0xfff;
    }
    puVar2 = (undefined2 *)FUN_00404a40(0x20);
    *puVar2 = 0x13d;
    *(undefined4 *)(puVar2 + 2) = 0xfff;
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
      FUN_00404c90();
    }
  }
  puVar2 = (undefined2 *)FUN_00404a40();
  lVar13 = 0;
LAB_0040238b:
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
        if (bVar9 != 0x67) goto LAB_004023bb;
        uVar5 = uVar5 | 0x438;
      }
    }
    param_1 = param_1 + 1;
  } while( true );
  if (((bVar9 != 0x2d) && (bVar9 != 0x3d)) && (bVar9 != 0x2b)) goto LAB_004023bb;
  puVar12 = puVar2 + lVar13 * 8;
  do {
    lVar13 = lVar13 + 1;
    bVar9 = param_1[1];
    uVar6 = (uint)(char)bVar9;
    uVar11 = (undefined)uVar7;
    if (bVar9 == 0x67) {
      uVar3 = 0x38;
LAB_0040242e:
      *(undefined *)((long)puVar12 + 1) = 3;
      *(uint *)(puVar12 + 2) = uVar5;
      *(uint *)(puVar12 + 4) = uVar3;
      *(undefined *)puVar12 = uVar11;
      param_1 = param_1 + 2;
      uVar7 = (uint)*param_1;
LAB_00402446:
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
          if (bVar9 != 0x75) goto LAB_00402510;
        }
        goto LAB_0040242e;
      }
      if (7 < (byte)(bVar9 - 0x30)) {
LAB_00402510:
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
            goto switchD_00402524_caseD_1;
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
switchD_00402524_caseD_1:
        *(undefined *)puVar12 = uVar11;
        *(undefined *)((long)puVar12 + 1) = uVar8;
        *(uint *)(puVar12 + 2) = uVar5;
        *(uint *)(puVar12 + 4) = uVar3;
        goto LAB_00402446;
      }
      uVar6 = 0;
      param_1 = param_1 + 1;
      do {
        uVar6 = (uVar7 - 0x30) + uVar6 * 8;
        param_1 = param_1 + 1;
        if (0xfff < uVar6) goto LAB_004023bb;
        bVar9 = *param_1;
        uVar7 = (uint)(char)bVar9;
      } while ((byte)(bVar9 - 0x30) < 8);
      if ((uVar5 != 0) || ((bVar9 != 0 && (bVar9 != 0x2c)))) goto LAB_004023bb;
      *(undefined *)puVar12 = uVar11;
      uVar5 = 0xfff;
      *(uint *)(puVar12 + 4) = uVar6;
      uVar3 = 0xfff;
      *(undefined *)((long)puVar12 + 1) = 1;
      *(undefined4 *)(puVar12 + 2) = 0xfff;
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
LAB_004023bb:
    free(puVar2);
    return (undefined2 *)0x0;
  }
  param_1 = param_1 + 1;
  goto LAB_0040238b;
}


undefined2 * FUN_00402680(char *param_1)

{
  int iVar1;
  undefined2 *puVar2;
  stat sStack_98;
  
  iVar1 = __xstat(1,param_1,&sStack_98);
  puVar2 = (undefined2 *)0x0;
  if (iVar1 == 0) {
    puVar2 = (undefined2 *)FUN_00404a40(0x20);
    *puVar2 = 0x13d;
    *(undefined4 *)(puVar2 + 2) = 0xfff;
    *(__mode_t *)(puVar2 + 4) = sStack_98.st_mode;
    *(undefined4 *)(puVar2 + 6) = 0xfff;
    *(undefined *)((long)puVar2 + 0x11) = 0;
  }
  return puVar2;
}


void FUN_004026e0(uint param_1,char param_2,uint param_3,char *param_4,uint *param_5)

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
        if (cVar7 != '\x02') goto LAB_0040271f;
        if ((param_1 & 0x49) != 0) goto LAB_004027cc;
LAB_00402764:
        cVar7 = *param_4;
        uVar4 = uVar4 & uVar6;
        if (uVar1 != 0) goto LAB_004027e0;
LAB_00402770:
        uVar4 = uVar4 & ~param_3;
        if (cVar7 != '-') {
          if (cVar7 == '=') goto LAB_004027fb;
          goto LAB_00402783;
        }
LAB_00402830:
        uVar2 = uVar2 | uVar4;
        param_1 = param_1 & ~uVar4;
LAB_0040278d:
        cVar7 = param_4[0x11];
        param_4 = param_4 + 0x10;
        if (cVar7 == '\0') goto LAB_00402818;
      }
      uVar5 = *(uint *)(param_4 + 0xc) | 0xfffff3ff;
      uVar3 = ~*(uint *)(param_4 + 0xc) & 0xc00;
      uVar8 = uVar3;
      if (cVar7 != '\x02') {
LAB_0040271f:
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
        goto LAB_00402764;
      }
LAB_004027cc:
      cVar7 = *param_4;
      uVar4 = (uVar4 | 0x49) & uVar5;
      uVar6 = uVar5;
      if (uVar1 == 0) goto LAB_00402770;
LAB_004027e0:
      uVar4 = uVar4 & uVar1;
      if (cVar7 == '-') goto LAB_00402830;
      if (cVar7 != '=') {
LAB_00402783:
        if (cVar7 == '+') {
          uVar2 = uVar2 | uVar4;
          param_1 = param_1 | uVar4;
        }
        goto LAB_0040278d;
      }
      uVar3 = uVar3 | ~uVar1;
      uVar6 = ~uVar3;
LAB_004027fb:
      cVar7 = param_4[0x11];
      uVar2 = uVar2 | uVar6 & 0xfff;
      param_1 = param_1 & uVar3 | uVar4;
      param_4 = param_4 + 0x10;
    } while (cVar7 != '\0');
  }
LAB_00402818:
  if (param_5 != (uint *)0x0) {
    *param_5 = uVar2;
  }
  return;
}


void FUN_00402860(byte *param_1)

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
        pbVar6 = &DAT_00407200;
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
  DAT_0060a2a8 = param_1;
  program_invocation_name = param_1;
  return;
}


char * FUN_00402900(char *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  byte *pbVar3;
  
  pcVar2 = (char *)dcgettext(0,param_1,5);
  if (param_1 == pcVar2) {
    pbVar3 = (byte *)FUN_00406020();
    if ((*pbVar3 & 0xdf) == 0x55) {
      if (((((pbVar3[1] & 0xdf) != 0x54) || ((pbVar3[2] & 0xdf) != 0x46)) || (pbVar3[3] != 0x2d)) ||
         ((pbVar3[4] != 0x38 || (pbVar3[5] != 0)))) {
LAB_004029d8:
        pcVar2 = "\"";
        if (param_2 != 9) {
          pcVar2 = "\'";
        }
        return pcVar2;
      }
      cVar1 = *pcVar2;
      pcVar2 = &DAT_00407211;
      if (cVar1 != '`') {
        pcVar2 = &DAT_00407206;
      }
    }
    else {
      if (((((*pbVar3 & 0xdf) != 0x47) || ((pbVar3[1] & 0xdf) != 0x42)) || (pbVar3[2] != 0x31)) ||
         (((pbVar3[3] != 0x38 || (pbVar3[4] != 0x30)) ||
          ((pbVar3[5] != 0x33 || ((pbVar3[6] != 0x30 || (pbVar3[7] != 0)))))))) goto LAB_004029d8;
      cVar1 = *pcVar2;
      pcVar2 = &DAT_0040720d;
      if (cVar1 != '`') {
        pcVar2 = &DAT_0040720a;
      }
    }
  }
  return pcVar2;
}


ulong FUN_00402a00(undefined *param_1,ulong param_2,char *param_3,ulong param_4,int param_5,
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
LAB_00403651:
    if (param_2 != 0) {
      bVar3 = false;
      local_5b = false;
      bVar2 = true;
      local_70 = 0;
      goto LAB_00403286;
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
      goto LAB_00403651;
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
      param_8 = (char *)FUN_00402900(&DAT_00407215,param_5);
      param_9 = (char *)FUN_00402900(&DAT_0040876f);
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
LAB_00402a98:
  uVar22 = 0;
  bVar5 = local_5b;
LAB_00402aa8:
  bVar23 = param_4 != uVar22;
  if (param_4 == 0xffffffffffffffff) {
    bVar23 = param_3[uVar22] != '\0';
  }
  bVar26 = bVar6;
  if (!bVar23) goto LAB_00403228;
  bVar20 = (bool)(param_5 != 2 & bVar6);
  __s1 = (byte *)(param_3 + uVar22);
  uVar16 = uVar15;
  bVar4 = bVar3;
  if (bVar20) {
    if (local_a0 == 0) {
LAB_004031a0:
      uVar19 = (ulong)*__s1;
      switch(uVar19) {
      case 0:
        goto switchD_004031b2_caseD_0;
      default:
        bVar20 = false;
        goto switchD_0040301e_caseD_1;
      case 7:
        bVar17 = 0x61;
        goto LAB_00402eb5;
      case 8:
        bVar17 = 0x62;
        break;
      case 9:
switchD_004031b2_caseD_9:
        bVar17 = 0x74;
        break;
      case 10:
switchD_004031b2_caseD_a:
        bVar17 = 0x6e;
        break;
      case 0xb:
switchD_004031b2_caseD_b:
        bVar17 = 0x76;
        goto LAB_00402eb5;
      case 0xc:
switchD_004031b2_caseD_c:
        bVar17 = 0x66;
LAB_00402eb5:
        if (local_5c) {
          bVar25 = false;
          goto LAB_00402e08;
        }
LAB_00402ec0:
        bVar23 = false;
        goto LAB_00402c7b;
      case 0xd:
        bVar20 = false;
switchD_00402b98_caseD_d:
        bVar25 = param_5 == 2;
        uVar19 = 0xd;
        bVar13 = 0x72;
        goto LAB_00402dd0;
      case 0x20:
        bVar25 = false;
LAB_004031fa:
        uVar19 = 0x20;
        goto LAB_004031c2;
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
switchD_00402b98_caseD_21:
        bVar25 = false;
        goto LAB_00402ddb;
      case 0x23:
      case 0x7e:
        bVar26 = false;
LAB_004031da:
        if (uVar22 == 0) {
          bVar25 = false;
          bVar23 = bVar20;
          bVar20 = bVar26;
          goto LAB_00402be8;
        }
        bVar23 = false;
        goto LAB_00402bff;
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
LAB_004031c2:
        bVar24 = false;
        bVar23 = bVar20;
        bVar20 = bVar25;
        goto LAB_00402c01;
      case 0x27:
        bVar20 = false;
        goto switchD_0040301e_caseD_27;
      case 0x3f:
        bVar20 = false;
        goto switchD_0040301e_caseD_3f;
      case 0x5c:
        bVar20 = false;
        goto switchD_00402b98_caseD_5c;
      case 0x7b:
      case 0x7d:
        bVar20 = false;
        goto switchD_0040301e_caseD_7b;
      }
      bVar25 = false;
      bVar23 = false;
      goto joined_r0x00402df7;
    }
    if ((param_4 == 0xffffffffffffffff) && (1 < local_a0)) {
      param_4 = strlen(param_3);
    }
    if ((param_4 < uVar22 + local_a0) || (iVar7 = memcmp(__s1,local_78,local_a0), iVar7 != 0))
    goto LAB_004031a0;
    if (!local_5c) {
      uVar19 = (ulong)*__s1;
      bVar25 = bVar20;
      switch(uVar19) {
      case 0:
        goto switchD_00402b98_caseD_0;
      default:
        goto switchD_0040301e_caseD_1;
      case 7:
        bVar17 = 0x61;
        goto LAB_00402ec0;
      case 8:
        bVar25 = false;
        bVar23 = false;
        bVar17 = 0x62;
        break;
      case 9:
        goto switchD_004031b2_caseD_9;
      case 10:
        goto switchD_004031b2_caseD_a;
      case 0xb:
        goto switchD_004031b2_caseD_b;
      case 0xc:
        goto switchD_004031b2_caseD_c;
      case 0xd:
        goto switchD_00402b98_caseD_d;
      case 0x20:
        goto LAB_004031fa;
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
        goto switchD_00402b98_caseD_21;
      case 0x23:
      case 0x7e:
        bVar26 = bVar20;
        goto LAB_004031da;
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
        goto LAB_004031c2;
      case 0x27:
        goto switchD_0040301e_caseD_27;
      case 0x3f:
        goto switchD_0040301e_caseD_3f;
      case 0x5c:
        goto switchD_00402b98_caseD_5c;
      case 0x7b:
      case 0x7d:
        goto switchD_0040301e_caseD_7b;
      }
      goto LAB_00402c42;
    }
    goto LAB_00402e1a;
  }
  uVar19 = (ulong)*__s1;
  switch(uVar19) {
  case 0:
    if (bVar6) {
switchD_004031b2_caseD_0:
      if (!local_5c) {
        bVar20 = false;
switchD_00402b98_caseD_0:
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
            goto LAB_00402cf8;
          }
LAB_00402f3a:
          param_1[uVar16] = 0x5c;
          uVar15 = uVar16;
        }
        else if (uVar15 < uVar9) goto LAB_00402f3a;
        uVar16 = uVar15 + 1;
        bVar24 = bVar23;
        if (param_5 == 2) {
          bVar17 = 0x30;
          bVar23 = false;
          bVar4 = bVar3;
          goto LAB_00402cf8;
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
LAB_00402f79:
        bVar17 = (byte)uVar19;
        bVar23 = false;
        uVar15 = uVar16;
        bVar4 = bVar3;
        if ((bool)(bVar6 ^ 1U | bVar26)) goto LAB_00402cf8;
        goto LAB_00402c01;
      }
      bVar26 = param_5 == 2;
      goto LAB_00402e0c;
    }
    if ((param_6 & 1) == 0) {
      bVar25 = param_5 == 2;
      uVar19 = 0;
      bVar23 = false;
      bVar20 = false;
      goto LAB_00402be8;
    }
    uVar22 = uVar22 + 1;
    goto LAB_00402aa8;
  default:
switchD_0040301e_caseD_1:
    bVar25 = bVar6;
    if (sVar8 != 1) {
      local_40[0] = (mbstate_t)0x0;
      if (param_4 == 0xffffffffffffffff) {
        param_4 = strlen(param_3);
      }
      uVar21 = 0;
      do {
        uVar1 = uVar22 + uVar21;
        lVar11 = FUN_00405ee0(&local_44,param_3 + uVar1,param_4 - uVar1,local_40);
        if (lVar11 == 0) break;
        if (lVar11 == -1) {
          bVar23 = false;
          goto LAB_0040392a;
        }
        if (lVar11 == -2) {
          if ((param_4 <= uVar1) || (param_3[uVar1] == '\0')) goto LAB_00403a67;
          goto LAB_00403a57;
        }
        if (((param_5 == 2) && (local_5c)) && (lVar11 != 1)) {
          pcVar12 = param_3 + uVar1 + 1;
          do {
            if (((byte)(*pcVar12 + 0xa5U) < 0x22) &&
               ((1L << (*pcVar12 + 0xa5U & 0x3f) & 0x20000002bU) != 0)) {
              param_5 = 2;
              goto LAB_00402e0c;
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
      goto LAB_0040392a;
    }
    ppuVar10 = __ctype_b_loc();
    uVar21 = 1;
    bVar25 = ((*ppuVar10)[uVar19] & 0x4000) == 0;
    bVar23 = !bVar25;
    bVar25 = (bool)(bVar25 & bVar6);
    goto LAB_00402ff4;
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
    goto LAB_00403032;
  case 10:
    uVar19 = 10;
    bVar13 = 0x6e;
    goto LAB_00403032;
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
LAB_00403032:
    bVar25 = param_5 == 2;
    bVar20 = (bool)(local_5c & bVar25);
    if (bVar20) {
LAB_0040304a:
      param_5 = 2;
      goto LAB_00402e0c;
    }
    break;
  case 0x20:
    uVar19 = 0x20;
    goto LAB_00402bd6;
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
LAB_00402bd6:
    bVar25 = param_5 == 2;
    if ((local_5c) && (bVar25)) goto LAB_0040304a;
    goto LAB_00402be8;
  case 0x23:
  case 0x7e:
LAB_00402bcd:
    bVar25 = param_5 == 2;
    if (uVar22 == 0) goto LAB_00402bd6;
    goto LAB_00402ddb;
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
    goto switchD_0040301e_caseD_25;
  case 0x27:
switchD_0040301e_caseD_27:
    bVar5 = bVar23;
    if (param_5 != 2) {
      bVar25 = false;
      uVar19 = 0x27;
      goto LAB_00402be8;
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
      goto LAB_00402cf8;
    }
    goto LAB_00402e0c;
  case 0x3f:
switchD_0040301e_caseD_3f:
    if (param_5 == 2) {
      if (!local_5c) {
        bVar17 = 0x3f;
        bVar24 = false;
        bVar23 = false;
        goto LAB_00402cf8;
      }
      goto LAB_00402e0c;
    }
    if (param_5 != 5) {
      bVar25 = param_5 == 2;
      uVar19 = 0x3f;
      bVar23 = false;
      goto LAB_00402be8;
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
        goto LAB_00402f79;
      }
      goto LAB_00402e1a;
    }
    bVar25 = false;
    uVar19 = 0x3f;
    bVar23 = false;
    goto LAB_00402be8;
  case 0x5c:
    if (param_5 != 2) {
switchD_00402b98_caseD_5c:
      uVar19 = 0x5c;
      bVar17 = 0x5c;
      bVar13 = 0x5c;
      bVar25 = (bool)(bVar6 & local_5c & local_a0 != 0);
      if (!bVar25) break;
      uVar22 = uVar22 + 1;
      bVar23 = false;
      goto LAB_00402d14;
    }
    if (local_5c) goto LAB_00402e0c;
    uVar22 = uVar22 + 1;
    bVar23 = false;
    bVar17 = 0x5c;
    goto LAB_00402d14;
  case 0x7b:
  case 0x7d:
switchD_0040301e_caseD_7b:
    bVar24 = param_4 != 1;
    if (param_4 == 0xffffffffffffffff) {
      bVar24 = param_3[1] != '\0';
    }
    bVar25 = param_5 == 2;
    if (!bVar24) goto LAB_00402bcd;
    goto LAB_00402ddb;
  }
LAB_00402dd0:
  if (!bVar6) {
LAB_00402ddb:
    bVar23 = false;
    goto LAB_00402be8;
  }
  bVar23 = false;
  bVar17 = bVar13;
  goto joined_r0x00402df7;
LAB_00403228:
  if ((uVar15 == 0) && ((bool)(local_5c & param_5 == 2))) {
    param_5 = 2;
LAB_00402e0c:
    if (bVar26) {
      param_5 = 4;
    }
LAB_00402e1a:
    uVar9 = FUN_00402a00(param_1,uVar9,param_3,param_4,param_5,param_6 & 0xfffffffd,0,param_8,
                         param_9);
    return uVar9;
  }
  bVar26 = (bool)(param_5 == 2 & (local_5c ^ 1U));
  bVar23 = (bool)(local_5c ^ 1U);
  if ((!bVar26) || (bVar23 = bVar26, !bVar5)) {
LAB_00403afd:
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
    uVar9 = FUN_00402a00(param_1,local_70,param_3,param_4,5,param_6,param_7,param_8,param_9);
    return uVar9;
  }
  local_5b = uVar9 == 0 && local_70 != 0;
  param_2 = local_70;
  bVar23 = bVar5;
  if (uVar9 != 0 || local_70 == 0) goto LAB_00403afd;
LAB_00403286:
  *param_1 = 0x27;
  param_5 = 2;
  uVar15 = 1;
  local_78 = "\'";
  local_a0 = 1;
  local_5c = false;
  uVar9 = param_2;
  goto LAB_00402a98;
  while (__s1[uVar21] != 0) {
LAB_00403a57:
    uVar21 = uVar21 + 1;
    if (param_4 <= uVar22 + uVar21) break;
  }
LAB_00403a67:
  bVar23 = false;
LAB_0040392a:
  if (1 < uVar21) {
LAB_004034ee:
    bVar26 = false;
    uVar21 = uVar21 + uVar22;
    uVar16 = uVar22;
    do {
      bVar17 = (byte)uVar19;
      if (bVar25) {
        bVar26 = param_5 == 2;
        if (local_5c) goto LAB_00402e0c;
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
        if (uVar21 <= uVar22) goto LAB_00402c8d;
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
        if (uVar21 <= uVar22) goto LAB_00402d14;
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
LAB_00402ff4:
  if (bVar25) {
    bVar23 = false;
    bVar25 = bVar6;
    goto LAB_004034ee;
  }
switchD_0040301e_caseD_25:
  bVar25 = param_5 == 2;
LAB_00402be8:
  bVar17 = (byte)uVar19;
  bVar24 = (bool)((bVar6 ^ 1U | bVar25) ^ 1 | local_5c);
  bVar26 = bVar20;
  if (bVar24) {
LAB_00402bff:
    bVar24 = false;
    bVar20 = bVar26;
LAB_00402c01:
    bVar17 = (byte)uVar19;
    uVar16 = uVar15;
    bVar4 = bVar3;
    if ((param_7 == 0) || ((*(uint *)(param_7 + (uVar19 >> 5) * 4) >> (bVar17 & 0x1f) & 1) == 0))
    goto LAB_00402cf8;
    bVar25 = param_5 == 2;
  }
  else {
LAB_00402cf8:
    bVar25 = param_5 == 2;
    uVar15 = uVar16;
    bVar3 = bVar4;
    if (!bVar20) {
      uVar22 = uVar22 + 1;
      bVar3 = (bool)((bVar24 ^ 1U) & bVar4);
LAB_00402d14:
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
      goto LAB_00402c8d;
    }
  }
joined_r0x00402df7:
  if (local_5c) {
LAB_00402e08:
    bVar26 = (bool)(bVar6 & bVar25);
    goto LAB_00402e0c;
  }
LAB_00402c42:
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
LAB_00402c7b:
  if (uVar15 < uVar9) {
    param_1[uVar15] = 0x5c;
  }
  uVar15 = uVar15 + 1;
  uVar22 = uVar22 + 1;
  bVar4 = bVar3;
LAB_00402c8d:
  bVar3 = bVar4;
  if (uVar15 < uVar9) {
    param_1[uVar15] = bVar17;
  }
  uVar15 = uVar15 + 1;
  if (!bVar23) {
    bVar2 = false;
  }
  goto LAB_00402aa8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00403c30(int param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

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
  puVar8 = (undefined4 *)PTR_DAT_0060a238;
  if (DAT_0060a250 <= param_1) {
    if (param_1 == 0x7fffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_00404c90();
    }
    if (PTR_DAT_0060a238 == &DAT_0060a240) {
      puVar8 = (undefined4 *)FUN_00404aa0(0);
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
      puVar8 = (undefined4 *)FUN_00404aa0(PTR_DAT_0060a238);
      PTR_DAT_0060a238 = (undefined *)puVar8;
    }
    memset(puVar8 + (long)DAT_0060a250 * 4,0,(long)((param_1 + 1) - DAT_0060a250) << 4);
    DAT_0060a250 = param_1 + 1;
  }
  uVar2 = param_4[1];
  puVar10 = (ulong *)(puVar8 + (long)param_1 * 4);
  uVar4 = *puVar10;
  __ptr = (undefined *)puVar10[1];
  uVar9 = FUN_00402a00(__ptr,uVar4,param_2,param_3,*param_4,uVar2 | 1,param_4 + 2,
                       *(undefined8 *)(param_4 + 10),*(undefined8 *)(param_4 + 0xc));
  if (uVar4 <= uVar9) {
    uVar9 = uVar9 + 1;
    *puVar10 = uVar9;
    if (__ptr != &DAT_0060a2c0) {
      free(__ptr);
    }
    __ptr = (undefined *)FUN_00404a40(uVar9);
    uVar3 = *param_4;
    puVar10[1] = (ulong)__ptr;
    FUN_00402a00(__ptr,uVar9,param_2,param_3,uVar3,uVar2 | 1,param_4 + 2,
                 *(undefined8 *)(param_4 + 10),*(undefined8 *)(param_4 + 0xc));
  }
  *piVar7 = iVar1;
  return __ptr;
}


void FUN_00403dd0(undefined *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_0060a3c0;
  }
  FUN_00404c40(param_1,0x38);
  *piVar2 = iVar1;
  return;
}


undefined4 FUN_00403e10(undefined4 *param_1)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)&DAT_0060a3c0;
  }
  return *param_1;
}


void FUN_00403e20(undefined4 *param_1,undefined4 param_2)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)&DAT_0060a3c0;
  }
  *param_1 = param_2;
  return;
}


uint FUN_00403e30(undefined *param_1,byte param_2,uint param_3)

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


undefined4 FUN_00403e70(undefined *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_0060a3c0;
  }
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_1 + 4) = param_2;
  return uVar1;
}


void FUN_00403e90(undefined4 *param_1,long param_2,long param_3)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)&DAT_0060a3c0;
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


void FUN_00403ec0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 *param_5)

{
  int iVar1;
  int *piVar2;
  
  if (param_5 == (undefined4 *)0x0) {
    param_5 = (undefined4 *)&DAT_0060a3c0;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  FUN_00402a00(param_1,param_2,param_3,param_4,*param_5,param_5[1],param_5 + 2,
               *(undefined8 *)(param_5 + 10),*(undefined8 *)(param_5 + 0xc));
  *piVar2 = iVar1;
  return;
}


undefined8 FUN_00403f40(undefined8 param_1,undefined8 param_2,long *param_3,undefined4 *param_4)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  
  if (param_4 == (undefined4 *)0x0) {
    param_4 = (undefined4 *)&DAT_0060a3c0;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  uVar5 = (uint)(param_3 == (long *)0x0) | param_4[1];
  lVar3 = FUN_00402a00(0,0,param_1,param_2,*param_4,uVar5,param_4 + 2,*(undefined8 *)(param_4 + 10),
                       *(undefined8 *)(param_4 + 0xc));
  uVar4 = FUN_00404a40(lVar3 + 1);
  FUN_00402a00(uVar4,lVar3 + 1,param_1,param_2,*param_4,uVar5,param_4 + 2,
               *(undefined8 *)(param_4 + 10),*(undefined8 *)(param_4 + 0xc));
  *piVar2 = iVar1;
  if (param_3 != (long *)0x0) {
    *param_3 = lVar3;
  }
  return uVar4;
}


void FUN_00404030(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00403f40(param_1,param_2,0,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404040(void)

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


void FUN_004040e0(undefined8 param_1,undefined8 param_2)

{
  FUN_00403c30(param_1,param_2,0xffffffffffffffff,&DAT_0060a3c0);
  return;
}


void FUN_00404100(void)

{
  FUN_00403c30();
  return;
}


void FUN_00404110(undefined8 param_1)

{
  FUN_00403c30(0,param_1,0xffffffffffffffff,&DAT_0060a3c0);
  return;
}


void FUN_00404130(undefined8 param_1,undefined8 param_2)

{
  FUN_00403c30(0,param_1,param_2,&DAT_0060a3c0);
  return;
}


void FUN_00404150(undefined8 param_1,int param_2,undefined8 param_3)

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
    FUN_00403c30(param_1,param_3,0xffffffffffffffff,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_004041c0(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

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
    FUN_00403c30(param_1,param_3,param_4,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00404230(undefined4 param_1,undefined8 param_2)

{
  FUN_00404150(0,param_1,param_2);
  return;
}


void FUN_00404240(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_004041c0(0,param_1,param_2,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404250(undefined8 param_1,undefined8 param_2,byte param_3)

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
  FUN_00403c30(0,param_1,param_2,&local_48);
  return;
}


void FUN_004042c0(undefined8 param_1,char param_2)

{
  FUN_00404250(param_1,0xffffffffffffffff,(int)param_2);
  return;
}


void FUN_004042d0(undefined8 param_1)

{
  FUN_00404250(param_1,0xffffffffffffffff,0x3a);
  return;
}


void FUN_004042f0(undefined8 param_1,undefined8 param_2)

{
  FUN_00404250(param_1,param_2,0x3a);
  return;
}


void FUN_00404300(undefined8 param_1,int param_2,undefined8 param_3)

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
    FUN_00403c30(param_1,param_3,0xffffffffffffffff,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404370(undefined8 param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5
                 )

{
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
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
    FUN_00403c30(param_1,param_4,param_5,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_004043e0(void)

{
  FUN_00404370();
  return;
}


void FUN_004043f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00404370(0,param_1,param_2,param_3,0xffffffffffffffff);
  return;
}


void FUN_00404410(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00404370(0,param_1,param_2,param_3,param_4);
  return;
}


void FUN_00404430(void)

{
  FUN_00403c30();
  return;
}


void FUN_00404440(undefined8 param_1,undefined8 param_2)

{
  FUN_00403c30(0,param_1,param_2,&DAT_0060a200);
  return;
}


void FUN_00404460(undefined8 param_1,undefined8 param_2)

{
  FUN_00403c30(param_1,param_2,0xffffffffffffffff,&DAT_0060a200);
  return;
}


void FUN_00404480(undefined8 param_1)

{
  FUN_00403c30(0,param_1,0xffffffffffffffff,&DAT_0060a200);
  return;
}


undefined8
FUN_004044a0(FILE *param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5,
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
  uVar1 = dcgettext(0,&DAT_00407f6b,5);
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
    goto LAB_0040471c;
  case 5:
    uVar1 = param_5[3];
    uVar4 = param_5[2];
    uVar5 = param_5[1];
    uVar6 = *param_5;
    uVar7 = dcgettext(0,"Written by %s, %s, %s,\n%s, and %s.\n",5);
LAB_0040471c:
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
    goto LAB_004047b9;
  case 7:
    uVar1 = param_5[2];
    uVar4 = param_5[5];
    uVar5 = param_5[4];
    uVar6 = param_5[3];
    local_58 = param_5[1];
    uVar7 = *param_5;
    uVar3 = dcgettext(0,"Written by %s, %s, %s,\n%s, %s, %s, and %s.\n",5);
LAB_004047b9:
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
    goto LAB_0040459a;
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
LAB_0040459a:
  uVar1 = __fprintf_chk(param_1,1,uVar3,uVar7,local_50,local_58,uVar6,uVar5,uVar4,uVar1,local_48);
  return uVar1;
}


void FUN_00404880(void)

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
  FUN_004044a0();
  return;
}


void FUN_004048a0(void)

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
  FUN_004044a0();
  return;
}


void FUN_00404900(void)

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
  FUN_004044a0();
  return;
}


void FUN_004049c0(void)

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


void FUN_00404a40(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00404c90();
  }
  return;
}


void FUN_00404a60(ulong param_1,ulong param_2)

{
  if ((-1 < SUB168(ZEXT816(param_1) * ZEXT816(param_2),0)) &&
     (SUB168(ZEXT816(param_1) * ZEXT816(param_2) >> 0x40,0) == 0)) {
    FUN_00404a40();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00404c90();
}


void thunk_FUN_00404a40(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00404c90();
  }
  return;
}


void * FUN_00404aa0(void *param_1,size_t param_2)

{
  void *pvVar1;
  
  if ((param_2 == 0) && (param_1 != (void *)0x0)) {
    free(param_1);
    return (void *)0x0;
  }
  pvVar1 = realloc(param_1,param_2);
  if ((pvVar1 == (void *)0x0) && (param_2 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00404c90();
  }
  return pvVar1;
}


void FUN_00404ae0(undefined8 param_1,ulong param_2,ulong param_3)

{
  if ((-1 < SUB168(ZEXT816(param_2) * ZEXT816(param_3),0)) &&
     (SUB168(ZEXT816(param_2) * ZEXT816(param_3) >> 0x40,0) == 0)) {
    FUN_00404aa0();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00404c90();
}


void FUN_00404b10(long param_1,ulong *param_2,ulong param_3)

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
    if ((SUB168(ZEXT816(uVar2) * ZEXT816(param_3),0) < 0) || (uVar3 != 0)) goto LAB_00404b6b;
  }
  else {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x5555555555555554);
    uVar3 = SUB168(auVar1 % ZEXT816(param_3),0);
    if (SUB168(auVar1 / ZEXT816(param_3),0) <= uVar2) {
LAB_00404b6b:
                    /* WARNING: Subroutine does not return */
      FUN_00404c90(param_1,param_2,uVar3);
    }
    uVar2 = (uVar2 >> 1) + 1 + uVar2;
  }
  *param_2 = uVar2;
  FUN_00404aa0(param_1,uVar2 * param_3);
  return;
}


void FUN_00404ba0(long param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (param_1 == 0) {
    if (uVar1 == 0) {
      *param_2 = 0x80;
      FUN_00404aa0(0,0x80);
      return;
    }
    if ((long)uVar1 < 0) goto LAB_00404bea;
  }
  else {
    if (0x5555555555555553 < uVar1) {
LAB_00404bea:
                    /* WARNING: Subroutine does not return */
      FUN_00404c90();
    }
    uVar1 = (uVar1 >> 1) + 1 + uVar1;
  }
  *param_2 = uVar1;
  FUN_00404aa0(param_1,uVar1);
  return;
}


void FUN_00404bf0(size_t param_1)

{
  void *__s;
  
  __s = (void *)FUN_00404a40();
  memset(__s,0,param_1);
  return;
}


void FUN_00404c10(size_t param_1,ulong param_2)

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
  FUN_00404c90();
}


void FUN_00404c40(void *param_1,size_t param_2)

{
  void *__dest;
  
  __dest = (void *)FUN_00404a40(param_2);
  memcpy(__dest,param_1,param_2);
  return;
}


void FUN_00404c70(char *param_1)

{
  void *__dest;
  size_t sVar1;
  
  sVar1 = strlen(param_1);
  __dest = (void *)FUN_00404a40(sVar1 + 1);
  memcpy(__dest,param_1,sVar1 + 1);
  return;
}


void FUN_00404c90(void)

{
  undefined8 uVar1;
  
  uVar1 = dcgettext(0,"memory exhausted",5);
  error(DAT_0060a1f8,0,"%s",uVar1);
                    /* WARNING: Subroutine does not return */
  abort();
}


ulong FUN_00404cd0(byte *param_1,byte **param_2,uint param_3,ulong *param_4,char *param_5)

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
    if ((param_5 == (char *)0x0) || (bVar12 = *pbVar5, bVar12 == 0)) goto LAB_00404d72;
    pcVar7 = strchr(param_5,(int)(char)bVar12);
    if (pcVar7 == (char *)0x0) goto switchD_00404e5c_caseD_1;
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
        goto LAB_00404e4a;
      }
      if (bVar1 != 0x42) {
                    /* WARNING: Could not recover jumptable at 0x00404e31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar6 = (*(code *)(&PTR_LAB_00408338)[bVar8])();
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
LAB_00404e4a:
  iVar10 = (int)uVar11;
  switch(bVar12 - 0x42 & 0xff) {
  case 0:
    if (uVar6 >> 0x36 == 0) {
      uVar6 = uVar6 << 10;
      break;
    }
    goto LAB_00404eb7;
  default:
switchD_00404e5c_caseD_1:
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
    goto LAB_00404f44;
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
    goto joined_r0x00404e7c;
  case 0xb:
  case 0x2b:
    auVar2 = ZEXT816(uVar6) * ZEXT816((ulong)(long)iVar10);
    if (SUB168(auVar2 >> 0x40,0) != 0) goto LAB_00404eb7;
    auVar2 = (auVar2 & (undefined  [16])0xffffffffffffffff) * ZEXT816((ulong)(long)iVar10);
joined_r0x00404e7c:
    uVar6 = SUB168(auVar2,0);
    if (SUB168(auVar2 >> 0x40,0) != 0) {
LAB_00404eb7:
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
    goto LAB_00404f44;
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
    goto LAB_00404f44;
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
    goto LAB_00404f44;
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
LAB_00404f44:
    uVar14 = (ulong)(uVar13 | uVar9);
    break;
  case 0x20:
    if (uVar6 >> 0x37 != 0) goto LAB_00404eb7;
    uVar6 = uVar6 << 9;
    break;
  case 0x21:
    break;
  case 0x35:
    if ((long)uVar6 < 0) goto LAB_00404eb7;
    uVar6 = uVar6 * 2;
  }
  *param_2 = pbVar5 + iVar15;
  if (pbVar5[iVar15] != 0) {
    uVar14 = (ulong)((uint)uVar14 | 2);
  }
LAB_00404d72:
  *param_4 = uVar6;
  return uVar14;
}


void FUN_00405110(long param_1,int *param_2)

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
      if (iVar3 <= iVar8) goto LAB_0040518c;
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
      if (iVar9 <= iVar3) goto LAB_0040518c;
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
LAB_0040518c:
  param_2[0xc] = iVar2;
  param_2[0xb] = iVar1 + (iVar2 - iVar3);
  return;
}


int FUN_004051f0(int param_1,undefined8 *param_2,char *param_3,char **param_4,undefined4 *param_5,
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
      if ((iVar5 == 0) && (sVar7 = strlen(__s1_00), sVar7 == sVar15)) goto LAB_00405410;
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
            if (local_70 == (char *)0x0) goto LAB_00405350;
          }
          else if (local_70 == (char *)0x0) {
            local_70 = (char *)calloc((long)iVar5,1);
            if (local_70 == (char *)0x0) {
              bVar3 = true;
              goto LAB_00405350;
            }
            bVar4 = true;
            local_70[(int)local_44] = '\x01';
          }
          local_70[lVar16] = '\x01';
        }
      }
LAB_00405350:
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
              __fprintf_chk(__stream,1,&DAT_00408769,param_9,*param_4);
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
LAB_00405410:
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


uint FUN_00405810(uint param_1,undefined8 *param_2,char *param_3,long param_4,undefined8 param_5,
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
LAB_0040585a:
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
          goto LAB_0040595d;
        }
        pbVar8 = *(byte **)(param_7 + 8);
      }
      param_7[10] = 0;
    }
LAB_0040595d:
    param_7[6] = 1;
    cVar2 = *param_3;
LAB_00405968:
    if (cVar2 == ':') {
      uVar3 = 0;
    }
    if (pbVar8 == (byte *)0x0) goto LAB_004058d8;
LAB_0040597c:
    if (*pbVar8 == 0) goto LAB_004058d8;
  }
  else {
    if (param_7[6] == 0) goto LAB_0040585a;
    cVar2 = *param_3;
    pbVar8 = *(byte **)(param_7 + 8);
    if ((cVar2 - 0x2bU & 0xfd) != 0) goto LAB_00405968;
    pcVar4 = param_3 + 1;
    param_3 = param_3 + 1;
    if (*pcVar4 == ':') {
      uVar3 = 0;
    }
    if (pbVar8 != (byte *)0x0) goto LAB_0040597c;
LAB_004058d8:
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
        FUN_00405110(param_2,param_7);
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
LAB_00405a46:
      if (uVar11 != param_1) {
        *param_7 = uVar11;
      }
      return 0xffffffff;
    }
    lVar6 = 3;
    pbVar8 = (byte *)param_2[(int)uVar11];
    pbVar9 = pbVar8;
    pbVar10 = &DAT_00408781;
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
          FUN_00405110(param_2,param_7);
          uVar11 = param_7[0xb];
        }
      }
      param_7[0xc] = param_1;
      *param_7 = param_1;
      goto LAB_00405a46;
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
        puVar15 = &DAT_00408781;
        goto LAB_00405ba5;
      }
      if ((int)param_6 != 0) {
        if (pbVar8[2] == 0) {
          pcVar4 = strchr(param_3,(int)(char)bVar14);
          param_6 = param_6 & 0xffffffff;
          if (pcVar4 != (char *)0x0) goto LAB_00405b50;
        }
        *(byte **)(param_7 + 8) = pbVar8 + 1;
        uVar11 = FUN_004051f0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar3,
                              &DAT_00408782);
        if (uVar11 != 0xffffffff) {
          return uVar11;
        }
        pbVar8 = (byte *)param_2[(int)*param_7];
      }
    }
LAB_00405b50:
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
  puVar15 = &DAT_004087a0;
LAB_00405ba5:
  uVar3 = FUN_004051f0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar3,puVar15);
  return uVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405de0(void)

{
  DAT_0060a400 = DAT_0060a258._4_4_;
  _DAT_0060a404 = (undefined4)DAT_0060a258;
  FUN_00405810();
  DAT_0060a258._4_4_ = DAT_0060a400;
  DAT_0060a440 = DAT_0060a410;
  _DAT_0060a254 = DAT_0060a408;
  return;
}


void FUN_00405e40(void)

{
  FUN_00405de0();
  return;
}


void FUN_00405e60(void)

{
  FUN_00405de0();
  return;
}


void FUN_00405e80(void)

{
  FUN_00405810();
  return;
}


void FUN_00405ea0(void)

{
  FUN_00405de0();
  return;
}


void FUN_00405ec0(void)

{
  FUN_00405810();
  return;
}


size_t FUN_00405ee0(wchar_t *param_1,byte *param_2,size_t param_3,mbstate_t *param_4)

{
  char cVar1;
  size_t sVar2;
  wchar_t local_1c;
  
  if (param_2 == (byte *)0x0) {
    param_3 = 1;
    param_2 = (byte *)0x40879f;
  }
  else {
    if (param_3 == 0) {
      return 0xfffffffffffffffe;
    }
    if (param_1 != (wchar_t *)0x0) goto LAB_00405f04;
  }
  param_1 = &local_1c;
LAB_00405f04:
  sVar2 = mbrtowc(param_1,(char *)param_2,param_3,param_4);
  if ((0xfffffffffffffffd < sVar2) && (cVar1 = FUN_00405fc0(0), cVar1 == '\0')) {
    sVar2 = 1;
    *param_1 = (uint)*param_2;
  }
  return sVar2;
}


ulong FUN_00405f60(uint *param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  
  lVar2 = __fpending();
  uVar1 = *param_1;
  uVar3 = FUN_00406590(param_1);
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


bool FUN_00405fc0(int param_1)

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
    pbVar5 = &DAT_004087a4;
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

char * FUN_00406020(void)

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
  if (DAT_0060a438 != (char *)0x0) goto LAB_0040605a;
  pcVar7 = getenv("CHARSETALIASDIR");
  if ((pcVar7 == (char *)0x0) || (*pcVar7 == '\0')) {
    sVar6 = 0x73;
    sVar5 = 0x65;
    __n = 100;
    pcVar7 = 
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib"
    ;
LAB_00406145:
    __file = (char *)malloc(sVar6);
    if (__file != (char *)0x0) {
      memcpy(__file,pcVar7,__n);
      __file[__n] = '/';
      goto LAB_00406166;
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
        goto LAB_00406145;
      }
      sVar6 = __n + 0xe;
    }
    __file = (char *)malloc(sVar6);
    if (__file != (char *)0x0) {
      memcpy(__file,pcVar7,__n);
      sVar5 = __n;
LAB_00406166:
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
LAB_00406200:
          pbVar8 = (byte *)__stream->_IO_read_ptr;
          if (__stream->_IO_read_end <= pbVar8) goto LAB_0040638c;
          do {
            __stream->_IO_read_ptr = (char *)(pbVar8 + 1);
            uVar4 = (uint)*pbVar8;
            __ptr = pcVar7;
            while( true ) {
              pcVar7 = __ptr;
              if ((uVar4 - 9 < 2) || (uVar4 == 0x20)) goto LAB_00406200;
              if (uVar4 == 0x23) goto LAB_004063f1;
              ungetc(uVar4,__stream);
              iVar2 = fscanf(__stream,"%50s %50s",&local_b8,&local_78);
              puVar13 = &local_b8;
              if (iVar2 < 2) goto LAB_0040639f;
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
                FUN_00406590(__stream);
                goto LAB_004061a4;
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
LAB_0040638c:
              uVar4 = __uflow(__stream);
              __ptr = pcVar7;
              if (uVar4 == 0xffffffff) goto LAB_0040639f;
            }
          } while( true );
        }
        close(iVar2);
      }
      goto LAB_0040619e;
    }
  }
  DAT_0060a438 = "";
LAB_0040605a:
  cVar1 = *DAT_0060a438;
  pcVar7 = DAT_0060a438;
  do {
    if (cVar1 == '\0') {
LAB_004060b4:
      if (*__s1 == '\0') {
        __s1 = "ASCII";
      }
      return __s1;
    }
    iVar2 = strcmp(__s1,pcVar7);
    if ((iVar2 == 0) || ((cVar1 == '*' && (pcVar7[1] == '\0')))) {
      sVar6 = strlen(pcVar7);
      __s1 = pcVar7 + sVar6 + 1;
      goto LAB_004060b4;
    }
    sVar6 = strlen(pcVar7);
    sVar5 = strlen(pcVar7 + sVar6 + 1);
    pcVar7 = pcVar7 + sVar6 + 1 + sVar5 + 1;
    cVar1 = *pcVar7;
  } while( true );
LAB_004063f1:
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
  if (uVar4 == 0xffffffff) goto LAB_0040639f;
  goto LAB_00406200;
LAB_0040639f:
  FUN_00406590(__stream);
  if (local_d0 == 0) {
LAB_0040619e:
    pcVar7 = "";
  }
  else {
    pcVar7[local_d0] = '\0';
  }
LAB_004061a4:
  free(__file);
  DAT_0060a438 = pcVar7;
  goto LAB_0040605a;
}


int FUN_00406590(FILE *param_1)

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
      if (_Var4 == -1) goto LAB_004065f7;
    }
    iVar1 = FUN_00406610(param_1);
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
LAB_004065f7:
  iVar1 = fclose(param_1);
  return iVar1;
}


void FUN_00406610(FILE *param_1)

{
  int iVar1;
  
  if (param_1 != (FILE *)0x0) {
    iVar1 = __freading();
    if ((iVar1 != 0) && ((param_1->_flags & 0x100U) != 0)) {
      FUN_00406650(param_1,0,1);
      fflush(param_1);
      return;
    }
  }
  fflush(param_1);
  return;
}


ulong FUN_00406650(FILE *param_1,__off_t param_2,int param_3)

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


/* WARNING: Removing unreachable block (ram,0x004066e3) */
/* WARNING: Removing unreachable block (ram,0x004066e8) */

void FUN_004066b0(void)

{
  __DT_INIT();
  return;
}


void FUN_00406710(void)

{
  return;
}


void FUN_00406720(undefined8 param_1)

{
  __cxa_atexit(param_1,0,DAT_0060a1e8);
  return;
}


undefined8 FUN_00406738(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  FUN_00401e21();
  return;
}

