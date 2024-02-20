
#include "decompile_ghidra.h"
#define __int64 long long
#define __int32 int
#define __int16 short
#define __int8 char

void switchD_0040a130caseD_b(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401da5(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401daa(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401daf(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401db4(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void switchD_0040bc7acaseD_0(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void switchD_004106fccaseD_5(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


uint FUN_00401dd0(int param_1,undefined *param_2)

{
  size_t *psVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  ulong uVar8;
  FILE *__stream;
  __ssize_t _Var9;
  undefined uVar10;
  size_t *__s1;
  undefined uVar11;
  undefined uVar12;
  int *piVar13;
  long lVar14;
  char *pcVar15;
  byte bVar16;
  size_t *psVar17;
  bool bVar18;
  size_t *local_110;
  size_t *local_108;
  char *local_e0;
  size_t local_d8;
  long local_d0;
  stat local_c8;
  
  bVar16 = 0;
  FUN_00409f40(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils",
                 "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale"
                );
  textdomain("coreutils");
  FUN_00412a60(FUN_00403120);
  local_110 = (size_t *)0x0;
  local_108 = (size_t *)0x0;
  pcVar15 = (char *)0x0;
  psVar1 = (size_t *)0x0;
  psVar17 = (size_t *)0x0;
LAB_00401e40:
  do {
    do {
      __s1 = psVar1;
      iVar4 = FUN_0040d290(param_1,param_2,"d:f:I::r:Rs:u",&PTR_s_date_004141c0,0);
      if (iVar4 == -1) {
        bVar3 = (psVar17 != (size_t *)0x0) + (__s1 != (size_t *)0x0) + (local_110 != (size_t *)0x0);
        if (1 < bVar3) {
          pcVar15 = "the options to specify dates for printing are mutually exclusive";
LAB_00402515:
          uVar12 = dcgettext(0,pcVar15,5);
          error(0,0,uVar12);
          goto LAB_00402418;
        }
        if ((bVar3 & 1 & bVar16) != 0) {
          pcVar15 = "the options to print and set the time may not be used together";
          goto LAB_00402515;
        }
        lVar14 = (long)DAT_0061b2fc;
        if (DAT_0061b2fc < param_1) {
          if (DAT_0061b2fc + 1 < param_1) goto LAB_004024ef;
          if (*(char *)param_2[lVar14] == '+') {
            if (pcVar15 != (char *)0x0) goto LAB_004024a0;
            pcVar15 = (char *)param_2[lVar14] + 1;
            DAT_0061b2fc = DAT_0061b2fc + 1;
          }
          else if (((bVar3 & 1) != 0) || (bVar16 != 0)) {
            uVar12 = FUN_0040bb60();
            pcVar15 = 
            "the argument %s lacks a leading \'+\';\nwhen using an option to specify date(s), any non-option\nargument must be a format string beginning with \'+\'"
            ;
            goto LAB_00402400;
          }
        }
        if ((pcVar15 == (char *)0x0) && (pcVar15 = nl_langinfo(0x2006c), *pcVar15 == '\0')) {
          pcVar15 = "%a %b %e %H:%M:%S %Z %Y";
        }
        pcVar7 = getenv("TZ");
        uVar12 = FUN_0040db40(pcVar7);
        if (__s1 == (size_t *)0x0) {
          bVar3 = (bVar16 ^ 1) & (bVar3 ^ 1);
          uVar6 = (uint)bVar3;
          __s1 = (size_t *)(ulong)uVar6;
          if (bVar3 == 0) {
            if (local_110 == (size_t *)0x0) {
              if (local_108 != (size_t *)0x0) {
                psVar17 = local_108;
              }
              cVar2 = FUN_00407bc0(&local_d8,psVar17,0,DAT_0061b338,uVar12,pcVar7);
              if (cVar2 == '\0') {
LAB_004023af:
                pcVar15 = (char *)FUN_0040bb60(psVar17);
                uVar11 = dcgettext(0,"invalid date %s",5);
                error(1,0,uVar11,pcVar15);
                goto LAB_004022ab;
              }
            }
            else {
              iVar4 = __xstat(1,(char *)local_110,&local_c8);
              if (iVar4 != 0) goto LAB_00402471;
              local_d8 = local_c8.st_mtim.tv_sec;
              local_d0 = local_c8.st_mtim.tv_nsec;
            }
            if (bVar16 != 0) {
LAB_004022ab:
              local_110 = &local_d8;
              iVar4 = FUN_0040bb80(local_110);
              if (iVar4 != 0) {
                uVar6 = 0;
                uVar11 = dcgettext(0,"cannot set date",5);
                piVar13 = __errno_location();
                error(0,*piVar13,uVar11);
                goto LAB_00402216;
              }
            }
            uVar6 = 1;
          }
          else {
            if (DAT_0061b2fc < param_1) {
              psVar17 = (size_t *)param_2[DAT_0061b2fc];
              cVar2 = FUN_00409c90(&local_d8,psVar17,7);
              local_d0 = 0;
              if (cVar2 == '\0') goto LAB_004023af;
              goto LAB_004022ab;
            }
            FUN_00404bc0(&local_d8);
          }
LAB_00402216:
          uVar5 = FUN_00402620(pcVar15,local_d8,local_d0,uVar12);
          param_2 = (undefined *)(ulong)(uVar6 & uVar5);
        }
        else {
          iVar4 = strcmp((char *)__s1,"-");
          if (iVar4 == 0) {
            __s1 = (size_t *)dcgettext(0,"standard input",5);
            __stream = stdin;
          }
          else {
            __stream = fopen((char *)__s1,"r");
            if (__stream == (FILE *)0x0) goto LAB_004024c2;
          }
          local_110 = &local_d8;
          param_2 = (undefined *)0x1;
          local_e0 = (char *)0x0;
          local_d8 = 0;
          while (_Var9 = __getdelim(&local_e0,local_110,10,__stream), -1 < _Var9) {
            cVar2 = FUN_00407bc0(&local_c8,local_e0,0,DAT_0061b338,uVar12,pcVar7);
            if (cVar2 == '\0') {
              if (local_e0[_Var9 + -1] == '\n') {
                local_e0[_Var9 + -1] = '\0';
              }
              uVar11 = FUN_0040bb60(local_e0);
              uVar10 = dcgettext(0,"invalid date %s",5);
              param_2 = (undefined *)0x0;
              error(0,0,uVar10,uVar11);
            }
            else {
              uVar6 = FUN_00402620(pcVar15,local_c8.st_dev,local_c8.st_ino,uVar12);
              param_2 = (undefined *)(ulong)((uint)param_2 & uVar6);
            }
          }
          iVar4 = FUN_0040c420(__stream);
          if (iVar4 == -1) goto LAB_00402444;
          free(local_e0);
        }
        return (uint)param_2 ^ 1;
      }
      psVar1 = DAT_0061b4f0;
    } while (iVar4 == 0x66);
    psVar1 = __s1;
    if (iVar4 < 0x67) {
      if (iVar4 == 0x49) {
        uVar8 = 0;
        if (DAT_0061b4f0 != (size_t *)0x0) {
          lVar14 = FUN_00403040("--iso-8601",DAT_0061b4f0,&PTR_s_hours_00414420,&DAT_004143f0,4,
                                PTR_FUN_0061b278);
          uVar8 = (ulong)*(uint *)(&DAT_004143f0 + lVar14 * 4);
        }
        pcVar7 = "%Y-%m-%d" + uVar8 * 0x20;
      }
      else {
        if (iVar4 < 0x4a) {
          if (iVar4 == -0x83) {
            FUN_0040c050(stdout,"date","GNU coreutils",PTR_DAT_0061b270,"David MacKenzie",0);
                    /* WARNING: Subroutine does not return */
            exit(0);
          }
          if (iVar4 != -0x82) goto LAB_00402418;
          FUN_00402750(0);
          psVar1 = DAT_0061b4f0;
          goto LAB_00401e40;
        }
        if (iVar4 != 0x52) {
          psVar17 = DAT_0061b4f0;
          if (iVar4 != 100) goto LAB_00402418;
          goto LAB_00401e40;
        }
        pcVar7 = "%a, %d %b %Y %H:%M:%S %z";
      }
    }
    else {
      if (iVar4 == 0x75) {
        iVar4 = putenv("TZ=UTC0");
        if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0040c3e0();
        }
        tzset();
        goto LAB_00401e40;
      }
      if (iVar4 < 0x76) {
        if (iVar4 == 0x72) {
          local_110 = DAT_0061b4f0;
        }
        else {
          if (iVar4 != 0x73) goto LAB_00402418;
          local_108 = DAT_0061b4f0;
          bVar16 = 1;
        }
        goto LAB_00401e40;
      }
      if (iVar4 != 0x80) {
        if (iVar4 != 0x81) goto LAB_00402418;
        DAT_0061b338 = DAT_0061b338 | 1;
        goto LAB_00401e40;
      }
      lVar14 = FUN_00403040("--rfc-3339",DAT_0061b4f0,&PTR_s_date_00414430,&DAT_004143f8);
      pcVar7 = "%Y-%m-%d" + (ulong)*(uint *)(&DAT_004143f8 + lVar14 * 4) * 0x20;
    }
    bVar18 = pcVar15 != (char *)0x0;
    pcVar15 = pcVar7;
    if (bVar18) {
      do {
        uVar12 = dcgettext(0,"multiple output formats specified",5);
        error(1,0,uVar12);
LAB_00402444:
        uVar12 = FUN_0040b9e0(0,3,__s1);
        piVar13 = __errno_location();
        error(1,*piVar13,&DAT_004144ac,uVar12);
LAB_00402471:
        uVar12 = FUN_0040b9e0(0,3,local_110);
        piVar13 = __errno_location();
        error(1,*piVar13,&DAT_004144ac,uVar12);
LAB_004024a0:
        uVar12 = dcgettext(0,"multiple output formats specified",5);
        error(1,0,uVar12);
LAB_004024c2:
        uVar12 = FUN_0040b9e0(0,3,__s1);
        piVar13 = __errno_location();
        lVar14 = error(1,*piVar13,&DAT_004144ac,uVar12);
LAB_004024ef:
        uVar12 = FUN_0040bb60(param_2[lVar14 + 1]);
        pcVar15 = "extra operand %s";
LAB_00402400:
        uVar11 = dcgettext(0,pcVar15,5);
        error(0,0,uVar11,uVar12);
LAB_00402418:
        FUN_00402750(1);
      } while( true );
    }
  } while( true );
}


void FUN_00402540(undefined param_1,undefined param_2,undefined param_3)

{
  undefined unaff_retaddr;
  undefined auStack_8 [8];
  
  (*(code *)PTR___libc_start_main_0061aff0)
            (FUN_00401dd0,unaff_retaddr,&stack0x00000008,FUN_004129f0,FUN_00412a50,param_3,auStack_8
            );
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* WARNING: Removing unreachable block (ram,0x00402578) */
/* WARNING: Removing unreachable block (ram,0x00402582) */

void FUN_0040256b(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x004025b9) */

void FUN_0040258a(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x004025f6) */

void FUN_004025c1(void)

{
  if (DAT_0061b328 != '\0') {
    return;
  }
  FUN_0040256b();
  DAT_0061b328 = 1;
  return;
}


/* WARNING: Removing unreachable block (ram,0x004025b9) */

void thunk_FUN_0040258a(void)

{
  return;
}


undefined FUN_00402620(char *param_1,undefined param_2,ulong param_3,undefined param_4)

{
  char *pcVar1;
  long lVar2;
  undefined uVar3;
  undefined uVar4;
  undefined local_88;
  ulong local_80;
  undefined local_78 [32];
  undefined local_58 [72];
  
  local_88 = param_2;
  local_80 = param_3;
  lVar2 = FUN_0040de20(param_4,&local_88,local_58);
  if (lVar2 != 0) {
    if (param_1 == "%a, %d %b %Y %H:%M:%S %z") {
      setlocale(2,"C");
      FUN_00404ba0(stdout,"%a, %d %b %Y %H:%M:%S %z",local_58,param_4,local_80 & 0xffffffff);
      setlocale(2,"");
    }
    else {
      FUN_00404ba0(stdout,param_1,local_58,param_4,local_80 & 0xffffffff);
    }
    pcVar1 = stdout->_IO_write_ptr;
    if (pcVar1 < stdout->_IO_write_end) {
      stdout->_IO_write_ptr = pcVar1 + 1;
      *pcVar1 = '\n';
    }
    else {
      __overflow(stdout,10);
    }
    return 1;
  }
  uVar3 = FUN_00404c00(local_88,local_78);
  uVar3 = FUN_0040bb60(uVar3);
  uVar4 = dcgettext(0,"time %s is out of range",5);
  error(0,0,uVar4,uVar3);
  return 0;
}


void FUN_00402750(int param_1)

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
  
  uVar7 = DAT_0061b350;
  bVar13 = 0;
  if (param_1 != 0) {
    uVar3 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(stderr,1,uVar3,uVar7);
    goto LAB_0040278f;
  }
  uVar3 = dcgettext(0,
                    "Usage: %s [OPTION]... [+FORMAT]\n  or:  %s [-u|--utc|--universal] [MMDDhhmm[[CC]YY][.ss]]\n"
                    ,5);
  __printf_chk(1,uVar3,uVar7,uVar7);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "Display the current time in the given FORMAT, or set the system date.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nMandatory arguments to long options are mandatory for short options too.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -d, --date=STRING          display time described by STRING, not \'now\'\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --debug                annotate the parsed date,\n                              and warn about questionable usage to stderr\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -f, --file=DATEFILE        like --date; once for each line of DATEFILE\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -I[FMT], --iso-8601[=FMT]  output date/time in ISO 8601 format.\n                               FMT=\'date\' for date only (the default),\n                               \'hours\', \'minutes\', \'seconds\', or \'ns\'\n                               for date and time to the indicated precision.\n                               Example: 2006-08-14T02:34:56-06:00\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -R, --rfc-email            output date and time in RFC 5322 format.\n                               Example: Mon, 14 Aug 2006 02:34:56 -0600\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --rfc-3339=FMT         output date/time in RFC 3339 format.\n                               FMT=\'date\', \'seconds\', or \'ns\'\n                               for date and time to the indicated precision.\n                               Example: 2006-08-14 02:34:56-06:00\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -r, --reference=FILE       display the last modification time of FILE\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -s, --set=STRING           set time described by STRING\n  -u, --utc, --universal     print or set Coordinated Universal Time (UTC)\n"
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
                             "\nFORMAT controls the output.  Interpreted sequences are:\n\n  %%   a literal %\n  %a   locale\'s abbreviated weekday name (e.g., Sun)\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  %A   locale\'s full weekday name (e.g., Sunday)\n  %b   locale\'s abbreviated month name (e.g., Jan)\n  %B   locale\'s full month name (e.g., January)\n  %c   locale\'s date and time (e.g., Thu Mar  3 23:05:25 2005)\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  %C   century; like %Y, except omit last two digits (e.g., 20)\n  %d   day of month (e.g., 01)\n  %D   date; same as %m/%d/%y\n  %e   day of month, space padded; same as %_d\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  %F   full date; same as %Y-%m-%d\n  %g   last two digits of year of ISO week number (see %G)\n  %G   year of ISO week number (see %V); normally useful only with %V\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  %h   same as %b\n  %H   hour (00..23)\n  %I   hour (01..12)\n  %j   day of year (001..366)\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  %k   hour, space padded ( 0..23); same as %_H\n  %l   hour, space padded ( 1..12); same as %_I\n  %m   month (01..12)\n  %M   minute (00..59)\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  %n   a newline\n  %N   nanoseconds (000000000..999999999)\n  %p   locale\'s equivalent of either AM or PM; blank if not known\n  %P   like %p, but lower case\n  %q   quarter of year (1..4)\n  %r   locale\'s 12-hour clock time (e.g., 11:11:04 PM)\n  %R   24-hour hour and minute; same as %H:%M\n  %s   seconds since 1970-01-01 00:00:00 UTC\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  %S   second (00..60)\n  %t   a tab\n  %T   time; same as %H:%M:%S\n  %u   day of week (1..7); 1 is Monday\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  %U   week number of year, with Sunday as first day of week (00..53)\n  %V   ISO week number, with Monday as first day of week (01..53)\n  %w   day of week (0..6); 0 is Sunday\n  %W   week number of year, with Monday as first day of week (00..53)\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  %x   locale\'s date representation (e.g., 12/31/99)\n  %X   locale\'s time representation (e.g., 23:13:48)\n  %y   last two digits of year (00..99)\n  %Y   year\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  %z   +hhmm numeric time zone (e.g., -0400)\n  %:z  +hh:mm numeric time zone (e.g., -04:00)\n  %::z  +hh:mm:ss numeric time zone (e.g., -04:00:00)\n  %:::z  numeric time zone with : to necessary precision (e.g., -04, +05:30)\n  %Z   alphabetic time zone abbreviation (e.g., EDT)\n\nBy default, date pads numeric fields with zeroes.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "The following optional flags may follow \'%\':\n\n  -  (hyphen) do not pad the field\n  _  (underscore) pad with spaces\n  0  (zero) pad with zeros\n  ^  use upper case if possible\n  #  use opposite case if possible\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nAfter any flags comes an optional field width, as a decimal number;\nthen an optional modifier, which is either\nE to use the locale\'s alternate representations if available, or\nO to use the locale\'s alternate numeric symbols if available.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nExamples:\nConvert seconds since the epoch (1970-01-01 UTC) to a date\n  $ date --date=\'@2147483647\'\n\nShow the time on the west coast of the US (use tzselect(1) to find TZ)\n  $ TZ=\'America/Los_Angeles\' date\n\nShow the local time for 9AM next Friday on the west coast of the US\n  $ date --date=\'TZ=\"America/Los_Angeles\" 09:00 next Fri\'\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  local_88 = &DAT_00412adc;
  local_80 = "test invocation";
  local_78[0] = (byte *)0x412b56;
  local_78[1] = (byte *)0x412aee;
  local_78[2] = (byte *)0x412b04;
  local_78[3] = (byte *)0x412b0e;
  local_78[4] = (byte *)0x412b1d;
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
    lVar8 = 5;
    pbVar10 = (byte *)0x412be8;
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
        pbVar9 = (byte *)0x412be8;
        goto LAB_00402d3b;
      }
    }
    pbVar9 = (byte *)0x412be8;
    uVar7 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    pcVar4 = " invocation";
    __printf_chk(1,uVar7,"https://www.gnu.org/software/coreutils/","date");
  }
  else {
    uVar7 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar7,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
      iVar2 = strncmp(pcVar4,"en_",3);
      if (iVar2 != 0) {
LAB_00402d3b:
        uVar7 = dcgettext(0,"Report %s translation bugs to <https://translationproject.org/team/>\n"
                          ,5);
        __printf_chk(1,uVar7,"date");
      }
    }
    pcVar4 = " invocation";
    uVar7 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    __printf_chk(1,uVar7,"https://www.gnu.org/software/coreutils/","date");
    if (pbVar9 != (byte *)0x412be8) {
      pcVar4 = "";
    }
  }
  uVar7 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(1,uVar7,pbVar9,pcVar4);
LAB_0040278f:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}


void FUN_00402d70(void)

{
  FUN_00402750(1);
  return;
}


long FUN_00402d80(char *param_1,char **param_2,void *param_3,size_t param_4)

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
LAB_00402e17:
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
          goto LAB_00402e17;
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


void FUN_00402ea0(undefined param_1,undefined param_2,long param_3)

{
  undefined uVar1;
  undefined uVar2;
  undefined uVar3;
  
  if (param_3 == -1) {
    uVar1 = dcgettext(0,"invalid argument %s for %s",5);
  }
  else {
    uVar1 = dcgettext(0,"ambiguous argument %s for %s",5);
  }
  uVar2 = FUN_0040bb40(1,param_1);
  uVar3 = FUN_0040b830(0,8,param_2);
  error(0,0,uVar1,uVar3,uVar2);
  return;
}


void FUN_00402f20(long *param_1,void *param_2,size_t param_3)

{
  FILE *__stream;
  int iVar1;
  char *pcVar2;
  undefined uVar3;
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
      uVar3 = FUN_0040bb60(lVar5);
      __fprintf_chk(stderr,1,"\n  - %s",uVar3);
      lVar5 = param_1[lVar4];
      param_2 = (void *)((long)__s2 + param_3);
      __s1 = __s2;
      if (lVar5 == 0) goto LAB_00402ff0;
    }
    lVar4 = lVar4 + 1;
    param_2 = (void *)((long)__s2 + param_3);
    uVar3 = FUN_0040bb60(lVar5);
    __fprintf_chk(stderr,1,&DAT_004144aa,uVar3);
    lVar5 = param_1[lVar4];
  }
LAB_00402ff0:
  pcVar2 = stderr->_IO_write_ptr;
  if (pcVar2 < stderr->_IO_write_end) {
    stderr->_IO_write_ptr = pcVar2 + 1;
    *pcVar2 = '\n';
    return;
  }
  __overflow(stderr,10);
  return;
}


long FUN_00403040(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                 undefined param_5,code *param_6)

{
  long lVar1;
  
  lVar1 = FUN_00402d80(param_2,param_3,param_4,param_5);
  if (lVar1 < 0) {
    FUN_00402ea0(param_1,param_2,lVar1);
    FUN_00402f20(param_3,param_4,param_5);
    (*param_6)();
    lVar1 = -1;
  }
  return lVar1;
}


long FUN_004030b0(void *param_1,long *param_2,void *param_3,size_t param_4)

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


void FUN_00403100(undefined param_1)

{
  DAT_0061b348 = param_1;
  return;
}


void FUN_00403110(undefined param_1)

{
  DAT_0061b340 = param_1;
  return;
}


void FUN_00403120(void)

{
  int iVar1;
  int *piVar2;
  undefined uVar3;
  undefined uVar4;
  
  iVar1 = FUN_0040e0d0(stdout);
  if (iVar1 != 0) {
    piVar2 = __errno_location();
    if ((DAT_0061b340 == '\0') || (*piVar2 != 0x20)) {
      uVar3 = dcgettext(0,"write error",5);
      if (DAT_0061b348 == 0) {
        error(0,*piVar2,&DAT_004144ac,uVar3);
      }
      else {
        uVar4 = FUN_0040b9b0();
        error(0,*piVar2,"%s: %s",uVar4,uVar3);
      }
      goto LAB_0040319e;
    }
  }
  iVar1 = FUN_0040e0d0(stderr);
  if (iVar1 == 0) {
    return;
  }
LAB_0040319e:
                    /* WARNING: Subroutine does not return */
  _exit(DAT_0061b280);
}


void FUN_004031c0(FILE *param_1,byte *param_2,long param_3)

{
  byte bVar1;
  __int32_t **pp_Var2;
  byte *pbVar3;
  
  if (param_3 != 0) {
    pbVar3 = param_2 + param_3;
    pp_Var2 = __ctype_tolower_loc();
    do {
      bVar1 = *param_2;
      param_2 = param_2 + 1;
      fputc((*pp_Var2)[bVar1],param_1);
    } while (param_2 != pbVar3);
    return;
  }
  return;
}


void FUN_00403220(FILE *param_1,byte *param_2,long param_3)

{
  byte bVar1;
  __int32_t **pp_Var2;
  byte *pbVar3;
  
  if (param_3 != 0) {
    pbVar3 = param_2 + param_3;
    pp_Var2 = __ctype_toupper_loc();
    do {
      bVar1 = *param_2;
      param_2 = param_2 + 1;
      fputc((*pp_Var2)[bVar1],param_1);
    } while (param_2 != pbVar3);
    return;
  }
  return;
}


/* WARNING: Type propagation algorithm not settling */

ulong FUN_00403280(FILE *param_1,char *param_2,tm *param_3,char param_4,undefined param_5,
                  undefined param_6,uint param_7)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  long lVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  size_t sVar9;
  ulong uVar10;
  char *pcVar11;
  ulong uVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  int iVar16;
  char *pcVar17;
  char *pcVar18;
  uint uVar19;
  long lVar20;
  long lVar21;
  char *pcVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  size_t sVar28;
  ulong uVar29;
  char *__s;
  ulong uVar30;
  char *pcVar31;
  uint uVar32;
  bool bVar33;
  char *local_4a8;
  char local_490;
  uint local_478;
  undefined local_458;
  char local_456;
  char local_455 [19];
  char local_442 [10];
  undefined local_438;
  undefined uStack_430;
  undefined local_428;
  undefined uStack_420;
  undefined local_418;
  long lStack_410;
  char *local_408;
  
  __s = param_3->tm_zone;
  uVar19 = param_3->tm_hour;
  if (__s == (char *)0x0) {
    __s = "";
  }
  if ((int)uVar19 < 0xd) {
    if (uVar19 == 0) {
      uVar19 = 0xc;
    }
  }
  else {
    uVar19 = uVar19 - 0xc;
  }
  cVar14 = *param_2;
  uVar29 = 0;
  if (cVar14 == '\0') {
    return 0;
  }
LAB_004032ea:
  if (cVar14 == '%') {
    cVar14 = '\0';
    uVar6 = 0;
    cVar15 = param_4;
    do {
      local_478 = uVar6;
      param_2 = param_2 + 1;
      cVar13 = *param_2;
      cVar3 = cVar13 + -0x30;
      bVar33 = cVar13 == '0';
      while (uVar6 = (uint)cVar13, !bVar33) {
        if (!bVar33 && SBORROW1(cVar13,'0') == cVar3 < '\0') {
          if (cVar13 == '^') {
            cVar15 = '\x01';
            uVar6 = local_478;
          }
          else if (cVar13 != '_') {
LAB_004033ac:
            uVar27 = 0xffffffff;
            if (9 < uVar6 - 0x30) goto LAB_004033ba;
            uVar27 = 0;
            pcVar31 = param_2;
            goto LAB_00403413;
          }
          break;
        }
        if (cVar13 != '#') {
          if (cVar13 != '-') goto LAB_004033ac;
          break;
        }
        param_2 = param_2 + 1;
        cVar13 = *param_2;
        cVar14 = '\x01';
        cVar3 = cVar13 + -0x30;
        bVar33 = cVar3 == '\0';
      }
    } while( true );
  }
  if (0xfffffffffffffffd < uVar29) {
    return 0;
  }
  if (param_1 != (FILE *)0x0) {
    fputc((int)cVar14,param_1);
  }
  uVar29 = uVar29 + 1;
  pcVar31 = param_2;
  goto LAB_0040330a;
LAB_00403413:
  do {
    uVar6 = (uint)pcVar31[1];
    param_2 = pcVar31 + 1;
    uVar23 = uVar6 - 0x30;
    if ((int)uVar27 < 0xccccccd) {
      if ((uVar27 == 0xccccccc) && ('7' < *pcVar31)) goto LAB_00403456;
      uVar27 = *pcVar31 + -0x30 + uVar27 * 10;
    }
    else {
LAB_00403456:
      if (9 < uVar23) {
        uVar27 = 0x7fffffff;
        break;
      }
      uVar6 = (uint)pcVar31[2];
      uVar27 = 0x7fffffff;
      param_2 = pcVar31 + 2;
      uVar23 = uVar6 - 0x30;
    }
    pcVar31 = param_2;
  } while (uVar23 < 10);
LAB_004033ba:
  if (((char)uVar6 == 'E') || (uVar23 = uVar6, uVar32 = 0, (char)uVar6 == 'O')) {
    uVar23 = (uint)param_2[1];
    param_2 = param_2 + 1;
    uVar32 = uVar6;
  }
  cVar13 = (char)uVar23;
  pcVar11 = &local_456;
  pcVar31 = param_2;
  uVar6 = uVar19;
  uVar26 = uVar27;
  switch(uVar23 & 0xff) {
  case 0:
    cVar14 = param_2[-1];
    param_2 = param_2 + -1;
LAB_0040382b:
    uVar6 = 0;
    if (-1 < (int)uVar27) {
      uVar6 = uVar27;
    }
    uVar12 = (ulong)(int)uVar6;
    if (cVar14 != '%') break;
    local_4a8 = (char *)1;
    if (uVar12 != 0) {
      local_4a8 = (char *)uVar12;
    }
    uVar30 = 1;
    pcVar31 = param_2;
    goto LAB_00403863;
  case 0x25:
    uVar6 = 0;
    if (-1 < (int)uVar27) {
      uVar6 = uVar27;
    }
    uVar12 = (ulong)(int)uVar6;
    local_4a8 = (char *)1;
    if (uVar12 != 0) {
      local_4a8 = (char *)uVar12;
    }
    if (uVar32 != 0) {
      uVar30 = 1;
      goto LAB_00403863;
    }
    if (~uVar29 <= local_4a8) {
      return 0;
    }
    if (param_1 != (FILE *)0x0) {
      if (1 < (int)uVar27) {
        lVar20 = 0;
        if (local_478 == 0x30) {
          do {
            lVar20 = lVar20 + 1;
            fputc(0x30,param_1);
          } while ((long)(int)uVar27 + -1 != lVar20);
        }
        else {
          do {
            lVar20 = lVar20 + 1;
            fputc(0x20,param_1);
          } while ((long)(int)uVar27 + -1 != lVar20);
        }
        uVar23 = (uint)*param_2;
      }
      fputc(uVar23,param_1);
    }
    goto LAB_0040395c;
  case 0x3a:
    pcVar31 = param_2 + 1;
    lVar20 = 1;
    cVar14 = param_2[1];
    while (cVar14 == ':') {
      lVar20 = lVar20 + 1;
      pcVar31 = param_2 + lVar20;
      cVar14 = param_2[lVar20];
    }
    if (cVar14 == 'z') goto LAB_00403de9;
    break;
  case 0x41:
  case 0x42:
  case 0x61:
    if (uVar32 != 0) break;
    if (cVar14 != '\0') {
      cVar15 = cVar14;
    }
LAB_00403490:
    local_490 = '\0';
    uVar32 = 0;
    goto LAB_004034b0;
  case 0x43:
    if (uVar32 != 0x45) {
      uVar26 = 2;
      iVar16 = param_3->tm_year;
      iVar7 = iVar16 / 100 + 0x13;
      bVar33 = iVar16 < -0x76c;
      uVar6 = iVar7 - ((uint)(0 < iVar7) & (uint)(iVar16 % 100) >> 0x1f);
      uVar24 = 0;
      bVar5 = false;
      goto LAB_004035fc;
    }
LAB_00404793:
    uVar23 = 0;
    goto LAB_0040360f;
  case 0x44:
    if (uVar32 == 0) {
      local_4a8 = "%m/%d/%y";
      goto LAB_004036bc;
    }
    break;
  case 0x46:
    if (uVar32 == 0) {
      local_4a8 = "%Y-%m-%d";
      goto LAB_004036bc;
    }
    break;
  case 0x47:
  case 0x56:
  case 0x67:
    if (uVar32 != 0x45) {
      iVar16 = param_3->tm_year;
      iVar1 = param_3->tm_yday;
      iVar25 = param_3->tm_wday;
      iVar7 = (iVar1 - iVar25) + 0x17e;
      uVar6 = iVar16 + -100 + (iVar16 >> 0x1f & 400U);
      iVar7 = (iVar1 - iVar7) + 3 + (iVar7 / 7) * 7;
      if (iVar7 < 0) {
        uVar6 = uVar6 - 1;
        iVar7 = 0x16d;
        if (((uVar6 & 3) == 0) && (iVar7 = 0x16e, uVar6 == ((int)uVar6 / 100) * 100)) {
          iVar7 = ~-(uint)((int)uVar6 % 400 == 0) + 0x16e;
        }
        iVar8 = -1;
        iVar25 = ((iVar1 + iVar7) - iVar25) + 0x17e;
        iVar7 = ((iVar1 + iVar7) - iVar25) + 3 + (iVar25 / 7) * 7;
      }
      else {
        iVar8 = 0x16d;
        if (((uVar6 & 3) == 0) && (iVar8 = 0x16e, uVar6 == ((int)uVar6 / 100) * 100)) {
          iVar8 = (uVar6 == ((int)uVar6 / 400) * 400) + 0x16d;
        }
        iVar25 = ((iVar1 - iVar8) - iVar25) + 0x17e;
        iVar1 = ((iVar1 - iVar8) - iVar25) + 3 + (iVar25 / 7) * 7;
        if (-1 < iVar1) {
          iVar7 = iVar1;
        }
        iVar8 = (iVar1 >> 0x1f) + 1;
      }
      if (cVar13 == 'G') {
        uVar6 = iVar16 + 0x76c + iVar8;
        uVar26 = 4;
        bVar33 = iVar16 < -0x76c - iVar8;
        uVar24 = 0;
        bVar5 = false;
        goto LAB_004035fc;
      }
      if (cVar13 == 'g') {
        uVar26 = 2;
        uVar23 = (iVar16 % 100 + iVar8) % 100;
        uVar6 = uVar23;
        if ((int)uVar23 < 0) {
          uVar6 = uVar23 + 100;
          if (iVar16 < -0x76c - iVar8) {
            uVar6 = -uVar23;
          }
        }
      }
      else {
        uVar6 = iVar7 / 7 + 1;
        uVar26 = 2;
      }
      goto LAB_004035f0;
    }
    break;
  case 0x48:
    if (uVar32 != 0x45) {
      uVar6 = param_3->tm_hour;
      uVar26 = 2;
      goto LAB_004035f0;
    }
    break;
  case 0x49:
    if (uVar32 != 0x45) {
      uVar26 = 2;
      goto LAB_004035f0;
    }
    break;
  case 0x4d:
    if (uVar32 != 0x45) {
      uVar6 = param_3->tm_min;
      uVar26 = 2;
      goto LAB_004035f0;
    }
    break;
  case 0x4e:
    if (uVar32 != 0x45) {
      uVar6 = param_7;
      if (uVar27 == 0xffffffff) {
        uVar27 = 9;
        uVar26 = 9;
      }
      else {
        uVar23 = uVar27;
        uVar24 = param_7;
        if ((int)uVar27 < 9) {
          do {
            uVar23 = uVar23 + 1;
            uVar6 = (int)uVar24 / 10;
            uVar24 = (int)uVar24 / 10;
          } while (uVar23 != 9);
        }
      }
      goto LAB_004035f0;
    }
    break;
  case 0x50:
    local_490 = '\x01';
    goto LAB_00404216;
  case 0x52:
    local_4a8 = "%H:%M";
    goto LAB_004036bc;
  case 0x53:
    if (uVar32 != 0x45) {
      uVar6 = param_3->tm_sec;
      uVar26 = 2;
      goto LAB_004035f0;
    }
    break;
  case 0x54:
    local_4a8 = "%H:%M:%S";
LAB_004036bc:
    uVar10 = FUN_00403280(0,local_4a8,param_3,cVar15,param_5,param_6,param_7);
    uVar30 = 0;
    if (-1 < (int)uVar27) {
      uVar30 = (long)(int)uVar27;
    }
    uVar12 = uVar30;
    if (uVar30 <= uVar10) {
      uVar12 = uVar10;
    }
    if (~uVar29 <= uVar12) {
      return 0;
    }
    if (param_1 != (FILE *)0x0) {
      if (uVar10 < uVar30) {
        uVar30 = (ulong)(int)uVar27;
        if (local_478 == 0x30) {
          if (uVar30 != uVar10) {
            lVar20 = 0;
            do {
              lVar20 = lVar20 + 1;
              fputc(0x30,param_1);
            } while (uVar30 - uVar10 != lVar20);
          }
        }
        else {
          lVar20 = 0;
          if (uVar30 != uVar10) {
            do {
              lVar20 = lVar20 + 1;
              fputc(0x20,param_1);
            } while (uVar30 - uVar10 != lVar20);
          }
        }
      }
      FUN_00403280(param_1,local_4a8,param_3,cVar15,param_5,param_6,param_7);
    }
    goto LAB_00403796;
  case 0x55:
    if (uVar32 != 0x45) {
      iVar7 = (param_3->tm_yday - param_3->tm_wday) + 7;
      iVar16 = (int)((ulong)((long)iVar7 * -0x6db6db6d) >> 0x20);
LAB_004039c3:
      uVar6 = (iVar16 + iVar7 >> 2) - (iVar7 >> 0x1f);
      uVar26 = 2;
      goto LAB_004035f0;
    }
    break;
  case 0x57:
    if (uVar32 != 0x45) {
      iVar7 = param_3->tm_wday + 6;
      iVar7 = ((iVar7 / 7) * 7 - iVar7) + 7 + param_3->tm_yday;
      iVar16 = (int)((ulong)((long)iVar7 * -0x6db6db6d) >> 0x20);
      goto LAB_004039c3;
    }
    break;
  case 0x58:
  case 99:
  case 0x78:
    if (uVar32 != 0x4f) goto switchD_004033d3_caseD_72;
    break;
  case 0x59:
    if (uVar32 == 0x45) goto LAB_00404793;
    if (uVar32 == 0x4f) break;
    uVar26 = 4;
    bVar33 = param_3->tm_year < -0x76c;
    uVar6 = param_3->tm_year + 0x76c;
    uVar24 = 0;
    bVar5 = false;
    goto LAB_00403a60;
  case 0x5a:
    if (cVar14 != '\0') {
      cVar15 = '\0';
    }
    sVar9 = strlen(__s);
    sVar28 = (size_t)(int)uVar27;
    uVar12 = 0;
    if (-1 < (int)uVar27) {
      uVar12 = sVar28;
    }
    local_4a8 = (char *)uVar12;
    if (uVar12 <= sVar9) {
      local_4a8 = (char *)sVar9;
    }
    if (~uVar29 <= local_4a8) {
      return 0;
    }
    if (param_1 != (FILE *)0x0) {
      if (sVar9 < uVar12) {
        if (local_478 == 0x30) {
          if (sVar28 != sVar9) {
            lVar20 = 0;
            do {
              lVar20 = lVar20 + 1;
              fputc(0x30,param_1);
            } while (sVar28 - sVar9 != lVar20);
          }
        }
        else {
          lVar20 = 0;
          if (sVar28 != sVar9) {
            do {
              lVar20 = lVar20 + 1;
              fputc(0x20,param_1);
            } while (sVar28 - sVar9 != lVar20);
          }
        }
      }
      if (cVar14 == '\0') {
        if (cVar15 == '\0') {
          fwrite(__s,sVar9,1,param_1);
        }
        else {
          FUN_00403220(param_1,__s,sVar9);
        }
      }
      else {
        FUN_004031c0(param_1,__s,sVar9);
      }
    }
LAB_0040395c:
    uVar29 = uVar29 + (long)local_4a8;
    goto LAB_0040330a;
  case 0x62:
  case 0x68:
    if (cVar14 != '\0') {
      cVar15 = cVar14;
    }
    if (uVar32 == 0) goto LAB_00403490;
    break;
  case 100:
    if (uVar32 != 0x45) {
      uVar6 = param_3->tm_mday;
      uVar26 = 2;
      goto LAB_004035f0;
    }
    break;
  case 0x65:
    if (uVar32 != 0x45) {
      uVar6 = param_3->tm_mday;
LAB_00403c20:
      uVar26 = 2;
      if ((local_478 != 0x30) && (local_478 != 0x2d)) {
        local_478 = 0x5f;
      }
      goto LAB_004035f0;
    }
    break;
  case 0x6a:
    if (uVar32 != 0x45) {
      uVar26 = 3;
      bVar33 = param_3->tm_yday < -1;
      uVar6 = param_3->tm_yday + 1;
      uVar24 = 0;
      bVar5 = false;
      goto LAB_004035fc;
    }
    break;
  case 0x6b:
    if (uVar32 != 0x45) {
      uVar6 = param_3->tm_hour;
      goto LAB_00403c20;
    }
    break;
  case 0x6c:
    if (uVar32 != 0x45) goto LAB_00403c20;
    break;
  case 0x6d:
    if (uVar32 != 0x45) {
      uVar26 = 2;
      bVar33 = param_3->tm_mon < -1;
      uVar6 = param_3->tm_mon + 1;
      uVar24 = 0;
      bVar5 = false;
      goto LAB_004035fc;
    }
    break;
  case 0x6e:
    uVar6 = 0;
    if (-1 < (int)uVar27) {
      uVar6 = uVar27;
    }
    uVar12 = (ulong)(int)uVar6;
    if (uVar12 == 0) {
      uVar12 = 1;
    }
    if (~uVar29 <= uVar12) {
      return 0;
    }
    if (param_1 != (FILE *)0x0) {
      if (1 < (int)uVar27) {
        lVar20 = 0;
        if (local_478 == 0x30) {
          do {
            lVar20 = lVar20 + 1;
            fputc(0x30,param_1);
          } while ((long)(int)uVar27 + -1 != lVar20);
        }
        else {
          do {
            lVar20 = lVar20 + 1;
            fputc(0x20,param_1);
          } while ((long)(int)uVar27 + -1 != lVar20);
        }
      }
      fputc(10,param_1);
    }
    goto LAB_00403796;
  case 0x70:
    local_490 = '\0';
LAB_00404216:
    cVar13 = 'p';
    if (cVar14 != '\0') {
      cVar15 = '\0';
      local_490 = cVar14;
    }
LAB_004035af:
    if (uVar32 != 0) {
      uVar23 = 0;
      goto LAB_00403621;
    }
    goto LAB_004034b0;
  case 0x71:
    uVar23 = 1;
    uVar26 = 1;
    if (uVar32 == 0x4f) goto LAB_0040360f;
    bVar5 = false;
    bVar33 = false;
    uVar24 = 0;
    uVar6 = (param_3->tm_mon * 0xb >> 5) + 1;
    goto LAB_00403a67;
  case 0x72:
switchD_004033d3_caseD_72:
    local_490 = '\0';
    goto LAB_004035af;
  case 0x73:
    pcVar31 = local_442 + 1;
    local_418 = *(undefined *)&param_3->tm_isdst;
    lStack_410 = param_3->tm_gmtoff;
    local_438 = *(undefined *)param_3;
    uStack_430 = *(undefined *)&param_3->tm_hour;
    local_428 = *(undefined *)&param_3->tm_mon;
    uStack_420 = *(undefined *)&param_3->tm_wday;
    local_408 = param_3->tm_zone;
    lVar21 = FUN_0040ded0(param_6,&local_438);
    lVar20 = lVar21;
    do {
      lVar4 = lVar20 / 10;
      cVar14 = (char)lVar20 + (char)lVar4 * -10;
      if (lVar21 < 0) {
        cVar14 = -cVar14;
      }
      pcVar31 = pcVar31 + -1;
      *pcVar31 = cVar14 + '0';
      lVar20 = lVar4;
    } while (lVar4 != 0);
    uVar26 = 1;
    if (0 < (int)uVar27) {
      uVar26 = uVar27;
    }
    if (lVar21 < 0) goto LAB_00404450;
    goto LAB_00403f7b;
  case 0x74:
    uVar6 = 0;
    if (-1 < (int)uVar27) {
      uVar6 = uVar27;
    }
    uVar12 = (ulong)(int)uVar6;
    if (uVar12 == 0) {
      uVar12 = 1;
    }
    if (~uVar29 <= uVar12) {
      return 0;
    }
    if (param_1 != (FILE *)0x0) {
      if (1 < (int)uVar27) {
        lVar20 = 0;
        if (local_478 == 0x30) {
          do {
            lVar20 = lVar20 + 1;
            fputc(0x30,param_1);
          } while ((long)(int)uVar27 + -1 != lVar20);
        }
        else {
          do {
            lVar20 = lVar20 + 1;
            fputc(0x20,param_1);
          } while ((long)(int)uVar27 + -1 != lVar20);
        }
      }
      fputc(9,param_1);
    }
LAB_00403796:
    uVar29 = uVar29 + uVar12;
    goto LAB_0040330a;
  case 0x75:
    uVar6 = (param_3->tm_wday + 6) % 7 + 1;
    uVar26 = 1;
    goto LAB_004035f0;
  case 0x77:
    if (uVar32 != 0x45) {
      uVar6 = param_3->tm_wday;
      uVar26 = 1;
      goto LAB_004035f0;
    }
    break;
  case 0x79:
    if (uVar32 == 0x45) goto LAB_00404793;
    uVar26 = 2;
    uVar23 = param_3->tm_year % 100;
    uVar6 = uVar23;
    if ((int)uVar23 < 0) {
      uVar6 = uVar23 + 100;
      if (param_3->tm_year < -0x76c) {
        uVar6 = -uVar23;
      }
    }
LAB_004035f0:
    uVar24 = 0;
    bVar5 = false;
    bVar33 = SUB41(uVar6 >> 0x1f,0);
LAB_004035fc:
    if (uVar32 != 0x4f) {
LAB_00403a60:
      if (bVar33 != false) goto LAB_00403a65;
LAB_00403a67:
      pcVar31 = local_442 + 1;
      do {
        pcVar11 = pcVar31;
        pcVar22 = pcVar31 + -1;
        if ((uVar24 & 1) != 0) {
          pcVar31[-1] = ':';
          pcVar11 = pcVar31 + -1;
          pcVar22 = pcVar31 + -2;
        }
        pcVar31 = pcVar22;
        uVar24 = (int)uVar24 >> 1;
        uVar23 = (uint)((ulong)uVar6 / 10);
        pcVar11[-1] = (char)uVar6 + (char)((ulong)uVar6 / 10) * -10 + '0';
        bVar2 = 9 < uVar6;
        uVar6 = uVar23;
      } while ((bVar2) || (uVar24 != 0));
      if ((int)uVar26 < (int)uVar27) {
        uVar26 = uVar27;
      }
      if (bVar33 == false) {
        if (bVar5) {
          if (local_478 == 0x2d) {
            local_490 = '+';
            goto LAB_00404464;
          }
          cVar14 = '+';
LAB_00403b03:
          pcVar22 = local_442 + (1 - (long)pcVar31);
          iVar7 = (uVar26 - 1) - (int)pcVar22;
          pcVar11 = (char *)~uVar29;
          if (iVar7 < 1) {
            uVar6 = 0;
            if (-1 < (int)uVar27) {
              uVar6 = uVar27;
            }
            pcVar18 = (char *)(long)(int)uVar6;
            pcVar17 = (char *)0x1;
            if (pcVar18 != (char *)0x0) {
              pcVar17 = pcVar18;
            }
            if (pcVar11 <= pcVar17) {
              return 0;
            }
            if (param_1 != (FILE *)0x0) {
              if ((uVar26 == 0) && ((char *)0x1 < pcVar18)) {
                lVar20 = (long)(int)uVar27;
                if (local_478 == 0x30) {
                  if (lVar20 != 1) {
                    lVar21 = 0;
                    do {
                      lVar21 = lVar21 + 1;
                      fputc(0x30,param_1);
                    } while (lVar20 + -1 != lVar21);
                    local_478 = 0x30;
                  }
                }
                else {
                  lVar21 = 0;
                  if (lVar20 != 1) {
                    do {
                      lVar21 = lVar21 + 1;
                      fputc(0x20,param_1);
                    } while (lVar20 + -1 != lVar21);
                  }
                }
              }
              fputc((int)cVar14,param_1);
            }
            uVar29 = uVar29 + (long)pcVar17;
            pcVar11 = (char *)~uVar29;
          }
          else {
            if (local_478 == 0x5f) goto LAB_00404668;
            if (pcVar11 <= (char *)(long)(int)uVar26) {
              return 0;
            }
            uVar6 = 0;
            if (-1 < (int)uVar27) {
              uVar6 = uVar27;
            }
            pcVar17 = (char *)(long)(int)uVar6;
            pcVar18 = (char *)0x1;
            if (pcVar17 != (char *)0x0) {
              pcVar18 = pcVar17;
            }
            if (pcVar11 <= pcVar18) {
              return 0;
            }
            if (param_1 != (FILE *)0x0) {
              if ((uVar26 == 0) && ((char *)0x1 < pcVar17)) {
                lVar20 = (long)(int)uVar27;
                if (local_478 == 0x30) {
                  if (lVar20 != 1) {
                    lVar21 = 0;
                    do {
                      lVar21 = lVar21 + 1;
                      fputc(0x30,param_1);
                    } while (lVar20 + -1 != lVar21);
                  }
                }
                else {
                  lVar21 = 0;
                  if (lVar20 != 1) {
                    do {
                      lVar21 = lVar21 + 1;
                      fputc(0x20,param_1);
                    } while (lVar20 + -1 != lVar21);
                  }
                }
              }
              fputc((int)cVar14,param_1);
            }
            uVar29 = uVar29 + (long)pcVar18;
LAB_00403be7:
            if (param_1 != (FILE *)0x0) {
              uVar12 = 0;
              do {
                uVar12 = uVar12 + 1;
                fputc(0x30,param_1);
              } while (uVar12 < (ulong)(long)iVar7);
            }
            uVar29 = uVar29 + (long)iVar7;
            pcVar18 = (char *)0x0;
            uVar27 = 0;
            pcVar11 = (char *)~uVar29;
          }
        }
        else {
LAB_00403f7b:
          pcVar22 = local_442 + (1 - (long)pcVar31);
          pcVar11 = (char *)~uVar29;
          if ((local_478 == 0x2d) || (iVar7 = uVar26 - (int)pcVar22, iVar7 < 1)) {
            uVar6 = 0;
            if (-1 < (int)uVar27) {
              uVar6 = uVar27;
            }
            pcVar18 = (char *)(long)(int)uVar6;
            goto LAB_00403fb7;
          }
          if (local_478 != 0x5f) {
            if (pcVar11 <= (char *)(long)(int)uVar26) {
              return 0;
            }
            goto LAB_00403be7;
          }
          cVar14 = '\0';
LAB_00404668:
          uVar12 = (ulong)iVar7;
          if (~uVar29 <= uVar12) {
            return 0;
          }
          if (param_1 != (FILE *)0x0) {
            uVar30 = 0;
            do {
              uVar30 = uVar30 + 1;
              fputc(0x20,param_1);
            } while (uVar30 < uVar12);
          }
          uVar29 = uVar29 + uVar12;
          uVar6 = uVar27 - iVar7;
          bVar33 = iVar7 < (int)uVar27;
          uVar27 = 0;
          if (bVar33) {
            uVar27 = uVar6;
          }
          pcVar11 = (char *)~uVar29;
          if (cVar14 == '\0') {
            pcVar18 = (char *)(long)(int)uVar27;
            local_478 = 0x5f;
            pcVar22 = local_442 + (1 - (long)pcVar31);
          }
          else {
            pcVar18 = (char *)(long)(int)uVar27;
            pcVar22 = (char *)0x1;
            if (pcVar18 != (char *)0x0) {
              pcVar22 = pcVar18;
            }
            if (pcVar11 <= pcVar22) {
              return 0;
            }
            if (param_1 != (FILE *)0x0) {
              if ((uVar26 == 0) && (1 < uVar27)) {
                pcVar11 = (char *)0x0;
                do {
                  pcVar11 = pcVar11 + 1;
                  fputc(0x20,param_1);
                } while (pcVar18 + -1 != pcVar11);
              }
              fputc((int)cVar14,param_1);
            }
            uVar29 = uVar29 + (long)pcVar22;
            local_478 = 0x5f;
            pcVar22 = local_442 + (1 - (long)pcVar31);
            pcVar11 = (char *)~uVar29;
          }
        }
      }
      else {
LAB_00404450:
        cVar14 = '-';
        if (local_478 != 0x2d) goto LAB_00403b03;
        local_490 = '-';
LAB_00404464:
        uVar6 = 0;
        if (-1 < (int)uVar27) {
          uVar6 = uVar27;
        }
        pcVar18 = (char *)(long)(int)uVar6;
        pcVar11 = (char *)0x1;
        if (pcVar18 != (char *)0x0) {
          pcVar11 = pcVar18;
        }
        if ((char *)~uVar29 <= pcVar11) {
          return 0;
        }
        if (param_1 != (FILE *)0x0) {
          if (((uVar26 == 0) && ((char *)0x1 < pcVar18)) && ((long)(int)uVar27 != 1)) {
            lVar20 = 0;
            do {
              lVar20 = lVar20 + 1;
              fputc(0x20,param_1);
            } while ((long)(int)uVar27 + -1 != lVar20);
          }
          fputc((int)local_490,param_1);
        }
        uVar29 = uVar29 + (long)pcVar11;
        local_478 = 0x2d;
        pcVar22 = local_442 + (1 - (long)pcVar31);
        pcVar11 = (char *)~uVar29;
      }
LAB_00403fb7:
      pcVar17 = pcVar18;
      if (pcVar18 <= pcVar22) {
        pcVar17 = pcVar22;
      }
      if (pcVar11 <= pcVar17) {
        return 0;
      }
      if (param_1 != (FILE *)0x0) {
        if ((uVar26 == 0) && (pcVar22 < pcVar18)) {
          pcVar11 = (char *)(long)(int)uVar27;
          if (local_478 == 0x30) {
            if (pcVar11 != pcVar22) {
              lVar20 = 0;
              do {
                lVar20 = lVar20 + 1;
                fputc(0x30,param_1);
              } while ((long)pcVar11 - (long)pcVar22 != lVar20);
            }
          }
          else {
            lVar20 = 0;
            if (pcVar11 != pcVar22) {
              do {
                lVar20 = lVar20 + 1;
                fputc(0x20,param_1);
              } while ((long)pcVar11 - (long)pcVar22 != lVar20);
            }
          }
        }
        if (cVar15 == '\0') {
          fwrite(pcVar31,(size_t)pcVar22,1,param_1);
        }
        else {
          FUN_00403220(param_1,pcVar31,pcVar22);
        }
      }
      uVar29 = uVar29 + (long)pcVar17;
      pcVar31 = param_2;
      goto LAB_0040330a;
    }
    uVar23 = uVar26;
    if (bVar33 != false) {
LAB_00403a65:
      uVar6 = -uVar6;
      goto LAB_00403a67;
    }
LAB_0040360f:
    local_490 = '\0';
LAB_00403621:
    local_456 = (char)uVar32;
    pcVar11 = local_455;
    uVar32 = uVar23;
LAB_004034b0:
    local_458 = 0x2520;
    *pcVar11 = cVar13;
    pcVar11[1] = '\0';
    sVar9 = strftime((char *)&local_438,0x400,(char *)&local_458,param_3);
    pcVar31 = param_2;
    if (sVar9 == 0) goto LAB_0040330a;
    uVar12 = sVar9 - 1;
    uVar30 = 0;
    if (-1 < (int)uVar27) {
      uVar30 = (long)(int)uVar27;
    }
    local_4a8 = (char *)uVar30;
    if (uVar30 <= uVar12) {
      local_4a8 = (char *)uVar12;
    }
    if (~uVar29 <= local_4a8) {
      return 0;
    }
    if (param_1 != (FILE *)0x0) {
      if ((uVar32 == 0) && (uVar12 < uVar30)) {
        uVar30 = (ulong)(int)uVar27;
        if (local_478 == 0x30) {
          if (uVar30 != uVar12) {
            lVar20 = 0;
            do {
              lVar20 = lVar20 + 1;
              fputc(0x30,param_1);
            } while (uVar30 - uVar12 != lVar20);
          }
        }
        else {
          lVar20 = 0;
          if (uVar30 != uVar12) {
            do {
              lVar20 = lVar20 + 1;
              fputc(0x20,param_1);
            } while (uVar30 - uVar12 != lVar20);
          }
        }
      }
      if (local_490 == '\0') {
        if (cVar15 == '\0') {
          fwrite((void *)((long)&local_438 + 1),uVar12,1,param_1);
        }
        else {
          FUN_00403220(param_1,(long)&local_438 + 1,uVar12);
        }
      }
      else {
        FUN_004031c0(param_1,(long)&local_438 + 1,uVar12);
      }
    }
    goto LAB_00403590;
  case 0x7a:
    lVar20 = 0;
LAB_00403de9:
    if (param_3->tm_isdst < 0) goto LAB_0040330a;
    bVar33 = true;
    iVar7 = (int)param_3->tm_gmtoff;
    if ((-1 < iVar7) && (bVar33 = false, iVar7 == 0)) {
      bVar33 = *__s == '-';
    }
    uVar6 = iVar7 / 0xe10;
    uVar23 = (iVar7 / 0x3c) % 0x3c;
    param_2 = pcVar31;
    if (lVar20 == 1) {
LAB_004049e9:
      bVar5 = true;
      uVar26 = 6;
      uVar6 = uVar6 * 100 + uVar23;
      uVar24 = 4;
    }
    else if (lVar20 == 0) {
      uVar24 = 0;
      bVar5 = true;
      uVar26 = 5;
      uVar6 = uVar6 * 100 + uVar23;
    }
    else {
      if (lVar20 != 2) {
        if (lVar20 != 3) {
          cVar14 = *pcVar31;
          goto LAB_0040382b;
        }
        if (iVar7 % 0x3c == 0) {
          if (uVar23 != 0) goto LAB_004049e9;
          bVar5 = true;
          uVar26 = 3;
          uVar24 = uVar23;
          goto LAB_004035fc;
        }
      }
      bVar5 = true;
      uVar26 = 9;
      uVar24 = 0x14;
      uVar6 = iVar7 % 0x3c + uVar6 * 10000 + uVar23 * 100;
    }
    goto LAB_004035fc;
  }
  pcVar11 = param_2 + -1;
  do {
    pcVar31 = pcVar11;
    pcVar11 = pcVar31 + -1;
  } while (*pcVar31 != '%');
  uVar30 = (ulong)(((int)(param_2 + -1) + 2) - (int)pcVar31);
  uVar6 = 0;
  if (-1 < (int)uVar27) {
    uVar6 = uVar27;
  }
  uVar12 = (ulong)(int)uVar6;
  local_4a8 = (char *)uVar12;
  if (uVar12 <= uVar30) {
    local_4a8 = (char *)uVar30;
  }
LAB_00403863:
  if (~uVar29 <= local_4a8) {
    return 0;
  }
  if (param_1 != (FILE *)0x0) {
    if (uVar30 < uVar12) {
      uVar12 = (ulong)(int)uVar27;
      if (local_478 == 0x30) {
        if (uVar12 != uVar30) {
          lVar20 = 0;
          do {
            lVar20 = lVar20 + 1;
            fputc(0x30,param_1);
          } while (uVar12 - uVar30 != lVar20);
        }
      }
      else {
        lVar20 = 0;
        if (uVar12 != uVar30) {
          do {
            lVar20 = lVar20 + 1;
            fputc(0x20,param_1);
          } while (uVar12 - uVar30 != lVar20);
        }
      }
    }
    if (cVar15 == '\0') {
      fwrite(pcVar31,uVar30,1,param_1);
    }
    else {
      FUN_00403220(param_1,pcVar31,uVar30);
    }
  }
LAB_00403590:
  uVar29 = uVar29 + (long)local_4a8;
  pcVar31 = param_2;
LAB_0040330a:
  cVar14 = pcVar31[1];
  param_2 = pcVar31 + 1;
  if (cVar14 == '\0') {
    return uVar29;
  }
  goto LAB_004032ea;
}


void FUN_00404ba0(void)

{
  FUN_00403280();
  return;
}


void FUN_00404bc0(timespec *param_1)

{
  int iVar1;
  timeval local_18;
  
  iVar1 = clock_gettime(0,param_1);
  if (iVar1 != 0) {
    gettimeofday(&local_18,(__timezone_ptr_t)0x0);
    param_1->tv_sec = local_18.tv_sec;
    param_1->tv_nsec = local_18.tv_usec * 1000;
  }
  return;
}


char * FUN_00404c00(ulong param_1,long param_2)

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


long FUN_00404ca0(long param_1)

{
  long lVar1;
  undefined param_7;
  undefined uStack000000000000000c;
  undefined uStack0000000000000010;
  undefined uStack0000000000000014;
  long param_8;
  
  lVar1 = *(long *)(param_1 + 0xa8);
  if (((lVar1 == 0) || (*(long *)(param_1 + 0x30) != 0)) || (*(char *)(param_1 + 0xa1) != '\0')) {
    if (4 < param_8) {
      *(long *)(param_1 + 0xa8) = lVar1 + 1;
      *(long *)(param_1 + 0x30) = param_8 + -4;
      *(long *)(param_1 + 0x40) = _uStack0000000000000010 % 100;
      *(long *)(param_1 + 0x38) = (_uStack0000000000000010 / 100) % 100;
      *(long *)(param_1 + 0x28) = _uStack0000000000000010 / 10000;
      return _uStack0000000000000010 * 0x346dc5d63886594b;
    }
    *(long *)(param_1 + 200) = *(long *)(param_1 + 200) + 1;
    if (2 < param_8) {
      *(long *)(param_1 + 0x48) = _uStack0000000000000010 / 100;
      lVar1 = (_uStack0000000000000010 / 100) * 100;
      *(long *)(param_1 + 0x50) = _uStack0000000000000010 % 100;
      goto LAB_00404dde;
    }
  }
  else {
    if ((*(long *)(param_1 + 200) != 0) || (2 < param_8)) {
      *(undefined *)(param_1 + 0xd8) = 1;
      *(undefined *)(param_1 + 0x20) = param_7;
      *(undefined *)(param_1 + 0x24) = uStack000000000000000c;
      *(undefined *)(param_1 + 0x28) = uStack0000000000000010;
      *(undefined *)(param_1 + 0x2c) = uStack0000000000000014;
      *(long *)(param_1 + 0x30) = param_8;
      return param_8;
    }
    *(undefined *)(param_1 + 200) = 1;
  }
  *(long *)(param_1 + 0x48) = _uStack0000000000000010;
  *(undefined *)(param_1 + 0x50) = 0;
LAB_00404dde:
  *(undefined *)(param_1 + 0x58) = 0;
  *(undefined *)(param_1 + 0x60) = 0;
  *(undefined *)(param_1 + 0x1c) = 2;
  return lVar1;
}


long FUN_00404e20(int param_1,long param_2)

{
  undefined *puVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = param_1 / 0xe10 >> 0x1f;
  iVar4 = __sprintf_chk(param_2,1,0xffffffffffffffff,"%c%02d",(param_1 >> 0x1f & 2U) + 0x2b,
                        (uVar3 ^ param_1 / 0xe10) - uVar3);
  uVar3 = param_1 % 0xe10;
  if (uVar3 != 0) {
    puVar1 = (undefined *)(param_2 + iVar4);
    *puVar1 = 0x3a;
    uVar3 = (uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f);
    puVar1[1] = (char)((ulong)uVar3 / 600) + '0';
    uVar5 = uVar3 % 0x3c;
    puVar1[2] = (char)((ulong)uVar3 / 0x3c) + (char)(((ulong)uVar3 / 0x3c) / 10) * -10 + '0';
    if (uVar5 == 0) {
      puVar1[3] = 0;
    }
    else {
      puVar1[3] = 0x3a;
      cVar2 = (char)((ulong)uVar5 / 10);
      puVar1[4] = cVar2 + '0';
      puVar1[5] = (char)uVar5 + cVar2 * -10 + '0';
      puVar1[6] = 0;
    }
  }
  return param_2;
}


undefined FUN_00404f20(int param_1,undefined param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = param_1 / 100 + 0x13;
  uVar1 = (int)uVar3 >> 0x1f;
  uVar2 = param_1 % 100 >> 0x1f;
  __sprintf_chk(param_2,1,0xffffffffffffffff,"-%02d%02d" + (-0x76d < param_1),
                (uVar3 ^ uVar1) - uVar1,(param_1 % 100 ^ uVar2) - uVar2);
  return param_2;
}


void FUN_00404f90(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                 undefined param_5,undefined param_6,undefined param_7,undefined param_8,
                 undefined param_9,undefined param_10,undefined param_11,undefined param_12,
                 undefined param_13,undefined param_14)

{
  char in_AL;
  undefined local_d0;
  undefined local_cc;
  undefined *local_c8;
  undefined *local_c0;
  undefined local_b8 [8];
  undefined local_b0;
  undefined local_a8;
  undefined local_a0;
  undefined local_98;
  undefined local_90;
  undefined local_88;
  undefined local_78;
  undefined local_68;
  undefined local_58;
  undefined local_48;
  undefined local_38;
  undefined local_28;
  undefined local_18;
  
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
  local_b0 = param_10;
  local_a8 = param_11;
  local_a0 = param_12;
  local_98 = param_13;
  local_90 = param_14;
  fwrite("date: ",1,6,stderr);
  local_c8 = &stack0x00000008;
  local_c0 = local_b8;
  local_d0 = 8;
  local_cc = 0x30;
  FUN_0040e010(stderr,param_9,&local_d0);
  return;
}


uint FUN_00405050(undefined param_1,uint *param_2,uint *param_3,long param_4)

{
  long local_50;
  undefined local_48 [64];
  
  if ((param_4 == -1) &&
     (local_50 = param_4, param_3 = (uint *)FUN_0040de20(param_1,&local_50,local_48),
     param_3 == (uint *)0x0)) {
    return 0;
  }
  return (param_2[5] ^ param_3[5]) & 0xffffff00 |
         (uint)((*param_2 ^ *param_3 | param_2[1] ^ param_3[1] | param_2[2] ^ param_3[2] |
                 param_2[3] ^ param_3[3] | param_2[4] ^ param_3[4] | param_2[5] ^ param_3[5]) == 0);
}


undefined FUN_004050c0(uint param_1,undefined param_2,undefined param_3)

{
  __fprintf_chk(stderr,1,((param_1 ^ 1) & 0xff) + 0x4148d0,param_2,param_3);
  return 1;
}


bool FUN_00405100(int *param_1,char param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  bool bVar2;
  
  if (param_4 < 3) {
    if (-1 < param_5) {
LAB_0040510e:
      lVar1 = param_3 * 0x3c;
      if (param_2 == '\0') {
        bVar2 = SCARRY8(lVar1,param_5);
        param_5 = lVar1 + param_5;
      }
      else {
        bVar2 = SBORROW8(lVar1,param_5);
        param_5 = lVar1 - param_5;
      }
      if ((SEXT816(lVar1) != SEXT816(param_3) * SEXT816(0x3c) | bVar2) != 0) {
        return false;
      }
      goto LAB_0040512a;
    }
    param_5 = 0;
    lVar1 = param_3;
  }
  else {
    if (-1 < param_5) goto LAB_0040510e;
    lVar1 = param_3 / 100;
    param_5 = param_3 % 100;
  }
  param_5 = param_5 + lVar1 * 0x3c;
LAB_0040512a:
  bVar2 = param_5 + 0x5a0U < 0xb41;
  if (bVar2) {
    *param_1 = (int)param_5 * 0x3c;
  }
  return bVar2;
}


char ** FUN_004051c0(long param_1,char *param_2)

{
  int iVar1;
  undefined **ppuVar2;
  char **ppcVar3;
  char *pcVar4;
  
  pcVar4 = "GMT";
  ppuVar2 = &PTR_DAT_00415ee0;
  do {
    iVar1 = strcmp(param_2,pcVar4);
    if (iVar1 == 0) {
      return ppuVar2;
    }
    ppuVar2 = ppuVar2 + 2;
    pcVar4 = *ppuVar2;
  } while (pcVar4 != (char *)0x0);
  ppcVar3 = (char **)(param_1 + 0xe8);
  pcVar4 = *(char **)(param_1 + 0xe8);
  while (pcVar4 != (char *)0x0) {
    iVar1 = strcmp(param_2,pcVar4);
    if (iVar1 == 0) {
      return ppcVar3;
    }
    ppcVar3 = ppcVar3 + 2;
    pcVar4 = *ppcVar3;
  }
  ppuVar2 = &PTR_DAT_00415be0;
  pcVar4 = "WET";
  do {
    iVar1 = strcmp(param_2,pcVar4);
    if (iVar1 == 0) {
      return ppuVar2;
    }
    ppuVar2 = ppuVar2 + 2;
    pcVar4 = *ppuVar2;
  } while (pcVar4 != (char *)0x0);
  return (char **)0x0;
}


void FUN_00405280(undefined param_1,long param_2)

{
  FILE *__stream;
  undefined uVar1;
  undefined uVar2;
  char *__s;
  long lVar3;
  
  uVar2 = dcgettext(0,"parsed %s part: ",5);
  FUN_00404f90(uVar2,param_1);
  __stream = stderr;
  if (*(long *)(param_2 + 0x68) == 0) {
    lVar3 = *(long *)(param_2 + 0x70);
    if (lVar3 != 0) {
      uVar1 = 0;
LAB_004052c6:
      uVar1 = FUN_004050c0(uVar1,lVar3,"month(s)");
      lVar3 = *(long *)(param_2 + 0x78);
      goto LAB_004052d7;
    }
    lVar3 = *(long *)(param_2 + 0x78);
    uVar1 = 0;
    if (lVar3 == 0) {
      if ((((*(long *)(param_2 + 0x80) == 0) && (*(long *)(param_2 + 0x88) == 0)) &&
          (*(long *)(param_2 + 0x90) == 0)) && (uVar1 = 0, *(int *)(param_2 + 0x98) == 0)) {
        __s = (char *)dcgettext(0,"today/this/now\n",5);
        fputs(__s,__stream);
        return;
      }
      goto LAB_004052e9;
    }
  }
  else {
    uVar1 = FUN_004050c0(0,*(long *)(param_2 + 0x68),"year(s)");
    lVar3 = *(long *)(param_2 + 0x70);
    if (lVar3 != 0) goto LAB_004052c6;
    lVar3 = *(long *)(param_2 + 0x78);
LAB_004052d7:
    if (lVar3 == 0) goto LAB_004052e9;
  }
  uVar1 = FUN_004050c0(uVar1,lVar3,"day(s)");
LAB_004052e9:
  if (*(long *)(param_2 + 0x80) != 0) {
    uVar1 = FUN_004050c0(uVar1,*(long *)(param_2 + 0x80),"hour(s)");
  }
  if (*(long *)(param_2 + 0x88) != 0) {
    uVar1 = FUN_004050c0(uVar1,*(long *)(param_2 + 0x88),"minutes");
  }
  if (*(long *)(param_2 + 0x90) != 0) {
    uVar1 = FUN_004050c0(uVar1,*(long *)(param_2 + 0x90),"seconds");
  }
  if ((long)*(int *)(param_2 + 0x98) != 0) {
    FUN_004050c0(uVar1,(long)*(int *)(param_2 + 0x98),"nanoseconds");
  }
  fputc(10,stderr);
  return;
}


long FUN_00405410(undefined param_1,long param_2,long param_3)

{
  int iVar1;
  undefined uVar2;
  undefined auStack_38 [32];
  
  iVar1 = FUN_0040ff70(param_3,100,"(Y-M-D) %Y-%m-%d %H:%M:%S",param_1,0,0);
  if (((param_2 != 0) && (iVar1 < 100)) && (*(long *)(param_2 + 0xd0) != 0)) {
    uVar2 = FUN_00404e20(*(undefined *)(param_2 + 0x18),auStack_38);
    __snprintf_chk(iVar1 + param_3,(long)(100 - iVar1),1,0xffffffffffffffff," TZ=%s",uVar2);
    return param_3;
  }
  return param_3;
}


char * FUN_004054b0(long param_1,char *param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  char *pcVar5;
  
  if (*(char *)(param_1 + 0xe0) == '\0') {
    *param_2 = '\0';
    uVar1 = *(uint *)(param_1 + 0x10);
    if (6 < uVar1) {
      return param_2;
    }
    uVar3 = 1;
    lVar4 = 100;
    pcVar5 = param_2;
  }
  else {
    uVar3 = *(long *)(param_1 + 8) + 1;
    if (uVar3 < 0xe) {
      uVar2 = snprintf(param_2,100,"%s",&UNK_004159a1 + uVar3 * 10 + *(long *)(param_1 + 8));
      uVar1 = *(uint *)(param_1 + 0x10);
      if ((6 < uVar1) || (99 < uVar2)) {
        return param_2;
      }
    }
    else {
      uVar2 = __snprintf_chk(param_2,100,1,0xffffffffffffffff,"%ld");
      uVar1 = *(uint *)(param_1 + 0x10);
      if (6 < uVar1) {
        return param_2;
      }
    }
    uVar3 = (ulong)(uVar2 == 0);
    lVar4 = (long)(int)(100 - uVar2);
    pcVar5 = param_2 + (int)uVar2;
  }
  __snprintf_chk(pcVar5,lVar4,1,0xffffffffffffffff,&UNK_004144ab + uVar3,
                 &DAT_00415980 + (long)(int)uVar1 * 4);
  return param_2;
}


void FUN_004055a0(undefined param_1,long param_2)

{
  char cVar1;
  undefined uVar2;
  undefined uVar3;
  undefined uVar4;
  undefined uVar5;
  byte bVar6;
  char *pcVar7;
  undefined auStack_98 [120];
  
  uVar3 = dcgettext(0,"parsed %s part: ",5);
  FUN_00404f90(uVar3,param_1);
  if ((*(long *)(param_2 + 0xa8) == 0) || (*(char *)(param_2 + 0xda) != '\0')) {
    bVar6 = 0;
    if (*(char *)(param_2 + 0xd8) != *(char *)(param_2 + 0xdf)) goto LAB_004055f6;
  }
  else {
    __fprintf_chk(stderr,1,"(Y-M-D) %04ld-%02ld-%02ld",*(undefined *)(param_2 + 0x28),
                  *(undefined *)(param_2 + 0x38),*(undefined *)(param_2 + 0x40));
    *(undefined *)(param_2 + 0xda) = 1;
    bVar6 = 1;
    if (*(char *)(param_2 + 0xd8) != *(char *)(param_2 + 0xdf)) {
      fputc(0x20,stderr);
LAB_004055f6:
      uVar3 = *(undefined *)(param_2 + 0x28);
      uVar4 = dcgettext(0,"year: %04ld",5);
      __fprintf_chk(stderr,1,uVar4,uVar3);
      bVar6 = 1;
      *(undefined *)(param_2 + 0xdf) = *(undefined *)(param_2 + 0xd8);
    }
  }
  if ((*(long *)(param_2 + 200) == 0) || (*(char *)(param_2 + 0xdd) != '\0')) {
    if ((*(long *)(param_2 + 0xb0) != 0) && (*(char *)(param_2 + 0xdb) == '\0')) {
      if (bVar6 != 0) goto LAB_0040588c;
      goto LAB_00405668;
    }
  }
  else {
    __fprintf_chk(stderr,1," %02ld:%02ld:%02ld" + (bVar6 ^ 1),*(undefined *)(param_2 + 0x48),
                  *(undefined *)(param_2 + 0x50),*(undefined *)(param_2 + 0x58));
    if (*(long *)(param_2 + 0x60) != 0) {
      __fprintf_chk(stderr,1,".%09d");
    }
    if (*(int *)(param_2 + 0x1c) == 1) {
      fwrite(&DAT_0041499a,1,2,stderr);
    }
    *(undefined *)(param_2 + 0xdd) = 1;
    bVar6 = 1;
    if ((*(long *)(param_2 + 0xb0) != 0) && (bVar6 = *(byte *)(param_2 + 0xdb), bVar6 == 0)) {
LAB_0040588c:
      fputc(0x20,stderr);
LAB_00405668:
      uVar2 = *(undefined *)(param_2 + 0x10);
      uVar3 = *(undefined *)(param_2 + 8);
      uVar4 = FUN_004054b0(param_2,auStack_98);
      uVar5 = dcgettext(0,"%s (day ordinal=%ld number=%d)",5);
      __fprintf_chk(stderr,1,uVar5,uVar4,uVar3,uVar2);
      *(undefined *)(param_2 + 0xdb) = 1;
      bVar6 = 1;
    }
  }
  if ((*(long *)(param_2 + 0xb8) == 0) || (*(char *)(param_2 + 0xdc) != '\0')) {
    if ((*(long *)(param_2 + 0xd0) != 0) && (*(char *)(param_2 + 0xde) == '\0')) {
      pcVar7 = " UTC%s" + (bVar6 ^ 1);
      goto LAB_004058b5;
    }
    if (*(char *)(param_2 + 0xa0) == '\0') goto LAB_004057a2;
    uVar3 = *(undefined *)(param_2 + 0x58);
    if (bVar6 != 0) goto LAB_00405736;
  }
  else {
    pcVar7 = " DST";
    if (*(long *)(param_2 + 0xc0) == 0) {
      pcVar7 = "";
    }
    __fprintf_chk(stderr,1," isdst=%d%s" + (bVar6 ^ 1),*(undefined *)(param_2 + 0x14),pcVar7);
    *(undefined *)(param_2 + 0xdc) = 1;
    if ((*(long *)(param_2 + 0xd0) == 0) || (*(char *)(param_2 + 0xde) != '\0')) {
      cVar1 = *(char *)(param_2 + 0xa0);
    }
    else {
      pcVar7 = " UTC%s";
LAB_004058b5:
      uVar3 = FUN_00404e20(*(undefined *)(param_2 + 0x18),auStack_98);
      __fprintf_chk(stderr,1,pcVar7,uVar3);
      cVar1 = *(char *)(param_2 + 0xa0);
      *(undefined *)(param_2 + 0xde) = 1;
    }
    if (cVar1 == '\0') goto LAB_004057a2;
    uVar3 = *(undefined *)(param_2 + 0x58);
LAB_00405736:
    fputc(0x20,stderr);
  }
  uVar4 = dcgettext(0,"number of seconds: %ld",5);
  __fprintf_chk(stderr,1,uVar4,uVar3);
LAB_004057a2:
  fputc(10,stderr);
  return;
}


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Could not reconcile some variable overlaps */

undefined FUN_00405940(byte **param_1)

{
  short *psVar1;
  byte *pbVar2;
  undefined auVar3 [16];
  undefined uVar4;
  undefined uVar5;
  long lVar6;
  long lVar7;
  byte *pbVar8;
  long lVar9;
  byte *pbVar10;
  long lVar11;
  byte *pbVar12;
  long lVar13;
  undefined uVar14;
  undefined uVar15;
  undefined uVar16;
  undefined uVar17;
  undefined uVar18;
  undefined uVar19;
  char cVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  long lVar25;
  long lVar26;
  undefined uVar27;
  undefined uVar28;
  undefined uVar29;
  byte bVar30;
  ulong uVar31;
  undefined **ppuVar32;
  byte bVar33;
  bool bVar34;
  uint uVar35;
  undefined (*pauVar36) [16];
  undefined (*pauVar37) [16];
  undefined **ppuVar38;
  uint uVar39;
  byte *pbVar40;
  uint *puVar41;
  char *pcVar42;
  uint *puVar43;
  byte *pbVar44;
  ulong uVar45;
  undefined uVar46;
  int iVar47;
  undefined uVar48;
  uint uVar49;
  bool bVar50;
  bool bVar51;
  byte bVar52;
  undefined local_5e0;
  undefined local_5d8;
  ulong local_5d0;
  int local_5c4;
  ulong local_5c0;
  long local_5b8;
  short *local_5a0;
  undefined (*local_588) [16];
  byte *local_570;
  undefined local_568;
  uint local_555 [3];
  short local_548 [19];
  short local_522 [5];
  undefined local_518;
  undefined uStack_510;
  undefined local_508;
  undefined uStack_504;
  undefined uStack_500;
  undefined uStack_4fc;
  undefined local_4f8;
  undefined uStack_4f4;
  undefined uStack_4f0;
  undefined uStack_4ec;
  undefined local_4e8;
  undefined local_4d8 [8];
  undefined uStack_4d0;
  undefined uStack_4cc;
  undefined auStack_4c8 [8];
  undefined uStack_4c0;
  undefined uStack_4bc;
  undefined auStack_4b8 [8];
  undefined local_4b0;
  undefined uStack_4ac;
  ulong uStack_4a8;
  undefined local_498 [1128];
  
  bVar52 = 0;
  uVar45 = 0;
  uVar49 = 0x26;
  uVar39 = 0xfffffffe;
  local_548[0] = 0;
  local_5c4 = 0;
  local_588 = (undefined (*) [16])local_498;
  local_5a0 = local_548;
  do {
    if (uVar39 == 0xfffffffe) {
      pbVar40 = *param_1;
      uVar39 = (uint)*pbVar40;
LAB_00405c07:
      bVar30 = (byte)uVar39;
      while (bVar33 = (byte)uVar39, bVar30 < 0x21) {
        if ((1L << (bVar30 & 0x3f) & 0x100003e00U) == 0) {
          if (uVar39 - 0x30 < 10) goto LAB_0040617e;
          if (0x39 < uVar39 - 0x41) goto LAB_00405bb5;
          goto LAB_00405c79;
        }
        pbVar40 = pbVar40 + 1;
        *param_1 = pbVar40;
        bVar30 = *pbVar40;
        uVar39 = (uint)bVar30;
      }
      bVar30 = bVar33 - 0x2b & 0xfd;
      if (9 < uVar39 - 0x30) {
        if (bVar30 == 0) break;
        if (0x39 < uVar39 - 0x41) {
LAB_00405da2:
          if (bVar33 != 0x28) {
LAB_00405bb5:
            *param_1 = pbVar40 + 1;
            uVar39 = (uint)*pbVar40;
            if (*pbVar40 != 0) goto LAB_00405e58;
            goto LAB_00405bd0;
          }
          lVar26 = 0;
          pbVar40 = *param_1;
          do {
            pbVar44 = pbVar40;
            pbVar40 = pbVar44 + 1;
            *param_1 = pbVar40;
            bVar30 = *pbVar44;
            if (bVar30 == 0) goto LAB_00405bd0;
            if (bVar30 == 0x28) {
              lVar26 = lVar26 + 1;
            }
            else {
              lVar26 = lVar26 - (ulong)(bVar30 == 0x29);
            }
          } while (lVar26 != 0);
          uVar39 = (uint)pbVar44[1];
          goto LAB_00405c07;
        }
LAB_00405c79:
        if ((1L << (bVar33 + 0xbf & 0x3f) & 0x3ffffff03ffffffU) == 0) goto LAB_00405da2;
        pbVar40 = *param_1;
        puVar41 = &local_568;
        do {
          pbVar40 = pbVar40 + 1;
          if (puVar41 < local_555) {
            *(byte *)puVar41 = (byte)uVar39;
            puVar41 = (uint *)((long)puVar41 + 1);
          }
          *param_1 = pbVar40;
          uVar39 = (uint)*pbVar40;
        } while (((uVar39 - 0x41 < 0x3a) &&
                 ((1L << ((byte)(uVar39 - 0x41) & 0x3f) & 0x3ffffff03ffffffU) != 0)) ||
                (*pbVar40 == 0x2e));
        *(byte *)puVar41 = 0;
        puVar41 = &local_568;
        bVar30 = (byte)local_568;
        while (bVar30 != 0) {
          if (bVar30 - 0x61 < 0x1a) {
            bVar30 = bVar30 - 0x20;
          }
          *(byte *)puVar41 = bVar30;
          bVar30 = *(byte *)(uint *)((long)puVar41 + 1);
          puVar41 = (uint *)((long)puVar41 + 1);
        }
        pcVar42 = "AM";
        ppuVar38 = &PTR_DAT_004162e0;
        iVar24 = (int)uVar45;
        do {
          iVar21 = strcmp((char *)&local_568,pcVar42);
          if (iVar21 == 0) {
            local_518 = (ulong)*(int *)((long)ppuVar38 + 0xc);
            uVar39 = *(uint *)(ppuVar38 + 1);
            goto LAB_00405d6b;
          }
          ppuVar38 = ppuVar38 + 2;
          pcVar42 = *ppuVar38;
          puVar41 = &local_568;
        } while (pcVar42 != (char *)0x0);
        do {
          puVar43 = puVar41;
          uVar22 = *puVar43 + 0xfefefeff & ~*puVar43;
          uVar39 = uVar22 & 0x80808080;
          puVar41 = puVar43 + 1;
        } while (uVar39 == 0);
        bVar50 = (uVar22 & 0x8080) == 0;
        if (bVar50) {
          uVar39 = uVar39 >> 0x10;
        }
        if (bVar50) {
          puVar41 = (uint *)((long)puVar43 + 6);
        }
        bVar50 = true;
        pbVar40 = (byte *)((long)puVar41 +
                          ((-3 - (ulong)CARRY1((byte)uVar39,(byte)uVar39)) - (long)&local_568));
        if ((pbVar40 != (byte *)0x3) && (bVar50 = false, pbVar40 == (byte *)0x4)) {
          bVar50 = local_568._3_1_ == '.';
        }
        pcVar42 = "JANUARY";
        ppuVar38 = &PTR_s_JANUARY_00416140;
        do {
          if (bVar50) {
            iVar21 = strncmp((char *)&local_568,pcVar42,3);
          }
          else {
            iVar21 = strcmp((char *)&local_568,pcVar42);
          }
          bVar34 = iVar21 == 0;
          if (bVar34) {
LAB_0040775a:
            local_518 = (ulong)*(int *)((long)ppuVar38 + 0xc);
            uVar39 = *(uint *)(ppuVar38 + 1);
LAB_00405d6b:
            uVar45 = (ulong)iVar24;
            goto LAB_004059a5;
          }
          ppuVar38 = ppuVar38 + 2;
          pcVar42 = *ppuVar38;
        } while (pcVar42 != (char *)0x0);
        lVar26 = FUN_004051c0(param_1,&local_568);
        bVar50 = false;
        bVar51 = lVar26 == 0;
        uVar45 = (ulong)iVar24;
        if (!bVar51) {
LAB_004077bd:
          local_518 = (ulong)*(int *)(lVar26 + 0xc);
          uVar39 = *(uint *)(lVar26 + 8);
          goto LAB_00405d6b;
        }
        lVar26 = 4;
        puVar41 = &local_568;
        pbVar44 = &DAT_00414950;
        do {
          if (lVar26 == 0) break;
          lVar26 = lVar26 + -1;
          bVar50 = *(byte *)puVar41 < *pbVar44;
          bVar51 = *(byte *)puVar41 == *pbVar44;
          puVar41 = (uint *)((long)puVar41 + (ulong)bVar52 * -2 + 1);
          pbVar44 = pbVar44 + (ulong)bVar52 * -2 + 1;
        } while (bVar51);
        pcVar42 = "YEAR";
        if ((!bVar50 && !bVar51) != bVar50) {
          ppuVar38 = &PTR_DAT_00416080;
          do {
            iVar21 = strcmp((char *)&local_568,pcVar42);
            if (iVar21 == 0) goto LAB_0040775a;
            ppuVar38 = ppuVar38 + 2;
            pcVar42 = *ppuVar38;
          } while (pcVar42 != (char *)0x0);
          pbVar44 = (byte *)((long)&local_570 + (long)(pbVar40 + 7));
          if (*pbVar44 == 0x53) {
            pcVar42 = "YEAR";
            ppuVar38 = &PTR_DAT_00416080;
            *pbVar44 = 0;
            do {
              iVar21 = strcmp((char *)&local_568,pcVar42);
              if (iVar21 == 0) {
                local_518 = (ulong)*(int *)((long)ppuVar38 + 0xc);
                uVar39 = *(uint *)(ppuVar38 + 1);
                goto LAB_00405d6b;
              }
              ppuVar38 = ppuVar38 + 2;
              pcVar42 = *ppuVar38;
            } while (pcVar42 != (char *)0x0);
            *pbVar44 = 0x53;
          }
          pcVar42 = "TOMORROW";
          ppuVar38 = &PTR_s_TOMORROW_00415f20;
          while (iVar21 = strcmp((char *)&local_568,pcVar42), iVar21 != 0) {
            ppuVar38 = ppuVar38 + 2;
            pcVar42 = *ppuVar38;
            if (pcVar42 == (char *)0x0) {
              uVar45 = (ulong)iVar24;
              if (pbVar40 == (byte *)0x1) {
                ppuVar38 = &PTR_DAT_00415a40;
                if ((byte)local_568 == 0x41) {
                  local_518 = 0xfffffffffffff1f0;
                  uVar39 = 0x111;
                  goto LAB_00405e58;
                }
                while( true ) {
                  ppuVar32 = ppuVar38;
                  if (ppuVar32[2] == (byte *)0x0) break;
                  ppuVar38 = ppuVar32 + 2;
                  if (*ppuVar32[2] == (byte)local_568) {
                    local_518 = (ulong)*(int *)((long)ppuVar32 + 0x1c);
                    uVar39 = *(uint *)(ppuVar32 + 3);
                    goto LAB_00405d6b;
                  }
                }
              }
              puVar41 = &local_568;
              puVar43 = &local_568;
              bVar30 = (byte)local_568;
              if ((byte)local_568 != 0) {
                do {
                  if (bVar30 == 0x2e) {
                    bVar34 = true;
                  }
                  else {
                    puVar41 = (uint *)((long)puVar41 + 1);
                  }
                  puVar43 = (uint *)((long)puVar43 + 1);
                  bVar30 = *(byte *)puVar43;
                  *(byte *)puVar41 = bVar30;
                } while (bVar30 != 0);
                if ((bVar34) && (lVar26 = FUN_004051c0(param_1,&local_568), lVar26 != 0))
                goto LAB_004077bd;
              }
              uVar45 = (ulong)iVar24;
              if (*(char *)((long)param_1 + 0xd9) != '\0') {
                uVar39 = 0x3f;
                uVar29 = dcgettext(0,"error: unknown word \'%s\'\n",5);
                FUN_00404f90(uVar29,&local_568);
                uVar22 = 2;
                uVar45 = (ulong)iVar24;
                goto LAB_00405e62;
              }
              goto LAB_004062f8;
            }
          }
          local_518 = (ulong)*(int *)((long)ppuVar38 + 0xc);
          uVar39 = *(uint *)(ppuVar38 + 1);
          goto LAB_00405d6b;
        }
        local_518 = 0;
        uVar39 = 0x103;
        goto LAB_00405e58;
      }
      if (bVar30 == 0) break;
LAB_0040617e:
      pbVar40 = *param_1;
      iVar24 = 0;
LAB_00405e81:
      lVar26 = 0;
      uVar39 = (uint)bVar33;
      pbVar44 = pbVar40;
      while( true ) {
        iVar21 = uVar39 - 0x30;
        if (iVar24 == -1) {
          iVar21 = 0x30 - uVar39;
        }
        uVar31 = lVar26 + iVar21;
        if (SCARRY8(lVar26,(long)iVar21)) break;
        uVar39 = (uint)pbVar44[1];
        pbVar2 = pbVar44 + 1;
        if (9 < uVar39 - 0x30) {
          if (((pbVar44[1] & 0xfd) == 0x2c) && (uVar35 = (int)(char)pbVar44[2] - 0x30, uVar35 < 10))
          {
            pbVar40 = pbVar44 + 3;
            iVar47 = (int)(char)pbVar44[3];
            iVar23 = 8;
            iVar21 = iVar47;
            do {
              uVar39 = iVar47 - 0x30;
              uVar35 = uVar35 * 10;
              if (uVar39 < 10) {
                iVar47 = (int)(char)pbVar40[1];
                uVar35 = uVar35 + uVar39;
                pbVar40 = pbVar40 + 1;
                uVar39 = iVar47 - 0x30;
                iVar21 = iVar47;
              }
              iVar23 = iVar23 + -1;
            } while (iVar23 != 0);
            if (iVar24 == -1) {
              if (uVar39 < 10) {
                bVar30 = (byte)iVar21;
                do {
                  if (bVar30 != 0x30) {
                    uVar35 = uVar35 + 1;
                    if ((int)(char)*pbVar40 - 0x30U < 10) goto LAB_00405f27;
                    goto LAB_00405f47;
                  }
                  pbVar40 = pbVar40 + 1;
                  bVar30 = *pbVar40;
                } while ((int)(char)bVar30 - 0x30U < 10);
              }
              if (uVar35 == 0) {
                *param_1 = pbVar40;
                uVar22 = 0x15;
                uVar39 = 0x114;
                local_518 = uVar31;
                local_5c0 = 0;
              }
              else {
LAB_00405f47:
                if (uVar31 == 0x8000000000000000) break;
                *param_1 = pbVar40;
                uVar39 = 0x114;
                local_518 = uVar31 - 1;
                uVar22 = 0x15;
                local_5c0 = (long)(int)(1000000000 - uVar35);
              }
            }
            else {
              if (uVar39 < 10) {
LAB_00405f27:
                do {
                  pbVar40 = pbVar40 + 1;
                } while ((int)(char)*pbVar40 - 0x30U < 10);
                if ((iVar24 < 0) && (uVar35 != 0)) goto LAB_00405f47;
              }
              *param_1 = pbVar40;
              local_518 = uVar31;
              uVar22 = ~-(uint)(iVar24 == 0) + 0x16;
              uVar39 = ~-(uint)(iVar24 == 0) + 0x115;
              local_5c0 = (long)(int)uVar35;
            }
          }
          else {
            *param_1 = pbVar2;
            local_5b8 = (long)pbVar2 - (long)pbVar40;
            local_518 = local_518 & 0xffffffffffffff00 | (ulong)(byte)((uint)iVar24 >> 0x1f);
            uVar22 = ~-(uint)(iVar24 == 0) + 0x14;
            uVar39 = ~-(uint)(iVar24 == 0) + 0x113;
            local_5c0 = uVar31;
          }
          goto LAB_00405e62;
        }
        lVar26 = uVar31 * 10;
        pbVar44 = pbVar2;
        if (SEXT816(lVar26) != SEXT816((long)uVar31) * SEXT816(10)) break;
      }
LAB_004062f8:
      uVar22 = 2;
      uVar39 = 0x3f;
LAB_00405e62:
      uVar49 = uVar49 + uVar22;
    }
    else {
LAB_004059a5:
      if ((int)uVar39 < 1) {
LAB_00405bd0:
        uVar22 = 0;
        uVar39 = 0;
      }
      else {
        if ((int)uVar39 < 0x116) {
LAB_00405e58:
          uVar22 = (uint)(byte)(&DAT_00416640)[(int)uVar39];
          goto LAB_00405e62;
        }
        uVar49 = uVar49 + 2;
        uVar22 = 2;
      }
    }
    uVar15 = uStack_504;
    uVar14 = local_508;
    uStack_510._0_4_ = (undefined)local_5c0;
    uStack_510._4_4_ = (undefined)(local_5c0 >> 0x20);
    local_508 = (undefined)local_5b8;
    uVar18 = local_508;
    uStack_504 = (undefined)((ulong)local_5b8 >> 0x20);
    uVar19 = uStack_504;
    pauVar37 = local_588;
    local_508 = uVar14;
    uStack_504 = uVar15;
    if (0x70 < uVar49) goto LAB_00405a90;
    if ((int)(char)(&UNK_00416400)[(int)uVar49] != uVar22) goto LAB_00405a90;
    uVar45 = (ulong)(byte)(&UNK_00416480)[(int)uVar49];
    if ((&UNK_00416480)[(int)uVar49] == 0) {
      uVar29 = *(undefined *)(local_588[3] + 8);
      _local_4d8 = *(undefined (*) [16])(local_588[3] + 8);
      uVar46 = *(undefined *)local_588[4];
      lVar26 = *(long *)(local_588[4] + 8);
      uStack_4a8 = *(ulong *)(local_588[6] + 8);
      local_5d8 = *(undefined *)(local_588[5] + 8);
      uVar48 = *(undefined *)local_588[5];
      _auStack_4c8 = *(undefined (*) [16])(local_588[4] + 8);
      _auStack_4b8 = *(undefined (*) [16])(local_588[5] + 8);
      local_5e0 = *(undefined *)local_588[6];
      local_5d0 = (ulong)*(uint *)(local_588[6] + 8);
      iVar24 = -0x1c;
      goto LAB_004060d0;
    }
    uVar39 = 0xfffffffe;
    local_5c4 = local_5c4 + -1 + (uint)(local_5c4 == 0);
    pauVar36 = (undefined (*) [16])(local_588[3] + 8);
    uStack_510 = local_5c0;
    *(undefined *)*pauVar36 = (undefined)local_518;
    *(undefined *)(local_588[3] + 0xc) = local_518._4_4_;
    *(undefined *)local_588[4] = (undefined)uStack_510;
    *(undefined *)(local_588[4] + 4) = uStack_510._4_4_;
    *(undefined *)(local_588[6] + 8) = local_4e8;
    *(undefined (*) [16])(local_588[4] + 8) = CONCAT412(uStack_4fc,CONCAT48(uStack_500,local_5b8));
    *(undefined *)(local_588[5] + 8) = local_4f8;
    *(undefined *)(local_588[5] + 0xc) = uStack_4f4;
    *(undefined *)local_588[6] = uStack_4f0;
    *(undefined *)(local_588[6] + 4) = uStack_4ec;
    local_508 = uVar18;
    uStack_504 = uVar19;
    while( true ) {
      psVar1 = local_5a0 + 1;
      local_5a0[1] = (short)uVar45;
      if (local_522 <= psVar1) {
        return 2;
      }
      if ((int)uVar45 == 0xc) {
        return 0;
      }
      uVar49 = (uint)(char)(&DAT_004165c0)[(int)uVar45];
      pauVar37 = pauVar36;
      local_588 = pauVar36;
      local_5a0 = psVar1;
      if (uVar49 != 0xffffffa3) break;
LAB_00405a90:
      bVar30 = (&DAT_00416540)[uVar45];
      if (bVar30 == 0) {
        if (local_5c4 == 3) {
          if ((int)uVar39 < 1) {
            if (uVar39 == 0) {
              return 1;
            }
          }
          else {
            uVar39 = 0xfffffffe;
          }
        }
        while (((((char)(&DAT_004165c0)[uVar45] == -0x5d ||
                 (uVar49 = (int)(char)(&DAT_004165c0)[uVar45] + 1, 0x70 < uVar49)) ||
                ((&UNK_00416400)[(int)uVar49] != '\x01')) ||
               (uVar45 = (ulong)(byte)(&UNK_00416480)[(int)uVar49],
               (&UNK_00416480)[(int)uVar49] == 0))) {
          if (local_5a0 == local_548) {
            return 1;
          }
          local_5a0 = local_5a0 + -1;
          uVar45 = (ulong)*local_5a0;
          pauVar37 = (undefined (*) [16])(pauVar37[-4] + 8);
        }
        pauVar36 = (undefined (*) [16])(pauVar37[3] + 8);
        local_5c4 = 3;
        uStack_510 = local_5c0;
        *(undefined *)*pauVar36 = (undefined)local_518;
        *(undefined *)(pauVar37[3] + 0xc) = local_518._4_4_;
        *(undefined *)pauVar37[4] = (undefined)uStack_510;
        *(undefined *)(pauVar37[4] + 4) = uStack_510._4_4_;
        *(undefined *)(pauVar37[6] + 8) = local_4e8;
        *(undefined *)(pauVar37[4] + 8) = uVar18;
        *(undefined *)(pauVar37[4] + 0xc) = uVar19;
        *(undefined *)pauVar37[5] = uStack_500;
        *(undefined *)(pauVar37[5] + 4) = uStack_4fc;
        *(undefined (*) [16])(pauVar37[5] + 8) =
             CONCAT412(uStack_4ec,CONCAT48(uStack_4f0,CONCAT44(uStack_4f4,local_4f8)));
        local_508 = uVar18;
        uStack_504 = uVar19;
      }
      else {
        uVar31 = (ulong)(byte)(&UNK_00416340)[(int)(uint)bVar30];
        pauVar36 = (undefined (*) [16])
                   ((long)pauVar37 +
                   (long)(int)(1 - (uint)(byte)(&UNK_00416340)[(int)(uint)bVar30]) * 0x38);
        uVar29 = *(undefined *)*pauVar36;
        uVar46 = *(undefined *)(*pauVar36 + 8);
        uStack_4a8 = *(ulong *)pauVar36[3];
        local_5d8 = *(undefined *)pauVar36[2];
        lVar26 = *(long *)pauVar36[1];
        _local_4d8 = *pauVar36;
        uVar48 = *(undefined *)(pauVar36[1] + 8);
        _auStack_4c8 = pauVar36[1];
        local_5e0 = *(undefined *)(pauVar36[2] + 8);
        _auStack_4b8 = pauVar36[2];
        local_5d0 = (ulong)*(uint *)pauVar36[3];
        switch(bVar30) {
        case 4:
          pbVar40 = *(byte **)*pauVar37;
          pbVar44 = *(byte **)(*pauVar37 + 8);
          *(undefined *)(param_1 + 0x14) = 1;
          param_1[0xb] = pbVar40;
          param_1[0xc] = pbVar44;
          uVar28 = dcgettext(0,"number of seconds",5);
          local_5a0 = local_5a0 + -2;
          local_588 = pauVar37[-7];
          iVar24 = 2;
          goto LAB_004067b9;
        default:
          iVar24 = (byte)(&UNK_004163a0)[(int)(uint)bVar30] - 0x1c;
          uVar45 = (ulong)(uint)(int)(char)(&UNK_00416520)[iVar24];
          local_5a0 = local_5a0 + -uVar31;
          local_588 = (undefined (*) [16])((long)pauVar37 + uVar31 * -0x38);
          break;
        case 7:
          pcVar42 = "datetime";
          param_1[0x19] = param_1[0x19] + 1;
          param_1[0x15] = param_1[0x15] + 1;
          goto LAB_0040683e;
        case 8:
          pcVar42 = "time";
          param_1[0x19] = param_1[0x19] + 1;
          goto LAB_0040683e;
        case 9:
          pcVar42 = "local_zone";
          param_1[0x17] = param_1[0x17] + 1;
          goto LAB_0040683e;
        case 10:
          pcVar42 = "zone";
          param_1[0x1a] = param_1[0x1a] + 1;
          goto LAB_0040683e;
        case 0xb:
          pcVar42 = "date";
          param_1[0x15] = param_1[0x15] + 1;
          goto LAB_0040683e;
        case 0xc:
          pcVar42 = "day";
          param_1[0x16] = param_1[0x16] + 1;
LAB_0040683e:
          uVar28 = dcgettext(0,pcVar42,5);
          local_588 = (undefined (*) [16])(pauVar37[-4] + 8);
          local_5a0 = local_5a0 + -1;
          iVar24 = 4;
LAB_004067b9:
          uVar45 = 0xffffffa3;
          if (*(char *)((long)param_1 + 0xd9) != '\0') {
            FUN_004055a0(uVar28,param_1);
LAB_004067f6:
            uVar45 = 0xffffffa3;
          }
          break;
        case 0xd:
          pcVar42 = "relative";
          goto LAB_00406dd7;
        case 0xe:
          uVar28 = dcgettext(0,"number",5);
          local_588 = (undefined (*) [16])(pauVar37[-4] + 8);
          local_5a0 = local_5a0 + -1;
          uVar45 = 0xffffffa3;
          iVar24 = 4;
          if (*(char *)((long)param_1 + 0xd9) == '\0') break;
          iVar24 = 4;
          FUN_004055a0(uVar28,param_1);
          goto LAB_004067f6;
        case 0xf:
          pcVar42 = "hybrid";
LAB_00406dd7:
          uVar28 = dcgettext(0,pcVar42,5);
          local_588 = (undefined (*) [16])(pauVar37[-4] + 8);
          local_5a0 = local_5a0 + -1;
          uVar45 = 0xffffffa3;
          iVar24 = 4;
          if (*(char *)((long)param_1 + 0xd9) == '\0') break;
          iVar24 = 4;
LAB_00406c7d:
          FUN_00405280(uVar28,param_1);
          goto LAB_004067f6;
        case 0x12:
          pbVar40 = *(byte **)pauVar37[-3];
          local_588 = pauVar37[-7];
          local_5a0 = local_5a0 + -2;
          param_1[10] = (byte *)0x0;
          param_1[0xb] = (byte *)0x0;
          uVar45 = 0xffffffa3;
          param_1[9] = pbVar40;
          uVar28 = *(undefined *)*pauVar37;
          param_1[0xc] = (byte *)0x0;
          *(int *)((long)param_1 + 0x1c) = (int)uVar28;
          iVar24 = 7;
          break;
        case 0x13:
          pbVar40 = *(byte **)pauVar37[-3];
          pbVar44 = *(byte **)pauVar37[-10];
          local_5a0 = local_5a0 + -4;
          param_1[0xb] = (byte *)0x0;
          param_1[0xc] = (byte *)0x0;
          uVar45 = 0xffffffa3;
          param_1[10] = pbVar40;
          uVar28 = *(undefined *)*pauVar37;
          param_1[9] = pbVar44;
          local_588 = pauVar37[-0xe];
          *(int *)((long)param_1 + 0x1c) = (int)uVar28;
          iVar24 = 7;
          break;
        case 0x14:
          pbVar40 = *(byte **)pauVar37[-10];
          uVar45 = 0xffffffa3;
          pbVar44 = *(byte **)pauVar37[-0x11];
          param_1[0xb] = *(byte **)(pauVar37[-4] + 8);
          iVar24 = *(int *)pauVar37[-3];
          param_1[9] = pbVar44;
          local_5a0 = local_5a0 + -6;
          param_1[0xc] = (byte *)(long)iVar24;
          uVar28 = *(undefined *)*pauVar37;
          param_1[10] = pbVar40;
          local_588 = pauVar37[-0x15];
          *(int *)((long)param_1 + 0x1c) = (int)uVar28;
          iVar24 = 7;
          break;
        case 0x16:
          pbVar40 = *(byte **)pauVar37[-3];
          param_1[10] = (byte *)0x0;
          local_588 = pauVar37[-7];
          local_5a0 = local_5a0 + -2;
          param_1[0xb] = (byte *)0x0;
          uVar45 = 0x14;
          param_1[9] = pbVar40;
          iVar24 = 8;
          param_1[0xc] = (byte *)0x0;
          *(undefined *)((long)param_1 + 0x1c) = 2;
          break;
        case 0x17:
          pbVar40 = *(byte **)pauVar37[-3];
          pbVar44 = *(byte **)pauVar37[-10];
          param_1[0xb] = (byte *)0x0;
          local_5a0 = local_5a0 + -4;
          param_1[0xc] = (byte *)0x0;
          uVar45 = 0x14;
          param_1[9] = pbVar44;
          local_588 = pauVar37[-0xe];
          param_1[10] = pbVar40;
          iVar24 = 8;
          *(undefined *)((long)param_1 + 0x1c) = 2;
          break;
        case 0x18:
          pbVar40 = *(byte **)(pauVar37[-4] + 8);
          pbVar44 = *(byte **)pauVar37[-10];
          *(undefined *)((long)param_1 + 0x1c) = 2;
          uVar45 = 0x14;
          pbVar2 = *(byte **)pauVar37[-0x11];
          param_1[0xb] = pbVar40;
          iVar24 = *(int *)pauVar37[-3];
          param_1[9] = pbVar2;
          local_5a0 = local_5a0 + -6;
          param_1[10] = pbVar44;
          local_588 = pauVar37[-0x15];
          param_1[0xc] = (byte *)(long)iVar24;
          iVar24 = 8;
          break;
        case 0x1b:
          uVar28 = *(undefined *)(pauVar37[-3] + 8);
          uVar27 = *(undefined *)*pauVar37;
          uVar5 = *(undefined *)pauVar37[-3];
          uVar4 = pauVar37[-4][8];
          param_1[0x1a] = param_1[0x1a] + 1;
          cVar20 = FUN_00405100(param_1 + 3,uVar4,uVar5,uVar28,uVar27);
          if (cVar20 == '\0') {
            return 1;
          }
          local_588 = pauVar37[-7];
          local_5a0 = local_5a0 + -2;
          uVar45 = 0xffffffe5;
          iVar24 = 10;
          break;
        case 0x1c:
          local_588 = (undefined (*) [16])(pauVar37[-4] + 8);
          local_5a0 = local_5a0 + -1;
          uVar45 = 0xffffffa3;
          *(int *)((long)param_1 + 0x14) = (int)*(undefined *)*pauVar37;
          iVar24 = 0xb;
          break;
        case 0x1d:
          *(undefined *)((long)param_1 + 0x14) = 1;
          local_588 = pauVar37[-7];
          local_5a0 = local_5a0 + -2;
          uVar45 = 0xffffffa3;
          param_1[0x18] = param_1[0x18] + 1;
          iVar24 = 0xb;
          break;
        case 0x1e:
          iVar24 = (int)*(undefined *)*pauVar37;
          goto LAB_0040635e;
        case 0x1f:
          *(undefined *)(param_1 + 3) = 0x6270;
          local_588 = (undefined (*) [16])(pauVar37[-4] + 8);
          local_5a0 = local_5a0 + -1;
          uVar45 = 0xffffffa3;
          iVar24 = 0xc;
          break;
        case 0x20:
          *(int *)(param_1 + 3) = (int)*(undefined *)(pauVar37[-4] + 8);
          goto LAB_00406b59;
        case 0x21:
          *(undefined *)(param_1 + 3) = 0x6270;
LAB_00406b59:
          iVar24 = *(int *)pauVar37[3];
          iVar21 = *(int *)(param_1 + 0x13);
          *(int *)(param_1 + 0x13) = iVar24 + *(int *)(param_1 + 0x13);
          pbVar40 = param_1[0x12];
          lVar6 = *(long *)(pauVar37[2] + 8);
          param_1[0x12] = pbVar40 + *(long *)(pauVar37[2] + 8);
          pbVar44 = param_1[0x11];
          lVar25 = *(long *)pauVar37[2];
          param_1[0x11] = pbVar44 + *(long *)pauVar37[2];
          pbVar2 = param_1[0x10];
          lVar7 = *(long *)(pauVar37[1] + 8);
          param_1[0x10] = pbVar2 + *(long *)(pauVar37[1] + 8);
          pbVar8 = param_1[0xf];
          lVar9 = *(long *)pauVar37[1];
          param_1[0xf] = pbVar8 + *(long *)pauVar37[1];
          pbVar10 = param_1[0xe];
          lVar11 = *(long *)(*pauVar37 + 8);
          param_1[0xe] = pbVar10 + *(long *)(*pauVar37 + 8);
          pbVar12 = param_1[0xd];
          lVar13 = *(long *)*pauVar37;
          param_1[0xd] = pbVar12 + *(long *)*pauVar37;
          if (((byte)(SCARRY8((long)pbVar10,lVar11) |
                     SCARRY8((long)pbVar40,lVar6) | SCARRY4(iVar24,iVar21) |
                     SCARRY8((long)pbVar44,lVar25) | SCARRY8((long)pbVar2,lVar7) |
                     SCARRY8((long)pbVar8,lVar9)) != 0) || (SCARRY8((long)pbVar12,lVar13) != false))
          {
            return 1;
          }
          *(undefined *)((long)param_1 + 0xa1) = 1;
          uVar28 = dcgettext(0,"relative",5);
          local_5a0 = local_5a0 + -2;
          local_588 = pauVar37[-7];
          uVar45 = 0xffffffa3;
          iVar24 = 0xc;
          if (*(char *)((long)param_1 + 0xd9) == '\0') break;
          iVar24 = 0xc;
          goto LAB_00406c7d;
        case 0x22:
          cVar20 = FUN_00405100(param_1 + 3,pauVar37[-4][8],*(undefined *)pauVar37[-3],
                                *(undefined *)(pauVar37[-3] + 8),*(undefined *)*pauVar37);
          if (cVar20 == '\0') {
            return 1;
          }
          iVar24 = *(int *)(param_1 + 3);
          lVar6 = *(long *)pauVar37[-7];
          lVar25 = (long)iVar24 + *(long *)pauVar37[-7];
          iVar21 = (int)lVar25;
          *(int *)(param_1 + 3) = iVar21;
          if (lVar25 != iVar21 || SCARRY8((long)iVar24,lVar6)) {
            return 1;
          }
          local_588 = (undefined (*) [16])(pauVar37[-0xb] + 8);
          local_5a0 = local_5a0 + -3;
          uVar45 = 0xffffffa3;
          iVar24 = 0xc;
          break;
        case 0x23:
          iVar24 = *(int *)*pauVar37 + 0xe10;
LAB_0040635e:
          *(int *)(param_1 + 3) = iVar24;
          local_588 = (undefined (*) [16])(pauVar37[-4] + 8);
          local_5a0 = local_5a0 + -1;
          uVar45 = 0xffffffa3;
          iVar24 = 0xc;
          break;
        case 0x24:
          local_588 = pauVar37[-7];
          local_5a0 = local_5a0 + -2;
          uVar45 = 0xffffffa3;
          *(int *)(param_1 + 3) = *(int *)(pauVar37[-4] + 8) + 0xe10;
          iVar24 = 0xc;
          break;
        case 0x25:
          uVar28 = *(undefined *)*pauVar37;
          param_1[1] = (byte *)0x0;
          local_588 = (undefined (*) [16])(pauVar37[-4] + 8);
          local_5a0 = local_5a0 + -1;
          uVar45 = 0xffffffa3;
          *(int *)(param_1 + 2) = (int)uVar28;
          iVar24 = 0xd;
          break;
        case 0x26:
          uVar28 = *(undefined *)(pauVar37[-4] + 8);
          param_1[1] = (byte *)0x0;
          local_588 = pauVar37[-7];
          local_5a0 = local_5a0 + -2;
          uVar45 = 0xffffffa3;
          *(int *)(param_1 + 2) = (int)uVar28;
          iVar24 = 0xd;
          break;
        case 0x27:
          pbVar40 = *(byte **)(pauVar37[-4] + 8);
          goto LAB_00406f2b;
        case 0x28:
          pbVar40 = *(byte **)pauVar37[-3];
LAB_00406f2b:
          param_1[1] = pbVar40;
          uVar28 = *(undefined *)*pauVar37;
          local_588 = pauVar37[-7];
          local_5a0 = local_5a0 + -2;
          *(undefined *)(param_1 + 0x1c) = 1;
          uVar45 = 0xffffffa3;
          *(int *)(param_1 + 2) = (int)uVar28;
          iVar24 = 0xd;
          break;
        case 0x29:
          local_5a0 = local_5a0 + -3;
          local_588 = (undefined (*) [16])(pauVar37[-0xb] + 8);
          uVar45 = 0xffffffa3;
          param_1[7] = *(byte **)(pauVar37[-7] + 8);
          param_1[8] = *(byte **)(*pauVar37 + 8);
          iVar24 = 0xe;
          break;
        case 0x2a:
          lVar6 = *(long *)pauVar37[-0xd];
          if (lVar6 < 4) {
            pbVar40 = *(byte **)(pauVar37[-0xe] + 8);
            if (*(char *)((long)param_1 + 0xd9) != '\0') {
              uVar28 = dcgettext(0,
                                 "warning: value %ld has less than 4 digits. Assuming MM/DD/YY[YY]\n"
                                 ,5);
              FUN_00404f90(uVar28,pbVar40);
            }
            uVar14 = *(undefined *)*pauVar37;
            uVar15 = *(undefined *)(*pauVar37 + 4);
            uVar16 = *(undefined *)(*pauVar37 + 8);
            uVar17 = *(undefined *)(*pauVar37 + 0xc);
            local_5a0 = local_5a0 + -5;
            local_588 = (undefined (*) [16])(pauVar37[-0x12] + 8);
            uVar45 = 0xffffffa3;
            param_1[7] = pbVar40;
            pbVar40 = *(byte **)(pauVar37[-7] + 8);
            *(undefined *)(param_1 + 4) = uVar14;
            *(undefined *)((long)param_1 + 0x24) = uVar15;
            *(undefined *)(param_1 + 5) = uVar16;
            *(undefined *)((long)param_1 + 0x2c) = uVar17;
            param_1[8] = pbVar40;
            param_1[6] = *(byte **)pauVar37[1];
            iVar24 = 0xe;
          }
          else {
            if (*(char *)((long)param_1 + 0xd9) != '\0') {
              uVar28 = *(undefined *)(pauVar37[-0xe] + 8);
              uVar27 = dcgettext(0,"warning: value %ld has %ld digits. Assuming YYYY/MM/DD\n",5);
              FUN_00404f90(uVar27,uVar28,lVar6);
            }
            auVar3 = pauVar37[-0xe];
            local_5a0 = local_5a0 + -5;
            local_588 = (undefined (*) [16])(pauVar37[-0x12] + 8);
            uVar45 = 0xffffffa3;
            param_1[6] = *(byte **)pauVar37[-0xd];
            pbVar40 = *(byte **)(pauVar37[-7] + 8);
            *(undefined (*) [16])(param_1 + 4) = auVar3;
            param_1[7] = pbVar40;
            param_1[8] = *(byte **)(*pauVar37 + 8);
            iVar24 = 0xe;
          }
          break;
        case 0x2b:
          param_1[8] = *(byte **)(pauVar37[-7] + 8);
          param_1[7] = *(byte **)(pauVar37[-4] + 8);
          lVar6 = *(long *)(*pauVar37 + 8);
          param_1[5] = (byte *)-lVar6;
          goto joined_r0x0040734e;
        case 0x2c:
          param_1[7] = *(byte **)pauVar37[-7];
          lVar6 = *(long *)pauVar37[-3];
          param_1[8] = (byte *)-lVar6;
          if (lVar6 == -0x8000000000000000) {
            return 1;
          }
          lVar6 = *(long *)(*pauVar37 + 8);
          param_1[5] = (byte *)-lVar6;
joined_r0x0040734e:
          if (lVar6 == -0x8000000000000000) {
            return 1;
          }
LAB_00407263:
          local_5a0 = local_5a0 + -3;
          local_588 = (undefined (*) [16])(pauVar37[-0xb] + 8);
          uVar45 = 0xffffffa3;
          param_1[6] = *(byte **)pauVar37[1];
          iVar24 = 0xe;
          break;
        case 0x2d:
          local_588 = pauVar37[-7];
          local_5a0 = local_5a0 + -2;
          uVar45 = 0xffffffa3;
          param_1[7] = *(byte **)(pauVar37[-4] + 8);
          param_1[8] = *(byte **)(*pauVar37 + 8);
          iVar24 = 0xe;
          break;
        case 0x2e:
          auVar3 = *pauVar37;
          local_5a0 = local_5a0 + -4;
          local_588 = pauVar37[-0xe];
          uVar45 = 0xffffffa3;
          param_1[7] = *(byte **)(pauVar37[-0xb] + 8);
          pbVar40 = *(byte **)(pauVar37[-7] + 8);
          *(undefined (*) [16])(param_1 + 4) = auVar3;
          param_1[8] = pbVar40;
          param_1[6] = *(byte **)pauVar37[1];
          iVar24 = 0xe;
          break;
        case 0x2f:
          local_588 = pauVar37[-7];
          local_5a0 = local_5a0 + -2;
          uVar45 = 0xffffffa3;
          param_1[8] = *(byte **)pauVar37[-3];
          param_1[7] = *(byte **)*pauVar37;
          iVar24 = 0xe;
          break;
        case 0x30:
          uVar14 = *(undefined *)*pauVar37;
          uVar15 = *(undefined *)(*pauVar37 + 4);
          uVar16 = *(undefined *)(*pauVar37 + 8);
          uVar17 = *(undefined *)(*pauVar37 + 0xc);
          param_1[8] = *(byte **)(pauVar37[-7] + 8);
          pbVar40 = *(byte **)(pauVar37[-4] + 8);
          *(undefined *)(param_1 + 4) = uVar14;
          *(undefined *)((long)param_1 + 0x24) = uVar15;
          *(undefined *)(param_1 + 5) = uVar16;
          *(undefined *)((long)param_1 + 0x2c) = uVar17;
          param_1[7] = pbVar40;
          goto LAB_00407263;
        case 0x32:
          auVar3 = pauVar37[-7];
          param_1[6] = *(byte **)pauVar37[-6];
          lVar6 = *(long *)pauVar37[-3];
          *(undefined (*) [16])(param_1 + 4) = auVar3;
          param_1[7] = (byte *)-lVar6;
          if (lVar6 == -0x8000000000000000) {
            return 1;
          }
          lVar6 = *(long *)(*pauVar37 + 8);
          param_1[8] = (byte *)-lVar6;
          if (lVar6 == -0x8000000000000000) {
            return 1;
          }
          local_588 = (undefined (*) [16])(pauVar37[-0xb] + 8);
          local_5a0 = local_5a0 + -3;
          uVar45 = 0xffffffa3;
          iVar24 = 0xf;
          break;
        case 0x33:
          pbVar40 = param_1[0x12];
          lVar6 = *(long *)(pauVar37[-4] + 8);
          lVar25 = *(long *)pauVar37[-3];
          lVar7 = *(long *)(pauVar37[-3] + 8);
          lVar9 = *(long *)pauVar37[-2];
          iVar24 = *(int *)(pauVar37[-1] + 8);
          pbVar44 = param_1[0x10];
          pbVar2 = param_1[0x11];
          pbVar8 = param_1[0xf];
          lVar11 = *(long *)pauVar37[-1];
          pbVar10 = param_1[0xe];
          lVar13 = *(long *)(pauVar37[-2] + 8);
          local_570 = param_1[0xd];
          iVar21 = *(int *)(param_1 + 0x13);
          if (*(int *)*pauVar37 < 0) {
            *(int *)(param_1 + 0x13) = iVar21 - iVar24;
            param_1[0x12] = pbVar40 + -lVar11;
            param_1[0x11] = pbVar2 + -lVar13;
            param_1[0x10] = pbVar44 + -lVar9;
            param_1[0xf] = pbVar8 + -lVar7;
            param_1[0xe] = pbVar10 + -lVar25;
            param_1[0xd] = local_570 + -lVar6;
            bVar30 = SBORROW8((long)pbVar40,lVar11) | SBORROW4(iVar21,iVar24) |
                     SBORROW8((long)pbVar2,lVar13) | SBORROW8((long)pbVar44,lVar9) |
                     SBORROW8((long)pbVar8,lVar7) | SBORROW8((long)pbVar10,lVar25) |
                     SBORROW8((long)local_570,lVar6);
          }
          else {
            *(int *)(param_1 + 0x13) = iVar21 + iVar24;
            param_1[0x12] = pbVar40 + lVar11;
            param_1[0x11] = pbVar2 + lVar13;
            param_1[0x10] = pbVar44 + lVar9;
            param_1[0xf] = pbVar8 + lVar7;
            param_1[0xe] = pbVar10 + lVar25;
            param_1[0xd] = local_570 + lVar6;
            bVar30 = SCARRY8((long)pbVar40,lVar11) | SCARRY4(iVar21,iVar24) |
                     SCARRY8((long)pbVar2,lVar13) | SCARRY8((long)pbVar44,lVar9) |
                     SCARRY8((long)pbVar8,lVar7) | SCARRY8((long)pbVar10,lVar25) |
                     SCARRY8((long)local_570,lVar6);
          }
          if (bVar30 != 0) {
            return 1;
          }
          *(undefined *)((long)param_1 + 0xa1) = 1;
          local_588 = pauVar37[-7];
          local_5a0 = local_5a0 + -2;
          uVar45 = 0xffffffa3;
          iVar24 = 0x10;
          break;
        case 0x34:
        case 0x35:
          iVar24 = *(int *)pauVar37[3];
          iVar21 = *(int *)(param_1 + 0x13);
          *(int *)(param_1 + 0x13) = iVar24 + *(int *)(param_1 + 0x13);
          pbVar40 = param_1[0x12];
          lVar6 = *(long *)(pauVar37[2] + 8);
          param_1[0x12] = pbVar40 + *(long *)(pauVar37[2] + 8);
          pbVar44 = param_1[0x11];
          lVar25 = *(long *)pauVar37[2];
          param_1[0x11] = pbVar44 + *(long *)pauVar37[2];
          pbVar2 = param_1[0x10];
          lVar7 = *(long *)(pauVar37[1] + 8);
          param_1[0x10] = pbVar2 + *(long *)(pauVar37[1] + 8);
          pbVar8 = param_1[0xf];
          lVar9 = *(long *)pauVar37[1];
          param_1[0xf] = pbVar8 + *(long *)pauVar37[1];
          pbVar10 = param_1[0xe];
          lVar11 = *(long *)(*pauVar37 + 8);
          param_1[0xe] = pbVar10 + *(long *)(*pauVar37 + 8);
          pbVar12 = param_1[0xd];
          lVar13 = *(long *)*pauVar37;
          param_1[0xd] = pbVar12 + *(long *)*pauVar37;
          if ((byte)(SCARRY8((long)pbVar10,lVar11) |
                    SCARRY8((long)pbVar40,lVar6) | SCARRY4(iVar24,iVar21) |
                    SCARRY8((long)pbVar44,lVar25) | SCARRY8((long)pbVar2,lVar7) |
                    SCARRY8((long)pbVar8,lVar9)) != 0) {
            return 1;
          }
          if (SCARRY8((long)pbVar12,lVar13) != false) {
            return 1;
          }
          *(undefined *)((long)param_1 + 0xa1) = 1;
          local_588 = (undefined (*) [16])(pauVar37[-4] + 8);
          local_5a0 = local_5a0 + -1;
          uVar45 = 0xffffffa3;
          iVar24 = 0x10;
          break;
        case 0x36:
          uVar29 = *(undefined *)(pauVar37[-4] + 8);
          goto LAB_004069cb;
        case 0x37:
          uVar29 = *(undefined *)pauVar37[-3];
LAB_004069cb:
          uVar45 = 0xffffffa3;
          iVar24 = 0x11;
LAB_00406944:
          uStack_4a8 = 0;
          local_588 = pauVar37[-7];
          local_5a0 = local_5a0 + -2;
          local_5d0 = 0;
          uVar48 = 0;
          lVar26 = 0;
          uVar46 = 0;
          local_5e0 = 0;
          local_5d8 = 0;
          break;
        case 0x38:
          local_588 = (undefined (*) [16])(pauVar37[-4] + 8);
          local_5a0 = local_5a0 + -1;
          iVar24 = 0x11;
          uVar48 = 0;
          uVar45 = 0xffffffa3;
          lVar26 = 0;
          uStack_4a8 = 0;
          uVar46 = 0;
          local_5d0 = 0;
          uVar29 = 1;
          local_5e0 = 0;
          local_5d8 = 0;
          break;
        case 0x39:
          uVar46 = *(undefined *)(pauVar37[-4] + 8);
          uVar45 = 0xffffffa3;
          iVar24 = 0x11;
          goto LAB_00406726;
        case 0x3a:
          uVar46 = *(undefined *)pauVar37[-3];
          uVar45 = 0xffffffa3;
          iVar24 = 0x11;
          goto LAB_00406726;
        case 0x3b:
          local_588 = (undefined (*) [16])(pauVar37[-4] + 8);
          local_5a0 = local_5a0 + -1;
          iVar24 = 0x11;
          uVar48 = 0;
          uVar45 = 0xffffffa3;
          lVar26 = 0;
          uVar29 = 0;
          uStack_4a8 = 0;
          local_5d0 = 0;
          uVar46 = 1;
          local_5e0 = 0;
          local_5d8 = 0;
          break;
        case 0x3c:
          lVar26 = *(long *)(pauVar37[-4] + 8) * *(long *)*pauVar37;
          if (SEXT816(lVar26) != SEXT816(*(long *)(pauVar37[-4] + 8)) * SEXT816(*(long *)*pauVar37))
          {
            return 1;
          }
          goto LAB_00406666;
        case 0x3d:
          lVar26 = *(long *)pauVar37[-3] * *(long *)*pauVar37;
          if (SEXT816(lVar26) != SEXT816(*(long *)pauVar37[-3]) * SEXT816(*(long *)*pauVar37)) {
            return 1;
          }
LAB_00406666:
          local_588 = pauVar37[-7];
          local_5a0 = local_5a0 + -2;
          uVar45 = 0xffffffa3;
          iVar24 = 0x11;
          goto LAB_00406605;
        case 0x3e:
          lVar26 = *(long *)*pauVar37;
          local_588 = (undefined (*) [16])(pauVar37[-4] + 8);
          local_5a0 = local_5a0 + -1;
          iVar24 = 0x11;
          uVar45 = 0xffffffa3;
          goto LAB_00406605;
        case 0x3f:
          uVar48 = *(undefined *)(pauVar37[-4] + 8);
          uVar45 = 0xffffffa3;
          iVar24 = 0x11;
          goto LAB_00406598;
        case 0x40:
          uVar48 = *(undefined *)pauVar37[-3];
          uVar45 = 0xffffffa3;
          iVar24 = 0x11;
          goto LAB_00406598;
        case 0x41:
          local_588 = (undefined (*) [16])(pauVar37[-4] + 8);
          local_5a0 = local_5a0 + -1;
          iVar24 = 0x11;
          lVar26 = 0;
          uVar45 = 0xffffffa3;
          uVar46 = 0;
          uVar29 = 0;
          uStack_4a8 = 0;
          local_5d0 = 0;
          uVar48 = 1;
          local_5e0 = 0;
          local_5d8 = 0;
          break;
        case 0x42:
          local_5d8 = *(undefined *)(pauVar37[-4] + 8);
          goto LAB_004064df;
        case 0x43:
          local_5d8 = *(undefined *)pauVar37[-3];
LAB_004064df:
          uVar45 = 0xffffffa3;
          iVar24 = 0x11;
LAB_004064f7:
          uStack_4a8 = 0;
          local_588 = pauVar37[-7];
          local_5a0 = local_5a0 + -2;
          uVar48 = 0;
          lVar26 = 0;
          uVar46 = 0;
          uVar29 = 0;
          local_5d0 = 0;
          local_5e0 = 0;
          break;
        case 0x44:
          local_588 = (undefined (*) [16])(pauVar37[-4] + 8);
          local_5a0 = local_5a0 + -1;
          iVar24 = 0x11;
          uVar48 = 0;
          uVar45 = 0xffffffa3;
          lVar26 = 0;
          uVar46 = 0;
          uVar29 = 0;
          uStack_4a8 = 0;
          local_5d0 = 0;
          local_5e0 = 0;
          local_5d8 = 1;
          break;
        case 0x45:
          local_5e0 = *(undefined *)(pauVar37[-4] + 8);
          goto LAB_00406316;
        case 0x46:
          local_5e0 = *(undefined *)pauVar37[-3];
LAB_00406316:
          uVar45 = 0xffffffa3;
          iVar24 = 0x11;
LAB_0040632e:
          local_588 = pauVar37[-7];
          local_5a0 = local_5a0 + -2;
          local_5d0 = 0;
          goto LAB_00406297;
        case 0x47:
        case 0x48:
          local_5e0 = *(undefined *)(pauVar37[-4] + 8);
          local_588 = pauVar37[-7];
          local_5a0 = local_5a0 + -2;
          uStack_4a8 = *(ulong *)pauVar36[3] & 0xffffffff;
          uVar45 = 0xffffffa3;
          local_5d0 = (ulong)*(uint *)pauVar37[-3];
          iVar24 = 0x11;
          goto LAB_00406297;
        case 0x49:
          local_588 = (undefined (*) [16])(pauVar37[-4] + 8);
          local_5a0 = local_5a0 + -1;
          uVar45 = 0xffffffa3;
          iVar24 = 0x11;
          local_5d0 = 0;
          local_5e0 = 1;
LAB_00406297:
          uStack_4a8 = 0;
          uVar48 = 0;
          lVar26 = 0;
          uVar46 = 0;
          uVar29 = 0;
          local_5d8 = 0;
          break;
        case 0x4b:
          uVar29 = *(undefined *)pauVar37[-3];
          uVar45 = 0x3c;
          iVar24 = 0x12;
          goto LAB_00406944;
        case 0x4c:
          uVar46 = *(undefined *)pauVar37[-3];
          uVar45 = 0x3c;
          iVar24 = 0x12;
LAB_00406726:
          uStack_4a8 = 0;
          local_588 = pauVar37[-7];
          local_5a0 = local_5a0 + -2;
          local_5d0 = 0;
          uVar48 = 0;
          lVar26 = 0;
          uVar29 = 0;
          local_5e0 = 0;
          local_5d8 = 0;
          break;
        case 0x4d:
          lVar26 = *(long *)pauVar37[-3] * *(long *)*pauVar37;
          if (SEXT816(lVar26) != SEXT816(*(long *)pauVar37[-3]) * SEXT816(*(long *)*pauVar37)) {
            return 1;
          }
          local_588 = pauVar37[-7];
          local_5a0 = local_5a0 + -2;
          uVar45 = 0x3c;
          iVar24 = 0x12;
          goto LAB_00406605;
        case 0x4e:
          uVar48 = *(undefined *)pauVar37[-3];
          uVar45 = 0x3c;
          iVar24 = 0x12;
LAB_00406598:
          uStack_4a8 = 0;
          local_588 = pauVar37[-7];
          local_5a0 = local_5a0 + -2;
          local_5d0 = 0;
          lVar26 = 0;
          uVar46 = 0;
          uVar29 = 0;
          local_5e0 = 0;
          local_5d8 = 0;
          break;
        case 0x4f:
          local_5d8 = *(undefined *)pauVar37[-3];
          uVar45 = 0x3c;
          iVar24 = 0x12;
          goto LAB_004064f7;
        case 0x50:
          local_5e0 = *(undefined *)pauVar37[-3];
          uVar45 = 0x3c;
          iVar24 = 0x12;
          goto LAB_0040632e;
        case 0x51:
          lVar26 = *(long *)*pauVar37;
          local_588 = (undefined (*) [16])(pauVar37[-4] + 8);
          local_5a0 = local_5a0 + -1;
          iVar24 = 0x13;
          uVar45 = 0xffffffa3;
LAB_00406605:
          uStack_4a8 = 0;
          local_5d0 = 0;
          uVar48 = 0;
          uVar46 = 0;
          uVar29 = 0;
          local_5e0 = 0;
          local_5d8 = 0;
          break;
        case 0x55:
          uVar29 = *(undefined *)(*pauVar37 + 8);
          local_588 = (undefined (*) [16])(pauVar37[-4] + 8);
          local_5a0 = local_5a0 + -1;
          uVar46 = 0;
          uVar45 = 0xffffffa3;
          iVar24 = 0x15;
          break;
        case 0x57:
          uVar29 = *(undefined *)(*pauVar37 + 8);
          local_588 = (undefined (*) [16])(pauVar37[-4] + 8);
          local_5a0 = local_5a0 + -1;
          uVar46 = 0;
          uVar45 = 0xffffffa4;
          iVar24 = 0x16;
          break;
        case 0x58:
          FUN_00404ca0(param_1);
          local_588 = (undefined (*) [16])(pauVar37[-4] + 8);
          local_5a0 = local_5a0 + -1;
          uVar45 = 0xffffffa3;
          iVar24 = 0x17;
          break;
        case 0x59:
          FUN_00404ca0(param_1);
          iVar24 = *(int *)pauVar37[3];
          iVar21 = *(int *)(param_1 + 0x13);
          *(int *)(param_1 + 0x13) = iVar24 + *(int *)(param_1 + 0x13);
          pbVar40 = param_1[0x12];
          lVar6 = *(long *)(pauVar37[2] + 8);
          param_1[0x12] = pbVar40 + *(long *)(pauVar37[2] + 8);
          pbVar44 = param_1[0x11];
          lVar25 = *(long *)pauVar37[2];
          param_1[0x11] = pbVar44 + *(long *)pauVar37[2];
          pbVar2 = param_1[0x10];
          lVar7 = *(long *)(pauVar37[1] + 8);
          param_1[0x10] = pbVar2 + *(long *)(pauVar37[1] + 8);
          pbVar8 = param_1[0xf];
          lVar9 = *(long *)pauVar37[1];
          param_1[0xf] = pbVar8 + *(long *)pauVar37[1];
          pbVar10 = param_1[0xe];
          lVar11 = *(long *)(*pauVar37 + 8);
          param_1[0xe] = pbVar10 + *(long *)(*pauVar37 + 8);
          pbVar12 = param_1[0xd];
          lVar13 = *(long *)*pauVar37;
          param_1[0xd] = pbVar12 + *(long *)*pauVar37;
          if ((byte)(SCARRY8((long)pbVar10,lVar11) |
                    SCARRY8((long)pbVar40,lVar6) | SCARRY4(iVar24,iVar21) |
                    SCARRY8((long)pbVar44,lVar25) | SCARRY8((long)pbVar2,lVar7) |
                    SCARRY8((long)pbVar8,lVar9)) != 0) {
            return 1;
          }
          if (SCARRY8((long)pbVar12,lVar13) != false) {
            return 1;
          }
          *(undefined *)((long)param_1 + 0xa1) = 1;
          local_588 = pauVar37[-7];
          local_5a0 = local_5a0 + -2;
          uVar45 = 0xffffffa3;
          iVar24 = 0x18;
          break;
        case 0x5a:
          uVar45 = 0x2b;
          uVar29 = 0xffffffffffffffff;
          local_5a0 = local_5a0 + -uVar31;
          local_588 = (undefined (*) [16])((long)pauVar37 + uVar31 * -0x38);
          iVar24 = 0x19;
          break;
        case 0x5b:
          uVar29 = *(undefined *)(*pauVar37 + 8);
          local_588 = pauVar37[-7];
          local_5a0 = local_5a0 + -2;
          uVar45 = 0x2b;
          iVar24 = 0x19;
        }
LAB_004060d0:
        pauVar36 = (undefined (*) [16])(local_588[3] + 8);
        _local_4d8 = CONCAT88(uVar46,uVar29);
        local_4d8._0_4_ = (undefined)uVar29;
        local_4d8._4_4_ = (undefined)((ulong)uVar29 >> 0x20);
        uStack_4d0 = (undefined)uVar46;
        uStack_4cc = (undefined)((ulong)uVar46 >> 0x20);
        _auStack_4c8 = CONCAT88(uVar48,lVar26);
        auStack_4c8._0_4_ = (undefined)lVar26;
        auStack_4c8._4_4_ = (undefined)((ulong)lVar26 >> 0x20);
        uStack_4c0 = (undefined)uVar48;
        uStack_4bc = (undefined)((ulong)uVar48 >> 0x20);
        _auStack_4b8 = CONCAT88(local_5e0,local_5d8);
        auStack_4b8._0_4_ = (undefined)local_5d8;
        auStack_4b8._4_4_ = (undefined)((ulong)local_5d8 >> 0x20);
        local_4b0 = (undefined)local_5e0;
        uStack_4ac = (undefined)((ulong)local_5e0 >> 0x20);
        uStack_4a8 = uStack_4a8 & 0xffffffff00000000 | local_5d0;
        uVar31 = uStack_4a8;
        *(undefined *)(local_588[3] + 8) = local_4d8._0_4_;
        *(undefined *)(local_588[3] + 0xc) = local_4d8._4_4_;
        *(undefined *)local_588[4] = uStack_4d0;
        *(undefined *)(local_588[4] + 4) = uStack_4cc;
        *(ulong *)(local_588[6] + 8) = uVar31;
        *(undefined *)(local_588[4] + 8) = auStack_4c8._0_4_;
        *(undefined *)(local_588[4] + 0xc) = auStack_4c8._4_4_;
        *(undefined *)local_588[5] = uStack_4c0;
        *(undefined *)(local_588[5] + 4) = uStack_4bc;
        *(undefined *)(local_588[5] + 8) = auStack_4b8._0_4_;
        *(undefined *)(local_588[5] + 0xc) = auStack_4b8._4_4_;
        *(undefined *)local_588[6] = local_4b0;
        *(undefined *)(local_588[6] + 4) = uStack_4ac;
        uVar49 = (int)uVar45 + (int)*local_5a0;
        if ((uVar49 < 0x71) && (*local_5a0 == (short)(char)(&UNK_00416400)[(int)uVar49])) {
          uVar45 = (ulong)(byte)(&UNK_00416480)[(int)uVar49];
        }
        else {
          uVar45 = (ulong)(char)(&UNK_00416500)[iVar24];
        }
      }
    }
  } while( true );
  pbVar40 = *param_1;
  iVar24 = (-(uint)(bVar33 != 0x2d) & 2) - 1;
  do {
    pbVar40 = pbVar40 + 1;
    *param_1 = pbVar40;
    bVar33 = *pbVar40;
    if (0x20 < bVar33) {
      uVar39 = (uint)bVar33;
      if (uVar39 - 0x30 < 10) goto LAB_00405e81;
      goto LAB_00405c07;
    }
  } while ((1L << (bVar33 & 0x3f) & 0x100003e00U) != 0);
  uVar39 = (uint)bVar33;
  goto LAB_00405c07;
}


/* WARNING: Could not reconcile some variable overlaps */

byte FUN_00407bc0(time_t *param_1,byte *param_2,long *param_3,byte param_4,ulong param_5,
                 byte *param_6)

{
  byte *pbVar1;
  byte *pbVar2;
  time_t tVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  byte bVar10;
  char cVar11;
  size_t sVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  undefined uVar16;
  undefined uVar17;
  char *pcVar18;
  byte *pbVar19;
  ulong uVar20;
  tm *ptVar21;
  undefined uVar22;
  long lVar23;
  char *pcVar24;
  ulong extraout_RDX;
  char *pcVar25;
  ulong extraout_RDX_00;
  ulong uVar26;
  ulong extraout_RDX_01;
  byte bVar27;
  byte *pbVar28;
  size_t __size;
  char *pcVar29;
  char *pcVar30;
  char *pcVar31;
  int iVar32;
  int iVar33;
  byte *pbVar34;
  bool bVar35;
  bool bVar36;
  byte bVar37;
  byte *local_430;
  byte *local_428;
  ulong local_420;
  int local_418;
  long local_3d8 [2];
  undefined local_3c8 [32];
  undefined local_3a8;
  undefined local_3a0;
  undefined local_398;
  int local_390;
  int local_388;
  long local_380;
  int local_368;
  int iStack_364;
  int local_360;
  int iStack_35c;
  int local_358;
  int iStack_354;
  int local_348;
  int local_328;
  int local_324;
  int local_320;
  int local_31c;
  int local_318;
  int local_314;
  int local_308;
  char *local_2f8;
  tm local_2e8;
  long local_2a8 [14];
  byte local_238 [111];
  char cStack_1c9;
  undefined local_1c8;
  undefined local_1c6;
  undefined local_1c5 [29];
  int local_1a8;
  undefined local_1a0;
  undefined local_198;
  undefined uStack_194;
  byte *local_158;
  long local_150;
  int local_148;
  int local_144;
  int local_140;
  uint local_13c;
  ulong local_130;
  long local_128;
  long local_120;
  long local_118;
  ulong local_110;
  long local_108;
  undefined local_100;
  undefined uStack_f8;
  undefined local_f0 [16];
  undefined local_e0 [16];
  undefined local_d0 [16];
  undefined local_c0;
  undefined local_b8;
  ulong local_b0;
  ulong local_a8;
  long local_a0;
  ulong local_98;
  ulong local_90;
  long local_88;
  undefined local_80;
  byte local_7f;
  undefined local_7e;
  undefined local_7c;
  undefined local_78;
  char *local_70;
  undefined local_68;
  int local_64;
  char *local_60;
  undefined local_58;
  undefined local_50;
  
  bVar37 = 0;
  sVar12 = strlen((char *)param_2);
  if (param_3 == (long *)0x0) {
    param_3 = local_3d8;
    FUN_00404bc0(local_3d8);
  }
  lVar13 = param_3[1];
  lVar15 = *param_3;
  bVar27 = *param_2;
  bVar35 = bVar27 < 0x20;
  bVar36 = bVar27 == 0x20;
  pbVar34 = param_2;
  if ((bVar27 < 0x21) && (bVar35 = (0x100003e00U >> ((ulong)bVar27 & 0x3f) & 1) != 0, bVar35)) {
    do {
      pbVar34 = pbVar34 + 1;
      bVar27 = *pbVar34;
      bVar35 = bVar27 < 0x20;
      bVar36 = bVar27 == 0x20;
      if (0x20 < bVar27) break;
      bVar35 = false;
      bVar36 = (1L << (bVar27 & 0x3f) & 0x100003e00U) == 0;
    } while (!bVar36);
  }
  lVar23 = 4;
  pbVar28 = pbVar34;
  pbVar19 = &DAT_00414a3c;
  do {
    if (lVar23 == 0) break;
    lVar23 = lVar23 + -1;
    bVar35 = *pbVar28 < *pbVar19;
    bVar36 = *pbVar28 == *pbVar19;
    pbVar28 = pbVar28 + (ulong)bVar37 * -2 + 1;
    pbVar19 = pbVar19 + (ulong)bVar37 * -2 + 1;
  } while (bVar36);
  if ((!bVar35 && !bVar36) == bVar35) {
    bVar27 = pbVar34[4];
    pbVar28 = pbVar34 + 4;
    if (bVar27 != 0) {
      __size = 1;
      pbVar19 = pbVar28;
      bVar10 = bVar27;
      do {
        if (bVar10 == 0x5c) {
          pbVar1 = pbVar19 + 1;
          pbVar2 = pbVar19 + 1;
          pbVar19 = pbVar1;
          if ((*pbVar2 != 0x5c) && (*pbVar2 != 0x22)) break;
        }
        else if (bVar10 == 0x22) {
          if ((long)__size < 0x65) {
            pbVar34 = local_238;
            local_430 = (byte *)0x0;
            local_428 = pbVar34;
            goto joined_r0x004084a9;
          }
          pbVar34 = (byte *)malloc(__size);
          local_428 = pbVar34;
          local_430 = pbVar34;
          if (pbVar34 != (byte *)0x0) goto joined_r0x004084a9;
          goto LAB_00408650;
        }
        bVar10 = pbVar19[1];
        __size = __size + 1;
        pbVar19 = pbVar19 + 1;
      } while (bVar10 != 0);
    }
  }
  lVar23 = FUN_0040de20(param_5,param_3,&local_328);
  if (lVar23 == 0) {
LAB_00408650:
    local_430 = (byte *)0x0;
    local_b8._0_1_ = 0;
    goto LAB_004083df;
  }
  local_430 = (byte *)0x0;
  uVar20 = param_5;
  local_428 = param_6;
LAB_00407cc0:
  local_128 = 0;
  if (*pbVar34 == 0) {
    pbVar34 = &DAT_00412b98;
  }
  local_13c = 2;
  local_f0 = (undefined)0x0;
  local_418 = (int)lVar13;
  uStack_f8 = (long)local_418;
  local_130 = (long)local_314 + 0x76c;
  local_7f = param_4 & 1;
  iVar32 = 0x76a700;
  local_e0 = (undefined)0x0;
  local_120 = (long)(local_318 + 1);
  local_d0 = (undefined)0x0;
  local_118 = (long)local_31c;
  local_c0 = 0;
  local_110 = (ulong)local_320;
  local_b8 = 0;
  local_108 = (long)local_324;
  local_b0 = 0;
  local_100 = (ulong)local_328;
  local_a8 = 0;
  local_90 = 0;
  local_388 = local_308;
  local_a0 = 0;
  local_98 = 0;
  local_88 = 0;
  local_80 = 0;
  local_7e = 0;
  local_7c = 0;
  local_78 = 0;
  local_70 = local_2f8;
  local_68 = 0x10d;
  local_64 = local_308;
  local_60 = (char *)0x0;
  local_158 = pbVar34;
  do {
    if (SCARRY8((long)iVar32,lVar15)) break;
    local_2a8[0] = iVar32 + lVar15;
    lVar13 = FUN_0040de20(uVar20,local_2a8,&local_1c8);
    if (((lVar13 != 0) && ((char *)CONCAT44(uStack_194,local_198) != (char *)0x0)) &&
       (local_1a8 != local_64)) {
      local_58 = 0x10d;
      local_50 = 0;
      local_60 = (char *)CONCAT44(uStack_194,local_198);
      break;
    }
    iVar32 = iVar32 + 0x76a700;
  } while (iVar32 != 0x1da9c00);
  if (((local_70 != (char *)0x0) && (local_60 != (char *)0x0)) &&
     (iVar32 = strcmp(local_70,local_60), iVar32 == 0)) {
    local_64 = -1;
    local_60 = (char *)0x0;
  }
  iVar32 = FUN_00405940();
  pbVar34 = local_158;
  if (iVar32 == 0) {
    if (local_7f == 0) {
      if ((byte)local_b8 != 0) {
        *(undefined *)param_1 = (undefined)local_100;
        *(undefined *)((long)param_1 + 4) = local_100._4_4_;
        *(undefined *)(param_1 + 1) = (undefined)uStack_f8;
        *(undefined *)((long)param_1 + 0xc) = uStack_f8._4_4_;
        goto LAB_004083d2;
      }
      if (1 < (long)(local_90 | local_b0 | local_a8 | local_98 | local_88 + local_a0))
      goto LAB_004083d0;
LAB_00407f52:
      uVar26 = local_130;
      uVar14 = local_130;
      if ((long)local_130 < 0) {
        lVar13 = -0x76c - local_130;
        local_398 = local_398 & 0xffffffff | lVar13 << 0x20;
        bVar27 = lVar13 != (int)lVar13 || SBORROW8(-0x76c,local_130);
      }
      else {
        if (local_128 == 2) {
          lVar13 = 2000;
          if (0x44 < (long)local_130) {
            lVar13 = 0x76c;
          }
          uVar14 = lVar13 + local_130;
          if ((byte)local_b8 != 0) {
            uVar16 = dcgettext(0,"warning: adjusting year value %ld to %ld\n",5);
            FUN_00404f90(uVar16,uVar26,uVar14);
          }
        }
        bVar27 = false;
        lVar13 = uVar14 - 0x76c;
        if (uVar14 < 0x76c) {
          bVar27 = false;
          if (-1 < lVar13) {
LAB_004089d3:
            bVar27 = true;
          }
        }
        else if (lVar13 < 0) goto LAB_004089d3;
        local_398 = CONCAT44((int)lVar13,(int)local_398);
        if (lVar13 != (int)lVar13) {
          bVar27 = true;
        }
      }
      uVar26 = local_110;
      if ((bool)bVar27 == false) {
        uVar14 = local_120 - 1;
        local_398._0_4_ = (int)uVar14;
        local_398 = local_398 & 0xffffffff00000000 | uVar14 & 0xffffffff;
        if (uVar14 != (long)(int)local_398 || SCARRY8(local_120,-1)) goto LAB_00408a53;
        local_3a0._4_4_ = (int)local_118;
        local_3a0 = local_3a0 & 0xffffffff | local_118 << 0x20;
        bVar35 = local_118 != local_3a0._4_4_;
        if (bVar35) goto LAB_00408a53;
        if (local_90 == 0) {
          if ((local_b8._1_1_ == '\0') || (local_b0 != 0)) {
            local_3a8 = 0;
            local_3a0 = local_118 << 0x20;
            uStack_f8 = 0;
            if (local_7f != 0) {
LAB_00409350:
              local_3a0 = local_118 << 0x20;
              uStack_f8 = 0;
              local_3a8 = 0;
              FUN_00404f90("warning: using midnight as starting time: 00:00:00\n");
              goto LAB_0040935c;
            }
            local_360 = 0;
            iStack_364 = 0;
            local_3a8._0_4_ = 0;
            goto LAB_00408e80;
          }
          if (local_a8 == 0) goto LAB_00408e12;
          local_3a8 = 0;
          local_3a0 = local_118 << 0x20;
          uStack_f8 = 0;
          if (local_7f != 0) goto LAB_00409350;
          local_360 = 0;
          iStack_364 = 0;
          local_3a8._0_4_ = 0;
LAB_00408082:
          local_388 = -1;
        }
        else {
LAB_00408e12:
          uVar14 = (ulong)local_13c;
          if (local_13c != 0) {
            if (local_13c == 1) {
              uVar14 = (ulong)((int)local_110 + 0xc);
              if (local_110 - 1 < 0xb) goto LAB_00408e42;
              if (local_110 == 0xc) {
                local_3a0 = CONCAT44(local_3a0._4_4_,0xc);
                uVar14 = 0xc;
                goto LAB_00408e4a;
              }
              pcVar25 = "pm";
            }
            else {
              if (local_110 < 0x18) goto LAB_00408e3f;
              pcVar25 = "";
            }
LAB_00409583:
            local_3a0 = CONCAT44(local_3a0._4_4_,0xffffffff);
            if (local_7f == 0) goto LAB_004083d0;
            uVar16 = dcgettext(0,"error: invalid hour %ld%s\n",5);
            local_b8._0_1_ = 0;
            FUN_00404f90(uVar16,uVar26,pcVar25);
            goto LAB_004083d2;
          }
          if (local_110 - 1 < 0xb) {
LAB_00408e3f:
            uVar14 = local_110 & 0xffffffff;
LAB_00408e42:
            local_3a0 = local_118 << 0x20 | uVar14;
          }
          else {
            if (local_110 != 0xc) {
              pcVar25 = "am";
              goto LAB_00409583;
            }
            local_3a0 = local_118 << 0x20;
          }
LAB_00408e4a:
          iStack_364 = (int)local_108;
          local_3a8._0_4_ = (int)local_100;
          local_3a8 = local_100 & 0xffffffff | local_108 << 0x20;
          if (local_7f == 0) {
            local_360 = (int)local_3a0;
          }
          else {
            __snprintf_chk(local_2a8,100,1,100,"%02d:%02d:%02d",uVar14,local_108);
            if (local_90 == 0) {
              uVar16 = dcgettext(0,"using current time as starting value: \'%s\'\n",5);
            }
            else {
              uVar16 = dcgettext(0,"using specified time as starting value: \'%s\'\n",5);
            }
            FUN_00404f90(uVar16,local_2a8);
LAB_0040935c:
            iStack_364 = (int)(local_3a8 >> 0x20);
            local_360 = (int)local_3a0;
          }
LAB_00408e80:
          if ((local_b0 | local_a8 | local_90) != 0) goto LAB_00408082;
        }
        if (local_a0 != 0) {
          local_388 = local_144;
        }
        iStack_354 = local_398._4_4_;
        local_368 = (int)local_3a8;
        iStack_35c = local_3a0._4_4_;
        local_358 = (int)local_398;
        local_348 = local_388;
        lVar15 = FUN_0040ded0(uVar20,&local_3a8);
        cVar11 = FUN_00405050(uVar20,&local_368,&local_3a8,lVar15);
        lVar13 = local_88;
        uVar26 = extraout_RDX;
        if (cVar11 == '\0') {
          if (local_88 != 0) {
            local_1c6 = 0x58;
            local_1c8 = 0x5858;
            FUN_00404e20(local_140,local_1c5);
            lVar23 = FUN_0040db40(&local_1c8);
            if (lVar23 == 0) {
              if (local_7f == 0) goto LAB_004083d0;
              local_b8._0_1_ = 0;
              uVar16 = dcgettext(0,"error: tzalloc (\"%s\") failed\n",5);
              FUN_00404f90(uVar16,&local_1c8);
              goto LAB_004083d2;
            }
            local_3a8 = CONCAT44(iStack_364,local_368);
            local_3a0 = CONCAT44(iStack_35c,local_360);
            local_398 = CONCAT44(iStack_354,local_358);
            local_388 = local_348;
            lVar15 = FUN_0040ded0(lVar23,&local_3a8);
            cVar11 = FUN_00405050(lVar23,&local_368,&local_3a8,lVar15);
            FUN_0040de00(lVar23);
            uVar26 = extraout_RDX_00;
            if (cVar11 != '\0') goto LAB_00408b9b;
          }
          iVar9 = iStack_354;
          iVar8 = local_358;
          iVar7 = iStack_35c;
          iVar6 = local_360;
          iVar5 = iStack_364;
          iVar4 = local_368;
          iVar32 = (int)local_3a0;
          iVar33 = (int)(local_3a0 >> 0x20);
          if ((local_368 == (int)local_3a8) && (iStack_364 == local_3a8._4_4_)) {
            if ((((iStack_35c == iVar33) && (local_360 != iVar32)) && (local_358 == (int)local_398))
               && (iStack_354 == local_398._4_4_)) {
              if (local_7f != 0) {
                uVar16 = dcgettext(0,"error: invalid date/time value:\n",5);
                FUN_00404f90(uVar16);
                uVar16 = FUN_00405410(&local_368,&local_158,&local_1c8);
                uVar17 = dcgettext(0,"    user provided time: \'%s\'\n",5);
                FUN_00404f90(uVar17,uVar16);
                uVar16 = FUN_00405410(&local_3a8,&local_158,&local_1c8);
                uVar17 = dcgettext(0,"       normalized time: \'%s\'\n",5);
                FUN_00404f90(uVar17,uVar16);
                pcVar18 = "";
                pcVar24 = "--";
                bVar35 = true;
                pcVar25 = "";
LAB_00408299:
                pcVar30 = "";
                goto LAB_0040829f;
              }
            }
            else if (local_7f != 0) {
              uVar16 = dcgettext(0,"error: invalid date/time value:\n",5);
              FUN_00404f90(uVar16);
              uVar16 = FUN_00405410(&local_368,&local_158,&local_1c8);
              uVar17 = dcgettext(0,"    user provided time: \'%s\'\n",5);
              FUN_00404f90(uVar17,uVar16);
              uVar16 = FUN_00405410(&local_3a8,&local_158,&local_1c8);
              uVar17 = dcgettext(0,"       normalized time: \'%s\'\n",5);
              FUN_00404f90(uVar17,uVar16);
              pcVar18 = "";
              pcVar25 = pcVar18;
              goto LAB_00409795;
            }
          }
          else if (local_7f != 0) {
            uVar16 = dcgettext(0,"error: invalid date/time value:\n",5);
            FUN_00404f90(uVar16);
            uVar16 = FUN_00405410(&local_368,&local_158,&local_1c8);
            uVar17 = dcgettext(0,"    user provided time: \'%s\'\n",5);
            FUN_00404f90(uVar17,uVar16);
            uVar16 = FUN_00405410(&local_3a8,&local_158,&local_1c8);
            uVar17 = dcgettext(0,"       normalized time: \'%s\'\n",5);
            FUN_00404f90(uVar17,uVar16);
            if (iVar4 == (int)local_3a8) {
              pcVar25 = "";
              pcVar18 = "--";
            }
            else {
              pcVar25 = "--";
              pcVar18 = "";
              if (iVar5 != local_3a8._4_4_) {
                pcVar18 = "--";
              }
            }
LAB_00409795:
            pcVar24 = "";
            pcVar30 = "--";
            if (iVar6 != iVar32) {
              pcVar24 = "--";
            }
            if (iVar7 == iVar33) goto LAB_00408299;
LAB_0040829f:
            pcVar29 = "--";
            if (iVar8 == (int)local_398) {
              pcVar29 = "";
            }
            pcVar31 = "----";
            if (iVar9 == local_398._4_4_) {
              pcVar31 = "";
            }
            __snprintf_chk(&local_1c8,100,1,100,
                           "                                 %4s %2s %2s %2s %2s %2s",pcVar31,
                           pcVar29,pcVar30,pcVar24,pcVar18,pcVar25);
            lVar15 = 0x33;
            lVar23 = 0x34;
            while ((local_198._3_1_ == ' ' && (lVar23 = (long)(int)lVar15, (int)lVar15 != 0))) {
              lVar15 = lVar15 + -1;
              local_198._3_1_ = *(char *)((long)&local_1c8 + lVar15);
            }
            *(undefined *)((long)&local_1c8 + lVar23) = 0;
            FUN_00404f90(&DAT_00414bcb,&local_1c8);
            uVar16 = dcgettext(0,"     possible reasons:\n",5);
            FUN_00404f90(uVar16);
            if (bVar35) {
              uVar16 = dcgettext(0,"       non-existing due to daylight-saving time;\n",5);
              FUN_00404f90(uVar16);
            }
            if ((iVar7 != iVar33) && (iVar8 != (int)local_398)) {
              uVar16 = dcgettext(0,"       invalid day/month combination;\n",5);
              FUN_00404f90(uVar16);
            }
            uVar16 = dcgettext(0,"       numeric values overflow;\n",5);
            FUN_00404f90(uVar16);
            if (lVar13 == 0) {
              uVar16 = dcgettext(0,"missing timezone",5);
            }
            else {
              uVar16 = dcgettext(0,"incorrect timezone",5);
            }
            FUN_00404f90(&DAT_00414bc4,uVar16);
          }
          goto LAB_004083d0;
        }
LAB_00408b9b:
        if (local_a8 != 0) {
          if (local_b0 == 0) {
            lVar13 = local_150;
            if ((0 < local_150) && (local_390 != local_148)) {
              lVar13 = local_150 + -1;
            }
            lVar15 = lVar13 * 7;
            if ((SEXT816(lVar15) == SEXT816(lVar13) * SEXT816(7)) &&
               (lVar13 = (long)(((local_148 - local_390) + 7) % 7), lVar23 = lVar13 + lVar15,
               !SCARRY8(lVar13,lVar15))) {
              lVar13 = lVar23 + local_3a0._4_4_;
              local_3a0 = local_3a0 & 0xffffffff | lVar13 << 0x20;
              if (lVar13 == (int)lVar13 && !SCARRY8(lVar23,(long)local_3a0._4_4_)) {
                local_388 = -1;
                lVar15 = FUN_0040ded0(uVar20,&local_3a8);
                if (lVar15 != -1) {
                  if (local_7f != 0) {
                    uVar16 = FUN_00405410(&local_3a8,&local_158,local_2a8);
                    uVar17 = FUN_004054b0(&local_158,&local_1c8);
                    uVar22 = dcgettext(0,"new start date: \'%s\' is \'%s\'\n",5);
                    FUN_00404f90(uVar22,uVar17,uVar16);
                    uVar26 = extraout_RDX_01;
                    goto LAB_00408f68;
                  }
                  goto LAB_00408c86;
                }
              }
            }
            if (local_7f != 0) {
              uVar16 = FUN_00405410(&local_3a8,&local_158,local_2a8);
              uVar17 = FUN_004054b0(&local_158,&local_1c8);
              uVar22 = dcgettext(0,
                                 "error: day \'%s\' (day ordinal=%ld number=%d) resulted in an invalid date: \'%s\'\n"
                                 ,5);
              local_b8._0_1_ = 0;
              FUN_00404f90(uVar22,uVar17,local_150,local_148,uVar16);
              goto LAB_004083d2;
            }
            goto LAB_004083d0;
          }
          if (local_7f == 0) goto LAB_00408c86;
LAB_00409209:
          uVar16 = FUN_004054b0(&local_158,&local_1c8,uVar26);
          uVar17 = dcgettext(0,"warning: day (%s) ignored when explicit dates are given\n",5);
          FUN_00404f90(uVar17,uVar16);
LAB_00408f9e:
          uVar16 = FUN_00405410(&local_3a8,&local_158,local_2a8);
          uVar17 = dcgettext(0,"starting date/time: \'%s\'\n",5);
          FUN_00404f90(uVar17,uVar16);
          bVar10 = local_7f;
          if ((local_f0._0_8_ | local_f0._8_8_ | local_e0._0_8_) != 0) {
            if (local_7f == 0) goto LAB_00409322;
            if ((local_f0._0_8_ | local_f0._8_8_) == 0) {
LAB_00409534:
              if ((int)local_3a0 != 0xc) {
                uVar16 = dcgettext(0,
                                   "warning: when adding relative days, it is recommended to specify noon\n"
                                   ,5);
                FUN_00404f90(uVar16);
              }
            }
            else {
              if (local_3a0._4_4_ != 0xf) {
                uVar16 = dcgettext(0,
                                   "warning: when adding relative months/years, it is recommended to specify the 15th of the months\n"
                                   ,5);
                FUN_00404f90(uVar16);
              }
              if (local_e0._0_8_ != 0) goto LAB_00409534;
            }
            local_420 = (long)local_398._4_4_ + local_f0._0_8_;
            if ((local_420 == (long)(int)local_420) &&
               (SCARRY8((long)local_398._4_4_,local_f0._0_8_) == false)) {
              goto LAB_00409085;
            }
            goto LAB_004091b9;
          }
LAB_00408cac:
          if (local_88 != 0) {
            uVar26 = (ulong)local_140;
            bVar35 = SBORROW8(lVar15,uVar26 - local_380);
            lVar15 = lVar15 - (uVar26 - local_380);
            if ((byte)(SBORROW8(uVar26,local_380) | bVar35) != 0) {
              if (bVar10 != 0) {
                local_b8._0_1_ = 0;
                uVar16 = dcgettext(0,"error: timezone %d caused time_t overflow\n",5);
                FUN_00404f90(uVar16,uVar26 & 0xffffffff);
                goto LAB_004083d2;
              }
              goto LAB_004083d0;
            }
          }
LAB_00408ce1:
          if (bVar10 == 0) {
LAB_00408ce9:
            lVar13 = local_e0._8_8_ * 0xe10;
            local_420 = local_e0._8_8_;
            if (SEXT816(lVar13) == SEXT816((long)local_e0._8_8_) * SEXT416(0xe10)) {
              uVar14 = (ulong)(int)local_c0;
              uVar26 = ((long)(uStack_f8 + uVar14) % 1000000000 + 1000000000U) % 1000000000;
              iVar32 = (int)((long)((uStack_f8 + uVar14) - uVar26) / 1000000000);
              lVar23 = lVar15 + lVar13;
              if (!SCARRY8(lVar15,lVar13)) {
                lVar13 = local_d0._0_8_ * 0x3c;
                if (SEXT816(lVar13) == SEXT816((long)local_d0._0_8_) * SEXT816(0x3c)) {
LAB_00408dab:
                  if (!SCARRY8(lVar23,lVar13)) {
                    lVar15 = lVar23 + lVar13 + local_d0._8_8_;
                    if ((!SCARRY8(lVar23 + lVar13,local_d0._8_8_)) &&
                       (lVar13 = lVar15 + iVar32, !SCARRY8(lVar15,(long)iVar32))) {
                      *param_1 = lVar13;
                      param_1[1] = uVar26;
                      if ((bVar27 != 0) &&
                         ((uVar14 | local_d0._8_8_ | local_d0._0_8_ | local_420) != 0)) {
                        uVar16 = dcgettext(0,
                                           "after time adjustment (%+ld hours, %+ld minutes, %+ld seconds, %+d ns),\n"
                                           ,5);
                        FUN_00404f90(uVar16,local_420,local_d0._0_8_,local_d0._8_8_,
                                     uVar14 & 0xffffffff);
                        uVar16 = dcgettext(0,"    new time = %ld epoch-seconds\n",5);
                        FUN_00404f90(uVar16,lVar13);
                        if (((local_388 != -1) &&
                            (lVar13 = FUN_0040de20(uVar20,param_1,&local_2e8), lVar13 != 0)) &&
                           (local_388 != local_2e8.tm_isdst)) {
                          uVar16 = dcgettext(0,
                                             "warning: daylight saving time changed after time adjustment\n"
                                             ,5);
                          FUN_00404f90(uVar16);
                        }
                      }
                      goto LAB_00408721;
                    }
                  }
                  goto LAB_004093f6;
                }
              }
            }
            goto LAB_004083d0;
          }
          uVar16 = FUN_00405410(&local_3a8,&local_158,local_2a8);
          uVar17 = dcgettext(0,"\'%s\' = %ld epoch-seconds\n",5);
          FUN_00404f90(uVar17,uVar16,lVar15);
          local_420 = local_e0._8_8_;
          lVar13 = local_e0._8_8_ * 0xe10;
          bVar27 = local_7f;
          if (SEXT816(lVar13) == SEXT816((long)local_e0._8_8_) * SEXT416(0xe10)) {
            uVar14 = (ulong)(int)local_c0;
            uVar26 = ((long)(uStack_f8 + uVar14) % 1000000000 + 1000000000U) % 1000000000;
            iVar32 = (int)((long)((uStack_f8 + uVar14) - uVar26) / 1000000000);
            lVar23 = lVar15 + lVar13;
            if (!SCARRY8(lVar15,lVar13)) {
              lVar13 = local_d0._0_8_ * 0x3c;
              if (SEXT816(lVar13) == SEXT816((long)local_d0._0_8_) * SEXT816(0x3c))
              goto LAB_00408dab;
            }
          }
LAB_004093f6:
          if (bVar27 == 0) goto LAB_004083d0;
          pcVar25 = "error: adding relative time caused an overflow\n";
          goto LAB_00408a65;
        }
LAB_00408f68:
        if (local_7f != 0) {
          uVar14 = local_a8;
          if (local_b0 == 0) {
            if (local_a8 == 0) {
              uVar26 = local_3a0 >> 0x20;
              uVar16 = FUN_00404f20(local_398._4_4_,&local_2e8);
              __snprintf_chk(local_2a8,100,1,100,"(Y-M-D) %s-%02d-%02d",uVar16,(int)local_398 + 1);
              uVar16 = dcgettext(0,"using current date as starting value: \'%s\'\n",5);
              FUN_00404f90(uVar16,local_2a8);
              uVar14 = local_b0;
              if (local_a8 != 0) goto joined_r0x00409411;
            }
          }
          else {
joined_r0x00409411:
            if (uVar14 != 0) goto LAB_00409209;
          }
          goto LAB_00408f9e;
        }
LAB_00408c86:
        if ((local_f0._8_8_ | local_f0._0_8_ | local_e0._0_8_) == 0) {
          bVar10 = 0;
          goto LAB_00408cac;
        }
LAB_00409322:
        local_420 = (long)local_398._4_4_ + local_f0._0_8_;
        if ((local_420 != (long)(int)local_420) ||
           (SCARRY8((long)local_398._4_4_,local_f0._0_8_) != false)) goto LAB_004083d0;
LAB_00409085:
        local_420 = local_420 & 0xffffffff;
        uVar26 = (long)(int)local_398 + local_f0._8_8_;
        iVar32 = (int)uVar26;
        if ((uVar26 == (long)iVar32) && (SCARRY8((long)(int)local_398,local_f0._8_8_) == false)) {
          uVar14 = (long)local_3a0._4_4_ + local_e0._0_8_;
          iVar33 = (int)uVar14;
          if ((uVar14 == (long)iVar33) && (SCARRY8((long)local_3a0._4_4_,local_e0._0_8_) == false))
          {
            local_398 = uVar26 & 0xffffffff | local_420 << 0x20;
            local_3a8 = CONCAT44(iStack_364,local_368);
            local_3a0 = CONCAT44(iVar33,local_360);
            local_388 = local_348;
            lVar15 = FUN_0040ded0(uVar20,&local_3a8);
            if (lVar15 == -1) {
              if (local_7f == 0) goto LAB_004083d0;
              uVar16 = FUN_00405410(&local_3a8,&local_158,local_2a8);
              uVar17 = dcgettext(0,
                                 "error: adding relative date resulted in an invalid date: \'%s\'\n"
                                 ,5);
              local_b8._0_1_ = 0;
              FUN_00404f90(uVar17,uVar16);
            }
            else {
              if (local_7f != 0) {
                uVar16 = dcgettext(0,"after date adjustment (%+ld years, %+ld months, %+ld days),\n"
                                   ,5);
                FUN_00404f90(uVar16,local_f0._0_8_,local_f0._8_8_,local_e0._0_8_);
                uVar16 = FUN_00405410(&local_3a8,&local_158,local_2a8);
                uVar17 = dcgettext(0,"    new date/time = \'%s\'\n",5);
                FUN_00404f90(uVar17,uVar16);
                if ((local_348 != -1) && (local_348 != local_388)) {
                  uVar16 = dcgettext(0,
                                     "warning: daylight saving time changed after date adjustment\n"
                                     ,5);
                  FUN_00404f90(uVar16);
                }
                bVar10 = local_7f;
                if ((local_e0._0_8_ == 0) &&
                   ((iVar33 != local_3a0._4_4_ ||
                    ((local_f0._8_8_ == 0 && (iVar32 != (int)local_398)))))) {
                  uVar16 = dcgettext(0,"warning: month/year adjustment resulted in shifted dates:\n"
                                     ,5);
                  FUN_00404f90(uVar16);
                  uVar16 = FUN_00404f20(local_420,&local_2e8);
                  uVar17 = dcgettext(0,"     adjusted Y M D: %s %02d %02d\n",5);
                  FUN_00404f90(uVar17,uVar16,iVar32 + 1,uVar14 & 0xffffffff);
                  uVar26 = local_3a0 >> 0x20;
                  uVar16 = FUN_00404f20(local_398._4_4_,&local_2e8);
                  uVar17 = dcgettext(0,"   normalized Y M D: %s %02d %02d\n",5);
                  FUN_00404f90(uVar17,uVar16,(int)local_398 + 1,uVar26);
                  bVar10 = local_7f;
                }
                goto LAB_00408cac;
              }
              if (local_88 == 0) goto LAB_00408ce9;
              lVar13 = local_140 - local_380;
              bVar35 = SBORROW8(lVar15,lVar13);
              lVar15 = lVar15 - lVar13;
              bVar10 = local_7f;
              if ((byte)(SBORROW8((long)local_140,local_380) | bVar35) == 0) goto LAB_00408ce1;
              local_b8._0_1_ = 0;
            }
            goto LAB_004083d2;
          }
        }
LAB_004091b9:
        if (local_7f != 0) {
          local_b8._0_1_ = 0;
          uVar16 = dcgettext(0,"error: %s:%d\n",5);
          FUN_00404f90(uVar16,"parse-datetime.y",0x877);
          goto LAB_004083d2;
        }
      }
      else {
        if ((byte)local_b8 != 0) {
          uVar16 = dcgettext(0,"error: out-of-range year %ld\n",5);
          FUN_00404f90(uVar16,uVar14);
        }
LAB_00408a53:
        pcVar25 = "error: year, month, or day overflow\n";
        if (local_7f != 0) {
LAB_00408a65:
          local_b8._0_1_ = 0;
          uVar16 = dcgettext(0,pcVar25,5);
          FUN_00404f90(uVar16);
          goto LAB_004083d2;
        }
      }
LAB_004083d0:
      local_b8._0_1_ = 0;
    }
    else {
      uVar16 = dcgettext(0,"input timezone: ",5);
      FUN_00404f90(uVar16);
      pcVar25 = "\'@timespec\' - always UTC";
      if (((byte)local_b8 == '\0') && (pcVar25 = "parsed date/time string", local_88 == 0)) {
        if (local_428 == (byte *)0x0) {
          pcVar25 = "system default";
          goto LAB_00408680;
        }
        bVar35 = param_5 < uVar20;
        bVar36 = param_5 == uVar20;
        if (bVar36) {
          lVar13 = 5;
          pbVar34 = local_428;
          pbVar28 = &DAT_00412b95;
          do {
            if (lVar13 == 0) break;
            lVar13 = lVar13 + -1;
            bVar35 = *pbVar34 < *pbVar28;
            bVar36 = *pbVar34 == *pbVar28;
            pbVar34 = pbVar34 + (ulong)bVar37 * -2 + 1;
            pbVar28 = pbVar28 + (ulong)bVar37 * -2 + 1;
          } while (bVar36);
          pcVar25 = "TZ=\"UTC0\" environment value or -u";
          if ((!bVar35 && !bVar36) == bVar35) goto LAB_00408680;
          uVar16 = dcgettext(0,"TZ=\"%s\" environment value",5);
        }
        else {
          uVar16 = dcgettext(0,"TZ=\"%s\" in date string",5);
        }
        __fprintf_chk(stderr,1,uVar16,local_428);
      }
      else {
LAB_00408680:
        uVar16 = dcgettext(0,pcVar25,5);
        __fprintf_chk(stderr,1,uVar16);
      }
      if (local_a0 == 0) {
LAB_004088a0:
        if (local_88 != 0) {
LAB_004086bd:
          uVar16 = FUN_00404e20(local_140,local_3c8);
          __fprintf_chk(stderr,1," (%s)",uVar16);
        }
      }
      else {
        if (local_88 != 0) goto LAB_004086bd;
        if (0 < local_144) {
          fwrite(", dst",1,5,stderr);
          goto LAB_004088a0;
        }
      }
      fputc(10,stderr);
      if ((byte)local_b8 == '\0') {
        local_b8._0_1_ = local_7f;
        if ((long)(local_90 | local_b0 | local_a8 | local_98 | local_88 + local_a0) < 2)
        goto LAB_00407f52;
        if (local_7f != 0) {
          if (1 < (long)local_90) {
            FUN_00404f90("error: seen multiple time parts\n");
          }
          if (1 < (long)local_b0) {
            FUN_00404f90("error: seen multiple date parts\n");
          }
          if (1 < (long)local_a8) {
            FUN_00404f90("error: seen multiple days parts\n");
          }
          if (1 < (long)local_98) {
            FUN_00404f90("error: seen multiple daylight-saving parts\n");
          }
          if (1 < local_88 + local_a0) {
            local_b8._0_1_ = 0;
            FUN_00404f90("error: seen multiple time-zone parts\n");
            goto LAB_004083d2;
          }
        }
        goto LAB_004083d0;
      }
      *(undefined *)param_1 = (undefined)local_100;
      *(undefined *)((long)param_1 + 4) = local_100._4_4_;
      *(undefined *)(param_1 + 1) = (undefined)uStack_f8;
      *(undefined *)((long)param_1 + 0xc) = uStack_f8._4_4_;
LAB_00408721:
      local_b8._0_1_ = local_7f;
      if (local_7f == 0) {
        local_b8._0_1_ = 1;
        goto LAB_004083d2;
      }
      bVar35 = false;
      bVar36 = local_428 == (byte *)0x0;
      pcVar25 = "timezone: system default\n";
      if (bVar36) {
LAB_00408763:
        uVar16 = dcgettext(0,pcVar25,5);
        FUN_00404f90(uVar16);
      }
      else {
        lVar13 = 5;
        pbVar34 = local_428;
        pbVar28 = &DAT_00412b95;
        do {
          if (lVar13 == 0) break;
          lVar13 = lVar13 + -1;
          bVar35 = *pbVar34 < *pbVar28;
          bVar36 = *pbVar34 == *pbVar28;
          pbVar34 = pbVar34 + (ulong)bVar37 * -2 + 1;
          pbVar28 = pbVar28 + (ulong)bVar37 * -2 + 1;
        } while (bVar36);
        if ((!bVar35 && !bVar36) == bVar35) {
          pcVar25 = "timezone: Universal Time\n";
          goto LAB_00408763;
        }
        uVar16 = dcgettext(0,"timezone: TZ=\"%s\" environment value\n",5);
        FUN_00404f90(uVar16,local_428);
      }
      tVar3 = *param_1;
      uVar26 = param_1[1];
      uVar16 = dcgettext(0,"final: %ld.%09d (epoch-seconds)\n",5);
      FUN_00404f90(uVar16,tVar3,uVar26 & 0xffffffff);
      ptVar21 = gmtime_r(param_1,&local_2e8);
      if (ptVar21 != (tm *)0x0) {
        uVar16 = FUN_00405410(&local_2e8,0,local_2a8);
        uVar17 = dcgettext(0,"final: %s (UTC)\n",5);
        FUN_00404f90(uVar17,uVar16);
      }
      lVar13 = FUN_0040de20(uVar20,param_1,&local_1c8);
      if (lVar13 != 0) {
        uVar16 = FUN_00404e20(local_1a0,local_3c8);
        uVar17 = FUN_00405410(&local_1c8,0,local_2a8);
        uVar22 = dcgettext(0,"final: %s (UTC%s)\n",5);
        FUN_00404f90(uVar22,uVar17,uVar16);
      }
    }
  }
  else {
    local_b8._0_1_ = local_7f;
    if (local_7f != 0) {
      if (local_158 < param_2 + sVar12) {
        uVar16 = dcgettext(0,"error: parsing failed, stopped at \'%s\'\n",5);
      }
      else {
        uVar16 = dcgettext(0,"error: parsing failed\n",5);
      }
      local_b8._0_1_ = 0;
      FUN_00404f90(uVar16,pbVar34);
    }
  }
LAB_004083d2:
  if (uVar20 != param_5) {
    FUN_0040de00(uVar20);
  }
LAB_004083df:
  free(local_430);
  return (byte)local_b8;
joined_r0x004084a9:
  while (bVar27 != 0x22) {
    pbVar19 = pbVar28 + (bVar27 == 0x5c);
    bVar27 = pbVar19[1];
    pbVar28 = pbVar19 + 1;
    *pbVar34 = *pbVar19;
    pbVar34 = pbVar34 + 1;
  }
  *pbVar34 = 0;
  uVar20 = FUN_0040db40(local_428);
  if (uVar20 == 0) {
    local_b8._0_1_ = 0;
    goto LAB_004083df;
  }
  pbVar34 = pbVar28 + 1;
  if (pbVar28[1] < 0x21) {
    uVar26 = 0x100003e00U >> ((ulong)pbVar28[1] & 0x3f) & 1;
    while (uVar26 != 0) {
      pbVar34 = pbVar34 + 1;
      if (0x20 < *pbVar34) break;
      uVar26 = 1L << (*pbVar34 & 0x3f) & 0x100003e00;
    }
  }
  lVar23 = FUN_0040de20(uVar20,param_3,&local_328);
  if (lVar23 != 0) goto LAB_00407cc0;
  local_b8._0_1_ = 0;
  goto LAB_004083d2;
}


undefined FUN_00409b90(undefined param_1,undefined param_2,undefined param_3)

{
  undefined uVar1;
  char *pcVar2;
  long lVar3;
  
  uVar1 = 0;
  pcVar2 = getenv("TZ");
  lVar3 = FUN_0040db40(pcVar2);
  if (lVar3 != 0) {
    uVar1 = FUN_00407bc0(param_1,param_2,param_3,0,lVar3,pcVar2);
    FUN_0040de00(lVar3);
  }
  return uVar1;
}


tm * FUN_00409c00(int *param_1,int *param_2,long param_3,uint param_4)

{
  int iVar1;
  tm *ptVar2;
  time_t local_10;
  
  if (param_3 == 1) {
    iVar1 = *param_2;
    *param_1 = iVar1;
    if (0x44 < *param_2) {
      return (tm *)0x1;
    }
    if ((param_4 & 8) == 0) {
      *param_1 = iVar1 + 100;
      return (tm *)0x1;
    }
  }
  else {
    if (param_3 != 2) {
      time(&local_10);
      ptVar2 = localtime(&local_10);
      if (ptVar2 != (tm *)0x0) {
        *param_1 = ptVar2->tm_year;
        ptVar2 = (tm *)0x1;
      }
      return ptVar2;
    }
    if ((param_4 & 2) != 0) {
      *param_1 = *param_2 * 100 + param_2[1] + -0x76c;
      return (tm *)0x1;
    }
  }
  return (tm *)0x0;
}


undefined FUN_00409c90(long *param_1,char *param_2,uint param_3)

{
  char cVar1;
  size_t sVar2;
  char *pcVar3;
  size_t sVar4;
  char *pcVar5;
  undefined *puVar6;
  undefined uVar7;
  tm *ptVar8;
  ulong uVar9;
  ulong uVar10;
  long local_c8;
  undefined local_c0 [8];
  undefined local_b8 [16];
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint uStack_9c;
  uint local_98;
  uint auStack_94 [7];
  uint auStack_78 [4];
  tm local_68;
  
  sVar2 = strlen(param_2);
  sVar4 = sVar2;
  if ((param_3 & 4) == 0) {
    pcVar3 = (char *)0x0;
  }
  else {
    pcVar3 = strchr(param_2,0x2e);
    if ((pcVar3 != (char *)0x0) && (sVar4 = (long)pcVar3 - (long)param_2, sVar2 - sVar4 != 3)) {
      return 0;
    }
  }
  if ((sVar4 - 8 < 5) && ((sVar4 & 1) == 0)) {
    pcVar5 = param_2;
    do {
      if (9 < (int)*pcVar5 - 0x30U) {
        return 0;
      }
      pcVar5 = pcVar5 + 1;
    } while (param_2 + sVar4 != pcVar5);
    uVar10 = sVar4 >> 1;
    uVar9 = 0;
    do {
      (&local_68.tm_sec)[uVar9] =
           param_2[uVar9 * 2 + 1] + -0x30 + (param_2[uVar9 * 2] * 5 + -0xf0) * 2;
      uVar9 = uVar9 + 1;
    } while (uVar10 != uVar9);
    if ((param_3 & 1) == 0) {
      cVar1 = FUN_00409c00(auStack_94,&local_68,uVar10 - 4,param_3);
      if (cVar1 == '\0') {
        return 0;
      }
      local_98 = auStack_78[uVar10] - 1;
      uStack_9c = auStack_78[uVar10 + 1];
      local_a0 = auStack_78[uVar10 + 2];
      local_a4 = auStack_78[uVar10 + 3];
    }
    else {
      local_98 = local_68.tm_sec - 1;
      uStack_9c = local_68.tm_min;
      local_a0 = local_68.tm_hour;
      local_a4 = local_68.tm_mday;
      cVar1 = FUN_00409c00(auStack_94,&local_68.tm_mon,uVar10 - 4,param_3);
      if (cVar1 == '\0') {
        return 0;
      }
    }
    if (pcVar3 == (char *)0x0) {
      local_a8 = 0;
    }
    else {
      if (9 < (int)pcVar3[1] - 0x30U) {
        return 0;
      }
      if (9 < (int)pcVar3[2] - 0x30U) {
        return 0;
      }
      local_a8 = pcVar3[2] + -0x30 + ((int)pcVar3[1] - 0x30U) * 10;
    }
    local_68.tm_isdst = -1;
    local_68.tm_min = local_a4;
    local_68._8_8_ = CONCAT44(uStack_9c,local_a0);
    local_68._16_8_ = CONCAT44(auStack_94[0],local_98);
    local_68.tm_sec = local_a8;
    local_c8 = FUN_0040da50(&local_68);
    ptVar8 = &local_68;
    if ((local_c8 != -1) || (ptVar8 = localtime(&local_c8), ptVar8 != (tm *)0x0)) {
      if ((auStack_94[0] ^ ptVar8->tm_year | local_98 ^ ptVar8->tm_mon | uStack_9c ^ ptVar8->tm_mday
           | local_a0 ^ ptVar8->tm_hour | local_a4 ^ ptVar8->tm_min | ptVar8->tm_sec ^ local_a8) !=
          0) {
        if (local_a8 != 0x3c) {
          return 0;
        }
        puVar6 = (undefined *)__stpcpy_chk(local_b8,param_2,0x10);
        *(undefined *)(puVar6 + -2) = 0x3935;
        *puVar6 = 0;
        uVar7 = FUN_00409c90(local_c0,local_b8,param_3);
        if ((char)uVar7 == '\0') {
          return uVar7;
        }
      }
      *param_1 = local_c8;
      return 1;
    }
  }
  return 0;
}


void FUN_00409f40(byte *param_1)

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
        pbVar6 = &DAT_00416798;
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
  DAT_0061b350 = param_1;
  program_invocation_name = param_1;
  return;
}


char * FUN_00409fe0(char *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  byte *pbVar3;
  
  pcVar2 = (char *)dcgettext(0,param_1,5);
  if (param_1 == pcVar2) {
    pbVar3 = (byte *)FUN_0040e190();
    if ((*pbVar3 & 0xdf) == 0x55) {
      if (((((pbVar3[1] & 0xdf) != 0x54) || ((pbVar3[2] & 0xdf) != 0x46)) || (pbVar3[3] != 0x2d)) ||
         ((pbVar3[4] != 0x38 || (pbVar3[5] != 0)))) {
LAB_0040a0b8:
        pcVar2 = "\"";
        if (param_2 != 9) {
          pcVar2 = "\'";
        }
        return pcVar2;
      }
      cVar1 = *pcVar2;
      pcVar2 = &DAT_004167a7;
      if (cVar1 != '`') {
        pcVar2 = &DAT_0041679c;
      }
    }
    else {
      if (((((*pbVar3 & 0xdf) != 0x47) || ((pbVar3[1] & 0xdf) != 0x42)) || (pbVar3[2] != 0x31)) ||
         (((pbVar3[3] != 0x38 || (pbVar3[4] != 0x30)) ||
          ((pbVar3[5] != 0x33 || ((pbVar3[6] != 0x30 || (pbVar3[7] != 0)))))))) goto LAB_0040a0b8;
      cVar1 = *pcVar2;
      pcVar2 = &DAT_004167a3;
      if (cVar1 != '`') {
        pcVar2 = &DAT_004167a0;
      }
    }
  }
  return pcVar2;
}


ulong FUN_0040a0e0(undefined *param_1,ulong param_2,char *param_3,ulong param_4,int param_5,
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
LAB_0040ad31:
    if (param_2 != 0) {
      bVar3 = false;
      local_5b = false;
      bVar2 = true;
      local_70 = 0;
      goto LAB_0040a966;
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
      goto LAB_0040ad31;
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
      param_8 = (char *)FUN_00409fe0(&DAT_004167ab,param_5);
      param_9 = (char *)FUN_00409fe0(&DAT_00417977);
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
LAB_0040a178:
  uVar22 = 0;
  bVar5 = local_5b;
LAB_0040a188:
  bVar23 = param_4 != uVar22;
  if (param_4 == 0xffffffffffffffff) {
    bVar23 = param_3[uVar22] != '\0';
  }
  bVar26 = bVar6;
  if (!bVar23) goto LAB_0040a908;
  bVar20 = (bool)(param_5 != 2 & bVar6);
  __s1 = (byte *)(param_3 + uVar22);
  uVar16 = uVar15;
  bVar4 = bVar3;
  if (bVar20) {
    if (local_a0 == 0) {
LAB_0040a880:
      uVar19 = (ulong)*__s1;
      switch(uVar19) {
      case 0:
        goto switchD_0040a892_caseD_0;
      default:
        bVar20 = false;
        goto switchD_0040a6fe_caseD_1;
      case 7:
        bVar17 = 0x61;
        goto LAB_0040a595;
      case 8:
        bVar17 = 0x62;
        break;
      case 9:
switchD_0040a892_caseD_9:
        bVar17 = 0x74;
        break;
      case 10:
switchD_0040a892_caseD_a:
        bVar17 = 0x6e;
        break;
      case 0xb:
switchD_0040a892_caseD_b:
        bVar17 = 0x76;
        goto LAB_0040a595;
      case 0xc:
switchD_0040a892_caseD_c:
        bVar17 = 0x66;
LAB_0040a595:
        if (local_5c) {
          bVar25 = false;
          goto LAB_0040a4e8;
        }
LAB_0040a5a0:
        bVar23 = false;
        goto LAB_0040a35b;
      case 0xd:
        bVar20 = false;
switchD_0040a278_caseD_d:
        bVar25 = param_5 == 2;
        uVar19 = 0xd;
        bVar13 = 0x72;
        goto LAB_0040a4b0;
      case 0x20:
        bVar25 = false;
LAB_0040a8da:
        uVar19 = 0x20;
        goto LAB_0040a8a2;
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
switchD_0040a278_caseD_21:
        bVar25 = false;
        goto LAB_0040a4bb;
      case 0x23:
      case 0x7e:
        bVar26 = false;
LAB_0040a8ba:
        if (uVar22 == 0) {
          bVar25 = false;
          bVar23 = bVar20;
          bVar20 = bVar26;
          goto LAB_0040a2c8;
        }
        bVar23 = false;
        goto LAB_0040a2df;
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
LAB_0040a8a2:
        bVar24 = false;
        bVar23 = bVar20;
        bVar20 = bVar25;
        goto LAB_0040a2e1;
      case 0x27:
        bVar20 = false;
        goto switchD_0040a6fe_caseD_27;
      case 0x3f:
        bVar20 = false;
        goto switchD_0040a6fe_caseD_3f;
      case 0x5c:
        bVar20 = false;
        goto switchD_0040a278_caseD_5c;
      case 0x7b:
      case 0x7d:
        bVar20 = false;
        goto switchD_0040a6fe_caseD_7b;
      }
      bVar25 = false;
      bVar23 = false;
      goto joined_r0x0040a4d7;
    }
    if ((param_4 == 0xffffffffffffffff) && (1 < local_a0)) {
      param_4 = strlen(param_3);
    }
    if ((param_4 < uVar22 + local_a0) || (iVar7 = memcmp(__s1,local_78,local_a0), iVar7 != 0))
    goto LAB_0040a880;
    if (!local_5c) {
      uVar19 = (ulong)*__s1;
      bVar25 = bVar20;
      switch(uVar19) {
      case 0:
        goto switchD_0040a278_caseD_0;
      default:
        goto switchD_0040a6fe_caseD_1;
      case 7:
        bVar17 = 0x61;
        goto LAB_0040a5a0;
      case 8:
        bVar25 = false;
        bVar23 = false;
        bVar17 = 0x62;
        break;
      case 9:
        goto switchD_0040a892_caseD_9;
      case 10:
        goto switchD_0040a892_caseD_a;
      case 0xb:
        goto switchD_0040a892_caseD_b;
      case 0xc:
        goto switchD_0040a892_caseD_c;
      case 0xd:
        goto switchD_0040a278_caseD_d;
      case 0x20:
        goto LAB_0040a8da;
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
        goto switchD_0040a278_caseD_21;
      case 0x23:
      case 0x7e:
        bVar26 = bVar20;
        goto LAB_0040a8ba;
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
        goto LAB_0040a8a2;
      case 0x27:
        goto switchD_0040a6fe_caseD_27;
      case 0x3f:
        goto switchD_0040a6fe_caseD_3f;
      case 0x5c:
        goto switchD_0040a278_caseD_5c;
      case 0x7b:
      case 0x7d:
        goto switchD_0040a6fe_caseD_7b;
      }
      goto LAB_0040a322;
    }
    goto LAB_0040a4fa;
  }
  uVar19 = (ulong)*__s1;
  switch(uVar19) {
  case 0:
    if (bVar6) {
switchD_0040a892_caseD_0:
      if (!local_5c) {
        bVar20 = false;
switchD_0040a278_caseD_0:
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
            goto LAB_0040a3d8;
          }
LAB_0040a61a:
          param_1[uVar16] = 0x5c;
          uVar15 = uVar16;
        }
        else if (uVar15 < uVar9) goto LAB_0040a61a;
        uVar16 = uVar15 + 1;
        bVar24 = bVar23;
        if (param_5 == 2) {
          bVar17 = 0x30;
          bVar23 = false;
          bVar4 = bVar3;
          goto LAB_0040a3d8;
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
LAB_0040a659:
        bVar17 = (byte)uVar19;
        bVar23 = false;
        uVar15 = uVar16;
        bVar4 = bVar3;
        if ((bool)(bVar6 ^ 1U | bVar26)) goto LAB_0040a3d8;
        goto LAB_0040a2e1;
      }
      bVar26 = param_5 == 2;
      goto LAB_0040a4ec;
    }
    if ((param_6 & 1) == 0) {
      bVar25 = param_5 == 2;
      uVar19 = 0;
      bVar23 = false;
      bVar20 = false;
      goto LAB_0040a2c8;
    }
    uVar22 = uVar22 + 1;
    goto LAB_0040a188;
  default:
switchD_0040a6fe_caseD_1:
    bVar25 = bVar6;
    if (sVar8 != 1) {
      local_40[0] = (mbstate_t)0x0;
      if (param_4 == 0xffffffffffffffff) {
        param_4 = strlen(param_3);
      }
      uVar21 = 0;
      do {
        uVar1 = uVar22 + uVar21;
        lVar11 = FUN_0040d310(&local_44,param_3 + uVar1,param_4 - uVar1,local_40);
        if (lVar11 == 0) break;
        if (lVar11 == -1) {
          bVar23 = false;
          goto LAB_0040b00a;
        }
        if (lVar11 == -2) {
          if ((param_4 <= uVar1) || (param_3[uVar1] == '\0')) goto LAB_0040b147;
          goto LAB_0040b137;
        }
        if (((param_5 == 2) && (local_5c)) && (lVar11 != 1)) {
          pcVar12 = param_3 + uVar1 + 1;
          do {
            if (((byte)(*pcVar12 + 0xa5U) < 0x22) &&
               ((1L << (*pcVar12 + 0xa5U & 0x3f) & 0x20000002bU) != 0)) {
              param_5 = 2;
              goto LAB_0040a4ec;
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
      goto LAB_0040b00a;
    }
    ppuVar10 = __ctype_b_loc();
    uVar21 = 1;
    bVar25 = ((*ppuVar10)[uVar19] & 0x4000) == 0;
    bVar23 = !bVar25;
    bVar25 = (bool)(bVar25 & bVar6);
    goto LAB_0040a6d4;
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
    goto LAB_0040a712;
  case 10:
    uVar19 = 10;
    bVar13 = 0x6e;
    goto LAB_0040a712;
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
LAB_0040a712:
    bVar25 = param_5 == 2;
    bVar20 = (bool)(local_5c & bVar25);
    if (bVar20) {
LAB_0040a72a:
      param_5 = 2;
      goto LAB_0040a4ec;
    }
    break;
  case 0x20:
    uVar19 = 0x20;
    goto LAB_0040a2b6;
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
LAB_0040a2b6:
    bVar25 = param_5 == 2;
    if ((local_5c) && (bVar25)) goto LAB_0040a72a;
    goto LAB_0040a2c8;
  case 0x23:
  case 0x7e:
LAB_0040a2ad:
    bVar25 = param_5 == 2;
    if (uVar22 == 0) goto LAB_0040a2b6;
    goto LAB_0040a4bb;
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
    goto switchD_0040a6fe_caseD_25;
  case 0x27:
switchD_0040a6fe_caseD_27:
    bVar5 = bVar23;
    if (param_5 != 2) {
      bVar25 = false;
      uVar19 = 0x27;
      goto LAB_0040a2c8;
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
      goto LAB_0040a3d8;
    }
    goto LAB_0040a4ec;
  case 0x3f:
switchD_0040a6fe_caseD_3f:
    if (param_5 == 2) {
      if (!local_5c) {
        bVar17 = 0x3f;
        bVar24 = false;
        bVar23 = false;
        goto LAB_0040a3d8;
      }
      goto LAB_0040a4ec;
    }
    if (param_5 != 5) {
      bVar25 = param_5 == 2;
      uVar19 = 0x3f;
      bVar23 = false;
      goto LAB_0040a2c8;
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
        goto LAB_0040a659;
      }
      goto LAB_0040a4fa;
    }
    bVar25 = false;
    uVar19 = 0x3f;
    bVar23 = false;
    goto LAB_0040a2c8;
  case 0x5c:
    if (param_5 != 2) {
switchD_0040a278_caseD_5c:
      uVar19 = 0x5c;
      bVar17 = 0x5c;
      bVar13 = 0x5c;
      bVar25 = (bool)(bVar6 & local_5c & local_a0 != 0);
      if (!bVar25) break;
      uVar22 = uVar22 + 1;
      bVar23 = false;
      goto LAB_0040a3f4;
    }
    if (local_5c) goto LAB_0040a4ec;
    uVar22 = uVar22 + 1;
    bVar23 = false;
    bVar17 = 0x5c;
    goto LAB_0040a3f4;
  case 0x7b:
  case 0x7d:
switchD_0040a6fe_caseD_7b:
    bVar24 = param_4 != 1;
    if (param_4 == 0xffffffffffffffff) {
      bVar24 = param_3[1] != '\0';
    }
    bVar25 = param_5 == 2;
    if (!bVar24) goto LAB_0040a2ad;
    goto LAB_0040a4bb;
  }
LAB_0040a4b0:
  if (!bVar6) {
LAB_0040a4bb:
    bVar23 = false;
    goto LAB_0040a2c8;
  }
  bVar23 = false;
  bVar17 = bVar13;
  goto joined_r0x0040a4d7;
LAB_0040a908:
  if ((uVar15 == 0) && ((bool)(local_5c & param_5 == 2))) {
    param_5 = 2;
LAB_0040a4ec:
    if (bVar26) {
      param_5 = 4;
    }
LAB_0040a4fa:
    uVar9 = FUN_0040a0e0(param_1,uVar9,param_3,param_4,param_5,param_6 & 0xfffffffd,0,param_8,
                         param_9);
    return uVar9;
  }
  bVar26 = (bool)(param_5 == 2 & (local_5c ^ 1U));
  bVar23 = (bool)(local_5c ^ 1U);
  if ((!bVar26) || (bVar23 = bVar26, !bVar5)) {
LAB_0040b1dd:
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
    uVar9 = FUN_0040a0e0(param_1,local_70,param_3,param_4,5,param_6,param_7,param_8,param_9);
    return uVar9;
  }
  local_5b = uVar9 == 0 && local_70 != 0;
  param_2 = local_70;
  bVar23 = bVar5;
  if (uVar9 != 0 || local_70 == 0) goto LAB_0040b1dd;
LAB_0040a966:
  *param_1 = 0x27;
  param_5 = 2;
  uVar15 = 1;
  local_78 = "\'";
  local_a0 = 1;
  local_5c = false;
  uVar9 = param_2;
  goto LAB_0040a178;
  while (__s1[uVar21] != 0) {
LAB_0040b137:
    uVar21 = uVar21 + 1;
    if (param_4 <= uVar22 + uVar21) break;
  }
LAB_0040b147:
  bVar23 = false;
LAB_0040b00a:
  if (1 < uVar21) {
LAB_0040abce:
    bVar26 = false;
    uVar21 = uVar21 + uVar22;
    uVar16 = uVar22;
    do {
      bVar17 = (byte)uVar19;
      if (bVar25) {
        bVar26 = param_5 == 2;
        if (local_5c) goto LAB_0040a4ec;
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
        if (uVar21 <= uVar22) goto LAB_0040a36d;
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
        if (uVar21 <= uVar22) goto LAB_0040a3f4;
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
LAB_0040a6d4:
  if (bVar25) {
    bVar23 = false;
    bVar25 = bVar6;
    goto LAB_0040abce;
  }
switchD_0040a6fe_caseD_25:
  bVar25 = param_5 == 2;
LAB_0040a2c8:
  bVar17 = (byte)uVar19;
  bVar24 = (bool)((bVar6 ^ 1U | bVar25) ^ 1 | local_5c);
  bVar26 = bVar20;
  if (bVar24) {
LAB_0040a2df:
    bVar24 = false;
    bVar20 = bVar26;
LAB_0040a2e1:
    bVar17 = (byte)uVar19;
    uVar16 = uVar15;
    bVar4 = bVar3;
    if ((param_7 == 0) || ((*(uint *)(param_7 + (uVar19 >> 5) * 4) >> (bVar17 & 0x1f) & 1) == 0))
    goto LAB_0040a3d8;
    bVar25 = param_5 == 2;
  }
  else {
LAB_0040a3d8:
    bVar25 = param_5 == 2;
    uVar15 = uVar16;
    bVar3 = bVar4;
    if (!bVar20) {
      uVar22 = uVar22 + 1;
      bVar3 = (bool)((bVar24 ^ 1U) & bVar4);
LAB_0040a3f4:
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
      goto LAB_0040a36d;
    }
  }
joined_r0x0040a4d7:
  if (local_5c) {
LAB_0040a4e8:
    bVar26 = (bool)(bVar6 & bVar25);
    goto LAB_0040a4ec;
  }
LAB_0040a322:
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
LAB_0040a35b:
  if (uVar15 < uVar9) {
    param_1[uVar15] = 0x5c;
  }
  uVar15 = uVar15 + 1;
  uVar22 = uVar22 + 1;
  bVar4 = bVar3;
LAB_0040a36d:
  bVar3 = bVar4;
  if (uVar15 < uVar9) {
    param_1[uVar15] = bVar17;
  }
  uVar15 = uVar15 + 1;
  if (!bVar23) {
    bVar2 = false;
  }
  goto LAB_0040a188;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_0040b310(int param_1,undefined param_2,undefined param_3,undefined *param_4)

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
  puVar8 = (undefined *)PTR_DAT_0061b2d8;
  if (DAT_0061b2f0 <= param_1) {
    if (param_1 == 0x7fffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_0040c3e0();
    }
    if (PTR_DAT_0061b2d8 == &DAT_0061b2e0) {
      puVar8 = (undefined *)FUN_0040c1f0(0);
      uVar6 = PTR_DAT_0061b2e8._4_4_;
      uVar5 = PTR_DAT_0061b2e8._0_4_;
      uVar3 = _UNK_0061b2e4;
      PTR_DAT_0061b2d8 = (undefined *)puVar8;
      *puVar8 = _DAT_0061b2e0;
      puVar8[1] = uVar3;
      puVar8[2] = uVar5;
      puVar8[3] = uVar6;
    }
    else {
      puVar8 = (undefined *)FUN_0040c1f0(PTR_DAT_0061b2d8);
      PTR_DAT_0061b2d8 = (undefined *)puVar8;
    }
    memset(puVar8 + (long)DAT_0061b2f0 * 4,0,(long)((param_1 + 1) - DAT_0061b2f0) << 4);
    DAT_0061b2f0 = param_1 + 1;
  }
  uVar2 = param_4[1];
  puVar10 = (ulong *)(puVar8 + (long)param_1 * 4);
  uVar4 = *puVar10;
  __ptr = (undefined *)puVar10[1];
  uVar9 = FUN_0040a0e0(__ptr,uVar4,param_2,param_3,*param_4,uVar2 | 1,param_4 + 2,
                       *(undefined *)(param_4 + 10),*(undefined *)(param_4 + 0xc));
  if (uVar4 <= uVar9) {
    uVar9 = uVar9 + 1;
    *puVar10 = uVar9;
    if (__ptr != &DAT_0061b360) {
      free(__ptr);
    }
    __ptr = (undefined *)FUN_0040c190(uVar9);
    uVar3 = *param_4;
    puVar10[1] = (ulong)__ptr;
    FUN_0040a0e0(__ptr,uVar9,param_2,param_3,uVar3,uVar2 | 1,param_4 + 2,
                 *(undefined *)(param_4 + 10),*(undefined *)(param_4 + 0xc));
  }
  *piVar7 = iVar1;
  return __ptr;
}


void FUN_0040b4b0(undefined *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_0061b460;
  }
  FUN_0040c390(param_1,0x38);
  *piVar2 = iVar1;
  return;
}


undefined FUN_0040b4f0(undefined *param_1)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = (undefined *)&DAT_0061b460;
  }
  return *param_1;
}


void FUN_0040b500(undefined *param_1,undefined param_2)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = (undefined *)&DAT_0061b460;
  }
  *param_1 = param_2;
  return;
}


uint FUN_0040b510(undefined *param_1,byte param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_0061b460;
  }
  uVar1 = *(uint *)(param_1 + (ulong)(param_2 >> 5) * 4 + 8);
  uVar2 = uVar1 >> (param_2 & 0x1f);
  *(uint *)(param_1 + (ulong)(param_2 >> 5) * 4 + 8) =
       ((param_3 ^ uVar2) & 1) << (param_2 & 0x1f) ^ uVar1;
  return uVar2 & 1;
}


undefined FUN_0040b550(undefined *param_1,undefined param_2)

{
  undefined uVar1;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_0061b460;
  }
  uVar1 = *(undefined *)(param_1 + 4);
  *(undefined *)(param_1 + 4) = param_2;
  return uVar1;
}


void FUN_0040b570(undefined *param_1,long param_2,long param_3)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = (undefined *)&DAT_0061b460;
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


void FUN_0040b5a0(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                 undefined *param_5)

{
  int iVar1;
  int *piVar2;
  
  if (param_5 == (undefined *)0x0) {
    param_5 = (undefined *)&DAT_0061b460;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  FUN_0040a0e0(param_1,param_2,param_3,param_4,*param_5,param_5[1],param_5 + 2,
               *(undefined *)(param_5 + 10),*(undefined *)(param_5 + 0xc));
  *piVar2 = iVar1;
  return;
}


undefined FUN_0040b620(undefined param_1,undefined param_2,long *param_3,undefined *param_4)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined uVar4;
  uint uVar5;
  
  if (param_4 == (undefined *)0x0) {
    param_4 = (undefined *)&DAT_0061b460;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  uVar5 = (uint)(param_3 == (long *)0x0) | param_4[1];
  lVar3 = FUN_0040a0e0(0,0,param_1,param_2,*param_4,uVar5,param_4 + 2,*(undefined *)(param_4 + 10),
                       *(undefined *)(param_4 + 0xc));
  uVar4 = FUN_0040c190(lVar3 + 1);
  FUN_0040a0e0(uVar4,lVar3 + 1,param_1,param_2,*param_4,uVar5,param_4 + 2,
               *(undefined *)(param_4 + 10),*(undefined *)(param_4 + 0xc));
  *piVar2 = iVar1;
  if (param_3 != (long *)0x0) {
    *param_3 = lVar3;
  }
  return uVar4;
}


void FUN_0040b710(undefined param_1,undefined param_2,undefined param_3)

{
  FUN_0040b620(param_1,param_2,0,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040b720(void)

{
  void **ppvVar1;
  void *__ptr;
  undefined *__ptr_00;
  void **ppvVar2;
  
  __ptr_00 = PTR_DAT_0061b2d8;
  if (1 < DAT_0061b2f0) {
    ppvVar2 = (void **)(PTR_DAT_0061b2d8 + 0x18);
    ppvVar1 = (void **)(PTR_DAT_0061b2d8 + (ulong)(DAT_0061b2f0 - 2) * 0x10 + 0x28);
    do {
      __ptr = *ppvVar2;
      ppvVar2 = ppvVar2 + 2;
      free(__ptr);
    } while (ppvVar2 != ppvVar1);
  }
  if (*(undefined **)(__ptr_00 + 8) != &DAT_0061b360) {
    free(*(undefined **)(__ptr_00 + 8));
    _DAT_0061b2e0 = 0x100;
    PTR_DAT_0061b2e8 = &DAT_0061b360;
  }
  if (__ptr_00 != &DAT_0061b2e0) {
    free(__ptr_00);
    PTR_DAT_0061b2d8 = &DAT_0061b2e0;
  }
  DAT_0061b2f0 = 1;
  return;
}


void FUN_0040b7c0(undefined param_1,undefined param_2)

{
  FUN_0040b310(param_1,param_2,0xffffffffffffffff,&DAT_0061b460);
  return;
}


void FUN_0040b7e0(void)

{
  FUN_0040b310();
  return;
}


void FUN_0040b7f0(undefined param_1)

{
  FUN_0040b310(0,param_1,0xffffffffffffffff,&DAT_0061b460);
  return;
}


void FUN_0040b810(undefined param_1,undefined param_2)

{
  FUN_0040b310(0,param_1,param_2,&DAT_0061b460);
  return;
}


void FUN_0040b830(undefined param_1,int param_2,undefined param_3)

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
    FUN_0040b310(param_1,param_3,0xffffffffffffffff,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_0040b8a0(undefined param_1,int param_2,undefined param_3,undefined param_4)

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
    FUN_0040b310(param_1,param_3,param_4,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_0040b910(undefined param_1,undefined param_2)

{
  FUN_0040b830(0,param_1,param_2);
  return;
}


void FUN_0040b920(undefined param_1,undefined param_2,undefined param_3)

{
  FUN_0040b8a0(0,param_1,param_2,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040b930(undefined param_1,undefined param_2,byte param_3)

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
  
  local_18 = DAT_0061b490;
  local_48 = _DAT_0061b460;
  uStack_40 = uRam000000000061b468;
  local_38 = _DAT_0061b470;
  uStack_30 = uRam000000000061b478;
  puVar1 = (uint *)((long)&uStack_40 + (ulong)(param_3 >> 5) * 4);
  local_28 = _DAT_0061b480;
  uStack_20 = uRam000000000061b488;
  uVar2 = *puVar1;
  *puVar1 = (~(uVar2 >> (param_3 & 0x1f)) & 1) << (param_3 & 0x1f) ^ uVar2;
  FUN_0040b310(0,param_1,param_2,&local_48);
  return;
}


void FUN_0040b9a0(undefined param_1,char param_2)

{
  FUN_0040b930(param_1,0xffffffffffffffff,(int)param_2);
  return;
}


void FUN_0040b9b0(undefined param_1)

{
  FUN_0040b930(param_1,0xffffffffffffffff,0x3a);
  return;
}


void FUN_0040b9d0(undefined param_1,undefined param_2)

{
  FUN_0040b930(param_1,param_2,0x3a);
  return;
}


void FUN_0040b9e0(undefined param_1,int param_2,undefined param_3)

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
    FUN_0040b310(param_1,param_3,0xffffffffffffffff,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040ba50(undefined param_1,long param_2,long param_3,undefined param_4,undefined param_5
                 )

{
  undefined local_48;
  undefined uStack_40;
  undefined local_38;
  undefined uStack_30;
  undefined local_28;
  long lStack_20;
  long local_18;
  
  uStack_40 = uRam000000000061b468;
  local_38 = _DAT_0061b470;
  uStack_30 = uRam000000000061b478;
  local_28 = _DAT_0061b480;
  lStack_20 = uRam000000000061b488;
  local_18 = DAT_0061b490;
  local_48 = CONCAT44((int)((ulong)_DAT_0061b460 >> 0x20),10);
  if ((param_2 != 0) && (param_3 != 0)) {
    lStack_20 = param_2;
    local_18 = param_3;
    FUN_0040b310(param_1,param_4,param_5,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_0040bac0(void)

{
  FUN_0040ba50();
  return;
}


void FUN_0040bad0(undefined param_1,undefined param_2,undefined param_3)

{
  FUN_0040ba50(0,param_1,param_2,param_3,0xffffffffffffffff);
  return;
}


void FUN_0040baf0(undefined param_1,undefined param_2,undefined param_3,undefined param_4)

{
  FUN_0040ba50(0,param_1,param_2,param_3,param_4);
  return;
}


void FUN_0040bb10(void)

{
  FUN_0040b310();
  return;
}


void FUN_0040bb20(undefined param_1,undefined param_2)

{
  FUN_0040b310(0,param_1,param_2,&DAT_0061b2a0);
  return;
}


void FUN_0040bb40(undefined param_1,undefined param_2)

{
  FUN_0040b310(param_1,param_2,0xffffffffffffffff,&DAT_0061b2a0);
  return;
}


void FUN_0040bb60(undefined param_1)

{
  FUN_0040b310(0,param_1,0xffffffffffffffff,&DAT_0061b2a0);
  return;
}


int FUN_0040bb80(timespec *param_1)

{
  int iVar1;
  int *piVar2;
  timeval local_28;
  
  iVar1 = clock_settime(0,param_1);
  if (iVar1 != 0) {
    piVar2 = __errno_location();
    if (*piVar2 != 1) {
      local_28.tv_sec = param_1->tv_sec;
      local_28.tv_usec = param_1->tv_nsec / 1000;
      iVar1 = settimeofday(&local_28,(timezone *)0x0);
    }
  }
  return iVar1;
}


undefined
FUN_0040bbf0(FILE *param_1,long param_2,undefined param_3,undefined param_4,undefined *param_5,
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
  uVar1 = dcgettext(0,&DAT_004174eb,5);
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
    goto LAB_0040be6c;
  case 5:
    uVar1 = param_5[3];
    uVar4 = param_5[2];
    uVar5 = param_5[1];
    uVar6 = *param_5;
    uVar7 = dcgettext(0,"Written by %s, %s, %s,\n%s, and %s.\n",5);
LAB_0040be6c:
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
    goto LAB_0040bf09;
  case 7:
    uVar1 = param_5[2];
    uVar4 = param_5[5];
    uVar5 = param_5[4];
    uVar6 = param_5[3];
    local_58 = param_5[1];
    uVar7 = *param_5;
    uVar3 = dcgettext(0,"Written by %s, %s, %s,\n%s, %s, %s, and %s.\n",5);
LAB_0040bf09:
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
    goto LAB_0040bcea;
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
LAB_0040bcea:
  uVar1 = __fprintf_chk(param_1,1,uVar3,uVar7,local_50,local_58,uVar6,uVar5,uVar4,uVar1,local_48);
  return uVar1;
}


void FUN_0040bfd0(void)

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
  FUN_0040bbf0();
  return;
}


void FUN_0040bff0(void)

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
  FUN_0040bbf0();
  return;
}


void FUN_0040c050(void)

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
  FUN_0040bbf0();
  return;
}


void FUN_0040c110(void)

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


void FUN_0040c190(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_0040c3e0();
  }
  return;
}


void FUN_0040c1b0(ulong param_1,ulong param_2)

{
  if ((-1 < SUB168(ZEXT816(param_1) * ZEXT816(param_2),0)) &&
     (SUB168(ZEXT816(param_1) * ZEXT816(param_2) >> 0x40,0) == 0)) {
    FUN_0040c190();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0040c3e0();
}


void thunk_FUN_0040c190(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_0040c3e0();
  }
  return;
}


void * FUN_0040c1f0(void *param_1,size_t param_2)

{
  void *pvVar1;
  
  if ((param_2 == 0) && (param_1 != (void *)0x0)) {
    free(param_1);
    return (void *)0x0;
  }
  pvVar1 = realloc(param_1,param_2);
  if ((pvVar1 == (void *)0x0) && (param_2 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_0040c3e0();
  }
  return pvVar1;
}


void FUN_0040c230(undefined param_1,ulong param_2,ulong param_3)

{
  if ((-1 < SUB168(ZEXT816(param_2) * ZEXT816(param_3),0)) &&
     (SUB168(ZEXT816(param_2) * ZEXT816(param_3) >> 0x40,0) == 0)) {
    FUN_0040c1f0();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0040c3e0();
}


void FUN_0040c260(long param_1,ulong *param_2,ulong param_3)

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
    if ((SUB168(ZEXT816(uVar2) * ZEXT816(param_3),0) < 0) || (uVar3 != 0)) goto LAB_0040c2bb;
  }
  else {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x5555555555555554);
    uVar3 = SUB168(auVar1 % ZEXT816(param_3),0);
    if (SUB168(auVar1 / ZEXT816(param_3),0) <= uVar2) {
LAB_0040c2bb:
                    /* WARNING: Subroutine does not return */
      FUN_0040c3e0(param_1,param_2,uVar3);
    }
    uVar2 = (uVar2 >> 1) + 1 + uVar2;
  }
  *param_2 = uVar2;
  FUN_0040c1f0(param_1,uVar2 * param_3);
  return;
}


void FUN_0040c2f0(long param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (param_1 == 0) {
    if (uVar1 == 0) {
      *param_2 = 0x80;
      FUN_0040c1f0(0,0x80);
      return;
    }
    if ((long)uVar1 < 0) goto LAB_0040c33a;
  }
  else {
    if (0x5555555555555553 < uVar1) {
LAB_0040c33a:
                    /* WARNING: Subroutine does not return */
      FUN_0040c3e0();
    }
    uVar1 = (uVar1 >> 1) + 1 + uVar1;
  }
  *param_2 = uVar1;
  FUN_0040c1f0(param_1,uVar1);
  return;
}


void FUN_0040c340(size_t param_1)

{
  void *__s;
  
  __s = (void *)FUN_0040c190();
  memset(__s,0,param_1);
  return;
}


void FUN_0040c360(size_t param_1,ulong param_2)

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
  FUN_0040c3e0();
}


void FUN_0040c390(void *param_1,size_t param_2)

{
  void *__dest;
  
  __dest = (void *)FUN_0040c190(param_2);
  memcpy(__dest,param_1,param_2);
  return;
}


void FUN_0040c3c0(char *param_1)

{
  void *__dest;
  size_t sVar1;
  
  sVar1 = strlen(param_1);
  __dest = (void *)FUN_0040c190(sVar1 + 1);
  memcpy(__dest,param_1,sVar1 + 1);
  return;
}


void FUN_0040c3e0(void)

{
  undefined uVar1;
  
  uVar1 = dcgettext(0,"memory exhausted",5);
  error(DAT_0061b280,0,&DAT_004144ac,uVar1);
                    /* WARNING: Subroutine does not return */
  abort();
}


int FUN_0040c420(FILE *param_1)

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
      if (_Var4 == -1) goto LAB_0040c487;
    }
    iVar1 = FUN_0040c4a0(param_1);
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
LAB_0040c487:
  iVar1 = fclose(param_1);
  return iVar1;
}


void FUN_0040c4a0(FILE *param_1)

{
  int iVar1;
  
  if (param_1 != (FILE *)0x0) {
    iVar1 = __freading();
    if ((iVar1 != 0) && ((param_1->_flags & 0x100U) != 0)) {
      FUN_0040c4e0(param_1,0,1);
      fflush(param_1);
      return;
    }
  }
  fflush(param_1);
  return;
}


ulong FUN_0040c4e0(FILE *param_1,__off_t param_2,int param_3)

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


void FUN_0040c540(long param_1,int *param_2)

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
      if (iVar3 <= iVar8) goto LAB_0040c5bc;
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
      if (iVar9 <= iVar3) goto LAB_0040c5bc;
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
LAB_0040c5bc:
  param_2[0xc] = iVar2;
  param_2[0xb] = iVar1 + (iVar2 - iVar3);
  return;
}


int FUN_0040c620(int param_1,undefined *param_2,char *param_3,char **param_4,undefined *param_5,
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
      if ((iVar5 == 0) && (sVar7 = strlen(__s1_00), sVar7 == sVar15)) goto LAB_0040c840;
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
            if (local_70 == (char *)0x0) goto LAB_0040c780;
          }
          else if (local_70 == (char *)0x0) {
            local_70 = (char *)calloc((long)iVar5,1);
            if (local_70 == (char *)0x0) {
              bVar3 = true;
              goto LAB_0040c780;
            }
            bVar4 = true;
            local_70[(int)local_44] = '\x01';
          }
          local_70[lVar16] = '\x01';
        }
      }
LAB_0040c780:
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
              __fprintf_chk(__stream,1,&DAT_00417971,param_9,*param_4);
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
LAB_0040c840:
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


uint FUN_0040cc40(uint param_1,undefined *param_2,char *param_3,long param_4,undefined param_5,
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
LAB_0040cc8a:
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
          goto LAB_0040cd8d;
        }
        pbVar8 = *(byte **)(param_7 + 8);
      }
      param_7[10] = 0;
    }
LAB_0040cd8d:
    param_7[6] = 1;
    cVar2 = *param_3;
LAB_0040cd98:
    if (cVar2 == ':') {
      uVar3 = 0;
    }
    if (pbVar8 == (byte *)0x0) goto LAB_0040cd08;
LAB_0040cdac:
    if (*pbVar8 == 0) goto LAB_0040cd08;
  }
  else {
    if (param_7[6] == 0) goto LAB_0040cc8a;
    cVar2 = *param_3;
    pbVar8 = *(byte **)(param_7 + 8);
    if ((cVar2 - 0x2bU & 0xfd) != 0) goto LAB_0040cd98;
    pcVar4 = param_3 + 1;
    param_3 = param_3 + 1;
    if (*pcVar4 == ':') {
      uVar3 = 0;
    }
    if (pbVar8 != (byte *)0x0) goto LAB_0040cdac;
LAB_0040cd08:
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
        FUN_0040c540(param_2,param_7);
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
LAB_0040ce76:
      if (uVar11 != param_1) {
        *param_7 = uVar11;
      }
      return 0xffffffff;
    }
    lVar6 = 3;
    pbVar8 = (byte *)param_2[(int)uVar11];
    pbVar9 = pbVar8;
    pbVar10 = &DAT_00414a39;
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
          FUN_0040c540(param_2,param_7);
          uVar11 = param_7[0xb];
        }
      }
      param_7[0xc] = param_1;
      *param_7 = param_1;
      goto LAB_0040ce76;
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
        puVar15 = &DAT_00414a39;
        goto LAB_0040cfd5;
      }
      if ((int)param_6 != 0) {
        if (pbVar8[2] == 0) {
          pcVar4 = strchr(param_3,(int)(char)bVar14);
          param_6 = param_6 & 0xffffffff;
          if (pcVar4 != (char *)0x0) goto LAB_0040cf80;
        }
        *(byte **)(param_7 + 8) = pbVar8 + 1;
        uVar11 = FUN_0040c620(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar3,
                              &DAT_00414a3a);
        if (uVar11 != 0xffffffff) {
          return uVar11;
        }
        pbVar8 = (byte *)param_2[(int)*param_7];
      }
    }
LAB_0040cf80:
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
  puVar15 = &DAT_004179a5;
LAB_0040cfd5:
  uVar3 = FUN_0040c620(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar3,puVar15);
  return uVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040d210(void)

{
  DAT_0061b4a0 = DAT_0061b2fc;
  _DAT_0061b4a4 = DAT_0061b2f8;
  FUN_0040cc40();
  DAT_0061b2fc = DAT_0061b4a0;
  DAT_0061b4f0 = DAT_0061b4b0;
  _DAT_0061b2f4 = DAT_0061b4a8;
  return;
}


void FUN_0040d270(void)

{
  FUN_0040d210();
  return;
}


void FUN_0040d290(void)

{
  FUN_0040d210();
  return;
}


void FUN_0040d2b0(void)

{
  FUN_0040cc40();
  return;
}


void FUN_0040d2d0(void)

{
  FUN_0040d210();
  return;
}


void FUN_0040d2f0(void)

{
  FUN_0040cc40();
  return;
}


size_t FUN_0040d310(wchar_t *param_1,byte *param_2,size_t param_3,mbstate_t *param_4)

{
  char cVar1;
  size_t sVar2;
  wchar_t local_1c;
  
  if (param_2 == (byte *)0x0) {
    param_3 = 1;
    param_2 = (byte *)0x4179a4;
  }
  else {
    if (param_3 == 0) {
      return 0xfffffffffffffffe;
    }
    if (param_1 != (wchar_t *)0x0) goto LAB_0040d334;
  }
  param_1 = &local_1c;
LAB_0040d334:
  sVar2 = mbrtowc(param_1,(char *)param_2,param_3,param_4);
  if ((0xfffffffffffffffd < sVar2) && (cVar1 = FUN_0040e130(0), cVar1 == '\0')) {
    sVar2 = 1;
    *param_1 = (uint)*param_2;
  }
  return sVar2;
}


long FUN_0040d390(ulong param_1,long param_2,int param_3,int param_4,int param_5,uint param_6,
                 int param_7,int param_8,int param_9,int param_10)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = ((int)((long)param_1 >> 2) + 0x1db) - (uint)((param_1 & 3) == 0);
  iVar4 = ((int)((long)(int)param_6 >> 2) + 0x1db) - (uint)((param_6 & 3) == 0);
  iVar2 = iVar3 / 0x19 + (iVar3 % 0x19 >> 0x1f);
  iVar1 = iVar4 / 0x19 + (iVar4 % 0x19 >> 0x1f);
  return ((long)param_5 +
         (((long)param_4 +
          (((long)param_3 +
           (((param_2 + (param_1 - (long)(int)param_6) * 0x16d) - (long)param_7) +
           (long)(((iVar2 >> 2) - (iVar1 >> 2)) + ((iVar3 - iVar4) - (iVar2 - iVar1)))) * 0x18) -
          (long)param_8) * 0x3c) - (long)param_9) * 0x3c) - (long)param_10;
}


long FUN_0040d4b0(void)

{
  long lVar1;
  long in_R9;
  long param_7;
  
  if (param_7 != 0) {
    lVar1 = FUN_0040d390();
    if (!SCARRY8(lVar1,in_R9)) {
      return lVar1 + in_R9;
    }
  }
  if (-1 < in_R9) {
    lVar1 = 0x7fffffffffffffff;
    if (0x7ffffffffffffffd < in_R9) {
      lVar1 = in_R9 + -1;
    }
    return lVar1;
  }
  if (in_R9 < -0x7ffffffffffffffe) {
    return in_R9 + 1;
  }
  return -0x8000000000000000;
}


void FUN_0040d550(code *param_1,long *param_2,undefined param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long local_30;
  
  local_30 = *param_2;
  lVar2 = (*param_1)(&local_30,param_3);
  if (lVar2 == 0) {
    lVar1 = 0;
    lVar5 = *param_2;
    if (*param_2 != 0) {
      while ((lVar4 = lVar1,
             lVar3 = (ulong)(((uint)lVar4 | (uint)lVar5) & 1) + (lVar5 >> 1) + (lVar4 >> 1),
             lVar4 == lVar3 || (lVar5 == lVar3))) {
        local_30 = lVar3;
        lVar2 = (*param_1)(&local_30,param_3);
        lVar1 = lVar3;
        if (lVar2 == 0) {
          lVar1 = lVar4;
          lVar5 = lVar3;
        }
      }
      if ((lVar2 == 0) && (lVar4 != 0)) {
        local_30 = lVar4;
        (*param_1)(&local_30,param_3);
        return;
      }
    }
  }
  return;
}


long FUN_0040d610(int *param_1,code *param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  undefined uVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  int iVar13;
  long lVar14;
  int iVar15;
  int iVar16;
  long lVar17;
  long lVar18;
  bool bVar19;
  int local_e0;
  long local_c8;
  long local_c0;
  int local_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  int local_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  int local_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  undefined local_88;
  long local_78 [4];
  int local_58;
  
  iVar1 = *param_1;
  iVar2 = param_1[1];
  iVar3 = param_1[2];
  iVar4 = param_1[8];
  uVar11 = 0;
  iVar15 = param_1[4] % 0xc;
  uVar5 = iVar15 >> 0x1f;
  uVar12 = (long)(int)(param_1[4] / 0xc + uVar5) + (long)param_1[5];
  if ((uVar12 & 3) == 0) {
    uVar11 = 1;
    if (uVar12 == ((long)uVar12 / 100) * 100) {
      uVar11 = (uint)(((uint)((long)uVar12 / 100) & 3) == 1);
    }
  }
  iVar13 = 6;
  lVar14 = (long)param_1[3] +
           (long)(int)(*(ushort *)
                        (&DAT_004179c0 +
                        ((long)(int)(iVar15 + (uVar5 & 0xc)) + (long)(int)uVar11 * 0xd) * 2) - 1);
  iVar15 = 0x3b;
  if (iVar1 < 0x3c) {
    iVar15 = iVar1;
  }
  iVar6 = 0;
  if (-1 < iVar15) {
    iVar6 = iVar15;
  }
  local_e0 = (int)*param_3;
  lVar7 = FUN_0040d390(uVar12,lVar14,iVar3,iVar2,iVar6,0x46,0,0,0,-local_e0);
  bVar19 = false;
  lVar17 = lVar7;
  lVar18 = lVar7;
  local_c8 = lVar7;
  while( true ) {
    uVar8 = FUN_0040d550(param_2,&local_c8,&local_b8);
    lVar10 = local_c8;
    lVar9 = FUN_0040d4b0(uVar12,lVar14,iVar3,iVar2,iVar6,local_c8,uVar8);
    if (lVar10 == lVar9) break;
    if ((lVar10 == lVar17) && (lVar10 != lVar18)) {
      if (local_98 < 0) goto LAB_0040d820;
      if (iVar4 < 0) {
        if (bVar19 <= (local_98 != 0)) goto LAB_0040d820;
      }
      else if ((iVar4 != 0) != (local_98 != 0)) goto LAB_0040d820;
    }
    iVar13 = iVar13 + -1;
    if (iVar13 == 0) goto LAB_0040d8d0;
    bVar19 = local_98 != 0;
    lVar17 = lVar18;
    lVar18 = lVar10;
    local_c8 = lVar9;
  }
  lVar10 = lVar9;
  if ((((iVar4 == 0) != (local_98 == 0)) && (-1 < iVar4)) && (-1 < local_98)) {
    iVar15 = 0x92c70;
    do {
      iVar16 = 2;
      iVar13 = -iVar15;
      bVar19 = SCARRY8((long)iVar13,lVar10);
      local_c0 = iVar13 + lVar10;
      while( true ) {
        if (!bVar19) {
          uVar8 = 0x40d9d5;
          FUN_0040d550(param_2,&local_c0,local_78);
          if (((iVar4 == 0) == (local_58 == 0)) || (lVar10 = local_c8, local_58 < 0)) {
            local_c8 = FUN_0040d4b0(uVar12,lVar14,iVar3,iVar2,iVar6,local_c0,local_78);
            FUN_0040d550(param_2,&local_c8,&local_b8,uVar8);
            lVar10 = local_c8;
            goto LAB_0040d820;
          }
        }
        iVar13 = iVar13 + iVar15 * 2;
        if (iVar16 == 1) break;
        iVar16 = 1;
        bVar19 = SCARRY8((long)iVar13,lVar10);
        local_c0 = iVar13 + lVar10;
      }
      iVar15 = iVar15 + 0x92c70;
    } while (iVar15 != 0x100dc400);
  }
LAB_0040d820:
  *param_3 = lVar10 - (-local_e0 + lVar7);
  local_c8 = lVar10;
  if ((local_b8 == iVar1) ||
     ((lVar14 = (long)iVar1 + ((ulong)(iVar1 < 1 && local_b8 == 0x3c) - (long)iVar6),
      local_c8 = lVar10 + lVar14, !SCARRY8(lVar10,lVar14) &&
      (local_78[0] = local_c8, lVar14 = (*param_2)(local_78,&local_b8), lVar14 != 0)))) {
    *param_1 = local_b8;
    param_1[1] = iStack_b4;
    param_1[2] = iStack_b0;
    param_1[3] = iStack_ac;
    param_1[4] = local_a8;
    param_1[5] = iStack_a4;
    param_1[6] = iStack_a0;
    param_1[7] = iStack_9c;
    param_1[8] = local_98;
    param_1[9] = iStack_94;
    param_1[10] = iStack_90;
    param_1[0xb] = iStack_8c;
    *(undefined *)(param_1 + 0xc) = local_88;
  }
  else {
LAB_0040d8d0:
    local_c8 = -1;
  }
  return local_c8;
}


void FUN_0040da50(undefined param_1)

{
  tzset();
  FUN_0040d610(param_1,localtime_r,&DAT_0061b4d8);
  return;
}


bool FUN_0040da70(long param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 8) == '\0') {
    iVar1 = unsetenv("TZ");
  }
  else {
    iVar1 = setenv("TZ",(char *)(param_1 + 9),1);
  }
  if (iVar1 == 0) {
    tzset();
  }
  return iVar1 == 0;
}


void FUN_0040dac0(long *param_1)

{
  long *plVar1;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  do {
    plVar1 = (long *)*param_1;
    free(param_1);
    param_1 = plVar1;
  } while (plVar1 != (long *)0x0);
  return;
}


undefined FUN_0040daf0(undefined param_1)

{
  undefined uVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = __errno_location();
  iVar3 = *piVar2;
  uVar1 = FUN_0040da70(param_1);
  if ((char)uVar1 == '\0') {
    iVar3 = *piVar2;
  }
  FUN_0040dac0(param_1);
  *piVar2 = iVar3;
  return uVar1;
}


undefined * FUN_0040db40(char *param_1)

{
  ulong __n;
  size_t sVar1;
  undefined *puVar2;
  ulong uVar3;
  
  if (param_1 == (char *)0x0) {
    puVar2 = (undefined *)malloc(0x80);
    if (puVar2 != (undefined *)0x0) {
      *puVar2 = 0;
      *(undefined *)(puVar2 + 1) = 0;
      return puVar2;
    }
  }
  else {
    sVar1 = strlen(param_1);
    __n = sVar1 + 1;
    uVar3 = 0x76;
    if (0x75 < __n) {
      uVar3 = __n;
    }
    puVar2 = (undefined *)malloc(uVar3 + 0x11 & 0xfffffffffffffff8);
    if (puVar2 != (undefined *)0x0) {
      *puVar2 = 0;
      *(undefined *)(puVar2 + 1) = 1;
      memcpy((void *)((long)puVar2 + 9),param_1,__n);
      *(undefined *)((long)puVar2 + sVar1 + 10) = 0;
    }
  }
  return puVar2;
}


undefined FUN_0040dbd0(long *param_1,char *param_2)

{
  char *__s2;
  long *plVar1;
  int iVar2;
  size_t sVar3;
  ulong uVar4;
  int *piVar5;
  long lVar6;
  char *__s1;
  
  __s2 = *(char **)(param_2 + 0x30);
  if (__s2 == (char *)0x0) {
    return 1;
  }
  if ((__s2 < param_2) || (param_2 + 0x38 <= __s2)) {
    __s1 = (char *)((long)param_1 + 9);
    if (*__s2 == '\0') {
      __s1 = "";
    }
    else {
LAB_0040dc18:
      iVar2 = strcmp(__s1,__s2);
      if (iVar2 != 0) {
        do {
          if (*__s1 == '\0') {
            if ((char *)((long)param_1 + 9) == __s1) {
              if (*(char *)(param_1 + 1) != '\0') goto LAB_0040dc43;
              sVar3 = strlen(__s2);
              sVar3 = sVar3 + 1;
              uVar4 = 0;
            }
            else {
              sVar3 = strlen(__s2);
              sVar3 = sVar3 + 1;
              uVar4 = (long)__s1 - (long)(char *)((long)param_1 + 9);
              if (~uVar4 < sVar3) {
                piVar5 = __errno_location();
                *piVar5 = 0xc;
                return 0;
              }
            }
            if (uVar4 + sVar3 < 0x77) {
              memcpy(__s1,__s2,sVar3);
              __s1[sVar3] = '\0';
            }
            else {
              lVar6 = FUN_0040db40(__s2);
              *param_1 = lVar6;
              if (lVar6 == 0) {
                return 0;
              }
              *(undefined *)(lVar6 + 8) = 0;
              __s1 = (char *)(lVar6 + 9);
            }
            break;
          }
LAB_0040dc43:
          sVar3 = strlen(__s1);
          __s1 = __s1 + sVar3 + 1;
          if ((*__s1 != '\0') || (plVar1 = (long *)*param_1, plVar1 == (long *)0x0))
          goto LAB_0040dc18;
          __s1 = (char *)((long)plVar1 + 9);
          iVar2 = strcmp(__s1,__s2);
          param_1 = plVar1;
          if (iVar2 == 0) break;
        } while( true );
      }
    }
    *(char **)(param_2 + 0x30) = __s1;
  }
  return 1;
}


long FUN_0040dd50(long param_1)

{
  char cVar1;
  int iVar2;
  char *__s2;
  long lVar3;
  int *piVar4;
  
  __s2 = getenv("TZ");
  if (__s2 == (char *)0x0) {
    if (*(char *)(param_1 + 8) == '\0') {
      return 1;
    }
  }
  else if (*(char *)(param_1 + 8) != '\0') {
    iVar2 = strcmp((char *)(param_1 + 9),__s2);
    if (iVar2 == 0) {
      return 1;
    }
  }
  lVar3 = FUN_0040db40(__s2);
  if (lVar3 != 0) {
    cVar1 = FUN_0040da70(param_1);
    if (cVar1 == '\0') {
      piVar4 = __errno_location();
      iVar2 = *piVar4;
      if (lVar3 != 1) {
        FUN_0040dac0(lVar3);
      }
      *piVar4 = iVar2;
      return 0;
    }
  }
  return lVar3;
}


void FUN_0040de00(long param_1)

{
  if (param_1 != 1) {
    FUN_0040dac0();
    return;
  }
  return;
}


tm * FUN_0040de20(long param_1,time_t *param_2,tm *param_3)

{
  char cVar1;
  long lVar2;
  tm *ptVar3;
  
  if (param_1 == 0) {
    ptVar3 = gmtime_r(param_2,param_3);
    return ptVar3;
  }
  lVar2 = FUN_0040dd50();
  if (lVar2 != 0) {
    ptVar3 = localtime_r(param_2,param_3);
    if ((ptVar3 == (tm *)0x0) || (cVar1 = FUN_0040dbd0(param_1,param_3), cVar1 == '\0')) {
      if (lVar2 != 1) {
        FUN_0040daf0(lVar2);
      }
    }
    else if ((lVar2 == 1) || (cVar1 = FUN_0040daf0(lVar2), cVar1 != '\0')) {
      return param_3;
    }
  }
  return (tm *)0x0;
}


long FUN_0040ded0(long param_1,uint *param_2)

{
  char cVar1;
  long lVar2;
  tm *ptVar3;
  long local_60;
  tm local_58;
  
  if (param_1 == 0) {
    lVar2 = FUN_0040dff0(param_2);
    return lVar2;
  }
  lVar2 = FUN_0040dd50();
  if (lVar2 != 0) {
    local_60 = FUN_0040da50(param_2);
    if (((local_60 != -1) ||
        (((ptVar3 = localtime_r(&local_60,&local_58), ptVar3 != (tm *)0x0 &&
          ((((param_2[8] == 0) == (local_58.tm_isdst == 0) || ((int)param_2[8] < 0)) ||
           (local_58.tm_isdst < 0)))) &&
         ((param_2[4] ^ local_58.tm_mon | param_2[5] ^ local_58.tm_year |
           param_2[3] ^ local_58.tm_mday | param_2[2] ^ local_58.tm_hour |
           param_2[1] ^ local_58.tm_min | *param_2 ^ local_58.tm_sec) == 0)))) &&
       (cVar1 = FUN_0040dbd0(param_1,param_2), cVar1 == '\0')) {
      local_60 = -1;
    }
    if (lVar2 == 1) {
      return local_60;
    }
    cVar1 = FUN_0040daf0(lVar2);
    if (cVar1 != '\0') {
      return local_60;
    }
  }
  return -1;
}


void FUN_0040dff0(long param_1)

{
  *(undefined *)(param_1 + 0x20) = 0;
  FUN_0040d610(param_1,gmtime_r,&DAT_0061b4e0);
  return;
}


ulong FUN_0040e010(FILE *param_1,undefined param_2,undefined param_3)

{
  int iVar1;
  undefined *__ptr;
  size_t sVar2;
  int *piVar3;
  size_t sVar4;
  size_t local_800;
  undefined local_7f8 [2008];
  
  local_800 = 2000;
  __ptr = (undefined *)FUN_0040ffa0(local_7f8,&local_800,param_2,param_3);
  sVar4 = local_800;
  if (__ptr != (undefined *)0x0) {
    sVar2 = fwrite(__ptr,1,local_800,param_1);
    if (sVar2 < sVar4) {
      sVar4 = 0xffffffff;
      if (__ptr != local_7f8) {
        piVar3 = __errno_location();
        iVar1 = *piVar3;
        free(__ptr);
        *piVar3 = iVar1;
      }
      goto LAB_0040e07c;
    }
    if (__ptr != local_7f8) {
      free(__ptr);
    }
    if (sVar4 < 0x80000000) goto LAB_0040e07c;
    piVar3 = __errno_location();
    *piVar3 = 0x4b;
  }
  sVar4 = 0xffffffff;
  FUN_0040ff90(param_1);
LAB_0040e07c:
  return sVar4 & 0xffffffff;
}


ulong FUN_0040e0d0(uint *param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  
  lVar2 = __fpending();
  uVar1 = *param_1;
  uVar3 = FUN_0040c420(param_1);
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


bool FUN_0040e130(int param_1)

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
    pbVar5 = &DAT_00414e36;
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

char * FUN_0040e190(void)

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
  if (DAT_0061b4e8 != (char *)0x0) goto LAB_0040e1ca;
  pcVar7 = getenv("CHARSETALIASDIR");
  if ((pcVar7 == (char *)0x0) || (*pcVar7 == '\0')) {
    sVar6 = 0x73;
    sVar5 = 0x65;
    __n = 100;
    pcVar7 = 
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib"
    ;
LAB_0040e2b5:
    __file = (char *)malloc(sVar6);
    if (__file != (char *)0x0) {
      memcpy(__file,pcVar7,__n);
      __file[__n] = '/';
      goto LAB_0040e2d6;
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
        goto LAB_0040e2b5;
      }
      sVar6 = __n + 0xe;
    }
    __file = (char *)malloc(sVar6);
    if (__file != (char *)0x0) {
      memcpy(__file,pcVar7,__n);
      sVar5 = __n;
LAB_0040e2d6:
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
LAB_0040e370:
          pbVar8 = (byte *)__stream->_IO_read_ptr;
          if (__stream->_IO_read_end <= pbVar8) goto LAB_0040e4fc;
          do {
            __stream->_IO_read_ptr = (char *)(pbVar8 + 1);
            uVar4 = (uint)*pbVar8;
            __ptr = pcVar7;
            while( true ) {
              pcVar7 = __ptr;
              if ((uVar4 - 9 < 2) || (uVar4 == 0x20)) goto LAB_0040e370;
              if (uVar4 == 0x23) goto LAB_0040e561;
              ungetc(uVar4,__stream);
              iVar2 = fscanf(__stream,"%50s %50s",&local_b8,&local_78);
              puVar13 = &local_b8;
              if (iVar2 < 2) goto LAB_0040e50f;
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
                FUN_0040c420(__stream);
                goto LAB_0040e314;
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
LAB_0040e4fc:
              uVar4 = __uflow(__stream);
              __ptr = pcVar7;
              if (uVar4 == 0xffffffff) goto LAB_0040e50f;
            }
          } while( true );
        }
        close(iVar2);
      }
      goto LAB_0040e30e;
    }
  }
  DAT_0061b4e8 = "";
LAB_0040e1ca:
  cVar1 = *DAT_0061b4e8;
  pcVar7 = DAT_0061b4e8;
  do {
    if (cVar1 == '\0') {
LAB_0040e224:
      if (*__s1 == '\0') {
        __s1 = "ASCII";
      }
      return __s1;
    }
    iVar2 = strcmp(__s1,pcVar7);
    if ((iVar2 == 0) || ((cVar1 == '*' && (pcVar7[1] == '\0')))) {
      sVar6 = strlen(pcVar7);
      __s1 = pcVar7 + sVar6 + 1;
      goto LAB_0040e224;
    }
    sVar6 = strlen(pcVar7);
    sVar5 = strlen(pcVar7 + sVar6 + 1);
    pcVar7 = pcVar7 + sVar6 + 1 + sVar5 + 1;
    cVar1 = *pcVar7;
  } while( true );
LAB_0040e561:
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
  if (uVar4 == 0xffffffff) goto LAB_0040e50f;
  goto LAB_0040e370;
LAB_0040e50f:
  FUN_0040c420(__stream);
  if (local_d0 == 0) {
LAB_0040e30e:
    pcVar7 = "";
  }
  else {
    pcVar7[local_d0] = '\0';
  }
LAB_0040e314:
  free(__file);
  DAT_0061b4e8 = pcVar7;
  goto LAB_0040e1ca;
}


long FUN_0040e700(long param_1,long param_2,long param_3)

{
  __int32_t **pp_Var1;
  
  if (param_3 != 0) {
    param_3 = param_3 + -1;
    pp_Var1 = __ctype_tolower_loc();
    do {
      *(char *)(param_1 + param_3) = (char)(*pp_Var1)[*(byte *)(param_2 + param_3)];
      param_3 = param_3 + -1;
    } while (param_3 != -1);
  }
  return param_1;
}


long FUN_0040e750(long param_1,long param_2,long param_3)

{
  __int32_t **pp_Var1;
  
  if (param_3 != 0) {
    param_3 = param_3 + -1;
    pp_Var1 = __ctype_toupper_loc();
    do {
      *(char *)(param_1 + param_3) = (char)(*pp_Var1)[*(byte *)(param_2 + param_3)];
      param_3 = param_3 + -1;
    } while (param_3 != -1);
  }
  return param_1;
}


/* WARNING: Type propagation algorithm not settling */

long FUN_0040e7a0(char *param_1,long param_2,char *param_3,tm *param_4,char param_5,
                 undefined param_6,undefined param_7,uint param_8)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  long lVar10;
  char *pcVar11;
  ulong uVar12;
  char cVar13;
  ulong __n;
  uint uVar14;
  int iVar15;
  char *pcVar16;
  size_t sVar17;
  ulong uVar18;
  size_t sVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  char cVar24;
  uint uVar25;
  uint uVar26;
  char *__s;
  char *pcVar27;
  char cVar28;
  ulong uVar29;
  long lVar30;
  long lVar31;
  bool bVar32;
  char *local_498;
  char *local_488;
  uint local_480;
  uint local_478;
  undefined local_458;
  char local_456;
  char local_455 [19];
  char local_442 [10];
  undefined local_438;
  undefined uStack_430;
  undefined local_428;
  undefined uStack_420;
  undefined local_418;
  long lStack_410;
  char *local_408;
  
  __s = param_4->tm_zone;
  uVar25 = param_4->tm_hour;
  if (__s == (char *)0x0) {
    __s = "";
  }
  if ((int)uVar25 < 0xd) {
    if (uVar25 == 0) {
      uVar25 = 0xc;
    }
  }
  else {
    uVar25 = uVar25 - 0xc;
  }
  cVar5 = *param_3;
  lVar31 = 0;
  if (cVar5 == '\0') {
LAB_0040e83b:
    if ((param_1 != (char *)0x0) && (param_2 != 0)) {
      *param_1 = '\0';
    }
    return lVar31;
  }
LAB_0040e80a:
  if (cVar5 == '%') {
    cVar5 = '\0';
    cVar24 = param_5;
    uVar6 = 0;
    do {
      uVar26 = uVar6;
      param_3 = param_3 + 1;
      cVar13 = *param_3;
      cVar28 = cVar13 + -0x30;
      bVar32 = cVar13 == '0';
      while (uVar6 = (uint)cVar13, !bVar32) {
        if (!bVar32 && SBORROW1(cVar13,'0') == cVar28 < '\0') {
          if (cVar13 == '^') {
            cVar24 = '\x01';
            uVar6 = uVar26;
          }
          else if (cVar13 != '_') {
            uVar20 = 0xffffffff;
            if (9 < uVar6 - 0x30) goto LAB_0040e8e8;
LAB_0040e931:
            uVar20 = 0;
            pcVar9 = param_3;
            goto LAB_0040e933;
          }
          break;
        }
        if (cVar13 != '#') {
          if (cVar13 != '-') {
            uVar20 = 0xffffffff;
            if (uVar6 - 0x30 < 10) goto LAB_0040e931;
            goto LAB_0040e8e8;
          }
          break;
        }
        param_3 = param_3 + 1;
        cVar13 = *param_3;
        cVar5 = '\x01';
        cVar28 = cVar13 + -0x30;
        bVar32 = cVar28 == '\0';
      }
    } while( true );
  }
  if ((ulong)(param_2 - lVar31) < 2) {
    return 0;
  }
  if (param_1 != (char *)0x0) {
    *param_1 = cVar5;
    param_1 = param_1 + 1;
  }
  lVar31 = lVar31 + 1;
  pcVar9 = param_3;
  goto LAB_0040e82e;
LAB_0040e933:
  do {
    uVar6 = (uint)pcVar9[1];
    param_3 = pcVar9 + 1;
    uVar14 = uVar6 - 0x30;
    if ((int)uVar20 < 0xccccccd) {
      if ((uVar20 == 0xccccccc) && ('7' < *pcVar9)) goto LAB_0040e97e;
      uVar20 = *pcVar9 + -0x30 + uVar20 * 10;
    }
    else {
LAB_0040e97e:
      if (9 < uVar14) {
        uVar20 = 0x7fffffff;
        break;
      }
      uVar6 = (uint)pcVar9[2];
      uVar20 = 0x7fffffff;
      param_3 = pcVar9 + 2;
      uVar14 = uVar6 - 0x30;
    }
    pcVar9 = param_3;
  } while (uVar14 < 10);
LAB_0040e8e8:
  if (((char)uVar6 == 'E') || ((char)uVar6 == 'O')) {
    uVar8 = (uint)(byte)param_3[1];
    param_3 = param_3 + 1;
    uVar14 = uVar6;
  }
  else {
    uVar14 = 0;
    uVar8 = uVar6;
  }
  cVar13 = (char)uVar8;
  pcVar11 = &local_456;
  pcVar9 = param_3;
  uVar6 = uVar25;
  local_478 = uVar20;
  switch(uVar8 & 0xff) {
  case 0:
    cVar5 = param_3[-1];
    param_3 = param_3 + -1;
LAB_0040f777:
    uVar18 = param_2 - lVar31;
    uVar6 = 0;
    if (-1 < (int)uVar20) {
      uVar6 = uVar20;
    }
    uVar12 = (ulong)(int)uVar6;
    if (cVar5 != '%') break;
    __n = 1;
    pcVar9 = param_3;
    uVar29 = 1;
    if (uVar12 != 0) {
      uVar29 = uVar12;
    }
    goto LAB_0040f623;
  case 0x25:
    uVar18 = param_2 - lVar31;
    uVar6 = 0;
    if (-1 < (int)uVar20) {
      uVar6 = uVar20;
    }
    uVar12 = (ulong)(int)uVar6;
    uVar29 = 1;
    if (uVar12 != 0) {
      uVar29 = uVar12;
    }
    if (uVar14 != 0) {
      __n = 1;
      goto LAB_0040f623;
    }
    if (uVar18 <= uVar29) {
      return 0;
    }
    if (param_1 != (char *)0x0) {
      pcVar11 = param_1;
      if (1 < (int)uVar20) {
        sVar19 = (long)(int)uVar20 - 1;
        pcVar11 = param_1 + sVar19;
        if (uVar26 == 0x30) {
          memset(param_1,0x30,sVar19);
          cVar13 = *param_3;
        }
        else {
          memset(param_1,0x20,sVar19);
          cVar13 = *param_3;
        }
      }
      *pcVar11 = cVar13;
      param_1 = pcVar11 + 1;
    }
    goto LAB_0040f1c6;
  case 0x3a:
    pcVar9 = param_3 + 1;
    lVar30 = 1;
    cVar5 = param_3[1];
    while (cVar5 == ':') {
      lVar30 = lVar30 + 1;
      pcVar9 = param_3 + lVar30;
      cVar5 = param_3[lVar30];
    }
    if (cVar5 == 'z') goto LAB_0040f6c0;
    break;
  case 0x41:
  case 0x42:
  case 0x61:
    if (uVar14 != 0) break;
    if (cVar5 != '\0') {
      cVar24 = cVar5;
    }
LAB_0040e9c0:
    cVar28 = '\0';
    uVar14 = 0;
    goto LAB_0040e9e0;
  case 0x43:
    if (uVar14 != 0x45) {
      bVar4 = false;
      local_478 = 2;
      iVar15 = param_4->tm_year;
      iVar23 = iVar15 / 100 + 0x13;
      bVar32 = iVar15 < -0x76c;
      uVar6 = iVar23 - ((uint)(0 < iVar23) & (uint)(iVar15 % 100) >> 0x1f);
      uVar22 = 0;
      goto LAB_0040ef3f;
    }
LAB_0040fbbc:
    uVar8 = 0;
    goto LAB_0040ef52;
  case 0x44:
    if (uVar14 == 0) {
      local_498 = "%m/%d/%y";
      goto LAB_0040ecb9;
    }
    break;
  case 0x46:
    if (uVar14 == 0) {
      local_498 = "%Y-%m-%d";
      goto LAB_0040ecb9;
    }
    break;
  case 0x47:
  case 0x56:
  case 0x67:
    if (uVar14 != 0x45) {
      iVar15 = param_4->tm_year;
      iVar1 = param_4->tm_yday;
      iVar21 = param_4->tm_wday;
      uVar6 = iVar15 + -100 + (iVar15 >> 0x1f & 400U);
      iVar23 = (iVar1 - iVar21) + 0x17e;
      iVar23 = (iVar1 - iVar23) + 3 + (iVar23 / 7) * 7;
      if (iVar23 < 0) {
        uVar6 = uVar6 - 1;
        iVar23 = 0x16d;
        if (((uVar6 & 3) == 0) && (iVar23 = 0x16e, uVar6 == ((int)uVar6 / 100) * 100)) {
          iVar23 = ~-(uint)((int)uVar6 % 400 == 0) + 0x16e;
        }
        iVar7 = -1;
        iVar21 = ((iVar1 + iVar23) - iVar21) + 0x17e;
        iVar23 = ((iVar1 + iVar23) - iVar21) + 3 + (iVar21 / 7) * 7;
      }
      else {
        iVar7 = 0x16d;
        if (((uVar6 & 3) == 0) && (iVar7 = 0x16e, uVar6 == ((int)uVar6 / 100) * 100)) {
          iVar7 = (uVar6 == ((int)uVar6 / 400) * 400) + 0x16d;
        }
        iVar21 = ((iVar1 - iVar7) - iVar21) + 0x17e;
        iVar1 = ((iVar1 - iVar7) - iVar21) + 3 + (iVar21 / 7) * 7;
        if (-1 < iVar1) {
          iVar23 = iVar1;
        }
        iVar7 = (iVar1 >> 0x1f) + 1;
      }
      if (cVar13 == 'G') {
        bVar4 = false;
        local_478 = 4;
        uVar6 = iVar15 + 0x76c + iVar7;
        bVar32 = iVar15 < -0x76c - iVar7;
        uVar22 = 0;
        goto LAB_0040ef3f;
      }
      if (cVar13 == 'g') {
        local_478 = 2;
        uVar8 = (iVar15 % 100 + iVar7) % 100;
        uVar6 = uVar8;
        if ((int)uVar8 < 0) {
          uVar6 = uVar8 + 100;
          if (iVar15 < -0x76c - iVar7) {
            uVar6 = -uVar8;
          }
        }
      }
      else {
        uVar6 = iVar23 / 7 + 1;
        local_478 = 2;
      }
      goto LAB_0040ef30;
    }
    break;
  case 0x48:
    if (uVar14 != 0x45) {
      uVar6 = param_4->tm_hour;
      local_478 = 2;
      goto LAB_0040ef30;
    }
    break;
  case 0x49:
    if (uVar14 != 0x45) {
      local_478 = 2;
      goto LAB_0040ef30;
    }
    break;
  case 0x4d:
    if (uVar14 != 0x45) {
      uVar6 = param_4->tm_min;
      local_478 = 2;
      goto LAB_0040ef30;
    }
    break;
  case 0x4e:
    if (uVar14 != 0x45) {
      uVar6 = param_8;
      if (uVar20 == 0xffffffff) {
        uVar20 = 9;
        local_478 = 9;
      }
      else {
        uVar8 = param_8;
        uVar22 = uVar20;
        if ((int)uVar20 < 9) {
          do {
            uVar22 = uVar22 + 1;
            uVar6 = (int)uVar8 / 10;
            uVar8 = (int)uVar8 / 10;
          } while (uVar22 != 9);
        }
      }
      goto LAB_0040ef30;
    }
    break;
  case 0x50:
    cVar28 = '\x01';
    goto LAB_0040f0d5;
  case 0x52:
    local_498 = "%H:%M";
    goto LAB_0040ecb9;
  case 0x53:
    if (uVar14 != 0x45) {
      uVar6 = param_4->tm_sec;
      local_478 = 2;
      goto LAB_0040ef30;
    }
    break;
  case 0x54:
    local_498 = "%H:%M:%S";
LAB_0040ecb9:
    uVar29 = FUN_0040e7a0(0,0xffffffffffffffff,local_498,param_4,cVar24,param_6,param_7,param_8);
    uVar6 = 0;
    if (-1 < (int)uVar20) {
      uVar6 = uVar20;
    }
    uVar12 = (ulong)(int)uVar6;
    uVar18 = uVar12;
    if (uVar12 <= uVar29) {
      uVar18 = uVar29;
    }
    if ((ulong)(param_2 - lVar31) <= uVar18) {
      return 0;
    }
    if (param_1 != (char *)0x0) {
      pcVar11 = param_1;
      if (uVar29 < uVar12) {
        sVar19 = (long)(int)uVar20 - uVar29;
        pcVar11 = param_1 + sVar19;
        if (uVar26 == 0x30) {
          memset(param_1,0x30,sVar19);
        }
        else {
          memset(param_1,0x20,sVar19);
        }
      }
      FUN_0040e7a0(pcVar11,param_2 - lVar31,local_498,param_4,cVar24,param_6,param_7,param_8);
      param_1 = pcVar11 + uVar29;
    }
    lVar31 = lVar31 + uVar18;
    goto LAB_0040e82e;
  case 0x55:
    if (uVar14 != 0x45) {
      iVar23 = (param_4->tm_yday - param_4->tm_wday) + 7;
      iVar15 = (int)((ulong)((long)iVar23 * -0x6db6db6d) >> 0x20);
LAB_0040f4fd:
      uVar6 = (iVar15 + iVar23 >> 2) - (iVar23 >> 0x1f);
      local_478 = 2;
      goto LAB_0040ef30;
    }
    break;
  case 0x57:
    if (uVar14 != 0x45) {
      iVar23 = param_4->tm_wday + 6;
      iVar23 = ((iVar23 / 7) * 7 - iVar23) + 7 + param_4->tm_yday;
      iVar15 = (int)((ulong)((long)iVar23 * -0x6db6db6d) >> 0x20);
      goto LAB_0040f4fd;
    }
    break;
  case 0x58:
  case 99:
  case 0x78:
    if (uVar14 != 0x4f) goto switchD_0040e901_caseD_72;
    break;
  case 0x59:
    if (uVar14 == 0x45) goto LAB_0040fbbc;
    if (uVar14 == 0x4f) break;
    bVar4 = false;
    local_478 = 4;
    bVar32 = param_4->tm_year < -0x76c;
    uVar6 = param_4->tm_year + 0x76c;
    uVar22 = 0;
    goto LAB_0040f4b0;
  case 0x5a:
    if (cVar5 != '\0') {
      cVar24 = '\0';
    }
    sVar19 = strlen(__s);
    uVar6 = 0;
    if (-1 < (int)uVar20) {
      uVar6 = uVar20;
    }
    uVar18 = (ulong)(int)uVar6;
    uVar29 = uVar18;
    if (uVar18 <= sVar19) {
      uVar29 = sVar19;
    }
    if ((ulong)(param_2 - lVar31) <= uVar29) {
      return 0;
    }
    if (param_1 != (char *)0x0) {
      pcVar11 = param_1;
      if (sVar19 < uVar18) {
        sVar17 = (long)(int)uVar20 - sVar19;
        pcVar11 = param_1 + sVar17;
        if (uVar26 == 0x30) {
          memset(param_1,0x30,sVar17);
        }
        else {
          memset(param_1,0x20,sVar17);
        }
      }
      if (cVar5 == '\0') {
        if (cVar24 == '\0') {
          memcpy(pcVar11,__s,sVar19);
        }
        else {
          FUN_0040e750();
        }
      }
      else {
        FUN_0040e700();
      }
      param_1 = pcVar11 + sVar19;
    }
    lVar31 = lVar31 + uVar29;
    goto LAB_0040e82e;
  case 0x62:
  case 0x68:
    if (cVar5 != '\0') {
      cVar24 = cVar5;
    }
    if (uVar14 == 0) goto LAB_0040e9c0;
    break;
  case 100:
    if (uVar14 != 0x45) {
      uVar6 = param_4->tm_mday;
      local_478 = 2;
      goto LAB_0040ef30;
    }
    break;
  case 0x65:
    if (uVar14 != 0x45) {
      uVar6 = param_4->tm_mday;
LAB_0040f101:
      local_478 = 2;
      if ((uVar26 != 0x30) && (uVar26 != 0x2d)) {
        uVar26 = 0x5f;
      }
      goto LAB_0040ef30;
    }
    break;
  case 0x6a:
    if (uVar14 != 0x45) {
      bVar4 = false;
      local_478 = 3;
      bVar32 = param_4->tm_yday < -1;
      uVar6 = param_4->tm_yday + 1;
      uVar22 = 0;
      goto LAB_0040ef3f;
    }
    break;
  case 0x6b:
    if (uVar14 != 0x45) {
      uVar6 = param_4->tm_hour;
      goto LAB_0040f101;
    }
    break;
  case 0x6c:
    if (uVar14 != 0x45) goto LAB_0040f101;
    break;
  case 0x6d:
    if (uVar14 != 0x45) {
      bVar4 = false;
      local_478 = 2;
      bVar32 = param_4->tm_mon < -1;
      uVar6 = param_4->tm_mon + 1;
      uVar22 = 0;
      goto LAB_0040ef3f;
    }
    break;
  case 0x6e:
    uVar6 = 0;
    if (-1 < (int)uVar20) {
      uVar6 = uVar20;
    }
    uVar29 = (ulong)(int)uVar6;
    if (uVar29 == 0) {
      uVar29 = 1;
    }
    if ((ulong)(param_2 - lVar31) <= uVar29) {
      return 0;
    }
    if (param_1 != (char *)0x0) {
      pcVar11 = param_1;
      if (1 < (int)uVar20) {
        sVar19 = (long)(int)uVar20 - 1;
        pcVar11 = param_1 + sVar19;
        if (uVar26 == 0x30) {
          memset(param_1,0x30,sVar19);
        }
        else {
          memset(param_1,0x20,sVar19);
        }
      }
      *pcVar11 = '\n';
      param_1 = pcVar11 + 1;
    }
    goto LAB_0040f1c6;
  case 0x70:
    cVar28 = '\0';
LAB_0040f0d5:
    cVar13 = 'p';
    if (cVar5 != '\0') {
      cVar24 = '\0';
      cVar28 = cVar5;
    }
LAB_0040eafd:
    if (uVar14 != 0) {
      uVar8 = 0;
      goto LAB_0040ef5f;
    }
    goto LAB_0040e9e0;
  case 0x71:
    uVar8 = 1;
    local_478 = 1;
    if (uVar14 == 0x4f) goto LAB_0040ef52;
    bVar4 = false;
    bVar32 = false;
    uVar22 = 0;
    uVar6 = (param_4->tm_mon * 0xb >> 5) + 1;
    goto LAB_0040f200;
  case 0x72:
switchD_0040e901_caseD_72:
    cVar28 = '\0';
    goto LAB_0040eafd;
  case 0x73:
    pcVar9 = local_442 + 1;
    local_418 = *(undefined *)&param_4->tm_isdst;
    lStack_410 = param_4->tm_gmtoff;
    local_438 = *(undefined *)param_4;
    uStack_430 = *(undefined *)&param_4->tm_hour;
    local_428 = *(undefined *)&param_4->tm_mon;
    uStack_420 = *(undefined *)&param_4->tm_wday;
    local_408 = param_4->tm_zone;
    lVar10 = FUN_0040ded0(param_7,&local_438);
    lVar30 = lVar10;
    do {
      lVar3 = lVar30 / 10;
      cVar5 = (char)lVar30 + (char)lVar3 * -10;
      if (lVar10 < 0) {
        cVar5 = -cVar5;
      }
      pcVar9 = pcVar9 + -1;
      *pcVar9 = cVar5 + '0';
      lVar30 = lVar3;
    } while (lVar3 != 0);
    local_478 = 1;
    if (0 < (int)uVar20) {
      local_478 = uVar20;
    }
    if (lVar10 < 0) goto LAB_0040f948;
    goto LAB_0040ebed;
  case 0x74:
    uVar6 = 0;
    if (-1 < (int)uVar20) {
      uVar6 = uVar20;
    }
    uVar29 = (ulong)(int)uVar6;
    if (uVar29 == 0) {
      uVar29 = 1;
    }
    if ((ulong)(param_2 - lVar31) <= uVar29) {
      return 0;
    }
    if (param_1 != (char *)0x0) {
      pcVar11 = param_1;
      if (1 < (int)uVar20) {
        sVar19 = (long)(int)uVar20 - 1;
        pcVar11 = param_1 + sVar19;
        if (uVar26 == 0x30) {
          memset(param_1,0x30,sVar19);
        }
        else {
          memset(param_1,0x20,sVar19);
        }
      }
      *pcVar11 = '\t';
      param_1 = pcVar11 + 1;
    }
LAB_0040f1c6:
    lVar31 = lVar31 + uVar29;
    goto LAB_0040e82e;
  case 0x75:
    uVar6 = (param_4->tm_wday + 6) % 7 + 1;
    local_478 = 1;
    goto LAB_0040ef30;
  case 0x77:
    if (uVar14 != 0x45) {
      uVar6 = param_4->tm_wday;
      local_478 = 1;
      goto LAB_0040ef30;
    }
    break;
  case 0x79:
    if (uVar14 == 0x45) goto LAB_0040fbbc;
    local_478 = 2;
    uVar8 = param_4->tm_year % 100;
    uVar6 = uVar8;
    if ((int)uVar8 < 0) {
      uVar6 = uVar8 + 100;
      if (param_4->tm_year < -0x76c) {
        uVar6 = -uVar8;
      }
    }
LAB_0040ef30:
    bVar4 = false;
    uVar22 = 0;
    bVar32 = SUB41(uVar6 >> 0x1f,0);
LAB_0040ef3f:
    if (uVar14 == 0x4f) {
      uVar8 = local_478;
      if (bVar32 != false) {
LAB_0040f4b9:
        uVar6 = -uVar6;
        goto LAB_0040f200;
      }
LAB_0040ef52:
      cVar28 = '\0';
LAB_0040ef5f:
      local_456 = (char)uVar14;
      pcVar11 = local_455;
      uVar14 = uVar8;
LAB_0040e9e0:
      local_458 = 0x2520;
      *pcVar11 = cVar13;
      pcVar11[1] = '\0';
      sVar19 = strftime((char *)&local_438,0x400,(char *)&local_458,param_4);
      pcVar9 = param_3;
      if (sVar19 == 0) goto LAB_0040e82e;
      local_498 = (char *)(sVar19 - 1);
      uVar6 = 0;
      if (-1 < (int)uVar20) {
        uVar6 = uVar20;
      }
      pcVar9 = (char *)(long)(int)uVar6;
      pcVar16 = pcVar9;
      if (pcVar9 <= local_498) {
        pcVar16 = local_498;
      }
      if ((char *)(param_2 - lVar31) <= pcVar16) {
        return 0;
      }
      if (param_1 != (char *)0x0) {
        pcVar11 = param_1;
        if ((uVar14 == 0) && (local_498 < pcVar9)) {
          sVar19 = (long)(int)uVar20 - (long)local_498;
          pcVar11 = param_1 + sVar19;
          if (uVar26 == 0x30) {
            memset(param_1,0x30,sVar19);
          }
          else {
            memset(param_1,0x20,sVar19);
          }
        }
        pcVar9 = (char *)((long)&local_438 + 1);
        local_488 = param_3;
        if (cVar28 == '\0') goto LAB_0040eacb;
        FUN_0040e700();
        goto LAB_0040eae3;
      }
    }
    else {
LAB_0040f4b0:
      if (bVar32 != false) goto LAB_0040f4b9;
LAB_0040f200:
      pcVar9 = local_442 + 1;
      do {
        pcVar11 = pcVar9;
        pcVar27 = pcVar9 + -1;
        if ((uVar22 & 1) != 0) {
          pcVar9[-1] = ':';
          pcVar11 = pcVar9 + -1;
          pcVar27 = pcVar9 + -2;
        }
        pcVar9 = pcVar27;
        uVar22 = (int)uVar22 >> 1;
        uVar14 = (uint)((ulong)uVar6 / 10);
        pcVar11[-1] = (char)uVar6 + (char)((ulong)uVar6 / 10) * -10 + '0';
        bVar2 = 9 < uVar6;
        uVar6 = uVar14;
      } while ((bVar2) || (uVar22 != 0));
      if ((int)local_478 < (int)uVar20) {
        local_478 = uVar20;
      }
      if (bVar32 == false) {
        if (bVar4) {
          if (uVar26 == 0x2d) {
            cVar13 = '+';
            goto LAB_0040f95c;
          }
          cVar5 = '+';
LAB_0040f290:
          local_498 = local_442 + (1 - (long)pcVar9);
          iVar23 = (local_478 - 1) - (int)local_498;
          pcVar11 = (char *)(param_2 - lVar31);
          if (iVar23 < 1) {
            uVar6 = 0;
            if (-1 < (int)uVar20) {
              uVar6 = uVar20;
            }
            pcVar27 = (char *)(long)(int)uVar6;
            pcVar16 = (char *)0x1;
            if (pcVar27 != (char *)0x0) {
              pcVar16 = pcVar27;
            }
            if (pcVar11 <= pcVar16) {
              return 0;
            }
            if (param_1 != (char *)0x0) {
              pcVar11 = param_1;
              if ((local_478 == 0) && ((char *)0x1 < pcVar27)) {
                sVar19 = (long)(int)uVar20 - 1;
                pcVar11 = param_1 + sVar19;
                local_478 = 0;
                if (uVar26 == 0x30) {
                  memset(param_1,0x30,sVar19);
                }
                else {
                  memset(param_1,0x20,sVar19);
                }
              }
              param_1 = pcVar11 + 1;
              *pcVar11 = cVar5;
            }
            lVar31 = lVar31 + (long)pcVar16;
            pcVar11 = (char *)(param_2 - lVar31);
          }
          else {
            if (uVar26 != 0x5f) {
              if (pcVar11 <= (char *)(long)(int)local_478) {
                return 0;
              }
              uVar6 = 0;
              if (-1 < (int)uVar20) {
                uVar6 = uVar20;
              }
              pcVar16 = (char *)(long)(int)uVar6;
              pcVar27 = (char *)0x1;
              if (pcVar16 != (char *)0x0) {
                pcVar27 = pcVar16;
              }
              if (pcVar11 <= pcVar27) {
                return 0;
              }
              lVar31 = lVar31 + (long)pcVar27;
              sVar19 = (size_t)iVar23;
              if (param_1 != (char *)0x0) {
                pcVar11 = param_1;
                if ((local_478 == 0) && ((char *)0x1 < pcVar16)) {
                  sVar17 = (long)(int)uVar20 - 1;
                  pcVar11 = param_1 + sVar17;
                  local_480 = 0;
                  local_478 = local_480;
                  if (uVar26 == 0x30) {
                    memset(param_1,0x30,sVar17);
                  }
                  else {
                    memset(param_1,0x20,sVar17);
                  }
                }
                param_1 = pcVar11 + 1;
                *pcVar11 = cVar5;
                goto LAB_0040f365;
              }
              goto LAB_0040f3b0;
            }
LAB_0040fb13:
            pcVar27 = (char *)(long)iVar23;
            if (pcVar11 <= pcVar27) {
              return 0;
            }
            if (param_1 != (char *)0x0) {
              memset(param_1,0x20,(size_t)pcVar27);
              param_1 = param_1 + (long)pcVar27;
            }
            lVar31 = lVar31 + (long)pcVar27;
            uVar6 = uVar20 - iVar23;
            bVar32 = iVar23 < (int)uVar20;
            uVar20 = 0;
            if (bVar32) {
              uVar20 = uVar6;
            }
            pcVar11 = (char *)(param_2 - lVar31);
            if (cVar5 == '\0') {
              pcVar27 = (char *)(long)(int)uVar20;
              uVar26 = 0x5f;
              local_498 = local_442 + (1 - (long)pcVar9);
            }
            else {
              pcVar27 = (char *)(long)(int)uVar20;
              pcVar16 = (char *)0x1;
              if (pcVar27 != (char *)0x0) {
                pcVar16 = pcVar27;
              }
              if (pcVar11 <= pcVar16) {
                return 0;
              }
              if (param_1 != (char *)0x0) {
                pcVar11 = param_1;
                if ((local_478 == 0) && ((char *)0x1 < pcVar27)) {
                  pcVar11 = param_1 + (long)(pcVar27 + -1);
                  memset(param_1,0x20,(size_t)(pcVar27 + -1));
                  local_478 = 0;
                }
                param_1 = pcVar11 + 1;
                *pcVar11 = cVar5;
              }
              lVar31 = lVar31 + (long)pcVar16;
              uVar26 = 0x5f;
              local_498 = local_442 + (1 - (long)pcVar9);
              pcVar11 = (char *)(param_2 - lVar31);
            }
          }
        }
        else {
LAB_0040ebed:
          local_498 = local_442 + (1 - (long)pcVar9);
          pcVar11 = (char *)(param_2 - lVar31);
          if ((uVar26 == 0x2d) || (iVar23 = local_478 - (int)local_498, iVar23 < 1)) {
            uVar6 = 0;
            if (-1 < (int)uVar20) {
              uVar6 = uVar20;
            }
            pcVar27 = (char *)(long)(int)uVar6;
            goto LAB_0040ec26;
          }
          if (uVar26 == 0x5f) {
            cVar5 = '\0';
            goto LAB_0040fb13;
          }
          if (pcVar11 <= (char *)(long)(int)local_478) {
            return 0;
          }
          sVar19 = (size_t)iVar23;
LAB_0040f365:
          if (param_1 != (char *)0x0) {
            memset(param_1,0x30,sVar19);
            param_1 = param_1 + sVar19;
          }
LAB_0040f3b0:
          lVar31 = lVar31 + sVar19;
          uVar20 = 0;
          pcVar27 = (char *)0x0;
          pcVar11 = (char *)(param_2 - lVar31);
        }
      }
      else {
LAB_0040f948:
        cVar5 = '-';
        cVar13 = '-';
        if (uVar26 != 0x2d) goto LAB_0040f290;
LAB_0040f95c:
        uVar6 = 0;
        if (-1 < (int)uVar20) {
          uVar6 = uVar20;
        }
        pcVar27 = (char *)(long)(int)uVar6;
        pcVar11 = (char *)0x1;
        if (pcVar27 != (char *)0x0) {
          pcVar11 = pcVar27;
        }
        if ((char *)(param_2 - lVar31) <= pcVar11) {
          return 0;
        }
        if (param_1 != (char *)0x0) {
          if ((local_478 == 0) && ((char *)0x1 < pcVar27)) {
            memset(param_1,0x20,(long)(int)uVar20 - 1U);
            local_480 = 0;
            param_1 = param_1 + ((long)(int)uVar20 - 1U);
            local_478 = local_480;
          }
          *param_1 = cVar13;
          param_1 = param_1 + 1;
        }
        lVar31 = lVar31 + (long)pcVar11;
        uVar26 = 0x2d;
        local_498 = local_442 + (1 - (long)pcVar9);
        pcVar11 = (char *)(param_2 - lVar31);
      }
LAB_0040ec26:
      pcVar16 = pcVar27;
      if (pcVar27 <= local_498) {
        pcVar16 = local_498;
      }
      if (pcVar11 <= pcVar16) {
        return 0;
      }
      if (param_1 != (char *)0x0) {
        pcVar11 = param_1;
        local_488 = param_3;
        if ((local_478 == 0) && (local_498 < pcVar27)) {
          sVar19 = (long)(int)uVar20 - (long)local_498;
          pcVar11 = param_1 + sVar19;
          if (uVar26 == 0x30) {
            memset(param_1,0x30,sVar19);
          }
          else {
            memset(param_1,0x20,sVar19);
          }
        }
LAB_0040eacb:
        if (cVar24 == '\0') {
          memcpy(pcVar11,pcVar9,(size_t)local_498);
        }
        else {
          FUN_0040e750();
        }
LAB_0040eae3:
        param_1 = pcVar11 + (long)local_498;
        param_3 = local_488;
      }
    }
    lVar31 = lVar31 + (long)pcVar16;
    pcVar9 = param_3;
    goto LAB_0040e82e;
  case 0x7a:
    lVar30 = 0;
LAB_0040f6c0:
    if (param_4->tm_isdst < 0) goto LAB_0040e82e;
    bVar32 = true;
    iVar23 = (int)param_4->tm_gmtoff;
    if ((-1 < iVar23) && (bVar32 = false, iVar23 == 0)) {
      bVar32 = *__s == '-';
    }
    uVar6 = iVar23 / 0xe10;
    uVar8 = (iVar23 / 0x3c) % 0x3c;
    param_3 = pcVar9;
    if (lVar30 == 1) {
LAB_0040fe16:
      local_478 = 6;
      bVar4 = true;
      uVar6 = uVar6 * 100 + uVar8;
      uVar22 = 4;
    }
    else if (lVar30 == 0) {
      uVar22 = 0;
      bVar4 = true;
      local_478 = 5;
      uVar6 = uVar6 * 100 + uVar8;
    }
    else {
      if (lVar30 != 2) {
        if (lVar30 != 3) {
          cVar5 = *pcVar9;
          goto LAB_0040f777;
        }
        if (iVar23 % 0x3c == 0) {
          if (uVar8 != 0) goto LAB_0040fe16;
          local_478 = 3;
          bVar4 = true;
          uVar22 = uVar8;
          goto LAB_0040ef3f;
        }
      }
      local_478 = 9;
      bVar4 = true;
      uVar22 = 0x14;
      uVar6 = iVar23 % 0x3c + uVar6 * 10000 + uVar8 * 100;
    }
    goto LAB_0040ef3f;
  }
  pcVar11 = param_3 + -1;
  do {
    pcVar9 = pcVar11;
    pcVar11 = pcVar9 + -1;
  } while (*pcVar9 != '%');
  __n = (ulong)(((int)(param_3 + -1) + 2) - (int)pcVar9);
  uVar18 = param_2 - lVar31;
  uVar6 = 0;
  if (-1 < (int)uVar20) {
    uVar6 = uVar20;
  }
  uVar12 = (ulong)(int)uVar6;
  uVar29 = uVar12;
  if (uVar12 <= __n) {
    uVar29 = __n;
  }
LAB_0040f623:
  if (uVar18 <= uVar29) {
    return 0;
  }
  if (param_1 != (char *)0x0) {
    pcVar11 = param_1;
    if (__n < uVar12) {
      sVar19 = (long)(int)uVar20 - __n;
      pcVar11 = param_1 + sVar19;
      if (uVar26 == 0x30) {
        memset(param_1,0x30,sVar19);
      }
      else {
        memset(param_1,0x20,sVar19);
      }
    }
    if (cVar24 == '\0') {
      memcpy(pcVar11,pcVar9,__n);
    }
    else {
      FUN_0040e750();
    }
    param_1 = pcVar11 + __n;
  }
  lVar31 = lVar31 + uVar29;
  pcVar9 = param_3;
LAB_0040e82e:
  cVar5 = pcVar9[1];
  param_3 = pcVar9 + 1;
  if (cVar5 == '\0') goto LAB_0040e83b;
  goto LAB_0040e80a;
}


void FUN_0040ff70(void)

{
  FUN_0040e7a0();
  return;
}


void FUN_0040ff90(uint *param_1)

{
  *param_1 = *param_1 | 0x20;
  return;
}


/* WARNING: Removing unreachable block (ram,0x004117dc) */
/* WARNING: Removing unreachable block (ram,0x0041191d) */
/* WARNING: Removing unreachable block (ram,0x004117f0) */
/* WARNING: Removing unreachable block (ram,0x00410cc4) */
/* WARNING: Removing unreachable block (ram,0x00410290) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Could not reconcile some variable overlaps */

undefined *
FUN_0040ffa0(undefined *param_1,undefined *param_2,undefined *param_3,undefined param_4)

{
  undefined uVar1;
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
  undefined *puVar13;
  undefined *puVar14;
  uint *puVar15;
  int *piVar16;
  undefined *puVar17;
  undefined *puVar18;
  ulong uVar19;
  undefined *puVar20;
  char *pcVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  char *pcVar25;
  char *pcVar26;
  undefined *puVar27;
  size_t sVar28;
  uint uVar29;
  long lVar30;
  undefined *puVar31;
  undefined *puVar32;
  bool bVar33;
  ushort in_FPUControlWord;
  float fVar34;
  undefined auStack_6f8 [4];
  uint local_6f4;
  undefined *local_6f0;
  undefined *local_6e8;
  undefined *local_6e0;
  undefined *local_6d8;
  undefined *local_6d0;
  undefined *local_6c8;
  long local_6c0;
  undefined local_6b8;
  undefined *local_6b0;
  undefined local_6a8 [4];
  undefined auStack_6a4 [12];
  undefined *local_698;
  undefined *local_690;
  int local_684;
  undefined local_680;
  uint local_67c;
  undefined local_678 [8];
  undefined *local_670;
  undefined auStack_668 [112];
  long local_588;
  undefined *local_580;
  long local_578;
  ulong local_570;
  undefined auStack_568 [78];
  undefined local_2f8 [356];
  
  local_6d8 = param_2;
  local_690 = param_1;
  iVar10 = FUN_00411ce0(param_3,&local_588,local_678);
  if (iVar10 < 0) {
    return (undefined *)0x0;
  }
  iVar10 = FUN_00411ac0(param_4,local_678);
  if (iVar10 < 0) {
    if (local_580 != auStack_568) {
      free(local_580);
    }
    if (local_670 != auStack_668) {
      free(local_670);
    }
    piVar16 = __errno_location();
    *piVar16 = 0x16;
    return (undefined *)0x0;
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
LAB_00410064:
      puVar31 = (undefined *)0x0;
      if (local_690 != (undefined *)0x0) {
        puVar31 = (undefined *)*local_6d8;
      }
      __n = (undefined *)0x0;
      local_6c0 = 0;
      puVar24 = (undefined *)*local_580;
      puVar20 = local_690;
      _local_6a8 = (int *)param_3;
      puVar32 = local_580;
      puVar14 = __n;
      if (puVar24 == param_3) goto LAB_00410218;
      do {
        puVar24 = (undefined *)((long)puVar24 - (long)_local_6a8);
        __n = puVar14 + (long)puVar24;
        puVar13 = puVar20;
        if (CARRY8((ulong)puVar14,(ulong)puVar24)) {
          if (puVar31 != (undefined *)0xffffffffffffffff) goto LAB_00410590;
          __n = (undefined *)0xffffffffffffffff;
        }
        else if (puVar31 < __n) {
          if (puVar31 == (undefined *)0x0) {
            if (__n < (undefined *)0xd) {
              puVar31 = (undefined *)0xc;
            }
            else {
LAB_004101ae:
              puVar31 = __n;
              if (__n == (undefined *)0xffffffffffffffff) goto LAB_00410590;
            }
          }
          else {
            if ((long)puVar31 < 0) goto LAB_00410590;
            puVar31 = (undefined *)((long)puVar31 * 2);
            if (puVar31 < __n) goto LAB_004101ae;
          }
          if ((puVar20 == (undefined *)0x0) || (puVar20 == local_690)) {
            local_6b8 = (undefined *)_local_6a8;
            _local_6a8 = (float)CONCAT91(stack0xfffffffffffff959,puVar20 == local_690);
            local_698 = puVar24;
            *(undefined *)(puVar27 + -8) = 0x41010c;
            puVar13 = (undefined *)malloc((size_t)puVar31);
            if (puVar13 == (undefined *)0x0) goto LAB_00410590;
            puVar24 = local_698;
            _local_6a8 = (int *)local_6b8;
            if ((puVar14 != (undefined *)0x0) && (local_6a8[0] != '\0')) {
              _local_6a8 = (float)CONCAT28(auStack_6a4._4_2_,local_6b8);
              *(undefined *)(puVar27 + -8) = 0x41015a;
              puVar13 = (undefined *)memcpy(puVar13,puVar20,(size_t)puVar14);
              puVar24 = local_698;
            }
          }
          else {
            local_698 = puVar24;
            *(undefined *)(puVar27 + -8) = 0x4101ef;
            puVar13 = (undefined *)realloc(puVar20,(size_t)puVar31);
            if (puVar13 == (undefined *)0x0) {
LAB_004107a5:
              *(undefined *)(puVar27 + -8) = 0x4107aa;
              piVar16 = __errno_location();
              _local_6a8 = (float)CONCAT28(auStack_6a4._4_2_,piVar16);
              goto LAB_004107b8;
            }
            puVar24 = local_698;
          }
        }
        *(undefined *)(puVar27 + -8) = 0x410218;
        memcpy((undefined *)((long)puVar13 + (long)puVar14),_local_6a8,(size_t)puVar24);
        puVar20 = puVar13;
LAB_00410218:
        do {
          if (local_588 == local_6c0) {
            puVar14 = __n + 1;
            puVar24 = puVar20;
            if ((undefined *)0xfffffffffffffffe < __n) {
              if (puVar31 == (undefined *)0xffffffffffffffff) goto LAB_004113a2;
              goto LAB_00410590;
            }
            if (puVar14 <= puVar31) goto LAB_004113a2;
            if (puVar31 == (undefined *)0x0) {
              if (puVar14 < (undefined *)0xd) {
                puVar31 = (undefined *)0xc;
              }
              else {
LAB_0041197f:
                puVar31 = puVar14;
                if (puVar14 == (undefined *)0xffffffffffffffff) goto LAB_00410590;
              }
            }
            else {
              if ((long)puVar31 < 0) goto LAB_00410590;
              puVar31 = (undefined *)((long)puVar31 * 2);
              if (puVar31 < puVar14) goto LAB_0041197f;
            }
            bVar33 = puVar20 == local_690;
            if ((puVar20 == (undefined *)0x0) || (bVar33)) {
              *(undefined *)(puVar27 + -8) = 0x411939;
              puVar24 = (undefined *)malloc((size_t)puVar31);
              if (puVar24 == (undefined *)0x0) goto LAB_00410590;
              if ((__n != (undefined *)0x0) && (bVar33)) {
                *(undefined *)(puVar27 + -8) = 0x411965;
                puVar24 = (undefined *)memcpy(puVar24,puVar20,(size_t)__n);
              }
            }
            else {
              *(undefined *)(puVar27 + -8) = 0x411396;
              puVar24 = (undefined *)realloc(puVar20,(size_t)puVar31);
              if (puVar24 == (undefined *)0x0) goto LAB_004107a5;
            }
LAB_004113a2:
            *(undefined *)((long)puVar24 + (long)__n) = 0;
            if ((puVar14 < puVar31) && (puVar24 != local_690)) {
              *(undefined *)(puVar27 + -8) = 0x4113c0;
              puVar20 = (undefined *)realloc(puVar24,(size_t)puVar14);
              if (puVar20 != (undefined *)0x0) {
                puVar24 = puVar20;
              }
            }
            puVar31 = local_6e0;
            if (local_6e0 != (undefined *)0x0) {
              *(undefined *)(puVar27 + -8) = 0x4113db;
              free(puVar31);
            }
            if (local_580 != auStack_568) {
              *(undefined *)(puVar27 + -8) = 0x4113f7;
              free(local_580);
            }
            if (local_670 != auStack_668) {
              *(undefined *)(puVar27 + -8) = 0x411413;
              free(local_670);
            }
            *local_6d8 = __n;
            return puVar24;
          }
          bVar8 = *(byte *)(puVar32 + 9);
          lVar30 = puVar32[10];
          if (bVar8 == 0x25) {
            if (lVar30 != -1) goto LAB_00410ccc;
            puVar14 = __n + 1;
            puVar24 = puVar20;
            if (__n < (undefined *)0xffffffffffffffff) {
              if (puVar31 < puVar14) {
                if (puVar31 == (undefined *)0x0) {
                  if (puVar14 < (undefined *)0xd) {
                    puVar31 = (undefined *)0xc;
                  }
                  else {
LAB_00410f42:
                    puVar31 = puVar14;
                    if (puVar14 == (undefined *)0xffffffffffffffff) goto LAB_00410590;
                  }
                }
                else {
                  if ((long)puVar31 < 0) goto LAB_00410590;
                  puVar31 = (undefined *)((long)puVar31 * 2);
                  if (puVar31 < puVar14) goto LAB_00410f42;
                }
                if ((puVar20 == (undefined *)0x0) || (puVar20 == local_690)) {
                  local_698 = (undefined *)
                              ((ulong)local_698 & 0xffffffffffffff00 | (ulong)(puVar20 == local_690)
                              );
                  *(undefined *)(puVar27 + -8) = 0x410e8e;
                  puVar24 = (undefined *)malloc((size_t)puVar31);
                  if (puVar24 == (undefined *)0x0) goto LAB_00410590;
                  if ((__n != (undefined *)0x0) && ((char)local_698 != '\0')) {
                    *(undefined *)(puVar27 + -8) = 0x410ec0;
                    puVar24 = (undefined *)memcpy(puVar24,puVar20,(size_t)__n);
                  }
                }
                else {
                  *(undefined *)(puVar27 + -8) = 0x410686;
                  puVar24 = (undefined *)realloc(puVar20,(size_t)puVar31);
                  if (puVar24 == (undefined *)0x0) goto LAB_004107a5;
                }
              }
            }
            else {
              if (puVar31 != (undefined *)0xffffffffffffffff) goto LAB_00410590;
              puVar14 = (undefined *)0xffffffffffffffff;
            }
            *(undefined *)((long)puVar24 + (long)__n) = 0x25;
            puVar20 = puVar24;
            __n = puVar14;
            goto LAB_00410697;
          }
          if (lVar30 == -1) goto LAB_00410ccc;
          puVar15 = (uint *)(local_670 + lVar30 * 0x10);
          uVar4 = *puVar15;
          local_698 = (undefined *)((ulong)local_698 & 0xffffffff00000000 | (ulong)uVar4);
          if (bVar8 == 0x6e) {
            switch(uVar4) {
            case 0x12:
              **(undefined **)(puVar15 + 4) = (char)__n;
              break;
            case 0x13:
              **(undefined **)(puVar15 + 4) = (short)__n;
              break;
            case 0x14:
              **(undefined **)(puVar15 + 4) = (int)__n;
              break;
            case 0x15:
            case 0x16:
              **(undefined **)(puVar15 + 4) = __n;
              break;
            default:
switchD_004106fc_caseD_5:
                    /* WARNING: Subroutine does not return */
              *(undefined *)(puVar27 + -8) = 0x401dc3;
              abort();
            }
          }
          else {
            bVar8 = bVar8 & 0xdf;
            if (((((byte)(bVar8 + 0xbb) < 3) || (bVar8 == 0x41)) && (uVar4 == 0xc)) &&
               (fVar34 = *(float *)(puVar15 + 4), fVar34 == fVar34 + fVar34)) {
              pcVar21 = (char *)puVar32[4];
              local_6b8._0_4_ = *(uint *)(puVar32 + 2);
              if ((char *)puVar32[3] == pcVar21) {
                puVar24 = (undefined *)0x0;
              }
              else {
                puVar13 = (undefined *)puVar32[5];
                if (puVar13 == (undefined *)0xffffffffffffffff) {
                  puVar24 = (undefined *)0x0;
                  local_698 = puVar13;
                  pcVar25 = (char *)puVar32[3];
                  do {
                    pcVar26 = pcVar25 + 1;
                    uVar11 = 0xffffffffffffffff;
                    if (puVar24 < (undefined *)0x199999999999999a) {
                      uVar11 = (long)puVar24 * 10;
                    }
                    puVar24 = (undefined *)((long)(*pcVar25 + -0x30) + uVar11);
                    pcVar6 = pcVar26;
                    if (CARRY8((long)(*pcVar25 + -0x30),uVar11)) {
                      do {
                        puVar24 = local_698;
                        if (pcVar21 == pcVar6) goto LAB_00410520;
                        pcVar26 = pcVar6 + 1;
                        cVar9 = *pcVar6;
                        pcVar6 = pcVar26;
                      } while (cVar9 != '0');
                      puVar24 = (undefined *)0xffffffffffffffff;
                    }
                    pcVar25 = pcVar26;
                  } while (pcVar21 != pcVar26);
                }
                else {
                  if (*(int *)(local_670 + (long)puVar13 * 0x10) != 5) goto LAB_00410ccc;
                  iVar10 = *(int *)((long)(local_670 + (long)puVar13 * 0x10) + 0x10);
                  puVar24 = (undefined *)(long)iVar10;
                  if (iVar10 < 0) {
                    local_6b8._0_4_ = (uint)local_6b8 | 2;
                    puVar24 = (undefined *)-(long)(undefined *)(long)iVar10;
                  }
                }
              }
LAB_00410520:
              pcVar21 = (char *)puVar32[7];
              if ((char *)puVar32[6] == pcVar21) {
LAB_00410bd0:
                puVar18 = (undefined *)0xc;
                if (bVar8 != 0x41) {
                  puVar18 = (undefined *)0x12;
                }
                puVar13 = (undefined *)0x0;
                if (bVar8 != 0x41) {
                  puVar13 = (undefined *)0x6;
                }
              }
              else {
                if (puVar32[8] == -1) {
                  pcVar25 = (char *)puVar32[6] + 1;
                  puVar13 = (undefined *)0x0;
                  if (pcVar21 != pcVar25) {
                    do {
                      pcVar26 = pcVar25 + 1;
                      uVar11 = 0xffffffffffffffff;
                      if (puVar13 < (undefined *)0x199999999999999a) {
                        uVar11 = (long)puVar13 * 10;
                      }
                      puVar13 = (undefined *)((long)(*pcVar25 + -0x30) + uVar11);
                      pcVar6 = pcVar26;
                      if (CARRY8((long)(*pcVar25 + -0x30),uVar11)) {
                        do {
                          if (pcVar21 == pcVar6) goto LAB_00410590;
                          pcVar26 = pcVar6 + 1;
                          cVar9 = *pcVar6;
                          pcVar6 = pcVar26;
                        } while (cVar9 != '0');
                        puVar13 = (undefined *)0xffffffffffffffff;
                      }
                      pcVar25 = pcVar26;
                    } while (pcVar21 != pcVar26);
                    goto LAB_0041055c;
                  }
                }
                else {
                  if (*(int *)(local_670 + puVar32[8] * 0x10) != 5) goto LAB_00410ccc;
                  iVar10 = *(int *)((long)(local_670 + puVar32[8] * 0x10) + 0x10);
                  puVar13 = (undefined *)(long)iVar10;
                  if (iVar10 < 0) goto LAB_00410bd0;
LAB_0041055c:
                  if (puVar13 != (undefined *)0x0) {
                    puVar18 = puVar13 + 6;
                    if (puVar13 < (undefined *)0xfffffffffffffff4) goto LAB_00410bee;
                    goto LAB_00410590;
                  }
                }
                puVar18 = (undefined *)0xc;
              }
LAB_00410bee:
              if (puVar18 <= puVar24) {
                puVar18 = puVar24;
              }
              puVar17 = (undefined *)((long)puVar18 + 1);
              local_698 = puVar17;
              if (puVar18 == (undefined *)0xffffffffffffffff) goto LAB_00410590;
              if (puVar17 < (undefined *)0x2bd) {
                puVar18 = local_2f8;
              }
              else {
                local_6d0 = puVar24;
                local_6c8 = puVar13;
                local_6b8 = (undefined *)
                            ((ulong)local_6b8 & 0xffffffff00000000 | (ulong)(uint)local_6b8);
                _local_6a8 = fVar34;
                if (puVar17 == (undefined *)0xffffffffffffffff) goto LAB_00410590;
                *(undefined *)(puVar27 + -8) = 0x410c42;
                puVar18 = (undefined *)malloc((size_t)puVar17);
                puVar13 = local_6c8;
                puVar24 = local_6d0;
                fVar34 = _local_6a8;
                if (puVar18 == (undefined *)0x0) goto LAB_00410590;
              }
              uVar4 = local_680 & 0xffff0000;
              uVar29 = (uint)in_FPUControlWord;
              local_680 = uVar4 | uVar29;
              uVar7 = local_680;
              local_680 = local_680 | 0x300;
              if ((float)0 <= fVar34) {
                if (((uint)local_6b8 & 4) == 0) {
                  puVar17 = puVar18;
                  if (((uint)local_6b8 & 8) != 0) {
                    puVar17 = (undefined *)((long)puVar18 + 1);
                    *(undefined *)puVar18 = 0x20;
                  }
                }
                else {
                  *(undefined *)puVar18 = 0x2b;
                  puVar17 = (undefined *)((long)puVar18 + 1);
                }
              }
              else {
                *(undefined *)puVar18 = 0x2d;
                fVar34 = -fVar34;
                puVar17 = (undefined *)((long)puVar18 + 1);
              }
              local_680._2_2_ = (undefined)(uVar4 >> 0x10);
              if (fVar34 <= (float)0) {
                if (fVar34 != (float)0) goto LAB_00410ccc;
                bVar8 = *(byte *)(puVar32 + 9) & 0xdf;
                if (bVar8 == 0x46) {
                  *(undefined *)puVar17 = 0x30;
                  if ((((uint)local_6b8 & 0x10) == 0) && (puVar13 == (undefined *)0x0)) {
LAB_00411117:
                    puVar13 = (undefined *)((long)puVar17 + 1);
                  }
                  else {
                    local_6f0 = (undefined *)
                                ((ulong)local_6f0 & 0xffffffff00000000 |
                                (ulong)uVar7 & 0xffffffff0000ffff);
                    local_6e8 = puVar24;
                    local_6d0 = puVar18;
                    local_6c8 = puVar13;
                    local_6b8 = (undefined *)
                                ((ulong)local_6b8 & 0xffffffff00000000 | (ulong)(uint)local_6b8);
                    _local_6a8 = (float)CONCAT28(auStack_6a4._4_2_,puVar17 + 1);
                    *(undefined *)(puVar27 + -8) = 0x411651;
                    pcVar21 = nl_langinfo(0x10000);
                    cVar9 = *pcVar21;
                    in_FPUControlWord = (ushort)local_6f0;
                    if (cVar9 == '\0') {
                      cVar9 = '.';
                    }
                    *(char *)((long)puVar17 + 1) = cVar9;
                    puVar18 = local_6d0;
                    puVar13 = (undefined *)_local_6a8;
                    puVar24 = local_6e8;
                    if (local_6c8 != (undefined *)0x0) {
                      do {
                        puVar22 = (undefined *)((long)puVar13 + 1);
                        *(undefined *)puVar13 = 0x30;
                        puVar13 = puVar22;
                      } while (puVar22 != (undefined *)((long)(puVar17 + 1) + (long)local_6c8));
                      puVar13 = (undefined *)((long)_local_6a8 + (long)local_6c8);
                    }
                  }
                }
                else if (bVar8 == 0x45) {
                  *(undefined *)puVar17 = 0x30;
                  if ((((uint)local_6b8 & 0x10) != 0) ||
                     (_local_6a8 = (int *)((long)puVar17 + 1), puVar13 != (undefined *)0x0)) {
                    local_6f0 = (undefined *)
                                ((ulong)local_6f0 & 0xffffffff00000000 |
                                (ulong)uVar7 & 0xffffffff0000ffff);
                    local_6e8 = puVar24;
                    local_6d0 = puVar18;
                    local_6c8 = puVar13;
                    local_6b8 = (undefined *)
                                ((ulong)local_6b8 & 0xffffffff00000000 | (ulong)(uint)local_6b8);
                    _local_6a8 = (float)CONCAT28(auStack_6a4._4_2_,puVar17 + 1);
                    *(undefined *)(puVar27 + -8) = 0x4118af;
                    pcVar21 = nl_langinfo(0x10000);
                    cVar9 = *pcVar21;
                    if (cVar9 == '\0') {
                      cVar9 = '.';
                    }
                    *(char *)((long)puVar17 + 1) = cVar9;
                    puVar18 = local_6d0;
                    puVar24 = local_6e8;
                    in_FPUControlWord = (ushort)local_6f0;
                    if (local_6c8 != (undefined *)0x0) {
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
                  puVar13 = (undefined *)((long)_local_6a8 + 4);
                  *(undefined *)((long)_local_6a8 + 3) = 0x30;
                  *(undefined *)_local_6a8 = uVar3;
                  *(undefined *)((long)_local_6a8 + 1) = 0x302b;
                }
                else if (bVar8 == 0x47) {
                  *(undefined *)puVar17 = 0x30;
                  if (((uint)local_6b8 & 0x10) == 0) goto LAB_00411117;
                  if (puVar13 == (undefined *)0x0) {
                    local_6e8 = (undefined *)
                                ((ulong)local_6e8 & 0xffffffff00000000 |
                                (ulong)uVar7 & 0xffffffff0000ffff);
                    local_6d0 = puVar24;
                    local_6c8 = puVar17 + 1;
                    local_6b8 = puVar18;
                    _local_6a8 = (float)CONCAT64(auStack_6a4._0_6_,(uint)local_6b8);
                    *(undefined *)(puVar27 + -8) = 0x411a67;
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
                    local_6c8 = (undefined *)
                                ((ulong)local_6c8 & 0xffffffff00000000 | (ulong)(uint)local_6b8);
                    local_6b8 = puVar13;
                    _local_6a8 = (float)CONCAT28(auStack_6a4._4_2_,
                                                   (undefined *)((long)puVar13 + -1));
                    *(undefined *)(puVar27 + -8) = 0x41157d;
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
                        puVar22 = (undefined *)((long)puVar13 + 1);
                        *(undefined *)puVar13 = 0x30;
                        puVar13 = puVar22;
                      } while (puVar22 !=
                               (undefined *)((undefined *)((long)puVar17 + 1) + (long)local_6b8));
                      puVar13 = (undefined *)((long)local_6e8 + (long)_local_6a8);
                    }
                  }
                }
                else {
                  if (bVar8 != 0x41) goto LAB_00410ccc;
                  *(undefined *)puVar17 = 0x30;
                  _local_6a8 = (float)CONCAT28(auStack_6a4._4_2_,puVar17 + 1);
                  cVar9 = *(char *)(puVar32 + 9);
                  *(undefined *)(puVar17 + 1) = 0x30;
                  *(char *)((long)puVar17 + 1) = cVar9 + '\x17';
                  if ((((uint)local_6b8 & 0x10) != 0) ||
                     (puVar22 = (undefined *)((long)puVar17 + 3), puVar13 != (undefined *)0x0)) {
                    local_6f4 = uVar29;
                    local_6f0 = puVar24;
                    local_6e8 = puVar18;
                    local_6d0 = puVar13;
                    local_6c8 = (undefined *)
                                ((ulong)local_6c8 & 0xffffffff00000000 | (ulong)(uint)local_6b8);
                    local_6b8 = puVar17 + 2;
                    *(undefined *)(puVar27 + -8) = 0x4119c9;
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
                    if (local_6d0 != (undefined *)0x0) {
                      puVar13 = local_6b8;
                      do {
                        puVar22 = (undefined *)((long)puVar13 + 1);
                        *(undefined *)puVar13 = 0x30;
                        puVar13 = puVar22;
                      } while (puVar22 != (undefined *)((long)(puVar17 + 2) + (long)local_6d0));
                      puVar22 = (undefined *)((long)local_6b8 + (long)local_6d0);
                    }
                  }
                  in_FPUControlWord = (ushort)uVar29;
                  cVar9 = *(char *)(puVar32 + 9);
                  puVar13 = (undefined *)((long)puVar22 + 3);
                  *(undefined *)((long)puVar22 + 1) = 0x302b;
                  *(char *)puVar22 = cVar9 + '\x0f';
                  puVar17 = (undefined *)_local_6a8;
                }
              }
              else {
                if (fVar34 + fVar34 != fVar34) goto LAB_00410ccc;
                puVar13 = (undefined *)((long)puVar17 + 3);
                if ((byte)(*(char *)(puVar32 + 9) + 0xbfU) < 0x1a) {
                  *(undefined *)(puVar17 + 1) = 0x46;
                  *puVar17 = 0x4e49;
                  puVar17 = (undefined *)0x0;
                }
                else {
                  *(undefined *)(puVar17 + 1) = 0x66;
                  *puVar17 = 0x6e69;
                  puVar17 = (undefined *)0x0;
                }
              }
              local_680 = CONCAT22(local_680._2_2_,in_FPUControlWord);
              _local_6a8 = (int *)((long)puVar13 - (long)puVar18);
              if (_local_6a8 < puVar24) {
                lVar30 = (long)puVar24 - (long)_local_6a8;
                puVar24 = (undefined *)((long)puVar13 + lVar30);
                _local_6a8 = (int *)((long)puVar24 - (long)puVar18);
                if (((uint)local_6b8 & 2) == 0) {
                  if ((((uint)local_6b8 & 0x20) == 0) || (puVar17 == (undefined *)0x0)) {
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
                        puVar13 = (undefined *)((long)puVar24 + 1);
                        *(undefined *)puVar24 = 0x20;
                        puVar24 = puVar13;
                      } while (puVar13 != (undefined *)(lVar30 + (long)puVar17));
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
                        puVar13 = (undefined *)((long)puVar24 + 1);
                        *(undefined *)puVar24 = 0x30;
                        puVar24 = puVar13;
                      } while (puVar13 != (undefined *)(lVar30 + (long)puVar22));
                    }
                  }
                }
                else if (lVar30 != 0) {
                  do {
                    puVar17 = (undefined *)((long)puVar13 + 1);
                    *(undefined *)puVar13 = 0x20;
                    puVar13 = puVar17;
                  } while (puVar24 != puVar17);
                }
              }
              if (local_698 <= _local_6a8) {
LAB_00410ccc:
                    /* WARNING: Subroutine does not return */
                *(undefined **)(puVar27 + -8) = &UNK_00410cd1;
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
LAB_004117ca:
                        puVar31 = puVar14;
                        if (puVar14 == (undefined *)0xffffffffffffffff) goto LAB_00410590;
                      }
                    }
                    else {
                      if ((long)puVar31 < 0) goto LAB_00410590;
                      puVar31 = (undefined *)((long)puVar31 * 2);
                      if (puVar31 < puVar14) goto LAB_004117ca;
                    }
                    if ((puVar20 == (undefined *)0x0) || (puVar20 == local_690)) {
                      local_6b8 = (undefined *)
                                  ((ulong)local_6b8 & 0xffffffffffffff00 |
                                  (ulong)(puVar20 == local_690));
                      local_698 = puVar18;
                      *(undefined *)(puVar27 + -8) = 0x4114b7;
                      puVar24 = (undefined *)malloc((size_t)puVar31);
                      if (puVar24 == (undefined *)0x0) goto LAB_00410590;
                      puVar18 = local_698;
                      if ((__n != (undefined *)0x0) && ((char)local_6b8 != '\0')) {
                        *(undefined *)(puVar27 + -8) = 0x411505;
                        puVar24 = (undefined *)memcpy(puVar24,puVar20,(size_t)__n);
                        puVar18 = local_698;
                      }
                    }
                    else {
                      local_698 = puVar18;
                      *(undefined *)(puVar27 + -8) = 0x411232;
                      puVar24 = (undefined *)realloc(puVar20,(size_t)puVar31);
                      if (puVar24 == (undefined *)0x0) goto LAB_00410590;
                      puVar18 = local_698;
                    }
                  }
                }
                else if (puVar31 != (undefined *)0xffffffffffffffff) goto LAB_00410590;
              }
              local_698 = puVar18;
              *(undefined *)(puVar27 + -8) = 0x411266;
              memcpy((undefined *)((long)puVar24 + (long)__n),puVar18,(size_t)_local_6a8);
              puVar13 = local_698;
              puVar20 = puVar24;
              __n = puVar14;
              if (local_698 != local_2f8) {
                *(undefined *)(puVar27 + -8) = 0x411285;
                free(puVar13);
              }
            }
            else {
              uVar4 = *(uint *)(puVar32 + 2);
              puVar24 = (undefined *)(local_6b0 + 1);
              *local_6b0 = 0x25;
              if ((uVar4 & 1) != 0) {
                local_6b0[1] = 0x27;
                puVar24 = (undefined *)(local_6b0 + 2);
              }
              if ((uVar4 & 2) != 0) {
                *(undefined *)puVar24 = 0x2d;
                puVar24 = (undefined *)((long)puVar24 + 1);
              }
              if ((uVar4 & 4) != 0) {
                *(undefined *)puVar24 = 0x2b;
                puVar24 = (undefined *)((long)puVar24 + 1);
              }
              if ((uVar4 & 8) != 0) {
                *(undefined *)puVar24 = 0x20;
                puVar24 = (undefined *)((long)puVar24 + 1);
              }
              if ((uVar4 & 0x10) != 0) {
                *(undefined *)puVar24 = 0x23;
                puVar24 = (undefined *)((long)puVar24 + 1);
              }
              if ((uVar4 & 0x40) != 0) {
                *(undefined *)puVar24 = 0x49;
                puVar24 = (undefined *)((long)puVar24 + 1);
              }
              if ((uVar4 & 0x20) != 0) {
                *(undefined *)puVar24 = 0x30;
                puVar24 = (undefined *)((long)puVar24 + 1);
              }
              pvVar5 = (void *)puVar32[3];
              puVar13 = local_670;
              if (pvVar5 != (void *)puVar32[4]) {
                local_6b8 = local_670;
                sVar28 = (long)(void *)puVar32[4] - (long)pvVar5;
                _local_6a8 = (float)CONCAT28(auStack_6a4._4_2_,sVar28);
                *(undefined *)(puVar27 + -8) = 0x410339;
                memcpy(puVar24,pvVar5,sVar28);
                puVar24 = (undefined *)((long)puVar24 + (long)_local_6a8);
                puVar13 = local_6b8;
              }
              pvVar5 = (void *)puVar32[6];
              if (pvVar5 != (void *)puVar32[7]) {
                local_6b8 = puVar13;
                sVar28 = (long)(void *)puVar32[7] - (long)pvVar5;
                _local_6a8 = (float)CONCAT28(auStack_6a4._4_2_,sVar28);
                *(undefined *)(puVar27 + -8) = 0x410376;
                memcpy(puVar24,pvVar5,sVar28);
                puVar24 = (undefined *)((long)puVar24 + (long)_local_6a8);
                puVar13 = local_6b8;
              }
              if ((uint)local_698 < 0x11) {
                uVar11 = 1L << ((byte)local_698 & 0x3f);
                if ((uVar11 & 0x14180) == 0) {
                  if ((uVar11 & 0x1000) == 0) {
                    if ((uVar11 & 0x600) != 0) {
                      *(undefined *)puVar24 = 0x6c;
                      puVar24 = (undefined *)((long)puVar24 + 1);
                      goto LAB_00410798;
                    }
                  }
                  else {
                    *(undefined *)puVar24 = 0x4c;
                    puVar24 = (undefined *)((long)puVar24 + 1);
                  }
                }
                else {
LAB_00410798:
                  *(undefined *)puVar24 = 0x6c;
                  puVar24 = (undefined *)((long)puVar24 + 1);
                }
              }
              uVar3 = *(undefined *)(puVar32 + 9);
              *(undefined *)((long)puVar24 + 1) = 0;
              *(undefined *)puVar24 = uVar3;
              if (puVar32[5] == -1) {
                local_6b8 = (undefined *)((ulong)local_6b8._4_4_ << 0x20);
              }
              else {
                if (*(int *)(puVar13 + puVar32[5] * 0x10) != 5) goto LAB_00410ccc;
                local_6b8 = (undefined *)CONCAT44(local_6b8._4_4_,1);
                local_680 = *(uint *)((long)(puVar13 + puVar32[5] * 0x10) + 0x10);
              }
              if (puVar32[8] != -1) {
                if (*(int *)(puVar13 + puVar32[8] * 0x10) != 5) goto LAB_00410ccc;
                (&local_680)[(ulong)local_6b8 & 0xffffffff] =
                     *(int *)((long)(puVar13 + puVar32[8] * 0x10) + 0x10);
                local_6b8 = (undefined *)
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
LAB_00410b82:
                      puVar31 = puVar14;
                      if (puVar14 == (undefined *)0xffffffffffffffff) goto LAB_00410590;
                    }
                  }
                  else {
                    if ((long)puVar31 < 0) goto LAB_00410590;
                    puVar31 = (undefined *)((long)puVar31 * 2);
                    if (puVar31 < puVar14) goto LAB_00410b82;
                  }
                  if ((puVar20 == (undefined *)0x0) || (puVar20 == local_690)) {
                    _local_6a8 = (float)CONCAT91(stack0xfffffffffffff959,puVar20 == local_690);
                    *(undefined *)(puVar27 + -8) = 0x410e2e;
                    puVar13 = (undefined *)malloc((size_t)puVar31);
                    if (puVar13 == (undefined *)0x0) goto LAB_00410590;
                    if ((__n != (undefined *)0x0) && (local_6a8[0] != '\0')) {
                      *(undefined *)(puVar27 + -8) = 0x410e60;
                      puVar13 = (undefined *)memcpy(puVar13,puVar20,(size_t)__n);
                    }
                  }
                  else {
                    *(undefined *)(puVar27 + -8) = 0x410488;
                    puVar13 = (undefined *)realloc(puVar20,(size_t)puVar31);
                    if (puVar13 == (undefined *)0x0) goto LAB_00410590;
                  }
                }
              }
              else if (puVar31 != (undefined *)0xffffffffffffffff) goto LAB_00410590;
              *(undefined *)((long)puVar13 + (long)__n) = 0;
              local_6c8 = puVar13;
              *(undefined *)(puVar27 + -8) = 0x4104a5;
              puVar15 = (uint *)__errno_location();
              puVar13 = local_6c8;
              local_6c8 = puVar24;
              _local_6a8 = (float)CONCAT28(auStack_6a4._4_2_,puVar15);
              local_6e8 = (undefined *)((ulong)local_6e8 & 0xffffffff00000000 | (ulong)*puVar15);
LAB_004104c8:
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
                goto switchD_004106fc_caseD_5;
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
                  goto LAB_00410da2;
                }
                if ((uint)local_6b8 != 2) {
                  *(int **)(puVar27 + -0x10) = &local_684;
LAB_0041080a:
                  puVar14 = local_6b0;
                  *(undefined *)(puVar27 + -0x18) = 0x410827;
                  iVar10 = __snprintf_chk((undefined *)((long)puVar13 + (long)__n),uVar11,1,
                                          0xffffffffffffffff,puVar14,piVar16);
                  goto LAB_00410830;
                }
                *(int **)(puVar27 + -0x10) = &local_684;
                *(int **)(puVar27 + -0x18) = piVar16;
                goto LAB_00410d56;
              case 0xb:
                local_6d0 = puVar13;
                uVar1 = *(undefined *)(local_670 + puVar32[10] * 0x10 + 8);
                if ((uint)local_6b8 == 1) {
                  *(int **)(puVar27 + -0x10) = &local_684;
                }
                else {
                  if ((uint)local_6b8 != 2) {
                    *(undefined *)(puVar27 + -8) = 0x410afe;
                    iVar10 = __snprintf_chk(uVar1,(undefined *)((long)puVar13 + (long)__n),uVar11,1,
                                            0xffffffffffffffff,puVar14,&local_684);
                    goto LAB_00410830;
                  }
                  *(int **)(puVar27 + -8) = &local_684;
                  *(ulong *)(puVar27 + -0x10) = (ulong)local_67c;
                }
                uVar4 = local_680;
                puVar14 = local_6b0;
                *(undefined *)(puVar27 + -0x18) = 0x410f9e;
                iVar10 = __snprintf_chk(uVar1,(undefined *)((long)puVar13 + (long)__n),uVar11,1,
                                        0xffffffffffffffff,puVar14,uVar4);
                goto LAB_00410830;
              case 0xc:
                local_6d0 = puVar13;
                Var2 = *(unkbyte10 *)(local_670 + puVar32[10] * 0x10 + 8);
                if ((uint)local_6b8 != 1) {
                  if ((uint)local_6b8 != 2) {
                    piVar16 = &local_684;
                    *(unkbyte10 *)(puVar27 + -0x10) = Var2;
                    goto LAB_0041080a;
                  }
                  *(int **)(puVar27 + -0x10) = &local_684;
                  uVar19 = (ulong)local_67c;
                  *(unkbyte10 *)(puVar27 + -0x20) = Var2;
                  *(ulong *)(puVar27 + -0x30) = uVar19;
                  *(undefined *)(puVar27 + -0x38) = 0x410fff;
                  iVar10 = __snprintf_chk((undefined *)((long)puVar13 + (long)__n),uVar11,1,
                                          0xffffffffffffffff,puVar14,uVar4);
                  goto LAB_00410830;
                }
                *(int **)(puVar27 + -0x10) = &local_684;
                *(unkbyte10 *)(puVar27 + -0x20) = Var2;
                goto LAB_00410d5d;
              }
              local_6d0 = puVar13;
              if ((uint)local_6b8 == 1) {
                *(int **)(puVar27 + -8) = &local_684;
                *(ulong *)(puVar27 + -0x10) = uVar19;
LAB_00410da2:
                uVar19 = (ulong)local_680;
LAB_0041094a:
                puVar14 = local_6b0;
                *(undefined *)(puVar27 + -0x18) = 0x410967;
                iVar10 = __snprintf_chk((undefined *)((long)puVar13 + (long)__n),uVar11,1,
                                        0xffffffffffffffff,puVar14,uVar19);
                if (-1 < local_684) goto LAB_0041083e;
LAB_0041097e:
                puVar24 = local_6d0;
                if (*(char *)((long)local_6c8 + 1) == '\0') {
                  if (iVar10 < 0) {
                    iVar10 = *_local_6a8;
                    if ((iVar10 == 0) && (iVar10 = 0x54, (*(byte *)(puVar32 + 9) & 0xef) != 99)) {
                      iVar10 = 0x16;
                    }
                    if ((local_6d0 != local_690) && (local_6d0 != (undefined *)0x0)) {
                      *(undefined *)(puVar27 + -8) = 0x4109d4;
                      free(puVar24);
                    }
                    puVar31 = local_6e0;
                    if (local_6e0 != (undefined *)0x0) {
                      *(undefined *)(puVar27 + -8) = 0x4109e8;
                      free(puVar31);
                    }
                    if (local_580 != auStack_568) {
                      *(undefined *)(puVar27 + -8) = 0x410a04;
                      free(local_580);
                    }
                    if (local_670 != auStack_668) {
                      *(undefined *)(puVar27 + -8) = 0x410a20;
                      free(local_670);
                    }
                    *_local_6a8 = iVar10;
                    return (undefined *)0x0;
                  }
                  goto LAB_00410858;
                }
                *(undefined *)((long)local_6c8 + 1) = 0;
                puVar13 = local_6d0;
                goto LAB_004104c8;
              }
              if ((uint)local_6b8 != 2) {
                *(int **)(puVar27 + -0x10) = &local_684;
                goto LAB_0041094a;
              }
              *(int **)(puVar27 + -0x10) = &local_684;
              *(ulong *)(puVar27 + -0x18) = uVar19;
LAB_00410d56:
              *(ulong *)(puVar27 + -0x20) = (ulong)local_67c;
LAB_00410d5d:
              uVar4 = local_680;
              puVar14 = local_6b0;
              *(undefined *)(puVar27 + -0x28) = 0x410d81;
              iVar10 = __snprintf_chk((undefined *)((long)puVar13 + (long)__n),uVar11,1,
                                      0xffffffffffffffff,puVar14,uVar4);
LAB_00410830:
              if (local_684 < 0) goto LAB_0041097e;
LAB_0041083e:
              if (((ulong)(long)local_684 < uVar11) &&
                 (((undefined *)((long)local_684 + (long)local_6d0))[(long)__n] != '\0'))
              goto LAB_00410ccc;
              if (local_684 < iVar10) {
LAB_00410858:
                local_684 = iVar10;
              }
              puVar24 = local_6d0;
              puVar20 = local_6d0;
              if (uVar11 <= local_684 + 1) {
                if (0x7ffffffe < uVar12) {
                  if ((local_6d0 != local_690) && (local_6d0 != (undefined *)0x0)) {
                    *(undefined *)(puVar27 + -8) = 0x411066;
                    free(puVar24);
                  }
                  puVar31 = local_6e0;
                  if (local_6e0 != (undefined *)0x0) {
                    *(undefined *)(puVar27 + -8) = 0x41107a;
                    free(puVar31);
                  }
                  if (local_580 != auStack_568) {
                    *(undefined *)(puVar27 + -8) = 0x411096;
                    free(local_580);
                  }
                  if (local_670 != auStack_668) {
                    *(undefined *)(puVar27 + -8) = 0x4110b2;
                    free(local_670);
                  }
                  *_local_6a8 = 0x4b;
                  return (undefined *)0x0;
                }
                puVar13 = local_6d0;
                if ((long)puVar31 < 0) {
                  if (puVar31 != (undefined *)0xffffffffffffffff) goto LAB_0041059f;
                }
                else {
                  if (CARRY8((ulong)(local_684 + 2),(ulong)__n) != false) goto LAB_0041059f;
                  puVar14 = __n + (local_684 + 2);
                  if (__n + (local_684 + 2) <= (undefined *)((long)puVar31 * 2)) {
                    puVar14 = (undefined *)((long)puVar31 * 2);
                  }
                  if (puVar31 < puVar14) {
                    puVar31 = (undefined *)((long)puVar31 * 2);
                    if ((puVar31 < puVar14) &&
                       (puVar31 = puVar14, puVar14 == (undefined *)0xffffffffffffffff))
                    goto LAB_0041059f;
                    bVar33 = local_6d0 == local_690;
                    if ((local_6d0 == (undefined *)0x0) || (bVar33)) {
                      *(undefined *)(puVar27 + -8) = 0x410cff;
                      puVar13 = (undefined *)malloc((size_t)puVar31);
                      puVar24 = local_6d0;
                      puVar20 = local_6d0;
                      if (puVar13 == (undefined *)0x0) goto LAB_0041059f;
                      if ((__n != (undefined *)0x0) && (bVar33)) {
                        *(undefined *)(puVar27 + -8) = 0x410d2d;
                        puVar13 = (undefined *)memcpy(puVar13,puVar24,(size_t)__n);
                      }
                    }
                    else {
                      *(undefined *)(puVar27 + -8) = 0x4108ed;
                      puVar13 = (undefined *)realloc(puVar24,(size_t)puVar31);
                      puVar20 = local_6d0;
                      if (puVar13 == (undefined *)0x0) goto LAB_0041059f;
                    }
                  }
                }
                goto LAB_004104c8;
              }
              __n = __n + local_684;
              *_local_6a8 = local_6e8._0_4_;
            }
          }
LAB_00410697:
          _local_6a8 = (int *)puVar32[1];
          puVar32 = puVar32 + 0xb;
          puVar24 = (undefined *)*puVar32;
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
        goto LAB_00410064;
      }
    }
  }
  goto LAB_004106c0;
LAB_00410590:
  *(undefined *)(puVar27 + -8) = 0x410595;
  piVar16 = __errno_location();
  _local_6a8 = (float)CONCAT28(auStack_6a4._4_2_,piVar16);
LAB_0041059f:
  if ((puVar20 != local_690) && (puVar20 != (undefined *)0x0)) {
LAB_004107b8:
    *(undefined *)(puVar27 + -8) = 0x4107c0;
    free(puVar20);
  }
  puVar31 = local_6e0;
  if (local_6e0 != (undefined *)0x0) {
    *(undefined *)(puVar27 + -8) = 0x4105c9;
    free(puVar31);
    goto LAB_004105c9;
  }
LAB_004106c0:
  *(undefined *)(puVar27 + -8) = 0x4106c5;
  piVar16 = __errno_location();
  _local_6a8 = (float)CONCAT28(auStack_6a4._4_2_,piVar16);
LAB_004105c9:
  if (local_580 != auStack_568) {
    *(undefined *)(puVar27 + -8) = 0x4105e5;
    free(local_580);
  }
  if (local_670 != auStack_668) {
    *(undefined *)(puVar27 + -8) = 0x410601;
    free(local_670);
  }
  *_local_6a8 = 0xc;
  return (undefined *)0x0;
}


undefined FUN_00411ac0(uint *param_1,ulong *param_2)

{
  uint uVar1;
  undefined *puVar2;
  unkbyte10 *pVar3;
  undefined *puVar4;
  char *pcVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  char **ppcVar9;
  
  puVar2 = (undefined *)param_2[1];
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
          puVar8 = (undefined *)((ulong)uVar1 + *(long *)(param_1 + 4));
          *param_1 = uVar1 + 8;
        }
        else {
          puVar8 = *(undefined **)(param_1 + 2);
          *(undefined **)(param_1 + 2) = puVar8 + 2;
        }
        *(char *)(puVar2 + 4) = (char)*puVar8;
        break;
      case 3:
      case 4:
        uVar1 = *param_1;
        if (uVar1 < 0x30) {
          puVar8 = (undefined *)((ulong)uVar1 + *(long *)(param_1 + 4));
          *param_1 = uVar1 + 8;
        }
        else {
          puVar8 = *(undefined **)(param_1 + 2);
          *(undefined **)(param_1 + 2) = puVar8 + 2;
        }
        *(short *)(puVar2 + 4) = (short)*puVar8;
        break;
      case 5:
      case 6:
      case 0xd:
      case 0xe:
        uVar1 = *param_1;
        if (uVar1 < 0x30) {
          puVar8 = (undefined *)((ulong)uVar1 + *(long *)(param_1 + 4));
          *param_1 = uVar1 + 8;
        }
        else {
          puVar8 = *(undefined **)(param_1 + 2);
          *(undefined **)(param_1 + 2) = puVar8 + 2;
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
          puVar7 = (undefined *)((ulong)uVar1 + *(long *)(param_1 + 4));
          *param_1 = uVar1 + 8;
        }
        else {
          puVar7 = *(undefined **)(param_1 + 2);
          *(undefined **)(param_1 + 2) = puVar7 + 1;
        }
        *(undefined *)(puVar2 + 4) = *puVar7;
        break;
      case 0xb:
        uVar1 = param_1[1];
        if (uVar1 < 0xb0) {
          puVar7 = (undefined *)((ulong)uVar1 + *(long *)(param_1 + 4));
          param_1[1] = uVar1 + 0x10;
        }
        else {
          puVar7 = *(undefined **)(param_1 + 2);
          *(undefined **)(param_1 + 2) = puVar7 + 1;
        }
        *(undefined *)(puVar2 + 4) = *puVar7;
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
          puVar7 = (undefined *)((ulong)uVar1 + *(long *)(param_1 + 4));
          *param_1 = uVar1 + 8;
        }
        else {
          puVar7 = *(undefined **)(param_1 + 2);
          *(undefined **)(param_1 + 2) = puVar7 + 1;
        }
        puVar4 = (undefined *)*puVar7;
        if (puVar4 == (undefined *)0x0) {
          puVar4 = &DAT_00417fe0;
        }
        *(undefined **)(puVar2 + 4) = puVar4;
      }
      uVar6 = uVar6 + 1;
      puVar2 = puVar2 + 8;
    } while (uVar6 <= *param_2 && *param_2 != uVar6);
  }
  return 0;
}


undefined FUN_00411ce0(byte *param_1,ulong *param_2,byte **param_3)

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
LAB_00411d5b:
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
  *(undefined *)(ppbVar3 + 2) = 0;
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
LAB_00411e26:
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
        if (bVar17 != 0x49) goto LAB_00411e88;
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
  if (bVar4 != 0x24) goto LAB_00411e26;
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
      if (9 < (byte)(bVar17 - 0x30)) goto switchD_00412067_caseD_26;
    }
  } while ((byte)(bVar17 - 0x30) < 10);
  if (pbVar11 + -1 < (byte *)0xfffffffffffffffe) {
    param_1 = pbVar18 + 2;
    bVar17 = pbVar18[2];
    pbVar18 = pbVar11 + -1;
    goto LAB_00411e26;
  }
  goto switchD_00412067_caseD_26;
LAB_00411e88:
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
joined_r0x00411f9a:
    uVar8 = local_70;
    local_68 = pbVar12;
    if (bVar17 != 0x2e) goto LAB_00411ea1;
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
      goto LAB_00411ea1;
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
      if (bVar17 != 0x24) goto LAB_00411fdf;
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
          if (9 < bVar17) goto switchD_00412067_caseD_26;
        }
      } while (bVar17 < 10);
      pbVar14 = (byte *)(uVar16 - 1);
      if ((byte *)0xfffffffffffffffd < pbVar14) goto switchD_00412067_caseD_26;
      ppbVar3[8] = pbVar14;
      pbVar11 = pbVar12 + 2;
    }
    else {
LAB_00411fdf:
      pbVar14 = ppbVar3[8];
      if (ppbVar3[8] == (byte *)0xffffffffffffffff) {
        local_68 = pbVar12 + 1;
        ppbVar3[8] = pbVar12;
        pbVar14 = pbVar12;
        if (pbVar12 == (byte *)0xffffffffffffffff) goto switchD_00412067_caseD_26;
      }
    }
    __ptr = (byte **)param_3[1];
    if (pbVar14 < pbVar19) {
      pbVar12 = *param_3;
      __dest_00 = __ptr;
LAB_00411ffe:
      if (pbVar12 <= pbVar14) {
        do {
          pbVar12 = pbVar12 + 1;
          *(undefined *)(__dest_00 + (long)pbVar12 * 4 + -4) = 0;
        } while (pbVar12 <= pbVar14);
        *param_3 = pbVar12;
      }
      iVar6 = *(int *)(__dest_00 + (long)pbVar14 * 4);
      param_1 = pbVar11;
      if (iVar6 == 0) {
        *(undefined *)(__dest_00 + (long)pbVar14 * 4) = 5;
        bVar17 = *pbVar11;
LAB_00411ea1:
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
               (bVar17 != 0x74)) goto code_r0x00412064;
            uVar5 = uVar5 + 8;
          }
          bVar17 = *param_1;
        } while( true );
      }
      if (iVar6 == 5) {
        bVar17 = *pbVar11;
        goto LAB_00411ea1;
      }
      goto LAB_004124ac;
    }
    pbVar19 = (byte *)((long)pbVar19 * 2);
    if (pbVar19 <= pbVar14) {
      pbVar19 = pbVar14 + 1;
    }
    if (pbVar19 < (byte *)0x800000000000000) {
      if (ppbVar2 == __ptr) {
        __dest_00 = (byte **)malloc((long)pbVar19 << 5);
        if (__dest_00 == (byte **)0x0) goto LAB_00412699;
        pbVar12 = *param_3;
        __ptr = ppbVar2;
LAB_0041294b:
        memcpy(__dest_00,__ptr,(long)pbVar12 << 5);
        pbVar12 = *param_3;
      }
      else {
        __dest_00 = (byte **)realloc(__ptr,(long)pbVar19 << 5);
        __ptr = (byte **)param_3[1];
        if (__dest_00 == (byte **)0x0) goto LAB_00412680;
        pbVar12 = *param_3;
        if (ppbVar2 == __ptr) goto LAB_0041294b;
      }
      param_3[1] = (byte *)__dest_00;
      goto LAB_00411ffe;
    }
    goto LAB_00412680;
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
    if (bVar17 != 0x24) goto LAB_00411f2d;
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
        if (9 < bVar17) goto switchD_00412067_caseD_26;
      }
    } while (bVar17 < 10);
    pbVar14 = pbVar14 + -1;
    if ((byte *)0xfffffffffffffffd < pbVar14) goto switchD_00412067_caseD_26;
    ppbVar3[5] = pbVar14;
    pbVar11 = pbVar10 + 2;
  }
  else {
LAB_00411f2d:
    pbVar14 = ppbVar3[5];
    if (ppbVar3[5] == (byte *)0xffffffffffffffff) {
      ppbVar3[5] = local_68;
      bVar21 = local_68 == (byte *)0xffffffffffffffff;
      pbVar14 = local_68;
      local_68 = local_68 + 1;
      if (bVar21) goto switchD_00412067_caseD_26;
    }
  }
  __ptr = (byte **)param_3[1];
  if (pbVar14 < pbVar19) {
    pbVar12 = *param_3;
    __dest_00 = __ptr;
LAB_00411f4c:
    if (pbVar12 <= pbVar14) {
      do {
        pbVar12 = pbVar12 + 1;
        *(undefined *)(__dest_00 + (long)pbVar12 * 4 + -4) = 0;
      } while (pbVar12 <= pbVar14);
      *param_3 = pbVar12;
    }
    iVar6 = *(int *)(__dest_00 + (long)pbVar14 * 4);
    param_1 = pbVar11;
    local_78 = uVar8;
    pbVar12 = local_68;
    if (iVar6 == 0) {
      *(undefined *)(__dest_00 + (long)pbVar14 * 4) = 5;
      bVar17 = *pbVar11;
      pbVar11 = pbVar11 + 1;
    }
    else {
      if (iVar6 != 5) goto LAB_004124ac;
      bVar17 = *pbVar11;
      pbVar11 = pbVar11 + 1;
    }
    goto joined_r0x00411f9a;
  }
  pbVar19 = (byte *)((long)pbVar19 * 2);
  if (pbVar19 <= pbVar14) {
    pbVar19 = pbVar14 + 1;
  }
  if ((byte *)0x7ffffffffffffff < pbVar19) goto LAB_00412680;
  if (ppbVar2 != __ptr) {
    __dest_00 = (byte **)realloc(__ptr,(long)pbVar19 << 5);
    __ptr = (byte **)param_3[1];
    if (__dest_00 != (byte **)0x0) {
      pbVar12 = *param_3;
      if (ppbVar2 == __ptr) goto LAB_00412799;
      goto LAB_0041226d;
    }
    goto LAB_00412680;
  }
  __dest_00 = (byte **)malloc((long)pbVar19 << 5);
  if (__dest_00 != (byte **)0x0) {
    pbVar12 = *param_3;
    __ptr = ppbVar2;
LAB_00412799:
    memcpy(__dest_00,__ptr,(long)pbVar12 << 5);
    pbVar12 = *param_3;
LAB_0041226d:
    param_3[1] = (byte *)__dest_00;
    goto LAB_00411f4c;
  }
  goto LAB_00412699;
code_r0x00412064:
  switch(bVar17) {
  case 0x25:
    goto switchD_00412067_caseD_25;
  default:
    goto switchD_00412067_caseD_26;
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
switchD_00412067_caseD_26:
      __dest_00 = (byte **)param_3[1];
      goto LAB_004124ac;
    }
  }
  else {
    ppbVar3[10] = pbVar18;
  }
  __ptr = (byte **)param_3[1];
  __dest_00 = __ptr;
  if (pbVar18 < pbVar19) {
LAB_00412095:
    pbVar11 = *param_3;
    if (pbVar11 <= pbVar18) {
      do {
        pbVar11 = pbVar11 + 1;
        *(undefined *)(__dest_00 + (long)pbVar11 * 4 + -4) = 0;
      } while (pbVar11 <= pbVar18);
      *param_3 = pbVar11;
    }
    iVar7 = *(int *)(__dest_00 + (long)pbVar18 * 4);
    if (iVar7 == 0) {
      *(int *)(__dest_00 + (long)pbVar18 * 4) = iVar6;
    }
    else if (iVar7 != iVar6) {
LAB_004124ac:
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
switchD_00412067_caseD_25:
    *(byte *)(ppbVar3 + 9) = bVar17;
    uVar8 = *param_2;
    ppbVar3[1] = param_1;
    uVar8 = uVar8 + 1;
    *param_2 = uVar8;
    if (uVar8 < uVar20) {
      __dest = (ulong *)param_2[1];
      goto LAB_00411d5b;
    }
    if (((long)uVar20 < 0) || (0x2e8ba2e8ba2e8ba < uVar20 * 2)) {
LAB_004129d3:
      __ptr = (byte **)param_3[1];
      goto LAB_00412680;
    }
    __ptr_00 = (ulong *)param_2[1];
    if (puVar1 != __ptr_00) {
      __dest = (ulong *)realloc(__ptr_00,uVar20 * 0xb0);
      if (__dest == (ulong *)0x0) goto LAB_004129d3;
      __ptr_00 = (ulong *)param_2[1];
      uVar8 = *param_2;
      if (puVar1 != __ptr_00) goto LAB_0041216f;
LAB_00412294:
      __dest = (ulong *)memcpy(__dest,__ptr_00,uVar8 * 0x58);
      uVar8 = *param_2;
LAB_0041216f:
      param_2[1] = (ulong)__dest;
      uVar20 = uVar20 * 2;
      goto LAB_00411d5b;
    }
    __dest = (ulong *)malloc(uVar20 * 0xb0);
    if (__dest != (ulong *)0x0) goto LAB_00412294;
    __ptr = (byte **)param_3[1];
    if (ppbVar2 == __ptr) goto LAB_004126a9;
  }
  else {
    pbVar19 = (byte *)((long)pbVar19 * 2);
    if (pbVar19 <= pbVar18) {
      pbVar19 = pbVar18 + 1;
    }
    if (pbVar19 < (byte *)0x800000000000000) {
      if (ppbVar2 == __ptr) {
        __dest_00 = (byte **)malloc((long)pbVar19 << 5);
        if (__dest_00 == (byte **)0x0) goto LAB_00412699;
LAB_00412636:
        memcpy(__dest_00,__ptr,(long)*param_3 << 5);
LAB_0041257b:
        param_3[1] = (byte *)__dest_00;
        goto LAB_00412095;
      }
      __dest_00 = (byte **)realloc(__ptr,(long)pbVar19 << 5);
      if (__dest_00 != (byte **)0x0) {
        __ptr = ppbVar2;
        if (ppbVar2 == (byte **)param_3[1]) goto LAB_00412636;
        goto LAB_0041257b;
      }
      goto LAB_004129d3;
    }
LAB_00412680:
    if (ppbVar2 == __ptr) goto LAB_00412699;
  }
  free(__ptr);
LAB_00412699:
  if (puVar1 != (ulong *)param_2[1]) {
    free((ulong *)param_2[1]);
  }
LAB_004126a9:
  piVar9 = __errno_location();
  *piVar9 = 0xc;
  return 0xffffffff;
}


/* WARNING: Removing unreachable block (ram,0x00412a23) */
/* WARNING: Removing unreachable block (ram,0x00412a28) */

void FUN_004129f0(void)

{
  __DT_INIT();
  return;
}


void FUN_00412a50(void)

{
  return;
}


void FUN_00412a60(undefined param_1)

{
  __cxa_atexit(param_1,0,DAT_0061b268);
  return;
}


undefined FUN_00412a78(undefined param_1,undefined param_2,undefined param_3)

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
  FUN_004025c1();
  return;
}

