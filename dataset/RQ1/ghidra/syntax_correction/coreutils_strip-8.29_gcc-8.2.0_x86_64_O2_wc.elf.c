
#include "decompile_ghidra.h"
#define __int64 long long
#define __int32 int
#define __int16 short
#define __int8 char

void switchD_00403da0caseD_b(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401d55(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401d5a(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401d5f(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401d64(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void switchD_00405c8acaseD_0(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


uint FUN_00401d80(ulong param_1,undefined *param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  undefined uVar5;
  undefined uVar6;
  byte *__s1;
  ulong uVar7;
  int *piVar8;
  FILE *__stream;
  long lVar9;
  undefined uVar10;
  ulong uVar11;
  undefined *puVar12;
  byte *pbVar13;
  byte *pbVar14;
  ulong uVar15;
  uint uVar16;
  stat *psVar17;
  long unaff_R14;
  bool bVar18;
  bool bVar19;
  byte bVar20;
  double dVar21;
  double dVar22;
  undefined auVar23 [16];
  stat *local_208;
  undefined *local_200;
  undefined *local_1f8;
  char local_1ed;
  int local_1ec;
  int local_1e8;
  uint local_1d0;
  long local_1b8;
  ulong local_158;
  undefined *local_150;
  
  bVar20 = 0;
  param_1 = param_1 & 0xffffffff;
  FUN_00403bb0(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils");
  textdomain("coreutils");
  FUN_00407e80(FUN_00403810);
  iVar2 = getpagesize();
  DAT_0060c320 = (long)iVar2;
  setvbuf(stdout,(char *)0x0,1,0);
  DAT_0060c331 = 0;
  DAT_0060c332 = 0;
  DAT_0060c333 = 0;
  DAT_0060c334 = 0;
  DAT_0060c330 = 0;
  DAT_0060c338 = 0;
  DAT_0060c340 = 0;
  DAT_0060c348 = 0;
  DAT_0060c350 = 0;
  DAT_0060c358 = 0;
  pbVar13 = (byte *)0x0;
LAB_00401e50:
  __s1 = pbVar13;
  iVar2 = FUN_004072a0(param_1 & 0xffffffff,param_2,"clLmw",&PTR_s_bytes_00408200,0);
  if (iVar2 == -1) {
    if ((DAT_0060c334 == 0) && (DAT_0060c333 == 0)) goto LAB_0040239b;
LAB_00401f56:
    lVar9 = (long)DAT_0060c2bc;
    iVar2 = (int)param_1;
    if (__s1 == (byte *)0x0) {
      if (DAT_0060c2bc < iVar2) {
        local_1f8 = param_2 + DAT_0060c2bc;
        uVar7 = (ulong)(iVar2 - DAT_0060c2bc);
        unaff_R14 = FUN_004036b0();
        if (unaff_R14 == 0) goto LAB_00402696;
        local_208 = (stat *)&local_1e8;
        local_1ed = '\0';
LAB_00402414:
        local_200 = (undefined *)FUN_004061a0(uVar7 * 0x98);
        if (uVar7 == 1) goto LAB_00402596;
      }
      else {
        unaff_R14 = FUN_004036b0(&DAT_0060c318);
        if (unaff_R14 == 0) goto LAB_00402696;
        local_200 = (undefined *)FUN_004061a0(0x98);
        local_1ed = '\0';
        local_208 = (stat *)&local_1e8;
        local_1f8 = (undefined *)&DAT_0060c318;
LAB_00402596:
        iVar2 = (uint)DAT_0060c334 + (uint)DAT_0060c333 + (uint)DAT_0060c332 + (uint)DAT_0060c331 +
                (uint)DAT_0060c330;
        if (iVar2 == 1) {
          uVar7 = 1;
          *(int *)local_200 = 1;
          DAT_0060c32c = iVar2;
          goto LAB_00401ff4;
        }
        uVar7 = 1;
      }
      uVar15 = 0;
      psVar17 = (stat *)(local_200 + 1);
      do {
        pcVar4 = (char *)local_1f8[uVar15];
        if ((pcVar4 == (char *)0x0) || (iVar2 = strcmp(pcVar4,"-"), iVar2 == 0)) {
          iVar2 = __fxstat(1,0,psVar17);
        }
        else {
          iVar2 = __xstat(1,pcVar4,psVar17);
        }
        uVar15 = uVar15 + 1;
        *(int *)(psVar17[-1].__unused + 2) = iVar2;
        psVar17 = (stat *)&psVar17[1].st_ino;
      } while (uVar7 != uVar15);
      DAT_0060c32c = 1;
      if (*(int *)local_200 < 1) {
        iVar2 = 1;
        uVar15 = 0;
        uVar11 = 0;
        puVar12 = local_200;
        do {
          if (*(int *)puVar12 == 0) {
            if ((*(uint *)(puVar12 + 4) & 0xf000) == 0x8000) {
              uVar15 = uVar15 + puVar12[7];
            }
            else {
              iVar2 = 7;
            }
          }
          uVar11 = uVar11 + 1;
          puVar12 = puVar12 + 0x13;
        } while (uVar7 != uVar11);
LAB_00402536:
        DAT_0060c32c = 1;
        for (; 9 < uVar15; uVar15 = uVar15 / 10) {
          DAT_0060c32c = DAT_0060c32c + 1;
        }
        if (DAT_0060c32c < iVar2) {
          DAT_0060c32c = iVar2;
        }
      }
    }
    else {
      if (DAT_0060c2bc < iVar2) goto LAB_004026cd;
      iVar2 = strcmp((char *)__s1,"-");
      __stream = stdin;
      if ((iVar2 != 0) && (__stream = fopen((char *)__s1,"r"), __stream == (FILE *)0x0)) {
        __s1 = (byte *)FUN_00405580(4,__s1);
        uVar7 = dcgettext(0,"cannot open %s for reading",5);
        piVar8 = __errno_location();
        iVar2 = 1;
        uVar15 = error(1,*piVar8,uVar7,__s1);
        goto LAB_00402536;
      }
      iVar2 = fileno(__stream);
      local_208 = (stat *)&local_1e8;
      iVar2 = __fxstat(1,iVar2,local_208);
      if ((iVar2 == 0) && ((local_1d0 & 0xf000) == 0x8000)) {
        local_200 = (undefined *)(double)local_1b8;
        dVar21 = (double)FUN_00403ab0();
        dVar22 = DAT_00408940;
        if (dVar21 * DAT_00408948 <= DAT_00408940) {
          dVar22 = (double)FUN_00403ab0();
          dVar22 = DAT_00408948 * dVar22;
        }
        if (dVar22 < (double)local_200) goto LAB_00401fbf;
        FUN_004058e0(&local_158);
        local_1ed = FUN_00405980(__stream);
        if ((local_1ed == '\0') || (iVar2 = FUN_00406430(__stream), uVar7 = local_158, iVar2 != 0))
        {
          uVar10 = FUN_00405580(4,__s1);
          uVar5 = dcgettext(0,"cannot read file names from %s",5);
          auVar23 = error(1,0,uVar5,uVar10);
          psVar17 = local_208;
          local_208 = SUB168(auVar23,0);
          (*(code *)PTR___libc_start_main_0060bff0)
                    (FUN_00401d80,psVar17,&local_200,FUN_00407e10,FUN_00407e70,
                     SUB168(auVar23 >> 0x40,0),&local_208);
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
        local_1f8 = local_150;
        unaff_R14 = FUN_004036b0(local_150);
        if (unaff_R14 == 0) goto LAB_00402696;
        if (uVar7 != 0) {
          if ((SUB168(ZEXT816(0x98) * ZEXT816(uVar7),0) < 0) ||
             (SUB168(ZEXT816(0x98) * ZEXT816(uVar7) >> 0x40,0) != 0)) goto LAB_00402696;
          goto LAB_00402414;
        }
      }
      else {
LAB_00401fbf:
        unaff_R14 = FUN_004036e0(__stream);
        if (unaff_R14 == 0) goto LAB_00402696;
        local_1ed = '\0';
      }
      uVar7 = 0;
      local_200 = (undefined *)FUN_004061a0(0x98);
      *(int *)local_200 = 1;
      DAT_0060c32c = 1;
    }
LAB_00401ff4:
    param_2 = (undefined *)0x0;
    uVar16 = 1;
    while (pcVar4 = (char *)FUN_00403720(unaff_R14,local_208), pcVar4 != (char *)0x0) {
      bVar18 = false;
      bVar19 = __s1 == (byte *)0x0;
      if (bVar19) {
        if (*pcVar4 == '\0') {
          dcgettext(0,"invalid zero-length file name",5);
          error(0,0,"%s");
LAB_004021e2:
          uVar16 = 0;
        }
        else {
LAB_004020e0:
          lVar9 = 0;
          if (uVar7 != 0) {
LAB_004020e7:
            lVar9 = (long)param_2 * 0x98;
          }
          local_1f8 = (undefined *)(lVar9 + (long)local_200);
          iVar2 = strcmp(pcVar4,"-");
          if (iVar2 == 0) {
            DAT_0060c328 = '\x01';
            uVar3 = FUN_00402a20(0,pcVar4,local_1f8,0xffffffffffffffff);
          }
          else {
LAB_0040203a:
            iVar2 = open(pcVar4,0);
            if (iVar2 != -1) {
              local_1ec = iVar2;
              bVar1 = FUN_00402a20(iVar2,pcVar4,local_1f8,0);
              local_1f8 = (undefined *)((ulong)local_1f8 & 0xffffffffffffff00 | (ulong)bVar1);
              iVar2 = close(local_1ec);
              uVar3 = (uint)local_1f8 & 0xff;
              if (iVar2 == 0) goto LAB_00402082;
            }
            FUN_00405650(0,3,pcVar4);
            piVar8 = __errno_location();
            error(0,*piVar8,"%s");
            uVar3 = 0;
          }
LAB_00402082:
          uVar16 = uVar16 & uVar3;
        }
      }
      else {
        lVar9 = 2;
        pbVar13 = __s1;
        pbVar14 = &DAT_00409bea;
        do {
          if (lVar9 == 0) break;
          lVar9 = lVar9 + -1;
          bVar18 = *pbVar13 < *pbVar14;
          bVar19 = *pbVar13 == *pbVar14;
          pbVar13 = pbVar13 + (ulong)bVar20 * -2 + 1;
          pbVar14 = pbVar14 + (ulong)bVar20 * -2 + 1;
        } while (bVar19);
        if ((!bVar18 && !bVar19) == bVar18) {
          iVar2 = strcmp(pcVar4,"-");
          if (iVar2 == 0) {
            FUN_00405580(4,pcVar4);
            uVar10 = dcgettext(0,"when reading file names from stdin, no file name of %s allowed",5)
            ;
            error(0,0,uVar10);
            if (*pcVar4 != '\0') goto LAB_004021e2;
          }
          else if (*pcVar4 != '\0') {
            if (uVar7 != 0) goto LAB_004020e7;
            local_1f8 = local_200;
            goto LAB_0040203a;
          }
        }
        else if (*pcVar4 != '\0') goto LAB_004020e0;
        uVar10 = FUN_004037b0(unaff_R14);
        uVar5 = dcgettext(0,"invalid zero-length file name",5);
        uVar6 = FUN_00405650(0,3,__s1);
        error(0,0,"%s:%lu: %s",uVar6,uVar10,uVar5);
        uVar16 = 0;
      }
      if (uVar7 == 0) {
        *(int *)local_200 = 1;
      }
      param_2 = (undefined *)((long)param_2 + 1);
    }
    if (local_1e8 == 3) {
LAB_00402696:
                    /* WARNING: Subroutine does not return */
      FUN_004063f0();
    }
    if (local_1e8 == 4) {
      __s1 = (byte *)FUN_00405650(0,3,__s1);
      param_1 = dcgettext(0,"%s: read error",5);
      piVar8 = __errno_location();
      error(0,*piVar8,param_1,__s1);
      uVar16 = 0;
    }
    else {
      if (local_1e8 != 2) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("!\"unexpected error code from argv_iter\"","src/wc.c",0x31a,"main");
      }
      bVar1 = __s1 == (byte *)0x0 & (byte)uVar16;
      param_1 = (ulong)(uint)bVar1;
      if ((bVar1 != 0) && (lVar9 = FUN_004037b0(unaff_R14), uVar16 = (uint)bVar1, lVar9 == 0)) {
        DAT_0060c328 = '\x01';
        uVar16 = FUN_00402a20(0,0,local_200,0xffffffffffffffff);
      }
    }
    if (local_1ed != '\0') {
      FUN_00405950(&local_158);
    }
    uVar7 = FUN_004037b0(unaff_R14);
    if (1 < uVar7) {
      uVar10 = dcgettext(0,"total",5);
      FUN_00402850(DAT_0060c358,DAT_0060c350,DAT_0060c348,DAT_0060c340,DAT_0060c338,uVar10);
    }
    FUN_004037d0(unaff_R14);
    free(local_200);
    if ((DAT_0060c328 == '\0') || (iVar2 = close(0), iVar2 == 0)) {
      return (uVar16 ^ 1) & 0xff;
    }
    piVar8 = __errno_location();
    error(1,*piVar8,&DAT_00409bea);
LAB_0040239b:
    if (((DAT_0060c332 == 0) && (DAT_0060c331 == 0)) && (DAT_0060c330 == 0)) {
      DAT_0060c331 = 1;
      DAT_0060c333 = 1;
      DAT_0060c334 = 1;
    }
    goto LAB_00401f56;
  }
  pbVar13 = __s1;
  if (iVar2 == 99) {
    DAT_0060c331 = 1;
    goto LAB_00401e50;
  }
  if (iVar2 < 100) {
    if (iVar2 == -0x82) {
      lVar9 = FUN_00403350(0);
LAB_004026cd:
      param_1 = FUN_00405580(4,param_2[lVar9]);
      uVar10 = dcgettext(0,"extra operand %s",5);
      error(0,0,uVar10,param_1);
      uVar10 = dcgettext(0,"file operands cannot be combined with --files0-from",5);
      __fprintf_chk(stderr,1,"%s\n",uVar10);
    }
    else {
      if (iVar2 == 0x4c) {
        DAT_0060c330 = 1;
        goto LAB_00401e50;
      }
      if (iVar2 == -0x83) {
        FUN_00406060(stdout,&DAT_00407ef3,"GNU coreutils",PTR_DAT_0060c250,"Paul Rubin",
                     "David MacKenzie",0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
    }
  }
  else {
    if (iVar2 == 0x6d) goto LAB_00401ee8;
    if (iVar2 < 0x6e) {
      if (iVar2 != 0x6c) goto LAB_00401ed7;
      DAT_0060c334 = 1;
      goto LAB_00401e50;
    }
    if (iVar2 == 0x77) {
      DAT_0060c333 = 1;
      goto LAB_00401e50;
    }
    pbVar13 = DAT_0060c500;
    if (iVar2 == 0x80) goto LAB_00401e50;
  }
LAB_00401ed7:
  FUN_00403350(1);
LAB_00401ee8:
  DAT_0060c332 = 1;
  pbVar13 = __s1;
  goto LAB_00401e50;
}


void FUN_00402770(undefined param_1,undefined param_2,undefined param_3)

{
  undefined unaff_retaddr;
  undefined auStack_8 [8];
  
  (*(code *)PTR___libc_start_main_0060bff0)
            (FUN_00401d80,unaff_retaddr,&stack0x00000008,FUN_00407e10,FUN_00407e70,param_3,auStack_8
            );
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* WARNING: Removing unreachable block (ram,0x004027a8) */
/* WARNING: Removing unreachable block (ram,0x004027b2) */

void FUN_0040279b(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x004027e9) */

void FUN_004027ba(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00402826) */

void FUN_004027f1(void)

{
  if (DAT_0060c308 != '\0') {
    return;
  }
  FUN_0040279b();
  DAT_0060c308 = 1;
  return;
}


/* WARNING: Removing unreachable block (ram,0x004027e9) */

void thunk_FUN_004027ba(void)

{
  return;
}


void FUN_00402850(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                 undefined param_5,char *param_6)

{
  char *pcVar1;
  undefined uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined auStack_58 [40];
  
  puVar3 = &DAT_004081e1;
  if (DAT_0060c334 != '\0') {
    uVar2 = FUN_004038f0(param_1,auStack_58);
    puVar3 = &DAT_004081e0;
    __printf_chk(1,&DAT_004081e1,DAT_0060c32c,uVar2);
  }
  puVar4 = puVar3;
  if (DAT_0060c333 != '\0') {
    uVar2 = FUN_004038f0(param_2,auStack_58);
    puVar4 = &DAT_004081e0;
    __printf_chk(1,puVar3,DAT_0060c32c,uVar2);
  }
  puVar3 = puVar4;
  if (DAT_0060c332 != '\0') {
    uVar2 = FUN_004038f0(param_3,auStack_58);
    puVar3 = &DAT_004081e0;
    __printf_chk(1,puVar4,DAT_0060c32c,uVar2);
  }
  puVar4 = puVar3;
  if (DAT_0060c331 != '\0') {
    uVar2 = FUN_004038f0(param_4,auStack_58);
    puVar4 = &DAT_004081e0;
    __printf_chk(1,puVar3,DAT_0060c32c,uVar2);
  }
  if (DAT_0060c330 != '\0') {
    uVar2 = FUN_004038f0(param_5,auStack_58);
    __printf_chk(1,puVar4,DAT_0060c32c,uVar2);
  }
  if (param_6 != (char *)0x0) {
    pcVar1 = strchr(param_6,10);
    if (pcVar1 != (char *)0x0) {
      param_6 = (char *)FUN_00405650(0,3,param_6);
    }
    __printf_chk(1," %s",param_6);
  }
  pcVar1 = stdout->_IO_write_ptr;
  if (pcVar1 < stdout->_IO_write_end) {
    stdout->_IO_write_ptr = pcVar1 + 1;
    *pcVar1 = '\n';
  }
  else {
    __overflow(stdout,10);
  }
  return;
}


char FUN_00402a20(int param_1,long param_2,int *param_3,long param_4)

{
  wchar_t __c;
  mbstate_t mVar1;
  int iVar2;
  size_t sVar3;
  long lVar4;
  ushort **ppuVar5;
  long lVar6;
  __off_t _Var7;
  undefined uVar8;
  int *piVar9;
  ulong uVar10;
  ulong uVar11;
  byte *pbVar12;
  long lVar13;
  ulong uVar14;
  byte bVar15;
  byte *pbVar16;
  byte *pbVar17;
  char cVar18;
  bool bVar19;
  long local_40a0;
  long local_4090;
  ulong local_4088;
  ulong local_4080;
  byte local_4069;
  long local_4060;
  wchar_t local_4054;
  mbstate_t local_4050;
  byte local_4048 [16408];
  
  local_4060 = param_2;
  if (param_2 == 0) {
    local_4060 = dcgettext(0,"standard input",5);
  }
  sVar3 = __ctype_get_mb_cur_max();
  cVar18 = DAT_0060c330;
  bVar15 = DAT_0060c331;
  if (sVar3 < 2) {
    local_4069 = 0;
    if (DAT_0060c331 == 0) {
      bVar15 = DAT_0060c332;
    }
  }
  else {
    local_4069 = DAT_0060c332;
  }
  if ((DAT_0060c333 == '\0') && (DAT_0060c330 == '\0')) {
    if ((bVar15 == 1) && (local_4069 == 0)) {
      if (DAT_0060c334 != '\0') {
        FUN_004038b0(param_1,0,0,2);
LAB_0040319a:
        if (DAT_0060c334 != '\0') {
LAB_004031b0:
          local_4080 = 0;
          bVar19 = false;
          local_40a0 = 0;
          while (uVar11 = FUN_00405ba0(param_1,local_4048,0x4000), uVar11 != 0) {
            if (uVar11 == 0xffffffffffffffff) {
              uVar11 = 0;
              cVar18 = '\0';
              uVar10 = 0;
              local_4090 = 0;
              uVar8 = FUN_00405650(0,3,local_4060);
              piVar9 = __errno_location();
              error(0,*piVar9,"%s",uVar8);
              goto LAB_00402f98;
            }
            local_4080 = local_4080 + uVar11;
            pbVar17 = local_4048 + uVar11;
            pbVar16 = local_4048;
            lVar6 = local_40a0;
            if (bVar19) {
              while (lVar13 = FUN_004073a0(pbVar16,10,(long)pbVar17 - (long)pbVar16), lVar13 != 0) {
                pbVar16 = (byte *)(lVar13 + 1);
                lVar6 = lVar6 + 1;
              }
              bVar19 = (ulong)(lVar6 - local_40a0) <= uVar11 / 0xf;
              local_40a0 = lVar6;
            }
            else if (pbVar17 == local_4048) {
              bVar19 = true;
            }
            else {
              do {
                pbVar12 = pbVar16 + 1;
                lVar6 = lVar6 + (ulong)(*pbVar16 == 10);
                pbVar16 = pbVar12;
              } while (pbVar17 != pbVar12);
              bVar19 = (ulong)(lVar6 - local_40a0) <= uVar11 / 0xf;
              local_40a0 = lVar6;
            }
          }
          uVar11 = 0;
          uVar10 = 0;
          local_4090 = 0;
          cVar18 = '\x01';
          goto LAB_00402f98;
        }
      }
      iVar2 = *param_3;
      if (0 < iVar2) {
        iVar2 = __fxstat(1,param_1,(stat *)(param_3 + 2));
        *param_3 = iVar2;
      }
      uVar11 = DAT_0060c320;
      if (((iVar2 == 0) && ((param_3[8] & 0xd000U) == 0x8000)) &&
         (local_4080 = *(ulong *)(param_3 + 0xe), -1 < (long)local_4080)) {
        if (param_4 == -1) {
          uVar10 = lseek(param_1,0,1);
          if (local_4080 % uVar11 == 0) {
            bVar15 = (byte)~(byte)(uVar10 >> 0x38) >> 7;
            goto LAB_00402e8c;
          }
          if (local_4080 < uVar10) {
            uVar11 = 0;
            uVar10 = 0;
            local_4090 = 0;
            cVar18 = '\x01';
            local_4080 = 0;
            local_40a0 = 0;
            goto LAB_00402f98;
          }
          local_4080 = local_4080 - uVar10;
        }
        else if (local_4080 % DAT_0060c320 == 0) {
          bVar15 = 1;
          uVar10 = 0;
LAB_00402e8c:
          uVar11 = 0x201;
          if (*(long *)(param_3 + 0x10) - 1U < 0x2000000000000000) {
            uVar11 = *(long *)(param_3 + 0x10) + 1;
          }
          lVar6 = local_4080 - local_4080 % uVar11;
          if (((lVar6 <= (long)uVar10) || (bVar15 == 0)) ||
             (_Var7 = lseek(param_1,lVar6,1), _Var7 < 0)) goto LAB_00402aba;
          local_4080 = lVar6 - uVar10;
          goto LAB_00402ac3;
        }
      }
      else {
LAB_00402aba:
        local_4080 = 0;
LAB_00402ac3:
        FUN_004038b0(param_1,0,0,2);
        while (lVar6 = FUN_00405ba0(param_1,local_4048,0x4000), lVar6 != 0) {
          if (lVar6 == -1) {
            uVar11 = 0;
            uVar10 = 0;
            local_4090 = 0;
            uVar8 = FUN_00405650(0,3,local_4060);
            piVar9 = __errno_location();
            error(0,*piVar9,"%s",uVar8);
            local_40a0 = 0;
            goto LAB_00402f98;
          }
          local_4080 = local_4080 + lVar6;
        }
      }
      uVar11 = 0;
      uVar10 = 0;
      local_4090 = 0;
      cVar18 = '\x01';
      local_40a0 = 0;
      goto LAB_00402f98;
    }
    FUN_004038b0(param_1,0,0,2);
    if (local_4069 != 1) {
      if (bVar15 != 0) goto LAB_0040319a;
      if (local_4069 == 0) goto LAB_004031b0;
    }
  }
  else {
    FUN_004038b0(param_1,0,0,2);
  }
  sVar3 = __ctype_get_mb_cur_max();
  if (sVar3 < 2) {
    uVar10 = 0;
    uVar14 = 0;
    local_4080 = 0;
    local_40a0 = 0;
    local_4090 = 0;
    uVar11 = uVar14;
    while (lVar6 = FUN_00405ba0(param_1,local_4048,0x4000), lVar6 != 0) {
      if (lVar6 == -1) {
        uVar8 = FUN_00405650(0,3,local_4060);
        cVar18 = '\0';
        piVar9 = __errno_location();
        error(0,*piVar9,"%s",uVar8);
        goto LAB_00403053;
      }
      local_4080 = local_4080 + lVar6;
      pbVar17 = local_4048;
      do {
        pbVar16 = pbVar17 + 1;
        bVar15 = *pbVar17;
        switch(bVar15) {
        case 9:
          uVar11 = (uVar11 & 0xfffffffffffffff8) + 8;
          break;
        case 10:
          local_40a0 = local_40a0 + 1;
        case 0xc:
        case 0xd:
          if (uVar10 < uVar11) {
            uVar10 = uVar11;
          }
          uVar11 = 0;
          break;
        case 0xb:
          break;
        default:
          ppuVar5 = __ctype_b_loc();
          if (((*ppuVar5)[bVar15] & 0x4000) != 0) {
            uVar11 = uVar11 + 1;
            if (((*ppuVar5)[bVar15] & 0x2000) != 0) break;
            local_4090 = 1;
          }
          goto LAB_00402dae;
        case 0x20:
          uVar11 = uVar11 + 1;
        }
        uVar14 = uVar14 + local_4090;
        local_4090 = 0;
LAB_00402dae:
        pbVar17 = pbVar16;
      } while (pbVar16 != local_4048 + lVar6);
    }
    cVar18 = '\x01';
LAB_00403053:
    if (uVar11 <= uVar10) {
      uVar11 = uVar10;
    }
    local_4090 = local_4090 + uVar14;
    uVar10 = 0;
  }
  else {
    lVar13 = 0;
    uVar11 = 0;
    local_4050 = (mbstate_t)0x0;
    lVar6 = 0;
    uVar10 = 0;
    local_4088 = 0;
    local_4080 = 0;
    local_4090 = 0;
    local_40a0 = 0;
    bVar19 = false;
LAB_00402b60:
    lVar4 = FUN_00405ba0(param_1,local_4048 + lVar13,0x4000 - lVar13);
    if (lVar4 == 0) {
      cVar18 = '\x01';
    }
    else {
      if (lVar4 != -1) {
        local_4080 = local_4080 + lVar4;
        lVar13 = lVar13 + lVar4;
        pbVar17 = local_4048;
        if (bVar19) goto LAB_00402c42;
LAB_00402ba8:
        bVar15 = *pbVar17;
        if ((*(uint *)(&DAT_00408980 + (ulong)(bVar15 >> 5) * 4) >> (bVar15 & 0x1f) & 1) == 0)
        goto LAB_00402c42;
        uVar10 = uVar10 + 1;
        lVar4 = 1;
        local_4054 = (int)(char)bVar15;
LAB_00402bd2:
        pbVar17 = pbVar17 + lVar4;
        lVar13 = lVar13 - lVar4;
        switch(local_4054) {
        case L'\t':
          uVar11 = (uVar11 & 0xfffffffffffffff8) + 8;
          break;
        case L'\n':
          local_40a0 = local_40a0 + 1;
        case L'\f':
        case L'\r':
          uVar14 = uVar11;
          if (uVar11 <= local_4088) {
            uVar14 = local_4088;
          }
          uVar11 = 0;
          local_4088 = uVar14;
          break;
        case L'\v':
          break;
        default:
          goto LAB_00402cab;
        case L' ':
          uVar11 = uVar11 + 1;
        }
        do {
          local_4090 = local_4090 + lVar6;
          lVar6 = 0;
          while( true ) {
            do {
              while( true ) {
                if (lVar13 == 0) goto LAB_00402b60;
                if (!bVar19) goto LAB_00402ba8;
LAB_00402c42:
                mVar1 = local_4050;
                lVar4 = FUN_00407320(&local_4054,pbVar17,lVar13);
                if (lVar4 == -2) {
                  local_4050 = mVar1;
                  if (lVar13 != 0) {
                    if (lVar13 == 0x4000) {
                      pbVar17 = pbVar17 + 1;
                      lVar13 = 0x3fff;
                    }
                    __memmove_chk(local_4048,pbVar17,lVar13,0x4001);
                  }
                  bVar19 = true;
                  goto LAB_00402b60;
                }
                if (lVar4 != -1) break;
                pbVar17 = pbVar17 + 1;
                lVar13 = lVar13 + -1;
                bVar19 = true;
              }
              iVar2 = mbsinit(&local_4050);
              bVar19 = iVar2 == 0;
              uVar10 = uVar10 + 1;
              if (lVar4 != 0) goto LAB_00402bd2;
              local_4054 = L'\0';
              pbVar17 = pbVar17 + 1;
              lVar13 = lVar13 + -1;
LAB_00402cab:
              __c = local_4054;
              iVar2 = iswprint(local_4054);
            } while (iVar2 == 0);
            iVar2 = wcwidth(__c);
            if (0 < iVar2) {
              uVar11 = (long)iVar2 + uVar11;
            }
            iVar2 = iswspace(local_4054);
            if (iVar2 != 0) break;
            lVar6 = 1;
          }
        } while( true );
      }
      cVar18 = '\0';
      uVar8 = FUN_00405650(0,3,local_4060);
      piVar9 = __errno_location();
      error(0,*piVar9,"%s",uVar8);
    }
    if (uVar11 <= local_4088) {
      uVar11 = local_4088;
    }
    local_4090 = local_4090 + lVar6;
  }
LAB_00402f98:
  if (local_4069 < DAT_0060c332) {
    uVar10 = local_4080;
  }
  FUN_00402850(local_40a0,local_4090,uVar10,local_4080,uVar11,param_2);
  DAT_0060c358 = DAT_0060c358 + local_40a0;
  DAT_0060c350 = DAT_0060c350 + local_4090;
  DAT_0060c348 = DAT_0060c348 + uVar10;
  DAT_0060c340 = DAT_0060c340 + local_4080;
  if (DAT_0060c338 < uVar11) {
    DAT_0060c338 = uVar11;
  }
  return cVar18;
}


void FUN_00403350(int param_1)

{
  FILE *pFVar1;
  int iVar2;
  undefined uVar3;
  char *pcVar4;
  byte **ppbVar5;
  undefined uVar7;
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
  undefined local_28;
  undefined local_20;
  byte **ppbVar6;
  
  uVar7 = DAT_0060c370;
  bVar13 = 0;
  if (param_1 != 0) {
    uVar3 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(stderr,1,uVar3,uVar7);
    goto LAB_0040338f;
  }
  uVar3 = dcgettext(0,"Usage: %s [OPTION]... [FILE]...\n  or:  %s [OPTION]... --files0-from=F\n",5);
  __printf_chk(1,uVar3,uVar7,uVar7);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "Print newline, word, and byte counts for each FILE, and a total line if\nmore than one FILE is specified.  A word is a non-zero-length sequence of\ncharacters delimited by white space.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"\nWith no FILE, or when FILE is -, read standard input.\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nThe options below may be used to select which counts are printed, always in\nthe following order: newline, word, character, byte, maximum line length.\n  -c, --bytes            print the byte counts\n  -m, --chars            print the character counts\n  -l, --lines            print the newline counts\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --files0-from=F    read input from the files specified by\n                           NUL-terminated names in file F;\n                           If F is - then read names from standard input\n  -L, --max-line-length  print the maximum display width\n  -w, --words            print the word counts\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"      --help     display this help and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"      --version  output version information and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  local_88 = &DAT_00407ef6;
  local_80 = "test invocation";
  local_78[0] = (byte *)0x407f70;
  local_78[1] = (byte *)0x407f08;
  local_78[2] = (byte *)0x407f1e;
  local_78[3] = (byte *)0x407f28;
  local_78[4] = (byte *)0x407f37;
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
    pbVar10 = &DAT_00407ef3;
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
        pbVar9 = &DAT_00407ef3;
        goto LAB_00403683;
      }
    }
    pbVar9 = &DAT_00407ef3;
    uVar7 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    pcVar4 = " invocation";
    __printf_chk(1,uVar7,"https://www.gnu.org/software/coreutils/",&DAT_00407ef3);
  }
  else {
    uVar7 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar7,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
      iVar2 = strncmp(pcVar4,"en_",3);
      if (iVar2 != 0) {
LAB_00403683:
        uVar7 = dcgettext(0,"Report %s translation bugs to <https://translationproject.org/team/>\n"
                          ,5);
        __printf_chk(1,uVar7,&DAT_00407ef3);
      }
    }
    pcVar4 = " invocation";
    uVar7 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    __printf_chk(1,uVar7,"https://www.gnu.org/software/coreutils/",&DAT_00407ef3);
    if (pbVar9 != &DAT_00407ef3) {
      pcVar4 = "";
    }
  }
  uVar7 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(1,uVar7,pbVar9,pcVar4);
LAB_0040338f:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}


void FUN_004036b0(undefined param_1)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)malloc(0x30);
  if (puVar1 != (undefined *)0x0) {
    *puVar1 = 0;
    puVar1[4] = param_1;
    puVar1[5] = param_1;
  }
  return;
}


void FUN_004036e0(undefined param_1)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)malloc(0x30);
  if (puVar1 != (undefined *)0x0) {
    *puVar1 = param_1;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[1] = 0;
    puVar1[4] = 0;
  }
  return;
}


FILE * FUN_00403720(FILE **param_1,int *param_2)

{
  int iVar1;
  __ssize_t _Var2;
  FILE *pFVar3;
  FILE *pFVar4;
  
  if (*param_1 != (FILE *)0x0) {
    _Var2 = getdelim((char **)(param_1 + 2),(size_t *)(param_1 + 3),0,*param_1);
    if (_Var2 < 0) {
      iVar1 = feof(*param_1);
      *param_2 = (-(uint)(iVar1 == 0) & 2) + 2;
      pFVar4 = (FILE *)0x0;
    }
    else {
      *param_2 = 1;
      pFVar4 = param_1[2];
      param_1[1] = (FILE *)((long)&param_1[1]->_flags + 1);
    }
    return pFVar4;
  }
  pFVar4 = param_1[5];
  pFVar3 = *(FILE **)pFVar4;
  if (pFVar3 != (FILE *)0x0) {
    *param_2 = 1;
    param_1[5] = (FILE *)&pFVar4->_IO_read_ptr;
    return pFVar3;
  }
  *param_2 = 2;
  return pFVar3;
}


long FUN_004037b0(long *param_1)

{
  if (*param_1 != 0) {
    return param_1[1];
  }
  return param_1[5] - param_1[4] >> 3;
}


void FUN_004037d0(long *param_1)

{
  if (*param_1 != 0) {
    free((void *)param_1[2]);
  }
  free(param_1);
  return;
}


void FUN_004037f0(undefined param_1)

{
  DAT_0060c368 = param_1;
  return;
}


void FUN_00403800(undefined param_1)

{
  DAT_0060c360 = param_1;
  return;
}


void FUN_00403810(void)

{
  int iVar1;
  int *piVar2;
  undefined uVar3;
  undefined uVar4;
  
  iVar1 = FUN_004077e0(stdout);
  if (iVar1 != 0) {
    piVar2 = __errno_location();
    if ((DAT_0060c360 == '\0') || (*piVar2 != 0x20)) {
      uVar3 = dcgettext(0,"write error",5);
      if (DAT_0060c368 == 0) {
        error(0,*piVar2,"%s",uVar3);
      }
      else {
        uVar4 = FUN_00405620();
        error(0,*piVar2,"%s: %s",uVar4,uVar3);
      }
      goto LAB_0040388e;
    }
  }
  iVar1 = FUN_004077e0(stderr);
  if (iVar1 == 0) {
    return;
  }
LAB_0040388e:
                    /* WARNING: Subroutine does not return */
  _exit(DAT_0060c258);
}


void FUN_004038b0(void)

{
  (*(code *)PTR_posix_fadvise_0060c0f8)();
  return;
}


void FUN_004038c0(FILE *param_1,int param_2)

{
  int __fd;
  
  if (param_1 != (FILE *)0x0) {
    __fd = fileno(param_1);
    posix_fadvise(__fd,0,0,param_2);
    return;
  }
  return;
}


char * FUN_004038f0(ulong param_1,long param_2)

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


uint FUN_00403940(wchar_t param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = wcwidth(param_1);
  if (-1 < (int)uVar1) {
    return uVar1;
  }
  iVar2 = iswcntrl(param_1);
  return (uint)(iVar2 == 0);
}


void FUN_00403970(void **param_1,void **param_2)

{
  char cVar1;
  void **__src;
  void *pvVar2;
  void *__n;
  
  __src = (void **)*param_2;
  __n = param_2[1];
  if (__src == param_2 + 3) {
    pvVar2 = memcpy(param_1 + 3,__src,(size_t)__n);
    __n = param_2[1];
    *param_1 = pvVar2;
  }
  else {
    *param_1 = __src;
  }
  cVar1 = *(char *)(param_2 + 2);
  param_1[1] = __n;
  *(char *)(param_1 + 2) = cVar1;
  if (cVar1 != '\0') {
    *(undefined *)((long)param_1 + 0x14) = *(undefined *)((long)param_2 + 0x14);
  }
  return;
}


uint FUN_004039d0(byte param_1)

{
  return *(uint *)(&DAT_00408980 + (ulong)(param_1 >> 5) * 4) >> (param_1 & 0x1f) & 1;
}


double FUN_004039f0(void)

{
  int iVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  sysinfo_t local_78;
  
  lVar2 = sysconf(0x55);
  dVar3 = (double)lVar2;
  lVar2 = sysconf(0x1e);
  if ((dVar3 < 0.0) || (dVar4 = (double)lVar2, dVar4 < 0.0)) {
    iVar1 = sysinfo(&local_78);
    if (iVar1 != 0) {
      return DAT_004089a0;
    }
    if ((long)local_78.totalram < 0) {
      dVar3 = (double)(local_78.totalram >> 1 | (ulong)((uint)local_78.totalram & 1));
      dVar3 = dVar3 + dVar3;
    }
    else {
      dVar3 = (double)local_78.totalram;
    }
    dVar4 = (double)(ulong)local_78.mem_unit;
  }
  return dVar3 * dVar4;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_00403ab0(void)

{
  int iVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  sysinfo_t local_78;
  
  lVar2 = sysconf(0x56);
  dVar3 = (double)lVar2;
  lVar2 = sysconf(0x1e);
  if ((0.0 <= dVar3) && (dVar4 = (double)lVar2, 0.0 <= dVar4)) goto LAB_00403b3e;
  iVar1 = sysinfo(&local_78);
  if (iVar1 != 0) {
    dVar3 = (double)FUN_004039f0();
    return dVar3 * _DAT_004089a8;
  }
  if ((long)local_78.freeram < 0) {
    dVar3 = (double)(local_78.freeram >> 1 | (ulong)((uint)local_78.freeram & 1));
    dVar3 = dVar3 + dVar3;
    if ((long)local_78.bufferram < 0) goto LAB_00403b8b;
LAB_00403b24:
    dVar4 = (double)local_78.bufferram;
  }
  else {
    dVar3 = (double)local_78.freeram;
    if (-1 < (long)local_78.bufferram) goto LAB_00403b24;
LAB_00403b8b:
    dVar4 = (double)(local_78.bufferram >> 1 | (ulong)((uint)local_78.bufferram & 1));
    dVar4 = dVar4 + dVar4;
  }
  dVar3 = dVar3 + dVar4;
  dVar4 = (double)(ulong)local_78.mem_unit;
LAB_00403b3e:
  return dVar3 * dVar4;
}


void FUN_00403bb0(byte *param_1)

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
        pbVar6 = &DAT_004089f0;
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
  DAT_0060c370 = param_1;
  program_invocation_name = param_1;
  return;
}


char * FUN_00403c50(char *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  byte *pbVar3;
  
  pcVar2 = (char *)dcgettext(0,param_1,5);
  if (param_1 == pcVar2) {
    pbVar3 = (byte *)FUN_004078a0();
    if ((*pbVar3 & 0xdf) == 0x55) {
      if (((((pbVar3[1] & 0xdf) != 0x54) || ((pbVar3[2] & 0xdf) != 0x46)) || (pbVar3[3] != 0x2d)) ||
         ((pbVar3[4] != 0x38 || (pbVar3[5] != 0)))) {
LAB_00403d28:
        pcVar2 = "\"";
        if (param_2 != 9) {
          pcVar2 = "\'";
        }
        return pcVar2;
      }
      cVar1 = *pcVar2;
      pcVar2 = &DAT_00408a01;
      if (cVar1 != '`') {
        pcVar2 = &DAT_004089f6;
      }
    }
    else {
      if (((((*pbVar3 & 0xdf) != 0x47) || ((pbVar3[1] & 0xdf) != 0x42)) || (pbVar3[2] != 0x31)) ||
         (((pbVar3[3] != 0x38 || (pbVar3[4] != 0x30)) ||
          ((pbVar3[5] != 0x33 || ((pbVar3[6] != 0x30 || (pbVar3[7] != 0)))))))) goto LAB_00403d28;
      cVar1 = *pcVar2;
      pcVar2 = &DAT_004089fd;
      if (cVar1 != '`') {
        pcVar2 = &DAT_004089fa;
      }
    }
  }
  return pcVar2;
}


ulong FUN_00403d50(undefined *param_1,ulong param_2,char *param_3,ulong param_4,int param_5,
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
LAB_004049a1:
    if (param_2 != 0) {
      bVar3 = false;
      local_5b = false;
      bVar2 = true;
      local_70 = 0;
      goto LAB_004045d6;
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
      goto LAB_004049a1;
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
      param_8 = (char *)FUN_00403c50(&DAT_00408a05,param_5);
      param_9 = (char *)FUN_00403c50(&DAT_00409bd7);
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
LAB_00403de8:
  uVar22 = 0;
  bVar5 = local_5b;
LAB_00403df8:
  bVar23 = param_4 != uVar22;
  if (param_4 == 0xffffffffffffffff) {
    bVar23 = param_3[uVar22] != '\0';
  }
  bVar26 = bVar6;
  if (!bVar23) goto LAB_00404578;
  bVar20 = (bool)(param_5 != 2 & bVar6);
  __s1 = (byte *)(param_3 + uVar22);
  uVar16 = uVar15;
  bVar4 = bVar3;
  if (bVar20) {
    if (local_a0 == 0) {
LAB_004044f0:
      uVar19 = (ulong)*__s1;
      switch(uVar19) {
      case 0:
        goto switchD_00404502_caseD_0;
      default:
        bVar20 = false;
        goto switchD_0040436e_caseD_1;
      case 7:
        bVar17 = 0x61;
        goto LAB_00404205;
      case 8:
        bVar17 = 0x62;
        break;
      case 9:
switchD_00404502_caseD_9:
        bVar17 = 0x74;
        break;
      case 10:
switchD_00404502_caseD_a:
        bVar17 = 0x6e;
        break;
      case 0xb:
switchD_00404502_caseD_b:
        bVar17 = 0x76;
        goto LAB_00404205;
      case 0xc:
switchD_00404502_caseD_c:
        bVar17 = 0x66;
LAB_00404205:
        if (local_5c) {
          bVar25 = false;
          goto LAB_00404158;
        }
LAB_00404210:
        bVar23 = false;
        goto LAB_00403fcb;
      case 0xd:
        bVar20 = false;
switchD_00403ee8_caseD_d:
        bVar25 = param_5 == 2;
        uVar19 = 0xd;
        bVar13 = 0x72;
        goto LAB_00404120;
      case 0x20:
        bVar25 = false;
LAB_0040454a:
        uVar19 = 0x20;
        goto LAB_00404512;
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
switchD_00403ee8_caseD_21:
        bVar25 = false;
        goto LAB_0040412b;
      case 0x23:
      case 0x7e:
        bVar26 = false;
LAB_0040452a:
        if (uVar22 == 0) {
          bVar25 = false;
          bVar23 = bVar20;
          bVar20 = bVar26;
          goto LAB_00403f38;
        }
        bVar23 = false;
        goto LAB_00403f4f;
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
LAB_00404512:
        bVar24 = false;
        bVar23 = bVar20;
        bVar20 = bVar25;
        goto LAB_00403f51;
      case 0x27:
        bVar20 = false;
        goto switchD_0040436e_caseD_27;
      case 0x3f:
        bVar20 = false;
        goto switchD_0040436e_caseD_3f;
      case 0x5c:
        bVar20 = false;
        goto switchD_00403ee8_caseD_5c;
      case 0x7b:
      case 0x7d:
        bVar20 = false;
        goto switchD_0040436e_caseD_7b;
      }
      bVar25 = false;
      bVar23 = false;
      goto joined_r0x00404147;
    }
    if ((param_4 == 0xffffffffffffffff) && (1 < local_a0)) {
      param_4 = strlen(param_3);
    }
    if ((param_4 < uVar22 + local_a0) || (iVar7 = memcmp(__s1,local_78,local_a0), iVar7 != 0))
    goto LAB_004044f0;
    if (!local_5c) {
      uVar19 = (ulong)*__s1;
      bVar25 = bVar20;
      switch(uVar19) {
      case 0:
        goto switchD_00403ee8_caseD_0;
      default:
        goto switchD_0040436e_caseD_1;
      case 7:
        bVar17 = 0x61;
        goto LAB_00404210;
      case 8:
        bVar25 = false;
        bVar23 = false;
        bVar17 = 0x62;
        break;
      case 9:
        goto switchD_00404502_caseD_9;
      case 10:
        goto switchD_00404502_caseD_a;
      case 0xb:
        goto switchD_00404502_caseD_b;
      case 0xc:
        goto switchD_00404502_caseD_c;
      case 0xd:
        goto switchD_00403ee8_caseD_d;
      case 0x20:
        goto LAB_0040454a;
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
        goto switchD_00403ee8_caseD_21;
      case 0x23:
      case 0x7e:
        bVar26 = bVar20;
        goto LAB_0040452a;
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
        goto LAB_00404512;
      case 0x27:
        goto switchD_0040436e_caseD_27;
      case 0x3f:
        goto switchD_0040436e_caseD_3f;
      case 0x5c:
        goto switchD_00403ee8_caseD_5c;
      case 0x7b:
      case 0x7d:
        goto switchD_0040436e_caseD_7b;
      }
      goto LAB_00403f92;
    }
    goto LAB_0040416a;
  }
  uVar19 = (ulong)*__s1;
  switch(uVar19) {
  case 0:
    if (bVar6) {
switchD_00404502_caseD_0:
      if (!local_5c) {
        bVar20 = false;
switchD_00403ee8_caseD_0:
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
            goto LAB_00404048;
          }
LAB_0040428a:
          param_1[uVar16] = 0x5c;
          uVar15 = uVar16;
        }
        else if (uVar15 < uVar9) goto LAB_0040428a;
        uVar16 = uVar15 + 1;
        bVar24 = bVar23;
        if (param_5 == 2) {
          bVar17 = 0x30;
          bVar23 = false;
          bVar4 = bVar3;
          goto LAB_00404048;
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
LAB_004042c9:
        bVar17 = (byte)uVar19;
        bVar23 = false;
        uVar15 = uVar16;
        bVar4 = bVar3;
        if ((bool)(bVar6 ^ 1U | bVar26)) goto LAB_00404048;
        goto LAB_00403f51;
      }
      bVar26 = param_5 == 2;
      goto LAB_0040415c;
    }
    if ((param_6 & 1) == 0) {
      bVar25 = param_5 == 2;
      uVar19 = 0;
      bVar23 = false;
      bVar20 = false;
      goto LAB_00403f38;
    }
    uVar22 = uVar22 + 1;
    goto LAB_00403df8;
  default:
switchD_0040436e_caseD_1:
    bVar25 = bVar6;
    if (sVar8 != 1) {
      local_40[0] = (mbstate_t)0x0;
      if (param_4 == 0xffffffffffffffff) {
        param_4 = strlen(param_3);
      }
      uVar21 = 0;
      do {
        uVar1 = uVar22 + uVar21;
        lVar11 = FUN_00407320(&local_44,param_3 + uVar1,param_4 - uVar1,local_40);
        if (lVar11 == 0) break;
        if (lVar11 == -1) {
          bVar23 = false;
          goto LAB_00404c7a;
        }
        if (lVar11 == -2) {
          if ((param_4 <= uVar1) || (param_3[uVar1] == '\0')) goto LAB_00404db7;
          goto LAB_00404da7;
        }
        if (((param_5 == 2) && (local_5c)) && (lVar11 != 1)) {
          pcVar12 = param_3 + uVar1 + 1;
          do {
            if (((byte)(*pcVar12 + 0xa5U) < 0x22) &&
               ((1L << (*pcVar12 + 0xa5U & 0x3f) & 0x20000002bU) != 0)) {
              param_5 = 2;
              goto LAB_0040415c;
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
      goto LAB_00404c7a;
    }
    ppuVar10 = __ctype_b_loc();
    uVar21 = 1;
    bVar25 = ((*ppuVar10)[uVar19] & 0x4000) == 0;
    bVar23 = !bVar25;
    bVar25 = (bool)(bVar25 & bVar6);
    goto LAB_00404344;
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
    goto LAB_00404382;
  case 10:
    uVar19 = 10;
    bVar13 = 0x6e;
    goto LAB_00404382;
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
LAB_00404382:
    bVar25 = param_5 == 2;
    bVar20 = (bool)(local_5c & bVar25);
    if (bVar20) {
LAB_0040439a:
      param_5 = 2;
      goto LAB_0040415c;
    }
    break;
  case 0x20:
    uVar19 = 0x20;
    goto LAB_00403f26;
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
LAB_00403f26:
    bVar25 = param_5 == 2;
    if ((local_5c) && (bVar25)) goto LAB_0040439a;
    goto LAB_00403f38;
  case 0x23:
  case 0x7e:
LAB_00403f1d:
    bVar25 = param_5 == 2;
    if (uVar22 == 0) goto LAB_00403f26;
    goto LAB_0040412b;
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
    goto switchD_0040436e_caseD_25;
  case 0x27:
switchD_0040436e_caseD_27:
    bVar5 = bVar23;
    if (param_5 != 2) {
      bVar25 = false;
      uVar19 = 0x27;
      goto LAB_00403f38;
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
      goto LAB_00404048;
    }
    goto LAB_0040415c;
  case 0x3f:
switchD_0040436e_caseD_3f:
    if (param_5 == 2) {
      if (!local_5c) {
        bVar17 = 0x3f;
        bVar24 = false;
        bVar23 = false;
        goto LAB_00404048;
      }
      goto LAB_0040415c;
    }
    if (param_5 != 5) {
      bVar25 = param_5 == 2;
      uVar19 = 0x3f;
      bVar23 = false;
      goto LAB_00403f38;
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
        goto LAB_004042c9;
      }
      goto LAB_0040416a;
    }
    bVar25 = false;
    uVar19 = 0x3f;
    bVar23 = false;
    goto LAB_00403f38;
  case 0x5c:
    if (param_5 != 2) {
switchD_00403ee8_caseD_5c:
      uVar19 = 0x5c;
      bVar17 = 0x5c;
      bVar13 = 0x5c;
      bVar25 = (bool)(bVar6 & local_5c & local_a0 != 0);
      if (!bVar25) break;
      uVar22 = uVar22 + 1;
      bVar23 = false;
      goto LAB_00404064;
    }
    if (local_5c) goto LAB_0040415c;
    uVar22 = uVar22 + 1;
    bVar23 = false;
    bVar17 = 0x5c;
    goto LAB_00404064;
  case 0x7b:
  case 0x7d:
switchD_0040436e_caseD_7b:
    bVar24 = param_4 != 1;
    if (param_4 == 0xffffffffffffffff) {
      bVar24 = param_3[1] != '\0';
    }
    bVar25 = param_5 == 2;
    if (!bVar24) goto LAB_00403f1d;
    goto LAB_0040412b;
  }
LAB_00404120:
  if (!bVar6) {
LAB_0040412b:
    bVar23 = false;
    goto LAB_00403f38;
  }
  bVar23 = false;
  bVar17 = bVar13;
  goto joined_r0x00404147;
LAB_00404578:
  if ((uVar15 == 0) && ((bool)(local_5c & param_5 == 2))) {
    param_5 = 2;
LAB_0040415c:
    if (bVar26) {
      param_5 = 4;
    }
LAB_0040416a:
    uVar9 = FUN_00403d50(param_1,uVar9,param_3,param_4,param_5,param_6 & 0xfffffffd,0,param_8,
                         param_9);
    return uVar9;
  }
  bVar26 = (bool)(param_5 == 2 & (local_5c ^ 1U));
  bVar23 = (bool)(local_5c ^ 1U);
  if ((!bVar26) || (bVar23 = bVar26, !bVar5)) {
LAB_00404e4d:
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
    uVar9 = FUN_00403d50(param_1,local_70,param_3,param_4,5,param_6,param_7,param_8,param_9);
    return uVar9;
  }
  local_5b = uVar9 == 0 && local_70 != 0;
  param_2 = local_70;
  bVar23 = bVar5;
  if (uVar9 != 0 || local_70 == 0) goto LAB_00404e4d;
LAB_004045d6:
  *param_1 = 0x27;
  param_5 = 2;
  uVar15 = 1;
  local_78 = "\'";
  local_a0 = 1;
  local_5c = false;
  uVar9 = param_2;
  goto LAB_00403de8;
  while (__s1[uVar21] != 0) {
LAB_00404da7:
    uVar21 = uVar21 + 1;
    if (param_4 <= uVar22 + uVar21) break;
  }
LAB_00404db7:
  bVar23 = false;
LAB_00404c7a:
  if (1 < uVar21) {
LAB_0040483e:
    bVar26 = false;
    uVar21 = uVar21 + uVar22;
    uVar16 = uVar22;
    do {
      bVar17 = (byte)uVar19;
      if (bVar25) {
        bVar26 = param_5 == 2;
        if (local_5c) goto LAB_0040415c;
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
        if (uVar21 <= uVar22) goto LAB_00403fdd;
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
        if (uVar21 <= uVar22) goto LAB_00404064;
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
LAB_00404344:
  if (bVar25) {
    bVar23 = false;
    bVar25 = bVar6;
    goto LAB_0040483e;
  }
switchD_0040436e_caseD_25:
  bVar25 = param_5 == 2;
LAB_00403f38:
  bVar17 = (byte)uVar19;
  bVar24 = (bool)((bVar6 ^ 1U | bVar25) ^ 1 | local_5c);
  bVar26 = bVar20;
  if (bVar24) {
LAB_00403f4f:
    bVar24 = false;
    bVar20 = bVar26;
LAB_00403f51:
    bVar17 = (byte)uVar19;
    uVar16 = uVar15;
    bVar4 = bVar3;
    if ((param_7 == 0) || ((*(uint *)(param_7 + (uVar19 >> 5) * 4) >> (bVar17 & 0x1f) & 1) == 0))
    goto LAB_00404048;
    bVar25 = param_5 == 2;
  }
  else {
LAB_00404048:
    bVar25 = param_5 == 2;
    uVar15 = uVar16;
    bVar3 = bVar4;
    if (!bVar20) {
      uVar22 = uVar22 + 1;
      bVar3 = (bool)((bVar24 ^ 1U) & bVar4);
LAB_00404064:
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
      goto LAB_00403fdd;
    }
  }
joined_r0x00404147:
  if (local_5c) {
LAB_00404158:
    bVar26 = (bool)(bVar6 & bVar25);
    goto LAB_0040415c;
  }
LAB_00403f92:
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
LAB_00403fcb:
  if (uVar15 < uVar9) {
    param_1[uVar15] = 0x5c;
  }
  uVar15 = uVar15 + 1;
  uVar22 = uVar22 + 1;
  bVar4 = bVar3;
LAB_00403fdd:
  bVar3 = bVar4;
  if (uVar15 < uVar9) {
    param_1[uVar15] = bVar17;
  }
  uVar15 = uVar15 + 1;
  if (!bVar23) {
    bVar2 = false;
  }
  goto LAB_00403df8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00404f80(int param_1,undefined param_2,undefined param_3,undefined *param_4)

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
  puVar8 = (undefined *)PTR_DAT_0060c298;
  if (DAT_0060c2b0 <= param_1) {
    if (param_1 == 0x7fffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_004063f0();
    }
    if (PTR_DAT_0060c298 == &DAT_0060c2a0) {
      puVar8 = (undefined *)FUN_00406200(0);
      uVar6 = PTR_DAT_0060c2a8._4_4_;
      uVar5 = PTR_DAT_0060c2a8._0_4_;
      uVar3 = _UNK_0060c2a4;
      PTR_DAT_0060c298 = (undefined *)puVar8;
      *puVar8 = _DAT_0060c2a0;
      puVar8[1] = uVar3;
      puVar8[2] = uVar5;
      puVar8[3] = uVar6;
    }
    else {
      puVar8 = (undefined *)FUN_00406200(PTR_DAT_0060c298);
      PTR_DAT_0060c298 = (undefined *)puVar8;
    }
    memset(puVar8 + (long)DAT_0060c2b0 * 4,0,(long)((param_1 + 1) - DAT_0060c2b0) << 4);
    DAT_0060c2b0 = param_1 + 1;
  }
  uVar2 = param_4[1];
  puVar10 = (ulong *)(puVar8 + (long)param_1 * 4);
  uVar4 = *puVar10;
  __ptr = (undefined *)puVar10[1];
  uVar9 = FUN_00403d50(__ptr,uVar4,param_2,param_3,*param_4,uVar2 | 1,param_4 + 2,
                       *(undefined *)(param_4 + 10),*(undefined *)(param_4 + 0xc));
  if (uVar4 <= uVar9) {
    uVar9 = uVar9 + 1;
    *puVar10 = uVar9;
    if (__ptr != &DAT_0060c380) {
      free(__ptr);
    }
    __ptr = (undefined *)FUN_004061a0(uVar9);
    uVar3 = *param_4;
    puVar10[1] = (ulong)__ptr;
    FUN_00403d50(__ptr,uVar9,param_2,param_3,uVar3,uVar2 | 1,param_4 + 2,
                 *(undefined *)(param_4 + 10),*(undefined *)(param_4 + 0xc));
  }
  *piVar7 = iVar1;
  return __ptr;
}


void FUN_00405120(undefined *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_0060c480;
  }
  FUN_004063a0(param_1,0x38);
  *piVar2 = iVar1;
  return;
}


undefined FUN_00405160(undefined *param_1)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = (undefined *)&DAT_0060c480;
  }
  return *param_1;
}


void FUN_00405170(undefined *param_1,undefined param_2)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = (undefined *)&DAT_0060c480;
  }
  *param_1 = param_2;
  return;
}


uint FUN_00405180(undefined *param_1,byte param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_0060c480;
  }
  uVar1 = *(uint *)(param_1 + (ulong)(param_2 >> 5) * 4 + 8);
  uVar2 = uVar1 >> (param_2 & 0x1f);
  *(uint *)(param_1 + (ulong)(param_2 >> 5) * 4 + 8) =
       ((param_3 ^ uVar2) & 1) << (param_2 & 0x1f) ^ uVar1;
  return uVar2 & 1;
}


undefined FUN_004051c0(undefined *param_1,undefined param_2)

{
  undefined uVar1;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_0060c480;
  }
  uVar1 = *(undefined *)(param_1 + 4);
  *(undefined *)(param_1 + 4) = param_2;
  return uVar1;
}


void FUN_004051e0(undefined *param_1,long param_2,long param_3)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = (undefined *)&DAT_0060c480;
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


void FUN_00405210(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                 undefined *param_5)

{
  int iVar1;
  int *piVar2;
  
  if (param_5 == (undefined *)0x0) {
    param_5 = (undefined *)&DAT_0060c480;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  FUN_00403d50(param_1,param_2,param_3,param_4,*param_5,param_5[1],param_5 + 2,
               *(undefined *)(param_5 + 10),*(undefined *)(param_5 + 0xc));
  *piVar2 = iVar1;
  return;
}


undefined FUN_00405290(undefined param_1,undefined param_2,long *param_3,undefined *param_4)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined uVar4;
  uint uVar5;
  
  if (param_4 == (undefined *)0x0) {
    param_4 = (undefined *)&DAT_0060c480;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  uVar5 = (uint)(param_3 == (long *)0x0) | param_4[1];
  lVar3 = FUN_00403d50(0,0,param_1,param_2,*param_4,uVar5,param_4 + 2,*(undefined *)(param_4 + 10),
                       *(undefined *)(param_4 + 0xc));
  uVar4 = FUN_004061a0(lVar3 + 1);
  FUN_00403d50(uVar4,lVar3 + 1,param_1,param_2,*param_4,uVar5,param_4 + 2,
               *(undefined *)(param_4 + 10),*(undefined *)(param_4 + 0xc));
  *piVar2 = iVar1;
  if (param_3 != (long *)0x0) {
    *param_3 = lVar3;
  }
  return uVar4;
}


void FUN_00405380(undefined param_1,undefined param_2,undefined param_3)

{
  FUN_00405290(param_1,param_2,0,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405390(void)

{
  void **ppvVar1;
  void *__ptr;
  undefined *__ptr_00;
  void **ppvVar2;
  
  __ptr_00 = PTR_DAT_0060c298;
  if (1 < DAT_0060c2b0) {
    ppvVar2 = (void **)(PTR_DAT_0060c298 + 0x18);
    ppvVar1 = (void **)(PTR_DAT_0060c298 + (ulong)(DAT_0060c2b0 - 2) * 0x10 + 0x28);
    do {
      __ptr = *ppvVar2;
      ppvVar2 = ppvVar2 + 2;
      free(__ptr);
    } while (ppvVar2 != ppvVar1);
  }
  if (*(undefined **)(__ptr_00 + 8) != &DAT_0060c380) {
    free(*(undefined **)(__ptr_00 + 8));
    _DAT_0060c2a0 = 0x100;
    PTR_DAT_0060c2a8 = &DAT_0060c380;
  }
  if (__ptr_00 != &DAT_0060c2a0) {
    free(__ptr_00);
    PTR_DAT_0060c298 = &DAT_0060c2a0;
  }
  DAT_0060c2b0 = 1;
  return;
}


void FUN_00405430(undefined param_1,undefined param_2)

{
  FUN_00404f80(param_1,param_2,0xffffffffffffffff,&DAT_0060c480);
  return;
}


void FUN_00405450(void)

{
  FUN_00404f80();
  return;
}


void FUN_00405460(undefined param_1)

{
  FUN_00404f80(0,param_1,0xffffffffffffffff,&DAT_0060c480);
  return;
}


void FUN_00405480(undefined param_1,undefined param_2)

{
  FUN_00404f80(0,param_1,param_2,&DAT_0060c480);
  return;
}


void FUN_004054a0(undefined param_1,int param_2,undefined param_3)

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
    FUN_00404f80(param_1,param_3,0xffffffffffffffff,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00405510(undefined param_1,int param_2,undefined param_3,undefined param_4)

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
    FUN_00404f80(param_1,param_3,param_4,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00405580(undefined param_1,undefined param_2)

{
  FUN_004054a0(0,param_1,param_2);
  return;
}


void FUN_00405590(undefined param_1,undefined param_2,undefined param_3)

{
  FUN_00405510(0,param_1,param_2,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004055a0(undefined param_1,undefined param_2,byte param_3)

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
  
  local_18 = DAT_0060c4b0;
  local_48 = _DAT_0060c480;
  uStack_40 = uRam000000000060c488;
  local_38 = _DAT_0060c490;
  uStack_30 = uRam000000000060c498;
  puVar1 = (uint *)((long)&uStack_40 + (ulong)(param_3 >> 5) * 4);
  local_28 = _DAT_0060c4a0;
  uStack_20 = uRam000000000060c4a8;
  uVar2 = *puVar1;
  *puVar1 = (~(uVar2 >> (param_3 & 0x1f)) & 1) << (param_3 & 0x1f) ^ uVar2;
  FUN_00404f80(0,param_1,param_2,&local_48);
  return;
}


void FUN_00405610(undefined param_1,char param_2)

{
  FUN_004055a0(param_1,0xffffffffffffffff,(int)param_2);
  return;
}


void FUN_00405620(undefined param_1)

{
  FUN_004055a0(param_1,0xffffffffffffffff,0x3a);
  return;
}


void FUN_00405640(undefined param_1,undefined param_2)

{
  FUN_004055a0(param_1,param_2,0x3a);
  return;
}


void FUN_00405650(undefined param_1,int param_2,undefined param_3)

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
    FUN_00404f80(param_1,param_3,0xffffffffffffffff,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004056c0(undefined param_1,long param_2,long param_3,undefined param_4,undefined param_5
                 )

{
  undefined local_48;
  undefined uStack_40;
  undefined local_38;
  undefined uStack_30;
  undefined local_28;
  long lStack_20;
  long local_18;
  
  uStack_40 = uRam000000000060c488;
  local_38 = _DAT_0060c490;
  uStack_30 = uRam000000000060c498;
  local_28 = _DAT_0060c4a0;
  lStack_20 = uRam000000000060c4a8;
  local_18 = DAT_0060c4b0;
  local_48 = CONCAT44((int)((ulong)_DAT_0060c480 >> 0x20),10);
  if ((param_2 != 0) && (param_3 != 0)) {
    lStack_20 = param_2;
    local_18 = param_3;
    FUN_00404f80(param_1,param_4,param_5,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00405730(void)

{
  FUN_004056c0();
  return;
}


void FUN_00405740(undefined param_1,undefined param_2,undefined param_3)

{
  FUN_004056c0(0,param_1,param_2,param_3,0xffffffffffffffff);
  return;
}


void FUN_00405760(undefined param_1,undefined param_2,undefined param_3,undefined param_4)

{
  FUN_004056c0(0,param_1,param_2,param_3,param_4);
  return;
}


void FUN_00405780(void)

{
  FUN_00404f80();
  return;
}


void FUN_00405790(undefined param_1,undefined param_2)

{
  FUN_00404f80(0,param_1,param_2,&DAT_0060c260);
  return;
}


void FUN_004057b0(undefined param_1,undefined param_2)

{
  FUN_00404f80(param_1,param_2,0xffffffffffffffff,&DAT_0060c260);
  return;
}


void FUN_004057d0(undefined param_1)

{
  FUN_00404f80(0,param_1,0xffffffffffffffff,&DAT_0060c260);
  return;
}


void FUN_004057f0(long *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  
  lVar1 = param_1[6];
  lVar2 = param_1[5];
  if (lVar1 == lVar2) {
    *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xd) | 2;
  }
  uVar3 = param_1[7];
  uVar4 = lVar1 + param_1[9] & ~param_1[9];
  param_1[6] = uVar4;
  if (uVar3 - param_1[4] < uVar4 - param_1[4]) {
    param_1[6] = uVar3;
    uVar4 = uVar3;
  }
  param_1[5] = uVar4;
  plVar5 = (long *)param_1[0x11];
  if ((ulong)(param_1[0x12] - (long)plVar5) < 8) {
    _obstack_newchunk(param_1 + 0xe,8);
    plVar5 = (long *)param_1[0x11];
  }
  *plVar5 = lVar2;
  plVar5 = (long *)param_1[0x1c];
  param_1[0x11] = param_1[0x11] + 8;
  if ((ulong)(param_1[0x1d] - (long)plVar5) < 8) {
    _obstack_newchunk(param_1 + 0x19,8);
    plVar5 = (long *)param_1[0x1c];
  }
  *plVar5 = (lVar1 - lVar2) + -1;
  param_1[0x1c] = param_1[0x1c] + 8;
  *param_1 = *param_1 + 1;
  return;
}


void FUN_004058e0(undefined *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  _obstack_begin(param_1 + 3,0,0,malloc,free);
  _obstack_begin(param_1 + 0xe,0,0,malloc,free);
  *(byte *)(param_1 + 0x23) = *(byte *)(param_1 + 0x23) & 0xfe;
  param_1[0x20] = malloc;
  param_1[0x21] = free;
  FUN_00407530(param_1 + 0x19,0,0);
  return;
}


void FUN_00405950(long param_1)

{
  _obstack_free(param_1 + 0x18,0);
  _obstack_free(param_1 + 0x70,0);
  _obstack_free(param_1 + 200,0);
  return;
}


ulong FUN_00405980(FILE *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined extraout_var;
  undefined *puVar6;
  
  do {
    iVar3 = fgetc(param_1);
    while( true ) {
      if (iVar3 == -1) {
        puVar4 = *(undefined **)(param_2 + 0x30);
        if (puVar4 != *(undefined **)(param_2 + 0x28)) {
          if (puVar4 == *(undefined **)(param_2 + 0x38)) {
            _obstack_newchunk(param_2 + 0x18,1);
            puVar4 = *(undefined **)(param_2 + 0x30);
          }
          *(undefined **)(param_2 + 0x30) = puVar4 + 1;
          *puVar4 = 0;
          FUN_004057f0(param_2);
        }
        puVar6 = *(undefined **)(param_2 + 0x88);
        if ((ulong)(*(long *)(param_2 + 0x90) - (long)puVar6) < 8) {
          _obstack_newchunk(param_2 + 0x70,8);
          puVar6 = *(undefined **)(param_2 + 0x88);
        }
        *puVar6 = 0;
        lVar1 = *(long *)(param_2 + 0x88) + 8;
        *(long *)(param_2 + 0x88) = lVar1;
        if (lVar1 == *(long *)(param_2 + 0x80)) {
          *(byte *)(param_2 + 0xc0) = *(byte *)(param_2 + 0xc0) | 2;
        }
        uVar5 = lVar1 + *(ulong *)(param_2 + 0xa0) & ~*(ulong *)(param_2 + 0xa0);
        uVar2 = *(ulong *)(param_2 + 0x90);
        *(ulong *)(param_2 + 0x88) = uVar5;
        if (uVar2 - *(long *)(param_2 + 0x78) < uVar5 - *(long *)(param_2 + 0x78)) {
          *(ulong *)(param_2 + 0x88) = uVar2;
          uVar5 = uVar2;
        }
        *(long *)(param_2 + 8) = *(long *)(param_2 + 0x80);
        lVar1 = *(long *)(param_2 + 0xd8);
        *(ulong *)(param_2 + 0x80) = uVar5;
        if (*(long *)(param_2 + 0xe0) == lVar1) {
          *(byte *)(param_2 + 0x118) = *(byte *)(param_2 + 0x118) | 2;
        }
        uVar5 = *(long *)(param_2 + 0xe0) + *(ulong *)(param_2 + 0xf8) & ~*(ulong *)(param_2 + 0xf8)
        ;
        uVar2 = *(ulong *)(param_2 + 0xe8);
        *(ulong *)(param_2 + 0xe0) = uVar5;
        if (uVar2 - *(long *)(param_2 + 0xd0) < uVar5 - *(long *)(param_2 + 0xd0)) {
          *(ulong *)(param_2 + 0xe0) = uVar2;
          uVar5 = uVar2;
        }
        *(ulong *)(param_2 + 0xd8) = uVar5;
        *(long *)(param_2 + 0x10) = lVar1;
        iVar3 = ferror(param_1);
        return CONCAT44(extraout_var,iVar3) & 0xffffffffffffff00 | (ulong)(iVar3 == 0);
      }
      puVar4 = *(undefined **)(param_2 + 0x30);
      if (*(undefined **)(param_2 + 0x38) == puVar4) {
        _obstack_newchunk(param_2 + 0x18,1);
        puVar4 = *(undefined **)(param_2 + 0x30);
        *(undefined **)(param_2 + 0x30) = puVar4 + 1;
        *puVar4 = (char)iVar3;
      }
      else {
        *(undefined **)(param_2 + 0x30) = puVar4 + 1;
        *puVar4 = (char)iVar3;
      }
      if (iVar3 != 0) break;
      FUN_004057f0(param_2);
      iVar3 = fgetc(param_1);
    }
  } while( true );
}


ssize_t FUN_00405ba0(int param_1,void *param_2,ulong param_3)

{
  ssize_t sVar1;
  int *piVar2;
  
  while( true ) {
    do {
      sVar1 = read(param_1,param_2,param_3);
      if (-1 < sVar1) {
        return sVar1;
      }
      piVar2 = __errno_location();
    } while (*piVar2 == 4);
    if (param_3 < 0x7fffe001) break;
    if (*piVar2 != 0x16) {
      return sVar1;
    }
    param_3 = 0x7fffe000;
  }
  return sVar1;
}


undefined
FUN_00405c00(FILE *param_1,long param_2,undefined param_3,undefined param_4,undefined *param_5,
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
  uVar1 = dcgettext(0,&DAT_0040974b,5);
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
    goto LAB_00405e7c;
  case 5:
    uVar1 = param_5[3];
    uVar4 = param_5[2];
    uVar5 = param_5[1];
    uVar6 = *param_5;
    uVar7 = dcgettext(0,"Written by %s, %s, %s,\n%s, and %s.\n",5);
LAB_00405e7c:
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
    goto LAB_00405f19;
  case 7:
    uVar1 = param_5[2];
    uVar4 = param_5[5];
    uVar5 = param_5[4];
    uVar6 = param_5[3];
    local_58 = param_5[1];
    uVar7 = *param_5;
    uVar3 = dcgettext(0,"Written by %s, %s, %s,\n%s, %s, %s, and %s.\n",5);
LAB_00405f19:
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
    goto LAB_00405cfa;
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
LAB_00405cfa:
  uVar1 = __fprintf_chk(param_1,1,uVar3,uVar7,local_50,local_58,uVar6,uVar5,uVar4,uVar1,local_48);
  return uVar1;
}


void FUN_00405fe0(void)

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
  FUN_00405c00();
  return;
}


void FUN_00406000(void)

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
  FUN_00405c00();
  return;
}


void FUN_00406060(void)

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
  FUN_00405c00();
  return;
}


void FUN_00406120(void)

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


void FUN_004061a0(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_004063f0();
  }
  return;
}


void FUN_004061c0(ulong param_1,ulong param_2)

{
  if ((-1 < SUB168(ZEXT816(param_1) * ZEXT816(param_2),0)) &&
     (SUB168(ZEXT816(param_1) * ZEXT816(param_2) >> 0x40,0) == 0)) {
    FUN_004061a0();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004063f0();
}


void thunk_FUN_004061a0(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_004063f0();
  }
  return;
}


void * FUN_00406200(void *param_1,size_t param_2)

{
  void *pvVar1;
  
  if ((param_2 == 0) && (param_1 != (void *)0x0)) {
    free(param_1);
    return (void *)0x0;
  }
  pvVar1 = realloc(param_1,param_2);
  if ((pvVar1 == (void *)0x0) && (param_2 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_004063f0();
  }
  return pvVar1;
}


void FUN_00406240(undefined param_1,ulong param_2,ulong param_3)

{
  if ((-1 < SUB168(ZEXT816(param_2) * ZEXT816(param_3),0)) &&
     (SUB168(ZEXT816(param_2) * ZEXT816(param_3) >> 0x40,0) == 0)) {
    FUN_00406200();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004063f0();
}


void FUN_00406270(long param_1,ulong *param_2,ulong param_3)

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
    if ((SUB168(ZEXT816(uVar2) * ZEXT816(param_3),0) < 0) || (uVar3 != 0)) goto LAB_004062cb;
  }
  else {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x5555555555555554);
    uVar3 = SUB168(auVar1 % ZEXT816(param_3),0);
    if (SUB168(auVar1 / ZEXT816(param_3),0) <= uVar2) {
LAB_004062cb:
                    /* WARNING: Subroutine does not return */
      FUN_004063f0(param_1,param_2,uVar3);
    }
    uVar2 = (uVar2 >> 1) + 1 + uVar2;
  }
  *param_2 = uVar2;
  FUN_00406200(param_1,uVar2 * param_3);
  return;
}


void FUN_00406300(long param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (param_1 == 0) {
    if (uVar1 == 0) {
      *param_2 = 0x80;
      FUN_00406200(0,0x80);
      return;
    }
    if ((long)uVar1 < 0) goto LAB_0040634a;
  }
  else {
    if (0x5555555555555553 < uVar1) {
LAB_0040634a:
                    /* WARNING: Subroutine does not return */
      FUN_004063f0();
    }
    uVar1 = (uVar1 >> 1) + 1 + uVar1;
  }
  *param_2 = uVar1;
  FUN_00406200(param_1,uVar1);
  return;
}


void FUN_00406350(size_t param_1)

{
  void *__s;
  
  __s = (void *)FUN_004061a0();
  memset(__s,0,param_1);
  return;
}


void FUN_00406370(size_t param_1,ulong param_2)

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
  FUN_004063f0();
}


void FUN_004063a0(void *param_1,size_t param_2)

{
  void *__dest;
  
  __dest = (void *)FUN_004061a0(param_2);
  memcpy(__dest,param_1,param_2);
  return;
}


void FUN_004063d0(char *param_1)

{
  void *__dest;
  size_t sVar1;
  
  sVar1 = strlen(param_1);
  __dest = (void *)FUN_004061a0(sVar1 + 1);
  memcpy(__dest,param_1,sVar1 + 1);
  return;
}


void FUN_004063f0(void)

{
  undefined uVar1;
  
  uVar1 = dcgettext(0,"memory exhausted",5);
  error(DAT_0060c258,0,"%s",uVar1);
                    /* WARNING: Subroutine does not return */
  abort();
}


int FUN_00406430(FILE *param_1)

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
      if (_Var4 == -1) goto LAB_00406497;
    }
    iVar1 = FUN_004064b0(param_1);
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
LAB_00406497:
  iVar1 = fclose(param_1);
  return iVar1;
}


void FUN_004064b0(FILE *param_1)

{
  int iVar1;
  
  if (param_1 != (FILE *)0x0) {
    iVar1 = __freading();
    if ((iVar1 != 0) && ((param_1->_flags & 0x100U) != 0)) {
      FUN_004064f0(param_1,0,1);
      fflush(param_1);
      return;
    }
  }
  fflush(param_1);
  return;
}


ulong FUN_004064f0(FILE *param_1,__off_t param_2,int param_3)

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


void FUN_00406550(long param_1,int *param_2)

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
      if (iVar3 <= iVar8) goto LAB_004065cc;
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
      if (iVar9 <= iVar3) goto LAB_004065cc;
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
LAB_004065cc:
  param_2[0xc] = iVar2;
  param_2[0xb] = iVar1 + (iVar2 - iVar3);
  return;
}


int FUN_00406630(int param_1,undefined *param_2,char *param_3,char **param_4,undefined *param_5,
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
      if ((iVar5 == 0) && (sVar7 = strlen(__s1_00), sVar7 == sVar15)) goto LAB_00406850;
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
            if (local_70 == (char *)0x0) goto LAB_00406790;
          }
          else if (local_70 == (char *)0x0) {
            local_70 = (char *)calloc((long)iVar5,1);
            if (local_70 == (char *)0x0) {
              bVar3 = true;
              goto LAB_00406790;
            }
            bVar4 = true;
            local_70[(int)local_44] = '\x01';
          }
          local_70[lVar16] = '\x01';
        }
      }
LAB_00406790:
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
              __fprintf_chk(__stream,1,&DAT_00409bd1,param_9,*param_4);
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
LAB_00406850:
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


uint FUN_00406c50(uint param_1,undefined *param_2,char *param_3,long param_4,undefined param_5,
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
LAB_00406c9a:
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
          goto LAB_00406d9d;
        }
        pbVar8 = *(byte **)(param_7 + 8);
      }
      param_7[10] = 0;
    }
LAB_00406d9d:
    param_7[6] = 1;
    cVar2 = *param_3;
LAB_00406da8:
    if (cVar2 == ':') {
      uVar3 = 0;
    }
    if (pbVar8 == (byte *)0x0) goto LAB_00406d18;
LAB_00406dbc:
    if (*pbVar8 == 0) goto LAB_00406d18;
  }
  else {
    if (param_7[6] == 0) goto LAB_00406c9a;
    cVar2 = *param_3;
    pbVar8 = *(byte **)(param_7 + 8);
    if ((cVar2 - 0x2bU & 0xfd) != 0) goto LAB_00406da8;
    pcVar4 = param_3 + 1;
    param_3 = param_3 + 1;
    if (*pcVar4 == ':') {
      uVar3 = 0;
    }
    if (pbVar8 != (byte *)0x0) goto LAB_00406dbc;
LAB_00406d18:
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
        FUN_00406550(param_2,param_7);
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
LAB_00406e86:
      if (uVar11 != param_1) {
        *param_7 = uVar11;
      }
      return 0xffffffff;
    }
    lVar6 = 3;
    pbVar8 = (byte *)param_2[(int)uVar11];
    pbVar9 = pbVar8;
    pbVar10 = &DAT_00409be9;
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
          FUN_00406550(param_2,param_7);
          uVar11 = param_7[0xb];
        }
      }
      param_7[0xc] = param_1;
      *param_7 = param_1;
      goto LAB_00406e86;
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
        puVar15 = &DAT_00409be9;
        goto LAB_00406fe5;
      }
      if ((int)param_6 != 0) {
        if (pbVar8[2] == 0) {
          pcVar4 = strchr(param_3,(int)(char)bVar14);
          param_6 = param_6 & 0xffffffff;
          if (pcVar4 != (char *)0x0) goto LAB_00406f90;
        }
        *(byte **)(param_7 + 8) = pbVar8 + 1;
        uVar11 = FUN_00406630(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar3,
                              &DAT_00409bea);
        if (uVar11 != 0xffffffff) {
          return uVar11;
        }
        pbVar8 = (byte *)param_2[(int)*param_7];
      }
    }
LAB_00406f90:
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
  puVar15 = &DAT_00409c08;
LAB_00406fe5:
  uVar3 = FUN_00406630(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar3,puVar15);
  return uVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407220(void)

{
  DAT_0060c4c0 = DAT_0060c2bc;
  _DAT_0060c4c4 = DAT_0060c2b8;
  FUN_00406c50();
  DAT_0060c2bc = DAT_0060c4c0;
  DAT_0060c500 = DAT_0060c4d0;
  _DAT_0060c2b4 = DAT_0060c4c8;
  return;
}


void FUN_00407280(void)

{
  FUN_00407220();
  return;
}


void FUN_004072a0(void)

{
  FUN_00407220();
  return;
}


void FUN_004072c0(void)

{
  FUN_00406c50();
  return;
}


void FUN_004072e0(void)

{
  FUN_00407220();
  return;
}


void FUN_00407300(void)

{
  FUN_00406c50();
  return;
}


size_t FUN_00407320(wchar_t *param_1,byte *param_2,size_t param_3,mbstate_t *param_4)

{
  char cVar1;
  size_t sVar2;
  wchar_t local_1c;
  
  if (param_2 == (byte *)0x0) {
    param_3 = 1;
    param_2 = (byte *)0x409c07;
  }
  else {
    if (param_3 == 0) {
      return 0xfffffffffffffffe;
    }
    if (param_1 != (wchar_t *)0x0) goto LAB_00407344;
  }
  param_1 = &local_1c;
LAB_00407344:
  sVar2 = mbrtowc(param_1,(char *)param_2,param_3,param_4);
  if ((0xfffffffffffffffd < sVar2) && (cVar1 = FUN_00407840(0), cVar1 == '\0')) {
    sVar2 = 1;
    *param_1 = (uint)*param_2;
  }
  return sVar2;
}


ulong * FUN_004073a0(ulong *param_1,char param_2,ulong param_3)

{
  char cVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  
  if (param_3 == 0) {
    return (ulong *)0x0;
  }
  if (((ulong)param_1 & 7) == 0) {
LAB_004073e0:
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
      if (((ulong)param_1 & 7) == 0) goto LAB_004073e0;
      cVar1 = *(char *)param_1;
    }
  }
  return param_1;
}


void FUN_004074b0(void)

{
  undefined uVar1;
  
  uVar1 = dcgettext(0,"memory exhausted",5);
  __fprintf_chk(stderr,1,"%s\n",uVar1);
                    /* WARNING: Subroutine does not return */
  exit(DAT_0060c258);
}


void FUN_004074f0(long param_1,undefined param_2)

{
  if ((*(byte *)(param_1 + 0x50) & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x004074fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x38))(*(undefined *)(param_1 + 0x48));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00407503. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x38))(param_2);
  return;
}


void FUN_00407510(long param_1,undefined param_2)

{
  if ((*(byte *)(param_1 + 0x50) & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0040751e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x40))(*(undefined *)(param_1 + 0x48));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00407523. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x40))(param_2);
  return;
}


undefined FUN_00407530(long *param_1,long param_2,long param_3,long param_4,long param_5)

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
  plVar1 = (long *)FUN_004074f0();
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
  uVar2 = FUN_00407530();
  return uVar2;
}


void _obstack_begin(long param_1,undefined param_2,undefined param_3,undefined param_4,
                   undefined param_5)

{
  *(byte *)(param_1 + 0x50) = *(byte *)(param_1 + 0x50) & 0xfe;
  *(undefined *)(param_1 + 0x38) = param_4;
  *(undefined *)(param_1 + 0x40) = param_5;
  FUN_00407530();
  return;
}


void _obstack_begin_1(long param_1,undefined param_2,undefined param_3,undefined param_4,
                     undefined param_5,undefined param_6)

{
  *(byte *)(param_1 + 0x50) = *(byte *)(param_1 + 0x50) | 1;
  *(undefined *)(param_1 + 0x38) = param_4;
  *(undefined *)(param_1 + 0x40) = param_5;
  *(undefined *)(param_1 + 0x48) = param_6;
  FUN_00407530();
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
    ppuVar2 = (ulong **)FUN_004074f0();
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
          puVar3 = (ulong *)FUN_00407510(param_1,puVar1);
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
    FUN_00407510(param_1);
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


ulong FUN_004077e0(uint *param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  
  lVar2 = __fpending();
  uVar1 = *param_1;
  uVar3 = FUN_00406430(param_1);
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


bool FUN_00407840(int param_1)

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
    pbVar5 = &DAT_00409c0c;
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

char * FUN_004078a0(void)

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
  if (DAT_0060c4f8 != (char *)0x0) goto LAB_004078da;
  pcVar7 = getenv("CHARSETALIASDIR");
  if ((pcVar7 == (char *)0x0) || (*pcVar7 == '\0')) {
    sVar6 = 0x73;
    sVar5 = 0x65;
    __n = 100;
    pcVar7 = 
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib"
    ;
LAB_004079c5:
    __file = (char *)malloc(sVar6);
    if (__file != (char *)0x0) {
      memcpy(__file,pcVar7,__n);
      __file[__n] = '/';
      goto LAB_004079e6;
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
        goto LAB_004079c5;
      }
      sVar6 = __n + 0xe;
    }
    __file = (char *)malloc(sVar6);
    if (__file != (char *)0x0) {
      memcpy(__file,pcVar7,__n);
      sVar5 = __n;
LAB_004079e6:
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
LAB_00407a80:
          pbVar8 = (byte *)__stream->_IO_read_ptr;
          if (__stream->_IO_read_end <= pbVar8) goto LAB_00407c0c;
          do {
            __stream->_IO_read_ptr = (char *)(pbVar8 + 1);
            uVar4 = (uint)*pbVar8;
            __ptr = pcVar7;
            while( true ) {
              pcVar7 = __ptr;
              if ((uVar4 - 9 < 2) || (uVar4 == 0x20)) goto LAB_00407a80;
              if (uVar4 == 0x23) goto LAB_00407c71;
              ungetc(uVar4,__stream);
              iVar2 = fscanf(__stream,"%50s %50s",&local_b8,&local_78);
              puVar13 = &local_b8;
              if (iVar2 < 2) goto LAB_00407c1f;
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
                FUN_00406430(__stream);
                goto LAB_00407a24;
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
LAB_00407c0c:
              uVar4 = __uflow(__stream);
              __ptr = pcVar7;
              if (uVar4 == 0xffffffff) goto LAB_00407c1f;
            }
          } while( true );
        }
        close(iVar2);
      }
      goto LAB_00407a1e;
    }
  }
  DAT_0060c4f8 = "";
LAB_004078da:
  cVar1 = *DAT_0060c4f8;
  pcVar7 = DAT_0060c4f8;
  do {
    if (cVar1 == '\0') {
LAB_00407934:
      if (*__s1 == '\0') {
        __s1 = "ASCII";
      }
      return __s1;
    }
    iVar2 = strcmp(__s1,pcVar7);
    if ((iVar2 == 0) || ((cVar1 == '*' && (pcVar7[1] == '\0')))) {
      sVar6 = strlen(pcVar7);
      __s1 = pcVar7 + sVar6 + 1;
      goto LAB_00407934;
    }
    sVar6 = strlen(pcVar7);
    sVar5 = strlen(pcVar7 + sVar6 + 1);
    pcVar7 = pcVar7 + sVar6 + 1 + sVar5 + 1;
    cVar1 = *pcVar7;
  } while( true );
LAB_00407c71:
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
  if (uVar4 == 0xffffffff) goto LAB_00407c1f;
  goto LAB_00407a80;
LAB_00407c1f:
  FUN_00406430(__stream);
  if (local_d0 == 0) {
LAB_00407a1e:
    pcVar7 = "";
  }
  else {
    pcVar7[local_d0] = '\0';
  }
LAB_00407a24:
  free(__file);
  DAT_0060c4f8 = pcVar7;
  goto LAB_004078da;
}


/* WARNING: Removing unreachable block (ram,0x00407e43) */
/* WARNING: Removing unreachable block (ram,0x00407e48) */

void FUN_00407e10(void)

{
  __DT_INIT();
  return;
}


void FUN_00407e70(void)

{
  return;
}


void FUN_00407e80(undefined param_1)

{
  __cxa_atexit(param_1,0,DAT_0060c248);
  return;
}


undefined FUN_00407e98(undefined param_1,undefined param_2,undefined param_3)

{
  code **ppcVar1;
  
  for (ppcVar1 = (code **)&DAT_0060be30; *ppcVar1 != (code *)0xffffffffffffffff;
      ppcVar1 = ppcVar1 + -1) {
    (**ppcVar1)();
  }
  return param_3;
}


void __DT_FINI(void)

{
  FUN_004027f1();
  return;
}

