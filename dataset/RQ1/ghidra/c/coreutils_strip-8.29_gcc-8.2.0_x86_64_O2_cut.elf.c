
void switchD_00403980::caseD_b(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401a25(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401a2a(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401a2f(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401a34(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void switchD_0040545a::caseD_0(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


byte FUN_00401a40(int param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  int *piVar6;
  undefined8 uVar7;
  ulong uVar8;
  char *pcVar9;
  char *unaff_R13;
  
  bVar4 = 0;
  bVar2 = false;
  FUN_00403790(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils",
                 "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale"
                );
  textdomain("coreutils");
  FUN_004074f0(FUN_004031d0);
  DAT_0060b313 = 0;
  DAT_0060b314 = 0;
  DAT_0060b311 = '\0';
  DAT_0060b2fa = '\0';
LAB_00401ab0:
  do {
    iVar5 = FUN_00406ac0(param_1,param_2,"b:c:d:f:nsz",&PTR_s_bytes_00407fa0,0);
    if (iVar5 == -1) {
      pcVar9 = "you must specify a list of bytes, characters, or fields";
      if (DAT_0060b314 != 0) {
        if ((DAT_0060b314 != 2) && (bVar2)) {
          pcVar9 = "an input delimiter may be specified only when operating on fields";
        }
        else {
          if ((DAT_0060b313 & DAT_0060b314 != 2) == 0) {
            FUN_00402bd0(unaff_R13,
                         (uint)(DAT_0060b314 != 2) << 2 | ~-(uint)(DAT_0060b312 == '\0') & 2);
            if (!bVar2) {
              DAT_0060b311 = '\t';
            }
            if (DAT_0060b300 == (undefined *)0x0) {
              DAT_0060b2f9 = 0;
              DAT_0060b300 = &DAT_0060b2f8;
              DAT_0060b2f8 = DAT_0060b311;
              DAT_0060b308 = 1;
            }
            if (DAT_0060b2bc == param_1) {
              bVar4 = FUN_00401ee0(&DAT_004094ea);
            }
            else {
              bVar4 = 1;
              for (; DAT_0060b2bc < param_1; DAT_0060b2bc = DAT_0060b2bc + 1) {
                bVar3 = FUN_00401ee0(param_2[DAT_0060b2bc]);
                bVar4 = bVar4 & bVar3;
              }
            }
            if ((DAT_0060b2fa != '\0') && (iVar5 = FUN_00405c20(stdin), iVar5 == -1)) {
              piVar6 = __errno_location();
              bVar4 = 0;
              error(0,*piVar6,&DAT_004094ea);
            }
            return bVar4 ^ 1;
          }
          pcVar9 = "suppressing non-delimited lines makes sense\n\tonly when operating on fields";
        }
      }
LAB_00401db1:
      do {
        uVar7 = dcgettext(0,pcVar9,5);
        error(0,0,uVar7);
LAB_00401dc6:
        FUN_004026b0(1);
LAB_00401dd0:
        pcVar9 = "the delimiter must be a single character";
      } while( true );
    }
    if (iVar5 == 0x66) {
      if (DAT_0060b314 != 0) {
LAB_00401da7:
        pcVar9 = "only one type of list may be specified";
        goto LAB_00401db1;
      }
      DAT_0060b314 = 2;
      unaff_R13 = DAT_0060b4f0;
      goto LAB_00401ab0;
    }
    if (iVar5 < 0x67) {
      if (iVar5 < 100) {
        if (0x61 < iVar5) {
          if (DAT_0060b314 != 0) goto LAB_00401da7;
          DAT_0060b314 = 1;
          unaff_R13 = DAT_0060b4f0;
          goto LAB_00401ab0;
        }
        if (iVar5 == -0x83) {
          FUN_00405830(stdout,&DAT_0040755b,"GNU coreutils",PTR_DAT_0060b238,"David M. Ihnat",
                       "David MacKenzie","Jim Meyering",0);
                    /* WARNING: Subroutine does not return */
          exit(0);
        }
        if (iVar5 != -0x82) goto LAB_00401dc6;
        iVar5 = FUN_004026b0(0);
      }
      if (iVar5 != 100) goto LAB_00401dc6;
      if ((*DAT_0060b4f0 != '\0') && (DAT_0060b4f0[1] != '\0')) goto LAB_00401dd0;
      bVar2 = true;
      DAT_0060b311 = *DAT_0060b4f0;
      goto LAB_00401ab0;
    }
    if (iVar5 == 0x7a) {
      DAT_0060b230 = 0;
    }
    else if (iVar5 < 0x7b) {
      if (iVar5 != 0x6e) {
        if (iVar5 != 0x73) goto LAB_00401dc6;
        DAT_0060b313 = 1;
      }
    }
    else if (iVar5 == 0x80) {
      DAT_0060b310 = 1;
      DAT_0060b308 = 1;
      if (*DAT_0060b4f0 != '\0') {
        uVar8 = 0xffffffffffffffff;
        pcVar9 = DAT_0060b4f0;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar1 = *pcVar9;
          pcVar9 = pcVar9 + (ulong)bVar4 * -2 + 1;
        } while (cVar1 != '\0');
        DAT_0060b308 = ~uVar8 - 1;
      }
      DAT_0060b300 = (undefined *)FUN_00405ba0(DAT_0060b4f0);
    }
    else {
      if (iVar5 != 0x81) goto LAB_00401dc6;
      DAT_0060b312 = '\x01';
    }
  } while( true );
}


void FUN_00401e00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_retaddr;
  undefined auStack_8 [8];
  
  (*(code *)PTR___libc_start_main_0060aff0)
            (FUN_00401a40,unaff_retaddr,&stack0x00000008,FUN_00407480,FUN_004074e0,param_3,auStack_8
            );
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* WARNING: Removing unreachable block (ram,0x00401e38) */
/* WARNING: Removing unreachable block (ram,0x00401e42) */

void FUN_00401e2b(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00401e79) */

void FUN_00401e4a(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00401eb6) */

void FUN_00401e81(void)

{
  if (DAT_0060b2e8 != '\0') {
    return;
  }
  FUN_00401e2b();
  DAT_0060b2e8 = 1;
  return;
}


/* WARNING: Removing unreachable block (ram,0x00401e79) */

void thunk_FUN_00401e4a(void)

{
  return;
}


undefined8 FUN_00401ee0(byte *param_1)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  size_t __n;
  FILE *__stream;
  undefined8 uVar5;
  int *piVar6;
  byte *pbVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  byte bVar13;
  byte *pbVar14;
  bool bVar15;
  byte bVar16;
  byte bVar17;
  bool bVar18;
  bool bVar19;
  byte bVar20;
  
  bVar20 = 0;
  lVar8 = 2;
  bVar18 = &stack0xffffffffffffffd0 < &DAT_00000018;
  bVar19 = &stack0x00000000 == (undefined *)0x48;
  pbVar7 = param_1;
  pbVar14 = &DAT_004094ea;
  do {
    if (lVar8 == 0) break;
    lVar8 = lVar8 + -1;
    bVar18 = *pbVar7 < *pbVar14;
    bVar19 = *pbVar7 == *pbVar14;
    pbVar7 = pbVar7 + 1;
    pbVar14 = pbVar14 + 1;
  } while (bVar19);
  if ((!bVar18 && !bVar19) == bVar18) {
    DAT_0060b2fa = 1;
    __stream = stdin;
  }
  else {
    __stream = fopen((char *)param_1,"r");
    if (__stream == (FILE *)0x0) goto LAB_00402469;
  }
  FUN_00403280(__stream,2);
  DAT_0060b328 = DAT_0060b4e0;
  if (DAT_0060b314 == 1) {
    uVar10 = 0;
    bVar17 = 0;
LAB_004024b0:
    do {
      pbVar7 = (byte *)__stream->_IO_read_ptr;
      if (__stream->_IO_read_end <= pbVar7) goto LAB_00402547;
      while( true ) {
        uVar12 = (uint)DAT_0060b230;
        __stream->_IO_read_ptr = (char *)(pbVar7 + 1);
        uVar2 = (uint)*pbVar7;
        if (*pbVar7 == uVar12) break;
        while( true ) {
          uVar10 = uVar10 + 1;
          if (DAT_0060b328[1] <= uVar10 && uVar10 != DAT_0060b328[1]) {
            DAT_0060b328 = DAT_0060b328 + 2;
          }
          if (uVar10 < *DAT_0060b328) goto LAB_004024b0;
          if ((DAT_0060b310 != 0) &&
             (bVar16 = bVar17 & uVar10 == *DAT_0060b328, bVar17 = DAT_0060b310, bVar16 != 0)) {
            fwrite_unlocked(DAT_0060b300,1,DAT_0060b308,stdout);
            bVar17 = bVar16;
          }
          pcVar1 = stdout->_IO_write_ptr;
          if (stdout->_IO_write_end <= pcVar1) {
            __overflow(stdout,uVar2 & 0xff);
            goto LAB_004024b0;
          }
          stdout->_IO_write_ptr = pcVar1 + 1;
          *pcVar1 = (char)uVar2;
          pbVar7 = (byte *)__stream->_IO_read_ptr;
          if (pbVar7 < __stream->_IO_read_end) break;
LAB_00402547:
          uVar2 = __uflow(__stream);
          bVar16 = DAT_0060b230;
          uVar12 = (uint)DAT_0060b230;
          if (uVar2 == uVar12) goto LAB_004025a0;
          if (uVar2 == 0xffffffff) {
            if (uVar10 == 0) goto LAB_00402230;
            pbVar7 = (byte *)stdout->_IO_write_ptr;
            if (pbVar7 < stdout->_IO_write_end) {
              stdout->_IO_write_ptr = (char *)(pbVar7 + 1);
              *pbVar7 = bVar16;
              uVar2 = __stream->_flags;
            }
            else {
              __overflow(stdout,uVar12);
              uVar2 = __stream->_flags;
            }
            goto LAB_00402234;
          }
        }
      }
LAB_004025a0:
      pcVar1 = stdout->_IO_write_ptr;
      if (pcVar1 < stdout->_IO_write_end) {
        stdout->_IO_write_ptr = pcVar1 + 1;
        *pcVar1 = (char)uVar12;
      }
      else {
        __overflow(stdout,uVar12);
      }
      DAT_0060b328 = DAT_0060b4e0;
      uVar10 = 0;
      bVar17 = 0;
    } while( true );
  }
  pbVar7 = (byte *)__stream->_IO_read_ptr;
  if (pbVar7 < __stream->_IO_read_end) {
    __stream->_IO_read_ptr = (char *)(pbVar7 + 1);
    uVar2 = (uint)*pbVar7;
  }
  else {
    uVar2 = __uflow(__stream);
    if (uVar2 == 0xffffffff) {
LAB_00402230:
      uVar2 = __stream->_flags;
LAB_00402234:
      bVar18 = false;
      bVar19 = (uVar2 & 0x20) == 0;
      if (bVar19) {
        lVar8 = 2;
        pbVar7 = param_1;
        pbVar14 = &DAT_004094ea;
        do {
          if (lVar8 == 0) break;
          lVar8 = lVar8 + -1;
          bVar18 = *pbVar7 < *pbVar14;
          bVar19 = *pbVar7 == *pbVar14;
          pbVar7 = pbVar7 + (ulong)bVar20 * -2 + 1;
          pbVar14 = pbVar14 + (ulong)bVar20 * -2 + 1;
        } while (bVar19);
        if ((!bVar18 && !bVar19) == bVar18) {
          clearerr_unlocked(__stream);
          return 1;
        }
        iVar4 = FUN_00405c20();
        if (iVar4 != -1) {
          return 1;
        }
      }
LAB_00402469:
      uVar5 = FUN_00405230(0,3,param_1);
      piVar6 = __errno_location();
      error(0,*piVar6,"%s",uVar5);
      return 0;
    }
  }
  uVar10 = 1;
  ungetc(uVar2,__stream);
  bVar17 = 1 < *DAT_0060b328 ^ DAT_0060b313;
  uVar2 = 0;
  bVar18 = false;
LAB_00401f90:
  bVar15 = (bool)(uVar10 == 1 & bVar17);
  bVar19 = bVar18;
  if (bVar15 != false) goto LAB_00402156;
  do {
    if (*DAT_0060b328 < uVar10 || *DAT_0060b328 == uVar10) {
      uVar12 = uVar2;
      if (bVar18 != false) {
        fwrite_unlocked(DAT_0060b300,1,DAT_0060b308,stdout);
      }
LAB_0040203f:
      pbVar7 = (byte *)__stream->_IO_read_ptr;
      if (pbVar7 < __stream->_IO_read_end) {
        __stream->_IO_read_ptr = (char *)(pbVar7 + 1);
        uVar3 = (uint)*pbVar7;
      }
      else {
        uVar3 = __uflow(__stream);
      }
      uVar9 = (uint)DAT_0060b311;
      uVar2 = (uint)DAT_0060b230;
      if (uVar3 == uVar9) {
        bVar18 = true;
        uVar3 = uVar9;
LAB_004022c5:
        if (DAT_0060b230 != (byte)uVar9) {
          uVar2 = uVar3;
          if (uVar3 == uVar9) goto LAB_00402296;
LAB_004022d2:
          bVar15 = uVar2 == 0xffffffff;
          uVar11 = (uint)DAT_0060b230;
          goto LAB_004022e0;
        }
        pbVar7 = (byte *)__stream->_IO_read_ptr;
        if (pbVar7 < __stream->_IO_read_end) {
          __stream->_IO_read_ptr = (char *)(pbVar7 + 1);
          uVar2 = (uint)*pbVar7;
LAB_0040235d:
          ungetc(uVar2,__stream);
          uVar9 = (uint)DAT_0060b311;
          goto LAB_00402292;
        }
        uVar2 = __uflow(__stream);
        if (uVar2 != 0xffffffff) goto LAB_0040235d;
        uVar11 = (uint)DAT_0060b230;
        bVar19 = false;
        bVar15 = true;
        bVar16 = DAT_0060b230;
        bVar13 = DAT_0060b311;
        goto LAB_004020d9;
      }
      if (uVar3 == uVar2) {
        bVar18 = true;
LAB_00402285:
        uVar3 = uVar2;
        if (DAT_0060b230 == (byte)uVar9) {
          bVar15 = false;
          uVar11 = uVar2;
LAB_004022e0:
          bVar13 = (byte)uVar9;
          bVar16 = (byte)uVar11;
          bVar19 = uVar11 == uVar2;
          if ((bVar15 != false) || (bVar19)) goto LAB_004020d9;
        }
        else {
LAB_00402292:
          uVar2 = uVar3;
          if (uVar3 != uVar9) goto LAB_004022d2;
LAB_00402296:
          uVar10 = uVar10 + 1;
          uVar2 = uVar3;
          if (DAT_0060b328[1] <= uVar10 && uVar10 != DAT_0060b328[1]) {
            DAT_0060b328 = DAT_0060b328 + 2;
          }
        }
        goto LAB_00401f90;
      }
      if (uVar3 != 0xffffffff) break;
      bVar18 = true;
      uVar11 = uVar2;
    }
    else {
      do {
        uVar12 = uVar2;
        pbVar7 = (byte *)__stream->_IO_read_ptr;
        if (pbVar7 < __stream->_IO_read_end) {
          __stream->_IO_read_ptr = (char *)(pbVar7 + 1);
          uVar3 = (uint)*pbVar7;
        }
        else {
          uVar3 = __uflow(__stream);
        }
        uVar9 = (uint)DAT_0060b311;
        uVar2 = (uint)DAT_0060b230;
        if (uVar9 == uVar3) goto LAB_004022c5;
        if (uVar3 == uVar2) goto LAB_00402285;
        uVar11 = uVar2;
        uVar2 = uVar3;
      } while (uVar3 != 0xffffffff);
    }
    uVar2 = 0xffffffff;
    bVar19 = false;
    bVar15 = true;
    bVar16 = (byte)uVar11;
    bVar13 = DAT_0060b311;
LAB_004020d9:
    if ((bVar18 != false) || ((DAT_0060b313 != 1 || (uVar10 != 1)))) {
      if ((uVar11 == uVar12 && bVar13 != bVar16) && (!bVar19)) goto LAB_00402230;
      pbVar7 = (byte *)stdout->_IO_write_ptr;
      if (pbVar7 < stdout->_IO_write_end) {
        stdout->_IO_write_ptr = (char *)(pbVar7 + 1);
        *pbVar7 = bVar16;
      }
      else {
        __overflow(stdout,uVar11);
      }
    }
    if (bVar15 != false) goto LAB_00402230;
    DAT_0060b328 = DAT_0060b4e0;
    bVar18 = bVar15;
    while( true ) {
      uVar10 = 1;
      bVar15 = (bool)(bVar17 & 1);
      bVar19 = bVar18;
      if (bVar15 == false) break;
LAB_00402156:
      __n = FUN_004032b0(&DAT_0060b320,&DAT_0060b318,0,0xffffffffffffffff,DAT_0060b311,DAT_0060b230,
                         __stream);
      if ((long)__n < 0) {
        free(DAT_0060b320);
        uVar2 = __stream->_flags;
        DAT_0060b320 = (void *)0x0;
        if ((uVar2 & 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00405bc0();
        }
        goto LAB_00402234;
      }
      if (__n == 0) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("n_bytes != 0","src/cut.c",0x149,"cut_fields");
      }
      bVar18 = bVar19;
      if (*(byte *)((long)DAT_0060b320 + (__n - 1)) == DAT_0060b311) {
        if ((*DAT_0060b328 < 2) &&
           (fwrite_unlocked(DAT_0060b320,1,__n - 1,stdout), bVar18 = bVar15,
           DAT_0060b311 == DAT_0060b230)) {
          pbVar7 = (byte *)__stream->_IO_read_ptr;
          if (pbVar7 < __stream->_IO_read_end) {
            __stream->_IO_read_ptr = (char *)(pbVar7 + 1);
            uVar2 = (uint)*pbVar7;
          }
          else {
            uVar2 = __uflow(__stream);
            bVar18 = bVar19;
            if (uVar2 == 0xffffffff) goto LAB_00402325;
          }
          ungetc(uVar2,__stream);
          bVar18 = bVar15;
        }
LAB_00402325:
        if (DAT_0060b328[1] < 2) {
          DAT_0060b328 = DAT_0060b328 + 2;
          uVar10 = 2;
          uVar2 = 0;
        }
        else {
          uVar10 = 2;
          uVar2 = 0;
        }
        break;
      }
      if (DAT_0060b313 != 0) {
        uVar10 = 1;
        uVar2 = 0;
        goto LAB_00401f90;
      }
      fwrite_unlocked(DAT_0060b320,1,__n,stdout);
      bVar16 = DAT_0060b230;
      uVar2 = (uint)DAT_0060b230;
      if ((int)*(char *)((long)DAT_0060b320 + (__n - 1)) != uVar2) {
        pbVar7 = (byte *)stdout->_IO_write_ptr;
        if (pbVar7 < stdout->_IO_write_end) {
          stdout->_IO_write_ptr = (char *)(pbVar7 + 1);
          *pbVar7 = bVar16;
        }
        else {
          __overflow(stdout,uVar2);
          uVar2 = (uint)DAT_0060b230;
        }
      }
    }
  } while( true );
  pcVar1 = stdout->_IO_write_ptr;
  uVar12 = uVar3;
  if (pcVar1 < stdout->_IO_write_end) {
    stdout->_IO_write_ptr = pcVar1 + 1;
    *pcVar1 = (char)uVar3;
  }
  else {
    __overflow(stdout,uVar3 & 0xff);
  }
  goto LAB_0040203f;
}


void FUN_004026b0(int param_1)

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
  
  uVar7 = DAT_0060b350;
  bVar13 = 0;
  if (param_1 != 0) {
    uVar3 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(stderr,1,uVar3,uVar7);
    goto LAB_004026ef;
  }
  uVar3 = dcgettext(0,"Usage: %s OPTION... [FILE]...\n",5);
  __printf_chk(1,uVar3,uVar7);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"Print selected parts of lines from each FILE to standard output.\n",
                             5);
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
                             "  -b, --bytes=LIST        select only these bytes\n  -c, --characters=LIST   select only these characters\n  -d, --delimiter=DELIM   use DELIM instead of TAB for field delimiter\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -f, --fields=LIST       select only these fields;  also print any line\n                            that contains no delimiter character, unless\n                            the -s option is specified\n  -n                      (ignored)\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --complement        complement the set of selected bytes, characters\n                            or fields\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -s, --only-delimited    do not print lines not containing delimiters\n      --output-delimiter=STRING  use STRING as the output delimiter\n                            the default is to use the input delimiter\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"  -z, --zero-terminated    line delimiter is NUL, not newline\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"      --help     display this help and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"      --version  output version information and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nUse one, and only one of -b, -c or -f.  Each LIST is made up of one\nrange, or many ranges separated by commas.  Selected input is written\nin the same order that it is read, and is written exactly once.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "Each range is one of:\n\n  N     N\'th byte, character or field, counted from 1\n  N-    from N\'th byte, character or field, to end of line\n  N-M   from N\'th to M\'th (included) byte, character or field\n  -M    from first to M\'th (included) byte, character or field\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  local_88 = &DAT_0040755f;
  local_80 = "test invocation";
  local_78[0] = (byte *)0x4075d9;
  local_78[1] = (byte *)0x407571;
  local_78[2] = (byte *)0x407587;
  local_78[3] = (byte *)0x407591;
  local_78[4] = (byte *)0x4075a0;
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
    pbVar10 = &DAT_0040755b;
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
        pbVar9 = &DAT_0040755b;
        goto LAB_00402ab3;
      }
    }
    pbVar9 = &DAT_0040755b;
    uVar7 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    pcVar4 = " invocation";
    __printf_chk(1,uVar7,"https://www.gnu.org/software/coreutils/",&DAT_0040755b);
  }
  else {
    uVar7 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar7,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
      iVar2 = strncmp(pcVar4,"en_",3);
      if (iVar2 != 0) {
LAB_00402ab3:
        uVar7 = dcgettext(0,"Report %s translation bugs to <https://translationproject.org/team/>\n"
                          ,5);
        __printf_chk(1,uVar7,&DAT_0040755b);
      }
    }
    pcVar4 = " invocation";
    uVar7 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    __printf_chk(1,uVar7,"https://www.gnu.org/software/coreutils/",&DAT_0040755b);
    if (pbVar9 != &DAT_0040755b) {
      pcVar4 = "";
    }
  }
  uVar7 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(1,uVar7,pbVar9,pcVar4);
LAB_004026ef:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}


ulong FUN_00402ae0(int *param_1,int *param_2)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = 0xffffffff;
  iVar1 = *param_2;
  if (iVar1 <= *param_1) {
    uVar2 = (ulong)(*param_1 != iVar1 && iVar1 <= *param_1);
  }
  return uVar2;
}


void FUN_00402b00(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  if (DAT_0060b4e8 == DAT_0060b338) {
    if (DAT_0060b4e0 == 0) {
      if (DAT_0060b338 == 0) {
        lVar2 = 0x80;
        DAT_0060b338 = 8;
      }
      else {
        lVar2 = DAT_0060b338 << 4;
        if ((lVar2 < 0) || (DAT_0060b338 >> 0x3c != 0)) goto LAB_00402bb7;
      }
    }
    else {
      if (0x555555555555554 < DAT_0060b338) {
LAB_00402bb7:
                    /* WARNING: Subroutine does not return */
        FUN_00405bc0();
      }
      DAT_0060b338 = DAT_0060b338 + 1 + (DAT_0060b338 >> 1);
      lVar2 = DAT_0060b338 * 0x10;
    }
    DAT_0060b4e0 = FUN_004059d0(DAT_0060b4e0,lVar2);
  }
  puVar1 = (undefined8 *)(DAT_0060b4e0 + DAT_0060b4e8 * 0x10);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  DAT_0060b4e8 = DAT_0060b4e8 + 1;
  return;
}


void FUN_00402bd0(byte *param_1,uint param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  ushort **ppuVar6;
  ulong uVar7;
  size_t sVar8;
  void *__ptr;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  ulong *puVar12;
  undefined8 extraout_RDX;
  byte *pbVar13;
  char *pcVar14;
  byte *pbVar15;
  ulong *__dest;
  ulong uVar16;
  ulong *__ptr_00;
  ulong uVar17;
  bool bVar18;
  bool bVar19;
  ulong local_50;
  
  bVar18 = false;
  bVar19 = (param_2 & 1) == 0;
  if (!bVar19) {
    lVar11 = 2;
    pbVar13 = param_1;
    pbVar15 = &DAT_004094ea;
    do {
      if (lVar11 == 0) break;
      lVar11 = lVar11 + -1;
      bVar18 = *pbVar13 < *pbVar15;
      bVar19 = *pbVar13 == *pbVar15;
      pbVar13 = pbVar13 + 1;
      pbVar15 = pbVar15 + 1;
    } while (bVar19);
    if ((!bVar18 && !bVar19) == bVar18) {
      param_1 = param_1 + 1;
      uVar16 = 1;
      bVar18 = true;
      goto LAB_00402c10;
    }
  }
  uVar16 = 0;
  bVar18 = false;
LAB_00402c10:
  bVar5 = false;
  bVar19 = false;
  local_50 = 1;
  bVar4 = bVar18;
  do {
    bVar2 = *param_1;
    if (bVar2 == 0x2d) {
      if (bVar18) {
        if ((param_2 & 4) == 0) {
          uVar10 = dcgettext(0,"invalid field range",5);
        }
        else {
          uVar10 = dcgettext(0,"invalid byte or character range",5);
        }
        goto LAB_00402fdb;
      }
      bVar5 = (bool)(uVar16 == 0 & bVar4);
      if (bVar5) {
        if ((param_2 & 4) == 0) {
LAB_004030a8:
          uVar10 = dcgettext(0,"fields are numbered from 1",5);
        }
        else {
          uVar10 = dcgettext(0,"byte/character positions are numbered from 1",5);
        }
        goto LAB_00402fdb;
      }
      if (bVar4) {
        uVar17 = 0;
        local_50 = uVar16;
        bVar18 = bVar4;
      }
      else {
        uVar17 = 0;
        local_50 = 1;
        bVar18 = true;
        bVar5 = bVar4;
      }
    }
    else if (((bVar2 == 0x2c) || (ppuVar6 = __ctype_b_loc(), (*(byte *)(*ppuVar6 + bVar2) & 1) != 0)
             ) || (bVar2 == 0)) {
      if (bVar18) {
        if (bVar4) {
          if (!bVar19) goto LAB_00402c8b;
LAB_00402e49:
          if (uVar16 < local_50) goto LAB_0040305f;
          FUN_00402b00(local_50,uVar16);
        }
        else {
          if (bVar19) goto LAB_00402e49;
          if ((param_2 & 1) == 0) {
            uVar10 = 5;
            pcVar14 = "invalid range with no endpoint: -";
            goto LAB_00402fd4;
          }
          local_50 = 1;
LAB_00402c8b:
          FUN_00402b00(local_50,0xffffffffffffffff);
        }
        bVar2 = *param_1;
      }
      else {
        if (uVar16 == 0) {
          if ((param_2 & 4) == 0) goto LAB_004030a8;
          uVar10 = dcgettext(0,"byte/character positions are numbered from 1",5);
          goto LAB_00402fdb;
        }
        FUN_00402b00(uVar16,uVar16);
        bVar2 = *param_1;
      }
      if (bVar2 == 0) {
        if (DAT_0060b4e8 != 0) {
          uVar17 = 0;
          qsort(DAT_0060b4e0,DAT_0060b4e8,0x10,FUN_00402ae0);
          uVar16 = DAT_0060b4e8;
          __ptr_00 = DAT_0060b4e0;
LAB_00402d50:
          do {
            if (uVar16 <= uVar17) {
LAB_00402de1:
              DAT_0060b4e8 = uVar16;
              if ((param_2 & 2) != 0) {
                DAT_0060b4e0 = (ulong *)0x0;
                DAT_0060b4e8 = 0;
                DAT_0060b338 = 0;
                if (1 < *__ptr_00) {
                  FUN_00402b00(1,*__ptr_00 - 1);
                }
                puVar12 = __ptr_00 + 2;
                if (1 < uVar16) {
                  do {
                    if (puVar12[-1] + 1 != *puVar12) {
                      FUN_00402b00(puVar12[-1] + 1,*puVar12 - 1);
                    }
                    puVar12 = puVar12 + 2;
                  } while (__ptr_00 + uVar16 * 2 != puVar12);
                }
                if (__ptr_00[uVar16 * 2 + -1] != 0xffffffffffffffff) {
                  FUN_00402b00(__ptr_00[uVar16 * 2 + -1] + 1,0xffffffffffffffff);
                }
                free(__ptr_00);
                __ptr_00 = DAT_0060b4e0;
              }
              DAT_0060b4e8 = DAT_0060b4e8 + 1;
              DAT_0060b4e0 = (ulong *)FUN_004059d0(__ptr_00,DAT_0060b4e8 * 0x10);
              puVar1 = (undefined8 *)((long)DAT_0060b4e0 + -0x10 + DAT_0060b4e8 * 0x10);
              puVar1[1] = 0xffffffffffffffff;
              *puVar1 = 0xffffffffffffffff;
              return;
            }
            while (uVar17 = uVar17 + 1, uVar17 < uVar16) {
              __dest = __ptr_00 + uVar17 * 2;
              puVar12 = __ptr_00 + uVar17 * 2 + -2;
              uVar7 = puVar12[1];
              if (uVar7 < *__dest) break;
              do {
                if (uVar7 <= __dest[1]) {
                  uVar7 = __dest[1];
                }
                puVar12[1] = uVar7;
                memmove(__dest,__ptr_00 + uVar17 * 2 + 2,(uVar16 - uVar17) * 0x10 - 0x10);
                uVar16 = DAT_0060b4e8 - 1;
                __ptr_00 = DAT_0060b4e0;
                DAT_0060b4e8 = uVar16;
                if (uVar16 <= uVar17) goto LAB_00402d50;
                puVar12 = DAT_0060b4e0 + uVar17 * 2 + -2;
                __dest = DAT_0060b4e0 + uVar17 * 2;
                uVar7 = puVar12[1];
              } while (*__dest < uVar7 || *__dest == uVar7);
              if (uVar16 <= uVar17) goto LAB_00402de1;
            }
          } while( true );
        }
        uVar10 = 5;
        if ((param_2 & 4) != 0) {
          uVar10 = dcgettext(0,"missing list of byte/character positions",5);
LAB_00402fdb:
          do {
            error(0,0,uVar10);
            FUN_004026b0(1);
LAB_00402ff3:
            pbVar13 = DAT_0060b330;
            sVar8 = strspn((char *)DAT_0060b330,"0123456789");
            __ptr = (void *)FUN_00405c00(pbVar13,sVar8);
            uVar10 = FUN_004053b0(__ptr);
            if ((param_2 & 4) == 0) {
              uVar9 = dcgettext(0,"field number %s is too large",5);
            }
            else {
              uVar9 = dcgettext(0,"byte/character offset %s is too large",5);
            }
            error(0,0,uVar9,uVar10);
            free(__ptr);
            FUN_004026b0();
LAB_0040305f:
            uVar10 = 5;
            pcVar14 = "invalid decreasing range";
LAB_00402fd4:
            uVar10 = dcgettext(0,pcVar14,uVar10);
          } while( true );
        }
LAB_00403156:
        pcVar14 = "missing list of fields";
        goto LAB_00402fd4;
      }
      uVar17 = 0;
      bVar5 = false;
      bVar18 = false;
      bVar4 = false;
      bVar19 = false;
    }
    else {
      if (9 < (int)(char)bVar2 - 0x30U) {
        uVar10 = FUN_004053b0(param_1);
        if ((param_2 & 4) == 0) {
          uVar9 = dcgettext(0,"invalid field value %s",5);
        }
        else {
          uVar9 = dcgettext(0,"invalid byte/character position %s",5);
        }
        error(0,0,uVar9,uVar10);
        FUN_004026b0(1);
        uVar10 = extraout_RDX;
        goto LAB_00403156;
      }
      if ((!bVar5) || (DAT_0060b330 == (byte *)0x0)) {
        DAT_0060b330 = param_1;
      }
      bVar3 = bVar18;
      if (!bVar18) {
        bVar4 = true;
        bVar3 = bVar19;
      }
      if (0x1999999999999999 < uVar16) goto LAB_00402ff3;
      uVar17 = (long)((char)bVar2 + -0x30) + uVar16 * 10;
      if (uVar17 < uVar16) goto LAB_00402ff3;
      if (uVar17 == 0xffffffffffffffff) goto LAB_00402ff3;
      bVar5 = true;
      bVar19 = bVar3;
    }
    param_1 = param_1 + 1;
    uVar16 = uVar17;
  } while( true );
}


void FUN_00403170(void)

{
  DAT_0060b4e8 = 0;
  DAT_0060b338 = 0;
  free(DAT_0060b4e0);
  DAT_0060b4e0 = (void *)0x0;
  return;
}


void FUN_004031b0(undefined8 param_1)

{
  DAT_0060b348 = param_1;
  return;
}


void FUN_004031c0(undefined param_1)

{
  DAT_0060b340 = param_1;
  return;
}


void FUN_004031d0(void)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  iVar1 = FUN_00406cd0(stdout);
  if (iVar1 != 0) {
    piVar2 = __errno_location();
    if ((DAT_0060b340 == '\0') || (*piVar2 != 0x20)) {
      uVar3 = dcgettext(0,"write error",5);
      if (DAT_0060b348 == 0) {
        error(0,*piVar2,"%s",uVar3);
      }
      else {
        uVar4 = FUN_00405200();
        error(0,*piVar2,"%s: %s",uVar4,uVar3);
      }
      goto LAB_0040324e;
    }
  }
  iVar1 = FUN_00406cd0(stderr);
  if (iVar1 == 0) {
    return;
  }
LAB_0040324e:
                    /* WARNING: Subroutine does not return */
  _exit(DAT_0060b240);
}


void FUN_00403280(FILE *param_1,int param_2)

{
  int __fd;
  
  if (param_1 != (FILE *)0x0) {
    __fd = fileno(param_1);
    posix_fadvise(__fd,0,0,param_2);
    return;
  }
  return;
}


/* WARNING: Could not reconcile some variable overlaps */

long FUN_004032b0(undefined8 *param_1,size_t *param_2,ulong param_3,ulong param_4,uint param_5,
                 uint param_6,_IO_FILE *param_7)

{
  byte *pbVar1;
  int iVar2;
  void *__src;
  undefined *puVar3;
  ulong uVar4;
  ulong __size;
  undefined *__dest;
  long lVar5;
  ulong uVar6;
  size_t sVar7;
  bool bVar8;
  uint local_84;
  undefined *local_78;
  uint local_70;
  uint local_6c;
  ulong local_40 [2];
  
  local_78 = (undefined *)*param_1;
  sVar7 = *param_2;
  if (local_78 == (undefined *)0x0) {
    sVar7 = 0x40;
    if (param_4 < 0x41) {
      sVar7 = param_4;
    }
    local_78 = (undefined *)malloc(sVar7);
    if (local_78 == (undefined *)0x0) {
      return -1;
    }
  }
  if ((sVar7 < param_3) || (uVar6 = sVar7 - param_3, uVar6 == 0 && param_4 <= sVar7)) {
LAB_00403458:
    *param_1 = local_78;
    *param_2 = sVar7;
    lVar5 = -1;
  }
  else {
    local_84 = param_6;
    local_6c = param_6;
    if ((param_5 != 0xffffffff) && (local_84 = param_5, param_6 == 0xffffffff)) {
      local_6c = param_5;
    }
    __dest = local_78 + param_3;
    do {
      __src = (void *)FUN_00405ce0(param_7,local_40);
      uVar4 = local_40[0];
      if (__src == (void *)0x0) {
        pbVar1 = (byte *)param_7->_IO_read_ptr;
        if (pbVar1 < param_7->_IO_read_end) {
          param_7->_IO_read_ptr = (char *)(pbVar1 + 1);
          local_70 = (uint)*pbVar1;
        }
        else {
          local_70 = __uflow(param_7);
          if (local_70 == 0xffffffff) {
            if (__dest == local_78) goto LAB_00403458;
            break;
          }
        }
        uVar4 = 2;
        local_40[0] = 1;
        bVar8 = local_84 == local_70 || local_6c == local_70;
      }
      else if ((local_84 == 0xffffffff) ||
              (lVar5 = FUN_00403600(__src,local_84,local_6c,local_40[0]), lVar5 == 0)) {
        uVar4 = uVar4 + 1;
        bVar8 = false;
      }
      else {
        bVar8 = true;
        local_40[0] = (lVar5 - (long)__src) + 1;
        uVar4 = (lVar5 - (long)__src) + 2;
      }
      __size = sVar7;
      if ((sVar7 < param_4) && (uVar6 < uVar4)) {
        __size = sVar7 * 2;
        if (sVar7 < 0x40) {
          __size = sVar7 + 0x40;
        }
        lVar5 = (long)__dest - (long)local_78;
        if (__size - lVar5 < uVar4) {
          __size = lVar5 + uVar4;
        }
        if ((__size <= sVar7) || (param_4 < __size)) {
          __size = param_4;
        }
        if (((long)(__size - param_3) < 0) &&
           (__size = param_3 + 0x8000000000000000, sVar7 == __size)) goto LAB_00403458;
        uVar6 = __size - lVar5;
        puVar3 = (undefined *)realloc(local_78,__size);
        if (puVar3 == (undefined *)0x0) goto LAB_00403458;
        __dest = puVar3 + lVar5;
        local_78 = puVar3;
      }
      if (1 < uVar6) {
        uVar4 = uVar6 - 1;
        if (local_40[0] <= uVar6 - 1) {
          uVar4 = local_40[0];
        }
        if (__src == (void *)0x0) {
          *__dest = (undefined)local_70;
        }
        else {
          memcpy(__dest,__src,uVar4);
        }
        __dest = __dest + uVar4;
        uVar6 = uVar6 - uVar4;
      }
      sVar7 = __size;
      if ((__src != (void *)0x0) && (iVar2 = FUN_00406d30(param_7,local_40[0]), iVar2 != 0))
      goto LAB_00403458;
    } while (!bVar8);
    *__dest = 0;
    *param_1 = local_78;
    lVar5 = (long)__dest - (long)(local_78 + param_3);
    *param_2 = sVar7;
    if (lVar5 == 0) {
      return -1;
    }
  }
  return lVar5;
}


ulong * FUN_00403600(ulong *param_1,char param_2,char param_3,ulong param_4)

{
  char cVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (param_2 == param_3) {
    puVar4 = (ulong *)FUN_00406bc0(param_1,param_2,param_4);
    return puVar4;
  }
  if ((param_4 != 0) && (((ulong)param_1 & 7) != 0)) {
    cVar1 = *(char *)param_1;
    while( true ) {
      if ((cVar1 == param_3) || (cVar1 == param_2)) {
        return param_1;
      }
      param_1 = (ulong *)((long)param_1 + 1);
      param_4 = param_4 - 1;
      if ((param_4 == 0) || (((ulong)param_1 & 7) == 0)) break;
      cVar1 = *(char *)param_1;
    }
  }
  uVar2 = (long)(int)(uint)CONCAT11(param_3,param_3) |
          (long)(int)(uint)CONCAT11(param_3,param_3) << 0x10;
  uVar5 = (long)(int)(uint)CONCAT11(param_2,param_2) |
          (long)(int)(uint)CONCAT11(param_2,param_2) << 0x10;
  uVar2 = uVar2 << 0x20 | uVar2;
  uVar5 = uVar5 << 0x20 | uVar5;
  if (param_4 < 8) {
LAB_00403727:
    if (param_4 == 0) {
      return (ulong *)0x0;
    }
  }
  else {
    uVar6 = uVar5 ^ *param_1;
    uVar3 = *param_1 ^ uVar2;
    for (uVar3 = ~uVar3 & uVar3 + 0xfefefefefefefeff | uVar6 + 0xfefefefefefefeff & ~uVar6;
        (uVar3 & 0x8080808080808080) == 0;
        uVar3 = ~uVar3 & uVar3 + 0xfefefefefefefeff | uVar6 + 0xfefefefefefefeff & ~uVar6) {
      param_4 = param_4 - 8;
      param_1 = param_1 + 1;
      if (param_4 < 8) goto LAB_00403727;
      uVar3 = *param_1 ^ uVar2;
      uVar6 = *param_1 ^ uVar5;
    }
  }
  if ((*(char *)param_1 != param_3) && (*(char *)param_1 != param_2)) {
    puVar4 = (ulong *)((long)param_1 + param_4);
    do {
      param_1 = (ulong *)((long)param_1 + 1);
      if (param_1 == puVar4) {
        return (ulong *)0x0;
      }
    } while ((*(char *)param_1 != param_2) && (*(char *)param_1 != param_3));
  }
  return param_1;
}


void FUN_00403790(byte *param_1)

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
        pbVar6 = &DAT_004082f0;
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
  DAT_0060b350 = param_1;
  program_invocation_name = param_1;
  return;
}


char * FUN_00403830(char *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  byte *pbVar3;
  
  pcVar2 = (char *)dcgettext(0,param_1,5);
  if (param_1 == pcVar2) {
    pbVar3 = (byte *)FUN_00406ee0();
    if ((*pbVar3 & 0xdf) == 0x55) {
      if (((((pbVar3[1] & 0xdf) != 0x54) || ((pbVar3[2] & 0xdf) != 0x46)) || (pbVar3[3] != 0x2d)) ||
         ((pbVar3[4] != 0x38 || (pbVar3[5] != 0)))) {
LAB_00403908:
        pcVar2 = "\"";
        if (param_2 != 9) {
          pcVar2 = "\'";
        }
        return pcVar2;
      }
      cVar1 = *pcVar2;
      pcVar2 = &DAT_00408301;
      if (cVar1 != '`') {
        pcVar2 = &DAT_004082f6;
      }
    }
    else {
      if (((((*pbVar3 & 0xdf) != 0x47) || ((pbVar3[1] & 0xdf) != 0x42)) || (pbVar3[2] != 0x31)) ||
         (((pbVar3[3] != 0x38 || (pbVar3[4] != 0x30)) ||
          ((pbVar3[5] != 0x33 || ((pbVar3[6] != 0x30 || (pbVar3[7] != 0)))))))) goto LAB_00403908;
      cVar1 = *pcVar2;
      pcVar2 = &DAT_004082fd;
      if (cVar1 != '`') {
        pcVar2 = &DAT_004082fa;
      }
    }
  }
  return pcVar2;
}


ulong FUN_00403930(undefined *param_1,ulong param_2,char *param_3,ulong param_4,int param_5,
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
LAB_00404581:
    if (param_2 != 0) {
      bVar3 = false;
      local_5b = false;
      bVar2 = true;
      local_70 = 0;
      goto LAB_004041b6;
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
      goto LAB_00404581;
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
      param_8 = (char *)FUN_00403830(&DAT_00408305,param_5);
      param_9 = (char *)FUN_00403830(&DAT_004094d7);
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
LAB_004039c8:
  uVar22 = 0;
  bVar5 = local_5b;
LAB_004039d8:
  bVar23 = param_4 != uVar22;
  if (param_4 == 0xffffffffffffffff) {
    bVar23 = param_3[uVar22] != '\0';
  }
  bVar26 = bVar6;
  if (!bVar23) goto LAB_00404158;
  bVar20 = (bool)(param_5 != 2 & bVar6);
  __s1 = (byte *)(param_3 + uVar22);
  uVar16 = uVar15;
  bVar4 = bVar3;
  if (bVar20) {
    if (local_a0 == 0) {
LAB_004040d0:
      uVar19 = (ulong)*__s1;
      switch(uVar19) {
      case 0:
        goto switchD_004040e2_caseD_0;
      default:
        bVar20 = false;
        goto switchD_00403f4e_caseD_1;
      case 7:
        bVar17 = 0x61;
        goto LAB_00403de5;
      case 8:
        bVar17 = 0x62;
        break;
      case 9:
switchD_004040e2_caseD_9:
        bVar17 = 0x74;
        break;
      case 10:
switchD_004040e2_caseD_a:
        bVar17 = 0x6e;
        break;
      case 0xb:
switchD_004040e2_caseD_b:
        bVar17 = 0x76;
        goto LAB_00403de5;
      case 0xc:
switchD_004040e2_caseD_c:
        bVar17 = 0x66;
LAB_00403de5:
        if (local_5c) {
          bVar25 = false;
          goto LAB_00403d38;
        }
LAB_00403df0:
        bVar23 = false;
        goto LAB_00403bab;
      case 0xd:
        bVar20 = false;
switchD_00403ac8_caseD_d:
        bVar25 = param_5 == 2;
        uVar19 = 0xd;
        bVar13 = 0x72;
        goto LAB_00403d00;
      case 0x20:
        bVar25 = false;
LAB_0040412a:
        uVar19 = 0x20;
        goto LAB_004040f2;
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
switchD_00403ac8_caseD_21:
        bVar25 = false;
        goto LAB_00403d0b;
      case 0x23:
      case 0x7e:
        bVar26 = false;
LAB_0040410a:
        if (uVar22 == 0) {
          bVar25 = false;
          bVar23 = bVar20;
          bVar20 = bVar26;
          goto LAB_00403b18;
        }
        bVar23 = false;
        goto LAB_00403b2f;
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
LAB_004040f2:
        bVar24 = false;
        bVar23 = bVar20;
        bVar20 = bVar25;
        goto LAB_00403b31;
      case 0x27:
        bVar20 = false;
        goto switchD_00403f4e_caseD_27;
      case 0x3f:
        bVar20 = false;
        goto switchD_00403f4e_caseD_3f;
      case 0x5c:
        bVar20 = false;
        goto switchD_00403ac8_caseD_5c;
      case 0x7b:
      case 0x7d:
        bVar20 = false;
        goto switchD_00403f4e_caseD_7b;
      }
      bVar25 = false;
      bVar23 = false;
      goto joined_r0x00403d27;
    }
    if ((param_4 == 0xffffffffffffffff) && (1 < local_a0)) {
      param_4 = strlen(param_3);
    }
    if ((param_4 < uVar22 + local_a0) || (iVar7 = memcmp(__s1,local_78,local_a0), iVar7 != 0))
    goto LAB_004040d0;
    if (!local_5c) {
      uVar19 = (ulong)*__s1;
      bVar25 = bVar20;
      switch(uVar19) {
      case 0:
        goto switchD_00403ac8_caseD_0;
      default:
        goto switchD_00403f4e_caseD_1;
      case 7:
        bVar17 = 0x61;
        goto LAB_00403df0;
      case 8:
        bVar25 = false;
        bVar23 = false;
        bVar17 = 0x62;
        break;
      case 9:
        goto switchD_004040e2_caseD_9;
      case 10:
        goto switchD_004040e2_caseD_a;
      case 0xb:
        goto switchD_004040e2_caseD_b;
      case 0xc:
        goto switchD_004040e2_caseD_c;
      case 0xd:
        goto switchD_00403ac8_caseD_d;
      case 0x20:
        goto LAB_0040412a;
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
        goto switchD_00403ac8_caseD_21;
      case 0x23:
      case 0x7e:
        bVar26 = bVar20;
        goto LAB_0040410a;
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
        goto LAB_004040f2;
      case 0x27:
        goto switchD_00403f4e_caseD_27;
      case 0x3f:
        goto switchD_00403f4e_caseD_3f;
      case 0x5c:
        goto switchD_00403ac8_caseD_5c;
      case 0x7b:
      case 0x7d:
        goto switchD_00403f4e_caseD_7b;
      }
      goto LAB_00403b72;
    }
    goto LAB_00403d4a;
  }
  uVar19 = (ulong)*__s1;
  switch(uVar19) {
  case 0:
    if (bVar6) {
switchD_004040e2_caseD_0:
      if (!local_5c) {
        bVar20 = false;
switchD_00403ac8_caseD_0:
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
            goto LAB_00403c28;
          }
LAB_00403e6a:
          param_1[uVar16] = 0x5c;
          uVar15 = uVar16;
        }
        else if (uVar15 < uVar9) goto LAB_00403e6a;
        uVar16 = uVar15 + 1;
        bVar24 = bVar23;
        if (param_5 == 2) {
          bVar17 = 0x30;
          bVar23 = false;
          bVar4 = bVar3;
          goto LAB_00403c28;
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
LAB_00403ea9:
        bVar17 = (byte)uVar19;
        bVar23 = false;
        uVar15 = uVar16;
        bVar4 = bVar3;
        if ((bool)(bVar6 ^ 1U | bVar26)) goto LAB_00403c28;
        goto LAB_00403b31;
      }
      bVar26 = param_5 == 2;
      goto LAB_00403d3c;
    }
    if ((param_6 & 1) == 0) {
      bVar25 = param_5 == 2;
      uVar19 = 0;
      bVar23 = false;
      bVar20 = false;
      goto LAB_00403b18;
    }
    uVar22 = uVar22 + 1;
    goto LAB_004039d8;
  default:
switchD_00403f4e_caseD_1:
    bVar25 = bVar6;
    if (sVar8 != 1) {
      local_40[0] = (mbstate_t)0x0;
      if (param_4 == 0xffffffffffffffff) {
        param_4 = strlen(param_3);
      }
      uVar21 = 0;
      do {
        uVar1 = uVar22 + uVar21;
        lVar11 = FUN_00406b40(&local_44,param_3 + uVar1,param_4 - uVar1,local_40);
        if (lVar11 == 0) break;
        if (lVar11 == -1) {
          bVar23 = false;
          goto LAB_0040485a;
        }
        if (lVar11 == -2) {
          if ((param_4 <= uVar1) || (param_3[uVar1] == '\0')) goto LAB_00404997;
          goto LAB_00404987;
        }
        if (((param_5 == 2) && (local_5c)) && (lVar11 != 1)) {
          pcVar12 = param_3 + uVar1 + 1;
          do {
            if (((byte)(*pcVar12 + 0xa5U) < 0x22) &&
               ((1L << (*pcVar12 + 0xa5U & 0x3f) & 0x20000002bU) != 0)) {
              param_5 = 2;
              goto LAB_00403d3c;
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
      goto LAB_0040485a;
    }
    ppuVar10 = __ctype_b_loc();
    uVar21 = 1;
    bVar25 = ((*ppuVar10)[uVar19] & 0x4000) == 0;
    bVar23 = !bVar25;
    bVar25 = (bool)(bVar25 & bVar6);
    goto LAB_00403f24;
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
    goto LAB_00403f62;
  case 10:
    uVar19 = 10;
    bVar13 = 0x6e;
    goto LAB_00403f62;
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
LAB_00403f62:
    bVar25 = param_5 == 2;
    bVar20 = (bool)(local_5c & bVar25);
    if (bVar20) {
LAB_00403f7a:
      param_5 = 2;
      goto LAB_00403d3c;
    }
    break;
  case 0x20:
    uVar19 = 0x20;
    goto LAB_00403b06;
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
LAB_00403b06:
    bVar25 = param_5 == 2;
    if ((local_5c) && (bVar25)) goto LAB_00403f7a;
    goto LAB_00403b18;
  case 0x23:
  case 0x7e:
LAB_00403afd:
    bVar25 = param_5 == 2;
    if (uVar22 == 0) goto LAB_00403b06;
    goto LAB_00403d0b;
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
    goto switchD_00403f4e_caseD_25;
  case 0x27:
switchD_00403f4e_caseD_27:
    bVar5 = bVar23;
    if (param_5 != 2) {
      bVar25 = false;
      uVar19 = 0x27;
      goto LAB_00403b18;
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
      goto LAB_00403c28;
    }
    goto LAB_00403d3c;
  case 0x3f:
switchD_00403f4e_caseD_3f:
    if (param_5 == 2) {
      if (!local_5c) {
        bVar17 = 0x3f;
        bVar24 = false;
        bVar23 = false;
        goto LAB_00403c28;
      }
      goto LAB_00403d3c;
    }
    if (param_5 != 5) {
      bVar25 = param_5 == 2;
      uVar19 = 0x3f;
      bVar23 = false;
      goto LAB_00403b18;
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
        goto LAB_00403ea9;
      }
      goto LAB_00403d4a;
    }
    bVar25 = false;
    uVar19 = 0x3f;
    bVar23 = false;
    goto LAB_00403b18;
  case 0x5c:
    if (param_5 != 2) {
switchD_00403ac8_caseD_5c:
      uVar19 = 0x5c;
      bVar17 = 0x5c;
      bVar13 = 0x5c;
      bVar25 = (bool)(bVar6 & local_5c & local_a0 != 0);
      if (!bVar25) break;
      uVar22 = uVar22 + 1;
      bVar23 = false;
      goto LAB_00403c44;
    }
    if (local_5c) goto LAB_00403d3c;
    uVar22 = uVar22 + 1;
    bVar23 = false;
    bVar17 = 0x5c;
    goto LAB_00403c44;
  case 0x7b:
  case 0x7d:
switchD_00403f4e_caseD_7b:
    bVar24 = param_4 != 1;
    if (param_4 == 0xffffffffffffffff) {
      bVar24 = param_3[1] != '\0';
    }
    bVar25 = param_5 == 2;
    if (!bVar24) goto LAB_00403afd;
    goto LAB_00403d0b;
  }
LAB_00403d00:
  if (!bVar6) {
LAB_00403d0b:
    bVar23 = false;
    goto LAB_00403b18;
  }
  bVar23 = false;
  bVar17 = bVar13;
  goto joined_r0x00403d27;
LAB_00404158:
  if ((uVar15 == 0) && ((bool)(local_5c & param_5 == 2))) {
    param_5 = 2;
LAB_00403d3c:
    if (bVar26) {
      param_5 = 4;
    }
LAB_00403d4a:
    uVar9 = FUN_00403930(param_1,uVar9,param_3,param_4,param_5,param_6 & 0xfffffffd,0,param_8,
                         param_9);
    return uVar9;
  }
  bVar26 = (bool)(param_5 == 2 & (local_5c ^ 1U));
  bVar23 = (bool)(local_5c ^ 1U);
  if ((!bVar26) || (bVar23 = bVar26, !bVar5)) {
LAB_00404a2d:
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
    uVar9 = FUN_00403930(param_1,local_70,param_3,param_4,5,param_6,param_7,param_8,param_9);
    return uVar9;
  }
  local_5b = uVar9 == 0 && local_70 != 0;
  param_2 = local_70;
  bVar23 = bVar5;
  if (uVar9 != 0 || local_70 == 0) goto LAB_00404a2d;
LAB_004041b6:
  *param_1 = 0x27;
  param_5 = 2;
  uVar15 = 1;
  local_78 = "\'";
  local_a0 = 1;
  local_5c = false;
  uVar9 = param_2;
  goto LAB_004039c8;
  while (__s1[uVar21] != 0) {
LAB_00404987:
    uVar21 = uVar21 + 1;
    if (param_4 <= uVar22 + uVar21) break;
  }
LAB_00404997:
  bVar23 = false;
LAB_0040485a:
  if (1 < uVar21) {
LAB_0040441e:
    bVar26 = false;
    uVar21 = uVar21 + uVar22;
    uVar16 = uVar22;
    do {
      bVar17 = (byte)uVar19;
      if (bVar25) {
        bVar26 = param_5 == 2;
        if (local_5c) goto LAB_00403d3c;
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
        if (uVar21 <= uVar22) goto LAB_00403bbd;
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
        if (uVar21 <= uVar22) goto LAB_00403c44;
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
LAB_00403f24:
  if (bVar25) {
    bVar23 = false;
    bVar25 = bVar6;
    goto LAB_0040441e;
  }
switchD_00403f4e_caseD_25:
  bVar25 = param_5 == 2;
LAB_00403b18:
  bVar17 = (byte)uVar19;
  bVar24 = (bool)((bVar6 ^ 1U | bVar25) ^ 1 | local_5c);
  bVar26 = bVar20;
  if (bVar24) {
LAB_00403b2f:
    bVar24 = false;
    bVar20 = bVar26;
LAB_00403b31:
    bVar17 = (byte)uVar19;
    uVar16 = uVar15;
    bVar4 = bVar3;
    if ((param_7 == 0) || ((*(uint *)(param_7 + (uVar19 >> 5) * 4) >> (bVar17 & 0x1f) & 1) == 0))
    goto LAB_00403c28;
    bVar25 = param_5 == 2;
  }
  else {
LAB_00403c28:
    bVar25 = param_5 == 2;
    uVar15 = uVar16;
    bVar3 = bVar4;
    if (!bVar20) {
      uVar22 = uVar22 + 1;
      bVar3 = (bool)((bVar24 ^ 1U) & bVar4);
LAB_00403c44:
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
      goto LAB_00403bbd;
    }
  }
joined_r0x00403d27:
  if (local_5c) {
LAB_00403d38:
    bVar26 = (bool)(bVar6 & bVar25);
    goto LAB_00403d3c;
  }
LAB_00403b72:
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
LAB_00403bab:
  if (uVar15 < uVar9) {
    param_1[uVar15] = 0x5c;
  }
  uVar15 = uVar15 + 1;
  uVar22 = uVar22 + 1;
  bVar4 = bVar3;
LAB_00403bbd:
  bVar3 = bVar4;
  if (uVar15 < uVar9) {
    param_1[uVar15] = bVar17;
  }
  uVar15 = uVar15 + 1;
  if (!bVar23) {
    bVar2 = false;
  }
  goto LAB_004039d8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00404b60(int param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

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
  puVar8 = (undefined4 *)PTR_DAT_0060b298;
  if (DAT_0060b2b0 <= param_1) {
    if (param_1 == 0x7fffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_00405bc0();
    }
    if (PTR_DAT_0060b298 == &DAT_0060b2a0) {
      puVar8 = (undefined4 *)FUN_004059d0(0);
      uVar6 = PTR_DAT_0060b2a8._4_4_;
      uVar5 = PTR_DAT_0060b2a8._0_4_;
      uVar3 = _UNK_0060b2a4;
      PTR_DAT_0060b298 = (undefined *)puVar8;
      *puVar8 = _DAT_0060b2a0;
      puVar8[1] = uVar3;
      puVar8[2] = uVar5;
      puVar8[3] = uVar6;
    }
    else {
      puVar8 = (undefined4 *)FUN_004059d0(PTR_DAT_0060b298);
      PTR_DAT_0060b298 = (undefined *)puVar8;
    }
    memset(puVar8 + (long)DAT_0060b2b0 * 4,0,(long)((param_1 + 1) - DAT_0060b2b0) << 4);
    DAT_0060b2b0 = param_1 + 1;
  }
  uVar2 = param_4[1];
  puVar10 = (ulong *)(puVar8 + (long)param_1 * 4);
  uVar4 = *puVar10;
  __ptr = (undefined *)puVar10[1];
  uVar9 = FUN_00403930(__ptr,uVar4,param_2,param_3,*param_4,uVar2 | 1,param_4 + 2,
                       *(undefined8 *)(param_4 + 10),*(undefined8 *)(param_4 + 0xc));
  if (uVar4 <= uVar9) {
    uVar9 = uVar9 + 1;
    *puVar10 = uVar9;
    if (__ptr != &DAT_0060b360) {
      free(__ptr);
    }
    __ptr = (undefined *)FUN_00405970(uVar9);
    uVar3 = *param_4;
    puVar10[1] = (ulong)__ptr;
    FUN_00403930(__ptr,uVar9,param_2,param_3,uVar3,uVar2 | 1,param_4 + 2,
                 *(undefined8 *)(param_4 + 10),*(undefined8 *)(param_4 + 0xc));
  }
  *piVar7 = iVar1;
  return __ptr;
}


void FUN_00404d00(undefined *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_0060b460;
  }
  FUN_00405b70(param_1,0x38);
  *piVar2 = iVar1;
  return;
}


undefined4 FUN_00404d40(undefined4 *param_1)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)&DAT_0060b460;
  }
  return *param_1;
}


void FUN_00404d50(undefined4 *param_1,undefined4 param_2)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)&DAT_0060b460;
  }
  *param_1 = param_2;
  return;
}


uint FUN_00404d60(undefined *param_1,byte param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_0060b460;
  }
  uVar1 = *(uint *)(param_1 + (ulong)(param_2 >> 5) * 4 + 8);
  uVar2 = uVar1 >> (param_2 & 0x1f);
  *(uint *)(param_1 + (ulong)(param_2 >> 5) * 4 + 8) =
       ((param_3 ^ uVar2) & 1) << (param_2 & 0x1f) ^ uVar1;
  return uVar2 & 1;
}


undefined4 FUN_00404da0(undefined *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_0060b460;
  }
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_1 + 4) = param_2;
  return uVar1;
}


void FUN_00404dc0(undefined4 *param_1,long param_2,long param_3)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)&DAT_0060b460;
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


void FUN_00404df0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 *param_5)

{
  int iVar1;
  int *piVar2;
  
  if (param_5 == (undefined4 *)0x0) {
    param_5 = (undefined4 *)&DAT_0060b460;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  FUN_00403930(param_1,param_2,param_3,param_4,*param_5,param_5[1],param_5 + 2,
               *(undefined8 *)(param_5 + 10),*(undefined8 *)(param_5 + 0xc));
  *piVar2 = iVar1;
  return;
}


undefined8 FUN_00404e70(undefined8 param_1,undefined8 param_2,long *param_3,undefined4 *param_4)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  
  if (param_4 == (undefined4 *)0x0) {
    param_4 = (undefined4 *)&DAT_0060b460;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  uVar5 = (uint)(param_3 == (long *)0x0) | param_4[1];
  lVar3 = FUN_00403930(0,0,param_1,param_2,*param_4,uVar5,param_4 + 2,*(undefined8 *)(param_4 + 10),
                       *(undefined8 *)(param_4 + 0xc));
  uVar4 = FUN_00405970(lVar3 + 1);
  FUN_00403930(uVar4,lVar3 + 1,param_1,param_2,*param_4,uVar5,param_4 + 2,
               *(undefined8 *)(param_4 + 10),*(undefined8 *)(param_4 + 0xc));
  *piVar2 = iVar1;
  if (param_3 != (long *)0x0) {
    *param_3 = lVar3;
  }
  return uVar4;
}


void FUN_00404f60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00404e70(param_1,param_2,0,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404f70(void)

{
  void **ppvVar1;
  void *__ptr;
  undefined *__ptr_00;
  void **ppvVar2;
  
  __ptr_00 = PTR_DAT_0060b298;
  if (1 < DAT_0060b2b0) {
    ppvVar2 = (void **)(PTR_DAT_0060b298 + 0x18);
    ppvVar1 = (void **)(PTR_DAT_0060b298 + (ulong)(DAT_0060b2b0 - 2) * 0x10 + 0x28);
    do {
      __ptr = *ppvVar2;
      ppvVar2 = ppvVar2 + 2;
      free(__ptr);
    } while (ppvVar2 != ppvVar1);
  }
  if (*(undefined **)(__ptr_00 + 8) != &DAT_0060b360) {
    free(*(undefined **)(__ptr_00 + 8));
    _DAT_0060b2a0 = 0x100;
    PTR_DAT_0060b2a8 = &DAT_0060b360;
  }
  if (__ptr_00 != &DAT_0060b2a0) {
    free(__ptr_00);
    PTR_DAT_0060b298 = &DAT_0060b2a0;
  }
  DAT_0060b2b0 = 1;
  return;
}


void FUN_00405010(undefined8 param_1,undefined8 param_2)

{
  FUN_00404b60(param_1,param_2,0xffffffffffffffff,&DAT_0060b460);
  return;
}


void FUN_00405030(void)

{
  FUN_00404b60();
  return;
}


void FUN_00405040(undefined8 param_1)

{
  FUN_00404b60(0,param_1,0xffffffffffffffff,&DAT_0060b460);
  return;
}


void FUN_00405060(undefined8 param_1,undefined8 param_2)

{
  FUN_00404b60(0,param_1,param_2,&DAT_0060b460);
  return;
}


void FUN_00405080(undefined8 param_1,int param_2,undefined8 param_3)

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
    FUN_00404b60(param_1,param_3,0xffffffffffffffff,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_004050f0(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

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
    FUN_00404b60(param_1,param_3,param_4,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00405160(undefined4 param_1,undefined8 param_2)

{
  FUN_00405080(0,param_1,param_2);
  return;
}


void FUN_00405170(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_004050f0(0,param_1,param_2,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405180(undefined8 param_1,undefined8 param_2,byte param_3)

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
  
  local_18 = DAT_0060b490;
  local_48 = _DAT_0060b460;
  uStack_40 = uRam000000000060b468;
  local_38 = _DAT_0060b470;
  uStack_30 = uRam000000000060b478;
  puVar1 = (uint *)((long)&uStack_40 + (ulong)(param_3 >> 5) * 4);
  local_28 = _DAT_0060b480;
  uStack_20 = uRam000000000060b488;
  uVar2 = *puVar1;
  *puVar1 = (~(uVar2 >> (param_3 & 0x1f)) & 1) << (param_3 & 0x1f) ^ uVar2;
  FUN_00404b60(0,param_1,param_2,&local_48);
  return;
}


void FUN_004051f0(undefined8 param_1,char param_2)

{
  FUN_00405180(param_1,0xffffffffffffffff,(int)param_2);
  return;
}


void FUN_00405200(undefined8 param_1)

{
  FUN_00405180(param_1,0xffffffffffffffff,0x3a);
  return;
}


void FUN_00405220(undefined8 param_1,undefined8 param_2)

{
  FUN_00405180(param_1,param_2,0x3a);
  return;
}


void FUN_00405230(undefined8 param_1,int param_2,undefined8 param_3)

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
    FUN_00404b60(param_1,param_3,0xffffffffffffffff,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004052a0(undefined8 param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5
                 )

{
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  long lStack_20;
  long local_18;
  
  uStack_40 = uRam000000000060b468;
  local_38 = _DAT_0060b470;
  uStack_30 = uRam000000000060b478;
  local_28 = _DAT_0060b480;
  lStack_20 = uRam000000000060b488;
  local_18 = DAT_0060b490;
  local_48 = CONCAT44((int)((ulong)_DAT_0060b460 >> 0x20),10);
  if ((param_2 != 0) && (param_3 != 0)) {
    lStack_20 = param_2;
    local_18 = param_3;
    FUN_00404b60(param_1,param_4,param_5,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00405310(void)

{
  FUN_004052a0();
  return;
}


void FUN_00405320(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_004052a0(0,param_1,param_2,param_3,0xffffffffffffffff);
  return;
}


void FUN_00405340(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_004052a0(0,param_1,param_2,param_3,param_4);
  return;
}


void FUN_00405360(void)

{
  FUN_00404b60();
  return;
}


void FUN_00405370(undefined8 param_1,undefined8 param_2)

{
  FUN_00404b60(0,param_1,param_2,&DAT_0060b260);
  return;
}


void FUN_00405390(undefined8 param_1,undefined8 param_2)

{
  FUN_00404b60(param_1,param_2,0xffffffffffffffff,&DAT_0060b260);
  return;
}


void FUN_004053b0(undefined8 param_1)

{
  FUN_00404b60(0,param_1,0xffffffffffffffff,&DAT_0060b260);
  return;
}


undefined8
FUN_004053d0(FILE *param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5,
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
  uVar1 = dcgettext(0,&DAT_0040904b,5);
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
    goto LAB_0040564c;
  case 5:
    uVar1 = param_5[3];
    uVar4 = param_5[2];
    uVar5 = param_5[1];
    uVar6 = *param_5;
    uVar7 = dcgettext(0,"Written by %s, %s, %s,\n%s, and %s.\n",5);
LAB_0040564c:
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
    goto LAB_004056e9;
  case 7:
    uVar1 = param_5[2];
    uVar4 = param_5[5];
    uVar5 = param_5[4];
    uVar6 = param_5[3];
    local_58 = param_5[1];
    uVar7 = *param_5;
    uVar3 = dcgettext(0,"Written by %s, %s, %s,\n%s, %s, %s, and %s.\n",5);
LAB_004056e9:
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
    goto LAB_004054ca;
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
LAB_004054ca:
  uVar1 = __fprintf_chk(param_1,1,uVar3,uVar7,local_50,local_58,uVar6,uVar5,uVar4,uVar1,local_48);
  return uVar1;
}


void FUN_004057b0(void)

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
  FUN_004053d0();
  return;
}


void FUN_004057d0(void)

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
  FUN_004053d0();
  return;
}


void FUN_00405830(void)

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
  FUN_004053d0();
  return;
}


void FUN_004058f0(void)

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


void FUN_00405970(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00405bc0();
  }
  return;
}


void FUN_00405990(ulong param_1,ulong param_2)

{
  if ((-1 < SUB168(ZEXT816(param_1) * ZEXT816(param_2),0)) &&
     (SUB168(ZEXT816(param_1) * ZEXT816(param_2) >> 0x40,0) == 0)) {
    FUN_00405970();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00405bc0();
}


void thunk_FUN_00405970(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00405bc0();
  }
  return;
}


void * FUN_004059d0(void *param_1,size_t param_2)

{
  void *pvVar1;
  
  if ((param_2 == 0) && (param_1 != (void *)0x0)) {
    free(param_1);
    return (void *)0x0;
  }
  pvVar1 = realloc(param_1,param_2);
  if ((pvVar1 == (void *)0x0) && (param_2 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00405bc0();
  }
  return pvVar1;
}


void FUN_00405a10(undefined8 param_1,ulong param_2,ulong param_3)

{
  if ((-1 < SUB168(ZEXT816(param_2) * ZEXT816(param_3),0)) &&
     (SUB168(ZEXT816(param_2) * ZEXT816(param_3) >> 0x40,0) == 0)) {
    FUN_004059d0();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00405bc0();
}


void FUN_00405a40(long param_1,ulong *param_2,ulong param_3)

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
    if ((SUB168(ZEXT816(uVar2) * ZEXT816(param_3),0) < 0) || (uVar3 != 0)) goto LAB_00405a9b;
  }
  else {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x5555555555555554);
    uVar3 = SUB168(auVar1 % ZEXT816(param_3),0);
    if (SUB168(auVar1 / ZEXT816(param_3),0) <= uVar2) {
LAB_00405a9b:
                    /* WARNING: Subroutine does not return */
      FUN_00405bc0(param_1,param_2,uVar3);
    }
    uVar2 = (uVar2 >> 1) + 1 + uVar2;
  }
  *param_2 = uVar2;
  FUN_004059d0(param_1,uVar2 * param_3);
  return;
}


void FUN_00405ad0(long param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (param_1 == 0) {
    if (uVar1 == 0) {
      *param_2 = 0x80;
      FUN_004059d0(0,0x80);
      return;
    }
    if ((long)uVar1 < 0) goto LAB_00405b1a;
  }
  else {
    if (0x5555555555555553 < uVar1) {
LAB_00405b1a:
                    /* WARNING: Subroutine does not return */
      FUN_00405bc0();
    }
    uVar1 = (uVar1 >> 1) + 1 + uVar1;
  }
  *param_2 = uVar1;
  FUN_004059d0(param_1,uVar1);
  return;
}


void FUN_00405b20(size_t param_1)

{
  void *__s;
  
  __s = (void *)FUN_00405970();
  memset(__s,0,param_1);
  return;
}


void FUN_00405b40(size_t param_1,ulong param_2)

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
  FUN_00405bc0();
}


void FUN_00405b70(void *param_1,size_t param_2)

{
  void *__dest;
  
  __dest = (void *)FUN_00405970(param_2);
  memcpy(__dest,param_1,param_2);
  return;
}


void FUN_00405ba0(char *param_1)

{
  void *__dest;
  size_t sVar1;
  
  sVar1 = strlen(param_1);
  __dest = (void *)FUN_00405970(sVar1 + 1);
  memcpy(__dest,param_1,sVar1 + 1);
  return;
}


void FUN_00405bc0(void)

{
  undefined8 uVar1;
  
  uVar1 = dcgettext(0,"memory exhausted",5);
  error(DAT_0060b240,0,"%s",uVar1);
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00405c00(char *param_1,size_t param_2)

{
  char *pcVar1;
  
  pcVar1 = strndup(param_1,param_2);
  if (pcVar1 != (char *)0x0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00405bc0();
}


int FUN_00405c20(FILE *param_1)

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
      if (_Var4 == -1) goto LAB_00405c87;
    }
    iVar1 = FUN_00405ca0(param_1);
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
LAB_00405c87:
  iVar1 = fclose(param_1);
  return iVar1;
}


void FUN_00405ca0(FILE *param_1)

{
  int iVar1;
  
  if (param_1 != (FILE *)0x0) {
    iVar1 = __freading();
    if ((iVar1 != 0) && ((param_1->_flags & 0x100U) != 0)) {
      FUN_00405d10(param_1,0,1);
      fflush(param_1);
      return;
    }
  }
  fflush(param_1);
  return;
}


long FUN_00405ce0(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  if (*(ulong *)(param_1 + 0x28) < *(ulong *)(param_1 + 0x20) ||
      *(ulong *)(param_1 + 0x28) == *(ulong *)(param_1 + 0x20)) {
    lVar1 = *(long *)(param_1 + 8);
    lVar2 = *(long *)(param_1 + 0x10) - lVar1;
    if (lVar2 != 0) {
      *param_2 = lVar2;
      return lVar1;
    }
  }
  return 0;
}


ulong FUN_00405d10(FILE *param_1,__off_t param_2,int param_3)

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


void FUN_00405d70(long param_1,int *param_2)

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
      if (iVar3 <= iVar8) goto LAB_00405dec;
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
      if (iVar9 <= iVar3) goto LAB_00405dec;
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
LAB_00405dec:
  param_2[0xc] = iVar2;
  param_2[0xb] = iVar1 + (iVar2 - iVar3);
  return;
}


int FUN_00405e50(int param_1,undefined8 *param_2,char *param_3,char **param_4,undefined4 *param_5,
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
      if ((iVar5 == 0) && (sVar7 = strlen(__s1_00), sVar7 == sVar15)) goto LAB_00406070;
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
            if (local_70 == (char *)0x0) goto LAB_00405fb0;
          }
          else if (local_70 == (char *)0x0) {
            local_70 = (char *)calloc((long)iVar5,1);
            if (local_70 == (char *)0x0) {
              bVar3 = true;
              goto LAB_00405fb0;
            }
            bVar4 = true;
            local_70[(int)local_44] = '\x01';
          }
          local_70[lVar16] = '\x01';
        }
      }
LAB_00405fb0:
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
              __fprintf_chk(__stream,1,&DAT_004094d1,param_9,*param_4);
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
LAB_00406070:
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


uint FUN_00406470(uint param_1,undefined8 *param_2,char *param_3,long param_4,undefined8 param_5,
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
LAB_004064ba:
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
          goto LAB_004065bd;
        }
        pbVar8 = *(byte **)(param_7 + 8);
      }
      param_7[10] = 0;
    }
LAB_004065bd:
    param_7[6] = 1;
    cVar2 = *param_3;
LAB_004065c8:
    if (cVar2 == ':') {
      uVar3 = 0;
    }
    if (pbVar8 == (byte *)0x0) goto LAB_00406538;
LAB_004065dc:
    if (*pbVar8 == 0) goto LAB_00406538;
  }
  else {
    if (param_7[6] == 0) goto LAB_004064ba;
    cVar2 = *param_3;
    pbVar8 = *(byte **)(param_7 + 8);
    if ((cVar2 - 0x2bU & 0xfd) != 0) goto LAB_004065c8;
    pcVar4 = param_3 + 1;
    param_3 = param_3 + 1;
    if (*pcVar4 == ':') {
      uVar3 = 0;
    }
    if (pbVar8 != (byte *)0x0) goto LAB_004065dc;
LAB_00406538:
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
        FUN_00405d70(param_2,param_7);
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
LAB_004066a6:
      if (uVar11 != param_1) {
        *param_7 = uVar11;
      }
      return 0xffffffff;
    }
    lVar6 = 3;
    pbVar8 = (byte *)param_2[(int)uVar11];
    pbVar9 = pbVar8;
    pbVar10 = &DAT_004094e9;
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
          FUN_00405d70(param_2,param_7);
          uVar11 = param_7[0xb];
        }
      }
      param_7[0xc] = param_1;
      *param_7 = param_1;
      goto LAB_004066a6;
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
        puVar15 = &DAT_004094e9;
        goto LAB_00406805;
      }
      if ((int)param_6 != 0) {
        if (pbVar8[2] == 0) {
          pcVar4 = strchr(param_3,(int)(char)bVar14);
          param_6 = param_6 & 0xffffffff;
          if (pcVar4 != (char *)0x0) goto LAB_004067b0;
        }
        *(byte **)(param_7 + 8) = pbVar8 + 1;
        uVar11 = FUN_00405e50(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar3,
                              &DAT_004094ea);
        if (uVar11 != 0xffffffff) {
          return uVar11;
        }
        pbVar8 = (byte *)param_2[(int)*param_7];
      }
    }
LAB_004067b0:
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
  puVar15 = &DAT_00409508;
LAB_00406805:
  uVar3 = FUN_00405e50(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar3,puVar15);
  return uVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406a40(void)

{
  DAT_0060b4a0 = DAT_0060b2bc;
  _DAT_0060b4a4 = DAT_0060b2b8;
  FUN_00406470();
  DAT_0060b2bc = DAT_0060b4a0;
  DAT_0060b4f0 = DAT_0060b4b0;
  _DAT_0060b2b4 = DAT_0060b4a8;
  return;
}


void FUN_00406aa0(void)

{
  FUN_00406a40();
  return;
}


void FUN_00406ac0(void)

{
  FUN_00406a40();
  return;
}


void FUN_00406ae0(void)

{
  FUN_00406470();
  return;
}


void FUN_00406b00(void)

{
  FUN_00406a40();
  return;
}


void FUN_00406b20(void)

{
  FUN_00406470();
  return;
}


size_t FUN_00406b40(wchar_t *param_1,byte *param_2,size_t param_3,mbstate_t *param_4)

{
  char cVar1;
  size_t sVar2;
  wchar_t local_1c;
  
  if (param_2 == (byte *)0x0) {
    param_3 = 1;
    param_2 = (byte *)0x409507;
  }
  else {
    if (param_3 == 0) {
      return 0xfffffffffffffffe;
    }
    if (param_1 != (wchar_t *)0x0) goto LAB_00406b64;
  }
  param_1 = &local_1c;
LAB_00406b64:
  sVar2 = mbrtowc(param_1,(char *)param_2,param_3,param_4);
  if ((0xfffffffffffffffd < sVar2) && (cVar1 = FUN_00406e80(0), cVar1 == '\0')) {
    sVar2 = 1;
    *param_1 = (uint)*param_2;
  }
  return sVar2;
}


ulong * FUN_00406bc0(ulong *param_1,char param_2,ulong param_3)

{
  char cVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  
  if (param_3 == 0) {
    return (ulong *)0x0;
  }
  if (((ulong)param_1 & 7) == 0) {
LAB_00406c00:
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
      if (((ulong)param_1 & 7) == 0) goto LAB_00406c00;
      cVar1 = *(char *)param_1;
    }
  }
  return param_1;
}


ulong FUN_00406cd0(uint *param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  
  lVar2 = __fpending();
  uVar1 = *param_1;
  uVar3 = FUN_00405c20(param_1);
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


ulong FUN_00406d30(FILE *param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  __off_t _Var5;
  ulong uVar6;
  ulong local_1028 [512];
  
  if (param_2 == 0) {
    return 0;
  }
  for (lVar2 = FUN_00407450(); lVar2 != 0; lVar2 = lVar2 + -1) {
    lVar3 = FUN_00405ce0(param_1);
    if ((lVar3 != 0) && (local_1028[0] != 0)) {
      uVar6 = local_1028[0];
      if (param_2 < local_1028[0]) {
        uVar6 = param_2;
      }
      param_1->_IO_read_ptr = param_1->_IO_read_ptr + uVar6;
      param_2 = param_2 - uVar6;
      if (param_2 == 0) {
        return 0;
      }
      lVar2 = lVar2 - uVar6;
      if (lVar2 == 0) break;
    }
    iVar1 = fgetc(param_1);
    if (iVar1 == -1) goto LAB_00406dbc;
    param_2 = param_2 - 1;
    if (param_2 == 0) {
      return 0;
    }
  }
  iVar1 = fileno(param_1);
  if ((iVar1 < 0) || (_Var5 = lseek(iVar1,0,1), _Var5 < 0)) {
    while( true ) {
      uVar6 = 0x1000;
      if (param_2 < 0x1001) {
        uVar6 = param_2;
      }
      uVar4 = __fread_chk(local_1028,0x1000,1,uVar6,param_1);
      if (uVar4 < uVar6) break;
      param_2 = param_2 - uVar6;
      if (param_2 == 0) {
        return 0;
      }
    }
LAB_00406dbc:
    iVar1 = ferror(param_1);
    uVar6 = (ulong)-(uint)(iVar1 != 0);
  }
  else {
    uVar6 = FUN_00405d10(param_1,param_2,1);
  }
  return uVar6;
}


bool FUN_00406e80(int param_1)

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
    pbVar5 = &DAT_0040950c;
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

char * FUN_00406ee0(void)

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
  if (DAT_0060b4d8 != (char *)0x0) goto LAB_00406f1a;
  pcVar7 = getenv("CHARSETALIASDIR");
  if ((pcVar7 == (char *)0x0) || (*pcVar7 == '\0')) {
    sVar6 = 0x73;
    sVar5 = 0x65;
    __n = 100;
    pcVar7 = 
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib"
    ;
LAB_00407005:
    __file = (char *)malloc(sVar6);
    if (__file != (char *)0x0) {
      memcpy(__file,pcVar7,__n);
      __file[__n] = '/';
      goto LAB_00407026;
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
        goto LAB_00407005;
      }
      sVar6 = __n + 0xe;
    }
    __file = (char *)malloc(sVar6);
    if (__file != (char *)0x0) {
      memcpy(__file,pcVar7,__n);
      sVar5 = __n;
LAB_00407026:
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
LAB_004070c0:
          pbVar8 = (byte *)__stream->_IO_read_ptr;
          if (__stream->_IO_read_end <= pbVar8) goto LAB_0040724c;
          do {
            __stream->_IO_read_ptr = (char *)(pbVar8 + 1);
            uVar4 = (uint)*pbVar8;
            __ptr = pcVar7;
            while( true ) {
              pcVar7 = __ptr;
              if ((uVar4 - 9 < 2) || (uVar4 == 0x20)) goto LAB_004070c0;
              if (uVar4 == 0x23) goto LAB_004072b1;
              ungetc(uVar4,__stream);
              iVar2 = fscanf(__stream,"%50s %50s",&local_b8,&local_78);
              puVar13 = &local_b8;
              if (iVar2 < 2) goto LAB_0040725f;
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
                FUN_00405c20(__stream);
                goto LAB_00407064;
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
LAB_0040724c:
              uVar4 = __uflow(__stream);
              __ptr = pcVar7;
              if (uVar4 == 0xffffffff) goto LAB_0040725f;
            }
          } while( true );
        }
        close(iVar2);
      }
      goto LAB_0040705e;
    }
  }
  DAT_0060b4d8 = "";
LAB_00406f1a:
  cVar1 = *DAT_0060b4d8;
  pcVar7 = DAT_0060b4d8;
  do {
    if (cVar1 == '\0') {
LAB_00406f74:
      if (*__s1 == '\0') {
        __s1 = "ASCII";
      }
      return __s1;
    }
    iVar2 = strcmp(__s1,pcVar7);
    if ((iVar2 == 0) || ((cVar1 == '*' && (pcVar7[1] == '\0')))) {
      sVar6 = strlen(pcVar7);
      __s1 = pcVar7 + sVar6 + 1;
      goto LAB_00406f74;
    }
    sVar6 = strlen(pcVar7);
    sVar5 = strlen(pcVar7 + sVar6 + 1);
    pcVar7 = pcVar7 + sVar6 + 1 + sVar5 + 1;
    cVar1 = *pcVar7;
  } while( true );
LAB_004072b1:
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
  if (uVar4 == 0xffffffff) goto LAB_0040725f;
  goto LAB_004070c0;
LAB_0040725f:
  FUN_00405c20(__stream);
  if (local_d0 == 0) {
LAB_0040705e:
    pcVar7 = "";
  }
  else {
    pcVar7[local_d0] = '\0';
  }
LAB_00407064:
  free(__file);
  DAT_0060b4d8 = pcVar7;
  goto LAB_00406f1a;
}


long FUN_00407450(uint *param_1)

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


/* WARNING: Removing unreachable block (ram,0x004074b3) */
/* WARNING: Removing unreachable block (ram,0x004074b8) */

void FUN_00407480(void)

{
  __DT_INIT();
  return;
}


void FUN_004074e0(void)

{
  return;
}


void FUN_004074f0(undefined8 param_1)

{
  __cxa_atexit(param_1,0,DAT_0060b228);
  return;
}


undefined8 FUN_00407508(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  FUN_00401e81();
  return;
}

