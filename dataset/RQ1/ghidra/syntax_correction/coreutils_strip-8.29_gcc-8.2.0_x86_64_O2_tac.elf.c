
#include "decompile_ghidra.h"
#define __int64 long long
#define __int32 int
#define __int16 short
#define __int8 char

void switchD_00403260caseD_b(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401cb5(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401cba(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401cbf(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401cc4(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void switchD_00404e2acaseD_0(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void switchD_004134d1caseD_0(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_00401ce0(uint param_1,undefined *param_2)

{
  char cVar1;
  FILE *pFVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  __off_t _Var6;
  size_t sVar7;
  size_t __n;
  undefined uVar8;
  undefined uVar9;
  int *piVar10;
  void *pvVar11;
  ulong uVar12;
  byte *pbVar13;
  char *pcVar14;
  byte *pbVar15;
  int unaff_R12D;
  byte *unaff_R14;
  bool bVar16;
  bool bVar17;
  byte bVar18;
  undefined **local_58;
  byte local_49;
  byte *local_48;
  
  bVar18 = 0;
  FUN_00403070(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils",
                 "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale"
                );
  textdomain("coreutils");
  FUN_00414b70(FUN_00402ef0);
  DAT_0061d4c8 = 1;
  DAT_0061d4d0 = "\n";
  DAT_0061d4c0 = 1;
  while (iVar4 = FUN_00406380(param_1,param_2,&DAT_00414ca1,&PTR_s_before_00415180,0), iVar4 != -1)
  {
    if (iVar4 == 0x62) {
LAB_00401e00:
      DAT_0061d4c8 = 0;
    }
    else {
      if (iVar4 < 99) {
        if (iVar4 == -0x83) {
          FUN_00405200(stdout,&DAT_00414bf4,"GNU coreutils",PTR_DAT_0061b270,"Jay Lepreau",
                       "David MacKenzie",0);
                    /* WARNING: Subroutine does not return */
          exit(0);
        }
        if (iVar4 != -0x82) goto LAB_004023cc;
        FUN_00402b70(0);
        goto LAB_00401e00;
      }
      if (iVar4 == 0x72) {
        DAT_0061d4c0 = 0;
      }
      else {
        if (iVar4 != 0x73) {
LAB_004023cc:
          DAT_0061d4a8 = FUN_00402b70(1);
          goto LAB_004023d6;
        }
        DAT_0061d4d0 = DAT_0061d688;
      }
    }
  }
  if (DAT_0061d4c0 == 0) {
    if (*DAT_0061d4d0 == '\0') {
      uVar9 = dcgettext(0,"separator cannot be empty",5);
      lVar5 = error(1,0,uVar9);
LAB_00402404:
      error(1,0,"%s",lVar5);
      goto LAB_0040241a;
    }
    _DAT_0061d460 = 0;
    uVar12 = 0xffffffffffffffff;
    _DAT_0061d468 = 0;
    _DAT_0061d480 = &DAT_0061d360;
    _DAT_0061d488 = 0;
    pcVar14 = DAT_0061d4d0;
    do {
      if (uVar12 == 0) break;
      uVar12 = uVar12 - 1;
      cVar1 = *pcVar14;
      pcVar14 = pcVar14 + (ulong)bVar18 * -2 + 1;
    } while (cVar1 != '\0');
    lVar5 = FUN_004137a0(DAT_0061d4d0,~uVar12 - 1,&DAT_0061d460);
    if (lVar5 != 0) goto LAB_00402404;
  }
  else {
    DAT_0061d4b8 = 1;
    DAT_0061d4c0 = DAT_0061d4b8;
    if (*DAT_0061d4d0 != '\0') {
      uVar12 = 0xffffffffffffffff;
      pcVar14 = DAT_0061d4d0;
      do {
        if (uVar12 == 0) break;
        uVar12 = uVar12 - 1;
        cVar1 = *pcVar14;
        pcVar14 = pcVar14 + (ulong)bVar18 * -2 + 1;
      } while (cVar1 != '\0');
      DAT_0061d4b8 = ~uVar12 - 1;
      DAT_0061d4c0 = DAT_0061d4b8;
    }
  }
  iVar4 = 0x32;
  DAT_0061d4a8 = 0x2000;
  uVar12 = 0x2000;
  if (0xfff < DAT_0061d4c0) {
    while (DAT_0061d4a8 = uVar12 * 2, (uVar12 & 0x7fffffffffffffff) <= DAT_0061d4c0) {
      iVar4 = iVar4 + -1;
      uVar12 = DAT_0061d4a8;
      if (iVar4 == 0) {
LAB_004023d6:
                    /* WARNING: Subroutine does not return */
        FUN_00405590();
      }
    }
  }
  uVar12 = DAT_0061d4a8 + 1 + DAT_0061d4c0;
  DAT_0061d4a0 = uVar12 * 2;
  if (uVar12 <= DAT_0061d4a8 || DAT_0061d4a0 <= uVar12) {
                    /* WARNING: Subroutine does not return */
    FUN_00405590();
  }
  DAT_0061d4b0 = (void *)FUN_00405340();
  uVar12 = DAT_0061d4c0;
  if (DAT_0061d4c0 == 0) {
    DAT_0061d4b0 = (void *)((long)DAT_0061d4b0 + 1);
  }
  else {
    pvVar11 = memcpy(DAT_0061d4b0,DAT_0061d4d0,DAT_0061d4c0 + 1);
    DAT_0061d4b0 = (void *)((long)pvVar11 + uVar12);
  }
  bVar16 = DAT_0061b2d8._4_4_ < param_1;
  bVar17 = DAT_0061b2d8._4_4_ == param_1;
  if ((int)DAT_0061b2d8._4_4_ < (int)param_1) {
    local_58 = (undefined **)(param_2 + (int)DAT_0061b2d8._4_4_);
    unaff_R14 = *local_58;
    bVar16 = false;
    bVar17 = unaff_R14 == (byte *)0x0;
    if (bVar17) {
      local_49 = 1;
      goto LAB_00402107;
    }
  }
  else {
    local_58 = &PTR_DAT_00415160;
    unaff_R14 = &DAT_0041648a;
  }
  local_48 = &DAT_0041648a;
  local_49 = 1;
  do {
    local_58 = local_58 + 1;
    lVar5 = 2;
    pbVar13 = unaff_R14;
    pbVar15 = local_48;
    do {
      if (lVar5 == 0) break;
      lVar5 = lVar5 + -1;
      bVar16 = *pbVar13 < *pbVar15;
      bVar17 = *pbVar13 == *pbVar15;
      pbVar13 = pbVar13 + (ulong)bVar18 * -2 + 1;
      pbVar15 = pbVar15 + (ulong)bVar18 * -2 + 1;
    } while (bVar17);
    unaff_R12D = (int)(char)((!bVar16 && !bVar17) - bVar16);
    if (unaff_R12D == 0) {
      param_1 = 0;
      DAT_0061d4c9 = '\x01';
      unaff_R14 = (byte *)dcgettext(0,"standard input",5);
LAB_00401fd9:
      _Var6 = lseek(param_1,0,2);
      if ((_Var6 < 0) || (iVar4 = isatty(param_1), iVar4 != 0)) {
        pFVar2 = DAT_0061d328;
        if (DAT_0061d330 == (char *)0x0) {
          pcVar14 = getenv("TMPDIR");
          if (pcVar14 == (char *)0x0) {
            pcVar14 = "/tmp";
          }
          DAT_0061d330 = (char *)FUN_00402f90(pcVar14,"tacXXXXXX",0);
          iVar4 = FUN_00404d10(DAT_0061d330);
          if (iVar4 < 0) {
            uVar9 = FUN_00404a40(4,pcVar14);
            uVar8 = dcgettext(0,"failed to create temporary file in %s",5);
            piVar10 = __errno_location();
            error(0,*piVar10,uVar8,uVar9);
          }
          else {
            DAT_0061d328 = fdopen(iVar4,"w+");
            if (DAT_0061d328 != (FILE *)0x0) {
              unlink(DAT_0061d330);
              goto LAB_0040204c;
            }
            uVar9 = FUN_00404a40(4,DAT_0061d330);
            uVar8 = dcgettext(0,"failed to open %s for writing",5);
            piVar10 = __errno_location();
            error(0,*piVar10,uVar8,uVar9);
            close(iVar4);
            unlink(DAT_0061d330);
          }
          bVar3 = 0;
          free(DAT_0061d330);
          DAT_0061d330 = (char *)0x0;
        }
        else {
          clearerr_unlocked(DAT_0061d328);
          iVar4 = FUN_004055d0(pFVar2,0,0);
          if (iVar4 < 0) {
LAB_004021fe:
            uVar9 = FUN_00404a40(4,DAT_0061d330);
            pcVar14 = "failed to rewind stream for %s";
          }
          else {
            iVar4 = fileno(DAT_0061d328);
            iVar4 = ftruncate(iVar4,0);
            if (iVar4 < 0) goto LAB_004021fe;
LAB_0040204c:
            pcVar14 = DAT_0061d330;
            pFVar2 = DAT_0061d328;
            lVar5 = 0;
            while (__n = FUN_00404cb0(param_1,DAT_0061d4b0,DAT_0061d4a8), __n != 0) {
              if (__n == 0xffffffffffffffff) {
                uVar9 = FUN_00404b10(0,3,unaff_R14);
                pcVar14 = "%s: read error";
                goto LAB_004021d7;
              }
              sVar7 = fwrite_unlocked(DAT_0061d4b0,1,__n,pFVar2);
              if (__n != sVar7) goto LAB_0040221e;
              lVar5 = lVar5 + __n;
            }
            iVar4 = fflush_unlocked(pFVar2);
            if (iVar4 == 0) {
              if (lVar5 < 0) {
LAB_0040241a:
                bVar3 = 0;
              }
              else {
                iVar4 = fileno(pFVar2);
                bVar3 = FUN_004025f0(iVar4,pcVar14,lVar5);
              }
              goto LAB_004020e4;
            }
LAB_0040221e:
            uVar9 = FUN_00404b10(0,3,pcVar14);
            pcVar14 = "%s: write error";
          }
LAB_004021d7:
          uVar8 = dcgettext(0,pcVar14,5);
          piVar10 = __errno_location();
          bVar3 = 0;
          error(0,*piVar10,uVar8,uVar9);
        }
      }
      else {
        bVar3 = FUN_004025f0(param_1,unaff_R14,_Var6);
      }
LAB_004020e4:
      if ((unaff_R12D != 0) && (iVar4 = close(param_1), iVar4 != 0)) {
        uVar9 = FUN_00404b10(0,3,unaff_R14);
        pcVar14 = "%s: read error";
        goto LAB_00402167;
      }
    }
    else {
      param_1 = open((char *)unaff_R14,0);
      if (-1 < (int)param_1) goto LAB_00401fd9;
      uVar9 = FUN_00404a40(4,unaff_R14);
      pcVar14 = "failed to open %s for reading";
LAB_00402167:
      uVar8 = dcgettext(0,pcVar14,5);
      piVar10 = __errno_location();
      bVar3 = 0;
      error(0,*piVar10,uVar8,uVar9);
    }
    local_49 = local_49 & bVar3;
    unaff_R14 = *local_58;
    bVar16 = false;
    bVar17 = unaff_R14 == (byte *)0x0;
  } while (!bVar17);
LAB_00402107:
  FUN_00402510(0,0);
  if ((DAT_0061d4c9 != '\0') && (iVar4 = close(0), iVar4 < 0)) {
    piVar10 = __errno_location();
    error(0,*piVar10,&DAT_0041648a);
    local_49 = 0;
  }
  return local_49 ^ 1;
}


void FUN_00402430(undefined param_1,undefined param_2,undefined param_3)

{
  undefined unaff_retaddr;
  undefined auStack_8 [8];
  
  (*(code *)PTR___libc_start_main_0061aff0)
            (FUN_00401ce0,unaff_retaddr,&stack0x00000008,FUN_00414b00,FUN_00414b60,param_3,auStack_8
            );
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* WARNING: Removing unreachable block (ram,0x00402468) */
/* WARNING: Removing unreachable block (ram,0x00402472) */

void FUN_0040245b(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x004024a9) */

void FUN_0040247a(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x004024e6) */

void FUN_004024b1(void)

{
  if (DAT_0061b308 != '\0') {
    return;
  }
  FUN_0040245b();
  DAT_0061b308 = 1;
  return;
}


/* WARNING: Removing unreachable block (ram,0x004024a9) */

void thunk_FUN_0040247a(void)

{
  return;
}


void FUN_00402510(void *param_1,long param_2)

{
  size_t __n;
  ulong uVar1;
  ulong __n_00;
  undefined *__dest;
  
  __n_00 = param_2 - (long)param_1;
  __n = 0x2000 - DAT_0061d320;
  if (param_1 != (void *)0x0) {
    uVar1 = __n_00;
    if (__n_00 < __n) {
      __dest = &DAT_0061b320 + DAT_0061d320;
      uVar1 = DAT_0061d320 + __n_00;
    }
    else {
      do {
        uVar1 = uVar1 - __n;
        memcpy(&DAT_0061b320 + DAT_0061d320,param_1,__n);
        param_1 = (void *)((long)param_1 + __n);
        __n = 0x2000;
        fwrite_unlocked(&DAT_0061b320,1,0x2000,stdout);
        DAT_0061d320 = 0;
      } while (0x1fff < uVar1);
      __dest = &DAT_0061b320;
      __n_00 = uVar1;
    }
    memcpy(__dest,param_1,__n_00);
    DAT_0061d320 = uVar1;
    return;
  }
  fwrite_unlocked(&DAT_0061b320,1,DAT_0061d320,stdout);
  DAT_0061d320 = 0;
  return;
}


undefined FUN_004025f0(int param_1,undefined param_2,ulong param_3)

{
  size_t __n;
  byte bVar1;
  ulong uVar2;
  FILE *pFVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  __off_t _Var9;
  undefined uVar10;
  undefined uVar11;
  int *piVar12;
  char *pcVar13;
  byte **ppbVar14;
  char *pcVar16;
  long lVar17;
  char *pcVar18;
  byte *pbVar19;
  byte *pbVar20;
  long lVar21;
  char *pcVar22;
  bool bVar23;
  bool bVar24;
  byte bVar25;
  byte *pbStack_f0;
  char *pcStack_e8;
  byte *apbStack_e0 [5];
  char *pcStack_b8;
  char *pcStack_b0;
  char *pcStack_a8;
  char *pcStack_a0;
  char *pcStack_98;
  undefined uStack_90;
  undefined uStack_88;
  ulong uStack_80;
  char *pcStack_78;
  char *pcStack_70;
  byte *local_60;
  char *local_58;
  int local_50;
  byte local_49;
  char *local_48;
  undefined local_40;
  byte **ppbVar15;
  
  lVar17 = DAT_0061d4b8;
  uVar7 = DAT_0061d4a8;
  bVar25 = 0;
  local_60 = DAT_0061d4d0 + 1;
  bVar1 = *DAT_0061d4d0;
  uStack_80 = (ulong)bVar1;
  __n = DAT_0061d4b8 - 1;
  local_50 = param_1;
  local_40 = param_2;
  if (param_3 % DAT_0061d4a8 != 0) {
    param_3 = param_3 - param_3 % DAT_0061d4a8;
    pcStack_70 = (char *)0x402acc;
    _Var9 = lseek(param_1,param_3,0);
    if (_Var9 < 0) {
      pcStack_70 = (char *)0x402ae6;
      uVar10 = FUN_00404b10(0,3,local_40);
      pcStack_70 = (char *)0x402afa;
      uVar11 = dcgettext(0,"%s: seek failed",5);
      pcStack_70 = (char *)0x402b02;
      piVar12 = __errno_location();
      pcStack_70 = (char *)0x402b13;
      error(0,*piVar12,uVar11,uVar10);
      uVar7 = DAT_0061d4a8;
    }
  }
  while( true ) {
    pcStack_70 = (char *)0x40265e;
    uVar6 = FUN_00404cb0(local_50,DAT_0061d4b0,uVar7);
    uVar7 = DAT_0061d4a8;
    if (uVar6 != 0) break;
    if (param_3 == 0) {
      if (DAT_0061d4a8 == 0) goto LAB_00402965;
      uVar8 = 0;
      goto LAB_004026ec;
    }
    pcStack_70 = (char *)0x402687;
    _Var9 = lseek(local_50,-DAT_0061d4a8,1);
    if (_Var9 < 0) {
      pcStack_70 = (char *)0x40269d;
      uVar10 = FUN_00404b10(0,3,local_40);
      pcStack_70 = (char *)0x4026b1;
      uVar11 = dcgettext(0,"%s: seek failed",5);
      pcStack_70 = (char *)0x4026b9;
      piVar12 = __errno_location();
      pcStack_70 = (char *)0x4026ca;
      error(0,*piVar12,uVar11,uVar10);
      uVar7 = DAT_0061d4a8;
    }
    param_3 = param_3 - uVar7;
  }
  if (uVar6 == DAT_0061d4a8) {
LAB_00402965:
    do {
      pcStack_70 = (char *)0x402978;
      uVar8 = FUN_00404cb0(local_50,DAT_0061d4b0,uVar7);
      uVar6 = uVar7;
      if (uVar8 == 0) goto LAB_004026e2;
      if (uVar8 == 0xffffffffffffffff) goto LAB_00402a41;
      param_3 = param_3 + uVar8;
      uVar7 = uVar8;
    } while (DAT_0061d4a8 == uVar8);
  }
  else {
LAB_004026e2:
    uVar8 = uVar6;
    if (uVar8 == 0xffffffffffffffff) {
LAB_00402a41:
      pcStack_70 = (char *)0x402a52;
      uVar10 = FUN_00404b10(0,3,local_40);
      pcStack_70 = (char *)0x402a66;
      uVar11 = dcgettext(0,"%s: read error",5);
      pcStack_70 = (char *)0x402a6e;
      piVar12 = __errno_location();
      pcStack_70 = (char *)0x402a7f;
      error(0,*piVar12,uVar11,uVar10);
      return 0;
    }
  }
LAB_004026ec:
  local_49 = 1;
  pcStack_78 = DAT_0061d4b0 + uVar8;
  pcVar13 = pcStack_78 + (1 - lVar17);
  pcVar16 = DAT_0061d4b0;
  if (DAT_0061d4c0 == 0) {
    pcVar13 = pcStack_78;
  }
  do {
    pcVar22 = pcVar16;
    if (DAT_0061d4c0 != 0) goto LAB_004028b3;
LAB_00402721:
    do {
      lVar17 = (long)pcVar13 - (long)pcVar16;
      lVar21 = 1 - lVar17;
      if (1 < lVar21) {
        pcStack_70 = (char *)0x402b30;
        uVar10 = dcgettext(0,"record too large",5);
        pcStack_70 = (char *)0x402b41;
        error(1,0,uVar10);
LAB_00402b41:
                    /* WARNING: Subroutine does not return */
        pcStack_70 = (char *)0x402b46;
        FUN_00405590();
      }
      pcVar22 = pcVar16;
      if (lVar21 == 1) {
LAB_0040298f:
        pcVar13 = pcVar22 + -1;
      }
      else {
        pcStack_70 = (char *)0x402757;
        lVar17 = FUN_00414120(&DAT_0061d460,pcVar16,lVar17,lVar17 + -1,lVar21,&DAT_0061d340);
        pcVar22 = DAT_0061d4b0;
        if (lVar17 == -1) goto LAB_0040298f;
        if (lVar17 == -2) {
          pcStack_70 = (char *)0x402b57;
          uVar10 = dcgettext(0,"error in regular expression search",5);
          iVar4 = 1;
          pcStack_70 = (char *)0x402b68;
          error(1,0,uVar10);
          uVar10 = DAT_0061d4e8;
          pcStack_70 = pcVar16;
          if (iVar4 == 0) {
            uVar11 = dcgettext(0,"Usage: %s [OPTION]... [FILE]...\n",5);
            __printf_chk(1,uVar11,uVar10);
            pFVar3 = stdout;
            pcVar13 = (char *)dcgettext(0,"Write each FILE to standard output, last line first.\n",5
                                       );
            fputs_unlocked(pcVar13,pFVar3);
            pFVar3 = stdout;
            pcVar13 = (char *)dcgettext(0,
                                        "\nWith no FILE, or when FILE is -, read standard input.\n",
                                        5);
            fputs_unlocked(pcVar13,pFVar3);
            pFVar3 = stdout;
            pcVar13 = (char *)dcgettext(0,
                                        "\nMandatory arguments to long options are mandatory for short options too.\n"
                                        ,5);
            fputs_unlocked(pcVar13,pFVar3);
            pFVar3 = stdout;
            pcVar13 = (char *)dcgettext(0,
                                        "  -b, --before             attach the separator before instead of after\n  -r, --regex              interpret the separator as a regular expression\n  -s, --separator=STRING   use STRING as the separator instead of newline\n"
                                        ,5);
            fputs_unlocked(pcVar13,pFVar3);
            pFVar3 = stdout;
            pcVar13 = (char *)dcgettext(0,"      --help     display this help and exit\n",5);
            fputs_unlocked(pcVar13,pFVar3);
            pFVar3 = stdout;
            pcVar13 = (char *)dcgettext(0,"      --version  output version information and exit\n",5
                                       );
            fputs_unlocked(pcVar13,pFVar3);
            pbStack_f0 = &DAT_00414bf8;
            pcStack_e8 = "test invocation";
            apbStack_e0[0] = (byte *)0x414c72;
            apbStack_e0[1] = (byte *)0x414c0a;
            apbStack_e0[2] = (byte *)0x414c20;
            apbStack_e0[3] = (byte *)0x414c2a;
            apbStack_e0[4] = (byte *)0x414c39;
            pcStack_b8 = "sha2 utilities";
            pcStack_b0 = "sha384sum";
            pcStack_a8 = "sha2 utilities";
            pcStack_a0 = "sha512sum";
            pcStack_98 = "sha2 utilities";
            uStack_90 = 0;
            uStack_88 = 0;
            ppbVar14 = &pbStack_f0;
            goto LAB_00402d30;
          }
          uVar11 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
          __fprintf_chk(stderr,1,uVar11,uVar10);
          goto LAB_00402baf;
        }
        pcVar13 = DAT_0061d4b0 + *DAT_0061d348;
        DAT_0061d4b8 = *DAT_0061d350 - *DAT_0061d348;
      }
LAB_00402794:
      pcVar18 = pcStack_78;
      pcVar16 = pcVar22;
      uVar7 = param_3;
      if (pcVar13 < pcVar22) {
        do {
          if (uVar7 == 0) {
            pcStack_70 = (char *)0x402aab;
            FUN_00402510(pcVar22,pcStack_78);
            return 1;
          }
          uVar6 = (long)pcStack_78 - (long)pcVar22;
          if (DAT_0061d4a8 < uVar6) {
            uVar2 = DAT_0061d4a8 * 2;
            uVar8 = DAT_0061d4c0 + 2 + DAT_0061d4a8 * 4;
            lVar17 = 1;
            if (DAT_0061d4c0 != 0) {
              lVar17 = DAT_0061d4c0;
            }
            bVar23 = uVar8 < DAT_0061d4a0;
            DAT_0061d4a0 = uVar8;
            DAT_0061d4a8 = uVar2;
            if (bVar23) goto LAB_00402b41;
            pcStack_70 = (char *)0x4027fb;
            lVar21 = FUN_004053a0((long)pcVar22 - lVar17);
            DAT_0061d4b0 = (char *)(lVar21 + lVar17);
          }
          if (uVar7 < DAT_0061d4a8) {
            param_3 = 0;
            DAT_0061d4a8 = uVar7;
          }
          else {
            param_3 = uVar7 - DAT_0061d4a8;
          }
          pcStack_70 = (char *)0x402826;
          _Var9 = lseek(local_50,param_3,0);
          if (_Var9 < 0) {
            pcStack_70 = (char *)0x4029e1;
            uVar10 = FUN_00404b10(0,3,local_40);
            pcStack_70 = (char *)0x4029f5;
            uVar11 = dcgettext(0,"%s: seek failed",5);
            pcStack_70 = (char *)0x4029fd;
            piVar12 = __errno_location();
            pcStack_70 = (char *)0x402a0e;
            error(0,*piVar12,uVar11,uVar10);
          }
          pcVar13 = DAT_0061d4b0;
          uVar7 = DAT_0061d4a8;
          pcStack_78 = DAT_0061d4b0 + uVar6 + DAT_0061d4a8;
          pcStack_70 = (char *)0x402855;
          local_58 = (char *)memmove(DAT_0061d4b0 + DAT_0061d4a8,DAT_0061d4b0,uVar6);
          if (DAT_0061d4c0 == 0) {
            local_58 = pcStack_78;
          }
          pcStack_70 = (char *)0x40287d;
          local_48 = local_58;
          uVar7 = FUN_00404cb0(local_50,pcVar13,uVar7);
          if (uVar7 != DAT_0061d4a8) goto LAB_00402a41;
          pcVar13 = local_58;
          pcVar16 = DAT_0061d4b0;
          if (DAT_0061d4c0 == 0) goto LAB_00402721;
          pcVar13 = local_58 + -1;
          pcVar16 = local_58;
          pcVar22 = DAT_0061d4b0;
          if (local_58[-1] == bVar1) goto LAB_004028bc;
LAB_004028b3:
          do {
            do {
              pcVar16 = pcVar13;
              pcVar13 = pcVar16 + -1;
            } while (pcVar16[-1] != bVar1);
LAB_004028bc:
            if (__n == 0) goto LAB_00402794;
            pcStack_70 = (char *)0x4028d5;
            iVar4 = strncmp(pcVar16,(char *)local_60,__n);
          } while (iVar4 != 0);
          pcVar18 = pcStack_78;
          pcVar16 = pcVar22;
          uVar7 = param_3;
        } while (pcVar13 < pcVar22);
      }
      if (DAT_0061d4c8 == '\0') {
        pcStack_70 = (char *)0x4029be;
        FUN_00402510(pcVar13,pcVar18);
        pcStack_78 = pcVar13;
        pcVar16 = DAT_0061d4b0;
      }
      else {
        pcStack_78 = pcVar13 + DAT_0061d4b8;
        local_49 = local_49 ^ 1 | pcVar18 != pcStack_78;
        if (local_49 != 0) {
          pcStack_70 = (char *)0x402a28;
          local_58 = pcStack_78;
          FUN_00402510(pcStack_78,pcVar18);
          local_49 = 0;
          pcStack_78 = local_58;
          pcVar16 = DAT_0061d4b0;
        }
      }
    } while (DAT_0061d4c0 == 0);
    pcVar13 = pcVar13 + (1 - DAT_0061d4b8);
  } while( true );
LAB_00402d30:
  do {
    ppbVar15 = ppbVar14;
    ppbVar14 = ppbVar15 + 2;
    pbVar19 = *ppbVar14;
    bVar23 = false;
    bVar24 = pbVar19 == (byte *)0x0;
    if (bVar24) break;
    lVar17 = 4;
    pbVar20 = &DAT_00414bf4;
    do {
      if (lVar17 == 0) break;
      lVar17 = lVar17 + -1;
      bVar23 = *pbVar20 < *pbVar19;
      bVar24 = *pbVar20 == *pbVar19;
      pbVar20 = pbVar20 + (ulong)bVar25 * -2 + 1;
      pbVar19 = pbVar19 + (ulong)bVar25 * -2 + 1;
    } while (bVar24);
  } while ((!bVar23 && !bVar24) != bVar23);
  pbVar19 = ppbVar15[3];
  if (pbVar19 == (byte *)0x0) {
    uVar10 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar10,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar13 = setlocale(5,(char *)0x0);
    if ((pcVar13 == (char *)0x0) || (iVar5 = strncmp(pcVar13,"en_",3), iVar5 == 0)) {
      pbVar19 = &DAT_00414bf4;
      uVar10 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
      pcVar13 = " invocation";
      __printf_chk(1,uVar10,"https://www.gnu.org/software/coreutils/",&DAT_00414bf4);
      goto LAB_00402df4;
    }
    pbVar19 = &DAT_00414bf4;
LAB_00402ea3:
    uVar10 = dcgettext(0,"Report %s translation bugs to <https://translationproject.org/team/>\n",5)
    ;
    __printf_chk(1,uVar10,&DAT_00414bf4);
  }
  else {
    uVar10 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar10,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar13 = setlocale(5,(char *)0x0);
    if ((pcVar13 != (char *)0x0) && (iVar5 = strncmp(pcVar13,"en_",3), iVar5 != 0))
    goto LAB_00402ea3;
  }
  pcVar13 = " invocation";
  uVar10 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
  __printf_chk(1,uVar10,"https://www.gnu.org/software/coreutils/",&DAT_00414bf4);
  if (pbVar19 != &DAT_00414bf4) {
    pcVar13 = "";
  }
LAB_00402df4:
  uVar10 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(1,uVar10,pbVar19,pcVar13);
LAB_00402baf:
                    /* WARNING: Subroutine does not return */
  exit(iVar4);
}


void FUN_00402b70(int param_1)

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
  
  uVar7 = DAT_0061d4e8;
  bVar13 = 0;
  if (param_1 != 0) {
    uVar3 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(stderr,1,uVar3,uVar7);
    goto LAB_00402baf;
  }
  uVar3 = dcgettext(0,"Usage: %s [OPTION]... [FILE]...\n",5);
  __printf_chk(1,uVar3,uVar7);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"Write each FILE to standard output, last line first.\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"\nWith no FILE, or when FILE is -, read standard input.\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nMandatory arguments to long options are mandatory for short options too.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -b, --before             attach the separator before instead of after\n  -r, --regex              interpret the separator as a regular expression\n  -s, --separator=STRING   use STRING as the separator instead of newline\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"      --help     display this help and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"      --version  output version information and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  local_88 = &DAT_00414bf8;
  local_80 = "test invocation";
  local_78[0] = (byte *)0x414c72;
  local_78[1] = (byte *)0x414c0a;
  local_78[2] = (byte *)0x414c20;
  local_78[3] = (byte *)0x414c2a;
  local_78[4] = (byte *)0x414c39;
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
    lVar8 = 4;
    pbVar10 = &DAT_00414bf4;
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
        pbVar9 = &DAT_00414bf4;
        goto LAB_00402ea3;
      }
    }
    pbVar9 = &DAT_00414bf4;
    uVar7 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    pcVar4 = " invocation";
    __printf_chk(1,uVar7,"https://www.gnu.org/software/coreutils/",&DAT_00414bf4);
  }
  else {
    uVar7 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar7,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
      iVar2 = strncmp(pcVar4,"en_",3);
      if (iVar2 != 0) {
LAB_00402ea3:
        uVar7 = dcgettext(0,"Report %s translation bugs to <https://translationproject.org/team/>\n"
                          ,5);
        __printf_chk(1,uVar7,&DAT_00414bf4);
      }
    }
    pcVar4 = " invocation";
    uVar7 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    __printf_chk(1,uVar7,"https://www.gnu.org/software/coreutils/",&DAT_00414bf4);
    if (pbVar9 != &DAT_00414bf4) {
      pcVar4 = "";
    }
  }
  uVar7 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(1,uVar7,pbVar9,pcVar4);
LAB_00402baf:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}


void FUN_00402ed0(undefined param_1)

{
  DAT_0061d4e0 = param_1;
  return;
}


void FUN_00402ee0(undefined param_1)

{
  DAT_0061d4d8 = param_1;
  return;
}


void FUN_00402ef0(void)

{
  int iVar1;
  int *piVar2;
  undefined uVar3;
  undefined uVar4;
  
  iVar1 = FUN_004141c0(stdout);
  if (iVar1 != 0) {
    piVar2 = __errno_location();
    if ((DAT_0061d4d8 == '\0') || (*piVar2 != 0x20)) {
      uVar3 = dcgettext(0,"write error",5);
      if (DAT_0061d4e0 == 0) {
        error(0,*piVar2,"%s",uVar3);
      }
      else {
        uVar4 = FUN_00404ae0();
        error(0,*piVar2,"%s: %s",uVar4,uVar3);
      }
      goto LAB_00402f6e;
    }
  }
  iVar1 = FUN_004141c0(stderr);
  if (iVar1 == 0) {
    return;
  }
LAB_00402f6e:
                    /* WARNING: Subroutine does not return */
  _exit(DAT_0061b278);
}


void * FUN_00402f90(void *param_1,char *param_2,long *param_3)

{
  char cVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  size_t __n;
  void *__dest;
  undefined *puVar5;
  size_t __n_00;
  
  lVar3 = FUN_00414220();
  uVar4 = FUN_00414280(lVar3);
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


void FUN_00403070(byte *param_1)

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
        pbVar6 = &DAT_00415290;
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
  DAT_0061d4e8 = param_1;
  program_invocation_name = param_1;
  return;
}


char * FUN_00403110(char *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  byte *pbVar3;
  
  pcVar2 = (char *)dcgettext(0,param_1,5);
  if (param_1 == pcVar2) {
    pbVar3 = (byte *)FUN_00414380();
    if ((*pbVar3 & 0xdf) == 0x55) {
      if (((((pbVar3[1] & 0xdf) != 0x54) || ((pbVar3[2] & 0xdf) != 0x46)) || (pbVar3[3] != 0x2d)) ||
         ((pbVar3[4] != 0x38 || (pbVar3[5] != 0)))) {
LAB_004031e8:
        pcVar2 = "\"";
        if (param_2 != 9) {
          pcVar2 = "\'";
        }
        return pcVar2;
      }
      cVar1 = *pcVar2;
      pcVar2 = &DAT_004152a1;
      if (cVar1 != '`') {
        pcVar2 = &DAT_00415296;
      }
    }
    else {
      if (((((*pbVar3 & 0xdf) != 0x47) || ((pbVar3[1] & 0xdf) != 0x42)) || (pbVar3[2] != 0x31)) ||
         (((pbVar3[3] != 0x38 || (pbVar3[4] != 0x30)) ||
          ((pbVar3[5] != 0x33 || ((pbVar3[6] != 0x30 || (pbVar3[7] != 0)))))))) goto LAB_004031e8;
      cVar1 = *pcVar2;
      pcVar2 = &DAT_0041529d;
      if (cVar1 != '`') {
        pcVar2 = &DAT_0041529a;
      }
    }
  }
  return pcVar2;
}


ulong FUN_00403210(undefined *param_1,ulong param_2,char *param_3,ulong param_4,int param_5,
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
LAB_00403e61:
    if (param_2 != 0) {
      bVar3 = false;
      local_5b = false;
      bVar2 = true;
      local_70 = 0;
      goto LAB_00403a96;
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
      goto LAB_00403e61;
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
      param_8 = (char *)FUN_00403110(&DAT_004152a5,param_5);
      param_9 = (char *)FUN_00403110(&DAT_00416477);
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
LAB_004032a8:
  uVar22 = 0;
  bVar5 = local_5b;
LAB_004032b8:
  bVar23 = param_4 != uVar22;
  if (param_4 == 0xffffffffffffffff) {
    bVar23 = param_3[uVar22] != '\0';
  }
  bVar26 = bVar6;
  if (!bVar23) goto LAB_00403a38;
  bVar20 = (bool)(param_5 != 2 & bVar6);
  __s1 = (byte *)(param_3 + uVar22);
  uVar16 = uVar15;
  bVar4 = bVar3;
  if (bVar20) {
    if (local_a0 == 0) {
LAB_004039b0:
      uVar19 = (ulong)*__s1;
      switch(uVar19) {
      case 0:
        goto switchD_004039c2_caseD_0;
      default:
        bVar20 = false;
        goto switchD_0040382e_caseD_1;
      case 7:
        bVar17 = 0x61;
        goto LAB_004036c5;
      case 8:
        bVar17 = 0x62;
        break;
      case 9:
switchD_004039c2_caseD_9:
        bVar17 = 0x74;
        break;
      case 10:
switchD_004039c2_caseD_a:
        bVar17 = 0x6e;
        break;
      case 0xb:
switchD_004039c2_caseD_b:
        bVar17 = 0x76;
        goto LAB_004036c5;
      case 0xc:
switchD_004039c2_caseD_c:
        bVar17 = 0x66;
LAB_004036c5:
        if (local_5c) {
          bVar25 = false;
          goto LAB_00403618;
        }
LAB_004036d0:
        bVar23 = false;
        goto LAB_0040348b;
      case 0xd:
        bVar20 = false;
switchD_004033a8_caseD_d:
        bVar25 = param_5 == 2;
        uVar19 = 0xd;
        bVar13 = 0x72;
        goto LAB_004035e0;
      case 0x20:
        bVar25 = false;
LAB_00403a0a:
        uVar19 = 0x20;
        goto LAB_004039d2;
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
switchD_004033a8_caseD_21:
        bVar25 = false;
        goto LAB_004035eb;
      case 0x23:
      case 0x7e:
        bVar26 = false;
LAB_004039ea:
        if (uVar22 == 0) {
          bVar25 = false;
          bVar23 = bVar20;
          bVar20 = bVar26;
          goto LAB_004033f8;
        }
        bVar23 = false;
        goto LAB_0040340f;
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
LAB_004039d2:
        bVar24 = false;
        bVar23 = bVar20;
        bVar20 = bVar25;
        goto LAB_00403411;
      case 0x27:
        bVar20 = false;
        goto switchD_0040382e_caseD_27;
      case 0x3f:
        bVar20 = false;
        goto switchD_0040382e_caseD_3f;
      case 0x5c:
        bVar20 = false;
        goto switchD_004033a8_caseD_5c;
      case 0x7b:
      case 0x7d:
        bVar20 = false;
        goto switchD_0040382e_caseD_7b;
      }
      bVar25 = false;
      bVar23 = false;
      goto joined_r0x00403607;
    }
    if ((param_4 == 0xffffffffffffffff) && (1 < local_a0)) {
      param_4 = strlen(param_3);
    }
    if ((param_4 < uVar22 + local_a0) || (iVar7 = memcmp(__s1,local_78,local_a0), iVar7 != 0))
    goto LAB_004039b0;
    if (!local_5c) {
      uVar19 = (ulong)*__s1;
      bVar25 = bVar20;
      switch(uVar19) {
      case 0:
        goto switchD_004033a8_caseD_0;
      default:
        goto switchD_0040382e_caseD_1;
      case 7:
        bVar17 = 0x61;
        goto LAB_004036d0;
      case 8:
        bVar25 = false;
        bVar23 = false;
        bVar17 = 0x62;
        break;
      case 9:
        goto switchD_004039c2_caseD_9;
      case 10:
        goto switchD_004039c2_caseD_a;
      case 0xb:
        goto switchD_004039c2_caseD_b;
      case 0xc:
        goto switchD_004039c2_caseD_c;
      case 0xd:
        goto switchD_004033a8_caseD_d;
      case 0x20:
        goto LAB_00403a0a;
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
        goto switchD_004033a8_caseD_21;
      case 0x23:
      case 0x7e:
        bVar26 = bVar20;
        goto LAB_004039ea;
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
        goto LAB_004039d2;
      case 0x27:
        goto switchD_0040382e_caseD_27;
      case 0x3f:
        goto switchD_0040382e_caseD_3f;
      case 0x5c:
        goto switchD_004033a8_caseD_5c;
      case 0x7b:
      case 0x7d:
        goto switchD_0040382e_caseD_7b;
      }
      goto LAB_00403452;
    }
    goto LAB_0040362a;
  }
  uVar19 = (ulong)*__s1;
  switch(uVar19) {
  case 0:
    if (bVar6) {
switchD_004039c2_caseD_0:
      if (!local_5c) {
        bVar20 = false;
switchD_004033a8_caseD_0:
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
            goto LAB_00403508;
          }
LAB_0040374a:
          param_1[uVar16] = 0x5c;
          uVar15 = uVar16;
        }
        else if (uVar15 < uVar9) goto LAB_0040374a;
        uVar16 = uVar15 + 1;
        bVar24 = bVar23;
        if (param_5 == 2) {
          bVar17 = 0x30;
          bVar23 = false;
          bVar4 = bVar3;
          goto LAB_00403508;
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
LAB_00403789:
        bVar17 = (byte)uVar19;
        bVar23 = false;
        uVar15 = uVar16;
        bVar4 = bVar3;
        if ((bool)(bVar6 ^ 1U | bVar26)) goto LAB_00403508;
        goto LAB_00403411;
      }
      bVar26 = param_5 == 2;
      goto LAB_0040361c;
    }
    if ((param_6 & 1) == 0) {
      bVar25 = param_5 == 2;
      uVar19 = 0;
      bVar23 = false;
      bVar20 = false;
      goto LAB_004033f8;
    }
    uVar22 = uVar22 + 1;
    goto LAB_004032b8;
  default:
switchD_0040382e_caseD_1:
    bVar25 = bVar6;
    if (sVar8 != 1) {
      local_40[0] = (mbstate_t)0x0;
      if (param_4 == 0xffffffffffffffff) {
        param_4 = strlen(param_3);
      }
      uVar21 = 0;
      do {
        uVar1 = uVar22 + uVar21;
        lVar11 = FUN_00406400(&local_44,param_3 + uVar1,param_4 - uVar1,local_40);
        if (lVar11 == 0) break;
        if (lVar11 == -1) {
          bVar23 = false;
          goto LAB_0040413a;
        }
        if (lVar11 == -2) {
          if ((param_4 <= uVar1) || (param_3[uVar1] == '\0')) goto LAB_00404277;
          goto LAB_00404267;
        }
        if (((param_5 == 2) && (local_5c)) && (lVar11 != 1)) {
          pcVar12 = param_3 + uVar1 + 1;
          do {
            if (((byte)(*pcVar12 + 0xa5U) < 0x22) &&
               ((1L << (*pcVar12 + 0xa5U & 0x3f) & 0x20000002bU) != 0)) {
              param_5 = 2;
              goto LAB_0040361c;
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
      goto LAB_0040413a;
    }
    ppuVar10 = __ctype_b_loc();
    uVar21 = 1;
    bVar25 = ((*ppuVar10)[uVar19] & 0x4000) == 0;
    bVar23 = !bVar25;
    bVar25 = (bool)(bVar25 & bVar6);
    goto LAB_00403804;
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
    goto LAB_00403842;
  case 10:
    uVar19 = 10;
    bVar13 = 0x6e;
    goto LAB_00403842;
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
LAB_00403842:
    bVar25 = param_5 == 2;
    bVar20 = (bool)(local_5c & bVar25);
    if (bVar20) {
LAB_0040385a:
      param_5 = 2;
      goto LAB_0040361c;
    }
    break;
  case 0x20:
    uVar19 = 0x20;
    goto LAB_004033e6;
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
LAB_004033e6:
    bVar25 = param_5 == 2;
    if ((local_5c) && (bVar25)) goto LAB_0040385a;
    goto LAB_004033f8;
  case 0x23:
  case 0x7e:
LAB_004033dd:
    bVar25 = param_5 == 2;
    if (uVar22 == 0) goto LAB_004033e6;
    goto LAB_004035eb;
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
    goto switchD_0040382e_caseD_25;
  case 0x27:
switchD_0040382e_caseD_27:
    bVar5 = bVar23;
    if (param_5 != 2) {
      bVar25 = false;
      uVar19 = 0x27;
      goto LAB_004033f8;
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
      goto LAB_00403508;
    }
    goto LAB_0040361c;
  case 0x3f:
switchD_0040382e_caseD_3f:
    if (param_5 == 2) {
      if (!local_5c) {
        bVar17 = 0x3f;
        bVar24 = false;
        bVar23 = false;
        goto LAB_00403508;
      }
      goto LAB_0040361c;
    }
    if (param_5 != 5) {
      bVar25 = param_5 == 2;
      uVar19 = 0x3f;
      bVar23 = false;
      goto LAB_004033f8;
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
        goto LAB_00403789;
      }
      goto LAB_0040362a;
    }
    bVar25 = false;
    uVar19 = 0x3f;
    bVar23 = false;
    goto LAB_004033f8;
  case 0x5c:
    if (param_5 != 2) {
switchD_004033a8_caseD_5c:
      uVar19 = 0x5c;
      bVar17 = 0x5c;
      bVar13 = 0x5c;
      bVar25 = (bool)(bVar6 & local_5c & local_a0 != 0);
      if (!bVar25) break;
      uVar22 = uVar22 + 1;
      bVar23 = false;
      goto LAB_00403524;
    }
    if (local_5c) goto LAB_0040361c;
    uVar22 = uVar22 + 1;
    bVar23 = false;
    bVar17 = 0x5c;
    goto LAB_00403524;
  case 0x7b:
  case 0x7d:
switchD_0040382e_caseD_7b:
    bVar24 = param_4 != 1;
    if (param_4 == 0xffffffffffffffff) {
      bVar24 = param_3[1] != '\0';
    }
    bVar25 = param_5 == 2;
    if (!bVar24) goto LAB_004033dd;
    goto LAB_004035eb;
  }
LAB_004035e0:
  if (!bVar6) {
LAB_004035eb:
    bVar23 = false;
    goto LAB_004033f8;
  }
  bVar23 = false;
  bVar17 = bVar13;
  goto joined_r0x00403607;
LAB_00403a38:
  if ((uVar15 == 0) && ((bool)(local_5c & param_5 == 2))) {
    param_5 = 2;
LAB_0040361c:
    if (bVar26) {
      param_5 = 4;
    }
LAB_0040362a:
    uVar9 = FUN_00403210(param_1,uVar9,param_3,param_4,param_5,param_6 & 0xfffffffd,0,param_8,
                         param_9);
    return uVar9;
  }
  bVar26 = (bool)(param_5 == 2 & (local_5c ^ 1U));
  bVar23 = (bool)(local_5c ^ 1U);
  if ((!bVar26) || (bVar23 = bVar26, !bVar5)) {
LAB_0040430d:
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
    uVar9 = FUN_00403210(param_1,local_70,param_3,param_4,5,param_6,param_7,param_8,param_9);
    return uVar9;
  }
  local_5b = uVar9 == 0 && local_70 != 0;
  param_2 = local_70;
  bVar23 = bVar5;
  if (uVar9 != 0 || local_70 == 0) goto LAB_0040430d;
LAB_00403a96:
  *param_1 = 0x27;
  param_5 = 2;
  uVar15 = 1;
  local_78 = "\'";
  local_a0 = 1;
  local_5c = false;
  uVar9 = param_2;
  goto LAB_004032a8;
  while (__s1[uVar21] != 0) {
LAB_00404267:
    uVar21 = uVar21 + 1;
    if (param_4 <= uVar22 + uVar21) break;
  }
LAB_00404277:
  bVar23 = false;
LAB_0040413a:
  if (1 < uVar21) {
LAB_00403cfe:
    bVar26 = false;
    uVar21 = uVar21 + uVar22;
    uVar16 = uVar22;
    do {
      bVar17 = (byte)uVar19;
      if (bVar25) {
        bVar26 = param_5 == 2;
        if (local_5c) goto LAB_0040361c;
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
        if (uVar21 <= uVar22) goto LAB_0040349d;
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
        if (uVar21 <= uVar22) goto LAB_00403524;
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
LAB_00403804:
  if (bVar25) {
    bVar23 = false;
    bVar25 = bVar6;
    goto LAB_00403cfe;
  }
switchD_0040382e_caseD_25:
  bVar25 = param_5 == 2;
LAB_004033f8:
  bVar17 = (byte)uVar19;
  bVar24 = (bool)((bVar6 ^ 1U | bVar25) ^ 1 | local_5c);
  bVar26 = bVar20;
  if (bVar24) {
LAB_0040340f:
    bVar24 = false;
    bVar20 = bVar26;
LAB_00403411:
    bVar17 = (byte)uVar19;
    uVar16 = uVar15;
    bVar4 = bVar3;
    if ((param_7 == 0) || ((*(uint *)(param_7 + (uVar19 >> 5) * 4) >> (bVar17 & 0x1f) & 1) == 0))
    goto LAB_00403508;
    bVar25 = param_5 == 2;
  }
  else {
LAB_00403508:
    bVar25 = param_5 == 2;
    uVar15 = uVar16;
    bVar3 = bVar4;
    if (!bVar20) {
      uVar22 = uVar22 + 1;
      bVar3 = (bool)((bVar24 ^ 1U) & bVar4);
LAB_00403524:
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
      goto LAB_0040349d;
    }
  }
joined_r0x00403607:
  if (local_5c) {
LAB_00403618:
    bVar26 = (bool)(bVar6 & bVar25);
    goto LAB_0040361c;
  }
LAB_00403452:
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
LAB_0040348b:
  if (uVar15 < uVar9) {
    param_1[uVar15] = 0x5c;
  }
  uVar15 = uVar15 + 1;
  uVar22 = uVar22 + 1;
  bVar4 = bVar3;
LAB_0040349d:
  bVar3 = bVar4;
  if (uVar15 < uVar9) {
    param_1[uVar15] = bVar17;
  }
  uVar15 = uVar15 + 1;
  if (!bVar23) {
    bVar2 = false;
  }
  goto LAB_004032b8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00404440(int param_1,undefined param_2,undefined param_3,undefined *param_4)

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
  puVar8 = (undefined *)PTR_DAT_0061b2b8;
  if (DAT_0061b2d0 <= param_1) {
    if (param_1 == 0x7fffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_00405590();
    }
    if (PTR_DAT_0061b2b8 == &DAT_0061b2c0) {
      puVar8 = (undefined *)FUN_004053a0(0);
      uVar6 = PTR_DAT_0061b2c8._4_4_;
      uVar5 = PTR_DAT_0061b2c8._0_4_;
      uVar3 = _UNK_0061b2c4;
      PTR_DAT_0061b2b8 = (undefined *)puVar8;
      *puVar8 = _DAT_0061b2c0;
      puVar8[1] = uVar3;
      puVar8[2] = uVar5;
      puVar8[3] = uVar6;
    }
    else {
      puVar8 = (undefined *)FUN_004053a0(PTR_DAT_0061b2b8);
      PTR_DAT_0061b2b8 = (undefined *)puVar8;
    }
    memset(puVar8 + (long)DAT_0061b2d0 * 4,0,(long)((param_1 + 1) - DAT_0061b2d0) << 4);
    DAT_0061b2d0 = param_1 + 1;
  }
  uVar2 = param_4[1];
  puVar10 = (ulong *)(puVar8 + (long)param_1 * 4);
  uVar4 = *puVar10;
  __ptr = (undefined *)puVar10[1];
  uVar9 = FUN_00403210(__ptr,uVar4,param_2,param_3,*param_4,uVar2 | 1,param_4 + 2,
                       *(undefined *)(param_4 + 10),*(undefined *)(param_4 + 0xc));
  if (uVar4 <= uVar9) {
    uVar9 = uVar9 + 1;
    *puVar10 = uVar9;
    if (__ptr != &DAT_0061d500) {
      free(__ptr);
    }
    __ptr = (undefined *)FUN_00405340(uVar9);
    uVar3 = *param_4;
    puVar10[1] = (ulong)__ptr;
    FUN_00403210(__ptr,uVar9,param_2,param_3,uVar3,uVar2 | 1,param_4 + 2,
                 *(undefined *)(param_4 + 10),*(undefined *)(param_4 + 0xc));
  }
  *piVar7 = iVar1;
  return __ptr;
}


void FUN_004045e0(undefined *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_0061d600;
  }
  FUN_00405540(param_1,0x38);
  *piVar2 = iVar1;
  return;
}


undefined FUN_00404620(undefined *param_1)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = (undefined *)&DAT_0061d600;
  }
  return *param_1;
}


void FUN_00404630(undefined *param_1,undefined param_2)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = (undefined *)&DAT_0061d600;
  }
  *param_1 = param_2;
  return;
}


uint FUN_00404640(undefined *param_1,byte param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_0061d600;
  }
  uVar1 = *(uint *)(param_1 + (ulong)(param_2 >> 5) * 4 + 8);
  uVar2 = uVar1 >> (param_2 & 0x1f);
  *(uint *)(param_1 + (ulong)(param_2 >> 5) * 4 + 8) =
       ((param_3 ^ uVar2) & 1) << (param_2 & 0x1f) ^ uVar1;
  return uVar2 & 1;
}


undefined FUN_00404680(undefined *param_1,undefined param_2)

{
  undefined uVar1;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_0061d600;
  }
  uVar1 = *(undefined *)(param_1 + 4);
  *(undefined *)(param_1 + 4) = param_2;
  return uVar1;
}


void FUN_004046a0(undefined *param_1,long param_2,long param_3)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = (undefined *)&DAT_0061d600;
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


void FUN_004046d0(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                 undefined *param_5)

{
  int iVar1;
  int *piVar2;
  
  if (param_5 == (undefined *)0x0) {
    param_5 = (undefined *)&DAT_0061d600;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  FUN_00403210(param_1,param_2,param_3,param_4,*param_5,param_5[1],param_5 + 2,
               *(undefined *)(param_5 + 10),*(undefined *)(param_5 + 0xc));
  *piVar2 = iVar1;
  return;
}


undefined FUN_00404750(undefined param_1,undefined param_2,long *param_3,undefined *param_4)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined uVar4;
  uint uVar5;
  
  if (param_4 == (undefined *)0x0) {
    param_4 = (undefined *)&DAT_0061d600;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  uVar5 = (uint)(param_3 == (long *)0x0) | param_4[1];
  lVar3 = FUN_00403210(0,0,param_1,param_2,*param_4,uVar5,param_4 + 2,*(undefined *)(param_4 + 10),
                       *(undefined *)(param_4 + 0xc));
  uVar4 = FUN_00405340(lVar3 + 1);
  FUN_00403210(uVar4,lVar3 + 1,param_1,param_2,*param_4,uVar5,param_4 + 2,
               *(undefined *)(param_4 + 10),*(undefined *)(param_4 + 0xc));
  *piVar2 = iVar1;
  if (param_3 != (long *)0x0) {
    *param_3 = lVar3;
  }
  return uVar4;
}


void FUN_00404840(undefined param_1,undefined param_2,undefined param_3)

{
  FUN_00404750(param_1,param_2,0,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404850(void)

{
  void **ppvVar1;
  void *__ptr;
  undefined *__ptr_00;
  void **ppvVar2;
  
  __ptr_00 = PTR_DAT_0061b2b8;
  if (1 < DAT_0061b2d0) {
    ppvVar2 = (void **)(PTR_DAT_0061b2b8 + 0x18);
    ppvVar1 = (void **)(PTR_DAT_0061b2b8 + (ulong)(DAT_0061b2d0 - 2) * 0x10 + 0x28);
    do {
      __ptr = *ppvVar2;
      ppvVar2 = ppvVar2 + 2;
      free(__ptr);
    } while (ppvVar2 != ppvVar1);
  }
  if (*(undefined **)(__ptr_00 + 8) != &DAT_0061d500) {
    free(*(undefined **)(__ptr_00 + 8));
    _DAT_0061b2c0 = 0x100;
    PTR_DAT_0061b2c8 = &DAT_0061d500;
  }
  if (__ptr_00 != &DAT_0061b2c0) {
    free(__ptr_00);
    PTR_DAT_0061b2b8 = &DAT_0061b2c0;
  }
  DAT_0061b2d0 = 1;
  return;
}


void FUN_004048f0(undefined param_1,undefined param_2)

{
  FUN_00404440(param_1,param_2,0xffffffffffffffff,&DAT_0061d600);
  return;
}


void FUN_00404910(void)

{
  FUN_00404440();
  return;
}


void FUN_00404920(undefined param_1)

{
  FUN_00404440(0,param_1,0xffffffffffffffff,&DAT_0061d600);
  return;
}


void FUN_00404940(undefined param_1,undefined param_2)

{
  FUN_00404440(0,param_1,param_2,&DAT_0061d600);
  return;
}


void FUN_00404960(undefined param_1,int param_2,undefined param_3)

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
    FUN_00404440(param_1,param_3,0xffffffffffffffff,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_004049d0(undefined param_1,int param_2,undefined param_3,undefined param_4)

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
    FUN_00404440(param_1,param_3,param_4,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00404a40(undefined param_1,undefined param_2)

{
  FUN_00404960(0,param_1,param_2);
  return;
}


void FUN_00404a50(undefined param_1,undefined param_2,undefined param_3)

{
  FUN_004049d0(0,param_1,param_2,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404a60(undefined param_1,undefined param_2,byte param_3)

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
  
  local_18 = DAT_0061d630;
  local_48 = _DAT_0061d600;
  uStack_40 = uRam000000000061d608;
  local_38 = _DAT_0061d610;
  uStack_30 = uRam000000000061d618;
  puVar1 = (uint *)((long)&uStack_40 + (ulong)(param_3 >> 5) * 4);
  local_28 = _DAT_0061d620;
  uStack_20 = uRam000000000061d628;
  uVar2 = *puVar1;
  *puVar1 = (~(uVar2 >> (param_3 & 0x1f)) & 1) << (param_3 & 0x1f) ^ uVar2;
  FUN_00404440(0,param_1,param_2,&local_48);
  return;
}


void FUN_00404ad0(undefined param_1,char param_2)

{
  FUN_00404a60(param_1,0xffffffffffffffff,(int)param_2);
  return;
}


void FUN_00404ae0(undefined param_1)

{
  FUN_00404a60(param_1,0xffffffffffffffff,0x3a);
  return;
}


void FUN_00404b00(undefined param_1,undefined param_2)

{
  FUN_00404a60(param_1,param_2,0x3a);
  return;
}


void FUN_00404b10(undefined param_1,int param_2,undefined param_3)

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
    FUN_00404440(param_1,param_3,0xffffffffffffffff,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404b80(undefined param_1,long param_2,long param_3,undefined param_4,undefined param_5
                 )

{
  undefined local_48;
  undefined uStack_40;
  undefined local_38;
  undefined uStack_30;
  undefined local_28;
  long lStack_20;
  long local_18;
  
  uStack_40 = uRam000000000061d608;
  local_38 = _DAT_0061d610;
  uStack_30 = uRam000000000061d618;
  local_28 = _DAT_0061d620;
  lStack_20 = uRam000000000061d628;
  local_18 = DAT_0061d630;
  local_48 = CONCAT44((int)((ulong)_DAT_0061d600 >> 0x20),10);
  if ((param_2 != 0) && (param_3 != 0)) {
    lStack_20 = param_2;
    local_18 = param_3;
    FUN_00404440(param_1,param_4,param_5,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00404bf0(void)

{
  FUN_00404b80();
  return;
}


void FUN_00404c00(undefined param_1,undefined param_2,undefined param_3)

{
  FUN_00404b80(0,param_1,param_2,param_3,0xffffffffffffffff);
  return;
}


void FUN_00404c20(undefined param_1,undefined param_2,undefined param_3,undefined param_4)

{
  FUN_00404b80(0,param_1,param_2,param_3,param_4);
  return;
}


void FUN_00404c40(void)

{
  FUN_00404440();
  return;
}


void FUN_00404c50(undefined param_1,undefined param_2)

{
  FUN_00404440(0,param_1,param_2,&DAT_0061b280);
  return;
}


void FUN_00404c70(undefined param_1,undefined param_2)

{
  FUN_00404440(param_1,param_2,0xffffffffffffffff,&DAT_0061b280);
  return;
}


void FUN_00404c90(undefined param_1)

{
  FUN_00404440(0,param_1,0xffffffffffffffff,&DAT_0061b280);
  return;
}


ssize_t FUN_00404cb0(int param_1,void *param_2,ulong param_3)

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


void FUN_00404d10(char *param_1)

{
  int iVar1;
  
  iVar1 = mkstemp(param_1);
  FUN_00404d50(iVar1);
  return;
}


void FUN_00404d30(char *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = mkostemp(param_1,param_2);
  FUN_004142b0(iVar1,param_2);
  return;
}


uint FUN_00404d50(uint param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  if (2 < param_1) {
    return param_1;
  }
  uVar2 = FUN_004148f0();
  piVar3 = __errno_location();
  iVar1 = *piVar3;
  close(param_1);
  *piVar3 = iVar1;
  return uVar2;
}


undefined
FUN_00404da0(FILE *param_1,long param_2,undefined param_3,undefined param_4,undefined *param_5,
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
  uVar1 = dcgettext(0,&DAT_00415feb,5);
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
    goto LAB_0040501c;
  case 5:
    uVar1 = param_5[3];
    uVar4 = param_5[2];
    uVar5 = param_5[1];
    uVar6 = *param_5;
    uVar7 = dcgettext(0,"Written by %s, %s, %s,\n%s, and %s.\n",5);
LAB_0040501c:
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
    goto LAB_004050b9;
  case 7:
    uVar1 = param_5[2];
    uVar4 = param_5[5];
    uVar5 = param_5[4];
    uVar6 = param_5[3];
    local_58 = param_5[1];
    uVar7 = *param_5;
    uVar3 = dcgettext(0,"Written by %s, %s, %s,\n%s, %s, %s, and %s.\n",5);
LAB_004050b9:
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
    goto LAB_00404e9a;
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
LAB_00404e9a:
  uVar1 = __fprintf_chk(param_1,1,uVar3,uVar7,local_50,local_58,uVar6,uVar5,uVar4,uVar1,local_48);
  return uVar1;
}


void FUN_00405180(void)

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
  FUN_00404da0();
  return;
}


void FUN_004051a0(void)

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
  FUN_00404da0();
  return;
}


void FUN_00405200(void)

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
  FUN_00404da0();
  return;
}


void FUN_004052c0(void)

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


void FUN_00405340(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00405590();
  }
  return;
}


void FUN_00405360(ulong param_1,ulong param_2)

{
  if ((-1 < SUB168(ZEXT816(param_1) * ZEXT816(param_2),0)) &&
     (SUB168(ZEXT816(param_1) * ZEXT816(param_2) >> 0x40,0) == 0)) {
    FUN_00405340();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00405590();
}


void thunk_FUN_00405340(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00405590();
  }
  return;
}


void * FUN_004053a0(void *param_1,size_t param_2)

{
  void *pvVar1;
  
  if ((param_2 == 0) && (param_1 != (void *)0x0)) {
    free(param_1);
    return (void *)0x0;
  }
  pvVar1 = realloc(param_1,param_2);
  if ((pvVar1 == (void *)0x0) && (param_2 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00405590();
  }
  return pvVar1;
}


void FUN_004053e0(undefined param_1,ulong param_2,ulong param_3)

{
  if ((-1 < SUB168(ZEXT816(param_2) * ZEXT816(param_3),0)) &&
     (SUB168(ZEXT816(param_2) * ZEXT816(param_3) >> 0x40,0) == 0)) {
    FUN_004053a0();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00405590();
}


void FUN_00405410(long param_1,ulong *param_2,ulong param_3)

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
    if ((SUB168(ZEXT816(uVar2) * ZEXT816(param_3),0) < 0) || (uVar3 != 0)) goto LAB_0040546b;
  }
  else {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x5555555555555554);
    uVar3 = SUB168(auVar1 % ZEXT816(param_3),0);
    if (SUB168(auVar1 / ZEXT816(param_3),0) <= uVar2) {
LAB_0040546b:
                    /* WARNING: Subroutine does not return */
      FUN_00405590(param_1,param_2,uVar3);
    }
    uVar2 = (uVar2 >> 1) + 1 + uVar2;
  }
  *param_2 = uVar2;
  FUN_004053a0(param_1,uVar2 * param_3);
  return;
}


void FUN_004054a0(long param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (param_1 == 0) {
    if (uVar1 == 0) {
      *param_2 = 0x80;
      FUN_004053a0(0,0x80);
      return;
    }
    if ((long)uVar1 < 0) goto LAB_004054ea;
  }
  else {
    if (0x5555555555555553 < uVar1) {
LAB_004054ea:
                    /* WARNING: Subroutine does not return */
      FUN_00405590();
    }
    uVar1 = (uVar1 >> 1) + 1 + uVar1;
  }
  *param_2 = uVar1;
  FUN_004053a0(param_1,uVar1);
  return;
}


void FUN_004054f0(size_t param_1)

{
  void *__s;
  
  __s = (void *)FUN_00405340();
  memset(__s,0,param_1);
  return;
}


void FUN_00405510(size_t param_1,ulong param_2)

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
  FUN_00405590();
}


void FUN_00405540(void *param_1,size_t param_2)

{
  void *__dest;
  
  __dest = (void *)FUN_00405340(param_2);
  memcpy(__dest,param_1,param_2);
  return;
}


void FUN_00405570(char *param_1)

{
  void *__dest;
  size_t sVar1;
  
  sVar1 = strlen(param_1);
  __dest = (void *)FUN_00405340(sVar1 + 1);
  memcpy(__dest,param_1,sVar1 + 1);
  return;
}


void FUN_00405590(void)

{
  undefined uVar1;
  
  uVar1 = dcgettext(0,"memory exhausted",5);
  error(DAT_0061b278,0,"%s",uVar1);
                    /* WARNING: Subroutine does not return */
  abort();
}


ulong FUN_004055d0(FILE *param_1,__off_t param_2,int param_3)

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


void FUN_00405630(long param_1,int *param_2)

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
      if (iVar3 <= iVar8) goto LAB_004056ac;
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
      if (iVar9 <= iVar3) goto LAB_004056ac;
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
LAB_004056ac:
  param_2[0xc] = iVar2;
  param_2[0xb] = iVar1 + (iVar2 - iVar3);
  return;
}


int FUN_00405710(int param_1,undefined *param_2,char *param_3,char **param_4,undefined *param_5,
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
      if ((iVar5 == 0) && (sVar7 = strlen(__s1_00), sVar7 == sVar15)) goto LAB_00405930;
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
            if (local_70 == (char *)0x0) goto LAB_00405870;
          }
          else if (local_70 == (char *)0x0) {
            local_70 = (char *)calloc((long)iVar5,1);
            if (local_70 == (char *)0x0) {
              bVar3 = true;
              goto LAB_00405870;
            }
            bVar4 = true;
            local_70[(int)local_44] = '\x01';
          }
          local_70[lVar16] = '\x01';
        }
      }
LAB_00405870:
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
              __fprintf_chk(__stream,1,&DAT_00416471,param_9,*param_4);
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
LAB_00405930:
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


uint FUN_00405d30(uint param_1,undefined *param_2,char *param_3,long param_4,undefined param_5,
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
LAB_00405d7a:
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
          goto LAB_00405e7d;
        }
        pbVar8 = *(byte **)(param_7 + 8);
      }
      param_7[10] = 0;
    }
LAB_00405e7d:
    param_7[6] = 1;
    cVar2 = *param_3;
LAB_00405e88:
    if (cVar2 == ':') {
      uVar3 = 0;
    }
    if (pbVar8 == (byte *)0x0) goto LAB_00405df8;
LAB_00405e9c:
    if (*pbVar8 == 0) goto LAB_00405df8;
  }
  else {
    if (param_7[6] == 0) goto LAB_00405d7a;
    cVar2 = *param_3;
    pbVar8 = *(byte **)(param_7 + 8);
    if ((cVar2 - 0x2bU & 0xfd) != 0) goto LAB_00405e88;
    pcVar4 = param_3 + 1;
    param_3 = param_3 + 1;
    if (*pcVar4 == ':') {
      uVar3 = 0;
    }
    if (pbVar8 != (byte *)0x0) goto LAB_00405e9c;
LAB_00405df8:
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
        FUN_00405630(param_2,param_7);
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
LAB_00405f66:
      if (uVar11 != param_1) {
        *param_7 = uVar11;
      }
      return 0xffffffff;
    }
    lVar6 = 3;
    pbVar8 = (byte *)param_2[(int)uVar11];
    pbVar9 = pbVar8;
    pbVar10 = &DAT_00416489;
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
          FUN_00405630(param_2,param_7);
          uVar11 = param_7[0xb];
        }
      }
      param_7[0xc] = param_1;
      *param_7 = param_1;
      goto LAB_00405f66;
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
        puVar15 = &DAT_00416489;
        goto LAB_004060c5;
      }
      if ((int)param_6 != 0) {
        if (pbVar8[2] == 0) {
          pcVar4 = strchr(param_3,(int)(char)bVar14);
          param_6 = param_6 & 0xffffffff;
          if (pcVar4 != (char *)0x0) goto LAB_00406070;
        }
        *(byte **)(param_7 + 8) = pbVar8 + 1;
        uVar11 = FUN_00405710(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar3,
                              &DAT_0041648a);
        if (uVar11 != 0xffffffff) {
          return uVar11;
        }
        pbVar8 = (byte *)param_2[(int)*param_7];
      }
    }
LAB_00406070:
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
  puVar15 = &DAT_004164a8;
LAB_004060c5:
  uVar3 = FUN_00405710(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar3,puVar15);
  return uVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406300(void)

{
  DAT_0061d640 = DAT_0061b2d8._4_4_;
  _DAT_0061d644 = (undefined)DAT_0061b2d8;
  FUN_00405d30();
  DAT_0061b2d8._4_4_ = DAT_0061d640;
  DAT_0061d688 = DAT_0061d650;
  _DAT_0061b2d4 = DAT_0061d648;
  return;
}


void FUN_00406360(void)

{
  FUN_00406300();
  return;
}


void FUN_00406380(void)

{
  FUN_00406300();
  return;
}


void FUN_004063a0(void)

{
  FUN_00405d30();
  return;
}


void FUN_004063c0(void)

{
  FUN_00406300();
  return;
}


void FUN_004063e0(void)

{
  FUN_00405d30();
  return;
}


size_t FUN_00406400(wchar_t *param_1,byte *param_2,size_t param_3,mbstate_t *param_4)

{
  char cVar1;
  size_t sVar2;
  wchar_t local_1c;
  
  if (param_2 == (byte *)0x0) {
    param_3 = 1;
    param_2 = (byte *)0x4164a7;
  }
  else {
    if (param_3 == 0) {
      return 0xfffffffffffffffe;
    }
    if (param_1 != (wchar_t *)0x0) goto LAB_00406424;
  }
  param_1 = &local_1c;
LAB_00406424:
  sVar2 = mbrtowc(param_1,(char *)param_2,param_3,param_4);
  if ((0xfffffffffffffffd < sVar2) && (cVar1 = FUN_00414320(0), cVar1 == '\0')) {
    sVar2 = 1;
    *param_1 = (uint)*param_2;
  }
  return sVar2;
}


ulong FUN_00406480(long param_1,long param_2)

{
  bool bVar1;
  ulong in_RAX;
  long lVar2;
  
  bVar1 = param_1 == 0 || param_2 == 0;
  if (bVar1) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 == *(long *)(param_2 + 8)) {
    do {
      lVar2 = lVar2 + -1;
      if (lVar2 < 0) {
        return 1;
      }
    } while (*(long *)(*(long *)(param_1 + 0x10) + lVar2 * 8) ==
             *(long *)(*(long *)(param_2 + 0x10) + lVar2 * 8));
  }
  return in_RAX & 0xffffffffffffff00 | (ulong)bVar1;
}


void FUN_004064d0(long *param_1,code *param_2,undefined param_3)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  
  do {
    do {
      do {
        plVar3 = param_1;
        param_1 = (long *)plVar3[1];
      } while ((long *)plVar3[1] != (long *)0x0);
      param_1 = (long *)plVar3[2];
    } while ((long *)plVar3[2] != (long *)0x0);
    iVar2 = (*param_2)(param_3,plVar3);
    while( true ) {
      if ((iVar2 != 0) || (plVar1 = (long *)*plVar3, plVar1 == (long *)0x0)) {
        return;
      }
      param_1 = (long *)plVar1[2];
      if (param_1 != (long *)0x0 && param_1 != plVar3) break;
      iVar2 = (*param_2)(param_3,plVar1);
      plVar3 = plVar1;
    }
  } while( true );
}


undefined FUN_00406540(char *param_1,long param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(param_2 + 0x48);
  if (*(long *)(param_2 + 0x68) == lVar3 || *(long *)(param_2 + 0x68) < lVar3) {
    param_1[8] = '\x02';
    return 0;
  }
  lVar4 = *(long *)(param_2 + 8);
  iVar2 = *(int *)(param_2 + 0x90);
  cVar1 = *(char *)(lVar4 + lVar3);
  *param_1 = cVar1;
  if (((iVar2 < 2) || (lVar3 == *(long *)(param_2 + 0x30))) ||
     (*(int *)(*(long *)(param_2 + 0x10) + lVar3 * 4) != -1)) {
    if (cVar1 == '\\') {
      if (((param_3 & 1) != 0) && (lVar3 + 1 < *(long *)(param_2 + 0x58))) {
        *(long *)(param_2 + 0x48) = lVar3 + 1;
        cVar1 = *(char *)(lVar4 + 1 + lVar3);
        param_1[8] = '\x01';
        *param_1 = cVar1;
        return 1;
      }
    }
    else {
      if (cVar1 == '[') {
        if (lVar3 + 1 < *(long *)(param_2 + 0x58)) {
          cVar1 = *(char *)(lVar4 + 1 + lVar3);
          *param_1 = cVar1;
          if (cVar1 == ':') {
            if ((param_3 & 4) != 0) {
              param_1[8] = '\x1e';
              return 2;
            }
          }
          else {
            if (cVar1 == '=') {
              param_1[8] = '\x1c';
              return 2;
            }
            if (cVar1 == '.') {
              param_1[8] = '\x1a';
              return 2;
            }
          }
        }
        param_1[8] = '\x01';
        *param_1 = '[';
        return 1;
      }
      if (cVar1 == ']') {
        param_1[8] = '\x15';
        return 1;
      }
      if (cVar1 == '^') {
        param_1[8] = '\x19';
        return 1;
      }
      if (cVar1 == '-') {
        param_1[8] = '\x16';
        return 1;
      }
    }
  }
  param_1[8] = '\x01';
  return 1;
}


undefined FUN_00406670(long param_1,long param_2)

{
  if ((*(char *)(param_2 + 0x30) == '\x11') && (param_1 == *(long *)(param_2 + 0x28))) {
    *(byte *)(param_2 + 0x32) = *(byte *)(param_2 + 0x32) | 8;
    return 0;
  }
  return 0;
}


int FUN_00406690(long param_1,uint param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  
  plVar4 = *(long **)(param_1 + 0x98);
  lVar1 = plVar4[6] + param_4 * 0x18;
  if (0 < *(long *)(lVar1 + 8)) {
    lVar10 = 0;
    uVar8 = 1L << ((byte)param_3 & 0x3f);
    do {
      while( true ) {
        lVar5 = *(long *)(*(long *)(lVar1 + 0x10) + lVar10 * 8);
        plVar9 = (long *)(lVar5 * 0x10 + *plVar4);
        cVar3 = *(char *)(plVar9 + 1);
        if (cVar3 != '\b') break;
        if (((param_2 & 1) != 0) && (*plVar9 == param_3)) {
          return -1;
        }
LAB_00406715:
        lVar10 = lVar10 + 1;
        if (*(long *)(lVar1 + 8) == lVar10 || *(long *)(lVar1 + 8) < lVar10) goto LAB_0040686d;
      }
      if (cVar3 == '\t') {
        if (((param_2 & 2) != 0) && (*plVar9 == param_3)) {
          return 0;
        }
        goto LAB_00406715;
      }
      if ((cVar3 != '\x04') || (param_5 == -1)) goto LAB_00406715;
      plVar9 = (long *)(param_5 * 0x28 + *(long *)(param_1 + 0xd8));
      do {
        if ((*plVar9 == lVar5) &&
           ((0x3f < param_3 || ((uVar8 & *(ushort *)((long)plVar9 + 0x22)) != 0)))) {
          lVar6 = **(long **)(plVar4[5] + 0x10 + lVar5 * 0x18);
          if (param_4 == lVar6) {
            return -(param_2 & 1);
          }
          iVar7 = FUN_00406690(param_1,param_2,param_3,lVar6,param_5);
          if (iVar7 == -1) {
            return -1;
          }
          if ((iVar7 == 0) && ((param_2 & 2) != 0)) {
            return 0;
          }
          if (param_3 < 0x40) {
            *(ushort *)((long)plVar9 + 0x22) = *(ushort *)((long)plVar9 + 0x22) & ~(ushort)uVar8;
          }
        }
        plVar2 = plVar9 + 4;
        plVar9 = plVar9 + 5;
      } while (*(char *)plVar2 != '\0');
      lVar10 = lVar10 + 1;
    } while (*(long *)(lVar1 + 8) != lVar10 && lVar10 <= *(long *)(lVar1 + 8));
  }
LAB_0040686d:
  return (int)param_2 >> 1;
}


undefined
FUN_004068a0(long param_1,long param_2,undefined param_3,undefined param_4,long param_5,
            undefined param_6)

{
  long lVar1;
  long lVar2;
  undefined uVar3;
  byte bVar4;
  
  lVar1 = *(long *)(param_1 + 0xd8) + param_2 * 0x28;
  lVar2 = *(long *)(lVar1 + 0x10);
  if (param_5 < lVar2) {
    return 0xffffffff;
  }
  lVar1 = *(long *)(lVar1 + 0x18);
  if (param_5 <= lVar1) {
    bVar4 = lVar2 == param_5;
    if (lVar1 == param_5) {
      bVar4 = bVar4 | 2;
    }
    else if (lVar2 != param_5) {
      return 0;
    }
    uVar3 = FUN_00406690(param_1,bVar4,param_3,param_4,param_6);
    return uVar3;
  }
  return 1;
}


undefined FUN_00406910(long param_1,ulong param_2)

{
  void *pvVar1;
  
  if (1 < *(int *)(param_1 + 0x90)) {
    if (0x1fffffffffffffff < param_2) {
      return 0xc;
    }
    pvVar1 = realloc(*(void **)(param_1 + 0x10),param_2 * 4);
    if (pvVar1 == (void *)0x0) {
      return 0xc;
    }
    *(void **)(param_1 + 0x10) = pvVar1;
    if (*(void **)(param_1 + 0x18) != (void *)0x0) {
      pvVar1 = realloc(*(void **)(param_1 + 0x18),param_2 * 8);
      if (pvVar1 == (void *)0x0) {
        return 0xc;
      }
      *(void **)(param_1 + 0x18) = pvVar1;
    }
  }
  if (*(char *)(param_1 + 0x8b) != '\0') {
    pvVar1 = realloc(*(void **)(param_1 + 8),param_2);
    if (pvVar1 == (void *)0x0) {
      return 0xc;
    }
    *(void **)(param_1 + 8) = pvVar1;
  }
  *(ulong *)(param_1 + 0x40) = param_2;
  return 0;
}


undefined FUN_004069b0(long *param_1,undefined param_2)

{
  void *__ptr;
  long lVar1;
  
  lVar1 = param_1[1];
  __ptr = (void *)param_1[2];
  if (*param_1 == lVar1) {
    *param_1 = (lVar1 + 1) * 2;
    __ptr = realloc(__ptr,(lVar1 + 1) * 0x10);
    if (__ptr == (void *)0x0) {
      return 0;
    }
    param_1[2] = (long)__ptr;
    lVar1 = param_1[1];
  }
  param_1[1] = lVar1 + 1;
  *(undefined *)((long)__ptr + lVar1 * 8) = param_2;
  return 1;
}


long * FUN_00406a20(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  if (*param_1 == 0) {
    *param_1 = 1;
    param_1[1] = 1;
    plVar1 = (long *)malloc(8);
    param_1[2] = (long)plVar1;
    if (plVar1 != (long *)0x0) {
      *plVar1 = param_2;
      return (long *)0x1;
    }
    param_1[1] = 0;
    *param_1 = 0;
  }
  else {
    lVar5 = param_1[1];
    plVar1 = (long *)param_1[2];
    if (lVar5 == 0) {
      *plVar1 = param_2;
      plVar1 = (long *)0x1;
      param_1[1] = param_1[1] + 1;
    }
    else {
      if (*param_1 == lVar5) {
        *param_1 = lVar5 * 2;
        plVar1 = (long *)realloc(plVar1,lVar5 << 4);
        if (plVar1 == (long *)0x0) {
          return (long *)0x0;
        }
        param_1[2] = (long)plVar1;
        lVar5 = param_1[1];
      }
      lVar4 = lVar5 * 8;
      if (*plVar1 == param_2 || *plVar1 < param_2) {
        lVar5 = plVar1[lVar5 + -1];
        while (param_2 < lVar5) {
          *(long *)((long)plVar1 + lVar4) = lVar5;
          lVar5 = *(long *)((long)plVar1 + lVar4 + -0x10);
          lVar4 = lVar4 + -8;
        }
      }
      else if (0 < lVar5) {
        plVar2 = plVar1 + lVar5;
        do {
          plVar3 = plVar2 + -1;
          *plVar2 = plVar2[-1];
          plVar2 = plVar3;
        } while (plVar3 != plVar1);
        lVar4 = 0;
      }
      *(long *)((long)plVar1 + lVar4) = param_2;
      plVar1 = (long *)0x1;
      param_1[1] = param_1[1] + 1;
    }
  }
  return plVar1;
}


undefined FUN_00406b50(long *param_1,ulong *param_2,ulong param_3)

{
  long *plVar1;
  ulong uVar2;
  char cVar3;
  void *pvVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  uVar2 = param_2[2];
  *param_2 = param_3;
  param_2[5] = 0;
  param_2[4] = uVar2;
  pvVar4 = malloc(uVar2 * 8);
  param_2[6] = (ulong)pvVar4;
  if (pvVar4 == (void *)0x0) {
    return 0xc;
  }
  uVar6 = 0;
  if (0 < (long)uVar2) {
    do {
      if (((*(byte *)(*(long *)(param_2[3] + uVar6 * 8) * 0x10 + *param_1 + 8) & 8) == 0) &&
         (cVar3 = FUN_004069b0(param_2 + 4), cVar3 == '\0')) {
        return 0xc;
      }
      uVar6 = uVar6 + 1;
    } while (param_2[2] != uVar6 && (long)uVar6 <= (long)param_2[2]);
  }
  plVar1 = (long *)(param_1[8] + (param_3 & param_1[0x11]) * 0x18);
  lVar5 = *plVar1;
  pvVar4 = (void *)plVar1[2];
  lVar7 = lVar5 + 1;
  if (plVar1[1] == lVar5 || plVar1[1] < lVar5) {
    pvVar4 = realloc(pvVar4,lVar7 * 0x10);
    if (pvVar4 == (void *)0x0) {
      return 0xc;
    }
    lVar5 = *plVar1;
    plVar1[2] = (long)pvVar4;
    plVar1[1] = lVar7 * 2;
    lVar7 = lVar5 + 1;
  }
  *plVar1 = lVar7;
  *(ulong **)((long)pvVar4 + lVar5 * 8) = param_2;
  return 0;
}


wint_t FUN_00406c50(byte param_1,long param_2)

{
  wint_t wVar1;
  
  wVar1 = btowc((uint)param_1);
  if ((wVar1 == 0xffffffff) && (wVar1 = 0xffffffff, param_2 == 0)) {
    wVar1 = (uint)param_1;
  }
  return wVar1;
}


void FUN_00406c80(long *param_1)

{
  __int32_t **pp_Var1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = param_1[0xb];
  if (param_1[8] == lVar4 || param_1[8] < lVar4) {
    lVar4 = param_1[8];
  }
  lVar3 = param_1[6];
  if (lVar3 < lVar4) {
    pp_Var1 = __ctype_toupper_loc();
    do {
      uVar2 = (ulong)*(byte *)(*param_1 + lVar3 + param_1[5]);
      if (param_1[0xf] != 0) {
        uVar2 = (ulong)*(byte *)(param_1[0xf] + uVar2);
      }
      *(char *)(param_1[1] + lVar3) = (char)(*pp_Var1)[uVar2];
      lVar3 = lVar3 + 1;
    } while (lVar4 != lVar3);
    param_1[6] = lVar4;
    param_1[7] = lVar4;
    return;
  }
  param_1[6] = lVar3;
  param_1[7] = lVar3;
  return;
}


void FUN_00406d00(long *param_1)

{
  byte bVar1;
  undefined uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  uint local_6c;
  undefined local_68 [64];
  
  lVar11 = param_1[0xb];
  lVar9 = param_1[6];
  if (param_1[8] == lVar11 || param_1[8] < lVar11) {
    lVar11 = param_1[8];
  }
  if (lVar9 < lVar11) {
    lVar8 = lVar9;
LAB_00406d30:
    do {
      lVar9 = param_1[0xf];
      lVar3 = param_1[4];
      lVar6 = lVar11 - lVar8;
      if (lVar9 == 0) {
        puVar10 = (undefined *)(param_1[5] + lVar8 + *param_1);
      }
      else {
        if (0 < *(int *)(param_1 + 0x12)) {
          lVar4 = 0;
          puVar10 = local_68;
          if (0 < lVar6) {
            while( true ) {
              uVar2 = *(undefined *)
                       (lVar9 + (ulong)*(byte *)(*param_1 + lVar8 + lVar4 + param_1[5]));
              *(undefined *)(param_1[1] + lVar8 + lVar4) = uVar2;
              puVar10[lVar4] = uVar2;
              iVar5 = (int)lVar4 + 1;
              if ((*(int *)(param_1 + 0x12) == iVar5 || *(int *)(param_1 + 0x12) < iVar5) ||
                 (lVar4 = lVar4 + 1, lVar6 == lVar4)) break;
              lVar9 = param_1[0xf];
            }
            goto LAB_00406d51;
          }
        }
        puVar10 = local_68;
      }
LAB_00406d51:
      lVar6 = FUN_00406400(&local_6c,puVar10,lVar6,param_1 + 4);
      if (lVar6 - 1U < 0xfffffffffffffffe) {
        if (lVar6 == -2) {
          if (param_1[0xb] <= param_1[8]) goto LAB_00406dd0;
          param_1[4] = lVar3;
          lVar9 = lVar8;
          break;
        }
      }
      else {
LAB_00406dd0:
        bVar1 = *(byte *)(*param_1 + lVar8 + param_1[5]);
        if (param_1[0xf] != 0) {
          bVar1 = *(byte *)(param_1[0xf] + (ulong)bVar1);
        }
        local_6c = (uint)bVar1;
        param_1[4] = lVar3;
        lVar6 = 1;
      }
      lVar3 = param_1[2];
      lVar9 = lVar8 + 1;
      *(uint *)(lVar3 + lVar8 * 4) = local_6c;
      lVar6 = lVar8 + lVar6;
      if (lVar6 <= lVar9) {
        lVar8 = lVar9;
        if (lVar11 <= lVar9) break;
        goto LAB_00406d30;
      }
      puVar7 = (undefined *)(lVar3 + 4 + lVar8 * 4);
      do {
        *puVar7 = 0xffffffff;
        puVar7 = puVar7 + 1;
      } while ((undefined *)(lVar3 + lVar6 * 4) != puVar7);
      lVar8 = lVar6;
      lVar9 = lVar6;
    } while (lVar6 < lVar11);
  }
  param_1[6] = lVar9;
  param_1[7] = lVar9;
  return;
}


undefined FUN_00406eb0(long *param_1)

{
  wchar_t *pwVar1;
  ulong *puVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  wchar_t wVar6;
  wchar_t wVar7;
  int iVar8;
  ulong uVar9;
  size_t sVar10;
  __int32_t **pp_Var11;
  ulong uVar12;
  void *pvVar13;
  undefined *puVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  byte *pbVar18;
  ulong uVar19;
  ulong uVar20;
  mbstate_t *local_a8;
  char *local_a0;
  ulong local_98;
  wchar_t *local_90;
  wchar_t local_84;
  mbstate_t local_80;
  char local_78 [72];
  
  lVar17 = param_1[0xb];
  if (param_1[8] == lVar17 || param_1[8] < lVar17) {
    lVar17 = param_1[8];
  }
  if (((*(char *)((long)param_1 + 0x8a) != '\0') || (param_1[0xf] != 0)) ||
     (uVar19 = param_1[6], *(char *)((long)param_1 + 0x8c) != '\0')) {
    uVar12 = param_1[7];
    uVar20 = param_1[6];
    goto LAB_00406eea;
  }
joined_r0x00407060:
  do {
    if (lVar17 <= (long)uVar19) {
LAB_00407163:
      param_1[6] = uVar19;
      param_1[7] = uVar19;
      return 0;
    }
    local_a8 = (mbstate_t *)(param_1 + 4);
    pbVar18 = (byte *)(param_1[5] + uVar19 + *param_1);
    bVar3 = *pbVar18;
    if (((bVar3 & 0x80) == 0) && (iVar8 = mbsinit(local_a8), iVar8 != 0)) {
      pp_Var11 = __ctype_toupper_loc();
      *(char *)(param_1[1] + uVar19) = (char)(*pp_Var11)[bVar3];
      *(uint *)(param_1[2] + uVar19 * 4) = (uint)*(byte *)(param_1[1] + uVar19);
      uVar19 = uVar19 + 1;
      goto joined_r0x00407060;
    }
    local_80 = *(mbstate_t *)(param_1 + 4);
    local_98 = lVar17 - uVar19;
    uVar12 = FUN_00406400(&local_84,pbVar18,local_98,local_a8);
    wVar6 = local_84;
    if (uVar12 < 0xfffffffffffffffe) {
      wVar7 = towupper(local_84);
      if (wVar6 == wVar7) {
        memcpy((void *)(param_1[1] + uVar19),(void *)(param_1[5] + uVar19 + *param_1),uVar12);
      }
      else {
        sVar10 = wcrtomb(local_78,wVar7,&local_80);
        uVar20 = uVar19;
        if (uVar12 != sVar10) break;
        memcpy((void *)(param_1[1] + uVar19),local_78,uVar12);
      }
      lVar15 = param_1[2];
      lVar4 = uVar19 * 4;
      uVar20 = uVar19 + 1;
      *(wchar_t *)(lVar15 + uVar19 * 4) = wVar7;
      uVar12 = uVar19 + uVar12;
      uVar19 = uVar20;
      if ((long)uVar20 < (long)uVar12) {
        puVar14 = (undefined *)(lVar15 + 4 + lVar4);
        do {
          *puVar14 = 0xffffffff;
          puVar14 = puVar14 + 1;
          uVar19 = uVar12;
        } while ((undefined *)(lVar15 + uVar12 * 4) != puVar14);
      }
    }
    else if (uVar12 == 0xfffffffffffffffe) {
      if (param_1[8] < param_1[0xb]) {
        *(mbstate_t *)(param_1 + 4) = local_80;
        goto LAB_00407163;
      }
      bVar3 = *(byte *)(*param_1 + uVar19 + param_1[5]);
      *(byte *)(param_1[1] + uVar19) = bVar3;
      *(uint *)(param_1[2] + uVar19 * 4) = (uint)bVar3;
      uVar19 = uVar19 + 1;
    }
    else {
      bVar3 = *(byte *)(*param_1 + uVar19 + param_1[5]);
      *(byte *)(param_1[1] + uVar19) = bVar3;
      *(uint *)(param_1[2] + uVar19 * 4) = (uint)bVar3;
      *(mbstate_t *)(param_1 + 4) = local_80;
      uVar19 = uVar19 + 1;
    }
  } while( true );
LAB_00406f10:
  local_90 = &local_84;
  local_80 = *(mbstate_t *)(param_1 + 4);
  lVar4 = param_1[0xf];
  if (lVar4 == 0) {
    local_a0 = (char *)(param_1[5] + uVar19 + *param_1);
  }
  else {
    iVar8 = *(int *)(param_1 + 0x12);
    if ((0 < iVar8) && (0 < (long)local_98)) {
      lVar15 = param_1[5];
      uVar12 = 0;
      lVar5 = *param_1;
      do {
        local_78[uVar12] = *(char *)(lVar4 + (ulong)*(byte *)(lVar15 + uVar19 + lVar5 + uVar12));
        if (iVar8 - 1 == uVar12) break;
        uVar12 = uVar12 + 1;
      } while (local_98 != uVar12);
    }
    local_a0 = local_78;
  }
  uVar9 = FUN_00406400(local_90,local_a0,local_98,(mbstate_t *)(param_1 + 4));
  wVar6 = local_84;
  if (uVar9 < 0xfffffffffffffffe) {
    wVar7 = towupper(local_84);
    if (wVar6 == wVar7) {
LAB_00407298:
      memcpy((void *)(param_1[1] + uVar20),local_a0,uVar9);
    }
    else {
      sVar10 = wcrtomb(local_78,wVar7,&local_80);
      if (uVar9 != sVar10) {
        if (sVar10 != 0xffffffffffffffff) {
          if ((ulong)param_1[8] < uVar20 + sVar10) goto LAB_0040701f;
          if (param_1[3] == 0) {
            pvVar13 = malloc(param_1[8] * 8);
            param_1[3] = (long)pvVar13;
            if (pvVar13 == (void *)0x0) {
              return 0xc;
            }
          }
          if (*(char *)((long)param_1 + 0x8c) == '\0') {
            if (uVar20 != 0) {
              lVar17 = param_1[3];
              uVar12 = 0;
              do {
                *(ulong *)(lVar17 + uVar12 * 8) = uVar12;
                uVar12 = uVar12 + 1;
              } while (uVar20 != uVar12);
            }
            *(undefined *)((long)param_1 + 0x8c) = 1;
          }
          memcpy((void *)(param_1[1] + uVar20),local_78,sVar10);
          pwVar1 = (wchar_t *)(param_1[2] + uVar20 * 4);
          lVar17 = param_1[3];
          *pwVar1 = wVar7;
          puVar2 = (ulong *)(lVar17 + uVar20 * 8);
          uVar12 = 1;
          *puVar2 = uVar19;
          if (1 < sVar10) {
            do {
              uVar16 = uVar12;
              if (uVar9 <= uVar12) {
                uVar16 = uVar9 - 1;
              }
              puVar2[uVar12] = uVar16 + uVar19;
              pwVar1[uVar12] = L'\xffffffff';
              uVar12 = uVar12 + 1;
            } while (uVar12 != sVar10);
          }
          lVar17 = param_1[0xb] + (sVar10 - uVar9);
          param_1[0xb] = lVar17;
          if ((long)uVar19 < param_1[0xc]) {
            param_1[0xd] = param_1[0xd] + (sVar10 - uVar9);
          }
          if (param_1[8] == lVar17 || param_1[8] < lVar17) {
            lVar17 = param_1[8];
          }
          uVar12 = uVar19 + uVar9;
          uVar20 = uVar20 + sVar10;
          goto LAB_00406eea;
        }
        goto LAB_00407298;
      }
      memcpy((void *)(param_1[1] + uVar20),local_78,uVar9);
    }
    if (*(char *)((long)param_1 + 0x8c) == '\0') {
      uVar12 = uVar19 + uVar9;
    }
    else {
      uVar12 = uVar19;
      if (uVar9 != 0) {
        lVar4 = param_1[3];
        uVar12 = uVar9 + uVar19;
        lVar15 = uVar20 - uVar19;
        do {
          *(ulong *)(lVar4 + lVar15 * 8 + uVar19 * 8) = uVar19;
          uVar19 = uVar19 + 1;
        } while (uVar12 != uVar19);
      }
    }
    lVar15 = param_1[2];
    uVar19 = uVar20 + 1;
    uVar9 = uVar20 + uVar9;
    lVar4 = uVar20 * 4;
    *(wchar_t *)(lVar15 + uVar20 * 4) = wVar7;
    uVar20 = uVar19;
    if ((long)uVar19 < (long)uVar9) {
      puVar14 = (undefined *)(lVar15 + 4 + lVar4);
      do {
        *puVar14 = 0xffffffff;
        puVar14 = puVar14 + 1;
        uVar20 = uVar9;
      } while ((undefined *)(lVar15 + uVar9 * 4) != puVar14);
    }
  }
  else {
    if ((uVar9 == 0xfffffffffffffffe) && (param_1[8] < param_1[0xb])) {
LAB_0040701f:
      *(mbstate_t *)(param_1 + 4) = local_80;
LAB_00407030:
      param_1[6] = uVar20;
      param_1[7] = uVar19;
      return 0;
    }
    bVar3 = *(byte *)(*param_1 + uVar19 + param_1[5]);
    if (param_1[0xf] != 0) {
      bVar3 = *(byte *)(param_1[0xf] + (ulong)bVar3);
    }
    *(byte *)(param_1[1] + uVar20) = bVar3;
    if (*(char *)((long)param_1 + 0x8c) != '\0') {
      *(ulong *)(param_1[3] + uVar20 * 8) = uVar19;
    }
    uVar12 = uVar19 + 1;
    uVar19 = uVar20 + 1;
    *(uint *)(param_1[2] + uVar20 * 4) = (uint)bVar3;
    uVar20 = uVar19;
    if (uVar9 == 0xffffffffffffffff) {
      *(mbstate_t *)(param_1 + 4) = local_80;
    }
  }
LAB_00406eea:
  uVar19 = uVar12;
  if (lVar17 <= (long)uVar20) goto LAB_00407030;
  local_98 = lVar17 - uVar20;
  goto LAB_00406f10;
}


ulong FUN_004074b0(long *param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  if (0xffffffffffffffe < (ulong)param_1[8]) {
    return 0xc;
  }
  lVar2 = param_1[8] * 2;
  if (param_1[0xb] < lVar2) {
    lVar2 = param_1[0xb];
  }
  lVar6 = (long)param_2;
  if (param_2 <= lVar2) {
    lVar6 = lVar2;
  }
  uVar1 = FUN_00406910(param_1,lVar6);
  uVar4 = (ulong)uVar1;
  if (uVar1 == 0) {
    if ((void *)param_1[0x17] != (void *)0x0) {
      pvVar3 = realloc((void *)param_1[0x17],param_1[8] * 8 + 8);
      if (pvVar3 == (void *)0x0) {
        return 0xc;
      }
      param_1[0x17] = (long)pvVar3;
    }
    if (*(char *)(param_1 + 0x11) != '\0') {
      if (*(int *)(param_1 + 0x12) < 2) {
        FUN_00406c80(param_1);
        return uVar4;
      }
      uVar4 = FUN_00406eb0();
      return uVar4;
    }
    if (1 < *(int *)(param_1 + 0x12)) {
      FUN_00406d00(param_1);
      return uVar4;
    }
    lVar2 = param_1[0xf];
    if (lVar2 != 0) {
      lVar6 = param_1[0xb];
      lVar5 = param_1[6];
      if (param_1[8] == lVar6 || param_1[8] < lVar6) {
        lVar6 = param_1[8];
      }
      if (lVar5 < lVar6) {
        while( true ) {
          *(undefined *)(param_1[1] + lVar5) =
               *(undefined *)(lVar2 + (ulong)*(byte *)(*param_1 + lVar5 + param_1[5]));
          lVar5 = lVar5 + 1;
          if (lVar6 == lVar5) break;
          lVar2 = param_1[0xf];
        }
        param_1[6] = lVar6;
        param_1[7] = lVar6;
      }
      else {
        param_1[6] = lVar5;
        param_1[7] = lVar5;
      }
    }
  }
  return uVar4;
}


undefined FUN_00407600(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  undefined uVar3;
  
  lVar1 = *(long *)(param_1 + 0xc0);
  if ((param_2 < *(long *)(param_1 + 0x40)) ||
     (*(long *)(param_1 + 0x58) <= *(long *)(param_1 + 0x40))) {
    if ((param_2 < *(long *)(param_1 + 0x30)) ||
       (*(long *)(param_1 + 0x58) <= *(long *)(param_1 + 0x30))) goto LAB_0040762f;
    uVar3 = FUN_004074b0(param_1);
    iVar2 = (int)uVar3;
  }
  else {
    uVar3 = FUN_004074b0(param_1);
    iVar2 = (int)uVar3;
  }
  if (iVar2 != 0) {
    return uVar3;
  }
LAB_0040762f:
  if (lVar1 < param_2) {
    memset((void *)(*(long *)(param_1 + 0xb8) + 8 + lVar1 * 8),0,(param_2 - lVar1) * 8);
    *(long *)(param_1 + 0xc0) = param_2;
  }
  return 0;
}


void FUN_00407690(void **param_1)

{
  free(*param_1);
  free(param_1[3]);
  free(param_1);
  return;
}


void FUN_004076b0(void **param_1)

{
  if ((*(uint *)(param_1 + 1) & 0x400ff) == 6) {
    FUN_00407690(*param_1);
    return;
  }
  if ((*(uint *)(param_1 + 1) & 0x400ff) != 3) {
    return;
  }
  free(*param_1);
  return;
}


undefined FUN_004076e0(undefined param_1,long param_2)

{
  FUN_004076b0(param_2 + 0x28);
  return 0;
}


void * FUN_00407700(void **param_1,undefined param_2,undefined param_3)

{
  undefined (*pauVar1) [16];
  void *pvVar2;
  undefined *puVar3;
  void *pvVar4;
  void *__ptr;
  void *__ptr_00;
  void *__ptr_01;
  void *__ptr_02;
  bool bVar5;
  
  pvVar4 = param_1[2];
  pvVar2 = param_1[1];
  if (pvVar4 < pvVar2) {
    __ptr = param_1[3];
    __ptr_01 = param_1[5];
LAB_0040772d:
    puVar3 = (undefined *)((long)pvVar4 * 0x10 + (long)*param_1);
    bVar5 = (char)param_3 == '\x06';
    puVar3[1] = param_3;
    *puVar3 = param_2;
    *(uint *)(puVar3 + 1) = (uint)param_3 & 0xfffc00ff;
    if ((char)param_3 == '\x05') {
      bVar5 = 1 < *(int *)((long)param_1 + 0xb4);
    }
    *(byte *)((long)puVar3 + 10) = *(byte *)((long)puVar3 + 10) & 0xef | bVar5 << 4;
    *(undefined *)((long)__ptr + (long)pvVar4 * 8) = 0xffffffffffffffff;
    pauVar1 = (undefined (*) [16])((long)__ptr_01 + (long)param_1[2] * 0x18);
    *pauVar1 = (undefined)0x0;
    *(undefined *)pauVar1[1] = 0;
    pauVar1 = (undefined (*) [16])((long)param_1[6] + (long)param_1[2] * 0x18);
    *pauVar1 = (undefined)0x0;
    *(undefined *)pauVar1[1] = 0;
    pvVar4 = param_1[2];
    param_1[2] = (void *)((long)pvVar4 + 1);
  }
  else {
    if ((void *)((long)pvVar2 * 2) < (void *)0xaaaaaaaaaaaaaab) {
      pvVar4 = realloc(*param_1,(long)pvVar2 << 5);
      if (pvVar4 != (void *)0x0) {
        *param_1 = pvVar4;
        __ptr = realloc(param_1[3],(long)pvVar2 << 4);
        __ptr_00 = realloc(param_1[4],(long)pvVar2 << 4);
        __ptr_01 = realloc(param_1[5],(long)pvVar2 * 0x30);
        __ptr_02 = realloc(param_1[6],(long)pvVar2 * 0x30);
        if ((((__ptr != (void *)0x0) && (__ptr_00 != (void *)0x0)) && (__ptr_01 != (void *)0x0)) &&
           (__ptr_02 != (void *)0x0)) {
          param_1[3] = __ptr;
          pvVar4 = param_1[2];
          param_1[4] = __ptr_00;
          param_1[5] = __ptr_01;
          param_1[6] = __ptr_02;
          param_1[1] = (void *)((long)pvVar2 * 2);
          goto LAB_0040772d;
        }
        free(__ptr);
        free(__ptr_00);
        free(__ptr_01);
        free(__ptr_02);
      }
    }
    pvVar4 = (void *)0xffffffffffffffff;
  }
  return pvVar4;
}


void FUN_004078d0(long *param_1,long param_2,ushort param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = param_2 * 0x10;
  lVar2 = FUN_00407700(param_1,*(undefined *)(*param_1 + lVar5),
                       *(undefined *)(*param_1 + 8 + lVar5));
  if (lVar2 != -1) {
    lVar1 = *param_1;
    lVar4 = lVar2 * 0x10 + lVar1;
    uVar3 = *(uint *)(lVar4 + 8) & 0xfffc00ff;
    *(uint *)(lVar4 + 8) = uVar3 | (uint)(param_3 & 0x3ff) << 8;
    uVar3 = (*(uint *)(lVar1 + 8 + lVar5) >> 8 & 0x3ff | (uint)(param_3 & 0x3ff)) << 8 | uVar3;
    *(uint *)(lVar4 + 8) = uVar3;
    *(byte *)(lVar4 + 10) = (byte)(uVar3 >> 0x10) | 4;
    *(long *)(param_1[4] + lVar2 * 8) = param_2;
  }
  return;
}


undefined FUN_00407970(long *param_1,long param_2,long param_3,long param_4,uint param_5)

{
  long lVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  undefined uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long local_48;
  
  do {
    lVar6 = *param_1;
    lVar8 = param_1[5];
    lVar4 = param_2 * 0x10 + lVar6;
    if (*(char *)(lVar4 + 8) == '\x04') {
      local_48 = *(long *)(param_1[3] + param_2 * 8);
      *(undefined *)(lVar8 + 8 + param_3 * 0x18) = 0;
      lVar6 = FUN_004078d0(param_1,local_48,param_5);
      if (lVar6 == -1) {
        return 0xc;
      }
      *(undefined *)(param_1[3] + param_3 * 8) = *(undefined *)(param_1[3] + param_2 * 8);
LAB_00407a8a:
      cVar3 = FUN_00406a20(param_1[5] + param_3 * 0x18,lVar6);
      param_3 = lVar6;
      param_2 = local_48;
    }
    else {
      lVar1 = lVar8 + param_2 * 0x18;
      lVar2 = *(long *)(lVar1 + 8);
      if (lVar2 == 0) {
        *(undefined *)(param_1[3] + param_3 * 8) = *(undefined *)(param_1[3] + param_2 * 8);
        return 0;
      }
      lVar7 = param_3 * 0x18;
      lVar1 = **(long **)(lVar1 + 0x10);
      *(undefined *)(lVar8 + lVar7 + 8) = 0;
      if (lVar2 != 1) {
        lVar8 = param_1[2] + -1;
        lVar4 = lVar8 * 0x10 + lVar6;
        if (((*(byte *)(lVar4 + 10) & 4) != 0) && (0 < lVar8)) {
          lVar6 = lVar6 - lVar4;
          do {
            if ((*(long *)(param_1[4] + lVar8 * 8) == lVar1) &&
               (param_5 == (*(uint *)(lVar4 + 8) >> 8 & 0x3ff))) {
              cVar3 = FUN_00406a20();
              if (cVar3 == '\0') {
                return 0xc;
              }
              goto LAB_00407a62;
            }
            lVar4 = lVar4 + lVar6 + -0x20 + param_1[2] * 0x10;
            lVar8 = lVar8 + -1;
          } while (((*(byte *)(lVar4 + 10) & 4) != 0) && (0 < lVar8));
        }
        lVar6 = FUN_004078d0(param_1,lVar1,param_5);
        if (lVar6 == -1) {
          return 0xc;
        }
        cVar3 = FUN_00406a20(param_1[5] + lVar7,lVar6);
        if (cVar3 == '\0') {
          return 0xc;
        }
        uVar5 = FUN_00407970(param_1,lVar1,lVar6,param_4,param_5);
        if ((int)uVar5 != 0) {
          return uVar5;
        }
LAB_00407a62:
        local_48 = *(long *)(*(long *)(param_1[5] + 0x10 + param_2 * 0x18) + 8);
        lVar6 = FUN_004078d0(param_1,local_48,param_5);
        if (lVar6 == -1) {
          return 0xc;
        }
        goto LAB_00407a8a;
      }
      if ((param_2 == param_4) && (param_2 != param_3)) {
        cVar3 = FUN_00406a20(lVar8 + lVar7,lVar1);
        if (cVar3 == '\0') {
          return 0xc;
        }
        return 0;
      }
      param_5 = param_5 | *(uint *)(lVar4 + 8) >> 8 & 0x3ff;
      param_3 = FUN_004078d0(param_1,lVar1,param_5);
      if (param_3 == -1) {
        return 0xc;
      }
      cVar3 = FUN_00406a20(param_1[5] + lVar7,param_3);
      param_2 = lVar1;
    }
    if (cVar3 == '\0') {
      return 0xc;
    }
  } while( true );
}


void FUN_00407c00(void *param_1)

{
  free(*(void **)((long)param_1 + 0x30));
  free(*(void **)((long)param_1 + 0x48));
  if (*(long *)((long)param_1 + 0x50) != (long)param_1 + 8) {
    free(*(void **)(*(long *)((long)param_1 + 0x50) + 0x10));
    free(*(void **)((long)param_1 + 0x50));
  }
  free(*(void **)((long)param_1 + 0x18));
  free(*(void **)((long)param_1 + 0x60));
  free(*(void **)((long)param_1 + 0x58));
  free(param_1);
  return;
}


void FUN_00407c60(long param_1)

{
  free(*(void **)(param_1 + 0x10));
  free(*(void **)(param_1 + 0x18));
  if (*(char *)(param_1 + 0x8b) == '\0') {
    return;
  }
  free(*(void **)(param_1 + 8));
  return;
}


void FUN_00407ca0(long param_1)

{
  void *__ptr;
  void *__ptr_00;
  long lVar1;
  long lVar2;
  
  if (0 < *(long *)(param_1 + 0xe8)) {
    lVar2 = 0;
    do {
      __ptr = *(void **)(*(long *)(param_1 + 0xf8) + lVar2 * 8);
      if (0 < *(long *)((long)__ptr + 0x20)) {
        lVar1 = 0;
        do {
          __ptr_00 = *(void **)(*(long *)((long)__ptr + 0x28) + lVar1 * 8);
          lVar1 = lVar1 + 1;
          free(*(void **)((long)__ptr_00 + 0x20));
          free(__ptr_00);
        } while (*(long *)((long)__ptr + 0x20) != lVar1 && lVar1 <= *(long *)((long)__ptr + 0x20));
      }
      free(*(void **)((long)__ptr + 0x28));
      if (*(long *)((long)__ptr + 0x10) != 0) {
        free(*(void **)(*(long *)((long)__ptr + 0x10) + 0x10));
        free(*(void **)((long)__ptr + 0x10));
      }
      lVar2 = lVar2 + 1;
      free(__ptr);
    } while (*(long *)(param_1 + 0xe8) != lVar2 && lVar2 <= *(long *)(param_1 + 0xe8));
  }
  *(undefined *)(param_1 + 0xe8) = 0;
  *(undefined *)(param_1 + 200) = 0;
  return;
}


undefined FUN_00407d60(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined uVar3;
  long *plVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  
  lVar2 = *(long *)(param_2 + 0x38);
  switch(*(byte *)(param_2 + 0x30)) {
  default:
    if ((*(byte *)(param_2 + 0x30) & 8) != 0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("!IS_EPSILON_NODE (node->token.type)","lib/regcomp.c",0x5cc,"link_nfa_nodes");
    }
    *(undefined *)(*(long *)(param_1 + 0x18) + lVar2 * 8) =
         *(undefined *)(*(long *)(param_2 + 0x20) + 0x38);
    break;
  case 2:
    if (*(long *)(param_2 + 0x20) != 0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("node->next == NULL","lib/regcomp.c",0x5a9,"link_nfa_nodes");
    }
    break;
  case 4:
    uVar3 = *(undefined *)(*(long *)(param_2 + 0x20) + 0x38);
    *(undefined *)(*(long *)(param_1 + 0x18) + lVar2 * 8) = uVar3;
    if (*(char *)(param_2 + 0x30) == '\x04') {
      puVar1 = (undefined *)(*(long *)(param_1 + 0x28) + lVar2 * 0x18);
      *puVar1 = 1;
      puVar1[1] = 1;
      puVar5 = (undefined *)malloc(8);
      puVar1[2] = puVar5;
      if (puVar5 != (undefined *)0x0) {
        *puVar5 = uVar3;
        return 0;
      }
      puVar1[1] = 0;
      *puVar1 = 0;
      return 0xc;
    }
    break;
  case 8:
  case 9:
  case 0xc:
    uVar3 = *(undefined *)(*(long *)(param_2 + 0x20) + 0x38);
    puVar1 = (undefined *)(*(long *)(param_1 + 0x28) + lVar2 * 0x18);
    *puVar1 = 1;
    puVar1[1] = 1;
    puVar5 = (undefined *)malloc(8);
    puVar1[2] = puVar5;
    if (puVar5 == (undefined *)0x0) {
      puVar1[1] = 0;
      *puVar1 = 0;
      return 0xc;
    }
    *puVar5 = uVar3;
    return 0;
  case 10:
  case 0xb:
    *(byte *)(param_1 + 0xb0) = *(byte *)(param_1 + 0xb0) | 1;
    if (*(long *)(param_2 + 8) == 0) {
      lVar6 = *(long *)(*(long *)(param_2 + 0x20) + 0x38);
    }
    else {
      lVar6 = *(long *)(*(long *)(*(long *)(param_2 + 8) + 0x18) + 0x38);
    }
    if (*(long *)(param_2 + 0x10) == 0) {
      lVar7 = *(long *)(*(long *)(param_2 + 0x20) + 0x38);
    }
    else {
      lVar7 = *(long *)(*(long *)(*(long *)(param_2 + 0x10) + 0x18) + 0x38);
    }
    if (lVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("left > -1","lib/regcomp.c",0x5b9,"link_nfa_nodes");
    }
    if (lVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("right > -1","lib/regcomp.c",0x5ba,"link_nfa_nodes");
    }
    puVar1 = (undefined *)(*(long *)(param_1 + 0x28) + lVar2 * 0x18);
    *puVar1 = 2;
    plVar4 = (long *)malloc(0x10);
    puVar1[2] = plVar4;
    if (plVar4 != (long *)0x0) {
      if (lVar6 == lVar7) {
        puVar1[1] = 1;
        *plVar4 = lVar6;
        return 0;
      }
      puVar1[1] = 2;
      if (lVar6 < lVar7) {
        *plVar4 = lVar6;
        plVar4[1] = lVar7;
        return 0;
      }
      *plVar4 = lVar7;
      plVar4[1] = lVar6;
      return 0;
    }
    return 0xc;
  case 0x10:
    break;
  }
  return 0;
}


ulong FUN_00407fe0(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  lVar1 = param_2 + 1;
  if (lVar1 < *(long *)(param_1 + 0x30)) {
    if (*(int *)(*(long *)(param_1 + 0x10) + lVar1 * 4) == -1) {
      uVar3 = 2;
      do {
        uVar2 = uVar3 & 0xffffffff;
        if (uVar3 == *(long *)(param_1 + 0x30) - param_2) {
          return uVar2;
        }
        uVar3 = uVar3 + 1;
      } while (*(int *)(*(long *)(param_1 + 0x10) + lVar1 * 4 + -8 + uVar3 * 4) == -1);
      return uVar2;
    }
  }
  return 1;
}


long FUN_00408030(long param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (0 < param_1) {
    lVar1 = *param_2;
    uVar6 = param_1 - 1;
    uVar5 = 0;
    while (uVar5 < uVar6) {
      uVar4 = uVar5 + uVar6 >> 1;
      lVar2 = *(long *)(lVar1 + uVar4 * 8);
      while (uVar3 = uVar4, param_3 <= lVar2) {
        if (uVar3 <= uVar5) goto LAB_0040806d;
        uVar4 = uVar5 + uVar3 >> 1;
        lVar2 = *(long *)(lVar1 + uVar4 * 8);
        uVar6 = uVar3;
      }
      uVar5 = uVar3 + 1;
    }
LAB_0040806d:
    if (param_3 == *(long *)(lVar1 + uVar5 * 8)) {
      return uVar5 + 1;
    }
  }
  return 0;
}


undefined FUN_004080a0(long *param_1,long param_2,long param_3,long param_4,uint param_5)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  undefined uVar4;
  long lVar5;
  
  while( true ) {
    lVar2 = FUN_00408030(*(undefined *)(param_2 + 8),param_2 + 0x10,param_3);
    if (lVar2 != 0) {
      return 0;
    }
    plVar3 = (long *)(param_3 * 0x10 + *param_1);
    if ((*(byte *)(plVar3 + 1) == param_5) && (*plVar3 == param_4)) {
      if (param_5 != 9) {
        return 0;
      }
      cVar1 = FUN_00406a20(param_2,param_3);
      if (cVar1 == '\0') {
        return 0xc;
      }
      return 0;
    }
    cVar1 = FUN_00406a20(param_2,param_3);
    if (cVar1 == '\0') {
      return 0xc;
    }
    lVar5 = param_1[5] + param_3 * 0x18;
    lVar2 = *(long *)(lVar5 + 8);
    if (lVar2 == 0) break;
    plVar3 = *(long **)(lVar5 + 0x10);
    if (lVar2 == 2) {
      uVar4 = FUN_004080a0(param_1,param_2,plVar3[1],param_4,param_5);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      plVar3 = *(long **)(param_1[5] + 0x10 + param_3 * 0x18);
    }
    param_3 = *plVar3;
  }
  return 0;
}


void FUN_004081a0(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  
  if (param_3 < *param_1) {
    lVar1 = *param_2;
    do {
      *(undefined *)(lVar1 + param_3 * 8) = *(undefined *)(lVar1 + 8 + param_3 * 8);
      param_3 = param_3 + 1;
    } while (param_3 < *param_1);
  }
  return;
}


undefined FUN_004081d0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined uVar4;
  byte bVar5;
  
  if (*(char *)(param_2 + 0x30) == '\x04') {
    if (*(long *)(param_1 + 0xe0) != 0) {
      uVar4 = *(undefined *)(*(long *)(param_1 + 0xe0) + (long)*(int *)(param_2 + 0x28) * 8);
      *(undefined *)(param_2 + 0x28) = uVar4;
      *(ulong *)(param_1 + 0xa0) = *(ulong *)(param_1 + 0xa0) | (long)(1 << ((byte)uVar4 & 0x1f));
      return 0;
    }
  }
  else if (((*(char *)(param_2 + 0x30) == '\x11') && (lVar1 = *(long *)(param_2 + 8), lVar1 != 0))
          && (*(char *)(lVar1 + 0x30) == '\x11')) {
    lVar2 = *(long *)(lVar1 + 0x28);
    plVar3 = *(long **)(lVar1 + 8);
    *(long **)(param_2 + 8) = plVar3;
    if (plVar3 != (long *)0x0) {
      *plVar3 = param_2;
    }
    *(undefined *)(*(long *)(param_1 + 0xe0) + lVar2 * 8) =
         *(undefined *)(*(long *)(param_1 + 0xe0) + *(long *)(param_2 + 0x28) * 8);
    if (lVar2 < 0x40) {
      bVar5 = (byte)lVar2 & 0x3f;
      *(ulong *)(param_1 + 0xa0) =
           *(ulong *)(param_1 + 0xa0) & (-2L << bVar5 | 0xfffffffffffffffeU >> 0x40 - bVar5);
    }
  }
  return 0;
}


undefined FUN_00408260(undefined param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_2 + 8);
  if (*(char *)(param_2 + 0x30) == '\v') {
    *(long *)(lVar1 + 0x20) = param_2;
    return 0;
  }
  if (*(char *)(param_2 + 0x30) != '\x10') {
    if (lVar1 != 0) {
      *(undefined *)(lVar1 + 0x20) = *(undefined *)(param_2 + 0x20);
    }
    if (*(long *)(param_2 + 0x10) != 0) {
      *(undefined *)(*(long *)(param_2 + 0x10) + 0x20) = *(undefined *)(param_2 + 0x20);
    }
    return 0;
  }
  lVar2 = *(long *)(param_2 + 0x10);
  *(undefined *)(lVar1 + 0x20) = *(undefined *)(lVar2 + 0x18);
  *(undefined *)(lVar2 + 0x20) = *(undefined *)(param_2 + 0x20);
  return 0;
}


undefined
FUN_004082c0(long param_1,long *param_2,long *param_3,undefined param_4,long param_5,
            undefined param_6,long param_7)

{
  long *plVar1;
  undefined uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  plVar1 = *(long **)(param_1 + 0x98);
  lVar11 = *(long *)(param_1 + 200);
  lVar7 = 0;
  lVar8 = lVar11;
  while (lVar7 < lVar8) {
    lVar9 = (lVar7 + lVar8) / 2;
    lVar6 = *(long *)(*(long *)(param_1 + 0xd8) + 8 + lVar9 * 0x28);
    while (lVar10 = lVar9, param_5 <= lVar6) {
      if (lVar10 <= lVar7) goto LAB_0040834b;
      lVar9 = (lVar7 + lVar10) / 2;
      lVar6 = *(long *)(*(long *)(param_1 + 0xd8) + 8 + lVar9 * 0x28);
      lVar8 = lVar10;
    }
    lVar7 = lVar10 + 1;
  }
LAB_0040834b:
  if (lVar7 < lVar11) {
    if (param_5 != *(long *)(*(long *)(param_1 + 0xd8) + lVar7 * 0x28 + 8)) {
      lVar7 = -1;
    }
  }
  else {
    lVar7 = -1;
  }
  lVar8 = 0;
  lVar6 = lVar11;
  while (lVar8 < lVar6) {
    lVar10 = (lVar8 + lVar6) / 2;
    lVar9 = *(long *)(*(long *)(param_1 + 0xd8) + 8 + lVar10 * 0x28);
    while (lVar3 = lVar10, param_7 <= lVar9) {
      if (lVar3 <= lVar8) goto LAB_004083d4;
      lVar10 = (lVar8 + lVar3) / 2;
      lVar9 = *(long *)(*(long *)(param_1 + 0xd8) + 8 + lVar10 * 0x28);
      lVar6 = lVar3;
    }
    lVar8 = lVar3 + 1;
  }
LAB_004083d4:
  if (lVar8 < lVar11) {
    if (param_7 != *(long *)(*(long *)(param_1 + 0xd8) + lVar8 * 0x28 + 8)) {
      lVar8 = -1;
    }
  }
  else {
    lVar8 = -1;
  }
  if (0 < *param_2) {
    lVar11 = 0;
    do {
      lVar6 = *(long *)(*param_3 + lVar11 * 8);
      uVar2 = *(undefined *)(*(long *)(*(long *)(param_1 + 0xd8) + lVar6 * 0x28) * 0x10 + *plVar1);
      iVar4 = FUN_004068a0(param_1,lVar6,uVar2,param_4,param_5,lVar7);
      iVar5 = FUN_004068a0(param_1,*(undefined *)(*param_3 + lVar11 * 8),uVar2,param_6,param_7,
                           lVar8);
      if (iVar4 != iVar5) {
        return 1;
      }
      lVar11 = lVar11 + 1;
    } while (lVar11 < *param_2);
  }
  return 0;
}


void FUN_00408510(long *param_1,code *param_2,undefined param_3)

{
  long **pplVar1;
  long *plVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  
  do {
    do {
      iVar3 = (*param_2)(param_3,param_1);
      if (iVar3 != 0) {
        return;
      }
      pplVar1 = (long **)(param_1 + 1);
      plVar4 = (long *)0x0;
      plVar5 = param_1;
      param_1 = *pplVar1;
    } while (*pplVar1 != (long *)0x0);
    while ((param_1 = (long *)plVar5[2], param_1 == plVar4 || (param_1 == (long *)0x0))) {
      plVar2 = (long *)*plVar5;
      plVar4 = plVar5;
      plVar5 = plVar2;
      if (plVar2 == (long *)0x0) {
        return;
      }
    }
  } while( true );
}


undefined FUN_00408570(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  void *pvVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  
  if ((param_2 != 0) && (lVar11 = *(long *)(param_2 + 8), lVar11 != 0)) {
    lVar7 = param_1[1];
    if (*param_1 < lVar7 + lVar11 * 2) {
      lVar11 = lVar11 + *param_1;
      pvVar6 = realloc((void *)param_1[2],lVar11 * 0x10);
      if (pvVar6 == (void *)0x0) {
        return 0xc;
      }
      lVar7 = param_1[1];
      param_1[2] = (long)pvVar6;
      *param_1 = lVar11 * 2;
      lVar11 = *(long *)(param_2 + 8);
    }
    if (lVar7 == 0) {
      pvVar6 = *(void **)(param_2 + 0x10);
      param_1[1] = lVar11;
      memcpy((void *)param_1[2],pvVar6,*(long *)(param_2 + 8) * 8);
    }
    else {
      lVar9 = lVar7 + lVar11 * 2;
      uVar4 = lVar11 - 1;
      lVar7 = lVar7 + -1;
      uVar10 = ~uVar4;
      uVar3 = uVar10;
      while (((long)uVar3 < 0 && (-1 < lVar7))) {
        lVar11 = *(long *)(*(long *)(param_2 + 0x10) + uVar4 * 8);
        plVar1 = (long *)(param_1[2] + lVar7 * 8);
        if (*plVar1 == lVar11) {
          uVar4 = uVar4 - 1;
          lVar7 = lVar7 + -1;
          uVar10 = ~uVar4;
          uVar3 = uVar10;
        }
        else if (*plVar1 < lVar11) {
          uVar4 = uVar4 - 1;
          lVar9 = lVar9 + -1;
          *(long *)(param_1[2] + lVar9 * 8) = lVar11;
          uVar10 = ~uVar4;
          uVar3 = uVar4;
        }
        else {
          lVar7 = lVar7 + -1;
          uVar3 = uVar10;
        }
      }
      if (-1 < (long)uVar4) {
        lVar9 = lVar9 - (uVar4 + 1);
        memcpy((void *)(param_1[2] + lVar9 * 8),*(void **)(param_2 + 0x10),(uVar4 + 1) * 8);
      }
      lVar7 = param_1[1];
      lVar11 = lVar7 + -1 + *(long *)(param_2 + 8) * 2;
      lVar8 = (lVar11 - lVar9) + 1;
      if (lVar8 != 0) {
        lVar5 = lVar7 + -1;
        pvVar6 = (void *)param_1[2];
        param_1[1] = lVar7 + lVar8;
        do {
          while( true ) {
            lVar7 = *(long *)((long)pvVar6 + lVar11 * 8);
            lVar2 = *(long *)((long)pvVar6 + lVar5 * 8);
            plVar1 = (long *)((long)pvVar6 + (lVar5 + lVar8) * 8);
            if (lVar2 < lVar7) break;
            *plVar1 = lVar2;
            lVar5 = lVar5 + -1;
            if (lVar5 < 0) {
              memcpy(pvVar6,(void *)((long)pvVar6 + lVar9 * 8),lVar8 << 3);
              return 0;
            }
          }
          lVar11 = lVar11 + -1;
          *plVar1 = lVar7;
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
      }
    }
    return 0;
  }
  return 0;
}


/* WARNING: Could not reconcile some variable overlaps */

undefined FUN_00408740(undefined *param_1,long *param_2,long param_3,char param_4)

{
  undefined *puVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  undefined *puVar5;
  undefined uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined local_78;
  undefined uStack_70;
  void *local_68;
  undefined local_58;
  undefined uStack_50;
  void *local_48;
  
  lVar9 = param_3 * 0x18;
  lVar8 = param_2[5] + lVar9;
  uStack_70 = 0;
  local_78 = *(long *)(lVar8 + 8) + 1;
  local_68 = malloc(local_78 * 8);
  if (local_68 == (void *)0x0) {
    return 0xc;
  }
  lVar10 = *param_2;
  *(undefined *)(param_2[6] + 8 + lVar9) = 0xffffffffffffffff;
  lVar7 = lVar10 + param_3 * 0x10;
  if ((*(uint *)(lVar7 + 8) & 0x3ff00) == 0) {
LAB_004087c4:
    if ((*(byte *)(lVar7 + 8) & 8) == 0) goto LAB_00408930;
    lVar7 = param_2[5];
    lVar8 = lVar7 + lVar9;
    if (*(long *)(lVar8 + 8) < 1) goto LAB_00408930;
    lVar10 = 0;
    bVar3 = false;
    do {
      while( true ) {
        bVar2 = bVar3;
        lVar8 = *(long *)(*(long *)(lVar8 + 0x10) + lVar10 * 8) * 0x18;
        puVar5 = (undefined *)(param_2[6] + lVar8);
        if (puVar5[1] == -1) break;
        if (puVar5[1] == 0) {
          uVar6 = FUN_00408740(&local_58,param_2);
          if ((int)uVar6 != 0) {
            return uVar6;
          }
        }
        else {
          local_58 = *puVar5;
          uStack_50 = puVar5[1];
          local_48 = (void *)puVar5[2];
        }
        uVar6 = FUN_00408570(&local_78,&local_58);
        if ((int)uVar6 != 0) {
          return uVar6;
        }
        if (*(long *)(param_2[6] + 8 + lVar8) == 0) {
          bVar2 = true;
          free(local_48);
        }
        lVar7 = param_2[5];
        lVar10 = lVar10 + 1;
        lVar8 = lVar7 + lVar9;
        bVar3 = bVar2;
        if (*(long *)(lVar8 + 8) == lVar10 || *(long *)(lVar8 + 8) < lVar10) goto LAB_004088ac;
      }
      lVar8 = lVar7 + lVar9;
      bVar2 = true;
      lVar10 = lVar10 + 1;
      bVar3 = true;
    } while (*(long *)(lVar8 + 8) != lVar10 && lVar10 <= *(long *)(lVar8 + 8));
LAB_004088ac:
    cVar4 = FUN_00406a20(&local_78,param_3);
    if (cVar4 == '\0') {
      return 0xc;
    }
    lVar8 = param_2[6];
    if ((param_4 != '\x01') && (bVar2)) {
      *(undefined *)(lVar8 + lVar9 + 8) = 0;
      goto LAB_00408959;
    }
  }
  else {
    if (*(long *)(lVar8 + 8) != 0) {
      if ((*(byte *)(lVar10 + 10 + **(long **)(lVar8 + 0x10) * 0x10) & 4) == 0) {
        uVar6 = FUN_00407970(param_2,param_3,param_3,param_3,*(uint *)(lVar7 + 8) >> 8 & 0x3ff);
        if ((int)uVar6 != 0) {
          return uVar6;
        }
        lVar7 = *param_2 + param_3 * 0x10;
      }
      goto LAB_004087c4;
    }
LAB_00408930:
    cVar4 = FUN_00406a20(&local_78,param_3);
    if (cVar4 == '\0') {
      return 0xc;
    }
    lVar8 = param_2[6];
  }
  puVar1 = (undefined *)(lVar8 + lVar9);
  *puVar1 = (undefined)local_78;
  puVar1[1] = local_78._4_4_;
  puVar1[2] = (undefined)uStack_70;
  puVar1[3] = uStack_70._4_4_;
  *(void **)(lVar8 + 0x10 + lVar9) = local_68;
LAB_00408959:
  *(void **)(param_1 + 4) = local_68;
  *param_1 = (undefined)local_78;
  param_1[1] = local_78._4_4_;
  param_1[2] = (undefined)uStack_70;
  param_1[3] = uStack_70._4_4_;
  return 0;
}


/* WARNING: Could not reconcile some variable overlaps */

int FUN_004089a0(long *param_1,undefined *param_2,long param_3,uint param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined local_48;
  undefined uStack_40;
  void *local_38;
  
  lVar8 = *(long *)(param_2 + 2);
  uStack_40 = 0;
  local_48 = lVar8;
  local_38 = malloc(lVar8 * 8);
  if (local_38 == (void *)0x0) {
    return 0xc;
  }
  if (0 < lVar8) {
    lVar8 = 0;
    do {
      lVar2 = *(long *)(*(long *)(param_2 + 4) + lVar8 * 8);
      lVar1 = param_1[6] + lVar2 * 0x18;
      lVar3 = *(long *)(lVar1 + 8);
      if (0 < lVar3) {
        lVar7 = 0;
        do {
          lVar4 = *(long *)(*(long *)(lVar1 + 0x10) + lVar7 * 8);
          plVar6 = (long *)(lVar4 * 0x10 + *param_1);
          if ((param_4 == *(byte *)(plVar6 + 1)) && (param_3 == *plVar6)) {
            if (lVar4 != -1) {
              iVar5 = FUN_004080a0(param_1,&local_48,lVar2,param_3,param_4);
              if (iVar5 == 0) goto LAB_00408a63;
              goto LAB_00408aae;
            }
            break;
          }
          lVar7 = lVar7 + 1;
        } while (lVar3 != lVar7);
      }
      iVar5 = FUN_00408570(&local_48);
      if (iVar5 != 0) {
LAB_00408aae:
        free(local_38);
        return iVar5;
      }
LAB_00408a63:
      lVar8 = lVar8 + 1;
    } while (*(long *)(param_2 + 2) != lVar8 && lVar8 <= *(long *)(param_2 + 2));
  }
  free(*(void **)(param_2 + 4));
  *(void **)(param_2 + 4) = local_38;
  *param_2 = (undefined)local_48;
  param_2[1] = local_48._4_4_;
  param_2[2] = (undefined)uStack_40;
  param_2[3] = uStack_40._4_4_;
  return 0;
}


undefined FUN_00408ae0(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  void *__ptr;
  long lVar6;
  long lVar7;
  size_t __n;
  long lVar8;
  long lVar9;
  long lVar10;
  bool bVar11;
  
  lVar5 = *(long *)(param_2 + 8);
  if ((lVar5 == 0) || (lVar8 = *(long *)(param_3 + 8), lVar8 == 0)) {
    return 0;
  }
  lVar6 = param_1[1];
  __ptr = (void *)param_1[2];
  if (*param_1 < lVar5 + lVar8 + lVar6) {
    lVar8 = *param_1 + lVar5 + lVar8;
    __ptr = realloc(__ptr,lVar8 * 8);
    if (__ptr == (void *)0x0) {
      return 0xc;
    }
    lVar6 = param_1[1];
    lVar5 = *(long *)(param_2 + 8);
    param_1[2] = (long)__ptr;
    *param_1 = lVar8;
    lVar8 = *(long *)(param_3 + 8);
  }
  lVar7 = *(long *)(param_2 + 0x10);
  lVar2 = *(long *)(param_3 + 0x10);
  lVar4 = lVar8 + -1;
  lVar10 = lVar5 + -1;
  lVar8 = lVar6 + lVar5 + lVar8;
  lVar6 = lVar6 + -1;
  lVar9 = *(long *)(lVar7 + lVar10 * 8);
  lVar5 = *(long *)(lVar2 + lVar4 * 8);
  do {
    bVar11 = SBORROW8(lVar9,lVar5);
    lVar3 = lVar9 - lVar5;
    if (lVar9 == lVar5) goto LAB_00408b66;
    while (bVar11 != lVar3 < 0) {
      lVar4 = lVar4 + -1;
      if (lVar4 < 0) goto LAB_00408bc0;
      while( true ) {
        lVar5 = *(long *)(lVar2 + lVar4 * 8);
        bVar11 = SBORROW8(lVar9,lVar5);
        lVar3 = lVar9 - lVar5;
        if (lVar3 != 0) break;
LAB_00408b66:
        if (-1 < lVar6) {
          do {
            lVar5 = *(long *)((long)__ptr + lVar6 * 8);
            if (lVar5 <= lVar9) {
              if (lVar5 == lVar9) goto LAB_00408b90;
              break;
            }
            lVar6 = lVar6 + -1;
          } while (lVar6 != -1);
        }
        lVar8 = lVar8 + -1;
        *(long *)((long)__ptr + lVar8 * 8) = lVar9;
LAB_00408b90:
        lVar10 = lVar10 + -1;
        if ((lVar10 < 0) || (lVar4 = lVar4 + -1, lVar4 < 0)) goto LAB_00408bc0;
        lVar9 = *(long *)(lVar7 + lVar10 * 8);
      }
    }
    lVar10 = lVar10 + -1;
    if (lVar10 < 0) break;
    lVar9 = *(long *)(lVar7 + lVar10 * 8);
  } while( true );
LAB_00408bc0:
  lVar4 = param_1[1];
  lVar7 = *(long *)(param_2 + 8) + lVar4 + *(long *)(param_3 + 8);
  lVar5 = lVar4 + -1;
  lVar6 = lVar7 + -1;
  lVar7 = lVar7 - lVar8;
  param_1[1] = lVar4 + lVar7;
  if ((lVar7 < 1) || (lVar5 < 0)) {
    __n = lVar7 * 8;
  }
  else {
    do {
      while( true ) {
        lVar4 = *(long *)((long)__ptr + lVar6 * 8);
        lVar2 = *(long *)((long)__ptr + lVar5 * 8);
        plVar1 = (long *)((long)__ptr + (lVar5 + lVar7) * 8);
        if (lVar4 <= lVar2) break;
        lVar6 = lVar6 + -1;
        *plVar1 = lVar4;
        lVar7 = lVar7 + -1;
        if (lVar7 == 0) {
          __ptr = (void *)param_1[2];
          __n = 0;
          goto LAB_00408c44;
        }
      }
      lVar5 = lVar5 + -1;
      *plVar1 = lVar2;
    } while (lVar5 != -1);
    __n = lVar7 << 3;
    __ptr = (void *)param_1[2];
  }
LAB_00408c44:
  memcpy(__ptr,(void *)((long)__ptr + lVar8 * 8),__n);
  return 0;
}


long FUN_00408ca0(undefined *param_1,int *param_2,long *param_3,long *param_4,undefined *param_5)

{
  byte *pbVar1;
  undefined uVar2;
  undefined uVar3;
  undefined uVar4;
  undefined uVar5;
  int iVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  iVar6 = *param_2;
  lVar9 = (long)iVar6;
  if (iVar6 == 0xf) {
    puVar7 = (undefined *)malloc(0x3c8);
    if (puVar7 == (undefined *)0x0) {
      return 0;
    }
    uVar2 = *param_1;
    lVar10 = 8;
    *param_1 = puVar7;
    lVar9 = 0;
    *puVar7 = uVar2;
    iVar6 = 1;
  }
  else {
    puVar7 = (undefined *)*param_1;
    iVar6 = iVar6 + 1;
    lVar10 = lVar9 * 0x40 + 8;
  }
  *param_2 = iVar6;
  lVar10 = (long)puVar7 + lVar10;
  lVar8 = lVar9 * 0x40;
  puVar7[lVar9 * 8 + 1] = 0;
  puVar7[lVar9 * 8 + 2] = param_3;
  puVar7[lVar9 * 8 + 3] = param_4;
  uVar3 = param_5[1];
  uVar4 = param_5[2];
  uVar5 = param_5[3];
  *(undefined *)(puVar7 + lVar9 * 8 + 6) = *param_5;
  *(undefined *)((long)puVar7 + lVar8 + 0x34) = uVar3;
  *(undefined *)(puVar7 + lVar9 * 8 + 7) = uVar4;
  *(undefined *)((long)puVar7 + lVar8 + 0x3c) = uVar5;
  pbVar1 = (byte *)((long)puVar7 + lVar8 + 0x3a);
  *pbVar1 = *pbVar1 & 0xf3;
  puVar7[lVar9 * 8 + 4] = 0;
  puVar7[lVar9 * 8 + 5] = 0;
  puVar7[lVar9 * 8 + 8] = 0xffffffffffffffff;
  if (param_3 != (long *)0x0) {
    *param_3 = lVar10;
  }
  if (param_4 != (long *)0x0) {
    *param_4 = lVar10;
  }
  return lVar10;
}


undefined FUN_00408d80(long **param_1,long param_2)

{
  long **pplVar1;
  long **pplVar2;
  long **pplVar3;
  long ***ppplVar4;
  long **local_30;
  
  pplVar3 = (long **)*param_1;
  ppplVar4 = &local_30;
  do {
    while( true ) {
      pplVar2 = (long **)FUN_00408ca0(param_2 + 0x70,param_2 + 0x80,0,0,param_1 + 5);
      *ppplVar4 = pplVar2;
      if (pplVar2 == (long **)0x0) {
        return 0;
      }
      *pplVar2 = (long *)pplVar3;
      pplVar3 = *ppplVar4;
      *(byte *)((long)pplVar3 + 0x32) = *(byte *)((long)pplVar3 + 0x32) | 4;
      if ((long **)param_1[1] == (long **)0x0) break;
      ppplVar4 = (long ***)(pplVar3 + 1);
      param_1 = (long **)param_1[1];
    }
    pplVar2 = (long **)0x0;
    while ((pplVar1 = (long **)param_1[2], pplVar1 == (long **)0x0 || (pplVar1 == pplVar2))) {
      pplVar1 = (long **)*param_1;
      pplVar3 = (long **)*pplVar3;
      pplVar2 = param_1;
      param_1 = pplVar1;
      if (pplVar1 == (long **)0x0) {
        return local_30;
      }
    }
    ppplVar4 = (long ***)(pplVar3 + 2);
    param_1 = pplVar1;
  } while( true );
}


long FUN_00408e30(undefined *param_1,long *param_2,long param_3)

{
  long lVar1;
  undefined uVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long local_60;
  undefined local_48 [8];
  undefined local_40;
  
  lVar7 = *param_2;
  lVar1 = *(long *)(param_3 + 8);
  if ((*(byte *)(param_2 + 7) & 0x10) == 0) {
    local_40 = 8;
    lVar4 = FUN_00408ca0(lVar7 + 0x70,lVar7 + 0x80,0,0,local_48);
    local_40 = 9;
    lVar6 = FUN_00408ca0(lVar7 + 0x70,lVar7 + 0x80,0,0,local_48);
    lVar5 = lVar6;
    if (lVar1 == 0) goto LAB_00408ee9;
  }
  else {
    if (lVar1 == 0) {
      local_40 = 8;
      lVar4 = FUN_00408ca0(lVar7 + 0x70,lVar7 + 0x80,0,0,local_48);
      local_40 = 9;
      lVar6 = FUN_00408ca0(lVar7 + 0x70,lVar7 + 0x80,0,0,local_48);
      lVar5 = lVar6;
      goto LAB_00408ee9;
    }
    if (0x3f < (long)*(ulong *)(param_3 + 0x28)) {
      return lVar1;
    }
    if ((*(ulong *)(lVar7 + 0xa0) >> (*(ulong *)(param_3 + 0x28) & 0x3f) & 1) == 0) {
      return lVar1;
    }
    local_40 = 8;
    lVar4 = FUN_00408ca0(lVar7 + 0x70,lVar7 + 0x80,0,0,local_48);
    local_40 = 9;
    lVar5 = FUN_00408ca0(lVar7 + 0x70,lVar7 + 0x80,0,0,local_48);
  }
  local_60 = lVar7 + 0x80;
  local_40 = 0x10;
  lVar6 = FUN_00408ca0(lVar7 + 0x70,local_60,lVar1,lVar5,local_48);
LAB_00408ee9:
  local_60 = lVar7 + 0x80;
  local_40 = 0x10;
  lVar7 = FUN_00408ca0(lVar7 + 0x70,local_60,lVar4,lVar6,local_48);
  if ((((lVar7 == 0) || (lVar6 == 0)) || (lVar4 == 0)) || (lVar5 == 0)) {
    lVar7 = 0;
    *param_1 = 0xc;
  }
  else {
    uVar2 = *(undefined *)(param_3 + 0x28);
    *(undefined *)(lVar5 + 0x28) = uVar2;
    *(undefined *)(lVar4 + 0x28) = uVar2;
    bVar3 = *(byte *)(param_3 + 0x32) & 8;
    *(byte *)(lVar5 + 0x32) = *(byte *)(lVar5 + 0x32) & 0xf7 | bVar3;
    *(byte *)(lVar4 + 0x32) = *(byte *)(lVar4 + 0x32) & 0xf7 | bVar3;
  }
  return lVar7;
}


undefined FUN_00409050(undefined param_1,long param_2)

{
  long *plVar1;
  undefined local_1c [3];
  
  local_1c[0] = 0;
  if ((*(long *)(param_2 + 8) != 0) && (*(char *)(*(long *)(param_2 + 8) + 0x30) == '\x11')) {
    plVar1 = (long *)FUN_00408e30(local_1c,param_1);
    *(long **)(param_2 + 8) = plVar1;
    if (plVar1 != (long *)0x0) {
      *plVar1 = param_2;
    }
  }
  if ((*(long *)(param_2 + 0x10) != 0) && (*(char *)(*(long *)(param_2 + 0x10) + 0x30) == '\x11')) {
    plVar1 = (long *)FUN_00408e30(local_1c,param_1);
    *(long **)(param_2 + 0x10) = plVar1;
    if (plVar1 != (long *)0x0) {
      *plVar1 = param_2;
    }
  }
  return local_1c[0];
}


undefined FUN_004090d0(undefined (*param_1) [16],long param_2)

{
  long lVar1;
  void *__dest;
  undefined uVar2;
  
  lVar1 = *(long *)(param_2 + 8);
  *(long *)(*param_1 + 8) = lVar1;
  if (0 < lVar1) {
    *(long *)*param_1 = lVar1;
    __dest = malloc(lVar1 * 8);
    *(void **)param_1[1] = __dest;
    if (__dest == (void *)0x0) {
      *(undefined *)(*param_1 + 8) = 0;
      uVar2 = 0xc;
      *(undefined *)*param_1 = 0;
    }
    else {
      memcpy(__dest,*(void **)(param_2 + 0x10),lVar1 * 8);
      uVar2 = 0;
    }
    return uVar2;
  }
  *(undefined *)param_1[1] = 0;
  *param_1 = (undefined)0x0;
  return 0;
}


undefined FUN_00409150(undefined (*param_1) [16],long param_2,long param_3)

{
  long *__src;
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *__dest;
  long lVar10;
  
  if (param_2 != 0) {
    lVar9 = *(long *)(param_2 + 8);
    if ((param_3 != 0) && (0 < lVar9)) {
      lVar1 = *(long *)(param_3 + 8);
      if (0 < lVar1) {
        *(long *)*param_1 = lVar9 + lVar1;
        plVar5 = (long *)malloc((lVar9 + lVar1) * 8);
        *(long **)param_1[1] = plVar5;
        if (plVar5 == (long *)0x0) {
          return 0xc;
        }
        lVar2 = *(long *)(param_2 + 0x10);
        lVar10 = 0;
        lVar7 = 0;
        lVar8 = 0;
        __dest = plVar5;
        do {
          __src = (long *)(lVar2 + lVar8 * 8);
          if (lVar1 <= lVar7) {
            lVar10 = lVar10 + (lVar9 - lVar8);
            memcpy(__dest,__src,(lVar9 - lVar8) * 8);
            goto LAB_00409279;
          }
          lVar3 = *(long *)(param_3 + 0x10);
          lVar9 = *__src;
          lVar10 = lVar10 + 1;
          lVar4 = *(long *)(lVar3 + lVar7 * 8);
          if (lVar4 < lVar9) {
            lVar7 = lVar7 + 1;
            *__dest = lVar4;
          }
          else {
            *__dest = lVar9;
            lVar8 = lVar8 + 1;
            lVar7 = lVar7 + (ulong)(lVar9 == lVar4);
          }
          lVar9 = *(long *)(param_2 + 8);
          __dest = __dest + 1;
        } while (lVar8 < lVar9);
        if (lVar7 < *(long *)(param_3 + 8)) {
          plVar5 = plVar5 + lVar10;
          lVar9 = *(long *)(param_3 + 8) - lVar7;
          lVar10 = lVar10 + lVar9;
          memcpy(plVar5,(void *)(lVar3 + lVar7 * 8),lVar9 * 8);
        }
LAB_00409279:
        *(long *)(*param_1 + 8) = lVar10;
        return 0;
      }
      goto LAB_00409253;
    }
    if (0 < lVar9) goto LAB_00409253;
  }
  if ((param_3 == 0) || (param_2 = param_3, *(long *)(param_3 + 8) < 1)) {
    *(undefined *)param_1[1] = 0;
    *param_1 = (undefined)0x0;
    return 0;
  }
LAB_00409253:
  uVar6 = FUN_004090d0(param_1,param_2);
  return uVar6;
}


ulong * FUN_004092e0(undefined *param_1,long *param_2,long param_3,uint param_4)

{
  ulong *puVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  long *plVar8;
  ulong *puVar9;
  void *pvVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  
  lVar14 = *(long *)(param_3 + 8);
  if (lVar14 == 0) {
    *param_1 = 0;
  }
  else {
    uVar15 = (ulong)param_4 + lVar14;
    if (0 < lVar14) {
      plVar8 = *(long **)(param_3 + 0x10);
      plVar2 = plVar8 + lVar14;
      do {
        uVar15 = uVar15 + *plVar8;
        plVar8 = plVar8 + 1;
      } while (plVar2 != plVar8);
    }
    plVar2 = (long *)(param_2[8] + (param_2[0x11] & uVar15) * 0x18);
    lVar14 = *plVar2;
    if (0 < lVar14) {
      lVar16 = plVar2[2];
      lVar13 = 0;
      uVar12 = (ulong)param_4;
      do {
        puVar9 = *(ulong **)(lVar16 + lVar13 * 8);
        if (((*puVar9 == uVar15) && ((*(byte *)(puVar9 + 0xd) & 0xf) == (uint)uVar12)) &&
           (cVar5 = FUN_00406480(puVar9[10],param_3), cVar5 != '\0')) {
          return puVar9;
        }
        lVar13 = lVar13 + 1;
      } while (lVar13 != lVar14);
    }
    puVar9 = (ulong *)calloc(0x70,1);
    if (puVar9 != (ulong *)0x0) {
      puVar1 = puVar9 + 1;
      iVar7 = FUN_004090d0(puVar1,param_3);
      if (iVar7 == 0) {
        lVar14 = *(long *)(param_3 + 8);
        *(byte *)(puVar9 + 0xd) = *(byte *)(puVar9 + 0xd) & 0xf0 | (byte)param_4 & 0xf;
        puVar9[10] = (ulong)puVar1;
        if (0 < lVar14) {
          lVar16 = 0;
          lVar14 = 0;
          do {
            lVar13 = *(long *)(*(long *)(param_3 + 0x10) + lVar16 * 8) * 0x10 + *param_2;
            uVar3 = *(uint *)(lVar13 + 8);
            cVar5 = *(char *)(lVar13 + 8);
            uVar11 = uVar3 >> 8;
            if ((cVar5 != '\x01') || ((uVar3 & 0x3ff00) != 0)) {
              bVar6 = (byte)(((byte)(*(byte *)(lVar13 + 10) >> 4 | *(byte *)(puVar9 + 0xd) >> 5) & 1
                             ) << 5) | *(byte *)(puVar9 + 0xd) & 0xdf;
              *(byte *)(puVar9 + 0xd) = bVar6;
              if (cVar5 == '\x02') {
                *(byte *)(puVar9 + 0xd) = bVar6 | 0x10;
              }
              else if (cVar5 == '\x04') {
                *(byte *)(puVar9 + 0xd) = bVar6 | 0x40;
              }
              if ((uVar3 & 0x3ff00) != 0) {
                if (puVar1 == (ulong *)puVar9[10]) {
                  pvVar10 = malloc(0x18);
                  puVar9[10] = (ulong)pvVar10;
                  if (pvVar10 == (void *)0x0) {
                    FUN_00407c00(puVar9);
                    goto LAB_00409538;
                  }
                  iVar7 = FUN_004090d0(pvVar10,param_3);
                  if (iVar7 != 0) goto LAB_00409538;
                  *(byte *)(puVar9 + 0xd) = *(byte *)(puVar9 + 0xd) | 0x80;
                  lVar14 = 0;
                }
                if ((uVar3 & 0x100) == 0) {
                  if ((uVar11 & 2) != 0) {
                    uVar4 = param_4 & 1;
                    goto joined_r0x0040956d;
                  }
LAB_004094b3:
                  if ((((uVar11 & 0x10) == 0) || ((param_4 & 2) != 0)) &&
                     (((uVar3 & 0x4000) == 0 || ((param_4 & 4) != 0)))) goto LAB_004094fe;
                }
                else if ((param_4 & 1) != 0) {
                  uVar4 = uVar11 & 2;
joined_r0x0040956d:
                  if (uVar4 == 0) goto LAB_004094b3;
                }
                if ((-1 < lVar16 - lVar14) && (lVar16 - lVar14 < (long)puVar9[2])) {
                  puVar9[2] = puVar9[2] - 1;
                  FUN_004081a0(puVar9 + 2,puVar9 + 3);
                }
                lVar14 = lVar14 + 1;
              }
            }
LAB_004094fe:
            lVar16 = lVar16 + 1;
          } while (lVar16 < *(long *)(param_3 + 8));
        }
        iVar7 = FUN_00406b50(param_2,puVar9,uVar15);
        if (iVar7 == 0) {
          return puVar9;
        }
        FUN_00407c00(puVar9);
      }
      else {
        free(puVar9);
      }
    }
LAB_00409538:
    *param_1 = 0xc;
  }
  return (ulong *)0x0;
}


ulong * FUN_004095e0(undefined *param_1,long *param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  long *plVar4;
  ulong *puVar5;
  long lVar6;
  byte bVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  
  uVar8 = *(ulong *)(param_3 + 8);
  if (uVar8 == 0) {
    *param_1 = 0;
  }
  else {
    if (0 < (long)uVar8) {
      plVar4 = *(long **)(param_3 + 0x10);
      plVar1 = plVar4 + uVar8;
      do {
        uVar8 = uVar8 + *plVar4;
        plVar4 = plVar4 + 1;
      } while (plVar1 != plVar4);
    }
    plVar1 = (long *)(param_2[8] + (param_2[0x11] & uVar8) * 0x18);
    lVar6 = *plVar1;
    if (0 < lVar6) {
      lVar10 = plVar1[2];
      lVar9 = 0;
      do {
        puVar5 = *(ulong **)(lVar10 + lVar9 * 8);
        if ((*puVar5 == uVar8) && (cVar2 = FUN_00406480(puVar5 + 1,param_3), cVar2 != '\0')) {
          return puVar5;
        }
        lVar9 = lVar9 + 1;
      } while (lVar6 != lVar9);
    }
    puVar5 = (ulong *)calloc(0x70,1);
    if (puVar5 != (ulong *)0x0) {
      iVar3 = FUN_004090d0(puVar5 + 1,param_3);
      if (iVar3 == 0) {
        lVar6 = *(long *)(param_3 + 8);
        puVar5[10] = (ulong)(puVar5 + 1);
        if (0 < lVar6) {
          plVar4 = *(long **)(param_3 + 0x10);
          lVar10 = *param_2;
          plVar1 = plVar4 + lVar6;
          do {
            while( true ) {
              lVar6 = *plVar4 * 0x10 + lVar10;
              cVar2 = *(char *)(lVar6 + 8);
              if (cVar2 == '\x01') break;
              bVar7 = (byte)(((byte)(*(byte *)(lVar6 + 10) >> 4 | *(byte *)(puVar5 + 0xd) >> 5) & 1)
                            << 5) | *(byte *)(puVar5 + 0xd) & 0xdf;
              *(byte *)(puVar5 + 0xd) = bVar7;
              if (cVar2 == '\x02') {
                *(byte *)(puVar5 + 0xd) = bVar7 | 0x10;
              }
              else if (cVar2 == '\x04') {
                *(byte *)(puVar5 + 0xd) = bVar7 | 0x40;
              }
              else if ((cVar2 == '\f') || ((*(uint *)(lVar6 + 8) & 0x3ff00) != 0))
              goto LAB_00409740;
LAB_004096fb:
              plVar4 = plVar4 + 1;
              if (plVar1 == plVar4) goto LAB_0040974d;
            }
            if ((*(uint *)(lVar6 + 8) & 0x3ff00) == 0) goto LAB_004096fb;
            *(byte *)(puVar5 + 0xd) =
                 (byte)(((byte)(*(byte *)(lVar6 + 10) >> 4 | *(byte *)(puVar5 + 0xd) >> 5) & 1) << 5
                       ) | *(byte *)(puVar5 + 0xd) & 0xdf;
LAB_00409740:
            plVar4 = plVar4 + 1;
            *(byte *)(puVar5 + 0xd) = *(byte *)(puVar5 + 0xd) | 0x80;
          } while (plVar1 != plVar4);
        }
LAB_0040974d:
        iVar3 = FUN_00406b50(param_2,puVar5,uVar8);
        if (iVar3 == 0) {
          return puVar5;
        }
        FUN_00407c00(puVar5);
      }
      else {
        free(puVar5);
      }
    }
    *param_1 = 0xc;
  }
  return (ulong *)0x0;
}


ulong FUN_004097d0(undefined param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined uVar4;
  long lVar5;
  uint local_4c;
  undefined local_48 [16];
  void *local_38;
  
  if (param_4 < 1) {
    return 0;
  }
  lVar5 = 0;
  do {
    while( true ) {
      lVar1 = *(long *)(param_2 + lVar5 * 8);
      lVar2 = *(long *)(param_3 + lVar5 * 8);
      if (lVar1 != 0) break;
      *(long *)(param_2 + lVar5 * 8) = lVar2;
      lVar5 = lVar5 + 1;
      if (param_4 == lVar5) {
        return 0;
      }
    }
    if (lVar2 != 0) {
      uVar3 = FUN_00409150(local_48,lVar1 + 8,lVar2 + 8);
      local_4c = (uint)uVar3;
      if (local_4c != 0) {
        return uVar3;
      }
      uVar4 = FUN_004095e0(&local_4c,param_1,local_48);
      *(undefined *)(param_2 + lVar5 * 8) = uVar4;
      free(local_38);
      if (local_4c != 0) {
        return (ulong)local_4c;
      }
    }
    lVar5 = lVar5 + 1;
    if (param_4 == lVar5) {
      return 0;
    }
  } while( true );
}


uint FUN_00409880(long param_1,long param_2,long param_3,undefined param_4,undefined param_5)

{
  long lVar1;
  undefined uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined uVar10;
  long lVar11;
  long *plVar12;
  uint local_5c;
  undefined local_58;
  undefined local_50;
  undefined *local_48;
  
  lVar11 = 0;
  lVar7 = *(long *)(param_1 + 200);
  while (lVar11 < lVar7) {
    lVar8 = (lVar11 + lVar7) / 2;
    lVar1 = *(long *)(*(long *)(param_1 + 0xd8) + 8 + lVar8 * 0x28);
    while (lVar6 = lVar8, param_3 <= lVar1) {
      if (lVar6 <= lVar11) goto LAB_004098fb;
      lVar8 = (lVar6 + lVar11) / 2;
      lVar1 = *(long *)(*(long *)(param_1 + 0xd8) + 8 + lVar8 * 0x28);
      lVar7 = lVar6;
    }
    lVar11 = lVar6 + 1;
  }
LAB_004098fb:
  if (lVar11 < *(long *)(param_1 + 200)) {
    lVar7 = *(long *)(param_1 + 0xd8);
    if ((*(long *)(lVar7 + 8 + lVar11 * 0x28) == param_3) && (lVar11 != -1)) {
      lVar1 = *(long *)(param_1 + 0x98);
LAB_00409953:
      plVar12 = (long *)(lVar7 + lVar11 * 0x28);
      do {
        lVar7 = *plVar12;
        uVar10 = *(undefined *)(param_2 + 8);
        lVar8 = FUN_00408030(uVar10,param_2 + 0x10,lVar7);
        if (lVar8 != 0) {
          lVar8 = (plVar12[3] + param_3) - plVar12[2];
          if (param_3 == lVar8) {
            uVar2 = **(undefined **)(*(long *)(lVar1 + 0x28) + lVar7 * 0x18 + 0x10);
            lVar7 = FUN_00408030(uVar10,param_2 + 0x10,uVar2);
            if (lVar7 == 0) goto code_r0x00409a92;
          }
          else {
            uVar10 = *(undefined *)(*(long *)(lVar1 + 0x18) + lVar7 * 8);
            plVar9 = (long *)(*(long *)(param_1 + 0xb8) + lVar8 * 8);
            lVar7 = *plVar9;
            if (lVar7 == 0) {
              local_58 = 1;
              local_50 = 1;
              local_48 = (undefined *)malloc(8);
              if (local_48 == (undefined *)0x0) {
                return 0xc;
              }
              local_5c = 0;
              *local_48 = uVar10;
            }
            else {
              lVar6 = FUN_00408030(*(undefined *)(lVar7 + 0x10),lVar7 + 0x18,uVar10);
              if (lVar6 != 0) goto LAB_00409a29;
              local_5c = FUN_004090d0(&local_58,lVar7 + 8);
              cVar3 = FUN_00406a20(&local_58,uVar10);
              if ((local_5c != 0) || (cVar3 != '\x01')) {
                free(local_48);
                if (local_5c == 0) {
                  return 0xc;
                }
                return local_5c;
              }
              plVar9 = (long *)(lVar8 * 8 + *(long *)(param_1 + 0xb8));
            }
            lVar7 = FUN_004095e0(&local_5c,lVar1,&local_58);
            *plVar9 = lVar7;
            free(local_48);
            if ((*(long *)(*(long *)(param_1 + 0xb8) + lVar8 * 8) == 0) && (local_5c != 0)) {
              return local_5c;
            }
          }
        }
LAB_00409a29:
        plVar9 = plVar12 + 4;
        plVar12 = plVar12 + 5;
        if (*(char *)plVar9 == '\0') {
          return 0;
        }
      } while( true );
    }
  }
  return 0;
code_r0x00409a92:
  local_58 = 1;
  local_50 = 1;
  local_48 = (undefined *)malloc(8);
  if (local_48 == (undefined *)0x0) {
    local_50 = 0;
    local_5c = 0xc;
    local_58 = 0;
  }
  else {
    *local_48 = uVar2;
    local_5c = 0;
  }
  uVar4 = FUN_004089a0(lVar1,&local_58,param_4,param_5);
  uVar5 = FUN_00408570(param_2,&local_58);
  free(local_48);
  if ((uVar4 | uVar5 | local_5c) != 0) {
    if (local_5c != 0) {
      return local_5c;
    }
    if (uVar4 != 0) {
      return uVar4;
    }
    return uVar5;
  }
  lVar7 = *(long *)(param_1 + 0xd8);
  goto LAB_00409953;
}


undefined FUN_00409c10(long param_1,long *param_2,long *param_3,undefined param_4)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong *puVar5;
  undefined *puVar6;
  void *__ptr;
  long lVar7;
  long lVar8;
  
  plVar1 = *(long **)(param_1 + 0x98);
  if (0 < *param_2) {
    lVar8 = 0;
    do {
      while( true ) {
        lVar2 = *(long *)(*param_3 + lVar8 * 8);
        puVar5 = (ulong *)(lVar2 * 0x10 + *plVar1);
        if (((*(char *)(puVar5 + 1) == '\b') && (uVar3 = *puVar5, (long)uVar3 < 0x40)) &&
           (((ulong)plVar1[0x14] >> (uVar3 & 0x3f) & 1) != 0)) break;
        lVar8 = lVar8 + 1;
        if (*param_2 <= lVar8) {
          return 0;
        }
      }
      lVar7 = *(long *)(param_1 + 0xe8);
      __ptr = *(void **)(param_1 + 0xf8);
      if (lVar7 == *(long *)(param_1 + 0xf0)) {
        lVar4 = lVar7 * 2;
        __ptr = realloc(__ptr,lVar7 << 4);
        if (__ptr == (void *)0x0) {
          return 0xc;
        }
        *(void **)(param_1 + 0xf8) = __ptr;
        lVar7 = *(long *)(param_1 + 0xe8);
        *(long *)(param_1 + 0xf0) = lVar4;
      }
      puVar6 = (undefined *)calloc(1,0x30);
      *(undefined **)((long)__ptr + lVar7 * 8) = puVar6;
      if (puVar6 == (undefined *)0x0) {
        return 0xc;
      }
      *puVar6 = param_4;
      lVar8 = lVar8 + 1;
      puVar6[1] = lVar2;
      *(long *)(param_1 + 0xe8) = lVar7 + 1;
    } while (lVar8 < *param_2);
  }
  return 0;
}


int FUN_00409d60(long param_1,long param_2,uint param_3)

{
  byte bVar1;
  wint_t __wc;
  int iVar2;
  
  if (param_2 < 0) {
LAB_00409e10:
    return *(int *)(param_1 + 0x70);
  }
  if (*(long *)(param_1 + 0x58) == param_2) {
    iVar2 = (-(uint)((param_3 & 2) == 0) & 2) + 8;
  }
  else {
    if (1 < *(int *)(param_1 + 0x90)) {
      do {
        __wc = *(wint_t *)(*(long *)(param_1 + 0x10) + param_2 * 4);
        if (__wc != 0xffffffff) {
          if ((*(char *)(param_1 + 0x8e) != '\0') &&
             ((iVar2 = iswalnum(__wc), iVar2 != 0 || (__wc == 0x5f)))) {
            return 1;
          }
          if (__wc != 10) {
            return 0;
          }
          goto LAB_00409df1;
        }
        param_2 = param_2 + -1;
      } while (param_2 != -1);
      goto LAB_00409e10;
    }
    bVar1 = *(byte *)(*(long *)(param_1 + 8) + param_2);
    iVar2 = 1;
    if (((*(ulong *)(*(long *)(param_1 + 0x80) + ((long)(ulong)bVar1 >> 6) * 8) >> (bVar1 & 0x3f) &
         1) == 0) && (iVar2 = 0, bVar1 == 10)) {
LAB_00409df1:
      return (uint)(*(char *)(param_1 + 0x8d) != '\0') * 2;
    }
  }
  return iVar2;
}


uint FUN_00409e50(long param_1,long *param_2,long param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  
  bVar1 = *(byte *)(*(long *)(param_1 + 8) + param_3);
  bVar2 = *(byte *)(param_2 + 1);
  if (bVar2 == 3) {
    if ((*(ulong *)(*param_2 + ((long)(ulong)bVar1 >> 6) * 8) >> (bVar1 & 0x3f) & 1) == 0) {
      return 0;
    }
  }
  else if (bVar2 < 4) {
    if (bVar2 != 1) {
      return 0;
    }
    if (*(byte *)param_2 != bVar1) {
      return 0;
    }
  }
  else {
    if (bVar2 != 5) {
      if (bVar2 != 7) {
        return 0;
      }
      if ((char)bVar1 < '\0') {
        return 0;
      }
    }
    if (bVar1 == 10) {
      if ((*(byte *)(*(long *)(param_1 + 0x98) + 0xd8) & 0x40) == 0) {
        return 0;
      }
    }
    else if ((bVar1 == 0) && ((*(byte *)(*(long *)(param_1 + 0x98) + 0xd8) & 0x80) != 0)) {
      return 0;
    }
  }
  uVar3 = *(uint *)(param_2 + 1);
  uVar5 = 1;
  if ((uVar3 & 0x3ff00) != 0) {
    uVar5 = uVar3 >> 8;
    uVar4 = FUN_00409d60(param_1,param_3,*(undefined *)(param_1 + 0xa0));
    if ((uVar5 & 4) == 0) {
      if (((uVar5 & 8) != 0) && ((uVar4 & 1) != 0)) {
        return 0;
      }
    }
    else {
      if ((uVar4 & 1) == 0) {
        return 0;
      }
      if ((uVar5 & 8) != 0) {
        return 0;
      }
    }
    if (((uVar3 & 0x2000) == 0) || (uVar5 = 0, (uVar4 & 2) != 0)) {
      uVar5 = 1;
      if ((uVar3 & 0x8000) != 0) {
        uVar5 = (uint)((uVar4 & 0xffffffff) >> 3) & 1;
      }
    }
  }
  return uVar5;
}


long FUN_00409f80(long param_1,long param_2,long *param_3,undefined param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  
  uVar3 = FUN_00409d60(param_1,param_4,*(undefined *)(param_1 + 0xa0));
  if (0 < param_2) {
    lVar7 = 0;
    do {
      lVar4 = *(long *)(*param_3 + lVar7 * 8);
      lVar6 = lVar4 * 0x10 + **(long **)(param_1 + 0x98);
      uVar1 = *(uint *)(lVar6 + 8);
      uVar5 = uVar1 >> 8;
      if (*(char *)(lVar6 + 8) == '\x02') {
        if ((uVar1 & 0x3ff00) == 0) {
          return lVar4;
        }
        if ((uVar5 & 4) == 0) {
          uVar2 = uVar3 & 1;
          if ((uVar5 & 8) != 0) goto joined_r0x0040a030;
LAB_0040a005:
          if ((((uVar1 & 0x2000) == 0) || ((uVar3 & 2) != 0)) &&
             (((uVar1 & 0x8000) == 0 || ((uVar3 & 8) != 0)))) {
            return lVar4;
          }
        }
        else if ((uVar3 & 1) != 0) {
          uVar2 = uVar5 & 8;
joined_r0x0040a030:
          if (uVar2 == 0) goto LAB_0040a005;
        }
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 != param_2);
  }
  return 0;
}


/* WARNING: Could not reconcile some variable overlaps */

undefined FUN_0040a050(byte **param_1,byte *param_2,uint param_3)

{
  undefined *puVar1;
  byte *pbVar2;
  undefined uVar3;
  int iVar4;
  byte *pbVar5;
  undefined uVar6;
  long lVar7;
  byte *pbVar8;
  undefined *puVar9;
  ulong uVar10;
  long lVar11;
  byte *pbVar12;
  byte *pbVar13;
  char cVar14;
  int iVar15;
  byte *pbVar16;
  byte *pbVar17;
  wint_t local_4c;
  byte local_46 [6];
  undefined local_40 [2];
  
  pbVar13 = param_2 + -(long)param_1[5];
  if ((long)param_2 < (long)param_1[5]) {
    if (1 < *(int *)(param_1 + 0x12)) {
      param_1[4] = (byte *)0x0;
    }
    param_1[6] = (byte *)0x0;
    param_1[5] = (byte *)0x0;
    param_1[0xb] = param_1[10];
    param_1[7] = (byte *)0x0;
    param_1[0xd] = param_1[0xc];
    *(undefined *)((long)param_1 + 0x8c) = 0;
    *(uint *)(param_1 + 0xe) = (-(uint)((param_3 & 1) == 0) & 2) + 4;
    pbVar13 = param_2;
    if (*(char *)((long)param_1 + 0x8b) != '\0') goto LAB_0040a0da;
    param_1[1] = *param_1;
    if (param_2 == (byte *)0x0) goto LAB_0040a1b0;
LAB_0040a0e3:
    pbVar12 = param_1[7];
    pbVar17 = param_1[6];
    if ((long)pbVar13 < (long)pbVar12) {
      if (*(char *)((long)param_1 + 0x8c) == '\0') {
        pbVar17 = pbVar17 + -(long)pbVar13;
        uVar3 = FUN_00409d60(param_1,pbVar13 + -1,param_3);
        *(undefined *)(param_1 + 0xe) = uVar3;
        if (1 < *(int *)(param_1 + 0x12)) {
          memmove(param_1[2],param_1[2] + (long)pbVar13 * 4,(long)pbVar17 * 4);
          pbVar17 = param_1[6] + -(long)pbVar13;
        }
        cVar14 = *(char *)((long)param_1 + 0x8b);
        if (cVar14 != '\0') {
          memmove(param_1[1],param_1[1] + (long)pbVar13,(size_t)pbVar17);
          cVar14 = *(char *)((long)param_1 + 0x8b);
          pbVar17 = param_1[6] + -(long)pbVar13;
        }
        param_1[7] = param_1[7] + -(long)pbVar13;
        param_1[6] = pbVar17;
        goto LAB_0040a13c;
      }
      pbVar2 = param_1[3];
      pbVar12 = (byte *)0x0;
      pbVar5 = pbVar17;
      do {
        pbVar8 = (byte *)((long)(pbVar12 + (long)pbVar5) / 2);
        lVar7 = *(long *)(pbVar2 + (long)pbVar8 * 8);
        pbVar16 = pbVar8;
        if (lVar7 <= (long)pbVar13) {
          if ((long)pbVar13 <= lVar7) {
            pbVar12 = pbVar8 + -1;
            goto LAB_0040a415;
          }
          pbVar12 = pbVar8 + 1;
          pbVar16 = pbVar5;
        }
        pbVar5 = pbVar16;
      } while ((long)pbVar12 < (long)pbVar16);
      pbVar12 = pbVar8;
      pbVar16 = pbVar8 + 1;
      if ((long)pbVar13 <= lVar7) {
        pbVar12 = pbVar8 + -1;
        pbVar16 = pbVar8;
      }
LAB_0040a415:
      uVar3 = FUN_00409d60(param_1,pbVar12,param_3);
      *(undefined *)(param_1 + 0xe) = uVar3;
      if (((pbVar13 == pbVar16) && ((long)pbVar13 < (long)pbVar17)) &&
         (*(byte **)(pbVar2 + (long)pbVar16 * 8) == pbVar13)) {
        memmove(param_1[2],param_1[2] + (long)pbVar13 * 4,((long)pbVar17 - (long)pbVar13) * 4);
        memmove(param_1[1],param_1[1] + (long)pbVar13,(long)param_1[6] - (long)pbVar13);
        pbVar12 = param_1[6];
        param_1[7] = param_1[7] + -(long)pbVar13;
        param_1[6] = pbVar12 + -(long)pbVar13;
        if (0 < (long)(pbVar12 + -(long)pbVar13)) {
          pbVar12 = param_1[3];
          pbVar5 = (byte *)0x0;
          do {
            *(long *)(pbVar12 + (long)pbVar5 * 8) =
                 *(long *)(pbVar12 + (long)pbVar5 * 8 + (long)pbVar13 * 8) - (long)pbVar13;
            pbVar5 = pbVar5 + 1;
          } while (param_1[6] != pbVar5 && (long)pbVar5 <= (long)param_1[6]);
        }
        iVar4 = *(int *)(param_1 + 0x12);
        cVar14 = *(char *)((long)param_1 + 0x8b);
        pbVar5 = param_1[0xb] + -(long)pbVar13;
        pbVar12 = param_1[0xd] + -(long)pbVar13;
      }
      else {
        *(undefined *)((long)param_1 + 0x8c) = 0;
        pbVar5 = param_1[10] + -(long)param_2;
        pbVar12 = param_1[0xc] + -(long)param_2;
        param_1[0xb] = pbVar5 + (long)pbVar13;
        param_1[0xd] = pbVar12 + (long)pbVar13;
        if (0 < (long)pbVar16) {
          do {
            if (*(byte **)(pbVar2 + (long)pbVar16 * 8 + -8) != pbVar13) break;
            pbVar16 = pbVar16 + -1;
          } while (pbVar16 != (byte *)0x0);
        }
        if ((long)pbVar16 < (long)pbVar17) {
          do {
            if (*(int *)(param_1[2] + (long)pbVar16 * 4) != -1) goto LAB_0040a52c;
            pbVar16 = pbVar16 + 1;
          } while (pbVar16 != pbVar17);
LAB_0040a6d8:
          param_1[6] = (byte *)0x0;
          pbVar17 = (byte *)0x0;
        }
        else {
          if (pbVar16 == pbVar17) goto LAB_0040a6d8;
LAB_0040a52c:
          pbVar17 = (byte *)(*(long *)(pbVar2 + (long)pbVar16 * 8) - (long)pbVar13);
          param_1[6] = pbVar17;
          if (pbVar17 != (byte *)0x0) {
            if (0 < (long)pbVar17) {
              puVar9 = (undefined *)param_1[2];
              puVar1 = puVar9 + (long)pbVar17;
              do {
                *puVar9 = 0xffffffff;
                puVar9 = puVar9 + 1;
              } while (puVar1 != puVar9);
            }
            memset(param_1[1],0xff,(size_t)pbVar17);
            pbVar17 = param_1[6];
            pbVar5 = param_1[0xb] + -(long)pbVar13;
            pbVar12 = param_1[0xd] + -(long)pbVar13;
          }
        }
        param_1[7] = pbVar17;
        iVar4 = *(int *)(param_1 + 0x12);
        cVar14 = *(char *)((long)param_1 + 0x8b);
      }
LAB_0040a150:
      if (cVar14 == '\0') {
LAB_0040a154:
        param_1[1] = param_1[1] + (long)pbVar13;
      }
      goto LAB_0040a158;
    }
    if (*(char *)((long)param_1 + 0x8c) != '\0') {
      *(undefined *)((long)param_1 + 0x8c) = 0;
      param_1[0xb] = param_1[10] + (long)pbVar13 + -(long)param_2;
      param_1[0xd] = param_1[0xc] + (long)pbVar13 + -(long)param_2;
    }
    iVar4 = *(int *)(param_1 + 0x12);
    pbVar5 = param_1[5];
    param_1[6] = (byte *)0x0;
    if (1 < iVar4) {
      if (*(char *)((long)param_1 + 0x89) != '\0') {
        pbVar8 = *param_1;
        pbVar2 = pbVar8 + (long)pbVar5;
        pbVar16 = pbVar2 + -1 + (long)pbVar13;
        if (pbVar8 < pbVar2 + ((long)pbVar13 - (long)iVar4)) {
          pbVar8 = pbVar2 + ((long)pbVar13 - (long)iVar4);
        }
        if (pbVar8 <= pbVar16) {
LAB_0040a5cd:
          if ((*pbVar16 & 0xc0) == 0x80) goto LAB_0040a5c0;
          pbVar5 = param_1[0xf];
          lVar7 = (long)(param_1[0xb] + (long)pbVar2) - (long)pbVar16;
          pbVar12 = pbVar16;
          if (pbVar5 != (byte *)0x0) {
            iVar4 = 6;
            if (lVar7 < 7) {
              iVar4 = (int)lVar7;
            }
            iVar4 = iVar4 + -1;
            lVar11 = (long)iVar4;
            while (-1 < iVar4) {
              local_46[lVar11] = pbVar5[pbVar16[lVar11]];
              lVar11 = lVar11 + -1;
              iVar4 = (int)lVar11;
            }
            pbVar12 = local_46;
          }
          local_40[0] = 0;
          uVar10 = FUN_00406400(&local_4c,pbVar12,lVar7,local_40);
          if ((uVar10 < (ulong)((long)(pbVar2 + (long)pbVar13) - (long)pbVar16)) ||
             (0xfffffffffffffffd < uVar10)) {
LAB_0040a630:
            pbVar5 = param_1[5];
            pbVar12 = param_1[7];
            goto LAB_0040a2d1;
          }
          pbVar5 = (byte *)(uVar10 - ((long)(pbVar2 + (long)pbVar13) - (long)pbVar16));
          param_1[4] = (byte *)0x0;
          param_1[6] = pbVar5;
          local_40[0]._0_4_ = local_4c;
          if (local_4c == 0xffffffff) goto LAB_0040a630;
          goto LAB_0040a357;
        }
      }
LAB_0040a2d1:
      pbVar5 = pbVar5 + (long)pbVar12;
      if ((long)pbVar5 < (long)param_2) {
        do {
          pbVar12 = param_1[10];
          pbVar2 = param_1[4];
          lVar7 = FUN_00406400(local_40,*param_1 + (long)pbVar5,(long)pbVar12 - (long)pbVar5,
                               param_1 + 4);
          if (0xfffffffffffffffc < lVar7 - 1U) {
            if ((lVar7 == 0) || ((long)pbVar12 - (long)pbVar5 == 0)) {
              local_40[0]._0_4_ = 0;
            }
            else {
              local_40[0]._0_4_ = (wint_t)(*param_1)[(long)pbVar5];
            }
            param_1[4] = pbVar2;
            lVar7 = 1;
          }
          pbVar5 = pbVar5 + lVar7;
        } while ((long)pbVar5 < (long)param_2);
        pbVar5 = pbVar5 + -(long)param_2;
        param_1[6] = pbVar5;
        if ((wint_t)local_40[0] == 0xffffffff) goto LAB_0040a6f1;
LAB_0040a357:
        if ((*(char *)((long)param_1 + 0x8e) == '\0') ||
           ((iVar4 = iswalnum((wint_t)local_40[0]), iVar4 == 0 && ((wint_t)local_40[0] != 0x5f)))) {
          iVar4 = 0;
          if ((wint_t)local_40[0] == 10) {
            iVar4 = (uint)(*(char *)((long)param_1 + 0x8d) != '\0') * 2;
          }
        }
        else {
          iVar4 = 1;
        }
        *(int *)(param_1 + 0xe) = iVar4;
      }
      else {
        pbVar5 = pbVar5 + -(long)param_2;
        param_1[6] = pbVar5;
LAB_0040a6f1:
        uVar3 = FUN_00409d60(param_1,pbVar17 + -1,param_3);
        *(undefined *)(param_1 + 0xe) = uVar3;
      }
      if (pbVar5 == (byte *)0x0) {
LAB_0040a385:
        cVar14 = *(char *)((long)param_1 + 0x8b);
      }
      else {
        if (0 < (long)pbVar5) {
          puVar9 = (undefined *)param_1[2];
          puVar1 = puVar9 + (long)pbVar5;
          do {
            *puVar9 = 0xffffffff;
            puVar9 = puVar9 + 1;
          } while (puVar1 != puVar9);
        }
        cVar14 = *(char *)((long)param_1 + 0x8b);
        if (cVar14 != '\0') {
          memset(param_1[1],0xff,(size_t)pbVar5);
          pbVar5 = param_1[6];
          goto LAB_0040a385;
        }
      }
      param_1[7] = pbVar5;
LAB_0040a13c:
      iVar4 = *(int *)(param_1 + 0x12);
      pbVar5 = param_1[0xb] + -(long)pbVar13;
      pbVar12 = param_1[0xd] + -(long)pbVar13;
      goto LAB_0040a150;
    }
    uVar10 = (ulong)(pbVar5 + -1)[(long)(*param_1 + (long)pbVar13)];
    param_1[7] = (byte *)0x0;
    if (param_1[0xf] != (byte *)0x0) {
      uVar10 = (ulong)param_1[0xf][uVar10];
    }
    iVar15 = 1;
    if (((*(ulong *)(param_1[0x10] + ((long)uVar10 >> 6) * 8) >> ((byte)uVar10 & 0x3f) & 1) == 0) &&
       (iVar15 = 0, (byte)uVar10 == 10)) {
      iVar15 = (uint)(*(char *)((long)param_1 + 0x8d) != '\0') * 2;
    }
    *(int *)(param_1 + 0xe) = iVar15;
    pbVar5 = param_1[0xb] + -(long)pbVar13;
    pbVar12 = param_1[0xd] + -(long)pbVar13;
    if (*(char *)((long)param_1 + 0x8b) == '\0') goto LAB_0040a154;
    param_1[5] = param_2;
    param_1[0xb] = pbVar5;
    param_1[0xd] = pbVar12;
  }
  else {
LAB_0040a0da:
    if (pbVar13 != (byte *)0x0) goto LAB_0040a0e3;
LAB_0040a1b0:
    iVar4 = *(int *)(param_1 + 0x12);
    pbVar5 = param_1[0xb];
    pbVar12 = param_1[0xd];
LAB_0040a158:
    param_1[5] = param_2;
    param_1[0xb] = pbVar5;
    param_1[0xd] = pbVar12;
    if (1 < iVar4) {
      if (*(char *)(param_1 + 0x11) == '\0') {
        FUN_00406d00();
      }
      else {
        uVar6 = FUN_00406eb0(param_1);
        if ((int)uVar6 != 0) {
          return uVar6;
        }
      }
      goto LAB_0040a17e;
    }
  }
  if (*(char *)((long)param_1 + 0x8b) == '\0') {
    param_1[6] = pbVar5;
  }
  else if (*(char *)(param_1 + 0x11) == '\0') {
    pbVar13 = param_1[0xf];
    if (pbVar13 != (byte *)0x0) {
      pbVar12 = param_1[6];
      if (param_1[8] == pbVar5 || (long)param_1[8] < (long)pbVar5) {
        pbVar5 = param_1[8];
      }
      pbVar17 = pbVar12;
      if ((long)pbVar12 < (long)pbVar5) {
        while( true ) {
          param_1[1][(long)pbVar17] = pbVar13[(*param_1 + (long)pbVar17)[(long)param_2]];
          pbVar17 = pbVar17 + 1;
          pbVar12 = pbVar5;
          if (pbVar5 == pbVar17) break;
          param_2 = param_1[5];
          pbVar13 = param_1[0xf];
        }
      }
      param_1[6] = pbVar12;
      param_1[7] = pbVar12;
    }
  }
  else {
    FUN_00406c80(param_1);
  }
LAB_0040a17e:
  param_1[9] = (byte *)0x0;
  return 0;
LAB_0040a5c0:
  pbVar16 = pbVar16 + -1;
  if (pbVar16 < pbVar8) goto LAB_0040a2d1;
  goto LAB_0040a5cd;
}


/* WARNING: Could not reconcile some variable overlaps */

int FUN_0040a840(long *param_1,long param_2,long param_3,undefined param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined local_58 [16];
  void *local_48 [3];
  
  local_58 = (undefined)0x0;
  lVar1 = param_1[7] + param_2 * 0x18;
  local_48[0] = (void *)0x0;
  lVar7 = *(long *)(lVar1 + 8);
  if (0 < lVar7) {
    lVar9 = 0;
    do {
      lVar10 = *(long *)(*(long *)(lVar1 + 0x10) + lVar9 * 8);
      if ((param_2 != lVar10) && ((*(byte *)(lVar10 * 0x10 + *param_1 + 8) & 8) != 0)) {
        lVar6 = lVar1 + 0x10;
        lVar10 = lVar10 * 0x18;
        lVar8 = param_1[5] + lVar10;
        puVar2 = *(undefined **)(lVar8 + 0x10);
        uVar3 = *puVar2;
        lVar5 = FUN_00408030(lVar7,lVar6,uVar3);
        if (*(long *)(lVar8 + 8) < 2) {
          if (lVar5 == 0) {
            lVar6 = FUN_00408030(*(undefined *)(param_3 + 8),param_3 + 0x10,uVar3);
joined_r0x0040a9a4:
            if (lVar6 != 0) goto LAB_0040a8b2;
          }
        }
        else if ((lVar5 == 0) &&
                (lVar5 = FUN_00408030(*(undefined *)(param_3 + 8),param_3 + 0x10,uVar3), lVar5 != 0
                )) {
LAB_0040a8b2:
          iVar4 = FUN_00408ae0(local_58,param_4,param_1[7] + lVar10);
          if (iVar4 != 0) {
            free(local_48[0]);
            return iVar4;
          }
          lVar7 = *(long *)(lVar1 + 8);
        }
        else {
          lVar5 = puVar2[1];
          if ((0 < lVar5) && (lVar6 = FUN_00408030(lVar7,lVar6,lVar5), lVar6 == 0)) {
            lVar6 = FUN_00408030(*(undefined *)(param_3 + 8),param_3 + 0x10);
            goto joined_r0x0040a9a4;
          }
        }
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < lVar7);
    lVar9 = 0;
    if (0 < lVar7) {
      do {
        lVar7 = FUN_00408030(local_58._8_8_,local_48,
                             *(undefined *)(*(long *)(lVar1 + 0x10) + lVar9 * 8));
        if (lVar7 == 0) {
          lVar7 = *(long *)(param_3 + 8);
          lVar10 = FUN_00408030(lVar7,param_3 + 0x10);
          lVar10 = lVar10 + -1;
          if ((-1 < lVar10) && (lVar10 < lVar7)) {
            *(long *)(param_3 + 8) = lVar7 + -1;
            FUN_004081a0(param_3 + 8,param_3 + 0x10,lVar10);
          }
        }
        lVar9 = lVar9 + 1;
      } while (*(long *)(lVar1 + 8) != lVar9 && lVar9 <= *(long *)(lVar1 + 8));
    }
  }
  free(local_48[0]);
  return 0;
}


/* WARNING: Could not reconcile some variable overlaps */

ulong FUN_0040aa70(long *param_1,long param_2)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  undefined uVar4;
  bool bVar5;
  undefined auVar6 [16];
  char cVar7;
  uint uVar8;
  int iVar9;
  void *pvVar10;
  ulong *puVar11;
  void *pvVar12;
  void *__ptr;
  undefined *puVar13;
  ulong uVar14;
  ulong uVar15;
  undefined *puVar16;
  ulong uVar17;
  ulong uVar18;
  size_t __size;
  long lVar19;
  void **ppvVar20;
  void **ppvVar21;
  long lVar22;
  ulong *puVar23;
  ulong *puVar24;
  undefined *puVar25;
  long lVar26;
  long lVar27;
  long *plVar28;
  long lVar29;
  long local_d0;
  undefined local_98 [4];
  undefined auStack_94 [8];
  undefined uStack_8c;
  undefined local_88 [8];
  undefined uStack_80;
  undefined uStack_7c;
  ulong local_78 [2];
  void *local_68;
  ulong uStack_60;
  undefined local_58 [16];
  undefined local_48 [16];
  ulong local_38;
  
  pvVar10 = malloc(0x3800);
  if (pvVar10 == (void *)0x0) {
    return 0;
  }
  _local_98 = (undefined)0x0;
  puVar11 = (ulong *)((long)pvVar10 + 0x1800);
  _local_88 = (undefined)0x0;
  *(undefined *)(param_2 + 0x58) = 0;
  *(undefined *)(param_2 + 0x60) = 0;
  if (*(long *)(param_2 + 0x10) < 1) {
    free(pvVar10);
  }
  else {
    lVar22 = 0;
    local_d0 = 0;
    do {
      plVar28 = (long *)(*(long *)(*(long *)(param_2 + 0x18) + local_d0 * 8) * 0x10 + *param_1);
      uVar2 = *(uint *)(plVar28 + 1);
      bVar1 = *(byte *)(plVar28 + 1);
      uVar8 = uVar2 >> 8;
      if (bVar1 == 1) {
        *(ulong *)(local_98 + (*(byte *)plVar28 >> 3 & 0x18)) =
             *(ulong *)(local_98 + (*(byte *)plVar28 >> 3 & 0x18)) | 1L << (*(byte *)plVar28 & 0x3f)
        ;
LAB_0040ae67:
        auVar6 = _local_98;
        if ((uVar2 & 0x3ff00) == 0) {
LAB_0040af20:
          lVar26 = 0;
          puVar23 = puVar11;
          if (0 < lVar22) {
            do {
              if ((bVar1 != 1) ||
                 ((*(ulong *)((long)puVar11 + lVar26 * 0x20 + (ulong)(*(byte *)plVar28 >> 3 & 0x18))
                   >> (*(byte *)plVar28 & 0x3f) & 1) != 0)) {
                uVar14 = 0;
                lVar19 = 0;
                do {
                  uVar17 = *(ulong *)(local_98 + lVar19 * 8);
                  uVar15 = puVar23[lVar19];
                  local_78[lVar19] = uVar17 & uVar15;
                  lVar19 = lVar19 + 1;
                  uVar14 = uVar14 | uVar17 & uVar15;
                } while (lVar19 != 4);
                if (uVar14 != 0) {
                  uVar14 = 0;
                  uVar17 = 0;
                  lVar19 = 0;
                  do {
                    uVar18 = ~*(ulong *)(local_98 + lVar19 * 8) & puVar23[lVar19];
                    uVar15 = ~puVar23[lVar19] & *(ulong *)(local_98 + lVar19 * 8);
                    *(ulong *)(local_58 + lVar19 * 8) = uVar18;
                    uVar17 = uVar17 | uVar18;
                    *(ulong *)(local_98 + lVar19 * 8) = uVar15;
                    lVar19 = lVar19 + 1;
                    uVar14 = uVar14 | uVar15;
                  } while (lVar19 != 4);
                  if (uVar17 != 0) {
                    puVar24 = puVar11 + lVar22 * 4;
                    *puVar24 = local_58._0_8_;
                    puVar24[1] = local_58._8_8_;
                    puVar24[2] = local_48._0_8_;
                    puVar24[3] = local_48._8_8_;
                    *puVar23 = local_78[0];
                    puVar23[1] = local_78[1];
                    puVar23[2] = (ulong)local_68;
                    puVar23[3] = uStack_60;
                    iVar9 = FUN_004090d0((void *)((long)pvVar10 + lVar22 * 0x18),
                                         (void *)((long)pvVar10 + lVar26 * 0x18));
                    if (iVar9 != 0) goto LAB_0040b143;
                    lVar22 = lVar22 + 1;
                  }
                  cVar7 = FUN_00406a20();
                  if (cVar7 == '\0') goto LAB_0040b143;
                  if (uVar14 == 0) break;
                }
              }
              lVar26 = lVar26 + 1;
              puVar23 = puVar23 + 4;
            } while (lVar26 < lVar22);
          }
          if (lVar22 != lVar26) goto LAB_0040ab42;
          puVar23 = puVar11 + lVar22 * 4;
          *(undefined (*) [4])puVar23 = local_98;
          *(undefined *)((long)puVar23 + 4) = auStack_94._0_4_;
          *(undefined *)(puVar23 + 1) = auStack_94._4_4_;
          *(undefined *)((long)puVar23 + 0xc) = uStack_8c;
          *(undefined *)(puVar23 + 2) = local_88._0_4_;
          *(undefined *)((long)puVar23 + 0x14) = local_88._4_4_;
          *(undefined *)(puVar23 + 3) = uStack_80;
          *(undefined *)((long)puVar23 + 0x1c) = uStack_7c;
          uVar4 = *(undefined *)(*(long *)(param_2 + 0x18) + local_d0 * 8);
          puVar13 = (undefined *)((long)pvVar10 + lVar22 * 0x18);
          *puVar13 = 1;
          puVar13[1] = 1;
          puVar16 = (undefined *)malloc(8);
          puVar13[2] = puVar16;
          if (puVar16 == (undefined *)0x0) {
            puVar13[1] = 0;
            *puVar13 = 0;
            if (lVar22 == 0) {
              free(pvVar10);
              return 0;
            }
LAB_0040b143:
            ppvVar21 = (void **)((long)pvVar10 + 0x10);
            ppvVar20 = ppvVar21 + lVar22 * 3;
            do {
              pvVar12 = *ppvVar21;
              ppvVar21 = ppvVar21 + 3;
              free(pvVar12);
            } while (ppvVar20 != ppvVar21);
            free(pvVar10);
            return 0;
          }
          *puVar16 = uVar4;
          lVar22 = lVar22 + 1;
        }
        else {
          if ((uVar8 & 0x20) != 0) {
            _local_98 = (undefined)0x0;
            _local_88 = (undefined)0x0;
            if ((auVar6 & (undefined)0x400) == (undefined)0x0) goto LAB_0040ab42;
            _local_98 = ZEXT816(0x400);
          }
          if ((uVar8 & 0x80) == 0) {
            if ((uVar8 & 4) != 0) {
              if (bVar1 == 1) {
                if ((*(byte *)((long)plVar28 + 10) & 0x40) == 0) goto LAB_0040b129;
                iVar9 = *(int *)((long)param_1 + 0xb4);
              }
              else {
                iVar9 = *(int *)((long)param_1 + 0xb4);
              }
              if (iVar9 < 2) {
                uVar14 = 0;
                lVar26 = 0;
                do {
                  uVar17 = *(ulong *)(local_98 + lVar26 * 8);
                  uVar15 = param_1[lVar26 + 0x17];
                  *(ulong *)(local_98 + lVar26 * 8) = uVar17 & uVar15;
                  lVar26 = lVar26 + 1;
                  uVar14 = uVar14 | uVar17 & uVar15;
                } while (lVar26 != 4);
              }
              else {
                lVar26 = param_1[0xf];
                uVar14 = 0;
                lVar19 = 0;
                do {
                  uVar17 = (~*(ulong *)(lVar26 + lVar19 * 8) | param_1[lVar19 + 0x17]) &
                           *(ulong *)(local_98 + lVar19 * 8);
                  *(ulong *)(local_98 + lVar19 * 8) = uVar17;
                  lVar19 = lVar19 + 1;
                  uVar14 = uVar14 | uVar17;
                } while (lVar19 != 4);
              }
              if (uVar14 == 0) goto LAB_0040ab42;
            }
            if ((uVar8 & 8) != 0) {
              if ((bVar1 == 1) && ((*(byte *)((long)plVar28 + 10) & 0x40) != 0)) goto LAB_0040b129;
              if (*(int *)((long)param_1 + 0xb4) < 2) {
                uVar14 = 0;
                lVar26 = 0;
                do {
                  uVar17 = param_1[lVar26 + 0x17];
                  uVar15 = *(ulong *)(local_98 + lVar26 * 8);
                  *(ulong *)(local_98 + lVar26 * 8) = ~uVar17 & uVar15;
                  lVar26 = lVar26 + 1;
                  uVar14 = uVar14 | ~uVar17 & uVar15;
                } while (lVar26 != 4);
              }
              else {
                lVar26 = param_1[0xf];
                uVar14 = 0;
                lVar19 = 0;
                do {
                  uVar17 = ~(param_1[lVar19 + 0x17] & *(ulong *)(lVar26 + lVar19 * 8)) &
                           *(ulong *)(local_98 + lVar19 * 8);
                  *(ulong *)(local_98 + lVar19 * 8) = uVar17;
                  lVar19 = lVar19 + 1;
                  uVar14 = uVar14 | uVar17;
                } while (lVar19 != 4);
              }
              if (uVar14 == 0) goto LAB_0040ab42;
            }
            goto LAB_0040af20;
          }
        }
LAB_0040b129:
        _local_98 = (undefined)0x0;
        _local_88 = (undefined)0x0;
      }
      else {
        if (bVar1 == 3) {
          lVar26 = *plVar28;
          lVar19 = 0;
          do {
            *(ulong *)(local_98 + lVar19) =
                 *(ulong *)(local_98 + lVar19) | *(ulong *)(lVar26 + lVar19);
            lVar19 = lVar19 + 8;
          } while (lVar19 != 0x20);
          goto LAB_0040ae67;
        }
        if (bVar1 == 5) {
          if (*(int *)((long)param_1 + 0xb4) < 2) {
            _local_98 = CONCAT412(0xffffffff,CONCAT48(0xffffffff,0xffffffffffffffff));
            _local_88 = _local_98;
          }
          else {
            lVar26 = param_1[0xf];
            lVar19 = 0;
            do {
              *(ulong *)(local_98 + lVar19) =
                   *(ulong *)(local_98 + lVar19) | *(ulong *)(lVar26 + lVar19);
              lVar19 = lVar19 + 8;
            } while (lVar19 != 0x20);
          }
LAB_0040b1af:
          if ((param_1[0x1b] & 0x40U) == 0) {
            _local_98 = _local_98 & (undefined)0xffffffffffffffff;
          }
          if ((param_1[0x1b] & 0x80U) != 0) {
            _local_98 = _local_98 & (undefined)0xffffffffffffffff;
          }
          goto LAB_0040ae67;
        }
        if (bVar1 == 7) {
          _local_98 = CONCAT412(0xffffffff,CONCAT48(0xffffffff,0xffffffffffffffff));
          goto LAB_0040b1af;
        }
      }
LAB_0040ab42:
      local_d0 = local_d0 + 1;
    } while (local_d0 < *(long *)(param_2 + 0x10));
    if (0 < lVar22) {
      local_78[1] = 0;
      local_78[0] = lVar22 + 1;
      __size = local_78[0] * 8;
      pvVar12 = malloc(__size);
      local_68 = pvVar12;
      if (((pvVar12 != (void *)0x0) &&
          (_local_98 = _local_98 & (undefined)0xffffffff00000000, lVar22 < 0xaaaaaaaaaaaa856))
         && (__ptr = malloc(lVar22 * 0x18), __ptr != (void *)0x0)) {
        lVar19 = __size - 8;
        lVar29 = 0;
        bVar5 = false;
        lVar26 = lVar19 * 2;
        plVar28 = (long *)((long)pvVar10 + 8);
        local_58 = (undefined)0x0;
        local_48 = (undefined)0x0;
        pvVar12 = pvVar10;
        do {
          local_78[1] = 0;
          lVar27 = 0;
          if (0 < *plVar28) {
            do {
              lVar3 = *(long *)(param_1[3] + *(long *)(plVar28[1] + lVar27 * 8) * 8);
              if (lVar3 != -1) {
                iVar9 = FUN_00408570(local_78,param_1[6] + lVar3 * 0x18);
                _local_98 = CONCAT124(_auStack_94,iVar9);
                if (iVar9 != 0) goto LAB_0040b315;
              }
              lVar27 = lVar27 + 1;
            } while (*plVar28 != lVar27 && lVar27 <= *plVar28);
          }
          lVar27 = FUN_004092e0(local_98,param_1,local_78,0);
          *(long *)((long)__ptr + lVar29 * 8) = lVar27;
          if ((lVar27 == 0) && (local_98 != (undefined)0x0)) goto LAB_0040b315;
          if (*(char *)(lVar27 + 0x68) < '\0') {
            lVar27 = FUN_004092e0(local_98,param_1,local_78,1);
            *(long *)((long)__ptr + lVar29 * 8 + lVar19) = lVar27;
            if ((lVar27 == 0) && (local_98 != (undefined)0x0)) goto LAB_0040b315;
            if ((lVar27 != *(long *)((long)__ptr + lVar29 * 8)) &&
               (1 < *(int *)((long)param_1 + 0xb4))) {
              bVar5 = true;
            }
            lVar27 = FUN_004092e0(local_98,param_1,local_78,2);
            *(long *)((long)__ptr + lVar29 * 8 + lVar26) = lVar27;
            if ((lVar27 == 0) && (local_98 != (undefined)0x0)) goto LAB_0040b315;
          }
          else {
            *(long *)((long)__ptr + lVar29 * 8 + lVar19) = lVar27;
            *(long *)((long)__ptr + lVar29 * 8 + lVar26) = lVar27;
          }
          lVar27 = 0;
          puVar11 = (ulong *)local_58;
          do {
            *(ulong *)((long)puVar11 + lVar27) =
                 *(ulong *)((long)puVar11 + lVar27) | *(ulong *)((long)pvVar12 + lVar27 + 0x1800);
            lVar27 = lVar27 + 8;
          } while (lVar27 != 0x20);
          lVar29 = lVar29 + 1;
          plVar28 = plVar28 + 3;
          pvVar12 = (void *)((long)pvVar12 + 0x20);
        } while (lVar29 != lVar22);
        if (bVar5) {
          puVar13 = (undefined *)calloc(8,0x200);
          *(undefined **)(param_2 + 0x60) = puVar13;
          if (puVar13 != (undefined *)0x0) {
            puVar23 = (ulong *)((long)pvVar10 + 0x1820);
            puVar16 = puVar13;
            do {
              uVar17 = 1;
              puVar25 = puVar16;
              for (uVar14 = *puVar11; uVar14 != 0; uVar14 = uVar14 >> 1) {
                if ((uVar14 & 1) != 0) {
                  if ((puVar23[-4] & uVar17) == 0) {
                    lVar29 = 0;
                    puVar24 = puVar23;
                    do {
                      uVar15 = *puVar24;
                      lVar29 = lVar29 + 1;
                      puVar24 = puVar24 + 4;
                    } while ((uVar15 & uVar17) == 0);
                  }
                  else {
                    lVar29 = 0;
                  }
                  *puVar25 = *(undefined *)((long)__ptr + lVar29 * 8);
                  puVar25[0x100] = *(undefined *)((long)__ptr + lVar29 * 8 + lVar19);
                }
                uVar17 = uVar17 * 2;
                puVar25 = puVar25 + 1;
              }
              puVar11 = puVar11 + 1;
              puVar16 = puVar16 + 0x40;
              puVar23 = puVar23 + 1;
            } while (&local_38 != puVar11);
            goto LAB_0040ad8e;
          }
        }
        else {
          puVar13 = (undefined *)calloc(8,0x100);
          *(undefined **)(param_2 + 0x58) = puVar13;
          if (puVar13 != (undefined *)0x0) {
            lVar29 = 0;
            do {
              uVar17 = 1;
              puVar16 = puVar13 + lVar29 * 8;
              for (uVar14 = *(ulong *)((long)puVar11 + lVar29); uVar14 != 0; uVar14 = uVar14 >> 1) {
                if ((uVar14 & 1) != 0) {
                  if ((*(ulong *)((long)pvVar10 + lVar29 + 0x1800) & uVar17) == 0) {
                    puVar23 = (ulong *)((long)pvVar10 + lVar29 + 0x1820);
                    lVar27 = 0;
                    do {
                      uVar15 = *puVar23;
                      lVar27 = lVar27 + 1;
                      puVar23 = puVar23 + 4;
                    } while ((uVar15 & uVar17) == 0);
                    lVar27 = lVar27 * 8;
                  }
                  else {
                    lVar27 = 0;
                  }
                  if ((*(ulong *)((long)param_1 + lVar29 + 0xb8) & uVar17) == 0) {
                    *puVar16 = *(undefined *)((long)__ptr + lVar27);
                  }
                  else {
                    *puVar16 = *(undefined *)((long)__ptr + lVar27 + lVar19);
                  }
                }
                uVar17 = uVar17 * 2;
                puVar16 = puVar16 + 1;
              }
              lVar29 = lVar29 + 8;
            } while (lVar29 != 0x20);
LAB_0040ad8e:
            if ((local_58 & (undefined)0x400) != (undefined)0x0) {
              lVar19 = 0;
              do {
                if ((*(byte *)((long)pvVar10 + lVar19 * 0x20 + 0x1801) & 4) != 0) {
                  uVar4 = *(undefined *)((long)__ptr + lVar19 * 8 + lVar26);
                  puVar13[10] = uVar4;
                  if (bVar5) {
                    puVar13[0x10a] = uVar4;
                  }
                  break;
                }
                lVar19 = lVar19 + 1;
              } while (lVar19 != lVar22);
            }
            free(__ptr);
            free(local_68);
            ppvVar21 = (void **)((long)pvVar10 + 0x10);
            ppvVar20 = ppvVar21 + lVar22 * 3;
            do {
              pvVar12 = *ppvVar21;
              ppvVar21 = ppvVar21 + 3;
              free(pvVar12);
            } while (ppvVar20 != ppvVar21);
            free(pvVar10);
            return 1;
          }
        }
LAB_0040b315:
        free(__ptr);
        pvVar12 = local_68;
      }
      free(pvVar12);
      ppvVar21 = (void **)((long)pvVar10 + 0x10);
      ppvVar20 = ppvVar21 + lVar22 * 3;
      do {
        pvVar12 = *ppvVar21;
        ppvVar21 = ppvVar21 + 3;
        free(pvVar12);
      } while (ppvVar21 != ppvVar20);
      free(pvVar10);
      return 0;
    }
    free(pvVar10);
    if (lVar22 != 0) {
      return 0;
    }
  }
  pvVar10 = calloc(8,0x100);
  *(void **)(param_2 + 0x58) = pvVar10;
  return (ulong)pvVar10 & 0xffffffffffffff00 | (ulong)(pvVar10 != (void *)0x0);
}


undefined FUN_0040b580(long *param_1,long param_2)

{
  long lVar1;
  undefined uVar2;
  
  if (*(char *)(param_2 + 0x30) == '\x10') {
    uVar2 = *(undefined *)(*(long *)(param_2 + 8) + 0x38);
    *(undefined *)(param_2 + 0x18) = *(undefined *)(*(long *)(param_2 + 8) + 0x18);
    *(undefined *)(param_2 + 0x38) = uVar2;
    return 0;
  }
  *(long *)(param_2 + 0x18) = param_2;
  lVar1 = FUN_00407700(param_1,*(undefined *)(param_2 + 0x28),*(undefined *)(param_2 + 0x30));
  *(long *)(param_2 + 0x38) = lVar1;
  if (lVar1 == -1) {
    uVar2 = 0xc;
  }
  else {
    uVar2 = 0;
    if (*(char *)(param_2 + 0x30) == '\f') {
      lVar1 = lVar1 * 0x10 + *param_1;
      *(uint *)(lVar1 + 8) =
           *(uint *)(lVar1 + 8) & 0xfffc00ff | (*(uint *)(param_2 + 0x28) & 0x3ff) << 8;
    }
  }
  return uVar2;
}


void FUN_0040b610(void **param_1)

{
  long lVar1;
  long *plVar2;
  void *pvVar3;
  void *pvVar4;
  long lVar5;
  void *pvVar6;
  
  pvVar4 = *param_1;
  if ((pvVar4 != (void *)0x0) && (param_1[2] != (void *)0x0)) {
    pvVar6 = (void *)0x0;
    while( true ) {
      pvVar3 = (void *)((long)pvVar6 + 1);
      FUN_004076b0((void *)((long)pvVar4 + (long)pvVar6 * 0x10));
      if (param_1[2] < pvVar3 || param_1[2] == pvVar3) break;
      pvVar4 = *param_1;
      pvVar6 = pvVar3;
    }
  }
  pvVar4 = (void *)0x0;
  free(param_1[3]);
  if (param_1[2] != (void *)0x0) {
    do {
      if (param_1[6] != (void *)0x0) {
        free(*(void **)((long)param_1[6] + (long)pvVar4 * 0x18 + 0x10));
      }
      if (param_1[7] != (void *)0x0) {
        free(*(void **)((long)param_1[7] + (long)pvVar4 * 0x18 + 0x10));
      }
      if (param_1[5] != (void *)0x0) {
        free(*(void **)((long)param_1[5] + (long)pvVar4 * 0x18 + 0x10));
      }
      pvVar4 = (void *)((long)pvVar4 + 1);
    } while (pvVar4 <= param_1[2] && param_1[2] != pvVar4);
  }
  pvVar6 = (void *)0x0;
  free(param_1[5]);
  free(param_1[6]);
  free(param_1[7]);
  free(*param_1);
  pvVar4 = param_1[8];
  if (pvVar4 != (void *)0x0) {
    while( true ) {
      lVar5 = 0;
      plVar2 = (long *)((long)pvVar4 + (long)pvVar6 * 0x18);
      if (0 < *plVar2) {
        do {
          lVar1 = lVar5 * 8;
          lVar5 = lVar5 + 1;
          FUN_00407c00(*(undefined *)(plVar2[2] + lVar1));
        } while (lVar5 < *plVar2);
      }
      pvVar6 = (void *)((long)pvVar6 + 1);
      free((void *)plVar2[2]);
      if (param_1[0x11] < pvVar6) break;
      pvVar4 = param_1[8];
    }
    pvVar4 = param_1[8];
  }
  free(pvVar4);
  if ((undefined *)param_1[0xf] != &DAT_00416f20) {
    free(param_1[0xf]);
  }
  free(param_1[0x1c]);
  free(param_1);
  return;
}


void FUN_0040b790(long *param_1)

{
  long lVar1;
  long lVar2;
  
  if (0 < *param_1) {
    lVar1 = 0;
    do {
      lVar2 = lVar1 + 1;
      free(*(void **)(param_1[2] + 0x28 + lVar1 * 0x30));
      free(*(void **)(param_1[2] + 0x10 + lVar1 * 0x30));
      lVar1 = lVar2;
    } while (lVar2 < *param_1);
  }
  free((void *)param_1[2]);
  return;
}


undefined
FUN_0040b7e0(long *param_1,long *param_2,undefined *param_3,long param_4,void *param_5,
            undefined *param_6)

{
  long lVar1;
  undefined uVar2;
  undefined uVar3;
  undefined uVar4;
  long lVar5;
  
  lVar5 = *param_1 + -1;
  *param_1 = lVar5;
  if (-1 < lVar5) {
    lVar1 = *param_2;
    lVar5 = lVar5 * 0x30;
    *param_3 = *(undefined *)(lVar1 + lVar5);
    memcpy(param_5,(void *)((undefined *)(lVar1 + lVar5))[2],param_4 << 4);
    free(*(void **)(param_6 + 4));
    free(*(void **)(*param_2 + 0x10 + lVar5));
    lVar5 = lVar5 + *param_2;
    uVar2 = *(undefined *)(lVar5 + 0x1c);
    uVar3 = *(undefined *)(lVar5 + 0x20);
    uVar4 = *(undefined *)(lVar5 + 0x24);
    *param_6 = *(undefined *)(lVar5 + 0x18);
    param_6[1] = uVar2;
    param_6[2] = uVar3;
    param_6[3] = uVar4;
    *(undefined *)(param_6 + 4) = *(undefined *)(lVar5 + 0x28);
    return *(undefined *)(lVar5 + 8);
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("num >= 0","lib/regexec.c",0x54f,"pop_fail_stack");
}


undefined FUN_0040b870(long param_1,byte *param_2)

{
  ulong *puVar1;
  size_t sVar2;
  
  sVar2 = strlen((char *)param_2);
  if (sVar2 == 1) {
    puVar1 = (ulong *)(param_1 + (ulong)(*param_2 >> 3 & 0x18));
    *puVar1 = *puVar1 | 1L << (*param_2 & 0x3f);
    return 0;
  }
  return 3;
}


undefined
FUN_0040b8c0(long param_1,long param_2,void **param_3,ulong *param_4,ulong *param_5,char *param_6,
            ulong param_7)

{
  ulong *puVar1;
  ushort *puVar2;
  int iVar3;
  wctype_t wVar4;
  ushort **ppuVar5;
  void *__ptr;
  long lVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  bool bVar10;
  bool bVar11;
  undefined uVar12;
  bool bVar13;
  undefined uVar14;
  byte bVar15;
  
  bVar15 = 0;
  bVar10 = false;
  bVar13 = (param_7 & 0x400000) == 0;
  if (!bVar13) {
    lVar6 = 6;
    pbVar8 = (byte *)param_6;
    pbVar9 = (byte *)"upper";
    do {
      if (lVar6 == 0) break;
      lVar6 = lVar6 + -1;
      bVar10 = *pbVar8 < *pbVar9;
      bVar13 = *pbVar8 == *pbVar9;
      pbVar8 = pbVar8 + 1;
      pbVar9 = pbVar9 + 1;
    } while (bVar13);
    bVar11 = false;
    bVar10 = (!bVar10 && !bVar13) == bVar10;
    if (!bVar10) {
      lVar6 = 6;
      pbVar8 = (byte *)param_6;
      pbVar9 = (byte *)"lower";
      do {
        if (lVar6 == 0) break;
        lVar6 = lVar6 + -1;
        bVar11 = *pbVar8 < *pbVar9;
        bVar10 = *pbVar8 == *pbVar9;
        pbVar8 = pbVar8 + 1;
        pbVar9 = pbVar9 + 1;
      } while (bVar10);
      uVar7 = *param_4;
      if ((!bVar11 && !bVar10) == bVar11) {
        param_6 = "alpha";
      }
      __ptr = *param_3;
      uVar12 = *param_5 < uVar7;
      uVar14 = *param_5 == uVar7;
      goto joined_r0x0040b90f;
    }
    param_6 = "alpha";
  }
  uVar7 = *param_4;
  __ptr = *param_3;
  uVar12 = *param_5 < uVar7;
  uVar14 = *param_5 == uVar7;
joined_r0x0040b90f:
  if ((bool)uVar14) {
    uVar7 = uVar7 * 2 + 1;
    __ptr = realloc(__ptr,uVar7 * 8);
    uVar12 = false;
    uVar14 = __ptr == (void *)0x0;
    if ((bool)uVar14) {
      return 0xc;
    }
    *param_3 = __ptr;
    *param_5 = uVar7;
    uVar7 = *param_4;
  }
  *param_4 = uVar7 + 1;
  wVar4 = wctype(param_6);
  lVar6 = 6;
  *(wctype_t *)((long)__ptr + uVar7 * 8) = wVar4;
  pbVar8 = (byte *)param_6;
  pbVar9 = (byte *)"alnum";
  do {
    if (lVar6 == 0) break;
    lVar6 = lVar6 + -1;
    uVar12 = *pbVar8 < *pbVar9;
    uVar14 = *pbVar8 == *pbVar9;
    pbVar8 = pbVar8 + (ulong)bVar15 * -2 + 1;
    pbVar9 = pbVar9 + (ulong)bVar15 * -2 + 1;
  } while ((bool)uVar14);
  bVar10 = false;
  bVar13 = (!(bool)uVar12 && !(bool)uVar14) == (bool)uVar12;
  if (bVar13) {
    ppuVar5 = __ctype_b_loc();
    lVar6 = 0;
    puVar2 = *ppuVar5;
    if (param_1 == 0) {
      do {
        if ((*(byte *)(puVar2 + lVar6) & 8) != 0) {
          puVar1 = (ulong *)(param_2 + (lVar6 >> 6) * 8);
          *puVar1 = *puVar1 | 1L << ((byte)lVar6 & 0x3f);
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 != 0x100);
    }
    else {
      lVar6 = 0;
      do {
        if ((*(byte *)(puVar2 + lVar6) & 8) != 0) {
          puVar1 = (ulong *)(param_2 + (ulong)(*(byte *)(param_1 + lVar6) >> 3 & 0x18));
          *puVar1 = *puVar1 | 1L << (*(byte *)(param_1 + lVar6) & 0x3f);
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 != 0x100);
    }
  }
  else {
    lVar6 = 6;
    pbVar8 = (byte *)param_6;
    pbVar9 = &DAT_00416511;
    do {
      if (lVar6 == 0) break;
      lVar6 = lVar6 + -1;
      bVar10 = *pbVar8 < *pbVar9;
      bVar13 = *pbVar8 == *pbVar9;
      pbVar8 = pbVar8 + (ulong)bVar15 * -2 + 1;
      pbVar9 = pbVar9 + (ulong)bVar15 * -2 + 1;
    } while (bVar13);
    bVar11 = false;
    bVar10 = (!bVar10 && !bVar13) == bVar10;
    if (bVar10) {
      ppuVar5 = __ctype_b_loc();
      lVar6 = 0;
      puVar2 = *ppuVar5;
      if (param_1 == 0) {
        do {
          if ((*(byte *)(puVar2 + lVar6) & 2) != 0) {
            puVar1 = (ulong *)(param_2 + (lVar6 >> 6) * 8);
            *puVar1 = *puVar1 | 1L << ((byte)lVar6 & 0x3f);
          }
          lVar6 = lVar6 + 1;
        } while (lVar6 != 0x100);
      }
      else {
        lVar6 = 0;
        do {
          if ((*(byte *)(puVar2 + lVar6) & 2) != 0) {
            puVar1 = (ulong *)(param_2 + (ulong)(*(byte *)(param_1 + lVar6) >> 3 & 0x18));
            *puVar1 = *puVar1 | 1L << (*(byte *)(param_1 + lVar6) & 0x3f);
          }
          lVar6 = lVar6 + 1;
        } while (lVar6 != 0x100);
      }
    }
    else {
      lVar6 = 6;
      pbVar8 = (byte *)param_6;
      pbVar9 = (byte *)"lower";
      do {
        if (lVar6 == 0) break;
        lVar6 = lVar6 + -1;
        bVar11 = *pbVar8 < *pbVar9;
        bVar10 = *pbVar8 == *pbVar9;
        pbVar8 = pbVar8 + (ulong)bVar15 * -2 + 1;
        pbVar9 = pbVar9 + (ulong)bVar15 * -2 + 1;
      } while (bVar10);
      bVar13 = false;
      bVar10 = (!bVar11 && !bVar10) == bVar11;
      if (bVar10) {
        ppuVar5 = __ctype_b_loc();
        lVar6 = 0;
        puVar2 = *ppuVar5;
        if (param_1 == 0) {
          do {
            if ((*(byte *)((long)puVar2 + lVar6 * 2 + 1) & 2) != 0) {
              puVar1 = (ulong *)(param_2 + (lVar6 >> 6) * 8);
              *puVar1 = *puVar1 | 1L << ((byte)lVar6 & 0x3f);
            }
            lVar6 = lVar6 + 1;
          } while (lVar6 != 0x100);
        }
        else {
          lVar6 = 0;
          do {
            if ((*(byte *)((long)puVar2 + lVar6 * 2 + 1) & 2) != 0) {
              puVar1 = (ulong *)(param_2 + (ulong)(*(byte *)(param_1 + lVar6) >> 3 & 0x18));
              *puVar1 = *puVar1 | 1L << (*(byte *)(param_1 + lVar6) & 0x3f);
            }
            lVar6 = lVar6 + 1;
          } while (lVar6 != 0x100);
        }
      }
      else {
        lVar6 = 6;
        pbVar8 = (byte *)param_6;
        pbVar9 = (byte *)"space";
        do {
          if (lVar6 == 0) break;
          lVar6 = lVar6 + -1;
          bVar13 = *pbVar8 < *pbVar9;
          bVar10 = *pbVar8 == *pbVar9;
          pbVar8 = pbVar8 + (ulong)bVar15 * -2 + 1;
          pbVar9 = pbVar9 + (ulong)bVar15 * -2 + 1;
        } while (bVar10);
        bVar11 = false;
        bVar10 = (!bVar13 && !bVar10) == bVar13;
        if (bVar10) {
          ppuVar5 = __ctype_b_loc();
          lVar6 = 0;
          puVar2 = *ppuVar5;
          if (param_1 == 0) {
            do {
              if ((*(byte *)((long)puVar2 + lVar6 * 2 + 1) & 0x20) != 0) {
                puVar1 = (ulong *)(param_2 + (lVar6 >> 6) * 8);
                *puVar1 = *puVar1 | 1L << ((byte)lVar6 & 0x3f);
              }
              lVar6 = lVar6 + 1;
            } while (lVar6 != 0x100);
          }
          else {
            lVar6 = 0;
            do {
              if ((*(byte *)((long)puVar2 + lVar6 * 2 + 1) & 0x20) != 0) {
                puVar1 = (ulong *)(param_2 + (ulong)(*(byte *)(param_1 + lVar6) >> 3 & 0x18));
                *puVar1 = *puVar1 | 1L << (*(byte *)(param_1 + lVar6) & 0x3f);
              }
              lVar6 = lVar6 + 1;
            } while (lVar6 != 0x100);
          }
        }
        else {
          lVar6 = 6;
          pbVar8 = (byte *)param_6;
          pbVar9 = (byte *)"alpha";
          do {
            if (lVar6 == 0) break;
            lVar6 = lVar6 + -1;
            bVar11 = *pbVar8 < *pbVar9;
            bVar10 = *pbVar8 == *pbVar9;
            pbVar8 = pbVar8 + (ulong)bVar15 * -2 + 1;
            pbVar9 = pbVar9 + (ulong)bVar15 * -2 + 1;
          } while (bVar10);
          bVar13 = false;
          bVar10 = (!bVar11 && !bVar10) == bVar11;
          if (bVar10) {
            ppuVar5 = __ctype_b_loc();
            lVar6 = 0;
            puVar2 = *ppuVar5;
            if (param_1 == 0) {
              do {
                if ((*(byte *)((long)puVar2 + lVar6 * 2 + 1) & 4) != 0) {
                  puVar1 = (ulong *)(param_2 + (lVar6 >> 6) * 8);
                  *puVar1 = *puVar1 | 1L << ((byte)lVar6 & 0x3f);
                }
                lVar6 = lVar6 + 1;
              } while (lVar6 != 0x100);
            }
            else {
              lVar6 = 0;
              do {
                if ((*(byte *)((long)puVar2 + lVar6 * 2 + 1) & 4) != 0) {
                  puVar1 = (ulong *)(param_2 + (ulong)(*(byte *)(param_1 + lVar6) >> 3 & 0x18));
                  *puVar1 = *puVar1 | 1L << (*(byte *)(param_1 + lVar6) & 0x3f);
                }
                lVar6 = lVar6 + 1;
              } while (lVar6 != 0x100);
            }
          }
          else {
            lVar6 = 6;
            pbVar8 = (byte *)param_6;
            pbVar9 = &DAT_00416536;
            do {
              if (lVar6 == 0) break;
              lVar6 = lVar6 + -1;
              bVar13 = *pbVar8 < *pbVar9;
              bVar10 = *pbVar8 == *pbVar9;
              pbVar8 = pbVar8 + (ulong)bVar15 * -2 + 1;
              pbVar9 = pbVar9 + (ulong)bVar15 * -2 + 1;
            } while (bVar10);
            bVar11 = false;
            bVar10 = (!bVar13 && !bVar10) == bVar13;
            if (bVar10) {
              ppuVar5 = __ctype_b_loc();
              lVar6 = 0;
              puVar2 = *ppuVar5;
              if (param_1 == 0) {
                do {
                  if ((*(byte *)((long)puVar2 + lVar6 * 2 + 1) & 8) != 0) {
                    puVar1 = (ulong *)(param_2 + (lVar6 >> 6) * 8);
                    *puVar1 = *puVar1 | 1L << ((byte)lVar6 & 0x3f);
                  }
                  lVar6 = lVar6 + 1;
                } while (lVar6 != 0x100);
              }
              else {
                lVar6 = 0;
                do {
                  if ((*(byte *)((long)puVar2 + lVar6 * 2 + 1) & 8) != 0) {
                    puVar1 = (ulong *)(param_2 + (ulong)(*(byte *)(param_1 + lVar6) >> 3 & 0x18));
                    *puVar1 = *puVar1 | 1L << (*(byte *)(param_1 + lVar6) & 0x3f);
                  }
                  lVar6 = lVar6 + 1;
                } while (lVar6 != 0x100);
              }
            }
            else {
              lVar6 = 6;
              pbVar8 = (byte *)param_6;
              pbVar9 = (byte *)"print";
              do {
                if (lVar6 == 0) break;
                lVar6 = lVar6 + -1;
                bVar11 = *pbVar8 < *pbVar9;
                bVar10 = *pbVar8 == *pbVar9;
                pbVar8 = pbVar8 + (ulong)bVar15 * -2 + 1;
                pbVar9 = pbVar9 + (ulong)bVar15 * -2 + 1;
              } while (bVar10);
              bVar13 = false;
              bVar10 = (!bVar11 && !bVar10) == bVar11;
              if (bVar10) {
                ppuVar5 = __ctype_b_loc();
                lVar6 = 0;
                puVar2 = *ppuVar5;
                if (param_1 == 0) {
                  do {
                    if ((*(byte *)((long)puVar2 + lVar6 * 2 + 1) & 0x40) != 0) {
                      puVar1 = (ulong *)(param_2 + (lVar6 >> 6) * 8);
                      *puVar1 = *puVar1 | 1L << ((byte)lVar6 & 0x3f);
                    }
                    lVar6 = lVar6 + 1;
                  } while (lVar6 != 0x100);
                }
                else {
                  lVar6 = 0;
                  do {
                    if ((*(byte *)((long)puVar2 + lVar6 * 2 + 1) & 0x40) != 0) {
                      puVar1 = (ulong *)(param_2 + (ulong)(*(byte *)(param_1 + lVar6) >> 3 & 0x18));
                      *puVar1 = *puVar1 | 1L << (*(byte *)(param_1 + lVar6) & 0x3f);
                    }
                    lVar6 = lVar6 + 1;
                  } while (lVar6 != 0x100);
                }
              }
              else {
                lVar6 = 6;
                pbVar8 = (byte *)param_6;
                pbVar9 = (byte *)"upper";
                do {
                  if (lVar6 == 0) break;
                  lVar6 = lVar6 + -1;
                  bVar13 = *pbVar8 < *pbVar9;
                  bVar10 = *pbVar8 == *pbVar9;
                  pbVar8 = pbVar8 + (ulong)bVar15 * -2 + 1;
                  pbVar9 = pbVar9 + (ulong)bVar15 * -2 + 1;
                } while (bVar10);
                bVar11 = false;
                bVar10 = (!bVar13 && !bVar10) == bVar13;
                if (bVar10) {
                  ppuVar5 = __ctype_b_loc();
                  lVar6 = 0;
                  puVar2 = *ppuVar5;
                  if (param_1 == 0) {
                    do {
                      if ((*(byte *)((long)puVar2 + lVar6 * 2 + 1) & 1) != 0) {
                        puVar1 = (ulong *)(param_2 + (lVar6 >> 6) * 8);
                        *puVar1 = *puVar1 | 1L << ((byte)lVar6 & 0x3f);
                      }
                      lVar6 = lVar6 + 1;
                    } while (lVar6 != 0x100);
                  }
                  else {
                    lVar6 = 0;
                    do {
                      if ((*(byte *)((long)puVar2 + lVar6 * 2 + 1) & 1) != 0) {
                        puVar1 = (ulong *)(param_2 + (ulong)(*(byte *)(param_1 + lVar6) >> 3 & 0x18)
                                          );
                        *puVar1 = *puVar1 | 1L << (*(byte *)(param_1 + lVar6) & 0x3f);
                      }
                      lVar6 = lVar6 + 1;
                    } while (lVar6 != 0x100);
                  }
                }
                else {
                  lVar6 = 6;
                  pbVar8 = (byte *)param_6;
                  pbVar9 = (byte *)"blank";
                  do {
                    if (lVar6 == 0) break;
                    lVar6 = lVar6 + -1;
                    bVar11 = *pbVar8 < *pbVar9;
                    bVar10 = *pbVar8 == *pbVar9;
                    pbVar8 = pbVar8 + (ulong)bVar15 * -2 + 1;
                    pbVar9 = pbVar9 + (ulong)bVar15 * -2 + 1;
                  } while (bVar10);
                  bVar13 = false;
                  bVar10 = (!bVar11 && !bVar10) == bVar11;
                  if (bVar10) {
                    ppuVar5 = __ctype_b_loc();
                    lVar6 = 0;
                    puVar2 = *ppuVar5;
                    if (param_1 == 0) {
                      do {
                        if ((*(byte *)(puVar2 + lVar6) & 1) != 0) {
                          puVar1 = (ulong *)(param_2 + (lVar6 >> 6) * 8);
                          *puVar1 = *puVar1 | 1L << ((byte)lVar6 & 0x3f);
                        }
                        lVar6 = lVar6 + 1;
                      } while (lVar6 != 0x100);
                    }
                    else {
                      lVar6 = 0;
                      do {
                        if ((*(byte *)(puVar2 + lVar6) & 1) != 0) {
                          puVar1 = (ulong *)(param_2 +
                                            (ulong)(*(byte *)(param_1 + lVar6) >> 3 & 0x18));
                          *puVar1 = *puVar1 | 1L << (*(byte *)(param_1 + lVar6) & 0x3f);
                        }
                        lVar6 = lVar6 + 1;
                      } while (lVar6 != 0x100);
                    }
                  }
                  else {
                    lVar6 = 6;
                    pbVar8 = (byte *)param_6;
                    pbVar9 = (byte *)"graph";
                    do {
                      if (lVar6 == 0) break;
                      lVar6 = lVar6 + -1;
                      bVar13 = *pbVar8 < *pbVar9;
                      bVar10 = *pbVar8 == *pbVar9;
                      pbVar8 = pbVar8 + (ulong)bVar15 * -2 + 1;
                      pbVar9 = pbVar9 + (ulong)bVar15 * -2 + 1;
                    } while (bVar10);
                    if ((!bVar13 && !bVar10) == bVar13) {
                      ppuVar5 = __ctype_b_loc();
                      lVar6 = 0;
                      puVar2 = *ppuVar5;
                      if (param_1 == 0) {
                        do {
                          if ((short)puVar2[lVar6] < 0) {
                            puVar1 = (ulong *)(param_2 + (lVar6 >> 6) * 8);
                            *puVar1 = *puVar1 | 1L << ((byte)lVar6 & 0x3f);
                          }
                          lVar6 = lVar6 + 1;
                        } while (lVar6 != 0x100);
                      }
                      else {
                        lVar6 = 0;
                        do {
                          if ((short)puVar2[lVar6] < 0) {
                            puVar1 = (ulong *)(param_2 +
                                              (ulong)(*(byte *)(param_1 + lVar6) >> 3 & 0x18));
                            *puVar1 = *puVar1 | 1L << (*(byte *)(param_1 + lVar6) & 0x3f);
                          }
                          lVar6 = lVar6 + 1;
                        } while (lVar6 != 0x100);
                      }
                    }
                    else {
                      iVar3 = strcmp(param_6,"punct");
                      if (iVar3 == 0) {
                        ppuVar5 = __ctype_b_loc();
                        lVar6 = 0;
                        puVar2 = *ppuVar5;
                        if (param_1 == 0) {
                          do {
                            if ((*(byte *)(puVar2 + lVar6) & 4) != 0) {
                              puVar1 = (ulong *)(param_2 + (lVar6 >> 6) * 8);
                              *puVar1 = *puVar1 | 1L << ((byte)lVar6 & 0x3f);
                            }
                            lVar6 = lVar6 + 1;
                          } while (lVar6 != 0x100);
                        }
                        else {
                          lVar6 = 0;
                          do {
                            if ((*(byte *)(puVar2 + lVar6) & 4) != 0) {
                              puVar1 = (ulong *)(param_2 +
                                                (ulong)(*(byte *)(param_1 + lVar6) >> 3 & 0x18));
                              *puVar1 = *puVar1 | 1L << (*(byte *)(param_1 + lVar6) & 0x3f);
                            }
                            lVar6 = lVar6 + 1;
                          } while (lVar6 != 0x100);
                        }
                      }
                      else {
                        iVar3 = strcmp(param_6,"xdigit");
                        if (iVar3 != 0) {
                          return 4;
                        }
                        ppuVar5 = __ctype_b_loc();
                        lVar6 = 0;
                        puVar2 = *ppuVar5;
                        if (param_1 == 0) {
                          do {
                            if ((*(byte *)((long)puVar2 + lVar6 * 2 + 1) & 0x10) != 0) {
                              puVar1 = (ulong *)(param_2 + (lVar6 >> 6) * 8);
                              *puVar1 = *puVar1 | 1L << ((byte)lVar6 & 0x3f);
                            }
                            lVar6 = lVar6 + 1;
                          } while (lVar6 != 0x100);
                        }
                        else {
                          lVar6 = 0;
                          do {
                            if ((*(byte *)((long)puVar2 + lVar6 * 2 + 1) & 0x10) != 0) {
                              puVar1 = (ulong *)(param_2 +
                                                (ulong)(*(byte *)(param_1 + lVar6) >> 3 & 0x18));
                              *puVar1 = *puVar1 | 1L << (*(byte *)(param_1 + lVar6) & 0x3f);
                            }
                            lVar6 = lVar6 + 1;
                          } while (lVar6 != 0x100);
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
  return 0;
}


long FUN_0040c090(long param_1,undefined param_2,undefined param_3,char *param_4,byte param_5,
                 int *param_6)

{
  char cVar1;
  int iVar2;
  ulong *__ptr;
  ulong *puVar3;
  ulong *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  byte bVar8;
  long lVar9;
  undefined local_60;
  ulong *local_58;
  undefined local_50;
  undefined local_48 [8];
  undefined local_40;
  
  local_60 = 0;
  __ptr = (ulong *)calloc(0x20,1);
  if (__ptr != (ulong *)0x0) {
    puVar3 = (ulong *)calloc(0x50,1);
    if (puVar3 == (ulong *)0x0) {
      free(__ptr);
      *param_6 = 0xc;
      return 0;
    }
    *(byte *)(puVar3 + 4) = *(byte *)(puVar3 + 4) & 0xfe | param_5 & 1;
    iVar2 = FUN_0040b8c0(param_2,__ptr,puVar3 + 3,puVar3 + 9,&local_60,param_3,0);
    if (iVar2 != 0) {
      free(__ptr);
      FUN_00407690(puVar3);
      *param_6 = iVar2;
      return 0;
    }
    cVar1 = *param_4;
    while (cVar1 != '\0') {
      lVar9 = (long)cVar1;
      lVar7 = lVar9 + 0x3f;
      if (-1 < lVar9) {
        lVar7 = lVar9;
      }
      param_4 = param_4 + 1;
      bVar8 = cVar1 % '@';
      cVar1 = *param_4;
      __ptr[lVar7 >> 6] = __ptr[lVar7 >> 6] | 1L << (bVar8 & 0x3f);
    }
    if (param_5 != 0) {
      puVar4 = __ptr;
      do {
        *puVar4 = ~*puVar4;
        puVar4 = puVar4 + 1;
      } while (__ptr + 4 != puVar4);
    }
    if (1 < *(int *)(param_1 + 0xb4)) {
      lVar7 = *(long *)(param_1 + 0x78);
      lVar9 = 0;
      do {
        *(ulong *)((long)__ptr + lVar9) =
             *(ulong *)((long)__ptr + lVar9) & *(ulong *)(lVar7 + lVar9);
        lVar9 = lVar9 + 8;
      } while (lVar9 != 0x20);
    }
    lVar7 = param_1 + 0x70;
    lVar9 = param_1 + 0x80;
    local_50 = 3;
    local_58 = __ptr;
    lVar5 = FUN_00408ca0(lVar7,lVar9,0,0,&local_58);
    if (lVar5 != 0) {
      if (*(int *)(param_1 + 0xb4) < 2) {
        FUN_00407690(puVar3);
        return lVar5;
      }
      *(byte *)(param_1 + 0xb0) = *(byte *)(param_1 + 0xb0) | 2;
      local_50 = 6;
      local_58 = puVar3;
      lVar6 = FUN_00408ca0(lVar7,lVar9,0,0,&local_58);
      if (lVar6 != 0) {
        local_40 = 10;
        lVar7 = FUN_00408ca0(lVar7,lVar9,lVar5,lVar6,local_48);
        return lVar7;
      }
    }
    free(__ptr);
    FUN_00407690(puVar3);
  }
  *param_6 = 0xc;
  return 0;
}


/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040c2d0(long **param_1,long *param_2,long *param_3,undefined *param_4)

{
  long **pplVar1;
  byte bVar2;
  long *plVar3;
  long *plVar4;
  undefined uVar5;
  undefined uVar6;
  undefined uVar7;
  undefined uVar8;
  wchar_t wVar9;
  long lVar10;
  __int32_t **pp_Var11;
  undefined *puVar12;
  long lVar13;
  size_t sVar14;
  ulong uVar15;
  long lVar16;
  undefined *puVar17;
  undefined *puVar18;
  long lVar19;
  uint uVar20;
  uint uVar21;
  ulong uVar22;
  long local_170;
  wint_t local_144;
  mbstate_t local_140;
  undefined local_138;
  
  uVar20 = 0;
  plVar3 = *param_1;
  if (*(int *)((long)plVar3 + 0xb4) == 1) {
    uVar20 = (uint)((ulong)param_1[3] >> 0x16) & 1;
  }
  lVar16 = 0;
  if (0 < *param_2) {
    do {
      while( true ) {
        uVar8 = _UNK_0041716c;
        uVar7 = _UNK_00417168;
        uVar6 = _UNK_00417164;
        uVar5 = _DAT_00417160;
        lVar19 = *(long *)(*param_3 + lVar16 * 8);
        lVar13 = *plVar3;
        lVar10 = lVar19 * 0x10;
        pplVar1 = (long **)(lVar13 + lVar10);
        bVar2 = *(byte *)(pplVar1 + 1);
        if (bVar2 == 1) break;
        if (bVar2 == 3) {
          local_170 = 0;
          while( true ) {
            uVar22 = 0;
            uVar15 = *(ulong *)(*(long *)(lVar13 + lVar10) + local_170);
            lVar19 = local_170 * 8;
            do {
              if (((uVar15 >> (uVar22 & 0x3f) & 1) != 0) &&
                 (*(undefined *)((long)param_4 + lVar19) = 1, uVar20 != 0)) {
                lVar13 = lVar19;
                if ((int)lVar19 + 0x80U < 0x180) {
                  pp_Var11 = __ctype_tolower_loc();
                  lVar13 = (long)(*pp_Var11)[lVar19];
                }
                *(undefined *)((long)param_4 + lVar13) = 1;
              }
              uVar21 = (int)uVar22 + 1;
              uVar22 = (ulong)uVar21;
              lVar19 = lVar19 + 1;
            } while (uVar21 != 0x40);
            local_170 = local_170 + 8;
            if (local_170 == 0x20) break;
            lVar13 = *plVar3;
          }
        }
        else if (bVar2 == 6) {
          plVar4 = *pplVar1;
          if ((*(int *)((long)plVar3 + 0xb4) < 2) ||
             (((plVar4[9] == 0 && ((*(byte *)(plVar4 + 4) & 1) == 0)) && (plVar4[8] == 0)))) {
            lVar19 = 0;
            if (0 < plVar4[5]) {
              do {
                local_140 = (mbstate_t)0x0;
                sVar14 = wcrtomb((char *)&local_138,*(wchar_t *)(*plVar4 + lVar19 * 4),&local_140);
                if (sVar14 != 0xffffffffffffffff) {
                  uVar15 = local_138 & 0xff;
                  *(undefined *)((long)param_4 + uVar15) = 1;
                  if (uVar20 != 0) {
                    pp_Var11 = __ctype_tolower_loc();
                    *(undefined *)((long)param_4 + (long)(*pp_Var11)[uVar15]) = 1;
                  }
                }
                if (((*(byte *)((long)param_1 + 0x1a) & 0x40) != 0) &&
                   (1 < *(int *)((long)plVar3 + 0xb4))) {
                  wVar9 = towlower(*(wint_t *)(*plVar4 + lVar19 * 4));
                  sVar14 = wcrtomb((char *)&local_138,wVar9,&local_140);
                  if (sVar14 != 0xffffffffffffffff) {
                    *(undefined *)((long)param_4 + (local_138 & 0xff)) = 1;
                  }
                }
                lVar19 = lVar19 + 1;
              } while (lVar19 < plVar4[5]);
            }
          }
          else {
            local_140 = (mbstate_t)((ulong)local_140 & 0xffffffffffffff00);
            do {
              local_138 = 0;
              lVar19 = FUN_00406400(0,&local_140,1,&local_138);
              if (lVar19 == -2) {
                *(undefined *)((long)param_4 + ((ulong)local_140 & 0xff)) = 1;
              }
              local_140 = (mbstate_t)
                          ((ulong)local_140 & 0xffffffffffffff00 |
                          (ulong)(byte)((char)local_140.__count + 1U));
            } while ((byte)((char)local_140.__count + 1U) != 0);
          }
        }
        else {
          if ((bVar2 & 0xfd) == 5) {
            *param_4 = _DAT_00417160;
            param_4[1] = uVar6;
            param_4[2] = uVar7;
            param_4[3] = uVar8;
            param_4[4] = uVar5;
            param_4[5] = uVar6;
            param_4[6] = uVar7;
            param_4[7] = uVar8;
            param_4[8] = uVar5;
            param_4[9] = uVar6;
            param_4[10] = uVar7;
            param_4[0xb] = uVar8;
            param_4[0xc] = uVar5;
            param_4[0xd] = uVar6;
            param_4[0xe] = uVar7;
            param_4[0xf] = uVar8;
            param_4[0x10] = uVar5;
            param_4[0x11] = uVar6;
            param_4[0x12] = uVar7;
            param_4[0x13] = uVar8;
            param_4[0x14] = uVar5;
            param_4[0x15] = uVar6;
            param_4[0x16] = uVar7;
            param_4[0x17] = uVar8;
            param_4[0x18] = uVar5;
            param_4[0x19] = uVar6;
            param_4[0x1a] = uVar7;
            param_4[0x1b] = uVar8;
            param_4[0x1c] = uVar5;
            param_4[0x1d] = uVar6;
            param_4[0x1e] = uVar7;
            param_4[0x1f] = uVar8;
            param_4[0x20] = uVar5;
            param_4[0x21] = uVar6;
            param_4[0x22] = uVar7;
            param_4[0x23] = uVar8;
            param_4[0x24] = uVar5;
            param_4[0x25] = uVar6;
            param_4[0x26] = uVar7;
            param_4[0x27] = uVar8;
            param_4[0x28] = uVar5;
            param_4[0x29] = uVar6;
            param_4[0x2a] = uVar7;
            param_4[0x2b] = uVar8;
            param_4[0x2c] = uVar5;
            param_4[0x2d] = uVar6;
            param_4[0x2e] = uVar7;
            param_4[0x2f] = uVar8;
            param_4[0x30] = uVar5;
            param_4[0x31] = uVar6;
            param_4[0x32] = uVar7;
            param_4[0x33] = uVar8;
            param_4[0x34] = uVar5;
            param_4[0x35] = uVar6;
            param_4[0x36] = uVar7;
            param_4[0x37] = uVar8;
            param_4[0x38] = uVar5;
            param_4[0x39] = uVar6;
            param_4[0x3a] = uVar7;
            param_4[0x3b] = uVar8;
            param_4[0x3c] = uVar5;
            param_4[0x3d] = uVar6;
            param_4[0x3e] = uVar7;
            param_4[0x3f] = uVar8;
            if (bVar2 != 2) {
              return;
            }
LAB_0040c78f:
            *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) | 1;
            return;
          }
          if (bVar2 == 2) {
            *param_4 = _DAT_00417160;
            param_4[1] = uVar6;
            param_4[2] = uVar7;
            param_4[3] = uVar8;
            param_4[4] = uVar5;
            param_4[5] = uVar6;
            param_4[6] = uVar7;
            param_4[7] = uVar8;
            param_4[8] = uVar5;
            param_4[9] = uVar6;
            param_4[10] = uVar7;
            param_4[0xb] = uVar8;
            param_4[0xc] = uVar5;
            param_4[0xd] = uVar6;
            param_4[0xe] = uVar7;
            param_4[0xf] = uVar8;
            param_4[0x10] = uVar5;
            param_4[0x11] = uVar6;
            param_4[0x12] = uVar7;
            param_4[0x13] = uVar8;
            param_4[0x14] = uVar5;
            param_4[0x15] = uVar6;
            param_4[0x16] = uVar7;
            param_4[0x17] = uVar8;
            param_4[0x18] = uVar5;
            param_4[0x19] = uVar6;
            param_4[0x1a] = uVar7;
            param_4[0x1b] = uVar8;
            param_4[0x1c] = uVar5;
            param_4[0x1d] = uVar6;
            param_4[0x1e] = uVar7;
            param_4[0x1f] = uVar8;
            param_4[0x20] = uVar5;
            param_4[0x21] = uVar6;
            param_4[0x22] = uVar7;
            param_4[0x23] = uVar8;
            param_4[0x24] = uVar5;
            param_4[0x25] = uVar6;
            param_4[0x26] = uVar7;
            param_4[0x27] = uVar8;
            param_4[0x28] = uVar5;
            param_4[0x29] = uVar6;
            param_4[0x2a] = uVar7;
            param_4[0x2b] = uVar8;
            param_4[0x2c] = uVar5;
            param_4[0x2d] = uVar6;
            param_4[0x2e] = uVar7;
            param_4[0x2f] = uVar8;
            param_4[0x30] = uVar5;
            param_4[0x31] = uVar6;
            param_4[0x32] = uVar7;
            param_4[0x33] = uVar8;
            param_4[0x34] = uVar5;
            param_4[0x35] = uVar6;
            param_4[0x36] = uVar7;
            param_4[0x37] = uVar8;
            param_4[0x38] = uVar5;
            param_4[0x39] = uVar6;
            param_4[0x3a] = uVar7;
            param_4[0x3b] = uVar8;
            param_4[0x3c] = uVar5;
            param_4[0x3d] = uVar6;
            param_4[0x3e] = uVar7;
            param_4[0x3f] = uVar8;
            goto LAB_0040c78f;
          }
        }
LAB_0040c34f:
        lVar16 = lVar16 + 1;
        if (*param_2 <= lVar16) {
          return;
        }
      }
      bVar2 = *(byte *)pplVar1;
      *(undefined *)((long)param_4 + (ulong)bVar2) = 1;
      if (uVar20 != 0) {
        pp_Var11 = __ctype_tolower_loc();
        *(undefined *)((long)param_4 + (long)(*pp_Var11)[bVar2]) = 1;
      }
      if (((*(byte *)((long)param_1 + 0x1a) & 0x40) == 0) || (*(int *)((long)plVar3 + 0xb4) < 2))
      goto LAB_0040c34f;
      local_138 = local_138 & 0xffffffffffffff00 | (ulong)*(byte *)(*plVar3 + lVar10);
      uVar15 = lVar19 + 1;
      if (((ulong)plVar3[2] < uVar15 || plVar3[2] == uVar15) ||
         (puVar12 = (undefined *)(*plVar3 + 0x10 + lVar10),
         (*(uint *)(puVar12 + 8) & 0x2000ff) != 0x200001)) {
        lVar19 = 1;
      }
      else {
        puVar17 = (undefined *)((long)&local_138 + 1);
        do {
          puVar18 = puVar17 + 1;
          uVar15 = uVar15 + 1;
          *puVar17 = *puVar12;
          if ((ulong)plVar3[2] < uVar15 || plVar3[2] == uVar15) break;
          puVar12 = (undefined *)(uVar15 * 0x10 + *plVar3);
          puVar17 = puVar18;
        } while ((*(uint *)(puVar12 + 8) & 0x2000ff) == 0x200001);
        lVar19 = (long)puVar18 - (long)&local_138;
      }
      local_140 = (mbstate_t)0x0;
      lVar13 = FUN_00406400(&local_144,&local_138,lVar19,&local_140);
      if (lVar13 != lVar19) goto LAB_0040c34f;
      wVar9 = towlower(local_144);
      sVar14 = wcrtomb((char *)&local_138,wVar9,&local_140);
      if (sVar14 == 0xffffffffffffffff) goto LAB_0040c34f;
      lVar16 = lVar16 + 1;
      *(undefined *)((long)param_4 + (local_138 & 0xff)) = 1;
    } while (lVar16 < *param_2);
  }
  return;
}


int FUN_0040c7b0(long param_1,ulong *param_2,long param_3,long param_4,long param_5)

{
  byte bVar1;
  wint_t __wc;
  wint_t **ppwVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  wint_t *pwVar6;
  wint_t *pwVar7;
  char *pcVar8;
  long lVar9;
  wint_t *pwVar10;
  long lVar11;
  undefined *puVar12;
  char cVar13;
  
  puVar12 = (undefined *)(param_1 + param_3 * 0x10);
  cVar13 = *(char *)(puVar12 + 1);
  if (cVar13 == '\a') {
    lVar9 = *(long *)(param_4 + 8);
    bVar3 = *(byte *)(lVar9 + param_5);
    if (0xc1 < bVar3) {
      if (param_5 + 1 < *(long *)(param_4 + 0x58)) {
        bVar1 = *(byte *)(lVar9 + 1 + param_5);
        if (bVar3 < 0xe0) {
          if ((byte)(bVar1 + 0x80) < 0x40) {
            return 2;
          }
        }
        else {
          if (bVar3 < 0xf0) {
            if ((bVar3 == 0xe0) && (bVar1 < 0xa0)) {
              return 0;
            }
            lVar11 = 3;
            iVar4 = 3;
          }
          else if (bVar3 < 0xf8) {
            if ((bVar3 == 0xf0) && (bVar1 < 0x90)) {
              return 0;
            }
            lVar11 = 4;
            iVar4 = 4;
          }
          else if (bVar3 < 0xfc) {
            if ((bVar3 == 0xf8) && (bVar1 < 0x88)) {
              return 0;
            }
            lVar11 = 5;
            iVar4 = 5;
          }
          else {
            if (0xfd < bVar3) {
              return 0;
            }
            if ((bVar3 == 0xfc) && (bVar1 < 0x84)) {
              return 0;
            }
            lVar11 = 6;
            iVar4 = 6;
          }
          if (param_5 + lVar11 <= *(long *)(param_4 + 0x58)) {
            pcVar8 = (char *)(lVar9 + param_5 + 1);
            while ((byte)(*pcVar8 + 0x80U) < 0x40) {
              pcVar8 = pcVar8 + 1;
              if ((char *)(lVar9 + param_5 + lVar11) == pcVar8) {
                return iVar4;
              }
            }
          }
        }
      }
    }
  }
  else if (*(int *)(param_4 + 0x90) != 1) {
    iVar4 = FUN_00407fe0(param_4,param_5);
    if (cVar13 == '\x05') {
      if (iVar4 < 2) {
        return 0;
      }
      if (((*param_2 & 0x40) == 0) && (*(char *)(*(long *)(param_4 + 8) + param_5) == '\n')) {
        return 0;
      }
      if ((*param_2 & 0x80) == 0) {
        return iVar4;
      }
      bVar3 = *(byte *)(*(long *)(param_4 + 8) + param_5);
    }
    else {
      if (cVar13 != '\x06') {
        return 0;
      }
      if (iVar4 < 2) {
        return 0;
      }
      ppwVar2 = (wint_t **)*puVar12;
      pwVar10 = ppwVar2[8];
      pwVar7 = ppwVar2[5];
      if ((pwVar10 != (wint_t *)0x0) || (((ulong)pwVar7 | (ulong)ppwVar2[9]) != 0)) {
        __wc = *(wint_t *)(*(long *)(param_4 + 0x10) + param_5 * 4);
        if (0 < (long)pwVar7) {
          if (__wc != **ppwVar2) {
            pwVar6 = (wint_t *)0x0;
            do {
              pwVar6 = (wint_t *)((long)pwVar6 + 1);
              if (pwVar7 == pwVar6) goto LAB_0040c88f;
            } while (__wc != (*ppwVar2)[(long)pwVar6]);
          }
LAB_0040c8c2:
          if ((*(byte *)(ppwVar2 + 4) & 1) != 0) {
            return 0;
          }
          return iVar4;
        }
LAB_0040c88f:
        if (0 < (long)ppwVar2[9]) {
          lVar9 = 0;
          do {
            iVar5 = iswctype(__wc,*(wctype_t *)(ppwVar2[3] + lVar9 * 2));
            if (iVar5 != 0) goto LAB_0040c8c2;
            lVar9 = lVar9 + 1;
          } while (lVar9 < (long)ppwVar2[9]);
          pwVar10 = ppwVar2[8];
        }
        if (0 < (long)pwVar10) {
          pwVar7 = (wint_t *)0x0;
          do {
            if (((int)ppwVar2[1][(long)pwVar7] <= (int)__wc) &&
               ((int)__wc <= (int)ppwVar2[2][(long)pwVar7])) goto LAB_0040c8c2;
            pwVar7 = (wint_t *)((long)pwVar7 + 1);
          } while (pwVar7 != pwVar10);
        }
      }
      bVar3 = *(byte *)(ppwVar2 + 4) & 1;
    }
    if (bVar3 != 0) {
      return iVar4;
    }
  }
  return 0;
}


/* WARNING: Could not reconcile some variable overlaps */

ulong FUN_0040ca40(long param_1,long *param_2,long param_3,long param_4,undefined param_5,
                  long param_6,undefined param_7)

{
  long *plVar1;
  undefined uVar2;
  undefined uVar3;
  undefined uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  char cVar8;
  undefined uVar9;
  int iVar10;
  long lVar11;
  undefined uVar12;
  long lVar13;
  ulong uVar14;
  void *pvVar15;
  long lVar16;
  long local_f0;
  long local_e8;
  uint local_80;
  uint local_7c;
  undefined local_78 [16];
  long *local_68;
  undefined local_58 [16];
  void *local_48;
  
  plVar1 = *(long **)(param_1 + 0x98);
  lVar13 = param_2[1];
  uVar2 = *(undefined *)(param_3 * 0x10 + *plVar1);
  local_80 = 0;
  lVar11 = *(int *)(param_1 + 0xe0) + param_6;
  if (lVar13 <= lVar11) {
    lVar11 = lVar11 + 1;
    if (0x7fffffffffffffff - lVar13 < lVar11) {
      return 0xc;
    }
    uVar14 = lVar13 + lVar11;
    if (0x1fffffffffffffff < uVar14) {
      return 0xc;
    }
    pvVar15 = realloc((void *)param_2[2],uVar14 * 8);
    if (pvVar15 == (void *)0x0) {
      return 0xc;
    }
    param_2[2] = (long)pvVar15;
    param_2[1] = uVar14;
    memset((void *)((long)pvVar15 + lVar13 * 8),0,lVar11 * 8);
  }
  uVar3 = *(undefined *)(param_1 + 0xb8);
  lVar11 = *param_2;
  lVar13 = param_2[2];
  uVar4 = *(undefined *)(param_1 + 0x48);
  *(long *)(param_1 + 0xb8) = lVar13;
  if (lVar11 == 0) {
    *(long *)(param_1 + 0x48) = param_4;
    uVar9 = FUN_00409d60(param_1,param_4 + -1,*(undefined *)(param_1 + 0xa0));
LAB_0040d014:
    local_78 = CONCAT88(1,1);
    local_68 = (long *)malloc(8);
    if (local_68 == (long *)0x0) {
      return 0xc;
    }
    *local_68 = param_3;
    local_80 = 0;
    local_80 = FUN_004089a0(plVar1,local_78,uVar2,param_7);
    if (local_80 != 0) goto LAB_0040cef5;
  }
  else {
    *(long *)(param_1 + 0x48) = lVar11;
    uVar9 = FUN_00409d60(param_1,lVar11 + -1,*(undefined *)(param_1 + 0xa0));
    if (lVar11 == param_4) goto LAB_0040d014;
    lVar13 = *(long *)(lVar13 + lVar11 * 8);
    param_4 = lVar11;
    if ((lVar13 == 0) || ((*(byte *)(lVar13 + 0x68) & 0x40) == 0)) {
      local_68 = (long *)0x0;
      local_78 = (undefined)0x0;
      goto LAB_0040cb2b;
    }
    uVar14 = FUN_004090d0(local_78,lVar13 + 8);
    local_80 = (uint)uVar14;
    if (local_80 != 0) {
      return uVar14;
    }
    if ((*(byte *)(lVar13 + 0x68) & 0x40) == 0) goto LAB_0040cb2b;
  }
  if (((local_78._8_8_ == 0) ||
      (local_80 = FUN_00409880(param_1,local_78,param_4,uVar2,param_7), local_80 == 0)) &&
     ((lVar13 = FUN_004092e0(&local_80,plVar1,local_78,uVar9), lVar13 != 0 || (local_80 == 0)))) {
    *(long *)(*(long *)(param_1 + 0xb8) + param_4 * 8) = lVar13;
LAB_0040cb2b:
    if ((param_4 < param_6) && (-1 < *(int *)(param_1 + 0xe0))) {
      local_e8 = 0;
      lVar11 = *(long *)(param_1 + 0xb8);
      lVar7 = param_4;
      do {
        param_4 = lVar7 + 1;
        lVar11 = *(long *)(lVar11 + param_4 * 8);
        local_78 = local_78 & (undefined)0xffffffffffffffff;
        if (lVar11 == 0) {
          if (lVar13 != 0) goto LAB_0040cbb2;
        }
        else {
          local_80 = FUN_00408570(local_78,lVar11 + 8);
          if (local_80 != 0) goto LAB_0040cef5;
          if (lVar13 != 0) {
LAB_0040cbb2:
            plVar5 = *(long **)(param_1 + 0x98);
            local_7c = 0;
            local_58 = (undefined)0x0;
            local_48 = (void *)0x0;
            if (0 < *(long *)(lVar13 + 0x28)) {
              lVar11 = 0;
              do {
                local_f0 = *(long *)(*(long *)(lVar13 + 0x30) + lVar11 * 8);
                lVar16 = *plVar5 + local_f0 * 0x10;
                if ((*(byte *)(lVar16 + 10) & 0x10) != 0) {
                  iVar10 = FUN_0040c7b0(*plVar5,plVar5 + 0x1b,local_f0,param_1,lVar7);
                  if (iVar10 < 2) {
                    if (iVar10 == 0) {
                      lVar16 = local_f0 * 0x10 + *plVar5;
                      goto LAB_0040cc00;
                    }
                    goto LAB_0040cc1d;
                  }
                  lVar16 = iVar10 + lVar7;
                  uVar12 = *(undefined *)(plVar5[3] + local_f0 * 8);
                  lVar6 = *(long *)(*(long *)(param_1 + 0xb8) + lVar16 * 8);
                  local_58 = local_58 & (undefined)0xffffffffffffffff;
                  if ((lVar6 == 0) || (local_7c = FUN_00408570(local_58,lVar6 + 8), local_7c == 0))
                  {
                    cVar8 = FUN_00406a20(local_58,uVar12);
                    if (cVar8 == '\0') goto LAB_0040cee0;
                    lVar6 = *(long *)(param_1 + 0xb8);
                    uVar12 = FUN_004095e0(&local_7c,plVar5,local_58);
                    *(undefined *)(lVar16 * 8 + lVar6) = uVar12;
                    if ((*(long *)(*(long *)(param_1 + 0xb8) + lVar16 * 8) != 0) || (local_7c == 0))
                    goto LAB_0040cc1d;
                  }
                  free(local_48);
                  local_80 = local_7c;
                  if (local_7c == 0) goto LAB_0040cd78;
                  goto LAB_0040cef5;
                }
LAB_0040cc00:
                cVar8 = FUN_00409e50(param_1,lVar16,lVar7);
                if (cVar8 != '\0') {
LAB_0040cc1d:
                  local_f0 = local_f0 * 8;
                  cVar8 = FUN_00406a20(local_78,*(undefined *)(plVar5[3] + local_f0));
                  if (cVar8 == '\0') {
LAB_0040cee0:
                    free(local_48);
                    local_80 = 0xc;
                    goto LAB_0040cef5;
                  }
                }
                lVar11 = lVar11 + 1;
              } while (lVar11 < *(long *)(lVar13 + 0x28));
            }
            free(local_48);
            local_80 = 0;
          }
LAB_0040cd78:
          if ((local_78._8_8_ != 0) &&
             ((local_80 = FUN_004089a0(plVar1,local_78,uVar2,param_7), local_80 != 0 ||
              (local_80 = FUN_00409880(param_1,local_78,param_4,uVar2,param_7), local_80 != 0))))
          goto LAB_0040cef5;
        }
        uVar9 = FUN_00409d60(param_1,lVar7,*(undefined *)(param_1 + 0xa0));
        lVar13 = FUN_004092e0(&local_80,plVar1,local_78,uVar9);
        if (lVar13 == 0) {
          if (local_80 != 0) goto LAB_0040cef5;
          lVar11 = *(long *)(param_1 + 0xb8);
          local_e8 = local_e8 + 1;
          *(undefined *)(lVar11 + param_4 * 8) = 0;
        }
        else {
          lVar11 = *(long *)(param_1 + 0xb8);
          local_e8 = 0;
          *(long *)(lVar11 + param_4 * 8) = lVar13;
        }
      } while ((param_4 < param_6) && (lVar7 = param_4, local_e8 <= *(int *)(param_1 + 0xe0)));
    }
    free(local_68);
    lVar11 = *(long *)(*(long *)(param_1 + 0xb8) + param_6 * 8);
    if (lVar11 == 0) {
      *param_2 = param_4;
      *(undefined *)(param_1 + 0xb8) = uVar3;
      *(undefined *)(param_1 + 0x48) = uVar4;
      return 1;
    }
    *param_2 = param_4;
    *(undefined *)(param_1 + 0xb8) = uVar3;
    *(undefined *)(param_1 + 0x48) = uVar4;
    lVar11 = FUN_00408030(*(undefined *)(lVar11 + 0x10),lVar11 + 0x18,param_5);
    return (ulong)(lVar11 == 0);
  }
LAB_0040cef5:
  free(local_68);
  return (ulong)local_80;
}


/* WARNING: Could not reconcile some variable overlaps */

ulong FUN_0040d160(long **param_1,size_t param_2,long param_3,size_t *param_4,char param_5)

{
  long *plVar1;
  undefined uVar2;
  size_t sVar3;
  size_t sVar4;
  char cVar5;
  int iVar6;
  size_t sVar7;
  long lVar8;
  long lVar9;
  size_t sVar10;
  void *pvVar11;
  size_t sVar12;
  undefined *puVar13;
  long *plVar14;
  size_t sVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  size_t *psVar19;
  undefined auStack_10a0 [505];
  undefined auStack_d8 [8];
  size_t local_d0;
  char local_c1;
  void **local_c0;
  void *local_b8;
  size_t local_b0;
  size_t local_a8;
  long local_a0;
  long *local_98;
  undefined local_90;
  size_t local_80;
  undefined local_78 [16];
  void *local_68 [2];
  long local_58;
  undefined local_50;
  void *local_48;
  
  puVar13 = auStack_d8;
  local_98 = *param_1;
  local_58 = 0;
  local_50 = 2;
  local_48 = (void *)0x0;
  local_a0 = param_3;
  if (param_5 == '\0') {
    local_90 = (long *)0x0;
  }
  else {
    local_90 = &local_58;
    local_48 = malloc(0x60);
    if (local_48 == (void *)0x0) {
      return 0xc;
    }
  }
  local_68[0] = (void *)0x0;
  local_78 = (undefined)0x0;
  sVar10 = local_98[0x12];
  local_b0 = local_a0 * 0x10;
  if (local_b0 < 0xfc0) {
    local_c1 = '\0';
    puVar13 = auStack_d8 + -(local_b0 + 0x10);
    local_b8 = (void *)((long)&local_d0 + -(local_b0 + 0x10));
  }
  else {
    local_b8 = malloc(local_b0);
    local_c1 = '\x01';
    if (local_b8 == (void *)0x0) {
      if (local_90 != (long *)0x0) {
        FUN_0040b790();
      }
      return 0xc;
    }
  }
  *(undefined *)(puVar13 + -8) = 0x40d23e;
  memcpy(local_b8,param_4,local_b0);
  local_80 = *param_4;
  local_c0 = local_68;
LAB_0040d339:
  sVar7 = param_4[1];
  if ((long)sVar7 < (long)local_80) {
LAB_0040d4a0:
    *(undefined *)(puVar13 + -8) = 0x40d4a9;
    free(local_68[0]);
    if (local_c1 != '\0') {
      *(undefined *)(puVar13 + -8) = 0x40d989;
      free(local_b8);
    }
    if (local_90 != (long *)0x0) {
      *(undefined *)(puVar13 + -8) = 0x40d4c7;
      FUN_0040b790();
    }
    return 0;
  }
  do {
    sVar15 = sVar10 * 0x10;
    plVar14 = (long *)(*local_98 + sVar15);
    sVar12 = local_80;
    if (*(char *)(plVar14 + 1) == '\b') {
      lVar8 = *plVar14;
      if (lVar8 + 1 < local_a0) {
        (param_4 + (lVar8 + 1) * 2)[1] = 0xffffffffffffffff;
        sVar7 = param_4[1];
        param_4[(lVar8 + 1) * 2] = local_80;
      }
    }
    else if ((*(char *)(plVar14 + 1) == '\t') && (lVar8 = *plVar14 + 1, lVar8 < local_a0)) {
      psVar19 = param_4 + lVar8 * 2;
      if ((long)*psVar19 < (long)local_80) {
        psVar19[1] = local_80;
        *(undefined *)(puVar13 + -8) = 0x40d898;
        local_d0 = sVar15;
        local_a8 = local_80;
        memcpy(local_b8,param_4,local_b0);
        sVar7 = param_4[1];
        sVar12 = local_a8;
        sVar15 = local_d0;
      }
      else if (((*(byte *)((long)plVar14 + 10) & 8) == 0) ||
              (*(long *)((long)local_b8 + lVar8 * 0x10) == -1)) {
        psVar19[1] = local_80;
        sVar7 = param_4[1];
      }
      else {
        *(undefined *)(puVar13 + -8) = 0x40d8cd;
        local_d0 = local_80;
        local_a8 = sVar15;
        memcpy(param_4,local_b8,local_b0);
        sVar7 = param_4[1];
        sVar12 = local_d0;
        sVar15 = local_a8;
      }
    }
    if ((sVar12 == sVar7) && (*(size_t *)(param_2 + 0xb0) == sVar10)) {
      if (local_90 == (long *)0x0) {
        *(undefined *)(puVar13 + -8) = 0x40d9f2;
        free(local_68[0]);
        if (local_c1 == '\0') {
          return 0;
        }
        *(undefined *)(puVar13 + -8) = 0x40da0b;
        free(local_b8);
        return 0;
      }
      if (local_a0 == 0) {
LAB_0040d73a:
        *(undefined *)(puVar13 + -8) = 0x40d743;
        free(local_68[0]);
        if (local_c1 != '\0') {
          *(undefined *)(puVar13 + -8) = 0x40da1e;
          free(local_b8);
        }
        *(undefined *)(puVar13 + -8) = 0x40d75c;
        FUN_0040b790(local_90);
        return 0;
      }
      lVar8 = 0;
      psVar19 = param_4;
      while (((long)*psVar19 < 0 || (psVar19[1] != 0xffffffffffffffff))) {
        lVar8 = lVar8 + 1;
        psVar19 = psVar19 + 2;
        if (local_a0 == lVar8) goto LAB_0040d73a;
      }
      if (local_a0 == lVar8) goto LAB_0040d73a;
      *(undefined *)(puVar13 + -8) = 0x40d793;
      sVar10 = FUN_0040b7e0(local_90,local_90 + 2,&local_80,local_a0,param_4,local_78);
      sVar15 = sVar10 << 4;
    }
    sVar7 = local_80;
    plVar1 = *(long **)(param_2 + 0x98);
    lVar8 = *plVar1;
    plVar14 = (long *)(lVar8 + sVar15);
    if ((*(byte *)(plVar14 + 1) & 8) == 0) {
      if ((*(byte *)((long)plVar14 + 10) & 0x10) == 0) {
        if (*(byte *)(plVar14 + 1) != 4) {
LAB_0040d2ad:
          *(undefined *)(puVar13 + -8) = 0x40d2bf;
          local_a8 = sVar7;
          cVar5 = FUN_00409e50(param_2,plVar14,sVar7);
          if (cVar5 == '\0') goto LAB_0040d45a;
          local_80 = local_a8 + 1;
          sVar12 = *(size_t *)(plVar1[3] + sVar10 * 8);
          goto LAB_0040d2da;
        }
        sVar3 = (param_4 + (*plVar14 + 1) * 2)[1];
        sVar4 = param_4[(*plVar14 + 1) * 2];
        sVar12 = sVar3 - sVar4;
        if (local_90 == (long *)0x0) {
          if (sVar12 != 0) goto LAB_0040d5e4;
LAB_0040d7a8:
          *(undefined *)(puVar13 + -8) = 0x40d7bb;
          local_a8 = sVar15;
          cVar5 = FUN_00406a20(local_78,sVar10);
          if (cVar5 == '\0') goto LAB_0040d830;
          local_d0 = local_80;
          sVar12 = **(size_t **)(plVar1[5] + sVar10 * 0x18 + 0x10);
          lVar8 = *(long *)(*(long *)(param_2 + 0xb8) + local_80 * 8);
          uVar2 = *(undefined *)(lVar8 + 0x10);
          *(undefined *)(puVar13 + -8) = 0x40d7f9;
          lVar8 = FUN_00408030(uVar2,lVar8 + 0x18,sVar12);
          if (lVar8 != 0) goto joined_r0x0040d44a;
          plVar14 = (long *)(*plVar1 + local_a8);
          sVar7 = local_d0;
          goto LAB_0040d2ad;
        }
        if ((sVar4 != 0xffffffffffffffff) && (sVar3 != 0xffffffffffffffff)) {
          if (sVar12 == 0) goto LAB_0040d7a8;
          lVar8 = *(long *)(param_2 + 8);
          *(undefined *)(puVar13 + -8) = 0x40d5d5;
          local_a8 = sVar12;
          iVar6 = memcmp((void *)(sVar4 + lVar8),(void *)(lVar8 + local_80),sVar12);
          sVar12 = local_a8;
          if (iVar6 == 0) goto LAB_0040d5e4;
        }
      }
      else {
        *(undefined *)(puVar13 + -8) = 0x40d54d;
        local_a8 = sVar15;
        iVar6 = FUN_0040c7b0(lVar8,plVar1 + 0x1b,sVar10,param_2,local_80);
        sVar12 = (size_t)iVar6;
        sVar7 = local_80;
        if (sVar12 == 0) {
          plVar14 = (long *)(*plVar1 + local_a8);
          goto LAB_0040d2ad;
        }
LAB_0040d5e4:
        local_80 = sVar7 + sVar12;
        sVar12 = *(size_t *)(plVar1[3] + sVar10 * 8);
LAB_0040d2da:
        if (local_90 == (long *)0x0) {
LAB_0040d324:
          local_78 = ZEXT816(local_78._0_8_);
joined_r0x0040d44a:
          sVar10 = sVar12;
          if ((long)sVar10 < 0) {
            if (sVar10 == 0xfffffffffffffffe) {
LAB_0040d830:
              *(undefined *)(puVar13 + -8) = 0x40d839;
              free(local_68[0]);
              if (local_c1 != '\0') {
LAB_0040d9a0:
                *(undefined *)(puVar13 + -8) = 0x40d9ac;
                free(local_b8);
              }
              if (local_90 == (long *)0x0) {
                return 0xc;
              }
LAB_0040d6b6:
              *(undefined *)(puVar13 + -8) = 0x40d6c2;
              FUN_0040b790(local_90);
              return 0xc;
            }
            goto LAB_0040d45a;
          }
          goto LAB_0040d339;
        }
        if (((long)local_80 <= *(long *)(param_2 + 0xa8)) &&
           (lVar8 = *(long *)(*(long *)(param_2 + 0xb8) + local_80 * 8), lVar8 != 0)) {
          uVar2 = *(undefined *)(lVar8 + 0x10);
          *(undefined *)(puVar13 + -8) = 0x40d31b;
          lVar8 = FUN_00408030(uVar2,lVar8 + 0x18,sVar12);
          if (lVar8 != 0) goto LAB_0040d324;
        }
      }
    }
    else {
      local_a8 = *(size_t *)(*(long *)(param_2 + 0xb8) + local_80 * 8);
      lVar8 = plVar1[5] + sVar10 * 0x18;
      *(undefined *)(puVar13 + -8) = 0x40d3cf;
      cVar5 = FUN_00406a20(local_78,sVar10);
      if (cVar5 == '\0') goto LAB_0040d830;
      lVar17 = *(long *)(lVar8 + 8);
      if (0 < lVar17) {
        uVar2 = *(undefined *)(local_a8 + 0x10);
        lVar18 = local_a8 + 0x18;
        lVar8 = *(long *)(lVar8 + 0x10);
        lVar16 = 0;
        sVar10 = 0xffffffffffffffff;
        local_a8 = param_2;
        do {
          sVar7 = *(size_t *)(lVar8 + lVar16 * 8);
          *(undefined *)(puVar13 + -8) = 0x40d422;
          lVar9 = FUN_00408030(uVar2,lVar18,sVar7);
          param_2 = local_a8;
          sVar12 = sVar10;
          if ((lVar9 != 0) && (sVar12 = sVar7, sVar10 != 0xffffffffffffffff)) {
            *(undefined *)(puVar13 + -8) = 0x40d615;
            lVar8 = FUN_00408030(local_78._8_8_,local_c0,sVar10);
            if ((lVar8 != 0) || (sVar12 = sVar10, local_90 == (long *)0x0)) break;
            lVar17 = *local_90;
            lVar8 = lVar17 + 1;
            *local_90 = lVar8;
            if (lVar8 == local_90[1]) {
              local_a8 = local_80;
              pvVar11 = (void *)local_90[2];
              *(undefined *)(puVar13 + -8) = 0x40d907;
              pvVar11 = realloc(pvVar11,lVar8 * 0x60);
              if (pvVar11 != (void *)0x0) {
                local_90[1] = local_90[1] << 1;
                local_90[2] = (long)pvVar11;
                sVar12 = local_a8;
                goto LAB_0040d64a;
              }
            }
            else {
              pvVar11 = (void *)local_90[2];
              sVar12 = local_80;
LAB_0040d64a:
              sVar15 = local_b0;
              psVar19 = (size_t *)(lVar17 * 0x30 + (long)pvVar11);
              psVar19[1] = sVar7;
              *psVar19 = sVar12;
              *(undefined *)(puVar13 + -8) = 0x40d66b;
              pvVar11 = malloc(local_b0);
              psVar19[2] = (size_t)pvVar11;
              if (pvVar11 != (void *)0x0) {
                *(undefined *)(puVar13 + -8) = 0x40d682;
                memcpy(pvVar11,param_4,sVar15);
                *(undefined *)(puVar13 + -8) = 0x40d68f;
                iVar6 = FUN_004090d0(psVar19 + 3,local_78);
                sVar12 = sVar10;
                if (iVar6 == 0) break;
              }
            }
            *(undefined *)(puVar13 + -8) = 0x40d6a9;
            free(local_68[0]);
            if (local_c1 == '\0') goto LAB_0040d6b6;
            goto LAB_0040d9a0;
          }
          lVar16 = lVar16 + 1;
          sVar10 = sVar12;
        } while (lVar17 != lVar16);
        goto joined_r0x0040d44a;
      }
LAB_0040d45a:
      if (local_90 == (long *)0x0) {
        *(undefined *)(puVar13 + -8) = 0x40d9ba;
        free(local_68[0]);
        if (local_c1 != '\0') {
          local_90 = (long *)CONCAT44(local_90._4_4_,1);
          *(undefined *)(puVar13 + -8) = 0x40d9de;
          free(local_b8);
          return (ulong)local_90 & 0xffffffff;
        }
        return 1;
      }
    }
    *(undefined *)(puVar13 + -8) = 0x40d48a;
    sVar10 = FUN_0040b7e0(local_90,local_90 + 2,&local_80,local_a0,param_4,local_78);
    sVar7 = param_4[1];
    if ((long)sVar7 < (long)local_80) goto LAB_0040d4a0;
  } while( true );
}


undefined
FUN_0040da30(long param_1,long *param_2,undefined *param_3,undefined param_4,long param_5)

{
  long lVar1;
  long lVar2;
  undefined uVar3;
  long lVar4;
  void *pvVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  
  uVar3 = FUN_0040ca40(param_1,param_3 + 2,*param_3,param_3[1],param_4,param_5,8);
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  lVar1 = param_3[1];
  lVar4 = *(long *)(param_1 + 200);
  lVar2 = *param_2;
  pvVar5 = *(void **)(param_1 + 0xd8);
  lVar7 = lVar1;
  if (*(long *)(param_1 + 0xd0) <= lVar4) {
    pvVar5 = realloc(pvVar5,*(long *)(param_1 + 0xd0) * 0x50);
    if (pvVar5 == (void *)0x0) {
      free(*(void **)(param_1 + 0xd8));
      return 0xc;
    }
    *(void **)(param_1 + 0xd8) = pvVar5;
    memset((void *)((long)pvVar5 + *(long *)(param_1 + 200) * 0x28),0,
           *(long *)(param_1 + 0xd0) * 0x28);
    *(long *)(param_1 + 0xd0) = *(long *)(param_1 + 0xd0) << 1;
    lVar4 = *(long *)(param_1 + 200);
    pvVar5 = *(void **)(param_1 + 0xd8);
    lVar7 = param_3[1];
  }
  lVar6 = lVar4 * 0x28;
  if ((0 < lVar4) && (param_5 == *(long *)((long)pvVar5 + lVar6 + -0x20))) {
    *(undefined *)((long)pvVar5 + lVar6 + -8) = 1;
  }
  puVar8 = (undefined *)((long)pvVar5 + lVar6);
  *puVar8 = param_4;
  puVar8[1] = param_5;
  *(ushort *)((long)puVar8 + 0x22) = -(ushort)(lVar1 == lVar2);
  puVar8[2] = lVar2;
  puVar8[3] = lVar1;
  *(long *)(param_1 + 200) = lVar4 + 1;
  *(undefined *)(puVar8 + 4) = 0;
  if ((long)*(int *)(param_1 + 0xe0) < lVar1 - lVar2) {
    *(int *)(param_1 + 0xe0) = (int)lVar1 - (int)lVar2;
  }
  uVar3 = FUN_00407600(param_1,(lVar7 + param_5) - *param_2);
  return uVar3;
}


/* WARNING: Type propagation algorithm not settling */

ulong FUN_0040dbd0(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  undefined uVar11;
  long *plVar12;
  void *pvVar13;
  long lVar14;
  long lVar15;
  size_t __n;
  uint uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  uint local_5c;
  undefined local_58 [16];
  void *local_48;
  
  lVar1 = *(long *)(param_1 + 0x48);
  plVar2 = *(long **)(param_1 + 0x98);
  local_e0 = 0;
  if (*param_2 < 1) {
    return 0;
  }
LAB_0040dc69:
  lVar3 = *(long *)(*param_3 + local_e0 * 8);
  lVar7 = *plVar2 + lVar3 * 0x10;
  if (*(char *)(lVar7 + 8) != '\x04') goto LAB_0040dc50;
  uVar16 = *(uint *)(lVar7 + 8);
  if ((uVar16 & 0x3ff00) == 0) {
LAB_0040dce0:
    lVar19 = *(long *)(param_1 + 200);
    lVar7 = 0;
    lVar9 = lVar19;
    while (lVar7 < lVar9) {
      lVar15 = (lVar7 + lVar9) / 2;
      lVar18 = *(long *)(*(long *)(param_1 + 0xd8) + 8 + lVar15 * 0x28);
      while (lVar17 = lVar15, lVar1 <= lVar18) {
        if (lVar17 <= lVar7) goto LAB_0040dd47;
        lVar15 = (lVar17 + lVar7) / 2;
        lVar18 = *(long *)(*(long *)(param_1 + 0xd8) + 8 + lVar15 * 0x28);
        lVar9 = lVar17;
      }
      lVar7 = lVar17 + 1;
    }
LAB_0040dd47:
    if (((lVar7 < lVar19) &&
        (plVar10 = (long *)(*(long *)(param_1 + 0xd8) + lVar7 * 0x28), plVar10[1] == lVar1)) &&
       (lVar7 != -1)) {
      do {
        if (lVar3 == *plVar10) goto LAB_0040dd7f;
        plVar4 = plVar10 + 4;
        plVar10 = plVar10 + 5;
      } while (*(char *)plVar4 != '\0');
    }
    plVar10 = *(long **)(param_1 + 0x98);
    lVar7 = *plVar10;
    lVar9 = *(long *)(lVar7 + lVar3 * 0x10);
    if (0 < *(long *)(param_1 + 0xe8)) {
      local_c8 = *(long *)(param_1 + 8);
      local_d8 = 0;
      do {
        plVar4 = *(long **)(*(long *)(param_1 + 0xf8) + local_d8 * 8);
        if (lVar9 == *(long *)(lVar7 + plVar4[1] * 0x10)) {
          lVar7 = *plVar4;
          lVar18 = lVar1;
          if (0 < plVar4[4]) {
            lVar15 = 0;
            do {
              lVar5 = *(long *)(plVar4[5] + lVar15 * 8);
              lVar14 = *(long *)(lVar5 + 8);
              __n = lVar14 - lVar7;
              lVar17 = __n + lVar18;
              if (0 < (long)__n) {
                if (*(long *)(param_1 + 0x30) < lVar17) {
                  if (lVar17 <= *(long *)(param_1 + 0x58)) {
                    uVar8 = FUN_00407600(param_1,lVar17);
                    if ((int)uVar8 != 0) {
                      return uVar8;
                    }
                    local_c8 = *(long *)(param_1 + 8);
                    goto LAB_0040e0d1;
                  }
                }
                else {
LAB_0040e0d1:
                  iVar6 = memcmp((void *)(local_c8 + lVar18),(void *)(local_c8 + lVar7),__n);
                  if (iVar6 == 0) goto LAB_0040e104;
                }
                if (plVar4[4] != lVar15 && lVar15 <= plVar4[4]) goto LAB_0040de12;
                lVar14 = lVar7;
                lVar17 = lVar18;
                if (lVar15 < 1) goto joined_r0x0040e228;
                break;
              }
LAB_0040e104:
              uVar8 = FUN_0040da30(param_1,plVar4,lVar5,lVar3,lVar1);
              local_c8 = *(long *)(param_1 + 8);
              if (1 < (uint)uVar8) {
                return uVar8;
              }
              lVar15 = lVar15 + 1;
              lVar7 = lVar14;
              lVar18 = lVar17;
            } while (lVar15 < plVar4[4]);
            lVar7 = lVar14 + 1;
            lVar18 = lVar17;
          }
joined_r0x0040e228:
          do {
            if (lVar1 < lVar7) break;
            lVar15 = lVar18;
            if (lVar7 != *plVar4 && -1 < lVar7 - *plVar4) {
              if (*(long *)(param_1 + 0x30) == lVar18 || *(long *)(param_1 + 0x30) < lVar18) {
                if (*(long *)(param_1 + 0x58) == lVar18 || *(long *)(param_1 + 0x58) < lVar18)
                break;
                uVar8 = FUN_004074b0(param_1,(int)lVar18 + 1);
                if ((int)uVar8 != 0) {
                  return uVar8;
                }
                local_c8 = *(long *)(param_1 + 8);
              }
              lVar15 = lVar18 + 1;
              if (*(char *)(local_c8 + lVar18) != *(char *)(local_c8 + -1 + lVar7)) break;
            }
            lVar18 = *(long *)(*(long *)(param_1 + 0xb8) + lVar7 * 8);
            if ((lVar18 != 0) && (0 < *(long *)(lVar18 + 0x10))) {
              lVar17 = 0;
              do {
                lVar5 = *(long *)(*(long *)(lVar18 + 0x18) + lVar17 * 8);
                plVar12 = (long *)(lVar5 * 0x10 + *plVar10);
                if ((*(char *)(plVar12 + 1) == '\t') && (lVar9 == *plVar12)) {
                  if (lVar5 != -1) {
                    pvVar13 = (void *)plVar4[2];
                    lVar18 = *plVar4;
                    if (pvVar13 == (void *)0x0) {
                      pvVar13 = calloc(0x18,(lVar7 - lVar18) + 1);
                      plVar4[2] = (long)pvVar13;
                      if (pvVar13 == (void *)0x0) {
                        return 0xc;
                      }
                    }
                    uVar8 = FUN_0040ca40(param_1,pvVar13,plVar4[1],lVar18,lVar5,lVar7,9);
                    if ((int)uVar8 != 1) {
                      if ((int)uVar8 != 0) {
                        return uVar8;
                      }
                      if (plVar4[4] == plVar4[3]) {
                        lVar18 = plVar4[3] * 2 + 1;
                        pvVar13 = realloc((void *)plVar4[5],lVar18 * 8);
                        if (pvVar13 == (void *)0x0) {
                          return 0xc;
                        }
                        plVar4[5] = (long)pvVar13;
                        plVar4[3] = lVar18;
                      }
                      plVar12 = (long *)calloc(1,0x28);
                      if (plVar12 == (long *)0x0) {
                        return 0xc;
                      }
                      lVar18 = plVar4[4];
                      *(long **)(plVar4[5] + lVar18 * 8) = plVar12;
                      *plVar12 = lVar5;
                      plVar12[1] = lVar7;
                      plVar4[4] = lVar18 + 1;
                      FUN_0040da30(param_1,plVar4,plVar12,lVar3,lVar1);
                    }
                  }
                  break;
                }
                lVar17 = lVar17 + 1;
              } while (*(long *)(lVar18 + 0x10) != lVar17);
            }
            lVar7 = lVar7 + 1;
            lVar18 = lVar15;
          } while( true );
        }
LAB_0040de12:
        local_d8 = local_d8 + 1;
        if (*(long *)(param_1 + 0xe8) <= local_d8) goto LAB_0040de30;
        lVar7 = *plVar10;
      } while( true );
    }
LAB_0040dd7f:
    local_5c = 0;
  }
  else {
    uVar16 = uVar16 >> 8;
    uVar8 = FUN_00409d60(param_1,lVar1,*(undefined *)(param_1 + 0xa0));
    if ((uVar16 & 4) == 0) {
      if (((uVar16 & 8) == 0) || ((uVar8 & 1) == 0)) {
LAB_0040dc29:
        if ((((uVar16 & 0x20) == 0) || ((uVar8 & 2) != 0)) &&
           (((uVar16 & 0x80) == 0 || ((uVar8 & 8) != 0)))) goto LAB_0040dce0;
      }
    }
    else if (((uVar8 & 1) != 0) && ((uVar16 & 8) == 0)) goto LAB_0040dc29;
  }
  goto LAB_0040dc50;
LAB_0040de30:
  local_5c = 0;
  if (lVar19 < *(long *)(param_1 + 200)) {
LAB_0040dfb9:
    do {
      plVar10 = (long *)(*(long *)(param_1 + 0xd8) + lVar19 * 0x28);
      if ((lVar3 == *plVar10) && (lVar1 == plVar10[1])) {
        lVar7 = plVar10[3];
        lVar9 = plVar10[2];
        if (lVar7 == lVar9) {
          lVar18 = **(long **)(plVar2[5] + 0x10 + lVar3 * 0x18);
        }
        else {
          lVar18 = *(long *)(plVar2[3] + lVar3 * 8);
        }
        local_d0 = plVar2[6] + lVar18 * 0x18;
        lVar17 = (lVar7 + lVar1) - lVar9;
        FUN_00409d60(param_1,lVar17 + -1,*(undefined *)(param_1 + 0xa0));
        local_d8 = 0;
        plVar10 = (long *)(*(long *)(param_1 + 0xb8) + lVar17 * 8);
        lVar18 = *(long *)(*(long *)(param_1 + 0xb8) + lVar1 * 8);
        lVar15 = *plVar10;
        if (lVar18 != 0) {
          local_d8 = *(long *)(lVar18 + 0x10);
        }
        if (lVar15 == 0) {
          lVar15 = FUN_004092e0(&local_5c,plVar2,local_d0);
          lVar18 = *(long *)(param_1 + 0xb8);
          *plVar10 = lVar15;
          lVar15 = *(long *)(lVar18 + lVar17 * 8);
        }
        else {
          local_5c = FUN_00409150(local_58,*(undefined *)(lVar15 + 0x50),local_d0);
          if (local_5c != 0) {
            free(local_48);
            return (ulong)local_5c;
          }
          lVar18 = *(long *)(param_1 + 0xb8);
          uVar11 = FUN_004092e0(&local_5c,plVar2,local_58);
          *(undefined *)(lVar17 * 8 + lVar18) = uVar11;
          free(local_48);
          lVar18 = *(long *)(param_1 + 0xb8);
          lVar15 = *(long *)(lVar18 + lVar17 * 8);
        }
        if ((lVar15 == 0) && (local_5c != 0)) {
          return (ulong)local_5c;
        }
        if ((lVar7 == lVar9) &&
           (plVar10 = (long *)(*(long *)(lVar18 + lVar1 * 8) + 0x10),
           *plVar10 != local_d8 && local_d8 <= *plVar10)) {
          uVar8 = FUN_00409c10(param_1,local_d0 + 8,local_d0 + 0x10);
          local_5c = (uint)uVar8;
          if (local_5c != 0) {
            return uVar8;
          }
          uVar8 = FUN_0040dbd0(param_1,local_d0 + 8,local_d0 + 0x10);
          local_5c = (uint)uVar8;
          if (local_5c != 0) {
            return uVar8;
          }
          lVar19 = lVar19 + 1;
          if (*(long *)(param_1 + 200) <= lVar19) break;
          goto LAB_0040dfb9;
        }
      }
      lVar19 = lVar19 + 1;
    } while (lVar19 < *(long *)(param_1 + 200));
  }
LAB_0040dc50:
  local_e0 = local_e0 + 1;
  if (*param_2 <= local_e0) {
    return 0;
  }
  goto LAB_0040dc69;
}


long FUN_0040e450(int *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined uVar6;
  int iVar7;
  long *plVar8;
  undefined local_58;
  undefined uStack_50;
  void *local_48;
  
  lVar1 = *(long *)(param_2 + 0x48);
  lVar2 = *(long *)(param_2 + 0x98);
  plVar8 = (long *)(*(long *)(param_2 + 0xb8) + lVar1 * 8);
  if (*(long *)(param_2 + 0xc0) < lVar1) {
    *plVar8 = param_3;
    *(long *)(param_2 + 0xc0) = lVar1;
  }
  else if (*plVar8 == 0) {
    *plVar8 = param_3;
  }
  else {
    puVar3 = *(undefined **)(*plVar8 + 0x50);
    if (param_3 == 0) {
      local_58 = *puVar3;
      uStack_50 = puVar3[1];
      local_48 = (void *)puVar3[2];
      uVar6 = FUN_00409d60(param_2,lVar1 + -1,*(undefined *)(param_2 + 0xa0));
      param_3 = FUN_004092e0(param_1,lVar2,&local_58,uVar6);
      *plVar8 = param_3;
    }
    else {
      lVar4 = *(long *)(param_3 + 0x50);
      iVar7 = FUN_00409150(&local_58,lVar4,puVar3);
      *param_1 = iVar7;
      if (iVar7 != 0) {
        return 0;
      }
      uVar6 = FUN_00409d60(param_2,*(long *)(param_2 + 0x48) + -1,*(undefined *)(param_2 + 0xa0));
      lVar5 = *(long *)(param_2 + 0xb8);
      param_3 = FUN_004092e0(param_1,lVar2,&local_58,uVar6);
      *(long *)(lVar5 + lVar1 * 8) = param_3;
      if (lVar4 != 0) {
        free(local_48);
      }
    }
  }
  if (*(long *)(lVar2 + 0x98) == 0) {
    return param_3;
  }
  if (param_3 != 0) {
    iVar7 = FUN_00409c10(param_2,param_3 + 0x10,param_3 + 0x18,lVar1);
    *param_1 = iVar7;
    if (iVar7 == 0) {
      if ((*(byte *)(param_3 + 0x68) & 0x40) == 0) {
        return param_3;
      }
      iVar7 = FUN_0040dbd0(param_2,param_3 + 0x10,param_3 + 0x18);
      *param_1 = iVar7;
      if (iVar7 == 0) {
        return *(long *)(*(long *)(param_2 + 0xb8) + lVar1 * 8);
      }
    }
  }
  return 0;
}


int FUN_0040e610(long param_1,void **param_2)

{
  size_t __n;
  void *pvVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined *puVar5;
  char cVar6;
  int iVar7;
  void *pvVar8;
  void *extraout_RDX;
  void *pvVar9;
  long lVar10;
  long lVar11;
  undefined auVar12 [16];
  long local_90;
  int local_7c;
  undefined local_58;
  undefined local_50;
  void **local_48;
  
  pvVar9 = param_2[3];
  pvVar1 = param_2[2];
  local_58 = 1;
  local_50 = 1;
  local_48 = (void **)malloc(8);
  if (local_48 == (void **)0x0) {
    return 0xc;
  }
  *local_48 = pvVar1;
  iVar7 = FUN_004100a0(param_1,param_2,pvVar9,&local_58);
  if (iVar7 == 0) {
    local_7c = 0;
    if (0 < (long)pvVar9) {
      do {
        __n = (long)pvVar9 * 8;
        if (*(long *)((long)*param_2 + (long)pvVar9 * 8) == 0) {
          local_7c = local_7c + 1;
          if (*(int *)(param_1 + 0xe0) < local_7c) goto LAB_0040e8f6;
        }
        else {
          local_7c = 0;
          if (*(int *)(param_1 + 0xe0) < 0) {
LAB_0040e8f6:
            memset(*param_2,0,__n);
            free(local_48);
            return 0;
          }
        }
        pvVar9 = (void *)((long)pvVar9 + -1);
        local_50 = 0;
        lVar2 = *(long *)(*(long *)(param_1 + 0xb8) + -8 + __n);
        if ((lVar2 != 0) && (plVar3 = *(long **)(param_1 + 0x98), 0 < *(long *)(lVar2 + 0x28))) {
          local_90 = 0;
          do {
            lVar4 = *(long *)(*(long *)(lVar2 + 0x30) + local_90 * 8);
            lVar11 = lVar4 * 0x10;
            lVar10 = *plVar3 + lVar11;
            if ((*(byte *)(lVar10 + 10) & 0x10) == 0) {
LAB_0040e710:
              cVar6 = FUN_00409e50(param_1,lVar10,pvVar9);
              if (cVar6 != '\0') {
                lVar10 = *(long *)((long)*param_2 + __n);
                if (lVar10 != 0) {
                  auVar12 = FUN_00408030(*(undefined *)(lVar10 + 0x10),lVar10 + 0x18,
                                         *(undefined *)(plVar3[3] + lVar4 * 8));
                  pvVar8 = SUB168(auVar12 >> 0x40,0);
                  if (SUB168(auVar12,0) != 0) {
                    iVar7 = 1;
                    goto LAB_0040e751;
                  }
                }
              }
            }
            else {
              puVar5 = *(undefined **)(param_1 + 0x98);
              pvVar1 = param_2[3];
              iVar7 = FUN_0040c7b0(*puVar5,puVar5 + 0x1b,lVar4,param_1,pvVar9);
              pvVar8 = extraout_RDX;
              if (iVar7 < 1) {
                if (iVar7 == 0) {
LAB_0040e876:
                  lVar10 = *plVar3 + lVar11;
                  goto LAB_0040e710;
                }
              }
              else if ((long)iVar7 + (long)pvVar9 <= (long)pvVar1) {
                lVar10 = *(long *)((long)*param_2 + ((long)iVar7 + (long)pvVar9) * 8);
                if (lVar10 == 0) goto LAB_0040e876;
                auVar12 = FUN_00408030(*(undefined *)(lVar10 + 0x10),lVar10 + 0x18,
                                       *(undefined *)(puVar5[3] + lVar4 * 8));
                pvVar8 = SUB168(auVar12 >> 0x40,0);
                if (SUB168(auVar12,0) == 0) {
                  lVar10 = *plVar3 + lVar11;
                  goto LAB_0040e710;
                }
              }
LAB_0040e751:
              if (param_2[5] != (void *)0x0) {
                cVar6 = FUN_004082c0(param_1,param_2 + 5,param_2 + 6,
                                     *(undefined *)(plVar3[3] + lVar4 * 8),
                                     (long)iVar7 + (long)pvVar9,lVar4);
                pvVar8 = pvVar9;
                if (cVar6 != '\0') goto LAB_0040e79c;
              }
              cVar6 = FUN_00406a20(&local_58,lVar4,pvVar8);
              if (cVar6 == '\0') {
                iVar7 = 0xc;
                goto LAB_0040e8b5;
              }
            }
LAB_0040e79c:
            local_90 = local_90 + 1;
          } while (local_90 < *(long *)(lVar2 + 0x28));
        }
        iVar7 = FUN_004100a0(param_1,param_2,pvVar9,&local_58);
        if (iVar7 != 0) goto LAB_0040e8b5;
      } while (pvVar9 != (void *)0x0);
    }
    iVar7 = 0;
  }
LAB_0040e8b5:
  free(local_48);
  return iVar7;
}


/* WARNING: Could not reconcile some variable overlaps */

ulong FUN_0040e940(long **param_1,long param_2,ulong param_3,long param_4,long param_5,ulong param_6
                  ,long *param_7,ulong *param_8,uint param_9)

{
  long **pplVar1;
  int iVar2;
  long *plVar3;
  bool bVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined uVar11;
  void *pvVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long *plVar19;
  long *plVar20;
  long lVar21;
  ulong *puVar22;
  ulong *puVar23;
  long lVar24;
  uint uVar25;
  long lVar26;
  long *plVar27;
  uint uVar28;
  long lVar29;
  ulong uVar30;
  long *plVar31;
  bool bVar32;
  int local_230;
  ulong local_228;
  long *local_218;
  ulong local_210;
  uint local_1ec;
  long *local_1e8;
  long *local_1d8;
  long local_1a8;
  bool local_18b;
  uint local_188;
  uint local_184;
  long local_180;
  long *local_178;
  long *plStack_170;
  long *local_168;
  ulong local_160;
  undefined local_158 [16];
  void *local_148;
  long local_138 [2];
  int *local_128;
  long local_120;
  long local_110;
  ulong local_108;
  ulong local_100;
  ulong local_f8;
  ulong local_f0;
  ulong local_e8;
  ulong local_e0;
  ulong local_d8;
  ulong local_d0;
  int local_c8;
  long *local_c0;
  long *local_b8;
  undefined local_b0;
  byte local_af;
  byte local_ae;
  char local_ad;
  char local_ac;
  byte local_ab;
  byte local_aa;
  int local_a8;
  long *local_a0;
  uint local_98;
  ulong local_90;
  long *local_88;
  long *local_80;
  long local_78;
  undefined local_70;
  long local_68;
  void *local_60;
  int local_58;
  long local_48;
  void *local_40;
  
  plVar3 = *param_1;
  plVar27 = local_138;
  for (lVar26 = 0x20; lVar26 != 0; lVar26 = lVar26 + -1) {
    *plVar27 = 0;
    plVar27 = plVar27 + 1;
  }
  plVar27 = param_1[4];
  local_1d8 = plVar27;
  if (plVar27 != (long *)0x0) {
    if (((*(byte *)(param_1 + 7) & 8) == 0) || (param_4 == param_5)) {
      local_1d8 = (long *)0x0;
    }
    else {
      local_1d8 = (long *)0x0;
      if ((*(byte *)(param_1 + 7) & 1) == 0) {
        local_1d8 = plVar27;
      }
    }
  }
  local_1a8 = 0;
  plVar27 = param_1[6];
  if (plVar27 < param_7) {
    local_1a8 = ((long)param_7 + -1) - (long)plVar27;
    param_7 = (long *)((long)param_7 + ((long)plVar27 - ((long)param_7 + -1)));
  }
  if ((((param_1[2] == (long *)0x0) || (plVar3[9] == 0)) || (plVar3[10] == 0)) ||
     ((plVar3[0xb] == 0 || (plVar3[0xc] == 0)))) {
    local_1ec = 1;
    goto LAB_0040f3b0;
  }
  if (((*(long *)(plVar3[9] + 0x10) == 0) && (*(long *)(plVar3[10] + 0x10) == 0)) &&
     ((*(long *)(plVar3[0xb] + 0x10) == 0 || (-1 < *(char *)(param_1 + 7))))) {
    if ((param_4 != 0) && (local_1ec = 1, param_5 != 0)) goto LAB_0040f3b0;
    param_5 = 0;
    param_4 = 0;
  }
  bVar32 = true;
  if (param_7 == (long *)0x0) {
    bVar32 = plVar3[0x13] != 0;
  }
  plVar27 = param_1[5];
  local_a8 = *(int *)((long)plVar3 + 0xb4);
  lVar26 = plVar3[2] + 1;
  if (plVar3[2] + 1 < (long)local_a8) {
    lVar26 = (long)local_a8;
  }
  if ((long)(param_3 + 1) < lVar26) {
    lVar26 = param_3 + 1;
  }
  local_b0 = ((ulong)param_1[3] & 0x400000) != 0;
  local_ad = ((ulong)((uint)param_1[3] & 0x400000) | (ulong)plVar27) != 0;
  local_ae = *(byte *)(plVar3 + 0x16) >> 3 & 1;
  local_af = *(byte *)(plVar3 + 0x16) >> 2 & 1;
  local_138[0] = param_2;
  local_e8 = param_3;
  local_e0 = param_3;
  local_d8 = param_3;
  local_d0 = param_3;
  local_c0 = plVar27;
  local_a0 = plVar3;
  local_1ec = FUN_00406910(local_138,lVar26);
  plVar19 = local_80;
  if (local_1ec != 0) goto LAB_0040f390;
  local_b8 = plVar3 + 0x17;
  local_aa = *(byte *)(plVar3 + 0x16) >> 4 & 1;
  if ((local_ad != '\0') ||
     (local_108 = param_3, local_138[1] = param_2, 1 < *(int *)((long)plVar3 + 0xb4))) {
    local_108 = 0;
  }
  local_ab = *(byte *)(param_1 + 7) >> 7;
  lVar26 = plVar3[0x13];
  local_90 = 0xffffffffffffffff;
  lVar24 = lVar26 * 2;
  local_98 = param_9;
  local_100 = local_108;
  local_d8 = param_6;
  local_d0 = param_6;
  if (lVar24 < 1) {
LAB_0040ec8c:
    local_58 = 1;
    local_68 = lVar24;
    local_48 = lVar24;
    if ((param_7 < (long *)0x2) && ((*(byte *)(plVar3 + 0x16) & 2) == 0)) {
      local_80 = (long *)0x0;
    }
    else {
      if (0x1ffffffffffffffe < local_f8) goto LAB_0040f991;
      local_80 = (long *)malloc(local_f8 * 8 + 8);
      plVar19 = local_80;
      if (local_80 == (long *)0x0) {
LAB_0040f942:
        local_1ec = 0xc;
        goto LAB_0040f390;
      }
    }
    local_c8 = (-(uint)((param_9 & 1) == 0) & 2) + 4;
    iVar7 = ((param_4 <= param_5) - 1) + (uint)(param_4 <= param_5);
    lVar26 = param_5;
    if (param_4 <= param_5) {
      lVar26 = param_4;
    }
    lVar24 = param_5;
    if (param_5 <= param_4) {
      lVar24 = param_4;
    }
    iVar2 = *(int *)((long)plVar3 + 0xb4);
    uVar25 = 8;
    if (local_1d8 != (long *)0x0) {
      uVar25 = 4;
      if (iVar2 != 1) {
        uVar25 = (uint)(((ulong)((uint)param_1[3] & 0x400000) | (ulong)plVar27) == 0) << 2;
      }
      uVar25 = plVar27 != (long *)0x0 | uVar25 | (uint)(param_4 <= param_5) * 2;
    }
    local_180 = param_4;
    if (param_4 <= lVar24 && lVar26 <= param_4) {
      plVar27 = (long *)0x0;
      if (param_4 <= param_5) {
        plVar27 = &local_180;
      }
      do {
        if (uVar25 - 4 < 5) {
                    /* WARNING: Could not recover jumptable at 0x0040ee08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar13 = (*(code *)(&PTR_DAT_00416668)[uVar25 - 4])();
          return uVar13;
        }
        while( true ) {
          lVar21 = local_180;
          uVar13 = local_180 - local_110;
          if (local_100 <= uVar13) {
            local_1ec = FUN_0040a050(local_138,local_180,param_9);
            plVar19 = local_80;
            if (local_1ec != 0) goto LAB_0040f390;
            uVar13 = lVar21 - local_110;
          }
          plVar19 = local_1d8;
          if (lVar21 < (long)param_3) {
            plVar19 = (long *)((ulong)*(byte *)(local_138[1] + uVar13) + (long)local_1d8);
          }
          if (*(char *)plVar19 != '\0') break;
          local_180 = lVar21 + iVar7;
          if ((local_180 < lVar26) || (lVar24 < local_180)) goto LAB_0040f2e0;
        }
        uVar8 = FUN_0040a050(local_138,lVar21,param_9);
        plVar31 = local_a0;
        uVar13 = local_f0;
        plVar19 = local_80;
        local_1ec = uVar8;
        if (uVar8 != 0) goto LAB_0040f390;
        if (((iVar2 == 1) || (local_108 == 0)) || (*local_128 != -1)) {
          local_58 = 0;
          local_70 = 0;
          lVar21 = local_a0[9];
          local_78 = 0;
          local_188 = 0;
          local_228 = local_f0;
          if (*(char *)(lVar21 + 0x68) < '\0') {
            uVar9 = FUN_00409d60(local_138,local_f0 - 1,local_98);
            if ((uVar9 & 1) == 0) {
              if (uVar9 == 0) goto LAB_0040efa0;
              if ((uVar9 & 6) == 6) {
                lVar21 = plVar31[0xc];
              }
              else if ((uVar9 & 2) == 0) {
                if ((uVar9 & 4) == 0) goto LAB_0040efa0;
                lVar21 = FUN_004092e0(&local_188,plVar31,*(undefined *)(lVar21 + 0x50),uVar9);
              }
              else {
                lVar21 = plVar31[0xb];
              }
            }
            else {
              lVar21 = plVar31[10];
            }
            if (lVar21 == 0) {
              local_1ec = local_188;
              plVar19 = local_80;
              if (local_188 != 0xc) {
                    /* WARNING: Subroutine does not return */
                __assert_fail("err == REG_ESPACE","lib/regexec.c",0x431,"check_matching");
              }
              goto LAB_0040f390;
            }
          }
LAB_0040efa0:
          if ((local_80 == (long *)0x0) ||
             (lVar14 = plVar31[0x13], local_80[uVar13] = lVar21, lVar14 == 0)) {
            bVar5 = *(byte *)(lVar21 + 0x68);
            local_18b = plVar27 != (long *)0x0;
LAB_0040efd8:
            local_218 = (long *)0x0;
            local_210 = 0xffffffffffffffff;
            uVar15 = local_f0;
            local_1e8 = plVar27;
            if ((((bVar5 & 0x10) == 0) ||
                ((*(char *)(lVar21 + 0x68) < '\0' &&
                 (local_218 = (long *)FUN_00409f80(local_138,*(undefined *)(lVar21 + 0x10),
                                                   lVar21 + 0x18,uVar13), uVar15 = local_f0,
                 local_218 == (long *)0x0)))) ||
               (local_218 = (long *)0x1, uVar15 = local_f0, local_210 = uVar13, bVar32)) {
              while ((long)uVar15 < (long)local_d0) {
                uVar13 = uVar15 + 1;
                if ((((long)uVar13 < (long)local_f8) || ((long)local_e0 <= (long)local_f8)) &&
                   (((long)uVar13 < (long)local_108 || ((long)local_e0 <= (long)local_108)))) {
                  bVar5 = *(byte *)(lVar21 + 0x68);
                  plVar19 = local_a0;
                }
                else {
                  local_230 = (int)uVar13;
                  local_188 = FUN_004074b0(local_138,local_230 + 1);
                  if (local_188 != 0) {
                    if (local_188 != 0xc) {
                    /* WARNING: Subroutine does not return */
                      __assert_fail("err == REG_ESPACE","lib/regexec.c",0x468,"check_matching");
                    }
                    goto LAB_0040f991;
                  }
                  bVar5 = *(byte *)(lVar21 + 0x68);
                  uVar15 = local_f0;
                  plVar19 = local_a0;
                }
                local_a0 = plVar19;
                if ((bVar5 & 0x20) != 0) {
                  if (0 < *(long *)(lVar21 + 0x10)) {
                    lVar14 = 0;
                    do {
                      lVar29 = *plVar19;
                      lVar16 = *(long *)(*(long *)(lVar21 + 0x18) + lVar14 * 8);
                      lVar17 = lVar16 * 0x10 + lVar29;
                      if ((*(byte *)(lVar17 + 10) & 0x10) == 0) goto LAB_0040f60e;
                      uVar9 = *(uint *)(lVar17 + 8);
                      if ((uVar9 & 0x3ff00) == 0) {
LAB_0040f500:
                        iVar10 = FUN_0040c7b0(lVar29,plVar19 + 0x1b,lVar16,local_138);
                        uVar15 = local_f0;
                        if (iVar10 != 0) {
                          lVar29 = (long)iVar10 + local_f0;
                          if (iVar10 <= local_58) {
                            iVar10 = local_58;
                          }
                          local_58 = iVar10;
                          local_184 = FUN_00407600(local_138,lVar29);
                          uVar9 = local_184;
                          if (local_184 != 0) goto joined_r0x0040f902;
                          plVar31 = local_80 + lVar29;
                          pplVar1 = (long **)(plVar19[6] + *(long *)(plVar19[3] + lVar16 * 8) * 0x18
                                             );
                          lVar16 = *plVar31;
                          if (lVar16 == 0) {
                            local_178 = *pplVar1;
                            plStack_170 = pplVar1[1];
                            local_168 = pplVar1[2];
                            uVar11 = FUN_00409d60(local_138,lVar29 + -1,local_98);
                            lVar16 = FUN_004092e0(&local_184,plVar19,&local_178,uVar11);
                            *plVar31 = lVar16;
                            lVar29 = local_80[lVar29];
                            uVar15 = local_f0;
                          }
                          else {
                            local_184 = FUN_00409150(&local_178,*(undefined *)(lVar16 + 0x50));
                            uVar9 = local_184;
                            if (local_184 != 0) goto joined_r0x0040f902;
                            uVar11 = FUN_00409d60(local_138,lVar29 + -1,local_98);
                            plVar31 = local_80 + lVar29;
                            lVar16 = FUN_004092e0(&local_184,plVar19,&local_178,uVar11);
                            *plVar31 = lVar16;
                            free(local_168);
                            lVar29 = local_80[lVar29];
                            uVar15 = local_f0;
                          }
                          local_f0 = uVar15;
                          if ((lVar29 == 0) && (uVar9 = local_184, local_184 != 0))
                          goto joined_r0x0040f902;
                        }
                      }
                      else {
                        uVar18 = FUN_00409d60(local_138,uVar15,local_98);
                        uVar28 = uVar9 >> 8;
                        if ((uVar28 & 4) == 0) {
                          if (((uVar28 & 8) == 0) || ((uVar18 & 1) == 0)) {
LAB_0040f4e1:
                            if ((((uVar28 & 0x20) == 0) || ((uVar18 & 2) != 0)) &&
                               (((uVar9 & 0x8000) == 0 || ((uVar18 & 8) != 0)))) goto LAB_0040f500;
                          }
                        }
                        else if (((uVar18 & 1) != 0) && ((uVar28 & 8) == 0)) goto LAB_0040f4e1;
                      }
LAB_0040f60e:
                      lVar14 = lVar14 + 1;
                    } while (lVar14 < *(long *)(lVar21 + 0x10));
                  }
                  local_188 = 0;
                }
                local_f0 = uVar15 + 1;
                uVar15 = (ulong)*(byte *)(local_138[1] + uVar15);
                do {
                  if (*(long *)(lVar21 + 0x58) != 0) {
                    lVar14 = *(long *)(*(long *)(lVar21 + 0x58) + uVar15 * 8);
LAB_0040f0dd:
                    if (local_80 != (long *)0x0) goto LAB_0040f0e8;
                    goto LAB_0040f0fe;
                  }
                  lVar14 = *(long *)(lVar21 + 0x60);
                  if (lVar14 != 0) {
                    uVar18 = FUN_00409d60(local_138,local_f0 - 1,local_98);
                    if ((uVar18 & 1) == 0) {
                      lVar14 = *(long *)(lVar14 + uVar15 * 8);
                    }
                    else {
                      lVar14 = *(long *)(lVar14 + 0x800 + uVar15 * 8);
                    }
                    goto LAB_0040f0dd;
                  }
                  cVar6 = FUN_0040aa70(local_a0,lVar21);
                } while (cVar6 != '\0');
                local_188 = 0xc;
                uVar9 = local_188;
joined_r0x0040f902:
                local_188 = uVar9;
                if (local_80 == (long *)0x0) {
                  plVar19 = (long *)0x0;
                  goto LAB_0040f942;
                }
                lVar14 = 0;
LAB_0040f0e8:
                lVar14 = FUN_0040e450(&local_188,local_138,lVar14);
LAB_0040f0fe:
                if (lVar14 == 0) {
                  plVar19 = local_80;
                  if (local_188 != 0) goto LAB_0040f942;
                  if ((local_80 == (long *)0x0) || (((byte)local_218 & (bVar32 ^ 1U)) != 0)) break;
                  do {
                    bVar4 = false;
                    uVar15 = local_f0;
                    do {
                      uVar18 = uVar15 + 1;
                      if (local_78 < (long)uVar18) {
                        if (bVar4) {
                          local_f0 = uVar15;
                        }
                        goto LAB_0040f17d;
                      }
                      bVar4 = true;
                      uVar15 = uVar18;
                    } while (local_80[uVar18] == 0);
                    local_f0 = uVar18;
                    lVar14 = FUN_0040e450(&local_188,local_138,0);
                    if (local_188 != 0) {
                      if (lVar14 == 0) goto LAB_0040f17d;
                      break;
                    }
                  } while (lVar14 == 0);
                }
                uVar15 = local_f0;
                local_18b = (bool)(local_18b & lVar21 == lVar14);
                if (!local_18b) {
                  uVar13 = local_228;
                }
                lVar21 = lVar14;
                local_228 = uVar13;
                if (((*(byte *)(lVar14 + 0x68) & 0x10) != 0) &&
                   ((-1 < (char)*(byte *)(lVar14 + 0x68) ||
                    (lVar14 = FUN_00409f80(local_138,*(undefined *)(lVar14 + 0x10),lVar14 + 0x18,
                                           local_f0), lVar14 != 0)))) {
                  uVar13 = uVar15;
                  if (!bVar32) goto LAB_0040f18f;
                  local_210 = uVar15;
                  local_218 = (long *)0x1;
                  local_1e8 = (long *)0x0;
                }
              }
LAB_0040f17d:
              uVar13 = local_210;
              if (local_1e8 != (long *)0x0) {
                *local_1e8 = *local_1e8 + local_228;
              }
            }
          }
          else {
            local_188 = FUN_00409c10(local_138,lVar21 + 0x10,lVar21 + 0x18,0);
            if (local_188 == 0) {
              bVar5 = *(byte *)(lVar21 + 0x68);
              if ((bVar5 & 0x40) != 0) {
                local_188 = FUN_0040dbd0(local_138,lVar21 + 0x10,lVar21 + 0x18);
                if (local_188 != 0) goto LAB_0041004e;
                bVar5 = *(byte *)(lVar21 + 0x68);
              }
              local_18b = false;
              goto LAB_0040efd8;
            }
LAB_0041004e:
            uVar13 = (long)(int)local_188;
          }
LAB_0040f18f:
          plVar19 = local_80;
          if (uVar13 != 0xffffffffffffffff) {
            if (uVar13 == 0xfffffffffffffffe) goto LAB_0040f991;
            local_90 = uVar13;
            if (((*(byte *)(param_1 + 7) & 0x10) == 0) && ((long *)0x1 < param_7)) {
              local_88 = (long *)FUN_00409f80(local_138,*(undefined *)(local_80[uVar13] + 0x10),
                                              local_80[uVar13] + 0x18,uVar13);
              if (((*(byte *)(plVar3 + 0x16) & 1) != 0) || (plVar3[0x13] != 0)) {
LAB_0040f9df:
                plVar20 = local_88;
                plVar31 = local_a0;
                if (uVar13 < 0x1fffffffffffffff) {
                  uVar15 = uVar13 + 1;
                  plVar19 = (long *)malloc(uVar15 * 8);
                  if (plVar19 == (long *)0x0) goto LAB_0040f991;
                  if (plVar31[0x13] == 0) {
                    plStack_170 = (long *)0x0;
                    local_158 = (undefined)0x0;
                    local_148 = (void *)0x0;
                    local_178 = plVar19;
                    local_168 = plVar20;
                    local_160 = uVar13;
                    local_1ec = FUN_0040e610(local_138,&local_178);
                    free(local_148);
                    if (local_1ec == 0) {
                      if (*plVar19 == 0) {
                        free(plVar19);
                        goto LAB_0040f7f0;
                      }
LAB_0040fb48:
                      free(local_80);
                      local_90 = uVar13;
                      local_88 = plVar20;
                      local_80 = plVar19;
                      goto LAB_0040f373;
                    }
LAB_0040ffd9:
                    local_218 = (long *)0x0;
                  }
                  else {
                    local_218 = (long *)malloc(uVar15 * 8);
                    if (local_218 == (long *)0x0) {
                      free(plVar19);
                      local_1ec = 0xc;
                      plVar19 = local_80;
                      goto LAB_0040f390;
                    }
                    while( true ) {
                      memset(local_218,0,uVar15 * 8);
                      local_158 = (undefined)0x0;
                      local_148 = (void *)0x0;
                      local_178 = plVar19;
                      plStack_170 = local_218;
                      local_168 = plVar20;
                      local_160 = uVar13;
                      local_1ec = FUN_0040e610(local_138,&local_178);
                      free(local_148);
                      if (local_1ec != 0) break;
                      if ((*plVar19 != 0) || (*local_218 != 0)) {
                        local_1ec = FUN_004097d0(plVar31,plVar19,local_218,uVar15);
                        free(local_218);
                        if (local_1ec != 0) goto LAB_0040ffd9;
                        goto LAB_0040fb48;
                      }
                      do {
                        uVar15 = uVar13;
                        uVar13 = uVar15 - 1;
                        if (uVar13 == 0xffffffffffffffff) {
                          free(plVar19);
                          free(local_218);
                          FUN_00407ca0(local_138);
                          lVar21 = local_180;
                          goto LAB_0040f800;
                        }
                        lVar21 = local_80[uVar13];
                      } while ((lVar21 == 0) || ((*(byte *)(lVar21 + 0x68) & 0x10) == 0));
                      plVar20 = (long *)FUN_00409f80(local_138,*(undefined *)(lVar21 + 0x10),
                                                     lVar21 + 0x18,uVar13);
                    }
                  }
                  free(plVar19);
                  free(local_218);
                  plVar19 = local_80;
                  if (local_1ec == 1) goto LAB_0040f7f0;
                  goto LAB_0040f390;
                }
                local_1ec = 0xc;
                goto LAB_0040f390;
              }
            }
            else if (plVar3[0x13] != 0) {
              local_88 = (long *)FUN_00409f80(local_138,*(undefined *)(local_80[uVar13] + 0x10),
                                              local_80[uVar13] + 0x18,uVar13);
              goto LAB_0040f9df;
            }
LAB_0040f373:
            plVar19 = local_80;
            local_1ec = uVar8;
            if (param_7 == (long *)0x0) goto LAB_0040f390;
            puVar23 = param_8 + 2;
            if ((long *)0x1 < param_7) goto LAB_0040fd50;
            *param_8 = 0;
            param_8[1] = local_90;
            goto LAB_00410047;
          }
LAB_0040f7f0:
          FUN_00407ca0(local_138);
          lVar21 = local_180;
        }
LAB_0040f800:
        local_180 = lVar21 + iVar7;
      } while ((lVar26 <= local_180) && (local_180 <= lVar24));
    }
LAB_0040f2e0:
    local_1ec = 1;
    plVar19 = local_80;
  }
  else {
    if (lVar24 < 0x666666666666667) {
      pvVar12 = malloc(lVar26 * 0x50);
      local_60 = pvVar12;
      local_40 = malloc(lVar26 << 4);
      if ((local_40 != (void *)0x0) && (pvVar12 != (void *)0x0)) goto LAB_0040ec8c;
    }
LAB_0040f991:
    local_1ec = 0xc;
    plVar19 = local_80;
  }
LAB_0040f390:
  free(plVar19);
  if (plVar3[0x13] != 0) {
    FUN_00407ca0(local_138);
    free(local_40);
    free(local_60);
  }
  FUN_00407c60(local_138);
LAB_0040f3b0:
  return (ulong)local_1ec;
LAB_0040fd50:
  do {
    puVar23[1] = 0xffffffffffffffff;
    puVar22 = puVar23 + 2;
    *puVar23 = 0xffffffffffffffff;
    puVar23 = puVar22;
  } while (param_8 + (long)param_7 * 2 != puVar22);
  *param_8 = 0;
  param_8[1] = local_90;
  if (((*(byte *)(param_1 + 7) & 0x10) == 0) && (param_7 != (long *)0x1)) {
    bVar32 = false;
    if ((*(byte *)(plVar3 + 0x16) & 1) != 0) {
      bVar32 = 0 < plVar3[0x13];
    }
    local_1ec = FUN_0040d160(param_1,local_138,param_7,param_8,bVar32);
    plVar19 = local_80;
    if (local_1ec != 0) goto LAB_0040f390;
    uVar13 = *param_8;
  }
  else {
LAB_00410047:
    uVar13 = 0;
  }
  plVar27 = (long *)0x0;
  puVar23 = param_8;
  while( true ) {
    if (uVar13 != 0xffffffffffffffff) {
      uVar15 = puVar23[1];
      uVar18 = uVar13;
      uVar30 = uVar15;
      if (local_ac != '\0') {
        uVar18 = local_100;
        if (local_108 != uVar13) {
          uVar18 = *(ulong *)(local_120 + uVar13 * 8);
        }
        *puVar23 = uVar18;
        uVar30 = local_100;
        if (local_108 != uVar15) {
          uVar30 = *(ulong *)(local_120 + uVar15 * 8);
        }
      }
      *puVar23 = uVar18 + local_180;
      puVar23[1] = uVar30 + local_180;
    }
    plVar27 = (long *)((long)plVar27 + 1);
    puVar23 = puVar23 + 2;
    if (plVar27 == param_7) break;
    uVar13 = *puVar23;
  }
  if (0 < local_1a8) {
    puVar23 = param_8 + (long)param_7 * 2;
    do {
      *puVar23 = 0xffffffffffffffff;
      puVar22 = puVar23 + 2;
      puVar23[1] = 0xffffffffffffffff;
      puVar23 = puVar22;
    } while (param_8 + (local_1a8 + (long)param_7) * 2 != puVar22);
  }
  lVar26 = plVar3[0x1c];
  plVar19 = local_80;
  local_1ec = uVar8;
  if (lVar26 != 0) {
    for (lVar24 = 0; lVar24 != (long)param_7 + -1; lVar24 = lVar24 + 1) {
      lVar21 = *(long *)(lVar26 + lVar24 * 8);
      if (lVar21 != lVar24) {
        param_8[lVar24 * 2 + 2] = param_8[(lVar21 + 1) * 2];
        param_8[lVar24 * 2 + 3] = param_8[(*(long *)(lVar26 + lVar24 * 8) + 1) * 2 + 1];
      }
    }
  }
  goto LAB_0040f390;
}


/* WARNING: Could not reconcile some variable overlaps */

ulong FUN_004100a0(long param_1,ulong *param_2,ulong param_3,long param_4)

{
  ulong *puVar1;
  long lVar2;
  byte bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  char cVar7;
  uint uVar8;
  long lVar9;
  void *pvVar10;
  ulong uVar11;
  undefined uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  long *plVar19;
  ulong *puVar20;
  long lVar21;
  long lVar22;
  void **ppvVar23;
  long lVar24;
  long lVar25;
  uint local_7c;
  ulong local_78;
  ulong uStack_70;
  ulong local_68;
  ulong uStack_60;
  ulong local_58;
  ulong uStack_50;
  void *local_48 [3];
  
  lVar2 = param_3 * 8;
  plVar4 = *(long **)(param_1 + 0x98);
  plVar16 = (long *)(lVar2 + *(long *)(param_1 + 0xb8));
  lVar5 = *plVar16;
  local_7c = 0;
  if (lVar5 == 0) {
    uVar11 = *param_2;
    if (*(long *)(param_4 + 8) == 0) {
      *(undefined *)(lVar2 + uVar11) = 0;
      return 0;
    }
    uVar12 = FUN_004095e0(&local_7c,plVar4,param_4);
    *(undefined *)(lVar2 + uVar11) = uVar12;
    return (ulong)local_7c;
  }
  if (*(long *)(param_4 + 8) == 0) {
    *(undefined *)(*param_2 + param_3 * 8) = 0;
    bVar3 = *(byte *)(*plVar16 + 0x68);
  }
  else {
    local_78 = local_78 & 0xffffffff00000000;
    lVar9 = FUN_004095e0(&local_78,plVar4,param_4);
    if ((int)local_78 != 0) {
      return local_78 & 0xffffffff;
    }
    lVar25 = *(long *)(lVar9 + 0x38);
    if (lVar25 == 0) {
      lVar24 = *(long *)(param_4 + 8);
      *(undefined *)(lVar9 + 0x40) = 0;
      *(long *)(lVar9 + 0x38) = lVar24;
      pvVar10 = malloc(lVar24 << 3);
      *(void **)(lVar9 + 0x48) = pvVar10;
      if (pvVar10 == (void *)0x0) {
        return 0xc;
      }
      local_78 = local_78 & 0xffffffff00000000;
      if (0 < *(long *)(param_4 + 8)) {
        do {
          uVar8 = FUN_00408570(lVar9 + 0x38,
                               plVar4[7] + *(long *)(*(long *)(param_4 + 0x10) + lVar25 * 8) * 0x18)
          ;
          local_78 = local_78 & 0xffffffff00000000 | (ulong)uVar8;
          if (uVar8 != 0) {
            return 0xc;
          }
          lVar25 = lVar25 + 1;
        } while (lVar25 < *(long *)(param_4 + 8));
      }
    }
    lVar25 = lVar5 + 8;
    uVar11 = FUN_00408ae0(param_4,lVar25,lVar9 + 0x38);
    local_7c = (uint)uVar11;
    if (local_7c != 0) {
      return uVar11;
    }
    if (param_2[5] != 0) {
      lVar9 = *(long *)(param_1 + 0xd8);
      if (0 < (long)param_2[5]) {
        lVar24 = 0;
        do {
          plVar16 = (long *)(lVar9 + *(long *)(param_2[6] + lVar24 * 8) * 0x28);
          if ((plVar16[2] < (long)param_3) && ((long)param_3 <= plVar16[1])) {
            lVar15 = *plVar4;
            lVar18 = *(long *)(param_4 + 8);
            lVar13 = *(long *)(lVar15 + *plVar16 * 0x10);
            if (param_3 == plVar16[3]) {
              if (0 < lVar18) {
                plVar16 = *(long **)(param_4 + 0x10);
                lVar22 = -1;
                lVar21 = -1;
                plVar17 = plVar16;
                do {
                  while( true ) {
                    lVar6 = *plVar17;
                    plVar19 = (long *)(lVar6 * 0x10 + lVar15);
                    if (*(char *)(plVar19 + 1) != '\b') break;
                    if (lVar13 == *plVar19) {
                      lVar21 = lVar6;
                    }
                    plVar17 = plVar17 + 1;
                    if (plVar16 + lVar18 == plVar17) goto LAB_004107ce;
                  }
                  if ((*(char *)(plVar19 + 1) == '\t') && (lVar13 == *plVar19)) {
                    lVar22 = lVar6;
                  }
                  plVar17 = plVar17 + 1;
                } while (plVar16 + lVar18 != plVar17);
LAB_004107ce:
                if (lVar21 < 0) {
                  if (-1 < lVar22) {
LAB_004107eb:
                    lVar18 = 0;
                    while( true ) {
                      lVar13 = plVar16[lVar18];
                      lVar21 = lVar13 * 0x18;
                      lVar15 = FUN_00408030(*(undefined *)(plVar4[7] + lVar21 + 8),
                                            plVar4[7] + lVar21 + 0x10,lVar22);
                      if ((lVar15 == 0) &&
                         (lVar15 = FUN_00408030(*(undefined *)(lVar21 + plVar4[6] + 8),
                                                lVar21 + plVar4[6] + 0x10), lVar15 == 0)) {
                        uVar11 = FUN_0040a840(plVar4,lVar13,param_4,lVar25);
                        if ((int)uVar11 != 0) {
                          return uVar11;
                        }
                      }
                      else {
                        lVar18 = lVar18 + 1;
                      }
                      if (*(long *)(param_4 + 8) == lVar18 || *(long *)(param_4 + 8) < lVar18)
                      break;
                      plVar16 = *(long **)(param_4 + 0x10);
                    }
                  }
                }
                else {
                  uVar11 = FUN_0040a840(plVar4,lVar21,param_4,lVar25);
                  if ((int)uVar11 != 0) {
                    return uVar11;
                  }
                  if ((-1 < lVar22) && (0 < *(long *)(param_4 + 8))) {
                    plVar16 = *(long **)(param_4 + 0x10);
                    goto LAB_004107eb;
                  }
                }
              }
            }
            else {
              lVar21 = 0;
              if (0 < lVar18) {
                do {
                  lVar18 = *(long *)(*(long *)(param_4 + 0x10) + lVar21 * 8);
                  plVar16 = (long *)(lVar15 + lVar18 * 0x10);
                  if ((*(byte *)(plVar16 + 1) - 8 < 2) && (lVar13 == *plVar16)) {
                    uVar11 = FUN_0040a840(plVar4,lVar18,param_4,lVar25);
                    if ((int)uVar11 != 0) {
                      return uVar11;
                    }
                    if (*(long *)(param_4 + 8) <= lVar21 + 1) break;
                  }
                  else if (*(long *)(param_4 + 8) <= lVar21 + 1) break;
                  lVar21 = lVar21 + 1;
                  lVar15 = *plVar4;
                } while( true );
              }
            }
          }
          lVar24 = lVar24 + 1;
        } while (lVar24 < (long)param_2[5]);
      }
      local_7c = 0;
    }
    uVar11 = *param_2;
    uVar12 = FUN_004095e0(&local_7c,plVar4,param_4);
    *(undefined *)(lVar2 + uVar11) = uVar12;
    if (local_7c != 0) {
      return (ulong)local_7c;
    }
    bVar3 = *(byte *)(*(long *)(lVar2 + *(long *)(param_1 + 0xb8)) + 0x68);
  }
  if ((bVar3 & 0x40) != 0) {
    lVar9 = 0;
    lVar25 = *(long *)(param_1 + 200);
    while (lVar9 < lVar25) {
      lVar18 = (lVar9 + lVar25) / 2;
      lVar24 = *(long *)(*(long *)(param_1 + 0xd8) + 8 + lVar18 * 0x28);
      while (lVar13 = lVar18, (long)param_3 <= lVar24) {
        if (lVar13 <= lVar9) goto LAB_004102d3;
        lVar18 = (lVar9 + lVar13) / 2;
        lVar24 = *(long *)(*(long *)(param_1 + 0xd8) + 8 + lVar18 * 0x28);
        lVar25 = lVar13;
      }
      lVar9 = lVar13 + 1;
    }
LAB_004102d3:
    if (((lVar9 < *(long *)(param_1 + 200)) &&
        (param_3 == *(ulong *)(*(long *)(param_1 + 0xd8) + 8 + lVar9 * 0x28))) && (lVar9 != -1)) {
      plVar4 = *(long **)(param_1 + 0x98);
      local_78 = 0;
      if (0 < *(long *)(lVar5 + 0x10)) {
        lVar25 = 0;
        do {
          uVar11 = *(ulong *)(*(long *)(lVar5 + 0x18) + lVar25 * 8);
          if (((uVar11 != param_2[2]) || (param_3 != param_2[3])) &&
             (*(char *)(uVar11 * 0x10 + *plVar4 + 8) == '\x04')) {
            puVar20 = (ulong *)(lVar9 * 0x28 + *(long *)(param_1 + 0xd8));
            lVar24 = lVar9;
            do {
              if (uVar11 == *puVar20) {
                lVar18 = param_3 + (puVar20[3] - puVar20[2]);
                if (puVar20[3] - puVar20[2] == 0) {
                  uVar12 = **(undefined **)(plVar4[5] + 0x10 + uVar11 * 0x18);
                }
                else {
                  uVar12 = *(undefined *)(plVar4[3] + uVar11 * 8);
                }
                if (((lVar18 <= (long)param_2[3]) &&
                    (lVar13 = *(long *)(*param_2 + lVar18 * 8), lVar13 != 0)) &&
                   ((lVar13 = FUN_00408030(*(undefined *)(lVar13 + 0x10),lVar13 + 0x18,uVar12),
                    lVar13 != 0 &&
                    (cVar7 = FUN_004082c0(param_1,param_2 + 5,param_2 + 6,uVar11,param_3),
                    cVar7 == '\0')))) {
                  if (local_78 == 0) {
                    local_78 = *param_2;
                    uStack_70 = param_2[1];
                    local_68 = param_2[2];
                    uStack_60 = param_2[3];
                    local_58 = param_2[4];
                    uStack_50 = param_2[5];
                    local_48[0] = (void *)param_2[6];
                    uVar14 = FUN_004090d0(&local_58,param_2 + 4,lVar18,0x410407);
                    if ((int)uVar14 == 0) goto LAB_00410444;
                  }
                  else {
LAB_00410444:
                    local_68 = uVar11;
                    uStack_60 = param_3;
                    cVar7 = FUN_00406a20(&local_58,lVar24);
                    if (cVar7 == '\0') {
                      uVar14 = 0xc;
                    }
                    else {
                      uVar12 = *(undefined *)(local_78 + lVar2);
                      uVar14 = FUN_0040e610(param_1,&local_78);
                      if (((int)uVar14 == 0) &&
                         ((param_2[1] == 0 ||
                          (uVar14 = FUN_004097d0(plVar4,param_2[1],local_78,param_3 + 1),
                          (int)uVar14 == 0)))) {
                        ppvVar23 = local_48;
                        *(undefined *)(local_78 + lVar2) = uVar12;
                        uVar14 = uStack_50;
                        lVar18 = FUN_00408030(uStack_50,ppvVar23,lVar24);
                        lVar18 = lVar18 + -1;
                        if ((-1 < lVar18) && (lVar18 < (long)uVar14)) {
                          uStack_50 = uVar14 - 1;
                          FUN_004081a0(&uStack_50,ppvVar23,lVar18);
                        }
                        puVar20 = (ulong *)(*(long *)(param_1 + 0xd8) + lVar24 * 0x28);
                        goto LAB_00410520;
                      }
                    }
                  }
                  if (local_78 == 0) {
                    return uVar14;
                  }
                  goto LAB_0041063c;
                }
              }
LAB_00410520:
              lVar24 = lVar24 + 1;
              puVar1 = puVar20 + 4;
              puVar20 = puVar20 + 5;
            } while (*(char *)puVar1 != '\0');
          }
          lVar25 = lVar25 + 1;
        } while (lVar25 < *(long *)(lVar5 + 0x10));
        if (local_78 != 0) {
          uVar14 = 0;
LAB_0041063c:
          free(local_48[0]);
          return uVar14 & 0xffffffff;
        }
      }
    }
  }
  return 0;
}


undefined
FUN_004108d0(undefined *param_1,long *param_2,byte *param_3,int param_4,undefined param_5,
            char param_6)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  byte bVar7;
  undefined auStack_38 [8];
  char local_30;
  
  lVar6 = (long)param_4;
  lVar4 = param_2[9];
  if ((*(int *)(param_2 + 0x12) != 1) && (iVar1 = FUN_00407fe0(param_2,lVar4), 1 < iVar1)) {
    lVar6 = param_2[2];
    *param_1 = 1;
    param_1[2] = *(undefined *)(lVar6 + lVar4 * 4);
    param_2[9] = iVar1 + lVar4;
    return 0;
  }
  bVar7 = param_3[8];
  lVar6 = lVar6 + lVar4;
  param_2[9] = lVar6;
  if (((bVar7 & 0xfb) != 0x1a) && (bVar7 != 0x1c)) {
    if (((bVar7 == 0x16) && (param_6 == '\0')) &&
       (FUN_00406540(auStack_38,param_2,param_5), local_30 != '\x15')) {
      return 0xb;
    }
    bVar7 = *param_3;
    *param_1 = 0;
    *(byte *)(param_1 + 2) = bVar7;
    return 0;
  }
  if (param_2[0xd] <= lVar6) {
    return 7;
  }
  uVar5 = (ulong)*param_3;
  lVar4 = 0;
  do {
    iVar1 = (int)lVar4;
    if ((bVar7 == 0x1e) && (*(char *)((long)param_2 + 0x8b) != '\0')) {
      if (*(char *)((long)param_2 + 0x8c) == '\0') {
        lVar3 = lVar6 + 1;
        param_2[9] = lVar3;
        bVar7 = *(byte *)(lVar6 + *param_2 + param_2[5]);
      }
      else {
        if (((lVar6 != param_2[6]) && (*(int *)(param_2[2] + lVar6 * 4) == -1)) ||
           (bVar7 = *(byte *)(*(long *)(param_2[3] + lVar6 * 8) + *param_2 + param_2[5]),
           (bVar7 & 0x80) != 0)) goto LAB_004109a9;
        lVar3 = 1;
        if (*(int *)(param_2 + 0x12) != 1) {
          iVar2 = FUN_00407fe0(param_2,lVar6);
          lVar3 = (long)iVar2;
        }
        lVar3 = lVar3 + lVar6;
        param_2[9] = lVar3;
      }
    }
    else {
LAB_004109a9:
      lVar3 = lVar6 + 1;
      param_2[9] = lVar3;
      bVar7 = *(byte *)(param_2[1] + lVar6);
    }
    if (param_2[0xd] == lVar3 || param_2[0xd] < lVar3) {
      return 7;
    }
    if (((byte)uVar5 == bVar7) && (*(char *)(param_2[1] + lVar3) == ']')) {
      param_2[9] = lVar3 + 1;
      *(undefined *)(*(long *)(param_1 + 2) + (long)iVar1) = 0;
      bVar7 = param_3[8];
      if (bVar7 == 0x1c) {
        *param_1 = 2;
        return 0;
      }
      if (bVar7 != 0x1e) {
        if (bVar7 != 0x1a) {
          return 0;
        }
        *param_1 = 3;
        return 0;
      }
      *param_1 = 4;
      return 0;
    }
    *(byte *)(*(long *)(param_1 + 2) + lVar4) = bVar7;
    lVar4 = lVar4 + 1;
    if (lVar4 == 0x20) {
      return 7;
    }
    bVar7 = param_3[8];
    lVar6 = param_2[9];
  } while( true );
}


undefined FUN_00410af0(long *param_1,long *param_2,ulong param_3)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  ushort **ppuVar7;
  undefined uVar8;
  wint_t wVar9;
  byte bVar10;
  uint uVar11;
  undefined local_48 [8];
  char local_40;
  
  lVar2 = param_2[9];
  if (param_2[0xd] == lVar2 || param_2[0xd] < lVar2) {
    *(undefined *)(param_1 + 1) = 2;
    return 0;
  }
  lVar3 = param_2[1];
  iVar5 = *(int *)(param_2 + 0x12);
  bVar1 = *(byte *)(lVar3 + lVar2);
  bVar10 = *(byte *)((long)param_1 + 10) & 0x9f;
  *(byte *)((long)param_1 + 10) = bVar10;
  *(byte *)param_1 = bVar1;
  uVar11 = (uint)param_3;
  if (iVar5 < 2) {
    if (bVar1 == 0x5c) goto LAB_00410bf0;
    *(undefined *)(param_1 + 1) = 1;
    ppuVar7 = __ctype_b_loc();
    *(byte *)((long)param_1 + 10) =
         bVar10 | (byte)(((*ppuVar7)[bVar1] >> 3 & 1 | (uint)(bVar1 == 0x5f)) << 6);
  }
  else {
    if ((lVar2 != param_2[6]) && (*(int *)(param_2[2] + lVar2 * 4) == -1)) {
      *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) & 0xffdfff00 | 0x200001;
      return 1;
    }
    if (bVar1 == 0x5c) {
LAB_00410bf0:
      lVar4 = lVar2 + 1;
      if (param_2[0xb] <= lVar4) {
        *(undefined *)(param_1 + 1) = 0x24;
        return 1;
      }
      if (*(char *)((long)param_2 + 0x8b) == '\0') {
LAB_00410c3e:
        uVar6 = (uint)*(byte *)(lVar3 + 1 + lVar2);
LAB_00410c4b:
        *(char *)param_1 = (char)uVar6;
        *(undefined *)(param_1 + 1) = 1;
        if (1 < iVar5) {
          wVar9 = *(wint_t *)(param_2[2] + lVar4 * 4);
          goto LAB_00410c5e;
        }
        ppuVar7 = __ctype_b_loc();
        *(byte *)((long)param_1 + 10) =
             (byte)(((*ppuVar7)[uVar6] >> 3 & 1 | (uint)((char)uVar6 == '_')) << 6) |
             *(byte *)((long)param_1 + 10) & 0xbf;
      }
      else {
        if (iVar5 < 2) {
LAB_00411112:
          if (*(char *)((long)param_2 + 0x8c) == '\0') {
            uVar6 = (uint)*(byte *)(*param_2 + lVar4 + param_2[5]);
          }
          else {
            bVar1 = *(byte *)(*param_2 + param_2[5] + *(long *)(param_2[3] + lVar4 * 8));
            uVar6 = (uint)bVar1;
            if ((bVar1 & 0x80) != 0) goto LAB_00410c3e;
          }
          goto LAB_00410c4b;
        }
        wVar9 = *(wint_t *)(param_2[2] + lVar4 * 4);
        if ((wVar9 != 0xffffffff) &&
           ((param_2[6] == lVar2 + 2 || (*(int *)(param_2[2] + 4 + lVar4 * 4) != -1))))
        goto LAB_00411112;
        bVar1 = *(byte *)(lVar3 + 1 + lVar2);
        *(undefined *)(param_1 + 1) = 1;
        uVar6 = (uint)bVar1;
        *(byte *)param_1 = bVar1;
LAB_00410c5e:
        iVar5 = iswalnum(wVar9);
        *(byte *)((long)param_1 + 10) =
             *(byte *)((long)param_1 + 10) & 0xbf | (iVar5 != 0 || wVar9 == 0x5f) << 6;
      }
      switch(uVar6 - 0x27 & 0xff) {
      case 0:
        if ((param_3 & 0x80000) == 0) {
          *(undefined *)(param_1 + 1) = 0xc;
          *(undefined *)param_1 = 0x80;
          return 2;
        }
        return 2;
      case 1:
        uVar8 = 2;
        if ((param_3 & 0x2000) != 0) {
          return 2;
        }
        break;
      case 2:
        uVar8 = 2;
        if ((param_3 & 0x2000) != 0) {
          return 2;
        }
        goto LAB_00410d2a;
      default:
        return 2;
      case 4:
        uVar8 = 2;
        if ((uVar11 & 0x402) != 2) {
          return 2;
        }
        goto LAB_00410d62;
      case 10:
      case 0xb:
      case 0xc:
      case 0xd:
      case 0xe:
      case 0xf:
      case 0x10:
      case 0x11:
      case 0x12:
        if ((param_3 & 0x4000) == 0) {
          *(undefined *)(param_1 + 1) = 4;
          *param_1 = (long)(int)(uVar6 - 0x31);
          return 2;
        }
        return 2;
      case 0x15:
        if ((param_3 & 0x80000) == 0) {
          *(undefined *)(param_1 + 1) = 0xc;
          *(undefined *)param_1 = 6;
          return 2;
        }
        return 2;
      case 0x17:
        if ((param_3 & 0x80000) == 0) {
          *(undefined *)(param_1 + 1) = 0xc;
          *(undefined *)param_1 = 9;
          return 2;
        }
        return 2;
      case 0x18:
        uVar8 = 2;
        if ((uVar11 & 0x402) != 2) {
          return 2;
        }
        goto LAB_00410d92;
      case 0x1b:
        if ((param_3 & 0x80000) == 0) {
          *(undefined *)(param_1 + 1) = 0xc;
          *(undefined *)param_1 = 0x200;
          return 2;
        }
        return 2;
      case 0x2c:
        if ((param_3 & 0x80000) == 0) {
          *(undefined *)(param_1 + 1) = 0x23;
          return 2;
        }
        return 2;
      case 0x30:
        if ((param_3 & 0x80000) == 0) {
          *(undefined *)(param_1 + 1) = 0x21;
          return 2;
        }
        return 2;
      case 0x39:
        if ((param_3 & 0x80000) == 0) {
          *(undefined *)(param_1 + 1) = 0xc;
          *(undefined *)param_1 = 0x40;
          return 2;
        }
        return 2;
      case 0x3b:
        if ((param_3 & 0x80000) == 0) {
          *(undefined *)(param_1 + 1) = 0xc;
          *(undefined *)param_1 = 0x100;
          return 2;
        }
        return 2;
      case 0x4c:
        if ((param_3 & 0x80000) == 0) {
          *(undefined *)(param_1 + 1) = 0x22;
          return 2;
        }
        return 2;
      case 0x50:
        if ((param_3 & 0x80000) == 0) {
          *(undefined *)(param_1 + 1) = 0x20;
          return 2;
        }
        return 2;
      case 0x54:
        uVar8 = 2;
        if ((uVar11 & 0x1200) != 0x200) {
          return 2;
        }
        goto LAB_00410df9;
      case 0x55:
        if ((param_3 & 0x8400) == 0) {
          *(undefined *)(param_1 + 1) = 10;
          return 2;
        }
        return 2;
      case 0x56:
        uVar8 = 2;
        if ((uVar11 & 0x1200) != 0x200) {
          return 2;
        }
        goto LAB_00410ec1;
      }
      goto LAB_00410d0a;
    }
    lVar4 = param_2[2];
    *(undefined *)(param_1 + 1) = 1;
    wVar9 = *(wint_t *)(lVar4 + lVar2 * 4);
    iVar5 = iswalnum(wVar9);
    *(byte *)((long)param_1 + 10) =
         *(byte *)((long)param_1 + 10) & 0xbf | (iVar5 != 0 || wVar9 == 0x5f) << 6;
  }
  switch(bVar1) {
  case 10:
    if ((param_3 & 0x800) == 0) {
      return 1;
    }
    break;
  default:
    return 1;
  case 0x24:
    if (((param_3 & 8) == 0) && (lVar2 + 1 != param_2[0xb])) {
      param_2[9] = lVar2 + 1;
      FUN_00410af0(local_48,param_2,param_3);
      param_2[9] = param_2[9] + -1;
      if (1 < (byte)(local_40 - 9U)) {
        return 1;
      }
    }
    *(undefined *)(param_1 + 1) = 0xc;
    *(undefined *)param_1 = 0x20;
    return 1;
  case 0x28:
    uVar8 = 1;
    if ((param_3 & 0x2000) == 0) {
      return 1;
    }
LAB_00410d0a:
    *(undefined *)(param_1 + 1) = 8;
    return uVar8;
  case 0x29:
    uVar8 = 1;
    if ((param_3 & 0x2000) == 0) {
      return 1;
    }
LAB_00410d2a:
    *(undefined *)(param_1 + 1) = 9;
    return uVar8;
  case 0x2a:
    *(undefined *)(param_1 + 1) = 0xb;
    return 1;
  case 0x2b:
    uVar8 = 1;
    if ((param_3 & 0x402) != 0) {
      return 1;
    }
LAB_00410d62:
    *(undefined *)(param_1 + 1) = 0x12;
    return uVar8;
  case 0x2e:
    *(undefined *)(param_1 + 1) = 5;
    return 1;
  case 0x3f:
    uVar8 = 1;
    if ((param_3 & 0x402) != 0) {
      return 1;
    }
LAB_00410d92:
    *(undefined *)(param_1 + 1) = 0x13;
    return uVar8;
  case 0x5b:
    *(undefined *)(param_1 + 1) = 0x14;
    return 1;
  case 0x5e:
    if (((param_3 & 0x800008) == 0) && (lVar2 != 0)) {
      if (*(char *)(lVar3 + -1 + lVar2) != '\n') {
        return 1;
      }
      if ((param_3 & 0x800) == 0) {
        return 1;
      }
    }
    *(undefined *)(param_1 + 1) = 0xc;
    *(undefined *)param_1 = 0x10;
    return 1;
  case 0x7b:
    uVar8 = 1;
    if ((uVar11 & 0x1200) != 0x1200) {
      return 1;
    }
LAB_00410df9:
    *(undefined *)(param_1 + 1) = 0x17;
    return uVar8;
  case 0x7c:
    if ((uVar11 & 0x8400) != 0x8000) {
      return 1;
    }
    break;
  case 0x7d:
    uVar8 = 1;
    if ((uVar11 & 0x1200) != 0x1200) {
      return 1;
    }
LAB_00410ec1:
    *(undefined *)(param_1 + 1) = 0x18;
    return uVar8;
  }
  *(undefined *)(param_1 + 1) = 10;
  return 1;
}


long FUN_004111a0(long param_1,byte *param_2,undefined param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = -2;
  lVar5 = -1;
  while( true ) {
    lVar4 = lVar5;
    iVar3 = FUN_00410af0(param_2,param_1,param_3);
    bVar1 = *param_2;
    *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + (long)iVar3;
    bVar2 = param_2[8];
    if (bVar2 == 2) {
      return -2;
    }
    if (bVar2 == 0x18) break;
    if (bVar1 == 0x2c) {
      return lVar4;
    }
    lVar5 = lVar6;
    if (((bVar2 == 1) && ((byte)(bVar1 - 0x30) < 10)) && (lVar4 != -2)) {
      if (lVar4 == -1) {
        lVar5 = (long)(int)(bVar1 - 0x30);
      }
      else {
        lVar5 = (ulong)bVar1 + lVar4 * 10;
        if (0x8030 < lVar5) {
          lVar5 = 0x8030;
        }
        lVar5 = lVar5 + -0x30;
      }
    }
  }
  return lVar4;
}


/* WARNING: Switch with 1 destination removed at 0x00411a8d */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Exceeded maximum restarts with more pending */

long FUN_00411260(long param_1,long *param_2,undefined *param_3,ulong param_4,long param_5,
                 int *param_6)

{
  long lVar1;
  undefined uVar2;
  undefined uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  ulong *__ptr;
  ulong *__ptr_00;
  long lVar9;
  ulong *puVar10;
  long lVar11;
  ushort **ppuVar12;
  ulong **ppuVar13;
  void *__ptr_01;
  void *__ptr_02;
  char *pcVar14;
  ulong uVar15;
  char *pcVar16;
  long lVar17;
  ulong uVar18;
  undefined uVar19;
  ushort *puVar20;
  undefined uVar21;
  int iVar22;
  uint uVar23;
  bool bVar24;
  byte bVar25;
  ulong local_118;
  long local_100;
  ulong local_f8;
  uint local_a8 [2];
  ulong **local_a0;
  int local_98 [2];
  char *local_90;
  undefined local_88 [8];
  char local_80;
  ulong *local_78;
  undefined local_70;
  char local_58 [8];
  undefined local_50;
  
  bVar25 = 0;
  lVar9 = *param_2;
  cVar4 = *(char *)(param_3 + 1);
  switch(cVar4) {
  default:
    goto LAB_0041132a;
  case '\x01':
    lVar8 = lVar9 + 0x70;
    lVar7 = lVar9 + 0x80;
    local_100 = FUN_00408ca0(lVar8,lVar7,0,0,param_3);
    if (local_100 != 0) {
      if (*(int *)(lVar9 + 0xb4) < 2) goto LAB_00411300;
      do {
        lVar11 = *(long *)(param_1 + 0x48);
        if (((*(long *)(param_1 + 0x68) == lVar11 || *(long *)(param_1 + 0x68) < lVar11) ||
            (lVar11 == *(long *)(param_1 + 0x30))) ||
           (*(int *)(*(long *)(param_1 + 0x10) + lVar11 * 4) != -1)) goto LAB_00411300;
        iVar5 = FUN_00410af0(param_3,param_1,param_4);
        *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + (long)iVar5;
        lVar11 = FUN_00408ca0(lVar8,lVar7,0,0,param_3);
        local_50 = 0x10;
        local_100 = FUN_00408ca0(lVar8,lVar7,local_100,lVar11,local_58);
      } while (lVar11 != 0 && local_100 != 0);
    }
    break;
  case '\x04':
    uVar15 = (ulong)(1 << ((byte)*param_3 & 0x1f));
    if ((*(ulong *)(lVar9 + 0xa8) & uVar15) == 0) {
      *param_6 = 6;
      return 0;
    }
    *(ulong *)(lVar9 + 0xa0) = *(ulong *)(lVar9 + 0xa0) | uVar15;
    local_100 = FUN_00408ca0(lVar9 + 0x70,lVar9 + 0x80,0,0,param_3);
    if (local_100 == 0) break;
    *(long *)(lVar9 + 0x98) = *(long *)(lVar9 + 0x98) + 1;
    *(byte *)(lVar9 + 0xb0) = *(byte *)(lVar9 + 0xb0) | 2;
    goto LAB_00411300;
  case '\x05':
    local_100 = FUN_00408ca0(lVar9 + 0x70,lVar9 + 0x80,0,0,param_3);
    if (local_100 != 0) {
      if (1 < *(int *)(lVar9 + 0xb4)) {
        *(byte *)(lVar9 + 0xb0) = *(byte *)(lVar9 + 0xb0) | 2;
      }
      goto LAB_00411300;
    }
    break;
  case '\b':
    uVar15 = param_2[6];
    param_2[6] = uVar15 + 1;
    iVar5 = FUN_00410af0(param_3,param_1,param_4 | 0x800000);
    *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + (long)iVar5;
    lVar8 = 0;
    if (*(char *)(param_3 + 1) != '\t') {
      lVar8 = FUN_00412890(param_1,param_2,param_3,param_4,param_5 + 1,param_6);
      if (*param_6 != 0) {
        return 0;
      }
      if (*(char *)(param_3 + 1) != '\t') {
        if (lVar8 != 0) {
          FUN_004064d0(lVar8,FUN_004076e0,0);
        }
        *param_6 = 8;
        return 0;
      }
    }
    if (uVar15 < 9) {
      *(ulong *)(lVar9 + 0xa8) = *(ulong *)(lVar9 + 0xa8) | (long)(1 << ((byte)uVar15 & 0x1f));
    }
    local_50 = 0x11;
    local_100 = FUN_00408ca0(lVar9 + 0x70,lVar9 + 0x80,lVar8,0,local_58);
    if (local_100 != 0) {
      *(ulong *)(local_100 + 0x28) = uVar15;
      goto LAB_00411300;
    }
    break;
  case '\t':
    goto switchD_0041129b_caseD_9;
  case '\v':
  case '\x12':
  case '\x13':
    goto switchD_0041129b_caseD_b;
  case '\f':
    uVar23 = *(uint *)param_3;
    if (((uVar23 & 0x30f) != 0) && (bVar25 = *(byte *)(lVar9 + 0xb0), (bVar25 & 0x10) == 0)) {
      *(byte *)(lVar9 + 0xb0) = bVar25 | 0x10;
      if ((bVar25 & 8) == 0) {
        *(undefined *)(lVar9 + 0xb8) = 0x3ff000000000000;
        *(undefined *)(lVar9 + 0xc0) = 0x7fffffe87fffffe;
        if ((bVar25 & 4) != 0) {
          *(undefined (*) [16])(lVar9 + 200) = (undefined)0x0;
          uVar23 = *(uint *)param_3;
          goto LAB_00411d10;
        }
        iVar5 = 0x80;
        iVar6 = 2;
      }
      else {
        iVar5 = 0;
        iVar6 = 0;
      }
      ppuVar12 = __ctype_b_loc();
      iVar22 = iVar5 + 0x100;
      lVar8 = lVar9 + (long)iVar6 * 8;
      puVar20 = *ppuVar12 + iVar5;
      do {
        lVar7 = 0;
        do {
          if (((*(byte *)(puVar20 + lVar7) & 8) != 0) || (iVar5 + (int)lVar7 == 0x5f)) {
            *(ulong *)(lVar8 + 0xb8) = *(ulong *)(lVar8 + 0xb8) | 1L << ((byte)lVar7 & 0x3f);
          }
          lVar7 = lVar7 + 1;
        } while (lVar7 != 0x40);
        iVar5 = iVar5 + 0x40;
        lVar8 = lVar8 + 8;
        puVar20 = puVar20 + 0x40;
      } while (iVar22 + iVar6 * -0x40 != iVar5);
    }
LAB_00411d10:
    lVar8 = lVar9 + 0x70;
    lVar9 = lVar9 + 0x80;
    if ((uVar23 - 0x100 & 0xfffffeff) == 0) {
      if (uVar23 == 0x100) {
        *(uint *)param_3 = 6;
        lVar7 = FUN_00408ca0(lVar8,lVar9,0,0,param_3);
        *(uint *)param_3 = 9;
      }
      else {
        *(uint *)param_3 = 5;
        lVar7 = FUN_00408ca0(lVar8,lVar9,0,0,param_3);
        *(uint *)param_3 = 10;
      }
      lVar11 = FUN_00408ca0(lVar8,lVar9,0,0,param_3);
      local_50 = 10;
      lVar9 = FUN_00408ca0(lVar8,lVar9,lVar7,lVar11,local_58);
      if (lVar7 == 0 || lVar11 == 0) break;
    }
    else {
      lVar9 = FUN_00408ca0(lVar8,lVar9,0,0,param_3);
    }
    if (lVar9 != 0) {
      iVar5 = FUN_00410af0(param_3,param_1,param_4);
      *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + (long)iVar5;
      return lVar9;
    }
    break;
  case '\x14':
    __ptr = (ulong *)calloc(0x20,1);
    __ptr_00 = (ulong *)calloc(0x50,1);
    if (__ptr != (ulong *)0x0 && __ptr_00 != (ulong *)0x0) {
      iVar5 = FUN_00406540(param_3,param_1,param_4);
      cVar4 = *(char *)(param_3 + 1);
      if (cVar4 != '\x02') {
        bVar24 = false;
        if (cVar4 != '\x19') {
LAB_004119f2:
          if (cVar4 == '\x15') {
            *(undefined *)(param_3 + 1) = 1;
          }
          local_f8 = 0;
          uVar21 = 1;
LAB_00411a1e:
          local_a8[0] = 3;
          local_a0 = &local_78;
          iVar5 = FUN_004108d0(local_a8,param_1,param_3,iVar5,param_4,uVar21);
          if (iVar5 == 0) {
            iVar5 = FUN_00406540(param_3,param_1,param_4);
            if ((local_a8[0] - 2 & 0xfffffffd) == 0) {
LAB_00411a84:
              if (4 < local_a8[0]) {
                    /* WARNING: Subroutine does not return */
                __assert_fail("0","lib/regcomp.c",0xcf3,"parse_bracket_exp");
              }
                    /* WARNING: This code block may not be properly labeled as switch case */
              iVar6 = FUN_0040b870(__ptr,local_a0);
              *param_6 = iVar6;
              if (iVar6 == 0) {
LAB_00411e7f:
                if (*(char *)(param_3 + 1) == '\x02') goto LAB_00411fe5;
                if (*(char *)(param_3 + 1) != '\x15') goto code_r0x00411e95;
                *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + (long)iVar5;
                if (bVar24) {
                  puVar10 = __ptr;
                  do {
                    *puVar10 = ~*puVar10;
                    puVar10 = puVar10 + 1;
                  } while (__ptr + 4 != puVar10);
                }
                iVar5 = *(int *)(lVar9 + 0xb4);
                if (1 < iVar5) {
                  lVar8 = *(long *)(lVar9 + 0x78);
                  lVar7 = 0;
                  do {
                    *(ulong *)((long)__ptr + lVar7) =
                         *(ulong *)((long)__ptr + lVar7) & *(ulong *)(lVar8 + lVar7);
                    lVar7 = lVar7 + 8;
                  } while (lVar7 != 0x20);
                }
                if (((((__ptr_00[5] != 0) || (__ptr_00[6] != 0)) || (__ptr_00[7] != 0)) ||
                    (__ptr_00[8] != 0)) ||
                   ((1 < iVar5 && ((__ptr_00[9] != 0 || ((*(byte *)(__ptr_00 + 4) & 1) != 0)))))) {
                  *(byte *)(lVar9 + 0xb0) = *(byte *)(lVar9 + 0xb0) | 2;
                  lVar8 = lVar9 + 0x70;
                  lVar7 = lVar9 + 0x80;
                  local_70 = 6;
                  local_78 = __ptr_00;
                  local_100 = FUN_00408ca0(lVar8,lVar7,0,0,&local_78);
                  puVar10 = __ptr;
                  if (local_100 != 0) {
                    while (*puVar10 == 0) {
                      puVar10 = puVar10 + 1;
                      if (__ptr + 4 == puVar10) {
                        free(__ptr);
                        goto LAB_00411300;
                      }
                    }
                    local_70 = 3;
                    local_78 = __ptr;
                    lVar11 = FUN_00408ca0(lVar8,lVar7,0,0,&local_78);
                    if (lVar11 != 0) {
                      local_50 = 10;
                      local_100 = FUN_00408ca0(lVar8,lVar7,lVar11,local_100,local_58);
                      goto joined_r0x004123b8;
                    }
                  }
LAB_004123be:
                  *param_6 = 0xc;
                  goto LAB_00411f1b;
                }
                FUN_00407690(__ptr_00);
                local_70 = 3;
                local_78 = __ptr;
                local_100 = FUN_00408ca0(lVar9 + 0x70,lVar9 + 0x80,0,0,&local_78);
joined_r0x004123b8:
                if (local_100 == 0) goto LAB_004123be;
                goto LAB_00411300;
              }
              goto LAB_00411f1b;
            }
            if (*(char *)(param_3 + 1) == '\x02') {
LAB_00411fe5:
              *param_6 = 7;
              goto LAB_00411f1b;
            }
            if (*(char *)(param_3 + 1) != '\x16') goto LAB_00411a84;
            *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + (long)iVar5;
            FUN_00406540(local_88);
            if (local_80 == '\x02') goto LAB_00411fe5;
            if (local_80 == '\x15') {
              *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + (long)-iVar5;
              *(undefined *)(param_3 + 1) = 1;
              goto LAB_00411a84;
            }
            local_90 = local_58;
            local_98[0] = 3;
            iVar5 = FUN_004108d0(local_98);
            if (iVar5 == 0) {
              iVar5 = FUN_00406540(param_3,param_1,param_4);
              puVar10 = (ulong *)0x0;
              if (1 < *(int *)(lVar9 + 0xb4)) {
                puVar10 = __ptr_00;
              }
              if (((local_a8[0] - 2 & 0xfffffffd) == 0) || ((local_98[0] - 2U & 0xfffffffd) == 0)) {
LAB_004125c6:
                *param_6 = 0xb;
              }
              else {
                if (local_a8[0] == 3) {
                  uVar15 = 0xffffffffffffffff;
                  uVar18 = 0xffffffffffffffff;
                  ppuVar13 = local_a0;
                  do {
                    if (uVar18 == 0) break;
                    uVar18 = uVar18 - 1;
                    cVar4 = *(char *)ppuVar13;
                    ppuVar13 = (ulong **)((long)ppuVar13 + (ulong)bVar25 * -2 + 1);
                  } while (cVar4 != '\0');
                  if (~uVar18 - 1 < 2) {
                    pcVar14 = local_90;
                    if (local_98[0] == 3) {
                      do {
                        if (uVar15 == 0) break;
                        uVar15 = uVar15 - 1;
                        cVar4 = *pcVar14;
                        pcVar14 = pcVar14 + (ulong)bVar25 * -2 + 1;
                      } while (cVar4 != '\0');
                      if (1 < ~uVar15 - 1) goto LAB_004124c5;
                    }
                    local_a0._0_1_ = *(char *)local_a0;
LAB_0041215f:
                    if (local_98[0] != 0) {
                      local_90._0_1_ = '\0';
                      if (local_98[0] != 3) goto LAB_0041217a;
                      goto LAB_00412176;
                    }
LAB_004125b9:
                    goto LAB_0041217a;
                  }
                }
                else {
                  if (local_98[0] == 3) {
                    uVar15 = 0xffffffffffffffff;
                    pcVar14 = local_90;
                    do {
                      if (uVar15 == 0) break;
                      uVar15 = uVar15 - 1;
                      cVar4 = *pcVar14;
                      pcVar14 = pcVar14 + (ulong)bVar25 * -2 + 1;
                    } while (cVar4 != '\0');
                    if (1 < ~uVar15 - 1) goto LAB_004124c5;
                    local_a0._0_1_ = '\0';
                    if (local_a8[0] == 0) goto LAB_0041215a;
LAB_00412176:
                    local_90._0_1_ = *local_90;
                  }
                  else {
                    if (local_a8[0] == 0) {
LAB_0041215a:
                      goto LAB_0041215f;
                    }
                    local_a0._0_1_ = '\0';
                    local_90._0_1_ = '\0';
                    if (local_98[0] == 0) goto LAB_004125b9;
                  }
LAB_0041217a:
                  if ((local_a8[0] == 0) || (ppuVar13 = local_a0, local_a8[0] == 3)) {
                    ppuVar13 = (ulong **)FUN_00406c50((char)local_a0,puVar10);
                  }
                  uVar23 = (uint)ppuVar13;
                  if ((local_98[0] == 0) || (local_98[0] == 3)) {
                    local_90._0_4_ = FUN_00406c50((char)local_90,puVar10);
                  }
                  if ((uVar23 != 0xffffffff) && ((uint)local_90 != 0xffffffff)) {
                    if (((param_4 & 0x10000) != 0) && ((uint)local_90 < uVar23)) goto LAB_004125c6;
                    if (puVar10 != (ulong *)0x0) {
                      uVar15 = puVar10[8];
                      __ptr_01 = (void *)puVar10[1];
                      if (uVar15 == local_f8) {
                        local_f8 = local_f8 * 2 + 1;
                        __ptr_01 = realloc(__ptr_01,local_f8 * 4);
                        __ptr_02 = realloc((void *)puVar10[2],local_f8 * 4);
                        if ((__ptr_01 == (void *)0x0) || (__ptr_02 == (void *)0x0)) {
                          free(__ptr_01);
                          free(__ptr_02);
                          *param_6 = 0xc;
                          goto LAB_00411f1b;
                        }
                        puVar10[2] = (ulong)__ptr_02;
                        uVar15 = puVar10[8];
                        puVar10[1] = (ulong)__ptr_01;
                      }
                      *(uint *)((long)__ptr_01 + uVar15 * 4) = uVar23;
                      puVar10[8] = uVar15 + 1;
                      *(uint *)(puVar10[2] + uVar15 * 4) = (uint)local_90;
                    }
                    lVar8 = 0;
                    do {
                      if ((uVar23 <= (uint)lVar8) && ((uint)lVar8 <= (uint)local_90)) {
                        __ptr[lVar8 >> 6] = __ptr[lVar8 >> 6] | 1L << ((byte)lVar8 & 0x3f);
                      }
                      lVar8 = lVar8 + 1;
                    } while (lVar8 != 0x100);
                    *param_6 = 0;
                    goto LAB_00411e7f;
                  }
                }
LAB_004124c5:
                *param_6 = 3;
              }
              goto LAB_00411f1b;
            }
          }
          *param_6 = iVar5;
          goto LAB_00411f1b;
        }
        *(byte *)(__ptr_00 + 4) = *(byte *)(__ptr_00 + 4) | 1;
        if ((param_4 & 0x100) != 0) {
          *__ptr = *__ptr | 0x400;
        }
        *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + (long)iVar5;
        iVar5 = FUN_00406540(param_3,param_1,param_4);
        cVar4 = *(char *)(param_3 + 1);
        if (cVar4 != '\x02') {
          bVar24 = true;
          goto LAB_004119f2;
        }
      }
      *param_6 = 2;
LAB_00411f1b:
      free(__ptr);
      FUN_00407690(__ptr_00);
      if (*param_6 != 0) {
        return 0;
      }
      local_100 = 0;
      goto LAB_00411300;
    }
    free(__ptr);
    free(__ptr_00);
    break;
  case '\x17':
    if ((param_4 & 0x1000000) != 0) goto LAB_004115d5;
switchD_0041129b_caseD_b:
    if ((param_4 & 0x20) != 0) {
LAB_004115d5:
      *param_6 = 0xd;
      return 0;
    }
    if ((param_4 & 0x10) != 0) {
      iVar5 = FUN_00410af0(param_3,param_1,param_4);
      *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + (long)iVar5;
      lVar9 = FUN_00411260(param_1,param_2,param_3,param_4,param_5,param_6);
      return lVar9;
    }
    if (cVar4 == '\t') {
switchD_0041129b_caseD_9:
      if ((param_4 & 0x20000) == 0) {
        *param_6 = 0x10;
        return 0;
      }
    }
switchD_0041129b_caseD_18:
    *(undefined *)(param_3 + 1) = 1;
    local_100 = FUN_00408ca0(lVar9 + 0x70,lVar9 + 0x80,0,0,param_3);
    if (local_100 != 0) {
LAB_00411300:
      iVar5 = FUN_00410af0(param_3,param_1,param_4);
      uVar15 = (ulong)*(byte *)(param_3 + 1);
      *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + (long)iVar5;
      do {
        bVar25 = (byte)uVar15;
        if (0x17 < bVar25) {
          return local_100;
        }
        uVar18 = (ulong)(bVar25 == 0x12);
        if ((0x8c0800UL >> (uVar15 & 0x3f) & 1) == 0) {
          return local_100;
        }
        uVar19 = *(undefined *)(param_1 + 0x48);
        uVar2 = *param_3;
        uVar3 = param_3[1];
        local_f8 = local_100;
        lVar8 = local_100;
        if (bVar25 == 0x17) {
          uVar18 = FUN_004111a0(param_1,param_3,param_4);
          if (uVar18 == 0xffffffffffffffff) {
            if ((*(char *)(param_3 + 1) == '\x01') && (*(char *)param_3 == ',')) {
              uVar18 = 0;
LAB_004117e9:
              local_118 = FUN_004111a0(param_1,param_3,param_4);
              if (local_118 == 0xfffffffffffffffe) goto LAB_00411782;
              if (((local_118 == 0xffffffffffffffff) || ((long)uVar18 <= (long)local_118)) &&
                 (*(char *)(param_3 + 1) == '\x18')) {
                uVar15 = uVar18;
                if (local_118 != 0xffffffffffffffff) goto LAB_004118a4;
                goto joined_r0x004118b4;
              }
            }
LAB_004118e0:
            *param_6 = 10;
          }
          else {
            if (uVar18 != 0xfffffffffffffffe) {
              local_118 = uVar18;
              if (*(char *)(param_3 + 1) != '\x18') {
                if (*(char *)(param_3 + 1) != '\x01') goto LAB_00411782;
                if (*(char *)param_3 == ',') goto LAB_004117e9;
                if ((param_4 & 0x200000) == 0) goto LAB_004118e0;
                goto LAB_00411791;
              }
LAB_004118a4:
              uVar15 = local_118;
joined_r0x004118b4:
              if (0x7fff < (long)uVar15) {
                *param_6 = 0xf;
                goto LAB_004118eb;
              }
              iVar5 = FUN_00410af0(param_3,param_1,param_4);
              *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + (long)iVar5;
              if (local_100 == 0) goto LAB_004117b0;
              if ((local_118 | uVar18) == 0) {
                FUN_004064d0(local_100,FUN_004076e0,0);
                if (*param_6 != 0) goto LAB_0041168b;
                goto LAB_004117bf;
              }
              if ((long)uVar18 < 1) {
                local_f8 = 0;
                goto LAB_00411962;
              }
              if (uVar18 != 1) {
                lVar7 = 2;
                do {
                  lVar8 = FUN_00408d80(lVar8,lVar9);
                  local_50 = 0x10;
                  local_f8 = FUN_00408ca0(lVar9 + 0x70,lVar9 + 0x80,local_f8,lVar8,local_58);
                  if ((lVar8 == 0) || (local_f8 == 0)) goto LAB_00411680;
                  lVar7 = lVar7 + 1;
                } while (lVar7 <= (long)uVar18);
              }
              lVar7 = local_f8;
              if (uVar18 != local_118) goto LAB_0041193f;
              goto LAB_00411597;
            }
LAB_00411782:
            if ((param_4 & 0x200000) == 0) {
              if (*(char *)(param_3 + 1) != '\x02') goto LAB_004118e0;
              *param_6 = 9;
              goto LAB_004118eb;
            }
LAB_00411791:
            *(undefined *)(param_1 + 0x48) = uVar19;
            *param_3 = uVar2;
            param_3[1] = uVar3;
            *(undefined *)(param_3 + 1) = 1;
            lVar7 = local_100;
LAB_0041157e:
            if ((*param_6 == 0) || (lVar7 != 0)) goto LAB_00411597;
          }
LAB_004118eb:
          if (local_100 == 0) {
            return 0;
          }
          goto LAB_0041168b;
        }
        if (bVar25 == 0x13) {
          iVar5 = FUN_00410af0(param_3,param_1,param_4);
          *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + (long)iVar5;
          if (local_100 == 0) goto LAB_004117b0;
          if (*(char *)(local_100 + 0x30) == '\x11') {
            local_118 = 1;
            local_f8 = 0;
            goto LAB_00411718;
          }
          local_118 = 1;
          local_50 = 10;
          local_f8 = 0;
LAB_0041147a:
          lVar11 = lVar9 + 0x70;
          lVar1 = lVar9 + 0x80;
          lVar7 = FUN_00408ca0(lVar11,lVar1,lVar8,0,local_58);
          if (lVar7 == 0) {
LAB_00411680:
            *param_6 = 0xc;
LAB_0041168b:
            FUN_004064d0(local_100,FUN_004076e0,0);
            return 0;
          }
          for (lVar17 = uVar18 + 2; lVar17 <= (long)local_118; lVar17 = lVar17 + 1) {
            lVar8 = FUN_00408d80(lVar8,lVar9);
            local_50 = 0x10;
            lVar7 = FUN_00408ca0(lVar11,lVar1,lVar7,lVar8,local_58);
            if ((lVar8 == 0) || (lVar7 == 0)) goto LAB_00411680;
            local_50 = 10;
            lVar7 = FUN_00408ca0(lVar11,lVar1,lVar7,0,local_58);
            if (lVar7 == 0) goto LAB_00411680;
          }
          if (local_f8 != 0) {
            local_50 = 0x10;
            lVar7 = FUN_00408ca0(lVar11,lVar1,local_f8,lVar7,local_58);
            goto LAB_0041157e;
          }
        }
        else {
          iVar5 = FUN_00410af0(param_3,param_1,param_4);
          *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + (long)iVar5;
          if (local_100 != 0) {
            if (bVar25 != 0x12) {
              if (*(char *)(local_100 + 0x30) == '\x11') {
                local_118 = 0xffffffffffffffff;
                uVar18 = 0;
                local_f8 = 0;
LAB_00411718:
                FUN_004064d0(lVar8,FUN_00406670,*(undefined *)(lVar8 + 0x28));
                goto LAB_00411729;
              }
              local_118 = 0xffffffffffffffff;
              uVar18 = 0;
              local_f8 = 0;
LAB_00411475:
              local_50 = 0xb;
              goto LAB_0041147a;
            }
            local_118 = 0xffffffffffffffff;
            uVar18 = 1;
LAB_0041193f:
            lVar8 = FUN_00408d80(lVar8,lVar9);
            if (lVar8 != 0) {
LAB_00411962:
              if (*(char *)(lVar8 + 0x30) == '\x11') goto LAB_00411718;
LAB_00411729:
              if (local_118 != 0xffffffffffffffff) {
                local_50 = 10;
                goto LAB_0041147a;
              }
              goto LAB_00411475;
            }
            goto LAB_00411680;
          }
LAB_004117b0:
          if (*param_6 != 0) {
            return 0;
          }
LAB_004117bf:
          local_100 = 0;
          lVar7 = local_100;
        }
LAB_00411597:
        local_100 = lVar7;
        bVar25 = *(byte *)(param_3 + 1);
        uVar15 = (ulong)bVar25;
      } while (((param_4 & 0x1000000) == 0) || ((bVar25 != 0xb && (bVar25 != 0x17))));
      if (local_100 != 0) {
        FUN_004064d0(local_100,FUN_004076e0,0);
      }
      goto LAB_004115d5;
    }
    break;
  case '\x18':
    goto switchD_0041129b_caseD_18;
  case ' ':
  case '!':
    bVar24 = cVar4 == '!';
    uVar19 = *(undefined *)(param_1 + 0x78);
    pcVar14 = "_";
    pcVar16 = "alnum";
    goto LAB_00411ab4;
  case '\"':
  case '#':
    bVar24 = cVar4 == '#';
    uVar19 = *(undefined *)(param_1 + 0x78);
    pcVar14 = "";
    pcVar16 = "space";
LAB_00411ab4:
    local_100 = FUN_0040c090(lVar9,uVar19,pcVar16,pcVar14,bVar24,param_6);
    if ((*param_6 != 0) && (local_100 == 0)) {
      return 0;
    }
    goto LAB_00411300;
  case '$':
    *param_6 = 5;
    return 0;
  }
  *param_6 = 0xc;
LAB_0041132a:
  return 0;
code_r0x00411e95:
  uVar21 = 0;
  goto LAB_00411a1e;
}


long FUN_00412750(undefined param_1,long *param_2,long param_3,undefined param_4,long param_5,
                 int *param_6)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined local_48 [8];
  undefined local_40;
  
  lVar1 = *param_2;
  lVar3 = FUN_00411260();
  if ((*param_6 == 0) || (lVar3 != 0)) {
    while (bVar2 = *(byte *)(param_3 + 8), (bVar2 & 0xf7) != 2) {
      while( true ) {
        if ((bVar2 == 9) && (param_5 != 0)) {
          return lVar3;
        }
        lVar4 = FUN_00411260(param_1,param_2,param_3,param_4,param_5,param_6);
        if ((*param_6 != 0) && (lVar4 == 0)) {
          if (lVar3 != 0) {
            FUN_004064d0(lVar3,FUN_004076e0,0);
          }
          goto LAB_00412860;
        }
        if ((lVar3 == 0) || (lVar4 == 0)) break;
        local_40 = 0x10;
        lVar5 = FUN_00408ca0(lVar1 + 0x70,lVar1 + 0x80,lVar3,lVar4,local_48);
        if (lVar5 == 0) {
          FUN_004064d0(lVar4,FUN_004076e0,0);
          FUN_004064d0(lVar3,FUN_004076e0,0);
          *param_6 = 0xc;
          return 0;
        }
        bVar2 = *(byte *)(param_3 + 8);
        lVar3 = lVar5;
        if ((bVar2 & 0xf7) == 2) {
          return lVar5;
        }
      }
      if (lVar3 == 0) {
        lVar3 = lVar4;
      }
    }
  }
  else {
LAB_00412860:
    lVar3 = 0;
  }
  return lVar3;
}


long FUN_00412890(long param_1,long *param_2,long param_3,ulong param_4,long param_5,int *param_6)

{
  long lVar1;
  undefined uVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined local_48 [8];
  undefined local_40;
  
  lVar1 = *param_2;
  uVar2 = *(undefined *)(lVar1 + 0xa8);
  lVar5 = FUN_00412750();
  if ((*param_6 == 0) || (lVar5 != 0)) {
    do {
      if (*(char *)(param_3 + 8) != '\n') {
        return lVar5;
      }
      iVar4 = FUN_00410af0(param_3,param_1,param_4 | 0x800000);
      *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + (long)iVar4;
      if (((*(byte *)(param_3 + 8) & 0xf7) == 2) ||
         ((*(byte *)(param_3 + 8) == 9 && (param_5 != 0)))) {
        lVar6 = 0;
      }
      else {
        uVar3 = *(ulong *)(lVar1 + 0xa8);
        *(undefined *)(lVar1 + 0xa8) = uVar2;
        lVar6 = FUN_00412750(param_1,param_2,param_3,param_4,param_5,param_6);
        if ((*param_6 != 0) && (lVar6 == 0)) {
          if (lVar5 != 0) {
            FUN_004064d0(lVar5,FUN_004076e0,0);
          }
          goto LAB_004128de;
        }
        *(ulong *)(lVar1 + 0xa8) = *(ulong *)(lVar1 + 0xa8) | uVar3;
      }
      local_40 = 10;
      lVar5 = FUN_00408ca0(lVar1 + 0x70,lVar1 + 0x80,lVar5,lVar6,local_48);
    } while (lVar5 != 0);
    *param_6 = 0xc;
  }
  else {
LAB_004128de:
    lVar5 = 0;
  }
  return lVar5;
}


int FUN_004129f0(long *param_1,long param_2,ulong param_3,ulong param_4)

{
  undefined (*pauVar1) [16];
  undefined *puVar2;
  ulong uVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  wint_t wVar8;
  long *plVar9;
  long *plVar10;
  size_t sVar11;
  byte *pbVar12;
  long lVar13;
  long *plVar14;
  void *pvVar15;
  void *pvVar16;
  void *pvVar17;
  void *pvVar18;
  long lVar19;
  long **__ptr;
  ulong uVar20;
  long lVar21;
  uint uVar22;
  ulong uVar23;
  long lVar24;
  undefined *puVar25;
  byte *pbVar26;
  byte bVar27;
  size_t __size;
  long lVar28;
  bool bVar29;
  bool bVar30;
  byte bVar31;
  ulong local_128;
  int local_10c;
  int local_108 [4];
  undefined local_f8 [8];
  undefined local_f0;
  undefined uStack_ef;
  void *local_e8 [2];
  long local_d8;
  long local_d0 [4];
  long local_b0;
  ulong local_a8;
  ulong local_a0;
  ulong local_98;
  long local_90;
  ulong local_88;
  ulong local_80;
  ulong local_78;
  ulong local_70;
  ulong local_60;
  undefined local_50;
  byte local_4f;
  byte local_4e;
  char local_4d;
  int local_48;
  
  bVar31 = 0;
  *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) & 0x90;
  local_10c = 0;
  __ptr = (long **)*param_1;
  param_1[3] = param_4;
  param_1[2] = 0;
  param_1[6] = 0;
  if ((ulong)param_1[1] < 0xe8) {
    __ptr = (long **)realloc(__ptr,0xe8);
    if (__ptr == (long **)0x0) {
      return 0xc;
    }
    param_1[1] = 0xe8;
    *param_1 = (long)__ptr;
  }
  param_1[2] = 0xe8;
  *__ptr = (long *)0x0;
  __ptr[0x1c] = (long *)0x0;
  puVar25 = (undefined *)((ulong)(__ptr + 1) & 0xfffffffffffffff8);
  for (uVar20 = (ulong)(((int)__ptr - (int)(undefined *)((ulong)(__ptr + 1) & 0xfffffffffffffff8))
                        + 0xe8U >> 3); uVar20 != 0; uVar20 = uVar20 - 1) {
    *puVar25 = 0;
    puVar25 = puVar25 + (ulong)bVar31 * -2 + 1;
  }
  *(undefined *)(__ptr + 0x10) = 0xf;
  if (param_3 < 0x555555555555555) {
    plVar14 = (long *)(param_3 + 1);
    __ptr[1] = plVar14;
    plVar9 = (long *)malloc((long)plVar14 * 0x10);
    *__ptr = plVar9;
    if (param_3 == 0) {
      plVar9 = (long *)0x0;
      uVar20 = 1;
    }
    else {
      uVar20 = 1;
      do {
        uVar20 = uVar20 * 2;
      } while (uVar20 <= param_3);
      plVar9 = (long *)(uVar20 - 1);
    }
    plVar10 = (long *)calloc(0x18,uVar20);
    __ptr[0x11] = plVar9;
    __ptr[8] = plVar10;
    sVar11 = __ctype_get_mb_cur_max();
    *(int *)((long)__ptr + 0xb4) = (int)sVar11;
    pbVar12 = (byte *)nl_langinfo(0xe);
    if ((((*pbVar12 & 0xdf) == 0x55) && ((pbVar12[1] & 0xdf) == 0x54)) &&
       ((pbVar12[2] & 0xdf) == 0x46)) {
      bVar29 = pbVar12[3] < 0x2d;
      bVar30 = pbVar12[3] == 0x2d;
      lVar21 = 2;
      pbVar12 = pbVar12 + (ulong)bVar30 + 3;
      pbVar26 = &DAT_0041654e;
      do {
        if (lVar21 == 0) break;
        lVar21 = lVar21 + -1;
        bVar29 = *pbVar12 < *pbVar26;
        bVar30 = *pbVar12 == *pbVar26;
        pbVar12 = pbVar12 + (ulong)bVar31 * -2 + 1;
        pbVar26 = pbVar26 + (ulong)bVar31 * -2 + 1;
      } while (bVar30);
      if ((!bVar29 && !bVar30) == bVar29) {
        *(byte *)(__ptr + 0x16) = *(byte *)(__ptr + 0x16) | 4;
      }
    }
    bVar5 = *(byte *)(__ptr + 0x16);
    *(byte *)(__ptr + 0x16) = bVar5 & 0xf7;
    if (1 < *(int *)((long)__ptr + 0xb4)) {
      if ((bVar5 & 4) == 0) {
        plVar9 = (long *)calloc(0x20,1);
        __ptr[0xf] = plVar9;
        if (plVar9 == (long *)0x0) goto LAB_004133d0;
        lVar21 = 0;
        do {
          uVar22 = (int)lVar21 * 8;
          iVar6 = 0;
          do {
            while( true ) {
              wVar8 = btowc(uVar22);
              if (wVar8 != 0xffffffff) break;
              if ((uVar22 & 0xffffff80) == 0) {
LAB_00413414:
                *(byte *)(__ptr + 0x16) = *(byte *)(__ptr + 0x16) | 8;
              }
LAB_0041341b:
              iVar6 = iVar6 + 1;
              uVar22 = uVar22 + 1;
              if (iVar6 == 0x40) goto LAB_00413470;
            }
            *(ulong *)((long)__ptr[0xf] + lVar21) =
                 *(ulong *)((long)__ptr[0xf] + lVar21) | 1L << ((byte)iVar6 & 0x3f);
            if ((uVar22 & 0xffffff80) != 0) goto LAB_0041341b;
            if (wVar8 != uVar22) goto LAB_00413414;
            iVar6 = iVar6 + 1;
            uVar22 = uVar22 + 1;
          } while (iVar6 != 0x40);
LAB_00413470:
          lVar21 = lVar21 + 8;
        } while (lVar21 != 0x20);
      }
      else {
        __ptr[0xf] = (long *)&DAT_00416f20;
      }
    }
    if ((*__ptr != (long *)0x0) && (__ptr[8] != (long *)0x0)) {
      local_60 = param_1[5];
      local_10c = 0;
      plVar9 = local_d0;
      for (lVar21 = 0x12; lVar21 != 0; lVar21 = lVar21 + -1) {
        *plVar9 = 0;
        plVar9 = plVar9 + (ulong)bVar31 * -2 + 1;
      }
      iVar6 = *(int *)((long)__ptr + 0xb4);
      uVar20 = (ulong)((uint)param_4 & 0x400000);
      local_50 = (param_4 & 0x400000) != 0;
      uVar23 = local_60 | uVar20;
      local_4d = uVar23 != 0;
      local_4e = *(byte *)(__ptr + 0x16) >> 3 & 1;
      local_4f = *(byte *)(__ptr + 0x16) >> 2 & 1;
      local_d8 = param_2;
      local_88 = param_3;
      local_80 = param_3;
      local_78 = param_3;
      local_70 = param_3;
      local_48 = iVar6;
      if (param_3 == 0) {
LAB_00412c32:
        if (local_4d != '\0') {
          param_2 = local_d0[0];
        }
        local_d0[0] = param_2;
        if (uVar20 == 0) {
          if (iVar6 < 2) {
            uVar3 = local_98;
            local_a0 = local_98;
            if (uVar23 != 0) {
              if ((long)local_80 <= (long)local_98) {
                local_98 = local_80;
              }
              uVar3 = local_a8;
              local_a0 = local_a8;
              if ((long)local_a8 < (long)local_98) {
                do {
                  *(undefined *)(param_2 + local_a8) =
                       *(undefined *)(local_60 + *(byte *)(local_d8 + local_a8 + local_b0));
                  local_a8 = local_a8 + 1;
                  uVar3 = local_98;
                  local_a0 = local_98;
                } while (local_98 != local_a8);
              }
            }
          }
          else {
            FUN_00406d00(&local_d8);
            uVar3 = local_a8;
          }
        }
        else {
          if (1 < iVar6) {
            do {
              iVar6 = FUN_00406eb0(&local_d8);
              if (iVar6 != 0) break;
              uVar3 = local_a8;
              if (((long)param_3 <= (long)local_a0) ||
                 ((long)((long)*(int *)((long)__ptr + 0xb4) + local_a8) < (long)local_98))
              goto LAB_00412d39;
              iVar6 = FUN_00406910(&local_d8,local_98 * 2);
            } while (iVar6 == 0);
            goto LAB_00413148;
          }
          FUN_00406c80(&local_d8);
          uVar3 = local_a8;
        }
LAB_00412d39:
        local_a8 = uVar3;
        local_10c = 0;
        lVar21 = *param_1;
        param_1[6] = 0;
        *(ulong *)(lVar21 + 0xd8) = param_4;
        iVar6 = FUN_00410af0(local_108,&local_d8,param_4 | 0x800000);
        local_90 = local_90 + iVar6;
        lVar13 = FUN_00412890(&local_d8,param_1,local_108,param_4,0,&local_10c);
        if (local_10c == 0) {
          local_f0 = 2;
          plVar14 = (long *)FUN_00408ca0(lVar21 + 0x70,lVar21 + 0x80,0,0,local_f8);
          plVar9 = plVar14;
          if (lVar13 != 0) {
LAB_00412dd7:
            local_f0 = 0x10;
            plVar9 = (long *)FUN_00408ca0(lVar21 + 0x70,lVar21 + 0x80,lVar13,plVar14,local_f8);
          }
          lVar21 = *param_1;
          if (plVar14 == (long *)0x0 || plVar9 == (long *)0x0) {
            local_10c = 0xc;
            __ptr[0xd] = (long *)0x0;
          }
          else {
            lVar13 = *(long *)(lVar21 + 8);
            __ptr[0xd] = plVar9;
            sVar11 = lVar13 * 8;
            __size = lVar13 * 0x18;
            pvVar15 = malloc(sVar11);
            *(void **)(lVar21 + 0x18) = pvVar15;
            pvVar16 = malloc(sVar11);
            *(void **)(lVar21 + 0x20) = pvVar16;
            pvVar17 = malloc(__size);
            *(void **)(lVar21 + 0x28) = pvVar17;
            pvVar18 = malloc(__size);
            *(void **)(lVar21 + 0x30) = pvVar18;
            if ((((pvVar15 != (void *)0x0) && (pvVar16 != (void *)0x0)) && (pvVar17 != (void *)0x0))
               && (pvVar18 != (void *)0x0)) {
              lVar13 = param_1[6];
              pvVar15 = malloc(lVar13 * 8);
              *(void **)(lVar21 + 0xe0) = pvVar15;
              if (pvVar15 != (void *)0x0) {
                lVar24 = 0;
                if (lVar13 != 0) {
                  do {
                    *(long *)((long)pvVar15 + lVar24 * 8) = lVar24;
                    lVar24 = lVar24 + 1;
                  } while (lVar24 != lVar13);
                }
                FUN_00408510(*(undefined *)(lVar21 + 0x68),FUN_004081d0,lVar21);
                if (param_1[6] == 0) {
                  plVar14 = *(long **)(lVar21 + 0xe0);
LAB_00412f0f:
                  free(plVar14);
                  *(undefined *)(lVar21 + 0xe0) = 0;
                }
                else {
                  plVar14 = *(long **)(lVar21 + 0xe0);
                  lVar13 = *plVar14;
                  if (lVar13 == 0) {
                    do {
                      lVar13 = lVar13 + 1;
                      if (lVar13 == param_1[6]) goto LAB_00412f0f;
                    } while (plVar14[lVar13] == lVar13);
                  }
                }
              }
              iVar6 = FUN_004064d0(*(undefined *)(lVar21 + 0x68),FUN_00409050,param_1);
              if ((iVar6 == 0) &&
                 (iVar6 = FUN_004064d0(*(undefined *)(lVar21 + 0x68),FUN_0040b580,lVar21),
                 iVar6 == 0)) {
                FUN_00408510(*(undefined *)(lVar21 + 0x68),FUN_00408260,lVar21);
                iVar6 = FUN_00408510(*(undefined *)(lVar21 + 0x68),FUN_00407d60,lVar21);
                if (iVar6 == 0) {
                  bVar31 = 0;
                  lVar13 = 0;
LAB_00412f88:
                  if (*(long *)(lVar21 + 0x10) == lVar13) goto LAB_00412fac;
LAB_00412f8e:
                  while( true ) {
                    lVar24 = lVar13 * 0x18;
                    if (*(long *)(*(long *)(lVar21 + 0x30) + 8 + lVar24) != 0)
                    goto code_r0x00412fa2;
                    iVar6 = FUN_00408740(local_f8,lVar21,lVar13);
                    if (iVar6 != 0) goto LAB_00413148;
                    lVar13 = lVar13 + 1;
                    if (*(long *)(*(long *)(lVar21 + 0x30) + 8 + lVar24) != 0) break;
                    bVar31 = 1;
                    free(local_e8[0]);
                    if (*(long *)(lVar21 + 0x10) == lVar13) goto LAB_00412fb5;
                  }
                  goto LAB_00412f88;
                }
              }
              goto LAB_00413148;
            }
            local_10c = 0xc;
          }
        }
        else {
          if (lVar13 != 0) {
            local_f0 = 2;
            plVar14 = (long *)FUN_00408ca0(lVar21 + 0x70,lVar21 + 0x80,0,0,local_f8);
            goto LAB_00412dd7;
          }
          __ptr[0xd] = (long *)0x0;
          lVar21 = *param_1;
        }
      }
      else {
        iVar6 = FUN_00406910(&local_d8,plVar14);
        if (iVar6 == 0) {
          iVar6 = *(int *)((long)__ptr + 0xb4);
          goto LAB_00412c32;
        }
LAB_00413148:
        lVar21 = *param_1;
        local_10c = iVar6;
      }
LAB_00413358:
      puVar25 = *(undefined **)(lVar21 + 0x70);
      while (puVar25 != (undefined *)0x0) {
        puVar2 = (undefined *)*puVar25;
        free(puVar25);
        puVar25 = puVar2;
      }
      *(undefined *)(lVar21 + 0x70) = 0;
      *(undefined *)(lVar21 + 0x80) = 0xf;
      *(undefined *)(lVar21 + 0x68) = 0;
      free(*(void **)(lVar21 + 0x20));
      *(undefined *)(lVar21 + 0x20) = 0;
      FUN_00407c60(&local_d8);
      goto LAB_004133ae;
    }
  }
LAB_004133d0:
  local_10c = 0xc;
  goto LAB_004133ae;
code_r0x00412fa2:
  lVar13 = lVar13 + 1;
  if (*(long *)(lVar21 + 0x10) != lVar13) goto LAB_00412f8e;
LAB_00412fac:
  if (bVar31 != 0) {
LAB_00412fb5:
    bVar31 = 0;
    lVar13 = 0;
    goto LAB_00412f8e;
  }
  if (((((*(byte *)(param_1 + 7) & 0x10) != 0) || (param_1[6] == 0)) ||
      ((*(byte *)(lVar21 + 0xb0) & 1) == 0)) && (*(long *)(lVar21 + 0x98) == 0)) goto LAB_00413166;
  pvVar15 = malloc(lVar13 * 0x18);
  *(void **)(lVar21 + 0x38) = pvVar15;
  if (pvVar15 == (void *)0x0) {
    local_10c = 0xc;
    lVar21 = *param_1;
    goto LAB_00413358;
  }
  uVar23 = 0;
  if (lVar13 == 0) goto LAB_00413166;
  while( true ) {
    pauVar1 = (undefined (*) [16])((long)pvVar15 + uVar23 * 0x18);
    *pauVar1 = (undefined)0x0;
    *(undefined *)pauVar1[1] = 0;
    if (*(ulong *)(lVar21 + 0x10) <= uVar23 + 1) break;
    pvVar15 = *(void **)(lVar21 + 0x38);
    uVar23 = uVar23 + 1;
  }
  if (*(ulong *)(lVar21 + 0x10) != 0) {
    local_128 = 0;
    lVar13 = *(long *)(lVar21 + 0x30);
    do {
      lVar28 = 0;
      lVar19 = local_128 * 0x18 + lVar13;
      lVar24 = *(long *)(lVar19 + 0x10);
      if (0 < *(long *)(lVar19 + 8)) {
        do {
          cVar4 = FUN_004069b0(*(long *)(lVar21 + 0x38) + *(long *)(lVar24 + lVar28 * 8) * 0x18,
                               local_128);
          if (cVar4 == '\0') {
            iVar6 = 0xc;
            goto LAB_00413148;
          }
          lVar13 = *(long *)(lVar21 + 0x30);
          lVar28 = lVar28 + 1;
        } while (lVar28 < *(long *)(lVar13 + 8 + local_128 * 0x18));
      }
      local_128 = local_128 + 1;
    } while (local_128 <= *(ulong *)(lVar21 + 0x10) && *(ulong *)(lVar21 + 0x10) != local_128);
  }
LAB_00413166:
  local_10c = 0;
  bVar5 = *(byte *)(__ptr + 0x16) >> 2 & uVar20 == 0;
  if ((bVar5 != 0) && (param_1[5] == 0)) {
    if (__ptr[2] == (long *)0x0) {
LAB_00413763:
      bVar27 = 0;
    }
    else {
      plVar14 = *__ptr;
      bVar27 = 0;
      plVar10 = (long *)0x0;
      plVar9 = plVar14;
      do {
        switch(*(char *)(plVar9 + 1)) {
        default:
                    /* WARNING: Subroutine does not return */
          abort();
        case '\x01':
          if (*(char *)plVar9 < '\0') {
            bVar31 = bVar5;
          }
          break;
        case '\x02':
        case '\x04':
        case '\b':
        case '\t':
        case '\n':
        case '\v':
          break;
        case '\x03':
          if ((*(long *)(*plVar9 + 0x10) != 0) || (*(long *)(*plVar9 + 0x18) != 0))
          goto switchD_004134d1_caseD_6;
          break;
        case '\x05':
          bVar27 = bVar5;
          break;
        case '\x06':
          goto switchD_004134d1_caseD_6;
        case '\f':
          uVar22 = *(uint *)plVar9;
          if (uVar22 != 0x20) {
            if (uVar22 < 0x21) {
              if (uVar22 != 0x10) goto switchD_004134d1_caseD_6;
            }
            else if ((uVar22 != 0x40) && (uVar22 != 0x80)) goto switchD_004134d1_caseD_6;
          }
        }
        plVar10 = (long *)((long)plVar10 + 1);
        plVar9 = plVar9 + 2;
      } while (plVar10 != __ptr[2]);
      if ((bVar31 | bVar27) == 0) goto LAB_00413763;
      plVar9 = plVar14 + (long)plVar10 * 2;
      do {
        if (*(char *)(plVar14 + 1) == '\x01') {
          if (*(char *)plVar14 < '\0') {
            *(byte *)((long)plVar14 + 10) = *(byte *)((long)plVar14 + 10) & 0xdf;
          }
        }
        else if (*(char *)(plVar14 + 1) == '\x05') {
          *(char *)(plVar14 + 1) = '\a';
        }
        plVar14 = plVar14 + 2;
      } while (plVar9 != plVar14);
    }
    *(undefined *)((long)__ptr + 0xb4) = 1;
    *(byte *)(__ptr + 0x16) =
         (0 < (long)__ptr[0x13] | bVar27) * '\x02' | *(byte *)(__ptr + 0x16) & 0xf9;
  }
switchD_004134d1_caseD_6:
  plVar14 = *(long **)(__ptr[0xd][3] + 0x38);
  __ptr[0x12] = plVar14;
  iVar7 = FUN_004090d0(local_f8,__ptr[6] + (long)plVar14 * 3);
  iVar6 = iVar7;
  local_108[0] = iVar7;
  if (iVar7 == 0) {
    if ((0 < (long)__ptr[0x13]) && (lVar21 = CONCAT71(uStack_ef,local_f0), 0 < lVar21)) {
      lVar13 = 0;
LAB_004131f5:
      do {
        lVar24 = *(long *)((long)local_e8[0] + lVar13 * 8);
        plVar14 = *__ptr + lVar24 * 2;
        if (*(char *)(plVar14 + 1) == '\x04') {
          lVar19 = 0;
          do {
            plVar9 = *__ptr + *(long *)((long)local_e8[0] + lVar19 * 8) * 2;
            if ((*(char *)(plVar9 + 1) == '\t') && (*plVar9 == *plVar14)) {
              lVar24 = *(long *)__ptr[5][lVar24 * 3 + 2];
              lVar19 = FUN_00408030(lVar21,local_e8,lVar24);
              if (lVar19 == 0) {
                iVar6 = FUN_00408570(local_f8,__ptr[6] + lVar24 * 3);
                if (iVar6 != 0) goto LAB_004132cf;
                lVar21 = CONCAT71(uStack_ef,local_f0);
                lVar13 = 1;
                if (lVar21 < 2) goto LAB_00413290;
                goto LAB_004131f5;
              }
              break;
            }
            lVar19 = lVar19 + 1;
          } while (lVar21 != lVar19);
        }
        lVar13 = lVar13 + 1;
      } while (lVar13 < lVar21);
    }
LAB_00413290:
    plVar14 = (long *)FUN_004092e0(local_108,__ptr,local_f8,0);
    __ptr[9] = plVar14;
    iVar6 = local_108[0];
    if (plVar14 != (long *)0x0) {
      if (*(char *)(plVar14 + 0xd) < '\0') {
        plVar14 = (long *)FUN_004092e0(local_108,__ptr,local_f8,1);
        __ptr[10] = plVar14;
        plVar14 = (long *)FUN_004092e0(local_108,__ptr,local_f8,2);
        __ptr[0xb] = plVar14;
        plVar14 = (long *)FUN_004092e0(local_108,__ptr,local_f8,6);
        __ptr[0xc] = plVar14;
        iVar6 = local_108[0];
        if (((__ptr[10] == (long *)0x0) || (__ptr[0xb] == (long *)0x0)) || (plVar14 == (long *)0x0))
        goto LAB_004132cf;
      }
      else {
        __ptr[0xc] = plVar14;
        __ptr[0xb] = plVar14;
        __ptr[10] = plVar14;
      }
      free(local_e8[0]);
      iVar6 = iVar7;
    }
  }
LAB_004132cf:
  lVar21 = *param_1;
  puVar25 = *(undefined **)(lVar21 + 0x70);
  local_10c = iVar6;
  while (puVar25 != (undefined *)0x0) {
    puVar2 = (undefined *)*puVar25;
    free(puVar25);
    puVar25 = puVar2;
  }
  *(undefined *)(lVar21 + 0x70) = 0;
  *(undefined *)(lVar21 + 0x80) = 0xf;
  *(undefined *)(lVar21 + 0x68) = 0;
  free(*(void **)(lVar21 + 0x20));
  *(undefined *)(lVar21 + 0x20) = 0;
  FUN_00407c60(&local_d8);
  if (local_10c == 0) {
    return 0;
  }
LAB_004133ae:
  FUN_0040b610(__ptr);
  *param_1 = 0;
  param_1[1] = 0;
  return local_10c;
}


undefined FUN_004137a0(undefined param_1,undefined param_2,long param_3)

{
  int iVar1;
  undefined uVar2;
  
  *(byte *)(param_3 + 0x38) =
       *(byte *)(param_3 + 0x38) & 0xef | (byte)(((uint)(DAT_0061d690 >> 0x19) & 1) << 4) | 0x80;
  iVar1 = FUN_004129f0(param_3,param_1,param_2);
  if (iVar1 != 0) {
    uVar2 = dcgettext(0,"Success" + *(long *)(&DAT_00416f40 + (long)iVar1 * 8),5);
    return uVar2;
  }
  return 0;
}


undefined FUN_00413810(undefined param_1)

{
  undefined uVar1;
  
  uVar1 = DAT_0061d690;
  DAT_0061d690 = param_1;
  return uVar1;
}


undefined FUN_00413820(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  
  puVar1 = (undefined *)param_1[4];
  lVar2 = *param_1;
  *puVar1 = 0;
  puVar1[0x1f] = 0;
  puVar6 = (undefined *)((ulong)(puVar1 + 1) & 0xfffffffffffffff8);
  for (uVar5 = (ulong)(((int)puVar1 - (int)(undefined *)((ulong)(puVar1 + 1) & 0xfffffffffffffff8))
                       + 0x100U >> 3); uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  FUN_0040c2d0(param_1,*(long *)(lVar2 + 0x48) + 0x10,*(long *)(lVar2 + 0x48) + 0x18,puVar1);
  lVar4 = *(long *)(lVar2 + 0x50);
  if (*(long *)(lVar2 + 0x48) != lVar4) {
    FUN_0040c2d0(param_1,lVar4 + 0x10,lVar4 + 0x18,puVar1);
    lVar4 = *(long *)(lVar2 + 0x48);
  }
  lVar3 = *(long *)(lVar2 + 0x58);
  if (lVar3 != lVar4) {
    FUN_0040c2d0(param_1,lVar3 + 0x10,lVar3 + 0x18,puVar1);
    lVar4 = *(long *)(lVar2 + 0x48);
  }
  lVar2 = *(long *)(lVar2 + 0x60);
  if (lVar2 != lVar4) {
    FUN_0040c2d0(param_1,lVar2 + 0x10,lVar2 + 0x18,puVar1);
  }
  *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) | 8;
  return 0;
}


long FUN_004138f0(long param_1,undefined param_2,long param_3,long param_4,long param_5,
                 undefined param_6,ulong *param_7,char param_8)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  long *__ptr;
  void *pvVar6;
  void *pvVar7;
  size_t __size;
  long lVar8;
  long lVar9;
  char cVar10;
  ulong uVar11;
  ulong uVar12;
  
  lVar8 = param_5 + param_4;
  if ((param_4 < 0) || (param_3 < param_4)) {
    return -1;
  }
  lVar9 = param_3;
  if (((param_3 < lVar8) || ((-1 < param_5 && (lVar8 < param_4)))) ||
     ((-1 < lVar8 && ((lVar9 = lVar8, -1 < param_5 || (lVar8 < param_4)))))) {
    bVar3 = *(byte *)(param_1 + 0x38);
    bVar4 = bVar3 >> 5 & 3;
    if ((param_4 < lVar9) && ((*(long *)(param_1 + 0x20) != 0 && ((bVar3 & 8) == 0)))) {
      FUN_00413820(param_1);
      bVar3 = *(byte *)(param_1 + 0x38);
    }
  }
  else {
    bVar3 = *(byte *)(param_1 + 0x38);
    lVar9 = 0;
    bVar4 = bVar3 >> 5 & 3;
  }
  if (((bVar3 & 0x10) == 0) && (param_7 != (ulong *)0x0)) {
    if (((bVar3 & 6) == 4) && (uVar12 = *param_7, uVar12 <= *(ulong *)(param_1 + 0x30))) {
      if ((long)uVar12 < 1) goto LAB_00413b50;
    }
    else {
      uVar12 = *(ulong *)(param_1 + 0x30) + 1;
    }
    __size = uVar12 << 4;
  }
  else {
LAB_00413b50:
    __size = 0x10;
    uVar12 = 1;
    param_7 = (ulong *)0x0;
  }
  __ptr = (long *)malloc(__size);
  if (__ptr == (long *)0x0) {
    return -2;
  }
  iVar5 = FUN_0040e940(param_1,param_2,param_3,param_4,lVar9,param_6,uVar12,__ptr,bVar4);
  if (iVar5 == 0) {
    if (param_7 != (ulong *)0x0) {
      uVar1 = uVar12 + 1;
      bVar3 = *(byte *)(param_1 + 0x38) >> 1;
      bVar4 = bVar3 & 3;
      if ((bVar3 & 3) == 0) {
        pvVar6 = malloc(uVar1 * 8);
        param_7[1] = (ulong)pvVar6;
        if (pvVar6 != (void *)0x0) {
          pvVar7 = malloc(uVar1 * 8);
          param_7[2] = (ulong)pvVar7;
          if (pvVar7 != (void *)0x0) {
            *param_7 = uVar1;
            cVar10 = '\x01';
            goto LAB_00413a77;
          }
          free(pvVar6);
        }
LAB_00413ce2:
        cVar10 = '\0';
      }
      else {
        if (bVar4 == 1) {
          cVar10 = '\x01';
          if (*param_7 < uVar1) {
            pvVar6 = realloc((void *)param_7[1],uVar1 * 8);
            if (pvVar6 == (void *)0x0) goto LAB_00413ce2;
            pvVar7 = realloc((void *)param_7[2],uVar1 * 8);
            cVar10 = '\x01';
            if (pvVar7 == (void *)0x0) {
              free(pvVar6);
              cVar10 = '\0';
              goto LAB_00413aed;
            }
            param_7[1] = (ulong)pvVar6;
            param_7[2] = (ulong)pvVar7;
            *param_7 = uVar1;
          }
        }
        else {
          if (bVar4 != 2) {
                    /* WARNING: Subroutine does not return */
            __assert_fail("regs_allocated == REGS_FIXED","lib/regexec.c",0x1f8,"re_copy_regs");
          }
          if (*param_7 <= uVar12 && uVar12 != *param_7) {
                    /* WARNING: Subroutine does not return */
            __assert_fail("regs->num_regs >= nregs","lib/regexec.c",0x1fa,"re_copy_regs");
          }
          cVar10 = '\x02';
        }
LAB_00413a77:
        if ((long)uVar12 < 1) {
          uVar12 = 0;
        }
        else {
          uVar1 = param_7[1];
          uVar2 = param_7[2];
          lVar8 = 0;
          do {
            *(undefined *)(uVar1 + lVar8) = *(undefined *)((long)__ptr + lVar8 * 2);
            *(undefined *)(uVar2 + lVar8) = *(undefined *)((long)__ptr + lVar8 * 2 + 8);
            lVar8 = lVar8 + 8;
          } while (lVar8 != uVar12 * 8);
        }
        if (uVar12 <= *param_7 && *param_7 != uVar12) {
          uVar1 = param_7[2];
          uVar2 = param_7[1];
          do {
            uVar11 = uVar12 + 1;
            *(undefined *)(uVar1 + uVar12 * 8) = 0xffffffffffffffff;
            *(undefined *)(uVar2 + uVar12 * 8) = 0xffffffffffffffff;
            uVar12 = uVar11;
          } while (uVar11 <= *param_7 && *param_7 != uVar11);
        }
      }
LAB_00413aed:
      *(byte *)(param_1 + 0x38) = *(byte *)(param_1 + 0x38) & 0xf9 | cVar10 * '\x02';
      if ((cVar10 * '\x02' & 6U) == 0) goto LAB_00413a10;
    }
    lVar8 = *__ptr;
    if (param_8 != '\0') {
      if (param_4 != lVar8) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("pmatch[0].rm_so == start","lib/regexec.c",0x1bd,"re_search_stub");
      }
      lVar8 = __ptr[1] - lVar8;
    }
  }
  else {
    lVar8 = -1;
    if (iVar5 == 1) goto LAB_00413a17;
LAB_00413a10:
    lVar8 = -2;
  }
LAB_00413a17:
  free(__ptr);
  return lVar8;
}


undefined
FUN_00413d50(undefined param_1,void *param_2,size_t param_3,void *param_4,size_t param_5,
            undefined param_6,undefined param_7,undefined param_8,undefined param_9,
            undefined param_10)

{
  undefined uVar1;
  void *__dest;
  
  if ((((char)((byte)(param_5 >> 0x38) | (byte)((ulong)param_9 >> 0x38)) < '\0') ||
      ((long)param_3 < 0)) || (SCARRY8(param_3,param_5))) {
LAB_00413e60:
    uVar1 = 0xfffffffffffffffe;
  }
  else {
    if (param_5 == 0) {
      __dest = (void *)0x0;
      param_4 = param_2;
    }
    else {
      __dest = (void *)0x0;
      if (param_3 != 0) {
        __dest = malloc(param_3 + param_5);
        if (__dest == (void *)0x0) goto LAB_00413e60;
        memcpy(__dest,param_2,param_3);
        memcpy((void *)((long)__dest + param_3),param_4,param_5);
        param_4 = __dest;
      }
    }
    uVar1 = FUN_004138f0(param_1,param_4,param_3 + param_5,param_6,param_7,param_9,param_8,param_10)
    ;
    free(__dest);
  }
  return uVar1;
}


int FUN_00413e80(undefined *param_1,char *param_2,uint param_3)

{
  int iVar1;
  void *pvVar2;
  size_t sVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  
  *param_1 = 0;
  uVar6 = (-(uint)((param_3 & 1) == 0) & 0xfd4fca) + 0x3b2fc;
  param_1[1] = 0;
  param_1[2] = 0;
  pvVar2 = malloc(0x100);
  param_1[4] = pvVar2;
  if (pvVar2 == (void *)0x0) {
    return 0xc;
  }
  uVar4 = (param_3 & 2) << 0x15;
  uVar5 = uVar4 | uVar6;
  bVar7 = (param_3 & 4) != 0;
  if (bVar7) {
    uVar5 = uVar4 | uVar6 & 0xffffffbf | 0x100;
  }
  param_1[5] = 0;
  *(byte *)(param_1 + 7) =
       (byte)((param_3 >> 3 & 1) << 4) | *(byte *)(param_1 + 7) & 0x6f | bVar7 << 7;
  sVar3 = strlen(param_2);
  iVar1 = FUN_004129f0(param_1,param_2,sVar3,uVar5);
  if (iVar1 == 0x10) {
    iVar1 = 8;
  }
  else if (iVar1 == 0) {
    FUN_00413820(param_1);
    return 0;
  }
  free((void *)param_1[4]);
  param_1[4] = 0;
  return iVar1;
}


ulong FUN_00413f90(uint param_1,undefined param_2,void *param_3,ulong param_4)

{
  ulong uVar1;
  char *__s;
  size_t sVar2;
  
  if (param_1 < 0x11) {
    __s = (char *)dcgettext(0,"Success" + *(long *)(&DAT_00416f40 + (long)(int)param_1 * 8),5);
    sVar2 = strlen(__s);
    uVar1 = sVar2 + 1;
    if (param_4 != 0) {
      sVar2 = uVar1;
      if (param_4 < uVar1) {
        sVar2 = param_4 - 1;
        *(undefined *)((long)param_3 + (param_4 - 1)) = 0;
      }
      memcpy(param_3,__s,sVar2);
    }
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00414010(long *param_1)

{
  if (*param_1 != 0) {
    FUN_0040b610();
  }
  *param_1 = 0;
  param_1[1] = 0;
  free((void *)param_1[4]);
  param_1[4] = 0;
  free((void *)param_1[5]);
  param_1[5] = 0;
  return;
}


bool FUN_00414060(long param_1,char *param_2,undefined param_3,undefined *param_4,uint param_5)

{
  byte bVar1;
  int iVar2;
  size_t sVar3;
  undefined uVar4;
  
  if ((param_5 & 0xfffffff8) != 0) {
    return (bool)2;
  }
  if ((param_5 & 4) == 0) {
    sVar3 = strlen(param_2);
    uVar4 = 0;
    bVar1 = *(byte *)(param_1 + 0x38);
  }
  else {
    uVar4 = *param_4;
    sVar3 = param_4[1];
    bVar1 = *(byte *)(param_1 + 0x38);
  }
  if ((bVar1 & 0x10) != 0) {
    param_4 = (undefined *)0x0;
    param_3 = 0;
  }
  iVar2 = FUN_0040e940(param_1,param_2,sVar3,uVar4,sVar3,sVar3,param_3,param_4,param_5);
  return iVar2 != 0;
}


void FUN_00414100(void)

{
  FUN_004138f0();
  return;
}


void FUN_00414120(void)

{
  FUN_004138f0();
  return;
}


void FUN_00414140(void)

{
  FUN_00413d50();
  return;
}


void FUN_00414160(void)

{
  FUN_00413d50();
  return;
}


void FUN_00414180(long param_1,long *param_2,long param_3,long param_4,long param_5)

{
  if (param_3 != 0) {
    *(byte *)(param_1 + 0x38) = *(byte *)(param_1 + 0x38) & 0xf9 | 2;
    *param_2 = param_3;
    param_2[1] = param_4;
    param_2[2] = param_5;
    return;
  }
  *(byte *)(param_1 + 0x38) = *(byte *)(param_1 + 0x38) & 0xf9;
  *param_2 = 0;
  param_2[2] = 0;
  param_2[1] = 0;
  return;
}


ulong FUN_004141c0(uint *param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  
  lVar2 = __fpending();
  uVar1 = *param_1;
  uVar3 = FUN_00414900(param_1);
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


char * FUN_00414220(char *param_1)

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


void FUN_00414280(char *param_1)

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


uint FUN_004142b0(uint param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  if (2 < param_1) {
    return param_1;
  }
  uVar2 = FUN_00414300();
  piVar3 = __errno_location();
  iVar1 = *piVar3;
  close(param_1);
  *piVar3 = iVar1;
  return uVar2;
}


void FUN_00414300(undefined param_1,uint param_2)

{
  param_2 = param_2 & 0x80000;
  if (param_2 != 0) {
    param_2 = 0x406;
  }
  FUN_00414980(param_1,param_2,3);
  return;
}


bool FUN_00414320(int param_1)

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
    pbVar5 = &DAT_00417170;
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

char * FUN_00414380(void)

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
  if (DAT_0061d678 != (char *)0x0) goto LAB_004143ba;
  pcVar7 = getenv("CHARSETALIASDIR");
  if ((pcVar7 == (char *)0x0) || (*pcVar7 == '\0')) {
    sVar6 = 0x73;
    sVar5 = 0x65;
    __n = 100;
    pcVar7 = 
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib"
    ;
LAB_004144a5:
    __file = (char *)malloc(sVar6);
    if (__file != (char *)0x0) {
      memcpy(__file,pcVar7,__n);
      __file[__n] = '/';
      goto LAB_004144c6;
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
        goto LAB_004144a5;
      }
      sVar6 = __n + 0xe;
    }
    __file = (char *)malloc(sVar6);
    if (__file != (char *)0x0) {
      memcpy(__file,pcVar7,__n);
      sVar5 = __n;
LAB_004144c6:
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
LAB_00414560:
          pbVar8 = (byte *)__stream->_IO_read_ptr;
          if (__stream->_IO_read_end <= pbVar8) goto LAB_004146ec;
          do {
            __stream->_IO_read_ptr = (char *)(pbVar8 + 1);
            uVar4 = (uint)*pbVar8;
            __ptr = pcVar7;
            while( true ) {
              pcVar7 = __ptr;
              if ((uVar4 - 9 < 2) || (uVar4 == 0x20)) goto LAB_00414560;
              if (uVar4 == 0x23) goto LAB_00414751;
              ungetc(uVar4,__stream);
              iVar2 = fscanf(__stream,"%50s %50s",&local_b8,&local_78);
              puVar13 = &local_b8;
              if (iVar2 < 2) goto LAB_004146ff;
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
                FUN_00414900(__stream);
                goto LAB_00414504;
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
LAB_004146ec:
              uVar4 = __uflow(__stream);
              __ptr = pcVar7;
              if (uVar4 == 0xffffffff) goto LAB_004146ff;
            }
          } while( true );
        }
        close(iVar2);
      }
      goto LAB_004144fe;
    }
  }
  DAT_0061d678 = "";
LAB_004143ba:
  cVar1 = *DAT_0061d678;
  pcVar7 = DAT_0061d678;
  do {
    if (cVar1 == '\0') {
LAB_00414414:
      if (*__s1 == '\0') {
        __s1 = "ASCII";
      }
      return __s1;
    }
    iVar2 = strcmp(__s1,pcVar7);
    if ((iVar2 == 0) || ((cVar1 == '*' && (pcVar7[1] == '\0')))) {
      sVar6 = strlen(pcVar7);
      __s1 = pcVar7 + sVar6 + 1;
      goto LAB_00414414;
    }
    sVar6 = strlen(pcVar7);
    sVar5 = strlen(pcVar7 + sVar6 + 1);
    pcVar7 = pcVar7 + sVar6 + 1 + sVar5 + 1;
    cVar1 = *pcVar7;
  } while( true );
LAB_00414751:
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
  if (uVar4 == 0xffffffff) goto LAB_004146ff;
  goto LAB_00414560;
LAB_004146ff:
  FUN_00414900(__stream);
  if (local_d0 == 0) {
LAB_004144fe:
    pcVar7 = "";
  }
  else {
    pcVar7[local_d0] = '\0';
  }
LAB_00414504:
  free(__file);
  DAT_0061d678 = pcVar7;
  goto LAB_004143ba;
}


void FUN_004148f0(undefined param_1)

{
  FUN_00414980(param_1,0,3);
  return;
}


int FUN_00414900(FILE *param_1)

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
      if (_Var4 == -1) goto LAB_00414967;
    }
    iVar1 = FUN_00414ac0(param_1);
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
LAB_00414967:
  iVar1 = fclose(param_1);
  return iVar1;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_00414980(ulong param_1,int param_2,ulong param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  
  if (param_2 != 0x406) {
    iVar1 = fcntl((int)param_1,param_2,param_3);
    return iVar1;
  }
  if (DAT_0061d680 < 0) {
    iVar1 = FUN_00414980(param_1,0,param_3 & 0xffffffff);
    if (iVar1 < 0) {
      return iVar1;
    }
    if (DAT_0061d680 != -1) {
      return iVar1;
    }
  }
  else {
    iVar1 = fcntl((int)param_1,0x406);
    if ((-1 < iVar1) || (piVar4 = __errno_location(), *piVar4 != 0x16)) {
      DAT_0061d680 = 1;
      return iVar1;
    }
    iVar1 = FUN_00414980(param_1 & 0xffffffff,0,param_3 & 0xffffffff);
    if (iVar1 < 0) {
      return iVar1;
    }
    DAT_0061d680 = -1;
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


void FUN_00414ac0(FILE *param_1)

{
  int iVar1;
  
  if (param_1 != (FILE *)0x0) {
    iVar1 = __freading();
    if ((iVar1 != 0) && ((param_1->_flags & 0x100U) != 0)) {
      FUN_004055d0(param_1,0,1);
      fflush(param_1);
      return;
    }
  }
  fflush(param_1);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00414b33) */
/* WARNING: Removing unreachable block (ram,0x00414b38) */

void FUN_00414b00(void)

{
  __DT_INIT();
  return;
}


void FUN_00414b60(void)

{
  return;
}


void FUN_00414b70(undefined param_1)

{
  __cxa_atexit(param_1,0,DAT_0061b268);
  return;
}


undefined FUN_00414b88(undefined param_1,undefined param_2,undefined param_3)

{
  code **ppcVar1;
  
  for (ppcVar1 = (code **)&DAT_0061ae30; *ppcVar1 != (code *)0xffffffffffffffff;
      ppcVar1 = ppcVar1 + -1) {
    (**ppcVar1)();
  }
  return param_3;
}


void __DT_FINI(void)

{
  FUN_004024b1();
  return;
}

