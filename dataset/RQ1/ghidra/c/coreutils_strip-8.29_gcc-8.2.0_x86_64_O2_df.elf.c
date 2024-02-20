
void FUN_004023a0(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_004023a5(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_004023aa(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_004023af(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void switchD_004083b0::caseD_b(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_004023b9(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_004023be(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_004023c3(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_004023c8(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void switchD_0040a04a::caseD_0(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_004023d2(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void switchD_0040eabc::caseD_5(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004023e0(int param_1,undefined8 *param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  char **ppcVar6;
  undefined8 uVar7;
  char *pcVar8;
  int *piVar9;
  char *pcVar10;
  char *__s1;
  size_t sVar11;
  byte *__s2;
  void *__ptr;
  char **ppcVar12;
  code *pcVar13;
  ulong uVar14;
  code *pcVar15;
  undefined *puVar16;
  long lVar17;
  long extraout_RDX;
  long extraout_RDX_00;
  ulong extraout_RDX_01;
  undefined8 extraout_RDX_02;
  long extraout_RDX_03;
  undefined8 extraout_RDX_04;
  undefined8 extraout_RDX_05;
  undefined8 extraout_RDX_06;
  long extraout_RDX_07;
  undefined8 extraout_RDX_08;
  undefined8 extraout_RDX_09;
  char *pcVar18;
  char **ppcVar19;
  char **ppcVar20;
  ulong uVar21;
  undefined4 uVar22;
  byte *pbVar23;
  char cVar24;
  byte *pbVar25;
  undefined8 *puVar26;
  undefined8 *in_R10;
  long lVar27;
  ulong uVar28;
  undefined8 *puVar29;
  char **ppcVar30;
  bool bVar31;
  bool bVar32;
  byte bVar33;
  undefined auVar34 [16];
  undefined8 *local_158;
  char *local_150;
  char *local_138;
  size_t local_130;
  long local_128;
  long local_120;
  char **local_118;
  char **local_108;
  long local_f8;
  char *local_f0;
  char *local_e8 [4];
  undefined local_c8 [152];
  
  bVar33 = 0;
  bVar31 = false;
  FUN_004081c0(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils",
                 "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale"
                );
  textdomain("coreutils");
  FUN_00410f70(FUN_004058f0);
  DAT_006176d0 = (char **)0x0;
  DAT_006176c8 = (char **)0x0;
  DAT_006176ee = '\0';
  DAT_006176ec = '\0';
  DAT_006176e8 = 0xffffffff;
  DAT_006176b9 = '\0';
  DAT_006176dd = '\0';
  DAT_006176d8 = 0;
  DAT_006176b8 = '\0';
  _DAT_00617680 = 1;
  uVar5 = dcgettext(0,"options %s and %s are mutually exclusive",5);
  while( true ) {
    local_c8._0_8_ = (char *)CONCAT44(local_c8._4_4_,0xffffffff);
    iVar3 = FUN_0040c380(param_1,param_2,"aB:iF:hHklmPTt:vx:",&PTR_DAT_00411380,local_c8);
    pcVar8 = DAT_006178a8;
    if (iVar3 == -1) break;
    if (iVar3 == 0x69) {
      if (DAT_00617660 == 4) {
LAB_004038fa:
        puVar16 = &DAT_00411100;
LAB_004038b4:
        error(0,0,uVar5,puVar16,"--output");
LAB_00402741:
        do {
          iVar3 = FUN_00404930(1);
LAB_00402750:
        } while (iVar3 != -0x83);
        FUN_0040a420(stdout,&DAT_0041103a,"GNU coreutils",PTR_DAT_00617560,"Torbjorn Granlund",
                     "David MacKenzie","Paul Eggert",0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      DAT_00617660 = 1;
    }
    else if (iVar3 < 0x6a) {
      if (iVar3 == 0x48) {
        DAT_006176e8 = 0x90;
        DAT_006176e0 = 1;
      }
      else if (iVar3 < 0x49) {
        if (iVar3 == -0x82) {
          FUN_00404930(0);
          goto switchD_00402919_caseD_5;
        }
        if (iVar3 < -0x81) goto LAB_00402750;
        if (iVar3 != 0x42) {
          if (iVar3 == 0x46) goto LAB_00402629;
          goto LAB_00402741;
        }
        iVar3 = FUN_00407980(DAT_006178a8,&DAT_006176e8,&DAT_006176e0);
        if (iVar3 != 0) {
          iVar3 = FUN_0040a820(iVar3,(ulong)local_c8._0_8_ & 0xffffffff,0x42,&PTR_DAT_00411380,
                               DAT_006178a8);
          goto LAB_004026e0;
        }
      }
      else if (iVar3 == 0x54) {
        if (DAT_00617660 == 4) goto LAB_004038a9;
        DAT_006176b9 = '\x01';
      }
      else if (iVar3 < 0x55) {
        if (iVar3 != 0x50) goto LAB_00402741;
        if (DAT_00617660 == 4) {
          puVar16 = &DAT_00411106;
          goto LAB_004038b4;
        }
        bVar31 = true;
      }
      else if (iVar3 == 0x61) {
        DAT_006176ee = '\x01';
      }
      else {
        if (iVar3 != 0x68) goto LAB_00402741;
        DAT_006176e8 = 0xb0;
        DAT_006176e0 = 1;
      }
    }
    else if (iVar3 != 0x76) {
      if (iVar3 < 0x77) {
        if (iVar3 == 0x6c) {
          DAT_006176ed = '\x01';
        }
        else if (iVar3 < 0x6d) {
          if (iVar3 != 0x6b) goto LAB_00402741;
          DAT_006176e8 = 0;
          DAT_006176e0 = 0x400;
        }
        else if (iVar3 == 0x6d) {
          DAT_006176e8 = 0;
          DAT_006176e0 = 0x100000;
        }
        else {
          if (iVar3 != 0x74) goto LAB_00402741;
LAB_00402629:
          ppcVar6 = (char **)FUN_0040a560(0x10);
          *ppcVar6 = pcVar8;
          ppcVar6[1] = (char *)DAT_006176d0;
          DAT_006176d0 = ppcVar6;
        }
      }
      else if (iVar3 == 0x81) {
        DAT_006176dc = '\x01';
      }
      else if (iVar3 < 0x82) {
        if (iVar3 == 0x78) {
          ppcVar6 = (char **)FUN_0040a560(0x10);
          *ppcVar6 = pcVar8;
          ppcVar6[1] = (char *)DAT_006176c8;
          DAT_006176c8 = ppcVar6;
        }
        else {
          if (iVar3 != 0x80) goto LAB_00402741;
          DAT_006176dc = '\0';
        }
      }
      else if (iVar3 == 0x82) {
        DAT_006176b8 = '\x01';
      }
      else {
LAB_004026e0:
        if (iVar3 != 0x83) goto LAB_00402741;
        if (DAT_00617660 == 1) goto LAB_004038fa;
        if ((DAT_00617660 == 0) && (bVar31)) {
          error(0,0,uVar5,&DAT_00411106,"--output");
          FUN_00404930(1);
          goto LAB_004038e8;
        }
        if (DAT_006176b9 != '\0') {
LAB_004038a9:
          puVar16 = &DAT_00411103;
          goto LAB_004038b4;
        }
        DAT_00617660 = 4;
        if (DAT_006178a8 != (char *)0x0) {
          FUN_00404d60();
        }
      }
    }
  }
  if (DAT_006176e8 == 0xffffffff) {
    if (bVar31) {
      DAT_006176e8 = 0;
      pcVar8 = getenv("POSIXLY_CORRECT");
      DAT_006176e0 = (ulong)(-(uint)(pcVar8 == (char *)0x0) & 0x200) + 0x200;
    }
    else {
      pcVar8 = getenv("DF_BLOCK_SIZE");
      FUN_00407980(pcVar8,&DAT_006176e8,&DAT_006176e0);
    }
  }
  if ((DAT_00617660 != 1) && (DAT_00617660 != 4)) {
    if ((DAT_006176e8 & 0x10) == 0) {
      if (bVar31) {
        DAT_00617660 = 3;
      }
    }
    else {
      DAT_00617660 = 2;
    }
  }
  bVar31 = false;
  ppcVar6 = DAT_006176d0;
  if (DAT_006176d0 != (char **)0x0) {
    do {
      if (DAT_006176c8 != (char **)0x0) {
        pcVar8 = *ppcVar6;
        ppcVar19 = DAT_006176c8;
        do {
          iVar3 = strcmp(pcVar8,*ppcVar19);
          if (iVar3 == 0) {
            bVar31 = true;
            uVar5 = FUN_00409de0(pcVar8);
            uVar7 = dcgettext(0,"file system type %s both selected and excluded",5);
            error(0,0,uVar7,uVar5);
            break;
          }
          ppcVar19 = (char **)ppcVar19[1];
        } while (ppcVar19 != (char **)0x0);
      }
      ppcVar6 = (char **)ppcVar6[1];
    } while (ppcVar6 != (char **)0x0);
    if (bVar31) {
      return 1;
    }
  }
  if ((int)DAT_006175e0 < param_1) {
    local_f8 = FUN_0040a560((long)(int)(param_1 - DAT_006175e0) * 0x90);
    for (lVar27 = (long)(int)DAT_006175e0; iVar3 = (int)lVar27, iVar3 < param_1; lVar27 = lVar27 + 1
        ) {
      iVar4 = __xstat(1,(char *)param_2[lVar27],
                      (stat *)((long)(int)(iVar3 - DAT_006175e0) * 0x90 + local_f8));
      if (iVar4 == 0) {
        if (((*(uint *)(local_f8 + 0x18 + (long)(int)(iVar3 - DAT_006175e0) * 0x90) & 0xf000) !=
             0x1000) && (iVar3 = open((char *)param_2[lVar27],0x100), -1 < iVar3)) {
          close(iVar3);
        }
      }
      else {
        uVar5 = FUN_00409c60(0,3,param_2[lVar27]);
        piVar9 = __errno_location();
        error(0,*piVar9,&DAT_00413b3f,uVar5);
        DAT_006176d8 = 1;
        param_2[lVar27] = 0;
      }
    }
  }
  cVar24 = '\x01';
  if ((((DAT_006176d0 == (char **)0x0) && (DAT_006176c8 == (char **)0x0)) && (DAT_006176b9 == '\0'))
     && (DAT_0061737c == '\0')) {
    cVar24 = DAT_006176ed;
  }
  DAT_006176c0 = (char **)FUN_0040c670(cVar24);
  if (DAT_006176c0 == (char **)0x0) {
    if ((((int)DAT_006175e0 < param_1) && (DAT_006176ee == '\0')) &&
       ((DAT_006176ed == '\0' && ((DAT_006176d0 == (char **)0x0 && (DAT_006176c8 == (char **)0x0))))
       )) {
      uVar22 = 0;
      pcVar8 = (char *)dcgettext(0,"Warning: ",5);
    }
    else {
      uVar22 = 1;
      pcVar8 = "";
    }
    uVar5 = dcgettext(0,"cannot read table of mounted file systems",5);
    piVar9 = __errno_location();
    error(uVar22,*piVar9,&DAT_0041115f,pcVar8,uVar5);
  }
  if (DAT_006176dc != '\0') {
    sync();
  }
  switch(DAT_00617660) {
  case 0:
    FUN_00403e20(0,0);
    if (DAT_006176b9 != '\0') {
      FUN_00403e20(1,0);
    }
    FUN_00403e20(2,0);
    FUN_00403e20(3,0);
    FUN_00403e20(4,0);
    pcVar8 = (char *)0x0;
    break;
  case 1:
    FUN_00403e20(0,0);
    if (DAT_006176b9 != '\0') {
      FUN_00403e20(1,0);
    }
    FUN_00403e20(6,0);
    FUN_00403e20(7,0);
    FUN_00403e20(8,0);
    FUN_00403e20(9,0);
    FUN_00403e20(10,0);
    goto LAB_00402ba2;
  case 2:
    FUN_00403e20(0,0);
    if (DAT_006176b9 != '\0') {
      FUN_00403e20(1,0);
    }
    FUN_00403e20(2,&DAT_004110c8);
    FUN_00403e20(3,0);
    FUN_00403e20(4,"Avail");
    pcVar8 = (char *)0x0;
    break;
  case 3:
    FUN_00403e20(0,0);
    if (DAT_006176b9 != '\0') {
      FUN_00403e20(1,0);
    }
    FUN_00403e20(2,0);
    FUN_00403e20(3,0);
    FUN_00403e20(4,0);
    pcVar8 = "Capacity";
    break;
  case 4:
    if (DAT_00617650 == 0) {
      FUN_00404d60("source,fstype,itotal,iused,iavail,ipcent,size,used,avail,pcent,file,target");
    }
    goto LAB_00402ba2;
  default:
switchD_00402919_caseD_5:
                    /* WARNING: Subroutine does not return */
    __assert_fail("!\"invalid header_mode\"","src/df.c",0x1f0,"get_field_list");
  }
  FUN_00403e20(5,pcVar8);
  FUN_00403e20(10,0);
LAB_00402ba2:
  FUN_00403ba0();
  cVar24 = DAT_006176ee;
  local_158 = param_2;
  if (param_1 <= (int)DAT_006175e0) {
    iVar3 = 0;
    for (ppcVar6 = DAT_006176c0; ppcVar6 != (char **)0x0; ppcVar6 = (char **)ppcVar6[6]) {
      iVar3 = iVar3 + 1;
    }
    pcVar15 = FUN_00403a00;
    auVar34 = FUN_00406460((long)iVar3,0,FUN_004039f0,FUN_00403a00,FUN_00403ac0);
    DAT_006176f0 = SUB168(auVar34,0);
    if (DAT_006176f0 == 0) {
LAB_004038e8:
                    /* WARNING: Subroutine does not return */
      FUN_0040a7b0();
    }
    ppcVar19 = (char **)0x0;
    ppcVar20 = DAT_006176c0;
    do {
      if (ppcVar20 == (char **)0x0) {
        DAT_006176f0 = SUB168(auVar34,0);
        ppcVar20 = DAT_006176c0;
        if (cVar24 == '\0') {
          DAT_006176c0 = (char **)0x0;
          while (ppcVar19 != (char **)0x0) {
            ppcVar20 = (char **)ppcVar19[1];
            ppcVar19 = (char **)ppcVar19[2];
            cVar24 = '\x01';
            ppcVar20[6] = (char *)ppcVar6;
            ppcVar6 = ppcVar20;
          }
          if (cVar24 != '\0') {
            DAT_006176c0 = ppcVar6;
          }
          FUN_004066a0(DAT_006176f0);
          auVar34 = ZEXT816(extraout_RDX_01) << 0x40;
          ppcVar20 = DAT_006176c0;
        }
        do {
          DAT_006176f0 = SUB168(auVar34,0);
          if (ppcVar20 == (char **)0x0) goto LAB_0040318e;
          pcVar13 = (code *)0x0;
          FUN_00403f10(*ppcVar20,ppcVar20[1],0,0,ppcVar20[3],*(byte *)(ppcVar20 + 5) & 1,
                       *(byte *)(ppcVar20 + 5) >> 1 & 1,0,1,pcVar15);
          auVar34 = CONCAT88(extraout_RDX_02,DAT_006176f0);
          pcVar15 = pcVar13;
          ppcVar20 = (char **)ppcVar20[6];
        } while( true );
      }
      if ((((*(byte *)(ppcVar20 + 5) & 2) == 0) || (DAT_006176ed == '\0')) &&
         (((*(byte *)(ppcVar20 + 5) & 1) == 0 || ((DAT_006176ee != '\0' || (DAT_006176ec != '\0'))))
         )) {
        pcVar8 = ppcVar20[3];
        cVar2 = FUN_00403a10(pcVar8);
        if ((cVar2 == '\0') ||
           ((cVar2 = FUN_00403a60(pcVar8), cVar2 != '\0' ||
            (iVar3 = __xstat(1,ppcVar20[1],(stat *)local_c8), iVar3 == -1)))) goto LAB_00403570;
        if (DAT_006176f0 == 0) goto LAB_0040357c;
        local_e8[0] = local_c8._0_8_;
        lVar27 = FUN_004061f0(DAT_006176f0,local_e8);
        if (lVar27 == 0) goto LAB_0040357c;
        ppcVar12 = *(char ***)(lVar27 + 8);
        if ((ppcVar12[2] == (char *)0x0) || (ppcVar20[2] == (char *)0x0)) {
          local_158 = (undefined8 *)((ulong)local_158 & 0xffffffff00000000);
        }
        else {
          uVar28 = 0xffffffffffffffff;
          pcVar8 = ppcVar12[2];
          do {
            if (uVar28 == 0) break;
            uVar28 = uVar28 - 1;
            cVar2 = *pcVar8;
            pcVar8 = pcVar8 + (ulong)bVar33 * -2 + 1;
          } while (cVar2 != '\0');
          pcVar15 = (code *)0xffffffffffffffff;
          pcVar8 = ppcVar20[2];
          do {
            if (pcVar15 == (code *)0x0) break;
            pcVar15 = pcVar15 + -1;
            cVar2 = *pcVar8;
            pcVar8 = pcVar8 + (ulong)bVar33 * -2 + 1;
          } while (cVar2 != '\0');
          local_158 = (undefined8 *)
                      ((ulong)local_158 & 0xffffffff00000000 |
                      (ulong)(~uVar28 - 1 < ~(ulong)pcVar15 - 1));
        }
        pcVar8 = *ppcVar20;
        if ((((DAT_006176b8 == '\0') && ((*(byte *)(ppcVar20 + 5) & 2) != 0)) &&
            ((*(byte *)(ppcVar12 + 5) & 2) != 0)) && (iVar3 = strcmp(*ppcVar12,pcVar8), iVar3 != 0))
        goto LAB_0040357c;
        pcVar10 = strchr(pcVar8,0x2f);
        uVar5 = extraout_RDX_04;
        if ((pcVar10 == (char *)0x0) ||
           (pcVar10 = strchr(*ppcVar12,0x2f), uVar5 = extraout_RDX_05, pcVar10 != (char *)0x0)) {
          puVar29 = (undefined8 *)ppcVar12[1];
          uVar28 = 0xffffffffffffffff;
          pcVar10 = ppcVar20[1];
          puVar26 = puVar29;
          do {
            if (uVar28 == 0) break;
            uVar28 = uVar28 - 1;
            cVar2 = *(char *)puVar26;
            puVar26 = (undefined8 *)((long)puVar26 + (ulong)bVar33 * -2 + 1);
          } while (cVar2 != '\0');
          pcVar15 = (code *)0xffffffffffffffff;
          pcVar18 = pcVar10;
          do {
            if (pcVar15 == (code *)0x0) break;
            pcVar15 = pcVar15 + -1;
            cVar2 = *pcVar18;
            pcVar18 = pcVar18 + (ulong)bVar33 * -2 + 1;
          } while (cVar2 != '\0');
          in_R10 = puVar29;
          if (((~(ulong)pcVar15 - 1 < ~uVar28 - 1) && ((int)local_158 == 0)) ||
             ((iVar3 = strcmp(*ppcVar12,pcVar8), uVar5 = extraout_RDX_08, ppcVar30 = ppcVar20,
              local_158 = puVar29, iVar3 != 0 &&
              (in_R10 = puVar29, iVar3 = strcmp(pcVar10,(char *)puVar29), uVar5 = extraout_RDX_09,
              iVar3 == 0)))) goto LAB_00403743;
        }
        else {
LAB_00403743:
          *(char ***)(lVar27 + 8) = ppcVar20;
          ppcVar30 = ppcVar12;
        }
        ppcVar20 = (char **)ppcVar20[6];
        ppcVar12 = ppcVar19;
        if (cVar24 == '\0') {
          FUN_0040c620(ppcVar30);
          uVar5 = extraout_RDX_06;
        }
      }
      else {
LAB_00403570:
        local_c8._0_8_ = ppcVar20[4];
LAB_0040357c:
        ppcVar12 = (char **)FUN_0040a560(0x18);
        lVar27 = DAT_006176f0;
        ppcVar12[1] = (char *)ppcVar20;
        ppcVar12[2] = (char *)ppcVar19;
        *ppcVar12 = local_c8._0_8_;
        auVar34 = FUN_00406c00(lVar27,ppcVar12);
        uVar5 = SUB168(auVar34 >> 0x40,0);
        if (SUB168(auVar34,0) == 0) goto LAB_004038e8;
        ppcVar20 = (char **)ppcVar20[6];
      }
      auVar34 = CONCAT88(uVar5,DAT_006176f0);
      ppcVar19 = ppcVar12;
    } while( true );
  }
  DAT_006176ec = '\x01';
  local_128 = (long)(int)DAT_006175e0 + 1;
  lVar17 = (ulong)(~DAT_006175e0 + param_1) + local_128;
  lVar27 = (long)(int)DAT_006175e0;
  local_120 = lVar17;
LAB_00402bd8:
  local_138 = (char *)local_158[lVar27];
  if (local_138 == (char *)0x0) goto LAB_00402fb8;
  local_118 = (char **)((long)(int)((int)lVar27 - DAT_006175e0) * 0x90 + local_f8);
  if ((*(uint *)(local_118 + 3) & 0xb000) != 0x2000) goto LAB_00402da8;
  local_f0 = canonicalize_file_name(local_138);
  if (local_f0 == (char *)0x0) goto LAB_004034bf;
  local_150 = local_f0;
  if (*local_f0 != '/') {
    local_150 = local_138;
  }
  do {
    if (DAT_006176c0 == (char **)0x0) {
      free(local_f0);
LAB_00402da8:
      __s2 = (byte *)canonicalize_file_name(local_138);
      ppcVar6 = DAT_006176c0;
      if ((__s2 == (byte *)0x0) || (*__s2 != 0x2f)) {
        free(__s2);
        if (ppcVar6 != (char **)0x0) goto LAB_00402ddb;
      }
      else {
        uVar28 = 0xffffffffffffffff;
        pbVar23 = __s2;
        do {
          if (uVar28 == 0) break;
          uVar28 = uVar28 - 1;
          bVar1 = *pbVar23;
          pbVar23 = pbVar23 + (ulong)bVar33 * -2 + 1;
        } while (bVar1 != 0);
        if (DAT_006176c0 != (char **)0x0) {
          puVar29 = (undefined8 *)0x0;
          ppcVar20 = (char **)0x0;
          bVar31 = true;
          ppcVar19 = DAT_006176c0;
          do {
            bVar32 = false;
            lVar27 = 5;
            pbVar23 = (byte *)ppcVar19[3];
            pbVar25 = &DAT_00411184;
            do {
              if (lVar27 == 0) break;
              lVar27 = lVar27 + -1;
              bVar32 = *pbVar23 < *pbVar25;
              bVar31 = *pbVar23 == *pbVar25;
              pbVar23 = pbVar23 + (ulong)bVar33 * -2 + 1;
              pbVar25 = pbVar25 + (ulong)bVar33 * -2 + 1;
            } while (bVar31);
            if (((!bVar32 && !bVar31) != bVar32) &&
               (((ppcVar20 == (char **)0x0 || ((*(byte *)(ppcVar20 + 5) & 1) != 0)) ||
                ((*(byte *)(ppcVar19 + 5) & 1) == 0)))) {
              uVar14 = 0xffffffffffffffff;
              pcVar8 = ppcVar19[1];
              do {
                if (uVar14 == 0) break;
                uVar14 = uVar14 - 1;
                cVar24 = *pcVar8;
                pcVar8 = pcVar8 + (ulong)bVar33 * -2 + 1;
              } while (cVar24 != '\0');
              in_R10 = (undefined8 *)(~uVar14 - 1);
              if ((puVar29 <= in_R10) && (in_R10 <= (undefined8 *)(~uVar28 - 1))) {
                if (in_R10 == (undefined8 *)0x1) {
                  ppcVar20 = ppcVar19;
                  puVar29 = (undefined8 *)0x1;
                }
                else if ((((undefined8 *)(~uVar28 - 1) == in_R10) || (__s2[~uVar14 - 1] == 0x2f)) &&
                        (iVar3 = strncmp(ppcVar19[1],(char *)__s2,(size_t)in_R10), iVar3 == 0)) {
                  ppcVar20 = ppcVar19;
                  puVar29 = in_R10;
                }
              }
            }
            ppcVar19 = (char **)ppcVar19[6];
            bVar31 = ppcVar19 == (char **)0x0;
          } while (!bVar31);
          free(__s2);
          if (ppcVar20 == (char **)0x0) {
LAB_00402ddb:
            ppcVar19 = (char **)0x0;
            do {
              pcVar8 = ppcVar6[4];
              if (ppcVar6[4] == (char *)0xffffffffffffffff) {
                __s2 = (byte *)0x1;
                iVar3 = __xstat(1,ppcVar6[1],(stat *)local_c8);
                if (iVar3 == 0) {
                  ppcVar6[4] = local_c8._0_8_;
                  pcVar8 = local_c8._0_8_;
                }
                else {
                  piVar9 = __errno_location();
                  if (*piVar9 == 5) {
                    uVar5 = FUN_00409c60(0,3,ppcVar6[1]);
                    __s2 = (byte *)0x0;
                    error(0,*piVar9,&DAT_00413b3f,uVar5);
                    DAT_006176d8 = 1;
                  }
                  ppcVar6[4] = (char *)0xfffffffffffffffe;
                  pcVar8 = (char *)0xfffffffffffffffe;
                }
              }
              bVar31 = *local_118 < pcVar8;
              bVar32 = *local_118 == pcVar8;
              ppcVar20 = ppcVar19;
              if (bVar32) {
                lVar27 = 5;
                pbVar23 = (byte *)ppcVar6[3];
                pbVar25 = &DAT_00411184;
                do {
                  __s2 = pbVar25;
                  if (lVar27 == 0) break;
                  lVar27 = lVar27 + -1;
                  __s2 = pbVar25 + (ulong)bVar33 * -2 + 1;
                  bVar31 = *pbVar23 < *pbVar25;
                  bVar32 = *pbVar23 == *pbVar25;
                  pbVar23 = pbVar23 + (ulong)bVar33 * -2 + 1;
                  pbVar25 = __s2;
                } while (bVar32);
                if (((!bVar31 && !bVar32) != bVar31) &&
                   (((ppcVar19 == (char **)0x0 || ((*(byte *)(ppcVar19 + 5) & 1) != 0)) ||
                    ((*(byte *)(ppcVar6 + 5) & 1) == 0)))) {
                  __s2 = (byte *)0x1;
                  iVar3 = __xstat(1,ppcVar6[1],(stat *)local_c8);
                  if ((iVar3 != 0) || (ppcVar20 = ppcVar6, local_c8._0_8_ != ppcVar6[4])) {
                    ppcVar6[4] = (char *)0xfffffffffffffffe;
                    ppcVar20 = ppcVar19;
                  }
                }
              }
              ppcVar6 = (char **)ppcVar6[6];
              ppcVar19 = ppcVar20;
            } while (ppcVar6 != (char **)0x0);
            if (ppcVar20 == (char **)0x0) goto LAB_00402f72;
          }
          else {
            __s2 = (byte *)0x1;
            iVar3 = __xstat(1,ppcVar20[1],(stat *)local_c8);
            if ((iVar3 != 0) || (local_c8._0_8_ != *local_118)) goto LAB_00402ddb;
          }
          FUN_00403f10(*ppcVar20,ppcVar20[1],local_138,local_138,ppcVar20[3],
                       *(byte *)(ppcVar20 + 5) & 1,*(byte *)(ppcVar20 + 5) >> 1 & 1,0,0,__s2);
          lVar17 = extraout_RDX_00;
          goto LAB_00402fb8;
        }
        free(__s2);
      }
LAB_00402f72:
      ppcVar6 = local_118;
      auVar34 = FUN_00404ed0(local_138);
      lVar17 = SUB168(auVar34 >> 0x40,0);
      __ptr = SUB168(auVar34,0);
      if (__ptr != (void *)0x0) {
        FUN_00403f10(0,__ptr,local_138,0,0,0,0,0,0,ppcVar6);
        free(__ptr);
        lVar17 = extraout_RDX;
      }
    }
    else {
      local_108 = (char **)0x0;
      bVar31 = false;
      local_130 = 0xffffffffffffffff;
      bVar32 = false;
      ppcVar6 = DAT_006176c0;
      do {
        pcVar8 = *ppcVar6;
        pcVar10 = canonicalize_file_name(pcVar8);
        if ((pcVar10 != (char *)0x0) && (*pcVar10 == '/')) {
          pcVar8 = pcVar10;
        }
        iVar3 = strcmp(local_150,pcVar8);
        if (iVar3 == 0) {
          pcVar18 = ppcVar6[1];
          ppcVar20 = (char **)0x0;
          ppcVar19 = DAT_006176c0;
          if (DAT_006176c0 == (char **)0x0) {
LAB_00402fef:
            __s1 = (char *)0x0;
LAB_00402d36:
            sVar11 = strlen(pcVar18);
            bVar31 = (bool)(bVar32 ^ 1U | sVar11 < local_130);
            if (bVar31) {
              iVar3 = __xstat(1,pcVar18,(stat *)local_c8);
              if (iVar3 == 0) {
LAB_00403043:
                local_130 = sVar11;
                local_108 = ppcVar6;
                bVar32 = bVar31;
                if (sVar11 == 1) {
                  free(__s1);
                  free(pcVar10);
                  free(local_f0);
                  goto LAB_00403453;
                }
              }
              else if (((bool)(bVar32 ^ 1U)) && (sVar11 < local_130)) {
                bVar31 = false;
                goto LAB_00403043;
              }
              bVar31 = false;
            }
            else {
              bVar32 = true;
            }
          }
          else {
            do {
              iVar3 = strcmp(ppcVar19[1],pcVar18);
              if (iVar3 == 0) {
                ppcVar20 = ppcVar19;
              }
              ppcVar12 = ppcVar19 + 6;
              ppcVar19 = (char **)*ppcVar12;
            } while ((char **)*ppcVar12 != (char **)0x0);
            if (ppcVar20 == (char **)0x0) goto LAB_00402fef;
            __s1 = canonicalize_file_name(*ppcVar20);
            if ((__s1 == (char *)0x0) || (*__s1 != '/')) {
              free(__s1);
              __s1 = (char *)FUN_0040a790(*ppcVar20);
              if (__s1 == (char *)0x0) {
                pcVar18 = ppcVar6[1];
                goto LAB_00402fef;
              }
            }
            iVar3 = strcmp(__s1,pcVar8);
            if (iVar3 == 0) {
              pcVar18 = ppcVar6[1];
              goto LAB_00402d36;
            }
            bVar31 = true;
          }
          free(__s1);
        }
        free(pcVar10);
        ppcVar6 = (char **)ppcVar6[6];
      } while (ppcVar6 != (char **)0x0);
      free(local_f0);
      if (local_108 == (char **)0x0) {
        if (!bVar31) goto LAB_00402da8;
        uVar5 = FUN_00409b90(4,local_138);
        uVar7 = dcgettext(0,"cannot access %s: over-mounted by another device",5);
        error(0,0,uVar7,uVar5);
        DAT_006176d8 = 1;
        lVar17 = extraout_RDX_07;
      }
      else {
LAB_00403453:
        FUN_00403f10(*local_108,local_108[1],local_138,0,local_108[3],*(byte *)(local_108 + 5) & 1,
                     *(byte *)(local_108 + 5) >> 1 & 1,0,0,in_R10);
        lVar17 = extraout_RDX_03;
      }
    }
LAB_00402fb8:
    auVar34 = CONCAT88(lVar17,DAT_006176f0);
    if (local_120 != local_128) break;
LAB_0040318e:
    DAT_006176f0 = SUB168(auVar34,0);
    if (DAT_006176dd != '\0') {
      if (DAT_006176b8 != '\0') {
        pcVar8 = "-";
        if (DAT_0061734c == '\0') {
          pcVar8 = "total";
        }
        FUN_00403f10("total",pcVar8,0,0,0,0,0,&DAT_00617680,0,SUB168(auVar34 >> 0x40,0));
      }
      if (DAT_00617640 == 0) {
        return DAT_006176d8;
      }
      uVar28 = 0;
      do {
        if (DAT_00617650 != 0) {
          uVar21 = 0;
          uVar5 = **(undefined8 **)(DAT_00617648 + uVar28 * 8);
          uVar14 = DAT_00617650;
          while( true ) {
            lVar27 = uVar21 * 8;
            lVar17 = *(long *)(DAT_00617658 + uVar21 * 8);
            local_c8._0_8_ = *(char **)(lVar17 + 0x20);
            pcVar10 = (char *)FUN_00407f30(uVar5,local_c8,*(undefined4 *)(lVar17 + 0x28),
                                           (ulong)(uVar21 == uVar14 - 1) << 3);
            pcVar8 = pcVar10;
            if (pcVar10 == (char *)0x0) {
              pcVar8 = *(char **)(*(long *)(DAT_00617648 + uVar28 * 8) + uVar21 * 8);
            }
            fputs_unlocked(pcVar8,stdout);
            uVar21 = uVar21 + 1;
            free(pcVar10);
            uVar14 = DAT_00617650;
            if (DAT_00617650 <= uVar21) break;
            uVar5 = *(undefined8 *)(*(long *)(DAT_00617648 + uVar28 * 8) + 8 + lVar27);
            if (uVar21 != 0) {
              pcVar8 = stdout->_IO_write_ptr;
              if (pcVar8 < stdout->_IO_write_end) {
                stdout->_IO_write_ptr = pcVar8 + 1;
                *pcVar8 = ' ';
              }
              else {
                __overflow(stdout,0x20);
                uVar14 = DAT_00617650;
              }
            }
          }
        }
        pcVar8 = stdout->_IO_write_ptr;
        if (pcVar8 < stdout->_IO_write_end) {
          stdout->_IO_write_ptr = pcVar8 + 1;
          *pcVar8 = '\n';
        }
        else {
          __overflow(stdout,10);
        }
        uVar28 = uVar28 + 1;
      } while (uVar28 < DAT_00617640);
      return DAT_006176d8;
    }
    if (DAT_006176d8 != 0) {
      return DAT_006176d8;
    }
    uVar5 = dcgettext(0,"no file systems processed",5);
    error(1,0,uVar5);
LAB_004034bf:
    local_150 = local_138;
  } while( true );
  lVar27 = local_128;
  local_128 = local_128 + 1;
  goto LAB_00402bd8;
}


void FUN_00403910(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_retaddr;
  undefined auStack_8 [8];
  
  (*(code *)PTR___libc_start_main_00616ff0)
            (FUN_004023e0,unaff_retaddr,&stack0x00000008,FUN_00410f00,FUN_00410f60,param_3,auStack_8
            );
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* WARNING: Removing unreachable block (ram,0x00403948) */
/* WARNING: Removing unreachable block (ram,0x00403952) */

void FUN_0040393b(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00403989) */

void FUN_0040395a(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x004039c6) */

void FUN_00403991(void)

{
  if (DAT_00617628 != '\0') {
    return;
  }
  FUN_0040393b();
  DAT_00617628 = 1;
  return;
}


/* WARNING: Removing unreachable block (ram,0x00403989) */

void thunk_FUN_0040395a(void)

{
  return;
}


ulong FUN_004039f0(ulong *param_1,ulong param_2)

{
  return *param_1 % param_2;
}


ulong FUN_00403a00(ulong *param_1,ulong *param_2)

{
  return *param_2 & 0xffffffffffffff00 | (ulong)(*param_1 == *param_2);
}


ulong FUN_00403a10(char *param_1)

{
  char **ppcVar1;
  int iVar2;
  char **ppcVar3;
  ulong unaff_R12;
  bool bVar4;
  
  bVar4 = DAT_006176d0 == (char **)0x0;
  ppcVar3 = DAT_006176d0;
  if (param_1 != (char *)0x0 && !bVar4) {
    do {
      iVar2 = strcmp(param_1,*ppcVar3);
      if (iVar2 == 0) {
        return 1;
      }
      ppcVar1 = ppcVar3 + 1;
      ppcVar3 = (char **)*ppcVar1;
    } while ((char **)*ppcVar1 != (char **)0x0);
  }
  return unaff_R12 & 0xffffff00 | (ulong)(param_1 == (char *)0x0 || bVar4);
}


ulong FUN_00403a60(char *param_1)

{
  char **ppcVar1;
  int iVar2;
  char **ppcVar3;
  bool bVar4;
  ulong unaff_R12;
  
  bVar4 = param_1 == (char *)0x0 || DAT_006176c8 == (char **)0x0;
  ppcVar3 = DAT_006176c8;
  if (bVar4) {
    return 0;
  }
  do {
    iVar2 = strcmp(param_1,*ppcVar3);
    if (iVar2 == 0) {
      return 1;
    }
    ppcVar1 = ppcVar3 + 1;
    ppcVar3 = (char **)*ppcVar1;
  } while ((char **)*ppcVar1 != (char **)0x0);
  return unaff_R12 & 0xffffff00 | (ulong)bVar4;
}


void FUN_00403ac0(void)

{
  (*(code *)PTR_free_00617030)();
  return;
}


void FUN_00403ad0(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  DAT_00617640 = DAT_00617640 + 1;
  if ((-1 < (long)(DAT_00617640 * 8)) && (DAT_00617640 >> 0x3d == 0)) {
    DAT_00617648 = FUN_0040a5c0(DAT_00617648);
    lVar1 = DAT_00617648 + -8;
    lVar2 = DAT_00617640 * 8;
    if ((-1 < (long)(DAT_00617650 << 3)) && (DAT_00617650 >> 0x3d == 0)) {
      uVar3 = FUN_0040a560();
      *(undefined8 *)(lVar1 + lVar2) = uVar3;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0040a7b0();
}


byte * FUN_00403b50(byte *param_1)

{
  byte bVar1;
  ushort **ppuVar2;
  byte *pbVar3;
  
  bVar1 = *param_1;
  if (bVar1 != 0) {
    ppuVar2 = __ctype_b_loc();
    pbVar3 = param_1;
    do {
      if ((*(byte *)(*ppuVar2 + bVar1) & 2) != 0) {
        *pbVar3 = 0x3f;
      }
      pbVar3 = pbVar3 + 1;
      bVar1 = *pbVar3;
    } while (bVar1 != 0);
  }
  return param_1;
}


void FUN_00403ba0(void)

{
  int iVar1;
  char *__s;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  char *local_2c0;
  undefined local_2b8 [656];
  
  FUN_00403ad0();
  if (DAT_00617650 != 0) {
    uVar9 = 0;
    lVar8 = DAT_00617658;
    do {
      lVar6 = uVar9 * 8;
      local_2c0 = (char *)0x0;
      __s = (char *)dcgettext(0,*(undefined8 *)(*(int **)(lVar8 + lVar6) + 6),5);
      if (**(int **)(lVar8 + lVar6) != 2) goto LAB_00403be0;
      if (DAT_00617660 == 0) {
LAB_00403d48:
        uVar11 = DAT_006176e0;
        uVar12 = DAT_006176e0;
        do {
          uVar5 = (ulong)((uint)uVar12 & 0x3ff);
          uVar10 = uVar11 + ((uVar11 >> 3) / 0x7d) * -1000;
          uVar11 = (uVar11 >> 3) / 0x7d;
          uVar12 = uVar12 >> 10;
        } while ((uVar10 | uVar5) == 0);
        if ((uVar10 == 0) < (uVar5 == 0)) {
          uVar7 = DAT_006176e8 & 0x124 | 0xb8;
LAB_00403db2:
          if ((uVar7 & 0x20) == 0) goto LAB_00403e0e;
        }
        else {
          if ((uVar10 == 0) <= (uVar5 == 0)) {
            uVar7 = DAT_006176e8 & 0x124 | 0x98;
            goto LAB_00403db2;
          }
          uVar7 = DAT_006176e8 & 0x104 | 0x98;
LAB_00403e0e:
          uVar7 = (uint)CONCAT11(1,(char)uVar7);
        }
        uVar2 = FUN_00406fb0(DAT_006176e0,local_2b8,uVar7,1,1);
        __s = (char *)dcgettext(0,"blocks",5);
LAB_00403ccf:
        uVar3 = dcgettext(0,"%s-%s",5);
        iVar1 = FUN_0040acf0(&local_2c0,uVar3,uVar2,__s);
        if (iVar1 == -1) {
          local_2c0 = (char *)0x0;
        }
      }
      else {
        if (DAT_00617660 == 4) {
          if ((DAT_006176e8 & 0x10) == 0) goto LAB_00403d48;
        }
        else if (DAT_00617660 == 3) {
          uVar2 = FUN_00407b40(DAT_006176e0,local_2b8);
          goto LAB_00403ccf;
        }
LAB_00403be0:
        local_2c0 = strdup(__s);
      }
      if (local_2c0 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0040a7b0();
      }
      FUN_00403b50();
      *(char **)(*(long *)(DAT_00617648 + -8 + DAT_00617640 * 8) + lVar6) = local_2c0;
      uVar11 = *(ulong *)(*(long *)(DAT_00617658 + lVar6) + 0x20);
      iVar1 = FUN_00408190(local_2c0,0);
      if ((ulong)(long)iVar1 < uVar11) {
        lVar6 = *(long *)(DAT_00617658 + lVar6);
        lVar4 = *(long *)(lVar6 + 0x20);
      }
      else {
        iVar1 = FUN_00408190(local_2c0,0);
        lVar4 = (long)iVar1;
        lVar6 = *(long *)(DAT_00617658 + lVar6);
      }
      lVar8 = DAT_00617658;
      uVar11 = DAT_00617650;
      uVar9 = uVar9 + 1;
      *(long *)(lVar6 + 0x20) = lVar4;
    } while (uVar9 < uVar11);
  }
  return;
}


void FUN_00403e20(int param_1,undefined *param_2)

{
  long lVar1;
  
  DAT_00617650 = DAT_00617650 + 1;
  if (((long)(DAT_00617650 * 8) < 0) || (DAT_00617650 >> 0x3d != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_0040a7b0(DAT_00617658);
  }
  DAT_00617658 = FUN_0040a5c0();
  lVar1 = (long)param_1;
  *(undefined **)(DAT_00617658 + -8 + DAT_00617650 * 8) = &DAT_00617320 + lVar1 * 0x30;
  if (param_2 != (undefined *)0x0) {
    (&PTR_s_Filesystem_00617338)[lVar1 * 6] = param_2;
  }
  if ((&DAT_0061734c)[lVar1 * 0x30] == '\0') {
    (&DAT_0061734c)[lVar1 * 0x30] = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("!\"field used\"","src/df.c",0x164,"alloc_field");
}


long FUN_00403ed0(byte param_1,long param_2,long param_3)

{
  long lVar1;
  
  if (param_1 == 0) {
    lVar1 = FUN_00406fb0(param_2,param_3 + (ulong)param_1,DAT_006176e8);
    return lVar1;
  }
  lVar1 = FUN_00406fb0(-param_2,param_3 + (ulong)param_1,DAT_006176e8);
  *(undefined *)(lVar1 + -1) = 0x2d;
  return lVar1 + -1;
}


/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403f10(char *param_1,char *param_2,char *param_3,char *param_4,undefined *param_5,
                 char param_6,char param_7,__dev_t *param_8,char param_9)

{
  long lVar1;
  uint uVar2;
  uint *puVar3;
  ulong uVar4;
  char **ppcVar5;
  char cVar6;
  int iVar7;
  size_t sVar8;
  long lVar9;
  int *piVar10;
  undefined8 uVar11;
  char *pcVar12;
  long lVar13;
  long lVar14;
  __dev_t *p_Var15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  double dVar19;
  double dVar20;
  char *local_3b8;
  char *local_390;
  __dev_t local_388;
  ulong uStack_380;
  ulong local_378;
  ulong uStack_370;
  uint local_368;
  undefined4 uStack_364;
  ulong uStack_360;
  ulong local_358;
  __dev_t local_348;
  undefined8 local_340;
  ulong local_338;
  ulong local_330;
  byte local_328 [8];
  ulong local_320;
  long local_318;
  undefined local_310 [8];
  __dev_t local_308;
  undefined8 local_300;
  ulong local_2f8;
  ulong local_2f0;
  undefined local_2e8;
  ulong local_2e0;
  long local_2d8;
  undefined local_2d0;
  stat local_2c8 [4];
  
  if ((param_7 != '\0') && (DAT_006176ed != '\0')) {
    return;
  }
  if (((param_6 != '\0') && (DAT_006176ee == '\0')) && (DAT_006176ec == '\0')) {
    return;
  }
  cVar6 = FUN_00403a10(param_5);
  if (cVar6 == '\0') {
    return;
  }
  cVar6 = FUN_00403a60(param_5);
  if (cVar6 != '\0') {
    return;
  }
  if ((param_2 == (char *)0x0) || (param_8 != (__dev_t *)0x0)) {
    if ((param_4 == (char *)0x0) && (param_4 = param_2, param_2 == (char *)0x0)) {
      param_4 = param_1;
    }
    if (param_8 != (__dev_t *)0x0) {
      local_388 = *param_8;
      uStack_380 = param_8[1];
      local_378 = param_8[2];
      uStack_370 = param_8[3];
      local_368 = *(uint *)(param_8 + 4);
      uStack_364 = *(undefined4 *)((long)param_8 + 0x24);
      uStack_360 = param_8[5];
      local_358 = param_8[6];
      if (((uStack_380 == 0) && (DAT_006176ee == '\0')) && (DAT_006176ec == '\0')) {
        return;
      }
      goto LAB_0040401c;
    }
  }
  else {
    if (*param_2 != '/') {
      return;
    }
    if (param_4 == (char *)0x0) {
      param_4 = param_2;
    }
  }
  iVar7 = FUN_0040b070(param_4,param_1,&local_388);
  if (iVar7 == 0) {
    if (param_9 == '\0') {
LAB_00404839:
      if ((uStack_380 != 0) || (DAT_006176ee != '\0')) goto LAB_00404015;
    }
    else {
      if (DAT_006176ee != '\0') {
        iVar7 = __xstat(1,param_4,local_2c8);
        if ((iVar7 == 0) && (DAT_006176f0 != 0)) {
          local_308 = local_2c8[0].st_dev;
          lVar13 = FUN_004061f0(DAT_006176f0,&local_308);
          if (((lVar13 != 0) &&
              ((ppcVar5 = *(char ***)(lVar13 + 8), ppcVar5 != (char **)0x0 &&
               (iVar7 = strcmp(*ppcVar5,param_1), iVar7 != 0)))) &&
             (((*(byte *)(ppcVar5 + 5) & 2) == 0 || (param_7 == '\0')))) {
            local_368 = local_368 & 0xffffff00;
            param_5 = &DAT_00413461;
            local_358 = 0xffffffffffffffff;
            uStack_360 = 0xffffffffffffffff;
            uStack_370 = 0xffffffffffffffff;
            local_378 = 0xffffffffffffffff;
            uStack_380 = 0xffffffffffffffff;
            local_388 = 0xffffffffffffffff;
          }
        }
        goto LAB_00404839;
      }
      if (uStack_380 != 0) goto LAB_00404015;
    }
    if (DAT_006176ec == '\0') {
      return;
    }
    if (param_8 != (__dev_t *)0x0) goto LAB_0040401c;
  }
  else {
    piVar10 = __errno_location();
    if ((param_9 == '\0') || ((*piVar10 != 0xd && (*piVar10 != 2)))) {
      uVar11 = FUN_00409c60(0,3,param_4);
      error(0,*piVar10,&DAT_00413b3f,uVar11);
      DAT_006176d8 = 1;
      return;
    }
    if (DAT_006176ee == '\0') {
      return;
    }
    local_368 = local_368 & 0xffffff00;
    param_5 = &DAT_00413461;
    local_358 = 0xffffffffffffffff;
    uStack_360 = 0xffffffffffffffff;
    uStack_370 = 0xffffffffffffffff;
    local_378 = 0xffffffffffffffff;
    uStack_380 = 0xffffffffffffffff;
    local_388 = 0xffffffffffffffff;
  }
LAB_00404015:
  DAT_006176dd = 1;
LAB_0040401c:
  FUN_00403ad0();
  if (param_1 == (char *)0x0) {
    param_1 = "-";
  }
  if (param_3 == (char *)0x0) {
    param_3 = "-";
  }
  local_3b8 = (char *)FUN_0040a790(param_1);
  if ((((param_9 != '\0') && (sVar8 = strlen(local_3b8), 0x24 < sVar8)) &&
      (sVar8 = strspn(local_3b8 + (sVar8 - 0x24),"-0123456789abcdefABCDEF"), sVar8 == 0x24)) &&
     (pcVar12 = (char *)FUN_00405250(local_3b8,0), pcVar12 != (char *)0x0)) {
    free(local_3b8);
    local_3b8 = pcVar12;
  }
  if (param_5 == (undefined *)0x0) {
    param_5 = &DAT_00413461;
  }
  local_2e8 = 0;
  local_300 = 1;
  local_308 = 1;
  local_2f8 = uStack_360;
  local_2e0 = local_358;
  local_2f0 = local_358;
  local_2d8 = -1;
  local_2d0 = false;
  if ((uStack_360 < 0xfffffffffffffffe) && (local_358 < 0xfffffffffffffffe)) {
    local_2d8 = uStack_360 - local_358;
    local_2d0 = uStack_360 < local_358;
  }
  local_318 = -1;
  local_310[0] = false;
  local_340 = DAT_006176e0;
  local_328[0] = uStack_370 < 0xfffffffffffffffe & (byte)local_368;
  local_348 = local_388;
  local_338 = uStack_380;
  local_330 = uStack_370;
  local_320 = local_378;
  if ((uStack_380 < 0xfffffffffffffffe) && (local_378 < 0xfffffffffffffffe)) {
    local_318 = uStack_380 - local_378;
    local_310[0] = uStack_380 < local_378;
  }
  if ((DAT_006176b8 != '\0') && (param_8 == (__dev_t *)0x0)) {
    if (uStack_360 < 0xfffffffffffffffe) {
      _DAT_006176a8 = _DAT_006176a8 + uStack_360;
    }
    if (local_358 < 0xfffffffffffffffe) {
      _DAT_006176b0 = _DAT_006176b0 + local_358;
    }
    if (uStack_380 < 0xfffffffffffffffe) {
      _DAT_00617688 = _DAT_00617688 + uStack_380 * local_388;
    }
    if (local_378 < 0xfffffffffffffffe) {
      _DAT_00617690 = _DAT_00617690 + local_378 * local_388;
    }
    if (uStack_370 < 0xfffffffffffffffe) {
      uVar18 = uStack_370 * local_388;
      if (DAT_006176a0 == local_328[0]) {
        DAT_00617698 = uVar18 + DAT_00617698;
      }
      else {
        uVar17 = -DAT_00617698;
        if (DAT_006176a0 == 0) {
          uVar17 = DAT_00617698;
        }
        if (local_328[0] != 0) {
          uVar18 = -uVar18;
        }
        if (uVar18 < uVar17) {
          DAT_00617698 = uVar17 - uVar18;
        }
        else {
          DAT_00617698 = uVar18 - uVar17;
          DAT_006176a0 = local_328[0];
        }
        if (DAT_006176a0 != 0) {
          DAT_00617698 = -DAT_00617698;
        }
      }
    }
  }
  uVar18 = 0;
  lVar13 = DAT_00617658;
  if (DAT_00617650 != 0) {
    do {
      puVar3 = *(uint **)(lVar13 + uVar18 * 8);
      lVar1 = uVar18 * 8;
      uVar2 = puVar3[4];
      if (uVar2 == 1) {
        p_Var15 = &local_308;
      }
      else if (uVar2 == 0) {
        p_Var15 = &local_348;
      }
      else {
        if (uVar2 != 2) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("!\"bad field_type\"","src/df.c",0x435,"get_dev");
        }
        p_Var15 = (__dev_t *)0x0;
      }
      if (0xb < *puVar3) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("!\"unhandled field\"","src/df.c",0x49b,"get_dev");
      }
      switch(*puVar3) {
      case 0:
        local_390 = (char *)FUN_0040a790(local_3b8);
        goto LAB_00404288;
      case 1:
        local_390 = (char *)FUN_0040a790(param_5);
        goto LAB_00404288;
      default:
        pcVar12 = "-";
        if (p_Var15[2] < 0xfffffffffffffffe) {
          pcVar12 = (char *)FUN_00403ed0(0,p_Var15[2],local_2c8,*p_Var15,p_Var15[1]);
        }
        break;
      case 3:
      case 7:
        uVar17 = p_Var15[6];
        cVar6 = *(char *)(p_Var15 + 7);
        goto joined_r0x0040434c;
      case 4:
      case 8:
        uVar17 = p_Var15[3];
        cVar6 = *(char *)(p_Var15 + 4);
joined_r0x0040434c:
        if ((uVar17 < 0xfffffffffffffffe) || (pcVar12 = "-", cVar6 != '\0')) {
          pcVar12 = (char *)FUN_00403ed0(cVar6,uVar17,local_2c8,*p_Var15,p_Var15[1]);
        }
        break;
      case 5:
      case 9:
        uVar17 = p_Var15[6];
        if ((uVar17 < 0xfffffffffffffffe) && (uVar4 = p_Var15[3], uVar4 < 0xfffffffffffffffe)) {
          if (*(char *)(p_Var15 + 7) == '\0') {
            if (0x28f5c28f5c28f5c < uVar17) {
LAB_0040448f:
              if ((long)uVar17 < 0) {
                dVar19 = (double)(uVar17 >> 1 | (ulong)((uint)uVar17 & 1));
                dVar19 = dVar19 + dVar19;
              }
              else {
                dVar19 = (double)uVar17;
              }
              goto LAB_004044a1;
            }
            uVar16 = uVar17 + uVar4;
            if ((uVar16 == 0) || ((bool)*(char *)(p_Var15 + 4) != CARRY8(uVar17,uVar4)))
            goto LAB_0040448f;
            uVar17 = (ulong)((uVar17 * 100) % uVar16 != 0) + (uVar17 * 100) / uVar16;
            if ((long)uVar17 < 0) {
              dVar19 = (double)(uVar17 >> 1 | (ulong)((uint)uVar17 & 1));
              dVar19 = dVar19 + dVar19;
            }
            else {
              dVar19 = (double)uVar17;
            }
          }
          else {
            uVar16 = -uVar17;
            if ((long)uVar17 < 1) {
              dVar19 = (double)uVar16;
            }
            else {
              dVar19 = (double)(uVar16 >> 1 | (ulong)((uint)uVar16 & 1));
              dVar19 = dVar19 + dVar19;
            }
            dVar19 = (double)((ulong)dVar19 ^ _DAT_00412130);
LAB_004044a1:
            if (*(char *)(p_Var15 + 4) == '\0') {
              if ((long)uVar4 < 0) {
                dVar20 = (double)(uVar4 >> 1 | (ulong)((uint)uVar4 & 1));
                dVar20 = dVar20 + dVar20;
              }
              else {
                dVar20 = (double)uVar4;
              }
            }
            else {
              uVar17 = -uVar4;
              if ((long)uVar4 < 1) {
                dVar20 = (double)uVar17;
              }
              else {
                dVar20 = (double)(uVar17 >> 1 | (ulong)((uint)uVar17 & 1));
                dVar20 = dVar20 + dVar20;
              }
              dVar20 = (double)((ulong)dVar20 ^ _DAT_00412130);
            }
            if (dVar20 + dVar19 == 0.0) goto LAB_0040431e;
            dVar19 = (dVar19 * _DAT_00412140) / (dVar20 + dVar19);
            dVar20 = (double)(long)dVar19;
            if (((dVar20 - _DAT_00412148 < dVar19) && (dVar19 <= _DAT_00412148 + dVar20)) &&
               (dVar19 = _DAT_00412148 + dVar20, dVar19 <= dVar20)) {
              dVar19 = dVar20 + 0.0;
            }
          }
          if (dVar19 < 0.0) goto LAB_0040431e;
          iVar7 = FUN_0040acf0(&local_390,"%.0f%%");
          if (iVar7 == -1) {
            local_390 = (char *)0x0;
            goto LAB_00404559;
          }
        }
        else {
LAB_0040431e:
          local_390 = strdup("-");
        }
        if (local_390 == (char *)0x0) {
LAB_00404559:
                    /* WARNING: Subroutine does not return */
          FUN_0040a7b0();
        }
        goto LAB_00404291;
      case 10:
        pcVar12 = param_2;
        break;
      case 0xb:
        pcVar12 = param_3;
      }
      local_390 = (char *)FUN_0040a790(pcVar12);
LAB_00404288:
      if (local_390 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("!\"empty cell\"","src/df.c",0x49f,"get_dev");
      }
LAB_00404291:
      FUN_00403b50();
      uVar17 = *(ulong *)(*(long *)(DAT_00617658 + lVar1) + 0x20);
      iVar7 = FUN_00408190(local_390,0);
      if ((ulong)(long)iVar7 < uVar17) {
        lVar14 = *(long *)(DAT_00617658 + lVar1);
        lVar9 = *(long *)(lVar14 + 0x20);
      }
      else {
        iVar7 = FUN_00408190(local_390,0);
        lVar9 = (long)iVar7;
        lVar14 = *(long *)(DAT_00617658 + lVar1);
      }
      lVar13 = DAT_00617658;
      *(long *)(lVar14 + 0x20) = lVar9;
      uVar17 = DAT_00617650;
      uVar18 = uVar18 + 1;
      *(char **)(*(long *)(DAT_00617648 + -8 + DAT_00617640 * 8) + lVar1) = local_390;
    } while (uVar18 < uVar17);
  }
  free(local_3b8);
  return;
}


void FUN_00404930(int param_1)

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
  
  uVar5 = DAT_00617708;
  bVar13 = 0;
  if (param_1 != 0) {
    uVar3 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(stderr,1,uVar3,uVar5);
    goto LAB_0040496f;
  }
  uVar3 = dcgettext(0,"Usage: %s [OPTION]... [FILE]...\n",5);
  __printf_chk(1,uVar3,uVar5);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "Show information about the file system on which each FILE resides,\nor all file systems by default.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nMandatory arguments to long options are mandatory for short options too.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -a, --all             include pseudo, duplicate, inaccessible file systems\n  -B, --block-size=SIZE  scale sizes by SIZE before printing them; e.g.,\n                           \'-BM\' prints sizes in units of 1,048,576 bytes;\n                           see SIZE format below\n  -h, --human-readable  print sizes in powers of 1024 (e.g., 1023M)\n  -H, --si              print sizes in powers of 1000 (e.g., 1.1G)\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -i, --inodes          list inode information instead of block usage\n  -k                    like --block-size=1K\n  -l, --local           limit listing to local file systems\n      --no-sync         do not invoke sync before getting usage info (default)\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --output[=FIELD_LIST]  use the output format defined by FIELD_LIST,\n                               or print all fields if FIELD_LIST is omitted.\n  -P, --portability     use the POSIX output format\n      --sync            invoke sync before getting usage info\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --total           elide all entries insignificant to available space,\n                          and produce a grand total\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -t, --type=TYPE       limit listing to file systems of type TYPE\n  -T, --print-type      print file system type\n  -x, --exclude-type=TYPE   limit listing to file systems not of type TYPE\n  -v                    (ignored)\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"      --help     display this help and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"      --version  output version information and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  uVar5 = dcgettext(0,
                    "\nDisplay values are in units of the first available SIZE from --block-size,\nand the %s_BLOCK_SIZE, BLOCK_SIZE and BLOCKSIZE environment variables.\nOtherwise, units default to 1024 bytes (or 512 if POSIXLY_CORRECT is set).\n"
                    ,5);
  __printf_chk(1,uVar5,&DAT_0041103d);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nThe SIZE argument is an integer and optional unit (example: 10K is 10*1024).\nUnits are K,M,G,T,P,E,Z,Y (powers of 1024) or KB,MB,... (powers of 1000).\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nFIELD_LIST is a comma-separated list of columns to be included.  Valid\nfield names are: \'source\', \'fstype\', \'itotal\', \'iused\', \'iavail\', \'ipcent\',\n\'size\', \'used\', \'avail\', \'pcent\', \'file\' and \'target\' (see info page).\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  local_88 = &DAT_00411040;
  local_80 = "test invocation";
  local_78[0] = (byte *)0x4110ba;
  local_78[1] = (byte *)0x411052;
  local_78[2] = (byte *)0x411068;
  local_78[3] = (byte *)0x411072;
  local_78[4] = (byte *)0x411081;
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
    lVar8 = 3;
    pbVar10 = &DAT_0041103a;
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
        pbVar9 = &DAT_0041103a;
        goto LAB_00404d33;
      }
    }
    pbVar9 = &DAT_0041103a;
    uVar5 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    pcVar4 = " invocation";
    __printf_chk(1,uVar5,"https://www.gnu.org/software/coreutils/",&DAT_0041103a);
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
      iVar2 = strncmp(pcVar4,"en_",3);
      if (iVar2 != 0) {
LAB_00404d33:
        uVar5 = dcgettext(0,"Report %s translation bugs to <https://translationproject.org/team/>\n"
                          ,5);
        __printf_chk(1,uVar5,&DAT_0041103a);
      }
    }
    pcVar4 = " invocation";
    uVar5 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    __printf_chk(1,uVar5,"https://www.gnu.org/software/coreutils/",&DAT_0041103a);
    if (pbVar9 != &DAT_0041103a) {
      pcVar4 = "";
    }
  }
  uVar5 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(1,uVar5,pbVar9,pcVar4);
LAB_0040496f:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}


void FUN_00404d60(void)

{
  byte bVar1;
  int iVar2;
  char *__ptr;
  char *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  char *pcVar7;
  char *pcVar8;
  
  __ptr = (char *)FUN_0040a790();
  pcVar7 = __ptr;
  do {
    pcVar8 = (char *)0x0;
    pcVar3 = strchr(pcVar7,0x2c);
    if (pcVar3 != (char *)0x0) {
      *pcVar3 = '\0';
      pcVar8 = pcVar3 + 1;
    }
    uVar6 = 0;
    do {
      bVar1 = (byte)uVar6;
      iVar2 = strcmp((&PTR_s_source_00617328)[uVar6 * 6],pcVar7);
      if (iVar2 == 0) goto LAB_00404e08;
      uVar6 = uVar6 + 1;
    } while (uVar6 != 0xc);
    uVar6 = FUN_00409de0(pcVar7);
    pcVar7 = "option --output: field %s unknown";
    while( true ) {
      uVar4 = dcgettext(0,pcVar7,5);
      error(0,0,uVar4,uVar6);
      FUN_00404930(1);
LAB_00404e08:
      if ((&DAT_0061734c)[(uVar6 & 0xffffffff) * 0x30] == '\0') break;
      uVar6 = FUN_00409de0();
      pcVar7 = "option --output: field %s used more than once";
    }
    uVar5 = 1L << (bVar1 & 0x3f);
    if ((uVar5 & 0xfeb) == 0) {
      if ((uVar5 & 0x10) == 0) {
        if ((uVar5 & 4) == 0) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("!\"invalid field\"","src/df.c",0x1ab,"decode_output_arg");
        }
        FUN_00403e20(uVar6 & 0xffffffff,&DAT_004110c8);
      }
      else {
        FUN_00403e20(uVar6 & 0xffffffff,"Avail");
      }
    }
    else {
      FUN_00403e20(uVar6 & 0xffffffff,0);
    }
    pcVar7 = pcVar8;
  } while (pcVar8 != (char *)0x0);
  free(__ptr);
  return;
}


char * FUN_00404ed0(char *param_1,undefined4 *param_2)

{
  ulong uVar1;
  uint uVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  uint *puVar6;
  char *pcVar7;
  size_t sVar8;
  char *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  char *pcVar12;
  size_t __n;
  long lVar13;
  int *piVar14;
  ulong uVar15;
  uint uVar16;
  undefined4 uVar17;
  char cVar18;
  undefined4 *puVar19;
  char *pcVar20;
  char *pcVar21;
  long lVar22;
  undefined *puVar23;
  undefined *puVar24;
  char *pcVar25;
  uint uVar26;
  char *pcVar27;
  undefined8 unaff_R15;
  undefined8 uStack_160;
  undefined local_158 [8];
  undefined auStack_150 [8];
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  __mode_t _Stack_130;
  __uid_t _Stack_12c;
  __gid_t local_128;
  int iStack_124;
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
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  __mode_t _Stack_a0;
  __uid_t _Stack_9c;
  __gid_t local_98;
  int iStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
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
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  puVar24 = local_158;
  puVar23 = local_158;
  uStack_160 = 0x404ef4;
  iVar5 = FUN_00409f30(local_158);
  uStack_160 = 0x404efc;
  puVar6 = (uint *)__errno_location();
  if (iVar5 != 0) {
    uStack_160 = 0x40520b;
    uVar10 = dcgettext(0,"cannot get current directory",5);
    uStack_160 = 0x40521b;
    error(0,*puVar6,uVar10);
    return (char *)0x0;
  }
  if ((param_2[6] & 0xf000) == 0x4000) {
    local_148 = *param_2;
    uStack_144 = param_2[1];
    uStack_140 = param_2[2];
    uStack_13c = param_2[3];
    local_138 = param_2[4];
    uStack_134 = param_2[5];
    _Stack_130 = param_2[6];
    _Stack_12c = param_2[7];
    local_128 = param_2[8];
    iStack_124 = param_2[9];
    uStack_120 = param_2[10];
    uStack_11c = param_2[0xb];
    local_118 = param_2[0xc];
    uStack_114 = param_2[0xd];
    uStack_110 = param_2[0xe];
    uStack_10c = param_2[0xf];
    local_108 = param_2[0x10];
    uStack_104 = param_2[0x11];
    uStack_100 = param_2[0x12];
    uStack_fc = param_2[0x13];
    local_f8 = param_2[0x14];
    uStack_f4 = param_2[0x15];
    uStack_f0 = param_2[0x16];
    uStack_ec = param_2[0x17];
    local_e8 = param_2[0x18];
    uStack_e4 = param_2[0x19];
    uStack_e0 = param_2[0x1a];
    uStack_dc = param_2[0x1b];
    local_d8 = param_2[0x1c];
    uStack_d4 = param_2[0x1d];
    uStack_d0 = param_2[0x1e];
    uStack_cc = param_2[0x1f];
    local_c8 = param_2[0x20];
    uStack_c4 = param_2[0x21];
    uStack_c0 = param_2[0x22];
    uStack_bc = param_2[0x23];
    uStack_160 = 0x405186;
    iVar5 = chdir(param_1);
    pcVar9 = param_1;
    if (iVar5 < 0) goto LAB_00405191;
  }
  else {
    uStack_160 = 0x404f23;
    pcVar7 = (char *)FUN_00405990(param_1);
    uStack_160 = 0x404f2e;
    sVar8 = strlen(pcVar7);
    lVar13 = -(sVar8 + 0x18 & 0xfffffffffffffff0);
    puVar23 = local_158 + lVar13;
    puVar24 = local_158 + lVar13;
    *(undefined8 *)(local_158 + lVar13 + -8) = 0x404f4e;
    pcVar9 = (char *)memcpy(auStack_150 + lVar13,pcVar7,sVar8 + 1);
    *(undefined8 *)(local_158 + lVar13 + -8) = 0x404f59;
    free(pcVar7);
    *(undefined8 *)(local_158 + lVar13 + -8) = 0x404f61;
    iVar5 = chdir(pcVar9);
    if (iVar5 < 0) {
LAB_00405191:
      *(undefined8 *)(puVar24 + -8) = 0x40519b;
      uVar10 = FUN_00409b90(4,pcVar9);
      *(undefined8 *)(puVar24 + -8) = 0x4051af;
      uVar11 = dcgettext(0,"cannot change to directory %s",5);
      uVar2 = *puVar6;
      *(undefined8 *)(puVar24 + -8) = 0x4051c4;
      error(0,uVar2,uVar11,uVar10);
      return (char *)0x0;
    }
    *(undefined8 *)(local_158 + lVar13 + -8) = 0x404f7f;
    iVar5 = __xstat(1,".",(stat *)&local_148);
    if (iVar5 < 0) {
      *(undefined8 *)(local_158 + lVar13 + -8) = 0x404f94;
      uVar10 = FUN_00409b90(4,pcVar9);
      *(undefined8 *)(local_158 + lVar13 + -8) = 0x404fa8;
      uVar11 = dcgettext(0,"cannot stat current directory (now %s)",5);
      uVar2 = *puVar6;
      pcVar9 = (char *)0x0;
      *(undefined8 *)(local_158 + lVar13 + -8) = 0x404fbd;
      error(0,uVar2,uVar11,uVar10);
      puVar23 = local_158 + lVar13;
      goto LAB_004050d8;
    }
  }
  while( true ) {
    *(undefined8 *)(puVar23 + -8) = 0x40508d;
    iVar5 = __xstat(1,"..",(stat *)&local_b8);
    if (iVar5 < 0) break;
    if ((CONCAT44(uStack_b4,local_b8) != CONCAT44(uStack_144,local_148)) ||
       (CONCAT44(uStack_ac,uStack_b0) == CONCAT44(uStack_13c,uStack_140))) {
      *(undefined8 *)(puVar23 + -8) = 0x4050d5;
      pcVar9 = (char *)FUN_0040a7f0();
      goto LAB_004050d8;
    }
    *(undefined8 *)(puVar23 + -8) = 0x404ffa;
    iVar5 = chdir("..");
    if (iVar5 < 0) {
      *(undefined8 *)(puVar23 + -8) = 0x4051df;
      uVar10 = FUN_00409b90(4,&DAT_0041218b);
      pcVar9 = "cannot change to directory %s";
      goto LAB_004050b1;
    }
    local_148 = local_b8;
    uStack_144 = uStack_b4;
    uStack_140 = uStack_b0;
    uStack_13c = uStack_ac;
    local_138 = local_a8;
    uStack_134 = uStack_a4;
    _Stack_130 = _Stack_a0;
    _Stack_12c = _Stack_9c;
    local_128 = local_98;
    iStack_124 = iStack_94;
    uStack_120 = uStack_90;
    uStack_11c = uStack_8c;
    local_118 = local_88;
    uStack_114 = uStack_84;
    uStack_110 = uStack_80;
    uStack_10c = uStack_7c;
    local_108 = local_78;
    uStack_104 = uStack_74;
    uStack_100 = uStack_70;
    uStack_fc = uStack_6c;
    local_f8 = local_68;
    uStack_f4 = uStack_64;
    uStack_f0 = uStack_60;
    uStack_ec = uStack_5c;
    local_e8 = local_58;
    uStack_e4 = uStack_54;
    uStack_e0 = uStack_50;
    uStack_dc = uStack_4c;
    local_d8 = local_48;
    uStack_d4 = uStack_44;
    uStack_d0 = uStack_40;
    uStack_cc = uStack_3c;
    local_c8 = local_38;
    uStack_c4 = uStack_34;
    uStack_c0 = uStack_30;
    uStack_bc = uStack_2c;
  }
  *(undefined8 *)(puVar23 + -8) = 0x4050a4;
  uVar10 = FUN_00409b90(4,&DAT_0041218b);
  pcVar9 = "cannot stat %s";
LAB_004050b1:
  *(undefined8 *)(puVar23 + -8) = 0x4050b8;
  uVar11 = dcgettext(0,pcVar9,5);
  uVar2 = *puVar6;
  pcVar9 = (char *)0x0;
  *(undefined8 *)(puVar23 + -8) = 0x4050cd;
  error(0,uVar2,uVar11,uVar10);
LAB_004050d8:
  uVar2 = *puVar6;
  *(undefined8 *)(puVar23 + -8) = 0x4050e8;
  iVar5 = FUN_00409f80(local_158);
  if (iVar5 == 0) {
    *(undefined8 *)(puVar23 + -8) = 0x4050fc;
    FUN_00409fa0(local_158);
    *puVar6 = uVar2;
    return pcVar9;
  }
  *(undefined8 *)(puVar23 + -8) = 0x405239;
  uVar10 = dcgettext(0,"failed to return to initial working directory",5);
  uVar26 = *puVar6;
  pcVar7 = (char *)0x1;
  *(undefined8 *)(puVar23 + -8) = 0x40524c;
  error(1,uVar26,uVar10);
  *(undefined8 *)(puVar23 + -8) = unaff_R15;
  *(char **)(puVar23 + -0x10) = param_1;
  uVar16 = uVar26 & 3;
  *(ulong *)(puVar23 + -0x18) = (ulong)uVar2;
  *(uint **)(puVar23 + -0x20) = puVar6;
  *(undefined **)(puVar23 + -0x28) = &stack0xfffffffffffffff8;
  *(char **)(puVar23 + -0x30) = pcVar9;
  *(uint *)(puVar23 + -0xf4) = uVar16;
  if (((uVar16 & uVar16 - 1) == 0) && (pcVar7 != (char *)0x0)) {
    if (*pcVar7 == '\0') {
      *(undefined8 *)(puVar23 + -0x110) = 0x4057c6;
      piVar14 = __errno_location();
      pcVar9 = (char *)0x0;
      *piVar14 = 2;
    }
    else {
      if (*pcVar7 == '/') {
        *(undefined8 *)(puVar23 + -0x110) = 0x40541a;
        pcVar9 = (char *)FUN_0040a560(0x1000);
        pcVar25 = pcVar9 + 0x1000;
        pcVar20 = pcVar9 + 1;
        *pcVar9 = '/';
      }
      else {
        *(undefined8 *)(puVar23 + -0x110) = 0x40529c;
        pcVar9 = (char *)FUN_0040a7f0();
        if (pcVar9 == (char *)0x0) {
          return (char *)0x0;
        }
        *(undefined8 *)(puVar23 + -0x110) = 0x4052b0;
        sVar8 = strlen(pcVar9);
        if (sVar8 < 0x1000) {
          *(undefined8 *)(puVar23 + -0x110) = 0x4057e1;
          pcVar9 = (char *)FUN_0040a5c0(pcVar9,0x1000);
          pcVar20 = pcVar9 + sVar8;
          pcVar25 = pcVar9 + 0x1000;
        }
        else {
          pcVar20 = pcVar9 + sVar8;
          pcVar25 = pcVar20;
        }
      }
      *(char **)(puVar23 + -0xe8) = pcVar7;
      cVar4 = *pcVar7;
      *(uint *)(puVar23 + -0xd0) = uVar26 & 4;
      *(undefined8 *)(puVar23 + -0xf0) = 0;
      *(undefined8 *)(puVar23 + -0xd8) = 0;
      *(undefined8 *)(puVar23 + -0xe0) = 0;
LAB_004052f8:
      while (pcVar21 = pcVar20, cVar4 != '\0') {
        pcVar12 = pcVar7;
        cVar18 = cVar4;
        if (cVar4 == '/') {
          do {
            pcVar7 = pcVar7 + 1;
            cVar18 = *pcVar7;
          } while (cVar18 == '/');
          pcVar12 = pcVar7;
          if (cVar18 == '\0') break;
        }
        do {
          pcVar27 = pcVar7;
          cVar4 = pcVar27[1];
          pcVar7 = pcVar27 + 1;
          if (cVar4 == '\0') break;
        } while (cVar4 != '/');
        if (pcVar7 == pcVar12) break;
        sVar8 = (long)pcVar7 - (long)pcVar12;
        pcVar20 = pcVar21;
        if (sVar8 == 1) goto LAB_004054e8;
        if (((cVar18 != '.') || (sVar8 != 2)) || (pcVar12[1] != '.')) goto LAB_0040536c;
        if (((pcVar9 + 1 < pcVar21) && (pcVar20 = pcVar21 + -1, pcVar9 < pcVar20)) &&
           (pcVar21[-2] != '/')) {
          for (pcVar20 = pcVar21 + -2; (pcVar9 != pcVar20 && (pcVar20[-1] != '/'));
              pcVar20 = pcVar20 + -1) {
          }
        }
      }
      if ((pcVar9 + 1 < pcVar21) && (pcVar21[-1] == '/')) {
        pcVar20 = pcVar21 + -1;
        pcVar7 = pcVar21;
      }
      else {
        pcVar7 = pcVar21 + 1;
        pcVar20 = pcVar21;
      }
      *pcVar20 = '\0';
      if (pcVar25 != pcVar7) {
        *(undefined8 *)(puVar23 + -0x110) = 0x40552f;
        pcVar9 = (char *)FUN_0040a5c0(pcVar9,pcVar20 + (1 - (long)pcVar9));
      }
      *(undefined8 *)(puVar23 + -0x110) = 0x40553c;
      free(*(void **)(puVar23 + -0xe0));
      if (*(long *)(puVar23 + -0xf0) != 0) {
        *(undefined8 *)(puVar23 + -0x110) = 0x40554e;
        FUN_004066a0(*(long *)(puVar23 + -0xf0));
      }
    }
  }
  else {
    *(undefined8 *)(puVar23 + -0x110) = 0x405705;
    piVar14 = __errno_location();
    pcVar9 = (char *)0x0;
    *piVar14 = 0x16;
  }
  return pcVar9;
LAB_004054e8:
  if (cVar18 == '.') goto LAB_004052f8;
LAB_0040536c:
  if (pcVar21[-1] != '/') {
    *pcVar21 = '/';
    pcVar21 = pcVar21 + 1;
  }
  if (pcVar25 <= pcVar21 + sVar8) {
    lVar22 = (long)pcVar21 - (long)pcVar9;
    *(size_t *)(puVar23 + -0x100) = sVar8;
    lVar13 = 0x1000 - (long)pcVar9;
    if (0xfff < (long)sVar8) {
      lVar13 = (sVar8 + 1) - (long)pcVar9;
    }
    *(undefined8 *)(puVar23 + -0x110) = 0x4053af;
    pcVar9 = (char *)FUN_0040a5c0(pcVar9,pcVar25 + lVar13);
    sVar8 = *(size_t *)(puVar23 + -0x100);
    pcVar25 = pcVar9 + (long)(pcVar25 + lVar13);
    pcVar21 = pcVar9 + lVar22;
  }
  *(size_t *)(puVar23 + -0x100) = sVar8;
  *(undefined8 *)(puVar23 + -0x110) = 0x4053d0;
  memcpy(pcVar21,pcVar12,sVar8);
  iVar5 = *(int *)(puVar23 + -0xf4);
  pcVar20 = pcVar21 + *(long *)(puVar23 + -0x100);
  *pcVar20 = '\0';
  pcVar21 = pcVar20;
  if ((iVar5 == 2) && (*(int *)(puVar23 + -0xd0) != 0)) {
LAB_004053eb:
    *(undefined4 *)(puVar23 + -0xb0) = 0;
LAB_004053f3:
    if ((*pcVar7 == '\0') || (*(int *)(puVar23 + -0xf4) == 2)) {
LAB_00405404:
      cVar4 = *pcVar7;
      pcVar20 = pcVar21;
      goto LAB_004052f8;
    }
    *(undefined8 *)(puVar23 + -0x110) = 0x40574d;
    piVar14 = __errno_location();
    iVar5 = 0x14;
LAB_00405755:
    *(int *)(puVar23 + -0xf4) = iVar5;
    *(int **)(puVar23 + -0x100) = piVar14;
    *(undefined8 *)(puVar23 + -0x110) = 0x405768;
    free(*(void **)(puVar23 + -0xe0));
    *(undefined8 *)(puVar23 + -0x110) = 0x405770;
    free(pcVar9);
    puVar19 = *(undefined4 **)(puVar23 + -0x100);
    uVar17 = *(undefined4 *)(puVar23 + -0xf4);
    if (*(long *)(puVar23 + -0xf0) == 0) goto LAB_004056b1;
  }
  else {
    if (*(int *)(puVar23 + -0xd0) == 0) {
      *(undefined8 *)(puVar23 + -0x110) = 0x40556d;
      iVar5 = __lxstat(1,pcVar9,(stat *)(puVar23 + -200));
    }
    else {
      *(undefined8 *)(puVar23 + -0x110) = 0x40544e;
      iVar5 = __xstat(1,pcVar9,(stat *)(puVar23 + -200));
    }
    if (iVar5 != 0) {
      *(undefined8 *)(puVar23 + -0x110) = 0x40545c;
      piVar14 = __errno_location();
      iVar5 = *piVar14;
      if (*(int *)(puVar23 + -0xf4) != 0) {
        if (*(int *)(puVar23 + -0xf4) != 1) goto LAB_004053eb;
        *(int *)(puVar23 + -0xcc) = iVar5;
        *(int **)(puVar23 + -0x100) = piVar14;
        *(undefined8 *)(puVar23 + -0x110) = 0x40548c;
        sVar8 = strspn(pcVar7,"/");
        piVar14 = *(int **)(puVar23 + -0x100);
        iVar5 = *(int *)(puVar23 + -0xcc);
        if ((pcVar7[sVar8] == '\0') && (iVar5 == 2)) goto LAB_004054a9;
      }
      goto LAB_00405755;
    }
    if ((*(uint *)(puVar23 + -0xb0) & 0xf000) != 0xa000) {
      if ((*(uint *)(puVar23 + -0xb0) & 0xf000) == 0x4000) goto LAB_00405404;
      goto LAB_004053f3;
    }
    if (*(long *)(puVar23 + -0xf0) == 0) {
      *(undefined8 *)(puVar23 + -0x110) = 0x40572f;
      lVar13 = FUN_00406460(7,0,FUN_00406e20,FUN_00406e90,FUN_00406ed0);
      *(long *)(puVar23 + -0xf0) = lVar13;
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)(puVar23 + -0x110) = 0x405742;
        FUN_0040a7b0();
      }
    }
    *(undefined8 *)(puVar23 + -0x110) = 0x4055a0;
    cVar4 = FUN_00405b90(*(undefined8 *)(puVar23 + -0xf0),*(undefined8 *)(puVar23 + -0xe8),
                         puVar23 + -200);
    if (cVar4 == '\0') {
      *(undefined8 *)(puVar23 + -0x110) = 0x4055bc;
      FUN_00405b00(*(undefined8 *)(puVar23 + -0xf0),*(undefined8 *)(puVar23 + -0xe8),puVar23 + -200)
      ;
      *(undefined8 *)(puVar23 + -0x110) = 0x4055c9;
      pcVar12 = (char *)FUN_0040d6b0(pcVar9,*(undefined8 *)(puVar23 + -0x98));
      if (pcVar12 != (char *)0x0) {
        *(undefined8 *)(puVar23 + -0x110) = 0x4055dd;
        __n = strlen(pcVar12);
        *(undefined8 *)(puVar23 + -0x110) = 0x4055e8;
        sVar8 = strlen(pcVar7);
        uVar1 = __n + 1 + sVar8;
        if (*(long *)(puVar23 + -0xd8) == 0) {
          *(size_t *)(puVar23 + -0x100) = sVar8;
          uVar15 = 0x1000;
          if (0xfff < uVar1) {
            uVar15 = uVar1;
          }
          *(ulong *)(puVar23 + -0xd8) = uVar15;
          *(undefined8 *)(puVar23 + -0x110) = 0x4057b2;
          uVar10 = FUN_0040a560(uVar15);
          sVar8 = *(size_t *)(puVar23 + -0x100);
          *(undefined8 *)(puVar23 + -0xe0) = uVar10;
        }
        else if (*(ulong *)(puVar23 + -0xd8) <= uVar1 && uVar1 != *(ulong *)(puVar23 + -0xd8)) {
          *(ulong *)(puVar23 + -0x100) = uVar1;
          *(size_t *)(puVar23 + -0xe8) = sVar8;
          *(undefined8 *)(puVar23 + -0x110) = 0x405867;
          uVar10 = FUN_0040a5c0(*(undefined8 *)(puVar23 + -0xe0),uVar1);
          sVar8 = *(size_t *)(puVar23 + -0xe8);
          *(undefined8 *)(puVar23 + -0xe0) = uVar10;
          *(undefined8 *)(puVar23 + -0xd8) = *(undefined8 *)(puVar23 + -0x100);
        }
        *(undefined8 *)(puVar23 + -0x110) = 0x40561c;
        memmove((void *)(*(long *)(puVar23 + -0xe0) + __n),pcVar7,sVar8 + 1);
        *(undefined8 *)(puVar23 + -0x110) = 0x40562c;
        pcVar7 = (char *)memcpy(*(void **)(puVar23 + -0xe0),pcVar12,__n);
        cVar4 = *pcVar12;
        pcVar21 = pcVar9 + 1;
        *(char **)(puVar23 + -0xe8) = pcVar7;
        if (cVar4 == '/') {
          *pcVar9 = '/';
        }
        else {
          bVar3 = pcVar21 < pcVar20;
          pcVar21 = pcVar20;
          if ((bVar3) && (pcVar21 = pcVar20 + -1, pcVar9 < pcVar21)) {
            cVar4 = pcVar20[-2];
            pcVar20 = pcVar21;
            while ((pcVar21 = pcVar20, cVar4 != '/' && (pcVar21 = pcVar20 + -1, pcVar9 != pcVar21)))
            {
              cVar4 = pcVar20[-2];
              pcVar20 = pcVar21;
            }
          }
        }
        *(undefined8 *)(puVar23 + -0x110) = 0x405654;
        free(pcVar12);
        goto LAB_00405404;
      }
      *(undefined8 *)(puVar23 + -0x110) = 0x4057f8;
      piVar14 = __errno_location();
      iVar5 = *piVar14;
      if ((*(int *)(puVar23 + -0xf4) == 2) && (iVar5 != 0xc)) goto LAB_004054a9;
    }
    else {
      if (*(int *)(puVar23 + -0xf4) == 2) {
LAB_004054a9:
        cVar4 = pcVar27[1];
        goto LAB_004052f8;
      }
      *(undefined8 *)(puVar23 + -0x110) = 0x405669;
      piVar14 = __errno_location();
      iVar5 = 0x28;
    }
    *(int *)(puVar23 + -0xf4) = iVar5;
    *(int **)(puVar23 + -0x100) = piVar14;
    *(undefined8 *)(puVar23 + -0x110) = 0x405684;
    free(*(void **)(puVar23 + -0xe0));
    *(undefined8 *)(puVar23 + -0x110) = 0x40568c;
    free(pcVar9);
    puVar19 = *(undefined4 **)(puVar23 + -0x100);
    uVar17 = *(undefined4 *)(puVar23 + -0xf4);
  }
  *(undefined4 *)(puVar23 + -0xf4) = uVar17;
  *(undefined4 **)(puVar23 + -0x100) = puVar19;
  *(undefined8 *)(puVar23 + -0x110) = 0x4056a8;
  FUN_004066a0(*(undefined8 *)(puVar23 + -0xf0));
  uVar17 = *(undefined4 *)(puVar23 + -0xf4);
  puVar19 = *(undefined4 **)(puVar23 + -0x100);
LAB_004056b1:
  *puVar19 = uVar17;
  return (char *)0x0;
}


char * FUN_00405250(char *param_1,uint param_2)

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
        __s = (char *)FUN_0040a560(0x1000);
        pcVar15 = __s + 0x1000;
        pcVar12 = __s + 1;
        *__s = '/';
      }
      else {
        __s = (char *)FUN_0040a7f0();
        if (__s == (char *)0x0) {
          return (char *)0x0;
        }
        sVar6 = strlen(__s);
        if (sVar6 < 0x1000) {
          __s = (char *)FUN_0040a5c0(__s,0x1000);
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
LAB_004052f8:
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
        if (sVar6 == 1) goto LAB_004054e8;
        if (((cVar11 != '.') || (sVar6 != 2)) || (pcVar7[1] != '.')) goto LAB_0040536c;
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
        __s = (char *)FUN_0040a5c0(__s,pcVar7 + (1 - (long)__s));
      }
      free(local_e0);
      if (local_f0 != 0) {
        FUN_004066a0(local_f0);
      }
    }
  }
  else {
    piVar9 = __errno_location();
    __s = (char *)0x0;
    *piVar9 = 0x16;
  }
  return __s;
LAB_004054e8:
  if (cVar11 == '.') goto LAB_004052f8;
LAB_0040536c:
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
    __s = (char *)FUN_0040a5c0(__s,pcVar15 + lVar3);
    pcVar15 = __s + (long)(pcVar15 + lVar3);
    pcVar13 = __s + lVar14;
  }
  memcpy(pcVar13,pcVar7,sVar6);
  pcVar12 = pcVar13 + sVar6;
  *pcVar12 = '\0';
  pcVar13 = pcVar12;
  if ((uVar10 == 2) && ((param_2 & 4) != 0)) {
LAB_004053eb:
    local_c8.st_mode = 0;
LAB_004053f3:
    if ((*param_1 == '\0') || (uVar10 == 2)) {
LAB_00405404:
      cVar4 = *param_1;
      pcVar12 = pcVar13;
      goto LAB_004052f8;
    }
    piVar9 = __errno_location();
    iVar5 = 0x14;
LAB_00405755:
    free(local_e0);
    free(__s);
    if (local_f0 == 0) goto LAB_004056b1;
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
        if (uVar10 != 1) goto LAB_004053eb;
        sVar6 = strspn(param_1,"/");
        if ((param_1[sVar6] == '\0') && (iVar5 == 2)) goto LAB_004054a9;
      }
      goto LAB_00405755;
    }
    if ((local_c8.st_mode & 0xf000) != 0xa000) {
      if ((local_c8.st_mode & 0xf000) == 0x4000) goto LAB_00405404;
      goto LAB_004053f3;
    }
    if ((local_f0 == 0) &&
       (local_f0 = FUN_00406460(7,0,FUN_00406e20,FUN_00406e90,FUN_00406ed0), local_f0 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0040a7b0();
    }
    cVar4 = FUN_00405b90(local_f0,local_e8,&local_c8);
    if (cVar4 == '\0') {
      FUN_00405b00(local_f0,local_e8,&local_c8);
      pcVar7 = (char *)FUN_0040d6b0(__s,local_c8.st_size);
      if (pcVar7 != (char *)0x0) {
        sVar6 = strlen(pcVar7);
        sVar8 = strlen(param_1);
        uVar1 = sVar6 + 1 + sVar8;
        if (local_d8 == 0) {
          local_d8 = 0x1000;
          if (0xfff < uVar1) {
            local_d8 = uVar1;
          }
          local_e0 = (void *)FUN_0040a560(local_d8);
        }
        else if (local_d8 < uVar1) {
          local_e0 = (void *)FUN_0040a5c0(local_e0,uVar1);
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
        goto LAB_00405404;
      }
      piVar9 = __errno_location();
      iVar5 = *piVar9;
      if ((uVar10 == 2) && (iVar5 != 0xc)) goto LAB_004054a9;
    }
    else {
      if (uVar10 == 2) {
LAB_004054a9:
        cVar4 = pcVar16[1];
        goto LAB_004052f8;
      }
      piVar9 = __errno_location();
      iVar5 = 0x28;
    }
    free(local_e0);
    free(__s);
  }
  FUN_004066a0(local_f0);
LAB_004056b1:
  *piVar9 = iVar5;
  return (char *)0x0;
}


void FUN_004058d0(undefined8 param_1)

{
  DAT_00617700 = param_1;
  return;
}


void FUN_004058e0(undefined param_1)

{
  DAT_006176f8 = param_1;
  return;
}


void FUN_004058f0(void)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  iVar1 = FUN_0040db30(stdout);
  if (iVar1 != 0) {
    piVar2 = __errno_location();
    if ((DAT_006176f8 == '\0') || (*piVar2 != 0x20)) {
      uVar3 = dcgettext(0,"write error",5);
      if (DAT_00617700 == 0) {
        error(0,*piVar2,&DAT_00413b3f,uVar3);
      }
      else {
        uVar4 = FUN_00409c30();
        error(0,*piVar2,"%s: %s",uVar4,uVar3);
      }
      goto LAB_0040596e;
    }
  }
  iVar1 = FUN_0040db30(stderr);
  if (iVar1 == 0) {
    return;
  }
LAB_0040596e:
                    /* WARNING: Subroutine does not return */
  _exit(DAT_00617568);
}


void FUN_00405990(void)

{
  long lVar1;
  
  lVar1 = FUN_00405a10();
  if (lVar1 != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0040a7b0();
}


ulong FUN_004059b0(char *param_1)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  cVar1 = *param_1;
  lVar2 = FUN_00405a70();
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


undefined * FUN_00405a10(void *param_1)

{
  size_t __n;
  undefined *__dest;
  
  __n = FUN_004059b0();
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


char * FUN_00405a70(char *param_1)

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


void FUN_00405ad0(char *param_1)

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


void FUN_00405b00(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_1 == 0) {
    return;
  }
  puVar1 = (undefined8 *)FUN_0040a560(0x18);
  uVar2 = FUN_0040a790(param_2);
  *puVar1 = uVar2;
  puVar1[1] = param_3[1];
  puVar1[2] = *param_3;
  puVar3 = (undefined8 *)FUN_00406c00(param_1,puVar1);
  if (puVar3 != (undefined8 *)0x0) {
    if (puVar1 != puVar3) {
      FUN_00406ed0(puVar1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0040a7b0();
}


ulong FUN_00405b90(long param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  if (param_1 != 0) {
    local_20 = param_3[1];
    local_18 = *param_3;
    local_28 = param_2;
    uVar1 = FUN_004061f0(param_1,&local_28);
    return uVar1 & 0xffffffffffffff00 | (ulong)(uVar1 != 0);
  }
  return 0;
}


ulong FUN_00405bd0(ulong param_1)

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
LAB_00405c50:
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
        if (uVar3 <= uVar4) goto LAB_00405c50;
        lVar5 = lVar5 + 8;
      } while (uVar1 != 0);
    }
    uVar3 = uVar3 + 2;
  } while( true );
}


ulong FUN_00405c70(ulong param_1,ulong param_2)

{
  return (param_1 >> 3 | param_1 << 0x3d) % param_2;
}


bool FUN_00405c80(long param_1,long param_2)

{
  return param_1 == param_2;
}


long FUN_00405c90(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = (*(code *)param_1[6])(param_2,param_1[2]);
  if (uVar1 <= (ulong)param_1[2] && param_1[2] != uVar1) {
    return uVar1 * 0x10 + *param_1;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


long FUN_00405cc0(long param_1,long param_2,long **param_3,char param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  
  plVar6 = (long *)FUN_00405c90();
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
LAB_00405d4c:
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
          goto LAB_00405d4c;
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

undefined8 FUN_00405de0(float **param_1)

{
  float fVar1;
  float *pfVar2;
  float fVar3;
  
  pfVar2 = *param_1;
  if (pfVar2 == (float *)&DAT_00412280) {
    return 1;
  }
  fVar1 = pfVar2[2];
  if ((((_DAT_00412294 < fVar1) && (fVar1 < DAT_00412298)) && (_DAT_0041229c < pfVar2[3])) &&
     (_DAT_004122a0 <= *pfVar2)) {
    fVar3 = *pfVar2 + _DAT_00412294;
    if (((fVar3 < pfVar2[1]) && (pfVar2[1] <= DAT_004122a4)) && (fVar3 < fVar1)) {
      return 1;
    }
  }
  *param_1 = (float *)&DAT_00412280;
  return 0;
}


undefined8 FUN_00405e60(long param_1,long **param_2,char param_3)

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
LAB_00405e88:
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
          plVar2 = (long *)FUN_00405c90(param_1,lVar6);
          plVar4 = (long *)plVar3[1];
          if (*plVar2 != 0) break;
          *plVar2 = lVar6;
          *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
          *plVar3 = 0;
          plVar3[1] = *(long *)(param_1 + 0x48);
          *(long **)(param_1 + 0x48) = plVar3;
          plVar3 = plVar4;
          if (plVar4 == (long *)0x0) goto LAB_00405eff;
        }
        plVar3[1] = plVar2[1];
        plVar2[1] = (long)plVar3;
        plVar3 = plVar4;
      } while (plVar4 != (long *)0x0);
LAB_00405eff:
      lVar6 = *plVar5;
    }
    plVar5[1] = 0;
    if (param_3 != '\0') goto LAB_00405e88;
    plVar3 = (long *)FUN_00405c90(param_1,lVar6);
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


undefined8 FUN_00405fb0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


undefined8 FUN_00405fc0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


undefined8 FUN_00405fd0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}


void FUN_00405fe0(long **param_1)

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


bool FUN_00406030(long **param_1)

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
LAB_00406048:
      plVar2 = plVar2 + 2;
    }
    lVar1 = plVar2[1];
    plVar4 = (long *)((long)plVar4 + 1);
    plVar3 = (long *)((long)plVar3 + 1);
    if (lVar1 == 0) goto LAB_00406048;
    do {
      lVar1 = *(long *)(lVar1 + 8);
      plVar3 = (long *)((long)plVar3 + 1);
    } while (lVar1 != 0);
    plVar2 = plVar2 + 2;
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004060a0(long **param_1,undefined8 param_2)

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
      if (param_1[1] <= plVar6) goto LAB_0040610d;
    }
  }
LAB_0040610d:
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
  __fprintf_chk((dVar7 * _DAT_00412140) / dVar8,param_2,1,"# buckets used:    %lu (%.2f%%)\n",plVar2
               );
  __fprintf_chk(param_2,1,"max bucket length: %lu\n",uVar5);
  return;
}


long FUN_004061f0(long param_1,long param_2)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)FUN_00405c90();
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


long FUN_00406250(long **param_1)

{
  long lVar1;
  long *plVar2;
  
  if (param_1[4] == (long *)0x0) {
    return 0;
  }
  plVar2 = *param_1;
  if (param_1[1] <= plVar2) {
    lVar1 = FUN_004023a5();
    return lVar1;
  }
  do {
    if (*plVar2 != 0) {
      return *plVar2;
    }
    plVar2 = plVar2 + 2;
  } while (plVar2 < param_1[1]);
  lVar1 = FUN_004023a5();
  return lVar1;
}


long FUN_004062a0(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = (long *)FUN_00405c90();
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


ulong FUN_00406310(long **param_1,long param_2,ulong param_3)

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


long FUN_00406380(long **param_1,code *param_2,undefined8 param_3)

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


ulong FUN_00406400(byte *param_1,ulong param_2)

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


void FUN_00406440(undefined8 *param_1)

{
  *(undefined *)(param_1 + 2) = 0;
  *param_1 = 0x3f80000000000000;
  param_1[1] = 0x3fb4fdf43f4ccccd;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ** FUN_00406460(ulong param_1,void *param_2,code *param_3,code *param_4,void *param_5)

{
  char cVar1;
  void **__ptr;
  void *__nmemb;
  void *pvVar2;
  float fVar3;
  float fVar4;
  
  if (param_3 == (code *)0x0) {
    param_3 = FUN_00405c70;
  }
  if (param_4 == (code *)0x0) {
    param_4 = FUN_00405c80;
  }
  __ptr = (void **)malloc(0x50);
  if (__ptr == (void **)0x0) {
    return (void **)0x0;
  }
  if (param_2 == (void *)0x0) {
    __ptr[5] = &DAT_00412280;
    cVar1 = FUN_00405de0(__ptr + 5);
    if (cVar1 == '\0') goto LAB_00406540;
    fVar4 = DAT_004122a8;
    if ((long)param_1 < 0) goto LAB_004065c3;
LAB_0040657e:
    fVar3 = (float)param_1;
LAB_00406587:
    fVar3 = fVar3 / fVar4;
    if (_DAT_004122ac <= fVar3) goto LAB_00406540;
    if (fVar3 < _DAT_004122b0) {
      param_1 = (ulong)fVar3;
    }
    else {
      param_1 = (long)(fVar3 - _DAT_004122b0) ^ 0x8000000000000000;
    }
  }
  else {
    __ptr[5] = param_2;
    cVar1 = FUN_00405de0(__ptr + 5);
    if (cVar1 == '\0') goto LAB_00406540;
    if (*(char *)((long)param_2 + 0x10) == '\0') {
      fVar4 = *(float *)((long)param_2 + 8);
      if (-1 < (long)param_1) goto LAB_0040657e;
LAB_004065c3:
      fVar3 = (float)(param_1 >> 1 | (ulong)((uint)param_1 & 1));
      fVar3 = fVar3 + fVar3;
      goto LAB_00406587;
    }
  }
  __nmemb = (void *)FUN_00405bd0(param_1);
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
LAB_00406540:
  free(__ptr);
  return (void **)0x0;
}


void FUN_004065f0(long **param_1)

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
        if (param_1[1] < plVar4 || param_1[1] == plVar4) goto LAB_00406683;
      }
      plVar5 = plVar5 + 2;
    } while (plVar5 <= param_1[1] && param_1[1] != plVar5);
  }
LAB_00406683:
  param_1[3] = (long *)0x0;
  param_1[4] = (long *)0x0;
  return;
}


void FUN_004066a0(long **param_1)

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
    if (plVar2 <= plVar4) goto LAB_0040673c;
    do {
      while (lVar5 = *plVar4, plVar3 = plVar4, lVar5 == 0) {
        plVar4 = plVar4 + 2;
        if (plVar2 <= plVar4) goto LAB_004066ff;
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
LAB_004066ff:
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
LAB_0040673c:
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

undefined4 FUN_00406780(void **param_1,ulong param_2)

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
    if (_DAT_004122ac <= fVar3) {
      return 0;
    }
    if (fVar3 < _DAT_004122b0) {
      param_2 = (ulong)fVar3;
    }
    else {
      param_2 = (long)(fVar3 - _DAT_004122b0) ^ 0x8000000000000000;
    }
  }
  local_58 = (void *)FUN_00405bd0(param_2);
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
      uVar2 = FUN_00405e60(&local_68,param_1,0);
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
      cVar1 = FUN_00405e60(param_1,&local_68,1);
      if ((cVar1 != '\0') && (cVar1 = FUN_00405e60(param_1,&local_68,0), cVar1 != '\0')) {
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

undefined8 FUN_00406980(long param_1,long param_2,long *param_3)

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
  lVar2 = FUN_00405cc0(param_1,param_2,&local_20,0);
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
    if ((long)uVar3 < 0) goto LAB_00406a7a;
LAB_004069eb:
    if (fVar7 <= (float)uVar3 * *(float *)(lVar2 + 8)) goto LAB_00406a02;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x28);
    fVar7 = (float)uVar6;
    uVar3 = *(ulong *)(param_1 + 0x10);
    if (-1 < (long)uVar3) goto LAB_004069eb;
LAB_00406a7a:
    fVar8 = (float)(uVar3 >> 1 | (ulong)((uint)uVar3 & 1));
    if (fVar7 <= (fVar8 + fVar8) * *(float *)(lVar2 + 8)) goto LAB_00406a02;
  }
  FUN_00405de0(param_1 + 0x28);
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
    if (_DAT_004122ac <= fVar7) {
      return 0xffffffff;
    }
    if (_DAT_004122b0 <= fVar7) {
      uVar6 = (long)(fVar7 - _DAT_004122b0) ^ 0x8000000000000000;
    }
    else {
      uVar6 = (ulong)fVar7;
    }
    cVar1 = FUN_00406780(param_1,uVar6);
    if (cVar1 == '\0') {
      return 0xffffffff;
    }
    lVar2 = FUN_00405cc0(param_1,param_2,&local_20,0);
    if (lVar2 != 0) {
      uVar5 = FUN_004023af();
      return uVar5;
    }
  }
LAB_00406a02:
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


undefined8 FUN_00406c00(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_10;
  
  iVar1 = FUN_00406980(param_1,param_2,&local_10);
  if (iVar1 != -1) {
    if (iVar1 == 0) {
      param_2 = local_10;
    }
    return param_2;
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_00406c40(long param_1,undefined8 param_2)

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
  
  lVar5 = FUN_00405cc0(param_1,param_2,&local_20,1);
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
      FUN_00405de0(param_1 + 0x28);
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
        if (_DAT_004122b0 <= fVar7) {
          uVar6 = (long)(fVar7 - _DAT_004122b0) ^ 0x8000000000000000;
        }
        else {
          uVar6 = (ulong)fVar7;
        }
        cVar4 = FUN_00406780(param_1,uVar6);
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


ulong FUN_00406e20(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_0040dc40(*param_1);
  return (uVar1 ^ param_1[1]) % param_2;
}


ulong FUN_00406e50(long param_1,ulong param_2)

{
  return *(ulong *)(param_1 + 8) % param_2;
}


undefined8 FUN_00406e60(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if ((param_1[1] == param_2[1]) && (param_1[2] == param_2[2])) {
    uVar1 = FUN_00409e00(*param_1,*param_2);
    return uVar1;
  }
  return 0;
}


ulong FUN_00406e90(char **param_1,char **param_2)

{
  int iVar1;
  undefined4 extraout_var;
  
  if ((param_1[1] == param_2[1]) && (param_1[2] == param_2[2])) {
    iVar1 = strcmp(*param_1,*param_2);
    return CONCAT44(extraout_var,iVar1) & 0xffffffffffffff00 | (ulong)(iVar1 == 0);
  }
  return 0;
}


void FUN_00406ed0(void **param_1)

{
  free(*param_1);
  free(param_1);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00406f48) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406ef0(int param_1)

{
  ulong uVar1;
  float10 fVar2;
  float10 param_7;
  
  if ((float10)_DAT_004122b0 <= param_7) {
    uVar1 = (long)ROUND(param_7 - (float10)_DAT_004122b0) ^ 0x8000000000000000;
  }
  else {
    uVar1 = (ulong)ROUND(param_7);
  }
  fVar2 = (float10)uVar1;
  if ((long)uVar1 < 0) {
    fVar2 = fVar2 + (float10)_DAT_004122ac;
  }
  if (((param_1 == 0) && (param_7 != fVar2)) && ((long)(uVar1 + 1) < 0)) {
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_00406fb0(ulong param_1,char *param_2,uint param_3,ulong param_4,ulong param_5)

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
  undefined8 *__dest;
  undefined8 *puVar21;
  undefined8 *puVar22;
  byte *pbVar23;
  bool bVar24;
  float10 fVar25;
  float10 fVar26;
  float10 fVar27;
  undefined8 *local_a8;
  undefined local_68 [56];
  
  uVar5 = param_3 & 0x20;
  uVar14 = param_3 & 3;
  uVar6 = (-(uint)(uVar5 == 0) & 0xffffffe8) + 0x400;
  plVar9 = localeconv();
  puVar21 = (undefined8 *)plVar9->decimal_point;
  uVar10 = strlen((char *)puVar21);
  bVar24 = 0xf < uVar10 - 1;
  if (bVar24) {
    puVar21 = (undefined8 *)&DAT_0041218c;
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
  local_a8 = (undefined8 *)(param_2 + 0x287);
  uVar15 = (uint)uVar10;
  if (param_4 < param_5) {
    if (param_4 != 0) {
      auVar3 = ZEXT816(param_5) / ZEXT816(param_4);
      if (param_5 % param_4 == 0) {
        uVar17 = SUB168(ZEXT816(param_1) / (auVar3 & (undefined  [16])0xffffffffffffffff),0);
        auVar2 = ZEXT816((ulong)(SUB168(ZEXT816(param_1) %
                                        (auVar3 & (undefined  [16])0xffffffffffffffff),0) * 10));
        uVar18 = SUB168(auVar2 % (auVar3 & (undefined  [16])0xffffffffffffffff),0) * 2;
        uVar8 = SUB164(auVar2 / (auVar3 & (undefined  [16])0xffffffffffffffff),0);
        uVar12 = (ulong)uVar8;
        if (uVar18 < SUB168(auVar3,0)) {
          uVar19 = (uint)(uVar18 != 0);
        }
        else {
          uVar19 = (SUB168(auVar3,0) < uVar18) + 2;
        }
        goto joined_r0x00407348;
      }
    }
LAB_00407095:
    fVar25 = (float10)param_4;
    if ((long)param_4 < 0) {
      fVar25 = fVar25 + (float10)_DAT_004122ac;
    }
    if ((long)param_5 < 0) {
      fVar25 = fVar25 / ((float10)param_5 + (float10)_DAT_004122ac);
      if ((long)param_1 < 0) goto LAB_004072a8;
LAB_004070d2:
      fVar25 = (float10)param_1 * fVar25;
      if ((param_3 & 0x10) != 0) goto LAB_004070df;
LAB_004071f0:
      if ((uVar14 != 1) && (fVar25 < _DAT_00412320)) {
        FUN_00406ef0();
        uVar10 = SUB108(fVar25,0);
      }
      __sprintf_chk(param_2,1,0xffffffffffffffff,"%.0Lf",uVar10);
      uVar16 = 0xffffffff;
      __n = strlen(param_2);
      sVar11 = __n;
    }
    else {
      fVar25 = fVar25 / (float10)param_5;
      if (-1 < (long)param_1) goto LAB_004070d2;
LAB_004072a8:
      fVar25 = ((float10)param_1 + (float10)_DAT_004122ac) * fVar25;
      if ((param_3 & 0x10) == 0) goto LAB_004071f0;
LAB_004070df:
      uVar16 = 0;
      fVar27 = (float10)uVar6;
      do {
        fVar26 = fVar27;
        uVar16 = uVar16 + 1;
        fVar27 = fVar26 * (float10)uVar6;
        if (fVar25 < fVar27) break;
      } while (uVar16 != 8);
      fVar25 = fVar25 / fVar26;
      uVar17 = uVar10 + 2 + (ulong)(uVar5 == 0);
      if (uVar14 == 1) {
        __sprintf_chk(param_2,1,0xffffffffffffffff,"%.1Lf");
        __n = strlen(param_2);
        if (__n <= uVar17) goto LAB_00407618;
      }
      else {
        if (fVar25 < _DAT_00412320) {
          FUN_00406ef0();
        }
        __sprintf_chk(param_2,1,0xffffffffffffffff,"%.1Lf");
        __n = strlen(param_2);
        if (__n <= uVar17) {
LAB_00407618:
          if (((param_3 & 8) == 0) || (param_2[__n - 1] != '0')) {
            sVar11 = __n - (uVar10 + 1);
            goto LAB_00407240;
          }
          if (uVar14 == 1) goto LAB_004071b6;
        }
        if (fVar25 * (float10)_DAT_00412314 < _DAT_00412320) {
          FUN_00406ef0(uVar14);
        }
      }
LAB_004071b6:
      __sprintf_chk(param_2,1,0xffffffffffffffff,"%.0Lf");
      __n = strlen(param_2);
      sVar11 = __n;
    }
LAB_00407240:
    puVar22 = (undefined8 *)((long)local_a8 - __n);
    memmove(puVar22,param_2,__n);
    __dest = (undefined8 *)(sVar11 + (long)puVar22);
  }
  else {
    if ((param_4 % param_5 != 0) ||
       (uVar17 = SUB168(ZEXT816(param_4) / ZEXT816(param_5),0) * param_1,
       SUB168(ZEXT816(uVar17) /
              (ZEXT816(param_4) / ZEXT816(param_5) & (undefined  [16])0xffffffffffffffff),0) !=
       param_1)) goto LAB_00407095;
    uVar19 = 0;
    uVar12 = 0;
    uVar8 = 0;
joined_r0x00407348:
    puVar22 = local_a8;
    if ((param_3 & 0x10) == 0) {
      uVar16 = 0xffffffff;
LAB_00407361:
      if (uVar14 != 1) goto LAB_00407370;
      __dest = local_a8;
      if (5 < (int)(uVar8 + (((uint)uVar17 & 1) + uVar19 != 0))) goto LAB_00407381;
LAB_004073b3:
      do {
        puVar22 = (undefined8 *)((long)puVar22 + -1);
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
      if (uVar17 < uVar20) goto LAB_00407361;
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
        if (uVar16 == 8) goto LAB_00407361;
      }
      if (9 < uVar17) goto LAB_00407361;
      if (uVar14 == 1) {
        bVar24 = 2 < (uVar8 & 1) + uVar19;
      }
      else {
        bVar24 = uVar19 != 0 && uVar14 == 0;
      }
      if (bVar24) {
        uVar8 = uVar8 + 1;
        if (uVar8 != 10) goto LAB_00407818;
        uVar17 = uVar17 + 1;
        if (uVar17 == 10) goto LAB_004077ce;
        uVar19 = 0;
LAB_00407787:
        if ((param_3 & 8) != 0) goto LAB_004077d0;
        cVar4 = '0';
      }
      else {
        if (uVar8 == 0) goto LAB_00407787;
LAB_00407818:
        cVar4 = (char)uVar8 + '0';
      }
      param_2[0x286] = cVar4;
      uVar12 = uVar10 & 0xffffffff;
      puVar22 = (undefined8 *)(param_2 + (0x286 - uVar10));
      if (uVar15 < 8) {
        if ((uVar10 & 4) == 0) {
          if (((int)uVar12 != 0) &&
             (*(undefined *)puVar22 = *(undefined *)puVar21, (uVar10 & 2) != 0)) {
            *(undefined2 *)((long)puVar22 + (uVar12 - 2)) =
                 *(undefined2 *)((long)puVar21 + (uVar12 - 2));
          }
        }
        else {
          *(undefined4 *)puVar22 = *(undefined4 *)puVar21;
          *(undefined4 *)((long)puVar22 + (uVar12 - 4)) =
               *(undefined4 *)((long)puVar21 + (uVar12 - 4));
        }
      }
      else {
        *puVar22 = *puVar21;
        *(undefined8 *)((long)puVar22 + ((uVar10 & 0xffffffff) - 8)) =
             *(undefined8 *)((long)puVar21 + ((uVar10 & 0xffffffff) - 8));
        lVar13 = (long)puVar22 - ((ulong)(puVar22 + 1) & 0xfffffffffffffff8);
        uVar8 = (int)lVar13 + uVar15 & 0xfffffff8;
        if (7 < uVar8) {
          uVar19 = 0;
          do {
            uVar12 = (ulong)uVar19;
            uVar19 = uVar19 + 8;
            *(undefined8 *)(((ulong)(puVar22 + 1) & 0xfffffffffffffff8) + uVar12) =
                 *(undefined8 *)((long)puVar21 + (uVar12 - lVar13));
          } while (uVar19 < uVar8);
        }
      }
LAB_004077ce:
      uVar19 = 0;
LAB_004077d0:
      __dest = puVar22;
      if (uVar14 == 1) goto LAB_004073b3;
      uVar8 = 0;
LAB_00407370:
      __dest = puVar22;
      if ((uVar14 != 0) || ((int)(uVar19 + uVar8) < 1)) goto LAB_004073b3;
LAB_00407381:
      uVar17 = uVar17 + 1;
      __dest = puVar22;
      if ((((param_3 & 0x10) == 0) || (uVar6 != uVar17)) || (uVar16 == 8)) goto LAB_004073b3;
      uVar16 = uVar16 + 1;
      if ((param_3 & 8) == 0) {
        *(undefined *)((long)puVar22 + -1) = 0x30;
        puVar22 = (undefined8 *)((long)puVar22 + ~uVar10);
        uVar17 = uVar10 & 0xffffffff;
        if (uVar15 < 8) {
          if ((uVar10 & 4) == 0) {
            if (((int)uVar17 != 0) &&
               (*(undefined *)puVar22 = *(undefined *)puVar21, (uVar10 & 2) != 0)) {
              *(undefined2 *)((long)puVar22 + (uVar17 - 2)) =
                   *(undefined2 *)((long)puVar21 + (uVar17 - 2));
            }
          }
          else {
            *(undefined4 *)puVar22 = *(undefined4 *)puVar21;
            *(undefined4 *)((long)puVar22 + (uVar17 - 4)) =
                 *(undefined4 *)((long)puVar21 + (uVar17 - 4));
          }
        }
        else {
          *puVar22 = *puVar21;
          *(undefined8 *)((long)puVar22 + ((uVar10 & 0xffffffff) - 8)) =
               *(undefined8 *)((long)puVar21 + ((uVar10 & 0xffffffff) - 8));
          lVar13 = (long)puVar22 - ((ulong)(puVar22 + 1) & 0xfffffffffffffff8);
          uVar14 = (int)lVar13 + uVar15 & 0xfffffff8;
          if (7 < uVar14) {
            uVar15 = 0;
            do {
              uVar10 = (ulong)uVar15;
              uVar15 = uVar15 + 8;
              *(undefined8 *)(((ulong)(puVar22 + 1) & 0xfffffffffffffff8) + uVar10) =
                   *(undefined8 *)((long)puVar21 + (uVar10 - lVar13));
            } while (uVar15 < uVar14);
          }
        }
      }
      *(undefined *)((long)puVar22 + -1) = 0x31;
      __dest = puVar22;
      puVar22 = (undefined8 *)((long)puVar22 + -1);
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
      puVar22 = (undefined8 *)((long)__dest - uVar10);
      uVar17 = uVar17 - uVar10;
      memcpy(puVar22,local_68 + uVar17,uVar10);
      if (uVar17 == 0) goto LAB_00407265;
      __dest = (undefined8 *)((long)puVar22 - sVar11);
      memcpy(__dest,__s,sVar11);
    }
    puVar22 = (undefined8 *)((long)__dest - uVar17);
    memcpy(puVar22,local_68,uVar17);
  }
LAB_00407265:
  if ((param_3 & 0x80) == 0) goto LAB_00407288;
  if (uVar16 == 0xffffffff) {
    if (param_5 < 2) {
      uVar16 = 0;
      goto LAB_00407275;
    }
    uVar16 = 1;
    uVar10 = 1;
    do {
      uVar10 = uVar10 * uVar6;
      if (param_5 <= uVar10) break;
      uVar16 = uVar16 + 1;
    } while (uVar16 != 8);
    if ((param_3 & 0x40) != 0) goto LAB_004074f1;
LAB_00407510:
    if ((uVar5 == 0) && (uVar16 == 1)) {
      *(undefined *)local_a8 = 0x6b;
      puVar21 = (undefined8 *)((long)local_a8 + 1);
      if ((param_3 & 0x100) == 0) {
LAB_00407743:
        local_a8 = (undefined8 *)((long)local_a8 + 1);
        goto LAB_00407288;
      }
    }
    else {
      *(undefined *)local_a8 = (&UNK_00412308)[(int)uVar16];
      if ((param_3 & 0x100) == 0) goto LAB_00407743;
      puVar21 = (undefined8 *)((long)local_a8 + 1);
      if (uVar5 != 0) {
        *(undefined *)((long)local_a8 + 1) = 0x69;
        puVar21 = (undefined8 *)((long)local_a8 + 2);
      }
    }
  }
  else {
LAB_00407275:
    if ((param_3 & 0x100 | uVar16) == 0) goto LAB_00407288;
    if ((param_3 & 0x40) != 0) {
LAB_004074f1:
      local_a8 = (undefined8 *)(param_2 + 0x288);
      param_2[0x287] = ' ';
    }
    if (uVar16 != 0) goto LAB_00407510;
    puVar21 = local_a8;
    if ((param_3 & 0x100) == 0) goto LAB_00407288;
  }
  local_a8 = (undefined8 *)((long)puVar21 + 1);
  *(undefined *)puVar21 = 0x42;
LAB_00407288:
  *(undefined *)local_a8 = 0;
  return puVar22;
}


char * FUN_00407980(char *param_1,uint *param_2,long *param_3)

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
    iVar2 = FUN_0040d7b0(param_1,&PTR_s_human_readable_004122f0,&DAT_004122e0,4);
    if (iVar2 < 0) {
      pcVar3 = (char *)FUN_0040a8b0(param_1,local_30,0,param_3,"eEgGkKmMpPtTyYzZ0");
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
        return &DAT_00000004;
      }
    }
    else {
      *param_3 = 1;
      pcVar3 = (char *)0x0;
      *param_2 = uVar5 | *(uint *)(&DAT_004122e0 + (long)iVar2 * 4);
    }
  }
  return pcVar3;
}


char * FUN_00407b40(ulong param_1,long param_2)

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


long FUN_00407b90(char *param_1,undefined *param_2,long param_3,ulong *param_4,int param_5,
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
LAB_00407d40:
        local_68 = (wchar_t *)0x0;
        __s = (char *)0x0;
        lVar15 = -1;
        goto LAB_00407cae;
      }
      goto LAB_00407bc8;
    }
    __n = sVar7 + 1;
    local_68 = (wchar_t *)malloc(__n * 4);
    local_50 = param_1;
    if (local_68 == (wchar_t *)0x0) {
      __s = (char *)0x0;
      if ((param_6 & 1) == 0) goto LAB_00407d40;
      goto LAB_00407bd6;
    }
    sVar8 = mbstowcs(local_68,param_1,__n);
    if (sVar8 == 0) {
      __s = (char *)0x0;
      goto LAB_00407bd6;
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
      if (!bVar2) goto LAB_00407eb0;
      local_48 = wcstombs((char *)0x0,local_68,0);
LAB_00407e20:
      local_48 = local_48 + 1;
      __s = (char *)malloc(local_48);
      if (__s == (char *)0x0) {
        if ((param_6 & 1) == 0) {
          lVar15 = -1;
          goto LAB_00407cae;
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
      goto LAB_00407bd6;
    }
    iVar3 = wcswidth(local_68,__n);
    uVar14 = (ulong)iVar3;
LAB_00407eb0:
    uVar6 = *param_4;
    local_48 = uVar4;
    if (uVar6 < uVar14) goto LAB_00407e20;
    __s = (char *)0x0;
LAB_00407cdb:
    uVar16 = uVar4;
    uVar9 = uVar14;
    if (uVar6 <= uVar14) goto LAB_00407be8;
    uVar6 = uVar6 - uVar14;
    *param_4 = uVar14;
    if (param_5 != 0) goto LAB_00407bf8;
LAB_00407cfd:
    uVar4 = 0;
    uVar14 = uVar6;
  }
  else {
LAB_00407bc8:
    local_68 = (wchar_t *)0x0;
    __s = (char *)0x0;
    local_50 = param_1;
LAB_00407bd6:
    uVar6 = *param_4;
    uVar9 = uVar6;
    uVar16 = uVar6;
    if (uVar14 <= uVar6) goto LAB_00407cdb;
LAB_00407be8:
    uVar6 = 0;
    *param_4 = uVar9;
    if (param_5 == 0) goto LAB_00407cfd;
LAB_00407bf8:
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
LAB_00407cae:
  free(local_68);
  free(__s);
  return lVar15;
}


void * FUN_00407f30(undefined8 param_1,ulong *param_2,undefined4 param_3,undefined4 param_4)

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
    uVar2 = FUN_00407b90(param_1,__ptr,__size,param_2,param_3,param_4);
    if (uVar2 == 0xffffffffffffffff) break;
    __ptr_00 = __ptr;
    if (uVar2 < __size) {
      return __ptr;
    }
  }
  free(__ptr);
  return (void *)0x0;
}


int FUN_00407fd0(byte *param_1,long param_2,uint param_3)

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
          if (((*ppuVar6)[*param_1] & 2) == 0) goto LAB_0040814a;
        }
        else {
LAB_0040814a:
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
          if (((char)bVar2 < '%') && (3 < (byte)(bVar2 - 0x20))) goto LAB_00408042;
LAB_0040801b:
          param_1 = param_1 + 1;
          iVar8 = iVar8 + 1;
        }
        else {
          if (('@' < (char)bVar2) && (((char)bVar2 < '`' || ((byte)(bVar2 + 0x9f) < 0x1e))))
          goto LAB_0040801b;
LAB_00408042:
          local_40[0] = (mbstate_t)0x0;
          do {
            lVar5 = FUN_0040c400(&local_44,param_1,(long)pbVar1 - (long)param_1,local_40);
            if (lVar5 == -1) {
              if ((param_3 & 1) != 0) {
                return -1;
              }
              goto LAB_0040801b;
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


void FUN_00408190(char *param_1,undefined4 param_2)

{
  size_t sVar1;
  
  sVar1 = strlen(param_1);
  FUN_00407fd0(param_1,sVar1,param_2);
  return;
}


void FUN_004081c0(byte *param_1)

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
      pbVar6 = &DAT_00412368;
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
        pbVar6 = &DAT_00412370;
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
  DAT_00617708 = param_1;
  program_invocation_name = param_1;
  return;
}


char * FUN_00408260(char *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  byte *pbVar3;
  
  pcVar2 = (char *)dcgettext(0,param_1,5);
  if (param_1 == pcVar2) {
    pbVar3 = (byte *)FUN_0040dc80();
    if ((*pbVar3 & 0xdf) == 0x55) {
      if (((((pbVar3[1] & 0xdf) != 0x54) || ((pbVar3[2] & 0xdf) != 0x46)) || (pbVar3[3] != 0x2d)) ||
         ((pbVar3[4] != 0x38 || (pbVar3[5] != 0)))) {
LAB_00408338:
        pcVar2 = "\"";
        if (param_2 != 9) {
          pcVar2 = "\'";
        }
        return pcVar2;
      }
      cVar1 = *pcVar2;
      pcVar2 = &DAT_0041237f;
      if (cVar1 != '`') {
        pcVar2 = &DAT_00412374;
      }
    }
    else {
      if (((((*pbVar3 & 0xdf) != 0x47) || ((pbVar3[1] & 0xdf) != 0x42)) || (pbVar3[2] != 0x31)) ||
         (((pbVar3[3] != 0x38 || (pbVar3[4] != 0x30)) ||
          ((pbVar3[5] != 0x33 || ((pbVar3[6] != 0x30 || (pbVar3[7] != 0)))))))) goto LAB_00408338;
      cVar1 = *pcVar2;
      pcVar2 = &DAT_0041237b;
      if (cVar1 != '`') {
        pcVar2 = &DAT_00412378;
      }
    }
  }
  return pcVar2;
}


ulong FUN_00408360(undefined *param_1,ulong param_2,char *param_3,ulong param_4,int param_5,
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
LAB_00408fb1:
    if (param_2 != 0) {
      bVar3 = false;
      local_5b = false;
      bVar2 = true;
      local_70 = 0;
      goto LAB_00408be6;
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
      goto LAB_00408fb1;
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
      param_8 = (char *)FUN_00408260(&DAT_00412383,param_5);
      param_9 = (char *)FUN_00408260(&DAT_004138af);
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
LAB_004083f8:
  uVar22 = 0;
  bVar5 = local_5b;
LAB_00408408:
  bVar23 = param_4 != uVar22;
  if (param_4 == 0xffffffffffffffff) {
    bVar23 = param_3[uVar22] != '\0';
  }
  bVar26 = bVar6;
  if (!bVar23) goto LAB_00408b88;
  bVar20 = (bool)(param_5 != 2 & bVar6);
  __s1 = (byte *)(param_3 + uVar22);
  uVar16 = uVar15;
  bVar4 = bVar3;
  if (bVar20) {
    if (local_a0 == 0) {
LAB_00408b00:
      uVar19 = (ulong)*__s1;
      switch(uVar19) {
      case 0:
        goto switchD_00408b12_caseD_0;
      default:
        bVar20 = false;
        goto switchD_0040897e_caseD_1;
      case 7:
        bVar17 = 0x61;
        goto LAB_00408815;
      case 8:
        bVar17 = 0x62;
        break;
      case 9:
switchD_00408b12_caseD_9:
        bVar17 = 0x74;
        break;
      case 10:
switchD_00408b12_caseD_a:
        bVar17 = 0x6e;
        break;
      case 0xb:
switchD_00408b12_caseD_b:
        bVar17 = 0x76;
        goto LAB_00408815;
      case 0xc:
switchD_00408b12_caseD_c:
        bVar17 = 0x66;
LAB_00408815:
        if (local_5c) {
          bVar25 = false;
          goto LAB_00408768;
        }
LAB_00408820:
        bVar23 = false;
        goto LAB_004085db;
      case 0xd:
        bVar20 = false;
switchD_004084f8_caseD_d:
        bVar25 = param_5 == 2;
        uVar19 = 0xd;
        bVar13 = 0x72;
        goto LAB_00408730;
      case 0x20:
        bVar25 = false;
LAB_00408b5a:
        uVar19 = 0x20;
        goto LAB_00408b22;
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
switchD_004084f8_caseD_21:
        bVar25 = false;
        goto LAB_0040873b;
      case 0x23:
      case 0x7e:
        bVar26 = false;
LAB_00408b3a:
        if (uVar22 == 0) {
          bVar25 = false;
          bVar23 = bVar20;
          bVar20 = bVar26;
          goto LAB_00408548;
        }
        bVar23 = false;
        goto LAB_0040855f;
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
LAB_00408b22:
        bVar24 = false;
        bVar23 = bVar20;
        bVar20 = bVar25;
        goto LAB_00408561;
      case 0x27:
        bVar20 = false;
        goto switchD_0040897e_caseD_27;
      case 0x3f:
        bVar20 = false;
        goto switchD_0040897e_caseD_3f;
      case 0x5c:
        bVar20 = false;
        goto switchD_004084f8_caseD_5c;
      case 0x7b:
      case 0x7d:
        bVar20 = false;
        goto switchD_0040897e_caseD_7b;
      }
      bVar25 = false;
      bVar23 = false;
      goto joined_r0x00408757;
    }
    if ((param_4 == 0xffffffffffffffff) && (1 < local_a0)) {
      param_4 = strlen(param_3);
    }
    if ((param_4 < uVar22 + local_a0) || (iVar7 = memcmp(__s1,local_78,local_a0), iVar7 != 0))
    goto LAB_00408b00;
    if (!local_5c) {
      uVar19 = (ulong)*__s1;
      bVar25 = bVar20;
      switch(uVar19) {
      case 0:
        goto switchD_004084f8_caseD_0;
      default:
        goto switchD_0040897e_caseD_1;
      case 7:
        bVar17 = 0x61;
        goto LAB_00408820;
      case 8:
        bVar25 = false;
        bVar23 = false;
        bVar17 = 0x62;
        break;
      case 9:
        goto switchD_00408b12_caseD_9;
      case 10:
        goto switchD_00408b12_caseD_a;
      case 0xb:
        goto switchD_00408b12_caseD_b;
      case 0xc:
        goto switchD_00408b12_caseD_c;
      case 0xd:
        goto switchD_004084f8_caseD_d;
      case 0x20:
        goto LAB_00408b5a;
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
        goto switchD_004084f8_caseD_21;
      case 0x23:
      case 0x7e:
        bVar26 = bVar20;
        goto LAB_00408b3a;
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
        goto LAB_00408b22;
      case 0x27:
        goto switchD_0040897e_caseD_27;
      case 0x3f:
        goto switchD_0040897e_caseD_3f;
      case 0x5c:
        goto switchD_004084f8_caseD_5c;
      case 0x7b:
      case 0x7d:
        goto switchD_0040897e_caseD_7b;
      }
      goto LAB_004085a2;
    }
    goto LAB_0040877a;
  }
  uVar19 = (ulong)*__s1;
  switch(uVar19) {
  case 0:
    if (bVar6) {
switchD_00408b12_caseD_0:
      if (!local_5c) {
        bVar20 = false;
switchD_004084f8_caseD_0:
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
            goto LAB_00408658;
          }
LAB_0040889a:
          param_1[uVar16] = 0x5c;
          uVar15 = uVar16;
        }
        else if (uVar15 < uVar9) goto LAB_0040889a;
        uVar16 = uVar15 + 1;
        bVar24 = bVar23;
        if (param_5 == 2) {
          bVar17 = 0x30;
          bVar23 = false;
          bVar4 = bVar3;
          goto LAB_00408658;
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
LAB_004088d9:
        bVar17 = (byte)uVar19;
        bVar23 = false;
        uVar15 = uVar16;
        bVar4 = bVar3;
        if ((bool)(bVar6 ^ 1U | bVar26)) goto LAB_00408658;
        goto LAB_00408561;
      }
      bVar26 = param_5 == 2;
      goto LAB_0040876c;
    }
    if ((param_6 & 1) == 0) {
      bVar25 = param_5 == 2;
      uVar19 = 0;
      bVar23 = false;
      bVar20 = false;
      goto LAB_00408548;
    }
    uVar22 = uVar22 + 1;
    goto LAB_00408408;
  default:
switchD_0040897e_caseD_1:
    bVar25 = bVar6;
    if (sVar8 != 1) {
      local_40[0] = (mbstate_t)0x0;
      if (param_4 == 0xffffffffffffffff) {
        param_4 = strlen(param_3);
      }
      uVar21 = 0;
      do {
        uVar1 = uVar22 + uVar21;
        lVar11 = FUN_0040c400(&local_44,param_3 + uVar1,param_4 - uVar1,local_40);
        if (lVar11 == 0) break;
        if (lVar11 == -1) {
          bVar23 = false;
          goto LAB_0040928a;
        }
        if (lVar11 == -2) {
          if ((param_4 <= uVar1) || (param_3[uVar1] == '\0')) goto LAB_004093c7;
          goto LAB_004093b7;
        }
        if (((param_5 == 2) && (local_5c)) && (lVar11 != 1)) {
          pcVar12 = param_3 + uVar1 + 1;
          do {
            if (((byte)(*pcVar12 + 0xa5U) < 0x22) &&
               ((1L << (*pcVar12 + 0xa5U & 0x3f) & 0x20000002bU) != 0)) {
              param_5 = 2;
              goto LAB_0040876c;
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
      goto LAB_0040928a;
    }
    ppuVar10 = __ctype_b_loc();
    uVar21 = 1;
    bVar25 = ((*ppuVar10)[uVar19] & 0x4000) == 0;
    bVar23 = !bVar25;
    bVar25 = (bool)(bVar25 & bVar6);
    goto LAB_00408954;
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
    goto LAB_00408992;
  case 10:
    uVar19 = 10;
    bVar13 = 0x6e;
    goto LAB_00408992;
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
LAB_00408992:
    bVar25 = param_5 == 2;
    bVar20 = (bool)(local_5c & bVar25);
    if (bVar20) {
LAB_004089aa:
      param_5 = 2;
      goto LAB_0040876c;
    }
    break;
  case 0x20:
    uVar19 = 0x20;
    goto LAB_00408536;
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
LAB_00408536:
    bVar25 = param_5 == 2;
    if ((local_5c) && (bVar25)) goto LAB_004089aa;
    goto LAB_00408548;
  case 0x23:
  case 0x7e:
LAB_0040852d:
    bVar25 = param_5 == 2;
    if (uVar22 == 0) goto LAB_00408536;
    goto LAB_0040873b;
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
    goto switchD_0040897e_caseD_25;
  case 0x27:
switchD_0040897e_caseD_27:
    bVar5 = bVar23;
    if (param_5 != 2) {
      bVar25 = false;
      uVar19 = 0x27;
      goto LAB_00408548;
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
      goto LAB_00408658;
    }
    goto LAB_0040876c;
  case 0x3f:
switchD_0040897e_caseD_3f:
    if (param_5 == 2) {
      if (!local_5c) {
        bVar17 = 0x3f;
        bVar24 = false;
        bVar23 = false;
        goto LAB_00408658;
      }
      goto LAB_0040876c;
    }
    if (param_5 != 5) {
      bVar25 = param_5 == 2;
      uVar19 = 0x3f;
      bVar23 = false;
      goto LAB_00408548;
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
        goto LAB_004088d9;
      }
      goto LAB_0040877a;
    }
    bVar25 = false;
    uVar19 = 0x3f;
    bVar23 = false;
    goto LAB_00408548;
  case 0x5c:
    if (param_5 != 2) {
switchD_004084f8_caseD_5c:
      uVar19 = 0x5c;
      bVar17 = 0x5c;
      bVar13 = 0x5c;
      bVar25 = (bool)(bVar6 & local_5c & local_a0 != 0);
      if (!bVar25) break;
      uVar22 = uVar22 + 1;
      bVar23 = false;
      goto LAB_00408674;
    }
    if (local_5c) goto LAB_0040876c;
    uVar22 = uVar22 + 1;
    bVar23 = false;
    bVar17 = 0x5c;
    goto LAB_00408674;
  case 0x7b:
  case 0x7d:
switchD_0040897e_caseD_7b:
    bVar24 = param_4 != 1;
    if (param_4 == 0xffffffffffffffff) {
      bVar24 = param_3[1] != '\0';
    }
    bVar25 = param_5 == 2;
    if (!bVar24) goto LAB_0040852d;
    goto LAB_0040873b;
  }
LAB_00408730:
  if (!bVar6) {
LAB_0040873b:
    bVar23 = false;
    goto LAB_00408548;
  }
  bVar23 = false;
  bVar17 = bVar13;
  goto joined_r0x00408757;
LAB_00408b88:
  if ((uVar15 == 0) && ((bool)(local_5c & param_5 == 2))) {
    param_5 = 2;
LAB_0040876c:
    if (bVar26) {
      param_5 = 4;
    }
LAB_0040877a:
    uVar9 = FUN_00408360(param_1,uVar9,param_3,param_4,param_5,param_6 & 0xfffffffd,0,param_8,
                         param_9);
    return uVar9;
  }
  bVar26 = (bool)(param_5 == 2 & (local_5c ^ 1U));
  bVar23 = (bool)(local_5c ^ 1U);
  if ((!bVar26) || (bVar23 = bVar26, !bVar5)) {
LAB_0040945d:
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
    uVar9 = FUN_00408360(param_1,local_70,param_3,param_4,5,param_6,param_7,param_8,param_9);
    return uVar9;
  }
  local_5b = uVar9 == 0 && local_70 != 0;
  param_2 = local_70;
  bVar23 = bVar5;
  if (uVar9 != 0 || local_70 == 0) goto LAB_0040945d;
LAB_00408be6:
  *param_1 = 0x27;
  param_5 = 2;
  uVar15 = 1;
  local_78 = "\'";
  local_a0 = 1;
  local_5c = false;
  uVar9 = param_2;
  goto LAB_004083f8;
  while (__s1[uVar21] != 0) {
LAB_004093b7:
    uVar21 = uVar21 + 1;
    if (param_4 <= uVar22 + uVar21) break;
  }
LAB_004093c7:
  bVar23 = false;
LAB_0040928a:
  if (1 < uVar21) {
LAB_00408e4e:
    bVar26 = false;
    uVar21 = uVar21 + uVar22;
    uVar16 = uVar22;
    do {
      bVar17 = (byte)uVar19;
      if (bVar25) {
        bVar26 = param_5 == 2;
        if (local_5c) goto LAB_0040876c;
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
        if (uVar21 <= uVar22) goto LAB_004085ed;
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
        if (uVar21 <= uVar22) goto LAB_00408674;
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
LAB_00408954:
  if (bVar25) {
    bVar23 = false;
    bVar25 = bVar6;
    goto LAB_00408e4e;
  }
switchD_0040897e_caseD_25:
  bVar25 = param_5 == 2;
LAB_00408548:
  bVar17 = (byte)uVar19;
  bVar24 = (bool)((bVar6 ^ 1U | bVar25) ^ 1 | local_5c);
  bVar26 = bVar20;
  if (bVar24) {
LAB_0040855f:
    bVar24 = false;
    bVar20 = bVar26;
LAB_00408561:
    bVar17 = (byte)uVar19;
    uVar16 = uVar15;
    bVar4 = bVar3;
    if ((param_7 == 0) || ((*(uint *)(param_7 + (uVar19 >> 5) * 4) >> (bVar17 & 0x1f) & 1) == 0))
    goto LAB_00408658;
    bVar25 = param_5 == 2;
  }
  else {
LAB_00408658:
    bVar25 = param_5 == 2;
    uVar15 = uVar16;
    bVar3 = bVar4;
    if (!bVar20) {
      uVar22 = uVar22 + 1;
      bVar3 = (bool)((bVar24 ^ 1U) & bVar4);
LAB_00408674:
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
      goto LAB_004085ed;
    }
  }
joined_r0x00408757:
  if (local_5c) {
LAB_00408768:
    bVar26 = (bool)(bVar6 & bVar25);
    goto LAB_0040876c;
  }
LAB_004085a2:
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
LAB_004085db:
  if (uVar15 < uVar9) {
    param_1[uVar15] = 0x5c;
  }
  uVar15 = uVar15 + 1;
  uVar22 = uVar22 + 1;
  bVar4 = bVar3;
LAB_004085ed:
  bVar3 = bVar4;
  if (uVar15 < uVar9) {
    param_1[uVar15] = bVar17;
  }
  uVar15 = uVar15 + 1;
  if (!bVar23) {
    bVar2 = false;
  }
  goto LAB_00408408;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00409590(int param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

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
  puVar8 = (undefined4 *)PTR_DAT_006175b8;
  if (DAT_006175d0 <= param_1) {
    if (param_1 == 0x7fffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_0040a7b0();
    }
    if (PTR_DAT_006175b8 == &DAT_006175c0) {
      puVar8 = (undefined4 *)FUN_0040a5c0(0);
      uVar6 = PTR_DAT_006175c8._4_4_;
      uVar5 = PTR_DAT_006175c8._0_4_;
      uVar3 = _UNK_006175c4;
      PTR_DAT_006175b8 = (undefined *)puVar8;
      *puVar8 = _DAT_006175c0;
      puVar8[1] = uVar3;
      puVar8[2] = uVar5;
      puVar8[3] = uVar6;
    }
    else {
      puVar8 = (undefined4 *)FUN_0040a5c0(PTR_DAT_006175b8);
      PTR_DAT_006175b8 = (undefined *)puVar8;
    }
    memset(puVar8 + (long)DAT_006175d0 * 4,0,(long)((param_1 + 1) - DAT_006175d0) << 4);
    DAT_006175d0 = param_1 + 1;
  }
  uVar2 = param_4[1];
  puVar10 = (ulong *)(puVar8 + (long)param_1 * 4);
  uVar4 = *puVar10;
  __ptr = (undefined *)puVar10[1];
  uVar9 = FUN_00408360(__ptr,uVar4,param_2,param_3,*param_4,uVar2 | 1,param_4 + 2,
                       *(undefined8 *)(param_4 + 10),*(undefined8 *)(param_4 + 0xc));
  if (uVar4 <= uVar9) {
    uVar9 = uVar9 + 1;
    *puVar10 = uVar9;
    if (__ptr != &DAT_00617720) {
      free(__ptr);
    }
    __ptr = (undefined *)FUN_0040a560(uVar9);
    uVar3 = *param_4;
    puVar10[1] = (ulong)__ptr;
    FUN_00408360(__ptr,uVar9,param_2,param_3,uVar3,uVar2 | 1,param_4 + 2,
                 *(undefined8 *)(param_4 + 10),*(undefined8 *)(param_4 + 0xc));
  }
  *piVar7 = iVar1;
  return __ptr;
}


void FUN_00409730(undefined *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_00617820;
  }
  FUN_0040a760(param_1,0x38);
  *piVar2 = iVar1;
  return;
}


undefined4 FUN_00409770(undefined4 *param_1)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)&DAT_00617820;
  }
  return *param_1;
}


void FUN_00409780(undefined4 *param_1,undefined4 param_2)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)&DAT_00617820;
  }
  *param_1 = param_2;
  return;
}


uint FUN_00409790(undefined *param_1,byte param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_00617820;
  }
  uVar1 = *(uint *)(param_1 + (ulong)(param_2 >> 5) * 4 + 8);
  uVar2 = uVar1 >> (param_2 & 0x1f);
  *(uint *)(param_1 + (ulong)(param_2 >> 5) * 4 + 8) =
       ((param_3 ^ uVar2) & 1) << (param_2 & 0x1f) ^ uVar1;
  return uVar2 & 1;
}


undefined4 FUN_004097d0(undefined *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_00617820;
  }
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_1 + 4) = param_2;
  return uVar1;
}


void FUN_004097f0(undefined4 *param_1,long param_2,long param_3)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)&DAT_00617820;
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


void FUN_00409820(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 *param_5)

{
  int iVar1;
  int *piVar2;
  
  if (param_5 == (undefined4 *)0x0) {
    param_5 = (undefined4 *)&DAT_00617820;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  FUN_00408360(param_1,param_2,param_3,param_4,*param_5,param_5[1],param_5 + 2,
               *(undefined8 *)(param_5 + 10),*(undefined8 *)(param_5 + 0xc));
  *piVar2 = iVar1;
  return;
}


undefined8 FUN_004098a0(undefined8 param_1,undefined8 param_2,long *param_3,undefined4 *param_4)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  
  if (param_4 == (undefined4 *)0x0) {
    param_4 = (undefined4 *)&DAT_00617820;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  uVar5 = (uint)(param_3 == (long *)0x0) | param_4[1];
  lVar3 = FUN_00408360(0,0,param_1,param_2,*param_4,uVar5,param_4 + 2,*(undefined8 *)(param_4 + 10),
                       *(undefined8 *)(param_4 + 0xc));
  uVar4 = FUN_0040a560(lVar3 + 1);
  FUN_00408360(uVar4,lVar3 + 1,param_1,param_2,*param_4,uVar5,param_4 + 2,
               *(undefined8 *)(param_4 + 10),*(undefined8 *)(param_4 + 0xc));
  *piVar2 = iVar1;
  if (param_3 != (long *)0x0) {
    *param_3 = lVar3;
  }
  return uVar4;
}


void FUN_00409990(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_004098a0(param_1,param_2,0,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004099a0(void)

{
  void **ppvVar1;
  void *__ptr;
  undefined *__ptr_00;
  void **ppvVar2;
  
  __ptr_00 = PTR_DAT_006175b8;
  if (1 < DAT_006175d0) {
    ppvVar2 = (void **)(PTR_DAT_006175b8 + 0x18);
    ppvVar1 = (void **)(PTR_DAT_006175b8 + (ulong)(DAT_006175d0 - 2) * 0x10 + 0x28);
    do {
      __ptr = *ppvVar2;
      ppvVar2 = ppvVar2 + 2;
      free(__ptr);
    } while (ppvVar2 != ppvVar1);
  }
  if (*(undefined **)(__ptr_00 + 8) != &DAT_00617720) {
    free(*(undefined **)(__ptr_00 + 8));
    _DAT_006175c0 = 0x100;
    PTR_DAT_006175c8 = &DAT_00617720;
  }
  if (__ptr_00 != &DAT_006175c0) {
    free(__ptr_00);
    PTR_DAT_006175b8 = &DAT_006175c0;
  }
  DAT_006175d0 = 1;
  return;
}


void FUN_00409a40(undefined8 param_1,undefined8 param_2)

{
  FUN_00409590(param_1,param_2,0xffffffffffffffff,&DAT_00617820);
  return;
}


void FUN_00409a60(void)

{
  FUN_00409590();
  return;
}


void FUN_00409a70(undefined8 param_1)

{
  FUN_00409590(0,param_1,0xffffffffffffffff,&DAT_00617820);
  return;
}


void FUN_00409a90(undefined8 param_1,undefined8 param_2)

{
  FUN_00409590(0,param_1,param_2,&DAT_00617820);
  return;
}


void FUN_00409ab0(undefined8 param_1,int param_2,undefined8 param_3)

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
    FUN_00409590(param_1,param_3,0xffffffffffffffff,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00409b20(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

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
    FUN_00409590(param_1,param_3,param_4,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00409b90(undefined4 param_1,undefined8 param_2)

{
  FUN_00409ab0(0,param_1,param_2);
  return;
}


void FUN_00409ba0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00409b20(0,param_1,param_2,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409bb0(undefined8 param_1,undefined8 param_2,byte param_3)

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
  
  local_18 = DAT_00617850;
  local_48 = _DAT_00617820;
  uStack_40 = uRam0000000000617828;
  local_38 = _DAT_00617830;
  uStack_30 = uRam0000000000617838;
  puVar1 = (uint *)((long)&uStack_40 + (ulong)(param_3 >> 5) * 4);
  local_28 = _DAT_00617840;
  uStack_20 = uRam0000000000617848;
  uVar2 = *puVar1;
  *puVar1 = (~(uVar2 >> (param_3 & 0x1f)) & 1) << (param_3 & 0x1f) ^ uVar2;
  FUN_00409590(0,param_1,param_2,&local_48);
  return;
}


void FUN_00409c20(undefined8 param_1,char param_2)

{
  FUN_00409bb0(param_1,0xffffffffffffffff,(int)param_2);
  return;
}


void FUN_00409c30(undefined8 param_1)

{
  FUN_00409bb0(param_1,0xffffffffffffffff,0x3a);
  return;
}


void FUN_00409c50(undefined8 param_1,undefined8 param_2)

{
  FUN_00409bb0(param_1,param_2,0x3a);
  return;
}


void FUN_00409c60(undefined8 param_1,int param_2,undefined8 param_3)

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
    FUN_00409590(param_1,param_3,0xffffffffffffffff,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409cd0(undefined8 param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5
                 )

{
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  long lStack_20;
  long local_18;
  
  uStack_40 = uRam0000000000617828;
  local_38 = _DAT_00617830;
  uStack_30 = uRam0000000000617838;
  local_28 = _DAT_00617840;
  lStack_20 = uRam0000000000617848;
  local_18 = DAT_00617850;
  local_48 = CONCAT44((int)((ulong)_DAT_00617820 >> 0x20),10);
  if ((param_2 != 0) && (param_3 != 0)) {
    lStack_20 = param_2;
    local_18 = param_3;
    FUN_00409590(param_1,param_4,param_5,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00409d40(void)

{
  FUN_00409cd0();
  return;
}


void FUN_00409d50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00409cd0(0,param_1,param_2,param_3,0xffffffffffffffff);
  return;
}


void FUN_00409d70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00409cd0(0,param_1,param_2,param_3,param_4);
  return;
}


void FUN_00409d90(void)

{
  FUN_00409590();
  return;
}


void FUN_00409da0(undefined8 param_1,undefined8 param_2)

{
  FUN_00409590(0,param_1,param_2,&DAT_00617580);
  return;
}


void FUN_00409dc0(undefined8 param_1,undefined8 param_2)

{
  FUN_00409590(param_1,param_2,0xffffffffffffffff,&DAT_00617580);
  return;
}


void FUN_00409de0(undefined8 param_1)

{
  FUN_00409590(0,param_1,0xffffffffffffffff,&DAT_00617580);
  return;
}


bool FUN_00409e00(undefined8 param_1,undefined8 param_2)

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
  __s1 = (void *)FUN_00405a70();
  __s2 = (void *)FUN_00405a70(param_2);
  __n = FUN_00405ad0(__s1);
  sVar2 = FUN_00405ad0(__s2);
  if ((__n == sVar2) && (iVar1 = memcmp(__s1,__s2,__n), iVar1 == 0)) {
    __filename = (char *)FUN_00405990(param_1);
    __filename_00 = (char *)FUN_00405990(param_2);
    iVar1 = __xstat(1,__filename,&local_158);
    if (iVar1 != 0) {
      piVar3 = __errno_location();
      error(1,*piVar3,&DAT_00413b3f,__filename);
    }
    iVar1 = __xstat(1,__filename_00,&local_c8);
    if (iVar1 != 0) {
      piVar3 = __errno_location();
      error(1,*piVar3,&DAT_00413b3f,__filename_00);
    }
    bVar4 = local_158.st_ino == local_c8.st_ino && local_158.st_dev == local_c8.st_dev;
    free(__filename);
    free(__filename_00);
  }
  return bVar4;
}


int FUN_00409f30(int *param_1)

{
  int iVar1;
  long lVar2;
  
  *(undefined8 *)(param_1 + 2) = 0;
  iVar1 = FUN_0040db90(&DAT_0041218c,0x80000);
  *param_1 = iVar1;
  if (-1 < iVar1) {
    return 0;
  }
  lVar2 = FUN_0040b160(0,0);
  *(long *)(param_1 + 2) = lVar2;
  return -(uint)(lVar2 == 0);
}


void FUN_00409f80(int *param_1)

{
  if (-1 < *param_1) {
    fchdir(*param_1);
    return;
  }
  FUN_0040ae00(*(undefined8 *)(param_1 + 2));
  return;
}


void FUN_00409fa0(int *param_1)

{
  if (-1 < *param_1) {
    close(*param_1);
  }
  free(*(void **)(param_1 + 2));
  return;
}


undefined8
FUN_00409fc0(FILE *param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5,
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
  uVar1 = dcgettext(0,&DAT_004130cb,5);
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
    goto LAB_0040a23c;
  case 5:
    uVar1 = param_5[3];
    uVar4 = param_5[2];
    uVar5 = param_5[1];
    uVar6 = *param_5;
    uVar7 = dcgettext(0,"Written by %s, %s, %s,\n%s, and %s.\n",5);
LAB_0040a23c:
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
    goto LAB_0040a2d9;
  case 7:
    uVar1 = param_5[2];
    uVar4 = param_5[5];
    uVar5 = param_5[4];
    uVar6 = param_5[3];
    local_58 = param_5[1];
    uVar7 = *param_5;
    uVar3 = dcgettext(0,"Written by %s, %s, %s,\n%s, %s, %s, and %s.\n",5);
LAB_0040a2d9:
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
    goto LAB_0040a0ba;
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
LAB_0040a0ba:
  uVar1 = __fprintf_chk(param_1,1,uVar3,uVar7,local_50,local_58,uVar6,uVar5,uVar4,uVar1,local_48);
  return uVar1;
}


void FUN_0040a3a0(void)

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
  FUN_00409fc0();
  return;
}


void FUN_0040a3c0(void)

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
  FUN_00409fc0();
  return;
}


void FUN_0040a420(void)

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
  FUN_00409fc0();
  return;
}


void FUN_0040a4e0(void)

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


void FUN_0040a560(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_0040a7b0();
  }
  return;
}


void FUN_0040a580(ulong param_1,ulong param_2)

{
  if ((-1 < SUB168(ZEXT816(param_1) * ZEXT816(param_2),0)) &&
     (SUB168(ZEXT816(param_1) * ZEXT816(param_2) >> 0x40,0) == 0)) {
    FUN_0040a560();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0040a7b0();
}


void thunk_FUN_0040a560(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_0040a7b0();
  }
  return;
}


void * FUN_0040a5c0(void *param_1,size_t param_2)

{
  void *pvVar1;
  
  if ((param_2 == 0) && (param_1 != (void *)0x0)) {
    free(param_1);
    return (void *)0x0;
  }
  pvVar1 = realloc(param_1,param_2);
  if ((pvVar1 == (void *)0x0) && (param_2 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_0040a7b0();
  }
  return pvVar1;
}


void FUN_0040a600(undefined8 param_1,ulong param_2,ulong param_3)

{
  if ((-1 < SUB168(ZEXT816(param_2) * ZEXT816(param_3),0)) &&
     (SUB168(ZEXT816(param_2) * ZEXT816(param_3) >> 0x40,0) == 0)) {
    FUN_0040a5c0();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0040a7b0();
}


void FUN_0040a630(long param_1,ulong *param_2,ulong param_3)

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
    if ((SUB168(ZEXT816(uVar2) * ZEXT816(param_3),0) < 0) || (uVar3 != 0)) goto LAB_0040a68b;
  }
  else {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x5555555555555554);
    uVar3 = SUB168(auVar1 % ZEXT816(param_3),0);
    if (SUB168(auVar1 / ZEXT816(param_3),0) <= uVar2) {
LAB_0040a68b:
                    /* WARNING: Subroutine does not return */
      FUN_0040a7b0(param_1,param_2,uVar3);
    }
    uVar2 = (uVar2 >> 1) + 1 + uVar2;
  }
  *param_2 = uVar2;
  FUN_0040a5c0(param_1,uVar2 * param_3);
  return;
}


void FUN_0040a6c0(long param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (param_1 == 0) {
    if (uVar1 == 0) {
      *param_2 = 0x80;
      FUN_0040a5c0(0,0x80);
      return;
    }
    if ((long)uVar1 < 0) goto LAB_0040a70a;
  }
  else {
    if (0x5555555555555553 < uVar1) {
LAB_0040a70a:
                    /* WARNING: Subroutine does not return */
      FUN_0040a7b0();
    }
    uVar1 = (uVar1 >> 1) + 1 + uVar1;
  }
  *param_2 = uVar1;
  FUN_0040a5c0(param_1,uVar1);
  return;
}


void FUN_0040a710(size_t param_1)

{
  void *__s;
  
  __s = (void *)FUN_0040a560();
  memset(__s,0,param_1);
  return;
}


void FUN_0040a730(size_t param_1,ulong param_2)

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
  FUN_0040a7b0();
}


void FUN_0040a760(void *param_1,size_t param_2)

{
  void *__dest;
  
  __dest = (void *)FUN_0040a560(param_2);
  memcpy(__dest,param_1,param_2);
  return;
}


void FUN_0040a790(char *param_1)

{
  void *__dest;
  size_t sVar1;
  
  sVar1 = strlen(param_1);
  __dest = (void *)FUN_0040a560(sVar1 + 1);
  memcpy(__dest,param_1,sVar1 + 1);
  return;
}


void FUN_0040a7b0(void)

{
  undefined8 uVar1;
  
  uVar1 = dcgettext(0,"memory exhausted",5);
  error(DAT_00617568,0,&DAT_00413b3f,uVar1);
                    /* WARNING: Subroutine does not return */
  abort();
}


long FUN_0040a7f0(void)

{
  long lVar1;
  int *piVar2;
  
  lVar1 = FUN_0040b160(0,0);
  if (lVar1 == 0) {
    piVar2 = __errno_location();
    if (*piVar2 == 0xc) {
                    /* WARNING: Subroutine does not return */
      FUN_0040a7b0();
    }
  }
  return lVar1;
}


void FUN_0040a820(int param_1,int param_2,undefined param_3,long param_4,undefined8 param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined local_2a;
  undefined local_29;
  
  uVar1 = DAT_00617568;
  if (param_1 - 1U < 4) {
    if (param_2 < 0) {
      puVar4 = &local_2a;
      puVar3 = &DAT_00413460 + -(long)param_2;
      local_29 = 0;
      local_2a = param_3;
    }
    else {
      puVar3 = &DAT_00413460;
      puVar4 = *(undefined **)(param_4 + (long)param_2 * 0x20);
    }
    uVar2 = dcgettext(0,(&PTR_s__s_s_argument___s__too_large_004134e0)[param_1 - 1U],5);
    error(uVar1,0,uVar2,puVar3,puVar4,param_5);
                    /* WARNING: Subroutine does not return */
    abort();
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


ulong FUN_0040a8b0(byte *param_1,byte **param_2,uint param_3,ulong *param_4,char *param_5)

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
    if ((param_5 == (char *)0x0) || (bVar12 = *pbVar5, bVar12 == 0)) goto LAB_0040a952;
    pcVar7 = strchr(param_5,(int)(char)bVar12);
    if (pcVar7 == (char *)0x0) goto switchD_0040aa3c_caseD_1;
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
        goto LAB_0040aa2a;
      }
      if (bVar1 != 0x42) {
                    /* WARNING: Could not recover jumptable at 0x0040aa11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar6 = (*(code *)(&PTR_LAB_00413538)[bVar8])();
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
LAB_0040aa2a:
  iVar10 = (int)uVar11;
  switch(bVar12 - 0x42 & 0xff) {
  case 0:
    if (uVar6 >> 0x36 == 0) {
      uVar6 = uVar6 << 10;
      break;
    }
    goto LAB_0040aa97;
  default:
switchD_0040aa3c_caseD_1:
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
    goto LAB_0040ab24;
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
    goto joined_r0x0040aa5c;
  case 0xb:
  case 0x2b:
    auVar2 = ZEXT816(uVar6) * ZEXT816((ulong)(long)iVar10);
    if (SUB168(auVar2 >> 0x40,0) != 0) goto LAB_0040aa97;
    auVar2 = (auVar2 & (undefined  [16])0xffffffffffffffff) * ZEXT816((ulong)(long)iVar10);
joined_r0x0040aa5c:
    uVar6 = SUB168(auVar2,0);
    if (SUB168(auVar2 >> 0x40,0) != 0) {
LAB_0040aa97:
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
    goto LAB_0040ab24;
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
    goto LAB_0040ab24;
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
    goto LAB_0040ab24;
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
LAB_0040ab24:
    uVar14 = (ulong)(uVar13 | uVar9);
    break;
  case 0x20:
    if (uVar6 >> 0x37 != 0) goto LAB_0040aa97;
    uVar6 = uVar6 << 9;
    break;
  case 0x21:
    break;
  case 0x35:
    if ((long)uVar6 < 0) goto LAB_0040aa97;
    uVar6 = uVar6 * 2;
  }
  *param_2 = pbVar5 + iVar15;
  if (pbVar5[iVar15] != 0) {
    uVar14 = (ulong)((uint)uVar14 | 2);
  }
LAB_0040a952:
  *param_4 = uVar6;
  return uVar14;
}


void FUN_0040acf0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
  FUN_0040d650(param_9,param_10,&local_d0);
  return;
}


void FUN_0040ad80(int param_1)

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


undefined8 FUN_0040adc0(int *param_1,char *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = openat(*param_1,param_2,0x10900);
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    FUN_0040ad80(*param_1);
    *param_1 = iVar1;
    uVar2 = 0;
  }
  return uVar2;
}


int FUN_0040ae00(char *param_1)

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
    puVar5 = (undefined *)FUN_0040c480(param_1 + 3,0x2f,sVar3 - 3);
    if (puVar5 == (undefined *)0x0) {
      return -1;
    }
    *puVar5 = 0;
    iVar1 = FUN_0040adc0(&local_2c,param_1);
    *puVar5 = 0x2f;
    if (iVar1 != 0) goto LAB_0040af30;
    sVar4 = strspn(puVar5 + 1,"/");
    __s = puVar5 + 1 + sVar4;
  }
  else {
    __s = param_1;
    if (sVar4 != 0) {
      iVar1 = FUN_0040adc0(&local_2c,&DAT_0041236e);
      if (iVar1 != 0) goto LAB_0040af30;
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
    iVar1 = FUN_0040adc0(&local_2c,__s);
    *puVar5 = 0x2f;
    if (iVar1 != 0) goto LAB_0040af30;
    sVar3 = strspn(puVar5 + 1,"/");
    __s = puVar5 + 1 + sVar3;
  }
  if (((param_1 <= __s) || (iVar1 = FUN_0040adc0(&local_2c,__s), iVar1 == 0)) &&
     (iVar1 = fchdir(local_2c), iVar1 == 0)) {
    FUN_0040ad80(local_2c);
    return 0;
  }
LAB_0040af30:
  iVar1 = *piVar2;
  FUN_0040ad80(local_2c);
  *piVar2 = iVar1;
  return -1;
}


undefined8 FUN_0040b070(char *param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  utsname local_1a8;
  
  if (DAT_006175d4 < 0) {
    iVar1 = uname(&local_1a8);
    if ((iVar1 == 0) && (iVar1 = strverscmp(local_1a8.release,"2.6.36"), -1 < iVar1)) {
      DAT_006175d4 = 1;
      goto LAB_0040b090;
    }
    DAT_006175d4 = 0;
  }
  else if (DAT_006175d4 != 0) {
LAB_0040b090:
    iVar1 = statvfs(param_1,(statvfs *)&local_1a8);
    if (iVar1 < 0) {
      return 0xffffffff;
    }
    if (local_1a8.sysname._8_8_ == 0) {
      local_1a8.sysname._8_8_ = local_1a8.sysname._0_8_;
    }
    goto LAB_0040b0ea;
  }
  iVar1 = statfs(param_1,(statfs *)&local_1a8);
  if (iVar1 < 0) {
    return 0xffffffff;
  }
LAB_0040b0ea:
  *param_3 = local_1a8.sysname._8_8_;
  param_3[1] = local_1a8.sysname._16_8_;
  param_3[2] = local_1a8.sysname._24_8_;
  param_3[3] = local_1a8.sysname._32_8_;
  *(byte *)(param_3 + 4) = (byte)((ulong)local_1a8.sysname._32_8_ >> 0x3f);
  param_3[5] = local_1a8.sysname._40_8_;
  param_3[6] = local_1a8.sysname._48_8_;
  return 0;
}


void * FUN_0040b160(void *param_1,size_t param_2)

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
LAB_0040b192:
    local_110 = malloc(local_100);
    if (local_110 == (void *)0x0) {
      return (void *)0x0;
    }
  }
  else {
    local_110 = param_1;
    local_100 = param_2;
    if (param_1 == (void *)0x0) goto LAB_0040b192;
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
LAB_0040b478:
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
          if (__dirp != (DIR *)0x0) goto LAB_0040b531;
          goto joined_r0x0040b53f;
        }
        iVar7 = __fxstat(1,iVar6,&local_c8);
        if (iVar7 != 0) {
          iVar7 = *piVar8;
          if (__dirp != (DIR *)0x0) {
            closedir(__dirp);
          }
LAB_0040b59d:
          close(iVar6);
          goto joined_r0x0040b53f;
        }
        if (((__dirp != (DIR *)0x0) && (iVar7 = closedir(__dirp), iVar7 != 0)) ||
           (_Var5 = local_c8.st_ino, _Var2 = local_c8.st_dev, __dirp = fdopendir(iVar6),
           bVar1 = bVar16 || bVar17, __dirp == (DIR *)0x0)) {
          iVar7 = *piVar8;
          goto LAB_0040b59d;
        }
LAB_0040b2f0:
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
                  if (pdVar9->d_name[0] == '.') goto LAB_0040b500;
                  break;
                }
                iVar7 = *piVar8;
              }
              if (iVar7 == 0) {
                *piVar8 = 2;
                iVar7 = 2;
              }
              goto LAB_0040b531;
            }
            if (pdVar9->d_name[0] == '.') {
LAB_0040b500:
              if ((pdVar9->d_name[1] == '\0') || (*(short *)(pdVar9->d_name + 1) == 0x2e))
              goto LAB_0040b2f0;
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
              goto LAB_0040b40f;
            }
            *piVar8 = 0xc;
            iVar7 = 0xc;
          }
          else {
            *piVar8 = 0x22;
            iVar7 = 0x22;
          }
LAB_0040b531:
          closedir(__dirp);
          goto joined_r0x0040b53f;
        }
LAB_0040b40f:
        pvVar10 = memcpy((void *)((long)local_e8 - __n),__filename,__n);
        local_e8 = (void *)((long)pvVar10 + -1);
        local_120 = _Var2;
        *(undefined *)((long)pvVar10 + -1) = 0x2f;
        _Var15 = _Var5;
      } while ((_Var3 != _Var2) || (_Var4 != _Var5));
      iVar6 = closedir(__dirp);
      if (iVar6 == 0) {
        lVar13 = (long)local_110 + local_100;
        goto LAB_0040b478;
      }
      goto LAB_0040b560;
    }
  }
  piVar8 = __errno_location();
LAB_0040b560:
  iVar7 = *piVar8;
joined_r0x0040b53f:
  if (param_1 == (void *)0x0) {
    free(local_110);
  }
  *piVar8 = iVar7;
  return (void *)0x0;
}


void FUN_0040b630(long param_1,int *param_2)

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
      if (iVar3 <= iVar8) goto LAB_0040b6ac;
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
      if (iVar9 <= iVar3) goto LAB_0040b6ac;
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
LAB_0040b6ac:
  param_2[0xc] = iVar2;
  param_2[0xb] = iVar1 + (iVar2 - iVar3);
  return;
}


int FUN_0040b710(int param_1,undefined8 *param_2,char *param_3,char **param_4,undefined4 *param_5,
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
      if ((iVar5 == 0) && (sVar7 = strlen(__s1_00), sVar7 == sVar15)) goto LAB_0040b930;
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
            if (local_70 == (char *)0x0) goto LAB_0040b870;
          }
          else if (local_70 == (char *)0x0) {
            local_70 = (char *)calloc((long)iVar5,1);
            if (local_70 == (char *)0x0) {
              bVar3 = true;
              goto LAB_0040b870;
            }
            bVar4 = true;
            local_70[(int)local_44] = '\x01';
          }
          local_70[lVar16] = '\x01';
        }
      }
LAB_0040b870:
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
LAB_0040b930:
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


uint FUN_0040bd30(uint param_1,undefined8 *param_2,char *param_3,long param_4,undefined8 param_5,
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
LAB_0040bd7a:
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
          goto LAB_0040be7d;
        }
        pbVar8 = *(byte **)(param_7 + 8);
      }
      param_7[10] = 0;
    }
LAB_0040be7d:
    param_7[6] = 1;
    cVar2 = *param_3;
LAB_0040be88:
    if (cVar2 == ':') {
      uVar3 = 0;
    }
    if (pbVar8 == (byte *)0x0) goto LAB_0040bdf8;
LAB_0040be9c:
    if (*pbVar8 == 0) goto LAB_0040bdf8;
  }
  else {
    if (param_7[6] == 0) goto LAB_0040bd7a;
    cVar2 = *param_3;
    pbVar8 = *(byte **)(param_7 + 8);
    if ((cVar2 - 0x2bU & 0xfd) != 0) goto LAB_0040be88;
    pcVar4 = param_3 + 1;
    param_3 = param_3 + 1;
    if (*pcVar4 == ':') {
      uVar3 = 0;
    }
    if (pbVar8 != (byte *)0x0) goto LAB_0040be9c;
LAB_0040bdf8:
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
        FUN_0040b630(param_2,param_7);
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
LAB_0040bf66:
      if (uVar11 != param_1) {
        *param_7 = uVar11;
      }
      return 0xffffffff;
    }
    lVar6 = 3;
    pbVar8 = (byte *)param_2[(int)uVar11];
    pbVar9 = pbVar8;
    pbVar10 = &DAT_00413460;
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
          FUN_0040b630(param_2,param_7);
          uVar11 = param_7[0xb];
        }
      }
      param_7[0xc] = param_1;
      *param_7 = param_1;
      goto LAB_0040bf66;
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
        puVar15 = &DAT_00413460;
        goto LAB_0040c0c5;
      }
      if ((int)param_6 != 0) {
        if (pbVar8[2] == 0) {
          pcVar4 = strchr(param_3,(int)(char)bVar14);
          param_6 = param_6 & 0xffffffff;
          if (pcVar4 != (char *)0x0) goto LAB_0040c070;
        }
        *(byte **)(param_7 + 8) = pbVar8 + 1;
        uVar11 = FUN_0040b710(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar3,
                              &DAT_00413461);
        if (uVar11 != 0xffffffff) {
          return uVar11;
        }
        pbVar8 = (byte *)param_2[(int)*param_7];
      }
    }
LAB_0040c070:
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
  puVar15 = &DAT_00413a15;
LAB_0040c0c5:
  uVar3 = FUN_0040b710(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar3,puVar15);
  return uVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040c300(void)

{
  DAT_00617860 = DAT_006175e0;
  _DAT_00617864 = DAT_006175d8._4_4_;
  FUN_0040bd30();
  DAT_006175e0 = DAT_00617860;
  DAT_006178a8 = DAT_00617870;
  DAT_006175d8._0_4_ = DAT_00617868;
  return;
}


void FUN_0040c360(void)

{
  FUN_0040c300();
  return;
}


void FUN_0040c380(void)

{
  FUN_0040c300();
  return;
}


void FUN_0040c3a0(void)

{
  FUN_0040bd30();
  return;
}


void FUN_0040c3c0(void)

{
  FUN_0040c300();
  return;
}


void FUN_0040c3e0(void)

{
  FUN_0040bd30();
  return;
}


size_t FUN_0040c400(wchar_t *param_1,byte *param_2,size_t param_3,mbstate_t *param_4)

{
  char cVar1;
  size_t sVar2;
  wchar_t local_1c;
  
  if (param_2 == (byte *)0x0) {
    param_3 = 1;
    param_2 = (byte *)0x413a14;
  }
  else {
    if (param_3 == 0) {
      return 0xfffffffffffffffe;
    }
    if (param_1 != (wchar_t *)0x0) goto LAB_0040c424;
  }
  param_1 = &local_1c;
LAB_0040c424:
  sVar2 = mbrtowc(param_1,(char *)param_2,param_3,param_4);
  if ((0xfffffffffffffffd < sVar2) && (cVar1 = FUN_0040dbe0(0), cVar1 == '\0')) {
    sVar2 = 1;
    *param_1 = (uint)*param_2;
  }
  return sVar2;
}


ulong * FUN_0040c480(ulong *param_1,char param_2,ulong param_3)

{
  char cVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  
  if (param_3 == 0) {
    return (ulong *)0x0;
  }
  if (((ulong)param_1 & 7) == 0) {
LAB_0040c4c0:
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
      if (((ulong)param_1 & 7) == 0) goto LAB_0040c4c0;
      cVar1 = *(char *)param_1;
    }
  }
  return param_1;
}


void FUN_0040c590(char *param_1)

{
  ulong uVar1;
  size_t sVar2;
  char *pcVar3;
  ulong uVar4;
  
  sVar2 = strlen(param_1);
  uVar4 = 0;
  pcVar3 = param_1;
  do {
    uVar1 = uVar4 + 1;
    if ((((param_1[uVar4] == '\\') && (uVar4 + 4 < sVar2 + 1)) &&
        ((byte)(param_1[uVar1] - 0x30U) < 4)) &&
       (((byte)(param_1[uVar4 + 2] - 0x30U) < 8 && ((byte)(param_1[uVar4 + 3] - 0x30U) < 8)))) {
      *pcVar3 = param_1[uVar4 + 3] + 'P' + (param_1[uVar4 + 2] + param_1[uVar1] * '\b') * '\b';
      uVar4 = uVar4 + 4;
    }
    else {
      *pcVar3 = param_1[uVar4];
      uVar4 = uVar1;
      if (sVar2 + 1 <= uVar1) {
        return;
      }
    }
    pcVar3 = pcVar3 + 1;
  } while( true );
}


void FUN_0040c620(void **param_1)

{
  free(*param_1);
  free(param_1[1]);
  free(param_1[2]);
  if ((*(byte *)(param_1 + 5) & 4) == 0) {
    free(param_1);
    return;
  }
  free(param_1[3]);
  free(param_1);
  return;
}


byte * FUN_0040c670(void)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  FILE *__stream;
  __ssize_t _Var4;
  char *pcVar5;
  byte **ppbVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined8 *puVar9;
  long lVar10;
  byte **ppbVar11;
  int *piVar12;
  long lVar13;
  long lVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte **ppbVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  byte bVar22;
  undefined local_79;
  uint local_78;
  uint local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  byte *local_50;
  char *local_48;
  size_t local_40 [2];
  
  bVar22 = 0;
  __stream = fopen("/proc/self/mountinfo","r");
  if (__stream == (FILE *)0x0) {
    lVar13 = setmntent("/etc/mtab","r");
    if (lVar13 == 0) {
      return (byte *)0;
    }
    ppbVar17 = &local_50;
    puVar9 = (undefined8 *)getmntent(lVar13);
    while (puVar9 != (undefined8 *)0x0) {
      lVar10 = hasmntopt(puVar9,&DAT_00413abe);
      ppbVar11 = (byte **)FUN_0040a560(0x38);
      pbVar7 = (byte *)FUN_0040a790(*puVar9);
      uVar1 = puVar9[1];
      *ppbVar11 = pbVar7;
      pbVar7 = (byte *)FUN_0040a790(uVar1);
      ppbVar11[2] = (byte *)0x0;
      uVar1 = puVar9[2];
      ppbVar11[1] = pbVar7;
      pbVar7 = (byte *)FUN_0040a790(uVar1);
      lVar14 = 7;
      ppbVar6 = ppbVar11 + 5;
      bVar18 = false;
      *(byte *)ppbVar6 = *(byte *)ppbVar6 | 4;
      bVar20 = *(byte *)ppbVar6 == 0;
      ppbVar11[3] = pbVar7;
      bVar21 = true;
      pbVar15 = pbVar7;
      pbVar16 = (byte *)"autofs";
      do {
        if (lVar14 == 0) break;
        lVar14 = lVar14 + -1;
        bVar18 = *pbVar15 < *pbVar16;
        bVar20 = *pbVar15 == *pbVar16;
        pbVar15 = pbVar15 + (ulong)bVar22 * -2 + 1;
        pbVar16 = pbVar16 + (ulong)bVar22 * -2 + 1;
      } while (bVar20);
      bVar19 = false;
      bVar18 = (!bVar18 && !bVar20) == bVar18;
      if (!bVar18) {
        lVar14 = 5;
        pbVar15 = pbVar7;
        pbVar16 = &DAT_00413a4f;
        do {
          if (lVar14 == 0) break;
          lVar14 = lVar14 + -1;
          bVar19 = *pbVar15 < *pbVar16;
          bVar18 = *pbVar15 == *pbVar16;
          pbVar15 = pbVar15 + (ulong)bVar22 * -2 + 1;
          pbVar16 = pbVar16 + (ulong)bVar22 * -2 + 1;
        } while (bVar18);
        bVar20 = false;
        bVar18 = (!bVar19 && !bVar18) == bVar19;
        if (!bVar18) {
          lVar14 = 6;
          pbVar15 = pbVar7;
          pbVar16 = (byte *)"subfs";
          do {
            if (lVar14 == 0) break;
            lVar14 = lVar14 + -1;
            bVar20 = *pbVar15 < *pbVar16;
            bVar18 = *pbVar15 == *pbVar16;
            pbVar15 = pbVar15 + (ulong)bVar22 * -2 + 1;
            pbVar16 = pbVar16 + (ulong)bVar22 * -2 + 1;
          } while (bVar18);
          bVar19 = false;
          bVar18 = (!bVar20 && !bVar18) == bVar20;
          if (!bVar18) {
            lVar14 = 8;
            pbVar15 = pbVar7;
            pbVar16 = (byte *)"debugfs";
            do {
              if (lVar14 == 0) break;
              lVar14 = lVar14 + -1;
              bVar19 = *pbVar15 < *pbVar16;
              bVar18 = *pbVar15 == *pbVar16;
              pbVar15 = pbVar15 + (ulong)bVar22 * -2 + 1;
              pbVar16 = pbVar16 + (ulong)bVar22 * -2 + 1;
            } while (bVar18);
            bVar20 = false;
            bVar18 = (!bVar19 && !bVar18) == bVar19;
            if (!bVar18) {
              lVar14 = 7;
              pbVar15 = pbVar7;
              pbVar16 = (byte *)"devpts";
              do {
                if (lVar14 == 0) break;
                lVar14 = lVar14 + -1;
                bVar20 = *pbVar15 < *pbVar16;
                bVar18 = *pbVar15 == *pbVar16;
                pbVar15 = pbVar15 + (ulong)bVar22 * -2 + 1;
                pbVar16 = pbVar16 + (ulong)bVar22 * -2 + 1;
              } while (bVar18);
              bVar19 = false;
              bVar18 = (!bVar20 && !bVar18) == bVar20;
              if (!bVar18) {
                lVar14 = 8;
                pbVar15 = pbVar7;
                pbVar16 = (byte *)"fusectl";
                do {
                  if (lVar14 == 0) break;
                  lVar14 = lVar14 + -1;
                  bVar19 = *pbVar15 < *pbVar16;
                  bVar18 = *pbVar15 == *pbVar16;
                  pbVar15 = pbVar15 + (ulong)bVar22 * -2 + 1;
                  pbVar16 = pbVar16 + (ulong)bVar22 * -2 + 1;
                } while (bVar18);
                bVar20 = false;
                bVar18 = (!bVar19 && !bVar18) == bVar19;
                if (!bVar18) {
                  lVar14 = 7;
                  pbVar15 = pbVar7;
                  pbVar16 = (byte *)"mqueue";
                  do {
                    if (lVar14 == 0) break;
                    lVar14 = lVar14 + -1;
                    bVar20 = *pbVar15 < *pbVar16;
                    bVar18 = *pbVar15 == *pbVar16;
                    pbVar15 = pbVar15 + (ulong)bVar22 * -2 + 1;
                    pbVar16 = pbVar16 + (ulong)bVar22 * -2 + 1;
                  } while (bVar18);
                  bVar19 = false;
                  bVar18 = (!bVar20 && !bVar18) == bVar20;
                  if (!bVar18) {
                    lVar14 = 0xb;
                    pbVar15 = pbVar7;
                    pbVar16 = (byte *)"rpc_pipefs";
                    do {
                      if (lVar14 == 0) break;
                      lVar14 = lVar14 + -1;
                      bVar19 = *pbVar15 < *pbVar16;
                      bVar18 = *pbVar15 == *pbVar16;
                      pbVar15 = pbVar15 + (ulong)bVar22 * -2 + 1;
                      pbVar16 = pbVar16 + (ulong)bVar22 * -2 + 1;
                    } while (bVar18);
                    bVar20 = false;
                    bVar18 = (!bVar19 && !bVar18) == bVar19;
                    if (!bVar18) {
                      lVar14 = 6;
                      pbVar15 = pbVar7;
                      pbVar16 = (byte *)"sysfs";
                      do {
                        if (lVar14 == 0) break;
                        lVar14 = lVar14 + -1;
                        bVar20 = *pbVar15 < *pbVar16;
                        bVar18 = *pbVar15 == *pbVar16;
                        pbVar15 = pbVar15 + (ulong)bVar22 * -2 + 1;
                        pbVar16 = pbVar16 + (ulong)bVar22 * -2 + 1;
                      } while (bVar18);
                      bVar19 = false;
                      bVar18 = (!bVar20 && !bVar18) == bVar20;
                      if (!bVar18) {
                        lVar14 = 6;
                        pbVar15 = pbVar7;
                        pbVar16 = (byte *)"devfs";
                        do {
                          if (lVar14 == 0) break;
                          lVar14 = lVar14 + -1;
                          bVar19 = *pbVar15 < *pbVar16;
                          bVar18 = *pbVar15 == *pbVar16;
                          pbVar15 = pbVar15 + (ulong)bVar22 * -2 + 1;
                          pbVar16 = pbVar16 + (ulong)bVar22 * -2 + 1;
                        } while (bVar18);
                        bVar20 = false;
                        bVar18 = (!bVar19 && !bVar18) == bVar19;
                        if (!bVar18) {
                          lVar14 = 7;
                          pbVar15 = pbVar7;
                          pbVar16 = (byte *)"kernfs";
                          do {
                            if (lVar14 == 0) break;
                            lVar14 = lVar14 + -1;
                            bVar20 = *pbVar15 < *pbVar16;
                            bVar18 = *pbVar15 == *pbVar16;
                            pbVar15 = pbVar15 + (ulong)bVar22 * -2 + 1;
                            pbVar16 = pbVar16 + (ulong)bVar22 * -2 + 1;
                          } while (bVar18);
                          if ((!bVar20 && !bVar18) != bVar20) {
                            iVar3 = strcmp((char *)pbVar7,"ignore");
                            bVar21 = true;
                            if (iVar3 != 0) {
                              iVar3 = strcmp((char *)pbVar7,"none");
                              bVar21 = lVar10 == 0 && iVar3 == 0;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      pbVar15 = *ppbVar11;
      *(byte *)(ppbVar11 + 5) = *(byte *)(ppbVar11 + 5) & 0xfe | bVar21;
      pcVar5 = strchr((char *)pbVar15,0x3a);
      bVar21 = true;
      if (pcVar5 != (char *)0x0) goto LAB_0040ccba;
      bVar18 = *pbVar15 < 0x2f;
      bVar20 = *pbVar15 == 0x2f;
      if (bVar20) {
        bVar18 = pbVar15[1] < 0x2f;
        bVar20 = pbVar15[1] == 0x2f;
        if (!bVar20) goto LAB_0040cd52;
        lVar10 = 6;
        pbVar16 = pbVar7;
        pbVar8 = (byte *)"smbfs";
        do {
          if (lVar10 == 0) break;
          lVar10 = lVar10 + -1;
          bVar18 = *pbVar16 < *pbVar8;
          bVar20 = *pbVar16 == *pbVar8;
          pbVar16 = pbVar16 + (ulong)bVar22 * -2 + 1;
          pbVar8 = pbVar8 + (ulong)bVar22 * -2 + 1;
        } while (bVar20);
        bVar19 = false;
        bVar20 = (!bVar18 && !bVar20) == bVar18;
        if (!bVar20) {
          lVar10 = 5;
          pbVar16 = &DAT_00413aa8;
          do {
            if (lVar10 == 0) break;
            lVar10 = lVar10 + -1;
            bVar19 = *pbVar7 < *pbVar16;
            bVar20 = *pbVar7 == *pbVar16;
            pbVar7 = pbVar7 + (ulong)bVar22 * -2 + 1;
            pbVar16 = pbVar16 + (ulong)bVar22 * -2 + 1;
          } while (bVar20);
          bVar18 = false;
          bVar20 = (!bVar19 && !bVar20) == bVar19;
          if (!bVar20) goto LAB_0040cd52;
        }
      }
      else {
LAB_0040cd52:
        lVar10 = 7;
        pbVar7 = (byte *)"-hosts";
        do {
          if (lVar10 == 0) break;
          lVar10 = lVar10 + -1;
          bVar18 = *pbVar7 < *pbVar15;
          bVar20 = *pbVar7 == *pbVar15;
          pbVar7 = pbVar7 + (ulong)bVar22 * -2 + 1;
          pbVar15 = pbVar15 + (ulong)bVar22 * -2 + 1;
        } while (bVar20);
        bVar21 = (!bVar18 && !bVar20) == bVar18;
      }
LAB_0040ccba:
      ppbVar11[4] = (byte *)0xffffffffffffffff;
      *(byte *)(ppbVar11 + 5) = *(byte *)(ppbVar11 + 5) & 0xfd | bVar21 * '\x02';
      *ppbVar17 = (byte *)ppbVar11;
      ppbVar17 = ppbVar11 + 6;
      puVar9 = (undefined8 *)getmntent(lVar13);
    }
    iVar3 = endmntent(lVar13);
    if (iVar3 != 0) {
LAB_0040c91d:
      *ppbVar17 = (byte *)0x0;
      return local_50;
    }
  }
  else {
    local_48 = (char *)0x0;
    ppbVar17 = &local_50;
    local_40[0] = 0;
    while (_Var4 = __getdelim(&local_48,local_40,10,__stream), _Var4 != -1) {
      uVar2 = sscanf(local_48,"%*u %*u %u:%u %n%*s%n %n%*s%n%c",&local_78,&local_74,&local_58,
                     &local_54,&local_70,&local_6c,&local_79);
      if ((((uVar2 & 0xfffffffb) == 3) &&
          (pcVar5 = (char *)FUN_0040d2b0(local_48 + local_6c,&DAT_00413a2e), pcVar5 != (char *)0x0))
         && (uVar2 = sscanf(pcVar5," - %n%*s%n %n%*s%n %c",&local_68,&local_64,&local_60,&local_5c,
                            &local_79), (uVar2 & 0xfffffffb) == 1)) {
        bVar21 = true;
        local_48[local_54] = '\0';
        local_48[local_6c] = '\0';
        pcVar5[local_64] = '\0';
        pcVar5[local_5c] = '\0';
        FUN_0040c590(pcVar5 + local_60);
        FUN_0040c590(local_48 + local_70);
        FUN_0040c590(local_48 + local_58);
        ppbVar6 = (byte **)FUN_0040a560(0x38);
        pbVar7 = (byte *)FUN_0040a790(pcVar5 + local_60);
        *ppbVar6 = pbVar7;
        pbVar7 = (byte *)FUN_0040a790(local_48 + local_70);
        ppbVar6[1] = pbVar7;
        pbVar7 = (byte *)FUN_0040a790(local_48 + local_58);
        ppbVar6[2] = pbVar7;
        pbVar7 = (byte *)FUN_0040a790(pcVar5 + local_68);
        ppbVar6[3] = pbVar7;
        *(byte *)(ppbVar6 + 5) = *(byte *)(ppbVar6 + 5) | 4;
        lVar13 = 7;
        bVar18 = false;
        pbVar8 = (byte *)(((ulong)local_74 & 0xffffff00) << 0xc |
                         ((ulong)local_78 & 0xfffff000) << 0x20 | (ulong)((local_78 & 0xfff) << 8) |
                         (ulong)(byte)local_74);
        bVar20 = pbVar8 == (byte *)0x0;
        pbVar15 = pbVar7;
        pbVar16 = (byte *)"autofs";
        do {
          if (lVar13 == 0) break;
          lVar13 = lVar13 + -1;
          bVar18 = *pbVar15 < *pbVar16;
          bVar20 = *pbVar15 == *pbVar16;
          pbVar15 = pbVar15 + (ulong)bVar22 * -2 + 1;
          pbVar16 = pbVar16 + (ulong)bVar22 * -2 + 1;
        } while (bVar20);
        ppbVar6[4] = pbVar8;
        bVar19 = false;
        bVar18 = (!bVar18 && !bVar20) == bVar18;
        if (!bVar18) {
          lVar13 = 5;
          pbVar15 = pbVar7;
          pbVar16 = &DAT_00413a4f;
          do {
            if (lVar13 == 0) break;
            lVar13 = lVar13 + -1;
            bVar19 = *pbVar15 < *pbVar16;
            bVar18 = *pbVar15 == *pbVar16;
            pbVar15 = pbVar15 + (ulong)bVar22 * -2 + 1;
            pbVar16 = pbVar16 + (ulong)bVar22 * -2 + 1;
          } while (bVar18);
          bVar20 = false;
          bVar18 = (!bVar19 && !bVar18) == bVar19;
          if (!bVar18) {
            lVar13 = 6;
            pbVar15 = pbVar7;
            pbVar16 = (byte *)"subfs";
            do {
              if (lVar13 == 0) break;
              lVar13 = lVar13 + -1;
              bVar20 = *pbVar15 < *pbVar16;
              bVar18 = *pbVar15 == *pbVar16;
              pbVar15 = pbVar15 + (ulong)bVar22 * -2 + 1;
              pbVar16 = pbVar16 + (ulong)bVar22 * -2 + 1;
            } while (bVar18);
            bVar19 = false;
            bVar18 = (!bVar20 && !bVar18) == bVar20;
            if (!bVar18) {
              lVar13 = 8;
              pbVar15 = pbVar7;
              pbVar16 = (byte *)"debugfs";
              do {
                if (lVar13 == 0) break;
                lVar13 = lVar13 + -1;
                bVar19 = *pbVar15 < *pbVar16;
                bVar18 = *pbVar15 == *pbVar16;
                pbVar15 = pbVar15 + (ulong)bVar22 * -2 + 1;
                pbVar16 = pbVar16 + (ulong)bVar22 * -2 + 1;
              } while (bVar18);
              bVar20 = false;
              bVar18 = (!bVar19 && !bVar18) == bVar19;
              if (!bVar18) {
                lVar13 = 7;
                pbVar15 = pbVar7;
                pbVar16 = (byte *)"devpts";
                do {
                  if (lVar13 == 0) break;
                  lVar13 = lVar13 + -1;
                  bVar20 = *pbVar15 < *pbVar16;
                  bVar18 = *pbVar15 == *pbVar16;
                  pbVar15 = pbVar15 + (ulong)bVar22 * -2 + 1;
                  pbVar16 = pbVar16 + (ulong)bVar22 * -2 + 1;
                } while (bVar18);
                bVar19 = false;
                bVar18 = (!bVar20 && !bVar18) == bVar20;
                if (!bVar18) {
                  lVar13 = 8;
                  pbVar15 = pbVar7;
                  pbVar16 = (byte *)"fusectl";
                  do {
                    if (lVar13 == 0) break;
                    lVar13 = lVar13 + -1;
                    bVar19 = *pbVar15 < *pbVar16;
                    bVar18 = *pbVar15 == *pbVar16;
                    pbVar15 = pbVar15 + (ulong)bVar22 * -2 + 1;
                    pbVar16 = pbVar16 + (ulong)bVar22 * -2 + 1;
                  } while (bVar18);
                  bVar20 = false;
                  bVar18 = (!bVar19 && !bVar18) == bVar19;
                  if (!bVar18) {
                    lVar13 = 7;
                    pbVar15 = pbVar7;
                    pbVar16 = (byte *)"mqueue";
                    do {
                      if (lVar13 == 0) break;
                      lVar13 = lVar13 + -1;
                      bVar20 = *pbVar15 < *pbVar16;
                      bVar18 = *pbVar15 == *pbVar16;
                      pbVar15 = pbVar15 + (ulong)bVar22 * -2 + 1;
                      pbVar16 = pbVar16 + (ulong)bVar22 * -2 + 1;
                    } while (bVar18);
                    bVar19 = false;
                    bVar18 = (!bVar20 && !bVar18) == bVar20;
                    if (!bVar18) {
                      lVar13 = 0xb;
                      pbVar15 = pbVar7;
                      pbVar16 = (byte *)"rpc_pipefs";
                      do {
                        if (lVar13 == 0) break;
                        lVar13 = lVar13 + -1;
                        bVar19 = *pbVar15 < *pbVar16;
                        bVar18 = *pbVar15 == *pbVar16;
                        pbVar15 = pbVar15 + (ulong)bVar22 * -2 + 1;
                        pbVar16 = pbVar16 + (ulong)bVar22 * -2 + 1;
                      } while (bVar18);
                      bVar20 = false;
                      bVar18 = (!bVar19 && !bVar18) == bVar19;
                      if (!bVar18) {
                        lVar13 = 6;
                        pbVar15 = pbVar7;
                        pbVar16 = (byte *)"sysfs";
                        do {
                          if (lVar13 == 0) break;
                          lVar13 = lVar13 + -1;
                          bVar20 = *pbVar15 < *pbVar16;
                          bVar18 = *pbVar15 == *pbVar16;
                          pbVar15 = pbVar15 + (ulong)bVar22 * -2 + 1;
                          pbVar16 = pbVar16 + (ulong)bVar22 * -2 + 1;
                        } while (bVar18);
                        bVar19 = false;
                        bVar18 = (!bVar20 && !bVar18) == bVar20;
                        if (!bVar18) {
                          lVar13 = 6;
                          pbVar15 = pbVar7;
                          pbVar16 = (byte *)"devfs";
                          do {
                            if (lVar13 == 0) break;
                            lVar13 = lVar13 + -1;
                            bVar19 = *pbVar15 < *pbVar16;
                            bVar18 = *pbVar15 == *pbVar16;
                            pbVar15 = pbVar15 + (ulong)bVar22 * -2 + 1;
                            pbVar16 = pbVar16 + (ulong)bVar22 * -2 + 1;
                          } while (bVar18);
                          bVar20 = false;
                          bVar18 = (!bVar19 && !bVar18) == bVar19;
                          if (!bVar18) {
                            lVar13 = 7;
                            pbVar15 = pbVar7;
                            pbVar16 = (byte *)"kernfs";
                            do {
                              if (lVar13 == 0) break;
                              lVar13 = lVar13 + -1;
                              bVar20 = *pbVar15 < *pbVar16;
                              bVar18 = *pbVar15 == *pbVar16;
                              pbVar15 = pbVar15 + (ulong)bVar22 * -2 + 1;
                              pbVar16 = pbVar16 + (ulong)bVar22 * -2 + 1;
                            } while (bVar18);
                            if (((!bVar20 && !bVar18) != bVar20) &&
                               (iVar3 = strcmp((char *)pbVar7,"ignore"), iVar3 != 0)) {
                              iVar3 = strcmp((char *)pbVar7,"none");
                              bVar21 = iVar3 == 0;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        pbVar15 = *ppbVar6;
        *(byte *)(ppbVar6 + 5) = *(byte *)(ppbVar6 + 5) & 0xfe | bVar21;
        pcVar5 = strchr((char *)pbVar15,0x3a);
        bVar21 = true;
        if (pcVar5 != (char *)0x0) goto LAB_0040c8d6;
        bVar18 = *pbVar15 < 0x2f;
        bVar20 = *pbVar15 == 0x2f;
        if (bVar20) {
          bVar18 = pbVar15[1] < 0x2f;
          bVar20 = pbVar15[1] == 0x2f;
          if (!bVar20) goto LAB_0040ca7b;
          lVar13 = 6;
          pbVar16 = pbVar7;
          pbVar8 = (byte *)"smbfs";
          do {
            if (lVar13 == 0) break;
            lVar13 = lVar13 + -1;
            bVar18 = *pbVar16 < *pbVar8;
            bVar20 = *pbVar16 == *pbVar8;
            pbVar16 = pbVar16 + (ulong)bVar22 * -2 + 1;
            pbVar8 = pbVar8 + (ulong)bVar22 * -2 + 1;
          } while (bVar20);
          bVar19 = false;
          bVar20 = (!bVar18 && !bVar20) == bVar18;
          if (!bVar20) {
            lVar13 = 5;
            pbVar16 = &DAT_00413aa8;
            do {
              if (lVar13 == 0) break;
              lVar13 = lVar13 + -1;
              bVar19 = *pbVar7 < *pbVar16;
              bVar20 = *pbVar7 == *pbVar16;
              pbVar7 = pbVar7 + (ulong)bVar22 * -2 + 1;
              pbVar16 = pbVar16 + (ulong)bVar22 * -2 + 1;
            } while (bVar20);
            bVar18 = false;
            bVar20 = (!bVar19 && !bVar20) == bVar19;
            if (!bVar20) goto LAB_0040ca7b;
          }
        }
        else {
LAB_0040ca7b:
          lVar13 = 7;
          pbVar7 = (byte *)"-hosts";
          do {
            if (lVar13 == 0) break;
            lVar13 = lVar13 + -1;
            bVar18 = *pbVar7 < *pbVar15;
            bVar20 = *pbVar7 == *pbVar15;
            pbVar7 = pbVar7 + (ulong)bVar22 * -2 + 1;
            pbVar15 = pbVar15 + (ulong)bVar22 * -2 + 1;
          } while (bVar20);
          bVar21 = (!bVar18 && !bVar20) == bVar18;
        }
LAB_0040c8d6:
        *(byte *)(ppbVar6 + 5) = *(byte *)(ppbVar6 + 5) & 0xfd | bVar21 * '\x02';
        *ppbVar17 = (byte *)ppbVar6;
        ppbVar17 = ppbVar6 + 6;
      }
    }
    free(local_48);
    if ((*(byte *)&__stream->_flags & 0x20) != 0) {
      piVar12 = __errno_location();
      iVar3 = *piVar12;
      FUN_0040e240(__stream);
      *piVar12 = iVar3;
      goto LAB_0040cd03;
    }
    iVar3 = FUN_0040e240(__stream);
    if (iVar3 != -1) goto LAB_0040c91d;
  }
  piVar12 = __errno_location();
  iVar3 = *piVar12;
LAB_0040cd03:
  *ppbVar17 = (byte *)0x0;
  while (local_50 != (byte *)0x0) {
    pbVar7 = *(byte **)(local_50 + 0x30);
    FUN_0040c620();
    local_50 = pbVar7;
  }
  *piVar12 = iVar3;
  return (byte *)0;
}


ulong FUN_0040ce30(long param_1,ulong param_2,long *param_3)

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
      if (param_2 <= uVar3 + 1) goto LAB_0040ce83;
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
LAB_0040ce83:
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
      if (param_2 <= uVar3 + 1) goto LAB_0040ced0;
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
LAB_0040ced0:
  uVar3 = uVar2 + 1;
  if (uVar2 + 1 <= uVar7 + 1) {
    *param_3 = lVar4;
    uVar3 = uVar7 + 1;
  }
  return uVar3;
}


/* WARNING: Type propagation algorithm not settling */

byte * FUN_0040cf60(long param_1,byte *param_2,byte *param_3,byte *param_4)

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
    __n = (byte *)FUN_0040ce30(param_3,param_4,&local_840);
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
LAB_0040d199:
      do {
        while( true ) {
          pbVar9 = pbVar7 + (long)param_4;
          lVar6 = FUN_0040c480(param_2 + param_1,0,(long)pbVar9 - (long)param_2);
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
              goto LAB_0040d199;
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
      lVar6 = FUN_0040c480(param_2 + param_1,0,(long)pbVar4 - (long)param_2);
      if ((pbVar4 == (byte *)0x0) || (lVar6 != 0)) {
        return (byte *)0x0;
      }
      pbVar7 = local_838[pbVar4[param_1 + -1]];
      param_2 = pbVar4;
      if (pbVar7 == (byte *)0x0) break;
LAB_0040d050:
      pbVar10 = pbVar10 + (long)pbVar7;
    }
    pbVar4 = pbVar10 + param_1;
    if (__n < param_4 + -1) {
      pbVar7 = __n;
      if (pbVar4[(long)__n] == param_3[(long)__n]) {
        do {
          pbVar7 = pbVar7 + 1;
          if (param_4 + -1 <= pbVar7) goto LAB_0040d0d3;
        } while (param_3[(long)pbVar7] == pbVar4[(long)pbVar7]);
      }
      pbVar10 = pbVar10 + (1 - (long)__n);
      goto LAB_0040d050;
    }
LAB_0040d0d3:
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


char * FUN_0040d2b0(char *param_1,char *param_2)

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
            __n = FUN_0040ce30(pcVar13,uVar14,local_40);
          }
          lVar17 = local_40[0];
          iVar6 = memcmp(pcVar13,pcVar13 + local_40[0],__n);
          if (iVar6 == 0) {
            uVar9 = __n - 1;
            lVar16 = 0;
            uVar10 = 0;
            while( true ) {
              lVar1 = uVar14 + lVar16;
              lVar15 = FUN_0040c480(pcVar7 + lVar15,0,lVar1 - lVar15);
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
                    if (uVar14 == uVar8) goto LAB_0040d483;
                  } while (pcVar13[uVar8] == pcVar7[uVar8 + lVar16]);
                }
                uVar10 = 0;
                lVar16 = uVar8 + (1 - __n) + lVar16;
              }
              else {
LAB_0040d483:
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
              lVar15 = FUN_0040c480(pcVar7 + lVar15,0,lVar16 - lVar15);
              if ((lVar16 == 0) || (lVar15 != 0)) break;
              lVar15 = lVar16;
              if (__n < uVar14) {
                uVar10 = __n;
                if (pcVar7[lVar17 + __n] == pcVar13[__n]) {
                  do {
                    uVar10 = uVar10 + 1;
                    if (uVar14 <= uVar10) goto LAB_0040d5a3;
                  } while (pcVar13[uVar10] == pcVar7[uVar10 + lVar17]);
                }
                lVar17 = uVar10 + (1 - __n) + lVar17;
              }
              else {
LAB_0040d5a3:
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
          pcVar7 = (char *)FUN_0040cf60(pcVar7,lVar15,pcVar13,uVar14);
        }
      }
    }
  }
  return pcVar7;
}


ulong FUN_0040d650(void **param_1,undefined8 param_2,undefined8 param_3)

{
  void *__ptr;
  int *piVar1;
  ulong local_10;
  
  __ptr = (void *)FUN_0040e360(0,&local_10,param_2,param_3);
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


char * FUN_0040d6b0(char *param_1,ulong param_2)

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


void FUN_0040d7a0(void)

{
  FUN_00404930(1);
  return;
}


long FUN_0040d7b0(char *param_1,char **param_2,void *param_3,size_t param_4)

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
LAB_0040d847:
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
          goto LAB_0040d847;
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


void FUN_0040d8d0(undefined8 param_1,undefined8 param_2,long param_3)

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
  uVar2 = FUN_00409dc0(1,param_1);
  uVar3 = FUN_00409ab0(0,8,param_2);
  error(0,0,uVar1,uVar3,uVar2);
  return;
}


void FUN_0040d950(long *param_1,void *param_2,size_t param_3)

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
      uVar3 = FUN_00409de0(lVar5);
      __fprintf_chk(stderr,1,"\n  - %s",uVar3);
      lVar5 = param_1[lVar4];
      param_2 = (void *)((long)__s2 + param_3);
      __s1 = __s2;
      if (lVar5 == 0) goto LAB_0040da20;
    }
    lVar4 = lVar4 + 1;
    param_2 = (void *)((long)__s2 + param_3);
    uVar3 = FUN_00409de0(lVar5);
    __fprintf_chk(stderr,1,&DAT_00413b3d,uVar3);
    lVar5 = param_1[lVar4];
  }
LAB_0040da20:
  pcVar2 = stderr->_IO_write_ptr;
  if (pcVar2 < stderr->_IO_write_end) {
    stderr->_IO_write_ptr = pcVar2 + 1;
    *pcVar2 = '\n';
    return;
  }
  __overflow(stderr,10);
  return;
}


long FUN_0040da70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,code *param_6)

{
  long lVar1;
  
  lVar1 = FUN_0040d7b0(param_2,param_3,param_4,param_5);
  if (lVar1 < 0) {
    FUN_0040d8d0(param_1,param_2,lVar1);
    FUN_0040d950(param_3,param_4,param_5);
    (*param_6)();
    lVar1 = -1;
  }
  return lVar1;
}


long FUN_0040dae0(void *param_1,long *param_2,void *param_3,size_t param_4)

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


ulong FUN_0040db30(uint *param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  
  lVar2 = __fpending();
  uVar1 = *param_1;
  uVar3 = FUN_0040e240(param_1);
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


void FUN_0040db90(char *param_1,uint param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 & 0x40) != 0) {
    uVar2 = param_3 & 0xffffffff;
  }
  iVar1 = open(param_1,param_2,uVar2);
  FUN_0040e1f0(iVar1);
  return;
}


bool FUN_0040dbe0(int param_1)

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
    pbVar5 = &DAT_00413b42;
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


ulong FUN_0040dc40(char *param_1,ulong param_2)

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

char * FUN_0040dc80(void)

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
  if (DAT_00617898 != (char *)0x0) goto LAB_0040dcba;
  pcVar7 = getenv("CHARSETALIASDIR");
  if ((pcVar7 == (char *)0x0) || (*pcVar7 == '\0')) {
    sVar6 = 0x73;
    sVar5 = 0x65;
    __n = 100;
    pcVar7 = 
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib"
    ;
LAB_0040dda5:
    __file = (char *)malloc(sVar6);
    if (__file != (char *)0x0) {
      memcpy(__file,pcVar7,__n);
      __file[__n] = '/';
      goto LAB_0040ddc6;
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
        goto LAB_0040dda5;
      }
      sVar6 = __n + 0xe;
    }
    __file = (char *)malloc(sVar6);
    if (__file != (char *)0x0) {
      memcpy(__file,pcVar7,__n);
      sVar5 = __n;
LAB_0040ddc6:
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
LAB_0040de60:
          pbVar8 = (byte *)__stream->_IO_read_ptr;
          if (__stream->_IO_read_end <= pbVar8) goto LAB_0040dfec;
          do {
            __stream->_IO_read_ptr = (char *)(pbVar8 + 1);
            uVar4 = (uint)*pbVar8;
            __ptr = pcVar7;
            while( true ) {
              pcVar7 = __ptr;
              if ((uVar4 - 9 < 2) || (uVar4 == 0x20)) goto LAB_0040de60;
              if (uVar4 == 0x23) goto LAB_0040e051;
              ungetc(uVar4,__stream);
              iVar2 = fscanf(__stream,"%50s %50s",&local_b8,&local_78);
              puVar13 = &local_b8;
              if (iVar2 < 2) goto LAB_0040dfff;
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
                FUN_0040e240(__stream);
                goto LAB_0040de04;
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
LAB_0040dfec:
              uVar4 = __uflow(__stream);
              __ptr = pcVar7;
              if (uVar4 == 0xffffffff) goto LAB_0040dfff;
            }
          } while( true );
        }
        close(iVar2);
      }
      goto LAB_0040ddfe;
    }
  }
  DAT_00617898 = "";
LAB_0040dcba:
  cVar1 = *DAT_00617898;
  pcVar7 = DAT_00617898;
  do {
    if (cVar1 == '\0') {
LAB_0040dd14:
      if (*__s1 == '\0') {
        __s1 = "ASCII";
      }
      return __s1;
    }
    iVar2 = strcmp(__s1,pcVar7);
    if ((iVar2 == 0) || ((cVar1 == '*' && (pcVar7[1] == '\0')))) {
      sVar6 = strlen(pcVar7);
      __s1 = pcVar7 + sVar6 + 1;
      goto LAB_0040dd14;
    }
    sVar6 = strlen(pcVar7);
    sVar5 = strlen(pcVar7 + sVar6 + 1);
    pcVar7 = pcVar7 + sVar6 + 1 + sVar5 + 1;
    cVar1 = *pcVar7;
  } while( true );
LAB_0040e051:
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
  if (uVar4 == 0xffffffff) goto LAB_0040dfff;
  goto LAB_0040de60;
LAB_0040dfff:
  FUN_0040e240(__stream);
  if (local_d0 == 0) {
LAB_0040ddfe:
    pcVar7 = "";
  }
  else {
    pcVar7[local_d0] = '\0';
  }
LAB_0040de04:
  free(__file);
  DAT_00617898 = pcVar7;
  goto LAB_0040dcba;
}


uint FUN_0040e1f0(uint param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  if (2 < param_1) {
    return param_1;
  }
  uVar2 = FUN_0040fe80();
  piVar3 = __errno_location();
  iVar1 = *piVar3;
  close(param_1);
  *piVar3 = iVar1;
  return uVar2;
}


int FUN_0040e240(FILE *param_1)

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
      if (_Var4 == -1) goto LAB_0040e2a7;
    }
    iVar1 = FUN_0040e2c0(param_1);
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
LAB_0040e2a7:
  iVar1 = fclose(param_1);
  return iVar1;
}


void FUN_0040e2c0(FILE *param_1)

{
  int iVar1;
  
  if (param_1 != (FILE *)0x0) {
    iVar1 = __freading();
    if ((iVar1 != 0) && ((param_1->_flags & 0x100U) != 0)) {
      FUN_0040e300(param_1,0,1);
      fflush(param_1);
      return;
    }
  }
  fflush(param_1);
  return;
}


ulong FUN_0040e300(FILE *param_1,__off_t param_2,int param_3)

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


/* WARNING: Removing unreachable block (ram,0x0040fb9c) */
/* WARNING: Removing unreachable block (ram,0x0040fcdd) */
/* WARNING: Removing unreachable block (ram,0x0040fbb0) */
/* WARNING: Removing unreachable block (ram,0x0040f084) */
/* WARNING: Removing unreachable block (ram,0x0040e650) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Could not reconcile some variable overlaps */

undefined2 *
FUN_0040e360(undefined2 *param_1,undefined8 *param_2,undefined2 *param_3,undefined8 param_4)

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
  iVar10 = FUN_004101f0(param_3,&local_588,local_678);
  if (iVar10 < 0) {
    return (undefined2 *)0x0;
  }
  iVar10 = FUN_0040ffd0(param_4,local_678);
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
LAB_0040e424:
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
      if (puVar24 == param_3) goto LAB_0040e5d8;
      do {
        puVar24 = (undefined2 *)((long)puVar24 - (long)_local_6a8);
        __n = puVar14 + (long)puVar24;
        puVar13 = puVar20;
        if (CARRY8((ulong)puVar14,(ulong)puVar24)) {
          if (puVar31 != (undefined *)0xffffffffffffffff) goto LAB_0040e950;
          __n = (undefined *)0xffffffffffffffff;
        }
        else if (puVar31 < __n) {
          if (puVar31 == (undefined *)0x0) {
            if (__n < (undefined *)0xd) {
              puVar31 = (undefined *)0xc;
            }
            else {
LAB_0040e56e:
              puVar31 = __n;
              if (__n == (undefined *)0xffffffffffffffff) goto LAB_0040e950;
            }
          }
          else {
            if ((long)puVar31 < 0) goto LAB_0040e950;
            puVar31 = (undefined *)((long)puVar31 * 2);
            if (puVar31 < __n) goto LAB_0040e56e;
          }
          if ((puVar20 == (undefined2 *)0x0) || (puVar20 == local_690)) {
            local_6b8 = (undefined2 *)_local_6a8;
            _local_6a8 = (float10)CONCAT91(stack0xfffffffffffff959,puVar20 == local_690);
            local_698 = puVar24;
            *(undefined8 *)(puVar27 + -8) = 0x40e4cc;
            puVar13 = (undefined2 *)malloc((size_t)puVar31);
            if (puVar13 == (undefined2 *)0x0) goto LAB_0040e950;
            puVar24 = local_698;
            _local_6a8 = (int *)local_6b8;
            if ((puVar14 != (undefined *)0x0) && (local_6a8[0] != '\0')) {
              _local_6a8 = (float10)CONCAT28(auStack_6a4._4_2_,local_6b8);
              *(undefined8 *)(puVar27 + -8) = 0x40e51a;
              puVar13 = (undefined2 *)memcpy(puVar13,puVar20,(size_t)puVar14);
              puVar24 = local_698;
            }
          }
          else {
            local_698 = puVar24;
            *(undefined8 *)(puVar27 + -8) = 0x40e5af;
            puVar13 = (undefined2 *)realloc(puVar20,(size_t)puVar31);
            if (puVar13 == (undefined2 *)0x0) {
LAB_0040eb65:
              *(undefined8 *)(puVar27 + -8) = 0x40eb6a;
              piVar16 = __errno_location();
              _local_6a8 = (float10)CONCAT28(auStack_6a4._4_2_,piVar16);
              goto LAB_0040eb78;
            }
            puVar24 = local_698;
          }
        }
        *(undefined8 *)(puVar27 + -8) = 0x40e5d8;
        memcpy((undefined *)((long)puVar13 + (long)puVar14),_local_6a8,(size_t)puVar24);
        puVar20 = puVar13;
LAB_0040e5d8:
        do {
          if (local_588 == local_6c0) {
            puVar14 = __n + 1;
            puVar24 = puVar20;
            if ((undefined *)0xfffffffffffffffe < __n) {
              if (puVar31 == (undefined *)0xffffffffffffffff) goto LAB_0040f762;
              goto LAB_0040e950;
            }
            if (puVar14 <= puVar31) goto LAB_0040f762;
            if (puVar31 == (undefined *)0x0) {
              if (puVar14 < (undefined *)0xd) {
                puVar31 = (undefined *)0xc;
              }
              else {
LAB_0040fd3f:
                puVar31 = puVar14;
                if (puVar14 == (undefined *)0xffffffffffffffff) goto LAB_0040e950;
              }
            }
            else {
              if ((long)puVar31 < 0) goto LAB_0040e950;
              puVar31 = (undefined *)((long)puVar31 * 2);
              if (puVar31 < puVar14) goto LAB_0040fd3f;
            }
            bVar33 = puVar20 == local_690;
            if ((puVar20 == (undefined2 *)0x0) || (bVar33)) {
              *(undefined8 *)(puVar27 + -8) = 0x40fcf9;
              puVar24 = (undefined2 *)malloc((size_t)puVar31);
              if (puVar24 == (undefined2 *)0x0) goto LAB_0040e950;
              if ((__n != (undefined *)0x0) && (bVar33)) {
                *(undefined8 *)(puVar27 + -8) = 0x40fd25;
                puVar24 = (undefined2 *)memcpy(puVar24,puVar20,(size_t)__n);
              }
            }
            else {
              *(undefined8 *)(puVar27 + -8) = 0x40f756;
              puVar24 = (undefined2 *)realloc(puVar20,(size_t)puVar31);
              if (puVar24 == (undefined2 *)0x0) goto LAB_0040eb65;
            }
LAB_0040f762:
            *(undefined *)((long)puVar24 + (long)__n) = 0;
            if ((puVar14 < puVar31) && (puVar24 != local_690)) {
              *(undefined8 *)(puVar27 + -8) = 0x40f780;
              puVar20 = (undefined2 *)realloc(puVar24,(size_t)puVar14);
              if (puVar20 != (undefined2 *)0x0) {
                puVar24 = puVar20;
              }
            }
            puVar31 = local_6e0;
            if (local_6e0 != (undefined *)0x0) {
              *(undefined8 *)(puVar27 + -8) = 0x40f79b;
              free(puVar31);
            }
            if (local_580 != auStack_568) {
              *(undefined8 *)(puVar27 + -8) = 0x40f7b7;
              free(local_580);
            }
            if (local_670 != auStack_668) {
              *(undefined8 *)(puVar27 + -8) = 0x40f7d3;
              free(local_670);
            }
            *local_6d8 = __n;
            return puVar24;
          }
          bVar8 = *(byte *)(puVar32 + 9);
          lVar30 = puVar32[10];
          if (bVar8 == 0x25) {
            if (lVar30 != -1) goto LAB_0040f08c;
            puVar14 = __n + 1;
            puVar24 = puVar20;
            if (__n < (undefined *)0xffffffffffffffff) {
              if (puVar31 < puVar14) {
                if (puVar31 == (undefined *)0x0) {
                  if (puVar14 < (undefined *)0xd) {
                    puVar31 = (undefined *)0xc;
                  }
                  else {
LAB_0040f302:
                    puVar31 = puVar14;
                    if (puVar14 == (undefined *)0xffffffffffffffff) goto LAB_0040e950;
                  }
                }
                else {
                  if ((long)puVar31 < 0) goto LAB_0040e950;
                  puVar31 = (undefined *)((long)puVar31 * 2);
                  if (puVar31 < puVar14) goto LAB_0040f302;
                }
                if ((puVar20 == (undefined2 *)0x0) || (puVar20 == local_690)) {
                  local_698 = (undefined2 *)
                              ((ulong)local_698 & 0xffffffffffffff00 | (ulong)(puVar20 == local_690)
                              );
                  *(undefined8 *)(puVar27 + -8) = 0x40f24e;
                  puVar24 = (undefined2 *)malloc((size_t)puVar31);
                  if (puVar24 == (undefined2 *)0x0) goto LAB_0040e950;
                  if ((__n != (undefined *)0x0) && ((char)local_698 != '\0')) {
                    *(undefined8 *)(puVar27 + -8) = 0x40f280;
                    puVar24 = (undefined2 *)memcpy(puVar24,puVar20,(size_t)__n);
                  }
                }
                else {
                  *(undefined8 *)(puVar27 + -8) = 0x40ea46;
                  puVar24 = (undefined2 *)realloc(puVar20,(size_t)puVar31);
                  if (puVar24 == (undefined2 *)0x0) goto LAB_0040eb65;
                }
              }
            }
            else {
              if (puVar31 != (undefined *)0xffffffffffffffff) goto LAB_0040e950;
              puVar14 = (undefined *)0xffffffffffffffff;
            }
            *(undefined *)((long)puVar24 + (long)__n) = 0x25;
            puVar20 = puVar24;
            __n = puVar14;
            goto LAB_0040ea57;
          }
          if (lVar30 == -1) goto LAB_0040f08c;
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
switchD_0040eabc_caseD_5:
                    /* WARNING: Subroutine does not return */
              *(undefined8 *)(puVar27 + -8) = 0x4023dc;
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
                        if (pcVar21 == pcVar6) goto LAB_0040e8e0;
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
                  if (*(int *)(local_670 + (long)puVar13 * 0x10) != 5) goto LAB_0040f08c;
                  iVar10 = *(int *)((long)(local_670 + (long)puVar13 * 0x10) + 0x10);
                  puVar24 = (undefined2 *)(long)iVar10;
                  if (iVar10 < 0) {
                    local_6b8._0_4_ = (uint)local_6b8 | 2;
                    puVar24 = (undefined2 *)-(long)(undefined2 *)(long)iVar10;
                  }
                }
              }
LAB_0040e8e0:
              pcVar21 = (char *)puVar32[7];
              if ((char *)puVar32[6] == pcVar21) {
LAB_0040ef90:
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
                          if (pcVar21 == pcVar6) goto LAB_0040e950;
                          pcVar26 = pcVar6 + 1;
                          cVar9 = *pcVar6;
                          pcVar6 = pcVar26;
                        } while (cVar9 != '0');
                        puVar13 = (undefined2 *)0xffffffffffffffff;
                      }
                      pcVar25 = pcVar26;
                    } while (pcVar21 != pcVar26);
                    goto LAB_0040e91c;
                  }
                }
                else {
                  if (*(int *)(local_670 + puVar32[8] * 0x10) != 5) goto LAB_0040f08c;
                  iVar10 = *(int *)((long)(local_670 + puVar32[8] * 0x10) + 0x10);
                  puVar13 = (undefined2 *)(long)iVar10;
                  if (iVar10 < 0) goto LAB_0040ef90;
LAB_0040e91c:
                  if (puVar13 != (undefined2 *)0x0) {
                    puVar18 = puVar13 + 6;
                    if (puVar13 < (undefined2 *)0xfffffffffffffff4) goto LAB_0040efae;
                    goto LAB_0040e950;
                  }
                }
                puVar18 = (undefined2 *)0xc;
              }
LAB_0040efae:
              if (puVar18 <= puVar24) {
                puVar18 = puVar24;
              }
              puVar17 = (undefined2 *)((long)puVar18 + 1);
              local_698 = puVar17;
              if (puVar18 == (undefined2 *)0xffffffffffffffff) goto LAB_0040e950;
              if (puVar17 < (undefined2 *)0x2bd) {
                puVar18 = local_2f8;
              }
              else {
                local_6d0 = puVar24;
                local_6c8 = puVar13;
                local_6b8 = (undefined2 *)
                            ((ulong)local_6b8 & 0xffffffff00000000 | (ulong)(uint)local_6b8);
                _local_6a8 = fVar34;
                if (puVar17 == (undefined2 *)0xffffffffffffffff) goto LAB_0040e950;
                *(undefined8 *)(puVar27 + -8) = 0x40f002;
                puVar18 = (undefined2 *)malloc((size_t)puVar17);
                puVar13 = local_6c8;
                puVar24 = local_6d0;
                fVar34 = _local_6a8;
                if (puVar18 == (undefined2 *)0x0) goto LAB_0040e950;
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
                if (fVar34 != (float10)0) goto LAB_0040f08c;
                bVar8 = *(byte *)(puVar32 + 9) & 0xdf;
                if (bVar8 == 0x46) {
                  *(undefined *)puVar17 = 0x30;
                  if ((((uint)local_6b8 & 0x10) == 0) && (puVar13 == (undefined2 *)0x0)) {
LAB_0040f4d7:
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
                    *(undefined8 *)(puVar27 + -8) = 0x40fa11;
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
                    *(undefined8 *)(puVar27 + -8) = 0x40fc6f;
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
                  if (((uint)local_6b8 & 0x10) == 0) goto LAB_0040f4d7;
                  if (puVar13 == (undefined2 *)0x0) {
                    local_6e8 = (undefined2 *)
                                ((ulong)local_6e8 & 0xffffffff00000000 |
                                (ulong)uVar7 & 0xffffffff0000ffff);
                    local_6d0 = puVar24;
                    local_6c8 = puVar17 + 1;
                    local_6b8 = puVar18;
                    _local_6a8 = (float10)CONCAT64(auStack_6a4._0_6_,(uint)local_6b8);
                    *(undefined8 *)(puVar27 + -8) = 0x40fe27;
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
                    *(undefined8 *)(puVar27 + -8) = 0x40f93d;
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
                  if (bVar8 != 0x41) goto LAB_0040f08c;
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
                    *(undefined8 *)(puVar27 + -8) = 0x40fd89;
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
                if (fVar34 + fVar34 != fVar34) goto LAB_0040f08c;
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
LAB_0040f08c:
                    /* WARNING: Subroutine does not return */
                *(undefined **)(puVar27 + -8) = &UNK_0040f091;
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
LAB_0040fb8a:
                        puVar31 = puVar14;
                        if (puVar14 == (undefined *)0xffffffffffffffff) goto LAB_0040e950;
                      }
                    }
                    else {
                      if ((long)puVar31 < 0) goto LAB_0040e950;
                      puVar31 = (undefined *)((long)puVar31 * 2);
                      if (puVar31 < puVar14) goto LAB_0040fb8a;
                    }
                    if ((puVar20 == (undefined2 *)0x0) || (puVar20 == local_690)) {
                      local_6b8 = (undefined2 *)
                                  ((ulong)local_6b8 & 0xffffffffffffff00 |
                                  (ulong)(puVar20 == local_690));
                      local_698 = puVar18;
                      *(undefined8 *)(puVar27 + -8) = 0x40f877;
                      puVar24 = (undefined2 *)malloc((size_t)puVar31);
                      if (puVar24 == (undefined2 *)0x0) goto LAB_0040e950;
                      puVar18 = local_698;
                      if ((__n != (undefined *)0x0) && ((char)local_6b8 != '\0')) {
                        *(undefined8 *)(puVar27 + -8) = 0x40f8c5;
                        puVar24 = (undefined2 *)memcpy(puVar24,puVar20,(size_t)__n);
                        puVar18 = local_698;
                      }
                    }
                    else {
                      local_698 = puVar18;
                      *(undefined8 *)(puVar27 + -8) = 0x40f5f2;
                      puVar24 = (undefined2 *)realloc(puVar20,(size_t)puVar31);
                      if (puVar24 == (undefined2 *)0x0) goto LAB_0040e950;
                      puVar18 = local_698;
                    }
                  }
                }
                else if (puVar31 != (undefined *)0xffffffffffffffff) goto LAB_0040e950;
              }
              local_698 = puVar18;
              *(undefined8 *)(puVar27 + -8) = 0x40f626;
              memcpy((undefined *)((long)puVar24 + (long)__n),puVar18,(size_t)_local_6a8);
              puVar13 = local_698;
              puVar20 = puVar24;
              __n = puVar14;
              if (local_698 != local_2f8) {
                *(undefined8 *)(puVar27 + -8) = 0x40f645;
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
                *(undefined8 *)(puVar27 + -8) = 0x40e6f9;
                memcpy(puVar24,pvVar5,sVar28);
                puVar24 = (undefined2 *)((long)puVar24 + (long)_local_6a8);
                puVar13 = local_6b8;
              }
              pvVar5 = (void *)puVar32[6];
              if (pvVar5 != (void *)puVar32[7]) {
                local_6b8 = puVar13;
                sVar28 = (long)(void *)puVar32[7] - (long)pvVar5;
                _local_6a8 = (float10)CONCAT28(auStack_6a4._4_2_,sVar28);
                *(undefined8 *)(puVar27 + -8) = 0x40e736;
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
                      goto LAB_0040eb58;
                    }
                  }
                  else {
                    *(undefined *)puVar24 = 0x4c;
                    puVar24 = (undefined2 *)((long)puVar24 + 1);
                  }
                }
                else {
LAB_0040eb58:
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
                if (*(int *)(puVar13 + puVar32[5] * 0x10) != 5) goto LAB_0040f08c;
                local_6b8 = (undefined2 *)CONCAT44(local_6b8._4_4_,1);
                local_680 = *(uint *)((long)(puVar13 + puVar32[5] * 0x10) + 0x10);
              }
              if (puVar32[8] != -1) {
                if (*(int *)(puVar13 + puVar32[8] * 0x10) != 5) goto LAB_0040f08c;
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
LAB_0040ef42:
                      puVar31 = puVar14;
                      if (puVar14 == (undefined *)0xffffffffffffffff) goto LAB_0040e950;
                    }
                  }
                  else {
                    if ((long)puVar31 < 0) goto LAB_0040e950;
                    puVar31 = (undefined *)((long)puVar31 * 2);
                    if (puVar31 < puVar14) goto LAB_0040ef42;
                  }
                  if ((puVar20 == (undefined2 *)0x0) || (puVar20 == local_690)) {
                    _local_6a8 = (float10)CONCAT91(stack0xfffffffffffff959,puVar20 == local_690);
                    *(undefined8 *)(puVar27 + -8) = 0x40f1ee;
                    puVar13 = (undefined2 *)malloc((size_t)puVar31);
                    if (puVar13 == (undefined2 *)0x0) goto LAB_0040e950;
                    if ((__n != (undefined *)0x0) && (local_6a8[0] != '\0')) {
                      *(undefined8 *)(puVar27 + -8) = 0x40f220;
                      puVar13 = (undefined2 *)memcpy(puVar13,puVar20,(size_t)__n);
                    }
                  }
                  else {
                    *(undefined8 *)(puVar27 + -8) = 0x40e848;
                    puVar13 = (undefined2 *)realloc(puVar20,(size_t)puVar31);
                    if (puVar13 == (undefined2 *)0x0) goto LAB_0040e950;
                  }
                }
              }
              else if (puVar31 != (undefined *)0xffffffffffffffff) goto LAB_0040e950;
              *(undefined *)((long)puVar13 + (long)__n) = 0;
              local_6c8 = puVar13;
              *(undefined8 *)(puVar27 + -8) = 0x40e865;
              puVar15 = (uint *)__errno_location();
              puVar13 = local_6c8;
              local_6c8 = puVar24;
              _local_6a8 = (float10)CONCAT28(auStack_6a4._4_2_,puVar15);
              local_6e8 = (undefined2 *)((ulong)local_6e8 & 0xffffffff00000000 | (ulong)*puVar15);
LAB_0040e888:
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
                goto switchD_0040eabc_caseD_5;
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
                  goto LAB_0040f162;
                }
                if ((uint)local_6b8 != 2) {
                  *(int **)(puVar27 + -0x10) = &local_684;
LAB_0040ebca:
                  puVar14 = local_6b0;
                  *(undefined8 *)(puVar27 + -0x18) = 0x40ebe7;
                  iVar10 = __snprintf_chk((undefined *)((long)puVar13 + (long)__n),uVar11,1,
                                          0xffffffffffffffff,puVar14,piVar16);
                  goto LAB_0040ebf0;
                }
                *(int **)(puVar27 + -0x10) = &local_684;
                *(int **)(puVar27 + -0x18) = piVar16;
                goto LAB_0040f116;
              case 0xb:
                local_6d0 = puVar13;
                uVar1 = *(undefined8 *)(local_670 + puVar32[10] * 0x10 + 8);
                if ((uint)local_6b8 == 1) {
                  *(int **)(puVar27 + -0x10) = &local_684;
                }
                else {
                  if ((uint)local_6b8 != 2) {
                    *(undefined8 *)(puVar27 + -8) = 0x40eebe;
                    iVar10 = __snprintf_chk(uVar1,(undefined *)((long)puVar13 + (long)__n),uVar11,1,
                                            0xffffffffffffffff,puVar14,&local_684);
                    goto LAB_0040ebf0;
                  }
                  *(int **)(puVar27 + -8) = &local_684;
                  *(ulong *)(puVar27 + -0x10) = (ulong)local_67c;
                }
                uVar4 = local_680;
                puVar14 = local_6b0;
                *(undefined8 *)(puVar27 + -0x18) = 0x40f35e;
                iVar10 = __snprintf_chk(uVar1,(undefined *)((long)puVar13 + (long)__n),uVar11,1,
                                        0xffffffffffffffff,puVar14,uVar4);
                goto LAB_0040ebf0;
              case 0xc:
                local_6d0 = puVar13;
                Var2 = *(unkbyte10 *)(local_670 + puVar32[10] * 0x10 + 8);
                if ((uint)local_6b8 != 1) {
                  if ((uint)local_6b8 != 2) {
                    piVar16 = &local_684;
                    *(unkbyte10 *)(puVar27 + -0x10) = Var2;
                    goto LAB_0040ebca;
                  }
                  *(int **)(puVar27 + -0x10) = &local_684;
                  uVar19 = (ulong)local_67c;
                  *(unkbyte10 *)(puVar27 + -0x20) = Var2;
                  *(ulong *)(puVar27 + -0x30) = uVar19;
                  *(undefined8 *)(puVar27 + -0x38) = 0x40f3bf;
                  iVar10 = __snprintf_chk((undefined *)((long)puVar13 + (long)__n),uVar11,1,
                                          0xffffffffffffffff,puVar14,uVar4);
                  goto LAB_0040ebf0;
                }
                *(int **)(puVar27 + -0x10) = &local_684;
                *(unkbyte10 *)(puVar27 + -0x20) = Var2;
                goto LAB_0040f11d;
              }
              local_6d0 = puVar13;
              if ((uint)local_6b8 == 1) {
                *(int **)(puVar27 + -8) = &local_684;
                *(ulong *)(puVar27 + -0x10) = uVar19;
LAB_0040f162:
                uVar19 = (ulong)local_680;
LAB_0040ed0a:
                puVar14 = local_6b0;
                *(undefined8 *)(puVar27 + -0x18) = 0x40ed27;
                iVar10 = __snprintf_chk((undefined *)((long)puVar13 + (long)__n),uVar11,1,
                                        0xffffffffffffffff,puVar14,uVar19);
                if (-1 < local_684) goto LAB_0040ebfe;
LAB_0040ed3e:
                puVar24 = local_6d0;
                if (*(char *)((long)local_6c8 + 1) == '\0') {
                  if (iVar10 < 0) {
                    iVar10 = *_local_6a8;
                    if ((iVar10 == 0) && (iVar10 = 0x54, (*(byte *)(puVar32 + 9) & 0xef) != 99)) {
                      iVar10 = 0x16;
                    }
                    if ((local_6d0 != local_690) && (local_6d0 != (undefined2 *)0x0)) {
                      *(undefined8 *)(puVar27 + -8) = 0x40ed94;
                      free(puVar24);
                    }
                    puVar31 = local_6e0;
                    if (local_6e0 != (undefined *)0x0) {
                      *(undefined8 *)(puVar27 + -8) = 0x40eda8;
                      free(puVar31);
                    }
                    if (local_580 != auStack_568) {
                      *(undefined8 *)(puVar27 + -8) = 0x40edc4;
                      free(local_580);
                    }
                    if (local_670 != auStack_668) {
                      *(undefined8 *)(puVar27 + -8) = 0x40ede0;
                      free(local_670);
                    }
                    *_local_6a8 = iVar10;
                    return (undefined2 *)0x0;
                  }
                  goto LAB_0040ec18;
                }
                *(undefined *)((long)local_6c8 + 1) = 0;
                puVar13 = local_6d0;
                goto LAB_0040e888;
              }
              if ((uint)local_6b8 != 2) {
                *(int **)(puVar27 + -0x10) = &local_684;
                goto LAB_0040ed0a;
              }
              *(int **)(puVar27 + -0x10) = &local_684;
              *(ulong *)(puVar27 + -0x18) = uVar19;
LAB_0040f116:
              *(ulong *)(puVar27 + -0x20) = (ulong)local_67c;
LAB_0040f11d:
              uVar4 = local_680;
              puVar14 = local_6b0;
              *(undefined8 *)(puVar27 + -0x28) = 0x40f141;
              iVar10 = __snprintf_chk((undefined *)((long)puVar13 + (long)__n),uVar11,1,
                                      0xffffffffffffffff,puVar14,uVar4);
LAB_0040ebf0:
              if (local_684 < 0) goto LAB_0040ed3e;
LAB_0040ebfe:
              if (((ulong)(long)local_684 < uVar11) &&
                 (((undefined *)((long)local_684 + (long)local_6d0))[(long)__n] != '\0'))
              goto LAB_0040f08c;
              if (local_684 < iVar10) {
LAB_0040ec18:
                local_684 = iVar10;
              }
              puVar24 = local_6d0;
              puVar20 = local_6d0;
              if (uVar11 <= local_684 + 1) {
                if (0x7ffffffe < uVar12) {
                  if ((local_6d0 != local_690) && (local_6d0 != (undefined2 *)0x0)) {
                    *(undefined8 *)(puVar27 + -8) = 0x40f426;
                    free(puVar24);
                  }
                  puVar31 = local_6e0;
                  if (local_6e0 != (undefined *)0x0) {
                    *(undefined8 *)(puVar27 + -8) = 0x40f43a;
                    free(puVar31);
                  }
                  if (local_580 != auStack_568) {
                    *(undefined8 *)(puVar27 + -8) = 0x40f456;
                    free(local_580);
                  }
                  if (local_670 != auStack_668) {
                    *(undefined8 *)(puVar27 + -8) = 0x40f472;
                    free(local_670);
                  }
                  *_local_6a8 = 0x4b;
                  return (undefined2 *)0x0;
                }
                puVar13 = local_6d0;
                if ((long)puVar31 < 0) {
                  if (puVar31 != (undefined *)0xffffffffffffffff) goto LAB_0040e95f;
                }
                else {
                  if (CARRY8((ulong)(local_684 + 2),(ulong)__n) != false) goto LAB_0040e95f;
                  puVar14 = __n + (local_684 + 2);
                  if (__n + (local_684 + 2) <= (undefined *)((long)puVar31 * 2)) {
                    puVar14 = (undefined *)((long)puVar31 * 2);
                  }
                  if (puVar31 < puVar14) {
                    puVar31 = (undefined *)((long)puVar31 * 2);
                    if ((puVar31 < puVar14) &&
                       (puVar31 = puVar14, puVar14 == (undefined *)0xffffffffffffffff))
                    goto LAB_0040e95f;
                    bVar33 = local_6d0 == local_690;
                    if ((local_6d0 == (undefined2 *)0x0) || (bVar33)) {
                      *(undefined8 *)(puVar27 + -8) = 0x40f0bf;
                      puVar13 = (undefined2 *)malloc((size_t)puVar31);
                      puVar24 = local_6d0;
                      puVar20 = local_6d0;
                      if (puVar13 == (undefined2 *)0x0) goto LAB_0040e95f;
                      if ((__n != (undefined *)0x0) && (bVar33)) {
                        *(undefined8 *)(puVar27 + -8) = 0x40f0ed;
                        puVar13 = (undefined2 *)memcpy(puVar13,puVar24,(size_t)__n);
                      }
                    }
                    else {
                      *(undefined8 *)(puVar27 + -8) = 0x40ecad;
                      puVar13 = (undefined2 *)realloc(puVar24,(size_t)puVar31);
                      puVar20 = local_6d0;
                      if (puVar13 == (undefined2 *)0x0) goto LAB_0040e95f;
                    }
                  }
                }
                goto LAB_0040e888;
              }
              __n = __n + local_684;
              *_local_6a8 = local_6e8._0_4_;
            }
          }
LAB_0040ea57:
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
        goto LAB_0040e424;
      }
    }
  }
  goto LAB_0040ea80;
LAB_0040e950:
  *(undefined8 *)(puVar27 + -8) = 0x40e955;
  piVar16 = __errno_location();
  _local_6a8 = (float10)CONCAT28(auStack_6a4._4_2_,piVar16);
LAB_0040e95f:
  if ((puVar20 != local_690) && (puVar20 != (undefined2 *)0x0)) {
LAB_0040eb78:
    *(undefined8 *)(puVar27 + -8) = 0x40eb80;
    free(puVar20);
  }
  puVar31 = local_6e0;
  if (local_6e0 != (undefined *)0x0) {
    *(undefined8 *)(puVar27 + -8) = 0x40e989;
    free(puVar31);
    goto LAB_0040e989;
  }
LAB_0040ea80:
  *(undefined8 *)(puVar27 + -8) = 0x40ea85;
  piVar16 = __errno_location();
  _local_6a8 = (float10)CONCAT28(auStack_6a4._4_2_,piVar16);
LAB_0040e989:
  if (local_580 != auStack_568) {
    *(undefined8 *)(puVar27 + -8) = 0x40e9a5;
    free(local_580);
  }
  if (local_670 != auStack_668) {
    *(undefined8 *)(puVar27 + -8) = 0x40e9c1;
    free(local_670);
  }
  *_local_6a8 = 0xc;
  return (undefined2 *)0x0;
}


void FUN_0040fe80(undefined8 param_1)

{
  FUN_0040fe90(param_1,0,3);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_0040fe90(ulong param_1,int param_2,ulong param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  
  if (param_2 != 0x406) {
    iVar1 = fcntl((int)param_1,param_2,param_3);
    return iVar1;
  }
  if (DAT_006178a0 < 0) {
    iVar1 = FUN_0040fe90(param_1,0,param_3 & 0xffffffff);
    if (iVar1 < 0) {
      return iVar1;
    }
    if (DAT_006178a0 != -1) {
      return iVar1;
    }
  }
  else {
    iVar1 = fcntl((int)param_1,0x406);
    if ((-1 < iVar1) || (piVar4 = __errno_location(), *piVar4 != 0x16)) {
      DAT_006178a0 = 1;
      return iVar1;
    }
    iVar1 = FUN_0040fe90(param_1 & 0xffffffff,0,param_3 & 0xffffffff);
    if (iVar1 < 0) {
      return iVar1;
    }
    DAT_006178a0 = -1;
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


undefined8 FUN_0040ffd0(uint *param_1,ulong *param_2)

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
          puVar4 = &DAT_00413d60;
        }
        *(undefined **)(puVar2 + 4) = puVar4;
      }
      uVar6 = uVar6 + 1;
      puVar2 = puVar2 + 8;
    } while (uVar6 <= *param_2 && *param_2 != uVar6);
  }
  return 0;
}


undefined8 FUN_004101f0(byte *param_1,ulong *param_2,byte **param_3)

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
LAB_0041026b:
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
LAB_00410336:
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
        if (bVar17 != 0x49) goto LAB_00410398;
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
  if (bVar4 != 0x24) goto LAB_00410336;
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
      if (9 < (byte)(bVar17 - 0x30)) goto switchD_00410577_caseD_26;
    }
  } while ((byte)(bVar17 - 0x30) < 10);
  if (pbVar11 + -1 < (byte *)0xfffffffffffffffe) {
    param_1 = pbVar18 + 2;
    bVar17 = pbVar18[2];
    pbVar18 = pbVar11 + -1;
    goto LAB_00410336;
  }
  goto switchD_00410577_caseD_26;
LAB_00410398:
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
joined_r0x004104aa:
    uVar8 = local_70;
    local_68 = pbVar12;
    if (bVar17 != 0x2e) goto LAB_004103b1;
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
      goto LAB_004103b1;
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
      if (bVar17 != 0x24) goto LAB_004104ef;
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
          if (9 < bVar17) goto switchD_00410577_caseD_26;
        }
      } while (bVar17 < 10);
      pbVar14 = (byte *)(uVar16 - 1);
      if ((byte *)0xfffffffffffffffd < pbVar14) goto switchD_00410577_caseD_26;
      ppbVar3[8] = pbVar14;
      pbVar11 = pbVar12 + 2;
    }
    else {
LAB_004104ef:
      pbVar14 = ppbVar3[8];
      if (ppbVar3[8] == (byte *)0xffffffffffffffff) {
        local_68 = pbVar12 + 1;
        ppbVar3[8] = pbVar12;
        pbVar14 = pbVar12;
        if (pbVar12 == (byte *)0xffffffffffffffff) goto switchD_00410577_caseD_26;
      }
    }
    __ptr = (byte **)param_3[1];
    if (pbVar14 < pbVar19) {
      pbVar12 = *param_3;
      __dest_00 = __ptr;
LAB_0041050e:
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
LAB_004103b1:
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
               (bVar17 != 0x74)) goto code_r0x00410574;
            uVar5 = uVar5 + 8;
          }
          bVar17 = *param_1;
        } while( true );
      }
      if (iVar6 == 5) {
        bVar17 = *pbVar11;
        goto LAB_004103b1;
      }
      goto LAB_004109bc;
    }
    pbVar19 = (byte *)((long)pbVar19 * 2);
    if (pbVar19 <= pbVar14) {
      pbVar19 = pbVar14 + 1;
    }
    if (pbVar19 < (byte *)0x800000000000000) {
      if (ppbVar2 == __ptr) {
        __dest_00 = (byte **)malloc((long)pbVar19 << 5);
        if (__dest_00 == (byte **)0x0) goto LAB_00410ba9;
        pbVar12 = *param_3;
        __ptr = ppbVar2;
LAB_00410e5b:
        memcpy(__dest_00,__ptr,(long)pbVar12 << 5);
        pbVar12 = *param_3;
      }
      else {
        __dest_00 = (byte **)realloc(__ptr,(long)pbVar19 << 5);
        __ptr = (byte **)param_3[1];
        if (__dest_00 == (byte **)0x0) goto LAB_00410b90;
        pbVar12 = *param_3;
        if (ppbVar2 == __ptr) goto LAB_00410e5b;
      }
      param_3[1] = (byte *)__dest_00;
      goto LAB_0041050e;
    }
    goto LAB_00410b90;
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
    if (bVar17 != 0x24) goto LAB_0041043d;
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
        if (9 < bVar17) goto switchD_00410577_caseD_26;
      }
    } while (bVar17 < 10);
    pbVar14 = pbVar14 + -1;
    if ((byte *)0xfffffffffffffffd < pbVar14) goto switchD_00410577_caseD_26;
    ppbVar3[5] = pbVar14;
    pbVar11 = pbVar10 + 2;
  }
  else {
LAB_0041043d:
    pbVar14 = ppbVar3[5];
    if (ppbVar3[5] == (byte *)0xffffffffffffffff) {
      ppbVar3[5] = local_68;
      bVar21 = local_68 == (byte *)0xffffffffffffffff;
      pbVar14 = local_68;
      local_68 = local_68 + 1;
      if (bVar21) goto switchD_00410577_caseD_26;
    }
  }
  __ptr = (byte **)param_3[1];
  if (pbVar14 < pbVar19) {
    pbVar12 = *param_3;
    __dest_00 = __ptr;
LAB_0041045c:
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
      if (iVar6 != 5) goto LAB_004109bc;
      bVar17 = *pbVar11;
      pbVar11 = pbVar11 + 1;
    }
    goto joined_r0x004104aa;
  }
  pbVar19 = (byte *)((long)pbVar19 * 2);
  if (pbVar19 <= pbVar14) {
    pbVar19 = pbVar14 + 1;
  }
  if ((byte *)0x7ffffffffffffff < pbVar19) goto LAB_00410b90;
  if (ppbVar2 != __ptr) {
    __dest_00 = (byte **)realloc(__ptr,(long)pbVar19 << 5);
    __ptr = (byte **)param_3[1];
    if (__dest_00 != (byte **)0x0) {
      pbVar12 = *param_3;
      if (ppbVar2 == __ptr) goto LAB_00410ca9;
      goto LAB_0041077d;
    }
    goto LAB_00410b90;
  }
  __dest_00 = (byte **)malloc((long)pbVar19 << 5);
  if (__dest_00 != (byte **)0x0) {
    pbVar12 = *param_3;
    __ptr = ppbVar2;
LAB_00410ca9:
    memcpy(__dest_00,__ptr,(long)pbVar12 << 5);
    pbVar12 = *param_3;
LAB_0041077d:
    param_3[1] = (byte *)__dest_00;
    goto LAB_0041045c;
  }
  goto LAB_00410ba9;
code_r0x00410574:
  switch(bVar17) {
  case 0x25:
    goto switchD_00410577_caseD_25;
  default:
    goto switchD_00410577_caseD_26;
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
switchD_00410577_caseD_26:
      __dest_00 = (byte **)param_3[1];
      goto LAB_004109bc;
    }
  }
  else {
    ppbVar3[10] = pbVar18;
  }
  __ptr = (byte **)param_3[1];
  __dest_00 = __ptr;
  if (pbVar18 < pbVar19) {
LAB_004105a5:
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
LAB_004109bc:
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
switchD_00410577_caseD_25:
    *(byte *)(ppbVar3 + 9) = bVar17;
    uVar8 = *param_2;
    ppbVar3[1] = param_1;
    uVar8 = uVar8 + 1;
    *param_2 = uVar8;
    if (uVar8 < uVar20) {
      __dest = (ulong *)param_2[1];
      goto LAB_0041026b;
    }
    if (((long)uVar20 < 0) || (0x2e8ba2e8ba2e8ba < uVar20 * 2)) {
LAB_00410ee3:
      __ptr = (byte **)param_3[1];
      goto LAB_00410b90;
    }
    __ptr_00 = (ulong *)param_2[1];
    if (puVar1 != __ptr_00) {
      __dest = (ulong *)realloc(__ptr_00,uVar20 * 0xb0);
      if (__dest == (ulong *)0x0) goto LAB_00410ee3;
      __ptr_00 = (ulong *)param_2[1];
      uVar8 = *param_2;
      if (puVar1 != __ptr_00) goto LAB_0041067f;
LAB_004107a4:
      __dest = (ulong *)memcpy(__dest,__ptr_00,uVar8 * 0x58);
      uVar8 = *param_2;
LAB_0041067f:
      param_2[1] = (ulong)__dest;
      uVar20 = uVar20 * 2;
      goto LAB_0041026b;
    }
    __dest = (ulong *)malloc(uVar20 * 0xb0);
    if (__dest != (ulong *)0x0) goto LAB_004107a4;
    __ptr = (byte **)param_3[1];
    if (ppbVar2 == __ptr) goto LAB_00410bb9;
  }
  else {
    pbVar19 = (byte *)((long)pbVar19 * 2);
    if (pbVar19 <= pbVar18) {
      pbVar19 = pbVar18 + 1;
    }
    if (pbVar19 < (byte *)0x800000000000000) {
      if (ppbVar2 == __ptr) {
        __dest_00 = (byte **)malloc((long)pbVar19 << 5);
        if (__dest_00 == (byte **)0x0) goto LAB_00410ba9;
LAB_00410b46:
        memcpy(__dest_00,__ptr,(long)*param_3 << 5);
LAB_00410a8b:
        param_3[1] = (byte *)__dest_00;
        goto LAB_004105a5;
      }
      __dest_00 = (byte **)realloc(__ptr,(long)pbVar19 << 5);
      if (__dest_00 != (byte **)0x0) {
        __ptr = ppbVar2;
        if (ppbVar2 == (byte **)param_3[1]) goto LAB_00410b46;
        goto LAB_00410a8b;
      }
      goto LAB_00410ee3;
    }
LAB_00410b90:
    if (ppbVar2 == __ptr) goto LAB_00410ba9;
  }
  free(__ptr);
LAB_00410ba9:
  if (puVar1 != (ulong *)param_2[1]) {
    free((ulong *)param_2[1]);
  }
LAB_00410bb9:
  piVar9 = __errno_location();
  *piVar9 = 0xc;
  return 0xffffffff;
}


/* WARNING: Removing unreachable block (ram,0x00410f33) */
/* WARNING: Removing unreachable block (ram,0x00410f38) */

void FUN_00410f00(void)

{
  __DT_INIT();
  return;
}


void FUN_00410f60(void)

{
  return;
}


void FUN_00410f70(undefined8 param_1)

{
  __cxa_atexit(param_1,0,DAT_00617308);
  return;
}


undefined8 FUN_00410f88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code **ppcVar1;
  
  for (ppcVar1 = (code **)&DAT_00616e30; *ppcVar1 != (code *)0xffffffffffffffff;
      ppcVar1 = ppcVar1 + -1) {
    (**ppcVar1)();
  }
  return param_3;
}


void __DT_FINI(void)

{
  FUN_00403991();
  return;
}

