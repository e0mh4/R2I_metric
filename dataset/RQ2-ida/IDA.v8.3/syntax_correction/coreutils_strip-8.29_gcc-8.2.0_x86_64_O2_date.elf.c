#include "decompile_idapro_ver.h"
#define __int64 long long
#define __int32 int
#define __int16 short
#define __int8 char
#define __attribute__(x)
#define __asm__(x)
__int64 __fastcall main(int a1, char **a2, char **a3)
{
  char *v3; // r15
  int v4; // r14d
  char *v5; // r13
  __int64 v7; // rbp
  const char *v8; // rbx
  int v9; // eax
  const char *v10; // rax
  __int64 v11; // rax
  int v12; // edx
  __int64 v13; // rax
  char *v14; // rdi
  FILE *v15; // r12
  __ssize_t v16; // r14
  char *v17; // rdi
  char *v18; // rax
  __int64 v19; // rbp
  char *v20; // rax
  __int64 v21; // rcx
  unsigned int v22; // eax
  char *v24; // rax
  char v25; // al
  char *v26; // rbp
  int *v27; // rax
  char *v28; // rax
  char *v29; // rax
  const char *v30; // rsi
  __int64 v31; // rbx
  char *v32; // rax
  char *v33; // rax
  const char *v34; // rbx
  int *v35; // rax
  const char *v36; // rbx
  int *v37; // rax
  char *v38; // rax
  const char *v39; // rbx
  int *v40; // rax
  const char *v41; // rsi
  char *v42; // rax
  struct timespec *n; // [rsp+8h] [rbp-110h]
  __int64 v44; // [rsp+10h] [rbp-108h]
  __int64 v45; // [rsp+18h] [rbp-100h]
  char *v46; // [rsp+20h] [rbp-F8h]
  char v47; // [rsp+2Ch] [rbp-ECh]
  char *lineptr; // [rsp+38h] [rbp-E0h] BYREF
  struct timespec tp; // [rsp+40h] [rbp-D8h] BYREF
  struct stat stat_buf; // [rsp+50h] [rbp-C8h] BYREF

  v3 = 0LL;
  v4 = 0;
  v5 = 0LL;
  v7 = (__int64)a2;
  v8 = 0LL;
  sub_409F40(*a2);
  setlocale(6, "");
  bindtextdomain(
    "coreutils",
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
  textdomain("coreutils");
  sub_412A60(sub_403120);
  n = 0LL;
  v44 = 0LL;
  while ( 1 )
  {
    v9 = sub_40D290((unsigned int)a1, a2, "d:f:I::r:Rs:u", &off_4141C0, 0LL);
    if ( v9 == -1 )
      break;
    if ( v9 == 102 )
    {
      v5 = (char *)qword_61B4F0;
    }
    else if ( v9 <= 102 )
    {
      if ( v9 == 73 )
      {
        v11 = 0LL;
        if ( qword_61B4F0 )
          v11 = (unsigned int)dword_4143F0[sub_403040(
                                             "--iso-8601",
                                             qword_61B4F0,
                                             off_414420,
                                             dword_4143F0,
                                             4LL,
                                             off_61B278)];
        v10 = (const char *)(32 * v11 + 4276416);
LABEL_13:
        if ( v8 )
        {
          v33 = dcgettext(0LL, "multiple output formats specified", 5);
          error(1, 0, v33);
          goto LABEL_80;
        }
        v8 = v10;
      }
      else
      {
        if ( v9 <= 73 )
        {
          if ( v9 == -131 )
          {
            sub_40C050(
              (_DWORD)stdout,
              (unsigned int)"date",
              (unsigned int)&unk_412B52,
              (_DWORD)off_61B270,
              (unsigned int)"David MacKenzie",
              0);
            exit(0);
          }
          if ( v9 == -130 )
            sub_402750(0);
LABEL_78:
          sub_402750(1);
        }
        if ( v9 == 82 )
        {
          v10 = "%a, %d %b %Y %H:%M:%S %z";
          goto LABEL_13;
        }
        if ( v9 != 100 )
          goto LABEL_78;
        v3 = (char *)qword_61B4F0;
      }
    }
    else if ( v9 == 117 )
    {
      if ( putenv("TZ=UTC0") )
        sub_40C3E0();
      tzset();
    }
    else if ( v9 > 117 )
    {
      if ( v9 == 128 )
      {
        v10 = (const char *)(32LL
                           * (unsigned int)dword_4143F8[sub_403040(
                                                          "--rfc-3339",
                                                          qword_61B4F0,
                                                          off_414430,
                                                          dword_4143F8,
                                                          4LL,
                                                          off_61B278)]
                           + 4276576);
        goto LABEL_13;
      }
      if ( v9 != 129 )
        goto LABEL_78;
      dword_61B338 |= 1u;
    }
    else if ( v9 == 114 )
    {
      n = (struct timespec *)qword_61B4F0;
    }
    else
    {
      if ( v9 != 115 )
        goto LABEL_78;
      v4 = 1;
      v44 = qword_61B4F0;
    }
  }
  v12 = (n != 0LL) + (v5 != 0LL) + (v3 != 0LL);
  if ( v12 > 1 )
  {
    v41 = "the options to specify dates for printing are mutually exclusive";
    goto LABEL_86;
  }
  if ( ((unsigned __int8)v4 & v12 & 1) != 0 )
  {
    v41 = "the options to print and set the time may not be used together";
LABEL_86:
    v42 = dcgettext(0LL, v41, 5);
    error(0, 0, v42);
    goto LABEL_78;
  }
  v13 = dword_61B2FC;
  if ( dword_61B2FC >= a1 )
    goto LABEL_40;
  if ( dword_61B2FC + 1 < a1 )
    goto LABEL_84;
  v14 = a2[dword_61B2FC];
  if ( *v14 == 43 )
  {
    if ( !v8 )
    {
      ++dword_61B2FC;
      v8 = v14 + 1;
      goto LABEL_40;
    }
    goto LABEL_82;
  }
  if ( (v12 & 1) != 0 || (_BYTE)v4 )
  {
    v30 = "the argument %s lacks a leading '+';\n"
          "when using an option to specify date(s), any non-option\n"
          "argument must be a format string beginning with '+'";
    v31 = sub_40BB60(v14);
    goto LABEL_77;
  }
LABEL_40:
  if ( !v8 )
  {
    v28 = nl_langinfo(131180);
    LOBYTE(v12) = (n != 0LL) + (v5 != 0LL) + (v3 != 0LL);
    v8 = v28;
    if ( !*v28 )
      v8 = "%a %b %e %H:%M:%S %Z %Y";
  }
  v47 = v12;
  v46 = getenv("TZ");
  v45 = sub_40DB40(v46);
  if ( v5 )
  {
    if ( !strcmp(v5, "-") )
    {
      v24 = dcgettext(0LL, "standard input", 5);
      v15 = (FILE *)stdin;
      v5 = v24;
      goto LABEL_44;
    }
    v15 = fopen(v5, "r");
    if ( v15 )
    {
LABEL_44:
      v7 = 1LL;
      lineptr = 0LL;
      tp.tv_sec = 0LL;
      n = &tp;
      while ( 1 )
      {
        v16 = __getdelim(&lineptr, (size_t *)&tp, 10, v15);
        if ( v16 < 0 )
          break;
        if ( (unsigned __int8)sub_407BC0(&stat_buf, lineptr, 0LL, (unsigned int)dword_61B338, v45, v46) )
        {
          v7 = (unsigned int)sub_402620(v8, stat_buf.st_dev, stat_buf.st_ino, v45) & (unsigned int)v7;
        }
        else
        {
          v17 = lineptr;
          v18 = &lineptr[v16 - 1];
          if ( *v18 == 10 )
          {
            *v18 = 0;
            v17 = lineptr;
          }
          v19 = sub_40BB60(v17);
          v20 = dcgettext(0LL, "invalid date %s", 5);
          v21 = v19;
          v7 = 0LL;
          error(0, 0, v20, v21);
        }
      }
      if ( (unsigned int)sub_40C420(v15) != -1 )
      {
        free(lineptr);
        return (unsigned __int8)v7 ^ 1u;
      }
LABEL_80:
      v34 = (const char *)sub_40B9E0(0LL, 3LL, v5);
      v35 = __errno_location();
      error(1, *v35, "%s", v34);
LABEL_81:
      v36 = (const char *)sub_40B9E0(0LL, 3LL, n);
      v37 = __errno_location();
      error(1, *v37, "%s", v36);
LABEL_82:
      v38 = dcgettext(0LL, "multiple output formats specified", 5);
      error(1, 0, v38);
    }
    v39 = (const char *)sub_40B9E0(0LL, 3LL, v5);
    v40 = __errno_location();
    error(1, *v40, "%s", v39);
LABEL_84:
    v30 = "extra operand %s";
    v31 = sub_40BB60(*(_QWORD *)(v7 + 8 * v13 + 8));
LABEL_77:
    v32 = dcgettext(0LL, v30, 5);
    error(0, 0, v32, v31);
    goto LABEL_78;
  }
  v22 = v4 ^ 1;
  LOBYTE(v22) = (v47 ^ 1) & (v4 ^ 1);
  v5 = (char *)v22;
  if ( (_BYTE)v22 )
  {
    if ( dword_61B2FC >= a1 )
    {
      sub_404BC0(&tp);
      goto LABEL_56;
    }
    v3 = a2[dword_61B2FC];
    v25 = sub_409C90(&tp, v3, 7LL);
    tp.tv_nsec = 0LL;
    if ( v25 )
      goto LABEL_61;
    goto LABEL_74;
  }
  if ( !n )
  {
    if ( v44 )
      v3 = (char *)v44;
    if ( (unsigned __int8)sub_407BC0(&tp, v3, 0LL, (unsigned int)dword_61B338, v45, v46) )
      goto LABEL_54;
LABEL_74:
    v8 = (const char *)sub_40BB60(v3);
    v29 = dcgettext(0LL, "invalid date %s", 5);
    error(1, 0, v29, v8);
    goto LABEL_61;
  }
  if ( __xstat(1, (const char *)n, &stat_buf) )
    goto LABEL_81;
  tp = stat_buf.st_mtim;
LABEL_54:
  if ( !(_BYTE)v4 )
  {
LABEL_55:
    LODWORD(v5) = 1;
    goto LABEL_56;
  }
LABEL_61:
  if ( !(unsigned int)sub_40BB80(&tp) )
    goto LABEL_55;
  LODWORD(v5) = 0;
  v26 = dcgettext(0LL, "cannot set date", 5);
  v27 = __errno_location();
  error(0, *v27, v26);
LABEL_56:
  LODWORD(v7) = sub_402620(v8, tp.tv_sec, tp.tv_nsec, v45) & (unsigned int)v5;
  return (unsigned __int8)v7 ^ 1u;
}

// positive sp value has been detected, the output may be wrong!
noreturn void __fastcall  start(__int64 a1, __int64 a2, void (*a3)(void))
{
  __int64 v3; // rax
  int v4; // esi
  __int64 v5; // [rsp-8h] [rbp-8h] BYREF
  char *retaddr; // [rsp+0h] [rbp+0h] BYREF

  v4 = v5;
  v5 = v3;
  _libc_start_main((int (__fastcall *)(int, char **, char **))main, v4, &retaddr, init, fini, a3, &v5);
  __halt();
}

__int64 *sub_40256B()
{
  return &program_invocation_short_name;
}

__int64 sub_40258A()
{
  return 0LL;
}

__int64 *sub_4025C1()
{
  __int64 *result; // rax

  if ( !byte_61B328 )
  {
    while ( qword_61B330 < (unsigned __int64)(&qword_61AE48 - qword_61AE40 - 1) )
      ((void (*)(void))qword_61AE40[++qword_61B330])();
    result = sub_40256B();
    byte_61B328 = 1;
  }
  return result;
}

// attributes: thunk
__int64 sub_402618()
{
  return sub_40258A();
}

__int64 __fastcall sub_402620(const char *a1, __int64 a2, __int64 a3, __int64 a4)
{
  char *IO_write_ptr; // rax
  __int64 v7; // rax
  __int64 v8; // rbx
  char *v9; // rax
  __int64 v10; // [rsp+0h] [rbp-88h] BYREF
  __int64 v11; // [rsp+8h] [rbp-80h]
  char v12[32]; // [rsp+10h] [rbp-78h] BYREF
  char v13[88]; // [rsp+30h] [rbp-58h] BYREF

  v10 = a2;
  v11 = a3;
  if ( sub_40DE20(a4, &v10, v13) )
  {
    if ( a1 == "%a, %d %b %Y %H:%M:%S %z" )
    {
      setlocale(2, "C");
      sub_404BA0(stdout, "%a, %d %b %Y %H:%M:%S %z", v13, a4, (unsigned int)v11);
      setlocale(2, "");
    }
    else
    {
      sub_404BA0(stdout, a1, v13, a4, (unsigned int)v11);
    }
    IO_write_ptr = stdout->_IO_write_ptr;
    if ( IO_write_ptr >= stdout->_IO_write_end )
    {
      __overflow(stdout, 10);
    }
    else
    {
      stdout->_IO_write_ptr = IO_write_ptr + 1;
      *IO_write_ptr = 10;
    }
    return 1LL;
  }
  else
  {
    v7 = sub_404C00(v10, v12);
    v8 = sub_40BB60(v7);
    v9 = dcgettext(0LL, "time %s is out of range", 5);
    error(0, 0, v9, v8);
    return 0LL;
  }
}

noreturn void __fastcall  sub_402750(int status)
{
  __int64 v1; // rbp
  char *v2; // rax
  char *v3; // rax
  FILE *v4; // rbp
  char *v5; // rax
  FILE *v6; // rbp
  char *v7; // rax
  FILE *v8; // rbp
  char *v9; // rax
  FILE *v10; // rbp
  char *v11; // rax
  FILE *v12; // rbp
  char *v13; // rax
  FILE *v14; // rbp
  char *v15; // rax
  FILE *v16; // rbp
  char *v17; // rax
  FILE *v18; // rbp
  char *v19; // rax
  FILE *v20; // rbp
  char *v21; // rax
  FILE *v22; // rbp
  char *v23; // rax
  FILE *v24; // rbp
  char *v25; // rax
  FILE *v26; // rbp
  char *v27; // rax
  FILE *v28; // rbp
  char *v29; // rax
  FILE *v30; // rbp
  char *v31; // rax
  FILE *v32; // rbp
  char *v33; // rax
  FILE *v34; // rbp
  char *v35; // rax
  FILE *v36; // rbp
  char *v37; // rax
  FILE *v38; // rbp
  char *v39; // rax
  FILE *v40; // rbp
  char *v41; // rax
  FILE *v42; // rbp
  char *v43; // rax
  FILE *v44; // rbp
  char *v45; // rax
  FILE *v46; // rbp
  char *v47; // rax
  FILE *v48; // rbp
  char *v49; // rax
  FILE *v50; // rbp
  char *v51; // rax
  FILE *v52; // rbp
  char *v53; // rax
  FILE *v54; // rbp
  char *v55; // rax
  __int64 *v56; // rax
  char *v57; // rbp
  char *v58; // rax
  char *v59; // rax
  const char *v60; // r12
  char *v61; // rax
  char *v62; // rax
  char *v63; // rax
  char *v64; // rax
  char *v65; // rax
  char *v66; // rax
  __int64 v67; // rcx
  __int64 v68[17]; // [rsp+0h] [rbp-88h] BYREF

  v1 = qword_61B350;
  if ( status )
  {
    v2 = dcgettext(0LL, "Try '%s --help' for more information.\n", 5);
    __fprintf_chk(stderr, 1LL, v2, v1);
    goto LABEL_3;
  }
  v3 = dcgettext(0LL, "Usage: %s [OPTION]... [+FORMAT]\n  or:  %s [-u|--utc|--universal] [MMDDhhmm[[CC]YY][.ss]]\n", 5);
  __printf_chk(1LL, v3, v1, v1);
  v4 = stdout;
  v5 = dcgettext(0LL, "Display the current time in the given FORMAT, or set the system date.\n", 5);
  fputs_unlocked(v5, v4);
  v6 = stdout;
  v7 = dcgettext(0LL, "\nMandatory arguments to long options are mandatory for short options too.\n", 5);
  fputs_unlocked(v7, v6);
  v8 = stdout;
  v9 = dcgettext(0LL, "  -d, --date=STRING          display time described by STRING, not 'now'\n", 5);
  fputs_unlocked(v9, v8);
  v10 = stdout;
  v11 = dcgettext(
          0LL,
          "      --debug                annotate the parsed date,\n"
          "                              and warn about questionable usage to stderr\n",
          5);
  fputs_unlocked(v11, v10);
  v12 = stdout;
  v13 = dcgettext(0LL, "  -f, --file=DATEFILE        like --date; once for each line of DATEFILE\n", 5);
  fputs_unlocked(v13, v12);
  v14 = stdout;
  v15 = dcgettext(
          0LL,
          "  -I[FMT], --iso-8601[=FMT]  output date/time in ISO 8601 format.\n"
          "                               FMT='date' for date only (the default),\n"
          "                               'hours', 'minutes', 'seconds', or 'ns'\n"
          "                               for date and time to the indicated precision.\n"
          "                               Example: 2006-08-14T02:34:56-06:00\n",
          5);
  fputs_unlocked(v15, v14);
  v16 = stdout;
  v17 = dcgettext(
          0LL,
          "  -R, --rfc-email            output date and time in RFC 5322 format.\n"
          "                               Example: Mon, 14 Aug 2006 02:34:56 -0600\n",
          5);
  fputs_unlocked(v17, v16);
  v18 = stdout;
  v19 = dcgettext(
          0LL,
          "      --rfc-3339=FMT         output date/time in RFC 3339 format.\n"
          "                               FMT='date', 'seconds', or 'ns'\n"
          "                               for date and time to the indicated precision.\n"
          "                               Example: 2006-08-14 02:34:56-06:00\n",
          5);
  fputs_unlocked(v19, v18);
  v20 = stdout;
  v21 = dcgettext(0LL, "  -r, --reference=FILE       display the last modification time of FILE\n", 5);
  fputs_unlocked(v21, v20);
  v22 = stdout;
  v23 = dcgettext(
          0LL,
          "  -s, --set=STRING           set time described by STRING\n"
          "  -u, --utc, --universal     print or set Coordinated Universal Time (UTC)\n",
          5);
  fputs_unlocked(v23, v22);
  v24 = stdout;
  v25 = dcgettext(0LL, "      --help     display this help and exit\n", 5);
  fputs_unlocked(v25, v24);
  v26 = stdout;
  v27 = dcgettext(0LL, "      --version  output version information and exit\n", 5);
  fputs_unlocked(v27, v26);
  v28 = stdout;
  v29 = dcgettext(
          0LL,
          "\n"
          "FORMAT controls the output.  Interpreted sequences are:\n"
          "\n"
          "  %%   a literal %\n"
          "  %a   locale's abbreviated weekday name (e.g., Sun)\n",
          5);
  fputs_unlocked(v29, v28);
  v30 = stdout;
  v31 = dcgettext(
          0LL,
          "  %A   locale's full weekday name (e.g., Sunday)\n"
          "  %b   locale's abbreviated month name (e.g., Jan)\n"
          "  %B   locale's full month name (e.g., January)\n"
          "  %c   locale's date and time (e.g., Thu Mar  3 23:05:25 2005)\n",
          5);
  fputs_unlocked(v31, v30);
  v32 = stdout;
  v33 = dcgettext(
          0LL,
          "  %C   century; like %Y, except omit last two digits (e.g., 20)\n"
          "  %d   day of month (e.g., 01)\n"
          "  %D   date; same as %m/%d/%y\n"
          "  %e   day of month, space padded; same as %_d\n",
          5);
  fputs_unlocked(v33, v32);
  v34 = stdout;
  v35 = dcgettext(
          0LL,
          "  %F   full date; same as %Y-%m-%d\n"
          "  %g   last two digits of year of ISO week number (see %G)\n"
          "  %G   year of ISO week number (see %V); normally useful only with %V\n",
          5);
  fputs_unlocked(v35, v34);
  v36 = stdout;
  v37 = dcgettext(
          0LL,
          "  %h   same as %b\n  %H   hour (00..23)\n  %I   hour (01..12)\n  %j   day of year (001..366)\n",
          5);
  fputs_unlocked(v37, v36);
  v38 = stdout;
  v39 = dcgettext(
          0LL,
          "  %k   hour, space padded ( 0..23); same as %_H\n"
          "  %l   hour, space padded ( 1..12); same as %_I\n"
          "  %m   month (01..12)\n"
          "  %M   minute (00..59)\n",
          5);
  fputs_unlocked(v39, v38);
  v40 = stdout;
  v41 = dcgettext(
          0LL,
          "  %n   a newline\n"
          "  %N   nanoseconds (000000000..999999999)\n"
          "  %p   locale's equivalent of either AM or PM; blank if not known\n"
          "  %P   like %p, but lower case\n"
          "  %q   quarter of year (1..4)\n"
          "  %r   locale's 12-hour clock time (e.g., 11:11:04 PM)\n"
          "  %R   24-hour hour and minute; same as %H:%M\n"
          "  %s   seconds since 1970-01-01 00:00:00 UTC\n",
          5);
  fputs_unlocked(v41, v40);
  v42 = stdout;
  v43 = dcgettext(
          0LL,
          "  %S   second (00..60)\n"
          "  %t   a tab\n"
          "  %T   time; same as %H:%M:%S\n"
          "  %u   day of week (1..7); 1 is Monday\n",
          5);
  fputs_unlocked(v43, v42);
  v44 = stdout;
  v45 = dcgettext(
          0LL,
          "  %U   week number of year, with Sunday as first day of week (00..53)\n"
          "  %V   ISO week number, with Monday as first day of week (01..53)\n"
          "  %w   day of week (0..6); 0 is Sunday\n"
          "  %W   week number of year, with Monday as first day of week (00..53)\n",
          5);
  fputs_unlocked(v45, v44);
  v46 = stdout;
  v47 = dcgettext(
          0LL,
          "  %x   locale's date representation (e.g., 12/31/99)\n"
          "  %X   locale's time representation (e.g., 23:13:48)\n"
          "  %y   last two digits of year (00..99)\n"
          "  %Y   year\n",
          5);
  fputs_unlocked(v47, v46);
  v48 = stdout;
  v49 = dcgettext(
          0LL,
          "  %z   +hhmm numeric time zone (e.g., -0400)\n"
          "  %:z  +hh:mm numeric time zone (e.g., -04:00)\n"
          "  %::z  +hh:mm:ss numeric time zone (e.g., -04:00:00)\n"
          "  %:::z  numeric time zone with : to necessary precision (e.g., -04, +05:30)\n"
          "  %Z   alphabetic time zone abbreviation (e.g., EDT)\n"
          "\n"
          "By default, date pads numeric fields with zeroes.\n",
          5);
  fputs_unlocked(v49, v48);
  v50 = stdout;
  v51 = dcgettext(
          0LL,
          "The following optional flags may follow '%':\n"
          "\n"
          "  -  (hyphen) do not pad the field\n"
          "  _  (underscore) pad with spaces\n"
          "  0  (zero) pad with zeros\n"
          "  ^  use upper case if possible\n"
          "  #  use opposite case if possible\n",
          5);
  fputs_unlocked(v51, v50);
  v52 = stdout;
  v53 = dcgettext(
          0LL,
          "\n"
          "After any flags comes an optional field width, as a decimal number;\n"
          "then an optional modifier, which is either\n"
          "E to use the locale's alternate representations if available, or\n"
          "O to use the locale's alternate numeric symbols if available.\n",
          5);
  fputs_unlocked(v53, v52);
  v54 = stdout;
  v55 = dcgettext(
          0LL,
          "\n"
          "Examples:\n"
          "Convert seconds since the epoch (1970-01-01 UTC) to a date\n"
          "  $ date --date='@2147483647'\n"
          "\n"
          "Show the time on the west coast of the US (use tzselect(1) to find TZ)\n"
          "  $ TZ='America/Los_Angeles' date\n"
          "\n"
          "Show the local time for 9AM next Friday on the west coast of the US\n"
          "  $ date --date='TZ=\"America/Los_Angeles\" 09:00 next Fri'\n",
          5);
  fputs_unlocked(v55, v54);
  v68[0] = (__int64)"[";
  v56 = v68;
  v68[1] = (__int64)"test invocation";
  v68[2] = (__int64)"coreutils";
  v68[3] = (__int64)"Multi-call invocation";
  v68[4] = (__int64)"sha224sum";
  v68[5] = (__int64)"sha2 utilities";
  v68[6] = (__int64)"sha256sum";
  v68[7] = (__int64)"sha2 utilities";
  v68[8] = (__int64)"sha384sum";
  v68[9] = (__int64)"sha2 utilities";
  v68[10] = (__int64)"sha512sum";
  v68[11] = (__int64)"sha2 utilities";
  v68[12] = 0LL;
  v68[13] = 0LL;
  do
    v56 += 2;
  while ( *v56 && strcmp("date", (const char *)*v56) );
  v57 = (char *)v56[1];
  if ( v57 )
  {
    v58 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v58, &unk_412B52, "https://www.gnu.org/software/coreutils/");
    v59 = setlocale(5, 0LL);
    if ( !v59 || !strncmp(v59, "en_", 3uLL) )
      goto LABEL_10;
  }
  else
  {
    v63 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v63, &unk_412B52, "https://www.gnu.org/software/coreutils/");
    v64 = setlocale(5, 0LL);
    if ( !v64 || !strncmp(v64, "en_", 3uLL) )
    {
      v57 = "date";
      v65 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
      v60 = "Multi-call invocation" + 10;
      __printf_chk(1LL, v65, "https://www.gnu.org/software/coreutils/", "date");
LABEL_12:
      v62 = dcgettext(0LL, "or available locally via: info '(coreutils) %s%s'\n", 5);
      __printf_chk(1LL, v62, v57, v60);
LABEL_3:
      exit(status);
    }
    v57 = "date";
  }
  v66 = dcgettext(0LL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5);
  __printf_chk(1LL, v66, "date", v67);
LABEL_10:
  v60 = "Multi-call invocation" + 10;
  v61 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
  __printf_chk(1LL, v61, "https://www.gnu.org/software/coreutils/", "date");
  if ( v57 != "date" )
    v60 = "";
  goto LABEL_12;
}

noreturn void  sub_402D70()
{
  sub_402750(1);
}

__int64 __fastcall sub_402D80(const char *a1, const char **a2, char *a3, size_t a4)
{
  char *v5; // rbp
  size_t v6; // rax
  const char *v7; // r14
  size_t v8; // r12
  __int64 v9; // rbx
  bool v10; // zf
  char v11; // al
  __int64 v12; // rax
  __int64 v14; // [rsp+0h] [rbp-58h]
  char v15; // [rsp+17h] [rbp-41h]

  v5 = a3;
  v6 = strlen(a1);
  v7 = *a2;
  v14 = -1LL;
  if ( !*a2 )
    return v14;
  v8 = v6;
  v15 = 0;
  v9 = 0LL;
  do
  {
    while ( strncmp(v7, a1, v8) )
    {
LABEL_7:
      ++v9;
      v5 += a4;
      v7 = a2[v9];
      if ( !v7 )
        goto LABEL_12;
    }
    if ( strlen(v7) == v8 )
      return v9;
    if ( v14 != -1 )
    {
      if ( a3 )
      {
        v10 = memcmp(&a3[a4 * v14], v5, a4) == 0;
        v11 = v15;
        if ( !v10 )
          v11 = 1;
        v15 = v11;
      }
      else
      {
        v15 = 1;
      }
      goto LABEL_7;
    }
    v14 = v9++;
    v5 += a4;
    v7 = a2[v9];
  }
  while ( v7 );
LABEL_12:
  v12 = -2LL;
  if ( !v15 )
    return v14;
  return v12;
}

void __fastcall sub_402EA0(__int64 a1, __int64 a2, __int64 a3)
{
  char *v3; // rbx
  __int64 v4; // rbp
  __int64 v5; // rax

  if ( a3 == -1 )
    v3 = dcgettext(0LL, "invalid argument %s for %s", 5);
  else
    v3 = dcgettext(0LL, "ambiguous argument %s for %s", 5);
  v4 = sub_40BB40(1LL, a1);
  v5 = sub_40B830(0LL, 8LL, a2);
  error(0, 0, v3, v5, v4);
}

int __fastcall sub_402F20(__int64 *a1, char *a2, size_t a3)
{
  const void *v3; // r14
  FILE *v6; // rbx
  char *v7; // rax
  FILE *v8; // rsi
  __int64 v9; // rbx
  __int64 i; // r12
  const char *v11; // rax
  const char *v12; // rax
  char *IO_write_ptr; // rax

  v3 = 0LL;
  v6 = stderr;
  v7 = dcgettext(0LL, "Valid arguments are:", 5);
  v8 = v6;
  v9 = 0LL;
  fputs_unlocked(v7, v8);
  for ( i = *a1; i; i = a1[v9] )
  {
    while ( !v9 || memcmp(v3, a2, a3) )
    {
      ++v9;
      v3 = a2;
      a2 += a3;
      v11 = (const char *)sub_40BB60(i);
      __fprintf_chk(stderr, 1LL, "\n  - %s", v11);
      i = a1[v9];
      if ( !i )
        goto LABEL_7;
    }
    ++v9;
    a2 += a3;
    v12 = (const char *)sub_40BB60(i);
    __fprintf_chk(stderr, 1LL, ", %s", v12);
  }
LABEL_7:
  IO_write_ptr = stderr->_IO_write_ptr;
  if ( IO_write_ptr >= stderr->_IO_write_end )
  {
    LODWORD(IO_write_ptr) = __overflow(stderr, 10);
  }
  else
  {
    stderr->_IO_write_ptr = IO_write_ptr + 1;
    *IO_write_ptr = 10;
  }
  return (int)IO_write_ptr;
}

__int64 __fastcall sub_403040(__int64 a1, const char *a2, const char **a3, char *a4, size_t a5, void (*a6)(void))
{
  __int64 result; // rax

  result = sub_402D80(a2, a3, a4, a5);
  if ( result < 0 )
  {
    sub_402EA0(a1, (__int64)a2, result);
    sub_402F20((__int64 *)a3, a4, a5);
    a6();
    return -1LL;
  }
  return result;
}

__int64 __fastcall sub_4030B0(void *s1, __int64 *a2, char *a3, size_t a4)
{
  __int64 v4; // r14
  __int64 *v6; // rbx

  v4 = *a2;
  if ( *a2 )
  {
    v6 = a2 + 1;
    do
    {
      if ( !memcmp(s1, a3, a4) )
        break;
      v4 = *v6;
      a3 += a4;
      ++v6;
    }
    while ( v4 );
  }
  return v4;
}

__int64 sub_403120()
{
  int *v0; // rax
  int *v1; // rbx
  __int64 result; // rax
  char *v3; // rax
  const char *v4; // rbp
  const char *v5; // rax

  if ( (unsigned int)sub_40E0D0(stdout) )
  {
    v0 = __errno_location();
    v1 = v0;
    if ( !byte_61B340 || *v0 != 32 )
    {
      v3 = dcgettext(0LL, "write error", 5);
      v4 = v3;
      if ( qword_61B348 )
      {
        v5 = (const char *)sub_40B9B0();
        error(0, *v1, "%s: %s", v5, v4);
      }
      else
      {
        error(0, *v1, "%s", v3);
      }
LABEL_8:
      _exit(status);
    }
  }
  result = sub_40E0D0(stderr);
  if ( (_DWORD)result )
    goto LABEL_8;
  return result;
}

void __fastcall sub_4031C0(FILE *stream, unsigned __int8 *a2, __int64 a3)
{
  unsigned __int8 *v3; // rbx
  unsigned __int8 *v4; // rbp
  const __int32_t **v5; // r13
  __int64 v6; // rcx

  if ( a3 )
  {
    v3 = a2;
    v4 = &a2[a3];
    v5 = __ctype_tolower_loc();
    do
    {
      v6 = *v3++;
      fputc((*v5)[v6], stream);
    }
    while ( v3 != v4 );
  }
}

void __fastcall sub_403220(FILE *stream, unsigned __int8 *a2, __int64 a3)
{
  unsigned __int8 *v3; // rbx
  unsigned __int8 *v4; // rbp
  const __int32_t **v5; // r13
  __int64 v6; // rcx

  if ( a3 )
  {
    v3 = a2;
    v4 = &a2[a3];
    v5 = __ctype_toupper_loc();
    do
    {
      v6 = *v3++;
      fputc((*v5)[v6], stream);
    }
    while ( v3 != v4 );
  }
}

unsigned __int64 __fastcall sub_403280(
        FILE *stream,
        unsigned __int8 *a2,
        __int64 a3,
        char a4,
        int a5,
        __int64 a6,
        int a7)
{
  unsigned __int8 *v8; // rbx
  const char *v9; // r13
  int v10; // ebp
  int v11; // edi
  unsigned __int64 v12; // r12
  char *v13; // rbp
  char v15; // bp
  int v16; // r11d
  int v17; // eax
  char v18; // cl
  int v19; // edi
  bool v20; // cc
  int v21; // r10d
  int v22; // r15d
  unsigned int v23; // edx
  int v24; // esi
  char v25; // al
  int *v26; // rax
  size_t v27; // rax
  int v28; // r10d
  size_t v29; // rbx
  size_t v30; // rax
  unsigned __int64 v31; // rsi
  size_t v32; // r15
  __int64 v33; // r13
  int v34; // r9d
  unsigned int v35; // esi
  int v36; // edi
  char v37; // bp
  unsigned int v38; // r8d
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rdx
  unsigned __int64 v41; // rbp
  unsigned __int64 v42; // r13
  __int64 v43; // r15
  __int64 v44; // r15
  __int64 v45; // r13
  char v46; // cl
  unsigned __int8 *v47; // r15
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // rdx
  __int64 v50; // r13
  unsigned __int64 v51; // r13
  unsigned __int64 v52; // rax
  __int64 v53; // rbp
  unsigned __int64 v54; // rbx
  unsigned __int64 v55; // rsi
  __int64 v56; // r15
  __int64 v57; // rbp
  int v58; // edi
  int v59; // edx
  int v60; // esi
  char *v61; // rcx
  char *v62; // r13
  unsigned __int8 *v63; // rax
  char *v64; // r15
  unsigned __int64 v65; // rax
  int v66; // edx
  unsigned __int64 v67; // rcx
  __int64 v68; // rbp
  unsigned __int64 v69; // rdx
  char v70; // dl
  size_t v71; // rax
  __int64 v72; // r10
  size_t v73; // r13
  size_t v74; // rax
  unsigned __int64 v75; // rdx
  int v76; // r11d
  __int64 v77; // rbp
  char v78; // al
  unsigned __int8 *v79; // rax
  int v80; // ebp
  unsigned __int64 v81; // rsi
  __int64 i; // r13
  __int64 v83; // rsi
  int v84; // eax
  int v85; // esi
  __m128i v86; // xmm4
  __m128i v87; // xmm2
  __int64 v88; // rax
  __int64 v89; // rax
  __int64 v90; // rsi
  __int64 v91; // rcx
  int v92; // edx
  unsigned __int8 v93; // al
  unsigned __int8 v94; // dl
  int v95; // r9d
  unsigned __int64 v96; // rsi
  __int64 v97; // rax
  __int64 v98; // rbp
  __int64 v99; // rbx
  int v100; // ebp
  __int32 v101; // esi
  __int32 v102; // r13d
  int v103; // r9d
  int v104; // r8d
  int v105; // eax
  int v106; // r13d
  int v107; // r13d
  int v108; // edi
  char v109; // al
  char v110; // dl
  __int64 v111; // r15
  __int64 v112; // r13
  int v113; // esi
  int v114; // esi
  char v115; // al
  char *v116; // rdx
  unsigned __int64 v117; // r15
  __int64 n; // r13
  unsigned __int64 v119; // rcx
  __int64 v120; // rbp
  int v121; // eax
  unsigned __int64 v122; // rbp
  unsigned __int64 v123; // rbp
  __int64 v124; // rbx
  __int64 v125; // rbp
  unsigned __int64 v126; // rbx
  __int64 v127; // rbp
  unsigned __int8 *v128; // rax
  unsigned __int64 v129; // rbx
  unsigned __int8 *v130; // r15
  __int64 j; // r15
  int v132; // r9d
  int v133; // edx
  __int32 v134; // esi
  __int32 v135; // edi
  int k; // edi
  __int64 v137; // rbp
  __int64 v138; // rbx
  unsigned __int64 v139; // rbp
  __int64 v140; // rbx
  __int64 v141; // rbx
  __int64 v142; // rbx
  unsigned __int64 v143; // r15
  __int64 m; // r15
  int v145; // [rsp-8h] [rbp-4E0h]
  int v146; // [rsp+0h] [rbp-4D8h]
  char v147; // [rsp+4h] [rbp-4D4h]
  char v148; // [rsp+4h] [rbp-4D4h]
  const __m128i *tp; // [rsp+8h] [rbp-4D0h]
  int *v150; // [rsp+10h] [rbp-4C8h]
  __int64 v151; // [rsp+18h] [rbp-4C0h]
  int v152; // [rsp+20h] [rbp-4B8h]
  char *v153; // [rsp+28h] [rbp-4B0h]
  int v154; // [rsp+30h] [rbp-4A8h]
  unsigned __int64 v155; // [rsp+30h] [rbp-4A8h]
  const char *v156; // [rsp+30h] [rbp-4A8h]
  int v157; // [rsp+30h] [rbp-4A8h]
  int v158; // [rsp+30h] [rbp-4A8h]
  int v159; // [rsp+30h] [rbp-4A8h]
  int v160; // [rsp+30h] [rbp-4A8h]
  char *v161; // [rsp+30h] [rbp-4A8h]
  int v162; // [rsp+38h] [rbp-4A0h]
  int v163; // [rsp+40h] [rbp-498h]
  int v164; // [rsp+44h] [rbp-494h]
  __int64 v165; // [rsp+48h] [rbp-490h]
  char v166; // [rsp+48h] [rbp-490h]
  signed int v167; // [rsp+48h] [rbp-490h]
  int v168; // [rsp+48h] [rbp-490h]
  int v169; // [rsp+48h] [rbp-490h]
  char v170; // [rsp+48h] [rbp-490h]
  char v171; // [rsp+48h] [rbp-490h]
  __int64 v172; // [rsp+48h] [rbp-490h]
  int v173; // [rsp+48h] [rbp-490h]
  __int64 v174; // [rsp+48h] [rbp-490h]
  int v175; // [rsp+50h] [rbp-488h]
  int v176; // [rsp+50h] [rbp-488h]
  char v177; // [rsp+50h] [rbp-488h]
  char v178; // [rsp+50h] [rbp-488h]
  int v179; // [rsp+50h] [rbp-488h]
  int v180; // [rsp+50h] [rbp-488h]
  int v181; // [rsp+50h] [rbp-488h]
  unsigned __int64 v182; // [rsp+58h] [rbp-480h]
  unsigned __int64 v183; // [rsp+58h] [rbp-480h]
  __int64 v184; // [rsp+58h] [rbp-480h]
  int v185; // [rsp+58h] [rbp-480h]
  unsigned __int64 v186; // [rsp+58h] [rbp-480h]
  int v187; // [rsp+58h] [rbp-480h]
  int v188; // [rsp+58h] [rbp-480h]
  unsigned __int64 v189; // [rsp+58h] [rbp-480h]
  int v190; // [rsp+58h] [rbp-480h]
  __int64 v191; // [rsp+60h] [rbp-478h]
  int v192; // [rsp+60h] [rbp-478h]
  int v193; // [rsp+60h] [rbp-478h]
  int v194; // [rsp+60h] [rbp-478h]
  unsigned __int8 *v195; // [rsp+60h] [rbp-478h]
  unsigned __int8 *v196; // [rsp+60h] [rbp-478h]
  int v197; // [rsp+68h] [rbp-470h]
  int v198; // [rsp+68h] [rbp-470h]
  unsigned __int64 v199; // [rsp+68h] [rbp-470h]
  int v200; // [rsp+68h] [rbp-470h]
  unsigned __int8 *v201; // [rsp+68h] [rbp-470h]
  unsigned __int64 v202; // [rsp+70h] [rbp-468h]
  unsigned __int8 *v203; // [rsp+70h] [rbp-468h]
  char format[2]; // [rsp+80h] [rbp-458h] BYREF
  char v205; // [rsp+82h] [rbp-456h] BYREF
  int v206; // [rsp+83h] [rbp-455h] BYREF
  char v207[9]; // [rsp+97h] [rbp-441h] BYREF
  char s[16]; // [rsp+A0h] [rbp-438h] BYREF
  __m128i v209; // [rsp+B0h] [rbp-428h]
  __m128i v210; // [rsp+C0h] [rbp-418h]
  __int64 v211; // [rsp+D0h] [rbp-408h]

  v8 = a2;
  v9 = *(const char **)(a3 + 48);
  v10 = *(_DWORD *)(a3 + 8);
  tp = (const __m128i *)a3;
  v152 = a5;
  v151 = a6;
  if ( !v9 )
    v9 = "";
  HIBYTE(v163) = a4;
  if ( v10 <= 12 )
  {
    if ( !v10 )
      v10 = 12;
  }
  else
  {
    v10 -= 12;
  }
  v11 = (char)*a2;
  v12 = 0LL;
  if ( !*a2 )
    return v12;
  v164 = v10;
  v150 = (int *)&v205;
  v153 = (char *)v9;
  while ( 2 )
  {
    if ( (_BYTE)v11 != 37 )
    {
      if ( v12 > 0xFFFFFFFFFFFFFFFDLL )
        return 0LL;
      if ( stream )
        fputc(v11, stream);
      ++v12;
      v13 = (char *)v8;
      goto LABEL_12;
    }
    v15 = 0;
    v16 = 0;
    v147 = HIBYTE(v163);
    while ( 2 )
    {
      while ( 2 )
      {
        while ( 1 )
        {
          v17 = (char)*++v8;
          v18 = *v8;
          v19 = v17;
          v20 = (char)*v8 <= 48;
          if ( *v8 != 48 )
            break;
LABEL_25:
          v16 = v17;
        }
        while ( v20 )
        {
          if ( (_BYTE)v17 != 35 )
          {
            if ( (_BYTE)v17 == 45 )
              goto LABEL_25;
            goto LABEL_27;
          }
          v17 = (char)*++v8;
          v15 = 1;
          v18 = *v8;
          v19 = v17;
          v20 = (char)*v8 <= 48;
          if ( *v8 == 48 )
            goto LABEL_25;
        }
        if ( (_BYTE)v17 == 94 )
        {
          v147 = 1;
          continue;
        }
        break;
      }
      if ( (_BYTE)v17 == 95 )
      {
        v16 = v17;
        continue;
      }
      break;
    }
LABEL_27:
    v21 = -1;
    if ( (unsigned int)(v17 - 48) > 9 )
      goto LABEL_28;
    v21 = 0;
    while ( 1 )
    {
      v17 = (char)v8[1];
      v18 = v8[1];
      v23 = v17 - 48;
      if ( v21 > 214748364 )
        break;
      v24 = (char)*v8;
      if ( v21 == 214748364 && (char)v24 > 55 )
        break;
      ++v8;
      v21 = v24 + 10 * v21 - 48;
LABEL_40:
      if ( v23 > 9 )
      {
        v19 = v17;
        goto LABEL_28;
      }
    }
    if ( v23 <= 9 )
    {
      v17 = (char)v8[2];
      v21 = 0x7FFFFFFF;
      v8 += 2;
      v18 = v17;
      v23 = v17 - 48;
      goto LABEL_40;
    }
    v19 = (char)*++v8;
    v21 = 0x7FFFFFFF;
LABEL_28:
    if ( v18 == 69 || (v22 = 0, v18 == 79) )
    {
      v19 = (char)v8[1];
      v22 = v17;
      ++v8;
      v18 = v19;
    }
    switch ( v18 )
    {
      case 0:
        v46 = *(v8 - 1);
        v47 = v8 - 1;
        goto LABEL_108;
      case 37:
        LODWORD(v48) = 0;
        if ( v21 >= 0 )
          LODWORD(v48) = v21;
        v55 = 1LL;
        v49 = ~v12;
        v48 = (int)v48;
        if ( (_DWORD)v48 )
          v55 = (int)v48;
        v155 = v55;
        if ( !v22 )
        {
          if ( v49 > v55 )
          {
            if ( stream )
            {
              if ( v21 > 1 )
              {
                v56 = 0LL;
                v57 = v21 - 1LL;
                if ( v16 == 48 )
                {
                  do
                  {
                    ++v56;
                    fputc(48, stream);
                  }
                  while ( v57 != v56 );
                }
                else
                {
                  do
                  {
                    ++v56;
                    fputc(32, stream);
                  }
                  while ( v57 != v56 );
                }
                v19 = (char)*v8;
              }
              fputc(v19, stream);
            }
LABEL_136:
            v12 += v155;
            v13 = (char *)v8;
            goto LABEL_12;
          }
          return 0LL;
        }
        v13 = (char *)v8;
        v47 = v8;
        v51 = 1LL;
        goto LABEL_114;
      case 58:
        v115 = v8[1];
        v116 = (char *)(v8 + 1);
        for ( i = 1LL; v115 == 58; v116 = (char *)&v8[i] )
          v115 = v8[++i];
        if ( v115 != 122 )
          goto LABEL_211;
        v8 = (unsigned __int8 *)v116;
        goto LABEL_219;
      case 65:
      case 66:
      case 97:
        if ( v22 )
          goto LABEL_211;
        v25 = v147;
        if ( v15 )
          v25 = v15;
        v147 = v25;
LABEL_49:
        v166 = 0;
        v13 = (char *)v8;
        v22 = 0;
        *(_WORD *)format = 9504;
        v26 = v150;
        goto LABEL_50;
      case 67:
        if ( v22 == 69 )
          goto LABEL_375;
        v34 = 2;
        LOBYTE(v38) = tp[1].m128i_i32[1] < -1900;
        v35 = tp[1].m128i_i32[1] / 100
            + 19
            - ((tp[1].m128i_i32[1] / 100 + 19 > 0) & ((unsigned int)(tp[1].m128i_i32[1] % 100) >> 31));
        v36 = 0;
        v37 = 0;
        goto LABEL_73;
      case 68:
        if ( v22 )
          goto LABEL_211;
        v156 = "%m/%d/%y";
        goto LABEL_83;
      case 70:
        if ( v22 )
          goto LABEL_211;
        v156 = "%Y-%m-%d";
LABEL_83:
        LODWORD(v165) = v21;
        v176 = v16;
        v39 = sub_403280(0LL, a7, v145, v146, (int)tp, (int)v150, v151, v152, (int)v153, (int)v156, v162, v163, v165);
        v40 = 0LL;
        if ( (int)v165 >= 0 )
          v40 = (int)v165;
        v41 = v40;
        if ( v39 >= v40 )
          v41 = v39;
        if ( ~v12 <= v41 )
          return 0LL;
        if ( stream )
        {
          if ( v39 < v40 )
          {
            v42 = (int)v165 - v39;
            if ( v176 == 48 )
            {
              if ( v42 )
              {
                for ( j = 0LL; j != v42; ++j )
                  fputc(48, stream);
              }
            }
            else
            {
              v43 = 0LL;
              if ( v42 )
              {
                do
                {
                  ++v43;
                  fputc(32, stream);
                }
                while ( v42 != v43 );
              }
            }
          }
          sub_403280(stream, a7, v145, v146, (int)tp, (int)v150, v151, v152, (int)v153, v157, v162, v163, v165);
        }
        goto LABEL_94;
      case 71:
      case 86:
      case 103:
        if ( v22 == 69 )
          goto LABEL_211;
        v100 = tp[1].m128i_i32[1];
        v101 = tp[1].m128i_i32[3];
        v102 = tp[1].m128i_i32[2];
        v103 = v100 + ((v100 >> 31) & 0x190) - 100;
        v104 = v102 - 382 + 7 * ((v101 - v102 + 382) / 7) + 3;
        if ( v104 < 0 )
        {
          v132 = v100 + ((tp[1].m128i_i32[1] >> 31) & 0x190) - 101;
          v133 = 365;
          if ( (v132 & 3) == 0 )
          {
            v133 = 366;
            if ( v132 == 100 * (v132 / 100) )
              v133 = 366 - (v132 % 400 != 0);
          }
          v134 = v133 + v101;
          v135 = v134 - v102;
          v107 = -1;
          v104 = v134 - (v135 + 382) + 7 * ((v135 + 382) / 7) + 3;
        }
        else
        {
          v105 = 365;
          if ( (v103 & 3) == 0 )
          {
            v105 = 366;
            if ( v103 == 100 * (v103 / 100) )
              v105 = (v103 == 400 * (v103 / 400)) + 365;
          }
          v106 = v102 - 382 + 7 * ((v101 - v105 - v102 + 382) / 7) + 3;
          if ( v106 >= 0 )
            v104 = v106;
          v107 = (v106 >> 31) + 1;
        }
        if ( v18 == 71 )
        {
          v35 = v100 + v107 + 1900;
          v34 = 4;
          LOBYTE(v38) = v100 < -1900 - v107;
          v36 = 0;
          v37 = 0;
          goto LABEL_73;
        }
        if ( v18 == 103 )
        {
          v34 = 2;
          v108 = (v107 + v100 % 100) % 100;
          v35 = v108;
          if ( v108 < 0 )
          {
            v35 = v108 + 100;
            if ( v100 < -1900 - v107 )
              v35 = -v108;
          }
        }
        else
        {
          v34 = 2;
          v35 = v104 / 7 + 1;
        }
        goto LABEL_72;
      case 72:
        if ( v22 == 69 )
          goto LABEL_211;
        v34 = 2;
        v35 = tp->m128i_u32[2];
        goto LABEL_72;
      case 73:
        if ( v22 == 69 )
          goto LABEL_211;
        v35 = v164;
        v34 = 2;
        goto LABEL_72;
      case 77:
        if ( v22 == 69 )
          goto LABEL_211;
        v34 = 2;
        v35 = tp->m128i_u32[1];
        goto LABEL_72;
      case 78:
        if ( v22 == 69 )
          goto LABEL_211;
        if ( v21 == -1 )
        {
          v35 = a7;
          v21 = 9;
          v34 = 9;
        }
        else
        {
          if ( v21 > 8 )
          {
            v35 = a7;
          }
          else
          {
            v35 = a7;
            for ( k = v21; k != 9; ++k )
              v35 = (int)v35 / 10;
          }
          v34 = v21;
        }
        goto LABEL_72;
      case 80:
        v170 = 1;
        goto LABEL_276;
      case 82:
        v156 = "%H:%M";
        goto LABEL_83;
      case 83:
        if ( v22 == 69 )
          goto LABEL_211;
        v34 = 2;
        v35 = tp->m128i_i32[0];
        goto LABEL_72;
      case 84:
        v156 = "%H:%M:%S";
        goto LABEL_83;
      case 85:
        if ( v22 == 69 )
          goto LABEL_211;
        v58 = tp[1].m128i_i32[3] - tp[1].m128i_i32[2] + 7;
        v59 = (unsigned __int64)(-1840700269LL * v58) >> 32;
        goto LABEL_143;
      case 87:
        if ( v22 == 69 )
          goto LABEL_211;
        v58 = 7 * ((tp[1].m128i_i32[2] + 6) / 7) - (tp[1].m128i_i32[2] + 6) + tp[1].m128i_i32[3] + 7;
        v59 = (unsigned __int64)(-1840700269LL * v58) >> 32;
LABEL_143:
        v34 = 2;
        v35 = ((v59 + v58) >> 2) - (v58 >> 31);
        goto LABEL_72;
      case 88:
      case 99:
      case 120:
        if ( v22 != 79 )
          goto LABEL_67;
        goto LABEL_211;
      case 89:
        if ( v22 == 69 )
          goto LABEL_375;
        if ( v22 == 79 )
          goto LABEL_211;
        v34 = 4;
        v60 = tp[1].m128i_i32[1];
        LOBYTE(v38) = v60 < -1900;
        v35 = v60 + 1900;
        v36 = 0;
        v37 = 0;
        goto LABEL_149;
      case 90:
        v70 = v147;
        v159 = v21;
        if ( v15 )
          v70 = 0;
        v168 = v16;
        v148 = v70;
        v71 = strlen(v153);
        v72 = v159;
        v73 = v71;
        v74 = 0LL;
        if ( v159 >= 0 )
          v74 = v159;
        v75 = v74;
        if ( v73 >= v74 )
          v75 = v73;
        v155 = v75;
        if ( ~v12 <= v75 )
          return 0LL;
        if ( stream )
        {
          v76 = v168;
          if ( v73 < v74 )
          {
            v165 = v72 - v73;
            if ( v76 == 48 )
            {
              if ( v165 )
              {
                for ( m = 0LL; m != v165; ++m )
                  fputc(48, stream);
              }
            }
            else if ( v72 != v73 )
            {
              v178 = v15;
              v77 = 0LL;
              do
              {
                ++v77;
                fputc(32, stream);
              }
              while ( v165 != v77 );
              v15 = v178;
            }
          }
          if ( v15 )
          {
            sub_4031C0(stream, (unsigned __int8 *)v153, v73);
          }
          else if ( v148 )
          {
            sub_403220(stream, (unsigned __int8 *)v153, v73);
          }
          else
          {
            fwrite(v153, v73, 1uLL, stream);
          }
        }
        goto LABEL_136;
      case 98:
      case 104:
        v78 = v147;
        if ( v15 )
          v78 = v15;
        v147 = v78;
        if ( v22 )
          goto LABEL_211;
        goto LABEL_49;
      case 100:
        if ( v22 == 69 )
          goto LABEL_211;
        v34 = 2;
        v35 = tp->m128i_u32[3];
        goto LABEL_72;
      case 101:
        if ( v22 == 69 )
          goto LABEL_211;
        v35 = tp->m128i_u32[3];
        goto LABEL_185;
      case 106:
        if ( v22 == 69 )
          goto LABEL_211;
        v34 = 3;
        v114 = tp[1].m128i_i32[3];
        LOBYTE(v38) = v114 < -1;
        v35 = v114 + 1;
        v36 = 0;
        v37 = 0;
        goto LABEL_73;
      case 107:
        if ( v22 == 69 )
          goto LABEL_211;
        v35 = tp->m128i_u32[2];
        goto LABEL_185;
      case 108:
        if ( v22 == 69 )
          goto LABEL_211;
        v35 = v164;
LABEL_185:
        v34 = 2;
        if ( v16 != 48 && v16 != 45 )
          v16 = 95;
        goto LABEL_72;
      case 109:
        if ( v22 == 69 )
          goto LABEL_211;
        v34 = 2;
        v113 = tp[1].m128i_i32[0];
        LOBYTE(v38) = v113 < -1;
        v35 = v113 + 1;
        v36 = 0;
        v37 = 0;
        goto LABEL_73;
      case 110:
        LODWORD(v41) = 0;
        if ( v21 >= 0 )
          LODWORD(v41) = v21;
        v41 = (int)v41;
        if ( !(_DWORD)v41 )
          v41 = 1LL;
        if ( ~v12 <= v41 )
          return 0LL;
        if ( stream )
        {
          if ( v21 > 1 )
          {
            v111 = 0LL;
            v112 = v21 - 1LL;
            if ( v16 == 48 )
            {
              do
              {
                ++v111;
                fputc(48, stream);
              }
              while ( v112 != v111 );
            }
            else
            {
              do
              {
                ++v111;
                fputc(32, stream);
              }
              while ( v112 != v111 );
            }
          }
          fputc(10, stream);
        }
        goto LABEL_94;
      case 112:
        v170 = 0;
LABEL_276:
        v109 = v170;
        v110 = v147;
        v18 = 112;
        if ( v15 )
          v109 = v15;
        v166 = v109;
        if ( v15 )
          v110 = 0;
        v147 = v110;
        goto LABEL_68;
      case 113:
        v34 = 1;
        if ( v22 == 79 )
          goto LABEL_75;
        v37 = 0;
        LOBYTE(v38) = 0;
        v36 = 0;
        v35 = ((11 * tp[1].m128i_i32[0]) >> 5) + 1;
        goto LABEL_151;
      case 114:
LABEL_67:
        v166 = 0;
LABEL_68:
        *(_WORD *)format = 9504;
        if ( !v22 )
        {
          v13 = (char *)v8;
          v26 = v150;
          goto LABEL_50;
        }
        v34 = 0;
        goto LABEL_76;
      case 115:
        v179 = v21;
        v169 = v16;
        v62 = v207;
        v86 = _mm_loadu_si128(tp + 2);
        v87 = _mm_loadu_si128(tp + 1);
        v88 = tp[3].m128i_i64[0];
        *(__m128i *)s = _mm_loadu_si128(tp);
        v209 = v87;
        v162 = v86.m128i_i32[2];
        v210 = v86;
        v211 = v88;
        v89 = sub_40DED0(v151, s);
        v16 = v169;
        v21 = v179;
        v90 = v89;
        v91 = v89;
        do
        {
          v92 = v91 % 10;
          v91 /= 10LL;
          v93 = 48 - v92;
          v94 = v92 + 48;
          if ( v90 < 0 )
            v94 = v93;
          *--v62 = v94;
        }
        while ( v91 );
        v95 = 1;
        if ( v179 > 0 )
          v95 = v179;
        v158 = v95;
        if ( v90 >= 0 )
          goto LABEL_235;
        goto LABEL_319;
      case 116:
        LODWORD(v41) = 0;
        if ( v21 >= 0 )
          LODWORD(v41) = v21;
        v41 = (int)v41;
        if ( !(_DWORD)v41 )
          v41 = 1LL;
        if ( ~v12 <= v41 )
          return 0LL;
        if ( stream )
        {
          if ( v21 > 1 )
          {
            v44 = 0LL;
            v45 = v21 - 1LL;
            if ( v16 == 48 )
            {
              do
              {
                ++v44;
                fputc(48, stream);
              }
              while ( v45 != v44 );
            }
            else
            {
              do
              {
                ++v44;
                fputc(32, stream);
              }
              while ( v45 != v44 );
            }
          }
          fputc(9, stream);
        }
LABEL_94:
        v12 += v41;
        v13 = (char *)v8;
        goto LABEL_12;
      case 117:
        v34 = 1;
        v35 = (tp[1].m128i_i32[2] + 6) % 7 + 1;
        goto LABEL_72;
      case 119:
        if ( v22 == 69 )
          goto LABEL_211;
        v34 = 1;
        v35 = tp[1].m128i_u32[2];
        goto LABEL_72;
      case 121:
        if ( v22 == 69 )
        {
LABEL_375:
          v34 = 0;
          goto LABEL_75;
        }
        v34 = 2;
        v35 = tp[1].m128i_i32[1] % 100;
        if ( (v35 & 0x80000000) != 0 )
        {
          v35 += 100;
          if ( tp[1].m128i_i32[1] <= -1901 )
            v35 = -(tp[1].m128i_i32[1] % 100);
        }
LABEL_72:
        v36 = 0;
        v37 = 0;
        v38 = v35 >> 31;
        goto LABEL_73;
      case 122:
        i = 0LL;
LABEL_219:
        if ( tp[2].m128i_i32[0] < 0 )
        {
          v13 = (char *)v8;
          goto LABEL_12;
        }
        v83 = tp[2].m128i_i64[1];
        LOBYTE(v38) = 1;
        if ( (int)v83 >= 0 )
        {
          LOBYTE(v38) = 0;
          if ( !(_DWORD)v83 )
            LOBYTE(v38) = *v153 == 45;
        }
        v160 = (int)v83 / 3600;
        v84 = (int)v83 / 60 % 60;
        v36 = v84;
        v85 = (int)v83 % 60;
        if ( i == 1 )
          goto LABEL_405;
        if ( i )
        {
          if ( i == 2 )
            goto LABEL_404;
          if ( i != 3 )
          {
            v46 = *v8;
            v47 = v8;
LABEL_108:
            LODWORD(v48) = 0;
            if ( v21 >= 0 )
              LODWORD(v48) = v21;
            v49 = ~v12;
            v48 = (int)v48;
            if ( v46 == 37 )
            {
              v50 = 1LL;
              v13 = (char *)v47;
              if ( (_DWORD)v48 )
                v50 = (int)v48;
              v155 = v50;
              v51 = 1LL;
            }
            else
            {
              v8 = v47;
LABEL_211:
              v79 = v8 - 1;
              do
              {
                v47 = v79;
                v80 = (_DWORD)v8 - 1 + 2 - (_DWORD)v79--;
              }
              while ( v79[1] != 37 );
              LODWORD(v48) = 0;
              v51 = v80;
              if ( v21 >= 0 )
                LODWORD(v48) = v21;
              v49 = ~v12;
              v13 = (char *)v8;
              v48 = (int)v48;
              v81 = (int)v48;
              if ( v51 >= (int)v48 )
                v81 = v51;
              v155 = v81;
            }
LABEL_114:
            if ( v49 <= v155 )
              return 0LL;
            if ( !stream )
            {
LABEL_65:
              v12 += v155;
              goto LABEL_12;
            }
            if ( v51 < v48 )
            {
              v52 = v21 - v51;
              if ( v16 != 48 )
              {
                if ( !v52 )
                  goto LABEL_122;
                v165 = (__int64)v13;
                v53 = 0LL;
                v54 = v21 - v51;
                do
                {
                  ++v53;
                  fputc(32, stream);
                }
                while ( v54 != v53 );
                goto LABEL_121;
              }
              v126 = v21 - v51;
              if ( v52 )
              {
                v165 = (__int64)v13;
                v127 = 0LL;
                do
                {
                  ++v127;
                  fputc(48, stream);
                }
                while ( v126 != v127 );
LABEL_121:
                v13 = (char *)v165;
              }
            }
LABEL_122:
            if ( v147 )
              sub_403220(stream, v47, v51);
            else
              fwrite(v47, v51, 1uLL, stream);
            goto LABEL_65;
          }
          if ( v85 )
          {
LABEL_404:
            v37 = 1;
            v34 = 9;
            v36 = 20;
            v35 = 100 * v84 + 10000 * v160 + v85;
          }
          else if ( v84 )
          {
LABEL_405:
            v37 = 1;
            v34 = 6;
            v35 = v84 + 100 * v160;
            v36 = 4;
          }
          else
          {
            v35 = v160;
            v37 = 1;
            v34 = 3;
          }
        }
        else
        {
          v36 = 0;
          v37 = 1;
          v34 = 5;
          v35 = v84 + 100 * v160;
        }
LABEL_73:
        if ( v22 != 79 )
        {
LABEL_149:
          if ( (_BYTE)v38 )
LABEL_150:
            v35 = -v35;
LABEL_151:
          v61 = v207;
          while ( 1 )
          {
            v62 = v61 - 1;
            if ( (v36 & 1) != 0 )
            {
              v63 = (unsigned __int8 *)(v61 - 2);
              *--v61 = 58;
              v62 = (char *)v63;
            }
            v36 >>= 1;
            *(v61 - 1) = v35 % 0xA + 48;
            v61 = v62;
            if ( v35 <= 9 && !v36 )
              break;
            v35 /= 0xAu;
          }
          if ( v34 < v21 )
            v34 = v21;
          v158 = v34;
          if ( (_BYTE)v38 )
          {
LABEL_319:
            v177 = 45;
            if ( v16 != 45 )
              goto LABEL_163;
            v171 = 45;
          }
          else
          {
            if ( !v37 )
            {
LABEL_235:
              v64 = (char *)(v207 - v62);
              v65 = ~v12;
              if ( v16 == 45 || (v167 = v158 - (_DWORD)v64, v158 - (int)v64 <= 0) )
              {
                LODWORD(v69) = 0;
                v13 = (char *)v8;
                if ( v21 >= 0 )
                  LODWORD(v69) = v21;
                v69 = (int)v69;
                goto LABEL_240;
              }
              if ( v16 != 95 )
              {
                if ( v158 >= v65 )
                  return 0LL;
LABEL_181:
                v13 = (char *)v8;
                if ( stream )
                {
                  v187 = v16;
                  v123 = 0LL;
                  do
                  {
                    ++v123;
                    fputc(48, stream);
                  }
                  while ( v123 < v167 );
                  v13 = (char *)v8;
                  v16 = v187;
                }
                v12 += v167;
                v69 = 0LL;
                v21 = 0;
                v65 = ~v12;
                goto LABEL_240;
              }
              v177 = 0;
              goto LABEL_355;
            }
            if ( v16 != 45 )
            {
              v177 = 43;
LABEL_163:
              v64 = (char *)(v207 - v62);
              v167 = v158 - 1 - (v207 - v62);
              v65 = ~v12;
              if ( v167 > 0 )
              {
                if ( v16 != 95 )
                {
                  if ( v158 >= v65 )
                    return 0LL;
                  v66 = 0;
                  v67 = 1LL;
                  if ( v21 >= 0 )
                    v66 = v21;
                  if ( v66 )
                    v67 = v66;
                  v182 = v67;
                  if ( v67 >= v65 )
                    return 0LL;
                  if ( stream )
                  {
                    if ( !v158 && (unsigned __int64)v66 > 1 )
                    {
                      v191 = v21 - 1LL;
                      if ( v16 == 48 )
                      {
                        if ( v21 != 1LL )
                        {
                          v201 = v8;
                          v141 = 0LL;
                          do
                          {
                            ++v141;
                            fputc(48, stream);
                          }
                          while ( v191 != v141 );
                          v16 = 48;
                          v8 = v201;
                        }
                      }
                      else
                      {
                        v68 = 0LL;
                        if ( v21 != 1LL )
                        {
                          v197 = v16;
                          do
                          {
                            ++v68;
                            fputc(32, stream);
                          }
                          while ( v191 != v68 );
                          v16 = v197;
                        }
                      }
                    }
                    v192 = v16;
                    fputc(v177, stream);
                    v16 = v192;
                  }
                  v12 += v182;
                  goto LABEL_181;
                }
LABEL_355:
                if ( v167 >= v65 )
                  return 0LL;
                if ( stream )
                {
                  v188 = v21;
                  v128 = v8;
                  v129 = 0LL;
                  v130 = v128;
                  do
                  {
                    ++v129;
                    fputc(32, stream);
                  }
                  while ( v167 > v129 );
                  v21 = v188;
                  v8 = v130;
                }
                v12 += v167;
                v121 = v21 - v167;
                v20 = v167 < v21;
                v21 = 0;
                if ( v20 )
                  v21 = v121;
                v65 = ~v12;
                if ( v177 )
                {
                  v69 = v21;
                  v122 = 1LL;
                  if ( v21 )
                    v122 = v21;
                  if ( v122 >= v65 )
                    return 0LL;
                  if ( stream )
                  {
                    if ( !v158 && (unsigned int)v21 > 1 )
                    {
                      v190 = v21;
                      v174 = v21 - 1LL;
                      v196 = v8;
                      v142 = 0LL;
                      v143 = v21;
                      do
                      {
                        ++v142;
                        fputc(32, stream);
                      }
                      while ( v174 != v142 );
                      v21 = v190;
                      v8 = v196;
                      v69 = v143;
                    }
                    v186 = v69;
                    v173 = v21;
                    fputc(v177, stream);
                    v21 = v173;
                    v69 = v186;
                  }
                  v12 += v122;
                  v16 = 95;
                  v13 = (char *)v8;
                  v64 = (char *)(v207 - v62);
                  v65 = ~v12;
                }
                else
                {
                  v69 = v21;
                  v13 = (char *)v8;
                  v16 = 95;
                  v64 = (char *)(v207 - v62);
                }
                goto LABEL_240;
              }
              LODWORD(v69) = 0;
              v119 = 1LL;
              if ( v21 >= 0 )
                LODWORD(v69) = v21;
              v69 = (int)v69;
              if ( (_DWORD)v69 )
                v119 = (int)v69;
              v172 = v119;
              if ( v119 >= v65 )
                return 0LL;
              if ( stream )
              {
                if ( !v158 && (unsigned __int64)(int)v69 > 1 )
                {
                  v184 = v21 - 1LL;
                  if ( v16 == 48 )
                  {
                    if ( v21 != 1LL )
                    {
                      v139 = (int)v69;
                      v200 = v21;
                      v203 = v8;
                      v140 = 0LL;
                      do
                      {
                        ++v140;
                        fputc(48, stream);
                      }
                      while ( v184 != v140 );
                      v16 = 48;
                      v21 = v200;
                      v69 = v139;
                      v8 = v203;
                    }
                  }
                  else
                  {
                    v120 = 0LL;
                    if ( v21 != 1LL )
                    {
                      v193 = v16;
                      v198 = v21;
                      v202 = (int)v69;
                      do
                      {
                        ++v120;
                        fputc(32, stream);
                      }
                      while ( v184 != v120 );
                      v16 = v193;
                      v21 = v198;
                      v69 = v202;
                    }
                  }
                }
                v199 = v69;
                v194 = v21;
                v185 = v16;
                fputc(v177, stream);
                v16 = v185;
                v21 = v194;
                v69 = v199;
              }
              v12 += v172;
              v13 = (char *)v8;
              v65 = ~v12;
LABEL_240:
              v96 = v69;
              if ( (unsigned __int64)v64 >= v69 )
                v96 = (unsigned __int64)v64;
              HIDWORD(v165) = HIDWORD(v96);
              if ( v96 >= v65 )
                return 0LL;
              if ( !stream )
              {
LABEL_253:
                v12 += v96;
                goto LABEL_12;
              }
              if ( !v158 && (unsigned __int64)v64 < v69 )
              {
                v97 = v21 - (_QWORD)v64;
                if ( v16 != 48 )
                {
                  if ( !v97 )
                    goto LABEL_251;
                  v161 = v13;
                  v98 = 0LL;
                  v99 = v21 - (_QWORD)v64;
                  do
                  {
                    ++v98;
                    fputc(32, stream);
                  }
                  while ( v99 != v98 );
                  goto LABEL_250;
                }
                v124 = v21 - (_QWORD)v64;
                if ( v97 )
                {
                  v161 = v13;
                  v125 = 0LL;
                  do
                  {
                    ++v125;
                    fputc(48, stream);
                  }
                  while ( v124 != v125 );
LABEL_250:
                  v13 = v161;
                }
              }
LABEL_251:
              if ( v147 )
                sub_403220(stream, (unsigned __int8 *)v62, (__int64)v64);
              else
                fwrite(v62, (size_t)v64, 1uLL, stream);
              goto LABEL_253;
            }
            v171 = 43;
          }
          LODWORD(v69) = 0;
          v117 = 1LL;
          if ( v21 >= 0 )
            LODWORD(v69) = v21;
          v69 = (int)v69;
          if ( (_DWORD)v69 )
            v117 = (int)v69;
          if ( ~v12 <= v117 )
            return 0LL;
          if ( stream )
          {
            if ( !v158 && (unsigned __int64)(int)v69 > 1 && v21 != 1LL )
            {
              v181 = v21;
              v137 = 0LL;
              v189 = (int)v69;
              v195 = v8;
              v138 = v21 - 1LL;
              do
              {
                ++v137;
                fputc(32, stream);
              }
              while ( v138 != v137 );
              v21 = v181;
              v69 = v189;
              v8 = v195;
            }
            v183 = v69;
            v180 = v21;
            fputc(v171, stream);
            v21 = v180;
            v69 = v183;
          }
          v12 += v117;
          v13 = (char *)v8;
          v16 = 45;
          v64 = (char *)(v207 - v62);
          v65 = ~v12;
          goto LABEL_240;
        }
        if ( (_BYTE)v38 )
          goto LABEL_150;
LABEL_75:
        v166 = 0;
        *(_WORD *)format = 9504;
LABEL_76:
        v205 = v22;
        v13 = (char *)v8;
        v22 = v34;
        v26 = &v206;
LABEL_50:
        *(_BYTE *)v26 = v18;
        *((_BYTE *)v26 + 1) = 0;
        v154 = v21;
        v175 = v16;
        v27 = strftime(s, 0x400uLL, format, (const struct tm *)tp);
        if ( !v27 )
        {
LABEL_12:
          v11 = v13[1];
          v8 = (unsigned __int8 *)(v13 + 1);
          if ( !v13[1] )
            return v12;
          continue;
        }
        v28 = v154;
        v29 = v27 - 1;
        v30 = 0LL;
        if ( v154 >= 0 )
          v30 = v154;
        v31 = v30;
        if ( v29 >= v30 )
          v31 = v29;
        v155 = v31;
        if ( ~v12 > v31 )
        {
          if ( stream )
          {
            if ( !v22 && v29 < v30 )
            {
              v32 = v28 - v29;
              if ( v175 == 48 )
              {
                if ( v32 )
                {
                  for ( n = 0LL; n != v32; ++n )
                    fputc(48, stream);
                }
              }
              else
              {
                v33 = 0LL;
                if ( v32 )
                {
                  do
                  {
                    ++v33;
                    fputc(32, stream);
                  }
                  while ( v32 != v33 );
                }
              }
            }
            if ( v166 )
            {
              sub_4031C0(stream, (unsigned __int8 *)&s[1], v29);
            }
            else if ( v147 )
            {
              sub_403220(stream, (unsigned __int8 *)&s[1], v29);
            }
            else
            {
              fwrite(&s[1], v29, 1uLL, stream);
            }
          }
          goto LABEL_65;
        }
        return 0LL;
      default:
        goto LABEL_211;
    }
  }
}

unsigned __int64 __fastcall sub_404BA0(FILE *a1, char *a2, __int64 a3, __int64 a4, int a5)
{
  char v6; // [rsp+17h] [rbp-9h] BYREF

  v6 = 0;
  return sub_403280(a1, (unsigned __int8 *)a2, a3, 0, (int)&v6, a4, a5);
}

int __fastcall sub_404BC0(struct timespec *tp)
{
  int result; // eax
  struct timeval v2; // [rsp+0h] [rbp-18h] BYREF

  result = clock_gettime(0, tp);
  if ( result )
  {
    gettimeofday(&v2, 0LL);
    tp->tv_sec = v2.tv_sec;
    result = 1000 * LODWORD(v2.tv_usec);
    tp->tv_nsec = 1000 * v2.tv_usec;
  }
  return result;
}

__int64 __fastcall sub_404C00(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  int v4; // eax

  v2 = a2 + 20;
  *(_BYTE *)(a2 + 20) = 0;
  if ( a1 < 0 )
  {
    while ( 1 )
    {
      v4 = 10 * (a1 / 10) + 48 - a1;
      a1 /= 10LL;
      *(_BYTE *)(v2 - 1) = v4;
      if ( !a1 )
        break;
      --v2;
    }
    *(_BYTE *)(v2 - 2) = 45;
    return v2 - 2;
  }
  else
  {
    do
    {
      *(_BYTE *)--v2 = a1 % 0xAuLL + 48;
      a1 /= 0xAuLL;
    }
    while ( a1 );
    return v2;
  }
}

__int64 __fastcall sub_404CA0(
        __m128i *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        const __m128i a7,
        __int64 a8)
{
  __int64 result; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  __m128i v11; // xmm0
  __int64 v12; // r9

  result = a1[10].m128i_i64[1];
  v9 = a7.m128i_i64[1];
  v10 = a8;
  if ( result && !a1[3].m128i_i64[0] && !a1[10].m128i_i8[1] )
  {
    if ( a1[12].m128i_i64[1] || a8 > 2 )
    {
      v11 = _mm_loadu_si128(&a7);
      result = a8;
      a1[13].m128i_i8[8] = 1;
      a1[2] = v11;
      a1[3].m128i_i64[0] = result;
      return result;
    }
    a1[12].m128i_i64[1] = 1LL;
LABEL_13:
    a1[4].m128i_i64[1] = v9;
    a1[5].m128i_i64[0] = 0LL;
    goto LABEL_11;
  }
  if ( a8 > 4 )
  {
    v12 = a8 - 4;
    a1[10].m128i_i64[1] = result + 1;
    a1[3].m128i_i64[0] = v12;
    a1[4].m128i_i64[0] = v9 % 100;
    result = 0x346DC5D63886594BLL * v9;
    a1[3].m128i_i64[1] = v9 / 100 % 100;
    a1[2].m128i_i64[1] = v9 / 10000;
    return result;
  }
  ++a1[12].m128i_i64[1];
  if ( v10 <= 2 )
    goto LABEL_13;
  a1[4].m128i_i64[1] = v9 / 100;
  result = 100 * (v9 / 100);
  a1[5].m128i_i64[0] = v9 % 100;
LABEL_11:
  a1[5].m128i_i64[1] = 0LL;
  a1[6].m128i_i64[0] = 0LL;
  a1[1].m128i_i32[3] = 2;
  return result;
}

__int64 __fastcall sub_404E20(int a1, __int64 a2)
{
  int v3; // eax
  __int64 v4; // rsi
  unsigned int v5; // ebp
  unsigned int v6; // ecx
  unsigned int v7; // ebp

  v3 = __sprintf_chk(a2, 1LL, -1LL, "%c%02d", ((a1 >> 31) & 2u) + 43, abs32(a1 / 3600));
  if ( a1 % 3600 )
  {
    v4 = a2 + v3;
    *(_BYTE *)v4 = 58;
    v5 = abs32(a1 % 3600);
    *(_BYTE *)(v4 + 1) = v5 / 0x258 + 48;
    v6 = v5 / 0x3C % 0xA + 48;
    v7 = v5 % 0x3C;
    *(_BYTE *)(v4 + 2) = v6;
    if ( v7 )
    {
      *(_BYTE *)(v4 + 3) = 58;
      *(_BYTE *)(v4 + 4) = v7 / 0xA + 48;
      *(_WORD *)(v4 + 5) = (unsigned __int8)(v7 % 0xA + 48);
    }
    else
    {
      *(_BYTE *)(v4 + 3) = 0;
    }
  }
  return a2;
}

__int64 __fastcall sub_404F20(int a1, __int64 a2)
{
  __sprintf_chk(a2, 1LL, -1LL, (const char *)((a1 >= -1900) + 4278463LL), abs32(a1 / 100 + 19), abs32(a1 % 100));
  return a2;
}

__int64 sub_404F90()
{
  fwrite("date: ", 1uLL, 6uLL, stderr);
  return sub_40E010(stderr);
}

bool __fastcall sub_405050(__int64 a1, _DWORD *a2, _DWORD *a3, __int64 a4)
{
  __int64 v5; // [rsp+8h] [rbp-50h] BYREF
  char v6[72]; // [rsp+10h] [rbp-48h] BYREF

  v5 = a4;
  return (a4 != -1 || (a3 = (_DWORD *)sub_40DE20(a1, &v5, v6)) != 0LL)
      && (a3[5] ^ a2[5] | a3[4] ^ a2[4] | a3[3] ^ a2[3] | a3[2] ^ a2[2] | a3[1] ^ a2[1] | *a3 ^ *a2) == 0;
}

__int64 __fastcall sub_4050C0(unsigned __int8 a1, __int64 a2, __int64 a3)
{
  __fprintf_chk(stderr, 1LL, &aLdS[a1 ^ 1], a2, a3);
  return 1LL;
}

__int64 __fastcall sub_405100(_DWORD *a1, char a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r9
  __int64 v6; // r9
  bool v7; // of
  __int64 v8; // r9
  __int64 result; // rax
  __int64 v10; // rcx

  v5 = a3;
  if ( a4 <= 2 )
  {
    if ( a5 >= 0 )
      goto LABEL_3;
    v10 = 0LL;
LABEL_11:
    v8 = v10 + 60 * v5;
LABEL_6:
    result = 0LL;
    if ( (unsigned __int64)(v8 + 1440) <= 0xB40 )
    {
      result = 1LL;
      *a1 = 60 * v8;
    }
    return result;
  }
  if ( a5 < 0 )
  {
    v5 = a3 / 100;
    v10 = a3 % 100;
    goto LABEL_11;
  }
LABEL_3:
  v6 = 60 * a3;
  if ( a2 )
  {
    v7 = __OFSUB__(v6, a5);
    v8 = v6 - a5;
  }
  else
  {
    v7 = __OFADD__(a5, v6);
    v8 = a5 + v6;
  }
  result = 0LL;
  if ( !v7 && (unsigned __int128)(60 * (__int128)a3) >> 64 == 0 )
    goto LABEL_6;
  return result;
}

char **__fastcall sub_4051C0(__int64 a1, const char *a2)
{
  const char *v3; // rsi
  char **v4; // rbx
  const char *v6; // rsi
  const char **v7; // rbx
  const char *v8; // rsi

  v3 = "GMT";
  v4 = &off_415EE0;
  do
  {
    if ( !strcmp(a2, v3) )
      return v4;
    v4 += 2;
    v3 = *v4;
  }
  while ( *v4 );
  v6 = *(const char **)(a1 + 232);
  v7 = (const char **)(a1 + 232);
  if ( !v6 )
  {
LABEL_6:
    v4 = &off_415BE0;
    v8 = "WET";
    while ( strcmp(a2, v8) )
    {
      v4 += 2;
      v8 = *v4;
      if ( !*v4 )
        return 0LL;
    }
    return v4;
  }
  while ( strcmp(a2, v6) )
  {
    v7 += 2;
    v6 = *v7;
    if ( !*v7 )
      goto LABEL_6;
  }
  return (char **)v7;
}

int __fastcall sub_405280(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // rsi
  unsigned __int8 v5; // di
  unsigned __int8 v6; // al
  __int64 v7; // rsi
  __int64 v8; // rsi
  __int64 v9; // rsi
  __int64 v10; // rsi
  FILE *v12; // rbx
  char *v13; // rax
  unsigned __int8 v14; // al

  dcgettext(0LL, "parsed %s part: ", 5);
  sub_404F90();
  v3 = *(_QWORD *)(a2 + 104);
  if ( !v3 )
  {
    v4 = *(_QWORD *)(a2 + 112);
    if ( !v4 )
    {
      v7 = *(_QWORD *)(a2 + 120);
      v5 = 0;
      if ( v7 )
        goto LABEL_6;
      if ( !*(_QWORD *)(a2 + 128) && !*(_QWORD *)(a2 + 136) && !*(_QWORD *)(a2 + 144) && !*(_DWORD *)(a2 + 152) )
      {
        v12 = stderr;
        v13 = dcgettext(0LL, "today/this/now\n", 5);
        return fputs(v13, v12);
      }
      goto LABEL_7;
    }
    v5 = 0;
    goto LABEL_4;
  }
  v14 = sub_4050C0(0, v3, (__int64)"year(s)");
  v4 = *(_QWORD *)(a2 + 112);
  v5 = v14;
  if ( v4 )
  {
LABEL_4:
    v6 = sub_4050C0(v5, v4, (__int64)"month(s)");
    v7 = *(_QWORD *)(a2 + 120);
    v5 = v6;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(a2 + 120);
LABEL_5:
  if ( v7 )
LABEL_6:
    v5 = sub_4050C0(v5, v7, (__int64)"day(s)");
LABEL_7:
  v8 = *(_QWORD *)(a2 + 128);
  if ( v8 )
    v5 = sub_4050C0(v5, v8, (__int64)"hour(s)");
  v9 = *(_QWORD *)(a2 + 136);
  if ( v9 )
    v5 = sub_4050C0(v5, v9, (__int64)"minutes");
  v10 = *(_QWORD *)(a2 + 144);
  if ( v10 )
    v5 = sub_4050C0(v5, v10, (__int64)"seconds");
  if ( *(_DWORD *)(a2 + 152) )
    sub_4050C0(v5, *(int *)(a2 + 152), (__int64)"nanoseconds");
  return fputc(10, stderr);
}

__int64 __fastcall sub_405410(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // eax
  int v5; // ebp
  const char *v7; // rax
  __int64 v8; // [rsp+0h] [rbp-38h] BYREF

  v4 = sub_40FF70(a3, 100LL, &unk_41492E, a1, 0LL, 0LL);
  if ( !a2 )
    return a3;
  v5 = v4;
  if ( v4 > 99 || !*(_QWORD *)(a2 + 208) )
    return a3;
  v7 = (const char *)sub_404E20(*(_DWORD *)(a2 + 24), (__int64)&v8);
  __snprintf_chk(a3 + v5, 100 - v5, 1LL, -1LL, " TZ=%s", v7);
  return a3;
}

char *__fastcall sub_4054B0(__int64 a1, char *a2)
{
  __int64 v2; // r9
  int v3; // eax
  __int64 v4; // rdx
  __int64 v6; // rdx

  if ( !*(_BYTE *)(a1 + 224) )
  {
    *a2 = 0;
    v6 = *(int *)(a1 + 16);
    if ( (unsigned int)v6 <= 6 )
    {
      __snprintf_chk(a2, 100LL, 1LL, -1LL, "%s", (char *)&unk_415980 + 4 * v6);
      return a2;
    }
    return a2;
  }
  v2 = *(_QWORD *)(a1 + 8);
  if ( (unsigned __int64)(v2 + 1) <= 0xD )
  {
    v3 = snprintf(a2, 0x64uLL, "%s", &aLast[11 * v2 + 11]);
    v4 = *(int *)(a1 + 16);
    if ( (unsigned int)v4 <= 6 && (unsigned int)v3 <= 0x63 )
      goto LABEL_5;
    return a2;
  }
  v3 = __snprintf_chk(a2, 100LL, 1LL, -1LL, "%ld", v2);
  v4 = *(int *)(a1 + 16);
  if ( (unsigned int)v4 > 6 )
    return a2;
LABEL_5:
  __snprintf_chk(&a2[v3], 100 - v3, 1LL, -1LL, (const char *)((v3 == 0) + 4277419LL), (char *)&unk_415980 + 4 * v4);
  return a2;
}

int __fastcall sub_4055A0(__int64 a1, __int64 a2)
{
  char v2; // dl
  __int64 v3; // rbp
  char *v4; // rax
  unsigned int v5; // r13d
  __int64 v6; // r12
  char *v7; // rbp
  char *v8; // rax
  const char *v9; // r8
  bool v10; // zf
  __int64 v11; // rbx
  char *v12; // rax
  __int64 v14; // rcx
  const char *v15; // rbp
  __int64 v16; // rax
  char v17[152]; // [rsp+0h] [rbp-98h] BYREF

  dcgettext(0LL, "parsed %s part: ", 5);
  sub_404F90();
  if ( *(_QWORD *)(a2 + 168) && !*(_BYTE *)(a2 + 218) )
  {
    __fprintf_chk(
      stderr,
      1LL,
      "(Y-M-D) %04ld-%02ld-%02ld",
      *(_QWORD *)(a2 + 40),
      *(_QWORD *)(a2 + 56),
      *(_QWORD *)(a2 + 64));
    *(_BYTE *)(a2 + 218) = 1;
    v2 = 1;
    if ( *(_BYTE *)(a2 + 216) == *(_BYTE *)(a2 + 223) )
      goto LABEL_5;
    fputc(32, stderr);
    goto LABEL_4;
  }
  v2 = 0;
  if ( *(_BYTE *)(a2 + 216) != *(_BYTE *)(a2 + 223) )
  {
LABEL_4:
    v3 = *(_QWORD *)(a2 + 40);
    v4 = dcgettext(0LL, "year: %04ld", 5);
    __fprintf_chk(stderr, 1LL, v4, v3);
    v2 = 1;
    *(_BYTE *)(a2 + 223) = *(_BYTE *)(a2 + 216);
  }
LABEL_5:
  if ( *(_QWORD *)(a2 + 200) && !*(_BYTE *)(a2 + 221) )
  {
    __fprintf_chk(
      stderr,
      1LL,
      (const char *)(((unsigned __int8)v2 ^ 1u) + 4278657LL),
      *(_QWORD *)(a2 + 72),
      *(_QWORD *)(a2 + 80),
      *(_QWORD *)(a2 + 88));
    v14 = *(_QWORD *)(a2 + 96);
    if ( v14 )
      __fprintf_chk(stderr, 1LL, ".%09d", v14);
    if ( *(_DWORD *)(a2 + 28) == 1 )
      fwrite("pm", 1uLL, 2uLL, stderr);
    v10 = *(_QWORD *)(a2 + 176) == 0LL;
    *(_BYTE *)(a2 + 221) = 1;
    v2 = 1;
    if ( !v10 )
    {
      v2 = *(_BYTE *)(a2 + 219);
      if ( !v2 )
        goto LABEL_34;
    }
  }
  else if ( *(_QWORD *)(a2 + 176) && !*(_BYTE *)(a2 + 219) )
  {
    if ( !v2 )
    {
LABEL_10:
      v5 = *(_DWORD *)(a2 + 16);
      v6 = *(_QWORD *)(a2 + 8);
      v7 = sub_4054B0(a2, v17);
      v8 = dcgettext(0LL, "%s (day ordinal=%ld number=%d)", 5);
      __fprintf_chk(stderr, 1LL, v8, v7, v6, v5);
      *(_BYTE *)(a2 + 219) = 1;
      v2 = 1;
      goto LABEL_11;
    }
LABEL_34:
    fputc(32, stderr);
    goto LABEL_10;
  }
LABEL_11:
  if ( !*(_QWORD *)(a2 + 184) || *(_BYTE *)(a2 + 220) )
  {
    if ( !*(_QWORD *)(a2 + 208) || *(_BYTE *)(a2 + 222) )
    {
      if ( *(_BYTE *)(a2 + 160) )
      {
        v11 = *(_QWORD *)(a2 + 88);
        if ( !v2 )
          goto LABEL_24;
        goto LABEL_19;
      }
      return fputc(10, stderr);
    }
    v15 = (const char *)(((unsigned __int8)v2 ^ 1u) + 4278612LL);
LABEL_36:
    v16 = sub_404E20(*(_DWORD *)(a2 + 24), (__int64)v17);
    __fprintf_chk(stderr, 1LL, v15, v16);
    v10 = *(_BYTE *)(a2 + 160) == 0;
    *(_BYTE *)(a2 + 222) = 1;
    if ( v10 )
      return fputc(10, stderr);
    goto LABEL_18;
  }
  v9 = " DST";
  if ( !*(_QWORD *)(a2 + 192) )
    v9 = "";
  __fprintf_chk(stderr, 1LL, (const char *)(((unsigned __int8)v2 ^ 1u) + 4278685LL), *(unsigned int *)(a2 + 20), v9);
  v10 = *(_QWORD *)(a2 + 208) == 0LL;
  *(_BYTE *)(a2 + 220) = 1;
  if ( !v10 && !*(_BYTE *)(a2 + 222) )
  {
    v15 = " UTC%s";
    goto LABEL_36;
  }
  if ( *(_BYTE *)(a2 + 160) )
  {
LABEL_18:
    v11 = *(_QWORD *)(a2 + 88);
LABEL_19:
    fputc(32, stderr);
LABEL_24:
    v12 = dcgettext(0LL, "number of seconds: %ld", 5);
    __fprintf_chk(stderr, 1LL, v12, v11);
  }
  return fputc(10, stderr);
}

__int64 __fastcall sub_405940(__m128i *a1, __m128i a2)
{
  __int64 v2; // r8
  unsigned int v4; // r15d
  int v5; // ebp
  char *v6; // rbx
  __int16 *v7; // r14
  int v8; // eax
  __m128i *v9; // rcx
  __m128i v10; // xmm7
  __int64 v11; // rax
  __m128i v12; // xmm7
  int v13; // ecx
  char v14; // dl
  int v16; // eax
  unsigned int v17; // eax
  __int64 v18; // rsi
  const __m128i *v19; // rax
  __m128i v20; // xmm1
  __m128i v21; // xmm2
  __m128i v22; // xmm3
  __int64 v23; // r15
  __int64 v24; // r10
  __int64 v25; // rdi
  __int64 v26; // r13
  __int64 v27; // r11
  __int64 v28; // rdi
  __int64 v29; // rdx
  unsigned __int8 *v30; // rax
  int v31; // ebp
  __int64 v32; // rcx
  __int64 v33; // rdx
  unsigned __int8 *v34; // rsi
  char v35; // cl
  char *v36; // rsi
  unsigned __int8 *i; // rax
  unsigned __int8 v38; // al
  char *j; // rcx
  const char *v40; // rsi
  const char **v41; // rbx
  __m128i *v42; // rbp
  const char **v43; // rbp
  __int64 v44; // rdx
  char v45; // cl
  _BYTE *v46; // rsi
  __int64 v47; // rcx
  char v48; // dl
  bool v49; // al
  int v50; // esi
  unsigned __int8 *v51; // r11
  __int64 v52; // rcx
  int v53; // edi
  int v54; // ebp
  __int64 v55; // rcx
  __int64 v56; // rbp
  int v57; // edx
  char *v58; // rbp
  int v59; // r11d
  int v60; // eax
  char v61; // r13
  unsigned int v62; // edi
  __m128i v63; // xmm0
  __int64 v64; // rax
  __m128i v65; // xmm0
  __int64 v66; // rax
  __int64 v67; // rdx
  __m128i v68; // xmm7
  __int64 v69; // rax
  int v70; // eax
  __m128i v71; // xmm4
  __m128i v72; // xmm5
  __m128i v73; // xmm6
  __int64 v74; // rsi
  unsigned int v75; // r8d
  int v76; // eax
  bool v77; // r8
  __int64 v78; // rax
  __int64 v79; // rdx
  __int64 v80; // rdx
  bool v81; // di
  __int64 v82; // rdx
  bool v83; // si
  __int64 v84; // rdx
  __int64 v85; // rdx
  __int64 v86; // rdx
  _BOOL8 v87; // rcx
  __int64 v88; // rax
  int v89; // edi
  __int64 v90; // rax
  __int64 v91; // rax
  __int64 v92; // rcx
  __int64 v93; // r8
  __int64 v94; // rdx
  char v95; // si
  char v96; // al
  __int64 v97; // rax
  __int64 v98; // rdx
  __int64 v99; // rcx
  __int64 v100; // rax
  __int64 v101; // rax
  __int64 v102; // rax
  __int64 v103; // rax
  char *v104; // rax
  __int64 v105; // rdi
  const char *v106; // rsi
  char *v107; // rax
  __int64 v108; // rax
  __int64 v109; // rax
  __int64 v110; // rax
  __int64 v111; // rax
  __int64 v112; // rdx
  __int64 v113; // rax
  int v114; // eax
  bool v115; // r8
  __int64 v116; // rax
  __int64 v117; // rdx
  __int64 v118; // rdx
  bool v119; // di
  __int64 v120; // rdx
  bool v121; // si
  __int64 v122; // rdx
  bool v123; // r11
  __int64 v124; // rdx
  bool v125; // r10
  __int64 v126; // rdx
  _BOOL8 v127; // rcx
  char *v128; // rax
  __int64 v129; // rdi
  __int64 v130; // rsi
  __int64 v131; // rax
  __int64 v132; // rdx
  __int64 v133; // rcx
  __int64 v134; // rax
  __int64 v135; // rax
  __int64 v136; // rax
  __int64 v137; // rdx
  __int64 v138; // rax
  __int64 v139; // rax
  __int64 v140; // rax
  const char *v141; // rsi
  char *v142; // rax
  char *v143; // rax
  __int64 v144; // rdi
  __int64 v145; // rsi
  __int64 v146; // rax
  __int64 v147; // rax
  __int64 v148; // rax
  __int64 v149; // rax
  __int64 v150; // rcx
  __int64 v151; // r8
  __int64 v152; // rdx
  char v153; // si
  __int64 v154; // rax
  __int64 v155; // rax
  int v156; // edx
  __int64 v157; // rax
  __int64 v158; // rdi
  __int64 v159; // rsi
  __int64 v160; // rcx
  int v161; // r8d
  __int64 v162; // rdx
  __int64 v163; // rax
  __int64 v164; // rdx
  __int64 v165; // rdi
  __int64 v166; // rdx
  __int64 v167; // rsi
  __int32 v168; // ecx
  __int64 v169; // rdx
  bool v170; // r8
  bool v171; // cl
  bool v172; // si
  bool v173; // di
  _BOOL8 v174; // rdx
  bool v175; // of
  unsigned __int8 v176; // al
  __int64 v177; // rax
  __int64 v178; // rax
  __m128i v179; // xmm7
  __int64 v180; // rax
  __int64 v181; // rax
  __int64 v182; // rax
  __int64 v183; // rax
  __int64 v184; // rax
  __int64 v185; // rcx
  __int8 v186; // al
  __int64 v187; // rax
  int v188; // eax
  bool v189; // r8
  __int64 v190; // rax
  __int64 v191; // rdx
  __int64 v192; // rdx
  bool v193; // di
  __int64 v194; // rdx
  bool v195; // si
  __int64 v196; // rdx
  bool v197; // r11
  __int64 v198; // rdx
  bool v199; // r10
  __int64 v200; // rdx
  _BOOL8 v201; // rcx
  __int64 v202; // r9
  char *v203; // rbp
  int v204; // edx
  unsigned int v205; // eax
  bool v206; // cf
  _BOOL4 v207; // eax
  __int64 v208; // rbp
  const char *v209; // rsi
  char **v210; // rbx
  _BOOL4 v211; // ebp
  bool v212; // dl
  bool v213; // zf
  const char *v214; // rsi
  char **v215; // rcx
  __int64 v216; // rbp
  char **v217; // rax
  __m128i v218; // xmm7
  __int64 v219; // rax
  bool v220; // r8
  bool v221; // cl
  bool v222; // dl
  bool v223; // si
  _BOOL8 v224; // rdi
  _BOOL8 v225; // rdi
  __int64 v226; // rax
  char *v227; // rcx
  int v228; // r8d
  char *v229; // rbx
  char v230; // dl
  const char *v231; // rsi
  char *v232; // r15
  const char **v233; // rbx
  int v234; // ebp
  int v235; // eax
  const char **v236; // rcx
  const char *v237; // rsi
  char *v238; // r15
  const char **v239; // rbx
  int v240; // ebp
  int v241; // eax
  const char **v242; // r10
  char v243; // al
  char *v244; // rsi
  char *v245; // rcx
  char **v246; // rcx
  char *v247; // rsi
  __int64 v248; // [rsp-20h] [rbp-608h]
  __int64 v249; // [rsp-20h] [rbp-608h]
  __int64 v250; // [rsp+8h] [rbp-5E0h]
  int v251; // [rsp+8h] [rbp-5E0h]
  unsigned int v252; // [rsp+8h] [rbp-5E0h]
  unsigned int v253; // [rsp+8h] [rbp-5E0h]
  __m128i *v254; // [rsp+8h] [rbp-5E0h]
  int v255; // [rsp+8h] [rbp-5E0h]
  __int64 v256; // [rsp+10h] [rbp-5D8h]
  char *v257; // [rsp+10h] [rbp-5D8h]
  __int64 v258; // [rsp+10h] [rbp-5D8h]
  __int64 v259; // [rsp+10h] [rbp-5D8h]
  __m128i *v260; // [rsp+10h] [rbp-5D8h]
  int v261; // [rsp+18h] [rbp-5D0h]
  __int64 v262; // [rsp+18h] [rbp-5D0h]
  char v263; // [rsp+18h] [rbp-5D0h]
  char v264; // [rsp+18h] [rbp-5D0h]
  int v265; // [rsp+24h] [rbp-5C4h]
  __int64 v266; // [rsp+28h] [rbp-5C0h]
  __int64 v267; // [rsp+30h] [rbp-5B8h]
  __int64 v268; // [rsp+38h] [rbp-5B0h]
  __int64 v269; // [rsp+40h] [rbp-5A8h]
  __m128i *v270; // [rsp+48h] [rbp-5A0h]
  __m128i *v271; // [rsp+50h] [rbp-598h]
  __int64 v272; // [rsp+58h] [rbp-590h]
  char *v273; // [rsp+60h] [rbp-588h]
  __int64 v274; // [rsp+68h] [rbp-580h]
  __int64 v275; // [rsp+70h] [rbp-578h]
  __int64 v276; // [rsp+78h] [rbp-570h]
  char s1[19]; // [rsp+80h] [rbp-568h] BYREF
  _BYTE v278[5]; // [rsp+93h] [rbp-555h] BYREF
  __int16 v279[19]; // [rsp+A0h] [rbp-548h] BYREF
  __int16 v280; // [rsp+C6h] [rbp-522h] BYREF
  __m128i v281; // [rsp+D0h] [rbp-518h] BYREF
  __m128i v282; // [rsp+E0h] [rbp-508h] BYREF
  __m128i v283; // [rsp+F0h] [rbp-4F8h] BYREF
  __int64 v284; // [rsp+100h] [rbp-4E8h]
  __m128i v285; // [rsp+110h] [rbp-4D8h] BYREF
  __m128i v286; // [rsp+120h] [rbp-4C8h] BYREF
  __m128i v287; // [rsp+130h] [rbp-4B8h] BYREF
  __int64 v288; // [rsp+140h] [rbp-4A8h]
  char v289; // [rsp+150h] [rbp-498h] BYREF

  v2 = 0LL;
  v4 = 38;
  v5 = -2;
  v279[0] = 0;
  v6 = &v289;
  v7 = v279;
  v265 = 0;
LABEL_2:
  if ( v5 != -2 )
    goto LABEL_3;
  v30 = (unsigned __int8 *)a1->m128i_i64[0];
  v31 = *(unsigned __int8 *)a1->m128i_i64[0];
  LOBYTE(v32) = *(_BYTE *)a1->m128i_i64[0];
  while ( 1 )
  {
LABEL_30:
    LOBYTE(v33) = v32;
    if ( (unsigned __int8)v32 > 0x20u )
      goto LABEL_54;
    if ( ((1LL << v32) & 0x100003E00LL) == 0 )
    {
LABEL_35:
      if ( (unsigned int)(v31 - 48) > 9 )
      {
        v35 = v31 - 65;
        if ( (unsigned int)(v31 - 65) > 0x39 )
          goto LABEL_26;
LABEL_37:
        if ( ((1LL << v35) & 0x3FFFFFF03FFFFFFLL) == 0 )
          goto LABEL_57;
        v36 = s1;
        for ( i = (unsigned __int8 *)(a1->m128i_i64[0] + 1); ; ++i )
        {
          if ( v36 < v278 )
            *v36++ = v33;
          a1->m128i_i64[0] = (__int64)i;
          LODWORD(v33) = *i;
          if ( ((unsigned int)(v33 - 65) > 0x39 || ((1LL << ((unsigned __int8)v33 - 65)) & 0x3FFFFFF03FFFFFFLL) == 0)
            && (_BYTE)v33 != 46 )
          {
            break;
          }
        }
        *v36 = 0;
        v38 = s1[0];
        for ( j = s1; *j; v38 = *j )
        {
          if ( (unsigned int)v38 - 97 < 0x1A )
            v38 -= 32;
          *j++ = v38;
        }
        v257 = v6;
        v40 = "AM";
        v41 = (const char **)&off_4162E0;
        v251 = v2;
        v42 = a1;
        do
        {
          if ( !strcmp(s1, v40) )
          {
            a1 = v42;
            v43 = v41;
            v2 = v251;
            v6 = v257;
            v44 = *((int *)v43 + 3);
            v5 = *((_DWORD *)v43 + 2);
            goto LABEL_53;
          }
          v41 += 2;
          v40 = *v41;
        }
        while ( *v41 );
        v202 = (__int64)v42;
        v203 = s1;
        do
        {
          v204 = *(_DWORD *)v203;
          v203 += 4;
          v205 = ~v204 & (v204 - 16843009) & 0x80808080;
        }
        while ( !v205 );
        if ( (~v204 & (v204 - 16843009) & 0x8080) == 0 )
        {
          LOBYTE(v205) = (~v204 & (v204 - 16843009) & 0x80808080) >> 16;
          v203 += 2;
        }
        v206 = __CFADD__((_BYTE)v205, (_BYTE)v205);
        v207 = 1;
        v208 = &v203[-v206 - 3] - s1;
        if ( v208 != 3 )
        {
          v207 = 0;
          if ( v208 == 4 )
            v207 = s1[3] == 46;
        }
        v209 = "JANUARY";
        v268 = v208;
        v210 = &off_416140;
        v211 = v207;
        v262 = v202;
        do
        {
          if ( v211 )
            v212 = strncmp(s1, v209, 3uLL) == 0;
          else
            v212 = strcmp(s1, v209) == 0;
          if ( v212 )
            goto LABEL_254;
          v210 += 2;
          v209 = *v210;
        }
        while ( *v210 );
        v6 = v257;
        v216 = v268;
        LODWORD(v269) = v251;
        v217 = sub_4051C0(v262, s1);
        a1 = (__m128i *)v262;
        v2 = (int)v269;
        if ( !v217 )
        {
          v213 = memcmp(s1, "DST", 4uLL) == 0;
          v214 = "YEAR";
          if ( v213 )
          {
            v281.m128i_i64[0] = 0LL;
            v5 = 259;
            goto LABEL_71;
          }
          v210 = &off_416080;
          v251 = v269;
          LOBYTE(v268) = 0;
          while ( strcmp(s1, v214) )
          {
            v210 += 2;
            v214 = *v210;
            if ( !*v210 )
            {
              v227 = &s1[v216 - 1];
              v228 = v251;
              v229 = v257;
              v230 = v268;
              a1 = (__m128i *)v262;
              if ( *v227 == 83 )
              {
                v253 = v4;
                v237 = "YEAR";
                v238 = v257;
                v259 = v216;
                v239 = (const char **)&off_416080;
                v240 = v228;
                *v227 = 0;
                do
                {
                  v269 = (__int64)a1;
                  v268 = (__int64)v227;
                  v264 = v230;
                  v241 = strcmp(s1, v237);
                  v230 = v264;
                  v227 = (char *)v268;
                  a1 = (__m128i *)v269;
                  if ( !v241 )
                  {
                    v242 = v239;
                    v2 = v240;
                    v6 = v238;
                    v4 = v253;
                    v44 = *((int *)v242 + 3);
                    v5 = *((_DWORD *)v242 + 2);
                    goto LABEL_53;
                  }
                  v239 += 2;
                  v237 = *v239;
                }
                while ( *v239 );
                v228 = v240;
                v229 = v238;
                v216 = v259;
                v4 = v253;
                *(_BYTE *)v268 = 83;
              }
              v252 = v4;
              v231 = "TOMORROW";
              v232 = v229;
              v258 = v216;
              v233 = (const char **)&off_415F20;
              v234 = v228;
              do
              {
                v268 = (__int64)a1;
                v263 = v230;
                v235 = strcmp(s1, v231);
                v230 = v263;
                a1 = (__m128i *)v268;
                if ( !v235 )
                {
                  v236 = v233;
                  v2 = v234;
                  v6 = v232;
                  v4 = v252;
                  v44 = *((int *)v236 + 3);
                  v5 = *((_DWORD *)v236 + 2);
                  goto LABEL_53;
                }
                v233 += 2;
                v231 = *v233;
              }
              while ( *v233 );
              v2 = v234;
              v6 = v232;
              v243 = s1[0];
              v4 = v252;
              if ( v258 == 1 )
              {
                v246 = &off_415A40;
                if ( s1[0] == 65 )
                {
                  v281.m128i_i64[0] = -3600LL;
                  v5 = 273;
                  goto LABEL_71;
                }
                while ( 1 )
                {
                  v247 = v246[2];
                  if ( !v247 )
                    break;
                  if ( *v247 == s1[0] )
                  {
                    v44 = *((int *)v246 + 7);
                    v5 = *((_DWORD *)v246 + 6);
                    goto LABEL_53;
                  }
                  v246 += 2;
                }
              }
              v244 = s1;
              v245 = s1;
              if ( !s1[0] )
                goto LABEL_279;
              do
              {
                if ( v243 == 46 )
                  v230 = 1;
                else
                  ++v245;
                v243 = *++v244;
                *v245 = *v244;
              }
              while ( v243 );
              if ( !v230 || (v254 = a1, v217 = sub_4051C0((__int64)a1, s1), a1 = v254, v2 = v234, !v217) )
              {
LABEL_279:
                if ( !a1[13].m128i_i8[9] )
                  goto LABEL_114;
                v260 = a1;
                v255 = v2;
                v5 = 63;
                dcgettext(0LL, "error: unknown word '%s'\n", 5);
                sub_404F90();
                v8 = 2;
                v2 = v255;
                a1 = v260;
                goto LABEL_72;
              }
              goto LABEL_256;
            }
          }
LABEL_254:
          v215 = v210;
          v2 = v251;
          v6 = v257;
          a1 = (__m128i *)v262;
          v44 = *((int *)v215 + 3);
          v5 = *((_DWORD *)v215 + 2);
          goto LABEL_53;
        }
LABEL_256:
        v44 = *((int *)v217 + 3);
        v5 = *((_DWORD *)v217 + 2);
LABEL_53:
        v281.m128i_i64[0] = v44;
LABEL_3:
        if ( v5 <= 0 )
          goto LABEL_27;
        if ( v5 > 277 )
        {
          v4 += 2;
          v8 = 2;
          goto LABEL_6;
        }
        goto LABEL_71;
      }
LABEL_102:
      v30 = (unsigned __int8 *)a1->m128i_i64[0];
      v50 = 0;
LABEL_74:
      v51 = v30;
      v52 = 0LL;
      v53 = (unsigned __int8)v33;
      while ( 1 )
      {
        v54 = v53 - 48;
        if ( v50 == -1 )
          v54 = 48 - v53;
        v175 = __OFADD__(v54, v52);
        v55 = v54 + v52;
        if ( v175 )
          goto LABEL_114;
        v53 = v51[1];
        v56 = (__int64)(v51 + 1);
        if ( (unsigned int)(v53 - 48) > 9 )
          break;
        v175 = (unsigned __int128)(10 * (__int128)v55) >> 64 != 0;
        v52 = 10 * v55;
        if ( v175 )
          goto LABEL_114;
        ++v51;
      }
      if ( (v51[1] & 0xFD) != 44 || (v57 = (char)v51[2] - 48, (unsigned int)v57 > 9) )
      {
        a1->m128i_i64[0] = v56;
        v266 = v55;
        v281.m128i_i8[0] = v50 < 0;
        v267 = v56 - (_QWORD)v30;
        v8 = 20 - (v50 != 0);
        v5 = 275 - (v50 != 0);
        goto LABEL_72;
      }
      v58 = (char *)(v51 + 3);
      v59 = (char)v51[3];
      v60 = 8;
      v61 = v59;
      do
      {
        v62 = v59 - 48;
        v57 *= 10;
        if ( (unsigned int)(v59 - 48) <= 9 )
        {
          v59 = v58[1];
          v57 += v62;
          ++v58;
          v61 = v59;
          v62 = v59 - 48;
        }
        --v60;
      }
      while ( v60 );
      if ( v50 != -1 )
      {
        if ( v62 > 9 )
          goto LABEL_247;
        goto LABEL_87;
      }
      if ( v62 <= 9 )
      {
        if ( v61 != 48 )
        {
LABEL_112:
          ++v57;
          if ( (unsigned int)(*v58 - 48) > 9 )
            goto LABEL_90;
          do
LABEL_87:
            ++v58;
          while ( (unsigned int)(*v58 - 48) <= 9 );
          if ( v50 < 0 && v57 )
            goto LABEL_90;
LABEL_247:
          a1->m128i_i64[0] = (__int64)v58;
          v266 = v57;
          v281.m128i_i64[0] = v55;
          v8 = 22 - (v50 != 0);
          v5 = 277 - (v50 != 0);
          goto LABEL_72;
        }
        while ( 1 )
        {
          v89 = *++v58;
          if ( (unsigned int)(v89 - 48) > 9 )
            break;
          if ( (_BYTE)v89 != 48 )
            goto LABEL_112;
        }
      }
      if ( !v57 )
      {
        a1->m128i_i64[0] = (__int64)v58;
        v8 = 21;
        v5 = 276;
        v281.m128i_i64[0] = v55;
        v266 = 0LL;
        goto LABEL_72;
      }
LABEL_90:
      if ( v55 != 0x8000000000000000LL )
      {
        a1->m128i_i64[0] = (__int64)v58;
        v5 = 276;
        v281.m128i_i64[0] = v55 - 1;
        v266 = 1000000000 - v57;
        v8 = 21;
        goto LABEL_72;
      }
LABEL_114:
      v8 = 2;
      v5 = 63;
      goto LABEL_72;
    }
    v34 = v30 + 1;
    while ( 1 )
    {
      a1->m128i_i64[0] = (__int64)v34;
      v31 = *v34;
      v30 = v34;
      LOBYTE(v33) = *v34;
      if ( (unsigned __int8)v31 > 0x20u )
        break;
      ++v34;
      if ( ((1LL << v33) & 0x100003E00LL) == 0 )
        goto LABEL_35;
    }
LABEL_54:
    v45 = (v33 - 43) & 0xFD;
    if ( (unsigned int)(v31 - 48) <= 9 )
    {
      v49 = (_BYTE)v33 == 45;
      if ( v45 )
        goto LABEL_102;
      goto LABEL_66;
    }
    if ( v45 )
      break;
    v49 = (_BYTE)v33 == 45;
LABEL_66:
    v33 = a1->m128i_i64[0] + 1;
    v50 = !v49 ? 1 : -1;
    while ( 1 )
    {
      a1->m128i_i64[0] = v33;
      v30 = (unsigned __int8 *)v33;
      LOBYTE(v33) = *(_BYTE *)v33;
      LOBYTE(v32) = v33;
      if ( (unsigned __int8)v33 > 0x20u )
        break;
      v33 = (__int64)(v30 + 1);
      if ( ((1LL << v32) & 0x100003E00LL) == 0 )
      {
        v31 = (unsigned __int8)v32;
        goto LABEL_30;
      }
    }
    v31 = (unsigned __int8)v33;
    if ( (unsigned int)(unsigned __int8)v33 - 48 <= 9 )
      goto LABEL_74;
  }
  v35 = v31 - 65;
  if ( (unsigned int)(v31 - 65) <= 0x39 )
    goto LABEL_37;
LABEL_57:
  if ( (_BYTE)v33 != 40 )
  {
LABEL_26:
    a1->m128i_i64[0] = (__int64)(v30 + 1);
    v5 = *v30;
    if ( !(_BYTE)v5 )
      goto LABEL_27;
LABEL_71:
    v8 = (unsigned __int8)byte_416640[v5];
LABEL_72:
    v4 += v8;
    goto LABEL_6;
  }
  v46 = (_BYTE *)a1->m128i_i64[0];
  v47 = 0LL;
  while ( 1 )
  {
    v30 = v46 + 1;
    a1->m128i_i64[0] = (__int64)(v46 + 1);
    v48 = *v46;
    if ( !*v46 )
      break;
    if ( v48 == 40 )
      ++v47;
    else
      v47 -= v48 == 41;
    if ( !v47 )
    {
      v31 = (unsigned __int8)v46[1];
      v32 = (unsigned __int8)v46[1];
      goto LABEL_30;
    }
    ++v46;
  }
LABEL_27:
  v8 = 0;
  v5 = 0;
LABEL_6:
  if ( v4 <= 0x70 && byte_416400[v4] == v8 )
  {
    v2 = (unsigned __int8)byte_416480[v4];
    if ( byte_416480[v4] )
    {
      v9 = (__m128i *)v7;
      v5 = -2;
      v6 += 56;
      v265 = (v265 == 0) + v265 - 1;
      v281.m128i_i64[1] = v266;
      v10 = _mm_load_si128(&v281);
      v282.m128i_i64[0] = v267;
      v11 = v284;
      a2 = _mm_load_si128(&v282);
      *(__m128i *)v6 = v10;
      v12 = _mm_load_si128(&v283);
      *((_QWORD *)v6 + 6) = v11;
      *((__m128i *)v6 + 1) = a2;
      *((__m128i *)v6 + 2) = v12;
      goto LABEL_10;
    }
    v66 = *((_QWORD *)v6 + 13);
    v9 = (__m128i *)v7;
    v67 = (__int64)v6;
    a2 = _mm_loadu_si128((const __m128i *)(v6 + 72));
    v23 = *((_QWORD *)v6 + 7);
    v285 = _mm_loadu_si128((const __m128i *)(v6 + 56));
    v68 = _mm_loadu_si128((const __m128i *)(v6 + 88));
    v24 = *((_QWORD *)v6 + 8);
    v26 = *((_QWORD *)v6 + 9);
    v288 = v66;
    v69 = *((_QWORD *)v6 + 11);
    v27 = *((_QWORD *)v6 + 10);
    v286 = a2;
    v287 = v68;
    v256 = v69;
    v250 = *((_QWORD *)v6 + 12);
    v261 = *((_DWORD *)v6 + 26);
    v70 = -28;
    goto LABEL_99;
  }
  while ( 1 )
  {
    v13 = (unsigned __int8)byte_416540[v2];
    v14 = byte_416540[v2];
    if ( v14 )
    {
      v18 = (unsigned __int8)byte_416340[(unsigned __int8)byte_416540[v2]];
      v19 = (const __m128i *)&v6[56 * (1 - (unsigned __int8)byte_416340[(unsigned __int8)byte_416540[v2]])];
      v20 = _mm_loadu_si128(v19);
      v21 = _mm_loadu_si128(v19 + 1);
      v22 = _mm_loadu_si128(v19 + 2);
      v23 = v19->m128i_i64[0];
      v24 = v19->m128i_i64[1];
      v288 = v19[3].m128i_i64[0];
      v25 = v19[2].m128i_i64[0];
      v26 = v19[1].m128i_i64[0];
      v285 = v20;
      v27 = v19[1].m128i_i64[1];
      v286 = v21;
      v256 = v25;
      v28 = v19[2].m128i_i64[1];
      LODWORD(v19) = v19[3].m128i_i32[0];
      v287 = v22;
      v250 = v28;
      v261 = (int)v19;
      v29 = (unsigned __int8)(v14 - 4);
      switch ( (char)v29 )
      {
        case 0:
          a2 = _mm_loadu_si128((const __m128i *)v6);
          a1[10].m128i_i8[0] = 1;
          *(__m128i *)((char *)a1 + 88) = a2;
          v270 = (__m128i *)v24;
          v269 = v27;
          v268 = (__int64)a1;
          v104 = dcgettext(0LL, "number of seconds", 5);
          v9 = (__m128i *)(v7 - 2);
          v67 = (__int64)(v6 - 112);
          LODWORD(v2) = -93;
          v105 = (__int64)v104;
          v70 = 2;
          goto LABEL_147;
        case 3:
          v270 = (__m128i *)v24;
          v106 = (const char *)&unk_414A05;
          v269 = v27;
          ++a1[12].m128i_i64[1];
          ++a1[10].m128i_i64[1];
          v268 = (__int64)a1;
          goto LABEL_151;
        case 4:
          v270 = (__m128i *)v24;
          v106 = "time";
          v269 = v27;
          ++a1[12].m128i_i64[1];
          v268 = (__int64)a1;
          goto LABEL_151;
        case 5:
          v270 = (__m128i *)v24;
          v106 = (const char *)&unk_414A0E;
          v269 = v27;
          ++a1[11].m128i_i64[1];
          v268 = (__int64)a1;
          goto LABEL_151;
        case 6:
          v270 = (__m128i *)v24;
          v106 = "zone";
          ++a1[13].m128i_i64[0];
          v269 = v27;
          v268 = (__int64)a1;
          goto LABEL_151;
        case 7:
          v270 = (__m128i *)v24;
          v106 = "date";
          v269 = v27;
          ++a1[10].m128i_i64[1];
          v268 = (__int64)a1;
          goto LABEL_151;
        case 8:
          v270 = (__m128i *)v24;
          v106 = "day";
          v269 = v27;
          ++a1[11].m128i_i64[0];
          v268 = (__int64)a1;
LABEL_151:
          v107 = dcgettext(0LL, v106, 5);
          v67 = (__int64)(v6 - 56);
          v9 = (__m128i *)(v7 - 1);
          LODWORD(v2) = -93;
          v105 = (__int64)v107;
          v70 = 4;
LABEL_147:
          a1 = (__m128i *)v268;
          v27 = v269;
          v24 = (__int64)v270;
          if ( !*(_BYTE *)(v268 + 217) )
            break;
          LODWORD(v274) = -93;
          v273 = (char *)v67;
          LODWORD(v272) = v70;
          v271 = v270;
          v270 = v9;
          sub_4055A0(v105, v268);
          goto LABEL_149;
        case 9:
          v270 = a1;
          v141 = "relative";
          v269 = v24;
          v268 = v27;
          goto LABEL_183;
        case 10:
          v270 = a1;
          v269 = v24;
          v268 = v27;
          v143 = dcgettext(0LL, "number", 5);
          a1 = v270;
          v67 = (__int64)(v6 - 56);
          v9 = (__m128i *)(v7 - 1);
          v144 = (__int64)v143;
          LODWORD(v2) = -93;
          v70 = 4;
          v27 = v268;
          v24 = v269;
          if ( !v270[13].m128i_i8[9] )
            break;
          v145 = (__int64)v270;
          LODWORD(v274) = -93;
          v273 = v6 - 56;
          LODWORD(v272) = 4;
          v271 = (__m128i *)v269;
          v270 = (__m128i *)(v7 - 1);
          v269 = v268;
          v268 = (__int64)a1;
          sub_4055A0(v144, v145);
          goto LABEL_149;
        case 11:
          v270 = a1;
          v141 = "hybrid";
          v269 = v24;
          v268 = v27;
LABEL_183:
          v142 = dcgettext(0LL, v141, 5);
          a1 = v270;
          v67 = (__int64)(v6 - 56);
          v9 = (__m128i *)(v7 - 1);
          v129 = (__int64)v142;
          LODWORD(v2) = -93;
          v70 = 4;
          v27 = v268;
          v24 = v269;
          if ( !v270[13].m128i_i8[9] )
            break;
          LODWORD(v274) = -93;
          v130 = (__int64)v270;
          v273 = v6 - 56;
          LODWORD(v272) = 4;
          v271 = (__m128i *)v269;
          v270 = (__m128i *)(v7 - 1);
          v269 = v268;
          v268 = (__int64)a1;
          goto LABEL_175;
        case 14:
          v139 = *((_QWORD *)v6 - 6);
          v67 = (__int64)(v6 - 112);
          v9 = (__m128i *)(v7 - 2);
          a1[5].m128i_i64[0] = 0LL;
          a1[5].m128i_i64[1] = 0LL;
          LODWORD(v2) = -93;
          a1[4].m128i_i64[1] = v139;
          v140 = *(_QWORD *)v6;
          a1[6].m128i_i64[0] = 0LL;
          a1[1].m128i_i32[3] = v140;
          v70 = 7;
          break;
        case 15:
          v136 = *((_QWORD *)v6 - 6);
          v137 = *((_QWORD *)v6 - 20);
          v9 = (__m128i *)(v7 - 4);
          a1[5].m128i_i64[1] = 0LL;
          a1[6].m128i_i64[0] = 0LL;
          LODWORD(v2) = -93;
          a1[5].m128i_i64[0] = v136;
          v138 = *(_QWORD *)v6;
          a1[4].m128i_i64[1] = v137;
          v67 = (__int64)(v6 - 224);
          a1[1].m128i_i32[3] = v138;
          v70 = 7;
          break;
        case 16:
          v132 = *((_QWORD *)v6 - 20);
          LODWORD(v2) = -93;
          v133 = *((_QWORD *)v6 - 34);
          a1[5].m128i_i64[1] = *((_QWORD *)v6 - 7);
          v134 = *((int *)v6 - 12);
          a1[4].m128i_i64[1] = v133;
          v9 = (__m128i *)(v7 - 6);
          a1[6].m128i_i64[0] = v134;
          v135 = *(_QWORD *)v6;
          a1[5].m128i_i64[0] = v132;
          v67 = (__int64)(v6 - 336);
          a1[1].m128i_i32[3] = v135;
          v70 = 7;
          break;
        case 18:
          v113 = *((_QWORD *)v6 - 6);
          a1[5].m128i_i64[0] = 0LL;
          v67 = (__int64)(v6 - 112);
          v9 = (__m128i *)(v7 - 2);
          a1[5].m128i_i64[1] = 0LL;
          LODWORD(v2) = 20;
          a1[4].m128i_i64[1] = v113;
          v70 = 8;
          a1[6].m128i_i64[0] = 0LL;
          a1[1].m128i_i32[3] = 2;
          break;
        case 19:
          v111 = *((_QWORD *)v6 - 6);
          v112 = *((_QWORD *)v6 - 20);
          a1[5].m128i_i64[1] = 0LL;
          v9 = (__m128i *)(v7 - 4);
          a1[6].m128i_i64[0] = 0LL;
          LODWORD(v2) = 20;
          a1[4].m128i_i64[1] = v112;
          v67 = (__int64)(v6 - 224);
          a1[5].m128i_i64[0] = v111;
          v70 = 8;
          a1[1].m128i_i32[3] = 2;
          break;
        case 20:
          v97 = *((_QWORD *)v6 - 7);
          v98 = *((_QWORD *)v6 - 20);
          a1[1].m128i_i32[3] = 2;
          LODWORD(v2) = 20;
          v99 = *((_QWORD *)v6 - 34);
          a1[5].m128i_i64[1] = v97;
          v100 = *((int *)v6 - 12);
          a1[4].m128i_i64[1] = v99;
          v9 = (__m128i *)(v7 - 6);
          a1[5].m128i_i64[0] = v98;
          v67 = (__int64)(v6 - 336);
          a1[6].m128i_i64[0] = v100;
          v70 = 8;
          break;
        case 23:
          v92 = *((_QWORD *)v6 - 5);
          v93 = *(_QWORD *)v6;
          v270 = (__m128i *)v24;
          v94 = *((_QWORD *)v6 - 6);
          v95 = *(v6 - 56);
          v269 = v27;
          ++a1[13].m128i_i64[0];
          v268 = (__int64)a1;
          v96 = sub_405100(&a1[1].m128i_i32[2], v95, v94, v92, v93);
          a1 = (__m128i *)v268;
          v27 = v269;
          v24 = (__int64)v270;
          if ( !v96 )
            return 1LL;
          v67 = (__int64)(v6 - 112);
          v9 = (__m128i *)(v7 - 2);
          LODWORD(v2) = -27;
          v70 = 10;
          break;
        case 24:
          v67 = (__int64)(v6 - 56);
          v9 = (__m128i *)(v7 - 1);
          LODWORD(v2) = -93;
          a1[1].m128i_i32[1] = *(_QWORD *)v6;
          v70 = 11;
          break;
        case 25:
          a1[1].m128i_i32[1] = 1;
          v67 = (__int64)(v6 - 112);
          v9 = (__m128i *)(v7 - 2);
          LODWORD(v2) = -93;
          ++a1[12].m128i_i64[0];
          v70 = 11;
          break;
        case 26:
          v91 = *(_QWORD *)v6;
          goto LABEL_120;
        case 27:
          a1[1].m128i_i32[2] = 25200;
          v67 = (__int64)(v6 - 56);
          v9 = (__m128i *)(v7 - 1);
          LODWORD(v2) = -93;
          v70 = 12;
          break;
        case 28:
          v131 = *((_QWORD *)v6 - 7);
          v270 = (__m128i *)v24;
          v269 = v27;
          a1[1].m128i_i32[2] = v131;
          goto LABEL_171;
        case 29:
          v270 = (__m128i *)v24;
          v269 = v27;
          a1[1].m128i_i32[2] = 25200;
LABEL_171:
          v114 = *((_DWORD *)v6 + 12);
          v115 = __OFADD__(a1[9].m128i_i32[2], v114);
          a1[9].m128i_i32[2] += v114;
          v116 = a1[9].m128i_i64[0];
          v117 = *((_QWORD *)v6 + 5) + v116;
          LOBYTE(v116) = __OFADD__(*((_QWORD *)v6 + 5), v116);
          a1[9].m128i_i64[0] = v117;
          v118 = a1[8].m128i_i64[1];
          v119 = __OFADD__(*((_QWORD *)v6 + 4), v118);
          a1[8].m128i_i64[1] = *((_QWORD *)v6 + 4) + v118;
          v120 = a1[8].m128i_i64[0];
          v121 = __OFADD__(*((_QWORD *)v6 + 3), v120);
          a1[8].m128i_i64[0] = *((_QWORD *)v6 + 3) + v120;
          v122 = a1[7].m128i_i64[1];
          v123 = __OFADD__(*((_QWORD *)v6 + 2), v122);
          a1[7].m128i_i64[1] = *((_QWORD *)v6 + 2) + v122;
          v124 = a1[7].m128i_i64[0];
          v125 = __OFADD__(*((_QWORD *)v6 + 1), v124);
          a1[7].m128i_i64[0] = *((_QWORD *)v6 + 1) + v124;
          v126 = a1[6].m128i_i64[1];
          v127 = __OFADD__(*(_QWORD *)v6, v126);
          a1[6].m128i_i64[1] = *(_QWORD *)v6 + v126;
          if ( (unsigned __int8)(v123 | v121 | v119 | v115 | v116) | v125 || v127 )
            return 1LL;
          a1[10].m128i_i8[1] = 1;
          v268 = (__int64)a1;
          v128 = dcgettext(0LL, "relative", 5);
          a1 = (__m128i *)v268;
          v9 = (__m128i *)(v7 - 2);
          v67 = (__int64)(v6 - 112);
          v129 = (__int64)v128;
          LODWORD(v2) = -93;
          v70 = 12;
          v27 = v269;
          v24 = (__int64)v270;
          if ( *(_BYTE *)(v268 + 217) )
          {
            LODWORD(v274) = -93;
            v130 = v268;
            v273 = v6 - 112;
            LODWORD(v272) = 12;
            v271 = v270;
            v270 = (__m128i *)(v7 - 2);
LABEL_175:
            sub_405280(v129, v130);
LABEL_149:
            a1 = (__m128i *)v268;
            v27 = v269;
            v9 = v270;
            v24 = (__int64)v271;
            v70 = v272;
            v67 = (__int64)v273;
            LODWORD(v2) = v274;
          }
          break;
        case 30:
          v150 = *((_QWORD *)v6 - 5);
          v151 = *(_QWORD *)v6;
          v270 = (__m128i *)v24;
          v152 = *((_QWORD *)v6 - 6);
          v153 = *(v6 - 56);
          v269 = v27;
          v268 = (__int64)a1;
          if ( !(unsigned __int8)sub_405100(&a1[1].m128i_i32[2], v153, v152, v150, v151) )
            return 1LL;
          a1 = (__m128i *)v268;
          v154 = *(int *)(v268 + 24);
          v175 = __OFADD__(*((_QWORD *)v6 - 14), v154);
          v155 = *((_QWORD *)v6 - 14) + v154;
          v156 = v175;
          *(_DWORD *)(v268 + 24) = v155;
          if ( v155 != (int)v155 )
            v156 = 1;
          if ( v156 )
            return 1LL;
          v67 = (__int64)(v6 - 168);
          v9 = (__m128i *)(v7 - 3);
          LODWORD(v2) = -93;
          v70 = 12;
          v27 = v269;
          v24 = (__int64)v270;
          break;
        case 31:
          LODWORD(v91) = *(_DWORD *)v6 + 3600;
LABEL_120:
          a1[1].m128i_i32[2] = v91;
          v67 = (__int64)(v6 - 56);
          v9 = (__m128i *)(v7 - 1);
          LODWORD(v2) = -93;
          v70 = 12;
          break;
        case 32:
          v67 = (__int64)(v6 - 112);
          v9 = (__m128i *)(v7 - 2);
          LODWORD(v2) = -93;
          a1[1].m128i_i32[2] = *((_DWORD *)v6 - 14) + 3600;
          v70 = 12;
          break;
        case 33:
          v149 = *(_QWORD *)v6;
          a1->m128i_i64[1] = 0LL;
          v67 = (__int64)(v6 - 56);
          v9 = (__m128i *)(v7 - 1);
          LODWORD(v2) = -93;
          a1[1].m128i_i32[0] = v149;
          v70 = 13;
          break;
        case 34:
          v148 = *((_QWORD *)v6 - 7);
          a1->m128i_i64[1] = 0LL;
          v67 = (__int64)(v6 - 112);
          v9 = (__m128i *)(v7 - 2);
          LODWORD(v2) = -93;
          a1[1].m128i_i32[0] = v148;
          v70 = 13;
          break;
        case 35:
          v146 = *((_QWORD *)v6 - 7);
          goto LABEL_191;
        case 36:
          v146 = *((_QWORD *)v6 - 6);
LABEL_191:
          a1->m128i_i64[1] = v146;
          v147 = *(_QWORD *)v6;
          v67 = (__int64)(v6 - 112);
          v9 = (__m128i *)(v7 - 2);
          a1[14].m128i_i8[0] = 1;
          LODWORD(v2) = -93;
          a1[1].m128i_i32[0] = v147;
          v70 = 13;
          break;
        case 37:
          v9 = (__m128i *)(v7 - 3);
          v67 = (__int64)(v6 - 168);
          LODWORD(v2) = -93;
          a1[3].m128i_i64[1] = *((_QWORD *)v6 - 13);
          a1[4].m128i_i64[0] = *((_QWORD *)v6 + 1);
          v70 = 14;
          break;
        case 38:
          v185 = *((_QWORD *)v6 - 26);
          v186 = a1[13].m128i_i8[9];
          if ( v185 <= 3 )
          {
            v268 = *((_QWORD *)v6 - 27);
            if ( v186 )
            {
              v271 = a1;
              v270 = (__m128i *)v24;
              v269 = v27;
              dcgettext(0LL, "warning: value %ld has less than 4 digits. Assuming MM/DD/YY[YY]\n", 5);
              sub_404F90();
              a1 = v271;
              v24 = (__int64)v270;
              v27 = v269;
            }
            v218 = _mm_loadu_si128((const __m128i *)v6);
            v9 = (__m128i *)(v7 - 5);
            v67 = (__int64)(v6 - 280);
            LODWORD(v2) = -93;
            a1[3].m128i_i64[1] = v268;
            v219 = *((_QWORD *)v6 - 13);
            a1[2] = v218;
            a1[4].m128i_i64[0] = v219;
            a1[3].m128i_i64[0] = *((_QWORD *)v6 + 2);
            v70 = 14;
          }
          else
          {
            if ( v186 )
            {
              v226 = *((_QWORD *)v6 - 27);
              v272 = (__int64)a1;
              v271 = (__m128i *)v24;
              v270 = (__m128i *)v27;
              v269 = v185;
              v268 = v226;
              dcgettext(0LL, "warning: value %ld has %ld digits. Assuming YYYY/MM/DD\n", 5);
              sub_404F90();
              a1 = (__m128i *)v272;
              v24 = (__int64)v271;
              v27 = (__int64)v270;
            }
            a2 = _mm_loadu_si128((const __m128i *)v6 - 14);
            v9 = (__m128i *)(v7 - 5);
            v67 = (__int64)(v6 - 280);
            LODWORD(v2) = -93;
            a1[3].m128i_i64[0] = *((_QWORD *)v6 - 26);
            v187 = *((_QWORD *)v6 - 13);
            a1[2] = a2;
            a1[3].m128i_i64[1] = v187;
            a1[4].m128i_i64[0] = *((_QWORD *)v6 + 1);
            v70 = 14;
          }
          break;
        case 39:
          a1[4].m128i_i64[0] = *((_QWORD *)v6 - 13);
          a1[3].m128i_i64[1] = *((_QWORD *)v6 - 7);
          v184 = *((_QWORD *)v6 + 1);
          a1[2].m128i_i64[1] = -v184;
          if ( v184 == 0x8000000000000000LL )
            return 1LL;
          goto LABEL_211;
        case 40:
          a1[3].m128i_i64[1] = *((_QWORD *)v6 - 14);
          v182 = *((_QWORD *)v6 - 6);
          a1[4].m128i_i64[0] = -v182;
          if ( v182 == 0x8000000000000000LL )
            return 1LL;
          v183 = *((_QWORD *)v6 + 1);
          a1[2].m128i_i64[1] = -v183;
          if ( v183 == 0x8000000000000000LL )
            return 1LL;
          goto LABEL_211;
        case 41:
          v67 = (__int64)(v6 - 112);
          v9 = (__m128i *)(v7 - 2);
          LODWORD(v2) = -93;
          a1[3].m128i_i64[1] = *((_QWORD *)v6 - 7);
          a1[4].m128i_i64[0] = *((_QWORD *)v6 + 1);
          v70 = 14;
          break;
        case 42:
          a2 = _mm_loadu_si128((const __m128i *)v6);
          v9 = (__m128i *)(v7 - 4);
          v67 = (__int64)(v6 - 224);
          LODWORD(v2) = -93;
          a1[3].m128i_i64[1] = *((_QWORD *)v6 - 21);
          v181 = *((_QWORD *)v6 - 13);
          a1[2] = a2;
          a1[4].m128i_i64[0] = v181;
          a1[3].m128i_i64[0] = *((_QWORD *)v6 + 2);
          v70 = 14;
          break;
        case 43:
          v67 = (__int64)(v6 - 112);
          v9 = (__m128i *)(v7 - 2);
          LODWORD(v2) = -93;
          a1[4].m128i_i64[0] = *((_QWORD *)v6 - 6);
          a1[3].m128i_i64[1] = *(_QWORD *)v6;
          v70 = 14;
          break;
        case 44:
          v179 = _mm_loadu_si128((const __m128i *)v6);
          a1[4].m128i_i64[0] = *((_QWORD *)v6 - 13);
          v180 = *((_QWORD *)v6 - 7);
          a1[2] = v179;
          a1[3].m128i_i64[1] = v180;
LABEL_211:
          v9 = (__m128i *)(v7 - 3);
          v67 = (__int64)(v6 - 168);
          LODWORD(v2) = -93;
          a1[3].m128i_i64[0] = *((_QWORD *)v6 + 2);
          v70 = 14;
          break;
        case 46:
          a2 = _mm_loadu_si128((const __m128i *)v6 - 7);
          a1[3].m128i_i64[0] = *((_QWORD *)v6 - 12);
          v177 = *((_QWORD *)v6 - 6);
          a1[2] = a2;
          a1[3].m128i_i64[1] = -v177;
          if ( v177 == 0x8000000000000000LL )
            return 1LL;
          v178 = *((_QWORD *)v6 + 1);
          a1[4].m128i_i64[0] = -v178;
          if ( v178 == 0x8000000000000000LL )
            return 1LL;
          v67 = (__int64)(v6 - 168);
          v9 = (__m128i *)(v7 - 3);
          LODWORD(v2) = -93;
          v70 = 15;
          break;
        case 47:
          v157 = *((_QWORD *)v6 - 7);
          v158 = *((_QWORD *)v6 - 6);
          v159 = *((_QWORD *)v6 - 5);
          v160 = *((_QWORD *)v6 - 4);
          v161 = *((_DWORD *)v6 - 2);
          v272 = a1[9].m128i_i64[0];
          v162 = a1[8].m128i_i64[0];
          v268 = v157;
          v269 = v158;
          v163 = a1[8].m128i_i64[1];
          v273 = (char *)v162;
          v164 = a1[7].m128i_i64[1];
          v270 = (__m128i *)v159;
          v165 = *((_QWORD *)v6 - 2);
          v274 = v164;
          v166 = a1[7].m128i_i64[0];
          v271 = (__m128i *)v160;
          v167 = *((_QWORD *)v6 - 3);
          v275 = v166;
          v168 = a1[9].m128i_i32[2];
          v276 = a1[6].m128i_i64[1];
          v169 = v272;
          if ( *(int *)v6 < 0 )
          {
            a1[9].m128i_i32[2] = v168 - v161;
            v220 = __OFSUB__(v168, v161);
            v221 = __OFSUB__(v169, v165);
            a1[9].m128i_i64[0] = v169 - v165;
            v222 = __OFSUB__(v163, v167);
            a1[8].m128i_i64[1] = v163 - v167;
            v223 = __OFSUB__(v273, v271);
            a1[8].m128i_i64[0] = v273 - (char *)v271;
            v224 = __OFSUB__(v274, v270);
            a1[7].m128i_i64[1] = v274 - (_QWORD)v270;
            v270 = (__m128i *)v224;
            v225 = __OFSUB__(v275, v269);
            a1[7].m128i_i64[0] = v275 - v269;
            v269 = v225;
            v175 = __OFSUB__(v276, v268);
            a1[6].m128i_i64[1] = v276 - v268;
            v176 = v269 | (unsigned __int8)v270 | (v223 || v222 || v220 || v221);
          }
          else
          {
            a1[9].m128i_i32[2] = v161 + v168;
            v170 = __OFADD__(v161, v168);
            v171 = __OFADD__(v165, v169);
            a1[9].m128i_i64[0] = v165 + v169;
            a1[8].m128i_i64[1] = v167 + v163;
            v272 = __OFADD__(v167, v163);
            v172 = __OFADD__(v271, v273);
            a1[8].m128i_i64[0] = (__int64)&v273[(_QWORD)v271];
            v173 = __OFADD__(v270, v274);
            a1[7].m128i_i64[1] = (__int64)v270->m128i_i64 + v274;
            v174 = __OFADD__(v269, v275);
            a1[7].m128i_i64[0] = v269 + v275;
            v269 = v174;
            v175 = __OFADD__(v268, v276);
            a1[6].m128i_i64[1] = v268 + v276;
            v176 = v269 | v173 | v172 | v272 | (v170 || v171);
          }
          if ( v175 | v176 )
            return 1LL;
          a1[10].m128i_i8[1] = 1;
          v67 = (__int64)(v6 - 112);
          v9 = (__m128i *)(v7 - 2);
          LODWORD(v2) = -93;
          v70 = 16;
          break;
        case 48:
        case 49:
          v76 = *((_DWORD *)v6 + 12);
          v77 = __OFADD__(a1[9].m128i_i32[2], v76);
          a1[9].m128i_i32[2] += v76;
          v78 = a1[9].m128i_i64[0];
          v79 = *((_QWORD *)v6 + 5) + v78;
          LOBYTE(v78) = __OFADD__(*((_QWORD *)v6 + 5), v78);
          a1[9].m128i_i64[0] = v79;
          v80 = a1[8].m128i_i64[1];
          v81 = __OFADD__(*((_QWORD *)v6 + 4), v80);
          a1[8].m128i_i64[1] = *((_QWORD *)v6 + 4) + v80;
          v82 = a1[8].m128i_i64[0];
          v83 = __OFADD__(*((_QWORD *)v6 + 3), v82);
          a1[8].m128i_i64[0] = *((_QWORD *)v6 + 3) + v82;
          v84 = a1[7].m128i_i64[1];
          v175 = __OFADD__(*((_QWORD *)v6 + 2), v84);
          a1[7].m128i_i64[1] = *((_QWORD *)v6 + 2) + v84;
          v85 = a1[7].m128i_i64[0];
          v268 = v175;
          v175 = __OFADD__(*((_QWORD *)v6 + 1), v85);
          a1[7].m128i_i64[0] = *((_QWORD *)v6 + 1) + v85;
          v269 = v175;
          v86 = a1[6].m128i_i64[1];
          v87 = __OFADD__(*(_QWORD *)v6, v86);
          a1[6].m128i_i64[1] = *(_QWORD *)v6 + v86;
          if ( (unsigned __int8)(v268 | v83 | v81 | v77 | v78) | (unsigned __int8)v269 || v87 )
            return 1LL;
          a1[10].m128i_i8[1] = 1;
          v67 = (__int64)(v6 - 56);
          v9 = (__m128i *)(v7 - 1);
          LODWORD(v2) = -93;
          v70 = 16;
          break;
        case 50:
          HIDWORD(v288) = 0;
          v23 = *((_QWORD *)v6 - 7);
          goto LABEL_162;
        case 51:
          HIDWORD(v288) = 0;
          v23 = *((_QWORD *)v6 - 6);
LABEL_162:
          v67 = (__int64)(v6 - 112);
          v9 = (__m128i *)(v7 - 2);
          LODWORD(v2) = -93;
          v70 = 17;
          goto LABEL_158;
        case 52:
          v67 = (__int64)(v6 - 56);
          v9 = (__m128i *)(v7 - 1);
          v70 = 17;
          v27 = 0LL;
          LODWORD(v2) = -93;
          v26 = 0LL;
          HIDWORD(v288) = 0;
          v24 = 0LL;
          v261 = 0;
          v23 = 1LL;
          v250 = 0LL;
          v256 = 0LL;
          break;
        case 53:
          v24 = *((_QWORD *)v6 - 7);
          v67 = (__int64)(v6 - 112);
          v9 = (__m128i *)(v7 - 2);
          HIDWORD(v288) = 0;
          LODWORD(v2) = -93;
          v70 = 17;
          goto LABEL_144;
        case 54:
          v24 = *((_QWORD *)v6 - 6);
          v67 = (__int64)(v6 - 112);
          v9 = (__m128i *)(v7 - 2);
          HIDWORD(v288) = 0;
          LODWORD(v2) = -93;
          v70 = 17;
          goto LABEL_144;
        case 55:
          v67 = (__int64)(v6 - 56);
          v9 = (__m128i *)(v7 - 1);
          v70 = 17;
          v27 = 0LL;
          LODWORD(v2) = -93;
          v26 = 0LL;
          v23 = 0LL;
          HIDWORD(v288) = 0;
          v261 = 0;
          v24 = 1LL;
          v250 = 0LL;
          v256 = 0LL;
          break;
        case 56:
          v103 = *(_QWORD *)v6 * *((_QWORD *)v6 - 7);
          v175 = (unsigned __int128)(*(__int64 *)v6 * (__int128)*((__int64 *)v6 - 7)) >> 64 != 0;
          a2 = 0LL;
          v288 = 0LL;
          v285 = 0LL;
          v286 = 0LL;
          v287 = 0LL;
          v26 = v103;
          if ( v175 )
            return 1LL;
          goto LABEL_139;
        case 57:
          v102 = *(_QWORD *)v6 * *((_QWORD *)v6 - 6);
          v175 = (unsigned __int128)(*(__int64 *)v6 * (__int128)*((__int64 *)v6 - 6)) >> 64 != 0;
          a2 = 0LL;
          v288 = 0LL;
          v285 = 0LL;
          v286 = 0LL;
          v287 = 0LL;
          v26 = v102;
          if ( v175 )
            return 1LL;
LABEL_139:
          v67 = (__int64)(v6 - 112);
          v9 = (__m128i *)(v7 - 2);
          LODWORD(v2) = -93;
          v70 = 17;
          goto LABEL_137;
        case 58:
          v26 = *(_QWORD *)v6;
          v67 = (__int64)(v6 - 56);
          v9 = (__m128i *)(v7 - 1);
          v70 = 17;
          HIDWORD(v288) = 0;
          LODWORD(v2) = -93;
          goto LABEL_137;
        case 59:
          v27 = *((_QWORD *)v6 - 7);
          v67 = (__int64)(v6 - 112);
          v9 = (__m128i *)(v7 - 2);
          HIDWORD(v288) = 0;
          LODWORD(v2) = -93;
          v70 = 17;
          goto LABEL_134;
        case 60:
          v27 = *((_QWORD *)v6 - 6);
          v67 = (__int64)(v6 - 112);
          v9 = (__m128i *)(v7 - 2);
          HIDWORD(v288) = 0;
          LODWORD(v2) = -93;
          v70 = 17;
          goto LABEL_134;
        case 61:
          v67 = (__int64)(v6 - 56);
          v9 = (__m128i *)(v7 - 1);
          v70 = 17;
          v26 = 0LL;
          LODWORD(v2) = -93;
          v24 = 0LL;
          v23 = 0LL;
          HIDWORD(v288) = 0;
          v261 = 0;
          v27 = 1LL;
          v250 = 0LL;
          v256 = 0LL;
          break;
        case 62:
          HIDWORD(v288) = 0;
          v101 = *((_QWORD *)v6 - 7);
          goto LABEL_129;
        case 63:
          HIDWORD(v288) = 0;
          v101 = *((_QWORD *)v6 - 6);
LABEL_129:
          v256 = v101;
          v67 = (__int64)(v6 - 112);
          v9 = (__m128i *)(v7 - 2);
          LODWORD(v2) = -93;
          v70 = 17;
          goto LABEL_130;
        case 64:
          v67 = (__int64)(v6 - 56);
          v9 = (__m128i *)(v7 - 1);
          v70 = 17;
          v27 = 0LL;
          LODWORD(v2) = -93;
          v26 = 0LL;
          v24 = 0LL;
          v23 = 0LL;
          HIDWORD(v288) = 0;
          v261 = 0;
          v250 = 0LL;
          v256 = 1LL;
          break;
        case 65:
          HIDWORD(v288) = 0;
          v90 = *((_QWORD *)v6 - 7);
          goto LABEL_116;
        case 66:
          HIDWORD(v288) = 0;
          v90 = *((_QWORD *)v6 - 6);
LABEL_116:
          v250 = v90;
          v67 = (__int64)(v6 - 112);
          v9 = (__m128i *)(v7 - 2);
          LODWORD(v2) = -93;
          v70 = 17;
          goto LABEL_117;
        case 67:
        case 68:
          v88 = *((_QWORD *)v6 - 7);
          v67 = (__int64)(v6 - 112);
          v9 = (__m128i *)(v7 - 2);
          HIDWORD(v288) = 0;
          LODWORD(v2) = -93;
          v250 = v88;
          v261 = *((_DWORD *)v6 - 12);
          v70 = 17;
          goto LABEL_107;
        case 69:
          v67 = (__int64)(v6 - 56);
          v9 = (__m128i *)(v7 - 1);
          HIDWORD(v288) = 0;
          LODWORD(v2) = -93;
          v70 = 17;
          v261 = 0;
          v250 = 1LL;
          goto LABEL_107;
        case 71:
          v23 = *((_QWORD *)v6 - 6);
          v67 = (__int64)(v6 - 112);
          v9 = (__m128i *)(v7 - 2);
          HIDWORD(v288) = 0;
          LODWORD(v2) = 60;
          v70 = 18;
LABEL_158:
          v261 = 0;
          v27 = 0LL;
          v26 = 0LL;
          v24 = 0LL;
          v250 = 0LL;
          v256 = 0LL;
          break;
        case 72:
          v24 = *((_QWORD *)v6 - 6);
          v67 = (__int64)(v6 - 112);
          v9 = (__m128i *)(v7 - 2);
          HIDWORD(v288) = 0;
          LODWORD(v2) = 60;
          v70 = 18;
LABEL_144:
          v261 = 0;
          v27 = 0LL;
          v26 = 0LL;
          v23 = 0LL;
          v250 = 0LL;
          v256 = 0LL;
          break;
        case 73:
          v108 = *(_QWORD *)v6 * *((_QWORD *)v6 - 6);
          v175 = (unsigned __int128)(*(__int64 *)v6 * (__int128)*((__int64 *)v6 - 6)) >> 64 != 0;
          a2 = 0LL;
          v288 = 0LL;
          v285 = 0LL;
          v286 = 0LL;
          v287 = 0LL;
          v26 = v108;
          if ( v175 )
            return 1LL;
          v67 = (__int64)(v6 - 112);
          v9 = (__m128i *)(v7 - 2);
          LODWORD(v2) = 60;
          v70 = 18;
          goto LABEL_137;
        case 74:
          v27 = *((_QWORD *)v6 - 6);
          v67 = (__int64)(v6 - 112);
          v9 = (__m128i *)(v7 - 2);
          HIDWORD(v288) = 0;
          LODWORD(v2) = 60;
          v70 = 18;
LABEL_134:
          v261 = 0;
          v26 = 0LL;
          v24 = 0LL;
          v23 = 0LL;
          v250 = 0LL;
          v256 = 0LL;
          break;
        case 75:
          v110 = *((_QWORD *)v6 - 6);
          v67 = (__int64)(v6 - 112);
          v9 = (__m128i *)(v7 - 2);
          HIDWORD(v288) = 0;
          LODWORD(v2) = 60;
          v256 = v110;
          v70 = 18;
LABEL_130:
          v27 = 0LL;
          v26 = 0LL;
          v24 = 0LL;
          v23 = 0LL;
          v261 = 0;
          v250 = 0LL;
          break;
        case 76:
          v109 = *((_QWORD *)v6 - 6);
          v67 = (__int64)(v6 - 112);
          v9 = (__m128i *)(v7 - 2);
          HIDWORD(v288) = 0;
          LODWORD(v2) = 60;
          v250 = v109;
          v70 = 18;
LABEL_117:
          v261 = 0;
LABEL_107:
          v27 = 0LL;
          v26 = 0LL;
          v24 = 0LL;
          v23 = 0LL;
          v256 = 0LL;
          break;
        case 77:
          v26 = *(_QWORD *)v6;
          v67 = (__int64)(v6 - 56);
          v9 = (__m128i *)(v7 - 1);
          v70 = 19;
          HIDWORD(v288) = 0;
          LODWORD(v2) = -93;
LABEL_137:
          v261 = 0;
          v27 = 0LL;
          v24 = 0LL;
          v23 = 0LL;
          v250 = 0LL;
          v256 = 0LL;
          break;
        case 81:
          v23 = *((_QWORD *)v6 + 1);
          v67 = (__int64)(v6 - 56);
          v9 = (__m128i *)(v7 - 1);
          v24 = 0LL;
          LODWORD(v2) = -93;
          v70 = 21;
          break;
        case 83:
          v23 = *((_QWORD *)v6 + 1);
          v67 = (__int64)(v6 - 56);
          v9 = (__m128i *)(v7 - 1);
          v24 = 0LL;
          LODWORD(v2) = -92;
          v70 = 22;
          break;
        case 84:
          v270 = (__m128i *)v24;
          v269 = v27;
          v249 = *(_QWORD *)v6;
          v268 = (__int64)a1;
          sub_404CA0(a1, v18, v29, v13, v2, (__int64)a1, a2, v249);
          v67 = (__int64)(v6 - 56);
          v9 = (__m128i *)(v7 - 1);
          LODWORD(v2) = -93;
          v70 = 23;
          a1 = (__m128i *)v268;
          v27 = v269;
          v24 = (__int64)v270;
          break;
        case 85:
          v270 = (__m128i *)v24;
          v269 = v27;
          v248 = *((_QWORD *)v6 - 7);
          v268 = (__int64)a1;
          sub_404CA0(a1, v18, v29, v13, v2, (__int64)a1, a2, v248);
          v188 = *((_DWORD *)v6 + 12);
          a1 = (__m128i *)v268;
          v189 = __OFADD__(*(_DWORD *)(v268 + 152), v188);
          *(_DWORD *)(v268 + 152) += v188;
          v190 = a1[9].m128i_i64[0];
          v191 = *((_QWORD *)v6 + 5) + v190;
          LOBYTE(v190) = __OFADD__(*((_QWORD *)v6 + 5), v190);
          a1[9].m128i_i64[0] = v191;
          v192 = a1[8].m128i_i64[1];
          v193 = __OFADD__(*((_QWORD *)v6 + 4), v192);
          a1[8].m128i_i64[1] = *((_QWORD *)v6 + 4) + v192;
          v194 = a1[8].m128i_i64[0];
          v195 = __OFADD__(*((_QWORD *)v6 + 3), v194);
          a1[8].m128i_i64[0] = *((_QWORD *)v6 + 3) + v194;
          v196 = a1[7].m128i_i64[1];
          v197 = __OFADD__(*((_QWORD *)v6 + 2), v196);
          a1[7].m128i_i64[1] = *((_QWORD *)v6 + 2) + v196;
          v198 = a1[7].m128i_i64[0];
          v199 = __OFADD__(*((_QWORD *)v6 + 1), v198);
          a1[7].m128i_i64[0] = *((_QWORD *)v6 + 1) + v198;
          v200 = a1[6].m128i_i64[1];
          v201 = __OFADD__(*(_QWORD *)v6, v200);
          a1[6].m128i_i64[1] = *(_QWORD *)v6 + v200;
          if ( (unsigned __int8)(v197 | v195 | v193 | v189 | v190) | v199 || v201 )
            return 1LL;
          a1[10].m128i_i8[1] = 1;
          v67 = (__int64)(v6 - 112);
          v9 = (__m128i *)(v7 - 2);
          LODWORD(v2) = -93;
          v70 = 24;
          v27 = v269;
          v24 = (__int64)v270;
          break;
        case 86:
          LODWORD(v2) = 43;
          v23 = -1LL;
          v9 = (__m128i *)&v7[-v18];
          v70 = 25;
          v67 = (__int64)&v6[-56 * v18];
          break;
        case 87:
          v23 = *((_QWORD *)v6 + 1);
          v67 = (__int64)(v6 - 112);
          v9 = (__m128i *)(v7 - 2);
          LODWORD(v2) = 43;
          v70 = 25;
          break;
        default:
          v70 = (unsigned __int8)byte_4163A0[v13] - 28;
          LODWORD(v2) = byte_416520[v70];
          v9 = (__m128i *)&v7[-v18];
          v67 = (__int64)&v6[-56 * v18];
          break;
      }
LABEL_99:
      v285.m128i_i64[0] = v23;
      v6 = (char *)(v67 + 56);
      v285.m128i_i64[1] = v24;
      v71 = _mm_load_si128(&v285);
      v287.m128i_i64[0] = v256;
      v286.m128i_i64[0] = v26;
      v286.m128i_i64[1] = v27;
      v72 = _mm_load_si128(&v286);
      v287.m128i_i64[1] = v250;
      v73 = _mm_load_si128(&v287);
      LODWORD(v288) = v261;
      v74 = v288;
      *(__m128i *)(v67 + 56) = v71;
      *(_QWORD *)(v67 + 104) = v74;
      *(__m128i *)(v67 + 72) = v72;
      *(__m128i *)(v67 + 88) = v73;
      v75 = v9->m128i_i16[0] + (_DWORD)v2;
      if ( v75 <= 0x70 && v9->m128i_i16[0] == byte_416400[v75] )
        v2 = (unsigned __int8)byte_416480[v75];
      else
        v2 = byte_416500[v70];
      goto LABEL_10;
    }
    if ( v265 == 3 )
    {
      if ( v5 > 0 )
      {
        v5 = -2;
        goto LABEL_21;
      }
      if ( !v5 )
        return 1LL;
    }
LABEL_21:
    while ( 1 )
    {
      v16 = byte_4165C0[v2];
      if ( v16 != -93 )
      {
        v17 = v16 + 1;
        if ( v17 <= 0x70 && byte_416400[v17] == 1 )
        {
          v2 = (unsigned __int8)byte_416480[v17];
          if ( byte_416480[v17] )
            break;
        }
      }
      if ( v7 == v279 )
        return 1LL;
      v2 = *--v7;
      v6 -= 56;
    }
    v6 += 56;
    v9 = (__m128i *)v7;
    v265 = 3;
    v281.m128i_i64[1] = v266;
    v63 = _mm_load_si128(&v281);
    v282.m128i_i64[0] = v267;
    v64 = v284;
    *(__m128i *)v6 = v63;
    v65 = _mm_load_si128(&v282);
    *((_QWORD *)v6 + 6) = v64;
    *((__m128i *)v6 + 1) = v65;
    a2 = _mm_load_si128(&v283);
    *((__m128i *)v6 + 2) = a2;
LABEL_10:
    v7 = &v9->m128i_i16[1];
    v9->m128i_i16[1] = v2;
    if ( &v9->m128i_i16[1] >= &v280 )
      return 2LL;
    if ( (_DWORD)v2 == 12 )
      return 0LL;
    v4 = byte_4165C0[(int)v2];
    if ( v4 != -93 )
      goto LABEL_2;
  }
}

__int64 __fastcall sub_407BC0(__int64 a1, const char *a2, struct timespec *a3, char a4, __int64 a5, char *a6)
{
  __time_t tv_sec; // rbx
  const char *v10; // r12
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  char v13; // r15
  _BYTE *v14; // rsi
  _BYTE *v15; // rdx
  char v16; // al
  signed __int64 v17; // rdi
  _BYTE *v18; // rax
  char v19; // dl
  __int64 v20; // r15
  bool v21; // zf
  int v22; // r12d
  unsigned int v23; // ebx
  unsigned __int64 v24; // r12
  char v25; // bp
  __int64 v26; // rax
  unsigned __int8 v27; // bp
  _BOOL4 v28; // edx
  unsigned int v29; // esi
  unsigned __int8 v30; // cl
  unsigned int v31; // edx
  __int64 v32; // rax
  unsigned int v33; // r9d
  unsigned int v34; // r8d
  __int32 v35; // edi
  int v36; // eax
  __int64 v37; // rbx
  int v38; // r13d
  int v39; // r12d
  const char *v40; // rax
  const char *v41; // rcx
  const char *v42; // rdx
  const char *v43; // r8
  const char *v44; // rdi
  const char *v45; // r9
  __int64 v46; // rax
  __int64 v47; // rdx
  char *i; // rdx
  char *v50; // rax
  unsigned __int64 v51; // rax
  __int64 v52; // rdx
  const char *v53; // rsi
  char *v54; // rax
  char *v55; // rcx
  char *v56; // rax
  __int64 v57; // rax
  const char *v58; // rax
  FILE *v59; // rsi
  const char *v60; // rsi
  __int64 v61; // rcx
  __int64 v62; // rbp
  unsigned __int64 v63; // rbp
  const char *v64; // rsi
  __int64 v65; // rax
  __int64 v66; // r12
  bool v67; // r13
  unsigned __int64 v68; // rax
  __int64 v69; // rsi
  int v70; // ecx
  __int64 v71; // rax
  bool v72; // of
  __int64 v73; // rax
  int v74; // edx
  __int64 v75; // rdi
  __int64 v76; // rdx
  unsigned __int8 v77; // al
  __int64 v78; // rdx
  __int64 v79; // r11
  __int64 v80; // rsi
  __int64 v81; // r9
  unsigned __int64 v82; // rcx
  int v83; // eax
  __int64 v84; // rbx
  __int64 v85; // r12
  __int64 v86; // rdx
  __int64 v87; // rbx
  __int64 v88; // r13
  __int64 v89; // rbx
  __int64 v90; // rbx
  __int64 v91; // r9
  __int64 v92; // rcx
  __int64 v93; // r13
  __int64 v94; // r12
  __int64 v95; // rdx
  __int64 v96; // rax
  _BOOL4 v97; // edx
  __int64 v98; // r9
  __int64 v99; // r10
  __int64 v100; // r13
  const char *v101; // rax
  char *ptr; // [rsp+8h] [rbp-430h]
  int srca; // [rsp+10h] [rbp-428h]
  _BOOL4 v106; // [rsp+18h] [rbp-420h]
  __int64 v107; // [rsp+18h] [rbp-420h]
  int v108; // [rsp+18h] [rbp-420h]
  unsigned int v109; // [rsp+18h] [rbp-420h]
  __syscall_slong_t tv_nsec; // [rsp+20h] [rbp-418h]
  int v111; // [rsp+20h] [rbp-418h]
  int timera; // [rsp+28h] [rbp-410h]
  size_t v114; // [rsp+30h] [rbp-408h]
  int v115; // [rsp+30h] [rbp-408h]
  int v116; // [rsp+38h] [rbp-400h]
  int v117; // [rsp+44h] [rbp-3F4h]
  __int64 v118; // [rsp+48h] [rbp-3F0h]
  int v119; // [rsp+50h] [rbp-3E8h]
  int v120; // [rsp+54h] [rbp-3E4h]
  int v121; // [rsp+58h] [rbp-3E0h]
  int v122; // [rsp+5Ch] [rbp-3DCh]
  struct timespec v123; // [rsp+60h] [rbp-3D8h] BYREF
  char v124[32]; // [rsp+70h] [rbp-3C8h] BYREF
  unsigned __int64 v125; // [rsp+90h] [rbp-3A8h] BYREF
  unsigned __int64 v126; // [rsp+98h] [rbp-3A0h]
  unsigned __int64 v127; // [rsp+A0h] [rbp-398h]
  int v128; // [rsp+A8h] [rbp-390h]
  int v129; // [rsp+B0h] [rbp-388h]
  __int64 v130; // [rsp+B8h] [rbp-380h]
  unsigned __int64 v131; // [rsp+D0h] [rbp-368h] BYREF
  unsigned __int64 v132; // [rsp+D8h] [rbp-360h]
  unsigned __int64 v133; // [rsp+E0h] [rbp-358h]
  int v134; // [rsp+F0h] [rbp-348h]
  int v135[8]; // [rsp+110h] [rbp-328h] BYREF
  int v136; // [rsp+130h] [rbp-308h]
  char *v137; // [rsp+140h] [rbp-2F8h]
  struct tm tp; // [rsp+150h] [rbp-2E8h] BYREF
  __int64 v139[14]; // [rsp+190h] [rbp-2A8h] BYREF
  char v140; // [rsp+200h] [rbp-238h] BYREF
  _BYTE v141[3]; // [rsp+270h] [rbp-1C8h] BYREF
  char v142[29]; // [rsp+273h] [rbp-1C5h] BYREF
  int v143; // [rsp+290h] [rbp-1A8h]
  int v144; // [rsp+298h] [rbp-1A0h]
  char *v145; // [rsp+2A0h] [rbp-198h]
  __m128i v146; // [rsp+2E0h] [rbp-158h] BYREF
  int v147; // [rsp+2F0h] [rbp-148h]
  int v148; // [rsp+2F4h] [rbp-144h]
  int v149; // [rsp+2F8h] [rbp-140h]
  unsigned int v150; // [rsp+2FCh] [rbp-13Ch]
  __int64 v151; // [rsp+308h] [rbp-130h]
  __int64 v152; // [rsp+310h] [rbp-128h]
  __int64 v153; // [rsp+318h] [rbp-120h]
  __int64 v154; // [rsp+320h] [rbp-118h]
  unsigned __int64 v155; // [rsp+328h] [rbp-110h]
  __int64 v156; // [rsp+330h] [rbp-108h]
  __m128i v157; // [rsp+338h] [rbp-100h] BYREF
  __int128 v158; // [rsp+348h] [rbp-F0h]
  __int128 v159; // [rsp+358h] [rbp-E0h]
  __int128 v160; // [rsp+368h] [rbp-D0h]
  __int64 v161; // [rsp+378h] [rbp-C0h]
  __int16 v162; // [rsp+380h] [rbp-B8h]
  __int64 v163; // [rsp+388h] [rbp-B0h]
  __int64 v164; // [rsp+390h] [rbp-A8h]
  __int64 v165; // [rsp+398h] [rbp-A0h]
  __int64 v166; // [rsp+3A0h] [rbp-98h]
  __int64 v167; // [rsp+3A8h] [rbp-90h]
  __int64 v168; // [rsp+3B0h] [rbp-88h]
  char v169; // [rsp+3B8h] [rbp-80h]
  unsigned __int8 v170; // [rsp+3B9h] [rbp-7Fh]
  __int16 v171; // [rsp+3BAh] [rbp-7Eh]
  int v172; // [rsp+3BCh] [rbp-7Ch]
  char v173; // [rsp+3C0h] [rbp-78h]
  char *s1; // [rsp+3C8h] [rbp-70h]
  int v175; // [rsp+3D0h] [rbp-68h]
  int v176; // [rsp+3D4h] [rbp-64h]
  char *s2; // [rsp+3D8h] [rbp-60h]
  int v178; // [rsp+3E0h] [rbp-58h]
  int v179; // [rsp+3E4h] [rbp-54h]
  __int64 v180; // [rsp+3E8h] [rbp-50h]

  v114 = strlen(a2);
  if ( !a3 )
  {
    a3 = &v123;
    sub_404BC0(&v123);
  }
  tv_sec = a3->tv_sec;
  v10 = a2;
  tv_nsec = a3->tv_nsec;
  v11 = *(unsigned __int8 *)a2;
  if ( (unsigned __int8)v11 <= 0x20u )
  {
    v12 = 0x100003E00LL;
    if ( _bittest64(&v12, v11) )
    {
      do
        ++v10;
      while ( *v10 <= 0x20u && ((1LL << *v10) & 0x100003E00LL) != 0 );
    }
  }
  if ( memcmp(v10, "TZ=\"", 4uLL) || (v13 = v10[4], v14 = v10 + 4, !v13) )
  {
LABEL_14:
    if ( !sub_40DE20(a5, a3, v135) )
      goto LABEL_108;
    ptr = 0LL;
    v20 = a5;
    goto LABEL_16;
  }
  v15 = v10 + 4;
  v16 = v10[4];
  v17 = 1LL;
  while ( v16 == 92 )
  {
    v18 = v15 + 1;
    v19 = v15[1];
    if ( v19 != 92 && v19 != 34 )
      goto LABEL_14;
LABEL_10:
    v15 = v18 + 1;
    v16 = v18[1];
    ++v17;
    if ( !v16 )
      goto LABEL_14;
  }
  if ( v16 != 34 )
  {
    v18 = v15;
    goto LABEL_10;
  }
  if ( v17 <= 100 )
  {
    ptr = 0LL;
    a6 = &v140;
    goto LABEL_91;
  }
  v14 = v10 + 4;
  a6 = (char *)malloc(v17);
  ptr = a6;
  if ( !a6 )
  {
LABEL_108:
    v23 = 0;
    free(0LL);
    return v23;
  }
LABEL_91:
  for ( i = a6; v13 != 34; *(i - 1) = *v50 )
  {
    ++i;
    v50 = &v14[v13 == 92];
    v13 = v50[1];
    v14 = v50 + 1;
  }
  *i = 0;
  v20 = sub_40DB40(a6);
  if ( !v20 )
  {
    v23 = 0;
    goto LABEL_81;
  }
  v51 = (unsigned __int8)v14[1];
  v10 = v14 + 1;
  if ( (unsigned __int8)v51 <= 0x20u )
  {
    v52 = 0x100003E00LL;
    if ( _bittest64(&v52, v51) )
    {
      do
        ++v10;
      while ( *v10 <= 0x20u && ((1LL << *v10) & 0x100003E00LL) != 0 );
    }
  }
  if ( !sub_40DE20(v20, a3, v135) )
  {
    v23 = 0;
    goto LABEL_79;
  }
LABEL_16:
  v21 = *v10 == 0;
  v152 = 0LL;
  if ( v21 )
    v10 = "TZ=UTC0" + 6;
  v150 = 2;
  v158 = 0LL;
  v146.m128i_i64[0] = (__int64)v10;
  v170 = a4 & 1;
  v151 = v135[5] + 1900LL;
  v157.m128i_i64[1] = (int)tv_nsec;
  v22 = 7776000;
  v159 = 0LL;
  v160 = 0LL;
  v153 = v135[4] + 1;
  v161 = 0LL;
  v154 = v135[3];
  v162 = 0;
  v155 = v135[2];
  v163 = 0LL;
  v156 = v135[1];
  v164 = 0LL;
  v157.m128i_i64[0] = v135[0];
  v167 = 0LL;
  v129 = v136;
  v165 = 0LL;
  v166 = 0LL;
  v168 = 0LL;
  v169 = 0;
  v171 = 0;
  v172 = 0;
  v173 = 0;
  s1 = v137;
  v175 = 269;
  v176 = v136;
  s2 = 0LL;
  while ( !__OFADD__(tv_sec, v22) )
  {
    v139[0] = tv_sec + v22;
    if ( sub_40DE20(v20, v139, v141) && v145 && v143 != v176 )
    {
      s2 = v145;
      v178 = 269;
      v179 = v143;
      v180 = 0LL;
      break;
    }
    v22 += 7776000;
    if ( v22 == 31104000 )
      break;
  }
  if ( s1 && s2 && !strcmp(s1, s2) )
  {
    v176 = -1;
    s2 = 0LL;
  }
  if ( (unsigned int)sub_405940(&v146, (__m128i)0LL) )
  {
    v23 = v170;
    if ( !v170 )
      goto LABEL_79;
    if ( v146.m128i_i64[0] < (unsigned __int64)&a2[v114] )
      dcgettext(0LL, "error: parsing failed, stopped at '%s'\n", 5);
    else
      dcgettext(0LL, "error: parsing failed\n", 5);
    goto LABEL_141;
  }
  if ( v170 )
  {
    dcgettext(0LL, "input timezone: ", 5);
    sub_404F90();
    v53 = "'@timespec' - always UTC";
    if ( !(_BYTE)v162 )
    {
      v53 = "parsed date/time string";
      if ( !v168 )
      {
        if ( a6 )
        {
          if ( a5 != v20 )
          {
            v54 = dcgettext(0LL, "TZ=\"%s\" in date string", 5);
            v55 = a6;
LABEL_106:
            __fprintf_chk(stderr, 1LL, v54, v55);
            goto LABEL_111;
          }
          v21 = memcmp(a6, "UTC0", 5uLL) == 0;
          v53 = "TZ=\"UTC0\" environment value or -u";
          if ( !v21 )
          {
            v54 = dcgettext(0LL, "TZ=\"%s\" environment value", 5);
            v55 = a6;
            goto LABEL_106;
          }
        }
        else
        {
          v53 = "system default";
        }
      }
    }
    v56 = dcgettext(0LL, v53, 5);
    __fprintf_chk(stderr, 1LL, v56);
LABEL_111:
    v57 = v168;
    if ( v165 )
    {
      if ( v168 )
      {
LABEL_113:
        v58 = (const char *)sub_404E20(v149, (__int64)v124);
        __fprintf_chk(stderr, 1LL, " (%s)", v58);
LABEL_114:
        v59 = stderr;
LABEL_115:
        fputc(10, v59);
        v23 = v170;
        if ( (_BYTE)v162 )
        {
          *(__m128i *)a1 = _mm_loadu_si128(&v157);
          goto LABEL_117;
        }
        v61 = v163;
        if ( ((v165 + v168) | v166 | v164 | v163 | v167) <= 1 )
          goto LABEL_32;
        if ( !v170 )
          goto LABEL_78;
        if ( v167 > 1 )
        {
          sub_404F90();
          v61 = v163;
        }
        if ( v61 > 1 )
          sub_404F90();
        if ( v164 > 1 )
          sub_404F90();
        if ( v166 > 1 )
          sub_404F90();
        if ( v165 + v168 <= 1 )
          goto LABEL_78;
LABEL_141:
        v23 = 0;
        sub_404F90();
        goto LABEL_79;
      }
      v59 = stderr;
      if ( v148 <= 0 )
        goto LABEL_115;
      fwrite(", dst", 1uLL, 5uLL, stderr);
      v57 = v168;
    }
    if ( !v57 )
      goto LABEL_114;
    goto LABEL_113;
  }
  v23 = (unsigned __int8)v162;
  if ( (_BYTE)v162 )
  {
    *(__m128i *)a1 = _mm_loadu_si128(&v157);
    goto LABEL_79;
  }
  if ( ((v165 + v168) | v166 | v164 | v163 | v167) > 1 )
    goto LABEL_78;
LABEL_32:
  v24 = v151;
  if ( v151 < 0 )
  {
    v27 = __OFSUB__(-1900LL, v151);
    HIDWORD(v127) = -1900 - v151;
    if ( -1900 - v151 != -1900 - (_DWORD)v151 )
      v27 = 1;
  }
  else
  {
    if ( v152 == 2 )
    {
      v62 = 2000LL;
      if ( v151 >= 69 )
        v62 = 1900LL;
      v63 = v151 + v62;
      if ( (_BYTE)v23 )
      {
        dcgettext(0LL, "warning: adjusting year value %ld to %ld\n", 5);
        v24 = v63;
        sub_404F90();
      }
      else
      {
        v24 = v63;
      }
    }
    v25 = 0;
    v26 = v24 - 1900;
    if ( v24 >= 0x76C )
    {
      if ( v26 < 0 )
        goto LABEL_145;
    }
    else
    {
      if ( v26 < 0 )
        goto LABEL_36;
LABEL_145:
      v25 = 1;
    }
LABEL_36:
    HIDWORD(v127) = v24 - 1900;
    if ( v26 != (int)v26 )
      v25 = 1;
    v27 = v25 & 1;
  }
  if ( v27 )
  {
    if ( (_BYTE)v23 )
    {
      dcgettext(0LL, "error: out-of-range year %ld\n", 5);
      sub_404F90();
    }
    v30 = v170;
LABEL_155:
    v64 = "error: year, month, or day overflow\n";
    if ( !v30 )
      goto LABEL_78;
    goto LABEL_156;
  }
  v28 = __OFADD__(-1LL, v153);
  v29 = v153 - 1;
  LODWORD(v127) = v153 - 1;
  if ( v153 - 1 != (_DWORD)v153 - 1 )
    v28 = 1;
  v30 = v170;
  if ( v28 )
    goto LABEL_155;
  HIDWORD(v126) = v154;
  v31 = v154;
  v106 = v154 != v154;
  if ( v154 != (int)v154 )
    goto LABEL_155;
  v32 = v167;
  if ( !v167 )
  {
    if ( !HIBYTE(v162) || v163 )
    {
      v125 = 0LL;
      LODWORD(v126) = 0;
      v157.m128i_i64[1] = 0LL;
      if ( v170 )
        goto LABEL_241;
      v33 = 0;
      v34 = 0;
      v35 = 0;
      goto LABEL_198;
    }
    if ( v164 )
    {
      v125 = 0LL;
      LODWORD(v126) = 0;
      v157.m128i_i64[1] = 0LL;
      if ( !v170 )
      {
        v33 = 0;
        v34 = 0;
        v35 = 0;
        goto LABEL_50;
      }
LABEL_241:
      sub_404F90();
      v32 = v167;
      v35 = v125;
      v34 = HIDWORD(v125);
      v33 = v126;
      v31 = HIDWORD(v126);
      v29 = v127;
      goto LABEL_198;
    }
  }
  v91 = v150;
  if ( !v150 )
  {
    if ( v155 - 1 > 0xA )
    {
      if ( v155 != 12 )
      {
        LODWORD(v126) = -1;
        goto LABEL_257;
      }
      LODWORD(v126) = 0;
      goto LABEL_196;
    }
LABEL_194:
    v91 = (unsigned int)v155;
    goto LABEL_195;
  }
  if ( v150 == 1 )
  {
    v91 = (unsigned int)(v155 + 12);
    if ( v155 - 1 > 0xA )
    {
      if ( v155 != 12 )
      {
        LODWORD(v126) = -1;
        goto LABEL_257;
      }
      LODWORD(v126) = 12;
      v91 = 12LL;
      goto LABEL_196;
    }
LABEL_195:
    LODWORD(v126) = v91;
LABEL_196:
    v34 = v156;
    v35 = v157.m128i_i32[0];
    v125 = __PAIR64__(v156, v157.m128i_u32[0]);
    if ( v170 )
    {
      __snprintf_chk(v139, 100LL, 1LL, 100LL, "%02d:%02d:%02d", v91, v156, v157.m128i_i64[0]);
      if ( v167 )
        dcgettext(0LL, "using specified time as starting value: '%s'\n", 5);
      else
        dcgettext(0LL, "using current time as starting value: '%s'\n", 5);
      goto LABEL_241;
    }
    v33 = v126;
LABEL_198:
    if ( v32 | v164 | v163 )
LABEL_50:
      v129 = -1;
    if ( v165 )
    {
      v36 = v148;
      v129 = v148;
    }
    else
    {
      v36 = v129;
    }
    v131 = __PAIR64__(v34, v35);
    v133 = __PAIR64__(HIDWORD(v127), v29);
    v132 = __PAIR64__(v31, v33);
    v134 = v36;
    v37 = sub_40DED0(v20, &v125);
    if ( sub_405050(v20, &v131, &v125, v37) )
      goto LABEL_164;
    v118 = v168;
    if ( v168 )
    {
      memset(v141, 88, sizeof(v141));
      sub_404E20(v149, (__int64)v142);
      v65 = sub_40DB40(v141);
      v66 = v65;
      if ( !v65 )
      {
        if ( v170 )
        {
          v23 = 0;
          dcgettext(0LL, "error: tzalloc (\"%s\") failed\n", 5);
          sub_404F90();
          goto LABEL_79;
        }
        goto LABEL_78;
      }
      v125 = v131;
      v126 = v132;
      v127 = v133;
      v129 = v134;
      v37 = sub_40DED0(v65, &v125);
      v67 = sub_405050(v66, &v131, &v125, v37);
      sub_40DE00(v66);
      if ( v67 )
      {
LABEL_164:
        if ( v164 )
        {
          if ( v163 )
          {
            if ( !v170 )
              goto LABEL_176;
            goto LABEL_229;
          }
          v68 = v146.m128i_u64[1];
          if ( v146.m128i_i64[1] > 0 && v128 != v147 )
            v68 = v146.m128i_i64[1] - 1;
          v69 = 7 * v68;
          if ( !is_mul_ok(7uLL, v68) )
            goto LABEL_236;
          v70 = (v147 - v128 + 7) % 7;
          v71 = v69 + v70;
          if ( __OFADD__(v69, v70) )
            goto LABEL_236;
          v72 = __OFADD__(SHIDWORD(v126), v71);
          v73 = SHIDWORD(v126) + v71;
          HIDWORD(v126) = v73;
          v74 = v72;
          if ( v73 != (int)v73 )
            v74 = 1;
          if ( v74 || (v129 = -1, v37 = sub_40DED0(v20, &v125), v37 == -1) )
          {
LABEL_236:
            if ( v170 )
            {
              sub_405410((__int64)&v125, (__int64)&v146, (__int64)v139);
              sub_4054B0((__int64)&v146, v141);
              dcgettext(0LL, "error: day '%s' (day ordinal=%ld number=%d) resulted in an invalid date: '%s'\n", 5);
              v23 = 0;
              sub_404F90();
              goto LABEL_79;
            }
            goto LABEL_78;
          }
          if ( !v170 )
          {
LABEL_176:
            v75 = *((_QWORD *)&v158 + 1);
            v76 = v158;
            if ( !((unsigned __int64)v159 | (unsigned __int64)v158 | *((_QWORD *)&v158 + 1)) )
            {
              v77 = 0;
              goto LABEL_178;
            }
            goto LABEL_238;
          }
          sub_405410((__int64)&v125, (__int64)&v146, (__int64)v139);
          sub_4054B0((__int64)&v146, v141);
          dcgettext(0LL, "new start date: '%s' is '%s'\n", 5);
          sub_404F90();
        }
        if ( !v170 )
          goto LABEL_176;
        if ( v163 )
        {
          if ( !v164 )
            goto LABEL_207;
        }
        else if ( v164
               || (v109 = HIDWORD(v126),
                   v100 = (unsigned int)(v127 + 1),
                   v101 = (const char *)sub_404F20(SHIDWORD(v127), (__int64)&tp),
                   __snprintf_chk(v139, 100LL, 1LL, 100LL, "(Y-M-D) %s-%02d-%02d", v101, v100, v109),
                   dcgettext(0LL, "using current date as starting value: '%s'\n", 5),
                   sub_404F90(),
                   !v164)
               || !v163 )
        {
LABEL_207:
          sub_405410((__int64)&v125, (__int64)&v146, (__int64)v139);
          dcgettext(0LL, "starting date/time: '%s'\n", 5);
          sub_404F90();
          v75 = *((_QWORD *)&v158 + 1);
          v76 = v158;
          v92 = v159;
          v77 = v170;
          if ( !((unsigned __int64)v159 | *((_QWORD *)&v158 + 1) | (unsigned __int64)v158) )
            goto LABEL_178;
          if ( v170 )
          {
            if ( v158 == 0 )
              goto LABEL_253;
            if ( HIDWORD(v126) != 15 )
            {
              dcgettext(
                0LL,
                "warning: when adding relative months/years, it is recommended to specify the 15th of the months\n",
                5);
              sub_404F90();
              v92 = v159;
            }
            if ( v92 )
            {
LABEL_253:
              if ( (_DWORD)v126 != 12 )
              {
                dcgettext(0LL, "warning: when adding relative days, it is recommended to specify noon\n", 5);
                sub_404F90();
              }
            }
            if ( (_QWORD)v158 + SHIDWORD(v127) != (_DWORD)v158 + HIDWORD(v127)
              || __OFADD__((_QWORD)v158, SHIDWORD(v127)) )
            {
              goto LABEL_226;
            }
            v108 = v158 + HIDWORD(v127);
            v75 = *((_QWORD *)&v158 + 1);
LABEL_216:
            v93 = v75 + (int)v127;
            if ( v93 == (int)v93 && !__OFADD__(v75, (int)v127) )
            {
              v94 = v159 + SHIDWORD(v126);
              if ( v94 == (int)v94 && !__OFADD__((_QWORD)v159, SHIDWORD(v126)) )
              {
                v127 = __PAIR64__(v108, v93);
                HIDWORD(v126) += v159;
                v125 = v131;
                LODWORD(v126) = v132;
                v129 = v134;
                v37 = sub_40DED0(v20, &v125);
                if ( v37 == -1 )
                {
                  if ( v170 )
                  {
                    sub_405410((__int64)&v125, (__int64)&v146, (__int64)v139);
                    dcgettext(0LL, "error: adding relative date resulted in an invalid date: '%s'\n", 5);
                    v23 = 0;
                    sub_404F90();
                    goto LABEL_79;
                  }
                  goto LABEL_78;
                }
                v77 = v170;
                if ( !v170 )
                {
                  if ( !v168 )
                    goto LABEL_181;
                  v95 = v149 - v130;
                  v72 = __OFSUB__(v37, v95);
                  v37 -= v95;
                  if ( v72 | (unsigned __int64)__OFSUB__(v149, v130) )
                  {
                    v23 = 0;
                    goto LABEL_79;
                  }
LABEL_180:
                  if ( v77 )
                  {
                    sub_405410((__int64)&v125, (__int64)&v146, (__int64)v139);
                    dcgettext(0LL, "'%s' = %ld epoch-seconds\n", 5);
                    sub_404F90();
                    v98 = 3600LL * *((_QWORD *)&v159 + 1);
                    v107 = *((_QWORD *)&v159 + 1);
                    if ( is_mul_ok(0xE10uLL, *((unsigned __int64 *)&v159 + 1)) )
                    {
                      v80 = (int)v161;
                      v27 = v170;
                      v99 = (int)v161 + v157.m128i_i64[1];
                      v82 = (v99 % 1000000000 + 1000000000) % 0x3B9ACA00uLL;
                      v83 = ((int)v99 - (int)v82) / 1000000000;
                      v72 = __OFADD__(v98, v37);
                      v84 = v98 + v37;
                      if ( !v72 )
                      {
                        v85 = v160;
                        v86 = 60 * v160;
                        if ( is_mul_ok(0x3CuLL, v160) )
                          goto LABEL_184;
                      }
                    }
                    else
                    {
                      v27 = v170;
                    }
LABEL_245:
                    if ( !v27 )
                      goto LABEL_78;
                    v64 = "error: adding relative time caused an overflow\n";
LABEL_156:
                    v23 = 0;
                    dcgettext(0LL, v64, 5);
                    sub_404F90();
                    goto LABEL_79;
                  }
LABEL_181:
                  v79 = 3600LL * *((_QWORD *)&v159 + 1);
                  v107 = *((_QWORD *)&v159 + 1);
                  if ( !is_mul_ok(0xE10uLL, *((unsigned __int64 *)&v159 + 1)) )
                    goto LABEL_78;
                  v80 = (int)v161;
                  v81 = (int)v161 + v157.m128i_i64[1];
                  v82 = (v81 % 1000000000 + 1000000000) % 0x3B9ACA00uLL;
                  v83 = ((int)v81 - (int)v82) / 1000000000;
                  v72 = __OFADD__(v79, v37);
                  v84 = v79 + v37;
                  if ( v72 )
                    goto LABEL_78;
                  v85 = v160;
                  v86 = 60 * v160;
                  if ( !is_mul_ok(0x3CuLL, v160) )
                    goto LABEL_78;
LABEL_184:
                  v72 = __OFADD__(v86, v84);
                  v87 = v86 + v84;
                  if ( !v72 )
                  {
                    v88 = *((_QWORD *)&v160 + 1);
                    v72 = __OFADD__(*((_QWORD *)&v160 + 1), v87);
                    v89 = *((_QWORD *)&v160 + 1) + v87;
                    if ( !v72 )
                    {
                      v72 = __OFADD__(v83, v89);
                      v90 = v83 + v89;
                      if ( !v72 )
                      {
                        *(_QWORD *)a1 = v90;
                        *(_QWORD *)(a1 + 8) = v82;
                        if ( v27 )
                        {
                          if ( v107 | v85 | v88 | v80 )
                          {
                            dcgettext(
                              0LL,
                              "after time adjustment (%+ld hours, %+ld minutes, %+ld seconds, %+d ns),\n",
                              5);
                            sub_404F90();
                            dcgettext(0LL, "    new time = %ld epoch-seconds\n", 5);
                            sub_404F90();
                            if ( v129 != -1 && sub_40DE20(v20, a1, &tp) && v129 != tp.tm_isdst )
                            {
                              dcgettext(0LL, "warning: daylight saving time changed after time adjustment\n", 5);
                              sub_404F90();
                            }
                          }
                        }
                        v23 = v170;
LABEL_117:
                        if ( !(_BYTE)v23 )
                        {
                          v23 = 1;
                          goto LABEL_79;
                        }
                        v60 = "timezone: system default\n";
                        if ( a6 )
                        {
                          if ( memcmp(a6, "UTC0", 5uLL) )
                          {
                            dcgettext(0LL, "timezone: TZ=\"%s\" environment value\n", 5);
                            sub_404F90();
                            goto LABEL_122;
                          }
                          v60 = "timezone: Universal Time\n";
                        }
                        dcgettext(0LL, v60, 5);
                        sub_404F90();
LABEL_122:
                        dcgettext(0LL, "final: %ld.%09d (epoch-seconds)\n", 5);
                        sub_404F90();
                        if ( gmtime_r((const time_t *)a1, &tp) )
                        {
                          sub_405410((__int64)&tp, 0LL, (__int64)v139);
                          dcgettext(0LL, "final: %s (UTC)\n", 5);
                          sub_404F90();
                        }
                        if ( sub_40DE20(v20, a1, v141) )
                        {
                          sub_404E20(v144, (__int64)v124);
                          sub_405410((__int64)v141, 0LL, (__int64)v139);
                          dcgettext(0LL, "final: %s (UTC%s)\n", 5);
                          sub_404F90();
                        }
                        goto LABEL_79;
                      }
                    }
                  }
                  goto LABEL_245;
                }
                dcgettext(0LL, "after date adjustment (%+ld years, %+ld months, %+ld days),\n", 5);
                sub_404F90();
                sub_405410((__int64)&v125, (__int64)&v146, (__int64)v139);
                dcgettext(0LL, "    new date/time = '%s'\n", 5);
                sub_404F90();
                if ( v134 != -1 && v134 != v129 )
                {
                  dcgettext(0LL, "warning: daylight saving time changed after date adjustment\n", 5);
                  sub_404F90();
                }
                if ( !(_QWORD)v159
                  && ((_DWORD)v94 != HIDWORD(v126) || !*((_QWORD *)&v158 + 1) && (_DWORD)v93 != (_DWORD)v127) )
                {
                  dcgettext(0LL, "warning: month/year adjustment resulted in shifted dates:\n", 5);
                  sub_404F90();
                  sub_404F20(v108, (__int64)&tp);
                  dcgettext(0LL, "     adjusted Y M D: %s %02d %02d\n", 5);
                  sub_404F90();
                  sub_404F20(SHIDWORD(v127), (__int64)&tp);
                  dcgettext(0LL, "   normalized Y M D: %s %02d %02d\n", 5);
                  sub_404F90();
                }
                v77 = v170;
LABEL_178:
                if ( v168 )
                {
                  v78 = v149 - v130;
                  v72 = __OFSUB__(v37, v78);
                  v37 -= v78;
                  if ( v72 | (unsigned __int64)__OFSUB__(v149, v130) )
                  {
                    if ( v77 )
                    {
                      v23 = 0;
                      dcgettext(0LL, "error: timezone %d caused time_t overflow\n", 5);
                      sub_404F90();
                      goto LABEL_79;
                    }
                    goto LABEL_78;
                  }
                }
                goto LABEL_180;
              }
            }
LABEL_226:
            if ( v170 )
            {
              v23 = 0;
              dcgettext(0LL, "error: %s:%d\n", 5);
              sub_404F90();
              goto LABEL_79;
            }
            goto LABEL_78;
          }
LABEL_238:
          v96 = v76 + SHIDWORD(v127);
          v97 = __OFADD__(v76, SHIDWORD(v127));
          if ( v96 != (int)v96 || v97 )
            goto LABEL_78;
          v108 = v96;
          goto LABEL_216;
        }
LABEL_229:
        sub_4054B0((__int64)&v146, v141);
        dcgettext(0LL, "warning: day (%s) ignored when explicit dates are given\n", 5);
        sub_404F90();
        goto LABEL_207;
      }
    }
    timera = v132;
    v38 = v133;
    v115 = v126;
    v39 = v127;
    srca = HIDWORD(v132);
    v111 = HIDWORD(v126);
    v116 = HIDWORD(v133);
    v117 = HIDWORD(v127);
    if ( v131 == v125 )
    {
      if ( HIDWORD(v132) == HIDWORD(v126) && (_DWORD)v132 != (_DWORD)v126 && v133 == v127 )
      {
        if ( !v170 )
          goto LABEL_78;
        dcgettext(0LL, "error: invalid date/time value:\n", 5);
        sub_404F90();
        sub_405410((__int64)&v131, (__int64)&v146, (__int64)v141);
        dcgettext(0LL, "    user provided time: '%s'\n", 5);
        sub_404F90();
        sub_405410((__int64)&v125, (__int64)&v146, (__int64)v141);
        dcgettext(0LL, "       normalized time: '%s'\n", 5);
        sub_404F90();
        v40 = "";
        v41 = "--";
        v106 = 1;
        v42 = "";
LABEL_61:
        v43 = "";
LABEL_62:
        v44 = "--";
        if ( v38 == v39 )
          v44 = "";
        v45 = "----";
        if ( v116 == v117 )
          v45 = "";
        __snprintf_chk(
          v141,
          100LL,
          1LL,
          100LL,
          "                                 %4s %2s %2s %2s %2s %2s",
          v45,
          v44,
          v43,
          v41,
          v40,
          v42);
        v46 = 51LL;
        v47 = 52LL;
        if ( BYTE3(v145) == 32 )
        {
          do
          {
            v47 = (int)v46;
            if ( !(_DWORD)v46 )
              break;
            --v46;
          }
          while ( v141[v46] == 32 );
        }
        v141[v47] = 0;
        sub_404F90();
        dcgettext(0LL, "     possible reasons:\n", 5);
        sub_404F90();
        if ( v106 )
        {
          dcgettext(0LL, "       non-existing due to daylight-saving time;\n", 5);
          sub_404F90();
        }
        if ( srca != v111 && v38 != v39 )
        {
          dcgettext(0LL, "       invalid day/month combination;\n", 5);
          sub_404F90();
        }
        dcgettext(0LL, "       numeric values overflow;\n", 5);
        sub_404F90();
        if ( v118 )
          dcgettext(0LL, "incorrect timezone", 5);
        else
          dcgettext(0LL, "missing timezone", 5);
        sub_404F90();
        goto LABEL_78;
      }
      if ( !v170 )
        goto LABEL_78;
      dcgettext(0LL, "error: invalid date/time value:\n", 5);
      sub_404F90();
      sub_405410((__int64)&v131, (__int64)&v146, (__int64)v141);
      dcgettext(0LL, "    user provided time: '%s'\n", 5);
      sub_404F90();
      sub_405410((__int64)&v125, (__int64)&v146, (__int64)v141);
      dcgettext(0LL, "       normalized time: '%s'\n", 5);
      sub_404F90();
      v42 = "";
      v40 = "";
    }
    else
    {
      v122 = HIDWORD(v125);
      v121 = HIDWORD(v131);
      v120 = v125;
      v119 = v131;
      if ( !v170 )
        goto LABEL_78;
      dcgettext(0LL, "error: invalid date/time value:\n", 5);
      sub_404F90();
      sub_405410((__int64)&v131, (__int64)&v146, (__int64)v141);
      dcgettext(0LL, "    user provided time: '%s'\n", 5);
      sub_404F90();
      sub_405410((__int64)&v125, (__int64)&v146, (__int64)v141);
      dcgettext(0LL, "       normalized time: '%s'\n", 5);
      sub_404F90();
      if ( v119 == v120 )
      {
        v42 = "";
        v40 = "----" + 2;
      }
      else
      {
        v42 = "----" + 2;
        v40 = "";
        if ( v121 != v122 )
          v40 = "----" + 2;
      }
    }
    v41 = "";
    if ( timera != v115 )
      v41 = "----" + 2;
    v43 = "----" + 2;
    if ( srca != v111 )
      goto LABEL_62;
    goto LABEL_61;
  }
  if ( v155 <= 0x17 )
    goto LABEL_194;
  LODWORD(v126) = -1;
LABEL_257:
  if ( v170 )
  {
    dcgettext(0LL, "error: invalid hour %ld%s\n", 5);
    v23 = 0;
    sub_404F90();
    goto LABEL_79;
  }
LABEL_78:
  v23 = 0;
LABEL_79:
  if ( v20 != a5 )
    sub_40DE00(v20);
LABEL_81:
  free(ptr);
  return v23;
}

__int64 __fastcall sub_409B90(__int64 a1, const char *a2, struct timespec *a3)
{
  unsigned int v4; // ebp
  char *v5; // r12
  __int64 v6; // rax
  __int64 v7; // rbx

  v4 = 0;
  v5 = getenv("TZ");
  v6 = sub_40DB40(v5);
  if ( v6 )
  {
    v7 = v6;
    v4 = sub_407BC0(a1, a2, a3, 0, v6, v5);
    sub_40DE00(v7);
  }
  return v4;
}

__int64 __fastcall sub_409C00(int *a1, int *a2, __int64 a3, char a4)
{
  __int64 result; // rax
  int v5; // edx
  time_t timer; // [rsp+0h] [rbp-10h] BYREF

  if ( a3 == 1 )
  {
    v5 = *a2;
    result = 1LL;
    *a1 = *a2;
    if ( *a2 <= 68 )
    {
      if ( (a4 & 8) == 0 )
      {
        *a1 = v5 + 100;
        return result;
      }
      return 0LL;
    }
  }
  else
  {
    if ( a3 == 2 )
    {
      if ( (a4 & 2) != 0 )
      {
        *a1 = a2[1] + 100 * *a2 - 1900;
        return 1LL;
      }
      return 0LL;
    }
    time(&timer);
    result = (__int64)localtime(&timer);
    if ( result )
    {
      *a1 = *(_DWORD *)(result + 20);
      return 1LL;
    }
  }
  return result;
}

__int64 __fastcall sub_409C90(_QWORD *a1, const char *a2, unsigned int a3)
{
  size_t v4; // r13
  char *v5; // rax
  char *v6; // r14
  signed __int64 v7; // rax
  __int64 result; // rax
  const char *v9; // rax
  size_t v10; // r13
  __int64 v11; // rdx
  __int64 v12; // rdx
  unsigned int v13; // eax
  int v14; // edx
  int v15; // eax
  __int64 v16; // rax
  struct tm *v17; // rdx
  _DWORD *v18; // rax
  int v19; // edx
  time_t v20; // [rsp+0h] [rbp-C8h] BYREF
  char v21[8]; // [rsp+8h] [rbp-C0h] BYREF
  char s[16]; // [rsp+10h] [rbp-B8h] BYREF
  int v23; // [rsp+20h] [rbp-A8h]
  unsigned int v24; // [rsp+24h] [rbp-A4h]
  unsigned __int64 v25; // [rsp+28h] [rbp-A0h]
  __int64 v26[6]; // [rsp+30h] [rbp-98h] BYREF
  int v27; // [rsp+60h] [rbp-68h] BYREF
  unsigned int v28; // [rsp+64h] [rbp-64h]
  unsigned __int64 v29; // [rsp+68h] [rbp-60h]
  __int64 v30; // [rsp+70h] [rbp-58h] BYREF
  int v31; // [rsp+80h] [rbp-48h]

  v4 = strlen(a2);
  if ( (a3 & 4) != 0 )
  {
    v5 = strchr(a2, 46);
    v6 = v5;
    if ( v5 )
    {
      v7 = v5 - a2;
      if ( v4 - v7 != 3 )
        return 0LL;
      v4 = v7;
    }
  }
  else
  {
    v6 = 0LL;
  }
  if ( v4 - 8 <= 4 && (v4 & 1) == 0 )
  {
    v9 = a2;
    while ( (unsigned int)(*v9 - 48) <= 9 )
    {
      if ( &a2[v4] == ++v9 )
      {
        v10 = v4 >> 1;
        v11 = 0LL;
        do
        {
          *(&v27 + v11) = a2[2 * v11 + 1] + 2 * (5 * a2[2 * v11] - 240) - 48;
          ++v11;
        }
        while ( v10 != v11 );
        v12 = v10 - 4;
        if ( (a3 & 1) != 0 )
        {
          LODWORD(v26[0]) = v27 - 1;
          v24 = HIDWORD(v29);
          v25 = __PAIR64__(v28, v29);
          if ( !(unsigned __int8)sub_409C00((int *)v26 + 1, (int *)&v30, v12, a3) )
            return 0LL;
        }
        else
        {
          if ( !(unsigned __int8)sub_409C00((int *)v26 + 1, &v27, v12, a3) )
            return 0LL;
          v18 = (_DWORD *)&v26[4] + v10;
          LODWORD(v26[0]) = *v18 - 1;
          HIDWORD(v25) = v18[1];
          v19 = v18[2];
          LODWORD(v18) = v18[3];
          LODWORD(v25) = v19;
          v24 = (unsigned int)v18;
        }
        if ( v6 )
        {
          v13 = v6[1] - 48;
          if ( v13 > 9 )
            return 0LL;
          v14 = v6[2];
          if ( (unsigned int)(v14 - 48) > 9 )
            return 0LL;
          v15 = v14 + 10 * v13 - 48;
          v23 = v15;
        }
        else
        {
          v23 = 0;
          v15 = 0;
        }
        v27 = v15;
        v31 = -1;
        v28 = v24;
        v29 = v25;
        v30 = v26[0];
        v16 = sub_40DA50(&v27);
        v17 = (struct tm *)&v27;
        v20 = v16;
        if ( v16 == -1 )
        {
          v17 = localtime(&v20);
          if ( !v17 )
            return 0LL;
        }
        if ( !(v23 ^ v17->tm_sec | v17->tm_min ^ v24 | v17->tm_hour ^ (unsigned int)v25 | v17->tm_mday ^ HIDWORD(v25) | v17->tm_mon ^ LODWORD(v26[0]) | v17->tm_year ^ HIDWORD(v26[0])) )
          goto LABEL_24;
        if ( v23 != 60 )
          return 0LL;
        strcpy((char *)(__stpcpy_chk(s, a2, 16LL) - 2), "59");
        result = sub_409C90(v21, s, a3);
        if ( (_BYTE)result )
        {
LABEL_24:
          *a1 = v20;
          return 1LL;
        }
        return result;
      }
    }
  }
  return 0LL;
}

char *__fastcall sub_409F40(const char *a1)
{
  __int64 v1; // rbx
  char *result; // rax

  if ( !a1 )
  {
    fwrite("A NULL argv[0] was passed through an exec system call.\n", 1uLL, 0x37uLL, stderr);
    abort();
  }
  v1 = (__int64)a1;
  result = strrchr(a1, 47);
  if ( result )
  {
    if ( result + 1 - a1 > 6 && !memcmp(result - 6, "/.libs/", 7uLL) )
    {
      v1 = (__int64)(result + 1);
      if ( !memcmp(result + 1, "lt-", 3uLL) )
      {
        v1 = (__int64)(result + 4);
        program_invocation_short_name = (__int64)(result + 4);
      }
    }
  }
  qword_61B350 = v1;
  program_invocation_name = v1;
  return result;
}

char *__fastcall sub_409FE0(char *msgid, int a2)
{
  char *v2; // rbx
  _BYTE *v4; // rax
  bool v5; // zf
  __int64 v6; // rbx

  v2 = dcgettext(0LL, msgid, 5);
  if ( msgid != v2 )
    return v2;
  v4 = (_BYTE *)sub_40E190();
  if ( (*v4 & 0xDF) == 85 )
  {
    if ( (v4[1] & 0xDF) == 84 && (v4[2] & 0xDF) == 70 && v4[3] == 45 && v4[4] == 56 && !v4[5] )
    {
      v5 = *v2 == 96;
      v2 = (char *)&unk_4167A7;
      if ( !v5 )
        return (char *)&unk_41679C;
      return v2;
    }
  }
  else if ( (*v4 & 0xDF) == 71
         && (v4[1] & 0xDF) == 66
         && v4[2] == 49
         && v4[3] == 56
         && v4[4] == 48
         && v4[5] == 51
         && v4[6] == 48
         && !v4[7] )
  {
    v5 = *v2 == 96;
    v2 = (char *)&unk_4167A3;
    if ( !v5 )
      return (char *)&unk_4167A0;
    return v2;
  }
  v6 = 4278847LL;
  if ( a2 != 9 )
    return "'";
  return (char *)v6;
}

unsigned __int64 __fastcall sub_40A0E0(
        _BYTE *a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        int a5,
        int a6,
        __int64 a7,
        char *a8,
        char *a9)
{
  _BYTE *v9; // r15
  unsigned __int64 v10; // r14
  int v12; // ebp
  unsigned __int64 v13; // r11
  int v14; // r10d
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // r9
  unsigned __int64 v17; // r12
  int v18; // r11d
  _BYTE *v19; // r8
  size_t v20; // rax
  int v21; // eax
  unsigned __int64 v22; // rbp
  bool v23; // al
  unsigned __int8 v24; // dl
  const unsigned __int16 **v25; // rax
  int v26; // eax
  char v27; // di
  unsigned __int64 v28; // rdx
  char v29; // cl
  int v30; // r13d
  unsigned __int8 v31; // al
  bool v33; // dl
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // rdi
  int v36; // edx
  unsigned __int8 v37; // al
  unsigned __int8 v38; // al
  int v39; // r13d
  bool v40; // dl
  bool v41; // dl
  bool v42; // al
  size_t v43; // rax
  const unsigned __int16 **v44; // rbx
  char *v45; // r15
  const unsigned __int16 **v46; // r14
  char *v47; // rax
  int v48; // esi
  unsigned __int64 v49; // rcx
  unsigned __int8 v50; // di
  char *v51; // rax
  size_t v52; // rax
  __int64 v53; // rsi
  char *v54; // rsi
  _BYTE *v55; // rcx
  char i; // al
  char v57; // dl
  char *v58; // rax
  unsigned __int8 v60; // [rsp+8h] [rbp-C0h]
  unsigned __int8 v61; // [rsp+10h] [rbp-B8h]
  unsigned __int64 v62; // [rsp+10h] [rbp-B8h]
  char v63; // [rsp+1Fh] [rbp-A9h]
  size_t n; // [rsp+28h] [rbp-A0h]
  _BYTE *v66; // [rsp+30h] [rbp-98h]
  unsigned __int8 v67; // [rsp+30h] [rbp-98h]
  _BYTE *v68; // [rsp+30h] [rbp-98h]
  unsigned __int64 v69; // [rsp+30h] [rbp-98h]
  unsigned __int8 v70; // [rsp+38h] [rbp-90h]
  unsigned __int8 v71; // [rsp+38h] [rbp-90h]
  unsigned __int64 v72; // [rsp+38h] [rbp-90h]
  char v73; // [rsp+38h] [rbp-90h]
  int v74; // [rsp+38h] [rbp-90h]
  int v75; // [rsp+40h] [rbp-88h]
  unsigned __int64 v76; // [rsp+40h] [rbp-88h]
  int v77; // [rsp+40h] [rbp-88h]
  int v78; // [rsp+40h] [rbp-88h]
  _BYTE *v79; // [rsp+40h] [rbp-88h]
  int v80; // [rsp+48h] [rbp-80h]
  unsigned __int64 v81; // [rsp+48h] [rbp-80h]
  char *s2; // [rsp+50h] [rbp-78h]
  unsigned __int64 v83; // [rsp+58h] [rbp-70h]
  size_t mb_cur_max; // [rsp+60h] [rbp-68h]
  bool v86; // [rsp+6Ch] [rbp-5Ch]
  char v87; // [rsp+6Dh] [rbp-5Bh]
  unsigned __int8 v88; // [rsp+6Eh] [rbp-5Ah]
  unsigned __int64 v89; // [rsp+70h] [rbp-58h]
  _BYTE *v90; // [rsp+78h] [rbp-50h]
  wint_t wc; // [rsp+84h] [rbp-44h] BYREF
  mbstate_t ps; // [rsp+88h] [rbp-40h] BYREF

  v9 = a1;
  v10 = a2;
  v12 = a6 & 2;
  mb_cur_max = __ctype_get_mb_cur_max();
  v86 = v12 != 0;
  v13 = a4;
  switch ( a5 )
  {
    case 0:
      v63 = 1;
      v14 = 0;
      v15 = 0LL;
      v87 = 0;
      v83 = 0LL;
      v86 = 0;
      v60 = 0;
      n = 0LL;
      s2 = 0LL;
      goto LABEL_3;
    case 1:
      goto LABEL_2;
    case 2:
      if ( !v12 )
      {
        v60 = 0;
        goto LABEL_216;
      }
      v63 = 1;
      v14 = 0;
      v15 = 0LL;
      v87 = 0;
      v83 = 0LL;
      v86 = 1;
      v60 = 0;
      n = 1LL;
      s2 = "'";
      goto LABEL_3;
    case 3:
      v63 = 1;
      v14 = 0;
      v15 = 0LL;
      a5 = 2;
      v87 = 0;
      v83 = 0LL;
      v86 = 1;
      v60 = 1;
      n = 1LL;
      s2 = "'";
      goto LABEL_3;
    case 4:
      if ( v12 )
      {
LABEL_2:
        v63 = 1;
        v14 = 0;
        v15 = 0LL;
        a5 = 2;
        v87 = 0;
        v83 = 0LL;
        v86 = 1;
        v60 = 0;
        n = 1LL;
        s2 = "'";
        goto LABEL_3;
      }
      v60 = 1;
LABEL_216:
      if ( a2 )
      {
        v14 = 0;
        v42 = 0;
        v63 = 1;
        v83 = 0LL;
        goto LABEL_142;
      }
      v63 = 1;
      v14 = 0;
      v15 = 1LL;
      a5 = 2;
      v83 = 0LL;
      v87 = 0;
      v86 = 0;
      n = 1LL;
      s2 = "'";
LABEL_3:
      v16 = v13;
      v17 = 0LL;
      v18 = a5;
      while ( 1 )
      {
LABEL_4:
        LOBYTE(a5) = v16 != v17;
        if ( v16 == -1LL )
          LOBYTE(a5) = *(_BYTE *)(a3 + v17) != 0;
        if ( !(_BYTE)a5 )
        {
          v39 = v18;
          v13 = v16;
          v40 = v39 == 2;
          if ( !v15 && v40 && v86 )
          {
            v30 = 2;
            goto LABEL_72;
          }
          v41 = !v86 && v40;
          if ( v41 )
          {
            if ( v87 )
            {
              if ( v63 )
                return sub_40A0E0((int)v9, v83, a3, v16, 5, a6, a7, (__int64)a8, a9);
              v42 = v83 != 0 && v10 == 0;
              if ( v42 )
              {
                v10 = v83;
LABEL_142:
                *v9 = 39;
                a5 = 2;
                v15 = 1LL;
                s2 = "'";
                n = 1LL;
                v86 = 0;
                v87 = v42;
                goto LABEL_3;
              }
              v41 = v87;
            }
          }
          else
          {
            v41 = !v86;
          }
          if ( s2 )
          {
            if ( v41 )
            {
              v57 = *s2;
              if ( *s2 )
              {
                v58 = &s2[-v15];
                do
                {
                  if ( v10 > v15 )
                    v9[v15] = v57;
                  v57 = v58[++v15];
                }
                while ( v57 );
              }
            }
          }
          if ( v10 > v15 )
            v9[v15] = 0;
          return v15;
        }
        v19 = (_BYTE *)(a3 + v17);
        v61 = v60 & (v18 != 2);
        if ( !v61 )
          break;
        if ( n )
        {
          if ( v16 == -1LL && n > 1 )
          {
            v75 = v18;
            v70 = v14;
            v20 = strlen((const char *)a3);
            v18 = v75;
            v14 = v70;
            v19 = (_BYTE *)(a3 + v17);
            v16 = v20;
          }
          if ( v17 + n <= v16 )
          {
            v80 = v18;
            v76 = v16;
            v71 = v14;
            v66 = v19;
            v21 = memcmp(v19, s2, n);
            v19 = v66;
            v14 = v71;
            v16 = v76;
            v18 = v80;
            if ( !v21 )
            {
              if ( !v86 )
              {
                LOBYTE(v22) = *v66;
                switch ( *v66 )
                {
                  case 0:
                    goto LABEL_87;
                  case 7:
                    LOBYTE(v22) = 97;
                    goto LABEL_83;
                  case 8:
                    v24 = 0;
                    a5 = 0;
                    LOBYTE(v22) = 98;
                    goto LABEL_29;
                  case 9:
                    goto LABEL_76;
                  case 0xA:
                    goto LABEL_68;
                  case 0xB:
                    goto LABEL_84;
                  case 0xC:
                    goto LABEL_81;
                  case 0xD:
                    goto LABEL_80;
                  case 0x20:
                    v37 = v61;
                    goto LABEL_132;
                  case 0x21:
                  case 0x22:
                  case 0x24:
                  case 0x26:
                  case 0x28:
                  case 0x29:
                  case 0x2A:
                  case 0x3B:
                  case 0x3C:
                  case 0x3D:
                  case 0x3E:
                  case 0x5B:
                  case 0x5E:
                  case 0x60:
                  case 0x7C:
                    goto LABEL_78;
                  case 0x23:
                  case 0x7E:
                    v38 = v61;
                    goto LABEL_129;
                  case 0x25:
                  case 0x2B:
                  case 0x2C:
                  case 0x2D:
                  case 0x2E:
                  case 0x2F:
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
                  case 0x3A:
                  case 0x41:
                  case 0x42:
                  case 0x43:
                  case 0x44:
                  case 0x45:
                  case 0x46:
                  case 0x47:
                  case 0x48:
                  case 0x49:
                  case 0x4A:
                  case 0x4B:
                  case 0x4C:
                  case 0x4D:
                  case 0x4E:
                  case 0x4F:
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
                  case 0x5A:
                  case 0x5D:
                  case 0x5F:
                  case 0x61:
                  case 0x62:
                  case 0x63:
                  case 0x64:
                  case 0x65:
                  case 0x66:
                  case 0x67:
                  case 0x68:
                  case 0x69:
                  case 0x6A:
                  case 0x6B:
                  case 0x6C:
                  case 0x6D:
                  case 0x6E:
                  case 0x6F:
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
                  case 0x7A:
                    v37 = v61;
                    goto LABEL_127;
                  case 0x27:
                    goto LABEL_62;
                  case 0x3F:
                    goto LABEL_58;
                  case 0x5C:
                    goto LABEL_65;
                  case 0x7B:
                  case 0x7D:
                    goto LABEL_17;
                  default:
                    goto LABEL_102;
                }
              }
LABEL_277:
              v30 = v18;
              LODWORD(v13) = v16;
              return sub_40A0E0((int)v9, v10, a3, v13, v30, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, a9);
            }
          }
        }
        LOBYTE(v22) = *v19;
        switch ( *v19 )
        {
          case 0:
            goto LABEL_85;
          case 7:
            LOBYTE(v22) = 97;
            goto LABEL_82;
          case 8:
            LOBYTE(v22) = 98;
            goto LABEL_69;
          case 9:
LABEL_76:
            LOBYTE(v22) = 116;
            goto LABEL_69;
          case 0xA:
LABEL_68:
            LOBYTE(v22) = 110;
LABEL_69:
            v24 = 0;
            a5 = 0;
            if ( v86 )
              goto LABEL_70;
            goto LABEL_29;
          case 0xB:
LABEL_84:
            LOBYTE(v22) = 118;
            goto LABEL_82;
          case 0xC:
LABEL_81:
            LOBYTE(v22) = 102;
LABEL_82:
            if ( v86 )
            {
              v30 = v18;
              v31 = 0;
              LODWORD(v13) = v16;
              goto LABEL_71;
            }
LABEL_83:
            a5 = 0;
            goto LABEL_37;
          case 0xD:
            v61 = 0;
LABEL_80:
            LOBYTE(v22) = 13;
            v29 = 114;
            v24 = v18 == 2;
            goto LABEL_66;
          case 0x20:
            v37 = 0;
LABEL_132:
            LOBYTE(v22) = 32;
            goto LABEL_127;
          case 0x21:
          case 0x22:
          case 0x24:
          case 0x26:
          case 0x28:
          case 0x29:
          case 0x2A:
          case 0x3B:
          case 0x3C:
          case 0x3D:
          case 0x3E:
          case 0x5B:
          case 0x5E:
          case 0x60:
          case 0x7C:
            v61 = 0;
LABEL_78:
            v24 = 0;
            goto LABEL_67;
          case 0x23:
          case 0x7E:
            v38 = 0;
LABEL_129:
            if ( !v17 )
            {
              a5 = v61;
              v24 = 0;
              v61 = v38;
              goto LABEL_23;
            }
            v61 = v38;
            a5 = 0;
            break;
          case 0x25:
          case 0x2B:
          case 0x2C:
          case 0x2D:
          case 0x2E:
          case 0x2F:
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
          case 0x3A:
          case 0x41:
          case 0x42:
          case 0x43:
          case 0x44:
          case 0x45:
          case 0x46:
          case 0x47:
          case 0x48:
          case 0x49:
          case 0x4A:
          case 0x4B:
          case 0x4C:
          case 0x4D:
          case 0x4E:
          case 0x4F:
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
          case 0x5A:
          case 0x5D:
          case 0x5F:
          case 0x61:
          case 0x62:
          case 0x63:
          case 0x64:
          case 0x65:
          case 0x66:
          case 0x67:
          case 0x68:
          case 0x69:
          case 0x6A:
          case 0x6B:
          case 0x6C:
          case 0x6D:
          case 0x6E:
          case 0x6F:
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
          case 0x7A:
            v37 = 0;
LABEL_127:
            a5 = v61;
            v61 = v37;
            LOBYTE(v25) = 0;
            goto LABEL_25;
          case 0x27:
            v61 = 0;
            goto LABEL_62;
          case 0x3F:
            v61 = 0;
            goto LABEL_58;
          case 0x5C:
            v61 = 0;
            goto LABEL_65;
          case 0x7B:
          case 0x7D:
            v61 = 0;
            goto LABEL_17;
          default:
            v61 = 0;
            goto LABEL_102;
        }
LABEL_24:
        LOBYTE(v25) = 0;
LABEL_25:
        if ( a7 && ((*(_DWORD *)(a7 + 4LL * ((unsigned __int8)v22 >> 5)) >> v22) & 1) != 0 )
        {
          v24 = v18 == 2;
LABEL_28:
          if ( v86 )
          {
LABEL_70:
            v30 = v18;
            v31 = v24;
            LODWORD(v13) = v16;
LABEL_71:
            v60 &= v31;
            goto LABEL_72;
          }
LABEL_29:
          v26 = v14 ^ 1;
          if ( (v24 & ((unsigned __int8)v14 ^ 1)) != 0 )
          {
            if ( v10 > v15 )
              v9[v15] = 39;
            if ( v15 + 1 < v10 )
              v9[v15 + 1] = 36;
            if ( v15 + 2 < v10 )
              v9[v15 + 2] = 39;
            v15 += 3LL;
            LOBYTE(v26) = v24 & (v14 ^ 1);
            v14 = v26;
          }
LABEL_37:
          if ( v10 > v15 )
            v9[v15] = 92;
          ++v15;
          ++v17;
          goto LABEL_40;
        }
LABEL_49:
        v24 = v18 == 2;
        if ( v61 )
          goto LABEL_28;
        ++v17;
        LOBYTE(v25) = v14 & ((unsigned __int8)v25 ^ 1);
LABEL_51:
        if ( (_BYTE)v25 )
        {
          if ( v10 > v15 )
            v9[v15] = 39;
          if ( v10 > v15 + 1 )
            v9[v15 + 1] = 39;
          v15 += 2LL;
          v14 = 0;
        }
LABEL_40:
        if ( v15 < v10 )
          v9[v15] = v22;
        v27 = v63;
        ++v15;
        if ( !(_BYTE)a5 )
          v27 = 0;
        v63 = v27;
      }
      LOBYTE(v22) = *v19;
      switch ( *v19 )
      {
        case 0:
          if ( !v60 )
          {
            if ( (a6 & 1) == 0 )
            {
              v61 = 0;
              v24 = v18 == 2;
              a5 = 0;
              LOBYTE(v22) = 0;
              goto LABEL_23;
            }
            ++v17;
            goto LABEL_4;
          }
LABEL_85:
          if ( v86 )
          {
            v30 = v18;
            LODWORD(v13) = v16;
            v60 = v30 == 2;
            goto LABEL_72;
          }
          v61 = 0;
LABEL_87:
          v33 = v18 == 2;
          LODWORD(v25) = v14 ^ 1;
          LOBYTE(v25) = (v18 == 2) & (v14 ^ 1);
          if ( (_BYTE)v25 )
          {
            if ( v10 > v15 )
              v9[v15] = 39;
            if ( v10 > v15 + 1 )
              v9[v15 + 1] = 36;
            if ( v10 > v15 + 2 )
              v9[v15 + 2] = 39;
            v34 = v15 + 3;
            if ( v10 <= v15 + 3 )
            {
              v15 += 4LL;
              v14 = (int)v25;
              a5 = 0;
              LOBYTE(v22) = 48;
              goto LABEL_49;
            }
            goto LABEL_95;
          }
          v34 = v15;
          if ( v10 > v15 )
          {
            LODWORD(v25) = v14;
LABEL_95:
            v9[v34] = 92;
            v14 = (int)v25;
          }
          v15 = v34 + 1;
          if ( v18 == 2 )
          {
            LOBYTE(v25) = a5;
            LOBYTE(v22) = 48;
            a5 = 0;
            goto LABEL_49;
          }
          LOBYTE(v22) = 48;
          if ( v17 + 1 < v16 && (unsigned __int8)(*(_BYTE *)(a3 + v17 + 1) - 48) <= 9u )
          {
            if ( v10 > v15 )
              v9[v15] = 48;
            if ( v10 > v34 + 2 )
              v9[v34 + 2] = 48;
            v15 = v34 + 3;
            LOBYTE(v22) = 48;
          }
LABEL_99:
          LOBYTE(v25) = a5;
          a5 = 0;
          if ( v33 | v60 ^ 1 )
            goto LABEL_49;
          goto LABEL_25;
        case 7:
          LOBYTE(v22) = 7;
          v29 = 97;
          v24 = v18 == 2;
          goto LABEL_66;
        case 8:
          LOBYTE(v22) = 8;
          v29 = 98;
          v24 = v18 == 2;
          goto LABEL_66;
        case 9:
          LOBYTE(v22) = 9;
          v29 = 116;
          goto LABEL_108;
        case 0xA:
          LOBYTE(v22) = 10;
          v29 = 110;
          goto LABEL_108;
        case 0xB:
          LOBYTE(v22) = 11;
          v29 = 118;
          v24 = v18 == 2;
          goto LABEL_66;
        case 0xC:
          LOBYTE(v22) = 12;
          v29 = 102;
          v24 = v18 == 2;
          goto LABEL_66;
        case 0xD:
          LOBYTE(v22) = 13;
          v29 = 114;
LABEL_108:
          v24 = v18 == 2;
          v61 = v18 == 2 && v86;
          if ( v61 )
            goto LABEL_109;
          goto LABEL_66;
        case 0x20:
          LOBYTE(v22) = 32;
          v24 = v18 == 2;
          goto LABEL_21;
        case 0x21:
        case 0x22:
        case 0x24:
        case 0x26:
        case 0x28:
        case 0x29:
        case 0x2A:
        case 0x3B:
        case 0x3C:
        case 0x3D:
        case 0x3E:
        case 0x5B:
        case 0x5E:
        case 0x60:
        case 0x7C:
          v24 = v18 == 2;
          a5 = 0;
          goto LABEL_21;
        case 0x23:
        case 0x7E:
          v24 = v18 == 2;
          goto LABEL_20;
        case 0x25:
        case 0x2B:
        case 0x2C:
        case 0x2D:
        case 0x2E:
        case 0x2F:
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
        case 0x3A:
        case 0x41:
        case 0x42:
        case 0x43:
        case 0x44:
        case 0x45:
        case 0x46:
        case 0x47:
        case 0x48:
        case 0x49:
        case 0x4A:
        case 0x4B:
        case 0x4C:
        case 0x4D:
        case 0x4E:
        case 0x4F:
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
        case 0x5A:
        case 0x5D:
        case 0x5F:
        case 0x61:
        case 0x62:
        case 0x63:
        case 0x64:
        case 0x65:
        case 0x66:
        case 0x67:
        case 0x68:
        case 0x69:
        case 0x6A:
        case 0x6B:
        case 0x6C:
        case 0x6D:
        case 0x6E:
        case 0x6F:
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
        case 0x7A:
          goto LABEL_105;
        case 0x27:
LABEL_62:
          if ( v18 != 2 )
          {
            v87 = a5;
            v24 = 0;
            LOBYTE(v22) = 39;
            goto LABEL_23;
          }
          if ( v86 )
            goto LABEL_288;
          if ( !v10 || (v28 = 0LL, v83) )
          {
            if ( v10 > v15 )
              v9[v15] = 39;
            if ( v10 > v15 + 1 )
              v9[v15 + 1] = 92;
            v28 = v10;
            if ( v10 > v15 + 2 )
              v9[v15 + 2] = 39;
            v10 = v83;
          }
          v87 = a5;
          v15 += 3LL;
          LOBYTE(v25) = 0;
          v14 = 0;
          v83 = v10;
          LOBYTE(v22) = 39;
          v10 = v28;
          goto LABEL_49;
        case 0x3F:
LABEL_58:
          if ( v18 == 2 )
          {
            if ( v86 )
            {
LABEL_288:
              v30 = 2;
              LODWORD(v13) = v16;
              goto LABEL_72;
            }
            a5 = 0;
            LOBYTE(v25) = 0;
            LOBYTE(v22) = 63;
            goto LABEL_49;
          }
          if ( v18 != 5 )
          {
            LOBYTE(v22) = 63;
            v24 = v18 == 2;
            a5 = 0;
            goto LABEL_23;
          }
          if ( (a6 & 4) == 0
            || v17 + 2 >= v16
            || *(_BYTE *)(a3 + v17 + 1) != 63
            || (v22 = *(unsigned __int8 *)(a3 + v17 + 2), (unsigned __int8)v22 > 0x3Eu)
            || (v53 = 0x7000A38200000000LL, !_bittest64(&v53, v22)) )
          {
            v24 = 0;
            a5 = 0;
            LOBYTE(v22) = 63;
            goto LABEL_23;
          }
          if ( v86 )
            goto LABEL_277;
          if ( v10 > v15 )
            v9[v15] = 63;
          if ( v10 > v15 + 1 )
            v9[v15 + 1] = 34;
          if ( v10 > v15 + 2 )
            v9[v15 + 2] = 34;
          if ( v10 > v15 + 3 )
            v9[v15 + 3] = 63;
          v15 += 4LL;
          v33 = 0;
          LOBYTE(a5) = 0;
          v17 += 2LL;
          goto LABEL_99;
        case 0x5C:
          if ( v18 == 2 )
          {
            if ( v86 )
              goto LABEL_288;
            ++v17;
            LOBYTE(v25) = v14;
            a5 = 0;
            LOBYTE(v22) = 92;
            goto LABEL_51;
          }
LABEL_65:
          LOBYTE(v22) = 92;
          v29 = 92;
          v24 = (n != 0) & v86 & v60;
          if ( v24 )
          {
            ++v17;
            LOBYTE(v25) = v14;
            a5 = 0;
            goto LABEL_51;
          }
LABEL_66:
          if ( !v60 )
          {
LABEL_67:
            a5 = 0;
            goto LABEL_23;
          }
          LOBYTE(v22) = v29;
          a5 = 0;
          goto LABEL_28;
        case 0x7B:
        case 0x7D:
LABEL_17:
          v23 = v16 != 1;
          if ( v16 == -1LL )
            v23 = *(_BYTE *)(a3 + 1) != 0;
          v24 = v18 == 2;
          if ( v23 )
            goto LABEL_67;
LABEL_20:
          if ( v17 )
            goto LABEL_67;
LABEL_21:
          if ( !v86 || !v24 )
            goto LABEL_23;
LABEL_109:
          LODWORD(v13) = v16;
          v30 = 2;
          goto LABEL_72;
        default:
LABEL_102:
          if ( mb_cur_max == 1 )
          {
            v77 = v18;
            v72 = v16;
            v67 = v14;
            v25 = __ctype_b_loc();
            v14 = v67;
            v16 = v72;
            v18 = v77;
            v35 = 1LL;
            LODWORD(v25) = (*v25)[(unsigned __int8)v22];
            LOWORD(v25) = (unsigned __int16)v25 & 0x4000;
            LOBYTE(a5) = (_WORD)v25 != 0;
            LOBYTE(v36) = v60 & ((_WORD)v25 == 0);
LABEL_104:
            if ( (_BYTE)v36 )
            {
              v36 = v60;
              LOBYTE(a5) = 0;
LABEL_178:
              v48 = 0;
              v49 = v17 + v35;
              v50 = v61;
              while ( 1 )
              {
                if ( (_BYTE)v36 )
                {
                  if ( v86 )
                  {
                    v30 = v18;
                    v60 = v18 == 2;
                    LODWORD(v13) = v16;
                    goto LABEL_72;
                  }
                  LOBYTE(v25) = (v14 ^ 1) & (v18 == 2);
                  if ( (_BYTE)v25 )
                  {
                    if ( v10 > v15 )
                      v9[v15] = 39;
                    if ( v10 > v15 + 1 )
                      v9[v15 + 1] = 36;
                    if ( v10 > v15 + 2 )
                      v9[v15 + 2] = 39;
                    v15 += 3LL;
                    v14 = (int)v25;
                  }
                  if ( v10 > v15 )
                    v9[v15] = 92;
                  if ( v10 > v15 + 1 )
                    v9[v15 + 1] = ((unsigned __int8)v22 >> 6) + 48;
                  LODWORD(v25) = v15 + 2;
                  if ( v10 > v15 + 2 )
                  {
                    LODWORD(v25) = (((unsigned __int8)v22 >> 3) & 7) + 48;
                    v9[v15 + 2] = (_BYTE)v25;
                  }
                  ++v17;
                  v15 += 3LL;
                  LOBYTE(v22) = (v22 & 7) + 48;
                  if ( v17 >= v49 )
                  {
                    a5 = (unsigned __int8)a5;
                    goto LABEL_40;
                  }
                  v48 = v36;
                }
                else
                {
                  LODWORD(v25) = v14 & (v48 ^ 1);
                  if ( v50 )
                  {
                    if ( v10 > v15 )
                      v9[v15] = 92;
                    ++v15;
                  }
                  if ( ++v17 >= v49 )
                  {
                    a5 = (unsigned __int8)a5;
                    goto LABEL_51;
                  }
                  if ( (_BYTE)v25 )
                  {
                    if ( v10 > v15 )
                      v9[v15] = 39;
                    LODWORD(v25) = v15 + 1;
                    if ( v10 > v15 + 1 )
                      v9[v15 + 1] = 39;
                    v15 += 2LL;
                    v50 = 0;
                    v14 = 0;
                  }
                  else
                  {
                    v50 = 0;
                  }
                }
                if ( v10 > v15 )
                  v9[v15] = v22;
                LOBYTE(v22) = *(_BYTE *)(a3 + v17);
                ++v15;
              }
            }
LABEL_105:
            v24 = v18 == 2;
LABEL_23:
            LOBYTE(v25) = v86 | (v24 | v60 ^ 1) ^ 1;
            if ( !(_BYTE)v25 )
              goto LABEL_49;
            goto LABEL_24;
          }
          ps = 0LL;
          if ( v16 == -1LL )
          {
            v78 = v18;
            v73 = v14;
            v68 = v19;
            v43 = strlen((const char *)a3);
            v18 = v78;
            LOBYTE(v14) = v73;
            v19 = v68;
            v16 = v43;
          }
          v89 = v15;
          v90 = v19;
          v44 = 0LL;
          v88 = v14;
          v79 = v9;
          v81 = v10;
          v69 = v16;
          v74 = v18;
          break;
      }
      while ( 2 )
      {
        v45 = (char *)v44 + v17;
        v25 = (const unsigned __int16 **)sub_40D310((wchar_t *)&wc, (char *)v44 + v17 + a3);
        v46 = v25;
        if ( !v25 )
        {
LABEL_245:
          v35 = (unsigned __int64)v44;
          v15 = v89;
          v14 = v88;
          v9 = v79;
          v36 = a5 ^ 1;
          v10 = v81;
          v16 = v69;
          v18 = v74;
          LOBYTE(v36) = v60 & (a5 ^ 1);
          goto LABEL_246;
        }
        if ( v25 == (const unsigned __int16 **)-1LL )
        {
          v35 = (unsigned __int64)v44;
          v15 = v89;
          a5 = 0;
          v14 = v88;
          v9 = v79;
          v10 = v81;
          v16 = v69;
          v18 = v74;
          v36 = v60;
          goto LABEL_246;
        }
        if ( v25 == (const unsigned __int16 **)-2LL )
        {
          v16 = v69;
          v54 = (char *)v44 + v17;
          v55 = (char *)v44 + v17 + a3;
          v25 = v44;
          v35 = (unsigned __int64)v44;
          v14 = v88;
          v15 = v89;
          v9 = v79;
          v10 = v81;
          v18 = v74;
          if ( (unsigned __int64)v54 < v69 && *v55 )
          {
            do
              v25 = (const unsigned __int16 **)((char *)v25 + 1);
            while ( (unsigned __int64)v25 + v17 < v69 && *((_BYTE *)v25 + (_QWORD)v90) );
            v35 = (unsigned __int64)v25;
          }
          v36 = v60;
          a5 = 0;
LABEL_246:
          if ( v35 > 1 )
            goto LABEL_178;
          goto LABEL_104;
        }
        if ( v74 != 2 || !v86 || v25 == (const unsigned __int16 **)1 )
        {
LABEL_152:
          if ( !iswprint(wc) )
            a5 = 0;
          v44 = (const unsigned __int16 **)((char *)v44 + (_QWORD)v46);
          LODWORD(v25) = mbsinit(&ps);
          if ( (_DWORD)v25 )
            goto LABEL_245;
          continue;
        }
        break;
      }
      v47 = &v45[a3 + 1];
      while ( (unsigned __int8)(*v47 - 91) > 0x21u || ((1LL << (*v47 - 91)) & 0x20000002BLL) == 0 )
      {
        if ( (char *)v46 + a3 + (_QWORD)v45 == ++v47 )
          goto LABEL_152;
      }
      LODWORD(v9) = (_DWORD)v79;
      LODWORD(v10) = v81;
      v30 = 2;
      LODWORD(v13) = v69;
LABEL_72:
      if ( v60 )
        v30 = 4;
      return sub_40A0E0((int)v9, v10, a3, v13, v30, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, a9);
    case 5:
      if ( v12 )
      {
        v63 = 1;
        v14 = 0;
        v15 = 0LL;
        v87 = 0;
        v83 = 0LL;
        v86 = 1;
        v60 = 1;
        n = 1LL;
        s2 = "TZ=\"" + 3;
      }
      else
      {
        if ( a2 )
        {
          *a1 = 34;
          v14 = 0;
          v63 = 1;
          v87 = 0;
          v83 = 0LL;
        }
        else
        {
          v83 = 0LL;
          v14 = 0;
          v63 = 1;
          v87 = 0;
        }
        v86 = 0;
        v15 = 1LL;
        v60 = 1;
        n = 1LL;
        s2 = "TZ=\"" + 3;
      }
      goto LABEL_3;
    case 6:
      v63 = 1;
      v14 = 0;
      v15 = 0LL;
      a5 = 5;
      v87 = 0;
      v83 = 0LL;
      v86 = 1;
      v60 = 1;
      n = 1LL;
      s2 = "TZ=\"" + 3;
      goto LABEL_3;
    case 7:
      v63 = 1;
      v14 = 0;
      v15 = 0LL;
      v87 = 0;
      v83 = 0LL;
      v86 = 0;
      v60 = 1;
      n = 0LL;
      s2 = 0LL;
      goto LABEL_3;
    case 8:
    case 9:
    case 10:
      if ( v12 )
      {
        a8 = sub_409FE0("`", a5);
        v51 = sub_409FE0("'", a5);
        v13 = a4;
        a9 = v51;
      }
      v15 = 0LL;
      if ( !v12 )
      {
        for ( i = *a8; i; i = a8[v15] )
        {
          if ( a2 > v15 )
            a1[v15] = i;
          ++v15;
        }
      }
      v62 = v13;
      v52 = strlen(a9);
      v63 = 1;
      v14 = 0;
      v13 = v62;
      n = v52;
      v87 = 0;
      s2 = a9;
      v83 = 0LL;
      v60 = 1;
      goto LABEL_3;
    default:
      abort();
  }
}

unsigned __int64 __fastcall sub_40A0E0(
        _BYTE *a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        int a5,
        int a6,
        __int64 a7,
        char *a8,
        char *a9)
{
  _BYTE *v9; // r15
  unsigned __int64 v10; // r14
  int v12; // ebp
  unsigned __int64 v13; // r11
  int v14; // r10d
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // r9
  unsigned __int64 v17; // r12
  int v18; // r11d
  _BYTE *v19; // r8
  size_t v20; // rax
  int v21; // eax
  unsigned __int64 v22; // rbp
  bool v23; // al
  unsigned __int8 v24; // dl
  const unsigned __int16 **v25; // rax
  int v26; // eax
  char v27; // di
  unsigned __int64 v28; // rdx
  char v29; // cl
  int v30; // r13d
  unsigned __int8 v31; // al
  bool v33; // dl
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // rdi
  int v36; // edx
  unsigned __int8 v37; // al
  unsigned __int8 v38; // al
  int v39; // r13d
  bool v40; // dl
  bool v41; // dl
  bool v42; // al
  size_t v43; // rax
  const unsigned __int16 **v44; // rbx
  char *v45; // r15
  const unsigned __int16 **v46; // r14
  char *v47; // rax
  int v48; // esi
  unsigned __int64 v49; // rcx
  unsigned __int8 v50; // di
  char *v51; // rax
  size_t v52; // rax
  __int64 v53; // rsi
  char *v54; // rsi
  _BYTE *v55; // rcx
  char i; // al
  char v57; // dl
  char *v58; // rax
  unsigned __int8 v60; // [rsp+8h] [rbp-C0h]
  unsigned __int8 v61; // [rsp+10h] [rbp-B8h]
  unsigned __int64 v62; // [rsp+10h] [rbp-B8h]
  char v63; // [rsp+1Fh] [rbp-A9h]
  size_t n; // [rsp+28h] [rbp-A0h]
  _BYTE *v66; // [rsp+30h] [rbp-98h]
  unsigned __int8 v67; // [rsp+30h] [rbp-98h]
  _BYTE *v68; // [rsp+30h] [rbp-98h]
  unsigned __int64 v69; // [rsp+30h] [rbp-98h]
  unsigned __int8 v70; // [rsp+38h] [rbp-90h]
  unsigned __int8 v71; // [rsp+38h] [rbp-90h]
  unsigned __int64 v72; // [rsp+38h] [rbp-90h]
  char v73; // [rsp+38h] [rbp-90h]
  int v74; // [rsp+38h] [rbp-90h]
  int v75; // [rsp+40h] [rbp-88h]
  unsigned __int64 v76; // [rsp+40h] [rbp-88h]
  int v77; // [rsp+40h] [rbp-88h]
  int v78; // [rsp+40h] [rbp-88h]
  _BYTE *v79; // [rsp+40h] [rbp-88h]
  int v80; // [rsp+48h] [rbp-80h]
  unsigned __int64 v81; // [rsp+48h] [rbp-80h]
  char *s2; // [rsp+50h] [rbp-78h]
  unsigned __int64 v83; // [rsp+58h] [rbp-70h]
  size_t mb_cur_max; // [rsp+60h] [rbp-68h]
  bool v86; // [rsp+6Ch] [rbp-5Ch]
  char v87; // [rsp+6Dh] [rbp-5Bh]
  unsigned __int8 v88; // [rsp+6Eh] [rbp-5Ah]
  unsigned __int64 v89; // [rsp+70h] [rbp-58h]
  _BYTE *v90; // [rsp+78h] [rbp-50h]
  wint_t wc; // [rsp+84h] [rbp-44h] BYREF
  mbstate_t ps; // [rsp+88h] [rbp-40h] BYREF

  v9 = a1;
  v10 = a2;
  v12 = a6 & 2;
  mb_cur_max = __ctype_get_mb_cur_max();
  v86 = v12 != 0;
  v13 = a4;
  switch ( a5 )
  {
    case 0:
      v63 = 1;
      v14 = 0;
      v15 = 0LL;
      v87 = 0;
      v83 = 0LL;
      v86 = 0;
      v60 = 0;
      n = 0LL;
      s2 = 0LL;
      goto LABEL_3;
    case 1:
      goto LABEL_2;
    case 2:
      if ( !v12 )
      {
        v60 = 0;
        goto LABEL_216;
      }
      v63 = 1;
      v14 = 0;
      v15 = 0LL;
      v87 = 0;
      v83 = 0LL;
      v86 = 1;
      v60 = 0;
      n = 1LL;
      s2 = "'";
      goto LABEL_3;
    case 3:
      v63 = 1;
      v14 = 0;
      v15 = 0LL;
      a5 = 2;
      v87 = 0;
      v83 = 0LL;
      v86 = 1;
      v60 = 1;
      n = 1LL;
      s2 = "'";
      goto LABEL_3;
    case 4:
      if ( v12 )
      {
LABEL_2:
        v63 = 1;
        v14 = 0;
        v15 = 0LL;
        a5 = 2;
        v87 = 0;
        v83 = 0LL;
        v86 = 1;
        v60 = 0;
        n = 1LL;
        s2 = "'";
        goto LABEL_3;
      }
      v60 = 1;
LABEL_216:
      if ( a2 )
      {
        v14 = 0;
        v42 = 0;
        v63 = 1;
        v83 = 0LL;
        goto LABEL_142;
      }
      v63 = 1;
      v14 = 0;
      v15 = 1LL;
      a5 = 2;
      v83 = 0LL;
      v87 = 0;
      v86 = 0;
      n = 1LL;
      s2 = "'";
LABEL_3:
      v16 = v13;
      v17 = 0LL;
      v18 = a5;
      while ( 1 )
      {
LABEL_4:
        LOBYTE(a5) = v16 != v17;
        if ( v16 == -1LL )
          LOBYTE(a5) = *(_BYTE *)(a3 + v17) != 0;
        if ( !(_BYTE)a5 )
        {
          v39 = v18;
          v13 = v16;
          v40 = v39 == 2;
          if ( !v15 && v40 && v86 )
          {
            v30 = 2;
            goto LABEL_72;
          }
          v41 = !v86 && v40;
          if ( v41 )
          {
            if ( v87 )
            {
              if ( v63 )
                return sub_40A0E0((int)v9, v83, a3, v16, 5, a6, a7, (__int64)a8, a9);
              v42 = v83 != 0 && v10 == 0;
              if ( v42 )
              {
                v10 = v83;
LABEL_142:
                *v9 = 39;
                a5 = 2;
                v15 = 1LL;
                s2 = "'";
                n = 1LL;
                v86 = 0;
                v87 = v42;
                goto LABEL_3;
              }
              v41 = v87;
            }
          }
          else
          {
            v41 = !v86;
          }
          if ( s2 )
          {
            if ( v41 )
            {
              v57 = *s2;
              if ( *s2 )
              {
                v58 = &s2[-v15];
                do
                {
                  if ( v10 > v15 )
                    v9[v15] = v57;
                  v57 = v58[++v15];
                }
                while ( v57 );
              }
            }
          }
          if ( v10 > v15 )
            v9[v15] = 0;
          return v15;
        }
        v19 = (_BYTE *)(a3 + v17);
        v61 = v60 & (v18 != 2);
        if ( !v61 )
          break;
        if ( n )
        {
          if ( v16 == -1LL && n > 1 )
          {
            v75 = v18;
            v70 = v14;
            v20 = strlen((const char *)a3);
            v18 = v75;
            v14 = v70;
            v19 = (_BYTE *)(a3 + v17);
            v16 = v20;
          }
          if ( v17 + n <= v16 )
          {
            v80 = v18;
            v76 = v16;
            v71 = v14;
            v66 = v19;
            v21 = memcmp(v19, s2, n);
            v19 = v66;
            v14 = v71;
            v16 = v76;
            v18 = v80;
            if ( !v21 )
            {
              if ( !v86 )
              {
                LOBYTE(v22) = *v66;
                switch ( *v66 )
                {
                  case 0:
                    goto LABEL_87;
                  case 7:
                    LOBYTE(v22) = 97;
                    goto LABEL_83;
                  case 8:
                    v24 = 0;
                    a5 = 0;
                    LOBYTE(v22) = 98;
                    goto LABEL_29;
                  case 9:
                    goto LABEL_76;
                  case 0xA:
                    goto LABEL_68;
                  case 0xB:
                    goto LABEL_84;
                  case 0xC:
                    goto LABEL_81;
                  case 0xD:
                    goto LABEL_80;
                  case 0x20:
                    v37 = v61;
                    goto LABEL_132;
                  case 0x21:
                  case 0x22:
                  case 0x24:
                  case 0x26:
                  case 0x28:
                  case 0x29:
                  case 0x2A:
                  case 0x3B:
                  case 0x3C:
                  case 0x3D:
                  case 0x3E:
                  case 0x5B:
                  case 0x5E:
                  case 0x60:
                  case 0x7C:
                    goto LABEL_78;
                  case 0x23:
                  case 0x7E:
                    v38 = v61;
                    goto LABEL_129;
                  case 0x25:
                  case 0x2B:
                  case 0x2C:
                  case 0x2D:
                  case 0x2E:
                  case 0x2F:
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
                  case 0x3A:
                  case 0x41:
                  case 0x42:
                  case 0x43:
                  case 0x44:
                  case 0x45:
                  case 0x46:
                  case 0x47:
                  case 0x48:
                  case 0x49:
                  case 0x4A:
                  case 0x4B:
                  case 0x4C:
                  case 0x4D:
                  case 0x4E:
                  case 0x4F:
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
                  case 0x5A:
                  case 0x5D:
                  case 0x5F:
                  case 0x61:
                  case 0x62:
                  case 0x63:
                  case 0x64:
                  case 0x65:
                  case 0x66:
                  case 0x67:
                  case 0x68:
                  case 0x69:
                  case 0x6A:
                  case 0x6B:
                  case 0x6C:
                  case 0x6D:
                  case 0x6E:
                  case 0x6F:
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
                  case 0x7A:
                    v37 = v61;
                    goto LABEL_127;
                  case 0x27:
                    goto LABEL_62;
                  case 0x3F:
                    goto LABEL_58;
                  case 0x5C:
                    goto LABEL_65;
                  case 0x7B:
                  case 0x7D:
                    goto LABEL_17;
                  default:
                    goto LABEL_102;
                }
              }
LABEL_277:
              v30 = v18;
              LODWORD(v13) = v16;
              return sub_40A0E0((int)v9, v10, a3, v13, v30, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, a9);
            }
          }
        }
        LOBYTE(v22) = *v19;
        switch ( *v19 )
        {
          case 0:
            goto LABEL_85;
          case 7:
            LOBYTE(v22) = 97;
            goto LABEL_82;
          case 8:
            LOBYTE(v22) = 98;
            goto LABEL_69;
          case 9:
LABEL_76:
            LOBYTE(v22) = 116;
            goto LABEL_69;
          case 0xA:
LABEL_68:
            LOBYTE(v22) = 110;
LABEL_69:
            v24 = 0;
            a5 = 0;
            if ( v86 )
              goto LABEL_70;
            goto LABEL_29;
          case 0xB:
LABEL_84:
            LOBYTE(v22) = 118;
            goto LABEL_82;
          case 0xC:
LABEL_81:
            LOBYTE(v22) = 102;
LABEL_82:
            if ( v86 )
            {
              v30 = v18;
              v31 = 0;
              LODWORD(v13) = v16;
              goto LABEL_71;
            }
LABEL_83:
            a5 = 0;
            goto LABEL_37;
          case 0xD:
            v61 = 0;
LABEL_80:
            LOBYTE(v22) = 13;
            v29 = 114;
            v24 = v18 == 2;
            goto LABEL_66;
          case 0x20:
            v37 = 0;
LABEL_132:
            LOBYTE(v22) = 32;
            goto LABEL_127;
          case 0x21:
          case 0x22:
          case 0x24:
          case 0x26:
          case 0x28:
          case 0x29:
          case 0x2A:
          case 0x3B:
          case 0x3C:
          case 0x3D:
          case 0x3E:
          case 0x5B:
          case 0x5E:
          case 0x60:
          case 0x7C:
            v61 = 0;
LABEL_78:
            v24 = 0;
            goto LABEL_67;
          case 0x23:
          case 0x7E:
            v38 = 0;
LABEL_129:
            if ( !v17 )
            {
              a5 = v61;
              v24 = 0;
              v61 = v38;
              goto LABEL_23;
            }
            v61 = v38;
            a5 = 0;
            break;
          case 0x25:
          case 0x2B:
          case 0x2C:
          case 0x2D:
          case 0x2E:
          case 0x2F:
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
          case 0x3A:
          case 0x41:
          case 0x42:
          case 0x43:
          case 0x44:
          case 0x45:
          case 0x46:
          case 0x47:
          case 0x48:
          case 0x49:
          case 0x4A:
          case 0x4B:
          case 0x4C:
          case 0x4D:
          case 0x4E:
          case 0x4F:
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
          case 0x5A:
          case 0x5D:
          case 0x5F:
          case 0x61:
          case 0x62:
          case 0x63:
          case 0x64:
          case 0x65:
          case 0x66:
          case 0x67:
          case 0x68:
          case 0x69:
          case 0x6A:
          case 0x6B:
          case 0x6C:
          case 0x6D:
          case 0x6E:
          case 0x6F:
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
          case 0x7A:
            v37 = 0;
LABEL_127:
            a5 = v61;
            v61 = v37;
            LOBYTE(v25) = 0;
            goto LABEL_25;
          case 0x27:
            v61 = 0;
            goto LABEL_62;
          case 0x3F:
            v61 = 0;
            goto LABEL_58;
          case 0x5C:
            v61 = 0;
            goto LABEL_65;
          case 0x7B:
          case 0x7D:
            v61 = 0;
            goto LABEL_17;
          default:
            v61 = 0;
            goto LABEL_102;
        }
LABEL_24:
        LOBYTE(v25) = 0;
LABEL_25:
        if ( a7 && ((*(_DWORD *)(a7 + 4LL * ((unsigned __int8)v22 >> 5)) >> v22) & 1) != 0 )
        {
          v24 = v18 == 2;
LABEL_28:
          if ( v86 )
          {
LABEL_70:
            v30 = v18;
            v31 = v24;
            LODWORD(v13) = v16;
LABEL_71:
            v60 &= v31;
            goto LABEL_72;
          }
LABEL_29:
          v26 = v14 ^ 1;
          if ( (v24 & ((unsigned __int8)v14 ^ 1)) != 0 )
          {
            if ( v10 > v15 )
              v9[v15] = 39;
            if ( v15 + 1 < v10 )
              v9[v15 + 1] = 36;
            if ( v15 + 2 < v10 )
              v9[v15 + 2] = 39;
            v15 += 3LL;
            LOBYTE(v26) = v24 & (v14 ^ 1);
            v14 = v26;
          }
LABEL_37:
          if ( v10 > v15 )
            v9[v15] = 92;
          ++v15;
          ++v17;
          goto LABEL_40;
        }
LABEL_49:
        v24 = v18 == 2;
        if ( v61 )
          goto LABEL_28;
        ++v17;
        LOBYTE(v25) = v14 & ((unsigned __int8)v25 ^ 1);
LABEL_51:
        if ( (_BYTE)v25 )
        {
          if ( v10 > v15 )
            v9[v15] = 39;
          if ( v10 > v15 + 1 )
            v9[v15 + 1] = 39;
          v15 += 2LL;
          v14 = 0;
        }
LABEL_40:
        if ( v15 < v10 )
          v9[v15] = v22;
        v27 = v63;
        ++v15;
        if ( !(_BYTE)a5 )
          v27 = 0;
        v63 = v27;
      }
      LOBYTE(v22) = *v19;
      switch ( *v19 )
      {
        case 0:
          if ( !v60 )
          {
            if ( (a6 & 1) == 0 )
            {
              v61 = 0;
              v24 = v18 == 2;
              a5 = 0;
              LOBYTE(v22) = 0;
              goto LABEL_23;
            }
            ++v17;
            goto LABEL_4;
          }
LABEL_85:
          if ( v86 )
          {
            v30 = v18;
            LODWORD(v13) = v16;
            v60 = v30 == 2;
            goto LABEL_72;
          }
          v61 = 0;
LABEL_87:
          v33 = v18 == 2;
          LODWORD(v25) = v14 ^ 1;
          LOBYTE(v25) = (v18 == 2) & (v14 ^ 1);
          if ( (_BYTE)v25 )
          {
            if ( v10 > v15 )
              v9[v15] = 39;
            if ( v10 > v15 + 1 )
              v9[v15 + 1] = 36;
            if ( v10 > v15 + 2 )
              v9[v15 + 2] = 39;
            v34 = v15 + 3;
            if ( v10 <= v15 + 3 )
            {
              v15 += 4LL;
              v14 = (int)v25;
              a5 = 0;
              LOBYTE(v22) = 48;
              goto LABEL_49;
            }
            goto LABEL_95;
          }
          v34 = v15;
          if ( v10 > v15 )
          {
            LODWORD(v25) = v14;
LABEL_95:
            v9[v34] = 92;
            v14 = (int)v25;
          }
          v15 = v34 + 1;
          if ( v18 == 2 )
          {
            LOBYTE(v25) = a5;
            LOBYTE(v22) = 48;
            a5 = 0;
            goto LABEL_49;
          }
          LOBYTE(v22) = 48;
          if ( v17 + 1 < v16 && (unsigned __int8)(*(_BYTE *)(a3 + v17 + 1) - 48) <= 9u )
          {
            if ( v10 > v15 )
              v9[v15] = 48;
            if ( v10 > v34 + 2 )
              v9[v34 + 2] = 48;
            v15 = v34 + 3;
            LOBYTE(v22) = 48;
          }
LABEL_99:
          LOBYTE(v25) = a5;
          a5 = 0;
          if ( v33 | v60 ^ 1 )
            goto LABEL_49;
          goto LABEL_25;
        case 7:
          LOBYTE(v22) = 7;
          v29 = 97;
          v24 = v18 == 2;
          goto LABEL_66;
        case 8:
          LOBYTE(v22) = 8;
          v29 = 98;
          v24 = v18 == 2;
          goto LABEL_66;
        case 9:
          LOBYTE(v22) = 9;
          v29 = 116;
          goto LABEL_108;
        case 0xA:
          LOBYTE(v22) = 10;
          v29 = 110;
          goto LABEL_108;
        case 0xB:
          LOBYTE(v22) = 11;
          v29 = 118;
          v24 = v18 == 2;
          goto LABEL_66;
        case 0xC:
          LOBYTE(v22) = 12;
          v29 = 102;
          v24 = v18 == 2;
          goto LABEL_66;
        case 0xD:
          LOBYTE(v22) = 13;
          v29 = 114;
LABEL_108:
          v24 = v18 == 2;
          v61 = v18 == 2 && v86;
          if ( v61 )
            goto LABEL_109;
          goto LABEL_66;
        case 0x20:
          LOBYTE(v22) = 32;
          v24 = v18 == 2;
          goto LABEL_21;
        case 0x21:
        case 0x22:
        case 0x24:
        case 0x26:
        case 0x28:
        case 0x29:
        case 0x2A:
        case 0x3B:
        case 0x3C:
        case 0x3D:
        case 0x3E:
        case 0x5B:
        case 0x5E:
        case 0x60:
        case 0x7C:
          v24 = v18 == 2;
          a5 = 0;
          goto LABEL_21;
        case 0x23:
        case 0x7E:
          v24 = v18 == 2;
          goto LABEL_20;
        case 0x25:
        case 0x2B:
        case 0x2C:
        case 0x2D:
        case 0x2E:
        case 0x2F:
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
        case 0x3A:
        case 0x41:
        case 0x42:
        case 0x43:
        case 0x44:
        case 0x45:
        case 0x46:
        case 0x47:
        case 0x48:
        case 0x49:
        case 0x4A:
        case 0x4B:
        case 0x4C:
        case 0x4D:
        case 0x4E:
        case 0x4F:
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
        case 0x5A:
        case 0x5D:
        case 0x5F:
        case 0x61:
        case 0x62:
        case 0x63:
        case 0x64:
        case 0x65:
        case 0x66:
        case 0x67:
        case 0x68:
        case 0x69:
        case 0x6A:
        case 0x6B:
        case 0x6C:
        case 0x6D:
        case 0x6E:
        case 0x6F:
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
        case 0x7A:
          goto LABEL_105;
        case 0x27:
LABEL_62:
          if ( v18 != 2 )
          {
            v87 = a5;
            v24 = 0;
            LOBYTE(v22) = 39;
            goto LABEL_23;
          }
          if ( v86 )
            goto LABEL_288;
          if ( !v10 || (v28 = 0LL, v83) )
          {
            if ( v10 > v15 )
              v9[v15] = 39;
            if ( v10 > v15 + 1 )
              v9[v15 + 1] = 92;
            v28 = v10;
            if ( v10 > v15 + 2 )
              v9[v15 + 2] = 39;
            v10 = v83;
          }
          v87 = a5;
          v15 += 3LL;
          LOBYTE(v25) = 0;
          v14 = 0;
          v83 = v10;
          LOBYTE(v22) = 39;
          v10 = v28;
          goto LABEL_49;
        case 0x3F:
LABEL_58:
          if ( v18 == 2 )
          {
            if ( v86 )
            {
LABEL_288:
              v30 = 2;
              LODWORD(v13) = v16;
              goto LABEL_72;
            }
            a5 = 0;
            LOBYTE(v25) = 0;
            LOBYTE(v22) = 63;
            goto LABEL_49;
          }
          if ( v18 != 5 )
          {
            LOBYTE(v22) = 63;
            v24 = v18 == 2;
            a5 = 0;
            goto LABEL_23;
          }
          if ( (a6 & 4) == 0
            || v17 + 2 >= v16
            || *(_BYTE *)(a3 + v17 + 1) != 63
            || (v22 = *(unsigned __int8 *)(a3 + v17 + 2), (unsigned __int8)v22 > 0x3Eu)
            || (v53 = 0x7000A38200000000LL, !_bittest64(&v53, v22)) )
          {
            v24 = 0;
            a5 = 0;
            LOBYTE(v22) = 63;
            goto LABEL_23;
          }
          if ( v86 )
            goto LABEL_277;
          if ( v10 > v15 )
            v9[v15] = 63;
          if ( v10 > v15 + 1 )
            v9[v15 + 1] = 34;
          if ( v10 > v15 + 2 )
            v9[v15 + 2] = 34;
          if ( v10 > v15 + 3 )
            v9[v15 + 3] = 63;
          v15 += 4LL;
          v33 = 0;
          LOBYTE(a5) = 0;
          v17 += 2LL;
          goto LABEL_99;
        case 0x5C:
          if ( v18 == 2 )
          {
            if ( v86 )
              goto LABEL_288;
            ++v17;
            LOBYTE(v25) = v14;
            a5 = 0;
            LOBYTE(v22) = 92;
            goto LABEL_51;
          }
LABEL_65:
          LOBYTE(v22) = 92;
          v29 = 92;
          v24 = (n != 0) & v86 & v60;
          if ( v24 )
          {
            ++v17;
            LOBYTE(v25) = v14;
            a5 = 0;
            goto LABEL_51;
          }
LABEL_66:
          if ( !v60 )
          {
LABEL_67:
            a5 = 0;
            goto LABEL_23;
          }
          LOBYTE(v22) = v29;
          a5 = 0;
          goto LABEL_28;
        case 0x7B:
        case 0x7D:
LABEL_17:
          v23 = v16 != 1;
          if ( v16 == -1LL )
            v23 = *(_BYTE *)(a3 + 1) != 0;
          v24 = v18 == 2;
          if ( v23 )
            goto LABEL_67;
LABEL_20:
          if ( v17 )
            goto LABEL_67;
LABEL_21:
          if ( !v86 || !v24 )
            goto LABEL_23;
LABEL_109:
          LODWORD(v13) = v16;
          v30 = 2;
          goto LABEL_72;
        default:
LABEL_102:
          if ( mb_cur_max == 1 )
          {
            v77 = v18;
            v72 = v16;
            v67 = v14;
            v25 = __ctype_b_loc();
            v14 = v67;
            v16 = v72;
            v18 = v77;
            v35 = 1LL;
            LODWORD(v25) = (*v25)[(unsigned __int8)v22];
            LOWORD(v25) = (unsigned __int16)v25 & 0x4000;
            LOBYTE(a5) = (_WORD)v25 != 0;
            LOBYTE(v36) = v60 & ((_WORD)v25 == 0);
LABEL_104:
            if ( (_BYTE)v36 )
            {
              v36 = v60;
              LOBYTE(a5) = 0;
LABEL_178:
              v48 = 0;
              v49 = v17 + v35;
              v50 = v61;
              while ( 1 )
              {
                if ( (_BYTE)v36 )
                {
                  if ( v86 )
                  {
                    v30 = v18;
                    v60 = v18 == 2;
                    LODWORD(v13) = v16;
                    goto LABEL_72;
                  }
                  LOBYTE(v25) = (v14 ^ 1) & (v18 == 2);
                  if ( (_BYTE)v25 )
                  {
                    if ( v10 > v15 )
                      v9[v15] = 39;
                    if ( v10 > v15 + 1 )
                      v9[v15 + 1] = 36;
                    if ( v10 > v15 + 2 )
                      v9[v15 + 2] = 39;
                    v15 += 3LL;
                    v14 = (int)v25;
                  }
                  if ( v10 > v15 )
                    v9[v15] = 92;
                  if ( v10 > v15 + 1 )
                    v9[v15 + 1] = ((unsigned __int8)v22 >> 6) + 48;
                  LODWORD(v25) = v15 + 2;
                  if ( v10 > v15 + 2 )
                  {
                    LODWORD(v25) = (((unsigned __int8)v22 >> 3) & 7) + 48;
                    v9[v15 + 2] = (_BYTE)v25;
                  }
                  ++v17;
                  v15 += 3LL;
                  LOBYTE(v22) = (v22 & 7) + 48;
                  if ( v17 >= v49 )
                  {
                    a5 = (unsigned __int8)a5;
                    goto LABEL_40;
                  }
                  v48 = v36;
                }
                else
                {
                  LODWORD(v25) = v14 & (v48 ^ 1);
                  if ( v50 )
                  {
                    if ( v10 > v15 )
                      v9[v15] = 92;
                    ++v15;
                  }
                  if ( ++v17 >= v49 )
                  {
                    a5 = (unsigned __int8)a5;
                    goto LABEL_51;
                  }
                  if ( (_BYTE)v25 )
                  {
                    if ( v10 > v15 )
                      v9[v15] = 39;
                    LODWORD(v25) = v15 + 1;
                    if ( v10 > v15 + 1 )
                      v9[v15 + 1] = 39;
                    v15 += 2LL;
                    v50 = 0;
                    v14 = 0;
                  }
                  else
                  {
                    v50 = 0;
                  }
                }
                if ( v10 > v15 )
                  v9[v15] = v22;
                LOBYTE(v22) = *(_BYTE *)(a3 + v17);
                ++v15;
              }
            }
LABEL_105:
            v24 = v18 == 2;
LABEL_23:
            LOBYTE(v25) = v86 | (v24 | v60 ^ 1) ^ 1;
            if ( !(_BYTE)v25 )
              goto LABEL_49;
            goto LABEL_24;
          }
          ps = 0LL;
          if ( v16 == -1LL )
          {
            v78 = v18;
            v73 = v14;
            v68 = v19;
            v43 = strlen((const char *)a3);
            v18 = v78;
            LOBYTE(v14) = v73;
            v19 = v68;
            v16 = v43;
          }
          v89 = v15;
          v90 = v19;
          v44 = 0LL;
          v88 = v14;
          v79 = v9;
          v81 = v10;
          v69 = v16;
          v74 = v18;
          break;
      }
      while ( 2 )
      {
        v45 = (char *)v44 + v17;
        v25 = (const unsigned __int16 **)sub_40D310((wchar_t *)&wc, (char *)v44 + v17 + a3);
        v46 = v25;
        if ( !v25 )
        {
LABEL_245:
          v35 = (unsigned __int64)v44;
          v15 = v89;
          v14 = v88;
          v9 = v79;
          v36 = a5 ^ 1;
          v10 = v81;
          v16 = v69;
          v18 = v74;
          LOBYTE(v36) = v60 & (a5 ^ 1);
          goto LABEL_246;
        }
        if ( v25 == (const unsigned __int16 **)-1LL )
        {
          v35 = (unsigned __int64)v44;
          v15 = v89;
          a5 = 0;
          v14 = v88;
          v9 = v79;
          v10 = v81;
          v16 = v69;
          v18 = v74;
          v36 = v60;
          goto LABEL_246;
        }
        if ( v25 == (const unsigned __int16 **)-2LL )
        {
          v16 = v69;
          v54 = (char *)v44 + v17;
          v55 = (char *)v44 + v17 + a3;
          v25 = v44;
          v35 = (unsigned __int64)v44;
          v14 = v88;
          v15 = v89;
          v9 = v79;
          v10 = v81;
          v18 = v74;
          if ( (unsigned __int64)v54 < v69 && *v55 )
          {
            do
              v25 = (const unsigned __int16 **)((char *)v25 + 1);
            while ( (unsigned __int64)v25 + v17 < v69 && *((_BYTE *)v25 + (_QWORD)v90) );
            v35 = (unsigned __int64)v25;
          }
          v36 = v60;
          a5 = 0;
LABEL_246:
          if ( v35 > 1 )
            goto LABEL_178;
          goto LABEL_104;
        }
        if ( v74 != 2 || !v86 || v25 == (const unsigned __int16 **)1 )
        {
LABEL_152:
          if ( !iswprint(wc) )
            a5 = 0;
          v44 = (const unsigned __int16 **)((char *)v44 + (_QWORD)v46);
          LODWORD(v25) = mbsinit(&ps);
          if ( (_DWORD)v25 )
            goto LABEL_245;
          continue;
        }
        break;
      }
      v47 = &v45[a3 + 1];
      while ( (unsigned __int8)(*v47 - 91) > 0x21u || ((1LL << (*v47 - 91)) & 0x20000002BLL) == 0 )
      {
        if ( (char *)v46 + a3 + (_QWORD)v45 == ++v47 )
          goto LABEL_152;
      }
      LODWORD(v9) = (_DWORD)v79;
      LODWORD(v10) = v81;
      v30 = 2;
      LODWORD(v13) = v69;
LABEL_72:
      if ( v60 )
        v30 = 4;
      return sub_40A0E0((int)v9, v10, a3, v13, v30, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, a9);
    case 5:
      if ( v12 )
      {
        v63 = 1;
        v14 = 0;
        v15 = 0LL;
        v87 = 0;
        v83 = 0LL;
        v86 = 1;
        v60 = 1;
        n = 1LL;
        s2 = "TZ=\"" + 3;
      }
      else
      {
        if ( a2 )
        {
          *a1 = 34;
          v14 = 0;
          v63 = 1;
          v87 = 0;
          v83 = 0LL;
        }
        else
        {
          v83 = 0LL;
          v14 = 0;
          v63 = 1;
          v87 = 0;
        }
        v86 = 0;
        v15 = 1LL;
        v60 = 1;
        n = 1LL;
        s2 = "TZ=\"" + 3;
      }
      goto LABEL_3;
    case 6:
      v63 = 1;
      v14 = 0;
      v15 = 0LL;
      a5 = 5;
      v87 = 0;
      v83 = 0LL;
      v86 = 1;
      v60 = 1;
      n = 1LL;
      s2 = "TZ=\"" + 3;
      goto LABEL_3;
    case 7:
      v63 = 1;
      v14 = 0;
      v15 = 0LL;
      v87 = 0;
      v83 = 0LL;
      v86 = 0;
      v60 = 1;
      n = 0LL;
      s2 = 0LL;
      goto LABEL_3;
    case 8:
    case 9:
    case 10:
      if ( v12 )
      {
        a8 = sub_409FE0("`", a5);
        v51 = sub_409FE0("'", a5);
        v13 = a4;
        a9 = v51;
      }
      v15 = 0LL;
      if ( !v12 )
      {
        for ( i = *a8; i; i = a8[v15] )
        {
          if ( a2 > v15 )
            a1[v15] = i;
          ++v15;
        }
      }
      v62 = v13;
      v52 = strlen(a9);
      v63 = 1;
      v14 = 0;
      v13 = v62;
      n = v52;
      v87 = 0;
      s2 = a9;
      v83 = 0LL;
      v60 = 1;
      goto LABEL_3;
    default:
      abort();
  }
}

_BYTE *__fastcall sub_40B310(int a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  int *v6; // rax
  __m128i *v7; // rbx
  int *v8; // r13
  __int64 v9; // rsi
  unsigned __int64 *v10; // rbx
  _BYTE *v11; // r12
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rsi
  _BYTE *v14; // rax
  int v15; // r8d
  unsigned __int64 v18; // [rsp+10h] [rbp-48h]
  unsigned __int64 v19; // [rsp+10h] [rbp-48h]
  int v20; // [rsp+18h] [rbp-40h]
  int v21; // [rsp+1Ch] [rbp-3Ch]

  v6 = __errno_location();
  v7 = (__m128i *)ptr;
  v8 = v6;
  v20 = *v6;
  if ( a1 < 0 )
    abort();
  if ( dword_61B2F0 <= a1 )
  {
    if ( a1 == 0x7FFFFFFF )
      sub_40C3E0();
    v9 = 16LL * (a1 + 1);
    if ( ptr == &xmmword_61B2E0 )
    {
      v7 = (__m128i *)sub_40C1F0(0LL, v9);
      ptr = v7;
      *v7 = _mm_load_si128((const __m128i *)&xmmword_61B2E0);
    }
    else
    {
      ptr = (void *)sub_40C1F0(ptr, v9);
      v7 = (__m128i *)ptr;
    }
    memset(&v7[dword_61B2F0], 0, 16LL * (a1 + 1 - dword_61B2F0));
    dword_61B2F0 = a1 + 1;
  }
  v10 = (unsigned __int64 *)&v7[a1];
  v11 = (_BYTE *)v10[1];
  v21 = *(_DWORD *)(a4 + 4) | 1;
  v18 = *v10;
  v12 = sub_40A0E0(v11, *v10, a2, a3, *(_DWORD *)a4, v21, a4 + 8, *(char **)(a4 + 40), *(char **)(a4 + 48));
  if ( v18 <= v12 )
  {
    v13 = v12 + 1;
    *v10 = v12 + 1;
    if ( v11 != (_BYTE *)&unk_61B360 )
    {
      v19 = v12 + 1;
      free(v11);
      v13 = v19;
    }
    v14 = (_BYTE *)sub_40C190(v13);
    v15 = *(_DWORD *)a4;
    v10[1] = (unsigned __int64)v14;
    v11 = v14;
    sub_40A0E0(v14, v13, a2, a3, v15, v21, a4 + 8, *(char **)(a4 + 40), *(char **)(a4 + 48));
  }
  *v8 = v20;
  return v11;
}

_BYTE *__fastcall sub_40B310(int a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  int *v6; // rax
  __m128i *v7; // rbx
  int *v8; // r13
  __int64 v9; // rsi
  unsigned __int64 *v10; // rbx
  _BYTE *v11; // r12
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rsi
  _BYTE *v14; // rax
  int v15; // r8d
  unsigned __int64 v18; // [rsp+10h] [rbp-48h]
  unsigned __int64 v19; // [rsp+10h] [rbp-48h]
  int v20; // [rsp+18h] [rbp-40h]
  int v21; // [rsp+1Ch] [rbp-3Ch]

  v6 = __errno_location();
  v7 = (__m128i *)ptr;
  v8 = v6;
  v20 = *v6;
  if ( a1 < 0 )
    abort();
  if ( dword_61B2F0 <= a1 )
  {
    if ( a1 == 0x7FFFFFFF )
      sub_40C3E0();
    v9 = 16LL * (a1 + 1);
    if ( ptr == &xmmword_61B2E0 )
    {
      v7 = (__m128i *)sub_40C1F0(0LL, v9);
      ptr = v7;
      *v7 = _mm_load_si128((const __m128i *)&xmmword_61B2E0);
    }
    else
    {
      ptr = (void *)sub_40C1F0(ptr, v9);
      v7 = (__m128i *)ptr;
    }
    memset(&v7[dword_61B2F0], 0, 16LL * (a1 + 1 - dword_61B2F0));
    dword_61B2F0 = a1 + 1;
  }
  v10 = (unsigned __int64 *)&v7[a1];
  v11 = (_BYTE *)v10[1];
  v21 = *(_DWORD *)(a4 + 4) | 1;
  v18 = *v10;
  v12 = sub_40A0E0(v11, *v10, a2, a3, *(_DWORD *)a4, v21, a4 + 8, *(char **)(a4 + 40), *(char **)(a4 + 48));
  if ( v18 <= v12 )
  {
    v13 = v12 + 1;
    *v10 = v12 + 1;
    if ( v11 != (_BYTE *)&unk_61B360 )
    {
      v19 = v12 + 1;
      free(v11);
      v13 = v19;
    }
    v14 = (_BYTE *)sub_40C190(v13);
    v15 = *(_DWORD *)a4;
    v10[1] = (unsigned __int64)v14;
    v11 = v14;
    sub_40A0E0(v14, v13, a2, a3, v15, v21, a4 + 8, *(char **)(a4 + 40), *(char **)(a4 + 48));
  }
  *v8 = v20;
  return v11;
}

__int64 __fastcall sub_40B4B0(__int128 *a1)
{
  __int128 *v1; // rbx
  int *v2; // rax
  int v3; // r12d
  int *v4; // rbp
  __int64 result; // rax

  v1 = a1;
  v2 = __errno_location();
  v3 = *v2;
  v4 = v2;
  if ( !a1 )
    v1 = &xmmword_61B460;
  result = sub_40C390(v1, 0x38uLL);
  *v4 = v3;
  return result;
}

unsigned __int64 __fastcall sub_40B5A0(_BYTE *a1, unsigned __int64 a2, __int64 a3, unsigned __int64 a4, __int128 *a5)
{
  __int128 *v6; // rbx
  int *v7; // rax
  int v8; // r12d
  int *v9; // rbp
  unsigned __int64 result; // rax

  v6 = a5;
  if ( !a5 )
    v6 = &xmmword_61B460;
  v7 = __errno_location();
  v8 = *v7;
  v9 = v7;
  result = sub_40A0E0(
             a1,
             a2,
             a3,
             a4,
             *(_DWORD *)v6,
             *((_DWORD *)v6 + 1),
             (__int64)v6 + 8,
             *((char **)v6 + 5),
             *((char **)v6 + 6));
  *v9 = v8;
  return result;
}

_BYTE *__fastcall sub_40B620(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int128 *a4)
{
  __int128 *v5; // rbx
  int *v6; // r13
  int v7; // ebp
  int v9; // [rsp+Ch] [rbp-5Ch]
  _BYTE *v10; // [rsp+10h] [rbp-58h]
  unsigned __int64 v11; // [rsp+28h] [rbp-40h]

  v5 = a4;
  if ( !a4 )
    v5 = &xmmword_61B460;
  v6 = __errno_location();
  v7 = *((_DWORD *)v5 + 1) | (a3 == 0LL);
  v9 = *v6;
  v11 = sub_40A0E0(0LL, 0LL, a1, a2, *(_DWORD *)v5, v7, (__int64)v5 + 8, *((char **)v5 + 5), *((char **)v5 + 6));
  v10 = (_BYTE *)sub_40C190(v11 + 1);
  sub_40A0E0(v10, v11 + 1, a1, a2, *(_DWORD *)v5, v7, (__int64)v5 + 8, *((char **)v5 + 5), *((char **)v5 + 6));
  *v6 = v9;
  if ( a3 )
    *a3 = v11;
  return v10;
}

void sub_40B720()
{
  __int128 *v0; // r12
  void **v1; // rbx
  void **v2; // rbp
  void *v3; // rdi
  void *v4; // rdi

  v0 = (__int128 *)ptr;
  if ( dword_61B2F0 > 1 )
  {
    v1 = (void **)((char *)ptr + 24);
    v2 = (void **)((char *)ptr + 16 * (unsigned int)(dword_61B2F0 - 2) + 40);
    do
    {
      v3 = *v1;
      v1 += 2;
      free(v3);
    }
    while ( v1 != v2 );
  }
  v4 = (void *)*((_QWORD *)v0 + 1);
  if ( v4 != &unk_61B360 )
  {
    free(v4);
    *(_QWORD *)&xmmword_61B2E0 = 256LL;
    *((_QWORD *)&xmmword_61B2E0 + 1) = &unk_61B360;
  }
  if ( v0 != &xmmword_61B2E0 )
  {
    free(v0);
    ptr = &xmmword_61B2E0;
  }
  dword_61B2F0 = 1;
}

_BYTE *__fastcall sub_40B830(int a1, int a2, __int64 a3)
{
  int v4[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v5; // [rsp+8h] [rbp-40h]
  __int64 v6; // [rsp+10h] [rbp-38h]
  __int64 v7; // [rsp+18h] [rbp-30h]
  __int64 v8; // [rsp+20h] [rbp-28h]
  __int64 v9; // [rsp+28h] [rbp-20h]
  __int64 v10; // [rsp+30h] [rbp-18h]

  if ( a2 == 10 )
    abort();
  v4[0] = a2;
  v4[1] = 0;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  return sub_40B310(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)v4);
}

_BYTE *__fastcall sub_40B830(int a1, int a2, __int64 a3)
{
  int v4[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v5; // [rsp+8h] [rbp-40h]
  __int64 v6; // [rsp+10h] [rbp-38h]
  __int64 v7; // [rsp+18h] [rbp-30h]
  __int64 v8; // [rsp+20h] [rbp-28h]
  __int64 v9; // [rsp+28h] [rbp-20h]
  __int64 v10; // [rsp+30h] [rbp-18h]

  if ( a2 == 10 )
    abort();
  v4[0] = a2;
  v4[1] = 0;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  return sub_40B310(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)v4);
}

_BYTE *__fastcall sub_40B8A0(int a1, int a2, __int64 a3, unsigned __int64 a4)
{
  int v5[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v6; // [rsp+8h] [rbp-40h]
  __int64 v7; // [rsp+10h] [rbp-38h]
  __int64 v8; // [rsp+18h] [rbp-30h]
  __int64 v9; // [rsp+20h] [rbp-28h]
  __int64 v10; // [rsp+28h] [rbp-20h]
  __int64 v11; // [rsp+30h] [rbp-18h]

  if ( a2 == 10 )
    abort();
  v5[0] = a2;
  v5[1] = 0;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  return sub_40B310(a1, a3, a4, (__int64)v5);
}

_BYTE *__fastcall sub_40B8A0(int a1, int a2, __int64 a3, unsigned __int64 a4)
{
  int v5[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v6; // [rsp+8h] [rbp-40h]
  __int64 v7; // [rsp+10h] [rbp-38h]
  __int64 v8; // [rsp+18h] [rbp-30h]
  __int64 v9; // [rsp+20h] [rbp-28h]
  __int64 v10; // [rsp+28h] [rbp-20h]
  __int64 v11; // [rsp+30h] [rbp-18h]

  if ( a2 == 10 )
    abort();
  v5[0] = a2;
  v5[1] = 0;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  return sub_40B310(a1, a3, a4, (__int64)v5);
}

_BYTE *__fastcall sub_40B930(__int64 a1, unsigned __int64 a2, unsigned __int8 a3)
{
  _DWORD *v3; // r8
  __int128 v5[3]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]

  v6 = qword_61B490;
  v5[0] = (__int128)_mm_load_si128((const __m128i *)&xmmword_61B460);
  v5[1] = (__int128)_mm_load_si128((const __m128i *)&xmmword_61B470);
  v3 = (_DWORD *)v5 + (a3 >> 5) + 2;
  v5[2] = (__int128)_mm_load_si128((const __m128i *)&xmmword_61B480);
  *v3 ^= (((*v3 >> (a3 & 0x1F)) & 1) == 0) << (a3 & 0x1F);
  return sub_40B310(0, a1, a2, (__int64)v5);
}

_BYTE *__fastcall sub_40B9B0(__int64 a1)
{
  return sub_40B930(a1, 0xFFFFFFFFFFFFFFFFLL, 0x3Au);
}

_BYTE *__fastcall sub_40B9E0(int a1, int a2, __int64 a3)
{
  int v4[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v5; // [rsp+8h] [rbp-40h]
  __int64 v6; // [rsp+10h] [rbp-38h]
  __int64 v7; // [rsp+18h] [rbp-30h]
  __int64 v8; // [rsp+20h] [rbp-28h]
  __int64 v9; // [rsp+28h] [rbp-20h]
  __int64 v10; // [rsp+30h] [rbp-18h]

  if ( a2 == 10 )
    abort();
  v4[0] = a2;
  v5 = 0x400000000000000LL;
  v4[1] = 0;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  return sub_40B310(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)v4);
}

_BYTE *__fastcall sub_40B9E0(int a1, int a2, __int64 a3)
{
  int v4[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v5; // [rsp+8h] [rbp-40h]
  __int64 v6; // [rsp+10h] [rbp-38h]
  __int64 v7; // [rsp+18h] [rbp-30h]
  __int64 v8; // [rsp+20h] [rbp-28h]
  __int64 v9; // [rsp+28h] [rbp-20h]
  __int64 v10; // [rsp+30h] [rbp-18h]

  if ( a2 == 10 )
    abort();
  v4[0] = a2;
  v5 = 0x400000000000000LL;
  v4[1] = 0;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  return sub_40B310(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)v4);
}

_BYTE *__fastcall sub_40BA50(int a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 a5)
{
  __int128 v6[2]; // [rsp+0h] [rbp-48h] BYREF
  __m128i si128; // [rsp+20h] [rbp-28h]
  __int64 v8; // [rsp+30h] [rbp-18h]

  v6[0] = (__int128)_mm_load_si128((const __m128i *)&xmmword_61B460);
  v6[1] = (__int128)_mm_load_si128((const __m128i *)&xmmword_61B470);
  si128 = _mm_load_si128((const __m128i *)&xmmword_61B480);
  v8 = qword_61B490;
  LODWORD(v6[0]) = 10;
  if ( !a2 || !a3 )
    abort();
  si128.m128i_i64[1] = a2;
  v8 = a3;
  return sub_40B310(a1, a4, a5, (__int64)v6);
}

_BYTE *__fastcall sub_40BB40(int a1, __int64 a2)
{
  return sub_40B310(a1, a2, 0xFFFFFFFFFFFFFFFFLL, (__int64)&unk_61B2A0);
}

_BYTE *__fastcall sub_40BB60(__int64 a1)
{
  return sub_40B310(0, a1, 0xFFFFFFFFFFFFFFFFLL, (__int64)&unk_61B2A0);
}

__int64 __fastcall sub_40BB80(struct timespec *tp)
{
  unsigned int v1; // ebx
  __syscall_slong_t tv_nsec; // rcx
  struct timeval v4; // [rsp+0h] [rbp-28h] BYREF

  v1 = clock_settime(0, tp);
  if ( v1 && *__errno_location() != 1 )
  {
    tv_nsec = tp->tv_nsec;
    v4.tv_sec = tp->tv_sec;
    v4.tv_usec = tv_nsec / 1000;
    return (unsigned int)settimeofday(&v4, 0LL);
  }
  return v1;
}

__int64 __fastcall sub_40BBF0(FILE *stream, const char *a2, const char *a3, const char *a4, __int64 *a5, __int64 a6)
{
  char *v8; // rax
  char *v9; // rax
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // r13
  __int64 v13; // r12
  __int64 v14; // r15
  __int64 v15; // r14
  __int64 v16; // rbx
  char *v17; // rax
  const char *v19; // rsi
  __int64 v20; // r8
  __int64 v21; // r13
  __int64 v22; // r12
  __int64 v23; // r15
  __int64 v24; // r14
  __int64 v25; // rbx
  char *v26; // rax
  __int64 v27; // rbx
  char *v28; // rax
  __int64 v29; // r12
  __int64 v30; // rbx
  char *v31; // rax
  __int64 v32; // r13
  __int64 v33; // r12
  __int64 v34; // rbx
  char *v35; // rax
  __int64 v36; // r14
  __int64 v37; // r13
  __int64 v38; // r12
  __int64 v39; // rbx
  char *v40; // rax
  __int64 v41; // r12
  __int64 v42; // r15
  __int64 v43; // r14
  __int64 v44; // r13
  __int64 v45; // rbx
  char *v46; // rax
  __int64 v47; // r13
  __int64 v48; // r12
  __int64 v49; // r15
  __int64 v50; // r14
  __int64 v51; // r8
  __int64 v52; // rbx
  char *v53; // rax
  __int64 v54; // r8
  __int64 v55; // [rsp-10h] [rbp-68h]
  __int64 v56; // [rsp+0h] [rbp-58h]
  __int64 v57; // [rsp+0h] [rbp-58h]
  __int64 v58; // [rsp+0h] [rbp-58h]
  __int64 v59; // [rsp+0h] [rbp-58h]
  __int64 v60; // [rsp+8h] [rbp-50h]
  __int64 v61; // [rsp+8h] [rbp-50h]
  __int64 v62; // [rsp+8h] [rbp-50h]
  __int64 v63; // [rsp+10h] [rbp-48h]
  __int64 v64; // [rsp+10h] [rbp-48h]
  __int64 v65; // [rsp+18h] [rbp-40h]

  if ( a2 )
    __fprintf_chk(stream, 1LL, "%s (%s) %s\n", a2, a3, a4);
  else
    __fprintf_chk(stream, 1LL, "%s %s\n", a3, a4);
  v8 = dcgettext(0LL, "(C)", 5);
  __fprintf_chk(stream, 1LL, "Copyright %s %d Free Software Foundation, Inc.", v8, 2017LL);
  v9 = dcgettext(
         0LL,
         "\n"
         "License GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\n"
         "This is free software: you are free to change and redistribute it.\n"
         "There is NO WARRANTY, to the extent permitted by law.\n"
         "\n",
         5);
  fputs_unlocked(v9, stream);
  switch ( a6 )
  {
    case 0LL:
      abort();
    case 1LL:
      v27 = *a5;
      v28 = dcgettext(0LL, "Written by %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v28, v27);
    case 2LL:
      v29 = a5[1];
      v30 = *a5;
      v31 = dcgettext(0LL, "Written by %s and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v31, v30, v29);
    case 3LL:
      v32 = a5[2];
      v33 = a5[1];
      v34 = *a5;
      v35 = dcgettext(0LL, "Written by %s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v35, v34, v33, v32);
    case 4LL:
      v36 = a5[3];
      v37 = a5[2];
      v38 = a5[1];
      v39 = *a5;
      v40 = dcgettext(0LL, "Written by %s, %s, %s,\nand %s.\n", 5);
      goto LABEL_13;
    case 5LL:
      v36 = a5[3];
      v37 = a5[2];
      v38 = a5[1];
      v39 = *a5;
      v40 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, and %s.\n", 5);
LABEL_13:
      __fprintf_chk(stream, 1LL, v40, v39, v38, v37, v36);
      return v55;
    case 6LL:
      v41 = a5[5];
      v42 = a5[4];
      v43 = a5[3];
      v58 = a5[1];
      v44 = a5[2];
      v45 = *a5;
      v46 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v46, v45, v58, v44, v43, v42, v41);
    case 7LL:
      v47 = a5[6];
      v48 = a5[5];
      v49 = a5[4];
      v50 = a5[3];
      v51 = a5[1];
      v62 = a5[2];
      v52 = *a5;
      v59 = v51;
      v53 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v53, v52, v59, v62, v50, v49, v48, v47);
    case 8LL:
      v10 = a5[2];
      v11 = a5[1];
      v12 = a5[6];
      v13 = a5[5];
      v14 = a5[4];
      v63 = a5[7];
      v15 = a5[3];
      v16 = *a5;
      v56 = v10;
      v60 = v11;
      v17 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v17, v16, v60, v56, v15, v14, v13, v12, v63);
    case 9LL:
      v19 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n";
      v20 = a5[1];
      v21 = a5[6];
      v22 = a5[5];
      v65 = a5[8];
      v23 = a5[4];
      v24 = a5[3];
      v64 = a5[7];
      v57 = a5[2];
      v25 = *a5;
      v61 = v20;
      goto LABEL_8;
    default:
      v19 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n";
      v54 = a5[1];
      v21 = a5[6];
      v22 = a5[5];
      v65 = a5[8];
      v23 = a5[4];
      v24 = a5[3];
      v64 = a5[7];
      v57 = a5[2];
      v25 = *a5;
      v61 = v54;
LABEL_8:
      v26 = dcgettext(0LL, v19, 5);
      return __fprintf_chk(stream, 1LL, v26, v25, v61, v57, v24, v23, v22, v21, v64, v65);
  }
}

__int64 __fastcall sub_40BBF0(FILE *stream, const char *a2, const char *a3, const char *a4, __int64 *a5, __int64 a6)
{
  char *v8; // rax
  char *v9; // rax
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // r13
  __int64 v13; // r12
  __int64 v14; // r15
  __int64 v15; // r14
  __int64 v16; // rbx
  char *v17; // rax
  const char *v19; // rsi
  __int64 v20; // r8
  __int64 v21; // r13
  __int64 v22; // r12
  __int64 v23; // r15
  __int64 v24; // r14
  __int64 v25; // rbx
  char *v26; // rax
  __int64 v27; // rbx
  char *v28; // rax
  __int64 v29; // r12
  __int64 v30; // rbx
  char *v31; // rax
  __int64 v32; // r13
  __int64 v33; // r12
  __int64 v34; // rbx
  char *v35; // rax
  __int64 v36; // r14
  __int64 v37; // r13
  __int64 v38; // r12
  __int64 v39; // rbx
  char *v40; // rax
  __int64 v41; // r12
  __int64 v42; // r15
  __int64 v43; // r14
  __int64 v44; // r13
  __int64 v45; // rbx
  char *v46; // rax
  __int64 v47; // r13
  __int64 v48; // r12
  __int64 v49; // r15
  __int64 v50; // r14
  __int64 v51; // r8
  __int64 v52; // rbx
  char *v53; // rax
  __int64 v54; // r8
  __int64 v55; // [rsp-10h] [rbp-68h]
  __int64 v56; // [rsp+0h] [rbp-58h]
  __int64 v57; // [rsp+0h] [rbp-58h]
  __int64 v58; // [rsp+0h] [rbp-58h]
  __int64 v59; // [rsp+0h] [rbp-58h]
  __int64 v60; // [rsp+8h] [rbp-50h]
  __int64 v61; // [rsp+8h] [rbp-50h]
  __int64 v62; // [rsp+8h] [rbp-50h]
  __int64 v63; // [rsp+10h] [rbp-48h]
  __int64 v64; // [rsp+10h] [rbp-48h]
  __int64 v65; // [rsp+18h] [rbp-40h]

  if ( a2 )
    __fprintf_chk(stream, 1LL, "%s (%s) %s\n", a2, a3, a4);
  else
    __fprintf_chk(stream, 1LL, "%s %s\n", a3, a4);
  v8 = dcgettext(0LL, "(C)", 5);
  __fprintf_chk(stream, 1LL, "Copyright %s %d Free Software Foundation, Inc.", v8, 2017LL);
  v9 = dcgettext(
         0LL,
         "\n"
         "License GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\n"
         "This is free software: you are free to change and redistribute it.\n"
         "There is NO WARRANTY, to the extent permitted by law.\n"
         "\n",
         5);
  fputs_unlocked(v9, stream);
  switch ( a6 )
  {
    case 0LL:
      abort();
    case 1LL:
      v27 = *a5;
      v28 = dcgettext(0LL, "Written by %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v28, v27);
    case 2LL:
      v29 = a5[1];
      v30 = *a5;
      v31 = dcgettext(0LL, "Written by %s and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v31, v30, v29);
    case 3LL:
      v32 = a5[2];
      v33 = a5[1];
      v34 = *a5;
      v35 = dcgettext(0LL, "Written by %s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v35, v34, v33, v32);
    case 4LL:
      v36 = a5[3];
      v37 = a5[2];
      v38 = a5[1];
      v39 = *a5;
      v40 = dcgettext(0LL, "Written by %s, %s, %s,\nand %s.\n", 5);
      goto LABEL_13;
    case 5LL:
      v36 = a5[3];
      v37 = a5[2];
      v38 = a5[1];
      v39 = *a5;
      v40 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, and %s.\n", 5);
LABEL_13:
      __fprintf_chk(stream, 1LL, v40, v39, v38, v37, v36);
      return v55;
    case 6LL:
      v41 = a5[5];
      v42 = a5[4];
      v43 = a5[3];
      v58 = a5[1];
      v44 = a5[2];
      v45 = *a5;
      v46 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v46, v45, v58, v44, v43, v42, v41);
    case 7LL:
      v47 = a5[6];
      v48 = a5[5];
      v49 = a5[4];
      v50 = a5[3];
      v51 = a5[1];
      v62 = a5[2];
      v52 = *a5;
      v59 = v51;
      v53 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v53, v52, v59, v62, v50, v49, v48, v47);
    case 8LL:
      v10 = a5[2];
      v11 = a5[1];
      v12 = a5[6];
      v13 = a5[5];
      v14 = a5[4];
      v63 = a5[7];
      v15 = a5[3];
      v16 = *a5;
      v56 = v10;
      v60 = v11;
      v17 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v17, v16, v60, v56, v15, v14, v13, v12, v63);
    case 9LL:
      v19 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n";
      v20 = a5[1];
      v21 = a5[6];
      v22 = a5[5];
      v65 = a5[8];
      v23 = a5[4];
      v24 = a5[3];
      v64 = a5[7];
      v57 = a5[2];
      v25 = *a5;
      v61 = v20;
      goto LABEL_8;
    default:
      v19 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n";
      v54 = a5[1];
      v21 = a5[6];
      v22 = a5[5];
      v65 = a5[8];
      v23 = a5[4];
      v24 = a5[3];
      v64 = a5[7];
      v57 = a5[2];
      v25 = *a5;
      v61 = v54;
LABEL_8:
      v26 = dcgettext(0LL, v19, 5);
      return __fprintf_chk(stream, 1LL, v26, v25, v61, v57, v24, v23, v22, v21, v64, v65);
  }
}

__int64 __fastcall sub_40BFF0(FILE *a1, const char *a2, const char *a3, const char *a4, int *a5)
{
  __int64 i; // r9
  __int64 *v6; // r10
  __int64 v7; // rax
  unsigned int v8; // eax
  __int64 *v9; // r10
  __int64 v10; // rax
  __int64 v12[11]; // [rsp+0h] [rbp-58h] BYREF

  for ( i = 0LL; i != 10; ++i )
  {
    v8 = *a5;
    if ( (unsigned int)*a5 <= 0x2F )
    {
      v6 = (__int64 *)(*((_QWORD *)a5 + 2) + v8);
      *a5 = v8 + 8;
      v7 = *v6;
      v12[i] = *v6;
      if ( !v7 )
        return sub_40BBF0(a1, a2, a3, a4, v12, i);
      continue;
    }
    v9 = (__int64 *)*((_QWORD *)a5 + 1);
    *((_QWORD *)a5 + 1) = v9 + 1;
    v10 = *v9;
    v12[i] = *v9;
    if ( !v10 )
      break;
  }
  return sub_40BBF0(a1, a2, a3, a4, v12, i);
}

__int64 __fastcall sub_40C050(
        FILE *a1,
        const char *a2,
        const char *a3,
        const char *a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  char *v7; // r10
  unsigned int v8; // r8d
  __int64 i; // r9
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 *v12; // rax
  __int64 v13; // rax
  __int64 v15[17]; // [rsp+20h] [rbp-88h] BYREF

  v15[14] = a5;
  v7 = &a7;
  v8 = 32;
  v15[15] = a6;
  for ( i = 0LL; i != 10; ++i )
  {
    if ( v8 <= 0x2F )
    {
      v10 = v8;
      v8 += 8;
      v11 = *(__int64 *)((char *)&v15[10] + v10);
      v15[i] = v11;
      if ( !v11 )
        return sub_40BBF0(a1, a2, a3, a4, v15, i);
      continue;
    }
    v12 = (__int64 *)v7;
    v7 += 8;
    v13 = *v12;
    v15[i] = v13;
    if ( !v13 )
      break;
  }
  return sub_40BBF0(a1, a2, a3, a4, v15, i);
}

int sub_40C110()
{
  char *v0; // rax
  __int64 v1; // rcx
  char *v2; // rax
  FILE *v3; // rbx
  char *v4; // rax

  v0 = dcgettext(0LL, "\nReport bugs to: %s\n", 5);
  __printf_chk(1LL, v0, "bug-coreutils@gnu.org", v1);
  v2 = dcgettext(0LL, "%s home page: <%s>\n", 5);
  __printf_chk(1LL, v2, &unk_412B52, "https://www.gnu.org/software/coreutils/");
  v3 = stdout;
  v4 = dcgettext(0LL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5);
  return fputs_unlocked(v4, v3);
}

void *__fastcall sub_40C190(size_t a1)
{
  void *result; // rax

  result = malloc(a1);
  if ( !result )
  {
    if ( a1 )
      sub_40C3E0();
  }
  return result;
}

// attributes: thunk
void *__fastcall sub_40C1E0(size_t a1)
{
  return sub_40C190(a1);
}

void *__fastcall sub_40C1F0(void *a1, size_t a2)
{
  void *result; // rax

  if ( !a2 && a1 )
  {
    free(a1);
    return 0LL;
  }
  else
  {
    result = realloc(a1, a2);
    if ( !result )
    {
      if ( a2 )
        sub_40C3E0();
    }
  }
  return result;
}

void *__fastcall sub_40C340(size_t n)
{
  void *v1; // rax

  v1 = sub_40C190(n);
  return memset(v1, 0, n);
}

__int64 __fastcall sub_40C360(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int128 v2; // rax

  v2 = a2 * (unsigned __int128)a1;
  BYTE8(v2) = *((_QWORD *)&v2 + 1) != 0LL;
  if ( (v2 & 0x8000000000000000LL) != 0LL
    || (*((_QWORD *)&v2 + 1) = BYTE8(v2), !is_mul_ok(a2, a1))
    || (*(_QWORD *)&v2 = calloc(a1, a2), !(_QWORD)v2) )
  {
    sub_40C3E0(a1, a2, *((_QWORD *)&v2 + 1));
  }
  return v2;
}

void *__fastcall sub_40C390(void *src, size_t n)
{
  void *v2; // rax

  v2 = sub_40C190(n);
  return memcpy(v2, src, n);
}

void *__fastcall sub_40C3C0(char *src)
{
  size_t v1; // rax

  v1 = strlen(src);
  return sub_40C390(src, v1 + 1);
}

noreturn void  sub_40C3E0()
{
  char *v0; // rax

  v0 = dcgettext(0LL, "memory exhausted", 5);
  error(status, 0, "%s", v0);
  abort();
}

int __fastcall sub_40C420(FILE *stream)
{
  int *v1; // rax
  int v2; // r12d
  int *v3; // rbp
  int result; // eax
  int v5; // eax

  if ( fileno(stream) < 0 )
    return fclose(stream);
  if ( __freading(stream) )
  {
    v5 = fileno(stream);
    if ( lseek(v5, 0LL, 1) == -1 )
      return fclose(stream);
  }
  if ( !(unsigned int)sub_40C4A0(stream) )
    return fclose(stream);
  v1 = __errno_location();
  v2 = *v1;
  v3 = v1;
  result = fclose(stream);
  if ( v2 )
  {
    *v3 = v2;
    return -1;
  }
  return result;
}

int __fastcall sub_40C4A0(FILE *stream)
{
  if ( !stream || !__freading(stream) || (stream->_flags & 0x100) == 0 )
    return fflush(stream);
  sub_40C4E0(stream, 0LL, 1LL);
  return fflush(stream);
}

int __fastcall sub_40C4E0(FILE *a1, __off_t a2, int a3)
{
  __off_t v3; // rax
  int v5; // eax

  if ( a1->_IO_read_end == a1->_IO_read_ptr && a1->_IO_write_ptr == a1->_IO_write_base && !a1->_IO_save_base )
  {
    v5 = fileno(a1);
    v3 = lseek(v5, a2, a3);
    if ( v3 != -1 )
    {
      a1->_flags &= ~0x10u;
      a1->_offset = v3;
      LODWORD(v3) = 0;
    }
  }
  else
  {
    LODWORD(v3) = fseeko(a1, a2, a3);
  }
  return v3;
}

__int64 __fastcall sub_40C540(__int64 a1, int *a2)
{
  __int64 v2; // r11
  int v3; // r12d
  int v4; // ebp
  __int64 v5; // rbx
  int v6; // r9d
  int v7; // r10d
  int v8; // r8d
  int v9; // r14d
  int v10; // edx
  __int64 *v11; // rax
  __int64 *v12; // r13
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 result; // rax
  __int64 *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx

  v2 = a1 + 8;
  v3 = a2[11];
  v4 = *a2;
  v5 = a2[12];
  v6 = v3;
  v7 = *a2;
  v8 = a2[12];
LABEL_2:
  if ( v7 > v8 )
  {
    while ( v6 < v8 )
    {
      v9 = v7 - v8;
      v10 = v8 - v6;
      if ( v7 - v8 <= v8 - v6 )
      {
        v16 = (__int64 *)(a1 + 8LL * v6);
        v17 = v5 - v6;
        do
        {
          v18 = *v16;
          *v16 = v16[v17];
          v16[v17] = v18;
          ++v16;
        }
        while ( v16 != (__int64 *)(v2 + 8 * (v6 + (unsigned __int64)(unsigned int)(v9 - 1))) );
        v6 += v9;
        goto LABEL_2;
      }
      v7 -= v10;
      v11 = (__int64 *)(a1 + 8LL * v6);
      v12 = (__int64 *)(v2 + 8 * (v6 + (unsigned __int64)(unsigned int)(v10 - 1)));
      v13 = v7 - (__int64)v6;
      do
      {
        v14 = *v11;
        *v11 = v11[v13];
        v11[v13] = v14;
        ++v11;
      }
      while ( v12 != v11 );
      if ( v7 <= v8 )
        break;
    }
  }
  a2[12] = v4;
  result = (unsigned int)(v4 - v8);
  a2[11] = result + v3;
  return result;
}

__int64 __fastcall sub_40C620(
        int a1,
        __int64 *a2,
        const char *a3,
        char **a4,
        _DWORD *a5,
        int a6,
        int *a7,
        int a8,
        const char *a9)
{
  const char *v9; // r14
  char *v10; // rbp
  size_t v11; // r13
  char **v12; // rbx
  __int64 v13; // r12
  const char *v14; // r15
  const char *v15; // rdi
  __int64 v16; // r15
  char **v17; // rbp
  char *v18; // rdx
  __int64 result; // rax
  int v20; // edx
  int v21; // eax
  int v22; // ecx
  char *v23; // rdx
  __int64 v24; // rbx
  char *v25; // rax
  __int64 v26; // rbx
  char *v27; // rax
  const char *v28; // r12
  __int64 v29; // rbp
  char *v30; // rax
  __int64 v31; // rbx
  __int64 v32; // rbp
  char *v33; // rax
  FILE *v34; // rdi
  const char **v35; // rbx
  _BYTE *v36; // rbp
  __int64 v37; // r12
  const char *v38; // r12
  __int64 v39; // rbp
  char *v40; // rax
  char *s1; // [rsp+10h] [rbp-78h]
  char *s1a; // [rsp+10h] [rbp-78h]
  _BYTE *ptr; // [rsp+18h] [rbp-70h]
  int v48; // [rsp+38h] [rbp-50h]
  char v49; // [rsp+3Fh] [rbp-49h]
  int v51; // [rsp+44h] [rbp-44h]
  int v52; // [rsp+48h] [rbp-40h]

  v9 = (const char *)*((_QWORD *)a7 + 4);
  v10 = (char *)v9;
  v49 = *v9;
  if ( *v9 == 61 || !*v9 )
  {
    v11 = 0LL;
  }
  else
  {
    do
      ++v10;
    while ( *v10 && *v10 != 61 );
    v11 = v10 - v9;
  }
  v12 = a4;
  v13 = 0LL;
  s1 = *a4;
  v14 = *a4;
  if ( !*a4 )
  {
LABEL_24:
    if ( !a6 || *(_BYTE *)(a2[*a7] + 1) == 45 || (v18 = strchr(a3, v49), result = 0xFFFFFFFFLL, !v18) )
    {
      if ( a8 )
      {
        v24 = *a2;
        v25 = dcgettext(0LL, "%s: unrecognized option '%s%s'\n", 5);
        __fprintf_chk(stderr, 1LL, v25, v24, a9, v9);
      }
      *((_QWORD *)a7 + 4) = 0LL;
      ++*a7;
      a7[2] = 0;
      return 63LL;
    }
    return result;
  }
  while ( 1 )
  {
    if ( !strncmp(v14, v9, v11) && strlen(v14) == v11 )
      goto LABEL_31;
    v12 += 4;
    v14 = *v12;
    if ( !*v12 )
      break;
    v13 = (int)v13 + 1;
  }
  v12 = 0LL;
  v51 = -1;
  v15 = s1;
  v16 = 0LL;
  v48 = 0;
  v52 = 0;
  ptr = 0LL;
  s1a = v10;
  v17 = a4;
  do
  {
    if ( strncmp(v15, v9, v11) )
      goto LABEL_20;
    if ( v12 )
    {
      if ( (a6
         || *((_DWORD *)v12 + 2) != *((_DWORD *)v17 + 2)
         || v12[2] != v17[2]
         || *((_DWORD *)v12 + 6) != *((_DWORD *)v17 + 6))
        && !v48 )
      {
        if ( a8 )
        {
          if ( ptr )
            goto LABEL_19;
          ptr = calloc((int)v13 + 1, 1uLL);
          if ( ptr )
          {
            v52 = 1;
            ptr[v51] = 1;
LABEL_19:
            ptr[v16] = 1;
            goto LABEL_20;
          }
          v48 = 1;
        }
        else
        {
          v48 = 1;
          if ( ptr )
            goto LABEL_19;
        }
      }
    }
    else
    {
      v51 = v16;
      v12 = v17;
    }
LABEL_20:
    v17 += 4;
    v15 = *v17;
    ++v16;
  }
  while ( *v17 );
  v10 = s1a;
  if ( ptr || v48 )
  {
    if ( a8 )
    {
      if ( v48 )
      {
        v26 = *a2;
        v27 = dcgettext(0LL, "%s: option '%s%s' is ambiguous\n", 5);
        __fprintf_chk(stderr, 1LL, v27, v26, a9, v9);
        v9 = (const char *)*((_QWORD *)a7 + 4);
      }
      else
      {
        flockfile(stderr);
        v31 = *((_QWORD *)a7 + 4);
        v32 = *a2;
        v33 = dcgettext(0LL, "%s: option '%s%s' is ambiguous; possibilities:", 5);
        __fprintf_chk(stderr, 1LL, v33, v32, a9, v31);
        v34 = stderr;
        v35 = (const char **)a4;
        v36 = ptr;
        v37 = (__int64)&ptr[v13 + 1];
        do
        {
          if ( *v36 )
          {
            __fprintf_chk(v34, 1LL, " '%s%s'", a9, *v35);
            v34 = stderr;
          }
          ++v36;
          v35 += 4;
        }
        while ( (_BYTE *)v37 != v36 );
        fputc(10, v34);
        funlockfile(stderr);
        v9 = (const char *)*((_QWORD *)a7 + 4);
      }
    }
    if ( v52 )
      free(ptr);
    *((_QWORD *)a7 + 4) = &v9[strlen(v9)];
    ++*a7;
    a7[2] = 0;
    return 63LL;
  }
  else
  {
    if ( !v12 )
      goto LABEL_24;
    LODWORD(v13) = v51;
LABEL_31:
    v20 = *a7;
    *((_QWORD *)a7 + 4) = 0LL;
    v21 = v20 + 1;
    *a7 = v20 + 1;
    v22 = *((_DWORD *)v12 + 2);
    if ( *v10 )
    {
      if ( v22 )
      {
        *((_QWORD *)a7 + 2) = v10 + 1;
        goto LABEL_33;
      }
      if ( a8 )
      {
        v28 = *v12;
        v29 = *a2;
        v30 = dcgettext(0LL, "%s: option '%s%s' doesn't allow an argument\n", 5);
        __fprintf_chk(stderr, 1LL, v30, v29, a9, v28);
      }
      a7[2] = *((_DWORD *)v12 + 6);
      return 63LL;
    }
    else
    {
      if ( v22 != 1 )
        goto LABEL_33;
      if ( v21 >= a1 )
      {
        if ( a8 )
        {
          v38 = *v12;
          v39 = *a2;
          v40 = dcgettext(0LL, "%s: option '%s%s' requires an argument\n", 5);
          __fprintf_chk(stderr, 1LL, v40, v39, a9, v38);
        }
        a7[2] = *((_DWORD *)v12 + 6);
        return 5 * (unsigned int)(*a3 != 58) + 58;
      }
      else
      {
        *a7 = v20 + 2;
        *((_QWORD *)a7 + 2) = a2[v21];
LABEL_33:
        if ( a5 )
          *a5 = v13;
        v23 = v12[2];
        result = *((unsigned int *)v12 + 6);
        if ( v23 )
        {
          *(_DWORD *)v23 = result;
          return 0LL;
        }
      }
    }
  }
  return result;
}

__int64 __fastcall sub_40CC40(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5, int a6, int *a7, int a8)
{
  int v8; // r13d
  int v9; // eax
  int v10; // ebp
  const char *v12; // r15
  _BYTE *v13; // rdx
  char v14; // al
  char v15; // al
  int v16; // eax
  _BYTE *v17; // r14
  int v18; // edx
  int v19; // ecx
  int v20; // eax
  unsigned int v21; // r14d
  char *v22; // rax
  __int64 v23; // r8
  char v24; // cl
  int v26; // edx
  __int64 v27; // rax
  _BYTE *v28; // rcx
  int v29; // esi
  char v30; // cl
  char *v31; // rax
  __int64 v32; // rax
  char *v34; // rax
  char v35; // dl
  __int64 v36; // rax
  int v37; // edx
  __int64 v38; // rax
  __int64 v39; // rbp
  char *v40; // rax
  __int64 v41; // rbp
  char *v42; // rax
  __int64 v43; // rbp
  char *v44; // rax
  char v47; // [rsp+1Ch] [rbp-4Ch]
  int v48; // [rsp+1Ch] [rbp-4Ch]
  int v49; // [rsp+1Ch] [rbp-4Ch]
  int v50; // [rsp+1Ch] [rbp-4Ch]
  _BYTE *v51; // [rsp+20h] [rbp-48h]
  _BYTE *v52; // [rsp+28h] [rbp-40h]

  v8 = a7[1];
  if ( a1 <= 0 )
    return (unsigned int)-1;
  v9 = *a7;
  v10 = a1;
  v12 = a3;
  *((_QWORD *)a7 + 2) = 0LL;
  if ( !v9 )
  {
    *a7 = 1;
    v9 = 1;
LABEL_4:
    a7[12] = v9;
    a7[11] = v9;
    *((_QWORD *)a7 + 4) = 0LL;
    if ( *a3 == 45 )
    {
      a7[10] = 2;
      v12 = a3 + 1;
      v13 = 0LL;
    }
    else if ( *a3 == 43 )
    {
      a7[10] = 0;
      v12 = a3 + 1;
      v13 = 0LL;
    }
    else
    {
      v13 = 0LL;
      if ( !a8 )
      {
        v50 = a6;
        v34 = getenv("POSIXLY_CORRECT");
        a6 = v50;
        if ( !v34 )
        {
          a7[10] = 1;
          v13 = (_BYTE *)*((_QWORD *)a7 + 4);
          goto LABEL_24;
        }
        v13 = (_BYTE *)*((_QWORD *)a7 + 4);
      }
      a7[10] = 0;
    }
LABEL_24:
    a7[6] = 1;
    v14 = *v12;
    goto LABEL_25;
  }
  if ( !a7[6] )
    goto LABEL_4;
  v14 = *a3;
  v13 = (_BYTE *)*((_QWORD *)a7 + 4);
  if ( ((v14 - 43) & 0xFD) == 0 )
  {
    v15 = *++v12;
    if ( v15 == 58 )
      v8 = 0;
    if ( !v13 )
      goto LABEL_12;
    goto LABEL_28;
  }
LABEL_25:
  if ( v14 == 58 )
    v8 = 0;
  if ( !v13 )
    goto LABEL_12;
LABEL_28:
  if ( !*v13 )
  {
LABEL_12:
    v16 = *a7;
    if ( a7[12] > *a7 )
      a7[12] = v16;
    if ( v16 < a7[11] )
      a7[11] = v16;
    if ( a7[10] == 1 )
    {
      v26 = a7[12];
      if ( a7[11] == v26 )
      {
        if ( v16 != v26 )
        {
          a7[11] = v16;
          v26 = v16;
        }
      }
      else if ( v16 != v26 )
      {
        v48 = a6;
        sub_40C540((__int64)a2, a7);
        v26 = *a7;
        a6 = v48;
      }
      if ( a1 <= v26 )
      {
LABEL_79:
        v16 = v26;
      }
      else
      {
        v27 = v26;
        while ( 1 )
        {
          v28 = (_BYTE *)a2[v27];
          v29 = v27;
          v26 = v27;
          if ( *v28 == 45 )
          {
            if ( v28[1] )
              break;
          }
          v26 = ++v27;
          *a7 = v29 + 1;
          if ( a1 <= (int)v27 )
            goto LABEL_79;
        }
        v16 = *a7;
      }
      a7[12] = v26;
    }
    if ( a1 == v16 )
    {
      v10 = a7[12];
      v18 = a7[11];
LABEL_41:
      if ( v18 != v10 )
        *a7 = v18;
      return (unsigned int)-1;
    }
    v17 = (_BYTE *)a2[v16];
    if ( !memcmp(v17, "--", 3uLL) )
    {
      v18 = a7[11];
      v19 = a7[12];
      v20 = v16 + 1;
      *a7 = v20;
      if ( v18 == v19 )
      {
        a7[11] = v20;
        v18 = v20;
      }
      else if ( v20 != v19 )
      {
        sub_40C540((__int64)a2, a7);
        v18 = a7[11];
      }
      a7[12] = v10;
      *a7 = v10;
      goto LABEL_41;
    }
    if ( *v17 == 45 )
    {
      v30 = v17[1];
      if ( v30 )
      {
        if ( a4 )
        {
          if ( v30 == 45 )
          {
            *((_QWORD *)a7 + 4) = v17 + 2;
            return (unsigned int)sub_40C620(v10, a2, v12, a4, a5, a6, a7, v8, "--");
          }
          if ( a6 )
          {
            if ( v17[2] || (v49 = a6, v31 = strchr(v12, v30), a6 = v49, !v31) )
            {
              *((_QWORD *)a7 + 4) = v17 + 1;
              v21 = sub_40C620(v10, a2, v12, a4, a5, a6, a7, v8, "-");
              if ( v21 != -1 )
                return v21;
              v17 = (_BYTE *)a2[*a7];
            }
          }
        }
        v13 = v17 + 1;
        goto LABEL_29;
      }
    }
    if ( a7[10] )
    {
      *((_QWORD *)a7 + 2) = v17;
      v21 = 1;
      *a7 = v16 + 1;
      return v21;
    }
    return (unsigned int)-1;
  }
LABEL_29:
  v51 = v13;
  *((_QWORD *)a7 + 4) = v13 + 1;
  v21 = (char)*v13;
  v52 = v13 + 1;
  v47 = *v13;
  v22 = strchr(v12, v21);
  v23 = (__int64)v52;
  if ( !v51[1] )
    ++*a7;
  if ( (unsigned __int8)(v47 - 58) > 1u && v22 )
  {
    v24 = v22[1];
    if ( *v22 == 87 && a4 && v24 == 59 )
    {
      if ( v51[1] )
      {
LABEL_68:
        *((_QWORD *)a7 + 4) = v23;
        *((_QWORD *)a7 + 2) = 0LL;
        return (unsigned int)sub_40C620(v10, a2, v12, a4, a5, 0, a7, v8, "-W ");
      }
      v32 = *a7;
      if ( (_DWORD)v32 != v10 )
      {
        v23 = a2[v32];
        goto LABEL_68;
      }
      if ( v8 )
      {
        v43 = *a2;
        v44 = dcgettext(0LL, "%s: option requires an argument -- '%c'\n", 5);
        __fprintf_chk(stderr, 1LL, v44, v43, v21);
      }
      a7[2] = v21;
      return 5 * (unsigned int)(*v12 != 58) + 58;
    }
    else if ( v24 == 58 )
    {
      v35 = v51[1];
      if ( v22[2] == 58 )
      {
        if ( v35 )
        {
          *((_QWORD *)a7 + 2) = v52;
          ++*a7;
        }
        else
        {
          *((_QWORD *)a7 + 2) = 0LL;
        }
      }
      else
      {
        v36 = *a7;
        if ( v35 )
        {
          *((_QWORD *)a7 + 2) = v52;
          *a7 = v36 + 1;
        }
        else if ( v10 == (_DWORD)v36 )
        {
          if ( v8 )
          {
            v41 = *a2;
            v42 = dcgettext(0LL, "%s: option requires an argument -- '%c'\n", 5);
            __fprintf_chk(stderr, 1LL, v42, v41, v21);
          }
          a7[2] = v21;
          v21 = 5 * (*v12 != 58) + 58;
        }
        else
        {
          v37 = v36 + 1;
          v38 = a2[v36];
          *a7 = v37;
          *((_QWORD *)a7 + 2) = v38;
        }
      }
      *((_QWORD *)a7 + 4) = 0LL;
    }
  }
  else
  {
    if ( v8 )
    {
      v39 = *a2;
      v40 = dcgettext(0LL, "%s: invalid option -- '%c'\n", 5);
      __fprintf_chk(stderr, 1LL, v40, v39, v21);
    }
    a7[2] = v21;
    return 63;
  }
  return v21;
}

__int64 __fastcall sub_40D210(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5, int a6, int a7)
{
  __int64 result; // rax

  dword_61B4A0 = dword_61B2FC;
  dword_61B4A4 = dword_61B2F8;
  result = sub_40CC40(a1, a2, a3, a4, a5, a6, &dword_61B4A0, a7);
  dword_61B2FC = dword_61B4A0;
  qword_61B4F0 = qword_61B4B0;
  dword_61B2F4 = dword_61B4A8;
  return result;
}

__int64 __fastcall sub_40D270(int a1, __int64 *a2, const char *a3)
{
  return sub_40D210(a1, a2, a3, 0LL, 0LL, 0, 1);
}

__int64 __fastcall sub_40D290(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5)
{
  return sub_40D210(a1, a2, a3, a4, a5, 0, 0);
}

__int64 __fastcall sub_40D2B0(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5, int *a6)
{
  return sub_40CC40(a1, a2, a3, a4, a5, 0, a6, 0);
}

__int64 __fastcall sub_40D2D0(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5)
{
  return sub_40D210(a1, a2, a3, a4, a5, 1, 0);
}

__int64 __fastcall sub_40D2F0(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5, int *a6)
{
  return sub_40CC40(a1, a2, a3, a4, a5, 1, a6, 0);
}

size_t __fastcall sub_40D310(wchar_t *pwc, char *s, size_t a3, mbstate_t *a4)
{
  size_t v4; // rbx
  wchar_t *v5; // r12
  const char *v6; // rbp
  char v8; // [rsp+Ch] [rbp-1Ch] BYREF

  if ( !s )
  {
    a3 = 1LL;
    v6 = "%s: invalid option -- '%c'\n" + 27;
LABEL_7:
    v5 = (wchar_t *)&v8;
    goto LABEL_4;
  }
  v4 = -2LL;
  if ( !a3 )
    return v4;
  v5 = pwc;
  v6 = s;
  if ( !pwc )
    goto LABEL_7;
LABEL_4:
  v4 = mbrtowc(v5, v6, a3, a4);
  if ( v4 > 0xFFFFFFFFFFFFFFFDLL && !(unsigned __int8)sub_40E130(0LL) )
  {
    v4 = 1LL;
    *v5 = *(unsigned __int8 *)v6;
  }
  return v4;
}

__int64 __fastcall sub_40D390(__int64 a1, __int64 a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  int v10; // r10d
  int v11; // r12d

  v10 = (a1 >> 2) + 475 - ((a1 & 3) == 0);
  v11 = (__PAIR64__((a6 >> 2) + 475, a6 & 3) - 1) >> 32;
  return a5
       + 60
       * (a4
        + 60
        * (a3
         + 24
         * ((int)(v10
                - v11
                - (v10 / 25
                 - ((unsigned int)(v10 % 25) >> 31)
                 - (v11 / 25
                  - ((unsigned int)(v11 % 25) >> 31)))
                + ((int)(v10 / 25 - ((unsigned int)(v10 % 25) >> 31)) >> 2)
                - ((int)(v11 / 25 - ((unsigned int)(v11 % 25) >> 31)) >> 2))
          + 365 * (a1 - a6)
          + a2
          - a7)
         - a8)
        - a9)
       - a10;
}

unsigned __int64 __fastcall sub_40D4B0(__int64 a1, __int64 a2, int a3, int a4, int a5, __int64 a6, int *a7)
{
  __int64 v8; // rax
  bool v9; // of
  unsigned __int64 result; // rax

  if ( !a7
    || (v8 = sub_40D390(a1, a2, a3, a4, a5, a7[5], a7[7], a7[2], a7[1], *a7),
        v9 = __OFADD__(a6, v8),
        result = a6 + v8,
        v9) )
  {
    if ( a6 < 0 )
    {
      if ( a6 >= (__int64)0x8000000000000002LL )
        return 0x8000000000000000LL;
      else
        return a6 + 1;
    }
    else
    {
      result = 0x7FFFFFFFFFFFFFFFLL;
      if ( a6 > 0x7FFFFFFFFFFFFFFDLL )
        return a6 - 1;
    }
  }
  return result;
}

__int64 __fastcall sub_40D550(__int64 (__fastcall *a1)(__int64 *, __int64), __int64 *a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // r14
  __int64 v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9[6]; // [rsp+8h] [rbp-30h] BYREF

  v9[0] = *a2;
  result = a1(v9, a3);
  if ( !result )
  {
    v5 = *a2;
    v6 = 0LL;
    if ( *a2 )
    {
      while ( 1 )
      {
        v7 = (v6 >> 1) + (v5 >> 1);
        v8 = v7 + (((unsigned __int8)v5 | (unsigned __int8)v6) & 1);
        if ( v6 != v8 && v5 != v8 )
          break;
        v9[0] = v7 + (((unsigned __int8)v5 | (unsigned __int8)v6) & 1);
        result = a1(v9, a3);
        if ( !result )
        {
          v5 = v8;
          v8 = v6;
        }
        v6 = v8;
      }
      if ( !result && v6 )
      {
        v9[0] = v6;
        return a1(v9, a3);
      }
    }
  }
  return result;
}

unsigned __int64 __fastcall sub_40D610(int *a1, __int64 (__fastcall *a2)(__int64 *, __int64), _QWORD *a3)
{
  __int64 v4; // rsi
  int v5; // eax
  int v6; // edi
  _BOOL4 v7; // edx
  __int64 v8; // rbx
  int v9; // r12d
  int v10; // ebp
  __int64 v11; // rsi
  int v12; // eax
  __int64 v13; // r13
  _BOOL4 v14; // r12d
  __int64 v15; // r14
  int *v16; // rax
  __int64 v17; // r15
  unsigned __int64 result; // rax
  bool v19; // dl
  __m128i *v20; // r14
  __int32 v21; // esi
  __int64 v22; // rdx
  bool v23; // of
  __int64 v24; // rax
  __m128i v25; // xmm1
  __m128i v26; // xmm2
  __int64 v27; // rdx
  int i; // r13d
  int v29; // r12d
  int v30; // r15d
  int v31; // [rsp+Ch] [rbp-10Ch]
  int v33; // [rsp+18h] [rbp-100h]
  int v34; // [rsp+1Ch] [rbp-FCh]
  int v35; // [rsp+28h] [rbp-F0h]
  __int64 v37; // [rsp+38h] [rbp-E0h]
  int v38; // [rsp+40h] [rbp-D8h]
  int v39; // [rsp+44h] [rbp-D4h]
  int *v40; // [rsp+48h] [rbp-D0h]
  unsigned __int64 v41; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v42; // [rsp+58h] [rbp-C0h] BYREF
  __m128i v43; // [rsp+60h] [rbp-B8h] BYREF
  __m128i v44; // [rsp+70h] [rbp-A8h] BYREF
  __m128i v45; // [rsp+80h] [rbp-98h] BYREF
  __int64 v46; // [rsp+90h] [rbp-88h]
  __int64 v47[4]; // [rsp+A0h] [rbp-78h] BYREF
  int v48; // [rsp+C0h] [rbp-58h]

  v4 = a1[3];
  v38 = *a1;
  v31 = a1[1];
  v5 = a1[2];
  v6 = a1[4];
  v33 = v5;
  v35 = a1[8];
  v7 = 0;
  v8 = a1[5] + (__int64)(int)(v6 / 12 - ((unsigned int)(v6 % 12) >> 31));
  if ( (v8 & 3) == 0 )
  {
    v7 = 1;
    if ( v8 == 100 * (v8 / 100) )
      v7 = ((v8 / 100) & 3) == 1;
  }
  v9 = 59;
  v10 = 6;
  v11 = (unsigned __int16)word_4179C0[13 * v7 + (((v6 % 12) >> 31) & 0xC) + v6 % 12] - 1 + v4;
  if ( v38 <= 59 )
    v9 = v38;
  v12 = 0;
  if ( v9 >= 0 )
    v12 = v9;
  v34 = v12;
  v39 = -(int)*a3;
  v13 = sub_40D390(v8, v11, v33, v31, v12, 70, 0, 0, 0, v39);
  v37 = v13;
  v41 = v13;
  v40 = a1;
  v14 = 0;
  v15 = v13;
  while ( 1 )
  {
    v16 = (int *)sub_40D550(a2, (__int64 *)&v41, (__int64)&v43);
    v17 = v41;
    result = sub_40D4B0(v8, v11, v33, v31, v34, v41, v16);
    if ( v17 == result )
      break;
    if ( v17 == v13 && v17 != v15 )
    {
      if ( v45.m128i_i32[0] < 0 )
        goto LABEL_17;
      v19 = v45.m128i_i32[0] != 0;
      if ( v35 < 0 )
      {
        if ( (unsigned __int8)v19 >= v14 )
        {
LABEL_17:
          v20 = (__m128i *)v40;
          result = v17;
          goto LABEL_18;
        }
      }
      else if ( (v35 != 0) != v19 )
      {
        goto LABEL_17;
      }
    }
    if ( !--v10 )
      return -1LL;
    v41 = result;
    v13 = v15;
    v15 = v17;
    v14 = v45.m128i_i32[0] != 0;
  }
  v20 = (__m128i *)v40;
  if ( (v35 == 0) != (v45.m128i_i32[0] == 0) && v35 >= 0 && v45.m128i_i32[0] >= 0 )
  {
    for ( i = 601200; i != 269337600; i += 601200 )
    {
      v29 = 2;
      v30 = -i;
      v42 = result + -i;
      if ( !__OFADD__(result, -i) )
      {
LABEL_34:
        sub_40D550(a2, &v42, (__int64)v47);
        if ( (v35 == 0) == (v48 == 0) || v48 < 0 )
        {
          v41 = sub_40D4B0(v8, v11, v33, v31, v34, v42, (int *)v47);
          sub_40D550(a2, (__int64 *)&v41, (__int64)&v43);
          result = v41;
          break;
        }
        result = v41;
      }
      while ( 1 )
      {
        v30 += 2 * i;
        if ( v29 == 1 )
          break;
        v29 = 1;
        v42 = result + v30;
        if ( !__OFADD__(result, v30) )
          goto LABEL_34;
      }
    }
  }
LABEL_18:
  v21 = v43.m128i_i32[0];
  *a3 = result - (v37 + v39);
  if ( v21 == v38 )
    goto LABEL_22;
  v22 = ((v38 <= 0) & (unsigned __int8)(v21 == 60)) - (__int64)v34 + v38;
  v23 = __OFADD__(v22, result);
  v24 = v22 + result;
  v41 = v24;
  if ( !v23 )
  {
    v47[0] = v24;
    if ( a2(v47, (__int64)&v43) )
    {
      result = v41;
LABEL_22:
      v25 = _mm_load_si128(&v44);
      v26 = _mm_load_si128(&v45);
      v27 = v46;
      *v20 = _mm_load_si128(&v43);
      v20[1] = v25;
      v20[2] = v26;
      v20[3].m128i_i64[0] = v27;
      return result;
    }
  }
  return -1LL;
}

unsigned __int64 __fastcall sub_40DA50(int *a1)
{
  tzset();
  return sub_40D610(a1, (__int64 (__fastcall *)(__int64 *, __int64))localtime_r, &qword_61B4D8);
}

__int64 __fastcall sub_40DA70(__int64 a1)
{
  int v1; // eax
  unsigned int v2; // edx

  if ( *(_BYTE *)(a1 + 8) )
    v1 = setenv("TZ", (const char *)(a1 + 9), 1);
  else
    v1 = unsetenv("TZ");
  v2 = 0;
  if ( !v1 )
  {
    tzset();
    return 1;
  }
  return v2;
}

void __fastcall sub_40DAC0(_QWORD *a1)
{
  _QWORD *v1; // rbx

  if ( a1 )
  {
    do
    {
      v1 = (_QWORD *)*a1;
      free(a1);
      a1 = v1;
    }
    while ( v1 );
  }
}

__int64 __fastcall sub_40DAF0(_QWORD *a1)
{
  int *v1; // rbx
  int v2; // r13d
  unsigned int v3; // ebp

  v1 = __errno_location();
  v2 = *v1;
  v3 = sub_40DA70((__int64)a1);
  if ( !(_BYTE)v3 )
    v2 = *v1;
  sub_40DAC0(a1);
  *v1 = v2;
  return v3;
}

_QWORD *__fastcall sub_40DB40(const char *src)
{
  size_t v2; // rax
  __int64 v3; // rdi
  size_t v4; // rbp
  char *v5; // rax
  _BYTE *v6; // rbx
  _QWORD *result; // rax

  if ( src )
  {
    v2 = strlen(src);
    v3 = 118LL;
    v4 = v2 + 1;
    if ( v2 + 1 >= 0x76 )
      v3 = v2 + 1;
    v5 = (char *)malloc((v3 + 17) & 0xFFFFFFFFFFFFFFF8LL);
    v6 = v5;
    if ( v5 )
    {
      *(_QWORD *)v5 = 0LL;
      *((_WORD *)v5 + 4) = 1;
      memcpy(v5 + 9, src, v4);
      v6[v4 + 9] = 0;
    }
    return v6;
  }
  result = malloc(0x80uLL);
  v6 = result;
  if ( !result )
    return v6;
  *result = 0LL;
  *((_WORD *)result + 4) = 0;
  return result;
}

__int64 __fastcall sub_40DBD0(__int64 *a1, unsigned __int64 a2)
{
  const char *v2; // r12
  __int64 *v3; // rbp
  __int64 result; // rax
  char *v5; // rbx
  __int64 v6; // r14
  __int64 *v7; // rax
  size_t v8; // r15
  char *v9; // rax
  _QWORD *v10; // rax

  v2 = *(const char **)(a2 + 48);
  if ( !v2 )
    return 1LL;
  v3 = a1;
  if ( a2 > (unsigned __int64)v2 || (result = 1LL, (unsigned __int64)v2 >= a2 + 56) )
  {
    v5 = (char *)a1 + 9;
    if ( !*v2 )
    {
      v5 = (_BYTE *)("%s: invalid option -- '%c'\n" + 27);
      goto LABEL_12;
    }
LABEL_5:
    if ( !strcmp(v5, v2) )
      goto LABEL_12;
    while ( 1 )
    {
      if ( !*v5 )
      {
        v6 = (__int64)v3 + 9;
        if ( (char *)v3 + 9 != v5 )
        {
          v8 = strlen(v2) + 1;
          v9 = &v5[-v6];
          if ( ~(unsigned __int64)&v5[-v6] < v8 )
          {
            *__errno_location() = 12;
            return 0LL;
          }
LABEL_19:
          if ( (unsigned __int64)&v9[v8] <= 0x76 )
          {
            memcpy(v5, v2, v8);
            v5[v8] = 0;
            goto LABEL_12;
          }
          v10 = sub_40DB40(v2);
          *v3 = (__int64)v10;
          if ( !v10 )
            return 0LL;
          *((_BYTE *)v10 + 8) = 0;
          v5 = (char *)v10 + 9;
LABEL_12:
          *(_QWORD *)(a2 + 48) = v5;
          return 1LL;
        }
        if ( !*((_BYTE *)v3 + 8) )
        {
          v8 = strlen(v2) + 1;
          v9 = 0LL;
          goto LABEL_19;
        }
      }
      v5 += strlen(v5) + 1;
      if ( *v5 )
        goto LABEL_5;
      v7 = (__int64 *)*v3;
      if ( !*v3 )
        goto LABEL_5;
      v5 = (char *)v7 + 9;
      v3 = (__int64 *)*v3;
      if ( !strcmp((const char *)v7 + 9, v2) )
        goto LABEL_12;
    }
  }
  return result;
}

__int64 __fastcall sub_40DD50(__int64 a1)
{
  char *v1; // rax
  const char *v2; // rbp
  _QWORD *v3; // rbx
  int *v5; // rbp
  int v6; // r12d

  v1 = getenv("TZ");
  v2 = v1;
  if ( v1 )
  {
    if ( *(_BYTE *)(a1 + 8) && !strcmp((const char *)(a1 + 9), v1) )
      return 1LL;
  }
  else if ( !*(_BYTE *)(a1 + 8) )
  {
    return 1LL;
  }
  v3 = sub_40DB40(v2);
  if ( !v3 || (unsigned __int8)sub_40DA70(a1) )
    return (__int64)v3;
  v5 = __errno_location();
  v6 = *v5;
  if ( v3 != (_QWORD *)1 )
    sub_40DAC0(v3);
  *v5 = v6;
  return 0LL;
}

void __fastcall sub_40DE00(_QWORD *a1)
{
  if ( a1 != (_QWORD *)1 )
    sub_40DAC0(a1);
}

struct tm *__fastcall sub_40DE20(__int64 *a1, const time_t *a2, struct tm *a3)
{
  _QWORD *v4; // r13

  if ( !a1 )
    return gmtime_r(a2, a3);
  v4 = (_QWORD *)sub_40DD50((__int64)a1);
  if ( v4 )
  {
    if ( localtime_r(a2, a3) && (unsigned __int8)sub_40DBD0(a1, (unsigned __int64)a3) )
    {
      if ( v4 == (_QWORD *)1 || (unsigned __int8)sub_40DAF0(v4) )
        return a3;
    }
    else if ( v4 != (_QWORD *)1 )
    {
      sub_40DAF0(v4);
    }
  }
  return 0LL;
}

time_t __fastcall sub_40DED0(__int64 *a1, int *a2)
{
  _QWORD *v2; // r12
  int v4; // eax
  time_t timer; // [rsp+8h] [rbp-60h] BYREF
  struct tm tp; // [rsp+10h] [rbp-58h] BYREF

  if ( !a1 )
    return sub_40DFF0(a2);
  v2 = (_QWORD *)sub_40DD50((__int64)a1);
  if ( !v2 )
    return -1LL;
  timer = sub_40DA50(a2);
  if ( timer != -1
    || localtime_r(&timer, &tp)
    && ((v4 = a2[8], (v4 == 0) == (tp.tm_isdst == 0)) || v4 < 0 || tp.tm_isdst < 0)
    && !(tp.tm_sec ^ *a2 | tp.tm_min ^ a2[1] | tp.tm_hour ^ a2[2] | tp.tm_mday ^ a2[3] | tp.tm_year ^ a2[5] | tp.tm_mon ^ a2[4]) )
  {
    if ( !(unsigned __int8)sub_40DBD0(a1, (unsigned __int64)a2) )
      timer = -1LL;
  }
  if ( v2 == (_QWORD *)1 || (unsigned __int8)sub_40DAF0(v2) )
    return timer;
  else
    return -1LL;
}

unsigned __int64 __fastcall sub_40DFF0(int *a1)
{
  a1[8] = 0;
  return sub_40D610(a1, (__int64 (__fastcall *)(__int64 *, __int64))gmtime_r, &qword_61B4E0);
}

__int64 __fastcall sub_40E010(FILE *s, __int64 a2, __int64 a3)
{
  char *v3; // rax
  size_t v4; // rbx
  char *v5; // rbp
  int *v7; // rax
  int v8; // r13d
  int *v9; // r12
  size_t n; // [rsp+8h] [rbp-800h] BYREF
  char v11[2040]; // [rsp+10h] [rbp-7F8h] BYREF

  n = 2000LL;
  v3 = (char *)sub_40FFA0(v11, &n, a2, a3);
  v4 = n;
  if ( !v3 )
    goto LABEL_10;
  v5 = v3;
  if ( fwrite(v3, 1uLL, n, s) >= v4 )
  {
    if ( v5 != v11 )
      free(v5);
    if ( v4 <= 0x7FFFFFFF )
      return (unsigned int)v4;
    *__errno_location() = 75;
LABEL_10:
    LODWORD(v4) = -1;
    sub_40FF90(s);
    return (unsigned int)v4;
  }
  LODWORD(v4) = -1;
  if ( v5 != v11 )
  {
    v7 = __errno_location();
    v8 = *v7;
    v9 = v7;
    free(v5);
    *v9 = v8;
  }
  return (unsigned int)v4;
}

int __fastcall sub_40E0D0(FILE *stream)
{
  size_t v1; // r12
  int v2; // ebx
  int result; // eax

  v1 = __fpending(stream);
  v2 = stream->_flags & 0x20;
  result = sub_40C420(stream);
  if ( v2 )
  {
    if ( !result )
    {
      *__errno_location() = 0;
      return -1;
    }
    return -1;
  }
  if ( !result )
    return result;
  if ( v1 )
    return -1;
  return -(*__errno_location() != 9);
}

bool __fastcall sub_40E130(int a1)
{
  char *v1; // rdx
  bool result; // al

  v1 = setlocale(a1, 0LL);
  result = 1;
  if ( v1 )
  {
    result = 0;
    if ( strcmp(v1, "C") )
      return strcmp(v1, "POSIX") != 0;
  }
  return result;
}

const char *sub_40E190()
{
  char *v0; // rax
  char *v1; // r15
  const char *v2; // rbx
  char v3; // bp
  const char *v4; // rbp
  char *v6; // rax
  const char *v7; // r13
  size_t v8; // rax
  __int64 v9; // r12
  size_t v10; // r14
  size_t v11; // rdi
  char *v12; // rax
  char *v13; // rbp
  size_t v14; // rdi
  char *v15; // rax
  int v16; // eax
  int v17; // r12d
  FILE *v18; // r13
  const char *v19; // rax
  FILE *v20; // rbx
  const char *v21; // r13
  char *IO_read_ptr; // rax
  int v23; // edi
  char *v24; // kr00_8
  int *v25; // rdx
  int v26; // esi
  unsigned int v27; // eax
  __int64 v28; // rdx
  signed __int64 v29; // rax
  char *v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rsi
  unsigned int v34; // ecx
  signed __int64 v35; // rdi
  char *v36; // rsi
  unsigned int v37; // edx
  char *v38; // rcx
  FILE *v39; // rdi
  int v40; // eax
  bool v41; // dl
  char *v42; // rax
  signed __int64 v43; // rax
  unsigned __int64 v44; // r9
  char *v45; // rsi
  char *v46; // r10
  unsigned int v47; // ecx
  unsigned int v48; // ecx
  unsigned int v49; // esi
  __int64 v50; // r8
  unsigned __int64 v51; // rdi
  char *v52; // rcx
  char *v53; // r9
  unsigned int v54; // edx
  unsigned int v55; // edx
  unsigned int v56; // ecx
  __int64 v57; // rsi
  const char *v58; // rax
  char *v59; // rdi
  FILE *v60; // r13
  signed __int64 v61; // [rsp+8h] [rbp-D0h]
  __int64 v62; // [rsp+18h] [rbp-C0h]
  char v63[64]; // [rsp+20h] [rbp-B8h] BYREF
  _QWORD v64[15]; // [rsp+60h] [rbp-78h] BYREF

  v0 = nl_langinfo(14);
  v1 = s;
  v2 = v0;
  if ( !v0 )
    v2 = "";
  if ( !s )
  {
    v6 = getenv("CHARSETALIASDIR");
    v7 = v6;
    if ( v6 && *v6 )
    {
      v8 = strlen(v6);
      v9 = v8;
      v10 = v8;
      if ( !v8 )
      {
        v11 = 14LL;
LABEL_18:
        v12 = (char *)malloc(v11);
        v13 = v12;
        if ( !v12 )
        {
LABEL_19:
          v1 = (_BYTE *)("%s: invalid option -- '%c'\n" + 27);
LABEL_20:
          s = v1;
          goto LABEL_4;
        }
        memcpy(v12, v7, v10);
LABEL_24:
        strcpy(&v13[v9], "charset.alias");
        v16 = open(v13, 0);
        v17 = v16;
        if ( v16 >= 0 )
        {
          v1 = 0LL;
          v61 = 0LL;
          v18 = fdopen(v16, "r");
          if ( v18 )
          {
            v19 = v2;
            v20 = v18;
            v21 = v19;
LABEL_30:
            IO_read_ptr = v20->_IO_read_ptr;
            if ( IO_read_ptr < v20->_IO_read_end )
            {
LABEL_31:
              v20->_IO_read_ptr = IO_read_ptr + 1;
              v23 = (unsigned __int8)*IO_read_ptr;
              goto LABEL_32;
            }
            while ( 1 )
            {
              v23 = __uflow(v20);
              if ( v23 == -1 )
                break;
LABEL_32:
              if ( (unsigned int)(v23 - 9) <= 1 || v23 == 32 )
                goto LABEL_30;
              if ( v23 == 35 )
              {
                do
                {
                  v42 = v20->_IO_read_ptr;
                  if ( v42 < v20->_IO_read_end )
                  {
                    v20->_IO_read_ptr = v42 + 1;
                    v40 = (unsigned __int8)*v42;
                    v41 = 1;
                  }
                  else
                  {
                    v40 = __uflow(v20);
                    v41 = v40 != -1;
                  }
                }
                while ( v40 != 10 && v41 );
                if ( v40 == -1 )
                  break;
                goto LABEL_30;
              }
              ungetc(v23, v20);
              if ( fscanf(v20, "%50s %50s", v63, v64) <= 1 )
                break;
              v24 = &v63[strlen(v63)];
              v25 = (int *)v64;
              do
              {
                v26 = *v25++;
                v27 = ~v26 & (v26 - 16843009) & 0x80808080;
              }
              while ( !v27 );
              if ( (~v26 & (v26 - 16843009) & 0x8080) == 0 )
              {
                v27 >>= 16;
                v25 = (int *)((char *)v25 + 2);
              }
              v28 = (char *)v25 - __CFADD__((_BYTE)v27, (_BYTE)v27) - 3 - (char *)v64;
              v29 = v24 - v63 + v28;
              v62 = v28;
              if ( v61 )
              {
                v43 = v61 + v29;
                v61 = v43 + 2;
                v30 = (char *)realloc(v1, v43 + 3);
                v32 = v62;
                v31 = v24 - v63;
              }
              else
              {
                v61 = v29 + 2;
                v30 = (char *)malloc(v29 + 3);
                v31 = v24 - v63;
                v32 = v62;
              }
              if ( !v30 )
              {
                v58 = v21;
                v59 = v1;
                v60 = v20;
                v1 = (_BYTE *)("%s: invalid option -- '%c'\n" + 27);
                v2 = v58;
                free(v59);
                sub_40C420(v60);
                goto LABEL_26;
              }
              v33 = -2 - v31;
              v34 = v31 + 1;
              v35 = v61 - v32;
              v36 = &v30[v61 - v32 + v33];
              if ( v34 >= 8 )
              {
                *(_QWORD *)v36 = *(_QWORD *)v63;
                *(_QWORD *)&v36[v34 - 8] = *(_QWORD *)&v63[v34 - 8];
                v44 = (unsigned __int64)(v36 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                v45 = &v36[-v44];
                v46 = (char *)(v63 - v45);
                v47 = ((_DWORD)v45 + v34) & 0xFFFFFFF8;
                if ( v47 >= 8 )
                {
                  v48 = v47 & 0xFFFFFFF8;
                  v49 = 0;
                  do
                  {
                    v50 = v49;
                    v49 += 8;
                    *(_QWORD *)(v44 + v50) = *(_QWORD *)&v46[v50];
                  }
                  while ( v49 < v48 );
                }
              }
              else if ( (v34 & 4) != 0 )
              {
                *(_DWORD *)v36 = *(_DWORD *)v63;
                *(_DWORD *)&v36[v34 - 4] = *(_DWORD *)&v63[v34 - 4];
              }
              else if ( v34 )
              {
                *v36 = v63[0];
                if ( (v34 & 2) != 0 )
                  *(_WORD *)&v36[v34 - 2] = *(_WORD *)&v63[v34 - 2];
              }
              v37 = v32 + 1;
              v38 = &v30[v35 - 1];
              if ( v37 >= 8 )
              {
                *(_QWORD *)v38 = v64[0];
                *(_QWORD *)&v38[v37 - 8] = *(_QWORD *)&v63[v37 + 56];
                v51 = (unsigned __int64)(v38 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                v52 = &v38[-v51];
                v53 = (char *)((char *)v64 - v52);
                v54 = ((_DWORD)v52 + v37) & 0xFFFFFFF8;
                if ( v54 >= 8 )
                {
                  v55 = v54 & 0xFFFFFFF8;
                  v56 = 0;
                  do
                  {
                    v57 = v56;
                    v56 += 8;
                    *(_QWORD *)(v51 + v57) = *(_QWORD *)&v53[v57];
                  }
                  while ( v56 < v55 );
                }
              }
              else if ( (v37 & 4) != 0 )
              {
                *(_DWORD *)v38 = v64[0];
                *(_DWORD *)&v38[v37 - 4] = *(_DWORD *)&v63[v37 + 60];
              }
              else if ( v37 )
              {
                *v38 = v64[0];
                if ( (v37 & 2) != 0 )
                  *(_WORD *)&v38[v37 - 2] = *(_WORD *)&v63[v37 + 62];
              }
              v1 = v30;
              IO_read_ptr = v20->_IO_read_ptr;
              if ( IO_read_ptr < v20->_IO_read_end )
                goto LABEL_31;
            }
            v39 = v20;
            v2 = v21;
            sub_40C420(v39);
            if ( !v61 )
              goto LABEL_25;
            v1[v61] = 0;
            goto LABEL_26;
          }
          close(v17);
        }
LABEL_25:
        v1 = (_BYTE *)("%s: invalid option -- '%c'\n" + 27);
LABEL_26:
        free(v13);
        goto LABEL_20;
      }
      if ( v7[v8 - 1] == 47 )
      {
        v11 = v8 + 14;
        goto LABEL_18;
      }
      v14 = v8 + 15;
      v9 = v8 + 1;
    }
    else
    {
      v14 = 115LL;
      v9 = 101LL;
      v10 = 100LL;
      v7 = "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
    }
    v15 = (char *)malloc(v14);
    v13 = v15;
    if ( !v15 )
      goto LABEL_19;
    memcpy(v15, v7, v10);
    v13[v10] = 47;
    goto LABEL_24;
  }
LABEL_4:
  v3 = *v1;
  if ( *v1 )
  {
    while ( strcmp(v2, v1) && (v3 != 42 || v1[1]) )
    {
      v4 = &v1[strlen(v1) + 1];
      v1 = (char *)&v4[strlen(v4) + 1];
      v3 = *v1;
      if ( !*v1 )
        goto LABEL_11;
    }
    v2 = &v1[strlen(v1) + 1];
  }
LABEL_11:
  if ( !*v2 )
    return "ASCII";
  return v2;
}

__int64 __fastcall sub_40E700(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  const __int32_t **v4; // rax

  if ( a3 )
  {
    v3 = a3 - 1;
    v4 = __ctype_tolower_loc();
    do
    {
      *(_BYTE *)(a1 + v3) = (*v4)[*(unsigned __int8 *)(a2 + v3)];
      --v3;
    }
    while ( v3 != -1 );
  }
  return a1;
}

__int64 __fastcall sub_40E750(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  const __int32_t **v4; // rax

  if ( a3 )
  {
    v3 = a3 - 1;
    v4 = __ctype_toupper_loc();
    do
    {
      *(_BYTE *)(a1 + v3) = (*v4)[*(unsigned __int8 *)(a2 + v3)];
      --v3;
    }
    while ( v3 != -1 );
  }
  return a1;
}

__int64 __fastcall sub_40E7A0(
        char *s,
        __int64 a2,
        char *a3,
        const __m128i *a4,
        char a5,
        __int64 a6,
        __int64 *a7,
        int a8)
{
  char *v9; // rbx
  __int64 v10; // r12
  int v11; // r11d
  char v12; // al
  __int64 v13; // r14
  char *v14; // r8
  char v16; // r11
  char v17; // r8
  int i; // r12d
  int v19; // eax
  char v20; // cl
  int v21; // r9d
  bool v22; // cc
  int v23; // ebp
  int v24; // eax
  unsigned int v25; // edx
  int v26; // edi
  char *v27; // rax
  char *v28; // r8
  char v29; // r13
  size_t v30; // rax
  unsigned __int64 v31; // rcx
  int v32; // eax
  unsigned __int64 v33; // rbx
  size_t v34; // rdx
  char *v35; // rdi
  char *v36; // rsi
  size_t v37; // rdx
  char *v38; // rdi
  unsigned __int64 v39; // rcx
  char *v40; // r13
  __m128i v41; // xmm4
  __m128i v42; // xmm2
  __int64 v43; // rax
  time_t v44; // rax
  __int64 v45; // rsi
  time_t v46; // rcx
  int v47; // edx
  char v48; // al
  char v49; // dl
  int v50; // r10d
  char *v51; // rcx
  unsigned __int64 v52; // rax
  size_t v53; // r9
  unsigned __int64 v54; // r9
  size_t v55; // rdx
  char *v56; // rdi
  unsigned __int64 v57; // r10
  int v58; // eax
  unsigned __int64 v59; // rsi
  size_t v60; // rdx
  char *v61; // rdi
  __int32 v62; // r10d
  __int32 v63; // r13d
  int v64; // edi
  int v65; // r8d
  int v66; // eax
  int v67; // r13d
  int v68; // r13d
  int v69; // edi
  unsigned int v70; // esi
  int v71; // edi
  unsigned int v72; // r8d
  unsigned __int64 v73; // r13
  int v74; // eax
  unsigned __int64 v75; // rsi
  char v76; // r11
  char v77; // r8
  size_t v78; // rdx
  char *v79; // rdi
  int v80; // esi
  unsigned __int64 v81; // r13
  size_t v82; // rdx
  char *v83; // rdi
  char *v84; // rcx
  char *v85; // rax
  int v86; // edx
  unsigned __int64 v87; // rsi
  size_t v88; // rdx
  char *v89; // rdi
  size_t v90; // rdx
  char *v91; // rdi
  int v92; // esi
  int v93; // edi
  int v94; // edx
  char *v95; // rax
  char *v96; // r9
  size_t v97; // rcx
  size_t v98; // rax
  unsigned __int64 v99; // rdx
  size_t v100; // rdx
  char *v101; // rdi
  size_t v102; // rcx
  __int64 j; // r13
  __int64 v104; // rsi
  int v105; // eax
  int v106; // esi
  char v107; // cl
  int v108; // esi
  size_t v109; // rdx
  char *v110; // rdi
  char v111; // al
  char *v112; // rdx
  char v113; // cl
  unsigned __int64 v114; // r12
  unsigned __int64 v115; // r8
  size_t v116; // rdx
  __int64 v117; // r12
  char *v118; // rdi
  int v119; // eax
  unsigned __int64 v120; // rcx
  char *v121; // rdi
  int v122; // esi
  int v123; // edx
  __int32 v124; // r10d
  __int32 v125; // esi
  int k; // edi
  __int32 v127; // esi
  bool v128; // sf
  bool v129; // of
  int v130; // eax
  int v131; // eax
  int v132; // esi
  int v133; // esi
  char *v136; // [rsp+20h] [rbp-4A8h]
  int v138; // [rsp+2Ch] [rbp-49Ch]
  char *v139; // [rsp+30h] [rbp-498h]
  char v140; // [rsp+30h] [rbp-498h]
  unsigned __int64 v141; // [rsp+30h] [rbp-498h]
  char v142; // [rsp+30h] [rbp-498h]
  int v143; // [rsp+30h] [rbp-498h]
  char v144; // [rsp+30h] [rbp-498h]
  char v145; // [rsp+30h] [rbp-498h]
  size_t v146; // [rsp+30h] [rbp-498h]
  char v147; // [rsp+30h] [rbp-498h]
  size_t v148; // [rsp+30h] [rbp-498h]
  int v149; // [rsp+30h] [rbp-498h]
  char v150; // [rsp+40h] [rbp-488h]
  char *v151; // [rsp+40h] [rbp-488h]
  char *v152; // [rsp+40h] [rbp-488h]
  char v153; // [rsp+40h] [rbp-488h]
  char *v154; // [rsp+40h] [rbp-488h]
  char v155; // [rsp+40h] [rbp-488h]
  char v156; // [rsp+40h] [rbp-488h]
  char v157; // [rsp+40h] [rbp-488h]
  char *v158; // [rsp+40h] [rbp-488h]
  char *v159; // [rsp+40h] [rbp-488h]
  char v160; // [rsp+40h] [rbp-488h]
  char *v161; // [rsp+40h] [rbp-488h]
  char v162; // [rsp+40h] [rbp-488h]
  int v163; // [rsp+48h] [rbp-480h]
  unsigned __int64 v164; // [rsp+48h] [rbp-480h]
  char *v165; // [rsp+48h] [rbp-480h]
  unsigned __int64 v166; // [rsp+48h] [rbp-480h]
  char v167; // [rsp+48h] [rbp-480h]
  char *v168; // [rsp+48h] [rbp-480h]
  char *v169; // [rsp+48h] [rbp-480h]
  char v170; // [rsp+48h] [rbp-480h]
  int v171; // [rsp+48h] [rbp-480h]
  char v172; // [rsp+48h] [rbp-480h]
  unsigned __int64 v173; // [rsp+50h] [rbp-478h]
  int v174; // [rsp+50h] [rbp-478h]
  size_t v175; // [rsp+50h] [rbp-478h]
  unsigned __int64 v176; // [rsp+50h] [rbp-478h]
  int v177; // [rsp+50h] [rbp-478h]
  size_t v178; // [rsp+58h] [rbp-470h]
  char *v179; // [rsp+58h] [rbp-470h]
  char v180; // [rsp+58h] [rbp-470h]
  unsigned __int64 v181; // [rsp+58h] [rbp-470h]
  unsigned __int64 v182; // [rsp+58h] [rbp-470h]
  unsigned __int64 v183; // [rsp+60h] [rbp-468h]
  char format[2]; // [rsp+70h] [rbp-458h] BYREF
  char v185; // [rsp+72h] [rbp-456h] BYREF
  char v186; // [rsp+73h] [rbp-455h] BYREF
  char v187[9]; // [rsp+87h] [rbp-441h] BYREF
  char sa[16]; // [rsp+90h] [rbp-438h] BYREF
  __m128i v189; // [rsp+A0h] [rbp-428h]
  __m128i v190; // [rsp+B0h] [rbp-418h]
  __int64 v191; // [rsp+C0h] [rbp-408h]

  v9 = a3;
  v10 = a4[3].m128i_i64[0];
  v11 = a4->m128i_i32[2];
  if ( !v10 )
    v10 = 4290980LL;
  if ( v11 <= 12 )
  {
    if ( !v11 )
      v11 = 12;
  }
  else
  {
    v11 -= 12;
  }
  v12 = *a3;
  v13 = 0LL;
  if ( !*a3 )
  {
LABEL_13:
    if ( s && a2 )
      *s = 0;
    return v13;
  }
  v138 = v11;
  v136 = (char *)v10;
  while ( v12 != 37 )
  {
    if ( (unsigned __int64)(a2 - v13) <= 1 )
      return 0LL;
    if ( s )
      *s++ = v12;
    ++v13;
    v14 = v9;
LABEL_12:
    v12 = v14[1];
    v9 = v14 + 1;
    if ( !v12 )
      goto LABEL_13;
  }
  v16 = a5;
  v17 = 0;
LABEL_22:
  for ( i = 0; ; i = v19 )
  {
    v19 = *++v9;
    v20 = *v9;
    v21 = v19;
    v22 = *v9 <= 48;
    if ( *v9 != 48 )
      break;
LABEL_26:
    ;
  }
  while ( 1 )
  {
    if ( !v22 )
    {
      if ( (_BYTE)v19 == 94 )
      {
        v16 = 1;
        goto LABEL_22;
      }
      if ( (_BYTE)v19 != 95 )
      {
        v23 = -1;
        if ( (unsigned int)(v19 - 48) > 9 )
          goto LABEL_29;
        goto LABEL_37;
      }
      goto LABEL_26;
    }
    if ( (_BYTE)v19 != 35 )
      break;
    v19 = *++v9;
    v17 = 1;
    v20 = *v9;
    v21 = v19;
    v22 = *v9 <= 48;
    if ( *v9 == 48 )
      goto LABEL_26;
  }
  if ( (_BYTE)v19 == 45 )
    goto LABEL_26;
  v23 = -1;
  if ( (unsigned int)(v19 - 48) > 9 )
    goto LABEL_29;
LABEL_37:
  v23 = 0;
  while ( 1 )
  {
    v24 = v9[1];
    v20 = v9[1];
    v25 = v24 - 48;
    if ( v23 > 214748364 )
      break;
    v26 = *v9;
    if ( v23 == 214748364 && (char)v26 > 55 )
      break;
    ++v9;
    v23 = v26 + 10 * v23 - 48;
LABEL_41:
    if ( v25 > 9 )
    {
      v21 = v24;
      goto LABEL_29;
    }
  }
  if ( v25 <= 9 )
  {
    v24 = v9[2];
    v23 = 0x7FFFFFFF;
    v9 += 2;
    v20 = v24;
    v25 = v24 - 48;
    goto LABEL_41;
  }
  v21 = *++v9;
  v23 = 0x7FFFFFFF;
LABEL_29:
  if ( v20 == 69 || v20 == 79 )
    v20 = *++v9;
  else
    v21 = 0;
  switch ( v20 )
  {
    case 0:
      v96 = v9 - 1;
      v107 = *(v9 - 1);
      goto LABEL_261;
    case 37:
      LODWORD(v98) = 0;
      v81 = 1LL;
      v99 = a2 - v13;
      if ( v23 >= 0 )
        LODWORD(v98) = v23;
      v98 = (int)v98;
      if ( (_DWORD)v98 )
        v81 = (int)v98;
      if ( v21 )
      {
        v14 = v9;
        v96 = v9;
        v97 = 1LL;
        goto LABEL_242;
      }
      if ( v81 < v99 )
      {
        if ( s )
        {
          if ( v23 > 1 )
          {
            v109 = v23 - 1LL;
            v110 = s;
            s += v109;
            if ( i == 48 )
              memset(v110, 48, v109);
            else
              memset(v110, 32, v109);
            v20 = *v9;
          }
          *s++ = v20;
        }
LABEL_174:
        v13 += v81;
        v14 = v9;
        goto LABEL_12;
      }
      return 0LL;
    case 58:
      v111 = v9[1];
      v112 = v9 + 1;
      for ( j = 1LL; v111 == 58; v112 = &v9[j] )
        v111 = v9[++j];
      if ( v111 != 122 )
        goto LABEL_236;
      v9 = v112;
      goto LABEL_252;
    case 65:
    case 66:
    case 97:
      if ( v21 )
        goto LABEL_236;
      if ( v17 )
        v16 = v17;
      goto LABEL_51;
    case 67:
      if ( v21 == 69 )
        goto LABEL_334;
      v144 = 0;
      v50 = 2;
      LOBYTE(v72) = a4[1].m128i_i32[1] < -1900;
      v70 = a4[1].m128i_i32[1] / 100
          + 19
          - ((a4[1].m128i_i32[1] / 100 + 19 > 0) & ((unsigned int)(a4[1].m128i_i32[1] % 100) >> 31));
      v71 = 0;
      goto LABEL_122;
    case 68:
      if ( !v21 )
        goto LABEL_94;
      goto LABEL_236;
    case 70:
      if ( !v21 )
        goto LABEL_94;
      goto LABEL_236;
    case 71:
    case 86:
    case 103:
      if ( v21 == 69 )
        goto LABEL_236;
      v62 = a4[1].m128i_i32[3];
      v63 = a4[1].m128i_i32[2];
      v143 = a4[1].m128i_i32[1];
      v64 = v143 + ((v143 >> 31) & 0x190) - 100;
      v65 = v63 - 382 + 7 * ((v62 - v63 + 382) / 7) + 3;
      if ( v65 < 0 )
      {
        v122 = v143 + ((v143 >> 31) & 0x190) - 101;
        v123 = 365;
        if ( (((_BYTE)v143 + ((v143 >> 31) & 0x90) - 101) & 3) == 0 )
        {
          v123 = 366;
          if ( v122 == 100 * (v122 / 100) )
            v123 = 366 - (v122 % 400 != 0);
        }
        v124 = v123 + v62;
        v125 = v124 - v63;
        v68 = -1;
        v65 = v124 - (v125 + 382) + 7 * ((v125 + 382) / 7) + 3;
      }
      else
      {
        v66 = 365;
        if ( (v64 & 3) == 0 )
        {
          v66 = 366;
          if ( v64 == 100 * (v64 / 100) )
            v66 = (v64 == 400 * (v64 / 400)) + 365;
        }
        v67 = v63 - 382 + 7 * ((v62 - v66 - v63 + 382) / 7) + 3;
        if ( v67 >= 0 )
          v65 = v67;
        v68 = (v67 >> 31) + 1;
      }
      if ( v20 == 71 )
      {
        v127 = a4[1].m128i_i32[1];
        v144 = 0;
        v50 = 4;
        v129 = __OFSUB__(v127, -1900 - v68);
        v128 = v127 - (-1900 - v68) < 0;
        v70 = v127 + v68 + 1900;
        LOBYTE(v72) = v128 ^ v129;
        v71 = 0;
        goto LABEL_122;
      }
      if ( v20 == 103 )
      {
        v50 = 2;
        v69 = (v68 + v143 % 100) % 100;
        v70 = v69;
        if ( v69 < 0 )
        {
          v70 = v69 + 100;
          if ( v143 < -1900 - v68 )
            v70 = -v69;
        }
      }
      else
      {
        v50 = 2;
        v70 = v65 / 7 + 1;
      }
      goto LABEL_121;
    case 72:
      if ( v21 == 69 )
        goto LABEL_236;
      v50 = 2;
      v70 = a4->m128i_u32[2];
      goto LABEL_121;
    case 73:
      if ( v21 == 69 )
        goto LABEL_236;
      v70 = v138;
      v50 = 2;
      goto LABEL_121;
    case 77:
      if ( v21 == 69 )
        goto LABEL_236;
      v50 = 2;
      v70 = a4->m128i_u32[1];
      goto LABEL_121;
    case 78:
      if ( v21 == 69 )
        goto LABEL_236;
      if ( v23 == -1 )
      {
        v70 = a8;
        v23 = 9;
        v50 = 9;
      }
      else
      {
        if ( v23 > 8 )
        {
          v70 = a8;
        }
        else
        {
          v70 = a8;
          for ( k = v23; k != 9; ++k )
            v70 = (int)v70 / 10;
        }
        v50 = v23;
      }
      goto LABEL_121;
    case 80:
      v29 = 1;
      goto LABEL_152;
    case 82:
    case 84:
LABEL_94:
      v57 = sub_40E7A0(0LL, (__int64)a7, a8);
      v58 = 0;
      if ( v23 >= 0 )
        v58 = v23;
      v59 = v58;
      if ( v57 >= v58 )
        v59 = v57;
      if ( a2 - v13 <= v59 )
        return 0LL;
      if ( s )
      {
        if ( v57 < v58 )
        {
          v173 = v57;
          v60 = v23 - v57;
          v61 = s;
          s += v60;
          if ( i == 48 )
            memset(v61, 48, v60);
          else
            memset(v61, 32, v60);
          v57 = v173;
        }
        v166 = v57;
        sub_40E7A0(s, (__int64)a7, a8);
        s += v166;
      }
      v13 += v59;
      v14 = v9;
      goto LABEL_12;
    case 83:
      if ( v21 == 69 )
        goto LABEL_236;
      v50 = 2;
      v70 = a4->m128i_i32[0];
      goto LABEL_121;
    case 85:
      if ( v21 == 69 )
        goto LABEL_236;
      v93 = a4[1].m128i_i32[3] - a4[1].m128i_i32[2] + 7;
      v94 = (unsigned __int64)(-1840700269LL * v93) >> 32;
      goto LABEL_226;
    case 87:
      if ( v21 == 69 )
        goto LABEL_236;
      v93 = 7 * ((a4[1].m128i_i32[2] + 6) / 7) - (a4[1].m128i_i32[2] + 6) + a4[1].m128i_i32[3] + 7;
      v94 = (unsigned __int64)(-1840700269LL * v93) >> 32;
LABEL_226:
      v50 = 2;
      v70 = ((v94 + v93) >> 2) - (v93 >> 31);
      goto LABEL_121;
    case 88:
    case 99:
    case 120:
      if ( v21 != 79 )
        goto LABEL_69;
      goto LABEL_236;
    case 89:
      if ( v21 == 69 )
        goto LABEL_334;
      if ( v21 == 79 )
        goto LABEL_236;
      v144 = 0;
      v50 = 4;
      v92 = a4[1].m128i_i32[1];
      LOBYTE(v72) = v92 < -1900;
      v70 = v92 + 1900;
      v71 = 0;
      goto LABEL_220;
    case 90:
      v167 = v17;
      if ( v17 )
        v16 = 0;
      v155 = v16;
      v73 = strlen(v136);
      v74 = 0;
      if ( v23 >= 0 )
        v74 = v23;
      v75 = v74;
      if ( v73 >= v74 )
        v75 = v73;
      if ( a2 - v13 <= v75 )
        return 0LL;
      if ( s )
      {
        v76 = v155;
        v77 = v167;
        if ( v73 < v74 )
        {
          v78 = v23 - v73;
          v79 = s;
          s += v78;
          if ( i == 48 )
          {
            memset(v79, 48, v78);
            v76 = v155;
            v77 = v167;
          }
          else
          {
            memset(v79, 32, v78);
            v77 = v167;
            v76 = v155;
          }
        }
        if ( v77 )
        {
          sub_40E700((__int64)s, (__int64)v136, v73);
        }
        else if ( v76 )
        {
          sub_40E750((__int64)s, (__int64)v136, v73);
        }
        else
        {
          memcpy(s, v136, v73);
        }
        s += v73;
      }
      v13 += v75;
      v14 = v9;
      goto LABEL_12;
    case 98:
    case 104:
      if ( v17 )
        v16 = v17;
      if ( v21 )
        goto LABEL_236;
LABEL_51:
      v27 = &v185;
      v28 = v9;
      v29 = 0;
      *(_WORD *)format = 9504;
      v21 = 0;
      goto LABEL_52;
    case 100:
      if ( v21 == 69 )
        goto LABEL_236;
      v50 = 2;
      v70 = a4->m128i_u32[3];
      goto LABEL_121;
    case 101:
      if ( v21 == 69 )
        goto LABEL_236;
      v70 = a4->m128i_u32[3];
      goto LABEL_157;
    case 106:
      if ( v21 == 69 )
        goto LABEL_236;
      v144 = 0;
      v50 = 3;
      v108 = a4[1].m128i_i32[3];
      LOBYTE(v72) = v108 < -1;
      v70 = v108 + 1;
      v71 = 0;
      goto LABEL_122;
    case 107:
      if ( v21 == 69 )
        goto LABEL_236;
      v70 = a4->m128i_u32[2];
      goto LABEL_157;
    case 108:
      if ( v21 == 69 )
        goto LABEL_236;
      v70 = v138;
LABEL_157:
      v50 = 2;
      if ( i != 48 && i != 45 )
        i = 95;
      goto LABEL_121;
    case 109:
      if ( v21 == 69 )
        goto LABEL_236;
      v144 = 0;
      v50 = 2;
      v80 = a4[1].m128i_i32[0];
      LOBYTE(v72) = v80 < -1;
      v70 = v80 + 1;
      v71 = 0;
      goto LABEL_122;
    case 110:
      LODWORD(v81) = 0;
      if ( v23 >= 0 )
        LODWORD(v81) = v23;
      v81 = (int)v81;
      if ( !(_DWORD)v81 )
        v81 = 1LL;
      if ( a2 - v13 <= v81 )
        return 0LL;
      if ( s )
      {
        if ( v23 > 1 )
        {
          v82 = v23 - 1LL;
          v83 = s;
          s += v82;
          if ( i == 48 )
            memset(v83, 48, v82);
          else
            memset(v83, 32, v82);
        }
        *s++ = 10;
      }
      goto LABEL_174;
    case 112:
      v29 = 0;
LABEL_152:
      v20 = 112;
      if ( v17 )
      {
        v29 = v17;
        v16 = 0;
      }
      goto LABEL_70;
    case 113:
      v50 = 1;
      if ( v21 == 79 )
        goto LABEL_124;
      v144 = 0;
      LOBYTE(v72) = 0;
      v71 = 0;
      v70 = ((11 * a4[1].m128i_i32[0]) >> 5) + 1;
      goto LABEL_177;
    case 114:
LABEL_69:
      v29 = 0;
LABEL_70:
      *(_WORD *)format = 9504;
      if ( !v21 )
      {
        v28 = v9;
        v27 = &v185;
        goto LABEL_52;
      }
      v50 = 0;
      goto LABEL_125;
    case 115:
      v153 = v16;
      v40 = v187;
      v41 = _mm_loadu_si128(a4 + 2);
      v42 = _mm_loadu_si128(a4 + 1);
      v43 = a4[3].m128i_i64[0];
      *(__m128i *)sa = _mm_loadu_si128(a4);
      v189 = v42;
      v190 = v41;
      v191 = v43;
      v44 = sub_40DED0(a7, (int *)sa);
      v16 = v153;
      v45 = v44;
      v46 = v44;
      do
      {
        v47 = v46 % 10;
        v46 /= 10LL;
        v48 = 48 - v47;
        v49 = v47 + 48;
        if ( v45 < 0 )
          v49 = v48;
        *--v40 = v49;
      }
      while ( v46 );
      v50 = 1;
      if ( v23 > 0 )
        v50 = v23;
      if ( v45 >= 0 )
        goto LABEL_79;
      goto LABEL_298;
    case 116:
      LODWORD(v81) = 0;
      if ( v23 >= 0 )
        LODWORD(v81) = v23;
      v81 = (int)v81;
      if ( !(_DWORD)v81 )
        v81 = 1LL;
      if ( a2 - v13 <= v81 )
        return 0LL;
      if ( s )
      {
        if ( v23 > 1 )
        {
          v90 = v23 - 1LL;
          v91 = s;
          s += v90;
          if ( i == 48 )
            memset(v91, 48, v90);
          else
            memset(v91, 32, v90);
        }
        *s++ = 9;
      }
      goto LABEL_174;
    case 117:
      v50 = 1;
      v70 = (a4[1].m128i_i32[2] + 6) % 7 + 1;
      goto LABEL_121;
    case 119:
      if ( v21 == 69 )
        goto LABEL_236;
      v50 = 1;
      v70 = a4[1].m128i_u32[2];
      goto LABEL_121;
    case 121:
      if ( v21 == 69 )
      {
LABEL_334:
        v50 = 0;
        goto LABEL_124;
      }
      v50 = 2;
      v70 = a4[1].m128i_i32[1] % 100;
      if ( (v70 & 0x80000000) != 0 )
      {
        v70 += 100;
        if ( a4[1].m128i_i32[1] <= -1901 )
          v70 = -(a4[1].m128i_i32[1] % 100);
      }
LABEL_121:
      v144 = 0;
      v71 = 0;
      v72 = v70 >> 31;
LABEL_122:
      if ( v21 == 79 )
      {
        if ( (_BYTE)v72 )
          goto LABEL_221;
LABEL_124:
        v29 = 0;
        *(_WORD *)format = 9504;
LABEL_125:
        v185 = v21;
        v28 = v9;
        v21 = v50;
        v27 = &v186;
LABEL_52:
        *v27 = v20;
        v27[1] = 0;
        v139 = v28;
        v163 = v21;
        v150 = v16;
        v30 = strftime(sa, 0x400uLL, format, (const struct tm *)a4);
        v14 = v139;
        if ( v30 )
        {
          v31 = v30 - 1;
          v32 = 0;
          if ( v23 >= 0 )
            v32 = v23;
          v33 = v32;
          if ( v31 >= v32 )
            v33 = v31;
          if ( a2 - v13 > v33 )
          {
            if ( s )
            {
              v16 = v150;
              if ( !v163 && v31 < v32 )
              {
                v164 = v31;
                v34 = v23 - v31;
                v151 = v139;
                v140 = v16;
                v35 = s;
                s += v34;
                if ( i == 48 )
                {
                  memset(v35, 48, v34);
                  v16 = v140;
                  v14 = v151;
                  v31 = v164;
                }
                else
                {
                  memset(v35, 32, v34);
                  v31 = v164;
                  v14 = v151;
                  v16 = v140;
                }
              }
              v152 = v14;
              v36 = &sa[1];
              v37 = v31;
              v38 = s;
              v141 = v31;
              if ( !v29 )
                goto LABEL_64;
              sub_40E700((__int64)s, (__int64)&sa[1], v31);
              v39 = v141;
              v14 = v152;
              goto LABEL_66;
            }
            goto LABEL_67;
          }
          return 0LL;
        }
        goto LABEL_12;
      }
LABEL_220:
      if ( (_BYTE)v72 )
LABEL_221:
        v70 = -v70;
LABEL_177:
      v84 = v187;
      while ( 1 )
      {
        v40 = v84 - 1;
        if ( (v71 & 1) != 0 )
        {
          v85 = v84 - 2;
          *--v84 = 58;
          v40 = v85;
        }
        v71 >>= 1;
        *(v84 - 1) = v70 % 0xA + 48;
        v84 = v40;
        if ( v70 <= 9 && !v71 )
          break;
        v70 /= 0xAu;
      }
      if ( v50 < v23 )
        v50 = v23;
      if ( (_BYTE)v72 )
      {
LABEL_298:
        v145 = 45;
        v113 = 45;
        if ( i == 45 )
          goto LABEL_299;
LABEL_189:
        v51 = (char *)(v187 - v40);
        LODWORD(v53) = v50 - 1 - (v187 - v40);
        v52 = a2 - v13;
        if ( (int)v53 <= 0 )
        {
          LODWORD(v54) = 0;
          v115 = 1LL;
          if ( v23 >= 0 )
            LODWORD(v54) = v23;
          v54 = (int)v54;
          if ( (_DWORD)v54 )
            v115 = (int)v54;
          if ( v115 >= v52 )
            return 0LL;
          if ( s )
          {
            if ( !v50 && (unsigned __int64)(int)v54 > 1 )
            {
              v116 = v23 - 1LL;
              v183 = v115;
              v181 = (int)v54;
              v161 = &s[v116];
              v170 = v16;
              if ( i == 48 )
              {
                memset(s, 48, v116);
                s = v161;
                v16 = v170;
                v50 = 0;
                v54 = v181;
                v115 = v183;
                v51 = (char *)(v187 - v40);
              }
              else
              {
                memset(s, 32, v116);
                s = v161;
                v51 = (char *)(v187 - v40);
                v115 = v183;
                v54 = v181;
                v50 = 0;
                v16 = v170;
              }
            }
            *s++ = v145;
          }
          v13 += v115;
          v14 = v9;
          v52 = a2 - v13;
          goto LABEL_84;
        }
        if ( i != 95 )
        {
          if ( v50 >= v52 )
            return 0LL;
          v86 = 0;
          v87 = 1LL;
          if ( v23 >= 0 )
            v86 = v23;
          if ( v86 )
            v87 = v86;
          if ( v87 >= v52 )
            return 0LL;
          v13 += v87;
          v53 = (int)v53;
          v14 = v9;
          if ( !s )
            goto LABEL_205;
          if ( !v50 && (unsigned __int64)v86 > 1 )
          {
            v178 = (int)v53;
            v88 = v23 - 1LL;
            v156 = v16;
            v89 = s;
            s += v88;
            if ( i == 48 )
            {
              memset(v89, 48, v88);
              v16 = v156;
              v50 = 0;
              v51 = (char *)(v187 - v40);
              v53 = v178;
            }
            else
            {
              memset(v89, 32, v88);
              v53 = v178;
              v51 = (char *)(v187 - v40);
              v50 = 0;
              v16 = v156;
            }
          }
          ++s;
          v14 = v9;
          *(s - 1) = v145;
LABEL_203:
          if ( s )
          {
            v179 = v51;
            v174 = v50;
            v168 = v14;
            v157 = v16;
            v146 = v53;
            memset(s, 48, v53);
            v53 = v146;
            v51 = v179;
            v50 = v174;
            v14 = v168;
            v16 = v157;
            s += v146;
          }
LABEL_205:
          v13 += v53;
          v23 = 0;
          v54 = 0LL;
          v52 = a2 - v13;
          goto LABEL_84;
        }
LABEL_326:
        v117 = (int)v53;
        if ( (int)v53 >= v52 )
          return 0LL;
        if ( s )
        {
          v118 = s;
          v177 = v53;
          v171 = v50;
          s += (int)v53;
          v162 = v16;
          memset(v118, 32, (int)v53);
          LODWORD(v53) = v177;
          v50 = v171;
          v16 = v162;
        }
        v13 += v117;
        v119 = v23 - v53;
        v22 = (int)v53 < v23;
        v23 = 0;
        if ( v22 )
          v23 = v119;
        v52 = a2 - v13;
        if ( v145 )
        {
          v54 = v23;
          v120 = 1LL;
          if ( v23 )
            v120 = v23;
          if ( v120 >= v52 )
            return 0LL;
          if ( s )
          {
            if ( !v50 && (unsigned __int64)v23 > 1 )
            {
              v121 = s;
              v182 = v120;
              s += v23 - 1;
              v172 = v16;
              memset(v121, 32, v23 - 1LL);
              v120 = v182;
              v50 = 0;
              v16 = v172;
              v54 = v23;
            }
            *s++ = v145;
          }
          v13 += v120;
          v14 = v9;
          i = 95;
          v51 = (char *)(v187 - v40);
          v52 = a2 - v13;
        }
        else
        {
          v54 = v23;
          v14 = v9;
          i = 95;
          v51 = (char *)(v187 - v40);
        }
        goto LABEL_84;
      }
      if ( !v144 )
      {
LABEL_79:
        v51 = (char *)(v187 - v40);
        v52 = a2 - v13;
        if ( i == 45 || (LODWORD(v53) = v50 - (_DWORD)v51, v50 - (int)v51 <= 0) )
        {
          LODWORD(v54) = 0;
          v14 = v9;
          if ( v23 >= 0 )
            LODWORD(v54) = v23;
          v54 = (int)v54;
          goto LABEL_84;
        }
        if ( i != 95 )
        {
          if ( v50 >= v52 )
            return 0LL;
          v53 = (int)v53;
          v14 = v9;
          goto LABEL_203;
        }
        v145 = 0;
        goto LABEL_326;
      }
      if ( i != 45 )
      {
        v145 = 43;
        goto LABEL_189;
      }
      v113 = 43;
LABEL_299:
      LODWORD(v54) = 0;
      v114 = 1LL;
      if ( v23 >= 0 )
        LODWORD(v54) = v23;
      v54 = (int)v54;
      if ( (_DWORD)v54 )
        v114 = (int)v54;
      if ( a2 - v13 <= v114 )
        return 0LL;
      if ( s )
      {
        if ( !v50 && (unsigned __int64)(int)v54 > 1 )
        {
          v180 = v113;
          v176 = (int)v54;
          v160 = v16;
          memset(s, 32, v23 - 1LL);
          v113 = v180;
          v54 = v176;
          v50 = 0;
          v16 = v160;
          s += v23 - 1;
        }
        *s++ = v113;
      }
      v13 += v114;
      v14 = v9;
      i = 45;
      v51 = (char *)(v187 - v40);
      v52 = a2 - v13;
LABEL_84:
      v33 = v54;
      if ( (unsigned __int64)v51 >= v54 )
        v33 = (unsigned __int64)v51;
      if ( v33 < v52 )
      {
        if ( s )
        {
          if ( !v50 && (unsigned __int64)v51 < v54 )
          {
            v165 = v51;
            v55 = v23 - (_QWORD)v51;
            v154 = v14;
            v142 = v16;
            v56 = s;
            s += v55;
            if ( i == 48 )
            {
              memset(v56, 48, v55);
              v16 = v142;
              v14 = v154;
              v51 = v165;
            }
            else
            {
              memset(v56, 32, v55);
              v51 = v165;
              v14 = v154;
              v16 = v142;
            }
          }
          v152 = v14;
          v37 = (size_t)v51;
          v36 = v40;
          v38 = s;
          v141 = (unsigned __int64)v51;
LABEL_64:
          if ( v16 )
          {
            sub_40E750((__int64)v38, (__int64)v36, v37);
            v39 = v141;
            v14 = v152;
          }
          else
          {
            memcpy(v38, v36, v37);
            v14 = v152;
            v39 = v141;
          }
LABEL_66:
          s += v39;
        }
LABEL_67:
        v13 += v33;
        goto LABEL_12;
      }
      return 0LL;
    case 122:
      j = 0LL;
LABEL_252:
      if ( a4[2].m128i_i32[0] < 0 )
      {
        v14 = v9;
        goto LABEL_12;
      }
      v104 = a4[2].m128i_i64[1];
      LOBYTE(v72) = 1;
      if ( (int)v104 >= 0 )
      {
        LOBYTE(v72) = 0;
        if ( !(_DWORD)v104 )
          LOBYTE(v72) = *v136 == 45;
      }
      v149 = (int)v104 / 3600;
      v105 = (int)v104 / 60 % 60;
      v71 = v105;
      v106 = (int)v104 % 60;
      if ( j == 1 )
        goto LABEL_362;
      if ( j )
      {
        if ( j == 2 )
          goto LABEL_361;
        if ( j != 3 )
        {
          v107 = *v9;
          v96 = v9;
LABEL_261:
          LODWORD(v98) = 0;
          v99 = a2 - v13;
          if ( v23 >= 0 )
            LODWORD(v98) = v23;
          v98 = (int)v98;
          if ( v107 == 37 )
          {
            v81 = 1LL;
            v14 = v96;
            v97 = 1LL;
            if ( (_DWORD)v98 )
              v81 = (int)v98;
          }
          else
          {
            v9 = v96;
LABEL_236:
            v95 = v9 - 1;
            do
            {
              v96 = v95;
              LODWORD(v97) = (_DWORD)v9 - 1 + 2 - (_DWORD)v95--;
            }
            while ( v95[1] != 37 );
            LODWORD(v98) = 0;
            v97 = (int)v97;
            v14 = v9;
            v99 = a2 - v13;
            if ( v23 >= 0 )
              LODWORD(v98) = v23;
            v98 = (int)v98;
            v81 = (int)v98;
            if ( (int)v97 >= (unsigned __int64)(int)v98 )
              v81 = (int)v97;
          }
LABEL_242:
          if ( v99 > v81 )
          {
            if ( s )
            {
              if ( v97 < v98 )
              {
                v175 = v97;
                v100 = v23 - v97;
                v169 = v14;
                v158 = v96;
                v147 = v16;
                v101 = s;
                s += v100;
                if ( i == 48 )
                {
                  memset(v101, 48, v100);
                  v16 = v147;
                  v96 = v158;
                  v14 = v169;
                  v97 = v175;
                }
                else
                {
                  memset(v101, 32, v100);
                  v97 = v175;
                  v14 = v169;
                  v96 = v158;
                  v16 = v147;
                }
              }
              v159 = v14;
              v148 = v97;
              if ( v16 )
              {
                sub_40E750((__int64)s, (__int64)v96, v97);
                v102 = v148;
                v14 = v159;
              }
              else
              {
                memcpy(s, v96, v97);
                v14 = v159;
                v102 = v148;
              }
              s += v102;
            }
            v13 += v81;
            goto LABEL_12;
          }
          return 0LL;
        }
        if ( v106 )
        {
LABEL_361:
          v130 = 10000 * v149;
          v50 = 9;
          v144 = 1;
          v131 = 100 * v71 + v130;
          v71 = 20;
          v70 = v131 + v106;
        }
        else if ( v105 )
        {
LABEL_362:
          v132 = 100 * v149;
          v50 = 6;
          v144 = 1;
          v70 = v105 + v132;
          v71 = 4;
        }
        else
        {
          v70 = v149;
          v50 = 3;
          v144 = 1;
        }
      }
      else
      {
        v133 = 100 * v149;
        v71 = 0;
        v144 = 1;
        v50 = 5;
        v70 = v105 + v133;
      }
      goto LABEL_122;
    default:
      goto LABEL_236;
  }
}

__int64 __fastcall sub_40FF70(char *a1, __int64 a2, char *a3, const __m128i *a4, __int64 *a5, int a6)
{
  char v7[9]; // [rsp+Fh] [rbp-9h] BYREF

  v7[0] = 0;
  return sub_40E7A0(a1, a2, a3, a4, 0, (__int64)v7, a5, a6);
}

void __fastcall sub_40FF90(_DWORD *a1)
{
  *a1 |= 0x20u;
}

char *__fastcall sub_40FFA0(void *a1, size_t *a2, _BYTE *a3, __int64 a4)
{
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  size_t v8; // rdi
  char *v9; // rax
  size_t v10; // r12
  char *v11; // r14
  _BYTE *v12; // r8
  char *v13; // rbx
  size_t v14; // r15
  _BYTE *v15; // rcx
  void *v16; // rcx
  unsigned __int64 v17; // rax
  size_t v18; // r13
  bool v19; // dl
  char *v20; // rax
  char *v21; // rax
  void *v22; // rsp
  char *v23; // rax
  char v24; // r15
  __int64 v25; // rax
  char *v26; // r8
  long double *v27; // rdx
  int v28; // eax
  char v29; // al
  int v30; // eax
  char *v31; // r15
  const char *v32; // rdi
  _BYTE *v33; // rsi
  _BYTE *v34; // rdx
  _BYTE *v35; // rsi
  _BYTE *v36; // rdx
  __int64 v37; // rax
  char v38; // al
  __int64 v39; // rax
  char *v40; // rax
  __int64 v41; // rax
  char *v42; // r8
  int v43; // eax
  unsigned __int64 v44; // rax
  char *v45; // r11
  int *v46; // rax
  char *v47; // r11
  unsigned __int64 v48; // rbx
  unsigned __int64 v49; // r10
  char *v50; // rdx
  char *v51; // rcx
  __int64 v52; // rsi
  _DWORD *v53; // r8
  unsigned __int64 v54; // rdx
  unsigned __int64 v55; // rcx
  void *v56; // r15
  unsigned __int64 v58; // rax
  char *v59; // rax
  char v61; // fps^1
  char *v65; // rdx
  char *v66; // rdi
  int v67; // r11d
  __int64 v68; // rcx
  _DWORD *v69; // rcx
  char *v70; // rdi
  unsigned __int64 v71; // r9
  int v72; // eax
  int v73; // edx
  __int64 v74; // rax
  bool v75; // cf
  unsigned __int64 v76; // rax
  bool v77; // bl
  char *v78; // rax
  int v79; // ebx
  __int64 v80; // rax
  char *v81; // rdi
  long double v82; // fst7
  __int64 v83; // rax
  char *v84; // rdi
  double v85; // xmm0_8
  unsigned __int64 v86; // rax
  void *v87; // rax
  char *v88; // rax
  char *v89; // rcx
  int v90; // r8d
  __int16 v91; // ax
  char *v92; // r15
  char *v93; // rax
  char *v94; // rax
  char *v95; // rax
  char v96; // al
  char *v97; // r9
  size_t v98; // r8
  unsigned __int64 v99; // r10
  char *v100; // rdi
  __int64 v101; // rax
  char *v102; // r10
  unsigned __int64 v103; // rax
  char *v104; // rax
  char *v105; // rsi
  char v106; // al
  size_t v107; // r15
  size_t v108; // r14
  bool v109; // r13
  char *v110; // rax
  char *v111; // rax
  __int64 v112; // rax
  char *v113; // r10
  char *v114; // rax
  char *v115; // rax
  char *v116; // rax
  __int64 v117; // rsi
  __int64 v118; // rdx
  char v119; // al
  __int64 v120; // rdx
  char *v121; // rax
  char *v122; // rax
  __int64 v123; // rdx
  char v124; // al
  char *v125; // rax
  char *v126; // rsi
  __int64 v127; // r9
  __int64 v128; // rdx
  char *v129; // rax
  char *v130; // rsi
  char *v131; // rdi
  __int64 v132; // rax
  __int64 v133; // rsi
  unsigned __int64 v134; // rax
  char v135; // al
  __int64 v136; // rsi
  char v137; // al
  char *v138; // rax
  __int64 v139; // rdx
  char v140; // al
  char *v141; // rax
  char *v142; // rax
  char *v143; // rax
  void *v144; // rdx
  char v145; // al
  _BYTE *v146; // rax
  char *v147; // rax
  char v148; // al
  int *v149; // [rsp+10h] [rbp-700h]
  int *v150; // [rsp+18h] [rbp-6F8h]
  __int64 v151; // [rsp+20h] [rbp-6F0h] BYREF
  unsigned __int64 v152; // [rsp+28h] [rbp-6E8h]
  char *v153; // [rsp+30h] [rbp-6E0h]
  void *ptr; // [rsp+38h] [rbp-6D8h]
  size_t *v155; // [rsp+40h] [rbp-6D0h]
  void *v156; // [rsp+48h] [rbp-6C8h]
  char *v157; // [rsp+50h] [rbp-6C0h]
  __int64 v158; // [rsp+58h] [rbp-6B8h]
  _BYTE *v159; // [rsp+60h] [rbp-6B0h]
  char *v160; // [rsp+68h] [rbp-6A8h]
  long double v161; // [rsp+70h] [rbp-6A0h]
  void *v162; // [rsp+80h] [rbp-690h]
  void *src; // [rsp+88h] [rbp-688h]
  int v164; // [rsp+94h] [rbp-67Ch] BYREF
  unsigned int v165; // [rsp+98h] [rbp-678h]
  unsigned int v166; // [rsp+9Ch] [rbp-674h]
  char v167[8]; // [rsp+A0h] [rbp-670h] BYREF
  void *v168; // [rsp+A8h] [rbp-668h]
  _BYTE v169[224]; // [rsp+B0h] [rbp-660h] BYREF
  __int64 v170; // [rsp+190h] [rbp-580h] BYREF
  void *v171; // [rsp+198h] [rbp-578h]
  __int64 v172; // [rsp+1A0h] [rbp-570h]
  __int64 v173; // [rsp+1A8h] [rbp-568h]
  _BYTE v174[624]; // [rsp+1B0h] [rbp-560h] BYREF
  char v175[752]; // [rsp+420h] [rbp-2F0h] BYREF

  src = a1;
  v155 = a2;
  if ( (int)sub_411CE0(a3, &v170, v167) < 0 )
    return 0LL;
  if ( (int)sub_411AC0(a4, v167) >= 0 )
  {
    v6 = v172 + 7;
    if ( (unsigned __int64)(v172 + 7) <= 6 )
      v6 = -1LL;
    v75 = __CFADD__(v173, v6);
    v7 = v173 + v6;
    if ( v75 )
      goto LABEL_112;
    v8 = v7 + 6;
    if ( v7 >= 0xFFFFFFFFFFFFFFFALL )
      goto LABEL_112;
    if ( v8 <= 0xF9F )
    {
      ptr = 0LL;
      v22 = alloca(v7 + 14);
      v160 = (char *)&v151;
    }
    else
    {
      if ( v7 == -7LL )
        goto LABEL_112;
      v9 = (char *)malloc(v8);
      v160 = v9;
      if ( !v9 )
        goto LABEL_112;
      ptr = v9;
    }
    v10 = 0LL;
    if ( src )
      v10 = *v155;
    v11 = (char *)v171;
    v12 = a3;
    v13 = (char *)src;
    v158 = 0LL;
    v14 = 0LL;
    v15 = *(_BYTE **)v171;
    if ( *(_BYTE **)v171 == v12 )
      goto LABEL_111;
LABEL_14:
    v16 = (void *)(v15 - v12);
    v17 = (unsigned __int64)v16 + v14;
    v18 = (size_t)v16 + v14;
    if ( __CFADD__(v16, v14) )
    {
      if ( v10 != -1LL )
        goto LABEL_88;
      v18 = -1LL;
    }
    else if ( v10 < v17 )
    {
      if ( v10 )
      {
        if ( (v10 & 0x8000000000000000LL) != 0LL )
          goto LABEL_88;
        v10 *= 2LL;
        if ( v10 >= v17 )
        {
LABEL_28:
          v19 = v13 == src;
          if ( !v13 )
            goto LABEL_19;
          goto LABEL_29;
        }
      }
      else if ( v17 <= 0xC )
      {
        v10 = 12LL;
        v19 = v13 == src;
        if ( !v13 )
        {
LABEL_19:
          v159 = v12;
          LOBYTE(v161) = v19;
          v162 = v16;
          v20 = (char *)malloc(v10);
          v16 = v162;
          v12 = v159;
          if ( !v20 )
            goto LABEL_88;
          if ( v14 && LOBYTE(v161) )
          {
            *(_QWORD *)&v161 = v159;
            v21 = (char *)memcpy(v20, v13, v14);
            v16 = v162;
            v12 = *(_BYTE **)&v161;
            v13 = v21;
          }
          else
          {
            v13 = v20;
          }
          goto LABEL_32;
        }
LABEL_29:
        if ( !v19 )
        {
          *(_QWORD *)&v161 = v12;
          v162 = v16;
          v23 = (char *)realloc(v13, v10);
          if ( !v23 )
            goto LABEL_126;
          v16 = v162;
          v12 = *(_BYTE **)&v161;
          v13 = v23;
          goto LABEL_32;
        }
        goto LABEL_19;
      }
      if ( v17 == -1LL )
        goto LABEL_88;
      v10 = (size_t)v16 + v14;
      goto LABEL_28;
    }
LABEL_32:
    memcpy(&v13[v14], v12, (size_t)v16);
    while ( v170 != v158 )
    {
      v24 = v11[72];
      v25 = *((_QWORD *)v11 + 10);
      if ( v24 == 37 )
      {
        if ( v25 != -1 )
          goto LABEL_200;
        v58 = v18 + 1;
        v14 = v18 + 1;
        if ( v18 == -1LL )
        {
          if ( v10 != -1LL )
            goto LABEL_88;
          v14 = -1LL;
        }
        else if ( v10 < v58 )
        {
          if ( v10 )
          {
            if ( (v10 & 0x8000000000000000LL) != 0LL )
              goto LABEL_88;
            v10 *= 2LL;
            if ( v10 < v58 )
              goto LABEL_238;
          }
          else
          {
            if ( v58 <= 0xC )
            {
              v10 = 12LL;
              goto LABEL_105;
            }
LABEL_238:
            if ( v18 == -2LL )
              goto LABEL_88;
            v10 = v18 + 1;
          }
LABEL_105:
          if ( v13 && v13 != src )
          {
            v59 = (char *)realloc(v13, v10);
            if ( v59 )
            {
              v13 = v59;
              goto LABEL_109;
            }
LABEL_126:
            v56 = v13;
            *(_QWORD *)&v161 = __errno_location();
            goto LABEL_127;
          }
          LOBYTE(v162) = v13 == src;
          v95 = (char *)malloc(v10);
          if ( !v95 )
            goto LABEL_88;
          if ( v18 && (_BYTE)v162 )
            v13 = (char *)memcpy(v95, v13, v18);
          else
            v13 = v95;
        }
LABEL_109:
        v13[v18] = 37;
        goto LABEL_110;
      }
      if ( v25 == -1 )
        goto LABEL_200;
      v26 = (char *)v168;
      v27 = (long double *)((char *)v168 + 32 * v25);
      v28 = *(_DWORD *)v27;
      LODWORD(v162) = *(_DWORD *)v27;
      if ( v24 != 110 )
      {
        v29 = v24 & 0xDF;
        if ( ((unsigned __int8)((v24 & 0xDF) - 69) <= 2u || v29 == 65) && (_DWORD)v162 == 12 )
        {
          _FST7 = v27[1];
          if ( _FST7 == _FST7 + _FST7 )
          {
            v65 = (char *)*((_QWORD *)v11 + 3);
            v66 = (char *)*((_QWORD *)v11 + 4);
            v67 = *((_DWORD *)v11 + 4);
            if ( v65 == v66 )
            {
              v49 = 0LL;
            }
            else
            {
              v68 = *((_QWORD *)v11 + 5);
              if ( v68 == -1 )
              {
                v49 = 0LL;
                v162 = (void *)-1LL;
                while ( 1 )
                {
                  v126 = v65 + 1;
                  v127 = -1LL;
                  v128 = *v65 - 48;
                  if ( v49 <= 0x1999999999999999LL )
                    v127 = 10 * v49;
                  v75 = __CFADD__(v127, v128);
                  v49 = v127 + v128;
                  v65 = v126;
                  if ( v75 )
                  {
                    if ( v66 == v126 )
                    {
LABEL_81:
                      v49 = (unsigned __int64)v162;
                      goto LABEL_82;
                    }
                    while ( *v65++ != 48 )
                    {
                      if ( v66 == v65 )
                        goto LABEL_81;
                    }
                    v49 = -1LL;
                  }
                  if ( v66 == v65 )
                    goto LABEL_82;
                }
              }
              v69 = (char *)v168 + 32 * v68;
              if ( *v69 != 5 )
                goto LABEL_200;
              v49 = (int)v69[4];
              if ( (v49 & 0x80000000) != 0LL )
              {
                v67 |= 2u;
                v49 = -(__int64)v49;
              }
            }
LABEL_82:
            v50 = (char *)*((_QWORD *)v11 + 6);
            v51 = (char *)*((_QWORD *)v11 + 7);
            if ( v50 != v51 )
            {
              v52 = *((_QWORD *)v11 + 8);
              if ( v52 == -1 )
              {
                v129 = v50 + 1;
                v54 = 0LL;
                if ( v51 != v129 )
                {
                  v130 = v129;
                  while ( 1 )
                  {
                    v131 = v130 + 1;
                    v132 = *v130 - 48;
                    v133 = -1LL;
                    if ( v54 <= 0x1999999999999999LL )
                      v133 = 10 * v54;
                    v75 = __CFADD__(v133, v132);
                    v134 = v133 + v132;
                    v130 = v131;
                    v54 = v134;
                    if ( v75 )
                    {
                      if ( v51 == v131 )
                        goto LABEL_88;
                      while ( 1 )
                      {
                        v130 = v131 + 1;
                        if ( *v131 == 48 )
                          break;
                        if ( v51 == v130 )
                          goto LABEL_88;
                        ++v131;
                      }
                      v54 = -1LL;
                    }
                    if ( v51 == v130 )
                      goto LABEL_86;
                  }
                }
                goto LABEL_375;
              }
              v53 = (char *)v168 + 32 * v52;
              if ( *v53 != 5 )
                goto LABEL_200;
              v54 = (int)v53[4];
              if ( (v54 & 0x80000000) == 0LL )
              {
LABEL_86:
                if ( v54 )
                {
                  v55 = v54 + 12;
                  if ( v54 >= 0xFFFFFFFFFFFFFFF4LL )
                    goto LABEL_88;
LABEL_190:
                  v86 = v55;
                  if ( v49 >= v55 )
                    v86 = v49;
                  v75 = __CFADD__(v86, 1LL);
                  v87 = (void *)(v86 + 1);
                  v162 = v87;
                  if ( v75 )
                    goto LABEL_88;
                  if ( (unsigned __int64)v87 <= 0x2BC )
                  {
                    v89 = v175;
                  }
                  else
                  {
                    v156 = (void *)v49;
                    v157 = (char *)v54;
                    LODWORD(v159) = v67;
                    v161 = _FST7;
                    if ( v87 == (void *)-1LL )
                      goto LABEL_88;
                    v88 = (char *)malloc((size_t)v87);
                    v67 = (int)v159;
                    _FST7 = v161;
                    v89 = v88;
                    v54 = (unsigned __int64)v157;
                    v49 = (unsigned __int64)v156;
                    if ( !v88 )
                      goto LABEL_88;
                  }
                  v90 = (unsigned __int16)v165;
                  LOBYTE(v91) = v165;
                  HIBYTE(v91) = BYTE1(v165) | 3;
                  LOWORD(v165) = v91;
                  __asm (" fxam ");
                  if ( (v61 & 2) != 0 )
                  {
                    *v89 = 45;
                    _FST7 = -_FST7;
                    v92 = v89 + 1;
                  }
                  else if ( (v67 & 4) != 0 )
                  {
                    v92 = v89 + 1;
                    *v89 = 43;
                  }
                  else
                  {
                    v92 = v89;
                    if ( (v67 & 8) != 0 )
                    {
                      v92 = v89 + 1;
                      *v89 = 32;
                    }
                  }
                  if ( _FST7 > 0.0 )
                  {
                    if ( _FST7 + _FST7 != _FST7 )
                      goto LABEL_200;
                    v97 = v92 + 3;
                    if ( (unsigned __int8)(v11[72] - 65) > 0x19u )
                    {
                      v92[2] = 102;
                      *(_WORD *)v92 = 28265;
                    }
                    else
                    {
                      v92[2] = 70;
                      *(_WORD *)v92 = 20041;
                    }
                    v92 = 0LL;
                    goto LABEL_263;
                  }
                  if ( _FST7 != 0.0 )
                    goto LABEL_200;
                  v96 = v11[72] & 0xDF;
                  switch ( v96 )
                  {
                    case 'F':
                      *v92 = 48;
                      if ( (v67 & 0x10) != 0 || v54 )
                      {
                        LODWORD(v152) = v90;
                        v153 = (char *)v49;
                        v156 = v89;
                        v157 = (char *)v54;
                        LODWORD(v159) = v67;
                        *(_QWORD *)&v161 = v92 + 2;
                        v122 = nl_langinfo(0x10000);
                        v123 = (__int64)v157;
                        v97 = *(char **)&v161;
                        v124 = *v122;
                        LOBYTE(v67) = (_BYTE)v159;
                        v89 = (char *)v156;
                        v49 = (unsigned __int64)v153;
                        LOWORD(v90) = v152;
                        if ( !v124 )
                          v124 = 46;
                        v92[1] = v124;
                        if ( v123 )
                        {
                          v125 = v97;
                          do
                            *v125++ = 48;
                          while ( v125 != &v92[v123 + 2] );
                          v97 += v123;
                        }
                        goto LABEL_263;
                      }
                      goto LABEL_262;
                    case 'E':
                      *v92 = 48;
                      if ( (v67 & 0x10) != 0 || (v105 = v92 + 1, v54) )
                      {
                        LODWORD(v152) = v90;
                        v153 = (char *)v49;
                        v156 = v89;
                        v157 = (char *)v54;
                        LODWORD(v159) = v67;
                        *(_QWORD *)&v161 = v92 + 2;
                        v138 = nl_langinfo(0x10000);
                        v139 = (__int64)v157;
                        v105 = *(char **)&v161;
                        v140 = *v138;
                        LOBYTE(v67) = (_BYTE)v159;
                        v89 = (char *)v156;
                        v49 = (unsigned __int64)v153;
                        LOWORD(v90) = v152;
                        if ( !v140 )
                          v140 = 46;
                        v92[1] = v140;
                        if ( v139 )
                        {
                          v141 = v105;
                          do
                            *v141++ = 48;
                          while ( v141 != &v92[v139 + 2] );
                          v105 += v139;
                        }
                      }
                      v106 = v11[72];
                      v97 = v105 + 4;
                      v105[3] = 48;
                      *v105 = v106;
                      *(_WORD *)(v105 + 1) = 12331;
                      goto LABEL_263;
                    case 'G':
                      *v92 = 48;
                      if ( (v67 & 0x10) != 0 )
                      {
                        if ( v54 )
                        {
                          HIDWORD(v151) = v90;
                          v152 = v49;
                          v153 = v92 + 2;
                          v156 = v89;
                          LODWORD(v157) = v67;
                          v159 = (_BYTE *)v54;
                          *(_QWORD *)&v161 = v54 - 1;
                          v116 = nl_langinfo(0x10000);
                          v117 = *(_QWORD *)&v161;
                          v118 = (__int64)v159;
                          v119 = *v116;
                          LOBYTE(v67) = (_BYTE)v157;
                          v89 = (char *)v156;
                          v97 = v153;
                          v49 = v152;
                          LOWORD(v90) = WORD2(v151);
                          if ( !v119 )
                            v119 = 46;
                          v92[1] = v119;
                          if ( v117 )
                          {
                            v120 = (__int64)&v92[v118 + 1];
                            v121 = v97;
                            do
                              *v121++ = 48;
                            while ( v121 != (char *)v120 );
                            v97 += v117;
                          }
                        }
                        else
                        {
                          LODWORD(v153) = v90;
                          v156 = (void *)v49;
                          v157 = v92 + 2;
                          v159 = v89;
                          LODWORD(v161) = v67;
                          v147 = nl_langinfo(0x10000);
                          LOBYTE(v67) = LOBYTE(v161);
                          v89 = v159;
                          v148 = *v147;
                          v97 = v157;
                          v49 = (unsigned __int64)v156;
                          LOWORD(v90) = (_WORD)v153;
                          if ( !v148 )
                            v148 = 46;
                          v92[1] = v148;
                        }
                        goto LABEL_263;
                      }
LABEL_262:
                      v97 = v92 + 1;
                      goto LABEL_263;
                  }
                  if ( v96 != 65 )
                    goto LABEL_200;
                  *v92 = 48;
                  *(_QWORD *)&v161 = v92 + 2;
                  v135 = v11[72];
                  v92[2] = 48;
                  v92[1] = v135 + 23;
                  if ( (v67 & 0x10) != 0 || (v136 = (__int64)(v92 + 3), v54) )
                  {
                    HIDWORD(v151) = v90;
                    v152 = v49;
                    v153 = v89;
                    v156 = (void *)v54;
                    LODWORD(v157) = v67;
                    v159 = v92 + 4;
                    v143 = nl_langinfo(0x10000);
                    v144 = v156;
                    v136 = (__int64)v159;
                    v145 = *v143;
                    LOBYTE(v67) = (_BYTE)v157;
                    v89 = v153;
                    v49 = v152;
                    LOWORD(v90) = WORD2(v151);
                    if ( !v145 )
                      v145 = 46;
                    v92[3] = v145;
                    if ( v144 )
                    {
                      v146 = (_BYTE *)v136;
                      do
                        *v146++ = 48;
                      while ( v146 != (_BYTE *)v144 + (_QWORD)v92 + 4 );
                      v136 += (__int64)v144;
                    }
                  }
                  v137 = v11[72];
                  v97 = (char *)(v136 + 3);
                  *(_WORD *)(v136 + 1) = 12331;
                  v92 = *(char **)&v161;
                  *(_BYTE *)v136 = v137 + 15;
LABEL_263:
                  LOWORD(v165) = v90;
                  v98 = v97 - v89;
                  if ( v49 > v97 - v89 )
                  {
                    v99 = v49 - v98;
                    v100 = &v97[v99];
                    v98 = &v97[v99] - v89;
                    if ( (v67 & 2) != 0 )
                    {
                      if ( v99 )
                      {
                        do
                          *v97++ = 32;
                        while ( v100 != v97 );
                      }
                    }
                    else if ( (v67 & 0x20) != 0 && v92 )
                    {
                      if ( v92 >= v97 )
                      {
                        v92 = v97;
                      }
                      else
                      {
                        v101 = -1LL;
                        do
                        {
                          v100[v101] = v97[v101];
                          --v101;
                        }
                        while ( v101 != v92 - 1 - v97 );
                      }
                      if ( v99 )
                      {
                        v102 = &v92[v99];
                        do
                          *v92++ = 48;
                        while ( v92 != v102 );
                      }
                    }
                    else
                    {
                      v112 = -1LL;
                      if ( v89 < v97 )
                      {
                        do
                        {
                          v100[v112] = v97[v112];
                          --v112;
                        }
                        while ( v89 - 1 - v97 != v112 );
                        v97 = v89;
                      }
                      if ( v99 )
                      {
                        v113 = &v97[v99];
                        do
                          *v97++ = 32;
                        while ( v97 != v113 );
                      }
                    }
                  }
                  if ( (unsigned __int64)v162 <= v98 )
                    goto LABEL_200;
                  v103 = v98 + v18;
                  v14 = v98 + v18;
                  if ( v10 - v18 <= v98 )
                  {
                    if ( __CFADD__(v98, v18) )
                    {
                      if ( v10 != -1LL )
                        goto LABEL_88;
                    }
                    else if ( v10 < v103 )
                    {
                      if ( v10 )
                      {
                        if ( (v10 & 0x8000000000000000LL) != 0LL )
                          goto LABEL_88;
                        v10 *= 2LL;
                        if ( v10 < v103 )
                          goto LABEL_373;
                      }
                      else
                      {
                        if ( v103 <= 0xC )
                        {
                          v10 = 12LL;
                          goto LABEL_280;
                        }
LABEL_373:
                        if ( v103 == -1LL )
                          goto LABEL_88;
                        v10 = v98 + v18;
                      }
LABEL_280:
                      if ( !v13 || v13 == src )
                      {
                        LOBYTE(v159) = v13 == src;
                        *(_QWORD *)&v161 = v98;
                        v162 = v89;
                        v114 = (char *)malloc(v10);
                        v89 = (char *)v162;
                        v98 = *(_QWORD *)&v161;
                        if ( !v114 )
                          goto LABEL_88;
                        if ( v18 && (_BYTE)v159 )
                        {
                          v115 = (char *)memcpy(v114, v13, v18);
                          v89 = (char *)v162;
                          v98 = *(_QWORD *)&v161;
                          v13 = v115;
                        }
                        else
                        {
                          v13 = v114;
                        }
                      }
                      else
                      {
                        *(_QWORD *)&v161 = v98;
                        v162 = v89;
                        v104 = (char *)realloc(v13, v10);
                        if ( !v104 )
                          goto LABEL_88;
                        v89 = (char *)v162;
                        v98 = *(_QWORD *)&v161;
                        v13 = v104;
                      }
                    }
                  }
                  v162 = v89;
                  memcpy(&v13[v18], v89, v98);
                  if ( v162 != v175 )
                    free(v162);
                  goto LABEL_110;
                }
LABEL_375:
                v55 = 12LL;
                goto LABEL_190;
              }
            }
            v55 = 12LL;
            if ( v29 != 65 )
              v55 = 18LL;
            v54 = 0LL;
            if ( v29 != 65 )
              v54 = 6LL;
            goto LABEL_190;
          }
        }
        v30 = *((_DWORD *)v11 + 4);
        v31 = v160 + 1;
        *v160 = 37;
        if ( (v30 & 1) != 0 )
        {
          v32 = v160;
          v160[1] = 39;
          v31 = (char *)(v32 + 2);
        }
        if ( (v30 & 2) != 0 )
          *v31++ = 45;
        if ( (v30 & 4) != 0 )
          *v31++ = 43;
        if ( (v30 & 8) != 0 )
          *v31++ = 32;
        if ( (v30 & 0x10) != 0 )
          *v31++ = 35;
        if ( (v30 & 0x40) != 0 )
          *v31++ = 73;
        if ( (v30 & 0x20) != 0 )
          *v31++ = 48;
        v33 = (_BYTE *)*((_QWORD *)v11 + 3);
        v34 = (_BYTE *)*((_QWORD *)v11 + 4);
        if ( v33 != v34 )
        {
          v159 = v26;
          *(_QWORD *)&v161 = v34 - v33;
          memcpy(v31, v33, v34 - v33);
          v26 = v159;
          v31 += *(_QWORD *)&v161;
        }
        v35 = (_BYTE *)*((_QWORD *)v11 + 6);
        v36 = (_BYTE *)*((_QWORD *)v11 + 7);
        if ( v35 != v36 )
        {
          v159 = v26;
          *(_QWORD *)&v161 = v36 - v35;
          memcpy(v31, v35, v36 - v35);
          v26 = v159;
          v31 += *(_QWORD *)&v161;
        }
        if ( (unsigned int)v162 <= 0x10 )
        {
          v37 = 1LL << (char)v162;
          if ( ((1LL << (char)v162) & 0x14180) != 0 )
            goto LABEL_125;
          if ( (v37 & 0x1000) != 0 )
          {
            *v31++ = 76;
          }
          else
          {
            if ( (v37 & 0x600) == 0 )
              goto LABEL_62;
            *v31++ = 108;
LABEL_125:
            *v31++ = 108;
          }
        }
LABEL_62:
        v38 = v11[72];
        v31[1] = 0;
        *v31 = v38;
        v39 = *((_QWORD *)v11 + 5);
        if ( v39 != -1 )
        {
          v40 = &v26[32 * v39];
          if ( *(_DWORD *)v40 == 5 )
          {
            LODWORD(v159) = 1;
            v165 = *((_DWORD *)v40 + 4);
            goto LABEL_65;
          }
LABEL_200:
          abort();
        }
        LODWORD(v159) = 0;
LABEL_65:
        v41 = *((_QWORD *)v11 + 8);
        if ( v41 != -1 )
        {
          v42 = &v26[32 * v41];
          if ( *(_DWORD *)v42 != 5 )
            goto LABEL_200;
          v43 = (int)v159;
          *(&v165 + (unsigned int)v159) = *((_DWORD *)v42 + 4);
          LODWORD(v159) = v43 + 1;
        }
        v44 = v18 + 2;
        if ( v18 >= 0xFFFFFFFFFFFFFFFELL )
        {
          if ( v10 != -1LL )
            goto LABEL_88;
        }
        else if ( v10 < v44 )
        {
          if ( v10 )
          {
            if ( (v10 & 0x8000000000000000LL) != 0LL )
              goto LABEL_88;
            v10 *= 2LL;
            if ( v10 >= v44 )
              goto LABEL_73;
          }
          else if ( v44 <= 0xC )
          {
            v10 = 12LL;
LABEL_73:
            if ( v13 && v13 != src )
            {
              v45 = (char *)realloc(v13, v10);
              if ( v45 )
                goto LABEL_76;
LABEL_88:
              v56 = v13;
              *(_QWORD *)&v161 = __errno_location();
LABEL_89:
              if ( v56 == src || !v56 )
              {
LABEL_91:
                if ( ptr )
                {
                  free(ptr);
LABEL_93:
                  if ( v171 != v174 )
                    free(v171);
                  if ( v168 != v169 )
                    free(v168);
                  v13 = 0LL;
                  **(_DWORD **)&v161 = 12;
                  return v13;
                }
LABEL_112:
                *(_QWORD *)&v161 = __errno_location();
                goto LABEL_93;
              }
LABEL_127:
              free(v56);
              goto LABEL_91;
            }
            LOBYTE(v161) = v13 == src;
            v94 = (char *)malloc(v10);
            v45 = v94;
            if ( !v94 )
              goto LABEL_88;
            if ( v18 && LOBYTE(v161) )
              v45 = (char *)memcpy(v94, v13, v18);
LABEL_76:
            v45[v18] = 0;
            v157 = v45;
            v46 = __errno_location();
            v47 = v157;
            v157 = v31;
            *(_QWORD *)&v161 = v46;
            LODWORD(v153) = *v46;
            while ( 2 )
            {
              v48 = 0x7FFFFFFFLL;
              v164 = -1;
              **(_DWORD **)&v161 = 0;
              if ( v10 - v18 <= 0x7FFFFFFF )
                v48 = v10 - v18;
              switch ( (int)v162 )
              {
                case 1:
                  v71 = (unsigned int)*((char *)v168 + 32 * *((_QWORD *)v11 + 10) + 16);
                  goto LABEL_150;
                case 2:
                  v71 = *((unsigned __int8 *)v168 + 32 * *((_QWORD *)v11 + 10) + 16);
                  goto LABEL_150;
                case 3:
                  v71 = (unsigned int)*((__int16 *)v168 + 16 * *((_QWORD *)v11 + 10) + 8);
                  goto LABEL_150;
                case 4:
                  v71 = *((unsigned __int16 *)v168 + 16 * *((_QWORD *)v11 + 10) + 8);
                  goto LABEL_150;
                case 5:
                case 6:
                case 13:
                case 14:
                  v71 = *((unsigned int *)v168 + 8 * *((_QWORD *)v11 + 10) + 4);
LABEL_150:
                  v70 = &v47[v18];
                  v156 = v47;
                  if ( (_DWORD)v159 != 1 )
                  {
                    if ( (_DWORD)v159 != 2 )
                    {
                      v149 = &v164;
                      goto LABEL_153;
                    }
                    goto LABEL_209;
                  }
                  v150 = &v164;
                  v149 = (int *)v71;
                  break;
                case 7:
                case 8:
                case 9:
                case 10:
                case 15:
                case 16:
                case 17:
                  v70 = &v47[v18];
                  v71 = *((_QWORD *)v168 + 4 * *((_QWORD *)v11 + 10) + 2);
                  v156 = v47;
                  if ( (_DWORD)v159 != 1 )
                  {
                    if ( (_DWORD)v159 != 2 )
                    {
                      v72 = ((__int64 (*)(char *, unsigned __int64, __int64, __int64, const char *, ...))__snprintf_chk)(
                              v70,
                              v48,
                              1LL,
                              -1LL,
                              v160,
                              v71,
                              &v164,
                              v150);
LABEL_131:
                      v47 = (char *)v156;
                      goto LABEL_132;
                    }
LABEL_209:
                    v72 = ((__int64 (*)(char *, unsigned __int64, __int64, __int64, const char *, ...))__snprintf_chk)(
                            v70,
                            v48,
                            1LL,
                            -1LL,
                            v160,
                            v165,
                            v166,
                            v71,
                            &v164);
LABEL_210:
                    v47 = (char *)v156;
LABEL_132:
                    v73 = v164;
                    if ( v164 < 0 )
                    {
LABEL_154:
                      if ( v157[1] )
                      {
                        v157[1] = 0;
                        continue;
                      }
                      if ( v72 < 0 )
                      {
                        v79 = **(_DWORD **)&v161;
                        if ( !**(_DWORD **)&v161 )
                        {
                          v79 = 84;
                          if ( (v11[72] & 0xEF) != 99 )
                            v79 = 22;
                        }
                        if ( v47 != src && v47 )
                          free(v47);
                        if ( ptr )
                          free(ptr);
                        if ( v171 != v174 )
                          free(v171);
                        if ( v168 != v169 )
                          free(v168);
                        **(_DWORD **)&v161 = v79;
                        return 0LL;
                      }
LABEL_136:
                      v164 = v72;
                      v73 = v72;
LABEL_137:
                      if ( (unsigned int)(v73 + 1) < v48 )
                      {
                        v13 = v47;
                        v14 = v18 + v73;
                        **(_DWORD **)&v161 = (_DWORD)v153;
                        goto LABEL_110;
                      }
                      if ( v10 - v18 > 0x7FFFFFFE )
                      {
                        if ( v47 != src && v47 )
                          free(v47);
                        if ( ptr )
                          free(ptr);
                        if ( v171 != v174 )
                          free(v171);
                        if ( v168 != v169 )
                          free(v168);
                        v13 = 0LL;
                        **(_DWORD **)&v161 = 75;
                        return v13;
                      }
                      v74 = (unsigned int)(v73 + 2);
                      v75 = __CFADD__(v18, v74);
                      v76 = v18 + v74;
                      if ( (v10 & 0x8000000000000000LL) != 0LL )
                      {
                        if ( v10 != -1LL )
                          goto LABEL_202;
                      }
                      else
                      {
                        if ( v75 )
                          goto LABEL_202;
                        if ( 2 * v10 >= v76 )
                          v76 = 2 * v10;
                        if ( v10 < v76 )
                        {
                          v10 *= 2LL;
                          if ( v10 < v76 )
                          {
                            if ( v76 == -1LL )
                            {
LABEL_202:
                              v56 = v47;
                              goto LABEL_89;
                            }
                            v10 = v76;
                          }
                          v77 = v47 == src;
                          if ( !v47 || v47 == src )
                          {
                            v156 = v47;
                            v93 = (char *)malloc(v10);
                            v47 = (char *)v156;
                            if ( !v93 )
                              goto LABEL_202;
                            if ( v18 && v77 )
                              v47 = (char *)memcpy(v93, v156, v18);
                            else
                              v47 = v93;
                          }
                          else
                          {
                            v156 = v47;
                            v78 = (char *)realloc(v47, v10);
                            v47 = (char *)v156;
                            if ( !v78 )
                              goto LABEL_202;
                            v47 = v78;
                          }
                        }
                      }
                      continue;
                    }
LABEL_133:
                    if ( v73 < v48 && v47[v73 + v18] )
                      goto LABEL_200;
                    if ( v73 >= v72 )
                      goto LABEL_137;
                    goto LABEL_136;
                  }
                  v150 = &v164;
                  v149 = (int *)v71;
                  break;
                case 11:
                  v83 = *((_QWORD *)v11 + 10);
                  v84 = &v47[v18];
                  v156 = v47;
                  v85 = *((double *)v168 + 4 * v83 + 2);
                  if ( (_DWORD)v159 == 1 )
                  {
                    v72 = ((__int64 (*)(char *, unsigned __int64, __int64, __int64, const char *, ...))__snprintf_chk)(
                            v84,
                            v48,
                            1LL,
                            -1LL,
                            v160,
                            v165,
                            v85,
                            &v164,
                            v150);
                  }
                  else
                  {
                    if ( (_DWORD)v159 != 2 )
                    {
                      v72 = ((__int64 (*)(char *, unsigned __int64, __int64, __int64, const char *, ...))__snprintf_chk)(
                              v84,
                              v48,
                              1LL,
                              -1LL,
                              v160,
                              &v164,
                              v85);
                      v47 = (char *)v156;
                      goto LABEL_132;
                    }
                    v72 = ((__int64 (*)(char *, unsigned __int64, __int64, __int64, const char *, ...))__snprintf_chk)(
                            v84,
                            v48,
                            1LL,
                            -1LL,
                            v160,
                            v165,
                            v85,
                            v166,
                            &v164);
                  }
                  v47 = (char *)v156;
                  goto LABEL_132;
                case 12:
                  v80 = *((_QWORD *)v11 + 10);
                  v81 = &v47[v18];
                  v156 = v47;
                  v82 = *((long double *)v168 + 2 * v80 + 1);
                  if ( (_DWORD)v159 == 1 )
                  {
                    v72 = ((__int64 (*)(char *, unsigned __int64, __int64, __int64, const char *, ...))__snprintf_chk)(
                            v81,
                            v48,
                            1LL,
                            -1LL,
                            v160,
                            v165,
                            *(_OWORD *)&v82,
                            &v164);
                    goto LABEL_210;
                  }
                  if ( (_DWORD)v159 != 2 )
                  {
                    v72 = ((__int64 (*)(char *, unsigned __int64, __int64, __int64, const char *, ...))__snprintf_chk)(
                            v81,
                            v48,
                            1LL,
                            -1LL,
                            v160,
                            &v164,
                            *(_OWORD *)&v82);
                    goto LABEL_131;
                  }
                  v72 = ((__int64 (*)(char *, unsigned __int64, __int64, __int64, const char *, ...))__snprintf_chk)(
                          v81,
                          v48,
                          1LL,
                          -1LL,
                          v160,
                          v165,
                          v166);
                  v47 = (char *)v156;
                  goto LABEL_132;
                default:
                  goto LABEL_408;
              }
              break;
            }
            v71 = v165;
LABEL_153:
            v72 = ((__int64 (*)(char *, unsigned __int64, __int64, __int64, const char *, ...))__snprintf_chk)(
                    v70,
                    v48,
                    1LL,
                    -1LL,
                    v160,
                    v71,
                    v149,
                    v150);
            v73 = v164;
            v47 = (char *)v156;
            if ( v164 < 0 )
              goto LABEL_154;
            goto LABEL_133;
          }
          if ( v18 != -3LL )
          {
            v10 = v18 + 2;
            goto LABEL_73;
          }
          goto LABEL_88;
        }
        v45 = v13;
        goto LABEL_76;
      }
      switch ( v28 )
      {
        case 18:
          v14 = v18;
          **((_BYTE **)v27 + 2) = v18;
          break;
        case 19:
          v14 = v18;
          **((_WORD **)v27 + 2) = v18;
          break;
        case 20:
          v14 = v18;
          **((_DWORD **)v27 + 2) = v18;
          break;
        case 21:
        case 22:
          v14 = v18;
          **((_QWORD **)v27 + 2) = v18;
          break;
        default:
LABEL_408:
          abort();
      }
LABEL_110:
      v12 = (_BYTE *)*((_QWORD *)v11 + 1);
      v11 += 88;
      v15 = *(_BYTE **)v11;
      ++v158;
      if ( v15 != v12 )
        goto LABEL_14;
LABEL_111:
      v18 = v14;
    }
    v107 = v18;
    v108 = v18 + 1;
    if ( v18 == -1LL )
    {
      if ( v10 != -1LL )
        goto LABEL_88;
    }
    else if ( v10 < v108 )
    {
      if ( v10 )
      {
        if ( (v10 & 0x8000000000000000LL) != 0LL )
          goto LABEL_88;
        v10 *= 2LL;
        if ( v10 >= v108 )
        {
LABEL_303:
          v109 = v13 == src;
          if ( !v13 || v13 == src )
          {
            v142 = (char *)malloc(v10);
            if ( !v142 )
              goto LABEL_88;
            if ( v107 && v109 )
              v13 = (char *)memcpy(v142, v13, v107);
            else
              v13 = v142;
          }
          else
          {
            v110 = (char *)realloc(v13, v10);
            if ( !v110 )
              goto LABEL_126;
            v13 = v110;
          }
          goto LABEL_307;
        }
      }
      else if ( v108 <= 0xC )
      {
        v10 = 12LL;
        goto LABEL_303;
      }
      if ( v18 == -2LL )
        goto LABEL_88;
      v10 = v18 + 1;
      goto LABEL_303;
    }
LABEL_307:
    v13[v107] = 0;
    if ( v10 > v108 && v13 != src )
    {
      v111 = (char *)realloc(v13, v108);
      if ( v111 )
        v13 = v111;
    }
    if ( ptr )
      free(ptr);
    if ( v171 != v174 )
      free(v171);
    if ( v168 != v169 )
      free(v168);
    *v155 = v107;
    return v13;
  }
  if ( v171 != v174 )
    free(v171);
  if ( v168 != v169 )
    free(v168);
  v13 = 0LL;
  *__errno_location() = 22;
  return v13;
}

char *__fastcall sub_40FFA0(void *a1, size_t *a2, _BYTE *a3, __int64 a4)
{
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  size_t v8; // rdi
  char *v9; // rax
  size_t v10; // r12
  char *v11; // r14
  _BYTE *v12; // r8
  char *v13; // rbx
  size_t v14; // r15
  _BYTE *v15; // rcx
  void *v16; // rcx
  unsigned __int64 v17; // rax
  size_t v18; // r13
  bool v19; // dl
  char *v20; // rax
  char *v21; // rax
  void *v22; // rsp
  char *v23; // rax
  char v24; // r15
  __int64 v25; // rax
  char *v26; // r8
  long double *v27; // rdx
  int v28; // eax
  char v29; // al
  int v30; // eax
  char *v31; // r15
  const char *v32; // rdi
  _BYTE *v33; // rsi
  _BYTE *v34; // rdx
  _BYTE *v35; // rsi
  _BYTE *v36; // rdx
  __int64 v37; // rax
  char v38; // al
  __int64 v39; // rax
  char *v40; // rax
  __int64 v41; // rax
  char *v42; // r8
  int v43; // eax
  unsigned __int64 v44; // rax
  char *v45; // r11
  int *v46; // rax
  char *v47; // r11
  unsigned __int64 v48; // rbx
  unsigned __int64 v49; // r10
  char *v50; // rdx
  char *v51; // rcx
  __int64 v52; // rsi
  _DWORD *v53; // r8
  unsigned __int64 v54; // rdx
  unsigned __int64 v55; // rcx
  void *v56; // r15
  unsigned __int64 v58; // rax
  char *v59; // rax
  char v61; // fps^1
  char *v65; // rdx
  char *v66; // rdi
  int v67; // r11d
  __int64 v68; // rcx
  _DWORD *v69; // rcx
  char *v70; // rdi
  unsigned __int64 v71; // r9
  int v72; // eax
  int v73; // edx
  __int64 v74; // rax
  bool v75; // cf
  unsigned __int64 v76; // rax
  bool v77; // bl
  char *v78; // rax
  int v79; // ebx
  __int64 v80; // rax
  char *v81; // rdi
  long double v82; // fst7
  __int64 v83; // rax
  char *v84; // rdi
  double v85; // xmm0_8
  unsigned __int64 v86; // rax
  void *v87; // rax
  char *v88; // rax
  char *v89; // rcx
  int v90; // r8d
  __int16 v91; // ax
  char *v92; // r15
  char *v93; // rax
  char *v94; // rax
  char *v95; // rax
  char v96; // al
  char *v97; // r9
  size_t v98; // r8
  unsigned __int64 v99; // r10
  char *v100; // rdi
  __int64 v101; // rax
  char *v102; // r10
  unsigned __int64 v103; // rax
  char *v104; // rax
  char *v105; // rsi
  char v106; // al
  size_t v107; // r15
  size_t v108; // r14
  bool v109; // r13
  char *v110; // rax
  char *v111; // rax
  __int64 v112; // rax
  char *v113; // r10
  char *v114; // rax
  char *v115; // rax
  char *v116; // rax
  __int64 v117; // rsi
  __int64 v118; // rdx
  char v119; // al
  __int64 v120; // rdx
  char *v121; // rax
  char *v122; // rax
  __int64 v123; // rdx
  char v124; // al
  char *v125; // rax
  char *v126; // rsi
  __int64 v127; // r9
  __int64 v128; // rdx
  char *v129; // rax
  char *v130; // rsi
  char *v131; // rdi
  __int64 v132; // rax
  __int64 v133; // rsi
  unsigned __int64 v134; // rax
  char v135; // al
  __int64 v136; // rsi
  char v137; // al
  char *v138; // rax
  __int64 v139; // rdx
  char v140; // al
  char *v141; // rax
  char *v142; // rax
  char *v143; // rax
  void *v144; // rdx
  char v145; // al
  _BYTE *v146; // rax
  char *v147; // rax
  char v148; // al
  int *v149; // [rsp+10h] [rbp-700h]
  int *v150; // [rsp+18h] [rbp-6F8h]
  __int64 v151; // [rsp+20h] [rbp-6F0h] BYREF
  unsigned __int64 v152; // [rsp+28h] [rbp-6E8h]
  char *v153; // [rsp+30h] [rbp-6E0h]
  void *ptr; // [rsp+38h] [rbp-6D8h]
  size_t *v155; // [rsp+40h] [rbp-6D0h]
  void *v156; // [rsp+48h] [rbp-6C8h]
  char *v157; // [rsp+50h] [rbp-6C0h]
  __int64 v158; // [rsp+58h] [rbp-6B8h]
  _BYTE *v159; // [rsp+60h] [rbp-6B0h]
  char *v160; // [rsp+68h] [rbp-6A8h]
  long double v161; // [rsp+70h] [rbp-6A0h]
  void *v162; // [rsp+80h] [rbp-690h]
  void *src; // [rsp+88h] [rbp-688h]
  int v164; // [rsp+94h] [rbp-67Ch] BYREF
  unsigned int v165; // [rsp+98h] [rbp-678h]
  unsigned int v166; // [rsp+9Ch] [rbp-674h]
  char v167[8]; // [rsp+A0h] [rbp-670h] BYREF
  void *v168; // [rsp+A8h] [rbp-668h]
  _BYTE v169[224]; // [rsp+B0h] [rbp-660h] BYREF
  __int64 v170; // [rsp+190h] [rbp-580h] BYREF
  void *v171; // [rsp+198h] [rbp-578h]
  __int64 v172; // [rsp+1A0h] [rbp-570h]
  __int64 v173; // [rsp+1A8h] [rbp-568h]
  _BYTE v174[624]; // [rsp+1B0h] [rbp-560h] BYREF
  char v175[752]; // [rsp+420h] [rbp-2F0h] BYREF

  src = a1;
  v155 = a2;
  if ( (int)sub_411CE0(a3, &v170, v167) < 0 )
    return 0LL;
  if ( (int)sub_411AC0(a4, v167) >= 0 )
  {
    v6 = v172 + 7;
    if ( (unsigned __int64)(v172 + 7) <= 6 )
      v6 = -1LL;
    v75 = __CFADD__(v173, v6);
    v7 = v173 + v6;
    if ( v75 )
      goto LABEL_112;
    v8 = v7 + 6;
    if ( v7 >= 0xFFFFFFFFFFFFFFFALL )
      goto LABEL_112;
    if ( v8 <= 0xF9F )
    {
      ptr = 0LL;
      v22 = alloca(v7 + 14);
      v160 = (char *)&v151;
    }
    else
    {
      if ( v7 == -7LL )
        goto LABEL_112;
      v9 = (char *)malloc(v8);
      v160 = v9;
      if ( !v9 )
        goto LABEL_112;
      ptr = v9;
    }
    v10 = 0LL;
    if ( src )
      v10 = *v155;
    v11 = (char *)v171;
    v12 = a3;
    v13 = (char *)src;
    v158 = 0LL;
    v14 = 0LL;
    v15 = *(_BYTE **)v171;
    if ( *(_BYTE **)v171 == v12 )
      goto LABEL_111;
LABEL_14:
    v16 = (void *)(v15 - v12);
    v17 = (unsigned __int64)v16 + v14;
    v18 = (size_t)v16 + v14;
    if ( __CFADD__(v16, v14) )
    {
      if ( v10 != -1LL )
        goto LABEL_88;
      v18 = -1LL;
    }
    else if ( v10 < v17 )
    {
      if ( v10 )
      {
        if ( (v10 & 0x8000000000000000LL) != 0LL )
          goto LABEL_88;
        v10 *= 2LL;
        if ( v10 >= v17 )
        {
LABEL_28:
          v19 = v13 == src;
          if ( !v13 )
            goto LABEL_19;
          goto LABEL_29;
        }
      }
      else if ( v17 <= 0xC )
      {
        v10 = 12LL;
        v19 = v13 == src;
        if ( !v13 )
        {
LABEL_19:
          v159 = v12;
          LOBYTE(v161) = v19;
          v162 = v16;
          v20 = (char *)malloc(v10);
          v16 = v162;
          v12 = v159;
          if ( !v20 )
            goto LABEL_88;
          if ( v14 && LOBYTE(v161) )
          {
            *(_QWORD *)&v161 = v159;
            v21 = (char *)memcpy(v20, v13, v14);
            v16 = v162;
            v12 = *(_BYTE **)&v161;
            v13 = v21;
          }
          else
          {
            v13 = v20;
          }
          goto LABEL_32;
        }
LABEL_29:
        if ( !v19 )
        {
          *(_QWORD *)&v161 = v12;
          v162 = v16;
          v23 = (char *)realloc(v13, v10);
          if ( !v23 )
            goto LABEL_126;
          v16 = v162;
          v12 = *(_BYTE **)&v161;
          v13 = v23;
          goto LABEL_32;
        }
        goto LABEL_19;
      }
      if ( v17 == -1LL )
        goto LABEL_88;
      v10 = (size_t)v16 + v14;
      goto LABEL_28;
    }
LABEL_32:
    memcpy(&v13[v14], v12, (size_t)v16);
    while ( v170 != v158 )
    {
      v24 = v11[72];
      v25 = *((_QWORD *)v11 + 10);
      if ( v24 == 37 )
      {
        if ( v25 != -1 )
          goto LABEL_200;
        v58 = v18 + 1;
        v14 = v18 + 1;
        if ( v18 == -1LL )
        {
          if ( v10 != -1LL )
            goto LABEL_88;
          v14 = -1LL;
        }
        else if ( v10 < v58 )
        {
          if ( v10 )
          {
            if ( (v10 & 0x8000000000000000LL) != 0LL )
              goto LABEL_88;
            v10 *= 2LL;
            if ( v10 < v58 )
              goto LABEL_238;
          }
          else
          {
            if ( v58 <= 0xC )
            {
              v10 = 12LL;
              goto LABEL_105;
            }
LABEL_238:
            if ( v18 == -2LL )
              goto LABEL_88;
            v10 = v18 + 1;
          }
LABEL_105:
          if ( v13 && v13 != src )
          {
            v59 = (char *)realloc(v13, v10);
            if ( v59 )
            {
              v13 = v59;
              goto LABEL_109;
            }
LABEL_126:
            v56 = v13;
            *(_QWORD *)&v161 = __errno_location();
            goto LABEL_127;
          }
          LOBYTE(v162) = v13 == src;
          v95 = (char *)malloc(v10);
          if ( !v95 )
            goto LABEL_88;
          if ( v18 && (_BYTE)v162 )
            v13 = (char *)memcpy(v95, v13, v18);
          else
            v13 = v95;
        }
LABEL_109:
        v13[v18] = 37;
        goto LABEL_110;
      }
      if ( v25 == -1 )
        goto LABEL_200;
      v26 = (char *)v168;
      v27 = (long double *)((char *)v168 + 32 * v25);
      v28 = *(_DWORD *)v27;
      LODWORD(v162) = *(_DWORD *)v27;
      if ( v24 != 110 )
      {
        v29 = v24 & 0xDF;
        if ( ((unsigned __int8)((v24 & 0xDF) - 69) <= 2u || v29 == 65) && (_DWORD)v162 == 12 )
        {
          _FST7 = v27[1];
          if ( _FST7 == _FST7 + _FST7 )
          {
            v65 = (char *)*((_QWORD *)v11 + 3);
            v66 = (char *)*((_QWORD *)v11 + 4);
            v67 = *((_DWORD *)v11 + 4);
            if ( v65 == v66 )
            {
              v49 = 0LL;
            }
            else
            {
              v68 = *((_QWORD *)v11 + 5);
              if ( v68 == -1 )
              {
                v49 = 0LL;
                v162 = (void *)-1LL;
                while ( 1 )
                {
                  v126 = v65 + 1;
                  v127 = -1LL;
                  v128 = *v65 - 48;
                  if ( v49 <= 0x1999999999999999LL )
                    v127 = 10 * v49;
                  v75 = __CFADD__(v127, v128);
                  v49 = v127 + v128;
                  v65 = v126;
                  if ( v75 )
                  {
                    if ( v66 == v126 )
                    {
LABEL_81:
                      v49 = (unsigned __int64)v162;
                      goto LABEL_82;
                    }
                    while ( *v65++ != 48 )
                    {
                      if ( v66 == v65 )
                        goto LABEL_81;
                    }
                    v49 = -1LL;
                  }
                  if ( v66 == v65 )
                    goto LABEL_82;
                }
              }
              v69 = (char *)v168 + 32 * v68;
              if ( *v69 != 5 )
                goto LABEL_200;
              v49 = (int)v69[4];
              if ( (v49 & 0x80000000) != 0LL )
              {
                v67 |= 2u;
                v49 = -(__int64)v49;
              }
            }
LABEL_82:
            v50 = (char *)*((_QWORD *)v11 + 6);
            v51 = (char *)*((_QWORD *)v11 + 7);
            if ( v50 != v51 )
            {
              v52 = *((_QWORD *)v11 + 8);
              if ( v52 == -1 )
              {
                v129 = v50 + 1;
                v54 = 0LL;
                if ( v51 != v129 )
                {
                  v130 = v129;
                  while ( 1 )
                  {
                    v131 = v130 + 1;
                    v132 = *v130 - 48;
                    v133 = -1LL;
                    if ( v54 <= 0x1999999999999999LL )
                      v133 = 10 * v54;
                    v75 = __CFADD__(v133, v132);
                    v134 = v133 + v132;
                    v130 = v131;
                    v54 = v134;
                    if ( v75 )
                    {
                      if ( v51 == v131 )
                        goto LABEL_88;
                      while ( 1 )
                      {
                        v130 = v131 + 1;
                        if ( *v131 == 48 )
                          break;
                        if ( v51 == v130 )
                          goto LABEL_88;
                        ++v131;
                      }
                      v54 = -1LL;
                    }
                    if ( v51 == v130 )
                      goto LABEL_86;
                  }
                }
                goto LABEL_375;
              }
              v53 = (char *)v168 + 32 * v52;
              if ( *v53 != 5 )
                goto LABEL_200;
              v54 = (int)v53[4];
              if ( (v54 & 0x80000000) == 0LL )
              {
LABEL_86:
                if ( v54 )
                {
                  v55 = v54 + 12;
                  if ( v54 >= 0xFFFFFFFFFFFFFFF4LL )
                    goto LABEL_88;
LABEL_190:
                  v86 = v55;
                  if ( v49 >= v55 )
                    v86 = v49;
                  v75 = __CFADD__(v86, 1LL);
                  v87 = (void *)(v86 + 1);
                  v162 = v87;
                  if ( v75 )
                    goto LABEL_88;
                  if ( (unsigned __int64)v87 <= 0x2BC )
                  {
                    v89 = v175;
                  }
                  else
                  {
                    v156 = (void *)v49;
                    v157 = (char *)v54;
                    LODWORD(v159) = v67;
                    v161 = _FST7;
                    if ( v87 == (void *)-1LL )
                      goto LABEL_88;
                    v88 = (char *)malloc((size_t)v87);
                    v67 = (int)v159;
                    _FST7 = v161;
                    v89 = v88;
                    v54 = (unsigned __int64)v157;
                    v49 = (unsigned __int64)v156;
                    if ( !v88 )
                      goto LABEL_88;
                  }
                  v90 = (unsigned __int16)v165;
                  LOBYTE(v91) = v165;
                  HIBYTE(v91) = BYTE1(v165) | 3;
                  LOWORD(v165) = v91;
                  __asm (" fxam ");
                  if ( (v61 & 2) != 0 )
                  {
                    *v89 = 45;
                    _FST7 = -_FST7;
                    v92 = v89 + 1;
                  }
                  else if ( (v67 & 4) != 0 )
                  {
                    v92 = v89 + 1;
                    *v89 = 43;
                  }
                  else
                  {
                    v92 = v89;
                    if ( (v67 & 8) != 0 )
                    {
                      v92 = v89 + 1;
                      *v89 = 32;
                    }
                  }
                  if ( _FST7 > 0.0 )
                  {
                    if ( _FST7 + _FST7 != _FST7 )
                      goto LABEL_200;
                    v97 = v92 + 3;
                    if ( (unsigned __int8)(v11[72] - 65) > 0x19u )
                    {
                      v92[2] = 102;
                      *(_WORD *)v92 = 28265;
                    }
                    else
                    {
                      v92[2] = 70;
                      *(_WORD *)v92 = 20041;
                    }
                    v92 = 0LL;
                    goto LABEL_263;
                  }
                  if ( _FST7 != 0.0 )
                    goto LABEL_200;
                  v96 = v11[72] & 0xDF;
                  switch ( v96 )
                  {
                    case 'F':
                      *v92 = 48;
                      if ( (v67 & 0x10) != 0 || v54 )
                      {
                        LODWORD(v152) = v90;
                        v153 = (char *)v49;
                        v156 = v89;
                        v157 = (char *)v54;
                        LODWORD(v159) = v67;
                        *(_QWORD *)&v161 = v92 + 2;
                        v122 = nl_langinfo(0x10000);
                        v123 = (__int64)v157;
                        v97 = *(char **)&v161;
                        v124 = *v122;
                        LOBYTE(v67) = (_BYTE)v159;
                        v89 = (char *)v156;
                        v49 = (unsigned __int64)v153;
                        LOWORD(v90) = v152;
                        if ( !v124 )
                          v124 = 46;
                        v92[1] = v124;
                        if ( v123 )
                        {
                          v125 = v97;
                          do
                            *v125++ = 48;
                          while ( v125 != &v92[v123 + 2] );
                          v97 += v123;
                        }
                        goto LABEL_263;
                      }
                      goto LABEL_262;
                    case 'E':
                      *v92 = 48;
                      if ( (v67 & 0x10) != 0 || (v105 = v92 + 1, v54) )
                      {
                        LODWORD(v152) = v90;
                        v153 = (char *)v49;
                        v156 = v89;
                        v157 = (char *)v54;
                        LODWORD(v159) = v67;
                        *(_QWORD *)&v161 = v92 + 2;
                        v138 = nl_langinfo(0x10000);
                        v139 = (__int64)v157;
                        v105 = *(char **)&v161;
                        v140 = *v138;
                        LOBYTE(v67) = (_BYTE)v159;
                        v89 = (char *)v156;
                        v49 = (unsigned __int64)v153;
                        LOWORD(v90) = v152;
                        if ( !v140 )
                          v140 = 46;
                        v92[1] = v140;
                        if ( v139 )
                        {
                          v141 = v105;
                          do
                            *v141++ = 48;
                          while ( v141 != &v92[v139 + 2] );
                          v105 += v139;
                        }
                      }
                      v106 = v11[72];
                      v97 = v105 + 4;
                      v105[3] = 48;
                      *v105 = v106;
                      *(_WORD *)(v105 + 1) = 12331;
                      goto LABEL_263;
                    case 'G':
                      *v92 = 48;
                      if ( (v67 & 0x10) != 0 )
                      {
                        if ( v54 )
                        {
                          HIDWORD(v151) = v90;
                          v152 = v49;
                          v153 = v92 + 2;
                          v156 = v89;
                          LODWORD(v157) = v67;
                          v159 = (_BYTE *)v54;
                          *(_QWORD *)&v161 = v54 - 1;
                          v116 = nl_langinfo(0x10000);
                          v117 = *(_QWORD *)&v161;
                          v118 = (__int64)v159;
                          v119 = *v116;
                          LOBYTE(v67) = (_BYTE)v157;
                          v89 = (char *)v156;
                          v97 = v153;
                          v49 = v152;
                          LOWORD(v90) = WORD2(v151);
                          if ( !v119 )
                            v119 = 46;
                          v92[1] = v119;
                          if ( v117 )
                          {
                            v120 = (__int64)&v92[v118 + 1];
                            v121 = v97;
                            do
                              *v121++ = 48;
                            while ( v121 != (char *)v120 );
                            v97 += v117;
                          }
                        }
                        else
                        {
                          LODWORD(v153) = v90;
                          v156 = (void *)v49;
                          v157 = v92 + 2;
                          v159 = v89;
                          LODWORD(v161) = v67;
                          v147 = nl_langinfo(0x10000);
                          LOBYTE(v67) = LOBYTE(v161);
                          v89 = v159;
                          v148 = *v147;
                          v97 = v157;
                          v49 = (unsigned __int64)v156;
                          LOWORD(v90) = (_WORD)v153;
                          if ( !v148 )
                            v148 = 46;
                          v92[1] = v148;
                        }
                        goto LABEL_263;
                      }
LABEL_262:
                      v97 = v92 + 1;
                      goto LABEL_263;
                  }
                  if ( v96 != 65 )
                    goto LABEL_200;
                  *v92 = 48;
                  *(_QWORD *)&v161 = v92 + 2;
                  v135 = v11[72];
                  v92[2] = 48;
                  v92[1] = v135 + 23;
                  if ( (v67 & 0x10) != 0 || (v136 = (__int64)(v92 + 3), v54) )
                  {
                    HIDWORD(v151) = v90;
                    v152 = v49;
                    v153 = v89;
                    v156 = (void *)v54;
                    LODWORD(v157) = v67;
                    v159 = v92 + 4;
                    v143 = nl_langinfo(0x10000);
                    v144 = v156;
                    v136 = (__int64)v159;
                    v145 = *v143;
                    LOBYTE(v67) = (_BYTE)v157;
                    v89 = v153;
                    v49 = v152;
                    LOWORD(v90) = WORD2(v151);
                    if ( !v145 )
                      v145 = 46;
                    v92[3] = v145;
                    if ( v144 )
                    {
                      v146 = (_BYTE *)v136;
                      do
                        *v146++ = 48;
                      while ( v146 != (_BYTE *)v144 + (_QWORD)v92 + 4 );
                      v136 += (__int64)v144;
                    }
                  }
                  v137 = v11[72];
                  v97 = (char *)(v136 + 3);
                  *(_WORD *)(v136 + 1) = 12331;
                  v92 = *(char **)&v161;
                  *(_BYTE *)v136 = v137 + 15;
LABEL_263:
                  LOWORD(v165) = v90;
                  v98 = v97 - v89;
                  if ( v49 > v97 - v89 )
                  {
                    v99 = v49 - v98;
                    v100 = &v97[v99];
                    v98 = &v97[v99] - v89;
                    if ( (v67 & 2) != 0 )
                    {
                      if ( v99 )
                      {
                        do
                          *v97++ = 32;
                        while ( v100 != v97 );
                      }
                    }
                    else if ( (v67 & 0x20) != 0 && v92 )
                    {
                      if ( v92 >= v97 )
                      {
                        v92 = v97;
                      }
                      else
                      {
                        v101 = -1LL;
                        do
                        {
                          v100[v101] = v97[v101];
                          --v101;
                        }
                        while ( v101 != v92 - 1 - v97 );
                      }
                      if ( v99 )
                      {
                        v102 = &v92[v99];
                        do
                          *v92++ = 48;
                        while ( v92 != v102 );
                      }
                    }
                    else
                    {
                      v112 = -1LL;
                      if ( v89 < v97 )
                      {
                        do
                        {
                          v100[v112] = v97[v112];
                          --v112;
                        }
                        while ( v89 - 1 - v97 != v112 );
                        v97 = v89;
                      }
                      if ( v99 )
                      {
                        v113 = &v97[v99];
                        do
                          *v97++ = 32;
                        while ( v97 != v113 );
                      }
                    }
                  }
                  if ( (unsigned __int64)v162 <= v98 )
                    goto LABEL_200;
                  v103 = v98 + v18;
                  v14 = v98 + v18;
                  if ( v10 - v18 <= v98 )
                  {
                    if ( __CFADD__(v98, v18) )
                    {
                      if ( v10 != -1LL )
                        goto LABEL_88;
                    }
                    else if ( v10 < v103 )
                    {
                      if ( v10 )
                      {
                        if ( (v10 & 0x8000000000000000LL) != 0LL )
                          goto LABEL_88;
                        v10 *= 2LL;
                        if ( v10 < v103 )
                          goto LABEL_373;
                      }
                      else
                      {
                        if ( v103 <= 0xC )
                        {
                          v10 = 12LL;
                          goto LABEL_280;
                        }
LABEL_373:
                        if ( v103 == -1LL )
                          goto LABEL_88;
                        v10 = v98 + v18;
                      }
LABEL_280:
                      if ( !v13 || v13 == src )
                      {
                        LOBYTE(v159) = v13 == src;
                        *(_QWORD *)&v161 = v98;
                        v162 = v89;
                        v114 = (char *)malloc(v10);
                        v89 = (char *)v162;
                        v98 = *(_QWORD *)&v161;
                        if ( !v114 )
                          goto LABEL_88;
                        if ( v18 && (_BYTE)v159 )
                        {
                          v115 = (char *)memcpy(v114, v13, v18);
                          v89 = (char *)v162;
                          v98 = *(_QWORD *)&v161;
                          v13 = v115;
                        }
                        else
                        {
                          v13 = v114;
                        }
                      }
                      else
                      {
                        *(_QWORD *)&v161 = v98;
                        v162 = v89;
                        v104 = (char *)realloc(v13, v10);
                        if ( !v104 )
                          goto LABEL_88;
                        v89 = (char *)v162;
                        v98 = *(_QWORD *)&v161;
                        v13 = v104;
                      }
                    }
                  }
                  v162 = v89;
                  memcpy(&v13[v18], v89, v98);
                  if ( v162 != v175 )
                    free(v162);
                  goto LABEL_110;
                }
LABEL_375:
                v55 = 12LL;
                goto LABEL_190;
              }
            }
            v55 = 12LL;
            if ( v29 != 65 )
              v55 = 18LL;
            v54 = 0LL;
            if ( v29 != 65 )
              v54 = 6LL;
            goto LABEL_190;
          }
        }
        v30 = *((_DWORD *)v11 + 4);
        v31 = v160 + 1;
        *v160 = 37;
        if ( (v30 & 1) != 0 )
        {
          v32 = v160;
          v160[1] = 39;
          v31 = (char *)(v32 + 2);
        }
        if ( (v30 & 2) != 0 )
          *v31++ = 45;
        if ( (v30 & 4) != 0 )
          *v31++ = 43;
        if ( (v30 & 8) != 0 )
          *v31++ = 32;
        if ( (v30 & 0x10) != 0 )
          *v31++ = 35;
        if ( (v30 & 0x40) != 0 )
          *v31++ = 73;
        if ( (v30 & 0x20) != 0 )
          *v31++ = 48;
        v33 = (_BYTE *)*((_QWORD *)v11 + 3);
        v34 = (_BYTE *)*((_QWORD *)v11 + 4);
        if ( v33 != v34 )
        {
          v159 = v26;
          *(_QWORD *)&v161 = v34 - v33;
          memcpy(v31, v33, v34 - v33);
          v26 = v159;
          v31 += *(_QWORD *)&v161;
        }
        v35 = (_BYTE *)*((_QWORD *)v11 + 6);
        v36 = (_BYTE *)*((_QWORD *)v11 + 7);
        if ( v35 != v36 )
        {
          v159 = v26;
          *(_QWORD *)&v161 = v36 - v35;
          memcpy(v31, v35, v36 - v35);
          v26 = v159;
          v31 += *(_QWORD *)&v161;
        }
        if ( (unsigned int)v162 <= 0x10 )
        {
          v37 = 1LL << (char)v162;
          if ( ((1LL << (char)v162) & 0x14180) != 0 )
            goto LABEL_125;
          if ( (v37 & 0x1000) != 0 )
          {
            *v31++ = 76;
          }
          else
          {
            if ( (v37 & 0x600) == 0 )
              goto LABEL_62;
            *v31++ = 108;
LABEL_125:
            *v31++ = 108;
          }
        }
LABEL_62:
        v38 = v11[72];
        v31[1] = 0;
        *v31 = v38;
        v39 = *((_QWORD *)v11 + 5);
        if ( v39 != -1 )
        {
          v40 = &v26[32 * v39];
          if ( *(_DWORD *)v40 == 5 )
          {
            LODWORD(v159) = 1;
            v165 = *((_DWORD *)v40 + 4);
            goto LABEL_65;
          }
LABEL_200:
          abort();
        }
        LODWORD(v159) = 0;
LABEL_65:
        v41 = *((_QWORD *)v11 + 8);
        if ( v41 != -1 )
        {
          v42 = &v26[32 * v41];
          if ( *(_DWORD *)v42 != 5 )
            goto LABEL_200;
          v43 = (int)v159;
          *(&v165 + (unsigned int)v159) = *((_DWORD *)v42 + 4);
          LODWORD(v159) = v43 + 1;
        }
        v44 = v18 + 2;
        if ( v18 >= 0xFFFFFFFFFFFFFFFELL )
        {
          if ( v10 != -1LL )
            goto LABEL_88;
        }
        else if ( v10 < v44 )
        {
          if ( v10 )
          {
            if ( (v10 & 0x8000000000000000LL) != 0LL )
              goto LABEL_88;
            v10 *= 2LL;
            if ( v10 >= v44 )
              goto LABEL_73;
          }
          else if ( v44 <= 0xC )
          {
            v10 = 12LL;
LABEL_73:
            if ( v13 && v13 != src )
            {
              v45 = (char *)realloc(v13, v10);
              if ( v45 )
                goto LABEL_76;
LABEL_88:
              v56 = v13;
              *(_QWORD *)&v161 = __errno_location();
LABEL_89:
              if ( v56 == src || !v56 )
              {
LABEL_91:
                if ( ptr )
                {
                  free(ptr);
LABEL_93:
                  if ( v171 != v174 )
                    free(v171);
                  if ( v168 != v169 )
                    free(v168);
                  v13 = 0LL;
                  **(_DWORD **)&v161 = 12;
                  return v13;
                }
LABEL_112:
                *(_QWORD *)&v161 = __errno_location();
                goto LABEL_93;
              }
LABEL_127:
              free(v56);
              goto LABEL_91;
            }
            LOBYTE(v161) = v13 == src;
            v94 = (char *)malloc(v10);
            v45 = v94;
            if ( !v94 )
              goto LABEL_88;
            if ( v18 && LOBYTE(v161) )
              v45 = (char *)memcpy(v94, v13, v18);
LABEL_76:
            v45[v18] = 0;
            v157 = v45;
            v46 = __errno_location();
            v47 = v157;
            v157 = v31;
            *(_QWORD *)&v161 = v46;
            LODWORD(v153) = *v46;
            while ( 2 )
            {
              v48 = 0x7FFFFFFFLL;
              v164 = -1;
              **(_DWORD **)&v161 = 0;
              if ( v10 - v18 <= 0x7FFFFFFF )
                v48 = v10 - v18;
              switch ( (int)v162 )
              {
                case 1:
                  v71 = (unsigned int)*((char *)v168 + 32 * *((_QWORD *)v11 + 10) + 16);
                  goto LABEL_150;
                case 2:
                  v71 = *((unsigned __int8 *)v168 + 32 * *((_QWORD *)v11 + 10) + 16);
                  goto LABEL_150;
                case 3:
                  v71 = (unsigned int)*((__int16 *)v168 + 16 * *((_QWORD *)v11 + 10) + 8);
                  goto LABEL_150;
                case 4:
                  v71 = *((unsigned __int16 *)v168 + 16 * *((_QWORD *)v11 + 10) + 8);
                  goto LABEL_150;
                case 5:
                case 6:
                case 13:
                case 14:
                  v71 = *((unsigned int *)v168 + 8 * *((_QWORD *)v11 + 10) + 4);
LABEL_150:
                  v70 = &v47[v18];
                  v156 = v47;
                  if ( (_DWORD)v159 != 1 )
                  {
                    if ( (_DWORD)v159 != 2 )
                    {
                      v149 = &v164;
                      goto LABEL_153;
                    }
                    goto LABEL_209;
                  }
                  v150 = &v164;
                  v149 = (int *)v71;
                  break;
                case 7:
                case 8:
                case 9:
                case 10:
                case 15:
                case 16:
                case 17:
                  v70 = &v47[v18];
                  v71 = *((_QWORD *)v168 + 4 * *((_QWORD *)v11 + 10) + 2);
                  v156 = v47;
                  if ( (_DWORD)v159 != 1 )
                  {
                    if ( (_DWORD)v159 != 2 )
                    {
                      v72 = ((__int64 (*)(char *, unsigned __int64, __int64, __int64, const char *, ...))__snprintf_chk)(
                              v70,
                              v48,
                              1LL,
                              -1LL,
                              v160,
                              v71,
                              &v164,
                              v150);
LABEL_131:
                      v47 = (char *)v156;
                      goto LABEL_132;
                    }
LABEL_209:
                    v72 = ((__int64 (*)(char *, unsigned __int64, __int64, __int64, const char *, ...))__snprintf_chk)(
                            v70,
                            v48,
                            1LL,
                            -1LL,
                            v160,
                            v165,
                            v166,
                            v71,
                            &v164);
LABEL_210:
                    v47 = (char *)v156;
LABEL_132:
                    v73 = v164;
                    if ( v164 < 0 )
                    {
LABEL_154:
                      if ( v157[1] )
                      {
                        v157[1] = 0;
                        continue;
                      }
                      if ( v72 < 0 )
                      {
                        v79 = **(_DWORD **)&v161;
                        if ( !**(_DWORD **)&v161 )
                        {
                          v79 = 84;
                          if ( (v11[72] & 0xEF) != 99 )
                            v79 = 22;
                        }
                        if ( v47 != src && v47 )
                          free(v47);
                        if ( ptr )
                          free(ptr);
                        if ( v171 != v174 )
                          free(v171);
                        if ( v168 != v169 )
                          free(v168);
                        **(_DWORD **)&v161 = v79;
                        return 0LL;
                      }
LABEL_136:
                      v164 = v72;
                      v73 = v72;
LABEL_137:
                      if ( (unsigned int)(v73 + 1) < v48 )
                      {
                        v13 = v47;
                        v14 = v18 + v73;
                        **(_DWORD **)&v161 = (_DWORD)v153;
                        goto LABEL_110;
                      }
                      if ( v10 - v18 > 0x7FFFFFFE )
                      {
                        if ( v47 != src && v47 )
                          free(v47);
                        if ( ptr )
                          free(ptr);
                        if ( v171 != v174 )
                          free(v171);
                        if ( v168 != v169 )
                          free(v168);
                        v13 = 0LL;
                        **(_DWORD **)&v161 = 75;
                        return v13;
                      }
                      v74 = (unsigned int)(v73 + 2);
                      v75 = __CFADD__(v18, v74);
                      v76 = v18 + v74;
                      if ( (v10 & 0x8000000000000000LL) != 0LL )
                      {
                        if ( v10 != -1LL )
                          goto LABEL_202;
                      }
                      else
                      {
                        if ( v75 )
                          goto LABEL_202;
                        if ( 2 * v10 >= v76 )
                          v76 = 2 * v10;
                        if ( v10 < v76 )
                        {
                          v10 *= 2LL;
                          if ( v10 < v76 )
                          {
                            if ( v76 == -1LL )
                            {
LABEL_202:
                              v56 = v47;
                              goto LABEL_89;
                            }
                            v10 = v76;
                          }
                          v77 = v47 == src;
                          if ( !v47 || v47 == src )
                          {
                            v156 = v47;
                            v93 = (char *)malloc(v10);
                            v47 = (char *)v156;
                            if ( !v93 )
                              goto LABEL_202;
                            if ( v18 && v77 )
                              v47 = (char *)memcpy(v93, v156, v18);
                            else
                              v47 = v93;
                          }
                          else
                          {
                            v156 = v47;
                            v78 = (char *)realloc(v47, v10);
                            v47 = (char *)v156;
                            if ( !v78 )
                              goto LABEL_202;
                            v47 = v78;
                          }
                        }
                      }
                      continue;
                    }
LABEL_133:
                    if ( v73 < v48 && v47[v73 + v18] )
                      goto LABEL_200;
                    if ( v73 >= v72 )
                      goto LABEL_137;
                    goto LABEL_136;
                  }
                  v150 = &v164;
                  v149 = (int *)v71;
                  break;
                case 11:
                  v83 = *((_QWORD *)v11 + 10);
                  v84 = &v47[v18];
                  v156 = v47;
                  v85 = *((double *)v168 + 4 * v83 + 2);
                  if ( (_DWORD)v159 == 1 )
                  {
                    v72 = ((__int64 (*)(char *, unsigned __int64, __int64, __int64, const char *, ...))__snprintf_chk)(
                            v84,
                            v48,
                            1LL,
                            -1LL,
                            v160,
                            v165,
                            v85,
                            &v164,
                            v150);
                  }
                  else
                  {
                    if ( (_DWORD)v159 != 2 )
                    {
                      v72 = ((__int64 (*)(char *, unsigned __int64, __int64, __int64, const char *, ...))__snprintf_chk)(
                              v84,
                              v48,
                              1LL,
                              -1LL,
                              v160,
                              &v164,
                              v85);
                      v47 = (char *)v156;
                      goto LABEL_132;
                    }
                    v72 = ((__int64 (*)(char *, unsigned __int64, __int64, __int64, const char *, ...))__snprintf_chk)(
                            v84,
                            v48,
                            1LL,
                            -1LL,
                            v160,
                            v165,
                            v85,
                            v166,
                            &v164);
                  }
                  v47 = (char *)v156;
                  goto LABEL_132;
                case 12:
                  v80 = *((_QWORD *)v11 + 10);
                  v81 = &v47[v18];
                  v156 = v47;
                  v82 = *((long double *)v168 + 2 * v80 + 1);
                  if ( (_DWORD)v159 == 1 )
                  {
                    v72 = ((__int64 (*)(char *, unsigned __int64, __int64, __int64, const char *, ...))__snprintf_chk)(
                            v81,
                            v48,
                            1LL,
                            -1LL,
                            v160,
                            v165,
                            *(_OWORD *)&v82,
                            &v164);
                    goto LABEL_210;
                  }
                  if ( (_DWORD)v159 != 2 )
                  {
                    v72 = ((__int64 (*)(char *, unsigned __int64, __int64, __int64, const char *, ...))__snprintf_chk)(
                            v81,
                            v48,
                            1LL,
                            -1LL,
                            v160,
                            &v164,
                            *(_OWORD *)&v82);
                    goto LABEL_131;
                  }
                  v72 = ((__int64 (*)(char *, unsigned __int64, __int64, __int64, const char *, ...))__snprintf_chk)(
                          v81,
                          v48,
                          1LL,
                          -1LL,
                          v160,
                          v165,
                          v166);
                  v47 = (char *)v156;
                  goto LABEL_132;
                default:
                  goto LABEL_408;
              }
              break;
            }
            v71 = v165;
LABEL_153:
            v72 = ((__int64 (*)(char *, unsigned __int64, __int64, __int64, const char *, ...))__snprintf_chk)(
                    v70,
                    v48,
                    1LL,
                    -1LL,
                    v160,
                    v71,
                    v149,
                    v150);
            v73 = v164;
            v47 = (char *)v156;
            if ( v164 < 0 )
              goto LABEL_154;
            goto LABEL_133;
          }
          if ( v18 != -3LL )
          {
            v10 = v18 + 2;
            goto LABEL_73;
          }
          goto LABEL_88;
        }
        v45 = v13;
        goto LABEL_76;
      }
      switch ( v28 )
      {
        case 18:
          v14 = v18;
          **((_BYTE **)v27 + 2) = v18;
          break;
        case 19:
          v14 = v18;
          **((_WORD **)v27 + 2) = v18;
          break;
        case 20:
          v14 = v18;
          **((_DWORD **)v27 + 2) = v18;
          break;
        case 21:
        case 22:
          v14 = v18;
          **((_QWORD **)v27 + 2) = v18;
          break;
        default:
LABEL_408:
          abort();
      }
LABEL_110:
      v12 = (_BYTE *)*((_QWORD *)v11 + 1);
      v11 += 88;
      v15 = *(_BYTE **)v11;
      ++v158;
      if ( v15 != v12 )
        goto LABEL_14;
LABEL_111:
      v18 = v14;
    }
    v107 = v18;
    v108 = v18 + 1;
    if ( v18 == -1LL )
    {
      if ( v10 != -1LL )
        goto LABEL_88;
    }
    else if ( v10 < v108 )
    {
      if ( v10 )
      {
        if ( (v10 & 0x8000000000000000LL) != 0LL )
          goto LABEL_88;
        v10 *= 2LL;
        if ( v10 >= v108 )
        {
LABEL_303:
          v109 = v13 == src;
          if ( !v13 || v13 == src )
          {
            v142 = (char *)malloc(v10);
            if ( !v142 )
              goto LABEL_88;
            if ( v107 && v109 )
              v13 = (char *)memcpy(v142, v13, v107);
            else
              v13 = v142;
          }
          else
          {
            v110 = (char *)realloc(v13, v10);
            if ( !v110 )
              goto LABEL_126;
            v13 = v110;
          }
          goto LABEL_307;
        }
      }
      else if ( v108 <= 0xC )
      {
        v10 = 12LL;
        goto LABEL_303;
      }
      if ( v18 == -2LL )
        goto LABEL_88;
      v10 = v18 + 1;
      goto LABEL_303;
    }
LABEL_307:
    v13[v107] = 0;
    if ( v10 > v108 && v13 != src )
    {
      v111 = (char *)realloc(v13, v108);
      if ( v111 )
        v13 = v111;
    }
    if ( ptr )
      free(ptr);
    if ( v171 != v174 )
      free(v171);
    if ( v168 != v169 )
      free(v168);
    *v155 = v107;
    return v13;
  }
  if ( v171 != v174 )
    free(v171);
  if ( v168 != v169 )
    free(v168);
  v13 = 0LL;
  *__errno_location() = 22;
  return v13;
}

__int64 __fastcall sub_411AC0(int *a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rdx
  unsigned int v4; // ecx
  _QWORD *v5; // r10
  unsigned int v7; // ecx
  _DWORD *v8; // r10
  unsigned int v9; // ecx
  _DWORD *v10; // r10
  unsigned int v11; // ecx
  _DWORD *v12; // r10
  unsigned int v13; // ecx
  _QWORD *v14; // r10
  long double *v15; // rcx
  unsigned int v16; // ecx
  void **v17; // r10
  void *v18; // rcx
  unsigned int v19; // ecx
  const char **v20; // r10
  const char *v21; // rcx

  v2 = a2[1];
  if ( *a2 )
  {
    v3 = 0LL;
    while ( 2 )
    {
      switch ( *(_DWORD *)v2 )
      {
        case 1:
        case 2:
          v11 = *a1;
          if ( (unsigned int)*a1 > 0x2F )
          {
            v12 = (_DWORD *)*((_QWORD *)a1 + 1);
            *((_QWORD *)a1 + 1) = v12 + 2;
          }
          else
          {
            v12 = (_DWORD *)(*((_QWORD *)a1 + 2) + v11);
            *a1 = v11 + 8;
          }
          *(_BYTE *)(v2 + 16) = *v12;
          goto LABEL_7;
        case 3:
        case 4:
          v9 = *a1;
          if ( (unsigned int)*a1 > 0x2F )
          {
            v10 = (_DWORD *)*((_QWORD *)a1 + 1);
            *((_QWORD *)a1 + 1) = v10 + 2;
          }
          else
          {
            v10 = (_DWORD *)(*((_QWORD *)a1 + 2) + v9);
            *a1 = v9 + 8;
          }
          *(_WORD *)(v2 + 16) = *v10;
          goto LABEL_7;
        case 5:
        case 6:
        case 0xD:
        case 0xE:
          v7 = *a1;
          if ( (unsigned int)*a1 > 0x2F )
          {
            v8 = (_DWORD *)*((_QWORD *)a1 + 1);
            *((_QWORD *)a1 + 1) = v8 + 2;
          }
          else
          {
            v8 = (_DWORD *)(*((_QWORD *)a1 + 2) + v7);
            *a1 = v7 + 8;
          }
          *(_DWORD *)(v2 + 16) = *v8;
          goto LABEL_7;
        case 7:
        case 8:
        case 9:
        case 0xA:
        case 0x11:
        case 0x12:
        case 0x13:
        case 0x14:
        case 0x15:
        case 0x16:
          v4 = *a1;
          if ( (unsigned int)*a1 > 0x2F )
          {
            v5 = (_QWORD *)*((_QWORD *)a1 + 1);
            *((_QWORD *)a1 + 1) = v5 + 1;
          }
          else
          {
            v5 = (_QWORD *)(*((_QWORD *)a1 + 2) + v4);
            *a1 = v4 + 8;
          }
          *(_QWORD *)(v2 + 16) = *v5;
          goto LABEL_7;
        case 0xB:
          v13 = a1[1];
          if ( v13 > 0xAF )
          {
            v14 = (_QWORD *)*((_QWORD *)a1 + 1);
            *((_QWORD *)a1 + 1) = v14 + 1;
          }
          else
          {
            v14 = (_QWORD *)(*((_QWORD *)a1 + 2) + v13);
            a1[1] = v13 + 16;
          }
          *(_QWORD *)(v2 + 16) = *v14;
          goto LABEL_7;
        case 0xC:
          v15 = (long double *)((*((_QWORD *)a1 + 1) + 15LL) & 0xFFFFFFFFFFFFFFF0LL);
          *((_QWORD *)a1 + 1) = v15 + 1;
          *(long double *)(v2 + 16) = *v15;
          goto LABEL_7;
        case 0xF:
          v19 = *a1;
          if ( (unsigned int)*a1 > 0x2F )
          {
            v20 = (const char **)*((_QWORD *)a1 + 1);
            *((_QWORD *)a1 + 1) = v20 + 1;
          }
          else
          {
            v20 = (const char **)(*((_QWORD *)a1 + 2) + v19);
            *a1 = v19 + 8;
          }
          v21 = *v20;
          if ( !*v20 )
            v21 = "(NULL)";
          *(_QWORD *)(v2 + 16) = v21;
          goto LABEL_7;
        case 0x10:
          v16 = *a1;
          if ( (unsigned int)*a1 > 0x2F )
          {
            v17 = (void **)*((_QWORD *)a1 + 1);
            *((_QWORD *)a1 + 1) = v17 + 1;
          }
          else
          {
            v17 = (void **)(*((_QWORD *)a1 + 2) + v16);
            *a1 = v16 + 8;
          }
          v18 = *v17;
          if ( !*v17 )
            v18 = &unk_417FE0;
          *(_QWORD *)(v2 + 16) = v18;
LABEL_7:
          ++v3;
          v2 += 32LL;
          if ( *a2 <= v3 )
            return 0LL;
          continue;
        default:
          return 0xFFFFFFFFLL;
      }
    }
  }
  return 0LL;
}

__int64 __fastcall sub_411CE0(char *a1, _QWORD *a2, unsigned __int64 *a3)
{
  _QWORD *v3; // rcx
  _QWORD *v4; // r8
  unsigned __int64 v6; // r9
  __int64 v7; // r11
  __int64 v8; // r13
  char *v9; // rbp
  __int64 result; // rax
  unsigned __int64 v11; // r14
  char *v12; // r12
  char v13; // bl
  char *v14; // rcx
  int v15; // eax
  __int64 v16; // rax
  int v17; // eax
  unsigned __int64 v18; // rbx
  _DWORD *v19; // r13
  unsigned __int64 v20; // rdx
  _DWORD *v21; // rax
  bool v22; // zf
  __int64 v23; // rax
  _BYTE *v24; // rcx
  int v25; // eax
  unsigned __int64 v26; // rbx
  unsigned __int64 v27; // rdx
  _DWORD *v28; // rax
  int v29; // ecx
  unsigned __int64 v30; // rax
  int *v31; // rax
  __int64 v32; // rax
  __int64 v33; // rbx
  _QWORD *v34; // r12
  _QWORD *v35; // rax
  _BYTE *v36; // rax
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // r9
  _DWORD *v39; // rax
  _DWORD *v40; // rsi
  _QWORD *v41; // rax
  _QWORD *v42; // rax
  _BYTE *v43; // rdx
  unsigned __int64 v44; // rsi
  __int64 v45; // rdx
  __int64 v46; // rax
  char *v47; // rdi
  bool v48; // cf
  unsigned __int64 v49; // rdx
  unsigned __int8 v50; // bl
  _QWORD *v51; // rdi
  unsigned __int64 v52; // r9
  _DWORD *v53; // rax
  char *i; // rcx
  char *v55; // rdx
  unsigned __int64 v56; // rax
  const void *v57; // rsi
  _QWORD *v58; // rdi
  unsigned __int64 v59; // r9
  _DWORD *v60; // rax
  _DWORD *v61; // rax
  unsigned __int64 v62; // rax
  __int64 v63; // rsi
  __int64 v64; // rdx
  char *v65; // rcx
  unsigned __int64 v66; // rdx
  unsigned __int8 v67; // si
  _BYTE *v68; // rdx
  unsigned __int64 v69; // rsi
  __int64 v70; // rdx
  __int64 v71; // rax
  _BYTE *v72; // rdi
  unsigned __int64 v73; // rdx
  unsigned __int8 v74; // bl
  _DWORD *v75; // rax
  _DWORD *src; // [rsp+8h] [rbp-80h]
  _QWORD *srca; // [rsp+8h] [rbp-80h]
  _QWORD *srcb; // [rsp+8h] [rbp-80h]
  unsigned __int64 v79; // [rsp+10h] [rbp-78h]
  unsigned __int64 v80; // [rsp+18h] [rbp-70h]
  unsigned __int64 v81; // [rsp+20h] [rbp-68h]
  _QWORD *v82; // [rsp+28h] [rbp-60h]
  unsigned __int64 v83; // [rsp+30h] [rbp-58h]
  char *v84; // [rsp+30h] [rbp-58h]
  unsigned __int64 v85; // [rsp+30h] [rbp-58h]
  int v86; // [rsp+30h] [rbp-58h]
  int v87; // [rsp+30h] [rbp-58h]
  _BYTE *v88; // [rsp+30h] [rbp-58h]
  char *v89; // [rsp+30h] [rbp-58h]
  _BYTE *v90; // [rsp+30h] [rbp-58h]
  _QWORD *v91; // [rsp+38h] [rbp-50h]
  __int64 v92; // [rsp+38h] [rbp-50h]
  _QWORD *v93; // [rsp+38h] [rbp-50h]
  __int64 v94; // [rsp+38h] [rbp-50h]
  __int64 v95; // [rsp+38h] [rbp-50h]
  __int64 v96; // [rsp+38h] [rbp-50h]
  __int64 v97; // [rsp+38h] [rbp-50h]
  __int64 v98; // [rsp+38h] [rbp-50h]
  unsigned __int64 v99; // [rsp+40h] [rbp-48h]
  unsigned __int64 v100; // [rsp+40h] [rbp-48h]
  unsigned __int64 v101; // [rsp+40h] [rbp-48h]
  unsigned __int64 v102; // [rsp+40h] [rbp-48h]
  unsigned __int64 v103; // [rsp+40h] [rbp-48h]
  unsigned __int64 v104; // [rsp+40h] [rbp-48h]
  _QWORD *v105; // [rsp+48h] [rbp-40h]
  _QWORD *v106; // [rsp+48h] [rbp-40h]
  _QWORD *v107; // [rsp+48h] [rbp-40h]
  _QWORD *v108; // [rsp+48h] [rbp-40h]
  _QWORD *v109; // [rsp+48h] [rbp-40h]
  _QWORD *v110; // [rsp+48h] [rbp-40h]

  v3 = a2 + 4;
  v4 = a2;
  v6 = 7LL;
  v7 = 7LL;
  v8 = 0LL;
  *a2 = 0LL;
  a2[1] = a2 + 4;
  v82 = a2 + 4;
  *a3 = 0LL;
  src = a3 + 2;
  a3[1] = (unsigned __int64)(a3 + 2);
  v80 = 0LL;
  v79 = 0LL;
  v81 = 0LL;
  while ( 1 )
  {
    if ( !*a1 )
    {
      v3[11 * v8] = a1;
      v4[2] = v79;
      v4[3] = v80;
      return 0LL;
    }
    v9 = a1 + 1;
    if ( *a1 == 37 )
      break;
LABEL_3:
    a1 = v9;
  }
  v11 = -1LL;
  v12 = (char *)&v3[11 * v8];
  *(_QWORD *)v12 = a1;
  *((_DWORD *)v12 + 4) = 0;
  *((_QWORD *)v12 + 3) = 0LL;
  *((_QWORD *)v12 + 4) = 0LL;
  *((_QWORD *)v12 + 5) = -1LL;
  *((_QWORD *)v12 + 6) = 0LL;
  *((_QWORD *)v12 + 7) = 0LL;
  *((_QWORD *)v12 + 8) = -1LL;
  *((_QWORD *)v12 + 10) = -1LL;
  v13 = a1[1];
  if ( (unsigned __int8)(v13 - 48) > 9u )
    goto LABEL_16;
  v36 = a1 + 1;
  do
    ++v36;
  while ( (unsigned __int8)(*v36 - 48) <= 9u );
  if ( *v36 != 36 )
  {
    v11 = -1LL;
    goto LABEL_16;
  }
  v62 = 0LL;
  do
  {
    v63 = -1LL;
    v64 = v13 - 48;
    if ( v62 <= 0x1999999999999999LL )
      v63 = 10 * v62;
    v65 = v9;
    while ( 1 )
    {
      v13 = v9[1];
      v48 = __CFADD__(v63, v64);
      v66 = v63 + v64;
      v62 = v66;
      ++v9;
      v67 = v13 - 48;
      if ( !v48 )
        break;
      if ( v67 > 9u )
        goto LABEL_130;
      v63 = -1LL;
      v65 = v9;
      v64 = v13 - 48;
    }
  }
  while ( v67 <= 9u );
  v11 = v66 - 1;
  if ( v66 - 1 > 0xFFFFFFFFFFFFFFFDLL )
    goto LABEL_130;
  v9 = v65 + 2;
  v13 = v65[2];
  while ( 1 )
  {
LABEL_16:
    v14 = v9 + 1;
    switch ( v13 )
    {
      case '\'':
        *((_DWORD *)v12 + 4) |= 1u;
        goto LABEL_15;
      case '-':
        *((_DWORD *)v12 + 4) |= 2u;
        goto LABEL_15;
      case '+':
        *((_DWORD *)v12 + 4) |= 4u;
        goto LABEL_15;
      case ' ':
        *((_DWORD *)v12 + 4) |= 8u;
        goto LABEL_15;
      case '#':
        *((_DWORD *)v12 + 4) |= 0x10u;
        goto LABEL_15;
    }
    if ( v13 != 48 )
      break;
    *((_DWORD *)v12 + 4) |= 0x20u;
LABEL_15:
    v13 = *v14;
    ++v9;
  }
  if ( v13 == 73 )
  {
    *((_DWORD *)v12 + 4) |= 0x40u;
    goto LABEL_15;
  }
  if ( v13 == 42 )
  {
    v16 = 1LL;
    *((_QWORD *)v12 + 3) = v9;
    *((_QWORD *)v12 + 4) = v14;
    if ( v79 )
      v16 = v79;
    v79 = v16;
    v17 = v9[1];
    if ( (unsigned __int8)(v9[1] - 48) > 9u )
      goto LABEL_39;
    v43 = v9 + 1;
    do
      ++v43;
    while ( (unsigned __int8)(*v43 - 48) <= 9u );
    if ( *v43 == 36 )
    {
      v44 = 0LL;
      do
      {
        v45 = -1LL;
        v46 = v17 - 48;
        if ( v44 <= 0x1999999999999999LL )
          v45 = 10 * v44;
        v47 = v14;
        while ( 1 )
        {
          v48 = __CFADD__(v46, v45);
          v49 = v46 + v45;
          v17 = v14[1];
          v44 = v49;
          ++v14;
          v50 = v17 - 48;
          if ( !v48 )
            break;
          if ( v50 > 9u )
            goto LABEL_130;
          v45 = -1LL;
          v47 = v14;
          v46 = v17 - 48;
        }
      }
      while ( v50 <= 9u );
      v18 = v49 - 1;
      if ( v49 - 1 > 0xFFFFFFFFFFFFFFFDLL )
        goto LABEL_130;
      *((_QWORD *)v12 + 5) = v18;
      v14 = v47 + 2;
    }
    else
    {
LABEL_39:
      v18 = *((_QWORD *)v12 + 5);
      if ( v18 == -1LL )
      {
        *((_QWORD *)v12 + 5) = v81;
        if ( v81 == -1LL )
          goto LABEL_130;
        v18 = v81++;
      }
    }
    v19 = (_DWORD *)a3[1];
    if ( v6 > v18 )
    {
      v20 = *a3;
LABEL_42:
      if ( v20 <= v18 )
      {
        do
        {
          ++v20;
          v19[8 * v20 - 8] = 0;
        }
        while ( v20 <= v18 );
        *a3 = v20;
      }
      v21 = &v19[8 * v18];
      if ( *v21 )
      {
        if ( *v21 == 5 )
        {
          v13 = *v14;
          v9 = v14++;
          goto LABEL_25;
        }
        goto LABEL_131;
      }
      *v21 = 5;
      v13 = *v14;
      v9 = v14++;
      if ( v13 != 46 )
        goto LABEL_26;
LABEL_47:
      v22 = v9[1] == 42;
      *((_QWORD *)v12 + 6) = v9;
      if ( !v22 )
      {
        if ( (unsigned __int8)(v9[1] - 48) > 9u )
        {
          v9 = v14;
          v37 = 1LL;
        }
        else
        {
          do
            ++v14;
          while ( (unsigned __int8)(*v14 - 48) <= 9u );
          v37 = v14 - v9;
          v9 = v14;
        }
        *((_QWORD *)v12 + 7) = v14;
        v13 = *v14;
        if ( v80 >= v37 )
          v37 = v80;
        v80 = v37;
        goto LABEL_26;
      }
      v23 = 2LL;
      v24 = v9 + 2;
      *((_QWORD *)v12 + 7) = v9 + 2;
      if ( v80 >= 2 )
        v23 = v80;
      v80 = v23;
      v25 = v9[2];
      if ( (unsigned __int8)(v9[2] - 48) > 9u )
        goto LABEL_51;
      v68 = v9 + 2;
      do
        ++v68;
      while ( (unsigned __int8)(*v68 - 48) <= 9u );
      if ( *v68 == 36 )
      {
        v69 = 0LL;
        do
        {
          v70 = -1LL;
          v71 = v25 - 48;
          if ( v69 <= 0x1999999999999999LL )
            v70 = 10 * v69;
          v72 = v24;
          while ( 1 )
          {
            v48 = __CFADD__(v71, v70);
            v73 = v71 + v70;
            v25 = (char)*++v24;
            v69 = v73;
            v74 = v25 - 48;
            if ( !v48 )
              break;
            if ( v74 > 9u )
              goto LABEL_130;
            v70 = -1LL;
            v72 = v24;
            v71 = v25 - 48;
          }
        }
        while ( v74 <= 9u );
        v26 = v73 - 1;
        if ( v73 - 1 <= 0xFFFFFFFFFFFFFFFDLL )
        {
          *((_QWORD *)v12 + 8) = v26;
          v24 = v72 + 2;
LABEL_52:
          v19 = (_DWORD *)a3[1];
          if ( v6 > v26 )
          {
            v27 = *a3;
            goto LABEL_54;
          }
          v59 = 2 * v6;
          if ( v59 <= v26 )
            v59 = v26 + 1;
          if ( v59 <= 0x7FFFFFFFFFFFFFFLL )
          {
            v108 = v4;
            v102 = v59;
            v96 = v7;
            v88 = v24;
            if ( src == v19 )
            {
              v75 = malloc(32 * v59);
              v24 = v88;
              v7 = v96;
              v6 = v102;
              v4 = v108;
              if ( !v75 )
                goto LABEL_162;
              v27 = *a3;
              v40 = src;
              v19 = v75;
            }
            else
            {
              v60 = realloc(v19, 32 * v59);
              v40 = (_DWORD *)a3[1];
              v24 = v88;
              v19 = v60;
              v7 = v96;
              v6 = v102;
              v4 = v108;
              if ( !v60 )
                goto LABEL_160;
              v27 = *a3;
              if ( src != v40 )
                goto LABEL_171;
            }
            v110 = v4;
            v104 = v6;
            v98 = v7;
            v90 = v24;
            memcpy(v19, v40, 32 * v27);
            v27 = *a3;
            v4 = v110;
            v6 = v104;
            v7 = v98;
            v24 = v90;
LABEL_171:
            a3[1] = (unsigned __int64)v19;
LABEL_54:
            if ( v27 <= v26 )
            {
              do
              {
                ++v27;
                v19[8 * v27 - 8] = 0;
              }
              while ( v27 <= v26 );
              *a3 = v27;
            }
            v28 = &v19[8 * v26];
            if ( !*v28 )
            {
              *v28 = 5;
              v9 = v24;
              v13 = *v24;
              goto LABEL_26;
            }
            if ( *v28 == 5 )
            {
              v13 = *v24;
              v9 = v24;
              goto LABEL_26;
            }
            goto LABEL_131;
          }
LABEL_159:
          v40 = v19;
          goto LABEL_160;
        }
      }
      else
      {
LABEL_51:
        v26 = *((_QWORD *)v12 + 8);
        if ( v26 != -1LL )
          goto LABEL_52;
        *((_QWORD *)v12 + 8) = v81;
        if ( v81 != -1LL )
        {
          v26 = v81++;
          goto LABEL_52;
        }
      }
LABEL_130:
      v19 = (_DWORD *)a3[1];
LABEL_131:
      if ( src != v19 )
      {
        srca = v4;
        free(v19);
        v4 = srca;
      }
      v51 = (_QWORD *)v4[1];
      if ( v82 != v51 )
        free(v51);
      *__errno_location() = 22;
      return 0xFFFFFFFFLL;
    }
    v38 = 2 * v6;
    if ( v38 <= v18 )
      v38 = v18 + 1;
    if ( v38 > 0x7FFFFFFFFFFFFFFLL )
      goto LABEL_159;
    v105 = v4;
    v99 = v38;
    v92 = v7;
    v84 = v14;
    if ( src == v19 )
    {
      v61 = malloc(32 * v38);
      v14 = v84;
      v7 = v92;
      v6 = v99;
      v4 = v105;
      if ( !v61 )
        goto LABEL_162;
      v20 = *a3;
      v40 = src;
      v19 = v61;
    }
    else
    {
      v39 = realloc(v19, 32 * v38);
      v40 = (_DWORD *)a3[1];
      v14 = v84;
      v19 = v39;
      v7 = v92;
      v6 = v99;
      v4 = v105;
      if ( !v39 )
        goto LABEL_160;
      v20 = *a3;
      if ( src != v40 )
        goto LABEL_93;
    }
    v109 = v4;
    v103 = v6;
    v97 = v7;
    v89 = v14;
    memcpy(v19, v40, 32 * v20);
    v20 = *a3;
    v4 = v109;
    v6 = v103;
    v7 = v97;
    v14 = v89;
LABEL_93:
    a3[1] = (unsigned __int64)v19;
    goto LABEL_42;
  }
  if ( (unsigned __int8)(v13 - 48) <= 9u )
  {
    *((_QWORD *)v12 + 3) = v9;
    if ( (unsigned __int8)(*v9 - 48) <= 9u )
    {
      for ( i = v9; ; ++i )
      {
        v55 = i + 1;
        if ( (unsigned __int8)(i[1] - 48) > 9u )
          break;
      }
      v14 = i + 2;
      v56 = v55 - v9;
      v9 = v55;
      if ( v79 >= v56 )
        v56 = v79;
      v79 = v56;
    }
    *((_QWORD *)v12 + 4) = v9;
    v13 = *v9;
  }
LABEL_25:
  if ( v13 == 46 )
    goto LABEL_47;
LABEL_26:
  v15 = 0;
  while ( 2 )
  {
    ++v9;
    if ( v13 == 104 )
    {
      v15 |= 1 << (v15 & 1);
      goto LABEL_33;
    }
    if ( v13 == 76 )
    {
      v15 |= 4u;
      goto LABEL_33;
    }
    if ( v13 == 108 || v13 == 106 || (v13 & 0xDF) == 90 || v13 == 116 )
    {
      v15 += 8;
LABEL_33:
      v13 = *v9;
      continue;
    }
    break;
  }
  switch ( v13 )
  {
    case '%':
      goto LABEL_70;
    case 'A':
    case 'E':
    case 'F':
    case 'G':
    case 'a':
    case 'e':
    case 'f':
    case 'g':
      v29 = 12;
      if ( v15 <= 15 )
        v29 = ((v15 & 4) != 0) + 11;
      goto LABEL_62;
    case 'C':
      v29 = 14;
      v13 = 99;
      goto LABEL_62;
    case 'S':
      v29 = 16;
      v13 = 115;
      goto LABEL_62;
    case 'X':
    case 'o':
    case 'u':
    case 'x':
      v29 = 10;
      if ( v15 <= 15 && (v15 & 4) == 0 )
      {
        v29 = 8;
        if ( v15 <= 7 )
        {
          v29 = 2;
          if ( (v15 & 2) == 0 )
            v29 = (v15 & 1) == 0 ? 6 : 4;
        }
      }
      goto LABEL_62;
    case 'c':
      v29 = (v15 > 7) + 13;
      goto LABEL_62;
    case 'd':
    case 'i':
      v29 = 9;
      if ( v15 <= 15 && (v15 & 4) == 0 )
      {
        v29 = 7;
        if ( v15 <= 7 )
        {
          v29 = 1;
          if ( (v15 & 2) == 0 )
            v29 = (v15 & 1) == 0 ? 5 : 3;
        }
      }
      goto LABEL_62;
    case 'n':
      v29 = 22;
      if ( v15 <= 15 && (v15 & 4) == 0 )
      {
        v29 = 21;
        if ( v15 <= 7 )
        {
          v29 = 18;
          if ( (v15 & 2) == 0 )
            v29 = ((v15 & 1) == 0) + 19;
        }
      }
      goto LABEL_62;
    case 'p':
      v29 = 17;
      goto LABEL_62;
    case 's':
      v29 = (v15 > 7) + 15;
LABEL_62:
      if ( v11 == -1LL )
      {
        *((_QWORD *)v12 + 10) = v81;
        if ( v81 == -1LL )
          goto LABEL_130;
        v11 = v81++;
      }
      else
      {
        *((_QWORD *)v12 + 10) = v11;
      }
      v19 = (_DWORD *)a3[1];
      if ( v6 > v11 )
        goto LABEL_65;
      v52 = 2 * v6;
      if ( v52 <= v11 )
        v52 = v11 + 1;
      if ( v52 > 0x7FFFFFFFFFFFFFFLL )
        goto LABEL_159;
      v106 = v4;
      v100 = v52;
      v94 = v7;
      v86 = v29;
      if ( src == v19 )
      {
        v53 = malloc(32 * v52);
        v29 = v86;
        v7 = v94;
        v6 = v100;
        v4 = v106;
        if ( !v53 )
          goto LABEL_162;
        goto LABEL_158;
      }
      v53 = realloc(v19, 32 * v52);
      v29 = v86;
      v7 = v94;
      v19 = v53;
      v6 = v100;
      v4 = v106;
      if ( !v53 )
        goto LABEL_210;
      if ( src == (_DWORD *)a3[1] )
      {
        v19 = src;
LABEL_158:
        v57 = v19;
        v107 = v4;
        v101 = v6;
        v19 = v53;
        v95 = v7;
        v87 = v29;
        memcpy(v53, v57, 32 * *a3);
        v4 = v107;
        v29 = v87;
        v6 = v101;
        v7 = v95;
      }
      a3[1] = (unsigned __int64)v19;
LABEL_65:
      v30 = *a3;
      if ( *a3 <= v11 )
      {
        do
        {
          ++v30;
          v19[8 * v30 - 8] = 0;
        }
        while ( v30 <= v11 );
        *a3 = v30;
      }
      v31 = &v19[8 * v11];
      if ( *v31 )
      {
        if ( *v31 != v29 )
          goto LABEL_131;
      }
      else
      {
        *v31 = v29;
      }
LABEL_70:
      v12[72] = v13;
      v32 = *v4;
      *((_QWORD *)v12 + 1) = v9;
      v8 = v32 + 1;
      *v4 = v32 + 1;
      if ( v7 > (unsigned __int64)(v32 + 1) )
      {
        v3 = (_QWORD *)v4[1];
        goto LABEL_3;
      }
      if ( v7 >= 0 )
      {
        v33 = 2 * v7;
        if ( (unsigned __int64)(2 * v7) <= 0x2E8BA2E8BA2E8BALL )
        {
          v34 = (_QWORD *)v4[1];
          v91 = v4;
          v83 = v6;
          if ( v82 == v34 )
          {
            v41 = malloc(176 * v7);
            v6 = v83;
            v4 = v91;
            v3 = v41;
            if ( !v41 )
            {
              v40 = (_DWORD *)a3[1];
              if ( src != v40 )
                goto LABEL_161;
              goto LABEL_164;
            }
          }
          else
          {
            v35 = realloc(v34, 176 * v7);
            v6 = v83;
            v4 = v91;
            v3 = v35;
            if ( !v35 )
              goto LABEL_210;
            v34 = (_QWORD *)v91[1];
            v8 = *v91;
            if ( v82 != v34 )
              goto LABEL_77;
          }
          v93 = v4;
          v85 = v6;
          v42 = memcpy(v3, v34, 88 * v8);
          v4 = v93;
          v6 = v85;
          v3 = v42;
          v8 = *v93;
LABEL_77:
          v4[1] = v3;
          v7 = v33;
          goto LABEL_3;
        }
      }
LABEL_210:
      v40 = (_DWORD *)a3[1];
LABEL_160:
      if ( src != v40 )
      {
LABEL_161:
        srcb = v4;
        free(v40);
        v4 = srcb;
      }
LABEL_162:
      v58 = (_QWORD *)v4[1];
      if ( v82 != v58 )
        free(v58);
LABEL_164:
      *__errno_location() = 12;
      result = 0xFFFFFFFFLL;
      break;
    default:
      goto LABEL_130;
  }
  return result;
}

void init(void)
{
  init_proc();
}

void fini(void)
{
  ;
}

int __fastcall sub_412A60(void (__fastcall *a1)(void *))
{
  void *v1; // rdx

  v1 = 0LL;
  if ( &qword_61B268 )
    v1 = (void *)qword_61B268;
  return __cxa_atexit(a1, 0LL, v1);
}

__int64 __fastcall sub_412A78(__int64 a1, __int64 a2, __int64 a3)
{
  void (**i)(void); // rbx

  for ( i = (void (**)(void))&qword_61AE30; *i != (void (*)(void))-1LL; --i )
    (*i)();
  return a3;
}
