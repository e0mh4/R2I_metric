
void switchD_004029e0::caseD_b(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401a55(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401a5a(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401a5f(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401a64(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void switchD_0040450a::caseD_0(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


undefined8 FUN_00401a70(int param_1,undefined8 *param_2)

{
  undefined *puVar1;
  int iVar2;
  char *pcVar3;
  void **__ptr;
  void *pvVar4;
  undefined8 uVar5;
  bool bVar6;
  
  pcVar3 = getenv("POSIXLY_CORRECT");
  bVar6 = pcVar3 != (char *)0x0;
  FUN_004027f0(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils",
                 "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale"
                );
  textdomain("coreutils");
  FUN_004070f0(FUN_00402750);
  while( true ) {
    iVar2 = FUN_00405f00(param_1,param_2,&DAT_00407257,&PTR_s_logical_00407680,0);
    if (iVar2 == -1) {
      if (DAT_0060a29c < param_1) {
        uVar5 = dcgettext(0,"ignoring non-option arguments",5);
        error(0,0,uVar5);
      }
      if ((bVar6) && (pcVar3 = (char *)FUN_00401d10(), pcVar3 != (char *)0x0)) {
        puts(pcVar3);
        return 0;
      }
      pcVar3 = (char *)FUN_00404cb0();
      if (pcVar3 == (char *)0x0) {
        __ptr = (void **)FUN_00404a20(0x18);
        __ptr[1] = (void *)0x2000;
        pvVar4 = (void *)FUN_00404a20(0x2000);
        *__ptr = pvVar4;
        puVar1 = (undefined *)((long)pvVar4 + -1 + (long)__ptr[1]);
        __ptr[2] = puVar1;
        *puVar1 = 0;
        FUN_00401f10(__ptr);
        puts((char *)__ptr[2]);
        free(*__ptr);
        free(__ptr);
      }
      else {
        puts(pcVar3);
        free(pcVar3);
      }
      return 0;
    }
    if (iVar2 == -0x82) {
                    /* WARNING: Subroutine does not return */
      FUN_004023d0(0);
    }
    if (iVar2 < -0x81) break;
    if (iVar2 == 0x4c) {
      bVar6 = true;
    }
    else {
      if (iVar2 != 0x50) goto LAB_00401c19;
      bVar6 = false;
    }
  }
  if (iVar2 == -0x83) {
    FUN_004048e0(stdout,&DAT_004071a4,"GNU coreutils",PTR_DAT_0060a230,"Jim Meyering",0);
                    /* WARNING: Subroutine does not return */
    exit(0);
  }
LAB_00401c19:
                    /* WARNING: Subroutine does not return */
  FUN_004023d0(1);
}


void FUN_00401c30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_retaddr;
  undefined auStack_8 [8];
  
  (*(code *)PTR___libc_start_main_00609ff0)
            (FUN_00401a70,unaff_retaddr,&stack0x00000008,FUN_00407080,FUN_004070e0,param_3,auStack_8
            );
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* WARNING: Removing unreachable block (ram,0x00401c68) */
/* WARNING: Removing unreachable block (ram,0x00401c72) */

void FUN_00401c5b(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00401ca9) */

void FUN_00401c7a(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00401ce6) */

void FUN_00401cb1(void)

{
  if (DAT_0060a2c8 != '\0') {
    return;
  }
  FUN_00401c5b();
  DAT_0060a2c8 = 1;
  return;
}


/* WARNING: Removing unreachable block (ram,0x00401ca9) */

void thunk_FUN_00401c7a(void)

{
  return;
}


char * FUN_00401d10(void)

{
  char cVar1;
  int iVar2;
  char *__filename;
  long lVar3;
  char *pcVar4;
  stat local_128;
  stat local_98;
  
  __filename = getenv("PWD");
  if ((__filename != (char *)0x0) && (pcVar4 = __filename, *__filename == '/')) {
    while (lVar3 = FUN_00406480(pcVar4,&DAT_00407148), lVar3 != 0) {
      cVar1 = *(char *)(lVar3 + 2);
      if (cVar1 == '\0') {
        return (char *)0x0;
      }
      if (cVar1 == '/') {
        return (char *)0x0;
      }
      if (cVar1 == '.') {
        if (*(char *)(lVar3 + 3) == '\0') {
          return (char *)0x0;
        }
        if (*(char *)(lVar3 + 3) == '/') {
          return (char *)0x0;
        }
      }
      pcVar4 = (char *)(lVar3 + 1);
    }
    iVar2 = __xstat(1,__filename,&local_128);
    if ((((iVar2 == 0) && (iVar2 = __xstat(1,".",&local_98), iVar2 == 0)) &&
        (local_128.st_ino == local_98.st_ino)) && (local_128.st_dev == local_98.st_dev)) {
      return __filename;
    }
  }
  return (char *)0x0;
}


void FUN_00401dd0(ulong param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  
  if ((-1 < SUB168(ZEXT816(3) * ZEXT816(param_1),0)) &&
     (SUB168(ZEXT816(3) * ZEXT816(param_1) >> 0x40,0) == 0)) {
    puVar2 = (undefined2 *)FUN_00404a20(param_1 * 3);
    if (param_1 != 0) {
      puVar1 = (undefined2 *)((long)puVar2 + param_1 * 3);
      do {
        *(undefined *)(puVar2 + 1) = 0x2f;
        puVar3 = (undefined2 *)((long)puVar2 + 3);
        *puVar2 = 0x2e2e;
        puVar2 = puVar3;
      } while (puVar3 != puVar1);
      *(undefined *)((long)puVar1 + -1) = 0;
      return;
    }
    *(undefined *)((long)puVar2 + -1) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00404c70();
}


void FUN_00401e50(void **param_1,void *param_2,ulong param_3)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  long lVar4;
  void *__dest;
  ulong uVar5;
  
  pvVar3 = param_1[2];
  uVar5 = (long)pvVar3 - (long)*param_1;
  if (uVar5 < param_3 + 1) {
    lVar4 = param_3 + 1 + (long)param_1[1];
    pvVar1 = (void *)(lVar4 * 2);
    if (((long)pvVar1 < 0) || (lVar4 < 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00404c70();
    }
    pvVar2 = (void *)FUN_00404a20(pvVar1);
    pvVar3 = *param_1;
    __dest = (void *)((long)pvVar1 + (uVar5 - (long)param_1[1]) + (long)pvVar2);
    param_1[2] = __dest;
    memcpy(__dest,(void *)((long)pvVar3 + uVar5),(long)param_1[1] - uVar5);
    free(pvVar3);
    *param_1 = pvVar2;
    pvVar3 = param_1[2];
    param_1[1] = pvVar1;
  }
  param_1[2] = (undefined *)((long)pvVar3 + ~param_3);
  *(undefined *)((long)pvVar3 + ~param_3) = 0x2f;
  memcpy((void *)((long)param_1[2] + 1),param_2,param_3);
  return;
}


void FUN_00401f10(long param_1)

{
  long lVar1;
  long lVar2;
  FILE *pFVar3;
  int iVar4;
  int iVar5;
  DIR *__dirp;
  int *piVar6;
  dirent *pdVar7;
  size_t sVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  char *pcVar11;
  byte **ppbVar12;
  long lVar14;
  byte *pbVar15;
  byte *pbVar16;
  bool bVar17;
  bool bVar18;
  byte bVar19;
  byte *pbStack_2a0;
  char *pcStack_298;
  byte *apbStack_290 [5];
  char *pcStack_268;
  char *pcStack_260;
  char *pcStack_258;
  char *pcStack_250;
  char *pcStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  char local_211;
  long local_210;
  long *local_208;
  long local_200;
  undefined local_1f8 [16];
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  stat local_c8;
  byte **ppbVar13;
  
  bVar19 = 0;
  uStack_220 = 0x401f30;
  local_200 = param_1;
  local_208 = (long *)FUN_00404430(local_1f8);
  if (local_208 != (long *)0x0) {
    uStack_220 = 0x401f52;
    iVar4 = __xstat(1,".",(stat *)&local_1e8);
    if (-1 < iVar4) {
      lVar14 = 1;
LAB_00401f60:
      if ((CONCAT44(uStack_1dc,uStack_1e0) == *local_208) &&
         (CONCAT44(uStack_1e4,local_1e8) == local_208[1])) {
        if (**(char **)(local_200 + 0x10) == '\0') {
          uStack_220 = 0x402251;
          FUN_00401e50(local_200,"",0);
        }
        return;
      }
      local_210 = lVar14 + 1;
      uStack_220 = 0x401f91;
      __dirp = opendir("..");
      if (__dirp != (DIR *)0x0) {
        uStack_220 = 0x401fa5;
        iVar4 = dirfd(__dirp);
        if (iVar4 < 0) goto LAB_004021e8;
        uStack_220 = 0x401fb6;
        iVar5 = fchdir(iVar4);
        if (-1 < iVar5) {
          uStack_220 = 0x401fd2;
          iVar4 = __fxstat(1,iVar4,(stat *)&local_158);
LAB_00401fd7:
          uStack_220 = 0x401fdc;
          piVar6 = __errno_location();
          if (iVar4 < 0) goto LAB_00402297;
          lVar2 = CONCAT44(uStack_154,local_158);
          lVar1 = CONCAT44(uStack_1e4,local_1e8);
          local_211 = lVar2 != lVar1;
LAB_00402000:
          *piVar6 = 0;
LAB_00402007:
          uStack_220 = 0x40200f;
          pdVar7 = readdir(__dirp);
          if (pdVar7 != (dirent *)0x0) {
            do {
              pcVar11 = pdVar7->d_name;
              if (pdVar7->d_name[0] != '.') {
LAB_00402026:
                if ((pdVar7->d_ino == 0) || (local_211 != '\0')) {
                  uStack_220 = 0x402115;
                  iVar4 = __lxstat(1,pcVar11,&local_c8);
                  if (((iVar4 < 0) || (local_c8.st_ino != CONCAT44(uStack_1dc,uStack_1e0))) ||
                     ((lVar2 != lVar1 && (local_c8.st_dev != CONCAT44(uStack_1e4,local_1e8)))))
                  goto LAB_00402000;
                }
                else if (pdVar7->d_ino != CONCAT44(uStack_1dc,uStack_1e0)) goto LAB_00402000;
                uStack_220 = 0x40204c;
                sVar8 = strlen(pcVar11);
                uStack_220 = 0x40205c;
                FUN_00401e50(local_200,pcVar11,sVar8);
                uStack_220 = 0x402064;
                iVar4 = closedir(__dirp);
                if (iVar4 != 0) goto LAB_0040225e;
                local_1e8 = local_158;
                uStack_1e4 = uStack_154;
                uStack_1e0 = uStack_150;
                uStack_1dc = uStack_14c;
                lVar14 = local_210;
                goto LAB_00401f60;
              }
              if (pdVar7->d_name[(ulong)(pdVar7->d_name[1] == '.') + 1] == '\0') goto LAB_00402007;
              if (pdVar7->d_name[(ulong)(pdVar7->d_name[1] == '.') + 1] != '/') goto LAB_00402026;
              uStack_220 = 0x40217f;
              pdVar7 = readdir(__dirp);
              if (pdVar7 == (dirent *)0x0) break;
            } while( true );
          }
          iVar4 = *piVar6;
          if (iVar4 == 0) {
            uStack_220 = 0x4021a3;
            iVar4 = closedir(__dirp);
            if (iVar4 != 0) goto LAB_0040225e;
            uStack_220 = 0x4021b3;
            uVar9 = FUN_00401dd0(lVar14);
            uStack_220 = 0x4021bb;
            __dirp = (DIR *)FUN_00404410(uVar9);
            uStack_220 = 0x4021cf;
            uVar9 = dcgettext(0,"couldn\'t find directory entry in %s with matching i-node",5);
            uStack_220 = 0x4021e3;
            error(1,0,uVar9,__dirp);
LAB_004021e8:
            uStack_220 = 0x4021f2;
            iVar4 = chdir("..");
            if (iVar4 < 0) goto LAB_004022d0;
            uStack_220 = 0x402211;
            iVar4 = __xstat(1,".",(stat *)&local_158);
            goto LAB_00401fd7;
          }
          uStack_220 = 0x40225b;
          closedir(__dirp);
          *piVar6 = iVar4;
LAB_0040225e:
          uStack_220 = 0x402266;
          uVar9 = FUN_00401dd0(lVar14);
          uStack_220 = 0x40226e;
          uVar9 = FUN_00404410(uVar9);
          uStack_220 = 0x402282;
          uVar10 = dcgettext(0,"reading directory %s",5);
          uStack_220 = 0x402297;
          error(1,*piVar6,uVar10,uVar9);
LAB_00402297:
          uStack_220 = 0x40229f;
          uVar9 = FUN_00401dd0(lVar14);
          uStack_220 = 0x4022a7;
          uVar9 = FUN_00404410(uVar9);
          uStack_220 = 0x4022bb;
          uVar10 = dcgettext(0,"failed to stat %s",5);
          uStack_220 = 0x4022d0;
          error(1,*piVar6,uVar10,uVar9);
        }
LAB_004022d0:
        uStack_220 = 0x4022d8;
        uVar9 = FUN_00401dd0(lVar14);
        uStack_220 = 0x4022e0;
        uVar9 = FUN_00404410(uVar9);
        uStack_220 = 0x4022f4;
        uVar10 = dcgettext(0,"failed to chdir to %s",5);
        uStack_220 = 0x4022fc;
        piVar6 = __errno_location();
        uStack_220 = 0x402310;
        error(1,*piVar6,uVar10,uVar9);
      }
      uStack_220 = 0x402318;
      uVar9 = FUN_00401dd0(lVar14);
      uStack_220 = 0x402320;
      uVar9 = FUN_00404410(uVar9);
      uStack_220 = 0x402334;
      uVar10 = dcgettext(0,"cannot open directory %s",5);
      uStack_220 = 0x40233c;
      piVar6 = __errno_location();
      uStack_220 = 0x402350;
      error(1,*piVar6,uVar10,uVar9);
    }
    uStack_220 = 0x40235f;
    uVar9 = FUN_004041c0(4,&DAT_0040715e);
    uStack_220 = 0x402373;
    uVar10 = dcgettext(0,"failed to stat %s",5);
    uStack_220 = 0x40237b;
    piVar6 = __errno_location();
    uStack_220 = 0x40238f;
    error(1,*piVar6,uVar10,uVar9);
  }
  uStack_220 = 0x40239e;
  uStack_228 = FUN_004041c0(4,&DAT_00407776);
  uStack_220 = 0x4023b2;
  uStack_230 = dcgettext(0,"failed to get attributes of %s",5);
  uStack_220 = 0x4023ba;
  piVar6 = __errno_location();
  iVar4 = 1;
  uStack_220 = 0x4023ce;
  error(1,*piVar6,uStack_230,uStack_228);
  uVar9 = DAT_0060a2e8;
  if (iVar4 != 0) {
    uVar10 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(stderr,1,uVar10,uVar9);
    goto LAB_0040240f;
  }
  uVar10 = dcgettext(0,"Usage: %s [OPTION]...\n",5);
  __printf_chk(1,uVar10,uVar9);
  pFVar3 = stdout;
  pcVar11 = (char *)dcgettext(0,"Print the full filename of the current working directory.\n\n",5);
  fputs_unlocked(pcVar11,pFVar3);
  pFVar3 = stdout;
  pcVar11 = (char *)dcgettext(0,
                              "  -L, --logical   use PWD from environment, even if it contains symlinks\n  -P, --physical  avoid all symlinks\n"
                              ,5);
  fputs_unlocked(pcVar11,pFVar3);
  pFVar3 = stdout;
  pcVar11 = (char *)dcgettext(0,"      --help     display this help and exit\n",5);
  fputs_unlocked(pcVar11,pFVar3);
  pFVar3 = stdout;
  pcVar11 = (char *)dcgettext(0,"      --version  output version information and exit\n",5);
  fputs_unlocked(pcVar11,pFVar3);
  pFVar3 = stdout;
  pcVar11 = (char *)dcgettext(0,"\nIf no option is specified, -P is assumed.\n",5);
  fputs_unlocked(pcVar11,pFVar3);
  uVar9 = dcgettext(0,
                    "\nNOTE: your shell may have its own version of %s, which usually supersedes\nthe version described here.  Please refer to your shell\'s documentation\nfor details about the options it supports.\n"
                    ,5);
  __printf_chk(1,uVar9,&DAT_004071a4);
  pbStack_2a0 = &DAT_004071bf;
  pcStack_298 = "test invocation";
  apbStack_290[0] = (byte *)0x407239;
  apbStack_290[1] = (byte *)0x4071d1;
  apbStack_290[2] = (byte *)0x4071e7;
  apbStack_290[3] = (byte *)0x4071f1;
  apbStack_290[4] = (byte *)0x407200;
  pcStack_268 = "sha2 utilities";
  pcStack_260 = "sha384sum";
  pcStack_258 = "sha2 utilities";
  pcStack_250 = "sha512sum";
  pcStack_248 = "sha2 utilities";
  uStack_240 = 0;
  uStack_238 = 0;
  ppbVar12 = &pbStack_2a0;
  do {
    ppbVar13 = ppbVar12;
    ppbVar12 = ppbVar13 + 2;
    pbVar15 = *ppbVar12;
    bVar17 = false;
    bVar18 = pbVar15 == (byte *)0x0;
    if (bVar18) break;
    lVar14 = 4;
    pbVar16 = &DAT_004071a4;
    do {
      if (lVar14 == 0) break;
      lVar14 = lVar14 + -1;
      bVar17 = *pbVar16 < *pbVar15;
      bVar18 = *pbVar16 == *pbVar15;
      pbVar16 = pbVar16 + (ulong)bVar19 * -2 + 1;
      pbVar15 = pbVar15 + (ulong)bVar19 * -2 + 1;
    } while (bVar18);
  } while ((!bVar17 && !bVar18) != bVar17);
  pbVar15 = ppbVar13[3];
  if (pbVar15 == (byte *)0x0) {
    uVar9 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar9,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar11 = setlocale(5,(char *)0x0);
    if ((pcVar11 != (char *)0x0) && (iVar5 = strncmp(pcVar11,"en_",3), iVar5 != 0)) {
      pbVar15 = &DAT_004071a4;
      goto LAB_00402703;
    }
    pbVar15 = &DAT_004071a4;
    uVar9 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    pcVar11 = " invocation";
    __printf_chk(1,uVar9,"https://www.gnu.org/software/coreutils/",&DAT_004071a4);
  }
  else {
    uVar9 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar9,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar11 = setlocale(5,(char *)0x0);
    if ((pcVar11 != (char *)0x0) && (iVar5 = strncmp(pcVar11,"en_",3), iVar5 != 0)) {
LAB_00402703:
      uVar9 = dcgettext(0,"Report %s translation bugs to <https://translationproject.org/team/>\n",5
                       );
      __printf_chk(1,uVar9,&DAT_004071a4);
    }
    pcVar11 = " invocation";
    uVar9 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    __printf_chk(1,uVar9,"https://www.gnu.org/software/coreutils/",&DAT_004071a4);
    if (pbVar15 != &DAT_004071a4) {
      pcVar11 = "";
    }
  }
  uVar9 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(1,uVar9,pbVar15,pcVar11);
LAB_0040240f:
                    /* WARNING: Subroutine does not return */
  exit(iVar4);
}


void FUN_004023d0(int param_1)

{
  FILE *pFVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  byte **ppbVar6;
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
  byte **ppbVar7;
  
  uVar5 = DAT_0060a2e8;
  bVar13 = 0;
  if (param_1 != 0) {
    uVar3 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(stderr,1,uVar3,uVar5);
    goto LAB_0040240f;
  }
  uVar3 = dcgettext(0,"Usage: %s [OPTION]...\n",5);
  __printf_chk(1,uVar3,uVar5);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"Print the full filename of the current working directory.\n\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -L, --logical   use PWD from environment, even if it contains symlinks\n  -P, --physical  avoid all symlinks\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"      --help     display this help and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"      --version  output version information and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"\nIf no option is specified, -P is assumed.\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  uVar5 = dcgettext(0,
                    "\nNOTE: your shell may have its own version of %s, which usually supersedes\nthe version described here.  Please refer to your shell\'s documentation\nfor details about the options it supports.\n"
                    ,5);
  __printf_chk(1,uVar5,&DAT_004071a4);
  local_88 = &DAT_004071bf;
  local_80 = "test invocation";
  local_78[0] = (byte *)0x407239;
  local_78[1] = (byte *)0x4071d1;
  local_78[2] = (byte *)0x4071e7;
  local_78[3] = (byte *)0x4071f1;
  local_78[4] = (byte *)0x407200;
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
    pbVar9 = *ppbVar6;
    bVar11 = false;
    bVar12 = pbVar9 == (byte *)0x0;
    if (bVar12) break;
    lVar8 = 4;
    pbVar10 = &DAT_004071a4;
    do {
      if (lVar8 == 0) break;
      lVar8 = lVar8 + -1;
      bVar11 = *pbVar10 < *pbVar9;
      bVar12 = *pbVar10 == *pbVar9;
      pbVar10 = pbVar10 + (ulong)bVar13 * -2 + 1;
      pbVar9 = pbVar9 + (ulong)bVar13 * -2 + 1;
    } while (bVar12);
  } while ((!bVar11 && !bVar12) != bVar11);
  pbVar9 = ppbVar7[3];
  if (pbVar9 == (byte *)0x0) {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
      iVar2 = strncmp(pcVar4,"en_",3);
      if (iVar2 != 0) {
        pbVar9 = &DAT_004071a4;
        goto LAB_00402703;
      }
    }
    pbVar9 = &DAT_004071a4;
    uVar5 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    pcVar4 = " invocation";
    __printf_chk(1,uVar5,"https://www.gnu.org/software/coreutils/",&DAT_004071a4);
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
      iVar2 = strncmp(pcVar4,"en_",3);
      if (iVar2 != 0) {
LAB_00402703:
        uVar5 = dcgettext(0,"Report %s translation bugs to <https://translationproject.org/team/>\n"
                          ,5);
        __printf_chk(1,uVar5,&DAT_004071a4);
      }
    }
    pcVar4 = " invocation";
    uVar5 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    __printf_chk(1,uVar5,"https://www.gnu.org/software/coreutils/",&DAT_004071a4);
    if (pbVar9 != &DAT_004071a4) {
      pcVar4 = "";
    }
  }
  uVar5 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(1,uVar5,pbVar9,pcVar4);
LAB_0040240f:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}


void FUN_00402730(undefined8 param_1)

{
  DAT_0060a2e0 = param_1;
  return;
}


void FUN_00402740(undefined param_1)

{
  DAT_0060a2d8 = param_1;
  return;
}


void FUN_00402750(void)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  iVar1 = FUN_00406820(stdout);
  if (iVar1 != 0) {
    piVar2 = __errno_location();
    if ((DAT_0060a2d8 == '\0') || (*piVar2 != 0x20)) {
      uVar3 = dcgettext(0,"write error",5);
      if (DAT_0060a2e0 == 0) {
        error(0,*piVar2,"%s",uVar3);
      }
      else {
        uVar4 = FUN_00404260();
        error(0,*piVar2,"%s: %s",uVar4,uVar3);
      }
      goto LAB_004027ce;
    }
  }
  iVar1 = FUN_00406820(stderr);
  if (iVar1 == 0) {
    return;
  }
LAB_004027ce:
                    /* WARNING: Subroutine does not return */
  _exit(DAT_0060a238);
}


void FUN_004027f0(byte *param_1)

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
      pbVar6 = &DAT_00407770;
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
        pbVar6 = &DAT_00407778;
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
  DAT_0060a2e8 = param_1;
  program_invocation_name = param_1;
  return;
}


char * FUN_00402890(char *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  byte *pbVar3;
  
  pcVar2 = (char *)dcgettext(0,param_1,5);
  if (param_1 == pcVar2) {
    pbVar3 = (byte *)FUN_004068e0();
    if ((*pbVar3 & 0xdf) == 0x55) {
      if (((((pbVar3[1] & 0xdf) != 0x54) || ((pbVar3[2] & 0xdf) != 0x46)) || (pbVar3[3] != 0x2d)) ||
         ((pbVar3[4] != 0x38 || (pbVar3[5] != 0)))) {
LAB_00402968:
        pcVar2 = "\"";
        if (param_2 != 9) {
          pcVar2 = "\'";
        }
        return pcVar2;
      }
      cVar1 = *pcVar2;
      pcVar2 = &DAT_00407789;
      if (cVar1 != '`') {
        pcVar2 = &DAT_0040777e;
      }
    }
    else {
      if (((((*pbVar3 & 0xdf) != 0x47) || ((pbVar3[1] & 0xdf) != 0x42)) || (pbVar3[2] != 0x31)) ||
         (((pbVar3[3] != 0x38 || (pbVar3[4] != 0x30)) ||
          ((pbVar3[5] != 0x33 || ((pbVar3[6] != 0x30 || (pbVar3[7] != 0)))))))) goto LAB_00402968;
      cVar1 = *pcVar2;
      pcVar2 = &DAT_00407785;
      if (cVar1 != '`') {
        pcVar2 = &DAT_00407782;
      }
    }
  }
  return pcVar2;
}


ulong FUN_00402990(undefined *param_1,ulong param_2,char *param_3,ulong param_4,int param_5,
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
LAB_004035e1:
    if (param_2 != 0) {
      bVar3 = false;
      local_5b = false;
      bVar2 = true;
      local_70 = 0;
      goto LAB_00403216;
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
      goto LAB_004035e1;
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
      param_8 = (char *)FUN_00402890(&DAT_0040778d,param_5);
      param_9 = (char *)FUN_00402890(&DAT_00408957);
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
LAB_00402a28:
  uVar22 = 0;
  bVar5 = local_5b;
LAB_00402a38:
  bVar23 = param_4 != uVar22;
  if (param_4 == 0xffffffffffffffff) {
    bVar23 = param_3[uVar22] != '\0';
  }
  bVar26 = bVar6;
  if (!bVar23) goto LAB_004031b8;
  bVar20 = (bool)(param_5 != 2 & bVar6);
  __s1 = (byte *)(param_3 + uVar22);
  uVar16 = uVar15;
  bVar4 = bVar3;
  if (bVar20) {
    if (local_a0 == 0) {
LAB_00403130:
      uVar19 = (ulong)*__s1;
      switch(uVar19) {
      case 0:
        goto switchD_00403142_caseD_0;
      default:
        bVar20 = false;
        goto switchD_00402fae_caseD_1;
      case 7:
        bVar17 = 0x61;
        goto LAB_00402e45;
      case 8:
        bVar17 = 0x62;
        break;
      case 9:
switchD_00403142_caseD_9:
        bVar17 = 0x74;
        break;
      case 10:
switchD_00403142_caseD_a:
        bVar17 = 0x6e;
        break;
      case 0xb:
switchD_00403142_caseD_b:
        bVar17 = 0x76;
        goto LAB_00402e45;
      case 0xc:
switchD_00403142_caseD_c:
        bVar17 = 0x66;
LAB_00402e45:
        if (local_5c) {
          bVar25 = false;
          goto LAB_00402d98;
        }
LAB_00402e50:
        bVar23 = false;
        goto LAB_00402c0b;
      case 0xd:
        bVar20 = false;
switchD_00402b28_caseD_d:
        bVar25 = param_5 == 2;
        uVar19 = 0xd;
        bVar13 = 0x72;
        goto LAB_00402d60;
      case 0x20:
        bVar25 = false;
LAB_0040318a:
        uVar19 = 0x20;
        goto LAB_00403152;
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
switchD_00402b28_caseD_21:
        bVar25 = false;
        goto LAB_00402d6b;
      case 0x23:
      case 0x7e:
        bVar26 = false;
LAB_0040316a:
        if (uVar22 == 0) {
          bVar25 = false;
          bVar23 = bVar20;
          bVar20 = bVar26;
          goto LAB_00402b78;
        }
        bVar23 = false;
        goto LAB_00402b8f;
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
LAB_00403152:
        bVar24 = false;
        bVar23 = bVar20;
        bVar20 = bVar25;
        goto LAB_00402b91;
      case 0x27:
        bVar20 = false;
        goto switchD_00402fae_caseD_27;
      case 0x3f:
        bVar20 = false;
        goto switchD_00402fae_caseD_3f;
      case 0x5c:
        bVar20 = false;
        goto switchD_00402b28_caseD_5c;
      case 0x7b:
      case 0x7d:
        bVar20 = false;
        goto switchD_00402fae_caseD_7b;
      }
      bVar25 = false;
      bVar23 = false;
      goto joined_r0x00402d87;
    }
    if ((param_4 == 0xffffffffffffffff) && (1 < local_a0)) {
      param_4 = strlen(param_3);
    }
    if ((param_4 < uVar22 + local_a0) || (iVar7 = memcmp(__s1,local_78,local_a0), iVar7 != 0))
    goto LAB_00403130;
    if (!local_5c) {
      uVar19 = (ulong)*__s1;
      bVar25 = bVar20;
      switch(uVar19) {
      case 0:
        goto switchD_00402b28_caseD_0;
      default:
        goto switchD_00402fae_caseD_1;
      case 7:
        bVar17 = 0x61;
        goto LAB_00402e50;
      case 8:
        bVar25 = false;
        bVar23 = false;
        bVar17 = 0x62;
        break;
      case 9:
        goto switchD_00403142_caseD_9;
      case 10:
        goto switchD_00403142_caseD_a;
      case 0xb:
        goto switchD_00403142_caseD_b;
      case 0xc:
        goto switchD_00403142_caseD_c;
      case 0xd:
        goto switchD_00402b28_caseD_d;
      case 0x20:
        goto LAB_0040318a;
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
        goto switchD_00402b28_caseD_21;
      case 0x23:
      case 0x7e:
        bVar26 = bVar20;
        goto LAB_0040316a;
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
        goto LAB_00403152;
      case 0x27:
        goto switchD_00402fae_caseD_27;
      case 0x3f:
        goto switchD_00402fae_caseD_3f;
      case 0x5c:
        goto switchD_00402b28_caseD_5c;
      case 0x7b:
      case 0x7d:
        goto switchD_00402fae_caseD_7b;
      }
      goto LAB_00402bd2;
    }
    goto LAB_00402daa;
  }
  uVar19 = (ulong)*__s1;
  switch(uVar19) {
  case 0:
    if (bVar6) {
switchD_00403142_caseD_0:
      if (!local_5c) {
        bVar20 = false;
switchD_00402b28_caseD_0:
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
            goto LAB_00402c88;
          }
LAB_00402eca:
          param_1[uVar16] = 0x5c;
          uVar15 = uVar16;
        }
        else if (uVar15 < uVar9) goto LAB_00402eca;
        uVar16 = uVar15 + 1;
        bVar24 = bVar23;
        if (param_5 == 2) {
          bVar17 = 0x30;
          bVar23 = false;
          bVar4 = bVar3;
          goto LAB_00402c88;
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
LAB_00402f09:
        bVar17 = (byte)uVar19;
        bVar23 = false;
        uVar15 = uVar16;
        bVar4 = bVar3;
        if ((bool)(bVar6 ^ 1U | bVar26)) goto LAB_00402c88;
        goto LAB_00402b91;
      }
      bVar26 = param_5 == 2;
      goto LAB_00402d9c;
    }
    if ((param_6 & 1) == 0) {
      bVar25 = param_5 == 2;
      uVar19 = 0;
      bVar23 = false;
      bVar20 = false;
      goto LAB_00402b78;
    }
    uVar22 = uVar22 + 1;
    goto LAB_00402a38;
  default:
switchD_00402fae_caseD_1:
    bVar25 = bVar6;
    if (sVar8 != 1) {
      local_40[0] = (mbstate_t)0x0;
      if (param_4 == 0xffffffffffffffff) {
        param_4 = strlen(param_3);
      }
      uVar21 = 0;
      do {
        uVar1 = uVar22 + uVar21;
        lVar11 = FUN_00405f80(&local_44,param_3 + uVar1,param_4 - uVar1,local_40);
        if (lVar11 == 0) break;
        if (lVar11 == -1) {
          bVar23 = false;
          goto LAB_004038ba;
        }
        if (lVar11 == -2) {
          if ((param_4 <= uVar1) || (param_3[uVar1] == '\0')) goto LAB_004039f7;
          goto LAB_004039e7;
        }
        if (((param_5 == 2) && (local_5c)) && (lVar11 != 1)) {
          pcVar12 = param_3 + uVar1 + 1;
          do {
            if (((byte)(*pcVar12 + 0xa5U) < 0x22) &&
               ((1L << (*pcVar12 + 0xa5U & 0x3f) & 0x20000002bU) != 0)) {
              param_5 = 2;
              goto LAB_00402d9c;
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
      goto LAB_004038ba;
    }
    ppuVar10 = __ctype_b_loc();
    uVar21 = 1;
    bVar25 = ((*ppuVar10)[uVar19] & 0x4000) == 0;
    bVar23 = !bVar25;
    bVar25 = (bool)(bVar25 & bVar6);
    goto LAB_00402f84;
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
    goto LAB_00402fc2;
  case 10:
    uVar19 = 10;
    bVar13 = 0x6e;
    goto LAB_00402fc2;
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
LAB_00402fc2:
    bVar25 = param_5 == 2;
    bVar20 = (bool)(local_5c & bVar25);
    if (bVar20) {
LAB_00402fda:
      param_5 = 2;
      goto LAB_00402d9c;
    }
    break;
  case 0x20:
    uVar19 = 0x20;
    goto LAB_00402b66;
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
LAB_00402b66:
    bVar25 = param_5 == 2;
    if ((local_5c) && (bVar25)) goto LAB_00402fda;
    goto LAB_00402b78;
  case 0x23:
  case 0x7e:
LAB_00402b5d:
    bVar25 = param_5 == 2;
    if (uVar22 == 0) goto LAB_00402b66;
    goto LAB_00402d6b;
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
    goto switchD_00402fae_caseD_25;
  case 0x27:
switchD_00402fae_caseD_27:
    bVar5 = bVar23;
    if (param_5 != 2) {
      bVar25 = false;
      uVar19 = 0x27;
      goto LAB_00402b78;
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
      goto LAB_00402c88;
    }
    goto LAB_00402d9c;
  case 0x3f:
switchD_00402fae_caseD_3f:
    if (param_5 == 2) {
      if (!local_5c) {
        bVar17 = 0x3f;
        bVar24 = false;
        bVar23 = false;
        goto LAB_00402c88;
      }
      goto LAB_00402d9c;
    }
    if (param_5 != 5) {
      bVar25 = param_5 == 2;
      uVar19 = 0x3f;
      bVar23 = false;
      goto LAB_00402b78;
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
        goto LAB_00402f09;
      }
      goto LAB_00402daa;
    }
    bVar25 = false;
    uVar19 = 0x3f;
    bVar23 = false;
    goto LAB_00402b78;
  case 0x5c:
    if (param_5 != 2) {
switchD_00402b28_caseD_5c:
      uVar19 = 0x5c;
      bVar17 = 0x5c;
      bVar13 = 0x5c;
      bVar25 = (bool)(bVar6 & local_5c & local_a0 != 0);
      if (!bVar25) break;
      uVar22 = uVar22 + 1;
      bVar23 = false;
      goto LAB_00402ca4;
    }
    if (local_5c) goto LAB_00402d9c;
    uVar22 = uVar22 + 1;
    bVar23 = false;
    bVar17 = 0x5c;
    goto LAB_00402ca4;
  case 0x7b:
  case 0x7d:
switchD_00402fae_caseD_7b:
    bVar24 = param_4 != 1;
    if (param_4 == 0xffffffffffffffff) {
      bVar24 = param_3[1] != '\0';
    }
    bVar25 = param_5 == 2;
    if (!bVar24) goto LAB_00402b5d;
    goto LAB_00402d6b;
  }
LAB_00402d60:
  if (!bVar6) {
LAB_00402d6b:
    bVar23 = false;
    goto LAB_00402b78;
  }
  bVar23 = false;
  bVar17 = bVar13;
  goto joined_r0x00402d87;
LAB_004031b8:
  if ((uVar15 == 0) && ((bool)(local_5c & param_5 == 2))) {
    param_5 = 2;
LAB_00402d9c:
    if (bVar26) {
      param_5 = 4;
    }
LAB_00402daa:
    uVar9 = FUN_00402990(param_1,uVar9,param_3,param_4,param_5,param_6 & 0xfffffffd,0,param_8,
                         param_9);
    return uVar9;
  }
  bVar26 = (bool)(param_5 == 2 & (local_5c ^ 1U));
  bVar23 = (bool)(local_5c ^ 1U);
  if ((!bVar26) || (bVar23 = bVar26, !bVar5)) {
LAB_00403a8d:
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
    uVar9 = FUN_00402990(param_1,local_70,param_3,param_4,5,param_6,param_7,param_8,param_9);
    return uVar9;
  }
  local_5b = uVar9 == 0 && local_70 != 0;
  param_2 = local_70;
  bVar23 = bVar5;
  if (uVar9 != 0 || local_70 == 0) goto LAB_00403a8d;
LAB_00403216:
  *param_1 = 0x27;
  param_5 = 2;
  uVar15 = 1;
  local_78 = "\'";
  local_a0 = 1;
  local_5c = false;
  uVar9 = param_2;
  goto LAB_00402a28;
  while (__s1[uVar21] != 0) {
LAB_004039e7:
    uVar21 = uVar21 + 1;
    if (param_4 <= uVar22 + uVar21) break;
  }
LAB_004039f7:
  bVar23 = false;
LAB_004038ba:
  if (1 < uVar21) {
LAB_0040347e:
    bVar26 = false;
    uVar21 = uVar21 + uVar22;
    uVar16 = uVar22;
    do {
      bVar17 = (byte)uVar19;
      if (bVar25) {
        bVar26 = param_5 == 2;
        if (local_5c) goto LAB_00402d9c;
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
        if (uVar21 <= uVar22) goto LAB_00402c1d;
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
        if (uVar21 <= uVar22) goto LAB_00402ca4;
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
LAB_00402f84:
  if (bVar25) {
    bVar23 = false;
    bVar25 = bVar6;
    goto LAB_0040347e;
  }
switchD_00402fae_caseD_25:
  bVar25 = param_5 == 2;
LAB_00402b78:
  bVar17 = (byte)uVar19;
  bVar24 = (bool)((bVar6 ^ 1U | bVar25) ^ 1 | local_5c);
  bVar26 = bVar20;
  if (bVar24) {
LAB_00402b8f:
    bVar24 = false;
    bVar20 = bVar26;
LAB_00402b91:
    bVar17 = (byte)uVar19;
    uVar16 = uVar15;
    bVar4 = bVar3;
    if ((param_7 == 0) || ((*(uint *)(param_7 + (uVar19 >> 5) * 4) >> (bVar17 & 0x1f) & 1) == 0))
    goto LAB_00402c88;
    bVar25 = param_5 == 2;
  }
  else {
LAB_00402c88:
    bVar25 = param_5 == 2;
    uVar15 = uVar16;
    bVar3 = bVar4;
    if (!bVar20) {
      uVar22 = uVar22 + 1;
      bVar3 = (bool)((bVar24 ^ 1U) & bVar4);
LAB_00402ca4:
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
      goto LAB_00402c1d;
    }
  }
joined_r0x00402d87:
  if (local_5c) {
LAB_00402d98:
    bVar26 = (bool)(bVar6 & bVar25);
    goto LAB_00402d9c;
  }
LAB_00402bd2:
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
LAB_00402c0b:
  if (uVar15 < uVar9) {
    param_1[uVar15] = 0x5c;
  }
  uVar15 = uVar15 + 1;
  uVar22 = uVar22 + 1;
  bVar4 = bVar3;
LAB_00402c1d:
  bVar3 = bVar4;
  if (uVar15 < uVar9) {
    param_1[uVar15] = bVar17;
  }
  uVar15 = uVar15 + 1;
  if (!bVar23) {
    bVar2 = false;
  }
  goto LAB_00402a38;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00403bc0(int param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

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
  puVar8 = (undefined4 *)PTR_DAT_0060a278;
  if (DAT_0060a290 <= param_1) {
    if (param_1 == 0x7fffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_00404c70();
    }
    if (PTR_DAT_0060a278 == &DAT_0060a280) {
      puVar8 = (undefined4 *)FUN_00404a80(0);
      uVar6 = PTR_DAT_0060a288._4_4_;
      uVar5 = PTR_DAT_0060a288._0_4_;
      uVar3 = _UNK_0060a284;
      PTR_DAT_0060a278 = (undefined *)puVar8;
      *puVar8 = _DAT_0060a280;
      puVar8[1] = uVar3;
      puVar8[2] = uVar5;
      puVar8[3] = uVar6;
    }
    else {
      puVar8 = (undefined4 *)FUN_00404a80(PTR_DAT_0060a278);
      PTR_DAT_0060a278 = (undefined *)puVar8;
    }
    memset(puVar8 + (long)DAT_0060a290 * 4,0,(long)((param_1 + 1) - DAT_0060a290) << 4);
    DAT_0060a290 = param_1 + 1;
  }
  uVar2 = param_4[1];
  puVar10 = (ulong *)(puVar8 + (long)param_1 * 4);
  uVar4 = *puVar10;
  __ptr = (undefined *)puVar10[1];
  uVar9 = FUN_00402990(__ptr,uVar4,param_2,param_3,*param_4,uVar2 | 1,param_4 + 2,
                       *(undefined8 *)(param_4 + 10),*(undefined8 *)(param_4 + 0xc));
  if (uVar4 <= uVar9) {
    uVar9 = uVar9 + 1;
    *puVar10 = uVar9;
    if (__ptr != &DAT_0060a300) {
      free(__ptr);
    }
    __ptr = (undefined *)FUN_00404a20(uVar9);
    uVar3 = *param_4;
    puVar10[1] = (ulong)__ptr;
    FUN_00402990(__ptr,uVar9,param_2,param_3,uVar3,uVar2 | 1,param_4 + 2,
                 *(undefined8 *)(param_4 + 10),*(undefined8 *)(param_4 + 0xc));
  }
  *piVar7 = iVar1;
  return __ptr;
}


void FUN_00403d60(undefined *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_0060a400;
  }
  FUN_00404c20(param_1,0x38);
  *piVar2 = iVar1;
  return;
}


undefined4 FUN_00403da0(undefined4 *param_1)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)&DAT_0060a400;
  }
  return *param_1;
}


void FUN_00403db0(undefined4 *param_1,undefined4 param_2)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)&DAT_0060a400;
  }
  *param_1 = param_2;
  return;
}


uint FUN_00403dc0(undefined *param_1,byte param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_0060a400;
  }
  uVar1 = *(uint *)(param_1 + (ulong)(param_2 >> 5) * 4 + 8);
  uVar2 = uVar1 >> (param_2 & 0x1f);
  *(uint *)(param_1 + (ulong)(param_2 >> 5) * 4 + 8) =
       ((param_3 ^ uVar2) & 1) << (param_2 & 0x1f) ^ uVar1;
  return uVar2 & 1;
}


undefined4 FUN_00403e00(undefined *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_0060a400;
  }
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_1 + 4) = param_2;
  return uVar1;
}


void FUN_00403e20(undefined4 *param_1,long param_2,long param_3)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)&DAT_0060a400;
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


void FUN_00403e50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 *param_5)

{
  int iVar1;
  int *piVar2;
  
  if (param_5 == (undefined4 *)0x0) {
    param_5 = (undefined4 *)&DAT_0060a400;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  FUN_00402990(param_1,param_2,param_3,param_4,*param_5,param_5[1],param_5 + 2,
               *(undefined8 *)(param_5 + 10),*(undefined8 *)(param_5 + 0xc));
  *piVar2 = iVar1;
  return;
}


undefined8 FUN_00403ed0(undefined8 param_1,undefined8 param_2,long *param_3,undefined4 *param_4)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  
  if (param_4 == (undefined4 *)0x0) {
    param_4 = (undefined4 *)&DAT_0060a400;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  uVar5 = (uint)(param_3 == (long *)0x0) | param_4[1];
  lVar3 = FUN_00402990(0,0,param_1,param_2,*param_4,uVar5,param_4 + 2,*(undefined8 *)(param_4 + 10),
                       *(undefined8 *)(param_4 + 0xc));
  uVar4 = FUN_00404a20(lVar3 + 1);
  FUN_00402990(uVar4,lVar3 + 1,param_1,param_2,*param_4,uVar5,param_4 + 2,
               *(undefined8 *)(param_4 + 10),*(undefined8 *)(param_4 + 0xc));
  *piVar2 = iVar1;
  if (param_3 != (long *)0x0) {
    *param_3 = lVar3;
  }
  return uVar4;
}


void FUN_00403fc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00403ed0(param_1,param_2,0,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403fd0(void)

{
  void **ppvVar1;
  void *__ptr;
  undefined *__ptr_00;
  void **ppvVar2;
  
  __ptr_00 = PTR_DAT_0060a278;
  if (1 < DAT_0060a290) {
    ppvVar2 = (void **)(PTR_DAT_0060a278 + 0x18);
    ppvVar1 = (void **)(PTR_DAT_0060a278 + (ulong)(DAT_0060a290 - 2) * 0x10 + 0x28);
    do {
      __ptr = *ppvVar2;
      ppvVar2 = ppvVar2 + 2;
      free(__ptr);
    } while (ppvVar2 != ppvVar1);
  }
  if (*(undefined **)(__ptr_00 + 8) != &DAT_0060a300) {
    free(*(undefined **)(__ptr_00 + 8));
    _DAT_0060a280 = 0x100;
    PTR_DAT_0060a288 = &DAT_0060a300;
  }
  if (__ptr_00 != &DAT_0060a280) {
    free(__ptr_00);
    PTR_DAT_0060a278 = &DAT_0060a280;
  }
  DAT_0060a290 = 1;
  return;
}


void FUN_00404070(undefined8 param_1,undefined8 param_2)

{
  FUN_00403bc0(param_1,param_2,0xffffffffffffffff,&DAT_0060a400);
  return;
}


void FUN_00404090(void)

{
  FUN_00403bc0();
  return;
}


void FUN_004040a0(undefined8 param_1)

{
  FUN_00403bc0(0,param_1,0xffffffffffffffff,&DAT_0060a400);
  return;
}


void FUN_004040c0(undefined8 param_1,undefined8 param_2)

{
  FUN_00403bc0(0,param_1,param_2,&DAT_0060a400);
  return;
}


void FUN_004040e0(undefined8 param_1,int param_2,undefined8 param_3)

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
    FUN_00403bc0(param_1,param_3,0xffffffffffffffff,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00404150(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

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
    FUN_00403bc0(param_1,param_3,param_4,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_004041c0(undefined4 param_1,undefined8 param_2)

{
  FUN_004040e0(0,param_1,param_2);
  return;
}


void FUN_004041d0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00404150(0,param_1,param_2,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004041e0(undefined8 param_1,undefined8 param_2,byte param_3)

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
  
  local_18 = DAT_0060a430;
  local_48 = _DAT_0060a400;
  uStack_40 = uRam000000000060a408;
  local_38 = _DAT_0060a410;
  uStack_30 = uRam000000000060a418;
  puVar1 = (uint *)((long)&uStack_40 + (ulong)(param_3 >> 5) * 4);
  local_28 = _DAT_0060a420;
  uStack_20 = uRam000000000060a428;
  uVar2 = *puVar1;
  *puVar1 = (~(uVar2 >> (param_3 & 0x1f)) & 1) << (param_3 & 0x1f) ^ uVar2;
  FUN_00403bc0(0,param_1,param_2,&local_48);
  return;
}


void FUN_00404250(undefined8 param_1,char param_2)

{
  FUN_004041e0(param_1,0xffffffffffffffff,(int)param_2);
  return;
}


void FUN_00404260(undefined8 param_1)

{
  FUN_004041e0(param_1,0xffffffffffffffff,0x3a);
  return;
}


void FUN_00404280(undefined8 param_1,undefined8 param_2)

{
  FUN_004041e0(param_1,param_2,0x3a);
  return;
}


void FUN_00404290(undefined8 param_1,int param_2,undefined8 param_3)

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
    FUN_00403bc0(param_1,param_3,0xffffffffffffffff,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404300(undefined8 param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5
                 )

{
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  long lStack_20;
  long local_18;
  
  uStack_40 = uRam000000000060a408;
  local_38 = _DAT_0060a410;
  uStack_30 = uRam000000000060a418;
  local_28 = _DAT_0060a420;
  lStack_20 = uRam000000000060a428;
  local_18 = DAT_0060a430;
  local_48 = CONCAT44((int)((ulong)_DAT_0060a400 >> 0x20),10);
  if ((param_2 != 0) && (param_3 != 0)) {
    lStack_20 = param_2;
    local_18 = param_3;
    FUN_00403bc0(param_1,param_4,param_5,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00404370(void)

{
  FUN_00404300();
  return;
}


void FUN_00404380(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00404300(0,param_1,param_2,param_3,0xffffffffffffffff);
  return;
}


void FUN_004043a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00404300(0,param_1,param_2,param_3,param_4);
  return;
}


void FUN_004043c0(void)

{
  FUN_00403bc0();
  return;
}


void FUN_004043d0(undefined8 param_1,undefined8 param_2)

{
  FUN_00403bc0(0,param_1,param_2,&DAT_0060a240);
  return;
}


void FUN_004043f0(undefined8 param_1,undefined8 param_2)

{
  FUN_00403bc0(param_1,param_2,0xffffffffffffffff,&DAT_0060a240);
  return;
}


void FUN_00404410(undefined8 param_1)

{
  FUN_00403bc0(0,param_1,0xffffffffffffffff,&DAT_0060a240);
  return;
}


__ino_t * FUN_00404430(__ino_t *param_1)

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
FUN_00404480(FILE *param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5,
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
  uVar1 = dcgettext(0,&DAT_004084cb,5);
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
    goto LAB_004046fc;
  case 5:
    uVar1 = param_5[3];
    uVar4 = param_5[2];
    uVar5 = param_5[1];
    uVar6 = *param_5;
    uVar7 = dcgettext(0,"Written by %s, %s, %s,\n%s, and %s.\n",5);
LAB_004046fc:
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
    goto LAB_00404799;
  case 7:
    uVar1 = param_5[2];
    uVar4 = param_5[5];
    uVar5 = param_5[4];
    uVar6 = param_5[3];
    local_58 = param_5[1];
    uVar7 = *param_5;
    uVar3 = dcgettext(0,"Written by %s, %s, %s,\n%s, %s, %s, and %s.\n",5);
LAB_00404799:
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
    goto LAB_0040457a;
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
LAB_0040457a:
  uVar1 = __fprintf_chk(param_1,1,uVar3,uVar7,local_50,local_58,uVar6,uVar5,uVar4,uVar1,local_48);
  return uVar1;
}


void FUN_00404860(void)

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
  FUN_00404480();
  return;
}


void FUN_00404880(void)

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
  FUN_00404480();
  return;
}


void FUN_004048e0(void)

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
  FUN_00404480();
  return;
}


void FUN_004049a0(void)

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


void FUN_00404a20(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00404c70();
  }
  return;
}


void FUN_00404a40(ulong param_1,ulong param_2)

{
  if ((-1 < SUB168(ZEXT816(param_1) * ZEXT816(param_2),0)) &&
     (SUB168(ZEXT816(param_1) * ZEXT816(param_2) >> 0x40,0) == 0)) {
    FUN_00404a20();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00404c70();
}


void thunk_FUN_00404a20(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00404c70();
  }
  return;
}


void * FUN_00404a80(void *param_1,size_t param_2)

{
  void *pvVar1;
  
  if ((param_2 == 0) && (param_1 != (void *)0x0)) {
    free(param_1);
    return (void *)0x0;
  }
  pvVar1 = realloc(param_1,param_2);
  if ((pvVar1 == (void *)0x0) && (param_2 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00404c70();
  }
  return pvVar1;
}


void FUN_00404ac0(undefined8 param_1,ulong param_2,ulong param_3)

{
  if ((-1 < SUB168(ZEXT816(param_2) * ZEXT816(param_3),0)) &&
     (SUB168(ZEXT816(param_2) * ZEXT816(param_3) >> 0x40,0) == 0)) {
    FUN_00404a80();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00404c70();
}


void FUN_00404af0(long param_1,ulong *param_2,ulong param_3)

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
    if ((SUB168(ZEXT816(uVar2) * ZEXT816(param_3),0) < 0) || (uVar3 != 0)) goto LAB_00404b4b;
  }
  else {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x5555555555555554);
    uVar3 = SUB168(auVar1 % ZEXT816(param_3),0);
    if (SUB168(auVar1 / ZEXT816(param_3),0) <= uVar2) {
LAB_00404b4b:
                    /* WARNING: Subroutine does not return */
      FUN_00404c70(param_1,param_2,uVar3);
    }
    uVar2 = (uVar2 >> 1) + 1 + uVar2;
  }
  *param_2 = uVar2;
  FUN_00404a80(param_1,uVar2 * param_3);
  return;
}


void FUN_00404b80(long param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (param_1 == 0) {
    if (uVar1 == 0) {
      *param_2 = 0x80;
      FUN_00404a80(0,0x80);
      return;
    }
    if ((long)uVar1 < 0) goto LAB_00404bca;
  }
  else {
    if (0x5555555555555553 < uVar1) {
LAB_00404bca:
                    /* WARNING: Subroutine does not return */
      FUN_00404c70();
    }
    uVar1 = (uVar1 >> 1) + 1 + uVar1;
  }
  *param_2 = uVar1;
  FUN_00404a80(param_1,uVar1);
  return;
}


void FUN_00404bd0(size_t param_1)

{
  void *__s;
  
  __s = (void *)FUN_00404a20();
  memset(__s,0,param_1);
  return;
}


void FUN_00404bf0(size_t param_1,ulong param_2)

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
  FUN_00404c70();
}


void FUN_00404c20(void *param_1,size_t param_2)

{
  void *__dest;
  
  __dest = (void *)FUN_00404a20(param_2);
  memcpy(__dest,param_1,param_2);
  return;
}


void FUN_00404c50(char *param_1)

{
  void *__dest;
  size_t sVar1;
  
  sVar1 = strlen(param_1);
  __dest = (void *)FUN_00404a20(sVar1 + 1);
  memcpy(__dest,param_1,sVar1 + 1);
  return;
}


void FUN_00404c70(void)

{
  undefined8 uVar1;
  
  uVar1 = dcgettext(0,"memory exhausted",5);
  error(DAT_0060a238,0,"%s",uVar1);
                    /* WARNING: Subroutine does not return */
  abort();
}


long FUN_00404cb0(void)

{
  long lVar1;
  int *piVar2;
  
  lVar1 = FUN_00404ce0(0,0);
  if (lVar1 == 0) {
    piVar2 = __errno_location();
    if (*piVar2 == 0xc) {
                    /* WARNING: Subroutine does not return */
      FUN_00404c70();
    }
  }
  return lVar1;
}


void * FUN_00404ce0(void *param_1,size_t param_2)

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
LAB_00404d12:
    local_110 = malloc(local_100);
    if (local_110 == (void *)0x0) {
      return (void *)0x0;
    }
  }
  else {
    local_110 = param_1;
    local_100 = param_2;
    if (param_1 == (void *)0x0) goto LAB_00404d12;
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
LAB_00404ff8:
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
          if (__dirp != (DIR *)0x0) goto LAB_004050b1;
          goto joined_r0x004050bf;
        }
        iVar7 = __fxstat(1,iVar6,&local_c8);
        if (iVar7 != 0) {
          iVar7 = *piVar8;
          if (__dirp != (DIR *)0x0) {
            closedir(__dirp);
          }
LAB_0040511d:
          close(iVar6);
          goto joined_r0x004050bf;
        }
        if (((__dirp != (DIR *)0x0) && (iVar7 = closedir(__dirp), iVar7 != 0)) ||
           (_Var5 = local_c8.st_ino, _Var2 = local_c8.st_dev, __dirp = fdopendir(iVar6),
           bVar1 = bVar16 || bVar17, __dirp == (DIR *)0x0)) {
          iVar7 = *piVar8;
          goto LAB_0040511d;
        }
LAB_00404e70:
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
                  if (pdVar9->d_name[0] == '.') goto LAB_00405080;
                  break;
                }
                iVar7 = *piVar8;
              }
              if (iVar7 == 0) {
                *piVar8 = 2;
                iVar7 = 2;
              }
              goto LAB_004050b1;
            }
            if (pdVar9->d_name[0] == '.') {
LAB_00405080:
              if ((pdVar9->d_name[1] == '\0') || (*(short *)(pdVar9->d_name + 1) == 0x2e))
              goto LAB_00404e70;
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
              goto LAB_00404f8f;
            }
            *piVar8 = 0xc;
            iVar7 = 0xc;
          }
          else {
            *piVar8 = 0x22;
            iVar7 = 0x22;
          }
LAB_004050b1:
          closedir(__dirp);
          goto joined_r0x004050bf;
        }
LAB_00404f8f:
        pvVar10 = memcpy((void *)((long)local_e8 - __n),__filename,__n);
        local_e8 = (void *)((long)pvVar10 + -1);
        local_120 = _Var2;
        *(undefined *)((long)pvVar10 + -1) = 0x2f;
        _Var15 = _Var5;
      } while ((_Var3 != _Var2) || (_Var4 != _Var5));
      iVar6 = closedir(__dirp);
      if (iVar6 == 0) {
        lVar13 = (long)local_110 + local_100;
        goto LAB_00404ff8;
      }
      goto LAB_004050e0;
    }
  }
  piVar8 = __errno_location();
LAB_004050e0:
  iVar7 = *piVar8;
joined_r0x004050bf:
  if (param_1 == (void *)0x0) {
    free(local_110);
  }
  *piVar8 = iVar7;
  return (void *)0x0;
}


void FUN_004051b0(long param_1,int *param_2)

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
      if (iVar3 <= iVar8) goto LAB_0040522c;
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
      if (iVar9 <= iVar3) goto LAB_0040522c;
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
LAB_0040522c:
  param_2[0xc] = iVar2;
  param_2[0xb] = iVar1 + (iVar2 - iVar3);
  return;
}


int FUN_00405290(int param_1,undefined8 *param_2,char *param_3,char **param_4,undefined4 *param_5,
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
      if ((iVar5 == 0) && (sVar7 = strlen(__s1_00), sVar7 == sVar15)) goto LAB_004054b0;
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
            if (local_70 == (char *)0x0) goto LAB_004053f0;
          }
          else if (local_70 == (char *)0x0) {
            local_70 = (char *)calloc((long)iVar5,1);
            if (local_70 == (char *)0x0) {
              bVar3 = true;
              goto LAB_004053f0;
            }
            bVar4 = true;
            local_70[(int)local_44] = '\x01';
          }
          local_70[lVar16] = '\x01';
        }
      }
LAB_004053f0:
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
              __fprintf_chk(__stream,1,&DAT_00408951,param_9,*param_4);
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
LAB_004054b0:
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


uint FUN_004058b0(uint param_1,undefined8 *param_2,char *param_3,long param_4,undefined8 param_5,
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
LAB_004058fa:
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
          goto LAB_004059fd;
        }
        pbVar8 = *(byte **)(param_7 + 8);
      }
      param_7[10] = 0;
    }
LAB_004059fd:
    param_7[6] = 1;
    cVar2 = *param_3;
LAB_00405a08:
    if (cVar2 == ':') {
      uVar3 = 0;
    }
    if (pbVar8 == (byte *)0x0) goto LAB_00405978;
LAB_00405a1c:
    if (*pbVar8 == 0) goto LAB_00405978;
  }
  else {
    if (param_7[6] == 0) goto LAB_004058fa;
    cVar2 = *param_3;
    pbVar8 = *(byte **)(param_7 + 8);
    if ((cVar2 - 0x2bU & 0xfd) != 0) goto LAB_00405a08;
    pcVar4 = param_3 + 1;
    param_3 = param_3 + 1;
    if (*pcVar4 == ':') {
      uVar3 = 0;
    }
    if (pbVar8 != (byte *)0x0) goto LAB_00405a1c;
LAB_00405978:
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
        FUN_004051b0(param_2,param_7);
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
LAB_00405ae6:
      if (uVar11 != param_1) {
        *param_7 = uVar11;
      }
      return 0xffffffff;
    }
    lVar6 = 3;
    pbVar8 = (byte *)param_2[(int)uVar11];
    pbVar9 = pbVar8;
    pbVar10 = &DAT_00408959;
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
          FUN_004051b0(param_2,param_7);
          uVar11 = param_7[0xb];
        }
      }
      param_7[0xc] = param_1;
      *param_7 = param_1;
      goto LAB_00405ae6;
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
        puVar15 = &DAT_00408959;
        goto LAB_00405c45;
      }
      if ((int)param_6 != 0) {
        if (pbVar8[2] == 0) {
          pcVar4 = strchr(param_3,(int)(char)bVar14);
          param_6 = param_6 & 0xffffffff;
          if (pcVar4 != (char *)0x0) goto LAB_00405bf0;
        }
        *(byte **)(param_7 + 8) = pbVar8 + 1;
        uVar11 = FUN_00405290(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar3,
                              &DAT_0040895a);
        if (uVar11 != 0xffffffff) {
          return uVar11;
        }
        pbVar8 = (byte *)param_2[(int)*param_7];
      }
    }
LAB_00405bf0:
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
  puVar15 = &DAT_00408978;
LAB_00405c45:
  uVar3 = FUN_00405290(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar3,puVar15);
  return uVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405e80(void)

{
  DAT_0060a440 = DAT_0060a29c;
  _DAT_0060a444 = DAT_0060a298;
  FUN_004058b0();
  DAT_0060a29c = DAT_0060a440;
  _DAT_0060a480 = DAT_0060a450;
  _DAT_0060a294 = DAT_0060a448;
  return;
}


void FUN_00405ee0(void)

{
  FUN_00405e80();
  return;
}


void FUN_00405f00(void)

{
  FUN_00405e80();
  return;
}


void FUN_00405f20(void)

{
  FUN_004058b0();
  return;
}


void FUN_00405f40(void)

{
  FUN_00405e80();
  return;
}


void FUN_00405f60(void)

{
  FUN_004058b0();
  return;
}


size_t FUN_00405f80(wchar_t *param_1,byte *param_2,size_t param_3,mbstate_t *param_4)

{
  char cVar1;
  size_t sVar2;
  wchar_t local_1c;
  
  if (param_2 == (byte *)0x0) {
    param_3 = 1;
    param_2 = (byte *)0x408977;
  }
  else {
    if (param_3 == 0) {
      return 0xfffffffffffffffe;
    }
    if (param_1 != (wchar_t *)0x0) goto LAB_00405fa4;
  }
  param_1 = &local_1c;
LAB_00405fa4:
  sVar2 = mbrtowc(param_1,(char *)param_2,param_3,param_4);
  if ((0xfffffffffffffffd < sVar2) && (cVar1 = FUN_00406880(0), cVar1 == '\0')) {
    sVar2 = 1;
    *param_1 = (uint)*param_2;
  }
  return sVar2;
}


ulong FUN_00406000(long param_1,ulong param_2,long *param_3)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  bool bVar9;
  
  lVar8 = 1;
  lVar4 = 1;
  uVar2 = 0xffffffffffffffff;
  uVar3 = 0;
  while (uVar7 = lVar4 + uVar3, uVar5 = uVar3, lVar4 + uVar3 < param_2) {
    while (uVar3 = uVar7, bVar1 = *(byte *)(param_1 + uVar2 + lVar4),
          *(byte *)(param_1 + uVar3) < bVar1) {
      lVar4 = 1;
      lVar8 = uVar3 - uVar2;
      uVar7 = uVar3 + 1;
      uVar5 = uVar3;
      if (param_2 <= uVar3 + 1) goto LAB_00406053;
    }
    if (*(byte *)(param_1 + uVar3) == bVar1) {
      if (lVar4 == lVar8) {
        lVar4 = 1;
      }
      else {
        lVar4 = lVar4 + 1;
        uVar3 = uVar5;
      }
    }
    else {
      lVar8 = 1;
      lVar4 = 1;
      uVar2 = uVar5;
      uVar3 = uVar5 + 1;
    }
  }
LAB_00406053:
  *param_3 = lVar8;
  lVar4 = 1;
  lVar8 = 1;
  uVar3 = 0;
  uVar7 = 0xffffffffffffffff;
  while (uVar5 = lVar8 + uVar3, uVar6 = uVar3, lVar8 + uVar3 < param_2) {
    while (uVar3 = uVar5, bVar1 = *(byte *)(param_1 + uVar7 + lVar8),
          bVar9 = *(byte *)(param_1 + uVar3) == bVar1, bVar1 <= *(byte *)(param_1 + uVar3) && !bVar9
          ) {
      lVar8 = 1;
      lVar4 = uVar3 - uVar7;
      uVar5 = uVar3 + 1;
      uVar6 = uVar3;
      if (param_2 <= uVar3 + 1) goto LAB_004060a0;
    }
    if (bVar9) {
      if (lVar8 == lVar4) {
        lVar8 = 1;
      }
      else {
        lVar8 = lVar8 + 1;
        uVar3 = uVar6;
      }
    }
    else {
      lVar4 = 1;
      lVar8 = 1;
      uVar3 = uVar6 + 1;
      uVar7 = uVar6;
    }
  }
LAB_004060a0:
  uVar3 = uVar2 + 1;
  if (uVar2 + 1 <= uVar7 + 1) {
    *param_3 = lVar4;
    uVar3 = uVar7 + 1;
  }
  return uVar3;
}


/* WARNING: Type propagation algorithm not settling */

byte * FUN_00406130(long param_1,byte *param_2,byte *param_3,byte *param_4)

{
  byte bVar1;
  int iVar2;
  byte *__n;
  byte **ppbVar3;
  byte *pbVar4;
  byte *pbVar5;
  long lVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *local_840;
  byte *local_838 [256];
  byte *local_38;
  
  if (param_4 < (byte *)0x3) {
    local_840 = (byte *)0x1;
    __n = param_4 + -1;
  }
  else {
    __n = (byte *)FUN_00406000(param_3,param_4,&local_840);
  }
  pbVar5 = local_840;
  ppbVar3 = local_838;
  do {
    *ppbVar3 = param_4;
    ppbVar3 = ppbVar3 + 1;
  } while (&local_38 != ppbVar3);
  if (param_4 == (byte *)0x0) {
    iVar2 = memcmp(param_3,param_3 + (long)local_840,(size_t)__n);
    if (iVar2 == 0) {
      return (byte *)0;
    }
  }
  else {
    pbVar10 = param_4 + -1;
    pbVar4 = param_3;
    do {
      bVar1 = *pbVar4;
      lVar6 = (long)pbVar10 - (long)pbVar4;
      pbVar4 = pbVar4 + 1;
      local_838[bVar1] = param_3 + lVar6;
    } while (param_3 + (long)param_4 != pbVar4);
    iVar2 = memcmp(param_3,param_3 + (long)local_840,(size_t)__n);
    if (iVar2 == 0) {
      pbVar4 = __n + -1;
      pbVar7 = (byte *)0x0;
      pbVar11 = (byte *)0x0;
LAB_00406369:
      do {
        while( true ) {
          pbVar9 = pbVar7 + (long)param_4;
          lVar6 = FUN_00406f70(param_2 + param_1,0,(long)pbVar9 - (long)param_2);
          if (lVar6 != 0) {
            return (byte *)0;
          }
          if (pbVar9 == (byte *)0x0) {
            return (byte *)0;
          }
          pbVar8 = local_838[pbVar9[param_1 + -1]];
          param_2 = pbVar9;
          if (pbVar8 == (byte *)0x0) break;
          if ((pbVar8 < pbVar5) && (pbVar11 != (byte *)0x0)) {
            pbVar8 = param_4 + -(long)pbVar5;
          }
          pbVar7 = pbVar7 + (long)pbVar8;
          pbVar11 = (byte *)0x0;
        }
        pbVar9 = __n;
        if (__n <= pbVar11) {
          pbVar9 = pbVar11;
        }
        if (pbVar9 < pbVar10) {
          do {
            if (param_3[(long)pbVar9] != (pbVar7 + param_1)[(long)pbVar9]) {
              pbVar7 = pbVar9 + (long)(pbVar7 + (1 - (long)__n));
              pbVar11 = (byte *)0x0;
              goto LAB_00406369;
            }
            pbVar9 = pbVar9 + 1;
          } while (pbVar9 != pbVar10);
        }
        pbVar9 = __n;
        if ((pbVar11 < __n) &&
           (pbVar8 = pbVar4, (pbVar7 + param_1)[(long)pbVar4] == param_3[(long)pbVar4])) {
          do {
            pbVar9 = pbVar8;
            if (pbVar11 == pbVar9) break;
            pbVar8 = pbVar9 + -1;
          } while (param_3[(long)(pbVar9 + -1)] == (pbVar9 + -1)[(long)(pbVar7 + param_1)]);
        }
        if (pbVar9 < pbVar11 + 1) {
          return pbVar7 + param_1;
        }
        pbVar7 = pbVar7 + (long)pbVar5;
        pbVar11 = param_4 + -(long)pbVar5;
      } while( true );
    }
  }
  pbVar5 = param_4 + -(long)__n;
  if (param_4 + -(long)__n < __n) {
    pbVar5 = __n;
  }
  pbVar10 = (byte *)0x0;
  local_840 = pbVar5 + 1;
  do {
    while( true ) {
      pbVar4 = param_4 + (long)pbVar10;
      lVar6 = FUN_00406f70(param_2 + param_1,0,(long)pbVar4 - (long)param_2);
      if ((pbVar4 == (byte *)0x0) || (lVar6 != 0)) {
        return (byte *)0x0;
      }
      pbVar7 = local_838[pbVar4[param_1 + -1]];
      param_2 = pbVar4;
      if (pbVar7 == (byte *)0x0) break;
LAB_00406220:
      pbVar10 = pbVar10 + (long)pbVar7;
    }
    pbVar4 = pbVar10 + param_1;
    if (__n < param_4 + -1) {
      pbVar7 = __n;
      if (pbVar4[(long)__n] == param_3[(long)__n]) {
        do {
          pbVar7 = pbVar7 + 1;
          if (param_4 + -1 <= pbVar7) goto LAB_004062a3;
        } while (param_3[(long)pbVar7] == pbVar4[(long)pbVar7]);
      }
      pbVar10 = pbVar10 + (1 - (long)__n);
      goto LAB_00406220;
    }
LAB_004062a3:
    pbVar7 = __n + -1;
    if (pbVar7 == (byte *)0xffffffffffffffff) {
      return pbVar4;
    }
    if (pbVar4[(long)pbVar7] == param_3[(long)(__n + -1)]) {
      do {
        pbVar7 = pbVar7 + -1;
        if (pbVar7 == (byte *)0xffffffffffffffff) {
          return pbVar4;
        }
      } while (param_3[(long)pbVar7] == pbVar4[(long)pbVar7]);
    }
    pbVar10 = pbVar10 + (long)(pbVar5 + 1);
  } while( true );
}


char * FUN_00406480(char *param_1,char *param_2)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  char cVar5;
  int iVar6;
  char *pcVar7;
  ulong __n;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  char cVar11;
  char *pcVar12;
  char *pcVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  bool bVar18;
  long local_40 [2];
  
  cVar5 = *param_1;
  cVar2 = *param_2;
  pcVar7 = param_1;
  if (cVar5 == '\0') {
    pcVar7 = (char *)0x0;
    if (cVar2 == '\0') {
      pcVar7 = param_1;
    }
  }
  else if (cVar2 != '\0') {
    bVar3 = true;
    pcVar12 = param_1;
    pcVar13 = param_2;
    cVar11 = cVar2;
    do {
      pcVar12 = pcVar12 + 1;
      pcVar13 = pcVar13 + 1;
      bVar18 = cVar11 == cVar5;
      cVar11 = *pcVar13;
      bVar3 = (bool)(bVar3 & bVar18);
      cVar5 = *pcVar12;
      if (cVar5 == '\0') {
        if (cVar11 != '\0') {
          return (char *)0x0;
        }
        break;
      }
    } while (cVar11 != '\0');
    if (!bVar3) {
      uVar14 = (long)pcVar13 - (long)param_2;
      pcVar7 = strchr(param_1 + 1,(int)cVar2);
      if ((pcVar7 != (char *)0x0) && (uVar14 != 1)) {
        pcVar13 = pcVar13 + -uVar14;
        lVar15 = (long)(param_1 + uVar14) - (long)pcVar7;
        if (param_1 + uVar14 < pcVar7) {
          lVar15 = 1;
        }
        if (uVar14 < 0x20) {
          if (uVar14 < 3) {
            local_40[0] = 1;
            __n = uVar14 - 1;
          }
          else {
            __n = FUN_00406000(pcVar13,uVar14,local_40);
          }
          lVar17 = local_40[0];
          iVar6 = memcmp(pcVar13,pcVar13 + local_40[0],__n);
          if (iVar6 == 0) {
            uVar9 = __n - 1;
            lVar16 = 0;
            uVar10 = 0;
            while( true ) {
              lVar1 = uVar14 + lVar16;
              lVar15 = FUN_00406f70(pcVar7 + lVar15,0,lVar1 - lVar15);
              if ((lVar1 == 0) || (lVar15 != 0)) break;
              uVar8 = uVar10;
              if (uVar10 <= __n) {
                uVar8 = __n;
              }
              lVar15 = lVar1;
              if (uVar8 < uVar14) {
                if (pcVar7[lVar16 + uVar8] == pcVar13[uVar8]) {
                  do {
                    uVar8 = uVar8 + 1;
                    if (uVar14 == uVar8) goto LAB_00406653;
                  } while (pcVar13[uVar8] == pcVar7[uVar8 + lVar16]);
                }
                uVar10 = 0;
                lVar16 = uVar8 + (1 - __n) + lVar16;
              }
              else {
LAB_00406653:
                uVar8 = __n;
                if ((uVar10 < __n) && (uVar4 = uVar9, pcVar13[uVar9] == pcVar7[uVar9 + lVar16])) {
                  do {
                    uVar8 = uVar4;
                    if (uVar10 == uVar8) break;
                    uVar4 = uVar8 - 1;
                  } while (pcVar13[uVar8 - 1] == pcVar7[(uVar8 - 1) + lVar16]);
                }
                if (uVar8 < uVar10 + 1) {
                  return pcVar7 + lVar16;
                }
                lVar16 = lVar16 + lVar17;
                uVar10 = uVar14 - lVar17;
              }
            }
          }
          else {
            uVar9 = uVar14 - __n;
            if (uVar14 - __n < __n) {
              uVar9 = __n;
            }
            lVar17 = 0;
            local_40[0] = uVar9 + 1;
            while( true ) {
              lVar16 = uVar14 + lVar17;
              lVar15 = FUN_00406f70(pcVar7 + lVar15,0,lVar16 - lVar15);
              if ((lVar16 == 0) || (lVar15 != 0)) break;
              lVar15 = lVar16;
              if (__n < uVar14) {
                uVar10 = __n;
                if (pcVar7[lVar17 + __n] == pcVar13[__n]) {
                  do {
                    uVar10 = uVar10 + 1;
                    if (uVar14 <= uVar10) goto LAB_00406773;
                  } while (pcVar13[uVar10] == pcVar7[uVar10 + lVar17]);
                }
                lVar17 = uVar10 + (1 - __n) + lVar17;
              }
              else {
LAB_00406773:
                pcVar12 = pcVar7 + lVar17;
                lVar16 = __n - 1;
                if (lVar16 == -1) {
                  return pcVar12;
                }
                if (pcVar12[lVar16] == pcVar13[__n - 1]) {
                  do {
                    lVar16 = lVar16 + -1;
                    if (lVar16 == -1) {
                      return pcVar12;
                    }
                  } while (pcVar13[lVar16] == pcVar12[lVar16]);
                }
                lVar17 = lVar17 + uVar9 + 1;
              }
            }
          }
          pcVar7 = (char *)0x0;
        }
        else {
          pcVar7 = (char *)FUN_00406130(pcVar7,lVar15,pcVar13,uVar14);
        }
      }
    }
  }
  return pcVar7;
}


ulong FUN_00406820(uint *param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  
  lVar2 = __fpending();
  uVar1 = *param_1;
  uVar3 = FUN_00406e50(param_1);
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


bool FUN_00406880(int param_1)

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
    pbVar5 = &DAT_0040897c;
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

char * FUN_004068e0(void)

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
  if (DAT_0060a478 != (char *)0x0) goto LAB_0040691a;
  pcVar7 = getenv("CHARSETALIASDIR");
  if ((pcVar7 == (char *)0x0) || (*pcVar7 == '\0')) {
    sVar6 = 0x73;
    sVar5 = 0x65;
    __n = 100;
    pcVar7 = 
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib"
    ;
LAB_00406a05:
    __file = (char *)malloc(sVar6);
    if (__file != (char *)0x0) {
      memcpy(__file,pcVar7,__n);
      __file[__n] = '/';
      goto LAB_00406a26;
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
        goto LAB_00406a05;
      }
      sVar6 = __n + 0xe;
    }
    __file = (char *)malloc(sVar6);
    if (__file != (char *)0x0) {
      memcpy(__file,pcVar7,__n);
      sVar5 = __n;
LAB_00406a26:
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
LAB_00406ac0:
          pbVar8 = (byte *)__stream->_IO_read_ptr;
          if (__stream->_IO_read_end <= pbVar8) goto LAB_00406c4c;
          do {
            __stream->_IO_read_ptr = (char *)(pbVar8 + 1);
            uVar4 = (uint)*pbVar8;
            __ptr = pcVar7;
            while( true ) {
              pcVar7 = __ptr;
              if ((uVar4 - 9 < 2) || (uVar4 == 0x20)) goto LAB_00406ac0;
              if (uVar4 == 0x23) goto LAB_00406cb1;
              ungetc(uVar4,__stream);
              iVar2 = fscanf(__stream,"%50s %50s",&local_b8,&local_78);
              puVar13 = &local_b8;
              if (iVar2 < 2) goto LAB_00406c5f;
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
                FUN_00406e50(__stream);
                goto LAB_00406a64;
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
LAB_00406c4c:
              uVar4 = __uflow(__stream);
              __ptr = pcVar7;
              if (uVar4 == 0xffffffff) goto LAB_00406c5f;
            }
          } while( true );
        }
        close(iVar2);
      }
      goto LAB_00406a5e;
    }
  }
  DAT_0060a478 = "";
LAB_0040691a:
  cVar1 = *DAT_0060a478;
  pcVar7 = DAT_0060a478;
  do {
    if (cVar1 == '\0') {
LAB_00406974:
      if (*__s1 == '\0') {
        __s1 = "ASCII";
      }
      return __s1;
    }
    iVar2 = strcmp(__s1,pcVar7);
    if ((iVar2 == 0) || ((cVar1 == '*' && (pcVar7[1] == '\0')))) {
      sVar6 = strlen(pcVar7);
      __s1 = pcVar7 + sVar6 + 1;
      goto LAB_00406974;
    }
    sVar6 = strlen(pcVar7);
    sVar5 = strlen(pcVar7 + sVar6 + 1);
    pcVar7 = pcVar7 + sVar6 + 1 + sVar5 + 1;
    cVar1 = *pcVar7;
  } while( true );
LAB_00406cb1:
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
  if (uVar4 == 0xffffffff) goto LAB_00406c5f;
  goto LAB_00406ac0;
LAB_00406c5f:
  FUN_00406e50(__stream);
  if (local_d0 == 0) {
LAB_00406a5e:
    pcVar7 = "";
  }
  else {
    pcVar7[local_d0] = '\0';
  }
LAB_00406a64:
  free(__file);
  DAT_0060a478 = pcVar7;
  goto LAB_0040691a;
}


int FUN_00406e50(FILE *param_1)

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
      if (_Var4 == -1) goto LAB_00406eb7;
    }
    iVar1 = FUN_00406ed0(param_1);
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
LAB_00406eb7:
  iVar1 = fclose(param_1);
  return iVar1;
}


void FUN_00406ed0(FILE *param_1)

{
  int iVar1;
  
  if (param_1 != (FILE *)0x0) {
    iVar1 = __freading();
    if ((iVar1 != 0) && ((param_1->_flags & 0x100U) != 0)) {
      FUN_00406f10(param_1,0,1);
      fflush(param_1);
      return;
    }
  }
  fflush(param_1);
  return;
}


ulong FUN_00406f10(FILE *param_1,__off_t param_2,int param_3)

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


ulong * FUN_00406f70(ulong *param_1,char param_2,ulong param_3)

{
  char cVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  
  if (param_3 == 0) {
    return (ulong *)0x0;
  }
  if (((ulong)param_1 & 7) == 0) {
LAB_00406fb0:
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
      if (((ulong)param_1 & 7) == 0) goto LAB_00406fb0;
      cVar1 = *(char *)param_1;
    }
  }
  return param_1;
}


/* WARNING: Removing unreachable block (ram,0x004070b3) */
/* WARNING: Removing unreachable block (ram,0x004070b8) */

void FUN_00407080(void)

{
  __DT_INIT();
  return;
}


void FUN_004070e0(void)

{
  return;
}


void FUN_004070f0(undefined8 param_1)

{
  __cxa_atexit(param_1,0,DAT_0060a228);
  return;
}


undefined8 FUN_00407108(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  FUN_00401cb1();
  return;
}

