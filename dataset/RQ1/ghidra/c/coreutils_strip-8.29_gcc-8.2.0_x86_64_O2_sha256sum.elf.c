
void switchD_00406450::caseD_b(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401925(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_0040192a(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_0040192f(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401934(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void switchD_00407f3a::caseD_0(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_00401940(ulong param_1,undefined8 *param_2)

{
  undefined *puVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  __ssize_t _Var7;
  __int32_t **pp_Var8;
  undefined8 uVar9;
  int *piVar10;
  FILE *__stream;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  byte *pbVar16;
  char *pcVar17;
  byte *pbVar18;
  long lVar19;
  long lVar20;
  byte bVar21;
  byte *pbVar22;
  byte *pbVar23;
  bool bVar24;
  bool bVar25;
  byte bVar26;
  char **local_108;
  char *local_100;
  byte local_f5;
  ulong local_f0;
  char **local_d0;
  ulong local_c8;
  byte local_c0;
  char local_bf;
  char local_be;
  char local_bd;
  int local_bc;
  char local_a9;
  byte *local_a8;
  size_t local_a0;
  undefined local_98 [48];
  byte local_68 [56];
  
  bVar26 = 0;
  uVar13 = 0;
  pbVar22 = (byte *)0x0;
  lVar20 = 0xffffffff;
  __stream = (FILE *)(param_1 & 0xffffffff);
  FUN_00406260(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils");
  textdomain("coreutils");
  FUN_00409e30(FUN_00403080);
  setvbuf(stdout,(char *)0x0,1,0);
LAB_004019b8:
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          iVar4 = FUN_00409690(__stream,param_2,&DAT_00409f4d,&PTR_s_binary_0040a9e0,0);
          if (iVar4 == -1) {
            _DAT_0060e2e8 = 0x42;
            DAT_0060e2e0 = 0x40;
            if (((int)lVar20 == 0) && ((char)uVar13 != '\0')) {
              pcVar17 = "--tag does not support --text mode";
              goto LAB_004026aa;
            }
            bVar21 = (byte)pbVar22;
            if ((bVar21 != 0) &&
               (pcVar17 = "the --tag option is meaningless when verifying checksums",
               (char)uVar13 != '\0')) goto LAB_004026aa;
            pcVar17 = "the --binary and --text options are meaningless when verifying checksums";
            if ((bVar21 & (byte)~(byte)((ulong)lVar20 >> 0x18) >> 7) != 0) goto LAB_004026aa;
            if (DAT_0060e2da != '\0') goto LAB_00401df3;
            if (DAT_0060e2dc == '\0') {
              if (DAT_0060e2db == '\0') goto LAB_0040268a;
              pcVar17 = "the --warn option is meaningful only when verifying checksums";
              if (bVar21 != 0) goto LAB_00401bdb;
              goto LAB_004026aa;
            }
            pcVar17 = "the --status option is meaningful only when verifying checksums";
            goto joined_r0x00401bb0;
          }
          if (iVar4 != 0x77) break;
          DAT_0060e2dc = '\0';
          DAT_0060e2db = '\x01';
          DAT_0060e2d9 = '\0';
        }
        if (iVar4 < 0x78) break;
        if (iVar4 == 0x82) goto LAB_00401af8;
        if (iVar4 < 0x83) {
          if (iVar4 == 0x80) {
            DAT_0060e2da = '\x01';
          }
          else {
            if (iVar4 != 0x81) goto LAB_004026bf;
            DAT_0060e2dc = '\x01';
            DAT_0060e2db = '\0';
            DAT_0060e2d9 = '\0';
          }
        }
        else {
          if (iVar4 != 0x83) {
            if (iVar4 == 0x84) {
              uVar13 = 1;
              goto LAB_00401a39;
            }
            goto LAB_004026bf;
          }
          DAT_0060e2d8 = 1;
        }
      }
      if (iVar4 != 0x62) break;
LAB_00401a39:
      lVar20 = 1;
    }
    if (0x62 < iVar4) {
      if (iVar4 == 99) {
        pbVar22 = (byte *)0x1;
      }
      else {
        if (iVar4 != 0x74) break;
        lVar20 = 0;
      }
      goto LAB_004019b8;
    }
    if (iVar4 == -0x83) {
      FUN_00408310(stdout,"sha256sum","GNU coreutils",PTR_DAT_0060e218,"Ulrich Drepper",
                   "Scott Miller","David Madore",0);
                    /* WARNING: Subroutine does not return */
      exit(0);
    }
    if (iVar4 != -0x82) break;
    FUN_00402c90(0);
LAB_00401af8:
    DAT_0060e2dc = '\0';
    DAT_0060e2db = '\0';
    DAT_0060e2d9 = '\x01';
  } while( true );
LAB_004026bf:
  FUN_00402c90(1);
LAB_004026c9:
  __stream = (FILE *)FUN_00407d00(0,3,local_100);
  uVar11 = dcgettext(0,"%s: no file was verified",5);
  error(0,0,uVar11,__stream);
LAB_00402036:
  uVar5 = (uint)param_2 & 1;
LAB_0040203b:
  local_c0 = local_c0 & (byte)uVar5;
LAB_004021b1:
  do {
    local_108 = local_108 + 1;
    if (local_108 < local_d0) goto LAB_00401c50;
LAB_004021c5:
    if ((DAT_0060e2f0 == '\0') || (iVar4 = FUN_004086e0(stdin), iVar4 != -1)) {
      return local_c0 ^ 1;
    }
    param_2 = (undefined8 *)dcgettext(0,"standard input",5);
    piVar10 = __errno_location();
    error(1,*piVar10,param_2);
LAB_0040268a:
    if ((DAT_0060e2d9 == '\x01') &&
       (pcVar17 = "the --quiet option is meaningful only when verifying checksums",
       (char)pbVar22 == '\0')) break;
LAB_00401bbf:
    if ((DAT_0060e2d8 != 0) &&
       (pcVar17 = "the --strict option is meaningful only when verifying checksums",
       (char)pbVar22 == '\0')) break;
LAB_00401bdb:
    while( true ) {
      if ((int)lVar20 == -1) {
        lVar20 = 0;
      }
      local_d0 = (char **)(param_2 + (int)__stream);
      lVar6 = (long)DAT_0060e29c;
      if (DAT_0060e29c == (int)__stream) {
        *local_d0 = "-";
        local_d0 = local_d0 + 1;
      }
      local_108 = (char **)(param_2 + lVar6);
      if (local_d0 <= local_108) {
        local_c0 = 1;
        goto LAB_004021c5;
      }
      local_c0 = 1;
      local_f5 = (byte)pbVar22;
      local_be = (char)uVar13;
      local_bc = (-(uint)((int)lVar20 == 0) & 0xfffffff6) + 0x2a;
      local_bd = (char)local_bc;
LAB_00401c50:
      local_100 = *local_108;
      if (local_f5 == 0) break;
      iVar4 = strcmp(local_100,"-");
      if (iVar4 == 0) {
        DAT_0060e2f0 = '\x01';
        local_100 = (char *)dcgettext(0,"standard input",5);
        __stream = stdin;
      }
      else {
        __stream = (FILE *)FUN_004061c0(local_100,"r");
        if (__stream == (FILE *)0x0) {
LAB_00402259:
          uVar11 = FUN_00407d00(0,3,local_100);
          piVar10 = __errno_location();
          error(0,*piVar10,"%s",uVar11);
          uVar5 = 0;
          goto LAB_0040203b;
        }
      }
      local_bf = '\0';
      uVar13 = 0;
      lVar20 = 0;
      lVar6 = 1;
      local_a8 = (byte *)0x0;
      local_a0 = 0;
      local_c8 = 0;
      local_f0 = 0;
      do {
        _Var7 = __getdelim((char **)&local_a8,&local_a0,10,__stream);
        pbVar23 = local_a8;
        if (_Var7 < 1) {
LAB_00401fa5:
          free(local_a8);
          param_2 = (undefined8 *)0x0;
          if ((__stream->_flags & 0x20U) != 0) {
            uVar11 = FUN_00407d00(0,3,local_100);
            uVar9 = dcgettext(0,"%s: read error",5);
            error(0,0,uVar9,uVar11);
            uVar5 = 0;
            goto LAB_0040203b;
          }
          if ((iVar4 != 0) && (iVar4 = FUN_004086e0(), iVar4 != 0)) goto LAB_00402259;
          if ((char)uVar13 == '\0') {
            __stream = (FILE *)FUN_00407d00(0,3,local_100);
            uVar11 = dcgettext(0,"%s: no properly formatted %s checksum lines found",5);
            error(0,0,uVar11,__stream,"SHA256");
            goto LAB_00402036;
          }
          if (DAT_0060e2dc == '\0') {
            if (lVar20 != 0) {
              uVar11 = dcngettext(0,"WARNING: %lu line is improperly formatted",
                                  "WARNING: %lu lines are improperly formatted",lVar20,5);
              error(0,0,uVar11,lVar20);
            }
            if (local_f0 != 0) {
              uVar11 = dcngettext(0,"WARNING: %lu listed file could not be read",
                                  "WARNING: %lu listed files could not be read",local_f0,5);
              error(0,0,uVar11,local_f0);
              uVar13 = local_f0;
            }
            if (local_c8 != 0) {
              uVar11 = dcngettext(0,"WARNING: %lu computed checksum did NOT match",
                                  "WARNING: %lu computed checksums did NOT match",local_c8,5);
              error(0,0,uVar11,local_c8);
              uVar13 = local_c8;
            }
            if (DAT_0060e2da == '\0') goto LAB_004022a8;
            if (local_bf == '\0') goto LAB_004026c9;
          }
          else {
LAB_004022a8:
            if (local_bf == '\0') goto LAB_00402036;
          }
          if ((local_f0 | local_c8) == 0) {
            param_2 = (undefined8 *)(ulong)(DAT_0060e2d8 ^ 1 | (uint)(lVar20 == 0));
          }
          goto LAB_00402036;
        }
        bVar21 = *local_a8;
        if (bVar21 == 0x23) {
LAB_00401da6:
          bVar21 = *(byte *)&__stream->_flags;
        }
        else {
          if (local_a8[_Var7 + -1] == 10) {
            _Var7 = _Var7 + -1;
            local_a8[_Var7] = 0;
            bVar21 = *local_a8;
          }
          uVar14 = 0;
          if (bVar21 != 0x20) goto LAB_00401d3e;
          do {
            do {
              uVar14 = uVar14 + 1;
              bVar21 = local_a8[uVar14];
            } while (bVar21 == 0x20);
LAB_00401d3e:
          } while (bVar21 == 9);
          bVar24 = bVar21 < 0x5c;
          bVar25 = bVar21 == 0x5c;
          bVar21 = 0;
          if (bVar25) {
            bVar24 = 0xfffffffffffffffe < uVar14;
            uVar14 = uVar14 + 1;
            bVar25 = uVar14 == 0;
            bVar21 = local_f5;
          }
          pbVar22 = local_a8 + uVar14;
          lVar12 = 6;
          pbVar16 = pbVar22;
          pbVar18 = (byte *)"SHA256";
          do {
            if (lVar12 == 0) break;
            lVar12 = lVar12 + -1;
            bVar24 = *pbVar16 < *pbVar18;
            bVar25 = *pbVar16 == *pbVar18;
            pbVar16 = pbVar16 + (ulong)bVar26 * -2 + 1;
            pbVar18 = pbVar18 + (ulong)bVar26 * -2 + 1;
          } while (bVar25);
          if ((!bVar24 && !bVar25) == bVar24) {
            bVar2 = local_a8[uVar14 + 6];
            lVar12 = uVar14 + 6;
            if (bVar2 == 0x20) {
              bVar2 = local_a8[uVar14 + 7];
              lVar12 = uVar14 + 7;
            }
            if (bVar2 == 0x28) {
              lVar19 = _Var7 - (lVar12 + 1);
              if (lVar19 != 0) {
                pbVar23 = local_a8 + lVar12 + 1;
                lVar12 = lVar19 + -1;
                if (lVar12 == 0) {
LAB_00402229:
                  if (*pbVar23 != 0x29) goto LAB_00401d95;
                  lVar12 = 0;
                  pbVar16 = pbVar23;
                }
                else {
                  bVar2 = pbVar23[lVar19 + -1];
                  while (bVar2 != 0x29) {
                    lVar12 = lVar12 + -1;
                    if (lVar12 == 0) goto LAB_00402229;
                    bVar2 = pbVar23[lVar12];
                  }
                  pbVar16 = pbVar23 + lVar12;
                }
                if ((bVar21 == 0) || (lVar19 = FUN_004029b0(pbVar23,lVar12), lVar19 != 0)) {
                  *pbVar16 = 0;
                  bVar21 = pbVar23[lVar12 + 1];
                  lVar12 = lVar12 + 1;
                  if ((bVar21 == 9) || (bVar21 == 0x20)) {
                    do {
                      do {
                        lVar12 = lVar12 + 1;
                        bVar21 = pbVar23[lVar12];
                      } while (bVar21 == 0x20);
                    } while (bVar21 == 9);
                  }
                  if (bVar21 == 0x3d) {
                    pbVar22 = pbVar23 + lVar12 + 1;
                    if ((*pbVar22 == 0x20) || (*pbVar22 == 9)) {
                      pbVar16 = pbVar23 + lVar12 + 2;
                      do {
                        do {
                          pbVar22 = pbVar16;
                          pbVar16 = pbVar22 + 1;
                        } while (*pbVar22 == 0x20);
                      } while (*pbVar22 == 9);
                    }
                    cVar3 = FUN_00402950(pbVar22);
                    goto LAB_00402441;
                  }
                }
              }
            }
LAB_00401d95:
            lVar20 = lVar20 + 1;
            if (DAT_0060e2db != '\0') {
              uVar11 = FUN_00407d00(0,3,local_100);
              uVar9 = dcgettext(0,"%s: %lu: improperly formatted %s checksum line",5);
              error(0,0,uVar9,uVar11,lVar6,"SHA256");
            }
            goto LAB_00401da6;
          }
          if (_Var7 - uVar14 < (ulong)(*pbVar22 == 0x5c) + _DAT_0060e2e8) goto LAB_00401d95;
          lVar12 = uVar14 + DAT_0060e2e0;
          bVar2 = local_a8[lVar12];
          if ((bVar2 != 0x20) && (bVar2 != 9)) goto LAB_00401d95;
          local_a8[lVar12] = 0;
          cVar3 = FUN_00402950(pbVar22);
          if (cVar3 == '\0') goto LAB_00401d95;
          lVar19 = lVar12 + 1;
          if ((_Var7 - lVar19 == 1) ||
             ((bVar2 = pbVar23[lVar12 + 1], bVar2 != 0x20 && (bVar2 != 0x2a)))) {
            if (DAT_0060e210 == 0) goto LAB_00401d95;
            DAT_0060e210 = 1;
          }
          else if (DAT_0060e210 != 1) {
            DAT_0060e210 = 0;
            lVar19 = lVar12 + 2;
          }
          pbVar23 = pbVar23 + lVar19;
          if (bVar21 != 0) {
            lVar12 = FUN_004029b0(pbVar23,_Var7 - lVar19);
            cVar3 = lVar12 != 0;
LAB_00402441:
            if (cVar3 == '\0') goto LAB_00401d95;
          }
          bVar24 = false;
          bVar25 = iVar4 == 0;
          if (bVar25) {
            lVar12 = 2;
            pbVar16 = pbVar23;
            pbVar18 = &DAT_0040be0a;
            do {
              if (lVar12 == 0) break;
              lVar12 = lVar12 + -1;
              bVar24 = *pbVar16 < *pbVar18;
              bVar25 = *pbVar16 == *pbVar18;
              pbVar16 = pbVar16 + (ulong)bVar26 * -2 + 1;
              pbVar18 = pbVar18 + (ulong)bVar26 * -2 + 1;
            } while (bVar25);
            if ((!bVar24 && !bVar25) == bVar24) goto LAB_00401d95;
          }
          bVar24 = false;
          if (DAT_0060e2dc == '\0') {
            pcVar17 = strchr((char *)pbVar23,10);
            bVar24 = pcVar17 != (char *)0x0;
          }
          cVar3 = FUN_00402af0(pbVar23,local_68,&local_a9);
          if (cVar3 == '\0') {
            local_f0 = local_f0 + 1;
            if (DAT_0060e2dc == '\0') {
              if (bVar24 != false) {
                pcVar17 = stdout->_IO_write_ptr;
                if (pcVar17 < stdout->_IO_write_end) {
                  stdout->_IO_write_ptr = pcVar17 + 1;
                  *pcVar17 = '\\';
                }
                else {
                  __overflow(stdout,0x5c);
                }
              }
              FUN_00402a40(pbVar23,bVar24);
              pcVar17 = "FAILED open or read";
LAB_00401f7a:
              uVar11 = dcgettext(0,pcVar17,5);
              __printf_chk(1,": %s\n",uVar11);
            }
          }
          else if ((DAT_0060e2da == '\0') || (local_a9 == '\0')) {
            uVar13 = DAT_0060e2e0 >> 1;
            if (uVar13 == 0) {
              uVar14 = 0;
            }
            else {
              pp_Var8 = __ctype_tolower_loc();
              uVar15 = 0;
              do {
                if (((*pp_Var8)[pbVar22[uVar15 * 2]] !=
                     (int)"0123456789abcdef"[local_68[uVar15] >> 4]) ||
                   ((*pp_Var8)[pbVar22[uVar15 * 2 + 1]] !=
                    (int)"0123456789abcdef"[local_68[uVar15] & 0xf])) {
                  local_c8 = local_c8 + 1;
                  if (DAT_0060e2dc != '\0') goto LAB_00401f95;
                  uVar14 = uVar15;
                  if (bVar24 == false) goto LAB_00402156;
                  goto LAB_00402136;
                }
                uVar15 = uVar15 + 1;
                uVar14 = uVar13;
              } while (uVar13 != uVar15);
            }
            local_bf = DAT_0060e2dc;
            if ((DAT_0060e2dc == '\0') && (local_bf = DAT_0060e2d9, DAT_0060e2d9 == '\0')) {
              local_bf = cVar3;
              if (bVar24 == false) {
                FUN_00402a40(pbVar23,0);
              }
              else {
LAB_00402136:
                pcVar17 = stdout->_IO_write_ptr;
                if (pcVar17 < stdout->_IO_write_end) {
                  stdout->_IO_write_ptr = pcVar17 + 1;
                  *pcVar17 = '\\';
                }
                else {
                  __overflow(stdout,0x5c);
                }
LAB_00402156:
                FUN_00402a40(pbVar23,bVar24);
                if (uVar13 != uVar14) {
                  pcVar17 = "FAILED";
                  goto LAB_00401f7a;
                }
              }
              if (DAT_0060e2d9 == '\0') {
                pcVar17 = "OK";
                goto LAB_00401f7a;
              }
            }
          }
LAB_00401f95:
          uVar13 = (ulong)local_f5;
          bVar21 = *(byte *)&__stream->_flags;
        }
        if ((bVar21 & 0x30) != 0) goto LAB_00401fa5;
        lVar6 = lVar6 + 1;
      } while (lVar6 != 0);
      param_2 = (undefined8 *)FUN_00407d00(0,3,local_100);
      uVar11 = dcgettext(0,"%s: too many checksum lines",5);
      error(1,0,uVar11,param_2);
LAB_00401df3:
      pcVar17 = "the --ignore-missing option is meaningful only when verifying checksums";
      bVar21 = (byte)pbVar22;
joined_r0x00401bb0:
      if (bVar21 == 0) goto LAB_004026aa;
      if (DAT_0060e2db == '\0') goto LAB_00401bbf;
    }
    cVar3 = FUN_00402af0(local_100,local_98,local_68);
    if (cVar3 == '\0') {
      local_c0 = 0;
      goto LAB_004021b1;
    }
    pcVar17 = strchr(local_100,0x5c);
    if ((pcVar17 == (char *)0x0) && (pcVar17 = strchr(local_100,10), pcVar17 == (char *)0x0)) {
      uVar11 = 0;
      if (local_be != '\0') goto LAB_004025d9;
joined_r0x0040236f:
      if (DAT_0060e2e0 >> 1 == 0) goto LAB_00402371;
    }
    else {
      if (local_be == '\0') {
        pcVar17 = stdout->_IO_write_ptr;
        if (pcVar17 < stdout->_IO_write_end) {
          stdout->_IO_write_ptr = pcVar17 + 1;
          *pcVar17 = '\\';
        }
        else {
          __overflow(stdout,0x5c);
        }
        uVar11 = 1;
        goto joined_r0x0040236f;
      }
      pcVar17 = stdout->_IO_write_ptr;
      if (stdout->_IO_write_end < pcVar17 || stdout->_IO_write_end == pcVar17) {
        uVar11 = 1;
        __overflow(stdout,0x5c);
      }
      else {
        uVar11 = 1;
        stdout->_IO_write_ptr = pcVar17 + 1;
        *pcVar17 = '\\';
      }
LAB_004025d9:
      fwrite_unlocked("SHA256",1,6,stdout);
      fwrite_unlocked(&DAT_00409fc8,1,2,stdout);
      FUN_00402a40(local_100,uVar11);
      fwrite_unlocked(&DAT_00409fcb,1,4,stdout);
      if (DAT_0060e2e0 >> 1 == 0) goto LAB_00402339;
    }
    __stream = (FILE *)0x0;
    do {
      puVar1 = local_98 + (long)__stream;
      __stream = (FILE *)((long)&__stream->_flags + 1);
      __printf_chk(1,&DAT_00409fc3,*puVar1);
    } while (__stream < (FILE *)(DAT_0060e2e0 >> 1));
LAB_00402339:
    if (local_be == '\0') {
LAB_00402371:
      pcVar17 = stdout->_IO_write_ptr;
      if (pcVar17 < stdout->_IO_write_end) {
        stdout->_IO_write_ptr = pcVar17 + 1;
        *pcVar17 = ' ';
      }
      else {
        __overflow(stdout,0x20);
      }
      pcVar17 = stdout->_IO_write_ptr;
      if (pcVar17 < stdout->_IO_write_end) {
        stdout->_IO_write_ptr = pcVar17 + 1;
        *pcVar17 = local_bd;
      }
      else {
        __overflow(stdout,local_bc);
      }
      FUN_00402a40(local_100,uVar11);
    }
    pcVar17 = stdout->_IO_write_ptr;
    if (pcVar17 < stdout->_IO_write_end) {
      stdout->_IO_write_ptr = pcVar17 + 1;
      *pcVar17 = '\n';
    }
    else {
      __overflow(stdout,10);
    }
  } while( true );
LAB_004026aa:
  uVar11 = dcgettext(0,pcVar17,5);
  error(0,0,uVar11);
  goto LAB_004026bf;
}


void FUN_00402870(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_retaddr;
  undefined auStack_8 [8];
  
  (*(code *)PTR___libc_start_main_0060dff0)
            (FUN_00401940,unaff_retaddr,&stack0x00000008,FUN_00409dc0,FUN_00409e20,param_3,auStack_8
            );
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* WARNING: Removing unreachable block (ram,0x004028a8) */
/* WARNING: Removing unreachable block (ram,0x004028b2) */

void FUN_0040289b(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x004028e9) */

void FUN_004028ba(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00402926) */

void FUN_004028f1(void)

{
  if (DAT_0060e2c8 != '\0') {
    return;
  }
  FUN_0040289b();
  DAT_0060e2c8 = 1;
  return;
}


/* WARNING: Removing unreachable block (ram,0x004028e9) */

void thunk_FUN_004028ba(void)

{
  return;
}


ulong FUN_00402950(byte *param_1)

{
  ulong uVar1;
  ulong in_RAX;
  ushort **ppuVar2;
  
  uVar1 = DAT_0060e2e0;
  if (DAT_0060e2e0 != 0) {
    ppuVar2 = __ctype_b_loc();
    in_RAX = 0;
    do {
      if ((*(byte *)((long)*ppuVar2 + (ulong)*param_1 * 2 + 1) & 0x10) == 0) {
        return 0;
      }
      in_RAX = (ulong)((int)in_RAX + 1);
      param_1 = param_1 + 1;
    } while (in_RAX < uVar1);
  }
  return in_RAX & 0xffffffffffffff00 | (ulong)(*param_1 == 0);
}


long FUN_004029b0(long param_1,ulong param_2)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  
  uVar4 = 0;
  puVar2 = (undefined *)(param_1 + 1);
  if (param_2 != 0) {
    do {
      puVar3 = puVar2;
      cVar1 = *(char *)(param_1 + uVar4);
      if (cVar1 == '\0') {
        return 0;
      }
      if (cVar1 == '\\') {
        if (param_2 - 1 == uVar4) {
          return 0;
        }
        uVar4 = uVar4 + 1;
        if (*(char *)(param_1 + uVar4) == '\\') {
          puVar3[-1] = 0x5c;
        }
        else {
          if (*(char *)(param_1 + uVar4) != 'n') {
            return 0;
          }
          puVar3[-1] = 10;
        }
      }
      else {
        puVar3[-1] = cVar1;
      }
      uVar4 = uVar4 + 1;
      puVar2 = puVar3 + 1;
    } while (uVar4 < param_2);
    if (puVar3 < (undefined *)(param_2 + param_1)) {
      *puVar3 = 0;
    }
  }
  return param_1;
}


void FUN_00402a40(byte *param_1,char param_2)

{
  byte bVar1;
  byte *pbVar2;
  
  if (param_2 == '\0') {
    fputs_unlocked((char *)param_1,stdout);
    return;
  }
  while( true ) {
    bVar1 = *param_1;
    if (bVar1 == 0) break;
    if (bVar1 == 10) {
      fwrite_unlocked(&DAT_00409e84,1,2,stdout);
    }
    else if (bVar1 == 0x5c) {
      fwrite_unlocked(&DAT_00409e87,1,2,stdout);
    }
    else {
      pbVar2 = (byte *)stdout->_IO_write_ptr;
      if (pbVar2 < stdout->_IO_write_end) {
        stdout->_IO_write_ptr = (char *)(pbVar2 + 1);
        *pbVar2 = bVar1;
      }
      else {
        __overflow(stdout,(uint)bVar1);
      }
    }
    param_1 = param_1 + 1;
  }
  return;
}


char FUN_00402af0(byte *param_1,undefined8 param_2,undefined *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  long lVar5;
  byte *pbVar6;
  byte *pbVar7;
  bool bVar8;
  bool bVar9;
  
  lVar5 = 2;
  bVar8 = &stack0xffffffffffffffe0 < &DAT_00000008;
  bVar9 = &stack0x00000000 == (undefined *)0x28;
  pbVar6 = param_1;
  pbVar7 = &DAT_0040be0a;
  do {
    if (lVar5 == 0) break;
    lVar5 = lVar5 + -1;
    bVar8 = *pbVar6 < *pbVar7;
    bVar9 = *pbVar6 == *pbVar7;
    pbVar6 = pbVar6 + 1;
    pbVar7 = pbVar7 + 1;
  } while (bVar9);
  *param_3 = 0;
  lVar5 = stdin;
  if ((!bVar8 && !bVar9) == bVar8) {
    DAT_0060e2f0 = 1;
    FUN_00406190(stdin,2);
    iVar2 = FUN_00405ec0(lVar5,param_2);
    if (iVar2 != 0) {
LAB_00402be0:
      uVar3 = FUN_00407d00(0,3,param_1);
      piVar4 = __errno_location();
      error(0,*piVar4,"%s",uVar3);
      if (stdin == lVar5) {
        return '\0';
      }
      FUN_004086e0(lVar5);
      return '\0';
    }
  }
  else {
    lVar5 = FUN_004061c0(param_1,"r");
    if (lVar5 == 0) {
      piVar4 = __errno_location();
      cVar1 = DAT_0060e2da;
      if ((DAT_0060e2da != '\0') && (*piVar4 == 2)) {
        *param_3 = 1;
        return cVar1;
      }
      uVar3 = FUN_00407d00(0,3,param_1);
      error(0,*piVar4,"%s",uVar3);
      return '\0';
    }
    FUN_00406190(lVar5,2);
    iVar2 = FUN_00405ec0(lVar5,param_2);
    if (iVar2 != 0) goto LAB_00402be0;
    iVar2 = FUN_004086e0(lVar5);
    if (iVar2 != 0) {
      uVar3 = FUN_00407d00(0,3,param_1);
      piVar4 = __errno_location();
      error(0,*piVar4,"%s",uVar3);
      return '\0';
    }
  }
  return '\x01';
}


void FUN_00402c90(int param_1)

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
  
  uVar5 = DAT_0060e308;
  bVar14 = 0;
  if (param_1 != 0) {
    uVar3 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(stderr,1,uVar3,uVar5);
    goto LAB_00402ccf;
  }
  uVar3 = dcgettext(0,"Usage: %s [OPTION]... [FILE]...\nPrint or check %s (%d-bit) checksums.\n",5);
  __printf_chk(1,uVar3,uVar5,"SHA256",0x100);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"\nWith no FILE, or when FILE is -, read standard input.\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"\n  -b, --binary         read in binary mode\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  uVar5 = dcgettext(0,"  -c, --check          read %s sums from the FILEs and check them\n",5);
  __printf_chk(1,uVar5,"SHA256");
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"      --tag            create a BSD-style checksum\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"  -t, --text           read in text mode (default)\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nThe following five options are useful only when verifying checksums:\n      --ignore-missing  don\'t fail or report status for missing files\n      --quiet          don\'t print OK for each successfully verified file\n      --status         don\'t output anything, status code shows success\n      --strict         exit non-zero for improperly formatted checksum lines\n  -w, --warn           warn about improperly formatted checksum lines\n\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"      --help     display this help and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"      --version  output version information and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  uVar5 = dcgettext(0,
                    "\nThe sums are computed as described in %s.  When checking, the input\nshould be a former output of this program.  The default mode is to print a\nline with checksum, a space, a character indicating input mode (\'*\' for binary,\n\' \' for text or where binary is insignificant), and name for each FILE.\n"
                    ,5);
  __printf_chk(1,uVar5,"FIPS-180-2");
  local_88 = &DAT_00409ea6;
  local_80 = "test invocation";
  local_78[0] = (byte *)0x409f16;
  local_78[1] = (byte *)0x409eb8;
  local_78[2] = (byte *)0x409ece;
  local_78[3] = (byte *)0x409ed8;
  local_78[4] = (byte *)0x409e8a;
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
    lVar9 = 10;
    pbVar10 = (byte *)"sha256sum";
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
        pcVar4 = "sha256sum";
        goto LAB_00403033;
      }
    }
    pcVar4 = "sha256sum";
    uVar5 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    pcVar8 = " invocation";
    __printf_chk(1,uVar5,"https://www.gnu.org/software/coreutils/","sha256sum");
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar8 = setlocale(5,(char *)0x0);
    if (pcVar8 != (char *)0x0) {
      iVar2 = strncmp(pcVar8,"en_",3);
      if (iVar2 != 0) {
LAB_00403033:
        uVar5 = dcgettext(0,"Report %s translation bugs to <https://translationproject.org/team/>\n"
                          ,5);
        __printf_chk(1,uVar5,"sha256sum");
      }
    }
    pcVar8 = " invocation";
    uVar5 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    __printf_chk(1,uVar5,"https://www.gnu.org/software/coreutils/","sha256sum");
    if (pcVar4 != "sha256sum") {
      pcVar8 = "";
    }
  }
  uVar5 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(1,uVar5,pcVar4,pcVar8);
LAB_00402ccf:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}


void FUN_00403060(undefined8 param_1)

{
  DAT_0060e300 = param_1;
  return;
}


void FUN_00403070(undefined param_1)

{
  DAT_0060e2f8 = param_1;
  return;
}


void FUN_00403080(void)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  iVar1 = FUN_00409790(stdout);
  if (iVar1 != 0) {
    piVar2 = __errno_location();
    if ((DAT_0060e2f8 == '\0') || (*piVar2 != 0x20)) {
      uVar3 = dcgettext(0,"write error",5);
      if (DAT_0060e300 == 0) {
        error(0,*piVar2,"%s",uVar3);
      }
      else {
        uVar4 = FUN_00407cd0();
        error(0,*piVar2,"%s: %s",uVar4,uVar3);
      }
      goto LAB_004030fe;
    }
  }
  iVar1 = FUN_00409790(stderr);
  if (iVar1 == 0) {
    return;
  }
LAB_004030fe:
                    /* WARNING: Subroutine does not return */
  _exit(DAT_0060e220);
}


void FUN_00403120(undefined8 *param_1)

{
  param_1[4] = 0;
  *param_1 = 0xbb67ae856a09e667;
  param_1[1] = 0xa54ff53a3c6ef372;
  param_1[2] = 0x9b05688c510e527f;
  param_1[3] = 0x5be0cd191f83d9ab;
  param_1[5] = 0;
  return;
}


void FUN_00403170(undefined8 *param_1)

{
  param_1[4] = 0;
  *param_1 = 0x367cd507c1059ed8;
  param_1[1] = 0xf70e59393070dd17;
  param_1[2] = 0x68581511ffc00b31;
  param_1[3] = 0xbefa4fa464f98fa7;
  param_1[5] = 0;
  return;
}


void FUN_004031c0(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = 0;
  do {
    uVar1 = *(uint *)(param_1 + lVar2);
    *(uint *)(param_2 + lVar2) =
         uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    lVar2 = lVar2 + 4;
  } while (lVar2 != 0x20);
  return;
}


void FUN_004031e0(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = 0;
  do {
    uVar1 = *(uint *)(param_1 + lVar2);
    *(uint *)(param_2 + lVar2) =
         uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    lVar2 = lVar2 + 4;
  } while (lVar2 != 0x1c);
  return;
}


void FUN_00403200(ulong param_1,ulong param_2,uint *param_3)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  ulong local_c0;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  uint local_78 [18];
  
  uVar2 = (param_2 & 0xfffffffffffffffc) + param_1;
  local_b0 = param_3[2];
  local_ac = param_3[3];
  local_a8 = param_3[4];
  local_a4 = param_3[5];
  uVar1 = param_3[8];
  local_a0 = param_3[6];
  uVar10 = *param_3;
  param_3[8] = (uint)param_2 + param_3[8];
  local_9c = param_3[7];
  local_b4 = param_3[1];
  param_3[9] = param_3[9] + (int)(param_2 >> 0x20) + (uint)CARRY4((uint)param_2,uVar1);
  local_c0 = param_1;
  if (param_1 < uVar2) {
    do {
      lVar5 = 0;
      do {
        uVar1 = *(uint *)(local_c0 + lVar5);
        *(uint *)((long)local_78 + lVar5) =
             uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
        lVar5 = lVar5 + 4;
      } while (lVar5 != 0x40);
      local_c0 = local_c0 + 0x40;
      iVar18 = local_78[0] + 0x428a2f98 + local_9c +
               ((local_a8 << 7 | local_a8 >> 0x19) ^
               (local_a8 >> 0xb | local_a8 << 0x15) ^ (local_a8 >> 6 | local_a8 << 0x1a)) +
               ((local_a4 ^ local_a0) & local_a8 ^ local_a0);
      uVar1 = iVar18 + local_ac;
      uVar14 = ((uVar10 | local_b4) & local_b0 | uVar10 & local_b4) +
               ((uVar10 >> 0xd | uVar10 << 0x13) ^ (uVar10 >> 2 | uVar10 << 0x1e) ^
               (uVar10 << 10 | uVar10 >> 0x16)) + iVar18;
      iVar18 = ((uVar1 * 0x80 | uVar1 >> 0x19) ^
               (uVar1 >> 0xb | uVar1 * 0x200000) ^ (uVar1 >> 6 | uVar1 * 0x4000000)) +
               local_78[1] + 0x71374491 + local_a0 + ((local_a8 ^ local_a4) & uVar1 ^ local_a4);
      uVar3 = iVar18 + local_b0;
      uVar23 = ((uVar14 | uVar10) & local_b4 | uVar14 & uVar10) +
               ((uVar14 >> 0xd | uVar14 * 0x80000) ^ (uVar14 >> 2 | uVar14 * 0x40000000) ^
               (uVar14 * 0x400 | uVar14 >> 0x16)) + iVar18;
      iVar18 = ((uVar3 * 0x80 | uVar3 >> 0x19) ^
               (uVar3 >> 0xb | uVar3 * 0x200000) ^ (uVar3 >> 6 | uVar3 * 0x4000000)) +
               local_78[2] + 0xb5c0fbcf + local_a4 + ((uVar1 ^ local_a8) & uVar3 ^ local_a8);
      uVar7 = iVar18 + local_b4;
      uVar11 = ((uVar14 | uVar23) & uVar10 | uVar14 & uVar23) +
               ((uVar23 >> 0xd | uVar23 * 0x80000) ^ (uVar23 >> 2 | uVar23 * 0x40000000) ^
               (uVar23 * 0x400 | uVar23 >> 0x16)) + iVar18;
      iVar18 = ((uVar7 * 0x80 | uVar7 >> 0x19) ^
               (uVar7 >> 0xb | uVar7 * 0x200000) ^ (uVar7 >> 6 | uVar7 * 0x4000000)) +
               local_a8 + 0xe9b5dba5 + local_78[3] + ((uVar1 ^ uVar3) & uVar7 ^ uVar1);
      uVar6 = uVar10 + iVar18;
      uVar19 = ((uVar23 | uVar11) & uVar14 | uVar23 & uVar11) +
               ((uVar11 >> 0xd | uVar11 * 0x80000) ^ (uVar11 >> 2 | uVar11 * 0x40000000) ^
               (uVar11 * 0x400 | uVar11 >> 0x16)) + iVar18;
      iVar18 = ((uVar6 * 0x80 | uVar6 >> 0x19) ^
               (uVar6 >> 0xb | uVar6 * 0x200000) ^ (uVar6 >> 6 | uVar6 * 0x4000000)) +
               local_78[4] + 0x3956c25b + uVar1 + ((uVar3 ^ uVar7) & uVar6 ^ uVar3);
      uVar14 = uVar14 + iVar18;
      uVar30 = ((uVar11 | uVar19) & uVar23 | uVar11 & uVar19) +
               ((uVar19 >> 0xd | uVar19 * 0x80000) ^ (uVar19 >> 2 | uVar19 * 0x40000000) ^
               (uVar19 * 0x400 | uVar19 >> 0x16)) + iVar18;
      iVar18 = ((uVar14 * 0x80 | uVar14 >> 0x19) ^
               (uVar14 >> 0xb | uVar14 * 0x200000) ^ (uVar14 >> 6 | uVar14 * 0x4000000)) +
               ((uVar7 ^ uVar6) & uVar14 ^ uVar7) + local_78[5] + 0x59f111f1 + uVar3;
      uVar23 = uVar23 + iVar18;
      uVar1 = ((uVar19 | uVar30) & uVar11 | uVar19 & uVar30) +
              ((uVar30 >> 0xd | uVar30 * 0x80000) ^ (uVar30 >> 2 | uVar30 * 0x40000000) ^
              (uVar30 * 0x400 | uVar30 >> 0x16)) + iVar18;
      iVar18 = ((uVar23 * 0x80 | uVar23 >> 0x19) ^
               (uVar23 >> 0xb | uVar23 * 0x200000) ^ (uVar23 >> 6 | uVar23 * 0x4000000)) +
               local_78[6] + 0x923f82a4 + uVar7 + ((uVar6 ^ uVar14) & uVar23 ^ uVar6);
      uVar11 = uVar11 + iVar18;
      uVar3 = ((uVar30 | uVar1) & uVar19 | uVar30 & uVar1) +
              ((uVar1 >> 0xd | uVar1 * 0x80000) ^ (uVar1 >> 2 | uVar1 * 0x40000000) ^
              (uVar1 * 0x400 | uVar1 >> 0x16)) + iVar18;
      iVar18 = ((uVar11 * 0x80 | uVar11 >> 0x19) ^
               (uVar11 >> 0xb | uVar11 * 0x200000) ^ (uVar11 >> 6 | uVar11 * 0x4000000)) +
               local_78[7] + 0xab1c5ed5 + uVar6 + ((uVar14 ^ uVar23) & uVar11 ^ uVar14);
      uVar19 = uVar19 + iVar18;
      uVar7 = ((uVar1 | uVar3) & uVar30 | uVar1 & uVar3) +
              ((uVar3 >> 0xd | uVar3 * 0x80000) ^ (uVar3 >> 2 | uVar3 * 0x40000000) ^
              (uVar3 * 0x400 | uVar3 >> 0x16)) + iVar18;
      iVar18 = ((uVar19 * 0x80 | uVar19 >> 0x19) ^
               (uVar19 >> 0xb | uVar19 * 0x200000) ^ (uVar19 >> 6 | uVar19 * 0x4000000)) +
               ((uVar23 ^ uVar11) & uVar19 ^ uVar23) + local_78[8] + 0xd807aa98 + uVar14;
      uVar30 = uVar30 + iVar18;
      uVar6 = ((uVar3 | uVar7) & uVar1 | uVar3 & uVar7) +
              ((uVar7 >> 0xd | uVar7 * 0x80000) ^ (uVar7 >> 2 | uVar7 * 0x40000000) ^
              (uVar7 * 0x400 | uVar7 >> 0x16)) + iVar18;
      iVar18 = ((uVar30 * 0x80 | uVar30 >> 0x19) ^
               (uVar30 >> 0xb | uVar30 * 0x200000) ^ (uVar30 >> 6 | uVar30 * 0x4000000)) +
               local_78[9] + 0x12835b01 + uVar23 + ((uVar11 ^ uVar19) & uVar30 ^ uVar11);
      uVar1 = uVar1 + iVar18;
      uVar25 = ((uVar7 | uVar6) & uVar3 | uVar7 & uVar6) +
               ((uVar6 >> 0xd | uVar6 * 0x80000) ^ (uVar6 >> 2 | uVar6 * 0x40000000) ^
               (uVar6 * 0x400 | uVar6 >> 0x16)) + iVar18;
      iVar18 = ((uVar1 * 0x80 | uVar1 >> 0x19) ^
               (uVar1 >> 0xb | uVar1 * 0x200000) ^ (uVar1 >> 6 | uVar1 * 0x4000000)) +
               local_78[10] + 0x243185be + uVar11 + ((uVar19 ^ uVar30) & uVar1 ^ uVar19);
      uVar3 = uVar3 + iVar18;
      uVar23 = ((uVar6 | uVar25) & uVar7 | uVar6 & uVar25) +
               ((uVar25 >> 0xd | uVar25 * 0x80000) ^ (uVar25 >> 2 | uVar25 * 0x40000000) ^
               (uVar25 * 0x400 | uVar25 >> 0x16)) + iVar18;
      iVar18 = ((uVar3 * 0x80 | uVar3 >> 0x19) ^
               (uVar3 >> 0xb | uVar3 * 0x200000) ^ (uVar3 >> 6 | uVar3 * 0x4000000)) +
               local_78[11] + 0x550c7dc3 + uVar19 + ((uVar30 ^ uVar1) & uVar3 ^ uVar30);
      uVar7 = uVar7 + iVar18;
      uVar11 = ((uVar25 | uVar23) & uVar6 | uVar25 & uVar23) +
               ((uVar23 >> 0xd | uVar23 * 0x80000) ^ (uVar23 >> 2 | uVar23 * 0x40000000) ^
               (uVar23 * 0x400 | uVar23 >> 0x16)) + iVar18;
      iVar18 = ((uVar7 * 0x80 | uVar7 >> 0x19) ^
               (uVar7 >> 0xb | uVar7 * 0x200000) ^ (uVar7 >> 6 | uVar7 * 0x4000000)) +
               local_78[12] + 0x72be5d74 + uVar30 + ((uVar1 ^ uVar3) & uVar7 ^ uVar1);
      uVar6 = uVar6 + iVar18;
      uVar14 = ((uVar23 | uVar11) & uVar25 | uVar23 & uVar11) +
               ((uVar11 >> 0xd | uVar11 * 0x80000) ^ (uVar11 >> 2 | uVar11 * 0x40000000) ^
               (uVar11 * 0x400 | uVar11 >> 0x16)) + iVar18;
      iVar18 = ((uVar6 * 0x80 | uVar6 >> 0x19) ^
               (uVar6 >> 0xb | uVar6 * 0x200000) ^ (uVar6 >> 6 | uVar6 * 0x4000000)) +
               ((uVar3 ^ uVar7) & uVar6 ^ uVar3) + local_78[13] + 0x80deb1fe + uVar1;
      uVar25 = uVar25 + iVar18;
      uVar1 = ((uVar11 | uVar14) & uVar23 | uVar11 & uVar14) +
              ((uVar14 >> 0xd | uVar14 * 0x80000) ^ (uVar14 >> 2 | uVar14 * 0x40000000) ^
              (uVar14 * 0x400 | uVar14 >> 0x16)) + iVar18;
      iVar18 = ((uVar25 * 0x80 | uVar25 >> 0x19) ^
               (uVar25 >> 0xb | uVar25 * 0x200000) ^ (uVar25 >> 6 | uVar25 * 0x4000000)) +
               local_78[14] + 0x9bdc06a7 + uVar3 + ((uVar7 ^ uVar6) & uVar25 ^ uVar7);
      uVar23 = uVar23 + iVar18;
      uVar3 = ((uVar14 | uVar1) & uVar11 | uVar14 & uVar1) +
              ((uVar1 >> 0xd | uVar1 * 0x80000) ^ (uVar1 >> 2 | uVar1 * 0x40000000) ^
              (uVar1 * 0x400 | uVar1 >> 0x16)) + iVar18;
      iVar18 = ((uVar23 * 0x80 | uVar23 >> 0x19) ^
               (uVar23 >> 0xb | uVar23 * 0x200000) ^ (uVar23 >> 6 | uVar23 * 0x4000000)) +
               local_78[15] + 0xc19bf174 + uVar7 + ((uVar6 ^ uVar25) & uVar23 ^ uVar6);
      uVar11 = uVar11 + iVar18;
      uVar7 = ((uVar1 | uVar3) & uVar14 | uVar1 & uVar3) +
              ((uVar3 >> 0xd | uVar3 * 0x80000) ^ (uVar3 >> 2 | uVar3 * 0x40000000) ^
              (uVar3 * 0x400 | uVar3 >> 0x16)) + iVar18;
      uVar31 = ((local_78[1] << 0xe | local_78[1] >> 0x12) ^
                (local_78[1] >> 7 | local_78[1] << 0x19) ^ local_78[1] >> 3) +
               (local_78[14] >> 10 ^
               (local_78[14] << 0xd | local_78[14] >> 0x13) ^
               (local_78[14] << 0xf | local_78[14] >> 0x11)) + local_78[0] + local_78[9];
      iVar18 = ((uVar11 * 0x80 | uVar11 >> 0x19) ^
               (uVar11 >> 0xb | uVar11 * 0x200000) ^ (uVar11 >> 6 | uVar11 * 0x4000000)) +
               uVar6 + 0xe49b69c1 + uVar31 + ((uVar25 ^ uVar23) & uVar11 ^ uVar25);
      uVar14 = uVar14 + iVar18;
      uVar6 = ((uVar3 | uVar7) & uVar1 | uVar3 & uVar7) +
              ((uVar7 >> 0xd | uVar7 * 0x80000) ^ (uVar7 >> 2 | uVar7 * 0x40000000) ^
              (uVar7 * 0x400 | uVar7 >> 0x16)) + iVar18;
      uVar27 = ((local_78[2] << 0xe | local_78[2] >> 0x12) ^
                (local_78[2] >> 7 | local_78[2] << 0x19) ^ local_78[2] >> 3) +
               (local_78[15] >> 10 ^
               (local_78[15] << 0xd | local_78[15] >> 0x13) ^
               (local_78[15] << 0xf | local_78[15] >> 0x11)) + local_78[10] + local_78[1];
      iVar18 = ((uVar14 * 0x80 | uVar14 >> 0x19) ^
               (uVar14 >> 0xb | uVar14 * 0x200000) ^ (uVar14 >> 6 | uVar14 * 0x4000000)) +
               uVar25 + 0xefbe4786 + uVar27 + ((uVar23 ^ uVar11) & uVar14 ^ uVar23);
      uVar1 = uVar1 + iVar18;
      uVar25 = ((uVar7 | uVar6) & uVar3 | uVar7 & uVar6) +
               ((uVar6 >> 0xd | uVar6 * 0x80000) ^ (uVar6 >> 2 | uVar6 * 0x40000000) ^
               (uVar6 * 0x400 | uVar6 >> 0x16)) + iVar18;
      uVar26 = (local_78[3] >> 3 ^
               (local_78[3] >> 7 | local_78[3] << 0x19) ^ (local_78[3] << 0xe | local_78[3] >> 0x12)
               ) + local_78[11] + local_78[2] +
               (uVar31 >> 10 ^
               (uVar31 * 0x2000 | uVar31 >> 0x13) ^ (uVar31 * 0x8000 | uVar31 >> 0x11));
      iVar18 = ((uVar1 * 0x80 | uVar1 >> 0x19) ^
               (uVar1 >> 0xb | uVar1 * 0x200000) ^ (uVar1 >> 6 | uVar1 * 0x4000000)) +
               uVar23 + 0xfc19dc6 + uVar26 + ((uVar11 ^ uVar14) & uVar1 ^ uVar11);
      uVar3 = uVar3 + iVar18;
      uVar34 = ((uVar6 | uVar25) & uVar7 | uVar6 & uVar25) +
               ((uVar25 >> 0xd | uVar25 * 0x80000) ^ (uVar25 >> 2 | uVar25 * 0x40000000) ^
               (uVar25 * 0x400 | uVar25 >> 0x16)) + iVar18;
      uVar24 = (local_78[4] >> 3 ^
               (local_78[4] >> 7 | local_78[4] << 0x19) ^ (local_78[4] << 0xe | local_78[4] >> 0x12)
               ) + local_78[3] + local_78[12] +
               (uVar27 >> 10 ^
               (uVar27 * 0x2000 | uVar27 >> 0x13) ^ (uVar27 * 0x8000 | uVar27 >> 0x11));
      iVar18 = ((uVar3 * 0x80 | uVar3 >> 0x19) ^
               (uVar3 >> 0xb | uVar3 * 0x200000) ^ (uVar3 >> 6 | uVar3 * 0x4000000)) +
               uVar11 + 0x240ca1cc + uVar24 + ((uVar14 ^ uVar1) & uVar3 ^ uVar14);
      uVar7 = uVar7 + iVar18;
      uVar13 = ((uVar25 | uVar34) & uVar6 | uVar25 & uVar34) +
               ((uVar34 >> 0xd | uVar34 * 0x80000) ^ (uVar34 >> 2 | uVar34 * 0x40000000) ^
               (uVar34 * 0x400 | uVar34 >> 0x16)) + iVar18;
      uVar12 = ((uVar26 * 0x2000 | uVar26 >> 0x13) ^ (uVar26 * 0x8000 | uVar26 >> 0x11) ^
               uVar26 >> 10) +
               local_78[4] + local_78[13] +
               (local_78[5] >> 3 ^
               (local_78[5] >> 7 | local_78[5] << 0x19) ^ (local_78[5] << 0xe | local_78[5] >> 0x12)
               );
      iVar18 = ((uVar7 * 0x80 | uVar7 >> 0x19) ^
               (uVar7 >> 0xb | uVar7 * 0x200000) ^ (uVar7 >> 6 | uVar7 * 0x4000000)) +
               uVar14 + 0x2de92c6f + uVar12 + ((uVar1 ^ uVar3) & uVar7 ^ uVar1);
      uVar6 = uVar6 + iVar18;
      uVar23 = ((uVar34 | uVar13) & uVar25 | uVar34 & uVar13) +
               ((uVar13 >> 0xd | uVar13 * 0x80000) ^ (uVar13 >> 2 | uVar13 * 0x40000000) ^
               (uVar13 * 0x400 | uVar13 >> 0x16)) + iVar18;
      uVar19 = local_78[5] + local_78[14] +
               (local_78[6] >> 3 ^
               (local_78[6] >> 7 | local_78[6] << 0x19) ^ (local_78[6] << 0xe | local_78[6] >> 0x12)
               ) + ((uVar24 * 0x2000 | uVar24 >> 0x13) ^ (uVar24 * 0x8000 | uVar24 >> 0x11) ^
                   uVar24 >> 10);
      iVar18 = ((uVar6 * 0x80 | uVar6 >> 0x19) ^
               (uVar6 >> 0xb | uVar6 * 0x200000) ^ (uVar6 >> 6 | uVar6 * 0x4000000)) +
               uVar1 + 0x4a7484aa + uVar19 + ((uVar3 ^ uVar7) & uVar6 ^ uVar3);
      uVar25 = uVar25 + iVar18;
      uVar1 = ((uVar13 | uVar23) & uVar34 | uVar13 & uVar23) +
              ((uVar23 >> 0xd | uVar23 * 0x80000) ^ (uVar23 >> 2 | uVar23 * 0x40000000) ^
              (uVar23 * 0x400 | uVar23 >> 0x16)) + iVar18;
      uVar20 = ((uVar12 * 0x2000 | uVar12 >> 0x13) ^ (uVar12 * 0x8000 | uVar12 >> 0x11) ^
               uVar12 >> 10) +
               local_78[6] + local_78[15] +
               (local_78[7] >> 3 ^
               (local_78[7] >> 7 | local_78[7] << 0x19) ^ (local_78[7] << 0xe | local_78[7] >> 0x12)
               );
      iVar18 = ((uVar25 * 0x80 | uVar25 >> 0x19) ^
               (uVar25 >> 0xb | uVar25 * 0x200000) ^ (uVar25 >> 6 | uVar25 * 0x4000000)) +
               uVar3 + 0x5cb0a9dc + uVar20 + ((uVar7 ^ uVar6) & uVar25 ^ uVar7);
      uVar34 = uVar34 + iVar18;
      uVar3 = ((uVar23 | uVar1) & uVar13 | uVar23 & uVar1) +
              ((uVar1 >> 0xd | uVar1 * 0x80000) ^ (uVar1 >> 2 | uVar1 * 0x40000000) ^
              (uVar1 * 0x400 | uVar1 >> 0x16)) + iVar18;
      uVar15 = ((local_78[8] << 0xe | local_78[8] >> 0x12) ^
                (local_78[8] >> 7 | local_78[8] << 0x19) ^ local_78[8] >> 3) + local_78[7] + uVar31
               + ((uVar19 * 0x2000 | uVar19 >> 0x13) ^ (uVar19 * 0x8000 | uVar19 >> 0x11) ^
                 uVar19 >> 10);
      iVar18 = ((uVar34 * 0x80 | uVar34 >> 0x19) ^
               (uVar34 >> 0xb | uVar34 * 0x200000) ^ (uVar34 >> 6 | uVar34 * 0x4000000)) +
               ((uVar6 ^ uVar25) & uVar34 ^ uVar6) + uVar7 + 0x76f988da + uVar15;
      uVar13 = uVar13 + iVar18;
      uVar7 = ((uVar1 | uVar3) & uVar23 | uVar1 & uVar3) +
              ((uVar3 >> 0xd | uVar3 * 0x80000) ^ (uVar3 >> 2 | uVar3 * 0x40000000) ^
              (uVar3 * 0x400 | uVar3 >> 0x16)) + iVar18;
      uVar30 = ((local_78[9] << 0xe | local_78[9] >> 0x12) ^
                (local_78[9] >> 7 | local_78[9] << 0x19) ^ local_78[9] >> 3) + local_78[8] + uVar27
               + ((uVar20 * 0x2000 | uVar20 >> 0x13) ^ (uVar20 * 0x8000 | uVar20 >> 0x11) ^
                 uVar20 >> 10);
      iVar18 = ((uVar13 * 0x80 | uVar13 >> 0x19) ^
               (uVar13 >> 0xb | uVar13 * 0x200000) ^ (uVar13 >> 6 | uVar13 * 0x4000000)) +
               ((uVar25 ^ uVar34) & uVar13 ^ uVar25) + uVar6 + 0x983e5152 + uVar30;
      uVar23 = uVar23 + iVar18;
      uVar6 = ((uVar3 | uVar7) & uVar1 | uVar3 & uVar7) +
              ((uVar7 >> 0xd | uVar7 * 0x80000) ^ (uVar7 >> 2 | uVar7 * 0x40000000) ^
              (uVar7 * 0x400 | uVar7 >> 0x16)) + iVar18;
      uVar8 = ((local_78[10] << 0xe | local_78[10] >> 0x12) ^
               (local_78[10] >> 7 | local_78[10] << 0x19) ^ local_78[10] >> 3) + local_78[9] +
              uVar26 + ((uVar15 * 0x2000 | uVar15 >> 0x13) ^ (uVar15 * 0x8000 | uVar15 >> 0x11) ^
                       uVar15 >> 10);
      iVar18 = ((uVar23 * 0x80 | uVar23 >> 0x19) ^
               (uVar23 >> 0xb | uVar23 * 0x200000) ^ (uVar23 >> 6 | uVar23 * 0x4000000)) +
               uVar25 + 0xa831c66d + uVar8 + ((uVar34 ^ uVar13) & uVar23 ^ uVar34);
      uVar1 = uVar1 + iVar18;
      uVar11 = ((uVar7 | uVar6) & uVar3 | uVar7 & uVar6) +
               ((uVar6 >> 0xd | uVar6 * 0x80000) ^ (uVar6 >> 2 | uVar6 * 0x40000000) ^
               (uVar6 * 0x400 | uVar6 >> 0x16)) + iVar18;
      uVar25 = ((local_78[11] << 0xe | local_78[11] >> 0x12) ^
                (local_78[11] >> 7 | local_78[11] << 0x19) ^ local_78[11] >> 3) + local_78[10] +
               uVar24 + ((uVar30 * 0x2000 | uVar30 >> 0x13) ^ (uVar30 * 0x8000 | uVar30 >> 0x11) ^
                        uVar30 >> 10);
      iVar18 = ((uVar1 * 0x80 | uVar1 >> 0x19) ^
               (uVar1 >> 0xb | uVar1 * 0x200000) ^ (uVar1 >> 6 | uVar1 * 0x4000000)) +
               uVar34 + 0xb00327c8 + uVar25 + ((uVar13 ^ uVar23) & uVar1 ^ uVar13);
      uVar3 = uVar3 + iVar18;
      uVar14 = ((uVar6 | uVar11) & uVar7 | uVar6 & uVar11) +
               ((uVar11 >> 0xd | uVar11 * 0x80000) ^ (uVar11 >> 2 | uVar11 * 0x40000000) ^
               (uVar11 * 0x400 | uVar11 >> 0x16)) + iVar18;
      uVar21 = ((local_78[12] << 0xe | local_78[12] >> 0x12) ^
                (local_78[12] >> 7 | local_78[12] << 0x19) ^ local_78[12] >> 3) + local_78[11] +
               uVar12 + ((uVar8 * 0x2000 | uVar8 >> 0x13) ^ (uVar8 * 0x8000 | uVar8 >> 0x11) ^
                        uVar8 >> 10);
      iVar18 = ((uVar3 * 0x80 | uVar3 >> 0x19) ^
               (uVar3 >> 0xb | uVar3 * 0x200000) ^ (uVar3 >> 6 | uVar3 * 0x4000000)) +
               uVar13 + 0xbf597fc7 + uVar21 + ((uVar23 ^ uVar1) & uVar3 ^ uVar23);
      uVar7 = uVar7 + iVar18;
      uVar22 = ((uVar11 | uVar14) & uVar6 | uVar11 & uVar14) +
               ((uVar14 >> 0xd | uVar14 * 0x80000) ^ (uVar14 >> 2 | uVar14 * 0x40000000) ^
               (uVar14 * 0x400 | uVar14 >> 0x16)) + iVar18;
      uVar16 = ((local_78[13] << 0xe | local_78[13] >> 0x12) ^
                (local_78[13] >> 7 | local_78[13] << 0x19) ^ local_78[13] >> 3) + local_78[12] +
               uVar19 + ((uVar25 * 0x2000 | uVar25 >> 0x13) ^ (uVar25 * 0x8000 | uVar25 >> 0x11) ^
                        uVar25 >> 10);
      iVar18 = ((uVar7 * 0x80 | uVar7 >> 0x19) ^
               (uVar7 >> 0xb | uVar7 * 0x200000) ^ (uVar7 >> 6 | uVar7 * 0x4000000)) +
               uVar23 + 0xc6e00bf3 + uVar16 + ((uVar1 ^ uVar3) & uVar7 ^ uVar1);
      uVar6 = uVar6 + iVar18;
      uVar17 = ((uVar14 | uVar22) & uVar11 | uVar14 & uVar22) +
               ((uVar22 >> 0xd | uVar22 * 0x80000) ^ (uVar22 >> 2 | uVar22 * 0x40000000) ^
               (uVar22 * 0x400 | uVar22 >> 0x16)) + iVar18;
      uVar4 = ((local_78[14] << 0xe | local_78[14] >> 0x12) ^
               (local_78[14] >> 7 | local_78[14] << 0x19) ^ local_78[14] >> 3) + local_78[13] +
              uVar20 + ((uVar21 * 0x2000 | uVar21 >> 0x13) ^ (uVar21 * 0x8000 | uVar21 >> 0x11) ^
                       uVar21 >> 10);
      iVar18 = ((uVar6 * 0x80 | uVar6 >> 0x19) ^
               (uVar6 >> 0xb | uVar6 * 0x200000) ^ (uVar6 >> 6 | uVar6 * 0x4000000)) +
               uVar1 + 0xd5a79147 + uVar4 + ((uVar3 ^ uVar7) & uVar6 ^ uVar3);
      uVar11 = uVar11 + iVar18;
      uVar13 = ((uVar22 | uVar17) & uVar14 | uVar22 & uVar17) +
               ((uVar17 >> 0xd | uVar17 * 0x80000) ^ (uVar17 >> 2 | uVar17 * 0x40000000) ^
               (uVar17 * 0x400 | uVar17 >> 0x16)) + iVar18;
      uVar9 = ((local_78[15] << 0xe | local_78[15] >> 0x12) ^
               (local_78[15] >> 7 | local_78[15] << 0x19) ^ local_78[15] >> 3) + local_78[14] +
              uVar15 + ((uVar16 * 0x2000 | uVar16 >> 0x13) ^ (uVar16 * 0x8000 | uVar16 >> 0x11) ^
                       uVar16 >> 10);
      iVar18 = ((uVar11 * 0x80 | uVar11 >> 0x19) ^
               (uVar11 >> 0xb | uVar11 * 0x200000) ^ (uVar11 >> 6 | uVar11 * 0x4000000)) +
               ((uVar7 ^ uVar6) & uVar11 ^ uVar7) + uVar3 + 0x6ca6351 + uVar9;
      uVar14 = uVar14 + iVar18;
      uVar1 = ((uVar17 | uVar13) & uVar22 | uVar17 & uVar13) +
              ((uVar13 >> 0xd | uVar13 * 0x80000) ^ (uVar13 >> 2 | uVar13 * 0x40000000) ^
              (uVar13 * 0x400 | uVar13 >> 0x16)) + iVar18;
      uVar34 = ((uVar31 * 0x4000 | uVar31 >> 0x12) ^ (uVar31 >> 7 | uVar31 * 0x2000000) ^
               uVar31 >> 3) + local_78[15] + uVar30 +
               ((uVar4 * 0x2000 | uVar4 >> 0x13) ^ (uVar4 * 0x8000 | uVar4 >> 0x11) ^ uVar4 >> 10);
      iVar18 = ((uVar14 * 0x80 | uVar14 >> 0x19) ^
               (uVar14 >> 0xb | uVar14 * 0x200000) ^ (uVar14 >> 6 | uVar14 * 0x4000000)) +
               ((uVar6 ^ uVar11) & uVar14 ^ uVar6) + uVar7 + 0x14292967 + uVar34;
      uVar22 = uVar22 + iVar18;
      uVar23 = ((uVar13 | uVar1) & uVar17 | uVar13 & uVar1) +
               ((uVar1 >> 0xd | uVar1 * 0x80000) ^ (uVar1 >> 2 | uVar1 * 0x40000000) ^
               (uVar1 * 0x400 | uVar1 >> 0x16)) + iVar18;
      uVar32 = uVar31 + ((uVar27 * 0x4000 | uVar27 >> 0x12) ^ (uVar27 >> 7 | uVar27 * 0x2000000) ^
                        uVar27 >> 3) + uVar8 +
               ((uVar9 * 0x2000 | uVar9 >> 0x13) ^ (uVar9 * 0x8000 | uVar9 >> 0x11) ^ uVar9 >> 10);
      iVar18 = ((uVar22 * 0x80 | uVar22 >> 0x19) ^
               (uVar22 >> 0xb | uVar22 * 0x200000) ^ (uVar22 >> 6 | uVar22 * 0x4000000)) +
               ((uVar11 ^ uVar14) & uVar22 ^ uVar11) + uVar6 + 0x27b70a85 + uVar32;
      uVar17 = uVar17 + iVar18;
      uVar33 = ((uVar1 | uVar23) & uVar13 | uVar1 & uVar23) +
               ((uVar23 >> 0xd | uVar23 * 0x80000) ^ (uVar23 >> 2 | uVar23 * 0x40000000) ^
               (uVar23 * 0x400 | uVar23 >> 0x16)) + iVar18;
      uVar28 = uVar27 + ((uVar26 * 0x4000 | uVar26 >> 0x12) ^ (uVar26 >> 7 | uVar26 * 0x2000000) ^
                        uVar26 >> 3) + uVar25 +
               ((uVar34 * 0x2000 | uVar34 >> 0x13) ^ (uVar34 * 0x8000 | uVar34 >> 0x11) ^
               uVar34 >> 10);
      iVar18 = ((uVar17 * 0x80 | uVar17 >> 0x19) ^
               (uVar17 >> 0xb | uVar17 * 0x200000) ^ (uVar17 >> 6 | uVar17 * 0x4000000)) +
               uVar11 + 0x2e1b2138 + uVar28 + ((uVar14 ^ uVar22) & uVar17 ^ uVar14);
      uVar13 = uVar13 + iVar18;
      uVar29 = ((uVar23 | uVar33) & uVar1 | uVar23 & uVar33) +
               ((uVar33 >> 0xd | uVar33 * 0x80000) ^ (uVar33 >> 2 | uVar33 * 0x40000000) ^
               (uVar33 * 0x400 | uVar33 >> 0x16)) + iVar18;
      uVar31 = uVar26 + ((uVar24 * 0x4000 | uVar24 >> 0x12) ^ (uVar24 >> 7 | uVar24 * 0x2000000) ^
                        uVar24 >> 3) + uVar21 +
               ((uVar32 * 0x2000 | uVar32 >> 0x13) ^ (uVar32 * 0x8000 | uVar32 >> 0x11) ^
               uVar32 >> 10);
      iVar18 = ((uVar13 * 0x80 | uVar13 >> 0x19) ^
               (uVar13 >> 0xb | uVar13 * 0x200000) ^ (uVar13 >> 6 | uVar13 * 0x4000000)) +
               uVar14 + 0x4d2c6dfc + uVar31 + ((uVar22 ^ uVar17) & uVar13 ^ uVar22);
      uVar1 = uVar1 + iVar18;
      uVar6 = ((uVar33 | uVar29) & uVar23 | uVar33 & uVar29) +
              ((uVar29 >> 0xd | uVar29 * 0x80000) ^ (uVar29 >> 2 | uVar29 * 0x40000000) ^
              (uVar29 * 0x400 | uVar29 >> 0x16)) + iVar18;
      uVar26 = uVar24 + ((uVar12 * 0x4000 | uVar12 >> 0x12) ^ (uVar12 >> 7 | uVar12 * 0x2000000) ^
                        uVar12 >> 3) + uVar16 +
               ((uVar28 * 0x2000 | uVar28 >> 0x13) ^ (uVar28 * 0x8000 | uVar28 >> 0x11) ^
               uVar28 >> 10);
      iVar18 = ((uVar1 * 0x80 | uVar1 >> 0x19) ^
               (uVar1 >> 0xb | uVar1 * 0x200000) ^ (uVar1 >> 6 | uVar1 * 0x4000000)) +
               uVar22 + 0x53380d13 + uVar26 + ((uVar17 ^ uVar13) & uVar1 ^ uVar17);
      uVar23 = uVar23 + iVar18;
      uVar27 = ((uVar29 | uVar6) & uVar33 | uVar29 & uVar6) +
               ((uVar6 >> 0xd | uVar6 * 0x80000) ^ (uVar6 >> 2 | uVar6 * 0x40000000) ^
               (uVar6 * 0x400 | uVar6 >> 0x16)) + iVar18;
      uVar22 = ((uVar31 * 0x2000 | uVar31 >> 0x13) ^ (uVar31 * 0x8000 | uVar31 >> 0x11) ^
               uVar31 >> 10) +
               ((uVar19 * 0x4000 | uVar19 >> 0x12) ^ (uVar19 >> 7 | uVar19 * 0x2000000) ^
               uVar19 >> 3) + uVar12 + uVar4;
      iVar18 = ((uVar23 * 0x80 | uVar23 >> 0x19) ^
               (uVar23 >> 0xb | uVar23 * 0x200000) ^ (uVar23 >> 6 | uVar23 * 0x4000000)) +
               uVar17 + 0x650a7354 + uVar22 + ((uVar13 ^ uVar1) & uVar23 ^ uVar13);
      uVar33 = uVar33 + iVar18;
      uVar17 = ((uVar6 | uVar27) & uVar29 | uVar6 & uVar27) +
               ((uVar27 >> 0xd | uVar27 * 0x80000) ^ (uVar27 >> 2 | uVar27 * 0x40000000) ^
               (uVar27 * 0x400 | uVar27 >> 0x16)) + iVar18;
      uVar24 = ((uVar26 * 0x2000 | uVar26 >> 0x13) ^ (uVar26 * 0x8000 | uVar26 >> 0x11) ^
               uVar26 >> 10) +
               ((uVar20 * 0x4000 | uVar20 >> 0x12) ^ (uVar20 >> 7 | uVar20 * 0x2000000) ^
               uVar20 >> 3) + uVar19 + uVar9;
      iVar18 = ((uVar33 * 0x80 | uVar33 >> 0x19) ^
               (uVar33 >> 0xb | uVar33 * 0x200000) ^ (uVar33 >> 6 | uVar33 * 0x4000000)) +
               uVar13 + 0x766a0abb + uVar24 + ((uVar1 ^ uVar23) & uVar33 ^ uVar1);
      uVar29 = uVar29 + iVar18;
      uVar35 = ((uVar27 | uVar17) & uVar6 | uVar27 & uVar17) +
               ((uVar17 >> 0xd | uVar17 * 0x80000) ^ (uVar17 >> 2 | uVar17 * 0x40000000) ^
               (uVar17 * 0x400 | uVar17 >> 0x16)) + iVar18;
      uVar3 = ((uVar22 * 0x2000 | uVar22 >> 0x13) ^ (uVar22 * 0x8000 | uVar22 >> 0x11) ^
              uVar22 >> 10) +
              ((uVar15 * 0x4000 | uVar15 >> 0x12) ^ (uVar15 >> 7 | uVar15 * 0x2000000) ^ uVar15 >> 3
              ) + uVar20 + uVar34;
      iVar18 = ((uVar29 * 0x80 | uVar29 >> 0x19) ^
               (uVar29 >> 0xb | uVar29 * 0x200000) ^ (uVar29 >> 6 | uVar29 * 0x4000000)) +
               uVar1 + 0x81c2c92e + uVar3 + ((uVar23 ^ uVar33) & uVar29 ^ uVar23);
      uVar6 = uVar6 + iVar18;
      uVar7 = ((uVar17 | uVar35) & uVar27 | uVar17 & uVar35) +
              ((uVar35 >> 0xd | uVar35 * 0x80000) ^ (uVar35 >> 2 | uVar35 * 0x40000000) ^
              (uVar35 * 0x400 | uVar35 >> 0x16)) + iVar18;
      uVar13 = ((uVar24 * 0x2000 | uVar24 >> 0x13) ^ (uVar24 * 0x8000 | uVar24 >> 0x11) ^
               uVar24 >> 10) +
               ((uVar30 * 0x4000 | uVar30 >> 0x12) ^ (uVar30 >> 7 | uVar30 * 0x2000000) ^
               uVar30 >> 3) + uVar15 + uVar32;
      iVar18 = ((uVar6 * 0x80 | uVar6 >> 0x19) ^
               (uVar6 >> 0xb | uVar6 * 0x200000) ^ (uVar6 >> 6 | uVar6 * 0x4000000)) +
               ((uVar33 ^ uVar29) & uVar6 ^ uVar33) + uVar23 + 0x92722c85 + uVar13;
      uVar27 = uVar27 + iVar18;
      uVar11 = ((uVar35 | uVar7) & uVar17 | uVar35 & uVar7) +
               ((uVar7 >> 0xd | uVar7 * 0x80000) ^ (uVar7 >> 2 | uVar7 * 0x40000000) ^
               (uVar7 * 0x400 | uVar7 >> 0x16)) + iVar18;
      uVar20 = ((uVar3 * 0x2000 | uVar3 >> 0x13) ^ (uVar3 * 0x8000 | uVar3 >> 0x11) ^ uVar3 >> 10) +
               ((uVar8 * 0x4000 | uVar8 >> 0x12) ^ (uVar8 >> 7 | uVar8 * 0x2000000) ^ uVar8 >> 3) +
               uVar30 + uVar28;
      iVar18 = ((uVar27 * 0x80 | uVar27 >> 0x19) ^
               (uVar27 >> 0xb | uVar27 * 0x200000) ^ (uVar27 >> 6 | uVar27 * 0x4000000)) +
               uVar33 + 0xa2bfe8a1 + uVar20 + ((uVar29 ^ uVar6) & uVar27 ^ uVar29);
      uVar17 = uVar17 + iVar18;
      uVar14 = ((uVar7 | uVar11) & uVar35 | uVar7 & uVar11) +
               ((uVar11 >> 0xd | uVar11 * 0x80000) ^ (uVar11 >> 2 | uVar11 * 0x40000000) ^
               (uVar11 * 0x400 | uVar11 >> 0x16)) + iVar18;
      uVar12 = ((uVar25 * 0x4000 | uVar25 >> 0x12) ^ (uVar25 >> 7 | uVar25 * 0x2000000) ^
               uVar25 >> 3) + uVar8 + uVar31 +
               ((uVar13 * 0x2000 | uVar13 >> 0x13) ^ (uVar13 * 0x8000 | uVar13 >> 0x11) ^
               uVar13 >> 10);
      iVar18 = ((uVar17 * 0x80 | uVar17 >> 0x19) ^
               (uVar17 >> 0xb | uVar17 * 0x200000) ^ (uVar17 >> 6 | uVar17 * 0x4000000)) +
               uVar29 + 0xa81a664b + uVar12 + ((uVar6 ^ uVar27) & uVar17 ^ uVar6);
      uVar35 = uVar35 + iVar18;
      uVar23 = ((uVar11 | uVar14) & uVar7 | uVar11 & uVar14) +
               ((uVar14 >> 0xd | uVar14 * 0x80000) ^ (uVar14 >> 2 | uVar14 * 0x40000000) ^
               (uVar14 * 0x400 | uVar14 >> 0x16)) + iVar18;
      uVar1 = ((uVar20 * 0x2000 | uVar20 >> 0x13) ^ (uVar20 * 0x8000 | uVar20 >> 0x11) ^
              uVar20 >> 10) +
              ((uVar21 * 0x4000 | uVar21 >> 0x12) ^ (uVar21 >> 7 | uVar21 * 0x2000000) ^ uVar21 >> 3
              ) + uVar25 + uVar26;
      iVar18 = ((uVar35 * 0x80 | uVar35 >> 0x19) ^
               (uVar35 >> 0xb | uVar35 * 0x200000) ^ (uVar35 >> 6 | uVar35 * 0x4000000)) +
               uVar6 + 0xc24b8b70 + uVar1 + ((uVar27 ^ uVar17) & uVar35 ^ uVar27);
      uVar7 = uVar7 + iVar18;
      uVar30 = ((uVar14 | uVar23) & uVar11 | uVar14 & uVar23) +
               ((uVar23 >> 0xd | uVar23 * 0x80000) ^ (uVar23 >> 2 | uVar23 * 0x40000000) ^
               (uVar23 * 0x400 | uVar23 >> 0x16)) + iVar18;
      uVar6 = ((uVar12 * 0x2000 | uVar12 >> 0x13) ^ (uVar12 * 0x8000 | uVar12 >> 0x11) ^
              uVar12 >> 10) +
              ((uVar16 * 0x4000 | uVar16 >> 0x12) ^ (uVar16 >> 7 | uVar16 * 0x2000000) ^ uVar16 >> 3
              ) + uVar21 + uVar22;
      iVar18 = ((uVar7 * 0x80 | uVar7 >> 0x19) ^
               (uVar7 >> 0xb | uVar7 * 0x200000) ^ (uVar7 >> 6 | uVar7 * 0x4000000)) +
               uVar27 + 0xc76c51a3 + uVar6 + ((uVar17 ^ uVar35) & uVar7 ^ uVar17);
      uVar11 = uVar11 + iVar18;
      uVar15 = ((uVar23 | uVar30) & uVar14 | uVar23 & uVar30) +
               ((uVar30 >> 0xd | uVar30 * 0x80000) ^ (uVar30 >> 2 | uVar30 * 0x40000000) ^
               (uVar30 * 0x400 | uVar30 >> 0x16)) + iVar18;
      uVar16 = ((uVar1 * 0x2000 | uVar1 >> 0x13) ^ (uVar1 * 0x8000 | uVar1 >> 0x11) ^ uVar1 >> 10) +
               ((uVar4 * 0x4000 | uVar4 >> 0x12) ^ (uVar4 >> 7 | uVar4 * 0x2000000) ^ uVar4 >> 3) +
               uVar16 + uVar24;
      iVar18 = ((uVar11 * 0x80 | uVar11 >> 0x19) ^
               (uVar11 >> 0xb | uVar11 * 0x200000) ^ (uVar11 >> 6 | uVar11 * 0x4000000)) +
               uVar17 + 0xd192e819 + uVar16 + ((uVar35 ^ uVar7) & uVar11 ^ uVar35);
      uVar14 = uVar14 + iVar18;
      uVar8 = ((uVar30 | uVar15) & uVar23 | uVar30 & uVar15) +
              ((uVar15 >> 0xd | uVar15 * 0x80000) ^ (uVar15 >> 2 | uVar15 * 0x40000000) ^
              (uVar15 * 0x400 | uVar15 >> 0x16)) + iVar18;
      uVar19 = ((uVar6 * 0x2000 | uVar6 >> 0x13) ^ (uVar6 * 0x8000 | uVar6 >> 0x11) ^ uVar6 >> 10) +
               ((uVar9 * 0x4000 | uVar9 >> 0x12) ^ (uVar9 >> 7 | uVar9 * 0x2000000) ^ uVar9 >> 3) +
               uVar4 + uVar3;
      iVar18 = ((uVar14 * 0x80 | uVar14 >> 0x19) ^
               (uVar14 >> 0xb | uVar14 * 0x200000) ^ (uVar14 >> 6 | uVar14 * 0x4000000)) +
               uVar35 + 0xd6990624 + uVar19 + ((uVar7 ^ uVar11) & uVar14 ^ uVar7);
      uVar23 = uVar23 + iVar18;
      uVar21 = ((uVar15 | uVar8) & uVar30 | uVar15 & uVar8) +
               ((uVar8 >> 0xd | uVar8 * 0x80000) ^ (uVar8 >> 2 | uVar8 * 0x40000000) ^
               (uVar8 * 0x400 | uVar8 >> 0x16)) + iVar18;
      uVar25 = ((uVar16 * 0x2000 | uVar16 >> 0x13) ^ (uVar16 * 0x8000 | uVar16 >> 0x11) ^
               uVar16 >> 10) +
               ((uVar34 * 0x4000 | uVar34 >> 0x12) ^ (uVar34 >> 7 | uVar34 * 0x2000000) ^
               uVar34 >> 3) + uVar9 + uVar13;
      iVar18 = ((uVar23 * 0x80 | uVar23 >> 0x19) ^
               (uVar23 >> 0xb | uVar23 * 0x200000) ^ (uVar23 >> 6 | uVar23 * 0x4000000)) +
               uVar7 + 0xf40e3585 + uVar25 + ((uVar11 ^ uVar14) & uVar23 ^ uVar11);
      uVar30 = uVar30 + iVar18;
      uVar27 = ((uVar8 | uVar21) & uVar15 | uVar8 & uVar21) +
               ((uVar21 >> 0xd | uVar21 * 0x80000) ^ (uVar21 >> 2 | uVar21 * 0x40000000) ^
               (uVar21 * 0x400 | uVar21 >> 0x16)) + iVar18;
      uVar4 = ((uVar19 * 0x2000 | uVar19 >> 0x13) ^ (uVar19 * 0x8000 | uVar19 >> 0x11) ^
              uVar19 >> 10) +
              ((uVar32 * 0x4000 | uVar32 >> 0x12) ^ (uVar32 >> 7 | uVar32 * 0x2000000) ^ uVar32 >> 3
              ) + uVar34 + uVar20;
      iVar18 = ((uVar30 * 0x80 | uVar30 >> 0x19) ^
               (uVar30 >> 0xb | uVar30 * 0x200000) ^ (uVar30 >> 6 | uVar30 * 0x4000000)) +
               uVar11 + 0x106aa070 + uVar4 + ((uVar14 ^ uVar23) & uVar30 ^ uVar14);
      uVar15 = uVar15 + iVar18;
      uVar7 = ((uVar21 | uVar27) & uVar8 | uVar21 & uVar27) +
              ((uVar27 >> 0xd | uVar27 * 0x80000) ^ (uVar27 >> 2 | uVar27 * 0x40000000) ^
              (uVar27 * 0x400 | uVar27 >> 0x16)) + iVar18;
      local_78[0] = ((uVar25 * 0x2000 | uVar25 >> 0x13) ^ (uVar25 * 0x8000 | uVar25 >> 0x11) ^
                    uVar25 >> 10) +
                    ((uVar28 * 0x4000 | uVar28 >> 0x12) ^ (uVar28 >> 7 | uVar28 * 0x2000000) ^
                    uVar28 >> 3) + uVar32 + uVar12;
      iVar18 = ((uVar15 * 0x80 | uVar15 >> 0x19) ^
               (uVar15 >> 0xb | uVar15 * 0x200000) ^ (uVar15 >> 6 | uVar15 * 0x4000000)) +
               uVar14 + 0x19a4c116 + local_78[0] + ((uVar23 ^ uVar30) & uVar15 ^ uVar23);
      uVar8 = uVar8 + iVar18;
      uVar17 = ((uVar27 | uVar7) & uVar21 | uVar27 & uVar7) +
               ((uVar7 >> 0xd | uVar7 * 0x80000) ^ (uVar7 >> 2 | uVar7 * 0x40000000) ^
               (uVar7 * 0x400 | uVar7 >> 0x16)) + iVar18;
      local_78[1] = ((uVar4 * 0x2000 | uVar4 >> 0x13) ^ (uVar4 * 0x8000 | uVar4 >> 0x11) ^
                    uVar4 >> 10) +
                    ((uVar31 * 0x4000 | uVar31 >> 0x12) ^ (uVar31 >> 7 | uVar31 * 0x2000000) ^
                    uVar31 >> 3) + uVar28 + uVar1;
      iVar18 = ((uVar8 * 0x80 | uVar8 >> 0x19) ^
               (uVar8 >> 0xb | uVar8 * 0x200000) ^ (uVar8 >> 6 | uVar8 * 0x4000000)) +
               uVar23 + 0x1e376c08 + local_78[1] + ((uVar30 ^ uVar15) & uVar8 ^ uVar30);
      uVar21 = uVar21 + iVar18;
      uVar9 = ((uVar7 | uVar17) & uVar27 | uVar7 & uVar17) +
              ((uVar17 >> 0xd | uVar17 * 0x80000) ^ (uVar17 >> 2 | uVar17 * 0x40000000) ^
              (uVar17 * 0x400 | uVar17 >> 0x16)) + iVar18;
      local_78[2] = ((local_78[0] * 0x2000 | local_78[0] >> 0x13) ^
                     (local_78[0] * 0x8000 | local_78[0] >> 0x11) ^ local_78[0] >> 10) +
                    ((uVar26 * 0x4000 | uVar26 >> 0x12) ^ (uVar26 >> 7 | uVar26 * 0x2000000) ^
                    uVar26 >> 3) + uVar31 + uVar6;
      iVar18 = ((uVar21 * 0x80 | uVar21 >> 0x19) ^
               (uVar21 >> 0xb | uVar21 * 0x200000) ^ (uVar21 >> 6 | uVar21 * 0x4000000)) +
               ((uVar15 ^ uVar8) & uVar21 ^ uVar15) + uVar30 + 0x2748774c + local_78[2];
      uVar27 = uVar27 + iVar18;
      uVar34 = ((uVar17 | uVar9) & uVar7 | uVar17 & uVar9) +
               ((uVar9 >> 0xd | uVar9 * 0x80000) ^ (uVar9 >> 2 | uVar9 * 0x40000000) ^
               (uVar9 * 0x400 | uVar9 >> 0x16)) + iVar18;
      local_78[3] = ((local_78[1] * 0x2000 | local_78[1] >> 0x13) ^
                     (local_78[1] * 0x8000 | local_78[1] >> 0x11) ^ local_78[1] >> 10) +
                    ((uVar22 * 0x4000 | uVar22 >> 0x12) ^ (uVar22 >> 7 | uVar22 * 0x2000000) ^
                    uVar22 >> 3) + uVar26 + uVar16;
      iVar18 = ((uVar27 * 0x80 | uVar27 >> 0x19) ^
               (uVar27 >> 0xb | uVar27 * 0x200000) ^ (uVar27 >> 6 | uVar27 * 0x4000000)) +
               ((uVar8 ^ uVar21) & uVar27 ^ uVar8) + uVar15 + 0x34b0bcb5 + local_78[3];
      uVar7 = uVar7 + iVar18;
      uVar30 = ((uVar9 | uVar34) & uVar17 | uVar9 & uVar34) +
               ((uVar34 >> 0xd | uVar34 * 0x80000) ^ (uVar34 >> 2 | uVar34 * 0x40000000) ^
               (uVar34 * 0x400 | uVar34 >> 0x16)) + iVar18;
      local_78[4] = ((local_78[2] * 0x2000 | local_78[2] >> 0x13) ^
                     (local_78[2] * 0x8000 | local_78[2] >> 0x11) ^ local_78[2] >> 10) +
                    ((uVar24 * 0x4000 | uVar24 >> 0x12) ^ (uVar24 >> 7 | uVar24 * 0x2000000) ^
                    uVar24 >> 3) + uVar22 + uVar19;
      iVar18 = ((uVar7 * 0x80 | uVar7 >> 0x19) ^
               (uVar7 >> 0xb | uVar7 * 0x200000) ^ (uVar7 >> 6 | uVar7 * 0x4000000)) +
               uVar8 + 0x391c0cb3 + local_78[4] + ((uVar21 ^ uVar27) & uVar7 ^ uVar21);
      uVar17 = uVar17 + iVar18;
      uVar23 = ((uVar34 | uVar30) & uVar9 | uVar34 & uVar30) +
               ((uVar30 >> 0xd | uVar30 * 0x80000) ^ (uVar30 >> 2 | uVar30 * 0x40000000) ^
               (uVar30 * 0x400 | uVar30 >> 0x16)) + iVar18;
      local_78[5] = ((local_78[3] * 0x2000 | local_78[3] >> 0x13) ^
                     (local_78[3] * 0x8000 | local_78[3] >> 0x11) ^ local_78[3] >> 10) +
                    ((uVar3 * 0x4000 | uVar3 >> 0x12) ^ (uVar3 >> 7 | uVar3 * 0x2000000) ^
                    uVar3 >> 3) + uVar24 + uVar25;
      iVar18 = ((uVar17 * 0x80 | uVar17 >> 0x19) ^
               (uVar17 >> 0xb | uVar17 * 0x200000) ^ (uVar17 >> 6 | uVar17 * 0x4000000)) +
               uVar21 + 0x4ed8aa4a + local_78[5] + ((uVar27 ^ uVar7) & uVar17 ^ uVar27);
      uVar9 = uVar9 + iVar18;
      uVar11 = ((uVar30 | uVar23) & uVar34 | uVar30 & uVar23) +
               ((uVar23 >> 0xd | uVar23 * 0x80000) ^ (uVar23 >> 2 | uVar23 * 0x40000000) ^
               (uVar23 * 0x400 | uVar23 >> 0x16)) + iVar18;
      local_78[6] = ((uVar13 * 0x4000 | uVar13 >> 0x12) ^ (uVar13 >> 7 | uVar13 * 0x2000000) ^
                    uVar13 >> 3) + uVar3 + uVar4 +
                    ((local_78[4] * 0x2000 | local_78[4] >> 0x13) ^
                     (local_78[4] * 0x8000 | local_78[4] >> 0x11) ^ local_78[4] >> 10);
      iVar18 = ((uVar9 * 0x80 | uVar9 >> 0x19) ^
               (uVar9 >> 0xb | uVar9 * 0x200000) ^ (uVar9 >> 6 | uVar9 * 0x4000000)) +
               uVar27 + 0x5b9cca4f + local_78[6] + ((uVar7 ^ uVar17) & uVar9 ^ uVar7);
      uVar34 = uVar34 + iVar18;
      uVar14 = ((uVar23 | uVar11) & uVar30 | uVar23 & uVar11) +
               ((uVar11 >> 0xd | uVar11 * 0x80000) ^ (uVar11 >> 2 | uVar11 * 0x40000000) ^
               (uVar11 * 0x400 | uVar11 >> 0x16)) + iVar18;
      local_78[7] = ((local_78[5] * 0x2000 | local_78[5] >> 0x13) ^
                     (local_78[5] * 0x8000 | local_78[5] >> 0x11) ^ local_78[5] >> 10) +
                    ((uVar20 * 0x4000 | uVar20 >> 0x12) ^ (uVar20 >> 7 | uVar20 * 0x2000000) ^
                    uVar20 >> 3) + uVar13 + local_78[0];
      iVar18 = ((uVar34 * 0x80 | uVar34 >> 0x19) ^
               (uVar34 >> 0xb | uVar34 * 0x200000) ^ (uVar34 >> 6 | uVar34 * 0x4000000)) +
               uVar7 + 0x682e6ff3 + local_78[7] + ((uVar17 ^ uVar9) & uVar34 ^ uVar17);
      uVar30 = uVar30 + iVar18;
      uVar3 = ((uVar11 | uVar14) & uVar23 | uVar11 & uVar14) +
              ((uVar14 >> 0xd | uVar14 * 0x80000) ^ (uVar14 >> 2 | uVar14 * 0x40000000) ^
              (uVar14 * 0x400 | uVar14 >> 0x16)) + iVar18;
      local_78[8] = ((local_78[6] * 0x2000 | local_78[6] >> 0x13) ^
                     (local_78[6] * 0x8000 | local_78[6] >> 0x11) ^ local_78[6] >> 10) +
                    local_78[1] +
                    ((uVar12 * 0x4000 | uVar12 >> 0x12) ^ (uVar12 >> 7 | uVar12 * 0x2000000) ^
                    uVar12 >> 3) + uVar20;
      iVar18 = ((uVar30 * 0x80 | uVar30 >> 0x19) ^
               (uVar30 >> 0xb | uVar30 * 0x200000) ^ (uVar30 >> 6 | uVar30 * 0x4000000)) +
               uVar17 + 0x748f82ee + local_78[8] + ((uVar9 ^ uVar34) & uVar30 ^ uVar9);
      uVar23 = uVar23 + iVar18;
      uVar8 = ((uVar14 | uVar3) & uVar11 | uVar14 & uVar3) +
              ((uVar3 >> 0xd | uVar3 * 0x80000) ^ (uVar3 >> 2 | uVar3 * 0x40000000) ^
              (uVar3 * 0x400 | uVar3 >> 0x16)) + iVar18;
      local_78[9] = local_78[2] +
                    ((uVar1 * 0x4000 | uVar1 >> 0x12) ^ (uVar1 >> 7 | uVar1 * 0x2000000) ^
                    uVar1 >> 3) + uVar12 +
                    ((local_78[7] * 0x2000 | local_78[7] >> 0x13) ^
                     (local_78[7] * 0x8000 | local_78[7] >> 0x11) ^ local_78[7] >> 10);
      iVar18 = ((uVar23 * 0x80 | uVar23 >> 0x19) ^
               (uVar23 >> 0xb | uVar23 * 0x200000) ^ (uVar23 >> 6 | uVar23 * 0x4000000)) +
               uVar9 + 0x78a5636f + local_78[9] + ((uVar34 ^ uVar30) & uVar23 ^ uVar34);
      uVar11 = uVar11 + iVar18;
      uVar13 = ((uVar3 | uVar8) & uVar14 | uVar3 & uVar8) +
               ((uVar8 >> 0xd | uVar8 * 0x80000) ^ (uVar8 >> 2 | uVar8 * 0x40000000) ^
               (uVar8 * 0x400 | uVar8 >> 0x16)) + iVar18;
      local_78[10] = local_78[3] +
                     ((uVar6 * 0x4000 | uVar6 >> 0x12) ^ (uVar6 >> 7 | uVar6 * 0x2000000) ^
                     uVar6 >> 3) + uVar1 +
                     ((local_78[8] * 0x2000 | local_78[8] >> 0x13) ^
                      (local_78[8] * 0x8000 | local_78[8] >> 0x11) ^ local_78[8] >> 10);
      iVar18 = ((uVar11 >> 0xb | uVar11 * 0x200000) ^ (uVar11 >> 6 | uVar11 * 0x4000000) ^
               (uVar11 * 0x80 | uVar11 >> 0x19)) +
               uVar34 + 0x84c87814 + local_78[10] + ((uVar30 ^ uVar23) & uVar11 ^ uVar30);
      uVar14 = uVar14 + iVar18;
      uVar34 = iVar18 + ((uVar8 | uVar13) & uVar3 | uVar8 & uVar13) +
                        ((uVar13 >> 0xd | uVar13 * 0x80000) ^ (uVar13 >> 2 | uVar13 * 0x40000000) ^
                        (uVar13 * 0x400 | uVar13 >> 0x16));
      local_78[11] = local_78[4] +
                     ((uVar16 * 0x4000 | uVar16 >> 0x12) ^ (uVar16 >> 7 | uVar16 * 0x2000000) ^
                     uVar16 >> 3) + uVar6 +
                     (local_78[9] >> 10 ^
                     (local_78[9] * 0x2000 | local_78[9] >> 0x13) ^
                     (local_78[9] * 0x8000 | local_78[9] >> 0x11));
      iVar18 = ((uVar14 >> 0xb | uVar14 * 0x200000) ^ (uVar14 >> 6 | uVar14 * 0x4000000) ^
               (uVar14 * 0x80 | uVar14 >> 0x19)) +
               uVar30 + 0x8cc70208 + local_78[11] + ((uVar23 ^ uVar11) & uVar14 ^ uVar23);
      uVar3 = uVar3 + iVar18;
      uVar6 = iVar18 + ((uVar13 | uVar34) & uVar8 | uVar13 & uVar34) +
                       ((uVar34 >> 0xd | uVar34 * 0x80000) ^ (uVar34 >> 2 | uVar34 * 0x40000000) ^
                       (uVar34 * 0x400 | uVar34 >> 0x16));
      local_78[12] = ((uVar19 * 0x4000 | uVar19 >> 0x12) ^ (uVar19 >> 7 | uVar19 * 0x2000000) ^
                     uVar19 >> 3) + uVar16 + local_78[5] +
                     (local_78[10] >> 10 ^
                     (local_78[10] * 0x2000 | local_78[10] >> 0x13) ^
                     (local_78[10] * 0x8000 | local_78[10] >> 0x11));
      iVar18 = ((uVar3 >> 0xb | uVar3 * 0x200000) ^ (uVar3 >> 6 | uVar3 * 0x4000000) ^
               (uVar3 * 0x80 | uVar3 >> 0x19)) +
               uVar23 + 0x90befffa + local_78[12] + ((uVar11 ^ uVar14) & uVar3 ^ uVar11);
      uVar8 = uVar8 + iVar18;
      uVar7 = iVar18 + ((uVar34 | uVar6) & uVar13 | uVar34 & uVar6) +
                       ((uVar6 >> 0xd | uVar6 * 0x80000) ^ (uVar6 >> 2 | uVar6 * 0x40000000) ^
                       (uVar6 * 0x400 | uVar6 >> 0x16));
      local_78[13] = ((uVar25 * 0x4000 | uVar25 >> 0x12) ^ (uVar25 >> 7 | uVar25 * 0x2000000) ^
                     uVar25 >> 3) + uVar19 + local_78[6] +
                     (local_78[11] >> 10 ^
                     (local_78[11] * 0x2000 | local_78[11] >> 0x13) ^
                     (local_78[11] * 0x8000 | local_78[11] >> 0x11));
      iVar18 = ((uVar8 >> 0xb | uVar8 * 0x200000) ^ (uVar8 >> 6 | uVar8 * 0x4000000) ^
               (uVar8 * 0x80 | uVar8 >> 0x19)) +
               uVar11 + 0xa4506ceb + local_78[13] + ((uVar14 ^ uVar3) & uVar8 ^ uVar14);
      uVar13 = uVar13 + iVar18;
      uVar11 = iVar18 + ((uVar6 | uVar7) & uVar34 | uVar6 & uVar7) +
                        ((uVar7 >> 0xd | uVar7 * 0x80000) ^ (uVar7 >> 2 | uVar7 * 0x40000000) ^
                        (uVar7 * 0x400 | uVar7 >> 0x16));
      local_78[14] = (local_78[12] >> 10 ^
                     (local_78[12] * 0x2000 | local_78[12] >> 0x13) ^
                     (local_78[12] * 0x8000 | local_78[12] >> 0x11)) +
                     ((uVar4 * 0x4000 | uVar4 >> 0x12) ^ (uVar4 >> 7 | uVar4 * 0x2000000) ^
                     uVar4 >> 3) + uVar25 + local_78[7];
      iVar18 = ((uVar13 >> 0xb | uVar13 * 0x200000) ^ (uVar13 >> 6 | uVar13 * 0x4000000) ^
               (uVar13 * 0x80 | uVar13 >> 0x19)) +
               uVar14 + 0xbef9a3f7 + local_78[14] + ((uVar3 ^ uVar8) & uVar13 ^ uVar3);
      uVar34 = uVar34 + iVar18;
      uVar1 = iVar18 + ((uVar7 | uVar11) & uVar6 | uVar7 & uVar11) +
                       ((uVar11 >> 0xd | uVar11 * 0x80000) ^ (uVar11 >> 2 | uVar11 * 0x40000000) ^
                       (uVar11 * 0x400 | uVar11 >> 0x16));
      local_78[15] = (local_78[13] >> 10 ^
                     (local_78[13] * 0x2000 | local_78[13] >> 0x13) ^
                     (local_78[13] * 0x8000 | local_78[13] >> 0x11)) +
                     ((local_78[0] * 0x4000 | local_78[0] >> 0x12) ^
                      (local_78[0] >> 7 | local_78[0] * 0x2000000) ^ local_78[0] >> 3) + uVar4 +
                     local_78[8];
      local_b4 = local_b4 + uVar1;
      local_ac = local_ac + uVar7;
      local_b0 = local_b0 + uVar11;
      local_a4 = local_a4 + uVar34;
      local_a0 = local_a0 + uVar13;
      iVar18 = ((uVar34 >> 0xb | uVar34 * 0x200000) ^ (uVar34 >> 6 | uVar34 * 0x4000000) ^
               (uVar34 * 0x80 | uVar34 >> 0x19)) +
               ((uVar8 ^ uVar13) & uVar34 ^ uVar8) + uVar3 + 0xc67178f2 + local_78[15];
      local_a8 = local_a8 + uVar6 + iVar18;
      uVar10 = ((uVar1 >> 0xd | uVar1 * 0x80000) ^ (uVar1 >> 2 | uVar1 * 0x40000000) ^
               (uVar1 * 0x400 | uVar1 >> 0x16)) + ((uVar11 | uVar1) & uVar7 | uVar11 & uVar1) +
               uVar10 + iVar18;
      *param_3 = uVar10;
      param_3[1] = local_b4;
      param_3[2] = local_b0;
      param_3[3] = local_ac;
      param_3[5] = local_a4;
      param_3[4] = local_a8;
      param_3[6] = local_a0;
      local_9c = local_9c + uVar8;
      param_3[7] = local_9c;
    } while (local_c0 < uVar2);
  }
  return;
}


void FUN_00405990(long param_1)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  
  uVar1 = *(ulong *)(param_1 + 0x28);
  iVar3 = *(int *)(param_1 + 0x24);
  lVar5 = (-(ulong)(uVar1 < 0x38) & 0xffffffffffffffc0) + 0x80;
  uVar2 = *(int *)(param_1 + 0x20) + (int)uVar1;
  *(uint *)(param_1 + 0x20) = uVar2;
  if (uVar2 < uVar1) {
    iVar3 = iVar3 + 1;
    *(int *)(param_1 + 0x24) = iVar3;
  }
  uVar4 = iVar3 << 3;
  *(uint *)(param_1 + 0x30 + ((-(ulong)(uVar1 < 0x38) & 0xfffffffffffffff0) + 0x1e) * 4) =
       uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
       (uVar4 | uVar2 >> 0x1d) << 0x18;
  *(uint *)(param_1 + 0x30 + ((-(ulong)(uVar1 < 0x38) & 0xfffffffffffffff0) + 0x1f) * 4) =
       (uVar2 & 0x1fe0) << 0xb | uVar2 * 8 >> 0x18 | uVar2 * 0x8000000 | uVar2 * 8 >> 8 & 0xff00;
  memcpy((void *)(param_1 + 0x30 + uVar1),&DAT_0040ab80,(lVar5 - uVar1) - 8);
  FUN_00403200(param_1 + 0x30,lVar5,param_1);
  return;
}


void FUN_00405a60(undefined8 param_1,undefined8 param_2)

{
  FUN_00405990();
  FUN_004031c0(param_1,param_2);
  return;
}


void FUN_00405a90(undefined8 param_1,undefined8 param_2)

{
  FUN_00405990();
  FUN_004031e0(param_1,param_2);
  return;
}


void FUN_00405ac0(undefined8 *param_1,ulong param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  undefined8 *puVar8;
  void *__dest;
  ulong uVar9;
  ulong uVar10;
  
  lVar2 = *(long *)(param_3 + 0x28);
  if (lVar2 != 0) {
    lVar7 = param_3 + 0x30;
    uVar4 = 0x80U - lVar2;
    if (param_2 < 0x80U - lVar2) {
      uVar4 = param_2;
    }
    memcpy((void *)(lVar7 + lVar2),param_1,uVar4);
    uVar9 = *(long *)(param_3 + 0x28) + uVar4;
    *(ulong *)(param_3 + 0x28) = uVar9;
    if (0x40 < uVar9) {
      FUN_00403200(lVar7,uVar9 & 0xffffffffffffffc0,param_3);
      uVar9 = *(ulong *)(param_3 + 0x28);
      puVar8 = (undefined8 *)(lVar7 + (lVar2 + uVar4 & 0xffffffffffffffc0));
      uVar6 = (uint)uVar9 & 0x3f;
      *(ulong *)(param_3 + 0x28) = (ulong)uVar6;
      if (uVar6 < 8) {
        if ((uVar9 & 4) == 0) {
          if (((uVar9 & 0x3f) != 0) &&
             (*(undefined *)(param_3 + 0x30) = *(undefined *)puVar8, (uVar9 & 2) != 0)) {
            *(undefined2 *)(param_3 + 0x2e + (ulong)uVar6) =
                 *(undefined2 *)((long)puVar8 + ((ulong)uVar6 - 2));
          }
        }
        else {
          *(undefined4 *)(param_3 + 0x30) = *(undefined4 *)puVar8;
          *(undefined4 *)(param_3 + 0x2c + (ulong)uVar6) =
               *(undefined4 *)((long)puVar8 + ((ulong)uVar6 - 4));
        }
      }
      else {
        uVar9 = param_3 + 0x38U & 0xfffffffffffffff8;
        *(undefined8 *)(param_3 + 0x30) = *puVar8;
        *(undefined8 *)(param_3 + 0x28 + (ulong)uVar6) =
             *(undefined8 *)((long)puVar8 + ((ulong)uVar6 - 8));
        lVar7 = lVar7 - uVar9;
        uVar6 = (int)lVar7 + uVar6 & 0xfffffff8;
        if (7 < uVar6) {
          uVar5 = 0;
          do {
            uVar10 = (ulong)uVar5;
            uVar5 = uVar5 + 8;
            *(undefined8 *)(uVar9 + uVar10) = *(undefined8 *)((long)puVar8 + (uVar10 - lVar7));
          } while (uVar5 < uVar6);
        }
      }
    }
    param_1 = (undefined8 *)((long)param_1 + uVar4);
    param_2 = param_2 - uVar4;
  }
  puVar8 = param_1;
  if (0x3f < param_2) {
    if (((ulong)param_1 & 3) != 0) {
      if (param_2 != 0x40) {
        uVar4 = param_2 - 0x41 >> 6;
        do {
          uVar3 = param_1[1];
          puVar8 = param_1 + 8;
          *(undefined8 *)(param_3 + 0x30) = *param_1;
          *(undefined8 *)(param_3 + 0x38) = uVar3;
          uVar3 = param_1[3];
          *(undefined8 *)(param_3 + 0x40) = param_1[2];
          *(undefined8 *)(param_3 + 0x48) = uVar3;
          uVar3 = param_1[5];
          *(undefined8 *)(param_3 + 0x50) = param_1[4];
          *(undefined8 *)(param_3 + 0x58) = uVar3;
          uVar3 = param_1[7];
          *(undefined8 *)(param_3 + 0x60) = param_1[6];
          *(undefined8 *)(param_3 + 0x68) = uVar3;
          FUN_00403200((undefined8 *)(param_3 + 0x30),0x40,param_3);
          param_1 = puVar8;
        } while (puVar8 != param_1 + (uVar4 + 1) * 8);
        param_2 = (param_2 - 0x40) + uVar4 * -0x40;
        puVar8 = param_1 + (uVar4 + 1) * 8;
      }
      goto LAB_00405b6b;
    }
    puVar8 = (undefined8 *)((long)param_1 + (param_2 & 0xffffffffffffffc0));
    FUN_00403200(param_1,param_2 & 0xffffffffffffffc0,param_3);
    param_2 = (ulong)((uint)param_2 & 0x3f);
  }
  if (param_2 == 0) {
    return;
  }
LAB_00405b6b:
  __dest = (void *)(param_3 + 0x30);
  lVar2 = *(long *)(param_3 + 0x28);
  puVar1 = (undefined8 *)((long)__dest + lVar2);
  uVar6 = (uint)param_2;
  if (uVar6 < 8) {
    if ((param_2 & 4) == 0) {
      if ((uVar6 != 0) && (*(undefined *)puVar1 = *(undefined *)puVar8, (param_2 & 2) != 0)) {
        *(undefined2 *)((long)puVar1 + ((param_2 & 0xffffffff) - 2)) =
             *(undefined2 *)((long)puVar8 + ((param_2 & 0xffffffff) - 2));
      }
    }
    else {
      *(undefined4 *)puVar1 = *(undefined4 *)puVar8;
      *(undefined4 *)((long)puVar1 + ((param_2 & 0xffffffff) - 4)) =
           *(undefined4 *)((long)puVar8 + ((param_2 & 0xffffffff) - 4));
    }
  }
  else {
    *puVar1 = *puVar8;
    *(undefined8 *)((long)puVar1 + ((param_2 & 0xffffffff) - 8)) =
         *(undefined8 *)((long)puVar8 + ((param_2 & 0xffffffff) - 8));
    lVar7 = (long)puVar1 - ((ulong)(puVar1 + 1) & 0xfffffffffffffff8);
    uVar6 = (int)lVar7 + uVar6 & 0xfffffff8;
    if (7 < uVar6) {
      uVar5 = 0;
      do {
        uVar4 = (ulong)uVar5;
        uVar5 = uVar5 + 8;
        *(undefined8 *)(((ulong)(puVar1 + 1) & 0xfffffffffffffff8) + uVar4) =
             *(undefined8 *)((long)puVar8 + (uVar4 - lVar7));
      } while (uVar5 < uVar6);
    }
  }
  param_2 = param_2 + lVar2;
  if (0x3f < param_2) {
    param_2 = param_2 - 0x40;
    FUN_00403200(__dest,0x40,param_3);
    memcpy(__dest,(void *)(param_3 + 0x70),param_2);
  }
  *(ulong *)(param_3 + 0x28) = param_2;
  return;
}


void FUN_00405dc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  
  local_b8 = 0xbb67ae856a09e667;
  local_b0 = 0xa54ff53a3c6ef372;
  local_a8 = 0x9b05688c510e527f;
  local_a0 = 0x5be0cd191f83d9ab;
  local_98 = 0;
  local_90 = 0;
  FUN_00405ac0(param_1,param_2,&local_b8);
  FUN_00405990(&local_b8);
  FUN_004031c0(&local_b8,param_3);
  return;
}


void FUN_00405e40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  
  local_b8 = 0x367cd507c1059ed8;
  local_b0 = 0xf70e59393070dd17;
  local_a8 = 0x68581511ffc00b31;
  local_a0 = 0xbefa4fa464f98fa7;
  local_98 = 0;
  local_90 = 0;
  FUN_00405ac0(param_1,param_2,&local_b8);
  FUN_00405990(&local_b8);
  FUN_004031e0(&local_b8,param_3);
  return;
}


undefined8 FUN_00405ec0(FILE *param_1,undefined8 param_2)

{
  void *__ptr;
  size_t sVar1;
  long lVar2;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  
  __ptr = malloc(0x8048);
  if (__ptr == (void *)0x0) {
    return 1;
  }
  local_b8 = 0;
  local_d8 = 0xbb67ae856a09e667;
  local_d0 = 0xa54ff53a3c6ef372;
  local_c8 = 0x9b05688c510e527f;
  local_c0 = 0x5be0cd191f83d9ab;
  local_b0 = 0;
  do {
    lVar2 = 0;
    while( true ) {
      sVar1 = fread_unlocked((void *)((long)__ptr + lVar2),1,0x8000 - lVar2,param_1);
      lVar2 = lVar2 + sVar1;
      if (lVar2 == 0x8000) break;
      if (sVar1 == 0) {
        if ((param_1->_flags & 0x20U) != 0) {
          free(__ptr);
          return 1;
        }
        goto LAB_00405f8f;
      }
      if ((param_1->_flags & 0x10U) != 0) {
LAB_00405f8f:
        if (lVar2 != 0) {
          FUN_00405ac0(__ptr,lVar2,&local_d8);
        }
        FUN_00405990(&local_d8);
        FUN_004031c0(&local_d8,param_2);
        free(__ptr);
        return 0;
      }
    }
    FUN_00403200(__ptr,0x8000,&local_d8);
  } while( true );
}


undefined8 FUN_00406020(FILE *param_1,undefined8 param_2)

{
  void *__ptr;
  size_t sVar1;
  long lVar2;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  
  __ptr = malloc(0x8048);
  if (__ptr == (void *)0x0) {
    return 1;
  }
  local_b8 = 0;
  local_d8 = 0x367cd507c1059ed8;
  local_d0 = 0xf70e59393070dd17;
  local_c8 = 0x68581511ffc00b31;
  local_c0 = 0xbefa4fa464f98fa7;
  local_b0 = 0;
  do {
    lVar2 = 0;
    while( true ) {
      sVar1 = fread_unlocked((void *)((long)__ptr + lVar2),1,0x8000 - lVar2,param_1);
      lVar2 = lVar2 + sVar1;
      if (lVar2 == 0x8000) break;
      if (sVar1 == 0) {
        if ((param_1->_flags & 0x20U) != 0) {
          free(__ptr);
          return 1;
        }
        goto LAB_004060ef;
      }
      if ((param_1->_flags & 0x10U) != 0) {
LAB_004060ef:
        if (lVar2 != 0) {
          FUN_00405ac0(__ptr,lVar2,&local_d8);
        }
        FUN_00405990(&local_d8);
        FUN_004031e0(&local_d8,param_2);
        free(__ptr);
        return 0;
      }
    }
    FUN_00403200(__ptr,0x8000,&local_d8);
  } while( true );
}


void FUN_00406180(void)

{
  (*(code *)PTR_posix_fadvise_0060e0e8)();
  return;
}


void FUN_00406190(FILE *param_1,int param_2)

{
  int __fd;
  
  if (param_1 != (FILE *)0x0) {
    __fd = fileno(param_1);
    posix_fadvise(__fd,0,0,param_2);
    return;
  }
  return;
}


FILE * FUN_004061c0(char *param_1,char *param_2)

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
    iVar2 = FUN_00407ea0(uVar1);
    if (iVar2 < 0) {
      piVar5 = __errno_location();
      pFVar4 = (FILE *)0x0;
      iVar2 = *piVar5;
      FUN_004086e0(__stream);
      *piVar5 = iVar2;
    }
    else {
      iVar3 = FUN_004086e0(__stream);
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


void FUN_00406260(byte *param_1)

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
        pbVar6 = &DAT_0040ac00;
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
  DAT_0060e308 = param_1;
  program_invocation_name = param_1;
  return;
}


char * FUN_00406300(char *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  byte *pbVar3;
  
  pcVar2 = (char *)dcgettext(0,param_1,5);
  if (param_1 == pcVar2) {
    pbVar3 = (byte *)FUN_00409850();
    if ((*pbVar3 & 0xdf) == 0x55) {
      if (((((pbVar3[1] & 0xdf) != 0x54) || ((pbVar3[2] & 0xdf) != 0x46)) || (pbVar3[3] != 0x2d)) ||
         ((pbVar3[4] != 0x38 || (pbVar3[5] != 0)))) {
LAB_004063d8:
        pcVar2 = "\"";
        if (param_2 != 9) {
          pcVar2 = "\'";
        }
        return pcVar2;
      }
      cVar1 = *pcVar2;
      pcVar2 = &DAT_0040ac11;
      if (cVar1 != '`') {
        pcVar2 = &DAT_0040ac06;
      }
    }
    else {
      if (((((*pbVar3 & 0xdf) != 0x47) || ((pbVar3[1] & 0xdf) != 0x42)) || (pbVar3[2] != 0x31)) ||
         (((pbVar3[3] != 0x38 || (pbVar3[4] != 0x30)) ||
          ((pbVar3[5] != 0x33 || ((pbVar3[6] != 0x30 || (pbVar3[7] != 0)))))))) goto LAB_004063d8;
      cVar1 = *pcVar2;
      pcVar2 = &DAT_0040ac0d;
      if (cVar1 != '`') {
        pcVar2 = &DAT_0040ac0a;
      }
    }
  }
  return pcVar2;
}


ulong FUN_00406400(undefined *param_1,ulong param_2,char *param_3,ulong param_4,int param_5,
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
LAB_00407051:
    if (param_2 != 0) {
      bVar3 = false;
      local_5b = false;
      bVar2 = true;
      local_70 = 0;
      goto LAB_00406c86;
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
      goto LAB_00407051;
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
      param_8 = (char *)FUN_00406300(&DAT_0040ac15,param_5);
      param_9 = (char *)FUN_00406300(&DAT_0040bdf7);
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
LAB_00406498:
  uVar22 = 0;
  bVar5 = local_5b;
LAB_004064a8:
  bVar23 = param_4 != uVar22;
  if (param_4 == 0xffffffffffffffff) {
    bVar23 = param_3[uVar22] != '\0';
  }
  bVar26 = bVar6;
  if (!bVar23) goto LAB_00406c28;
  bVar20 = (bool)(param_5 != 2 & bVar6);
  __s1 = (byte *)(param_3 + uVar22);
  uVar16 = uVar15;
  bVar4 = bVar3;
  if (bVar20) {
    if (local_a0 == 0) {
LAB_00406ba0:
      uVar19 = (ulong)*__s1;
      switch(uVar19) {
      case 0:
        goto switchD_00406bb2_caseD_0;
      default:
        bVar20 = false;
        goto switchD_00406a1e_caseD_1;
      case 7:
        bVar17 = 0x61;
        goto LAB_004068b5;
      case 8:
        bVar17 = 0x62;
        break;
      case 9:
switchD_00406bb2_caseD_9:
        bVar17 = 0x74;
        break;
      case 10:
switchD_00406bb2_caseD_a:
        bVar17 = 0x6e;
        break;
      case 0xb:
switchD_00406bb2_caseD_b:
        bVar17 = 0x76;
        goto LAB_004068b5;
      case 0xc:
switchD_00406bb2_caseD_c:
        bVar17 = 0x66;
LAB_004068b5:
        if (local_5c) {
          bVar25 = false;
          goto LAB_00406808;
        }
LAB_004068c0:
        bVar23 = false;
        goto LAB_0040667b;
      case 0xd:
        bVar20 = false;
switchD_00406598_caseD_d:
        bVar25 = param_5 == 2;
        uVar19 = 0xd;
        bVar13 = 0x72;
        goto LAB_004067d0;
      case 0x20:
        bVar25 = false;
LAB_00406bfa:
        uVar19 = 0x20;
        goto LAB_00406bc2;
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
switchD_00406598_caseD_21:
        bVar25 = false;
        goto LAB_004067db;
      case 0x23:
      case 0x7e:
        bVar26 = false;
LAB_00406bda:
        if (uVar22 == 0) {
          bVar25 = false;
          bVar23 = bVar20;
          bVar20 = bVar26;
          goto LAB_004065e8;
        }
        bVar23 = false;
        goto LAB_004065ff;
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
LAB_00406bc2:
        bVar24 = false;
        bVar23 = bVar20;
        bVar20 = bVar25;
        goto LAB_00406601;
      case 0x27:
        bVar20 = false;
        goto switchD_00406a1e_caseD_27;
      case 0x3f:
        bVar20 = false;
        goto switchD_00406a1e_caseD_3f;
      case 0x5c:
        bVar20 = false;
        goto switchD_00406598_caseD_5c;
      case 0x7b:
      case 0x7d:
        bVar20 = false;
        goto switchD_00406a1e_caseD_7b;
      }
      bVar25 = false;
      bVar23 = false;
      goto joined_r0x004067f7;
    }
    if ((param_4 == 0xffffffffffffffff) && (1 < local_a0)) {
      param_4 = strlen(param_3);
    }
    if ((param_4 < uVar22 + local_a0) || (iVar7 = memcmp(__s1,local_78,local_a0), iVar7 != 0))
    goto LAB_00406ba0;
    if (!local_5c) {
      uVar19 = (ulong)*__s1;
      bVar25 = bVar20;
      switch(uVar19) {
      case 0:
        goto switchD_00406598_caseD_0;
      default:
        goto switchD_00406a1e_caseD_1;
      case 7:
        bVar17 = 0x61;
        goto LAB_004068c0;
      case 8:
        bVar25 = false;
        bVar23 = false;
        bVar17 = 0x62;
        break;
      case 9:
        goto switchD_00406bb2_caseD_9;
      case 10:
        goto switchD_00406bb2_caseD_a;
      case 0xb:
        goto switchD_00406bb2_caseD_b;
      case 0xc:
        goto switchD_00406bb2_caseD_c;
      case 0xd:
        goto switchD_00406598_caseD_d;
      case 0x20:
        goto LAB_00406bfa;
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
        goto switchD_00406598_caseD_21;
      case 0x23:
      case 0x7e:
        bVar26 = bVar20;
        goto LAB_00406bda;
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
        goto LAB_00406bc2;
      case 0x27:
        goto switchD_00406a1e_caseD_27;
      case 0x3f:
        goto switchD_00406a1e_caseD_3f;
      case 0x5c:
        goto switchD_00406598_caseD_5c;
      case 0x7b:
      case 0x7d:
        goto switchD_00406a1e_caseD_7b;
      }
      goto LAB_00406642;
    }
    goto LAB_0040681a;
  }
  uVar19 = (ulong)*__s1;
  switch(uVar19) {
  case 0:
    if (bVar6) {
switchD_00406bb2_caseD_0:
      if (!local_5c) {
        bVar20 = false;
switchD_00406598_caseD_0:
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
            goto LAB_004066f8;
          }
LAB_0040693a:
          param_1[uVar16] = 0x5c;
          uVar15 = uVar16;
        }
        else if (uVar15 < uVar9) goto LAB_0040693a;
        uVar16 = uVar15 + 1;
        bVar24 = bVar23;
        if (param_5 == 2) {
          bVar17 = 0x30;
          bVar23 = false;
          bVar4 = bVar3;
          goto LAB_004066f8;
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
LAB_00406979:
        bVar17 = (byte)uVar19;
        bVar23 = false;
        uVar15 = uVar16;
        bVar4 = bVar3;
        if ((bool)(bVar6 ^ 1U | bVar26)) goto LAB_004066f8;
        goto LAB_00406601;
      }
      bVar26 = param_5 == 2;
      goto LAB_0040680c;
    }
    if ((param_6 & 1) == 0) {
      bVar25 = param_5 == 2;
      uVar19 = 0;
      bVar23 = false;
      bVar20 = false;
      goto LAB_004065e8;
    }
    uVar22 = uVar22 + 1;
    goto LAB_004064a8;
  default:
switchD_00406a1e_caseD_1:
    bVar25 = bVar6;
    if (sVar8 != 1) {
      local_40[0] = (mbstate_t)0x0;
      if (param_4 == 0xffffffffffffffff) {
        param_4 = strlen(param_3);
      }
      uVar21 = 0;
      do {
        uVar1 = uVar22 + uVar21;
        lVar11 = FUN_00409710(&local_44,param_3 + uVar1,param_4 - uVar1,local_40);
        if (lVar11 == 0) break;
        if (lVar11 == -1) {
          bVar23 = false;
          goto LAB_0040732a;
        }
        if (lVar11 == -2) {
          if ((param_4 <= uVar1) || (param_3[uVar1] == '\0')) goto LAB_00407467;
          goto LAB_00407457;
        }
        if (((param_5 == 2) && (local_5c)) && (lVar11 != 1)) {
          pcVar12 = param_3 + uVar1 + 1;
          do {
            if (((byte)(*pcVar12 + 0xa5U) < 0x22) &&
               ((1L << (*pcVar12 + 0xa5U & 0x3f) & 0x20000002bU) != 0)) {
              param_5 = 2;
              goto LAB_0040680c;
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
      goto LAB_0040732a;
    }
    ppuVar10 = __ctype_b_loc();
    uVar21 = 1;
    bVar25 = ((*ppuVar10)[uVar19] & 0x4000) == 0;
    bVar23 = !bVar25;
    bVar25 = (bool)(bVar25 & bVar6);
    goto LAB_004069f4;
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
    goto LAB_00406a32;
  case 10:
    uVar19 = 10;
    bVar13 = 0x6e;
    goto LAB_00406a32;
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
LAB_00406a32:
    bVar25 = param_5 == 2;
    bVar20 = (bool)(local_5c & bVar25);
    if (bVar20) {
LAB_00406a4a:
      param_5 = 2;
      goto LAB_0040680c;
    }
    break;
  case 0x20:
    uVar19 = 0x20;
    goto LAB_004065d6;
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
LAB_004065d6:
    bVar25 = param_5 == 2;
    if ((local_5c) && (bVar25)) goto LAB_00406a4a;
    goto LAB_004065e8;
  case 0x23:
  case 0x7e:
LAB_004065cd:
    bVar25 = param_5 == 2;
    if (uVar22 == 0) goto LAB_004065d6;
    goto LAB_004067db;
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
    goto switchD_00406a1e_caseD_25;
  case 0x27:
switchD_00406a1e_caseD_27:
    bVar5 = bVar23;
    if (param_5 != 2) {
      bVar25 = false;
      uVar19 = 0x27;
      goto LAB_004065e8;
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
      goto LAB_004066f8;
    }
    goto LAB_0040680c;
  case 0x3f:
switchD_00406a1e_caseD_3f:
    if (param_5 == 2) {
      if (!local_5c) {
        bVar17 = 0x3f;
        bVar24 = false;
        bVar23 = false;
        goto LAB_004066f8;
      }
      goto LAB_0040680c;
    }
    if (param_5 != 5) {
      bVar25 = param_5 == 2;
      uVar19 = 0x3f;
      bVar23 = false;
      goto LAB_004065e8;
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
        goto LAB_00406979;
      }
      goto LAB_0040681a;
    }
    bVar25 = false;
    uVar19 = 0x3f;
    bVar23 = false;
    goto LAB_004065e8;
  case 0x5c:
    if (param_5 != 2) {
switchD_00406598_caseD_5c:
      uVar19 = 0x5c;
      bVar17 = 0x5c;
      bVar13 = 0x5c;
      bVar25 = (bool)(bVar6 & local_5c & local_a0 != 0);
      if (!bVar25) break;
      uVar22 = uVar22 + 1;
      bVar23 = false;
      goto LAB_00406714;
    }
    if (local_5c) goto LAB_0040680c;
    uVar22 = uVar22 + 1;
    bVar23 = false;
    bVar17 = 0x5c;
    goto LAB_00406714;
  case 0x7b:
  case 0x7d:
switchD_00406a1e_caseD_7b:
    bVar24 = param_4 != 1;
    if (param_4 == 0xffffffffffffffff) {
      bVar24 = param_3[1] != '\0';
    }
    bVar25 = param_5 == 2;
    if (!bVar24) goto LAB_004065cd;
    goto LAB_004067db;
  }
LAB_004067d0:
  if (!bVar6) {
LAB_004067db:
    bVar23 = false;
    goto LAB_004065e8;
  }
  bVar23 = false;
  bVar17 = bVar13;
  goto joined_r0x004067f7;
LAB_00406c28:
  if ((uVar15 == 0) && ((bool)(local_5c & param_5 == 2))) {
    param_5 = 2;
LAB_0040680c:
    if (bVar26) {
      param_5 = 4;
    }
LAB_0040681a:
    uVar9 = FUN_00406400(param_1,uVar9,param_3,param_4,param_5,param_6 & 0xfffffffd,0,param_8,
                         param_9);
    return uVar9;
  }
  bVar26 = (bool)(param_5 == 2 & (local_5c ^ 1U));
  bVar23 = (bool)(local_5c ^ 1U);
  if ((!bVar26) || (bVar23 = bVar26, !bVar5)) {
LAB_004074fd:
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
    uVar9 = FUN_00406400(param_1,local_70,param_3,param_4,5,param_6,param_7,param_8,param_9);
    return uVar9;
  }
  local_5b = uVar9 == 0 && local_70 != 0;
  param_2 = local_70;
  bVar23 = bVar5;
  if (uVar9 != 0 || local_70 == 0) goto LAB_004074fd;
LAB_00406c86:
  *param_1 = 0x27;
  param_5 = 2;
  uVar15 = 1;
  local_78 = "\'";
  local_a0 = 1;
  local_5c = false;
  uVar9 = param_2;
  goto LAB_00406498;
  while (__s1[uVar21] != 0) {
LAB_00407457:
    uVar21 = uVar21 + 1;
    if (param_4 <= uVar22 + uVar21) break;
  }
LAB_00407467:
  bVar23 = false;
LAB_0040732a:
  if (1 < uVar21) {
LAB_00406eee:
    bVar26 = false;
    uVar21 = uVar21 + uVar22;
    uVar16 = uVar22;
    do {
      bVar17 = (byte)uVar19;
      if (bVar25) {
        bVar26 = param_5 == 2;
        if (local_5c) goto LAB_0040680c;
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
        if (uVar21 <= uVar22) goto LAB_0040668d;
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
        if (uVar21 <= uVar22) goto LAB_00406714;
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
LAB_004069f4:
  if (bVar25) {
    bVar23 = false;
    bVar25 = bVar6;
    goto LAB_00406eee;
  }
switchD_00406a1e_caseD_25:
  bVar25 = param_5 == 2;
LAB_004065e8:
  bVar17 = (byte)uVar19;
  bVar24 = (bool)((bVar6 ^ 1U | bVar25) ^ 1 | local_5c);
  bVar26 = bVar20;
  if (bVar24) {
LAB_004065ff:
    bVar24 = false;
    bVar20 = bVar26;
LAB_00406601:
    bVar17 = (byte)uVar19;
    uVar16 = uVar15;
    bVar4 = bVar3;
    if ((param_7 == 0) || ((*(uint *)(param_7 + (uVar19 >> 5) * 4) >> (bVar17 & 0x1f) & 1) == 0))
    goto LAB_004066f8;
    bVar25 = param_5 == 2;
  }
  else {
LAB_004066f8:
    bVar25 = param_5 == 2;
    uVar15 = uVar16;
    bVar3 = bVar4;
    if (!bVar20) {
      uVar22 = uVar22 + 1;
      bVar3 = (bool)((bVar24 ^ 1U) & bVar4);
LAB_00406714:
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
      goto LAB_0040668d;
    }
  }
joined_r0x004067f7:
  if (local_5c) {
LAB_00406808:
    bVar26 = (bool)(bVar6 & bVar25);
    goto LAB_0040680c;
  }
LAB_00406642:
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
LAB_0040667b:
  if (uVar15 < uVar9) {
    param_1[uVar15] = 0x5c;
  }
  uVar15 = uVar15 + 1;
  uVar22 = uVar22 + 1;
  bVar4 = bVar3;
LAB_0040668d:
  bVar3 = bVar4;
  if (uVar15 < uVar9) {
    param_1[uVar15] = bVar17;
  }
  uVar15 = uVar15 + 1;
  if (!bVar23) {
    bVar2 = false;
  }
  goto LAB_004064a8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00407630(int param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

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
  puVar8 = (undefined4 *)PTR_DAT_0060e278;
  if (DAT_0060e290 <= param_1) {
    if (param_1 == 0x7fffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_004086a0();
    }
    if (PTR_DAT_0060e278 == &DAT_0060e280) {
      puVar8 = (undefined4 *)FUN_004084b0(0);
      uVar6 = PTR_DAT_0060e288._4_4_;
      uVar5 = PTR_DAT_0060e288._0_4_;
      uVar3 = _UNK_0060e284;
      PTR_DAT_0060e278 = (undefined *)puVar8;
      *puVar8 = _DAT_0060e280;
      puVar8[1] = uVar3;
      puVar8[2] = uVar5;
      puVar8[3] = uVar6;
    }
    else {
      puVar8 = (undefined4 *)FUN_004084b0(PTR_DAT_0060e278);
      PTR_DAT_0060e278 = (undefined *)puVar8;
    }
    memset(puVar8 + (long)DAT_0060e290 * 4,0,(long)((param_1 + 1) - DAT_0060e290) << 4);
    DAT_0060e290 = param_1 + 1;
  }
  uVar2 = param_4[1];
  puVar10 = (ulong *)(puVar8 + (long)param_1 * 4);
  uVar4 = *puVar10;
  __ptr = (undefined *)puVar10[1];
  uVar9 = FUN_00406400(__ptr,uVar4,param_2,param_3,*param_4,uVar2 | 1,param_4 + 2,
                       *(undefined8 *)(param_4 + 10),*(undefined8 *)(param_4 + 0xc));
  if (uVar4 <= uVar9) {
    uVar9 = uVar9 + 1;
    *puVar10 = uVar9;
    if (__ptr != &DAT_0060e320) {
      free(__ptr);
    }
    __ptr = (undefined *)FUN_00408450(uVar9);
    uVar3 = *param_4;
    puVar10[1] = (ulong)__ptr;
    FUN_00406400(__ptr,uVar9,param_2,param_3,uVar3,uVar2 | 1,param_4 + 2,
                 *(undefined8 *)(param_4 + 10),*(undefined8 *)(param_4 + 0xc));
  }
  *piVar7 = iVar1;
  return __ptr;
}


void FUN_004077d0(undefined *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_0060e420;
  }
  FUN_00408650(param_1,0x38);
  *piVar2 = iVar1;
  return;
}


undefined4 FUN_00407810(undefined4 *param_1)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)&DAT_0060e420;
  }
  return *param_1;
}


void FUN_00407820(undefined4 *param_1,undefined4 param_2)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)&DAT_0060e420;
  }
  *param_1 = param_2;
  return;
}


uint FUN_00407830(undefined *param_1,byte param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_0060e420;
  }
  uVar1 = *(uint *)(param_1 + (ulong)(param_2 >> 5) * 4 + 8);
  uVar2 = uVar1 >> (param_2 & 0x1f);
  *(uint *)(param_1 + (ulong)(param_2 >> 5) * 4 + 8) =
       ((param_3 ^ uVar2) & 1) << (param_2 & 0x1f) ^ uVar1;
  return uVar2 & 1;
}


undefined4 FUN_00407870(undefined *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_0060e420;
  }
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_1 + 4) = param_2;
  return uVar1;
}


void FUN_00407890(undefined4 *param_1,long param_2,long param_3)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)&DAT_0060e420;
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


void FUN_004078c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 *param_5)

{
  int iVar1;
  int *piVar2;
  
  if (param_5 == (undefined4 *)0x0) {
    param_5 = (undefined4 *)&DAT_0060e420;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  FUN_00406400(param_1,param_2,param_3,param_4,*param_5,param_5[1],param_5 + 2,
               *(undefined8 *)(param_5 + 10),*(undefined8 *)(param_5 + 0xc));
  *piVar2 = iVar1;
  return;
}


undefined8 FUN_00407940(undefined8 param_1,undefined8 param_2,long *param_3,undefined4 *param_4)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  
  if (param_4 == (undefined4 *)0x0) {
    param_4 = (undefined4 *)&DAT_0060e420;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  uVar5 = (uint)(param_3 == (long *)0x0) | param_4[1];
  lVar3 = FUN_00406400(0,0,param_1,param_2,*param_4,uVar5,param_4 + 2,*(undefined8 *)(param_4 + 10),
                       *(undefined8 *)(param_4 + 0xc));
  uVar4 = FUN_00408450(lVar3 + 1);
  FUN_00406400(uVar4,lVar3 + 1,param_1,param_2,*param_4,uVar5,param_4 + 2,
               *(undefined8 *)(param_4 + 10),*(undefined8 *)(param_4 + 0xc));
  *piVar2 = iVar1;
  if (param_3 != (long *)0x0) {
    *param_3 = lVar3;
  }
  return uVar4;
}


void FUN_00407a30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00407940(param_1,param_2,0,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407a40(void)

{
  void **ppvVar1;
  void *__ptr;
  undefined *__ptr_00;
  void **ppvVar2;
  
  __ptr_00 = PTR_DAT_0060e278;
  if (1 < DAT_0060e290) {
    ppvVar2 = (void **)(PTR_DAT_0060e278 + 0x18);
    ppvVar1 = (void **)(PTR_DAT_0060e278 + (ulong)(DAT_0060e290 - 2) * 0x10 + 0x28);
    do {
      __ptr = *ppvVar2;
      ppvVar2 = ppvVar2 + 2;
      free(__ptr);
    } while (ppvVar2 != ppvVar1);
  }
  if (*(undefined **)(__ptr_00 + 8) != &DAT_0060e320) {
    free(*(undefined **)(__ptr_00 + 8));
    _DAT_0060e280 = 0x100;
    PTR_DAT_0060e288 = &DAT_0060e320;
  }
  if (__ptr_00 != &DAT_0060e280) {
    free(__ptr_00);
    PTR_DAT_0060e278 = &DAT_0060e280;
  }
  DAT_0060e290 = 1;
  return;
}


void FUN_00407ae0(undefined8 param_1,undefined8 param_2)

{
  FUN_00407630(param_1,param_2,0xffffffffffffffff,&DAT_0060e420);
  return;
}


void FUN_00407b00(void)

{
  FUN_00407630();
  return;
}


void FUN_00407b10(undefined8 param_1)

{
  FUN_00407630(0,param_1,0xffffffffffffffff,&DAT_0060e420);
  return;
}


void FUN_00407b30(undefined8 param_1,undefined8 param_2)

{
  FUN_00407630(0,param_1,param_2,&DAT_0060e420);
  return;
}


void FUN_00407b50(undefined8 param_1,int param_2,undefined8 param_3)

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
    FUN_00407630(param_1,param_3,0xffffffffffffffff,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00407bc0(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

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
    FUN_00407630(param_1,param_3,param_4,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00407c30(undefined4 param_1,undefined8 param_2)

{
  FUN_00407b50(0,param_1,param_2);
  return;
}


void FUN_00407c40(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00407bc0(0,param_1,param_2,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407c50(undefined8 param_1,undefined8 param_2,byte param_3)

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
  
  local_18 = DAT_0060e450;
  local_48 = _DAT_0060e420;
  uStack_40 = uRam000000000060e428;
  local_38 = _DAT_0060e430;
  uStack_30 = uRam000000000060e438;
  puVar1 = (uint *)((long)&uStack_40 + (ulong)(param_3 >> 5) * 4);
  local_28 = _DAT_0060e440;
  uStack_20 = uRam000000000060e448;
  uVar2 = *puVar1;
  *puVar1 = (~(uVar2 >> (param_3 & 0x1f)) & 1) << (param_3 & 0x1f) ^ uVar2;
  FUN_00407630(0,param_1,param_2,&local_48);
  return;
}


void FUN_00407cc0(undefined8 param_1,char param_2)

{
  FUN_00407c50(param_1,0xffffffffffffffff,(int)param_2);
  return;
}


void FUN_00407cd0(undefined8 param_1)

{
  FUN_00407c50(param_1,0xffffffffffffffff,0x3a);
  return;
}


void FUN_00407cf0(undefined8 param_1,undefined8 param_2)

{
  FUN_00407c50(param_1,param_2,0x3a);
  return;
}


void FUN_00407d00(undefined8 param_1,int param_2,undefined8 param_3)

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
    FUN_00407630(param_1,param_3,0xffffffffffffffff,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407d70(undefined8 param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5
                 )

{
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  long lStack_20;
  long local_18;
  
  uStack_40 = uRam000000000060e428;
  local_38 = _DAT_0060e430;
  uStack_30 = uRam000000000060e438;
  local_28 = _DAT_0060e440;
  lStack_20 = uRam000000000060e448;
  local_18 = DAT_0060e450;
  local_48 = CONCAT44((int)((ulong)_DAT_0060e420 >> 0x20),10);
  if ((param_2 != 0) && (param_3 != 0)) {
    lStack_20 = param_2;
    local_18 = param_3;
    FUN_00407630(param_1,param_4,param_5,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00407de0(void)

{
  FUN_00407d70();
  return;
}


void FUN_00407df0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00407d70(0,param_1,param_2,param_3,0xffffffffffffffff);
  return;
}


void FUN_00407e10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00407d70(0,param_1,param_2,param_3,param_4);
  return;
}


void FUN_00407e30(void)

{
  FUN_00407630();
  return;
}


void FUN_00407e40(undefined8 param_1,undefined8 param_2)

{
  FUN_00407630(0,param_1,param_2,&DAT_0060e240);
  return;
}


void FUN_00407e60(undefined8 param_1,undefined8 param_2)

{
  FUN_00407630(param_1,param_2,0xffffffffffffffff,&DAT_0060e240);
  return;
}


void FUN_00407e80(undefined8 param_1)

{
  FUN_00407630(0,param_1,0xffffffffffffffff,&DAT_0060e240);
  return;
}


void FUN_00407ea0(undefined8 param_1)

{
  FUN_00408760(param_1,0,3);
  return;
}


undefined8
FUN_00407eb0(FILE *param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5,
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
  uVar1 = dcgettext(0,&DAT_0040b96b,5);
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
    goto LAB_0040812c;
  case 5:
    uVar1 = param_5[3];
    uVar4 = param_5[2];
    uVar5 = param_5[1];
    uVar6 = *param_5;
    uVar7 = dcgettext(0,"Written by %s, %s, %s,\n%s, and %s.\n",5);
LAB_0040812c:
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
    goto LAB_004081c9;
  case 7:
    uVar1 = param_5[2];
    uVar4 = param_5[5];
    uVar5 = param_5[4];
    uVar6 = param_5[3];
    local_58 = param_5[1];
    uVar7 = *param_5;
    uVar3 = dcgettext(0,"Written by %s, %s, %s,\n%s, %s, %s, and %s.\n",5);
LAB_004081c9:
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
    goto LAB_00407faa;
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
LAB_00407faa:
  uVar1 = __fprintf_chk(param_1,1,uVar3,uVar7,local_50,local_58,uVar6,uVar5,uVar4,uVar1,local_48);
  return uVar1;
}


void FUN_00408290(void)

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
  FUN_00407eb0();
  return;
}


void FUN_004082b0(void)

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
  FUN_00407eb0();
  return;
}


void FUN_00408310(void)

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
  FUN_00407eb0();
  return;
}


void FUN_004083d0(void)

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


void FUN_00408450(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_004086a0();
  }
  return;
}


void FUN_00408470(ulong param_1,ulong param_2)

{
  if ((-1 < SUB168(ZEXT816(param_1) * ZEXT816(param_2),0)) &&
     (SUB168(ZEXT816(param_1) * ZEXT816(param_2) >> 0x40,0) == 0)) {
    FUN_00408450();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004086a0();
}


void thunk_FUN_00408450(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_004086a0();
  }
  return;
}


void * FUN_004084b0(void *param_1,size_t param_2)

{
  void *pvVar1;
  
  if ((param_2 == 0) && (param_1 != (void *)0x0)) {
    free(param_1);
    return (void *)0x0;
  }
  pvVar1 = realloc(param_1,param_2);
  if ((pvVar1 == (void *)0x0) && (param_2 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_004086a0();
  }
  return pvVar1;
}


void FUN_004084f0(undefined8 param_1,ulong param_2,ulong param_3)

{
  if ((-1 < SUB168(ZEXT816(param_2) * ZEXT816(param_3),0)) &&
     (SUB168(ZEXT816(param_2) * ZEXT816(param_3) >> 0x40,0) == 0)) {
    FUN_004084b0();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004086a0();
}


void FUN_00408520(long param_1,ulong *param_2,ulong param_3)

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
    if ((SUB168(ZEXT816(uVar2) * ZEXT816(param_3),0) < 0) || (uVar3 != 0)) goto LAB_0040857b;
  }
  else {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x5555555555555554);
    uVar3 = SUB168(auVar1 % ZEXT816(param_3),0);
    if (SUB168(auVar1 / ZEXT816(param_3),0) <= uVar2) {
LAB_0040857b:
                    /* WARNING: Subroutine does not return */
      FUN_004086a0(param_1,param_2,uVar3);
    }
    uVar2 = (uVar2 >> 1) + 1 + uVar2;
  }
  *param_2 = uVar2;
  FUN_004084b0(param_1,uVar2 * param_3);
  return;
}


void FUN_004085b0(long param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (param_1 == 0) {
    if (uVar1 == 0) {
      *param_2 = 0x80;
      FUN_004084b0(0,0x80);
      return;
    }
    if ((long)uVar1 < 0) goto LAB_004085fa;
  }
  else {
    if (0x5555555555555553 < uVar1) {
LAB_004085fa:
                    /* WARNING: Subroutine does not return */
      FUN_004086a0();
    }
    uVar1 = (uVar1 >> 1) + 1 + uVar1;
  }
  *param_2 = uVar1;
  FUN_004084b0(param_1,uVar1);
  return;
}


void FUN_00408600(size_t param_1)

{
  void *__s;
  
  __s = (void *)FUN_00408450();
  memset(__s,0,param_1);
  return;
}


void FUN_00408620(size_t param_1,ulong param_2)

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
  FUN_004086a0();
}


void FUN_00408650(void *param_1,size_t param_2)

{
  void *__dest;
  
  __dest = (void *)FUN_00408450(param_2);
  memcpy(__dest,param_1,param_2);
  return;
}


void FUN_00408680(char *param_1)

{
  void *__dest;
  size_t sVar1;
  
  sVar1 = strlen(param_1);
  __dest = (void *)FUN_00408450(sVar1 + 1);
  memcpy(__dest,param_1,sVar1 + 1);
  return;
}


void FUN_004086a0(void)

{
  undefined8 uVar1;
  
  uVar1 = dcgettext(0,"memory exhausted",5);
  error(DAT_0060e220,0,"%s",uVar1);
                    /* WARNING: Subroutine does not return */
  abort();
}


int FUN_004086e0(FILE *param_1)

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
      if (_Var4 == -1) goto LAB_00408747;
    }
    iVar1 = FUN_004088a0(param_1);
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
LAB_00408747:
  iVar1 = fclose(param_1);
  return iVar1;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_00408760(ulong param_1,int param_2,ulong param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  
  if (param_2 != 0x406) {
    iVar1 = fcntl((int)param_1,param_2,param_3);
    return iVar1;
  }
  if (DAT_0060e458 < 0) {
    iVar1 = FUN_00408760(param_1,0,param_3 & 0xffffffff);
    if (iVar1 < 0) {
      return iVar1;
    }
    if (DAT_0060e458 != -1) {
      return iVar1;
    }
  }
  else {
    iVar1 = fcntl((int)param_1,0x406);
    if ((-1 < iVar1) || (piVar4 = __errno_location(), *piVar4 != 0x16)) {
      DAT_0060e458 = 1;
      return iVar1;
    }
    iVar1 = FUN_00408760(param_1 & 0xffffffff,0,param_3 & 0xffffffff);
    if (iVar1 < 0) {
      return iVar1;
    }
    DAT_0060e458 = -1;
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


void FUN_004088a0(FILE *param_1)

{
  int iVar1;
  
  if (param_1 != (FILE *)0x0) {
    iVar1 = __freading();
    if ((iVar1 != 0) && ((param_1->_flags & 0x100U) != 0)) {
      FUN_004088e0(param_1,0,1);
      fflush(param_1);
      return;
    }
  }
  fflush(param_1);
  return;
}


ulong FUN_004088e0(FILE *param_1,__off_t param_2,int param_3)

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


void FUN_00408940(long param_1,int *param_2)

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
      if (iVar3 <= iVar8) goto LAB_004089bc;
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
      if (iVar9 <= iVar3) goto LAB_004089bc;
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
LAB_004089bc:
  param_2[0xc] = iVar2;
  param_2[0xb] = iVar1 + (iVar2 - iVar3);
  return;
}


int FUN_00408a20(int param_1,undefined8 *param_2,char *param_3,char **param_4,undefined4 *param_5,
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
      if ((iVar5 == 0) && (sVar7 = strlen(__s1_00), sVar7 == sVar15)) goto LAB_00408c40;
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
            if (local_70 == (char *)0x0) goto LAB_00408b80;
          }
          else if (local_70 == (char *)0x0) {
            local_70 = (char *)calloc((long)iVar5,1);
            if (local_70 == (char *)0x0) {
              bVar3 = true;
              goto LAB_00408b80;
            }
            bVar4 = true;
            local_70[(int)local_44] = '\x01';
          }
          local_70[lVar16] = '\x01';
        }
      }
LAB_00408b80:
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
              __fprintf_chk(__stream,1,&DAT_0040bdf1,param_9,*param_4);
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
LAB_00408c40:
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


uint FUN_00409040(uint param_1,undefined8 *param_2,char *param_3,long param_4,undefined8 param_5,
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
LAB_0040908a:
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
          goto LAB_0040918d;
        }
        pbVar8 = *(byte **)(param_7 + 8);
      }
      param_7[10] = 0;
    }
LAB_0040918d:
    param_7[6] = 1;
    cVar2 = *param_3;
LAB_00409198:
    if (cVar2 == ':') {
      uVar3 = 0;
    }
    if (pbVar8 == (byte *)0x0) goto LAB_00409108;
LAB_004091ac:
    if (*pbVar8 == 0) goto LAB_00409108;
  }
  else {
    if (param_7[6] == 0) goto LAB_0040908a;
    cVar2 = *param_3;
    pbVar8 = *(byte **)(param_7 + 8);
    if ((cVar2 - 0x2bU & 0xfd) != 0) goto LAB_00409198;
    pcVar4 = param_3 + 1;
    param_3 = param_3 + 1;
    if (*pcVar4 == ':') {
      uVar3 = 0;
    }
    if (pbVar8 != (byte *)0x0) goto LAB_004091ac;
LAB_00409108:
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
        FUN_00408940(param_2,param_7);
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
LAB_00409276:
      if (uVar11 != param_1) {
        *param_7 = uVar11;
      }
      return 0xffffffff;
    }
    lVar6 = 3;
    pbVar8 = (byte *)param_2[(int)uVar11];
    pbVar9 = pbVar8;
    pbVar10 = &DAT_0040be09;
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
          FUN_00408940(param_2,param_7);
          uVar11 = param_7[0xb];
        }
      }
      param_7[0xc] = param_1;
      *param_7 = param_1;
      goto LAB_00409276;
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
        puVar15 = &DAT_0040be09;
        goto LAB_004093d5;
      }
      if ((int)param_6 != 0) {
        if (pbVar8[2] == 0) {
          pcVar4 = strchr(param_3,(int)(char)bVar14);
          param_6 = param_6 & 0xffffffff;
          if (pcVar4 != (char *)0x0) goto LAB_00409380;
        }
        *(byte **)(param_7 + 8) = pbVar8 + 1;
        uVar11 = FUN_00408a20(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar3,
                              &DAT_0040be0a);
        if (uVar11 != 0xffffffff) {
          return uVar11;
        }
        pbVar8 = (byte *)param_2[(int)*param_7];
      }
    }
LAB_00409380:
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
  puVar15 = &DAT_0040be28;
LAB_004093d5:
  uVar3 = FUN_00408a20(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar3,puVar15);
  return uVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409610(void)

{
  DAT_0060e460 = DAT_0060e29c;
  _DAT_0060e464 = DAT_0060e298;
  FUN_00409040();
  DAT_0060e29c = DAT_0060e460;
  _DAT_0060e4a0 = DAT_0060e470;
  _DAT_0060e294 = DAT_0060e468;
  return;
}


void FUN_00409670(void)

{
  FUN_00409610();
  return;
}


void FUN_00409690(void)

{
  FUN_00409610();
  return;
}


void FUN_004096b0(void)

{
  FUN_00409040();
  return;
}


void FUN_004096d0(void)

{
  FUN_00409610();
  return;
}


void FUN_004096f0(void)

{
  FUN_00409040();
  return;
}


size_t FUN_00409710(wchar_t *param_1,byte *param_2,size_t param_3,mbstate_t *param_4)

{
  char cVar1;
  size_t sVar2;
  wchar_t local_1c;
  
  if (param_2 == (byte *)0x0) {
    param_3 = 1;
    param_2 = (byte *)0x40be27;
  }
  else {
    if (param_3 == 0) {
      return 0xfffffffffffffffe;
    }
    if (param_1 != (wchar_t *)0x0) goto LAB_00409734;
  }
  param_1 = &local_1c;
LAB_00409734:
  sVar2 = mbrtowc(param_1,(char *)param_2,param_3,param_4);
  if ((0xfffffffffffffffd < sVar2) && (cVar1 = FUN_004097f0(0), cVar1 == '\0')) {
    sVar2 = 1;
    *param_1 = (uint)*param_2;
  }
  return sVar2;
}


ulong FUN_00409790(uint *param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  
  lVar2 = __fpending();
  uVar1 = *param_1;
  uVar3 = FUN_004086e0(param_1);
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


bool FUN_004097f0(int param_1)

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
    pbVar5 = &DAT_0040be2c;
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

char * FUN_00409850(void)

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
  if (DAT_0060e498 != (char *)0x0) goto LAB_0040988a;
  pcVar7 = getenv("CHARSETALIASDIR");
  if ((pcVar7 == (char *)0x0) || (*pcVar7 == '\0')) {
    sVar6 = 0x73;
    sVar5 = 0x65;
    __n = 100;
    pcVar7 = 
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib"
    ;
LAB_00409975:
    __file = (char *)malloc(sVar6);
    if (__file != (char *)0x0) {
      memcpy(__file,pcVar7,__n);
      __file[__n] = '/';
      goto LAB_00409996;
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
        goto LAB_00409975;
      }
      sVar6 = __n + 0xe;
    }
    __file = (char *)malloc(sVar6);
    if (__file != (char *)0x0) {
      memcpy(__file,pcVar7,__n);
      sVar5 = __n;
LAB_00409996:
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
LAB_00409a30:
          pbVar8 = (byte *)__stream->_IO_read_ptr;
          if (__stream->_IO_read_end <= pbVar8) goto LAB_00409bbc;
          do {
            __stream->_IO_read_ptr = (char *)(pbVar8 + 1);
            uVar4 = (uint)*pbVar8;
            __ptr = pcVar7;
            while( true ) {
              pcVar7 = __ptr;
              if ((uVar4 - 9 < 2) || (uVar4 == 0x20)) goto LAB_00409a30;
              if (uVar4 == 0x23) goto LAB_00409c21;
              ungetc(uVar4,__stream);
              iVar2 = fscanf(__stream,"%50s %50s",&local_b8,&local_78);
              puVar13 = &local_b8;
              if (iVar2 < 2) goto LAB_00409bcf;
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
                FUN_004086e0(__stream);
                goto LAB_004099d4;
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
LAB_00409bbc:
              uVar4 = __uflow(__stream);
              __ptr = pcVar7;
              if (uVar4 == 0xffffffff) goto LAB_00409bcf;
            }
          } while( true );
        }
        close(iVar2);
      }
      goto LAB_004099ce;
    }
  }
  DAT_0060e498 = "";
LAB_0040988a:
  cVar1 = *DAT_0060e498;
  pcVar7 = DAT_0060e498;
  do {
    if (cVar1 == '\0') {
LAB_004098e4:
      if (*__s1 == '\0') {
        __s1 = "ASCII";
      }
      return __s1;
    }
    iVar2 = strcmp(__s1,pcVar7);
    if ((iVar2 == 0) || ((cVar1 == '*' && (pcVar7[1] == '\0')))) {
      sVar6 = strlen(pcVar7);
      __s1 = pcVar7 + sVar6 + 1;
      goto LAB_004098e4;
    }
    sVar6 = strlen(pcVar7);
    sVar5 = strlen(pcVar7 + sVar6 + 1);
    pcVar7 = pcVar7 + sVar6 + 1 + sVar5 + 1;
    cVar1 = *pcVar7;
  } while( true );
LAB_00409c21:
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
  if (uVar4 == 0xffffffff) goto LAB_00409bcf;
  goto LAB_00409a30;
LAB_00409bcf:
  FUN_004086e0(__stream);
  if (local_d0 == 0) {
LAB_004099ce:
    pcVar7 = "";
  }
  else {
    pcVar7[local_d0] = '\0';
  }
LAB_004099d4:
  free(__file);
  DAT_0060e498 = pcVar7;
  goto LAB_0040988a;
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
  __cxa_atexit(param_1,0,DAT_0060e208);
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
  FUN_004028f1();
  return;
}

