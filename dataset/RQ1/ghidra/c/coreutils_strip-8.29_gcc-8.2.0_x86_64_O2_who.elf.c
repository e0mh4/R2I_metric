
void switchD_004038b0::caseD_b(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401c35(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401c3a(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401c3f(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401c44(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void switchD_0040538a::caseD_0(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void switchD_00407acc::caseD_5(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


undefined8 FUN_00401c60(ulong param_1,undefined8 *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  
  bVar1 = true;
  param_1 = param_1 & 0xffffffff;
  FUN_004036c0(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils",
                 "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale"
                );
  textdomain("coreutils");
  FUN_00409e30(FUN_00403520);
LAB_00401cb0:
  iVar3 = FUN_00406910(param_1 & 0xffffffff,param_2,"abdlmpqrstuwHT",&PTR_DAT_0040a760,0);
  if (iVar3 == -1) {
    if (bVar1) {
      DAT_0060e3a9 = 1;
      DAT_0060e3b4 = 1;
    }
    if (DAT_0060e3b0 != '\0') {
      DAT_0060e3b4 = 0;
    }
    cVar2 = FUN_004035c0(2);
    if (cVar2 == '\0') {
      DAT_0060e3a0 = "%b %e %H:%M";
      DAT_0060e398 = 0xc;
    }
    else {
      DAT_0060e3a0 = "%Y-%m-%d %H:%M";
      DAT_0060e398 = 0x10;
    }
    lVar4 = (long)DAT_0060e2fc;
    iVar3 = (int)param_1 - DAT_0060e2fc;
    if (iVar3 == 1) {
      FUN_00402920(param_2[lVar4],0);
      return 0;
    }
    if (iVar3 < 2) {
      if (SCARRY4(iVar3,1) == iVar3 + 1 < 0) {
LAB_00401f61:
        FUN_00402920("/var/run/utmp",1);
        return 0;
      }
    }
    else if (iVar3 == 2) {
      DAT_0060e3a8 = 1;
      goto LAB_00401f61;
    }
LAB_00401fb1:
    param_1 = FUN_004052e0(param_2[lVar4 + 2]);
    uVar5 = dcgettext(0,"extra operand %s",5);
    error(0,0,uVar5,param_1);
    goto LAB_00401e3f;
  }
  if (iVar3 == 0x6d) {
    DAT_0060e3a8 = 1;
    goto LAB_00401cb0;
  }
  if (iVar3 < 0x6e) {
    if (iVar3 == 0x54) {
LAB_00401ed0:
      DAT_0060e3b1 = 1;
      goto LAB_00401cb0;
    }
    if (iVar3 < 0x55) {
      if (iVar3 == -0x82) {
        lVar4 = FUN_00403080(0);
        goto LAB_00401fb1;
      }
      if (iVar3 == 0x48) {
        DAT_0060e3b2 = 1;
        goto LAB_00401cb0;
      }
      if (iVar3 == -0x83) {
        FUN_00405760(stdout,&DAT_00409f82,"GNU coreutils",PTR_DAT_0060e280,"Joseph Arceneaux",
                     "David MacKenzie","Michael Stone",0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
    }
    else {
      if (iVar3 == 0x62) {
        DAT_0060e3af = 1;
        bVar1 = false;
        goto LAB_00401cb0;
      }
      if (iVar3 < 99) {
        if (iVar3 != 0x61) goto LAB_00401e3f;
        DAT_0060e3af = 1;
        bVar1 = false;
        DAT_0060e3ae = 1;
        DAT_0060e3ad = 1;
        DAT_0060e3ac = 1;
        DAT_0060e3aa = 1;
        DAT_0060e3ab = 1;
        DAT_0060e3a9 = 1;
        DAT_0060e3b1 = 1;
        DAT_0060e3b3 = 1;
        DAT_0060e3b0 = '\x01';
        goto LAB_00401cb0;
      }
      if (iVar3 == 100) {
        DAT_0060e3ae = 1;
        bVar1 = false;
        DAT_0060e3b3 = 1;
        DAT_0060e3b0 = '\x01';
        goto LAB_00401cb0;
      }
      if (iVar3 == 0x6c) {
        DAT_0060e3ad = 1;
        bVar1 = false;
        DAT_0060e3b3 = 1;
        goto LAB_00401cb0;
      }
    }
  }
  else {
    if (iVar3 == 0x73) {
      DAT_0060e3b4 = 1;
      goto LAB_00401cb0;
    }
    if (iVar3 < 0x74) {
      if (iVar3 != 0x71) {
        if (iVar3 < 0x72) {
          if (iVar3 != 0x70) goto LAB_00401e3f;
          DAT_0060e3ac = 1;
          bVar1 = false;
        }
        else {
          DAT_0060e3aa = 1;
          bVar1 = false;
          DAT_0060e3b3 = 1;
        }
        goto LAB_00401cb0;
      }
      goto LAB_00401e50;
    }
    if (iVar3 == 0x75) {
      DAT_0060e3a9 = 1;
      bVar1 = false;
      DAT_0060e3b3 = 1;
      goto LAB_00401cb0;
    }
    if (iVar3 < 0x75) {
      DAT_0060e3ab = 1;
      bVar1 = false;
      goto LAB_00401cb0;
    }
    if (iVar3 == 0x77) goto LAB_00401ed0;
    if (iVar3 == 0x80) {
      DAT_0060e3b6 = 1;
      goto LAB_00401cb0;
    }
  }
LAB_00401e3f:
  FUN_00403080(1);
LAB_00401e50:
  DAT_0060e3b5 = 1;
  goto LAB_00401cb0;
}


void FUN_00401ff0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_retaddr;
  undefined auStack_8 [8];
  
  (*(code *)PTR___libc_start_main_0060dff0)
            (FUN_00401c60,unaff_retaddr,&stack0x00000008,FUN_00409dc0,FUN_00409e20,param_3,auStack_8
            );
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* WARNING: Removing unreachable block (ram,0x00402028) */
/* WARNING: Removing unreachable block (ram,0x00402032) */

void FUN_0040201b(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00402069) */

void FUN_0040203a(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x004020a6) */

void FUN_00402071(void)

{
  if (DAT_0060e328 != '\0') {
    return;
  }
  FUN_0040201b();
  DAT_0060e328 = 1;
  return;
}


/* WARNING: Removing unreachable block (ram,0x00402069) */

void thunk_FUN_0040203a(void)

{
  return;
}


void FUN_004020d0(undefined4 param_1,undefined *param_2,undefined param_3,undefined4 param_4,
                 undefined8 param_5,undefined8 param_6,char *param_7,char *param_8,
                 undefined8 param_9,char *param_10)

{
  int iVar1;
  size_t sVar2;
  undefined *__ptr;
  char *pcVar3;
  long lVar4;
  char *pcVar5;
  char cVar6;
  char *local_58;
  undefined local_4d [8];
  undefined local_45 [21];
  
  cVar6 = DAT_0060e3b4;
  DAT_0060e279 = param_3;
  if (((DAT_0060e3b3 == '\0') || (DAT_0060e3b4 != '\0')) || (sVar2 = strlen(param_7), 6 < sVar2)) {
    local_4d[0] = 0;
  }
  else {
    __sprintf_chk(local_4d,1,8," %-6s",param_7);
    cVar6 = DAT_0060e3b4;
  }
  if ((cVar6 == '\0') && (sVar2 = strlen(param_8), sVar2 < 0xc)) {
    __sprintf_chk(local_45,1,0xd," %10s",param_8);
  }
  else {
    local_45[0] = 0;
  }
  lVar4 = 1;
  if (DAT_0060e3b0 != '\0') {
    sVar2 = strlen(param_10);
    lVar4 = sVar2 + 2;
    if (sVar2 < 0xc) {
      lVar4 = 0xe;
    }
  }
  __ptr = (undefined *)FUN_004058a0(lVar4);
  if (DAT_0060e3b0 == '\0') {
    *__ptr = 0;
  }
  else {
    __sprintf_chk(__ptr,1,0xffffffffffffffff," %-12s",param_10);
  }
  pcVar5 = " x";
  if (DAT_0060e3b1 == '\0') {
    pcVar5 = "";
  }
  if (param_2 == (undefined *)0x0) {
    param_2 = &DAT_00409e84;
  }
  iVar1 = FUN_00405b30(&local_58,"%-8.*s%s %-12.*s %-*s%s%s %-8s%s",param_1,param_2,pcVar5,param_4,
                       param_5,DAT_0060e398,param_6,local_4d,local_45,param_9,__ptr);
  pcVar5 = local_58;
  if (iVar1 == -1) {
                    /* WARNING: Subroutine does not return */
    FUN_00405af0();
  }
  sVar2 = strlen(local_58);
  pcVar5 = pcVar5 + sVar2;
  do {
    pcVar3 = pcVar5;
    pcVar5 = pcVar3 + -1;
  } while (pcVar3[-1] == ' ');
  *pcVar3 = '\0';
  puts(local_58);
  free(local_58);
  free(__ptr);
  return;
}


void FUN_00402310(long param_1)

{
  char *pcVar1;
  size_t sVar2;
  char *__src;
  
  pcVar1 = (char *)dcgettext(0,&DAT_00409e9c,5);
  sVar2 = strlen(pcVar1);
  pcVar1 = (char *)FUN_004058a0(sVar2 + 5);
  __src = (char *)dcgettext(0,&DAT_00409e9c,5);
  strcpy(pcVar1,__src);
  strncat(pcVar1,(char *)(param_1 + 0x28),4);
  return;
}


undefined * FUN_00402380(int param_1)

{
  tm *__tp;
  undefined *puVar1;
  long local_10 [2];
  
  local_10[0] = (long)param_1;
  __tp = localtime(local_10);
  if (__tp != (tm *)0x0) {
    strftime(&DAT_0060e360,0x21,DAT_0060e3a0,__tp);
    return &DAT_0060e360;
  }
  puVar1 = (undefined *)FUN_00403620(local_10[0],&DAT_0060e360);
  return puVar1;
}


void FUN_004023e0(long param_1,long param_2)

{
  char *__s;
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  uint *puVar4;
  size_t sVar5;
  undefined8 uVar6;
  undefined *puVar7;
  char *__ptr;
  uint *puVar8;
  uint *puVar9;
  char cVar10;
  uint uVar11;
  undefined4 *puVar12;
  char cVar14;
  bool bVar15;
  long local_250;
  undefined4 local_21b;
  undefined local_214 [12];
  undefined4 local_208;
  undefined local_204 [44];
  stat local_1d8;
  undefined4 local_148;
  undefined4 *puVar13;
  
  __sprintf_chk(local_214,1,0xc,&DAT_00409ea6,(long)*(int *)(param_1 + 4));
  cVar14 = *(char *)(param_1 + 8);
  if (cVar14 != '/') {
    local_208 = 0x7665642f;
    local_204._0_2_ = 0x2f;
    pcVar3 = (char *)(param_1 + 8);
    puVar13 = (undefined4 *)(local_204 + 1);
    goto joined_r0x004026ea;
  }
  pcVar3 = (char *)(param_1 + 8);
  puVar13 = &local_208;
  do {
    puVar12 = (undefined4 *)((long)puVar13 + 1);
    pcVar3 = pcVar3 + 1;
    *(char *)puVar13 = cVar14;
    puVar13 = puVar12;
    if ((char *)(param_1 + 0x28) <= pcVar3) break;
    cVar14 = *pcVar3;
joined_r0x004026ea:
  } while (cVar14 != '\0');
  local_250 = param_1 + 8;
  *(char *)puVar13 = '\0';
  iVar2 = __xstat(1,(char *)&local_208,&local_1d8);
  if (iVar2 == 0) {
    cVar14 = (-((local_1d8.st_mode & 0x10) == 0) & 2U) + 0x2b;
    if (local_1d8.st_atim.tv_sec == 0) goto LAB_004024a1;
    if (DAT_0060e270 == -0x8000000000000000) {
      time(&DAT_0060e270);
    }
    if (((param_2 < local_1d8.st_atim.tv_sec) &&
        (DAT_0060e270 + -0x1517f <= local_1d8.st_atim.tv_sec)) &&
       (local_1d8.st_atim.tv_sec <= DAT_0060e270)) {
      iVar2 = (int)DAT_0060e270 - (int)local_1d8.st_atim.tv_sec;
      if (iVar2 < 0x3c) {
        puVar7 = &DAT_00409ea0;
      }
      else {
        if (0x1517f < iVar2) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("seconds_idle / (60 * 60) < 24","src/who.c",0xcd,"idle_string");
        }
        __sprintf_chk(&DAT_0060e381,1,6,"%02d:%02d",iVar2 / 0xe10,
                      (ulong)(uint)(iVar2 % 0xe10) / 0x3c);
        puVar7 = &DAT_0060e381;
      }
    }
    else {
      puVar7 = (undefined *)dcgettext(0," old ",5);
    }
    __sprintf_chk(&local_21b,1,7,&DAT_00409ee2,6,puVar7);
    cVar10 = *(char *)(param_1 + 0x4c);
  }
  else {
    cVar14 = '?';
LAB_004024a1:
    cVar10 = *(char *)(param_1 + 0x4c);
    local_21b = 0x3f2020;
  }
  if (cVar10 == '\0') {
    if (DAT_0060e390 == (char *)0x0) {
      DAT_0060e390 = (char *)0x1;
      free(DAT_0060e388);
      DAT_0060e388 = (char *)FUN_004058a0(1);
    }
    pcVar3 = DAT_0060e388;
    *DAT_0060e388 = '\0';
    goto LAB_004025d8;
  }
  pcVar3 = (char *)(param_1 + 0x4c);
  puVar4 = &local_148;
  do {
    puVar9 = (uint *)((long)puVar4 + 1);
    pcVar3 = pcVar3 + 1;
    *(char *)puVar4 = cVar10;
    if ((char *)(param_1 + 0x14cU) <= pcVar3) break;
    cVar10 = *pcVar3;
    puVar4 = puVar9;
  } while (cVar10 != '\0');
  *(char *)puVar9 = '\0';
  pcVar3 = strchr((char *)&local_148,0x3a);
  puVar4 = &local_148;
  if (pcVar3 == (char *)0x0) {
    if (((char)local_148 == '\0') || (DAT_0060e3b6 == '\0')) {
      do {
        puVar9 = puVar4 + 1;
        uVar11 = *puVar4 + 0xfefefeff & ~*puVar4 & 0x80808080;
        puVar4 = puVar9;
      } while (uVar11 == 0);
    }
    else {
      puVar4 = (uint *)FUN_004034e0(&local_148);
      puVar8 = &local_148;
      if (puVar4 != (uint *)0x0) {
        pcVar3 = (char *)strlen((char *)puVar4);
        goto LAB_0040279d;
      }
      do {
        puVar9 = puVar8 + 1;
        uVar11 = *puVar8 + 0xfefefeff & ~*puVar8 & 0x80808080;
        puVar8 = puVar9;
      } while (uVar11 == 0);
    }
    bVar15 = (uVar11 & 0x8080) == 0;
    if (bVar15) {
      uVar11 = uVar11 >> 0x10;
    }
    if (bVar15) {
      puVar9 = (uint *)((long)puVar9 + 2);
    }
    pcVar3 = (char *)((long)puVar9 +
                     ((-3 - (ulong)CARRY1((byte)uVar11,(byte)uVar11)) - (long)&local_148));
    puVar4 = &local_148;
LAB_0040279d:
    pcVar3 = pcVar3 + 3;
    if (DAT_0060e390 < pcVar3) {
      DAT_0060e390 = pcVar3;
      free(DAT_0060e388);
      DAT_0060e388 = (char *)FUN_004058a0(pcVar3);
    }
    __sprintf_chk(DAT_0060e388,1,0xffffffffffffffff,&DAT_00409eef,puVar4);
  }
  else {
    __s = pcVar3 + 1;
    *pcVar3 = '\0';
    if ((((char)local_148 != '\0') && (DAT_0060e3b6 != '\0')) &&
       (puVar4 = (uint *)FUN_004034e0(&local_148), puVar4 == (uint *)0x0)) {
      puVar4 = &local_148;
    }
    pcVar3 = (char *)strlen((char *)puVar4);
    pcVar1 = DAT_0060e390;
    __ptr = DAT_0060e388;
    if (__s == (char *)0x0) goto LAB_0040279d;
    sVar5 = strlen(__s);
    pcVar3 = pcVar3 + sVar5 + 4;
    if (pcVar1 < pcVar3) {
      DAT_0060e390 = pcVar3;
      free(__ptr);
      __ptr = (char *)FUN_004058a0(pcVar3);
      DAT_0060e388 = __ptr;
    }
    __sprintf_chk(__ptr,1,0xffffffffffffffff,"(%s:%s)",puVar4,__s);
  }
  if (puVar4 != &local_148) {
    free(puVar4);
  }
  pcVar3 = DAT_0060e388;
  if (DAT_0060e388 == (char *)0x0) {
    pcVar3 = "";
  }
LAB_004025d8:
  uVar6 = FUN_00402380(*(undefined4 *)(param_1 + 0x154));
  FUN_004020d0(0x20,param_1 + 0x2c,cVar14,0x20,local_250,uVar6,&local_21b,local_214,pcVar3,"");
  return;
}


void FUN_00402920(undefined8 param_1)

{
  char cVar1;
  FILE *pFVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  void *pvVar6;
  undefined8 uVar7;
  char *pcVar8;
  undefined8 uVar9;
  char *pcVar10;
  int *piVar11;
  byte **ppbVar12;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  short sVar18;
  uint uVar19;
  byte *pbVar20;
  byte *pbVar21;
  long lVar22;
  char *unaff_R13;
  short *psVar23;
  bool bVar24;
  bool bVar25;
  byte bVar26;
  byte *pbStack_100;
  char *pcStack_f8;
  byte *apbStack_f0 [5];
  char *pcStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  char *pcStack_b0;
  char *pcStack_a8;
  char *pcStack_a0;
  char *pcStack_98;
  char *pcStack_90;
  long local_58;
  short *local_50;
  char local_44 [20];
  byte **ppbVar13;
  
  bVar26 = 0;
  iVar3 = FUN_00406a70(param_1,&local_58,&local_50);
  psVar23 = local_50;
  if (iVar3 == 0) {
    if (DAT_0060e3b5 == '\0') {
      if (DAT_0060e3b2 != '\0') {
        dcgettext(0,&DAT_00409f07,5);
        dcgettext(0,"COMMENT",5);
        pcStack_90 = (char *)dcgettext(0,&DAT_00409f14,5);
        pcStack_98 = (char *)dcgettext(0,&DAT_00409f18,5);
        dcgettext(0,&DAT_00409f1d,5);
        uVar9 = dcgettext(0,&DAT_00409f22,5);
        uVar7 = dcgettext(0,&DAT_00409f27,5);
        pcStack_a0 = (char *)0x402e63;
        FUN_004020d0(0xffffffff,uVar7,0x20,0xffffffff,uVar9);
      }
      if (DAT_0060e3a8 != '\0') {
        unaff_R13 = ttyname(0);
        if (unaff_R13 == (char *)0x0) goto LAB_00402ad2;
        iVar3 = strncmp(unaff_R13,"/dev/",5);
        if (iVar3 == 0) {
          unaff_R13 = unaff_R13 + 5;
        }
      }
      lVar22 = -0x8000000000000000;
      lVar17 = local_58 + -1;
      if (local_58 != 0) {
        do {
          sVar18 = *psVar23;
          if ((DAT_0060e3a8 == '\0') ||
             (iVar3 = strncmp(unaff_R13,(char *)(psVar23 + 4),0x20), iVar3 == 0)) {
            if ((DAT_0060e3a9 == '\0') || ((*(char *)(psVar23 + 0x16) == '\0' || (sVar18 != 7)))) {
              if ((DAT_0060e3aa == '\0') || (sVar18 != 1)) {
                if ((DAT_0060e3af == '\0') || (sVar18 != 2)) {
                  if ((DAT_0060e3ab == '\0') || (sVar18 != 3)) {
                    if ((DAT_0060e3ac == '\0') || (sVar18 != 5)) {
                      if ((DAT_0060e3ad == '\0') || (sVar18 != 6)) {
                        if ((DAT_0060e3ae != '\0') && (sVar18 == 8)) {
                          pcVar8 = (char *)FUN_00402310(psVar23);
                          __sprintf_chk(local_44,1,0xc,&DAT_00409ea6,(long)*(int *)(psVar23 + 2));
                          if (DAT_0060e340 == (char *)0x0) {
                            pcVar10 = (char *)dcgettext(0,"term=",5);
                            uVar15 = 0xffffffffffffffff;
                            do {
                              if (uVar15 == 0) break;
                              uVar15 = uVar15 - 1;
                              cVar1 = *pcVar10;
                              pcVar10 = pcVar10 + (ulong)bVar26 * -2 + 1;
                            } while (cVar1 != '\0');
                            pcVar10 = (char *)dcgettext(0,"exit=",5);
                            uVar16 = 0xffffffffffffffff;
                            do {
                              if (uVar16 == 0) break;
                              uVar16 = uVar16 - 1;
                              cVar1 = *pcVar10;
                              pcVar10 = pcVar10 + (ulong)bVar26 * -2 + 1;
                            } while (cVar1 != '\0');
                            DAT_0060e340 = (char *)FUN_004058a0(~uVar15 + 0xc + ~uVar16);
                          }
                          dcgettext(0,"exit=",5);
                          sVar18 = psVar23[0xa6];
                          uVar9 = dcgettext(0,"term=",5);
                          pcStack_90 = (char *)0x402f0f;
                          __sprintf_chk(DAT_0060e340,1,0xffffffffffffffff,"%s%d %s%d",uVar9,
                                        (int)sVar18);
                          pcVar10 = DAT_0060e340;
                          pcStack_90 = (char *)0x402f22;
                          FUN_00402380(*(undefined4 *)(psVar23 + 0xaa));
                          pcStack_90 = pcVar10;
                          pcStack_a0 = local_44;
                          pcStack_a8 = "";
                          pcStack_b0 = (char *)0x402f4e;
                          pcStack_98 = pcVar8;
                          FUN_004020d0(0xffffffff,"",0x20,0x20,psVar23 + 4);
                          free(pcVar8);
                          sVar18 = *psVar23;
                        }
                        goto LAB_00402a50;
                      }
                      pvVar6 = (void *)FUN_00402310(psVar23);
                      __sprintf_chk(local_44,1,0xc,&DAT_00409ea6,(long)*(int *)(psVar23 + 2));
                      FUN_00402380(*(undefined4 *)(psVar23 + 0xaa));
                      pcVar8 = (char *)dcgettext(0,"LOGIN",5);
                    }
                    else {
                      pvVar6 = (void *)FUN_00402310(psVar23);
                      __sprintf_chk(local_44,1,0xc,&DAT_00409ea6,(long)*(int *)(psVar23 + 2));
                      FUN_00402380(*(undefined4 *)(psVar23 + 0xaa));
                      pcVar8 = "";
                    }
                    pcStack_90 = local_44;
                    pcStack_98 = "";
                    pcStack_a0 = (char *)0x402ced;
                    FUN_004020d0(0xffffffff,pcVar8,0x20,0x20,psVar23 + 4);
                    free(pvVar6);
                    sVar18 = *psVar23;
                    goto LAB_00402a50;
                  }
                  FUN_00402380(*(undefined4 *)(psVar23 + 0xaa));
                  pcVar8 = "clock change";
                }
                else {
                  FUN_00402380(*(undefined4 *)(psVar23 + 0xaa));
                  pcVar8 = "system boot";
                }
                lVar5 = dcgettext(0,pcVar8,5);
              }
              else {
                iVar3 = *(int *)(psVar23 + 2);
                lVar5 = (long)iVar3 / 0x100;
                if (DAT_0060e350 == 0) {
                  pcVar8 = (char *)dcgettext(0,"run-level",5);
                  uVar15 = 0xffffffffffffffff;
                  do {
                    if (uVar15 == 0) break;
                    uVar15 = uVar15 - 1;
                    cVar1 = *pcVar8;
                    pcVar8 = pcVar8 + (ulong)bVar26 * -2 + 1;
                  } while (cVar1 != '\0');
                  DAT_0060e350 = FUN_004058a0(~uVar15 + 2);
                }
                uVar9 = dcgettext(0,"run-level",5);
                __sprintf_chk(DAT_0060e350,1,0xffffffffffffffff,"%s %c",uVar9,
                              (long)iVar3 % 0x100 & 0xff);
                if (DAT_0060e348 == 0) {
                  pcVar8 = (char *)dcgettext(0,"last=",5);
                  lVar14 = -1;
                  do {
                    if (lVar14 == 0) break;
                    lVar14 = lVar14 + -1;
                    cVar1 = *pcVar8;
                    pcVar8 = pcVar8 + (ulong)bVar26 * -2 + 1;
                  } while (cVar1 != '\0');
                  DAT_0060e348 = FUN_004058a0(-lVar14);
                }
                uVar19 = 0x53;
                if ((char)lVar5 != 'N') {
                  uVar19 = (uint)lVar5 & 0xff;
                }
                uVar9 = dcgettext(0,"last=",5);
                __sprintf_chk(DAT_0060e348,1,0xffffffffffffffff,&DAT_00409f48,uVar9,uVar19);
                FUN_00402380(*(undefined4 *)(psVar23 + 0xaa));
                lVar5 = DAT_0060e350;
              }
              pcStack_90 = "";
              pcStack_98 = "";
              pcStack_a0 = (char *)0x402c18;
              FUN_004020d0(0xffffffff,"",0x20,0xffffffff,lVar5);
              sVar18 = *psVar23;
            }
            else {
              FUN_004023e0(psVar23,lVar22);
              sVar18 = *psVar23;
            }
          }
LAB_00402a50:
          if (sVar18 == 2) {
            lVar22 = (long)*(int *)(psVar23 + 0xaa);
          }
          lVar17 = lVar17 + -1;
          psVar23 = psVar23 + 0xc0;
        } while (lVar17 != -1);
      }
    }
    else {
      lVar17 = local_58 + -1;
      lVar22 = 0;
      if (local_58 != 0) {
        pcVar8 = "";
        do {
          pcVar10 = pcVar8;
          if ((*(char *)(psVar23 + 0x16) != '\0') && (*psVar23 == 7)) {
            lVar22 = lVar22 + 1;
            pvVar6 = (void *)FUN_00406a10(psVar23);
            pcVar10 = " ";
            __printf_chk(1,&DAT_00409ef4,pcVar8,pvVar6);
            free(pvVar6);
          }
          lVar17 = lVar17 + -1;
          psVar23 = psVar23 + 0xc0;
          pcVar8 = pcVar10;
        } while (lVar17 != -1);
      }
      uVar9 = dcgettext(0,"\n# users=%lu\n",5);
      __printf_chk(1,uVar9,lVar22);
    }
LAB_00402ad2:
    free(local_50);
    return;
  }
  pcStack_90 = (char *)FUN_00405160(0,3,param_1);
  piVar11 = __errno_location();
  iVar3 = 1;
  error(1,*piVar11,"%s",pcStack_90);
  uVar9 = DAT_0060e408;
  if (iVar3 != 0) {
    uVar7 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(stderr,1,uVar7,uVar9);
    goto LAB_004030bf;
  }
  uVar7 = dcgettext(0,"Usage: %s [OPTION]... [ FILE | ARG1 ARG2 ]\n",5);
  __printf_chk(1,uVar7,uVar9);
  pFVar2 = stdout;
  pcVar8 = (char *)dcgettext(0,"Print information about users who are currently logged in.\n",5);
  fputs_unlocked(pcVar8,pFVar2);
  pFVar2 = stdout;
  pcVar8 = (char *)dcgettext(0,
                             "\n  -a, --all         same as -b -d --login -p -r -t -T -u\n  -b, --boot        time of last system boot\n  -d, --dead        print dead processes\n  -H, --heading     print line of column headings\n"
                             ,5);
  fputs_unlocked(pcVar8,pFVar2);
  pFVar2 = stdout;
  pcVar8 = (char *)dcgettext(0,"  -l, --login       print system login processes\n",5);
  fputs_unlocked(pcVar8,pFVar2);
  pFVar2 = stdout;
  pcVar8 = (char *)dcgettext(0,
                             "      --lookup      attempt to canonicalize hostnames via DNS\n  -m                only hostname and user associated with stdin\n  -p, --process     print active processes spawned by init\n"
                             ,5);
  fputs_unlocked(pcVar8,pFVar2);
  pFVar2 = stdout;
  pcVar8 = (char *)dcgettext(0,
                             "  -q, --count       all login names and number of users logged on\n  -r, --runlevel    print current runlevel\n  -s, --short       print only name, line, and time (default)\n  -t, --time        print last system clock change\n"
                             ,5);
  fputs_unlocked(pcVar8,pFVar2);
  pFVar2 = stdout;
  pcVar8 = (char *)dcgettext(0,
                             "  -T, -w, --mesg    add user\'s message status as +, - or ?\n  -u, --users       list users logged in\n      --message     same as -T\n      --writable    same as -T\n"
                             ,5);
  fputs_unlocked(pcVar8,pFVar2);
  pFVar2 = stdout;
  pcVar8 = (char *)dcgettext(0,"      --help     display this help and exit\n",5);
  fputs_unlocked(pcVar8,pFVar2);
  pFVar2 = stdout;
  pcVar8 = (char *)dcgettext(0,"      --version  output version information and exit\n",5);
  fputs_unlocked(pcVar8,pFVar2);
  uVar9 = dcgettext(0,
                    "\nIf FILE is not specified, use %s.  %s as FILE is common.\nIf ARG1 ARG2 given, -m presumed: \'am i\' or \'mom likes\' are usual.\n"
                    ,5);
  __printf_chk(1,uVar9,"/var/run/utmp","/var/log/wtmp");
  pbStack_100 = &DAT_00409fa2;
  pcStack_f8 = "test invocation";
  apbStack_f0[0] = (byte *)0x40a01c;
  apbStack_f0[1] = (byte *)0x409fb4;
  apbStack_f0[2] = (byte *)0x409fca;
  apbStack_f0[3] = (byte *)0x409fd4;
  apbStack_f0[4] = (byte *)0x409fe3;
  pcStack_c8 = "sha2 utilities";
  pcStack_c0 = "sha384sum";
  pcStack_b8 = "sha2 utilities";
  pcStack_b0 = "sha512sum";
  pcStack_a8 = "sha2 utilities";
  pcStack_a0 = (char *)0x0;
  pcStack_98 = (char *)0x0;
  ppbVar12 = &pbStack_100;
  do {
    ppbVar13 = ppbVar12;
    ppbVar12 = ppbVar13 + 2;
    pbVar20 = *ppbVar12;
    bVar24 = false;
    bVar25 = pbVar20 == (byte *)0x0;
    if (bVar25) break;
    lVar17 = 4;
    pbVar21 = &DAT_00409f82;
    do {
      if (lVar17 == 0) break;
      lVar17 = lVar17 + -1;
      bVar24 = *pbVar21 < *pbVar20;
      bVar25 = *pbVar21 == *pbVar20;
      pbVar21 = pbVar21 + (ulong)bVar26 * -2 + 1;
      pbVar20 = pbVar20 + (ulong)bVar26 * -2 + 1;
    } while (bVar25);
  } while ((!bVar24 && !bVar25) != bVar24);
  pbVar20 = ppbVar13[3];
  if (pbVar20 == (byte *)0x0) {
    uVar9 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar9,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar8 = setlocale(5,(char *)0x0);
    if ((pcVar8 != (char *)0x0) && (iVar4 = strncmp(pcVar8,"en_",3), iVar4 != 0)) {
      pbVar20 = &DAT_00409f82;
      goto LAB_00403423;
    }
    pbVar20 = &DAT_00409f82;
    uVar9 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    pcVar8 = " invocation";
    __printf_chk(1,uVar9,"https://www.gnu.org/software/coreutils/",&DAT_00409f82);
  }
  else {
    uVar9 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar9,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar8 = setlocale(5,(char *)0x0);
    if ((pcVar8 != (char *)0x0) && (iVar4 = strncmp(pcVar8,"en_",3), iVar4 != 0)) {
LAB_00403423:
      uVar9 = dcgettext(0,"Report %s translation bugs to <https://translationproject.org/team/>\n",5
                       );
      __printf_chk(1,uVar9,&DAT_00409f82);
    }
    pcVar8 = " invocation";
    uVar9 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    __printf_chk(1,uVar9,"https://www.gnu.org/software/coreutils/",&DAT_00409f82);
    if (pbVar20 != &DAT_00409f82) {
      pcVar8 = "";
    }
  }
  uVar9 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(1,uVar9,pbVar20,pcVar8);
LAB_004030bf:
                    /* WARNING: Subroutine does not return */
  exit(iVar3);
}


void FUN_00403080(int param_1)

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
  
  uVar5 = DAT_0060e408;
  bVar13 = 0;
  if (param_1 != 0) {
    uVar3 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(stderr,1,uVar3,uVar5);
    goto LAB_004030bf;
  }
  uVar3 = dcgettext(0,"Usage: %s [OPTION]... [ FILE | ARG1 ARG2 ]\n",5);
  __printf_chk(1,uVar3,uVar5);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"Print information about users who are currently logged in.\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\n  -a, --all         same as -b -d --login -p -r -t -T -u\n  -b, --boot        time of last system boot\n  -d, --dead        print dead processes\n  -H, --heading     print line of column headings\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"  -l, --login       print system login processes\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --lookup      attempt to canonicalize hostnames via DNS\n  -m                only hostname and user associated with stdin\n  -p, --process     print active processes spawned by init\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -q, --count       all login names and number of users logged on\n  -r, --runlevel    print current runlevel\n  -s, --short       print only name, line, and time (default)\n  -t, --time        print last system clock change\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -T, -w, --mesg    add user\'s message status as +, - or ?\n  -u, --users       list users logged in\n      --message     same as -T\n      --writable    same as -T\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"      --help     display this help and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"      --version  output version information and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  uVar5 = dcgettext(0,
                    "\nIf FILE is not specified, use %s.  %s as FILE is common.\nIf ARG1 ARG2 given, -m presumed: \'am i\' or \'mom likes\' are usual.\n"
                    ,5);
  __printf_chk(1,uVar5,"/var/run/utmp","/var/log/wtmp");
  local_88 = &DAT_00409fa2;
  local_80 = "test invocation";
  local_78[0] = (byte *)0x40a01c;
  local_78[1] = (byte *)0x409fb4;
  local_78[2] = (byte *)0x409fca;
  local_78[3] = (byte *)0x409fd4;
  local_78[4] = (byte *)0x409fe3;
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
    pbVar10 = &DAT_00409f82;
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
        pbVar9 = &DAT_00409f82;
        goto LAB_00403423;
      }
    }
    pbVar9 = &DAT_00409f82;
    uVar5 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    pcVar4 = " invocation";
    __printf_chk(1,uVar5,"https://www.gnu.org/software/coreutils/",&DAT_00409f82);
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
      iVar2 = strncmp(pcVar4,"en_",3);
      if (iVar2 != 0) {
LAB_00403423:
        uVar5 = dcgettext(0,"Report %s translation bugs to <https://translationproject.org/team/>\n"
                          ,5);
        __printf_chk(1,uVar5,&DAT_00409f82);
      }
    }
    pcVar4 = " invocation";
    uVar5 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    __printf_chk(1,uVar5,"https://www.gnu.org/software/coreutils/",&DAT_00409f82);
    if (pbVar9 != &DAT_00409f82) {
      pcVar4 = "";
    }
  }
  uVar5 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(1,uVar5,pbVar9,pcVar4);
LAB_004030bf:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_00403450(char *param_1,int *param_2)

{
  addrinfo *__ai;
  int iVar1;
  char *pcVar2;
  addrinfo *local_20;
  
  _DAT_0060e3c0 = 2;
  local_20 = (addrinfo *)0x0;
  iVar1 = getaddrinfo(param_1,(char *)0x0,(addrinfo *)&DAT_0060e3c0,&local_20);
  __ai = local_20;
  if (iVar1 == 0) {
    pcVar2 = local_20->ai_canonname;
    if (local_20->ai_canonname == (char *)0x0) {
      pcVar2 = param_1;
    }
    pcVar2 = strdup(pcVar2);
    if ((pcVar2 == (char *)0x0) && (param_2 != (int *)0x0)) {
      *param_2 = -10;
    }
    freeaddrinfo(__ai);
  }
  else {
    pcVar2 = (char *)0x0;
    if (param_2 != (int *)0x0) {
      *param_2 = iVar1;
      return (char *)0x0;
    }
  }
  return pcVar2;
}


void FUN_004034e0(undefined8 param_1)

{
  FUN_00403450(param_1,&DAT_0060e3f0);
  return;
}


void FUN_004034f0(void)

{
  gai_strerror(DAT_0060e3f0);
  return;
}


void FUN_00403500(undefined8 param_1)

{
  DAT_0060e400 = param_1;
  return;
}


void FUN_00403510(undefined param_1)

{
  DAT_0060e3f8 = param_1;
  return;
}


void FUN_00403520(void)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  iVar1 = FUN_00406c80(stdout);
  if (iVar1 != 0) {
    piVar2 = __errno_location();
    if ((DAT_0060e3f8 == '\0') || (*piVar2 != 0x20)) {
      uVar3 = dcgettext(0,"write error",5);
      if (DAT_0060e400 == 0) {
        error(0,*piVar2,"%s",uVar3);
      }
      else {
        uVar4 = FUN_00405130();
        error(0,*piVar2,"%s: %s",uVar4,uVar3);
      }
      goto LAB_0040359e;
    }
  }
  iVar1 = FUN_00406c80(stderr);
  if (iVar1 == 0) {
    return;
  }
LAB_0040359e:
                    /* WARNING: Subroutine does not return */
  _exit(DAT_0060e288);
}


bool FUN_004035c0(int param_1)

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
    pbVar5 = &DAT_0040a9b8;
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


char * FUN_00403620(ulong param_1,long param_2)

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


void FUN_004036c0(byte *param_1)

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
        pbVar6 = &DAT_0040aa00;
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
  DAT_0060e408 = param_1;
  program_invocation_name = param_1;
  return;
}


char * FUN_00403760(char *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  byte *pbVar3;
  
  pcVar2 = (char *)dcgettext(0,param_1,5);
  if (param_1 == pcVar2) {
    pbVar3 = (byte *)FUN_00406ce0();
    if ((*pbVar3 & 0xdf) == 0x55) {
      if (((((pbVar3[1] & 0xdf) != 0x54) || ((pbVar3[2] & 0xdf) != 0x46)) || (pbVar3[3] != 0x2d)) ||
         ((pbVar3[4] != 0x38 || (pbVar3[5] != 0)))) {
LAB_00403838:
        pcVar2 = "\"";
        if (param_2 != 9) {
          pcVar2 = "\'";
        }
        return pcVar2;
      }
      cVar1 = *pcVar2;
      pcVar2 = &DAT_0040aa11;
      if (cVar1 != '`') {
        pcVar2 = &DAT_0040aa06;
      }
    }
    else {
      if (((((*pbVar3 & 0xdf) != 0x47) || ((pbVar3[1] & 0xdf) != 0x42)) || (pbVar3[2] != 0x31)) ||
         (((pbVar3[3] != 0x38 || (pbVar3[4] != 0x30)) ||
          ((pbVar3[5] != 0x33 || ((pbVar3[6] != 0x30 || (pbVar3[7] != 0)))))))) goto LAB_00403838;
      cVar1 = *pcVar2;
      pcVar2 = &DAT_0040aa0d;
      if (cVar1 != '`') {
        pcVar2 = &DAT_0040aa0a;
      }
    }
  }
  return pcVar2;
}


ulong FUN_00403860(undefined *param_1,ulong param_2,char *param_3,ulong param_4,int param_5,
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
LAB_004044b1:
    if (param_2 != 0) {
      bVar3 = false;
      local_5b = false;
      bVar2 = true;
      local_70 = 0;
      goto LAB_004040e6;
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
      goto LAB_004044b1;
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
      param_8 = (char *)FUN_00403760(&DAT_0040aa15,param_5);
      param_9 = (char *)FUN_00403760(&DAT_0040bbf7);
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
LAB_004038f8:
  uVar22 = 0;
  bVar5 = local_5b;
LAB_00403908:
  bVar23 = param_4 != uVar22;
  if (param_4 == 0xffffffffffffffff) {
    bVar23 = param_3[uVar22] != '\0';
  }
  bVar26 = bVar6;
  if (!bVar23) goto LAB_00404088;
  bVar20 = (bool)(param_5 != 2 & bVar6);
  __s1 = (byte *)(param_3 + uVar22);
  uVar16 = uVar15;
  bVar4 = bVar3;
  if (bVar20) {
    if (local_a0 == 0) {
LAB_00404000:
      uVar19 = (ulong)*__s1;
      switch(uVar19) {
      case 0:
        goto switchD_00404012_caseD_0;
      default:
        bVar20 = false;
        goto switchD_00403e7e_caseD_1;
      case 7:
        bVar17 = 0x61;
        goto LAB_00403d15;
      case 8:
        bVar17 = 0x62;
        break;
      case 9:
switchD_00404012_caseD_9:
        bVar17 = 0x74;
        break;
      case 10:
switchD_00404012_caseD_a:
        bVar17 = 0x6e;
        break;
      case 0xb:
switchD_00404012_caseD_b:
        bVar17 = 0x76;
        goto LAB_00403d15;
      case 0xc:
switchD_00404012_caseD_c:
        bVar17 = 0x66;
LAB_00403d15:
        if (local_5c) {
          bVar25 = false;
          goto LAB_00403c68;
        }
LAB_00403d20:
        bVar23 = false;
        goto LAB_00403adb;
      case 0xd:
        bVar20 = false;
switchD_004039f8_caseD_d:
        bVar25 = param_5 == 2;
        uVar19 = 0xd;
        bVar13 = 0x72;
        goto LAB_00403c30;
      case 0x20:
        bVar25 = false;
LAB_0040405a:
        uVar19 = 0x20;
        goto LAB_00404022;
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
switchD_004039f8_caseD_21:
        bVar25 = false;
        goto LAB_00403c3b;
      case 0x23:
      case 0x7e:
        bVar26 = false;
LAB_0040403a:
        if (uVar22 == 0) {
          bVar25 = false;
          bVar23 = bVar20;
          bVar20 = bVar26;
          goto LAB_00403a48;
        }
        bVar23 = false;
        goto LAB_00403a5f;
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
LAB_00404022:
        bVar24 = false;
        bVar23 = bVar20;
        bVar20 = bVar25;
        goto LAB_00403a61;
      case 0x27:
        bVar20 = false;
        goto switchD_00403e7e_caseD_27;
      case 0x3f:
        bVar20 = false;
        goto switchD_00403e7e_caseD_3f;
      case 0x5c:
        bVar20 = false;
        goto switchD_004039f8_caseD_5c;
      case 0x7b:
      case 0x7d:
        bVar20 = false;
        goto switchD_00403e7e_caseD_7b;
      }
      bVar25 = false;
      bVar23 = false;
      goto joined_r0x00403c57;
    }
    if ((param_4 == 0xffffffffffffffff) && (1 < local_a0)) {
      param_4 = strlen(param_3);
    }
    if ((param_4 < uVar22 + local_a0) || (iVar7 = memcmp(__s1,local_78,local_a0), iVar7 != 0))
    goto LAB_00404000;
    if (!local_5c) {
      uVar19 = (ulong)*__s1;
      bVar25 = bVar20;
      switch(uVar19) {
      case 0:
        goto switchD_004039f8_caseD_0;
      default:
        goto switchD_00403e7e_caseD_1;
      case 7:
        bVar17 = 0x61;
        goto LAB_00403d20;
      case 8:
        bVar25 = false;
        bVar23 = false;
        bVar17 = 0x62;
        break;
      case 9:
        goto switchD_00404012_caseD_9;
      case 10:
        goto switchD_00404012_caseD_a;
      case 0xb:
        goto switchD_00404012_caseD_b;
      case 0xc:
        goto switchD_00404012_caseD_c;
      case 0xd:
        goto switchD_004039f8_caseD_d;
      case 0x20:
        goto LAB_0040405a;
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
        goto switchD_004039f8_caseD_21;
      case 0x23:
      case 0x7e:
        bVar26 = bVar20;
        goto LAB_0040403a;
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
        goto LAB_00404022;
      case 0x27:
        goto switchD_00403e7e_caseD_27;
      case 0x3f:
        goto switchD_00403e7e_caseD_3f;
      case 0x5c:
        goto switchD_004039f8_caseD_5c;
      case 0x7b:
      case 0x7d:
        goto switchD_00403e7e_caseD_7b;
      }
      goto LAB_00403aa2;
    }
    goto LAB_00403c7a;
  }
  uVar19 = (ulong)*__s1;
  switch(uVar19) {
  case 0:
    if (bVar6) {
switchD_00404012_caseD_0:
      if (!local_5c) {
        bVar20 = false;
switchD_004039f8_caseD_0:
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
            goto LAB_00403b58;
          }
LAB_00403d9a:
          param_1[uVar16] = 0x5c;
          uVar15 = uVar16;
        }
        else if (uVar15 < uVar9) goto LAB_00403d9a;
        uVar16 = uVar15 + 1;
        bVar24 = bVar23;
        if (param_5 == 2) {
          bVar17 = 0x30;
          bVar23 = false;
          bVar4 = bVar3;
          goto LAB_00403b58;
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
LAB_00403dd9:
        bVar17 = (byte)uVar19;
        bVar23 = false;
        uVar15 = uVar16;
        bVar4 = bVar3;
        if ((bool)(bVar6 ^ 1U | bVar26)) goto LAB_00403b58;
        goto LAB_00403a61;
      }
      bVar26 = param_5 == 2;
      goto LAB_00403c6c;
    }
    if ((param_6 & 1) == 0) {
      bVar25 = param_5 == 2;
      uVar19 = 0;
      bVar23 = false;
      bVar20 = false;
      goto LAB_00403a48;
    }
    uVar22 = uVar22 + 1;
    goto LAB_00403908;
  default:
switchD_00403e7e_caseD_1:
    bVar25 = bVar6;
    if (sVar8 != 1) {
      local_40[0] = (mbstate_t)0x0;
      if (param_4 == 0xffffffffffffffff) {
        param_4 = strlen(param_3);
      }
      uVar21 = 0;
      do {
        uVar1 = uVar22 + uVar21;
        lVar11 = FUN_00406990(&local_44,param_3 + uVar1,param_4 - uVar1,local_40);
        if (lVar11 == 0) break;
        if (lVar11 == -1) {
          bVar23 = false;
          goto LAB_0040478a;
        }
        if (lVar11 == -2) {
          if ((param_4 <= uVar1) || (param_3[uVar1] == '\0')) goto LAB_004048c7;
          goto LAB_004048b7;
        }
        if (((param_5 == 2) && (local_5c)) && (lVar11 != 1)) {
          pcVar12 = param_3 + uVar1 + 1;
          do {
            if (((byte)(*pcVar12 + 0xa5U) < 0x22) &&
               ((1L << (*pcVar12 + 0xa5U & 0x3f) & 0x20000002bU) != 0)) {
              param_5 = 2;
              goto LAB_00403c6c;
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
      goto LAB_0040478a;
    }
    ppuVar10 = __ctype_b_loc();
    uVar21 = 1;
    bVar25 = ((*ppuVar10)[uVar19] & 0x4000) == 0;
    bVar23 = !bVar25;
    bVar25 = (bool)(bVar25 & bVar6);
    goto LAB_00403e54;
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
    goto LAB_00403e92;
  case 10:
    uVar19 = 10;
    bVar13 = 0x6e;
    goto LAB_00403e92;
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
LAB_00403e92:
    bVar25 = param_5 == 2;
    bVar20 = (bool)(local_5c & bVar25);
    if (bVar20) {
LAB_00403eaa:
      param_5 = 2;
      goto LAB_00403c6c;
    }
    break;
  case 0x20:
    uVar19 = 0x20;
    goto LAB_00403a36;
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
LAB_00403a36:
    bVar25 = param_5 == 2;
    if ((local_5c) && (bVar25)) goto LAB_00403eaa;
    goto LAB_00403a48;
  case 0x23:
  case 0x7e:
LAB_00403a2d:
    bVar25 = param_5 == 2;
    if (uVar22 == 0) goto LAB_00403a36;
    goto LAB_00403c3b;
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
    goto switchD_00403e7e_caseD_25;
  case 0x27:
switchD_00403e7e_caseD_27:
    bVar5 = bVar23;
    if (param_5 != 2) {
      bVar25 = false;
      uVar19 = 0x27;
      goto LAB_00403a48;
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
      goto LAB_00403b58;
    }
    goto LAB_00403c6c;
  case 0x3f:
switchD_00403e7e_caseD_3f:
    if (param_5 == 2) {
      if (!local_5c) {
        bVar17 = 0x3f;
        bVar24 = false;
        bVar23 = false;
        goto LAB_00403b58;
      }
      goto LAB_00403c6c;
    }
    if (param_5 != 5) {
      bVar25 = param_5 == 2;
      uVar19 = 0x3f;
      bVar23 = false;
      goto LAB_00403a48;
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
        goto LAB_00403dd9;
      }
      goto LAB_00403c7a;
    }
    bVar25 = false;
    uVar19 = 0x3f;
    bVar23 = false;
    goto LAB_00403a48;
  case 0x5c:
    if (param_5 != 2) {
switchD_004039f8_caseD_5c:
      uVar19 = 0x5c;
      bVar17 = 0x5c;
      bVar13 = 0x5c;
      bVar25 = (bool)(bVar6 & local_5c & local_a0 != 0);
      if (!bVar25) break;
      uVar22 = uVar22 + 1;
      bVar23 = false;
      goto LAB_00403b74;
    }
    if (local_5c) goto LAB_00403c6c;
    uVar22 = uVar22 + 1;
    bVar23 = false;
    bVar17 = 0x5c;
    goto LAB_00403b74;
  case 0x7b:
  case 0x7d:
switchD_00403e7e_caseD_7b:
    bVar24 = param_4 != 1;
    if (param_4 == 0xffffffffffffffff) {
      bVar24 = param_3[1] != '\0';
    }
    bVar25 = param_5 == 2;
    if (!bVar24) goto LAB_00403a2d;
    goto LAB_00403c3b;
  }
LAB_00403c30:
  if (!bVar6) {
LAB_00403c3b:
    bVar23 = false;
    goto LAB_00403a48;
  }
  bVar23 = false;
  bVar17 = bVar13;
  goto joined_r0x00403c57;
LAB_00404088:
  if ((uVar15 == 0) && ((bool)(local_5c & param_5 == 2))) {
    param_5 = 2;
LAB_00403c6c:
    if (bVar26) {
      param_5 = 4;
    }
LAB_00403c7a:
    uVar9 = FUN_00403860(param_1,uVar9,param_3,param_4,param_5,param_6 & 0xfffffffd,0,param_8,
                         param_9);
    return uVar9;
  }
  bVar26 = (bool)(param_5 == 2 & (local_5c ^ 1U));
  bVar23 = (bool)(local_5c ^ 1U);
  if ((!bVar26) || (bVar23 = bVar26, !bVar5)) {
LAB_0040495d:
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
    uVar9 = FUN_00403860(param_1,local_70,param_3,param_4,5,param_6,param_7,param_8,param_9);
    return uVar9;
  }
  local_5b = uVar9 == 0 && local_70 != 0;
  param_2 = local_70;
  bVar23 = bVar5;
  if (uVar9 != 0 || local_70 == 0) goto LAB_0040495d;
LAB_004040e6:
  *param_1 = 0x27;
  param_5 = 2;
  uVar15 = 1;
  local_78 = "\'";
  local_a0 = 1;
  local_5c = false;
  uVar9 = param_2;
  goto LAB_004038f8;
  while (__s1[uVar21] != 0) {
LAB_004048b7:
    uVar21 = uVar21 + 1;
    if (param_4 <= uVar22 + uVar21) break;
  }
LAB_004048c7:
  bVar23 = false;
LAB_0040478a:
  if (1 < uVar21) {
LAB_0040434e:
    bVar26 = false;
    uVar21 = uVar21 + uVar22;
    uVar16 = uVar22;
    do {
      bVar17 = (byte)uVar19;
      if (bVar25) {
        bVar26 = param_5 == 2;
        if (local_5c) goto LAB_00403c6c;
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
        if (uVar21 <= uVar22) goto LAB_00403aed;
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
        if (uVar21 <= uVar22) goto LAB_00403b74;
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
LAB_00403e54:
  if (bVar25) {
    bVar23 = false;
    bVar25 = bVar6;
    goto LAB_0040434e;
  }
switchD_00403e7e_caseD_25:
  bVar25 = param_5 == 2;
LAB_00403a48:
  bVar17 = (byte)uVar19;
  bVar24 = (bool)((bVar6 ^ 1U | bVar25) ^ 1 | local_5c);
  bVar26 = bVar20;
  if (bVar24) {
LAB_00403a5f:
    bVar24 = false;
    bVar20 = bVar26;
LAB_00403a61:
    bVar17 = (byte)uVar19;
    uVar16 = uVar15;
    bVar4 = bVar3;
    if ((param_7 == 0) || ((*(uint *)(param_7 + (uVar19 >> 5) * 4) >> (bVar17 & 0x1f) & 1) == 0))
    goto LAB_00403b58;
    bVar25 = param_5 == 2;
  }
  else {
LAB_00403b58:
    bVar25 = param_5 == 2;
    uVar15 = uVar16;
    bVar3 = bVar4;
    if (!bVar20) {
      uVar22 = uVar22 + 1;
      bVar3 = (bool)((bVar24 ^ 1U) & bVar4);
LAB_00403b74:
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
      goto LAB_00403aed;
    }
  }
joined_r0x00403c57:
  if (local_5c) {
LAB_00403c68:
    bVar26 = (bool)(bVar6 & bVar25);
    goto LAB_00403c6c;
  }
LAB_00403aa2:
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
LAB_00403adb:
  if (uVar15 < uVar9) {
    param_1[uVar15] = 0x5c;
  }
  uVar15 = uVar15 + 1;
  uVar22 = uVar22 + 1;
  bVar4 = bVar3;
LAB_00403aed:
  bVar3 = bVar4;
  if (uVar15 < uVar9) {
    param_1[uVar15] = bVar17;
  }
  uVar15 = uVar15 + 1;
  if (!bVar23) {
    bVar2 = false;
  }
  goto LAB_00403908;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00404a90(int param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

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
  puVar8 = (undefined4 *)PTR_DAT_0060e2d8;
  if (DAT_0060e2f0 <= param_1) {
    if (param_1 == 0x7fffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_00405af0();
    }
    if (PTR_DAT_0060e2d8 == &DAT_0060e2e0) {
      puVar8 = (undefined4 *)FUN_00405900(0);
      uVar6 = PTR_DAT_0060e2e8._4_4_;
      uVar5 = PTR_DAT_0060e2e8._0_4_;
      uVar3 = _UNK_0060e2e4;
      PTR_DAT_0060e2d8 = (undefined *)puVar8;
      *puVar8 = _DAT_0060e2e0;
      puVar8[1] = uVar3;
      puVar8[2] = uVar5;
      puVar8[3] = uVar6;
    }
    else {
      puVar8 = (undefined4 *)FUN_00405900(PTR_DAT_0060e2d8);
      PTR_DAT_0060e2d8 = (undefined *)puVar8;
    }
    memset(puVar8 + (long)DAT_0060e2f0 * 4,0,(long)((param_1 + 1) - DAT_0060e2f0) << 4);
    DAT_0060e2f0 = param_1 + 1;
  }
  uVar2 = param_4[1];
  puVar10 = (ulong *)(puVar8 + (long)param_1 * 4);
  uVar4 = *puVar10;
  __ptr = (undefined *)puVar10[1];
  uVar9 = FUN_00403860(__ptr,uVar4,param_2,param_3,*param_4,uVar2 | 1,param_4 + 2,
                       *(undefined8 *)(param_4 + 10),*(undefined8 *)(param_4 + 0xc));
  if (uVar4 <= uVar9) {
    uVar9 = uVar9 + 1;
    *puVar10 = uVar9;
    if (__ptr != &DAT_0060e420) {
      free(__ptr);
    }
    __ptr = (undefined *)FUN_004058a0(uVar9);
    uVar3 = *param_4;
    puVar10[1] = (ulong)__ptr;
    FUN_00403860(__ptr,uVar9,param_2,param_3,uVar3,uVar2 | 1,param_4 + 2,
                 *(undefined8 *)(param_4 + 10),*(undefined8 *)(param_4 + 0xc));
  }
  *piVar7 = iVar1;
  return __ptr;
}


void FUN_00404c30(undefined *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_0060e520;
  }
  FUN_00405aa0(param_1,0x38);
  *piVar2 = iVar1;
  return;
}


undefined4 FUN_00404c70(undefined4 *param_1)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)&DAT_0060e520;
  }
  return *param_1;
}


void FUN_00404c80(undefined4 *param_1,undefined4 param_2)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)&DAT_0060e520;
  }
  *param_1 = param_2;
  return;
}


uint FUN_00404c90(undefined *param_1,byte param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_0060e520;
  }
  uVar1 = *(uint *)(param_1 + (ulong)(param_2 >> 5) * 4 + 8);
  uVar2 = uVar1 >> (param_2 & 0x1f);
  *(uint *)(param_1 + (ulong)(param_2 >> 5) * 4 + 8) =
       ((param_3 ^ uVar2) & 1) << (param_2 & 0x1f) ^ uVar1;
  return uVar2 & 1;
}


undefined4 FUN_00404cd0(undefined *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_0060e520;
  }
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_1 + 4) = param_2;
  return uVar1;
}


void FUN_00404cf0(undefined4 *param_1,long param_2,long param_3)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)&DAT_0060e520;
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


void FUN_00404d20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 *param_5)

{
  int iVar1;
  int *piVar2;
  
  if (param_5 == (undefined4 *)0x0) {
    param_5 = (undefined4 *)&DAT_0060e520;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  FUN_00403860(param_1,param_2,param_3,param_4,*param_5,param_5[1],param_5 + 2,
               *(undefined8 *)(param_5 + 10),*(undefined8 *)(param_5 + 0xc));
  *piVar2 = iVar1;
  return;
}


undefined8 FUN_00404da0(undefined8 param_1,undefined8 param_2,long *param_3,undefined4 *param_4)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  
  if (param_4 == (undefined4 *)0x0) {
    param_4 = (undefined4 *)&DAT_0060e520;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  uVar5 = (uint)(param_3 == (long *)0x0) | param_4[1];
  lVar3 = FUN_00403860(0,0,param_1,param_2,*param_4,uVar5,param_4 + 2,*(undefined8 *)(param_4 + 10),
                       *(undefined8 *)(param_4 + 0xc));
  uVar4 = FUN_004058a0(lVar3 + 1);
  FUN_00403860(uVar4,lVar3 + 1,param_1,param_2,*param_4,uVar5,param_4 + 2,
               *(undefined8 *)(param_4 + 10),*(undefined8 *)(param_4 + 0xc));
  *piVar2 = iVar1;
  if (param_3 != (long *)0x0) {
    *param_3 = lVar3;
  }
  return uVar4;
}


void FUN_00404e90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00404da0(param_1,param_2,0,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404ea0(void)

{
  void **ppvVar1;
  void *__ptr;
  undefined *__ptr_00;
  void **ppvVar2;
  
  __ptr_00 = PTR_DAT_0060e2d8;
  if (1 < DAT_0060e2f0) {
    ppvVar2 = (void **)(PTR_DAT_0060e2d8 + 0x18);
    ppvVar1 = (void **)(PTR_DAT_0060e2d8 + (ulong)(DAT_0060e2f0 - 2) * 0x10 + 0x28);
    do {
      __ptr = *ppvVar2;
      ppvVar2 = ppvVar2 + 2;
      free(__ptr);
    } while (ppvVar2 != ppvVar1);
  }
  if (*(undefined **)(__ptr_00 + 8) != &DAT_0060e420) {
    free(*(undefined **)(__ptr_00 + 8));
    _DAT_0060e2e0 = 0x100;
    PTR_DAT_0060e2e8 = &DAT_0060e420;
  }
  if (__ptr_00 != &DAT_0060e2e0) {
    free(__ptr_00);
    PTR_DAT_0060e2d8 = &DAT_0060e2e0;
  }
  DAT_0060e2f0 = 1;
  return;
}


void FUN_00404f40(undefined8 param_1,undefined8 param_2)

{
  FUN_00404a90(param_1,param_2,0xffffffffffffffff,&DAT_0060e520);
  return;
}


void FUN_00404f60(void)

{
  FUN_00404a90();
  return;
}


void FUN_00404f70(undefined8 param_1)

{
  FUN_00404a90(0,param_1,0xffffffffffffffff,&DAT_0060e520);
  return;
}


void FUN_00404f90(undefined8 param_1,undefined8 param_2)

{
  FUN_00404a90(0,param_1,param_2,&DAT_0060e520);
  return;
}


void FUN_00404fb0(undefined8 param_1,int param_2,undefined8 param_3)

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
    FUN_00404a90(param_1,param_3,0xffffffffffffffff,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00405020(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

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
    FUN_00404a90(param_1,param_3,param_4,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00405090(undefined4 param_1,undefined8 param_2)

{
  FUN_00404fb0(0,param_1,param_2);
  return;
}


void FUN_004050a0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00405020(0,param_1,param_2,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004050b0(undefined8 param_1,undefined8 param_2,byte param_3)

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
  
  local_18 = DAT_0060e550;
  local_48 = _DAT_0060e520;
  uStack_40 = uRam000000000060e528;
  local_38 = _DAT_0060e530;
  uStack_30 = uRam000000000060e538;
  puVar1 = (uint *)((long)&uStack_40 + (ulong)(param_3 >> 5) * 4);
  local_28 = _DAT_0060e540;
  uStack_20 = uRam000000000060e548;
  uVar2 = *puVar1;
  *puVar1 = (~(uVar2 >> (param_3 & 0x1f)) & 1) << (param_3 & 0x1f) ^ uVar2;
  FUN_00404a90(0,param_1,param_2,&local_48);
  return;
}


void FUN_00405120(undefined8 param_1,char param_2)

{
  FUN_004050b0(param_1,0xffffffffffffffff,(int)param_2);
  return;
}


void FUN_00405130(undefined8 param_1)

{
  FUN_004050b0(param_1,0xffffffffffffffff,0x3a);
  return;
}


void FUN_00405150(undefined8 param_1,undefined8 param_2)

{
  FUN_004050b0(param_1,param_2,0x3a);
  return;
}


void FUN_00405160(undefined8 param_1,int param_2,undefined8 param_3)

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
    FUN_00404a90(param_1,param_3,0xffffffffffffffff,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004051d0(undefined8 param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5
                 )

{
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  long lStack_20;
  long local_18;
  
  uStack_40 = uRam000000000060e528;
  local_38 = _DAT_0060e530;
  uStack_30 = uRam000000000060e538;
  local_28 = _DAT_0060e540;
  lStack_20 = uRam000000000060e548;
  local_18 = DAT_0060e550;
  local_48 = CONCAT44((int)((ulong)_DAT_0060e520 >> 0x20),10);
  if ((param_2 != 0) && (param_3 != 0)) {
    lStack_20 = param_2;
    local_18 = param_3;
    FUN_00404a90(param_1,param_4,param_5,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00405240(void)

{
  FUN_004051d0();
  return;
}


void FUN_00405250(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_004051d0(0,param_1,param_2,param_3,0xffffffffffffffff);
  return;
}


void FUN_00405270(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_004051d0(0,param_1,param_2,param_3,param_4);
  return;
}


void FUN_00405290(void)

{
  FUN_00404a90();
  return;
}


void FUN_004052a0(undefined8 param_1,undefined8 param_2)

{
  FUN_00404a90(0,param_1,param_2,&DAT_0060e2a0);
  return;
}


void FUN_004052c0(undefined8 param_1,undefined8 param_2)

{
  FUN_00404a90(param_1,param_2,0xffffffffffffffff,&DAT_0060e2a0);
  return;
}


void FUN_004052e0(undefined8 param_1)

{
  FUN_00404a90(0,param_1,0xffffffffffffffff,&DAT_0060e2a0);
  return;
}


undefined8
FUN_00405300(FILE *param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5,
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
  uVar1 = dcgettext(0,&DAT_0040b76b,5);
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
    goto LAB_0040557c;
  case 5:
    uVar1 = param_5[3];
    uVar4 = param_5[2];
    uVar5 = param_5[1];
    uVar6 = *param_5;
    uVar7 = dcgettext(0,"Written by %s, %s, %s,\n%s, and %s.\n",5);
LAB_0040557c:
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
    goto LAB_00405619;
  case 7:
    uVar1 = param_5[2];
    uVar4 = param_5[5];
    uVar5 = param_5[4];
    uVar6 = param_5[3];
    local_58 = param_5[1];
    uVar7 = *param_5;
    uVar3 = dcgettext(0,"Written by %s, %s, %s,\n%s, %s, %s, and %s.\n",5);
LAB_00405619:
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
    goto LAB_004053fa;
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
LAB_004053fa:
  uVar1 = __fprintf_chk(param_1,1,uVar3,uVar7,local_50,local_58,uVar6,uVar5,uVar4,uVar1,local_48);
  return uVar1;
}


void FUN_004056e0(void)

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
  FUN_00405300();
  return;
}


void FUN_00405700(void)

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
  FUN_00405300();
  return;
}


void FUN_00405760(void)

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
  FUN_00405300();
  return;
}


void FUN_00405820(void)

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


void FUN_004058a0(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00405af0();
  }
  return;
}


void FUN_004058c0(ulong param_1,ulong param_2)

{
  if ((-1 < SUB168(ZEXT816(param_1) * ZEXT816(param_2),0)) &&
     (SUB168(ZEXT816(param_1) * ZEXT816(param_2) >> 0x40,0) == 0)) {
    FUN_004058a0();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00405af0();
}


void thunk_FUN_004058a0(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00405af0();
  }
  return;
}


void * FUN_00405900(void *param_1,size_t param_2)

{
  void *pvVar1;
  
  if ((param_2 == 0) && (param_1 != (void *)0x0)) {
    free(param_1);
    return (void *)0x0;
  }
  pvVar1 = realloc(param_1,param_2);
  if ((pvVar1 == (void *)0x0) && (param_2 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00405af0();
  }
  return pvVar1;
}


void FUN_00405940(undefined8 param_1,ulong param_2,ulong param_3)

{
  if ((-1 < SUB168(ZEXT816(param_2) * ZEXT816(param_3),0)) &&
     (SUB168(ZEXT816(param_2) * ZEXT816(param_3) >> 0x40,0) == 0)) {
    FUN_00405900();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00405af0();
}


void FUN_00405970(long param_1,ulong *param_2,ulong param_3)

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
    if ((SUB168(ZEXT816(uVar2) * ZEXT816(param_3),0) < 0) || (uVar3 != 0)) goto LAB_004059cb;
  }
  else {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x5555555555555554);
    uVar3 = SUB168(auVar1 % ZEXT816(param_3),0);
    if (SUB168(auVar1 / ZEXT816(param_3),0) <= uVar2) {
LAB_004059cb:
                    /* WARNING: Subroutine does not return */
      FUN_00405af0(param_1,param_2,uVar3);
    }
    uVar2 = (uVar2 >> 1) + 1 + uVar2;
  }
  *param_2 = uVar2;
  FUN_00405900(param_1,uVar2 * param_3);
  return;
}


void FUN_00405a00(long param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (param_1 == 0) {
    if (uVar1 == 0) {
      *param_2 = 0x80;
      FUN_00405900(0,0x80);
      return;
    }
    if ((long)uVar1 < 0) goto LAB_00405a4a;
  }
  else {
    if (0x5555555555555553 < uVar1) {
LAB_00405a4a:
                    /* WARNING: Subroutine does not return */
      FUN_00405af0();
    }
    uVar1 = (uVar1 >> 1) + 1 + uVar1;
  }
  *param_2 = uVar1;
  FUN_00405900(param_1,uVar1);
  return;
}


void FUN_00405a50(size_t param_1)

{
  void *__s;
  
  __s = (void *)FUN_004058a0();
  memset(__s,0,param_1);
  return;
}


void FUN_00405a70(size_t param_1,ulong param_2)

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
  FUN_00405af0();
}


void FUN_00405aa0(void *param_1,size_t param_2)

{
  void *__dest;
  
  __dest = (void *)FUN_004058a0(param_2);
  memcpy(__dest,param_1,param_2);
  return;
}


void FUN_00405ad0(char *param_1)

{
  void *__dest;
  size_t sVar1;
  
  sVar1 = strlen(param_1);
  __dest = (void *)FUN_004058a0(sVar1 + 1);
  memcpy(__dest,param_1,sVar1 + 1);
  return;
}


void FUN_00405af0(void)

{
  undefined8 uVar1;
  
  uVar1 = dcgettext(0,"memory exhausted",5);
  error(DAT_0060e288,0,"%s",uVar1);
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00405b30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 undefined8 param_13,undefined8 param_14)

{
  char in_AL;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined *local_c8;
  undefined *local_c0;
  undefined local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_78;
  undefined4 local_68;
  undefined4 local_58;
  undefined4 local_48;
  undefined4 local_38;
  undefined4 local_28;
  undefined4 local_18;
  
  if (in_AL != '\0') {
    local_88 = param_1;
    local_78 = param_2;
    local_68 = param_3;
    local_58 = param_4;
    local_48 = param_5;
    local_38 = param_6;
    local_28 = param_7;
    local_18 = param_8;
  }
  local_c8 = &stack0x00000008;
  local_d0 = 0x10;
  local_c0 = local_b8;
  local_cc = 0x30;
  local_a8 = param_11;
  local_a0 = param_12;
  local_98 = param_13;
  local_90 = param_14;
  FUN_00406c20(param_9,param_10,&local_d0);
  return;
}


void FUN_00405bc0(long param_1,int *param_2)

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
      if (iVar3 <= iVar8) goto LAB_00405c3c;
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
      if (iVar9 <= iVar3) goto LAB_00405c3c;
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
LAB_00405c3c:
  param_2[0xc] = iVar2;
  param_2[0xb] = iVar1 + (iVar2 - iVar3);
  return;
}


int FUN_00405ca0(int param_1,undefined8 *param_2,char *param_3,char **param_4,undefined4 *param_5,
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
      if ((iVar5 == 0) && (sVar7 = strlen(__s1_00), sVar7 == sVar15)) goto LAB_00405ec0;
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
            if (local_70 == (char *)0x0) goto LAB_00405e00;
          }
          else if (local_70 == (char *)0x0) {
            local_70 = (char *)calloc((long)iVar5,1);
            if (local_70 == (char *)0x0) {
              bVar3 = true;
              goto LAB_00405e00;
            }
            bVar4 = true;
            local_70[(int)local_44] = '\x01';
          }
          local_70[lVar16] = '\x01';
        }
      }
LAB_00405e00:
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
              __fprintf_chk(__stream,1,&DAT_0040bbf1,param_9,*param_4);
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
LAB_00405ec0:
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


uint FUN_004062c0(uint param_1,undefined8 *param_2,char *param_3,long param_4,undefined8 param_5,
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
LAB_0040630a:
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
          goto LAB_0040640d;
        }
        pbVar8 = *(byte **)(param_7 + 8);
      }
      param_7[10] = 0;
    }
LAB_0040640d:
    param_7[6] = 1;
    cVar2 = *param_3;
LAB_00406418:
    if (cVar2 == ':') {
      uVar3 = 0;
    }
    if (pbVar8 == (byte *)0x0) goto LAB_00406388;
LAB_0040642c:
    if (*pbVar8 == 0) goto LAB_00406388;
  }
  else {
    if (param_7[6] == 0) goto LAB_0040630a;
    cVar2 = *param_3;
    pbVar8 = *(byte **)(param_7 + 8);
    if ((cVar2 - 0x2bU & 0xfd) != 0) goto LAB_00406418;
    pcVar4 = param_3 + 1;
    param_3 = param_3 + 1;
    if (*pcVar4 == ':') {
      uVar3 = 0;
    }
    if (pbVar8 != (byte *)0x0) goto LAB_0040642c;
LAB_00406388:
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
        FUN_00405bc0(param_2,param_7);
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
LAB_004064f6:
      if (uVar11 != param_1) {
        *param_7 = uVar11;
      }
      return 0xffffffff;
    }
    lVar6 = 3;
    pbVar8 = (byte *)param_2[(int)uVar11];
    pbVar9 = pbVar8;
    pbVar10 = &DAT_0040bc09;
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
          FUN_00405bc0(param_2,param_7);
          uVar11 = param_7[0xb];
        }
      }
      param_7[0xc] = param_1;
      *param_7 = param_1;
      goto LAB_004064f6;
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
        puVar15 = &DAT_0040bc09;
        goto LAB_00406655;
      }
      if ((int)param_6 != 0) {
        if (pbVar8[2] == 0) {
          pcVar4 = strchr(param_3,(int)(char)bVar14);
          param_6 = param_6 & 0xffffffff;
          if (pcVar4 != (char *)0x0) goto LAB_00406600;
        }
        *(byte **)(param_7 + 8) = pbVar8 + 1;
        uVar11 = FUN_00405ca0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar3,
                              &DAT_0040bc0a);
        if (uVar11 != 0xffffffff) {
          return uVar11;
        }
        pbVar8 = (byte *)param_2[(int)*param_7];
      }
    }
LAB_00406600:
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
  puVar15 = &DAT_0040bc28;
LAB_00406655:
  uVar3 = FUN_00405ca0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar3,puVar15);
  return uVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406890(void)

{
  DAT_0060e560 = DAT_0060e2fc;
  _DAT_0060e564 = DAT_0060e2f8;
  FUN_004062c0();
  DAT_0060e2fc = DAT_0060e560;
  _DAT_0060e5a0 = DAT_0060e570;
  _DAT_0060e2f4 = DAT_0060e568;
  return;
}


void FUN_004068f0(void)

{
  FUN_00406890();
  return;
}


void FUN_00406910(void)

{
  FUN_00406890();
  return;
}


void FUN_00406930(void)

{
  FUN_004062c0();
  return;
}


void FUN_00406950(void)

{
  FUN_00406890();
  return;
}


void FUN_00406970(void)

{
  FUN_004062c0();
  return;
}


size_t FUN_00406990(wchar_t *param_1,byte *param_2,size_t param_3,mbstate_t *param_4)

{
  char cVar1;
  size_t sVar2;
  wchar_t local_1c;
  
  if (param_2 == (byte *)0x0) {
    param_3 = 1;
    param_2 = (byte *)0x40bc27;
  }
  else {
    if (param_3 == 0) {
      return 0xfffffffffffffffe;
    }
    if (param_1 != (wchar_t *)0x0) goto LAB_004069b4;
  }
  param_1 = &local_1c;
LAB_004069b4:
  sVar2 = mbrtowc(param_1,(char *)param_2,param_3,param_4);
  if ((0xfffffffffffffffd < sVar2) && (cVar1 = FUN_004035c0(0), cVar1 == '\0')) {
    sVar2 = 1;
    *param_1 = (uint)*param_2;
  }
  return sVar2;
}


char * FUN_00406a10(long param_1)

{
  char *__dest;
  size_t sVar1;
  char *pcVar2;
  
  __dest = (char *)FUN_004058a0(0x21);
  strncpy(__dest,(char *)(param_1 + 0x2c),0x20);
  __dest[0x20] = '\0';
  sVar1 = strlen(__dest);
  pcVar2 = __dest + sVar1;
  if (__dest < pcVar2) {
    do {
      if (pcVar2[-1] != ' ') {
        return __dest;
      }
      pcVar2 = pcVar2 + -1;
      *pcVar2 = '\0';
    } while (__dest != pcVar2);
  }
  return __dest;
}


undefined8 FUN_00406a70(char *param_1,ulong *param_2,long *param_3,uint param_4)

{
  int iVar1;
  utmpx *puVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  byte bVar11;
  
  bVar11 = 0;
  lVar6 = 0;
  uVar9 = 0;
  uVar7 = 0;
  utmpxname(param_1);
  setutxent();
LAB_00406aa7:
  puVar2 = getutxent();
  do {
    if (puVar2 == (utmpx *)0x0) {
      endutxent();
      *param_2 = uVar7;
      *param_3 = lVar6;
      return 0;
    }
    if ((puVar2->ut_user[0] == '\0') || (puVar2->ut_type != 7)) {
      if ((param_4 & 2) != 0) goto LAB_00406aa7;
LAB_00406acb:
      if (uVar7 != uVar9) goto LAB_00406ad4;
LAB_00406b90:
      if (lVar6 == 0) {
        if (uVar7 == 0) {
          lVar4 = 0x180;
          uVar9 = 1;
          uVar8 = 1;
        }
        else {
          if ((SUB168(ZEXT816(0x180) * ZEXT816(uVar7),0) < 0) ||
             (SUB168(ZEXT816(0x180) * ZEXT816(uVar7) >> 0x40,0) != 0)) goto LAB_00406c13;
          uVar8 = uVar7 + 1;
          lVar4 = uVar7 * 0x180;
        }
      }
      else {
        if (0x38e38e38e38e37 < uVar7) {
LAB_00406c13:
                    /* WARNING: Subroutine does not return */
          FUN_00405af0();
        }
        uVar8 = uVar7 + 1;
        uVar9 = (uVar7 >> 1) + uVar8;
        lVar4 = uVar9 * 0x180;
      }
      lVar6 = FUN_00405900(lVar6,lVar4);
    }
    else {
      if ((((param_4 & 1) == 0) || (puVar2->ut_pid < 1)) ||
         (iVar1 = kill(puVar2->ut_pid,0), -1 < iVar1)) goto LAB_00406acb;
      piVar5 = __errno_location();
      if (*piVar5 == 3) goto LAB_00406aa7;
      if (uVar7 == uVar9) goto LAB_00406b90;
LAB_00406ad4:
      uVar8 = uVar7 + 1;
    }
    puVar3 = (undefined8 *)(uVar7 * 0x180 + lVar6);
    *puVar3 = *(undefined8 *)puVar2;
    puVar3[0x2f] = *(undefined8 *)puVar2->__unused;
    lVar4 = (long)puVar3 - (long)(undefined8 *)((ulong)(puVar3 + 1) & 0xfffffffffffffff8);
    puVar10 = (undefined8 *)((long)puVar2 - lVar4);
    puVar3 = (undefined8 *)((ulong)(puVar3 + 1) & 0xfffffffffffffff8);
    for (uVar7 = (ulong)((int)lVar4 + 0x180U >> 3); uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar3 = *puVar10;
      puVar10 = puVar10 + (ulong)bVar11 * -2 + 1;
      puVar3 = puVar3 + (ulong)bVar11 * -2 + 1;
    }
    puVar2 = getutxent();
    uVar7 = uVar8;
  } while( true );
}


ulong FUN_00406c20(void **param_1,undefined8 param_2,undefined8 param_3)

{
  void *__ptr;
  int *piVar1;
  ulong local_10;
  
  __ptr = (void *)FUN_00407370(0,&local_10,param_2,param_3);
  if (__ptr == (void *)0x0) {
    local_10 = 0xffffffff;
  }
  else if (local_10 < 0x80000000) {
    *param_1 = __ptr;
    local_10 = local_10 & 0xffffffff;
  }
  else {
    free(__ptr);
    piVar1 = __errno_location();
    *piVar1 = 0x4b;
    local_10 = 0xffffffff;
  }
  return local_10;
}


ulong FUN_00406c80(uint *param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  
  lVar2 = __fpending();
  uVar1 = *param_1;
  uVar3 = FUN_00407250(param_1);
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


/* WARNING: Could not reconcile some variable overlaps */

char * FUN_00406ce0(void)

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
  if (DAT_0060e598 != (char *)0x0) goto LAB_00406d1a;
  pcVar7 = getenv("CHARSETALIASDIR");
  if ((pcVar7 == (char *)0x0) || (*pcVar7 == '\0')) {
    sVar6 = 0x73;
    sVar5 = 0x65;
    __n = 100;
    pcVar7 = 
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib"
    ;
LAB_00406e05:
    __file = (char *)malloc(sVar6);
    if (__file != (char *)0x0) {
      memcpy(__file,pcVar7,__n);
      __file[__n] = '/';
      goto LAB_00406e26;
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
        goto LAB_00406e05;
      }
      sVar6 = __n + 0xe;
    }
    __file = (char *)malloc(sVar6);
    if (__file != (char *)0x0) {
      memcpy(__file,pcVar7,__n);
      sVar5 = __n;
LAB_00406e26:
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
LAB_00406ec0:
          pbVar8 = (byte *)__stream->_IO_read_ptr;
          if (__stream->_IO_read_end <= pbVar8) goto LAB_0040704c;
          do {
            __stream->_IO_read_ptr = (char *)(pbVar8 + 1);
            uVar4 = (uint)*pbVar8;
            __ptr = pcVar7;
            while( true ) {
              pcVar7 = __ptr;
              if ((uVar4 - 9 < 2) || (uVar4 == 0x20)) goto LAB_00406ec0;
              if (uVar4 == 0x23) goto LAB_004070b1;
              ungetc(uVar4,__stream);
              iVar2 = fscanf(__stream,"%50s %50s",&local_b8,&local_78);
              puVar13 = &local_b8;
              if (iVar2 < 2) goto LAB_0040705f;
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
                FUN_00407250(__stream);
                goto LAB_00406e64;
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
LAB_0040704c:
              uVar4 = __uflow(__stream);
              __ptr = pcVar7;
              if (uVar4 == 0xffffffff) goto LAB_0040705f;
            }
          } while( true );
        }
        close(iVar2);
      }
      goto LAB_00406e5e;
    }
  }
  DAT_0060e598 = "";
LAB_00406d1a:
  cVar1 = *DAT_0060e598;
  pcVar7 = DAT_0060e598;
  do {
    if (cVar1 == '\0') {
LAB_00406d74:
      if (*__s1 == '\0') {
        __s1 = "ASCII";
      }
      return __s1;
    }
    iVar2 = strcmp(__s1,pcVar7);
    if ((iVar2 == 0) || ((cVar1 == '*' && (pcVar7[1] == '\0')))) {
      sVar6 = strlen(pcVar7);
      __s1 = pcVar7 + sVar6 + 1;
      goto LAB_00406d74;
    }
    sVar6 = strlen(pcVar7);
    sVar5 = strlen(pcVar7 + sVar6 + 1);
    pcVar7 = pcVar7 + sVar6 + 1 + sVar5 + 1;
    cVar1 = *pcVar7;
  } while( true );
LAB_004070b1:
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
  if (uVar4 == 0xffffffff) goto LAB_0040705f;
  goto LAB_00406ec0;
LAB_0040705f:
  FUN_00407250(__stream);
  if (local_d0 == 0) {
LAB_00406e5e:
    pcVar7 = "";
  }
  else {
    pcVar7[local_d0] = '\0';
  }
LAB_00406e64:
  free(__file);
  DAT_0060e598 = pcVar7;
  goto LAB_00406d1a;
}


int FUN_00407250(FILE *param_1)

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
      if (_Var4 == -1) goto LAB_004072b7;
    }
    iVar1 = FUN_004072d0(param_1);
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
LAB_004072b7:
  iVar1 = fclose(param_1);
  return iVar1;
}


void FUN_004072d0(FILE *param_1)

{
  int iVar1;
  
  if (param_1 != (FILE *)0x0) {
    iVar1 = __freading();
    if ((iVar1 != 0) && ((param_1->_flags & 0x100U) != 0)) {
      FUN_00407310(param_1,0,1);
      fflush(param_1);
      return;
    }
  }
  fflush(param_1);
  return;
}


ulong FUN_00407310(FILE *param_1,__off_t param_2,int param_3)

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


/* WARNING: Removing unreachable block (ram,0x00408bac) */
/* WARNING: Removing unreachable block (ram,0x00408ced) */
/* WARNING: Removing unreachable block (ram,0x00408bc0) */
/* WARNING: Removing unreachable block (ram,0x00408094) */
/* WARNING: Removing unreachable block (ram,0x00407660) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Could not reconcile some variable overlaps */

undefined2 *
FUN_00407370(undefined2 *param_1,undefined8 *param_2,undefined2 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  unkbyte10 Var2;
  undefined uVar3;
  uint uVar4;
  void *pvVar5;
  char *pcVar6;
  uint uVar7;
  byte bVar8;
  char cVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *__n;
  undefined2 *puVar13;
  undefined *puVar14;
  uint *puVar15;
  int *piVar16;
  undefined2 *puVar17;
  undefined2 *puVar18;
  ulong uVar19;
  undefined2 *puVar20;
  char *pcVar21;
  undefined2 *puVar22;
  undefined *puVar23;
  undefined2 *puVar24;
  char *pcVar25;
  char *pcVar26;
  undefined *puVar27;
  size_t sVar28;
  uint uVar29;
  long lVar30;
  undefined *puVar31;
  undefined8 *puVar32;
  bool bVar33;
  ushort in_FPUControlWord;
  float10 fVar34;
  undefined auStack_6f8 [4];
  uint local_6f4;
  undefined2 *local_6f0;
  undefined2 *local_6e8;
  undefined *local_6e0;
  undefined8 *local_6d8;
  undefined2 *local_6d0;
  undefined2 *local_6c8;
  long local_6c0;
  undefined8 local_6b8;
  undefined *local_6b0;
  undefined local_6a8 [4];
  undefined auStack_6a4 [12];
  undefined2 *local_698;
  undefined2 *local_690;
  int local_684;
  undefined4 local_680;
  uint local_67c;
  undefined local_678 [8];
  undefined2 *local_670;
  undefined2 auStack_668 [112];
  long local_588;
  undefined8 *local_580;
  long local_578;
  ulong local_570;
  undefined8 auStack_568 [78];
  undefined2 local_2f8 [356];
  
  local_6d8 = param_2;
  local_690 = param_1;
  iVar10 = FUN_004090b0(param_3,&local_588,local_678);
  if (iVar10 < 0) {
    return (undefined2 *)0x0;
  }
  iVar10 = FUN_00408e90(param_4,local_678);
  if (iVar10 < 0) {
    if (local_580 != auStack_568) {
      free(local_580);
    }
    if (local_670 != auStack_668) {
      free(local_670);
    }
    piVar16 = __errno_location();
    *piVar16 = 0x16;
    return (undefined2 *)0x0;
  }
  uVar11 = local_578 + 7;
  if (uVar11 < 7) {
    uVar11 = 0xffffffffffffffff;
  }
  uVar12 = uVar11 + local_570;
  puVar27 = auStack_6f8;
  if ((!CARRY8(uVar11,local_570)) &&
     (sVar28 = uVar12 + 6, puVar27 = auStack_6f8, uVar12 < 0xfffffffffffffffa)) {
    if (sVar28 < 4000) {
      local_6e0 = (undefined *)0x0;
      lVar30 = -(uVar12 + 0x1d & 0xfffffffffffffff0);
      puVar27 = auStack_6f8 + lVar30;
      local_6b0 = (undefined *)((long)&local_6f0 + lVar30);
LAB_00407434:
      puVar31 = (undefined *)0x0;
      if (local_690 != (undefined2 *)0x0) {
        puVar31 = (undefined *)*local_6d8;
      }
      __n = (undefined *)0x0;
      local_6c0 = 0;
      puVar24 = (undefined2 *)*local_580;
      puVar20 = local_690;
      _local_6a8 = (int *)param_3;
      puVar32 = local_580;
      puVar14 = __n;
      if (puVar24 == param_3) goto LAB_004075e8;
      do {
        puVar24 = (undefined2 *)((long)puVar24 - (long)_local_6a8);
        __n = puVar14 + (long)puVar24;
        puVar13 = puVar20;
        if (CARRY8((ulong)puVar14,(ulong)puVar24)) {
          if (puVar31 != (undefined *)0xffffffffffffffff) goto LAB_00407960;
          __n = (undefined *)0xffffffffffffffff;
        }
        else if (puVar31 < __n) {
          if (puVar31 == (undefined *)0x0) {
            if (__n < (undefined *)0xd) {
              puVar31 = (undefined *)0xc;
            }
            else {
LAB_0040757e:
              puVar31 = __n;
              if (__n == (undefined *)0xffffffffffffffff) goto LAB_00407960;
            }
          }
          else {
            if ((long)puVar31 < 0) goto LAB_00407960;
            puVar31 = (undefined *)((long)puVar31 * 2);
            if (puVar31 < __n) goto LAB_0040757e;
          }
          if ((puVar20 == (undefined2 *)0x0) || (puVar20 == local_690)) {
            local_6b8 = (undefined2 *)_local_6a8;
            _local_6a8 = (float10)CONCAT91(stack0xfffffffffffff959,puVar20 == local_690);
            local_698 = puVar24;
            *(undefined8 *)(puVar27 + -8) = 0x4074dc;
            puVar13 = (undefined2 *)malloc((size_t)puVar31);
            if (puVar13 == (undefined2 *)0x0) goto LAB_00407960;
            puVar24 = local_698;
            _local_6a8 = (int *)local_6b8;
            if ((puVar14 != (undefined *)0x0) && (local_6a8[0] != '\0')) {
              _local_6a8 = (float10)CONCAT28(auStack_6a4._4_2_,local_6b8);
              *(undefined8 *)(puVar27 + -8) = 0x40752a;
              puVar13 = (undefined2 *)memcpy(puVar13,puVar20,(size_t)puVar14);
              puVar24 = local_698;
            }
          }
          else {
            local_698 = puVar24;
            *(undefined8 *)(puVar27 + -8) = 0x4075bf;
            puVar13 = (undefined2 *)realloc(puVar20,(size_t)puVar31);
            if (puVar13 == (undefined2 *)0x0) {
LAB_00407b75:
              *(undefined8 *)(puVar27 + -8) = 0x407b7a;
              piVar16 = __errno_location();
              _local_6a8 = (float10)CONCAT28(auStack_6a4._4_2_,piVar16);
              goto LAB_00407b88;
            }
            puVar24 = local_698;
          }
        }
        *(undefined8 *)(puVar27 + -8) = 0x4075e8;
        memcpy((undefined *)((long)puVar13 + (long)puVar14),_local_6a8,(size_t)puVar24);
        puVar20 = puVar13;
LAB_004075e8:
        do {
          if (local_588 == local_6c0) {
            puVar14 = __n + 1;
            puVar24 = puVar20;
            if ((undefined *)0xfffffffffffffffe < __n) {
              if (puVar31 == (undefined *)0xffffffffffffffff) goto LAB_00408772;
              goto LAB_00407960;
            }
            if (puVar14 <= puVar31) goto LAB_00408772;
            if (puVar31 == (undefined *)0x0) {
              if (puVar14 < (undefined *)0xd) {
                puVar31 = (undefined *)0xc;
              }
              else {
LAB_00408d4f:
                puVar31 = puVar14;
                if (puVar14 == (undefined *)0xffffffffffffffff) goto LAB_00407960;
              }
            }
            else {
              if ((long)puVar31 < 0) goto LAB_00407960;
              puVar31 = (undefined *)((long)puVar31 * 2);
              if (puVar31 < puVar14) goto LAB_00408d4f;
            }
            bVar33 = puVar20 == local_690;
            if ((puVar20 == (undefined2 *)0x0) || (bVar33)) {
              *(undefined8 *)(puVar27 + -8) = 0x408d09;
              puVar24 = (undefined2 *)malloc((size_t)puVar31);
              if (puVar24 == (undefined2 *)0x0) goto LAB_00407960;
              if ((__n != (undefined *)0x0) && (bVar33)) {
                *(undefined8 *)(puVar27 + -8) = 0x408d35;
                puVar24 = (undefined2 *)memcpy(puVar24,puVar20,(size_t)__n);
              }
            }
            else {
              *(undefined8 *)(puVar27 + -8) = 0x408766;
              puVar24 = (undefined2 *)realloc(puVar20,(size_t)puVar31);
              if (puVar24 == (undefined2 *)0x0) goto LAB_00407b75;
            }
LAB_00408772:
            *(undefined *)((long)puVar24 + (long)__n) = 0;
            if ((puVar14 < puVar31) && (puVar24 != local_690)) {
              *(undefined8 *)(puVar27 + -8) = 0x408790;
              puVar20 = (undefined2 *)realloc(puVar24,(size_t)puVar14);
              if (puVar20 != (undefined2 *)0x0) {
                puVar24 = puVar20;
              }
            }
            puVar31 = local_6e0;
            if (local_6e0 != (undefined *)0x0) {
              *(undefined8 *)(puVar27 + -8) = 0x4087ab;
              free(puVar31);
            }
            if (local_580 != auStack_568) {
              *(undefined8 *)(puVar27 + -8) = 0x4087c7;
              free(local_580);
            }
            if (local_670 != auStack_668) {
              *(undefined8 *)(puVar27 + -8) = 0x4087e3;
              free(local_670);
            }
            *local_6d8 = __n;
            return puVar24;
          }
          bVar8 = *(byte *)(puVar32 + 9);
          lVar30 = puVar32[10];
          if (bVar8 == 0x25) {
            if (lVar30 != -1) goto LAB_0040809c;
            puVar14 = __n + 1;
            puVar24 = puVar20;
            if (__n < (undefined *)0xffffffffffffffff) {
              if (puVar31 < puVar14) {
                if (puVar31 == (undefined *)0x0) {
                  if (puVar14 < (undefined *)0xd) {
                    puVar31 = (undefined *)0xc;
                  }
                  else {
LAB_00408312:
                    puVar31 = puVar14;
                    if (puVar14 == (undefined *)0xffffffffffffffff) goto LAB_00407960;
                  }
                }
                else {
                  if ((long)puVar31 < 0) goto LAB_00407960;
                  puVar31 = (undefined *)((long)puVar31 * 2);
                  if (puVar31 < puVar14) goto LAB_00408312;
                }
                if ((puVar20 == (undefined2 *)0x0) || (puVar20 == local_690)) {
                  local_698 = (undefined2 *)
                              ((ulong)local_698 & 0xffffffffffffff00 | (ulong)(puVar20 == local_690)
                              );
                  *(undefined8 *)(puVar27 + -8) = 0x40825e;
                  puVar24 = (undefined2 *)malloc((size_t)puVar31);
                  if (puVar24 == (undefined2 *)0x0) goto LAB_00407960;
                  if ((__n != (undefined *)0x0) && ((char)local_698 != '\0')) {
                    *(undefined8 *)(puVar27 + -8) = 0x408290;
                    puVar24 = (undefined2 *)memcpy(puVar24,puVar20,(size_t)__n);
                  }
                }
                else {
                  *(undefined8 *)(puVar27 + -8) = 0x407a56;
                  puVar24 = (undefined2 *)realloc(puVar20,(size_t)puVar31);
                  if (puVar24 == (undefined2 *)0x0) goto LAB_00407b75;
                }
              }
            }
            else {
              if (puVar31 != (undefined *)0xffffffffffffffff) goto LAB_00407960;
              puVar14 = (undefined *)0xffffffffffffffff;
            }
            *(undefined *)((long)puVar24 + (long)__n) = 0x25;
            puVar20 = puVar24;
            __n = puVar14;
            goto LAB_00407a67;
          }
          if (lVar30 == -1) goto LAB_0040809c;
          puVar15 = (uint *)(local_670 + lVar30 * 0x10);
          uVar4 = *puVar15;
          local_698 = (undefined2 *)((ulong)local_698 & 0xffffffff00000000 | (ulong)uVar4);
          if (bVar8 == 0x6e) {
            switch(uVar4) {
            case 0x12:
              **(undefined **)(puVar15 + 4) = (char)__n;
              break;
            case 0x13:
              **(undefined2 **)(puVar15 + 4) = (short)__n;
              break;
            case 0x14:
              **(undefined4 **)(puVar15 + 4) = (int)__n;
              break;
            case 0x15:
            case 0x16:
              **(undefined8 **)(puVar15 + 4) = __n;
              break;
            default:
switchD_00407acc_caseD_5:
                    /* WARNING: Subroutine does not return */
              *(undefined8 *)(puVar27 + -8) = 0x401c53;
              abort();
            }
          }
          else {
            bVar8 = bVar8 & 0xdf;
            if (((((byte)(bVar8 + 0xbb) < 3) || (bVar8 == 0x41)) && (uVar4 == 0xc)) &&
               (fVar34 = *(float10 *)(puVar15 + 4), fVar34 == fVar34 + fVar34)) {
              pcVar21 = (char *)puVar32[4];
              local_6b8._0_4_ = *(uint *)(puVar32 + 2);
              if ((char *)puVar32[3] == pcVar21) {
                puVar24 = (undefined2 *)0x0;
              }
              else {
                puVar13 = (undefined2 *)puVar32[5];
                if (puVar13 == (undefined2 *)0xffffffffffffffff) {
                  puVar24 = (undefined2 *)0x0;
                  local_698 = puVar13;
                  pcVar25 = (char *)puVar32[3];
                  do {
                    pcVar26 = pcVar25 + 1;
                    uVar11 = 0xffffffffffffffff;
                    if (puVar24 < (undefined2 *)0x199999999999999a) {
                      uVar11 = (long)puVar24 * 10;
                    }
                    puVar24 = (undefined2 *)((long)(*pcVar25 + -0x30) + uVar11);
                    pcVar6 = pcVar26;
                    if (CARRY8((long)(*pcVar25 + -0x30),uVar11)) {
                      do {
                        puVar24 = local_698;
                        if (pcVar21 == pcVar6) goto LAB_004078f0;
                        pcVar26 = pcVar6 + 1;
                        cVar9 = *pcVar6;
                        pcVar6 = pcVar26;
                      } while (cVar9 != '0');
                      puVar24 = (undefined2 *)0xffffffffffffffff;
                    }
                    pcVar25 = pcVar26;
                  } while (pcVar21 != pcVar26);
                }
                else {
                  if (*(int *)(local_670 + (long)puVar13 * 0x10) != 5) goto LAB_0040809c;
                  iVar10 = *(int *)((long)(local_670 + (long)puVar13 * 0x10) + 0x10);
                  puVar24 = (undefined2 *)(long)iVar10;
                  if (iVar10 < 0) {
                    local_6b8._0_4_ = (uint)local_6b8 | 2;
                    puVar24 = (undefined2 *)-(long)(undefined2 *)(long)iVar10;
                  }
                }
              }
LAB_004078f0:
              pcVar21 = (char *)puVar32[7];
              if ((char *)puVar32[6] == pcVar21) {
LAB_00407fa0:
                puVar18 = (undefined2 *)0xc;
                if (bVar8 != 0x41) {
                  puVar18 = (undefined2 *)0x12;
                }
                puVar13 = (undefined2 *)0x0;
                if (bVar8 != 0x41) {
                  puVar13 = (undefined2 *)0x6;
                }
              }
              else {
                if (puVar32[8] == -1) {
                  pcVar25 = (char *)puVar32[6] + 1;
                  puVar13 = (undefined2 *)0x0;
                  if (pcVar21 != pcVar25) {
                    do {
                      pcVar26 = pcVar25 + 1;
                      uVar11 = 0xffffffffffffffff;
                      if (puVar13 < (undefined2 *)0x199999999999999a) {
                        uVar11 = (long)puVar13 * 10;
                      }
                      puVar13 = (undefined2 *)((long)(*pcVar25 + -0x30) + uVar11);
                      pcVar6 = pcVar26;
                      if (CARRY8((long)(*pcVar25 + -0x30),uVar11)) {
                        do {
                          if (pcVar21 == pcVar6) goto LAB_00407960;
                          pcVar26 = pcVar6 + 1;
                          cVar9 = *pcVar6;
                          pcVar6 = pcVar26;
                        } while (cVar9 != '0');
                        puVar13 = (undefined2 *)0xffffffffffffffff;
                      }
                      pcVar25 = pcVar26;
                    } while (pcVar21 != pcVar26);
                    goto LAB_0040792c;
                  }
                }
                else {
                  if (*(int *)(local_670 + puVar32[8] * 0x10) != 5) goto LAB_0040809c;
                  iVar10 = *(int *)((long)(local_670 + puVar32[8] * 0x10) + 0x10);
                  puVar13 = (undefined2 *)(long)iVar10;
                  if (iVar10 < 0) goto LAB_00407fa0;
LAB_0040792c:
                  if (puVar13 != (undefined2 *)0x0) {
                    puVar18 = puVar13 + 6;
                    if (puVar13 < (undefined2 *)0xfffffffffffffff4) goto LAB_00407fbe;
                    goto LAB_00407960;
                  }
                }
                puVar18 = (undefined2 *)0xc;
              }
LAB_00407fbe:
              if (puVar18 <= puVar24) {
                puVar18 = puVar24;
              }
              puVar17 = (undefined2 *)((long)puVar18 + 1);
              local_698 = puVar17;
              if (puVar18 == (undefined2 *)0xffffffffffffffff) goto LAB_00407960;
              if (puVar17 < (undefined2 *)0x2bd) {
                puVar18 = local_2f8;
              }
              else {
                local_6d0 = puVar24;
                local_6c8 = puVar13;
                local_6b8 = (undefined2 *)
                            ((ulong)local_6b8 & 0xffffffff00000000 | (ulong)(uint)local_6b8);
                _local_6a8 = fVar34;
                if (puVar17 == (undefined2 *)0xffffffffffffffff) goto LAB_00407960;
                *(undefined8 *)(puVar27 + -8) = 0x408012;
                puVar18 = (undefined2 *)malloc((size_t)puVar17);
                puVar13 = local_6c8;
                puVar24 = local_6d0;
                fVar34 = _local_6a8;
                if (puVar18 == (undefined2 *)0x0) goto LAB_00407960;
              }
              uVar4 = local_680 & 0xffff0000;
              uVar29 = (uint)in_FPUControlWord;
              local_680 = uVar4 | uVar29;
              uVar7 = local_680;
              local_680 = local_680 | 0x300;
              if ((float10)0 <= fVar34) {
                if (((uint)local_6b8 & 4) == 0) {
                  puVar17 = puVar18;
                  if (((uint)local_6b8 & 8) != 0) {
                    puVar17 = (undefined2 *)((long)puVar18 + 1);
                    *(undefined *)puVar18 = 0x20;
                  }
                }
                else {
                  *(undefined *)puVar18 = 0x2b;
                  puVar17 = (undefined2 *)((long)puVar18 + 1);
                }
              }
              else {
                *(undefined *)puVar18 = 0x2d;
                fVar34 = -fVar34;
                puVar17 = (undefined2 *)((long)puVar18 + 1);
              }
              local_680._2_2_ = (undefined2)(uVar4 >> 0x10);
              if (fVar34 <= (float10)0) {
                if (fVar34 != (float10)0) goto LAB_0040809c;
                bVar8 = *(byte *)(puVar32 + 9) & 0xdf;
                if (bVar8 == 0x46) {
                  *(undefined *)puVar17 = 0x30;
                  if ((((uint)local_6b8 & 0x10) == 0) && (puVar13 == (undefined2 *)0x0)) {
LAB_004084e7:
                    puVar13 = (undefined2 *)((long)puVar17 + 1);
                  }
                  else {
                    local_6f0 = (undefined2 *)
                                ((ulong)local_6f0 & 0xffffffff00000000 |
                                (ulong)uVar7 & 0xffffffff0000ffff);
                    local_6e8 = puVar24;
                    local_6d0 = puVar18;
                    local_6c8 = puVar13;
                    local_6b8 = (undefined2 *)
                                ((ulong)local_6b8 & 0xffffffff00000000 | (ulong)(uint)local_6b8);
                    _local_6a8 = (float10)CONCAT28(auStack_6a4._4_2_,puVar17 + 1);
                    *(undefined8 *)(puVar27 + -8) = 0x408a21;
                    pcVar21 = nl_langinfo(0x10000);
                    cVar9 = *pcVar21;
                    in_FPUControlWord = (ushort)local_6f0;
                    if (cVar9 == '\0') {
                      cVar9 = '.';
                    }
                    *(char *)((long)puVar17 + 1) = cVar9;
                    puVar18 = local_6d0;
                    puVar13 = (undefined2 *)_local_6a8;
                    puVar24 = local_6e8;
                    if (local_6c8 != (undefined2 *)0x0) {
                      do {
                        puVar22 = (undefined2 *)((long)puVar13 + 1);
                        *(undefined *)puVar13 = 0x30;
                        puVar13 = puVar22;
                      } while (puVar22 != (undefined2 *)((long)(puVar17 + 1) + (long)local_6c8));
                      puVar13 = (undefined2 *)((long)_local_6a8 + (long)local_6c8);
                    }
                  }
                }
                else if (bVar8 == 0x45) {
                  *(undefined *)puVar17 = 0x30;
                  if ((((uint)local_6b8 & 0x10) != 0) ||
                     (_local_6a8 = (int *)((long)puVar17 + 1), puVar13 != (undefined2 *)0x0)) {
                    local_6f0 = (undefined2 *)
                                ((ulong)local_6f0 & 0xffffffff00000000 |
                                (ulong)uVar7 & 0xffffffff0000ffff);
                    local_6e8 = puVar24;
                    local_6d0 = puVar18;
                    local_6c8 = puVar13;
                    local_6b8 = (undefined2 *)
                                ((ulong)local_6b8 & 0xffffffff00000000 | (ulong)(uint)local_6b8);
                    _local_6a8 = (float10)CONCAT28(auStack_6a4._4_2_,puVar17 + 1);
                    *(undefined8 *)(puVar27 + -8) = 0x408c7f;
                    pcVar21 = nl_langinfo(0x10000);
                    cVar9 = *pcVar21;
                    if (cVar9 == '\0') {
                      cVar9 = '.';
                    }
                    *(char *)((long)puVar17 + 1) = cVar9;
                    puVar18 = local_6d0;
                    puVar24 = local_6e8;
                    in_FPUControlWord = (ushort)local_6f0;
                    if (local_6c8 != (undefined2 *)0x0) {
                      puVar14 = (undefined *)_local_6a8;
                      do {
                        puVar23 = puVar14 + 1;
                        *puVar14 = 0x30;
                        puVar14 = puVar23;
                      } while (puVar23 != (undefined *)((long)(puVar17 + 1) + (long)local_6c8));
                      _local_6a8 = (int *)((long)_local_6a8 + (long)local_6c8);
                    }
                  }
                  uVar3 = *(undefined *)(puVar32 + 9);
                  puVar13 = (undefined2 *)((long)_local_6a8 + 4);
                  *(undefined *)((long)_local_6a8 + 3) = 0x30;
                  *(undefined *)_local_6a8 = uVar3;
                  *(undefined2 *)((long)_local_6a8 + 1) = 0x302b;
                }
                else if (bVar8 == 0x47) {
                  *(undefined *)puVar17 = 0x30;
                  if (((uint)local_6b8 & 0x10) == 0) goto LAB_004084e7;
                  if (puVar13 == (undefined2 *)0x0) {
                    local_6e8 = (undefined2 *)
                                ((ulong)local_6e8 & 0xffffffff00000000 |
                                (ulong)uVar7 & 0xffffffff0000ffff);
                    local_6d0 = puVar24;
                    local_6c8 = puVar17 + 1;
                    local_6b8 = puVar18;
                    _local_6a8 = (float10)CONCAT64(auStack_6a4._0_6_,(uint)local_6b8);
                    *(undefined8 *)(puVar27 + -8) = 0x408e37;
                    pcVar21 = nl_langinfo(0x10000);
                    cVar9 = *pcVar21;
                    in_FPUControlWord = (ushort)local_6e8;
                    if (cVar9 == '\0') {
                      cVar9 = '.';
                    }
                    *(char *)((long)puVar17 + 1) = cVar9;
                    puVar18 = local_6b8;
                    puVar13 = local_6c8;
                    puVar24 = local_6d0;
                    local_6b8._0_4_ = (uint)local_6a8;
                  }
                  else {
                    local_6f4 = uVar29;
                    local_6f0 = puVar24;
                    local_6e8 = puVar17 + 1;
                    local_6d0 = puVar18;
                    local_6c8 = (undefined2 *)
                                ((ulong)local_6c8 & 0xffffffff00000000 | (ulong)(uint)local_6b8);
                    local_6b8 = puVar13;
                    _local_6a8 = (float10)CONCAT28(auStack_6a4._4_2_,
                                                   (undefined *)((long)puVar13 + -1));
                    *(undefined8 *)(puVar27 + -8) = 0x40894d;
                    pcVar21 = nl_langinfo(0x10000);
                    cVar9 = *pcVar21;
                    in_FPUControlWord = (ushort)local_6f4;
                    if (cVar9 == '\0') {
                      cVar9 = '.';
                    }
                    *(char *)((long)puVar17 + 1) = cVar9;
                    puVar18 = local_6d0;
                    puVar13 = local_6e8;
                    puVar24 = local_6f0;
                    local_6b8._0_4_ = (uint)local_6c8;
                    if (_local_6a8 != (int *)0x0) {
                      do {
                        puVar22 = (undefined2 *)((long)puVar13 + 1);
                        *(undefined *)puVar13 = 0x30;
                        puVar13 = puVar22;
                      } while (puVar22 !=
                               (undefined2 *)((undefined *)((long)puVar17 + 1) + (long)local_6b8));
                      puVar13 = (undefined2 *)((long)local_6e8 + (long)_local_6a8);
                    }
                  }
                }
                else {
                  if (bVar8 != 0x41) goto LAB_0040809c;
                  *(undefined *)puVar17 = 0x30;
                  _local_6a8 = (float10)CONCAT28(auStack_6a4._4_2_,puVar17 + 1);
                  cVar9 = *(char *)(puVar32 + 9);
                  *(undefined *)(puVar17 + 1) = 0x30;
                  *(char *)((long)puVar17 + 1) = cVar9 + '\x17';
                  if ((((uint)local_6b8 & 0x10) != 0) ||
                     (puVar22 = (undefined2 *)((long)puVar17 + 3), puVar13 != (undefined2 *)0x0)) {
                    local_6f4 = uVar29;
                    local_6f0 = puVar24;
                    local_6e8 = puVar18;
                    local_6d0 = puVar13;
                    local_6c8 = (undefined2 *)
                                ((ulong)local_6c8 & 0xffffffff00000000 | (ulong)(uint)local_6b8);
                    local_6b8 = puVar17 + 2;
                    *(undefined8 *)(puVar27 + -8) = 0x408d99;
                    pcVar21 = nl_langinfo(0x10000);
                    cVar9 = *pcVar21;
                    if (cVar9 == '\0') {
                      cVar9 = '.';
                    }
                    *(char *)((long)puVar17 + 3) = cVar9;
                    puVar18 = local_6e8;
                    puVar22 = local_6b8;
                    puVar24 = local_6f0;
                    local_6b8._0_4_ = (uint)local_6c8;
                    uVar29 = local_6f4;
                    if (local_6d0 != (undefined2 *)0x0) {
                      puVar13 = local_6b8;
                      do {
                        puVar22 = (undefined2 *)((long)puVar13 + 1);
                        *(undefined *)puVar13 = 0x30;
                        puVar13 = puVar22;
                      } while (puVar22 != (undefined2 *)((long)(puVar17 + 2) + (long)local_6d0));
                      puVar22 = (undefined2 *)((long)local_6b8 + (long)local_6d0);
                    }
                  }
                  in_FPUControlWord = (ushort)uVar29;
                  cVar9 = *(char *)(puVar32 + 9);
                  puVar13 = (undefined2 *)((long)puVar22 + 3);
                  *(undefined2 *)((long)puVar22 + 1) = 0x302b;
                  *(char *)puVar22 = cVar9 + '\x0f';
                  puVar17 = (undefined2 *)_local_6a8;
                }
              }
              else {
                if (fVar34 + fVar34 != fVar34) goto LAB_0040809c;
                puVar13 = (undefined2 *)((long)puVar17 + 3);
                if ((byte)(*(char *)(puVar32 + 9) + 0xbfU) < 0x1a) {
                  *(undefined *)(puVar17 + 1) = 0x46;
                  *puVar17 = 0x4e49;
                  puVar17 = (undefined2 *)0x0;
                }
                else {
                  *(undefined *)(puVar17 + 1) = 0x66;
                  *puVar17 = 0x6e69;
                  puVar17 = (undefined2 *)0x0;
                }
              }
              local_680 = CONCAT22(local_680._2_2_,in_FPUControlWord);
              _local_6a8 = (int *)((long)puVar13 - (long)puVar18);
              if (_local_6a8 < puVar24) {
                lVar30 = (long)puVar24 - (long)_local_6a8;
                puVar24 = (undefined2 *)((long)puVar13 + lVar30);
                _local_6a8 = (int *)((long)puVar24 - (long)puVar18);
                if (((uint)local_6b8 & 2) == 0) {
                  if ((((uint)local_6b8 & 0x20) == 0) || (puVar17 == (undefined2 *)0x0)) {
                    puVar14 = (undefined *)0xffffffffffffffff;
                    puVar17 = puVar13;
                    if (puVar18 < puVar13) {
                      do {
                        *(undefined *)((long)puVar24 + (long)puVar14) =
                             *(undefined *)((long)puVar13 + (long)puVar14);
                        puVar14 = puVar14 + -1;
                        puVar17 = puVar18;
                      } while ((undefined *)((long)puVar18 + (-1 - (long)puVar13)) != puVar14);
                    }
                    if (lVar30 != 0) {
                      puVar24 = puVar17;
                      do {
                        puVar13 = (undefined2 *)((long)puVar24 + 1);
                        *(undefined *)puVar24 = 0x20;
                        puVar24 = puVar13;
                      } while (puVar13 != (undefined2 *)(lVar30 + (long)puVar17));
                    }
                  }
                  else {
                    puVar22 = puVar13;
                    if (puVar17 < puVar13) {
                      puVar14 = (undefined *)0xffffffffffffffff;
                      do {
                        *(undefined *)((long)puVar24 + (long)puVar14) =
                             *(undefined *)((long)puVar13 + (long)puVar14);
                        puVar14 = puVar14 + -1;
                        puVar22 = puVar17;
                      } while (puVar14 != (undefined *)((long)puVar17 + (-1 - (long)puVar13)));
                    }
                    if (lVar30 != 0) {
                      puVar24 = puVar22;
                      do {
                        puVar13 = (undefined2 *)((long)puVar24 + 1);
                        *(undefined *)puVar24 = 0x30;
                        puVar24 = puVar13;
                      } while (puVar13 != (undefined2 *)(lVar30 + (long)puVar22));
                    }
                  }
                }
                else if (lVar30 != 0) {
                  do {
                    puVar17 = (undefined2 *)((long)puVar13 + 1);
                    *(undefined *)puVar13 = 0x20;
                    puVar13 = puVar17;
                  } while (puVar24 != puVar17);
                }
              }
              if (local_698 <= _local_6a8) {
LAB_0040809c:
                    /* WARNING: Subroutine does not return */
                *(undefined **)(puVar27 + -8) = &UNK_004080a1;
                abort();
              }
              puVar14 = __n + (long)_local_6a8;
              puVar24 = puVar20;
              if (puVar31 + -(long)__n <= _local_6a8) {
                if (CARRY8((ulong)__n,(ulong)_local_6a8) == false) {
                  if (puVar31 < puVar14) {
                    if (puVar31 == (undefined *)0x0) {
                      if (puVar14 < (undefined *)0xd) {
                        puVar31 = (undefined *)0xc;
                      }
                      else {
LAB_00408b9a:
                        puVar31 = puVar14;
                        if (puVar14 == (undefined *)0xffffffffffffffff) goto LAB_00407960;
                      }
                    }
                    else {
                      if ((long)puVar31 < 0) goto LAB_00407960;
                      puVar31 = (undefined *)((long)puVar31 * 2);
                      if (puVar31 < puVar14) goto LAB_00408b9a;
                    }
                    if ((puVar20 == (undefined2 *)0x0) || (puVar20 == local_690)) {
                      local_6b8 = (undefined2 *)
                                  ((ulong)local_6b8 & 0xffffffffffffff00 |
                                  (ulong)(puVar20 == local_690));
                      local_698 = puVar18;
                      *(undefined8 *)(puVar27 + -8) = 0x408887;
                      puVar24 = (undefined2 *)malloc((size_t)puVar31);
                      if (puVar24 == (undefined2 *)0x0) goto LAB_00407960;
                      puVar18 = local_698;
                      if ((__n != (undefined *)0x0) && ((char)local_6b8 != '\0')) {
                        *(undefined8 *)(puVar27 + -8) = 0x4088d5;
                        puVar24 = (undefined2 *)memcpy(puVar24,puVar20,(size_t)__n);
                        puVar18 = local_698;
                      }
                    }
                    else {
                      local_698 = puVar18;
                      *(undefined8 *)(puVar27 + -8) = 0x408602;
                      puVar24 = (undefined2 *)realloc(puVar20,(size_t)puVar31);
                      if (puVar24 == (undefined2 *)0x0) goto LAB_00407960;
                      puVar18 = local_698;
                    }
                  }
                }
                else if (puVar31 != (undefined *)0xffffffffffffffff) goto LAB_00407960;
              }
              local_698 = puVar18;
              *(undefined8 *)(puVar27 + -8) = 0x408636;
              memcpy((undefined *)((long)puVar24 + (long)__n),puVar18,(size_t)_local_6a8);
              puVar13 = local_698;
              puVar20 = puVar24;
              __n = puVar14;
              if (local_698 != local_2f8) {
                *(undefined8 *)(puVar27 + -8) = 0x408655;
                free(puVar13);
              }
            }
            else {
              uVar4 = *(uint *)(puVar32 + 2);
              puVar24 = (undefined2 *)(local_6b0 + 1);
              *local_6b0 = 0x25;
              if ((uVar4 & 1) != 0) {
                local_6b0[1] = 0x27;
                puVar24 = (undefined2 *)(local_6b0 + 2);
              }
              if ((uVar4 & 2) != 0) {
                *(undefined *)puVar24 = 0x2d;
                puVar24 = (undefined2 *)((long)puVar24 + 1);
              }
              if ((uVar4 & 4) != 0) {
                *(undefined *)puVar24 = 0x2b;
                puVar24 = (undefined2 *)((long)puVar24 + 1);
              }
              if ((uVar4 & 8) != 0) {
                *(undefined *)puVar24 = 0x20;
                puVar24 = (undefined2 *)((long)puVar24 + 1);
              }
              if ((uVar4 & 0x10) != 0) {
                *(undefined *)puVar24 = 0x23;
                puVar24 = (undefined2 *)((long)puVar24 + 1);
              }
              if ((uVar4 & 0x40) != 0) {
                *(undefined *)puVar24 = 0x49;
                puVar24 = (undefined2 *)((long)puVar24 + 1);
              }
              if ((uVar4 & 0x20) != 0) {
                *(undefined *)puVar24 = 0x30;
                puVar24 = (undefined2 *)((long)puVar24 + 1);
              }
              pvVar5 = (void *)puVar32[3];
              puVar13 = local_670;
              if (pvVar5 != (void *)puVar32[4]) {
                local_6b8 = local_670;
                sVar28 = (long)(void *)puVar32[4] - (long)pvVar5;
                _local_6a8 = (float10)CONCAT28(auStack_6a4._4_2_,sVar28);
                *(undefined8 *)(puVar27 + -8) = 0x407709;
                memcpy(puVar24,pvVar5,sVar28);
                puVar24 = (undefined2 *)((long)puVar24 + (long)_local_6a8);
                puVar13 = local_6b8;
              }
              pvVar5 = (void *)puVar32[6];
              if (pvVar5 != (void *)puVar32[7]) {
                local_6b8 = puVar13;
                sVar28 = (long)(void *)puVar32[7] - (long)pvVar5;
                _local_6a8 = (float10)CONCAT28(auStack_6a4._4_2_,sVar28);
                *(undefined8 *)(puVar27 + -8) = 0x407746;
                memcpy(puVar24,pvVar5,sVar28);
                puVar24 = (undefined2 *)((long)puVar24 + (long)_local_6a8);
                puVar13 = local_6b8;
              }
              if ((uint)local_698 < 0x11) {
                uVar11 = 1L << ((byte)local_698 & 0x3f);
                if ((uVar11 & 0x14180) == 0) {
                  if ((uVar11 & 0x1000) == 0) {
                    if ((uVar11 & 0x600) != 0) {
                      *(undefined *)puVar24 = 0x6c;
                      puVar24 = (undefined2 *)((long)puVar24 + 1);
                      goto LAB_00407b68;
                    }
                  }
                  else {
                    *(undefined *)puVar24 = 0x4c;
                    puVar24 = (undefined2 *)((long)puVar24 + 1);
                  }
                }
                else {
LAB_00407b68:
                  *(undefined *)puVar24 = 0x6c;
                  puVar24 = (undefined2 *)((long)puVar24 + 1);
                }
              }
              uVar3 = *(undefined *)(puVar32 + 9);
              *(undefined *)((long)puVar24 + 1) = 0;
              *(undefined *)puVar24 = uVar3;
              if (puVar32[5] == -1) {
                local_6b8 = (undefined2 *)((ulong)local_6b8._4_4_ << 0x20);
              }
              else {
                if (*(int *)(puVar13 + puVar32[5] * 0x10) != 5) goto LAB_0040809c;
                local_6b8 = (undefined2 *)CONCAT44(local_6b8._4_4_,1);
                local_680 = *(uint *)((long)(puVar13 + puVar32[5] * 0x10) + 0x10);
              }
              if (puVar32[8] != -1) {
                if (*(int *)(puVar13 + puVar32[8] * 0x10) != 5) goto LAB_0040809c;
                (&local_680)[(ulong)local_6b8 & 0xffffffff] =
                     *(int *)((long)(puVar13 + puVar32[8] * 0x10) + 0x10);
                local_6b8 = (undefined2 *)
                            ((ulong)local_6b8 & 0xffffffff00000000 | (ulong)((uint)local_6b8 + 1));
              }
              puVar14 = __n + 2;
              puVar13 = puVar20;
              if (__n < (undefined *)0xfffffffffffffffe) {
                if (puVar31 < puVar14) {
                  if (puVar31 == (undefined *)0x0) {
                    if (puVar14 < (undefined *)0xd) {
                      puVar31 = (undefined *)0xc;
                    }
                    else {
LAB_00407f52:
                      puVar31 = puVar14;
                      if (puVar14 == (undefined *)0xffffffffffffffff) goto LAB_00407960;
                    }
                  }
                  else {
                    if ((long)puVar31 < 0) goto LAB_00407960;
                    puVar31 = (undefined *)((long)puVar31 * 2);
                    if (puVar31 < puVar14) goto LAB_00407f52;
                  }
                  if ((puVar20 == (undefined2 *)0x0) || (puVar20 == local_690)) {
                    _local_6a8 = (float10)CONCAT91(stack0xfffffffffffff959,puVar20 == local_690);
                    *(undefined8 *)(puVar27 + -8) = 0x4081fe;
                    puVar13 = (undefined2 *)malloc((size_t)puVar31);
                    if (puVar13 == (undefined2 *)0x0) goto LAB_00407960;
                    if ((__n != (undefined *)0x0) && (local_6a8[0] != '\0')) {
                      *(undefined8 *)(puVar27 + -8) = 0x408230;
                      puVar13 = (undefined2 *)memcpy(puVar13,puVar20,(size_t)__n);
                    }
                  }
                  else {
                    *(undefined8 *)(puVar27 + -8) = 0x407858;
                    puVar13 = (undefined2 *)realloc(puVar20,(size_t)puVar31);
                    if (puVar13 == (undefined2 *)0x0) goto LAB_00407960;
                  }
                }
              }
              else if (puVar31 != (undefined *)0xffffffffffffffff) goto LAB_00407960;
              *(undefined *)((long)puVar13 + (long)__n) = 0;
              local_6c8 = puVar13;
              *(undefined8 *)(puVar27 + -8) = 0x407875;
              puVar15 = (uint *)__errno_location();
              puVar13 = local_6c8;
              local_6c8 = puVar24;
              _local_6a8 = (float10)CONCAT28(auStack_6a4._4_2_,puVar15);
              local_6e8 = (undefined2 *)((ulong)local_6e8 & 0xffffffff00000000 | (ulong)*puVar15);
LAB_00407898:
              uVar4 = local_680;
              puVar14 = local_6b0;
              local_684 = -1;
              uVar12 = (long)puVar31 - (long)__n;
              *_local_6a8 = 0;
              uVar11 = 0x7fffffff;
              if (uVar12 < 0x80000000) {
                uVar11 = uVar12;
              }
              switch((ulong)local_698 & 0xffffffff) {
              default:
                goto switchD_00407acc_caseD_5;
              case 1:
                uVar19 = (ulong)(uint)(int)*(char *)(local_670 + puVar32[10] * 0x10 + 8);
                break;
              case 2:
                uVar19 = (ulong)*(byte *)(local_670 + puVar32[10] * 0x10 + 8);
                break;
              case 3:
                uVar19 = (ulong)(uint)(int)(short)local_670[puVar32[10] * 0x10 + 8];
                break;
              case 4:
                uVar19 = (ulong)(ushort)local_670[puVar32[10] * 0x10 + 8];
                break;
              case 5:
              case 6:
              case 0xd:
              case 0xe:
                uVar19 = (ulong)*(uint *)(local_670 + puVar32[10] * 0x10 + 8);
                break;
              case 7:
              case 8:
              case 9:
              case 10:
              case 0xf:
              case 0x10:
              case 0x11:
                piVar16 = *(int **)(local_670 + puVar32[10] * 0x10 + 8);
                local_6d0 = puVar13;
                if ((uint)local_6b8 == 1) {
                  *(int **)(puVar27 + -8) = &local_684;
                  *(int **)(puVar27 + -0x10) = piVar16;
                  goto LAB_00408172;
                }
                if ((uint)local_6b8 != 2) {
                  *(int **)(puVar27 + -0x10) = &local_684;
LAB_00407bda:
                  puVar14 = local_6b0;
                  *(undefined8 *)(puVar27 + -0x18) = 0x407bf7;
                  iVar10 = __snprintf_chk((undefined *)((long)puVar13 + (long)__n),uVar11,1,
                                          0xffffffffffffffff,puVar14,piVar16);
                  goto LAB_00407c00;
                }
                *(int **)(puVar27 + -0x10) = &local_684;
                *(int **)(puVar27 + -0x18) = piVar16;
                goto LAB_00408126;
              case 0xb:
                local_6d0 = puVar13;
                uVar1 = *(undefined8 *)(local_670 + puVar32[10] * 0x10 + 8);
                if ((uint)local_6b8 == 1) {
                  *(int **)(puVar27 + -0x10) = &local_684;
                }
                else {
                  if ((uint)local_6b8 != 2) {
                    *(undefined8 *)(puVar27 + -8) = 0x407ece;
                    iVar10 = __snprintf_chk(uVar1,(undefined *)((long)puVar13 + (long)__n),uVar11,1,
                                            0xffffffffffffffff,puVar14,&local_684);
                    goto LAB_00407c00;
                  }
                  *(int **)(puVar27 + -8) = &local_684;
                  *(ulong *)(puVar27 + -0x10) = (ulong)local_67c;
                }
                uVar4 = local_680;
                puVar14 = local_6b0;
                *(undefined8 *)(puVar27 + -0x18) = 0x40836e;
                iVar10 = __snprintf_chk(uVar1,(undefined *)((long)puVar13 + (long)__n),uVar11,1,
                                        0xffffffffffffffff,puVar14,uVar4);
                goto LAB_00407c00;
              case 0xc:
                local_6d0 = puVar13;
                Var2 = *(unkbyte10 *)(local_670 + puVar32[10] * 0x10 + 8);
                if ((uint)local_6b8 != 1) {
                  if ((uint)local_6b8 != 2) {
                    piVar16 = &local_684;
                    *(unkbyte10 *)(puVar27 + -0x10) = Var2;
                    goto LAB_00407bda;
                  }
                  *(int **)(puVar27 + -0x10) = &local_684;
                  uVar19 = (ulong)local_67c;
                  *(unkbyte10 *)(puVar27 + -0x20) = Var2;
                  *(ulong *)(puVar27 + -0x30) = uVar19;
                  *(undefined8 *)(puVar27 + -0x38) = 0x4083cf;
                  iVar10 = __snprintf_chk((undefined *)((long)puVar13 + (long)__n),uVar11,1,
                                          0xffffffffffffffff,puVar14,uVar4);
                  goto LAB_00407c00;
                }
                *(int **)(puVar27 + -0x10) = &local_684;
                *(unkbyte10 *)(puVar27 + -0x20) = Var2;
                goto LAB_0040812d;
              }
              local_6d0 = puVar13;
              if ((uint)local_6b8 == 1) {
                *(int **)(puVar27 + -8) = &local_684;
                *(ulong *)(puVar27 + -0x10) = uVar19;
LAB_00408172:
                uVar19 = (ulong)local_680;
LAB_00407d1a:
                puVar14 = local_6b0;
                *(undefined8 *)(puVar27 + -0x18) = 0x407d37;
                iVar10 = __snprintf_chk((undefined *)((long)puVar13 + (long)__n),uVar11,1,
                                        0xffffffffffffffff,puVar14,uVar19);
                if (-1 < local_684) goto LAB_00407c0e;
LAB_00407d4e:
                puVar24 = local_6d0;
                if (*(char *)((long)local_6c8 + 1) == '\0') {
                  if (iVar10 < 0) {
                    iVar10 = *_local_6a8;
                    if ((iVar10 == 0) && (iVar10 = 0x54, (*(byte *)(puVar32 + 9) & 0xef) != 99)) {
                      iVar10 = 0x16;
                    }
                    if ((local_6d0 != local_690) && (local_6d0 != (undefined2 *)0x0)) {
                      *(undefined8 *)(puVar27 + -8) = 0x407da4;
                      free(puVar24);
                    }
                    puVar31 = local_6e0;
                    if (local_6e0 != (undefined *)0x0) {
                      *(undefined8 *)(puVar27 + -8) = 0x407db8;
                      free(puVar31);
                    }
                    if (local_580 != auStack_568) {
                      *(undefined8 *)(puVar27 + -8) = 0x407dd4;
                      free(local_580);
                    }
                    if (local_670 != auStack_668) {
                      *(undefined8 *)(puVar27 + -8) = 0x407df0;
                      free(local_670);
                    }
                    *_local_6a8 = iVar10;
                    return (undefined2 *)0x0;
                  }
                  goto LAB_00407c28;
                }
                *(undefined *)((long)local_6c8 + 1) = 0;
                puVar13 = local_6d0;
                goto LAB_00407898;
              }
              if ((uint)local_6b8 != 2) {
                *(int **)(puVar27 + -0x10) = &local_684;
                goto LAB_00407d1a;
              }
              *(int **)(puVar27 + -0x10) = &local_684;
              *(ulong *)(puVar27 + -0x18) = uVar19;
LAB_00408126:
              *(ulong *)(puVar27 + -0x20) = (ulong)local_67c;
LAB_0040812d:
              uVar4 = local_680;
              puVar14 = local_6b0;
              *(undefined8 *)(puVar27 + -0x28) = 0x408151;
              iVar10 = __snprintf_chk((undefined *)((long)puVar13 + (long)__n),uVar11,1,
                                      0xffffffffffffffff,puVar14,uVar4);
LAB_00407c00:
              if (local_684 < 0) goto LAB_00407d4e;
LAB_00407c0e:
              if (((ulong)(long)local_684 < uVar11) &&
                 (((undefined *)((long)local_684 + (long)local_6d0))[(long)__n] != '\0'))
              goto LAB_0040809c;
              if (local_684 < iVar10) {
LAB_00407c28:
                local_684 = iVar10;
              }
              puVar24 = local_6d0;
              puVar20 = local_6d0;
              if (uVar11 <= local_684 + 1) {
                if (0x7ffffffe < uVar12) {
                  if ((local_6d0 != local_690) && (local_6d0 != (undefined2 *)0x0)) {
                    *(undefined8 *)(puVar27 + -8) = 0x408436;
                    free(puVar24);
                  }
                  puVar31 = local_6e0;
                  if (local_6e0 != (undefined *)0x0) {
                    *(undefined8 *)(puVar27 + -8) = 0x40844a;
                    free(puVar31);
                  }
                  if (local_580 != auStack_568) {
                    *(undefined8 *)(puVar27 + -8) = 0x408466;
                    free(local_580);
                  }
                  if (local_670 != auStack_668) {
                    *(undefined8 *)(puVar27 + -8) = 0x408482;
                    free(local_670);
                  }
                  *_local_6a8 = 0x4b;
                  return (undefined2 *)0x0;
                }
                puVar13 = local_6d0;
                if ((long)puVar31 < 0) {
                  if (puVar31 != (undefined *)0xffffffffffffffff) goto LAB_0040796f;
                }
                else {
                  if (CARRY8((ulong)(local_684 + 2),(ulong)__n) != false) goto LAB_0040796f;
                  puVar14 = __n + (local_684 + 2);
                  if (__n + (local_684 + 2) <= (undefined *)((long)puVar31 * 2)) {
                    puVar14 = (undefined *)((long)puVar31 * 2);
                  }
                  if (puVar31 < puVar14) {
                    puVar31 = (undefined *)((long)puVar31 * 2);
                    if ((puVar31 < puVar14) &&
                       (puVar31 = puVar14, puVar14 == (undefined *)0xffffffffffffffff))
                    goto LAB_0040796f;
                    bVar33 = local_6d0 == local_690;
                    if ((local_6d0 == (undefined2 *)0x0) || (bVar33)) {
                      *(undefined8 *)(puVar27 + -8) = 0x4080cf;
                      puVar13 = (undefined2 *)malloc((size_t)puVar31);
                      puVar24 = local_6d0;
                      puVar20 = local_6d0;
                      if (puVar13 == (undefined2 *)0x0) goto LAB_0040796f;
                      if ((__n != (undefined *)0x0) && (bVar33)) {
                        *(undefined8 *)(puVar27 + -8) = 0x4080fd;
                        puVar13 = (undefined2 *)memcpy(puVar13,puVar24,(size_t)__n);
                      }
                    }
                    else {
                      *(undefined8 *)(puVar27 + -8) = 0x407cbd;
                      puVar13 = (undefined2 *)realloc(puVar24,(size_t)puVar31);
                      puVar20 = local_6d0;
                      if (puVar13 == (undefined2 *)0x0) goto LAB_0040796f;
                    }
                  }
                }
                goto LAB_00407898;
              }
              __n = __n + local_684;
              *_local_6a8 = local_6e8._0_4_;
            }
          }
LAB_00407a67:
          _local_6a8 = (int *)puVar32[1];
          puVar32 = puVar32 + 0xb;
          puVar24 = (undefined2 *)*puVar32;
          local_6c0 = local_6c0 + 1;
          puVar14 = __n;
        } while ((int *)puVar24 == _local_6a8);
      } while( true );
    }
    puVar27 = auStack_6f8;
    if (sVar28 != 0xffffffffffffffff) {
      local_6b0 = (undefined *)malloc(sVar28);
      puVar27 = auStack_6f8;
      if (local_6b0 != (undefined *)0x0) {
        local_6e0 = local_6b0;
        puVar27 = auStack_6f8;
        goto LAB_00407434;
      }
    }
  }
  goto LAB_00407a90;
LAB_00407960:
  *(undefined8 *)(puVar27 + -8) = 0x407965;
  piVar16 = __errno_location();
  _local_6a8 = (float10)CONCAT28(auStack_6a4._4_2_,piVar16);
LAB_0040796f:
  if ((puVar20 != local_690) && (puVar20 != (undefined2 *)0x0)) {
LAB_00407b88:
    *(undefined8 *)(puVar27 + -8) = 0x407b90;
    free(puVar20);
  }
  puVar31 = local_6e0;
  if (local_6e0 != (undefined *)0x0) {
    *(undefined8 *)(puVar27 + -8) = 0x407999;
    free(puVar31);
    goto LAB_00407999;
  }
LAB_00407a90:
  *(undefined8 *)(puVar27 + -8) = 0x407a95;
  piVar16 = __errno_location();
  _local_6a8 = (float10)CONCAT28(auStack_6a4._4_2_,piVar16);
LAB_00407999:
  if (local_580 != auStack_568) {
    *(undefined8 *)(puVar27 + -8) = 0x4079b5;
    free(local_580);
  }
  if (local_670 != auStack_668) {
    *(undefined8 *)(puVar27 + -8) = 0x4079d1;
    free(local_670);
  }
  *_local_6a8 = 0xc;
  return (undefined2 *)0x0;
}


undefined8 FUN_00408e90(uint *param_1,ulong *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  unkbyte10 *pVar3;
  undefined *puVar4;
  char *pcVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  char **ppcVar9;
  
  puVar2 = (undefined4 *)param_2[1];
  if (*param_2 != 0) {
    uVar6 = 0;
    do {
      switch(*puVar2) {
      default:
        return 0xffffffff;
      case 1:
      case 2:
        uVar1 = *param_1;
        if (uVar1 < 0x30) {
          puVar8 = (undefined4 *)((ulong)uVar1 + *(long *)(param_1 + 4));
          *param_1 = uVar1 + 8;
        }
        else {
          puVar8 = *(undefined4 **)(param_1 + 2);
          *(undefined4 **)(param_1 + 2) = puVar8 + 2;
        }
        *(char *)(puVar2 + 4) = (char)*puVar8;
        break;
      case 3:
      case 4:
        uVar1 = *param_1;
        if (uVar1 < 0x30) {
          puVar8 = (undefined4 *)((ulong)uVar1 + *(long *)(param_1 + 4));
          *param_1 = uVar1 + 8;
        }
        else {
          puVar8 = *(undefined4 **)(param_1 + 2);
          *(undefined4 **)(param_1 + 2) = puVar8 + 2;
        }
        *(short *)(puVar2 + 4) = (short)*puVar8;
        break;
      case 5:
      case 6:
      case 0xd:
      case 0xe:
        uVar1 = *param_1;
        if (uVar1 < 0x30) {
          puVar8 = (undefined4 *)((ulong)uVar1 + *(long *)(param_1 + 4));
          *param_1 = uVar1 + 8;
        }
        else {
          puVar8 = *(undefined4 **)(param_1 + 2);
          *(undefined4 **)(param_1 + 2) = puVar8 + 2;
        }
        puVar2[4] = *puVar8;
        break;
      case 7:
      case 8:
      case 9:
      case 10:
      case 0x11:
      case 0x12:
      case 0x13:
      case 0x14:
      case 0x15:
      case 0x16:
        uVar1 = *param_1;
        if (uVar1 < 0x30) {
          puVar7 = (undefined8 *)((ulong)uVar1 + *(long *)(param_1 + 4));
          *param_1 = uVar1 + 8;
        }
        else {
          puVar7 = *(undefined8 **)(param_1 + 2);
          *(undefined8 **)(param_1 + 2) = puVar7 + 1;
        }
        *(undefined8 *)(puVar2 + 4) = *puVar7;
        break;
      case 0xb:
        uVar1 = param_1[1];
        if (uVar1 < 0xb0) {
          puVar7 = (undefined8 *)((ulong)uVar1 + *(long *)(param_1 + 4));
          param_1[1] = uVar1 + 0x10;
        }
        else {
          puVar7 = *(undefined8 **)(param_1 + 2);
          *(undefined8 **)(param_1 + 2) = puVar7 + 1;
        }
        *(undefined8 *)(puVar2 + 4) = *puVar7;
        break;
      case 0xc:
        pVar3 = (unkbyte10 *)(*(long *)(param_1 + 2) + 0xfU & 0xfffffffffffffff0);
        *(long *)(param_1 + 2) = (long)pVar3 + 0x10;
        *(unkbyte10 *)(puVar2 + 4) = *pVar3;
        break;
      case 0xf:
        uVar1 = *param_1;
        if (uVar1 < 0x30) {
          ppcVar9 = (char **)((ulong)uVar1 + *(long *)(param_1 + 4));
          *param_1 = uVar1 + 8;
        }
        else {
          ppcVar9 = *(char ***)(param_1 + 2);
          *(char ***)(param_1 + 2) = ppcVar9 + 1;
        }
        pcVar5 = *ppcVar9;
        if (pcVar5 == (char *)0x0) {
          pcVar5 = "(NULL)";
        }
        *(char **)(puVar2 + 4) = pcVar5;
        break;
      case 0x10:
        uVar1 = *param_1;
        if (uVar1 < 0x30) {
          puVar7 = (undefined8 *)((ulong)uVar1 + *(long *)(param_1 + 4));
          *param_1 = uVar1 + 8;
        }
        else {
          puVar7 = *(undefined8 **)(param_1 + 2);
          *(undefined8 **)(param_1 + 2) = puVar7 + 1;
        }
        puVar4 = (undefined *)*puVar7;
        if (puVar4 == (undefined *)0x0) {
          puVar4 = &DAT_0040be40;
        }
        *(undefined **)(puVar2 + 4) = puVar4;
      }
      uVar6 = uVar6 + 1;
      puVar2 = puVar2 + 8;
    } while (uVar6 <= *param_2 && *param_2 != uVar6);
  }
  return 0;
}


undefined8 FUN_004090b0(byte *param_1,ulong *param_2,byte **param_3)

{
  ulong *puVar1;
  byte **ppbVar2;
  byte **ppbVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ulong *__dest;
  ulong uVar8;
  int *piVar9;
  byte **__dest_00;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  ulong uVar15;
  ulong uVar16;
  byte bVar17;
  byte *pbVar18;
  byte **__ptr;
  byte *pbVar19;
  ulong uVar20;
  ulong *__ptr_00;
  bool bVar21;
  ulong local_78;
  ulong local_70;
  byte *local_68;
  
  puVar1 = param_2 + 4;
  ppbVar2 = param_3 + 2;
  pbVar19 = (byte *)0x7;
  uVar8 = 0;
  *param_2 = 0;
  param_2[1] = (ulong)puVar1;
  *param_3 = (byte *)0x0;
  param_3[1] = (byte *)ppbVar2;
  local_70 = 0;
  local_78 = 0;
  local_68 = (byte *)0x0;
  __dest = puVar1;
  uVar20 = 7;
LAB_0040912b:
  do {
    pbVar11 = param_1;
    pbVar12 = (byte *)0xffffffffffffffff;
    if (*pbVar11 == 0) {
      __dest[uVar8 * 0xb] = (ulong)pbVar11;
      param_2[2] = local_78;
      param_2[3] = local_70;
      return 0;
    }
    param_1 = pbVar11 + 1;
  } while (*pbVar11 != 0x25);
  ppbVar3 = (byte **)(__dest + uVar8 * 0xb);
  *ppbVar3 = pbVar11;
  *(undefined4 *)(ppbVar3 + 2) = 0;
  ppbVar3[3] = (byte *)0x0;
  ppbVar3[4] = (byte *)0x0;
  ppbVar3[5] = (byte *)0xffffffffffffffff;
  ppbVar3[6] = (byte *)0x0;
  ppbVar3[7] = (byte *)0x0;
  ppbVar3[8] = (byte *)0xffffffffffffffff;
  ppbVar3[10] = (byte *)0xffffffffffffffff;
  bVar17 = pbVar11[1];
  pbVar11 = param_1;
  pbVar18 = (byte *)0xffffffffffffffff;
  if (9 < (byte)(bVar17 - 0x30)) {
LAB_004091f6:
    do {
      pbVar11 = param_1 + 1;
      if (bVar17 == 0x27) {
        *(uint *)(ppbVar3 + 2) = *(uint *)(ppbVar3 + 2) | 1;
      }
      else if (bVar17 == 0x2d) {
        *(uint *)(ppbVar3 + 2) = *(uint *)(ppbVar3 + 2) | 2;
      }
      else if (bVar17 == 0x2b) {
        *(uint *)(ppbVar3 + 2) = *(uint *)(ppbVar3 + 2) | 4;
      }
      else if (bVar17 == 0x20) {
        *(uint *)(ppbVar3 + 2) = *(uint *)(ppbVar3 + 2) | 8;
      }
      else if (bVar17 == 0x23) {
        *(uint *)(ppbVar3 + 2) = *(uint *)(ppbVar3 + 2) | 0x10;
      }
      else if (bVar17 == 0x30) {
        *(uint *)(ppbVar3 + 2) = *(uint *)(ppbVar3 + 2) | 0x20;
      }
      else {
        if (bVar17 != 0x49) goto LAB_00409258;
        *(uint *)(ppbVar3 + 2) = *(uint *)(ppbVar3 + 2) | 0x40;
      }
      bVar17 = *pbVar11;
      param_1 = pbVar11;
    } while( true );
  }
  do {
    bVar4 = pbVar11[1];
    pbVar11 = pbVar11 + 1;
  } while ((byte)(bVar4 - 0x30) < 10);
  pbVar18 = pbVar12;
  if (bVar4 != 0x24) goto LAB_004091f6;
  pbVar11 = (byte *)0x0;
  do {
    pbVar18 = param_1;
    pbVar14 = (byte *)0xffffffffffffffff;
    if (pbVar11 < (byte *)0x199999999999999a) {
      pbVar14 = (byte *)((long)pbVar11 * 10);
    }
    while( true ) {
      iVar6 = (int)(char)bVar17;
      bVar17 = pbVar18[1];
      pbVar11 = pbVar14 + (iVar6 + -0x30);
      param_1 = pbVar18 + 1;
      if (CARRY8((long)(iVar6 + -0x30),(ulong)pbVar14) == false) break;
      pbVar18 = param_1;
      pbVar14 = pbVar12;
      if (9 < (byte)(bVar17 - 0x30)) goto switchD_00409437_caseD_26;
    }
  } while ((byte)(bVar17 - 0x30) < 10);
  if (pbVar11 + -1 < (byte *)0xfffffffffffffffe) {
    param_1 = pbVar18 + 2;
    bVar17 = pbVar18[2];
    pbVar18 = pbVar11 + -1;
    goto LAB_004091f6;
  }
  goto switchD_00409437_caseD_26;
LAB_00409258:
  if (bVar17 != 0x2a) {
    pbVar12 = local_68;
    if ((byte)(bVar17 - 0x30) < 10) {
      ppbVar3[3] = param_1;
      pbVar14 = param_1;
      uVar8 = local_78;
      if ((byte)(*param_1 - 0x30) < 10) {
        do {
          pbVar11 = pbVar14;
          pbVar14 = pbVar11 + 1;
        } while ((byte)(pbVar11[1] - 0x30) < 10);
        pbVar11 = pbVar11 + 2;
        uVar8 = (long)pbVar14 - (long)param_1;
        if ((ulong)((long)pbVar14 - (long)param_1) <= local_78) {
          uVar8 = local_78;
        }
      }
      local_78 = uVar8;
      ppbVar3[4] = pbVar14;
      bVar17 = *pbVar14;
      param_1 = pbVar14;
    }
joined_r0x0040936a:
    uVar8 = local_70;
    local_68 = pbVar12;
    if (bVar17 != 0x2e) goto LAB_00409271;
    bVar17 = param_1[1];
    ppbVar3[6] = param_1;
    if (bVar17 != 0x2a) {
      if ((byte)(param_1[1] - 0x30) < 10) {
        do {
          pbVar11 = pbVar11 + 1;
        } while ((byte)(*pbVar11 - 0x30) < 10);
        uVar8 = (long)pbVar11 - (long)param_1;
      }
      else {
        uVar8 = 1;
      }
      ppbVar3[7] = pbVar11;
      bVar17 = *pbVar11;
      param_1 = pbVar11;
      if (uVar8 <= local_70) {
        uVar8 = local_70;
      }
      goto LAB_00409271;
    }
    pbVar11 = param_1 + 2;
    ppbVar3[7] = pbVar11;
    uVar8 = 2;
    if (1 < local_70) {
      uVar8 = local_70;
    }
    iVar6 = (int)(char)param_1[2];
    pbVar14 = pbVar11;
    if ((byte)(param_1[2] - 0x30) < 10) {
      do {
        bVar17 = pbVar14[1];
        pbVar14 = pbVar14 + 1;
      } while ((byte)(bVar17 - 0x30) < 10);
      if (bVar17 != 0x24) goto LAB_004093af;
      uVar16 = 0;
      do {
        pbVar12 = pbVar11;
        uVar15 = 0xffffffffffffffff;
        if (uVar16 < 0x199999999999999a) {
          uVar15 = uVar16 * 10;
        }
        while( true ) {
          iVar7 = iVar6 + -0x30;
          uVar16 = uVar15 + (long)iVar7;
          pbVar11 = pbVar12 + 1;
          iVar6 = (int)(char)*pbVar11;
          bVar17 = *pbVar11 - 0x30;
          if (CARRY8(uVar15,(long)iVar7) == false) break;
          pbVar12 = pbVar11;
          uVar15 = 0xffffffffffffffff;
          if (9 < bVar17) goto switchD_00409437_caseD_26;
        }
      } while (bVar17 < 10);
      pbVar14 = (byte *)(uVar16 - 1);
      if ((byte *)0xfffffffffffffffd < pbVar14) goto switchD_00409437_caseD_26;
      ppbVar3[8] = pbVar14;
      pbVar11 = pbVar12 + 2;
    }
    else {
LAB_004093af:
      pbVar14 = ppbVar3[8];
      if (ppbVar3[8] == (byte *)0xffffffffffffffff) {
        local_68 = pbVar12 + 1;
        ppbVar3[8] = pbVar12;
        pbVar14 = pbVar12;
        if (pbVar12 == (byte *)0xffffffffffffffff) goto switchD_00409437_caseD_26;
      }
    }
    __ptr = (byte **)param_3[1];
    if (pbVar14 < pbVar19) {
      pbVar12 = *param_3;
      __dest_00 = __ptr;
LAB_004093ce:
      if (pbVar12 <= pbVar14) {
        do {
          pbVar12 = pbVar12 + 1;
          *(undefined4 *)(__dest_00 + (long)pbVar12 * 4 + -4) = 0;
        } while (pbVar12 <= pbVar14);
        *param_3 = pbVar12;
      }
      iVar6 = *(int *)(__dest_00 + (long)pbVar14 * 4);
      param_1 = pbVar11;
      if (iVar6 == 0) {
        *(undefined4 *)(__dest_00 + (long)pbVar14 * 4) = 5;
        bVar17 = *pbVar11;
LAB_00409271:
        local_70 = uVar8;
        uVar5 = 0;
        do {
          param_1 = param_1 + 1;
          if (bVar17 == 0x68) {
            uVar5 = uVar5 | 1 << ((byte)uVar5 & 1);
          }
          else if (bVar17 == 0x4c) {
            uVar5 = uVar5 | 4;
          }
          else {
            if ((((bVar17 != 0x6c) && (bVar17 != 0x6a)) && ((bVar17 & 0xdf) != 0x5a)) &&
               (bVar17 != 0x74)) goto code_r0x00409434;
            uVar5 = uVar5 + 8;
          }
          bVar17 = *param_1;
        } while( true );
      }
      if (iVar6 == 5) {
        bVar17 = *pbVar11;
        goto LAB_00409271;
      }
      goto LAB_0040987c;
    }
    pbVar19 = (byte *)((long)pbVar19 * 2);
    if (pbVar19 <= pbVar14) {
      pbVar19 = pbVar14 + 1;
    }
    if (pbVar19 < (byte *)0x800000000000000) {
      if (ppbVar2 == __ptr) {
        __dest_00 = (byte **)malloc((long)pbVar19 << 5);
        if (__dest_00 == (byte **)0x0) goto LAB_00409a69;
        pbVar12 = *param_3;
        __ptr = ppbVar2;
LAB_00409d1b:
        memcpy(__dest_00,__ptr,(long)pbVar12 << 5);
        pbVar12 = *param_3;
      }
      else {
        __dest_00 = (byte **)realloc(__ptr,(long)pbVar19 << 5);
        __ptr = (byte **)param_3[1];
        if (__dest_00 == (byte **)0x0) goto LAB_00409a50;
        pbVar12 = *param_3;
        if (ppbVar2 == __ptr) goto LAB_00409d1b;
      }
      param_3[1] = (byte *)__dest_00;
      goto LAB_004093ce;
    }
    goto LAB_00409a50;
  }
  ppbVar3[3] = param_1;
  ppbVar3[4] = pbVar11;
  uVar8 = 1;
  if (local_78 != 0) {
    uVar8 = local_78;
  }
  iVar6 = (int)(char)param_1[1];
  pbVar14 = pbVar11;
  if ((byte)(param_1[1] - 0x30) < 10) {
    do {
      bVar17 = pbVar14[1];
      pbVar14 = pbVar14 + 1;
    } while ((byte)(bVar17 - 0x30) < 10);
    if (bVar17 != 0x24) goto LAB_004092fd;
    pbVar14 = (byte *)0x0;
    do {
      pbVar10 = pbVar11;
      pbVar13 = (byte *)0xffffffffffffffff;
      if (pbVar14 < (byte *)0x199999999999999a) {
        pbVar13 = (byte *)((long)pbVar14 * 10);
      }
      while( true ) {
        iVar7 = iVar6 + -0x30;
        pbVar14 = pbVar13 + iVar7;
        iVar6 = (int)(char)pbVar10[1];
        pbVar11 = pbVar10 + 1;
        bVar17 = pbVar10[1] - 0x30;
        if (CARRY8((ulong)pbVar13,(long)iVar7) == false) break;
        pbVar10 = pbVar11;
        pbVar13 = pbVar12;
        if (9 < bVar17) goto switchD_00409437_caseD_26;
      }
    } while (bVar17 < 10);
    pbVar14 = pbVar14 + -1;
    if ((byte *)0xfffffffffffffffd < pbVar14) goto switchD_00409437_caseD_26;
    ppbVar3[5] = pbVar14;
    pbVar11 = pbVar10 + 2;
  }
  else {
LAB_004092fd:
    pbVar14 = ppbVar3[5];
    if (ppbVar3[5] == (byte *)0xffffffffffffffff) {
      ppbVar3[5] = local_68;
      bVar21 = local_68 == (byte *)0xffffffffffffffff;
      pbVar14 = local_68;
      local_68 = local_68 + 1;
      if (bVar21) goto switchD_00409437_caseD_26;
    }
  }
  __ptr = (byte **)param_3[1];
  if (pbVar14 < pbVar19) {
    pbVar12 = *param_3;
    __dest_00 = __ptr;
LAB_0040931c:
    if (pbVar12 <= pbVar14) {
      do {
        pbVar12 = pbVar12 + 1;
        *(undefined4 *)(__dest_00 + (long)pbVar12 * 4 + -4) = 0;
      } while (pbVar12 <= pbVar14);
      *param_3 = pbVar12;
    }
    iVar6 = *(int *)(__dest_00 + (long)pbVar14 * 4);
    param_1 = pbVar11;
    local_78 = uVar8;
    pbVar12 = local_68;
    if (iVar6 == 0) {
      *(undefined4 *)(__dest_00 + (long)pbVar14 * 4) = 5;
      bVar17 = *pbVar11;
      pbVar11 = pbVar11 + 1;
    }
    else {
      if (iVar6 != 5) goto LAB_0040987c;
      bVar17 = *pbVar11;
      pbVar11 = pbVar11 + 1;
    }
    goto joined_r0x0040936a;
  }
  pbVar19 = (byte *)((long)pbVar19 * 2);
  if (pbVar19 <= pbVar14) {
    pbVar19 = pbVar14 + 1;
  }
  if ((byte *)0x7ffffffffffffff < pbVar19) goto LAB_00409a50;
  if (ppbVar2 != __ptr) {
    __dest_00 = (byte **)realloc(__ptr,(long)pbVar19 << 5);
    __ptr = (byte **)param_3[1];
    if (__dest_00 != (byte **)0x0) {
      pbVar12 = *param_3;
      if (ppbVar2 == __ptr) goto LAB_00409b69;
      goto LAB_0040963d;
    }
    goto LAB_00409a50;
  }
  __dest_00 = (byte **)malloc((long)pbVar19 << 5);
  if (__dest_00 != (byte **)0x0) {
    pbVar12 = *param_3;
    __ptr = ppbVar2;
LAB_00409b69:
    memcpy(__dest_00,__ptr,(long)pbVar12 << 5);
    pbVar12 = *param_3;
LAB_0040963d:
    param_3[1] = (byte *)__dest_00;
    goto LAB_0040931c;
  }
  goto LAB_00409a69;
code_r0x00409434:
  switch(bVar17) {
  case 0x25:
    goto switchD_00409437_caseD_25;
  default:
    goto switchD_00409437_caseD_26;
  case 0x41:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x61:
  case 0x65:
  case 0x66:
  case 0x67:
    iVar6 = 0xc;
    if ((int)uVar5 < 0x10) {
      iVar6 = ((uVar5 & 4) != 0) + 0xb;
    }
    break;
  case 0x43:
    iVar6 = 0xe;
    bVar17 = 99;
    break;
  case 0x53:
    iVar6 = 0x10;
    bVar17 = 0x73;
    break;
  case 0x58:
  case 0x6f:
  case 0x75:
  case 0x78:
    iVar6 = 10;
    if (((((int)uVar5 < 0x10) && ((uVar5 & 4) == 0)) && (iVar6 = 8, (int)uVar5 < 8)) &&
       (iVar6 = 2, (uVar5 & 2) == 0)) {
      iVar6 = (-(uint)((uVar5 & 1) == 0) & 2) + 4;
    }
    break;
  case 99:
    iVar6 = (7 < (int)uVar5) + 0xd;
    break;
  case 100:
  case 0x69:
    iVar6 = 9;
    if ((((int)uVar5 < 0x10) && ((uVar5 & 4) == 0)) &&
       ((iVar6 = 7, (int)uVar5 < 8 && (iVar6 = 1, (uVar5 & 2) == 0)))) {
      iVar6 = (-(uint)((uVar5 & 1) == 0) & 2) + 3;
    }
    break;
  case 0x6e:
    iVar6 = 0x16;
    if ((((int)uVar5 < 0x10) && ((uVar5 & 4) == 0)) &&
       ((iVar6 = 0x15, (int)uVar5 < 8 && (iVar6 = 0x12, (uVar5 & 2) == 0)))) {
      iVar6 = ((uVar5 & 1) == 0) + 0x13;
    }
    break;
  case 0x70:
    iVar6 = 0x11;
    break;
  case 0x73:
    iVar6 = (7 < (int)uVar5) + 0xf;
  }
  if (pbVar18 == (byte *)0xffffffffffffffff) {
    ppbVar3[10] = local_68;
    bVar21 = local_68 == (byte *)0xffffffffffffffff;
    pbVar18 = local_68;
    local_68 = local_68 + 1;
    if (bVar21) {
switchD_00409437_caseD_26:
      __dest_00 = (byte **)param_3[1];
      goto LAB_0040987c;
    }
  }
  else {
    ppbVar3[10] = pbVar18;
  }
  __ptr = (byte **)param_3[1];
  __dest_00 = __ptr;
  if (pbVar18 < pbVar19) {
LAB_00409465:
    pbVar11 = *param_3;
    if (pbVar11 <= pbVar18) {
      do {
        pbVar11 = pbVar11 + 1;
        *(undefined4 *)(__dest_00 + (long)pbVar11 * 4 + -4) = 0;
      } while (pbVar11 <= pbVar18);
      *param_3 = pbVar11;
    }
    iVar7 = *(int *)(__dest_00 + (long)pbVar18 * 4);
    if (iVar7 == 0) {
      *(int *)(__dest_00 + (long)pbVar18 * 4) = iVar6;
    }
    else if (iVar7 != iVar6) {
LAB_0040987c:
      if (ppbVar2 != __dest_00) {
        free(__dest_00);
      }
      if (puVar1 != (ulong *)param_2[1]) {
        free((ulong *)param_2[1]);
      }
      piVar9 = __errno_location();
      *piVar9 = 0x16;
      return 0xffffffff;
    }
switchD_00409437_caseD_25:
    *(byte *)(ppbVar3 + 9) = bVar17;
    uVar8 = *param_2;
    ppbVar3[1] = param_1;
    uVar8 = uVar8 + 1;
    *param_2 = uVar8;
    if (uVar8 < uVar20) {
      __dest = (ulong *)param_2[1];
      goto LAB_0040912b;
    }
    if (((long)uVar20 < 0) || (0x2e8ba2e8ba2e8ba < uVar20 * 2)) {
LAB_00409da3:
      __ptr = (byte **)param_3[1];
      goto LAB_00409a50;
    }
    __ptr_00 = (ulong *)param_2[1];
    if (puVar1 != __ptr_00) {
      __dest = (ulong *)realloc(__ptr_00,uVar20 * 0xb0);
      if (__dest == (ulong *)0x0) goto LAB_00409da3;
      __ptr_00 = (ulong *)param_2[1];
      uVar8 = *param_2;
      if (puVar1 != __ptr_00) goto LAB_0040953f;
LAB_00409664:
      __dest = (ulong *)memcpy(__dest,__ptr_00,uVar8 * 0x58);
      uVar8 = *param_2;
LAB_0040953f:
      param_2[1] = (ulong)__dest;
      uVar20 = uVar20 * 2;
      goto LAB_0040912b;
    }
    __dest = (ulong *)malloc(uVar20 * 0xb0);
    if (__dest != (ulong *)0x0) goto LAB_00409664;
    __ptr = (byte **)param_3[1];
    if (ppbVar2 == __ptr) goto LAB_00409a79;
  }
  else {
    pbVar19 = (byte *)((long)pbVar19 * 2);
    if (pbVar19 <= pbVar18) {
      pbVar19 = pbVar18 + 1;
    }
    if (pbVar19 < (byte *)0x800000000000000) {
      if (ppbVar2 == __ptr) {
        __dest_00 = (byte **)malloc((long)pbVar19 << 5);
        if (__dest_00 == (byte **)0x0) goto LAB_00409a69;
LAB_00409a06:
        memcpy(__dest_00,__ptr,(long)*param_3 << 5);
LAB_0040994b:
        param_3[1] = (byte *)__dest_00;
        goto LAB_00409465;
      }
      __dest_00 = (byte **)realloc(__ptr,(long)pbVar19 << 5);
      if (__dest_00 != (byte **)0x0) {
        __ptr = ppbVar2;
        if (ppbVar2 == (byte **)param_3[1]) goto LAB_00409a06;
        goto LAB_0040994b;
      }
      goto LAB_00409da3;
    }
LAB_00409a50:
    if (ppbVar2 == __ptr) goto LAB_00409a69;
  }
  free(__ptr);
LAB_00409a69:
  if (puVar1 != (ulong *)param_2[1]) {
    free((ulong *)param_2[1]);
  }
LAB_00409a79:
  piVar9 = __errno_location();
  *piVar9 = 0xc;
  return 0xffffffff;
}


/* WARNING: Removing unreachable block (ram,0x00409df3) */
/* WARNING: Removing unreachable block (ram,0x00409df8) */

void FUN_00409dc0(void)

{
  __DT_INIT();
  return;
}


void FUN_00409e20(void)

{
  return;
}


void FUN_00409e30(undefined8 param_1)

{
  __cxa_atexit(param_1,0,DAT_0060e268);
  return;
}


undefined8 FUN_00409e48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code **ppcVar1;
  
  for (ppcVar1 = (code **)&DAT_0060de30; *ppcVar1 != (code *)0xffffffffffffffff;
      ppcVar1 = ppcVar1 + -1) {
    (**ppcVar1)();
  }
  return param_3;
}


void __DT_FINI(void)

{
  FUN_00402071();
  return;
}

