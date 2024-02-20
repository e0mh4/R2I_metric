
#include "decompile_ghidra.h"
#define __int64 long long
#define __int32 int
#define __int16 short
#define __int8 char

void switchD_004038c0caseD_b(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401785(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_0040178a(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_0040178f(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401794(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void switchD_004053facaseD_0(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


byte FUN_004017a0(int param_1,undefined *param_2)

{
  byte **ppbVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  int *piVar7;
  void **__ptr;
  ulong uVar8;
  void *pvVar9;
  void *pvVar10;
  size_t __n;
  long lVar11;
  ulong uVar12;
  void *pvVar13;
  undefined **ppuVar14;
  undefined uVar15;
  long lVar16;
  undefined uVar17;
  byte *pbVar18;
  ulong uVar19;
  ulong uVar20;
  undefined *puVar21;
  byte *pbVar22;
  char *pcVar23;
  uint uVar24;
  char cVar25;
  char cVar26;
  ulong uVar27;
  void **ppvVar28;
  int unaff_R14D;
  byte bVar29;
  byte *unaff_R15;
  bool bVar30;
  bool bVar31;
  byte bVar32;
  ulong local_160;
  byte **local_158;
  int local_150;
  byte local_14b;
  char local_14a;
  byte local_149;
  ulong local_148;
  void *local_140;
  byte *local_138;
  ulong local_130;
  byte *local_128;
  ulong local_120;
  long local_118;
  ulong local_110;
  ulong local_108;
  int local_100;
  void *local_f8;
  long local_f0;
  ulong local_e8;
  ulong local_e0;
  void *local_d8;
  long local_d0;
  stat local_c8;
  
  bVar32 = 0;
  FUN_004036d0(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils",
                 "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale"
                );
  textdomain("coreutils");
  FUN_00407800();
  DAT_0060b2b8 = '\0';
  DAT_0060b2ba = '\0';
  DAT_0060b2b9 = '\n';
  puVar21 = param_2;
  if (((param_1 < 2) || (pcVar23 = (char *)param_2[1], *pcVar23 != '-')) ||
     (9 < (int)pcVar23[1] - 0x30U)) {
    local_14a = '\x01';
    iVar5 = 0;
    local_160 = 10;
  }
  else {
    pbVar6 = (byte *)(pcVar23 + 1);
    do {
      pbVar22 = pbVar6;
      pbVar6 = pbVar22 + 1;
      uVar4 = (uint)(char)*pbVar6;
    } while (uVar4 - 0x30 < 10);
    if (*pbVar6 == 0) {
      local_14a = '\x01';
      iVar5 = 0;
    }
    else {
      bVar30 = false;
      cVar25 = '\n';
      uVar24 = 0;
      cVar26 = '\x01';
      iVar5 = 0;
      pbVar18 = pbVar6;
      do {
        switch(uVar4 - 0x62 & 0xff) {
        case 0:
        case 9:
        case 0xb:
          cVar26 = '\0';
          uVar24 = uVar4;
          break;
        case 1:
          uVar24 = 0;
          cVar26 = '\0';
          break;
        default:
          if (bVar30) {
            DAT_0060b2b9 = cVar25;
          }
          uVar15 = dcgettext(0,"invalid trailing option -- %c",5);
          iVar3 = (int)(char)uVar4;
          goto LAB_0040237a;
        case 10:
          cVar26 = '\x01';
          break;
        case 0xf:
          iVar5 = 2;
          break;
        case 0x14:
          iVar5 = 1;
          break;
        case 0x18:
          bVar30 = true;
          cVar25 = '\0';
        }
        pbVar18 = pbVar18 + 1;
        uVar4 = (uint)*pbVar18;
      } while (*pbVar18 != 0);
      if (bVar30) {
        DAT_0060b2b9 = cVar25;
      }
      *pbVar6 = (byte)uVar24;
      local_14a = cVar26;
      if ((byte)uVar24 != 0) {
        pbVar22[2] = 0;
      }
    }
    puVar21 = param_2 + 1;
    param_1 = param_1 + -1;
    local_160 = FUN_00402990(local_14a);
    *puVar21 = *param_2;
  }
  local_14b = 0;
  uVar4 = 1;
LAB_00401838:
  do {
    iVar3 = FUN_00406e30(param_1,puVar21,"c:n:qvz0123456789",&PTR_s_bytes_004081a0,0);
    if (iVar3 == -1) {
      if ((iVar5 == 1) || ((iVar5 == 0 && (DAT_0060b27c < param_1 + -1)))) {
        DAT_0060b2ba = '\x01';
      }
      if (((local_14a != '\0') || (local_14b == 0)) || (-1 < (long)local_160)) {
        if (DAT_0060b27c < param_1) {
          ppuVar14 = (undefined **)(puVar21 + DAT_0060b27c);
          pbVar6 = *ppuVar14;
          if (pbVar6 == (byte *)0x0) {
            local_149 = 1;
            pbVar6 = unaff_R15;
            goto LAB_00401ecc;
          }
        }
        else {
          ppuVar14 = &PTR_DAT_00408190;
          pbVar6 = &DAT_004098a2;
        }
        local_138 = &DAT_004098a2;
        local_158 = ppuVar14 + 1;
        local_149 = 1;
        local_e0 = (ulong)((uint)local_160 & 0x1fff);
        local_e8 = 0x2000 - local_e0;
        local_120 = local_160 + 0x2000;
        local_f0 = local_120 * 2;
        local_110 = local_160 + local_e8 >> 0xd;
        local_130 = local_110 + 1;
        bVar30 = (local_130 & 1) != 0;
        local_108 = local_130 >> 1;
        bVar31 = local_108 == 0;
        goto LAB_00401c32;
      }
LAB_00402840:
      uVar15 = FUN_00403680(local_160,&local_c8);
      uVar15 = FUN_004052f0(uVar15);
      uVar17 = dcgettext(0,"invalid number of bytes",5);
      local_140 = (void *)error(1,0x4b,"%s: %s",uVar17,uVar15);
      unaff_R14D = local_100;
      bVar2 = local_14b;
LAB_00402576:
      free(local_f8);
      pbVar6 = local_128;
LAB_004024b7:
      if ((local_118 != -1) && (lVar16 = FUN_004029f0(local_150,local_140,0,pbVar6), lVar16 < 0)) {
        bVar2 = 0;
      }
LAB_00401c0d:
      do {
        if ((unaff_R14D != 0) && (iVar5 = close(local_150), iVar5 != 0)) {
          uVar15 = FUN_004050a0(4,pbVar6);
          pcVar23 = "failed to close %s";
          goto LAB_00401c85;
        }
        while( true ) {
          ppbVar1 = local_158 + 1;
          local_149 = local_149 & bVar2;
          pbVar6 = *local_158;
          bVar30 = false;
          bVar31 = pbVar6 == (byte *)0x0;
          local_158 = ppbVar1;
          if (bVar31) break;
LAB_00401c32:
          lVar16 = 2;
          pbVar22 = pbVar6;
          pbVar18 = local_138;
          do {
            if (lVar16 == 0) break;
            lVar16 = lVar16 + -1;
            bVar30 = *pbVar22 < *pbVar18;
            bVar31 = *pbVar22 == *pbVar18;
            pbVar22 = pbVar22 + (ulong)bVar32 * -2 + 1;
            pbVar18 = pbVar18 + (ulong)bVar32 * -2 + 1;
          } while (bVar31);
          unaff_R14D = (int)(char)((!bVar30 && !bVar31) - bVar30);
          if (unaff_R14D == 0) {
            DAT_0060b2b8 = '\x01';
            pbVar6 = (byte *)dcgettext(0,"standard input",5);
            local_150 = 0;
LAB_00401bab:
            if (DAT_0060b2ba != '\0') {
              pcVar23 = "";
              if (DAT_0060b1f0 == '\0') {
                pcVar23 = "\n";
              }
              __printf_chk(1,"%s==> %s <==\n",pcVar23,pbVar6);
              DAT_0060b1f0 = '\0';
            }
            if (local_14b == 0) {
              if (local_14a == '\0') {
                bVar2 = FUN_00402d30(pbVar6,local_150,local_160);
              }
              else {
                bVar2 = FUN_00402bc0();
              }
              goto LAB_00401c0d;
            }
            iVar5 = __fxstat(1,local_150,&local_c8);
            if (iVar5 != 0) {
              uVar15 = FUN_004050a0(4,pbVar6);
              uVar17 = dcgettext(0,"cannot fstat %s",5);
              piVar7 = __errno_location();
              error(0,*piVar7,uVar17,uVar15);
              bVar2 = 0;
              goto LAB_00401c0d;
            }
            if ((DAT_0060b2bb == 0) && ((local_c8.st_mode & 0xd000) == 0x8000)) goto LAB_004022bc;
            local_118 = -1;
            if (local_14a != '\0') goto LAB_00401f0e;
            goto LAB_00401d16;
          }
          local_150 = open((char *)pbVar6,0);
          if (-1 < local_150) goto LAB_00401bab;
          uVar15 = FUN_004050a0(4,pbVar6);
          pcVar23 = "cannot open %s for reading";
LAB_00401c85:
          uVar17 = dcgettext(0,pcVar23,5);
          piVar7 = __errno_location();
          bVar2 = 0;
          error(0,*piVar7,uVar17,uVar15);
        }
LAB_00401ecc:
        if ((DAT_0060b2b8 == '\0') || (iVar5 = close(0), -1 < iVar5)) {
          return local_149 ^ 1;
        }
        piVar7 = __errno_location();
        error(1,*piVar7,&DAT_004098a2);
LAB_004022bc:
        local_118 = FUN_004029f0(local_150,0,1,pbVar6);
        bVar29 = DAT_0060b2bb;
        if (local_118 < 0) {
LAB_00402234:
          bVar2 = 0;
          goto LAB_00401c0d;
        }
        if (local_14a == '\0') {
          if (DAT_0060b2bb != 0) goto LAB_00401d16;
          lVar16 = local_c8.st_blksize;
          if (0x1fffffffffffffff < local_c8.st_blksize - 1U) {
            lVar16 = 0x200;
          }
          if (local_c8.st_size <= lVar16) goto LAB_00401d16;
          uVar12 = local_c8.st_size - local_118;
          if ((long)uVar12 < 0) {
            uVar12 = 0;
          }
          bVar2 = local_14b;
          if ((local_160 < uVar12) &&
             (iVar5 = FUN_00402b10(local_150,uVar12 - local_160), iVar5 != 0)) {
            FUN_00402e00(iVar5,pbVar6);
            bVar2 = bVar29;
          }
        }
        else if (DAT_0060b2bb == 0) {
          lVar16 = local_c8.st_blksize;
          if (0x1fffffffffffffff < local_c8.st_blksize - 1U) {
            lVar16 = 0x200;
          }
          if (local_c8.st_size <= lVar16) goto LAB_00401f0e;
          bVar2 = 1;
          if (local_118 < local_c8.st_size) {
            bVar2 = FUN_00402e80(pbVar6,local_150,local_160,local_118);
          }
          bVar2 = bVar2 & 1;
        }
        else {
LAB_00401f0e:
          local_128 = (byte *)local_118;
          pvVar9 = (void *)FUN_00405910(0x2018);
          *(undefined *)((long)pvVar9 + 0x2008) = 0;
          *(undefined *)((long)pvVar9 + 0x2000) = 0;
          *(undefined *)((long)pvVar9 + 0x2010) = 0;
          pvVar10 = (void *)FUN_00405910(0x2018);
          local_148 = 0;
          local_140 = pvVar9;
          while (__n = FUN_00405310(local_150,pvVar10,0x2000), __n - 1 < 0xfffffffffffffffe) {
            if (local_160 == 0) {
              local_128 = (byte *)((long)local_128 + __n);
              FUN_00402a90(pvVar10,__n);
            }
            else {
              *(size_t *)((long)pvVar10 + 0x2000) = __n;
              *(undefined *)((long)pvVar10 + 0x2008) = 0;
              iVar5 = (int)DAT_0060b2b9;
              *(undefined *)((long)pvVar10 + 0x2010) = 0;
              pvVar13 = pvVar10;
              lVar16 = 0;
              while( true ) {
                lVar11 = FUN_00406f30(pvVar13,iVar5,(long)pvVar10 + (__n - (long)pvVar13));
                if (lVar11 == 0) break;
                *(long *)((long)pvVar10 + 0x2008) = lVar16 + 1;
                pvVar13 = (void *)(lVar11 + 1);
                lVar16 = lVar16 + 1;
              }
              local_148 = local_148 + lVar16;
              if (__n + *(long *)((long)local_140 + 0x2000) < 0x2000) {
                memcpy((void *)(*(long *)((long)local_140 + 0x2000) + (long)local_140),pvVar10,__n);
                *(long *)((long)local_140 + 0x2000) =
                     *(long *)((long)local_140 + 0x2000) + *(long *)((long)pvVar10 + 0x2000);
                *(long *)((long)local_140 + 0x2008) =
                     *(long *)((long)local_140 + 0x2008) + *(long *)((long)pvVar10 + 0x2008);
              }
              else {
                *(void **)((long)local_140 + 0x2010) = pvVar10;
                local_140 = pvVar10;
                if (local_160 < local_148 - *(long *)((long)pvVar9 + 0x2008)) {
                  local_128 = (byte *)((long)local_128 + *(long *)((long)pvVar9 + 0x2000));
                  if (*(long *)((long)pvVar9 + 0x2000) != 0) {
                    FUN_00402a90(pvVar9);
                  }
                  local_148 = local_148 - *(long *)((long)pvVar9 + 0x2008);
                  pvVar10 = pvVar9;
                  pvVar9 = *(void **)((long)pvVar9 + 0x2010);
                }
                else {
                  pvVar10 = (void *)FUN_00405910(0x2018);
                }
              }
            }
          }
          free(pvVar10);
          if (__n == 0xffffffffffffffff) {
            uVar15 = FUN_004050a0(4,pbVar6);
            uVar17 = dcgettext(0,"error reading %s",5);
            piVar7 = __errno_location();
            bVar2 = 0;
            error(0,*piVar7,uVar17,uVar15);
            goto joined_r0x0040278a;
          }
          if ((*(long *)((long)local_140 + 0x2000) != 0) &&
             (*(char *)((long)local_140 + *(long *)((long)local_140 + 0x2000) + -1) != DAT_0060b2b9)
             ) {
            *(long *)((long)local_140 + 0x2008) = *(long *)((long)local_140 + 0x2008) + 1;
            local_148 = local_148 + 1;
          }
          uVar12 = local_148 - *(long *)((long)pvVar9 + 0x2008);
          pvVar10 = pvVar9;
          while (local_160 < uVar12) {
            local_128 = (byte *)((long)local_128 + *(long *)((long)pvVar10 + 0x2000));
            if (*(long *)((long)pvVar10 + 0x2000) != 0) {
              FUN_00402a90(pvVar10);
            }
            local_148 = local_148 - *(long *)((long)pvVar10 + 0x2008);
            pvVar10 = *(void **)((long)pvVar10 + 0x2010);
            uVar12 = local_148 - *(long *)((long)pvVar10 + 0x2008);
          }
          bVar2 = local_14b;
          if (local_160 < local_148) {
            lVar16 = *(long *)((long)pvVar10 + 0x2000);
            iVar5 = (int)DAT_0060b2b9;
            lVar11 = local_148 - local_160;
            pvVar13 = pvVar10;
            do {
              pvVar13 = (void *)FUN_00406f30(pvVar13,iVar5,(long)pvVar10 + (lVar16 - (long)pvVar13))
              ;
              if (pvVar13 == (void *)0x0) break;
              pvVar13 = (void *)((long)pvVar13 + 1);
              *(long *)((long)pvVar10 + 0x2008) = *(long *)((long)pvVar10 + 0x2008) + 1;
              lVar11 = lVar11 + -1;
            } while (lVar11 != 0);
            lVar16 = (long)pvVar13 - (long)pvVar10;
            local_128 = (byte *)((long)local_128 + lVar16);
            if (lVar16 != 0) {
              FUN_00402a90(pvVar10,lVar16);
            }
          }
          do {
            pvVar10 = *(void **)((long)pvVar9 + 0x2010);
            free(pvVar9);
            pvVar9 = pvVar10;
 INVALID_JUMP; //joined_r0x0040278a:
          } while (pvVar9 != (void *)0x0);
          if ((local_118 != -1) && (lVar16 = FUN_004029f0(local_150,local_128,0,pbVar6), lVar16 < 0)
             ) goto LAB_00402234;
        }
      } while( true );
    }
    if (iVar3 == 0x6e) {
      local_14b = *DAT_0060b460 == '-';
      if ((bool)local_14b) {
        DAT_0060b460 = DAT_0060b460 + 1;
      }
      local_160 = FUN_00402990(1,DAT_0060b460);
      local_14a = '\x01';
      goto LAB_00401838;
    }
    if (iVar3 < 0x6f) {
      if (iVar3 == -0x82) {
        FUN_004030d0(0);
        goto LAB_00402840;
      }
      if (iVar3 != 99) {
        if (iVar3 != -0x83) goto LAB_004018e6;
        FUN_004057d0(stdout,&DAT_0040790d,"GNU coreutils",PTR_DAT_0060b1f8,"David MacKenzie",
                     "Jim Meyering",0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      local_14b = *DAT_0060b460 == '-';
      if ((bool)local_14b) {
        DAT_0060b460 = DAT_0060b460 + 1;
      }
      local_160 = FUN_00402990(0,DAT_0060b460);
      local_14a = '\0';
    }
    else if (iVar3 == 0x76) {
      iVar5 = 1;
    }
    else if (iVar3 < 0x77) {
      if (iVar3 != 0x71) goto LAB_004018e6;
      iVar5 = 2;
    }
    else if (iVar3 == 0x7a) {
      DAT_0060b2b9 = '\0';
    }
    else {
      while (iVar3 != 0x80) {
LAB_004018e6:
        unaff_R14D = iVar3;
        if (iVar3 - 0x30U < 10) {
          uVar15 = dcgettext(0,"invalid trailing option -- %c",5);
LAB_0040237a:
          error(0,0,uVar15,iVar3);
        }
        iVar3 = FUN_004030d0();
      }
      DAT_0060b2bb = (byte)uVar4;
    }
  } while( true );
LAB_00401d16:
  local_140 = (void *)local_118;
  if (local_160 < 0x100001) goto LAB_004024e6;
  local_128 = (byte *)0x0;
  __ptr = (void **)0x0;
  uVar12 = 0;
  uVar27 = 0;
  uVar19 = 1;
  bVar29 = 0;
LAB_00401d58:
  if (uVar12 == 0) {
    uVar12 = 0x10;
    if (local_130 < 0x11) {
      uVar12 = local_130;
    }
  }
  else {
    bVar30 = local_108 < uVar12;
    uVar12 = uVar12 * 2;
    if (bVar30) {
      uVar12 = local_130;
    }
  }
  __ptr = (void **)FUN_00405970(__ptr,uVar12 * 8);
  uVar20 = uVar27;
  while (uVar27 = uVar19, bVar29 != 0) {
    uVar8 = FUN_00403560(local_150,__ptr[uVar20],0x2000);
    if (uVar8 < 0x2000) {
      piVar7 = __errno_location();
      bVar2 = bVar29;
      if (*piVar7 != 0) goto LAB_004026e7;
LAB_00401dd3:
      local_140 = (void *)((long)local_140 + uVar8);
      bVar29 = local_14b;
      if (uVar8 == 0) goto LAB_00401de7;
    }
    else {
      local_140 = (void *)((long)local_140 + uVar8);
      bVar2 = 0;
    }
    FUN_00402a90(__ptr[uVar27],uVar8);
    bVar29 = local_14b;
LAB_00401de7:
    uVar19 = (uVar27 + 1) % local_130;
    if (bVar2 != 0) {
      if (bVar29 == 0) {
        if ((local_110 == uVar27) &&
           (local_140 = (void *)((long)local_140 + (uVar8 - local_e0)), uVar8 - local_e0 != 0)) {
          FUN_00402a90(__ptr[uVar19]);
        }
      }
      else {
        local_140 = (void *)((long)local_140 + local_e8);
        bVar2 = bVar29;
        if (local_e8 < -uVar8 + 0x2000) {
          FUN_00402a90((long)__ptr[uVar27] + uVar8,local_e8);
        }
        else if ((-uVar8 == -0x2000) ||
                (FUN_00402a90((long)__ptr[uVar27] + uVar8), local_e0 != uVar8)) {
          FUN_00402a90(__ptr[uVar19],uVar8 - local_e0);
        }
      }
      goto LAB_0040248f;
    }
    uVar20 = uVar27;
    if (uVar12 == uVar27) goto LAB_00401d58;
  }
  pvVar9 = (void *)FUN_00405910(0x2000);
  local_128 = (byte *)(uVar20 + 1);
  __ptr[uVar20] = pvVar9;
  uVar8 = FUN_00403560(local_150,pvVar9,0x2000);
  bVar2 = 0;
  if ((0x1fff < uVar8) || (piVar7 = __errno_location(), bVar2 = local_14b, *piVar7 == 0)) {
    if (local_110 == uVar20) goto LAB_00401dd3;
    goto LAB_00401de7;
  }
LAB_004026e7:
  uVar15 = FUN_004050a0(4,pbVar6);
  uVar17 = dcgettext(0,"error reading %s",5);
  bVar2 = 0;
  error(0,*piVar7,uVar17,uVar15);
LAB_0040248f:
  for (ppvVar28 = __ptr; ppvVar28 != __ptr + (long)local_128; ppvVar28 = ppvVar28 + 1) {
    free(*ppvVar28);
  }
  free(__ptr);
  goto LAB_004024b7;
LAB_004024e6:
  uVar12 = 0;
  local_f8 = (void *)FUN_00405910(local_f0);
  local_d8 = local_f8;
  local_d0 = (long)local_f8 + local_120;
  lVar16 = local_118;
  bVar29 = local_14b;
  do {
    pvVar9 = (&local_d8)[uVar12];
    uVar19 = FUN_00403560(local_150,pvVar9,local_120);
    uVar4 = (uint)uVar12;
    local_128 = pbVar6;
    if (uVar19 < local_120) {
      piVar7 = __errno_location();
      local_140 = (void *)lVar16;
      if (*piVar7 != 0) {
        uVar15 = FUN_004050a0(4,pbVar6);
        uVar17 = dcgettext(0,"error reading %s",5);
        error(0,*piVar7,uVar17,uVar15);
        bVar2 = 0;
        goto LAB_00402576;
      }
      if (local_160 < uVar19) {
        if (bVar29 == 0) {
          pvVar10 = (&local_d8)[uVar4 ^ 1];
          bVar29 = local_14b;
          if (local_160 != 0) goto LAB_004025ff;
        }
        else {
          uVar19 = uVar19 - local_160;
        }
        lVar16 = uVar19 + lVar16;
        local_140 = (void *)lVar16;
        bVar2 = bVar29;
        if (uVar19 == 0) goto LAB_00402576;
LAB_00402641:
        FUN_00402a90(pvVar9,uVar19);
      }
      else {
        bVar2 = local_14b;
        if (bVar29 != 0) goto LAB_00402576;
        local_140 = (void *)(lVar16 + uVar19);
        pvVar10 = (&local_d8)[uVar4 ^ 1];
        uVar12 = uVar19;
        bVar29 = local_14b;
        if (uVar19 == 0) goto LAB_00402576;
LAB_00402609:
        FUN_00402a90((long)pvVar10 + 0x2000,uVar12);
        lVar16 = (long)local_140;
        if (local_160 < uVar19) {
LAB_00402636:
          uVar19 = uVar19 - local_160;
          lVar16 = (long)local_140 + uVar19;
          if (uVar19 != 0) goto LAB_00402641;
        }
      }
      uVar12 = (ulong)(uVar4 ^ 1);
      local_140 = (void *)lVar16;
      bVar2 = bVar29;
      if (bVar29 != 0) goto LAB_00402576;
    }
    else if (bVar29 == 0) {
      local_140 = (void *)(local_160 + lVar16);
      pvVar10 = (&local_d8)[uVar4 ^ 1];
      if (local_160 != 0) {
LAB_004025ff:
        local_140 = (void *)(local_160 + lVar16);
        uVar12 = local_160;
        goto LAB_00402609;
      }
      if (uVar19 != 0) goto LAB_00402636;
      uVar12 = (ulong)(uVar4 ^ 1);
      lVar16 = (long)local_140;
    }
    else if (local_160 < uVar19) {
      uVar19 = uVar19 - local_160;
      lVar16 = lVar16 + uVar19;
      if (uVar19 != 0) {
        bVar29 = 0;
        goto LAB_00402641;
      }
      uVar12 = (ulong)(uVar4 ^ 1);
    }
    else {
      uVar12 = (ulong)(uVar4 ^ 1);
    }
    bVar29 = 0;
  } while( true );
}


void FUN_004028b0(undefined param_1,undefined param_2,undefined param_3)

{
  undefined unaff_retaddr;
  undefined auStack_8 [8];
  
  (*(code *)PTR___libc_start_main_0060aff0)
            (FUN_004017a0,unaff_retaddr,&stack0x00000008,FUN_00407790,FUN_004077f0,param_3,auStack_8
            );
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* WARNING: Removing unreachable block (ram,0x004028e8) */
/* WARNING: Removing unreachable block (ram,0x004028f2) */

void FUN_004028db(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00402929) */

void FUN_004028fa(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00402966) */

void FUN_00402931(void)

{
  if (DAT_0060b2a8 != '\0') {
    return;
  }
  FUN_004028db();
  DAT_0060b2a8 = 1;
  return;
}


/* WARNING: Removing unreachable block (ram,0x00402929) */

void thunk_FUN_004028fa(void)

{
  return;
}


void FUN_00402990(char param_1,undefined param_2)

{
  undefined uVar1;
  
  if (param_1 == '\0') {
    uVar1 = dcgettext(0,"invalid number of bytes",5);
  }
  else {
    uVar1 = dcgettext(0,"invalid number of lines",5);
  }
  FUN_00405c70(param_2,0,0xffffffffffffffff,"bkKmMGTPEZY0",uVar1,0);
  return;
}


__off_t FUN_004029f0(int param_1,__off_t param_2,int param_3,undefined param_4)

{
  __off_t _Var1;
  undefined uVar2;
  undefined uVar3;
  undefined uVar4;
  int *piVar5;
  char *pcVar6;
  undefined auStack_48 [40];
  
  _Var1 = lseek(param_1,param_2,param_3);
  if (-1 < _Var1) {
    return _Var1;
  }
  uVar2 = FUN_004035e0(param_2,auStack_48);
  uVar3 = FUN_00405170(0,3,param_4);
  pcVar6 = "%s: cannot seek to offset %s";
  if (param_3 != 0) {
    pcVar6 = "%s: cannot seek to relative offset %s";
  }
  uVar4 = dcgettext(0,pcVar6,5);
  piVar5 = __errno_location();
  error(0,*piVar5,uVar4,uVar3,uVar2);
  return _Var1;
}


size_t FUN_00402a90(void *param_1,ulong param_2)

{
  size_t sVar1;
  uint *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined auStack_2030 [8192];
  undefined uStack_30;
  undefined uStack_28;
  
  sVar1 = fwrite_unlocked(param_1,1,param_2,stdout);
  if (param_2 <= sVar1) {
    return sVar1;
  }
  clearerr_unlocked(stdout);
  uStack_28 = FUN_004050a0(4,"standard output");
  uStack_30 = dcgettext(0,"error writing %s",5);
  puVar2 = (uint *)__errno_location();
  uVar6 = 1;
  uVar5 = (ulong)*puVar2;
  error(1,uVar5,uStack_30,uStack_28);
  if (uVar5 != 0) {
    do {
      uVar4 = 0x2000;
      if (uVar5 < 0x2001) {
        uVar4 = uVar5;
      }
      lVar3 = FUN_00405310(uVar6 & 0xffffffff,auStack_2030,uVar4);
      if (lVar3 == -1) {
        return 1;
      }
      uVar5 = uVar5 - lVar3;
      if ((lVar3 == 0) && (uVar5 != 0)) {
        return 2;
      }
      if (lVar3 != 0) {
        FUN_00402a90(auStack_2030,lVar3);
      }
    } while (uVar5 != 0);
    return 0;
  }
  return 0;
}


undefined FUN_00402b10(undefined param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  undefined auStack_2018 [8192];
  
  if (param_2 == 0) {
    return 0;
  }
  do {
    uVar2 = 0x2000;
    if (param_2 < 0x2001) {
      uVar2 = param_2;
    }
    lVar1 = FUN_00405310(param_1,auStack_2018,uVar2);
    if (lVar1 == -1) {
      return 1;
    }
    param_2 = param_2 - lVar1;
    if ((lVar1 == 0) && (param_2 != 0)) {
      return 2;
    }
    if (lVar1 != 0) {
      FUN_00402a90(auStack_2018,lVar1);
    }
  } while (param_2 != 0);
  return 0;
}


undefined FUN_00402bc0(undefined param_1,int param_2,long param_3)

{
  int iVar1;
  long lVar2;
  __off_t _Var3;
  undefined uVar4;
  undefined uVar5;
  int *piVar6;
  long lVar7;
  stat sStack_20b8;
  char local_2028 [8200];
  long lVar8;
  
  if (param_3 == 0) {
    return 1;
  }
  while( true ) {
    lVar2 = FUN_00405310(param_2,local_2028,0x2000);
    if (lVar2 == -1) {
      uVar4 = FUN_004050a0(4,param_1);
      uVar5 = dcgettext(0,"error reading %s",5);
      piVar6 = __errno_location();
      error(0,*piVar6,uVar5,uVar4);
      return 0;
    }
    if (lVar2 == 0) break;
    lVar8 = 0;
    do {
      lVar7 = lVar8 + 1;
      if ((local_2028[lVar8] == DAT_0060b2b9) && (param_3 = param_3 + -1, param_3 == 0)) {
        _Var3 = lseek(param_2,lVar7 - lVar2,1);
        if (_Var3 < 0) {
          iVar1 = __fxstat(1,param_2,&sStack_20b8);
          if ((iVar1 != 0) || ((sStack_20b8.st_mode & 0xf000) == 0x8000)) {
            FUN_004029f0(param_2,lVar7 - lVar2,1,param_1);
          }
        }
        FUN_00402a90(local_2028,lVar7);
        return 1;
      }
      lVar8 = lVar7;
    } while (lVar2 != lVar7);
    FUN_00402a90(local_2028,lVar2);
  }
  return 1;
}


undefined FUN_00402d30(undefined param_1,undefined param_2,ulong param_3)

{
  long lVar1;
  undefined uVar2;
  undefined uVar3;
  int *piVar4;
  ulong uVar5;
  undefined auStack_2028 [8192];
  
  if (param_3 == 0) {
    return 1;
  }
  uVar5 = 0x2000;
  do {
    if (param_3 < uVar5) {
      uVar5 = param_3;
    }
    lVar1 = FUN_00405310(param_2,auStack_2028,uVar5);
    if (lVar1 == -1) {
      uVar2 = FUN_004050a0(4,param_1);
      uVar3 = dcgettext(0,"error reading %s",5);
      piVar4 = __errno_location();
      error(0,*piVar4,uVar3,uVar2);
      return 0;
    }
    if (lVar1 == 0) {
      return 1;
    }
    FUN_00402a90(auStack_2028,lVar1);
    param_3 = param_3 - lVar1;
  } while (param_3 != 0);
  return 1;
}


void FUN_00402e00(int param_1,undefined param_2)

{
  undefined uVar1;
  undefined uVar2;
  int *piVar3;
  char *pcVar4;
  
  if (param_1 == 1) {
    uVar1 = FUN_004050a0(4);
    pcVar4 = "error reading %s";
  }
  else {
    if (param_1 != 2) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar1 = FUN_00405170(0,3,param_2);
    pcVar4 = "%s: file has shrunk too much";
  }
  uVar2 = dcgettext(0,pcVar4,5);
  piVar3 = __errno_location();
  error(0,*piVar3,uVar2,uVar1);
  return;
}


ulong FUN_00402e80(undefined param_1,undefined param_2,long param_3,size_t param_4,long param_5)

{
  size_t sVar1;
  size_t __n;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  undefined uVar5;
  undefined uVar6;
  int *piVar7;
  long lVar8;
  size_t sVar9;
  int iVar10;
  undefined local_2040;
  undefined local_2038 [8200];
  
  lVar8 = (long)(param_5 - param_4) % 0x2000;
  lVar3 = 0x2000;
  if (lVar8 != 0) {
    lVar3 = lVar8;
  }
  sVar9 = param_5 - lVar3;
  local_2040 = param_4;
  lVar8 = FUN_004029f0(param_2,sVar9,0,param_1);
  if (lVar8 < 0) {
LAB_00403000:
    uVar4 = 0;
  }
  else {
    __n = FUN_00405310(param_2,local_2038,lVar3);
    if (__n == 0xffffffffffffffff) {
LAB_0040306d:
      uVar5 = FUN_004050a0(4,param_1);
      uVar6 = dcgettext(0,"error reading %s",5);
      piVar7 = __errno_location();
      error(0,*piVar7,uVar6,uVar5);
      uVar4 = 0;
    }
    else {
      lVar3 = param_3;
      if ((param_3 != 0) && (__n != 0)) {
        lVar3 = param_3 - (ulong)(local_2038[__n - 1] != DAT_0060b2b9);
      }
      do {
        if (__n != 0) {
          iVar10 = (int)DAT_0060b2b9;
          do {
            if (param_3 == 0) {
              __n = __n - 1;
              sVar1 = local_2040;
            }
            else {
              pvVar2 = memrchr(local_2038,iVar10,__n);
              if (pvVar2 == (void *)0x0) break;
              __n = (long)pvVar2 - (long)local_2038;
              sVar1 = local_2040;
            }
            local_2040 = sVar1;
            if (lVar3 == 0) {
              if ((long)sVar1 < (long)sVar9) {
                local_2040 = __n;
                lVar3 = FUN_004029f0(param_2,sVar1,0,param_1);
                if (lVar3 < 0) goto LAB_00403000;
                iVar10 = FUN_00402b10(param_2,sVar9 - sVar1);
                __n = local_2040;
                if (iVar10 != 0) {
                  FUN_00402e00(iVar10,param_1);
                  return 0;
                }
              }
              lVar3 = __n + 1;
              if (lVar3 != 0) {
                FUN_00402a90(local_2038,lVar3);
              }
              uVar4 = FUN_004029f0(param_2,sVar9 + lVar3,0,param_1);
              return ~uVar4 >> 0x3f;
            }
            lVar3 = lVar3 + -1;
          } while (__n != 0);
        }
        if (sVar9 == local_2040) break;
        sVar9 = sVar9 - 0x2000;
        lVar8 = FUN_004029f0(param_2,sVar9,0,param_1);
        if (lVar8 < 0) goto LAB_00403000;
        __n = FUN_00405310(param_2,local_2038,0x2000);
        if (__n == 0xffffffffffffffff) goto LAB_0040306d;
      } while (__n != 0);
      uVar4 = 1;
    }
  }
  return uVar4;
}


void FUN_004030d0(int param_1)

{
  FILE *pFVar1;
  int iVar2;
  undefined uVar3;
  undefined uVar4;
  char *pcVar5;
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
  undefined local_28;
  undefined local_20;
  byte **ppbVar7;
  
  uVar4 = DAT_0060b2d0;
  bVar13 = 0;
  if (param_1 != 0) {
    uVar3 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(stderr,1,uVar3,uVar4);
    goto LAB_0040310f;
  }
  uVar3 = dcgettext(0,"Usage: %s [OPTION]... [FILE]...\n",5);
  __printf_chk(1,uVar3,uVar4);
  uVar4 = dcgettext(0,
                    "Print the first %d lines of each FILE to standard output.\nWith more than one FILE, precede each with a header giving the file name.\n"
                    ,5);
  __printf_chk(1,uVar4,10);
  pFVar1 = stdout;
  pcVar5 = (char *)dcgettext(0,"\nWith no FILE, or when FILE is -, read standard input.\n",5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = stdout;
  pcVar5 = (char *)dcgettext(0,
                             "\nMandatory arguments to long options are mandatory for short options too.\n"
                             ,5);
  fputs_unlocked(pcVar5,pFVar1);
  uVar4 = dcgettext(0,
                    "  -c, --bytes=[-]NUM       print the first NUM bytes of each file;\n                             with the leading \'-\', print all but the last\n                             NUM bytes of each file\n  -n, --lines=[-]NUM       print the first NUM lines instead of the first %d;\n                             with the leading \'-\', print all but the last\n                             NUM lines of each file\n"
                    ,5);
  __printf_chk(1,uVar4,10);
  pFVar1 = stdout;
  pcVar5 = (char *)dcgettext(0,
                             "  -q, --quiet, --silent    never print headers giving file names\n  -v, --verbose            always print headers giving file names\n"
                             ,5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = stdout;
  pcVar5 = (char *)dcgettext(0,"  -z, --zero-terminated    line delimiter is NUL, not newline\n",5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = stdout;
  pcVar5 = (char *)dcgettext(0,"      --help     display this help and exit\n",5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = stdout;
  pcVar5 = (char *)dcgettext(0,"      --version  output version information and exit\n",5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = stdout;
  pcVar5 = (char *)dcgettext(0,
                             "\nNUM may have a multiplier suffix:\nb 512, kB 1000, K 1024, MB 1000*1000, M 1024*1024,\nGB 1000*1000*1000, G 1024*1024*1024, and so on for T, P, E, Z, Y.\n"
                             ,5);
  fputs_unlocked(pcVar5,pFVar1);
  local_88 = &DAT_00407912;
  local_80 = "test invocation";
  local_78[0] = (byte *)0x40798c;
  local_78[1] = (byte *)0x407924;
  local_78[2] = (byte *)0x40793a;
  local_78[3] = (byte *)0x407944;
  local_78[4] = (byte *)0x407953;
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
    lVar8 = 5;
    pbVar10 = &DAT_0040790d;
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
    uVar4 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar4,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar5 = setlocale(5,(char *)0x0);
    if (pcVar5 != (char *)0x0) {
      iVar2 = strncmp(pcVar5,"en_",3);
      if (iVar2 != 0) {
        pbVar9 = &DAT_0040790d;
        goto LAB_0040346b;
      }
    }
    pbVar9 = &DAT_0040790d;
    uVar4 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    pcVar5 = " invocation";
    __printf_chk(1,uVar4,"https://www.gnu.org/software/coreutils/",&DAT_0040790d);
  }
  else {
    uVar4 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar4,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar5 = setlocale(5,(char *)0x0);
    if (pcVar5 != (char *)0x0) {
      iVar2 = strncmp(pcVar5,"en_",3);
      if (iVar2 != 0) {
LAB_0040346b:
        uVar4 = dcgettext(0,"Report %s translation bugs to <https://translationproject.org/team/>\n"
                          ,5);
        __printf_chk(1,uVar4,&DAT_0040790d);
      }
    }
    pcVar5 = " invocation";
    uVar4 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    __printf_chk(1,uVar4,"https://www.gnu.org/software/coreutils/",&DAT_0040790d);
    if (pbVar9 != &DAT_0040790d) {
      pcVar5 = "";
    }
  }
  uVar4 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(1,uVar4,pbVar9,pcVar5);
LAB_0040310f:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}


void FUN_004034a0(undefined param_1)

{
  DAT_0060b2c8 = param_1;
  return;
}


void FUN_004034b0(undefined param_1)

{
  DAT_0060b2c0 = param_1;
  return;
}


void FUN_004034c0(void)

{
  int iVar1;
  int *piVar2;
  undefined uVar3;
  undefined uVar4;
  
  iVar1 = FUN_00407040(stdout);
  if (iVar1 != 0) {
    piVar2 = __errno_location();
    if ((DAT_0060b2c0 == '\0') || (*piVar2 != 0x20)) {
      uVar3 = dcgettext(0,"write error",5);
      if (DAT_0060b2c8 == 0) {
        error(0,*piVar2,"%s",uVar3);
      }
      else {
        uVar4 = FUN_00405140();
        error(0,*piVar2,"%s: %s",uVar4,uVar3);
      }
      goto LAB_0040353e;
    }
  }
  iVar1 = FUN_00407040(stderr);
  if (iVar1 == 0) {
    return;
  }
LAB_0040353e:
                    /* WARNING: Subroutine does not return */
  _exit(DAT_0060b200);
}


long FUN_00403560(undefined param_1,long param_2,long param_3)

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
      lVar1 = FUN_00405310(param_1,param_2,param_3);
      if (lVar1 == -1) {
        return lVar3;
      }
      if (lVar1 == 0) {
        piVar2 = __errno_location();
        *piVar2 = 0;
        return lVar3;
      }
      lVar3 = lVar3 + lVar1;
      param_2 = param_2 + lVar1;
      param_3 = param_3 - lVar1;
    } while (param_3 != 0);
  }
  return lVar3;
}


char * FUN_004035e0(ulong param_1,long param_2)

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


char * FUN_00403680(ulong param_1,long param_2)

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


void FUN_004036d0(byte *param_1)

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
        pbVar6 = &DAT_00408338;
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
  DAT_0060b2d0 = param_1;
  program_invocation_name = param_1;
  return;
}


char * FUN_00403770(char *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  byte *pbVar3;
  
  pcVar2 = (char *)dcgettext(0,param_1,5);
  if (param_1 == pcVar2) {
    pbVar3 = (byte *)FUN_00407100();
    if ((*pbVar3 & 0xdf) == 0x55) {
      if (((((pbVar3[1] & 0xdf) != 0x54) || ((pbVar3[2] & 0xdf) != 0x46)) || (pbVar3[3] != 0x2d)) ||
         ((pbVar3[4] != 0x38 || (pbVar3[5] != 0)))) {
LAB_00403848:
        pcVar2 = "\"";
        if (param_2 != 9) {
          pcVar2 = "\'";
        }
        return pcVar2;
      }
      cVar1 = *pcVar2;
      pcVar2 = &DAT_00408349;
      if (cVar1 != '`') {
        pcVar2 = &DAT_0040833e;
      }
    }
    else {
      if (((((*pbVar3 & 0xdf) != 0x47) || ((pbVar3[1] & 0xdf) != 0x42)) || (pbVar3[2] != 0x31)) ||
         (((pbVar3[3] != 0x38 || (pbVar3[4] != 0x30)) ||
          ((pbVar3[5] != 0x33 || ((pbVar3[6] != 0x30 || (pbVar3[7] != 0)))))))) goto LAB_00403848;
      cVar1 = *pcVar2;
      pcVar2 = &DAT_00408345;
      if (cVar1 != '`') {
        pcVar2 = &DAT_00408342;
      }
    }
  }
  return pcVar2;
}


ulong FUN_00403870(undefined *param_1,ulong param_2,char *param_3,ulong param_4,int param_5,
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
LAB_004044c1:
    if (param_2 != 0) {
      bVar3 = false;
      local_5b = false;
      bVar2 = true;
      local_70 = 0;
      goto LAB_004040f6;
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
      goto LAB_004044c1;
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
      param_8 = (char *)FUN_00403770(&DAT_0040834d,param_5);
      param_9 = (char *)FUN_00403770(&DAT_0040988f);
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
LAB_00403908:
  uVar22 = 0;
  bVar5 = local_5b;
LAB_00403918:
  bVar23 = param_4 != uVar22;
  if (param_4 == 0xffffffffffffffff) {
    bVar23 = param_3[uVar22] != '\0';
  }
  bVar26 = bVar6;
  if (!bVar23) goto LAB_00404098;
  bVar20 = (bool)(param_5 != 2 & bVar6);
  __s1 = (byte *)(param_3 + uVar22);
  uVar16 = uVar15;
  bVar4 = bVar3;
  if (bVar20) {
    if (local_a0 == 0) {
LAB_00404010:
      uVar19 = (ulong)*__s1;
      switch(uVar19) {
      case 0:
        goto switchD_00404022_caseD_0;
      default:
        bVar20 = false;
        goto switchD_00403e8e_caseD_1;
      case 7:
        bVar17 = 0x61;
        goto LAB_00403d25;
      case 8:
        bVar17 = 0x62;
        break;
      case 9:
switchD_00404022_caseD_9:
        bVar17 = 0x74;
        break;
      case 10:
switchD_00404022_caseD_a:
        bVar17 = 0x6e;
        break;
      case 0xb:
switchD_00404022_caseD_b:
        bVar17 = 0x76;
        goto LAB_00403d25;
      case 0xc:
switchD_00404022_caseD_c:
        bVar17 = 0x66;
LAB_00403d25:
        if (local_5c) {
          bVar25 = false;
          goto LAB_00403c78;
        }
LAB_00403d30:
        bVar23 = false;
        goto LAB_00403aeb;
      case 0xd:
        bVar20 = false;
switchD_00403a08_caseD_d:
        bVar25 = param_5 == 2;
        uVar19 = 0xd;
        bVar13 = 0x72;
        goto LAB_00403c40;
      case 0x20:
        bVar25 = false;
LAB_0040406a:
        uVar19 = 0x20;
        goto LAB_00404032;
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
switchD_00403a08_caseD_21:
        bVar25 = false;
        goto LAB_00403c4b;
      case 0x23:
      case 0x7e:
        bVar26 = false;
LAB_0040404a:
        if (uVar22 == 0) {
          bVar25 = false;
          bVar23 = bVar20;
          bVar20 = bVar26;
          goto LAB_00403a58;
        }
        bVar23 = false;
        goto LAB_00403a6f;
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
LAB_00404032:
        bVar24 = false;
        bVar23 = bVar20;
        bVar20 = bVar25;
        goto LAB_00403a71;
      case 0x27:
        bVar20 = false;
        goto switchD_00403e8e_caseD_27;
      case 0x3f:
        bVar20 = false;
        goto switchD_00403e8e_caseD_3f;
      case 0x5c:
        bVar20 = false;
        goto switchD_00403a08_caseD_5c;
      case 0x7b:
      case 0x7d:
        bVar20 = false;
        goto switchD_00403e8e_caseD_7b;
      }
      bVar25 = false;
      bVar23 = false;
      goto joined_r0x00403c67;
    }
    if ((param_4 == 0xffffffffffffffff) && (1 < local_a0)) {
      param_4 = strlen(param_3);
    }
    if ((param_4 < uVar22 + local_a0) || (iVar7 = memcmp(__s1,local_78,local_a0), iVar7 != 0))
    goto LAB_00404010;
    if (!local_5c) {
      uVar19 = (ulong)*__s1;
      bVar25 = bVar20;
      switch(uVar19) {
      case 0:
        goto switchD_00403a08_caseD_0;
      default:
        goto switchD_00403e8e_caseD_1;
      case 7:
        bVar17 = 0x61;
        goto LAB_00403d30;
      case 8:
        bVar25 = false;
        bVar23 = false;
        bVar17 = 0x62;
        break;
      case 9:
        goto switchD_00404022_caseD_9;
      case 10:
        goto switchD_00404022_caseD_a;
      case 0xb:
        goto switchD_00404022_caseD_b;
      case 0xc:
        goto switchD_00404022_caseD_c;
      case 0xd:
        goto switchD_00403a08_caseD_d;
      case 0x20:
        goto LAB_0040406a;
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
        goto switchD_00403a08_caseD_21;
      case 0x23:
      case 0x7e:
        bVar26 = bVar20;
        goto LAB_0040404a;
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
        goto LAB_00404032;
      case 0x27:
        goto switchD_00403e8e_caseD_27;
      case 0x3f:
        goto switchD_00403e8e_caseD_3f;
      case 0x5c:
        goto switchD_00403a08_caseD_5c;
      case 0x7b:
      case 0x7d:
        goto switchD_00403e8e_caseD_7b;
      }
      goto LAB_00403ab2;
    }
    goto LAB_00403c8a;
  }
  uVar19 = (ulong)*__s1;
  switch(uVar19) {
  case 0:
    if (bVar6) {
switchD_00404022_caseD_0:
      if (!local_5c) {
        bVar20 = false;
switchD_00403a08_caseD_0:
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
            goto LAB_00403b68;
          }
LAB_00403daa:
          param_1[uVar16] = 0x5c;
          uVar15 = uVar16;
        }
        else if (uVar15 < uVar9) goto LAB_00403daa;
        uVar16 = uVar15 + 1;
        bVar24 = bVar23;
        if (param_5 == 2) {
          bVar17 = 0x30;
          bVar23 = false;
          bVar4 = bVar3;
          goto LAB_00403b68;
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
LAB_00403de9:
        bVar17 = (byte)uVar19;
        bVar23 = false;
        uVar15 = uVar16;
        bVar4 = bVar3;
        if ((bool)(bVar6 ^ 1U | bVar26)) goto LAB_00403b68;
        goto LAB_00403a71;
      }
      bVar26 = param_5 == 2;
      goto LAB_00403c7c;
    }
    if ((param_6 & 1) == 0) {
      bVar25 = param_5 == 2;
      uVar19 = 0;
      bVar23 = false;
      bVar20 = false;
      goto LAB_00403a58;
    }
    uVar22 = uVar22 + 1;
    goto LAB_00403918;
  default:
switchD_00403e8e_caseD_1:
    bVar25 = bVar6;
    if (sVar8 != 1) {
      local_40[0] = (mbstate_t)0x0;
      if (param_4 == 0xffffffffffffffff) {
        param_4 = strlen(param_3);
      }
      uVar21 = 0;
      do {
        uVar1 = uVar22 + uVar21;
        lVar11 = FUN_00406eb0(&local_44,param_3 + uVar1,param_4 - uVar1,local_40);
        if (lVar11 == 0) break;
        if (lVar11 == -1) {
          bVar23 = false;
          goto LAB_0040479a;
        }
        if (lVar11 == -2) {
          if ((param_4 <= uVar1) || (param_3[uVar1] == '\0')) goto LAB_004048d7;
          goto LAB_004048c7;
        }
        if (((param_5 == 2) && (local_5c)) && (lVar11 != 1)) {
          pcVar12 = param_3 + uVar1 + 1;
          do {
            if (((byte)(*pcVar12 + 0xa5U) < 0x22) &&
               ((1L << (*pcVar12 + 0xa5U & 0x3f) & 0x20000002bU) != 0)) {
              param_5 = 2;
              goto LAB_00403c7c;
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
      goto LAB_0040479a;
    }
    ppuVar10 = __ctype_b_loc();
    uVar21 = 1;
    bVar25 = ((*ppuVar10)[uVar19] & 0x4000) == 0;
    bVar23 = !bVar25;
    bVar25 = (bool)(bVar25 & bVar6);
    goto LAB_00403e64;
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
    goto LAB_00403ea2;
  case 10:
    uVar19 = 10;
    bVar13 = 0x6e;
    goto LAB_00403ea2;
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
LAB_00403ea2:
    bVar25 = param_5 == 2;
    bVar20 = (bool)(local_5c & bVar25);
    if (bVar20) {
LAB_00403eba:
      param_5 = 2;
      goto LAB_00403c7c;
    }
    break;
  case 0x20:
    uVar19 = 0x20;
    goto LAB_00403a46;
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
LAB_00403a46:
    bVar25 = param_5 == 2;
    if ((local_5c) && (bVar25)) goto LAB_00403eba;
    goto LAB_00403a58;
  case 0x23:
  case 0x7e:
LAB_00403a3d:
    bVar25 = param_5 == 2;
    if (uVar22 == 0) goto LAB_00403a46;
    goto LAB_00403c4b;
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
    goto switchD_00403e8e_caseD_25;
  case 0x27:
switchD_00403e8e_caseD_27:
    bVar5 = bVar23;
    if (param_5 != 2) {
      bVar25 = false;
      uVar19 = 0x27;
      goto LAB_00403a58;
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
      goto LAB_00403b68;
    }
    goto LAB_00403c7c;
  case 0x3f:
switchD_00403e8e_caseD_3f:
    if (param_5 == 2) {
      if (!local_5c) {
        bVar17 = 0x3f;
        bVar24 = false;
        bVar23 = false;
        goto LAB_00403b68;
      }
      goto LAB_00403c7c;
    }
    if (param_5 != 5) {
      bVar25 = param_5 == 2;
      uVar19 = 0x3f;
      bVar23 = false;
      goto LAB_00403a58;
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
        goto LAB_00403de9;
      }
      goto LAB_00403c8a;
    }
    bVar25 = false;
    uVar19 = 0x3f;
    bVar23 = false;
    goto LAB_00403a58;
  case 0x5c:
    if (param_5 != 2) {
switchD_00403a08_caseD_5c:
      uVar19 = 0x5c;
      bVar17 = 0x5c;
      bVar13 = 0x5c;
      bVar25 = (bool)(bVar6 & local_5c & local_a0 != 0);
      if (!bVar25) break;
      uVar22 = uVar22 + 1;
      bVar23 = false;
      goto LAB_00403b84;
    }
    if (local_5c) goto LAB_00403c7c;
    uVar22 = uVar22 + 1;
    bVar23 = false;
    bVar17 = 0x5c;
    goto LAB_00403b84;
  case 0x7b:
  case 0x7d:
switchD_00403e8e_caseD_7b:
    bVar24 = param_4 != 1;
    if (param_4 == 0xffffffffffffffff) {
      bVar24 = param_3[1] != '\0';
    }
    bVar25 = param_5 == 2;
    if (!bVar24) goto LAB_00403a3d;
    goto LAB_00403c4b;
  }
LAB_00403c40:
  if (!bVar6) {
LAB_00403c4b:
    bVar23 = false;
    goto LAB_00403a58;
  }
  bVar23 = false;
  bVar17 = bVar13;
  goto joined_r0x00403c67;
LAB_00404098:
  if ((uVar15 == 0) && ((bool)(local_5c & param_5 == 2))) {
    param_5 = 2;
LAB_00403c7c:
    if (bVar26) {
      param_5 = 4;
    }
LAB_00403c8a:
    uVar9 = FUN_00403870(param_1,uVar9,param_3,param_4,param_5,param_6 & 0xfffffffd,0,param_8,
                         param_9);
    return uVar9;
  }
  bVar26 = (bool)(param_5 == 2 & (local_5c ^ 1U));
  bVar23 = (bool)(local_5c ^ 1U);
  if ((!bVar26) || (bVar23 = bVar26, !bVar5)) {
LAB_0040496d:
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
    uVar9 = FUN_00403870(param_1,local_70,param_3,param_4,5,param_6,param_7,param_8,param_9);
    return uVar9;
  }
  local_5b = uVar9 == 0 && local_70 != 0;
  param_2 = local_70;
  bVar23 = bVar5;
  if (uVar9 != 0 || local_70 == 0) goto LAB_0040496d;
LAB_004040f6:
  *param_1 = 0x27;
  param_5 = 2;
  uVar15 = 1;
  local_78 = "\'";
  local_a0 = 1;
  local_5c = false;
  uVar9 = param_2;
  goto LAB_00403908;
  while (__s1[uVar21] != 0) {
LAB_004048c7:
    uVar21 = uVar21 + 1;
    if (param_4 <= uVar22 + uVar21) break;
  }
LAB_004048d7:
  bVar23 = false;
LAB_0040479a:
  if (1 < uVar21) {
LAB_0040435e:
    bVar26 = false;
    uVar21 = uVar21 + uVar22;
    uVar16 = uVar22;
    do {
      bVar17 = (byte)uVar19;
      if (bVar25) {
        bVar26 = param_5 == 2;
        if (local_5c) goto LAB_00403c7c;
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
        if (uVar21 <= uVar22) goto LAB_00403afd;
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
        if (uVar21 <= uVar22) goto LAB_00403b84;
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
LAB_00403e64:
  if (bVar25) {
    bVar23 = false;
    bVar25 = bVar6;
    goto LAB_0040435e;
  }
switchD_00403e8e_caseD_25:
  bVar25 = param_5 == 2;
LAB_00403a58:
  bVar17 = (byte)uVar19;
  bVar24 = (bool)((bVar6 ^ 1U | bVar25) ^ 1 | local_5c);
  bVar26 = bVar20;
  if (bVar24) {
LAB_00403a6f:
    bVar24 = false;
    bVar20 = bVar26;
LAB_00403a71:
    bVar17 = (byte)uVar19;
    uVar16 = uVar15;
    bVar4 = bVar3;
    if ((param_7 == 0) || ((*(uint *)(param_7 + (uVar19 >> 5) * 4) >> (bVar17 & 0x1f) & 1) == 0))
    goto LAB_00403b68;
    bVar25 = param_5 == 2;
  }
  else {
LAB_00403b68:
    bVar25 = param_5 == 2;
    uVar15 = uVar16;
    bVar3 = bVar4;
    if (!bVar20) {
      uVar22 = uVar22 + 1;
      bVar3 = (bool)((bVar24 ^ 1U) & bVar4);
LAB_00403b84:
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
      goto LAB_00403afd;
    }
  }
joined_r0x00403c67:
  if (local_5c) {
LAB_00403c78:
    bVar26 = (bool)(bVar6 & bVar25);
    goto LAB_00403c7c;
  }
LAB_00403ab2:
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
LAB_00403aeb:
  if (uVar15 < uVar9) {
    param_1[uVar15] = 0x5c;
  }
  uVar15 = uVar15 + 1;
  uVar22 = uVar22 + 1;
  bVar4 = bVar3;
LAB_00403afd:
  bVar3 = bVar4;
  if (uVar15 < uVar9) {
    param_1[uVar15] = bVar17;
  }
  uVar15 = uVar15 + 1;
  if (!bVar23) {
    bVar2 = false;
  }
  goto LAB_00403918;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00404aa0(int param_1,undefined param_2,undefined param_3,undefined *param_4)

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
  puVar8 = (undefined *)PTR_DAT_0060b258;
  if (DAT_0060b270 <= param_1) {
    if (param_1 == 0x7fffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_00405b60();
    }
    if (PTR_DAT_0060b258 == &DAT_0060b260) {
      puVar8 = (undefined *)FUN_00405970(0);
      uVar6 = PTR_DAT_0060b268._4_4_;
      uVar5 = PTR_DAT_0060b268._0_4_;
      uVar3 = _UNK_0060b264;
      PTR_DAT_0060b258 = (undefined *)puVar8;
      *puVar8 = _DAT_0060b260;
      puVar8[1] = uVar3;
      puVar8[2] = uVar5;
      puVar8[3] = uVar6;
    }
    else {
      puVar8 = (undefined *)FUN_00405970(PTR_DAT_0060b258);
      PTR_DAT_0060b258 = (undefined *)puVar8;
    }
    memset(puVar8 + (long)DAT_0060b270 * 4,0,(long)((param_1 + 1) - DAT_0060b270) << 4);
    DAT_0060b270 = param_1 + 1;
  }
  uVar2 = param_4[1];
  puVar10 = (ulong *)(puVar8 + (long)param_1 * 4);
  uVar4 = *puVar10;
  __ptr = (undefined *)puVar10[1];
  uVar9 = FUN_00403870(__ptr,uVar4,param_2,param_3,*param_4,uVar2 | 1,param_4 + 2,
                       *(undefined *)(param_4 + 10),*(undefined *)(param_4 + 0xc));
  if (uVar4 <= uVar9) {
    uVar9 = uVar9 + 1;
    *puVar10 = uVar9;
    if (__ptr != &DAT_0060b2e0) {
      free(__ptr);
    }
    __ptr = (undefined *)FUN_00405910(uVar9);
    uVar3 = *param_4;
    puVar10[1] = (ulong)__ptr;
    FUN_00403870(__ptr,uVar9,param_2,param_3,uVar3,uVar2 | 1,param_4 + 2,
                 *(undefined *)(param_4 + 10),*(undefined *)(param_4 + 0xc));
  }
  *piVar7 = iVar1;
  return __ptr;
}


void FUN_00404c40(undefined *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_0060b3e0;
  }
  FUN_00405b10(param_1,0x38);
  *piVar2 = iVar1;
  return;
}


undefined FUN_00404c80(undefined *param_1)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = (undefined *)&DAT_0060b3e0;
  }
  return *param_1;
}


void FUN_00404c90(undefined *param_1,undefined param_2)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = (undefined *)&DAT_0060b3e0;
  }
  *param_1 = param_2;
  return;
}


uint FUN_00404ca0(undefined *param_1,byte param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_0060b3e0;
  }
  uVar1 = *(uint *)(param_1 + (ulong)(param_2 >> 5) * 4 + 8);
  uVar2 = uVar1 >> (param_2 & 0x1f);
  *(uint *)(param_1 + (ulong)(param_2 >> 5) * 4 + 8) =
       ((param_3 ^ uVar2) & 1) << (param_2 & 0x1f) ^ uVar1;
  return uVar2 & 1;
}


undefined FUN_00404ce0(undefined *param_1,undefined param_2)

{
  undefined uVar1;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_0060b3e0;
  }
  uVar1 = *(undefined *)(param_1 + 4);
  *(undefined *)(param_1 + 4) = param_2;
  return uVar1;
}


void FUN_00404d00(undefined *param_1,long param_2,long param_3)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = (undefined *)&DAT_0060b3e0;
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


void FUN_00404d30(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                 undefined *param_5)

{
  int iVar1;
  int *piVar2;
  
  if (param_5 == (undefined *)0x0) {
    param_5 = (undefined *)&DAT_0060b3e0;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  FUN_00403870(param_1,param_2,param_3,param_4,*param_5,param_5[1],param_5 + 2,
               *(undefined *)(param_5 + 10),*(undefined *)(param_5 + 0xc));
  *piVar2 = iVar1;
  return;
}


undefined FUN_00404db0(undefined param_1,undefined param_2,long *param_3,undefined *param_4)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined uVar4;
  uint uVar5;
  
  if (param_4 == (undefined *)0x0) {
    param_4 = (undefined *)&DAT_0060b3e0;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  uVar5 = (uint)(param_3 == (long *)0x0) | param_4[1];
  lVar3 = FUN_00403870(0,0,param_1,param_2,*param_4,uVar5,param_4 + 2,*(undefined *)(param_4 + 10),
                       *(undefined *)(param_4 + 0xc));
  uVar4 = FUN_00405910(lVar3 + 1);
  FUN_00403870(uVar4,lVar3 + 1,param_1,param_2,*param_4,uVar5,param_4 + 2,
               *(undefined *)(param_4 + 10),*(undefined *)(param_4 + 0xc));
  *piVar2 = iVar1;
  if (param_3 != (long *)0x0) {
    *param_3 = lVar3;
  }
  return uVar4;
}


void FUN_00404ea0(undefined param_1,undefined param_2,undefined param_3)

{
  FUN_00404db0(param_1,param_2,0,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404eb0(void)

{
  void **ppvVar1;
  void *__ptr;
  undefined *__ptr_00;
  void **ppvVar2;
  
  __ptr_00 = PTR_DAT_0060b258;
  if (1 < DAT_0060b270) {
    ppvVar2 = (void **)(PTR_DAT_0060b258 + 0x18);
    ppvVar1 = (void **)(PTR_DAT_0060b258 + (ulong)(DAT_0060b270 - 2) * 0x10 + 0x28);
    do {
      __ptr = *ppvVar2;
      ppvVar2 = ppvVar2 + 2;
      free(__ptr);
    } while (ppvVar2 != ppvVar1);
  }
  if (*(undefined **)(__ptr_00 + 8) != &DAT_0060b2e0) {
    free(*(undefined **)(__ptr_00 + 8));
    _DAT_0060b260 = 0x100;
    PTR_DAT_0060b268 = &DAT_0060b2e0;
  }
  if (__ptr_00 != &DAT_0060b260) {
    free(__ptr_00);
    PTR_DAT_0060b258 = &DAT_0060b260;
  }
  DAT_0060b270 = 1;
  return;
}


void FUN_00404f50(undefined param_1,undefined param_2)

{
  FUN_00404aa0(param_1,param_2,0xffffffffffffffff,&DAT_0060b3e0);
  return;
}


void FUN_00404f70(void)

{
  FUN_00404aa0();
  return;
}


void FUN_00404f80(undefined param_1)

{
  FUN_00404aa0(0,param_1,0xffffffffffffffff,&DAT_0060b3e0);
  return;
}


void FUN_00404fa0(undefined param_1,undefined param_2)

{
  FUN_00404aa0(0,param_1,param_2,&DAT_0060b3e0);
  return;
}


void FUN_00404fc0(undefined param_1,int param_2,undefined param_3)

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
    FUN_00404aa0(param_1,param_3,0xffffffffffffffff,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00405030(undefined param_1,int param_2,undefined param_3,undefined param_4)

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
    FUN_00404aa0(param_1,param_3,param_4,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_004050a0(undefined param_1,undefined param_2)

{
  FUN_00404fc0(0,param_1,param_2);
  return;
}


void FUN_004050b0(undefined param_1,undefined param_2,undefined param_3)

{
  FUN_00405030(0,param_1,param_2,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004050c0(undefined param_1,undefined param_2,byte param_3)

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
  
  local_18 = DAT_0060b410;
  local_48 = _DAT_0060b3e0;
  uStack_40 = uRam000000000060b3e8;
  local_38 = _DAT_0060b3f0;
  uStack_30 = uRam000000000060b3f8;
  puVar1 = (uint *)((long)&uStack_40 + (ulong)(param_3 >> 5) * 4);
  local_28 = _DAT_0060b400;
  uStack_20 = uRam000000000060b408;
  uVar2 = *puVar1;
  *puVar1 = (~(uVar2 >> (param_3 & 0x1f)) & 1) << (param_3 & 0x1f) ^ uVar2;
  FUN_00404aa0(0,param_1,param_2,&local_48);
  return;
}


void FUN_00405130(undefined param_1,char param_2)

{
  FUN_004050c0(param_1,0xffffffffffffffff,(int)param_2);
  return;
}


void FUN_00405140(undefined param_1)

{
  FUN_004050c0(param_1,0xffffffffffffffff,0x3a);
  return;
}


void FUN_00405160(undefined param_1,undefined param_2)

{
  FUN_004050c0(param_1,param_2,0x3a);
  return;
}


void FUN_00405170(undefined param_1,int param_2,undefined param_3)

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
    FUN_00404aa0(param_1,param_3,0xffffffffffffffff,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004051e0(undefined param_1,long param_2,long param_3,undefined param_4,undefined param_5
                 )

{
  undefined local_48;
  undefined uStack_40;
  undefined local_38;
  undefined uStack_30;
  undefined local_28;
  long lStack_20;
  long local_18;
  
  uStack_40 = uRam000000000060b3e8;
  local_38 = _DAT_0060b3f0;
  uStack_30 = uRam000000000060b3f8;
  local_28 = _DAT_0060b400;
  lStack_20 = uRam000000000060b408;
  local_18 = DAT_0060b410;
  local_48 = CONCAT44((int)((ulong)_DAT_0060b3e0 >> 0x20),10);
  if ((param_2 != 0) && (param_3 != 0)) {
    lStack_20 = param_2;
    local_18 = param_3;
    FUN_00404aa0(param_1,param_4,param_5,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00405250(void)

{
  FUN_004051e0();
  return;
}


void FUN_00405260(undefined param_1,undefined param_2,undefined param_3)

{
  FUN_004051e0(0,param_1,param_2,param_3,0xffffffffffffffff);
  return;
}


void FUN_00405280(undefined param_1,undefined param_2,undefined param_3,undefined param_4)

{
  FUN_004051e0(0,param_1,param_2,param_3,param_4);
  return;
}


void FUN_004052a0(void)

{
  FUN_00404aa0();
  return;
}


void FUN_004052b0(undefined param_1,undefined param_2)

{
  FUN_00404aa0(0,param_1,param_2,&DAT_0060b220);
  return;
}


void FUN_004052d0(undefined param_1,undefined param_2)

{
  FUN_00404aa0(param_1,param_2,0xffffffffffffffff,&DAT_0060b220);
  return;
}


void FUN_004052f0(undefined param_1)

{
  FUN_00404aa0(0,param_1,0xffffffffffffffff,&DAT_0060b220);
  return;
}


ssize_t FUN_00405310(int param_1,void *param_2,ulong param_3)

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
FUN_00405370(FILE *param_1,long param_2,undefined param_3,undefined param_4,undefined *param_5,
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
  uVar1 = dcgettext(0,&DAT_0040908b,5);
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
    goto LAB_004055ec;
  case 5:
    uVar1 = param_5[3];
    uVar4 = param_5[2];
    uVar5 = param_5[1];
    uVar6 = *param_5;
    uVar7 = dcgettext(0,"Written by %s, %s, %s,\n%s, and %s.\n",5);
LAB_004055ec:
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
    goto LAB_00405689;
  case 7:
    uVar1 = param_5[2];
    uVar4 = param_5[5];
    uVar5 = param_5[4];
    uVar6 = param_5[3];
    local_58 = param_5[1];
    uVar7 = *param_5;
    uVar3 = dcgettext(0,"Written by %s, %s, %s,\n%s, %s, %s, and %s.\n",5);
LAB_00405689:
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
    goto LAB_0040546a;
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
LAB_0040546a:
  uVar1 = __fprintf_chk(param_1,1,uVar3,uVar7,local_50,local_58,uVar6,uVar5,uVar4,uVar1,local_48);
  return uVar1;
}


void FUN_00405750(void)

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
  FUN_00405370();
  return;
}


void FUN_00405770(void)

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
  FUN_00405370();
  return;
}


void FUN_004057d0(void)

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
  FUN_00405370();
  return;
}


void FUN_00405890(void)

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


void FUN_00405910(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00405b60();
  }
  return;
}


void FUN_00405930(ulong param_1,ulong param_2)

{
  if ((-1 < SUB168(ZEXT816(param_1) * ZEXT816(param_2),0)) &&
     (SUB168(ZEXT816(param_1) * ZEXT816(param_2) >> 0x40,0) == 0)) {
    FUN_00405910();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00405b60();
}


void thunk_FUN_00405910(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00405b60();
  }
  return;
}


void * FUN_00405970(void *param_1,size_t param_2)

{
  void *pvVar1;
  
  if ((param_2 == 0) && (param_1 != (void *)0x0)) {
    free(param_1);
    return (void *)0x0;
  }
  pvVar1 = realloc(param_1,param_2);
  if ((pvVar1 == (void *)0x0) && (param_2 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00405b60();
  }
  return pvVar1;
}


void FUN_004059b0(undefined param_1,ulong param_2,ulong param_3)

{
  if ((-1 < SUB168(ZEXT816(param_2) * ZEXT816(param_3),0)) &&
     (SUB168(ZEXT816(param_2) * ZEXT816(param_3) >> 0x40,0) == 0)) {
    FUN_00405970();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00405b60();
}


void FUN_004059e0(long param_1,ulong *param_2,ulong param_3)

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
    if ((SUB168(ZEXT816(uVar2) * ZEXT816(param_3),0) < 0) || (uVar3 != 0)) goto LAB_00405a3b;
  }
  else {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x5555555555555554);
    uVar3 = SUB168(auVar1 % ZEXT816(param_3),0);
    if (SUB168(auVar1 / ZEXT816(param_3),0) <= uVar2) {
LAB_00405a3b:
                    /* WARNING: Subroutine does not return */
      FUN_00405b60(param_1,param_2,uVar3);
    }
    uVar2 = (uVar2 >> 1) + 1 + uVar2;
  }
  *param_2 = uVar2;
  FUN_00405970(param_1,uVar2 * param_3);
  return;
}


void FUN_00405a70(long param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (param_1 == 0) {
    if (uVar1 == 0) {
      *param_2 = 0x80;
      FUN_00405970(0,0x80);
      return;
    }
    if ((long)uVar1 < 0) goto LAB_00405aba;
  }
  else {
    if (0x5555555555555553 < uVar1) {
LAB_00405aba:
                    /* WARNING: Subroutine does not return */
      FUN_00405b60();
    }
    uVar1 = (uVar1 >> 1) + 1 + uVar1;
  }
  *param_2 = uVar1;
  FUN_00405970(param_1,uVar1);
  return;
}


void FUN_00405ac0(size_t param_1)

{
  void *__s;
  
  __s = (void *)FUN_00405910();
  memset(__s,0,param_1);
  return;
}


void FUN_00405ae0(size_t param_1,ulong param_2)

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
  FUN_00405b60();
}


void FUN_00405b10(void *param_1,size_t param_2)

{
  void *__dest;
  
  __dest = (void *)FUN_00405910(param_2);
  memcpy(__dest,param_1,param_2);
  return;
}


void FUN_00405b40(char *param_1)

{
  void *__dest;
  size_t sVar1;
  
  sVar1 = strlen(param_1);
  __dest = (void *)FUN_00405910(sVar1 + 1);
  memcpy(__dest,param_1,sVar1 + 1);
  return;
}


void FUN_00405b60(void)

{
  undefined uVar1;
  
  uVar1 = dcgettext(0,"memory exhausted",5);
  error(DAT_0060b200,0,"%s",uVar1);
                    /* WARNING: Subroutine does not return */
  abort();
}


ulong FUN_00405ba0(undefined param_1,undefined param_2,ulong param_3,ulong param_4,
                  undefined param_5,undefined param_6,int param_7)

{
  ulong uVar1;
  int iVar2;
  int *piVar3;
  undefined uVar4;
  ulong local_40 [2];
  
  iVar2 = FUN_00405ca0(param_1,0,param_2,local_40);
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
  uVar4 = FUN_004052f0(param_1);
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


void FUN_00405c70(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                 undefined param_5,undefined param_6)

{
  FUN_00405ba0(param_1,10,param_2,param_3,param_4,param_5,param_6);
  return;
}


ulong FUN_00405ca0(byte *param_1,byte **param_2,uint param_3,ulong *param_4,char *param_5)

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
    if ((param_5 == (char *)0x0) || (bVar12 = *pbVar5, bVar12 == 0)) goto LAB_00405d42;
    pcVar7 = strchr(param_5,(int)(char)bVar12);
    if (pcVar7 == (char *)0x0) goto switchD_00405e2c_caseD_1;
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
        goto LAB_00405e1a;
      }
      if (bVar1 != 0x42) {
                    /* WARNING: Could not recover jumptable at 0x00405e01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar6 = (*(code *)(&PTR_LAB_00409458)[bVar8])();
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
LAB_00405e1a:
  iVar10 = (int)uVar11;
  switch(bVar12 - 0x42 & 0xff) {
  case 0:
    if (uVar6 >> 0x36 == 0) {
      uVar6 = uVar6 << 10;
      break;
    }
    goto LAB_00405e87;
  default:
switchD_00405e2c_caseD_1:
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
    goto LAB_00405f14;
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
    goto joined_r0x00405e4c;
  case 0xb:
  case 0x2b:
    auVar2 = ZEXT816(uVar6) * ZEXT816((ulong)(long)iVar10);
    if (SUB168(auVar2 >> 0x40,0) != 0) goto LAB_00405e87;
    auVar2 = (auVar2 & (undefined)0xffffffffffffffff) * ZEXT816((ulong)(long)iVar10);
joined_r0x00405e4c:
    uVar6 = SUB168(auVar2,0);
    if (SUB168(auVar2 >> 0x40,0) != 0) {
LAB_00405e87:
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
    goto LAB_00405f14;
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
    goto LAB_00405f14;
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
    goto LAB_00405f14;
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
LAB_00405f14:
    uVar14 = (ulong)(uVar13 | uVar9);
    break;
  case 0x20:
    if (uVar6 >> 0x37 != 0) goto LAB_00405e87;
    uVar6 = uVar6 << 9;
    break;
  case 0x21:
    break;
  case 0x35:
    if ((long)uVar6 < 0) goto LAB_00405e87;
    uVar6 = uVar6 * 2;
  }
  *param_2 = pbVar5 + iVar15;
  if (pbVar5[iVar15] != 0) {
    uVar14 = (ulong)((uint)uVar14 | 2);
  }
LAB_00405d42:
  *param_4 = uVar6;
  return uVar14;
}


void FUN_004060e0(long param_1,int *param_2)

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
      if (iVar3 <= iVar8) goto LAB_0040615c;
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
      if (iVar9 <= iVar3) goto LAB_0040615c;
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
LAB_0040615c:
  param_2[0xc] = iVar2;
  param_2[0xb] = iVar1 + (iVar2 - iVar3);
  return;
}


int FUN_004061c0(int param_1,undefined *param_2,char *param_3,char **param_4,undefined *param_5,
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
      if ((iVar5 == 0) && (sVar7 = strlen(__s1_00), sVar7 == sVar15)) goto LAB_004063e0;
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
            if (local_70 == (char *)0x0) goto LAB_00406320;
          }
          else if (local_70 == (char *)0x0) {
            local_70 = (char *)calloc((long)iVar5,1);
            if (local_70 == (char *)0x0) {
              bVar3 = true;
              goto LAB_00406320;
            }
            bVar4 = true;
            local_70[(int)local_44] = '\x01';
          }
          local_70[lVar16] = '\x01';
        }
      }
LAB_00406320:
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
              __fprintf_chk(__stream,1,&DAT_00409889,param_9,*param_4);
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
LAB_004063e0:
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


uint FUN_004067e0(uint param_1,undefined *param_2,char *param_3,long param_4,undefined param_5,
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
LAB_0040682a:
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
          goto LAB_0040692d;
        }
        pbVar8 = *(byte **)(param_7 + 8);
      }
      param_7[10] = 0;
    }
LAB_0040692d:
    param_7[6] = 1;
    cVar2 = *param_3;
LAB_00406938:
    if (cVar2 == ':') {
      uVar3 = 0;
    }
    if (pbVar8 == (byte *)0x0) goto LAB_004068a8;
LAB_0040694c:
    if (*pbVar8 == 0) goto LAB_004068a8;
  }
  else {
    if (param_7[6] == 0) goto LAB_0040682a;
    cVar2 = *param_3;
    pbVar8 = *(byte **)(param_7 + 8);
    if ((cVar2 - 0x2bU & 0xfd) != 0) goto LAB_00406938;
    pcVar4 = param_3 + 1;
    param_3 = param_3 + 1;
    if (*pcVar4 == ':') {
      uVar3 = 0;
    }
    if (pbVar8 != (byte *)0x0) goto LAB_0040694c;
LAB_004068a8:
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
        FUN_004060e0(param_2,param_7);
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
LAB_00406a16:
      if (uVar11 != param_1) {
        *param_7 = uVar11;
      }
      return 0xffffffff;
    }
    lVar6 = 3;
    pbVar8 = (byte *)param_2[(int)uVar11];
    pbVar9 = pbVar8;
    pbVar10 = &DAT_004098a1;
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
          FUN_004060e0(param_2,param_7);
          uVar11 = param_7[0xb];
        }
      }
      param_7[0xc] = param_1;
      *param_7 = param_1;
      goto LAB_00406a16;
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
        puVar15 = &DAT_004098a1;
        goto LAB_00406b75;
      }
      if ((int)param_6 != 0) {
        if (pbVar8[2] == 0) {
          pcVar4 = strchr(param_3,(int)(char)bVar14);
          param_6 = param_6 & 0xffffffff;
          if (pcVar4 != (char *)0x0) goto LAB_00406b20;
        }
        *(byte **)(param_7 + 8) = pbVar8 + 1;
        uVar11 = FUN_004061c0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar3,
                              &DAT_004098a2);
        if (uVar11 != 0xffffffff) {
          return uVar11;
        }
        pbVar8 = (byte *)param_2[(int)*param_7];
      }
    }
LAB_00406b20:
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
  puVar15 = &DAT_004098c0;
LAB_00406b75:
  uVar3 = FUN_004061c0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar3,puVar15);
  return uVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406db0(void)

{
  DAT_0060b420 = DAT_0060b27c;
  _DAT_0060b424 = DAT_0060b278;
  FUN_004067e0();
  DAT_0060b27c = DAT_0060b420;
  DAT_0060b460 = DAT_0060b430;
  _DAT_0060b274 = DAT_0060b428;
  return;
}


void FUN_00406e10(void)

{
  FUN_00406db0();
  return;
}


void FUN_00406e30(void)

{
  FUN_00406db0();
  return;
}


void FUN_00406e50(void)

{
  FUN_004067e0();
  return;
}


void FUN_00406e70(void)

{
  FUN_00406db0();
  return;
}


void FUN_00406e90(void)

{
  FUN_004067e0();
  return;
}


size_t FUN_00406eb0(wchar_t *param_1,byte *param_2,size_t param_3,mbstate_t *param_4)

{
  char cVar1;
  size_t sVar2;
  wchar_t local_1c;
  
  if (param_2 == (byte *)0x0) {
    param_3 = 1;
    param_2 = (byte *)0x4098bf;
  }
  else {
    if (param_3 == 0) {
      return 0xfffffffffffffffe;
    }
    if (param_1 != (wchar_t *)0x0) goto LAB_00406ed4;
  }
  param_1 = &local_1c;
LAB_00406ed4:
  sVar2 = mbrtowc(param_1,(char *)param_2,param_3,param_4);
  if ((0xfffffffffffffffd < sVar2) && (cVar1 = FUN_004070a0(0), cVar1 == '\0')) {
    sVar2 = 1;
    *param_1 = (uint)*param_2;
  }
  return sVar2;
}


ulong * FUN_00406f30(ulong *param_1,char param_2,ulong param_3)

{
  char cVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  
  if (param_3 == 0) {
    return (ulong *)0x0;
  }
  if (((ulong)param_1 & 7) == 0) {
LAB_00406f70:
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
      if (((ulong)param_1 & 7) == 0) goto LAB_00406f70;
      cVar1 = *(char *)param_1;
    }
  }
  return param_1;
}


ulong FUN_00407040(uint *param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  
  lVar2 = __fpending();
  uVar1 = *param_1;
  uVar3 = FUN_00407670(param_1);
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


bool FUN_004070a0(int param_1)

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
    pbVar5 = &DAT_004098c4;
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

char * FUN_00407100(void)

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
  if (DAT_0060b458 != (char *)0x0) goto LAB_0040713a;
  pcVar7 = getenv("CHARSETALIASDIR");
  if ((pcVar7 == (char *)0x0) || (*pcVar7 == '\0')) {
    sVar6 = 0x73;
    sVar5 = 0x65;
    __n = 100;
    pcVar7 = 
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib"
    ;
LAB_00407225:
    __file = (char *)malloc(sVar6);
    if (__file != (char *)0x0) {
      memcpy(__file,pcVar7,__n);
      __file[__n] = '/';
      goto LAB_00407246;
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
        goto LAB_00407225;
      }
      sVar6 = __n + 0xe;
    }
    __file = (char *)malloc(sVar6);
    if (__file != (char *)0x0) {
      memcpy(__file,pcVar7,__n);
      sVar5 = __n;
LAB_00407246:
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
LAB_004072e0:
          pbVar8 = (byte *)__stream->_IO_read_ptr;
          if (__stream->_IO_read_end <= pbVar8) goto LAB_0040746c;
          do {
            __stream->_IO_read_ptr = (char *)(pbVar8 + 1);
            uVar4 = (uint)*pbVar8;
            __ptr = pcVar7;
            while( true ) {
              pcVar7 = __ptr;
              if ((uVar4 - 9 < 2) || (uVar4 == 0x20)) goto LAB_004072e0;
              if (uVar4 == 0x23) goto LAB_004074d1;
              ungetc(uVar4,__stream);
              iVar2 = fscanf(__stream,"%50s %50s",&local_b8,&local_78);
              puVar13 = &local_b8;
              if (iVar2 < 2) goto LAB_0040747f;
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
                FUN_00407670(__stream);
                goto LAB_00407284;
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
LAB_0040746c:
              uVar4 = __uflow(__stream);
              __ptr = pcVar7;
              if (uVar4 == 0xffffffff) goto LAB_0040747f;
            }
          } while( true );
        }
        close(iVar2);
      }
      goto LAB_0040727e;
    }
  }
  DAT_0060b458 = "";
LAB_0040713a:
  cVar1 = *DAT_0060b458;
  pcVar7 = DAT_0060b458;
  do {
    if (cVar1 == '\0') {
LAB_00407194:
      if (*__s1 == '\0') {
        __s1 = "ASCII";
      }
      return __s1;
    }
    iVar2 = strcmp(__s1,pcVar7);
    if ((iVar2 == 0) || ((cVar1 == '*' && (pcVar7[1] == '\0')))) {
      sVar6 = strlen(pcVar7);
      __s1 = pcVar7 + sVar6 + 1;
      goto LAB_00407194;
    }
    sVar6 = strlen(pcVar7);
    sVar5 = strlen(pcVar7 + sVar6 + 1);
    pcVar7 = pcVar7 + sVar6 + 1 + sVar5 + 1;
    cVar1 = *pcVar7;
  } while( true );
LAB_004074d1:
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
  if (uVar4 == 0xffffffff) goto LAB_0040747f;
  goto LAB_004072e0;
LAB_0040747f:
  FUN_00407670(__stream);
  if (local_d0 == 0) {
LAB_0040727e:
    pcVar7 = "";
  }
  else {
    pcVar7[local_d0] = '\0';
  }
LAB_00407284:
  free(__file);
  DAT_0060b458 = pcVar7;
  goto LAB_0040713a;
}


int FUN_00407670(FILE *param_1)

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
      if (_Var4 == -1) goto LAB_004076d7;
    }
    iVar1 = FUN_004076f0(param_1);
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
LAB_004076d7:
  iVar1 = fclose(param_1);
  return iVar1;
}


void FUN_004076f0(FILE *param_1)

{
  int iVar1;
  
  if (param_1 != (FILE *)0x0) {
    iVar1 = __freading();
    if ((iVar1 != 0) && ((param_1->_flags & 0x100U) != 0)) {
      FUN_00407730(param_1,0,1);
      fflush(param_1);
      return;
    }
  }
  fflush(param_1);
  return;
}


ulong FUN_00407730(FILE *param_1,__off_t param_2,int param_3)

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


/* WARNING: Removing unreachable block (ram,0x004077c3) */
/* WARNING: Removing unreachable block (ram,0x004077c8) */

void FUN_00407790(void)

{
  __DT_INIT();
  return;
}


void FUN_004077f0(void)

{
  return;
}


void FUN_00407800(undefined param_1)

{
  __cxa_atexit(param_1,0,DAT_0060b1e8);
  return;
}


undefined FUN_00407818(undefined param_1,undefined param_2,undefined param_3)

{
  code **ppcVar1;
  
  for (ppcVar1 = (code **)&DAT_0060ae30; *ppcVar1 != (code *)0xffffffffffffffff;
      ppcVar1 = ppcVar1 + -1) {
    (**ppcVar1)();
  }
  return param_3;
}


void __DT_FINI(void)

{
  FUN_00402931();
  return;
}

